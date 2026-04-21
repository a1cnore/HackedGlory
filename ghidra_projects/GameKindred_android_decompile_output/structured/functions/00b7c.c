// functions/00b7c — 34 functions
#include "libGameKindred.h"




void thunk_FUN_00b7ced8(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  byte abStack_50 [8];
  size_t sStack_48;
  char *pcStack_40;
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  FUN_00b9d3a8(abStack_50,param_1 + 0x591);
  sVar1 = (ulong)(abStack_50[0] >> 1);
  if ((abStack_50[0] & 1) != 0) {
    sVar1 = sStack_48;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pcVar7 = (char *)((ulong)abStack_50 | 1);
    pcVar9 = pcVar7;
    if ((abStack_50[0] & 1) != 0) {
      pcVar9 = pcStack_40;
    }
    pcVar6 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((abStack_50[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar8 = -(ulong)(abStack_50[0] >> 1);
        do {
          if (*pcVar7 != *pcVar6) goto LAB_00b7cfa0;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b7d06c;
    }
    if ((sVar1 != 0) && (iVar5 = memcmp(pcVar9,pcVar6,sVar1), iVar5 != 0)) goto LAB_00b7cfa0;
  }
  else {
LAB_00b7cfa0:
    lVar8 = FUN_009580b8();
    bVar3 = *(byte *)(lVar8 + 0x5478);
    sVar1 = (ulong)(abStack_50[0] >> 1);
    if ((abStack_50[0] & 1) != 0) {
      sVar1 = sStack_48;
    }
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(lVar8 + 0x5480);
    }
    if (sVar1 == sVar2) {
      pcVar9 = *(char **)(lVar8 + 0x5488);
      pcVar7 = (char *)((ulong)abStack_50 | 1);
      pcVar6 = pcVar7;
      if ((abStack_50[0] & 1) != 0) {
        pcVar6 = pcStack_40;
      }
      if ((bVar3 & 1) == 0) {
        pcVar9 = (char *)(lVar8 + 0x5479);
      }
      if ((abStack_50[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar8 = -(ulong)(abStack_50[0] >> 1);
          do {
            if (*pcVar7 != *pcVar9) goto LAB_00b7d06c;
            pcVar7 = pcVar7 + 1;
            lVar8 = lVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pcVar6,pcVar9,sVar1), iVar5 != 0)) goto LAB_00b7d064;
      (**(code **)(*param_1 + 0x178))(param_1,2,&DAT_0320ffa8);
    }
    if ((abStack_50[0] & 1) == 0) goto LAB_00b7d06c;
  }
LAB_00b7d064:
  operator_delete(pcStack_40);
LAB_00b7d06c:
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b7c0a0(long param_1,uint param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  undefined **local_298 [5];
  undefined1 auStack_270 [112];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((param_2 & 0xffff) == 3) {
    uVar6 = FUN_009580c4();
    if ((uVar6 & 1) == 0) goto LAB_00b7c39c;
    lVar7 = FUN_009580b8();
    bVar3 = *(byte *)(lVar7 + 0x5490);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar7 + 0x5498);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar11 = *(void **)(lVar7 + 0x54a0);
      if ((bVar3 & 1) == 0) {
        pvVar11 = (void *)(lVar7 + 0x5491);
      }
      pcVar9 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar9 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar10 = (char *)(lVar7 + 0x5491);
          lVar7 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar10 != *pcVar9) goto LAB_00b7c318;
            pcVar10 = pcVar10 + 1;
            lVar7 = lVar7 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar7 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar11,pcVar9,sVar1), iVar5 != 0))
      goto LAB_00b7c318;
      FUN_00e84dac(local_298);
      local_298[0] = &PTR_FUN_027bbb08;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1d8 = 0;
      memset(auStack_270,0,0x48);
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      FUN_00e84dec(local_298);
      FUN_00bb40cc(param_1 + 0x8f660,local_298);
      FUN_0094f104(local_298);
    }
    else {
LAB_00b7c318:
      uVar8 = FUN_009580b8();
      lVar7 = FUN_009580b8();
      FUN_0095e34c(uVar8,lVar7 + 0x5490,1);
    }
    goto LAB_00b7c39c;
  }
  if (((short)param_2 != 2) || (uVar6 = FUN_009580c4(), (uVar6 & 1) == 0)) goto LAB_00b7c39c;
  lVar7 = FUN_009580b8();
  bVar3 = *(byte *)(lVar7 + 0x5478);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar7 + 0x5480);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar7 + 0x5488);
    if ((bVar3 & 1) == 0) {
      pvVar11 = (void *)(lVar7 + 0x5479);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar10 = (char *)(lVar7 + 0x5479);
        lVar7 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar10 != *pcVar9) goto LAB_00b7c224;
          pcVar10 = pcVar10 + 1;
          lVar7 = lVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar11,pcVar9,sVar1), iVar5 != 0)) goto LAB_00b7c224;
    FUN_00e84dac(local_298);
    local_298[0] = &PTR_FUN_027bbaa8;
    memset(&uStack_1f8,0,0xd8);
    memset(auStack_270,0,0x60);
    FUN_00954ec0(&local_200);
    FUN_00954d1c(auStack_270);
    uStack_70 = 0;
    local_78 = 0;
    local_68 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    FUN_00e84dec(local_298);
    FUN_00ba6b60(param_1 + 0x15300,local_298);
    FUN_0094dae0(local_298);
  }
  else {
LAB_00b7c224:
    uVar8 = FUN_009580b8();
    lVar7 = FUN_009580b8();
    FUN_0095e21c(uVar8,lVar7 + 0x5478,1);
  }
