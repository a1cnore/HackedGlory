// functions/00b98 — 9 functions
#include "libGameKindred.h"




void FUN_00b98510(long param_1)

{
  FUN_00b97af4(param_1 + -0x398);
  return;
}




void FUN_00b9851c(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b98634();
  lVar4 = FUN_009580b8();
  lVar5 = FUN_009580b8();
  FUN_00e70570(&local_48,lVar5 + 0x50c8);
  FUN_00b945f8(param_1,lVar4 + 0x5478,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00b988e4(param_1);
  lVar4 = FUN_009580b8();
  lVar5 = FUN_009580b8();
  FUN_00e70570(&local_48,lVar5 + 0x5308);
  FUN_00b94920(param_1,lVar4 + 0x5490,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long **)(param_1 + 0x11fb0) == (long *)0x0) {
    bVar2 = false;
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x11fb0) + 0x40))();
    bVar2 = iVar3 == 2;
  }
  *(bool *)(param_1 + 0x12673) = bVar2;
  FUN_00b98b94(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b98634(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  long lVar11;
  void *pvVar12;
  char *__s2;
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x125e0);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x125e8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar12 = *(void **)(param_1 + 0x125f0);
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x125e1);
    }
    pbVar7 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar7 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -(ulong)(bVar3 >> 1);
        pbVar8 = pbVar1;
        do {
          pbVar8 = pbVar8 + 1;
          if (*pbVar8 != *pbVar7) goto LAB_00b9870c;
          lVar11 = lVar11 + 1;
          pbVar7 = pbVar7 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00b988b8;
    }
    if ((__n == 0) || (iVar6 = memcmp(pvVar12,pbVar7,__n), iVar6 == 0)) goto LAB_00b988b8;
  }
LAB_00b9870c:
  lVar11 = *(long *)(param_1 + 0x120b0);
  if (lVar11 != 0) {
    bVar4 = *(byte *)(lVar11 + 0x3d80);
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(lVar11 + 0x3d88);
    }
    if (sVar2 == __n) {
      pvVar12 = *(void **)(lVar11 + 0x3d90);
      __s2 = *(char **)(param_1 + 0x125f0);
      if ((bVar4 & 1) == 0) {
        pvVar12 = (void *)(lVar11 + 0x3d81);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x125e1);
      }
      if ((bVar4 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(lVar11 + 0x3d81);
          lVar11 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00b987ac;
            pcVar9 = pcVar9 + 1;
            lVar11 = lVar11 + 1;
            __s2 = __s2 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((__n != 0) && (iVar6 = memcmp(pvVar12,__s2,__n), iVar6 != 0)) goto LAB_00b987ac;
      *(long *)(param_1 + 0x120b0) = 0;
    }
  }
LAB_00b987ac:
  pbVar7 = (byte *)(param_1 + 0x12638);
  bVar4 = *pbVar7;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x12640);
  }
  if (sVar2 == __n) {
    pvVar12 = *(void **)(param_1 + 0x12648);
    pbVar8 = *(byte **)(param_1 + 0x125f0);
    if ((bVar4 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x12639);
    }
    if ((bVar3 & 1) == 0) {
      pbVar8 = (byte *)(param_1 + 0x125e1);
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -(ulong)(bVar4 >> 1);
        pbVar10 = pbVar7;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar8) goto LAB_00b98858;
          lVar11 = lVar11 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(pvVar12,pbVar8,__n), iVar6 != 0)) goto LAB_00b98858;
    FUN_008fce60(pbVar7,&DAT_0320ffa8);
  }
LAB_00b98858:
  FUN_00b9cf84(param_1,pbVar1);
  if ((*pbVar1 & 1) == 0) {
    local_50 = param_1 + 0x125e1;
  }
  else {
    local_50 = *(long *)(param_1 + 0x125f0);
  }
  FUN_00b9d0a0(param_1 + 0x12580,&local_50);
  FUN_00ac33b8(param_1 + 0xdf40,pbVar1);
  FUN_008fce60(pbVar1,&DAT_0320ffa8);
