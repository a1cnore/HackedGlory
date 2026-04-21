// functions/00b78 — 16 functions
#include "libGameKindred.h"




void FUN_00b7822c(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_1 + 0x2df8;
  if (*(float *)(param_1 + 0x2e3c) != 0.0) {
    *(undefined4 *)(param_1 + 0x2e3c) = 0;
    FUN_0091ada4(lVar1);
  }
  if (*(long **)(param_1 + 0x3340) == (long *)0x0) {
    bVar2 = false;
    *(uint *)(param_1 + 0x2e7c) = *(uint *)(param_1 + 0x2e7c) & 0xffffffef;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x3340) + 0x150))();
    (**(code **)(**(long **)(param_1 + 0x3340) + 0x60))(*(long **)(param_1 + 0x3340),1,0,1,1);
    FUN_00ed02d8(lVar1);
    bVar2 = *(long *)(param_1 + 0x3340) == param_1 + 0x3e18;
    *(uint *)(param_1 + 0x2e7c) =
         *(uint *)(param_1 + 0x2e7c) & 0xffffffe0 |
         *(uint *)(param_1 + 0x2e7c) & 0xf | (uint)bVar2 << 4;
  }
  FUN_00ed04d8(lVar1,0,bVar2);
  return;
}




void thunk_FUN_00b782ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  FUN_00a9f644();
  uVar6 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar6 & 1,&fStack_64,&fStack_68,&fStack_6c);
  fVar5 = fStack_68;
  fVar4 = DAT_02be3670;
  fVar9 = fStack_64 - fStack_6c;
  FUN_00f13f08(fVar9,fVar9 * 0.75,param_1 + 0x2c50);
  if ((*(float *)(param_1 + 0x2c98) != 1.3) || (*(float *)(param_1 + 0x2c9c) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2c98) = 0x3fa666663fa66666;
    FUN_0091ada4(param_1 + 0x2c50);
  }
  lVar1 = param_1 + 0x3348;
  fVar7 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fVar8 = fVar9 * 0.5 - fVar7 * 0.5;
  if ((*(float *)(param_1 + 0x3388) != fVar8) || (*(float *)(param_1 + 0x338c) != 30.0)) {
    *(float *)(param_1 + 0x3388) = fVar8;
    *(undefined4 *)(param_1 + 0x338c) = 0x41f00000;
    FUN_0091ada4(lVar1);
  }
  uStack_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x3348) + 0x28))(lVar1,&uStack_60);
  FUN_00f13f08(fVar9,fVar5 - fVar4,param_1 + 0x3e18);
  FUN_00b75e90(param_1 + 0x3e18);
  fVar8 = *(float *)(param_1 + 0x338c);
  lVar2 = param_1 + 0x176d8;
  fVar10 = fStack_68 - fVar8;
  FUN_00b20aa0(fStack_68,fVar8,lVar1);
  FUN_00f13f08(fVar9,(fVar10 - fVar8) + -160.0,lVar2);
  FUN_00b71d70(lVar2);
  FUN_00f07940(fVar7 * 0.5,0,lVar2,4,lVar1,6);
  FUN_00f13f08(fVar9,fVar5 - fVar4,param_1 + 0x2d40);
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b782ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00a9f644();
  uVar6 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar6 & 1,&fStack_64,&local_68,&local_6c);
  fVar5 = local_68;
  fVar4 = DAT_02be3670;
  fVar9 = fStack_64 - local_6c;
  FUN_00f13f08(fVar9,fVar9 * 0.75,param_1 + 0x2c50);
  if ((*(float *)(param_1 + 0x2c98) != 1.3) || (*(float *)(param_1 + 0x2c9c) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2c98) = 0x3fa666663fa66666;
    FUN_0091ada4(param_1 + 0x2c50);
  }
  lVar1 = param_1 + 0x3348;
  fVar7 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fVar8 = fVar9 * 0.5 - fVar7 * 0.5;
  if ((*(float *)(param_1 + 0x3388) != fVar8) || (*(float *)(param_1 + 0x338c) != 30.0)) {
    *(float *)(param_1 + 0x3388) = fVar8;
    *(undefined4 *)(param_1 + 0x338c) = 0x41f00000;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x3348) + 0x28))(lVar1,&local_60);
  FUN_00f13f08(fVar9,fVar5 - fVar4,param_1 + 0x3e18);
  FUN_00b75e90(param_1 + 0x3e18);
  fVar8 = *(float *)(param_1 + 0x338c);
  lVar2 = param_1 + 0x176d8;
  fVar10 = local_68 - fVar8;
  FUN_00b20aa0(local_68,fVar8,lVar1);
  FUN_00f13f08(fVar9,(fVar10 - fVar8) + -160.0,lVar2);
  FUN_00b71d70(lVar2);
  FUN_00f07940(fVar7 * 0.5,0,lVar2,4,lVar1,6);
  FUN_00f13f08(fVar9,fVar5 - fVar4,param_1 + 0x2d40);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b784ec(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  void *pvVar12;
  char *__s2;
  byte *pbVar13;
  ulong uVar14;
  size_t sVar15;
  size_t sVar16;
  byte bVar17;
  undefined4 local_6c;
  long local_68;
  
  sVar16 = DAT_0320ffb0;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_2 + 0x28);
  sVar15 = (size_t)(DAT_0320ffa8 >> 1);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x30);
  }
  sVar1 = sVar15;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar12 = *(void **)(param_2 + 0x38);
    bVar17 = DAT_0320ffa8 & 1;
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_2 + 0x29);
    }
    pbVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pbVar13 = (byte *)(param_2 + 0x29);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pbVar13 != *pbVar9) goto LAB_00b785bc;
          pbVar13 = pbVar13 + 1;
          lVar10 = lVar10 + 1;
          pbVar9 = pbVar9 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar12,pbVar9,sVar2), iVar6 != 0)) goto LAB_00b785bc;
  }
  else {
LAB_00b785bc:
    FUN_00b75748(param_1 + 0x3e18,param_2);
    bVar17 = DAT_0320ffa8 & 1;
    sVar15 = (size_t)(DAT_0320ffa8 >> 1);
    sVar16 = DAT_0320ffb0;
  }
  pbVar9 = (byte *)(param_1 + 0x19728);
  bVar3 = *pbVar9;
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x19730);
  }
  if (bVar17 != 0) {
    sVar15 = sVar16;
  }
  if (sVar2 == sVar15) {
    pvVar12 = *(void **)(param_1 + 0x19738);
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x19729);
    }
    pbVar13 = DAT_0320ffb8;
    if (bVar17 == 0) {
      pbVar13 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        lVar10 = -(ulong)(bVar3 >> 1);
        pbVar11 = pbVar13;
        pbVar7 = pbVar9;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar11) goto LAB_00b78794;
          lVar10 = lVar10 + 1;
          pbVar11 = pbVar11 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar12,pbVar13,sVar2), iVar6 != 0)) goto LAB_00b78794;
    bVar3 = *(byte *)(param_2 + 0x28);
    sVar15 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar15 = *(size_t *)(param_2 + 0x30);
    }
    if (sVar15 == sVar2) {
      pvVar12 = *(void **)(param_2 + 0x38);
      if ((bVar3 & 1) == 0) {
        pvVar12 = (void *)(param_2 + 0x29);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar2 != 0) {
          pbVar11 = (byte *)(param_2 + 0x29);
          lVar10 = -(ulong)(bVar3 >> 1);
          do {
            if (*pbVar11 != *pbVar13) goto LAB_00b78700;
            pbVar11 = pbVar11 + 1;
            lVar10 = lVar10 + 1;
            pbVar13 = pbVar13 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar12,pbVar13,sVar2), iVar6 != 0))
      goto LAB_00b78700;
      goto LAB_00b78794;
    }