LAB_00b7c39c:
  FUN_00a9f964(param_1,param_2,&DAT_0320ffa8);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00b7c3e0(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,1,&DAT_0320ffa8);
  return 0;
}




undefined8 FUN_00b7c40c(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,2,&DAT_0320ffa8);
  return 0;
}




undefined8 FUN_00b7c438(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,3,&DAT_0320ffa8);
  return 0;
}




void FUN_00b7c464(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_00b922c0(param_1 + 0x2c88);
    return;
  }
  return;
}




void FUN_00b7c4a8(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_00b922c0(param_1 + 0x30);
    return;
  }
  return;
}




void FUN_00b7c4f4(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00b9c270(param_1 + 0x2c88,param_2 + 0x80);
  if ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) == 0) {
    if ((*(byte *)((long)&__DT_SYMTAB[0xffd].st_value + param_1 + 4) >> 1 & 1) == 0)
    goto LAB_00b7c6ec;
    bVar3 = *(byte *)(param_2 + 200);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 0xd0);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 != sVar2) goto LAB_00b7c6ec;
    pvVar10 = *(void **)(param_2 + 0xd8);
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0xc9);
    }
    pcVar7 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar7 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar8 = (char *)(param_2 + 0xc9);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *pcVar7) goto LAB_00b7c6ec;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar10,pcVar7,sVar1), iVar5 != 0)) goto LAB_00b7c6ec;
    if ("SSL_COMP_set0_compression_methods"[param_1 + 0x1c] == '\0') goto LAB_00b7c6ec;
    uVar6 = FUN_009b8d90();
    pcVar7 = "vainglory://PEOPLE/FRIENDS";
  }
  else {
    bVar3 = *(byte *)(param_2 + 0x90);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 0x98);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 != sVar2) goto LAB_00b7c6ec;
    pvVar10 = *(void **)(param_2 + 0xa0);
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_2 + 0x91);
    }
    pcVar7 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar7 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar8 = (char *)(param_2 + 0x91);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *pcVar7) goto LAB_00b7c6ec;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar10,pcVar7,sVar1), iVar5 != 0)) goto LAB_00b7c6ec;
    if (*(char *)((long)&__DT_SYMTAB[0xe25].st_size + param_1) == '\0') goto LAB_00b7c6ec;
    uVar6 = FUN_009b8d90();
    pcVar7 = "vainglory://PEOPLE/GUILD";
  }
  FUN_008fa54c(local_50,pcVar7);
  FUN_009bb46c(uVar6,local_50,&DAT_0320ffa8,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00b7c6ec:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b7c714(long param_1)

{
  FUN_00b7c4f4(param_1 + -0x2c38);
  return;
}




void FUN_00b7c720(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  char *pcVar9;
  
  if ((*(byte *)(param_1 + 0x2c34) >> 2 & 1) == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x1d0) == '\0') && ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) == 0)) {
    return;
  }
  bVar3 = *(byte *)(param_2 + 0x180);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 0x188);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(param_2 + 400);
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(param_2 + 0x181);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 == 0) {
        return;
      }
      pcVar6 = (char *)(param_2 + 0x181);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *pcVar9) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        pcVar9 = pcVar9 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = memcmp(pvVar8,pcVar9,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  lVar7 = FUN_009580b8();
  bVar3 = *(byte *)(lVar7 + 0x5478);
  bVar4 = *(byte *)(param_2 + 0x180);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar7 + 0x5480);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x188);
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(lVar7 + 0x5488);
    pcVar9 = *(char **)(param_2 + 400);
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(lVar7 + 0x5479);
    }
    if ((bVar4 & 1) == 0) {
      pcVar9 = (char *)(param_2 + 0x181);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar6 = (char *)(lVar7 + 0x5479);
        lVar7 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar6 != *pcVar9) goto LAB_00b7c8a4;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) goto LAB_00b7c8a4;
    if ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) == 0) {
      return;
    }
  }
