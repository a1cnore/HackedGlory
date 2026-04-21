// functions/00b3b — 8 functions
#include "libGameKindred.h"




void thunk_FUN_00b3bee8(long param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_009580b8();
  if (((int)*(uint *)(lVar3 + 0x5634) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_009580b8();
    if (((int)*(uint *)(lVar3 + 0x5634) < 0) ||
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) != 3))
    goto LAB_00b3c0a8;
  }
  puVar1 = (uint *)(param_1 + 0x105cc);
  if (((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x1fd8))) &&
     (uVar4 = FUN_009580c4(), (uVar4 & 1) != 0)) {
    FUN_009580b8();
    uVar5 = FUN_0095fdf0();
    uVar6 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    uVar4 = FUN_00e70b34(uVar5,uVar6);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_TITLE",0);
      thunk_FUN_00e7051c(&uStack_48,uVar5);
      uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_BODY",0);
      thunk_FUN_00e7051c(&uStack_58,uVar5);
      FUN_00e705c8(&uStack_68,"[MEMBER_NAME]");
      uVar5 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
      FUN_00e71248(&uStack_58,0,&uStack_68,uVar5);
      if (pvStack_60 != (void *)0x0) {
        operator_delete__(pvStack_60);
        uStack_68 = 0;
        pvStack_60 = (void *)0x0;
      }
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      FUN_00a9b94c(&uStack_48,&uStack_58,uVar5,uVar6,param_1,thunk_FUN_00b3c92c,0);
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
    }
    else {
      FUN_00b3c0d0(param_1);
    }
  }
LAB_00b3c0a8:
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b3b2d4(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 *puVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  size_t sVar15;
  byte bVar16;
  size_t sVar17;
  undefined **local_110;
  undefined1 auStack_108 [16];
  byte local_f8;
  void *local_e8;
  undefined1 auStack_e0 [48];
  byte local_b0;
  undefined1 auStack_af [15];
  undefined1 *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar8 = FUN_009580b8();
  sVar15 = DAT_0320ffb0;
  bVar4 = *(byte *)(lVar8 + 0x5478);
  sVar17 = (size_t)(DAT_0320ffa8 >> 1);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(lVar8 + 0x5480);
  }
  sVar1 = sVar17;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar13 = *(void **)(lVar8 + 0x5488);
    bVar16 = DAT_0320ffa8 & 1;
    if ((bVar4 & 1) == 0) {
      pvVar13 = (void *)(lVar8 + 0x5479);
    }
    pbVar11 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar11 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pbVar14 = (byte *)(lVar8 + 0x5479);
        lVar8 = -(ulong)(bVar4 >> 1);
        do {
          if (*pbVar14 != *pbVar11) goto LAB_00b3b3a8;
          pbVar14 = pbVar14 + 1;
          lVar8 = lVar8 + 1;
          pbVar11 = pbVar11 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar13,pbVar11,sVar2), iVar6 != 0)) goto LAB_00b3b3a8;
  }
  else {
LAB_00b3b3a8:
    uVar10 = FUN_009580b8();
    lVar8 = FUN_009580b8();
    FUN_0095e21c(uVar10,lVar8 + 0x5478,0);
    bVar16 = DAT_0320ffa8 & 1;
    sVar17 = (size_t)(DAT_0320ffa8 >> 1);
    sVar15 = DAT_0320ffb0;
  }
  pbVar11 = (byte *)(param_1 + 0x105d0);
  bVar4 = *pbVar11;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x105d8);
  }
  if (bVar16 != 0) {
    sVar17 = sVar15;
  }
  if (sVar2 == sVar17) {
    pvVar13 = *(void **)(param_1 + 0x105e0);
    if ((bVar4 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x105d1);
    }
    pbVar14 = DAT_0320ffb8;
    if (bVar16 == 0) {
      pbVar14 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        lVar8 = -(ulong)(bVar4 >> 1);
        pbVar12 = pbVar11;
        do {
          pbVar12 = pbVar12 + 1;
          if (*pbVar12 != *pbVar14) goto LAB_00b3b474;
          lVar8 = lVar8 + 1;
          pbVar14 = pbVar14 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b3b5d0;
    }
    if ((sVar2 == 0) || (iVar6 = memcmp(pvVar13,pbVar14,sVar2), iVar6 == 0)) goto LAB_00b3b5d0;
  }
LAB_00b3b474:
  lVar8 = FUN_009580b8();
  bVar4 = *pbVar11;
  bVar16 = *(byte *)(lVar8 + 0x5508);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x105d8);
  }
  sVar17 = (ulong)(bVar16 >> 1);
  if ((bVar16 & 1) != 0) {
    sVar17 = *(size_t *)(lVar8 + 0x5510);
  }
  if (sVar2 == sVar17) {
    pvVar13 = *(void **)(param_1 + 0x105e0);
    pbVar14 = *(byte **)(lVar8 + 0x5518);
    if ((bVar4 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x105d1);
    }
    if ((bVar16 & 1) == 0) {
      pbVar14 = (byte *)(lVar8 + 0x5509);
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        lVar8 = -(ulong)(bVar4 >> 1);
        do {
          pbVar11 = pbVar11 + 1;
          if (*pbVar11 != *pbVar14) goto LAB_00b3b510;
          lVar8 = lVar8 + 1;
          pbVar14 = pbVar14 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b3b5d0;
    }
    if ((sVar2 == 0) || (iVar6 = memcmp(pvVar13,pbVar14,sVar2), iVar6 == 0)) goto LAB_00b3b5d0;
  }
LAB_00b3b510:
  FUN_00975578(&local_110);
  uVar9 = FUN_0096bf40(param_2 + 0x48,&local_110);
  if ((uVar9 & 1) != 0) {
    puVar3 = auStack_af;
    if ((local_b0 & 1) != 0) {
      puVar3 = local_a0;
    }
    uVar10 = FUN_00cab978(auStack_e0);
    uVar7 = FUN_00cab944(auStack_e0);
    FUN_00909670(puVar3,uVar10,uVar7,0,1);
  }
  local_110 = &PTR_FUN_027bca90;
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  FUN_00977ea0(auStack_108,1);
LAB_00b3b5d0:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b3b604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b3be28(param_1,param_2,param_5);
  return;
}




