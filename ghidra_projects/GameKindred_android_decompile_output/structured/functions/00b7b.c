// functions/00b7b — 13 functions
#include "libGameKindred.h"




void FUN_00b7b284(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  byte local_128 [8];
  ulong local_120;
  void *local_118;
  byte local_110 [8];
  ulong local_108;
  void *local_100;
  byte local_f8 [8];
  ulong local_f0;
  void *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_1 + 0x28f50);
  if (*plVar1 == 0) {
    pvVar4 = operator_new(0xe8);
    memset(pvVar4,0,0xe8);
    FUN_00e70510((long)pvVar4 + 0x28);
    *(undefined8 *)((long)pvVar4 + 0x80) = 0;
    *(undefined8 *)((long)pvVar4 + 0x88) = 0;
    *(undefined8 *)((long)pvVar4 + 0x90) = 0;
    *(undefined8 *)((long)pvVar4 + 0x68) = 0;
    *(undefined8 *)((long)pvVar4 + 0x70) = 0;
    *(undefined8 *)((long)pvVar4 + 0x58) = 0;
    *(undefined8 *)((long)pvVar4 + 0x60) = 0;
    *(undefined8 *)((long)pvVar4 + 0x50) = 0;
    memset((void *)((long)pvVar4 + 0xa0),0,0x48);
    *plVar1 = (long)pvVar4;
  }
  else {
    uVar3 = FUN_0093d938();
    if ((uVar3 & 1) != 0) {
      FUN_00a9f1e0(param_1 + 0x310,1);
    }
  }
  FUN_008fa54c(local_88,param_2);
  FUN_008fce60(*plVar1,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  uVar3 = FUN_0093d938();
  if ((uVar3 & 1) != 0) {
    FUN_008fa54c(&local_e0,"TALENTS.UPGRADE.");
    FUN_008fa54c(local_f8,param_2);
    uVar3 = (ulong)(local_f8[0] >> 1);
    pvVar4 = (void *)((ulong)local_f8 | 1);
    if ((local_f8[0] & 1) != 0) {
      uVar3 = local_f0;
      pvVar4 = local_e8;
    }
    puVar5 = (ulong *)FUN_0090de84(&local_e0,pvVar4,uVar3);
    local_b0 = (void *)puVar5[2];
    uStack_b8 = puVar5[1];
    local_c0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_008fa54c(local_110,&DAT_01bb05c9);
    uVar3 = (ulong)(local_110[0] >> 1);
    pvVar4 = (void *)((ulong)local_110 | 1);
    if ((local_110[0] & 1) != 0) {
      uVar3 = local_108;
      pvVar4 = local_100;
    }
    puVar5 = (ulong *)FUN_0090de84(&local_c0,pvVar4,uVar3);
    local_90 = (void *)puVar5[2];
    uStack_98 = puVar5[1];
    local_a0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_008fcdb8(local_88,&local_a0);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_f8[0] & 1) != 0) {
      operator_delete(local_e8);
    }
    if (((byte)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    pvVar4 = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pvVar4 = local_78;
    }
    FUN_00a9f170(param_1 + 0x310,1,pvVar4);
    FUN_008fa54c(local_f8,"TALENTS.NEWTALENT.");
    FUN_008fa54c(local_110,param_2);
    uVar3 = (ulong)(local_110[0] >> 1);
    pvVar4 = (void *)((ulong)local_110 | 1);
    if ((local_110[0] & 1) != 0) {
      uVar3 = local_108;
      pvVar4 = local_100;
    }
    puVar5 = (ulong *)FUN_0090de84(local_f8,pvVar4,uVar3);
    local_d0 = (void *)puVar5[2];
    uStack_d8 = puVar5[1];
    local_e0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_008fa54c(local_128,&DAT_01bb05c9);
    uVar3 = (ulong)(local_128[0] >> 1);
    pvVar4 = (void *)((ulong)local_128 | 1);
    if ((local_128[0] & 1) != 0) {
      uVar3 = local_120;
      pvVar4 = local_118;
    }
    puVar5 = (ulong *)FUN_0090de84(&local_e0,pvVar4,uVar3);
    local_b0 = (void *)puVar5[2];
    uStack_b8 = puVar5[1];
    local_c0 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_008fcdb8(&local_a0,&local_c0);
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_128[0] & 1) != 0) {
      operator_delete(local_118);
    }
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_f8[0] & 1) != 0) {
      operator_delete(local_e8);
    }
    pvVar4 = (void *)((ulong)&local_a0 | 1);
    if ((local_a0 & 1) != 0) {
      pvVar4 = local_90;
    }
    FUN_00a9f170(param_1 + 0x310,1,pvVar4);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
  }
  lVar6 = FUN_00ce9b48(param_2);
  *(long *)(*plVar1 + 0x18) = lVar6;
  if (lVar6 != 0) {
    lVar6 = FUN_00ce9cb8(param_2);
    *(long *)(*plVar1 + 0x20) = lVar6;
    uVar7 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 0x28),0);
    FUN_00910394(*plVar1 + 0x28,uVar7);
    FUN_00ce9d88(param_2,*plVar1 + 0x38,3);
    FUN_00b7b6f8(param_1);
    FUN_008fce60(*plVar1 + 0x60,param_3);
    lVar6 = *plVar1;
    *(undefined4 *)(lVar6 + 0x78) = param_4;
    FUN_008fce60(lVar6 + 0x80,param_5);
    lVar6 = *plVar1;
    *(undefined4 *)(lVar6 + 0x98) = param_6;
    FUN_008fce60(lVar6 + 0xa0,param_7);
    FUN_008fce60(*plVar1 + 0xb8,param_8);
    FUN_008fce60(*plVar1 + 0xd0,param_9);
    FUN_00babc78(param_1 + 0x2c50);
    FUN_00bafaf4(param_1 + 0x22c30);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b7b6f8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_1 + 0x28f50);
  FUN_00951534(*plVar1 + 0x50,0);
  uVar3 = FUN_00cdbb18();
  pbVar6 = (byte *)*plVar1;
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  puVar4 = (uint *)FUN_00cdc678(uVar3,pbVar6);
  if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar7 = *plVar1;
      lVar5 = *(long *)(puVar4 + 2) + lVar8;
      if ((*(byte *)(*(long *)(puVar4 + 2) + lVar8) & 1) == 0) {
        lVar5 = lVar5 + 1;
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x10);
      }
      FUN_008fa54c(local_60,lVar5);
      FUN_0096204c(lVar7 + 0x50,local_60);
      if (((ulong)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar9 < *puVar4);
  }
  lVar8 = *(long *)(*plVar1 + 0x58);
  local_60[0] = FUN_00cdbb44;
  FUN_00a6cbcc(lVar8,lVar8 + (ulong)*(uint *)(*plVar1 + 0x50) * 0x18,local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7b828(long param_1)

{
  FUN_00951534(*(long *)(param_1 + 0x28f50) + 0x50,0);
  return;
}




void FUN_00b7b840(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00a9f290();
  FUN_00948cd8(param_1 + 0x587);
  param_1[0x58a] = &PTR___cxa_pure_virtual_027e7668;
  FUN_00e83560(param_1 + 0x58b);
  *param_1 = &PTR_FUN_027e7000;
  param_1[0x587] = &PTR_FUN_027e7230;
  param_1[0x58e] = &PTR_FUN_027e7650;
  puVar2 = param_1 + 0x58e;
  puVar3 = param_1 + 0x591;
  param_1[0x590] = 0;
  param_1[0x58f] = 0;
  param_1[0x58b] = &PTR_FUN_027e7620;
  param_1[0x58a] = &PTR_FUN_027e75c8;
  FUN_00b8e994(puVar3);
  FUN_00ba22d8(param_1 + 0x2a60);
  FUN_00bafdc4(param_1 + 0x11ecc);
  FUN_00b48dbc(param_1 + 0x175ea);
  FUN_00b77b80(param_1 + 0x23fda);
  FUN_0099cc90(param_1 + 0x272c3);
  param_1[0x272c9] = 0;
  uVar5 = FUN_00f02540(param_1 + 0x567);
  if ((uVar5 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0x567,1);
  }
  uVar6 = FUN_00e6ce7c("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_00a9f888(param_1,1,uVar6,puVar3);
  uVar6 = FUN_00e6ce7c("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_00a9f888(param_1,2,uVar6,param_1 + 0x2a60);
  uVar6 = FUN_00e6ce7c("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_00a9f888(param_1,3,uVar6,param_1 + 0x11ecc);
  local_60 = FUN_00f048a4("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_88 = thunk_FUN_00b7ced8;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  puStack_80 = param_1;
  FUN_009693a0(param_1 + 0x592,&local_88);
  local_60 = FUN_00f048a4("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_88 = thunk_FUN_00b7d094;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  puStack_80 = param_1;
  FUN_009693a0(param_1 + 0x592,&local_88);
  puVar1 = param_1 + 0x62;
  FUN_00a9f170(puVar1,1,"FRIENDS.*");
  FUN_00a9f170(puVar1,2,&DAT_01bb05c4);
  FUN_00a9f170(puVar1,3,"TEAM.*");
  FUN_00aa218c(puVar2,"GUILD",param_1,FUN_00b7d380);
  FUN_00aa218c(puVar2,"FRIENDS",param_1,FUN_00b7d3ac);
  FUN_00aa218c(puVar2,"TEAM",param_1,FUN_00b7d3d8);
  uVar5 = FUN_00e80f6c();
  if ((uVar5 & 1) != 0) {
    FUN_00b922c0(puVar3);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7bb20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e7000;
  param_1[0x58e] = &PTR_FUN_027e7650;
  param_1[0x587] = &PTR_FUN_027e7230;
  param_1[0x58b] = &PTR_FUN_027e7620;
  param_1[0x58a] = &PTR_FUN_027e75c8;
  FUN_0099ccc4(param_1 + 0x272c3);
  FUN_00b77e80(param_1 + 0x23fda);
  FUN_00b49538(param_1 + 0x175ea);
  FUN_00bb1ec4(param_1 + 0x11ecc);
  FUN_00ba4458(param_1 + 0x2a60);
  FUN_00b90b14(param_1 + 0x591);
  param_1[0x58e] = &PTR_FUN_027e76c0;
  FUN_00b7d304(param_1 + 0x58f,1);
  FUN_00e835e0(param_1 + 0x58b);
  FUN_00948d58(param_1 + 0x587);
  FUN_00a9f558(param_1);
  return;
}




void FUN_00b7bc18(long param_1)

{
  FUN_00b7bb20(param_1 + -0x2c38);
  return;
}




void FUN_00b7bc24(long param_1)

{
  FUN_00b7bb20(param_1 + -0x2c58);
  return;
}




void FUN_00b7bc30(void *param_1)

{
  FUN_00b7bb20();
  operator_delete(param_1);
  return;
}




void FUN_00b7bc54(long param_1)

{
  FUN_00b7bb20((void *)(param_1 + -0x2c38));
  operator_delete((void *)(param_1 + -0x2c38));
  return;
}




void FUN_00b7bc80(long param_1)

{
  FUN_00b7bb20((void *)(param_1 + -0x2c58));
  operator_delete((void *)(param_1 + -0x2c58));
  return;
}




void FUN_00b7bcac(undefined8 param_1)

{
  FUN_00a9f7e0();
  FUN_00b7bcd0(param_1);
  return;
}




void FUN_00b7bcd0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00a9f644();
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x591,&local_50);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x2a60,&local_50);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x11ecc,&local_50);
  uVar2 = DAT_02be3670;
  FUN_00ba8400(DAT_02be3670,param_3 + 0x2a60);
  FUN_00bb5aa4(uVar2,param_3 + 0x11ecc);
  FUN_00f00298(&local_50,auStack_54);
  *(undefined4 *)(param_3 + 0x552) = local_50;
  FUN_00a9e810(param_3 + 0x62);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7bde8(long *param_1,uint param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  
  FUN_00b7bcd0();
  FUN_00a9f604(param_1,param_2 & 1);
  if ((param_2 & 1) == 0) goto LAB_00b7c004;
  lVar6 = FUN_00e6b5e4();
  uVar7 = FUN_009580c4();
  if (((uVar7 & 1) != 0) && (5 < lVar6 - param_1[0x272c9])) {
    lVar8 = FUN_009580b8();
    FUN_009658c8(lVar8 + 0x18);
    lVar8 = FUN_009580b8();
    bVar3 = *(byte *)(lVar8 + 0x5478);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar8 + 0x5480);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar12 = *(void **)(lVar8 + 0x5488);
      if ((bVar3 & 1) == 0) {
        pvVar12 = (void *)(lVar8 + 0x5479);
      }
      pcVar10 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar10 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar11 = (char *)(lVar8 + 0x5479);
          lVar8 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar11 != *pcVar10) goto LAB_00b7beec;
            pcVar11 = pcVar11 + 1;
            lVar8 = lVar8 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar12,pcVar10,sVar1), iVar5 != 0))
      goto LAB_00b7beec;
    }
    else {
LAB_00b7beec:
      uVar9 = FUN_009580b8();
      lVar8 = FUN_009580b8();
      FUN_0095e21c(uVar9,lVar8 + 0x5478,1);
    }
    lVar8 = FUN_009580b8();
    bVar3 = *(byte *)(lVar8 + 0x5490);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar8 + 0x5498);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar12 = *(void **)(lVar8 + 0x54a0);
      if ((bVar3 & 1) == 0) {
        pvVar12 = (void *)(lVar8 + 0x5491);
      }
      pcVar10 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar10 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar11 = (char *)(lVar8 + 0x5491);
          lVar8 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar11 != *pcVar10) goto LAB_00b7bfa0;
            pcVar11 = pcVar11 + 1;
            lVar8 = lVar8 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar12,pcVar10,sVar1), iVar5 != 0))
      goto LAB_00b7bfa0;
    }
    else {
LAB_00b7bfa0:
      uVar9 = FUN_009580b8();
      lVar8 = FUN_009580b8();
      FUN_0095e34c(uVar9,lVar8 + 0x5490,1);
    }
    param_1[0x272c9] = lVar6;
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
  if ((*(byte *)(param_1 + 0x566) & 1) == 0) {
    (**(code **)(*param_1 + 0x178))(param_1,1,&DAT_0320ffa8);
  }
LAB_00b7c004:
  sVar4 = (short)param_1[0x585];
  if (sVar4 == 3) {
    FUN_00bb2af8(param_1 + 0x11ecc,param_2 & 1);
    return;
  }
  if (sVar4 == 2) {
    FUN_00ba5184(param_1 + 0x2a60,param_2 & 1);
    return;
  }
  if (sVar4 != 1) {
    return;
  }
  FUN_00b9257c(param_1 + 0x591,param_2 & 1);
  return;
}

