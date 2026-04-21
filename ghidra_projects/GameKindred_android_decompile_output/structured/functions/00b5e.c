// functions/00b5e — 24 functions
#include "libGameKindred.h"




void FUN_00b5e188(long param_1,undefined8 param_2)

{
  FUN_00ac9b64(param_1 + 0xb110,param_2,0,0);
  return;
}




void FUN_00b5e19c(long param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *__s2;
  long lVar13;
  ulong uVar14;
  ulong local_80;
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if ((*(long **)(param_1 + 0x2ce30) == (long *)0x0) ||
     (iVar10 = (**(code **)(**(long **)(param_1 + 0x2ce30) + 0x40))(), iVar10 != 2)) {
    local_78 = 0;
    local_70 = (byte *)0x0;
    local_80 = 0;
    if (*(uint *)(param_1 + 0x2ced0) != 0) {
      uVar14 = 0;
      do {
        FUN_00ac3418(param_1 + 0x28dc0,*(long *)(param_1 + 0x2ced8) + uVar14 * 0x88 + 0x18,&local_80
                    );
        uVar9 = local_80;
        bVar4 = *param_2;
        uVar7 = local_80 >> 1 & 0x7f;
        sVar2 = uVar7;
        if ((local_80 & 1) != 0) {
          sVar2 = local_78;
        }
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (sVar2 == sVar1) {
          pbVar12 = (byte *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            pbVar12 = local_70;
          }
          pbVar11 = param_2 + 1;
          if ((bVar4 & 1) != 0) {
            pbVar11 = *(byte **)(param_2 + 0x10);
          }
          if ((local_80 & 1) == 0) {
            if (sVar2 == 0) {
LAB_00b5e3cc:
              FUN_00910394(param_3,*(long *)(param_1 + 0x2ced8) + (uVar14 & 0xffffffff) * 0x88 +
                                   0x18);
              uVar9 = local_80;
              break;
            }
            lVar13 = -uVar7;
            pbVar12 = (byte *)((ulong)&local_80 | 1);
            while (*pbVar12 == *pbVar11) {
              pbVar12 = pbVar12 + 1;
              lVar13 = lVar13 + 1;
              pbVar11 = pbVar11 + 1;
              if (lVar13 == 0) goto LAB_00b5e3cc;
            }
          }
          else if ((sVar2 == 0) || (iVar10 = memcmp(pbVar12,pbVar11,sVar2), iVar10 == 0))
          goto LAB_00b5e3cc;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x2ced0));
      if ((uVar9 & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x2ced0);
    if (uVar3 != 0) {
      bVar4 = *param_2;
      sVar2 = *(size_t *)(param_2 + 8);
      pbVar12 = *(byte **)(param_2 + 0x10);
      lVar13 = *(long *)(param_1 + 0x2ced8);
      uVar14 = 0;
      if ((bVar4 & 1) == 0) {
        pbVar12 = param_2 + 1;
        sVar2 = (ulong)(bVar4 >> 1);
      }
      do {
        pbVar11 = (byte *)(lVar13 + uVar14 * 0x88);
        bVar5 = *pbVar11;
        uVar7 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar7 = *(ulong *)(pbVar11 + 8);
        }
        if (sVar2 == uVar7) {
          __s2 = *(byte **)(lVar13 + uVar14 * 0x88 + 0x10);
          if ((bVar5 & 1) == 0) {
            __s2 = pbVar11 + 1;
          }
          sVar1 = -(ulong)(bVar4 >> 1);
          pbVar11 = param_2;
          sVar8 = sVar2;
          if ((bVar4 & 1) == 0) {
            while( true ) {
              if (sVar8 == 0) goto LAB_00b5e3fc;
              if (pbVar11[1] != *__s2) break;
              sVar1 = sVar1 + 1;
              __s2 = __s2 + 1;
              pbVar11 = pbVar11 + 1;
              sVar8 = sVar1;
            }
          }
          else if ((sVar2 == 0) || (iVar10 = memcmp(pbVar12,__s2,sVar2), iVar10 == 0)) {
LAB_00b5e3fc:
            FUN_00910394(param_3,lVar13 + (uVar14 & 0xffffffff) * 0x88 + 0x18);
            break;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar3);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5e448(long param_1)

{
  FUN_00b5e19c(param_1 + -0x2c50);
  return;
}




undefined8
FUN_00b5e454(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_d8;
  void *local_d0;
  void *local_c8;
  ulong local_c0;
  void *local_b8;
  void *local_b0;
  ulong local_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  void *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_009580b8();
  if (*(char *)(lVar3 + 0x568a) != '\0') {
    FUN_00e70510(&local_68);
    FUN_008fa54c(&local_80,param_2);
    (**(code **)(*param_1 + 0x1c0))(param_1,&local_80,&local_68);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    uVar4 = FUN_00e70b34(&local_68,&DAT_03210450);
    if ((uVar4 & 1) == 0) {
      FUN_009580b8();
      uVar5 = FUN_0095fdf0();
      uVar2 = FUN_00e70b34(&local_68,uVar5);
      FUN_00e705c8(&local_80,param_4);
      FUN_00ac1474(param_1 + 0x51b8,&local_68,&local_80,param_5,uVar2 & 1,0);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
        local_80 = 0;
        local_78 = (void *)0x0;
      }
      if (((uVar2 | param_6) & 1) == 0) {
        if (((*(byte *)((long)param_1 + 0x2c34) >> 1 & 1) == 0) ||
           ((((char)param_1[0x59f3] != '\0' && (*(char *)((long)param_1 + 0x2cf9a) == '\0')) ||
            ((*(byte *)((long)param_1 + 0x2c34) & 1) != 0)))) {
          FUN_008fa54c(&local_80,param_4);
          uVar5 = FUN_00e6ce7c("MENU_PARTY_MESSAGE_NOTIFICATION",0);
          thunk_FUN_00e7051c(&local_90,uVar5);
          FUN_00e705c8(&local_a8,"[PLAYER_NAME]");
          FUN_00e71248(&local_90,0,&local_a8,&local_68);
          if (local_a0 != (void *)0x0) {
            operator_delete__(local_a0);
          }
          local_a8 = 0;
          local_a0 = (void *)0x0;
          local_98 = (void *)0x0;
          uVar2 = (uint)((byte)local_80 >> 1);
          if ((local_80 & 1) != 0) {
            uVar2 = (uint)local_78;
          }
          if (uVar2 < 0x21) {
            FUN_008fce60(&local_a8,&local_80);
          }
          else {
            FUN_0093ddb0(&local_d8,&local_80,0,0x1d,&local_80);
            FUN_008fcdb8(&local_c0,&local_d8);
            FUN_008fce60(&local_a8,&local_c0);
            if ((local_c0 & 1) != 0) {
              operator_delete(local_b0);
            }
            if ((local_d8 & 1) != 0) {
              operator_delete(local_c8);
            }
            FUN_0090de84(&local_a8,"...",3);
          }
          FUN_00e705c8(&local_c0,"[PARTY_MESSAGE_PREVIEW]");
          FUN_00e70570(&local_d8,&local_a8);
          FUN_00e71248(&local_90,0,&local_c0,&local_d8);
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
            local_d8 = 0;
            local_d0 = (void *)0x0;
          }
          if (local_b8 != (void *)0x0) {
            operator_delete__(local_b8);
            local_c0 = 0;
            local_b8 = (void *)0x0;
          }
          FUN_00a9db04(0x40800000,&local_90,FUN_00b5e788,0,FUN_00b5e790,0,param_1,1,0,1);
          FUN_0099cf3c(param_1 + 0x59dc,1);
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
          if (local_88 != (void *)0x0) {
            operator_delete__(local_88);
            local_90 = 0;
            local_88 = (void *)0x0;
          }
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
        }
      }
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5e788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b5ef1c(param_1,param_4);
  return;
}




void FUN_00b5e790(void)

{
  return;
}




undefined8 FUN_00b5e794(long param_1)

{
  FUN_00b5e454(param_1 + -0x2c50);
  return 1;
}




void FUN_00b5e7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  byte local_70 [8];
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_1 + 0x2ce30);
  uVar7 = 0;
  if (plVar6 == (long *)0x0) goto LAB_00b5e908;
  iVar5 = (**(code **)(*plVar6 + 0x40))();
  uVar7 = 0;
  if (iVar5 != 2) goto LAB_00b5e908;
  lVar8 = FUN_009580b8(0);
  FUN_008fa54c(local_70,param_2);
  bVar2 = *(byte *)(lVar8 + 0x5508);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar8 + 0x5510);
  }
  sVar1 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    sVar1 = local_68;
  }
  bVar4 = false;
  if (__n == sVar1) {
    __s1 = *(void **)(lVar8 + 0x5518);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(lVar8 + 0x5509);
    }
    __s2 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      __s2 = local_60;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(lVar8 + 0x5509);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar9 != *__s2) {
            bVar4 = false;
            goto joined_r0x00b5e938;
          }
          pcVar9 = pcVar9 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
    }
    else if (__n != 0) {
      iVar5 = memcmp(__s1,__s2,__n);
      bVar4 = iVar5 == 0;
      goto joined_r0x00b5e938;
    }
    bVar4 = true;
  }
