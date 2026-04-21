// functions/00aee — 18 functions
#include "libGameKindred.h"




void FUN_00aee218(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,param_2,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aee28c(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_a0;
  float fStack_9c;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x8ec4) != 0) {
    fVar9 = -500.0;
    uVar8 = 0;
    lVar5 = param_1 + 0xd0;
    uVar2 = 0;
    if ((param_2 & 1) == 0) {
      fVar9 = 0.0;
      uVar2 = 0xc3960000;
    }
    do {
      fVar10 = *(float *)(lVar5 + 0x44);
      if ((NAN(fVar10)) || (*(float *)(lVar5 + 0x40) != fVar9)) {
        *(float *)(lVar5 + 0x40) = fVar9;
        FUN_0091ada4(lVar5);
      }
      lVar3 = DAT_03210d00;
      uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar4 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
        if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar4 = 0xffff;
        }
        else {
          uVar4 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efcad4(puVar6);
        *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_00efcac4((float)(uVar8 & 0xffffffff) * 0.15,puVar6);
      lVar3 = DAT_03210d00;
      uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar4 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
        if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar4 = 0xffff;
        }
        else {
          uVar4 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efdc08(puVar7);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      local_a0 = uVar2;
      fStack_9c = fVar10;
      FUN_00efdc50(puVar7,&local_a0);
      FUN_00efcac4(0x3ee66666,puVar7);
      FUN_00efcb24(puVar7,FUN_0091aa80);
      FUN_00f01980(lVar5);
      if ((~*(uint *)(lVar5 + 0x84) & 0x7f80) != 0) {
        *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 0x7f80;
        FUN_0091ada4(lVar5);
      }
      FUN_00f02308(lVar5,puVar6,puVar7,0);
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 0x1000;
    } while (uVar8 < *(uint *)(param_1 + 0x8ec4));
  }
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aee520(long param_1,uint param_2,byte param_3)

{
  param_1 = param_1 + (ulong)param_2 * 0x1000;
  *(byte *)(param_1 + 0x10c8) = param_3 & 1;
  FUN_00aef730(param_1 + 0xd0);
  return;
}




void FUN_00aee53c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xff8) = param_2 & 1;
  FUN_00aef730();
  return;
}




void FUN_00aee548(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x8ec4)) {
    lVar2 = 0;
    lVar1 = param_1 + 0xee0;
    do {
      FUN_00afc73c(lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x1000;
    } while (lVar2 < *(int *)(param_1 + 0x8ec4));
  }
  return;
}




void FUN_00aee5a0(long param_1)

{
  FUN_00afc73c(param_1 + 0xe10);
  return;
}




