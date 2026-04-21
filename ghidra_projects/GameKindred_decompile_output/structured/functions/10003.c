// functions/10003 — 669 functions
#include "GameKindred.h"




void FUN_100030034(undefined8 param_1)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = *(undefined8 *)(DAT_101dc2920 + 0xe358);
  local_60 = *(undefined8 *)(DAT_101dc2920 + 0xe350);
  uStack_48 = *(undefined8 *)(DAT_101dc2920 + 0xe368);
  uStack_50 = *(undefined8 *)(DAT_101dc2920 + 0xe360);
  uStack_38 = *(undefined8 *)(DAT_101dc2920 + 0xe378);
  local_40 = *(undefined8 *)(DAT_101dc2920 + 0xe370);
  uStack_28 = *(undefined8 *)(DAT_101dc2920 + 0xe388);
  uStack_30 = *(undefined8 *)(DAT_101dc2920 + 0xe380);
  FUN_100045dc0(&local_60);
  FUN_100045ddc(0);
  FUN_100030090(param_1);
  return;
}




void FUN_100030090(long param_1)

{
  FUN_100136a50();
  if (*(char *)(param_1 + 0xe3a9) != '\0') {
    *(char *)(param_1 + 0xe3a9) = '\0';
    FUN_100101450(0,0);
    FUN_1001014c4(0);
    FUN_100030118(param_1);
  }
  if (*(char *)(param_1 + 0xe3ac) != '\0') {
    FUN_1005341f4(*(undefined8 *)(param_1 + 0x70),PTR_s_screen_talent_refund_101854aa8);
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xe3ac) = 0;
  }
  FUN_1001ad5b4();
  return;
}




void FUN_100030118(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long *plVar6;
  ushort *puVar7;
  
  plVar6 = (long *)(param_1 + 0xe390);
  bVar1 = *(byte *)(param_1 + 0xe3a8);
  if ((bVar1 & 1) != 0) {
    *(byte *)(param_1 + 0xe3a8) = bVar1 ^ 1;
    FUN_100031070(param_1);
    return;
  }
  if ((bVar1 >> 1 & 1) == 0) {
    if ((bVar1 >> 3 & 1) != 0) {
      *(byte *)(param_1 + 0xe3a8) = bVar1 ^ 8;
      FUN_10003116c(param_1);
      return;
    }
    if (*(char *)(param_1 + 0xe3a7) < '\0') {
      plVar6 = (long *)*plVar6;
    }
    FUN_1000304f8(param_1,plVar6,0);
    FUN_100101590();
    uVar3 = FUN_10012f528();
    lVar2 = DAT_101dbd2f8;
    if ((uVar3 & 1) != 0) {
      FUN_10052b2c4();
      return;
    }
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar7);
      *(undefined ***)puVar7 = &PTR_thunk_FUN_10063eeb4_10144b270;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f0e8(0x41000000,puVar7);
    lVar2 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar5 * 0x40);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    puVar4 = (undefined8 *)FUN_10063ee9c();
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_thunk_FUN_10063eeb4_10144bff8;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    puVar4[2] = thunk_FUN_10052b2c4;
    puVar4[4] = param_1;
    FUN_100642b7c(*(undefined8 *)(param_1 + 0x78),puVar7);
  }
  else {
    *(byte *)(param_1 + 0xe3a8) = bVar1 ^ 2;
    FUN_10003113c(param_1);
    *(undefined1 *)(param_1 + 0xe3aa) = 1;
  }
  return;
}




void FUN_100030310(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_a0 [8];
  void *local_98;
  int local_90;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  lVar4 = FUN_100134098();
  if (*(char *)(lVar4 + 0x3e) != '\0') {
    lVar5 = FUN_1004f1a74(0);
    uVar6 = FUN_100327e00();
    lVar7 = FUN_100327f2c(uVar6,0);
    fVar12 = *(float *)(lVar7 + 0x1c);
    uVar6 = FUN_100327e00();
    lVar7 = FUN_100327f2c(uVar6,1);
    fVar11 = *(float *)(lVar7 + 0x1c);
    uVar6 = FUN_100327e00();
    lVar7 = FUN_100327f2c(uVar6,fVar12 < fVar11);
    lVar7 = *(long *)(lVar7 + 0x28);
    if (lVar5 <= lVar7) {
      uVar6 = FUN_1004e0150("PRE_ELO_DECAY_NOTIFICATION_PRE_DECAY",0);
      thunk_FUN_1004e439c(auStack_70,uVar6);
      uVar6 = FUN_1004e0150("PRE_ELO_DECAY_NOTIFICATION_POST_DECAY",0);
      thunk_FUN_1004e439c(auStack_80,uVar6);
      uVar8 = (ulong)*(uint *)(lVar4 + 0x28);
      if (*(uint *)(lVar4 + 0x28) != 0) {
        piVar9 = *(int **)(lVar4 + 0x30);
        piVar10 = piVar9;
        do {
          iVar3 = *piVar10;
          iVar1 = iVar3 + ((int)lVar7 - (int)lVar5);
          if (-1 < iVar1) {
            thunk_FUN_10052b358(auStack_a0);
            puVar2 = auStack_70;
            if (-1 < iVar3) {
              puVar2 = auStack_80;
            }
            local_90 = iVar1;
            FUN_1000153b4(auStack_a0,puVar2);
            FUN_10011cd50(param_1 + 0x60,auStack_a0);
            if (local_98 != (void *)0x0) {
              operator_delete__(local_98);
            }
            uVar8 = (ulong)*(uint *)(lVar4 + 0x28);
            piVar9 = *(int **)(lVar4 + 0x30);
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar9 + uVar8);
      }
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
      }
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
  }
  return;
}




void FUN_100030478(long param_1)

{
  FUN_100030310(param_1 + -0x60);
  return;
}




void FUN_100030480(void)

{
  int iVar1;
  
  iVar1 = FUN_100126c88();
  DAT_101854a7c = DAT_101854a78 * 88.0;
  if (iVar1 == 0) {
    DAT_101854a7c = 88.0;
  }
  DAT_101d236ac = DAT_101854a7c + DAT_101854a7c;
  DAT_101854a80 = 0x431a0000;
  return;
}




undefined1 FUN_1000304e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe3ab);
}




void FUN_1000304ec(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3ab) = 0;
  return;
}




void FUN_1000304f8(long param_1,undefined8 param_2)

{
  void *local_38 [2];
  char local_21;
  
  FUN_100533ed8(*(undefined8 *)(param_1 + 0x70));
  FUN_10001549c(local_38,param_2);
  std::string::operator=((string *)(param_1 + 0xe390),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined1 *)(param_1 + 0xe3a9) = 0;
  return;
}




void FUN_10003055c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f034c();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100030594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x140))();
  return;
}




