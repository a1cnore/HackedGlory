// functions/00c5a — 7 functions
#include "libGameKindred.h"




void FUN_00c5a2e4(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00f13db4();
  plVar1 = param_1 + 0x54;
  fVar11 = (float)FUN_00f0eaf4(param_1 + 0x89);
  uVar13 = 0x41400000;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar11 + 12.0,plVar1);
  uVar2 = *(uint *)((long)param_1 + 0x324);
  fVar11 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if ((uVar2 >> 2 & 1) != 0) {
    fVar12 = (float)FUN_00f13e54(plVar1);
    fVar11 = fVar11 - fVar12;
  }
  plVar5 = param_1 + 0xa7;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar11 * 0.6,plVar5);
  plVar7 = param_1 + 0x4c9;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar11 * 0.4,plVar7);
  local_70 = (**(code **)(*param_1 + 0x48))(param_1);
  fStack_6c = (float)uVar13;
  FUN_00f13f18(param_1 + 0x18,&local_70);
  FUN_00f07b18(0,plVar1,5,param_1,5);
  FUN_00f07b18(0,plVar5,5,param_1,5);
  FUN_00f07b18(0,plVar7,5,param_1,5);
  if ((*(byte *)((long)param_1 + 0x324) >> 2 & 1) == 0) {
    uVar8 = 3;
    plVar4 = param_1;
  }
  else {
    FUN_00f07b18(0,plVar1,3,param_1,3);
    uVar8 = 1;
    plVar4 = plVar1;
  }
  FUN_00f07b18(0,plVar5,3,plVar4,uVar8);
  FUN_00f07b18(0,plVar7,3,plVar5,1);
  fVar11 = 0.0;
  FUN_00f07940(0,param_1 + 0x18,8,param_1,8);
  local_70 = (**(code **)(*param_1 + 0x48))(param_1);
  fStack_6c = fVar11;
  FUN_00f13f18(param_1 + 0x36,&local_70);
  fVar11 = 0.0;
  FUN_00f07940(0,param_1 + 0x36,8,param_1,8);
  lVar10 = param_1[0x4ce];
  if (lVar10 != 0) {
    local_70 = FUN_00f13e54(plVar7);
    fStack_6c = fVar11;
    FUN_00f13f18(lVar10,&local_70);
    (**(code **)(*(long *)param_1[0x4ce] + 0x90))();
    fVar11 = 0.0;
    FUN_00f07940(0,param_1[0x4ce],8,plVar7,8);
  }
  local_70 = FUN_00f13e54(plVar1);
  fStack_6c = fVar11;
  FUN_00f13f18(param_1 + 0x6b,&local_70);
  FUN_00f07940(0,0,param_1 + 0x6b,8,plVar1,8);
  fVar11 = 0.0;
  FUN_00f07940(0,param_1 + 0x89,8,plVar1,8);
  plVar1 = param_1 + 0x175;
  plVar7 = param_1 + 0xbe;
  if ((*(byte *)((long)param_1 + 0xc2c) >> 2 & 1) == 0) {
    local_70 = FUN_00f13e54(plVar5);
    fStack_6c = fVar11;
    FUN_00f13f18(plVar7,&local_70);
    uVar8 = 5;
    uVar9 = 5;
    plVar4 = plVar7;
  }
  else {
    uVar8 = FUN_00f13e54(plVar5);
    FUN_00f13e54(plVar5);
    fVar11 = fVar11 * 0.5;
    FUN_00f13f08(uVar8,fVar11,plVar7);
    uVar8 = FUN_00f13e54(plVar5);
    FUN_00f13e54(plVar5);
    FUN_00f13f08(uVar8,fVar11 * 0.5,plVar1);
    FUN_00f07b18(0,plVar7,0,plVar5,0);
    uVar9 = 2;
    uVar8 = 0;
    plVar4 = plVar1;
    plVar5 = plVar7;
  }
  FUN_00f07b18(0,plVar4,uVar8,plVar5,uVar9);
  FUN_00c5a8a0(param_1);
  plVar5 = param_1 + 0xd5;
  FUN_00f07b18(0,plVar5,5,plVar7,5);
  plVar4 = param_1 + 0xf3;
  FUN_00f07b18(0,plVar4,5,plVar7,5);
  FUN_00f07b18(0,param_1 + 0x14f,5,plVar7,5);
  FUN_00f07b18(0x41a00000,plVar5,3,plVar7,3);
  if ((*(byte *)((long)param_1 + 0x72c) >> 2 & 1) == 0) {
    uVar8 = 3;
    plVar6 = plVar7;
  }
  else {
    uVar8 = 1;
    plVar6 = plVar5;
  }
  FUN_00f07b18(0x41a00000,plVar4,3,plVar6,uVar8);
  if ((*(byte *)((long)param_1 + 0x81c) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x72c) >> 2 & 1) == 0) {
      uVar8 = 3;
      plVar4 = plVar7;
    }
    else {
      uVar8 = 1;
      plVar4 = plVar5;
    }
  }
  else {
    uVar8 = 1;
  }
  FUN_00f07b18(0x41a00000,param_1 + 0x14f,3,plVar4,uVar8);
  plVar5 = param_1 + 0x18c;
  FUN_00f07b18(0,plVar5,5,plVar1,5);
  plVar7 = param_1 + 0x1aa;
  FUN_00f07b18(0,plVar7,5,plVar1,5);
  plVar4 = param_1 + 0x32b;
  FUN_00f07b18(0,plVar4,5,plVar1,5);
  FUN_00f07b18(0,param_1 + 0x349,5,plVar1,5);
  FUN_00ac5dd0(plVar7);
  if ((*(byte *)((long)param_1 + 0xce4) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x19dc) >> 2 & 1) == 0) goto LAB_00c5a86c;
    uVar8 = 3;
    plVar7 = plVar1;
  }
  else {
    FUN_00f07b18(0x41a00000,plVar5,3,plVar1,3);
    FUN_00f07b18(0x41a00000,plVar7,3,plVar5,1);
    uVar8 = 1;
  }
  FUN_00f07b18(0x41a00000,plVar4,3,plVar7,uVar8);
  FUN_00f07b18(0x41a00000,param_1 + 0x349,3,plVar4,1);
