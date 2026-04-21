// functions/00b46 — 11 functions
#include "libGameKindred.h"




void FUN_00b4619c(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)(param_1 + 0x11968);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x11970) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar3 = *puVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x11970) != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00b46214(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e1c80;
  if ((void *)param_1[0x628] != (void *)0x0) {
    operator_delete__((void *)param_1[0x628]);
    param_1[0x628] = 0;
    param_1[0x627] = 0;
  }
  FUN_00b26544(param_1 + 0x1b6);
  param_1[0x35] = &PTR_FUN_027d6650;
  param_1[0x195] = &PTR_FUN_028266f0;
  param_1[0x1ac] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1af);
  FUN_00f13d08(param_1 + 0x195);
  param_1[0x177] = &PTR_FUN_028266f0;
  param_1[0x18e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x191);
  FUN_00f13d08(param_1 + 0x177);
  FUN_00ac6220(param_1 + 0x10c);
  FUN_00ac6220(param_1 + 0xa1);
  FUN_00f0d3a4(param_1 + 0x7b);
  param_1[0x5d] = &PTR_FUN_028266f0;
  param_1[0x74] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x77);
  FUN_00f13d08(param_1 + 0x5d);
  FUN_00f01868(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b46330(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027e1b80;
  FUN_00f0d3a4(param_1 + 0x24a);
  FUN_00f0d3a4(param_1 + 0x224);
  param_1[0x206] = &PTR_FUN_028266f0;
  param_1[0x21d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x220);
  FUN_00f13d08(param_1 + 0x206);
  FUN_00f0d3a4(param_1 + 0x1e0);
  param_1[0x1c2] = &PTR_FUN_028266f0;
  param_1[0x1d9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1dc);
  FUN_00f13d08(param_1 + 0x1c2);
  FUN_00f13d08(param_1 + 0x1ab);
  FUN_00f0d3a4(param_1 + 0x185);
  lVar1 = 0xaf8;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x48);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b4642c(void *param_1)

{
  FUN_00b45fb0();
  operator_delete(param_1);
  return;
}




void FUN_00b46450(void)

{
  return;
}




void FUN_00b46454(long param_1,long param_2)

{
  size_t *psVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  char *pcVar18;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pbVar15 = (byte *)(param_1 + 0x11950);
  psVar1 = (size_t *)(param_1 + 0x11958);
  bVar4 = *pbVar15;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *psVar1;
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  bVar8 = false;
  if (sVar2 == sVar3) {
    pvVar17 = *(void **)(param_1 + 0x11960);
    if ((bVar4 & 1) == 0) {
      pvVar17 = (void *)(param_1 + 0x11951);
    }
    pbVar11 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar11 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        lVar12 = -(ulong)(bVar4 >> 1);
        pbVar13 = pbVar11;
        pbVar16 = pbVar15;
        do {
          pbVar16 = pbVar16 + 1;
          if (*pbVar16 != *pbVar13) goto LAB_00b46654;
          lVar12 = lVar12 + 1;
          pbVar13 = pbVar13 + 1;
        } while (lVar12 != 0);
      }
    }
    else if (sVar2 != 0) {
      iVar9 = memcmp(pvVar17,pbVar11,sVar2);
      bVar8 = false;
      if (iVar9 != 0) goto LAB_00b46658;
    }
    bVar4 = *(byte *)(param_2 + 0x180);
    sVar3 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar3 = *(size_t *)(param_2 + 0x188);
    }
    if (sVar3 == sVar2) {
      pvVar17 = *(void **)(param_2 + 400);
      if ((bVar4 & 1) == 0) {
        pvVar17 = (void *)(param_2 + 0x181);
      }
      if ((bVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pbVar13 = (byte *)(param_2 + 0x181);
          lVar12 = -(ulong)(bVar4 >> 1);
          do {
            if (*pbVar13 != *pbVar11) goto LAB_00b465c4;
            bVar8 = false;
            pbVar13 = pbVar13 + 1;
            lVar12 = lVar12 + 1;
            pbVar11 = pbVar11 + 1;
          } while (lVar12 != 0);
          goto LAB_00b46658;
        }
      }
      else if ((sVar2 != 0) && (iVar9 = memcmp(pvVar17,pbVar11,sVar2), iVar9 != 0))
      goto LAB_00b465c4;
LAB_00b46654:
      bVar8 = false;
    }
    else {
LAB_00b465c4:
      lVar12 = FUN_009580b8();
      bVar4 = *(byte *)(param_2 + 0x180);
      bVar5 = *(byte *)(lVar12 + 0x5478);
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(param_2 + 0x188);
      }
      sVar3 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar3 = *(size_t *)(lVar12 + 0x5480);
      }
      bVar8 = false;
      if (sVar2 == sVar3) {
        pvVar17 = *(void **)(param_2 + 400);
        pcVar18 = *(char **)(lVar12 + 0x5488);
        if ((bVar4 & 1) == 0) {
          pvVar17 = (void *)(param_2 + 0x181);
        }
        if ((bVar5 & 1) == 0) {
          pcVar18 = (char *)(lVar12 + 0x5479);
        }
        if ((bVar4 & 1) == 0) {
          if (sVar2 == 0) {
LAB_00b4682c:
            bVar8 = true;
          }
          else {
            pcVar14 = (char *)(param_2 + 0x181);
            lVar12 = -(ulong)(bVar4 >> 1);
            bVar8 = true;
            do {
              if (*pcVar14 != *pcVar18) goto LAB_00b46654;
              pcVar14 = pcVar14 + 1;
              pcVar18 = pcVar18 + 1;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0);
          }
        }
        else {
          if (sVar2 == 0) goto LAB_00b4682c;
          iVar9 = memcmp(pvVar17,pcVar18,sVar2);
          bVar8 = iVar9 == 0;
        }
      }
    }
  }
