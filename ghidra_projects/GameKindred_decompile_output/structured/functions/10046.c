// functions/10046 — 411 functions
#include "GameKindred.h"




void thunk_FUN_1004604c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if ((((int)uVar1 != 0x1f) && (*(short *)(param_1 + uVar1 * 0x38 + 0x70) == 2)) &&
     (*(char *)(*(long *)(param_1 + 0x38) + 0x90) != '\0')) {
    lVar2 = *(long *)(param_1 + 0x10);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
    if ((((int)uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + uVar1 * 0x38 + 0x90) - 3)) &&
       (FUN_1003b98c8(param_1), DAT_101d23a38 != '\0')) {
      lVar3 = *(long *)(param_1 + 0x10);
      lVar2 = lVar3;
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dd68) {
        uStack_5c = *(undefined4 *)(lVar3 + 0x260);
      }
      else {
        do {
          lVar2 = *(long *)(lVar2 + 0x10);
        } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68);
        uStack_5c = *(undefined4 *)(lVar2 + 0x260);
        do {
          lVar3 = *(long *)(lVar3 + 0x10);
        } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
      }
      uStack_58 = *(undefined4 *)(lVar3 + 0x260);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      ppuStack_78 = &PTR_FUN_101496b18;
      iStack_54 = DAT_1018589d8;
      uStack_4c = 0x13f000000;
      uStack_30 = 0;
      uStack_3c = 0;
      uStack_44 = 0;
      uStack_28 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_50 = FUN_1003d4e0c(PTR_s_Buff_DashInterrupted_10185bd80);
      FUN_10049639c(&ppuStack_78,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100460030(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long local_40;
  undefined4 local_38;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if ((((int)uVar3 != 0x1f) && (*(short *)(param_1 + uVar3 * 0x38 + 0x70) == 2)) &&
     ((*(uint *)(param_1 + 0x238) & 0x38) == 8)) {
    plVar1 = *(long **)(param_1 + 0x1c8);
    lVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        lVar2 = 0;
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
      }
    }
    if (lVar2 == param_2) {
      local_40 = param_3 + 0x28;
      local_38 = *(undefined4 *)(param_3 + 0x30);
      FUN_10045f950(param_1,&local_40);
    }
  }
  return;
}




void FUN_1004600fc(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  int local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x7e) != '\0' && DAT_101d23a38 != '\0') {
    plVar5 = (long *)(param_1 + 0x10);
    plVar3 = plVar5;
    do {
      lVar4 = *plVar3;
      plVar3 = (long *)(lVar4 + 0x10);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68);
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_a8 = &PTR_FUN_101496b18;
    local_84 = DAT_1018589d8;
    local_7c = 0x1400ccccd;
    local_60 = 0;
    local_6c = 0;
    local_74 = 0;
    local_58 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_8c = uVar1;
    uStack_88 = uVar1;
    local_80 = FUN_1003d4e0c(PTR_s_Buff_Revealed_10185a448);
    FUN_10049639c(&local_a8,&DAT_101e47d30);
    plVar3 = plVar5;
    do {
      lVar4 = *plVar3;
      plVar3 = (long *)(lVar4 + 0x10);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68);
    if ((((*(byte *)(lVar4 + 0x2f4) & 1) != 0) && ((*(uint *)(param_1 + 0x238) & 0x38) == 8)) &&
       (plVar3 = *(long **)(param_1 + 0x1c8), plVar3 != (long *)0x0)) {
      if (*(int *)(param_1 + 0x1d0) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
        if (lVar4 != 0) {
          do {
            lVar4 = *plVar5;
            plVar5 = (long *)(lVar4 + 0x10);
          } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68);
          cVar2 = *(char *)(lVar4 + 0x264);
          lVar4 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
          if ((cVar2 != *(char *)(lVar4 + 0x264)) &&
             (lVar4 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))(),
             (*(uint *)(lVar4 + 0x2f4) & 0x20101001) != 0)) {
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = 0;
            local_100 = &PTR_FUN_101496b18;
            local_dc = DAT_1018589d8;
            local_d4 = 0x1400ccccd;
            local_b8 = 0;
            local_c4 = 0;
            local_cc = 0;
            local_b0 = DAT_101dc0b88;
            DAT_1018589d8 = DAT_1018589d8 + 1;
            local_e4 = uVar1;
            uStack_e0 = uVar1;
            local_d8 = FUN_1003d4e0c(PTR_s_Buff_GloballyVisible_10185a1f0);
            FUN_10049639c(&local_100,&DAT_101e47d30);
          }
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
      }
    }
  }
  return;
}




void FUN_100460330(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_2 + 0x1f8);
  piVar1 = &DAT_101d90970;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
  }
  if ((*piVar1 != DAT_101d90970) &&
     (uVar3 = (ulong)*(byte *)(param_1 + 0x198), *(byte *)(param_1 + 0x198) != 0)) {
    lVar7 = 10;
    while( true ) {
      lVar5 = *(long *)(param_1 + lVar7 * 8);
      lVar6 = *(long *)(lVar5 + 0x1f8);
      piVar1 = &DAT_101d90970;
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 0x50);
      }
      piVar2 = &DAT_101d90970;
      if (lVar4 != 0) {
        piVar2 = (int *)(lVar4 + 0x50);
      }
      if (*piVar1 == *piVar2) {
        FUN_10045e3b4(lVar5 + 0x68,1,0,0);
        uVar3 = (ulong)*(byte *)(param_1 + 0x198);
      }
      if (uVar3 <= lVar7 - 9U) break;
      lVar4 = *(long *)(param_2 + 0x1f8);
      lVar7 = lVar7 + 1;
    }
  }
  return;
}




ushort FUN_1004603ec(ushort *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar2 = (ulong)*param_1 & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_10046042c;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_10046042c:
    if ((uint)uVar3 != uVar1) {
      return param_1[uVar2 * 0x1c + 5] >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_100460454(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if (((int)uVar2 != 0x1f) && (*(short *)(param_1 + uVar2 * 0x38 + 0x70) == 5)) {
    lVar3 = 0;
    bVar4 = true;
    while ((lVar3 = *(long *)(param_1 + lVar3 * 8 + 0x1e8), lVar3 == 0 || lVar3 == param_2 ||
           (*(char *)(lVar3 + 0x6a) != '\0'))) {
      lVar3 = 1;
      bVar1 = !bVar4;
      bVar4 = false;
      if (bVar1) {
        FUN_10045e3b4(param_1 + 0x68,1,0,0);
        return;
      }
    }
  }
  return;
}




void FUN_1004604c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if ((((int)uVar1 != 0x1f) && (*(short *)(param_1 + uVar1 * 0x38 + 0x70) == 2)) &&
     (*(char *)(*(long *)(param_1 + 0x38) + 0x90) != '\0')) {
    lVar2 = *(long *)(param_1 + 0x10);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
    if ((((int)uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + uVar1 * 0x38 + 0x90) - 3)) &&
       (FUN_1003b98c8(param_1), DAT_101d23a38 != '\0')) {
      lVar3 = *(long *)(param_1 + 0x10);
      lVar2 = lVar3;
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dd68) {
        local_5c = *(undefined4 *)(lVar3 + 0x260);
      }
      else {
        do {
          lVar2 = *(long *)(lVar2 + 0x10);
        } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68);
        local_5c = *(undefined4 *)(lVar2 + 0x260);
        do {
          lVar3 = *(long *)(lVar3 + 0x10);
        } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
      }
      uStack_58 = *(undefined4 *)(lVar3 + 0x260);
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_78 = &PTR_FUN_101496b18;
      local_54 = DAT_1018589d8;
      local_4c = 0x13f000000;
      local_30 = 0;
      local_3c = 0;
      local_44 = 0;
      local_28 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_50 = FUN_1003d4e0c(PTR_s_Buff_DashInterrupted_10185bd80);
      FUN_10049639c(&local_78,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100460648(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10046065c(long param_1,long param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  
  *(long *)(param_1 + 0x28) = param_2;
  plVar7 = *(long **)(param_2 + 0x30);
  lVar6 = param_2;
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    while (lVar6 != 0) {
      plVar7 = plVar7 + 1;
      FUN_100460878(param_1,lVar6,0);
      lVar6 = *plVar7;
    }
    lVar6 = *(long *)(param_1 + 0x28);
  }
  pcVar10 = *(char **)(lVar6 + 0x10);
  iVar3 = FUN_1004d2538(pcVar10);
  pcVar1 = "Ability__Withdraw";
  if (iVar3 == 0) {
    pcVar1 = pcVar10;
  }
  uVar4 = FUN_1004d2538(pcVar1);
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_1004608fc(param_1,"*Ability__Withdraw*",pcVar1);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
  }
  uVar5 = FUN_10046095c(param_1);
  uVar4 = FUN_1004d2538();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_1004608fc(param_1,"*Ability__Die*",uVar5);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
  }
  uVar5 = FUN_1004609c8(param_1);
  uVar4 = FUN_1004d2538();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_1004608fc(param_1,"*Ability__Emote_Dance*",uVar5);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  uVar5 = FUN_100460a34(param_1);
  uVar4 = FUN_1004d2538();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_1004608fc(param_1,"*Ability__Emote_Taunt*",uVar5);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
  }
  plVar7 = *(long **)(param_2 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    while (lVar6 != 0) {
      plVar9 = *(long **)(lVar6 + 0x38);
      if (plVar9 != (long *)0x0) {
        puVar8 = (undefined8 *)*plVar9;
        while (puVar8 != (undefined8 *)0x0) {
          plVar9 = plVar9 + 1;
          FUN_100460aa0(param_1,"*Ability__DefaultAttack*",*puVar8);
          puVar8 = (undefined8 *)*plVar9;
        }
        lVar6 = *plVar7;
      }
      plVar9 = *(long **)(lVar6 + 0x40);
      if (plVar9 != (long *)0x0) {
        puVar8 = (undefined8 *)*plVar9;
        while (puVar8 != (undefined8 *)0x0) {
          plVar9 = plVar9 + 1;
          FUN_100460aa0(param_1,"*Ability__DefaultAttack*",*puVar8);
          puVar8 = (undefined8 *)*plVar9;
        }
      }
      plVar7 = plVar7 + 1;
      lVar6 = *plVar7;
    }
  }
  if (*(uint *)(param_2 + 0x48) != 0xffffffff) {
    bVar2 = *(byte *)(param_1 + 0x199);
    *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0xf0) =
         *(undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 0x48) * 8 + 0x50);
    *(byte *)(param_1 + 0x199) = bVar2 + 1;
  }
  if (*(uint *)(param_2 + 0x4c) != 0xffffffff) {
    bVar2 = *(byte *)(param_1 + 0x199);
    *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0xf0) =
         *(undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 0x4c) * 8 + 0x50);
    *(byte *)(param_1 + 0x199) = bVar2 + 1;
  }
  if (*(uint *)(param_2 + 0x50) != 0xffffffff) {
    bVar2 = *(byte *)(param_1 + 0x199);
    *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0xf0) =
         *(undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 0x50) * 8 + 0x50);
    *(byte *)(param_1 + 0x199) = bVar2 + 1;
  }
  return;
}




undefined8 FUN_100460878(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x198) == '\x14') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1010a0298(param_1,DAT_101867310);
    FUN_10045e718(uVar2,param_2,param_1,param_3);
    bVar1 = *(byte *)(param_1 + 0x198);
    if (*(char *)(param_2 + 0x8a) != '\0') {
      *(uint *)(param_1 + 0x194) = (uint)bVar1;
    }
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x50) = uVar2;
    *(byte *)(param_1 + 0x198) = bVar1 + 1;
  }
  return uVar2;
}




void FUN_1004608fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_2,0);
  if (lVar2 != 0) {
    FUN_100460878(param_1,lVar2,param_3);
    return;
  }
  return;
}




char * FUN_10046095c(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x28) + 0x18);
  iVar1 = FUN_1004d2538(pcVar3);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
      lVar2 = 0;
    }
    pcVar3 = "Ability__Default__Die";
    if ((*(byte *)(lVar2 + 0x2f4) & 1) != 0) {
      pcVar3 = "Ability__Hero__Die";
    }
  }
  return pcVar3;
}




char * FUN_1004609c8(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x28) + 0x20);
  iVar1 = FUN_1004d2538(pcVar3);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 0x2f4) & 0x4000001) != 0) {
      pcVar3 = "Ability__Emote_Dance";
    }
  }
  return pcVar3;
}




char * FUN_100460a34(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x28) + 0x28);
  iVar1 = FUN_1004d2538(pcVar3);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 0x2f4) & 0x4000001) != 0) {
      pcVar3 = "Ability__Emote_Taunt";
    }
  }
  return pcVar3;
}




void FUN_100460aa0(long param_1,char *param_2,char *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  char *pcVar6;
  
  uVar1 = 0x811c9dc5;
  if (param_3 != (char *)0x0) {
    param_2 = param_3;
  }
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    cVar5 = *param_2;
    while (cVar5 != '\0') {
      param_2 = param_2 + 1;
      uVar1 = (uVar1 ^ (int)cVar5) * 0x1000193;
      cVar5 = *param_2;
    }
  }
  if ((ulong)*(byte *)(param_1 + 0x198) != 0) {
    uVar2 = 0;
    do {
      lVar4 = *(long *)(param_1 + uVar2 * 8 + 0x50);
      pcVar6 = *(char **)(lVar4 + 0x200);
      if (((pcVar6 == (char *)0x0) &&
          (lVar4 = *(long *)(lVar4 + 0x38), pcVar6 = "<null>", lVar4 != 0)) &&
         (pcVar6 = *(char **)(lVar4 + 8), pcVar6 == (char *)0x0)) {
        uVar3 = 0;
      }
      else {
        cVar5 = *pcVar6;
        uVar3 = 0x811c9dc5;
        if (cVar5 != '\0') {
          uVar3 = 0x811c9dc5;
          do {
            pcVar6 = pcVar6 + 1;
            uVar3 = (uVar3 ^ (int)cVar5) * 0x1000193;
            cVar5 = *pcVar6;
          } while (cVar5 != '\0');
        }
      }
      if (uVar1 == uVar3) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(byte *)(param_1 + 0x198));
  }
  FUN_1004608fc();
  return;
}




ulong FUN_100460b78(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  
  lVar2 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x108 + lVar2);
    if (((uVar6 >> 0x1e & 1) != 0) && ((uVar6 & 0x7fff) == param_2)) {
      param_2 = uVar6 >> 0xf & 0x7fff;
      break;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x50);
  lVar2 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0x239) >> 5 & 1) != 0)) ||
      (uVar3 = (ulong)*(ushort *)(lVar2 + 0x68) & 0x1f, (int)uVar3 == 0x1f)) ||
     (*(short *)(lVar2 + uVar3 * 0x38 + 0x70) != 1)) {
LAB_100460c78:
    uVar3 = 0;
  }
  else {
    if (*(char *)(*(long *)(lVar2 + 0x38) + 0x89) == '\0') {
      lVar4 = *(long *)(lVar2 + 0x1f8);
      if (((lVar4 != 0) && ((int)*(char *)(lVar4 + 0x69) + (uint)*(byte *)(lVar4 + 0x68) != 0)) &&
         (*(char *)(lVar4 + 0x6a) == '\0')) goto LAB_100460c78;
      uVar3 = FUN_10045f430(lVar2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      plVar5 = *(long **)(lVar2 + 0x50);
      if (plVar5 != (long *)0x0) {
        uVar6 = 0;
        do {
          uVar1 = (**(code **)(*plVar5 + 0x30))(plVar5,lVar2);
          uVar6 = uVar1 | uVar6;
          plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
        } while (plVar5 != (long *)0x0);
        return (ulong)(uVar6 == 0);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_100460c8c(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 0x38);
  if ((*(char *)(lVar3 + 0x89) != '\0') || (*(char *)(lVar3 + 0x60) != '\0')) {
    FUN_100460d9c(param_1);
    lVar3 = *(long *)(param_2 + 0x38);
  }
  if ((*(char *)(lVar3 + 0x8a) == '\0') && (*(char *)(lVar3 + 0x48) != '\0')) {
    FUN_100460e14(param_1);
  }
  piVar1 = &DAT_101d90970;
  if (*(long *)(param_2 + 0x1f8) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x1f8) + 0x50);
  }
  if ((*piVar1 != DAT_101d90970) &&
     (uVar4 = (ulong)*(byte *)(param_1 + 0x198), *(byte *)(param_1 + 0x198) != 0)) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x50 + uVar5 * 8);
      if (lVar3 != param_2) {
        piVar1 = &DAT_101d90970;
        if (*(long *)(lVar3 + 0x1f8) != 0) {
          piVar1 = (int *)(*(long *)(lVar3 + 0x1f8) + 0x50);
        }
        piVar2 = &DAT_101d90970;
        if (*(long *)(param_2 + 0x1f8) != 0) {
          piVar2 = (int *)(*(long *)(param_2 + 0x1f8) + 0x50);
        }
        if (*piVar1 == *piVar2) {
          FUN_10045e3b4(lVar3 + 0x68,3,0,0);
          uVar4 = (ulong)*(byte *)(param_1 + 0x198);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_10045e3b4(param_2 + 0x68,2,0,0);
  return;
}




void FUN_100460d9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0x198);
  if (*(byte *)(param_1 + 0x198) != 0) {
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x50 + uVar4 * 8);
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x68) & 0x1f;
      if ((((int)uVar3 != 0x1f) && (*(short *)(lVar1 + uVar3 * 0x38 + 0x70) == 2)) &&
         ((*(byte *)(lVar1 + 0x23a) & 1) != 0)) {
        FUN_1003b98c8();
        uVar2 = (ulong)*(byte *)(param_1 + 0x198);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}




void FUN_100460e14(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0x198);
  if (*(byte *)(param_1 + 0x198) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x50 + uVar3 * 8);
      if ((lVar2 != 0) && (*(char *)(*(long *)(lVar2 + 0x38) + 0x8a) != '\0')) {
        FUN_1003dc4e8(0,*(undefined8 *)(lVar2 + 0x1f8));
        uVar1 = (ulong)*(byte *)(param_1 + 0x198);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}




undefined8 FUN_100460e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




int FUN_100460e80(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x198);
  if (uVar3 != 0) {
    iVar1 = 0;
    plVar2 = (long *)(param_1 + 0x50);
    do {
      lVar4 = *(long *)(*plVar2 + 0x38);
      if ((*(char *)(lVar4 + 0x7c) != '\0') && (*(char *)(lVar4 + 0x8b) != '\0')) {
        iVar1 = (iVar1 - *(int *)(lVar4 + 0x78)) + (*(uint *)(*plVar2 + 0x238) >> 10 & 7);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_100460ed8(long param_1,long param_2,long param_3,long param_4,long param_5,uint *param_6)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  *param_6 = 0;
  bVar2 = *(byte *)(param_1 + 0x198);
  if (bVar2 != 0) {
    uVar1 = 0;
    uVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x50 + uVar4 * 8);
      if (*(char *)(*(long *)(lVar5 + 0x38) + 0x7c) != '\0') {
        *(int *)(param_2 + uVar1 * 4) = (int)uVar4;
        *(uint *)(param_3 + (ulong)*param_6 * 4) = *(uint *)(lVar5 + 0x238) >> 10 & 7;
        if (*(long *)(lVar5 + 0x1f8) == 0) {
          uVar3 = 0;
          uVar1 = (ulong)*param_6;
          *(undefined4 *)(param_4 + uVar1 * 4) = 0;
        }
        else {
          uVar6 = FUN_10045f284();
          lVar5 = *(long *)(lVar5 + 0x1f8);
          uVar1 = (ulong)*param_6;
          *(undefined4 *)(param_4 + uVar1 * 4) = uVar6;
          uVar3 = 0;
          if (lVar5 != 0) {
            uVar3 = *(undefined1 *)(lVar5 + 0x6a);
          }
        }
        *(undefined1 *)(param_5 + uVar1) = uVar3;
        uVar1 = (ulong)(*param_6 + 1);
        *param_6 = *param_6 + 1;
        bVar2 = *(byte *)(param_1 + 0x198);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < bVar2);
  }
  return;
}




void FUN_100460fb4(long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  if (param_6 != 0) {
    uVar7 = 0;
    do {
      lVar6 = *(long *)(param_1 + (ulong)*(uint *)(param_2 + uVar7 * 4) * 8 + 0x50);
      FUN_10045eb60(lVar6,*(undefined4 *)(param_3 + uVar7 * 4));
      bVar4 = *(byte *)(param_1 + 0x198);
      if (bVar4 != 0) {
        uVar8 = 0;
        do {
          uVar3 = *(uint *)(param_2 + uVar7 * 4);
          if ((uVar8 != uVar3) &&
             (lVar2 = *(long *)(param_1 + 0x50 + uVar8 * 8),
             *(uint *)(*(long *)(lVar2 + 0x38) + 0x98) == uVar3)) {
            lVar5 = *(long *)(param_1 + (ulong)uVar3 * 8 + 0x50);
            if (lVar5 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)(lVar5 + 0x238) >> 10 & 7;
            }
            FUN_10045eb60(lVar2,uVar3);
            bVar4 = *(byte *)(param_1 + 0x198);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < bVar4);
      }
      if ((((0.0 < *(float *)(param_4 + uVar7 * 4)) || (*(char *)(param_5 + uVar7) != '\0')) &&
          (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) &&
         (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dd68)) {
        lVar6 = *(long *)(lVar6 + 0x1f8);
        puVar1 = &DAT_101d90970;
        if (lVar6 != 0) {
          puVar1 = (undefined4 *)(lVar6 + 0x50);
        }
        lVar6 = FUN_1003dc44c(lVar2,puVar1);
        uVar9 = *(undefined4 *)(param_4 + uVar7 * 4);
        uVar10 = NEON_ucvtf((uint)*(byte *)(param_5 + uVar7));
        fVar11 = (float)NEON_fminnm(uVar10,(float)((int)*(char *)(lVar6 + 0x69) +
                                                  (uint)*(byte *)(lVar6 + 0x68)));
        *(char *)(lVar6 + 0x6a) = (char)(int)fVar11;
        FUN_10046c22c(uVar9);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_6);
  }
  return;
}




uint FUN_10046110c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x198);
  if (*(byte *)(param_1 + 0x198) == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x50 + uVar6 * 8);
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x68) & 0x1f;
      if ((((int)uVar4 != 0x1f) && (*(short *)(lVar2 + uVar4 * 0x38 + 0x70) == 2)) &&
         (*(char *)(*(long *)(lVar2 + 0x38) + 0x54) == '\0')) {
        uVar1 = FUN_1003b98c8();
        uVar5 = uVar1 | uVar5;
        uVar3 = (ulong)*(byte *)(param_1 + 0x198);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return uVar5 & 1;
}




uint FUN_1004611a4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x198);
  if (*(byte *)(param_1 + 0x198) == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x50 + uVar6 * 8);
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x68) & 0x1f;
      if (((((int)uVar4 != 0x1f) && (*(short *)(lVar2 + uVar4 * 0x38 + 0x70) == 2)) &&
          (*(char *)(*(long *)(lVar2 + 0x38) + 0x54) == '\0')) &&
         (*(char *)(*(long *)(lVar2 + 0x38) + 0x91) != '\0')) {
        uVar1 = FUN_1003b98c8();
        uVar5 = uVar1 | uVar5;
        uVar3 = (ulong)*(byte *)(param_1 + 0x198);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return uVar5 & 1;
}




void FUN_100461244(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  while ((uVar1 = *(uint *)(param_1 + 0x108 + lVar2), (uVar1 >> 0x1e & 1) == 0 ||
         ((uVar1 & 0x7fff) != param_2))) {
    lVar2 = lVar2 + 4;
    if (lVar2 == 0x50) {
LAB_100461274:
      FUN_10045f950(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50),param_3);
      return;
    }
  }
  param_2 = uVar1 >> 0xf & 0x7fff;
  goto LAB_100461274;
}




void FUN_100461284(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  while ((uVar1 = *(uint *)(param_1 + 0x108 + lVar2), (uVar1 >> 0x1e & 1) == 0 ||
         ((uVar1 & 0x7fff) != param_2))) {
    lVar2 = lVar2 + 4;
    if (lVar2 == 0x50) {
LAB_1004612b4:
      lVar2 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
      uVar3 = *param_3;
      *(undefined4 *)(lVar2 + 0x1e0) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar2 + 0x1d8) = uVar3;
      *(uint *)(lVar2 + 0x238) = *(uint *)(lVar2 + 0x238) & 0xffffffc7 | 0x10;
      return;
    }
  }
  param_2 = uVar1 >> 0xf & 0x7fff;
  goto LAB_1004612b4;
}




long FUN_1004612e0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) + 0x38);
  lVar1 = 0;
  if (*(char *)(lVar2 + 0x70) != '\0') {
    lVar1 = lVar2 + 0xb8;
  }
  return lVar1;
}




void FUN_100461300(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1004d2524();
  FUN_100015208(param_1,uVar1,0x12345678);
  return;
}




long FUN_100461330(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (lVar1 != 0) {
    return (long)*(char *)(*(long *)(lVar1 + 0x38) + 100);
  }
  return 0;
}




undefined8 FUN_100461350(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    uVar1 = FUN_10045f640();
    return uVar1;
  }
  return 0x400;
}




undefined4 * FUN_100461368(long param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  puVar1 = &DAT_101d90970;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x1f8), lVar2 != 0)) {
    puVar1 = (undefined4 *)(lVar2 + 0x50);
  }
  return puVar1;
}




undefined1  [16] FUN_100461390(long param_1,uint param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) && (lVar1 = FUN_10045f11c(), lVar1 != 0)
     ) {
    FUN_10045f1bc();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_1004613c0(long param_1,uint param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x1f8) != 0)) {
    FUN_10045f284();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




undefined8 FUN_1004613e0(long param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((lVar3 != 0) && (uVar4 = (ulong)*(byte *)(param_1 + 0x198), uVar4 != 0)) {
    piVar1 = &DAT_101d90970;
    if (*(long *)(lVar3 + 0x1f8) != 0) {
      piVar1 = (int *)(*(long *)(lVar3 + 0x1f8) + 0x50);
    }
    plVar5 = (long *)(param_1 + 0x50);
    do {
      lVar6 = *plVar5;
      if (lVar3 == lVar6) {
LAB_10046144c:
        if ((*(byte *)(lVar6 + 0x239) >> 6 & 1) != 0) {
          return 1;
        }
      }
      else if (*piVar1 != DAT_101d90970) {
        piVar2 = &DAT_101d90970;
        if (*(long *)(lVar6 + 0x1f8) != 0) {
          piVar2 = (int *)(*(long *)(lVar6 + 0x1f8) + 0x50);
        }
        if (*piVar1 == *piVar2) goto LAB_10046144c;
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}




undefined4 FUN_100461470(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (lVar1 != 0) {
    return *(undefined4 *)(*(long *)(lVar1 + 0x38) + 0x80);
  }
  return 4;
}




void FUN_100461490(long param_1,uint param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  FUN_10045eb60(lVar4,(*(uint *)(lVar4 + 0x238) >> 10 & 7) + 1);
  bVar1 = *(char *)(param_1 + 0x19a) + 1;
  *(byte *)(param_1 + 0x19a) = bVar1;
  *(uint *)(param_1 + (ulong)bVar1 * 4 + 0x158) = param_2;
  bVar1 = *(byte *)(param_1 + 0x198);
  if (bVar1 != 0) {
    uVar5 = 0;
    do {
      if ((param_2 != uVar5) &&
         (lVar4 = *(long *)(param_1 + 0x50 + uVar5 * 8),
         *(uint *)(*(long *)(lVar4 + 0x38) + 0x98) == param_2)) {
        FUN_10045eb60(lVar4,(*(uint *)(lVar4 + 0x238) >> 10 & 7) + 1);
        bVar1 = *(byte *)(param_1 + 0x198);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < bVar1);
  }
  plVar2 = (long *)(DAT_101e94198 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar6 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x4b5470ae) {
        plVar6 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x4b5470ae];
    } while (plVar3 != (long *)0x0);
    if (((plVar6 != plVar2) && (*(uint *)(plVar6 + 4) < 0x4b5470af)) && ((int)plVar6[5] != 0)) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar6[6] + lVar4))[1])(*(undefined8 *)(plVar6[6] + lVar4));
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar5 < *(uint *)(plVar6 + 5));
    }
  }
  return;
}




void FUN_1004615f4(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  fVar4 = (float)(int)((*(uint *)(lVar1 + 0x238) >> 10 & 7) - 1);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  FUN_10045eb60(lVar1,(int)fVar4);
  bVar2 = *(byte *)(param_1 + 0x19a);
  *(undefined4 *)(param_1 + (ulong)bVar2 * 4 + 0x158) = 0xffffffff;
  *(byte *)(param_1 + 0x19a) = bVar2 - 1;
  bVar2 = *(byte *)(param_1 + 0x198);
  if (bVar2 != 0) {
    uVar3 = 0;
    do {
      if ((param_2 != uVar3) &&
         (lVar1 = *(long *)(param_1 + 0x50 + uVar3 * 8),
         *(uint *)(*(long *)(lVar1 + 0x38) + 0x98) == param_2)) {
        fVar4 = (float)(int)((*(uint *)(lVar1 + 0x238) >> 10 & 7) - 1);
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        FUN_10045eb60(lVar1,(int)fVar4);
        bVar2 = *(byte *)(param_1 + 0x198);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < bVar2);
  }
  return;
}




void FUN_1004616c8(long param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = 0;
  while ((*(byte *)(param_1 + lVar3 + 0x10b) >> 6 & 1) != 0) {
    lVar3 = lVar3 + 4;
    if (lVar3 == 0x50) {
      return;
    }
  }
  *(uint *)(param_1 + lVar3 + 0x108) = param_2 & 0x7fff | (param_3 & 0x7fff) << 0xf | 0x40000000;
  if (param_4 == 0) {
    return;
  }
  uVar4 = (ulong)*(byte *)(param_1 + 0x198);
  if (*(byte *)(param_1 + 0x198) == 0) {
    return;
  }
  uVar5 = 0;
  do {
    if (param_2 == uVar5) {
LAB_10046174c:
      FUN_1003b98c8();
      uVar4 = (ulong)*(byte *)(param_1 + 0x198);
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) + 0x1f8);
      piVar1 = &DAT_101d90970;
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 0x50);
      }
      if (*piVar1 != DAT_101d90970) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x50 + uVar5 * 8) + 0x1f8);
        piVar2 = &DAT_101d90970;
        if (lVar3 != 0) {
          piVar2 = (int *)(lVar3 + 0x50);
        }
        if (*piVar1 == *piVar2) goto LAB_10046174c;
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar4 <= uVar5) {
      return;
    }
  } while( true );
}




void FUN_1004617b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  FUN_1003a4e5c(local_40);
  uVar3 = FUN_1003e2b0c(param_1,local_40[0]);
  FUN_1003a4e5c(local_38,param_3);
  uVar4 = FUN_1003e2b0c(param_1,local_38[0]);
  lVar5 = 0;
  plVar1 = (long *)(param_1 + 0x50 + (uVar3 & 0xffffffff) * 8);
  lVar6 = *plVar1;
  *(uint *)(lVar6 + 0x238) = *(uint *)(lVar6 + 0x238) | 0x2000;
  plVar2 = (long *)(param_1 + 0x50 + (uVar4 & 0xffffffff) * 8);
  lVar6 = *plVar2;
  *(uint *)(lVar6 + 0x238) = *(uint *)(lVar6 + 0x238) & 0xffffdfff;
  do {
    if (*(long *)(param_1 + 0xf0 + lVar5) == *plVar1) {
      *(long *)(param_1 + 0xf0 + lVar5) = *plVar2;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x18);
  return;
}




void FUN_100461870(long param_1,uint param_2)

{
  FUN_10045f050(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




long FUN_10046187c(long param_1,uint param_2)

{
  return *(long *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) + 0x38) + 0x9d;
}




bool FUN_100461890(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (lVar1 != 0) {
    return *(char *)(*(long *)(lVar1 + 0x38) + 0x5f) != '\0';
  }
  return false;
}




int FUN_1004618b8(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x38);
    iVar1 = 5;
    if (*(char *)(lVar2 + 0x8d) != '\0') {
      iVar1 = 3;
    }
    return iVar1 + *(int *)(lVar2 + 0x78);
  }
  return 0;
}




undefined8 * FUN_1004618f0(undefined8 *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499ab0;
  param_1[5] = &PTR_FUN_101499ae0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xf) = DAT_101dc0b88;
  puVar2 = (ushort *)(param_1 + 0x11);
  param_1[0x43] = param_1;
  *(undefined2 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x96) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x46] = 0x3f80000000000000;
  param_1[0x49] = 0x3f800000;
  param_1[0x48] = 0;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x264) = 0xff;
  param_1[0x4e] = 0xff00000000;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = uVar1;
  param_1[0x58] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = uVar1;
  *(undefined1 *)((long)param_1 + 0x2fc) = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined2 *)((long)param_1 + 0x301) = 0x43ff;
  *(byte *)((long)param_1 + 0x303) = *(byte *)((long)param_1 + 0x303) & 0xf8;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = FUN_100461cdc;
  param_1[0x1b] = 0;
  *(undefined2 *)((long)param_1 + 0xca) = 0;
  param_1[0x1c] = FUN_100461ce0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 2;
  param_1[0x21] = FUN_100461cf8;
  param_1[0x22] = 0;
  *(undefined2 *)((long)param_1 + 0x102) = 0;
  param_1[0x23] = FUN_100461d80;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x27) = 3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = FUN_100461d98;
  param_1[0x2b] = 0;
  param_1[0x2c] = FUN_100461fe8;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x13a) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 4;
  param_1[0x2f] = FUN_10046201c;
  param_1[0x30] = 0;
  *(undefined2 *)((long)param_1 + 0x172) = 0;
  param_1[0x31] = FUN_100462078;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined2 *)(param_1 + 0x35) = 5;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = FUN_10046207c;
  param_1[0x39] = 0;
  param_1[0x3a] = FUN_100462080;
  param_1[0x3b] = 0;
  *(undefined2 *)((long)param_1 + 0x1aa) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 6;
  param_1[0x3d] = FUN_100462094;
  *(undefined2 *)((long)param_1 + 0x1e2) = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *puVar2 = *puVar2 & 0x8000 | 0x1fff;
  FUN_100462098(puVar2,0,1);
  FUN_100462098(puVar2,0,2);
  FUN_100462098(puVar2,0,3);
  FUN_100462098(puVar2,0,4);
  FUN_100462098(puVar2,0,5);
  FUN_100462098(puVar2,0,6);
  FUN_100462098(puVar2,1,2);
  FUN_100462098(puVar2,1,3);
  FUN_100462098(puVar2,1,4);
  FUN_100462098(puVar2,1,5);
  FUN_100462098(puVar2,1,6);
  FUN_100462098(puVar2,2,1);
  FUN_100462098(puVar2,2,3);
  FUN_100462098(puVar2,2,4);
  FUN_100462098(puVar2,2,5);
  FUN_100462098(puVar2,3,4);
  FUN_100462098(puVar2,3,1);
  FUN_100462098(puVar2,4,1);
  FUN_100462098(puVar2,5,3);
  FUN_100462098(puVar2,5,2);
  FUN_100462098(puVar2,5,4);
  FUN_100462098(puVar2,5,1);
  FUN_100462098(puVar2,5,6);
  FUN_100462098(puVar2,6,1);
  FUN_100462098(puVar2,6,2);
  FUN_100462098(puVar2,6,3);
  FUN_100462098(puVar2,6,4);
  FUN_100462098(puVar2,6,5);
  FUN_10046211c(puVar2,0,0,0);
  return param_1;
}




void FUN_100461cdc(void)

{
  return;
}




