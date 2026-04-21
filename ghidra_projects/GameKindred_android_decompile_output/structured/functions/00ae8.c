// functions/00ae8 — 13 functions
#include "libGameKindred.h"




void FUN_00ae8058(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x23c) =
       *(uint *)(param_1 + 0x23c) & 0xfffffff8 | *(uint *)(param_1 + 0x23c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00ae806c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xbcc) =
       *(uint *)(param_1 + 0xbcc) & 0xfffffff8 | *(uint *)(param_1 + 0xbcc) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00ae8080(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_00f0d7fc(param_1 + 0x88,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae80d0(float param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = param_3;
  FUN_00f0e670(param_2 + 0x868,&local_3c,2);
  uVar1 = *(uint *)(param_2 + 0x8ec);
  if ((uVar1 >> 7 & 0xff) != (int)(param_1 * 255.0)) {
    *(uint *)(param_2 + 0x8ec) =
         uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
    FUN_0091ada4(param_2 + 0x868);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae8170(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xf54) =
       *(uint *)(param_1 + 0xf54) & 0xfffffff8 | *(uint *)(param_1 + 0xf54) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00ae8184(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d9088;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6b;
  FUN_00f0e4a8(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7fa,2);
  uVar5 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x10c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7fa,2);
  uVar5 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x1fc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7fa,2);
  uVar5 = *(uint *)((long)param_1 + 0x2ec);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x2ec) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7fa,2);
  uVar5 = *(uint *)((long)param_1 + 0x3dc);
  if ((uVar5 & 0x7f80) == 0x5280) {
    return;
  }
  *(uint *)((long)param_1 + 0x3dc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
  FUN_0091ada4(plVar4);
  return;
}




void FUN_00ae83b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027d8f88;
  FUN_00f0d160(plVar1);
  FUN_00b1e884(param_1 + 0x37);
  FUN_00b1d5d8(param_1 + 0x93);
  FUN_00b1d5d8(param_1 + 0x10d);
  plVar2 = param_1 + 0x187;
  FUN_00abaee8(plVar2,0);
  *(undefined2 *)(param_1 + 0x246) = 0;
  FUN_00f13ca4(param_1 + 0x247);
  plVar3 = param_1 + 0x25e;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x27c;
  FUN_00f0e4a8(plVar4);
  param_1[0x2a0] = 0;
  param_1[0x29f] = 0;
  param_1[0x29e] = 0;
  param_1[0x29d] = 0;
  param_1[0x29c] = 0;
  param_1[0x29b] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x37,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x93,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x10d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  uVar8 = FUN_0092ea9c();
  local_70 = 0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_circle_outline");
  FUN_00f0e670(plVar3,&DAT_031339dc,2);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f00000000000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e578(param_1 + 0x222,"generic_plus");
  *(uint *)((long)param_1 + 0xfb4) = *(uint *)((long)param_1 + 0xfb4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x10a4) = *(uint *)((long)param_1 + 0x10a4) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar2);
  lVar9 = NEON_fmov(0xc1200000,4);
  *(uint *)((long)param_1 + 0xcbc) = *(uint *)((long)param_1 + 0xcbc) & 0xfffffffb;
  param_1[0x192] = lVar9;
  FUN_00b0914c(plVar2,1);
  fVar7 = DAT_02be3668;
  if (((uVar8 & 1) != 0) &&
     ((*(float *)(param_1 + 400) != DAT_02be3668 ||
      (*(float *)((long)param_1 + 0xc84) != DAT_02be3668)))) {
    *(float *)(param_1 + 400) = DAT_02be3668;
    *(float *)((long)param_1 + 0xc84) = fVar7;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_70 = CONCAT44(local_70._4_4_,0xffe0e0e0);
  FUN_00f0e670(plVar4,&local_70,2);
  uVar5 = *(uint *)((long)param_1 + 0x1464);
  if ((uVar5 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x1464) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x1300;
    FUN_0091ada4(plVar4);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae86d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8f88;
  FUN_00f04710(param_1 + 0x187);
  if ((*(byte *)(param_1 + 0x29e) & 1) != 0) {
    operator_delete((void *)param_1[0x2a0]);
  }
  if ((*(byte *)(param_1 + 0x29b) & 1) != 0) {
    operator_delete((void *)param_1[0x29d]);
  }
  param_1[0x27c] = &PTR_FUN_028266f0;
  param_1[0x293] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x296);
  FUN_00f13d08(param_1 + 0x27c);
  param_1[0x25e] = &PTR_FUN_028266f0;
  param_1[0x275] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x278);
  FUN_00f13d08(param_1 + 0x25e);
  FUN_00f13d08(param_1 + 0x247);
  param_1[0x222] = &PTR_FUN_028266f0;
  param_1[0x239] = &PTR_FUN_02826850;
  param_1[0x187] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x23c);
  FUN_00f13d08(param_1 + 0x222);
  param_1[0x204] = &PTR_FUN_028266f0;
  param_1[0x21b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x21e);
  FUN_00f13d08(param_1 + 0x204);
  param_1[0x1e6] = &PTR_FUN_028266f0;
  param_1[0x1fd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x200);
  FUN_00f13d08(param_1 + 0x1e6);
  FUN_00f01868(param_1 + 0x1d5);
  FUN_009c825c(param_1 + 0x187);
  FUN_00ab3254(param_1 + 0x10d);
  FUN_00ab3254(param_1 + 0x93);
  param_1[0x37] = &PTR_FUN_027d8bf8;
  FUN_00f0d3a4(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ae8884(void *param_1)

{
  FUN_00ae86d0();
  operator_delete(param_1);
  return;
}




void FUN_00ae88a8(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,byte param_7,undefined8 param_8,byte param_9,
                 undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  size_t sVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  long lVar11;
  void *pvVar12;
  char *pcVar13;
  float fVar14;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  FUN_00f0d75c(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x14d0) = param_8;
  pbVar1 = (byte *)(param_2 + 0x14d8);
  pbVar2 = (byte *)(param_2 + 0x1514);
  *pbVar2 = param_7 & 1;
  *(byte *)(param_2 + 0x1231) = param_9 & 1;
  *(undefined4 *)(param_2 + 0x1510) = param_10;
  *(undefined8 *)(param_2 + 0x1508) = param_1;
  FUN_008fce60(pbVar1,param_11);
  pbVar3 = (byte *)(param_2 + 0x14f0);
  FUN_008fce60(pbVar3,param_12);
  FUN_00e70510(&local_88);
  FUN_00b1eae8(param_2 + 0x1b8,param_10);
  FUN_00e6ce7c("PROFILE_SKILL_LABEL_UNRANKED",0);
  FUN_00e6ce7c("MENU_GENERIC_LABEL_SKILL_TIER",0);
  FUN_00b1d77c(param_2 + 0x868,param_5);
  FUN_00b1d77c(param_2 + 0x498,param_4);
  bVar6 = *pbVar3;
  sVar4 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar4 = *(size_t *)(param_2 + 0x14f8);
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar12 = *(void **)(param_2 + 0x1500);
    if ((bVar6 & 1) == 0) {
      pvVar12 = (void *)(param_2 + 0x14f1);
    }
    pcVar13 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar13 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar10 = (char *)(param_2 + 0x14f1);
        lVar11 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar10 != *pcVar13) goto LAB_00ae8a34;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          pcVar13 = pcVar13 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar9 = memcmp(pvVar12,pcVar13,sVar4), iVar9 != 0)) goto LAB_00ae8a34;
