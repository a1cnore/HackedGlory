// functions/00b3a — 7 functions
#include "libGameKindred.h"




void FUN_00b3a018(void)

{
  return;
}




void FUN_00b3a01c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b3a024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b3a028(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b3a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b3a034(void)

{
  return;
}




void FUN_00b3a038(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s1;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  void *pvVar17;
  byte *pbVar18;
  char *pcVar19;
  size_t sVar20;
  ulong uVar21;
  uint local_cc;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar3 = *(byte *)(param_2 + 0x180);
  uVar21 = (ulong)bVar3;
  sVar20 = *(size_t *)(param_2 + 0x188);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = sVar20;
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar17 = *(void **)(param_2 + 400);
    if ((bVar3 & 1) == 0) {
      pvVar17 = (void *)(param_2 + 0x181);
    }
    pbVar11 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar11 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pbVar13 = (byte *)(param_2 + 0x181);
        lVar16 = -(ulong)(bVar3 >> 1);
        do {
          if (*pbVar13 != *pbVar11) goto LAB_00b3a10c;
          pbVar13 = pbVar13 + 1;
          lVar16 = lVar16 + 1;
          pbVar11 = pbVar11 + 1;
        } while (lVar16 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pvVar17,pbVar11,sVar2), iVar8 != 0)) goto LAB_00b3a10c;
LAB_00b3a194:
    bVar6 = false;
  }
  else {
LAB_00b3a10c:
    lVar16 = FUN_009580b8();
    bVar3 = *(byte *)(param_2 + 0x180);
    uVar21 = (ulong)bVar3;
    sVar20 = *(size_t *)(param_2 + 0x188);
    bVar4 = *(byte *)(lVar16 + 0x5478);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = sVar20;
    }
    sVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(lVar16 + 0x5480);
    }
    if (sVar2 != sVar1) goto LAB_00b3a194;
    pvVar17 = *(void **)(param_2 + 400);
    pcVar19 = *(char **)(lVar16 + 0x5488);
    if ((bVar3 & 1) == 0) {
      pvVar17 = (void *)(param_2 + 0x181);
    }
    if ((bVar4 & 1) == 0) {
      pcVar19 = (char *)(lVar16 + 0x5479);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar15 = (char *)(param_2 + 0x181);
        lVar16 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar15 != *pcVar19) goto LAB_00b3a194;
          pcVar15 = pcVar15 + 1;
          lVar16 = lVar16 + 1;
          pcVar19 = pcVar19 + 1;
        } while (lVar16 != 0);
      }
