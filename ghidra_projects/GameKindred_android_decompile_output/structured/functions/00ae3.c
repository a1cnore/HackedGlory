// functions/00ae3 — 6 functions
#include "libGameKindred.h"




void FUN_00ae37fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00ae6dac(param_1,param_4);
  return;
}




void FUN_00ae3804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8ab0;
  FUN_00f04710(param_1 + 0xb6);
  FUN_00f04710(param_1 + 0x175);
  if ((*(byte *)(param_1 + 0x7b0) & 1) != 0) {
    operator_delete((void *)param_1[0x7b2]);
  }
  if ((*(byte *)(param_1 + 0x7ac) & 1) != 0) {
    operator_delete((void *)param_1[0x7ae]);
  }
  if ((void *)param_1[0x7ab] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7ab]);
    param_1[0x7ab] = 0;
    param_1[0x7aa] = 0;
  }
  if ((void *)param_1[0x7a9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a9]);
    param_1[0x7a9] = 0;
    param_1[0x7a8] = 0;
  }
  if ((*(byte *)(param_1 + 0x7a5) & 1) != 0) {
    operator_delete((void *)param_1[0x7a7]);
  }
  if ((void *)param_1[0x7a4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a4]);
    param_1[0x7a4] = 0;
    param_1[0x7a3] = 0;
  }
  if ((void *)param_1[0x7a2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a2]);
    param_1[0x7a2] = 0;
    param_1[0x7a1] = 0;
  }
  if ((*(byte *)(param_1 + 0x79e) & 1) != 0) {
    operator_delete((void *)param_1[0x7a0]);
  }
  if ((void *)param_1[0x79d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x79d]);
    param_1[0x79d] = 0;
    param_1[0x79c] = 0;
  }
  if ((*(byte *)(param_1 + 0x799) & 1) != 0) {
    operator_delete((void *)param_1[0x79b]);
  }
  FUN_0090eb54(param_1 + 0x796,1);
  param_1[0x777] = &PTR_FUN_028266f0;
  param_1[0x78e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x791);
  FUN_00f13d08(param_1 + 0x777);
  FUN_00f0d3a4(param_1 + 0x751);
  FUN_00ab3254(param_1 + 0x6d7);
  FUN_00f0d3a4(param_1 + 0x6b1);
  FUN_00ab3254(param_1 + 0x637);
  FUN_00f0d3a4(param_1 + 0x611);
  param_1[0x5b5] = &PTR_FUN_027d8bf8;
  FUN_00f0d3a4(param_1 + 0x5ea);
  param_1[0x5cc] = &PTR_FUN_028266f0;
  param_1[0x5e3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e6);
  FUN_00f13d08(param_1 + 0x5cc);
  FUN_00f13d08(param_1 + 0x5b5);
  FUN_00f0d3a4(param_1 + 0x58f);
  param_1[0x56f] = &PTR_FUN_028266f0;
  param_1[0x586] = &PTR_FUN_02826850;
  param_1[0x40f] = &PTR_FUN_027d8d40;
  FUN_00f0a79c(param_1 + 0x589);
  FUN_00f13d08(param_1 + 0x56f);
  param_1[0x551] = &PTR_FUN_028266f0;
  param_1[0x568] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x56b);
  FUN_00f13d08(param_1 + 0x551);
  FUN_00ac6220(param_1 + 0x4e6);
  FUN_00ac6220(param_1 + 0x47b);
  FUN_00f0d3a4(param_1 + 0x455);
  param_1[0x437] = &PTR_FUN_028266f0;
  param_1[0x44e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x451);
  FUN_00f13d08(param_1 + 0x437);
  FUN_00f01868(param_1 + 0x426);
  FUN_00f13d08(param_1 + 0x40f);
  param_1[0x3ee] = &PTR_FUN_028266f0;
  param_1[0x405] = &PTR_FUN_02826850;
  param_1[0x28e] = &PTR_FUN_027d6650;
  FUN_00f0a79c(param_1 + 0x408);
  FUN_00f13d08(param_1 + 0x3ee);
  param_1[0x3d0] = &PTR_FUN_028266f0;
  param_1[999] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3ea);
  FUN_00f13d08(param_1 + 0x3d0);
  FUN_00ac6220(param_1 + 0x365);
  FUN_00ac6220(param_1 + 0x2fa);
  FUN_00f0d3a4(param_1 + 0x2d4);
  param_1[0x2b6] = &PTR_FUN_028266f0;
  param_1[0x2cd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d0);
  FUN_00f13d08(param_1 + 0x2b6);
  FUN_00f01868(param_1 + 0x2a5);
  FUN_00f13d08(param_1 + 0x28e);
  param_1[0x270] = &PTR_FUN_028266f0;
  param_1[0x287] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x28a);
  FUN_00f13d08(param_1 + 0x270);
  param_1[0x252] = &PTR_FUN_028266f0;
  param_1[0x269] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x26c);
  FUN_00f13d08(param_1 + 0x252);
  param_1[0x234] = &PTR_FUN_028266f0;
  param_1[0x24b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x24e);
  FUN_00f13d08(param_1 + 0x234);
  param_1[0x210] = &PTR_FUN_028266f0;
  param_1[0x227] = &PTR_FUN_02826850;
  param_1[0x175] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x22a);
  FUN_00f13d08(param_1 + 0x210);
  param_1[0x1f2] = &PTR_FUN_028266f0;
  param_1[0x209] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20c);
  FUN_00f13d08(param_1 + 0x1f2);
  param_1[0x1d4] = &PTR_FUN_028266f0;
  param_1[0x1eb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ee);
  FUN_00f13d08(param_1 + 0x1d4);
  FUN_00f01868(param_1 + 0x1c3);
  FUN_009c825c(param_1 + 0x175);
  param_1[0xb6] = &PTR_FUN_027d5388;
  param_1[0x151] = &PTR_FUN_028266f0;
  param_1[0x168] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16b);
  FUN_00f13d08(param_1 + 0x151);
  param_1[0x133] = &PTR_FUN_028266f0;
  param_1[0x14a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14d);
  FUN_00f13d08(param_1 + 0x133);
  param_1[0x115] = &PTR_FUN_028266f0;
  param_1[300] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x12f);
  FUN_00f13d08(param_1 + 0x115);
  FUN_00f01868(param_1 + 0x104);
  FUN_009c825c(param_1 + 0xb6);
  FUN_00f0d3a4(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_028266f0;
  param_1[0x89] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x72);
  FUN_00f0d3a4(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ae3d2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8bf8;
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ae3d90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8d40;
  param_1[0x160] = &PTR_FUN_028266f0;
  param_1[0x177] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17a);
  FUN_00f13d08(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_028266f0;
  param_1[0x159] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15c);
  FUN_00f13d08(param_1 + 0x142);
  FUN_00ac6220(param_1 + 0xd7);
  FUN_00ac6220(param_1 + 0x6c);
  FUN_00f0d3a4(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ae3e4c(void *param_1)

{
  FUN_00ae3804();
  operator_delete(param_1);
  return;
}




void FUN_00ae3e70(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 byte param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 byte param_17,byte param_18,byte param_19,byte param_20,undefined4 param_21,
                 byte param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  size_t sVar5;
  size_t sVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte *pbVar14;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  void *pvVar19;
  char *pcVar20;
  byte *pbVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  void *local_88;
  void *local_80;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  FUN_00910394(param_3 + 0x3ce0);
  FUN_00910394(param_3 + 0x3d08,param_11);
  lVar1 = param_3 + 0x3d18;
  FUN_00910394(lVar1,param_12);
  pbVar17 = (byte *)(param_3 + 0x3d28);
  FUN_008fce60(pbVar17,param_13);
  lVar2 = param_3 + 0x3d40;
  FUN_00910394(lVar2,param_14);
  lVar3 = param_3 + 0x3d50;
  FUN_00910394(lVar3,param_15);
  pbVar21 = (byte *)(param_3 + 0x3d60);
  FUN_008fce60(pbVar21,param_16);
  *(byte *)(param_3 + 0x3dc2) = param_22 & 1;
  *(undefined4 *)(param_3 + 0x3da4) = param_23;
  uVar22 = NEON_ucvtf(param_24);
  fVar23 = (float)NEON_fminnm(uVar22,0x45e10000);
  lVar18 = param_3 + 0x260;
  *(undefined4 *)(param_3 + 0x3d78) = param_25;
  *(int *)(param_3 + 0x3dac) = (int)fVar23;
  FUN_00f0d75c(lVar18,param_4);
  uVar10 = *(uint *)(param_3 + 0x2e4);
  if ((uVar10 & 0x7f80) != 0x5900) {
    *(uint *)(param_3 + 0x2e4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x5900;
    FUN_0091ada4(lVar18);
  }
  puVar4 = &DAT_031339e0;
  if ((param_18 & 1) == 0) {
    puVar4 = &DAT_01bee7fa;
  }
  uVar12 = FUN_00f0d7fc(lVar18,puVar4);
  FUN_00ae55c0(&local_90,uVar12,param_3 + 0x3ce0);
  FUN_008fce60(param_3 + 0x3cf0,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00ae56a0(param_3,param_5);
  *(undefined4 *)(param_3 + 0x3da0) = param_2;
  FUN_00e6ce7c("MENU_GENERIC_LABEL_SKILL_TIER",0);
  FUN_00e6ce7c("PROFILE_SKILL_LABEL_UNRANKED",0);
  FUN_00b1d77c(param_3 + 0x31b8,param_7);
  FUN_00b1d77c(param_3 + 0x36b8,param_8);
  FUN_00ac5fdc(param_3 + 0x1470,lVar1);
  uVar10 = FUN_00e70b88(lVar1,&DAT_03210450);
  *(uint *)(param_3 + 0x14f4) =
       *(uint *)(param_3 + 0x14f4) & 0xfffffff8 |
       *(uint *)(param_3 + 0x14f4) & 3 | (uVar10 & 1) << 2;
  FUN_00b2a900(param_3 + 0x2078,lVar3);
  uVar10 = FUN_00e70b88(lVar3,&DAT_03210450);
  *(uint *)(param_3 + 0x20fc) =
       *(uint *)(param_3 + 0x20fc) & 0xfffffff8 |
       *(uint *)(param_3 + 0x20fc) & 3 | (uVar10 & 1) << 2;
  uVar13 = FUN_00e70b04(lVar2);
  lVar18 = param_3 + 0x3d08;
  if ((uVar13 & 1) == 0) {
    lVar18 = lVar2;
  }
  FUN_00f0d75c(param_3 + 0x3a88,lVar18);
  *(undefined4 *)(param_3 + 0x3db4) = param_7;
  *(undefined4 *)(param_3 + 0x3db8) = param_8;
  *(undefined4 *)(param_3 + 0x3db0) = param_6;
  *(uint *)(param_3 + 0x3b0c) =
       *(uint *)(param_3 + 0x3b0c) & 0xfffffffb | (uint)*(byte *)(param_3 + 0x3dc2) << 2;
  *(undefined8 *)(param_3 + 0x3d98) = param_1;
  FUN_00ae5830(param_3,param_17 & 1);
  FUN_008fce60(param_3 + 0x3d80,param_10);
  *(byte *)(param_3 + 0x3dbc) = param_9 & 1;
  bVar7 = *pbVar21;
  sVar5 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar5 = *(size_t *)(param_3 + 0x3d68);
  }
  sVar6 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar6 = DAT_0320ffb0;
  }
  if (sVar5 == sVar6) {
    pvVar19 = *(void **)(param_3 + 0x3d70);
    if ((bVar7 & 1) == 0) {
      pvVar19 = (void *)(param_3 + 0x3d61);
    }
    pbVar16 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar16 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar5 != 0) {
        pbVar14 = (byte *)(param_3 + 0x3d61);
        lVar18 = -(ulong)(bVar7 >> 1);
        do {
          if (*pbVar14 != *pbVar16) goto LAB_00ae4214;
          pbVar14 = pbVar14 + 1;
          lVar18 = lVar18 + 1;
          pbVar16 = pbVar16 + 1;
        } while (lVar18 != 0);
      }
    }
    else if ((sVar5 != 0) && (iVar11 = memcmp(pvVar19,pbVar16,sVar5), iVar11 != 0))
    goto LAB_00ae4214;
LAB_00ae42a8:
    bVar7 = *pbVar17;
    sVar5 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      sVar5 = *(size_t *)(param_3 + 0x3d30);
    }
    sVar6 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar6 = DAT_0320ffb0;
    }
    if (sVar5 == sVar6) {
      pvVar19 = *(void **)(param_3 + 0x3d38);
      if ((bVar7 & 1) == 0) {
        pvVar19 = (void *)(param_3 + 0x3d29);
      }
      pbVar21 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pbVar21 = &DAT_0320ffa9;
      }
      if ((bVar7 & 1) == 0) {
        if (sVar5 != 0) {
          lVar18 = -(ulong)(bVar7 >> 1);
          pbVar16 = pbVar17;
          do {
            pbVar16 = pbVar16 + 1;
            if (*pbVar16 != *pbVar21) goto LAB_00ae435c;
            lVar18 = lVar18 + 1;
            pbVar21 = pbVar21 + 1;
          } while (lVar18 != 0);
        }
      }
      else if ((sVar5 != 0) && (iVar11 = memcmp(pvVar19,pbVar21,sVar5), iVar11 != 0))
      goto LAB_00ae435c;
    }
    else {
LAB_00ae435c:
      lVar18 = FUN_009580b8();
      bVar7 = *pbVar17;
      bVar8 = *(byte *)(lVar18 + 0x5478);
      sVar5 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        sVar5 = *(size_t *)(param_3 + 0x3d30);
      }
      sVar6 = (ulong)(bVar8 >> 1);
      if ((bVar8 & 1) != 0) {
        sVar6 = *(size_t *)(lVar18 + 0x5480);
      }
      if (sVar5 == sVar6) {
        pvVar19 = *(void **)(param_3 + 0x3d38);
        pbVar21 = *(byte **)(lVar18 + 0x5488);
        if ((bVar7 & 1) == 0) {
          pvVar19 = (void *)(param_3 + 0x3d29);
        }
        if ((bVar8 & 1) == 0) {
          pbVar21 = (byte *)(lVar18 + 0x5479);
        }
        if ((bVar7 & 1) == 0) {
          if (sVar5 != 0) {
            lVar18 = -(ulong)(bVar7 >> 1);
            do {
              pbVar17 = pbVar17 + 1;
              if (*pbVar17 != *pbVar21) goto LAB_00ae43f0;
              lVar18 = lVar18 + 1;
              pbVar21 = pbVar21 + 1;
            } while (lVar18 != 0);
          }
        }
        else if ((sVar5 != 0) && (iVar11 = memcmp(pvVar19,pbVar21,sVar5), iVar11 != 0))
        goto LAB_00ae43f0;
        FUN_00f0e578(param_3 + 0x170,"generic_guild");
        fVar23 = *(float *)(param_3 + 0x1b8);
        goto LAB_00ae4430;
      }
    }