LAB_00ae8ac8:
    bVar6 = *pbVar1;
    sVar4 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar4 = *(size_t *)(param_2 + 0x14e0);
    }
    sVar5 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar5 = DAT_0320ffb0;
    }
    if (sVar4 == sVar5) {
      pvVar12 = *(void **)(param_2 + 0x14e8);
      if ((bVar6 & 1) == 0) {
        pvVar12 = (void *)(param_2 + 0x14d9);
      }
      pcVar13 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar13 = &DAT_0320ffa9;
      }
      if ((bVar6 & 1) == 0) {
        if (sVar4 != 0) {
          pcVar10 = (char *)(param_2 + 0x14d9);
          lVar11 = -(ulong)(bVar6 >> 1);
          do {
            if (*pcVar10 != *pcVar13) goto LAB_00ae8b88;
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + 1;
            pcVar13 = pcVar13 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((sVar4 != 0) && (iVar9 = memcmp(pvVar12,pcVar13,sVar4), iVar9 != 0))
      goto LAB_00ae8b88;
    }
    else {
LAB_00ae8b88:
      lVar11 = FUN_009580b8();
      bVar6 = *pbVar1;
      bVar7 = *(byte *)(lVar11 + 0x5478);
      sVar4 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar4 = *(size_t *)(param_2 + 0x14e0);
      }
      sVar5 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        sVar5 = *(size_t *)(lVar11 + 0x5480);
      }
      if (sVar4 == sVar5) {
        pvVar12 = *(void **)(param_2 + 0x14e8);
        pcVar13 = *(char **)(lVar11 + 0x5488);
        if ((bVar6 & 1) == 0) {
          pvVar12 = (void *)(param_2 + 0x14d9);
        }
        if ((bVar7 & 1) == 0) {
          pcVar13 = (char *)(lVar11 + 0x5479);
        }
        if ((bVar6 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar10 = (char *)(param_2 + 0x14d9);
            lVar11 = -(ulong)(bVar6 >> 1);
            do {
              if (*pcVar10 != *pcVar13) goto LAB_00ae8c1c;
              pcVar10 = pcVar10 + 1;
              lVar11 = lVar11 + 1;
              pcVar13 = pcVar13 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((sVar4 != 0) && (iVar9 = memcmp(pvVar12,pcVar13,sVar4), iVar9 != 0))
        goto LAB_00ae8c1c;
        FUN_00f0e578(param_2 + 0x12f0,"generic_guild");
        fVar14 = *(float *)(param_2 + 0x1338);
        goto LAB_00ae8ca4;
      }
    }
LAB_00ae8c1c:
    pcVar13 = "generic_circle_filled";
    if (*pbVar2 != 0) {
      pcVar13 = "generic_star";
    }
    FUN_00f0e578(param_2 + 0x12f0,pcVar13);
    fVar14 = 1.0;
    if (*pbVar2 != 0) {
      fVar14 = 0.6;
    }
    if ((*(float *)(param_2 + 0x1338) == fVar14) && (*(float *)(param_2 + 0x133c) == fVar14))
    goto LAB_00ae8ccc;
    *(float *)(param_2 + 0x1338) = fVar14;
    *(float *)(param_2 + 0x133c) = fVar14;
  }
  else {
LAB_00ae8a34:
    lVar11 = FUN_009580b8();
    bVar6 = *pbVar3;
    bVar7 = *(byte *)(lVar11 + 0x5490);
    sVar4 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar4 = *(size_t *)(param_2 + 0x14f8);
    }
    sVar5 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      sVar5 = *(size_t *)(lVar11 + 0x5498);
    }
    if (sVar4 != sVar5) goto LAB_00ae8ac8;
    pvVar12 = *(void **)(param_2 + 0x1500);
    pcVar13 = *(char **)(lVar11 + 0x54a0);
    if ((bVar6 & 1) == 0) {
      pvVar12 = (void *)(param_2 + 0x14f1);
    }
    if ((bVar7 & 1) == 0) {
      pcVar13 = (char *)(lVar11 + 0x5491);
    }
    if ((bVar6 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar10 = (char *)(param_2 + 0x14f1);
        lVar11 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar10 != *pcVar13) goto LAB_00ae8ac8;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          pcVar13 = pcVar13 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar9 = memcmp(pvVar12,pcVar13,sVar4), iVar9 != 0)) goto LAB_00ae8ac8;
    FUN_00f0e578(param_2 + 0x12f0,"generic_team");
    fVar14 = *(float *)(param_2 + 0x1338);