LAB_00b3a1b0:
      bVar6 = true;
    }
    else {
      if (sVar2 == 0) goto LAB_00b3a1b0;
      iVar8 = memcmp(pvVar17,pcVar19,sVar2);
      bVar6 = iVar8 == 0;
    }
  }
  if (*(char *)(param_2 + 0x1d0) == '\0') {
    bVar3 = *(byte *)(param_1 + 0x20be);
    sVar2 = uVar21 >> 1;
    if ((uVar21 & 1) != 0) {
      sVar2 = sVar20;
    }
    sVar20 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar20 = param_1[0x20bf];
    }
    if (sVar2 == sVar20) {
      pvVar17 = *(void **)(param_2 + 400);
      pcVar19 = (char *)param_1[0x20c0];
      if ((uVar21 & 1) == 0) {
        pvVar17 = (void *)(param_2 + 0x181);
      }
      if ((bVar3 & 1) == 0) {
        pcVar19 = (char *)((long)param_1 + 0x105f1);
      }
      if ((uVar21 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar15 = (char *)(param_2 + 0x181);
          lVar16 = -(uVar21 >> 1);
          do {
            if (*pcVar15 != *pcVar19) goto LAB_00b3a418;
            pcVar15 = pcVar15 + 1;
            lVar16 = lVar16 + 1;
            pcVar19 = pcVar19 + 1;
          } while (lVar16 != 0);
        }
      }
      else if (sVar2 != 0) {
        iVar8 = memcmp(pvVar17,pcVar19,sVar2);
        bVar7 = iVar8 != 0;
        goto LAB_00b3a780;
      }
    }
    else {
LAB_00b3a418:
      bVar7 = true;
LAB_00b3a780:
      if (!(bool)(bVar6 | bVar7 ^ 1U)) goto LAB_00b3a820;
    }
  }
  FUN_00e70570(&local_78,param_2 + 0x40);
  FUN_00f0d75c(param_1 + 0x19,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00e70570(&local_78,param_2 + 0x58);
  FUN_00ac5fdc(param_1 + 0x3f,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_008fce60(param_1 + 0x20be,param_2 + 0x180);
  uVar9 = FUN_00e6ce7c("MENU_PROFILE_GUILD_MEMBER_COUNT",0);
  thunk_FUN_00e7051c(&local_78,uVar9);
  FUN_00e70510(&local_88);
  FUN_00e70e18(&local_88,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x88));
  FUN_00e705c8(&local_98,"[NUM_MEMBERS]");
  FUN_00e71248(&local_78,0,&local_98,&local_88);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  FUN_00e70510(&local_98);
  FUN_00e70e18(&local_98,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x8c));
  FUN_00e705c8(&local_a8,"[MAX_MEMBERS]");
  FUN_00e71248(&local_78,0,&local_a8,&local_98);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x441,&local_78);
  bVar3 = *(byte *)(param_2 + 0x40);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x48);
  }
  sVar20 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar20 = DAT_0320ffb0;
  }
  if (sVar2 == sVar20) {
    pvVar17 = *(void **)(param_2 + 0x50);
    if ((bVar3 & 1) == 0) {
      pvVar17 = (void *)(param_2 + 0x41);
    }
    pbVar11 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar11 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pbVar13 = (byte *)(param_2 + 0x41);
        lVar16 = -(ulong)(bVar3 >> 1);
        do {
          if (*pbVar13 != *pbVar11) goto LAB_00b3a42c;
          pbVar13 = pbVar13 + 1;
          lVar16 = lVar16 + 1;
          pbVar11 = pbVar11 + 1;
        } while (lVar16 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pvVar17,pbVar11,sVar2), iVar8 != 0)) goto LAB_00b3a42c;
    *(undefined1 *)(param_1 + 0x20c1) = 0;
  }
  else {
LAB_00b3a42c:
    FUN_00b38b80(param_1);
    *(undefined4 *)(param_1 + 0x20bd) = 1;
    FUN_009580b8();
    uVar9 = FUN_0095fdf0();
    thunk_FUN_00e7051c(&local_a8,uVar9);
    uVar12 = *(uint *)(param_2 + 0x1d8);
    if (uVar12 == 0) {
      local_cc = 0xffffffff;
    }
    else {
      uVar21 = 0;
      pbVar11 = (byte *)((long)param_1 + 0x105d1);
      local_cc = 0xffffffff;
      do {
        uVar10 = FUN_00e70b34(*(long *)(param_2 + 0x1e0) + uVar21 * 0x108 + 0x18,&local_a8);
        lVar16 = *(long *)(param_2 + 0x1e0);
        if ((uVar10 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x20bd) = *(undefined4 *)(lVar16 + uVar21 * 0x108 + 0x50);
        }
        FUN_00b3a854(param_1,lVar16 + uVar21 * 0x108,0);
        bVar3 = *(byte *)(param_1 + 0x20ba);
        uVar10 = (ulong)(bVar3 >> 1);
        sVar2 = uVar10;
        if ((bVar3 & 1) != 0) {
          sVar2 = param_1[0x20bb];
        }
        sVar20 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar20 = DAT_0320ffb0;
        }
        if (sVar2 == sVar20) {
          pbVar13 = pbVar11;
          if ((bVar3 & 1) != 0) {
            pbVar13 = (byte *)param_1[0x20bc];
          }
          pbVar18 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            pbVar18 = &DAT_0320ffa9;
          }
          if ((bVar3 & 1) == 0) {
            if (sVar2 != 0) {
              lVar16 = -uVar10;
              pbVar13 = pbVar11;
              do {
                if (*pbVar13 != *pbVar18) goto LAB_00b3a5a4;
                pbVar13 = pbVar13 + 1;
                lVar16 = lVar16 + 1;
                pbVar18 = pbVar18 + 1;
              } while (lVar16 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pbVar13,pbVar18,sVar2), iVar8 != 0))
          goto LAB_00b3a5a4;
        }
        else {
LAB_00b3a5a4:
          lVar16 = *(long *)(param_2 + 0x1e0);
          pbVar13 = (byte *)(lVar16 + uVar21 * 0x108);
          bVar4 = *pbVar13;
          sVar20 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar20 = *(size_t *)(pbVar13 + 8);
          }
          if (sVar2 == sVar20) {
            pbVar18 = *(byte **)(lVar16 + uVar21 * 0x108 + 0x10);
            __s1 = pbVar11;
            if ((bVar3 & 1) != 0) {
              __s1 = (byte *)param_1[0x20bc];
            }
            if ((bVar4 & 1) == 0) {
              pbVar18 = pbVar13 + 1;
            }
            if ((bVar3 & 1) == 0) {
              if (sVar2 != 0) {
                lVar14 = -uVar10;
                pbVar13 = pbVar11;
                do {
                  if (*pbVar13 != *pbVar18) goto LAB_00b3a654;
                  pbVar13 = pbVar13 + 1;
                  lVar14 = lVar14 + 1;
                  pbVar18 = pbVar18 + 1;
                } while (lVar14 != 0);
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(__s1,pbVar18,sVar2), iVar8 != 0))
            goto LAB_00b3a654;
            if (*(char *)(lVar16 + uVar21 * 0x108 + 0x102) != '\0') {
              local_cc = (uint)uVar21;
            }
          }
        }