void FUN_100030598(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f034c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1000304f8(param_1,PTR_s_screen_main_hub_101854a90,1);
                    /* WARNING: Could not recover jumptable at 0x0001000305e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x148))();
  return;
}




void FUN_1000305ec(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f034c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1000304f8(param_1,PTR_s_screen_main_hub_101854a90,1);
                    /* WARNING: Could not recover jumptable at 0x00010003063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x78) + 0x150))();
  return;
}




void FUN_100030640(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  (**(code **)(**(long **)(param_1 + 0x78) + 0x160))();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10026b110();
  }
  if (DAT_101d91170 != (undefined8 *)0x0) {
    puVar3 = &DAT_101d91170;
    puVar2 = DAT_101d91170;
    do {
      if (*(uint *)(puVar2 + 4) >= 0x1346de83) {
        puVar3 = puVar2;
      }
      puVar2 = (undefined8 *)puVar2[*(uint *)(puVar2 + 4) < 0x1346de83];
    } while (puVar2 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar3 != &DAT_101d91170) && (*(uint *)(puVar3 + 4) < 0x1346de84)) &&
       (*(int *)(puVar3 + 5) != 0)) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(puVar3[6] + lVar4))[1])(*(undefined8 *)(puVar3[6] + lVar4));
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar5 < *(uint *)(puVar3 + 5));
    }
  }
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    FUN_10015d3ec();
    FUN_10016474c();
  }
  FUN_10002ff80(param_1);
  return;
}




void FUN_100030714(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xe3ad) != '\0') {
    FUN_10052b3ec(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0xe3ad) = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x78) + 0x158))();
  FUN_10109c330();
  if (*(char *)(param_1 + 0xe3aa) != '\0') {
    *(undefined2 *)(param_1 + 0xe3a9) = 1;
  }
  lVar1 = FUN_10016c2f0();
  if (*(int *)(lVar1 + 0x38) < 1) {
    return;
  }
  lVar1 = FUN_10016c2f0();
  if ((*(int *)(lVar1 + 0x38) != 7) && (lVar1 = FUN_10016c2f0(), *(int *)(lVar1 + 0x38) != 8)) {
    return;
  }
  uVar2 = FUN_10016c2f0();
  FUN_10016bd88(uVar2,1);
  return;
}




void FUN_1000307b8(long param_1)

{
  if (*(char *)(param_1 + 0xe3aa) != '\0') {
    *(undefined2 *)(param_1 + 0xe3a9) = 1;
  }
  return;
}




void FUN_1000307d8(long param_1)

{
  FUN_1001df57c(param_1 + 0x28);
  return;
}




void FUN_1000307e0(long param_1)

{
  FUN_10019cd6c(param_1 + 0x58a0);
  *(uint *)(param_1 + 0x5924) = *(uint *)(param_1 + 0x5924) | 4;
  return;
}




void FUN_100030818(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  ulong uVar10;
  
  bVar4 = param_2[0x17];
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(pbVar7,pbVar9,sVar1), iVar6 == 0)) goto LAB_100030978;
    }
    else {
      if (sVar1 == 0) goto LAB_100030978;
      pbVar7 = param_2;
      if ((uint)*pbVar9 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030978;
        } while (*pbVar7 == *pbVar9);
      }
    }
  }
  bVar5 = *(byte *)(param_1 + 0x5e0f);
  uVar10 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x5e00);
  if (-1 < (char)bVar5) {
    sVar2 = uVar10;
  }
  if (sVar2 == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x5df8);
    puVar3 = pvVar8;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(param_1 + 0x5df8);
    }
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar7,sVar1), iVar6 == 0)) goto LAB_100030978;
    }
    else {
      if (sVar1 == 0) {
LAB_100030978:
        *(uint *)(param_1 + 0x5924) = *(uint *)(param_1 + 0x5924) & 0xfffffffb;
        FUN_10019c8c4(param_1 + 0x58a0);
        return;
      }
      if ((uint)*pbVar7 == ((uint)pvVar8 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x5df9);
        do {
          uVar10 = uVar10 - 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030978;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar7);
      }
    }
  }
  return;
}




void FUN_1000309a0(long param_1)

{
  FUN_10019aa88(param_1 + 0x908);
  return;
}




void FUN_1000309a8(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  ulong uVar10;
  
  bVar4 = param_2[0x17];
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(pbVar7,pbVar9,sVar1), iVar6 == 0)) goto LAB_100030b08;
    }
    else {
      if (sVar1 == 0) goto LAB_100030b08;
      pbVar7 = param_2;
      if ((uint)*pbVar9 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030b08;
        } while (*pbVar7 == *pbVar9);
      }
    }
  }
  bVar5 = *(byte *)(param_1 + 0x5877);
  uVar10 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x5868);
  if (-1 < (char)bVar5) {
    sVar2 = uVar10;
  }
  if (sVar2 == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x5860);
    puVar3 = pvVar8;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(param_1 + 0x5860);
    }
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar7,sVar1), iVar6 == 0)) goto LAB_100030b08;
    }
    else {
      if (sVar1 == 0) {
LAB_100030b08:
        FUN_10019b644(param_1 + 0x908);
        return;
      }
      if ((uint)*pbVar7 == ((uint)pvVar8 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x5861);
        do {
          uVar10 = uVar10 - 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030b08;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar7);
      }
    }
  }
  return;
}




byte FUN_100030b1c(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  ulong uVar10;
  
  bVar4 = param_2[0x17];
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(pbVar7,pbVar9,sVar1), iVar6 == 0)) goto LAB_100030c74;
    }
    else {
      if (sVar1 == 0) goto LAB_100030c74;
      pbVar7 = param_2;
      if ((uint)*pbVar9 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030c74;
        } while (*pbVar7 == *pbVar9);
      }
    }
  }
  bVar5 = *(byte *)(param_1 + 0x5877);
  uVar10 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x5868);
  if (-1 < (char)bVar5) {
    sVar2 = uVar10;
  }
  if (sVar2 == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x5860);
    puVar3 = pvVar8;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(param_1 + 0x5860);
    }
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar7,sVar1), iVar6 == 0)) goto LAB_100030c74;
    }
    else {
      if (sVar1 == 0) {
LAB_100030c74:
        return *(byte *)(param_1 + 0x9bc) >> 2 & 1;
      }
      if ((uint)*pbVar7 == ((uint)pvVar8 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x5861);
        do {
          uVar10 = uVar10 - 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030c74;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar7);
      }
    }
  }
  return 0;
}




void FUN_100030c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x6634) >> 2 & 1) == 0) {
    return;
  }
  FUN_1001905e4(param_1 + 0x5e10);
  FUN_1001900f8(param_1 + 0x5e10,param_2,param_3,0);
  return;
}




void FUN_100030cf0(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  void *pvVar8;
  byte *pbVar9;
  ulong uVar10;
  
  bVar4 = param_2[0x17];
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(pbVar7,pbVar9,sVar1), iVar6 == 0)) goto LAB_100030e50;
    }
    else {
      if (sVar1 == 0) goto LAB_100030e50;
      pbVar7 = param_2;
      if ((uint)*pbVar9 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030e50;
        } while (*pbVar7 == *pbVar9);
      }
    }
  }
  bVar5 = *(byte *)(param_1 + 0x662f);
  uVar10 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x6620);
  if (-1 < (char)bVar5) {
    sVar2 = uVar10;
  }
  if (sVar2 == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x6618);
    puVar3 = pvVar8;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(param_1 + 0x6618);
    }
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar7,sVar1), iVar6 == 0)) goto LAB_100030e50;
    }
    else {
      if (sVar1 == 0) {
LAB_100030e50:
        FUN_1001905e4(param_1 + 0x5e10);
        return;
      }
      if ((uint)*pbVar7 == ((uint)pvVar8 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x6619);
        do {
          uVar10 = uVar10 - 1;
          pbVar7 = pbVar7 + 1;
          if (uVar10 == 0) goto LAB_100030e50;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar7);
      }
    }
  }
  return;
}




void FUN_100030e68(long param_1)

{
  FUN_1001cedd0(param_1 + 0x6638);
  return;
}




void FUN_100030e74(long param_1)

{
  FUN_1001cefb8(param_1 + 0x6638);
  return;
}




void FUN_100030e80(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 != 0) {
    FUN_1001ceeb0();
    return;
  }
  FUN_1001cedd0(param_1 + 0x6638);
  return;
}




void FUN_100030eac(long param_1)

{
  FUN_10002fed8(param_1 + -0x30);
  return;
}




void FUN_100030eb4(undefined8 param_1,int *param_2)

{
  if (*param_2 == 3) {
    FUN_100030f50();
    return;
  }
  if (*param_2 == 2) {
    FUN_100030ed4();
    return;
  }
  return;
}




void FUN_100030ed4(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100533fe4(*(undefined8 *)(param_1 + 0x90));
  if (iVar1 != 0) {
    FUN_1001a4ac8(param_1 + 0xc6d0);
    FUN_100030fdc(param_1);
  }
  iVar1 = FUN_100533fe4(*(undefined8 *)(param_1 + 0x98));
  if (iVar1 != 0) {
    FUN_100031024(param_1);
  }
  FUN_10052ba84();
  FUN_100101450(0,0);
  FUN_1001014c4(0);
  FUN_1000304f8(param_1,PTR_s_screen_match_confirm_101854ab0,0);
  return;
}




void FUN_100030f50(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100533fdc(*(undefined8 *)(param_1 + 0x70));
  iVar2 = FUN_100533e7c(PTR_s_screen_char_select_101854a88);
  if (iVar1 == iVar2) {
    return;
  }
  FUN_100030cf0(param_1,&DAT_101d91198);
  FUN_10052ba84();
  FUN_100101450(0,0);
  FUN_1001014c4(0);
  FUN_1000304f8(param_1,PTR_s_screen_char_select_101854a88,1);
  return;
}




void FUN_100030fdc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100533fe4(*(undefined8 *)(param_1 + 0x90));
  if (iVar1 != 0) {
    FUN_1000304f8(param_1,PTR_s_screen_main_hub_101854a90,1);
    return;
  }
  return;
}




void FUN_100031024(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100533fe4(*(undefined8 *)(param_1 + 0x98));
  if (iVar1 != 0) {
    FUN_1000304f8(param_1,PTR_s_screen_main_hub_101854a90,1);
    return;
  }
  return;
}




void FUN_100031070(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  iVar1 = FUN_10012ced4();
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      pvVar2 = operator_new(0x398);
      uVar3 = thunk_FUN_100226158();
      *(undefined8 *)(param_1 + 0xb0) = uVar3;
      local_28 = FUN_100644a94("UI::EVENT_CLOSED_CHINA_LOADING_SCREEN");
      local_50 = thunk_FUN_100030118;
      local_38 = 0;
      uStack_30 = 0;
      local_40 = 0;
      lStack_48 = param_1;
      FUN_10001554c((long)pvVar2 + 8,&local_50);
      if (*(long *)(param_1 + 0xb0) == 0) {
        return;
      }
    }
    iVar1 = FUN_100642d08();
    if (iVar1 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_1 + 0xb0),1);
    }
    (**(code **)(**(long **)(param_1 + 0x70) + 0x78))
              (*(long **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb0),1);
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x138))(0x3f000000,*(long **)(param_1 + 0xb0),1,4,1);
  }
  return;
}




void FUN_10003113c(undefined8 param_1)

{
  FUN_10012f468();
  FUN_10052ba28();
  FUN_100030118(param_1);
  FUN_100102508(0);
  return;
}




void FUN_10003116c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_100268b44(param_1 + 0xb8,1);
  iVar1 = FUN_10052b78c();
  if ((iVar1 != 0) && (uVar2 = FUN_10052b840(), (uVar2 & 1) == 0)) {
    FUN_10052b784();
    return;
  }
  lVar3 = FUN_10015d3ec();
  FUN_100169cec(lVar3 + 0x18);
  return;
}




void thunk_FUN_100030118(void)

{
  FUN_100030118();
  return;
}




void FUN_1000311ac(long param_1,undefined8 param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 0) {
    pvVar1 = operator_new(0x28);
    lVar3 = FUN_100217fa4(pvVar1,param_2);
    *(long *)(param_1 + 0xa0) = lVar3;
    FUN_100534130(*(undefined8 *)(param_1 + 0x70),PTR_s_screen_talent_refund_101854aa8,
                  *(undefined8 *)(lVar3 + 8));
    local_28 = DAT_101d918b0;
    local_50 = FUN_10003126c;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    lStack_48 = param_1;
    FUN_10001554c(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 8,&local_50);
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  uVar2 = FUN_100533fe4(*(undefined8 *)(lVar3 + 8));
  if ((uVar2 & 1) == 0) {
    FUN_1000304f8(param_1,PTR_s_screen_talent_refund_101854aa8,1);
  }
  return;
}




void FUN_10003126c(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3ac) = 1;
  return;
}




void FUN_10003127c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100031288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x80) + 0x18))();
  return;
}




void FUN_10003128c(long param_1)

{
  FUN_100336c38(param_1 + 0x6720);
  FUN_1003375d0(param_1 + 0x6720,1);
  return;
}




void FUN_1000312bc(long param_1)

{
  FUN_1003375d0(param_1 + 0x6720,0);
  return;
}




void FUN_1000312cc(long param_1,undefined8 *param_2,string *param_3,undefined8 param_4,int param_5)

{
  void **ppvVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 ******ppppppuVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  void *local_70 [2];
  char local_59;
  undefined8 *****local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  if (param_5 != 0) {
    iVar2 = FUN_10030c6ac();
    if (iVar2 != 0) {
      FUN_10030c6a0();
      uVar3 = FUN_10030cef4();
      if ((uVar3 & 1) == 0) {
        uVar6 = FUN_1004e0150("GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TITLE",0);
        pcVar8 = "GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TEXT";
        goto LAB_1000314bc;
      }
    }
    lVar4 = FUN_10015d3ec();
    if ((*(char *)(lVar4 + 0x567c) != '\0') &&
       ((iVar2 = FUN_10016c2fc(), iVar2 == 0 ||
        (lVar4 = FUN_10016c2f0(), *(int *)(lVar4 + 0x38) < 1)))) {
      uVar6 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
      pcVar8 = "MARKET_MUST_REGISTER_DIALOG_TEXT";
LAB_1000314bc:
      uVar9 = FUN_1004e0150(pcVar8,0);
      uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar6,uVar9,uVar10,param_1,thunk_FUN_100031a2c);
      return;
    }
  }
  iVar2 = FUN_100126b4c();
  if (iVar2 == 0) {
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010003137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x168))(plVar5,param_2,param_3,1);
    return;
  }
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar3 = param_2[1];
    if (0xffffffffffffffef < uVar3) {
      FUN_100031c5c();
      FUN_100031a2c();
      return;
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar3 < 0x17) {
    ppppppuVar7 = &local_58;
    uStack_48 = CONCAT17((char)uVar3,(undefined7)uStack_48);
    if (uVar3 == 0) goto LAB_1000313f8;
  }
  else {
    uVar11 = uVar3 + 0x10 & 0xfffffffffffffff0;
    ppppppuVar7 = operator_new(uVar11);
    uStack_48 = uVar11 | 0x8000000000000000;
    local_58 = ppppppuVar7;
    local_50 = uVar3;
  }
  _memcpy(ppppppuVar7,param_2,uVar3);
LAB_1000313f8:
  *(undefined1 *)((long)ppppppuVar7 + uVar3) = 0;
  uVar3 = *(ulong *)(param_3 + 8);
  if (-1 < (char)param_3[0x17]) {
    uVar3 = (ulong)(byte)param_3[0x17];
  }
  if (uVar3 != 0) {
    std::operator+("/",param_3);
    ppvVar1 = local_70[0];
    if (-1 < local_59) {
      ppvVar1 = local_70;
    }
    std::string::append((char *)&local_58,(ulong)ppvVar1);
    if (local_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  ppppppuVar7 = (undefined8 ******)local_58;
  if (-1 < (long)uStack_48) {
    ppppppuVar7 = &local_58;
  }
  FUN_1001db0bc(ppppppuVar7,param_4);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void thunk_FUN_100031a2c(void)

{
  FUN_100031a2c();
  return;
}




void FUN_100031510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *local_c8 [2];
  char local_b1;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  void *local_50;
  char local_39;
  
  uVar1 = FUN_100331578();
  FUN_1003311c0(local_c8,uVar1,param_3);
  FUN_1000315c4(param_1,param_2,local_c8);
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  return;
}




void FUN_1000315c4(long param_1,string *param_2,string *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_1004eef24();
  if (iVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x90);
    if (*(char *)(lVar3 + 0xe27) < '\0') {
      if (*(long *)(lVar3 + 0xe18) != 0) {
        return;
      }
    }
    else if (*(char *)(lVar3 + 0xe27) != '\0') {
      return;
    }
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)param_3[0x17]) {
      uVar1 = (ulong)(byte)param_3[0x17];
    }
    if (uVar1 != 0) {
      std::string::operator=((string *)(lVar3 + 0xe10),param_2);
      std::string::operator=((string *)(*(long *)(param_1 + 0x90) + 0xe28),param_3);
      FUN_1000304f8(param_1,PTR_s_screen_rewards_101854a98,1);
      return;
    }
  }
  return;
}




void FUN_100031670(long param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x90);
  bVar4 = param_2[0x17];
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  bVar5 = *(byte *)(lVar9 + 0xe27);
  sVar2 = *(size_t *)(lVar9 + 0xe18);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pbVar3 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar3 = param_2;
    }
    pbVar7 = *(byte **)(lVar9 + 0xe10);
    if (-1 < (char)bVar5) {
      pbVar7 = (byte *)(lVar9 + 0xe10);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(pbVar3,pbVar7,sVar1), iVar6 == 0)) goto LAB_10003172c;
    }
    else {
      if (sVar1 == 0) {
LAB_10003172c:
        FUN_10026b068(lVar9,param_3);
        return;
      }
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          param_2 = param_2 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar8 == 0) goto LAB_10003172c;
        } while (*param_2 == *pbVar7);
      }
    }
  }
  return;
}




void FUN_100031740(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x90);
  bVar4 = param_2[0x17];
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  bVar5 = *(byte *)(lVar9 + 0xe27);
  sVar2 = *(size_t *)(lVar9 + 0xe18);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pbVar3 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar3 = param_2;
    }
    pbVar7 = *(byte **)(lVar9 + 0xe10);
    if (-1 < (char)bVar5) {
      pbVar7 = (byte *)(lVar9 + 0xe10);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(pbVar3,pbVar7,sVar1), iVar6 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar7 != ((uint)*(byte **)param_2 & 0xff)) {
        return;
      }
      while( true ) {
        uVar8 = uVar8 - 1;
        param_2 = param_2 + 1;
        pbVar7 = pbVar7 + 1;
        if (uVar8 == 0) break;
        if (*param_2 != *pbVar7) {
          return;
        }
      }
    }
    iVar6 = FUN_100533fe4(lVar9);
    if (iVar6 != 0) {
      FUN_1000304f8(param_1,PTR_s_screen_main_hub_101854a90,1);
      return;
    }
  }
  return;
}




void FUN_100031828(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (iVar1 = FUN_100533fe4(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 8)), iVar1 != 0)) {
    FUN_1000304f8(param_1,PTR_s_screen_main_hub_101854a90,1);
  }
  lVar2 = FUN_10030df60();
  if (lVar2 != 0) {
    uVar3 = FUN_10030df60();
    FUN_10030e56c(uVar3,param_2);
    return;
  }
  return;
}




void FUN_100031890(long param_1)

{
  FUN_10026c098(*(undefined8 *)(param_1 + 0x98));
  return;
}




void FUN_100031898(undefined8 param_1)

{
  FUN_1000304f8(param_1,PTR_s_screen_talent_upgrade_101854aa0,1);
  return;
}




void FUN_1000318ac(undefined8 param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice");
  FUN_1000312cc(param_1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10003190c(undefined8 param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/mystery_chests");
  FUN_1000312cc(param_1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10003196c(undefined8 param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"vainglory://Market/MENU_MARKET_TAB_NAME_FREE");
  FUN_1000312cc(param_1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1000319cc(undefined8 param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"vainglory://Market/MENU_MARKET_TAB_NAME_TALENTS");
  FUN_1000312cc(param_1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100031a2c(void)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = DAT_101dc2920;
  FUN_10001549c(local_38,"vainglory://Profile");
  FUN_1000312cc(uVar1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100031a90(void)

{
  return;
}




void FUN_100031a94(void)

{
  return;
}




void FUN_100031a98(void)

{
  return;
}




void FUN_100031a9c(void)

{
  return;
}




void FUN_100031aa0(void)

{
  return;
}




void FUN_100031aa4(void)

{
  return;
}




void FUN_100031aa8(void)

{
  return;
}




void FUN_100031aac(void)

{
  return;
}




void FUN_100031ab0(void)

{
  return;
}




void FUN_100031ab4(void)

{
  return;
}




void FUN_100031ab8(void)

{
  return;
}




void FUN_100031abc(void)

{
  return;
}




void FUN_100031ac0(void)

{
  return;
}




void FUN_100031ac4(void)

{
  return;
}




void FUN_100031ac8(void)

{
  return;
}




void FUN_100031acc(void)

{
  return;
}




void FUN_100031ad0(void)

{
  return;
}




void FUN_100031ad4(void)

{
  return;
}




void FUN_100031ad8(void)

{
  return;
}




void FUN_100031adc(void)

{
  return;
}




void FUN_100031ae0(void)

{
  return;
}




void FUN_100031ae4(void)

{
  return;
}




void FUN_100031ae8(void)

{
  return;
}




void FUN_100031aec(void)

{
  return;
}




void FUN_100031af0(void)

{
  return;
}




void FUN_100031af4(void)

{
  return;
}




void FUN_100031af8(void)

{
  return;
}




void FUN_100031afc(void)

{
  return;
}




void FUN_100031b00(void)

{
  return;
}




void FUN_100031b04(void)

{
  return;
}




void FUN_100031b08(void)

{
  return;
}




void FUN_100031b0c(void)

{
  return;
}




void FUN_100031b10(void)

{
  return;
}




void FUN_100031b14(void)

{
  return;
}




void FUN_100031b18(void)

{
  return;
}




void FUN_100031b1c(void)

{
  return;
}




void FUN_100031b20(void)

{
  return;
}




void FUN_100031b24(void)

{
  return;
}




void FUN_100031b28(void)

{
  return;
}




void FUN_100031b2c(void)

{
  return;
}




void FUN_100031b30(void)

{
  return;
}




void FUN_100031b34(void)

{
  return;
}




void FUN_100031b38(void)

{
  return;
}




void FUN_100031b3c(void)

{
  return;
}




void FUN_100031b40(void)

{
  return;
}




void FUN_100031b44(void)

{
  return;
}




void FUN_100031b48(void)

{
  return;
}




void FUN_100031b4c(void)

{
  return;
}




void FUN_100031b50(void)

{
  return;
}




void FUN_100031b54(void)

{
  return;
}




void FUN_100031b58(void)

{
  return;
}




void FUN_100031b5c(void)

{
  return;
}




void FUN_100031b60(void)

{
  return;
}




void FUN_100031b64(void)

{
  return;
}




void FUN_100031b68(void)

{
  return;
}




void FUN_100031b6c(void)

{
  return;
}




void FUN_100031b70(void)

{
  return;
}




void FUN_100031b74(void)

{
  return;
}




void FUN_100031b78(void)

{
  return;
}




void FUN_100031b7c(void)

{
  return;
}




void FUN_100031b80(void)

{
  return;
}




void FUN_100031b84(void)

{
  return;
}




void FUN_100031b88(void)

{
  return;
}




void FUN_100031b8c(void)

{
  return;
}




void FUN_100031b90(void)

{
  return;
}




void FUN_100031b94(void)

{
  return;
}




void FUN_100031b98(void)

{
  return;
}




void FUN_100031b9c(void)

{
  return;
}




void FUN_100031ba0(void)

{
  return;
}




void FUN_100031ba4(void)

{
  return;
}




void FUN_100031ba8(void)

{
  return;
}




void FUN_100031bac(void)

{
  return;
}




void FUN_100031bb0(void)

{
  return;
}




void FUN_100031bb4(void)

{
  return;
}




void FUN_100031bb8(void)

{
  return;
}




void FUN_100031bbc(void)

{
  return;
}




void FUN_100031bc0(void)

{
  return;
}




void FUN_100031bc4(void)

{
  return;
}




void FUN_100031bc8(void)

{
  return;
}




void FUN_100031bcc(void)

{
  return;
}




void FUN_100031bd0(void)

{
  return;
}




void FUN_100031bd4(void)

{
  return;
}




void FUN_100031bd8(void)

{
  return;
}




void FUN_100031bdc(void)

{
  return;
}




void FUN_100031be0(void)

{
  return;
}




void FUN_100031be4(void)

{
  return;
}




void FUN_100031be8(void)

{
  return;
}




void FUN_100031bec(void)

{
  return;
}




void FUN_100031bf0(void)

{
  return;
}




void FUN_100031bf4(void)

{
  return;
}




void FUN_100031bf8(void)

{
  return;
}




void FUN_100031bfc(void)

{
  return;
}




void FUN_100031c00(void)

{
  return;
}




void FUN_100031c04(void)

{
  return;
}




void FUN_100031c08(void)

{
  return;
}




void FUN_100031c0c(void)

{
  return;
}




void FUN_100031c10(void)

{
  return;
}




void FUN_100031c14(void)

{
  return;
}




void FUN_100031c18(void)

{
  return;
}




void FUN_100031c1c(void)

{
  return;
}




void FUN_100031c20(void)

{
  return;
}




void FUN_100031c24(void)

{
  return;
}




void FUN_100031c28(void)

{
  return;
}




void FUN_100031c2c(void)

{
  return;
}




void FUN_100031c30(void)

{
  return;
}




void FUN_100031c34(void)

{
  return;
}




void FUN_100031c38(void)

{
  return;
}




void FUN_100031c3c(void)

{
  return;
}




void FUN_100031c40(void)

{
  return;
}




void FUN_100031c44(void)

{
  return;
}




void FUN_100031c48(void)

{
  return;
}




undefined8 FUN_100031c4c(void)

{
  return 0;
}




void FUN_100031c54(void)

{
  return;
}




void FUN_100031c58(void)

{
  return;
}




void FUN_100031c5c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100031c68(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100031c68_101460750;
  if (*(char *)((long)param_1 + 0x81f) < '\0') {
    operator_delete((void *)param_1[0x101]);
  }
  thunk_FUN_1001cec4c(param_1 + 0xe4);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100031d78(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100031dfc(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1000311ac(long param_1,undefined8 param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  code *pcStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 0) {
    pvVar1 = operator_new(0x28);
    lVar3 = FUN_100217fa4(pvVar1,param_2);
    *(long *)(param_1 + 0xa0) = lVar3;
    FUN_100534130(*(undefined8 *)(param_1 + 0x70),PTR_s_screen_talent_refund_101854aa8,
                  *(undefined8 *)(lVar3 + 8));
    uStack_28 = DAT_101d918b0;
    pcStack_50 = FUN_10003126c;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    lStack_48 = param_1;
    FUN_10001554c(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 8,&pcStack_50);
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  uVar2 = FUN_100533fe4(*(undefined8 *)(lVar3 + 8));
  if ((uVar2 & 1) == 0) {
    FUN_1000304f8(param_1,PTR_s_screen_talent_refund_101854aa8,1);
  }
  return;
}




void FUN_100031dfc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100031e78(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_100031ee8(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_100031f58(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100031ffc(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void FUN_100031fd8(undefined8 param_1,int *param_2)

{
  if (*param_2 == 2) {
    FUN_1000304f8(param_1,PTR_s_screen_main_hub_101854a90,1);
    return;
  }
  return;
}




void FUN_100031ffc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void thunk_FUN_100030eb4(undefined8 param_1,int *param_2)

{
  if (*param_2 == 3) {
    FUN_100030f50();
    return;
  }
  if (*param_2 == 2) {
    FUN_100030ed4();
    return;
  }
  return;
}




void FUN_100032080(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100032088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100032090(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1000320a4(long param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000320b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_1000320b8(void)

{
  return;
}




void FUN_1000320bc(void)

{
  if ((DAT_10184de38 & 1) == 0) {
    DAT_10184de30 = DAT_101872e38;
    DAT_10184de38 = 1;
  }
  return;
}




bool FUN_1000320e8(void)

{
  return DAT_101dc2928 != 0;
}




undefined8 FUN_1000320fc(void)

{
  return DAT_101dc2928;
}




void FUN_100032108(undefined8 param_1)

{
  if (DAT_101dc2928 != 0) {
    FUN_100032120(DAT_101dc2928,param_1);
    return;
  }
  return;
}




undefined8 FUN_100032120(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  FUN_1003467f8();
  iVar2 = FUN_10034cfc0();
  if (-1 < iVar2) {
    uVar4 = 0;
    do {
      if (((*(uint *)(param_1 + 0x2c0) >> (ulong)(uVar4 & 0x1f) & 1) != 0) &&
         (uVar3 = FUN_1003dcd70(*(undefined8 *)(param_2 + 0x80),uVar4), (uVar3 & 1) != 0)) {
        return 1;
      }
      uVar1 = uVar4 + 1;
      uVar4 = uVar1 & 0xff;
      FUN_1003467f8();
      iVar2 = FUN_10034cfc0();
    } while ((int)(uVar1 & 0xff) <= iVar2);
  }
  return 0;
}




void FUN_100032198(undefined8 param_1)

{
  if (DAT_101dc2928 != 0) {
    FUN_1000321b0(DAT_101dc2928,param_1);
    return;
  }
  return;
}




undefined8 FUN_1000321b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  FUN_1003467f8();
  iVar2 = FUN_10034cfc0();
  if (-1 < iVar2) {
    uVar4 = 0;
    do {
      if (((*(uint *)(param_1 + 0x2c0) >> (ulong)(uVar4 & 0x1f) & 1) != 0) &&
         (uVar3 = FUN_1003dcd70(param_2,uVar4), (uVar3 & 1) != 0)) {
        return 1;
      }
      uVar1 = uVar4 + 1;
      uVar4 = uVar1 & 0xff;
      FUN_1003467f8();
      iVar2 = FUN_10034cfc0();
    } while ((int)(uVar1 & 0xff) <= iVar2);
  }
  return 0;
}




undefined4 FUN_100032228(void)

{
  if (DAT_101dc2928 != 0) {
    return *(undefined4 *)(DAT_101dc2928 + 700);
  }
  return 0;
}




undefined4 FUN_100032244(long param_1)

{
  return *(undefined4 *)(param_1 + 700);
}




void FUN_10003224c(void)

{
  return;
}




void FUN_100032250(void)

{
  return;
}




undefined8 * FUN_100032254(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_100032b88_10144c040;
  puVar2 = (ushort *)(param_1 + 7);
  param_1[5] = &PTR_FUN_10144c070;
  param_1[0x24] = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = param_1 + 0x25;
  param_1[0x53] = param_1;
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) & 0x8000 | 0x3ff;
  param_1[0x26] = 0;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((long)param_1 + 700) = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(ushort *)((long)param_1 + 0x2c4) = *(ushort *)((long)param_1 + 0x2c4) & 0xf8ff;
  param_1[9] = FUN_1000324d8;
  param_1[10] = 0;
  param_1[0xb] = FUN_100032544;
  param_1[0xc] = 0;
  param_1[0xd] = FUN_100032578;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0x10] = FUN_1000325b8;
  param_1[0x11] = 0;
  param_1[0x12] = FUN_100032614;
  param_1[0x13] = 0;
  param_1[0x14] = thunk_FUN_10014b3c4;
  param_1[0x15] = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = FUN_10003263c;
  param_1[0x1a] = 0;
  param_1[0x1b] = FUN_1000328d8;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *puVar2 = *puVar2 & 0x8000 | 0x13ff;
  FUN_100032a08(puVar2,0,1);
  FUN_100032a08(puVar2,0,2);
  FUN_100032a08(puVar2,1,0);
  FUN_100032a08(puVar2,1,2);
  FUN_100032a08(puVar2,1,3);
  FUN_100032a08(puVar2,2,3);
  FUN_100032a8c(puVar1,0,0,0,FUN_100032adc,0,0,0);
  FUN_100032a8c(puVar1,1,0,0,thunk_FUN_100121ac0,0,0,0);
  FUN_100032a8c(puVar1,2,0,0,0,0,0,0);
  FUN_100032a8c(puVar1,3,0,0,0,0,0,0);
  FUN_100032b04(puVar1,0,1);
  FUN_100032b04(puVar1,1,2);
  FUN_100032b04(puVar1,1,0);
  FUN_100032b04(puVar1,2,0);
  FUN_100032b04(puVar1,2,3);
  DAT_101dc2928 = param_1;
  return param_1;
}




void FUN_1000324d8(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_10034cb58();
  if (iVar1 != 0) {
    FUN_10003366c(param_1);
    return;
  }
  if (((*(byte *)(param_1 + 0x2c5) >> 1 & 1) == 0) &&
     (lVar2 = FUN_10002ea68(*(undefined8 *)(DAT_101dc2928 + 0x2b0)), lVar2 != 0)) {
    *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) | 0x200;
    FUN_100121bc8();
    FUN_100105004();
    return;
  }
  return;
}




void FUN_100032544(long param_1)

{
  FUN_100144650(*(undefined8 *)(param_1 + 0x2a8));
  FUN_100101620();
  *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) & 0xfdff;
  return;
}




void FUN_100032578(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x2b0);
  uVar1 = FUN_10002e614(uVar2);
  FUN_10002d7b8(0,uVar2,uVar1);
  FUN_1001446f4(*(undefined8 *)(param_1 + 0x2a8));
  FUN_100105060();
  return;
}




void FUN_1000325b8(long param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  iVar1 = FUN_10034cb58();
  if (iVar1 != 0) {
    FUN_10003366c(param_1);
  }
  if ((*(byte *)(param_1 + 0x2c5) & 1) == 0) {
    fVar2 = (float)FUN_1010a1cd4();
    dVar3 = (double)FUN_100346804();
    *(float *)(param_1 + 700) = (float)((double)*(float *)(param_1 + 700) + (double)fVar2 * dVar3);
  }
  FUN_10014b440();
  return;
}




void FUN_100032614(void)

{
  FUN_100147b78();
  FUN_100147b9c(0xbf800000,0x3e99999a);
  FUN_10014b330();
  return;
}




void FUN_1000328d8(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  string *psVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 local_78 [2];
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  void *local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  
  FUN_1003467f8();
  iVar1 = FUN_10034cdd0();
  if (((iVar1 != 0) && (uVar3 = FUN_10034cb58(), (uVar3 & 1) == 0)) &&
     (iVar1 = FUN_10034ed9c(), iVar1 != 0)) {
    uVar7 = 0;
    do {
      uVar4 = FUN_10034ee54(uVar7);
      if ((((int)uVar4 != -1) && (uVar3 = FUN_10034ea2c(), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_10034e9d8(uVar4), (uVar3 & 1) == 0)) {
        local_70 = (void *)0x0;
        uStack_68 = 0;
        local_60 = 0;
        FUN_1004e313c(&local_58);
        local_78[0] = 0;
        psVar5 = (string *)FUN_100345940(uVar4);
        std::string::operator=((string *)&local_70,psVar5);
        uVar6 = FUN_10034e42c(uVar4);
        FUN_1000153b4(&local_58,uVar6);
        local_48 = FUN_10034e794(uVar4);
        uVar6 = FUN_10034ee90();
        local_44 = FUN_10034ec24(uVar6,uVar4);
        local_43 = FUN_10034ec3c(uVar4);
        FUN_10011193c(local_78);
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_58 = 0;
          local_50 = (void *)0x0;
        }
        if (local_60 < 0) {
          operator_delete(local_70);
        }
      }
      uVar7 = uVar7 + 1;
      uVar2 = FUN_10034ed9c();
    } while (uVar7 < uVar2);
  }
  FUN_1001478ec();
  return;
}




void FUN_100032a08(ushort *param_1,uint param_2,uint param_3)

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
      if (*puVar6 == param_2) goto LAB_100032a3c;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_100032a3c:
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




void FUN_100032a8c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + ((ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x48) = FUN_100033a74;
  *(code **)(lVar1 + 0x50) = FUN_100033a74;
  *(code **)(lVar1 + 0x58) = FUN_100033a74;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x178) =
       *(ushort *)(param_1 + 0x178) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x178) & 0x83ff;
  return;
}




void FUN_100032adc(void)

{
  FUN_1010a197c(DAT_10184dd68);
  FUN_1010a197c(DAT_10184de60);
  return;
}




void FUN_100032b04(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f;
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    uVar1 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_2) goto LAB_100032b38;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar3 != uVar1);
    uVar1 = 0xffffffff;
LAB_100032b38:
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_3) {
        if ((int)uVar1 == -1) {
          return;
        }
        param_1 = param_1 + (long)(int)uVar1 * 0x58;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar4 & 0x1f);
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar2 != uVar4);
  }
  return;
}




void FUN_100032b88(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100032b88_10144c040;
  param_1[5] = &PTR_FUN_10144c070;
  FUN_10014b3c4();
  DAT_101dc2928 = 0;
  FUN_100033a10(param_1 + 0x25);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_100032b88(void)

{
  FUN_100032b88();
  return;
}




void FUN_100032be0(long param_1)

{
  FUN_100032b88(param_1 + -0x28);
  return;
}




void FUN_100032be8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100032b88();
  operator_delete(pvVar1);
  return;
}




void FUN_100032bfc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100032b88(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100032c14(long param_1)

{
  long lVar1;
  
  DAT_10184de40 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de40 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de40 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100032254;
  *(code **)(lVar1 + 0xb8) = FUN_100033a9c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de40;
  *(undefined4 *)(lVar1 + 0xa8) = 0x2c8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,0,FUN_100032cc8,0);
  FUN_1010a0944(param_1,1,FUN_100032dc0,0);
  FUN_1010a0944(param_1,4,FUN_100032de8,0);
  return;
}




void FUN_100032cc8(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 **local_38 [2];
  char local_21;
  
  FUN_100104f4c();
  FUN_1003467e4(local_38);
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_1010a15e0(pppuVar1,0,0xffffffff,param_1);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_100104fa8();
  uVar2 = FUN_1010a0298(param_1,DAT_10184de50);
  FUN_1003467f8();
  uVar3 = FUN_10034cd30();
  FUN_1010a15e0(uVar3,0,1,uVar2);
  FUN_1000607a8();
  uVar2 = FUN_1010a1540(DAT_10184de20,param_1);
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  FUN_10002e4e0(0x44bb8000);
  FUN_10109c330();
  FUN_1010a1958(local_38,1,DAT_10184dac8,0);
  lVar4 = FUN_1003e10f0();
  FUN_100490a74(*(undefined8 *)(lVar4 + 0x140),local_38[0]);
  lVar4 = FUN_1003e10f0();
  FUN_100490a74(*(undefined8 *)(lVar4 + 0x148),local_38[0]);
  return;
}




void FUN_100032dc0(void)

{
  FUN_10016a678();
  FUN_1000330d4();
  FUN_1010a152c(0);
  FUN_1000608bc();
  FUN_10052c2b0();
  FUN_1003df438();
  return;
}




void FUN_100032de8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  FUN_10002e54c(*(undefined8 *)(param_4 + 0x2b0));
  FUN_100045dc0();
  FUN_10002e51c(*(undefined8 *)(param_4 + 0x2b0));
  FUN_100045ddc();
  local_30 = FUN_10002e594(*(undefined8 *)(param_4 + 0x2b0));
  uStack_2c = param_2;
  local_28 = param_3;
  uVar1 = FUN_10002e5ac(*(undefined8 *)(param_4 + 0x2b0));
  uVar2 = FUN_10002e5dc(*(undefined8 *)(param_4 + 0x2b0));
  FUN_10052c2bc(&local_30,uVar1,uVar2);
  FUN_100033430(param_4 + 0x38);
  FUN_100033474(param_4 + 0x128);
  return;
}




void FUN_100032e68(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2a8) = param_2;
  FUN_100032ea4(param_1 + 0x38,0,0,0);
  FUN_100032fc0(param_1 + 0x128,0);
  return;
}




void FUN_100032ea4(ushort *param_1,uint param_2)

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
      if (*puVar5 == param_2) goto LAB_100032ee8;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_100032ee8:
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
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
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
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x000100032f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_100032fc0(int *param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  if ((uVar2 >> 10 & 0x1f) != 0) {
    uVar3 = 0;
    piVar5 = param_1 + 4;
    do {
      if (*piVar5 == param_2) goto LAB_100033004;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 0x16;
    } while ((uVar2 >> 10 & 0x1f) != uVar3);
  }
  uVar3 = 0x1f;
LAB_100033004:
  uVar4 = (ulong)uVar2 & 0x1f;
  if ((uint)uVar4 == 0x1f) {
    uVar2 = uVar2 & 0xfc1f;
  }
  else {
    if (uVar3 == (uint)uVar4) {
      return;
    }
    if (((uint)param_1[uVar4 * 0x16 + 0x18] >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x5e) = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar4 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar4 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar4 * 0x16 + 0x10),uVar1);
    uVar2 = *(ushort *)(param_1 + 0x5e);
  }
  uVar3 = uVar3 & 0x1f;
  *(ushort *)(param_1 + 0x5e) = (ushort)uVar3 | uVar2 & 0xfc00 | 0x3e0;
  if (uVar3 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000330d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar3 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 0xc),uVar1);
  return;
}




void FUN_1000330d4(void)

{
  FUN_100345584();
  FUN_1010a197c(DAT_10184dd68);
  FUN_1010a197c(DAT_10184dc48);
  FUN_1010a197c(DAT_10184dac8);
  FUN_1010a197c(DAT_10184de20);
  FUN_1010a197c(DAT_10184de70);
  FUN_1010a197c(DAT_10184dd48);
  FUN_1010a197c(DAT_10184dd58);
  FUN_1010a197c(DAT_10184de80);
  return;
}




void FUN_100033144(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x38) & 0x1f;
  if (((int)uVar1 != 0x1f) && (*(short *)(param_1 + uVar1 * 0x38 + 0x40) == 1)) {
    FUN_100032fc0(param_1 + 0x128,0);
    FUN_1001478d8();
    return;
  }
  return;
}




void FUN_10003318c(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  
  *(char *)(param_1 + 0x2c4) = (char)param_2;
  *(undefined4 *)(param_1 + 0x2b8) = param_3;
  uVar2 = FUN_10034cb58();
  if ((uVar2 & 1) == 0) {
    FUN_1003467f8();
    uVar2 = FUN_10034cde8();
    if ((uVar2 & 1) == 0) {
      FUN_1003467f8();
      iVar1 = FUN_10034cde0();
      if (iVar1 == 0) {
        FUN_10034ee90();
        FUN_100345d90();
        iVar1 = FUN_100345bbc();
        if (iVar1 != param_2) {
          FUN_1001016d8();
          goto LAB_1000331e0;
        }
      }
    }
  }
  FUN_10010167c();
LAB_1000331e0:
  FUN_100032ea4(param_1 + 0x38,2,0,0);
  FUN_100032fc0(param_1 + 0x128,3);
  return;
}




void FUN_100033210(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  FUN_100032fc0(param_2 + 0x128,2);
  FUN_10034cc50(param_3);
  FUN_10034cc6c();
  FUN_1001148bc();
  FUN_1001162b8();
  FUN_100116e40();
  *(undefined4 *)(param_2 + 700) = param_1;
  FUN_10003330c(local_58,&DAT_101d91198);
  FUN_10003330c(local_70,&DAT_101d91198);
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    std::string::operator=((string *)local_58,(string *)(lVar2 + 0xa0));
    FUN_1004ef16c(local_70);
  }
  uVar3 = FUN_1003467f8();
  FUN_10010231c(uVar3,local_58);
  FUN_1003467f8();
  if ((param_4 & 1) == 0) {
    FUN_100102ec8();
  }
  else {
    FUN_100103048();
  }
  uVar4 = FUN_100147980();
  if ((uVar4 & 1) == 0) {
    FUN_10011ef04(local_70,local_58);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




undefined8 * FUN_10003330c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar2 = param_2[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_100033a04();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100033390;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar3);
    param_1[1] = uVar2;
    param_1[2] = uVar3 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,param_2,uVar2);
LAB_100033390:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  return param_1;
}




void FUN_1000333b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x38) & 0x1f;
  if ((((int)uVar2 != 0x1f) && (*(short *)(param_1 + uVar2 * 0x38 + 0x40) == 0)) &&
     ((iVar1 = FUN_10034cb58(), iVar1 == 0 || ((*(byte *)(param_1 + 0x2c5) >> 1 & 1) != 0)))) {
    FUN_100032ea4((ushort *)(param_1 + 0x38),1,0,0);
  }
  *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) | 0x400;
  return;
}




void FUN_100033420(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 700) = param_1;
  return;
}




undefined8 FUN_100033428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}




void FUN_100033430(ushort *param_1)

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
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010003346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_100033474(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x5e) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000334b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + uVar2 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar2 * 0x16 + 6),
             *(undefined8 *)(param_1 + uVar2 * 0x16 + 8),uVar1);
  return;
}




bool FUN_1000334b8(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x38) & 0x1f;
  if ((int)uVar1 == 0x1f) {
    return false;
  }
  return *(short *)(param_1 + uVar1 * 0x38 + 0x40) == 1;
}




bool FUN_1000334e8(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x38) & 0x1f;
  if ((int)uVar1 == 0x1f) {
    return false;
  }
  return *(short *)(param_1 + uVar1 * 0x38 + 0x40) == 2;
}




bool FUN_100033518(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x38) & 0x1f;
  if ((int)uVar1 == 0x1f) {
    return false;
  }
  return *(short *)(param_1 + uVar1 * 0x38 + 0x40) == 3;
}




void FUN_100033548(long param_1)

{
  thunk_FUN_100116f88();
  FUN_100033580(param_1);
  FUN_100032ea4(param_1 + 0x38,3,0,0);
  return;
}




void FUN_100033580(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  FUN_1003467f8();
  iVar2 = FUN_10034ce60();
  if ((iVar2 != 0) && (fVar4 = (float)FUN_10034cd14(), 0.0 <= fVar4)) {
    FUN_1003467f8();
    uVar3 = FUN_10034cde0();
    if (((uVar3 & 1) == 0) &&
       (bVar1 = *(byte *)(param_1 + 0x2c4), uVar3 = FUN_10034f06c(), uVar3 == bVar1)) {
      FUN_10034cd14();
      FUN_1001305e4();
      return;
    }
  }
  return;
}




void FUN_1000335e0(long param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x2a0) & 0x1f;
  bVar1 = (int)uVar3 == 0x1f;
  if (param_2 == 0) {
    if (bVar1) {
      return;
    }
    if (1 < *(int *)(param_1 + uVar3 * 0x58 + 0x138) - 1U) {
      return;
    }
    FUN_100032ea4(param_1 + 0x38,0,0,0);
    uVar2 = 0;
  }
  else {
    if ((bVar1) || (*(int *)(param_1 + uVar3 * 0x58 + 0x138) != 0)) {
      return;
    }
    uVar2 = 1;
  }
  FUN_100032fc0(param_1 + 0x128,uVar2);
  return;
}




void FUN_10003366c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(ushort *)(param_1 + 0x2c4) >> 9 & 1) == 0) {
    FUN_10034ef08();
    lVar1 = FUN_100345d90();
    if (lVar1 != 0) {
      FUN_10002d594(*(undefined8 *)(param_1 + 0x2b0));
      lVar2 = *(long *)(param_1 + 0x2b0);
      FUN_10002e6b4(*(undefined4 *)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x74),
                    *(undefined4 *)(lVar2 + 0x78),lVar2,lVar1,1);
      FUN_10034cb78(*(undefined4 *)(lVar1 + 0x260));
      *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) | 0x200;
      FUN_100121bc8();
      FUN_100105004();
      return;
    }
  }
  else if ((*(ushort *)(param_1 + 0x2c4) >> 10 & 1) != 0) {
    FUN_100032ea4(param_1 + 0x38,1,0,0);
    return;
  }
  return;
}




void FUN_100033704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (((int)param_2 != -1) && (lVar1 = FUN_100345d90(param_2), lVar1 != 0)) {
    FUN_10002e6b4(0,0,0,*(undefined8 *)(param_1 + 0x2b0),lVar1,param_3);
    FUN_10002e8e0(*(undefined8 *)(param_1 + 0x2b0));
    FUN_10034cb78(param_2);
    return;
  }
  return;
}




void FUN_10003378c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  iVar1 = FUN_10034cb58();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x260);
    iVar2 = FUN_10034ee90();
    if (iVar1 == iVar2) {
      FUN_10002d594(*(undefined8 *)(DAT_101dc2928 + 0x2b0));
      lVar7 = *(long *)(DAT_101dc2928 + 0x2b0);
      FUN_10002e6b4(*(undefined4 *)(lVar7 + 0x70),*(undefined4 *)(lVar7 + 0x74),
                    *(undefined4 *)(lVar7 + 0x78),lVar7,param_1,1);
      FUN_1010a197c(DAT_10184da98);
      uVar3 = FUN_1010a0298(param_1,DAT_10184da98);
      FUN_1000596fc(*(undefined4 *)(DAT_101dc2928 + 700),uVar3,param_1);
      uVar4 = FUN_100147980();
      FUN_100059c40(uVar3,uVar4);
      uVar6 = (ulong)*(ushort *)(DAT_101dc2928 + 0x38) & 0x1f;
      if (((int)uVar6 == 0x1f) || (*(short *)(DAT_101dc2928 + uVar6 * 0x38 + 0x40) != 1)) {
        FUN_100032ea4((ushort *)(DAT_101dc2928 + 0x38),0,0,0);
      }
      lVar7 = DAT_101dc2928;
      uVar3 = FUN_100345bbc(param_1);
      FUN_100142ce0(1);
      FUN_100142c8c(uVar3);
      *(int *)(lVar7 + 0x2c0) = 1 << (ulong)((uint)uVar3 & 0x1f);
    }
    else {
      FUN_10034ee90();
      lVar7 = FUN_100345d90();
      if (lVar7 != 0) {
        for (lVar5 = *(long *)(lVar7 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
          if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184da98) {
            FUN_10005a244(lVar5,lVar7);
            return;
          }
        }
      }
    }
  }
  else {
    for (lVar7 = *(long *)(DAT_101dc2928 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_10184de60) goto LAB_1000337ec;
    }
    lVar7 = FUN_1010a0298(DAT_101dc2928);
    FUN_10005e0b8();
LAB_1000337ec:
    lVar5 = DAT_101dc2928;
    FUN_100142ce0(1);
    FUN_100142cb0();
    *(undefined4 *)(lVar5 + 0x2c0) = 0xfffffffe;
    if ((param_1 != 0) && ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0)) {
      FUN_10005e0fc(lVar7,param_1);
      return;
    }
  }
  return;
}




bool FUN_100033960(long param_1)

{
  return *(long *)(param_1 + 0x2b0) != 0;
}




void FUN_100033970(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_10034cb58();
  if (iVar1 == 0) {
    FUN_10034ee90();
    lVar2 = FUN_100345d90();
    if (lVar2 != 0) {
      FUN_100466654(lVar2,param_2);
      return;
    }
  }
  else {
    for (lVar2 = *(long *)(DAT_101dc2928 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184de60) {
        FUN_10005e104(lVar2,param_2);
        return;
      }
    }
  }
  return;
}




long FUN_1000339f4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_1000339fc(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100033a04(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




int * FUN_100033a10(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  *(ushort *)(param_1 + 0x5e) = uVar2 | 0x3e0;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0x1f) {
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar3);
  }
  return param_1;
}




void FUN_100033a74(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(param_1 + ((long)param_3 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100033a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




undefined8 * thunk_FUN_100032254(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_100032b88_10144c040;
  puVar2 = (ushort *)(param_1 + 7);
  param_1[5] = &PTR_FUN_10144c070;
  param_1[0x24] = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = param_1 + 0x25;
  param_1[0x53] = param_1;
  *(ushort *)(param_1 + 0x54) = *(ushort *)(param_1 + 0x54) & 0x8000 | 0x3ff;
  param_1[0x26] = 0;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((long)param_1 + 700) = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(ushort *)((long)param_1 + 0x2c4) = *(ushort *)((long)param_1 + 0x2c4) & 0xf8ff;
  param_1[9] = FUN_1000324d8;
  param_1[10] = 0;
  param_1[0xb] = FUN_100032544;
  param_1[0xc] = 0;
  param_1[0xd] = FUN_100032578;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0x10] = FUN_1000325b8;
  param_1[0x11] = 0;
  param_1[0x12] = FUN_100032614;
  param_1[0x13] = 0;
  param_1[0x14] = thunk_FUN_10014b3c4;
  param_1[0x15] = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x16) = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = FUN_10003263c;
  param_1[0x1a] = 0;
  param_1[0x1b] = FUN_1000328d8;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *puVar2 = *puVar2 & 0x8000 | 0x13ff;
  FUN_100032a08(puVar2,0,1);
  FUN_100032a08(puVar2,0,2);
  FUN_100032a08(puVar2,1,0);
  FUN_100032a08(puVar2,1,2);
  FUN_100032a08(puVar2,1,3);
  FUN_100032a08(puVar2,2,3);
  FUN_100032a8c(puVar1,0,0,0,FUN_100032adc,0,0,0);
  FUN_100032a8c(puVar1,1,0,0,thunk_FUN_100121ac0,0,0,0);
  FUN_100032a8c(puVar1,2,0,0,0,0,0,0);
  FUN_100032a8c(puVar1,3,0,0,0,0,0,0);
  FUN_100032b04(puVar1,0,1);
  FUN_100032b04(puVar1,1,2);
  FUN_100032b04(puVar1,1,0);
  FUN_100032b04(puVar1,2,0);
  FUN_100032b04(puVar1,2,3);
  DAT_101dc2928 = param_1;
  return param_1;
}




void FUN_100033a9c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100033aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100033aa8(void)

{
  if ((DAT_10184de48 & 1) == 0) {
    DAT_10184de40 = DAT_101872e38;
    DAT_10184de48 = 1;
  }
  return;
}




void FUN_100033ad4(void)

{
  if ((DAT_10184de58 & 1) == 0) {
    DAT_10184de50 = DAT_101872e38;
    DAT_10184de58 = 1;
  }
  return;
}




void FUN_100033b00(void)

{
  if ((DAT_10184de28 & 1) == 0) {
    DAT_10184de20 = DAT_101872e38;
    DAT_10184de28 = 1;
  }
  return;
}




void FUN_100033b2c(void)

{
  if ((DAT_10184dad0 & 1) == 0) {
    DAT_10184dac8 = DAT_101872e38;
    DAT_10184dad0 = 1;
  }
  return;
}




void FUN_100033b58(void)

{
  if ((DAT_10184de68 & 1) == 0) {
    DAT_10184de60 = DAT_101872e38;
    DAT_10184de68 = 1;
  }
  return;
}




void FUN_100033b84(void)

{
  if ((DAT_10184daa0 & 1) == 0) {
    DAT_10184da98 = DAT_101872e38;
    DAT_10184daa0 = 1;
  }
  return;
}




void FUN_100033bb0(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_100033bdc(void)

{
  if ((DAT_10184dc50 & 1) == 0) {
    DAT_10184dc48 = DAT_101872e38;
    DAT_10184dc50 = 1;
  }
  return;
}




void FUN_100033c08(void)

{
  if ((DAT_10184de78 & 1) == 0) {
    DAT_10184de70 = DAT_101872e38;
    DAT_10184de78 = 1;
  }
  return;
}




void FUN_100033c34(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




void FUN_100033c60(void)

{
  if ((DAT_10184dd60 & 1) == 0) {
    DAT_10184dd58 = DAT_101872e38;
    DAT_10184dd60 = 1;
  }
  return;
}




void FUN_100033c8c(void)

{
  if ((DAT_10184de88 & 1) == 0) {
    DAT_10184de80 = DAT_101872e38;
    DAT_10184de88 = 1;
  }
  return;
}




void FUN_100033cb8(long param_1)

{
  long lVar1;
  
  DAT_10184dc98 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dc98 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dc98 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000342fc;
  *(code **)(lVar1 + 0xb8) = FUN_100034338;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dc98;
  *(undefined4 *)(lVar1 + 0xa8) = 0x90;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_100033d14(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint local_58 [2];
  
  puVar14 = *(undefined8 **)(param_2 + 0x58);
  puVar5 = (undefined8 *)*puVar14;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      pcVar9 = (char *)*puVar5;
      if (pcVar9 == (char *)0x0) {
        uVar8 = 0;
      }
      else {
        cVar7 = *pcVar9;
        uVar8 = 0x811c9dc5;
        if (cVar7 != '\0') {
          uVar8 = 0x811c9dc5;
          do {
            pcVar9 = pcVar9 + 1;
            uVar8 = (uVar8 ^ (int)cVar7) * 0x1000193;
            cVar7 = *pcVar9;
          } while (cVar7 != '\0');
        }
      }
      pcVar9 = (char *)puVar5[1];
      if (pcVar9 == (char *)0x0) {
        local_58[0] = 0;
      }
      else {
        cVar7 = *pcVar9;
        local_58[0] = 0x811c9dc5;
        if (cVar7 != '\0') {
          local_58[0] = 0x811c9dc5;
          do {
            pcVar9 = pcVar9 + 1;
            local_58[0] = (local_58[0] ^ (int)cVar7) * 0x1000193;
            cVar7 = *pcVar9;
          } while (cVar7 != '\0');
        }
      }
      lVar4 = FUN_100034344(param_1 + 0x30,uVar8);
      uVar3 = FUN_10003449c(param_1 + 0x30,local_58);
      *(undefined4 *)(lVar4 + 4) = uVar3;
      puVar14 = puVar14 + 1;
      puVar5 = (undefined8 *)*puVar14;
    } while (puVar5 != (undefined8 *)0x0);
  }
  plVar6 = *(long **)(param_2 + 0x60);
  lVar4 = *plVar6;
  while (lVar4 != 0) {
    plVar6 = plVar6 + 1;
    FUN_100033f78(param_1 + 0x60,lVar4,lVar4 + 8);
    lVar4 = *plVar6;
  }
  if (param_2 != param_3) {
    puVar5 = *(undefined8 **)(param_3 + 0x58);
    puVar14 = (undefined8 *)*puVar5;
    if (puVar14 != (undefined8 *)0x0) {
      lVar4 = *(long *)(param_1 + 0x50);
      do {
        pcVar9 = (char *)*puVar14;
        if (pcVar9 == (char *)0x0) {
          uVar8 = 0;
        }
        else {
          cVar7 = *pcVar9;
          uVar8 = 0x811c9dc5;
          if (cVar7 != '\0') {
            uVar8 = 0x811c9dc5;
            do {
              pcVar9 = pcVar9 + 1;
              uVar8 = (uVar8 ^ (int)cVar7) * 0x1000193;
              cVar7 = *pcVar9;
            } while (cVar7 != '\0');
          }
        }
        pcVar9 = (char *)puVar14[1];
        if (pcVar9 == (char *)0x0) {
          uVar10 = 0;
        }
        else {
          cVar7 = *pcVar9;
          uVar10 = 0x811c9dc5;
          if (cVar7 != '\0') {
            uVar10 = 0x811c9dc5;
            do {
              pcVar9 = pcVar9 + 1;
              uVar10 = (uVar10 ^ (int)cVar7) * 0x1000193;
              cVar7 = *pcVar9;
            } while (cVar7 != '\0');
          }
        }
        uVar1 = *(uint *)(param_1 + 0x30);
        if (uVar1 == 0) {
LAB_100033f24:
          uVar8 = 0xffffffff;
        }
        else {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = uVar8 / uVar1;
          }
          uVar12 = (ulong)(uVar8 - uVar2 * uVar1);
          lVar11 = *(long *)(param_1 + 0x38);
          if (*(uint *)(lVar11 + uVar12 * 8) != uVar8) {
            do {
              if (*(int *)(lVar11 + uVar12 * 8 + 4) == -1) break;
              uVar2 = uVar1;
              if (0 < (int)(uint)uVar12) {
                uVar2 = (uint)uVar12;
              }
              uVar12 = (ulong)(uVar2 - 1);
            } while (*(uint *)(lVar11 + uVar12 * 8) != uVar8);
            if ((int)uVar12 == -1) goto LAB_100033f24;
          }
          uVar8 = *(uint *)(lVar11 + uVar12 * 8 + 4);
        }
        *(uint *)(lVar4 + (ulong)uVar8 * 4) = uVar10;
        puVar5 = puVar5 + 1;
        puVar14 = (undefined8 *)*puVar5;
      } while (puVar14 != (undefined8 *)0x0);
    }
    plVar6 = *(long **)(param_3 + 0x60);
    lVar4 = *plVar6;
    while (lVar4 != 0) {
      plVar6 = plVar6 + 1;
      uVar13 = *(undefined8 *)(lVar4 + 8);
      puVar5 = (undefined8 *)FUN_100034760(param_1 + 0x60);
      *puVar5 = uVar13;
      lVar4 = *plVar6;
    }
  }
  return;
}




void FUN_100033f78(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
  lVar2 = FUN_100034344(param_1,uVar3);
  uVar1 = FUN_1000345fc(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




void FUN_100033fe0(long param_1)

{
  FUN_100033d14(param_1 + -0x28);
  return;
}




uint FUN_100033fe8(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint local_4;
  
  local_4 = param_2;
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_2 / uVar2;
    }
    uVar6 = (ulong)(param_2 - uVar3 * uVar2);
    lVar4 = *(long *)(param_1 + 0x38);
    if (*(uint *)(lVar4 + uVar6 * 8) != param_2) {
      do {
        if (*(int *)(lVar4 + uVar6 * 8 + 4) == -1) break;
        uVar3 = uVar2;
        if (0 < (int)(uint)uVar6) {
          uVar3 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar3 - 1);
      } while (*(uint *)(lVar4 + uVar6 * 8) != param_2);
      if ((int)uVar6 == -1) goto LAB_100034068;
    }
    uVar2 = *(uint *)(lVar4 + uVar6 * 8 + 4);
    if (uVar2 != 0xffffffff) {
      puVar5 = (uint *)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 4);
      goto LAB_10003406c;
    }
  }
LAB_100034068:
  puVar5 = (uint *)0x0;
LAB_10003406c:
  puVar1 = &local_4;
  if (puVar5 != (uint *)0x0) {
    puVar1 = puVar5;
  }
  return *puVar1;
}




void FUN_100034084(long param_1,undefined4 param_2)

{
  FUN_100033fe8(param_1 + -0x28,param_2);
  return;
}




undefined8 FUN_100034090(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_28;
  
  local_28 = param_2;
  uVar3 = FUN_1004d2524(param_2);
  uVar4 = FUN_100015208(param_2,uVar3,0x12345678);
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar7 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar6 = *(long *)(param_1 + 0x68);
    if (*(uint *)(lVar6 + uVar7 * 8) != uVar4) {
      do {
        if (*(int *)(lVar6 + uVar7 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar7) {
          uVar2 = (uint)uVar7;
        }
        uVar7 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar6 + uVar7 * 8) != uVar4);
      if ((int)uVar7 == -1) {
        return param_2;
      }
    }
    if (*(int *)(lVar6 + uVar7 * 8 + 4) != -1) {
      puVar5 = (undefined8 *)FUN_100034760((uint *)(param_1 + 0x60),&local_28);
      param_2 = *puVar5;
    }
  }
  return param_2;
}




void FUN_10003415c(long param_1)

{
  FUN_100034090(param_1 + -0x28);
  return;
}




void FUN_100034164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144c0a0;
  param_1[5] = &PTR_FUN_10144c0e8;
  FUN_1000341f0(param_1 + 0xc);
  FUN_100034278(param_1 + 6);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000341a8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144c0a0;
  param_1[5] = &PTR_FUN_10144c0e8;
  FUN_1000341f0(param_1 + 0xc);
  FUN_100034278(param_1 + 6);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




uint * FUN_1000341f0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




uint * FUN_100034278(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_1000342fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144c0a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_10144c0e8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  return;
}




void FUN_100034338(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100034340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100034344(uint *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 local_30;
  void *local_28;
  
  uVar8 = param_1[4];
  param_1[4] = uVar8 + 1;
  uVar6 = *param_1;
  if (uVar6 >> 1 < uVar8 + 1) {
    local_30 = 0;
    local_28 = (void *)0x0;
    FUN_10002690c(&local_30,(uVar6 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar8 = *param_1;
    uVar6 = (uint)local_30;
    uVar9 = uVar8 - 1;
    if ((int)uVar9 < 0) {
      pvVar5 = *(void **)(param_1 + 2);
    }
    else {
      pvVar5 = *(void **)(param_1 + 2);
      do {
        uVar8 = *(uint *)((long)pvVar5 + (ulong)uVar9 * 8 + 4);
        if (uVar8 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar5 + (ulong)uVar9 * 8);
          uVar4 = 0;
          if ((uint)local_30 != 0) {
            uVar4 = uVar3 / (uint)local_30;
          }
          uVar10 = (ulong)(uVar3 - uVar4 * (uint)local_30);
          iVar2 = *(int *)((long)local_28 + uVar10 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_30;
            if (0 < (int)(uint)uVar10) {
              uVar4 = (uint)uVar10;
            }
            uVar10 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_28 + uVar10 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_28 + uVar10 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar8;
        }
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
      uVar8 = *param_1;
    }
    uVar9 = param_1[1];
    *param_1 = (uint)local_30;
    param_1[1] = local_30._4_4_;
    local_30 = CONCAT44(uVar9,uVar8);
    *(void **)(param_1 + 2) = local_28;
    if (pvVar5 != (void *)0x0) {
      local_28 = pvVar5;
      operator_delete__(pvVar5);
      uVar6 = *param_1;
    }
  }
  uVar8 = 0;
  if (uVar6 != 0) {
    uVar8 = param_2 / uVar6;
  }
  uVar10 = (ulong)(param_2 - uVar8 * uVar6);
  lVar7 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar7 + uVar10 * 8 + 4);
  while (iVar2 != -1) {
    uVar8 = uVar6;
    if (0 < (int)(uint)uVar10) {
      uVar8 = (uint)uVar10;
    }
    uVar10 = (ulong)(uVar8 - 1);
    iVar2 = *(int *)(lVar7 + uVar10 * 8 + 4);
  }
  *(uint *)(lVar7 + uVar10 * 8) = param_2;
  return;
}




void FUN_10003449c(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100034500(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 4);
  }
  *(undefined4 *)(lVar2 + uVar1 * 4) = *param_2;
  return;
}




void FUN_100034500(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100034580(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_100034580(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1000345fc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100034664(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_100034664(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000346e4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000346e4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long FUN_100034760(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_1000347f8:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) goto LAB_1000347f8;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 8;
}




void FUN_100034810(void)

{
  if ((DAT_10184dca0 & 1) == 0) {
    DAT_10184dc98 = DAT_101872e38;
    DAT_10184dca0 = 1;
  }
  return;
}




undefined8 * FUN_10003483c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144c110;
  param_1[5] = &PTR_FUN_10144c140;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  FUN_1004e313c(param_1 + 7);
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xbf800000;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}




void FUN_1000348a8(long param_1)

{
  long lVar1;
  
  DAT_10184db48 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184db48 + 1;
  lVar1 = param_1 + (ulong)DAT_10184db48 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10003483c;
  *(code **)(lVar1 + 0xb8) = FUN_100034c3c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184db48;
  *(undefined4 *)(lVar1 + 0xa8) = 0x58;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x24;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_100034914,0);
  return;
}




void FUN_100034914(long param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0xbf800000;
  return;
}




long FUN_100034920(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long local_178 [36];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a0218(param_1,local_178,0x24,DAT_10184db48);
  lVar2 = 0;
  if (uVar1 != 0) {
    uVar4 = (ulong)uVar1;
    plVar5 = local_178;
    do {
      lVar3 = *plVar5;
      if ((lVar2 == 0) || (*(uint *)(lVar3 + 0x34) < *(uint *)(lVar2 + 0x34))) {
LAB_1000349a8:
        lVar2 = lVar3;
      }
      else if (*(uint *)(lVar3 + 0x34) == *(uint *)(lVar2 + 0x34)) {
        fVar6 = (float)FUN_1000349f4(lVar3);
        fVar7 = (float)FUN_1000349f4(lVar2);
        if (fVar7 < fVar6) goto LAB_1000349a8;
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




float FUN_1000349f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x4c);
  if (fVar5 < 0.0) {
    fVar5 = 1.0;
    lVar1 = param_1;
    if (*(char *)(param_1 + 0x50) == '\0') {
      do {
        lVar1 = *(long *)(lVar1 + 0x10);
      } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68 || lVar1 == 0);
      uVar2 = FUN_1003a3644();
      fVar3 = (float)FUN_100433b1c(uVar2,*(undefined4 *)(param_1 + 0x48));
      fVar4 = (float)FUN_1003b2c7c(uVar2,*(undefined4 *)(param_1 + 0x48));
      if ((0.0 < fVar3) && (fVar5 = (float)NEON_fminnm(fVar4 / fVar3,0x3f800000), fVar5 <= 0.0)) {
        fVar5 = 0.0;
      }
    }
    *(float *)(param_1 + 0x4c) = fVar5;
  }
  return fVar5;
}




void FUN_100034a98(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  FUN_1000153b4(param_1 + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}




long FUN_100034acc(long param_1)

{
  return param_1 + 0x38;
}




void FUN_100034ad4(long param_1)

{
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}




void FUN_100034ae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144c110;
  param_1[5] = &PTR_FUN_10144c140;
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100034b30(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144c110;
  param_1[5] = &PTR_FUN_10144c140;
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  FUN_1010a1da8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100034b84(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10144c110;
  *param_1 = &PTR_FUN_10144c140;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  FUN_1010a1da8(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_100034bd4(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_10144c110;
  *param_1 = &PTR_FUN_10144c140;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  FUN_1010a1da8(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




long FUN_100034c28(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100034c30(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * thunk_FUN_10003483c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144c110;
  param_1[5] = &PTR_FUN_10144c140;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  FUN_1004e313c(param_1 + 7);
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xbf800000;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}




void FUN_100034c3c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100034c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100034c48(void)

{
  if ((DAT_10184db50 & 1) == 0) {
    DAT_10184db48 = DAT_101872e38;
    DAT_10184db50 = 1;
  }
  return;
}




void FUN_100034c74(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_100034ca0(long param_1)

{
  long lVar1;
  
  DAT_10184dc78 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dc78 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dc78 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100035120;
  *(code **)(lVar1 + 0xb8) = FUN_100035144;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dc78;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_100034db0,0);
  FUN_1010a0990(param_1,0x22ef04a2,FUN_100034dc8,0);
  FUN_1010a0990(param_1,0x22450493,FUN_100034dfc,0);
  FUN_1010a0990(param_1,0xdc302c4,FUN_100034e58,0);
  FUN_1010a0990(param_1,0x163803be,FUN_100034e98,0);
  FUN_1010a0990(param_1,0x4ccb075d,FUN_100034ed8,0);
  return;
}




void FUN_100034db0(long param_1)

{
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) >> 2 & 1) == 0) {
    return;
  }
  FUN_100034f04();
  return;
}




void FUN_100034dc8(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100035038((float)*(double *)((ulong)&stack0x00000000 | 8),param_1,in_stack_00000000);
  return;
}




void FUN_100034dfc(long param_1)

{
  float fVar1;
  long in_stack_00000000;
  
  if ((*(byte *)(in_stack_00000000 + 0x2f4) & 5) != 0) {
    fVar1 = (float)FUN_100034fa8((float)*(double *)((ulong)&stack0x00000000 | 8));
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar1;
  }
  return;
}




void FUN_100034e58(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10034ea2c(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 2;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_100034e98(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10034ea2c(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfd;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_100034ed8(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10003507c(param_1,in_stack_00000000);
  return;
}




void FUN_100034f04(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 auStack_90 [96];
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  thunk_FUN_10045cc04(auStack_90);
  FUN_1003a2644(auStack_90,4);
  iVar1 = FUN_1003a6ce4(auStack_90,&local_30,1,0);
  if (((iVar1 == 0) || (local_30 == 0)) || (iVar1 = FUN_100345bbc(), iVar1 == 0)) {
    bVar2 = *(byte *)(param_1 + 0x34) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x34) | 1;
  }
  *(byte *)(param_1 + 0x34) = bVar2;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




float FUN_100034fa8(float param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_10034ea2c(*(undefined4 *)(param_3 + 0x260));
  if ((uVar1 & 1) == 0) {
    param_3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  lVar2 = *(long *)(param_3 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101dc2a00);
  fVar3 = (float)NEON_fminnm(ABS(param_1) / DAT_101dc2940,0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}




void FUN_100035038(long param_1,long param_2)

{
  float fVar1;
  
  if (((*(byte *)(param_1 + 0x34) >> 1 & 1) == 0) && ((*(byte *)(param_2 + 0x2f4) & 5) != 0)) {
    fVar1 = (float)FUN_100034fa8();
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar1;
  }
  return;
}




void FUN_10003507c(long param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)FUN_10004d8f0(param_2);
  iVar1 = _strcmp(pcVar2,"Forest");
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = _strcmp(pcVar2,"Lane");
    if (iVar1 != 0) {
      return;
    }
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  return;
}




undefined4 FUN_1000350d8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return uVar1;
}




undefined4 FUN_1000350e4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return uVar1;
}




byte FUN_1000350f0(long param_1)

{
  return *(byte *)(param_1 + 0x34) & 1;
}




byte FUN_1000350fc(long param_1)

{
  return *(byte *)(param_1 + 0x34) >> 1 & 1;
}




void FUN_10003510c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100035120(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10144c170;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  *(byte *)((long)param_1 + 0x34) = *(byte *)((long)param_1 + 0x34) & 0xfc;
  return;
}




void FUN_100035144(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003514c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100035150(void)

{
  if ((DAT_10184dc80 & 1) == 0) {
    DAT_10184dc78 = DAT_101872e38;
    DAT_10184dc80 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003517c(void)

{
  uRam0000000101dc2a08 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a00 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2a18 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a10 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2a28 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a20 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2a38 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a30 = 0x7f7fffff7f7fffff;
  DAT_101dc2a40 = 0x7f7fffff;
  DAT_101dc2a44 = 0x7f7fffff;
  DAT_101dc2a48 = 0x7f7fffff;
  DAT_101dc2a4c = 0x3f800000;
  uRam0000000101dc2a58 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a50 = 0x7f7fffff7f7fffff;
  DAT_101dc2a60 = 0x7f7fffff;
  DAT_101dc2a64 = 0x3eb33333;
  uRam0000000101dc2a70 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a68 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2a80 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a78 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2a90 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a88 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2aa0 = 0x7f7fffff7f7fffff;
  _DAT_101dc2a98 = 0x7f7fffff7f7fffff;
  DAT_101dc2aa8 = 0x7f7fffff;
  DAT_101dc2aac = 0x7f7fffff;
  DAT_101dc2ab0 = 0x7f7fffff;
  uRam0000000101dc2948 = 0xff7fffffff7fffff;
  _DAT_101dc2940 = 0xff7fffffff7fffff;
  DAT_101dc2950 = 0;
  DAT_101dc2958 = 0;
  uRam0000000101dc2964 = 0xff7fffffff7fffff;
  _DAT_101dc295c = 0xff7fffffff7fffff;
  DAT_101dc296c = 0xff7fffff;
  DAT_101dc2970 = 0xff7fffff;
  DAT_101dc2974 = NEON_fmov(0xbf800000,4);
  DAT_101dc297c = 0x3f000000;
  DAT_101dc2980 = 0;
  DAT_101dc2988 = 0;
  uRam0000000101dc2998 = 0xff7fffffff7fffff;
  _DAT_101dc2990 = 0xff7fffffff7fffff;
  uRam0000000101dc29a8 = 0xff7fffffff7fffff;
  _DAT_101dc29a0 = 0xff7fffffff7fffff;
  uRam0000000101dc29b8 = 0xff7fffffff7fffff;
  _DAT_101dc29b0 = 0xff7fffffff7fffff;
  uRam0000000101dc29c8 = 0xbf800000bf800000;
  _DAT_101dc29c0 = 0xbf80000000000000;
  DAT_101dc29d0 = 0xbf800000;
  DAT_101dc29d4 = 0xff7fffff;
  DAT_101dc29d8 = 0xff7fffff;
  DAT_101dc29dc = 0xff7fffff;
  DAT_101dc29e0 = 0;
  DAT_101dc29e4 = 0xff7fffff;
  DAT_101dc29e8 = 0;
  DAT_101dc29f0 = 0;
  DAT_101dc2930 = 0xff;
  DAT_101dc2932 = 0xffff;
  DAT_101dc2934 = 0xffff;
  return;
}




void FUN_100035278(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 >> 0xd & 1) == 0) {
    FUN_10065fe04((int)(uVar1 << 0x1c) >> 0x1c,uVar1 >> 4 & 0x3ff);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x3ff0;
  }
  return;
}




void FUN_1000352b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144c1a0;
  FUN_100035278();
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000352e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144c1a0;
  FUN_100035278();
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100035318(long param_1)

{
  long lVar1;
  
  DAT_10184dd98 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd98 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd98 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100035584;
  *(code **)(lVar1 + 0xb8) = FUN_10003559c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd98;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0978(param_1,3,FUN_100035380);
  return;
}




void FUN_100035380(long param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  float fVar10;
  byte local_aa8 [200];
  undefined4 local_9e0 [200];
  undefined1 auStack_6c0 [1600];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_3 != 0) {
    uVar7 = 0;
    uVar6 = (ulong)param_3;
    do {
      lVar4 = *(long *)(param_1 + (ulong)param_2[uVar7] * 0x38 + 0x28);
      FUN_1003c6514(lVar4,auStack_6c0 + uVar7 * 8);
      lVar3 = *(long *)(lVar4 + 0x40);
      fVar10 = *(float *)(lVar3 + 0x7c) +
               *(float *)(lVar3 + 0x130) * (*(float *)(lVar3 + 0x298) + 1.0);
      NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar3 + 0x1e4),DAT_101dc2bc4);
      local_9e0[uVar7] = DAT_101dc2b00._4_4_;
      lVar3 = *(long *)(lVar4 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dda8))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      bVar2 = FUN_100472e40(DAT_101dc2b00._4_4_,DAT_101dc2b00._4_4_,DAT_101dc2bc4);
      local_aa8[uVar7] = bVar2 ^ 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
    puVar5 = auStack_6c0;
    puVar8 = local_9e0;
    pbVar9 = local_aa8;
    do {
      iVar1 = *(int *)(param_1 + (ulong)*param_2 * 0x38 + 0x30);
      FUN_10065fe98(*puVar8,(iVar1 << 0x1c) >> 0x1c,(iVar1 << 0x12) >> 0x16,puVar5,iVar1 >> 0xe,
                    *pbVar9);
      puVar5 = puVar5 + 8;
      uVar6 = uVar6 - 1;
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (uVar6 != 0);
  }
  FUN_100142ccc();
  if (*(long *)PTR____stack_chk_guard_101444218 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000354f8(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff0 | param_2 & 0xf;
  iVar1 = FUN_100142d10(param_3);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x3fff | iVar1 << 0xe;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  FUN_100035540(param_1);
  return;
}




void FUN_100035540(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x30) * 0x10000000;
  if (-0x10000000 < iVar1) {
    uVar2 = FUN_10065fdb0(iVar1 >> 0x1c);
    *(uint *)(param_1 + 0x30) =
         *(uint *)(param_1 + 0x30) & 0xffffc000 |
         *(uint *)(param_1 + 0x30) & 0xf | (uVar2 & 0x3ff) << 4;
  }
  return;
}




void FUN_100035584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144c1a0;
  *(undefined4 *)(param_1 + 6) = 0x3fff;
  return;
}




void FUN_10003559c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000355a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000355a8(void)

{
  if ((DAT_10184dda0 & 1) == 0) {
    DAT_10184dd98 = DAT_101872e38;
    DAT_10184dda0 = 1;
  }
  return;
}




void FUN_1000355d4(void)

{
  if ((DAT_10184ddb0 & 1) == 0) {
    DAT_10184dda8 = DAT_101872e38;
    DAT_10184ddb0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100035600(void)

{
  uRam0000000101dc2b88 = 0x7f7fffff7f7fffff;
  _DAT_101dc2b80 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2b98 = 0x7f7fffff7f7fffff;
  _DAT_101dc2b90 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2ba8 = 0x7f7fffff7f7fffff;
  _DAT_101dc2ba0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2bb8 = 0x7f7fffff7f7fffff;
  _DAT_101dc2bb0 = 0x7f7fffff7f7fffff;
  DAT_101dc2bc0 = 0x7f7fffff;
  DAT_101dc2bc4 = 0x7f7fffff;
  DAT_101dc2bc8 = 0x7f7fffff;
  DAT_101dc2bcc = 0x3f800000;
  uRam0000000101dc2bd8 = 0x7f7fffff7f7fffff;
  _DAT_101dc2bd0 = 0x7f7fffff7f7fffff;
  DAT_101dc2be0 = 0x7f7fffff;
  DAT_101dc2be4 = 0x3eb33333;
  uRam0000000101dc2bf0 = 0x7f7fffff7f7fffff;
  _DAT_101dc2be8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2c00 = 0x7f7fffff7f7fffff;
  _DAT_101dc2bf8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2c10 = 0x7f7fffff7f7fffff;
  _DAT_101dc2c08 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2c20 = 0x7f7fffff7f7fffff;
  _DAT_101dc2c18 = 0x7f7fffff7f7fffff;
  DAT_101dc2c28 = 0x7f7fffff;
  DAT_101dc2c2c = 0x7f7fffff;
  DAT_101dc2c30 = 0x7f7fffff;
  uRam0000000101dc2ac8 = 0xff7fffffff7fffff;
  _DAT_101dc2ac0 = 0xff7fffffff7fffff;
  DAT_101dc2ad0 = 0;
  DAT_101dc2ad8 = 0;
  uRam0000000101dc2ae4 = 0xff7fffffff7fffff;
  _DAT_101dc2adc = 0xff7fffffff7fffff;
  DAT_101dc2aec = 0xff7fffff;
  DAT_101dc2af0 = 0xff7fffff;
  DAT_101dc2af4 = NEON_fmov(0xbf800000,4);
  DAT_101dc2afc = 0x3f000000;
  DAT_101dc2b00 = 0;
  DAT_101dc2b08 = 0;
  uRam0000000101dc2b18 = 0xff7fffffff7fffff;
  _DAT_101dc2b10 = 0xff7fffffff7fffff;
  uRam0000000101dc2b28 = 0xff7fffffff7fffff;
  _DAT_101dc2b20 = 0xff7fffffff7fffff;
  uRam0000000101dc2b38 = 0xff7fffffff7fffff;
  _DAT_101dc2b30 = 0xff7fffffff7fffff;
  uRam0000000101dc2b48 = 0xbf800000bf800000;
  _DAT_101dc2b40 = 0xbf80000000000000;
  DAT_101dc2b50 = 0xbf800000;
  DAT_101dc2b54 = 0xff7fffff;
  DAT_101dc2b58 = 0xff7fffff;
  DAT_101dc2b5c = 0xff7fffff;
  DAT_101dc2b60 = 0;
  DAT_101dc2b64 = 0xff7fffff;
  DAT_101dc2b68 = 0;
  DAT_101dc2b70 = 0;
  return;
}




undefined8 * FUN_1000356cc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003577c_10144c1d0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 5;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = DAT_101dc1cb8;
  *(undefined8 *)((long)param_1 + 0x5c) = DAT_101873a40;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1004e3004(param_1 + 0x10);
  param_1[0x11] = 0x4120000042700000;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  FUN_1000320fc();
  FUN_100033428();
  FUN_10002e944();
  return param_1;
}




void FUN_10003577c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003577c_10144c1d0;
  FUN_1000320fc();
  FUN_100033428();
  FUN_10002e8e0();
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10003577c(void)

{
  FUN_10003577c();
  return;
}




void FUN_1000357b8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003577c();
  operator_delete(pvVar1);
  return;
}




void FUN_1000357cc(long param_1)

{
  long lVar1;
  
  DAT_10184de90 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de90 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de90 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1000356cc;
  *(code **)(lVar1 + 0xb8) = FUN_100036650;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de90;
  *(undefined4 *)(lVar1 + 0xa8) = 0xa0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_100035838,0);
  return;
}




void FUN_100035838(undefined8 param_1)

{
  FUN_100035864();
  FUN_100035b24(param_1);
  FUN_100035d04(param_1);
  return;
}




void FUN_100035864(long param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  
  iVar8 = FUN_100060b0c();
  if (iVar8 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x96) != '\0') {
    return;
  }
  FUN_10109c550(&fStack_34,&local_38,0,0);
  FUN_10064140c(&local_3c,&local_40);
  FUN_100641518(&local_44,&local_48);
  fStack_34 = fStack_34 / local_44;
  local_38 = local_38 / local_48;
  local_3c = local_3c / local_44;
  local_40 = local_40 / local_48;
  local_50 = DAT_101dc1cb8;
  fVar9 = (float)DAT_101dc1cb8;
  fVar12 = (float)((ulong)DAT_101dc1cb8 >> 0x20);
  fVar11 = fVar12;
  fVar13 = fVar9;
  if (*(char *)(param_1 + 0x98) != '\0') {
    if (fStack_34 <= 20.0) {
      local_50 = CONCAT44(fVar12,0xbf800000);
      fVar13 = -1.0;
    }
    else if (local_3c + -20.0 <= fStack_34) {
      local_50 = CONCAT44(fVar12,0x3f800000);
      fVar13 = 1.0;
    }
    fVar14 = -1.0;
    if ((local_38 <= 20.0) || (fVar14 = 1.0, local_40 + -20.0 <= local_38)) {
      local_50 = CONCAT44(fVar14,(undefined4)local_50);
      fVar11 = fVar14;
    }
  }
  cVar1 = *(char *)(param_1 + 0x94);
  cVar2 = *(char *)(param_1 + 0x95);
  bVar6 = fVar11 != 0.0;
  bVar4 = cVar1 == '\0';
  bVar5 = cVar2 == '\0';
  bVar7 = fVar13 != 0.0;
  *(bool *)(param_1 + 0x94) = bVar7;
  *(bool *)(param_1 + 0x95) = bVar6;
  if (((bVar7) && (cVar1 == '\0')) && (fVar11 == 0.0)) {
    *(float *)(param_1 + 0x60) = local_38 / local_40;
  }
  if (bVar6 && cVar2 == '\0') {
    if (fVar13 == 0.0) {
      *(float *)(param_1 + 0x5c) = fStack_34 / local_3c;
LAB_100035a0c:
      if (fVar11 != 0.0) {
        fVar14 = fStack_34 / local_3c - *(float *)(param_1 + 0x5c);
        fVar14 = (float)NEON_fminnm(fVar14 + fVar14,0x3f800000);
        fVar13 = fVar14 + fVar13;
        local_50 = CONCAT44(local_50._4_4_,fVar13);
      }
      goto LAB_100035a58;
    }
  }
  else if (fVar13 == 0.0) goto LAB_100035a0c;
  if (fVar11 == 0.0) {
    fVar14 = local_38 / local_40 - *(float *)(param_1 + 0x60);
    fVar14 = (float)NEON_fminnm(fVar14 + fVar14,0x3f800000);
    fVar11 = fVar14 + fVar11;
    local_50 = CONCAT44(fVar11,(undefined4)local_50);
  }
  else {
    *(undefined8 *)(param_1 + 0x5c) = DAT_101873a40;
  }
LAB_100035a58:
  if ((fVar13 != fVar9) || (fVar11 != fVar12)) {
    fVar9 = SQRT(fVar13 * fVar13 + fVar11 * fVar11);
    fVar12 = fVar13 / fVar9;
    local_50 = CONCAT44(fVar11 / fVar9,fVar12);
    uVar10 = FUN_1000e8c04(&local_50);
    *(undefined4 *)(param_1 + 100) = uVar10;
    *(float *)(param_1 + 0x68) = fVar12;
    *(float *)(param_1 + 0x6c) = fVar13;
  }
  bVar3 = bVar4 && bVar5;
  if (!bVar7 && !bVar6) {
    bVar3 = !bVar4 || !bVar5;
  }
  if (bVar3) {
    FUN_1004e3004(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
    fVar11 = 0.0;
    if ((bVar7 || bVar6) && (bVar4 && bVar5)) {
      fVar11 = (float)FUN_100316194(0xd);
      if (0.5 <= fVar11) {
        if (fVar11 <= 0.5) {
          fVar11 = 50.0;
        }
        else {
          fVar11 = fVar11 * 100.0;
        }
      }
      else {
        fVar11 = fVar11 * 50.0 + 25.0;
      }
    }
    *(float *)(param_1 + 0x78) = fVar11;
    *(undefined1 *)(param_1 + 0x97) = 0;
  }
  return;
}




void FUN_100035b24(long param_1)

{
  int iVar1;
  long lVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_60;
  float local_58;
  
  iVar1 = FUN_10031615c(0xe);
  fVar5 = 0.0;
  if (iVar1 != 0) {
    fVar4 = 0.05;
    if ((*(char *)(param_1 + 0x94) == '\0') && (*(char *)(param_1 + 0x95) == '\0')) {
      fVar4 = *(float *)((long)&DAT_10114b680 + (ulong)(*(char *)(param_1 + 0x96) == '\0') * 4);
    }
    fVar5 = 2.0;
    if ((*(char *)(param_1 + 0x96) == '\0') && (fVar5 = 1.0, *(char *)(param_1 + 0x97) != '\0')) {
      fVar5 = 2.0;
    }
    fVar5 = fVar5 * fVar4;
  }
  if (1e-05 <= ABS(fVar5)) {
    uVar3 = _mach_absolute_time();
    fVar4 = (float)NEON_fminnm((float)((double)((uVar3 - *(long *)(param_1 + 0x80)) * DAT_101d91638)
                                      * 1e-09),fVar5);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar5 = fVar4 / fVar5 + -1.0;
    fVar5 = *(float *)(param_1 + 0x74) +
            (*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x74)) *
            (fVar5 * fVar5 * fVar5 + 1.0);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x78);
  }
  *(float *)(param_1 + 0x70) = fVar5;
  if (0.0 < fVar5) {
    FUN_1000320fc();
    lVar2 = FUN_100033428();
    local_60 = *(undefined8 *)(lVar2 + 0x414);
    local_58 = *(float *)(lVar2 + 0x41c);
    uVar6 = *(undefined8 *)(param_1 + 100);
    fVar7 = *(float *)(param_1 + 0x6c);
    fVar4 = *(float *)(param_1 + 0x70);
    fVar5 = (float)FUN_1010a1cd4();
    fVar5 = fVar5 * fVar4;
    local_60 = CONCAT44((float)((ulong)local_60 >> 0x20) + (float)((ulong)uVar6 >> 0x20) * fVar5,
                        (float)local_60 + (float)uVar6 * fVar5);
    local_58 = local_58 + fVar7 * fVar5;
    FUN_1000e8ef4(&local_60);
    FUN_10002e63c(lVar2,&local_60,0);
  }
  if ((*(char *)(param_1 + 0x96) != '\0') &&
     (uVar3 = _mach_absolute_time(),
     0.07999999821186066 <= (double)((uVar3 - *(long *)(param_1 + 0x80)) * DAT_101d91638) * 1e-09))
  {
    FUN_1004e3004();
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined2 *)(param_1 + 0x96) = 0x100;
  }
  return;
}




void FUN_100035d04(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_50;
  float local_48;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    pfVar5 = (float *)(param_1 + 0x48);
    fVar6 = *pfVar5;
    fVar7 = *(float *)(param_1 + 0x4c);
    fVar8 = *(float *)(param_1 + 0x50);
    fVar9 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
    if (0.001 <= fVar9) {
      fVar9 = SQRT(fVar9);
      fVar10 = 1.0 / fVar9;
      if (150.0 < fVar9) {
        *(float *)(param_1 + 0x48) = fVar6 * fVar10 * 150.0;
        *(float *)(param_1 + 0x4c) = fVar7 * fVar10 * 150.0;
        *(float *)(param_1 + 0x50) = fVar8 * fVar10 * 150.0;
      }
      fVar9 = fVar9 * 10.0;
      if (fVar9 <= 4.0) {
        fVar9 = 4.0;
      }
      fVar9 = -fVar9;
      fVar11 = fVar6 * fVar10 * fVar9;
      fVar7 = fVar7 * fVar10 * fVar9;
      fVar9 = fVar8 * fVar10 * fVar9;
      fVar6 = (float)FUN_1010a1ce0();
      if (fVar6 * SQRT(fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9) <=
          SQRT(*(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48) +
               *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c) +
               *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50))) {
        fVar6 = (float)FUN_1010a1ce0();
        *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fVar11 * fVar6;
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) + fVar7 * fVar6;
        *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fVar9 * fVar6;
        FUN_1000320fc();
        lVar3 = FUN_100033428();
        fVar6 = (float)FUN_1010a1ce0();
        local_50 = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x414) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) * fVar6,
                            (float)*(undefined8 *)(lVar3 + 0x414) +
                            (float)*(undefined8 *)(param_1 + 0x48) * fVar6);
        local_48 = *(float *)(lVar3 + 0x41c) + fVar6 * *(float *)(param_1 + 0x50);
        FUN_1000e8ef4(&local_50);
        FUN_1000320fc();
        uVar4 = FUN_100033428();
        FUN_10002e63c(uVar4,&local_50,0);
      }
      else {
        pfVar5[0] = 0.0;
        pfVar5[1] = 0.0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    else {
      bVar1 = false;
      if ((fVar6 == 0.0) && (bVar1 = false, !NAN(fVar7))) {
        bVar1 = fVar7 == 0.0;
      }
      bVar2 = false;
      if ((bVar1) && (bVar2 = false, !NAN(fVar8))) {
        bVar2 = fVar8 == 0.0;
      }
      if (!bVar2) {
        pfVar5[0] = 0.0;
        pfVar5[1] = 0.0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      if (*(char *)(param_1 + 0x91) != '\0') {
        FUN_100035f64(param_1);
        return;
      }
    }
  }
  return;
}




void FUN_100035ee8(long param_1)

{
  long lVar1;
  float local_30;
  undefined4 local_2c;
  float local_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1000320fc();
    lVar1 = FUN_100033428();
    FUN_100345b68(*(undefined8 *)(param_1 + 0x28),&local_30,0);
    local_30 = *(float *)(lVar1 + 0x70) + local_30;
    local_28 = *(float *)(lVar1 + 0x78) + local_28;
    local_2c = *(undefined4 *)(lVar1 + 0x418);
    FUN_10002e63c(lVar1,&local_30,1);
  }
  return;
}




void FUN_100035f64(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float local_30;
  undefined4 local_2c;
  float local_28;
  
  *(undefined1 *)(param_4 + 0x91) = 0;
  if (*(char *)(param_4 + 0x92) != '\0') {
    if (*(char *)(param_4 + 0x93) != '\0') {
      FUN_1000320fc();
      FUN_100033428();
      iVar3 = FUN_10002e800();
      if (iVar3 != 0) {
        FUN_1000320fc();
        FUN_100033428();
        lVar1 = FUN_10002ea68();
        if (lVar1 != 0) {
          FUN_1000320fc();
          FUN_100033428();
          pfVar2 = (float *)FUN_10002e57c();
          FUN_1000320fc();
          FUN_100033428();
          local_30 = (float)FUN_10002ead8();
          local_30 = *pfVar2 - local_30;
          local_28 = pfVar2[2] - param_3;
          FUN_1000320fc();
          lVar1 = FUN_100033428();
          local_2c = *(undefined4 *)(lVar1 + 0x424);
          FUN_1000320fc();
          uVar4 = FUN_100033428();
          FUN_10002e688(uVar4,&local_30);
          FUN_1000320fc();
          FUN_100033428();
          FUN_10002e8e0();
          *(undefined1 *)(param_4 + 0x93) = 0;
        }
      }
    }
  }
  return;
}




void FUN_100036020(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_100036028(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x92) = param_2;
  return;
}




void FUN_100036030(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x98) = param_2;
  return;
}




undefined8
FUN_100036038(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((int)param_3 == 3) || ((int)param_3 == 0)) {
    if (param_2 == 3) {
      uVar1 = FUN_100036458(param_1,param_4,param_5,3,param_3);
      return uVar1;
    }
    if (param_2 == 2) {
      uVar1 = FUN_100036170(param_1,param_4,param_5,param_4,param_3);
      return uVar1;
    }
    if (param_2 == 1) {
      uVar1 = FUN_1000360a0(param_1,param_4,param_5,1,param_3);
      return uVar1;
    }
  }
  return 0;
}




undefined8
FUN_1000360a0(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_3 + 0x30) == 0) {
    if ((param_7 == 0) || (uVar2 = FUN_100316180(4), (uVar2 & 0xfffffffd) == 0)) {
      *(undefined8 *)(param_3 + 0x30) = param_5;
      *(int *)(param_3 + 0x38) = param_7;
      *(undefined4 *)(param_3 + 0x54) = param_1;
      *(undefined4 *)(param_3 + 0x58) = param_2;
      *(undefined1 *)(param_3 + 0x90) = 0;
      *(undefined8 *)(param_3 + 0x48) = 0;
      *(undefined4 *)(param_3 + 0x50) = 0;
      uVar3 = 1;
      if (param_7 == 0) {
        return 1;
      }
    }
    else {
      uVar3 = 0;
    }
    iVar1 = FUN_100316180(4);
    if ((iVar1 - 1U < 2) && (uVar2 = FUN_100316180(4), (uVar2 & 0xfffffffd) != 0)) {
      FUN_100036508(uVar2,param_4);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8
FUN_100036170(float param_1,float param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float local_e8 [2];
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined1 local_b0 [8];
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  undefined1 local_60 [8];
  float local_58;
  
  if ((*(long *)(param_3 + 0x30) == param_5) && (*(int *)(param_3 + 0x38) == param_7)) {
    if (*(char *)(param_3 + 0x90) == '\0') {
      lVar3 = 0x88;
      if (param_7 != 0) {
        lVar3 = 0x8c;
      }
      param_1 = param_1 - *(float *)(param_3 + 0x54);
      param_2 = param_2 - *(float *)(param_3 + 0x58);
      if (SQRT(param_1 * param_1 + param_2 * param_2) < *(float *)(param_3 + lVar3))
      goto LAB_1000361e8;
    }
    FUN_1000320fc();
    FUN_100033428();
    lVar3 = FUN_10002e57c();
    uVar9 = *(undefined4 *)(lVar3 + 4);
    if (*(char *)(param_3 + 0x90) == '\0') {
      if (*(char *)(param_3 + 0x91) != '\0') {
        FUN_100035f64(param_3);
      }
      *(undefined2 *)(param_3 + 0x90) = 0x101;
      FUN_1000e8d1c(0,param_4,param_3 + 0x3c);
      FUN_1000320fc();
      lVar3 = FUN_100033428();
      if ((*(byte *)(lVar3 + 0x7c) >> 4 & 1) == 0) {
        *(undefined1 *)(param_3 + 0x93) = 1;
        FUN_1000320fc();
        FUN_100033428();
        FUN_10002e944();
      }
      else {
        *(undefined1 *)(param_3 + 0x93) = 0;
      }
    }
    iVar1 = FUN_1000e8d1c(0,param_4,local_60);
    if (iVar1 != 0) {
      FUN_1000320fc();
      FUN_100033428();
      lVar3 = FUN_10002e51c();
      uVar2 = *(undefined8 *)(lVar3 + 4);
      fVar7 = *(float *)(lVar3 + 0xc);
      uVar8 = *(undefined8 *)(param_3 + 0x3c);
      fVar4 = *(float *)(param_3 + 0x44);
      local_68 = -1.0;
      fStack_64 = -1.0;
      FUN_10064140c(&fStack_64,&local_68);
      local_a0 = CONCAT44(local_68 * 0.5,fStack_64 * 0.5);
      local_98 = 0.0;
      FUN_10011a108(&local_78,&local_a0,1);
      local_a0 = CONCAT44(local_68 * 0.5,fStack_64 * 0.5);
      local_98 = 1.0;
      FUN_10011a108(local_88,&local_a0,1);
      fVar5 = local_88._0_4_ - (float)local_78;
      fVar6 = local_88._4_4_ - (float)((ulong)local_78 >> 0x20);
      local_80 = local_80 - local_70;
      local_a0 = local_78;
      local_98 = local_70;
      local_8c = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + local_80 * local_80);
      local_94 = CONCAT44(fVar6 / local_8c,fVar5 / local_8c);
      local_8c = local_80 / local_8c;
      FUN_1000e8d1c(0,&local_a0,local_b0);
      FUN_1000320fc();
      FUN_100033428();
      lVar3 = FUN_10002e51c();
      fVar5 = local_b0._0_4_ - (float)*(undefined8 *)(lVar3 + 4);
      fVar6 = local_b0._4_4_ - (float)((ulong)*(undefined8 *)(lVar3 + 4) >> 0x20);
      fVar10 = local_a8 - *(float *)(lVar3 + 0xc);
      local_c0 = CONCAT44(((float)((ulong)uVar2 >> 0x20) - local_60._4_4_) +
                          (float)((ulong)uVar8 >> 0x20) + fVar6,
                          ((float)uVar2 - local_60._0_4_) + (float)uVar8 + fVar5);
      local_b8 = (fVar7 - local_58) + fVar4 + fVar10;
      FUN_1000e8ef4(&local_c0);
      local_d8 = local_c0;
      local_d0 = local_b8;
      local_c4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10);
      local_cc = CONCAT44(-fVar6 / local_c4,-fVar5 / local_c4);
      local_c4 = -fVar10 / local_c4;
      FUN_1000e8d1c(uVar9,&local_d8,local_e8);
      FUN_1000320fc();
      lVar3 = FUN_100033428();
      fVar4 = *(float *)(lVar3 + 0x414);
      fVar5 = *(float *)(lVar3 + 0x41c);
      fVar6 = (float)FUN_1010a1ce0();
      *(float *)(param_3 + 0x48) = (local_e8[0] - fVar4) / fVar6;
      *(float *)(param_3 + 0x50) = (local_e0 - fVar5) / fVar6;
      *(undefined4 *)(param_3 + 0x4c) = 0;
      FUN_1000320fc();
      uVar2 = FUN_100033428();
      FUN_10002e63c(uVar2,local_e8,0);
    }
    uVar2 = 1;
  }
  else {
LAB_1000361e8:
    uVar2 = 0;
  }
  return uVar2;
}




bool FUN_100036458(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  int param_5)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0x30) == param_3) && (*(int *)(param_1 + 0x38) == param_5)) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 5;
  }
  cVar1 = param_1[0x90];
  param_1[0x90] = 0;
  if ((param_1 == &DAT_101dc1c70) && (DAT_101dc1d00._1_1_ != '\0')) {
    FUN_100035f64();
  }
  iVar2 = FUN_100316180(4);
  if (((iVar2 - 1U < 2) && (uVar3 = FUN_100316180(4), cVar1 == '\0')) && ((uVar3 & 0xfffffffd) == 0)
     ) {
    FUN_100036508(uVar3,param_2);
  }
  return cVar1 != '\0';
}




bool FUN_1000364f8(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x30) == param_2;
}




bool FUN_100036508(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_60;
  float local_58;
  undefined1 local_50 [8];
  float local_48;
  
  FUN_1000320fc();
  FUN_100033428();
  lVar2 = FUN_10002e57c();
  FUN_1000e8d1c(*(undefined4 *)(lVar2 + 4),param_5,local_50);
  FUN_1000320fc();
  lVar2 = FUN_100033428();
  uVar8 = *(undefined8 *)(lVar2 + 0x414);
  fVar10 = *(float *)(lVar2 + 0x41c);
  local_60 = 0xc000000000000000;
  fVar3 = (float)FUN_1000e8c04(&local_60);
  fVar7 = (float)uVar8;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar3 = local_50._0_4_ - (fVar7 + fVar3);
  fVar6 = local_50._4_4_ - (fVar9 + param_2);
  param_3 = fVar10 + param_3;
  bVar1 = 0.1 <= ABS(local_48 - param_3);
  if ((0.1 <= ABS(fVar3) || 0.1 <= ABS(fVar6)) || bVar1) {
    param_3 = local_48 - param_3;
    fVar5 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + param_3 * param_3);
    fVar4 = (float)_exp2f(fVar5 * -0.3);
    fVar4 = 4.8089833 - fVar4 * 4.8089833;
    local_60 = CONCAT44((fVar6 * fVar4) / fVar5 + fVar9,(fVar3 * fVar4) / fVar5 + fVar7);
    local_58 = (fVar4 * param_3) / fVar5 + fVar10;
    FUN_1000320fc();
    uVar8 = FUN_100033428();
    FUN_10002e63c(uVar8,&local_60,2);
  }
  return (0.1 <= ABS(fVar3) || 0.1 <= ABS(fVar6)) || bVar1;
}




undefined8 * thunk_FUN_1000356cc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003577c_10144c1d0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 5;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = DAT_101dc1cb8;
  *(undefined8 *)((long)param_1 + 0x5c) = DAT_101873a40;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1004e3004(param_1 + 0x10);
  param_1[0x11] = 0x4120000042700000;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  FUN_1000320fc();
  FUN_100033428();
  FUN_10002e944();
  return param_1;
}




void FUN_100036650(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100036658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003665c(void)

{
  if ((DAT_10184de98 & 1) == 0) {
    DAT_10184de90 = DAT_101872e38;
    DAT_10184de98 = 1;
  }
  return;
}




undefined8 FUN_100036688(void)

{
  return DAT_101dc2c38;
}




bool FUN_100036694(void)

{
  return DAT_101dc2c38 != 0;
}




void FUN_1000366a8(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101dc2c38 != 0) {
    FUN_10007bc10(DAT_101dc2c38 + 0x268,param_1,param_2);
    return;
  }
  return;
}




void FUN_1000366c8(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x2d56d876) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x2d56d876];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x2d56d877)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_100036770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101dc2c38 != 0) {
    FUN_10007bcc8(DAT_101dc2c38 + 0x268,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_100036794(void)

{
  if (DAT_101dc2c38 != 0) {
    FUN_10007be6c(DAT_101dc2c38 + 0x268);
    return;
  }
  return;
}




void FUN_1000367ac(void)

{
  if (DAT_101dc2c38 != 0) {
    *(ushort *)(DAT_101dc2c38 + 0x7aeb0) = *(ushort *)(DAT_101dc2c38 + 0x7aeb0) & 0xefff;
  }
  return;
}




void FUN_1000367dc(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101dc2c38 != 0) {
    FUN_10007bcb8(DAT_101dc2c38 + 0x268,param_1,param_2);
    return;
  }
  return;
}




undefined8 * FUN_1000367fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  ushort uVar13;
  code *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar2 = (ushort *)(param_1 + 0xf5d6);
  puVar3 = param_1 + 0xf4bc;
  puVar4 = param_1 + 0xf49a;
  puVar5 = param_1 + 0xf478;
  *param_1 = &PTR_thunk_FUN_1000378ac_10144c200;
  param_1[5] = 0;
  puVar6 = param_1 + 0x457d;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  param_1[7] = 0;
  FUN_10064e264();
  puVar1 = param_1 + 0x1f;
  FUN_10064e264(puVar1);
  FUN_10064e264();
  thunk_FUN_100076cd0();
  FUN_1006421a8(puVar6);
  *puVar6 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1000aaf24();
  thunk_FUN_1000ab6a4();
  thunk_FUN_1000ab6a4(param_1 + 0x45c3);
  thunk_FUN_100097144();
  thunk_FUN_10008c2a0(param_1 + 0xadf4);
  thunk_FUN_100091a48();
  thunk_FUN_10019a2d4(param_1 + 0xb20a,1);
  thunk_FUN_1000c0a40(param_1 + 0xbbfd);
  thunk_FUN_1000e0398();
  thunk_FUN_1000e04e8();
  thunk_FUN_1000ded30();
  FUN_1000bdba4(param_1 + 50999);
  FUN_1000c5b8c(param_1 + 0xc73d);
  thunk_FUN_1000bdf4c(param_1 + 0xc742);
  thunk_FUN_1000c5d10(param_1 + 0xc746);
  param_1[0xc748] = 0;
  thunk_FUN_100063e1c();
  thunk_FUN_1000a5460();
  thunk_FUN_10008ffb8();
  FUN_100144008(param_1 + 0xf45a);
  thunk_FUN_1001ceb64(param_1 + 0xf45b,1);
  FUN_1006421a8(puVar5);
  *puVar5 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0xf489);
  param_1[0xf489] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(puVar4);
  *puVar4 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0xf4ab] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(puVar3);
  *puVar3 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_10018f3e4(param_1 + 0xf4cd,1);
  *(undefined4 *)(param_1 + 0xf5d2) = 0;
  param_1[0xf5d4] = 0;
  param_1[0xf5d3] = 0;
  param_1[0xf5d5] = 0xffffffff00000000;
  *puVar2 = 0;
  *(byte *)((long)param_1 + 0x7aeb2) = *(byte *)((long)param_1 + 0x7aeb2) & 0xf8;
  FUN_100491b08();
  *(uint *)((long)param_1 + 0x7aeac) = *(uint *)((long)param_1 + 0x7aeac) & 0xfff7ffff;
  FUN_1003467f8();
  uVar9 = FUN_10034ceb0();
  if ((uVar9 & 1) == 0) {
    *(uint *)((long)param_1 + 0x7aeac) = *(uint *)((long)param_1 + 0x7aeac) & 0xfffff7ff;
  }
  DAT_101dc2c38 = param_1;
  FUN_1000c0dbc(param_1 + 0xbbfd);
  uVar10 = FUN_1000bdb98();
  FUN_1004e18bc(uVar10,param_1,0xda87fc4a,FUN_100037534,0);
  uVar10 = FUN_100316150();
  local_98 = (code *)0x0;
  local_80 = thunk_FUN_10003bbb0;
  puStack_90 = param_1;
  local_88 = param_1;
  FUN_10003c508(uVar10,&local_98);
  *(uint *)((long)param_1 + 0x17c) = *(uint *)((long)param_1 + 0x17c) & 0xfffffffb;
  plVar11 = (long *)FUN_100641574("ingame-effects");
  (**(code **)(*plVar11 + 0x78))(plVar11,param_1 + 0x458e,1);
  plVar12 = (long *)FUN_100641574("ingame-ui");
  (**(code **)(*plVar12 + 0x78))(plVar12,param_1 + 8,1);
  (**(code **)(*plVar12 + 0x78))(plVar12,puVar1,1);
  FUN_10002c09c(puVar1);
  FUN_1003467f8();
  iVar8 = FUN_10034cf60();
  uVar13 = 0x2000;
  if (iVar8 == 0) {
    uVar13 = 0;
  }
  *puVar2 = *puVar2 & 0xdfff | uVar13;
  FUN_100642bd8(puVar1,param_1 + 0xb0d7,1);
  plVar12 = (long *)FUN_100641574("root-layer");
  (**(code **)(*plVar12 + 0x78))(plVar12,puVar5,1);
  (**(code **)(*plVar12 + 0x78))(plVar12,param_1 + 0xf489,1);
  FUN_100642bd8(puVar1,param_1 + 0x36,1);
  FUN_100642bd8(param_1 + 0x36,param_1 + 0x4d,1);
  FUN_100642bd8(puVar1,puVar4,1);
  FUN_100642bd8(puVar1,puVar6,1);
  FUN_100642bd8(puVar6,param_1 + 0x45de,1);
  FUN_100642bd8(puVar6,param_1 + 0xeebc,1);
  if ((*puVar2 >> 0xd & 1) != 0) {
    FUN_100642bd8(puVar6,param_1 + 0xe828,1);
  }
  FUN_100642bd8(puVar6,param_1[0xbbfe],1);
  FUN_100642bd8(puVar6,param_1 + 0xc749,1);
  FUN_100642bd8(puVar6,param_1 + 0xbedb,1);
  FUN_100642bd8(puVar6,param_1 + 0xc716,1);
  FUN_100642bd8(puVar6,param_1 + 0xc0cc,1);
  FUN_100642bd8(puVar1,param_1 + 0xf45b,1);
  FUN_100642bd8(puVar1,param_1 + 0xf4ab,1);
  FUN_100642bd8(puVar1,param_1 + 0xb210,1);
  FUN_100642bd8(puVar1,param_1[51000],1);
  FUN_100642bd8(puVar1,param_1[0xc743],1);
  FUN_100642bd8(puVar1,param_1[0xc747],1);
  FUN_100642bd8(puVar1,param_1[0xc73e],1);
  FUN_100642bd8(puVar1,puVar3,1);
  (**(code **)(*plVar11 + 0x78))(plVar11,param_1 + 0x45a9,1);
  FUN_1003467f8();
  iVar8 = FUN_10034cde8();
  if (iVar8 != 0) {
    *(uint *)((long)param_1 + 0x57024) = *(uint *)((long)param_1 + 0x57024) & 0xfffffffb;
  }
  iVar8 = FUN_10007c0f4(param_1 + 0x4d);
  if (iVar8 != 0) {
    uVar10 = FUN_10031615c(5);
    FUN_100037560(param_1,uVar10);
  }
  FUN_10018f600(param_1 + 0xf4cd,1);
  *(uint *)((long)param_1 + 0x7a6ec) = *(uint *)((long)param_1 + 0x7a6ec) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x59104) = *(uint *)((long)param_1 + 0x59104) & 0xfffffffb;
  FUN_10001fd98();
  local_70 = DAT_101dbd484;
  local_98 = FUN_1000375a0;
  puVar1 = param_1 + 9;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd488;
  local_98 = FUN_1000375a8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd48c;
  local_98 = FUN_1000375b0;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd458;
  local_98 = FUN_1000375b8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd45c;
  local_98 = FUN_1000375c0;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd460;
  local_98 = FUN_1000375c8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd470;
  local_98 = FUN_1000375d0;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd474;
  local_98 = FUN_1000375d8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd478;
  local_98 = FUN_1000375e0;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd464;
  local_98 = FUN_1000375e8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd468;
  local_98 = FUN_1000375f0;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd46c;
  local_98 = FUN_1000375f8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101dbd47c;
  local_98 = FUN_100037600;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  *(uint *)((long)param_1 + 0xc4) = *(uint *)((long)param_1 + 0xc4) | 0x10;
  local_70 = FUN_100644a94("EVENT_CLOSE_SHOP");
  local_98 = FUN_100037608;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0x45df,&local_98);
  local_70 = FUN_100644a94("EVENT_CLOSE_SHOP_AND_OPEN_RECOMMENDED_PATH_SELECTOR");
  local_98 = thunk_FUN_10003b7d0;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0x45df,&local_98);
  uVar7 = DAT_101d91884;
  local_70 = DAT_101d91884;
  local_98 = FUN_100037650;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1[0xbbfe] + 8,&local_98);
  local_70 = uVar7;
  local_98 = FUN_100037684;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc74a,&local_98);
  local_70 = uVar7;
  local_98 = FUN_1000376b8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xb0d8,&local_98);
  local_70 = FUN_100644a94("EVENT_CLOSE_TALENT_SELECTOR");
  local_98 = thunk_FUN_10003b624;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xe829,&local_98);
  local_70 = FUN_100644a94("EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR");
  local_98 = FUN_100037700;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xeebd,&local_98);
  local_70 = FUN_100644a94("EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR_AND_OPEN_SHOP");
  local_98 = thunk_FUN_10003b758;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xeebd,&local_98);
  uVar7 = DAT_101d23034;
  local_70 = DAT_101d23034;
  local_98 = FUN_100037748;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xbedc,&local_98);
  local_70 = FUN_100644a94("UI::EVENT_CLOSE_MOBILECHAT");
  local_98 = FUN_10003777c;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc717,&local_98);
  local_70 = uVar7;
  local_98 = thunk_FUN_10003b5e8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc0cd,&local_98);
  local_70 = DAT_101d23840;
  local_98 = thunk_FUN_10003b5e8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc0cd,&local_98);
  local_70 = FUN_100644a94("EVENT_UTILS_SELECT_ITEM");
  local_98 = FUN_1000377b4;
  puVar1 = param_1 + 0x4e;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  iVar8 = FUN_100131208();
  if (iVar8 != 0) {
    local_70 = FUN_100644a94("EVENT_UTILS_FOCUS_KILLED");
    local_98 = FUN_1000377bc;
    local_80 = (code *)0x0;
    uStack_78 = 0;
    local_88 = (undefined8 *)0x0;
    puStack_90 = param_1;
    FUN_10001554c(puVar1,&local_98);
  }
  local_70 = FUN_100644a94("EVENT_SELECT_ZOOM_TOGGLE");
  local_98 = FUN_1000377c4;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = FUN_100644a94("EVENT_BLITZ_ROUNDS_PLAYERS_READY");
  local_98 = FUN_1000377f8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101d23018;
  local_98 = FUN_100037800;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = DAT_101d2301c;
  local_98 = FUN_100037834;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = FUN_100644a94("EVENT_SELECT_SURRENDER");
  local_98 = FUN_100037868;
  puVar1 = param_1 + 0x20;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  local_98 = FUN_100037870;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = FUN_100644a94("EVENT_HIDE_TOOLTIPS");
  local_98 = FUN_100037878;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  local_70 = FUN_100644a94("EVENT_INFO_PANEL_CLOSED");
  local_98 = FUN_1000378a8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&local_98);
  return param_1;
}




void FUN_100037534(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10003bb64(param_1,in_stack_00000000);
  return;
}




void FUN_100037560(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_10007c0e8(param_1 + 0x268);
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  uVar2 = 1;
  if (param_2 == 0) {
    uVar2 = 2;
  }
  FUN_10002d7b8(0x42c80000,uVar1,uVar2);
  return;
}




void FUN_1000375a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a334(param_1,param_4);
  return;
}




void FUN_1000375a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a3c8(param_1,param_4);
  return;
}




void FUN_1000375b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a450(param_1,param_4);
  return;
}




void FUN_1000375b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a4e0(param_1,param_4);
  return;
}




void FUN_1000375c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a574(param_1,param_4);
  return;
}




void FUN_1000375c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a5fc(param_1,param_4);
  return;
}




void FUN_1000375d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a68c(param_1,param_4);
  return;
}




void FUN_1000375d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a720(param_1,param_4);
  return;
}




void FUN_1000375e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a7a8(param_1,param_4);
  return;
}




void FUN_1000375e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a838(param_1,param_4);
  return;
}




void FUN_1000375f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a8cc(param_1,param_4);
  return;
}




void FUN_1000375f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a954(param_1,param_4);
  return;
}




void FUN_100037600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003a9e4(param_1,param_4);
  return;
}




void FUN_100037608(undefined8 param_1)

{
  FUN_100038b24(0x3e4ccccd,param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void thunk_FUN_10003b7d0(long param_1)

{
  FUN_100038b24(0x3e4ccccd,param_1,0);
  *(byte *)(param_1 + 0x7aeb2) = *(byte *)(param_1 + 0x7aeb2) | 1;
  FUN_10003aa60(0x3e4ccccd,param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  return;
}




void FUN_100037650(undefined8 param_1)

{
  FUN_10003a148(param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void FUN_100037684(undefined8 param_1)

{
  FUN_10003aad0(param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void FUN_1000376b8(undefined8 param_1)

{
  FUN_100038b24(0x3e4ccccd,param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  return;
}




void thunk_FUN_10003b624(long param_1)

{
  ushort *puVar1;
  undefined3 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_100038b9c(0x3e4ccccd,param_1,0);
  puVar1 = (ushort *)(param_1 + 0x7aeb0);
  if ((*puVar1 & 0x4000) == 0) {
LAB_10003b704:
    uVar5 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7aeb2) = *(undefined1 *)(param_1 + 0x7aeb2);
    *puVar1 = *puVar1 & 0xbfff;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    lVar4 = FUN_1003de46c();
    iVar3 = FUN_10003b724();
    if (iVar3 == 0) {
LAB_10003b6d0:
      FUN_1003467f8();
      iVar3 = FUN_10034ce88();
      if ((iVar3 == 0) || (*(int *)(lVar4 + 0x28) != 0xfe)) goto LAB_10003b704;
      FUN_100038b24(0x3e4ccccd,param_1,1);
    }
    else {
      uVar2 = *(undefined3 *)puVar1;
      if ((*(byte *)(param_1 + 0x7aeb2) & 1) != 0) goto LAB_10003b6d0;
      *puVar1 = *puVar1;
      *(byte *)(param_1 + 0x7aeb2) = (byte)((uint3)uVar2 >> 0x10) | 1;
      FUN_10003aa60(0x3e4ccccd,param_1,1);
    }
    uVar5 = 0;
  }
  FUN_100038530(0x3e4ccccd,param_1,uVar5);
  return;
}




void FUN_100037700(undefined8 param_1)

{
  FUN_10003aa60(0x3e4ccccd,param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void thunk_FUN_10003b758(long param_1)

{
  undefined **ppuStack_40;
  undefined4 uStack_38;
  
  FUN_10003aa60(0x3e4ccccd,param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  uStack_38 = 0x18;
  ppuStack_40 = &PTR_FUN_10144d738;
  FUN_10005f394(*(long *)(param_1 + 0x38) + 0x260,&ppuStack_40);
  return;
}




void FUN_100037748(undefined8 param_1)

{
  FUN_100038c0c(param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void FUN_10003777c(undefined8 param_1)

{
  FUN_100038c68(param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void thunk_FUN_10003b5e8(undefined8 param_1)

{
  FUN_100038cc4(param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  FUN_1000320fc();
  FUN_100033548();
  return;
}




void FUN_1000377b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003b83c(param_1,param_4);
  return;
}




void FUN_1000377bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003b97c(param_1,param_4);
  return;
}




void FUN_1000377c4(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100316150();
  uVar1 = FUN_10031615c(5);
  FUN_100316360(uVar2,5,uVar1 ^ 1);
  return;
}




void FUN_1000377f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003bb20(param_1,param_4);
  return;
}




void FUN_100037800(undefined8 param_1)

{
  FUN_100038c0c(param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  return;
}




void FUN_100037834(undefined8 param_1)

{
  FUN_100038c68(param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  return;
}




void FUN_100037868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003b9d8(param_1,param_4);
  return;
}




void FUN_100037870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10003ba60(param_1,param_4);
  return;
}




void FUN_100037878(long param_1)

{
  FUN_1001cedd0(param_1 + 0x7a2d8);
  FUN_10007c100(param_1 + 0x268);
  return;
}




void FUN_1000378a8(void)

{
  return;
}




void FUN_1000378ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_thunk_FUN_1000378ac_10144c200;
  uVar3 = FUN_1003166d0();
  FUN_100316fb4(uVar3,0xcc7f156e,0);
  uVar3 = FUN_1003166d0();
  FUN_100316fb4(uVar3,0x5bb9d395,0);
  FUN_100491b44();
  FUN_1006423ec(param_1 + 0xf478,1);
  FUN_1006423ec(param_1 + 0xf489,1);
  FUN_1006423ec(param_1 + 0xf4bc,1);
  plVar4 = (long *)param_1[0xf5d3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  param_1[0xf5d3] = 0;
  if ((long *)param_1[0xf5d4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf5d4] + 8))();
  }
  param_1[0xf5d4] = 0;
  uVar3 = FUN_1000bdb98();
  FUN_1004e1b58(uVar3,param_1);
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar5 = (uint *)FUN_100316150();
    if (*puVar5 != 0) {
      lVar6 = *(long *)(puVar5 + 2);
      lVar7 = (ulong)*puVar5 << 5;
      do {
        puVar1 = (undefined8 *)(lVar6 + 8);
        lVar6 = lVar6 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
  }
  FUN_10001fe44();
  FUN_10002c0d4();
  if ((long *)param_1[0xc748] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc748] + 8))();
  }
  DAT_101dc2c38 = 0;
  FUN_100031c68(param_1 + 0xf4cd);
  FUN_10064221c(param_1 + 0xf4bc);
  FUN_10064221c(param_1 + 0xf4ab);
  FUN_10064221c(param_1 + 0xf49a);
  FUN_10064221c(param_1 + 0xf489);
  FUN_10064221c(param_1 + 0xf478);
  thunk_FUN_1001cec4c(param_1 + 0xf45b);
  thunk_FUN_100090580(param_1 + 0xeebc);
  thunk_FUN_1000a5a94(param_1 + 0xe828);
  thunk_FUN_1000645cc(param_1 + 0xc749);
  FUN_1000c5d78(param_1 + 0xc746);
  FUN_1000bdfb8(param_1 + 0xc742);
  FUN_1000c5bdc(param_1 + 0xc73d);
  FUN_1000bdbf8(param_1 + 50999);
  FUN_1000ded84(param_1 + 0xc716);
  thunk_FUN_1000e0538(param_1 + 0xc0cc);
  FUN_1000e041c(param_1 + 0xbedb);
  thunk_FUN_1000c0c08(param_1 + 0xbbfd);
  thunk_FUN_10019a96c(param_1 + 0xb20a);
  FUN_10003bc74(param_1 + 0xb0d7);
  param_1[0xadf4] = &PTR_FUN_10144fb80;
  FUN_10003bd40(param_1 + 0xae20);
  FUN_10064221c(param_1 + 0xae0f);
  FUN_10064e2bc(param_1 + 0xadf4);
  thunk_FUN_10009791c(param_1 + 0x45de);
  param_1[0x45c3] = &PTR_FUN_101452190;
  param_1[0x45d4] = &PTR_FUN_1014522a0;
  thunk_FUN_100657580(param_1 + 0x45d7);
  FUN_10064221c(param_1 + 0x45c3);
  param_1[0x45a9] = &PTR_FUN_101452190;
  param_1[0x45ba] = &PTR_FUN_1014522a0;
  thunk_FUN_100657580(param_1 + 0x45bd);
  FUN_10064221c(param_1 + 0x45a9);
  param_1[0x458e] = &PTR_FUN_101452038;
  param_1[0x459f] = &PTR_FUN_101452148;
  thunk_FUN_100657580(param_1 + 0x45a2);
  FUN_10064221c(param_1 + 0x458e);
  FUN_10064221c(param_1 + 0x457d);
  thunk_FUN_100077f40(param_1 + 0x4d);
  thunk_FUN_10064e2bc(param_1 + 0x36);
  thunk_FUN_10064e2bc(param_1 + 0x1f);
  thunk_FUN_10064e2bc(param_1 + 8);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_1000378ac(void)

{
  FUN_1000378ac();
  return;
}




void FUN_100037c78(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000378ac();
  operator_delete(pvVar1);
  return;
}




void FUN_100037c8c(long param_1)

{
  long lVar1;
  
  DAT_10184deb0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184deb0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184deb0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1000367fc;
  *(code **)(lVar1 + 0xb8) = FUN_10003c67c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184deb0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x7aec0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_100037dbc,0);
  FUN_1010a0990(param_1,0x295f0542,FUN_100037ec4,0);
  FUN_1010a0990(param_1,0x4c810744,FUN_100037ef4,0);
  FUN_1010a0990(param_1,0x366b0603,FUN_100037f2c,0);
  FUN_1010a0990(param_1,0x6f1408f8,FUN_100037f5c,0);
  FUN_1010a0990(param_1,0x455a06ef,FUN_100037f90,0);
  FUN_1010a0990(param_1,0x163803be,FUN_100037fcc,0);
  return;
}




void FUN_100037dbc(long param_1)

{
  ushort *puVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
  }
  else {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
  }
  FUN_100037fd8(param_1);
  FUN_1000c18fc(param_1 + 0x5dfe8);
  FUN_1000c5c60(param_1 + 0x639e8);
  puVar1 = (ushort *)(param_1 + 0x7aeb0);
  if ((*puVar1 >> 0xc & 1) == 0) {
    FUN_1000320fc();
    fVar4 = (float)FUN_100032244();
    if (1.5 < fVar4) {
      FUN_1000320fc();
      fVar4 = (float)FUN_100032244();
      if (fVar4 < 10.0) {
        *puVar1 = *puVar1 | 0x4000;
      }
      FUN_100038060(param_1,uVar3);
      return;
    }
  }
  return;
}




void FUN_100037ec4(long param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10007bef8(param_1 + 0x268,in_stack_00000000);
  return;
}




void FUN_100037ef4(long param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10007bf00((float)*(double *)((ulong)&stack0x00000000 | 8),param_1 + 0x268,in_stack_00000000);
  return;
}




void FUN_100037f2c(long param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10007bf08(param_1 + 0x268,in_stack_00000000);
  return;
}




void FUN_100037f5c(long param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10007bf10(param_1 + 0x268,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100037f90(undefined8 param_1)

{
  FUN_100038b9c(0x3f4ccccd,param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  return;
}




void FUN_100037fcc(long param_1)

{
  FUN_10007bc94(param_1 + 0x268,1);
  return;
}




void FUN_100037fd8(long param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  pfVar1 = (float *)(param_1 + 0x7aea8);
  if (0.0 < *pfVar1) {
    fVar3 = (float)FUN_1010a1cd4();
    *pfVar1 = *pfVar1 - fVar3;
    return;
  }
  *pfVar1 = 0.1;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  iVar2 = FUN_10049057c();
  FUN_10007bfb0(param_1 + 0x268,iVar2 != 0);
  return;
}




void FUN_100038060(long param_1,long param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  float fVar8;
  
  lVar7 = *(long *)(param_2 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dea0))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  uVar3 = FUN_100345b94();
  uVar4 = FUN_100345bb4(param_2);
  uVar3 = FUN_100345ba0(uVar3,uVar4);
  puVar1 = (ushort *)(param_1 + 0x7aeb0);
  if (((*puVar1 >> 0xd & 1) == 0) || (lVar7 == 0)) {
LAB_1000380f8:
    FUN_1000320fc();
    fVar8 = (float)FUN_100032244();
    if (10.0 <= fVar8) goto LAB_100038194;
    if (((*(byte *)(param_1 + 0x7aeb2) & 1) == 0) && (iVar2 = FUN_10003b724(), iVar2 != 0)) {
      *(byte *)(param_1 + 0x7aeb2) = *(byte *)(param_1 + 0x7aeb2) | 1;
      FUN_10003aa60(0x3e4ccccd,param_1,1);
    }
    else {
      FUN_1003467f8();
      iVar2 = FUN_10034ce88();
      if (iVar2 == 0) goto LAB_100038194;
      FUN_100038b24(0x3f4ccccd,param_1,1);
    }
  }
  else {
    uVar4 = FUN_100341d4c();
    iVar2 = FUN_1003427e0(uVar4,uVar3);
    if ((iVar2 == 0) || (uVar5 = FUN_1001311d4(), (uVar5 & 1) != 0)) goto LAB_1000380f8;
    if ((*(char *)(lVar7 + 0x48) != '\0') ||
       ((lVar7 = FUN_1003467f8(), lVar7 != 0 && (piVar6 = (int *)FUN_1003467f8(), *piVar6 == 0x1c)))
       ) goto LAB_100038194;
    FUN_100038b9c(0x3f4ccccd,param_1,1);
  }
  FUN_100038530(0x3e4ccccd,param_1,0);
LAB_100038194:
  *puVar1 = *puVar1 | 0x1000;
  return;
}




void FUN_1000381e0(long param_1)

{
  FUN_100064a74(param_1 + 0x63a48);
  return;
}




void FUN_1000381f0(float param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  float *pfVar6;
  ulong uVar7;
  void *local_88 [2];
  char local_71;
  void *local_70 [2];
  char local_59;
  
  uVar3 = FUN_1003166d0();
  FUN_100316fb4(uVar3,0xcc7f156e,1);
  uVar3 = FUN_1003166d0();
  FUN_100316fb4(uVar3,0x5bb9d395,1);
  *(long *)(param_2 + 0x28) = param_3 + 0x28;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = param_4;
  FUN_100097c48(param_2 + 0x22ef0,param_3);
  FUN_1000907d8(param_2 + 0x775e0,param_3);
  if ((*(ushort *)(param_2 + 0x7aeb0) >> 0xd & 1) != 0) {
    FUN_1000a5d68(param_2 + 0x74140,param_3);
  }
  FUN_1000648b8(param_2 + 0x63a48,param_3);
  FUN_100091f78(param_2 + 0x586b8,param_3);
  FUN_10008c458(param_2 + 0x56fa0,param_3);
  FUN_100078bd0(param_2 + 0x268,param_3);
  lVar4 = FUN_100641574("plaques-all");
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x84);
    *(uint *)(lVar4 + 0x84) = uVar1 | 4;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(lVar4 + 0x84) = uVar1 | 0x7f84;
      FUN_1000200a0();
    }
  }
  if (param_5 != 0) {
    *(uint *)(param_2 + 0x17c) = *(uint *)(param_2 + 0x17c) | 4;
    FUN_100038530(0x3e4ccccd,param_2,1);
    FUN_1000386f8(param_2);
  }
  FUN_1003467f8();
  iVar2 = FUN_10034cde0();
  if (iVar2 != 0) {
    local_70[0] = (void *)0x0;
    FUN_1010a1958(local_70,1,DAT_10184db08,0);
    if (local_70[0] != (void *)0x0) {
      FUN_1000515e4(local_70[0],param_2);
    }
    operator_new(0x570);
    uVar3 = thunk_FUN_10019c69c();
    *(undefined8 *)(param_2 + 0x7ae98) = uVar3;
    FUN_10019cc60(uVar3,1);
    FUN_100642bd8(param_2 + 0x7a5e0,*(undefined8 *)(param_2 + 0x7ae98),1);
    iVar2 = FUN_10015d3f8();
    if ((iVar2 == 0) ||
       (((lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55d4) == 0 &&
         (iVar2 = FUN_10016c2fc(), iVar2 != 0)) &&
        (lVar4 = FUN_10016c2f0(), 0 < *(int *)(lVar4 + 0x38))))) {
      uVar3 = FUN_100316150();
      FUN_100316360(uVar3,0x1a,0);
      uVar3 = FUN_100316150();
      FUN_100316360(uVar3,0x1b,1);
    }
    pvVar5 = operator_new(0x2c30);
    uVar3 = thunk_FUN_10008acdc();
    *(undefined8 *)(param_2 + 0x7aea0) = uVar3;
    FUN_100642bd8(param_2 + 0xf8,pvVar5,1);
    *(uint *)(*(long *)(param_2 + 0x7aea0) + 0x84) =
         *(uint *)(*(long *)(param_2 + 0x7aea0) + 0x84) & 0xfffffffb;
  }
  pfVar6 = (float *)FUN_1003e10f0();
  if (param_1 < *pfVar6) {
    FUN_1003467f8();
    iVar2 = FUN_10034ce88();
    if (iVar2 != 0) {
      FUN_1003467f8();
      iVar2 = FUN_10034cf58();
      if (iVar2 == 0) goto LAB_100038498;
    }
  }
  FUN_100038530(0x3e4ccccd,param_2,1);
LAB_100038498:
  uVar7 = FUN_100126a5c();
  if ((uVar7 & 1) == 0) {
    FUN_1000117e8(local_70,0xfe);
    FUN_100345498(local_70);
  }
  iVar2 = FUN_1004eef10();
  if (iVar2 != 0) {
    lVar4 = FUN_1004f0338();
    FUN_10003330c(local_70,lVar4 + 0xa0);
    FUN_100345bbc(param_3);
    FUN_10010a578(local_88);
    FUN_1000dedf0(param_2 + 0x638b0,local_88,param_3);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    if (local_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  return;
}




void FUN_100038530(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  
  lVar1 = param_2 + 0x268;
  uVar2 = FUN_10007bbc8(lVar1);
  iVar5 = (int)param_3;
  if (iVar5 == 0) {
    if (uVar2 != 0) {
      FUN_10007c13c(lVar1);
    }
  }
  else if ((uVar2 & 1) == 0) {
    FUN_10007c150(lVar1);
  }
  FUN_10007b680(param_1,lVar1,param_3,*(undefined4 *)(param_2 + 0x7aeac),
                *(ushort *)(param_2 + 0x7aeb0) >> 0xf);
  uVar3 = FUN_100641574("plaques-all");
  lVar1 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063fcac(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar7 = 0x3f800000;
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  FUN_10063fce0(uVar7,puVar6);
  FUN_10063f0e8(0x3ecccccd,puVar6);
  FUN_100642324(uVar3);
  FUN_100642b14(uVar3,puVar6);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_100038b24(0x3e4ccccd,param_2,0);
    FUN_10003a148(param_2,0);
    FUN_10003aad0(param_2,0);
    FUN_100038c0c(param_2,0);
    FUN_100038c68(param_2,0);
    FUN_100038cc4(param_2,0);
    uVar4 = 0x800;
  }
  *(ushort *)(param_2 + 0x7aeb0) = *(ushort *)(param_2 + 0x7aeb0) & 0xf7ff | uVar4;
  return;
}




void FUN_1000386f8(long param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_100641464(&uStack_24,&local_28);
  FUN_10064e47c(uStack_24,local_28,param_1 + 0x40);
  FUN_10064e47c(uStack_24,local_28,param_1 + 0xf8);
  FUN_10064e47c(uStack_24,local_28,param_1 + 0x1b0);
  return;
}




void FUN_10003874c(long param_1)

{
  FUN_1000c1080(param_1 + 0x5dfe8);
  return;
}




void FUN_10003875c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  
  *(ushort *)(param_1 + 0x7aeb0) = *(ushort *)(param_1 + 0x7aeb0) | 0x8000;
  FUN_100038530(0x3e4ccccd,param_1,0);
  FUN_10007bd6c(param_1 + 0x268);
  FUN_100269e20(0x3e4ccccd,param_1 + 0x63a48,0,4,1);
  FUN_100038b24(0x3e4ccccd,param_1,0);
  FUN_100038b9c(0x3e4ccccd,param_1,0);
  FUN_100038c0c(param_1,0);
  FUN_100038c68(param_1,0);
  FUN_100038cc4(param_1,0);
  iVar2 = FUN_1001311d4();
  if (iVar2 != 0) {
    FUN_1000320fc();
    FUN_100033548();
    return;
  }
  FUN_1003467f8();
  iVar2 = FUN_10034cde0();
  lVar6 = param_1 + 0x5dfe8;
  if (iVar2 == 0) {
    uVar3 = 1;
LAB_1000388cc:
    FUN_1000c0e78(0x3e4ccccd,lVar6,1,uVar3);
    FUN_1000c0fe8(lVar6,param_2,param_3);
    goto switchD_1000388ac_caseD_2f;
  }
  puVar1 = (undefined8 *)(param_1 + 0x7aea0);
  FUN_1000c0e78(0x3e4ccccd,lVar6,0,0);
  uVar3 = FUN_10034cc34();
  switch((int)uVar3) {
  case 3:
    FUN_100038d5c(uVar3,*puVar1,param_3);
    break;
  case 4:
    FUN_1000390b0(uVar3,*puVar1,param_3);
    break;
  case 5:
switchD_1000388ac_caseD_2e:
    FUN_10003928c(uVar3,*puVar1,param_3);
    break;
  case 6:
    break;
  case 7:
    FUN_100039934(uVar3,*puVar1,param_3);
    break;
  default:
    switch((int)uVar3) {
    case 0x2d:
      FUN_1000395e0(uVar3,*puVar1,param_3);
      break;
    case 0x2e:
      goto switchD_1000388ac_caseD_2e;
    case 0x34:
      FUN_100038cc4(param_1,1);
      FUN_100038530(0x3e4ccccd,param_1,0);
      break;
    case 0x35:
      uVar3 = 0;
      goto LAB_1000388cc;
    }
  }
switchD_1000388ac_caseD_2f:
  FUN_1000921d0(0x3e4ccccd,param_1 + 0x586b8,0,4,1);
  *(uint *)(param_1 + 0x5873c) = *(uint *)(param_1 + 0x5873c) & 0xfffffff7;
  FUN_100269e20(0x3e4ccccd,param_1 + 0x56fa0,0,4,1);
  FUN_10002c0d4();
  iVar2 = FUN_1000c18f0(lVar6);
  if (iVar2 == 6) {
    FUN_1003467f8();
    uVar4 = FUN_10034cde8();
    if ((uVar4 & 1) == 0) {
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 == (long *)0x0) {
        lVar6 = 0;
      }
      else if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
        lVar6 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        lVar6 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
      }
      uVar3 = FUN_100345b94();
      uVar7 = FUN_100345bb4(lVar6);
      uVar3 = FUN_100345ba0(uVar3,uVar7);
      uVar7 = FUN_1003467f8();
      FUN_1000320fc();
      FUN_100032244();
      if ((int)param_2 == 0) {
        FUN_1001058f8(uVar3,uVar7);
      }
      else {
        FUN_1001057b4();
      }
      for (lVar6 = *(long *)(lVar6 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
        if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184dea0) {
          lVar6 = FUN_100464be4();
          if (lVar6 == 0) {
            uVar9 = FUN_1003467f8();
            pcVar11 = "talent_none";
            uVar10 = 0;
            uVar7 = 0;
          }
          else {
            pcVar11 = *(char **)(lVar6 + 0x38);
            lVar8 = FUN_1003e000c();
            uVar10 = *(undefined4 *)(lVar8 + 0x18);
            uVar7 = FUN_1003e0014(lVar6);
            uVar9 = FUN_1003467f8();
          }
          FUN_1001065bc(uVar3,pcVar11,uVar10,uVar7,uVar9,param_2);
          return;
        }
      }
    }
  }
  return;
}




void FUN_100038b24(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100039e6c(param_2,1,param_3);
  FUN_100269e20(param_1,param_2 + 0x22ef0,param_3,4,1);
  if ((int)param_3 != 0) {
    FUN_100092384();
    return;
  }
  FUN_100092404(param_2 + 0x586b8);
  return;
}




void FUN_100038b9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100039e6c(param_2,4,param_3);
  if ((int)param_3 == 0) {
    FUN_100092404(param_2 + 0x586b8);
  }
  else {
    FUN_100092384();
  }
  FUN_100269e20(param_1,param_2 + 0x74140,param_3,4,1);
  return;
}




void FUN_100038c0c(long param_1,undefined8 param_2)

{
  FUN_100039e6c(param_1,6,param_2);
  FUN_1000e0488(param_1 + 0x5f6d8,param_2);
  if ((int)param_2 != 0) {
    FUN_100092384();
    return;
  }
  FUN_100092404(param_1 + 0x586b8);
  return;
}




void FUN_100038c68(long param_1,undefined8 param_2)

{
  FUN_100039e6c(param_1,8,param_2);
  FUN_1000dede8(param_1 + 0x638b0,param_2);
  if ((int)param_2 != 0) {
    FUN_100092384();
    return;
  }
  FUN_100092404(param_1 + 0x586b8);
  return;
}




void FUN_100038cc4(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1000e0618(param_1 + 0x60660);
    FUN_100039e6c(param_1,7,1);
    thunk_FUN_1000df4bc(param_1 + 0x60660,1);
    FUN_100092384(param_1 + 0x586b8);
    return;
  }
  FUN_100039e6c(param_1,7,0);
  thunk_FUN_1000df4bc(param_1 + 0x60660,0);
  FUN_100092404(param_1 + 0x586b8);
  return;
}




void FUN_100038d5c(undefined8 param_1,long *param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined8 local_168;
  undefined8 *local_160;
  undefined8 **local_158;
  void *local_150;
  undefined1 **local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined1 local_128;
  undefined1 *local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined1 local_100;
  undefined1 auStack_f8 [8];
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined1 local_d8;
  undefined1 auStack_d0 [8];
  void *local_c8;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  ulong local_70;
  undefined8 *local_68;
  
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  uVar2 = FUN_1004e0150("TUTORIAL1_END_MATCH_DEFEATED_MINION",0);
  thunk_FUN_1004e439c(auStack_80,uVar2);
  uVar2 = FUN_1004e0150("TUTORIAL1_END_MATCH_DEFEATED_JUNGLE_MONSTER",0);
  thunk_FUN_1004e439c(auStack_90,uVar2);
  uVar2 = FUN_1004e0150("TUTORIAL1_END_MATCH_DEFEATED_PHINN",0);
  thunk_FUN_1004e439c(auStack_a0,uVar2);
  FUN_1004e313c(auStack_b0);
  bVar1 = param_3 != 0;
  iVar4 = 100;
  if (bVar1) {
    iVar4 = 0;
  }
  iVar5 = 500;
  if (bVar1) {
    iVar5 = 0;
  }
  iVar6 = 3000;
  if (bVar1) {
    iVar6 = 0;
  }
  uVar7 = 3;
  if (bVar1) {
    uVar7 = 0;
  }
  FUN_1004e38ac(auStack_b0,"%d");
  FUN_1004e313c(auStack_c0);
  FUN_1004e38ac(auStack_c0,"%d");
  FUN_1004e313c(auStack_d0);
  FUN_1004e38ac(auStack_d0,"%d");
  thunk_FUN_1004e439c(auStack_f8,auStack_80);
  thunk_FUN_1004e439c(&local_e8,auStack_b0);
  local_d8 = 1;
  local_120 = auStack_f8;
  FUN_10003bbf4(&local_70,&local_120);
  thunk_FUN_1004e439c(&local_120,auStack_90);
  thunk_FUN_1004e439c(&local_110,auStack_c0);
  local_100 = 1;
  local_148 = &local_120;
  FUN_10003bbf4(&local_70,&local_148);
  thunk_FUN_1004e439c(&local_148,auStack_a0);
  thunk_FUN_1004e439c(&local_138,auStack_d0);
  local_128 = 1;
  local_158 = &local_148;
  FUN_10003bbf4(&local_70,&local_158);
  fVar12 = (float)(iVar4 + iVar5 + iVar6 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar11 = (ulong)(uint)(int)fVar12;
  FUN_1004e313c(&local_158);
  FUN_1004e38ac(&local_158,"%d");
  uVar2 = FUN_1004e0150("REWARD_SCREEN_TUTORIAL1",0);
  local_168 = 0;
  local_160 = (undefined8 *)0x0;
  FUN_10003c688(&local_168,local_70 & 0xffffffff);
  if ((int)local_70 != 0) {
    lVar10 = (local_70 & 0xffffffff) << 3;
    puVar8 = local_68;
    puVar9 = local_160;
    do {
      *puVar9 = *puVar8;
      lVar10 = lVar10 + -8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  local_168 = CONCAT44(local_168._4_4_,(int)local_70);
  uVar3 = FUN_1004e0150("REWARD_SCREEN_SCORE",0);
  FUN_10008b454(param_2,uVar7,uVar2,&local_168,uVar3,&local_158,in_x6,in_x7,uVar11);
  if (local_160 != (undefined8 *)0x0) {
    operator_delete__(local_160);
    local_168 = 0;
    local_160 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_138 = 0;
    local_130 = (void *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (local_108 != (void *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (void *)0x0;
  }
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (undefined8 *)0x0) {
    operator_delete__(local_68);
  }
  return;
}




void FUN_1000390b0(undefined8 param_1,long *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined1 local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  ulong local_50;
  undefined8 *local_48;
  
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  iVar3 = 1000;
  if (param_3 != 0) {
    iVar3 = 0;
  }
  uVar1 = FUN_1004e0150("TUTORIAL3_END_MATCH",0);
  thunk_FUN_1004e439c(auStack_60,uVar1);
  FUN_1004e3120(&local_98,"1000");
  thunk_FUN_1004e439c(auStack_88,auStack_60);
  thunk_FUN_1004e439c(&local_78,&local_98);
  local_68 = 1;
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  local_98 = auStack_88;
  FUN_10003bbf4(&local_50,&local_98);
  uVar4 = 3;
  if (param_3 != 0) {
    uVar4 = 0;
  }
  fVar9 = (float)iVar3;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  uVar8 = (ulong)(uint)(int)fVar9;
  FUN_1004e313c(&local_98);
  FUN_1004e38ac(&local_98,"%d");
  uVar1 = FUN_1004e0150("REWARD_SCREEN_TUTORIAL2",0);
  local_a8 = 0;
  local_a0 = (undefined8 *)0x0;
  FUN_10003c688(&local_a8,local_50 & 0xffffffff);
  if ((int)local_50 != 0) {
    lVar7 = (local_50 & 0xffffffff) << 3;
    puVar5 = local_48;
    puVar6 = local_a0;
    do {
      *puVar6 = *puVar5;
      lVar7 = lVar7 + -8;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  local_a8 = CONCAT44(local_a8._4_4_,(int)local_50);
  uVar2 = FUN_1004e0150("REWARD_SCREEN_SCORE",0);
  FUN_10008b454(param_2,uVar4,uVar1,&local_a8,uVar2,&local_98,in_x6,in_x7,uVar8);
  if (local_a0 != (undefined8 *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (undefined8 *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_10003928c(undefined8 param_1,long *param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined8 local_168;
  undefined8 *local_160;
  undefined8 **local_158;
  void *local_150;
  undefined1 **local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined1 local_128;
  undefined1 *local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined1 local_100;
  undefined1 auStack_f8 [8];
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined1 local_d8;
  undefined1 auStack_d0 [8];
  void *local_c8;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  ulong local_70;
  undefined8 *local_68;
  
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  uVar2 = FUN_1004e0150("TUTORIAL2_END_MATCH_WAVE_1",0);
  thunk_FUN_1004e439c(auStack_80,uVar2);
  uVar2 = FUN_1004e0150("TUTORIAL2_END_MATCH_WAVE_2",0);
  thunk_FUN_1004e439c(auStack_90,uVar2);
  uVar2 = FUN_1004e0150("TUTORIAL2_END_MATCH_WAVE_3",0);
  thunk_FUN_1004e439c(auStack_a0,uVar2);
  FUN_1004e313c(auStack_b0);
  bVar1 = param_3 != 0;
  iVar4 = 100;
  if (bVar1) {
    iVar4 = 0;
  }
  iVar5 = 500;
  if (bVar1) {
    iVar5 = 0;
  }
  iVar6 = 1000;
  if (bVar1) {
    iVar6 = 0;
  }
  uVar7 = 3;
  if (bVar1) {
    uVar7 = 0;
  }
  FUN_1004e38ac(auStack_b0,"%d");
  FUN_1004e313c(auStack_c0);
  FUN_1004e38ac(auStack_c0,"%d");
  FUN_1004e313c(auStack_d0);
  FUN_1004e38ac(auStack_d0,"%d");
  thunk_FUN_1004e439c(auStack_f8,auStack_80);
  thunk_FUN_1004e439c(&local_e8,auStack_b0);
  local_d8 = 1;
  local_120 = auStack_f8;
  FUN_10003bbf4(&local_70,&local_120);
  thunk_FUN_1004e439c(&local_120,auStack_90);
  thunk_FUN_1004e439c(&local_110,auStack_c0);
  local_100 = 1;
  local_148 = &local_120;
  FUN_10003bbf4(&local_70,&local_148);
  thunk_FUN_1004e439c(&local_148,auStack_a0);
  thunk_FUN_1004e439c(&local_138,auStack_d0);
  local_128 = 1;
  local_158 = &local_148;
  FUN_10003bbf4(&local_70,&local_158);
  fVar12 = (float)(iVar4 + iVar5 + iVar6 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar11 = (ulong)(uint)(int)fVar12;
  FUN_1004e313c(&local_158);
  FUN_1004e38ac(&local_158,"%d");
  uVar2 = FUN_1004e0150("5V5_TUTORIAL_VICTORY_3",0);
  local_168 = 0;
  local_160 = (undefined8 *)0x0;
  FUN_10003c688(&local_168,local_70 & 0xffffffff);
  if ((int)local_70 != 0) {
    lVar10 = (local_70 & 0xffffffff) << 3;
    puVar8 = local_68;
    puVar9 = local_160;
    do {
      *puVar9 = *puVar8;
      lVar10 = lVar10 + -8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  local_168 = CONCAT44(local_168._4_4_,(int)local_70);
  uVar3 = FUN_1004e0150("REWARD_SCREEN_SCORE",0);
  FUN_10008b454(param_2,uVar7,uVar2,&local_168,uVar3,&local_158,in_x6,in_x7,uVar11);
  if (local_160 != (undefined8 *)0x0) {
    operator_delete__(local_160);
    local_168 = 0;
    local_160 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_138 = 0;
    local_130 = (void *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (local_108 != (void *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (void *)0x0;
  }
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (undefined8 *)0x0) {
    operator_delete__(local_68);
  }
  return;
}




void FUN_1000395e0(undefined8 param_1,long *param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined8 local_168;
  undefined8 *local_160;
  undefined8 **local_158;
  void *local_150;
  undefined1 **local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined1 local_128;
  undefined1 *local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined1 local_100;
  undefined1 auStack_f8 [8];
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined1 local_d8;
  undefined1 auStack_d0 [8];
  void *local_c8;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  ulong local_70;
  undefined8 *local_68;
  
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  uVar2 = FUN_1004e0150("TUTORIAL_05_5v5_END_MATCH_WAVE_1",0);
  thunk_FUN_1004e439c(auStack_80,uVar2);
  uVar2 = FUN_1004e0150("TUTORIAL_05_5v5_END_MATCH_WAVE_2",0);
  thunk_FUN_1004e439c(auStack_90,uVar2);
  uVar2 = FUN_1004e0150("TUTORIAL_05_5v5_END_MATCH_WAVE_3",0);
  thunk_FUN_1004e439c(auStack_a0,uVar2);
  FUN_1004e313c(auStack_b0);
  bVar1 = param_3 != 0;
  iVar4 = 100;
  if (bVar1) {
    iVar4 = 0;
  }
  iVar5 = 500;
  if (bVar1) {
    iVar5 = 0;
  }
  iVar6 = 1000;
  if (bVar1) {
    iVar6 = 0;
  }
  uVar7 = 3;
  if (bVar1) {
    uVar7 = 0;
  }
  FUN_1004e38ac(auStack_b0,"%d");
  FUN_1004e313c(auStack_c0);
  FUN_1004e38ac(auStack_c0,"%d");
  FUN_1004e313c(auStack_d0);
  FUN_1004e38ac(auStack_d0,"%d");
  thunk_FUN_1004e439c(auStack_f8,auStack_80);
  thunk_FUN_1004e439c(&local_e8,auStack_b0);
  local_d8 = 1;
  local_120 = auStack_f8;
  FUN_10003bbf4(&local_70,&local_120);
  thunk_FUN_1004e439c(&local_120,auStack_90);
  thunk_FUN_1004e439c(&local_110,auStack_c0);
  local_100 = 1;
  local_148 = &local_120;
  FUN_10003bbf4(&local_70,&local_148);
  thunk_FUN_1004e439c(&local_148,auStack_a0);
  thunk_FUN_1004e439c(&local_138,auStack_d0);
  local_128 = 1;
  local_158 = &local_148;
  FUN_10003bbf4(&local_70,&local_158);
  fVar12 = (float)(iVar4 + iVar5 + iVar6 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar11 = (ulong)(uint)(int)fVar12;
  FUN_1004e313c(&local_158);
  FUN_1004e38ac(&local_158,"%d");
  uVar2 = FUN_1004e0150("REWARD_SCREEN_TUTORIAL_05_5v5",0);
  local_168 = 0;
  local_160 = (undefined8 *)0x0;
  FUN_10003c688(&local_168,local_70 & 0xffffffff);
  if ((int)local_70 != 0) {
    lVar10 = (local_70 & 0xffffffff) << 3;
    puVar8 = local_68;
    puVar9 = local_160;
    do {
      *puVar9 = *puVar8;
      lVar10 = lVar10 + -8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  local_168 = CONCAT44(local_168._4_4_,(int)local_70);
  uVar3 = FUN_1004e0150("REWARD_SCREEN_SCORE",0);
  FUN_10008b454(param_2,uVar7,uVar2,&local_168,uVar3,&local_158,in_x6,in_x7,uVar11);
  if (local_160 != (undefined8 *)0x0) {
    operator_delete__(local_160);
    local_168 = 0;
    local_160 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_138 = 0;
    local_130 = (void *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (local_108 != (void *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (void *)0x0;
  }
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (undefined8 *)0x0) {
    operator_delete__(local_68);
  }
  return;
}




void FUN_100039934(undefined8 param_1,long *param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined8 local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  void *local_100;
  undefined1 auStack_f8 [8];
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined1 local_d8;
  undefined1 auStack_d0 [8];
  void *local_c8;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  ulong local_70;
  undefined8 *local_68;
  
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  uVar2 = FUN_1004e0150("TUTORIAL_05_5v5_END_MATCH_WAVE_1",0);
  thunk_FUN_1004e439c(auStack_80,uVar2);
  uVar2 = FUN_1004e0150("TUTORIAL_05_5v5_END_MATCH_WAVE_2",0);
  thunk_FUN_1004e439c(auStack_90,uVar2);
  uVar2 = FUN_1004e0150("MAIN_TUTORIAL_TILE_TITLE_3",0);
  thunk_FUN_1004e439c(auStack_a0,uVar2);
  FUN_1004e313c(auStack_b0);
  bVar1 = param_3 != 0;
  iVar4 = 100;
  if (bVar1) {
    iVar4 = 0;
  }
  iVar5 = 500;
  if (bVar1) {
    iVar5 = 0;
  }
  iVar6 = 3000;
  if (bVar1) {
    iVar6 = 0;
  }
  uVar7 = 3;
  if (bVar1) {
    uVar7 = 0;
  }
  FUN_1004e38ac(auStack_b0,"%d");
  FUN_1004e313c(auStack_c0);
  FUN_1004e38ac(auStack_c0,"%d");
  FUN_1004e313c(auStack_d0);
  FUN_1004e38ac(auStack_d0,"%d");
  thunk_FUN_1004e439c(auStack_f8,auStack_a0);
  thunk_FUN_1004e439c(&local_e8,auStack_d0);
  local_d8 = 1;
  local_108 = auStack_f8;
  FUN_10003bbf4(&local_70,&local_108);
  fVar12 = (float)(iVar4 + iVar5 + iVar6 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar11 = (ulong)(uint)(int)fVar12;
  FUN_1004e313c(&local_108);
  FUN_1004e38ac(&local_108,"%d");
  uVar2 = FUN_1004e0150("MAIN_TUTORIAL_TILE_TITLE_4",0);
  local_118 = 0;
  local_110 = (undefined8 *)0x0;
  FUN_10003c688(&local_118,local_70 & 0xffffffff);
  if ((int)local_70 != 0) {
    lVar10 = (local_70 & 0xffffffff) << 3;
    puVar8 = local_68;
    puVar9 = local_110;
    do {
      *puVar9 = *puVar8;
      lVar10 = lVar10 + -8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  local_118 = CONCAT44(local_118._4_4_,(int)local_70);
  uVar3 = FUN_1004e0150("REWARD_SCREEN_SCORE",0);
  FUN_10008b454(param_2,uVar7,uVar2,&local_118,uVar3,&local_108,in_x6,in_x7,uVar11);
  if (local_110 != (undefined8 *)0x0) {
    operator_delete__(local_110);
    local_118 = 0;
    local_110 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_100 != (void *)0x0) {
    operator_delete__(local_100);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (undefined8 *)0x0) {
    operator_delete__(local_68);
  }
  return;
}




void FUN_100039be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  uVar1 = FUN_10034cb58();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10007bfd8(param_1 + 0x268,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_100039c5c(long param_1,undefined8 param_2)

{
  FUN_10007c048(param_1 + 0x268);
  FUN_10007c088(param_1 + 0x268,param_2);
  return;
}




void FUN_100039c8c(long param_1)

{
  FUN_10007c0a8(param_1 + 0x268);
  FUN_10007c098(param_1 + 0x268);
  return;
}




void FUN_100039cb4(long param_1)

{
  FUN_10007bedc(param_1 + 0x268);
  return;
}




void FUN_100039cbc(long param_1,byte *param_2)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  FUN_10007bcd8(param_1 + 0x268);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else if (*(int *)(param_1 + 0x30) == (int)plVar4[1]) {
    lVar5 = (**(code **)(*plVar4 + 0x10))();
  }
  else {
    lVar5 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
  }
  lVar6 = 0;
  puVar1 = (ushort *)(param_1 + 0x7aeb0);
  *puVar1 = *puVar1 & 0xf800;
  do {
    if (*(int *)(param_2 + lVar6 * 4 + 8) == *(int *)(lVar5 + 0x260)) {
      uVar7 = *(undefined4 *)(param_2 + lVar6 * 4 + 0x58);
LAB_100039dac:
      FUN_1000c1968(uVar7,param_1 + 0x5dfe8);
    }
    else {
      bVar2 = *param_2;
      uVar3 = FUN_100345bbc(lVar5);
      if ((bVar2 == uVar3) && (param_2[lVar6 + 0x48] == 3)) {
        *puVar1 = *puVar1 & 0xf800 | *puVar1 + 1 & 0x7ff;
        uVar7 = 0;
        goto LAB_100039dac;
      }
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 0x10) {
      if ((*puVar1 & 0x7ff) != 0) {
        FUN_1000c1988(param_1 + 0x5dfe8,*puVar1 & 0x7ff);
        return;
      }
      return;
    }
  } while( true );
}




void FUN_100039e00(long param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x7ae90) == 0;
  if (bVar1) {
    FUN_100038c0c(param_1,1);
  }
  else {
    FUN_100039e6c(param_1,0,0);
  }
  FUN_100038530(0x3e4ccccd,param_1,!bVar1);
  return;
}




void FUN_100039e6c(long param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x7ae90);
    FUN_100038530(0x3e4ccccd,param_1,1);
    param_3 = 0;
  }
  piVar1 = (int *)(param_1 + 0x7ae90);
  iVar2 = *piVar1;
  if ((param_2 == iVar2 && param_3 == 0) || ((param_2 != iVar2 && (((param_3 ^ 1) & 1) == 0)))) {
    if (param_3 == 0) {
      param_2 = 0;
    }
    *piVar1 = param_2;
    switch(iVar2) {
    case 1:
      FUN_100038b24(0x3e4ccccd,param_1,0);
      break;
    case 2:
      FUN_10003a148(param_1,0);
      break;
    case 3:
      FUN_10003aad0(param_1,0);
      break;
    case 4:
      FUN_100038b9c(0x3e4ccccd,param_1,0);
      break;
    case 5:
      FUN_10003aa60(0x3e4ccccd,param_1,0);
      break;
    case 6:
      FUN_100038c0c(param_1,0);
      break;
    case 7:
      FUN_100038cc4(param_1,0);
      break;
    case 8:
      FUN_100038c68(param_1,0);
    }
  }
  uVar3 = FUN_1003166d0();
  FUN_100316fb4(uVar3,0x5bb9d395,*piVar1 == 0);
  lVar4 = FUN_100061d9c();
  if (lVar4 == 0) {
    return;
  }
  FUN_100036030(lVar4,*piVar1 == 0);
  return;
}




void FUN_100039ff4(long param_1)

{
  if (*(int *)(param_1 + 0x7ae90) == 1) {
    return;
  }
  FUN_100038b24(0x3e4ccccd,param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  return;
}




void FUN_10003a05c(long param_1)

{
  if (*(int *)(param_1 + 0x7ae90) == 1) {
    FUN_100038b24(0x3e4ccccd,param_1,0);
    FUN_100038530(0x3e4ccccd,param_1,1);
    return;
  }
  return;
}




void FUN_10003a0c4(long param_1)

{
  FUN_10007bfbc(param_1 + 0x268);
  return;
}




void FUN_10003a0cc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10003a148(param_1,1);
  iVar1 = FUN_10031615c(0x12);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x3e4ccccd;
  }
  FUN_100038530(uVar2,param_1,0);
  iVar1 = FUN_10031615c(0x12);
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x7aeb2) = *(byte *)(param_1 + 0x7aeb2) | 2;
  }
  return;
}




void FUN_10003a148(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_100039e6c(param_1,2,param_2);
  if ((int)param_2 == 0) {
    FUN_100092404(param_1 + 0x586b8);
  }
  else {
    FUN_100092384();
  }
  iVar1 = FUN_10031615c(0x12);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x3e4ccccd;
  }
  FUN_1000c0e78(uVar2,param_1 + 0x5dfe8,param_2,0);
  return;
}




void FUN_10003a1c4(undefined8 param_1)

{
  FUN_10003a148(param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void FUN_10003a1f8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (((((uint)*(byte *)(param_1 + 0x7aeb2) << 0x10) >> 0x11 & 1) != 0) &&
     (uVar2 = FUN_1000c1958(param_1 + 0x5dfe8), (uVar2 & 1) == 0)) {
    FUN_10003a148(param_1,0);
    iVar1 = FUN_10031615c(0x12);
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar3 = 0x3e4ccccd;
    }
    FUN_100038530(uVar3,param_1,1);
    return;
  }
  return;
}




void FUN_10003a280(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x7aeb2) << 0x10) >> 0x12 & 1) == 0) {
    FUN_10007c164(param_1 + 0x268);
    *(byte *)(param_1 + 0x7aeb2) = *(byte *)(param_1 + 0x7aeb2) | 4;
  }
  return;
}




void FUN_10003a2c8(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x7aeb2) << 0x10) >> 0x12 & 1) != 0) {
    FUN_10007c174(param_1 + 0x268);
    *(byte *)(param_1 + 0x7aeb2) = *(byte *)(param_1 + 0x7aeb2) & 0xfb;
  }
  return;
}




void FUN_10003a31c(long param_1)

{
  FUN_10007be34(param_1 + 0x268);
  return;
}




long FUN_10003a324(long param_1)

{
  return param_1 + 0x22d48;
}




void FUN_10003a334(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641584(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005ae84((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a3c8(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) && (*(long *)(param_1 + 0x38) != 0))
  {
    FUN_10005b14c((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                  *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_10003a450(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641598(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005b180((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a4e0(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641584(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005b1b4((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a574(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) && (*(long *)(param_1 + 0x38) != 0))
  {
    FUN_10005b1e4((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                  *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_10003a5fc(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641598(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005b218((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a68c(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641584(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005b24c((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a720(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) && (*(long *)(param_1 + 0x38) != 0))
  {
    FUN_10005b280((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                  *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_10003a7a8(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641598(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005b2b0((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a838(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641584(param_2[4],param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005b2e4((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a8cc(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) && (*(long *)(param_1 + 0x38) != 0))
  {
    FUN_10005b318((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                  *(long *)(param_1 + 0x38),param_2[4]);
    return;
  }
  return;
}




void FUN_10003a954(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    FUN_100641598(param_2[4]);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_10005b34c((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),
                    *(long *)(param_1 + 0x38),param_2[4]);
      return;
    }
  }
  return;
}




void FUN_10003a9e4(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar1 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) && (*(long *)(param_1 + 0x38) != 0))
  {
    FUN_10005b37c((int)param_2[6],*(undefined4 *)((long)param_2 + 0x34));
    return;
  }
  return;
}




void FUN_10003aa60(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100039e6c(param_2,5,param_3);
  if ((int)param_3 == 0) {
    FUN_100092404(param_2 + 0x586b8);
  }
  else {
    FUN_100092384();
  }
  FUN_100269e20(param_1,param_2 + 0x775e0,param_3,4,1);
  return;
}




void FUN_10003aad0(long param_1,undefined8 param_2)

{
  FUN_100269e20(0x3e4ccccd,param_1 + 0x63a48,param_2,4,1);
  FUN_100039e6c(param_1,3,param_2);
  if ((int)param_2 != 0) {
    FUN_100092384();
    return;
  }
  FUN_100092404(param_1 + 0x586b8);
  return;
}




void FUN_10003ab3c(long param_1)

{
  FUN_10007bee4(param_1 + 0x268);
  return;
}




void FUN_10003ab44(long param_1)

{
  FUN_10007beec(param_1 + 0x268);
  return;
}




void FUN_10003ab4c(long param_1)

{
  FUN_10007bfc8(param_1 + 0x268);
  return;
}




void FUN_10003ab54(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7aeac) = param_2;
  return;
}




void FUN_10003ab64(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x7aeac);
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar1 & uVar2) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x7aeac) = uVar1 | uVar2;
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void FUN_10003aba0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x7aeac);
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar1 & uVar2) != 0) {
    *(uint *)(param_1 + 0x7aeac) = uVar1 ^ uVar2;
    FUN_100038530(0x3e4ccccd,param_1,1);
    return;
  }
  return;
}




undefined4 FUN_10003abdc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7ae90);
}




void FUN_10003abec(long param_1)

{
  FUN_10007bf10(param_1 + 0x268);
  return;
}




void FUN_10003abf4(long param_1)

{
  FUN_10007bf88(param_1 + 0x268);
  return;
}




void FUN_10003abfc(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_148 [8];
  void *local_140;
  void *local_138 [2];
  char local_121;
  undefined4 local_120;
  undefined8 local_11c;
  undefined **local_110;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0;
  char local_99;
  undefined8 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  
  thunk_FUN_1001cd434(&local_110);
  local_90 = *param_6;
  local_e0 = param_5;
  local_80 = param_1;
  local_74 = param_2;
  local_64 = param_7;
  local_63 = param_8;
  uVar1 = FUN_100126c88();
  local_7c = 0x44160000;
  if ((int)uVar1 == 0) {
    local_7c = 0x43c80000;
  }
  local_68 = FUN_10003ad78(uVar1,param_5);
  thunk_FUN_1004e439c(auStack_148,param_4);
  FUN_10003330c(local_138,&DAT_101d91198);
  local_120 = 1;
  local_11c = 0x41a00000;
  FUN_10003c048(auStack_108,auStack_148);
  if (local_121 < '\0') {
    operator_delete(local_138[0]);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  uVar1 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  FUN_100644aec(auStack_148,uVar1,&local_110);
  FUN_100644c34(param_3 + 0xf8,auStack_148,1);
  local_110 = &PTR_FUN_1014666e0;
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_108,1);
  return;
}




bool FUN_10003ad78(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_40;
  float fStack_3c;
  undefined4 local_38;
  float fStack_34;
  
  fVar2 = DAT_101873a40._4_4_;
  local_40 = FUN_10064f0a0((undefined4)DAT_101873a40,param_2);
  fStack_3c = fVar2;
  local_38 = FUN_10064ef9c(&local_40,*(undefined8 *)(param_2 + 0x20));
  fStack_34 = fVar2;
  FUN_10064f05c(&local_38);
  fVar1 = (float)FUN_10064144c();
  return fVar2 < fVar1 * 0.3;
}




char * FUN_10003adf0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  iVar1 = FUN_100060a70();
  switch(param_2) {
  case 1:
    pcVar2 = "ability_icon_A";
    pcVar3 = "joystick_ability_icon_A";
    goto LAB_10003aecc;
  case 2:
    pcVar2 = "ability_icon_B";
    pcVar3 = "joystick_ability_icon_B";
    goto LAB_10003aecc;
  case 3:
    pcVar2 = "ability_icon_C";
    pcVar3 = "joystick_ability_icon_C";
    goto LAB_10003aecc;
  case 4:
    pcVar2 = "ability_upgrade_badge_A";
    pcVar3 = "joystick_ability_upgrade_badge_A";
    goto LAB_10003aecc;
  case 5:
    pcVar2 = "ability_upgrade_badge_B";
    pcVar3 = "joystick_ability_upgrade_badge_B";
    goto LAB_10003aecc;
  case 6:
    pcVar2 = "ability_upgrade_badge_C";
    pcVar3 = "joystick_ability_upgrade_badge_C";
    goto LAB_10003aecc;
  case 7:
    pcVar2 = "flask_button";
    pcVar3 = "joystick_flask_button";
    goto LAB_10003aecc;
  case 8:
    pcVar2 = "scout_cam_button";
    pcVar3 = "joystick_scout_cam_button";
LAB_10003aecc:
    if (iVar1 == 0) {
      pcVar3 = pcVar2;
    }
    break;
  case 9:
    pcVar3 = "HUD_Utils_Button_Shop";
    break;
  case 10:
    pcVar3 = "HUD_Utils_Button_Withdraw";
    break;
  case 0xb:
    pcVar3 = "HUD_Utils_Button_Scoreboard";
    break;
  case 0xc:
    pcVar3 = "HUD_Utils_Button_Help";
    break;
  case 0xd:
    pcVar3 = "HUD_Quick_Buy";
    break;
  case 0xe:
    pcVar3 = "recommended_path_select";
    break;
  case 0xf:
    pcVar3 = "HUD_movement_joystick";
    break;
  case 0x10:
    pcVar3 = "HUD_attack_joystick";
    break;
  case 0x11:
    pcVar3 = "HUD_attack_structure_joystick";
    break;
  case 0x12:
    pcVar3 = "recommended_path_tile_0";
    break;
  case 0x13:
    pcVar3 = "hud_store_category_0";
    break;
  case 0x14:
    pcVar3 = "hud_store_category_1";
    break;
  case 0x15:
    pcVar3 = "hud_store_category_2";
    break;
  case 0x16:
    pcVar3 = "hud_store_category_3";
    break;
  case 0x17:
    pcVar3 = "hud_store_category_4";
    break;
  case 0x18:
    pcVar3 = "hud_store_category_5";
    break;
  case 0x19:
    pcVar3 = "hud_store_category_6";
    break;
  default:
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}




void FUN_10003afac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_HIDE_TOOLTIPS");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1 + 0xf8,auStack_40,1);
  return;
}




void FUN_10003affc(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 *param_5,undefined1 param_6,undefined1 param_7,int param_8)

{
  long lVar1;
  int iVar2;
  void *local_c8 [2];
  char local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  
  lVar1 = param_4 + 0x7a668;
  iVar2 = FUN_100642d08(lVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(lVar1,1);
  }
  FUN_100642bd8(param_4 + 0x7a3c0,lVar1,1);
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  local_72 = 1;
  local_b0 = *param_5;
  local_a8 = *(undefined4 *)(param_5 + 1);
  if (param_8 == 0) {
    *(uint *)(*(long *)(param_4 + 0x7ae98) + 0x84) =
         *(uint *)(*(long *)(param_4 + 0x7ae98) + 0x84) & 0xfffffffb;
  }
  else {
    local_88 = *(undefined8 *)(param_4 + 0x7ae98);
  }
  local_a4 = param_2;
  uStack_a0 = param_3;
  local_78 = param_1;
  local_74 = param_6;
  local_73 = param_7;
  FUN_10001549c(local_c8,"hud");
  FUN_1001900f8(lVar1,local_c8,&local_b0,1);
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  return;
}




void FUN_10003b13c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,int param_8)

{
  long lVar1;
  int iVar2;
  void *local_c8 [2];
  char local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  
  lVar1 = param_4 + 0x7a668;
  iVar2 = FUN_100642d08(lVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(lVar1,1);
  }
  FUN_100642bd8(param_4 + 0x7a3c0,lVar1,1);
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_72 = 1;
  if (param_8 == 0) {
    *(uint *)(*(long *)(param_4 + 0x7ae98) + 0x84) =
         *(uint *)(*(long *)(param_4 + 0x7ae98) + 0x84) & 0xfffffffb;
  }
  else {
    local_88 = *(undefined8 *)(param_4 + 0x7ae98);
  }
  local_a4 = param_2;
  uStack_a0 = param_3;
  uStack_90 = param_5;
  local_78 = param_1;
  local_74 = param_6;
  local_73 = param_7;
  FUN_10001549c(local_c8,"hud");
  FUN_1001900f8(lVar1,local_c8,&local_b0,0);
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  return;
}




void FUN_10003b288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10003adf0();
  uVar1 = FUN_100641574();
  uVar2 = FUN_10003ad78(uVar1,uVar1);
  FUN_10003b314(param_1,param_2,param_3,param_4,uVar1,param_6,uVar2,param_7,param_8);
  return;
}




void FUN_10003b314(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,int param_8,
                  undefined1 param_9)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *local_c8 [2];
  char local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  
  lVar1 = param_4 + 0x7a668;
  iVar2 = FUN_100642d08(lVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(lVar1,1);
  }
  FUN_100642bd8(param_4 + 0x7a448,lVar1,1);
  local_b0 = 0;
  local_a8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  if (param_8 == 0) {
    lVar3 = *(long *)(param_4 + 0x7ae98);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
    }
  }
  else {
    local_88 = *(undefined8 *)(param_4 + 0x7ae98);
  }
  local_a4 = param_2;
  uStack_a0 = param_3;
  local_98 = param_5;
  local_78 = param_1;
  local_74 = param_6;
  local_73 = param_7;
  local_72 = param_9;
  FUN_10001549c(local_c8,"hud");
  FUN_1001900f8(lVar1,local_c8,&local_b0,0);
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  return;
}




void FUN_10003b460(long param_1)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x7a6ec) = *(uint *)(param_1 + 0x7a6ec) & 0xfffffffb;
  thunk_FUN_100642324(param_1 + 0x7a668);
  lVar1 = *(long *)(param_1 + 0x7ae98);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb;
  }
  return;
}




void FUN_10003b4bc(long param_1)

{
  FUN_1000c5dfc(param_1 + 0x63a30);
  return;
}




void FUN_10003b4cc(long param_1)

{
  FUN_1000c5e3c(param_1 + 0x63a30);
  return;
}




void FUN_10003b4dc(long param_1)

{
  FUN_1000bdc7c(param_1 + 0x639b8);
  return;
}




void FUN_10003b4ec(long param_1)

{
  FUN_1000bdcb8(param_1 + 0x639b8);
  return;
}




void FUN_10003b4fc(long param_1)

{
  FUN_1000be03c(param_1 + 0x63a10);
  return;
}




void FUN_10003b50c(long param_1)

{
  FUN_1000be0b4(param_1 + 0x63a10);
  return;
}




void FUN_10003b51c(long param_1)

{
  FUN_1000c5c68(param_1 + 0x639e8);
  return;
}




void FUN_10003b52c(long param_1)

{
  FUN_1000c5cb8(param_1 + 0x639e8);
  return;
}




void FUN_10003b53c(long param_1)

{
  FUN_1000bdf44(param_1 + 0x639b8);
  return;
}




void FUN_10003b54c(long param_1)

{
  FUN_1000c5d08(param_1 + 0x639e8);
  return;
}




void FUN_10003b55c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(param_3 + 0xf960);
  iVar1 = FUN_100041b28(uVar2);
  if (iVar1 != 0) {
    FUN_100041b6c(&local_48,param_1,param_2,uVar2);
    param_4[1] = uStack_40;
    *param_4 = local_48;
    param_4[2] = local_38;
  }
  return;
}




void FUN_10003b5c8(long param_1)

{
  FUN_10007c184(param_1 + 0x268);
  return;
}




void FUN_10003b5d0(long param_1)

{
  FUN_10007bf18(param_1 + 0x268);
  return;
}




void FUN_10003b5d8(long param_1)

{
  FUN_10007bf28(param_1 + 0x268);
  return;
}




void FUN_10003b5e0(long param_1)

{
  FUN_10007bf38(param_1 + 0x268);
  return;
}




void FUN_10003b5e8(undefined8 param_1)

{
  FUN_100038cc4(param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  FUN_1000320fc();
  FUN_100033548();
  return;
}




void FUN_10003b624(long param_1)

{
  ushort *puVar1;
  undefined3 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_100038b9c(0x3e4ccccd,param_1,0);
  puVar1 = (ushort *)(param_1 + 0x7aeb0);
  if ((*puVar1 & 0x4000) == 0) {
LAB_10003b704:
    uVar5 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7aeb2) = *(undefined1 *)(param_1 + 0x7aeb2);
    *puVar1 = *puVar1 & 0xbfff;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    lVar4 = FUN_1003de46c();
    iVar3 = FUN_10003b724();
    if (iVar3 == 0) {
LAB_10003b6d0:
      FUN_1003467f8();
      iVar3 = FUN_10034ce88();
      if ((iVar3 == 0) || (*(int *)(lVar4 + 0x28) != 0xfe)) goto LAB_10003b704;
      FUN_100038b24(0x3e4ccccd,param_1,1);
    }
    else {
      uVar2 = *(undefined3 *)puVar1;
      if ((*(byte *)(param_1 + 0x7aeb2) & 1) != 0) goto LAB_10003b6d0;
      *puVar1 = *puVar1;
      *(byte *)(param_1 + 0x7aeb2) = (byte)((uint3)uVar2 >> 0x10) | 1;
      FUN_10003aa60(0x3e4ccccd,param_1,1);
    }
    uVar5 = 0;
  }
  FUN_100038530(0x3e4ccccd,param_1,uVar5);
  return;
}




undefined8 FUN_10003b724(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_1003467f8();
  uVar1 = FUN_10034cf90();
  if ((int)uVar1 != 0) {
    FUN_1003467f8();
    uVar2 = FUN_10034cde0();
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_100126a5c();
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_10003b758(long param_1)

{
  undefined **local_40;
  undefined4 local_38;
  
  FUN_10003aa60(0x3e4ccccd,param_1,0);
  FUN_100038530(0x3e4ccccd,param_1,1);
  local_38 = 0x18;
  local_40 = &PTR_FUN_10144d738;
  FUN_10005f394(*(long *)(param_1 + 0x38) + 0x260,&local_40);
  return;
}




void FUN_10003b7d0(long param_1)

{
  FUN_100038b24(0x3e4ccccd,param_1,0);
  *(byte *)(param_1 + 0x7aeb2) = *(byte *)(param_1 + 0x7aeb2) | 1;
  FUN_10003aa60(0x3e4ccccd,param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  return;
}




void FUN_10003b83c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_100644b2c(param_2);
  if (iVar1 == 3) {
    iVar1 = FUN_100131208();
    if (iVar1 == 0) {
      FUN_10003aad0(param_1,1);
      FUN_100038530(0x3e4ccccd,param_1,0);
      return;
    }
    FUN_100641464(&fStack_34,&local_38);
    local_40 = fStack_34 * 0.5;
    fStack_3c = local_38 * 0.5;
    FUN_1004e3120(&local_30,"HELPER MODE ACTIVATED!\nPUSH A BUFF OR ABILITY!");
    FUN_10003abfc(0x3f000000,0xbf800000,param_1,&local_30,param_1 + 0x268,&local_40,0,1);
    FUN_100144010(param_1 + 0x7a2d0,1);
    FUN_10007bbdc(param_1 + 0x268,1);
    if ((void *)CONCAT44(uStack_24,local_28) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_24,local_28));
    }
  }
  else {
    if (iVar1 == 2) {
      lVar2 = *(long *)(param_1 + 0x38);
      local_28 = 0x18;
      local_30 = &UNK_10144d728;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x38);
      local_28 = 0x10;
      local_30 = &UNK_10144d6b0;
    }
    local_30 = local_30 + 0x10;
    FUN_10005f394(lVar2 + 0x260,&local_30);
  }
  return;
}




void FUN_10003b97c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100644b2c(param_2);
  if (iVar1 == 3) {
    FUN_10003afac(param_1);
    FUN_100144010(param_1 + 0x7a2d0,0);
    FUN_10007bbdc(param_1 + 0x268,0);
    return;
  }
  return;
}




void FUN_10003b9d8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 auStack_40 [32];
  
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  iVar1 = FUN_100644b2c(param_2);
  uVar2 = 1;
  if (iVar1 != 1) {
    uVar2 = 2;
  }
  FUN_100011c2c(auStack_40,uVar2);
  FUN_100345498(auStack_40);
  return;
}




void FUN_10003ba60(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  void *local_48 [2];
  char local_31;
  
  lVar3 = FUN_100644b2c(param_2);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_1 + 0x7a2d8;
  iVar2 = FUN_100642d08(lVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(lVar1,1);
  }
  if (*(long *)(lVar3 + 0x38) == 0) {
    if (*(long *)(lVar3 + 0x30) == 0) goto LAB_10003badc;
    uVar4 = 0xa558;
  }
  else {
    uVar4 = 0xa4d0;
  }
  FUN_100642bd8(param_1 + (ulong)(uVar4 | 0x70000),lVar1,1);
LAB_10003badc:
  FUN_10001549c(local_48,"hudTooltip");
  FUN_1001cefb8(lVar1,local_48,lVar3);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_10003bb20(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_100644b2c(param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_100038530(0x3e4ccccd,param_1,1);
  return;
}




void FUN_10003bb64(long param_1,undefined8 param_2)

{
  FUN_100038c0c(param_1,1);
  FUN_100038530(0x3e4ccccd,param_1,0);
  FUN_1000e04e0(param_1 + 0x5f6d8,param_2);
  return;
}




void FUN_10003bbb0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 5) {
    uVar1 = FUN_10031615c(5);
    FUN_100037560(param_1,uVar1);
    return;
  }
  return;
}




void FUN_10003bbf4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10003c688(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10003bc74(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003bc74_101450228;
  if ((void *)param_1[0x130] != (void *)0x0) {
    operator_delete__((void *)param_1[0x130]);
    param_1[0x130] = 0;
    param_1[0x12f] = 0;
  }
  if ((void *)param_1[0x12e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12e]);
    param_1[0x12e] = 0;
    param_1[0x12d] = 0;
  }
  param_1[0x10f] = &PTR_FUN_1014a7108;
  param_1[0x126] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x129);
  FUN_10064e2bc(param_1 + 0x10f);
  thunk_FUN_100651068(param_1 + 0xe9);
  thunk_FUN_10064e2bc(param_1 + 0xd2);
  thunk_FUN_100651068(param_1 + 0xac);
  thunk_FUN_100651068(param_1 + 0x86);
  thunk_FUN_100651068(param_1 + 0x60);
  thunk_FUN_10064e2bc(param_1 + 0x49);
  thunk_FUN_10064e2bc(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10003bd40(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003bd40_10145ee38;
  if ((void *)param_1[0x2ab] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2ab]);
    param_1[0x2ab] = 0;
    param_1[0x2aa] = 0;
  }
  param_1[0x28c] = &PTR_FUN_1014a7108;
  param_1[0x2a3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2a6);
  FUN_10064e2bc(param_1 + 0x28c);
  param_1[0x26e] = &PTR_FUN_1014a7108;
  param_1[0x285] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x288);
  FUN_10064e2bc(param_1 + 0x26e);
  param_1[0x244] = &PTR_FUN_1014a6db0;
  param_1[0x25b] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x25e);
  FUN_10064e2bc(param_1 + 0x244);
  FUN_10064221c(param_1 + 0x233);
  FUN_10003bf20(param_1 + 0x128);
  param_1[0x109] = &PTR_FUN_1014a7108;
  param_1[0x120] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x123);
  FUN_10064e2bc(param_1 + 0x109);
  thunk_FUN_100651068(param_1 + 0xe3);
  param_1[0x4d] = &PTR_FUN_101464e50;
  param_1[0xb8] = &PTR_FUN_1014a6db0;
  param_1[0xcf] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xd2);
  FUN_10064e2bc(param_1 + 0xb8);
  param_1[0x8e] = &PTR_FUN_1014a6db0;
  param_1[0xa5] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xa8);
  FUN_10064e2bc(param_1 + 0x8e);
  param_1[100] = &PTR_FUN_1014a6db0;
  param_1[0x7b] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void FUN_10003bec8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003bec8_101464430;
  if (*(char *)((long)param_1 + 0x25f) < '\0') {
    operator_delete((void *)param_1[0x49]);
  }
  if (*(char *)((long)param_1 + 0x247) < '\0') {
    operator_delete((void *)param_1[0x46]);
  }
  FUN_10064221c(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10003bf20(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003bf20_101464fb0;
  param_1[0xe9] = &PTR_FUN_1014a7108;
  param_1[0x100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x103);
  FUN_10064e2bc(param_1 + 0xe9);
  param_1[0xcb] = &PTR_FUN_1014a7108;
  param_1[0xe2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe5);
  FUN_10064e2bc(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_1014a7108;
  param_1[0xc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xad);
  param_1[0x8f] = &PTR_FUN_1014a7108;
  param_1[0xa6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa9);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10003c048(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10003c0ec(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  thunk_FUN_1004e439c(lVar5 + -0x38,param_2);
  FUN_10003330c(lVar5 + -0x28,param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_10003c0ec(uint *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar3 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x38;
      pvVar4 = pvVar1;
      do {
        thunk_FUN_1004e439c(pvVar4,puVar3);
        FUN_10003330c((long)pvVar4 + 0x10,puVar3 + 2);
        uVar2 = puVar3[5];
        *(undefined4 *)((long)pvVar4 + 0x30) = *(undefined4 *)(puVar3 + 6);
        *(undefined8 *)((long)pvVar4 + 0x28) = uVar2;
        puVar3 = puVar3 + 7;
        pvVar4 = (void *)((long)pvVar4 + 0x38);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      puVar3 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        do {
          if (*(char *)((long)puVar3 + 0x27) < '\0') {
            operator_delete((void *)puVar3[2]);
          }
          if ((void *)puVar3[1] != (void *)0x0) {
            operator_delete__((void *)puVar3[1]);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          puVar3 = puVar3 + 7;
          lVar5 = lVar5 + -0x38;
        } while (lVar5 != 0);
        puVar3 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete__(puVar3);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10003c1ec(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (*(char *)((long)puVar1 + 0x27) < '\0') {
          operator_delete((void *)puVar1[2]);
        }
        if ((void *)puVar1[1] != (void *)0x0) {
          operator_delete__((void *)puVar1[1]);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        puVar1 = puVar1 + 7;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_10003c274(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1004e313c(param_1 + 2);
  FUN_1004e313c(param_1 + 4);
  FUN_1004e313c(param_1 + 6);
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 3;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3e8000000000000;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf8;
  return param_1;
}




void FUN_10003c2dc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10003c380(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  thunk_FUN_1004e439c(lVar5 + -0x38,param_2);
  FUN_10003330c(lVar5 + -0x28,param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_10003c380(uint *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar3 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x38;
      pvVar4 = pvVar1;
      do {
        thunk_FUN_1004e439c(pvVar4,puVar3);
        FUN_10003330c((long)pvVar4 + 0x10,puVar3 + 2);
        uVar2 = puVar3[5];
        *(undefined4 *)((long)pvVar4 + 0x30) = *(undefined4 *)(puVar3 + 6);
        *(undefined8 *)((long)pvVar4 + 0x28) = uVar2;
        puVar3 = puVar3 + 7;
        pvVar4 = (void *)((long)pvVar4 + 0x38);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      puVar3 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        do {
          if (*(char *)((long)puVar3 + 0x27) < '\0') {
            operator_delete((void *)puVar3[2]);
          }
          if ((void *)puVar3[1] != (void *)0x0) {
            operator_delete__((void *)puVar3[1]);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          puVar3 = puVar3 + 7;
          lVar5 = lVar5 + -0x38;
        } while (lVar5 != 0);
        puVar3 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete__(puVar3);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10003c480(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (*(char *)((long)puVar1 + 0x27) < '\0') {
          operator_delete((void *)puVar1[2]);
        }
        if ((void *)puVar1[1] != (void *)0x0) {
          operator_delete__((void *)puVar1[1]);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        puVar1 = puVar1 + 7;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10003c508(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10003c58c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_10003bbb0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 5) {
    uVar1 = FUN_10031615c(5);
    FUN_100037560(param_1,uVar1);
    return;
  }
  return;
}




void FUN_10003c58c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10003c608(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




undefined8 * thunk_FUN_1000367fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  ushort uVar13;
  code *pcStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar2 = (ushort *)(param_1 + 0xf5d6);
  puVar3 = param_1 + 0xf4bc;
  puVar4 = param_1 + 0xf49a;
  puVar5 = param_1 + 0xf478;
  *param_1 = &PTR_thunk_FUN_1000378ac_10144c200;
  param_1[5] = 0;
  puVar6 = param_1 + 0x457d;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  param_1[7] = 0;
  FUN_10064e264();
  puVar1 = param_1 + 0x1f;
  FUN_10064e264(puVar1);
  FUN_10064e264();
  thunk_FUN_100076cd0();
  FUN_1006421a8(puVar6);
  *puVar6 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1000aaf24();
  thunk_FUN_1000ab6a4();
  thunk_FUN_1000ab6a4(param_1 + 0x45c3);
  thunk_FUN_100097144();
  thunk_FUN_10008c2a0(param_1 + 0xadf4);
  thunk_FUN_100091a48();
  thunk_FUN_10019a2d4(param_1 + 0xb20a,1);
  thunk_FUN_1000c0a40(param_1 + 0xbbfd);
  thunk_FUN_1000e0398();
  thunk_FUN_1000e04e8();
  thunk_FUN_1000ded30();
  FUN_1000bdba4(param_1 + 50999);
  FUN_1000c5b8c(param_1 + 0xc73d);
  thunk_FUN_1000bdf4c(param_1 + 0xc742);
  thunk_FUN_1000c5d10(param_1 + 0xc746);
  param_1[0xc748] = 0;
  thunk_FUN_100063e1c();
  thunk_FUN_1000a5460();
  thunk_FUN_10008ffb8();
  FUN_100144008(param_1 + 0xf45a);
  thunk_FUN_1001ceb64(param_1 + 0xf45b,1);
  FUN_1006421a8(puVar5);
  *puVar5 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0xf489);
  param_1[0xf489] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(puVar4);
  *puVar4 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0xf4ab] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(puVar3);
  *puVar3 = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_10018f3e4(param_1 + 0xf4cd,1);
  *(undefined4 *)(param_1 + 0xf5d2) = 0;
  param_1[0xf5d4] = 0;
  param_1[0xf5d3] = 0;
  param_1[0xf5d5] = 0xffffffff00000000;
  *puVar2 = 0;
  *(byte *)((long)param_1 + 0x7aeb2) = *(byte *)((long)param_1 + 0x7aeb2) & 0xf8;
  FUN_100491b08();
  *(uint *)((long)param_1 + 0x7aeac) = *(uint *)((long)param_1 + 0x7aeac) & 0xfff7ffff;
  FUN_1003467f8();
  uVar9 = FUN_10034ceb0();
  if ((uVar9 & 1) == 0) {
    *(uint *)((long)param_1 + 0x7aeac) = *(uint *)((long)param_1 + 0x7aeac) & 0xfffff7ff;
  }
  DAT_101dc2c38 = param_1;
  FUN_1000c0dbc(param_1 + 0xbbfd);
  uVar10 = FUN_1000bdb98();
  FUN_1004e18bc(uVar10,param_1,0xda87fc4a,FUN_100037534,0);
  uVar10 = FUN_100316150();
  pcStack_98 = (code *)0x0;
  pcStack_80 = thunk_FUN_10003bbb0;
  puStack_90 = param_1;
  puStack_88 = param_1;
  FUN_10003c508(uVar10,&pcStack_98);
  *(uint *)((long)param_1 + 0x17c) = *(uint *)((long)param_1 + 0x17c) & 0xfffffffb;
  plVar11 = (long *)FUN_100641574("ingame-effects");
  (**(code **)(*plVar11 + 0x78))(plVar11,param_1 + 0x458e,1);
  plVar12 = (long *)FUN_100641574("ingame-ui");
  (**(code **)(*plVar12 + 0x78))(plVar12,param_1 + 8,1);
  (**(code **)(*plVar12 + 0x78))(plVar12,puVar1,1);
  FUN_10002c09c(puVar1);
  FUN_1003467f8();
  iVar8 = FUN_10034cf60();
  uVar13 = 0x2000;
  if (iVar8 == 0) {
    uVar13 = 0;
  }
  *puVar2 = *puVar2 & 0xdfff | uVar13;
  FUN_100642bd8(puVar1,param_1 + 0xb0d7,1);
  plVar12 = (long *)FUN_100641574("root-layer");
  (**(code **)(*plVar12 + 0x78))(plVar12,puVar5,1);
  (**(code **)(*plVar12 + 0x78))(plVar12,param_1 + 0xf489,1);
  FUN_100642bd8(puVar1,param_1 + 0x36,1);
  FUN_100642bd8(param_1 + 0x36,param_1 + 0x4d,1);
  FUN_100642bd8(puVar1,puVar4,1);
  FUN_100642bd8(puVar1,puVar6,1);
  FUN_100642bd8(puVar6,param_1 + 0x45de,1);
  FUN_100642bd8(puVar6,param_1 + 0xeebc,1);
  if ((*puVar2 >> 0xd & 1) != 0) {
    FUN_100642bd8(puVar6,param_1 + 0xe828,1);
  }
  FUN_100642bd8(puVar6,param_1[0xbbfe],1);
  FUN_100642bd8(puVar6,param_1 + 0xc749,1);
  FUN_100642bd8(puVar6,param_1 + 0xbedb,1);
  FUN_100642bd8(puVar6,param_1 + 0xc716,1);
  FUN_100642bd8(puVar6,param_1 + 0xc0cc,1);
  FUN_100642bd8(puVar1,param_1 + 0xf45b,1);
  FUN_100642bd8(puVar1,param_1 + 0xf4ab,1);
  FUN_100642bd8(puVar1,param_1 + 0xb210,1);
  FUN_100642bd8(puVar1,param_1[51000],1);
  FUN_100642bd8(puVar1,param_1[0xc743],1);
  FUN_100642bd8(puVar1,param_1[0xc747],1);
  FUN_100642bd8(puVar1,param_1[0xc73e],1);
  FUN_100642bd8(puVar1,puVar3,1);
  (**(code **)(*plVar11 + 0x78))(plVar11,param_1 + 0x45a9,1);
  FUN_1003467f8();
  iVar8 = FUN_10034cde8();
  if (iVar8 != 0) {
    *(uint *)((long)param_1 + 0x57024) = *(uint *)((long)param_1 + 0x57024) & 0xfffffffb;
  }
  iVar8 = FUN_10007c0f4(param_1 + 0x4d);
  if (iVar8 != 0) {
    uVar10 = FUN_10031615c(5);
    FUN_100037560(param_1,uVar10);
  }
  FUN_10018f600(param_1 + 0xf4cd,1);
  *(uint *)((long)param_1 + 0x7a6ec) = *(uint *)((long)param_1 + 0x7a6ec) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x59104) = *(uint *)((long)param_1 + 0x59104) & 0xfffffffb;
  FUN_10001fd98();
  uStack_70 = DAT_101dbd484;
  pcStack_98 = FUN_1000375a0;
  puVar1 = param_1 + 9;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd488;
  pcStack_98 = FUN_1000375a8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd48c;
  pcStack_98 = FUN_1000375b0;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd458;
  pcStack_98 = FUN_1000375b8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd45c;
  pcStack_98 = FUN_1000375c0;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd460;
  pcStack_98 = FUN_1000375c8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd470;
  pcStack_98 = FUN_1000375d0;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd474;
  pcStack_98 = FUN_1000375d8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd478;
  pcStack_98 = FUN_1000375e0;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd464;
  pcStack_98 = FUN_1000375e8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd468;
  pcStack_98 = FUN_1000375f0;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd46c;
  pcStack_98 = FUN_1000375f8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101dbd47c;
  pcStack_98 = FUN_100037600;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  *(uint *)((long)param_1 + 0xc4) = *(uint *)((long)param_1 + 0xc4) | 0x10;
  uStack_70 = FUN_100644a94("EVENT_CLOSE_SHOP");
  pcStack_98 = FUN_100037608;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0x45df,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_CLOSE_SHOP_AND_OPEN_RECOMMENDED_PATH_SELECTOR");
  pcStack_98 = thunk_FUN_10003b7d0;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0x45df,&pcStack_98);
  uVar7 = DAT_101d91884;
  uStack_70 = DAT_101d91884;
  pcStack_98 = FUN_100037650;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1[0xbbfe] + 8,&pcStack_98);
  uStack_70 = uVar7;
  pcStack_98 = FUN_100037684;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc74a,&pcStack_98);
  uStack_70 = uVar7;
  pcStack_98 = FUN_1000376b8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xb0d8,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_CLOSE_TALENT_SELECTOR");
  pcStack_98 = thunk_FUN_10003b624;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xe829,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR");
  pcStack_98 = FUN_100037700;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xeebd,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR_AND_OPEN_SHOP");
  pcStack_98 = thunk_FUN_10003b758;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xeebd,&pcStack_98);
  uVar7 = DAT_101d23034;
  uStack_70 = DAT_101d23034;
  pcStack_98 = FUN_100037748;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xbedc,&pcStack_98);
  uStack_70 = FUN_100644a94("UI::EVENT_CLOSE_MOBILECHAT");
  pcStack_98 = FUN_10003777c;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc717,&pcStack_98);
  uStack_70 = uVar7;
  pcStack_98 = thunk_FUN_10003b5e8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc0cd,&pcStack_98);
  uStack_70 = DAT_101d23840;
  pcStack_98 = thunk_FUN_10003b5e8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc0cd,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_UTILS_SELECT_ITEM");
  pcStack_98 = FUN_1000377b4;
  puVar1 = param_1 + 0x4e;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  iVar8 = FUN_100131208();
  if (iVar8 != 0) {
    uStack_70 = FUN_100644a94("EVENT_UTILS_FOCUS_KILLED");
    pcStack_98 = FUN_1000377bc;
    pcStack_80 = (code *)0x0;
    uStack_78 = 0;
    puStack_88 = (undefined8 *)0x0;
    puStack_90 = param_1;
    FUN_10001554c(puVar1,&pcStack_98);
  }
  uStack_70 = FUN_100644a94("EVENT_SELECT_ZOOM_TOGGLE");
  pcStack_98 = FUN_1000377c4;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_BLITZ_ROUNDS_PLAYERS_READY");
  pcStack_98 = FUN_1000377f8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101d23018;
  pcStack_98 = FUN_100037800;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = DAT_101d2301c;
  pcStack_98 = FUN_100037834;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_SELECT_SURRENDER");
  pcStack_98 = FUN_100037868;
  puVar1 = param_1 + 0x20;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  pcStack_98 = FUN_100037870;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_HIDE_TOOLTIPS");
  pcStack_98 = FUN_100037878;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  uStack_70 = FUN_100644a94("EVENT_INFO_PANEL_CLOSED");
  pcStack_98 = FUN_1000378a8;
  pcStack_80 = (code *)0x0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_90 = param_1;
  FUN_10001554c(puVar1,&pcStack_98);
  return param_1;
}




void FUN_10003c67c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003c684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003c688(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10003c704(void)

{
  if ((DAT_10184dea8 & 1) == 0) {
    DAT_10184dea0 = DAT_101872e38;
    DAT_10184dea8 = 1;
  }
  return;
}




void FUN_10003c730(void)

{
  if ((DAT_10184deb8 & 1) == 0) {
    DAT_10184deb0 = DAT_101872e38;
    DAT_10184deb8 = 1;
  }
  return;
}




void FUN_10003c75c(void)

{
  if ((DAT_10184db10 & 1) == 0) {
    DAT_10184db08 = DAT_101872e38;
    DAT_10184db10 = 1;
  }
  return;
}




void FUN_10003c78c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100050910();
  operator_delete(pvVar1);
  return;
}




void FUN_10003c7a0(long param_1)

{
  long lVar1;
  
  DAT_10184dcd8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dcd8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dcd8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10003c904;
  *(code **)(lVar1 + 0xb8) = FUN_10003c940;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dcd8;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100050950,0);
  return;
}




bool FUN_10003c80c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_458 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = FUN_10005099c();
  uVar2 = FUN_1010a1958(local_458,0x80,DAT_10184dec0,0);
  if ((int)uVar2 < 1) {
    bVar1 = false;
  }
  else {
    uVar6 = 0;
    bVar1 = true;
    do {
      lVar5 = local_458[uVar6];
      if ((((lVar5 != 0) && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184dec0)) &&
          (iVar3 = FUN_1004741f8(lVar5), iVar3 == 0x35)) &&
         (lVar5 = FUN_10047434c(lVar5), lVar5 == lVar4)) break;
      uVar6 = uVar6 + 1;
      bVar1 = uVar6 < uVar2;
    } while (uVar2 != uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar1;
}




undefined8 FUN_10003c904(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1000504dc();
  *puVar1 = &PTR_thunk_FUN_100050910_10144c230;
  FUN_1000509c8(puVar1,"sword_bnd");
  return param_1;
}




void FUN_10003c940(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003c948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003c94c(void)

{
  if ((DAT_10184dce0 & 1) == 0) {
    DAT_10184dcd8 = DAT_101872e38;
    DAT_10184dce0 = 1;
  }
  return;
}




void FUN_10003c978(void)

{
  if ((DAT_10184dec8 & 1) == 0) {
    DAT_10184dec0 = DAT_101872e38;
    DAT_10184dec8 = 1;
  }
  return;
}




undefined8 * FUN_10003c9a4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10144c268;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = FUN_1010a0298(param_1,DAT_10184dc58);
  param_1[5] = lVar1;
  *(undefined1 *)(lVar1 + 0x33) = 0xb;
  uVar2 = FUN_1010a0298(param_1,DAT_10184ded0);
  param_1[6] = uVar2;
  return param_1;
}




void FUN_10003ca00(long param_1)

{
  long lVar1;
  
  DAT_10184dee0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dee0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dee0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10003c9a4;
  *(code **)(lVar1 + 0xb8) = FUN_10003ccbc;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dee0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10003ca6c,0);
  return;
}




void FUN_10003ca6c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004e8bb0(*(undefined8 *)(param_1 + 0x30));
  if ((iVar1 != 0) && (uVar2 = FUN_100126990(), (uVar2 & 1) != 0)) {
    return;
  }
  FUN_1004e9194(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10003caac(long param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
            (*(long **)(param_1 + 0x28),"build://Characters/moveCursor/Art/moveCursor.mesh");
  pcVar1 = "build://Characters/moveCursor/Art/moveCursor.tapAndHold_150.anim";
  if (param_2 != 2) {
    pcVar1 = "build://Characters/moveCursor/Art/moveCursor.go.anim";
  }
  pcVar2 = "build://Characters/moveCursor/Art/moveCursor.tapAndHold_200.anim";
  if (param_2 != 1) {
    pcVar2 = pcVar1;
  }
  FUN_1004e8aa0(*(undefined8 *)(param_1 + 0x30),
                "build://Characters/moveCursor/Art/moveCursor.skeleton",pcVar2);
  uStack_88 = 0;
  local_90 = 0x3bc49ba6;
  uStack_78 = 0;
  uStack_80 = 0x3bc49ba600000000;
  uStack_68 = 0x3bc49ba6;
  local_70 = 0;
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  if (param_3 != 0) {
    thunk_FUN_1010add94(auStack_98);
    local_48 = 0x437f0000;
    local_40 = 0;
    FUN_1010ae160(auStack_98,0,&local_48,3,1,"u_color");
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = FUN_1010ae1d8(auStack_98);
    FUN_1004e914c(uVar4,uVar3);
    thunk_FUN_1010adde4(auStack_98);
  }
  FUN_1004e8e38(*(undefined8 *)(param_1 + 0x28),&local_90);
  FUN_1004e9154(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10003cbfc(long param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  uStack_48 = 0;
  local_50 = 0x3bc49ba6;
  uStack_38 = 0;
  uStack_40 = 0x3bc49ba600000000;
  uStack_28 = 0x3bc49ba6;
  local_30 = 0;
  local_14 = 0x3f800000;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  FUN_1004e8e38(*(undefined8 *)(param_1 + 0x28),&local_50);
  return;
}




void FUN_10003cc58(long param_1)

{
  FUN_1004e9154(*(undefined8 *)(param_1 + 0x28));
  FUN_1004e8ae0(0x3f800000,0x3f800000,0,0,0,*(undefined8 *)(param_1 + 0x30),0);
  return;
}




void FUN_10003cc98(long param_1)

{
  FUN_1004e9194(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10003cca4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




undefined8 * thunk_FUN_10003c9a4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10144c268;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = FUN_1010a0298(param_1,DAT_10184dc58);
  param_1[5] = lVar1;
  *(undefined1 *)(lVar1 + 0x33) = 0xb;
  uVar2 = FUN_1010a0298(param_1,DAT_10184ded0);
  param_1[6] = uVar2;
  return param_1;
}




void FUN_10003ccbc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ccc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003ccc8(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




void FUN_10003ccf4(void)

{
  if ((DAT_10184ded8 & 1) == 0) {
    DAT_10184ded0 = DAT_101872e38;
    DAT_10184ded8 = 1;
  }
  return;
}




void FUN_10003cd20(void)

{
  if ((DAT_10184dee8 & 1) == 0) {
    DAT_10184dee0 = DAT_101872e38;
    DAT_10184dee8 = 1;
  }
  return;
}




void FUN_10003cd50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100050910();
  operator_delete(pvVar1);
  return;
}




void FUN_10003cd64(long param_1)

{
  long lVar1;
  
  DAT_10184dce8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dce8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dce8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10003ce24;
  *(code **)(lVar1 + 0xb8) = FUN_10003ce60;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dce8;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_100050950,0);
  return;
}




uint FUN_10003cdd0(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_10005099c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_1003a2f18(lVar2,DAT_101d3eb70,0);
  return uVar1 ^ 1;
}




undefined8 FUN_10003ce24(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1000504dc();
  *puVar1 = &PTR_thunk_FUN_100050910_10144c298;
  FUN_1000509c8(puVar1,"m_forkGlow_bnd");
  return param_1;
}




void FUN_10003ce60(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ce68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003ce6c(void)

{
  if ((DAT_10184dcf0 & 1) == 0) {
    DAT_10184dce8 = DAT_101872e38;
    DAT_10184dcf0 = 1;
  }
  return;
}




void FUN_10003ce98(void)

{
  if ((DAT_10184dab0 & 1) == 0) {
    DAT_10184daa8 = DAT_101872e38;
    DAT_10184dab0 = 1;
  }
  return;
}




undefined8 * FUN_10003cec4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *local_38;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1006421a8(param_1 + 5);
  uVar1 = DAT_101dbd2f0;
  *param_1 = &PTR_thunk_FUN_10003d00c_10144c2d0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x7000000;
  param_1[0x18] = uVar1;
  param_1[5] = &PTR_FUN_10144c328;
  param_1[0x16] = &PTR_FUN_10144c428;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  uVar1 = FUN_100657568(param_1 + 0x1b);
  lVar2 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar2 + 0xf0) = 0xff000000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x120);
  lVar2 = 0;
  param_1[0x41] = 0x424800003f000000;
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0xe8) = 0x3f80000000000000;
    *(undefined4 *)((long)param_1 + lVar2 + 0xf0) = 0xffffffff;
    *(undefined8 *)((long)param_1 + lVar2 + 0xf8) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x120);
  FUN_1006575f4(uVar1,PTR_s_build___LensFlares_psd_10184e090);
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(param_1[5] + 0x28))(param_1 + 5,&local_38);
  return param_1;
}




void FUN_10003d00c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003d00c_10144c2d0;
  param_1[5] = &PTR_FUN_10144c328;
  param_1[0x16] = &PTR_FUN_10144c428;
  thunk_FUN_100657580(param_1 + 0x1b);
  FUN_10064221c(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10003d00c(void)

{
  FUN_10003d00c();
  return;
}




void FUN_10003d060(long param_1)

{
  FUN_10003d00c(param_1 + -0x28);
  return;
}




void FUN_10003d068(long param_1)

{
  FUN_10003d00c(param_1 + -0xb0);
  return;
}




void FUN_10003d070(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003d00c();
  operator_delete(pvVar1);
  return;
}




void FUN_10003d084(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003d00c(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10003d09c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003d00c(param_1 + -0xb0);
  operator_delete(pvVar1);
  return;
}




void FUN_10003d0b4(long param_1)

{
  long lVar1;
  
  DAT_10184def0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184def0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184def0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10003cec4;
  *(code **)(lVar1 + 0xb8) = FUN_10003dcd8;
  *(uint *)(lVar1 + 0xa4) = DAT_10184def0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x210;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_10003d110(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4,
                  int param_5)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = *param_4;
  *(undefined4 *)(param_3 + 0xd0) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_3 + 200) = uVar2;
  uVar3 = 4;
  if (param_5 == 0) {
    uVar3 = 0;
  }
  *(uint *)(param_3 + 0xac) = *(uint *)(param_3 + 0xac) & 0xfffffffb | uVar3;
  plVar1 = (long *)FUN_100641574("ingame-effects");
  (**(code **)(*plVar1 + 0x78))(plVar1,param_3 + 0x28,1);
  *(undefined4 *)(param_3 + 0x208) = param_1;
  *(undefined4 *)(param_3 + 0x20c) = param_2;
  return;
}




void FUN_10003d194(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (*(long *)(param_3 + lVar2 + 0xf8) == 0) {
      lVar1 = FUN_1006575c4(param_3 + 0xd8);
      if (lVar1 == 0) {
        return;
      }
      param_3 = param_3 + lVar2;
      *(undefined4 *)(param_3 + 0xe8) = param_1;
      *(undefined4 *)(param_3 + 0xec) = param_2;
      *(undefined4 *)(param_3 + 0xf0) = *param_5;
      *(long *)(param_3 + 0xf8) = lVar1;
      return;
    }
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x120);
  return;
}




void FUN_10003d210(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  
  FUN_10011a174(&local_50,param_1 + 200,0);
  uVar5 = FUN_10011a1e0(param_1 + 200);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x68) == local_50) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x6c)) && !NAN(fStack_4c))) {
    bVar2 = *(float *)(param_1 + 0x6c) == fStack_4c;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x68) = local_50;
    *(float *)(param_1 + 0x6c) = fStack_4c;
    FUN_1000200a0(param_1 + 0x28);
  }
  if (local_48 <= 1.0) {
    if (0.0 < *(float *)(param_1 + 0x208)) {
      FUN_100641464(&local_58,(ulong)&local_58 | 4);
      fVar6 = *(float *)(param_1 + 0x20c);
      fVar8 = (float)NEON_fminnm(local_58,fVar6 * 0.5 + local_50);
      fVar7 = (float)NEON_fminnm(uStack_54,fVar6 * 0.5 + fStack_4c);
      bVar2 = false;
      bVar3 = false;
      if (DAT_101dc1cb8._4_4_ < fVar7) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN((float)DAT_101dc1cb8) && !NAN(fVar8)) {
          bVar2 = (float)DAT_101dc1cb8 < fVar8;
          bVar3 = false;
        }
      }
      fVar7 = (fVar7 - DAT_101dc1cb8._4_4_) * (fVar8 - (float)DAT_101dc1cb8);
      if (bVar2 == bVar3) {
        fVar7 = 0.0;
      }
      fVar6 = (float)NEON_fminnm(fVar7 / (fVar6 * fVar6 * *(float *)(param_1 + 0x208)),0x3f800000);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = (float)NEON_fminnm(fVar6,0x3f800000);
      if (fVar6 <= 0.6) {
        fVar6 = 0.6;
      }
      fVar7 = (float)NEON_fminnm(uVar5,0x42b40000);
      if (fVar7 <= 75.0) {
        fVar7 = 75.0;
      }
      uVar4 = (uint)((fVar6 + (fVar7 * 0.06666667 + -5.0000005) * (0.6 - fVar6)) * 255.0);
      uVar1 = *(uint *)(param_1 + 0xac);
      if (uVar4 == (uVar1 >> 7 & 0xff)) {
        return;
      }
      *(uint *)(param_1 + 0xac) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar4 & 0xff) << 7;
      goto LAB_10003d3ac;
    }
    if ((~*(uint *)(param_1 + 0xac) & 0x7f80) == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0xac) | 0x7f80;
  }
  else {
    if ((*(uint *)(param_1 + 0xac) & 0x7f80) == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0xac) & 0xffff807f;
  }
  *(uint *)(param_1 + 0xac) = uVar1;
LAB_10003d3ac:
  FUN_1000200a0(param_1 + 0x28);
  return;
}




void FUN_10003d3cc(long param_1)

{
  FUN_10003d210(param_1 + -0x28);
  return;
}




void FUN_10003d3d4(void)

{
  return;
}




void FUN_10003d3e0(void)

{
  return;
}




void FUN_10003d3ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 local_8c;
  undefined2 local_8b;
  undefined1 local_89;
  undefined8 local_88;
  
  lVar1 = FUN_10003d5bc(param_1 + 0x28);
  fVar11 = *(float *)(lVar1 + 8);
  fVar4 = *(float *)(lVar1 + 0xc);
  FUN_100641464(&local_88,(ulong)&local_88 | 4);
  fVar5 = (float)*(undefined8 *)(lVar1 + 0x10) * (float)local_88 * 0.5;
  fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) *
           (float)((ulong)local_88 >> 0x20) * 0.5;
  local_88 = CONCAT44(fVar10,fVar5);
  uVar6 = FUN_10011a1e0(param_1 + 200);
  if (*(long *)(param_1 + 0xf8) != 0) {
    fVar7 = (float)NEON_fminnm(uVar6,0x42c80000);
    if (fVar7 <= 65.0) {
      fVar7 = 65.0;
    }
    plVar3 = (long *)(param_1 + 0x110);
    do {
      local_8c = (undefined1)plVar3[-4];
      local_8b = *(undefined2 *)((long)plVar3 + -0x1f);
      fVar8 = (float)NEON_ucvtf((uint)*(byte *)((long)plVar3 + -0x1d));
      local_89 = (undefined1)(int)(*(float *)(lVar1 + 0x18) * fVar8);
      fVar8 = *(float *)(plVar3 + -5);
      fVar9 = *(float *)((long)plVar3 + -0x24) * (fVar7 * -0.01142857 + 1.7428571);
      fVar12 = *(float *)(lVar1 + 0x10);
      fVar13 = *(float *)(lVar1 + 0x14);
      lVar2 = FUN_1006575b8(param_1 + 0xd8,*(undefined4 *)plVar3[-3]);
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
      fVar15 = fVar9 * fVar12 * fVar15;
      fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
      fVar12 = fVar13 * fVar9 * fVar12;
      uVar6 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 4));
      uVar14 = NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
      FUN_10003d7ac(fVar11 + (fVar5 - fVar11) * fVar8 + fVar15 * -0.5,
                    fVar4 + (fVar10 - fVar4) * fVar8 + fVar12 * -0.5,fVar15,fVar12,0,uVar6,uVar14,
                    param_2,&local_8c,0,0);
      lVar2 = *plVar3;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}




long * FUN_10003d5bc(long *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 auStack_48 [40];
  
  if ((*(byte *)((long)param_1 + 0x84) & 1) != 0) {
    if (param_1[4] == 0) {
      FUN_100642170(auStack_48);
      pcVar2 = *(code **)(*param_1 + 0xd8);
      puVar1 = auStack_48;
    }
    else {
      puVar1 = (undefined1 *)FUN_10003d5bc();
      pcVar2 = *(code **)(*param_1 + 0xd8);
    }
    (*pcVar2)(param_1,puVar1);
  }
  return param_1 + 0xc;
}




void FUN_10003d624(long param_1)

{
  FUN_10003d3ec(param_1 + -0xb0);
  return;
}




undefined8 FUN_10003d62c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xd8) + 8) + 0x30;
  return 1;
}




undefined8 FUN_10003d644(void)

{
  return 2;
}




void FUN_10003d64c(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                  long param_5,uint *param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar2 = FUN_10003d5bc();
  if (0.0 < *(float *)(lVar2 + 0x18)) {
    (**(code **)(*param_3 + 0x68))(param_3,&local_48,&local_50);
    FUN_1006416d4();
    plVar3 = (long *)FUN_100643c2c();
    fVar4 = (float)(**(code **)(*plVar3 + 0x48))();
    fVar5 = 0.0;
    if (*(short *)(lVar2 + 0x1c) != -1) {
      fVar5 = (float)(int)*(short *)(lVar2 + 0x1c);
    }
    fVar6 = 0.0;
    if (*(short *)(lVar2 + 0x1e) != -1) {
      fVar6 = (float)(int)*(short *)(lVar2 + 0x1e);
    }
    if (*(short *)(lVar2 + 0x20) != -1) {
      fVar4 = (float)(int)*(short *)(lVar2 + 0x20);
    }
    if (local_48 <= fVar4) {
      if (*(short *)(lVar2 + 0x22) != -1) {
        param_2 = (float)(int)*(short *)(lVar2 + 0x22);
      }
      if (((local_44 <= param_2) && (fVar5 <= local_50)) && (fVar6 <= local_4c)) {
        uVar1 = *param_6;
        *(long **)(param_5 + (ulong)uVar1 * 8) = param_3 + 0x12;
        *param_6 = uVar1 + 1;
      }
    }
    FUN_100643134(param_3,param_4,param_5,param_6,param_7);
  }
  return;
}




undefined8 FUN_10003d784(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30;
  return 1;
}




undefined8 FUN_10003d79c(void)

{
  return 2;
}




undefined8 FUN_10003d7a4(void)

{
  return 0;
}




void FUN_10003d7ac(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,long *param_9,undefined1 *param_10,
                  int param_11,int param_12)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if (0x11 < *(int *)((long)param_9 + 0xc) - (int)param_9[1]) {
    fVar9 = param_6;
    fVar12 = param_8 + param_6;
    if (param_11 == 0) {
      fVar9 = param_8 + param_6;
      fVar12 = param_6;
    }
    fVar14 = param_7;
    fVar4 = fStack0000000000000000 + param_7;
    if (param_12 == 0) {
      fVar14 = fStack0000000000000000 + param_7;
      fVar4 = param_7;
    }
    fVar10 = param_3 + param_1;
    fStack0000000000000004 = fStack0000000000000004 * 0.5;
    fVar8 = fStack0000000000000004 * param_3 + param_1;
    fVar6 = fVar10 - fStack0000000000000004 * param_3;
    fVar5 = param_4 + param_2;
    fVar13 = fStack0000000000000004 * param_4 + param_2;
    fVar11 = fVar5 - fStack0000000000000004 * param_4;
    fVar12 = fVar12 * (1.0 / fStack0000000000000008);
    fVar9 = fVar9 * (1.0 / fStack0000000000000008);
    fVar3 = fStack0000000000000004 * (fVar9 - fVar12);
    fVar7 = fVar3 + fVar12;
    fVar3 = fVar9 - fVar3;
    fVar15 = 1.0 - (1.0 / fStack000000000000000c) * fVar4;
    fVar4 = 1.0 - (1.0 / fStack000000000000000c) * fVar14;
    fStack0000000000000004 = fStack0000000000000004 * (fVar4 - fVar15);
    pfVar1 = (float *)*param_9;
    *pfVar1 = fVar8;
    pfVar1[1] = param_2;
    pfVar1[2] = param_5;
    *(undefined1 *)(pfVar1 + 3) = *param_10;
    *(undefined1 *)((long)pfVar1 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar1 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar1 + 0xf) = param_10[3];
    pfVar1[4] = fVar7;
    pfVar1[5] = fVar15;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = param_1;
    fVar14 = fStack0000000000000004 + fVar15;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar13;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12;
    *(float *)(lVar2 + 0x2c) = fVar14;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar6;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = param_2;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar3;
    *(float *)(lVar2 + 0x2c) = fVar15;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar6;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = param_2;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar3;
    *(float *)(lVar2 + 0x2c) = fVar15;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = param_1;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar13;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12;
    *(float *)(lVar2 + 0x2c) = fVar14;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar10;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar13;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar9;
    *(float *)(lVar2 + 0x2c) = fVar14;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = param_1;
    fStack0000000000000004 = fVar4 - fStack0000000000000004;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar13;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12;
    *(float *)(lVar2 + 0x2c) = fVar14;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = param_1;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar11;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12;
    *(float *)(lVar2 + 0x2c) = fStack0000000000000004;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar10;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar13;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar9;
    *(float *)(lVar2 + 0x2c) = fVar14;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar10;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar13;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar9;
    *(float *)(lVar2 + 0x2c) = fVar14;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = param_1;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar11;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12;
    *(float *)(lVar2 + 0x2c) = fStack0000000000000004;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar10;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar11;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar9;
    *(float *)(lVar2 + 0x2c) = fStack0000000000000004;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = param_1;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar11;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar12;
    *(float *)(lVar2 + 0x2c) = fStack0000000000000004;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar8;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar5;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar7;
    *(float *)(lVar2 + 0x2c) = fVar4;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar10;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar11;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar9;
    *(float *)(lVar2 + 0x2c) = fStack0000000000000004;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar10;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar11;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar9;
    *(float *)(lVar2 + 0x2c) = fStack0000000000000004;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar8;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar5;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar7;
    *(float *)(lVar2 + 0x2c) = fVar4;
    lVar2 = *param_9;
    *(float *)(lVar2 + 0x18) = fVar6;
    *param_9 = lVar2 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(float *)(lVar2 + 0x1c) = fVar5;
    *(float *)(lVar2 + 0x20) = param_5;
    *(undefined1 *)(lVar2 + 0x24) = *param_10;
    *(undefined1 *)(lVar2 + 0x25) = param_10[1];
    *(undefined1 *)(lVar2 + 0x26) = param_10[2];
    *(undefined1 *)(lVar2 + 0x27) = param_10[3];
    *(float *)(lVar2 + 0x28) = fVar3;
    *(float *)(lVar2 + 0x2c) = fVar4;
    *param_9 = *param_9 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  }
  return;
}




undefined8 * thunk_FUN_10003cec4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puStack_38;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1006421a8(param_1 + 5);
  uVar1 = DAT_101dbd2f0;
  *param_1 = &PTR_thunk_FUN_10003d00c_10144c2d0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x7000000;
  param_1[0x18] = uVar1;
  param_1[5] = &PTR_FUN_10144c328;
  param_1[0x16] = &PTR_FUN_10144c428;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  uVar1 = FUN_100657568(param_1 + 0x1b);
  lVar2 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar2 + 0xf0) = 0xff000000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x120);
  lVar2 = 0;
  param_1[0x41] = 0x424800003f000000;
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar2 + 0xe8) = 0x3f80000000000000;
    *(undefined4 *)((long)param_1 + lVar2 + 0xf0) = 0xffffffff;
    *(undefined8 *)((long)param_1 + lVar2 + 0xf8) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x120);
  FUN_1006575f4(uVar1,PTR_s_build___LensFlares_psd_10184e090);
  puStack_38 = &DAT_3f0000003f000000;
  (**(code **)(param_1[5] + 0x28))(param_1 + 5,&puStack_38);
  return param_1;
}




void FUN_10003dcd8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003dce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003dce4(void)

{
  if ((DAT_10184def8 & 1) == 0) {
    DAT_10184def0 = DAT_101872e38;
    DAT_10184def8 = 1;
  }
  return;
}




long * FUN_10003dd10(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_1010a0298(param_1,DAT_10184df00);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  plVar1 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 5;
  }
  return plVar1;
}




void FUN_10003dd60(void)

{
  FUN_10011ba9c();
  FUN_10016b684();
  FUN_100142c20();
  FUN_100663bfc();
  return;
}




void FUN_10003dd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144c470;
  param_1[5] = &PTR_FUN_10144c4c8;
  FUN_10003dd60();
  FUN_1010a0064(param_1);
  return;
}




void FUN_10003ddb4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144c470;
  param_1[5] = &PTR_FUN_10144c4c8;
  FUN_10003dd60();
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10003ddf0(long param_1)

{
  long lVar1;
  
  DAT_10184df00 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df00 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df00 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10003ebd8;
  *(code **)(lVar1 + 0xb8) = FUN_10003ebf0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df00;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 4;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_10003de4c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  *(long *)(param_1 + 0x30) = param_2;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  plVar7 = *(long **)(param_2 + 0x170);
  puVar5 = (undefined8 *)*plVar7;
  while (puVar5 != (undefined8 *)0x0) {
    FUN_10034cb1c(local_78,*puVar5);
    local_80 = local_78[0];
    FUN_10003dfa0(&local_70,&local_80,plVar7);
    plVar7 = plVar7 + 1;
    puVar5 = (undefined8 *)*plVar7;
  }
  lVar6 = **(long **)(param_2 + 0x10);
  plVar7 = *(long **)(param_2 + 0x10);
  while (lVar6 != 0) {
    uVar2 = FUN_100345b94();
    lVar6 = FUN_10034c450(uVar2,*(undefined8 *)*plVar7);
    if (lVar6 != 0) {
      FUN_1010a1958(&local_80,1,DAT_10184df00,0);
      lVar3 = CONCAT44(uStack_7c,local_80);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184df00) {
        lVar3 = 0;
      }
      FUN_10003e124(lVar3,lVar6,&local_70);
      uVar2 = FUN_1010a16d8();
      FUN_1010a16e4(uVar2,PTR_DAT_101872e30,*(undefined8 *)(lVar6 + 0x48));
    }
    lVar6 = plVar7[1];
    plVar7 = plVar7 + 1;
  }
  uVar4 = FUN_100142c58();
  if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0xe8) != '\0')) {
    FUN_100142be4();
  }
  iVar1 = FUN_10016b660();
  if ((iVar1 != 0) && (*(char *)(param_2 + 0xd8) != '\0')) {
    FUN_10016b5e8();
  }
  FUN_10011ba44(param_2 + 0x18);
  FUN_10003ebfc(&local_70);
  return;
}




void FUN_10003dfa0(uint *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_40;
  void *local_38;
  
  uVar5 = FUN_100015208(0,0,*param_2);
  uVar6 = param_1[4];
  param_1[4] = uVar6 + 1;
  uVar8 = *param_1;
  if (uVar8 >> 1 < uVar6 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar6 = *param_1;
    uVar8 = (uint)local_40;
    uVar10 = uVar6 - 1;
    if ((int)uVar10 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        uVar6 = *(uint *)((long)pvVar7 + (ulong)uVar10 * 8 + 4);
        if (uVar6 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar7 + (ulong)uVar10 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar11 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar11) {
              uVar4 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar11 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar6;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar6 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar10,uVar6);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      uVar8 = *param_1;
    }
  }
  uVar6 = 0;
  if (uVar8 != 0) {
    uVar6 = uVar5 / uVar8;
  }
  uVar11 = (ulong)(uVar5 - uVar6 * uVar8);
  lVar9 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar9 + uVar11 * 8 + 4);
  while (iVar2 != -1) {
    uVar6 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar6 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar6 - 1);
    iVar2 = *(int *)(lVar9 + uVar11 * 8 + 4);
  }
  puVar1 = (uint *)(lVar9 + uVar11 * 8);
  *puVar1 = uVar5;
  uVar6 = FUN_10003ec84(param_1,param_3);
  puVar1[1] = uVar6;
  return;
}




void FUN_10003e124(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  plVar9 = (long *)param_2[1];
  lVar8 = *plVar9;
  while (lVar8 != 0) {
    plVar9 = plVar9 + 1;
    FUN_10003e878(param_1,lVar8,param_3);
    lVar8 = *plVar9;
  }
  plVar9 = (long *)param_2[4];
  lVar8 = *plVar9;
  while (lVar8 != 0) {
    plVar9 = plVar9 + 1;
    FUN_10003ea14(param_1);
    lVar8 = *plVar9;
  }
  uVar3 = FUN_100126c4c();
  if ((uVar3 & 1) == 0) {
    plVar9 = (long *)param_2[2];
    lVar8 = *plVar9;
    while (lVar8 != 0) {
      plVar9 = plVar9 + 1;
      FUN_10003e878(param_1,lVar8,param_3);
      lVar8 = *plVar9;
    }
    plVar9 = (long *)param_2[5];
    lVar8 = *plVar9;
    while (lVar8 != 0) {
      plVar9 = plVar9 + 1;
      FUN_10003ea14(param_1);
      lVar8 = *plVar9;
    }
  }
  else {
    plVar9 = (long *)param_2[3];
    lVar8 = *plVar9;
    while (lVar8 != 0) {
      plVar9 = plVar9 + 1;
      FUN_10003e878(param_1,lVar8,param_3);
      lVar8 = *plVar9;
    }
    plVar9 = (long *)param_2[6];
    lVar8 = *plVar9;
    while (lVar8 != 0) {
      plVar9 = plVar9 + 1;
      FUN_10003ea14(param_1);
      lVar8 = *plVar9;
    }
  }
  plVar9 = (long *)param_2[7];
  lVar8 = *plVar9;
  while (lVar8 != 0) {
    plVar9 = plVar9 + 1;
    lVar4 = FUN_1010a0298(param_1,DAT_10184df10);
    if (lVar4 != 0) {
      FUN_10004cfa8(lVar4,lVar8);
    }
    lVar8 = *plVar9;
  }
  lVar8 = *(long *)param_2[8];
  plVar9 = (long *)param_2[8];
  while (lVar8 != 0) {
    lVar8 = FUN_1010a0298(param_1,DAT_10184de80);
    if (lVar8 != 0) {
      FUN_10004d814(lVar8,*plVar9);
    }
    lVar8 = plVar9[1];
    plVar9 = plVar9 + 1;
  }
  plVar9 = (long *)param_2[0xb];
  lVar8 = *plVar9;
  do {
    if (lVar8 == 0) {
      iVar2 = FUN_1004d2524(param_2[10]);
      if (iVar2 != 0) {
        local_58 = 0;
        uVar5 = FUN_100658cac(param_2[10],&local_58,0);
        local_70 = (undefined1 *)0x0;
        local_68 = 0;
        local_60 = 0;
        FUN_1006581d8(param_2[10],&local_70);
        ppuVar1 = (undefined1 **)local_70;
        if (-1 < local_60) {
          ppuVar1 = &local_70;
        }
        FUN_100658d0c(ppuVar1,&local_70);
        ppuVar1 = (undefined1 **)local_70;
        if (-1 < local_60) {
          ppuVar1 = &local_70;
        }
        FUN_100663bd8(ppuVar1,local_58,uVar5);
        if (local_60 < 0) {
          operator_delete(local_70);
        }
      }
      FUN_10016a578(*param_2);
      return;
    }
    uVar5 = FUN_1010a0298(param_1,DAT_10184def0);
    uVar6 = FUN_100345b94();
    plVar7 = (long *)FUN_10034c450(uVar6,"*KindredLensFlares*");
    plVar7 = (long *)*plVar7;
    puVar10 = (undefined8 *)*plVar7;
    while( true ) {
      if (puVar10 == (undefined8 *)0x0) goto LAB_10003e388;
      iVar2 = _strcmp((char *)*puVar10,*(char **)*plVar9);
      if (iVar2 == 0) break;
      plVar7 = plVar7 + 1;
      puVar10 = (undefined8 *)*plVar7;
    }
    local_70 = *(undefined1 **)(*plVar9 + 8);
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(*plVar9 + 0x10));
    FUN_10003d110(*(undefined4 *)(*plVar7 + 0x10),*(undefined4 *)(*plVar7 + 0x14),uVar5,&local_70,1)
    ;
    plVar7 = *(long **)(*plVar7 + 8);
    puVar10 = (undefined8 *)*plVar7;
    uVar6 = local_58;
    while (local_58 = uVar6, puVar10 != (undefined8 *)0x0) {
      plVar7 = plVar7 + 1;
      local_58._4_4_ = (undefined4)((ulong)uVar6 >> 0x20);
      local_58._0_4_ =
           CONCAT13((char)(int)(*(float *)((long)puVar10 + 0x1c) * 255.0),
                    CONCAT12((char)(int)(*(float *)(puVar10 + 3) * 255.0),
                             CONCAT11((char)(int)(*(float *)((long)puVar10 + 0x14) * 255.0),
                                      (char)(int)(*(float *)(puVar10 + 2) * 255.0))));
      FUN_10003d194(*(undefined4 *)(puVar10 + 1),*(undefined4 *)((long)puVar10 + 0xc),uVar5,*puVar10
                    ,&local_58);
      uVar6 = local_58;
      puVar10 = (undefined8 *)*plVar7;
    }
LAB_10003e388:
    plVar9 = plVar9 + 1;
    lVar8 = *plVar9;
  } while( true );
}




void FUN_10003e434(long param_1)

{
  FUN_10003de4c(param_1 + -0x28);
  return;
}




void FUN_10003e43c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_1004d2524(param_2);
  FUN_100015208(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_10003e488:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x1980099), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_10003e488;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10003e540(long param_1)

{
  FUN_10003e43c(param_1 + -0x28);
  return;
}




void FUN_10003e548(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_1004d2524(param_2);
  FUN_100015208(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_10003e594:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x3eb506ac), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_10003e594;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10003e64c(long param_1)

{
  FUN_10003e548(param_1 + -0x28);
  return;
}




void FUN_10003e654(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_1004d2524(param_2);
  FUN_100015208(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_10003e6a0:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x29d80553), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_10003e6a0;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10003e758(long param_1)

{
  FUN_10003e654(param_1 + -0x28);
  return;
}




void FUN_10003e760(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_1004d2524(param_2);
  FUN_100015208(param_2,uVar2,0x12345678);
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0xffff0000;
  lVar3 = param_1;
LAB_10003e7b4:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x456706e0), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_10003e7b4;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_10003e870(long param_1)

{
  FUN_10003e760(param_1 + -0x28);
  return;
}




void FUN_10003e878(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_88;
  undefined4 local_84;
  float local_80 [3];
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar1 = FUN_1004d2524(param_2[7]);
  if (iVar1 == 0) {
    plVar3 = (long *)FUN_1010a0298(param_1,DAT_10184dc58);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2[6]);
  }
  else {
    uVar2 = FUN_1010a0298(param_1,DAT_10184df20);
    plVar3 = (long *)FUN_1010a0298(uVar2,DAT_10184dc58);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2[6]);
    FUN_100045f64(uVar2,param_2[0xd]);
    uVar2 = FUN_1010a0298(uVar2,DAT_10184dc68);
    FUN_100029c74(uVar2,param_2[7],param_2 + 8);
  }
  local_64 = 0;
  local_44 = 0x3f800000;
  puVar5 = param_2;
  if (*(char *)((long)param_2 + 0x24) != '\0') {
    FUN_10034cb1c(&local_88,param_2[5]);
    local_84 = local_88;
    plVar4 = (long *)FUN_10003ede8(param_3,&local_84);
    puVar5 = (undefined8 *)(*plVar4 + 8);
  }
  fVar7 = *(float *)(param_2 + 3);
  local_6c = *(undefined4 *)((long)param_2 + 0x1c);
  fVar8 = *(float *)(param_2 + 4);
  local_68 = 0;
  fVar6 = 3.1415927;
  local_60 = (float)___sincosf_stret(*(float *)(param_2 + 2) * 0.0055555557 * 3.1415927);
  local_80[0] = fVar6 * fVar7;
  local_80[1] = 0.0;
  local_80[2] = fVar8 * -local_60;
  local_74 = 0;
  uStack_70 = 0;
  local_60 = local_60 * fVar7;
  local_5c = 0;
  local_58 = fVar6 * fVar8;
  local_54 = 0;
  local_50 = *puVar5;
  local_48 = *(undefined4 *)(puVar5 + 1);
  FUN_1004e8e38(plVar3,local_80);
  *(undefined1 *)((long)plVar3 + 0x33) = *(undefined1 *)(param_2 + 0xe);
  return;
}




void FUN_10003ea14(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  fVar8 = 3.1415927;
  fVar5 = (float)___sincosf_stret(*(float *)((long)param_2 + 0xc) * 0.017453294);
  local_64 = 0x3f800000;
  fVar9 = fVar8;
  fVar6 = (float)___sincosf_stret(*(float *)(param_2 + 2) * 0.017453294);
  local_74 = 0;
  fVar10 = fVar9;
  fVar7 = (float)___sincosf_stret(*(float *)((long)param_2 + 0x14) * 0.017453294);
  local_94 = 0;
  local_84 = 0;
  local_98 = *(float *)(param_2 + 3);
  local_88 = *(float *)((long)param_2 + 0x1c);
  local_78 = *(float *)(param_2 + 4);
  local_a0 = local_98 * fVar10 * fVar9;
  fStack_9c = local_98 * (fVar10 * fVar6 * fVar5 + fVar8 * fVar7);
  local_98 = local_98 * (fVar10 * fVar6 * -fVar8 + fVar5 * fVar7);
  local_90 = -fVar9 * fVar7 * local_88;
  fStack_8c = local_88 * (fVar10 * fVar8 - fVar7 * fVar6 * fVar5);
  local_88 = local_88 * (fVar10 * fVar5 - fVar7 * fVar6 * -fVar8);
  local_80 = local_78 * fVar6;
  fStack_7c = -fVar5 * fVar9 * local_78;
  local_78 = local_78 * fVar9 * fVar8;
  local_70 = *param_2;
  local_68 = *(undefined4 *)(param_2 + 1);
  lVar3 = FUN_1010a0298(param_1,DAT_10184dad8);
  if (lVar3 != 0) {
    FUN_1000451ac(lVar3,param_2[5],0);
    FUN_100045400(0xbf800000,lVar3);
    FUN_100045474(lVar3,&local_a0);
    iVar1 = FUN_1004d2524(param_2[6]);
    if (iVar1 != 0) {
      uVar4 = param_2[6];
      uVar2 = FUN_1004d2524(uVar4);
      uVar4 = FUN_100015208(uVar4,uVar2,0x12345678);
      FUN_1000453b4(lVar3,uVar4);
    }
    FUN_1000453bc(lVar3);
  }
  return;
}




void FUN_10003ebd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144c470;
  param_1[5] = &PTR_FUN_10144c4c8;
  param_1[6] = 0;
  return;
}




void FUN_10003ebf0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ebf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




uint * FUN_10003ebfc(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10003ec84(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10003ecec(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_10003ecec(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10003ed6c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10003ed6c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long FUN_10003ede8(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_10003ee70:
    uVar5 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    uVar5 = (ulong)(uVar3 - uVar2 * uVar1);
    lVar4 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar3) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar2 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar3);
      if ((int)uVar5 == -1) goto LAB_10003ee70;
    }
    uVar5 = (ulong)*(uint *)(lVar4 + uVar5 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar5 * 8;
}




void FUN_10003ee88(void)

{
  if ((DAT_10184df08 & 1) == 0) {
    DAT_10184df00 = DAT_101872e38;
    DAT_10184df08 = 1;
  }
  return;
}




void FUN_10003eeb4(void)

{
  if ((DAT_10184df18 & 1) == 0) {
    DAT_10184df10 = DAT_101872e38;
    DAT_10184df18 = 1;
  }
  return;
}




void FUN_10003eee0(void)

{
  if ((DAT_10184de88 & 1) == 0) {
    DAT_10184de80 = DAT_101872e38;
    DAT_10184de88 = 1;
  }
  return;
}




void FUN_10003ef0c(void)

{
  if ((DAT_10184def8 & 1) == 0) {
    DAT_10184def0 = DAT_101872e38;
    DAT_10184def8 = 1;
  }
  return;
}




void FUN_10003ef38(void)

{
  if ((DAT_10184df28 & 1) == 0) {
    DAT_10184df20 = DAT_101872e38;
    DAT_10184df28 = 1;
  }
  return;
}




void FUN_10003ef64(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




void FUN_10003ef90(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




void FUN_10003efbc(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_10003efe8(long param_1)

{
  long lVar1;
  
  DAT_10184dcb8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dcb8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dcb8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10003f228;
  *(code **)(lVar1 + 0xb8) = FUN_10003f264;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dcb8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x163803be,FUN_10003f058,0);
  return;
}




void FUN_10003f058(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined3 uStack_6c;
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(int *)(plVar2[1] + 0xa4) != DAT_10184db58) {
    plVar2 = (long *)0x0;
  }
  lVar3 = plVar2[2];
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_69 = 0xff;
  uStack_68 = 0;
  uStack_64 = DAT_101dc1cb8;
  uStack_5c = 0x3f8000003f800000;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_48 = 0x200000000;
  uStack_3c = 0x101;
  uStack_78 = *(undefined4 *)(param_1 + 0x28);
  uStack_80 = *(undefined4 *)(param_1 + 0x2c);
  uStack_7c = 0xbf800000;
  uStack_40 = FUN_1003a2d9c(lVar3);
  uStack_40 = uStack_40 ^ 1;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uStack_3c = CONCAT13(1,(undefined3)uStack_3c);
    uStack_74 = 0;
  }
  uStack_38 = *(undefined1 *)(param_1 + 0x39);
  if (*(long *)(param_1 + 0x30) == 0) {
    (**(code **)(*plVar2 + 0xb0))(plVar2,&uStack_a0);
  }
  else {
    lVar3 = plVar2[2];
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
      lVar3 = 0;
    }
    uVar1 = FUN_100448e2c(lVar3);
    (**(code **)(*plVar2 + 0xc0))(plVar2,&uStack_a0,uVar1);
  }
  return;
}




void FUN_10003f05c(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  pcVar1 = (char *)0x0;
  if (**(char **)(param_2 + 2) != '\0') {
    pcVar1 = *(char **)(param_2 + 2);
  }
  *(char **)(param_1 + 0x30) = pcVar1;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 4);
  FUN_10003f084();
  return;
}




void FUN_10003f084(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined3 uStack_6c;
  undefined1 local_69;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(int *)(plVar2[1] + 0xa4) != DAT_10184db58) {
    plVar2 = (long *)0x0;
  }
  lVar3 = plVar2[2];
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_69 = 0xff;
  local_68 = 0;
  local_64 = DAT_101dc1cb8;
  local_5c = 0x3f8000003f800000;
  local_54 = 0x3f800000;
  local_50 = 0;
  uStack_48 = 0x200000000;
  local_3c = 0x101;
  uStack_78 = *(undefined4 *)(param_1 + 0x28);
  local_80 = *(undefined4 *)(param_1 + 0x2c);
  local_7c = 0xbf800000;
  local_40 = FUN_1003a2d9c(lVar3);
  local_40 = local_40 ^ 1;
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_3c = CONCAT13(1,(undefined3)local_3c);
    local_74 = 0;
  }
  local_38 = *(undefined1 *)(param_1 + 0x39);
  if (*(long *)(param_1 + 0x30) == 0) {
    (**(code **)(*plVar2 + 0xb0))(plVar2,&local_a0);
  }
  else {
    lVar3 = plVar2[2];
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
      lVar3 = 0;
    }
    uVar1 = FUN_100448e2c(lVar3);
    (**(code **)(*plVar2 + 0xc0))(plVar2,&local_a0,uVar1);
  }
  return;
}




void FUN_10003f1d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(int *)(plVar1[1] + 0xa4) != DAT_10184db58) {
    plVar1 = (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003f20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4);
  return;
}




void FUN_10003f214(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10003f228(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10144c500;
  uVar1 = FUN_10034d060();
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x32) = 0;
  return param_1;
}




void FUN_10003f264(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003f26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003f270(void)

{
  if ((DAT_10184dcc0 & 1) == 0) {
    DAT_10184dcb8 = DAT_101872e38;
    DAT_10184dcc0 = 1;
  }
  return;
}




void FUN_10003f29c(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_10003f2c8(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_10003f2f4(long param_1)

{
  long lVar1;
  
  DAT_10184df30 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184df30 + 1;
  lVar1 = param_1 + (ulong)DAT_10184df30 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10003fcc8;
  *(code **)(lVar1 + 0xb8) = FUN_10003fd58;
  *(uint *)(lVar1 + 0xa4) = DAT_10184df30;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10003f3e8,0);
  FUN_1010a0990(param_1,0x23ed04d9,thunk_FUN_10003f978,0);
  FUN_1010a0990(param_1,0x377a062d,FUN_10003f440,0);
  FUN_1010a0990(param_1,0x199203e9,FUN_10003f46c,0);
  FUN_1010a0990(param_1,0x6cf608dd,FUN_10003f498,0);
  return;
}




void FUN_10003f3e8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38) + -8;
  if (*(long *)(param_1 + 0x38) != 0 && lVar2 != 0) {
    do {
      FUN_1010a1cd4();
      FUN_10003f8b8(lVar2,param_1);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    } while (lVar2 != 0);
  }
  return;
}




void thunk_FUN_10003f978(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
  if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10003f440(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10003fa0c(param_1,in_stack_00000000);
  return;
}




void FUN_10003f46c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10003fab8(param_1,in_stack_00000000);
  return;
}




void FUN_10003f498(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10003fb64(param_1,in_stack_00000000);
  return;
}




void FUN_10003f4c4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10003f4c4_10144c530;
  param_1[5] = &PTR_FUN_10144c560;
  if (*(char *)(param_1 + 0x1b) != '\0') {
    FUN_10003f52c(param_1);
  }
  FUN_1000400f4(param_1);
  FUN_10003fec0(param_1 + 10);
  FUN_10003fe6c(param_1 + 7);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10003f52c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
  if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      FUN_10003f70c(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}




void thunk_FUN_10003f4c4(void)

{
  FUN_10003f4c4();
  return;
}




void FUN_10003f5d4(long param_1)

{
  FUN_10003f4c4(param_1 + -0x28);
  return;
}




void FUN_10003f5dc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003f4c4();
  operator_delete(pvVar1);
  return;
}




void FUN_10003f5f0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003f4c4(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10003f608(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  FUN_10016fcd4(param_3,(long *)(param_1 + 0x38),param_1 + 0x50,param_1 + 0x68);
  *(undefined1 *)(param_1 + 0xd8) = 1;
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && puVar4 != (undefined8 *)0x0) {
    do {
      (**(code **)*puVar4)(puVar4,param_1);
      plVar1 = puVar4 + 1;
      puVar4 = (undefined8 *)0x0;
      if (*plVar1 != 0) {
        puVar4 = (undefined8 *)(*plVar1 + -8);
      }
    } while (puVar4 != (undefined8 *)0x0);
  }
  lVar3 = *(long *)(param_1 + 0x38);
  puVar4 = (undefined8 *)(lVar3 + -8);
  if (lVar3 != 0 && puVar4 != (undefined8 *)0x0) {
    do {
      (**(code **)*puVar4)(puVar4,param_1);
      plVar1 = puVar4 + 1;
      puVar4 = (undefined8 *)0x0;
      if (*plVar1 != 0) {
        puVar4 = (undefined8 *)(*plVar1 + -8);
      }
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}




void FUN_10003f6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10016fc08(param_3);
  FUN_10003f608(param_1,param_2,uVar1);
  return;
}




void FUN_10003f70c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_458;
  undefined4 local_450;
  undefined1 auStack_448 [1032];
  
  lVar3 = param_1[5] + -0x20;
  if (param_1[5] != 0 && lVar3 != 0) {
    do {
      lVar1 = 0;
      if (*(long *)(lVar3 + 0x20) != 0) {
        lVar1 = *(long *)(lVar3 + 0x20) + -0x20;
      }
      if (*(long *)(lVar3 + 0x28) != 0) {
        local_450 = 0;
        local_458 = param_2;
        FUN_10048fb50(auStack_448);
        (**(code **)(*param_1 + 0x50))(param_1,&local_458);
        if (*(long *)(lVar3 + 0x28) != 0) {
          plVar2 = *(long **)(*(long *)(lVar3 + 0x28) + 0x10);
          (**(code **)(*plVar2 + 0x20))(plVar2,&local_458);
          *(undefined8 *)(lVar3 + 0x28) = 0;
        }
        FUN_10003ff14(param_1,lVar3);
      }
      lVar3 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}




undefined8 FUN_10003f7cc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010003f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar1;
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = DAT_101dc0b88;
  }
  return 0;
}




void FUN_10003f810(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
  if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10003f8b8(undefined4 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_468;
  undefined4 local_460;
  undefined1 auStack_458 [1032];
  
  lVar2 = param_2[5] + -0x20;
  if (param_2[5] != 0 && lVar2 != 0) {
    do {
      lVar1 = 0;
      if (*(long *)(lVar2 + 0x20) != 0) {
        lVar1 = *(long *)(lVar2 + 0x20) + -0x20;
      }
      if (*(long *)(lVar2 + 0x28) != 0) {
        local_468 = param_3;
        local_460 = param_1;
        FUN_10048fb50(auStack_458);
        (**(code **)(*param_2 + 0x50))(param_2,&local_468);
        FUN_10003fff4(lVar2,&local_468);
        if (*(long *)(lVar2 + 0x28) == 0) {
          FUN_10003ff14(param_2,lVar2);
        }
      }
      lVar2 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}




void FUN_10003f978(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
  if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10003fa0c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
    if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
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
  }
  return;
}




void FUN_10003fab8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
    if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}




void FUN_10003fb64(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
    if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
    plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
    if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}




void FUN_10003fc10(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + -8);
  if (*(long *)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8);
  if (*(long *)(param_1 + 0x50) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




long FUN_10003fcb8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10003fcc0(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_10003fcc8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10003f4c4_10144c530;
  param_1[5] = &PTR_FUN_10144c560;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = &PTR_FUN_10144c590;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = DAT_101dc0b88;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}




void FUN_10003fd58(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003fd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10003fd64(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x00010003fdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar2);
  return;
}




undefined8 FUN_10003fdb0(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x58);
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
  *(byte *)(param_1 + 0x58) = bVar1 + 1;
  return param_2;
}




long FUN_10003fdfc(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x58);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x18;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




long FUN_10003fe34(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x58);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x18;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




long * FUN_10003fe6c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + -8;
  if (*param_1 != 0 && lVar1 != 0) {
    do {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_10016d494();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    } while (lVar1 != 0);
  }
  return param_1;
}




long * FUN_10003fec0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1 + -8;
  if (*param_1 != 0 && lVar1 != 0) {
    do {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_10016d8a8();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    } while (lVar1 != 0);
  }
  return param_1;
}




void FUN_10003ff14(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + -0x20;
  }
  if (lVar2 != param_2) {
    FUN_10003ff98((long *)(param_1 + 0x28),param_2);
    FUN_10016d5e8(param_2);
    return;
  }
  plVar4 = (long *)(*(long *)(param_2 + 8) + -8);
  if (*(long *)(param_2 + 8) != 0 && plVar4 != (long *)0x0) {
    do {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar1 = plVar4 + 1;
      plVar4 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar4 = (long *)(*plVar1 + -8);
      }
    } while (plVar4 != (long *)0x0);
  }
  return;
}




void FUN_10003ff98(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 0x20);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10003fff4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 &&
         (iVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))(*(long **)(lVar2 + 0x10),param_2),
         iVar1 != 1))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + -8;
    }
    *(long *)(param_1 + 0x28) = lVar2;
  }
  return;
}




void thunk_FUN_10003bc74(void)

{
  FUN_10003bc74();
  return;
}




void thunk_FUN_10003bd40(void)

{
  FUN_10003bd40();
  return;
}




void thunk_FUN_100031c68(void)

{
  FUN_100031c68();
  return;
}




void thunk_FUN_10003bec8(void)

{
  FUN_10003bec8();
  return;
}




void thunk_FUN_10003bf20(void)

{
  FUN_10003bf20();
  return;
}

