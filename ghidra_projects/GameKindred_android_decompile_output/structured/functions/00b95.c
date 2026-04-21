// functions/00b95 — 5 functions
#include "libGameKindred.h"




void FUN_00b95324(undefined8 param_1)

{
  FUN_00b9d400();
  FUN_00b92674(param_1);
  FUN_00b9e9bc(param_1);
  return;
}




void FUN_00b95350(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  size_t __n;
  size_t sVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte *pbVar20;
  char *__s2;
  long lVar21;
  long lVar22;
  char *pcVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong local_118;
  void *local_110;
  void *local_108;
  ulong local_100;
  void *local_f8;
  void *local_f0;
  ulong local_e8;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  ulong local_c0;
  void *local_b8;
  void *local_b0;
  byte local_a8 [8];
  size_t local_a0;
  char *local_98;
  undefined8 local_90;
  void *local_88;
  long local_80;
  
  lVar7 = tpidr_el0;
  local_80 = *(long *)(lVar7 + 0x28);
  puVar1 = (uint *)(param_1 + 0x24ac);
  if (*puVar1 != 0) {
    plVar2 = param_1 + 0x24af;
    puVar3 = (uint *)(param_1 + 0x2410);
    uVar24 = 0;
    plVar4 = param_1 + 0x2411;
    do {
      lVar22 = param_1[0x24ad];
      pbVar25 = (byte *)(lVar22 + uVar24 * 0x68);
      if ((*pbVar25 & 1) == 0) {
        pbVar20 = pbVar25 + 1;
      }
      else {
        pbVar20 = *(byte **)(lVar22 + uVar24 * 0x68 + 0x10);
      }
      lVar13 = FUN_009580b8();
      if ((*(byte *)(lVar13 + 0x5508) & 1) == 0) {
        pcVar23 = (char *)(lVar13 + 0x5509);
      }
      else {
        pcVar23 = *(char **)(lVar13 + 0x5518);
      }
      iVar10 = strcasecmp((char *)pbVar20,pcVar23);
      FUN_00e70510(&local_90);
      if ((*pbVar25 & 1) == 0) {
        pbVar20 = pbVar25 + 1;
      }
      else {
        pbVar20 = *(byte **)(lVar22 + uVar24 * 0x68 + 0x10);
      }
      FUN_008fa54c(local_a8,pbVar20);
      (**(code **)(*param_1 + 0x1d8))(param_1,local_a8,&local_90);
      uVar14 = FUN_00e70b34(&local_90,&DAT_03210450);
      if (((uVar14 & 1) == 0) ||
         (pcVar23 = (char *)(lVar22 + uVar24 * 0x68 + 0x61), *pcVar23 != '\0')) {
        uVar11 = FUN_00b943e0(param_1,local_a8);
        uVar14 = (ulong)uVar11;
        if ((uVar11 == 0xffffffff) && (iVar10 == 0)) {
          uVar14 = FUN_00b943e0(param_1,lVar22 + uVar24 * 0x68 + 0x18);
          uVar14 = uVar14 & 0xffffffff;
        }
        if ((int)uVar14 == -1) {
          uVar11 = FUN_00b96740(param_1,local_a8);
          uVar14 = (ulong)uVar11;
          FUN_00b92674(param_1);
          plVar15 = (long *)param_1[0x23f6];
          if ((plVar15 == (long *)0x0) || (iVar12 = (**(code **)(*plVar15 + 0x40))(), iVar12 != 2))
          {
            bVar9 = true;
          }
          else {
            if (iVar10 == 0) {
              lVar13 = lVar22 + uVar24 * 0x68;
              if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
                pbVar25 = (byte *)(lVar13 + 0x19);
              }
              else {
                pbVar25 = *(byte **)(lVar22 + uVar24 * 0x68 + 0x28);
              }
            }
            else if ((*pbVar25 & 1) == 0) {
              pbVar25 = pbVar25 + 1;
            }
            else {
              pbVar25 = *(byte **)(lVar22 + uVar24 * 0x68 + 0x10);
            }
            plVar15 = (long *)param_1[0x23f6];
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x78))(plVar15,pbVar25,200);
            }
            bVar9 = false;
          }
          if (uVar11 != 0xffffffff) {
            bVar8 = false;
            if (bVar9) goto LAB_00b955bc;
            goto LAB_00b95674;
          }
        }
        else {
LAB_00b955bc:
          lVar13 = lVar22 + uVar24 * 0x68;
          if ((*(byte *)(lVar13 + 0x30) & 1) == 0) {
            lVar13 = lVar13 + 0x31;
          }
          else {
            lVar13 = *(long *)(lVar22 + uVar24 * 0x68 + 0x40);
          }
          lVar21 = lVar22 + uVar24 * 0x68;
          if ((*(byte *)(lVar21 + 0x48) & 1) == 0) {
            lVar21 = lVar21 + 0x49;
          }
          else {
            lVar21 = *(long *)(lVar22 + uVar24 * 0x68 + 0x58);
          }
          FUN_00b96b18(*plVar2 + uVar14 * 0x50,&local_90,lVar13,lVar21,iVar10 == 0,0);
          bVar8 = true;
LAB_00b95674:
          bVar6 = *(byte *)(param_1 + 0x24b9);
          __n = (ulong)(local_a8[0] >> 1);
          if ((local_a8[0] & 1) != 0) {
            __n = local_a0;
          }
          sVar5 = (ulong)(bVar6 >> 1);
          if ((bVar6 & 1) != 0) {
            sVar5 = param_1[0x24ba];
          }
          if (__n == sVar5) {
            pcVar23 = (char *)((ulong)local_a8 | 1);
            if ((local_a8[0] & 1) != 0) {
              pcVar23 = local_98;
            }
            pcVar16 = (char *)((long)param_1 + 0x125c9);
            if ((bVar6 & 1) != 0) {
              pcVar16 = (char *)param_1[0x24bb];
            }
            if ((local_a8[0] & 1) == 0) {
              if (__n != 0) {
                lVar13 = -(ulong)(local_a8[0] >> 1);
                pcVar23 = (char *)((ulong)local_a8 | 1);
                do {
                  if (*pcVar23 != *pcVar16) goto LAB_00b95754;
                  pcVar23 = pcVar23 + 1;
                  lVar13 = lVar13 + 1;
                  pcVar16 = pcVar16 + 1;
                } while (lVar13 != 0);
              }
            }
            else if ((__n != 0) && (iVar12 = memcmp(pcVar23,pcVar16,__n), iVar12 != 0))
            goto LAB_00b95754;
LAB_00b957b8:
            if ((bVar8) && (*(char *)(lVar22 + uVar24 * 0x68 + 0x60) != '\0' || iVar10 != 0)) {
              lVar13 = lVar22 + uVar24 * 0x68;
              if ((*(byte *)(lVar13 + 0x30) & 1) == 0) {
                lVar13 = lVar13 + 0x31;
              }
              else {
                lVar13 = *(long *)(lVar22 + uVar24 * 0x68 + 0x40);
              }
              FUN_00e705c8(&local_c0,lVar13);
              lVar13 = lVar22 + uVar24 * 0x68;
              if ((*(byte *)(lVar13 + 0x48) & 1) == 0) {
                lVar13 = lVar13 + 0x49;
              }
              else {
                lVar13 = *(long *)(lVar22 + uVar24 * 0x68 + 0x58);
              }
              FUN_00ac1474(param_1 + 0x1be8,&local_90,&local_c0,lVar13,iVar10 == 0,0);
              if (local_b8 != (void *)0x0) {
                operator_delete__(local_b8);
                local_c0 = 0;
                local_b8 = (void *)0x0;
              }
            }
            if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) &&
               (*(char *)(lVar22 + uVar24 * 0x68 + 0x60) == '\0')) {
              FUN_0099cf3c(*plVar2 + uVar14 * 0x50,1);
            }
          }
          else {
LAB_00b95754:
            pcVar23 = (char *)(lVar22 + uVar24 * 0x68 + 0x60);
            if (*pcVar23 != '\0') {
              lVar13 = lVar22 + uVar24 * 0x68;
              if ((*(byte *)(lVar13 + 0x18) & 1) == 0) {
                pcVar16 = (char *)(lVar13 + 0x19);
              }
              else {
                pcVar16 = *(char **)(lVar22 + uVar24 * 0x68 + 0x28);
              }
              __s2 = (char *)((long)param_1 + 0x125c9);
              if ((bVar6 & 1) != 0) {
                __s2 = (char *)param_1[0x24bb];
              }
              iVar12 = strcasecmp(pcVar16,__s2);
              if (iVar12 == 0) goto LAB_00b957b8;
              if (*pcVar23 != '\0') goto LAB_00b959d8;
            }
            lVar13 = *plVar2 + uVar14 * 0x50;
            *(undefined1 *)(lVar13 + 0x4c) = 1;
            FUN_0099cf3c(lVar13,1);
            if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) {
              FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_IM_received.mp3",0,0);
            }
            if (*puVar3 != 0) {
              uVar17 = 0;
              do {
                uVar18 = FUN_00e70b34(*(long *)(*plVar4 + uVar17 * 8) + 0x3ce0,&local_90);
                if ((uVar18 & 1) != 0) {
                  FUN_00ae594c(*(undefined8 *)(*plVar4 + uVar17 * 8),1,1,
                               *(undefined4 *)(*plVar2 + uVar14 * 0x50 + 0x18));
                  break;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *puVar3);
            }
          }
        }
