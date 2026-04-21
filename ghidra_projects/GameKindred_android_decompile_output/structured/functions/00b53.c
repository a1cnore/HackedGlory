// functions/00b53 — 24 functions
#include "libGameKindred.h"




void FUN_00b5301c(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_008fa54c(local_50,"VIDEO_ADS_ERROR_2");
  pbVar12 = (byte *)(param_1 + 0x30);
  bVar3 = *pbVar12;
  uVar10 = *(ulong *)(param_1 + 0x38);
  uVar11 = (ulong)(bVar3 >> 1);
  uVar1 = uVar11;
  if ((bVar3 & 1) != 0) {
    uVar1 = uVar10;
  }
  if (uVar1 == 0x10) {
    iVar5 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"no_ads_available",0x10);
    if (iVar5 != 0) {
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar10 = *(ulong *)(param_1 + 0x38);
      uVar11 = (ulong)(bVar3 >> 1);
      goto LAB_00b530a8;
    }
    pcVar9 = "VIDEO_ADS_ERROR_1";
  }
  else {
LAB_00b530a8:
    if ((bVar3 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 != 0xd) ||
       (iVar5 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"video_skipped",0xd), iVar5 != 0))
    goto LAB_00b53110;
    pcVar9 = "VIDEO_ADS_ERROR_3";
  }
  FUN_008fa54c(local_68,pcVar9);
  FUN_008fce60(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
LAB_00b53110:
  uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  pvVar2 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar2 = local_40;
  }
  uVar7 = FUN_00e6ce7c(pvVar2,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b9f8(uVar6,uVar7,uVar8,&DAT_03210450,&DAT_03210450,0,0,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b531bc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) == 0) || (*(int *)(param_2 + 0x28) != 0)) {
    FUN_00b5301c(param_2);
  }
  else {
    FUN_00b52e70(param_2);
    uVar4 = *(uint *)(param_1 + 0x2c38);
    if (uVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x2c40);
      lVar2 = lVar5;
      do {
        plVar3 = *(long **)(lVar2 + 8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 400))(plVar3,1);
          uVar4 = *(uint *)(param_1 + 0x2c38);
          lVar5 = *(long *)(param_1 + 0x2c40);
        }
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != lVar5 + (ulong)uVar4 * 0x10);
    }
  }
  lVar2 = FUN_009580b8();
  FUN_009658c8(lVar2 + 0x18);
  return;
}




void FUN_00b5324c(long param_1)

{
  FUN_00b531bc(param_1 + -0x2c68);
  return;
}




void FUN_00b53258(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x587);
  if (uVar2 != 0) {
    lVar3 = param_1[0x588];
    lVar4 = lVar3;
    do {
      plVar1 = *(long **)(lVar4 + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 400))(plVar1,1);
        uVar2 = *(uint *)(param_1 + 0x587);
        lVar3 = param_1[0x588];
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar3 + (ulong)uVar2 * 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00b532bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))(param_1);
  return;
}




void FUN_00b532c0(long param_1)

{
  FUN_00b53258(param_1 + -0x2c68);
  return;
}




void FUN_00b532cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x9cb8) != '\0') {
    lVar1 = FUN_00969248();
    if (0 < *(int *)(lVar1 + 0x38)) {
      FUN_00b5335c(param_1);
    }
  }
  *(char *)(param_1 + 0x9cb8) = '\0';
  lVar1 = param_1 + 0x4f60;
  lVar2 = FUN_009580b8();
  FUN_00af8228(lVar1,*(undefined4 *)(lVar2 + 0x5454));
  lVar2 = FUN_009580b8();
  FUN_00af82b8(lVar1,*(undefined4 *)(lVar2 + 0x5450));
  lVar2 = FUN_009580b8();
  FUN_00af834c(lVar1,*(undefined4 *)(lVar2 + 0x545c));
  FUN_00b535ac(param_1);
  return;
}




