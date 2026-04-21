// functions/00b75 — 16 functions
#include "libGameKindred.h"




void thunk_FUN_00b751f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **appuStack_118 [5];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [64];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  FUN_00963858(uVar2,param_1 + 0x138a0);
  FUN_00e84dac(appuStack_118);
  appuStack_118[0] = &PTR_FUN_027bbb08;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  memset(auStack_f0,0,0x48);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lVar3 = FUN_009580b8();
  FUN_008fce60(auStack_f0,lVar3 + 0x5490);
  lVar3 = FUN_009580b8();
  FUN_008fce60(auStack_d8,lVar3 + 0x5308);
  lVar3 = FUN_009580b8();
  FUN_008fce60(auStack_c0,lVar3 + 0x5320);
  FUN_0094f104(appuStack_118);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b752e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("USERTEAM_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_00e7051c(&uStack_48,uVar2);
  uVar2 = FUN_00e6ce7c("USERTEAM_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&uStack_58,uVar2);
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(&uStack_48,&uStack_58,uVar2,uVar3,param_1,thunk_FUN_00b753cc,0);
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b751b8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b751c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b751c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_009636d8(uVar1,param_1 + 0x138a0);
  return;
}




void FUN_00b751f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **local_118 [5];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [64];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  FUN_00963858(uVar2,param_1 + 0x138a0);
  FUN_00e84dac(local_118);
  local_118[0] = &PTR_FUN_027bbb08;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  memset(auStack_f0,0,0x48);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  lVar3 = FUN_009580b8();
  FUN_008fce60(auStack_f0,lVar3 + 0x5490);
  lVar3 = FUN_009580b8();
  FUN_008fce60(auStack_d8,lVar3 + 0x5308);
  lVar3 = FUN_009580b8();
  FUN_008fce60(auStack_c0,lVar3 + 0x5320);
  FUN_0094f104(local_118);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b752e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("USERTEAM_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_00e7051c(&uStack_48,uVar2);
  uVar2 = FUN_00e6ce7c("USERTEAM_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&uStack_58,uVar2);
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(&uStack_48,&uStack_58,uVar2,uVar3,param_1,thunk_FUN_00b753cc,0);
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b752e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("USERTEAM_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  uVar2 = FUN_00e6ce7c("USERTEAM_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b94c(&local_48,&local_58,uVar2,uVar3,param_1,thunk_FUN_00b753cc,0);
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
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b753cc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009580c4();
  if ((uVar3 & 1) != 0) {
    FUN_009580b8();
    FUN_00963a1c();
    uVar2 = FUN_00f048a4("LeavingUserTeam");
    FUN_00f048e0(auStack_48,uVar2,0);
    FUN_00f04760(param_1,auStack_48,1);
    if (*(float *)(param_1 + 0x334) != 0.0) {
      *(undefined4 *)(param_1 + 0x334) = 0;
      FUN_0091ada4(param_1 + 0x2f0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b75464(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(uint *)(param_1 + 0x54dc) = *(uint *)(param_1 + 0x54dc) & 0xfffffffb;
    *(uint *)(param_1 + 0x6a9c) = *(uint *)(param_1 + 0x6a9c) & 0xfffffffb;
    return;
  }
  FUN_00b754c8(param_1);
  return;
}




void FUN_00b754c8(long param_1)

{
  uint *puVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  void *pvVar13;
  ulong uVar14;
  
  lVar8 = FUN_009580b8();
  uVar12 = *(uint *)(lVar8 + 0x53e8);
  if (uVar12 != 0) {
    bVar5 = *(byte *)(param_1 + 0x138a0);
    lVar8 = *(long *)(lVar8 + 0x53f0);
    uVar14 = 0;
    sVar3 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar3 = *(size_t *)(param_1 + 0x138a8);
    }
    do {
      lVar10 = lVar8 + uVar14 * 0x70;
      bVar4 = *(byte *)(lVar10 + 0x28);
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(lVar10 + 0x30);
      }
      if (sVar2 == sVar3) {
        pvVar13 = *(void **)(lVar8 + uVar14 * 0x70 + 0x38);
        if ((bVar4 & 1) == 0) {
          pvVar13 = (void *)(lVar10 + 0x29);
        }
        pcVar9 = (char *)(param_1 + 0x138a1);
        if ((bVar5 & 1) != 0) {
          pcVar9 = *(char **)(param_1 + 0x138b0);
        }
        if ((bVar4 & 1) == 0) {
          if (sVar3 == 0) {
LAB_00b755d4:
            bVar6 = true;
            goto LAB_00b755d8;
          }
          pcVar11 = (char *)(lVar10 + 0x29);
          lVar10 = -(ulong)(bVar4 >> 1);
          while (*pcVar11 == *pcVar9) {
            pcVar11 = pcVar11 + 1;
            lVar10 = lVar10 + 1;
            pcVar9 = pcVar9 + 1;
            if (lVar10 == 0) goto LAB_00b755d4;
          }
        }
        else if ((sVar3 == 0) || (iVar7 = memcmp(pvVar13,pcVar9,sVar3), iVar7 == 0))
        goto LAB_00b755d4;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar12);
  }
  bVar6 = false;
LAB_00b755d8:
  lVar8 = FUN_009580b8();
  bVar5 = *(byte *)(lVar8 + 0x5490);
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(lVar8 + 0x5498);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar3 == sVar2) {
    pvVar13 = *(void **)(lVar8 + 0x54a0);
    if ((bVar5 & 1) == 0) {
      pvVar13 = (void *)(lVar8 + 0x5491);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar11 = (char *)(lVar8 + 0x5491);
        lVar8 = -(ulong)(bVar5 >> 1);
        do {
          if (*pcVar11 != *pcVar9) goto LAB_00b75674;
          pcVar11 = pcVar11 + 1;
          lVar8 = lVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar13,pcVar9,sVar3), iVar7 != 0)) goto LAB_00b75674;
    puVar1 = (uint *)(param_1 + 0x54dc);
    if (bVar6) {
      *puVar1 = *puVar1 | 4;
      uVar12 = *(uint *)(param_1 + 0x6a9c) | 4;
      goto LAB_00b756c4;
    }
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  else {
LAB_00b75674:
    *(uint *)(param_1 + 0x54dc) = *(uint *)(param_1 + 0x54dc) & 0xfffffffb;
  }
  uVar12 = *(uint *)(param_1 + 0x6a9c) & 0xfffffffb;
LAB_00b756c4:
  *(uint *)(param_1 + 0x6a9c) = uVar12;
  return;
}




void FUN_00b756e4(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(uint *)(param_1 + 0x54dc) = *(uint *)(param_1 + 0x54dc) & 0xfffffffb;
    *(uint *)(param_1 + 0x6a9c) = *(uint *)(param_1 + 0x6a9c) & 0xfffffffb;
    return;
  }
  FUN_00b754c8(param_1);
  return;
}




void FUN_00b75748(long *param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *__s2;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  long lVar13;
  void *pvVar14;
  char *__s2_00;
  ulong uVar15;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  float local_8c;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pbVar12 = (byte *)(param_1 + 0x2714);
  FUN_008fce60(pbVar12,param_2 + 0x28);
  lVar7 = FUN_009580b8();
  bVar2 = *(byte *)(lVar7 + 0x5490);
  bVar3 = *pbVar12;
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(lVar7 + 0x5498);
  }
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = param_1[0x2715];
  }
  bVar5 = false;
  if (sVar1 == __n) {
    pvVar14 = *(void **)(lVar7 + 0x54a0);
    __s2_00 = (char *)param_1[0x2716];
    if ((bVar2 & 1) == 0) {
      pvVar14 = (void *)(lVar7 + 0x5491);
    }
    if ((bVar3 & 1) == 0) {
      __s2_00 = (char *)((long)param_1 + 0x138a1);
    }
    if ((bVar2 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar11 = (char *)(lVar7 + 0x5491);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar11 != *__s2_00) {
            bVar5 = false;
            goto LAB_00b7584c;
          }
          pcVar11 = pcVar11 + 1;
          lVar7 = lVar7 + 1;
          __s2_00 = __s2_00 + 1;
        } while (lVar7 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar10 = memcmp(pvVar14,__s2_00,sVar1);
      bVar5 = iVar10 == 0;
      goto LAB_00b7584c;
    }
    bVar5 = true;
  }
LAB_00b7584c:
  *(bool *)((long)param_1 + 0x138bc) = bVar5;
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar14 = (void *)param_1[0x2716];
    if ((bVar3 & 1) == 0) {
      pvVar14 = (void *)((long)param_1 + 0x138a1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -(ulong)(bVar3 >> 1);
        do {
          pbVar12 = pbVar12 + 1;
          if (*pbVar12 != *__s2) goto LAB_00b758e0;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_00b75afc;
    }
    if ((__n == 0) || (iVar10 = memcmp(pvVar14,__s2,__n), iVar10 == 0)) goto LAB_00b75afc;
  }
LAB_00b758e0:
  if (*(char *)(param_2 + 0xb8) != '\0') {
    FUN_00e70570(&local_78,param_2 + 0x40);
    FUN_00f0d75c(param_1 + 0x285,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00e70570(&local_78,param_2 + 0x58);
    FUN_00b2a900(param_1 + 0x105,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00e6a8a8(&local_78,"%d/%d",*(undefined4 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x74));
    FUN_00e705c8(&local_88,&local_78);
    FUN_00f0d75c(param_1 + 0x133f,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    FUN_00e6a8a8(&local_78,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x78));
    FUN_00e705c8(&local_88,&local_78);
    FUN_00f0d75c(param_1 + 0x139d,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    FUN_00b1e298(param_1 + 0x36a,*(undefined4 *)(param_2 + 0x7c));
    uVar6 = FUN_0092e8e0();
    FUN_00a9bd24(param_1,uVar6 & 1,&local_8c,auStack_90,auStack_94);
    iVar10 = (int)(*(float *)(param_2 + 0x80) * 1000.0);
    FUN_00b1cb48(local_8c * 0.4,0x42580000,param_1 + 0x4d8,0,1000,iVar10,iVar10,0,0);
    FUN_00b1d2b4(*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),
                 *(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c),param_1 + 0x4d8,
                 *(undefined4 *)(param_2 + 0x7c));
    FUN_00b75b2c(param_1);
    *(undefined1 *)((long)param_1 + 0x138bd) = 0;
    FUN_009580b8();
    uVar8 = FUN_0095fdf0();
    thunk_FUN_00e7051c(&local_88,uVar8);
    uVar15 = (ulong)*(uint *)(param_2 + 0x98);
    if (*(uint *)(param_2 + 0x98) != 0) {
      lVar7 = 0;
      do {
        uVar9 = FUN_00e70b34(*(long *)(param_2 + 0xa0) + lVar7 + 0x18,&local_88);
        lVar13 = *(long *)(param_2 + 0xa0);
        if ((uVar9 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x138bd) = *(undefined1 *)(lVar13 + lVar7 + 0x34);
        }
        FUN_00b75be4(param_1,lVar13 + lVar7);
        uVar15 = uVar15 - 1;
        lVar7 = lVar7 + 0x38;
      } while (uVar15 != 0);
    }
    FUN_00b754c8(param_1);
    (**(code **)(*param_1 + 0x150))(param_1);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
LAB_00b75afc:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b75b2c(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  *(uint *)(param_1 + 0x9ea4) = *(uint *)(param_1 + 0x9ea4) & 0xfffffffb;
  puVar1 = (uint *)(param_1 + 0x5228);
  *(uint *)(param_1 + 0x9f94) = *(uint *)(param_1 + 0x9f94) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x138b8) = 0xffffffff;
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x5230) + lVar5);
      if (plVar2 == (long *)0x0) {
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x5230) + uVar6 * 8);
      }
      else {
        (**(code **)(*plVar2 + 8))();
        uVar3 = *puVar1;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x5230) + lVar5);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
      *puVar4 = 0;
    } while (uVar6 < uVar3);
  }
  if (*(long *)(param_1 + 0x5230) != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00b75be4(void *param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  code *local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_2 == 0) || (*(int *)(param_2 + 0x30) != 1)) goto LAB_00b75e44;
  pvVar6 = operator_new(0xbd0);
  FUN_00b77414();
  local_80 = pvVar6;
  FUN_008fce60((long)pvVar6 + 0xbb0,param_2);
  FUN_00f0d75c((long)pvVar6 + 0x178,param_2 + 0x18);
  *(uint *)((long)pvVar6 + 0x10c) =
       *(uint *)((long)pvVar6 + 0x10c) & 0xfffffffb | (uint)*(byte *)(param_2 + 0x35) << 2;
  uVar7 = FUN_00e6ce7c("MENU_USERTEAM_VALUE_STATUS",0);
  thunk_FUN_00e7051c(&local_90,uVar7);
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    if (*(int *)(param_2 + 0x2c) < 1) {
      uVar7 = FUN_00e6ce7c("MENU_GUILD_STATUS_NEVER_PLAYED",0);
      FUN_00f0d75c((long)pvVar6 + 0x2a8,uVar7);
    }
    else {
      FUN_00cb55c0(&local_78,&local_90,(long)*(int *)(param_2 + 0x2c),1);
      FUN_00f0d75c((long)pvVar6 + 0x2a8,&local_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = (code *)0x0;
        local_70 = (void *)0x0;
      }
    }
    goto switchD_00b75c9c_default;
  case 1:
    pcVar8 = "MENU_GUILD_AVAILABILITY_ONLINE";
    break;
  case 2:
    pcVar8 = "MENU_GUILD_AVAILABILITY_BUSY_IN_GAME";
    break;
  case 3:
    pcVar8 = "MENU_GUILD_AVAILABILITY_BUSY_IN_PARTY";
    break;
  case 4:
    pcVar8 = "MENU_GUILD_AVAILABILITY_BUSY_MATCHING";
    break;
  default:
    goto switchD_00b75c9c_default;
  }
  uVar7 = FUN_00e6ce7c(pcVar8,0);
  FUN_00f0d75c((long)pvVar6 + 0x2a8,uVar7);
  if ((~*(uint *)((long)local_80 + 0x32c) & 0x7f80) != 0) {
    *(uint *)((long)local_80 + 0x32c) = *(uint *)((long)local_80 + 0x32c) | 0x7f80;
    FUN_0091ada4((long)local_80 + 0x2a8);
  }