LAB_00b988b8:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b988e4(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  long lVar11;
  void *pvVar12;
  char *__s2;
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x125f8);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x12600);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar12 = *(void **)(param_1 + 0x12608);
    if ((bVar3 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x125f9);
    }
    pbVar7 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar7 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -(ulong)(bVar3 >> 1);
        pbVar8 = pbVar1;
        do {
          pbVar8 = pbVar8 + 1;
          if (*pbVar8 != *pbVar7) goto LAB_00b989bc;
          lVar11 = lVar11 + 1;
          pbVar7 = pbVar7 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00b98b68;
    }
    if ((__n == 0) || (iVar6 = memcmp(pvVar12,pbVar7,__n), iVar6 == 0)) goto LAB_00b98b68;
  }
LAB_00b989bc:
  lVar11 = *(long *)(param_1 + 0x120b0);
  if (lVar11 != 0) {
    bVar4 = *(byte *)(lVar11 + 0x3d80);
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(lVar11 + 0x3d88);
    }
    if (sVar2 == __n) {
      pvVar12 = *(void **)(lVar11 + 0x3d90);
      __s2 = *(char **)(param_1 + 0x12608);
      if ((bVar4 & 1) == 0) {
        pvVar12 = (void *)(lVar11 + 0x3d81);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x125f9);
      }
      if ((bVar4 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(lVar11 + 0x3d81);
          lVar11 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00b98a5c;
            pcVar9 = pcVar9 + 1;
            lVar11 = lVar11 + 1;
            __s2 = __s2 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((__n != 0) && (iVar6 = memcmp(pvVar12,__s2,__n), iVar6 != 0)) goto LAB_00b98a5c;
      *(long *)(param_1 + 0x120b0) = 0;
    }
  }
LAB_00b98a5c:
  pbVar7 = (byte *)(param_1 + 0x12638);
  bVar4 = *pbVar7;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x12640);
  }
  if (sVar2 == __n) {
    pvVar12 = *(void **)(param_1 + 0x12648);
    pbVar8 = *(byte **)(param_1 + 0x12608);
    if ((bVar4 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x12639);
    }
    if ((bVar3 & 1) == 0) {
      pbVar8 = (byte *)(param_1 + 0x125f9);
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        lVar11 = -(ulong)(bVar4 >> 1);
        pbVar10 = pbVar7;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar8) goto LAB_00b98b08;
          lVar11 = lVar11 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(pvVar12,pbVar8,__n), iVar6 != 0)) goto LAB_00b98b08;
    FUN_008fce60(pbVar7,&DAT_0320ffa8);
  }
LAB_00b98b08:
  FUN_00b9cf84(param_1,pbVar1);
  if ((*pbVar1 & 1) == 0) {
    local_50 = param_1 + 0x125f9;
  }
  else {
    local_50 = *(long *)(param_1 + 0x12608);
  }
  FUN_00b9d0a0(param_1 + 0x12580,&local_50);
  FUN_00ac33b8(param_1 + 0xdf40,pbVar1);
  FUN_008fce60(pbVar1,&DAT_0320ffa8);