void FUN_00b5335c(undefined8 param_1)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *__s2;
  char *pcVar7;
  undefined **local_1a8 [5];
  undefined4 local_180;
  undefined1 local_17c;
  byte local_178 [16];
  void *local_168;
  byte local_160;
  char local_15f [7];
  size_t local_158;
  char *local_150;
  byte local_148;
  void *local_138;
  byte local_130 [16];
  void *local_120;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00969248();
  if (*(int *)(lVar4 + 0x38) < 1) goto LAB_00b53580;
  FUN_00e84dac(local_1a8);
  local_1a8[0] = &PTR_FUN_027bb6b8;
  memset(local_178,0,0x48);
  local_17c = 1;
  local_180 = 0;
  FUN_00969248();
  lVar4 = FUN_00969248();
  uVar5 = FUN_009687c0(*(undefined4 *)(lVar4 + 0x38));
  FUN_008fa54c(local_130,uVar5);
  FUN_008fce60(&local_160,local_130);
  if ((local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  __n = (ulong)(local_160 >> 1);
  if ((local_160 & 1) != 0) {
    __n = local_158;
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar7 = local_150;
    if ((local_160 & 1) == 0) {
      pcVar7 = local_15f;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_160 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = local_15f;
        lVar4 = -(ulong)(local_160 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00b53498;
          pcVar7 = pcVar7 + 1;
          lVar4 = lVar4 + 1;
          __s2 = __s2 + 1;
        } while (lVar4 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(pcVar7,__s2,__n), iVar3 != 0)) goto LAB_00b53498;
  }
  else {
LAB_00b53498:
    FUN_00976588(local_130);
    uVar6 = FUN_0096bf88(&local_160,local_130);
    if ((uVar6 & 1) == 0) {
      lVar4 = FUN_00cc8184(&local_160);
      if (lVar4 != 0) {
        uVar5 = FUN_009580b8();
        uVar6 = FUN_00961744(uVar5,&local_160);
        if ((uVar6 & 1) != 0) {
          FUN_00b52b80(param_1,local_1a8,lVar4);
        }
      }
    }
    else if (local_50 == 1) {
      FUN_00b5262c(param_1,local_1a8,local_130);
    }
    else if (local_50 == 0) {
      uVar5 = FUN_009580b8();
      pcVar7 = local_150;
      if ((local_160 & 1) == 0) {
        pcVar7 = local_15f;
      }
      uVar6 = FUN_00961804(uVar5,pcVar7,1);
      if ((uVar6 & 1) != 0) {
        FUN_00b52358(param_1,local_1a8,local_130);
      }
    }
    FUN_009767f4(local_130);
  }
  local_1a8[0] = &PTR_FUN_027bb6b8;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  FUN_00e84dd8(local_1a8);
LAB_00b53580:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b535ac(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_80;
  undefined4 uStack_7c;
  float local_74;
  undefined4 local_70;
  float local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar5 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar5 & 1,&local_6c,&local_70,&local_74);
  iVar6 = FUN_0092f2b8();
  fVar14 = 2050.0;
  if (iVar6 < 2) {
    fVar14 = local_6c;
  }
  FUN_00f13f08(local_6c,local_70,param_1 + 0x609);
  *(float *)(param_1 + 0x9ea) = local_6c;
  *(undefined4 *)((long)param_1 + 0x4f54) = local_70;
  plVar8 = param_1 + 0x594;
  FUN_00f13f08(local_6c - local_74,plVar8);
  FUN_00f13f08(local_6c,local_6c,param_1 + 0x5b2);
  FUN_00f07940(0,0,param_1 + 0x5b2,8,plVar8,8);
  FUN_00f13f08(fVar14 + 12.0,local_70,param_1 + 0x5d0);
  FUN_00f07940(0,0,param_1 + 0x5d0,8,plVar8,8);
  plVar8 = param_1 + 0x12c1;
  FUN_00f13f08(local_6c - local_74,local_70,plVar8);
  pfVar1 = (float *)(param_1 + 0x12c9);
  fVar15 = *pfVar1;
  pfVar2 = (float *)((long)param_1 + 0x964c);
  if ((fVar15 != local_74) || (*pfVar2 != 0.0)) {
    *pfVar1 = local_74;
    *pfVar2 = 0.0;
    FUN_0091ada4(plVar8);
    fVar15 = *pfVar1;
  }
  plVar3 = param_1 + 0x12df;
  fVar10 = (float)FUN_00f0e700(plVar8);
  fVar11 = (float)FUN_00f01fcc(plVar3,0,0,1,1);
  uVar13 = (ulong)(uint)local_74;
  fVar16 = *pfVar2;
  fVar10 = ((fVar15 + fVar10 * 0.5) - fVar11 * 0.5) - local_74;
  FUN_00f0e700(plVar8);
  fVar15 = (float)uVar13;
  FUN_00f01fcc(plVar3,0,0,1,1);
  fVar15 = (fVar16 + fVar15 * 0.5) - (float)uVar13 * 0.5;
  if ((*(float *)(param_1 + 0x12e7) != fVar10) ||
     (fVar11 = *(float *)((long)param_1 + 0x973c), uVar13 = (ulong)(uint)fVar11, fVar11 != fVar15))
  {
    *(float *)(param_1 + 0x12e7) = fVar10;
    *(float *)((long)param_1 + 0x973c) = fVar15;
    FUN_0091ada4(plVar3);
  }
  FUN_00b542a0(param_1);
  uVar5 = *(uint *)(param_1 + 0x587);
  if (uVar5 != 0) {
    lVar7 = param_1[0x588];
    lVar9 = lVar7;
    do {
      uVar12 = (undefined4)uVar13;
      plVar8 = *(long **)(lVar9 + 8);
      if (plVar8 != (long *)0x0) {
        local_80 = (float)(**(code **)(*param_1 + 0x48))(param_1);
        if (fVar14 <= local_80) {
          local_80 = fVar14;
        }
        uStack_7c = uVar12;
        FUN_00f13f18(plVar8,&local_80);
        (**(code **)(*plVar8 + 0x150))(plVar8);
        uVar13 = (ulong)(uint)local_80;
        fVar15 = (local_6c - local_80) * 0.5;
        if (*(float *)(plVar8 + 8) != fVar15) {
          *(float *)(plVar8 + 8) = fVar15;
          FUN_0091ada4(plVar8);
        }
        uVar5 = *(uint *)(param_1 + 0x587);
        lVar7 = param_1[0x588];
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar7 + (ulong)uVar5 * 0x10);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5388c(long param_1)

{
  FUN_00b532cc(param_1 + -0x2c68);
  return;
}




void FUN_00b53898(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong local_100;
  ulong local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  byte *local_70;
  byte *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_d8 = (long *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_88 = 0x400;
  local_80 = 0;
  local_78 = 0;
  local_c0 = operator_new(0x28);
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[1] = 0x10000;
  local_c0[2] = 0;
  *local_c0 = 0;
  local_70 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    local_70 = param_4 + 1;
  }
  local_b8 = local_c0;
  local_68 = local_70;
  FUN_008fd344(&local_d8,&local_70);
  plVar4 = local_d8;
  local_e8 = 0;
  uStack_e0 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = (void *)0x0;
  if (((local_80 != 0) || (local_c8 != 4)) || ((int)local_d0 == 0)) goto LAB_00b53aec;
  if ((int)local_d8[2] != 3) goto LAB_00b53aec;
  lVar2 = FUN_008fd190(local_d8,"chestHashedSku");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) goto LAB_00b53aec;
  lVar2 = FUN_008fd190(plVar4,"chestAwards");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) goto LAB_00b53aec;
  lVar2 = FUN_008fd190(plVar4,"chestHashedSku");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar2) {
LAB_00b53a0c:
    puVar5 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = (byte *)0x1bb489b;
    local_60 = 0x100005;
    local_68 = (byte *)0xe;
    lVar2 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00b53a0c;
    local_70 = (byte *)0x1bb489b;
    local_60 = 0x100005;
    local_68 = (byte *)0xe;
    puVar5 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar5 + 0x12) >> 6 & 1) == 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
  }
  FUN_008fa54c(&local_70,puVar5);
  FUN_008fce60(&local_100,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  local_70 = (byte *)0x1bb48aa;
  local_60 = 0x100005;
  local_68 = (byte *)0xb;
  uVar3 = FUN_008feca4(plVar4,&local_70);
  FUN_00cafac0(uVar3,&local_e8);
  uVar6 = local_100 >> 1 & 0x7f;
  if ((local_100 & 1) != 0) {
    uVar6 = local_f8;
  }
  if ((uVar6 != 0) && ((int)local_e8 != 0)) {
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(&local_70,"purchaseBundle");
    FUN_009bb654(uVar3,&local_70,&local_100);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(&local_70,"purchaseBundle");
    FUN_009bb7d4(uVar3,&local_70,&local_e8);
    if (((ulong)local_70 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_5c,local_60));
    }
  }