joined_r0x00b5e938:
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  uVar7 = 0;
  if (bVar4) {
    plVar6 = *(long **)(param_1 + 0x2ce30);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x80))(plVar6,param_3,200);
    }
    uVar7 = 1;
  }
LAB_00b5e908:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}




void FUN_00b5e944(long param_1)

{
  FUN_00b5e7b8(param_1 + -0x2c50);
  return;
}




int FUN_00b5e950(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x2cfc8) < 1) {
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      if (lVar2 < param_2) {
        iVar1 = *(int *)(param_1 + 0x2cfd0 + lVar2 * 4) + iVar1;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x2cfc8));
  }
  return iVar1 + param_3;
}




void FUN_00b5e9a8(long param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(param_1 + 0x2cfc8);
  if (0 < iVar3) {
    lVar4 = 0;
    iVar2 = param_2;
    do {
      iVar1 = *(int *)(param_1 + 0x2cfd0 + lVar4 * 4);
      param_2 = iVar2 - iVar1;
      if (iVar2 < iVar1) {
        iVar3 = (int)lVar4;
        param_2 = iVar2;
        break;
      }
      lVar4 = lVar4 + 1;
      iVar2 = param_2;
    } while (lVar4 < iVar3);
  }
  *param_3 = iVar3;
  *param_4 = param_2;
  return;
}