LAB_00b98b68:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b98b94(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00b9be84(param_1,param_1 + 0x125c8,0);
  FUN_00b9c524(param_1,0,0);
  FUN_00b9c524(param_1,lVar3,0);
  if (lVar3 != 0) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    if ((*(byte *)(lVar3 + 0x3d80) & 1) == 0) {
      local_58 = lVar3 + 0x3d81;
    }
    else {
      local_58 = *(long *)(lVar3 + 0x3d90);
    }
    lVar4 = FUN_00b97198(param_1 + 0x12580,&local_58);
    if (lVar4 == 0) {
      plVar5 = *(long **)(param_1 + 0x11fb0);
      if ((plVar5 == (long *)0x0) || (iVar2 = (**(code **)(*plVar5 + 0x40))(plVar5,0), iVar2 != 2))
      {
        FUN_00ac3418(param_1 + 0xdf40,lVar3 + 0x3ce0,local_50);
      }
      else {
        FUN_008fce60(local_50,(byte *)(lVar3 + 0x3d80));
      }
    }
    else {
      FUN_008fce60(local_50);
    }
    FUN_00ac1b34(param_1 + 0xdf40,local_50);
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




void FUN_00b98ce0(long param_1)

{
  FUN_00b9851c(param_1 + -0x398);
  return;
}




void FUN_00b98ce8(long param_1)

{
  FUN_008fce60(param_1 + 0x125f8,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x125e0,&DAT_0320ffa8);
  return;
}




void FUN_00b98d30(long param_1)

{
  FUN_008fce60(param_1 + 0x12260,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x12248,&DAT_0320ffa8);
  return;
}




void FUN_00b98d78(long *param_1,long param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  byte local_188 [8];
  size_t local_180;
  char *local_178;
  long local_170;
  ulong local_168;
  void *local_160;
  void *local_158;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar9 = 1;
  local_170 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_00b99110;
  lVar10 = FUN_00b97198(param_1 + 0x24b0,&local_170);
  uVar9 = 0;
  if (lVar10 == 0) goto LAB_00b99110;
  FUN_008fcdb8(local_188,lVar10);
  uVar9 = FUN_00e6ce7c("MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE",0);
  thunk_FUN_00e7051c(&local_198,uVar9);
  FUN_00e70510(&local_1a8);
  FUN_008fa54c(&local_168,param_2);
  (**(code **)(*param_1 + 0x1d8))(param_1,&local_168,&local_1a8);
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  uVar11 = FUN_00e70b34(&local_1a8,&DAT_03210450);
  if ((uVar11 & 1) != 0) {
    FUN_00e705c8(&local_168,&DAT_01baf162);
    FUN_00910394(&local_1a8,&local_168);
    if (local_160 != (void *)0x0) {
      operator_delete__(local_160);
      local_168 = 0;
      local_160 = (void *)0x0;
    }
  }
  FUN_00e705c8(&local_168,"[PLAYER_HANDLE]");
  FUN_00e71248(&local_198,0,&local_168,&local_1a8);
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
    local_168 = 0;
    local_160 = (void *)0x0;
  }
  uVar7 = FUN_00b943e0(param_1,local_188);
  if (uVar7 == 0xffffffff) {
    uVar7 = FUN_00b96740(param_1,local_188);
    FUN_00b92674(param_1);
    plVar12 = (long *)param_1[0x23f6];
    if ((plVar12 != (long *)0x0) &&
       (iVar8 = (**(code **)(*plVar12 + 0x40))(), bVar4 = local_188[0], iVar8 == 2)) {
      bVar5 = *(byte *)(param_1 + 0x24bc);
      uVar11 = (ulong)(local_188[0] >> 1);
      sVar1 = uVar11;
      if ((local_188[0] & 1) != 0) {
        sVar1 = local_180;
      }
      sVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar2 = param_1[0x24bd];
      }
      if (sVar1 == sVar2) {
        pcVar14 = (char *)param_1[0x24be];
        pcVar13 = (char *)((ulong)local_188 | 1);
        pcVar3 = pcVar13;
        if ((local_188[0] & 1) != 0) {
          pcVar3 = local_178;
        }
        if ((bVar5 & 1) == 0) {
          pcVar14 = (char *)((long)param_1 + 0x125e1);
        }
        if ((local_188[0] & 1) == 0) {
          if (sVar1 != 0) {
            lVar10 = -uVar11;
            do {
              if (*pcVar13 != *pcVar14) goto LAB_00b99150;
              pcVar13 = pcVar13 + 1;
              lVar10 = lVar10 + 1;
              pcVar14 = pcVar14 + 1;
            } while (lVar10 != 0);
LAB_00b991d4:
            pcVar13 = local_178;
            if ((bVar4 & 1) == 0) {
              pcVar13 = (char *)((ulong)local_188 | 1);
            }
          }
        }
        else {
          pcVar13 = local_178;
          if ((sVar1 != 0) && (iVar8 = memcmp(pcVar3,pcVar14,sVar1), iVar8 != 0)) goto LAB_00b99150;
        }
      }
      else {
LAB_00b99150:
        bVar5 = *(byte *)(param_1 + 0x24bf);
        sVar2 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar2 = param_1[0x24c0];
        }
        if (sVar1 != sVar2) goto LAB_00b98ec4;
        pcVar14 = (char *)param_1[0x24c1];
        pcVar13 = (char *)((ulong)local_188 | 1);
        pcVar3 = pcVar13;
        if ((bVar4 & 1) != 0) {
          pcVar3 = local_178;
        }
        if ((bVar5 & 1) == 0) {
          pcVar14 = (char *)((long)param_1 + 0x125f9);
        }
        if ((bVar4 & 1) == 0) {
          if (sVar1 != 0) {
            lVar10 = -uVar11;
            do {
              if (*pcVar13 != *pcVar14) goto LAB_00b98ec4;
              pcVar13 = pcVar13 + 1;
              lVar10 = lVar10 + 1;
              pcVar14 = pcVar14 + 1;
            } while (lVar10 != 0);
            goto LAB_00b991d4;
          }
        }
        else {
          pcVar13 = local_178;
          if ((sVar1 != 0) && (iVar8 = memcmp(pcVar3,pcVar14,sVar1), iVar8 != 0)) goto LAB_00b98ec4;
        }
      }
      plVar12 = (long *)param_1[0x23f6];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x80))(plVar12,pcVar13,200);
      }
    }
  }