LAB_00ae43f0:
    pcVar20 = "capsule_button_star";
    if ((param_9 & 1) == 0) {
      pcVar20 = "friendslist_status_circle";
    }
    FUN_00f0e578(param_3 + 0x170,pcVar20);
  }
  else {
LAB_00ae4214:
    lVar18 = FUN_009580b8();
    bVar7 = *pbVar21;
    bVar8 = *(byte *)(lVar18 + 0x5490);
    sVar5 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      sVar5 = *(size_t *)(param_3 + 0x3d68);
    }
    sVar6 = (ulong)(bVar8 >> 1);
    if ((bVar8 & 1) != 0) {
      sVar6 = *(size_t *)(lVar18 + 0x5498);
    }
    if (sVar5 != sVar6) goto LAB_00ae42a8;
    pvVar19 = *(void **)(param_3 + 0x3d70);
    pcVar20 = *(char **)(lVar18 + 0x54a0);
    if ((bVar7 & 1) == 0) {
      pvVar19 = (void *)(param_3 + 0x3d61);
    }
    if ((bVar8 & 1) == 0) {
      pcVar20 = (char *)(lVar18 + 0x5491);
    }
    if ((bVar7 & 1) == 0) {
      if (sVar5 != 0) {
        pcVar15 = (char *)(param_3 + 0x3d61);
        lVar18 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar15 != *pcVar20) goto LAB_00ae42a8;
          pcVar15 = pcVar15 + 1;
          lVar18 = lVar18 + 1;
          pcVar20 = pcVar20 + 1;
        } while (lVar18 != 0);
      }
    }
    else if ((sVar5 != 0) && (iVar11 = memcmp(pvVar19,pcVar20,sVar5), iVar11 != 0))
    goto LAB_00ae42a8;
    FUN_00f0e578(param_3 + 0x170,"generic_team");
    fVar23 = *(float *)(param_3 + 0x1b8);