switchD_00b75c9c_default:
  pvVar6 = local_80;
  uVar5 = 0;
  if (*(char *)(param_2 + 0x36) == '\0') {
    FUN_009580b8();
    uVar7 = FUN_0095fdf0();
    uVar5 = FUN_00e70b88(param_2 + 0x18,uVar7);
    uVar5 = (uVar5 & 1) << 2;
  }
  pvVar4 = local_80;
  *(uint *)((long)pvVar6 + 0x63c) = *(uint *)((long)pvVar6 + 0x63c) & 0xfffffffb | uVar5;
  FUN_00f0d7fc((long)local_80 + 0x178,&DAT_01bee7fa);
  puVar2 = (uint *)((long)param_1 + 0x5228);
  local_58 = (ulong)*puVar2;
  local_50 = DAT_03210f60;
  lVar1 = (long)pvVar4 + 0x180;
  local_78 = FUN_00b76d50;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = param_1;
  FUN_009693a0(lVar1,&local_78);
  local_58 = (ulong)*puVar2;
  local_50 = DAT_03210f8c;
  local_78 = FUN_00b76d50;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = param_1;
  FUN_009693a0(lVar1,&local_78);
  FUN_00f023ec((long)param_1 + 0x4640,pvVar4,1);
  FUN_00b76d70(puVar2,&local_80);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