void FUN_100461ce0(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100461cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100461cf8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x2f8) & 0x81) != 0) {
    FUN_100463dac(param_1);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  do {
    if (lVar1 == 0) {
LAB_100461d58:
      FUN_10046211c(param_1 + 0x88,1,0,0);
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
      if ((*(byte *)(lVar1 + 0x818) & 1) != 0) {
        return;
      }
      goto LAB_100461d58;
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while( true );
}




void FUN_100461d80(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100461d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
    return;
  }
  return;
}




void FUN_100461d98(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
    (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
  }
  puVar2 = PTR_s_onHostDieName_10185d528;
  if ((DAT_101d23a38 != '\0') && (*(long *)(param_1 + 0x60) != 0)) {
    for (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x350)) {
      FUN_10046a360(lVar4,puVar2);
    }
  }
  lVar4 = *(long *)(param_1 + 0x18);
  do {
    if (lVar4 == 0) {
LAB_100461e44:
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_100465140();
      }
      FUN_10046110c(*(undefined8 *)(param_1 + 0x58));
      uVar8 = DAT_101dc0b88;
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x7e8) = 0;
        *(undefined4 *)(lVar4 + 0x7f0) = uVar8;
        *(byte *)(lVar4 + 0x818) = *(byte *)(lVar4 + 0x818) & 0xf9;
      }
      uVar8 = *(undefined4 *)(param_1 + 0x250);
      fVar6 = *(float *)(param_1 + 0x254);
      uVar9 = *(undefined4 *)(param_1 + 600);
      fVar7 = *(float *)(param_1 + 0x2ec);
      uVar5 = 0x10000;
      lVar4 = param_1;
LAB_100461e9c:
      do {
        do {
          lVar3 = lVar4;
          if ((lVar3 != param_1) &&
             (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xdc302c4), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar3);
          }
          if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar4 = *(long *)(lVar3 + 0x18), lVar4 != 0)) {
            uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
            goto LAB_100461e9c;
          }
          if ((uVar5 & 0xffff) == 0) goto LAB_100461f38;
          lVar4 = *(long *)(lVar3 + 0x20);
        } while (*(long *)(lVar3 + 0x20) != 0);
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((lVar3 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_100461f38:
          lVar4 = *(long *)(param_1 + 0x58);
          lVar3 = *(long *)(lVar4 + 0x38);
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x1d8) = uVar8;
            *(float *)(lVar3 + 0x1dc) = fVar7 + fVar6;
            *(undefined4 *)(lVar3 + 0x1e0) = uVar9;
            *(uint *)(lVar3 + 0x238) = *(uint *)(lVar3 + 0x238) & 0xffffffc7 | 0x10;
            FUN_100460c8c(lVar4,*(undefined8 *)(lVar4 + 0x38));
          }
          lVar4 = *(long *)(param_1 + 0x40);
          fVar6 = *(float *)(lVar4 + 0x8c) +
                  *(float *)(lVar4 + 0x140) * (*(float *)(lVar4 + 0x2a8) + 1.0);
          NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 500),DAT_101e94374);
          FUN_100345bc4(DAT_101e942b4,DAT_101e942b4,DAT_101e94374,0x3f800000,param_1,
                        (int)DAT_101e942b4);
          *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) & 0xfb;
          return;
        }
        uVar5 = uVar1 | uVar5 & 0xffff0000;
        while (lVar4 = *(long *)(lVar3 + 0x20), lVar4 == 0) {
          if ((uVar5 - 1 & 0xffff) == 0) goto LAB_100461f38;
          lVar3 = *(long *)(lVar3 + 0x10);
          uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
          if (lVar3 == 0) goto LAB_100461f38;
        }
      } while( true );
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_101867380) {
      FUN_1010a01dc();
      goto LAB_100461e44;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while( true );
}




void FUN_100461fe8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x38);
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x68) & 0x1f;
  if (((int)uVar2 != 0x1f) && (*(short *)(lVar1 + uVar2 * 0x38 + 0x70) == 2)) {
    FUN_1003b98c8();
    return;
  }
  return;
}




void FUN_10046201c(long param_1)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0) && (DAT_101d23a38 != '\0')) {
    if ((*(int *)(param_1 + 0x260) != -1) && (DAT_101e47e88 == '\x01')) {
      lVar1 = 8;
      do {
        if (*(int *)(DAT_101e47e80 + lVar1) == *(int *)(param_1 + 0x260)) {
          FUN_10003224c();
          return;
        }
        lVar1 = lVar1 + 200;
      } while (lVar1 != 0xc88);
    }
  }
  return;
}




void FUN_100462078(void)

{
  return;
}




void FUN_10046207c(void)

{
  return;
}




void FUN_100462080(long param_1)

{
  *(ushort *)(param_1 + 0x301) = *(ushort *)(param_1 + 0x301) | 0x4000;
  return;
}




void FUN_100462094(void)

{
  return;
}




void FUN_100462098(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_1004620cc;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_1004620cc:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10046211c(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_100462160;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_100462160:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 200) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 200) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x0001004621c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_100462238(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_10184dd68 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd68 + 1;
  lVar2 = param_1 + (ulong)DAT_10184dd68 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = thunk_FUN_1004618f0;
  *(code **)(lVar2 + 0xb8) = FUN_10049df14;
  *(uint *)(lVar2 + 0xa4) = DAT_10184dd68;
  *(undefined4 *)(lVar2 + 0xa8) = 0x308;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  FUN_1010a0944(param_1,4,FUN_1004622f0,0);
  FUN_1010a0990(param_1,0x9fa20a9e,FUN_100462314,0);
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_101858598,FUN_100462340);
  return;
}




void FUN_1004622f0(long param_1)

{
  FUN_100462390();
  FUN_100462400(param_1 + 0x88);
  return;
}




void FUN_100462314(undefined8 param_1)

{
  undefined2 in_stack_00000000;
  
  FUN_10046618c(param_1,in_stack_00000000);
  return;
}




void FUN_100462340(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 local_28 [2];
  
  lVar1 = FUN_1010a1540(DAT_10184dd68,0);
  *(long *)(lVar1 + 0x38) = param_3;
  FUN_1003a4e5c(local_28,*(undefined8 *)(param_3 + 0x20));
  *(undefined4 *)(lVar1 + 0x270) = local_28[0];
  return;
}




void FUN_100462390(long param_1)

{
  undefined3 *puVar1;
  undefined3 uVar2;
  float fVar3;
  
  fVar3 = (float)FUN_1010a1cd4();
  fVar3 = *(float *)(param_1 + 0x2f0) - fVar3;
  *(float *)(param_1 + 0x2f0) = fVar3;
  if (fVar3 <= 0.0) {
    puVar1 = (undefined3 *)(param_1 + 0x301);
    uVar2 = *puVar1;
    if ((*(byte *)(param_1 + 0x303) & 1) != 0) {
      FUN_100466254(param_1);
      uVar2 = *puVar1;
    }
    *(short *)puVar1 = (short)uVar2;
    *(byte *)(param_1 + 0x303) = (byte)((uint3)uVar2 >> 0x10) & 0xfe;
  }
  return;
}




void FUN_100462400(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 200) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010046243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




undefined8 FUN_100462444(uint param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_674;
  long local_670 [192];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  fVar9 = 3.4028235e+38;
  uVar1 = FUN_1010a1958(local_670,0xc0,DAT_10184e3b8,0);
  if ((int)uVar1 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    plVar7 = local_670;
    uVar8 = (ulong)uVar1;
    do {
      lVar5 = *plVar7;
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184e3b8) {
        lVar5 = 0;
      }
      plVar3 = *(long **)(lVar5 + 0x30);
      if (plVar3 != (long *)0x0) {
        if (*(int *)(lVar5 + 0x38) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if ((((lVar4 != 0) &&
               (lVar4 = (**(code **)(**(long **)(lVar5 + 0x30) + 0x10))(),
               *(byte *)(lVar4 + 0x264) != param_1)) &&
              (iVar2 = FUN_100472ef0(lVar5,param_2,param_3,&local_674), iVar2 != 0)) &&
             (uVar6 = 1, local_674 < fVar9)) {
            fVar9 = local_674;
          }
        }
        else {
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined4 *)(lVar5 + 0x38) = DAT_101dc0b88;
        }
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (param_4 != (undefined8 *)0x0) {
    fVar10 = (float)*param_2;
    fVar13 = (float)*param_3 - fVar10;
    fVar11 = (float)((ulong)*param_2 >> 0x20);
    fVar14 = (float)((ulong)*param_3 >> 0x20) - fVar11;
    fVar12 = *(float *)(param_2 + 1);
    fVar15 = *(float *)(param_3 + 1) - fVar12;
    fVar16 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
    if (1e-08 <= fVar16) {
      fVar16 = SQRT(fVar16);
      fVar13 = fVar13 / fVar16;
      fVar14 = fVar14 / fVar16;
      fVar15 = fVar15 / fVar16;
    }
    else {
      fVar13 = 1.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
    }
    *param_4 = CONCAT44(fVar11 + fVar14 * fVar9,fVar10 + fVar13 * fVar9);
    *(float *)(param_4 + 1) = fVar12 + fVar9 * fVar15;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}




void FUN_100462630(long param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  iVar6 = **(int **)(param_1 + 0x38);
  if (iVar6 == 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 1;
  }
  if ((*(int *)(param_1 + 0x260) != -1) && (DAT_101e47e88 == '\x01')) {
    lVar9 = 8;
    do {
      if (*(int *)(DAT_101e47e80 + lVar9) == *(int *)(param_1 + 0x260)) {
        *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 2;
        break;
      }
      lVar9 = lVar9 + 200;
    } while (lVar9 != 0xc88);
  }
  if (iVar6 == 4) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 4;
  }
  uVar5 = FUN_1004d2524("Kraken (Captured)");
  iVar6 = FUN_100015208("Kraken (Captured)",uVar5,0x12345678);
  piVar1 = (int *)(param_1 + 0x270);
  if (*(int *)(param_1 + 0x270) == iVar6) {
LAB_100462764:
    iVar7 = iVar6;
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 8;
  }
  else {
    uVar5 = FUN_1004d2524("5v5_Blackclaw_Captured");
    iVar6 = FUN_100015208("5v5_Blackclaw_Captured",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462764;
    uVar5 = FUN_1004d2524("HF_Kraken_Captured");
    iVar6 = FUN_100015208("HF_Kraken_Captured",uVar5,0x12345678);
    iVar7 = *piVar1;
    if (iVar7 == iVar6) goto LAB_100462764;
  }
  if (**(int **)(param_1 + 0x38) == 1) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x10;
    uVar5 = FUN_1004d2524("LeadMinion");
    iVar6 = FUN_100015208("LeadMinion",uVar5,0x12345678);
    if (*(int *)(param_1 + 0x270) == iVar6) {
LAB_100462820:
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20;
    }
    else {
      uVar5 = FUN_1004d2524("5v5_Minion_Siege");
      iVar6 = FUN_100015208("5v5_Minion_Siege",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462820;
      uVar5 = FUN_1004d2524("HF_Minion_Siege");
      iVar6 = FUN_100015208("HF_Minion_Siege",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462820;
    }
    uVar5 = FUN_1004d2524("5v5_Minion_Captain");
    iVar6 = FUN_100015208("5v5_Minion_Captain",uVar5,0x12345678);
    if (*piVar1 != iVar6) {
      uVar5 = FUN_1004d2524("HF_Minion_Captain");
      iVar6 = FUN_100015208("HF_Minion_Captain",uVar5,0x12345678);
      iVar7 = *piVar1;
      if (iVar7 != iVar6) goto LAB_1004628a4;
    }
    iVar7 = iVar6;
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
  }
LAB_1004628a4:
  if (**(int **)(param_1 + 0x38) == 5) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x100;
    uVar5 = FUN_1004d2524("5v5_HealingTreant");
    iVar6 = FUN_100015208("5v5_HealingTreant",uVar5,0x12345678);
    if (*(int *)(param_1 + 0x270) == iVar6) {
LAB_100462a70:
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x80;
    }
    else {
      uVar5 = FUN_1004d2524("5v5_GoldTreant");
      iVar6 = FUN_100015208("5v5_GoldTreant",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
      uVar5 = FUN_1004d2524("5v5_WeaponTreant");
      iVar6 = FUN_100015208("5v5_WeaponTreant",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
      uVar5 = FUN_1004d2524("5v5_CrystalTreant");
      iVar6 = FUN_100015208("5v5_CrystalTreant",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
      uVar5 = FUN_1004d2524("JungleMinion_ElderTreeEnt");
      iVar6 = FUN_100015208("JungleMinion_ElderTreeEnt",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
      uVar5 = FUN_1004d2524("JungleMinion_TreeEnt");
      iVar6 = FUN_100015208("JungleMinion_TreeEnt",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
      uVar5 = FUN_1004d2524("HF_Treant");
      iVar6 = FUN_100015208("HF_Treant",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
      uVar5 = FUN_1004d2524("HF_ElderTreant");
      iVar6 = FUN_100015208("HF_ElderTreant",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
      uVar5 = FUN_1004d2524("TestDummy_Jungle");
      iVar6 = FUN_100015208("TestDummy_Jungle",uVar5,0x12345678);
      if (*piVar1 == iVar6) goto LAB_100462a70;
    }
    uVar5 = FUN_1004d2524("TestDummy_Lane");
    iVar6 = FUN_100015208("TestDummy_Lane",uVar5,0x12345678);
    iVar7 = *piVar1;
    if (*piVar1 == iVar6) {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x800000;
      iVar7 = iVar6;
    }
  }
  if (**(int **)(param_1 + 0x38) == 9) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x200;
  }
  if (iVar7 == DAT_101d2d0a0) {
LAB_100462b1c:
    iVar6 = iVar7;
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x400;
  }
  else {
    uVar5 = FUN_1004d2524("HF_CrystalMiner");
    iVar7 = FUN_100015208("HF_CrystalMiner",uVar5,0x12345678);
    iVar6 = *piVar1;
    if (iVar6 == iVar7) goto LAB_100462b1c;
  }
  if ((iVar6 == DAT_101d2d0a8) || (iVar6 == DAT_101d2d0b0)) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x800;
  }
  uVar8 = **(uint **)(param_1 + 0x38);
  if ((1 << (ulong)(uVar8 & 0x1f) & 0xcU) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x1000;
  }
  if (uVar8 == 3) {
    uVar5 = FUN_1004d2524("VainNode");
    iVar6 = FUN_100015208("VainNode",uVar5,0x12345678);
    uVar8 = 0x4000;
    if (*(int *)(param_1 + 0x270) != iVar6) {
      uVar8 = 0x2000;
    }
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | uVar8;
  }
  uVar8 = **(uint **)(param_1 + 0x38);
  if (uVar8 == 2) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x8000;
  }
  uVar8 = 1 << (ulong)(uVar8 & 0x1f);
  if ((uVar8 & 0x21c) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x10000;
  }
  if ((char)(*(uint **)(param_1 + 0x38))[0x7f] != '\0') {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20000;
  }
  if ((uVar8 & 0x2bf) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40000;
  }
  uVar5 = FUN_1004d2524("ScoutTrap");
  iVar6 = FUN_100015208("ScoutTrap",uVar5,0x12345678);
  if (*piVar1 == iVar6) {
LAB_100462cc0:
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x80000;
    bVar4 = true;
LAB_100462cd0:
    bVar3 = bVar4;
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x100000;
    bVar2 = true;
  }
  else {
    uVar5 = FUN_1004d2524("FlareGun");
    iVar6 = FUN_100015208("FlareGun",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462cc0;
    uVar5 = FUN_1004d2524("VisionTotem");
    iVar6 = FUN_100015208("VisionTotem",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462cc0;
    uVar5 = FUN_1004d2524("Ylva_Trap");
    iVar6 = FUN_100015208("Ylva_Trap",uVar5,0x12345678);
    if (*piVar1 == iVar6) {
      bVar4 = false;
      goto LAB_100462cd0;
    }
    uVar5 = FUN_1004d2524("Ylva_Trap_ShatteredFang");
    iVar6 = FUN_100015208("Ylva_Trap_ShatteredFang",uVar5,0x12345678);
    bVar3 = false;
    bVar2 = false;
    bVar4 = false;
    if (*piVar1 == iVar6) goto LAB_100462cd0;
  }
  uVar8 = 1 << (ulong)(**(uint **)(param_1 + 0x38) & 0x1f);
  if ((!bVar2) && ((uVar8 & 0x2a3) != 0)) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x200000;
  }
  if ((uVar8 & 0x23d) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x400000;
  }
  if ((uVar8 & 0x82) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x800000;
  }
  if ((uVar8 & 0x1c) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x1000000;
  }
  if ((uVar8 & 0x21d) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x2000000;
  }
  if (*(char *)((long)*(uint **)(param_1 + 0x38) + 0x61) != '\0') {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x4000000;
  }
  uVar5 = FUN_1004d2524("Shop");
  iVar6 = FUN_100015208("Shop",uVar5,0x12345678);
  if (*piVar1 == iVar6) {
LAB_100462e0c:
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x8000000;
  }
  else {
    uVar5 = FUN_1004d2524("Neutral_JungleMinion_Store");
    iVar6 = FUN_100015208("Neutral_JungleMinion_Store",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462e0c;
    uVar5 = FUN_1004d2524("Neutral_JungleMinion_StoreCenter");
    iVar6 = FUN_100015208("Neutral_JungleMinion_StoreCenter",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462e0c;
  }
  uVar5 = FUN_1004d2524("MinimapIconActor_SpawnCamp");
  iVar6 = FUN_100015208("MinimapIconActor_SpawnCamp",uVar5,0x12345678);
  if (*piVar1 == iVar6) {
LAB_100462f08:
    bVar4 = true;
  }
  else {
    uVar5 = FUN_1004d2524("MinimapIconActor_BuffCamp");
    iVar6 = FUN_100015208("MinimapIconActor_BuffCamp",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462f08;
    uVar5 = FUN_1004d2524("MinimapIconActor_Ghostwing");
    iVar6 = FUN_100015208("MinimapIconActor_Ghostwing",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462f08;
    uVar5 = FUN_1004d2524("MinimapIconActor_Blackclaw");
    iVar6 = FUN_100015208("MinimapIconActor_Blackclaw",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462f08;
    uVar5 = FUN_1004d2524("MinimapIconActor_Kraken");
    iVar6 = FUN_100015208("MinimapIconActor_Kraken",uVar5,0x12345678);
    if (*piVar1 == iVar6) goto LAB_100462f08;
    uVar5 = FUN_1004d2524("MinimapIconActor_GoldMiner");
    iVar6 = FUN_100015208("MinimapIconActor_GoldMiner",uVar5,0x12345678);
    bVar4 = *piVar1 == iVar6;
  }
  iVar6 = **(int **)(param_1 + 0x38);
  if (iVar6 == 8) {
    if ((bool)(bVar3 | bVar4)) {
LAB_100462f54:
      uVar8 = *(uint *)(param_1 + 0x2f4) | 0x10000000;
LAB_100462f80:
      *(uint *)(param_1 + 0x2f4) = uVar8;
    }
  }
  else if (iVar6 == 5) {
    if (bVar3 || (*(char *)(DAT_101d23a68 + 0x57) == '\0' || bVar4)) goto LAB_100462f54;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x2f4);
    *(uint *)(param_1 + 0x2f4) = uVar8 | 0x10000000;
    if (!bVar2 && iVar6 == 7) {
      uVar8 = uVar8 | 0x30000000;
      goto LAB_100462f80;
    }
  }
  uVar5 = FUN_1004d2524("Kraken (Neutral)");
  iVar6 = FUN_100015208("Kraken (Neutral)",uVar5,0x12345678);
  if (*piVar1 != iVar6) {
    uVar5 = FUN_1004d2524("Kraken (Captured)");
    iVar6 = FUN_100015208("Kraken (Captured)",uVar5,0x12345678);
    if (*piVar1 != iVar6) {
      uVar5 = FUN_1004d2524("HF_Kraken_Jungle");
      iVar6 = FUN_100015208("HF_Kraken_Jungle",uVar5,0x12345678);
      if (*piVar1 != iVar6) {
        uVar5 = FUN_1004d2524("HF_Kraken_Captured");
        iVar6 = FUN_100015208("HF_Kraken_Captured",uVar5,0x12345678);
        if (*piVar1 != iVar6) goto LAB_100463050;
      }
    }
  }
  *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40000000;
LAB_100463050:
  if (**(int **)(param_1 + 0x38) != 0) {
    uVar5 = FUN_1004d2524("FortressMinion");
    iVar6 = FUN_100015208("FortressMinion",uVar5,0x12345678);
    if (*piVar1 != iVar6) {
      return;
    }
  }
  *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x80000000;
  return;
}




void FUN_100463154(undefined4 param_1,long param_2,uint param_3,undefined4 param_4)

{
  switch(param_4) {
  case 0:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x38) = param_1;
    break;
  case 1:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0xec) = param_1;
    break;
  case 2:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x1a0) = param_1;
    break;
  case 3:
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x254) = param_1;
  }
  *(ulong *)(param_2 + 0x348) = *(ulong *)(param_2 + 0x348) | 1L << ((ulong)param_3 & 0x3f);
  FUN_100466a28();
  return;
}




void FUN_1004631d8(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  char cVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 *puVar13;
  uint local_48 [2];
  
  *(undefined4 *)(param_1 + 0x26c) = *param_2;
  lVar4 = FUN_100465e48();
  lVar5 = FUN_1010a0298(param_1,DAT_1018673f0);
  plVar7 = (long *)0x0;
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x28);
  }
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar5 != 0) {
    plVar1 = plVar7 + 1;
  }
  lVar2 = *plVar1;
  *(long **)(param_1 + 0x70) = plVar7;
  *(int *)(param_1 + 0x78) = (int)lVar2;
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else if ((int)lVar2 == (int)plVar7[1]) {
    uVar6 = (**(code **)(*plVar7 + 0x10))();
  }
  else {
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = DAT_101dc0b88;
  }
  FUN_100465edc(uVar6,*(undefined8 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x1d8) + 0x40));
  plVar7 = *(long **)(param_1 + 0x70);
  uVar6 = 0;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x78) == (int)plVar7[1]) {
      uVar6 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x78) = DAT_101dc0b88;
    }
  }
  FUN_100465f78(uVar6,*(undefined8 *)(lVar4 + 0x40));
  puVar13 = *(undefined8 **)(**(long **)(*(long *)(param_1 + 0x38) + 0x1d8) + 0x48);
  param_1 = param_1 + 0x278;
  puVar11 = (undefined8 *)*puVar13;
  while (puVar11 != (undefined8 *)0x0) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      uVar9 = 0;
    }
    else {
      cVar10 = *pcVar12;
      uVar9 = 0x811c9dc5;
      if (cVar10 != '\0') {
        uVar9 = 0x811c9dc5;
        do {
          pcVar12 = pcVar12 + 1;
          uVar9 = (uVar9 ^ (int)cVar10) * 0x1000193;
          cVar10 = *pcVar12;
        } while (cVar10 != '\0');
      }
    }
    lVar5 = FUN_100034344(param_1,uVar9);
    uVar3 = FUN_10049df20(param_1,puVar13);
    *(undefined4 *)(lVar5 + 4) = uVar3;
    puVar13 = puVar13 + 1;
    puVar11 = (undefined8 *)*puVar13;
  }
  puVar13 = *(undefined8 **)(lVar4 + 0x48);
  puVar11 = (undefined8 *)*puVar13;
  while (puVar11 != (undefined8 *)0x0) {
    pcVar12 = (char *)*puVar11;
    if (pcVar12 == (char *)0x0) {
      local_48[0] = 0;
    }
    else {
      cVar10 = *pcVar12;
      local_48[0] = 0x811c9dc5;
      if (cVar10 != '\0') {
        local_48[0] = 0x811c9dc5;
        do {
          pcVar12 = pcVar12 + 1;
          local_48[0] = (local_48[0] ^ (int)cVar10) * 0x1000193;
          cVar10 = *pcVar12;
        } while (cVar10 != '\0');
      }
    }
    puVar8 = (undefined8 *)FUN_10049e084(param_1,local_48);
    *puVar8 = puVar11;
    puVar13 = puVar13 + 1;
    puVar11 = (undefined8 *)*puVar13;
  }
  return;
}




void FUN_1004633d4(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  lVar1 = *(long *)(param_1 + 0x10);
  fVar2 = *(float *)(lVar1 + 0x240);
  fVar3 = *(float *)(lVar1 + 0x244);
  fVar4 = *(float *)(lVar1 + 0x248);
  fVar5 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (1e-08 <= fVar5) {
    fVar5 = 1.0 / SQRT(fVar5);
    fVar2 = fVar2 * fVar5;
    fVar3 = fVar3 * fVar5;
    fVar4 = fVar4 * fVar5;
  }
  else {
    fVar2 = 1.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
  }
  fVar5 = (float)_acosf(fVar2 * 1.0 + fVar3 * 0.0 + fVar4 * 0.0);
  *(float *)(param_1 + 0x7e0) = fVar5;
  if (fVar2 * 0.0 + fVar3 * 0.0 + fVar4 * 1.0 < 0.0) {
    *(float *)(param_1 + 0x7e0) = 6.2831855 - fVar5;
  }
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xe7 | (param_3 & 3) << 3;
  return;
}




void FUN_1004634e0(long param_1,long *param_2)

{
  ulong uVar1;
  size_t sVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  
  puVar11 = (undefined8 *)*param_2;
  do {
    if (puVar11 == (undefined8 *)0x0) {
      FUN_1004720c4(param_1 + 0x28,0);
      return;
    }
    uVar7 = *puVar11;
    uVar4 = FUN_1010a1520();
    uVar4 = FUN_1010a0e0c(uVar4,0,uVar7,0);
    lVar5 = FUN_1010a0298(param_1,DAT_101867400);
    uVar10 = *(uint *)(param_1 + 0x28);
    if (uVar10 != 0) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        uVar1 = *(long *)(param_1 + 0x30) + lVar12;
        pcVar9 = (char *)*puVar11;
        sVar6 = _strlen(pcVar9);
        sVar2 = *(size_t *)(uVar1 + 8);
        if (-1 < (char)*(byte *)(uVar1 + 0x17)) {
          sVar2 = (ulong)*(byte *)(uVar1 + 0x17);
        }
        if (sVar6 == sVar2) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,(ulong)pcVar9);
          if (iVar3 == 0) {
            uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar12 + 0x18);
            goto LAB_1004635c0;
          }
          uVar10 = *(uint *)(param_1 + 0x28);
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x20;
      } while (uVar13 < uVar10);
    }
    uVar8 = 0;
LAB_1004635c0:
    *(undefined8 *)(lVar5 + 0x38) = *puVar11;
    FUN_1003a4e5c(lVar5 + 0x40);
    *(undefined8 *)(lVar5 + 0x48) = uVar4;
    *(undefined4 *)(lVar5 + 0x50) = uVar8;
    param_2 = param_2 + 1;
    puVar11 = (undefined8 *)*param_2;
  } while( true );
}




void FUN_100463604(void)

{
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100463608(long param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_50;
  float local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x1c) != '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    fVar6 = param_2[2];
    *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)param_2;
    *(float *)(param_1 + 0x7b8) = fVar6;
    local_40 = *(float *)(lVar4 + 0x250);
    fStack_3c = *(float *)(lVar4 + 0x254);
    local_38 = *(float *)(lVar4 + 600);
    if ((*(byte *)(lVar4 + 0x2f8) & 0x81) == 0) {
      fVar6 = fStack_3c;
      fVar7 = local_40;
      if ((*(byte *)(lVar4 + 0x2f4) >> 1 & 1) != 0) {
        fVar8 = local_40 - *(float *)(param_1 + 0x7b0);
        fVar9 = fStack_3c - *(float *)(param_1 + 0x7b4);
        fVar7 = *(float *)(param_1 + 0x7b8);
        fVar6 = 0.2;
        if (fVar8 * fVar8 + fVar9 * fVar9 + (local_38 - fVar7) * (local_38 - fVar7) < 0.2) {
          FUN_1003d970c(param_1,param_1 + 0x7b0);
          return 0;
        }
      }
      lVar1 = param_1 + 0x30;
      lVar4 = *(long *)(lVar4 + 0x18);
      do {
        if (lVar4 == 0) {
          bVar3 = 0;
LAB_100463790:
          FUN_10054e534(lVar1,bVar3);
          uVar2 = FUN_10054e574(lVar1,&local_40,param_1 + 0x7b0);
          if ((int)uVar2 != 0) {
            FUN_100466f74(param_1);
            *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) | 1;
            uVar5 = FUN_10054eb90(lVar1);
            *(undefined4 *)(param_1 + 0x7bc) = uVar5;
            *(float *)(param_1 + 0x7c0) = fVar6;
            *(float *)(param_1 + 0x7c4) = fVar7;
            return 1;
          }
          return uVar2;
        }
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
          bVar3 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
          goto LAB_100463790;
        }
        lVar4 = *(long *)(lVar4 + 0x20);
      } while( true );
    }
    if ((*(byte *)(param_1 + 0x818) & 6) == 0) {
      fVar7 = *param_2 - local_40;
      fVar6 = param_2[1] - fStack_3c;
      local_48 = param_2[2] - local_38;
      fVar9 = fVar7 * fVar7 + fVar6 * fVar6 + local_48 * local_48;
      if (1e-08 <= fVar9) {
        fVar9 = 1.0 / SQRT(fVar9);
        local_50 = CONCAT44(fVar6 * fVar9,fVar7 * fVar9);
        local_48 = local_48 * fVar9;
      }
      else {
        local_50 = 0x3f800000;
        local_48 = 0.0;
      }
      FUN_1003c554c(param_1,&local_50,1);
    }
  }
  return 0;
}




void FUN_1004637dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_10046a360(lVar1,param_2);
  }
  return;
}




void FUN_100463814(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_10046a2a0(lVar1,param_2);
  }
  return;
}




void FUN_10046384c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
LAB_100463914:
    FUN_100463968(param_1,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_1004611a4();
    }
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
    }
    FUN_10046211c(param_1 + 0x88,1,0,0);
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100463874:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xb0d0275), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100463874;
      }
      if ((uVar4 & 0xffff) == 0) goto LAB_100463914;
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) goto LAB_100463914;
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) goto LAB_100463914;
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) goto LAB_100463914;
    }
  } while( true );
}




void FUN_100463968(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100463994:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x552a07b6), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100463994;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100463a4c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  FUN_100463dac();
  lVar2 = *(long *)(param_1 + 0x48);
  for (lVar4 = *(long *)(lVar2 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_101867370) {
      if ((*(byte *)(lVar4 + 0x68) & 1) != 0) goto LAB_100463b48;
      uVar5 = 0xffff0000;
      lVar2 = param_1;
      goto LAB_100463aac;
    }
  }
LAB_100463b5c:
  FUN_1010a0298(lVar2,DAT_101867370);
  return;
LAB_100463aac:
  do {
    lVar3 = lVar2;
    if ((lVar3 != param_1) &&
       (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x444d06f4), lVar2 != 0)) {
      (**(code **)(lVar2 + 8))(lVar3);
    }
    if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
      uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
      goto LAB_100463aac;
    }
    if ((uVar5 & 0xffff) == 0) goto LAB_100463b48;
    lVar2 = *(long *)(lVar3 + 0x20);
  } while (*(long *)(lVar3 + 0x20) != 0);
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((lVar3 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) goto LAB_100463b48;
  uVar5 = uVar1 | uVar5 & 0xffff0000;
  while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
    if ((uVar5 - 1 & 0xffff) == 0) goto LAB_100463b48;
    lVar3 = *(long *)(lVar3 + 0x10);
    uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
    if (lVar3 == 0) goto LAB_100463b48;
  }
  goto LAB_100463aac;
LAB_100463b48:
  FUN_1010a02fc(*(undefined8 *)(param_1 + 0x48),lVar4);
  lVar2 = *(long *)(param_1 + 0x48);
  goto LAB_100463b5c;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100463b74(float param_1,long param_2,undefined8 *param_3,byte param_4)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != ram0x0001018672a0) {
    lVar2 = 0;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
    lVar2 = 0;
  }
  fVar3 = *(float *)(lVar2 + 0x250);
  *(float *)(param_2 + 0x34) = fVar3;
  fVar4 = *(float *)(lVar2 + 0x254);
  *(float *)(param_2 + 0x38) = fVar4;
  fVar5 = *(float *)(lVar2 + 600);
  fVar4 = *(float *)(lVar2 + 0x2ec) + fVar4;
  *(float *)(param_2 + 0x38) = fVar4;
  *(float *)(param_2 + 0x3c) = fVar5;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_2 + 0x40) = *param_3;
  fVar3 = fVar3 - *(float *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x48) = uVar1;
  fVar4 = fVar4 - *(float *)(param_2 + 0x44);
  fVar5 = fVar5 - *(float *)(param_2 + 0x48);
  *(float *)(param_2 + 0x4c) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) / param_1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfe | param_4 & 1;
  return;
}




void FUN_100463c1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0x48) == 0) || (lVar1 = FUN_100463a4c(), lVar1 == 0)) {
    return;
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_2 + 0x48) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_101867350) {
        FUN_1003d5d80(param_2);
        break;
      }
    }
  }
  FUN_100463cc8(param_1,lVar1,param_3,param_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100463cc8(undefined4 param_1,long param_2,long param_3,byte param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != ram0x0001018672a0) {
    lVar3 = 0;
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(lVar3 + 0x250);
  fVar4 = *(float *)(lVar3 + 0x254);
  *(float *)(param_2 + 0x38) = fVar4;
  uVar5 = *(undefined4 *)(lVar3 + 600);
  *(float *)(param_2 + 0x38) = *(float *)(lVar3 + 0x2ec) + fVar4;
  *(undefined4 *)(param_2 + 0x3c) = uVar5;
  plVar1 = (long *)0x0;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 0x28);
  }
  plVar2 = (long *)&DAT_101dc0b88;
  if (param_3 != 0) {
    plVar2 = plVar1 + 1;
  }
  lVar3 = *plVar2;
  *(long **)(param_2 + 0x58) = plVar1;
  *(int *)(param_2 + 0x60) = (int)lVar3;
  lVar3 = (**(code **)(*plVar1 + 0x10))();
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(lVar3 + 0x250);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(lVar3 + 0x254);
  uVar5 = *(undefined4 *)(lVar3 + 600);
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = uVar5;
  *(undefined4 *)(param_2 + 0x4c) = param_1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfe | param_4 & 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100463dac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  *(byte *)(lVar1 + 0x818) = *(byte *)(lVar1 + 0x818) & 0xfe;
  if (DAT_101d23a38 == '\0') {
    return;
  }
  FUN_100466f74();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100463df8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint local_24;
  
  lVar1 = *(long *)(param_4 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0) {
    lVar1 = 0;
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x18);
  do {
    if (lVar2 == 0) {
      local_24 = 0;
LAB_100463e80:
      local_30 = FUN_100467f94(lVar1,&local_24,param_4 + 0x34,param_4 + 0x40);
      uStack_2c = param_2;
      local_28 = param_3;
      FUN_1003d5db8(lVar1,&local_30);
      FUN_1010a01dc(param_4);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      local_24 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_100463e80;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100463ec4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint local_24;
  
  lVar1 = *(long *)(param_4 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0) {
    lVar1 = 0;
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x18);
  do {
    if (lVar2 == 0) {
      local_24 = 0;
LAB_100463f4c:
      local_30 = FUN_100467f94(lVar1,&local_24,param_4 + 0x44,0);
      uStack_2c = param_2;
      local_28 = param_3;
      FUN_1003d5db8(lVar1,&local_30);
      FUN_1010a01dc(param_4);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      local_24 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_100463f4c;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_100463f90(float param_1,long param_2)

{
  long *plVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  float local_1c;
  undefined8 uStack_18;
  
  *(float *)(param_2 + 0x2ec) = param_1;
  uStack_48 = *(undefined8 *)(param_2 + 0x228);
  local_50 = *(undefined8 *)(param_2 + 0x220);
  uStack_38 = *(undefined8 *)(param_2 + 0x238);
  uStack_40 = *(undefined8 *)(param_2 + 0x230);
  uStack_28 = *(undefined8 *)(param_2 + 0x248);
  local_30 = *(undefined8 *)(param_2 + 0x240);
  uStack_18 = *(undefined8 *)(param_2 + 600);
  local_1c = (float)((ulong)*(undefined8 *)(param_2 + 0x250) >> 0x20);
  _uStack_20 = CONCAT44(local_1c + param_1,(int)*(undefined8 *)(param_2 + 0x250));
  plVar1 = *(long **)(param_2 + 0x50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,&local_50);
  }
  return;
}




void FUN_100463fe0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x228);
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  uVar4 = *(undefined8 *)(param_1 + 0x238);
  uVar3 = *(undefined8 *)(param_1 + 0x230);
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  uVar7 = *(undefined8 *)(param_1 + 600);
  uVar6 = *(undefined8 *)(param_1 + 0x250);
  param_2[5] = *(undefined8 *)(param_1 + 0x248);
  param_2[4] = uVar5;
  param_2[7] = uVar7;
  param_2[6] = uVar6;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return;
}




void FUN_100463ff4(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  fVar2 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar2;
  param_2[2] = *(undefined4 *)(param_1 + 600);
  param_2[1] = *(float *)(param_1 + 0x2ec) + fVar2;
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_101867340) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  param_2[1] = *(undefined4 *)(lVar1 + 0x28);
  return;
}