LAB_00b3a654:
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar12);
    }
    lVar16 = FUN_009580b8();
    if ((int)*(uint *)(lVar16 + 0x5634) < 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint)(*(int *)(*(long *)(lVar16 + 0x5268) +
                               (ulong)*(uint *)(lVar16 + 0x5634) * 0x108 + 0x50) == 4) << 2;
    }
    *(uint *)((long)param_1 + 0x397c) = *(uint *)((long)param_1 + 0x397c) & 0xfffffffb | uVar12;
    lVar16 = FUN_009580b8();
    bVar3 = *(byte *)(lVar16 + 0x5478);
    bVar4 = *(byte *)(param_2 + 0x180);
    sVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(lVar16 + 0x5480);
    }
    sVar20 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar20 = *(size_t *)(param_2 + 0x188);
    }
    bVar6 = false;
    if (sVar2 == sVar20) {
      pvVar17 = *(void **)(lVar16 + 0x5488);
      pcVar19 = *(char **)(param_2 + 400);
      if ((bVar3 & 1) == 0) {
        pvVar17 = (void *)(lVar16 + 0x5479);
      }
      if ((bVar4 & 1) == 0) {
        pcVar19 = (char *)(param_2 + 0x181);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar15 = (char *)(lVar16 + 0x5479);
          lVar16 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar15 != *pcVar19) {
              bVar6 = false;
              goto LAB_00b3a798;
            }
            pcVar15 = pcVar15 + 1;
            lVar16 = lVar16 + 1;
            pcVar19 = pcVar19 + 1;
          } while (lVar16 != 0);
        }
      }
      else if (sVar2 != 0) {
        iVar8 = memcmp(pvVar17,pcVar19,sVar2);
        bVar6 = iVar8 == 0;
        goto LAB_00b3a798;
      }
      bVar6 = true;
    }