LAB_00b75e44:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b75e90(long param_1)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_cc;
  undefined4 uStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  uVar7 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar7 & 1,&local_bc,&local_c0,&local_c4);
  uVar8 = FUN_0092ea9c();
  fVar19 = local_bc - local_c4;
  fVar20 = fVar19 * 0.5;
  lVar9 = FUN_00965ecc(param_1);
  fVar15 = *(float *)(lVar9 + 0xc);
  FUN_00f00298(&uStack_c8,&local_cc);
  FUN_00f13f08(uStack_c8,local_cc,param_1 + 0x150);
  lVar9 = param_1 + 0x828;
  lVar11 = param_1 + 0x1428;
  fVar13 = (float)FUN_00b2a97c(lVar9);
  FUN_00f0db64(fVar19 - (fVar13 + fVar13 + 80.0),0,0x3f800000,lVar11);
  fVar13 = 310.0;
  if ((uVar8 & 1) == 0) {
    fVar13 = 260.0;
  }
  if ((*(float *)(param_1 + 0x1468) != fVar20) || (*(float *)(param_1 + 0x146c) != fVar13)) {
    *(float *)(param_1 + 0x1468) = fVar20;
    *(float *)(param_1 + 0x146c) = fVar13;
    FUN_0091ada4(lVar11);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1428) + 0x28))(lVar11,&local_b8);
  FUN_00b2a6b8(lVar9,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f07b18(0xc1a00000,lVar9,1,lVar11,3);
  FUN_00f07b18(0,lVar9,5,lVar11,5);
  fVar13 = 0.75;
  if ((uVar8 & 1) == 0) {
    fVar13 = 0.5;
  }
  lVar9 = param_1 + 0x1558;
  if ((*(float *)(param_1 + 0x15a0) != fVar13) || (*(float *)(param_1 + 0x15a4) != fVar13)) {
    *(float *)(param_1 + 0x15a0) = fVar13;
    *(float *)(param_1 + 0x15a4) = fVar13;
    FUN_0091ada4(lVar9);
  }
  fVar16 = *(float *)(param_1 + 0x1468);
  fVar15 = fVar15 + 40.0;
  fVar13 = (float)FUN_00f01c20(lVar11);
  fVar17 = 0.5;
  fVar14 = (float)FUN_00f01c20(lVar9);
  fVar18 = *(float *)(param_1 + 0x146c);
  fVar13 = fVar16 + fVar13 * 0.5 + fVar14 * 0.5 + 20.0;
  FUN_00f13e54(lVar9);
  fVar18 = fVar18 + fVar17 * 0.25;
  if ((*(float *)(param_1 + 0x1598) != fVar13) || (*(float *)(param_1 + 0x159c) != fVar18)) {
    *(float *)(param_1 + 0x1598) = fVar13;
    *(float *)(param_1 + 0x159c) = fVar18;
    FUN_0091ada4(lVar9);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1558) + 0x28))(lVar9,&local_b8);
  fVar18 = fVar19 * 0.25;
  lVar9 = param_1 + 0x1b50;
  fVar14 = (local_c0 * 0.56 + 80.0) - fVar15;
  fVar13 = fVar15;
  if ((*(float *)(param_1 + 0x1b90) != fVar18) ||
     (fVar13 = *(float *)(param_1 + 0x1b94), fVar13 != fVar14)) {
    *(float *)(param_1 + 0x1b90) = fVar18;
    *(float *)(param_1 + 0x1b94) = fVar14;
    FUN_0091ada4(lVar9);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1b50) + 0x28))(lVar9,&local_b8);
  FUN_00f01c54(lVar9,0,0,1,1);
  FUN_00f07b18(fVar13 / -6.0,lVar9,0,lVar11,2);
  lVar11 = param_1 + 0x26c0;
  fVar13 = (float)FUN_00b1d514(lVar11);
  fVar18 = fVar18 + fVar13 * -0.5;
  fVar13 = local_c0 * 0.88 - fVar15;
  if ((*(float *)(param_1 + 0x2700) != fVar18) || (*(float *)(param_1 + 0x2704) != fVar13)) {
    *(float *)(param_1 + 0x2700) = fVar18;
    *(float *)(param_1 + 0x2704) = fVar13;
    FUN_0091ada4(lVar11);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x26c0) + 0x28))(lVar11,&local_b8);
  FUN_00f07b18(0xc2c80000,lVar11,0,lVar9,2);
  pfVar2 = (float *)(param_1 + 0x4998);
  fVar13 = fVar19 * 0.515;
  lVar11 = param_1 + 0x4958;
  if ((*pfVar2 != 0.0) || (*(float *)(param_1 + 0x499c) != 0.0)) {
    pfVar2[0] = 0.0;
    pfVar2[1] = 0.0;
    FUN_0091ada4(lVar11);
  }
  local_b8 = 0;
  fVar14 = (fVar19 - fVar13) + -88.0;
  (**(code **)(*(long *)(param_1 + 0x4958) + 0x28))(lVar11,&local_b8);
  pfVar2 = (float *)(param_1 + 0x4684);
  if ((*(float *)(param_1 + 0x4680) != fVar13) || (*pfVar2 != local_c0 * 0.47)) {
    *(float *)(param_1 + 0x4680) = fVar13;
    *pfVar2 = local_c0 * 0.47;
    FUN_0091ada4(param_1 + 0x4640);
  }
  FUN_00ed0578(0x41f00000,0,lVar11);
  fVar18 = local_c0 - *pfVar2;
  FUN_00f13f08(fVar14,param_1 + 0x47b8);
  lVar11 = param_1 + 0x50f8;
  FUN_00f01c20(lVar11);
  fVar18 = fVar18 + 6.0;
  FUN_00f13f08(fVar14,fVar18,param_1 + 0x5008);
  fVar17 = fVar14 + -10.0 + -120.0;
  if ((*(float *)(param_1 + 0x5138) != fVar17) || (*(float *)(param_1 + 0x513c) != fVar18 * 0.5)) {
    *(float *)(param_1 + 0x5138) = fVar17;
    *(float *)(param_1 + 0x513c) = fVar18 * 0.5;
    FUN_0091ada4(lVar11);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x50f8) + 0x28))(lVar11,&local_b8);
  uVar7 = *(uint *)(param_1 + 0x5228);
  uVar8 = (ulong)uVar7;
  fVar18 = fVar18 + *(float *)(param_1 + 0x4fc4);
  if (uVar7 != 0) {
    uVar12 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_1 + 0x5230) + uVar12 * 8);
      if ((uVar12 != *(uint *)(param_1 + 0x138b8)) &&
         ((*(float *)(lVar11 + 0x40) != 0.0 || (*(float *)(lVar11 + 0x44) != fVar18)))) {
        *(undefined4 *)(lVar11 + 0x40) = 0;
        *(float *)(lVar11 + 0x44) = fVar18;
        FUN_0091ada4(lVar11);
      }
      lVar1 = lVar11 + 0x178;
      FUN_00f0db64(0x43f70000,0,0x3f800000,lVar1);
      if ((*(float *)(lVar11 + 200) != 46.0) || (*(float *)(lVar11 + 0xcc) != 49.0)) {
        *(undefined8 *)(lVar11 + 200) = 0x4244000042380000;
        FUN_0091ada4(lVar11 + 0x88);
      }
      local_b8 = 0x3f0000003f800000;
      (**(code **)(*(long *)(lVar11 + 0x88) + 0x28))(lVar11 + 0x88,&local_b8);
      if ((*(float *)(lVar11 + 0x1b8) != 56.0) || (*(float *)(lVar11 + 0x1bc) != 49.0)) {
        *(undefined8 *)(lVar11 + 0x1b8) = 0x4244000042600000;
        FUN_0091ada4(lVar1);
      }
      local_b8 = 0x3f00000000000000;
      (**(code **)(*(long *)(lVar11 + 0x178) + 0x28))(lVar1,&local_b8);
      if ((*(float *)(lVar11 + 0x2e8) != fVar17) || (*(float *)(lVar11 + 0x2ec) != 49.0)) {
        *(float *)(lVar11 + 0x2e8) = fVar17;
        *(undefined4 *)(lVar11 + 0x2ec) = 0x42440000;
        FUN_0091ada4(lVar11 + 0x2a8);
      }
      local_b8 = 0x3f0000003f000000;
      (**(code **)(*(long *)(lVar11 + 0x2a8) + 0x28))(lVar11 + 0x2a8,&local_b8);
      FUN_00f13f08(fVar14,0x42c40000,lVar11 + 0x3d8);
      FUN_00f13f08(fVar14 + -56.0,0x40000000,lVar11 + 0x4c8);
      if ((*(float *)(lVar11 + 0x508) != 28.0) || (*(float *)(lVar11 + 0x50c) != 0.0)) {
        *(undefined8 *)(lVar11 + 0x508) = 0x41e00000;
        FUN_0091ada4(lVar11 + 0x4c8);
      }
      uVar7 = 0x4c;
      if ((uVar12 & 1) != 0) {
        uVar7 = 0x7f;
      }
      if ((*(uint *)(lVar11 + 0x45c) >> 7 & 0xff) != uVar7) {
        *(uint *)(lVar11 + 0x45c) = *(uint *)(lVar11 + 0x45c) & 0xffff807f | uVar7 << 7;
        FUN_0091ada4(lVar11 + 0x3d8);
      }
      plVar10 = (long *)(lVar11 + 0x5b8);
      fVar16 = (float)FUN_00f01c20(plVar10);
      fVar16 = fVar14 + fVar16 * 0.5 + 5.0;
      if ((*(float *)(lVar11 + 0x5f8) != fVar16) || (*(float *)(lVar11 + 0x5fc) != 49.0)) {
        *(float *)(lVar11 + 0x5f8) = fVar16;
        *(undefined4 *)(lVar11 + 0x5fc) = 0x42440000;
        FUN_0091ada4(plVar10);
      }
      local_b8 = 0x3f0000003f000000;
      (**(code **)(*plVar10 + 0x28))(plVar10,&local_b8);
      if (uVar12 < 2) {
        *(uint *)(lVar11 + 0x54c) = *(uint *)(lVar11 + 0x54c) & 0xfffffffb;
      }
      uVar8 = (ulong)*(uint *)(param_1 + 0x5228);
      uVar12 = uVar12 + 1;
      fVar18 = fVar18 + 98.0;
    } while (uVar12 < uVar8);
  }
  fVar16 = fVar14 * 0.5;
  FUN_00f13f08(fVar14,(float)uVar8 * 98.0 + 49.0,param_1 + 0x46c8);
  lVar11 = param_1 + 0x4e90;
  fVar17 = 240.0;
  FUN_00f13f08(fVar14,lVar11);
  if ((*(float *)(param_1 + 0x4ed0) != 0.0) || (*(float *)(param_1 + 0x4ed4) != fVar18)) {
    *(float *)(param_1 + 0x4ed0) = 0.0;
    *(float *)(param_1 + 0x4ed4) = fVar18;
    FUN_0091ada4(lVar11);
  }
  local_b8 = 0;
  (**(code **)(*(long *)(param_1 + 0x4e90) + 0x28))(lVar11,&local_b8);
  lVar11 = param_1 + 0x5238;
  FUN_00f01c20(lVar11);
  fVar18 = fVar18 + 49.0 + fVar17 * 0.5 + -30.0;
  pfVar2 = (float *)(param_1 + 0x527c);
  if ((*(float *)(param_1 + 0x5278) != fVar16) || (*pfVar2 != fVar18)) {
    *(float *)(param_1 + 0x5278) = fVar16;
    *pfVar2 = fVar18;
    FUN_0091ada4(lVar11);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5238) + 0x28))(lVar11,&local_b8);
  lVar1 = param_1 + 0x5368;
  fVar18 = (float)FUN_00f01c20(lVar11);
  fVar17 = (float)FUN_00f0eac0(lVar1);
  fVar18 = fVar16 + fVar18 * 0.5 + fVar17 * 0.5 + 10.0;
  if ((*(float *)(param_1 + 0x53a8) != fVar18) || (*(float *)(param_1 + 0x53ac) != *pfVar2)) {
    *(float *)(param_1 + 0x53a8) = fVar18;
    *(float *)(param_1 + 0x53ac) = *pfVar2;
    FUN_0091ada4(lVar1);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5368) + 0x28))(lVar1,&local_b8);
  lVar1 = param_1 + 0x5458;
  fVar18 = (float)FUN_00f01c20(lVar1);
  fVar18 = fVar13 + fVar16 + fVar18 * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x5498) != fVar18) || (*(float *)(param_1 + 0x549c) != local_c0 * 0.42))
  {
    *(float *)(param_1 + 0x5498) = fVar18;
    *(float *)(param_1 + 0x549c) = local_c0 * 0.42;
    FUN_0091ada4(lVar1);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5458) + 0x28))(lVar1,&local_b8);
  lVar1 = param_1 + 0x6a18;
  fVar18 = (float)FUN_00f01c20(lVar1);
  fVar13 = fVar13 + fVar16 + fVar18 * -0.5 + -20.0;
  if ((*(float *)(param_1 + 0x6a58) != fVar13) || (*(float *)(param_1 + 0x6a5c) != local_c0 * 0.42))
  {
    *(float *)(param_1 + 0x6a58) = fVar13;
    *(float *)(param_1 + 0x6a5c) = local_c0 * 0.42;
    FUN_0091ada4(lVar1);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x6a18) + 0x28))(lVar1,&local_b8);
  fVar18 = local_c0;
  plVar10 = (long *)(param_1 + 0x96c8);
  FUN_00f0eac0(plVar10);
  pfVar3 = (float *)(param_1 + 0x970c);
  fVar13 = ((fVar18 - fVar13) + 5.0) - fVar15;
  if ((*(float *)(param_1 + 0x9708) != fVar20) || (fVar15 = *pfVar3, fVar15 != fVar13)) {
    *(float *)(param_1 + 0x9708) = fVar20;
    *pfVar3 = fVar13;
    FUN_0091ada4(plVar10);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_b8);
  fVar13 = *pfVar3;
  plVar4 = (long *)(param_1 + 0x9598);
  FUN_00f0eac0(plVar10);
  fVar18 = *(float *)(param_1 + 0x95d8);
  fVar13 = fVar13 + fVar15 * -0.5 + -5.0;
  if ((fVar18 != fVar20) || (fVar18 = *(float *)(param_1 + 0x95dc), fVar18 != fVar13)) {
    *(float *)(param_1 + 0x95d8) = fVar20;
    *(float *)(param_1 + 0x95dc) = fVar13;
    FUN_0091ada4(plVar4);
  }
  local_b8 = 0x3f8000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b8);
  FUN_00f13e54(param_1 + 0x7fd8);
  fVar18 = fVar18 * 0.5;
  FUN_00f07940(0,param_1 + 0x7fd8,0,lVar9,3);
  bVar5 = *(byte *)(param_1 + 0x138bc);
  *(uint *)(param_1 + 0x805c) = *(uint *)(param_1 + 0x805c) & 0xfffffffb | (uint)bVar5 << 2;
  *(uint *)(param_1 + 0x974c) = *(uint *)(param_1 + 0x974c) & 0xfffffffb | (uint)bVar5 << 2;
  *(uint *)(param_1 + 0x961c) = *(uint *)(param_1 + 0x961c) & 0xfffffffb | (uint)bVar5 << 2;
  plVar10 = (long *)(param_1 + 0x9840);
  FUN_00f01c20(param_1 + 0x98c8);
  lVar9 = 0;
  do {
    fVar15 = (float)(int)lVar9;
    fVar13 = (fVar18 + 6.0) * fVar15;
    if ((*(float *)(plVar10 + 8) != 0.0) ||
       (fVar15 = *(float *)((long)plVar10 + 0x44), fVar15 != fVar13)) {
      *(undefined4 *)(plVar10 + 8) = 0;
      *(float *)((long)plVar10 + 0x44) = fVar13;
      FUN_0091ada4(plVar10);
    }
    local_b8 = 0x3f0000003f000000;
    (**(code **)(*plVar10 + 0x28))(plVar10,&local_b8);
    lVar9 = lVar9 + 1;
    plVar10 = plVar10 + 0x5e;
  } while (lVar9 != 2);
  fVar13 = *pfVar2;
  plVar10 = (long *)(param_1 + 0x97b8);
  FUN_00f01c20(lVar11);
  fVar13 = fVar13 + fVar15 * 0.5 + 40.0;
  if ((*(float *)(param_1 + 0x97f8) != fVar16) || (*(float *)(param_1 + 0x97fc) != fVar13)) {
    *(float *)(param_1 + 0x97f8) = fVar16;
    *(float *)(param_1 + 0x97fc) = fVar13;
    FUN_0091ada4(plVar10);
  }
  local_b8 = 0x3f0000003f000000;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_b8);
  FUN_00ed02d8(fVar19,local_c0,param_1 + 0x2f0);
  FUN_00ed04d8(param_1 + 0x2f0,0,*(undefined1 *)(param_1 + 0x138be));
  *(uint *)(param_1 + 0x374) =
       *(uint *)(param_1 + 0x374) & 0xffffffef | (uint)*(byte *)(param_1 + 0x138be) << 4;
  FUN_00f13f08(local_bc,local_c0,param_1 + 0x9e20);
  FUN_00f13f08(fVar14,0x42ec0000,param_1 + 0x9f10);
  fVar15 = (float)FUN_00f13e54(param_1 + 0xa138);
  fVar13 = 56.0;
  fVar15 = fVar15 * 0.5 + 56.0;
  if (*(float *)(param_1 + 0xa178) != fVar15) {
    *(float *)(param_1 + 0xa178) = fVar15;
    fVar13 = 56.0;
    FUN_0091ada4(param_1 + 0xa138);
  }
  FUN_00b315d0(param_1 + 0xb6f8);
  fVar15 = DAT_02be3670;
  FUN_00f01c54(param_1 + 0x13358,0,0,1,1);
  fVar13 = fVar15 + fVar13 * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x13398) != fVar19 + -88.0) || (*(float *)(param_1 + 0x1339c) != fVar13)
     ) {
    *(float *)(param_1 + 0x13398) = fVar19 + -88.0;
    *(float *)(param_1 + 0x1339c) = fVar13;
    FUN_0091ada4(param_1 + 0x13358);
  }
  if (*(long *)(lVar6 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b753cc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009580c4();
  if ((uVar3 & 1) != 0) {
    FUN_009580b8();
    FUN_00963a1c();
    uVar2 = FUN_00f048a4("LeavingUserTeam");
    FUN_00f048e0(auStack_48,uVar2,0);
    FUN_00f04760(param_1,auStack_48,1);
    if (*(float *)(param_1 + 0x334) != 0.0) {
      *(undefined4 *)(param_1 + 0x334) = 0;
      FUN_0091ada4(param_1 + 0x2f0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

