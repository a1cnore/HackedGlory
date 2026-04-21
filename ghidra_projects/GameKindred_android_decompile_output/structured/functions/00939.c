// functions/00939 — 11 functions
#include "libGameKindred.h"




undefined8 FUN_00939010(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_008fce60(param_1,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (param_2 != 0) {
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_008fce60(param_2,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009390d0(long param_1,undefined4 *param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_008fce60(param_1,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093915c(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  byte local_248 [16];
  void *local_238;
  byte local_230 [16];
  void *local_220;
  byte local_218 [16];
  void *local_208;
  byte local_200 [16];
  void *local_1f0;
  byte local_1e8 [8];
  size_t local_1e0;
  char *local_1d8;
  byte local_1d0 [8];
  size_t local_1c8;
  char *local_1c0;
  byte local_1b8 [8];
  size_t local_1b0;
  char *local_1a8;
  byte local_1a0 [8];
  size_t local_198;
  char *local_190;
  byte local_188 [16];
  char *local_178;
  char acStack_170 [256];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  FUN_00937800(local_188);
  pcVar8 = (char *)((ulong)local_188 | 1);
  if ((local_188[0] & 1) != 0) {
    pcVar8 = local_178;
  }
  strcpy(acStack_170,pcVar8);
  FUN_008fcdb8(local_1a0,&DAT_0320ffa8);
  FUN_008fcdb8(local_1b8,&DAT_0320ffa8);
  FUN_008fcdb8(local_1d0,&DAT_0320ffa8);
  FUN_008fcdb8(local_1e8,&DAT_0320ffa8);
  if (param_2 != 0) {
    uVar6 = FUN_009580b8();
    FUN_008fa54c(local_200,"newsUrl");
    FUN_0095f814(uVar6,local_200,local_1a0);
    if ((local_200[0] & 1) != 0) {
      operator_delete(local_1f0);
    }
  }
  if (param_3 != 0) {
    uVar6 = FUN_009580b8();
    FUN_008fa54c(local_200,"academyUrl");
    FUN_0095f814(uVar6,local_200,local_1b8);
    if ((local_200[0] & 1) != 0) {
      operator_delete(local_1f0);
    }
  }
  if (param_4 != 0) {
    uVar6 = FUN_009580b8();
    FUN_008fa54c(local_200,"marketUrl");
    FUN_0095f814(uVar6,local_200,local_1d0);
    if ((local_200[0] & 1) != 0) {
      operator_delete(local_1f0);
    }
  }
  if (param_6 != 0) {
    uVar6 = FUN_009580b8();
    FUN_008fa54c(local_200,"staticContentUrl");
    FUN_0095f814(uVar6,local_200,local_1e8);
    if ((local_200[0] & 1) != 0) {
      operator_delete(local_1f0);
    }
  }
  if (param_1 != 0) {
    FUN_008fa54c(local_218,"Updates");
    FUN_008fa54c(local_230,"appurl");
    FUN_008fa54c(local_248,
                 "https://play.google.com/store/apps/details?id=com.superevilmegacorp.game");
    FUN_00e6bac8(local_200,acStack_170,local_218,local_230,local_248);
    FUN_008fce60(param_1,local_200);
    if ((local_200[0] & 1) != 0) {
      operator_delete(local_1f0);
    }
    if ((local_248[0] & 1) != 0) {
      operator_delete(local_238);
    }
    if ((local_230[0] & 1) != 0) {
      operator_delete(local_220);
    }
    if ((local_218[0] & 1) != 0) {
      operator_delete(local_208);
    }
  }
  if (param_5 != 0) {
    FUN_008fa54c(local_200,"http://gamefeeds.superevilmegacorp.net/server-status-redirect.[LANG]");
    FUN_008fce60(param_5,local_200);
    if ((local_200[0] & 1) != 0) {
      operator_delete(local_1f0);
    }
  }
  if (param_2 != 0) {
    sVar1 = (ulong)(local_1a0[0] >> 1);
    if ((local_1a0[0] & 1) != 0) {
      sVar1 = local_198;
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pcVar8 = (char *)((ulong)local_1a0 | 1);
      pcVar3 = pcVar8;
      if ((local_1a0[0] & 1) != 0) {
        pcVar3 = local_190;
      }
      pcVar7 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar7 = &DAT_0320ffa9;
      }
      if ((local_1a0[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar9 = -(ulong)(local_1a0[0] >> 1);
          do {
            if (*pcVar8 != *pcVar7) goto LAB_00939448;
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            pcVar7 = pcVar7 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pcVar3,pcVar7,sVar1), iVar5 != 0)) goto LAB_00939448;
    }
    else {
LAB_00939448:
      FUN_008fce60(param_2,local_1a0);
    }
  }
  if (param_3 != 0) {
    sVar1 = (ulong)(local_1b8[0] >> 1);
    if ((local_1b8[0] & 1) != 0) {
      sVar1 = local_1b0;
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pcVar8 = (char *)((ulong)local_1b8 | 1);
      pcVar3 = pcVar8;
      if ((local_1b8[0] & 1) != 0) {
        pcVar3 = local_1a8;
      }
      pcVar7 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar7 = &DAT_0320ffa9;
      }
      if ((local_1b8[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar9 = -(ulong)(local_1b8[0] >> 1);
          do {
            if (*pcVar8 != *pcVar7) goto LAB_009394e4;
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            pcVar7 = pcVar7 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pcVar3,pcVar7,sVar1), iVar5 != 0)) goto LAB_009394e4;
    }
    else {
LAB_009394e4:
      FUN_008fce60(param_3,local_1b8);
    }
  }
  if (param_4 != 0) {
    sVar1 = (ulong)(local_1d0[0] >> 1);
    if ((local_1d0[0] & 1) != 0) {
      sVar1 = local_1c8;
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pcVar8 = (char *)((ulong)local_1d0 | 1);
      pcVar3 = pcVar8;
      if ((local_1d0[0] & 1) != 0) {
        pcVar3 = local_1c0;
      }
      pcVar7 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar7 = &DAT_0320ffa9;
      }
      if ((local_1d0[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar9 = -(ulong)(local_1d0[0] >> 1);
          do {
            if (*pcVar8 != *pcVar7) goto LAB_00939580;
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            pcVar7 = pcVar7 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar5 = memcmp(pcVar3,pcVar7,sVar1), iVar5 != 0)) goto LAB_00939580;
    }
    else {
LAB_00939580:
      FUN_008fce60(param_4,local_1d0);
    }
  }
  if (param_6 == 0) goto LAB_00939628;
  sVar1 = (ulong)(local_1e8[0] >> 1);
  if ((local_1e8[0] & 1) != 0) {
    sVar1 = local_1e0;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pcVar8 = (char *)((ulong)local_1e8 | 1);
    pcVar3 = pcVar8;
    if ((local_1e8[0] & 1) != 0) {
      pcVar3 = local_1d8;
    }
    pcVar7 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar7 = &DAT_0320ffa9;
    }
    if ((local_1e8[0] & 1) == 0) {
      if (sVar1 != 0) {
        lVar9 = -(ulong)(local_1e8[0] >> 1);
        do {
          if (*pcVar8 != *pcVar7) goto LAB_0093961c;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00939628;
    }
    if ((sVar1 == 0) || (iVar5 = memcmp(pcVar3,pcVar7,sVar1), iVar5 == 0)) goto LAB_00939628;
  }
LAB_0093961c:
  FUN_008fce60(param_6,local_1e8);
LAB_00939628:
  if ((((param_2 != 0) || (param_3 != 0)) || (param_4 != 0)) || (param_5 != 0)) {
    if (param_2 != 0) {
      FUN_009396ec(param_2);
    }
    if (param_3 != 0) {
      FUN_009396ec(param_3);
    }
    if (param_4 != 0) {
      FUN_009396ec(param_4);
    }
    if (param_5 != 0) {
      FUN_009396ec(param_5);
    }
  }
  if ((local_1e8[0] & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_1d0[0] & 1) != 0) {
    operator_delete(local_1c0);
  }
  if ((local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009396ec(byte *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_1;
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar8 = *(byte **)(param_1 + 0x10);
  uVar10 = (ulong)(bVar3 >> 1);
  bVar9 = bVar3 & 1;
  pbVar1 = pbVar8;
  uVar5 = uVar7;
  if ((bVar3 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar5 = uVar10;
  }
  if (uVar5 != 0) {
    pbVar11 = pbVar1;
    do {
      lVar12 = 0;
      do {
        if (*pbVar11 ==
            "http://gamefeeds.superevilmegacorp.net/server-status-redirect.[LANG]"[lVar12 + 0x3e]) {
          if ((pbVar11 != pbVar1 + uVar5) && ((long)pbVar11 - (long)pbVar1 != -1)) {
            FUN_008fa54c(local_50,"[LANG]");
            uVar6 = FUN_00939a50();
            FUN_008fa54c(local_68,uVar6);
            FUN_00937db8(param_1,local_50,local_68);
            if ((local_68[0] & 1) != 0) {
              operator_delete(local_58);
            }
            if ((local_50[0] & 1) != 0) {
              operator_delete(local_40);
            }
            uVar7 = *(ulong *)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
            bVar9 = *param_1 & 1;
            uVar10 = (ulong)(*param_1 >> 1);
          }
          goto LAB_009397e8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 6);
      pbVar11 = pbVar11 + 1;
    } while (pbVar11 != pbVar1 + uVar5);
  }
LAB_009397e8:
  pbVar1 = param_1 + 1;
  uVar5 = uVar10;
  if (bVar9 != 0) {
    pbVar1 = pbVar8;
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    pbVar11 = pbVar1;
    do {
      lVar12 = 0;
      do {
        if (*pbVar11 == "[REGION]"[lVar12]) {
          if ((pbVar11 != pbVar1 + uVar5) && ((long)pbVar11 - (long)pbVar1 != -1)) {
            lVar12 = FUN_00966db0();
            if (lVar12 == 0) {
              lVar12 = FUN_00966df8();
            }
            FUN_008fa54c(local_50,"[REGION]");
            FUN_008fa54c(local_68,lVar12);
            FUN_00937db8(param_1,local_50,local_68);
            if ((local_68[0] & 1) != 0) {
              operator_delete(local_58);
            }
            if ((local_50[0] & 1) != 0) {
              operator_delete(local_40);
            }
            uVar7 = *(ulong *)(param_1 + 8);
            pbVar8 = *(byte **)(param_1 + 0x10);
            bVar9 = *param_1 & 1;
            uVar10 = (ulong)(*param_1 >> 1);
          }
          goto LAB_009398bc;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 8);
      pbVar11 = pbVar11 + 1;
    } while (pbVar11 != pbVar1 + uVar5);
  }
LAB_009398bc:
  pbVar1 = param_1 + 1;
  if (bVar9 != 0) {
    pbVar1 = pbVar8;
    uVar10 = uVar7;
  }
  if (uVar10 != 0) {
    pbVar8 = pbVar1;
    do {
      lVar12 = 0;
      do {
        if (*pbVar8 == "[STATICCONTENTURL]"[lVar12]) {
          if ((pbVar8 != pbVar1 + uVar10) && ((long)pbVar8 - (long)pbVar1 != -1)) {
            local_50[0] = 0;
            local_50[1] = 0;
            local_40 = (void *)0x0;
            FUN_0093915c(0,0,0,0,0,local_50);
            FUN_008fa54c(local_68,"[STATICCONTENTURL]");
            pvVar2 = (void *)((ulong)local_50 | 1);
            if ((local_50[0] & 1) != 0) {
              pvVar2 = local_40;
            }
            FUN_008fa54c(local_80,pvVar2);
            FUN_00937db8(param_1,local_68,local_80);
            if ((local_80[0] & 1) != 0) {
              operator_delete(local_70);
            }
            if ((local_68[0] & 1) != 0) {
              operator_delete(local_58);
            }
            if ((local_50[0] & 1) != 0) {
              operator_delete(local_40);
            }
          }
          goto LAB_009399b4;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x12);
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 != pbVar1 + uVar10);
  }
LAB_009399b4:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009399dc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x3f800000;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0x3f800000;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x3f800000;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0x42c80000;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 0;
  }
  return;
}




void FUN_00939a30(long param_1)

{
  if (param_1 != 0) {
    FUN_008fce60(param_1,&DAT_0320ffa8);
  }
  return;
}




char * FUN_00939a50(void)

{
  int iVar1;
  
  iVar1 = FUN_0092ec00();
  if (iVar1 - 1U < 0x10) {
    return (&PTR_DAT_027ba920)[(int)(iVar1 - 1U)];
  }
  return "en";
}




void FUN_00939a8c(byte *param_1,undefined8 param_2)

{
  char *__src;
  void *pvVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte local_1e8 [16];
  void *local_1d8;
  byte local_1d0 [16];
  void *local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  byte local_1a0 [16];
  void *local_190;
  byte local_188 [16];
  char *local_178;
  char acStack_148 [256];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00936f18(local_188);
  __src = (char *)((ulong)local_188 | 1);
  if ((local_188[0] & 1) != 0) {
    __src = local_178;
  }
  strcpy(acStack_148,__src);
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  FUN_008fff20(local_188,&DAT_01b95673,param_2);
  FUN_008fa54c(local_1a0,"feedTabLastVisited_");
  uVar2 = *(ulong *)(param_1 + 8);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar2 = (ulong)(*param_1 >> 1);
  }
  FUN_0090de84(local_1a0,pbVar3,uVar2);
  FUN_00937044(local_1d0);
  pvVar1 = (void *)((ulong)local_1d0 | 1);
  if ((local_1d0[0] & 1) != 0) {
    pvVar1 = local_1c0;
  }
  FUN_008fa54c(local_1b8,pvVar1);
  FUN_008fa54c(local_1e8,local_188);
  FUN_00e6bd24(acStack_148,local_1b8,local_1a0,local_1e8);
  if ((local_1e8[0] & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_1d0[0] & 1) != 0) {
    operator_delete(local_1c0);
  }
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00939be8(byte *param_1)

{
  char *__src;
  void *pvVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  ulong local_180 [2];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  FUN_008fa54c(local_150,"feedTabLastVisited_");
  uVar2 = *(ulong *)(param_1 + 8);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar2 = (ulong)(*param_1 >> 1);
  }
  FUN_0090de84(local_150,pbVar3,uVar2);
  FUN_00937044(local_198);
  pvVar1 = (void *)((ulong)local_198 | 1);
  if ((local_198[0] & 1) != 0) {
    pvVar1 = local_188;
  }
  FUN_008fa54c(local_180,pvVar1);
  FUN_008fa54c(local_1b0,"0");
  FUN_00e6bac8(local_168,acStack_138,local_180,local_150,local_1b0);
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6acac(pvVar1,&DAT_01b95673,local_180);
  if (local_180[0] == 0) {
    local_180[0] = FUN_00e85318(0);
  }
  uVar2 = local_180[0];
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00939d80(undefined8 param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  char *local_168;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_178);
  __src = (char *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    __src = local_168;
  }
  strcpy(acStack_138,__src);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  FUN_008fff20(local_178,&DAT_01b95673,param_1);
  FUN_008fa54c(local_190,"eventsPopupLastVisited");
  FUN_00937044(local_1c0);
  pvVar1 = (void *)((ulong)local_1c0 | 1);
  if ((local_1c0[0] & 1) != 0) {
    pvVar1 = local_1b0;
  }
  FUN_008fa54c(local_1a8,pvVar1);
  FUN_008fa54c(local_1d8,local_178);
  FUN_00e6bd24(acStack_138,local_1a8,local_190,local_1d8);
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00939eb0(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  ulong local_180 [2];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  FUN_008fa54c(local_150,"eventsPopupLastVisited");
  FUN_00937044(local_198);
  pvVar1 = (void *)((ulong)local_198 | 1);
  if ((local_198[0] & 1) != 0) {
    pvVar1 = local_188;
  }
  FUN_008fa54c(local_180,pvVar1);
  FUN_008fa54c(local_1b0,"0");
  FUN_00e6bac8(local_168,acStack_138,local_180,local_150,local_1b0);
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6acac(pvVar1,&DAT_01b95673,local_180);
  if (local_180[0] == 0) {
    local_180[0] = FUN_00e85318(0);
  }
  uVar3 = local_180[0];
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