void FUN_00aee5a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aed780();
  lVar2 = FUN_009580b8();
  if (*(int *)(lVar2 + 0x55e0) == 0) {
    FUN_00f0d75c(param_1 + 0x8d68,&DAT_03210450);
  }
  else {
    FUN_00e70510(&local_38);
    lVar2 = FUN_009580b8();
    FUN_00e70e18(&local_38,&DAT_01bb6d43,*(undefined4 *)(lVar2 + 0x55e0));
    FUN_00f0d75c(param_1 + 0x8d68,&local_38);
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aee65c(long param_1)

{
  FUN_00aee5a8(param_1 + -0xb8);
  return;
}




void FUN_00aee664(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  code *local_98;
  long *plStack_90;
  void *local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar3 = *(int *)((long)param_1 + 0x8ec4);
  if (iVar3 < 8) {
    *(int *)((long)param_1 + 0x8ec4) = iVar3 + 1;
    lVar7 = (long)(int)param_2;
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + lVar7 * 0x200 + 0x1a,1);
    FUN_008fa54c(&local_98,param_4);
    FUN_008fce60(param_1 + lVar7 * 0x200 + 0x1d5,&local_98);
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    FUN_008fa54c(&local_98,param_5);
    FUN_008fce60(param_1 + lVar7 * 0x200 + 0x1d8,&local_98);
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    FUN_00f0e548(param_1 + lVar7 * 0x200 + 0x68,PTR_s_build___MenuPartsCommon_tga_02be3530,param_4);
    FUN_00f0d75c(param_1 + lVar7 * 0x200 + 0xb5,param_3);
    FUN_00f0d75c(param_1 + lVar7 * 0x200 + 0xdb,param_6);
    plVar1 = param_1 + lVar7 * 0x200 + 0x1b;
    uVar6 = (ulong)param_2;
    local_70 = DAT_03210f88;
    local_98 = FUN_00aee8f4;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    plStack_90 = param_1;
    local_78 = uVar6;
    FUN_009693a0(plVar1,&local_98);
    local_98 = FUN_00aee8f4;
    local_70 = DAT_03210f5c;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    plStack_90 = param_1;
    local_78 = uVar6;
    FUN_009693a0(plVar1,&local_98);
    local_70 = DAT_03210f8c;
    local_98 = FUN_00aee900;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    plStack_90 = param_1;
    local_78 = uVar6;
    FUN_009693a0(plVar1,&local_98);
    local_98 = FUN_00aee900;
    local_70 = DAT_03210f60;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    plStack_90 = param_1;
    local_78 = uVar6;
    FUN_009693a0(plVar1,&local_98);
    fVar9 = DAT_02be366c;
    uVar6 = FUN_0092ea9c();
    pfVar2 = (float *)((long)param_1 + lVar7 * 0x1000 + 0x474);
    fVar8 = DAT_02be3668;
    if ((uVar6 & 1) == 0) {
      fVar8 = 1.0;
    }
    fVar9 = (fVar9 / fVar8) * 0.5;
    if ((*(float *)(param_1 + lVar7 * 0x200 + 0x8e) != fVar9) || (*pfVar2 != 0.0)) {
      *(float *)(param_1 + lVar7 * 0x200 + 0x8e) = fVar9;
      *pfVar2 = 0.0;
      FUN_0091ada4(param_1 + lVar7 * 0x200 + 0x86);
    }
    uVar4 = *(uint *)((long)param_1 + lVar7 * 0x1000 + 0x4b4);
    *(uint *)((long)param_1 + lVar7 * 0x1000 + 0x4b4) = uVar4 & 0xfffffffb;
    if ((uVar4 & 0x7f80) != 0) {
      *(uint *)((long)param_1 + lVar7 * 0x1000 + 0x4b4) = uVar4 & 0xffff807b;
      FUN_0091ada4(param_1 + lVar7 * 0x200 + 0x86);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aee8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00aee908(param_1,param_4,param_5);
  return;
}




void FUN_00aee900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00aee9c8(param_1,param_2,param_5);
  return;
}




void FUN_00aee908(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    lVar2 = *(long *)(param_1 + 0x8ed0);
    if (lVar2 == 0) {
      *(long *)(param_1 + 0x8ed0) = param_2[4];
    }
    else if (param_2[4] != lVar2) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x8ec0) != param_3) {
    FUN_00aedd80(param_1,param_3);
  }
  FUN_00aec9d8(param_1,1,0);
  return;
}




void FUN_00aee9c8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 4) && (*(int *)(param_1 + 0x8ec0) != param_3)) {
    FUN_00aedd80(param_1,param_3);
  }
  FUN_00ed8868(auStack_68,DAT_03210c64,param_3,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aeea68(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
    lVar2 = *(long *)(param_1 + 0x8ed0);
    if (lVar2 == 0) {
      *(long *)(param_1 + 0x8ed0) = param_2[4];
    }
    else if (param_2[4] != lVar2) {
      return;
    }
  }
  FUN_00aec9d8(param_1,1,1);
  return;
}




void FUN_00aeeb08(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_MENU_BACKGROUND");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aeeb78(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xff9) = param_2 & 1;
  FUN_00aef730();
  return;
}




long FUN_00aeeb84(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x1000 + 0xd0;
}