LAB_00b53aec:
  *(uint *)(param_1 + 0x968c) = *(uint *)(param_1 + 0x968c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x96f8);
  uVar6 = (ulong)*(uint *)(param_1 + 0x2c38);
  if (*(uint *)(param_1 + 0x2c38) != 0) {
    lVar7 = *(long *)(param_1 + 0x2c40);
    lVar2 = lVar7;
    do {
      plVar4 = *(long **)(lVar2 + 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 400))(plVar4,1);
        uVar6 = (ulong)*(uint *)(param_1 + 0x2c38);
        lVar7 = *(long *)(param_1 + 0x2c40);
      }
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar7 + uVar6 * 0x10);
  }
  lVar2 = FUN_009580b8();
  FUN_009658c8(lVar2 + 0x18);
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  FUN_008fefd4(&local_e8,1);
  puVar5 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_b8);
    operator_delete(puVar5);
  }
  free(local_a0);
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b53bf8(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x968c) =
       *(uint *)(param_1 + 0x968c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x968c) & 3 | (param_2 & 1) << 2;
  if ((param_2 & 1) != 0) {
    FUN_00b16058();
    return;
  }
  FUN_00b16600(param_1 + 0x96f8);
  return;
}




void FUN_00b53c20(long param_1)

{
  FUN_00b53898(param_1 + -0x2c80);
  return;
}