void FUN_100464050(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x70);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x78) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x78) = DAT_101dc0b88;
    }
  }
  FUN_1004640b4(uVar2,param_2);
  return;
}




bool FUN_1004640b4(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return false;
  }
  uVar2 = *param_2;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
  lVar4 = *(long *)(param_1 + 0x40);
  if (*(uint *)(lVar4 + uVar5 * 8) != uVar2) {
    do {
      if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
      uVar3 = uVar1;
      if (0 < (int)(uint)uVar5) {
        uVar3 = (uint)uVar5;
      }
      uVar5 = (ulong)(uVar3 - 1);
    } while (*(uint *)(lVar4 + uVar5 * 8) != uVar2);
    if ((int)uVar5 == -1) {
      return false;
    }
  }
  return *(int *)(lVar4 + uVar5 * 8 + 4) != -1;
}




undefined8 FUN_100464130(long param_1,uint *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar2) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar3 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar3 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar3 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar2);
      if ((int)uVar5 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar4 + uVar5 * 8 + 4);
    if ((uVar1 != 0xffffffff) && (*(long *)(param_1 + 0x58) != 0)) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 8);
      fVar10 = *(float *)(lVar4 + 0x18);
      fVar11 = *(float *)(lVar4 + 0x1c);
      fVar9 = *(float *)(lVar4 + 0x10);
      fVar7 = *(float *)(lVar4 + 0x14);
      *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(lVar4 + 8);
      param_3[0xe] = fVar9;
      param_3[0xf] = 1.0;
      fVar6 = (float)___sincosf_stret(fVar7 * 0.017453294);
      fVar9 = fVar7;
      fVar10 = (float)___sincosf_stret(fVar10 * 0.017453294);
      fVar8 = -fVar7;
      fVar12 = fVar10 * fVar8;
      param_3[8] = fVar10;
      param_3[9] = fVar9 * -fVar6;
      param_3[10] = fVar9 * fVar7;
      param_3[0xb] = 0.0;
      fVar11 = (float)___sincosf_stret(fVar11 * 0.017453294);
      *param_3 = fVar8 * fVar9;
      param_3[1] = fVar10 * fVar6 * fVar8 + fVar7 * fVar11;
      param_3[2] = fVar12 * fVar8 + fVar6 * fVar11;
      param_3[3] = 0.0;
      param_3[4] = fVar11 * -fVar9;
      param_3[5] = fVar8 * fVar7 - fVar10 * fVar6 * fVar11;
      param_3[6] = fVar8 * fVar6 - fVar12 * fVar11;
      param_3[7] = 0.0;
      return 1;
    }
  }
  return 0;
}




undefined8 FUN_1004642c0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(*(long *)(param_1 + 0x58) + 0x198);
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x50 + uVar2 * 8) + 0x38) + 0x8a
                   ) != '\0') {
        uVar1 = FUN_1003c1088();
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  return 0;
}




bool FUN_1004642fc(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x58);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x198);
  if (uVar5 == 0) {
    bVar1 = false;
  }
  else {
    uVar4 = 0;
    bVar1 = true;
    do {
      if ((*(char *)(*(long *)(*(long *)(lVar3 + uVar4 * 8 + 0x50) + 0x38) + 0x8a) != '\0') &&
         (uVar2 = FUN_1004613e0(lVar3,uVar4), (uVar2 & 1) != 0)) {
        return bVar1;
      }
      uVar4 = uVar4 + 1;
      bVar1 = uVar4 < uVar5;
    } while (uVar5 != uVar4);
  }
  return bVar1;
}




void FUN_100464374(long param_1)

{
  ulong uVar1;
  
  FUN_100463dac();
  uVar1 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((int)uVar1 != 0x1f) && (*(short *)(param_1 + uVar1 * 0x38 + 0x90) == 2)) {
    FUN_10046211c(param_1 + 0x88,1,0,0);
    return;
  }
  return;
}




void FUN_1004643d4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_s_onAbilityTriggeredName_10185d618;
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    if (DAT_101d23a38 != '\0') {
      FUN_1003a4e5c(&local_70,*(undefined8 *)(param_2 + 8));
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 != 0) {
        do {
          FUN_10046a418(lVar2,puVar1,local_70 & 0xffffffff);
          lVar2 = *(long *)(lVar2 + 0x350);
        } while (lVar2 != 0);
      }
      lVar2 = *(long *)(param_1 + 0x60);
    }
    lStack_68 = param_1;
    uStack_58 = param_4;
    local_60 = param_3;
    local_70 = param_2;
    for (lVar2 = *(long *)(lVar2 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x350)) {
      FUN_100469fd0(lVar2,&local_70);
    }
  }
  return;
}




void FUN_100464490(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  puVar2 = PTR_s_onEnterCombatName_10185d760;
  if ((*(byte *)(param_1 + 0x303) & 1) != 0) {
LAB_100464590:
    *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) | 1;
    *(undefined4 *)(param_1 + 0x2f0) = 0x40a00000;
    return;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28), lVar4 != 0)) {
    do {
      FUN_10046a360(lVar4,puVar2);
      lVar4 = *(long *)(lVar4 + 0x350);
    } while (lVar4 != 0);
    if (param_1 == 0) goto LAB_100464590;
  }
  uVar5 = 0x10000;
  lVar4 = param_1;
LAB_1004644f4:
  do {
    do {
      lVar3 = lVar4;
      if ((lVar3 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x29740532), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar3);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar4 = *(long *)(lVar3 + 0x18), lVar4 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1004644f4;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_100464590;
      lVar4 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) goto LAB_100464590;
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar4 = *(long *)(lVar3 + 0x20), lVar4 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_100464590;
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar3 == 0) goto LAB_100464590;
    }
  } while( true );
}




void FUN_1004645b8(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  undefined4 local_38 [2];
  
  if (((DAT_101d23a38 == '\0') && (*(long *)(param_1 + 0x60) != 0)) &&
     (*(long *)(param_1 + 0x58) != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x58) + (param_2 & 0xffffffff) * 8 + 0x50);
    pcVar2 = *(char **)(lVar3 + 0x200);
    if (pcVar2 == (char *)0x0) {
      lVar3 = *(long *)(lVar3 + 0x38);
      if (lVar3 == 0) {
        pcVar2 = "<null>";
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
      }
    }
    FUN_1003a4e5c(local_38,pcVar2);
    puVar1 = PTR_s_onPreAbilityTriggeredClient_10185d740;
    for (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x28); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x350)) {
      FUN_10046a504(0,lVar3,puVar1,local_38[0],param_3);
    }
  }
  return;
}




void FUN_100464674(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar3 != 0) {
    plVar5 = (long *)(param_1 + 0x38);
    do {
      lVar9 = *plVar5;
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x4c) == param_2)) goto LAB_1004646c8;
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar9 = 0;
LAB_1004646c8:
  uVar3 = (ulong)*(ushort *)(*(long *)(lVar9 + 0x30) + 0x68) & 0x1f;
  if (((int)uVar3 != 0x1f) && (*(short *)(*(long *)(lVar9 + 0x30) + uVar3 * 0x38 + 0x70) == 2)) {
    FUN_1003b98c8();
  }
  if (param_3 != 0) {
    if (*(long *)(lVar9 + 0x30) == 0) {
      piVar8 = &DAT_10115bdb4;
    }
    else {
      lVar4 = *(long *)(*(long *)(lVar9 + 0x30) + 0x1f8);
      piVar8 = &DAT_101d90970;
      if (lVar4 != 0) {
        piVar8 = (int *)(lVar4 + 0x50);
      }
    }
    if ((*piVar8 != DAT_101d90970) &&
       (uVar2 = (uint)*(ushort *)(param_1 + 0xdc), (*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0)) {
      uVar3 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x38 + uVar3 * 8);
        if (lVar4 != 0) {
          lVar1 = *(long *)(lVar4 + 0x30);
          piVar7 = &DAT_10115bdb4;
          if ((lVar1 != 0) && (piVar7 = &DAT_101d90970, *(long *)(lVar1 + 0x1f8) != 0)) {
            piVar7 = (int *)(*(long *)(lVar1 + 0x1f8) + 0x50);
          }
          if (((*piVar7 == *piVar8 && lVar4 != lVar9) &&
              (uVar6 = (ulong)*(ushort *)(lVar1 + 0x68) & 0x1f, (int)uVar6 != 0x1f)) &&
             (*(short *)(lVar1 + uVar6 * 0x38 + 0x70) == 2)) {
            FUN_1003b98c8();
            uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uVar2 >> 8 & 0x7f));
    }
  }
  return;
}




void FUN_1004647ec(undefined8 param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_448 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (uint)param_3;
  if (uVar2 != 0) {
    _bzero(param_2,(param_3 & 0xffffffff) << 3);
  }
  uVar1 = FUN_1010a0218(param_1,local_448,param_3,DAT_101867400);
  if (uVar1 != 0 && uVar2 != 0) {
    uVar3 = 0;
    do {
      *(undefined8 *)((long)param_2 + uVar3 * 8) = local_448[uVar3];
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) break;
    } while (uVar3 < (param_3 & 0xffffffff));
  }
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




undefined4 FUN_1004648c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_101e94190 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e94190), iVar1 != 0)) {
    uVar2 = FUN_1004d2524("talent_none");
    DAT_101e94188 = FUN_100015208("talent_none",uVar2,0x12345678);
    ___cxa_guard_release(&DAT_101e94190);
  }
  return DAT_101e94188;
}




void FUN_10046493c(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (((plVar2 != (long *)0x0) && (*(int *)(param_1 + 0x40) == (int)plVar2[1])) &&
     (lVar3 = (**(code **)(*plVar2 + 0x10))(), lVar3 != 0)) {
    plVar2 = *(long **)(param_1 + 0x38);
    uVar4 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
        uVar4 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar4 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
      }
    }
    FUN_100472030(uVar4);
  }
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}




undefined1 FUN_1004649d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}




void FUN_1004649e0(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x38);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
          }
        }
        FUN_100472030(uVar4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
    }
  }
  plVar2 = (long *)(param_2 + 0x28);
  lVar3 = *plVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long **)(param_1 + 0x38) = plVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  (**(code **)(lVar3 + 0x10))(plVar2);
  FUN_100471f64();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}




void FUN_100464aa8(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (((plVar2 != (long *)0x0) && (*(int *)(param_1 + 0x40) == (int)plVar2[1])) &&
     (lVar3 = (**(code **)(*plVar2 + 0x10))(), lVar3 != 0)) {
    plVar2 = *(long **)(param_1 + 0x38);
    uVar4 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
        uVar4 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar4 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
      }
    }
    FUN_100472030(uVar4);
  }
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}




void FUN_100464b40(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
        *(undefined1 *)(lVar2 + 0x58) = 0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
    }
  }
  return;
}




undefined8 FUN_100464bb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dea0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_100464be4();
  return uVar2;
}




undefined8 FUN_100464be4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0x38);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x000100464c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))();
        return uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
  }
  return 0;
}




void FUN_100464c6c(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100464c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xb8))();
    return;
  }
  return;
}




void FUN_100464c84(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100464c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xc0))();
    return;
  }
  return;
}




void FUN_100464c9c(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x818);
  if ((bVar1 & 1) != 0) {
    FUN_100466f74(param_1);
    bVar1 = *(byte *)(param_1 + 0x818);
  }
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x7bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c4) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(byte *)(param_1 + 0x818) = bVar1 & 0xfe;
  *(undefined4 *)(param_1 + 0x804) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0;
  return;
}




void FUN_100464d1c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if ((ulong)*(byte *)(lVar2 + 0x198) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(lVar2 + 0x50 + uVar1 * 8) == *(long *)(lVar2 + 0x48)) {
        if ((int)uVar1 == -1) {
          return;
        }
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_48 = &PTR_FUN_101496a00;
        local_2c = 0xffffffffffffffff;
        local_20 = 0;
        local_24 = 0;
        local_18 = (undefined1)uVar1;
        local_14 = 3;
        FUN_100496bec(&local_48,&DAT_101e47d30);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (*(byte *)(lVar2 + 0x198) != uVar1);
  }
  return;
}




ushort FUN_100464db0(ushort *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar2 = (ulong)*param_1 & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_100464df0;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_100464df0:
    if ((uint)uVar3 != uVar1) {
      return param_1[uVar2 * 0x1c + 5] >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_100464e18(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x2fc) & 0x1f) == 1) {
    return;
  }
  *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) & 0xe0 | 1;
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100464e74:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x36de0632), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100464e74;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100464f14(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x2fc) & 0x1f) == 2) {
    return;
  }
  *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) & 0xe0 | 2;
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100464f70:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x36de0632), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100464f70;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100465010(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x2fc) & 0x1f) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) & 0xe0;
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_10046504c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x36de0632), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10046504c;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_100465104(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return *(byte *)(lVar1 + 0x818) & 1;
}




void FUN_100465140(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    if (*(char *)(*(long *)(lVar1 + 0x40) + 0x24) != '\0') {
      FUN_1004694d8(lVar1);
    }
  }
  return;
}




int FUN_10046517c(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x8c) + *(float *)(lVar1 + 0x140) * (*(float *)(lVar1 + 0x2a8) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 500),DAT_101e94374);
  return (int)DAT_101e942b4;
}




void FUN_1004651c0(long param_1,undefined8 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined4 local_38;
  
  fVar2 = *(float *)(*(long *)(param_1 + 0x38) + 100);
  fVar3 = *(float *)(*(long *)(param_1 + 0x38) + 0x68);
  fVar4 = *(float *)(param_1 + 0x2e8);
  if ((DAT_101e94178 & 1) == 0) {
    iVar1 = ___cxa_guard_acquire(&DAT_101e94178);
    if (iVar1 != 0) {
      DAT_101e94170 = 0x3e3270a0;
      ___cxa_guard_release(&DAT_101e94178);
    }
  }
  FUN_1003ab468(param_1,&DAT_101e94170,auStack_70);
  *param_2 = local_40;
  *(undefined4 *)(param_2 + 1) = local_38;
  *(float *)((long)param_2 + 0xc) = ((fVar4 + fVar2) * fVar3) / fVar2;
  return;
}




void FUN_100465290(long param_1,undefined4 *param_2,undefined8 *param_3,float *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  fVar2 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar2;
  uVar3 = *(undefined4 *)(param_1 + 600);
  param_2[1] = *(float *)(param_1 + 0x2ec) + fVar2;
  param_2[2] = uVar3;
  *(undefined4 *)(param_3 + 1) = 0;
  *param_3 = 0x3f80000000000000;
  lVar1 = *(long *)(param_1 + 0x38);
  fVar2 = *(float *)(lVar1 + 0x70);
  if (fVar2 <= 0.0) {
    fVar2 = *(float *)(lVar1 + 0x68);
  }
  *param_4 = ((*(float *)(param_1 + 0x2e8) + *(float *)(lVar1 + 100)) * fVar2) /
             *(float *)(lVar1 + 100);
  *param_5 = *(undefined4 *)(lVar1 + 0x6c);
  return;
}




void FUN_100465300(float param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  
  FUN_100466938();
  switch((int)param_4) {
  case 0:
    fVar2 = *(float *)(param_2 + (param_3 & 0xffffffff) * 4 + 0x38);
    break;
  case 1:
    fVar2 = *(float *)(param_2 + (param_3 & 0xffffffff) * 4 + 0xec);
    break;
  case 2:
    fVar2 = *(float *)(param_2 + (param_3 & 0xffffffff) * 4 + 0x1a0);
    break;
  case 3:
    fVar2 = *(float *)(param_2 + (param_3 & 0xffffffff) * 4 + 0x254);
    break;
  case -1:
    lVar1 = param_2 + (param_3 & 0xffffffff) * 4;
    fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
    fVar2 = fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0);
    break;
  default:
    fVar2 = -1.0;
  }
  FUN_100463154(fVar2 + param_1,param_2,param_3,param_4);
  return;
}




void FUN_1004653d8(float param_1,long param_2,uint param_3)

{
  if ((param_3 == 6) && (0.0 < param_1)) {
    *(float *)(param_2 + 0x324) = *(float *)(param_2 + 0x324) + param_1;
  }
  param_2 = param_2 + (ulong)param_3 * 4;
  param_1 = *(float *)(param_2 + 0x308) + param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x308) = param_1;
  FUN_100466b84();
  return;
}




void FUN_100465410(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = 0;
  puVar3 = (undefined4 *)(param_2 + 0xb4);
  puVar4 = (undefined4 *)(param_1 + 0xec);
  do {
    uVar5 = 1L << (uVar1 & 0x3f);
    if ((*(ulong *)(param_2 + 0x310) & uVar5) != 0) {
      puVar4[-0x2d] = puVar3[-0x2d];
      uVar6 = *(ulong *)(param_1 + 0x348);
      *puVar4 = *puVar3;
      puVar4[0x2d] = puVar3[0x2d];
      *(ulong *)(param_1 + 0x348) = uVar6 | uVar5;
    }
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar1 != 0x2d);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1 + 0x308 + lVar2) = *(undefined4 *)(param_2 + 0x2d0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x40);
  return;
}




void FUN_10046548c(long param_1,undefined8 param_2)

{
  FUN_10045c628(param_2,*(long *)(param_1 + 0x40) + 0x38);
  return;
}




char * FUN_1004654a0(long param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(*(long *)(param_1 + 0x38) + 0x38);
  if (*pcVar1 != '\0') {
    return pcVar1;
  }
  return *(char **)(*(long *)(param_1 + 0x38) + 0x20);
}




void FUN_1004654bc(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 0x2f4) & 1) == 0) {
    iVar1 = FUN_1003461dc(param_2);
    if (iVar1 == -1) {
      return;
    }
    FUN_1003461dc(param_2);
    param_2 = FUN_100345d90();
    if (param_2 == 0) {
      return;
    }
    if ((*(byte *)(param_2 + 0x2f4) & 1) == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_100465518(long param_1)

{
  FUN_100460ed8(*(undefined8 *)(param_1 + 0x58));
  return;
}




undefined4
FUN_100465520(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long local_90;
  int local_88 [2];
  
  uVar6 = *param_6;
  FUN_1003a4e5c(local_88,uVar6);
  iVar3 = *(int *)(param_6 + 7);
  if (iVar3 != 2) {
    lVar7 = *(long *)(param_4 + 0x28);
    if (lVar7 == 0) goto LAB_100465604;
    do {
      if (((*(int *)(lVar7 + 0x314) == local_88[0]) && (*(int *)(lVar7 + 0x310) == 0)) &&
         ((iVar3 != 1 || (*(int *)(lVar7 + 0x308) == (int)param_5)))) {
        FUN_10046990c(param_1,param_2,param_3,lVar7,param_5,param_8,param_9,param_10);
        return *(undefined4 *)(lVar7 + 0x30c);
      }
      lVar7 = *(long *)(lVar7 + 0x350);
    } while (lVar7 != 0);
  }
  if (DAT_101d23a38 == '\0' && iVar3 == 2) {
    for (lVar7 = *(long *)(param_4 + 0x28); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
      if ((*(int *)(lVar7 + 0x30c) == (int)param_7) && (*(int *)(lVar7 + 0x310) != 2))
      goto LAB_100465688;
    }
  }
LAB_100465604:
  if (((int)param_8 == 0) && (*(char *)((long)param_6 + 0x2e) != '\0')) {
LAB_100465688:
    uVar5 = 0xffffffff;
  }
  else {
    local_90 = 0;
    FUN_1003e50b0(param_1,param_2,param_3,param_4,param_5,uVar6,param_6,&local_90,param_7,param_8,
                  param_9,(int)param_10);
    lVar4 = local_90;
    *(undefined8 *)(local_90 + 0x350) = 0;
    lVar7 = *(long *)(param_4 + 0x28);
    lVar2 = *(long *)(param_4 + 0x30);
    *(long *)(local_90 + 0x358) = lVar2;
    plVar1 = (long *)(param_4 + 0x28);
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar2 + 0x350);
    }
    *plVar1 = local_90;
    *(long *)(param_4 + 0x30) = local_90;
    *(int *)(param_4 + 0x38) = *(int *)(param_4 + 0x38) + 1;
    FUN_100469644(local_90);
    uVar5 = *(undefined4 *)(lVar4 + 0x30c);
  }
  return uVar5;
}




void FUN_1004656e0(long param_1,int param_2,int param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(lVar1 + 0x30c) == param_2) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  fVar2 = (float)(int)((uint)*(ushort *)(lVar1 + 0x344) - param_3);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  FUN_100469600(lVar1,(int)fVar2,1);
  return;
}




undefined1 FUN_100465720(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    return *(undefined1 *)(*(long *)(param_1 + 0x68) + 0xdc);
  }
  return 0;
}




byte FUN_100465738(long param_1)

{
  return *(byte *)(param_1 + 0xdd) & 0x7f;
}




void FUN_100465744(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined2 param_6,undefined1 param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if ((int)param_4 == -1) {
    uVar8 = (ulong)*(byte *)(param_2 + 0xdd) & 0x7f;
    if ((int)uVar8 != 0) {
      plVar9 = (long *)(param_2 + 0x38);
      do {
        lVar4 = *plVar9;
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x48) == (int)param_3)) &&
           (uVar11 = *(uint *)(lVar4 + 0x50),
           (int)(uVar11 & 0xffff) < *(int *)(*(long *)(lVar4 + 0x28) + 0x38))) {
          *(uint *)(lVar4 + 0x50) = uVar11 & 0xffff0000 | uVar11 + 1 & 0xffff;
          lVar4 = *(long *)(param_2 + 0x10);
          if (lVar4 == 0) {
            return;
          }
          uVar11 = 0x10000;
          lVar5 = lVar4;
LAB_1004658cc:
          do {
            do {
              lVar7 = lVar5;
              if ((lVar7 != lVar4) &&
                 (lVar5 = FUN_1010a0918(*(undefined8 *)(lVar7 + 8),0x3bb20643), lVar5 != 0)) {
                (**(code **)(lVar5 + 8))(lVar7);
              }
              if (((uVar11 & 0xffff) < uVar11 >> 0x10) &&
                 (lVar5 = *(long *)(lVar7 + 0x18), lVar5 != 0)) {
                uVar11 = uVar11 & 0xffff0000 | uVar11 + 1 & 0xffff;
                goto LAB_1004658cc;
              }
              if ((uVar11 & 0xffff) == 0) {
                return;
              }
              lVar5 = *(long *)(lVar7 + 0x20);
            } while (*(long *)(lVar7 + 0x20) != 0);
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 == 0) {
              return;
            }
            uVar1 = uVar11 - 1 & 0xffff;
            if (uVar1 == 0) {
              return;
            }
            uVar11 = uVar1 | uVar11 & 0xffff0000;
            while (lVar5 = *(long *)(lVar7 + 0x20), lVar5 == 0) {
              if ((uVar11 - 1 & 0xffff) == 0) {
                return;
              }
              lVar7 = *(long *)(lVar7 + 0x10);
              uVar11 = uVar11 & 0xffff0000 | uVar11 - 1 & 0xffff;
              if (lVar7 == 0) {
                return;
              }
            }
          } while( true );
        }
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar10 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (param_3 & 0xffffffff) * 8);
    uVar3 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar3,0,uVar10,0);
    if ((*(char *)(lVar4 + 0x19d) == '\0') && (iVar2 = FUN_10046e1cc(param_2,param_3), iVar2 != 0))
    {
      lVar5 = FUN_1010a0298(param_2,DAT_1018673e0);
      FUN_10046d398(lVar5,lVar4,param_4,param_3);
      FUN_10046d4b8(lVar5);
      *(undefined2 *)(lVar5 + 0x50) = param_6;
      if (((param_5 & 1) == 0) && (*(long *)(lVar5 + 0x30) != 0)) {
        FUN_10046df78(param_1,lVar5,param_7);
      }
      uVar6 = *(ushort *)(param_2 + 0xdc);
      uVar8 = (ulong)(uVar6 >> 8) & 0x7f;
      if ((int)uVar8 != 0) {
        plVar9 = (long *)(param_2 + 0x38);
        do {
          if (*plVar9 == 0) {
            *plVar9 = lVar5;
            uVar6 = *(ushort *)(param_2 + 0xdc);
            break;
          }
          plVar9 = plVar9 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      *(ushort *)(param_2 + 0xdc) = uVar6 & 0x7f00 | uVar6 + 1 & 0xff | 0x8000;
      lVar4 = *(long *)(param_2 + 0x10);
      if (lVar4 != 0) {
        uVar11 = 0x10000;
        lVar5 = lVar4;
LAB_1004659a0:
        do {
          do {
            lVar7 = lVar5;
            if ((lVar7 != lVar4) &&
               (lVar5 = FUN_1010a0918(*(undefined8 *)(lVar7 + 8),0x3bb20643), lVar5 != 0)) {
              (**(code **)(lVar5 + 8))(lVar7);
            }
            if (((uVar11 & 0xffff) < uVar11 >> 0x10) &&
               (lVar5 = *(long *)(lVar7 + 0x18), lVar5 != 0)) {
              uVar11 = uVar11 & 0xffff0000 | uVar11 + 1 & 0xffff;
              goto LAB_1004659a0;
            }
            if ((uVar11 & 0xffff) == 0) {
              return;
            }
            lVar5 = *(long *)(lVar7 + 0x20);
          } while (*(long *)(lVar7 + 0x20) != 0);
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          uVar1 = uVar11 - 1 & 0xffff;
          if (uVar1 == 0) {
            return;
          }
          uVar11 = uVar1 | uVar11 & 0xffff0000;
          while (lVar5 = *(long *)(lVar7 + 0x20), lVar5 == 0) {
            if ((uVar11 - 1 & 0xffff) == 0) {
              return;
            }
            lVar7 = *(long *)(lVar7 + 0x10);
            uVar11 = uVar11 & 0xffff0000 | uVar11 - 1 & 0xffff;
            if (lVar7 == 0) {
              return;
            }
          }
        } while( true );
      }
    }
  }
  return;
}




void FUN_100465a40(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    uVar3 = (uint)*(ushort *)(lVar1 + 0xdc);
    if ((*(ushort *)(lVar1 + 0xdc) & 0x7f00) != 0) {
      uVar2 = 0;
      uVar4 = 0;
      do {
        lVar5 = *(long *)(lVar1 + 0x38 + uVar2 * 8);
        if (lVar5 != 0) {
          *(undefined4 *)(param_2 + uVar4 * 4) = *(undefined4 *)(lVar5 + 0x48);
          uVar4 = (ulong)((int)uVar4 + 1);
          uVar3 = (uint)*(ushort *)(lVar1 + 0xdc);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uVar3 >> 8 & 0x7f));
    }
  }
  return;
}




ulong FUN_100465a8c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x38 + uVar2 * 8);
      if (lVar4 != 0) {
        *(undefined4 *)(param_2 + uVar1 * 4) = *(undefined4 *)(lVar4 + 0x48);
        uVar1 = (ulong)((int)uVar1 + 1);
        uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uVar3 >> 8 & 0x7f));
  }
  return uVar1;
}




void FUN_100465adc(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    uVar3 = (uint)*(ushort *)(lVar1 + 0xdc);
    if ((*(ushort *)(lVar1 + 0xdc) & 0x7f00) != 0) {
      uVar2 = 0;
      uVar4 = 0;
      do {
        lVar5 = *(long *)(lVar1 + 0x38 + uVar2 * 8);
        if (lVar5 != 0) {
          *(undefined4 *)(param_2 + uVar4 * 4) = *(undefined4 *)(lVar5 + 0x4c);
          uVar4 = (ulong)((int)uVar4 + 1);
          uVar3 = (uint)*(ushort *)(lVar1 + 0xdc);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uVar3 >> 8 & 0x7f));
    }
  }
  return;
}




void FUN_100465b28(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    uVar3 = (uint)*(ushort *)(lVar1 + 0xdc);
    if ((*(ushort *)(lVar1 + 0xdc) & 0x7f00) != 0) {
      uVar2 = 0;
      uVar4 = 0;
      do {
        lVar5 = *(long *)(lVar1 + 0x38 + uVar2 * 8);
        if (lVar5 != 0) {
          *(uint *)(param_2 + uVar4 * 4) = (uint)*(ushort *)(lVar5 + 0x50);
          uVar4 = (ulong)((int)uVar4 + 1);
          uVar3 = (uint)*(ushort *)(lVar1 + 0xdc);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uVar3 >> 8 & 0x7f));
    }
  }
  return;
}




void FUN_100465b74(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_100465b84();
    return;
  }
  return;
}




void FUN_100465b84(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x38 + uVar3 * 8);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x30);
        uVar5 = 0;
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0x1f8) != 0)) {
          uVar5 = FUN_10045f284();
        }
        *(undefined4 *)(param_2 + uVar4 * 4) = uVar5;
        uVar4 = (ulong)((int)uVar4 + 1);
        uVar1 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar1 >> 8 & 0x7f));
  }
  return;
}




void FUN_100465c08(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_100465c18();
    return;
  }
  return;
}




void FUN_100465c18(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar1 = 0;
    uVar2 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x38 + uVar1 * 8);
      if (lVar4 != 0) {
        lVar4 = *(long *)(lVar4 + 0x30);
        uVar3 = 0;
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x1f8), uVar3 = 0, lVar4 != 0)) {
          uVar3 = (uint)*(byte *)(lVar4 + 0x6a);
        }
        *(uint *)(param_2 + uVar2 * 4) = uVar3;
        uVar2 = (ulong)((int)uVar2 + 1);
        uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uVar3 >> 8 & 0x7f));
  }
  return;
}




void FUN_100465c6c(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dda8) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar4 = 0;
  uVar2 = *(uint *)(lVar3 + 0x5c);
  do {
    puVar1 = (undefined1 *)(lVar3 + (ulong)uVar2 * 0x19 + 0x28 + lVar4);
    *(undefined1 *)(param_2 + lVar4) = *puVar1;
    *(undefined1 *)(param_3 + lVar4) = puVar1[8];
    *(undefined1 *)(param_4 + lVar4) = puVar1[0x10];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 8);
  return;
}




void FUN_100465cd8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  long alStack_428 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined2 *)(param_1 + 0x2f8) = 0;
  uVar1 = FUN_1010a0218((int)param_1,alStack_428,0x80,DAT_101867360);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    plVar4 = alStack_428;
    do {
      uVar2 = *(ushort *)(*plVar4 + 0x34) | uVar2;
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
  }
  *(ushort *)(param_1 + 0x2f8) = uVar2;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_100465d68(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar1 = FUN_100346498();
  FUN_1003df8d4(0x3f800000,param_1,1,uVar1,&local_34,&local_38,&local_3c,0);
  lVar2 = *(long *)(param_2 + 0x40);
  uVar5 = NEON_fmov(0x3f800000,4);
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  fVar3 = (float)*(undefined8 *)(lVar2 + 0x54) +
          (float)*(undefined8 *)(lVar2 + 0x108) *
          ((float)*(undefined8 *)(lVar2 + 0x270) + (float)uVar5);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20) +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x108) >> 0x20) *
          ((float)((ulong)*(undefined8 *)(lVar2 + 0x270) >> 0x20) + fVar6);
  uVar1 = NEON_fminnm(CONCAT44(fVar4 + fVar4 * (float)((ulong)*(undefined8 *)(lVar2 + 0x1bc) >> 0x20
                                                      ),
                               fVar3 + fVar3 * (float)*(undefined8 *)(lVar2 + 0x1bc)),_DAT_101e9433c
                      ,4);
  uVar1 = NEON_fmaxnm(_DAT_101e9427c,uVar1,4);
  return local_3c + local_34 / ((float)uVar5 + (float)uVar1 * 0.01) +
         local_38 / (fVar6 + (float)((ulong)uVar1 >> 0x20) * 0.01);
}




int FUN_100465e38(long param_1)

{
  return (int)((uint)*(ushort *)(param_1 + 0x301) << 0x16) >> 0x16;
}




long FUN_100465e48(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int local_28 [2];
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x38) + 0x1d8);
  puVar1 = (undefined8 *)*plVar2;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_1003a4e5c(local_28,*puVar1);
    if (*(int *)(param_1 + 0x26c) == local_28[0]) break;
    puVar1 = (undefined8 *)plVar2[1];
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100465eb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100467480();
  return;
}




void FUN_100465edc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      pcVar6 = (char *)*puVar5;
      if (pcVar6 == (char *)0x0) {
        uVar3 = 0;
      }
      else {
        cVar4 = *pcVar6;
        uVar3 = 0x811c9dc5;
        if (cVar4 != '\0') {
          uVar3 = 0x811c9dc5;
          do {
            pcVar6 = pcVar6 + 1;
            uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
            cVar4 = *pcVar6;
          } while (cVar4 != '\0');
        }
      }
      lVar2 = FUN_100034344(param_1 + 0x38,uVar3);
      uVar1 = FUN_10049f2e4(param_1 + 0x38,param_2);
      *(undefined4 *)(lVar2 + 4) = uVar1;
      param_2 = param_2 + 1;
      puVar5 = (undefined8 *)*param_2;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100465f78(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    do {
      pcVar7 = (char *)*puVar3;
      if (pcVar7 == (char *)0x0) {
        uVar4 = 0;
        if (uVar1 != 0) goto LAB_100465fd4;
LAB_100466034:
        uVar4 = 0xffffffff;
      }
      else {
        cVar5 = *pcVar7;
        uVar4 = 0x811c9dc5;
        if (cVar5 != '\0') {
          uVar4 = 0x811c9dc5;
          do {
            pcVar7 = pcVar7 + 1;
            uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
            cVar5 = *pcVar7;
          } while (cVar5 != '\0');
        }
        if (uVar1 == 0) goto LAB_100466034;
LAB_100465fd4:
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar4 / uVar1;
        }
        uVar8 = (ulong)(uVar4 - uVar2 * uVar1);
        lVar6 = *(long *)(param_1 + 0x40);
        if (*(uint *)(lVar6 + uVar8 * 8) != uVar4) {
          do {
            if (*(int *)(lVar6 + uVar8 * 8 + 4) == -1) break;
            uVar2 = uVar1;
            if (0 < (int)(uint)uVar8) {
              uVar2 = (uint)uVar8;
            }
            uVar8 = (ulong)(uVar2 - 1);
          } while (*(uint *)(lVar6 + uVar8 * 8) != uVar4);
          if ((int)uVar8 == -1) goto LAB_100466034;
        }
        uVar4 = *(uint *)(lVar6 + uVar8 * 8 + 4);
      }
      *(undefined8 **)(*(long *)(param_1 + 0x58) + (ulong)uVar4 * 8) = puVar3;
      param_2 = param_2 + 1;
      puVar3 = (undefined8 *)*param_2;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}