LAB_00b959d8:
        if (((*(char *)(lVar22 + uVar24 * 0x68 + 0x60) == '\0') &&
            ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0)) &&
           (uVar17 = FUN_0092e5ec(), (uVar17 & 1) != 0)) {
          if (*(uint *)(param_1 + 0x240a) != 0) {
            uVar17 = 0;
            do {
              lVar13 = *(long *)(param_1[0x240b] + uVar17 * 8);
              if (lVar13 == 0) break;
              uVar18 = FUN_00e70b34(lVar13 + 0x3ce0,&local_90);
              if (((uVar18 & 1) != 0) &&
                 (*(char *)(*(long *)(param_1[0x240b] + uVar17 * 8) + 0x3dbc) != '\0')) {
                bVar9 = true;
                goto LAB_00b95a58;
              }
              uVar11 = (int)uVar17 + 1;
              uVar17 = (ulong)uVar11;
            } while (uVar11 < *(uint *)(param_1 + 0x240a));
          }
          bVar9 = false;
LAB_00b95a58:
          if (*(uint *)(param_1 + 0x2412) != 0) {
            uVar17 = 0;
            do {
              lVar13 = *(long *)(param_1[0x2413] + uVar17 * 8);
              if (bVar9 || lVar13 == 0) goto LAB_00b95ad8;
              uVar18 = FUN_00e70b34(lVar13 + 0x3ce0,&local_90);
              if (((uVar18 & 1) != 0) &&
                 (*(char *)(*(long *)(param_1[0x2413] + uVar17 * 8) + 0x3dbc) != '\0')) {
                bVar9 = true;
                goto LAB_00b95ad8;
              }
              uVar11 = (int)uVar17 + 1;
              uVar17 = (ulong)uVar11;
            } while (uVar11 < *(uint *)(param_1 + 0x2412));
            bVar9 = false;
          }
LAB_00b95ad8:
          if (*(uint *)(param_1 + 0x2414) != 0) {
            uVar17 = 0;
            do {
              lVar13 = *(long *)(param_1[0x2415] + uVar17 * 8);
              if (bVar9 || lVar13 == 0) goto LAB_00b95b50;
              uVar18 = FUN_00e70b34(lVar13 + 0x3ce0,&local_90);
              if (((uVar18 & 1) != 0) &&
                 (*(char *)(*(long *)(param_1[0x2415] + uVar17 * 8) + 0x3dbc) != '\0')) {
                bVar9 = true;
                goto LAB_00b95b50;
              }
              uVar11 = (int)uVar17 + 1;
              uVar17 = (ulong)uVar11;
            } while (uVar11 < *(uint *)(param_1 + 0x2414));
            bVar9 = false;
          }
LAB_00b95b50:
          if (*puVar3 != 0) {
            uVar17 = 0;
            do {
              lVar13 = *(long *)(*plVar4 + uVar17 * 8);
              if (bVar9 || lVar13 == 0) break;
              uVar18 = FUN_00e70b34(lVar13 + 0x3ce0,&local_90);
              if (((uVar18 & 1) != 0) &&
                 (*(char *)(*(long *)(*plVar4 + uVar17 * 8) + 0x3dbc) != '\0')) goto LAB_00b95bc4;
              uVar11 = (int)uVar17 + 1;
              uVar17 = (ulong)uVar11;
            } while (uVar11 < *puVar3);
          }
          if ((!bVar9) && (uVar17 = FUN_0092e618(), (uVar17 & 1) != 0)) {
            uVar11 = 1;
            goto LAB_00b95db8;
          }
LAB_00b95bc4:
          lVar13 = lVar22 + uVar24 * 0x68;
          if ((*(byte *)(lVar13 + 0x30) & 1) == 0) {
            lVar13 = lVar13 + 0x31;
          }
          else {
            lVar13 = *(long *)(lVar22 + uVar24 * 0x68 + 0x40);
          }
          FUN_008fa54c(&local_c0,lVar13);
          uVar19 = FUN_00e6ce7c("MENU_FRIENDS_MESSAGE_NOTIFICATION",0);
          thunk_FUN_00e7051c(&local_d0,uVar19);
          FUN_00e705c8(&local_e8,"[PLAYER_NAME]");
          FUN_00e71248(&local_d0,0,&local_e8,&local_90);
          if (local_e0 != (void *)0x0) {
            operator_delete__(local_e0);
          }
          local_e8 = 0;
          local_e0 = (void *)0x0;
          uVar11 = (uint)((byte)local_c0 >> 1);
          if ((local_c0 & 1) != 0) {
            uVar11 = (uint)local_b8;
          }
          local_d8 = (void *)0x0;
          if (uVar11 < 0x21) {
            FUN_008fce60(&local_e8,&local_c0);
          }
          else {
            FUN_0093ddb0(&local_118,&local_c0,0,0x1d,&local_c0);
            FUN_008fcdb8(&local_100,&local_118);
            FUN_008fce60(&local_e8,&local_100);
            if ((local_100 & 1) != 0) {
              operator_delete(local_f0);
            }
            if ((local_118 & 1) != 0) {
              operator_delete(local_108);
            }
            FUN_0090de84(&local_e8,"...",3);
          }
          FUN_00e705c8(&local_100,"[PRIVATE_MESSAGE_PREVIEW]");
          FUN_00e70570(&local_118,&local_e8);
          FUN_00e71248(&local_d0,0,&local_100,&local_118);
          if (local_110 != (void *)0x0) {
            operator_delete__(local_110);
            local_118 = 0;
            local_110 = (void *)0x0;
          }
          if (local_f8 != (void *)0x0) {
            operator_delete__(local_f8);
            local_100 = 0;
            local_f8 = (void *)0x0;
          }
          if (*(char *)((long)param_1 + 0x12674) == '\0') {
            FUN_00a9db04(0x41700000,&local_d0,FUN_00b96c2c,uVar14,FUN_00b96c38,0,param_1,1,0,1);
          }
          if ((local_e8 & 1) != 0) {
            operator_delete(local_d8);
          }
          if (local_c8 != (void *)0x0) {
            operator_delete__(local_c8);
            local_d0 = 0;
            local_c8 = (void *)0x0;
          }
          if ((local_c0 & 1) != 0) {
            operator_delete(local_b0);
          }
        }
        lVar22 = param_1[0x24ad] + uVar24 * 0x68;
        FUN_00ba16b4(puVar1,lVar22,lVar22 + 0x68);
        uVar11 = 0;
      }
      else {
        local_c0 = 0;
        local_b8 = (void *)0x0;
        FUN_0096204c(&local_c0,local_a8);
        *pcVar23 = '\x01';
        FUN_00915f90(1);
        FUN_00951534(&local_c0,1);
        uVar11 = 4;
      }