LAB_00b46658:
  if (*(char *)(param_2 + 0x1d0) == '\0') {
    bVar4 = *(byte *)(param_2 + 0x180);
    bVar5 = *pbVar15;
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 0x188);
    }
    sVar3 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar3 = *psVar1;
    }
    bVar7 = false;
    if (sVar2 == sVar3) {
      pvVar17 = *(void **)(param_2 + 400);
      pcVar18 = *(char **)(param_1 + 0x11960);
      if ((bVar4 & 1) == 0) {
        pvVar17 = (void *)(param_2 + 0x181);
      }
      if ((bVar5 & 1) == 0) {
        pcVar18 = (char *)(param_1 + 0x11951);
      }
      if ((bVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar14 = (char *)(param_2 + 0x181);
          lVar12 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar14 != *pcVar18) {
              bVar7 = false;
              goto LAB_00b46838;
            }
            pcVar14 = pcVar14 + 1;
            lVar12 = lVar12 + 1;
            pcVar18 = pcVar18 + 1;
          } while (lVar12 != 0);
        }
      }
      else if (sVar2 != 0) {
        iVar9 = memcmp(pvVar17,pcVar18,sVar2);
        bVar7 = iVar9 == 0;
        goto LAB_00b46838;
      }
    }
    else {
LAB_00b46838:
      if (!(bool)(bVar8 | bVar7)) goto LAB_00b46844;
    }
  }
  FUN_008fce60(pbVar15,param_2 + 0x180);
  bVar4 = *pbVar15;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *psVar1;
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    pvVar17 = *(void **)(param_1 + 0x11960);
    if ((bVar4 & 1) == 0) {
      pvVar17 = (void *)(param_1 + 0x11951);
    }
    pbVar11 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar11 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        lVar12 = -(ulong)(bVar4 >> 1);
        do {
          pbVar15 = pbVar15 + 1;
          if (*pbVar15 != *pbVar11) goto LAB_00b46788;
          lVar12 = lVar12 + 1;
          pbVar11 = pbVar11 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_00b46844;
    }
    if ((sVar2 == 0) || (iVar9 = memcmp(pvVar17,pbVar11,sVar2), iVar9 == 0)) goto LAB_00b46844;
  }
LAB_00b46788:
  uVar10 = FUN_00e84e5c(param_2);
  if ((uVar10 & 1) != 0) {
    FUN_00b46878(param_1,*(undefined4 *)(param_2 + 0x90));
    FUN_00e70570(&local_78,param_2 + 0x58);
    FUN_00e70570(&local_88,param_2 + 0x40);
    FUN_00b468f0(param_1 + 0xe718,&local_78,&local_88,1);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00b46b04(param_1,param_2);
  }
LAB_00b46844:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b46878(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 200;
  lVar2 = 0xb;
  *(undefined4 *)(param_1 + 0x11978) = param_2;
  do {
    FUN_00b48138(lVar1,param_2);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 5000;
  } while (lVar2 != 0);
  FUN_00b48394(0,param_1,param_1 + 0xe718,param_2,1);
  return;
}