void FUN_10046604c(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  int local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  
  if (DAT_101d23a68 == (int *)0x0) {
    iVar5 = 0x40;
  }
  else {
    iVar5 = *DAT_101d23a68;
  }
  puVar3 = (undefined8 *)*param_2;
  while (puVar3 != (undefined8 *)0x0) {
    uVar4 = *puVar3;
    iVar1 = FUN_1004d2524(uVar4);
    if ((iVar1 != 0) && (*(int *)(*param_2 + 8) == -1 || *(int *)(*param_2 + 8) == iVar5)) {
      uVar2 = *(undefined4 *)(param_1 + 0x260);
      iVar1 = FUN_1003461dc(param_1);
      if (iVar1 != -1) {
        uVar2 = FUN_1003461dc(param_1);
      }
      uStack_98 = *(undefined4 *)(param_1 + 0x260);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b8 = &PTR_FUN_101496b18;
      local_94 = DAT_1018589d8;
      local_90 = 0xbf80000000000000;
      local_88 = 1;
      local_70 = 0;
      local_84 = 0;
      uStack_7c = 0;
      local_68 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_9c = uVar2;
      uVar2 = FUN_1003d4e0c(uVar4);
      local_90 = CONCAT44(local_90._4_4_,uVar2);
      (*(code *)local_b8[4])(&local_b8,&DAT_101e47d30);
    }
    puVar3 = (undefined8 *)param_2[1];
    param_2 = param_2 + 1;
  }
  return;
}




void FUN_10046618c(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (((param_2 & 1) != 0) &&
     ((uVar2 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
      (1 < *(ushort *)(param_1 + uVar2 * 0x38 + 0x90) - 3)))) {
    FUN_100464374(param_1);
  }
  for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_101867380) {
      if ((param_2 >> 10 & 1) == 0) {
        return;
      }
      FUN_1010a01dc();
      return;
    }
  }
  uVar2 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if ((((int)uVar2 == 0x1f) || (1 < *(ushort *)(param_1 + uVar2 * 0x38 + 0x90) - 3)) &&
     ((param_2 >> 10 & 1) == 0)) {
    FUN_1003d88bc(param_1);
    return;
  }
  return;
}




void FUN_100466254(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  puVar2 = PTR_s_onLeaveCombatName_10185d660;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x28), lVar4 != 0)) {
    do {
      FUN_10046a360(lVar4,puVar2);
      lVar4 = *(long *)(lVar4 + 0x350);
    } while (lVar4 != 0);
    if (param_1 == 0) {
      return;
    }
  }
  uVar5 = 0x10000;
  lVar4 = param_1;
LAB_1004662a4:
  do {
    do {
      lVar3 = lVar4;
      if ((lVar3 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x28d80521), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar3);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar4 = *(long *)(lVar3 + 0x18), lVar4 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1004662a4;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar4 = *(long *)(lVar3 + 0x20), lVar4 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




long FUN_100466354(long param_1)

{
  short sVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return 0;
  }
  sVar1 = *(short *)(param_1 + uVar2 * 0x38 + 0x90);
  if (sVar1 == 3) {
    return 1;
  }
  return (ulong)(sVar1 == 4) << 1;
}




void FUN_100466398(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1004663c4:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x299d0531), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1004663c4;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10046647c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1004664a0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x4a290718), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1004664a0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100466550(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100466590:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x3b27063d), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100466590;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100466654(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100466680:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x3f020699), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100466680;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100466738(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_10046675c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x938b0a4e), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10046675c;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10046680c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar4 = 0;
  if (param_3 != 0) {
    lVar4 = param_3 + 0x28;
  }
  puVar2 = &DAT_101dc0b88;
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(lVar4 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 0x2b0) = lVar4;
  *(undefined4 *)(param_1 + 0x2b8) = uVar3;
  uVar6 = 0x10000;
  lVar4 = param_1;
LAB_100466870:
  do {
    do {
      lVar5 = lVar4;
      if ((lVar5 != param_1) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x3be20659), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_100466870;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100466938(float param_1,long param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  
  if ((param_5 == 0) && (0.0 < param_1)) {
    if (param_3 == 2) {
      fVar2 = *(float *)(param_2 + 0x1a8) + 1.0;
      NEON_fminnm((*(float *)(param_2 + 0x40) +
                  *(float *)(param_2 + 0xf4) * (*(float *)(param_2 + 0x25c) + 1.0)) * fVar2,
                  DAT_101e94328);
      fVar1 = *(float *)(param_2 + 0xf4) + *(float *)(param_2 + 0x40);
      if (param_4 != 2) {
        fVar1 = fVar2;
      }
      fVar1 = (fVar1 * param_1 * *(float *)(param_2 + 0x310)) / DAT_101e94268;
      if (0.0 < fVar1) {
        *(float *)(param_2 + 0x310) = fVar1 + *(float *)(param_2 + 0x310);
      }
    }
    else if (param_3 == 0) {
      fVar2 = *(float *)(param_2 + 0x1a0) + 1.0;
      NEON_fminnm((*(float *)(param_2 + 0x38) +
                  *(float *)(param_2 + 0xec) * (*(float *)(param_2 + 0x254) + 1.0)) * fVar2,
                  DAT_101e94320);
      fVar1 = *(float *)(param_2 + 0xec) + *(float *)(param_2 + 0x38);
      if (param_4 != 2) {
        fVar1 = fVar2;
      }
      fVar1 = (fVar1 * param_1 * *(float *)(param_2 + 0x308)) / DAT_101e94260;
      if (0.0 < fVar1) {
        *(float *)(param_2 + 0x308) = fVar1 + *(float *)(param_2 + 0x308);
        return;
      }
    }
  }
  return;
}




void FUN_100466a28(long param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  
  if (param_2 < 0x20) {
    if (param_2 == 0) {
      pfVar1 = (float *)(param_1 + 0x308);
      fVar5 = *(float *)(param_1 + 0x38) +
              *(float *)(param_1 + 0xec) * (*(float *)(param_1 + 0x254) + 1.0);
      pfVar2 = (float *)(param_1 + 0x1a0);
      puVar3 = &DAT_101e94320;
      puVar4 = &DAT_101e94260;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      pfVar1 = (float *)(param_1 + 0x310);
      fVar5 = *(float *)(param_1 + 0x40) +
              *(float *)(param_1 + 0xf4) * (*(float *)(param_1 + 0x25c) + 1.0);
      pfVar2 = (float *)(param_1 + 0x1a8);
      puVar3 = &DAT_101e94328;
      puVar4 = &DAT_101e94268;
    }
  }
  else if (param_2 == 0x20) {
    pfVar1 = (float *)(param_1 + 0x318);
    fVar5 = *(float *)(param_1 + 0xb8) +
            *(float *)(param_1 + 0x16c) * (*(float *)(param_1 + 0x2d4) + 1.0);
    pfVar2 = (float *)(param_1 + 0x220);
    puVar3 = &DAT_101e943a0;
    puVar4 = &DAT_101e942e0;
  }
  else if (param_2 == 0x2b) {
    pfVar1 = (float *)(param_1 + 0x314);
    fVar5 = *(float *)(param_1 + 0xe4) +
            *(float *)(param_1 + 0x198) * (*(float *)(param_1 + 0x300) + 1.0);
    pfVar2 = (float *)(param_1 + 0x24c);
    puVar3 = &DAT_101e943cc;
    puVar4 = (undefined4 *)((long)&DAT_101e94308 + 4);
  }
  else {
    if (param_2 != 0x2c) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0x30c);
    fVar5 = *(float *)(param_1 + 0xe8) +
            *(float *)(param_1 + 0x19c) * (*(float *)(param_1 + 0x304) + 1.0);
    pfVar2 = (float *)(param_1 + 0x250);
    puVar3 = &DAT_101e943d0;
    puVar4 = &DAT_101e94310;
  }
  NEON_fminnm(fVar5 + fVar5 * *pfVar2,*puVar3);
  fVar5 = (float)NEON_fminnm(*pfVar1,*puVar4);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *pfVar1 = fVar5;
  return;
}




void FUN_100466b84(float param_1,long param_2,undefined4 param_3)

{
  float fVar1;
  
  switch(param_3) {
  case 0:
    fVar1 = *(float *)(param_2 + 0x38) +
            *(float *)(param_2 + 0xec) * (*(float *)(param_2 + 0x254) + 1.0);
    NEON_fminnm(fVar1 + fVar1 * *(float *)(param_2 + 0x1a0),DAT_101e94320);
    fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x308),DAT_101e94260);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_2 + 0x308) = fVar1;
    return;
  case 1:
    fVar1 = *(float *)(param_2 + 0xe8) +
            *(float *)(param_2 + 0x19c) * (*(float *)(param_2 + 0x304) + 1.0);
    NEON_fminnm(fVar1 + fVar1 * *(float *)(param_2 + 0x250),DAT_101e943d0);
    fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x30c),DAT_101e94310);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_2 + 0x30c) = fVar1;
    return;
  case 2:
    fVar1 = *(float *)(param_2 + 0x40) +
            *(float *)(param_2 + 0xf4) * (*(float *)(param_2 + 0x25c) + 1.0);
    NEON_fminnm(fVar1 + fVar1 * *(float *)(param_2 + 0x1a8),DAT_101e94328);
    fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x310),DAT_101e94268);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_2 + 0x310) = fVar1;
    return;
  case 3:
    fVar1 = *(float *)(param_2 + 0xe4) +
            *(float *)(param_2 + 0x198) * (*(float *)(param_2 + 0x300) + 1.0);
    NEON_fminnm(fVar1 + fVar1 * *(float *)(param_2 + 0x24c),DAT_101e943cc);
    fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x314),DAT_101e94308._4_4_);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_2 + 0x314) = fVar1;
  default:
    return;
  case 4:
    break;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_1 <= 0.0) {
    if (1.1920929e-07 <= ABS(*(float *)(param_2 + 0x318))) {
      return;
    }
    *(undefined4 *)(param_2 + 0xb8) = 0;
  }
  else {
    *(float *)(param_2 + 0xb8) = param_1;
  }
  *(ulong *)(param_2 + 0x348) = *(ulong *)(param_2 + 0x348) | 0x100000000;
  return;
}




undefined8 * FUN_100466d30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499bd0;
  param_1[5] = 0;
  thunk_FUN_10054e4f4(param_1 + 6);
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  *(undefined8 *)((long)param_1 + 0x7bc) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x7c4) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)((long)param_1 + 0x7dc) = 0;
  *(undefined8 *)((long)param_1 + 0x7d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0xff] = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x804) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  *(undefined4 *)((long)param_1 + 0x814) = 0;
  *(byte *)(param_1 + 0x103) = *(byte *)(param_1 + 0x103) & 0xd8;
  return param_1;
}




void FUN_100466df8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499bd0;
  thunk_FUN_100550ef4(param_1 + 6);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100466e28(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101499bd0;
  thunk_FUN_100550ef4(param_1 + 6);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100466e5c(long param_1)

{
  long lVar1;
  
  unique0x00048f00 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = unique0x00048f00 + 1;
  lVar1 = param_1 + (ulong)unique0x00048f00 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100466d30;
  *(code **)(lVar1 + 0xb8) = FUN_10049e2f4;
  *(uint *)(lVar1 + 0xa4) = unique0x00048f00;
  *(undefined4 *)(lVar1 + 0xa8) = 0x820;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_100466efc,0);
  FUN_1010a0990(param_1,0x1b0a0423,FUN_100466f44,0);
  return;
}




void FUN_100466efc(long param_1)

{
  FUN_100466fe8();
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x818) & 1) != 0) {
    FUN_1004671a4(param_1);
  }
  FUN_100467398(param_1);
  return;
}




void FUN_100466f44(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10046794c(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100466f74(long param_1)

{
  long lVar1;
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x1c) != '\0' && DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    local_20 = *(undefined8 *)(lVar1 + 0x250);
    local_18 = *(undefined4 *)(lVar1 + 600);
    local_24 = *(undefined4 *)(lVar1 + 0x260);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = &PTR_FUN_101497480;
    FUN_100497c24(&local_40,&DAT_101e47d30);
  }
  return;
}




void FUN_100466fe8(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_80 [4];
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar3 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_68 = 0.0;
  iVar2 = FUN_1004675bc(param_1,&local_70);
  if (iVar2 != 0) {
    fVar4 = (float)_fmodf(*(undefined4 *)(param_1 + 0x7e0),0x40c90fdb);
    fVar6 = local_68;
    fVar7 = fVar4 + 6.2831855;
    if (0.0 <= fVar4) {
      fVar7 = fVar4;
    }
    *(float *)(param_1 + 0x7e0) = fVar7;
    fVar8 = (float)local_70;
    fVar9 = local_70._4_4_;
    fVar4 = (float)NEON_fminnm((float)local_70 * 1.0 + local_70._4_4_ * 0.0 + local_68 * 0.0,
                               0x3f800000);
    if (fVar4 <= -1.0) {
      fVar4 = -1.0;
    }
    fVar5 = (float)_acosf(fVar4);
    fVar4 = 6.2831855 - fVar5;
    if (0.0 <= fVar8 * 0.0 + fVar9 * 0.0 + fVar6 * 1.0) {
      fVar4 = fVar5;
    }
    if ((fVar4 <= fVar7) || (fVar4 - fVar7 <= 3.1415927)) {
      if ((fVar4 < fVar7) && (3.1415927 < fVar7 - fVar4)) {
        fVar4 = fVar4 + 6.2831855;
      }
    }
    else {
      fVar4 = fVar4 - 6.2831855;
    }
    lVar1 = 0x14;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar1 = 0x18;
    }
    fVar9 = *(float *)(*(long *)(param_1 + 0x28) + lVar1);
    fVar6 = (float)FUN_1010a1cd4();
    fVar8 = -1.0;
    if (0.0 <= fVar7 - fVar4) {
      fVar8 = 1.0;
    }
    fVar7 = fVar7 + (fVar6 * (fVar7 - fVar4)) / (fVar9 * -0.016666668);
    local_80[0] = -1.0;
    if (0.0 <= fVar7 - fVar4) {
      local_80[0] = 1.0;
    }
    if (fVar8 == local_80[0]) {
      fVar4 = fVar7;
    }
    *(float *)(param_1 + 0x7e0) = fVar4;
    local_80[1] = 0.0;
    local_80[2] = (float)___sincosf_stret();
    local_60 = *(undefined8 *)(lVar3 + 0x250);
    local_58 = *(undefined4 *)(lVar3 + 600);
    FUN_1003d90d4(lVar3,&local_60,local_80);
  }
  return;
}




void FUN_1004671a4(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_50;
  float local_48;
  
  if ((*(byte *)(param_4 + 0x818) & 1) != 0) {
    lVar5 = *(long *)(param_4 + 0x10);
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f;
    if (((int)uVar3 == 0x1f) || (*(short *)(lVar5 + uVar3 * 0x38 + 0x90) != 2)) {
      *(byte *)(param_4 + 0x818) = *(byte *)(param_4 + 0x818) & 0xfe;
      FUN_100466f74(param_4);
      return;
    }
    *(undefined4 *)(param_4 + 0x7c8) = *(undefined4 *)(lVar5 + 0x250);
    fVar6 = *(float *)(lVar5 + 0x254);
    *(float *)(param_4 + 0x7cc) = fVar6;
    *(undefined4 *)(param_4 + 2000) = *(undefined4 *)(lVar5 + 600);
    fVar9 = *(float *)(lVar5 + 0x2ec);
    *(float *)(param_4 + 0x7cc) = fVar9 + fVar6;
    FUN_1003a31c8(lVar5,param_4 + 0x7d4,&DAT_1013cd824);
    fVar6 = (float)FUN_1003e4a18(lVar5);
    fVar7 = (float)FUN_1010a1cd4();
    lVar1 = param_4 + 0x30;
    iVar2 = FUN_10054ea68(fVar7 * fVar6,lVar1);
    if (iVar2 == 0) {
      FUN_100466f74(param_4);
      *(byte *)(param_4 + 0x818) = *(byte *)(param_4 + 0x818) & 0xfe;
    }
    else {
      local_50 = *(undefined8 *)(param_4 + 0x798);
      local_48 = *(float *)(param_4 + 0x7a0);
      uVar8 = FUN_10054eb90(lVar1);
      *(undefined4 *)(param_4 + 0x7bc) = uVar8;
      *(float *)(param_4 + 0x7c0) = fVar9;
      *(undefined4 *)(param_4 + 0x7c4) = param_3;
      FUN_1003d5db8(lVar5,&local_50);
      uVar3 = (ulong)(*(int *)(param_4 + 0x794) - 1);
      lVar4 = lVar1 + uVar3 * 0xc;
      fVar6 = (float)local_50 - *(float *)(lVar4 + 0x164);
      fVar7 = local_50._4_4_ - *(float *)(lVar4 + 0x168);
      fVar9 = local_48 - *(float *)(lVar4 + 0x16c);
      if (SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9) < 0.1) {
        fVar6 = *(float *)(lVar5 + 0x250) - *(float *)(lVar4 + 0x164);
        fVar7 = (*(float *)(lVar5 + 0x254) - *(float *)(lVar4 + 0x168)) + *(float *)(lVar5 + 0x2ec);
        fVar9 = *(float *)(lVar5 + 600) - *(float *)(lVar4 + 0x16c);
        if (0.1 <= SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7)) {
          FUN_100467520(param_4);
          uVar3 = (ulong)(*(int *)(param_4 + 0x794) - 1);
        }
        else {
          *(byte *)(param_4 + 0x818) = *(byte *)(param_4 + 0x818) & 0xfe;
        }
        FUN_1003d5db8(lVar5,lVar1 + uVar3 * 0xc + 0x164);
        FUN_100466f74(param_4);
      }
    }
  }
  return;
}




void FUN_100467398(void)

{
  if (DAT_101d23a38 != '\0') {
    FUN_10046781c();
    return;
  }
  FUN_100467884();
  return;
}




undefined4 FUN_1004673ac(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  if (((*(byte *)(param_1 + 0x818) ^ 0xff) & 0x21) == 0) {
    fVar2 = (float)_atan2f(*(undefined4 *)(param_1 + 0x7c4),*(undefined4 *)(param_1 + 0x7bc));
    fVar3 = (float)_fmodf(fVar2 - *(float *)(param_1 + 0x7e0),0x40c90fdb);
    fVar2 = fVar3 - 6.2831855;
    if (fVar3 <= 3.1415927) {
      fVar2 = fVar3;
    }
    fVar3 = fVar2 + 6.2831855;
    if (-3.1415927 <= fVar2) {
      fVar3 = fVar2;
    }
    if (ABS(fVar3) <= 2.3561945) {
      if (-0.7853982 <= fVar3) {
        uVar1 = 4;
        if (fVar3 <= 0.7853982) {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_100467480(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(byte *)(param_1 + 0x818) >> 3 & 3) != (uint)param_2) {
    *(byte *)(param_1 + 0x818) =
         *(byte *)(param_1 + 0x818) & 0xe7 | (byte)(((uint)param_2 & 3) << 3);
    local_30 = NEON_fmov(0x40f00000,4);
    local_28 = 0x40f00000;
    iVar1 = FUN_10054e044(param_2,param_1 + 0x7b0,auStack_40,&local_30);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xfe;
      if (DAT_101d23a38 != '\0') {
        FUN_100466f74(param_1);
      }
    }
    else {
      FUN_100463608(param_1,auStack_40);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100467520(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar3 = *(long *)(param_1 + 0x10);
  local_30 = *(undefined8 *)(lVar3 + 0x250);
  local_28 = *(undefined4 *)(lVar3 + 600);
  lVar3 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar3 == 0) {
      bVar2 = 0;
LAB_100467584:
      FUN_10054e534(param_1 + 0x30,bVar2);
      iVar1 = FUN_10054e574(param_1 + 0x30,&local_30,param_1 + 0x7b0);
      if (iVar1 != 0) {
        *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) | 1;
      }
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar2 = *(byte *)(lVar3 + 0x818) >> 3 & 3;
      goto LAB_100467584;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




bool FUN_1004675bc(long param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  plVar5 = *(long **)(param_1 + 0x7e8);
  if (plVar5 == (long *)0x0) {
LAB_100467650:
    bVar2 = 0;
    lVar6 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
  }
  else {
    if (*(int *)(param_1 + 0x7f0) != (int)plVar5[1]) {
      *(undefined8 *)(param_1 + 0x7e8) = 0;
      *(undefined4 *)(param_1 + 0x7f0) = DAT_101dc0b88;
      goto LAB_100467650;
    }
    lVar6 = (**(code **)(*plVar5 + 0x10))();
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
      bVar2 = 0;
    }
    else {
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x88) & 0x1f;
      if ((((int)uVar8 != 0x1f) && (*(short *)(lVar7 + uVar8 * 0x38 + 0x90) == 5)) &&
         ((*(ushort *)(lVar7 + 0x301) >> 0xe & 1) == 0)) {
        return false;
      }
      bVar2 = 1;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x818);
  if ((bVar1 & 0x21) == 1) {
    uVar9 = *(undefined8 *)(param_1 + 0x7bc);
    param_2[2] = *(float *)(param_1 + 0x7c4);
    *(undefined8 *)param_2 = uVar9;
    uVar3 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + 0x7e8) = 0;
    *(undefined4 *)(param_1 + 0x7f0) = uVar3;
    *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) & 0xf9;
LAB_1004676a4:
    bVar4 = true;
  }
  else {
    if ((bool)(bVar2 & lVar6 != lVar7) && (bVar1 & 6) == 6) {
      fVar10 = *(float *)(lVar7 + 0x250) - *(float *)(lVar6 + 0x250);
      fVar11 = *(float *)(lVar7 + 0x254) - *(float *)(lVar6 + 0x254);
      fVar12 = *(float *)(lVar7 + 600) - *(float *)(lVar6 + 600);
      fVar10 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
      if (0.01 <= fVar10) {
        fVar14 = *(float *)(lVar6 + 0x250) - *(float *)(lVar7 + 0x250);
        fVar12 = *(float *)(lVar6 + 0x254) - *(float *)(lVar7 + 0x254);
        fVar11 = *(float *)(lVar6 + 600) - *(float *)(lVar7 + 600);
LAB_1004677a4:
        *param_2 = fVar14;
        param_2[1] = fVar12;
        param_2[2] = fVar11;
        fVar13 = fVar14 * fVar14 + fVar12 * fVar12 + fVar11 * fVar11;
        if (1e-08 <= fVar13) {
          fVar13 = 1.0 / SQRT(fVar13);
          *param_2 = fVar14 * fVar13;
          param_2[1] = fVar12 * fVar13;
          param_2[2] = fVar11 * fVar13;
        }
        else {
          param_2[2] = 0.0;
          param_2[0] = 1.0;
          param_2[1] = 0.0;
        }
      }
    }
    else {
      bVar2 = bVar1 >> 1 & 3;
      if (bVar2 != 2) {
        if (bVar2 != 1) {
          return false;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x7f8);
        param_2[2] = *(float *)(param_1 + 0x800);
        *(undefined8 *)param_2 = uVar9;
        goto LAB_1004676a4;
      }
      fVar10 = *(float *)(lVar7 + 0x250) - *(float *)(param_1 + 0x7f8);
      fVar11 = *(float *)(lVar7 + 0x254) - *(float *)(param_1 + 0x7fc);
      fVar12 = *(float *)(lVar7 + 600) - *(float *)(param_1 + 0x800);
      fVar10 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
      if (0.01 <= fVar10) {
        fVar14 = *(float *)(param_1 + 0x7f8) - *(float *)(lVar7 + 0x250);
        fVar12 = *(float *)(param_1 + 0x7fc) - *(float *)(lVar7 + 0x254);
        fVar11 = *(float *)(param_1 + 0x800) - *(float *)(lVar7 + 600);
        goto LAB_1004677a4;
      }
    }
    bVar4 = 0.01 <= fVar10;
  }
  return bVar4;
}




void FUN_10046781c(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)FUN_1010a1cd4();
  fVar1 = *(float *)(param_1 + 0x804) - fVar1;
  *(float *)(param_1 + 0x804) = fVar1;
  if (fVar1 <= 0.0) {
    if ((*(byte *)(param_1 + 0x818) & 1) != 0) {
      FUN_100466f74(param_1);
    }
    uVar2 = 0x40a00000;
    if ((*(uint *)(*(long *)(param_1 + 0x10) + 0x2f4) & 0x20000001) != 0) {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x804) = uVar2;
  }
  return;
}




void FUN_100467884(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_40;
  float local_38;
  
  fVar4 = *(float *)(param_1 + 0x814);
  if (0.0 < fVar4) {
    uVar3 = FUN_1010a1cd4();
    fVar4 = (float)NEON_fminnm(fVar4,uVar3);
    lVar2 = *(long *)(param_1 + 0x10);
    local_40 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x250) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x808) >> 0x20) * fVar4,
                        (float)*(undefined8 *)(lVar2 + 0x250) +
                        (float)*(undefined8 *)(param_1 + 0x808) * fVar4);
    local_38 = *(float *)(lVar2 + 600) + fVar4 * *(float *)(param_1 + 0x810);
    FUN_1003d5db8(lVar2,&local_40);
    fVar4 = *(float *)(param_1 + 0x814) - fVar4;
    *(float *)(param_1 + 0x814) = fVar4;
    if ((fVar4 <= 0.0) &&
       (((uVar1 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar1 == 0x1f ||
         (1 < *(ushort *)(lVar2 + uVar1 * 0x38 + 0x90) - 3)) &&
        ((*(byte *)(param_1 + 0x818) & 1) != 0)))) {
      FUN_100467520(param_1);
    }
  }
  return;
}




void FUN_100467948(void)

{
  return;
}




void FUN_10046794c(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((~*(byte *)(param_1 + 0x818) & 6) == 0) {
    plVar3 = *(long **)(param_1 + 0x7e8);
    lVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x7f0) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        lVar4 = 0;
        *(undefined8 *)(param_1 + 0x7e8) = 0;
        *(undefined4 *)(param_1 + 0x7f0) = DAT_101dc0b88;
      }
    }
    if (param_2 == lVar4) {
      lVar4 = 0;
      if (param_3 != 0) {
        lVar4 = param_3 + 0x28;
      }
      puVar1 = &DAT_101dc0b88;
      if (param_3 != 0) {
        puVar1 = (undefined4 *)(lVar4 + 8);
      }
      uVar2 = *puVar1;
      *(long *)(param_1 + 0x7e8) = lVar4;
      *(undefined4 *)(param_1 + 0x7f0) = uVar2;
    }
  }
  return;
}




void FUN_1004679fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100467a10(long param_1)

{
  long lVar1;
  
  DAT_101867340 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867340 + 1;
  lVar1 = param_1 + (ulong)DAT_101867340 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049e300;
  *(code **)(lVar1 + 0xb8) = FUN_10049e314;
  *(uint *)(lVar1 + 0xa4) = DAT_101867340;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100467a7c,0);
  return;
}




void FUN_100467a7c(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  fVar3 = (float)FUN_1010a1cd4();
  fVar4 = *(float *)(param_1 + 0x30);
  fVar3 = (float)NEON_fminnm(*(float *)(param_1 + 0x34) + fVar3,fVar4);
  *(float *)(param_1 + 0x34) = fVar3;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
    lVar2 = 0;
  }
  if (fVar4 <= fVar3) {
    *(undefined4 *)(lVar2 + 0x2ec) = 0;
    uStack_68 = *(undefined8 *)(lVar2 + 0x228);
    local_70 = *(undefined8 *)(lVar2 + 0x220);
    uStack_58 = *(undefined8 *)(lVar2 + 0x238);
    uStack_60 = *(undefined8 *)(lVar2 + 0x230);
    uStack_48 = *(undefined8 *)(lVar2 + 0x248);
    local_50 = *(undefined8 *)(lVar2 + 0x240);
    uStack_38 = *(undefined8 *)(lVar2 + 600);
    uStack_40 = *(undefined8 *)(lVar2 + 0x250);
    plVar1 = *(long **)(lVar2 + 0x50);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x160))(plVar1,&local_70);
    }
    FUN_1010a01dc(param_1);
  }
  else {
    fVar4 = fVar4 * 0.5;
    if (fVar4 <= fVar3) {
      fVar5 = *(float *)(param_1 + 0x28);
      fVar6 = *(float *)(param_1 + 0x2c) - fVar5;
      fVar3 = (float)_cosf(((fVar3 - fVar4) * 1.5707964) / fVar4);
    }
    else {
      fVar5 = *(float *)(param_1 + 0x28);
      fVar6 = *(float *)(param_1 + 0x2c) - fVar5;
      fVar3 = (float)_sinf((fVar3 * 0.5 * 3.1415927) / fVar4);
    }
    fVar5 = fVar5 + fVar6 * fVar3;
    *(float *)(lVar2 + 0x2ec) = fVar5;
    uStack_68 = *(undefined8 *)(lVar2 + 0x228);
    local_70 = *(undefined8 *)(lVar2 + 0x220);
    uStack_58 = *(undefined8 *)(lVar2 + 0x238);
    uStack_60 = *(undefined8 *)(lVar2 + 0x230);
    uStack_48 = *(undefined8 *)(lVar2 + 0x248);
    local_50 = *(undefined8 *)(lVar2 + 0x240);
    uStack_38 = *(undefined8 *)(lVar2 + 600);
    uStack_40._4_4_ = (float)((ulong)*(undefined8 *)(lVar2 + 0x250) >> 0x20);
    uStack_40 = CONCAT44(uStack_40._4_4_ + fVar5,(int)*(undefined8 *)(lVar2 + 0x250));
    plVar1 = *(long **)(lVar2 + 0x50);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x160))(plVar1,&local_70);
    }
  }
  return;
}




void FUN_100467bc0(long param_1)

{
  long lVar1;
  
  DAT_101867370 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867370 + 1;
  lVar1 = param_1 + (ulong)DAT_101867370 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049e320;
  *(code **)(lVar1 + 0xb8) = FUN_10049e38c;
  *(uint *)(lVar1 + 0xa4) = DAT_101867370;
  *(undefined4 *)(lVar1 + 0xa8) = 0x70;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100467c60,0);
  FUN_1010a0990(param_1,0x1ab4042d,FUN_100467f6c,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100467c60(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  float local_80;
  float local_7c;
  float fStack_78;
  
  fVar10 = (float)FUN_1010a1cd4();
  fVar14 = *(float *)(param_1 + 0x4c);
  fVar10 = (float)NEON_fminnm(*(float *)(param_1 + 0x50) + fVar10,fVar14);
  *(float *)(param_1 + 0x50) = fVar10;
  lVar7 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != ram0x0001018672a0) {
    lVar7 = 0;
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dd68) {
    lVar7 = 0;
  }
  fVar16 = *(float *)(lVar7 + 0x250);
  fVar15 = *(float *)(lVar7 + 600);
  fVar17 = *(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254);
  local_80 = fVar16;
  local_7c = fVar17;
  fStack_78 = fVar15;
  if (fVar14 <= fVar10) {
    local_90 = *(ulong *)(param_1 + 0x40);
    local_88 = *(float *)(param_1 + 0x48);
    uVar5 = local_90 & 0xffffffff;
    goto LAB_100467de4;
  }
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        lVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
        uVar6 = DAT_101dc0b88;
        fVar11 = *(float *)(lVar4 + 600);
        fVar12 = *(float *)(lVar4 + 0x250) - *(float *)(param_1 + 0x40);
        fVar13 = fVar11 - *(float *)(param_1 + 0x48);
        if (25.0 < fVar12 * fVar12 + *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44) +
                   fVar13 * fVar13) {
          *(undefined8 *)(param_1 + 0x58) = 0;
          goto LAB_100467da8;
        }
        *(float *)(param_1 + 0x40) = *(float *)(lVar4 + 0x250);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(float *)(param_1 + 0x48) = fVar11;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar6 = DAT_101dc0b88;
LAB_100467da8:
      *(undefined4 *)(param_1 + 0x60) = uVar6;
    }
  }
  fVar11 = *(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x4c);
  fVar12 = 1.0 - fVar11;
  uVar5 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20) * fVar12 +
                   (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar11,
                   (float)*(undefined8 *)(param_1 + 0x34) * fVar12 +
                   (float)*(undefined8 *)(param_1 + 0x40) * fVar11);
  local_88 = *(float *)(param_1 + 0x3c) * fVar12 + fVar11 * *(float *)(param_1 + 0x48);
  local_90 = uVar5;
LAB_100467de4:
  if (((1.1920929e-07 <= ABS(fVar16 - (float)uVar5)) ||
      (1.1920929e-07 <= ABS(fVar17 - local_90._4_4_))) || (1.1920929e-07 <= ABS(fVar15 - local_88)))
  {
    uVar5 = FUN_1003a7e54(lVar7,1);
    if ((((uVar5 & 1) == 0) && ((*(byte *)(lVar7 + 0x2f6) >> 5 & 1) != 0)) &&
       (iVar2 = FUN_100462444(*(undefined1 *)(lVar7 + 0x264),&local_80,&local_90,local_a0),
       iVar2 != 0)) {
      local_88 = (float)local_98;
      local_90 = CONCAT44(*(undefined4 *)(param_1 + 0x44),local_a0[0]);
      FUN_1003d5db8(lVar7,&local_90);
      FUN_100463df8(param_1);
      uVar9 = 0xffff0000;
      lVar4 = lVar7;
LAB_100467e80:
      do {
        do {
          lVar8 = lVar4;
          if ((lVar8 != lVar7) &&
             (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar8 + 8),0x444d06f4), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar8);
          }
          if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar4 = *(long *)(lVar8 + 0x18), lVar4 != 0)) {
            uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
            goto LAB_100467e80;
          }
          if ((uVar9 & 0xffff) == 0) {
            return;
          }
          lVar4 = *(long *)(lVar8 + 0x20);
        } while (*(long *)(lVar8 + 0x20) != 0);
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        uVar1 = uVar9 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar9 = uVar1 | uVar9 & 0xffff0000;
        while (lVar4 = *(long *)(lVar8 + 0x20), lVar4 == 0) {
          if ((uVar9 - 1 & 0xffff) == 0) {
            return;
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
          if (lVar8 == 0) {
            return;
          }
        }
      } while( true );
    }
    FUN_1003d5db8(lVar7,&local_90);
  }
  if (fVar14 <= fVar10) {
    FUN_1010a01dc(param_1);
  }
  return;
}




void FUN_100467f6c(void)

{
  FUN_1004680a0();
  return;
}




/* WARNING: Type propagation algorithm not settling */

float FUN_100467f94(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  float local_64 [5];
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  float local_40 [4];
  
  local_48 = *(undefined4 *)(param_1 + 600);
  fStack_4c = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  local_50 = *(float *)(param_1 + 0x250);
  local_64[1] = 0.25;
  local_64[2] = 3.4028235e+38;
  local_64[3] = 0.25;
  uVar1 = FUN_10054e044(*param_2,&local_50,local_40,local_64 + 1);
  if ((uVar1 & 1) == 0) {
    local_64[0] = -1.0;
    if ((param_3 == (undefined8 *)0x0) ||
       (FUN_10054e09c(*param_2,param_3,&local_50,local_64,0,0), local_64[0] < 0.0)) {
      local_70 = 0x7f7fffff;
      uStack_6c = 0x7f7fffff;
      local_68 = 0x7f7fffff;
      FUN_10054e044(*param_2,&local_50,local_40,&local_70);
    }
    else {
      local_40[0] = (float)*param_3 * (1.0 - local_64[0]) + local_50 * local_64[0];
    }
  }
  return local_40[0];
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004680a0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != ram0x0001018672a0) {
      lVar3 = 0;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 != 0) && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dd68)) {
      uVar5 = 0xffff0000;
      lVar2 = lVar3;
LAB_100468104:
      do {
        do {
          lVar4 = lVar2;
          if ((lVar4 != lVar3) &&
             (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x444d06f4), lVar2 != 0)) {
            (**(code **)(lVar2 + 8))(lVar4);
          }
          if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar2 = *(long *)(lVar4 + 0x18), lVar2 != 0)) {
            uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
            goto LAB_100468104;
          }
          if ((uVar5 & 0xffff) == 0) goto LAB_1004681a0;
          lVar2 = *(long *)(lVar4 + 0x20);
        } while (*(long *)(lVar4 + 0x20) != 0);
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) break;
        uVar5 = uVar1 | uVar5 & 0xffff0000;
        while (lVar2 = *(long *)(lVar4 + 0x20), lVar2 == 0) {
          if ((uVar5 - 1 & 0xffff) == 0) goto LAB_1004681a0;
          lVar4 = *(long *)(lVar4 + 0x10);
          uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
          if (lVar4 == 0) goto LAB_1004681a0;
        }
      } while( true );
    }
  }