LAB_00ae4430:
    if ((fVar23 != 0.5) || (*(float *)(param_3 + 0x1bc) != 0.5)) {
      *(undefined8 *)(param_3 + 0x1b8) = 0x3f0000003f000000;
      FUN_0091ada4(param_3 + 0x170);
    }
  }
  *(uint *)(param_3 + 0x634) = *(uint *)(param_3 + 0x634) & 0xfffffffb;
  *(uint *)(param_3 + 0x323c) = *(uint *)(param_3 + 0x323c) | 4;
  *(uint *)(param_3 + 0xc2c) = *(uint *)(param_3 + 0xc2c) & 0xfffffffb;
  *(uint *)(param_3 + 0x373c) = *(uint *)(param_3 + 0x373c) | 4;
  *(uint *)(param_3 + 0x360c) = *(uint *)(param_3 + 0x360c) | 4;
  *(uint *)(param_3 + 0x310c) = *(uint *)(param_3 + 0x310c) | 4;
  *(uint *)(param_3 + 0x2e2c) = *(uint *)(param_3 + 0x2e2c) | 4;
  if ((*(int *)(param_3 + 0x3da8) == 2) && (*(int *)(param_3 + 0x3dac) != 0)) {
    *(uint *)(param_3 + 0x2cfc) = *(uint *)(param_3 + 0x2cfc) | 4;
    *(uint *)(param_3 + 0x414) = *(uint *)(param_3 + 0x414) & 0xfffffffb;
    *(uint *)(param_3 + 0x504) = *(uint *)(param_3 + 0x504) & 0xfffffffb;
    uVar12 = FUN_00e6ce7c("MENU_FRIENDS_ITEM_TIME_IN_MATCH",0);
    thunk_FUN_00e7051c(&local_90,uVar12);
    FUN_00cb55c0(&local_a0,&local_90,*(undefined4 *)(param_3 + 0x3dac),1);
    FUN_00f0d75c(param_3 + 0x2c78,&local_a0);
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
  }
  else {
    *(uint *)(param_3 + 0x2cfc) = *(uint *)(param_3 + 0x2cfc) & 0xfffffffb;
    FUN_00f0d75c(param_3 + 0x2c78,&DAT_03210450);
  }
  FUN_00ae594c(param_3,param_19 & 1,param_20 & 1,param_21);
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