void FUN_00b468f0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  ulong local_88 [2];
  void *local_78;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  FUN_00e70a24(param_2,local_70);
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = (void *)0x0;
  FUN_00e70a24(param_3,local_88);
  FUN_00910394(param_1 + 0x3138,param_3);
  lVar1 = param_1 + 0x1a8;
  FUN_00ac5fdc(lVar1,param_2);
  fVar6 = 1.0;
  if ((param_4 & 1) == 0) {
    fVar6 = 0.6;
  }
  if ((*(float *)(param_1 + 0x1f0) != fVar6) || (*(float *)(param_1 + 500) != fVar6)) {
    *(float *)(param_1 + 0x1f0) = fVar6;
    *(float *)(param_1 + 500) = fVar6;
    FUN_0091ada4(lVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x45c);
  uVar3 = uVar5 >> 7 & 0xff;
  uVar4 = 0xe5;
  if ((param_4 & 1) == 0) {
    uVar4 = 0xb2;
  }
  if (uVar3 != uVar4) {
    *(uint *)(param_1 + 0x45c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | uVar4 << 7;
    FUN_0091ada4(param_1 + 0x3d8);
    uVar3 = *(uint *)(param_1 + 0x45c) >> 7 & 0xff;
  }
  FUN_00ac6010((float)uVar3 / 255.0 + -0.2,lVar1);
  uVar4 = *(uint *)(param_1 + 0x58c);
  fVar6 = 1.0;
  if ((param_4 & 1) == 0) {
    fVar6 = 0.7;
  }
  uVar5 = (uint)(fVar6 * 255.0);
  if ((uVar4 >> 7 & 0xff) != uVar5) {
    *(uint *)(param_1 + 0x58c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar5 & 0xff) << 7;
    FUN_0091ada4(param_1 + 0x508);
  }
  uVar4 = *(uint *)(param_1 + 0x8e4);
  if ((uVar4 >> 7 & 0xff) != uVar5) {
    *(uint *)(param_1 + 0x8e4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar5 & 0xff) << 7;
    FUN_0091ada4(param_1 + 0x860);
  }
  uVar4 = *(uint *)(param_1 + 0x13c);
  if ((uVar4 >> 7 & 0xff) != uVar5) {
    *(uint *)(param_1 + 0x13c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar5 & 0xff) << 7;
    FUN_0091ada4(param_1 + 0xb8);
  }
  if ((*(float *)(param_1 + 0x100) != fVar6) || (*(float *)(param_1 + 0x104) != fVar6)) {
    *(float *)(param_1 + 0x100) = fVar6;
    *(float *)(param_1 + 0x104) = fVar6;
    FUN_0091ada4(param_1 + 0xb8);
  }
  FUN_00b48b44(param_1);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b46b04(void *param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  char *__s2;
  long lVar13;
  char *pcVar14;
  long lVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  code *local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar9 = tpidr_el0;
  local_90 = *(long *)(lVar9 + 0x28);
  FUN_00b4619c();
  uVar17 = *(uint *)(param_2 + 0x1f8);
  if (uVar17 != 0) {
    puVar1 = (uint *)((long)param_1 + 0x11968);
    uVar4 = DAT_03210f60;
    uVar5 = DAT_03210f8c;
    uVar18 = 0;
    plVar2 = (long *)((long)param_1 + 0x11970);
    do {
      lVar13 = *(long *)(param_2 + 0x200) + uVar18 * 0x38;
      bVar6 = *(byte *)(lVar13 + 0x18);
      __n = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        __n = *(size_t *)(lVar13 + 0x20);
      }
      sVar3 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar3 = DAT_0320ffb0;
      }
      if (__n == sVar3) {
        pvVar16 = *(void **)(*(long *)(param_2 + 0x200) + uVar18 * 0x38 + 0x28);
        if ((bVar6 & 1) == 0) {
          pvVar16 = (void *)(lVar13 + 0x19);
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar6 & 1) == 0) {
          if (__n != 0) {
            pcVar14 = (char *)(lVar13 + 0x19);
            lVar13 = -(ulong)(bVar6 >> 1);
            do {
              if (*pcVar14 != *__s2) goto LAB_00b46c68;
              pcVar14 = pcVar14 + 1;
              lVar13 = lVar13 + 1;
              __s2 = __s2 + 1;
            } while (lVar13 != 0);
          }
        }
        else if ((__n != 0) && (iVar11 = memcmp(pvVar16,__s2,__n), iVar11 != 0)) goto LAB_00b46c68;
      }
      else {
LAB_00b46c68:
        pvVar16 = operator_new(0x3150);
        FUN_00b48a38();
        local_c8 = pvVar16;
        FUN_00b48510(puVar1,&local_c8);
        FUN_00ed026c((long)param_1 + 0xdd80,local_c8,1);
        pvVar16 = local_c8;
        FUN_00e70570(&local_c0,*(long *)(param_2 + 0x200) + uVar18 * 0x38 + 0x18);
        FUN_00e70570(&local_d8,*(long *)(param_2 + 0x200) + uVar18 * 0x38);
        FUN_00b468f0(pvVar16,&local_c0,&local_d8,0);
        if (local_d0 != (void *)0x0) {
          operator_delete__(local_d0);
          local_d8 = 0;
          local_d0 = (void *)0x0;
        }
        if (local_b8 != (void *)0x0) {
          operator_delete__(local_b8);
          local_c0 = (code *)0x0;
          local_b8 = (void *)0x0;
        }
        iVar7 = *(int *)(*(long *)(param_2 + 0x200) + uVar18 * 0x38 + 0x30);
        iVar8 = iVar7 % 10;
        bVar10 = iVar8 == 0;
        *(bool *)((long)local_c8 + 0x3148) = bVar10;
        FUN_00b48b44();
        fVar20 = 0.0;
        iVar11 = *(int *)((long)param_1 + 0x11978);
        if ((iVar11 == iVar7) && (bVar10)) {
          fVar20 = (float)FUN_00f01fcc((long)param_1 + 0xe718,1,0,1,1);
          fVar20 = fVar20 + 5.0;
          iVar11 = *(int *)((long)param_1 + 0x11978);
        }
        if (iVar11 == iVar7 && bVar10) {
          *(uint *)((long)local_c8 + 0x13c) = *(uint *)((long)local_c8 + 0x13c) & 0xfffffffb;
        }
        if (uVar18 != 0) {
          uVar19 = 0;
          lVar13 = 0x30;
          do {
            if (*puVar1 <= uVar19) break;
            if ((*(long *)(*plVar2 + uVar19 * 8) != 0) &&
               (*(int *)(*(long *)(param_2 + 0x200) + lVar13) == iVar7)) {
              *(uint *)((long)local_c8 + 0x13c) = *(uint *)((long)local_c8 + 0x13c) & 0xfffffffb;
              plVar12 = *(long **)(*plVar2 + uVar19 * 8);
              fVar21 = (float)(**(code **)(*plVar12 + 0x60))(plVar12,1,0,1,1);
              fVar22 = 0.0;
              if ((iVar8 != 0) &&
                 (lVar15 = *(long *)(*plVar2 + uVar19 * 8),
                 (*(uint *)(lVar15 + 0x13c) >> 2 & 1) != 0)) {
                fVar22 = (float)FUN_00f0eac0(lVar15 + 0xb8);
                fVar22 = fVar22 + 5.0;
              }
              fVar20 = fVar20 + ((fVar21 + 16.0) - fVar22);
            }
            uVar19 = uVar19 + 1;
            lVar13 = lVar13 + 0x38;
          } while (uVar19 < uVar18);
        }
        FUN_00b48394(fVar20,param_1,local_c8,iVar7,iVar8 == 0);
        local_a0 = (ulong)(*puVar1 - 1);
        local_c0 = FUN_00b485a8;
        local_b0 = 0;
        uStack_a8 = 0;
        local_b8 = param_1;
        local_98 = uVar4;
        FUN_009693a0((long)local_c8 + 8,&local_c0);
        local_a0 = (ulong)(*puVar1 - 1);
        local_c0 = FUN_00b485a8;
        local_b0 = 0;
        uStack_a8 = 0;
        local_b8 = param_1;
        local_98 = uVar5;
        FUN_009693a0((long)local_c8 + 8,&local_c0);
        uVar17 = *(uint *)(param_2 + 0x1f8);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar17);
  }
  if (*(long *)(lVar9 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b46f24(long param_1,uint param_2)

{
  float *pfVar1;
  
  if ((param_2 & 1) != 0) {
    pfVar1 = (float *)(param_1 + 0xddc0);
    if ((*pfVar1 != 0.0) || (*(float *)(param_1 + 0xddc4) != 0.0)) {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      FUN_0091ada4(param_1 + 0xdd80);
    }
    FUN_00b46f90(param_1);
    FUN_00b47014(param_1);
    return;
  }
  return;
}




void FUN_00b46f90(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = (uint *)FUN_00cccd40();
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(*(long *)(puVar3 + 2) + lVar5);
      if (uVar2 < 0xb) {
        lVar1 = *(long *)(puVar3 + 2) + lVar5;
        FUN_00b485b0(param_1 + (long)(int)(uVar2 - 1) * 5000 + 200,*(undefined4 *)(lVar1 + 4),
                     *(undefined4 *)(lVar1 + 8));
        uVar4 = *puVar3;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (uVar6 < uVar4);
  }
  return;
}