LAB_00c5a86c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5a8a0(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if ((*(byte *)(param_1 + 0x324) >> 2 & 1) != 0) {
    fVar1 = (float)FUN_00f13e54(param_1 + 0x2a0);
    fVar1 = fVar1 + 0.0;
  }
  if ((*(byte *)(param_1 + 0x72c) >> 2 & 1) != 0) {
    fVar2 = (float)FUN_00f0e700(param_1 + 0x6a8);
    fVar1 = fVar1 + fVar2 + 20.0;
  }
  if ((*(byte *)(param_1 + 0x81c) >> 2 & 1) != 0) {
    fVar2 = (float)FUN_00f13e54(param_1 + 0x798);
    fVar1 = fVar1 + fVar2 + 20.0;
  }
  fVar2 = (float)FUN_00f13e54(param_1 + 0x5f0);
  FUN_00f0db64(fVar2 - (fVar1 + 20.0),0,0x3f800000,param_1 + 0xa78);
  return;
}




void FUN_00c5a93c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x234) =
       *(uint *)(param_1 + 0x234) & 0xfffffff8 | *(uint *)(param_1 + 0x234) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c5a950(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x4e0);
  FUN_008fce60(param_1 + 0x4e3,param_4);
  FUN_008fce60(param_1 + 0x4e6,param_2);
  *(undefined1 *)(param_1 + 0x4ed) = 1;
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x324) & 3 | (param_5 & 1) << 2;
  FUN_00f0e670(param_1 + 0xd5,&DAT_031339e8,2);
  FUN_00e70570(&local_58,param_4);
  FUN_00f0d75c(param_1 + 0x14f,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_00c5aa8c(param_1);
  FUN_00e70570(&local_58,param_3);
  FUN_00ac5fdc(param_1 + 0x1aa,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5aa8c(long param_1)

{
  size_t __n;
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  void *__s1;
  
  bVar6 = DAT_0320ffa8;
  bVar3 = *(byte *)(param_1 + 0x2730);
  uVar5 = (ulong)(bVar3 >> 1);
  sVar2 = uVar5;
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x2738);
  }
  __n = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    __n = DAT_0320ffb0;
  }
  if (sVar2 == __n) {
    pvVar10 = *(void **)(param_1 + 0x2740);
    pcVar8 = (char *)(param_1 + 0x2731);
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_1 + 0x2731);
    }
    pcVar13 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar13 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        lVar11 = -uVar5;
        pcVar14 = pcVar13;
        pcVar12 = pcVar8;
        do {
          if (*pcVar12 != *pcVar14) goto LAB_00c5ac10;
          pcVar12 = pcVar12 + 1;
          lVar11 = lVar11 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar11 != 0);
      }