bool FUN_00b5ea04(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  FUN_00ac9cd0(param_1 + 0xb110);
  piVar2 = (int *)FUN_00cead68();
  iVar1 = *piVar2;
  if (iVar1 == 10) {
    uVar3 = FUN_00b5eaac(param_1);
    if ((uVar3 & 1) == 0) {
      return false;
    }
    iVar1 = *piVar2;
  }
  if ((iVar1 == 0x24) && (iVar1 = FUN_00b5eb28(param_1), iVar1 != *(int *)(param_1 + 0x2cfc8))) {
    return false;
  }
  iVar1 = FUN_00b5eb28(param_1);
  return iVar1 != 0;
}




void FUN_00b5ea90(long param_1)

{
  FUN_00ac9cd0(param_1 + 0xb110);
  return;
}




undefined8 FUN_00b5eaac(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_00ac9cd0(param_1 + 0xb110);
  uVar3 = FUN_00cead68();
  iVar1 = FUN_00ceb0fc();
  if (iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(param_1 + 0x2cf50 + lVar4 * 4) == -1) {
        return 0;
      }
      uVar2 = FUN_00ceb0fc(uVar3);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar2);
  }
  return 1;
}




int FUN_00b5eb28(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar4 = 0;
  uVar5 = 0;
  iVar3 = 0;
  do {
    uVar2 = *(uint *)(param_1 + lVar4 * 4 + 0x2cfd0);
    if (((uVar2 != 0xffffffff) && (uVar5 < 0xe)) && (uVar2 != 0)) {
      uVar6 = 0;
      do {
        uVar1 = uVar5 + uVar6;
        if (*(int *)(param_1 + (ulong)uVar1 * 4 + 0x2cf50) != -1) {
          iVar3 = iVar3 + 1;
          uVar5 = uVar5 + uVar2;
          goto LAB_00b5eba0;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar1 + 1 < 0xe) && (uVar6 < uVar2));
      uVar5 = uVar5 + uVar6;
    }
LAB_00b5eba0:
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x10) {
      return iVar3;
    }
  } while( true );
}




bool FUN_00b5ebb4(long param_1)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)FUN_00ac9cd0(param_1 + 0xb110);
  pbVar4 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar4 = pbVar3 + 1;
  }
  iVar2 = strcmp((char *)pbVar4,"*GameMode_HF_PrivateDraft*");
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    pbVar3 = (byte *)FUN_00ac9cd0(param_1 + 0xb110);
    pbVar4 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar4 = pbVar3 + 1;
    }
    iVar2 = strcmp((char *)pbVar4,"*GameMode_5v5_PrivateDraft*");
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