void FUN_00b3b60c(uint *param_1,undefined8 *param_2)

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
    FUN_00b3db28(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b3b694(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  ushort uVar17;
  ushort *puVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  code *local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar7 = tpidr_el0;
  local_98 = *(long *)(lVar7 + 0x28);
  puVar1 = (uint *)((long)param_1 + 0x105cc);
  uVar11 = *puVar1;
  *puVar1 = param_3;
  if (((int)param_3 < 0) || (*(uint *)(param_1 + 0x3fb) <= param_3)) goto LAB_00b3bde8;
  iVar6 = *(int *)(*(long *)(param_1[0x3fc] + (ulong)param_3 * 8) + 0x25b0);
  lVar12 = FUN_009580b8();
  if ((int)*(uint *)(lVar12 + 0x5634) < 0) {
    uVar19 = 0;
LAB_00b3b73c:
    if (iVar6 != 4) goto LAB_00b3b74c;
  }
  else {
    bVar10 = *(int *)(*(long *)(lVar12 + 0x5268) + (ulong)*(uint *)(lVar12 + 0x5634) * 0x108 + 0x50)
             == 4;
    uVar19 = (uint)bVar10;
    if (!bVar10) goto LAB_00b3b73c;
LAB_00b3b74c:
    if ((uVar19 != 0) || (*(int *)(*(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8) + 0x25b0) != 3)) {
      plVar2 = param_1 + 0xa1b;
      FUN_00f01980(plVar2);
      puVar3 = (uint *)((long)param_1 + 0x515c);
      fVar23 = 135.0;
      uVar16 = *puVar3;
      uVar11 = 0;
      uVar8 = 0x3eb33333;
      if ((param_2 & 1) == 0) {
        uVar11 = 0xcc;
        fVar23 = 0.0;
        uVar8 = 0x3dcccccd;
      }
      uVar15 = (ulong)uVar8;
      if ((uVar16 >> 7 & 0xff) != uVar11) {
        *puVar3 = uVar16 & 0xffff8000 | uVar16 & 0x7f | uVar11 << 7;
        FUN_0091ada4(plVar2);
        uVar16 = *puVar3;
      }
      uVar9 = 0x3f4ccccd;
      if ((param_2 & 1) == 0) {
        uVar9 = 0;
      }
      *puVar3 = uVar16 | 4;
      uVar22 = uVar15;
      uVar13 = FUN_00efee28(uVar9,FUN_0091aa80);
      FUN_00f022a0(plVar2,uVar13);
      fVar21 = (float)uVar22;
      lVar12 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      uVar11 = *(uint *)(lVar12 + 0x1fc);
      *(uint *)(lVar12 + 0x1fc) = uVar11 & 0xffffffe0 | uVar11 & 0xf | (~param_2 & 1) << 4;
      uVar11 = *puVar1;
      if (uVar11 + 1 < *(uint *)(param_1 + 0x3fb)) {
        uVar20 = (ulong)(uVar11 + 1);
        do {
          fVar21 = (float)uVar22;
          FUN_00f01980(*(undefined8 *)(param_1[0x3fc] + uVar20 * 8));
          fVar24 = *(float *)((long)param_1 + 0x1784);
          FUN_00f0e700(param_1 + 0x2f9);
          uVar22 = (ulong)(uint)(fVar23 + (float)(int)uVar20 * 135.0 + fVar24 + fVar21);
          uVar13 = FUN_00efef08(*(undefined4 *)(*(long *)(param_1[0x3fc] + uVar20 * 8) + 0x40),
                                uVar22,uVar15,FUN_0091aa80);
          FUN_00f022a0(*(undefined8 *)(param_1[0x3fc] + uVar20 * 8),uVar13);
          fVar21 = (float)uVar22;
          uVar20 = uVar20 + 1;
        } while ((uint)uVar20 < *(uint *)(param_1 + 0x3fb));
        uVar11 = *puVar1;
      }
      FUN_00f01a4c(*(undefined8 *)(param_1[0x3fc] + (ulong)uVar11 * 8),1);
      if ((param_2 & 1) == 0) {
        FUN_00ed026c(param_1 + 0x223,*(undefined8 *)(param_1[0x3fc] + (ulong)*puVar1 * 8),1);
        fVar23 = *(float *)((long)param_1 + 0x1784);
        FUN_00f0e700(param_1 + 0x2f9);
        lVar12 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
        fVar23 = fVar23 + fVar21 + (float)(int)*puVar1 * 135.0;
        if ((*(float *)(lVar12 + 0x40) != 0.0) || (*(float *)(lVar12 + 0x44) != fVar23)) {
          *(undefined4 *)(lVar12 + 0x40) = 0;
          *(float *)(lVar12 + 0x44) = fVar23;
          FUN_0091ada4();
        }
        lVar12 = DAT_03210d00;
        uVar17 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar17 == 0xffff) {
          puVar18 = (ushort *)0x0;
        }
        else {
          puVar18 = (ushort *)(DAT_03210d00 + (ulong)uVar17 * 0x40 + 0x10);
          if (uVar17 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar17 = 0xffff;
          }
          else {
            uVar17 = *puVar18;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar17;
          *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
          FUN_00efc8e8(puVar18);
          *(undefined ***)puVar18 = &PTR_FUN_02825148;
          *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
        }
        FUN_00f022a0(plVar2,puVar18);
      }
      else {
        (**(code **)(*param_1 + 0x78))
                  (param_1,*(undefined8 *)(param_1[0x3fc] + (ulong)*puVar1 * 8),1);
        lVar12 = FUN_00965ecc(param_1 + 0x2e8);
        fVar24 = *(float *)(lVar12 + 8);
        fVar25 = *(float *)(lVar12 + 0xc);
        fVar26 = *(float *)(lVar12 + 0x10);
        fVar27 = *(float *)(lVar12 + 0x14);
        lVar12 = FUN_00965ecc(param_1);
        fVar23 = *(float *)(lVar12 + 0xc);
        FUN_00f0e700(param_1 + 0x2f9);
        fVar24 = fVar24 / fVar26;
        lVar12 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
        fVar23 = (fVar25 - fVar23) / fVar27 + fVar21 + (float)(int)*puVar1 * 135.0;
        if ((*(float *)(lVar12 + 0x40) != fVar24) || (*(float *)(lVar12 + 0x44) != fVar23)) {
          *(float *)(lVar12 + 0x40) = fVar24;
          *(float *)(lVar12 + 0x44) = fVar23;
          FUN_0091ada4();
          lVar12 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
        }
        uVar13 = FUN_00f08be8(lVar12 + 0x248);
        FUN_009580b8();
        uVar14 = FUN_0095fdf0();
        uVar11 = FUN_00e70b34(uVar13,uVar14);
        pcVar5 = "MENU_PROFILE_GUILD_LEAVE_GUILD";
        if ((uVar11 & 1) == 0) {
          pcVar5 = "MENU_PROFILE_GUILD_REMOVE_MEMBER";
        }
        uVar13 = FUN_00e6ce7c(pcVar5,0);
        FUN_00ab7498(param_1 + 0xa7e,uVar13);
        local_a0 = DAT_03210c64;
        local_c8 = thunk_FUN_00b3c0d0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_b8 = 0;
        plStack_c0 = param_1;
        FUN_009693a0(param_1 + 0xa7f,&local_c8);
        puVar3 = (uint *)((long)param_1 + 0x5474);
        if (iVar6 == 4) {
          uVar16 = *puVar3 & 0xfffffff8 | *puVar3 & 3 | uVar19 << 2;
        }
        else {
          uVar16 = *puVar3 | 4;
        }
        *puVar3 = uVar16;
        if ((uVar19 & uVar11) == 1) {
          *(uint *)((long)param_1 + 0x6a34) = *(uint *)((long)param_1 + 0x6a34) & 0xfffffffb;
          uVar11 = *(uint *)((long)param_1 + 0x7ff4) & 0xfffffffb;
        }
        else {
          *(uint *)((long)param_1 + 0x6a34) =
               *(uint *)((long)param_1 + 0x6a34) & 0xfffffff8 |
               *(uint *)((long)param_1 + 0x6a34) & 3 | uVar19 << 2;
          pcVar5 = "MENU_GUILD_MEMBERS_DEMOTE_BUTTON_LABEL";
          if (*(int *)(*(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8) + 0x25b0) != 3) {
            pcVar5 = "MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL";
          }
          uVar13 = FUN_00e6ce7c(pcVar5,0);
          FUN_00ab7498(param_1 + 0xd36,uVar13);
          uVar11 = *(uint *)((long)param_1 + 0x7ff4) & 0xfffffff8 |
                   *(uint *)((long)param_1 + 0x7ff4) & 3 | uVar19 << 2;
        }
        *(uint *)((long)param_1 + 0x7ff4) = uVar11;
      }
      plVar2 = param_1 + 0xa6d;
      fVar23 = 1.0;
      fVar21 = 1.0;
      plVar4 = param_1 + 0xa39;
      if ((param_2 & 1) == 0) {
        fVar23 = -1.0;
      }
      *(uint *)((long)param_1 + 0x524c) = *(uint *)((long)param_1 + 0x524c) | 4;
      FUN_00f01980(plVar2);
      FUN_00f01fcc(plVar2,0,0,1,1);
      fVar24 = fVar23 * fVar21 * -0.5;
      if (*(float *)((long)param_1 + 0x53ac) != fVar24) {
        *(float *)((long)param_1 + 0x53ac) = fVar24;
        FUN_0091ada4(plVar2);
      }
      FUN_00f01fcc(plVar2,0,0,1,1);
      uVar13 = FUN_00efef08(0,fVar23 * (fVar21 * 0.5 + 5.0),uVar15,FUN_0091aa80);
      FUN_00f022a0(plVar2,uVar13);
      lVar12 = DAT_03210d00;
      if ((param_2 & 1) == 0) {
        uVar17 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar17 == 0xffff) {
          puVar18 = (ushort *)0x0;
        }
        else {
          puVar18 = (ushort *)(DAT_03210d00 + (ulong)uVar17 * 0x40 + 0x10);
          if (uVar17 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar17 = 0xffff;
          }
          else {
            uVar17 = *puVar18;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar17;
          *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
          FUN_00efc8e8(puVar18);
          *(undefined ***)puVar18 = &PTR_FUN_02825148;
          *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
        }
        FUN_00f022a0(plVar4,puVar18);
        *puVar1 = 0xffffffff;
      }
      else {
        uVar15 = FUN_00f02540(plVar4);
        if ((uVar15 & 1) != 0) {
          FUN_00f01a4c(plVar4,1);
        }
        (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
        uVar13 = *(undefined8 *)(*(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8) + 0x40);
        fVar23 = (float)uVar13 + 0.0;
        fVar21 = (float)((ulong)uVar13 >> 0x20) + 135.0;
        if ((*(float *)(param_1 + 0xa41) != fVar23) ||
           (*(float *)((long)param_1 + 0x520c) != fVar21)) {
          param_1[0xa41] = CONCAT44(fVar21,fVar23);
          FUN_0091ada4(plVar4);
        }
        *(uint *)((long)param_1 + 0x53ec) = *(uint *)((long)param_1 + 0x53ec) | 4;
      }
      (**(code **)(*param_1 + 0x150))(param_1);
      goto LAB_00b3bde8;
    }
  }
  *puVar1 = uVar11;
LAB_00b3bde8:
  if (*(long *)(lVar7 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b3be28(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x10608) == '\0') {
    return;
  }
  lVar1 = FUN_009580b8();
  if (((int)*(uint *)(lVar1 + 0x5634) < 0) ||
     (*(int *)(*(long *)(lVar1 + 0x5268) + (ulong)*(uint *)(lVar1 + 0x5634) * 0x108 + 0x50) != 4)) {
    lVar1 = FUN_009580b8();
    if ((int)*(uint *)(lVar1 + 0x5634) < 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 0x5268) + (ulong)*(uint *)(lVar1 + 0x5634) * 0x108 + 0x50) != 3)
    {
      return;
    }
  }
  FUN_00b3b694(param_1,1,param_3);
  return;
}




void FUN_00b3bec0(long param_1)

{
  if ((-1 < (int)*(uint *)(param_1 + 0x105cc)) &&
     (*(uint *)(param_1 + 0x105cc) < *(uint *)(param_1 + 0x1fd8))) {
    FUN_00b3b694(param_1,0);
    return;
  }
  return;
}




void FUN_00b3bee8(long param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_009580b8();
  if (((int)*(uint *)(lVar3 + 0x5634) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_009580b8();
    if (((int)*(uint *)(lVar3 + 0x5634) < 0) ||
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5634) * 0x108 + 0x50) != 3))
    goto LAB_00b3c0a8;
  }
  puVar1 = (uint *)(param_1 + 0x105cc);
  if (((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x1fd8))) &&
     (uVar4 = FUN_009580c4(), (uVar4 & 1) != 0)) {
    FUN_009580b8();
    uVar5 = FUN_0095fdf0();
    uVar6 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    uVar4 = FUN_00e70b34(uVar5,uVar6);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_TITLE",0);
      thunk_FUN_00e7051c(&local_48,uVar5);
      uVar5 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_BODY",0);
      thunk_FUN_00e7051c(&local_58,uVar5);
      FUN_00e705c8(&local_68,"[MEMBER_NAME]");
      uVar5 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
      FUN_00e71248(&local_58,0,&local_68,uVar5);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
      FUN_00a9b94c(&local_48,&local_58,uVar5,uVar6,param_1,thunk_FUN_00b3c92c,0);
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
    }
    else {
      FUN_00b3c0d0(param_1);
    }
  }
LAB_00b3c0a8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