void FUN_00aeeb94(long param_1,undefined4 param_2)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  char *__s2;
  char *pcVar10;
  char *pcVar11;
  ushort uVar12;
  long lVar13;
  long lVar14;
  void *__s1;
  ushort *puVar15;
  byte local_a8 [16];
  void *local_98;
  undefined4 local_8c;
  ulong local_88 [2];
  void *local_78;
  byte local_70 [8];
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_008fcdb8(local_70,&DAT_0320ffa8);
  local_88[1] = 0;
  local_88[0] = 0;
  local_78 = (void *)0x0;
  local_8c = 0xffffffff;
  switch(param_2) {
  case 0:
    pcVar11 = "play_background";
    break;
  case 1:
    pcVar11 = "herohub_background";
    break;
  case 2:
    pcVar11 = "news_background";
    break;
  case 3:
    pcVar11 = "academy_background";
    break;
  case 4:
    pcVar11 = "allies_guild_background";
    break;
  case 5:
    pcVar11 = "market_background";
    break;
  case 6:
    pcVar11 = "profile_background";
    break;
  default:
    bVar5 = *(byte *)(param_1 + 0x8e98);
    sVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x8ea0);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      __s1 = *(void **)(param_1 + 0x8ea8);
      if ((bVar5 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x8e99);
      }
      pcVar11 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar11 = &DAT_0320ffa9;
      }
      if ((bVar5 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar10 = (char *)(param_1 + 0x8e99);
          lVar13 = -(ulong)(bVar5 >> 1);
          do {
            if (*pcVar10 != *pcVar11) goto LAB_00aeed24;
            pcVar10 = pcVar10 + 1;
            lVar13 = lVar13 + 1;
            pcVar11 = pcVar11 + 1;
          } while (lVar13 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar8 = memcmp(__s1,pcVar11,sVar1), iVar8 != 0)) goto LAB_00aeed24;
LAB_00aeed34:
      FUN_008fa54c(local_a8,"main_background");
      FUN_008fce60(local_70,local_a8);
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      local_8c = 0xffffffff;
    }
    else {
LAB_00aeed24:
      lVar13 = FUN_00969248();
      if (0 < *(int *)(lVar13 + 0x38)) goto LAB_00aeed34;
      FUN_008fce60(local_88,(byte *)(param_1 + 0x8e98));
      FUN_008fa54c(local_a8,"dynamic_background");
      FUN_008fce60(local_70,local_a8);
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      local_8c = *(undefined4 *)(param_1 + 0x8eb0);
    }
    goto LAB_00aeedac;
  }
  FUN_008fa54c(local_a8,pcVar11);
  FUN_008fce60(local_70,local_a8);
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00aeedac:
  cVar6 = *(char *)(param_1 + 0x8eda);
  *(bool *)(param_1 + 0x8eda) = cVar6 == '\0';
  lVar13 = param_1 + 0x8278;
  if (cVar6 == '\0') {
    lVar13 = param_1 + 0x8368;
  }
  sVar1 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    sVar1 = local_68;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pcVar11 = (char *)((ulong)local_70 | 1);
    pcVar10 = pcVar11;
    if ((local_70[0] & 1) != 0) {
      pcVar10 = local_60;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_70[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar14 = -(ulong)(local_70[0] >> 1);
        do {
          if (*pcVar11 != *__s2) goto LAB_00aeee60;
          pcVar11 = pcVar11 + 1;
          lVar14 = lVar14 + 1;
          __s2 = __s2 + 1;
        } while (lVar14 != 0);
      }
      goto LAB_00aeefd8;
    }
    if ((sVar1 == 0) || (iVar8 = memcmp(pcVar10,__s2,sVar1), iVar8 == 0)) goto LAB_00aeefd8;
  }
LAB_00aeee60:
  lVar14 = param_1 + 0x8368;
  if (cVar6 == '\0') {
    lVar14 = param_1 + 0x8278;
  }
  FUN_00f01980(lVar14);
  FUN_00f01980(lVar13);
  FUN_00f0e628(lVar13);
  FUN_00f0e670(lVar13,&local_8c,2);
  uVar3 = *(uint *)(lVar13 + 0x84);
  *(uint *)(lVar13 + 0x84) = uVar3 | 0x14;
  if ((uVar3 & 0x7f80) != 0) {
    *(uint *)(lVar13 + 0x84) = uVar3 & 0xffff807f | 0x14;
    FUN_0091ada4(lVar13);
  }
  uVar9 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(0x3e800000,uVar9);
  FUN_00f022a0(lVar13,uVar9);
  uVar4 = *(uint *)(lVar14 + 0x84);
  uVar3 = uVar4 & 0xffffffef;
  *(uint *)(lVar14 + 0x84) = uVar3;
  if ((~uVar4 & 0x7f80) != 0) {
    *(uint *)(lVar14 + 0x84) = uVar3 | 0x7f80;
    FUN_0091ada4(lVar14);
  }
  uVar9 = FUN_00a250a8();
  FUN_00efddc4(0);
  FUN_00efcac4(0x3e800000,uVar9);
  FUN_00f022a0(lVar14,uVar9);
  lVar13 = DAT_03210d00;
  uVar12 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar12 == 0xffff) {
    puVar15 = (ushort *)0x0;
  }
  else {
    puVar15 = (ushort *)(DAT_03210d00 + (ulong)uVar12 * 0x40 + 0x10);
    if (uVar12 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = *puVar15;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar12;
    *(int *)(lVar13 + 0x20014) = *(int *)(lVar13 + 0x20014) + 1;
    FUN_00efc8e8(puVar15);
    *(undefined ***)puVar15 = &PTR_FUN_02825148;
    *(int *)(lVar13 + 0x20020) = *(int *)(lVar13 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar14,puVar15);
LAB_00aeefd8:
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