LAB_00ae8ca4:
    if ((fVar14 == 0.5) && (*(float *)(param_2 + 0x133c) == 0.5)) goto LAB_00ae8ccc;
    *(undefined8 *)(param_2 + 0x1338) = 0x3f0000003f000000;
  }
  FUN_0091ada4(param_2 + 0x12f0);
LAB_00ae8ccc:
  *(undefined4 *)(param_2 + 0x1234) = param_6;
  *pbVar2 = param_7 & 1;
  FUN_00ae8fe0(param_2);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae8d24(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x1234) = param_2;
  *(byte *)(param_1 + 0x1514) = param_3 & 1;
  FUN_00ae8fe0();
  return;
}




void FUN_00ae8d38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar1 = param_3 + 0x498;
  FUN_00b1db80(lVar1);
  lVar2 = param_3 + 0x868;
  FUN_00b1db80(lVar2);
  uVar6 = FUN_0092ea9c();
  lVar3 = param_3 + 0x88;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar6 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d378(lVar3,*ppuVar4);
  FUN_00f13f08(param_1,param_2,param_3 + 0x1238);
  fVar7 = 23.0;
  if ((*(float *)(param_3 + 0x1330) != 23.0) || (*(float *)(param_3 + 0x1334) != 0.0)) {
    *(undefined8 *)(param_3 + 0x1330) = 0x41b80000;
    fVar7 = 23.0;
    FUN_0091ada4(param_3 + 0x12f0);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x12f0) + 0x28))(param_3 + 0x12f0,&local_70);
  FUN_00f13e54(param_3 + 0x1b8);
  if ((*(float *)(param_3 + 0x1f8) != 65.0) || (*(float *)(param_3 + 0x1fc) != fVar7 * -0.5)) {
    *(undefined4 *)(param_3 + 0x1f8) = 0x42820000;
    *(float *)(param_3 + 0x1fc) = fVar7 * -0.5;
    FUN_0091ada4(param_3 + 0x1b8);
  }
  if ((*(float *)(param_3 + 200) != 125.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
    *(undefined8 *)(param_3 + 200) = 0x42fa0000;
    FUN_0091ada4(lVar3);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar3,&local_70);
  if ((*(float *)(param_3 + 0xc78) != (float)param_1) || (*(float *)(param_3 + 0xc7c) != 0.0)) {
    *(float *)(param_3 + 0xc78) = (float)param_1;
    *(undefined4 *)(param_3 + 0xc7c) = 0;
    FUN_0091ada4(param_3 + 0xc38);
  }
  FUN_00f07940(0xc1f00000,0,lVar2,5,param_3 + 0xc38,7);
  FUN_00f07b18(0xc1800000,lVar1,1,lVar2,3);
  FUN_00f07b18(0,lVar1,5,lVar2,5);
  fVar7 = (float)FUN_00f080a0(lVar3,7,lVar1,7);
  FUN_00f0db64(fVar7 + -16.0,0,0x3f800000,lVar3);
  fVar7 = (float)param_2 * 0.5 + -2.0;
  if ((*(float *)(param_3 + 0x1420) != 0.0) || (*(float *)(param_3 + 0x1424) != fVar7)) {
    *(undefined4 *)(param_3 + 0x1420) = 0;
    *(float *)(param_3 + 0x1424) = fVar7;
    FUN_0091ada4(param_3 + 0x13e0);
  }
  FUN_00f13f08(param_1,0x40000000,param_3 + 0x13e0);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae8fe0(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x88;
  puVar2 = &DAT_01bee7fa;
  if (*(char *)(param_1 + 0x1231) != '\0') {
    puVar2 = &DAT_031339e0;
  }
  FUN_00f0d7fc(lVar1,puVar2);
  *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 4;
  *(uint *)(param_1 + 0x8ec) = *(uint *)(param_1 + 0x8ec) | 4;
  if (*(double *)(param_1 + 0x1508) <= 0.0) {
    if (*(char *)(param_1 + 0x1230) != '\0') {
      uVar3 = *(uint *)(param_1 + 0x10c);
      if ((uVar3 & 0x7f80) != 0x5900) {
        *(uint *)(param_1 + 0x10c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
        FUN_0091ada4(lVar1);
      }
      *(uint *)(param_1 + 0xcbc) = *(uint *)(param_1 + 0xcbc) & 0xfffffffb;
      FUN_00f0e670(param_1 + 0x12f0,&DAT_031339ec,2);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x1234);
    *(uint *)(param_1 + 0xcbc) = *(uint *)(param_1 + 0xcbc) & 0xfffffffb;
    if ((iVar4 - 2U < 3) || (iVar4 == 0)) {
      FUN_00f0e670(param_1 + 0x12f0,&DAT_031339ec,2);
      uVar3 = *(uint *)(param_1 + 0x10c);
      if ((uVar3 & 0x7f80) != 0x5900) {
        *(uint *)(param_1 + 0x10c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
        FUN_0091ada4(lVar1);
        return;
      }
    }
    else if (iVar4 == 1) {
      FUN_00f0e670(param_1 + 0x12f0,&DAT_01bee7fa,2);
      if ((~*(uint *)(param_1 + 0x10c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 0x7f80;
        FUN_0091ada4(lVar1);
      }
      *(uint *)(param_1 + 0xcbc) = *(uint *)(param_1 + 0xcbc) | 4;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x10c);
    if ((uVar3 & 0x7f80) != 0x5900) {
      *(uint *)(param_1 + 0x10c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
      FUN_0091ada4(lVar1);
    }
    *(uint *)(param_1 + 0xcbc) = *(uint *)(param_1 + 0xcbc) & 0xfffffffb;
    FUN_00f0e670(param_1 + 0x12f0,&DAT_031339ec,2);
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xfffffffb;
    *(uint *)(param_1 + 0x8ec) = *(uint *)(param_1 + 0x8ec) & 0xfffffffb;
  }
  return;
}