LAB_00b98ec4:
  lVar10 = FUN_00e85318(0);
  FUN_00e6c2cc((double)lVar10,&local_168,0x100);
  if (uVar7 != 0xffffffff) {
    FUN_00b96b18(param_1[0x24af] + (ulong)uVar7 * 0x50,&local_198,&DAT_01e277f2,&local_168,0,1);
  }
  bVar4 = *(byte *)(param_1 + 0x24b9);
  sVar1 = (ulong)(local_188[0] >> 1);
  if ((local_188[0] & 1) != 0) {
    sVar1 = local_180;
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = param_1[0x24ba];
  }
  if (sVar1 == sVar2) {
    pcVar14 = (char *)param_1[0x24bb];
    pcVar13 = (char *)((ulong)local_188 | 1);
    pcVar3 = pcVar13;
    if ((local_188[0] & 1) != 0) {
      pcVar3 = local_178;
    }
    if ((bVar4 & 1) == 0) {
      pcVar14 = (char *)((long)param_1 + 0x125c9);
    }
    if ((local_188[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar10 = -(ulong)(local_188[0] >> 1);
        do {
          if (*pcVar13 != *pcVar14) goto LAB_00b990dc;
          pcVar13 = pcVar13 + 1;
          lVar10 = lVar10 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar8 = memcmp(pcVar3,pcVar14,sVar1), iVar8 != 0)) goto LAB_00b990dc;
    FUN_00e70570(&local_1b8,&DAT_0320ffa8);
    FUN_00ac1474(param_1 + 0x1be8,&local_198,&local_1b8,&local_168,0,1);
    if (local_1b0 != (void *)0x0) {
      operator_delete__(local_1b0);
      local_1b8 = 0;
      local_1b0 = (void *)0x0;
    }
  }
LAB_00b990dc:
  if (local_1a0 != (void *)0x0) {
    operator_delete__(local_1a0);
    local_1a8 = 0;
    local_1a0 = (void *)0x0;
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
    local_198 = 0;
    local_190 = (void *)0x0;
  }
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  uVar9 = 1;
LAB_00b99110:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