LAB_00b95db8:
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
    } while (((uVar11 | 4) == 4) && (uVar24 = uVar24 + 1, uVar24 < *puVar1));
  }
  if (*(long *)(lVar7 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b95e34(long param_1)

{
  FUN_00b94ea0(param_1 + -0x3b8);
  return;
}




void FUN_00b95e3c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
    FUN_00910394(&local_48,uVar2);
    FUN_00e705c8(&local_58,"[NAME]");
    FUN_00e71248(&local_48,0,&local_58,param_1 + 0x12610);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  else {
    uVar2 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
    FUN_00910394(&local_48,uVar2);
    FUN_00910394(param_1 + 0x12610,&DAT_03210450);
  }
  FUN_00b95f50(0x40200000,param_1,1,&local_48,0);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b95f50(undefined8 param_1,float param_2,long param_3,ulong param_4,undefined8 param_5,
                 ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 local_90;
  float local_8c;
  undefined1 auStack_84 [4];
  float local_80;
  undefined1 auStack_7c [4];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x660;
  FUN_00f01980(lVar1);
  if ((~*(uint *)(param_3 + 0x6e4) & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x6e4) = *(uint *)(param_3 + 0x6e4) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  uVar6 = FUN_00e70b88(param_5,&DAT_03210450);
  if ((uVar6 & 1) != 0) {
    FUN_00f0d75c(lVar1,param_5);
  }
  FUN_00f0d4e0(lVar1);
  lVar2 = param_3 + 0x570;
  FUN_00f13f08(*(undefined4 *)(param_3 + 0x12650),param_2 + 10.0,lVar2);
  lVar4 = DAT_03210d00;
  if ((param_6 & 1) != 0) {
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f800000,puVar9);
    FUN_00efcac4(0x3f800000,puVar9);
    lVar4 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar10);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f400000,puVar10);
    FUN_00efcac4(0x3f800000,puVar10);
    lVar4 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efd208(puVar11);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar11,puVar9,puVar10,0);
    FUN_00f022a0(lVar1,puVar11);
  }
  FUN_00f01980(lVar2);
  uVar5 = FUN_0092e8e0();
  FUN_00a9bd24(param_3,uVar5 & 1,auStack_7c,&local_80,auStack_84);
  lVar1 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar9);
  lVar1 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar10);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  fVar13 = 1.0;
  uVar12 = 0x3f800000;
  if ((param_4 & 1) == 0) {
    uVar12 = 0;
  }
  FUN_00efddc4(uVar12,puVar10);
  FUN_00efcac4(0x3eb33333,puVar10);
  FUN_00efcb24(puVar10,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdc08(puVar11);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar12 = *(undefined4 *)(param_3 + 0x408);
  if ((param_4 & 1) == 0) {
    local_8c = local_80;
  }
  else {
    FUN_00f0e700(lVar2);
    local_8c = local_80 - fVar13;
  }
  local_90 = uVar12;
  FUN_00efdc50(puVar11,&local_90);
  FUN_00efcac4(0x3eb33333,puVar11);
  FUN_00efcb24(puVar11,FUN_0091aa80);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar8,puVar10,puVar11,0);
  FUN_00f02308(lVar2,puVar9,puVar8,0);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