LAB_00b7c8a4:
  FUN_00b94348(param_1 + 0x2c88,0);
  FUN_00b4a0f0(param_1 + 0xbaf50,param_2);
  return;
}




void FUN_00b7c8d4(long param_1)

{
  FUN_00b7c720(param_1 + -0x2c38);
  return;
}




void FUN_00b7c8e0(long param_1)

{
  FUN_00ba7be4(param_1 + 0x15300);
  return;
}




void FUN_00b7c8f0(long param_1)

{
  FUN_00ba7be4(param_1 + 0x126c8);
  return;
}




void thunk_FUN_00b7c904(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if (((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) != 0)) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      FUN_00b4ab9c(param_1 + 0xbaf50,param_2);
    }
    else {
      lVar3 = FUN_009580b8();
      FUN_009658c8(lVar3 + 0x18);
      uVar4 = FUN_009b8d90();
      FUN_008fa54c(abStack_50,"vainglory://PEOPLE/GUILD");
      FUN_009bb46c(uVar4,abStack_50,&DAT_0320ffa8,0,0);
      if ((abStack_50[0] & 1) != 0) {
        operator_delete(pvStack_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7c904(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if (((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) != 0)) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      FUN_00b4ab9c(param_1 + 0xbaf50,param_2);
    }
    else {
      lVar3 = FUN_009580b8();
      FUN_009658c8(lVar3 + 0x18);
      uVar4 = FUN_009b8d90();
      FUN_008fa54c(local_50,"vainglory://PEOPLE/GUILD");
      FUN_009bb46c(uVar4,local_50,&DAT_0320ffa8,0,0);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7c9e0(long param_1)

{
  FUN_00b7c904(param_1 + -0x2c38);
  return;
}




void thunk_FUN_00b7c904(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if (((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) != 0)) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      FUN_00b4ab9c(param_1 + 0xbaf50,param_2);
    }
    else {
      lVar3 = FUN_009580b8();
      FUN_009658c8(lVar3 + 0x18);
      uVar4 = FUN_009b8d90();
      FUN_008fa54c(abStack_50,"vainglory://PEOPLE/GUILD");
      FUN_009bb46c(uVar4,abStack_50,&DAT_0320ffa8,0,0);
      if ((abStack_50[0] & 1) != 0) {
        operator_delete(pvStack_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7c9f0(long param_1)

{
  FUN_00b7c904(param_1 + -0x2c38);
  return;
}




void thunk_FUN_00b7ca00(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if ((((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_00b4ab9c(param_1 + 0xbaf50,param_2);
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(abStack_50,"vainglory://PEOPLE/GUILD");
    FUN_009bb46c(uVar3,abStack_50,&DAT_0320ffa8,0,0);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7ca00(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if ((((uVar2 & 1) != 0) && ((*(byte *)(param_1 + 0xbdb84) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_00b4ab9c(param_1 + 0xbaf50,param_2);
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"vainglory://PEOPLE/GUILD");
    FUN_009bb46c(uVar3,local_50,&DAT_0320ffa8,0,0);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7cacc(long param_1)

{
  FUN_00b7ca00(param_1 + -0x2c38);
  return;
}




void FUN_00b7cad8(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  char *pcVar9;
  
  if ((*(byte *)(param_1 + 0x2c34) >> 2 & 1) == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x90) == '\0') &&
     ((*(byte *)((long)&__DT_SYMTAB[0xffd].st_value + param_1 + 4) >> 1 & 1) == 0)) {
    return;
  }
  bVar3 = *(byte *)(param_2 + 0x28);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 0x30);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(param_2 + 0x38);
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(param_2 + 0x29);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 == 0) {
        return;
      }
      pcVar6 = (char *)(param_2 + 0x29);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *pcVar9) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        pcVar9 = pcVar9 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = memcmp(pvVar8,pcVar9,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
  }
  lVar7 = FUN_009580b8();
  bVar3 = *(byte *)(lVar7 + 0x5490);
  bVar4 = *(byte *)(param_2 + 0x28);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar7 + 0x5498);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x30);
  }
  if (sVar1 == sVar2) {
    pvVar8 = *(void **)(lVar7 + 0x54a0);
    pcVar9 = *(char **)(param_2 + 0x38);
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(lVar7 + 0x5491);
    }
    if ((bVar4 & 1) == 0) {
      pcVar9 = (char *)(param_2 + 0x29);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar6 = (char *)(lVar7 + 0x5491);
        lVar7 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar6 != *pcVar9) goto LAB_00b7cc5c;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar5 = memcmp(pvVar8,pcVar9,sVar1), iVar5 != 0)) goto LAB_00b7cc5c;
    if ((*(byte *)((long)&__DT_SYMTAB[0xffd].st_value + param_1 + 4) >> 1 & 1) == 0) {
      return;
    }
  }
LAB_00b7cc5c:
  FUN_00b94348(param_1 + 0x2c88,0);
  FUN_00b784ec(param_1 + 0x11fed0,param_2);
  FUN_00cbd514(param_1 + 0x11fed0);
  return;
}




void FUN_00b7cc98(long param_1)

{
  FUN_00b7cad8(param_1 + -0x2c38);
  return;
}




void thunk_FUN_00b7cca8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if (((((uVar2 & 1) != 0) && (uVar2 = FUN_00e84e5c(param_2), (uVar2 & 1) != 0)) &&
      ((*(byte *)((long)&__DT_SYMTAB[0xffd].st_value + param_1 + 4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    lVar3 = FUN_009580b8();
    FUN_009658c8(lVar3 + 0x18);
    uVar4 = FUN_009b8d90();
    FUN_008fa54c(abStack_50,"vainglory://PEOPLE/TEAM");
    FUN_009bb46c(uVar4,abStack_50,&DAT_0320ffa8,0,0);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7cca8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if (((((uVar2 & 1) != 0) && (uVar2 = FUN_00e84e5c(param_2), (uVar2 & 1) != 0)) &&
      ((*(byte *)((long)&__DT_SYMTAB[0xffd].st_value + param_1 + 4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    lVar3 = FUN_009580b8();
    FUN_009658c8(lVar3 + 0x18);
    uVar4 = FUN_009b8d90();
    FUN_008fa54c(local_50,"vainglory://PEOPLE/TEAM");
    FUN_009bb46c(uVar4,local_50,&DAT_0320ffa8,0,0);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7cd78(long param_1)

{
  FUN_00b7cca8(param_1 + -0x2c38);
  return;
}




void thunk_FUN_00b7cd88(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if ((((uVar2 & 1) != 0) &&
      ((*(byte *)((long)&__DT_SYMTAB[0xffd].st_value + param_1 + 4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(abStack_50,"vainglory://PEOPLE/TEAM");
    FUN_009bb46c(uVar3,abStack_50,&DAT_0320ffa8,0,0);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7cd88(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if ((((uVar2 & 1) != 0) &&
      ((*(byte *)((long)&__DT_SYMTAB[0xffd].st_value + param_1 + 4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_50,"vainglory://PEOPLE/TEAM");
    FUN_009bb46c(uVar3,local_50,&DAT_0320ffa8,0,0);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b7ce40(long param_1)

{
  FUN_00b7cd88(param_1 + -0x2c38);
  return;
}




void FUN_00b7ce4c(void)

{
  FUN_00e6ce7c("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_00b7ce6c(void)

{
  FUN_00e6ce7c("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_00b7ce8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"FRIENDS.*");
  FUN_00b1a8e8(param_2,&DAT_01bb05c4);
  FUN_00b1a8e8(param_2,"TEAM.*");
  return;
}




void thunk_FUN_00b7ce8c(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"FRIENDS.*");
  FUN_00b1a8e8(param_2,&DAT_01bb05c4);
  FUN_00b1a8e8(param_2,"TEAM.*");
  return;
}




void FUN_00b7ced8(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  byte local_50 [8];
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00b9d3a8(local_50,param_1 + 0x591);
  sVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    sVar1 = local_48;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pcVar7 = (char *)((ulong)local_50 | 1);
    pcVar9 = pcVar7;
    if ((local_50[0] & 1) != 0) {
      pcVar9 = local_40;
    }
    pcVar6 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((local_50[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar8 = -(ulong)(local_50[0] >> 1);
        do {
          if (*pcVar7 != *pcVar6) goto LAB_00b7cfa0;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00b7d06c;
    }
    if ((sVar1 != 0) && (iVar5 = memcmp(pcVar9,pcVar6,sVar1), iVar5 != 0)) goto LAB_00b7cfa0;
  }
  else {
LAB_00b7cfa0:
    lVar8 = FUN_009580b8();
    bVar3 = *(byte *)(lVar8 + 0x5478);
    sVar1 = (ulong)(local_50[0] >> 1);
    if ((local_50[0] & 1) != 0) {
      sVar1 = local_48;
    }
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(lVar8 + 0x5480);
    }
    if (sVar1 == sVar2) {
      pcVar9 = *(char **)(lVar8 + 0x5488);
      pcVar7 = (char *)((ulong)local_50 | 1);
      pcVar6 = pcVar7;
      if ((local_50[0] & 1) != 0) {
        pcVar6 = local_40;
      }
      if ((bVar3 & 1) == 0) {
        pcVar9 = (char *)(lVar8 + 0x5479);
      }
      if ((local_50[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar8 = -(ulong)(local_50[0] >> 1);
          do {
            if (*pcVar7 != *pcVar9) goto LAB_00b7d06c;
            pcVar7 = pcVar7 + 1;
            lVar8 = lVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar8 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pcVar6,pcVar9,sVar1), iVar5 != 0)) goto LAB_00b7d064;
      (**(code **)(*param_1 + 0x178))(param_1,2,&DAT_0320ffa8);
    }
    if ((local_50[0] & 1) == 0) goto LAB_00b7d06c;
  }
LAB_00b7d064:
  operator_delete(local_40);
LAB_00b7d06c:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