LAB_00b78700:
    lVar10 = FUN_009580b8();
    bVar3 = *(byte *)(param_2 + 0x28);
    bVar17 = *(byte *)(lVar10 + 0x5490);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 0x30);
    }
    sVar15 = (ulong)(bVar17 >> 1);
    if ((bVar17 & 1) != 0) {
      sVar15 = *(size_t *)(lVar10 + 0x5498);
    }
    if (sVar2 != sVar15) goto LAB_00b78794;
    pvVar12 = *(void **)(param_2 + 0x38);
    __s2 = *(char **)(lVar10 + 0x54a0);
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_2 + 0x29);
    }
    if ((bVar17 & 1) == 0) {
      __s2 = (char *)(lVar10 + 0x5491);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar8 = (char *)(param_2 + 0x29);
        lVar10 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00b78794;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar6 = memcmp(pvVar12,__s2,sVar2), iVar6 != 0)) goto LAB_00b78794;
LAB_00b7879c:
    FUN_008fce60(pbVar9,(byte *)(param_2 + 0x28));
    FUN_009557a8(param_1 + 0x19718,0);
    if (*(int *)(param_2 + 0xa8) != 0) {
      lVar10 = 0;
      uVar14 = 0;
      do {
        FUN_00b78964(param_1 + 0x19718,*(long *)(param_2 + 0xb0) + lVar10);
        uVar14 = uVar14 + 1;
        lVar10 = lVar10 + 0x50;
      } while (uVar14 < *(uint *)(param_2 + 0xa8));
    }
    *(undefined1 *)(param_1 + 0x19741) = 1;
  }
  else {
LAB_00b78794:
    if (*(char *)(param_2 + 0x90) != '\0') goto LAB_00b7879c;
  }
  uVar14 = FUN_009580c4();
  bVar5 = false;
  if ((uVar14 & 1) != 0) {
    lVar10 = FUN_009580b8();
    bVar3 = *pbVar9;
    bVar17 = *(byte *)(lVar10 + 0x5490);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x19730);
    }
    sVar15 = (ulong)(bVar17 >> 1);
    if ((bVar17 & 1) != 0) {
      sVar15 = *(size_t *)(lVar10 + 0x5498);
    }
    bVar5 = false;
    if (sVar2 == sVar15) {
      pvVar12 = *(void **)(param_1 + 0x19738);
      pbVar13 = *(byte **)(lVar10 + 0x54a0);
      if ((bVar3 & 1) == 0) {
        pvVar12 = (void *)(param_1 + 0x19729);
      }
      if ((bVar17 & 1) == 0) {
        pbVar13 = (byte *)(lVar10 + 0x5491);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar2 != 0) {
          lVar10 = -(ulong)(bVar3 >> 1);
          do {
            pbVar9 = pbVar9 + 1;
            if (*pbVar9 != *pbVar13) {
              bVar5 = false;
              goto LAB_00b788dc;
            }
            lVar10 = lVar10 + 1;
            pbVar13 = pbVar13 + 1;
          } while (lVar10 != 0);
        }
      }
      else if (sVar2 != 0) {
        iVar6 = memcmp(pvVar12,pbVar13,sVar2);
        bVar5 = iVar6 == 0;
        goto LAB_00b788dc;
      }
      bVar5 = true;
    }
  }