LAB_1004681a0:
  FUN_1010a01dc(param_1);
  return;
}




void FUN_1004681b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499c90;
  FUN_100463ec4();
  FUN_1010a0064(param_1);
  return;
}




void FUN_1004681e8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101499c90;
  FUN_100463ec4();
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10046821c(long param_1)

{
  long lVar1;
  
  DAT_101867350 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867350 + 1;
  lVar1 = param_1 + (ulong)DAT_101867350 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049e398;
  *(code **)(lVar1 + 0xb8) = FUN_10049e3c4;
  *(uint *)(lVar1 + 0xa4) = DAT_101867350;
  *(undefined4 *)(lVar1 + 0xa8) = 0x58;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100468288,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100468288(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_40;
  undefined4 local_3c;
  float fStack_38;
  
  fVar2 = (float)FUN_1010a1cd4();
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0) {
    lVar1 = 0;
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  FUN_1004683e4(param_1);
  fVar2 = *(float *)(param_1 + 0x50) + fVar2 * *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x50) = fVar2;
  fVar3 = 6.2831855;
  if (6.2831855 <= fVar2) {
    *(float *)(param_1 + 0x50) = fVar2 - 6.2831855;
  }
  fVar5 = *(float *)(param_1 + 0x40);
  fVar4 = *(float *)(param_1 + 0x44);
  fVar2 = (float)___sincosf_stret();
  local_40 = fVar4 + fVar5 * fVar3;
  local_3c = *(undefined4 *)(param_1 + 0x48);
  fStack_38 = *(float *)(param_1 + 0x4c) + fVar5 * fVar2;
  FUN_1003d5db8(lVar1,&local_40);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046835c(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_3 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0) {
    lVar1 = 0;
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  uVar2 = _atan2f(*(float *)(lVar1 + 600) - *(float *)(param_3 + 0x4c),
                  *(float *)(lVar1 + 0x250) - *(float *)(param_3 + 0x44));
  *(undefined4 *)(param_3 + 0x50) = uVar2;
  *(undefined4 *)(param_3 + 0x3c) = param_1;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  return;
}




void FUN_1004683e4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  int local_68 [2];
  undefined1 auStack_60 [48];
  undefined8 local_30;
  undefined4 local_28;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        local_68[0] = *(int *)(param_1 + 0x38);
        if (local_68[0] == 0) {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar2 + 0x250);
          fVar4 = *(float *)(lVar2 + 0x254);
          *(float *)(param_1 + 0x48) = fVar4;
          *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar2 + 600);
          *(float *)(param_1 + 0x48) = *(float *)(lVar2 + 0x2ec) + fVar4;
        }
        else {
          plVar1 = *(long **)(param_1 + 0x28);
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
              local_68[0] = *(int *)(param_1 + 0x38);
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
            }
          }
          FUN_1003ab468(uVar3,local_68,auStack_60);
          *(undefined8 *)(param_1 + 0x44) = local_30;
          *(undefined4 *)(param_1 + 0x4c) = local_28;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  return;
}




undefined8 * FUN_1004684ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_101499cc0;
  param_1[5] = 0;
  uVar2 = DAT_101dc0b88;
  lVar3 = 0x30;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x46) = 0;
  lVar3 = FUN_1010a0298(param_1,DAT_101867390);
  param_1[5] = lVar3;
  *(code **)(lVar3 + 0x1c8) = FUN_100468584;
  *(undefined8 **)(lVar3 + 0x1d0) = param_1;
  *(code **)(lVar3 + 0x1d8) = FUN_100468590;
  *(undefined8 **)(lVar3 + 0x1e0) = param_1;
  *(undefined4 *)(lVar3 + 0x1c4) = 1;
  return param_1;
}




void FUN_100468584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100468ac8(param_3,param_2,param_2);
  return;
}




void FUN_100468590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100468b30(param_3,param_2,param_2);
  return;
}




void FUN_10046859c(long param_1)

{
  long lVar1;
  
  DAT_1018673a0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_1018673a0 + 1;
  lVar1 = param_1 + (ulong)DAT_1018673a0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1004684ec;
  *(code **)(lVar1 + 0xb8) = FUN_10049e3d4;
  *(uint *)(lVar1 + 0xa4) = DAT_1018673a0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x238;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  if (DAT_101d23a38 != '\0') {
    FUN_1010a0944(param_1,3,FUN_100468650,0);
    FUN_1010a0944(param_1,4,FUN_100468704,0);
    return;
  }
  return;
}




void FUN_100468650(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    plVar1 = (long *)(param_1 + 0x30 + lVar4 * 0x10);
    plVar2 = (long *)*plVar1;
    if (plVar2 != (long *)0x0) {
      if ((int)plVar1[1] == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
          if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dda8) {
            *(long *)(lVar3 + 0x60) = param_1;
            break;
          }
        }
      }
      else {
        *plVar1 = 0;
        *(int *)(plVar1 + 1) = DAT_101dc0b88;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x20) {
      return;
    }
  } while( true );
}




void FUN_100468a28(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_228 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  plVar3 = *(long **)(param_2 + 8);
  puVar2 = (undefined8 *)*plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      local_228[uVar1 & 0xffffffff] = *puVar2;
      puVar2 = (undefined8 *)plVar3[uVar1 + 1];
      uVar1 = uVar1 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  FUN_100471190(0xff7fffff,*(long *)(param_1 + 0x28) + 0x28,local_228,uVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100468ac8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    if (*(long *)(lVar1 + 0x30) == 0) {
LAB_100468b10:
      *(long *)(lVar1 + 0x30) = param_3 + 0x28;
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_3 + 0x30);
      *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
      return;
    }
    if (*(int *)(lVar1 + 0x38) != *(int *)(*(long *)(lVar1 + 0x30) + 8)) {
      *(undefined8 *)(param_1 + lVar2 + 0x30) = 0;
      *(undefined4 *)(param_1 + lVar2 + 0x38) = DAT_101dc0b88;
      goto LAB_100468b10;
    }
    lVar2 = lVar2 + 0x10;
    if (lVar2 == 0x200) {
      return;
    }
  } while( true );
}




void FUN_100468b30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x230) == 0) {
        return;
      }
      lVar1 = param_1 + lVar5;
      plVar3 = *(long **)(lVar1 + 0x30);
      if (plVar3 != (long *)0x0) {
        if (*(int *)(lVar1 + 0x38) == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          uVar2 = DAT_101dc0b88;
          if (lVar4 == param_3) {
            *(undefined8 *)(lVar1 + 0x30) = 0;
            *(undefined4 *)(lVar1 + 0x38) = uVar2;
            *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + -1;
          }
        }
        else {
          *(undefined8 *)(lVar1 + 0x30) = 0;
          *(undefined4 *)(lVar1 + 0x38) = DAT_101dc0b88;
        }
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x200);
  }
  return;
}




void FUN_100468bdc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  *param_1 = 0;
  plVar1 = (long *)param_1[1];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[1] = 0;
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[2] = 0;
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[3] = 0;
  plVar1 = (long *)param_1[4];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[4] = 0;
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[5] = 0;
  plVar1 = (long *)param_1[6];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[6] = 0;
  return;
}




undefined8 * FUN_100468d88(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_100468ed8_101499cf0;
  param_1[5] = &PTR_FUN_101499d20;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0x2d] = &PTR_FUN_10149da18;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0xbf8000003f800000;
  param_1[0x66] = FUN_100468ebc;
  param_1[0x67] = 0;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfff00000;
  *(ulong *)((long)param_1 + 0x344) = (ulong)*(ushort *)((long)param_1 + 0x34a) << 0x30 | 0x10000;
  *(uint *)((long)param_1 + 0x34c) = *(uint *)((long)param_1 + 0x34c) & 0xf0000000 | 0x8000000;
  return param_1;
}




float FUN_100468ebc(long param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if ((*(byte *)(param_1 + 0x340) >> 4 & 1) == 0) {
    fVar1 = *(float *)(param_1 + 0x318) / *(float *)(param_1 + 0x31c);
  }
  return fVar1;
}




void FUN_100468ed8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_100468ed8_101499cf0;
  param_1[5] = &PTR_FUN_101499d20;
  FUN_100468bdc(param_1 + 0xd);
  lVar1 = param_1[10] + -8;
  if (param_1[10] != 0 && lVar1 != 0) {
    do {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_100458b90();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    } while (lVar1 != 0);
  }
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_100468ed8(void)

{
  FUN_100468ed8();
  return;
}




void FUN_100468f58(long param_1)

{
  FUN_100468ed8(param_1 + -0x28);
  return;
}




void FUN_100468f60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100468ed8();
  operator_delete(pvVar1);
  return;
}




void FUN_100468f74(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100468ed8(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100468f8c(long param_1)

{
  long lVar1;
  
  DAT_1018672e0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_1018672e0 + 1;
  lVar1 = param_1 + (ulong)DAT_1018672e0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100468d88;
  *(code **)(lVar1 + 0xb8) = FUN_10049e4a0;
  *(uint *)(lVar1 + 0xa4) = DAT_1018672e0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x360;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 800;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_100469048,0);
  FUN_1010a0990(param_1,0x457106fa,FUN_1004691c0,0);
  FUN_1010a0990(param_1,0x366b0603,FUN_1004691ec,0);
  return;
}




void FUN_100469048(long param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x310) == 2) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x340);
  if (((uVar2 >> 9 & 1) != 0) &&
     ((*(uint *)(param_1 + 0x344) & 0xffff) < *(uint *)(param_1 + 0x344) >> 0x10 &&
      (uVar2 & 0x10) != 0)) {
    uVar2 = uVar2 & 0xffffffef;
    *(uint *)(param_1 + 0x340) = uVar2;
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
  }
  if ((uVar2 >> 4 & 1) == 0) {
    if (((uVar2 >> 0xc & 1) == 0) ||
       ((*(code **)(param_1 + 0x338) != (code *)0x0 &&
        (iVar1 = (**(code **)(param_1 + 0x338))(param_1), iVar1 != 0)))) {
      fVar3 = (float)FUN_1010a1cd4();
      *(float *)(param_1 + 0x318) = *(float *)(param_1 + 0x318) - fVar3;
    }
    if (*(float *)(param_1 + 0x318) <= 0.0) {
      if (DAT_101d23a38 == '\0') {
        if ((*(uint *)(param_1 + 0x340) >> 7 & 1) != 0) goto LAB_10046912c;
      }
      else if ((*(uint *)(param_1 + 0x340) >> 7 & 1) != 0) {
        local_2c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
        uStack_28 = *(undefined4 *)(param_1 + 0x30c);
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_48 = &PTR_FUN_101497950;
        FUN_1004985f8(&local_48,&DAT_101e47d30);
        goto LAB_10046912c;
      }
      FUN_10046921c(param_1);
    }
  }
LAB_10046912c:
  if (*(int *)(param_1 + 0x310) == 0) {
    fVar3 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 800) = *(float *)(param_1 + 800) - fVar3;
    fVar3 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) + fVar3;
    if (*(float *)(param_1 + 800) <= 0.0) {
      FUN_100469774(param_1,*(undefined8 *)(param_1 + 0x90));
      FUN_100469810(param_1,PTR_s_onBuffIntervalName_10185d558);
      *(float *)(param_1 + 800) = *(float *)(param_1 + 800) + *(float *)(param_1 + 0x328);
      *(undefined4 *)(param_1 + 0x324) = 0;
    }
    uVar2 = *(uint *)(param_1 + 0x340);
    if ((uVar2 >> 5 & 1) != 0) {
      FUN_100469348(param_1);
      uVar2 = *(uint *)(param_1 + 0x340);
    }
    if ((uVar2 >> 6 & 1) != 0) {
      FUN_1004693b4(param_1);
    }
  }
  return;
}




void FUN_1004691c0(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10046aa2c(param_1,in_stack_00000000);
  return;
}




void FUN_1004691ec(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10046aa94(param_1,in_stack_00000000);
  return;
}




void FUN_100469218(void)

{
  return;
}




void FUN_10046921c(long param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x310) - 1U < 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  if ((*(byte *)(param_1 + 0x341) & 1) != 0) {
    FUN_100469774(param_1,*(undefined8 *)(param_1 + 0x90));
    FUN_100469810(param_1,PTR_s_onBuffIntervalName_10185d558);
  }
  FUN_100469590(param_1);
  if (0.0 < *(float *)(param_1 + 0x318)) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x340);
  if ((uVar1 >> 10 & 1) == 0) {
    if ((uVar1 >> 0xb & 1) == 0) {
      if ((uVar1 >> 9 & 1) == 0) {
        FUN_100469420(param_1);
        *(undefined4 *)(param_1 + 0x310) = 2;
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x344);
      uVar1 = uVar2 & 0xffff;
      if (uVar1 < uVar2 >> 0x10) {
        FUN_1004698c8(param_1,uVar1 + 1,1);
        uVar2 = *(uint *)(param_1 + 0x344);
        uVar1 = uVar2 & 0xffff;
      }
      if (uVar1 < uVar2 >> 0x10) goto LAB_1004692cc;
    }
    else {
      FUN_100469600(param_1,0,1);
      if (*(int *)(param_1 + 0x310) == 2) {
        return;
      }
    }
    *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x10;
  }
  else {
    fVar3 = (float)(int)(*(ushort *)(param_1 + 0x344) - 1);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    FUN_100469600(param_1,(int)fVar3,1);
    if (*(int *)(param_1 + 0x310) == 2) {
      return;
    }
LAB_1004692cc:
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
  }
  return;
}




void FUN_100469348(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dda8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar2 = 0;
  do {
    lVar3 = lVar1 + 0x28 + ((ulong)~*(uint *)(lVar1 + 0x5c) & 1) * 0x19;
    *(byte *)(lVar3 + lVar2) = *(byte *)(lVar3 + lVar2) | 4;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  return;
}




void FUN_1004693b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dda8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar2 = 0;
  do {
    lVar3 = lVar1 + 0x28 + ((ulong)~*(uint *)(lVar1 + 0x5c) & 1) * 0x19;
    *(byte *)(lVar3 + lVar2) = *(byte *)(lVar3 + lVar2) | 8;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  return;
}




void FUN_100469420(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  FUN_1004698c8(param_1,0,1);
  plVar3 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar3 != (long *)0x0) {
    do {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    } while (plVar3 != (long *)0x0);
  }
  FUN_100469774(param_1,*(undefined8 *)(param_1 + 0x80));
  FUN_100469810(param_1,PTR_s_onEndName_10185d548);
  if ((*(byte *)(param_1 + 0x340) & 0xf) != 0) {
    uVar2 = 0;
    do {
      FUN_1003c58cc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)(param_1 + 0x340) & 0xf));
    *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xfffffff0;
  }
  return;
}




void FUN_1004694d8(long param_1)

{
  if (1 < *(int *)(param_1 + 0x310) - 1U) {
    FUN_100469520();
    *(undefined4 *)(param_1 + 0x310) = 1;
    FUN_100469420(param_1);
    *(undefined4 *)(param_1 + 0x310) = 2;
  }
  return;
}




void FUN_100469520(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  FUN_100469774(param_1,*(undefined8 *)(param_1 + 0x78));
  FUN_100469810(param_1,PTR_s_onCancelName_10185d708);
  return;
}




void FUN_100469590(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  FUN_100469774(param_1,*(undefined8 *)(param_1 + 0x88));
  FUN_100469810(param_1,PTR_s_onTimeoutName_10185d538);
  return;
}




void FUN_100469600(long param_1,int param_2)

{
  FUN_1004698c8();
  if ((param_2 == 0) && (*(char *)(*(long *)(param_1 + 0x40) + 0x2e) != '\0')) {
    FUN_100469420(param_1);
    *(undefined4 *)(param_1 + 0x310) = 2;
  }
  return;
}




void FUN_100469644(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar3 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar3 != (long *)0x0) {
    do {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    } while (plVar3 != (long *)0x0);
  }
  FUN_100469774(param_1,*(undefined8 *)(param_1 + 0x68));
  FUN_100469810(param_1,PTR_s_onApplyName_10185d540);
  FUN_1004698c8(param_1,*(undefined2 *)(param_1 + 0x348),1);
  plVar1 = (long *)(DAT_101e94198 + 0x10);
  plVar2 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar2 != (long *)0x0) {
    do {
      if (*(uint *)(plVar2 + 4) >= 0x97bcfebd) {
        plVar3 = plVar2;
      }
      plVar2 = (long *)plVar2[*(uint *)(plVar2 + 4) < 0x97bcfebd];
    } while (plVar2 != (long *)0x0);
    if (((plVar3 != plVar1) && (*(uint *)(plVar3 + 4) < 0x97bcfebe)) && ((int)plVar3[5] != 0)) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar3[6] + lVar4))[1])(*(undefined8 *)(plVar3[6] + lVar4));
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar5 < *(uint *)(plVar3 + 5));
    }
  }
  return;
}




void FUN_100469774(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  
  if (param_2 != (long *)0x0) {
    *(long **)(param_1 + 0x48) = param_2;
    do {
      bVar1 = (**(code **)(*param_2 + 0x18))(param_2);
      plVar3 = *(long **)(param_1 + 0x48);
      FUN_1010a1cd4();
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
      iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      param_2 = *(long **)(param_1 + 0x48);
      if (iVar2 != 0) {
        param_2 = (long *)(**(code **)(*param_2 + 0x28))(param_2);
        *(long **)(param_1 + 0x48) = param_2;
      }
    } while ((param_2 != (long *)0x0 & bVar1) != 0);
  }
  return;
}




void FUN_100469810(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  int local_44;
  
  iVar2 = FUN_100469e08(param_1 + 0xa0,param_2,&local_44);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar4 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar4 = param_1;
    uVar5 = *(uint *)(param_1 + 0x160);
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar6 * 4) == local_44) {
          (**(code **)(param_1 + 0xa0 + uVar6 * 8 + 0x40))(lVar1);
          uVar5 = *(uint *)(param_1 + 0x160);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  return;
}




void FUN_1004698c8(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(uint *)(param_1 + 0x344);
  uVar2 = uVar1 >> 0x10;
  fVar5 = (float)param_2;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar4 = (float)uVar2;
  if (param_2 <= uVar2) {
    fVar4 = fVar5;
  }
  *(short *)(param_1 + 0x344) = (short)(int)fVar4;
  if (param_3 != 0) {
    iVar3 = ((int)fVar4 & 0xffffU) - (uVar1 & 0xffff);
    if (iVar3 != 0) {
      FUN_100469d4c(param_1,iVar3);
      return;
    }
  }
  return;
}




void FUN_10046990c(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar1 = (ulong *)(param_4 + 0x344);
  uVar2 = (uint)*(ushort *)(param_4 + 0x346);
  if (param_6 <= *(ushort *)(param_4 + 0x346)) {
    uVar2 = param_6;
  }
  *(short *)(param_4 + 0x348) = (short)uVar2;
  *(undefined4 *)(param_4 + 0x32c) = param_1;
  FUN_100469b1c(param_2,param_3,param_4,param_7,param_8);
  *(uint *)(param_4 + 0x34c) = *(uint *)(param_4 + 0x34c) | 0x8000000;
  FUN_100469c60(param_4,PTR_s_onBeforeReApplyName_10185d588,param_5);
  if ((*(byte *)(param_4 + 0x34f) >> 3 & 1) != 0) {
    local_80 = (undefined4)param_2;
    uStack_7c = (undefined4)param_3;
    local_78 = (undefined4)param_7;
    uStack_74 = (undefined4)param_8;
    local_88 = param_1;
    local_84 = param_6;
    if (*(long *)(param_4 + 0x50) != 0) {
      plVar5 = (long *)(*(long *)(param_4 + 0x50) + -8);
      while (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_4,&local_88);
        plVar3 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar3 != 0) {
          plVar5 = (long *)(*plVar3 + -8);
        }
      }
    }
    FUN_100469774(param_4,*(undefined8 *)(param_4 + 0x70));
    FUN_1004698c8(param_4,(uint)*(ushort *)(param_4 + 0x348) + (uint)*(ushort *)puVar1,1);
    FUN_100469c60(param_4,PTR_s_onAfterReApplyName_10185d690,param_5);
  }
  *puVar1 = *puVar1 & 0xffff0000ffffffff;
  *(undefined4 *)(param_4 + 0x32c) = 0xbf800000;
  FUN_100469b1c(0,0,param_4,0,0);
  *(uint *)(param_4 + 0x34c) = *(uint *)(param_4 + 0x34c) & 0xf7ffffff;
  plVar3 = (long *)(DAT_101e94198 + 0x10);
  plVar4 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= 0x97bcfebd) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0x97bcfebd];
    } while (plVar4 != (long *)0x0);
    if (((plVar5 != plVar3) && (*(uint *)(plVar5 + 4) < 0x97bcfebe)) && ((int)plVar5[5] != 0)) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        (*(code *)((undefined8 *)(plVar5[6] + lVar6))[1])(*(undefined8 *)(plVar5[6] + lVar6));
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < *(uint *)(plVar5 + 5));
    }
  }
  return;
}




void FUN_100469b1c(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_44 [4];
  
  uVar2 = FUN_100469e08(param_3 + 0xa0,PTR_s_onBeforeReApplyName_10185d588,auStack_44);
  if ((((uVar2 & 1) != 0) ||
      (uVar2 = FUN_100469e08(param_3 + 0xa0,PTR_s_onAfterReApplyName_10185d690,auStack_44),
      (uVar2 & 1) != 0)) || (*(long *)(param_3 + 0x70) != 0)) {
    lVar1 = param_3 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR1_FLOAT___10185d808);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR2_FLOAT___10185d810);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_2;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR1_INT___10185d818);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                      (lVar1,PTR_s___REAPPLYING_VAR2_INT___10185d820);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_5;
  }
  return;
}




void FUN_100469c60(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  int local_44;
  
  iVar2 = FUN_100469e08(param_1 + 0xa0,param_2,&local_44);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar4 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar4 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___BESTOWER___10185d778);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_3;
    uVar6 = *(uint *)(param_1 + 0x160);
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar7 * 4) == local_44) {
          (**(code **)(param_1 + 0xa0 + uVar7 * 8 + 0x40))(lVar1);
          uVar6 = *(uint *)(param_1 + 0x160);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  return;
}




void FUN_100469d4c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xf8000000 | (uint)param_2 & 0x7ffffff;
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  FUN_100469774(param_1,*(undefined8 *)(param_1 + 0x98));
  FUN_100469810(param_1,PTR_s_onStacksChangedName_10185d768);
  *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xf8000000;
  return;
}




void FUN_100469de8(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x346) = param_2;
  if (param_2 < *(ushort *)(param_1 + 0x344)) {
    FUN_100469600(param_1,param_2,1);
    return;
  }
  return;
}




bool FUN_100469e08(int *param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar4 = FUN_1004d2524(param_2);
  iVar5 = FUN_100015208(param_2,uVar4,0x12345678);
  *param_3 = iVar5;
  uVar1 = param_1[0x30];
  if (uVar1 == 0) {
    bVar3 = false;
  }
  else if (*param_1 == iVar5) {
    bVar3 = true;
  }
  else {
    uVar2 = 1;
    do {
      uVar6 = uVar2;
      if (uVar1 == uVar6) break;
      uVar2 = uVar6 + 1;
    } while (param_1[uVar6] != iVar5);
    bVar3 = uVar6 < uVar1;
  }
  return bVar3;
}




void FUN_100469ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x48))(plVar2,param_1,param_3,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100469f10(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100469f78(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100469fd0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x88))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a038(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x90))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a0a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x68))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a0f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_1,param_2,param_3,param_4);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a178(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a1e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x80))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a248(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a2a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0xb0))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a308(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0xb8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046a360(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  int local_44;
  
  iVar2 = FUN_100469e08(param_1 + 0xa0,param_2,&local_44);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar4 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar4 = param_1;
    uVar5 = *(uint *)(param_1 + 0x160);
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar6 * 4) == local_44) {
          (**(code **)(param_1 + 0xa0 + uVar6 * 8 + 0x40))(lVar1);
          uVar5 = *(uint *)(param_1 + 0x160);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
  }
  return;
}




void FUN_10046a418(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulong uVar7;
  int local_44;
  
  iVar2 = FUN_100469e08(param_1 + 0xa0,param_2,&local_44);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar4 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar4 = param_1;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (lVar1,PTR_s___ABILITY_BEHAVIOR_NAME_HASH___10185d7c0);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_3;
    uVar6 = *(uint *)(param_1 + 0x160);
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar7 * 4) == local_44) {
          (**(code **)(param_1 + 0xa0 + uVar7 * 8 + 0x40))(lVar1);
          uVar6 = *(uint *)(param_1 + 0x160);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  return;
}




void FUN_10046a504(float param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  int local_54;
  
  iVar2 = FUN_100469e08(param_2 + 0xa0,param_3,&local_54);
  if (iVar2 != 0) {
    lVar1 = param_2 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar4 = (long *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar4 = param_2;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                      (lVar1,PTR_s___ABILITY_BEHAVIOR_NAME_HASH___10185d7c0);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                      (lVar1,PTR_s___PRE_ABILITY_TRIGGERED_INT_DATA_10185d7c8);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_5;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                      (lVar1,PTR_s___PRE_ABILITY_TRIGGERED_FLOAT_DA_10185d7d0);
    piVar6 = (int *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *piVar6 = (int)param_1;
    uVar7 = *(uint *)(param_2 + 0x160);
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(param_2 + 0xa0 + uVar8 * 4) == local_54) {
          (**(code **)(param_2 + 0xa0 + uVar8 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_2 + 0x160);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  return;
}




void FUN_10046a664(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  int local_44;
  
  iVar2 = FUN_100469e08(param_1 + 0xa0,param_2,&local_44);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___BUFF_DATA___10185d7b0);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_5;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___BESTOWER___10185d778);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___DURATION___10185d7b8);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar6 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar6 = param_1;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar8 * 4) == local_44) {
          (**(code **)(param_1 + 0xa0 + uVar8 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  return;
}




void FUN_10046a7b8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  int local_44;
  
  iVar2 = FUN_100469e08(param_1 + 0xa0,param_2,&local_44);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___ATTR___10185d788);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___ATTR_PART___10185d790);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___ATTR_VALUE___10185d798);
    puVar5 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_5;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar6 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar6 = param_1;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar8 * 4) == local_44) {
          (**(code **)(param_1 + 0xa0 + uVar8 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  return;
}




void FUN_10046a90c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  int local_44;
  
  iVar2 = FUN_100469e08(param_1 + 0xa0,param_2,&local_44);
  if (iVar2 != 0) {
    lVar1 = param_1 + 0x168;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___RSRC___10185d7a0);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = param_3;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___RSRC_VALUE___10185d7a8);
    puVar5 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar5 = param_4;
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar1,PTR_s___PARENT___10185d770);
    plVar6 = (long *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar3);
    *plVar6 = param_1;
    uVar7 = *(uint *)(param_1 + 0x160);
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + uVar8 * 4) == local_44) {
          (**(code **)(param_1 + 0xa0 + uVar8 * 8 + 0x40))(lVar1);
          uVar7 = *(uint *)(param_1 + 0x160);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  return;
}




void FUN_10046aa2c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_1,param_2 + 0x50);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10046aa94(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0xa0))(plVar2,param_1,param_2 + 0x50);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




undefined8 FUN_10046aafc(long param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar2 = 0x811c9dc5;
  pcVar5 = (char *)*param_2;
  cVar1 = *pcVar5;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
    cVar1 = *pcVar5;
  }
  if ((((uVar2 == *(uint *)(param_1 + 0x40)) ||
       ((*(char *)((long)param_2 + 0x29) != '\0' && ((*(byte *)(param_1 + 0x46) & 1) != 0)))) ||
      ((*(char *)((long)param_2 + 0x26) != '\0' && ((*(byte *)(param_1 + 0x46) >> 1 & 1) != 0)))) ||
     ((((*(char *)((long)param_2 + 0x22) != '\0' && ((*(byte *)(param_1 + 0x46) >> 3 & 1) != 0)) ||
       ((*(char *)((long)param_2 + 0x2b) != '\0' && ((*(byte *)(param_1 + 0x46) >> 4 & 1) != 0))))
      || ((iVar3 = FUN_10046abb8(param_2), iVar3 != 0 && ((*(byte *)(param_1 + 0x46) >> 2 & 1) != 0)
          ))))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}




bool FUN_10046abb8(undefined8 *param_1)

{
  bool bVar1;
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  int local_30 [2];
  int local_28 [2];
  
  FUN_1003a4e5c(local_28,*param_1);
  bVar1 = true;
  if (((((((local_28[0] != DAT_101d3e6d4) && (local_28[0] != DAT_101d3e6e0)) &&
         (local_28[0] != DAT_101d3e6e4)) &&
        ((local_28[0] != DAT_101d3e704 && (local_28[0] != DAT_101d3e590)))) &&
       ((local_28[0] != DAT_101d3e8a8 &&
        ((local_28[0] != DAT_101d3e788 && (local_28[0] != DAT_101d3ed90)))))) &&
      (local_28[0] != DAT_101d3ec60)) &&
     (((local_28[0] != DAT_101d3ecf8 && (local_28[0] != DAT_101d3e7c8)) &&
      (local_28[0] != DAT_101d3eb8c)))) {
    FUN_1003a4e5c(local_30,PTR_s_Buff_Ylva_C_Trap_Root_10185b340);
    if (((local_28[0] == local_30[0]) ||
        (FUN_1003a4e5c(local_38,PTR_s_Buff_Leo_C_ShovedHero_10185b698), local_28[0] == local_38[0]))
       || ((FUN_1003a4e5c(local_40,PTR_s_Buff_Leo_B_Root_10185b680), local_28[0] == local_40[0] ||
           (FUN_1003a4e5c(local_48,PTR_s_Buff_Viola_Sleep_10185d408), local_28[0] == local_48[0]))))
    {
      bVar1 = true;
    }
    else {
      FUN_1003a4e5c(local_50,PTR_s_Buff_Shin_B_Root_10185d4b0);
      bVar1 = true;
      if ((local_28[0] != local_50[0]) && (local_28[0] != DAT_101d90974)) {
        bVar1 = *(char *)((long)param_1 + 0x2b) != '\0';
      }
    }
  }
  return bVar1;
}




void FUN_10046ad64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499db0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_1010a0064();
  return;
}




void FUN_10046ad7c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101499db0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10046ada4(long param_1)

{
  long lVar1;
  
  DAT_10184daa8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184daa8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184daa8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049e514;
  *(code **)(lVar1 + 0xb8) = FUN_10049e52c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184daa8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10046ae10,0);
  return;
}




void FUN_10046ae10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while (lVar1 = lVar2, lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x350);
    if (*(int *)(lVar1 + 0x310) == 2) {
      FUN_10046ae68((long *)(param_1 + 0x28),lVar1);
      FUN_1010a01dc(lVar1);
    }
  }
  return;
}




void FUN_10046ae68(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x350);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x358);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x350) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x358);
    *(undefined8 *)(lVar1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
    *(long *)(*(long *)(param_2 + 0x350) + 0x358) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




undefined4 FUN_10046aecc(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(undefined4 *)(*(long *)(lVar2 + 0x40) + 0x30);
}




undefined8 FUN_10046aef0(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x18);
}




undefined1 FUN_10046af14(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(undefined1 *)(*(long *)(lVar2 + 0x40) + 0x2f);
}




byte FUN_10046af38(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(byte *)(lVar2 + 0x341) >> 5 & 1;
}




undefined8 FUN_10046af5c(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x28);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x350);
  } while (*(int *)(lVar1 + 0x30c) != param_2);
  if (((*(char *)(*(long *)(lVar1 + 0x40) + 0x20) != '\0') &&
      ((param_3 == 0 || (*(char *)(*(long *)(lVar1 + 0x40) + 0x21) != '\0')))) &&
     (((*(uint *)(lVar1 + 0x340) & 0x2800) != 0x800 || (*(short *)(lVar1 + 0x344) != 0)))) {
    return 1;
  }
  return 0;
}




void FUN_10046afb8(long param_1,int param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); (lVar1 != 0 && (*(int *)(lVar1 + 0x30c) != param_2));
      lVar1 = *(long *)(lVar1 + 0x350)) {
  }
  FUN_100432da4();
  return;
}




void FUN_10046afd8(long param_1,int param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); (lVar1 != 0 && (*(int *)(lVar1 + 0x30c) != param_2));
      lVar1 = *(long *)(lVar1 + 0x350)) {
  }
  FUN_100432e08();
  return;
}