LAB_00c5ab78:
      bVar4 = *(byte *)(param_1 + 0x2748);
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x2750);
      }
      if (sVar1 == sVar2) {
        __s1 = *(void **)(param_1 + 0x2758);
        if ((bVar4 & 1) == 0) {
          __s1 = (void *)(param_1 + 0x2749);
        }
        if ((bVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pcVar12 = (char *)(param_1 + 0x2749);
            lVar11 = -(ulong)(bVar4 >> 1);
            pcVar14 = pcVar13;
            do {
              if (*pcVar12 != *pcVar14) goto LAB_00c5ac10;
              pcVar12 = pcVar12 + 1;
              lVar11 = lVar11 + 1;
              pcVar14 = pcVar14 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar7 = memcmp(__s1,pcVar13,sVar2), iVar7 != 0))
        goto LAB_00c5ac10;
        *(uint *)(param_1 + 0xc2c) = *(uint *)(param_1 + 0xc2c) & 0xfffffffb;
      }
LAB_00c5ac10:
      if ((bVar3 & 1) == 0) {
        if (sVar2 != 0) {
          lVar11 = -uVar5;
          do {
            if (*pcVar8 != *pcVar13) {
              uVar9 = 4;
              goto LAB_00c5ac70;
            }
            pcVar8 = pcVar8 + 1;
            lVar11 = lVar11 + 1;
            pcVar13 = pcVar13 + 1;
          } while (lVar11 != 0);
          uVar9 = 0;
          goto LAB_00c5ac70;
        }
      }
      else if (sVar2 != 0) goto LAB_00c5ac44;
      uVar9 = 0;
    }
    else {
      if ((sVar2 == 0) || (iVar7 = memcmp(pvVar10,pcVar13,sVar2), iVar7 == 0)) goto LAB_00c5ab78;
LAB_00c5ac44:
      iVar7 = memcmp(pvVar10,pcVar13,sVar2);
      uVar9 = (uint)(iVar7 != 0) << 2;
    }
LAB_00c5ac70:
    *(uint *)(param_1 + 0xce4) = *(uint *)(param_1 + 0xce4) & 0xfffffffb | uVar9;
    if (sVar2 != __n) goto LAB_00c5acd4;
    pvVar10 = *(void **)(param_1 + 0x2740);
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_1 + 0x2731);
    }
    pcVar8 = DAT_0320ffb8;
    if ((bVar6 & 1) == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar13 = (char *)(param_1 + 0x2731);
        lVar11 = -uVar5;
        do {
          if (*pcVar13 != *pcVar8) goto LAB_00c5acd4;
          pcVar13 = pcVar13 + 1;
          lVar11 = lVar11 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar11 != 0);
      }