void FUN_00b53c2c(long param_1)

{
  *(uint *)(param_1 + 0x968c) = *(uint *)(param_1 + 0x968c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x96f8);
  return;
}




void FUN_00b53c4c(long param_1)

{
  *(uint *)(param_1 + 0x6a0c) = *(uint *)(param_1 + 0x6a0c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x6a78);
  return;
}




void FUN_00b53c6c(long param_1)

{
  *(uint *)(param_1 + 0x968c) = *(uint *)(param_1 + 0x968c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x96f8);
  return;
}




void FUN_00b53c8c(long param_1)

{
  *(uint *)(param_1 + 0x6a0c) = *(uint *)(param_1 + 0x6a0c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x6a78);
  return;
}




void FUN_00b53cac(long param_1)

{
  *(uint *)(param_1 + 0x968c) = *(uint *)(param_1 + 0x968c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x96f8);
  return;
}




void FUN_00b53ccc(long param_1)

{
  *(uint *)(param_1 + 0x6a0c) = *(uint *)(param_1 + 0x6a0c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x6a78);
  return;
}




undefined8 FUN_00b53cec(void)

{
  return 0;
}




void FUN_00b53cf4(void)

{
  FUN_00e6ce7c("MAIN_MENU_MARKET",0);
  return;
}




void FUN_00b53d14(void)

{
  FUN_00e6ce7c("MAIN_MENU_MARKET",0);
  return;
}




void thunk_FUN_00b535ac(long *param_1)