LAB_00b788dc:
  if (bVar5 != (bool)*(char *)(param_1 + 0x19740)) {
    *(char *)(param_1 + 0x19740) = bVar5;
    if (bVar5 == false) {
      local_6c = 0xff5262cc;
    }
    else {
      local_6c = 0xffffba8c;
    }
    FUN_00f0e670(param_1 + 0x2c50,&local_6c,2);
    FUN_00b782ec(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b78964(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00955608(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x50;
  FUN_008fcdb8(lVar4 + -0x50,param_2);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x30);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x48);
  return;
}




void FUN_00b78a18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x19741) != '\0') {
    lVar1 = param_1 + 0x176d8;
    FUN_00b71c88(lVar1);
    if (*(uint *)(param_1 + 0x19718) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x19720);
        uVar4 = FUN_00e6ce7c("MENU_TROPHY_SKILL_TIER_SUBTITLE",0);
        thunk_FUN_00e7051c(&local_88,uVar4);
        FUN_00e705c8(&local_98,"[SEASON_NAME]");
        lVar2 = lVar7 + lVar5;
        FUN_00cb47e8(&local_a8,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        FUN_00e71248(&local_88,0,&local_98,&local_a8);
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
        FUN_00cb47e8(&local_98,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        lVar7 = lVar7 + lVar5;
        FUN_00e70570(&local_a8,lVar7 + 0x18);
        FUN_00b72754(lVar1,&local_98,&local_88,&local_a8,*(undefined4 *)(lVar7 + 0x4c));
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
          local_88 = 0;
          local_80 = (void *)0x0;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x50;
      } while (uVar6 < *(uint *)(param_1 + 0x19718));
    }
    FUN_00b72854(lVar1,1);
    fVar8 = 0.0;
    if (*(char *)(param_1 + 0x19742) == '\0') {
      lVar5 = FUN_00965ecc(0,param_1);
      fVar8 = *(float *)(lVar5 + 0xc);
      lVar5 = FUN_00965ecc(param_1);
      fVar8 = fVar8 / *(float *)(lVar5 + 0x14) + 40.0;
    }
    FUN_00b728d4(fVar8,lVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b78c34(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x19742) = param_2 & 1;
  *(byte *)(param_1 + 0x176d6) = param_2 & 1;
  return;
}




void FUN_00b78c54(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  byte *__s2;
  
  FUN_00b75464(param_1 + 0x3e18);
  uVar5 = FUN_00e84e5c(param_2);
  if (((uVar5 & 1) == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_00b78d54;
  pbVar7 = (byte *)(param_1 + 0x19728);
  lVar6 = FUN_009580b8();
  bVar2 = *pbVar7;
  bVar3 = *(byte *)(lVar6 + 0x5490);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x19730);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar6 + 0x5498);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x19738);
    __s2 = *(byte **)(lVar6 + 0x54a0);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x19729);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (byte *)(lVar6 + 0x5491);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *__s2) goto LAB_00b78d48;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00b78d48;
    *(undefined1 *)(param_1 + 0x19740) = 1;
  }