void FUN_00b5ec30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = 0;
  lVar4 = param_1 + 0x13660;
  *(undefined1 *)(param_1 + 0x2cf98) = 0;
  *(undefined4 *)(param_1 + 0x2cf88) = 0;
  do {
    FUN_00ae7fd4(lVar4);
    *(undefined4 *)(param_1 + 0x2cf50 + lVar5) = 0xffffffff;
    lVar5 = lVar5 + 4;
    lVar4 = lVar4 + 0x1328;
  } while (lVar5 != 0x38);
  FUN_00b5aae4(param_1);
  FUN_008fa54c(local_70,"*GameMode_HF_Casual*");
  FUN_00ac9b64(param_1 + 0xb110,local_70,0,0);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  uVar2 = FUN_00e6ce7c("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_00ab7498(param_1 + 0x10808,uVar2);
  uVar3 = FUN_0092e920();
  if ((uVar3 & 1) != 0) {
    FUN_00bf1c44(param_1 + 0x2c70);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5ed60(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f04924(param_2);
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x2cf9a) = 0;
      *(uint *)(param_1 + 0x28dbc) = *(uint *)(param_1 + 0x28dbc) & 0xfffffffb;
      *(uint *)(param_1 + 0x262cc) =
           *(uint *)(param_1 + 0x262cc) & 0xfffffff8 |
           *(uint *)(param_1 + 0x262cc) & 3 | (*(uint *)(param_1 + 0x256cc) >> 2 & 1) << 2;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x2cf9a) = 1;
  *(uint *)(param_1 + 0x28dbc) = *(uint *)(param_1 + 0x28dbc) | 4;
  *(uint *)(param_1 + 0x262cc) = *(uint *)(param_1 + 0x262cc) & 0xfffffffb;
  FUN_0099cf94(param_1 + 0x2cee0,0);
  return;
}




void FUN_00b5ee28(long param_1,uint param_2)

{
  *(char *)(param_1 + 0x2cf9a) = (char)(param_2 & 1);
  *(uint *)(param_1 + 0x28dbc) =
       *(uint *)(param_1 + 0x28dbc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x28dbc) & 3 | (param_2 & 1) << 2;
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0x262cc) = *(uint *)(param_1 + 0x262cc) & 0xfffffffb;
    FUN_0099cf94(param_1 + 0x2cee0,0);
    return;
  }
  *(uint *)(param_1 + 0x262cc) =
       *(uint *)(param_1 + 0x262cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x262cc) & 3 | (*(uint *)(param_1 + 0x256cc) >> 2 & 1) << 2;
  return;
}




void FUN_00b5eea4(long param_1)

{
  FUN_00ac0980(param_1 + 0x28dc0,1);
  FUN_008fce60(param_1 + 0x2cf38,&DAT_0320ffa8);
  FUN_0099cf94(param_1 + 0x2cee0,0);
  return;
}




void FUN_00b5eefc(long param_1)

{
  if ((*(byte *)(param_1 + 0x2c34) >> 1 & 1) == 0) {
    FUN_00ac1e04(param_1 + 0x28dc0);
    return;
  }
  return;
}




void FUN_00b5ef1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_009580b8();
  if (*(char *)(lVar1 + 0x568a) != '\0') {
    uVar2 = FUN_009b8d90();
    FUN_009ba380(uVar2,param_2,0);
    *(undefined1 *)(param_1 + 0x2cf9a) = 1;
    *(uint *)(param_1 + 0x28dbc) = *(uint *)(param_1 + 0x28dbc) | 4;
    *(uint *)(param_1 + 0x262cc) = *(uint *)(param_1 + 0x262cc) & 0xfffffffb;
    FUN_0099cf94(param_1 + 0x2cee0,0);
    return;
  }
  return;
}




void FUN_00b5efb0(void)

{
  return;
}




void FUN_00b5efb4(undefined8 *param_1)

{
  FUN_00abaee8(param_1,0);
  *param_1 = &PTR_FUN_027e4a58;
  FUN_00f0e578(param_1 + 0x9b,"arrow_down");
  *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x46c) = *(uint *)((long)param_1 + 0x46c) & 0xfffffffb;
  FUN_00b09144(0,param_1);
  FUN_00b0914c(param_1,1);
  return;
}