LAB_00c5adb4:
      uVar9 = 0;
    }
    else {
      if (sVar2 == 0) goto LAB_00c5adb4;
      iVar7 = memcmp(pvVar10,pcVar8,sVar2);
      uVar9 = (uint)(iVar7 != 0) << 2;
    }
  }
  else {
    *(uint *)(param_1 + 0xce4) = *(uint *)(param_1 + 0xce4) | 4;
LAB_00c5acd4:
    uVar9 = 4;
  }
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xfffffffb | uVar9;
  bVar3 = *(byte *)(param_1 + 0x2748);
  uVar5 = (ulong)(bVar3 >> 1);
  sVar2 = uVar5;
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x2750);
  }
  if (sVar2 != __n) {
    *(uint *)(param_1 + 0x19dc) = *(uint *)(param_1 + 0x19dc) | 4;
LAB_00c5ad6c:
    uVar9 = 4;
    goto LAB_00c5ae58;
  }
  pvVar10 = *(void **)(param_1 + 0x2758);
  if ((bVar3 & 1) == 0) {
    pvVar10 = (void *)(param_1 + 0x2749);
  }
  pcVar8 = DAT_0320ffb8;
  if ((bVar6 & 1) == 0) {
    pcVar8 = &DAT_0320ffa9;
  }
  if ((bVar3 & 1) == 0) {
    if (__n == 0) {
      uVar9 = 0;
      *(uint *)(param_1 + 0x19dc) = *(uint *)(param_1 + 0x19dc) & 0xfffffffb;
      goto LAB_00c5ae58;
    }
    pcVar13 = (char *)(param_1 + 0x2749);
    lVar11 = -uVar5;
    pcVar14 = pcVar8;
    pcVar12 = pcVar13;
    do {
      if (*pcVar12 != *pcVar14) {
        uVar9 = 4;
        goto LAB_00c5adec;
      }
      pcVar12 = pcVar12 + 1;
      lVar11 = lVar11 + 1;
      pcVar14 = pcVar14 + 1;
    } while (lVar11 != 0);
    uVar9 = 0;
LAB_00c5adec:
    *(uint *)(param_1 + 0x19dc) = *(uint *)(param_1 + 0x19dc) & 0xfffffffb | uVar9;
    if ((bVar3 & 1) != 0) goto LAB_00c5ae30;
    if (__n != 0) {
      lVar11 = -uVar5;
      do {
        if (*pcVar13 != *pcVar8) goto LAB_00c5ad6c;
        uVar9 = 0;
        pcVar13 = pcVar13 + 1;
        lVar11 = lVar11 + 1;
        pcVar8 = pcVar8 + 1;
      } while (lVar11 != 0);
      goto LAB_00c5ae58;
    }
  }
  else {
    if (__n == 0) {
      uVar9 = 0;
    }
    else {
      iVar7 = memcmp(pvVar10,pcVar8,__n);
      uVar9 = (uint)(iVar7 != 0) << 2;
    }
    *(uint *)(param_1 + 0x19dc) = *(uint *)(param_1 + 0x19dc) & 0xfffffffb | uVar9;
LAB_00c5ae30:
    if (__n != 0) {
      iVar7 = memcmp(pvVar10,pcVar8,__n);
      uVar9 = (uint)(iVar7 != 0) << 2;
      goto LAB_00c5ae58;
    }
  }
  uVar9 = 0;
LAB_00c5ae58:
  *(uint *)(param_1 + 0x1acc) = *(uint *)(param_1 + 0x1acc) & 0xfffffffb | uVar9;
  return;
}




void FUN_00c5ae84(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x4e0);
  FUN_008fce60(param_1 + 0x4e3,param_4);
  FUN_008fce60(param_1 + 0x4e9,param_2);
  *(undefined1 *)(param_1 + 0x4ed) = 1;
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x324) & 3 | (param_5 & 1) << 2;
  FUN_00f0e670(param_1 + 0xd5,&DAT_031339e8,2);
  FUN_00e70570(&local_58,param_4);
  FUN_00f0d75c(param_1 + 0x14f,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_00c5aa8c(param_1);
  FUN_00e70570(&local_58,param_3);
  FUN_00b2a900(param_1 + 0x349,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5afc4(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  FUN_008fce60(param_1 + 0x4e0,param_3);
  FUN_00e70a24(param_2,param_1 + 0x4e3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  *(uint *)((long)param_1 + 0xc2c) = *(uint *)((long)param_1 + 0xc2c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_00f0d75c(param_1 + 0x14f,param_2);
  puVar1 = &DAT_031339e0;
  if ((param_4 & 1) == 0) {
    puVar1 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_1 + 0x14f,puVar1);
  lVar2 = FUN_00c5e280(param_1 + 0x4c9,1);
  FUN_00910394(lVar2 + 0x1858,param_2);
                    /* WARNING: Could not recover jumptable at 0x00c5b098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}