{
  float *pfVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  uVar5 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar5 & 1,&fStack_6c,&uStack_70,&fStack_74);
  iVar6 = FUN_0092f2b8();
  fVar14 = 2050.0;
  if (iVar6 < 2) {
    fVar14 = fStack_6c;
  }
  FUN_00f13f08(fStack_6c,uStack_70,param_1 + 0x609);
  *(float *)(param_1 + 0x9ea) = fStack_6c;
  *(undefined4 *)((long)param_1 + 0x4f54) = uStack_70;
  plVar8 = param_1 + 0x594;
  FUN_00f13f08(fStack_6c - fStack_74,plVar8);
  FUN_00f13f08(fStack_6c,fStack_6c,param_1 + 0x5b2);
  FUN_00f07940(0,0,param_1 + 0x5b2,8,plVar8,8);
  FUN_00f13f08(fVar14 + 12.0,uStack_70,param_1 + 0x5d0);
  FUN_00f07940(0,0,param_1 + 0x5d0,8,plVar8,8);
  plVar8 = param_1 + 0x12c1;
  FUN_00f13f08(fStack_6c - fStack_74,uStack_70,plVar8);
  pfVar1 = (float *)(param_1 + 0x12c9);
  fVar15 = *pfVar1;
  pfVar2 = (float *)((long)param_1 + 0x964c);
  if ((fVar15 != fStack_74) || (*pfVar2 != 0.0)) {
    *pfVar1 = fStack_74;
    *pfVar2 = 0.0;
    FUN_0091ada4(plVar8);
    fVar15 = *pfVar1;
  }
  plVar3 = param_1 + 0x12df;
  fVar10 = (float)FUN_00f0e700(plVar8);
  fVar11 = (float)FUN_00f01fcc(plVar3,0,0,1,1);
  uVar13 = (ulong)(uint)fStack_74;
  fVar16 = *pfVar2;
  fVar10 = ((fVar15 + fVar10 * 0.5) - fVar11 * 0.5) - fStack_74;
  FUN_00f0e700(plVar8);
  fVar15 = (float)uVar13;
  FUN_00f01fcc(plVar3,0,0,1,1);
  fVar15 = (fVar16 + fVar15 * 0.5) - (float)uVar13 * 0.5;
  if ((*(float *)(param_1 + 0x12e7) != fVar10) ||
     (fVar11 = *(float *)((long)param_1 + 0x973c), uVar13 = (ulong)(uint)fVar11, fVar11 != fVar15))
  {
    *(float *)(param_1 + 0x12e7) = fVar10;
    *(float *)((long)param_1 + 0x973c) = fVar15;
    FUN_0091ada4(plVar3);
  }
  FUN_00b542a0(param_1);
  uVar5 = *(uint *)(param_1 + 0x587);
  if (uVar5 != 0) {
    lVar7 = param_1[0x588];
    lVar9 = lVar7;
    do {
      uVar12 = (undefined4)uVar13;
      plVar8 = *(long **)(lVar9 + 8);
      if (plVar8 != (long *)0x0) {
        fStack_80 = (float)(**(code **)(*param_1 + 0x48))(param_1);
        if (fVar14 <= fStack_80) {
          fStack_80 = fVar14;
        }
        uStack_7c = uVar12;
        FUN_00f13f18(plVar8,&fStack_80);
        (**(code **)(*plVar8 + 0x150))(plVar8);
        uVar13 = (ulong)(uint)fStack_80;
        fVar15 = (fStack_6c - fStack_80) * 0.5;
        if (*(float *)(plVar8 + 8) != fVar15) {
          *(float *)(plVar8 + 8) = fVar15;
          FUN_0091ada4(plVar8);
        }
        uVar5 = *(uint *)(param_1 + 0x587);
        lVar7 = param_1[0x588];
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar7 + (ulong)uVar5 * 0x10);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b53d38(undefined8 param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_f8;
  void *local_f0;
  byte local_e8;
  undefined7 uStack_e7;
  void *local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_60;
  uint local_44;
  byte local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp(param_2,"*Ringo*");
  if (iVar2 == 0) {
    FUN_009c7330(auStack_c0);
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00910394(&local_b0,uVar3);
    uVar5 = (ulong)local_44 & 0xffffffff0000ffff | (ulong)local_40 << 0x20 | 0x205780000;
    local_44 = (uint)uVar5;
    local_80 = 3;
    local_40 = (byte)(uVar5 >> 0x20);
    local_78 = FUN_00b552e0;
    local_60 = param_1;
    uVar3 = FUN_00e6ce7c("TUTORIAL_UNLOCK_RINGO_EXPLANATION_DIALOG_MSG",0);
    thunk_FUN_00e7051c(&local_f8,uVar3);
    FUN_008fcdb8(&local_e8,&DAT_0320ffa8);
    local_d0 = 1;
    local_cc = 0x41200000;
    FUN_009c84f0(auStack_c0,&local_f8);
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    uVar3 = FUN_009b8d90();
    pcVar4 = "tutorial_ringo_unlock";
  }
  else {
    iVar2 = strcmp(param_2,"*Hero010*");
    if (iVar2 != 0) goto LAB_00b53fd0;
    FUN_009c7330(auStack_c0);
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00910394(&local_b0,uVar3);
    uVar5 = (ulong)local_44 & 0xffffffff0000ffff | (ulong)local_40 << 0x20 | 0x205780000;
    local_44 = (uint)uVar5;
    local_80 = 3;
    local_40 = (byte)(uVar5 >> 0x20);
    local_78 = FUN_00b552e0;
    local_60 = param_1;
    uVar3 = FUN_00e6ce7c("TUTORIAL_UNLOCK_SKAARF_EXPLANATION_DIALOG_MSG",0);
    thunk_FUN_00e7051c(&local_f8,uVar3);
    FUN_008fcdb8(&local_e8,&DAT_0320ffa8);
    local_d0 = 1;
    local_cc = 0x41200000;
    FUN_009c84f0(auStack_c0,&local_f8);
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    uVar3 = FUN_009b8d90();
    pcVar4 = "tutorial_skaarf_unlock";
  }
  FUN_008fa54c(&local_f8,pcVar4);
  FUN_009ba7a8(uVar3,&local_f8,auStack_c0);
  if ((local_f8 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_e7,local_e8));
  }
  FUN_00969248();
  FUN_00968710();
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  FUN_009c86a0(auStack_c0,1);
LAB_00b53fd0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b53ffc(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar2 & 1,&uStack_2c,&local_30,auStack_34);
  FUN_00a9f7e0(uStack_2c,local_30,param_1);
  FUN_00b535ac(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