void FUN_10046aff8(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x28);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x350);
  } while (*(int *)(lVar1 + 0x30c) != param_2);
                    /* WARNING: Could not recover jumptable at 0x00010046b014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x330))();
  return;
}




void FUN_10046b018(long param_1)

{
  long lVar1;
  
  DAT_1018672b0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_1018672b0 + 1;
  lVar1 = param_1 + (ulong)DAT_1018672b0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049e538;
  *(code **)(lVar1 + 0xb8) = FUN_10049e594;
  *(uint *)(lVar1 + 0xa4) = DAT_1018672b0;
  *(undefined4 *)(lVar1 + 0xa8) = 0xf0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x22ef04a2,FUN_10046b088,0);
  return;
}




void FUN_10046b088(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10046b0bc((float)*(double *)((ulong)&stack0x00000000 | 8),param_1,in_stack_00000000);
  return;
}




void FUN_10046b0bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return;
  }
  FUN_1003461dc(param_3);
  lVar1 = FUN_100345d90();
  lVar2 = param_3;
  if (((*(byte *)(param_3 + 0x2f4) & 1) == 0) &&
     ((lVar1 == 0 || (lVar2 = lVar1, (*(byte *)(lVar1 + 0x2f4) & 1) == 0)))) {
    FUN_10046b1b8(param_1,param_2,param_3);
    return;
  }
  FUN_10046b150(param_1,param_2,lVar2);
  return;
}




void FUN_10046b150(int param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = 0;
  piVar2 = (int *)(param_2 + 0x28);
  do {
    if (*piVar2 == -1 || *piVar2 == *(int *)(param_3 + 0x260)) {
      *piVar2 = *(int *)(param_3 + 0x260);
      piVar2[1] = param_1;
      iVar3 = FUN_100032228();
      piVar2[2] = iVar3;
      *(int *)(param_2 + 0xe8) = (int)lVar1;
      return;
    }
    lVar1 = lVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (lVar1 != 6);
  return;
}




void FUN_10046b1b8(undefined4 param_1,long param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar3 = 0;
  fVar9 = 3.4028235e+38;
  uVar4 = 0xffffffff;
  pfVar6 = (float *)(param_2 + 0x78);
  do {
    uVar5 = uVar3;
    if (pfVar6[-2] == -NAN) {
      fVar7 = *(float *)(param_3 + 0x260);
      break;
    }
    fVar7 = *(float *)(param_3 + 0x260);
    if (pfVar6[-2] == fVar7) break;
    bVar1 = fVar9 <= *pfVar6;
    fVar9 = (float)NEON_fminnm(*pfVar6,fVar9);
    uVar2 = (uint)uVar3;
    if (bVar1) {
      uVar2 = (uint)uVar4;
    }
    uVar4 = (ulong)uVar2;
    uVar3 = uVar3 + 1;
    uVar5 = uVar4;
    pfVar6 = pfVar6 + 3;
  } while (uVar3 != 10);
  param_2 = param_2 + (long)(int)uVar5 * 0xc;
  *(float *)(param_2 + 0x70) = fVar7;
  *(undefined4 *)(param_2 + 0x74) = param_1;
  uVar8 = FUN_100032228();
  *(undefined4 *)(param_2 + 0x78) = uVar8;
  return;
}




void FUN_10046b240(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = (uint *)(param_1 + 0x13fb0);
  FUN_10045e54c();
  DAT_10184dab8 = *puVar1;
  *puVar1 = DAT_10184dab8 + 1;
  lVar3 = param_1 + (ulong)DAT_10184dab8 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049deac;
  *(code **)(lVar3 + 0xb8) = FUN_10049df04;
  *(uint *)(lVar3 + 0xa4) = DAT_10184dab8;
  *(undefined4 *)(lVar3 + 0xa8) = 0x1a0;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_100462238(param_1);
  DAT_101867330 = *puVar1;
  DAT_101867320 = DAT_101867330 + 1;
  lVar3 = param_1 + (ulong)DAT_101867330 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049e188;
  *(code **)(lVar3 + 0xb8) = FUN_10049e1dc;
  *(uint *)(lVar3 + 0xa4) = DAT_101867330;
  *(undefined4 *)(lVar3 + 0xa8) = 0x350;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 200;
  *puVar1 = DAT_101867330 + 2;
  lVar3 = param_1 + (ulong)DAT_101867320 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049e100;
  *(code **)(lVar3 + 0xb8) = FUN_10049e17c;
  *(uint *)(lVar3 + 0xa4) = DAT_101867320;
  *(undefined4 *)(lVar3 + 0xa8) = 0xc0;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 800;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_100467a10(param_1);
  FUN_100466e5c(param_1);
  FUN_100467bc0(param_1);
  FUN_10046821c(param_1);
  FUN_10046859c(param_1);
  FUN_100468f8c(param_1);
  DAT_1018673b0 = *puVar1;
  *puVar1 = DAT_1018673b0 + 1;
  lVar3 = param_1 + (ulong)DAT_1018673b0 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049e4ac;
  *(code **)(lVar3 + 0xb8) = FUN_10049e508;
  *(uint *)(lVar3 + 0xa4) = DAT_1018673b0;
  *(undefined4 *)(lVar3 + 0xa8) = 0x48;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046ada4(param_1);
  FUN_10046b018(param_1);
  DAT_10184daf8 = *puVar1;
  DAT_101867360 = DAT_10184daf8 + 1;
  lVar3 = param_1 + (ulong)DAT_10184daf8 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = thunk_FUN_10046c1a8;
  *(code **)(lVar3 + 0xb8) = FUN_10049e5a4;
  *(uint *)(lVar3 + 0xa4) = DAT_10184daf8;
  *(undefined4 *)(lVar3 + 0xa8) = 0x70;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x4b0;
  *puVar1 = DAT_10184daf8 + 2;
  lVar3 = param_1 + (ulong)DAT_101867360 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049e1e8;
  *(code **)(lVar3 + 0xb8) = FUN_10049e234;
  *(uint *)(lVar3 + 0xa4) = DAT_101867360;
  *(undefined4 *)(lVar3 + 0xa8) = 0x38;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046b7b0(param_1);
  DAT_10184e3d0 = *puVar1;
  DAT_101867300 = DAT_10184e3d0 + 1;
  lVar3 = param_1 + (ulong)DAT_10184e3d0 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049e5e0;
  *(code **)(lVar3 + 0xb8) = FUN_10049e64c;
  *(uint *)(lVar3 + 0xa4) = DAT_10184e3d0;
  *(undefined4 *)(lVar3 + 0xa8) = 0x78;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x46;
  *puVar1 = DAT_10184e3d0 + 2;
  lVar3 = param_1 + (ulong)DAT_101867300 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049e658;
  *(code **)(lVar3 + 0xb8) = FUN_10049e6a8;
  *(uint *)(lVar3 + 0xa4) = DAT_101867300;
  *(undefined4 *)(lVar3 + 0xa8) = 0x78;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 400;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046b82c(param_1);
  FUN_10046b8f8(param_1);
  FUN_10046b974(param_1);
  DAT_1018673e0 = *puVar1;
  DAT_10184e120 = DAT_1018673e0 + 1;
  lVar3 = param_1 + (ulong)DAT_1018673e0 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049ea5c;
  *(code **)(lVar3 + 0xb8) = FUN_10049ea84;
  *(uint *)(lVar3 + 0xa4) = DAT_1018673e0;
  *(undefined4 *)(lVar3 + 0xa8) = 0x58;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 100;
  *puVar1 = DAT_1018673e0 + 2;
  lVar3 = param_1 + (ulong)DAT_10184e120 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = thunk_FUN_10046e7d4;
  *(code **)(lVar3 + 0xb8) = FUN_10049eb34;
  *(uint *)(lVar3 + 0xa4) = DAT_10184e120;
  *(undefined4 *)(lVar3 + 0xa8) = 0x7588;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046b9f0(param_1);
  FUN_10046ba5c(param_1);
  DAT_1018673f0 = *puVar1;
  DAT_1018672f0 = DAT_1018673f0 + 1;
  lVar3 = param_1 + (ulong)DAT_1018673f0 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049f0cc;
  *(code **)(lVar3 + 0xb8) = FUN_10049f128;
  *(uint *)(lVar3 + 0xa4) = DAT_1018673f0;
  *(undefined4 *)(lVar3 + 0xa8) = 0x68;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x10e;
  *puVar1 = DAT_1018673f0 + 2;
  lVar3 = param_1 + (ulong)DAT_1018672f0 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049f448;
  *(code **)(lVar3 + 0xb8) = FUN_10049f4b8;
  *(uint *)(lVar3 + 0xa4) = DAT_1018672f0;
  *(undefined4 *)(lVar3 + 0xa8) = 0x58;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 800;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046bb28(param_1);
  FUN_10046bbe4(param_1);
  DAT_10184e150 = *puVar1;
  *puVar1 = DAT_10184e150 + 1;
  lVar3 = param_1 + (ulong)DAT_10184e150 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049f51c;
  *(code **)(lVar3 + 0xb8) = FUN_10049f590;
  *(uint *)(lVar3 + 0xa4) = DAT_10184e150;
  *(undefined4 *)(lVar3 + 0xa8) = 0xf0;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046bc84(param_1);
  FUN_10046bcf0(param_1);
  FUN_10046bda8(param_1);
  FUN_10046be24(param_1);
  FUN_10046bea0(param_1);
  uVar2 = *puVar1;
  DAT_10184dea0 = uVar2 + 1;
  lVar3 = param_1 + (ulong)uVar2 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = thunk_FUN_100471edc;
  *(code **)(lVar3 + 0xb8) = FUN_10049f944;
  *(uint *)(lVar3 + 0xa4) = uVar2;
  *(undefined4 *)(lVar3 + 0xa8) = 0x60;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x80;
  DAT_101867410 = uVar2 + 2;
  lVar3 = param_1 + (ulong)DAT_10184dea0 * 0x2e8;
  DAT_101867400 = uVar2;
  *(code **)(lVar3 + 0xb0) = FUN_10049f950;
  *(code **)(lVar3 + 0xb8) = FUN_10049f97c;
  *(uint *)(lVar3 + 0xa4) = DAT_10184dea0;
  *(undefined4 *)(lVar3 + 0xa8) = 0x50;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x10;
  *puVar1 = uVar2 + 3;
  lVar3 = param_1 + (ulong)DAT_101867410 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049f988;
  *(code **)(lVar3 + 0xb8) = FUN_10049f9d8;
  *(uint *)(lVar3 + 0xa4) = DAT_101867410;
  *(undefined4 *)(lVar3 + 0xa8) = 0x40;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046bf1c(param_1);
  FUN_10046bf88(param_1);
  FUN_10046c000(param_1);
  FUN_10046c06c(param_1);
  DAT_101867420 = *puVar1;
  *puVar1 = DAT_101867420 + 1;
  lVar3 = param_1 + (ulong)DAT_101867420 * 0x2e8;
  *(code **)(lVar3 + 0xb0) = FUN_10049fb70;
  *(code **)(lVar3 + 0xb8) = FUN_10049fbc8;
  *(uint *)(lVar3 + 0xa4) = DAT_101867420;
  *(undefined4 *)(lVar3 + 0xa8) = 0x40;
  *(uint *)(lVar3 + 0x2d8) = *(uint *)(lVar3 + 0x2d8) & 0x80000000 | 800;
  *(long *)(param_1 + 0x13fb8) = lVar3;
  FUN_10046c13c(param_1);
  return;
}




void FUN_10046b7b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_10184e398 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e398 + 1;
  lVar2 = param_1 + (ulong)DAT_10184e398 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_10049e5b0;
  *(code **)(lVar2 + 0xb8) = FUN_10049e5d4;
  *(uint *)(lVar2 + 0xa4) = DAT_10184e398;
  *(undefined4 *)(lVar2 + 0xa8) = 0x48;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_101856e80,FUN_10046c6c8);
  return;
}




void FUN_10046b82c(long param_1)

{
  long lVar1;
  
  DAT_10184de50 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de50 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de50 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10046c958;
  *(code **)(lVar1 + 0xb8) = FUN_10049e978;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de50;
  *(undefined4 *)(lVar1 + 0xa8) = 0x220;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  if (DAT_101d23a38 != '\0') {
    FUN_1010a0944(param_1,4,thunk_FUN_10046cd08,0);
  }
  FUN_1010a0990(param_1,0x9f730acb,FUN_10046c8e4,0);
  FUN_1010a0990(param_1,0xb7940b9d,FUN_10046c918,0);
  return;
}




void FUN_10046b8f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_1018673c0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_1018673c0 + 1;
  lVar2 = param_1 + (ulong)DAT_1018673c0 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_10049e9f4;
  *(code **)(lVar2 + 0xb8) = FUN_10049ea08;
  *(uint *)(lVar2 + 0xa4) = DAT_1018673c0;
  *(undefined4 *)(lVar2 + 0xa8) = 0x30;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_101857740,FUN_10046d18c);
  return;
}




void FUN_10046b974(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_1018673d0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_1018673d0 + 1;
  lVar2 = param_1 + (ulong)DAT_1018673d0 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_10049ea14;
  *(code **)(lVar2 + 0xb8) = FUN_10049ea50;
  *(uint *)(lVar2 + 0xa4) = DAT_1018673d0;
  *(undefined4 *)(lVar2 + 0xa8) = 0x30;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_101858080,FUN_10046d1fc);
  return;
}




void FUN_10046b9f0(long param_1)

{
  long lVar1;
  
  DAT_10184e000 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e000 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e000 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049ea90;
  *(code **)(lVar1 + 0xb8) = FUN_10049eb24;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e000;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10046e150,0);
  return;
}




void FUN_10046ba5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_10184dac8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dac8 + 1;
  lVar2 = param_1 + (ulong)DAT_10184dac8 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_10049ec74;
  *(code **)(lVar2 + 0xb8) = FUN_10049ece8;
  *(uint *)(lVar2 + 0xa4) = DAT_10184dac8;
  *(undefined4 *)(lVar2 + 0xa8) = 0x2b0;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 4;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  FUN_1010a0944(param_1,0,FUN_10046f94c,0);
  FUN_1010a0944(param_1,1,FUN_10046f950,0);
  FUN_1010a0944(param_1,4,FUN_10046f954,0);
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_1018583e8,FUN_10046f958);
  return;
}




void FUN_10046bb28(long param_1)

{
  long lVar1;
  
  DAT_101867380 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867380 + 1;
  lVar1 = param_1 + (ulong)DAT_101867380 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049f4c4;
  *(code **)(lVar1 + 0xb8) = FUN_10049f510;
  *(uint *)(lVar1 + 0xa4) = DAT_101867380;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_1004705bc,0);
  FUN_1010a0990(param_1,0x1ef90473,FUN_10047063c,0);
  FUN_1010a0990(param_1,0x1ab4042d,FUN_100470648,0);
  return;
}




void FUN_10046bbe4(long param_1)

{
  long lVar1;
  
  DAT_101867430 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867430 + 1;
  lVar1 = param_1 + (ulong)DAT_101867430 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049fcdc;
  *(code **)(lVar1 + 0xb8) = FUN_10049fd2c;
  *(uint *)(lVar1 + 0xa4) = DAT_101867430;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_1004750f4,0);
  FUN_1010a0990(param_1,0x1ef90473,FUN_100475154,0);
  return;
}




void FUN_10046bc84(long param_1)

{
  long lVar1;
  
  DAT_10184e110 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e110 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e110 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049f8d8;
  *(code **)(lVar1 + 0xb8) = FUN_10049f8f0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e110;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_10047124c,0);
  return;
}




void FUN_10046bcf0(long param_1)

{
  long lVar1;
  
  DAT_10184dec0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dec0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dec0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100473fd4;
  *(code **)(lVar1 + 0xb8) = FUN_10049fcd0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dec0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x160;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,thunk_FUN_100474b5c,0);
  FUN_1010a0944(param_1,6,thunk_FUN_100474cb0,0);
  FUN_1010a0990(param_1,0x1b0a0423,FUN_1004740b0,0);
  return;
}




void FUN_10046bda8(long param_1)

{
  long lVar1;
  
  DAT_10184dfe0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dfe0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dfe0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100470b24;
  *(code **)(lVar1 + 0xb8) = FUN_10049f8cc;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dfe0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x220;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_1010a0944(param_1,5,FUN_100470bbc,0);
  return;
}




void FUN_10046be24(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_10184de70 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de70 + 1;
  lVar2 = param_1 + (ulong)DAT_10184de70 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_10049f8fc;
  *(code **)(lVar2 + 0xb8) = FUN_10049f90c;
  *(uint *)(lVar2 + 0xa4) = DAT_10184de70;
  *(undefined4 *)(lVar2 + 0xa8) = 0x40;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_101858388,FUN_1004714b8);
  return;
}




void FUN_10046bea0(long param_1)

{
  long lVar1;
  
  DAT_1018672d0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_1018672d0 + 1;
  lVar1 = param_1 + (ulong)DAT_1018672d0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1004714fc;
  *(code **)(lVar1 + 0xb8) = FUN_10049f934;
  *(uint *)(lVar1 + 0xa4) = DAT_1018672d0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x298;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  if (DAT_101d23a38 != '\0') {
    FUN_1010a0944(param_1,4,FUN_1004715f4,0);
    return;
  }
  return;
}




void FUN_10046bf1c(long param_1)

{
  long lVar1;
  
  DAT_10184dc38 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dc38 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dc38 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049f9e4;
  *(code **)(lVar1 + 0xb8) = FUN_10049fa34;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dc38;
  *(undefined4 *)(lVar1 + 0xa8) = 0x50;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2000;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_100472378,0);
  return;
}




void FUN_10046bf88(long param_1)

{
  long lVar1;
  
  DAT_101867390 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867390 + 1;
  lVar1 = param_1 + (ulong)DAT_101867390 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049fa40;
  *(code **)(lVar1 + 0xb8) = FUN_10049fab8;
  *(uint *)(lVar1 + 0xa4) = DAT_101867390;
  *(undefined4 *)(lVar1 + 0xa8) = 0x208;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  if (DAT_101d23a38 != '\0') {
    FUN_1010a0978(param_1,5,FUN_1004723ec);
    return;
  }
  return;
}




void FUN_10046c000(long param_1)

{
  long lVar1;
  
  DAT_10184e4c8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e4c8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e4c8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049fac4;
  *(code **)(lVar1 + 0xb8) = FUN_10049fb10;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e4c8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10047257c,0);
  return;
}




void FUN_10046c06c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  DAT_10184dda8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dda8 + 1;
  lVar2 = param_1 + (ulong)DAT_10184dda8 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_10049fb1c;
  *(code **)(lVar2 + 0xb8) = FUN_10049fb64;
  *(uint *)(lVar2 + 0xa4) = DAT_10184dda8;
  *(undefined4 *)(lVar2 + 0xa8) = 0x90;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  if (DAT_101d23a38 == '\0') {
    pcVar1 = FUN_100472854;
  }
  else {
    FUN_1010a0944(param_1,3,FUN_1004725ac,0);
    FUN_1010a0944(param_1,4,FUN_100472684,0);
    pcVar1 = FUN_10047270c;
  }
  FUN_1010a0944(param_1,5,pcVar1,0);
  return;
}




void FUN_10046c13c(long param_1)

{
  long lVar1;
  
  DAT_10184e3b8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e3b8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e3b8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10049fbd4;
  *(code **)(lVar1 + 0xb8) = FUN_10049fc44;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e3b8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x80;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0xc0;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100472e54,0);
  return;
}




undefined8 * FUN_10046c1a8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499e10;
  param_1[5] = &PTR_FUN_101499e48;
  param_1[7] = &PTR_FUN_101499e78;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xbf8000003f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  *(byte *)((long)param_1 + 0x6b) = *(byte *)((long)param_1 + 0x6b) & 0xe0;
  return param_1;
}




void FUN_10046c22c(undefined4 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  if (*(float *)(param_2 + 0x54) < 0.0) {
    return;
  }
  plVar4 = *(long **)(param_2 + 0x40);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_2 + 0x48) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_2 + 0x40);
        uVar6 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_2 + 0x48) == (int)plVar4[1]) {
            uVar6 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            uVar6 = 0;
            *(undefined8 *)(param_2 + 0x40) = 0;
            *(undefined4 *)(param_2 + 0x48) = DAT_101dc0b88;
          }
        }
        iVar3 = FUN_1010a0324(uVar6);
        if (iVar3 == 0) goto LAB_10046c34c;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined4 *)(param_2 + 0x48) = DAT_101dc0b88;
    }
  }
  lVar5 = FUN_1010a0298(param_2,DAT_10184dc38);
  plVar4 = (long *)0x0;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 0x28);
  }
  plVar2 = (long *)&DAT_101dc0b88;
  if (lVar5 != 0) {
    plVar2 = plVar4 + 1;
  }
  lVar7 = *plVar2;
  *(long **)(param_2 + 0x40) = plVar4;
  *(int *)(param_2 + 0x48) = (int)lVar7;
  if (lVar5 == 0) {
    return;
  }
  if ((int)lVar7 != (int)plVar4[1]) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x48) = DAT_101dc0b88;
    return;
  }
  lVar5 = (**(code **)(*plVar4 + 0x10))();
  if (lVar5 == 0) {
    return;
  }
  lVar5 = (**(code **)(**(long **)(param_2 + 0x40) + 0x10))();
  *(undefined4 *)(lVar5 + 0x40) = param_1;
  *(undefined4 *)(lVar5 + 0x44) = param_1;
  *(long *)(lVar5 + 0x38) = param_2 + 0x38;
LAB_10046c34c:
  if (*(char *)(param_2 + 0x6a) != '\0') {
    return;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68) {
    lVar5 = 0;
  }
  uVar9 = 0xffff0000;
  lVar7 = lVar5;
LAB_10046c3ac:
  do {
    do {
      lVar8 = lVar7;
      if ((lVar8 != lVar5) &&
         (lVar7 = FUN_1010a0918(*(undefined8 *)(lVar8 + 8),0x457106fa), lVar7 != 0)) {
        (**(code **)(lVar7 + 8))(lVar8);
      }
      if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar7 = *(long *)(lVar8 + 0x18), lVar7 != 0)) {
        uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
        goto LAB_10046c3ac;
      }
      if ((uVar9 & 0xffff) == 0) {
        return;
      }
      lVar7 = *(long *)(lVar8 + 0x20);
    } while (*(long *)(lVar8 + 0x20) != 0);
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      return;
    }
    uVar1 = uVar9 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar9 = uVar1 | uVar9 & 0xffff0000;
    while (lVar7 = *(long *)(lVar8 + 0x20), lVar7 == 0) {
      if ((uVar9 - 1 & 0xffff) == 0) {
        return;
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
      if (lVar8 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10046c44c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x40);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
          }
        }
        uVar5 = FUN_1010a0324(uVar4);
        if ((uVar5 & 1) == 0) {
          plVar2 = *(long **)(param_1 + 0x40);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
            }
          }
          FUN_1010a01dc(uVar4);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  if ((int)*(char *)(param_1 + 0x69) + (uint)*(byte *)(param_1 + 0x68) !=
      (uint)*(byte *)(param_1 + 0x6a)) {
    lVar3 = FUN_1010a0298(param_1,DAT_10184dc38);
    plVar2 = (long *)0x0;
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x28);
    }
    lVar6 = *plVar2;
    plVar1 = (long *)&DAT_101dc0b88;
    if (lVar3 != 0) {
      plVar1 = plVar2 + 1;
    }
    lVar3 = *plVar1;
    *(long **)(param_1 + 0x40) = plVar2;
    *(int *)(param_1 + 0x48) = (int)lVar3;
    lVar3 = (**(code **)(lVar6 + 0x10))();
    uVar7 = FUN_1003ad218(param_1);
    *(undefined4 *)(lVar3 + 0x40) = uVar7;
    *(undefined4 *)(lVar3 + 0x44) = uVar7;
    *(long *)(lVar3 + 0x38) = param_1 + 0x38;
  }
  return;
}




void FUN_10046c5ac(long param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  
  if (param_2 < 1) {
    uVar1 = (int)*(char *)(param_1 + 0x69) + (uint)*(byte *)(param_1 + 0x68);
    if (*(byte *)(param_1 + 0x6a) <= uVar1) {
      return;
    }
  }
  else {
    fVar2 = (float)(int)((uint)*(byte *)(param_1 + 0x6a) + param_2);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    uVar1 = (uint)fVar2;
  }
  FUN_10045fb90(param_1,uVar1);
  return;
}




void FUN_10046c5ec(long param_1,long param_2)

{
  float fVar1;
  
  if (((*(byte *)(param_1 + 0x6b) & 3) == 0) && (*(float *)(param_2 + 0x44) < 0.0)) {
    *(float *)(param_1 + 100) = ABS(*(float *)(param_2 + 0x44));
  }
  fVar1 = (float)(*(byte *)(param_1 + 0x6a) + 1);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_10045fb90(param_1,(int)fVar1);
  FUN_10046c44c(param_1);
  return;
}




void FUN_10046c64c(long param_1)

{
  FUN_10046c5ec(param_1 + -0x38);
  return;
}




void FUN_10046c654(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10046c654_101499ea0;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  DAT_101d90978 = 0;
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10046c654(void)

{
  FUN_10046c654();
  return;
}




void FUN_10046c6b4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10046c654();
  operator_delete(pvVar1);
  return;
}




void FUN_10046c6c8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  bool bVar11;
  ulong uVar12;
  
  if (param_3 != (long *)0x0) {
    lVar4 = FUN_1010a1540(DAT_10184e398,0);
    *(long **)(lVar4 + 0x40) = param_3;
    param_3 = (long *)*param_3;
    uVar6 = *(uint *)(lVar4 + 0x38);
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar6 = uVar6 + 1;
      } while (*param_3 != 0);
      *(uint *)(lVar4 + 0x38) = uVar6;
    }
    pvVar5 = operator_new__((ulong)uVar6 << 2);
    *(void **)(lVar4 + 0x28) = pvVar5;
    pvVar5 = operator_new__((ulong)*(uint *)(lVar4 + 0x38) << 2);
    *(void **)(lVar4 + 0x30) = pvVar5;
    if (*(int *)(lVar4 + 0x38) != 0) {
      uVar12 = 0;
      do {
        plVar7 = *(long **)(**(long **)(lVar4 + 0x40) + uVar12 * 8);
        pcVar10 = (char *)*plVar7;
        lVar1 = plVar7[1];
        uVar3 = FUN_1004d2524(lVar1);
        uVar3 = FUN_100015208(lVar1,uVar3,0x12345678);
        *(undefined4 *)(*(long *)(lVar4 + 0x28) + uVar12 * 4) = uVar3;
        uVar3 = FUN_1004d2524(pcVar10);
        uVar3 = FUN_100015208(pcVar10,uVar3,0x12345678);
        *(undefined4 *)(*(long *)(lVar4 + 0x30) + uVar12 * 4) = uVar3;
        if (DAT_101d23a38 != '\0') {
          if (pcVar10 == (char *)0x0) {
            uVar6 = 0;
          }
          else {
            cVar8 = *pcVar10;
            uVar6 = 0x811c9dc5;
            if (cVar8 != '\0') {
              uVar6 = 0x811c9dc5;
              do {
                pcVar10 = pcVar10 + 1;
                uVar6 = (uVar6 ^ (int)cVar8) * 0x1000193;
                cVar8 = *pcVar10;
              } while (cVar8 != '\0');
            }
          }
          lVar9 = 0;
          bVar2 = true;
          do {
            bVar11 = bVar2;
            if (uVar6 == (&DAT_101e94180)[lVar9]) goto LAB_10046c830;
            lVar9 = 1;
            bVar2 = false;
          } while (bVar11);
        }
        FUN_1010a14fc(0,lVar1);
LAB_10046c830:
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(lVar4 + 0x38));
    }
  }
  return;
}




undefined8 FUN_10046c858(long param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_28;
  
  if (param_2 < *(uint *)(param_1 + 0x38)) {
    uVar2 = **(undefined8 **)(**(long **)(param_1 + 0x40) + (ulong)param_2 * 8);
    local_28 = 0;
    uVar1 = FUN_1010a1520();
    uVar1 = FUN_1010a0e0c(uVar1,0,uVar2,&local_28);
    if ((local_28 != 0) && (*(int *)(local_28 + 4) == *(int *)(param_3 + 4))) {
      return uVar1;
    }
  }
  return 0;
}




void FUN_10046c8cc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  *param_2 = *(undefined4 *)(param_1 + 100);
  param_2[1] = uVar1;
  return;
}




void thunk_FUN_10046cd08(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  long alStack_298 [70];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (((*(byte *)(param_1 + 0x218) & 3) == 0) &&
     (fVar8 = (float)FUN_100032228(),
     *(float *)(param_1 + 0x210) < fVar8 - *(float *)(param_1 + 0x20c))) {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) | 1;
    uVar2 = FUN_1010a1958(alStack_298,0x46,DAT_10184e3d0,0);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        lVar6 = alStack_298[uVar5];
        if (lVar6 != 0) {
          uVar7 = 0x10000;
          lVar3 = lVar6;
LAB_10046cdb0:
          do {
            do {
              lVar4 = lVar3;
              if ((lVar4 != lVar6) &&
                 (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x6b5808be), lVar3 != 0)) {
                (**(code **)(lVar3 + 8))(lVar4);
              }
              if (((uVar7 & 0xffff) < uVar7 >> 0x10) &&
                 (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
                uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
                goto LAB_10046cdb0;
              }
              if ((uVar7 & 0xffff) == 0) goto LAB_10046ce50;
              lVar3 = *(long *)(lVar4 + 0x20);
            } while (*(long *)(lVar4 + 0x20) != 0);
            lVar4 = *(long *)(lVar4 + 0x10);
            if ((lVar4 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
            uVar7 = uVar1 | uVar7 & 0xffff0000;
            while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
              if ((uVar7 - 1 & 0xffff) == 0) goto LAB_10046ce50;
              lVar4 = *(long *)(lVar4 + 0x10);
              uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
              if (lVar4 == 0) goto LAB_10046ce50;
            }
          } while( true );
        }
LAB_10046ce50:
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10046c8e4(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10046cfd0((float)*(double *)((ulong)&stack0x00000000 | 8),param_1,in_stack_00000000);
  return;
}




void FUN_10046c918(undefined8 param_1)

{
  int in_stack_00000000;
  
  FUN_10046d058(param_1,in_stack_00000000 != 0,*(int *)((ulong)&stack0x00000000 | 8) != 0);
  return;
}




undefined8 * FUN_10046c958(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_101499f50;
  plVar9 = param_1 + 5;
  *plVar9 = (long)&PTR_FUN_10149db08;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((long)param_1 + 0x214) = 0x811c9dc5;
  *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0xfc;
  plVar4 = *(long **)(DAT_101d23a68 + 0x28);
  if (*plVar4 == 0) {
LAB_10046cab4:
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_START__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_START__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_DURATION__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_DURATION__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_PAUSED__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_PAUSED__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_DO_ROUNDING__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_DO_ROUNDING__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_BOT_DIFFICULTY__");
    uVar3 = FUN_100015208("__GAME_MODE_BOT_DIFFICULTY__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    return param_1;
  }
  uVar10 = 0xffffffff;
  do {
    plVar4 = plVar4 + 1;
    uVar10 = uVar10 + 1;
  } while (*plVar4 != 0);
  uVar5 = 0;
  uVar11 = 0;
  do {
    uVar7 = uVar5;
    piVar8 = (int *)(param_1 + 6);
    if ((int)uVar5 == 0) {
      uVar6 = 0;
    }
    else {
      do {
        if (*piVar8 == (&DAT_101d90980)[uVar11 + 1 & 0xff]) goto LAB_10046ca8c;
        uVar7 = uVar7 - 1;
        uVar6 = uVar5;
        piVar8 = piVar8 + 1;
      } while (uVar7 != 0);
    }
    *(undefined4 *)((long)param_1 + uVar6 * 4 + 0x30) = (&DAT_101d90980)[uVar11 + 1 & 0xff];
    *(char *)(param_1 + 0x40) = (char)uVar5 + '\x01';
LAB_10046ca8c:
    puVar2 = (undefined4 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    *puVar2 = 0;
    if (uVar10 == uVar11) goto LAB_10046cab4;
    uVar5 = (ulong)*(byte *)(param_1 + 0x40);
    uVar11 = uVar11 + 1;
  } while( true );
}




undefined8 FUN_10046cc60(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1d8);
  uVar2 = (ulong)bVar1;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)(param_1 + 8);
    uVar4 = uVar2;
    do {
      if (*piVar3 == (int)param_2) {
        return param_2;
      }
      piVar3 = piVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(int *)(param_1 + uVar2 * 4 + 8) = (int)param_2;
  *(byte *)(param_1 + 0x1d8) = bVar1 + 1;
  return param_2;
}




undefined4 FUN_10046ccac(ulong param_1)

{
  return (&DAT_101d90980)[param_1 & 0xffffffff];
}




void FUN_10046ccbc(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x00010046cd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar2);
  return;
}




void FUN_10046cd08(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  long local_298 [70];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (((*(byte *)(param_1 + 0x218) & 3) == 0) &&
     (fVar8 = (float)FUN_100032228(),
     *(float *)(param_1 + 0x210) < fVar8 - *(float *)(param_1 + 0x20c))) {
    *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) | 1;
    uVar2 = FUN_1010a1958(local_298,0x46,DAT_10184e3d0,0);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        lVar6 = local_298[uVar5];
        if (lVar6 != 0) {
          uVar7 = 0x10000;
          lVar3 = lVar6;
LAB_10046cdb0:
          do {
            do {
              lVar4 = lVar3;
              if ((lVar4 != lVar6) &&
                 (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x6b5808be), lVar3 != 0)) {
                (**(code **)(lVar3 + 8))(lVar4);
              }
              if (((uVar7 & 0xffff) < uVar7 >> 0x10) &&
                 (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
                uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
                goto LAB_10046cdb0;
              }
              if ((uVar7 & 0xffff) == 0) goto LAB_10046ce50;
              lVar3 = *(long *)(lVar4 + 0x20);
            } while (*(long *)(lVar4 + 0x20) != 0);
            lVar4 = *(long *)(lVar4 + 0x10);
            if ((lVar4 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
            uVar7 = uVar1 | uVar7 & 0xffff0000;
            while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
              if ((uVar7 - 1 & 0xffff) == 0) goto LAB_10046ce50;
              lVar4 = *(long *)(lVar4 + 0x10);
              uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
              if (lVar4 == 0) goto LAB_10046ce50;
            }
          } while( true );
        }
LAB_10046ce50:
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10046ce98(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_8c;
  uint uStack_88;
  undefined4 local_84;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  int iStack_60;
  undefined4 local_5c;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  int iStack_38;
  undefined4 local_34;
  
  *(undefined4 *)(param_3 + 0x210) = param_2;
  *(undefined4 *)(param_3 + 0x20c) = param_1;
  *(byte *)(param_3 + 0x218) = *(byte *)(param_3 + 0x218) & 0xfd;
  uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_START__");
  local_3c = FUN_100015208("__GAME_MODE_COUNTDOWN_START__",uVar1,0x12345678);
  iStack_38 = (int)*(float *)(param_3 + 0x20c);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_101497368;
  local_34 = 0;
  FUN_1004979e4(&local_58,&DAT_101e47d30);
  uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_DURATION__");
  local_64 = FUN_100015208("__GAME_MODE_COUNTDOWN_DURATION__",uVar1,0x12345678);
  iStack_60 = (int)*(float *)(param_3 + 0x210);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_80 = &PTR_FUN_101497368;
  local_5c = 0;
  FUN_1004979e4(&local_80,&DAT_101e47d30);
  uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_PAUSED__");
  local_8c = FUN_100015208("__GAME_MODE_COUNTDOWN_PAUSED__",uVar1,0x12345678);
  uStack_88 = *(byte *)(param_3 + 0x218) >> 1 & 1;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a8 = &PTR_FUN_101497368;
  local_84 = 0;
  FUN_1004979e4(&local_a8,&DAT_101e47d30);
  return;
}




void FUN_10046cfcc(void)

{
  return;
}




void FUN_10046cfd0(undefined8 param_1,long param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100032228();
  FUN_10046ce98(uVar3,param_1,param_2);
  if (param_3 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_3;
    while (cVar1 != '\0') {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_3;
    }
  }
  *(uint *)(param_2 + 0x214) = uVar2;
  *(byte *)(param_2 + 0x218) = *(byte *)(param_2 + 0x218) & 0xfe;
  return;
}




void FUN_10046d058(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  uint uStack_38;
  undefined4 local_34;
  
  bVar2 = 2;
  if (param_2 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x218) = *(byte *)(param_1 + 0x218) & 0xfd | bVar2;
  uVar3 = FUN_100032228();
  if (param_2 != 0) {
    *(int *)(param_1 + 0x208) = (int)uVar3;
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_PAUSED__");
    local_3c = FUN_100015208("__GAME_MODE_COUNTDOWN_PAUSED__",uVar1,0x12345678);
    uStack_38 = *(byte *)(param_1 + 0x218) >> 1 & 1;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = &PTR_FUN_101497368;
    local_34 = 0;
    FUN_1004979e4(&local_58,&DAT_101e47d30);
    if (param_3 != 0) {
      uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_DO_ROUNDING__");
      local_64 = FUN_100015208("__GAME_MODE_COUNTDOWN_DO_ROUNDING__",uVar1,0x12345678);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_80 = &PTR_FUN_101497368;
      local_60 = 1;
      FUN_1004979e4(&local_80,&DAT_101e47d30);
    }
    return;
  }
  FUN_10046ce98(uVar3,(*(float *)(param_1 + 0x210) - *(float *)(param_1 + 0x208)) +
                      *(float *)(param_1 + 0x20c),param_1);
  return;
}




void FUN_10046d18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_1010a1540(DAT_1018673c0,0);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  return;
}




void FUN_10046d1bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499fb0;
  DAT_101d909c0 = 0;
  FUN_1010a0064();
  return;
}




void FUN_10046d1d4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101499fb0;
  DAT_101d909c0 = 0;
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10046d1fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_1010a1540(DAT_1018673d0,0);
    *(long *)(lVar1 + 0x28) = param_3;
  }
  return;
}




undefined8 FUN_10046d230(long param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  do {
    puVar3 = *(undefined8 **)**(long **)(param_1 + 0x28);
    plVar4 = (long *)**(long **)(param_1 + 0x28);
    while (puVar3 != (undefined8 *)0x0) {
      iVar1 = _strcmp((char *)*puVar3,param_2);
      if (iVar1 == 0) {
        lVar8 = *plVar4;
        goto LAB_10046d290;
      }
      puVar3 = (undefined8 *)plVar4[1];
      plVar4 = plVar4 + 1;
    }
    lVar8 = 0;
LAB_10046d290:
    plVar4 = *(long **)(lVar8 + 8);
    lVar10 = *plVar4;
    if (lVar10 == 0) {
      uVar5 = 0;
      fVar12 = 0.0;
    }
    else {
      uVar5 = 0;
      do {
        uVar9 = uVar5;
        uVar5 = uVar9 + 1;
      } while (plVar4[uVar9 + 1] != 0);
      fVar12 = (float)*(int *)(lVar10 + 8);
      if ((int)uVar5 != 1) {
        uVar6 = 0;
        do {
          fVar12 = fVar12 + (float)*(int *)(plVar4[uVar6 + 1] + 8);
          uVar6 = uVar6 + 1;
        } while (uVar9 != uVar6);
      }
    }
    iVar1 = _rand();
    if (lVar10 != 0) {
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      puVar3 = *(undefined8 **)(lVar8 + 8);
      uVar5 = uVar5 & 0xffffffff;
      fVar11 = 0.0;
      do {
        puVar7 = (undefined8 *)*puVar3;
        fVar11 = fVar11 + (float)*(int *)(puVar7 + 1);
        if (fVar12 * 4.656613e-10 * (float)iVar1 <= fVar11) goto LAB_10046d344;
        puVar3 = puVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)0x0;
LAB_10046d344:
    if (*(int *)((long)puVar7 + 0xc) != 1) {
      if (*(int *)((long)puVar7 + 0xc) == 0) {
        uVar2 = *puVar7;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    param_2 = (char *)*puVar7;
  } while( true );
}




void FUN_10046d384(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10046d398(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  uint local_28 [2];
  
  *(long *)(param_1 + 0x28) = param_2;
  *(undefined2 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  if (*(char *)(param_2 + 0x60) != '\0') {
    uVar3 = FUN_1010a0298(param_1,DAT_101867310);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    uVar3 = FUN_10034c3f4(param_2);
    FUN_10045e718(*(undefined8 *)(param_1 + 0x30),uVar3,0,0);
    return;
  }
  uVar4 = FUN_1004d2538(*(undefined8 *)(param_2 + 400));
  if ((uVar4 & 1) == 0) {
    pcVar6 = *(char **)(*(long *)(param_1 + 0x28) + 400);
    if (pcVar6 == (char *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x811c9dc5;
      cVar1 = *pcVar6;
      while (cVar1 != '\0') {
        pcVar6 = pcVar6 + 1;
        uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
        cVar1 = *pcVar6;
      }
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    local_28[0] = uVar7;
    lVar5 = FUN_1003dc44c(uVar3,local_28);
    if (lVar5 == 0) {
      lVar5 = FUN_1010a0298(uVar3,DAT_10184daf8);
      *(uint *)(lVar5 + 0x50) = uVar7;
      *(byte *)(lVar5 + 0x6b) = *(byte *)(lVar5 + 0x6b) & 0xe0 | 2;
      bVar2 = *(byte *)(lVar5 + 0x68);
      *(undefined1 *)(lVar5 + 0x68) = 1;
      FUN_10046c5ac(lVar5,1 - (uint)bVar2);
    }
  }
  return;
}




void FUN_10046d4b8(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  float local_5c;
  undefined1 local_58;
  
  if (DAT_101d23a38 != '\0') {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x48);
    puVar3 = (undefined4 *)*puVar4;
    fVar2 = local_5c;
    uVar1 = local_64;
    while (puVar3 != (undefined4 *)0x0) {
      puVar4 = puVar4 + 1;
      local_64 = *puVar3;
      local_5c = (float)puVar3[1];
      if (local_5c <= 0.0) {
        local_5c = (float)puVar3[2];
        if (0.0 < local_5c) {
          local_6c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
          uStack_60 = 2;
          goto LAB_10046d57c;
        }
      }
      else {
        local_6c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
        uStack_60 = 1;
LAB_10046d57c:
        uStack_68 = 0xffffffff;
        local_70 = 0;
        uStack_78 = 0;
        local_80 = 0;
        local_88 = &PTR_FUN_1014971e0;
        local_58 = 0;
        FUN_1004969f4(&local_88,&DAT_101e47d30);
        uVar1 = local_64;
        fVar2 = local_5c;
      }
      local_5c = fVar2;
      local_64 = uVar1;
      fVar2 = local_5c;
      uVar1 = local_64;
      puVar3 = (undefined4 *)*puVar4;
    }
    local_64 = uVar1;
    local_5c = fVar2;
    FUN_10046d5bc(param_1);
  }
  return;
}




void FUN_10046d5bc(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  int local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  
  if (DAT_101d23a38 != '\0') {
    plVar9 = *(long **)(*(long *)(param_1 + 0x28) + 0x50);
    puVar3 = (undefined8 *)*plVar9;
    if (puVar3 != (undefined8 *)0x0) {
LAB_10046d620:
      uVar8 = *puVar3;
      FUN_1003a4e5c(&local_b8,uVar8);
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      plVar6 = (long *)(lVar4 + 0x18);
      do {
        lVar7 = *plVar6;
        plVar6 = (long *)(lVar7 + 0x20);
      } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8);
      lVar5 = *(long *)(lVar7 + 0x28);
      for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
        if ((*(int *)(lVar7 + 0x314) == (int)local_b8) && (*(int *)(lVar7 + 0x310) == 0))
        goto LAB_10046d69c;
      }
      iVar10 = DAT_1018589d8;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      goto LAB_10046d6b4;
    }
  }
  return;
LAB_10046d69c:
  for (; (*(int *)(lVar5 + 0x314) != (int)local_b8 || (*(int *)(lVar5 + 0x310) != 0));
      lVar5 = *(long *)(lVar5 + 0x350)) {
  }
  iVar10 = *(int *)(lVar5 + 0x30c);
LAB_10046d6b4:
  local_9c = *(undefined4 *)(lVar4 + 0x260);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = &PTR_FUN_101496b18;
  local_90 = 0xbf80000000000000;
  local_88 = 1;
  local_70 = 0;
  local_84 = 0;
  uStack_7c = 0;
  local_68 = DAT_101dc0b88;
  uStack_98 = local_9c;
  local_94 = iVar10;
  uVar2 = FUN_1003d4e0c(uVar8);
  local_90 = CONCAT44(local_90._4_4_,uVar2);
  (*(code *)local_b8[4])(&local_b8,&DAT_101e47d30);
  *(int *)(param_1 + ((ulong)*(ushort *)(param_1 + 0x52) & 0x7fff) * 4 + 0x38) = iVar10;
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) =
       uVar1 & 0x80000000 | uVar1 & 0xffff | (uVar1 + 0x10000 >> 0x10 & 0x7fff) << 0x10;
  plVar9 = plVar9 + 1;
  puVar3 = (undefined8 *)*plVar9;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_10046d620;
}




void FUN_10046d75c(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  float local_6c;
  undefined1 local_68;
  
  if (DAT_101d23a38 != '\0') {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x48);
    puVar3 = (undefined4 *)*puVar2;
    uVar1 = local_74;
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = puVar2 + 1;
      local_74 = *puVar3;
      fVar4 = (float)puVar3[1];
      if (fVar4 <= 0.0) {
        fVar4 = (float)puVar3[2];
        if (0.0 < fVar4) {
          local_7c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
          uStack_70 = 2;
          goto LAB_10046d830;
        }
      }
      else {
        local_7c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
        uStack_70 = 1;
LAB_10046d830:
        uStack_78 = 0xffffffff;
        local_80 = 0;
        uStack_88 = 0;
        local_90 = 0;
        local_98 = &PTR_FUN_1014971e0;
        local_6c = -fVar4;
        local_68 = 0;
        FUN_1004969f4(&local_98,&DAT_101e47d30);
        uVar1 = local_74;
      }
      local_74 = uVar1;
      uVar1 = local_74;
      puVar3 = (undefined4 *)*puVar2;
    }
    if ((param_2 & 1) != 0) {
      local_74 = uVar1;
      FUN_10046d878(param_1);
    }
  }
  return;
}




void FUN_10046d878(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  int iStack_98;
  undefined4 local_94;
  int local_90 [10];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 == '\0') goto LAB_10046db28;
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar14 = *(long *)(lVar6 + 0x18);
  lVar15 = lVar14;
  if (lVar14 == 0) {
    lVar15 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_10184daa8) break;
      lVar15 = *(long *)(lVar15 + 0x20);
    } while (lVar15 != 0);
    do {
      if (*(int *)(*(long *)(lVar14 + 8) + 0xa4) == DAT_10184e000) break;
      lVar14 = *(long *)(lVar14 + 0x20);
    } while (lVar14 != 0);
  }
  uVar3 = *(ushort *)(lVar14 + 0xdc);
  uVar8 = (uint)uVar3;
  if ((uVar3 & 0x7f00) != 0) {
    uVar11 = 0;
    uVar10 = uVar3 >> 8 & 0x7f;
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar12 = (ulong)uVar10;
    plVar13 = (long *)(lVar14 + 0x38);
    do {
      if (*plVar13 != 0) {
        local_90[uVar11] = *(int *)(*plVar13 + 0x4c);
        uVar11 = (ulong)((int)uVar11 + 1);
      }
      plVar13 = plVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar10 = *(uint *)(param_1 + 0x50);
  if ((uVar10 & 0x7fff0000) != 0) {
    uVar11 = 0;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
LAB_10046d980:
    iVar2 = *(int *)(param_1 + uVar11 * 4 + 0x38);
    if ((uVar8 & 0xff) == 0) {
      bVar4 = false;
    }
    else {
      uVar12 = 0;
      iVar9 = *(int *)(param_1 + 0x4c);
      bVar4 = true;
      do {
        if ((local_90[uVar12] != iVar9) &&
           (uVar5 = FUN_10046e01c(lVar14,local_90[uVar12],iVar2), (uVar5 & 1) != 0)) break;
        uVar12 = uVar12 + 1;
        bVar4 = uVar12 < (uVar8 & 0xff);
      } while ((uVar8 & 0xff) != uVar12);
    }
    lVar7 = *(long *)(lVar15 + 0x28);
    for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
      if (*(int *)(lVar6 + 0x30c) == iVar2) {
        if (*(int *)(lVar6 + 0x310) == 0) {
          iVar9 = *(int *)(lVar7 + 0x30c);
          lVar6 = lVar7;
          if (iVar9 != iVar2) goto LAB_10046da6c;
          if (*(short *)(lVar7 + 0x344) == 1) goto LAB_10046da1c;
          goto LAB_10046da9c;
        }
        break;
      }
    }
    goto LAB_10046dad4;
  }
  goto LAB_10046db20;
LAB_10046da6c:
  do {
    lVar6 = *(long *)(lVar6 + 0x350);
  } while (*(int *)(lVar6 + 0x30c) != iVar2);
  if (*(short *)(lVar6 + 0x344) == 1) {
    while (iVar9 != iVar2) {
      lVar7 = *(long *)(lVar7 + 0x350);
      iVar9 = *(int *)(lVar7 + 0x30c);
    }
LAB_10046da1c:
    if ((*(short *)(lVar7 + 0x346) != 1) || ((bool)(bVar4 ^ 1))) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b8 = &PTR_FUN_101496cd8;
      local_9c = uVar1;
      iStack_98 = iVar2;
      FUN_100496580(&local_b8,&DAT_101e47d30);
    }
  }
  else {
LAB_10046da9c:
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    local_b8 = &PTR_FUN_101496db8;
    local_94 = 1;
    local_9c = uVar1;
    iStack_98 = iVar2;
    FUN_100496860(&local_b8,&DAT_101e47d30);
  }
LAB_10046dad4:
  uVar11 = uVar11 + 1;
  uVar10 = *(uint *)(param_1 + 0x50);
  if (((ulong)(uVar10 >> 0x10) & 0x7fff) <= uVar11) goto LAB_10046daf0;
  uVar8 = (uint)*(byte *)(lVar14 + 0xdc);
  goto LAB_10046d980;
LAB_10046daf0:
  if ((uVar10 & 0x7fff0000) != 0) {
    uVar11 = 0;
    do {
      *(undefined4 *)(param_1 + 0x38 + uVar11 * 4) = 0xffffffff;
      uVar11 = uVar11 + 1;
      uVar10 = *(uint *)(param_1 + 0x50);
    } while (uVar11 < ((ulong)(uVar10 >> 0x10) & 0x7fff));
  }
LAB_10046db20:
  *(uint *)(param_1 + 0x50) = uVar10 & 0x8000ffff;
LAB_10046db28:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10046db64(void)

{
  return;
}




void FUN_10046db68(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  if (((DAT_101d23a38 == '\0') || (*(long *)(param_1 + 0x30) == 0)) ||
     (iVar2 = FUN_10045f640(), iVar2 != 0)) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  local_64 = (int)param_2;
  if (local_64 == -1) {
    local_6c = *(undefined4 *)(lVar6 + 0x260);
    uStack_68 = *(undefined4 *)(param_1 + 0x4c);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_101496f08;
    local_64 = -1;
    local_60 = 0;
    local_58 = 2;
    FUN_10049738c(&local_88,&DAT_101e47d30);
    FUN_100345fa0(lVar6,**(undefined8 **)(param_1 + 0x28),0,0);
  }
  else {
    local_6c = *(undefined4 *)(lVar6 + 0x260);
    uStack_68 = *(undefined4 *)(param_1 + 0x4c);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_101496f08;
    local_60 = 0;
    local_58 = 0;
    FUN_10049738c(&local_88,&DAT_101e47d30);
    uVar3 = FUN_100345d90(param_2);
    FUN_100345fa0(lVar6,**(undefined8 **)(param_1 + 0x28),uVar3,0);
    lVar4 = FUN_100345d90(param_2);
    if (lVar4 == 0) {
      return;
    }
    local_88 = (undefined **)(lVar4 + 0x28);
    local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar4 + 0x30));
    FUN_10045f950(*(undefined8 *)(param_1 + 0x30),&local_88);
  }
  FUN_10045e3b4(*(long *)(param_1 + 0x30) + 0x68,2,0,0);
  if ((*(char *)(*(long *)(param_1 + 0x28) + 0x34) != '\0') && (param_3 != 0)) {
    FUN_1003d60f4(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x4c),1);
    local_6c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
    uStack_68 = *(undefined4 *)(param_1 + 0x4c);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_101496d48;
    local_64 = CONCAT31(local_64._1_3_,1);
    FUN_1004970c8(&local_88,&DAT_101e47d30);
  }
  uVar7 = 0xffff0000;
  lVar4 = lVar6;
LAB_10046dd44:
  do {
    do {
      lVar5 = lVar4;
      if ((lVar5 != lVar6) &&
         (lVar4 = FUN_1010a0918(*(undefined8 *)(lVar5 + 8),0x15af039a), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar5);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_10046dd44;
      }
      if ((uVar7 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      return;
    }
    uVar1 = uVar7 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10046dde4(void)

{
  return;
}




void FUN_10046dde8(void)

{
  return;
}




void FUN_10046ddec(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x34) != '\0') {
    if ((uVar1 & 0xffff) != 0) {
      uVar1 = uVar1 & 0xffff0000 | uVar1 - 1 & 0xffff;
      *(uint *)(param_1 + 0x50) = uVar1;
    }
    if ((uVar1 & 0xffff) != 0) {
      return;
    }
  }
  *(uint *)(param_1 + 0x50) = uVar1 | 0x80000000;
  return;
}




void FUN_10046de28(long param_1)

{
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x80) == 4) {
    FUN_10045fd94();
    FUN_10045e3b4(*(long *)(param_1 + 0x30) + 0x68,2,0,0);
    return;
  }
  return;
}




void FUN_10046de7c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long local_30;
  undefined4 local_28;
  
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x80);
  if ((uVar1 < 5 && uVar1 != 3) && (lVar2 = FUN_100345d90(param_2), lVar2 != 0)) {
    local_30 = lVar2 + 0x28;
    local_28 = *(undefined4 *)(lVar2 + 0x30);
    FUN_10045f950(*(undefined8 *)(param_1 + 0x30),&local_30);
    FUN_10045fd94(*(undefined8 *)(param_1 + 0x30));
    FUN_10045e3b4(*(long *)(param_1 + 0x30) + 0x68,2,0,0);
  }
  return;
}




void FUN_10046df00(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(int *)(*(long *)(lVar1 + 0x38) + 0x80) == 3) {
    uVar2 = param_2[1];
    *(undefined4 *)(lVar1 + 0x1d8) = *param_2;
    *(undefined4 *)(lVar1 + 0x1dc) = 0;
    *(undefined4 *)(lVar1 + 0x1e0) = uVar2;
    *(uint *)(lVar1 + 0x238) = *(uint *)(lVar1 + 0x238) & 0xffffffc7 | 0x10;
    FUN_10045fd94(*(undefined8 *)(param_1 + 0x30));
    FUN_10045e3b4(*(long *)(param_1 + 0x30) + 0x68,2,0,0);
    return;
  }
  return;
}




void FUN_10046df78(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_2 + 0x30);
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68);
  lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 0x1f8);
  puVar1 = &DAT_101d90970;
  if (lVar3 != 0) {
    puVar1 = (undefined4 *)(lVar3 + 0x50);
  }
  lVar2 = FUN_1003dc44c(lVar2,puVar1);
  if (lVar2 != 0) {
    fVar4 = (float)NEON_fminnm((float)param_3,
                               (float)((int)*(char *)(lVar2 + 0x69) + (uint)*(byte *)(lVar2 + 0x68))
                              );
    *(char *)(lVar2 + 0x6a) = (char)(int)fVar4;
    FUN_10046c22c(param_1);
    return;
  }
  return;
}




bool FUN_10046e01c(long param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar2 != 0) {
    plVar3 = (long *)(param_1 + 0x38);
    do {
      lVar4 = *plVar3;
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x4c) == param_2)) goto LAB_10046e050;
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  lVar4 = 0;
LAB_10046e050:
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x52) & 0x7fff;
  if ((int)uVar2 == 0) {
    return false;
  }
  if (*(int *)(lVar4 + 0x38) == param_3) {
    return true;
  }
  lVar1 = 0;
  do {
    lVar5 = lVar1;
    if (uVar2 - 1 == lVar5) break;
    lVar1 = lVar5 + 1;
  } while (*(int *)(lVar4 + 0x3c + lVar5 * 4) != param_3);
  return lVar5 + 1U < uVar2;
}




void FUN_10046e0b0(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10046e0d8(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10046e0fc(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10046e128(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10046e150(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    lVar1 = *(long *)(param_1 + 0x88 + lVar3);
    if (lVar1 != 0) {
      if (*(char *)(*(long *)(lVar1 + 0x28) + 0x60) != '\0') {
        uVar2 = (ulong)*(ushort *)(*(long *)(lVar1 + 0x30) + 0x68) & 0x1f;
        if (((int)uVar2 != 0x1f) && (*(short *)(*(long *)(lVar1 + 0x30) + uVar2 * 0x38 + 0x70) == 2)
           ) goto LAB_10046e1ac;
      }
      FUN_1010a01dc();
      *(undefined8 *)(param_1 + 0x88 + lVar3) = 0;
    }
LAB_10046e1ac:
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x50) {
      return;
    }
  } while( true );
}




void FUN_10046e1c8(void)

{
  return;
}




bool FUN_10046e1cc(long param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0xdc) >> 8) & 0x7f;
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    plVar4 = (long *)(param_1 + 0x38);
    do {
      lVar5 = *plVar4;
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x48) == param_2)) {
        cVar1 = *(char *)(*(long *)(lVar5 + 0x28) + 0x1a4);
        if (cVar1 != '\0') {
          return cVar1 == '\0';
        }
        if ((int)(uint)*(ushort *)(lVar5 + 0x50) < *(int *)(*(long *)(lVar5 + 0x28) + 0x38)) {
          return true;
        }
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return (*(ushort *)(param_1 + 0xdc) & 0xff) < uVar2;
}




undefined4 FUN_10046e234(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x38);
  do {
    if (*plVar1 != 0) {
      if (param_2 == 0) {
        return *(undefined4 *)(*plVar1 + 0x48);
      }
      param_2 = param_2 + -1;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}




undefined4 FUN_10046e258(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x38);
    do {
      lVar3 = *plVar2;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) == param_2)) {
        return *(undefined4 *)(lVar3 + 0x48);
      }
      plVar2 = plVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 0xffff;
}




undefined4 FUN_10046e298(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x38);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x4c);
  }
  return 0xffffffff;
}




undefined2 FUN_10046e2b4(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  return *(undefined2 *)(lVar2 + 0x50);
}




undefined4 FUN_10046e2dc(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  return *(undefined4 *)(*(long *)(lVar2 + 0x28) + 0x40);
}




undefined1 FUN_10046e308(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x30) + 0x1f8);
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x6a);
  }
  return 0;
}




undefined1  [16] FUN_10046e344(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  if (*(long *)(*(long *)(lVar2 + 0x30) + 0x1f8) != 0) {
    FUN_10045f284();
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  return ZEXT816(0);
}




undefined8 FUN_10046e37c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  switch(param_2) {
  case 0:
    goto switchD_10046e39c_caseD_0;
  case 1:
    uVar1 = *(uint *)(DAT_101d23a68 + 0x60);
    break;
  case 2:
    uVar1 = *(uint *)(DAT_101d23a68 + 0x5c);
    break;
  case 3:
    uVar1 = *(uint *)(DAT_101d23a68 + 100);
    break;
  default:
    uVar1 = 0;
  }
  uVar3 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    plVar4 = (long *)(param_1 + 0x38);
    do {
      if ((*plVar4 != 0) && (*(int *)(*(long *)(*plVar4 + 0x28) + 0x1a0) == param_2)) {
        uVar2 = uVar2 + 1;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (uVar1 <= uVar2) {
    return 1;
  }
switchD_10046e39c_caseD_0:
  return 0;
}




bool FUN_10046e42c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  return *(long *)(lVar2 + 0x30) != 0;
}




bool FUN_10046e45c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  if ((*(long *)(lVar2 + 0x30) != 0) &&
     (lVar2 = *(long *)(*(long *)(lVar2 + 0x30) + 0x1f8), lVar2 != 0)) {
    return 1 < (int)*(char *)(lVar2 + 0x69) + (uint)*(byte *)(lVar2 + 0x68);
  }
  return false;
}




void FUN_10046e4ac(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  int local_50 [2];
  int local_48 [2];
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar2 != 0) {
    plVar4 = (long *)(param_1 + 0x38);
    do {
      lVar1 = *plVar4;
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x4c) == param_2)) goto LAB_10046e500;
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  lVar1 = 0;
LAB_10046e500:
  if ((*(long *)(lVar1 + 0x30) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar1 + 0x30) + 0x1f8), lVar3 != 0)) {
    fVar5 = *(float *)(lVar3 + 0x60);
    if (fVar5 < 0.0) {
      fVar5 = (*(float *)(lVar3 + 0x58) + *(float *)(lVar3 + 0x54)) * *(float *)(lVar3 + 0x5c);
    }
    if ((0.0 < fVar5) &&
       (FUN_1003a4e5c(local_48,**(undefined8 **)(lVar1 + 0x28)), *(char *)(param_1 + 0xdc) != '\0'))
    {
      uVar2 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x38 + uVar2 * 8);
        if (((lVar1 != 0) && (*(int *)(lVar1 + 0x4c) != param_2)) &&
           (FUN_1003a4e5c(local_50,**(undefined8 **)(lVar1 + 0x28)), local_48[0] == local_50[0])) {
          FUN_10045e3b4(*(long *)(*(long *)(param_1 + 0x38 + uVar2 * 8) + 0x30) + 0x68,3,0,0);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(param_1 + 0xdc));
    }
  }
  return;
}




float FUN_10046e5cc(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x30) + 0x1f8);
  if (lVar2 != 0) {
    fVar3 = *(float *)(lVar2 + 0x60);
    if (fVar3 < 0.0) {
      fVar3 = (*(float *)(lVar2 + 0x58) + *(float *)(lVar2 + 0x54)) * *(float *)(lVar2 + 0x5c);
    }
    return fVar3;
  }
  return 0.0;
}




long FUN_10046e620(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar3 = *plVar1, lVar3 == 0 || (*(int *)(lVar3 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  if (*(long *)(lVar3 + 0x30) != 0) {
    lVar2 = *(long *)(*(long *)(lVar3 + 0x30) + 0x38);
    lVar3 = 0;
    if (*(char *)(lVar2 + 0x70) != '\0') {
      lVar3 = lVar2 + 0xb8;
    }
    return lVar3;
  }
  return 0;
}




void FUN_10046e668(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  FUN_10045f34c(*(long *)(lVar2 + 0x30) + 0x220);
  return;
}




undefined4 FUN_10046e694(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  return *(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x30) + 0x38) + 0x80);
}




undefined8 FUN_10046e6c4(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    return *(undefined8 *)(*(long *)(lVar2 + 0x30) + 0x38);
  }
  return 0;
}




bool FUN_10046e6fc(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  for (plVar3 = (long *)(param_1 + 0x38);
      (lVar4 = *plVar3, lVar4 == 0 || (*(int *)(lVar4 + 0x4c) != param_2)); plVar3 = plVar3 + 1) {
  }
  bVar1 = false;
  if (*(long *)(lVar4 + 0x30) != 0) {
    iVar2 = FUN_10045f640();
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




undefined8 FUN_10046e740(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  for (plVar2 = (long *)(param_1 + 0x38);
      (lVar3 = *plVar2, lVar3 == 0 || (*(int *)(lVar3 + 0x4c) != param_2)); plVar2 = plVar2 + 1) {
  }
  if (*(long *)(lVar3 + 0x30) != 0) {
    uVar1 = FUN_10045f640();
    return uVar1;
  }
  return 0x400;
}




void FUN_10046e774(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FUN_10045f050();
    return;
  }
  return;
}




long FUN_10046e7a4(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  return *(long *)(*(long *)(lVar2 + 0x30) + 0x38) + 0x9d;
}




undefined8 * FUN_10046e7d4(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a070;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 7) = 0;
  lVar2 = 0x40;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar2);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0xe) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x12) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x16) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x14) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x1a) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
    lVar2 = lVar2 + 0x90;
    *(undefined8 *)(puVar1 + 0x1e) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x1c) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x22) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  } while ((undefined8 *)(puVar1 + 0x24) != param_1 + 0x9e0);
  pvVar4 = (void *)((long)param_1 + 0x513c);
  lVar2 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar2 * 0x1344 + 0x4f00) = 0xffff;
    _memset_pattern16((void *)((long)param_1 + lVar2 * 0x1344 + 0x4f04),&DAT_101159b60,0x230);
    *(undefined4 *)((long)param_1 + lVar2 * 0x1344 + 0x5134) = 0;
    lVar5 = 6;
    pvVar3 = pvVar4;
    do {
      _memset_pattern16(pvVar3,&DAT_101159b60,0x230);
      *(undefined4 *)((long)pvVar3 + -4) = 0;
      pvVar3 = (void *)((long)pvVar3 + 0x2c0);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x623c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6234) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6220) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6218) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6230) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6228) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6200) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61f8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6210) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6208) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61e0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61d8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61f0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61e8) = 0;
    lVar5 = lVar2 + 1;
    pvVar4 = (void *)((long)pvVar4 + 0x1344);
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61c0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61b8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61d0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61c8) = 0;
    lVar2 = lVar5;
  } while (lVar5 != 2);
  return param_1;
}




void FUN_10046e910(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10046e924(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 1);
  lVar11 = DAT_101d90978;
  uVar4 = FUN_1003b1948(DAT_101d90978,PTR_s__KindredItems__10185d828);
  uVar13 = **(undefined8 **)(**(long **)(lVar11 + 0x40) + (uVar4 & 0xffffffff) * 8);
  uVar5 = FUN_1010a1520();
  plVar6 = (long *)FUN_1010a0e0c(uVar5,0,uVar13,0);
  plVar6 = (long *)*plVar6;
  puVar10 = (undefined8 *)*plVar6;
  if (puVar10 == (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  else {
    do {
      uVar13 = *puVar10;
      uVar5 = FUN_1010a1520();
      uVar5 = FUN_1010a0e0c(uVar5,0,uVar13,0);
      uVar2 = FUN_1003b1948(DAT_101d90978,*(undefined8 *)*plVar6);
      uVar1 = *(uint *)(param_1 + 0x38);
      lVar11 = param_1 + (ulong)uVar1 * 0x90;
      *(undefined4 *)(lVar11 + 0x40) = uVar2;
      *(undefined8 *)(lVar11 + 0x48) = uVar5;
      uVar1 = uVar1 + 1;
      *(uint *)(param_1 + 0x38) = uVar1;
      puVar10 = (undefined8 *)plVar6[1];
      plVar6 = plVar6 + 1;
    } while (puVar10 != (undefined8 *)0x0);
  }
  if (uVar1 != 0) {
    uVar8 = (ulong)uVar1;
    uVar4 = 0;
    do {
      puVar14 = *(undefined8 **)(*(long *)(param_1 + uVar4 * 0x90 + 0x48) + 0x58);
      puVar10 = (undefined8 *)*puVar14;
      if (puVar10 != (undefined8 *)0x0) {
        uVar15 = 0;
        do {
          iVar3 = FUN_1003b1948(DAT_101d90978,*puVar10);
          uVar8 = (ulong)*(uint *)(param_1 + 0x38);
          if (*(uint *)(param_1 + 0x38) != 0) {
            uVar12 = 0;
            do {
              iVar9 = (int)uVar12;
              if (*(int *)(param_1 + uVar12 * 0x90 + 0x40) == iVar3) {
                lVar11 = 0;
                lVar7 = param_1 + 0x90 + (long)iVar9 * 0x90;
                *(int *)(param_1 + uVar4 * 0x90 + uVar15 * 4 + 0x50) = iVar9;
                do {
                  if (*(int *)(lVar7 + lVar11) == -1) {
                    *(int *)(lVar7 + lVar11) = (int)uVar4;
                    uVar8 = (ulong)*(uint *)(param_1 + 0x38);
                    break;
                  }
                  lVar11 = lVar11 + 4;
                } while (lVar11 != 0x40);
              }
              uVar12 = (ulong)(iVar9 + 1U);
            } while (iVar9 + 1U < (uint)uVar8);
          }
          uVar15 = (ulong)((int)uVar15 + 1);
          puVar14 = puVar14 + 1;
          puVar10 = (undefined8 *)*puVar14;
        } while (puVar10 != (undefined8 *)0x0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar8);
  }
  lVar11 = DAT_101d90978;
  lVar7 = FUN_1003e10f0();
  uVar5 = FUN_1003b1948(lVar11,*(undefined8 *)(lVar7 + 0x128));
  FUN_10046eadc(param_1,uVar5);
  return;
}




uint * FUN_10046eadc(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  bool bVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  
  lVar16 = 0;
  bVar14 = true;
  while (puVar1 = (uint *)(param_1 + lVar16 * 0x1344 + 0x4f00), *puVar1 != 0xffff) {
    lVar16 = 1;
    bVar5 = !bVar14;
    bVar14 = false;
    if (bVar5) {
      return (uint *)0x0;
    }
  }
  *puVar1 = param_2;
  uVar15 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)param_2 * 8);
  uVar7 = FUN_1010a1520();
  puVar8 = (undefined8 *)FUN_1010a0e0c(uVar7,0,uVar15,0);
  plVar17 = (long *)*puVar8;
  puVar8 = (undefined8 *)*plVar17;
  if (puVar8 == (undefined8 *)0x0) {
    return puVar1;
  }
  puVar2 = (uint *)(param_1 + lVar16 * 0x1344 + 0x5134);
  do {
    uVar6 = FUN_1003b1948(DAT_101d90978,*puVar8);
    if (*(uint *)(param_1 + 0x38) != 0) {
      uVar10 = 0;
      puVar12 = (uint *)(param_1 + 0x40);
      do {
        if (uVar6 == *puVar12) {
          lVar11 = *plVar17;
          *(byte *)(param_1 + lVar16 * 0x1344 + 0x61b8 + uVar10) = *(byte *)(lVar11 + 0xc) ^ 1;
          lVar9 = param_1 + lVar16 * 0x1344 + 0x5138;
          piVar13 = (int *)(lVar9 + (long)*(int *)(lVar11 + 8) * 0x2c0);
          iVar4 = *piVar13;
          *piVar13 = iVar4 + 1;
          piVar13[(long)iVar4 + 1] = (int)uVar10;
          *(undefined1 *)(lVar9 + (long)*(int *)(lVar11 + 8) * 0x2c0 + (long)iVar4 + 0x234) =
               *(undefined1 *)(lVar11 + 0xc);
          break;
        }
        uVar10 = uVar10 + 1;
        puVar12 = puVar12 + 0x24;
      } while (*(uint *)(param_1 + 0x38) != uVar10);
    }
    uVar15 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)uVar6 * 8);
    uVar7 = FUN_1010a1520();
    lVar9 = FUN_1010a0e0c(uVar7,0,uVar15,0);
    if ((((*(int *)(lVar9 + 0x30) == 3) && (*(char *)(lVar9 + 0x199) == '\0')) &&
        (*(char *)(lVar9 + 0x19a) == '\0')) && (*(char *)(lVar9 + 0x34) == '\0')) {
      uVar3 = *puVar2;
      *puVar2 = uVar3 + 1;
      *(uint *)(param_1 + lVar16 * 0x1344 + (ulong)uVar3 * 4 + 0x4f04) = uVar6;
    }
    plVar17 = plVar17 + 1;
    puVar8 = (undefined8 *)*plVar17;
    if (puVar8 == (undefined8 *)0x0) {
      return puVar1;
    }
  } while( true );
}




int FUN_10046ecd4(long param_1,undefined8 param_2,long param_3,long param_4,uint *param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 local_64;
  
  iVar4 = (*(int *)(*(long *)(param_3 + 8) + 0x3c) * param_6) / 100;
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 != -1) {
    uVar6 = 1;
    lVar3 = param_1;
    do {
      puVar5 = (undefined4 *)(param_1 + (long)iVar1 * 0x90 + 0x40);
      local_64 = 0xffffffff;
      lVar3 = FUN_10046f7e8(lVar3,param_2,*puVar5,param_4,&local_64);
      if ((int)lVar3 == 0) {
        lVar3 = FUN_10046ecd4(param_1,param_2,puVar5,param_4,param_5,param_6);
        iVar4 = (int)lVar3 + iVar4;
      }
      else {
        uVar2 = *param_5;
        *param_5 = uVar2 + 1;
        *(undefined4 *)(param_4 + (ulong)uVar2 * 4) = local_64;
      }
      iVar1 = *(int *)(param_3 + uVar6 * 4 + 0x10);
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (iVar1 != -1);
  }
  return iVar4;
}




undefined4 FUN_10046edd8(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (param_2 & 0xffffffff) * 8);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,uVar4,0);
  if (lVar3 == 0) {
    uVar1 = 100;
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
  }
  return uVar1;
}




undefined1 FUN_10046ee2c(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  piVar3 = (int *)0x0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    piVar1 = (int *)(param_1 + lVar4 * 0x1344 + 0x4f00);
    if (*piVar1 != param_3) {
      piVar1 = piVar3;
    }
    lVar4 = 1;
    piVar3 = piVar1;
    bVar2 = false;
  } while (bVar5);
  return *(undefined1 *)((long)piVar1 + (ulong)param_2 + 0x12b8);
}




bool FUN_10046ee74(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  
  uVar4 = 0;
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  local_8c = 0;
  uStack_88 = 0xffffffff;
  uVar2 = param_1;
  do {
    lVar3 = (long)*(int *)(param_3 + 0x10 + uVar4 * 4);
    bVar1 = 0xf < uVar4;
    if (lVar3 == -1 || bVar1) break;
    uVar2 = FUN_10046f7e8(uVar2,param_2,*(undefined4 *)(param_1 + lVar3 * 0x90 + 0x40),&uStack_88,
                          &local_8c);
    uVar4 = uVar4 + 1;
  } while ((uVar2 & 1) != 0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return lVar3 == -1 || bVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_10046ef44(long param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  piVar3 = (int *)0x0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    piVar1 = (int *)(param_1 + lVar4 * 0x1344 + 0x4f00);
    if (*piVar1 != param_2) {
      piVar1 = piVar3;
    }
    lVar4 = 1;
    piVar3 = piVar1;
    bVar2 = false;
  } while (bVar5);
  return piVar1 != (int *)0x0;
}




uint * thunk_FUN_10046eadc(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  int *piVar13;
  bool bVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  
  lVar16 = 0;
  bVar14 = true;
  while (puVar1 = (uint *)(param_1 + lVar16 * 0x1344 + 0x4f00), *puVar1 != 0xffff) {
    lVar16 = 1;
    bVar5 = !bVar14;
    bVar14 = false;
    if (bVar5) {
      return (uint *)0x0;
    }
  }
  *puVar1 = param_2;
  uVar15 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)param_2 * 8);
  uVar7 = FUN_1010a1520();
  puVar8 = (undefined8 *)FUN_1010a0e0c(uVar7,0,uVar15,0);
  plVar17 = (long *)*puVar8;
  puVar8 = (undefined8 *)*plVar17;
  if (puVar8 == (undefined8 *)0x0) {
    return puVar1;
  }
  puVar2 = (uint *)(param_1 + lVar16 * 0x1344 + 0x5134);
  do {
    uVar6 = FUN_1003b1948(DAT_101d90978,*puVar8);
    if (*(uint *)(param_1 + 0x38) != 0) {
      uVar10 = 0;
      puVar12 = (uint *)(param_1 + 0x40);
      do {
        if (uVar6 == *puVar12) {
          lVar11 = *plVar17;
          *(byte *)(param_1 + lVar16 * 0x1344 + 0x61b8 + uVar10) = *(byte *)(lVar11 + 0xc) ^ 1;
          lVar9 = param_1 + lVar16 * 0x1344 + 0x5138;
          piVar13 = (int *)(lVar9 + (long)*(int *)(lVar11 + 8) * 0x2c0);
          iVar4 = *piVar13;
          *piVar13 = iVar4 + 1;
          piVar13[(long)iVar4 + 1] = (int)uVar10;
          *(undefined1 *)(lVar9 + (long)*(int *)(lVar11 + 8) * 0x2c0 + (long)iVar4 + 0x234) =
               *(undefined1 *)(lVar11 + 0xc);
          break;
        }
        uVar10 = uVar10 + 1;
        puVar12 = puVar12 + 0x24;
      } while (*(uint *)(param_1 + 0x38) != uVar10);
    }
    uVar15 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)uVar6 * 8);
    uVar7 = FUN_1010a1520();
    lVar9 = FUN_1010a0e0c(uVar7,0,uVar15,0);
    if ((((*(int *)(lVar9 + 0x30) == 3) && (*(char *)(lVar9 + 0x199) == '\0')) &&
        (*(char *)(lVar9 + 0x19a) == '\0')) && (*(char *)(lVar9 + 0x34) == '\0')) {
      uVar3 = *puVar2;
      *puVar2 = uVar3 + 1;
      *(uint *)(param_1 + lVar16 * 0x1344 + (ulong)uVar3 * 4 + 0x4f04) = uVar6;
    }
    plVar17 = plVar17 + 1;
    puVar8 = (undefined8 *)*plVar17;
    if (puVar8 == (undefined8 *)0x0) {
      return puVar1;
    }
  } while( true );
}




undefined8 FUN_10046ef8c(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 0x90 + 0x48);
}




undefined4 FUN_10046ef9c(long param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (ulong)param_2 * 0x90 + 0x40);
}




ulong FUN_10046efac(long param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(param_1 + 0x40);
    do {
      if (*piVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x24;
    } while (*(uint *)(param_1 + 0x38) != uVar1);
  }
  return 0xffffffff;
}




undefined8 FUN_10046efe4(long param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  if (-1 < param_3) {
    lVar5 = 0;
    piVar3 = (int *)0x0;
    bVar2 = true;
    do {
      bVar6 = bVar2;
      piVar1 = (int *)(param_1 + lVar5 * 0x1344 + 0x4f00);
      if (*piVar1 != param_4) {
        piVar1 = piVar3;
      }
      lVar5 = 1;
      piVar3 = piVar1;
      bVar2 = false;
    } while (bVar6);
    if (piVar1[(long)param_3 * 0xb0 + 0x8e] != 0) {
      uVar4 = 0;
      do {
        if (piVar1[(long)param_3 * 0xb0 + uVar4 + 0x8f] == param_2) {
          *param_5 = *(byte *)((long)piVar1 + uVar4 + (long)param_3 * 0x2c0 + 0x46c) ^ 1;
          return 1;
        }
        uVar4 = uVar4 + 1;
      } while ((uint)piVar1[(long)param_3 * 0xb0 + 0x8e] != uVar4);
    }
  }
  return 0;
}




long FUN_10046f084(long param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  int *piVar7;
  
  lVar4 = 0;
  piVar3 = (int *)0x0;
  bVar2 = true;
  do {
    bVar6 = bVar2;
    piVar1 = (int *)(param_1 + lVar4 * 0x1344 + 0x4f00);
    if (*piVar1 != param_3) {
      piVar1 = piVar3;
    }
    lVar4 = 1;
    piVar3 = piVar1;
    bVar2 = false;
  } while (bVar6);
  lVar4 = 0;
  piVar3 = piVar1 + 0x8f;
  do {
    uVar5 = (ulong)(uint)piVar1[lVar4 * 0xb0 + 0x8e];
    piVar7 = piVar3;
    if (piVar1[lVar4 * 0xb0 + 0x8e] != 0) {
      do {
        if (*piVar7 == param_2) {
          return lVar4;
        }
        piVar7 = piVar7 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar4 = lVar4 + 1;
    piVar3 = piVar3 + 0xb0;
  } while (lVar4 != 6);
  return 0xffffffff;
}




undefined8 FUN_10046f108(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  
  if (param_2 != param_3) {
    if (*(uint *)(param_1 + 0x38) == 0) {
      uVar5 = 0xffffffff;
      uVar3 = 0xffffffff;
    }
    else {
      uVar6 = 0;
      piVar7 = (int *)(param_1 + 0x40);
      uVar4 = 0xffffffff;
      uVar2 = 0xffffffff;
      do {
        uVar5 = (int)uVar6;
        if (*piVar7 != param_2) {
          uVar5 = uVar4;
        }
        uVar3 = (int)uVar6;
        if (*piVar7 != param_3) {
          uVar3 = uVar2;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 0x24;
        uVar4 = uVar5;
        uVar2 = uVar3;
      } while (*(uint *)(param_1 + 0x38) != uVar6);
    }
    uVar1 = FUN_10046f16c(param_1,uVar5,uVar3,0);
    return uVar1;
  }
  return 0;
}




ulong FUN_10046f16c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_3;
  iVar4 = (int)param_2;
  if (-1 < param_4) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + (long)iVar5 * 0x90 + 0x50 + lVar3);
      if (iVar1 == -1) break;
      if (iVar1 == iVar4) {
        return (ulong)(param_4 + 1);
      }
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x40);
    if (0 < param_4) goto LAB_10046f210;
  }
  lVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + (long)iVar4 * 0x90 + 0x50 + lVar3);
    if (iVar1 == -1) break;
    if (iVar1 == iVar5) {
      return (ulong)(param_4 - 1);
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x40);
LAB_10046f210:
  lVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + (long)iVar4 * 0x90 + 0x90 + lVar3);
    if (iVar1 == -1) break;
    uVar2 = FUN_10046f16c(param_1,iVar1,param_3,param_4 + 1);
    if (param_4 + 1 < (int)uVar2) {
      return uVar2;
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x40);
  lVar3 = 0;
  while( true ) {
    iVar4 = *(int *)(param_1 + (long)iVar5 * 0x90 + 0x90 + lVar3);
    if (iVar4 == -1) {
      return 0;
    }
    uVar2 = FUN_10046f16c(param_1,param_2,iVar4,param_4 + -1);
    if ((int)uVar2 < param_4 + -1) break;
    lVar3 = lVar3 + 4;
    if (lVar3 == 0x40) {
      return 0;
    }
  }
  return uVar2;
}




void FUN_10046f2c4(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  int *piVar2;
  undefined4 local_14;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(param_1 + 0x40);
    do {
      if (*piVar2 == param_2) goto LAB_10046f308;
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x24;
    } while (*(uint *)(param_1 + 0x38) != uVar1);
  }
  uVar1 = 0;
LAB_10046f308:
  local_14 = param_4;
  FUN_10046f31c(param_1,uVar1,param_3,&local_14);
  return;
}




undefined8 FUN_10046f31c(long param_1,ulong param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uStack_61;
  
  uVar9 = 0;
  do {
    uVar2 = *(uint *)(param_1 + (param_2 & 0xffffffff) * 0x90 + uVar9 * 4 + 0x90);
    uVar8 = (ulong)uVar2;
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    iVar4 = FUN_10046efe4(param_1,uVar8,param_3,*param_4,&uStack_61);
    if (iVar4 != 0) {
      lVar6 = 0;
      piVar5 = (int *)0x0;
      bVar3 = true;
      do {
        bVar7 = bVar3;
        piVar1 = (int *)(param_1 + lVar6 * 0x1344 + 0x4f00);
        if (*piVar1 != *param_4) {
          piVar1 = piVar5;
        }
        lVar6 = 1;
        piVar5 = piVar1;
        bVar3 = false;
      } while (bVar7);
      if (*(char *)((long)piVar1 + uVar8 + 0x12b8) != '\0') {
        return 1;
      }
    }
    iVar4 = FUN_10046f31c(param_1,uVar8,param_3,param_4);
    if (iVar4 != 0) {
      return 1;
    }
    uVar2 = (int)uVar9 + 1;
    uVar9 = (ulong)uVar2;
  } while (uVar2 != 0x10);
  return 0;
}




void FUN_10046f420(long param_1,int param_2,int param_3,undefined4 *param_4,int *param_5)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar5 = 0;
    uVar3 = *(int *)(param_1 + 0x38) - 1;
    if (0x8a < uVar3) {
      uVar3 = 0x8b;
    }
    piVar6 = (int *)(param_1 + 0x40);
    do {
      if (*piVar6 == param_2) goto LAB_10046f464;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 0x24;
    } while (uVar3 + 1 != uVar5);
  }
  uVar5 = 0xffffffffffffffff;
LAB_10046f464:
  lVar7 = -0x40;
  do {
    lVar1 = param_1 + uVar5 * 0x90 + lVar7;
    puVar2 = (uint *)(lVar1 + 0xd0);
    if (param_3 != 0) {
      puVar2 = (uint *)(lVar1 + 0x90);
    }
    puVar4 = param_4;
    if (-1 < (int)*puVar2) {
      puVar4 = param_4 + 1;
      *param_4 = *(undefined4 *)(param_1 + (ulong)*puVar2 * 0x90 + 0x40);
      *param_5 = *param_5 + 1;
    }
    lVar7 = lVar7 + 4;
    param_4 = puVar4;
  } while (lVar7 != 0);
  return;
}




uint FUN_10046f4b0(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    uVar1 = *(int *)(param_1 + 0x38) - 1;
    if (0x8a < uVar1) {
      uVar1 = 0x8b;
    }
    piVar3 = (int *)(param_1 + 0x40);
    do {
      if (*piVar3 == param_2) goto LAB_10046f4f4;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x24;
    } while (uVar1 + 1 != uVar2);
  }
  uVar2 = 0xffffffffffffffff;
LAB_10046f4f4:
  return *(uint *)(param_1 + uVar2 * 0x90 + 0x90) >> 0x1f;
}




void FUN_10046f508(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar6 = 0;
    uVar1 = *(int *)(param_1 + 0x38) - 1;
    if (0x8a < uVar1) {
      uVar1 = 0x8b;
    }
    piVar7 = (int *)(param_1 + 0x40);
    do {
      if (*piVar7 == param_2) {
        if (-1 < (int)uVar6) {
          plVar3 = *(long **)(param_1 + 0x28);
          uVar5 = 0;
          if (plVar3 == (long *)0x0) goto LAB_10046f5e0;
          if (*(int *)(param_1 + 0x30) != (int)plVar3[1]) {
            uVar5 = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
            goto LAB_10046f5e0;
          }
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          uVar5 = 0;
          if (lVar4 == 0) goto LAB_10046f5e0;
          lVar4 = *(long *)(lVar4 + 0x18);
          if (lVar4 != 0) goto LAB_10046f5bc;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 0x24;
    } while (uVar1 + 1 != uVar6);
  }
  uVar5 = 0;
  goto LAB_10046f5e0;
  while( true ) {
    uVar5 = 0;
    lVar4 = *(long *)(lVar4 + 0x20);
    if (lVar4 == 0) break;
LAB_10046f5bc:
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184e000) {
      uStack_50 = 0;
      uStack_54 = 0;
      uStack_5c = 0;
      local_58 = 0;
      uStack_64 = 0;
      uStack_6c = 0;
      local_74 = 0;
      uStack_7c = 0;
      local_84 = 0;
      local_8c = 0;
      uStack_88 = 0xffffffff;
      uVar2 = FUN_10046ecd4(param_1,lVar4,piVar7,&uStack_88,&local_8c,100);
      *param_3 = uVar2;
      uVar2 = FUN_10046f688(param_1,lVar4,piVar7);
      *param_4 = uVar2;
      uVar5 = 1;
      break;
    }
  }
LAB_10046f5e0:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar5);
  }
  return;
}




int FUN_10046f688(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = *(int *)(*(long *)(param_3 + 8) + 0x3c);
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 != -1) {
    uVar3 = 1;
    do {
      iVar1 = FUN_10046f688(param_1,param_2,param_1 + (long)iVar1 * 0x90 + 0x40);
      iVar2 = iVar1 + iVar2;
      iVar1 = *(int *)(param_3 + uVar3 * 4 + 0x10);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (iVar1 != -1);
  }
  return iVar2;
}




undefined4 FUN_10046f708(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




int FUN_10046f710(long param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  piVar3 = (int *)0x0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    piVar1 = (int *)(param_1 + lVar4 * 0x1344 + 0x4f00);
    if (*piVar1 != param_2) {
      piVar1 = piVar3;
    }
    lVar4 = 1;
    piVar3 = piVar1;
    bVar2 = false;
  } while (bVar5);
  return piVar1[(long)param_3 * 0xb0 + 0x8e];
}




int FUN_10046f758(long param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  piVar3 = (int *)0x0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    piVar1 = (int *)(param_1 + lVar4 * 0x1344 + 0x4f00);
    if (*piVar1 != param_2) {
      piVar1 = piVar3;
    }
    lVar4 = 1;
    piVar3 = piVar1;
    bVar2 = false;
  } while (bVar5);
  return piVar1[(long)param_3 * 0xb0 + (ulong)param_4 + 0x8f];
}




undefined8 FUN_10046f7a4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010046f7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar1;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
  }
  return 0;
}




bool FUN_10046f7e8(undefined8 param_1,long param_2,int param_3,long param_4,int *param_5)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  
  bVar3 = *(byte *)(param_2 + 0xdc);
  if (bVar3 == 0) {
    return false;
  }
  uVar9 = 0;
  plVar1 = (long *)(param_2 + 0x38);
  bVar4 = true;
  plVar6 = plVar1;
  uVar5 = uVar9;
LAB_10046f804:
  for (; *plVar6 == 0; plVar6 = plVar6 + 1) {
LAB_10046f814:
  }
  if (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    goto LAB_10046f814;
  }
  plVar7 = plVar1;
  uVar9 = uVar5;
  if (*(int *)(*plVar6 + 0x48) == param_3) {
    do {
      if (*plVar7 != 0) {
        if (uVar9 == 0) goto LAB_10046f848;
        uVar9 = uVar9 - 1;
      }
      plVar7 = plVar7 + 1;
    } while( true );
  }
  goto LAB_10046f86c;
LAB_10046f848:
  lVar8 = 0;
  iVar2 = *(int *)(*plVar7 + 0x4c);
  while (*(int *)(param_4 + lVar8) != iVar2) {
    lVar8 = lVar8 + 4;
    if (lVar8 == 0x40) {
      *param_5 = iVar2;
      return bVar4;
    }
  }
LAB_10046f86c:
  uVar9 = uVar5 + 1;
  bVar4 = uVar9 < bVar3;
  plVar6 = plVar1;
  uVar5 = uVar9;
  if (uVar9 == bVar3) {
    return bVar4;
  }
  goto LAB_10046f804;
}




void FUN_10046f894(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_thunk_FUN_10046f894_10149a0a0;
  iVar1 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x54) != DAT_101867788) {
    FUN_10054e0d8();
    iVar1 = DAT_101867788;
  }
  if (*(int *)((long)param_1 + 0x2a4) != iVar1) {
    FUN_10054e0d8(*(int *)((long)param_1 + 0x2a4));
    iVar1 = DAT_101867788;
  }
  if (*(int *)(param_1 + 0x55) != iVar1) {
    FUN_10054e0d8(*(int *)(param_1 + 0x55));
    iVar1 = DAT_101867788;
  }
  if (*(int *)((long)param_1 + 0x2ac) != iVar1) {
    FUN_10054e0d8(*(int *)((long)param_1 + 0x2ac));
  }
  FUN_10049ebc8(param_1 + 0xb);
  FUN_10049eb40(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10046f894(void)

{
  FUN_10046f894();
  return;
}




void FUN_10046f938(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10046f894();
  operator_delete(pvVar1);
  return;
}




void FUN_10046f94c(void)

{
  return;
}




void FUN_10046f950(void)

{
  return;
}




void FUN_10046f954(void)

{
  return;
}




void FUN_10046f958(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    lVar3 = FUN_1010a1540(DAT_10184dac8,0);
    *(long *)(lVar3 + 0x290) = param_3;
    FUN_1010a16e4(param_1,PTR_DAT_1018583c0,*(undefined8 *)(param_3 + 0x158));
    uVar4 = FUN_10003dd10(lVar3,param_3);
    *(undefined8 *)(lVar3 + 0x298) = uVar4;
    uVar2 = FUN_10046fa7c(0,*(undefined8 *)(param_3 + 0x138));
    *(undefined4 *)(lVar3 + 0x2a0) = uVar2;
    uVar2 = FUN_10046fa7c(1,*(undefined8 *)(param_3 + 0x150));
    *(undefined4 *)(lVar3 + 0x2ac) = uVar2;
    uVar2 = FUN_10046fa7c(2,*(undefined8 *)(param_3 + 0x148));
    *(undefined4 *)(lVar3 + 0x2a8) = uVar2;
    uVar2 = FUN_10046fa7c(3,*(undefined8 *)(param_3 + 0x140));
    *(undefined4 *)(lVar3 + 0x2a4) = uVar2;
    lVar5 = **(long **)(param_3 + 0x160);
    plVar1 = *(long **)(param_3 + 0x160);
    while (lVar5 != 0) {
      uVar4 = FUN_1010a0298(lVar3,DAT_1018672d0);
      FUN_10046fb60(uVar4,*plVar1);
      lVar5 = plVar1[1];
      plVar1 = plVar1 + 1;
    }
    if (DAT_101d23a38 != '\0') {
      lVar5 = **(long **)(param_3 + 400);
      plVar1 = *(long **)(param_3 + 400);
      while (lVar5 != 0) {
        uVar4 = FUN_1010a0298(lVar3,DAT_1018673a0);
        FUN_100468a28(uVar4,*plVar1);
        lVar5 = plVar1[1];
        plVar1 = plVar1 + 1;
      }
    }
    FUN_10046fc1c(lVar3);
    FUN_10046fe68(lVar3);
    return;
  }
  return;
}




ulong FUN_10046fa7c(undefined8 param_1,long param_2)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((param_2 == 0) || (iVar2 = FUN_1004d2524(param_2), iVar2 == 0)) {
    uVar5 = (ulong)DAT_101867788;
  }
  else {
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_1006581d8(param_2,&local_48);
    pppuVar1 = (undefined8 ***)local_48;
    if (-1 < local_38) {
      pppuVar1 = &local_48;
    }
    uVar3 = FUN_100658c88(pppuVar1,1);
    if ((int)uVar3 == -1) {
      uVar5 = (ulong)DAT_101867788;
    }
    else {
      local_50 = 0;
      uVar4 = FUN_100658cc4(uVar3,&local_50);
      uVar5 = FUN_10054e0c0(param_1,local_50,uVar4);
      FUN_100658cd8(uVar3,local_50);
      FUN_100658c9c(uVar3);
    }
    if (local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return uVar5;
}




void FUN_10046fb60(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_238 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  plVar3 = *(long **)(param_2 + 0x20);
  puVar2 = (undefined8 *)*plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      local_238[uVar1 & 0xffffffff] = *puVar2;
      puVar2 = (undefined8 *)plVar3[uVar1 + 1];
      uVar1 = uVar1 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  FUN_100471190(0xff7fffff,*(long *)(param_1 + 0x28) + 0x28,local_238,uVar1);
  *(char *)(param_1 + 0x288) = (char)*(undefined4 *)(param_2 + 0x18);
  *(long *)(param_1 + 0x290) = param_2;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10046fc1c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_60;
  void *local_58;
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x290) + 0x178);
  puVar12 = (undefined8 *)*puVar11;
  if (puVar12 != (undefined8 *)0x0) {
    puVar1 = (uint *)(param_1 + 0x58);
    do {
      uVar4 = FUN_1004d2538(*puVar12);
      if ((uVar4 & 1) == 0) {
        pcVar10 = (char *)*puVar12;
        if (pcVar10 == (char *)0x0) {
          uVar6 = 0;
        }
        else {
          cVar7 = *pcVar10;
          uVar6 = 0x811c9dc5;
          if (cVar7 != '\0') {
            uVar6 = 0x811c9dc5;
            do {
              pcVar10 = pcVar10 + 1;
              uVar6 = (uVar6 ^ (int)cVar7) * 0x1000193;
              cVar7 = *pcVar10;
            } while (cVar7 != '\0');
          }
        }
        lVar5 = FUN_100034344(param_1 + 0x28,uVar6);
        uVar3 = FUN_10049ecf4(param_1 + 0x28,puVar11);
        *(undefined4 *)(lVar5 + 4) = uVar3;
      }
      puVar12 = (undefined8 *)puVar12[1];
      puVar9 = (undefined8 *)*puVar12;
      while (puVar9 != (undefined8 *)0x0) {
        pcVar10 = (char *)*puVar9;
        uVar4 = FUN_1004d2538(pcVar10);
        if ((uVar4 & 1) == 0) {
          if (pcVar10 == (char *)0x0) {
            uVar6 = 0;
          }
          else {
            cVar7 = *pcVar10;
            uVar6 = 0x811c9dc5;
            if (cVar7 != '\0') {
              uVar6 = 0x811c9dc5;
              do {
                pcVar10 = pcVar10 + 1;
                uVar6 = (uVar6 ^ (int)cVar7) * 0x1000193;
                cVar7 = *pcVar10;
              } while (cVar7 != '\0');
            }
          }
          uVar8 = *puVar1;
          if (uVar8 == 0) {
LAB_10046fd90:
            local_60 = 0;
            local_58 = (void *)0x0;
            lVar5 = FUN_100034344(puVar1,uVar6);
            uVar3 = FUN_10049ee58(puVar1,&local_60);
            *(undefined4 *)(lVar5 + 4) = uVar3;
            if (local_58 != (void *)0x0) {
              operator_delete__(local_58);
            }
            uVar8 = *puVar1;
            if (uVar8 == 0) goto LAB_10046fe28;
LAB_10046fdc8:
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar6 / uVar8;
            }
            uVar4 = (ulong)(uVar6 - uVar2 * uVar8);
            lVar5 = *(long *)(param_1 + 0x60);
            if (*(uint *)(lVar5 + uVar4 * 8) != uVar6) {
              do {
                if (*(int *)(lVar5 + uVar4 * 8 + 4) == -1) break;
                uVar2 = uVar8;
                if (0 < (int)(uint)uVar4) {
                  uVar2 = (uint)uVar4;
                }
                uVar4 = (ulong)(uVar2 - 1);
              } while (*(uint *)(lVar5 + uVar4 * 8) != uVar6);
              if ((int)uVar4 == -1) goto LAB_10046fe28;
            }
            uVar4 = (ulong)*(uint *)(lVar5 + uVar4 * 8 + 4);
          }
          else {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar6 / uVar8;
            }
            uVar4 = (ulong)(uVar6 - uVar2 * uVar8);
            lVar5 = *(long *)(param_1 + 0x60);
            if (*(uint *)(lVar5 + uVar4 * 8) != uVar6) {
              do {
                if (*(int *)(lVar5 + uVar4 * 8 + 4) == -1) break;
                uVar2 = uVar8;
                if (0 < (int)(uint)uVar4) {
                  uVar2 = (uint)uVar4;
                }
                uVar4 = (ulong)(uVar2 - 1);
              } while (*(uint *)(lVar5 + uVar4 * 8) != uVar6);
              if ((int)uVar4 == -1) goto LAB_10046fd90;
            }
            if (*(int *)(lVar5 + uVar4 * 8 + 4) == -1) goto LAB_10046fd90;
            if (uVar8 != 0) goto LAB_10046fdc8;
LAB_10046fe28:
            uVar4 = 0xffffffff;
          }
          FUN_1004700b4(*(long *)(param_1 + 0x78) + uVar4 * 0x10,puVar11);
        }
        puVar12 = puVar12 + 1;
        puVar9 = (undefined8 *)*puVar12;
      }
      puVar11 = puVar11 + 1;
      puVar12 = (undefined8 *)*puVar11;
    } while (puVar12 != (undefined8 *)0x0);
  }
  return;
}




void FUN_10046fe68(long param_1)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  long *plVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x290) + 200);
  pfVar3 = (float *)*plVar4;
  if (pfVar3 == (float *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    pfVar5 = pfVar3;
    do {
      fVar6 = *pfVar5;
      fVar7 = pfVar5[2];
      pfVar5 = pfVar3;
      if ((float *)plVar4[uVar2 + 1] != (float *)0x0) {
        pfVar5 = (float *)plVar4[uVar2 + 1];
      }
      fVar8 = *pfVar5;
      fVar9 = pfVar5[2];
      lVar1 = param_1 + (uVar2 & 0xffffffff) * 8;
      *(float *)(lVar1 + 0x88) = fVar6;
      *(float *)(lVar1 + 0x8c) = fVar7;
      fVar8 = fVar8 - fVar6;
      fVar7 = fVar7 - fVar9;
      fVar6 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
      *(float *)(lVar1 + 0x188) = fVar7 / fVar6;
      *(float *)(lVar1 + 0x18c) = fVar8 / fVar6;
      pfVar5 = (float *)plVar4[uVar2 + 1];
      uVar2 = uVar2 + 1;
    } while (pfVar5 != (float *)0x0);
  }
  *(int *)(param_1 + 0x288) = (int)uVar2;
  return;
}




void FUN_10046fee8(undefined8 param_1,char *param_2)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  FUN_10046ff48(param_1,local_18);
  return;
}




undefined8 FUN_10046ff48(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
    lVar4 = *(long *)(param_1 + 0x30);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar2) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar3 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar3 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar3 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar2);
      if ((int)uVar5 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar4 + uVar5 * 8 + 4);
    if ((uVar1 != 0xffffffff) && (*(long *)(param_1 + 0x48) != 0)) {
      return *(undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)uVar1 * 8);
    }
  }
  return 0;
}




void FUN_10046ffd0(undefined8 param_1,char *param_2)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  FUN_100470030(param_1,local_18);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_100465eb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100467480();
  return;
}




undefined8 * thunk_FUN_1004618f0(undefined8 *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499ab0;
  param_1[5] = &PTR_FUN_101499ae0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xf) = DAT_101dc0b88;
  puVar2 = (ushort *)(param_1 + 0x11);
  param_1[0x43] = param_1;
  *(undefined2 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x96) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x46] = 0x3f80000000000000;
  param_1[0x49] = 0x3f800000;
  param_1[0x48] = 0;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x264) = 0xff;
  param_1[0x4e] = 0xff00000000;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = uVar1;
  param_1[0x58] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = uVar1;
  *(undefined1 *)((long)param_1 + 0x2fc) = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined2 *)((long)param_1 + 0x301) = 0x43ff;
  *(byte *)((long)param_1 + 0x303) = *(byte *)((long)param_1 + 0x303) & 0xf8;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = FUN_100461cdc;
  param_1[0x1b] = 0;
  *(undefined2 *)((long)param_1 + 0xca) = 0;
  param_1[0x1c] = FUN_100461ce0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 2;
  param_1[0x21] = FUN_100461cf8;
  param_1[0x22] = 0;
  *(undefined2 *)((long)param_1 + 0x102) = 0;
  param_1[0x23] = FUN_100461d80;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x27) = 3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = FUN_100461d98;
  param_1[0x2b] = 0;
  param_1[0x2c] = FUN_100461fe8;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x13a) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 4;
  param_1[0x2f] = FUN_10046201c;
  param_1[0x30] = 0;
  *(undefined2 *)((long)param_1 + 0x172) = 0;
  param_1[0x31] = FUN_100462078;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined2 *)(param_1 + 0x35) = 5;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = FUN_10046207c;
  param_1[0x39] = 0;
  param_1[0x3a] = FUN_100462080;
  param_1[0x3b] = 0;
  *(undefined2 *)((long)param_1 + 0x1aa) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 6;
  param_1[0x3d] = FUN_100462094;
  *(undefined2 *)((long)param_1 + 0x1e2) = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *puVar2 = *puVar2 & 0x8000 | 0x1fff;
  FUN_100462098(puVar2,0,1);
  FUN_100462098(puVar2,0,2);
  FUN_100462098(puVar2,0,3);
  FUN_100462098(puVar2,0,4);
  FUN_100462098(puVar2,0,5);
  FUN_100462098(puVar2,0,6);
  FUN_100462098(puVar2,1,2);
  FUN_100462098(puVar2,1,3);
  FUN_100462098(puVar2,1,4);
  FUN_100462098(puVar2,1,5);
  FUN_100462098(puVar2,1,6);
  FUN_100462098(puVar2,2,1);
  FUN_100462098(puVar2,2,3);
  FUN_100462098(puVar2,2,4);
  FUN_100462098(puVar2,2,5);
  FUN_100462098(puVar2,3,4);
  FUN_100462098(puVar2,3,1);
  FUN_100462098(puVar2,4,1);
  FUN_100462098(puVar2,5,3);
  FUN_100462098(puVar2,5,2);
  FUN_100462098(puVar2,5,4);
  FUN_100462098(puVar2,5,1);
  FUN_100462098(puVar2,5,6);
  FUN_100462098(puVar2,6,1);
  FUN_100462098(puVar2,6,2);
  FUN_100462098(puVar2,6,3);
  FUN_100462098(puVar2,6,4);
  FUN_100462098(puVar2,6,5);
  FUN_10046211c(puVar2,0,0,0);
  return param_1;
}




undefined8 * thunk_FUN_100466d30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499bd0;
  param_1[5] = 0;
  thunk_FUN_10054e4f4(param_1 + 6);
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  *(undefined8 *)((long)param_1 + 0x7bc) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x7c4) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)((long)param_1 + 0x7dc) = 0;
  *(undefined8 *)((long)param_1 + 0x7d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0xff] = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x804) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  *(undefined4 *)((long)param_1 + 0x814) = 0;
  *(byte *)(param_1 + 0x103) = *(byte *)(param_1 + 0x103) & 0xd8;
  return param_1;
}




undefined8 * thunk_FUN_1004684ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_101499cc0;
  param_1[5] = 0;
  uVar2 = DAT_101dc0b88;
  lVar3 = 0x30;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x46) = 0;
  lVar3 = FUN_1010a0298(param_1,DAT_101867390);
  param_1[5] = lVar3;
  *(code **)(lVar3 + 0x1c8) = FUN_100468584;
  *(undefined8 **)(lVar3 + 0x1d0) = param_1;
  *(code **)(lVar3 + 0x1d8) = FUN_100468590;
  *(undefined8 **)(lVar3 + 0x1e0) = param_1;
  *(undefined4 *)(lVar3 + 0x1c4) = 1;
  return param_1;
}




undefined8 * thunk_FUN_100468d88(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_100468ed8_101499cf0;
  param_1[5] = &PTR_FUN_101499d20;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0x2d] = &PTR_FUN_10149da18;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0xbf8000003f800000;
  param_1[0x66] = FUN_100468ebc;
  param_1[0x67] = 0;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfff00000;
  *(ulong *)((long)param_1 + 0x344) = (ulong)*(ushort *)((long)param_1 + 0x34a) << 0x30 | 0x10000;
  *(uint *)((long)param_1 + 0x34c) = *(uint *)((long)param_1 + 0x34c) & 0xf0000000 | 0x8000000;
  return param_1;
}




undefined8 * thunk_FUN_10046c1a8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499e10;
  param_1[5] = &PTR_FUN_101499e48;
  param_1[7] = &PTR_FUN_101499e78;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xbf8000003f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  *(byte *)((long)param_1 + 0x6b) = *(byte *)((long)param_1 + 0x6b) & 0xe0;
  return param_1;
}




undefined8 * thunk_FUN_10046c958(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_101499f50;
  plVar9 = param_1 + 5;
  *plVar9 = (long)&PTR_FUN_10149db08;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((long)param_1 + 0x214) = 0x811c9dc5;
  *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0xfc;
  plVar4 = *(long **)(DAT_101d23a68 + 0x28);
  if (*plVar4 == 0) {
LAB_10046cab4:
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_START__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_START__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_DURATION__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_DURATION__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_PAUSED__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_PAUSED__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_COUNTDOWN_DO_ROUNDING__");
    uVar3 = FUN_100015208("__GAME_MODE_COUNTDOWN_DO_ROUNDING__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    uVar1 = FUN_1004d2524("__GAME_MODE_BOT_DIFFICULTY__");
    uVar3 = FUN_100015208("__GAME_MODE_BOT_DIFFICULTY__",uVar1,0x12345678);
    uVar3 = (**(code **)(param_1[5] + 8))(plVar9,uVar3);
    puVar2 = (undefined4 *)(**(code **)(param_1[5] + 0x10))(plVar9,uVar3);
    *puVar2 = 0;
    return param_1;
  }
  uVar10 = 0xffffffff;
  do {
    plVar4 = plVar4 + 1;
    uVar10 = uVar10 + 1;
  } while (*plVar4 != 0);
  uVar5 = 0;
  uVar11 = 0;
  do {
    uVar7 = uVar5;
    piVar8 = (int *)(param_1 + 6);
    if ((int)uVar5 == 0) {
      uVar6 = 0;
    }
    else {
      do {
        if (*piVar8 == (&DAT_101d90980)[uVar11 + 1 & 0xff]) goto LAB_10046ca8c;
        uVar7 = uVar7 - 1;
        uVar6 = uVar5;
        piVar8 = piVar8 + 1;
      } while (uVar7 != 0);
    }
    *(undefined4 *)((long)param_1 + uVar6 * 4 + 0x30) = (&DAT_101d90980)[uVar11 + 1 & 0xff];
    *(char *)(param_1 + 0x40) = (char)uVar5 + '\x01';
LAB_10046ca8c:
    puVar2 = (undefined4 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    *puVar2 = 0;
    if (uVar10 == uVar11) goto LAB_10046cab4;
    uVar5 = (ulong)*(byte *)(param_1 + 0x40);
    uVar11 = uVar11 + 1;
  } while( true );
}




undefined8 * thunk_FUN_10046e7d4(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a070;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 7) = 0;
  lVar2 = 0x40;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar2);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 4) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0xe) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x12) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x16) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x14) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x1a) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
    lVar2 = lVar2 + 0x90;
    *(undefined8 *)(puVar1 + 0x1e) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x1c) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x22) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  } while ((undefined8 *)(puVar1 + 0x24) != param_1 + 0x9e0);
  pvVar4 = (void *)((long)param_1 + 0x513c);
  lVar2 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar2 * 0x1344 + 0x4f00) = 0xffff;
    _memset_pattern16((void *)((long)param_1 + lVar2 * 0x1344 + 0x4f04),&DAT_101159b60,0x230);
    *(undefined4 *)((long)param_1 + lVar2 * 0x1344 + 0x5134) = 0;
    lVar5 = 6;
    pvVar3 = pvVar4;
    do {
      _memset_pattern16(pvVar3,&DAT_101159b60,0x230);
      *(undefined4 *)((long)pvVar3 + -4) = 0;
      pvVar3 = (void *)((long)pvVar3 + 0x2c0);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x623c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6234) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6220) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6218) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6230) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6228) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6200) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61f8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6210) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x6208) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61e0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61d8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61f0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61e8) = 0;
    lVar5 = lVar2 + 1;
    pvVar4 = (void *)((long)pvVar4 + 0x1344);
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61c0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61b8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61d0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 * 0x1344 + 0x61c8) = 0;
    lVar2 = lVar5;
  } while (lVar5 != 2);
  return param_1;
}