LAB_00b3a798:
    *(bool *)(param_1 + 0x20c1) = bVar6;
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
    if (-1 < (int)local_cc) {
      FUN_00b3adf0(*(undefined8 *)(param_1[0x3fc] + (ulong)local_cc * 8));
      FUN_008fce60(param_1 + 0x20ba,&DAT_0320ffa8);
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1);
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
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
LAB_00b3a820:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b3a854(void *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  code *local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((param_2 == 0) && ((param_3 & 1) == 0)) goto LAB_00b3adc0;
  pvVar6 = operator_new(0x25b8);
  FUN_00b3c9f0();
  local_90 = pvVar6;
  FUN_008fce60((long)pvVar6 + 0x2580,param_2);
  FUN_00f0d75c((long)pvVar6 + 0x178,param_2 + 0x18);
  FUN_008fce60((long)pvVar6 + 0x2598,param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((long)pvVar6 + 0x25b0) = uVar3;
  switch(uVar3) {
  case 0:
    pcVar7 = "MENU_PROFILE_GUILD_ROLE_Initiate";
    break;
  case 1:
    pcVar7 = "MENU_PROFILE_GUILD_ROLE_MEMBER";
    break;
  case 2:
    pcVar7 = "MENU_PROFILE_GUILD_ROLE_VETERAN";
    break;
  case 3:
    uVar9 = FUN_00e6ce7c("MENU_GUILD_MEMBERS_ROLE_OFFICER",0);
    FUN_00f0d75c((long)pvVar6 + 0x2a8,uVar9);
    pcVar7 = "generic_guild_officer";
    goto LAB_00b3a99c;
  case 4:
    uVar9 = FUN_00e6ce7c("MENU_PROFILE_GUILD_ROLE_CAPTAIN",0);
    FUN_00f0d75c((long)pvVar6 + 0x2a8,uVar9);
    pcVar7 = "generic_crown";
LAB_00b3a99c:
    FUN_00f0e578((long)pvVar6 + 0x88,pcVar7);
    uVar5 = *(uint *)((long)pvVar6 + 0x10c) | 4;
    goto LAB_00b3a9a8;
  default:
    goto switchD_00b3a8f0_default;
  }
  uVar9 = FUN_00e6ce7c(pcVar7,0);
  FUN_00f0d75c((long)pvVar6 + 0x2a8,uVar9);
  uVar5 = *(uint *)((long)pvVar6 + 0x10c) & 0xfffffffb;
LAB_00b3a9a8:
  *(uint *)((long)pvVar6 + 0x10c) = uVar5;
switchD_00b3a8f0_default:
  FUN_00e70510(&local_a0);
  FUN_00e70e18(&local_a0,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x4c));
  (**(code **)(*(long *)((long)local_90 + 0x3d8) + 0x138))((long)local_90 + 0x3d8,&local_a0);
  pvVar6 = local_90;
  lVar1 = (long)local_90 + 0x508;
  FUN_00e705c8(&local_88,&DAT_01e277f2);
  (**(code **)(*(long *)((long)pvVar6 + 0x508) + 0x138))(lVar1,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = (code *)0x0;
    local_80 = (void *)0x0;
  }
  lVar1 = (long)local_90 + 0xeb8;
  *(uint *)((long)local_90 + 0xd5c) =
       *(uint *)((long)local_90 + 0xd5c) & 0xfffffffb | (uint)*(byte *)(param_2 + 0x102) << 2;
  *(uint *)((long)local_90 + 0xe4c) =
       *(uint *)((long)local_90 + 0xe4c) & 0xfffffffb |
       ((uint)*(byte *)(param_2 + 0x102) << 2 ^ 4) & 0xfc;
  lVar8 = FUN_00969248();
  FUN_00b09454(lVar1,*(int *)(lVar8 + 0x38) < 1);
  pvVar6 = local_90;
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  lVar1 = (long)local_90 + 0x638;
  FUN_00e705c8(&local_88,&DAT_01e277f2);
  (**(code **)(*(long *)((long)pvVar6 + 0x638) + 0x138))(lVar1,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = (code *)0x0;
    local_80 = (void *)0x0;
  }
  FUN_00b1d77c((long)local_90 + 0x1408,uVar3);
  pvVar6 = local_90;
  uVar3 = *(undefined4 *)(param_2 + 0xa0);
  lVar1 = (long)local_90 + 0x768;
  FUN_00e705c8(&local_88,&DAT_01e277f2);
  (**(code **)(*(long *)((long)pvVar6 + 0x768) + 0x138))(lVar1,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = (code *)0x0;
    local_80 = (void *)0x0;
  }
  FUN_00b1d77c((long)local_90 + 0x17d8,uVar3);
  FUN_00b1eae8((long)local_90 + 0x1128,*(undefined4 *)(param_2 + 0x60));
  uVar9 = FUN_00e6ce7c("MENU_GUILD_VALUE_STATUS",0);
  thunk_FUN_00e7051c(&local_b0,uVar9);
  plVar2 = (long *)((long)local_90 + 0x898);
  if (*(int *)(param_2 + 0x44) < 1) {
    uVar9 = FUN_00e6ce7c("MENU_GUILD_STATUS_NEVER_PLAYED",0);
    (**(code **)(*plVar2 + 0x138))(plVar2,uVar9);
  }
  else {
    FUN_00cb55c0(&local_88,&local_b0,(long)*(int *)(param_2 + 0x44),1);
    (**(code **)(*plVar2 + 0x138))(plVar2,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = (code *)0x0;
      local_80 = (void *)0x0;
    }
  }
  switch(*(undefined4 *)(param_2 + 0x48)) {
  case 0:
    lVar1 = (long)local_90 + 0xab8;
    uVar9 = FUN_00e6ce7c("MENU_GUILD_AVAILABILITY_OFFLINE",0);
    FUN_00f0d75c(lVar1,uVar9);
    puVar10 = (undefined4 *)&DAT_01bee7fe;
    break;
  case 1:
    lVar1 = (long)local_90 + 0xab8;
    uVar9 = FUN_00e6ce7c("MENU_GUILD_AVAILABILITY_ONLINE",0);
    FUN_00f0d75c(lVar1,uVar9);
    puVar10 = &DAT_01bee806;
    break;
  case 2:
    lVar1 = (long)local_90 + 0xab8;
    uVar9 = FUN_00e6ce7c("MENU_GUILD_AVAILABILITY_BUSY_IN_GAME",0);
    FUN_00f0d75c(lVar1,uVar9);
    puVar10 = &DAT_01bee802;
    break;
  case 3:
    pcVar7 = "MENU_GUILD_AVAILABILITY_BUSY_IN_PARTY";
    goto LAB_00b3ac90;
  case 4:
    pcVar7 = "MENU_GUILD_AVAILABILITY_BUSY_MATCHING";
LAB_00b3ac90:
    lVar1 = (long)local_90 + 0xab8;
    uVar9 = FUN_00e6ce7c(pcVar7,0);
    FUN_00f0d75c(lVar1,uVar9);
    puVar10 = &DAT_01bee80e;
    break;
  default:
    goto switchD_00b3abd4_default;
  }
  FUN_00f0d7fc((long)local_90 + 0xab8,puVar10);
switchD_00b3abd4_default:
  pvVar6 = local_90;
  uVar5 = 0;
  if (*(char *)(param_2 + 0x101) == '\0') {
    FUN_009580b8();
    uVar9 = FUN_0095fdf0();
    uVar5 = FUN_00e70b88(param_2 + 0x18,uVar9);
    uVar5 = (uVar5 & 1) << 2;
  }
  *(uint *)((long)pvVar6 + 0x1c2c) = *(uint *)((long)pvVar6 + 0x1c2c) & 0xfffffffb | uVar5;
  FUN_00f0d7fc((long)local_90 + 0x178,&DAT_01bee7fa);
  local_68 = (ulong)*(uint *)((long)param_1 + 0x1fd8);
  local_60 = DAT_03210f60;
  local_88 = FUN_00b3b604;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = param_1;
  FUN_009693a0((long)local_90 + 0x180,&local_88);
  local_68 = (ulong)*(uint *)((long)param_1 + 0x1fd8);
  local_60 = DAT_03210f8c;
  local_88 = FUN_00b3b604;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = param_1;
  FUN_009693a0((long)local_90 + 0x180,&local_88);
  FUN_00ed026c((long)param_1 + 0x1118,local_90,1);
  FUN_00b3b60c((long)param_1 + 0x1fd8,&local_90);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
LAB_00b3adc0:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b3adf0(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = (float)FUN_00f0e700(param_1 + 0xdc8);
  lVar1 = param_1 + 0x22b0;
  fVar10 = (float)FUN_00f0e700(lVar1);
  fVar9 = *(float *)(param_1 + 0xe10) * (fVar9 / fVar10);
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x2334);
  *(uint *)(param_1 + 0x2334) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x2334) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2604;
    FUN_0091ada4(lVar1);
  }
  fVar10 = fVar9 * 2.25;
  if ((*(float *)(param_1 + 0x22f8) != fVar10) || (*(float *)(param_1 + 0x22fc) != fVar10)) {
    *(float *)(param_1 + 0x22f8) = fVar10;
    *(float *)(param_1 + 0x22fc) = fVar10;
    FUN_0091ada4(lVar1);
  }
  uVar4 = FUN_00eff63c(fVar9,fVar9,0x3e4ccccd,FUN_009a7624);
  uVar5 = FUN_00efee28(0x3f3d70a4,0x3e4ccccd,0);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00eff63c(fVar9 * 0.85,fVar9 * 0.85,0,0);
  uVar5 = FUN_00efee28(0x3f800000,0,0);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00eff63c(fVar9,fVar9,0,0);
  uVar5 = FUN_00efee28(0x3f19999a,0,0);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00efee28(0,0x3ecccccd,0);
  FUN_00f022a0(lVar1,uVar4);
  lVar3 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar8);
  lVar1 = param_1 + 0x23a0;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x2424);
  *(uint *)(param_1 + 0x2424) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2424) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x23e8) != 1.0) || (*(float *)(param_1 + 0x23ec) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x23e8) = uVar4;
    FUN_0091ada4(lVar1);
  }
  uVar4 = FUN_00eff63c(0x40200000,0x40200000,0x3f19999a,0);
  uVar5 = FUN_00efee28(0x3f800000,0x3f19999a,0);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00eff63c(0x40d33333,0x40d33333,0x40000000,FUN_009a7608);
  uVar5 = FUN_00efee28(0,0x40000000,FUN_009a7608);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  lVar1 = param_1 + 0x2490;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x2514);
  *(uint *)(param_1 + 0x2514) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2514) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x24d8) != 1.0) || (*(float *)(param_1 + 0x24dc) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x24d8) = uVar4;
    FUN_0091ada4(lVar1);
  }
  uVar4 = FUN_00efed6c(0x3e99999a);
  FUN_00f022a0(lVar1,uVar4);
  uVar4 = FUN_00eff63c(0x40200000,0x40200000,0x3f051eb8,0);
  uVar5 = FUN_00efee28(0x3ecccccd,0x3f051eb8,0);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  uVar4 = FUN_00eff63c(0x40d33333,0x40d33333,0x40000000,FUN_009a7608);
  uVar5 = FUN_00efee28(0,0x40000000,FUN_009a7608);
  uVar6 = FUN_00acb4f8();
  FUN_00efcea4(uVar6,uVar4,uVar5,0);
  FUN_00f022a0(lVar1,uVar6);
  return;
}