LAB_00b78d48:
  lVar6 = FUN_009580b8();
  FUN_009658c8(lVar6 + 0x18);
LAB_00b78d54:
  FUN_00b782ec(param_1);
  return;
}




void FUN_00b78d64(long param_1)

{
  FUN_00b78c54(param_1 + -0x2c38);
  return;
}




void FUN_00b78d70(long param_1)

{
  FUN_00b756e4(param_1 + 0x3e18);
  return;
}




void FUN_00b78d7c(long param_1)

{
  FUN_00b756e4(param_1 + 0x11e0);
  return;
}




void FUN_00b78d88(undefined8 param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      bVar2 = *(byte *)(param_2 + 0x48);
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(param_2 + 0x50);
      }
      if ((uVar4 == 0x11) &&
         (iVar3 = FUN_0090d610((byte *)(param_2 + 0x48),0,0xffffffffffffffff,"membership_locked",
                               0x11), iVar3 == 0)) {
        uVar8 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar8,uVar6,uVar7,0,0);
        return;
      }
    }
    else {
      lVar5 = FUN_009580b8();
      bVar2 = *(byte *)(lVar5 + 0x5490);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar5 + 0x5498);
      }
      sVar1 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar1 = DAT_0320ffb0;
      }
      if (__n != sVar1) {
LAB_00b78edc:
        uVar8 = FUN_009580b8();
        lVar5 = FUN_009580b8();
        FUN_0095e34c(uVar8,lVar5 + 0x5490,1);
        return;
      }
      __s1 = *(void **)(lVar5 + 0x54a0);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x5491);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(lVar5 + 0x5491);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00b78edc;
            pcVar9 = pcVar9 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b78edc;
    }
  }
  return;
}




void thunk_FUN_00b78d88(undefined8 param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      bVar2 = *(byte *)(param_2 + 0x48);
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(param_2 + 0x50);
      }
      if ((uVar4 == 0x11) &&
         (iVar3 = FUN_0090d610((byte *)(param_2 + 0x48),0,0xffffffffffffffff,"membership_locked",
                               0x11), iVar3 == 0)) {
        uVar8 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar8,uVar6,uVar7,0,0);
        return;
      }
    }
    else {
      lVar5 = FUN_009580b8();
      bVar2 = *(byte *)(lVar5 + 0x5490);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar5 + 0x5498);
      }
      sVar1 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar1 = DAT_0320ffb0;
      }
      if (__n != sVar1) {
LAB_00b78edc:
        uVar8 = FUN_009580b8();
        lVar5 = FUN_009580b8();
        FUN_0095e34c(uVar8,lVar5 + 0x5490,1);
        return;
      }
      __s1 = *(void **)(lVar5 + 0x54a0);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x5491);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(lVar5 + 0x5491);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00b78edc;
            pcVar9 = pcVar9 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b78edc;
    }
  }
  return;
}




void FUN_00b78f14(undefined8 param_1,uint param_2)

{
  FUN_00a9f780(param_1,param_2 & 1);
  return;
}




void FUN_00b78f1c(undefined8 param_1,uint param_2)

{
  FUN_00a9f784(param_1,param_2 & 1);
  return;
}




void FUN_00b78f24(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = FUN_00b20974(param_1 + 0x3348);
  uVar2 = FUN_00f04924(param_2);
  if (((uVar1 < 2) && (uVar1 != uVar2)) && (uVar2 < 2)) {
    plVar3 = *(long **)(param_1 + 0x3330 + (ulong)uVar1 * 8);
    plVar4 = *(long **)(param_1 + 0x3330 + (ulong)uVar2 * 8);
    *(long **)(param_1 + 0x3340) = plVar4;
    if ((plVar3 != (long *)0x0) && (plVar4 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x138))(0x3e4ccccd,plVar3,0,4,1);
      (**(code **)(*plVar4 + 0x138))(0x3e4ccccd,plVar4,1,4,1);
    }
    if (plVar4 != (long *)0x0) {
      if (plVar4 == (long *)(param_1 + 0x176d8)) {
        FUN_00b78a18(param_1);
      }
      FUN_00b7822c(param_1);
      return;
    }
  }
  return;
}

