// functions/10052 — 523 functions
#include "GameKindred.h"




void thunk_FUN_10052b2c4(void)

{
  return;
}




void thunk_FUN_10052bb70(void)

{
  FUN_10052bb70();
  return;
}




undefined8 thunk_FUN_10052bc30(void)

{
  return 0;
}




undefined * thunk_FUN_100528b58(void)

{
  return PTR_s_Nuo_Services_ChatClient_Usern_1018675e0;
}




undefined * thunk_FUN_100528b64(void)

{
  return PTR_s_Nuo_Services_ChatClient_Nickn_1018675e8;
}




void thunk_FUN_10052bac0(void)

{
  FUN_10052bac0();
  return;
}




undefined8 * FUN_1005200e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149eb30;
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  return param_1;
}




void FUN_100520140(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149eb30;
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}




void FUN_10052019c(long *param_1,uint param_2)

{
  long *plVar1;
  timeval *ptVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ssize_t sVar8;
  long *plVar9;
  size_t sVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  void *pvVar18;
  int iVar19;
  timeval local_200;
  ulong local_1f0 [16];
  timeval local_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long local_70;
  
  puVar4 = PTR____darwin_check_fd_set_overflow_101444200;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(int *)((long)param_1 + 0x54) == 1) {
    plVar9 = param_1;
    if (0 < (int)param_2) {
      local_170.tv_sec = (ulong)param_2 / 1000;
      local_170.tv_usec = (param_2 % 1000) * 1000;
      uVar5 = _select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_170);
      plVar9 = (long *)(ulong)uVar5;
    }
  }
  else {
    if (param_2 != 0) {
      local_200.tv_sec = (__darwin_time_t)((int)param_2 / 1000);
      local_200.tv_usec = ((int)param_2 % 1000) * 1000;
      local_170.tv_usec = 0;
      local_170._12_4_ = 0;
      local_170.tv_sec = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_1f0[1] = 0;
      local_1f0[0] = 0;
      local_1f0[3] = 0;
      local_1f0[2] = 0;
      local_1f0[5] = 0;
      local_1f0[4] = 0;
      local_1f0[7] = 0;
      local_1f0[6] = 0;
      local_1f0[9] = 0;
      local_1f0[8] = 0;
      local_1f0[0xb] = 0;
      local_1f0[10] = 0;
      local_1f0[0xd] = 0;
      local_1f0[0xc] = 0;
      local_1f0[0xf] = 0;
      local_1f0[0xe] = 0;
      uVar5 = *(uint *)(param_1 + 10);
      if ((PTR____darwin_check_fd_set_overflow_101444200 == (undefined *)0x0) ||
         (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,&local_170,0), iVar6 != 0)) {
        uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
        *(uint *)((long)&local_170.tv_sec + uVar13) =
             *(uint *)((long)&local_170.tv_sec + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
      }
      if (param_1[5] != param_1[4]) {
        uVar5 = *(uint *)(param_1 + 10);
        if ((puVar4 == (undefined *)0x0) ||
           (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,local_1f0,0), iVar6 != 0)) {
          uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
          *(uint *)((long)local_1f0 + uVar13) =
               *(uint *)((long)local_1f0 + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
        }
      }
      ptVar2 = &local_200;
      if ((int)param_2 < 1) {
        ptVar2 = (timeval *)0x0;
      }
      _select((int)param_1[10] + 1,(fd_set *)&local_170,(fd_set *)local_1f0,(fd_set *)0x0,ptVar2);
    }
    plVar1 = param_1 + 1;
    while( true ) {
      lVar12 = param_1[1];
      uVar17 = param_1[2] - lVar12;
      uVar13 = (long)((uVar17 << 0x20) + 0x5dc00000000) >> 0x20;
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = lVar12 + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
        lVar12 = *plVar1;
      }
      uVar13 = (ulong)(int)uVar17;
      sVar8 = _recv((int)param_1[10],(void *)(lVar12 + uVar13),0x5dc,0);
      if (sVar8 < 0) {
        plVar9 = (long *)___error();
        if (((int)*plVar9 == 0x23) || (plVar9 = (long *)___error(), (int)*plVar9 == 0x23)) {
          uVar17 = param_1[2] - param_1[1];
          if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
            if (uVar13 < uVar17) {
              param_1[2] = param_1[1] + uVar13;
            }
          }
          else {
            plVar9 = (long *)FUN_100520ec8(plVar1,uVar13 - uVar17);
          }
          goto LAB_100520460;
        }
        break;
      }
      if (sVar8 == 0) break;
      uVar13 = sVar8 + uVar13;
      uVar17 = param_1[2] - param_1[1];
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = param_1[1] + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
      }
    }
    uVar17 = param_1[2] - param_1[1];
    if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
      if (uVar13 < uVar17) {
        param_1[2] = param_1[1] + uVar13;
      }
    }
    else {
      FUN_100520ec8(plVar1,uVar13 - uVar17);
    }
    _close((int)param_1[10]);
    *(int *)((long)param_1 + 0x54) = 1;
    pcVar16 = "Connection error!\n";
    if (-1 < sVar8) {
      pcVar16 = "Connection closed!\n";
    }
    uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
    plVar9 = (long *)(ulong)uVar5;
LAB_100520460:
    pvVar18 = (void *)param_1[4];
    sVar10 = param_1[5] - (long)pvVar18;
    if (sVar10 != 0) {
      pcVar16 = "Connection closed!\n";
      do {
        plVar9 = (long *)_send((int)param_1[10],pvVar18,sVar10,0);
        iVar6 = (int)plVar9;
        if (iVar6 < 0) {
          plVar9 = (long *)___error();
          if (((int)*plVar9 != 0x23) && (plVar9 = (long *)___error(), (int)*plVar9 != 0x23)) {
            pcVar16 = "Connection error!\n";
LAB_100520508:
            _close((int)param_1[10]);
            *(int *)((long)param_1 + 0x54) = 1;
            uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
            plVar9 = (long *)(ulong)uVar5;
          }
          break;
        }
        if (iVar6 == 0) goto LAB_100520508;
        pvVar18 = (void *)param_1[4];
        if (((ulong)plVar9 & 0xffffffff) == 0) {
          lVar12 = param_1[5];
        }
        else {
          sVar10 = param_1[5] - ((long)pvVar18 + (long)iVar6);
          pvVar14 = pvVar18;
          if (sVar10 != 0) {
            plVar9 = _memmove(pvVar18,(void *)((long)pvVar18 + (long)iVar6),sVar10);
            pvVar14 = (void *)param_1[4];
          }
          lVar12 = (long)pvVar18 + sVar10;
          param_1[5] = lVar12;
          pvVar18 = pvVar14;
        }
        sVar10 = lVar12 - (long)pvVar18;
      } while (sVar10 != 0);
    }
    if ((param_1[5] == param_1[4]) && (*(int *)((long)param_1 + 0x54) == 0)) {
      plVar9 = (long *)_close((int)param_1[10]);
      *(int *)((long)param_1 + 0x54) = 1;
    }
    puVar4 = PTR____stderrp_101444220;
    lVar12 = param_1[1];
    if (((1 < (ulong)(param_1[2] - lVar12)) && (*(int *)((long)param_1 + 0x54) == 2)) &&
       (local_1f0[0] = local_1f0[0] & 0xffffffff00000000, param_1[2] != lVar12)) {
      lVar15 = 0;
      iVar19 = 0;
      iVar6 = 0;
      bVar11 = false;
      do {
        uVar13 = (long)iVar6 - (long)iVar19;
        iVar7 = (int)uVar13;
        if (0xff < iVar7) {
          _fwrite("ERROR: Buffer too long",0x16,1,*(FILE **)puVar4);
          plVar9 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
          break;
        }
        cVar3 = *(char *)(lVar12 + lVar15);
        *(char *)((long)&local_170 + uVar13) = cVar3;
        if ((iVar7 < 1) ||
           (*(char *)((long)&local_170.tv_sec + (ulong)(iVar7 - 1)) != '\r' || cVar3 != '\n')) {
          iVar6 = iVar6 + 1;
        }
        else {
          *(undefined1 *)((long)&local_170.tv_sec + (uVar13 & 0xffffffff) + 1) = 0;
          if (bVar11) {
            if (iVar7 == 1) {
              uVar5 = _fprintf(*(FILE **)puVar4,"Opening WebSocket connection: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 3;
              lVar12 = (long)iVar6 + 1;
              if ((int)lVar12 != 0) {
                pvVar14 = (void *)param_1[1];
                pvVar18 = (void *)((long)pvVar14 + lVar12);
                sVar10 = param_1[2] - (long)pvVar18;
                if (sVar10 != 0) {
                  plVar9 = _memmove(pvVar14,pvVar18,sVar10);
                }
                param_1[2] = (long)pvVar14 + sVar10;
              }
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"Read header: %s");
            plVar9 = (long *)(ulong)uVar5;
            iVar6 = iVar6 + 1;
            bVar11 = true;
            iVar19 = iVar6;
          }
          else {
            iVar7 = _sscanf((char *)&local_170,"HTTP/1.1 %d");
            if ((iVar7 != 1) || ((int)local_1f0[0] != 0x65)) {
              uVar5 = _fprintf(*(FILE **)puVar4,"ERROR: Got bad status: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 0;
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"WebSocket successful HTTP status: %s");
            plVar9 = (long *)(ulong)uVar5;
            bVar11 = true;
          }
        }
        lVar15 = (long)iVar6;
      } while ((ulong)(long)iVar6 < (ulong)(param_1[2] - param_1[1]));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar9);
}




void FUN_10052074c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_100520fd8(param_1,1,uVar1,puVar2,(long)puVar2 + uVar1);
  return;
}




void FUN_100520770(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_100520fd8(param_1,2,uVar1,puVar2,(long)puVar2 + uVar1);
  return;
}




void FUN_100520794(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  if (*(uint *)(param_1 + 0x54) < 2) {
    return;
  }
  lVar3 = *param_2;
  lVar4 = param_2[1];
  uVar8 = lVar4 - lVar3;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  local_48 = 0;
  lVar1 = 4;
  if (uVar8 < 0x7e) {
    lVar1 = 2;
  }
  lVar2 = 6;
  if (uVar8 >> 0x10 == 0) {
    lVar2 = 0;
  }
  local_59 = 0;
  FUN_100521238(&local_58,lVar1 + lVar2 + (ulong)*(byte *)(param_1 + 0x58) * 4,&local_59);
  *local_58 = 0x82;
  if (uVar8 < 0x7e) {
    local_58[1] = (byte)uVar8 | *(char *)(param_1 + 0x58) << 7;
    if (*(char *)(param_1 + 0x58) == '\0') goto LAB_100520958;
    local_58[2] = 0x12;
    local_58[3] = 0x34;
    local_58[4] = 0x56;
    puVar6 = local_58 + 5;
  }
  else {
    bVar5 = *(char *)(param_1 + 0x58) != '\0';
    if (uVar8 >> 0x10 == 0) {
      uVar7 = 0x7e;
      if (bVar5) {
        uVar7 = 0xfe;
      }
      local_58[1] = uVar7;
      local_58[2] = (char)(uVar8 >> 8);
      local_58[3] = (byte)uVar8;
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_100520958;
      local_58[4] = 0x12;
      local_58[5] = 0x34;
      local_58[6] = 0x56;
      puVar6 = local_58 + 7;
    }
    else {
      uVar7 = 0x7f;
      if (bVar5) {
        uVar7 = 0xff;
      }
      local_58[1] = uVar7;
      local_58[2] = (char)(uVar8 >> 0x38);
      local_58[3] = (char)(uVar8 >> 0x30);
      local_58[4] = (char)(uVar8 >> 0x28);
      local_58[5] = (char)(uVar8 >> 0x20);
      local_58[6] = (char)(uVar8 >> 0x18);
      local_58[7] = (char)(uVar8 >> 0x10);
      *(ushort *)(local_58 + 8) =
           (ushort)(uVar8 >> 8) & 0xff | (ushort)(((uint)uVar8 & 0xff00ff) << 8);
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_100520958;
      *(undefined2 *)(local_58 + 10) = 0x3412;
      local_58[0xc] = 0x56;
      puVar6 = local_58 + 0xd;
    }
  }
  *puVar6 = 0x78;
LAB_100520958:
  FUN_10052133c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),local_58,local_50);
  FUN_100521784(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),lVar3,lVar4);
  if ((*(char *)(param_1 + 0x58) != '\0') && (uVar8 != 0)) {
    uVar8 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x28) + (lVar3 - lVar4);
      *(byte *)(lVar1 + uVar8) = *(byte *)(lVar1 + uVar8) ^ (&DAT_10115c2d0)[uVar8 & 3];
      uVar8 = uVar8 + 1;
    } while ((lVar3 - lVar4) + uVar8 != 0);
  }
  if (local_58 != (undefined1 *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  return;
}




void FUN_1005209ec(undefined8 param_1)

{
  void *local_28;
  undefined8 uStack_20;
  long local_18;
  
  local_28 = (void *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_10052192c(param_1,9,0,&local_28,&local_28);
  if (local_18 < 0) {
    operator_delete(local_28);
  }
  return;
}




void FUN_100520a30(long param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x54) < 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  puVar1 = operator_new(6);
  *puVar1 = 0x8088;
  *(undefined2 *)(puVar1 + 1) = 0;
  FUN_10052133c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),puVar1,(long)puVar1 + 6);
  operator_delete(puVar1);
  return;
}




undefined4 FUN_100520a98(long param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}




void FUN_100520aa0(long *param_1,undefined8 param_2)

{
  undefined **local_20;
  undefined8 uStack_18;
  
  if (*(int *)((long)param_1 + 0x54) != 2) {
    local_20 = &PTR_FUN_10149eb98;
    uStack_18 = param_2;
    (**(code **)(*param_1 + 0x50))(param_1,&local_20);
  }
  return;
}




void FUN_100520ec8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  size_t sVar6;
  
  pvVar2 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)pvVar2) < param_2) {
    pvVar5 = (void *)*param_1;
    sVar6 = (long)pvVar2 - (long)pvVar5;
    uVar1 = sVar6 + param_2;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100520fcc();
    }
    uVar3 = param_1[2] - (long)pvVar5;
    uVar4 = uVar3 * 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = operator_new(uVar1);
    }
    _bzero((void *)((long)pvVar2 + sVar6),param_2);
    if (0 < (long)sVar6) {
      _memcpy(pvVar2,pvVar5,sVar6);
    }
    *param_1 = pvVar2;
    param_1[1] = (long)((long)pvVar2 + sVar6) + param_2;
    param_1[2] = (long)pvVar2 + uVar1;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      return;
    }
  }
  else {
    pvVar5 = pvVar2;
    if (param_2 != 0) {
      pvVar5 = (void *)((long)pvVar2 + param_2);
      _bzero(pvVar2,param_2);
    }
    param_1[1] = pvVar5;
  }
  return;
}




void FUN_100520fcc(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100520fd8(long param_1,byte param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 local_59;
  byte *local_58;
  byte *local_50;
  undefined8 local_48;
  
  if (*(uint *)(param_1 + 0x54) < 2) {
    return;
  }
  local_58 = (byte *)0x0;
  local_50 = (byte *)0x0;
  local_48 = 0;
  lVar1 = 4;
  if (param_3 < 0x7e) {
    lVar1 = 2;
  }
  lVar2 = 6;
  if (param_3 >> 0x10 == 0) {
    lVar2 = 0;
  }
  local_59 = 0;
  FUN_100521238(&local_58,lVar1 + lVar2 + (ulong)*(byte *)(param_1 + 0x58) * 4,&local_59);
  *local_58 = param_2 | 0x80;
  if (param_3 < 0x7e) {
    local_58[1] = (byte)param_3 | *(char *)(param_1 + 0x58) << 7;
    if (*(char *)(param_1 + 0x58) == '\0') goto LAB_1005211a4;
    local_58[2] = 0x12;
    local_58[3] = 0x34;
    local_58[4] = 0x56;
    pbVar4 = local_58 + 5;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x58) != '\0';
    if (param_3 >> 0x10 == 0) {
      bVar6 = 0x7e;
      if (bVar3) {
        bVar6 = 0xfe;
      }
      local_58[1] = bVar6;
      local_58[2] = (byte)(param_3 >> 8);
      local_58[3] = (byte)param_3;
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_1005211a4;
      local_58[4] = 0x12;
      local_58[5] = 0x34;
      local_58[6] = 0x56;
      pbVar4 = local_58 + 7;
    }
    else {
      bVar6 = 0x7f;
      if (bVar3) {
        bVar6 = 0xff;
      }
      local_58[1] = bVar6;
      local_58[2] = (byte)(param_3 >> 0x38);
      local_58[3] = (byte)(param_3 >> 0x30);
      local_58[4] = (byte)(param_3 >> 0x28);
      local_58[5] = (byte)(param_3 >> 0x20);
      local_58[6] = (byte)(param_3 >> 0x18);
      local_58[7] = (byte)(param_3 >> 0x10);
      *(ushort *)(local_58 + 8) =
           (ushort)(param_3 >> 8) & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_1005211a4;
      local_58[10] = 0x12;
      local_58[0xb] = 0x34;
      local_58[0xc] = 0x56;
      pbVar4 = local_58 + 0xd;
    }
  }
  *pbVar4 = 0x78;
LAB_1005211a4:
  FUN_10052133c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),local_58,local_50);
  FUN_1005214e4(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4,param_5);
  if ((*(char *)(param_1 + 0x58) != '\0') && (param_3 != 0)) {
    uVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x28) - param_3;
      *(byte *)(lVar1 + uVar5) = *(byte *)(lVar1 + uVar5) ^ (&DAT_10115c2d0)[uVar5 & 3];
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_3);
  }
  if (local_58 != (byte *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  return;
}




void FUN_100521238(long *param_1,ulong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  uVar2 = param_1[2];
  puVar1 = (undefined1 *)*param_1;
  if (uVar2 - (long)puVar1 < param_2) {
    if (puVar1 != (undefined1 *)0x0) {
      param_1[1] = (long)puVar1;
      operator_delete(puVar1);
      uVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100520fcc();
    }
    uVar3 = param_2;
    if (param_2 <= uVar2 << 1) {
      uVar3 = uVar2 << 1;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    FUN_100521694(param_1,uVar3);
    puVar1 = (undefined1 *)param_1[1] + param_2;
    puVar5 = (undefined1 *)param_1[1];
    do {
      *puVar5 = *param_3;
      param_2 = param_2 - 1;
      puVar5 = puVar5 + 1;
    } while (param_2 != 0);
  }
  else {
    uVar3 = param_1[1] - (long)puVar1;
    uVar2 = uVar3;
    if (param_2 <= uVar3) {
      uVar2 = param_2;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_3;
      puVar1 = puVar1 + 1;
    }
    if (param_2 <= uVar3) {
      param_1[1] = *param_1 + param_2;
      return;
    }
    puVar5 = (undefined1 *)param_1[1];
    lVar4 = param_2 - uVar3;
    puVar1 = puVar5;
    if (lVar4 != 0) {
      puVar1 = puVar5 + lVar4;
      do {
        *puVar5 = *param_3;
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar4 != 0);
    }
  }
  param_1[1] = (long)puVar1;
  return;
}




void * FUN_10052133c(long *param_1,void *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  size_t sVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  void *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long *local_48;
  
  lVar8 = (long)param_4 - (long)param_3;
  if (0 < lVar8) {
    puVar3 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar3 < lVar8) {
      lVar5 = *param_1;
      puVar3 = puVar3 + (lVar8 - lVar5);
      if ((long)puVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_100520fcc();
      }
      local_48 = param_1 + 2;
      uVar4 = param_1[2] - lVar5;
      puVar6 = (undefined1 *)(uVar4 * 2);
      if (puVar3 <= puVar6) {
        puVar3 = puVar6;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar3 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar3 == (undefined1 *)0x0) {
        local_68 = (void *)0x0;
      }
      else {
        local_68 = operator_new((ulong)puVar3);
      }
      local_60 = (undefined1 *)((long)local_68 + ((long)param_2 - lVar5));
      local_50 = (undefined1 *)((long)local_68 + (long)puVar3);
      local_58 = local_60 + lVar8;
      puVar3 = local_60;
      do {
        *puVar3 = *param_3;
        lVar8 = lVar8 + -1;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      } while (lVar8 != 0);
      param_2 = (void *)FUN_1005216d0(param_1,&local_68,param_2);
      if (local_58 != local_60) {
        local_58 = local_60;
      }
      if (local_68 != (void *)0x0) {
        operator_delete(local_68);
      }
    }
    else {
      lVar5 = (long)puVar3 - (long)param_2;
      puVar6 = puVar3;
      if (lVar5 < lVar8) {
        for (puVar7 = param_3 + lVar5; puVar7 != param_4; puVar7 = puVar7 + 1) {
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 1;
        }
        param_1[1] = (long)puVar6;
        param_4 = param_3 + lVar5;
        if (lVar5 < 1) {
          return param_2;
        }
      }
      sVar2 = (long)puVar6 - ((long)param_2 + lVar8);
      puVar1 = puVar6;
      for (puVar7 = puVar6 + -lVar8; puVar7 < puVar3; puVar7 = puVar7 + 1) {
        *puVar1 = *puVar7;
        puVar1 = puVar1 + 1;
      }
      param_1[1] = (long)puVar1;
      if (sVar2 != 0) {
        _memmove(puVar6 + -sVar2,param_2,sVar2);
      }
      if ((long)param_4 - (long)param_3 != 0) {
        _memmove(param_2,param_3,(long)param_4 - (long)param_3);
      }
    }
  }
  return param_2;
}




undefined1 *
FUN_1005214e4(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  size_t sVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  void *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long *local_48;
  
  lVar8 = (long)param_4 - (long)param_3;
  if (0 < lVar8) {
    puVar3 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar3 < lVar8) {
      lVar5 = *param_1;
      puVar3 = puVar3 + (lVar8 - lVar5);
      if ((long)puVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_100520fcc();
      }
      local_48 = param_1 + 2;
      uVar4 = param_1[2] - lVar5;
      puVar6 = (undefined1 *)(uVar4 * 2);
      if (puVar3 <= puVar6) {
        puVar3 = puVar6;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar3 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar3 == (undefined1 *)0x0) {
        local_68 = (void *)0x0;
      }
      else {
        local_68 = operator_new((ulong)puVar3);
      }
      local_60 = (undefined1 *)((long)local_68 + ((long)param_2 - lVar5));
      local_50 = (undefined1 *)((long)local_68 + (long)puVar3);
      local_58 = local_60 + lVar8;
      puVar3 = local_60;
      do {
        *puVar3 = *param_3;
        lVar8 = lVar8 + -1;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      } while (lVar8 != 0);
      param_2 = (undefined1 *)FUN_1005216d0(param_1,&local_68,param_2);
      if (local_58 != local_60) {
        local_58 = local_60;
      }
      if (local_68 != (void *)0x0) {
        operator_delete(local_68);
      }
    }
    else {
      lVar5 = (long)puVar3 - (long)param_2;
      puVar6 = puVar3;
      if (lVar5 < lVar8) {
        for (puVar7 = param_3 + lVar5; puVar7 != param_4; puVar7 = puVar7 + 1) {
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 1;
        }
        param_1[1] = (long)puVar6;
        param_4 = param_3 + lVar5;
        if (lVar5 < 1) {
          return param_2;
        }
      }
      sVar2 = (long)puVar6 - (long)(param_2 + lVar8);
      puVar1 = puVar6;
      for (puVar7 = puVar6 + -lVar8; puVar7 < puVar3; puVar7 = puVar7 + 1) {
        *puVar1 = *puVar7;
        puVar1 = puVar1 + 1;
      }
      param_1[1] = (long)puVar1;
      puVar3 = param_2;
      if (sVar2 != 0) {
        _memmove(puVar6 + -sVar2,param_2,sVar2);
      }
      for (; param_4 != param_3; param_3 = param_3 + 1) {
        *puVar3 = *param_3;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return param_2;
}




void FUN_100521694(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (-1 < (long)param_2) {
    pvVar1 = operator_new(param_2);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (long)pvVar1 + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100520fcc();
}




long FUN_1005216d0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  
  lVar7 = param_2[1];
  pvVar2 = (void *)*param_1;
  sVar3 = (long)param_3 - (long)pvVar2;
  pvVar1 = (void *)(lVar7 - sVar3);
  param_2[1] = pvVar1;
  if (0 < (long)sVar3) {
    _memcpy(pvVar1,pvVar2,sVar3);
  }
  puVar4 = (undefined1 *)param_1[1];
  if (puVar4 != param_3) {
    puVar6 = (undefined1 *)param_2[2];
    do {
      puVar8 = param_3 + 1;
      *puVar6 = *param_3;
      puVar6 = (undefined1 *)(param_2[2] + 1);
      param_2[2] = puVar6;
      param_3 = puVar8;
    } while (puVar8 != puVar4);
  }
  uVar5 = *param_1;
  *param_1 = param_2[1];
  param_2[1] = uVar5;
  uVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar5;
  uVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar5;
  *param_2 = param_2[1];
  return lVar7;
}




void * FUN_100521784(long *param_1,void *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  size_t sVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  void *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long *local_48;
  
  lVar8 = (long)param_4 - (long)param_3;
  if (0 < lVar8) {
    puVar3 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar3 < lVar8) {
      lVar5 = *param_1;
      puVar3 = puVar3 + (lVar8 - lVar5);
      if ((long)puVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_100520fcc();
      }
      local_48 = param_1 + 2;
      uVar4 = param_1[2] - lVar5;
      puVar6 = (undefined1 *)(uVar4 * 2);
      if (puVar3 <= puVar6) {
        puVar3 = puVar6;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar3 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar3 == (undefined1 *)0x0) {
        local_68 = (void *)0x0;
      }
      else {
        local_68 = operator_new((ulong)puVar3);
      }
      local_60 = (undefined1 *)((long)local_68 + ((long)param_2 - lVar5));
      local_50 = (undefined1 *)((long)local_68 + (long)puVar3);
      local_58 = local_60 + lVar8;
      puVar3 = local_60;
      do {
        *puVar3 = *param_3;
        lVar8 = lVar8 + -1;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      } while (lVar8 != 0);
      param_2 = (void *)FUN_1005216d0(param_1,&local_68,param_2);
      if (local_58 != local_60) {
        local_58 = local_60;
      }
      if (local_68 != (void *)0x0) {
        operator_delete(local_68);
      }
    }
    else {
      lVar5 = (long)puVar3 - (long)param_2;
      puVar6 = puVar3;
      if (lVar5 < lVar8) {
        for (puVar7 = param_3 + lVar5; puVar7 != param_4; puVar7 = puVar7 + 1) {
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 1;
        }
        param_1[1] = (long)puVar6;
        param_4 = param_3 + lVar5;
        if (lVar5 < 1) {
          return param_2;
        }
      }
      sVar2 = (long)puVar6 - ((long)param_2 + lVar8);
      puVar1 = puVar6;
      for (puVar7 = puVar6 + -lVar8; puVar7 < puVar3; puVar7 = puVar7 + 1) {
        *puVar1 = *puVar7;
        puVar1 = puVar1 + 1;
      }
      param_1[1] = (long)puVar1;
      if (sVar2 != 0) {
        _memmove(puVar6 + -sVar2,param_2,sVar2);
      }
      if ((long)param_4 - (long)param_3 != 0) {
        _memmove(param_2,param_3,(long)param_4 - (long)param_3);
      }
    }
  }
  return param_2;
}




void FUN_10052192c(long param_1,byte param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  undefined1 local_59;
  byte *local_58;
  byte *local_50;
  undefined8 local_48;
  
  if (*(uint *)(param_1 + 0x54) < 2) {
    return;
  }
  local_58 = (byte *)0x0;
  local_50 = (byte *)0x0;
  local_48 = 0;
  lVar1 = 4;
  if (param_3 < 0x7e) {
    lVar1 = 2;
  }
  lVar2 = 6;
  if (param_3 >> 0x10 == 0) {
    lVar2 = 0;
  }
  local_59 = 0;
  FUN_100521238(&local_58,lVar1 + lVar2 + (ulong)*(byte *)(param_1 + 0x58) * 4,&local_59);
  *local_58 = param_2 | 0x80;
  if (param_3 < 0x7e) {
    local_58[1] = (byte)param_3 | *(char *)(param_1 + 0x58) << 7;
    if (*(char *)(param_1 + 0x58) == '\0') goto LAB_100521af8;
    local_58[2] = 0x12;
    local_58[3] = 0x34;
    local_58[4] = 0x56;
    pbVar4 = local_58 + 5;
  }
  else {
    bVar3 = *(char *)(param_1 + 0x58) != '\0';
    if (param_3 >> 0x10 == 0) {
      bVar6 = 0x7e;
      if (bVar3) {
        bVar6 = 0xfe;
      }
      local_58[1] = bVar6;
      local_58[2] = (byte)(param_3 >> 8);
      local_58[3] = (byte)param_3;
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_100521af8;
      local_58[4] = 0x12;
      local_58[5] = 0x34;
      local_58[6] = 0x56;
      pbVar4 = local_58 + 7;
    }
    else {
      bVar6 = 0x7f;
      if (bVar3) {
        bVar6 = 0xff;
      }
      local_58[1] = bVar6;
      local_58[2] = (byte)(param_3 >> 0x38);
      local_58[3] = (byte)(param_3 >> 0x30);
      local_58[4] = (byte)(param_3 >> 0x28);
      local_58[5] = (byte)(param_3 >> 0x20);
      local_58[6] = (byte)(param_3 >> 0x18);
      local_58[7] = (byte)(param_3 >> 0x10);
      *(ushort *)(local_58 + 8) =
           (ushort)(param_3 >> 8) & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
      if (*(char *)(param_1 + 0x58) == '\0') goto LAB_100521af8;
      local_58[10] = 0x12;
      local_58[0xb] = 0x34;
      local_58[0xc] = 0x56;
      pbVar4 = local_58 + 0xd;
    }
  }
  *pbVar4 = 0x78;
LAB_100521af8:
  FUN_10052133c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),local_58,local_50);
  FUN_100521b8c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4,param_5);
  if ((*(char *)(param_1 + 0x58) != '\0') && (param_3 != 0)) {
    uVar5 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x28) - param_3;
      *(byte *)(lVar1 + uVar5) = *(byte *)(lVar1 + uVar5) ^ (&DAT_10115c2d0)[uVar5 & 3];
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_3);
  }
  if (local_58 != (byte *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  return;
}




undefined1 *
FUN_100521b8c(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  size_t sVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  void *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long *local_48;
  
  lVar8 = (long)param_4 - (long)param_3;
  if (0 < lVar8) {
    puVar3 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar3 < lVar8) {
      lVar5 = *param_1;
      puVar3 = puVar3 + (lVar8 - lVar5);
      if ((long)puVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_100520fcc();
      }
      local_48 = param_1 + 2;
      uVar4 = param_1[2] - lVar5;
      puVar6 = (undefined1 *)(uVar4 * 2);
      if (puVar3 <= puVar6) {
        puVar3 = puVar6;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar3 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar3 == (undefined1 *)0x0) {
        local_68 = (void *)0x0;
      }
      else {
        local_68 = operator_new((ulong)puVar3);
      }
      local_60 = (undefined1 *)((long)local_68 + ((long)param_2 - lVar5));
      local_50 = (undefined1 *)((long)local_68 + (long)puVar3);
      local_58 = local_60 + lVar8;
      puVar3 = local_60;
      do {
        *puVar3 = *param_3;
        lVar8 = lVar8 + -1;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      } while (lVar8 != 0);
      param_2 = (undefined1 *)FUN_1005216d0(param_1,&local_68,param_2);
      if (local_58 != local_60) {
        local_58 = local_60;
      }
      if (local_68 != (void *)0x0) {
        operator_delete(local_68);
      }
    }
    else {
      lVar5 = (long)puVar3 - (long)param_2;
      puVar6 = puVar3;
      if (lVar5 < lVar8) {
        for (puVar7 = param_3 + lVar5; puVar7 != param_4; puVar7 = puVar7 + 1) {
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 1;
        }
        param_1[1] = (long)puVar6;
        param_4 = param_3 + lVar5;
        if (lVar5 < 1) {
          return param_2;
        }
      }
      sVar2 = (long)puVar6 - (long)(param_2 + lVar8);
      puVar1 = puVar6;
      for (puVar7 = puVar6 + -lVar8; puVar7 < puVar3; puVar7 = puVar7 + 1) {
        *puVar1 = *puVar7;
        puVar1 = puVar1 + 1;
      }
      param_1[1] = (long)puVar1;
      puVar3 = param_2;
      if (sVar2 != 0) {
        _memmove(puVar6 + -sVar2,param_2,sVar2);
      }
      for (; param_4 != param_3; param_3 = param_3 + 1) {
        *puVar3 = *param_3;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return param_2;
}




void FUN_100521d3c(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 **local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  puVar4 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  uVar5 = (long)puVar1 - (long)puVar4;
  if (uVar5 < 0xfffffffffffffff0) {
    if (uVar5 < 0x17) {
      uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
      pppuVar2 = &local_58;
    }
    else {
      uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pppuVar2 = operator_new(uVar3);
      uStack_48 = uVar3 | 0x8000000000000000;
      local_58 = pppuVar2;
      local_50 = uVar5;
    }
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *(undefined1 *)pppuVar2 = *puVar4;
      pppuVar2 = (undefined8 ***)((long)pppuVar2 + 1);
    }
    *(undefined1 *)pppuVar2 = 0;
    (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_58);
    if ((long)uStack_48 < 0) {
      operator_delete(local_58);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10051fb8c();
}




undefined8 * FUN_100521df0(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_100521694(param_1,param_2[1] - *param_2);
    pvVar1 = (void *)param_1[1];
    sVar2 = param_2[1] - *param_2;
    if (0 < (long)sVar2) {
      _memcpy(pvVar1,(void *)*param_2,sVar2);
      pvVar1 = (void *)((long)pvVar1 + sVar2);
    }
    param_1[1] = pvVar1;
  }
  return param_1;
}




undefined8 FUN_100521e60(void)

{
  return 0;
}




undefined8 FUN_100521e68(void)

{
  return 0xfffffff9;
}




undefined8 FUN_100521e70(void)

{
  return 0;
}




void FUN_100521e78(void)

{
  return;
}




long FUN_100521e7c(long param_1)

{
  if (*(char *)(param_1 + 0x12f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x118));
  }
  if (*(char *)(param_1 + 0x117) < '\0') {
    operator_delete(*(void **)(param_1 + 0x100));
  }
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xcf) < '\0') {
    operator_delete(*(void **)(param_1 + 0xb8));
  }
  if (*(char *)(param_1 + 0xb7) < '\0') {
    operator_delete(*(void **)(param_1 + 0xa0));
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  return param_1;
}




long FUN_100521f3c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1000ee4ec(param_1,"");
  FUN_1000ee4ec(lVar1 + 0x18,"");
  FUN_1000ee4ec(param_1 + 0x30,"");
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  return param_1;
}




long FUN_100521f8c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1000ee4ec(param_1,"");
  FUN_1000ee4ec(lVar1 + 0x18,"");
  FUN_1000ee4ec(param_1 + 0x30,"");
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  return param_1;
}




void FUN_100521fdc(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x28;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        uVar6 = puVar4[3];
        *(undefined8 *)(lVar3 + 0x20) = puVar4[4];
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        puVar4 = puVar4 + 5;
        pvVar2 = (void *)(lVar3 + 0x28);
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x28;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 5;
          lVar5 = lVar5 + -0x28;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




ulong FUN_1005220b4(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (((*(uint *)(param_2 + 2) ^ uVar1) & 0xff) == 0) {
    switch(uVar1 & 0xff) {
    case 3:
      if ((int)param_1[1] == (int)param_2[1]) {
        if ((int)param_1[1] == 0) goto switchD_100522120_default;
        lVar6 = *param_1;
        while ((lVar4 = FUN_10052223c(param_2,lVar6),
               *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4 &&
               (uVar3 = FUN_1005220b4(lVar6 + 0x18,lVar4 + 0x18), (uVar3 & 1) != 0))) {
          lVar6 = lVar6 + 0x30;
          if (lVar6 == *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30) {
            return 1;
          }
        }
      }
      goto LAB_1005220dc;
    case 4:
      if ((int)param_1[1] != (int)param_2[1]) goto LAB_1005220dc;
      if ((int)param_1[1] != 0) {
        lVar6 = 0;
        uVar3 = 0;
        do {
          uVar5 = FUN_1005220b4(*param_1 + lVar6,*param_2 + lVar6);
          if ((uVar5 & 1) == 0) {
            return uVar5;
          }
          uVar3 = uVar3 + 1;
          lVar6 = lVar6 + 0x18;
        } while (uVar3 < *(uint *)(param_1 + 1));
        return uVar5;
      }
    default:
switchD_100522120_default:
      uVar3 = 1;
      break;
    case 5:
      uVar3 = FUN_1000e8750(param_1,param_2);
      return uVar3;
    case 6:
      if (((uVar1 | *(uint *)(param_2 + 2)) >> 0xe & 1) == 0) {
        bVar2 = *param_1 == *param_2;
      }
      else {
        dVar7 = (double)FUN_1000fceec(param_1);
        dVar8 = (double)FUN_1000fceec(param_2);
        bVar2 = dVar7 == dVar8;
      }
      return (ulong)bVar2;
    }
  }
  else {
LAB_1005220dc:
    uVar3 = 0;
  }
  return uVar3;
}




long FUN_10052223c(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((int)param_1[1] != 0) {
    do {
      iVar1 = FUN_1000e8750(param_2,lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30);
  }
  return lVar2;
}




undefined8 FUN_1005222a0(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  param_1[4] = param_1[4] + -0x10;
  lVar2 = *param_1;
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(lVar2,1);
    puVar1 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1 + 1;
  *puVar1 = 0x5d;
  return 1;
}




undefined8 FUN_1005222fc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_100112734(param_1,6);
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x18);
  if (*(ulong *)(lVar1 + 0x20) <= lVar2 + 10U) {
    FUN_1000f9034(lVar1,10);
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar2 + 10;
  lVar1 = FUN_100112d5c(param_2,lVar2);
  *(long *)(*param_1 + 0x18) = (lVar1 - lVar2) + *(long *)(*param_1 + 0x18) + -10;
  return 1;
}




undefined8 FUN_100522380(long *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  FUN_100112734(param_1,6);
  lVar2 = *param_1;
  puVar3 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar3 + 0x15) {
    FUN_1000f9034(lVar2,0x15);
    puVar3 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar3 + 0x15;
  puVar1 = puVar3;
  if (param_2 < 0) {
    *puVar3 = 0x2d;
    param_2 = -param_2;
    puVar1 = puVar3 + 1;
  }
  lVar2 = FUN_100113028(param_2,puVar1);
  *(long *)(*param_1 + 0x18) = (lVar2 - (long)puVar3) + *(long *)(*param_1 + 0x18) + -0x15;
  return 1;
}




undefined8 FUN_10052241c(double param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_100112734(param_2,6);
  lVar3 = *param_2;
  puVar4 = *(undefined2 **)(lVar3 + 0x18);
  if (*(undefined1 **)(lVar3 + 0x20) <= (undefined1 *)((long)puVar4 + 0x19)) {
    FUN_1000f9034(lVar3,0x19);
    puVar4 = *(undefined2 **)(lVar3 + 0x18);
  }
  *(undefined1 **)(lVar3 + 0x18) = (undefined1 *)((long)puVar4 + 0x19);
  if (ABS(param_1) == 0.0) {
    puVar2 = puVar4;
    if ((long)param_1 < 0) {
      puVar2 = (undefined2 *)((long)puVar4 + 1);
      *(undefined1 *)puVar4 = 0x2d;
    }
    *puVar2 = 0x2e30;
    *(undefined1 *)(puVar2 + 1) = 0x30;
    puVar1 = (undefined1 *)((long)puVar2 + 3);
  }
  else {
    puVar2 = puVar4;
    if (param_1 < 0.0) {
      *(undefined1 *)puVar4 = 0x2d;
      param_1 = -param_1;
      puVar2 = (undefined2 *)((long)puVar4 + 1);
    }
    FUN_100113658(param_1,puVar2,&uStack_44,&local_48);
    puVar1 = (undefined1 *)FUN_10011381c(puVar2,uStack_44,local_48);
  }
  *(undefined1 **)(*param_2 + 0x18) = puVar1 + (*(long *)(*param_2 + 0x18) - (long)puVar4) + -0x19;
  return 1;
}




void FUN_10052251c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  puVar1 = param_1;
  if ((*(uint *)(param_2 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x60) >> 3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar3 = *(undefined1 **)(param_2 + 0x10);
    puVar4 = *(undefined1 **)(param_2 + 0x20);
    uVar5 = (long)puVar4 - (long)puVar3;
    if (0xffffffffffffffef < uVar5) {
LAB_10052262c:
                    /* WARNING: Subroutine does not return */
      FUN_10051fb8c();
    }
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar5;
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = operator_new(uVar2);
      param_1[1] = uVar5;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
      *(undefined1 *)puVar1 = *puVar3;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
  }
  else {
    puVar4 = *(undefined1 **)(param_2 + 0x30);
    puVar3 = *(undefined1 **)(param_2 + 0x58);
    if (*(undefined1 **)(param_2 + 0x58) < puVar4) {
      *(undefined1 **)(param_2 + 0x58) = puVar4;
      puVar3 = puVar4;
    }
    puVar4 = *(undefined1 **)(param_2 + 0x28);
    uVar5 = (long)puVar3 - (long)puVar4;
    if (0xffffffffffffffef < uVar5) goto LAB_10052262c;
    if (uVar5 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar5;
    }
    else {
      uVar2 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar1 = operator_new(uVar2);
      param_1[1] = uVar5;
      param_1[2] = uVar2 | 0x8000000000000000;
      *param_1 = puVar1;
    }
    for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
      *(undefined1 *)puVar1 = *puVar4;
      puVar1 = (undefined8 *)((long)puVar1 + 1);
    }
  }
  *(undefined1 *)puVar1 = 0;
  return;
}




undefined8 * FUN_100522630(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_60 = param_1[5];
  pvStack_50 = (void *)0x0;
  local_58 = (void *)0x0;
  uStack_40 = 0;
  local_48 = 0;
  local_38 = 0x100;
  local_30 = 0;
  local_28 = 0;
  auVar3 = FUN_1005226d8(&local_60,param_2,param_1);
  *(undefined1 (*) [16])(param_1 + 0xb) = auVar3;
  if (auVar3._0_4_ == 0) {
    lVar1 = param_1[8];
    param_1[8] = lVar1 + -0x18;
    uVar2 = *(undefined8 *)(lVar1 + -0x18);
    param_1[1] = *(undefined8 *)(lVar1 + -0x10);
    *param_1 = uVar2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + -8);
    *(undefined4 *)(lVar1 + -8) = 0;
  }
  param_1[8] = param_1[7];
  FUN_1000f94c4(param_1 + 5);
  _free(pvStack_50);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  return param_1;
}




undefined1  [16] FUN_1005226d8(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pbVar1 = (byte *)*param_2;
  for (pbVar2 = pbVar1; *pbVar2 < 0x21 && (1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0;
      pbVar2 = pbVar2 + 1) {
    pbVar1 = pbVar1 + 1;
  }
  *param_2 = pbVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar2 == 0) {
      lVar3 = param_2[1];
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(long *)(param_1 + 0x38) = (long)pbVar1 - lVar3;
    }
    else {
      FUN_100522774(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return *(undefined1 (*) [16])(param_1 + 0x30);
}




void FUN_100522774(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)*param_2;
  if (cVar1 < 'n') {
    if (cVar1 == '\"') {
      FUN_1005229e8();
      return;
    }
    if (cVar1 == '[') {
      FUN_100522d0c();
      return;
    }
    if (cVar1 == 'f') {
      FUN_100522928();
      return;
    }
  }
  else {
    if (cVar1 == '{') {
      FUN_100522a8c();
      return;
    }
    if (cVar1 == 't') {
      FUN_10052287c();
      return;
    }
    if (cVar1 == 'n') {
      FUN_1005227d4();
      return;
    }
  }
  FUN_100522ec8();
  return;
}




void FUN_1005227d4(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'u') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'l') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 'l') {
        puVar1 = *(undefined8 **)(param_3 + 0x40);
        if (*(undefined8 **)(param_3 + 0x48) <= puVar1 + 3) {
          FUN_1000f8b34(param_3 + 0x28,1);
          puVar1 = *(undefined8 **)(param_3 + 0x40);
        }
        *(undefined8 **)(param_3 + 0x40) = puVar1 + 3;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        return;
      }
    }
  }
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(ulong *)(param_1 + 0x38) = ~uVar4 + lVar2;
  return;
}




void FUN_10052287c(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'r') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'u') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 'e') {
        puVar1 = *(undefined8 **)(param_3 + 0x40);
        if (*(undefined8 **)(param_3 + 0x48) <= puVar1 + 3) {
          FUN_1000f8b34(param_3 + 0x28,1);
          puVar1 = *(undefined8 **)(param_3 + 0x40);
        }
        *(undefined8 **)(param_3 + 0x40) = puVar1 + 3;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0x102;
        return;
      }
    }
  }
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(ulong *)(param_1 + 0x38) = ~uVar4 + lVar2;
  return;
}




void FUN_100522928(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'a') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'l') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 's') {
        lVar2 = lVar3 + 5;
        *param_2 = lVar2;
        if (*(char *)(lVar3 + 4) == 'e') {
          puVar1 = *(undefined8 **)(param_3 + 0x40);
          if (*(undefined8 **)(param_3 + 0x48) <= puVar1 + 3) {
            FUN_1000f8b34(param_3 + 0x28,1);
            puVar1 = *(undefined8 **)(param_3 + 0x40);
          }
          *(undefined8 **)(param_3 + 0x40) = puVar1 + 3;
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0x101;
          return;
        }
      }
    }
  }
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(ulong *)(param_1 + 0x38) = ~uVar4 + lVar2;
  return;
}




void FUN_1005229e8(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long local_60;
  uint local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  
  lStack_48 = param_2[1];
  local_50 = *param_2;
  local_58 = 0;
  local_60 = param_1;
  local_40 = param_2;
  FUN_100523540(param_1,&local_50,&local_60);
  if (*(int *)(param_1 + 0x30) == 0) {
    lVar2 = *(long *)(local_60 + 0x18) - (ulong)local_58;
    *(long *)(local_60 + 0x18) = lVar2;
    uVar1 = FUN_1000f8dcc(param_3,lVar2,local_58 - 1,1);
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(long *)(param_1 + 0x38) = local_50 - lStack_48;
    }
  }
  local_40[1] = lStack_48;
  *local_40 = local_50;
  return;
}




void FUN_100522a8c(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  
  *param_2 = *param_2 + 1;
  puVar2 = *(undefined8 **)(param_3 + 0x40);
  if (*(undefined8 **)(param_3 + 0x48) <= puVar2 + 3) {
    FUN_1000f8b34(param_3 + 0x28,1);
    puVar2 = *(undefined8 **)(param_3 + 0x40);
  }
  *(undefined8 **)(param_3 + 0x40) = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 3;
  for (pbVar3 = (byte *)*param_2;
      *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0; pbVar3 = pbVar3 + 1) {
  }
  *param_2 = (long)pbVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar3 == 0x22) {
      iVar8 = 0;
      while (FUN_1005229e8(param_1,param_2,param_3,1), *(int *)(param_1 + 0x30) == 0) {
        pbVar3 = (byte *)*param_2;
        pbVar5 = pbVar3;
        for (; pbVar5 = pbVar5 + 1,
            *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar7 = pbVar3 + 1;
        *param_2 = (long)pbVar7;
        if (*pbVar3 != 0x3a) {
          lVar4 = (long)pbVar5 - param_2[1];
          uVar6 = 5;
          goto LAB_100522ca8;
        }
        for (; *pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0;
            pbVar7 = pbVar7 + 1) {
        }
        *param_2 = (long)pbVar7;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_100522774(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar5 = (byte *)*param_2;
        pbVar7 = pbVar5;
        for (; pbVar7 = pbVar7 + 1,
            *pbVar5 < 0x21 && (1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0;
            pbVar5 = pbVar5 + 1) {
        }
        *param_2 = (long)pbVar5;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar8 = iVar8 + 1;
        pbVar3 = pbVar5 + 1;
        *param_2 = (long)pbVar3;
        if (*pbVar5 != 0x2c) {
          if (*pbVar5 == 0x7d) {
            uVar1 = FUN_1000f91e8(param_3,iVar8);
            if ((uVar1 & 1) != 0) {
              return;
            }
            lVar4 = *param_2 - param_2[1];
            uVar6 = 0x10;
          }
          else {
            lVar4 = (long)pbVar7 - param_2[1];
            uVar6 = 6;
          }
          goto LAB_100522ca8;
        }
        for (; *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        if (*pbVar3 != 0x22) goto LAB_100522c9c;
      }
    }
    else if (*pbVar3 == 0x7d) {
      *param_2 = (long)(pbVar3 + 1);
      lVar4 = *(long *)(param_3 + 0x40);
      *(undefined4 *)(lVar4 + -8) = 3;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
    }
    else {
LAB_100522c9c:
      lVar4 = (long)pbVar3 - param_2[1];
      uVar6 = 4;
LAB_100522ca8:
      *(undefined4 *)(param_1 + 0x30) = uVar6;
      *(long *)(param_1 + 0x38) = lVar4;
    }
  }
  return;
}




void FUN_100522d0c(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  
  *param_2 = *param_2 + 1;
  puVar2 = *(undefined8 **)(param_3 + 0x40);
  if (*(undefined8 **)(param_3 + 0x48) <= puVar2 + 3) {
    FUN_1000f8b34(param_3 + 0x28,1);
    puVar2 = *(undefined8 **)(param_3 + 0x40);
  }
  *(undefined8 **)(param_3 + 0x40) = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 4;
  for (pbVar3 = (byte *)*param_2;
      *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0; pbVar3 = pbVar3 + 1) {
  }
  *param_2 = (long)pbVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar3 == 0x5d) {
      *param_2 = (long)(pbVar3 + 1);
      lVar4 = *(long *)(param_3 + 0x40);
      *(undefined4 *)(lVar4 + -8) = 4;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
    }
    else {
      iVar8 = 0;
      do {
        FUN_100522774(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = (byte *)*param_2;
        pbVar5 = pbVar3;
        for (; pbVar5 = pbVar5 + 1,
            *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar8 = iVar8 + 1;
        pbVar7 = pbVar3 + 1;
        *param_2 = (long)pbVar7;
        if (*pbVar3 != 0x2c) {
          if (*pbVar3 == 0x5d) {
            uVar1 = FUN_1000f9260(param_3,iVar8);
            if ((uVar1 & 1) != 0) {
              return;
            }
            lVar4 = *param_2 - param_2[1];
            uVar6 = 0x10;
          }
          else {
            lVar4 = (long)pbVar5 - param_2[1];
            uVar6 = 7;
          }
          *(undefined4 *)(param_1 + 0x30) = uVar6;
          *(long *)(param_1 + 0x38) = lVar4;
          return;
        }
        for (; *pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0;
            pbVar7 = pbVar7 + 1) {
        }
        *param_2 = (long)pbVar7;
      } while (*(int *)(param_1 + 0x30) == 0);
    }
  }
  return;
}




void FUN_100522ec8(long param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  double dVar19;
  double dVar20;
  
  pbVar17 = (byte *)*param_2;
  lVar1 = param_2[1];
  bVar3 = *pbVar17;
  bVar2 = bVar3;
  if (bVar3 == 0x2d) {
    pbVar17 = pbVar17 + 1;
    bVar2 = *pbVar17;
  }
  uVar10 = bVar2 - 0x30;
  uVar6 = (ulong)uVar10;
  if (uVar10 == 0) {
    uVar7 = 0;
    bVar4 = false;
    uVar12 = 0;
    bVar5 = false;
    dVar19 = 0.0;
    pbVar18 = pbVar17 + 1;
    uVar10 = (uint)*pbVar18;
    goto LAB_100522f2c;
  }
  if (bVar2 - 0x31 < 9) {
    pbVar18 = pbVar17 + 1;
    uVar10 = (uint)*pbVar18;
    uVar15 = uVar10 - 0x30 & 0xff;
    dVar19 = 0.0;
    if (bVar3 == 0x2d) {
      if (uVar15 < 10) {
        uVar12 = 0;
LAB_100522f94:
        uVar13 = uVar12;
        uVar15 = (uint)uVar6;
        if (uVar15 < 0xccccccc) {
LAB_100522fb4:
          uVar6 = (ulong)((uVar15 * 10 + uVar10) - 0x30);
          uVar10 = (uint)pbVar17[uVar13 + 2];
          uVar12 = uVar13 + 1;
          if (9 < uVar10 - 0x30) goto code_r0x000100522fd8;
          goto LAB_100522f94;
        }
        uVar12 = uVar13;
        if (uVar15 != 0xccccccc) goto LAB_100523410;
        if ((char)uVar10 < '9') goto LAB_100522fb4;
        uVar10 = 0x39;
        uVar6 = 0xccccccc;
LAB_100523410:
        pbVar18 = pbVar17 + uVar12 + 1;
        uVar7 = uVar6;
        if (bVar3 == 0x2d) {
          do {
            if ((0xccccccccccccccb < uVar7) &&
               ((uVar7 != 0xccccccccccccccc || ('8' < (char)uVar10)))) goto LAB_1005234dc;
            uVar15 = uVar10 - 0x30;
            pbVar18 = pbVar18 + 1;
            uVar10 = (uint)*pbVar18;
            uVar7 = (ulong)uVar15 + uVar7 * 10;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar10 - 0x30 < 10);
        }
        else {
          do {
            if ((0x1999999999999998 < uVar7) &&
               ((uVar7 != 0x1999999999999999 || ('5' < (char)uVar10)))) goto LAB_1005234dc;
            uVar15 = uVar10 - 0x30;
            pbVar18 = pbVar18 + 1;
            uVar10 = (uint)*pbVar18;
            uVar7 = (ulong)uVar15 + uVar7 * 10;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar10 - 0x30 < 10);
        }
        dVar19 = 0.0;
        bVar5 = true;
        bVar4 = false;
      }
      else {
LAB_1005230f8:
        uVar7 = 0;
        bVar4 = false;
        uVar12 = 0;
        bVar5 = false;
      }
    }
    else {
      if (9 < uVar15) goto LAB_1005230f8;
      uVar12 = 0;
      do {
        uVar13 = uVar12;
        uVar15 = (uint)uVar6;
        if (0x19999998 < uVar15) {
          uVar12 = uVar13;
          if (uVar15 != 0x19999999) goto LAB_100523410;
          if ('5' < (char)uVar10) {
            uVar6 = 0x19999999;
            goto LAB_100523410;
          }
        }
        uVar6 = (ulong)((uVar15 * 10 + uVar10) - 0x30);
        uVar10 = (uint)pbVar17[uVar13 + 2];
        uVar12 = uVar13 + 1;
      } while (uVar10 - 0x30 < 10);
      uVar7 = 0;
      bVar4 = false;
      bVar5 = false;
      pbVar18 = pbVar17 + uVar13 + 2;
    }
    goto LAB_100522f2c;
  }
  lVar11 = (long)pbVar17 - lVar1;
  uVar9 = 3;
  pbVar18 = pbVar17;
  goto LAB_100523054;
code_r0x000100522fd8:
  uVar7 = 0;
  bVar4 = false;
  bVar5 = false;
  pbVar18 = pbVar17 + uVar13 + 2;
  dVar19 = 0.0;
  goto LAB_100522f2c;
LAB_10052317c:
  do {
    pbVar18 = pbVar18 + 1;
  } while (*pbVar18 - 0x30 < 10);
  goto LAB_1005232f0;
LAB_1005234dc:
  dVar19 = (double)uVar7;
  lVar11 = (long)pbVar18 - lVar1;
  bVar4 = true;
  uVar15 = uVar10;
  do {
    if (1.7976931348623158e+307 <= dVar19) {
      *(undefined4 *)(param_1 + 0x30) = 0xd;
      *(long *)(param_1 + 0x38) = lVar11;
      goto LAB_1005233a4;
    }
    pbVar18 = pbVar18 + 1;
    uVar10 = (uint)*pbVar18;
    dVar19 = (double)(int)(uVar15 - 0x30) + dVar19 * 10.0;
    lVar11 = lVar11 + 1;
    uVar15 = uVar10;
  } while (uVar10 - 0x30 < 10);
  bVar5 = true;
LAB_100522f2c:
  if (uVar10 != 0x2e) {
    iVar14 = 0;
LAB_100522ff8:
    if ((uVar10 & 0xff | 0x20) != 0x65) {
      if (bVar4) {
LAB_1005232c4:
        uVar15 = 0;
        goto LAB_1005232f8;
      }
      if (bVar5) {
        if (bVar3 != 0x2d) {
          uVar6 = FUN_1000f9370(param_3,uVar7);
        }
        else {
          uVar6 = FUN_1000f92d8(param_3,-uVar7);
        }
      }
      else if (bVar3 != 0x2d) {
        uVar6 = FUN_1000f945c(param_3);
      }
      else {
        uVar6 = FUN_1000f93f4(param_3,-(int)uVar6);
      }
      if ((uVar6 & 1) != 0) goto LAB_1005233a4;
      lVar11 = (long)pbVar18 - lVar1;
      uVar9 = 0x10;
      goto LAB_100523054;
    }
    if (!bVar5) {
      uVar7 = uVar6;
    }
    if (!bVar4) {
      dVar19 = (double)uVar7;
    }
    pbVar17 = pbVar18 + 1;
    bVar2 = *pbVar17;
    if (bVar2 == 0x2b) {
      bVar4 = false;
LAB_100523110:
      pbVar17 = pbVar18 + 2;
      uVar10 = *pbVar17 - 0x30;
      if (uVar10 < 10) {
        pbVar18 = pbVar18 + 3;
        if (!bVar4) goto LAB_1005231a0;
        uVar15 = (uint)*pbVar18;
        pbVar17 = pbVar18;
        if (*pbVar18 - 0x30 < 10) {
          do {
            uVar10 = (uVar10 * 10 + uVar15) - 0x30;
            bVar4 = true;
            pbVar18 = pbVar17;
            if (0xccccccb < (int)uVar10) goto LAB_10052317c;
            pbVar18 = pbVar17 + 1;
            uVar15 = (uint)pbVar17[1];
            pbVar17 = pbVar18;
          } while (uVar15 - 0x30 < 10);
        }
        else {
          bVar4 = true;
        }
LAB_1005232f0:
        uVar15 = -uVar10;
        if (!bVar4) {
          uVar15 = uVar10;
        }
        goto LAB_1005232f8;
      }
    }
    else {
      if (bVar2 == 0x2d) {
        bVar4 = true;
        goto LAB_100523110;
      }
      uVar10 = bVar2 - 0x30;
      if (uVar10 < 10) {
        pbVar18 = pbVar18 + 2;
LAB_1005231a0:
        lVar11 = (long)pbVar18 - lVar1;
        do {
          bVar2 = *pbVar18;
          if (9 < bVar2 - 0x30) {
            bVar4 = false;
            goto LAB_1005232f0;
          }
          pbVar18 = pbVar18 + 1;
          uVar10 = ((uint)bVar2 + uVar10 * 10) - 0x30;
          lVar11 = lVar11 + 1;
        } while ((int)uVar10 <= 0x134 - iVar14);
        *(undefined4 *)(param_1 + 0x30) = 0xd;
        *(long *)(param_1 + 0x38) = lVar11;
        goto LAB_1005233a4;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    *(long *)(param_1 + 0x38) = (long)pbVar17 - lVar1;
    pbVar18 = pbVar17;
    goto LAB_1005233a4;
  }
  pbVar17 = pbVar18 + 1;
  uVar10 = (uint)*pbVar17;
  if (9 < uVar10 - 0x30) {
    lVar11 = (long)pbVar17 - lVar1;
    uVar9 = 0xe;
    pbVar18 = pbVar17;
LAB_100523054:
    *(undefined4 *)(param_1 + 0x30) = uVar9;
    *(long *)(param_1 + 0x38) = lVar11;
    goto LAB_1005233a4;
  }
  if (bVar4) {
    iVar14 = 0;
LAB_100523284:
    do {
      if ('9' < (char)uVar10) {
        bVar4 = true;
        pbVar18 = pbVar17;
        goto LAB_100522ff8;
      }
      if ((int)uVar12 < 0x11) {
        dVar19 = (double)(int)((uVar10 & 0xff) - 0x30) + dVar19 * 10.0;
        iVar14 = iVar14 + -1;
        if (0.0 < dVar19) {
          uVar12 = (ulong)((int)uVar12 + 1);
        }
      }
      pbVar18 = pbVar17 + 1;
      uVar10 = (uint)(char)*pbVar18;
      pbVar17 = pbVar18;
    } while (0x2f < (int)uVar10);
    goto LAB_1005232c4;
  }
  lVar11 = 0;
  if (!bVar5) {
    uVar7 = uVar6;
  }
  do {
    lVar16 = lVar11;
    if ('9' < (char)uVar10 || uVar7 >> 0x35 != 0) {
      dVar19 = (double)uVar7;
      iVar14 = -(int)lVar16;
      pbVar17 = pbVar18 + lVar16 + 1;
      goto LAB_100523284;
    }
    uVar7 = (ulong)((uVar10 & 0xff) - 0x30) + uVar7 * 10;
    uVar10 = (uint)uVar12;
    if (uVar7 != 0) {
      uVar10 = uVar10 + 1;
    }
    uVar12 = (ulong)uVar10;
    uVar10 = (uint)(char)pbVar18[lVar16 + 2];
    lVar11 = lVar16 + 1;
  } while (0x2f < (int)uVar10);
  dVar19 = (double)uVar7;
  iVar14 = -(int)(lVar16 + 1);
  pbVar18 = pbVar18 + lVar16 + 2;
  uVar15 = 0;
LAB_1005232f8:
  uVar15 = iVar14 + uVar15;
  if ((int)uVar15 < -0x134) {
    dVar20 = 0.0;
    if (-0x269 < (int)uVar15) {
      dVar20 = *(double *)(&DAT_10114c438 + (ulong)(-uVar15 - 0x134) * 8) * 1e+308;
LAB_10052335c:
      dVar20 = dVar19 / dVar20;
    }
  }
  else {
    if ((int)uVar15 < 0) {
      dVar20 = *(double *)(&DAT_10114c438 + (ulong)-uVar15 * 8);
      goto LAB_10052335c;
    }
    dVar20 = *(double *)(&DAT_10114c438 + (ulong)uVar15 * 8) * dVar19;
  }
  dVar19 = -dVar20;
  if (bVar3 != 0x2d) {
    dVar19 = dVar20;
  }
  pdVar8 = *(double **)(param_3 + 0x40);
  if (*(double **)(param_3 + 0x48) <= pdVar8 + 3) {
    FUN_1000f8b34(param_3 + 0x28,1);
    pdVar8 = *(double **)(param_3 + 0x40);
  }
  *(double **)(param_3 + 0x40) = pdVar8 + 3;
  pdVar8[1] = 0.0;
  *(undefined4 *)(pdVar8 + 2) = 0x4206;
  *pdVar8 = dVar19;
LAB_1005233a4:
  *param_2 = (long)pbVar18;
  param_2[1] = lVar1;
  return;
}




void FUN_100523540(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pbVar4 = (byte *)(*param_2 + 1);
  *param_2 = (long)pbVar4;
  do {
    bVar1 = *pbVar4;
    if (bVar1 == 0x5c) {
      *param_2 = (long)(pbVar4 + 2);
      if ((&DAT_10115c1b8)[pbVar4[1]] != '\0') {
        uVar3 = (ulong)(uint)(int)(char)(&DAT_10115c1b8)[pbVar4[1]];
        goto LAB_1005235c8;
      }
      if (pbVar4[1] != 0x75) {
        uVar3 = ~param_2[1] + 2;
        goto LAB_1005236cc;
      }
      uVar3 = FUN_1000f8edc(param_1,param_2);
      if (*(int *)(param_1 + 0x30) != 0) {
        return;
      }
      if (((uint)(uVar3 >> 10) & 0x3fffff) == 0x36) {
        pcVar7 = (char *)*param_2;
        pcVar5 = pcVar7 + 1;
        *param_2 = (long)pcVar5;
        if (*pcVar7 == '\\') {
          pcVar5 = pcVar7 + 2;
          *param_2 = (long)pcVar5;
          if (pcVar7[1] == 'u') {
            uVar2 = FUN_1000f8edc(param_1,param_2);
            if (*(int *)(param_1 + 0x30) != 0) {
              return;
            }
            if (((uint)(uVar2 >> 10) & 0x3fffff) == 0x37) {
              uVar3 = (ulong)(((int)uVar2 - 0xdc00U | (int)uVar3 * 0x400 + 0xfca00000U) + 0x10000);
              goto LAB_100523660;
            }
            pcVar5 = (char *)*param_2;
          }
        }
        pbVar4 = (byte *)(pcVar5 + (-2 - param_2[1]));
        uVar6 = 9;
        goto LAB_1005236e8;
      }
LAB_100523660:
      FUN_1000f8f78(param_3,uVar3);
    }
    else {
      if (bVar1 == 0) {
        pbVar4 = pbVar4 + ~param_2[1];
        uVar6 = 0xb;
        goto LAB_1005236e8;
      }
      if (bVar1 == 0x22) {
        *param_2 = (long)(pbVar4 + 1);
        FUN_1000f8e78(param_3,0);
        return;
      }
      if (bVar1 < 0x20) {
        uVar3 = ~param_2[1];
LAB_1005236cc:
        pbVar4 = pbVar4 + uVar3;
        uVar6 = 10;
LAB_1005236e8:
        *(undefined4 *)(param_1 + 0x30) = uVar6;
        *(byte **)(param_1 + 0x38) = pbVar4;
        return;
      }
      *param_2 = (long)(pbVar4 + 1);
      uVar3 = (ulong)(char)*pbVar4;
LAB_1005235c8:
      FUN_1000f8e78(param_3,uVar3);
    }
    pbVar4 = (byte *)*param_2;
  } while( true );
}




string * FUN_100523708(long param_1)

{
  undefined8 uVar1;
  void *local_a8 [2];
  char local_91;
  undefined8 *local_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  void *pvStack_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pvStack_48 = (void *)0x0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = (void *)0x0;
  local_30 = 0;
  uStack_28 = 0x100;
  local_90 = &local_50;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0x200;
  local_58 = 0;
  FUN_100110914(param_1 + 0x68,&local_90);
  uVar1 = FUN_100110e38(&local_50);
  FUN_1000ee4ec(local_a8,uVar1);
  std::string::operator=((string *)(param_1 + 0x80),(string *)local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  _free(local_78);
  if (pvStack_80 != (void *)0x0) {
    operator_delete(pvStack_80);
  }
  _free(local_40);
  if (pvStack_48 != (void *)0x0) {
    operator_delete(pvStack_48);
  }
  return (string *)(param_1 + 0x80);
}




long FUN_1005237c4(long param_1,long param_2)

{
  uint uVar1;
  long local_38;
  ulong local_30;
  undefined4 local_28;
  
  if (param_2 != 0) {
    uVar1 = FUN_1004d2524(param_2);
    local_28 = 0x100005;
    local_30 = (ulong)uVar1;
    local_38 = param_2;
    FUN_10034f3d4(param_1 + 0x68,&local_38,*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}




long FUN_100523820(long param_1,int param_2)

{
  long local_38 [2];
  undefined4 local_28;
  
  local_28 = 0x1606;
  local_38[0] = (long)param_2;
  local_38[1] = 0;
  if (-1 < param_2) {
    local_28 = 0x3e06;
  }
  FUN_10034f3d4(param_1 + 0x68,local_38,*(undefined8 *)(param_1 + 0x18));
  return param_1;
}




undefined1  [16] FUN_100523874(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  for (pbVar1 = (byte *)*param_2;
      *pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0; pbVar1 = pbVar1 + 1) {
  }
  *param_2 = pbVar1;
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_10052393c;
  if (*pbVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_100523964(param_1,param_2);
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_10052393c;
    for (pbVar1 = (byte *)*param_2;
        *pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0; pbVar1 = pbVar1 + 1)
    {
    }
    *param_2 = pbVar1;
    if ((*(int *)(param_1 + 0x30) != 0) || (*pbVar1 == 0)) goto LAB_10052393c;
    uVar2 = 2;
  }
  lVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(long *)(param_1 + 0x38) = (long)pbVar1 - lVar3;
LAB_10052393c:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return *(undefined1 (*) [16])(param_1 + 0x30);
}




void FUN_100523964(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)*param_2;
  if (cVar1 < 'n') {
    if (cVar1 == '\"') {
      FUN_100523be4();
      return;
    }
    if (cVar1 == '[') {
      FUN_100523ee8();
      return;
    }
    if (cVar1 == 'f') {
      FUN_100523b20();
      return;
    }
  }
  else {
    if (cVar1 == '{') {
      FUN_100523c94();
      return;
    }
    if (cVar1 == 't') {
      FUN_100523a70();
      return;
    }
    if (cVar1 == 'n') {
      FUN_1005239c4();
      return;
    }
  }
  FUN_100524078();
  return;
}




void FUN_1005239c4(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar2 = lVar4 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar4 + 1) == 'u') {
    lVar2 = lVar4 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar4 + 2) == 'l') {
      lVar2 = lVar4 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar4 + 3) == 'l') {
        FUN_100112734(param_3,0);
        uVar1 = FUN_1001127fc(param_3);
        if ((uVar1 & 1) != 0) {
          return;
        }
        lVar2 = *param_2 - param_2[1];
        uVar3 = 0x10;
        goto LAB_100523a58;
      }
    }
  }
  lVar2 = ~param_2[1] + lVar2;
  uVar3 = 3;
LAB_100523a58:
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(long *)(param_1 + 0x38) = lVar2;
  return;
}




void FUN_100523a70(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar2 = lVar4 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar4 + 1) == 'r') {
    lVar2 = lVar4 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar4 + 2) == 'u') {
      lVar2 = lVar4 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar4 + 3) == 'e') {
        FUN_100112734(param_3,2);
        uVar1 = FUN_1001128e8(param_3,1);
        if ((uVar1 & 1) != 0) {
          return;
        }
        lVar2 = *param_2 - param_2[1];
        uVar3 = 0x10;
        goto LAB_100523b08;
      }
    }
  }
  lVar2 = ~param_2[1] + lVar2;
  uVar3 = 3;
LAB_100523b08:
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(long *)(param_1 + 0x38) = lVar2;
  return;
}




void FUN_100523b20(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar2 = lVar4 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar4 + 1) == 'a') {
    lVar2 = lVar4 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar4 + 2) == 'l') {
      lVar2 = lVar4 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar4 + 3) == 's') {
        lVar2 = lVar4 + 5;
        *param_2 = lVar2;
        if (*(char *)(lVar4 + 4) == 'e') {
          FUN_100112734(param_3,1);
          uVar1 = FUN_1001128e8(param_3,0);
          if ((uVar1 & 1) != 0) {
            return;
          }
          lVar2 = *param_2 - param_2[1];
          uVar3 = 0x10;
          goto LAB_100523bcc;
        }
      }
    }
  }
  lVar2 = ~param_2[1] + lVar2;
  uVar3 = 3;
LAB_100523bcc:
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(long *)(param_1 + 0x38) = lVar2;
  return;
}




void FUN_100523be4(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_60;
  uint local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  
  lStack_48 = param_2[1];
  local_50 = *param_2;
  local_58 = 0;
  local_60 = param_1;
  local_40 = param_2;
  FUN_1000f8c04(param_1,&local_50,&local_60);
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = local_58 - 1;
    lVar3 = *(long *)(local_60 + 0x18) - (ulong)local_58;
    *(long *)(local_60 + 0x18) = lVar3;
    FUN_100112734(param_3,5);
    uVar2 = FUN_100112b14(param_3,lVar3,iVar1);
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(long *)(param_1 + 0x38) = local_50 - lStack_48;
    }
  }
  local_40[1] = lStack_48;
  *local_40 = local_50;
  return;
}




void FUN_100523c94(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  
  *param_2 = *param_2 + 1;
  iVar1 = FUN_100112618(param_3);
  pbVar3 = (byte *)*param_2;
  if (iVar1 == 0) {
LAB_100523d38:
    lVar4 = (long)pbVar3 - param_2[1];
    uVar6 = 0x10;
  }
  else {
    for (; *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
        pbVar3 = pbVar3 + 1) {
    }
    *param_2 = (long)pbVar3;
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    if (*pbVar3 == 0x22) {
      iVar1 = 0;
      do {
        FUN_100523be4(param_1,param_2,param_3,1);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = (byte *)*param_2;
        pbVar5 = pbVar3;
        for (; pbVar5 = pbVar5 + 1,
            *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar7 = pbVar3 + 1;
        *param_2 = (long)pbVar7;
        if (*pbVar3 != 0x3a) {
          lVar4 = (long)pbVar5 - param_2[1];
          uVar6 = 5;
          goto LAB_100523d44;
        }
        for (; *pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0;
            pbVar7 = pbVar7 + 1) {
        }
        *param_2 = (long)pbVar7;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_100523964(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar5 = (byte *)*param_2;
        pbVar7 = pbVar5;
        for (; pbVar7 = pbVar7 + 1,
            *pbVar5 < 0x21 && (1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0;
            pbVar5 = pbVar5 + 1) {
        }
        *param_2 = (long)pbVar5;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar1 = iVar1 + 1;
        pbVar3 = pbVar5 + 1;
        *param_2 = (long)pbVar3;
        if (*pbVar5 != 0x2c) {
          if (*pbVar5 == 0x7d) goto LAB_100523d2c;
          lVar4 = (long)pbVar7 - param_2[1];
          uVar6 = 6;
          goto LAB_100523d44;
        }
        for (; *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
      } while (*pbVar3 == 0x22);
    }
    else if (*pbVar3 == 0x7d) {
      *param_2 = (long)(pbVar3 + 1);
      iVar1 = 0;
LAB_100523d2c:
      uVar2 = FUN_1004f10e0(param_3,iVar1);
      if ((uVar2 & 1) != 0) {
        return;
      }
      pbVar3 = (byte *)*param_2;
      goto LAB_100523d38;
    }
    lVar4 = (long)pbVar3 - param_2[1];
    uVar6 = 4;
  }
LAB_100523d44:
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(long *)(param_1 + 0x38) = lVar4;
  return;
}




void FUN_100523ee8(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  
  *param_2 = *param_2 + 1;
  iVar1 = FUN_1001126a4(param_3);
  pbVar3 = (byte *)*param_2;
  if (iVar1 != 0) {
    for (; *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
        pbVar3 = pbVar3 + 1) {
    }
    *param_2 = (long)pbVar3;
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    if (*pbVar3 == 0x5d) {
      *param_2 = (long)(pbVar3 + 1);
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      while( true ) {
        FUN_100523964(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = (byte *)*param_2;
        pbVar5 = pbVar3;
        for (; pbVar5 = pbVar5 + 1,
            *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar1 = iVar1 + 1;
        pbVar7 = pbVar3 + 1;
        *param_2 = (long)pbVar7;
        if (*pbVar3 != 0x2c) break;
        for (; *pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0;
            pbVar7 = pbVar7 + 1) {
        }
        *param_2 = (long)pbVar7;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
      }
      if (*pbVar3 != 0x5d) {
        lVar4 = (long)pbVar5 - param_2[1];
        uVar6 = 7;
        goto LAB_100523f90;
      }
    }
    uVar2 = FUN_1005222a0(param_3,iVar1);
    if ((uVar2 & 1) != 0) {
      return;
    }
    pbVar3 = (byte *)*param_2;
  }
  lVar4 = (long)pbVar3 - param_2[1];
  uVar6 = 0x10;
LAB_100523f90:
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(long *)(param_1 + 0x38) = lVar4;
  return;
}




void FUN_100524078(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  
  pbVar14 = (byte *)*param_2;
  lVar1 = param_2[1];
  bVar3 = *pbVar14;
  bVar2 = bVar3;
  if (bVar3 == 0x2d) {
    pbVar14 = pbVar14 + 1;
    bVar2 = *pbVar14;
  }
  uVar11 = bVar2 - 0x30;
  uVar8 = (ulong)uVar11;
  if (uVar11 == 0) {
    uVar10 = 0;
    bVar4 = false;
    uVar12 = 0;
    bVar5 = false;
    dVar18 = 0.0;
    uVar11 = (uint)pbVar14[1];
    pbVar15 = pbVar14 + 1;
    goto LAB_1005240d0;
  }
  if (bVar2 - 0x31 < 9) {
    uVar11 = (uint)pbVar14[1];
    uVar7 = uVar11 - 0x30 & 0xff;
    dVar18 = 0.0;
    if (bVar3 == 0x2d) {
      if (uVar7 < 10) {
        uVar12 = 0;
LAB_100524138:
        uVar13 = uVar12;
        uVar7 = (uint)uVar8;
        if (uVar7 < 0xccccccc) {
LAB_100524158:
          uVar8 = (ulong)((uVar7 * 10 + uVar11) - 0x30);
          uVar11 = (uint)pbVar14[uVar13 + 2];
          uVar12 = uVar13 + 1;
          if (9 < uVar11 - 0x30) goto code_r0x00010052417c;
          goto LAB_100524138;
        }
        uVar12 = uVar13;
        if (uVar7 != 0xccccccc) goto LAB_100524564;
        if ((char)uVar11 < '9') goto LAB_100524158;
        uVar11 = 0x39;
        uVar8 = 0xccccccc;
LAB_100524564:
        pbVar14 = pbVar14 + uVar12 + 1;
        uVar10 = uVar8;
        if (bVar3 == 0x2d) {
          do {
            if ((0xccccccccccccccb < uVar10) &&
               ((uVar10 != 0xccccccccccccccc || ('8' < (char)uVar11)))) goto LAB_100524630;
            uVar7 = uVar11 - 0x30;
            pbVar14 = pbVar14 + 1;
            uVar11 = (uint)*pbVar14;
            uVar10 = (ulong)uVar7 + uVar10 * 10;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar11 - 0x30 < 10);
        }
        else {
          do {
            if ((0x1999999999999998 < uVar10) &&
               ((uVar10 != 0x1999999999999999 || ('5' < (char)uVar11)))) goto LAB_100524630;
            uVar7 = uVar11 - 0x30;
            pbVar14 = pbVar14 + 1;
            uVar11 = (uint)*pbVar14;
            uVar10 = (ulong)uVar7 + uVar10 * 10;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar11 - 0x30 < 10);
        }
        dVar18 = 0.0;
        bVar5 = true;
        bVar4 = false;
        pbVar15 = pbVar14;
      }
      else {
LAB_100524288:
        uVar10 = 0;
        bVar4 = false;
        uVar12 = 0;
        bVar5 = false;
        pbVar15 = pbVar14 + 1;
      }
    }
    else {
      if (9 < uVar7) goto LAB_100524288;
      uVar12 = 0;
      do {
        uVar13 = uVar12;
        uVar7 = (uint)uVar8;
        if (0x19999998 < uVar7) {
          uVar12 = uVar13;
          if (uVar7 != 0x19999999) goto LAB_100524564;
          if ('5' < (char)uVar11) {
            uVar8 = 0x19999999;
            goto LAB_100524564;
          }
        }
        uVar8 = (ulong)((uVar7 * 10 + uVar11) - 0x30);
        uVar11 = (uint)pbVar14[uVar13 + 2];
        uVar12 = uVar13 + 1;
      } while (uVar11 - 0x30 < 10);
      uVar10 = 0;
      bVar4 = false;
      bVar5 = false;
      pbVar15 = pbVar14 + uVar13 + 2;
    }
    goto LAB_1005240d0;
  }
  uVar9 = 3;
  goto LAB_1005244f8;
code_r0x00010052417c:
  uVar10 = 0;
  bVar4 = false;
  bVar5 = false;
  pbVar15 = pbVar14 + uVar13 + 2;
  dVar18 = 0.0;
  goto LAB_1005240d0;
LAB_10052430c:
  do {
    pbVar14 = pbVar14 + 1;
  } while (*pbVar14 - 0x30 < 10);
  goto LAB_100524464;
LAB_100524630:
  dVar18 = (double)uVar10;
  bVar4 = true;
  uVar7 = uVar11;
  do {
    if (1.7976931348623158e+307 <= dVar18) goto LAB_100524360;
    pbVar14 = pbVar14 + 1;
    uVar11 = (uint)*pbVar14;
    dVar18 = (double)(int)(uVar7 - 0x30) + dVar18 * 10.0;
    uVar7 = uVar11;
  } while (uVar11 - 0x30 < 10);
  bVar5 = true;
  pbVar15 = pbVar14;
LAB_1005240d0:
  if (uVar11 == 0x2e) {
    pbVar14 = pbVar15 + 1;
    uVar11 = (uint)*pbVar14;
    if (uVar11 - 0x30 < 10) {
      if (bVar4) {
        iVar17 = 0;
LAB_1005243f8:
        do {
          if ('9' < (char)uVar11) {
            bVar4 = true;
            pbVar15 = pbVar14;
            goto LAB_100524198;
          }
          if ((int)uVar12 < 0x11) {
            dVar18 = (double)(int)((uVar11 & 0xff) - 0x30) + dVar18 * 10.0;
            iVar17 = iVar17 + -1;
            if (0.0 < dVar18) {
              uVar12 = (ulong)((int)uVar12 + 1);
            }
          }
          pbVar14 = pbVar14 + 1;
          uVar11 = (uint)(char)*pbVar14;
        } while (0x2f < (int)uVar11);
        goto LAB_100524438;
      }
      lVar6 = 0;
      if (!bVar5) {
        uVar10 = uVar8;
      }
      do {
        lVar16 = lVar6;
        if ('9' < (char)uVar11 || uVar10 >> 0x35 != 0) {
          dVar18 = (double)uVar10;
          iVar17 = -(int)lVar16;
          pbVar14 = pbVar15 + lVar16 + 1;
          goto LAB_1005243f8;
        }
        uVar10 = (ulong)((uVar11 & 0xff) - 0x30) + uVar10 * 10;
        uVar11 = (uint)uVar12;
        if (uVar10 != 0) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = (ulong)uVar11;
        uVar11 = (uint)(char)pbVar15[lVar16 + 2];
        lVar6 = lVar16 + 1;
      } while (0x2f < (int)uVar11);
      dVar18 = (double)uVar10;
      iVar17 = -(int)(lVar16 + 1);
      pbVar14 = pbVar15 + lVar16 + 2;
      uVar11 = 0;
LAB_100524470:
      uVar11 = iVar17 + uVar11;
      if ((int)uVar11 < -0x134) {
        dVar19 = 0.0;
        if (-0x269 < (int)uVar11) {
          dVar19 = *(double *)(&DAT_10114c438 + (ulong)(-uVar11 - 0x134) * 8) * 1e+308;
LAB_1005244d4:
          dVar19 = dVar18 / dVar19;
        }
      }
      else {
        if ((int)uVar11 < 0) {
          dVar19 = *(double *)(&DAT_10114c438 + (ulong)-uVar11 * 8);
          goto LAB_1005244d4;
        }
        dVar19 = *(double *)(&DAT_10114c438 + (ulong)uVar11 * 8) * dVar18;
      }
      dVar18 = -dVar19;
      if (bVar3 != 0x2d) {
        dVar18 = dVar19;
      }
      uVar8 = FUN_10052241c(dVar18,param_3);
      goto joined_r0x000100524538;
    }
    uVar9 = 0xe;
  }
  else {
    iVar17 = 0;
LAB_100524198:
    if ((uVar11 & 0xff | 0x20) == 0x65) {
      if (!bVar5) {
        uVar10 = uVar8;
      }
      if (!bVar4) {
        dVar18 = (double)uVar10;
      }
      pbVar14 = pbVar15 + 1;
      bVar2 = *pbVar14;
      if (bVar2 == 0x2b) {
        bVar4 = false;
LAB_1005242a0:
        pbVar14 = pbVar15 + 2;
        uVar7 = *pbVar14 - 0x30;
        if (9 < uVar7) {
LAB_100524368:
          uVar9 = 0xf;
          goto LAB_1005244f8;
        }
        pbVar14 = pbVar15 + 3;
        if (bVar4) {
          uVar11 = (uint)*pbVar14;
          pbVar15 = pbVar14;
          if (*pbVar14 - 0x30 < 10) {
            do {
              uVar7 = (uVar7 * 10 + uVar11) - 0x30;
              bVar4 = true;
              pbVar14 = pbVar15;
              if (0xccccccb < (int)uVar7) goto LAB_10052430c;
              pbVar14 = pbVar15 + 1;
              uVar11 = (uint)pbVar15[1];
              pbVar15 = pbVar14;
            } while (uVar11 - 0x30 < 10);
          }
          else {
            bVar4 = true;
          }
LAB_100524464:
          uVar11 = -uVar7;
          if (!bVar4) {
            uVar11 = uVar7;
          }
          goto LAB_100524470;
        }
      }
      else {
        if (bVar2 == 0x2d) {
          bVar4 = true;
          goto LAB_1005242a0;
        }
        uVar7 = bVar2 - 0x30;
        if (9 < uVar7) goto LAB_100524368;
        pbVar14 = pbVar15 + 2;
      }
      do {
        bVar2 = *pbVar14;
        if (9 < bVar2 - 0x30) {
          bVar4 = false;
          goto LAB_100524464;
        }
        pbVar14 = pbVar14 + 1;
        uVar7 = ((uint)bVar2 + uVar7 * 10) - 0x30;
      } while ((int)uVar7 <= 0x134 - iVar17);
LAB_100524360:
      uVar9 = 0xd;
    }
    else {
      pbVar14 = pbVar15;
      if (bVar4) {
LAB_100524438:
        uVar11 = 0;
        goto LAB_100524470;
      }
      if (bVar5) {
        if (bVar3 != 0x2d) {
          uVar8 = FUN_1004f0fb4(param_3,uVar10);
        }
        else {
          uVar8 = FUN_100522380(param_3,-uVar10);
        }
      }
      else if (bVar3 != 0x2d) {
        uVar8 = FUN_1005222fc(param_3);
      }
      else {
        uVar8 = FUN_1004f46f4(param_3,-(int)uVar8);
      }
joined_r0x000100524538:
      if ((uVar8 & 1) != 0) goto LAB_100524508;
      uVar9 = 0x10;
    }
  }
LAB_1005244f8:
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(long *)(param_1 + 0x38) = (long)pbVar14 - lVar1;
LAB_100524508:
  *param_2 = (long)pbVar14;
  param_2[1] = lVar1;
  return;
}




long FUN_10052467c(long param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 4;
  if (*param_2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_2 + 2) + lVar3);
      if ((char)*(byte *)((long)plVar1 + 0x17) < '\0') {
        local_70 = *plVar1;
        uVar2 = (uint)plVar1[1];
      }
      else {
        uVar2 = (uint)*(byte *)((long)plVar1 + 0x17);
        local_70 = (long)plVar1;
      }
      local_60 = 0x100005;
      local_68 = (ulong)uVar2;
      FUN_10034f3d4(&local_58,&local_70,*(undefined8 *)(param_1 + 0x18));
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *param_2);
  }
  FUN_10034f3d4(param_1 + 0x68,&local_58,*(undefined8 *)(param_1 + 0x18));
  return param_1;
}




void FUN_10052473c(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  if (param_1[1] < param_2) {
    pvVar5 = operator_new__((ulong)param_2 * 0x148);
    pvVar6 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar7 = 0;
      do {
        lVar1 = (long)pvVar5 + lVar7;
        lVar2 = (long)pvVar6 + lVar7;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10052483c(lVar1 + 0x30,lVar2 + 0x30);
        uVar4 = *(undefined2 *)(lVar2 + 0x140);
        *(undefined1 *)(lVar1 + 0x142) = *(undefined1 *)(lVar2 + 0x142);
        *(undefined2 *)(lVar1 + 0x140) = uVar4;
        lVar7 = lVar7 + 0x148;
      } while ((ulong)uVar3 * 0x148 - lVar7 != 0);
      pvVar6 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar7 = (ulong)*param_1 * 0x148;
        do {
          FUN_10014ea98(pvVar6);
          pvVar6 = (void *)((long)pvVar6 + 0x148);
          lVar7 = lVar7 + -0x148;
        } while (lVar7 != 0);
        pvVar6 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
    }
    *(void **)(param_1 + 2) = pvVar5;
  }
  return;
}




undefined8 * FUN_10052483c(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_100524990(param_1,*param_2,param_2 + 1);
  puVar4 = param_1 + 4;
  *puVar4 = 0;
  param_1[3] = puVar4;
  param_1[5] = 0;
  plVar5 = (long *)param_2[3];
  while (plVar5 != param_2 + 4) {
    FUN_100214b8c(param_1 + 3,puVar4,plVar5 + 4,plVar5 + 4);
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_100524a30(param_1 + 6,param_2 + 6);
  FUN_10003330c(param_1 + 8,param_2 + 8);
  FUN_10003330c(param_1 + 0xb,param_2 + 0xb);
  FUN_10003330c(param_1 + 0xe,param_2 + 0xe);
  FUN_10003330c(param_1 + 0x11,param_2 + 0x11);
  FUN_10003330c(param_1 + 0x14,param_2 + 0x14);
  FUN_10003330c(param_1 + 0x17,param_2 + 0x17);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  FUN_10003330c(param_1 + 0x1b,param_2 + 0x1b);
  FUN_10003330c(param_1 + 0x1e,param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  return param_1;
}




void FUN_100524990(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    do {
      FUN_100157784(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
      plVar1 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar1 = param_2 + 2;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar2 != param_2) {
          do {
            lVar3 = *plVar1;
            plVar1 = (long *)(lVar3 + 0x10);
            plVar2 = (long *)*plVar1;
          } while (*plVar2 != lVar3);
        }
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      param_2 = plVar2;
    } while (plVar2 != param_3);
  }
  return;
}




uint * FUN_100524a30(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100521fdc(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x28;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      lVar3 = lVar3 + 0x28;
      lVar1 = lVar1 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_100524aa8(long param_1,string *param_2)

{
  code *pcVar1;
  void *local_38 [2];
  char local_21;
  
  pcVar1 = (code *)**(undefined8 **)(param_1 + 8);
  std::string::string((string *)local_38,param_2);
  (*pcVar1)(local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100524bec(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar4 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        lVar3 = lVar3 + -0xc;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100524c78(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (long)pvVar1 + 0x18;
      lVar6 = (ulong)*param_1 * 0x30;
      lVar5 = (long)pvVar2 + 0x18;
      do {
        FUN_10003330c(lVar4 + -0x18,lVar5 + -0x18);
        thunk_FUN_1004e439c(lVar4,lVar5);
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar5 + 0x10);
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + 0x30;
        lVar6 = lVar6 + -0x30;
      } while (lVar6 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar4 = (ulong)*param_1 * 0x30;
        do {
          if (*(void **)(pcVar3 + 9) != (void *)0x0) {
            operator_delete__(*(void **)(pcVar3 + 9));
            pcVar3[9] = '\0';
            pcVar3[10] = '\0';
            pcVar3[0xb] = '\0';
            pcVar3[0xc] = '\0';
            pcVar3[0xd] = '\0';
            pcVar3[0xe] = '\0';
            pcVar3[0xf] = '\0';
            pcVar3[0x10] = '\0';
            pcVar3[1] = '\0';
            pcVar3[2] = '\0';
            pcVar3[3] = '\0';
            pcVar3[4] = '\0';
            pcVar3[5] = '\0';
            pcVar3[6] = '\0';
            pcVar3[7] = '\0';
            pcVar3[8] = '\0';
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x30;
          lVar4 = lVar4 + -0x30;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100524d78(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x58);
    pvVar6 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar7 = 0;
      do {
        lVar1 = (long)pvVar4 + lVar7;
        lVar2 = (long)pvVar6 + lVar7;
        thunk_FUN_1004e439c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x10,lVar2 + 0x10);
        FUN_10003330c(lVar1 + 0x28,lVar2 + 0x28);
        FUN_10003330c(lVar1 + 0x40,lVar2 + 0x40);
        lVar7 = lVar7 + 0x58;
      } while ((ulong)uVar3 * 0x58 - lVar7 != 0);
      pvVar6 = *(void **)(param_1 + 2);
      uVar3 = *param_1;
      param_1[1] = param_2;
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          if (*(char *)((long)pvVar6 + lVar7 + 0x57) < '\0') {
            operator_delete(*(void **)((long)pvVar6 + lVar7 + 0x40));
          }
          if (*(char *)((long)pvVar6 + lVar7 + 0x3f) < '\0') {
            operator_delete(*(void **)((long)pvVar6 + lVar7 + 0x28));
          }
          if (*(char *)((long)pvVar6 + lVar7 + 0x27) < '\0') {
            operator_delete(*(void **)((long)pvVar6 + lVar7 + 0x10));
          }
          pvVar5 = *(void **)((long)pvVar6 + lVar7 + 8);
          if (pvVar5 != (void *)0x0) {
            operator_delete__(pvVar5);
            *(undefined8 *)((long)pvVar6 + lVar7) = 0;
            ((undefined8 *)((long)pvVar6 + lVar7))[1] = 0;
          }
          lVar7 = lVar7 + 0x58;
        } while ((ulong)uVar3 * 0x58 - lVar7 != 0);
        pvVar6 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_100524ec0(string *param_1,string *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  string *this;
  ulong uVar5;
  string *this_00;
  string *this_01;
  string *psVar6;
  string *psVar7;
  string *psVar8;
  string *psVar9;
  string *psVar10;
  string *local_e0;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  local_e0 = param_2;
LAB_100524efc:
  this_00 = local_e0 + -0x50;
  this_01 = local_e0 + -0x38;
  this = local_e0 + -0x20;
  psVar10 = param_1;
LAB_100524f18:
  while( true ) {
    param_1 = psVar10;
    uVar5 = (long)local_e0 - (long)param_1;
    switch(((long)uVar5 >> 4) * -0x3333333333333333) {
    case 0:
    case 1:
      return;
    case 2:
      iVar3 = (*(code *)*param_3)(this_00,param_1);
      if (iVar3 == 0) {
        return;
      }
      FUN_10003330c(local_b0,param_1);
      FUN_10003330c((string *)local_98,param_1 + 0x18);
      FUN_10003330c((string *)local_80,param_1 + 0x30);
      local_68 = *(undefined8 *)(param_1 + 0x48);
      std::string::operator=(param_1,this_00);
      std::string::operator=(param_1 + 0x18,this_01);
      std::string::operator=(param_1 + 0x30,this);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(local_e0 + -8);
      std::string::operator=(this_00,(string *)local_b0);
      std::string::operator=(this_01,(string *)local_98);
      std::string::operator=(this,(string *)local_80);
      *(undefined8 *)(local_e0 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
        return;
      }
      return;
    case 3:
      FUN_10052576c(param_1,param_1 + 0x50,this_00,param_3);
      return;
    case 4:
      FUN_100525bf4(param_1,param_1 + 0x50,param_1 + 0xa0,this_00,param_3);
      return;
    case 5:
      FUN_100525f1c(param_1,param_1 + 0x50,param_1 + 0xa0,param_1 + 0xf0,this_00,param_3);
      return;
    }
    if ((long)uVar5 < 0x230) {
      FUN_100526334(param_1,local_e0,param_3);
      return;
    }
    if ((long)uVar5 < 0x13831) {
      psVar10 = param_1 + ((uVar5 & 0xffffffff) / 0xa0) * 0x50;
      iVar3 = FUN_10052576c(param_1,psVar10,this_00,param_3);
    }
    else {
      psVar10 = param_1 + (uVar5 / 0xa0) * 0x50;
      lVar1 = (uVar5 / 0x140) * 4 + uVar5 / 0x140;
      iVar3 = FUN_100525f1c(param_1,param_1 + lVar1 * 0x10,psVar10,psVar10 + lVar1 * 0x10,this_00,
                            param_3);
    }
    uVar5 = (*(code *)*param_3)(param_1,psVar10);
    psVar6 = this_00;
    if ((uVar5 & 1) != 0) break;
    while (psVar9 = psVar6, psVar6 = psVar9 + -0x50, psVar6 != param_1) {
      iVar4 = (*(code *)*param_3)(psVar6,psVar10);
      if (iVar4 != 0) goto code_r0x000100525008;
    }
    psVar6 = param_1 + 0x50;
    uVar5 = (*(code *)*param_3)(param_1,this_00);
    if ((uVar5 & 1) == 0) {
      if (psVar6 == this_00) {
        return;
      }
      psVar6 = param_1 + 0xa0;
      while( true ) {
        psVar10 = psVar6 + -0x50;
        iVar3 = (*(code *)*param_3)(param_1,psVar10);
        if (iVar3 != 0) break;
        bVar2 = psVar6 == this_00;
        psVar6 = psVar6 + 0x50;
        if (bVar2) {
          return;
        }
      }
      FUN_10003330c(local_b0,psVar10);
      FUN_10003330c((string *)local_98,psVar6 + -0x38);
      FUN_10003330c((string *)local_80,psVar6 + -0x20);
      local_68 = *(undefined8 *)(psVar6 + -8);
      std::string::operator=(psVar10,this_00);
      std::string::operator=(psVar6 + -0x38,this_01);
      std::string::operator=(psVar6 + -0x20,this);
      *(undefined8 *)(psVar6 + -8) = *(undefined8 *)(local_e0 + -8);
      std::string::operator=(this_00,(string *)local_b0);
      std::string::operator=(this_01,(string *)local_98);
      std::string::operator=(this,(string *)local_80);
      *(undefined8 *)(local_e0 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
    }
    psVar9 = this_00;
    if (psVar6 == this_00) {
      return;
    }
    while( true ) {
      do {
        psVar10 = psVar6;
        iVar3 = (*(code *)*param_3)(param_1,psVar10);
        psVar6 = psVar10 + 0x50;
      } while (iVar3 == 0);
      do {
        psVar8 = psVar9;
        psVar9 = psVar8 + -0x50;
        uVar5 = (*(code *)*param_3)(param_1,psVar9);
      } while ((uVar5 & 1) != 0);
      if (psVar9 <= psVar10) break;
      FUN_10003330c(local_b0,psVar10);
      FUN_10003330c((string *)local_98,psVar10 + 0x18);
      FUN_10003330c((string *)local_80,psVar10 + 0x30);
      local_68 = *(undefined8 *)(psVar10 + 0x48);
      std::string::operator=(psVar10,psVar9);
      std::string::operator=(psVar10 + 0x18,psVar8 + -0x38);
      std::string::operator=(psVar10 + 0x30,psVar8 + -0x20);
      *(undefined8 *)(psVar10 + 0x48) = *(undefined8 *)(psVar8 + -8);
      std::string::operator=(psVar9,(string *)local_b0);
      std::string::operator=(psVar8 + -0x38,(string *)local_98);
      std::string::operator=(psVar8 + -0x20,(string *)local_80);
      *(undefined8 *)(psVar8 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
    }
  }
  goto LAB_1005250d8;
code_r0x000100525008:
  FUN_10003330c(local_b0,param_1);
  FUN_10003330c((string *)local_98,param_1 + 0x18);
  FUN_10003330c((string *)local_80,param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x48);
  std::string::operator=(param_1,psVar6);
  std::string::operator=(param_1 + 0x18,psVar9 + -0x38);
  std::string::operator=(param_1 + 0x30,psVar9 + -0x20);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(psVar9 + -8);
  std::string::operator=(psVar6,(string *)local_b0);
  std::string::operator=(psVar9 + -0x38,(string *)local_98);
  std::string::operator=(psVar9 + -0x20,(string *)local_80);
  *(undefined8 *)(psVar9 + -8) = local_68;
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  iVar3 = iVar3 + 1;
LAB_1005250d8:
  psVar9 = param_1 + 0x50;
  psVar8 = psVar9;
  psVar7 = psVar10;
  if (psVar9 < psVar6) {
    while( true ) {
      do {
        psVar10 = psVar7;
        psVar9 = psVar8;
        uVar5 = (*(code *)*param_3)(psVar9,psVar10);
        psVar8 = psVar9 + 0x50;
        psVar7 = psVar10;
      } while ((uVar5 & 1) != 0);
      do {
        psVar7 = psVar6;
        psVar6 = psVar7 + -0x50;
        iVar4 = (*(code *)*param_3)(psVar6,psVar10);
      } while (iVar4 == 0);
      if (psVar6 < psVar9) break;
      FUN_10003330c(local_b0,psVar9);
      FUN_10003330c((string *)local_98,psVar9 + 0x18);
      FUN_10003330c((string *)local_80,psVar9 + 0x30);
      local_68 = *(undefined8 *)(psVar9 + 0x48);
      std::string::operator=(psVar9,psVar6);
      std::string::operator=(psVar9 + 0x18,psVar7 + -0x38);
      std::string::operator=(psVar9 + 0x30,psVar7 + -0x20);
      *(undefined8 *)(psVar9 + 0x48) = *(undefined8 *)(psVar7 + -8);
      std::string::operator=(psVar6,(string *)local_b0);
      std::string::operator=(psVar7 + -0x38,(string *)local_98);
      std::string::operator=(psVar7 + -0x20,(string *)local_80);
      *(undefined8 *)(psVar7 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      iVar3 = iVar3 + 1;
      psVar7 = psVar6;
      if (psVar9 != psVar10) {
        psVar7 = psVar10;
      }
    }
  }
  if ((psVar9 != psVar10) && (iVar4 = (*(code *)*param_3)(psVar10,psVar9), iVar4 != 0)) {
    FUN_10003330c(local_b0,psVar9);
    FUN_10003330c((string *)local_98,psVar9 + 0x18);
    FUN_10003330c((string *)local_80,psVar9 + 0x30);
    local_68 = *(undefined8 *)(psVar9 + 0x48);
    std::string::operator=(psVar9,psVar10);
    std::string::operator=(psVar9 + 0x18,psVar10 + 0x18);
    std::string::operator=(psVar9 + 0x30,psVar10 + 0x30);
    *(undefined8 *)(psVar9 + 0x48) = *(undefined8 *)(psVar10 + 0x48);
    std::string::operator=(psVar10,(string *)local_b0);
    std::string::operator=(psVar10 + 0x18,(string *)local_98);
    std::string::operator=(psVar10 + 0x30,(string *)local_80);
    *(undefined8 *)(psVar10 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_1005264d4(param_1,psVar9,param_3);
    iVar3 = FUN_1005264d4(psVar9 + 0x50,local_e0,param_3);
    if (iVar3 != 0) goto LAB_1005255d4;
    psVar10 = psVar9 + 0x50;
    if ((uVar5 & 1) != 0) goto LAB_100524f18;
  }
  if (((long)local_e0 - (long)psVar9 >> 4) * -0x3333333333333333 <=
      ((long)psVar9 - (long)param_1 >> 4) * -0x3333333333333333) {
    FUN_100524ec0(psVar9 + 0x50,local_e0,param_3);
    local_e0 = psVar9;
    goto LAB_100524efc;
  }
  FUN_100524ec0(param_1,psVar9,param_3);
  psVar10 = psVar9 + 0x50;
  goto LAB_100524f18;
LAB_1005255d4:
  local_e0 = psVar9;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_100524efc;
}




undefined8 FUN_10052576c(string *param_1,string *param_2,string *param_3,undefined8 *param_4)

{
  string *psVar1;
  string *psVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  uVar4 = (*(code *)*param_4)(param_2,param_1);
  uVar5 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar4 & 1) == 0) {
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    FUN_10003330c(local_b0,param_2);
    psVar1 = param_2 + 0x18;
    FUN_10003330c((string *)local_98,psVar1);
    psVar2 = param_2 + 0x30;
    FUN_10003330c((string *)local_80,psVar2);
    local_68 = *(undefined8 *)(param_2 + 0x48);
    std::string::operator=(param_2,param_3);
    std::string::operator=(psVar1,param_3 + 0x18);
    std::string::operator=(psVar2,param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    std::string::operator=(param_3,(string *)local_b0);
    std::string::operator=(param_3 + 0x18,(string *)local_98);
    std::string::operator=(param_3 + 0x30,(string *)local_80);
    *(undefined8 *)(param_3 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar3 = (*(code *)*param_4)(param_2,param_1);
    if (iVar3 != 0) {
      FUN_10003330c(local_b0,param_1);
      FUN_10003330c((string *)local_98,param_1 + 0x18);
      FUN_10003330c((string *)local_80,param_1 + 0x30);
      local_68 = *(undefined8 *)(param_1 + 0x48);
      std::string::operator=(param_1,param_2);
      std::string::operator=(param_1 + 0x18,psVar1);
      std::string::operator=(param_1 + 0x30,psVar2);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      std::string::operator=(param_2,(string *)local_b0);
      std::string::operator=(psVar1,(string *)local_98);
      std::string::operator=(psVar2,(string *)local_80);
      *(undefined8 *)(param_2 + 0x48) = local_68;
LAB_100525b98:
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      return 2;
    }
  }
  else if ((int)uVar5 == 0) {
    FUN_10003330c(local_b0,param_1);
    FUN_10003330c((string *)local_98,param_1 + 0x18);
    FUN_10003330c((string *)local_80,param_1 + 0x30);
    local_68 = *(undefined8 *)(param_1 + 0x48);
    std::string::operator=(param_1,param_2);
    psVar1 = param_2 + 0x18;
    std::string::operator=(param_1 + 0x18,psVar1);
    psVar2 = param_2 + 0x30;
    std::string::operator=(param_1 + 0x30,psVar2);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    std::string::operator=(param_2,(string *)local_b0);
    std::string::operator=(psVar1,(string *)local_98);
    std::string::operator=(psVar2,(string *)local_80);
    *(undefined8 *)(param_2 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar3 = (*(code *)*param_4)(param_3,param_2);
    if (iVar3 != 0) {
      FUN_10003330c(local_b0,param_2);
      FUN_10003330c((string *)local_98,param_2 + 0x18);
      FUN_10003330c((string *)local_80,param_2 + 0x30);
      local_68 = *(undefined8 *)(param_2 + 0x48);
      std::string::operator=(param_2,param_3);
      std::string::operator=(psVar1,param_3 + 0x18);
      std::string::operator=(psVar2,param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      std::string::operator=(param_3,(string *)local_b0);
      std::string::operator=(param_3 + 0x18,(string *)local_98);
      std::string::operator=(param_3 + 0x30,(string *)local_80);
      *(undefined8 *)(param_3 + 0x48) = local_68;
      goto LAB_100525b98;
    }
  }
  else {
    FUN_10003330c(local_b0,param_1);
    FUN_10003330c((string *)local_98,param_1 + 0x18);
    FUN_10003330c((string *)local_80,param_1 + 0x30);
    local_68 = *(undefined8 *)(param_1 + 0x48);
    std::string::operator=(param_1,param_3);
    std::string::operator=(param_1 + 0x18,param_3 + 0x18);
    std::string::operator=(param_1 + 0x30,param_3 + 0x30);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    std::string::operator=(param_3,(string *)local_b0);
    std::string::operator=(param_3 + 0x18,(string *)local_98);
    std::string::operator=(param_3 + 0x30,(string *)local_80);
    *(undefined8 *)(param_3 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
  }
  return 1;
}




ulong FUN_100525bf4(string *param_1,string *param_2,string *param_3,string *param_4,
                   undefined8 *param_5)

{
  string *this;
  string *this_00;
  string *this_01;
  string *this_02;
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  uVar3 = FUN_10052576c();
  iVar1 = (*(code *)*param_5)(param_4,param_3);
  if (iVar1 != 0) {
    iVar1 = (int)uVar3;
    FUN_10003330c(local_b0,param_3);
    this = param_3 + 0x18;
    FUN_10003330c((string *)local_98,this);
    this_00 = param_3 + 0x30;
    FUN_10003330c((string *)local_80,this_00);
    local_68 = *(undefined8 *)(param_3 + 0x48);
    std::string::operator=(param_3,param_4);
    std::string::operator=(this,param_4 + 0x18);
    std::string::operator=(this_00,param_4 + 0x30);
    *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_4 + 0x48);
    std::string::operator=(param_4,(string *)local_b0);
    std::string::operator=(param_4 + 0x18,(string *)local_98);
    std::string::operator=(param_4 + 0x30,(string *)local_80);
    *(undefined8 *)(param_4 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar2 = (*(code *)*param_5)(param_3,param_2);
    if (iVar2 == 0) {
      uVar3 = (ulong)(iVar1 + 1);
    }
    else {
      FUN_10003330c(local_b0,param_2);
      this_01 = param_2 + 0x18;
      FUN_10003330c((string *)local_98,this_01);
      this_02 = param_2 + 0x30;
      FUN_10003330c((string *)local_80,this_02);
      local_68 = *(undefined8 *)(param_2 + 0x48);
      std::string::operator=(param_2,param_3);
      std::string::operator=(this_01,this);
      std::string::operator=(this_02,this_00);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      std::string::operator=(param_3,(string *)local_b0);
      std::string::operator=(this,(string *)local_98);
      std::string::operator=(this_00,(string *)local_80);
      *(undefined8 *)(param_3 + 0x48) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      iVar2 = (*(code *)*param_5)(param_2,param_1);
      if (iVar2 == 0) {
        uVar3 = (ulong)(iVar1 + 2);
      }
      else {
        FUN_10003330c(local_b0,param_1);
        FUN_10003330c((string *)local_98,param_1 + 0x18);
        FUN_10003330c((string *)local_80,param_1 + 0x30);
        local_68 = *(undefined8 *)(param_1 + 0x48);
        std::string::operator=(param_1,param_2);
        std::string::operator=(param_1 + 0x18,this_01);
        std::string::operator=(param_1 + 0x30,this_02);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
        std::string::operator=(param_2,(string *)local_b0);
        std::string::operator=(this_01,(string *)local_98);
        std::string::operator=(this_02,(string *)local_80);
        *(undefined8 *)(param_2 + 0x48) = local_68;
        if (local_69 < '\0') {
          operator_delete(local_80[0]);
        }
        if (local_81 < '\0') {
          operator_delete(local_98[0]);
        }
        if (local_99 < '\0') {
          operator_delete(local_b0[0]);
        }
        uVar3 = (ulong)(iVar1 + 3);
      }
    }
  }
  return uVar3;
}




ulong FUN_100525f1c(string *param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                   undefined8 *param_6)

{
  string *psVar1;
  string *psVar2;
  string *this;
  string *this_00;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  uVar5 = FUN_100525bf4();
  iVar3 = (*(code *)*param_6)(param_5,param_4);
  if (iVar3 != 0) {
    iVar3 = (int)uVar5;
    FUN_10003330c(local_b0,param_4);
    psVar1 = param_4 + 0x18;
    FUN_10003330c((string *)local_98,psVar1);
    psVar2 = param_4 + 0x30;
    FUN_10003330c((string *)local_80,psVar2);
    local_68 = *(undefined8 *)(param_4 + 0x48);
    std::string::operator=(param_4,param_5);
    std::string::operator=(psVar1,param_5 + 0x18);
    std::string::operator=(psVar2,param_5 + 0x30);
    *(undefined8 *)(param_4 + 0x48) = *(undefined8 *)(param_5 + 0x48);
    std::string::operator=(param_5,(string *)local_b0);
    std::string::operator=(param_5 + 0x18,(string *)local_98);
    std::string::operator=(param_5 + 0x30,(string *)local_80);
    *(undefined8 *)(param_5 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar4 = (*(code *)*param_6)(param_4,param_3);
    if (iVar4 == 0) {
      uVar5 = (ulong)(iVar3 + 1);
    }
    else {
      FUN_10003330c(local_b0,param_3);
      this = param_3 + 0x18;
      FUN_10003330c((string *)local_98,this);
      this_00 = param_3 + 0x30;
      FUN_10003330c((string *)local_80,this_00);
      local_68 = *(undefined8 *)(param_3 + 0x48);
      std::string::operator=(param_3,param_4);
      std::string::operator=(this,psVar1);
      std::string::operator=(this_00,psVar2);
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_4 + 0x48);
      std::string::operator=(param_4,(string *)local_b0);
      std::string::operator=(psVar1,(string *)local_98);
      std::string::operator=(psVar2,(string *)local_80);
      *(undefined8 *)(param_4 + 0x48) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      iVar4 = (*(code *)*param_6)(param_3,param_2);
      if (iVar4 == 0) {
        uVar5 = (ulong)(iVar3 + 2);
      }
      else {
        FUN_10003330c(local_b0,param_2);
        psVar1 = param_2 + 0x18;
        FUN_10003330c((string *)local_98,psVar1);
        psVar2 = param_2 + 0x30;
        FUN_10003330c((string *)local_80,psVar2);
        local_68 = *(undefined8 *)(param_2 + 0x48);
        std::string::operator=(param_2,param_3);
        std::string::operator=(psVar1,this);
        std::string::operator=(psVar2,this_00);
        *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
        std::string::operator=(param_3,(string *)local_b0);
        std::string::operator=(this,(string *)local_98);
        std::string::operator=(this_00,(string *)local_80);
        *(undefined8 *)(param_3 + 0x48) = local_68;
        if (local_69 < '\0') {
          operator_delete(local_80[0]);
        }
        if (local_81 < '\0') {
          operator_delete(local_98[0]);
        }
        if (local_99 < '\0') {
          operator_delete(local_b0[0]);
        }
        iVar4 = (*(code *)*param_6)(param_2,param_1);
        if (iVar4 == 0) {
          uVar5 = (ulong)(iVar3 + 3);
        }
        else {
          FUN_10003330c(local_b0,param_1);
          FUN_10003330c((string *)local_98,param_1 + 0x18);
          FUN_10003330c((string *)local_80,param_1 + 0x30);
          local_68 = *(undefined8 *)(param_1 + 0x48);
          std::string::operator=(param_1,param_2);
          std::string::operator=(param_1 + 0x18,psVar1);
          std::string::operator=(param_1 + 0x30,psVar2);
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
          std::string::operator=(param_2,(string *)local_b0);
          std::string::operator=(psVar1,(string *)local_98);
          std::string::operator=(psVar2,(string *)local_80);
          *(undefined8 *)(param_2 + 0x48) = local_68;
          if (local_69 < '\0') {
            operator_delete(local_80[0]);
          }
          if (local_81 < '\0') {
            operator_delete(local_98[0]);
          }
          if (local_99 < '\0') {
            operator_delete(local_b0[0]);
          }
          uVar5 = (ulong)(iVar3 + 4);
        }
      }
    }
  }
  return uVar5;
}




void FUN_100526334(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  FUN_10052576c(param_1,param_1 + 0x50,param_1 + 0xa0,param_3);
  if (param_1 + 0xf0 != param_2) {
    lVar5 = 0;
    lVar6 = param_1 + 0xf0;
    lVar4 = param_1 + 0xa0;
    do {
      lVar3 = lVar6;
      iVar1 = (*(code *)*param_3)(lVar3,lVar4);
      if (iVar1 != 0) {
        FUN_10003330c(local_b0,lVar3);
        FUN_10003330c((string *)local_98,lVar3 + 0x18);
        FUN_10003330c((string *)local_80,lVar3 + 0x30);
        local_68 = *(undefined8 *)(lVar3 + 0x48);
        lVar6 = lVar5;
        do {
          lVar4 = param_1 + lVar6;
          std::string::operator=((string *)(lVar4 + 0xf0),(string *)(lVar4 + 0xa0));
          std::string::operator=((string *)(lVar4 + 0x108),(string *)(lVar4 + 0xb8));
          std::string::operator=((string *)(lVar4 + 0x120),(string *)(lVar4 + 0xd0));
          *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(lVar4 + 0xe8);
          if (lVar6 == -0xa0) break;
          uVar2 = (*(code *)*param_3)(local_b0,lVar4 + 0x50);
          lVar6 = lVar6 + -0x50;
        } while ((uVar2 & 1) != 0);
        std::string::operator=((string *)(lVar4 + 0xa0),(string *)local_b0);
        std::string::operator=((string *)(lVar4 + 0xb8),(string *)local_98);
        std::string::operator=((string *)(lVar4 + 0xd0),(string *)local_80);
        *(undefined8 *)(lVar4 + 0xe8) = local_68;
        if (local_69 < '\0') {
          operator_delete(local_80[0]);
        }
        if (local_81 < '\0') {
          operator_delete(local_98[0]);
        }
        if (local_99 < '\0') {
          operator_delete(local_b0[0]);
        }
      }
      lVar5 = lVar5 + 0x50;
      lVar6 = lVar3 + 0x50;
      lVar4 = lVar3;
    } while (lVar3 + 0x50 != param_2);
  }
  return;
}




bool FUN_1005264d4(string *param_1,string *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  string *psVar5;
  long lVar6;
  string *psVar7;
  string *psVar8;
  long lVar9;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  switch(((long)param_2 - (long)param_1 >> 4) * -0x3333333333333333) {
  case 0:
  case 1:
    break;
  case 2:
    psVar7 = param_2 + -0x50;
    iVar2 = (*(code *)*param_3)(psVar7,param_1);
    if (iVar2 != 0) {
      FUN_10003330c(local_b0,param_1);
      FUN_10003330c((string *)local_98,param_1 + 0x18);
      FUN_10003330c((string *)local_80,param_1 + 0x30);
      local_68 = *(undefined8 *)(param_1 + 0x48);
      std::string::operator=(param_1,psVar7);
      std::string::operator=(param_1 + 0x18,param_2 + -0x38);
      std::string::operator=(param_1 + 0x30,param_2 + -0x20);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + -8);
      std::string::operator=(psVar7,(string *)local_b0);
      std::string::operator=(param_2 + -0x38,(string *)local_98);
      std::string::operator=(param_2 + -0x20,(string *)local_80);
      *(undefined8 *)(param_2 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
    }
    break;
  case 3:
    FUN_10052576c(param_1,param_1 + 0x50,param_2 + -0x50,param_3);
    break;
  case 4:
    FUN_100525bf4(param_1,param_1 + 0x50,param_1 + 0xa0,param_2 + -0x50,param_3);
    break;
  case 5:
    FUN_100525f1c(param_1,param_1 + 0x50,param_1 + 0xa0,param_1 + 0xf0,param_2 + -0x50,param_3);
    break;
  default:
    FUN_10052576c(param_1,param_1 + 0x50,param_1 + 0xa0,param_3);
    if (param_1 + 0xf0 != param_2) {
      lVar6 = 0;
      iVar2 = 0;
      psVar7 = param_1 + 0xf0;
      psVar8 = param_1 + 0xa0;
      do {
        psVar5 = psVar7;
        iVar3 = (*(code *)*param_3)(psVar5,psVar8);
        if (iVar3 != 0) {
          FUN_10003330c(local_b0,psVar5);
          FUN_10003330c((string *)local_98,psVar5 + 0x18);
          FUN_10003330c((string *)local_80,psVar5 + 0x30);
          local_68 = *(undefined8 *)(psVar5 + 0x48);
          lVar1 = lVar6;
          do {
            lVar9 = lVar1;
            std::string::operator=(param_1 + lVar9 + 0xf0,param_1 + lVar9 + 0xa0);
            std::string::operator=(param_1 + lVar9 + 0x108,param_1 + lVar9 + 0xb8);
            std::string::operator=(param_1 + lVar9 + 0x120,param_1 + lVar9 + 0xd0);
            *(undefined8 *)(param_1 + lVar9 + 0x138) = *(undefined8 *)(param_1 + lVar9 + 0xe8);
            if (lVar9 == -0xa0) break;
            uVar4 = (*(code *)*param_3)(local_b0,param_1 + lVar9 + 0x50);
            lVar1 = lVar9 + -0x50;
          } while ((uVar4 & 1) != 0);
          std::string::operator=(param_1 + lVar9 + 0xa0,(string *)local_b0);
          std::string::operator=(param_1 + lVar9 + 0xb8,(string *)local_98);
          std::string::operator=(param_1 + lVar9 + 0xd0,(string *)local_80);
          *(undefined8 *)(param_1 + lVar9 + 0xe8) = local_68;
          if (local_69 < '\0') {
            operator_delete(local_80[0]);
          }
          if (local_81 < '\0') {
            operator_delete(local_98[0]);
          }
          if (local_99 < '\0') {
            operator_delete(local_b0[0]);
          }
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return psVar5 + 0x50 == param_2;
          }
        }
        lVar6 = lVar6 + 0x50;
        psVar7 = psVar5 + 0x50;
        psVar8 = psVar5;
      } while (psVar5 + 0x50 != param_2);
    }
  }
  return true;
}




void FUN_100526814(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x1a0);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (ulong)*param_1 * 0x1a0;
      pvVar3 = pvVar1;
      do {
        FUN_1005268e0(pvVar3,pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x1a0);
        pvVar3 = (void *)((long)pvVar3 + 0x1a0);
        lVar4 = lVar4 + -0x1a0;
      } while (lVar4 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x1a0;
        do {
          FUN_1001690b8(pvVar2);
          pvVar2 = (void *)((long)pvVar2 + 0x1a0);
          lVar4 = lVar4 + -0x1a0;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_1005268e0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_1004e439c();
  FUN_10003330c(lVar1 + 0x10,param_2 + 0x10);
  FUN_10003330c(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_10003330c(param_1 + 0x48,param_2 + 0x48);
  FUN_10003330c(param_1 + 0x60,param_2 + 0x60);
  FUN_10003330c(param_1 + 0x78,param_2 + 0x78);
  FUN_10003330c(param_1 + 0x90,param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_10003330c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_10003330c(param_1 + 0xd8,param_2 + 0xd8);
  FUN_10003330c(param_1 + 0xf0,param_2 + 0xf0);
  FUN_10003330c(param_1 + 0x108,param_2 + 0x108);
  FUN_10003330c(param_1 + 0x120,param_2 + 0x120);
  FUN_10003330c(param_1 + 0x138,param_2 + 0x138);
  FUN_10003330c(param_1 + 0x150,param_2 + 0x150);
  FUN_10003330c(param_1 + 0x168,param_2 + 0x168);
  FUN_10003330c(param_1 + 0x180,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  return;
}




void FUN_1005269d8(string *param_1,string *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  string *this;
  ulong uVar5;
  string *this_00;
  string *this_01;
  string *psVar6;
  string *psVar7;
  string *psVar8;
  string *psVar9;
  string *psVar10;
  string *local_e0;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  local_e0 = param_2;
LAB_100526a14:
  this_00 = local_e0 + -0x50;
  this_01 = local_e0 + -0x38;
  this = local_e0 + -0x20;
  psVar10 = param_1;
LAB_100526a30:
  while( true ) {
    param_1 = psVar10;
    uVar5 = (long)local_e0 - (long)param_1;
    switch(((long)uVar5 >> 4) * -0x3333333333333333) {
    case 0:
    case 1:
      return;
    case 2:
      iVar3 = (*(code *)*param_3)(this_00,param_1);
      if (iVar3 == 0) {
        return;
      }
      FUN_10003330c(local_b0,param_1);
      FUN_10003330c((string *)local_98,param_1 + 0x18);
      FUN_10003330c((string *)local_80,param_1 + 0x30);
      local_68 = *(undefined8 *)(param_1 + 0x48);
      std::string::operator=(param_1,this_00);
      std::string::operator=(param_1 + 0x18,this_01);
      std::string::operator=(param_1 + 0x30,this);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(local_e0 + -8);
      std::string::operator=(this_00,(string *)local_b0);
      std::string::operator=(this_01,(string *)local_98);
      std::string::operator=(this,(string *)local_80);
      *(undefined8 *)(local_e0 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
        return;
      }
      return;
    case 3:
      FUN_100527284(param_1,param_1 + 0x50,this_00,param_3);
      return;
    case 4:
      FUN_10052770c(param_1,param_1 + 0x50,param_1 + 0xa0,this_00,param_3);
      return;
    case 5:
      FUN_100527a34(param_1,param_1 + 0x50,param_1 + 0xa0,param_1 + 0xf0,this_00,param_3);
      return;
    }
    if ((long)uVar5 < 0x230) {
      FUN_100527e4c(param_1,local_e0,param_3);
      return;
    }
    if ((long)uVar5 < 0x13831) {
      psVar10 = param_1 + ((uVar5 & 0xffffffff) / 0xa0) * 0x50;
      iVar3 = FUN_100527284(param_1,psVar10,this_00,param_3);
    }
    else {
      psVar10 = param_1 + (uVar5 / 0xa0) * 0x50;
      lVar1 = (uVar5 / 0x140) * 4 + uVar5 / 0x140;
      iVar3 = FUN_100527a34(param_1,param_1 + lVar1 * 0x10,psVar10,psVar10 + lVar1 * 0x10,this_00,
                            param_3);
    }
    uVar5 = (*(code *)*param_3)(param_1,psVar10);
    psVar6 = this_00;
    if ((uVar5 & 1) != 0) break;
    while (psVar9 = psVar6, psVar6 = psVar9 + -0x50, psVar6 != param_1) {
      iVar4 = (*(code *)*param_3)(psVar6,psVar10);
      if (iVar4 != 0) goto code_r0x000100526b20;
    }
    psVar6 = param_1 + 0x50;
    uVar5 = (*(code *)*param_3)(param_1,this_00);
    if ((uVar5 & 1) == 0) {
      if (psVar6 == this_00) {
        return;
      }
      psVar6 = param_1 + 0xa0;
      while( true ) {
        psVar10 = psVar6 + -0x50;
        iVar3 = (*(code *)*param_3)(param_1,psVar10);
        if (iVar3 != 0) break;
        bVar2 = psVar6 == this_00;
        psVar6 = psVar6 + 0x50;
        if (bVar2) {
          return;
        }
      }
      FUN_10003330c(local_b0,psVar10);
      FUN_10003330c((string *)local_98,psVar6 + -0x38);
      FUN_10003330c((string *)local_80,psVar6 + -0x20);
      local_68 = *(undefined8 *)(psVar6 + -8);
      std::string::operator=(psVar10,this_00);
      std::string::operator=(psVar6 + -0x38,this_01);
      std::string::operator=(psVar6 + -0x20,this);
      *(undefined8 *)(psVar6 + -8) = *(undefined8 *)(local_e0 + -8);
      std::string::operator=(this_00,(string *)local_b0);
      std::string::operator=(this_01,(string *)local_98);
      std::string::operator=(this,(string *)local_80);
      *(undefined8 *)(local_e0 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
    }
    psVar9 = this_00;
    if (psVar6 == this_00) {
      return;
    }
    while( true ) {
      do {
        psVar10 = psVar6;
        iVar3 = (*(code *)*param_3)(param_1,psVar10);
        psVar6 = psVar10 + 0x50;
      } while (iVar3 == 0);
      do {
        psVar8 = psVar9;
        psVar9 = psVar8 + -0x50;
        uVar5 = (*(code *)*param_3)(param_1,psVar9);
      } while ((uVar5 & 1) != 0);
      if (psVar9 <= psVar10) break;
      FUN_10003330c(local_b0,psVar10);
      FUN_10003330c((string *)local_98,psVar10 + 0x18);
      FUN_10003330c((string *)local_80,psVar10 + 0x30);
      local_68 = *(undefined8 *)(psVar10 + 0x48);
      std::string::operator=(psVar10,psVar9);
      std::string::operator=(psVar10 + 0x18,psVar8 + -0x38);
      std::string::operator=(psVar10 + 0x30,psVar8 + -0x20);
      *(undefined8 *)(psVar10 + 0x48) = *(undefined8 *)(psVar8 + -8);
      std::string::operator=(psVar9,(string *)local_b0);
      std::string::operator=(psVar8 + -0x38,(string *)local_98);
      std::string::operator=(psVar8 + -0x20,(string *)local_80);
      *(undefined8 *)(psVar8 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
    }
  }
  goto LAB_100526bf0;
code_r0x000100526b20:
  FUN_10003330c(local_b0,param_1);
  FUN_10003330c((string *)local_98,param_1 + 0x18);
  FUN_10003330c((string *)local_80,param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x48);
  std::string::operator=(param_1,psVar6);
  std::string::operator=(param_1 + 0x18,psVar9 + -0x38);
  std::string::operator=(param_1 + 0x30,psVar9 + -0x20);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(psVar9 + -8);
  std::string::operator=(psVar6,(string *)local_b0);
  std::string::operator=(psVar9 + -0x38,(string *)local_98);
  std::string::operator=(psVar9 + -0x20,(string *)local_80);
  *(undefined8 *)(psVar9 + -8) = local_68;
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  iVar3 = iVar3 + 1;
LAB_100526bf0:
  psVar9 = param_1 + 0x50;
  psVar8 = psVar9;
  psVar7 = psVar10;
  if (psVar9 < psVar6) {
    while( true ) {
      do {
        psVar10 = psVar7;
        psVar9 = psVar8;
        uVar5 = (*(code *)*param_3)(psVar9,psVar10);
        psVar8 = psVar9 + 0x50;
        psVar7 = psVar10;
      } while ((uVar5 & 1) != 0);
      do {
        psVar7 = psVar6;
        psVar6 = psVar7 + -0x50;
        iVar4 = (*(code *)*param_3)(psVar6,psVar10);
      } while (iVar4 == 0);
      if (psVar6 < psVar9) break;
      FUN_10003330c(local_b0,psVar9);
      FUN_10003330c((string *)local_98,psVar9 + 0x18);
      FUN_10003330c((string *)local_80,psVar9 + 0x30);
      local_68 = *(undefined8 *)(psVar9 + 0x48);
      std::string::operator=(psVar9,psVar6);
      std::string::operator=(psVar9 + 0x18,psVar7 + -0x38);
      std::string::operator=(psVar9 + 0x30,psVar7 + -0x20);
      *(undefined8 *)(psVar9 + 0x48) = *(undefined8 *)(psVar7 + -8);
      std::string::operator=(psVar6,(string *)local_b0);
      std::string::operator=(psVar7 + -0x38,(string *)local_98);
      std::string::operator=(psVar7 + -0x20,(string *)local_80);
      *(undefined8 *)(psVar7 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      iVar3 = iVar3 + 1;
      psVar7 = psVar6;
      if (psVar9 != psVar10) {
        psVar7 = psVar10;
      }
    }
  }
  if ((psVar9 != psVar10) && (iVar4 = (*(code *)*param_3)(psVar10,psVar9), iVar4 != 0)) {
    FUN_10003330c(local_b0,psVar9);
    FUN_10003330c((string *)local_98,psVar9 + 0x18);
    FUN_10003330c((string *)local_80,psVar9 + 0x30);
    local_68 = *(undefined8 *)(psVar9 + 0x48);
    std::string::operator=(psVar9,psVar10);
    std::string::operator=(psVar9 + 0x18,psVar10 + 0x18);
    std::string::operator=(psVar9 + 0x30,psVar10 + 0x30);
    *(undefined8 *)(psVar9 + 0x48) = *(undefined8 *)(psVar10 + 0x48);
    std::string::operator=(psVar10,(string *)local_b0);
    std::string::operator=(psVar10 + 0x18,(string *)local_98);
    std::string::operator=(psVar10 + 0x30,(string *)local_80);
    *(undefined8 *)(psVar10 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_100527fec(param_1,psVar9,param_3);
    iVar3 = FUN_100527fec(psVar9 + 0x50,local_e0,param_3);
    if (iVar3 != 0) goto LAB_1005270ec;
    psVar10 = psVar9 + 0x50;
    if ((uVar5 & 1) != 0) goto LAB_100526a30;
  }
  if (((long)local_e0 - (long)psVar9 >> 4) * -0x3333333333333333 <=
      ((long)psVar9 - (long)param_1 >> 4) * -0x3333333333333333) {
    FUN_1005269d8(psVar9 + 0x50,local_e0,param_3);
    local_e0 = psVar9;
    goto LAB_100526a14;
  }
  FUN_1005269d8(param_1,psVar9,param_3);
  psVar10 = psVar9 + 0x50;
  goto LAB_100526a30;
LAB_1005270ec:
  local_e0 = psVar9;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_100526a14;
}




undefined8 FUN_100527284(string *param_1,string *param_2,string *param_3,undefined8 *param_4)

{
  string *psVar1;
  string *psVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  uVar4 = (*(code *)*param_4)(param_2,param_1);
  uVar5 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar4 & 1) == 0) {
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    FUN_10003330c(local_b0,param_2);
    psVar1 = param_2 + 0x18;
    FUN_10003330c((string *)local_98,psVar1);
    psVar2 = param_2 + 0x30;
    FUN_10003330c((string *)local_80,psVar2);
    local_68 = *(undefined8 *)(param_2 + 0x48);
    std::string::operator=(param_2,param_3);
    std::string::operator=(psVar1,param_3 + 0x18);
    std::string::operator=(psVar2,param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    std::string::operator=(param_3,(string *)local_b0);
    std::string::operator=(param_3 + 0x18,(string *)local_98);
    std::string::operator=(param_3 + 0x30,(string *)local_80);
    *(undefined8 *)(param_3 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar3 = (*(code *)*param_4)(param_2,param_1);
    if (iVar3 != 0) {
      FUN_10003330c(local_b0,param_1);
      FUN_10003330c((string *)local_98,param_1 + 0x18);
      FUN_10003330c((string *)local_80,param_1 + 0x30);
      local_68 = *(undefined8 *)(param_1 + 0x48);
      std::string::operator=(param_1,param_2);
      std::string::operator=(param_1 + 0x18,psVar1);
      std::string::operator=(param_1 + 0x30,psVar2);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      std::string::operator=(param_2,(string *)local_b0);
      std::string::operator=(psVar1,(string *)local_98);
      std::string::operator=(psVar2,(string *)local_80);
      *(undefined8 *)(param_2 + 0x48) = local_68;
LAB_1005276b0:
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      return 2;
    }
  }
  else if ((int)uVar5 == 0) {
    FUN_10003330c(local_b0,param_1);
    FUN_10003330c((string *)local_98,param_1 + 0x18);
    FUN_10003330c((string *)local_80,param_1 + 0x30);
    local_68 = *(undefined8 *)(param_1 + 0x48);
    std::string::operator=(param_1,param_2);
    psVar1 = param_2 + 0x18;
    std::string::operator=(param_1 + 0x18,psVar1);
    psVar2 = param_2 + 0x30;
    std::string::operator=(param_1 + 0x30,psVar2);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    std::string::operator=(param_2,(string *)local_b0);
    std::string::operator=(psVar1,(string *)local_98);
    std::string::operator=(psVar2,(string *)local_80);
    *(undefined8 *)(param_2 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar3 = (*(code *)*param_4)(param_3,param_2);
    if (iVar3 != 0) {
      FUN_10003330c(local_b0,param_2);
      FUN_10003330c((string *)local_98,param_2 + 0x18);
      FUN_10003330c((string *)local_80,param_2 + 0x30);
      local_68 = *(undefined8 *)(param_2 + 0x48);
      std::string::operator=(param_2,param_3);
      std::string::operator=(psVar1,param_3 + 0x18);
      std::string::operator=(psVar2,param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      std::string::operator=(param_3,(string *)local_b0);
      std::string::operator=(param_3 + 0x18,(string *)local_98);
      std::string::operator=(param_3 + 0x30,(string *)local_80);
      *(undefined8 *)(param_3 + 0x48) = local_68;
      goto LAB_1005276b0;
    }
  }
  else {
    FUN_10003330c(local_b0,param_1);
    FUN_10003330c((string *)local_98,param_1 + 0x18);
    FUN_10003330c((string *)local_80,param_1 + 0x30);
    local_68 = *(undefined8 *)(param_1 + 0x48);
    std::string::operator=(param_1,param_3);
    std::string::operator=(param_1 + 0x18,param_3 + 0x18);
    std::string::operator=(param_1 + 0x30,param_3 + 0x30);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    std::string::operator=(param_3,(string *)local_b0);
    std::string::operator=(param_3 + 0x18,(string *)local_98);
    std::string::operator=(param_3 + 0x30,(string *)local_80);
    *(undefined8 *)(param_3 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
  }
  return 1;
}




ulong FUN_10052770c(string *param_1,string *param_2,string *param_3,string *param_4,
                   undefined8 *param_5)

{
  string *this;
  string *this_00;
  string *this_01;
  string *this_02;
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  uVar3 = FUN_100527284();
  iVar1 = (*(code *)*param_5)(param_4,param_3);
  if (iVar1 != 0) {
    iVar1 = (int)uVar3;
    FUN_10003330c(local_b0,param_3);
    this = param_3 + 0x18;
    FUN_10003330c((string *)local_98,this);
    this_00 = param_3 + 0x30;
    FUN_10003330c((string *)local_80,this_00);
    local_68 = *(undefined8 *)(param_3 + 0x48);
    std::string::operator=(param_3,param_4);
    std::string::operator=(this,param_4 + 0x18);
    std::string::operator=(this_00,param_4 + 0x30);
    *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_4 + 0x48);
    std::string::operator=(param_4,(string *)local_b0);
    std::string::operator=(param_4 + 0x18,(string *)local_98);
    std::string::operator=(param_4 + 0x30,(string *)local_80);
    *(undefined8 *)(param_4 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar2 = (*(code *)*param_5)(param_3,param_2);
    if (iVar2 == 0) {
      uVar3 = (ulong)(iVar1 + 1);
    }
    else {
      FUN_10003330c(local_b0,param_2);
      this_01 = param_2 + 0x18;
      FUN_10003330c((string *)local_98,this_01);
      this_02 = param_2 + 0x30;
      FUN_10003330c((string *)local_80,this_02);
      local_68 = *(undefined8 *)(param_2 + 0x48);
      std::string::operator=(param_2,param_3);
      std::string::operator=(this_01,this);
      std::string::operator=(this_02,this_00);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      std::string::operator=(param_3,(string *)local_b0);
      std::string::operator=(this,(string *)local_98);
      std::string::operator=(this_00,(string *)local_80);
      *(undefined8 *)(param_3 + 0x48) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      iVar2 = (*(code *)*param_5)(param_2,param_1);
      if (iVar2 == 0) {
        uVar3 = (ulong)(iVar1 + 2);
      }
      else {
        FUN_10003330c(local_b0,param_1);
        FUN_10003330c((string *)local_98,param_1 + 0x18);
        FUN_10003330c((string *)local_80,param_1 + 0x30);
        local_68 = *(undefined8 *)(param_1 + 0x48);
        std::string::operator=(param_1,param_2);
        std::string::operator=(param_1 + 0x18,this_01);
        std::string::operator=(param_1 + 0x30,this_02);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
        std::string::operator=(param_2,(string *)local_b0);
        std::string::operator=(this_01,(string *)local_98);
        std::string::operator=(this_02,(string *)local_80);
        *(undefined8 *)(param_2 + 0x48) = local_68;
        if (local_69 < '\0') {
          operator_delete(local_80[0]);
        }
        if (local_81 < '\0') {
          operator_delete(local_98[0]);
        }
        if (local_99 < '\0') {
          operator_delete(local_b0[0]);
        }
        uVar3 = (ulong)(iVar1 + 3);
      }
    }
  }
  return uVar3;
}




ulong FUN_100527a34(string *param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                   undefined8 *param_6)

{
  string *psVar1;
  string *psVar2;
  string *this;
  string *this_00;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  uVar5 = FUN_10052770c();
  iVar3 = (*(code *)*param_6)(param_5,param_4);
  if (iVar3 != 0) {
    iVar3 = (int)uVar5;
    FUN_10003330c(local_b0,param_4);
    psVar1 = param_4 + 0x18;
    FUN_10003330c((string *)local_98,psVar1);
    psVar2 = param_4 + 0x30;
    FUN_10003330c((string *)local_80,psVar2);
    local_68 = *(undefined8 *)(param_4 + 0x48);
    std::string::operator=(param_4,param_5);
    std::string::operator=(psVar1,param_5 + 0x18);
    std::string::operator=(psVar2,param_5 + 0x30);
    *(undefined8 *)(param_4 + 0x48) = *(undefined8 *)(param_5 + 0x48);
    std::string::operator=(param_5,(string *)local_b0);
    std::string::operator=(param_5 + 0x18,(string *)local_98);
    std::string::operator=(param_5 + 0x30,(string *)local_80);
    *(undefined8 *)(param_5 + 0x48) = local_68;
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    iVar4 = (*(code *)*param_6)(param_4,param_3);
    if (iVar4 == 0) {
      uVar5 = (ulong)(iVar3 + 1);
    }
    else {
      FUN_10003330c(local_b0,param_3);
      this = param_3 + 0x18;
      FUN_10003330c((string *)local_98,this);
      this_00 = param_3 + 0x30;
      FUN_10003330c((string *)local_80,this_00);
      local_68 = *(undefined8 *)(param_3 + 0x48);
      std::string::operator=(param_3,param_4);
      std::string::operator=(this,psVar1);
      std::string::operator=(this_00,psVar2);
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_4 + 0x48);
      std::string::operator=(param_4,(string *)local_b0);
      std::string::operator=(psVar1,(string *)local_98);
      std::string::operator=(psVar2,(string *)local_80);
      *(undefined8 *)(param_4 + 0x48) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
      iVar4 = (*(code *)*param_6)(param_3,param_2);
      if (iVar4 == 0) {
        uVar5 = (ulong)(iVar3 + 2);
      }
      else {
        FUN_10003330c(local_b0,param_2);
        psVar1 = param_2 + 0x18;
        FUN_10003330c((string *)local_98,psVar1);
        psVar2 = param_2 + 0x30;
        FUN_10003330c((string *)local_80,psVar2);
        local_68 = *(undefined8 *)(param_2 + 0x48);
        std::string::operator=(param_2,param_3);
        std::string::operator=(psVar1,this);
        std::string::operator=(psVar2,this_00);
        *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
        std::string::operator=(param_3,(string *)local_b0);
        std::string::operator=(this,(string *)local_98);
        std::string::operator=(this_00,(string *)local_80);
        *(undefined8 *)(param_3 + 0x48) = local_68;
        if (local_69 < '\0') {
          operator_delete(local_80[0]);
        }
        if (local_81 < '\0') {
          operator_delete(local_98[0]);
        }
        if (local_99 < '\0') {
          operator_delete(local_b0[0]);
        }
        iVar4 = (*(code *)*param_6)(param_2,param_1);
        if (iVar4 == 0) {
          uVar5 = (ulong)(iVar3 + 3);
        }
        else {
          FUN_10003330c(local_b0,param_1);
          FUN_10003330c((string *)local_98,param_1 + 0x18);
          FUN_10003330c((string *)local_80,param_1 + 0x30);
          local_68 = *(undefined8 *)(param_1 + 0x48);
          std::string::operator=(param_1,param_2);
          std::string::operator=(param_1 + 0x18,psVar1);
          std::string::operator=(param_1 + 0x30,psVar2);
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
          std::string::operator=(param_2,(string *)local_b0);
          std::string::operator=(psVar1,(string *)local_98);
          std::string::operator=(psVar2,(string *)local_80);
          *(undefined8 *)(param_2 + 0x48) = local_68;
          if (local_69 < '\0') {
            operator_delete(local_80[0]);
          }
          if (local_81 < '\0') {
            operator_delete(local_98[0]);
          }
          if (local_99 < '\0') {
            operator_delete(local_b0[0]);
          }
          uVar5 = (ulong)(iVar3 + 4);
        }
      }
    }
  }
  return uVar5;
}




void FUN_100527e4c(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  FUN_100527284(param_1,param_1 + 0x50,param_1 + 0xa0,param_3);
  if (param_1 + 0xf0 != param_2) {
    lVar5 = 0;
    lVar6 = param_1 + 0xf0;
    lVar4 = param_1 + 0xa0;
    do {
      lVar3 = lVar6;
      iVar1 = (*(code *)*param_3)(lVar3,lVar4);
      if (iVar1 != 0) {
        FUN_10003330c(local_b0,lVar3);
        FUN_10003330c((string *)local_98,lVar3 + 0x18);
        FUN_10003330c((string *)local_80,lVar3 + 0x30);
        local_68 = *(undefined8 *)(lVar3 + 0x48);
        lVar6 = lVar5;
        do {
          lVar4 = param_1 + lVar6;
          std::string::operator=((string *)(lVar4 + 0xf0),(string *)(lVar4 + 0xa0));
          std::string::operator=((string *)(lVar4 + 0x108),(string *)(lVar4 + 0xb8));
          std::string::operator=((string *)(lVar4 + 0x120),(string *)(lVar4 + 0xd0));
          *(undefined8 *)(lVar4 + 0x138) = *(undefined8 *)(lVar4 + 0xe8);
          if (lVar6 == -0xa0) break;
          uVar2 = (*(code *)*param_3)(local_b0,lVar4 + 0x50);
          lVar6 = lVar6 + -0x50;
        } while ((uVar2 & 1) != 0);
        std::string::operator=((string *)(lVar4 + 0xa0),(string *)local_b0);
        std::string::operator=((string *)(lVar4 + 0xb8),(string *)local_98);
        std::string::operator=((string *)(lVar4 + 0xd0),(string *)local_80);
        *(undefined8 *)(lVar4 + 0xe8) = local_68;
        if (local_69 < '\0') {
          operator_delete(local_80[0]);
        }
        if (local_81 < '\0') {
          operator_delete(local_98[0]);
        }
        if (local_99 < '\0') {
          operator_delete(local_b0[0]);
        }
      }
      lVar5 = lVar5 + 0x50;
      lVar6 = lVar3 + 0x50;
      lVar4 = lVar3;
    } while (lVar3 + 0x50 != param_2);
  }
  return;
}




bool FUN_100527fec(string *param_1,string *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  string *psVar5;
  long lVar6;
  string *psVar7;
  string *psVar8;
  long lVar9;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined8 local_68;
  
  switch(((long)param_2 - (long)param_1 >> 4) * -0x3333333333333333) {
  case 0:
  case 1:
    break;
  case 2:
    psVar7 = param_2 + -0x50;
    iVar2 = (*(code *)*param_3)(psVar7,param_1);
    if (iVar2 != 0) {
      FUN_10003330c(local_b0,param_1);
      FUN_10003330c((string *)local_98,param_1 + 0x18);
      FUN_10003330c((string *)local_80,param_1 + 0x30);
      local_68 = *(undefined8 *)(param_1 + 0x48);
      std::string::operator=(param_1,psVar7);
      std::string::operator=(param_1 + 0x18,param_2 + -0x38);
      std::string::operator=(param_1 + 0x30,param_2 + -0x20);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + -8);
      std::string::operator=(psVar7,(string *)local_b0);
      std::string::operator=(param_2 + -0x38,(string *)local_98);
      std::string::operator=(param_2 + -0x20,(string *)local_80);
      *(undefined8 *)(param_2 + -8) = local_68;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_99 < '\0') {
        operator_delete(local_b0[0]);
      }
    }
    break;
  case 3:
    FUN_100527284(param_1,param_1 + 0x50,param_2 + -0x50,param_3);
    break;
  case 4:
    FUN_10052770c(param_1,param_1 + 0x50,param_1 + 0xa0,param_2 + -0x50,param_3);
    break;
  case 5:
    FUN_100527a34(param_1,param_1 + 0x50,param_1 + 0xa0,param_1 + 0xf0,param_2 + -0x50,param_3);
    break;
  default:
    FUN_100527284(param_1,param_1 + 0x50,param_1 + 0xa0,param_3);
    if (param_1 + 0xf0 != param_2) {
      lVar6 = 0;
      iVar2 = 0;
      psVar7 = param_1 + 0xf0;
      psVar8 = param_1 + 0xa0;
      do {
        psVar5 = psVar7;
        iVar3 = (*(code *)*param_3)(psVar5,psVar8);
        if (iVar3 != 0) {
          FUN_10003330c(local_b0,psVar5);
          FUN_10003330c((string *)local_98,psVar5 + 0x18);
          FUN_10003330c((string *)local_80,psVar5 + 0x30);
          local_68 = *(undefined8 *)(psVar5 + 0x48);
          lVar1 = lVar6;
          do {
            lVar9 = lVar1;
            std::string::operator=(param_1 + lVar9 + 0xf0,param_1 + lVar9 + 0xa0);
            std::string::operator=(param_1 + lVar9 + 0x108,param_1 + lVar9 + 0xb8);
            std::string::operator=(param_1 + lVar9 + 0x120,param_1 + lVar9 + 0xd0);
            *(undefined8 *)(param_1 + lVar9 + 0x138) = *(undefined8 *)(param_1 + lVar9 + 0xe8);
            if (lVar9 == -0xa0) break;
            uVar4 = (*(code *)*param_3)(local_b0,param_1 + lVar9 + 0x50);
            lVar1 = lVar9 + -0x50;
          } while ((uVar4 & 1) != 0);
          std::string::operator=(param_1 + lVar9 + 0xa0,(string *)local_b0);
          std::string::operator=(param_1 + lVar9 + 0xb8,(string *)local_98);
          std::string::operator=(param_1 + lVar9 + 0xd0,(string *)local_80);
          *(undefined8 *)(param_1 + lVar9 + 0xe8) = local_68;
          if (local_69 < '\0') {
            operator_delete(local_80[0]);
          }
          if (local_81 < '\0') {
            operator_delete(local_98[0]);
          }
          if (local_99 < '\0') {
            operator_delete(local_b0[0]);
          }
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return psVar5 + 0x50 == param_2;
          }
        }
        lVar6 = lVar6 + 0x50;
        psVar7 = psVar5 + 0x50;
        psVar8 = psVar5;
      } while (psVar5 + 0x50 != param_2);
    }
  }
  return true;
}




void FUN_100528494(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 << 5);
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 << 5;
      pvVar3 = pvVar2;
      do {
        lVar4 = FUN_10003330c(pvVar3,puVar5);
        uVar1 = *(undefined4 *)(puVar5 + 3);
        *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)((long)puVar5 + 0x1c);
        *(undefined4 *)(lVar4 + 0x18) = uVar1;
        puVar5 = puVar5 + 4;
        pvVar3 = (void *)(lVar4 + 0x20);
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            operator_delete((void *)*puVar5);
          }
          puVar5 = puVar5 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10052856c(void)

{
  _DAT_101d91788 = 0;
  DAT_101d91790 = 0;
  ___cxa_atexit(FUN_1004edec8,&DAT_101d91788,0x100000000);
  FUN_1000ee4ec(&DAT_101d91798,"GUILD_TYPE_CASUAL");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d91798,0x100000000);
  FUN_1000ee4ec(&DAT_101d917b0,"GUILD_TYPE_MIDCORE");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d917b0,0x100000000);
  FUN_1000ee4ec(&DAT_101d917c8,"GUILD_TYPE_COMPETITIVE");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d917c8,0x100000000);
  FUN_1000ee4ec(&DAT_101d917e0,"GUILD_TYPE_UNIVERSITY");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d917e0,0x100000000);
  FUN_1000ee4ec(&DAT_101d917f8,"GUILD_TYPE_ANY");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d917f8,0x100000000);
  return;
}




void FUN_10052867c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_10149f108;
  if (param_1[1] != 0) {
    piVar1 = (int *)(param_1[1] + 0x48);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}




void FUN_1005286a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *local_28;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x4c) - 7U < 2) {
    lVar2 = param_1[10];
    while (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x58);
      FUN_1005286a8();
    }
  }
  else if (*(int *)((long)param_1 + 0x4c) == 4) {
    puVar3 = (undefined8 *)param_1[10];
    if (puVar3[1] != 0) {
      *(undefined4 *)puVar3 = 0;
      puVar3 = (undefined8 *)param_1[10];
      if (puVar3 == (undefined8 *)0x0) goto LAB_100528724;
      if ((void *)puVar3[1] != (void *)0x0) {
        operator_delete__((void *)puVar3[1]);
        *puVar3 = 0;
        puVar3[1] = 0;
      }
    }
    operator_delete(puVar3);
  }
LAB_100528724:
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0x900000000;
  uVar1 = DAT_101e94750;
  local_28 = param_1;
  (**(code **)*param_1)(param_1);
  FUN_100528960(uVar1,&local_28);
  return;
}




void FUN_10052877c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_10149f108;
  if (param_1[1] != 0) {
    piVar1 = (int *)(param_1[1] + 0x48);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  operator_delete(param_1);
  return;
}




void FUN_1005287a8(long param_1)

{
  undefined8 uVar1;
  long local_28;
  
  if (param_1 != 0) {
    FUN_1005287f4();
    uVar1 = DAT_101e94758;
    local_28 = param_1;
    FUN_1005287f4(param_1);
    FUN_100528a5c(uVar1,&local_28);
  }
  return;
}




void FUN_1005287f4(long param_1)

{
  FUN_1005286a8(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_1005286a8(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0xbf80000000000000;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  return;
}




undefined8 * FUN_100528858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f128;
  if ((param_1[6] != 0) && (*(char *)(param_1 + 7) != '\0')) {
    FUN_1005287a8();
  }
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}




void FUN_1005288a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f128;
  if ((param_1[6] != 0) && (*(char *)(param_1 + 7) != '\0')) {
    FUN_1005287a8();
  }
  operator_delete(param_1);
  return;
}




void FUN_1005288e4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100528960(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1005288e4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1005289e0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100528a5c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1005289e0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100528adc(void)

{
  DAT_101d91818 = &PTR_FUN_10149f108;
  DAT_101d91820 = 0;
  ___cxa_atexit(FUN_10052867c,&DAT_101d91818,0x100000000);
  DAT_101d91828 = &PTR_FUN_10149f128;
  DAT_101d91858 = 0;
  uRam0000000101d91838 = 0;
  _DAT_101d91830 = 0;
  uRam0000000101d91848 = 0;
  _DAT_101d91840 = 0;
  DAT_101d91860 = 1;
  ___cxa_atexit(FUN_100528858,&DAT_101d91828,0x100000000);
  return;
}




undefined * FUN_100528b58(void)

{
  return PTR_s_Nuo_Services_ChatClient_Usern_1018675e0;
}




undefined * FUN_100528b64(void)

{
  return PTR_s_Nuo_Services_ChatClient_Nickn_1018675e8;
}




void FUN_100528b70(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_100528b98(param_1 + 8,&local_18);
  return;
}




void FUN_100528b98(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10052933c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100528c18(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 << 3;
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      if (*plVar3 == param_2) {
        FUN_1005293b8((uint *)(param_1 + 8),plVar3,plVar3 + 1);
        return;
      }
      lVar2 = lVar2 + -8;
      plVar3 = plVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100528c54(long param_1,undefined8 **param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 **local_60;
  undefined8 **local_58;
  void *local_50;
  undefined8 **local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,param_3);
  param_1 = param_1 + 0x18;
  local_58 = local_48[0];
  if (-1 < local_31) {
    local_58 = local_48;
  }
  lVar1 = FUN_100528d30(param_1,&local_58);
  if (lVar1 == 0) {
    local_58 = (undefined8 **)0x0;
    local_50 = (void *)0x0;
    local_60 = local_48[0];
    if (-1 < local_31) {
      local_60 = local_48;
    }
    FUN_100528e68(param_1,&local_60,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
    }
    local_58 = local_48[0];
    if (-1 < local_31) {
      local_58 = local_48;
    }
    lVar1 = FUN_100528ffc(param_1,&local_58);
  }
  local_58 = param_2;
  FUN_100528de8(lVar1,&local_58);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




long FUN_100528d30(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 0x10;
    }
  }
  return 0;
}




void FUN_100528de8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100529424(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100528e68(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_40;
  void *local_38;
  
  uVar13 = *param_2;
  uVar5 = FUN_1004d2524(uVar13);
  uVar6 = FUN_100015208(uVar13,uVar5,0x12345678);
  uVar7 = param_1[4];
  param_1[4] = uVar7 + 1;
  uVar9 = *param_1;
  if (uVar9 >> 1 < uVar7 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar7 = *param_1;
    uVar9 = (uint)local_40;
    uVar11 = uVar7 - 1;
    if ((int)uVar11 < 0) {
      pvVar8 = *(void **)(param_1 + 2);
    }
    else {
      pvVar8 = *(void **)(param_1 + 2);
      do {
        uVar7 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8 + 4);
        if (uVar7 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar12 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar12) {
              uVar4 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar12 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar7;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar7 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar11,uVar7);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar8;
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
      uVar9 = *param_1;
    }
  }
  uVar7 = 0;
  if (uVar9 != 0) {
    uVar7 = uVar6 / uVar9;
  }
  uVar12 = (ulong)(uVar6 - uVar7 * uVar9);
  lVar10 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar10 + uVar12 * 8 + 4);
  while (iVar2 != -1) {
    uVar7 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar7 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar7 - 1);
    iVar2 = *(int *)(lVar10 + uVar12 * 8 + 4);
  }
  puVar1 = (uint *)(lVar10 + uVar12 * 8);
  *puVar1 = uVar6;
  uVar7 = FUN_1005294a0(param_1,param_3);
  puVar1[1] = uVar7;
  return;
}




long FUN_100528ffc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_100529094:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) goto LAB_100529094;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 0x10;
}




void FUN_1005290ac(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar9;
  long lVar10;
  undefined8 ****local_50;
  undefined8 ****local_48 [2];
  char local_31;
  long *plVar8;
  
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar10 = *(long *)(param_1 + 0x20);
    uVar2 = 0;
    do {
      uVar6 = uVar2;
      if (uVar1 == uVar6) {
        return;
      }
      uVar2 = uVar6 + 1;
    } while (*(int *)(lVar10 + (ulong)uVar6 * 8 + 4) == -1);
    if (uVar1 + 1 != uVar6 + 1) {
      do {
        puVar4 = (uint *)(*(long *)(param_1 + 0x38) +
                         (ulong)*(uint *)(lVar10 + (ulong)uVar6 * 8 + 4) * 0x10);
        uVar5 = (ulong)*puVar4;
        if (*puVar4 != 0) {
          plVar9 = *(long **)(puVar4 + 2);
          plVar7 = plVar9 + uVar5;
          do {
            plVar8 = plVar7 + -1;
            if (*plVar8 == param_2) {
              if (plVar7 != plVar9 + (uVar5 - 1)) {
                *plVar7 = plVar9[uVar5 - 1];
                plVar9 = *(long **)(puVar4 + 2);
              }
              uVar2 = (int)uVar5 - 1;
              uVar5 = (ulong)uVar2;
              *puVar4 = uVar2;
            }
            plVar7 = plVar8;
          } while (plVar8 != plVar9);
        }
        uVar2 = uVar1;
        if (uVar1 <= uVar6 + 1) {
          uVar2 = uVar6 + 1;
        }
        do {
          uVar6 = uVar6 + 1;
          uVar3 = uVar2;
          if (uVar1 <= uVar6) break;
          uVar3 = uVar6;
        } while (*(int *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 8 + 4) == -1);
        uVar6 = uVar3;
        if (uVar1 == uVar6) {
          return;
        }
        lVar10 = *(long *)(param_1 + 0x20);
      } while( true );
    }
  }
  else {
    FUN_10001549c(local_48,param_3);
    local_50 = local_48[0];
    if (-1 < local_31) {
      local_50 = local_48;
    }
    puVar4 = (uint *)FUN_100528d30(param_1 + 0x18,&local_50);
    if ((puVar4 != (uint *)0x0) && (uVar5 = (ulong)*puVar4, *puVar4 != 0)) {
      plVar9 = *(long **)(puVar4 + 2);
      plVar7 = plVar9 + uVar5;
      do {
        plVar8 = plVar7 + -1;
        if (*plVar8 == param_2) {
          if (plVar7 != plVar9 + (uVar5 - 1)) {
            *plVar7 = plVar9[uVar5 - 1];
            plVar9 = *(long **)(puVar4 + 2);
          }
          uVar1 = (int)uVar5 - 1;
          uVar5 = (ulong)uVar1;
          *puVar4 = uVar1;
        }
        plVar7 = plVar8;
      } while (plVar8 != plVar9);
    }
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




void FUN_100529258(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_100529280(param_1 + 0x48,&local_18);
  return;
}




void FUN_100529280(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100529698(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100529300(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 << 3;
    plVar3 = *(long **)(param_1 + 0x50);
    do {
      if (*plVar3 == param_2) {
        FUN_100529714((uint *)(param_1 + 0x48),plVar3,plVar3 + 1);
        return;
      }
      lVar2 = lVar2 + -8;
      plVar3 = plVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_10052933c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1005293b8(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_100529424(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




ulong FUN_1005294a0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100529544(param_1 + 0x18,auStack_48);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + uVar2 * 0x10);
  }
  FUN_100529640(lVar1 + uVar2 * 0x10,param_2);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100529544(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_1005295c4(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_1005295c4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




uint * FUN_100529640(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100529424(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -8;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_100529698(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100529714(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_100529780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f148;
  return;
}




void FUN_100529790(void)

{
  return;
}




void FUN_100529794(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100529798);
  (*pcVar1)();
}




void FUN_100529798(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10052979c);
  (*pcVar1)();
}




void FUN_10052979c(void)

{
  return;
}




void FUN_1005297a0(void)

{
  return;
}




void FUN_1005297a4(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",0);
  return;
}




void FUN_1005297d4(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",0);
  return;
}




void FUN_100529804(void)

{
  return;
}




void FUN_100529808(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",param_1);
  return;
}




undefined8 FUN_100529844(void)

{
  return 0;
}




void FUN_10052984c(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"cancelAllLocalNotifications");
  return;
}




void FUN_100529878(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"cancelAllLocalNotifications");
  return;
}




void FUN_1005298a4(void)

{
  return;
}




void FUN_1005298a8(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar4 = NEON_ucvtf((ulong)*(uint *)(param_1 + 0x10));
  uVar4 = _objc_msgSend(uVar4,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSinceNow:");
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSCalendar,"currentCalendar");
  uVar2 = _objc_msgSend(uVar2,"components:fromDate:",0x20,uVar4);
  lVar3 = _objc_msgSend(uVar2,"hour");
  if (lVar3 - 10U < 0xc) {
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_1004e357c(param_1,&local_48);
    uVar2 = _objc_alloc(&_OBJC_CLASS___UILocalNotification);
    _objc_msgSend(uVar2,"init");
    uVar2 = _objc_autorelease();
    _objc_msgSend(uVar2,"setFireDate:",uVar4);
    pppuVar1 = (undefined8 ***)local_48;
    if (-1 < local_38) {
      pppuVar1 = &local_48;
    }
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pppuVar1);
    _objc_msgSend(uVar2,"setAlertBody:",uVar4);
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSTimeZone,"defaultTimeZone");
    _objc_msgSend(uVar2,"setTimeZone:",uVar4);
    _objc_msgSend(uVar2,"setApplicationIconBadgeNumber:",*(undefined4 *)(param_1 + 0x14));
    if (*(char *)(param_1 + 0x18) != '\0') {
      _objc_msgSend(uVar2,"setSoundName:",
                    *(undefined8 *)PTR__UILocalNotificationDefaultSoundName_101444128);
    }
    uVar4 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    _objc_msgSend(uVar4,"scheduleLocalNotification:",uVar2);
    if (local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return;
}




void FUN_100529a68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_1);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar1);
  _objc_msgSend(uVar2,"openURL:",uVar1);
  return;
}




void FUN_100529adc(void)

{
  DAT_101e94760 = 1;
  return;
}




void FUN_100529aec(void)

{
  return;
}




undefined1 FUN_100529af0(void)

{
  return DAT_101e94760;
}




void FUN_100529afc(void)

{
  return;
}




void FUN_100529b00(void)

{
  return;
}




void FUN_100529b04(void)

{
  return;
}




undefined8 FUN_100529b08(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_autoreleasePoolPush();
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_1);
  uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  uVar5 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",plVar1);
  uVar3 = _objc_msgSend(&objc::class_t::SSKeychain,"setPassword:forService:account:",uVar5,uVar3,
                        uVar4);
  _objc_autoreleasePoolPop(uVar2);
  return uVar3;
}




bool FUN_100529bc4(undefined8 param_1,undefined8 param_2,string *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_58 [2];
  char local_41;
  
  uVar1 = _objc_autoreleasePoolPush();
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_1);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
  lVar4 = _objc_msgSend(&objc::class_t::SSKeychain,"passwordForService:account:",uVar2,uVar3);
  if (lVar4 != 0) {
    uVar2 = _objc_msgSend(lVar4,"UTF8String");
    FUN_10001549c(local_58,uVar2);
    std::string::operator=(param_3,(string *)local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  _objc_autoreleasePoolPop(uVar1);
  return lVar4 != 0;
}




undefined8 FUN_100529cc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_autoreleasePoolPush();
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_1);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
  uVar2 = _objc_msgSend(&objc::class_t::SSKeychain,"deletePasswordForService:account:",uVar2,uVar3);
  _objc_autoreleasePoolPop(uVar1);
  return uVar2;
}




void FUN_100529d58(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *local_40;
  undefined8 local_38;
  code *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (DAT_101d91768 != 0) {
    local_40 = PTR___NSConcreteStackBlock_101444138;
    local_38 = 0xc2000000;
    local_30 = FUN_100529dc4;
    puStack_28 = &DAT_10149f188;
    local_20 = param_3;
    local_18 = param_1;
    uStack_14 = param_2;
    _dispatch_async(PTR___dispatch_main_q_101444238,&local_40);
  }
  return;
}




void FUN_100529dc4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = _objc_alloc(&_OBJC_CLASS___UIActivityViewController);
  uVar2 = _objc_msgSend(uVar2,"initWithActivityItems:applicationActivities:",
                        *(undefined8 *)(param_1 + 0x20),0);
  iVar1 = _objc_msgSend(uVar2,"respondsToSelector:","popoverPresentationController");
  if (iVar1 != 0) {
    fVar5 = (float)_objc_msgSend(DAT_101d91768,"getFullContentScale");
    uVar3 = _objc_msgSend(DAT_101d91768,"view");
    uVar4 = _objc_msgSend(uVar2,"popoverPresentationController");
    _objc_msgSend(uVar4,"setSourceView:",uVar3);
    fVar6 = *(float *)(param_1 + 0x28);
    fVar7 = *(float *)(param_1 + 0x2c) * (1.0 / fVar5);
    uVar3 = _objc_msgSend(fVar7,*(float *)(param_1 + 0x2c),uVar2,"popoverPresentationController");
    _objc_msgSend((double)(fVar6 * (1.0 / fVar5)),(double)fVar7,0,0,uVar3,"setSourceRect:");
  }
  _objc_msgSend(DAT_101d91768,"presentViewController:animated:completion:",uVar2,1,0);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"objectAtIndexedSubscript:",0);
  _objc_release();
  return;
}




void FUN_100529ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar1 = FUN_100529fa8();
  if (lVar1 != 0) {
    uStack_40 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithCString:encoding:",param_3,4);
    local_48 = lVar1;
    _objc_msgSend(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_48,2);
    FUN_100529d58(param_1,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100529fa8(void)

{
  undefined8 uVar1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  code *local_38;
  code *pcStack_30;
  undefined8 local_28;
  
  local_48 = &local_50;
  local_50 = 0;
  local_40 = 0x3052000000;
  local_38 = FUN_10052a064;
  pcStack_30 = FUN_10052a074;
  local_28 = 0;
  if (DAT_101d91768 == 0) {
    uVar1 = 0;
  }
  else {
    local_78 = PTR___NSConcreteStackBlock_101444138;
    local_70 = 0xc2000000;
    local_68 = FUN_10052a080;
    puStack_60 = &DAT_10149f1b8;
    local_58 = local_48;
    _dispatch_sync(PTR___dispatch_main_q_101444238,&local_78);
    uVar1 = local_48[5];
  }
  __Block_object_dispose(&local_50,8);
  return uVar1;
}




void FUN_10052a064(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),0x83);
  return;
}




void FUN_10052a074(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),0x83);
  return;
}




void FUN_10052a080(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                  undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(DAT_101d91768,"getGameView");
  _objc_msgSend(uVar1,"getSize");
  _UIGraphicsBeginImageContext(param_3,param_4);
  uVar1 = _objc_msgSend(DAT_101d91768,"getGameView");
  uVar2 = _objc_msgSend(DAT_101d91768,"getGameView");
  _objc_msgSend(uVar2,"getSize");
  _objc_msgSend(uVar1,"drawViewHierarchyInRect:afterScreenUpdates:",1);
  uVar1 = _UIGraphicsGetImageFromCurrentImageContext();
  *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 8) + 0x28) = uVar1;
  _UIGraphicsEndImageContext();
  _objc_retain(*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 8) + 0x28));
  return;
}




void FUN_10052a13c(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}




void FUN_10052a14c(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}




undefined8 FUN_10052a158(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = _objc_autoreleasePoolPush();
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  _objc_msgSend(uVar2,"synchronize");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_1);
  lVar4 = _objc_msgSend(uVar2,"objectForKey:",uVar3);
  if (lVar4 != 0) {
    param_2 = _objc_msgSend(uVar2,"boolForKey:",uVar3);
  }
  _objc_autoreleasePoolPop(uVar1);
  return param_2;
}




undefined1  [16] FUN_10052a204(undefined1 param_1 [16],undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  
  uVar7 = param_1._8_8_;
  uVar1 = _objc_autoreleasePoolPush();
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  _objc_msgSend(uVar2,"synchronize");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
  lVar4 = _objc_msgSend(uVar2,"objectForKey:",uVar3);
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = param_1._0_8_;
  if (lVar4 != 0) {
    auVar5 = _objc_msgSend(uVar2,"floatForKey:",uVar3);
  }
  uVar2 = auVar5._8_8_;
  _objc_autoreleasePoolPop(uVar1);
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = auVar5._0_8_;
  return auVar6;
}




void FUN_10052a2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_58 [2];
  char local_41;
  
  uVar1 = _objc_autoreleasePoolPush();
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  _objc_msgSend(uVar2,"synchronize");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
  lVar4 = _objc_msgSend(uVar2,"objectForKey:",uVar3);
  if ((lVar4 == 0) || (lVar4 = _objc_msgSend(uVar2,"stringForKey:",uVar3), lVar4 == 0)) {
    FUN_10003330c(param_1,param_3);
  }
  else {
    uVar2 = _objc_msgSend(lVar4,"UTF8String");
    FUN_10001549c(local_58,uVar2);
    FUN_10003330c(param_1,local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  _objc_autoreleasePoolPop(uVar1);
  return;
}




void FUN_10052a3d4(void)

{
  _AudioServicesPlaySystemSound(0xfff);
  return;
}




void FUN_10052a470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010052a478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}




void FUN_10052a47c(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return;
}




void FUN_10052a48c(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),7);
  return;
}




void FUN_10052a680(void)

{
  return;
}




void FUN_10052a684(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),3);
  return;
}




void FUN_10052a694(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),3);
  return;
}




void FUN_10052a8d8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010052a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}




void FUN_10052a958(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010052a960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}




undefined8 FUN_10052a990(undefined8 param_1)

{
  DAT_101e94768 = (undefined8 *)FUN_100529780();
  *DAT_101e94768 = &PTR_thunk_FUN_10052ab68_10149f258;
  *(undefined1 *)(DAT_101e94768 + 1) = 0;
  _objc_msgSend(&objc::class_t::MovieViewController,"executeOnMainThreadQueue:",
                &PTR___NSConcreteGlobalBlock_10149f2b8);
  return param_1;
}




void FUN_10052aa00(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_alloc(&objc::class_t::MovieViewController);
  DAT_101e94770 = _objc_msgSend(uVar1,"init");
  _objc_msgSend(DAT_101e94770,"setMpPlayerController:",0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",DAT_101e94770,"movieAppEnterBackground:",
                *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_1014440d0,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",DAT_101e94770,"movieAppTerminate:",
                *(undefined8 *)PTR__UIApplicationWillTerminateNotification_1014440f8,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",DAT_101e94770,"movieFinishes:",
                *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_101444058,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",DAT_101e94770,"movieFinishes:",
                *(undefined8 *)PTR__AVPlayerItemFailedToPlayToEndTimeNotification_101444060,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",DAT_101e94770,"movieError:",
                *(undefined8 *)PTR__AVPlayerItemNewErrorLogEntryNotification_101444068,0);
  return;
}




undefined8 FUN_10052ab58(void)

{
  undefined8 uVar1;
  
  ___cxa_begin_catch();
  uVar1 = std::terminate();
  DAT_101e94768 = (undefined8 *)FUN_100529780();
  *DAT_101e94768 = &PTR_thunk_FUN_10052ab68_10149f258;
  *(undefined1 *)(DAT_101e94768 + 1) = 0;
  _objc_msgSend(&objc::class_t::MovieViewController,"executeOnMainThreadQueue:",
                &PTR___NSConcreteGlobalBlock_10149f2b8);
  return uVar1;
}




undefined8 thunk_FUN_10052a990(undefined8 param_1)

{
  DAT_101e94768 = (undefined8 *)FUN_100529780();
  *DAT_101e94768 = &PTR_thunk_FUN_10052ab68_10149f258;
  *(undefined1 *)(DAT_101e94768 + 1) = 0;
  _objc_msgSend(&objc::class_t::MovieViewController,"executeOnMainThreadQueue:",
                &PTR___NSConcreteGlobalBlock_10149f2b8);
  return param_1;
}




void FUN_10052ab68(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10052ab68_10149f258;
  _objc_msgSend(&objc::class_t::MovieViewController,"executeOnMainThreadQueue:",
                &PTR___NSConcreteGlobalBlock_10149f2d8);
  FUN_100529790(param_1);
  return;
}




void FUN_10052abc8(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"removeObserver:name:object:",DAT_101e94770,
                *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_1014440d0,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"removeObserver:name:object:",DAT_101e94770,
                *(undefined8 *)PTR__UIApplicationWillTerminateNotification_1014440f8,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"removeObserver:name:object:",DAT_101e94770,
                *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_101444058,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"removeObserver:name:object:",DAT_101e94770,
                *(undefined8 *)PTR__AVPlayerItemFailedToPlayToEndTimeNotification_101444060,0);
  _objc_msgSend(DAT_101e94770,"unprepareMovie");
  _objc_release(DAT_101e94770);
  DAT_101e94770 = 0;
  return;
}




void thunk_FUN_10052ab68(void)

{
  FUN_10052ab68();
  return;
}




void FUN_10052acc0(void *param_1)

{
  FUN_10052ab68();
  operator_delete(param_1);
  return;
}




void FUN_10052acf8(undefined8 param_1,undefined8 param_2,undefined1 param_3,int param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined1 local_47;
  
  if (DAT_101e94770 != 0) {
    FUN_1010ce9bc();
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
    _objc_retain();
    if (param_4 == 0) {
      pcVar3 = "fileURLWithPath:";
    }
    else {
      pcVar3 = "URLWithString:";
    }
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSURL,pcVar3,uVar1);
    _objc_retain();
    local_80 = PTR___NSConcreteStackBlock_101444138;
    local_78 = 0xc2000000;
    local_70 = FUN_10052adec;
    puStack_68 = &DAT_10149f2f8;
    local_47 = (undefined1)param_4;
    local_60 = uVar2;
    local_58 = uVar1;
    uStack_50 = param_5;
    local_48 = param_3;
    _objc_msgSend(&objc::class_t::MovieViewController,"executeOnMainThreadQueue:",&local_80);
  }
  return;
}




void FUN_10052adec(long param_1)

{
  if (DAT_101e94770 != 0) {
    FUN_1004d29c0(0x3c);
    _objc_msgSend(DAT_101e94770,"playMovie:showControls:streaming:delegate:",
                  *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x38),
                  *(undefined1 *)(param_1 + 0x39),*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10052ae48(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),3);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),3);
  return;
}




void FUN_10052ae84(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x28),3);
  __Block_object_dispose(*(void **)(param_1 + 0x20),3);
  return;
}




void FUN_10052aeb4(void)

{
  _objc_msgSend(DAT_101e94770,"isPlaying");
  return;
}




void FUN_10052aec8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010052aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_10052aed4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",param_2);
  _objc_retain();
  if (param_3 == 0) {
    pcVar3 = "fileURLWithPath:";
  }
  else {
    pcVar3 = "URLWithString:";
  }
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSURL,pcVar3,uVar1);
  _objc_retain();
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  local_58 = FUN_10052afa4;
  puStack_50 = &DAT_10149f328;
  local_38 = (undefined1)param_3;
  local_48 = uVar2;
  uStack_40 = uVar1;
  _objc_msgSend(&objc::class_t::MovieViewController,"executeOnMainThreadQueue:",&local_68);
  return;
}




void FUN_10052afa4(long param_1)

{
  if (DAT_101e94770 != 0) {
    _objc_msgSend(DAT_101e94770,"prepareMovie:streaming:",*(undefined8 *)(param_1 + 0x20),
                  *(undefined1 *)(param_1 + 0x30));
  }
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10052afec(long param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  _objc_msgSend(&objc::class_t::MovieViewController,"executeOnMainThreadQueue:",
                &PTR___NSConcreteGlobalBlock_10149f358);
  return;
}




void FUN_10052b01c(void)

{
  if (DAT_101e94770 != 0) {
    _objc_msgSend(DAT_101e94770,"unprepareMovie");
    return;
  }
  return;
}




void FUN_10052b038(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101e94770 != 0) {
    _objc_msgSend(DAT_101e94770,"unsetDelegate:",param_2);
    return;
  }
  return;
}




void FUN_10052b058(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 0;
  return;
}




undefined4 * FUN_10052b068(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = *param_2;
  std::string::operator=((string *)(param_1 + 2),(string *)(param_2 + 2));
  param_1[8] = param_2[8];
  return param_1;
}




undefined4 * FUN_10052b0a8(undefined4 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 1;
  FUN_10001549c(local_38);
  std::string::operator=((string *)(param_1 + 2),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




undefined4 * thunk_FUN_10052b0a8(undefined4 *param_1)

{
  void *apvStack_38 [2];
  char cStack_21;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 1;
  FUN_10001549c(apvStack_38);
  std::string::operator=((string *)(param_1 + 2),(string *)apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return param_1;
}




void FUN_10052b10c(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 2;
  param_1[8] = param_2;
  return;
}




undefined4 * FUN_10052b124(undefined4 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = 1;
  FUN_10001549c(local_38);
  std::string::operator=((string *)(param_1 + 2),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




void FUN_10052b17c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 2;
  param_1[8] = param_2;
  return;
}




void FUN_10052b18c(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 3;
  param_2[8] = param_1;
  return;
}




undefined8 * FUN_10052b19c(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}




undefined4 FUN_10052b1b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




void FUN_10052b1c0(void)

{
  return;
}




void FUN_10052b1c4(void)

{
  return;
}




undefined8 FUN_10052b1c8(void)

{
  return 0;
}




void FUN_10052b1d0(void)

{
  return;
}




void FUN_10052b1d4(void)

{
  return;
}




void FUN_10052b1d8(void)

{
  return;
}




void FUN_10052b1dc(void)

{
  return;
}




void FUN_10052b1e0(void)

{
  return;
}




void FUN_10052b1e4(void)

{
  return;
}




void FUN_10052b1e8(void)

{
  return;
}




void FUN_10052b1ec(void)

{
  return;
}




void FUN_10052b1f0(void)

{
  return;
}




void FUN_10052b1f4(void)

{
  return;
}




void FUN_10052b1f8(void)

{
  return;
}




void FUN_10052b1fc(void)

{
  return;
}




void FUN_10052b200(void)

{
  return;
}




void FUN_10052b204(void)

{
  return;
}




void FUN_10052b208(void)

{
  return;
}




void FUN_10052b20c(void)

{
  return;
}




void FUN_10052b210(void)

{
  return;
}




void FUN_10052b214(void)

{
  return;
}




void FUN_10052b218(void)

{
  return;
}




void FUN_10052b21c(void)

{
  return;
}




void FUN_10052b220(void)

{
  return;
}




void FUN_10052b224(void)

{
  return;
}




void FUN_10052b228(void)

{
  return;
}




void FUN_10052b22c(void)

{
  return;
}




void FUN_10052b230(void)

{
  return;
}




void FUN_10052b234(void)

{
  return;
}




void FUN_10052b238(void)

{
  return;
}




void FUN_10052b23c(void)

{
  return;
}




void FUN_10052b240(void)

{
  return;
}




void FUN_10052b244(void)

{
  return;
}




void thunk_FUN_1005297a4(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",0);
  return;
}




void thunk_FUN_100529804(void)

{
  return;
}




undefined8 FUN_10052b250(void)

{
  return 1;
}




void thunk_FUN_1005297d4(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",0);
  return;
}




void thunk_FUN_100529808(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",param_1);
  return;
}




undefined8 FUN_10052b260(void)

{
  return 0;
}




void FUN_10052b268(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052b274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))();
    return;
  }
  return;
}




void FUN_10052b27c(void)

{
  return;
}




void FUN_10052b280(void)

{
  return;
}




undefined8 FUN_10052b284(void)

{
  return 0;
}




void FUN_10052b28c(void)

{
  return;
}




void FUN_10052b290(void)

{
  return;
}




void FUN_10052b294(void)

{
  return;
}




undefined8 FUN_10052b298(void)

{
  return 0;
}




undefined8 thunk_FUN_100529844(void)

{
  return 0;
}




void FUN_10052b2a4(void)

{
  return;
}




void FUN_10052b2a8(void)

{
  return;
}




undefined8 FUN_10052b2ac(void)

{
  return 0;
}




void FUN_10052b2b4(void)

{
  return;
}




void FUN_10052b2b8(void)

{
  return;
}




undefined8 FUN_10052b2bc(void)

{
  return 0;
}




void FUN_10052b2c4(void)

{
  return;
}




void FUN_10052b2c8(void)

{
  return;
}




void FUN_10052b2cc(void)

{
  return;
}




void FUN_10052b2d0(void)

{
  return;
}




void FUN_10052b2d4(undefined8 param_1)

{
  FUN_10001549c(param_1,"unhandled-platform");
  return;
}




void FUN_10052b2e4(undefined8 param_1)

{
  FUN_10001549c(param_1,"none");
  return;
}




undefined8 FUN_10052b2f4(void)

{
  return 0;
}




void FUN_10052b2fc(void)

{
  return;
}




void FUN_10052b300(void)

{
  return;
}




void FUN_10052b304(void)

{
  return;
}




undefined8 FUN_10052b308(void)

{
  return 0;
}




undefined8 FUN_10052b310(void)

{
  return 0;
}




undefined8 FUN_10052b320(void)

{
  FUN_10012cf04();
  return 0;
}




undefined8 FUN_10052b33c(void)

{
  FUN_10012cf04();
  return 0;
}




long FUN_10052b358(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c();
  FUN_1004e3120(auStack_30,"");
  FUN_1000153b4(param_1,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}




long thunk_FUN_10052b358(long param_1)

{
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  FUN_1004e313c();
  FUN_1004e3120(auStack_30,"");
  FUN_1000153b4(param_1,auStack_30);
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}




void thunk_FUN_10052984c(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"cancelAllLocalNotifications");
  return;
}




void thunk_FUN_1005298a4(void)

{
  return;
}




undefined8 FUN_10052b3c0(void)

{
  return 1;
}




void thunk_FUN_100529878(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"cancelAllLocalNotifications");
  return;
}




void thunk_FUN_1005298a8(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = NEON_ucvtf((ulong)*(uint *)(param_1 + 0x10));
  uVar4 = _objc_msgSend(uVar4,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSinceNow:");
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSCalendar,"currentCalendar");
  uVar2 = _objc_msgSend(uVar2,"components:fromDate:",0x20,uVar4);
  lVar3 = _objc_msgSend(uVar2,"hour");
  if (lVar3 - 10U < 0xc) {
    ppuStack_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    lStack_38 = 0;
    FUN_1004e357c(param_1,&ppuStack_48);
    uVar2 = _objc_alloc(&_OBJC_CLASS___UILocalNotification);
    _objc_msgSend(uVar2,"init");
    uVar2 = _objc_autorelease();
    _objc_msgSend(uVar2,"setFireDate:",uVar4);
    pppuVar1 = (undefined8 ***)ppuStack_48;
    if (-1 < lStack_38) {
      pppuVar1 = &ppuStack_48;
    }
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pppuVar1);
    _objc_msgSend(uVar2,"setAlertBody:",uVar4);
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSTimeZone,"defaultTimeZone");
    _objc_msgSend(uVar2,"setTimeZone:",uVar4);
    _objc_msgSend(uVar2,"setApplicationIconBadgeNumber:",*(undefined4 *)(param_1 + 0x14));
    if (*(char *)(param_1 + 0x18) != '\0') {
      _objc_msgSend(uVar2,"setSoundName:",
                    *(undefined8 *)PTR__UILocalNotificationDefaultSoundName_101444128);
    }
    uVar4 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    _objc_msgSend(uVar4,"scheduleLocalNotification:",uVar2);
    if (lStack_38 < 0) {
      operator_delete(ppuStack_48);
    }
  }
  return;
}




undefined8 FUN_10052b3d0(void)

{
  return 0;
}




undefined8 FUN_10052b3d8(void)

{
  return 0;
}




void FUN_10052b3e0(void)

{
  return;
}




void FUN_10052b3e4(void)

{
  return;
}




void FUN_10052b3e8(void)

{
  return;
}




void FUN_10052b3ec(void)

{
  return;
}




void FUN_10052b3f0(void)

{
  return;
}




void FUN_10052b3f4(void)

{
  return;
}




void FUN_10052b3f8(void)

{
  return;
}




void FUN_10052b3fc(void)

{
  return;
}




void FUN_10052b400(void)

{
  return;
}




void FUN_10052b404(void)

{
  return;
}




undefined8 FUN_10052b408(void)

{
  return 1;
}




void FUN_10052b410(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004d2524();
  if (iVar1 != 0) {
    FUN_100529a68(param_1);
    return;
  }
  return;
}




void thunk_FUN_100529adc(void)

{
  DAT_101e94760 = 1;
  return;
}




void thunk_FUN_100529aec(void)

{
  return;
}




undefined1 thunk_FUN_100529af0(void)

{
  return DAT_101e94760;
}




void thunk_FUN_100529afc(void)

{
  return;
}




void thunk_FUN_100529b00(void)

{
  return;
}




void thunk_FUN_100529b04(void)

{
  return;
}




void FUN_10052b45c(void)

{
  return;
}




void FUN_10052b460(void)

{
  return;
}




undefined8 FUN_10052b464(void)

{
  return 1;
}




undefined8 FUN_10052b46c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) && (param_2 != 0)) &&
     (iVar1 = FUN_1004d2524(param_2), iVar1 != 0)) {
    uVar2 = FUN_100529b08(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}




undefined8 FUN_10052b4d4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) && (param_2 != 0)) &&
     (iVar1 = FUN_1004d2524(param_2), iVar1 != 0)) {
    uVar2 = FUN_100529bc4(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}




undefined8 FUN_10052b53c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) && (param_2 != 0)) &&
     (iVar1 = FUN_1004d2524(param_2), iVar1 != 0)) {
    uVar2 = FUN_100529cc4(param_1,param_2);
    return uVar2;
  }
  return 0;
}




void FUN_10052b590(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x28);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  uVar2 = FUN_1004e313c(puVar1 + 1);
  DAT_101e94778 = puVar1;
  *puVar1 = 0;
  FUN_1000153b4(uVar2,&DAT_101d91650);
  puVar1 = DAT_101e94778;
  DAT_101e94778[3] = DAT_101dc1cb8;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined1 *)((long)puVar1 + 0x24) = 0;
  return;
}




void FUN_10052b5fc(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = DAT_101e94778;
  *DAT_101e94778 = 0;
  pvVar2 = (void *)puVar1[2];
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  operator_delete(puVar1);
  DAT_101e94778 = (undefined8 *)0x0;
  return;
}




undefined8 FUN_10052b638(void)

{
  return 1;
}




void FUN_10052b640(void)

{
  if (*(char *)(DAT_101e94778 + 0x24) != '\0') {
    FUN_10052b658();
    return;
  }
  return;
}




void FUN_10052b658(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = DAT_101e94778[4];
  *(int *)(DAT_101e94778 + 4) = (int)lVar1 + 1;
  if (1 < (int)lVar1) {
    FUN_10052b708();
    if ((long *)*DAT_101e94778 != (long *)0x0) {
      (**(code **)(*(long *)*DAT_101e94778 + 8))();
    }
    plVar2 = DAT_101e94778;
    *(undefined4 *)(DAT_101e94778 + 4) = 0;
    *(undefined1 *)((long)plVar2 + 0x24) = 0;
    *plVar2 = 0;
  }
  return;
}




void FUN_10052b6b8(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_101e94778;
  *(undefined4 *)(DAT_101e94778 + 3) = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = param_2;
  FUN_1000153b4(puVar1 + 1);
  puVar1 = DAT_101e94778;
  *(undefined1 *)((long)DAT_101e94778 + 0x24) = 1;
  *puVar1 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010052b704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_3)(param_3);
  return;
}




void FUN_10052b708(void)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1004e357c(DAT_101e94778 + 8,&local_38);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_100529ef4(*(undefined4 *)(DAT_101e94778 + 0x18),*(undefined4 *)(DAT_101e94778 + 0x1c),pppuVar1
               );
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_10052b774(void)

{
  return;
}




void FUN_10052b778(void)

{
  return;
}




void FUN_10052b77c(void)

{
  return;
}




void FUN_10052b780(void)

{
  return;
}




void FUN_10052b784(void)

{
  return;
}




void FUN_10052b788(void)

{
  return;
}




undefined8 FUN_10052b78c(void)

{
  return 0;
}




void FUN_10052b794(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_10052b850();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_10052b81c;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
  param_1 = puVar1;
LAB_10052b81c:
  *(undefined1 *)((long)param_1 + uVar2) = 0;
  return;
}




undefined8 FUN_10052b834(void)

{
  return 1;
}




void FUN_10052b83c(void)

{
  return;
}




undefined8 FUN_10052b840(void)

{
  return 0;
}




void FUN_10052b848(void)

{
  return;
}




void FUN_10052b84c(void)

{
  return;
}




void FUN_10052b850(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10052b85c(void)

{
  return;
}




void FUN_10052b860(void)

{
  return;
}




undefined8 FUN_10052b864(void)

{
  return 1;
}




undefined8 FUN_10052b86c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) {
    uVar2 = FUN_10052a158(param_1,param_2);
    return uVar2;
  }
  return param_2;
}




undefined1  [16] FUN_10052b8b0(undefined1 param_1 [16],long param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = param_1._8_8_;
  auVar2._0_8_ = param_1._0_8_;
  if ((param_2 != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) {
    auVar2 = FUN_10052a204(auVar2._0_8_,param_2);
    return auVar2;
  }
  auVar2._8_8_ = uVar3;
  return auVar2;
}




void FUN_10052b900(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_2 != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) {
    FUN_10052a2b8(param_1,param_2,param_3);
    return;
  }
  if ((char)*(byte *)((long)param_3 + 0x17) < '\0') {
    uVar3 = param_3[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_10052b9c0();
    }
    param_3 = (undefined8 *)*param_3;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar3;
    puVar2 = param_1;
    if (uVar3 == 0) goto LAB_10052b9a8;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    puVar2 = operator_new(uVar4);
    param_1[1] = uVar3;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar2;
  }
  _memcpy(puVar2,param_3,uVar3);
  param_1 = puVar2;
LAB_10052b9a8:
  *(undefined1 *)((long)param_1 + uVar3) = 0;
  return;
}




void FUN_10052b9c0(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void thunk_FUN_10052a3d4(void)

{
  _AudioServicesPlaySystemSound(0xfff);
  return;
}




void FUN_10052b9d0(void)

{
  operator_new(0x10);
  DAT_101e94780 = thunk_FUN_10052a990();
  return;
}




void FUN_10052b9f4(void)

{
  if (DAT_101e94780 != (long *)0x0) {
    (**(code **)(*DAT_101e94780 + 8))();
  }
  DAT_101e94780 = (long *)0x0;
  return;
}




bool FUN_10052ba28(void)

{
  return DAT_101e94780 != 0;
}




void FUN_10052ba3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_101e94780 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052ba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e94780 + 0x10))(DAT_101e94780,param_1,param_2,param_3,param_4);
    return;
  }
  return;
}




void FUN_10052ba68(void)

{
  if (DAT_101e94780 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052ba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e94780 + 0x20))();
    return;
  }
  return;
}




void FUN_10052ba84(void)

{
  if (DAT_101e94780 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052ba98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e94780 + 0x18))();
    return;
  }
  return;
}




void FUN_10052baa0(undefined8 param_1)

{
  if (DAT_101e94780 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052bab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e94780 + 0x38))(DAT_101e94780,param_1);
    return;
  }
  return;
}




undefined8 * FUN_10052bac0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f388;
  FUN_10052baa0();
  return param_1;
}




undefined8 * FUN_10052baf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f388;
  FUN_10052baa0();
  return param_1;
}




void FUN_10052bb20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f388;
  FUN_10052baa0();
  operator_delete(param_1);
  return;
}




void FUN_10052bb50(void)

{
  return;
}




undefined8 FUN_10052bb54(void)

{
  return 0;
}




undefined8 FUN_10052bb5c(void)

{
  return 0;
}




undefined8 FUN_10052bb64(void)

{
  return 0;
}




void FUN_10052bb6c(void)

{
  return;
}




undefined8 * FUN_10052bb70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f3b0;
  FUN_10052bb6c();
  return param_1;
}




undefined8 * FUN_10052bba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f3b0;
  FUN_10052bb6c();
  return param_1;
}




void FUN_10052bbd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f3b0;
  FUN_10052bb6c();
  operator_delete(param_1);
  return;
}




void FUN_10052bc00(void)

{
  return;
}




void FUN_10052bc04(void)

{
  return;
}




void FUN_10052bc08(void)

{
  return;
}




void FUN_10052bc0c(void)

{
  return;
}




void FUN_10052bc10(void)

{
  return;
}




void FUN_10052bc14(void)

{
  return;
}




undefined8 FUN_10052bc18(void)

{
  return 0;
}




undefined8 FUN_10052bc20(void)

{
  return 0;
}




void FUN_10052bc28(void)

{
  return;
}




void FUN_10052bc2c(void)

{
  return;
}




undefined8 FUN_10052bc30(void)

{
  return 0;
}




void FUN_10052bc38(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_10052bce4();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_10052bcc0;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
  param_1 = puVar1;
LAB_10052bcc0:
  *(undefined1 *)((long)param_1 + uVar2) = 0;
  return;
}




void FUN_10052bcd8(void)

{
  return;
}




void FUN_10052bcdc(void)

{
  return;
}




void FUN_10052bce0(void)

{
  return;
}




void FUN_10052bce4(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_10052bcf0(void)

{
  void *pvVar1;
  
  if (DAT_101e94788 == (undefined8 *)0x0) {
    DAT_101e94788 = operator_new(0x18);
    *DAT_101e94788 = 0;
    DAT_101e94788[1] = 0;
    *(undefined4 *)(DAT_101e94788 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e94790 = pvVar1;
  }
  return DAT_101e94788;
}




undefined8 * FUN_10052bd48(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_10052bdc4_10149f408;
  plVar5 = (long *)FUN_10052bcf0();
  ppVar4 = DAT_101e94790;
  _pthread_mutex_lock(DAT_101e94790);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_10052bdc4(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_10052bdc4_10149f408;
  uVar2 = FUN_10052bcf0();
  ppVar1 = DAT_101e94790;
  _pthread_mutex_lock(DAT_101e94790);
  FUN_10052be24(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_10052be24(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_10052bdc4(void)

{
  FUN_10052bdc4();
  return;
}




void FUN_10052be88(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10052bdc4();
  operator_delete(pvVar1);
  return;
}




void FUN_10052be9c(void)

{
  return;
}




void FUN_10052bea0(void)

{
  return;
}




void FUN_10052bea4(void)

{
  return;
}




void FUN_10052bea8(void)

{
  return;
}




void FUN_10052beac(void)

{
  return;
}




void FUN_10052beb0(void)

{
  return;
}




void FUN_10052beb4(undefined8 param_1,uint param_2)

{
  if ((param_2 >> 10 & 1) != 0) {
    thunk_FUN_100529adc();
  }
  if ((param_2 >> 1 & 1) != 0) {
    FUN_10052b2b4();
  }
  if ((param_2 >> 2 & 1) != 0) {
    FUN_10052b9d0();
  }
  if ((param_2 >> 3 & 1) != 0) {
    FUN_10052b400();
  }
  if ((param_2 >> 5 & 1) != 0) {
    FUN_10052b85c();
  }
  if ((param_2 >> 4 & 1) != 0) {
    FUN_10052b45c();
  }
  if ((param_2 >> 6 & 1) != 0) {
    FUN_10052b2a4();
  }
  if ((param_2 >> 7 & 1) != 0) {
    FUN_10052b27c();
  }
  if ((param_2 >> 8 & 1) != 0) {
    FUN_10052b1c0();
  }
  if ((param_2 >> 0xb & 1) != 0) {
    thunk_FUN_10052984c();
  }
  if ((param_2 >> 0xc & 1) != 0) {
    thunk_FUN_1005297a4();
  }
  if ((param_2 >> 9 & 1) != 0) {
    FUN_10052bc0c();
  }
  if ((param_2 >> 0x10 & 1) != 0) {
    FUN_10052b590();
  }
  if ((param_2 >> 0x11 & 1) == 0) {
    return;
  }
  FUN_10052b774();
  return;
}




void FUN_10052bf7c(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b3d0();
  if (iVar1 != 0) {
    FUN_10052b3e4();
  }
  iVar1 = FUN_10052bc18();
  if (iVar1 != 0) {
    FUN_10052bc10();
  }
  iVar1 = FUN_10052b250();
  if (iVar1 != 0) {
    thunk_FUN_100529804();
  }
  iVar1 = FUN_10052b3c0();
  if (iVar1 != 0) {
    thunk_FUN_1005298a4();
  }
  iVar1 = thunk_FUN_100529af0();
  if (iVar1 != 0) {
    thunk_FUN_100529aec();
  }
  iVar1 = FUN_10052b1c8();
  if (iVar1 != 0) {
    FUN_10052b1c4();
  }
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_10052b280();
  }
  iVar1 = FUN_10052b2f4();
  if (iVar1 != 0) {
    FUN_10052b2cc();
  }
  iVar1 = FUN_10052ba28();
  if (iVar1 != 0) {
    FUN_10052b9f4();
  }
  iVar1 = FUN_10052b464();
  if (iVar1 != 0) {
    FUN_10052b460();
  }
  iVar1 = FUN_10052b408();
  if (iVar1 != 0) {
    FUN_10052b404();
  }
  iVar1 = FUN_10052b864();
  if (iVar1 != 0) {
    FUN_10052b860();
  }
  iVar1 = FUN_10052b2bc();
  if (iVar1 != 0) {
    FUN_10052b2b8();
  }
  iVar1 = FUN_10052b2ac();
  if (iVar1 != 0) {
    FUN_10052b2a8();
  }
  iVar1 = FUN_10052b320();
  if (iVar1 != 0) {
    thunk_FUN_10012cf04();
  }
  iVar1 = FUN_10052b638();
  if (iVar1 != 0) {
    FUN_10052b5fc();
  }
  iVar1 = FUN_10052b78c();
  if (iVar1 != 0) {
    FUN_10052b778();
    return;
  }
  return;
}




void FUN_10052c05c(void)

{
  int iVar1;
  
  iVar1 = FUN_10052bc18();
  if (iVar1 != 0) {
    FUN_10052bc14();
  }
  iVar1 = FUN_10052b638();
  if (iVar1 != 0) {
    FUN_10052b640();
  }
  iVar1 = FUN_10052b1c8();
  if (iVar1 != 0) {
    FUN_10052b1d0();
  }
  iVar1 = FUN_10052b2f4();
  if (iVar1 != 0) {
    FUN_10052b2d0();
  }
  iVar1 = FUN_10052b78c();
  if (iVar1 != 0) {
    FUN_10052b780();
    return;
  }
  return;
}




undefined8 FUN_10052c0ac(uint param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 1) != 0) {
    uVar1 = FUN_10052b2f4();
    return uVar1;
  }
  if ((param_1 >> 1 & 1) != 0) {
    uVar1 = FUN_10052b2bc();
    return uVar1;
  }
  if ((param_1 >> 5 & 1) != 0) {
    uVar1 = FUN_10052b864();
    return uVar1;
  }
  if ((param_1 >> 4 & 1) != 0) {
    uVar1 = FUN_10052b464();
    return uVar1;
  }
  if ((param_1 >> 3 & 1) != 0) {
    uVar1 = FUN_10052b408();
    return uVar1;
  }
  if ((param_1 >> 2 & 1) != 0) {
    uVar1 = FUN_10052ba28();
    return uVar1;
  }
  if ((param_1 >> 6 & 1) != 0) {
    uVar1 = FUN_10052b2ac();
    return uVar1;
  }
  if ((param_1 >> 7 & 1) == 0) {
    if ((param_1 >> 8 & 1) != 0) {
      uVar1 = FUN_10052b1c8();
      return uVar1;
    }
    if ((param_1 >> 9 & 1) != 0) {
      uVar1 = FUN_10052bc18();
      return uVar1;
    }
    if ((param_1 >> 0xf & 1) != 0) {
      uVar1 = FUN_10052b320();
      return uVar1;
    }
    if ((param_1 >> 0x10 & 1) == 0) {
      if ((param_1 >> 0x11 & 1) == 0) {
        return 0;
      }
      uVar1 = FUN_10052b78c();
      return uVar1;
    }
    uVar1 = FUN_10052b638();
    return uVar1;
  }
  uVar1 = FUN_10052b284();
  return uVar1;
}




undefined2 FUN_10052c11c(undefined8 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1004d2524();
  uVar1 = FUN_100015208(param_1,uVar2,0x12345678);
  return uVar1;
}




void thunk_FUN_10052f7b4(void)

{
  FUN_10052f7b4();
  return;
}




void thunk_FUN_10052f7c4(void)

{
  DAT_101d91880 = 0;
  FUN_10052f410();
  return;
}




void thunk_FUN_10052f7d0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  if (DAT_101d91880 != '\0') {
    return;
  }
  lStack_48 = 0;
  uVar1 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryAmbient_101444000;
  uVar5 = *(undefined8 *)PTR__AVAudioSessionModeDefault_101444028;
  uVar2 = 1;
  switch(param_1) {
  case 0:
    uVar2 = 0;
    goto LAB_10052f920;
  case 1:
    break;
  case 2:
    uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_101444008;
    uVar5 = *(undefined8 *)PTR__AVAudioSessionModeVoiceChat_101444040;
    uVar2 = 0x21;
    break;
  case 3:
    uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_101444010;
    puVar3 = (undefined8 *)PTR__AVAudioSessionModeMoviePlayback_101444030;
    goto LAB_10052f8cc;
  case 4:
    uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_101444008;
    puVar3 = (undefined8 *)PTR__AVAudioSessionModeVideoRecording_101444038;
LAB_10052f8cc:
    uVar2 = 0;
    uVar5 = *puVar3;
    break;
  default:
    uVar2 = 0;
  }
  DAT_101867610 = param_1;
  _objc_msgSend(uVar1,"setCategory:withOptions:error:",uVar4,uVar2,&lStack_48);
  lStack_48 = 0;
  _objc_msgSend(uVar1,"setMode:error:",uVar5,&lStack_48);
  uVar2 = 1;
LAB_10052f920:
  _objc_msgSend(uVar1,"setActive:error:",uVar2,&lStack_48);
  if (lStack_48 != 0) {
    uVar1 = _objc_msgSend(lStack_48,"debugDescription");
    _objc_msgSend(uVar1,"UTF8String");
  }
  _objc_msgSend(uVar4,"UTF8String");
  _objc_msgSend(uVar5,"UTF8String");
  FUN_10052f410();
  return;
}




bool thunk_FUN_10052f978(void)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  dVar2 = (double)_objc_msgSend(uVar1,"outputLatency");
  return 60.0 < dVar2 * 1000.0;
}




void FUN_10052c164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x19290);
  DAT_101e94798 = (undefined8 *)FUN_10052dd50(pvVar1,param_1,param_2,param_3);
  *DAT_101e94798 = &PTR_FUN_10149f458;
  FUN_10052f724();
  FUN_10052dec0(DAT_101e94798);
  pvVar1 = operator_new(0x14f20);
  DAT_101e947a0 = FUN_10052c488(pvVar1,DAT_101e94798);
  return;
}




void FUN_10052c1e8(void)

{
  void *pvVar1;
  
  if (DAT_101e947a0 != 0) {
    pvVar1 = (void *)FUN_10052c5b0();
    operator_delete(pvVar1);
  }
  DAT_101e947a0 = 0;
  if (DAT_101e94798 != (long *)0x0) {
    (**(code **)(*DAT_101e94798 + 0x28))();
  }
  DAT_101e94798 = (long *)0x0;
  FUN_10052f74c();
  return;
}




void FUN_10052c234(void)

{
  FUN_10052ccc8(DAT_101e947a0);
  FUN_10052e9a4(DAT_101e94798);
  return;
}




void FUN_10052c258(void)

{
  FUN_10052e9bc(DAT_101e94798);
  FUN_10052cccc(DAT_101e947a0);
  return;
}




void FUN_10052c27c(undefined8 param_1)

{
  FUN_10052e47c(DAT_101e94798);
  FUN_10052c670(param_1,DAT_101e947a0);
  return;
}




void FUN_10052c2b0(void)

{
  FUN_10052e00c(DAT_101e94798);
  return;
}




void FUN_10052c2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10052e0fc(DAT_101e94798,param_1,param_2,param_3);
  return;
}




void FUN_10052c2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10052e11c(DAT_101e94798,param_1,param_2,param_3);
  return;
}




void FUN_10052c2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_10052e0ec(DAT_101e94798);
  if (iVar1 != 0) {
    FUN_10052ee6c(param_1,param_2,DAT_101e94798,param_3,param_4,param_5);
    return;
  }
  return;
}




void FUN_10052c364(undefined8 param_1)

{
  FUN_10052f070(DAT_101e94798,param_1);
  return;
}




void FUN_10052c374(undefined8 param_1)

{
  FUN_10052ea10(DAT_101e94798,param_1);
  return;
}




void FUN_10052c384(undefined8 param_1)

{
  if (DAT_101e94798 != 0) {
    FUN_10052ef30(DAT_101e94798,param_1);
    return;
  }
  return;
}




void FUN_10052c39c(void)

{
  FUN_10052eed4(DAT_101e94798);
  return;
}




void FUN_10052c3a8(undefined8 param_1)

{
  FUN_10052ede8(DAT_101e94798,param_1);
  return;
}




void FUN_10052c3b8(undefined8 param_1)

{
  FUN_10052cd64(DAT_101e947a0,param_1);
  return;
}




void FUN_10052c3c8(undefined8 param_1)

{
  FUN_10052d03c(DAT_101e947a0,param_1);
  return;
}




void FUN_10052c3d8(undefined8 param_1)

{
  FUN_10052d0cc(DAT_101e947a0,param_1);
  return;
}




void FUN_10052c3e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10052d150(DAT_101e947a0,param_1,param_2);
  return;
}




void FUN_10052c3fc(undefined8 param_1)

{
  FUN_10052d0f4(DAT_101e947a0,param_1);
  return;
}




void FUN_10052c40c(void)

{
  FUN_10052ccd0(DAT_101e947a0);
  return;
}




void FUN_10052c418(void)

{
  FUN_10052cd08(DAT_101e947a0);
  return;
}




void FUN_10052c424(undefined8 param_1)

{
  FUN_10052d294(DAT_101e947a0,param_1);
  return;
}




void FUN_10052c434(undefined8 param_1)

{
  FUN_10052d3a4(DAT_101e947a0,param_1);
  return;
}



undefined8 *DAT_101e947b0;
undefined8 DAT_101e947b0;
undefined FUN_10052d88c;
float DAT_101e947a8;
float DAT_101e947ac;
long DAT_101e947b0;
undefined4 DAT_101e947a8;
undefined4 DAT_101e947ac;
undefined *PTR_FUN_10149f498;
undefined DAT_10115c2f0;
long *DAT_101d91878;
undefined8 *DAT_101d91878;
undefined *PTR__AVAudioSessionInterruptionTypeKey_101444020;
undefined FUN_10052f4ac;
undefined *PTR__AVAudioSessionSilenceSecondaryAudioHintTypeKey_101444050;
undefined FUN_10052f588;
undefined8 DAT_101d91868;
undefined8 DAT_101d91870;
undefined *PTR__AVAudioSessionInterruptionNotification_101444018;
undefined *PTR__AVAudioSessionSilenceSecondaryAudioHintNotification_101444048;
pointer PTR___NSConcreteGlobalBlock_10149f4e8;
pointer PTR___NSConcreteGlobalBlock_10149f508;
undefined8 DAT_101d91878;
undefined8 *DAT_101e947e0;
void *DAT_101e947e0;
undefined FUN_10052fd88;
undefined FUN_10052fd7c;
undefined FUN_10052fde4;
undefined FUN_10052fd94;
undefined FUN_10052ff90;
undefined FUN_10052ff88;
undefined FUN_10052ffac;
undefined FUN_10052ffa4;
undefined *PTR_thunk_FUN_10052ffb4_10149f538;
undefined FUN_100538264;
undefined FUN_100538288;
undefined *PTR_FUN_1014a0bb0;
undefined *PTR_FUN_10149f690;
undefined FUN_100530718;
undefined FUN_100530740;
undefined FUN_10053072c;
undefined FUN_100530768;
undefined FUN_100530754;
undefined *PTR_thunk_FUN_100530784_10149f6e8;
undefined *PTR_FUN_10149f870;
undefined4 DAT_101d9188c;
undefined4 DAT_101d91888;
undefined4 DAT_101873a58;
undefined FUN_100531f64;
undefined FUN_100531f5c;
undefined FUN_100531f74;
undefined FUN_100531f6c;
undefined *PTR_thunk_FUN_100531f9c_10149f970;
undefined *PTR_thunk_FUN_100532514_10149fac0;
undefined4 DAT_101d9189c;
undefined4 DAT_101d91890;
undefined4 DAT_101d91898;
undefined *PTR_thunk_FUN_10063eeb4_1014a5380;
undefined FUN_1005330e4;
undefined *PTR_thunk_FUN_100533140_10149fc08;
undefined FUN_100533118;
undefined FUN_100533134;
undefined FUN_100533128;
undefined *PTR_thunk_FUN_100530784_10149fd28;
undefined *PTR_thunk_FUN_10064e2bc_10149feb8;
undefined *PTR_FUN_1014a0bd8;
undefined4 DAT_101867618;
undefined *PTR_thunk_FUN_100534090_1014a0000;
undefined FUN_1005386e8;
undefined DAT_101e947d0;
undefined DAT_101e947d8;
undefined *PTR_FUN_1014a0100;
undefined *PTR_thunk_FUN_100535744_1014a0d18;
undefined *PTR_thunk_FUN_100535744_1014a0e18;
undefined *PTR_thunk_FUN_100535744_1014a0270;
undefined FUN_100535a00;
undefined FUN_1005359ec;
undefined FUN_100535a28;
undefined FUN_100535a14;
undefined *PTR_thunk_FUN_100534a3c_1014a0370;
undefined FUN_100535a3c;
undefined4 DAT_101d918b4;
undefined FUN_1005368a0;
undefined *PTR_thunk_FUN_1005367d4_1014a0508;
undefined *PTR_FUN_1014a0668;
undefined *PTR_FUN_1014a06b0;
undefined *PTR_FUN_1014a0838;
undefined *PTR_thunk_FUN_100536ddc_1014a0880;
undefined *PTR_FUN_1014a0a98;
undefined *PTR_FUN_1014a0f40;
undefined *PTR_FUN_1014a0c00;
undefined FUN_100536fb0;
int DAT_101d918f0;
int DAT_101dbd4e0;
undefined4 DAT_101dbd4c4;
undefined4 DAT_101dbd4c8;
byte DAT_101867640;
undefined DAT_101867620;
undefined DAT_101867630;
undefined8 UNK_101867628;
undefined8 UNK_101867638;
undefined FUN_100537958;
byte DAT_101867668;
undefined DAT_101867648;
undefined DAT_101867658;
undefined8 UNK_101867650;
undefined8 UNK_101867660;
undefined FUN_100537994;
byte DAT_101867690;
undefined DAT_101867670;
undefined DAT_101867680;
undefined8 UNK_101867678;
undefined8 UNK_101867688;
undefined FUN_1005379d0;
undefined FUN_100537a0c;
byte DAT_1018676b8;
undefined DAT_101867698;
undefined DAT_1018676a8;
undefined8 UNK_1018676a0;
undefined8 UNK_1018676b0;
byte DAT_1018676e0;
undefined FUN_100537a48;
undefined DAT_1018676c0;
undefined DAT_1018676d0;
undefined8 UNK_1018676c8;
undefined8 UNK_1018676d8;
byte DAT_101867708;
undefined DAT_1018676e8;
undefined FUN_100537a84;
undefined DAT_1018676f8;
undefined8 UNK_1018676f0;
undefined8 UNK_101867700;
byte DAT_101867730;
undefined DAT_101867710;
undefined DAT_101867720;
undefined FUN_100537ac0;
undefined8 UNK_101867718;
undefined8 UNK_101867728;
byte DAT_101867758;
undefined DAT_101867738;
undefined DAT_101867748;
undefined8 UNK_101867740;
undefined FUN_100537afc;
undefined8 UNK_101867750;
byte DAT_101867780;
undefined DAT_101867760;
undefined DAT_101867770;
undefined8 UNK_101867768;
undefined8 UNK_101867778;
undefined FUN_100537b38;
undefined1 DAT_101e947b8;
undefined2 DAT_101e947ba;
undefined2 DAT_101e947bc;
undefined8 DAT_101e947c0;
undefined8 DAT_101e947c8;
undefined8 DAT_101e947d0;
undefined8 DAT_101e947d8;
undefined4 DAT_101d918c0;
undefined4 DAT_101d918c4;
undefined4 DAT_101d918c8;
undefined4 DAT_101d918cc;
undefined4 DAT_101d918bc;
undefined4 DAT_101d918dc;
undefined4 DAT_101d918ec;
undefined4 DAT_101d918f0;
undefined FUN_1005390ec;
undefined FUN_100539c18;
undefined FUN_10053a4bc;
undefined FUN_10053a690;
undefined FUN_100539fc0;
undefined FUN_10053a1e8;
undefined FUN_10053a410;
undefined DAT_10115c378;
undefined FUN_10053ae28;
undefined FUN_10053ad78;
undefined FUN_10053ad0c;
undefined FUN_10053ae24;
undefined FUN_10053fe48;
undefined DAT_10115c73b;
undefined FUN_10053b064;
undefined FUN_10053b190;
undefined FUN_10053b588;
undefined FUN_10053b020;
undefined FUN_10053b580;
undefined FUN_10053b3b0;
undefined FUN_10053b860;
undefined FUN_10053c1dc;
undefined FUN_10053c158;
undefined FUN_10053c484;
undefined FUN_10053c428;
undefined FUN_10053c638;
undefined FUN_10053c4f0;
undefined FUN_10053c270;
undefined FUN_10053c56c;
undefined FUN_10053c13c;
undefined FUN_10053c138;
undefined FUN_10053c770;
undefined8 DAT_10115c790;
undefined8 DAT_10115c810;
undefined *PTR_FUN_1014a0fa8;
undefined FUN_1005448d8;
undefined FUN_100544590;
undefined FUN_100544d1c;
undefined FUN_100544b10;
undefined FUN_100545000;
undefined FUN_100544eb0;
undefined FUN_10054545c;
undefined FUN_10054509c;
undefined FUN_10054772c;
undefined FUN_1005450cc;
undefined FUN_100545844;
undefined FUN_100545cf4;
undefined FUN_1005480a8;
undefined FUN_100546168;
undefined FUN_100547c88;
undefined FUN_1005466c8;
undefined FUN_100548704;
undefined FUN_100546bbc;
undefined FUN_100548404;
undefined FUN_10054711c;
undefined FUN_100548b48;
undefined FUN_10054898c;
undefined FUN_100548cf8;
undefined FUN_1005491b4;
undefined FUN_1005495c8;
undefined FUN_100548ca8;
undefined FUN_100549c30;
undefined FUN_100549928;
undefined FUN_10054a12c;
undefined FUN_100549f58;
undefined FUN_10054a268;
undefined FUN_10053ce40;
undefined UNK_10115c850;
undefined UNK_10115c860;
pointer PTR___mh_execute_header_10115c884;
undefined UNK_10115c8c4;
undefined UNK_10115c928;
undefined UNK_10115c9b8;
undefined FUN_10053d5ac;
undefined UNK_10115ca7c;
undefined FUN_10053d3a4;
undefined FUN_10053e038;
undefined FUN_10053d7e4;
undefined FUN_10053d8e0;
undefined FUN_10053e454;
pointer PTR___mh_execute_header_10115cb7c;
pointer PTR___mh_execute_header_10115cee0;
undefined FUN_10053f4ec;
undefined FUN_10053f78c;
undefined FUN_10053eef0;
undefined FUN_10053f494;
pointer PTR___mh_execute_header_10115d020;
pointer PTR___mh_execute_header_10115d124;
pointer PTR___mh_execute_header_10115d1f4;
undefined4 DAT_10115d298;
pointer PTR___mh_execute_header_10115d318;
pointer PTR___mh_execute_header_10115d37c;
undefined FUN_10053f96c;
undefined FUN_10053fe24;
undefined FUN_10053fab8;
undefined FUN_10053fd84;
undefined FUN_100540180;
pointer PTR_FUN_1014a0fc0;
undefined FUN_100541568;
undefined FUN_1005416f0;
undefined FUN_100541604;
undefined FUN_100540160;
undefined DAT_10115ccf0;
undefined DAT_10115cd10;
undefined FUN_100542638;
undefined FUN_1005427f8;
undefined FUN_100542d30;
undefined FUN_1005429d8;
undefined FUN_1005429ec;
undefined FUN_100542b1c;
undefined FUN_100542ce0;
undefined FUN_100542f14;
undefined FUN_100542ffc;
undefined FUN_100543090;
undefined FUN_10054318c;
undefined FUN_1005435cc;
undefined FUN_10054346c;
undefined FUN_1005435dc;
undefined FUN_1005435d4;
undefined FUN_100543480;
undefined FUN_100543630;
undefined FUN_1005436dc;
undefined FUN_100543858;
undefined *PTR_s_Bogus_message_code_%d_1014a0fd0;
undefined FUN_1005438bc;
undefined FUN_100543a08;
undefined FUN_100543938;
undefined FUN_10054382c;
undefined FUN_10054b0f4;
undefined FUN_10054a438;
undefined FUN_10054a5dc;
undefined FUN_10054a6dc;
undefined FUN_10054a7d0;
undefined FUN_10054afac;
undefined FUN_10054a8cc;
undefined FUN_10054a96c;
undefined FUN_10054aa0c;
undefined FUN_10054abf0;
undefined FUN_10054adcc;
undefined DAT_10115cd60;
undefined DAT_10115cd70;
undefined FUN_10054b988;
undefined FUN_10054b738;
undefined FUN_10054b98c;
undefined4 DAT_10115ce90;
undefined1 DAT_10115cd90;
undefined FUN_10054bb50;
undefined FUN_10054bc54;
undefined FUN_10054bd1c;
undefined FUN_10054be0c;
undefined FUN_10054bbc4;
undefined FUN_10054c2a4;
undefined FUN_10054c15c;
undefined FUN_10054c3e4;
undefined FUN_10054cb3c;
undefined FUN_10054c364;
undefined FUN_10054c770;
undefined FUN_10054ca68;
undefined DAT_10115ced0;
undefined *PTR_FUN_1014a13e0;
undefined *PTR_FUN_1014a14b8;
undefined *PTR_FUN_1014a1430;
undefined *PTR_FUN_1014a1490;
undefined8 *DAT_101d918f8;
long DAT_101d918f8;
uint *DAT_101d918f8;
undefined8 DAT_101d91900;
long DAT_101d91900;
undefined1 DAT_101e947f8;
undefined8 DAT_101e947e8;
undefined4 DAT_101e947f0;
undefined *PTR_FUN_101867790;
undefined *PTR__free_101867798;
undefined DAT_101180690;
undefined1 DAT_1018677a8;
float DAT_1018677a0;
undefined UNK_100553a98;
undefined DAT_10115d3e0;
undefined *PTR_FUN_1014a1628;
undefined *PTR_FUN_1014a1508;
undefined *PTR_FUN_1014a1568;
undefined *PTR_FUN_1014a1590;
undefined *PTR_FUN_1014a15f0;
undefined *PTR_FUN_1014a1678;
undefined *PTR_FUN_1014a16d8;
undefined *PTR_FUN_1014a1710;
undefined *PTR_FUN_1014a1770;
undefined8 DAT_101ea5b38;
pthread_key_t DAT_101dbd528;
undefined FUN_100554e54;
pointer PTR_thunk_FUN_100554d78_1014a1798;
undefined thunk_FUN_100554da8;
pointer PTR_thunk_FUN_1004e6bc8_1014a17b8;
undefined *PTR_DAT_10186d408;
undefined *PTR_FUN_1014a17d8;
undefined *PTR_DAT_1014441b8;
undefined4 DAT_10115db00;
undefined DAT_101867918;
undefined DAT_10115db50;
pointer PTR___mh_execute_header_10115dc50;
undefined DAT_1014a3460;
undefined *PTR_DAT_1014a3470;
undefined DAT_10115dcd4;
undefined FUN_10055e9f4;
undefined DAT_10115ddd4;
undefined4 DAT_101e94800;
char *DAT_101e94828;
undefined4 DAT_101e94830;
undefined4 DAT_101e94834;
undefined4 DAT_101e94838;
undefined4 DAT_101e9483c;
undefined8 DAT_101e94840;
undefined4 DAT_101e94860;
char *DAT_101e94888;
undefined4 DAT_101e94890;
undefined4 DAT_101e948c0;
undefined4 DAT_101e948f0;
char *DAT_101e948e8;
undefined *DAT_101e94920;
undefined4 DAT_101e94938;
undefined4 DAT_101e94930;
undefined DAT_101867d30;
undefined DAT_101e94804;
undefined DAT_101e94814;
undefined DAT_101e94864;
undefined DAT_101e94874;
undefined DAT_101e948c4;
undefined DAT_101e948d4;
undefined DAT_101e94960;
undefined4 DAT_101e94970;
undefined4 DAT_101e94a7c;
undefined4 DAT_101e94a80;
undefined DAT_101e94974;
undefined4 UNK_101e94968;
undefined4 UNK_101e9496c;
undefined4 DAT_101e94ab8;
char *DAT_101e94ab0;
undefined4 DAT_101e94abc;
undefined4 DAT_101e94ac0;
undefined4 DAT_101e94ac8;
char *DAT_101e94b10;
undefined4 DAT_101e94b18;
undefined4 DAT_101e94b1c;
undefined4 DAT_101e94b20;
undefined4 DAT_101e94b28;
char *DAT_101e94b70;
undefined4 DAT_101e94b78;
undefined4 DAT_101e94b7c;
undefined4 DAT_101e94b80;
undefined4 DAT_101e94b88;
undefined4 DAT_101e94ba8;
undefined4 DAT_101e94bd8;
char *DAT_101e94bd0;
undefined *DAT_101e94c08;
undefined4 DAT_101e94c20;
undefined4 DAT_101e94c18;
undefined DAT_101867e28;
undefined DAT_101e94a88;
undefined DAT_101e94a8c;
undefined DAT_101e94a9c;
undefined DAT_101e94ae8;
undefined DAT_101e94aec;
undefined DAT_101e94afc;
undefined DAT_101e94b48;
undefined DAT_101e94b4c;
undefined DAT_101e94b5c;
undefined DAT_101e94bac;
undefined DAT_101e94bbc;
undefined *DAT_101d91a20;
undefined *DAT_101d91a30;
undefined *DAT_101d91a38;
undefined *DAT_101d91a28;
undefined *PTR_DAT_1014441c8;
undefined4 DAT_101e94c40;
undefined DAT_101e94c44;
undefined DAT_101e94c54;
char *DAT_101e94c68;
undefined4 DAT_101e94c70;
char *DAT_101e94cc8;
undefined4 DAT_101e94cd0;
undefined4 DAT_101e94cd4;
undefined4 DAT_101e94cd8;
undefined4 DAT_101e94ce0;
undefined4 DAT_101e94d30;
undefined4 DAT_101e94d34;
undefined4 DAT_101e94d38;
undefined4 DAT_101e94d40;
char *DAT_101e94d28;
undefined *DAT_101d91a40;
undefined4 DAT_101d91a58;
undefined4 DAT_101d91a50;
undefined DAT_101867f18;
undefined DAT_101e94ca0;
undefined DAT_101e94ca4;
undefined DAT_101e94cb4;
undefined DAT_101e94d00;
undefined DAT_101e94d04;
undefined DAT_101e94d14;
undefined7 UNK_101e94c4c;
undefined7 UNK_101e94c5c;
undefined DAT_101867ff0;
undefined DAT_101868035;
undefined *PTR_FUN_1014a1878;
undefined FUN_1005dccd8;
undefined *PTR_DAT_1014441c0;
undefined4 DAT_1014a19c0;
undefined4 DAT_1014a19c4;
pointer PTR_s_AIF_1014a19c8;
undefined DAT_10115e1e0;
undefined *PTR_FUN_1014a2940;
undefined *PTR_FUN_1014a28d8;
undefined *PTR_FUN_1014a2a78;
undefined *PTR_FUN_1014a2a10;
undefined *PTR_defaultFileRead_101444158;
undefined *PTR_defaultFileSeek_101444160;
undefined *PTR_defaultMetaData_101444168;
undefined DAT_10115e260;
undefined DAT_10115e265;
char *DAT_101e94d60;
undefined4 DAT_101e94d68;
undefined4 DAT_101e94d70;
undefined4 DAT_101e94db8;
undefined4 DAT_101e94dcc;
undefined4 DAT_101e94dbc;
undefined *DAT_101e94d88;
undefined *DAT_101e94d98;
undefined *DAT_101e94e20;
undefined thunk_FUN_1005732f0;
undefined FUN_1005732d4;
undefined FUN_1005732a4;
undefined *PTR_FUN_1014a1d50;
undefined4 DAT_101e94e38;
undefined4 DAT_101e94e74;
undefined4 DAT_101e94e68;
undefined4 DAT_101e94e6c;
undefined4 DAT_101e94e70;
char *DAT_101e94e60;
undefined8 DAT_101e94e78;
undefined *DAT_101d91a78;
undefined4 DAT_101d91a90;
undefined4 DAT_101d91a88;
undefined DAT_101868160;
undefined DAT_101e94e3c;
undefined DAT_101e94e4c;
undefined4 DAT_101e94e98;
undefined4 DAT_101e94ec8;
undefined4 DAT_101e94ed0;
undefined4 DAT_101e94ed4;
undefined8 DAT_101e94ed8;
undefined4 DAT_101e94ecc;
char *DAT_101e94ec0;
undefined *DAT_101e95af8;
undefined *DAT_101e95b18;
undefined4 DAT_101e95b10;
undefined4 DAT_101e95b08;
undefined DAT_101868238;
undefined DAT_101e94e9c;
undefined DAT_101e94eac;
undefined DAT_101e94ef8;
undefined FUN_100574228;
undefined DAT_101e94efc;
undefined DAT_101e94f0c;
undefined8 DAT_101e94f20;
undefined4 DAT_101e94f28;
undefined4 DAT_101e94f2c;
undefined4 DAT_101e94f30;
undefined4 DAT_101e94f38;
undefined FUN_1006139d0;
undefined4 DAT_101e95b30;
undefined DAT_101e95b44;
char *DAT_101e95b58;
undefined4 DAT_101e95b60;
undefined * *DAT_101e95b68;
char *DAT_101e95bb8;
undefined4 DAT_101e95bc0;
undefined4 DAT_101e95bc4;
undefined4 DAT_101e95bc8;
undefined4 DAT_101e95bd0;
undefined4 DAT_101e95bf0;
undefined DAT_101e95c04;
char *DAT_101e95c18;
undefined4 DAT_101e95c20;
undefined4 DAT_101e95c24;
undefined4 DAT_101e95c28;
undefined4 DAT_101e95c2c;
undefined8 DAT_101e95c30;
undefined4 DAT_101e95c50;
undefined DAT_101e95c64;
undefined4 DAT_101e95c80;
char *DAT_101e95c78;
undefined4 DAT_101e95c84;
undefined4 DAT_101e95c88;
undefined4 DAT_101e95c8c;
undefined * *DAT_101e95c90;
undefined4 DAT_101e95cb0;
undefined DAT_101e95cc4;
char *DAT_101e95cd8;
undefined4 DAT_101e95ce0;
undefined *DAT_101e95d10;
undefined4 DAT_101e95d28;
undefined4 DAT_101e95d20;
undefined *DAT_101e95d30;
pointer PTR_s_Receive_101868418;
pointer PTR_s_Auto_101868428;
undefined DAT_101868448;
undefined DAT_101e95b34;
undefined DAT_101e95b90;
undefined DAT_101e95b94;
undefined DAT_101e95ba4;
undefined DAT_101e95bf4;
undefined DAT_101e95c54;
undefined DAT_101e95cb4;
undefined7 UNK_101e95b4c;
undefined7 UNK_101e95c0c;
undefined7 UNK_101e95c6c;
undefined7 UNK_101e95ccc;
undefined FUN_100574c4c;
undefined DAT_101d91ab0;
undefined *PTR_s_Mono_101868430;
undefined DAT_101d91af0;
undefined4 DAT_101e95d48;
char *DAT_101e95d70;
undefined4 DAT_101e95d78;
undefined4 DAT_101e95da8;
char *DAT_101e95dd0;
undefined4 DAT_101e95dd8;
undefined4 DAT_101e95ddc;
undefined4 DAT_101e95de0;
undefined4 DAT_101e95de4;
undefined8 DAT_101e95de8;
char *DAT_101e95e30;
undefined4 DAT_101e95e38;
undefined4 DAT_101e95e3c;
undefined4 DAT_101e95e40;
undefined4 DAT_101e95e48;
char *DAT_101e95e90;
undefined4 DAT_101e95e98;
undefined4 DAT_101e95e9c;
undefined4 DAT_101e95ea0;
undefined4 DAT_101e95ea8;
undefined4 DAT_101e95ec8;
char *DAT_101e95ef0;
undefined4 DAT_101e95ef8;
undefined4 DAT_101e95efc;
undefined4 DAT_101e95f00;
undefined4 DAT_101e95f04;
undefined8 DAT_101e95f08;
char *DAT_101e95f50;
undefined4 DAT_101e95f58;
undefined4 DAT_101e95f5c;
undefined4 DAT_101e95f60;
undefined4 DAT_101e95f68;
char *DAT_101e95fb0;
undefined4 DAT_101e95fb8;
undefined FUN_1005761f4;
undefined4 DAT_101e95fbc;
undefined4 DAT_101e95fc0;
undefined4 DAT_101e95fc8;
undefined4 DAT_101e95fe8;
char *DAT_101e96010;
undefined4 DAT_101e96018;
char *DAT_101e96070;
undefined4 DAT_101e96078;
undefined4 DAT_101e9607c;
undefined4 DAT_101e96080;
undefined4 DAT_101e96088;
undefined *DAT_101e960a8;
undefined4 DAT_101e960c0;
undefined4 DAT_101e960b8;
undefined *DAT_101e960c8;
undefined DAT_101868548;
undefined DAT_101e95d4c;
undefined DAT_101e95d5c;
undefined DAT_101e95dac;
undefined DAT_101e95dbc;
undefined DAT_101e95e08;
undefined DAT_101e95e0c;
undefined DAT_101e95e1c;
undefined DAT_101e95e68;
undefined DAT_101e95e6c;
undefined DAT_101e95e7c;
undefined DAT_101e95ecc;
undefined DAT_101e95edc;
undefined DAT_101e95f28;
undefined DAT_101e95f2c;
undefined DAT_101e95f3c;
undefined DAT_101e95f88;
undefined DAT_101e95f8c;
undefined DAT_101e95f9c;
undefined DAT_101e95fec;
undefined DAT_101e95ffc;
undefined DAT_101e96048;
undefined DAT_101e9604c;
undefined DAT_101e9605c;
undefined thunk_FUN_1005db834;
undefined _free;
undefined thunk_FUN_1005db82c;
long DAT_101d91b10;
long DAT_101d91b18;
long DAT_101d91b20;
long DAT_101d91b28;
long DAT_101d91b30;
undefined thunk_FUN_100579744;
undefined8 DAT_101d91b10;
undefined *PTR_FUN_1014a1db0;
undefined *PTR_FUN_1014a1eb8;
undefined DAT_10115e280;
undefined *PTR_FUN_1014a1fc0;
undefined DAT_10115e2a0;
undefined *PTR_FUN_1014a20c8;
undefined DAT_10115e2c0;
undefined *PTR_FUN_1014a21d0;
undefined DAT_10115e2e0;
undefined *PTR_FUN_1014a2408;
undefined DAT_10115e300;
undefined DAT_10115e310;
char *DAT_101e960e0;
undefined4 DAT_101e960e8;
undefined4 DAT_101e960f0;
undefined *DAT_101e960f8;
undefined *DAT_101e96100;
undefined *DAT_101e96108;
undefined *DAT_101e96118;
undefined4 DAT_101e96138;
undefined4 DAT_101e9613c;
undefined FUN_1005867d4;
undefined thunk_FUN_10058690c;
undefined FUN_1005867e4;
undefined thunk_FUN_100586e70;
undefined DAT_10115e330;
char *DAT_101e961b8;
undefined4 DAT_101e961c0;
undefined4 DAT_101e961c8;
undefined *DAT_101e961d0;
undefined *DAT_101e961d8;
undefined *DAT_101e961e0;
undefined *DAT_101e961f0;
undefined4 DAT_101e96210;
undefined4 DAT_101e96214;
undefined FUN_1005872c0;
undefined thunk_FUN_10058816c;
undefined thunk_FUN_100587e94;
undefined FUN_1005872dc;
undefined DAT_10115e350;
undefined thunk_FUN_100588c1c;
char *DAT_101e96290;
undefined thunk_FUN_100588454;
undefined4 DAT_101e96298;
undefined4 DAT_101e962a0;
undefined *DAT_101e962a8;
undefined *DAT_101e962b0;
undefined *DAT_101e962b8;
undefined *DAT_101e962c8;
undefined4 DAT_101e962e8;
undefined4 DAT_101e962ec;
undefined FUN_10058838c;
undefined FUN_100588400;
undefined FUN_100588ba8;
undefined DAT_10115e370;
undefined FUN_1005886f4;
undefined FUN_100588740;
undefined FUN_100588764;
undefined FUN_1005887ac;
undefined FUN_1005887fc;
undefined FUN_10058884c;
undefined FUN_100588a20;
undefined FUN_1005d9c94;
char *DAT_101e96368;
undefined FUN_1005d9c58;
undefined4 DAT_101e96370;
undefined FUN_1005d9d30;
undefined4 DAT_101e96378;
undefined FUN_1005d9cd4;
undefined4 DAT_101e96374;
undefined thunk_FUN_10058f7dc;
undefined *DAT_101e96380;
undefined thunk_FUN_10058cd58;
undefined *DAT_101e96388;
undefined thunk_FUN_10058fe80;
undefined *DAT_101e96390;
undefined thunk_FUN_10058fb54;
undefined *DAT_101e96398;
undefined *DAT_101e963a0;
undefined *DAT_101e963a8;
undefined *DAT_101e963f0;
undefined *DAT_101e963f8;
undefined *DAT_101e96400;
undefined *DAT_101e96410;
undefined *DAT_101e96418;
undefined4 DAT_101e963c0;
undefined4 DAT_101e963c4;
undefined FUN_1005d9ba8;
undefined FUN_1005d9c34;
undefined FUN_1005d9bf4;
undefined4 DAT_101e96440;
undefined4 DAT_101e96c40;
undefined4 DAT_101e96840;
undefined DAT_101e96c44;
undefined DAT_10115e390;
undefined4 DAT_101e97040;
undefined DAT_10186d410;
undefined DAT_10186d430;
undefined DAT_10186d748;
undefined DAT_10186d74c;
undefined8 *DAT_101dbc3c0;
undefined8 DAT_101dbc0f0;
undefined DAT_101dbc130;
char *DAT_101e97440;
undefined4 DAT_101e97448;
undefined4 DAT_101e97450;
undefined FUN_100590108;
undefined4 DAT_101e9744c;
undefined FUN_100590124;
undefined *DAT_101e97458;
undefined *DAT_101e97460;
undefined *DAT_101e97468;
undefined *DAT_101e97478;
undefined *DAT_101e974c8;
undefined *DAT_101e974d0;
undefined *DAT_101e974d8;
undefined *DAT_101e974e8;
undefined thunk_FUN_100593d18;
undefined *DAT_101e974f0;
undefined thunk_FUN_100593094;
undefined4 DAT_101e97498;
undefined thunk_FUN_1005940f4;
undefined4 DAT_101e9749c;
undefined thunk_FUN_1005941dc;
undefined thunk_FUN_100594398;
undefined FUN_100590240;
undefined FUN_1005901b0;
pointer PTR_LOOP_101868668;
undefined *PTR_LOOP_101868670;
undefined DAT_10115e8c0;
undefined DAT_10115e3b0;
undefined DAT_10115e5b0;
undefined DAT_100592180;
char *DAT_101e97518;
undefined4 DAT_101e97520;
undefined4 DAT_101e97528;
undefined4 DAT_101e97524;
undefined *DAT_101e97530;
undefined *DAT_101e97538;
undefined *DAT_101e97540;
undefined *DAT_101e97548;
undefined *DAT_101e97550;
undefined *DAT_101e97558;
undefined *DAT_101e975a0;
undefined FUN_1005946b8;
undefined *DAT_101e975a8;
undefined *DAT_101e975b0;
undefined *DAT_101e975c0;
undefined *DAT_101e975c8;
undefined4 DAT_101e97570;
undefined4 DAT_101e97574;
undefined thunk_FUN_100596788;
undefined thunk_FUN_100595794;
undefined thunk_FUN_100596ac0;
undefined4 DAT_10186d590;
undefined DAT_10115e8e0;
undefined DAT_10186d52c;
undefined DAT_10186d530;
char *DAT_101e975f0;
undefined4 DAT_101e975f8;
undefined thunk_FUN_100597af8;
undefined4 DAT_101e97600;
undefined thunk_FUN_1005973d0;
undefined *DAT_101e97608;
undefined thunk_FUN_100598a40;
undefined *DAT_101e97610;
undefined thunk_FUN_100597e44;
undefined *DAT_101e97618;
undefined *DAT_101e97628;
undefined FUN_100596d48;
undefined *DAT_101e97638;
undefined *DAT_101e97668;
undefined4 DAT_101e97648;
undefined4 DAT_101e9765c;
undefined4 DAT_101e9764c;
undefined *DAT_101e976b0;
undefined *DAT_101e976b8;
undefined FUN_100596c2c;
undefined FUN_100596c80;
undefined FUN_100596c9c;
char DAT_101d91b40;
undefined4 *DAT_101d91b38;
undefined4 DAT_101d91b50;
undefined DAT_101e976c8;
undefined DAT_101e97dc8;
undefined *PTR_DAT_101868b90;
undefined *PTR_DAT_101868b98;
undefined *PTR_DAT_101868bb0;
undefined4 DAT_101868bb8;
undefined4 DAT_101868fb8;
undefined *PTR_DAT_101868ba0;
undefined *PTR_DAT_101868ba8;
undefined DAT_10186913c;
long DAT_101d91b38;
undefined8 DAT_101d92480;
undefined8 DAT_101d92488;
undefined8 DAT_101d92490;
undefined8 DAT_101d92498;
undefined *DAT_101d924a0;
undefined8 DAT_101d924a8;
undefined8 DAT_101d924b0;
undefined8 DAT_101d924b8;
undefined8 DAT_101d924c0;
undefined8 DAT_101d924c8;
undefined1 DAT_101d924d0;
undefined FUN_100010200;
undefined4 DAT_10115e8f4;
undefined1 DAT_10115e969;
undefined1 DAT_10115e972;
undefined1 DAT_101d924e0;
undefined1 DAT_101d92660;
undefined8 DAT_101d93260;
undefined4 DAT_101d93350;
undefined4 DAT_101d93354;
undefined4 DAT_101d93358;
undefined4 DAT_101d9335c;
undefined UNK_10115e97c;
undefined DAT_10115eafc;
undefined DAT_101869160;
undefined DAT_1018695e0;
undefined DAT_101869a90;
undefined DAT_101869bd0;
undefined DAT_101869d90;
undefined4 DAT_101d9cd98;
undefined4 DAT_101d9cdbc;
undefined4 DAT_101d9cdc0;
undefined4 DAT_101d9cdc4;
undefined4 DAT_101d9cdc8;
undefined4 DAT_101d9cdcc;
undefined4 DAT_101d9cdd0;
undefined4 DAT_101d9cdd4;
undefined4 DAT_101d9cdd8;
undefined4 DAT_101d9cd9c;
undefined4 DAT_101d9cda0;
undefined4 DAT_101d9cda4;
undefined4 DAT_101d9cda8;
undefined4 DAT_101d9cdac;
undefined4 DAT_101d9cdb0;
undefined4 DAT_101d9cdb4;
undefined4 DAT_101d9cdb8;
undefined4 DAT_101d9d84c;
undefined4 DAT_101d9d854;
undefined4 DAT_101d9d858;
undefined4 DAT_101d9d860;
undefined4 DAT_101d9d850;
undefined4 DAT_101d9d85c;
undefined4 DAT_101d9d864;
undefined4 DAT_101d9d868;
undefined4 DAT_101d9d86c;
undefined4 DAT_101d9d870;
undefined4 DAT_101d9d874;
undefined4 DAT_101d9d878;
undefined4 DAT_101d9d844;
undefined4 DAT_101d9d848;
undefined4 DAT_101d9d87c;
undefined4 DAT_101d9d880;
undefined4 DAT_101d9d884;
undefined4 DAT_101d9d888;
undefined DAT_101d9d88c;
undefined4 DAT_101d9cddc;
undefined4 DAT_101d9cde4;
undefined4 DAT_101d9cdec;
undefined4 DAT_101d9cdf4;
undefined4 DAT_101d9cdfc;
undefined4 DAT_101d9d01c;
undefined4 DAT_101d9d024;
undefined4 DAT_101d9d02c;
undefined4 DAT_101d9d034;
undefined4 DAT_101d9d03c;
undefined4 DAT_101d9ce04;
undefined4 DAT_101d9d044;
undefined4 DAT_101d9ce0c;
undefined4 DAT_101d9d04c;
undefined4 DAT_101d9ce14;
undefined4 DAT_101d9d054;
undefined4 DAT_101d9ce1c;
undefined4 DAT_101d9d05c;
undefined4 DAT_101d9ce24;
undefined4 DAT_101d9d064;
undefined4 DAT_101d9ce2c;
undefined4 DAT_101d9d06c;
undefined4 DAT_101d9ce34;
undefined4 DAT_101d9d074;
undefined4 DAT_101d9ce3c;
undefined4 DAT_101d9d07c;
undefined4 DAT_101d9ce44;
undefined4 DAT_101d9d084;
undefined4 DAT_101d9ce4c;
undefined4 DAT_101d9d08c;
undefined4 DAT_101d9ce54;
undefined4 DAT_101d9d094;
undefined4 DAT_101d9ce5c;
undefined4 DAT_101d9d09c;
undefined4 DAT_101d9ce64;
undefined4 DAT_101d9d0a4;
float DAT_101d9cde0;
float DAT_101d9d020;
float DAT_101d9cde8;
float DAT_101d9d028;
float DAT_101d9cdf0;
float DAT_101d9d030;
float DAT_101d9cdf8;
float DAT_101d9d038;
float DAT_101d9ce00;
float DAT_101d9d040;
float DAT_101d9ce08;
float DAT_101d9d048;
float DAT_101d9ce10;
float DAT_101d9d050;
float DAT_101d9ce18;
float DAT_101d9d058;
float DAT_101d9ce20;
float DAT_101d9d060;
float DAT_101d9ce28;
float DAT_101d9d068;
float DAT_101d9ce30;
float DAT_101d9d070;
float DAT_101d9ce38;
float DAT_101d9d078;
float DAT_101d9ce40;
float DAT_101d9d080;
float DAT_101d9ce48;
float DAT_101d9d088;
float DAT_101d9ce50;
float DAT_101d9d090;
float DAT_101d9ce58;
float DAT_101d9d098;
float DAT_101d9ce60;
float DAT_101d9d0a0;
float DAT_101d9ce68;
float DAT_101d9d0a8;
undefined4 DAT_101d9ce6c;
undefined4 DAT_101d9d0ac;
undefined4 DAT_101d9ce74;
undefined4 DAT_101d9d0b4;
undefined4 DAT_101d9ce7c;
undefined4 DAT_101d9d0bc;
undefined4 DAT_101d9ce84;
undefined4 DAT_101d9d0c4;
undefined4 DAT_101d9ce8c;
undefined4 DAT_101d9d0cc;
undefined4 DAT_101d9ce94;
undefined4 DAT_101d9d0d4;
undefined4 DAT_101d9ce9c;
undefined4 DAT_101d9d0dc;
undefined4 DAT_101d9cea4;
undefined4 DAT_101d9d0e4;
undefined4 DAT_101d9ceac;
undefined4 DAT_101d9d0ec;
undefined4 DAT_101d9ceb4;
undefined4 DAT_101d9d0f4;
undefined4 DAT_101d9cebc;
undefined4 DAT_101d9d0fc;
undefined4 DAT_101d9cec4;
undefined4 DAT_101d9d104;
undefined4 DAT_101d9cecc;
undefined4 DAT_101d9d10c;
undefined4 DAT_101d9ced4;
undefined4 DAT_101d9d114;
undefined4 DAT_101d9cedc;
undefined4 DAT_101d9d11c;
undefined4 DAT_101d9cee4;
undefined4 DAT_101d9d124;
undefined4 DAT_101d9ceec;
undefined4 DAT_101d9d12c;
undefined4 DAT_101d9cef4;
undefined4 DAT_101d9d134;
float DAT_101d9ce70;
float DAT_101d9d0b0;
float DAT_101d9ce78;
float DAT_101d9d0b8;
float DAT_101d9ce80;
float DAT_101d9d0c0;
float DAT_101d9ce88;
float DAT_101d9d0c8;
float DAT_101d9ce90;
float DAT_101d9d0d0;
float DAT_101d9ce98;
float DAT_101d9d0d8;
float DAT_101d9cea0;
float DAT_101d9d0e0;
float DAT_101d9cea8;
float DAT_101d9d0e8;
float DAT_101d9ceb0;
float DAT_101d9d0f0;
float DAT_101d9ceb8;
float DAT_101d9d0f8;
float DAT_101d9cec0;
float DAT_101d9d100;
float DAT_101d9cec8;
float DAT_101d9d108;
float DAT_101d9ced0;
float DAT_101d9d110;
float DAT_101d9ced8;
float DAT_101d9d118;
float DAT_101d9cee0;
float DAT_101d9d120;
float DAT_101d9cee8;
float DAT_101d9d128;
float DAT_101d9cef0;
float DAT_101d9d130;
float DAT_101d9cef8;
float DAT_101d9d138;
undefined4 DAT_101d9cefc;
undefined4 DAT_101d9d13c;
undefined4 DAT_101d9cf04;
undefined4 DAT_101d9d144;
undefined4 DAT_101d9cf0c;
undefined4 DAT_101d9d14c;
undefined4 DAT_101d9cf14;
undefined4 DAT_101d9d154;
undefined4 DAT_101d9cf1c;
undefined4 DAT_101d9d15c;
undefined4 DAT_101d9cf24;
undefined4 DAT_101d9d164;
float DAT_101d9cf00;
float DAT_101d9d140;
float DAT_101d9cf08;
float DAT_101d9d148;
float DAT_101d9cf10;
float DAT_101d9d150;
float DAT_101d9cf18;
float DAT_101d9d158;
float DAT_101d9cf20;
float DAT_101d9d160;
float DAT_101d9cf28;
float DAT_101d9d168;
undefined4 DAT_101d9cf8c;
undefined4 DAT_101d9d1cc;
undefined4 DAT_101d9cf94;
undefined4 DAT_101d9d1d4;
undefined4 DAT_101d9cf9c;
undefined4 DAT_101d9d1dc;
undefined4 DAT_101d9cfa4;
undefined4 DAT_101d9d1e4;
undefined4 DAT_101d9cfac;
undefined4 DAT_101d9d1ec;
undefined4 DAT_101d9cfb4;
undefined4 DAT_101d9d1f4;
undefined4 DAT_101d9cfbc;
undefined4 DAT_101d9d1fc;
undefined4 DAT_101d9cfc4;
undefined4 DAT_101d9d204;
undefined4 DAT_101d9cfcc;
undefined4 DAT_101d9d20c;
undefined4 DAT_101d9cfd4;
undefined4 DAT_101d9d214;
undefined4 DAT_101d9cfdc;
undefined4 DAT_101d9d21c;
undefined4 DAT_101d9cfe4;
undefined4 DAT_101d9d224;
undefined4 DAT_101d9cfec;
undefined4 DAT_101d9d22c;
undefined4 DAT_101d9cff4;
undefined4 DAT_101d9d234;
undefined4 DAT_101d9cffc;
undefined4 DAT_101d9d23c;
undefined4 DAT_101d9d004;
undefined4 DAT_101d9d244;
float DAT_101d9cf90;
float DAT_101d9d1d0;
float DAT_101d9cf98;
float DAT_101d9d1d8;
float DAT_101d9cfa0;
float DAT_101d9d1e0;
float DAT_101d9cfa8;
float DAT_101d9d1e8;
float DAT_101d9cfb0;
float DAT_101d9d1f0;
float DAT_101d9cfb8;
float DAT_101d9d1f8;
float DAT_101d9cfc0;
float DAT_101d9d200;
float DAT_101d9cfc8;
float DAT_101d9d208;
float DAT_101d9cfd0;
float DAT_101d9d210;
float DAT_101d9cfd8;
float DAT_101d9d218;
float DAT_101d9cfe0;
float DAT_101d9d220;
float DAT_101d9cfe8;
float DAT_101d9d228;
float DAT_101d9cff0;
float DAT_101d9d230;
float DAT_101d9cff8;
float DAT_101d9d238;
float DAT_101d9d000;
float DAT_101d9d008;
float DAT_101d9d010;
float DAT_101d9d018;
undefined4 DAT_101d9d00c;
undefined4 DAT_101d9d24c;
float DAT_101d9d240;
float DAT_101d9d248;
float DAT_101d9d250;
undefined4 DAT_101d9d014;
undefined4 DAT_101d9d254;
float DAT_101d9d258;
undefined DAT_10115d800;
undefined DAT_10115d810;
undefined DAT_10115d820;
undefined8 DAT_101da1bc8;
undefined8 DAT_101da1bd0;
undefined DAT_10115d830;
undefined8 DAT_101da1bd8;
undefined8 DAT_101da1be0;
undefined DAT_10115d840;
undefined8 DAT_101da1be8;
undefined8 DAT_101da1bf0;
undefined DAT_10115d850;
undefined8 DAT_101da1bf8;
undefined8 DAT_101da1c08;
undefined8 DAT_101da1c00;
undefined8 DAT_101da1c10;
undefined8 DAT_101da1c18;
undefined8 DAT_101da1c20;
undefined DAT_10115d860;
undefined8 DAT_101da1c28;
undefined8 DAT_101da1c30;
undefined DAT_10115d870;
undefined8 DAT_101da1c38;
undefined8 DAT_101da1c40;
undefined DAT_10115d880;
undefined8 DAT_101da1c48;
undefined8 DAT_101da1c50;
undefined DAT_10115d890;
undefined8 DAT_101da1c58;
undefined8 DAT_101da1c60;
undefined DAT_10115d8a0;
undefined8 DAT_101da1c68;
undefined8 DAT_101da1c70;
undefined DAT_10115d8b0;
undefined8 DAT_101da1c78;
undefined8 DAT_101da1c80;
undefined DAT_10115d8c0;
undefined8 DAT_101da1c88;
undefined8 DAT_101da1c90;
undefined DAT_10115d8d0;
undefined8 DAT_101da1c98;
undefined8 DAT_101da1ca0;
undefined DAT_10115d8e0;
undefined8 DAT_101da1ca8;
undefined8 DAT_101da1cb0;
undefined DAT_10115d8f0;
undefined8 DAT_101da1cb8;
undefined8 DAT_101da1cc0;
undefined4 DAT_101da1cc8;
undefined4 DAT_101da18c8;
undefined4 DAT_101da1ccc;
undefined4 DAT_101da18cc;
undefined4 DAT_101da1cd0;
undefined4 DAT_101da18d0;
undefined4 DAT_101da1cd4;
undefined4 DAT_101da18d4;
undefined4 DAT_101da1cd8;
undefined4 DAT_101da18d8;
undefined4 DAT_101da1cdc;
undefined4 DAT_101da18dc;
undefined4 DAT_101da1ce0;
undefined4 DAT_101da18e0;
undefined4 DAT_101da1ce4;
undefined4 DAT_101da18e4;
undefined4 DAT_101da1ce8;
undefined4 DAT_101da18e8;
undefined4 DAT_101da1cec;
undefined4 DAT_101da18ec;
undefined4 DAT_101da1cf0;
undefined4 DAT_101da18f0;
undefined4 DAT_101da1cf4;
undefined4 DAT_101da18f4;
undefined DAT_10115d930;
undefined8 DAT_101da1738;
undefined8 DAT_101da1740;
undefined DAT_10115d940;
undefined8 DAT_101da1748;
undefined8 DAT_101da1750;
undefined DAT_10115d950;
undefined8 DAT_101da1758;
undefined8 DAT_101da1760;
undefined DAT_10115d960;
undefined8 DAT_101da1768;
undefined8 DAT_101da1770;
undefined DAT_10115d970;
undefined8 DAT_101da1778;
undefined8 DAT_101da1780;
undefined DAT_10115d980;
undefined8 DAT_101da1788;
undefined8 DAT_101da1790;
undefined DAT_10115d990;
undefined8 DAT_101da1798;
undefined8 DAT_101da17a0;
undefined DAT_10115d9a0;
undefined8 DAT_101da17a8;
undefined8 DAT_101da17b0;
undefined DAT_10115d9b0;
undefined8 DAT_101da17b8;
undefined8 DAT_101da17c0;
undefined DAT_10115d9c0;
undefined8 DAT_101da17c8;
undefined8 DAT_101da17d0;
undefined DAT_10115d9d0;
undefined8 DAT_101da17d8;
undefined8 DAT_101da17e0;
undefined DAT_10115d9e0;
undefined8 DAT_101da17e8;
undefined8 DAT_101da17f0;
undefined DAT_10115d9f0;
undefined8 DAT_101da17f8;
undefined8 DAT_101da1800;
undefined DAT_10115da00;
undefined8 DAT_101da1808;
undefined8 DAT_101da1810;
undefined DAT_10115da10;
undefined8 DAT_101da1818;
undefined8 DAT_101da1820;
undefined DAT_10115da20;
undefined8 DAT_101da1828;
undefined8 DAT_101da1830;
undefined DAT_10115da30;
undefined8 DAT_101da1838;
undefined8 DAT_101da1840;
undefined DAT_10115da40;
undefined8 DAT_101da1848;
undefined8 DAT_101da1850;
undefined DAT_10115da50;
undefined8 DAT_101da1858;
undefined8 DAT_101da1860;
undefined DAT_10115da60;
undefined8 DAT_101da1868;
undefined8 DAT_101da1870;
undefined DAT_10115da70;
undefined8 DAT_101da1878;
undefined8 DAT_101da1880;
undefined DAT_10115da80;
undefined8 DAT_101da1888;
undefined8 DAT_101da1890;
undefined DAT_10115da90;
undefined8 DAT_101da1898;
undefined8 DAT_101da18a0;
undefined DAT_10115daa0;
undefined8 DAT_101da18a8;
undefined8 DAT_101da18b0;
undefined DAT_10115dab0;
undefined8 DAT_101da18b8;
undefined8 DAT_101da18c0;
undefined4 DAT_10186a0fc;
undefined4 DAT_10186a100;
undefined4 DAT_10186a104;
undefined4 DAT_10186a108;
undefined4 DAT_10186a10c;
undefined4 DAT_10186a110;
undefined4 DAT_10186a114;
undefined4 DAT_10186a118;
undefined4 DAT_10186a11c;
undefined4 DAT_10186a120;
undefined4 DAT_10186a124;
undefined4 DAT_10186a128;
undefined4 DAT_10186a12c;
undefined4 DAT_10186a130;
undefined4 DAT_10186a134;
undefined4 DAT_10186a138;
undefined4 DAT_10186a13c;
undefined4 DAT_10186a140;
undefined4 DAT_10186a144;
undefined4 DAT_10186a148;
undefined4 DAT_10186a14c;
undefined4 DAT_10186a150;
undefined4 DAT_10186a188;
undefined4 DAT_10186a18c;
undefined4 DAT_10186a198;
undefined4 DAT_101d94d60;
undefined4 DAT_101d94d64;
undefined8 DAT_101d9d25c;
undefined4 DAT_101d9d8ec;
undefined4 DAT_101d9dbd0;
undefined4 DAT_101d9dbd4;
undefined4 DAT_101d9dbd8;
undefined4 DAT_101d9dbdc;
undefined4 DAT_101d9dbe0;
undefined4 DAT_101d9dbe4;
undefined4 DAT_101d9dbe8;
undefined4 DAT_101d9dbec;
undefined4 DAT_101d9dbf0;
undefined4 DAT_101d9dbf4;
undefined4 DAT_101d9dbf8;
undefined4 DAT_101d9dbfc;
undefined4 DAT_101d9dc00;
undefined4 DAT_101d9dc04;
undefined4 DAT_101d9ddc8;
undefined4 DAT_101d9ddcc;
undefined4 DAT_101d9ddd0;
undefined4 DAT_101d9ddd4;
undefined4 DAT_101d9ddd8;
undefined4 DAT_101d9dddc;
undefined4 DAT_101d9dde0;
undefined4 DAT_101d9dde4;
undefined4 DAT_101d9dde8;
undefined4 DAT_101d9ddec;
undefined4 DAT_101d9ddf0;
undefined4 DAT_101d9ddf4;
undefined4 DAT_101d9ddf8;
undefined4 DAT_101d9ddfc;
undefined4 DAT_101d9de00;
undefined4 DAT_101d9de04;
undefined4 DAT_101d9de08;
undefined4 DAT_101d9de0c;
undefined4 DAT_101d9de10;
undefined4 DAT_101d9de14;
undefined4 DAT_101d9de18;
undefined4 DAT_101d9de1c;
undefined4 DAT_101d9de20;
undefined4 DAT_101d9de24;
undefined4 DAT_101d9de28;
undefined4 DAT_101d9de2c;
undefined4 DAT_101d9de30;
undefined4 DAT_101d9de34;
undefined4 DAT_101d9de38;
undefined4 DAT_101d9de3c;
undefined4 DAT_101d9de40;
undefined4 DAT_101d9de44;
undefined4 DAT_101d9de48;
undefined4 DAT_101d9e028;
undefined4 DAT_101d9f328;
undefined DAT_101d9f598;
undefined4 DAT_101da0918;
undefined4 DAT_101da091c;
undefined4 DAT_101da0920;
undefined4 DAT_101da0924;
undefined4 DAT_101da0928;
undefined4 DAT_101da092c;
undefined4 DAT_101da0930;
undefined4 DAT_101da0934;
undefined4 DAT_101da0938;
undefined4 DAT_101da093c;
undefined4 DAT_101da0940;
undefined4 DAT_101da0944;
undefined4 DAT_101da0948;
undefined4 DAT_101da094c;
undefined4 DAT_101da0950;
undefined4 DAT_101da0954;
undefined4 DAT_101da0958;
undefined4 DAT_101da095c;
undefined4 DAT_101da0960;
undefined4 DAT_101da0964;
undefined4 DAT_101da0968;
undefined4 DAT_101da096c;
undefined4 DAT_101da0970;
undefined4 DAT_101da0974;
undefined4 DAT_101da0978;
undefined4 DAT_101da097c;
undefined4 DAT_101da0980;
undefined4 DAT_101da0984;
undefined4 DAT_101da0988;
undefined4 DAT_101da098c;
undefined4 DAT_101da0990;
undefined4 DAT_101da0994;
undefined4 DAT_101da0998;
undefined4 DAT_101da099c;
undefined4 DAT_101da09a0;
undefined4 DAT_101da09a4;
undefined4 DAT_101da09a8;
undefined4 DAT_101da09ac;
undefined4 DAT_101da09b0;
undefined4 DAT_101da09b4;
undefined4 DAT_101da09b8;
undefined4 DAT_101da09bc;
undefined4 DAT_101da09c0;
undefined4 DAT_101da09c4;
undefined DAT_101da09c8;
undefined8 DAT_101da0f48;
undefined8 DAT_101da0f50;
undefined8 DAT_101da0f58;
undefined8 DAT_101da1020;
undefined8 DAT_101da1028;
undefined8 DAT_101da1030;
undefined4 DAT_101da1134;
undefined8 DAT_101da1940;
undefined4 DAT_101da1d38;
undefined4 DAT_101da1db8;
undefined4 DAT_101da1e38;
undefined4 DAT_101da1eb8;
undefined DAT_10186a0a0;
undefined DAT_10115eb10;
undefined DAT_10115eb20;
undefined DAT_10115eb30;
undefined4 DAT_101da10f8;
undefined8 DAT_101da18f8;
undefined DAT_10115eb78;
undefined4 DAT_10115ebd0;
undefined DAT_1014a2630;
pointer PTR_DAT_1014a2638;
pointer PTR_DAT_1014a2838;
undefined8 DAT_101d9d894;
undefined UNK_10115ec28;
undefined UNK_10115ec68;
undefined UNK_10115eca8;
undefined UNK_10115ece8;
undefined4 DAT_10186a154;
undefined4 DAT_10186a184;
undefined DAT_10186a1bc;
undefined4 DAT_101da1cf8;
undefined4 DAT_101da1d78;
undefined4 DAT_101da1df8;
undefined4 DAT_101da1e78;
float DAT_101d9cdbc;
float DAT_101d9cd9c;
float DAT_101d9cdc0;
float DAT_101d9cda0;
float DAT_101d9cdc4;
float DAT_101d9cda4;
float DAT_101d9cdc8;
float DAT_101d9cda8;
float DAT_101d9cdcc;
float DAT_101d9cdac;
float DAT_101d9cdd0;
float DAT_101d9cdb0;
float DAT_101d9cdd4;
float DAT_101d9cdb4;
float DAT_101d9cdd8;
float DAT_101d9cdb8;
float DAT_101d9d848;
float DAT_101d9d87c;
float DAT_101d9d880;
float DAT_101d9d884;
float DAT_101d9d888;
float DAT_101d9d88c;
float DAT_101d9d844;
float DAT_101d9d890;
float DAT_101d9d85c;
float DAT_101d9d860;
float DAT_101d9d84c;
float DAT_101d9d850;
float DAT_101d9d86c;
float DAT_101d9d854;
float DAT_101d9d858;
float DAT_101d9d864;
float DAT_101d9d868;
float DAT_101d9d874;
float DAT_101d9d870;
float DAT_101d9d878;
char *DAT_101e98fd0;
undefined4 DAT_101e98fd8;
undefined4 DAT_101e98fe0;
undefined *DAT_101e98fe8;
undefined *DAT_101e98ff0;
undefined *DAT_101e98ff8;
undefined *DAT_101e99008;
undefined4 DAT_101e99028;
undefined thunk_FUN_1005a068c;
undefined4 DAT_101e9902c;
undefined thunk_FUN_1005a0be8;
undefined FUN_1005a0608;
undefined FUN_1005a062c;
char DAT_101da1ef8;
undefined FUN_1005a0508;
undefined FUN_1005a055c;
undefined FUN_1005a0574;
undefined DAT_10115ed30;
char *DAT_101e990a8;
undefined4 DAT_101e990b0;
undefined4 DAT_101e990b8;
undefined *DAT_101e990c0;
undefined *DAT_101e990c8;
undefined *DAT_101e990d0;
undefined *DAT_101e990e0;
undefined4 DAT_101e99100;
undefined4 DAT_101e99104;
undefined thunk_FUN_1005a0f4c;
undefined FUN_1005a0f3c;
undefined FUN_1005a0f34;
undefined FUN_1005a0f44;
char *DAT_101e99180;
undefined4 DAT_101e99188;
undefined4 DAT_101e99190;
undefined *DAT_101e99198;
undefined FUN_1005a2a8c;
undefined *DAT_101e991a0;
undefined *DAT_101e991a8;
undefined *DAT_101e991b8;
undefined *DAT_101e99200;
undefined4 DAT_101e991d8;
undefined4 DAT_101e991dc;
undefined *DAT_101e99240;
undefined thunk_FUN_1005a2cec;
undefined FUN_1005a2b74;
undefined FUN_1005a2bd8;
undefined FUN_1005a2b80;
undefined FUN_1005a2be0;
undefined DAT_10115ed50;
char *DAT_101e99258;
undefined4 DAT_101e99260;
undefined4 DAT_101e99268;
undefined4 DAT_101e99264;
undefined *DAT_101e99270;
undefined *DAT_101e99278;
undefined *DAT_101e99280;
undefined *DAT_101e99288;
undefined *DAT_101e99290;
undefined *DAT_101e99298;
undefined *DAT_101e992e0;
undefined *DAT_101e992e8;
undefined *DAT_101e992f0;
undefined *DAT_101e99300;
undefined *DAT_101e99308;
undefined4 DAT_101e992b0;
undefined4 DAT_101e992b4;
undefined FUN_1005a30a8;
undefined thunk_FUN_1005a5b34;
undefined thunk_FUN_1005a4774;
undefined thunk_FUN_1005a5e60;
undefined DAT_10115ed70;
char *DAT_101e99330;
undefined4 DAT_101e99338;
undefined4 DAT_101e99340;
undefined *DAT_101e99348;
undefined4 DAT_101e99388;
undefined4 DAT_101e9938c;
undefined thunk_FUN_1005a5f78;
undefined FUN_1005a6cfc;
char *DAT_101e99408;
undefined4 DAT_101e99410;
undefined FUN_1005a6d10;
undefined4 DAT_101e99418;
undefined FUN_1005a6d04;
undefined *DAT_101e99420;
undefined *DAT_101e99428;
undefined *DAT_101e99430;
undefined *DAT_101e99440;
undefined4 DAT_101e99460;
undefined4 DAT_101e99464;
undefined FUN_1005a6c04;
undefined DAT_10115ed90;
char *DAT_101e994e0;
undefined4 DAT_101e994e8;
undefined4 DAT_101e994f0;
undefined *DAT_101e994f8;
undefined *DAT_101e99500;
undefined *DAT_101e99508;
undefined thunk_FUN_1005a7184;
undefined *DAT_101e99518;
undefined *DAT_101e99520;
undefined thunk_FUN_1005a7bf4;
undefined *DAT_101e99528;
undefined thunk_FUN_1005a771c;
undefined *DAT_101e99560;
undefined FUN_1005a705c;
undefined4 DAT_101e99538;
undefined FUN_1005a6efc;
undefined4 DAT_101e9953c;
undefined FUN_1005a7178;
undefined *DAT_101e995a0;
undefined FUN_1005a70d0;
undefined *DAT_101e995a8;
undefined *DAT_101e995b0;
undefined FUN_1005a6edc;
undefined FUN_1005a6f0c;
undefined FUN_1005a6fc0;
undefined DAT_10115edb0;
undefined DAT_10115edc0;
undefined DAT_10115edd0;
undefined2 DAT_10115ede4;
undefined DAT_10115ee98;
char *DAT_101e995b8;
undefined4 DAT_101e995c0;
undefined4 DAT_101e995c8;
undefined4 DAT_101e995c4;
undefined *DAT_101e995d0;
undefined *DAT_101e995d8;
undefined *DAT_101e995e0;
undefined *DAT_101e995e8;
undefined *DAT_101e995f0;
undefined *DAT_101e995f8;
undefined *DAT_101e99640;
undefined *DAT_101e99648;
undefined *DAT_101e99650;
undefined *DAT_101e99660;
undefined *DAT_101e99668;
undefined *DAT_101e99658;
undefined4 DAT_101e99610;
undefined4 DAT_101e99614;
undefined thunk_FUN_1005acbf8;
undefined thunk_FUN_1005ab49c;
undefined thunk_FUN_1005acf24;
undefined FUN_1005a91fc;
undefined FUN_1005a921c;
undefined DAT_10115eee0;
undefined DAT_10186d534;
undefined DAT_101dbc7f8;
char *DAT_101e996b8;
undefined4 DAT_101e996c0;
undefined4 DAT_101e996c4;
undefined4 DAT_101e996c8;
undefined4 DAT_101e996d0;
char *DAT_101e99718;
undefined4 DAT_101e99720;
undefined4 DAT_101e99724;
undefined4 DAT_101e99728;
undefined4 DAT_101e99730;
undefined4 DAT_101e99780;
undefined4 DAT_101e99784;
undefined4 DAT_101e99790;
undefined4 DAT_101e99788;
char *DAT_101e99778;
undefined *DAT_101e997b0;
undefined4 DAT_101e997c8;
undefined4 DAT_101e997c0;
undefined DAT_10186c1f0;
undefined DAT_101e99690;
undefined DAT_101e99694;
undefined DAT_101e996a4;
undefined DAT_101e996f0;
undefined DAT_101e996f4;
undefined DAT_101e99704;
undefined DAT_101e99750;
undefined DAT_101e99754;
undefined DAT_101e99764;
undefined *DAT_101da1f00;
undefined4 DAT_101da1f18;
undefined4 DAT_101da1f10;
undefined DAT_10186c2c8;
undefined DAT_10115ef00;
undefined FUN_1005b0dd8;
undefined *PTR_DAT_1014441e0;
undefined *PTR_defaultGetWaveFormat_101444170;
char *DAT_101e99810;
undefined4 DAT_101e99818;
undefined4 DAT_101e9981c;
undefined4 DAT_101e99820;
undefined4 DAT_101e99828;
char *DAT_101e99870;
undefined4 DAT_101e99878;
undefined4 DAT_101e9987c;
undefined4 DAT_101e99880;
undefined4 DAT_101e99888;
char *DAT_101e998d0;
undefined4 DAT_101e998d8;
undefined4 DAT_101e998dc;
undefined4 DAT_101e998e0;
undefined4 DAT_101e998e8;
char *DAT_101e99930;
undefined4 DAT_101e99938;
undefined4 DAT_101e9993c;
undefined4 DAT_101e99940;
undefined4 DAT_101e99948;
char *DAT_101e99990;
undefined4 DAT_101e99998;
undefined4 DAT_101e9999c;
undefined4 DAT_101e999a0;
undefined4 DAT_101e999a8;
undefined4 DAT_101e999c8;
char *DAT_101e999f0;
undefined4 DAT_101e999f8;
undefined4 DAT_101e99a28;
undefined4 DAT_101e99a58;
undefined8 DAT_101e99a60;
char *DAT_101e99a50;
undefined *DAT_101e99a88;
undefined4 DAT_101e99aa0;
undefined4 DAT_101e99a98;
undefined DAT_10186c3d8;
undefined DAT_101e997e8;
undefined DAT_101e997ec;
undefined DAT_101e997fc;
undefined DAT_101e99848;
undefined DAT_101e9984c;
undefined DAT_101e9985c;
undefined DAT_101e998a8;
undefined DAT_101e998ac;
undefined DAT_101e998bc;
undefined DAT_101e99908;
undefined DAT_101e9990c;
undefined DAT_101e9991c;
undefined DAT_101e99968;
undefined DAT_101e9996c;
undefined DAT_101e9997c;
undefined DAT_101e999cc;
undefined DAT_101e999dc;
undefined DAT_101e99a2c;
undefined DAT_101e99a3c;
undefined *DAT_101d91a00;
undefined *DAT_101d91a08;
undefined *DAT_101d91a10;
undefined *DAT_101d91a18;
undefined4 DAT_101e99af0;
undefined4 DAT_101e99af4;
undefined4 DAT_101e99af8;
undefined4 DAT_101e99b00;
char *DAT_101e99ae8;
undefined *DAT_101e99b20;
undefined4 DAT_101e99b38;
undefined4 DAT_101e99b30;
undefined DAT_10186c4b8;
undefined DAT_101e99ac0;
undefined DAT_101e99ac4;
undefined DAT_101e99ad4;
undefined4 DAT_101e99b88;
char *DAT_101e99b80;
undefined4 DAT_101e99b8c;
undefined4 DAT_101e99b90;
undefined4 DAT_101e99b98;
char *DAT_101e99be0;
undefined4 DAT_101e99be8;
undefined4 DAT_101e99bec;
undefined4 DAT_101e99bf0;
undefined4 DAT_101e99bf8;
char *DAT_101e99c40;
undefined4 DAT_101e99c48;
undefined4 DAT_101e99c4c;
undefined4 DAT_101e99c50;
undefined4 DAT_101e99c58;
undefined4 DAT_101e99ca8;
undefined4 DAT_101e99cac;
undefined4 DAT_101e99cb0;
undefined4 DAT_101e99cb8;
char *DAT_101e99ca0;
undefined *DAT_101e99cd8;
undefined *DAT_101e99cf8;
undefined4 DAT_101e99cf0;
undefined4 DAT_101e99ce8;
undefined DAT_10186c5b0;
undefined DAT_101e99b58;
undefined DAT_101e99b5c;
undefined DAT_101e99b6c;
undefined DAT_101e99bb8;
undefined DAT_101e99bbc;
undefined DAT_101e99bcc;
undefined DAT_101e99c18;
undefined DAT_101e99c1c;
undefined DAT_101e99c2c;
undefined DAT_101e99c78;
undefined DAT_101e99c7c;
undefined DAT_101e99c8c;
undefined FUN_1005b38bc;
undefined *DAT_101d919f8;
undefined4 DAT_101e99d10;
undefined4 DAT_101e99d40;
char *DAT_101e99d38;
undefined4 DAT_101e99d44;
undefined4 DAT_101e99d48;
undefined4 DAT_101e99d4c;
undefined8 DAT_101e99d50;
undefined4 DAT_101e99d70;
undefined4 DAT_101e99da0;
char *DAT_101e99d98;
undefined4 DAT_101e99da4;
undefined4 DAT_101e99da8;
undefined4 DAT_101e99dac;
undefined8 DAT_101e99db0;
undefined4 DAT_101e99dd0;
char *DAT_101e99df8;
undefined4 DAT_101e99e00;
undefined4 DAT_101e99e60;
undefined4 DAT_101e99e70;
undefined4 DAT_101e99e64;
undefined4 DAT_101e99e68;
char *DAT_101e99e58;
undefined *DAT_101e99e90;
undefined4 DAT_101e99ea8;
undefined4 DAT_101e99ea0;
undefined DAT_10186c6a8;
undefined DAT_101e99d14;
undefined DAT_101e99d24;
undefined DAT_101e99d74;
undefined DAT_101e99d84;
undefined DAT_101e99dd4;
undefined DAT_101e99de4;
undefined DAT_101e99e30;
undefined DAT_101e99e34;
undefined DAT_101e99e44;
undefined *PTR_FUN_1014a2870;
undefined4 DAT_101e99ef8;
char *DAT_101e99ef0;
undefined4 DAT_101e99efc;
undefined4 DAT_101e99f00;
undefined4 DAT_101e99f08;
char *DAT_101e99f50;
undefined4 DAT_101e99f58;
undefined4 DAT_101e99f5c;
undefined4 DAT_101e99f60;
undefined4 DAT_101e99f68;
undefined4 DAT_101e99fb8;
undefined4 DAT_101e99fc8;
undefined4 DAT_101e99fbc;
undefined4 DAT_101e99fc0;
char *DAT_101e99fb0;
undefined *DAT_101e99fe8;
undefined4 DAT_101e9a000;
undefined4 DAT_101e99ff8;
undefined DAT_10186c798;
undefined DAT_101e99ec8;
undefined DAT_101e99ecc;
undefined DAT_101e99edc;
undefined DAT_101e99f28;
undefined DAT_101e99f2c;
undefined DAT_101e99f3c;
undefined DAT_101e99f88;
undefined DAT_101e99f8c;
undefined DAT_101e99f9c;
undefined4 DAT_101e9a050;
char *DAT_101e9a048;
undefined4 DAT_101e9a054;
undefined4 DAT_101e9a058;
undefined4 DAT_101e9a060;
undefined4 DAT_101e9a0b4;
undefined4 DAT_101e9a0c0;
undefined4 DAT_101e9a0b0;
undefined4 DAT_101e9a0b8;
char *DAT_101e9a0a8;
undefined *DAT_101e9a0e0;
undefined4 DAT_101e9a0f8;
undefined4 DAT_101e9a0f0;
undefined DAT_10186c880;
undefined DAT_101e9a020;
undefined DAT_101e9a024;
undefined DAT_101e9a034;
undefined DAT_101e9a080;
undefined DAT_101e9a084;
undefined DAT_101e9a094;
float DAT_10186c958;
undefined4 DAT_101e9a148;
char *DAT_101e9a140;
undefined4 DAT_101e9a14c;
undefined4 DAT_101e9a150;
undefined4 DAT_101e9a158;
char *DAT_101e9a1a0;
undefined4 DAT_101e9a1a8;
undefined4 DAT_101e9a1ac;
undefined4 DAT_101e9a1b0;
undefined4 DAT_101e9a1b8;
char *DAT_101e9a200;
undefined4 DAT_101e9a208;
undefined FUN_1005b89d8;
undefined4 DAT_101e9a20c;
undefined4 DAT_101e9a210;
undefined4 DAT_101e9a218;
char *DAT_101e9a260;
undefined4 DAT_101e9a268;
undefined4 DAT_101e9a26c;
undefined4 DAT_101e9a270;
undefined4 DAT_101e9a278;
undefined4 DAT_101e9a2c8;
undefined4 DAT_101e9a2cc;
undefined4 DAT_101e9a2d0;
undefined4 DAT_101e9a2d8;
char *DAT_101e9a2c0;
undefined *DAT_101e9a2f8;
undefined4 DAT_101e9a310;
undefined4 DAT_101e9a308;
undefined *DAT_101e9a318;
undefined DAT_10186c988;
undefined DAT_101e9a118;
undefined DAT_101e9a11c;
undefined DAT_101e9a12c;
undefined DAT_101e9a178;
undefined DAT_101e9a17c;
undefined DAT_101e9a18c;
undefined DAT_101e9a1d8;
undefined DAT_101e9a1dc;
undefined DAT_101e9a1ec;
undefined DAT_101e9a238;
undefined DAT_101e9a23c;
undefined DAT_101e9a24c;
undefined DAT_101e9a298;
undefined DAT_101e9a29c;
undefined DAT_101e9a2ac;
undefined4 DAT_101e9a360;
char *DAT_101e9a358;
undefined4 DAT_101e9a364;
undefined4 DAT_101e9a368;
undefined4 DAT_101e9a370;
undefined4 DAT_101e9a3c4;
undefined4 DAT_101e9a3d0;
undefined4 DAT_101e9a3c0;
undefined4 DAT_101e9a3c8;
char *DAT_101e9a3b8;
undefined *DAT_101e9a3f0;
undefined4 DAT_101e9a408;
undefined4 DAT_101e9a400;
undefined DAT_10186ca70;
undefined DAT_101e9a330;
undefined DAT_101e9a334;
undefined DAT_101e9a344;
undefined DAT_101e9a390;
undefined DAT_101e9a394;
undefined DAT_101e9a3a4;
undefined *PTR_dc_1014441f8;
float DAT_10186cb48;
undefined4 DAT_101e9a458;
char *DAT_101e9a450;
undefined4 DAT_101e9a45c;
undefined4 DAT_101e9a460;
undefined4 DAT_101e9a468;
undefined4 DAT_101e9a4b8;
undefined4 DAT_101e9a4c0;
undefined4 DAT_101e9a4c8;
undefined4 DAT_101e9a4bc;
char *DAT_101e9a4b0;
undefined *DAT_101e9a4e8;
undefined4 DAT_101e9a500;
undefined4 DAT_101e9a4f8;
undefined DAT_10186cb60;
undefined DAT_101e9a428;
undefined DAT_101e9a42c;
undefined DAT_101e9a43c;
undefined DAT_101e9a488;
undefined DAT_101e9a48c;
undefined DAT_101e9a49c;
float DAT_10186cc38;
undefined4 DAT_101e9a550;
undefined4 DAT_101e9a554;
undefined4 DAT_101e9a558;
undefined4 DAT_101e9a560;
char *DAT_101e9a548;
undefined *DAT_101e9a580;
undefined4 DAT_101e9a598;
undefined4 DAT_101e9a590;
undefined DAT_10186cc48;
undefined DAT_101e9a520;
undefined DAT_101e9a524;
undefined DAT_101e9a534;
float DAT_10186cd20;
undefined4 DAT_101e9a5e8;
char *DAT_101e9a5e0;
undefined4 DAT_101e9a5ec;
undefined4 DAT_101e9a5f0;
undefined4 DAT_101e9a5f8;
char *DAT_101e9a640;
undefined4 DAT_101e9a648;
undefined4 DAT_101e9a64c;
undefined4 DAT_101e9a650;
undefined4 DAT_101e9a658;
undefined4 DAT_101e9a6a8;
undefined4 DAT_101e9a6b8;
undefined4 DAT_101e9a6ac;
undefined4 DAT_101e9a6b0;
char *DAT_101e9a6a0;
undefined *DAT_101e9a6d8;
undefined4 DAT_101e9a6f0;
undefined4 DAT_101e9a6e8;
undefined DAT_10186cd40;
undefined DAT_101e9a5b8;
undefined DAT_101e9a5bc;
undefined DAT_101e9a5cc;
undefined DAT_101e9a618;
undefined DAT_101e9a61c;
undefined DAT_101e9a62c;
undefined DAT_101e9a678;
undefined DAT_101e9a67c;
undefined DAT_101e9a68c;
undefined4 DAT_101e9a710;
undefined4 DAT_101e9a740;
char *DAT_101e9a738;
undefined4 DAT_101e9a744;
undefined4 DAT_101e9a748;
undefined4 DAT_101e9a74c;
undefined * *DAT_101e9a750;
undefined4 DAT_101e9a7b0;
undefined4 DAT_101e9a7a0;
undefined4 DAT_101e9a7a4;
undefined4 DAT_101e9a7a8;
char *DAT_101e9a798;
undefined *DAT_101e9a7d0;
undefined4 DAT_101e9a7e8;
undefined4 DAT_101e9a7e0;
undefined *PTR_s_Sine_10186ce18;
undefined DAT_10186ce58;
undefined DAT_101e9a714;
undefined DAT_101e9a724;
undefined DAT_101e9a770;
undefined DAT_101e9a774;
undefined DAT_101e9a784;
undefined4 DAT_101e9a838;
char *DAT_101e9a830;
undefined4 DAT_101e9a83c;
undefined4 DAT_101e9a840;
undefined4 DAT_101e9a848;
char *DAT_101e9a890;
undefined4 DAT_101e9a898;
undefined4 DAT_101e9a89c;
undefined4 DAT_101e9a8a0;
undefined4 DAT_101e9a8a8;
undefined4 DAT_101e9a900;
undefined4 DAT_101e9a908;
undefined4 DAT_101e9a8f8;
undefined4 DAT_101e9a8fc;
char *DAT_101e9a8f0;
undefined *DAT_101e9a928;
undefined4 DAT_101e9a940;
undefined4 DAT_101e9a938;
undefined DAT_10186cf48;
undefined DAT_101e9a808;
undefined DAT_101e9a80c;
undefined DAT_101e9a81c;
undefined DAT_101e9a868;
undefined DAT_101e9a86c;
undefined DAT_101e9a87c;
undefined DAT_101e9a8c8;
undefined DAT_101e9a8cc;
undefined DAT_101e9a8dc;
undefined4 DAT_101da1f70;
undefined4 DAT_101dac078;
undefined4 DAT_101db0078;
undefined4 DAT_101db4078;
undefined4 DAT_101db8078;
undefined4 DAT_101e9a990;
char *DAT_101e9a988;
undefined4 DAT_101e9a994;
undefined4 DAT_101e9a998;
undefined4 DAT_101e9a9a0;
char *DAT_101e9a9e8;
undefined4 DAT_101e9a9f0;
undefined4 DAT_101e9a9f4;
undefined4 DAT_101e9a9f8;
undefined4 DAT_101e9aa00;
char *DAT_101e9aa48;
undefined4 DAT_101e9aa50;
undefined4 DAT_101e9aa54;
undefined4 DAT_101e9aa58;
undefined4 DAT_101e9aa60;
undefined4 DAT_101e9aab0;
undefined4 DAT_101e9aac0;
undefined4 DAT_101e9aab4;
undefined4 DAT_101e9aab8;
char *DAT_101e9aaa8;
undefined *DAT_101da1f38;
undefined4 DAT_101da1f50;
undefined4 DAT_101da1f48;
undefined DAT_10186d040;
undefined DAT_101e9a960;
undefined DAT_101e9a964;
undefined DAT_101e9a974;
undefined DAT_101e9a9c0;
undefined DAT_101e9a9c4;
undefined DAT_101e9a9d4;
undefined DAT_101e9aa20;
undefined DAT_101e9aa24;
undefined DAT_101e9aa34;
undefined DAT_101e9aa80;
undefined DAT_101e9aa84;
undefined DAT_101e9aa94;
int DAT_101dabf70;
undefined4 DAT_101dabf74;
undefined8 DAT_101da9f70;
undefined4 DAT_101da9f7c;
undefined4 DAT_101dabf78;
undefined4 DAT_101dabf70;
undefined4 DAT_101da9f78;
float DAT_101da9f78;
undefined4 DAT_101db4080;
undefined DAT_10115db20;
undefined4 DAT_101da1f78;
undefined4 DAT_101da1f80;
undefined4 DAT_101dac080;
undefined4 DAT_101db0080;
undefined UNK_10115ef14;
undefined *DAT_101dbc078;
undefined4 DAT_101dbc090;
undefined4 DAT_101dbc088;
undefined DAT_10186d118;
undefined *PTR_FUN_1014a28b0;
undefined DAT_10115f770;
pointer PTR___mh_execute_header_10115f720;
undefined DAT_10115f750;
undefined *DAT_101d91998;
undefined *DAT_101d919a0;
undefined DAT_10114ce20;
char *DAT_101e9ab08;
undefined4 DAT_101e9ab10;
undefined4 DAT_101e9ab14;
undefined4 DAT_101e9ab18;
undefined4 DAT_101e9ab20;
char *DAT_101e9ab68;
undefined4 DAT_101e9ab70;
undefined4 DAT_101e9ab74;
undefined4 DAT_101e9ab78;
undefined4 DAT_101e9ab80;
char *DAT_101e9abc8;
undefined4 DAT_101e9abd0;
undefined4 DAT_101e9abd4;
undefined4 DAT_101e9abd8;
undefined4 DAT_101e9abe0;
char *DAT_101e9ac28;
undefined4 DAT_101e9ac30;
undefined4 DAT_101e9ac34;
undefined4 DAT_101e9ac38;
undefined4 DAT_101e9ac40;
char *DAT_101e9ac88;
undefined4 DAT_101e9ac90;
undefined4 DAT_101e9ac94;
undefined4 DAT_101e9ac98;
undefined4 DAT_101e9aca0;
char *DAT_101e9ace8;
undefined4 DAT_101e9acf0;
undefined4 DAT_101e9acf4;
undefined4 DAT_101e9acf8;
undefined4 DAT_101e9ad00;
char *DAT_101e9ad48;
undefined4 DAT_101e9ad50;
undefined4 DAT_101e9ad54;
undefined4 DAT_101e9ad58;
undefined4 DAT_101e9ad60;
char *DAT_101e9ada8;
undefined4 DAT_101e9adb0;
undefined4 DAT_101e9adb4;
undefined4 DAT_101e9adb8;
undefined4 DAT_101e9adc0;
char *DAT_101e9ae08;
undefined4 DAT_101e9ae10;
undefined4 DAT_101e9ae14;
undefined4 DAT_101e9ae18;
undefined4 DAT_101e9ae20;
char *DAT_101e9ae68;
undefined4 DAT_101e9ae70;
undefined4 DAT_101e9ae74;
undefined4 DAT_101e9ae78;
undefined4 DAT_101e9ae80;
char *DAT_101e9aec8;
undefined4 DAT_101e9aed0;
undefined4 DAT_101e9aed4;
undefined4 DAT_101e9aed8;
undefined4 DAT_101e9aee0;
char *DAT_101e9af28;
undefined4 DAT_101e9af30;
undefined4 DAT_101e9af34;
undefined4 DAT_101e9af38;
undefined4 DAT_101e9af40;
char *DAT_101e9af88;
undefined4 DAT_101e9af90;
undefined4 DAT_101e9af94;
undefined4 DAT_101e9af98;
undefined4 DAT_101e9afa0;
undefined *DAT_101e9afc0;
undefined4 DAT_101e9afd0;
undefined *DAT_101e9afe0;
undefined4 DAT_101e9afd8;
undefined DAT_10186d258;
undefined DAT_101e9aae0;
undefined DAT_101e9aae4;
undefined DAT_101e9aaf4;
undefined DAT_101e9ab40;
undefined DAT_101e9ab44;
undefined DAT_101e9ab54;
undefined DAT_101e9aba0;
undefined DAT_101e9aba4;
undefined DAT_101e9abb4;
undefined DAT_101e9ac00;
undefined DAT_101e9ac04;
undefined DAT_101e9ac14;
undefined DAT_101e9ac60;
undefined DAT_101e9ac64;
undefined DAT_101e9ac74;
undefined DAT_101e9acc0;
undefined DAT_101e9acc4;
undefined DAT_101e9acd4;
undefined DAT_101e9ad20;
undefined DAT_101e9ad24;
undefined DAT_101e9ad34;
undefined DAT_101e9ad80;
undefined DAT_101e9ad84;
undefined DAT_101e9ad94;
undefined DAT_101e9ade0;
undefined DAT_101e9ade4;
undefined DAT_101e9adf4;
undefined DAT_101e9ae40;
undefined DAT_101e9ae44;
undefined DAT_101e9ae54;
undefined DAT_101e9aea0;
undefined DAT_101e9aea4;
undefined DAT_101e9aeb4;
undefined DAT_101e9af00;
undefined DAT_101e9af04;
undefined DAT_101e9af14;
undefined DAT_101e9af60;
undefined DAT_101e9af64;
undefined DAT_101e9af74;
undefined FUN_1005c6290;
float DAT_101e9ab70;
float DAT_101e9ab74;
float DAT_101e9abd0;
float DAT_101e9abd4;
float DAT_101e9ac30;
float DAT_101e9ac34;
float DAT_101e9ac90;
float DAT_101e9ac94;
float DAT_101e9acf0;
float DAT_101e9acf4;
float DAT_101e9ad50;
float DAT_101e9ad54;
float DAT_101e9adb0;
float DAT_101e9adb4;
float DAT_101e9ae70;
float DAT_101e9ae74;
float DAT_101e9af30;
float DAT_101e9af34;
float DAT_101e9ab10;
float DAT_101e9ab14;
float DAT_101e9ae10;
float DAT_101e9ae14;
float DAT_101e9aed0;
float DAT_101e9aed4;
undefined *DAT_101dbc0b0;
undefined4 DAT_101dbc0c8;
undefined4 DAT_101dbc0c0;
undefined DAT_10186d330;
pointer PTR___mh_execute_header_10115f790;
undefined DAT_10115f7c0;
undefined FUN_1005c8a60;
undefined *DAT_101d919f0;
undefined DAT_10115f7e0;
undefined thunk_FUN_1005d04fc;
undefined *PTR_DAT_1014441d0;
undefined *PTR_FUN_1014a29a8;
long DAT_101dbce18;
long DAT_101dbce28;
short DAT_101dbce20;
undefined FUN_1005d3bc8;
undefined FUN_1005d3be0;
undefined *PTR_FUN_1014a2ae0;
undefined FUN_1005d4db4;
undefined FUN_1005d70c8;
undefined FUN_1005d71b4;
undefined FUN_1005d510c;
undefined4 DAT_101e9b6a0;
undefined DAT_101e9aff8;
undefined FUN_1005d8200;
undefined DAT_1005d98a4;
int DAT_101e9b790;
long DAT_101dbce10;
undefined DAT_101dbce20;
undefined4 DAT_10186d988;
uint DAT_101e9b79c;
undefined4 DAT_101e9b798;
double DAT_101e9b7a0;
uint DAT_101e9b7ac;
undefined4 DAT_101e9b7a8;
double DAT_101e9b7b0;
undefined FUN_1005dbaf0;
undefined DAT_101dbce30;
pointer PTR_FUN_1014a2c10;
undefined DAT_10115f820;
undefined FUN_1005dc4cc;
undefined FUN_1005dd0d0;
undefined DAT_10115f800;
undefined FUN_1005ddd6c;
pointer PTR_FUN_1014a2c30;
undefined4 DAT_101dbce80;
undefined4 DAT_101dbce84;
char *DAT_101dbce78;
undefined *DAT_101dbce88;
undefined *DAT_101dbce90;
undefined *DAT_101dbce98;
undefined *DAT_101dbceb0;
undefined *DAT_101dbcec8;
undefined FUN_1005de688;
undefined4 DAT_101dbce70;
undefined FUN_1005de6b4;
undefined *DAT_101dbced0;
undefined FUN_1005de764;
undefined4 DAT_101dbcf18;
undefined FUN_1005de7bc;
undefined4 DAT_101dbcf1c;
undefined FUN_1005de678;
undefined FUN_1005de824;
undefined DAT_10115f840;
undefined4 DAT_101dbcf8c;
undefined4 DAT_101dbcf78;
undefined4 DAT_101dbcf88;
char *DAT_101dbcf80;
undefined *DAT_101dbcf90;
undefined *DAT_101dbcf98;
undefined *DAT_101dbcfa0;
undefined *DAT_101dbcfb8;
undefined *DAT_101dbcfc0;
undefined4 DAT_101dbd020;
undefined4 DAT_101dbd024;
undefined FUN_1005deb18;
undefined FUN_1005deb44;
undefined FUN_1005debe8;
undefined FUN_1005deb08;
undefined FUN_1005dec40;
undefined DAT_10115f860;
undefined *PTR_FUN_1014a2c50;
undefined FUN_1005dee08;
undefined DAT_10115f880;
undefined4 DAT_101dbd080;
undefined4 DAT_101dbd090;
undefined4 DAT_101dbd094;
char *DAT_101dbd088;
undefined *DAT_101dbd098;
undefined *DAT_101dbd0a0;
undefined *DAT_101dbd0a8;
undefined *DAT_101dbd0c0;
undefined *DAT_101dbd0d8;
undefined *DAT_101dbd0e0;
undefined *DAT_101dbd0e8;
undefined *DAT_101dbd0d0;
undefined4 DAT_101dbd128;
undefined4 DAT_101dbd12c;
undefined FUN_1005df340;
undefined FUN_1005df330;
undefined FUN_1005df374;
undefined FUN_1005df3f8;
undefined FUN_1005df460;
undefined FUN_1005df4c8;
undefined FUN_1005df358;
undefined FUN_1005df4f0;
undefined UNK_10115f8a0;
undefined4 DAT_101e9b7b8;
undefined4 DAT_101e9b7c8;
undefined4 DAT_101e9b860;
undefined4 DAT_101e9b864;
char *DAT_101e9b7c0;
undefined *DAT_101e9b7d0;
undefined *DAT_101e9b7d8;
undefined *DAT_101e9b7e0;
undefined *DAT_101e9b7f8;
undefined *DAT_101e9b7e8;
undefined *DAT_101e9b7f0;
undefined *DAT_101e9b808;
undefined *DAT_101e9b880;
undefined *DAT_101e9b888;
undefined *DAT_101e9b890;
undefined *DAT_101e9b898;
undefined *DAT_101e9b8a0;
undefined *DAT_101e9b8a8;
undefined *DAT_101e9b8b0;
undefined FUN_1005dfb68;
undefined FUN_1005dfbd0;
undefined FUN_1005dfb54;
undefined FUN_1005dfc34;
undefined FUN_1005dfcc8;
undefined FUN_1005dfd10;
undefined FUN_1005dfd48;
undefined FUN_1005dfbb4;
undefined FUN_1005dfd34;
undefined FUN_1005dfd20;
undefined FUN_1005dfd98;
undefined FUN_1005dfd84;
undefined FUN_1005dfdbc;
undefined FUN_1005dfdac;
undefined FUN_1005e0378;
undefined DAT_10115f8c0;
undefined FUN_1005e0254;
undefined FUN_1005e0868;
undefined4 DAT_101dbd19c;
undefined4 DAT_101dbd188;
undefined4 DAT_101dbd198;
char *DAT_101dbd190;
undefined *DAT_101dbd1a0;
undefined *DAT_101dbd1a8;
undefined *DAT_101dbd1b0;
undefined *DAT_101dbd1c8;
undefined *DAT_101dbd1b8;
undefined *DAT_101dbd1c0;
undefined *DAT_101dbd1d0;
undefined *DAT_101dbd1d8;
undefined4 DAT_101dbd230;
undefined4 DAT_101dbd234;
undefined FUN_1005e0b98;
undefined FUN_1005e0ce4;
undefined FUN_1005e0ba8;
undefined FUN_1005e0bc0;
undefined FUN_1005e0bdc;
undefined FUN_1005e0c34;
undefined FUN_1005e0cf8;
undefined FUN_1005e0c98;
undefined UNK_10115f8e0;
undefined DAT_00000110;
undefined *PTR_pluginAlloc_101444180;
undefined *PTR_pluginFree_101444178;
undefined *PTR_pluginLog_101444188;
undefined FUN_1005ddd40;
undefined FUN_1005ddd54;
undefined *PTR_FUN_1014a2c90;
undefined DAT_10115f930;
undefined *PTR_FUN_1014a2e30;
undefined *PTR_FUN_1014a2fd0;
undefined DAT_10115f950;
undefined *PTR_FUN_1014a3158;
undefined DAT_10115f970;
undefined *PTR_DAT_1014441d8;
undefined *PTR_memoryAlloc_101444148;
undefined *PTR_memoryRealloc_101444150;
undefined *PTR_memoryFree_101444140;
undefined FUN_10056c2d0;
undefined FUN_1005706ec;
undefined FUN_100570698;
undefined FUN_10056c3c0;
undefined FUN_1005707c0;
undefined FUN_100570744;
undefined FUN_100570950;
undefined FUN_100570818;
undefined FUN_1005d02e0;
undefined FUN_1005d0298;
undefined FUN_1005d03b0;
undefined FUN_1005d0348;
undefined DAT_10115f990;
undefined thunk_FUN_100571c38;
undefined *PTR_FUN_1014a32e0;
undefined FUN_1005fb624;
undefined FUN_1005fbf44;
undefined DAT_10115fad4;
pointer PTR_DAT_1014a3488;
undefined FUN_1006060a4;
undefined4 DAT_10115fed4;
undefined *PTR____stdinp_101444228;
undefined FUN_10055a584;
undefined FUN_1005ff9c0;
undefined FUN_10060028c;
undefined FUN_10060d704;
undefined DAT_10115ff10;
undefined *PTR_s_FLAC__STREAM_DECODER_SEARCH_FOR__1014a3550;
undefined1 DAT_10115fef0;
undefined1 DAT_10115fef3;
undefined4 DAT_10115fa9c;
undefined4 DAT_10115faa0;
undefined4 DAT_10115faa8;
undefined4 DAT_10115faac;
undefined _fread;
undefined _fclose;
undefined FUN_10060e3d0;
undefined _ftell;
undefined FUN_10060fe94;
undefined FUN_10060ffd0;
undefined8 DAT_101e9b8c0;
undefined DAT_101e9b940;
undefined DAT_101e9ba40;
undefined DAT_101e9bc40;
undefined DAT_101e9c040;
undefined DAT_101e9c840;
undefined DAT_101e9d840;
undefined DAT_101e9f840;
undefined *PTR_DAT_1014a3680;
undefined DAT_10115ff20;
pointer PTR___mh_execute_header_10115ff40;
undefined4 DAT_101ea3840;
undefined4 DAT_101d91910;
undefined DAT_1014a1890;
undefined4 DAT_101ea3ba8;
undefined8 DAT_101ea3858;
undefined8 DAT_101ea3bf0;
undefined8 DAT_101ea3878;
long UNK_101ea3870;
int DAT_10186d988;
char *DAT_101ea3c38;
undefined4 DAT_101ea3c40;
undefined4 DAT_101ea3c44;
undefined4 DAT_101ea3c48;
undefined4 DAT_101ea3c50;
char *DAT_101ea3c98;
undefined4 DAT_101ea3ca0;
undefined4 DAT_101ea3ca4;
undefined4 DAT_101ea3ca8;
undefined4 DAT_101ea3cb0;
char *DAT_101ea3cf8;
undefined4 DAT_101ea3d00;
undefined4 DAT_101ea3d04;
undefined4 DAT_101ea3d08;
undefined4 DAT_101ea3d10;
char *DAT_101ea3d58;
undefined4 DAT_101ea3d60;
undefined4 DAT_101ea3d64;
undefined4 DAT_101ea3d68;
undefined4 DAT_101ea3d70;
char *DAT_101ea3db8;
undefined4 DAT_101ea3dc0;
undefined4 DAT_101ea3dc4;
undefined4 DAT_101ea3dc8;
undefined4 DAT_101ea3dd0;
char *DAT_101ea3e18;
undefined4 DAT_101ea3e20;
undefined4 DAT_101ea3e24;
undefined4 DAT_101ea3e28;
undefined4 DAT_101ea3e30;
char *DAT_101ea3e78;
undefined4 DAT_101ea3e80;
undefined4 DAT_101ea3e84;
undefined4 DAT_101ea3e88;
undefined4 DAT_101ea3e90;
char *DAT_101ea3ed8;
undefined4 DAT_101ea3ee0;
undefined4 DAT_101ea3ee4;
undefined4 DAT_101ea3ee8;
undefined4 DAT_101ea3ef0;
char *DAT_101ea3f38;
undefined4 DAT_101ea3f40;
undefined4 DAT_101ea3f44;
undefined4 DAT_101ea3f48;
undefined4 DAT_101ea3f50;
char *DAT_101ea3f98;
undefined4 DAT_101ea3fa0;
undefined4 DAT_101ea3fa4;
undefined4 DAT_101ea3fa8;
undefined4 DAT_101ea3fb0;
char *DAT_101ea3ff8;
undefined4 DAT_101ea4000;
undefined4 DAT_101ea4004;
undefined4 DAT_101ea4008;
undefined4 DAT_101ea4010;
char *DAT_101ea4058;
undefined4 DAT_101ea4060;
undefined4 DAT_101ea4064;
undefined4 DAT_101ea4068;
undefined4 DAT_101ea4070;
char *DAT_101ea40b8;
undefined4 DAT_101ea40c0;
undefined4 DAT_101ea40c4;
undefined4 DAT_101ea40c8;
undefined4 DAT_101ea40d0;
char *DAT_101ea4118;
undefined4 DAT_101ea4120;
undefined4 DAT_101ea4124;
undefined4 DAT_101ea4128;
undefined4 DAT_101ea4130;
char *DAT_101ea4178;
undefined4 DAT_101ea4180;
undefined4 DAT_101ea4184;
undefined4 DAT_101ea4188;
undefined4 DAT_101ea4190;
char *DAT_101ea41d8;
undefined4 DAT_101ea41e0;
undefined4 DAT_101ea41e4;
undefined4 DAT_101ea41e8;
undefined4 DAT_101ea41f0;
undefined4 DAT_101ea4244;
undefined4 DAT_101ea4250;
undefined4 DAT_101ea4240;
undefined4 DAT_101ea4248;
char *DAT_101ea4238;
undefined *DAT_101dbd298;
undefined4 DAT_101dbd2b0;
undefined4 DAT_101dbd2a8;
undefined DAT_10186da28;
undefined DAT_101ea3c10;
undefined DAT_101ea3c14;
undefined DAT_101ea3c24;
undefined DAT_101ea3c70;
undefined DAT_101ea3c74;
undefined DAT_101ea3c84;
undefined DAT_101ea3cd0;
undefined DAT_101ea3cd4;
undefined DAT_101ea3ce4;
undefined DAT_101ea3d30;
undefined DAT_101ea3d34;
undefined DAT_101ea3d44;
undefined DAT_101ea3d90;
undefined DAT_101ea3d94;
undefined DAT_101ea3da4;
undefined DAT_101ea3df0;
undefined DAT_101ea3df4;
undefined DAT_101ea3e04;
undefined DAT_101ea3e50;
undefined DAT_101ea3e54;
undefined DAT_101ea3e64;
undefined DAT_101ea3eb0;
undefined DAT_101ea3eb4;
undefined DAT_101ea3ec4;
undefined DAT_101ea3f10;
undefined DAT_101ea3f14;
undefined DAT_101ea3f24;
undefined DAT_101ea3f70;
undefined DAT_101ea3f74;
undefined DAT_101ea3f84;
undefined DAT_101ea3fd0;
undefined DAT_101ea3fd4;
undefined DAT_101ea3fe4;
undefined DAT_101ea4030;
undefined DAT_101ea4034;
undefined DAT_101ea4044;
undefined DAT_101ea4090;
undefined DAT_101ea4094;
undefined DAT_101ea40a4;
undefined DAT_101ea40f0;
undefined DAT_101ea40f4;
undefined DAT_101ea4104;
undefined DAT_101ea4150;
undefined DAT_101ea4154;
undefined DAT_101ea4164;
undefined DAT_101ea41b0;
undefined DAT_101ea41b4;
undefined DAT_101ea41c4;
undefined DAT_101ea4210;
undefined DAT_101ea4214;
undefined DAT_101ea4224;
undefined4 DAT_101ea42a0;
char *DAT_101ea4298;
undefined4 DAT_101ea42a4;
undefined4 DAT_101ea42a8;
undefined4 DAT_101ea42b0;
char *DAT_101ea42f8;
undefined4 DAT_101ea4300;
undefined4 DAT_101ea4304;
undefined4 DAT_101ea4308;
undefined4 DAT_101ea4310;
char *DAT_101ea4358;
undefined4 DAT_101ea4360;
undefined4 DAT_101ea4364;
undefined4 DAT_101ea4368;
undefined4 DAT_101ea4370;
char *DAT_101ea43b8;
undefined4 DAT_101ea43c0;
undefined4 DAT_101ea43c4;
undefined4 DAT_101ea43c8;
undefined4 DAT_101ea43d0;
char *DAT_101ea4418;
undefined4 DAT_101ea4420;
undefined4 DAT_101ea4424;
undefined4 DAT_101ea4428;
undefined4 DAT_101ea4430;
char *DAT_101ea4478;
undefined4 DAT_101ea4480;
undefined4 DAT_101ea4484;
undefined4 DAT_101ea4488;
undefined4 DAT_101ea4490;
char *DAT_101ea44d8;
undefined4 DAT_101ea44e0;
undefined4 DAT_101ea44e4;
undefined4 DAT_101ea44e8;
undefined4 DAT_101ea44f0;
undefined4 DAT_101ea4540;
undefined4 DAT_101ea4544;
undefined4 DAT_101ea4548;
undefined4 DAT_101ea4550;
char *DAT_101ea4538;
undefined *DAT_101ea4570;
undefined4 DAT_101ea4588;
undefined4 DAT_101ea4580;
undefined DAT_10186db40;
undefined DAT_101ea4270;
undefined DAT_101ea4274;
undefined DAT_101ea4284;
undefined DAT_101ea42d0;
undefined DAT_101ea42d4;
undefined DAT_101ea42e4;
undefined DAT_101ea4330;
undefined DAT_101ea4334;
undefined DAT_101ea4344;
undefined DAT_101ea4390;
undefined DAT_101ea4394;
undefined DAT_101ea43a4;
undefined DAT_101ea43f0;
undefined DAT_101ea43f4;
undefined DAT_101ea4404;
undefined DAT_101ea4450;
undefined DAT_101ea4454;
undefined DAT_101ea4464;
undefined DAT_101ea44b0;
undefined DAT_101ea44b4;
undefined DAT_101ea44c4;
undefined DAT_101ea4510;
undefined DAT_101ea4514;
undefined DAT_101ea4524;
undefined DAT_10115ff68;
char *DAT_101ea45a8;
undefined4 DAT_101ea45b0;
undefined4 DAT_101ea45b8;
undefined4 DAT_101ea4600;
undefined thunk_FUN_10061b15c;
undefined4 DAT_101ea4604;
undefined *DAT_101ea45c0;
undefined thunk_FUN_10061b5dc;
undefined *DAT_101ea45c8;
undefined thunk_FUN_10061b528;
undefined *DAT_101ea45d0;
undefined *DAT_101ea45e0;
undefined thunk_FUN_10061af9c;
undefined *PTR_LOOP_10186dc20;
pointer PTR_LOOP_10186dc18;
undefined thunk_FUN_10061b7a4;
undefined FUN_10061b884;
undefined FUN_10061b900;
undefined4 DAT_101ea46b0;
undefined4 DAT_101ea46b4;
undefined4 DAT_101ea46b8;
undefined4 DAT_101ea46c0;
char *DAT_101ea46a8;
undefined *DAT_101ea46e0;
undefined4 DAT_101ea46f8;
undefined4 DAT_101ea46f0;
undefined DAT_10186dc38;
undefined DAT_101ea4680;
undefined DAT_101ea4684;
undefined DAT_101ea4694;
float DAT_10186dd10;
char *DAT_101ea4718;
undefined4 DAT_101ea4720;
undefined4 DAT_101ea4728;
undefined4 DAT_101ea4770;
undefined4 DAT_101ea4774;
undefined *DAT_101ea4730;
undefined *DAT_101ea4738;
undefined *DAT_101ea4740;
undefined *DAT_101ea4750;
undefined *DAT_101ea4760;
undefined *DAT_101ea4768;
undefined *DAT_101ea4790;
undefined *DAT_101ea4798;
undefined *DAT_101ea47d0;
undefined FUN_10061cbf8;
undefined thunk_FUN_10061da94;
undefined FUN_10061cc70;
undefined thunk_FUN_10061d208;
undefined FUN_10061cc8c;
undefined thunk_FUN_10061dd6c;
undefined FUN_10061cbf0;
undefined FUN_10061ccfc;
undefined FUN_10061ccd8;
undefined DAT_101160020;
undefined DAT_101160030;
undefined DAT_101160070;
undefined DAT_10116005c;
undefined DAT_1011600a8;
undefined FUN_10061fe18;
undefined DAT_1011605ac;
undefined DAT_1011601b0;
undefined4 DAT_10186f418;
pointer PTR_DAT_101872518;
pointer PTR_DAT_101872520;
long DAT_101ea47f0;
int DAT_101ea47f8;
undefined FUN_100623cbc;
char *DAT_101ea4800;
undefined FUN_100623d40;
undefined4 DAT_101ea4808;
undefined4 DAT_101ea4810;
undefined *DAT_101ea4818;
undefined thunk_FUN_100624a20;
undefined *DAT_101ea4820;
undefined FUN_100623cb4;
undefined *DAT_101ea4828;
undefined FUN_100623d10;
undefined *DAT_101ea4838;
undefined thunk_FUN_100624bb4;
undefined4 DAT_101ea4858;
undefined4 DAT_101ea485c;
undefined4 DAT_101ea486c;
undefined *DAT_101ea48c0;
undefined *DAT_101ea48c8;
pointer PTR_LOOP_101872528;
undefined8 *DAT_101ea47f0;
uint DAT_101ea47f8;
undefined *PTR_LOOP_101872530;
pointer PTR_DAT_1014a36c0;
undefined DAT_1014a36c8;
undefined4 DAT_1014a36cc;
undefined DAT_1014a36d0;
undefined DAT_1014a36d8;
undefined DAT_1014a36dc;
undefined4 DAT_10115dad0;
undefined DAT_10115dae0;
undefined DAT_10115daf0;
undefined UNK_10117d8f0;
undefined UNK_10117d910;
undefined4 DAT_101ea48d8;
char DAT_101dbd2d4;
undefined8 DAT_101ea48e0;
undefined4 DAT_101ea48f8;
undefined FUN_10062cec4;
undefined4 DAT_101ea48f0;
undefined *DAT_101ea4900;
undefined DAT_101872560;
undefined4 DAT_101ea4948;
char *DAT_101ea4940;
undefined4 DAT_101ea494c;
undefined4 DAT_101ea4950;
undefined4 DAT_101ea4958;
char *DAT_101ea49a0;
undefined4 DAT_101ea49a8;
undefined4 DAT_101ea49ac;
undefined4 DAT_101ea49b0;
undefined4 DAT_101ea49b8;
char *DAT_101ea4a00;
undefined4 DAT_101ea4a08;
undefined4 DAT_101ea4a0c;
undefined4 DAT_101ea4a10;
undefined4 DAT_101ea4a18;
undefined4 DAT_101ea4a38;
undefined4 DAT_101ea4a68;
undefined8 DAT_101ea4a70;
char *DAT_101ea4a60;
undefined *DAT_101ea4a98;
undefined4 DAT_101ea4ab0;
undefined4 DAT_101ea4aa8;
undefined DAT_101872658;
undefined DAT_101ea4918;
undefined DAT_101ea491c;
undefined DAT_101ea492c;
undefined DAT_101ea4978;
undefined DAT_101ea497c;
undefined DAT_101ea498c;
undefined DAT_101ea49d8;
undefined DAT_101ea49dc;
undefined DAT_101ea49ec;
undefined DAT_101ea4a3c;
undefined DAT_101ea4a4c;
undefined DAT_10117d930;
char DAT_101dbd2d5;
undefined4 DAT_101ea4ad0;
char *DAT_101ea4af8;
undefined4 DAT_101ea4b00;
undefined4 DAT_101ea4b04;
undefined4 DAT_101ea4b08;
undefined4 DAT_101ea4b0c;
undefined8 DAT_101ea4b10;
char *DAT_101ea4b58;
undefined4 DAT_101ea4b60;
undefined4 DAT_101ea4b64;
undefined4 DAT_101ea4b68;
undefined4 DAT_101ea4b70;
char *DAT_101ea4bb8;
undefined4 DAT_101ea4bc0;
undefined4 DAT_101ea4bc4;
undefined4 DAT_101ea4bc8;
undefined4 DAT_101ea4bd0;
char *DAT_101ea4c18;
undefined4 DAT_101ea4c20;
undefined4 DAT_101ea4c24;
undefined4 DAT_101ea4c28;
undefined4 DAT_101ea4c30;
char *DAT_101ea4c78;
undefined4 DAT_101ea4c80;
undefined4 DAT_101ea4c84;
undefined4 DAT_101ea4c88;
undefined4 DAT_101ea4c90;
char *DAT_101ea4cd8;
undefined4 DAT_101ea4ce0;
undefined4 DAT_101ea4ce4;
undefined4 DAT_101ea4ce8;
undefined4 DAT_101ea4cf0;
undefined4 DAT_101ea4d10;
char *DAT_101ea4d38;
undefined4 DAT_101ea4d40;
undefined4 DAT_101ea4d44;
undefined4 DAT_101ea4d48;
undefined4 DAT_101ea4d4c;
undefined8 DAT_101ea4d50;
char *DAT_101ea4d98;
undefined4 DAT_101ea4da0;
undefined4 DAT_101ea4da4;
undefined4 DAT_101ea4da8;
undefined4 DAT_101ea4db0;
char *DAT_101ea4df8;
undefined4 DAT_101ea4e00;
undefined4 DAT_101ea4e04;
undefined4 DAT_101ea4e08;
undefined4 DAT_101ea4e10;
undefined4 DAT_101ea4e30;
char *DAT_101ea4e58;
undefined4 DAT_101ea4e60;
undefined4 DAT_101ea4e64;
undefined4 DAT_101ea4e68;
undefined4 DAT_101ea4e6c;
undefined8 DAT_101ea4e70;
undefined4 DAT_101ea4e90;
char *DAT_101ea4eb8;
undefined4 DAT_101ea4ec0;
undefined4 DAT_101ea4ef0;
char *DAT_101ea4f18;
undefined4 DAT_101ea4f20;
undefined4 DAT_101ea4f24;
undefined4 DAT_101ea4f28;
undefined4 DAT_101ea4f2c;
undefined8 DAT_101ea4f30;
char *DAT_101ea4f78;
undefined4 DAT_101ea4f80;
undefined4 DAT_101ea4f84;
undefined4 DAT_101ea4f88;
undefined4 DAT_101ea4f90;
char *DAT_101ea4fd8;
undefined4 DAT_101ea4fe0;
undefined4 DAT_101ea4fe4;
undefined4 DAT_101ea4fe8;
undefined4 DAT_101ea4ff0;
undefined4 DAT_101ea5010;
char *DAT_101ea5038;
undefined4 DAT_101ea5040;
undefined4 DAT_101ea5044;
undefined4 DAT_101ea5048;
undefined4 DAT_101ea504c;
undefined8 DAT_101ea5050;
char *DAT_101ea5098;
undefined4 DAT_101ea50a0;
undefined4 DAT_101ea50a4;
undefined4 DAT_101ea50a8;
undefined4 DAT_101ea50b0;
char *DAT_101ea50f8;
undefined4 DAT_101ea5100;
undefined4 DAT_101ea5104;
undefined4 DAT_101ea5108;
undefined4 DAT_101ea5110;
char *DAT_101ea5158;
undefined4 DAT_101ea5160;
undefined4 DAT_101ea5164;
undefined4 DAT_101ea5168;
undefined4 DAT_101ea5170;
undefined4 DAT_101ea5190;
char *DAT_101ea51b8;
undefined4 DAT_101ea51c0;
undefined4 DAT_101ea51c4;
undefined4 DAT_101ea51c8;
undefined4 DAT_101ea51cc;
undefined8 DAT_101ea51d0;
undefined4 DAT_101ea51f0;
char *DAT_101ea5218;
undefined4 DAT_101ea5220;
undefined4 DAT_101ea5250;
undefined4 DAT_101ea5280;
undefined4 DAT_101ea5284;
undefined4 DAT_101ea5288;
undefined4 DAT_101ea528c;
undefined8 DAT_101ea5290;
char *DAT_101ea5278;
undefined8 DAT_101ea52b0;
undefined4 DAT_101ea52c8;
undefined4 DAT_101ea52c0;
undefined *DAT_101ea52d0;
undefined FUN_10062fa40;
undefined DAT_101872730;
undefined DAT_101ea4ad4;
undefined DAT_101ea4ae4;
undefined DAT_101ea4b30;
undefined DAT_101ea4b34;
undefined DAT_101ea4b44;
undefined DAT_101ea4b90;
undefined DAT_101ea4b94;
undefined DAT_101ea4ba4;
undefined DAT_101ea4bf0;
undefined DAT_101ea4bf4;
undefined DAT_101ea4c04;
undefined DAT_101ea4c50;
undefined DAT_101ea4c54;
undefined DAT_101ea4c64;
undefined DAT_101ea4cb0;
undefined DAT_101ea4cb4;
undefined DAT_101ea4cc4;
undefined DAT_101ea4d14;
undefined DAT_101ea4d24;
undefined DAT_101ea4d70;
undefined DAT_101ea4d74;
undefined DAT_101ea4d84;
undefined DAT_101ea4dd0;
undefined DAT_101ea4dd4;
undefined DAT_101ea4de4;
undefined DAT_101ea4e34;
undefined DAT_101ea4e44;
undefined DAT_101ea4e94;
undefined DAT_101ea4ea4;
undefined DAT_101ea4ef4;
undefined DAT_101ea4f04;
undefined DAT_101ea4f50;
undefined DAT_101ea4f54;
undefined DAT_101ea4f64;
undefined DAT_101ea4fb0;
undefined DAT_101ea4fb4;
undefined DAT_101ea4fc4;
undefined DAT_101ea5014;
undefined DAT_101ea5024;
undefined DAT_101ea5070;
undefined DAT_101ea5074;
undefined DAT_101ea5084;
undefined DAT_101ea50d0;
undefined DAT_101ea50d4;
undefined DAT_101ea50e4;
undefined DAT_101ea5130;
undefined DAT_101ea5134;
undefined DAT_101ea5144;
undefined DAT_101ea5194;
undefined DAT_101ea51a4;
undefined DAT_101ea51f4;
undefined DAT_101ea5204;
undefined DAT_101ea5254;
undefined DAT_101ea5264;
undefined DAT_10117d940;
undefined4 DAT_101ea52e8;
char *DAT_101ea5310;
undefined4 DAT_101ea5318;
undefined4 DAT_101ea531c;
undefined4 DAT_101ea5320;
undefined4 DAT_101ea5324;
undefined8 DAT_101ea5328;
undefined4 DAT_101ea5348;
char *DAT_101ea5370;
undefined4 DAT_101ea5378;
undefined4 DAT_101ea537c;
undefined FUN_100631b30;
undefined4 DAT_101ea5380;
undefined4 DAT_101ea5384;
undefined8 DAT_101ea5388;
undefined *DAT_101ea53a8;
undefined4 DAT_101ea53c0;
undefined4 DAT_101ea53b8;
undefined *DAT_101ea53c8;
undefined DAT_1018728b0;
undefined DAT_101ea52ec;
undefined DAT_101ea52fc;
undefined DAT_101ea534c;
undefined DAT_101ea535c;
undefined4 DAT_101ea53e0;
char *DAT_101ea5408;
undefined4 DAT_101ea5410;
undefined4 DAT_101ea5414;
undefined4 DAT_101ea5418;
undefined4 DAT_101ea541c;
undefined8 DAT_101ea5420;
char *DAT_101ea5468;
undefined4 DAT_101ea5470;
undefined4 DAT_101ea5474;
undefined4 DAT_101ea5478;
undefined4 DAT_101ea5480;
undefined4 DAT_101ea54a0;
char *DAT_101ea54c8;
undefined4 DAT_101ea54d0;
undefined *DAT_101ea5500;
undefined4 DAT_101ea5518;
undefined4 DAT_101ea5510;
undefined DAT_101872998;
undefined DAT_101ea53e4;
undefined DAT_101ea53f4;
undefined DAT_101ea5440;
undefined DAT_101ea5444;
undefined DAT_101ea5454;
undefined DAT_101ea54a4;
undefined DAT_101ea54b4;
char *DAT_101ea5560;
undefined4 DAT_101ea5568;
undefined4 DAT_101ea556c;
undefined4 DAT_101ea5570;
undefined4 DAT_101ea5578;
char *DAT_101ea55c0;
undefined4 DAT_101ea55c8;
undefined4 DAT_101ea55cc;
undefined4 DAT_101ea55d0;
undefined4 DAT_101ea55d8;
char *DAT_101ea5620;
undefined4 DAT_101ea5628;
undefined4 DAT_101ea562c;
undefined4 DAT_101ea5630;
undefined4 DAT_101ea5638;
char *DAT_101ea5680;
undefined4 DAT_101ea5688;
undefined4 DAT_101ea568c;
undefined4 DAT_101ea5690;
undefined4 DAT_101ea5698;
char *DAT_101ea56e0;
undefined4 DAT_101ea56e8;
undefined4 DAT_101ea56ec;
undefined4 DAT_101ea56f0;
undefined4 DAT_101ea56f8;
undefined4 DAT_101ea5718;
undefined4 DAT_101ea5748;
undefined4 DAT_101ea5750;
undefined4 DAT_101ea5754;
undefined8 DAT_101ea5758;
undefined4 DAT_101ea574c;
char *DAT_101ea5740;
undefined *DAT_101ea5778;
undefined4 DAT_101ea5790;
undefined4 DAT_101ea5788;
undefined DAT_101872ab8;
undefined DAT_101ea5538;
undefined DAT_101ea553c;
undefined DAT_101ea554c;
undefined DAT_101ea5598;
undefined DAT_101ea559c;
undefined DAT_101ea55ac;
undefined DAT_101ea55f8;
undefined DAT_101ea55fc;
undefined DAT_101ea560c;
undefined DAT_101ea5658;
undefined DAT_101ea565c;
undefined DAT_101ea566c;
undefined DAT_101ea56b8;
undefined DAT_101ea56bc;
undefined DAT_101ea56cc;
undefined DAT_101ea571c;
undefined DAT_101ea572c;
undefined *DAT_101d919e0;
undefined *DAT_101d919d8;
undefined *DAT_101d919e8;
undefined *DAT_101d91918;
undefined *DAT_101d919a8;
undefined *DAT_101d919c0;
undefined *DAT_101d919c8;
undefined *DAT_101d919b0;
undefined *DAT_101d919b8;
undefined *DAT_101d919d0;
undefined8 DAT_101e9b6d0;
undefined8 DAT_101e9b6e0;
undefined FUN_1005d81dc;
undefined *DAT_101e9b780;
undefined4 DAT_101e9b6cc;
undefined8 *UNK_101e9b6d8;
undefined4 DAT_101dbc0f8;
undefined1 DAT_101dbc0fc;
undefined4 DAT_101dbc100;
undefined4 DAT_101dbc104;
undefined4 DAT_101dbc108;
undefined8 DAT_101dbc140;
undefined DAT_101dbc468;
undefined8 DAT_101dbc478;
undefined8 DAT_101dbc818;
undefined4 DAT_101dbc820;
undefined1 DAT_101dbc824;
undefined4 DAT_101dbc828;
undefined4 DAT_101dbc82c;
undefined4 DAT_101dbc830;
undefined8 DAT_101dbc850;
undefined4 DAT_101dbc858;
undefined1 DAT_101dbc85c;
undefined4 DAT_101dbc860;
undefined4 DAT_101dbc864;
undefined4 DAT_101dbc868;
undefined8 DAT_101dbc888;
undefined4 DAT_101dbc890;
undefined1 DAT_101dbc894;
undefined4 DAT_101dbc898;
undefined4 DAT_101dbc89c;
undefined4 DAT_101dbc8a0;
undefined8 DAT_101dbc8c0;
undefined4 DAT_101dbc8c8;
undefined1 DAT_101dbc8cc;
undefined4 DAT_101dbc8d0;
undefined4 DAT_101dbc8d4;
undefined4 DAT_101dbc8d8;
undefined8 DAT_101dbc8f8;
undefined4 DAT_101dbc900;
undefined1 DAT_101dbc904;
undefined4 DAT_101dbc908;
undefined4 DAT_101dbc90c;
undefined4 DAT_101dbc910;
undefined8 DAT_101dbc930;
undefined4 DAT_101dbc938;
undefined1 DAT_101dbc93c;
undefined4 DAT_101dbc940;
undefined4 DAT_101dbc944;
undefined4 DAT_101dbc948;
undefined8 DAT_101dbc968;
undefined4 DAT_101dbc970;
undefined1 DAT_101dbc974;
undefined4 DAT_101dbc978;
undefined4 DAT_101dbc97c;
undefined4 DAT_101dbc980;
undefined8 DAT_101dbc9a0;
undefined4 DAT_101dbc9a8;
undefined1 DAT_101dbc9ac;
undefined4 DAT_101dbc9b0;
undefined4 DAT_101dbc9b4;
undefined4 DAT_101dbc9b8;
undefined8 DAT_101dbc9d8;
undefined4 DAT_101dbc9e0;
undefined1 DAT_101dbc9e4;
undefined4 DAT_101dbc9e8;
undefined4 DAT_101dbc9ec;
undefined4 DAT_101dbc9f0;
undefined8 DAT_101dbca10;
undefined4 DAT_101dbca18;
undefined1 DAT_101dbca1c;
undefined4 DAT_101dbca20;
undefined4 DAT_101dbca24;
undefined4 DAT_101dbca28;
undefined8 DAT_101dbca48;
undefined4 DAT_101dbca50;
undefined1 DAT_101dbca54;
undefined4 DAT_101dbca58;
undefined4 DAT_101dbca5c;
undefined4 DAT_101dbca60;
undefined8 DAT_101dbca80;
undefined4 DAT_101dbca88;
undefined1 DAT_101dbca8c;
undefined4 DAT_101dbca90;
undefined4 DAT_101dbca94;
undefined4 DAT_101dbca98;
undefined8 DAT_101dbcab8;
undefined4 DAT_101dbcac0;
undefined1 DAT_101dbcac4;
undefined4 DAT_101dbcac8;
undefined4 DAT_101dbcacc;
undefined4 DAT_101dbcad0;
undefined8 DAT_101dbcaf0;
undefined4 DAT_101dbcaf8;
undefined1 DAT_101dbcafc;
undefined4 DAT_101dbcb00;
undefined4 DAT_101dbcb04;
undefined4 DAT_101dbcb08;
undefined8 DAT_101dbcb28;
undefined4 DAT_101dbcb30;
undefined1 DAT_101dbcb34;
undefined4 DAT_101dbcb38;
undefined4 DAT_101dbcb3c;
undefined4 DAT_101dbcb40;
undefined8 DAT_101dbcb60;
undefined4 DAT_101dbcb68;
undefined1 DAT_101dbcb6c;
undefined4 DAT_101dbcb70;
undefined4 DAT_101dbcb74;
undefined4 DAT_101dbcb78;
undefined DAT_101dbc150;
undefined DAT_101dbc488;
undefined *UNK_101dbc138;
undefined *UNK_101dbc470;
undefined *PTR_FUN_1014a4d28;
undefined *PTR_FUN_1014a4d78;
undefined8 DAT_101dbd2f8;
undefined DAT_101dbd2f8;
pointer PTR_FUN_1014a4dc0;
undefined *PTR_thunk_FUN_10063eeb4_1014a4de0;
undefined *PTR_thunk_FUN_10063eeb4_1014a4e28;
undefined *PTR_thunk_FUN_10063eeb4_1014a4e70;
undefined *PTR_thunk_FUN_10063f1ec_1014a4eb8;
undefined *PTR_thunk_FUN_10063f598_1014a4f00;
undefined *PTR_thunk_FUN_10063eeb4_1014a4f48;
undefined *PTR_thunk_FUN_10063eeb4_1014a4f90;
undefined *PTR_thunk_FUN_10063eeb4_1014a4fd8;
undefined *PTR_thunk_FUN_10063eeb4_1014a5020;
undefined *PTR_thunk_FUN_10063eeb4_1014a5068;
undefined *PTR_thunk_FUN_10063eeb4_1014a50f8;
undefined *PTR_thunk_FUN_10063eeb4_1014a5188;
undefined *PTR_thunk_FUN_10063eeb4_1014a51d0;
undefined *PTR_thunk_FUN_10063eeb4_1014a5218;
undefined *PTR_thunk_FUN_10063eeb4_1014a5260;
undefined *PTR_thunk_FUN_10063eeb4_1014a50b0;
undefined *PTR_thunk_FUN_10063eeb4_1014a5140;
undefined *PTR_thunk_FUN_10063eeb4_1014a5458;
undefined8 DAT_101dbd2e0;
undefined8 DAT_101dbd2e8;
long *DAT_101dbd2e8;
long *DAT_101dbd2f0;
long DAT_101dbd2e0;
long *DAT_101dbd2f8;
undefined8 DAT_101ea57b0;
undefined8 DAT_101ea57b8;
undefined DAT_101dbd300;
undefined FUN_1006417f8;
undefined FUN_100641888;
undefined1 DAT_101ea58b0;
undefined2 DAT_101ea58b2;
undefined2 DAT_101ea58b4;
undefined8 *DAT_101dc0d20;
undefined4 DAT_101dc0d28;
undefined *PTR_DAT_1014a5508;
undefined *PTR_FUN_1014a54e8;
ulong DAT_101ea58b8;
ulong DAT_101ea58c0;
ulong DAT_101ea58c8;
undefined *PTR_thunk_FUN_100641cdc_1014a54a0;
undefined8 DAT_101ea58b8;
undefined8 DAT_101ea58c0;
undefined8 DAT_101ea58c8;
undefined8 DAT_101dbd440;
undefined DAT_101dbd440;
long DAT_101dbd448;
undefined1 DAT_101ea58d0;
undefined2 DAT_101ea58d2;
undefined2 DAT_101ea58d4;
undefined8 DAT_101dbd448;
undefined FUN_100642140;
long DAT_101ea58d8;
undefined8 DAT_101ea58d8;
char DAT_101dbd2d8;
undefined *PTR_FUN_1014a5630;
undefined *PTR_FUN_1014a5690;
undefined *PTR_FUN_1014a0f18;
undefined *PTR_FUN_1014a56b8;
int DAT_101dbd4dc;
undefined4 DAT_101dbd490;
undefined4 DAT_101dbd49c;
undefined4 DAT_101dbd4a8;
undefined4 DAT_101dbd4cc;
undefined4 DAT_101dbd4d0;
undefined4 DAT_101dbd4d4;
undefined4 DAT_101dbd4d8;
undefined4 DAT_101dbd4dc;
undefined4 DAT_101dbd4e0;
undefined4 DAT_101dbd4e4;
undefined4 DAT_101dbd4e8;
undefined4 DAT_101dbd4ec;
pointer PTR_thunk_FUN_100648148_1014a56e0;
byte DAT_101872b90;
undefined4 DAT_10117d974;
undefined FUN_10064a24c;
undefined FUN_10064a288;
undefined FUN_100649f20;
undefined8 DAT_101ea58e0;
long DAT_101ea58e0;
undefined *PTR_FUN_1014a5700;
undefined *PTR____cxa_pure_virtual_10182e8c0;
undefined *PTR_FUN_1014a5760;
undefined *PTR_thunk_FUN_10064aa2c_1014a5818;
int DAT_101dbd4f8;
undefined8 DAT_101dbd4f0;
int DAT_101dbd4fc;
undefined *PTR_thunk_FUN_10064cba4_1014a58f0;
uint DAT_101dbd4f8;
uint DAT_101dbd4fc;
undefined *PTR_FUN_1014a59a8;
undefined1 DAT_101ea58e8;
undefined2 DAT_101ea58ea;
undefined2 DAT_101ea58ec;
undefined DAT_101dbd4f8;
undefined8 DAT_101dbd500;
undefined *PTR_FUN_1014a5a08;
undefined8 *DAT_101dbd508;
pointer PTR_FUN_1014a5a70;
long *DAT_101dbd508;
long DAT_101dbd508;
undefined *PTR_thunk_FUN_10064aa2c_1014a5a90;
undefined *PTR_thunk_FUN_10064aa2c_1014a5b68;
undefined *PTR_FUN_1014a5c40;
undefined DAT_10117d994;
undefined DAT_10117d9b4;
undefined DAT_10117d980;
undefined *PTR_thunk_FUN_10064221c_1014a5f38;
undefined *PTR_FUN_1014a6038;
undefined *PTR_FUN_1014a61a0;
undefined *PTR_thunk_FUN_10064e2bc_1014a61e8;
undefined *PTR_FUN_1014a6348;
undefined FUN_10064fc2c;
undefined *PTR_thunk_FUN_10064e2bc_1014a6390;
undefined1 DAT_101ea58f8;
undefined8 DAT_101ea58f0;
undefined *PTR_FUN_1014a6628;
undefined *PTR_thunk_FUN_10064e2bc_1014a6778;
undefined *PTR_FUN_1014a68d8;
undefined *PTR_thunk_FUN_10064e2bc_1014a6920;
undefined *PTR_thunk_FUN_100651068_1014a6bf0;
undefined *PTR_FUN_1014a6d68;
undefined DAT_10117d9f0;
undefined4 DAT_101ea5900;
int DAT_101ea5904;
int DAT_101ea5908;
int DAT_101ea590c;
undefined4 DAT_101ea5910;
int DAT_101ea5914;
int DAT_101ea5918;
int DAT_101ea591c;
undefined *PTR_FUN_1014a72b0;
undefined *PTR_FUN_1014a7410;
undefined *PTR_FUN_1014a7458;
undefined *PTR_FUN_1014a75b8;
undefined *PTR_FUN_1014a7600;
undefined *PTR_FUN_1014a7760;
undefined *PTR_thunk_FUN_10064e2bc_1014a7958;
undefined FUN_10065562c;
undefined *PTR_thunk_FUN_10065541c_1014a7e40;
undefined *PTR_thunk_FUN_10064221c_1014a80d8;
undefined4 DAT_10117da14;
undefined4 DAT_10117db54;
undefined FUN_1006585e4;
undefined *PTR_FUN_1014a81d8;
undefined DAT_101ea5920;
undefined FUN_1004dfcd4;
undefined8 *DAT_101ea5960;
undefined8 DAT_101ea5960;
long DAT_101ea5960;
undefined *PTR_FUN_1014a8248;
undefined FUN_100658da4;
undefined *PTR_thunk_FUN_100658ff8_1014a82b8;
long DAT_101ea5980;
undefined *PTR_FUN_1014a8328;
undefined FUN_100659398;
undefined *PTR_thunk_FUN_10065a0d4_1014a8398;
undefined DAT_101ea5968;
undefined thunk_FUN_1004df820;
void *DAT_101dbd520;
undefined *PTR_thunk_FUN_10065b494_1014a8408;
long DAT_101dbd520;
undefined FUN_10065bb38;
undefined FUN_10065c4d0;
undefined8 DAT_101dbd520;
undefined FUN_10065c5b4;
undefined DAT_101dbd5f0;
int DAT_101dbd5f4;
undefined1 DAT_101dbd530;
undefined DAT_101dbd534;
undefined DAT_101dbd538;
undefined DAT_101dbd540;
undefined DAT_101dbd550;
undefined DAT_101dbd558;
undefined DAT_101dbd560;
undefined DAT_101dbd568;
undefined DAT_101dbd570;
undefined DAT_101dbd578;
undefined DAT_101dbd580;
undefined DAT_101dbd584;
undefined DAT_101dbd53c;
pointer PTR_thunk_FUN_10065c75c_1014a8438;
undefined thunk_FUN_10065c31c;
undefined thunk_FUN_10065c258;
undefined FUN_10065c794;
undefined8 *DAT_101dbd520;
undefined8 DAT_101dbd528;
undefined4 DAT_101ea5988;
undefined2 DAT_101dbd5f0;
undefined4 DAT_101dbd5f4;
undefined FUN_10065bb10;
undefined DAT_10117dba0;
undefined DAT_10117dfa0;
undefined DAT_10117e3a0;
undefined DAT_10117e7a0;
undefined FUN_10065f30c;
undefined FUN_10065f314;
undefined2 DAT_10117fbe6;
undefined DAT_10117fc0c;
undefined DAT_10118040c;
undefined DAT_10118028a;
undefined DAT_1011802c8;
undefined UNK_101180508;
undefined UNK_101180548;
undefined8 DAT_101ea5990;
undefined DAT_101dbd600;
long DAT_101ea5990;
uint DAT_101ea5998;
undefined *PTR_FUN_1014a8458;
undefined *PTR_FUN_1014a84b8;
uint DAT_101dbe3c0;
undefined4 DAT_101dbe3c4;
undefined8 DAT_101dbe3c8;
undefined8 DAT_101dbe3d0;
undefined DAT_101dbd740;
undefined FUN_100660090;
undefined FUN_1006601c0;
undefined *PTR_FUN_1014a8598;
undefined FUN_100660d68;
undefined DAT_1011805d4;
undefined DAT_1011805e4;
pointer PTR_FUN_1014a8578;
undefined *PTR_FUN_1014a8518;
long DAT_101dc0d20;
undefined8 DAT_101dc1c68;
undefined4 DAT_101dbe3d8;
undefined8 DAT_101dbe3e4;
undefined8 DAT_101dbe3dc;
undefined FUN_100661570;
undefined4 DAT_101dbe3ec;
undefined8 DAT_101dbe450;
undefined4 DAT_101dbe458;
undefined8 DAT_101dbe460;
undefined * *DAT_101dbe468;
undefined8 DAT_101dbe470;
undefined8 DAT_101dbe478;
undefined8 DAT_101dbe490;
undefined * *DAT_101dbe498;
undefined * *DAT_101dbe480;
undefined8 DAT_101dbe488;
undefined8 DAT_101dbe4a0;
undefined8 DAT_101dbe4a8;
undefined8 DAT_101dbe3f0;
undefined *PTR_FUN_1014a8680;
undefined *PTR_FUN_1014a8710;
undefined *PTR_FUN_1014a8788;
undefined *PTR_thunk_FUN_10066311c_1014a85c0;
undefined *PTR_FUN_1014a8620;
undefined8 *DAT_101ea59a0;
undefined *PTR_FUN_1014a8648;
long DAT_101ea59a0;
undefined8 DAT_101ea59a0;
undefined DAT_101180600;
undefined UNK_101180610;
undefined DAT_101180634;
undefined DAT_101180640;
undefined DAT_10118064c;
pointer PTR_s_OmniLight.Position_101873208;
undefined *PTR_FUN_1014a86c8;
undefined DAT_101180680;
undefined DAT_1011806a0;
undefined8 DAT_1011806f8;
undefined8 DAT_101180788;
long DAT_101ea59a8;
undefined8 DAT_101ea59a8;
undefined FUN_1006645f0;
undefined FUN_100664558;
undefined FUN_100664514;
undefined FUN_100664568;
undefined FUN_1006645ac;
undefined FUN_10066461c;
undefined FUN_100664660;
undefined *PTR_FUN_1014a87d0;
undefined *PTR_FUN_1014a87f8;
undefined *PTR_FUN_1014a8820;
undefined *PTR_FUN_1014a8848;
undefined *PTR_FUN_1014a8870;
undefined DAT_101dbe4b0;
int DAT_101dbe5f0;
undefined8 DAT_101dbe5f8;
undefined4 DAT_101dc0608;
uint DAT_101dc0600;
undefined4 DAT_101dc0604;
undefined1 DAT_101dc0710;
undefined8 DAT_101dbe600;
undefined DAT_101dc060c;
undefined FUN_10066a98c;
char DAT_101dbe5f4;
undefined1 DAT_101dbe5f4;
undefined FUN_10066ab60;
long DAT_101ea59b0;
long *DAT_101ea59b0;
undefined8 DAT_101ea59b0;
byte DAT_101dc0718;
undefined *PTR_DAT_1014a8900;
undefined *PTR_FUN_1014a88e0;
ulong DAT_101ea59b8;
ulong DAT_101ea59c0;
ulong DAT_101ea59c8;
undefined1 DAT_101dc0718;
undefined *PTR_thunk_FUN_10066b1b8_1014a8898;
undefined8 DAT_101ea59b8;
undefined8 DAT_101ea59c0;
undefined8 DAT_101ea59c8;
undefined DAT_10119e200;
undefined DAT_101181ac0;
undefined DAT_101181280;
undefined DAT_1011a3400;
undefined DAT_10119f000;
undefined DAT_101181290;
undefined DAT_101198400;
undefined DAT_10119c900;
undefined DAT_1011812a0;
undefined DAT_10119fe00;
undefined DAT_101189200;
undefined DAT_1011a3000;
undefined DAT_101181b00;
undefined DAT_1011812b0;
undefined DAT_101181a80;
undefined DAT_1011a2800;
undefined DAT_101181af0;
undefined DAT_101181c00;
undefined DAT_101181d00;
undefined DAT_101181e00;
undefined DAT_1011a3900;
undefined DAT_1011818f0;
undefined DAT_10119e500;
undefined DAT_1011817e0;
undefined DAT_101181f00;
undefined DAT_101199c00;
undefined DAT_101196900;
undefined DAT_101182000;
undefined DAT_10118c500;
undefined DAT_10118a200;
undefined DAT_1011812c0;
undefined DAT_101181a60;
undefined DAT_10119a900;
undefined DAT_10119a800;
undefined DAT_1011a2900;
undefined DAT_10119aa00;
undefined DAT_1011a3500;
undefined DAT_101182100;
undefined DAT_101185c00;
undefined DAT_10119df00;
undefined DAT_1011a2000;
undefined DAT_10119c600;
undefined8 DAT_101180958;
undefined DAT_101182200;
undefined DAT_101181a50;
undefined DAT_101181ab0;
undefined DAT_101182300;
undefined4 DAT_101180970;
undefined DAT_101182400;
undefined DAT_1011819f0;
undefined DAT_10119fc00;
undefined DAT_1011812d0;
undefined DAT_101182500;
undefined DAT_1011a1100;
undefined DAT_101185200;
undefined DAT_1011a0a00;
undefined DAT_101181900;
undefined DAT_101181820;
undefined DAT_101191a00;
undefined DAT_101189500;
undefined DAT_10119c800;
undefined DAT_101186c00;
undefined DAT_10119ec00;
undefined DAT_101182600;
undefined DAT_10119f900;
undefined DAT_1011a2d00;
undefined DAT_101198e00;
undefined DAT_1011a0300;
undefined DAT_101181910;
undefined DAT_101182700;
undefined DAT_101194c00;
undefined DAT_101194d00;
undefined DAT_101195b00;
undefined DAT_10119fd00;
undefined DAT_1011812e0;
undefined DAT_1011812f0;
undefined DAT_101181300;
undefined DAT_101182800;
undefined DAT_101182900;
undefined DAT_10119a300;
undefined DAT_101182a00;
undefined DAT_101182b00;
undefined DAT_1011a0600;
undefined DAT_1011a0f00;
undefined DAT_1011a0d00;
undefined DAT_101182c00;
undefined DAT_101196400;
undefined DAT_1011a3600;
undefined DAT_101182d00;
undefined DAT_101181310;
undefined DAT_101182e00;
undefined DAT_101181320;
undefined DAT_101181a90;
undefined DAT_101182f00;
undefined DAT_101183000;
undefined DAT_101183100;
undefined DAT_101183200;
undefined DAT_101193400;
undefined DAT_101181ae0;
undefined DAT_101183300;
undefined DAT_101183400;
undefined DAT_101183500;
undefined DAT_101183600;
undefined DAT_101183700;
undefined DAT_101183800;
undefined DAT_101192600;
undefined DAT_101183900;
undefined DAT_101183a00;
undefined DAT_101198c00;
undefined DAT_1011a2600;
undefined DAT_101183b00;
undefined DAT_101181a70;
undefined DAT_1011a1300;
undefined DAT_10119d600;
undefined DAT_101183c00;
undefined DAT_101184000;
undefined DAT_101181610;
undefined DAT_101183d00;
undefined DAT_101183e00;
undefined DAT_101183f00;
undefined DAT_101181970;
undefined DAT_101184100;
undefined DAT_101184200;
undefined DAT_1011a0500;
undefined DAT_101181ad0;
undefined DAT_101196c00;
undefined DAT_101184300;
undefined DAT_1011817f0;
undefined DAT_101184500;
undefined DAT_101184600;
undefined DAT_101184700;
undefined DAT_101184800;
undefined DAT_101184400;
undefined DAT_101184a00;
undefined DAT_101181a40;
undefined DAT_101184900;
undefined DAT_101184b00;
undefined DAT_1011817b0;
undefined DAT_101184c00;
undefined DAT_101181880;
undefined DAT_101197c00;
undefined DAT_1011a2e00;
undefined DAT_101184d00;
undefined DAT_10119d800;
undefined DAT_1011a2400;
undefined DAT_101184e00;
undefined DAT_1011a2500;
undefined DAT_101181330;
undefined DAT_1011a3800;
undefined DAT_101181340;
undefined DAT_101184f00;
undefined DAT_101192500;
undefined DAT_101181790;
undefined DAT_101185000;
undefined DAT_101185100;
undefined DAT_101185300;
undefined DAT_10119b800;
undefined DAT_101193c00;
undefined DAT_1011a2700;
undefined DAT_101185400;
undefined DAT_101185500;
undefined DAT_101185600;
undefined DAT_101185700;
undefined DAT_101185800;
undefined DAT_101181350;
undefined DAT_101185900;
undefined DAT_101185a00;
undefined DAT_101185b00;
undefined DAT_101189300;
undefined DAT_101185d00;
undefined DAT_101185e00;
undefined DAT_101185f00;
undefined DAT_101181730;
undefined DAT_101186000;
undefined DAT_101186100;
undefined DAT_101186200;
undefined DAT_101181360;
undefined DAT_101199800;
undefined DAT_101181370;
undefined DAT_101186300;
undefined DAT_101181380;
undefined DAT_101181390;
undefined DAT_101186400;
undefined DAT_101186500;
undefined DAT_101186600;
undefined DAT_101196f00;
undefined DAT_101196e00;
undefined DAT_1011819b0;
undefined DAT_101181990;
undefined DAT_101197000;
undefined DAT_1011813a0;
undefined DAT_1011a0200;
undefined DAT_1011816b0;
undefined DAT_1011a2f00;
undefined DAT_101186700;
undefined DAT_101186800;
undefined DAT_1011813b0;
undefined DAT_101186900;
undefined DAT_101195500;
undefined DAT_101186a00;
undefined DAT_101186b00;
undefined DAT_101186d00;
undefined DAT_101186e00;
undefined DAT_101186f00;
undefined DAT_101187000;
undefined DAT_101193300;
undefined DAT_101187100;
undefined DAT_1011813c0;
undefined DAT_10119e000;
undefined DAT_101187200;
undefined DAT_101199b00;
undefined DAT_101193d00;
undefined DAT_101187300;
undefined DAT_1011813d0;
undefined DAT_101187400;
undefined DAT_1011813e0;
undefined DAT_101187500;
undefined DAT_10119b400;
undefined DAT_10118a400;
undefined DAT_10119ef00;
undefined DAT_101189100;
undefined DAT_101181960;
undefined DAT_1011813f0;
undefined DAT_101181400;
undefined DAT_101181660;
undefined DAT_101187600;
undefined DAT_101187700;
undefined DAT_10119b300;
undefined DAT_10119e600;
undefined DAT_101181460;
undefined DAT_10119b200;
undefined DAT_101187900;
undefined DAT_101187800;
undefined DAT_101181410;
undefined DAT_101187a00;

void FUN_10052c444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10052d4c0(DAT_101e947a0,param_1,param_2,param_3);
  return;
}




void FUN_10052c45c(void)

{
  FUN_10052d6a8(DAT_101e947a0);
  return;
}




void FUN_10052c468(void)

{
  return;
}




void FUN_10052c46c(void)

{
  return;
}




void thunk_FUN_10052df60(void)

{
  FUN_10052df60();
  return;
}




void FUN_10052c474(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10052df60();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10052c488(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = 1;
  puVar2 = param_1 + 10;
  do {
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (lVar3 != 9);
  param_1[0x88] = 0x80000;
  lVar3 = 1;
  puVar2 = param_1 + 0x8a;
  do {
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
    puVar2 = puVar2 + 7;
  } while (lVar3 != 0x40);
  param_1[0x24a] = 0x3f0000;
  lVar3 = 0x1260;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar3 = lVar3 + 0x238;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x80);
  param_1[0x25cc] = 0x7f0000;
  lVar3 = 0x12e70;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar3 = lVar3 + 0x20;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  param_1[0x29ce] = 0xff0000;
  *(undefined4 *)(param_1 + 0x29e2) = 0;
  param_1[0x29d1] = 0;
  param_1[0x29d0] = 0;
  FUN_1004d2b50();
  DAT_101e947b0 = param_1;
  uVar1 = FUN_10052e0cc(param_1[2]);
  FUN_1005f23c0(uVar1,0,param_1);
  FUN_100625250(*(undefined4 *)((long)param_1 + 0xc),*param_1);
  return param_1;
}




long FUN_10052c5b0(long param_1)

{
  FUN_10052c5ec();
  DAT_101e947b0 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}




void FUN_10052c5ec(undefined8 *param_1)

{
  long lVar1;
  
  FUN_10057eed0(*param_1);
  *param_1 = 0;
  while (param_1[4] != 0) {
    FUN_10052cc18(param_1);
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    do {
      if (param_1[6] == lVar1) {
        param_1[6] = 0;
        param_1[7] = 0;
      }
      else {
        lVar1 = *(long *)(lVar1 + 0x18);
        param_1[7] = lVar1;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      FUN_10052c984(param_1);
      lVar1 = param_1[7];
    } while (lVar1 != 0);
  }
  return;
}




void FUN_10052c670(undefined4 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 *puVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float local_50;
  undefined4 uStack_4c;
  float local_44;
  
  uVar3 = FUN_10052ea00(param_2[2]);
  FUN_100625078(*param_2,uVar3);
  fVar8 = (float)NEON_fminnm(param_1,0x3d088889);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (*(float *)(param_2 + 1) == 0.0) goto LAB_10052c720;
  FUN_100625348(*param_2,&local_50);
  fVar9 = *(float *)((long)param_2 + 0xc);
  if (fVar9 <= local_50) {
    if (fVar9 < local_50) goto LAB_10052c700;
  }
  else {
    fVar9 = (float)NEON_fminnm(fVar9,local_50 + fVar8 * *(float *)(param_2 + 1));
LAB_10052c700:
    local_50 = fVar9;
  }
  FUN_100625250(*param_2);
  if (local_50 == *(float *)((long)param_2 + 0xc)) {
    *(undefined4 *)(param_2 + 1) = 0;
  }
LAB_10052c720:
  for (puVar5 = (undefined2 *)param_2[3]; puVar5 != (undefined2 *)0x0;
      puVar5 = *(undefined2 **)(puVar5 + 0x30)) {
    lVar4 = *(long *)(puVar5 + 4);
    if (lVar4 != 0) {
      if (*(long *)(puVar5 + 0x14) != 0) {
        FUN_10052cee8(param_2);
        FUN_10052ce60(param_2,puVar5);
        *(undefined8 *)(puVar5 + 0x14) = 0;
        lVar4 = *(long *)(puVar5 + 4);
      }
      local_44 = 0.0;
      FUN_100625348(lVar4,&local_44);
      fVar9 = *(float *)(puVar5 + 0x1a);
      if (fVar9 <= local_44) {
        if (fVar9 < local_44) goto LAB_10052c790;
      }
      else {
        fVar9 = (float)NEON_fminnm(fVar9,local_44 + fVar8 * *(float *)(puVar5 + 0x18));
LAB_10052c790:
        local_44 = fVar9;
      }
      FUN_100625250(*(undefined8 *)(puVar5 + 4));
      if (local_44 == *(float *)(puVar5 + 0x1a)) {
        *(undefined4 *)(puVar5 + 0x18) = 0;
      }
      if (((*(byte *)(puVar5 + 0x1c) & 1) != 0) && (*(float *)(puVar5 + 0x18) == 0.0)) {
        FUN_10052c8f4(param_2,*puVar5);
      }
      FUN_10062695c(*(undefined8 *)(puVar5 + 4),0,&local_50);
      if ((ulong)(*(long *)(puVar5 + 0x20) - *(long *)(*(long *)(puVar5 + 0xc) + 0x230)) <=
          CONCAT44(uStack_4c,local_50)) {
        *(long *)(puVar5 + 8) = *(long *)(puVar5 + 0xc);
      }
    }
  }
  lVar4 = param_2[7];
  if (lVar4 != 0) {
    do {
      if (param_2[6] == lVar4) {
        param_2[6] = 0;
        param_2[7] = 0;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x18);
        param_2[7] = lVar4;
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
      FUN_10052c984(param_2);
      lVar4 = param_2[7];
    } while (lVar4 != 0);
  }
  piVar1 = (int *)(param_2 + 0x29e2);
  if (0 < *piVar1) {
    uVar7 = 0;
    plVar6 = param_2 + 0x29d2;
    do {
      if ((*plVar6 == 0) || (iVar2 = FUN_10052ca30(plVar6), iVar2 == 0)) {
        if ((int)uVar7 == 0) {
          return;
        }
        break;
      }
      FUN_10052cacc(param_2,plVar6);
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 2;
    } while ((long)uVar7 < (long)*piVar1);
    _memmove(param_2 + 0x29d2,param_2 + 0x29d2 + (uVar7 & 0xffffffff) * 2,
             (ulong)((int)uVar7 * -0x10 + 0x80));
    *piVar1 = *piVar1 - (int)uVar7;
  }
  return;
}




void FUN_10052c8f4(long param_1,uint param_2)

{
  long lVar1;
  ushort *puVar2;
  long lVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x18);
  while( true ) {
    if (puVar2 == (ushort *)0x0) {
      return;
    }
    if (*puVar2 == param_2) break;
    puVar2 = *(ushort **)(puVar2 + 0x30);
  }
  if (*(long *)(puVar2 + 4) == 0) {
    return;
  }
  FUN_10057eed0();
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  for (lVar3 = *(long *)(puVar2 + 0x24); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x28)) {
    for (lVar1 = *(long *)(lVar3 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x220)) {
      FUN_10052cee8(param_1,lVar1);
    }
  }
  *(byte *)(puVar2 + 0x1c) = (byte)puVar2[0x1c] & 0xfe;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  return;
}




void FUN_10052c984(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  
  if (param_2[1] != 0) {
    FUN_1006260c0(param_2[1],0);
    FUN_100624fa8(param_2[1]);
    param_2[1] = 0;
  }
  FUN_1005e44b8(*param_2);
  *param_2 = 0;
  iVar4 = (int)(param_1 + 0x12e70);
  if (*(short *)(param_1 + 0x14e70) == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 5);
    *(short *)(param_1 + 0x14e72) = sVar3;
    *(short *)(param_1 + 0x14e70) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x14e72);
    uVar2 = (undefined2)((uint)((int)param_2 - iVar4) >> 5);
    *(undefined2 *)(param_1 + 0x14e72) = uVar2;
    *(undefined2 *)(param_1 + 0x12e70 + (ulong)uVar1 * 0x20) = uVar2;
  }
  *(int *)(param_1 + 0x14e74) = *(int *)(param_1 + 0x14e74) + -1;
  return;
}




undefined8 FUN_10052ca30(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int local_28;
  int local_24;
  
  lVar3 = *param_1;
  if (*(undefined8 **)(lVar3 + 0x208) == (undefined8 *)0x0) {
LAB_10052ca80:
    if (*(undefined8 **)(lVar3 + 0x210) != (undefined8 *)0x0) {
      local_28 = 8;
      FUN_1005e5f0c(**(undefined8 **)(lVar3 + 0x210),&local_28,0,0,0);
      if (local_28 != 0) goto LAB_10052cab0;
    }
    uVar2 = 1;
  }
  else {
    local_24 = 8;
    iVar1 = FUN_1005e5f0c(**(undefined8 **)(lVar3 + 0x208),&local_24,0,0,0);
    if ((iVar1 == 0) && (local_24 == 0)) {
      lVar3 = *param_1;
      goto LAB_10052ca80;
    }
LAB_10052cab0:
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_10052cacc(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  
  lVar2 = *param_2;
  if (*(undefined8 **)(lVar2 + 0x208) == (undefined8 *)0x0) {
    lVar4 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(lVar2 + 0x208);
    local_38 = 0;
    uVar1 = FUN_10052e0cc(*(undefined8 *)(param_1 + 0x10));
    FUN_1005f26f4(uVar1,uVar3,*(undefined8 *)(*(long *)(*(long *)(*param_2 + 0x218) + 8) + 8),1,
                  &local_38);
    *(undefined8 *)(*(long *)(*param_2 + 0x208) + 8) = local_38;
    FUN_100626aac(local_38,param_2[1],0,1);
    lVar4 = *(long *)(*param_2 + 0x230);
    FUN_100625078(local_38,0);
    lVar2 = *param_2;
  }
  if (*(undefined8 **)(lVar2 + 0x210) != (undefined8 *)0x0) {
    uVar3 = **(undefined8 **)(lVar2 + 0x210);
    local_38 = 0;
    uVar1 = FUN_10052e0cc(*(undefined8 *)(param_1 + 0x10));
    FUN_1005f26f4(uVar1,uVar3,*(undefined8 *)(*(long *)(*(long *)(*param_2 + 0x218) + 8) + 8),1,
                  &local_38);
    *(undefined8 *)(*(long *)(*param_2 + 0x210) + 8) = local_38;
    FUN_100626aac(local_38,param_2[1] + lVar4,0,1);
    FUN_100625078(local_38,0);
    lVar2 = *param_2;
    lVar4 = *(long *)(lVar2 + 0x210);
    if (lVar4 != 0) goto LAB_10052cbe0;
  }
  lVar4 = *(long *)(lVar2 + 0x208);
  if (lVar4 == 0) {
    return;
  }
LAB_10052cbe0:
  lVar2 = *(long *)(lVar4 + 8);
  if (lVar2 != 0) {
    FUN_1006260c0(lVar2,FUN_10052d88c);
    FUN_1006291ec(lVar2,*param_2);
  }
  return;
}




void FUN_10052cc18(long param_1,undefined2 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  FUN_10052c8f4(param_1,*param_2);
  FUN_10052d9e8(param_1 + 0x18,param_2);
  while (*(long *)(param_2 + 0x28) != 0) {
    FUN_10052da48(param_1,param_2);
  }
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  iVar3 = (int)(param_1 + 0x50);
  if (*(short *)(param_1 + 0x440) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x442) = sVar2;
    *(short *)(param_1 + 0x440) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x442);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x442) = sVar2;
    *(short *)(param_1 + 0x50 + (ulong)uVar1 * 0x70) = sVar2;
  }
  *(int *)(param_1 + 0x444) = *(int *)(param_1 + 0x444) + -1;
  return;
}




void FUN_10052ccc8(void)

{
  return;
}




void FUN_10052cccc(void)

{
  return;
}




void FUN_10052ccd0(undefined4 param_1,undefined8 *param_2)

{
  FUN_100625250(*param_2);
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((long)param_2 + 0xc) = param_1;
  return;
}




void FUN_10052cd08(undefined8 param_1,float param_2,undefined8 *param_3)

{
  if (param_2 <= 0.016666668) {
    FUN_100625250(param_1,*param_3);
    param_2 = 0.0;
  }
  else {
    param_2 = 1.0 / param_2;
  }
  *(float *)(param_3 + 1) = param_2;
  *(int *)((long)param_3 + 0xc) = (int)param_1;
  return;
}




void FUN_10052cd64(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ushort *puVar2;
  ushort *puVar3;
  long local_38;
  
  puVar2 = (ushort *)param_1[3];
  while( true ) {
    if (puVar2 == (ushort *)0x0) {
      return;
    }
    if (*puVar2 == param_2) break;
    puVar2 = *(ushort **)(puVar2 + 0x30);
  }
  FUN_10052c8f4(param_1);
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0x3f80;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar3 = puVar2 + 4;
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(byte *)(puVar2 + 0x1c) = (byte)puVar2[0x1c] & 0xfe;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar2 + 0x24);
  uVar1 = FUN_10052e0cc(param_1[2]);
  FUN_1005f23c0(uVar1,0,puVar3);
  FUN_10057ef98(*param_1,*(undefined8 *)puVar3,1,0);
  FUN_100625250(*(undefined4 *)(puVar2 + 0x1a),*(undefined8 *)puVar3);
  FUN_10062695c(*param_1,&local_38,0);
  local_38 = local_38 + 0x800;
  *(long *)(puVar2 + 0x20) = local_38;
  FUN_10052ce60(param_1,puVar2);
  if (*(int *)(*(long *)(puVar2 + 0x10) + 0x20) < 2) {
    return;
  }
  FUN_10052ce60(param_1,puVar2);
  return;
}




void FUN_10052ce60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_10052d6bc(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18));
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  FUN_10052d830(param_1,lVar2);
  lVar1 = param_1 + (long)*(int *)(param_1 + 0x14f10) * 0x10;
  *(long *)(lVar1 + 0x14e90) = lVar2;
  *(undefined8 *)(lVar1 + 0x14e98) = uVar3;
  *(int *)(param_1 + 0x14f10) = *(int *)(param_1 + 0x14f10) + 1;
  *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + *(long *)(lVar2 + 0x230);
  *(long *)(param_2 + 0x18) = lVar2;
  return;
}




void FUN_10052cee8(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  piVar1 = (int *)(param_1 + 0x14f10);
  iVar5 = *piVar1;
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      plVar2 = (long *)(param_1 + (long)iVar7 * 0x10 + 0x14e90);
      if (*plVar2 == param_2) {
        _memmove(plVar2,(void *)(param_1 + ((long)iVar7 + 1) * 0x10 + 0x14e90),
                 (ulong)(uint)((iVar5 - (int)((long)iVar7 + 1)) * 0x10));
        iVar7 = iVar7 + -1;
        iVar5 = *piVar1 + -1;
        *piVar1 = iVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  lVar6 = *(long *)(param_2 + 0x208);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 8) != 0) {
      FUN_1006260c0(*(long *)(lVar6 + 8),0);
      FUN_100624fa8(*(undefined8 *)(*(long *)(param_2 + 0x208) + 8));
      lVar6 = *(long *)(param_2 + 0x208);
      *(undefined8 *)(lVar6 + 8) = 0;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(long *)(lVar6 + 0x18) = lVar4;
    plVar2 = (long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar4 + 0x10);
    }
    *plVar2 = lVar6;
    *(long *)(param_1 + 0x38) = lVar6;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    *(undefined8 *)(param_2 + 0x208) = 0;
  }
  lVar6 = *(long *)(param_2 + 0x210);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 8) != 0) {
      FUN_1006260c0(*(long *)(lVar6 + 8),0);
      FUN_100624fa8(*(undefined8 *)(*(long *)(param_2 + 0x210) + 8));
      lVar6 = *(long *)(param_2 + 0x210);
      *(undefined8 *)(lVar6 + 8) = 0;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(long *)(lVar6 + 0x18) = lVar4;
    plVar2 = (long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar4 + 0x10);
    }
    *plVar2 = lVar6;
    *(long *)(param_1 + 0x38) = lVar6;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    *(undefined8 *)(param_2 + 0x210) = 0;
  }
  return;
}




void FUN_10052d03c(undefined8 param_1,long param_2,uint param_3)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_2 + 0x18);
  while( true ) {
    if (puVar1 == (ushort *)0x0) {
      return;
    }
    if (*puVar1 == param_3) break;
    puVar1 = *(ushort **)(puVar1 + 0x30);
  }
  if (*(long *)(puVar1 + 4) == 0) {
    return;
  }
  *(byte *)(puVar1 + 0x1c) = (byte)puVar1[0x1c] | 1;
  FUN_10052d080(0,param_1);
  return;
}




void FUN_10052d080(undefined4 param_1,float param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_3 + 0x18);
  while( true ) {
    if (puVar1 == (ushort *)0x0) {
      return;
    }
    if (*puVar1 == param_4) break;
    puVar1 = *(ushort **)(puVar1 + 0x30);
  }
  if (*(long *)(puVar1 + 4) == 0) {
    return;
  }
  if (0.016666668 < param_2) {
    *(float *)(puVar1 + 0x18) = 1.0 / param_2;
    *(undefined4 *)(puVar1 + 0x1a) = param_1;
    return;
  }
  FUN_100625250();
  return;
}




void FUN_10052d0cc(long param_1,uint param_2)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_1 + 0x18);
  while( true ) {
    if (puVar1 == (ushort *)0x0) {
      return;
    }
    if (*puVar1 == param_2) break;
    puVar1 = *(ushort **)(puVar1 + 0x30);
  }
  FUN_10052cc18();
  return;
}




void FUN_10052d0f4(undefined8 param_1,long param_2,uint param_3)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_2 + 0x18);
  while( true ) {
    if (puVar1 == (ushort *)0x0) {
      return;
    }
    if (*puVar1 == param_3) break;
    puVar1 = *(ushort **)(puVar1 + 0x30);
  }
  if (*(long *)(puVar1 + 4) == 0) {
    return;
  }
  FUN_100625250(param_1);
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(int *)(puVar1 + 0x1a) = (int)param_1;
  return;
}




void FUN_10052d150(undefined8 *param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort *puVar3;
  ulong local_38;
  
  if ((param_3 != 0) && (uVar1 = FUN_1004d2524(param_3), (int)uVar1 != 0)) {
    for (puVar3 = (ushort *)param_1[3]; puVar3 != (ushort *)0x0;
        puVar3 = *(ushort **)(puVar3 + 0x30)) {
      if (*puVar3 == param_2) {
        if (*(long *)(puVar3 + 4) == 0) {
          return;
        }
        lVar2 = FUN_10052d238(uVar1,puVar3,param_3);
        if (lVar2 == 0) {
          return;
        }
        if (*(long *)(puVar3 + 0x10) == lVar2) {
          return;
        }
        *(long *)(puVar3 + 0x10) = lVar2;
        if (*(long *)(puVar3 + 0xc) == 0) {
          return;
        }
        FUN_10062695c(*param_1,&local_38,0);
        lVar2 = *(long *)(*(long *)(puVar3 + 0xc) + 0x230);
        if ((*(long *)(puVar3 + 0x20) - lVar2) - 24000U <= local_38) {
          return;
        }
        FUN_10052cee8(param_1);
        *(long *)(puVar3 + 0x20) = *(long *)(puVar3 + 0x20) - lVar2;
        FUN_10052ce60(param_1,puVar3);
        return;
      }
    }
  }
  return;
}




void FUN_10052d238(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_1004d2524(param_3);
  iVar2 = FUN_100015208(param_3,uVar1,0x12345678);
  for (piVar3 = *(int **)(param_2 + 0x48); (piVar3 != (int *)0x0 && (*piVar3 != iVar2));
      piVar3 = *(int **)(piVar3 + 10)) {
  }
  return;
}




undefined8 FUN_10052d294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x14e88) = 0;
  *(undefined8 *)(param_1 + 0x14e80) = 0;
  uVar1 = FUN_10052c11c(param_2);
  uVar2 = FUN_10052d2e8(param_1,uVar1);
  *(undefined8 *)(param_1 + 0x14e80) = uVar2;
  return uVar1;
}




undefined2 * FUN_10052d2e8(long param_1,undefined2 param_2)

{
  long *plVar1;
  byte bVar2;
  undefined2 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  long lVar8;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x440);
  if (uVar4 == 0xffff) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(param_1 + 0x50 + uVar4 * 0x70);
    if (*(ushort *)(param_1 + 0x440) == *(ushort *)(param_1 + 0x442)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar3;
    }
    lVar8 = *(long *)(param_1 + 0x18);
    *(undefined2 *)(param_1 + 0x440) = uVar7;
    lVar5 = param_1 + 0x50 + uVar4 * 0x70;
    bVar2 = *(byte *)(lVar5 + 0x38);
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    *(undefined4 *)(lVar5 + 0x58) = 0;
    *(int *)(param_1 + 0x444) = *(int *)(param_1 + 0x444) + 1;
    *puVar3 = param_2;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(undefined8 *)(lVar5 + 0x2c) = 0;
    *(undefined8 *)(lVar5 + 0x24) = 0;
    *(undefined4 *)(lVar5 + 0x34) = 0x3f800000;
    *(byte *)(lVar5 + 0x38) = bVar2 & 0xfe;
    *(undefined8 *)(lVar5 + 0x40) = 0;
    lVar6 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar5 + 0x60) = 0;
    *(long *)(lVar5 + 0x68) = lVar6;
    plVar1 = (long *)(param_1 + 0x18);
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar6 + 0x60);
    }
    *plVar1 = (long)puVar3;
    *(undefined2 **)(param_1 + 0x20) = puVar3;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return puVar3;
}




void FUN_10052d3a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10052d3d8(param_1,*(undefined8 *)(param_1 + 0x14e80),param_2);
  *(undefined8 *)(param_1 + 0x14e88) = uVar1;
  return;
}




undefined4 * FUN_10052d3d8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x1250);
  if (uVar3 == 0xffff) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)(param_1 + 0x450 + uVar3 * 0x38);
    if (*(ushort *)(param_1 + 0x1250) == *(ushort *)(param_1 + 0x1252)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(undefined2 *)puVar6;
    }
    *(undefined2 *)(param_1 + 0x1250) = uVar5;
    *puVar6 = 0;
    lVar7 = param_1 + 0x450 + uVar3 * 0x38;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(int *)(param_1 + 0x1254) = *(int *)(param_1 + 0x1254) + 1;
    uVar2 = FUN_1004d2524(param_3);
    uVar2 = FUN_100015208(param_3,uVar2,0x12345678);
    *puVar6 = uVar2;
    *(long *)(lVar7 + 8) = param_2;
    lVar4 = *(long *)(param_2 + 0x50);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(long *)(lVar7 + 0x30) = lVar4;
    plVar1 = (long *)(param_2 + 0x48);
    if (*(long *)(param_2 + 0x48) != 0) {
      plVar1 = (long *)(lVar4 + 0x28);
    }
    *plVar1 = (long)puVar6;
    *(undefined4 **)(param_2 + 0x50) = puVar6;
    *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  }
  return puVar6;
}




void FUN_10052d4c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10052d4dc(param_1,*(undefined8 *)(param_1 + 0x14e88),param_2,param_3,param_4);
  return;
}




ushort * FUN_10052d4dc(undefined4 param_1,long param_2,long param_3,char *param_4,char *param_5,
                      long param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  ushort *puVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  
  uVar7 = *(ushort *)(param_2 + 0x12e60);
  uVar10 = (ulong)uVar7;
  if (uVar10 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    lVar6 = param_2 + 0x1260;
    puVar8 = (ushort *)(lVar6 + uVar10 * 0x238);
    if (uVar7 == *(ushort *)(param_2 + 0x12e62)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(param_2 + 0x12e60) = uVar7;
    lVar11 = lVar6 + uVar10 * 0x238;
    *(undefined4 *)(lVar11 + 4) = 0;
    pcVar9 = (char *)(lVar11 + 8);
    *pcVar9 = '\0';
    *(undefined1 *)(lVar11 + 0x108) = 0;
    *(undefined8 *)(lVar11 + 0x210) = 0;
    *(undefined8 *)(lVar11 + 0x208) = 0;
    *(undefined8 *)(lVar11 + 0x220) = 0;
    *(undefined8 *)(lVar11 + 0x218) = 0;
    *(undefined8 *)(lVar11 + 0x230) = 0;
    *(undefined8 *)(lVar11 + 0x228) = 0;
    *(int *)(param_2 + 0x12e64) = *(int *)(param_2 + 0x12e64) + 1;
    *(undefined4 *)puVar8 = param_1;
    if (param_6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1004d2524(param_6);
      uVar3 = FUN_100015208(param_6,uVar3,0x12345678);
    }
    *(undefined4 *)(lVar11 + 4) = uVar3;
    *(undefined8 *)(lVar11 + 0x208) = 0;
    *(undefined8 *)(lVar11 + 0x210) = 0;
    *(long *)(lVar6 + uVar10 * 0x238 + 0x218) = param_3;
    if (param_4 == (char *)0x0) {
      *pcVar9 = '\0';
    }
    else {
      _strcpy(pcVar9,param_4);
      puVar4 = (undefined8 *)FUN_10052d8d8(param_2,pcVar9,1);
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined8 *)(lVar6 + uVar10 * 0x238 + 0x230) = 0;
      }
      else {
        uVar5 = FUN_10052dbfc(param_2,*puVar4);
        *(undefined8 *)(lVar6 + uVar10 * 0x238 + 0x230) = uVar5;
        FUN_10052c984(param_2,puVar4);
      }
    }
    if (param_5 == (char *)0x0) {
      *(char *)(lVar11 + 0x108) = '\0';
    }
    else {
      _strcpy((char *)(lVar11 + 0x108),param_5);
    }
    lVar6 = lVar6 + uVar10 * 0x238;
    *(undefined8 *)(lVar6 + 0x220) = 0;
    lVar11 = *(long *)(param_3 + 0x10);
    lVar2 = *(long *)(param_3 + 0x18);
    *(long *)(lVar6 + 0x228) = lVar2;
    plVar1 = (long *)(param_3 + 0x10);
    if (lVar11 != 0) {
      plVar1 = (long *)(lVar2 + 0x220);
    }
    *plVar1 = (long)puVar8;
    *(ushort **)(param_3 + 0x18) = puVar8;
    *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
  }
  return puVar8;
}




void FUN_10052d6a8(long param_1)

{
  *(undefined8 *)(param_1 + 0x14e88) = 0;
  *(undefined8 *)(param_1 + 0x14e80) = 0;
  return;
}




float * FUN_10052d6bc(undefined8 param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  pfVar2 = *(float **)(param_2 + 4);
  if (pfVar2 == (float *)0x0) {
    return (float *)0x0;
  }
  if (param_2[8] == 1.4013e-45) {
    return pfVar2;
  }
  pfVar4 = pfVar2;
  if (param_3 == (float *)0x0) {
    do {
      if (pfVar4[1] == DAT_101e947a8) {
        return pfVar4;
      }
      pfVar3 = pfVar4 + 0x88;
      pfVar4 = *(float **)pfVar3;
    } while (*(float **)pfVar3 != (float *)0x0);
LAB_10052d738:
    if (param_3 == (float *)0x0) goto LAB_10052d750;
  }
  else if (*(float **)(param_3 + 0x86) != param_2) {
    do {
      if (pfVar4[1] == **(float **)(param_3 + 0x86)) {
        return pfVar4;
      }
      pfVar4 = *(float **)(pfVar4 + 0x88);
    } while (pfVar4 != (float *)0x0);
    goto LAB_10052d738;
  }
  if (param_3[1] == DAT_101e947ac) {
    return (float *)0x0;
  }
LAB_10052d750:
  fVar7 = 0.0;
  do {
    if ((pfVar2 != *(float **)(*(long *)(*(long *)(pfVar2 + 0x86) + 8) + 0x10) && pfVar2 != param_3)
       && (pfVar2[1] == 0.0)) {
      fVar7 = *pfVar2 + fVar7;
    }
    pfVar2 = *(float **)(pfVar2 + 0x88);
  } while (pfVar2 != (float *)0x0);
  iVar1 = _rand();
  pfVar2 = *(float **)(param_2 + 4);
  if (pfVar2 != (float *)0x0) {
    uVar5 = 0;
    pfVar4 = pfVar2;
    do {
      if (pfVar4[1] == 0.0) {
        uVar5 = uVar5 + 1;
      }
      pfVar4 = *(float **)(pfVar4 + 0x88);
    } while (pfVar4 != (float *)0x0);
    pfVar4 = (float *)0x0;
    if (1 < uVar5) {
      pfVar4 = param_3;
    }
    if (pfVar2 != (float *)0x0) {
      fVar6 = 0.0;
      pfVar3 = pfVar2;
      while (((pfVar3 == *(float **)(*(long *)(*(long *)(pfVar3 + 0x86) + 8) + 0x10) ||
               pfVar3 == pfVar4 || (pfVar3[1] != 0.0)) ||
             (fVar6 = *pfVar3 + fVar6, fVar6 < fVar7 * 4.656613e-10 * (float)iVar1))) {
        pfVar3 = *(float **)(pfVar3 + 0x88);
        if (pfVar3 == (float *)0x0) {
          return pfVar2;
        }
      }
      return pfVar3;
    }
  }
  return (float *)0x0;
}




void FUN_10052d830(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10052cee8();
  if (*(char *)(param_2 + 8) != '\0') {
    uVar1 = FUN_10052d8d8(param_1,(char *)(param_2 + 8),0);
    *(undefined8 *)(param_2 + 0x208) = uVar1;
  }
  if (*(char *)(param_2 + 0x108) != '\0') {
    uVar1 = FUN_10052d8d8(param_1,param_2 + 0x108,0);
    *(undefined8 *)(param_2 + 0x210) = uVar1;
  }
  return;
}




undefined8 FUN_10052d88c(undefined8 param_1,undefined8 param_2,int param_3)

{
  long local_18;
  
  if (DAT_101e947b0 != 0 && param_3 == 0) {
    local_18 = 0;
    FUN_1006292d0(param_1,&local_18);
    *(long *)(*(long *)(*(long *)(local_18 + 0x218) + 8) + 0x28) = local_18;
  }
  return 0;
}




ushort * FUN_10052d8d8(long param_1,undefined8 param_2,int param_3)

{
  ushort *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  puVar1 = (ushort *)(param_1 + 0x14e70);
  uVar7 = *puVar1;
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    lVar2 = param_1 + 0x12e70;
    puVar8 = (ushort *)(lVar2 + (ulong)uVar7 * 0x20);
    if (uVar7 == *(ushort *)(param_1 + 0x14e72)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *puVar1 = uVar7;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *(int *)(param_1 + 0x14e74) = *(int *)(param_1 + 0x14e74) + 1;
    uVar3 = 0x8000289;
    if (param_3 == 0) {
      uVar3 = 0x8010289;
    }
    uVar6 = FUN_10052e0cc(*(undefined8 *)(param_1 + 0x10));
    iVar5 = FUN_1005f1e78(uVar6,param_2,uVar3,0,puVar8);
    if (iVar5 != 0) {
      if (*puVar1 == 0xffff) {
        uVar7 = (ushort)((uint)((int)puVar8 - (int)lVar2) >> 5);
        *(ushort *)(param_1 + 0x14e72) = uVar7;
        *puVar1 = uVar7;
      }
      else {
        uVar7 = *(ushort *)(param_1 + 0x14e72);
        uVar4 = (undefined2)((uint)((int)puVar8 - (int)lVar2) >> 5);
        *(undefined2 *)(param_1 + 0x14e72) = uVar4;
        *(undefined2 *)(lVar2 + (ulong)uVar7 * 0x20) = uVar4;
      }
      puVar8 = (ushort *)0x0;
      *(int *)(param_1 + 0x14e74) = *(int *)(param_1 + 0x14e74) + -1;
    }
  }
  return puVar8;
}




void FUN_10052d9e8(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x60);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x68);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x60) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x68);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(long *)(*(long *)(param_2 + 0x60) + 0x68) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10052da48(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  FUN_10052daf0(param_2 + 0x48,param_3);
  while (*(long *)(param_3 + 0x18) != 0) {
    FUN_10052db50(param_1,param_3);
  }
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x20) = 0;
  iVar3 = (int)(param_1 + 0x450);
  if (*(short *)(param_1 + 0x1250) == -1) {
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x1252) = sVar2;
    *(short *)(param_1 + 0x1250) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x1252);
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x1252) = sVar2;
    *(short *)(param_1 + 0x450 + (ulong)uVar1 * 0x38) = sVar2;
  }
  *(int *)(param_1 + 0x1254) = *(int *)(param_1 + 0x1254) + -1;
  return;
}




void FUN_10052daf0(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x28);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x30);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(long *)(*(long *)(param_2 + 0x28) + 0x30) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10052db50(long param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  FUN_10052dc7c(param_2 + 0x10,param_3);
  FUN_10052cee8(param_1,param_3);
  iVar3 = (int)(param_1 + 0x1260);
  if (*(short *)(param_1 + 0x12e60) == -1) {
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * -0x5689;
    *(short *)(param_1 + 0x12e62) = sVar2;
    *(short *)(param_1 + 0x12e60) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x12e62);
    sVar2 = (short)((uint)((int)param_3 - iVar3) >> 3) * -0x5689;
    *(short *)(param_1 + 0x12e62) = sVar2;
    *(short *)(param_1 + 0x1260 + (ulong)uVar1 * 0x238) = sVar2;
  }
  *(int *)(param_1 + 0x12e64) = *(int *)(param_1 + 0x12e64) + -1;
  return;
}




long FUN_10052dbfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0;
  local_2c = 0;
  uVar1 = FUN_10052e0cc(*(undefined8 *)(param_1 + 0x10));
  FUN_1005ee5ac(uVar1,(long)&local_28 + 4,0,0);
  FUN_1005e5850(param_2,&local_2c,2);
  FUN_1005e4bb8(param_2,&local_28,0);
  fVar2 = (float)NEON_ucvtf(local_2c);
  return (long)(((float)local_28._4_4_ * fVar2) / (float)local_28);
}




void FUN_10052dc7c(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x220);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x228);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x220) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x228);
    *(undefined8 *)(lVar1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
    *(long *)(*(long *)(param_2 + 0x220) + 0x228) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10052dce0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1004d2524("intro");
  DAT_101e947a8 = FUN_100015208("intro",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("outro");
  DAT_101e947ac = FUN_100015208("outro",uVar1,0x12345678);
  return;
}




undefined8 * FUN_10052dd50(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10149f498;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  lVar1 = 0x20;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x120;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  param_1[0x2408] = 0;
  param_1[0x2407] = 0;
  param_1[0x2404] = 0xff0000;
  param_1[0x2406] = param_1 + 0x2407;
  param_1[0x2409] = 0;
  lVar1 = 0x12050;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x38;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x200);
  param_1[0x320a] = 0x1ff0000;
  param_1[0x320d] = 0;
  param_1[0x320c] = 0;
  param_1[0x320f] = 0;
  param_1[0x320e] = 0;
  *(undefined1 *)(param_1 + 0x3210) = 0;
  *(undefined1 *)((long)param_1 + 0x19081) = param_4;
  FUN_1005acff0(0,0,0,0);
  if (param_2 != 0) {
    FUN_100577524(param_2,param_3,0,0,0,0xffffffff);
    *(int *)((long)param_1 + 0x1204c) = (int)param_3;
  }
  *(undefined8 *)((long)param_1 + 0x1926a) = 0;
  *(undefined8 *)((long)param_1 + 0x19262) = 0;
  *(undefined8 *)((long)param_1 + 0x1927a) = 0;
  *(undefined8 *)((long)param_1 + 0x19272) = 0;
  *(undefined8 *)((long)param_1 + 0x1924a) = 0;
  *(undefined8 *)((long)param_1 + 0x19242) = 0;
  *(undefined8 *)((long)param_1 + 0x1925a) = 0;
  *(undefined8 *)((long)param_1 + 0x19252) = 0;
  *(undefined8 *)((long)param_1 + 0x1922a) = 0;
  *(undefined8 *)((long)param_1 + 0x19222) = 0;
  *(undefined8 *)((long)param_1 + 0x1923a) = 0;
  *(undefined8 *)((long)param_1 + 0x19232) = 0;
  *(undefined8 *)((long)param_1 + 0x1920a) = 0;
  *(undefined8 *)((long)param_1 + 0x19202) = 0;
  *(undefined8 *)((long)param_1 + 0x1921a) = 0;
  *(undefined8 *)((long)param_1 + 0x19212) = 0;
  *(undefined8 *)((long)param_1 + 0x191ea) = 0;
  *(undefined8 *)((long)param_1 + 0x191e2) = 0;
  *(undefined8 *)((long)param_1 + 0x191fa) = 0;
  *(undefined8 *)((long)param_1 + 0x191f2) = 0;
  *(undefined8 *)((long)param_1 + 0x191ca) = 0;
  *(undefined8 *)((long)param_1 + 0x191c2) = 0;
  *(undefined8 *)((long)param_1 + 0x191da) = 0;
  *(undefined8 *)((long)param_1 + 0x191d2) = 0;
  *(undefined8 *)((long)param_1 + 0x191aa) = 0;
  *(undefined8 *)((long)param_1 + 0x191a2) = 0;
  *(undefined8 *)((long)param_1 + 0x191ba) = 0;
  *(undefined8 *)((long)param_1 + 0x191b2) = 0;
  *(undefined8 *)((long)param_1 + 0x1918a) = 0;
  *(undefined8 *)((long)param_1 + 0x19182) = 0;
  *(undefined8 *)((long)param_1 + 0x1919a) = 0;
  *(undefined8 *)((long)param_1 + 0x19192) = 0;
  *(undefined8 *)((long)param_1 + 0x1916a) = 0;
  *(undefined8 *)((long)param_1 + 0x19162) = 0;
  *(undefined8 *)((long)param_1 + 0x1917a) = 0;
  *(undefined8 *)((long)param_1 + 0x19172) = 0;
  *(undefined8 *)((long)param_1 + 0x1914a) = 0;
  *(undefined8 *)((long)param_1 + 0x19142) = 0;
  *(undefined8 *)((long)param_1 + 0x1915a) = 0;
  *(undefined8 *)((long)param_1 + 0x19152) = 0;
  *(undefined8 *)((long)param_1 + 0x1912a) = 0;
  *(undefined8 *)((long)param_1 + 0x19122) = 0;
  *(undefined8 *)((long)param_1 + 0x1913a) = 0;
  *(undefined8 *)((long)param_1 + 0x19132) = 0;
  *(undefined8 *)((long)param_1 + 0x1910a) = 0;
  *(undefined8 *)((long)param_1 + 0x19102) = 0;
  *(undefined8 *)((long)param_1 + 0x1911a) = 0;
  *(undefined8 *)((long)param_1 + 0x19112) = 0;
  *(undefined8 *)((long)param_1 + 0x190ea) = 0;
  *(undefined8 *)((long)param_1 + 0x190e2) = 0;
  *(undefined8 *)((long)param_1 + 0x190fa) = 0;
  *(undefined8 *)((long)param_1 + 0x190f2) = 0;
  *(undefined8 *)((long)param_1 + 0x190ca) = 0;
  *(undefined8 *)((long)param_1 + 0x190c2) = 0;
  *(undefined8 *)((long)param_1 + 0x190da) = 0;
  *(undefined8 *)((long)param_1 + 0x190d2) = 0;
  *(undefined8 *)((long)param_1 + 0x190aa) = 0;
  *(undefined8 *)((long)param_1 + 0x190a2) = 0;
  *(undefined8 *)((long)param_1 + 0x190ba) = 0;
  *(undefined8 *)((long)param_1 + 0x190b2) = 0;
  *(undefined8 *)((long)param_1 + 0x1908a) = 0;
  *(undefined8 *)((long)param_1 + 0x19082) = 0;
  *(undefined8 *)((long)param_1 + 0x1909a) = 0;
  *(undefined8 *)((long)param_1 + 0x19092) = 0;
  return param_1;
}




void FUN_10052dec0(long param_1)

{
  FUN_100577808(param_1 + 8);
  FUN_10052dee8(param_1);
  return;
}




void FUN_10052dee8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_10052f978();
  uVar2 = 0x400;
  if (iVar1 == 0) {
    uVar2 = 0x200;
  }
  FUN_1005ee72c(*(undefined8 *)(param_1 + 8),uVar2,4);
  FUN_1005f0248(*(undefined8 *)(param_1 + 8),0x200,0x120004,0);
  FUN_1005f0ab8(0x3f800000,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 8));
  FUN_1005f24e8(*(undefined8 *)(param_1 + 8),0,param_1 + 0x10);
  return;
}




undefined8 * FUN_10052df60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149f498;
  FUN_10052e00c();
  FUN_1005e849c(param_1[2]);
  param_1[2] = 0;
  FUN_1005f0394(param_1[1]);
  FUN_1005edafc(param_1[1]);
  if ((void *)param_1[0x320f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x320f]);
    param_1[0x320f] = 0;
    param_1[0x320e] = 0;
  }
  if ((void *)param_1[0x320d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x320d]);
    param_1[0x320d] = 0;
    param_1[0x320c] = 0;
  }
  FUN_10052f138(param_1 + 0x2406,param_1[0x2407]);
  return param_1;
}




void FUN_10052e00c(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  local_3c = 0;
  FUN_1005e8f58(*(undefined8 *)(param_1 + 0x10),&local_3c);
  if (0 < local_3c) {
    iVar4 = local_3c + 1;
    do {
      FUN_1005e903c(*(undefined8 *)(param_1 + 0x10),iVar4 + -2,&local_38);
      FUN_1005e44b8(local_38);
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
  }
  puVar1 = (undefined2 *)(param_1 + 0x20);
  lVar2 = 1;
  do {
    *puVar1 = (short)lVar2;
    puVar1 = puVar1 + 0x90;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  *(undefined8 *)(param_1 + 0x12020) = 0xff0000;
  puVar3 = (undefined8 *)(param_1 + 0x12038);
  FUN_10052f138(param_1 + 0x12030,*puVar3);
  *(undefined8 **)(param_1 + 0x12030) = puVar3;
  *(undefined8 *)(param_1 + 0x12040) = 0;
  *puVar3 = 0;
  return;
}




undefined8 FUN_10052e0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void thunk_FUN_10052df60(void)

{
  FUN_10052df60();
  return;
}




void FUN_10052e0d8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10052df60();
  operator_delete(pvVar1);
  return;
}




bool FUN_10052e0ec(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}




void FUN_10052e0fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1005f0f50(*(undefined8 *)(param_1 + 8),0,param_2,&DAT_1013cd800,param_3,param_4);
  return;
}




uint FUN_10052e11c(long param_1,char *param_2,undefined8 param_3,ulong param_4)

{
  ushort *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  uint local_60 [2];
  ushort *local_58;
  
  uVar3 = FUN_1004d2524(param_2);
  uVar4 = FUN_100015208(param_2,uVar3,0x12345678);
  if (((param_4 & 1) == 0) && (lVar5 = FUN_10052e320(param_1,uVar4), lVar5 != 0)) {
    uVar9 = (int)((lVar5 - param_1) - 0x20U >> 5) * 0x8e39;
    goto LAB_10052e300;
  }
  puVar1 = (ushort *)(param_1 + 0x12020);
  if (*(int *)(param_1 + 0x1204c) < 1) {
LAB_10052e1d8:
    uVar7 = (ulong)*puVar1;
    if (uVar7 != 0xffff) {
      lVar5 = param_1 + 0x20;
      puVar10 = (ushort *)(lVar5 + uVar7 * 0x120);
      if (*puVar1 == *(ushort *)(param_1 + 0x12022)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar10;
      }
      *puVar1 = uVar8;
      lVar6 = lVar5 + uVar7 * 0x120;
      *(char *)(lVar6 + 0x1c) = '\0';
      *(int *)(param_1 + 0x12024) = *(int *)(param_1 + 0x12024) + 1;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *(int *)(lVar6 + 8) = (int)uVar4;
      *(int *)(lVar6 + 0xc) = (int)param_3;
      *(char *)(lVar6 + 0x10) = (char)param_4;
      *(undefined8 *)(lVar6 + 0x14) = 0xbf80000000000000;
      _strcpy((char *)(lVar6 + 0x1c),param_2);
      uVar7 = FUN_10052e3a0(param_1,param_2,param_3,param_4,puVar10);
      if ((uVar7 & 1) != 0) {
        uVar9 = (int)((ulong)((long)puVar10 - lVar5) >> 5) * 0x8e39;
        local_60[0] = uVar9 & 0xffff;
        local_58 = puVar10;
        FUN_10052f178(param_1 + 0x12030,local_60,local_60);
        goto LAB_10052e300;
      }
      if (*puVar1 == 0xffff) {
        uVar8 = (short)((uint)((int)puVar10 - (int)lVar5) >> 5) * -0x71c7;
        *(ushort *)(param_1 + 0x12022) = uVar8;
        *puVar1 = uVar8;
      }
      else {
        uVar8 = *(ushort *)(param_1 + 0x12022);
        sVar2 = (short)((uint)((int)puVar10 - (int)lVar5) >> 5) * -0x71c7;
        *(short *)(param_1 + 0x12022) = sVar2;
        *(short *)(lVar5 + (ulong)uVar8 * 0x120) = sVar2;
      }
      *(int *)(param_1 + 0x12024) = *(int *)(param_1 + 0x12024) + -1;
    }
  }
  else {
    local_60[0] = 0;
    FUN_1005776d8(local_60,0,1);
    if (0x17ffff < (int)(*(int *)(param_1 + 0x1204c) - local_60[0])) goto LAB_10052e1d8;
  }
  uVar9 = (uint)DAT_10186760a;
LAB_10052e300:
  return uVar9 & 0xffff;
}




long FUN_10052e320(long param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x12030);
  while( true ) {
    if (plVar2 == (long *)(param_1 + 0x12038)) {
      return 0;
    }
    if (*(int *)(plVar2[5] + 8) == param_2) break;
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  return plVar2[5];
}




undefined8
FUN_10052e3a0(long param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_120 = 0xe8;
  local_b0 = 9;
  if (param_3 - 1U < 4) {
    uVar1 = 0x8010080;
    if (param_4 == 0) {
      uVar1 = 0x8010200;
    }
    iVar2 = FUN_1005f1e78(*(undefined8 *)(param_1 + 8),param_2,
                          uVar1 | *(uint *)(&DAT_10115c2f0 + (long)(int)(param_3 - 1U) * 4),
                          &local_120,&local_38);
    if (iVar2 != 0) {
      uVar3 = 0;
      goto joined_r0x00010052e45c;
    }
  }
  FUN_10052f0b8(param_1 + 0x19060,&local_38);
  uVar3 = 1;
joined_r0x00010052e45c:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = local_38;
  }
  return uVar3;
}




void FUN_10052e47c(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  int local_7c;
  int local_78;
  float local_74;
  
  puVar4 = (uint *)(param_2 + 0x19060);
  if (*(float *)(param_2 + 0x18) == 0.0) goto LAB_10052e53c;
  fVar7 = (float)NEON_fminnm(param_1,0x3d088889);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  FUN_1005e8c84(*(undefined8 *)(param_2 + 0x10),&local_74);
  fVar8 = *(float *)(param_2 + 0x1c);
  if (fVar8 <= local_74) {
    if (fVar8 < local_74) goto LAB_10052e51c;
  }
  else {
    fVar8 = (float)NEON_fminnm(fVar8,local_74 + fVar7 * *(float *)(param_2 + 0x18));
LAB_10052e51c:
    local_74 = fVar8;
  }
  FUN_1005e8ba0(*(undefined8 *)(param_2 + 0x10));
  if (local_74 == *(float *)(param_2 + 0x1c)) {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
LAB_10052e53c:
  *(float *)(param_2 + 0x12048) = *(float *)(param_2 + 0x12048) + param_1;
  FUN_10052e6cc(param_2);
  FUN_1005f0470(*(undefined8 *)(param_2 + 8));
  if (*puVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = (int)uVar3;
      local_78 = 8;
      FUN_1005e5f0c(*(undefined8 *)(*(long *)(param_2 + 0x19068) + uVar3 * 8),&local_78,0,0,0);
      if (local_78 == 6 || local_78 == 2) {
LAB_10052e5b0:
        lVar5 = *(long *)(param_2 + 0x19068) + uVar3 * 8;
        FUN_10052f294(puVar4,lVar5,lVar5 + 8);
        iVar2 = iVar2 + -1;
      }
      else if (local_78 == 0) {
        FUN_1005e6344(*(undefined8 *)(*(long *)(param_2 + 0x19068) + uVar3 * 8),
                      *(undefined8 *)(param_2 + 0x10));
        goto LAB_10052e5b0;
      }
      uVar3 = (ulong)(iVar2 + 1U);
    } while (iVar2 + 1U < *puVar4);
  }
  puVar4 = (uint *)(param_2 + 0x19070);
  if (*puVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = (int)uVar3;
      lVar5 = param_2 + 0x12050 +
              (ulong)*(ushort *)(*(long *)(param_2 + 0x19078) + uVar3 * 2) * 0x38;
      local_7c = 8;
      plVar6 = (long *)(lVar5 + 0x18);
      iVar1 = FUN_1005e5f0c(*(undefined8 *)*plVar6,&local_7c,0,0,0);
      if (iVar1 == 0 && local_7c != 2) {
        if (local_7c == 6) goto LAB_10052e67c;
        if (local_7c == 0) {
          FUN_1005e6344(*(undefined8 *)*plVar6,*(undefined8 *)(param_2 + 0x10));
          FUN_10052e930(param_2,lVar5);
          goto LAB_10052e67c;
        }
      }
      else {
        *(int *)(*plVar6 + 0x14) = *(int *)(*plVar6 + 0x14) + -1;
        *plVar6 = 0;
LAB_10052e67c:
        lVar5 = *(long *)(param_2 + 0x19078) + uVar3 * 2;
        FUN_1004e4084(puVar4,lVar5,lVar5 + 2);
        iVar2 = iVar2 + -1;
      }
      uVar3 = (ulong)(iVar2 + 1U);
    } while (iVar2 + 1U < *puVar4);
  }
  return;
}




void FUN_10052e6cc(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar11 = *(long **)(param_1 + 0x12030);
  if (plVar11 != (long *)(param_1 + 0x12038)) {
    puVar1 = (uint *)(param_1 + 0x19060);
    do {
      plVar12 = (long *)plVar11[5];
      lVar4 = *plVar12;
      if (lVar4 == 0) {
LAB_10052e7d8:
        plVar12 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar12 = plVar11 + 2;
          plVar10 = (long *)*plVar12;
          if ((long *)*plVar10 != plVar11) {
            do {
              lVar4 = *plVar12;
              plVar12 = (long *)(lVar4 + 0x10);
              plVar10 = (long *)*plVar12;
            } while (*plVar10 != lVar4);
          }
        }
        else {
          do {
            plVar10 = plVar12;
            plVar12 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
      else {
        if (0 < *(int *)((long)plVar12 + 0x14)) {
          *(undefined4 *)(plVar12 + 3) = *(undefined4 *)(param_1 + 0x12048);
          goto LAB_10052e7d8;
        }
        if ((*(float *)(plVar12 + 3) <= 0.0) ||
           ((*(float *)(param_1 + 0x12048) - *(float *)(plVar12 + 3) <= 4.0 &&
            ((char)plVar12[2] == '\0')))) goto LAB_10052e7d8;
        uVar6 = *puVar1;
        if (uVar6 != 0) {
          uVar9 = 0;
          while( true ) {
            iVar8 = (int)uVar9;
            if (*(long *)(*(long *)(param_1 + 0x19068) + uVar9 * 8) == lVar4) {
              lVar4 = *(long *)(param_1 + 0x19068) + (long)iVar8 * 8;
              FUN_10052f294(puVar1,lVar4,lVar4 + 8);
              iVar8 = iVar8 + -1;
              uVar6 = *puVar1;
            }
            uVar9 = (ulong)(iVar8 + 1U);
            if (uVar6 <= iVar8 + 1U) break;
            lVar4 = *plVar12;
          }
        }
        lVar4 = 0;
        puVar7 = (undefined8 *)(param_1 + 0x12068);
        do {
          if ((*(char *)(param_1 + 0x19082 + lVar4) != '\0') && ((long *)*puVar7 == plVar12)) {
            *puVar7 = 0;
          }
          lVar4 = lVar4 + 1;
          puVar7 = puVar7 + 7;
        } while (lVar4 != 0x200);
        FUN_1005e44b8(*plVar12);
        *plVar12 = 0;
        plVar5 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar5 = plVar11 + 2;
          plVar10 = (long *)*plVar5;
          if ((long *)*plVar10 != plVar11) {
            do {
              lVar4 = *plVar5;
              plVar5 = (long *)(lVar4 + 0x10);
              plVar10 = (long *)*plVar5;
            } while (*plVar10 != lVar4);
          }
        }
        else {
          do {
            plVar10 = plVar5;
            plVar5 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
        FUN_10052f300((undefined8 *)(param_1 + 0x12030),plVar11);
        iVar8 = (int)(param_1 + 0x20);
        if (*(short *)(param_1 + 0x12020) == -1) {
          sVar3 = (short)((uint)((int)plVar12 - iVar8) >> 5) * -0x71c7;
          *(short *)(param_1 + 0x12022) = sVar3;
          *(short *)(param_1 + 0x12020) = sVar3;
        }
        else {
          uVar2 = *(ushort *)(param_1 + 0x12022);
          sVar3 = (short)((uint)((int)plVar12 - iVar8) >> 5) * -0x71c7;
          *(short *)(param_1 + 0x12022) = sVar3;
          *(short *)(param_1 + 0x20 + (ulong)uVar2 * 0x120) = sVar3;
        }
        *(int *)(param_1 + 0x12024) = *(int *)(param_1 + 0x12024) + -1;
      }
      plVar11 = plVar10;
    } while (plVar10 != (long *)(param_1 + 0x12038));
  }
  return;
}




void FUN_10052e930(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  uVar1 = FUN_1005f26f4(*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_2 + 0x18),0,1,
                        param_2 + 0x20);
  FUN_10052ed9c(uVar1,param_2);
  FUN_100625078(*(undefined8 *)(param_2 + 0x20),0);
  FUN_1006291ec(*(undefined8 *)(param_2 + 0x20),param_2);
  local_24 = 0xffffffff;
  FUN_10057aa5c(*(undefined8 *)(param_2 + 0x20),&local_24);
  return;
}




void FUN_10052e9a4(long param_1)

{
  FUN_1005f13d8(*(undefined8 *)(param_1 + 8));
  thunk_FUN_10052f7b4();
  return;
}




void FUN_10052e9bc(long param_1)

{
  thunk_FUN_10052f7c4();
  FUN_1005f14a0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_10052e9e0(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1005f13d8();
    return;
  }
  FUN_1005f14a0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_10052e9f0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x19080) = param_2;
  return;
}




undefined1 FUN_10052ea00(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19080);
}




uint FUN_10052ea10(undefined4 param_1,long param_2,uint param_3)

{
  long lVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ushort uVar9;
  long *plVar10;
  uint uVar11;
  uint *puVar12;
  ushort local_66;
  int local_64;
  
  if (DAT_10186760a != param_3) {
    lVar1 = param_2 + 0x20;
    plVar10 = (long *)(lVar1 + (ulong)param_3 * 0x120);
    if (*plVar10 == 0) {
      lVar6 = lVar1 + (ulong)param_3 * 0x120;
      uVar4 = FUN_10052e3a0(param_2,lVar6 + 0x1c,*(undefined4 *)(lVar6 + 0xc),
                            *(undefined1 *)(lVar6 + 0x10),plVar10);
      if ((uVar4 & 1) != 0) goto LAB_10052ea98;
      plVar7 = (long *)(param_2 + 0x12038);
      plVar8 = (long *)*plVar7;
      if (plVar8 != (long *)0x0) {
        do {
          if (*(uint *)(plVar8 + 4) >= param_3) {
            plVar7 = plVar8;
          }
          plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < param_3];
        } while (plVar8 != (long *)0x0);
LAB_10052ebcc:
        if ((plVar7 != (long *)(param_2 + 0x12038)) && (*(uint *)(plVar7 + 4) <= param_3)) {
          FUN_10052f300(param_2 + 0x12030);
        }
      }
    }
    else {
LAB_10052ea98:
      lVar6 = lVar1 + (ulong)param_3 * 0x120;
      *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_2 + 0x12048);
      local_64 = 8;
      iVar3 = FUN_1005e5f0c(*plVar10,&local_64,0,0,0);
      if (iVar3 == 0 && local_64 != 2) {
        uVar9 = *(ushort *)(param_2 + 0x19050);
        uVar4 = (ulong)uVar9;
        if (uVar4 != 0xffff) {
          lVar1 = param_2 + 0x12050;
          puVar5 = (ushort *)(lVar1 + uVar4 * 0x38);
          if (uVar9 == *(ushort *)(param_2 + 0x19052)) {
            uVar9 = 0xffff;
          }
          else {
            uVar9 = *puVar5;
          }
          *(ushort *)(param_2 + 0x19050) = uVar9;
          lVar6 = lVar1 + uVar4 * 0x38;
          puVar5[0x12] = 0;
          puVar5[0x13] = 0;
          puVar5[0x14] = 0;
          puVar5[0x15] = 0;
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
          puVar5[0x10] = 0;
          puVar5[0x11] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[0] = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[10] = 0;
          puVar5[0xb] = 0;
          *(undefined4 *)(lVar6 + 0x2c) = 0x47c35000;
          *(int *)(param_2 + 0x19054) = *(int *)(param_2 + 0x19054) + 1;
          uVar11 = (int)((long)puVar5 - lVar1 >> 3) * 0x6db7;
          local_66 = (ushort)uVar11;
          *(undefined1 *)(param_2 + (ulong)local_66 + 0x19082) = 1;
          *(undefined4 *)(lVar6 + 0x30) = param_1;
          *(undefined2 *)(lVar6 + 0x34) = 1;
          *(long **)(lVar6 + 0x18) = plVar10;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          if (local_64 == 1) {
            FUN_10052ed1c(param_2 + 0x19070,&local_66);
            uVar11 = (uint)local_66;
          }
          else {
            FUN_10052e930(param_2);
          }
          goto LAB_10052ec54;
        }
        goto LAB_10052ec48;
      }
      puVar12 = (uint *)(param_2 + 0x19060);
      uVar11 = *puVar12;
      if (uVar11 != 0) {
        uVar4 = 0;
        do {
          iVar3 = (int)uVar4;
          if (*(long *)(*(long *)(param_2 + 0x19068) + uVar4 * 8) == *plVar10) {
            lVar6 = *(long *)(param_2 + 0x19068) + (long)iVar3 * 8;
            FUN_10052f294(puVar12,lVar6,lVar6 + 8);
            iVar3 = iVar3 + -1;
            uVar11 = *puVar12;
          }
          uVar4 = (ulong)(iVar3 + 1U);
        } while (iVar3 + 1U < uVar11);
      }
      FUN_1005e44b8(*plVar10);
      plVar7 = (long *)(param_2 + 0x12038);
      plVar8 = (long *)*plVar7;
      if (plVar8 != (long *)0x0) {
        do {
          if (*(uint *)(plVar8 + 4) >= param_3) {
            plVar7 = plVar8;
          }
          plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < param_3];
        } while (plVar8 != (long *)0x0);
        goto LAB_10052ebcc;
      }
    }
    if (*(short *)(param_2 + 0x12020) == -1) {
      sVar2 = (short)((uint)((int)plVar10 - (int)lVar1) >> 5) * -0x71c7;
      *(short *)(param_2 + 0x12022) = sVar2;
      *(short *)(param_2 + 0x12020) = sVar2;
    }
    else {
      uVar9 = *(ushort *)(param_2 + 0x12022);
      sVar2 = (short)((uint)((int)plVar10 - (int)lVar1) >> 5) * -0x71c7;
      *(short *)(param_2 + 0x12022) = sVar2;
      *(short *)(lVar1 + (ulong)uVar9 * 0x120) = sVar2;
    }
    *(int *)(param_2 + 0x12024) = *(int *)(param_2 + 0x12024) + -1;
  }
LAB_10052ec48:
  uVar11 = (uint)DAT_101867608;
LAB_10052ec54:
  return uVar11 & 0xffff;
}




void FUN_10052ed1c(uint *param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100015420(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined2 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 2 + -2) = *param_2;
  return;
}




void FUN_10052ed9c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x35) != '\0') {
    FUN_100627acc(*(undefined8 *)(param_2 + 0x20),param_2,param_2 + 0xc,0);
    FUN_100627da4(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                  *(undefined8 *)(param_2 + 0x20));
  }
  FUN_100625250(*(undefined4 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20));
  return;
}




bool FUN_10052ede8(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  char local_11;
  
  if ((DAT_101867608 == param_2) || (*(char *)(param_1 + (ulong)param_2 + 0x19082) == '\0')) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + (ulong)param_2 * 0x38 + 0x12070);
    if (lVar2 == 0) {
      bVar1 = true;
    }
    else {
      local_11 = '\0';
      FUN_1006261b0(lVar2,&local_11);
      bVar1 = local_11 != '\0';
    }
  }
  return bVar1;
}




void FUN_10052ee6c(undefined4 param_1,undefined4 param_2,long param_3,uint param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  if (DAT_101867608 != param_4) {
    param_3 = param_3 + (ulong)param_4 * 0x38;
    uVar1 = *param_5;
    *(undefined4 *)(param_3 + 0x12058) = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)(param_3 + 0x12050) = uVar1;
    uVar1 = *param_6;
    *(undefined4 *)(param_3 + 0x12064) = *(undefined4 *)(param_6 + 1);
    *(undefined8 *)(param_3 + 0x1205c) = uVar1;
    *(undefined4 *)(param_3 + 0x12078) = param_1;
    *(undefined4 *)(param_3 + 0x1207c) = param_2;
    *(undefined1 *)(param_3 + 0x12085) = 1;
    if (*(long *)(param_3 + 0x12070) != 0) {
      FUN_10052ed9c();
      return;
    }
  }
  return;
}




void FUN_10052eed4(undefined8 param_1,float param_2,long param_3)

{
  if (param_2 <= 0.016666668) {
    FUN_1005e8ba0(param_1,*(undefined8 *)(param_3 + 0x10));
    param_2 = 0.0;
  }
  else {
    param_2 = 1.0 / param_2;
  }
  *(float *)(param_3 + 0x18) = param_2;
  *(int *)(param_3 + 0x1c) = (int)param_1;
  return;
}




void FUN_10052ef30(long param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  long *plVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  if ((DAT_101867608 != param_2) &&
     (pcVar1 = (char *)(param_1 + (ulong)param_2 + 0x19082), *pcVar1 != '\0')) {
    lVar2 = param_1 + 0x12050;
    lVar10 = lVar2 + (ulong)param_2 * 0x38;
    *(undefined1 *)(lVar10 + 0x34) = 0;
    if (*(long *)(lVar10 + 0x20) == 0) {
      uVar3 = *(uint *)(param_1 + 0x19070);
      uVar9 = (ulong)uVar3;
      if (uVar3 != 0) {
        puVar7 = *(ushort **)(param_1 + 0x19078);
        do {
          if (*puVar7 == param_2) {
            FUN_1004e4084((uint *)(param_1 + 0x19070),puVar7,puVar7 + 1);
            break;
          }
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      FUN_100624fa8();
    }
    plVar6 = (long *)(lVar2 + (ulong)param_2 * 0x38 + 0x18);
    lVar8 = *plVar6;
    if (lVar8 != 0) {
      *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + -1;
      *plVar6 = 0;
    }
    if (*(short *)(param_1 + 0x19050) == -1) {
      sVar5 = (short)((uint)((int)lVar10 - (int)lVar2) >> 3) * 0x6db7;
      *(short *)(param_1 + 0x19052) = sVar5;
      *(short *)(param_1 + 0x19050) = sVar5;
    }
    else {
      uVar4 = *(ushort *)(param_1 + 0x19052);
      sVar5 = (short)((uint)((int)lVar10 - (int)lVar2) >> 3) * 0x6db7;
      *(short *)(param_1 + 0x19052) = sVar5;
      *(short *)(lVar2 + (ulong)uVar4 * 0x38) = sVar5;
    }
    *(int *)(param_1 + 0x19054) = *(int *)(param_1 + 0x19054) + -1;
    *pcVar1 = '\0';
  }
  return;
}




void FUN_10052f070(undefined4 param_1,long param_2,uint param_3)

{
  long lVar1;
  
  if (DAT_101867608 != param_3) {
    lVar1 = param_2 + 0x12050 + (ulong)param_3 * 0x38;
    *(undefined4 *)(lVar1 + 0x30) = param_1;
    if (*(long *)(lVar1 + 0x20) != 0) {
      FUN_10052ed9c(param_2,param_2 + 0x12050 + (ulong)param_3 * 0x38);
      return;
    }
  }
  return;
}




void FUN_10052f0b8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10052f394(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10052f138(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10052f138(param_1,*param_2);
    FUN_10052f138(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_10052f178(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_10052f1ec;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_10052f1ec:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_10052f240(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_10052f240(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_10052f294(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




long * FUN_10052f300(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_10052f394(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10052f410(void)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  iVar2 = _objc_msgSend(uVar3,"respondsToSelector:","secondaryAudioShouldBeSilencedHint");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  pcVar1 = "secondaryAudioShouldBeSilencedHint";
  if (iVar2 == 0) {
    pcVar1 = "isOtherAudioPlaying";
  }
  uVar3 = _objc_msgSend(uVar3,pcVar1);
  if (DAT_101d91878 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052f498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101d91878 + 8))(DAT_101d91878,uVar3);
    return;
  }
  return;
}




void FUN_10052f4ac(long param_1)

{
  if (DAT_101d91878 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052f4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*DAT_101d91878)(DAT_101d91878,param_1 != 0);
    return;
  }
  return;
}




void FUN_10052f4d4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = _objc_msgSend(param_1,"userInfo");
  uVar1 = _objc_msgSend(uVar1,"objectForKeyedSubscript:",
                        *(undefined8 *)PTR__AVAudioSessionInterruptionTypeKey_101444020);
  lVar2 = _objc_msgSend(uVar1,"unsignedIntegerValue");
  if (lVar2 != 1) {
    FUN_1004d29c0(0x5dc);
    thunk_FUN_10052f7d0(DAT_101867610);
  }
  lVar3 = FUN_1004e6820();
  if (lVar3 != 0) {
    FUN_1004e57e0(lVar3,FUN_10052f4ac,lVar2 == 1);
    return;
  }
  if (DAT_101d91878 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052f578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*DAT_101d91878)(DAT_101d91878,lVar2 == 1);
    return;
  }
  return;
}




void FUN_10052f588(long param_1)

{
  if (DAT_101d91878 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052f5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101d91878 + 8))(DAT_101d91878,param_1 != 0);
    return;
  }
  return;
}




void FUN_10052f5b0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = _objc_msgSend(param_1,"userInfo");
  uVar1 = _objc_msgSend(uVar1,"objectForKeyedSubscript:",
                        *(undefined8 *)PTR__AVAudioSessionSilenceSecondaryAudioHintTypeKey_101444050
                       );
  lVar2 = _objc_msgSend(uVar1,"unsignedIntegerValue");
  lVar3 = FUN_1004e6820();
  if (lVar3 != 0) {
    FUN_1004e57e0(lVar3,FUN_10052f588,lVar2 == 1);
    return;
  }
  if (DAT_101d91878 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052f638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101d91878 + 8))(DAT_101d91878,lVar2 == 1);
    return;
  }
  return;
}




void FUN_10052f648(void)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_101d91868 = 0;
  DAT_101d91870 = 0;
  lVar2 = *(long *)PTR__AVAudioSessionInterruptionNotification_101444018;
  if (lVar2 != 0) {
    uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    DAT_101d91868 =
         _objc_msgSend(uVar1,"addObserverForName:object:queue:usingBlock:",lVar2,0,0,
                       &PTR___NSConcreteGlobalBlock_10149f4e8);
  }
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  DAT_101d91870 =
       _objc_msgSend(uVar1,"addObserverForName:object:queue:usingBlock:",
                     *(undefined8 *)
                      PTR__AVAudioSessionSilenceSecondaryAudioHintNotification_101444048,0,0,
                     &PTR___NSConcreteGlobalBlock_10149f508);
  return;
}




void FUN_10052f714(undefined8 param_1,undefined8 param_2)

{
  FUN_10052f4d4(param_2);
  return;
}




void FUN_10052f71c(undefined8 param_1,undefined8 param_2)

{
  FUN_10052f5b0(param_2);
  return;
}




void FUN_10052f724(undefined8 param_1)

{
  DAT_101d91878 = param_1;
  FUN_10052f648();
  FUN_10052f410();
  thunk_FUN_10052f7d0(DAT_101867610);
  return;
}




void FUN_10052f74c(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"removeObserver:",DAT_101d91868);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"removeObserver:",DAT_101d91870);
  return;
}




void FUN_10052f7b4(void)

{
  DAT_101d91880 = 1;
  return;
}




void FUN_10052f7c4(void)

{
  DAT_101d91880 = 0;
  FUN_10052f410();
  return;
}




void FUN_10052f7d0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_48;
  
  if (DAT_101d91880 != '\0') {
    return;
  }
  local_48 = 0;
  uVar1 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryAmbient_101444000;
  uVar5 = *(undefined8 *)PTR__AVAudioSessionModeDefault_101444028;
  uVar2 = 1;
  switch(param_1) {
  case 0:
    uVar2 = 0;
    goto LAB_10052f920;
  case 1:
    break;
  case 2:
    uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_101444008;
    uVar5 = *(undefined8 *)PTR__AVAudioSessionModeVoiceChat_101444040;
    uVar2 = 0x21;
    break;
  case 3:
    uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_101444010;
    puVar3 = (undefined8 *)PTR__AVAudioSessionModeMoviePlayback_101444030;
    goto LAB_10052f8cc;
  case 4:
    uVar4 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_101444008;
    puVar3 = (undefined8 *)PTR__AVAudioSessionModeVideoRecording_101444038;
LAB_10052f8cc:
    uVar2 = 0;
    uVar5 = *puVar3;
    break;
  default:
    uVar2 = 0;
  }
  DAT_101867610 = param_1;
  _objc_msgSend(uVar1,"setCategory:withOptions:error:",uVar4,uVar2,&local_48);
  local_48 = 0;
  _objc_msgSend(uVar1,"setMode:error:",uVar5,&local_48);
  uVar2 = 1;
LAB_10052f920:
  _objc_msgSend(uVar1,"setActive:error:",uVar2,&local_48);
  if (local_48 != 0) {
    uVar1 = _objc_msgSend(local_48,"debugDescription");
    _objc_msgSend(uVar1,"UTF8String");
  }
  _objc_msgSend(uVar4,"UTF8String");
  _objc_msgSend(uVar5,"UTF8String");
  FUN_10052f410();
  return;
}




bool FUN_10052f978(void)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  dVar2 = (double)_objc_msgSend(uVar1,"outputLatency");
  return 60.0 < dVar2 * 1000.0;
}




void FUN_10052f9c4(void)

{
  DAT_101e947e0 = operator_new(0x28);
  DAT_101e947e0[1] = 0;
  *DAT_101e947e0 = 0;
  DAT_101e947e0[3] = 0;
  DAT_101e947e0[2] = 0;
  *(undefined4 *)(DAT_101e947e0 + 4) = 0;
  return;
}




void thunk_FUN_10052f9f4(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101e947e0;
  if (DAT_101e947e0 != (void *)0x0) {
    if (*(void **)((long)DAT_101e947e0 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101e947e0 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101e947e0 = (void *)0x0;
  return;
}




void FUN_10052f9f4(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101e947e0;
  if (DAT_101e947e0 != (void *)0x0) {
    if (*(void **)((long)DAT_101e947e0 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101e947e0 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101e947e0 = (void *)0x0;
  return;
}




long FUN_10052fa40(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_10052ffb4_10149f538;
  puVar2[0x45] = puVar2;
  *(ushort *)(puVar2 + 0x46) = *(ushort *)(puVar2 + 0x46) & 0x8000 | 0x3ff;
  puVar2[0x18] = 0;
  puVar3 = puVar2 + 0x17;
  *puVar3 = 0;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  *(undefined4 *)(puVar2 + 0x47) = 0xbf800000;
  *(byte *)((long)puVar2 + 0x23c) = *(byte *)((long)puVar2 + 0x23c) & 0xfc;
  FUN_10052fd2c(puVar3,0,0,0,FUN_10052fd7c,0,0,0);
  FUN_10052fd2c(puVar3,1,0,0,FUN_10052fd88,0,0,0);
  FUN_10052fd2c(puVar3,2,0,0,FUN_10052fd94,0,0,0);
  FUN_10052fd2c(puVar3,3,0,0,FUN_10052fde4,0,0,0);
  FUN_10052fdf0(puVar3,0,3);
  FUN_10052fdf0(puVar3,1,3);
  FUN_10052fdf0(puVar3,2,3);
  FUN_10052fdf0(puVar3,1,2);
  FUN_10052fdf0(puVar3,0,1);
  FUN_10052fdf0(puVar3,1,0);
  FUN_10052fdf0(puVar3,3,0);
  FUN_10052fdf0(puVar3,2,0);
  FUN_10052fe74(puVar3,0);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  local_38 = DAT_101dbd458;
  local_60 = FUN_10052ff88;
  lVar1 = param_1 + 8;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd484;
  local_60 = FUN_10052ff88;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd45c;
  local_60 = FUN_10052ff90;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd488;
  local_60 = FUN_10052ff90;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd460;
  local_60 = FUN_10052ffa4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_10052ffa4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  local_38 = DAT_101dbd4a4;
  local_60 = FUN_10052ffac;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(lVar1,&local_60);
  return param_1;
}




void FUN_10052fd2c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + ((ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x48) = FUN_100538264;
  *(code **)(lVar1 + 0x50) = FUN_100538264;
  *(code **)(lVar1 + 0x58) = FUN_100538264;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x178) =
       *(ushort *)(param_1 + 0x178) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x178) & 0x83ff;
  return;
}




void FUN_10052fd7c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010052fd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_10052fd88(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010052fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_10052fd94(long *param_1)

{
  long *local_30;
  code *pcStack_28;
  
  (**(code **)(*param_1 + 0x140))();
  pcStack_28 = FUN_100538288;
  local_30 = param_1;
  FUN_100643618((int)param_1[0x47],&local_30,0,0);
  return;
}




void FUN_10052fde4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010052fdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_10052fdf0(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f;
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    uVar1 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_2) goto LAB_10052fe24;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar3 != uVar1);
    uVar1 = 0xffffffff;
LAB_10052fe24:
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_3) {
        if ((int)uVar1 == -1) {
          return;
        }
        param_1 = param_1 + (long)(int)uVar1 * 0x58;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar4 & 0x1f);
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar2 != uVar4);
  }
  return;
}




void FUN_10052fe74(int *param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  if ((uVar2 >> 10 & 0x1f) != 0) {
    uVar3 = 0;
    piVar5 = param_1 + 4;
    do {
      if (*piVar5 == param_2) goto LAB_10052feb8;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 0x16;
    } while ((uVar2 >> 10 & 0x1f) != uVar3);
  }
  uVar3 = 0x1f;
LAB_10052feb8:
  uVar4 = (ulong)uVar2 & 0x1f;
  if ((uint)uVar4 == 0x1f) {
    uVar2 = uVar2 & 0xfc1f;
  }
  else {
    if (uVar3 == (uint)uVar4) {
      return;
    }
    if (((uint)param_1[uVar4 * 0x16 + 0x18] >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x5e) = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar4 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar4 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar4 * 0x16 + 0x10),uVar1);
    uVar2 = *(ushort *)(param_1 + 0x5e);
  }
  uVar3 = uVar3 & 0x1f;
  *(ushort *)(param_1 + 0x5e) = (ushort)uVar3 | uVar2 & 0xfc00 | 0x3e0;
  if (uVar3 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010052ff84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar3 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 0xc),uVar1);
  return;
}




void FUN_10052ff88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1005300b0(param_1,param_4);
  return;
}




void FUN_10052ff90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(byte *)(param_1 + 0x23c) >> 1 & 1) == 0) {
    return;
  }
  FUN_100644b14(param_4);
  return;
}




void FUN_10052ffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100530120(param_1,param_4);
  return;
}




void FUN_10052ffac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10053023c(param_1,param_4);
  return;
}




void FUN_10052ffb4(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_10052ffb4_10149f538;
  pcStack_28 = FUN_100538288;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_100538200(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10052ffb4(void)

{
  FUN_10052ffb4();
  return;
}

