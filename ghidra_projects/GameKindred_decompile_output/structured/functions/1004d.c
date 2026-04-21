// functions/1004d — 111 functions
#include "GameKindred.h"



/*
Unable to decompile 'FUN_1004be784'
Cause: Exception while decompiling 1004be784: process: timeout

*/


size_t FUN_1004d0ee0(undefined8 param_1,long param_2,char *param_3,char *param_4,ulong param_5,
                    char *param_6)

{
  char *pcVar1;
  int iVar2;
  FILE *pFVar3;
  size_t sVar4;
  FILE *local_48;
  
  if (param_4 == (char *)0x0) {
    return 0;
  }
  if ((int)param_5 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  pFVar3 = _fopen(param_6,"rb");
  local_48 = pFVar3;
  if (pFVar3 != (FILE *)0x0) {
    iVar2 = FUN_1004d0fb0(&local_48,param_1,param_2,0xffffffff,0xffffffff,param_4,param_5,0);
    _fclose(pFVar3);
    if (iVar2 != 0) goto LAB_1004d0f90;
  }
  pcVar1 = "";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  FUN_1004d12e0(param_4,pcVar1,param_5 & 0xffffffff,0);
LAB_1004d0f90:
  sVar4 = _strlen(param_4);
  return sVar4;
}




void FUN_1004d0fb0(undefined8 *param_1,char *param_2,char *param_3,int param_4,int param_5,
                  undefined8 param_6,int param_7,long *param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 local_474;
  byte abStack_470 [1024];
  long local_70;
  size_t sVar5;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 == (char *)0x0) {
    iVar2 = 0;
  }
  else {
    sVar5 = _strlen(param_2);
    iVar2 = (int)sVar5;
  }
  if ((iVar2 < 1) && (param_4 < 0)) {
LAB_1004d1020:
    if (param_3 == (char *)0x0) {
      iVar2 = 0;
    }
    else {
      sVar5 = _strlen(param_3);
      iVar2 = (int)sVar5;
    }
    iVar12 = -1;
    do {
      do {
        if (param_8 != (long *)0x0) {
          lVar7 = _ftell((FILE *)*param_1);
          *param_8 = lVar7;
        }
        pcVar8 = _fgets((char *)abStack_470,0x400,(FILE *)*param_1);
        uVar6 = 0;
        if (pcVar8 == (char *)0x0) goto LAB_1004d1268;
        pbVar10 = abStack_470;
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 - 1 < 0x20);
        if (bVar1 == 0x5b) goto LAB_1004d1264;
        pbVar9 = abStack_470;
        iVar4 = iVar2 + (int)abStack_470;
        do {
          iVar3 = iVar4;
          pbVar10 = pbVar9;
          bVar1 = *pbVar10;
          pbVar9 = pbVar10 + 1;
          iVar4 = iVar3 + 1;
        } while (bVar1 - 1 < 0x20);
        pbVar9 = (byte *)_strchr((char *)pbVar10,0x3d);
        if (pbVar9 == (byte *)0x0) {
          pbVar9 = (byte *)_strchr((char *)pbVar10,0x3a);
        }
      } while (((bVar1 == 0x3b) || (bVar1 == 0x23)) || (pbVar9 == (byte *)0x0));
      if (iVar2 != 0) {
        pbVar11 = pbVar9;
        iVar4 = iVar3 - (int)pbVar9;
        do {
          iVar3 = iVar4;
          if (pbVar11 <= pbVar10) break;
          pbVar11 = pbVar11 + -1;
          iVar4 = iVar3 + 1;
        } while (*pbVar11 - 1 < 0x20);
        if ((iVar3 == 0) && (iVar4 = _strncasecmp((char *)pbVar10,param_3,(long)iVar2), iVar4 == 0))
        {
          if (param_5 < 0) goto LAB_1004d12a8;
          goto LAB_1004d1214;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != param_5);
    iVar12 = param_5;
    if (-1 < param_5) {
LAB_1004d1214:
      if (iVar12 != param_5) {
LAB_1004d1264:
        uVar6 = 0;
        goto LAB_1004d1268;
      }
      *pbVar9 = 0;
      sVar5 = _strlen((char *)pbVar10);
      pbVar9 = pbVar10 + sVar5;
      do {
        pbVar11 = pbVar9;
        if (pbVar11 <= pbVar10) break;
        pbVar9 = pbVar11 + -1;
      } while (pbVar11[-1] - 1 < 0x20);
      *pbVar11 = 0;
      goto LAB_1004d10e4;
    }
LAB_1004d12a8:
    do {
      pbVar9 = pbVar9 + 1;
    } while (*pbVar9 - 1 < 0x20);
    pbVar10 = (byte *)FUN_1004d15d0(pbVar9,&local_474);
  }
  else {
    iVar12 = -1;
    do {
      pcVar8 = _fgets((char *)abStack_470,0x400,(FILE *)*param_1);
      uVar6 = 0;
      if (pcVar8 == (char *)0x0) goto LAB_1004d1268;
      pbVar10 = abStack_470;
      iVar4 = iVar2 + (int)abStack_470;
      do {
        pbVar9 = pbVar10;
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        iVar4 = iVar4 + 1;
      } while (bVar1 - 1 < 0x20);
      pcVar8 = _strchr((char *)pbVar9,0x5d);
    } while ((bVar1 != 0x5b || pcVar8 == (char *)0x0) ||
            ((((int)pcVar8 != iVar4 ||
              (iVar3 = _strncasecmp((char *)pbVar10,param_2,(long)iVar2), iVar4 = iVar12, iVar3 != 0
              )) && (iVar12 = iVar12 + 1, iVar4 = param_4, iVar12 != param_4))));
    if (param_4 < 0) goto LAB_1004d1020;
    if (iVar4 != param_4) goto LAB_1004d1264;
    *pcVar8 = '\0';
LAB_1004d10e4:
    local_474 = 0;
  }
  FUN_1004d12e0(param_6,pbVar10,(long)param_7,local_474);
  uVar6 = 1;
LAB_1004d1268:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar6);
}




void FUN_1004d12e0(undefined1 *param_1,char *param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  
  iVar1 = 0;
  if (2 < param_3 || param_4 != 1) {
    iVar1 = param_4;
  }
  if (iVar1 == 0) {
    uVar3 = 0;
    param_3 = param_3 - 1;
    uVar2 = uVar3;
    if (param_3 != 0) {
      do {
        uVar2 = uVar3;
        if (param_2[uVar3] == '\0') break;
        param_1[uVar3] = param_2[uVar3];
        uVar3 = uVar3 + 1;
        uVar2 = param_3;
      } while (param_3 != uVar3);
    }
  }
  else if (iVar1 == 1) {
    *param_1 = 0x22;
    cVar5 = *param_2;
    uVar2 = 1;
    if ((cVar5 != '\0') && (1 < param_3 - 2)) {
      uVar2 = 1;
      do {
        if (cVar5 == '\"') {
          if (param_3 - 3 <= uVar2) break;
          param_1[uVar2] = 0x5c;
          uVar2 = uVar2 + 1;
          cVar5 = *param_2;
        }
        param_1[uVar2] = cVar5;
        uVar2 = uVar2 + 1;
        cVar5 = param_2[1];
        param_2 = param_2 + 1;
      } while (cVar5 != '\0' && uVar2 < param_3 - 2);
    }
    param_1[uVar2] = 0x22;
    uVar2 = uVar2 + 1;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    cVar5 = *param_2;
    uVar2 = 0;
    if ((cVar5 != '\0') && (param_3 != 1)) {
      lVar4 = 0;
      uVar2 = 0;
      do {
        if (((cVar5 == '\\') || (cVar5 == '\"')) && (param_2[lVar4 + 1] == '\"')) {
          lVar4 = lVar4 + 1;
        }
        param_1[uVar2] = param_2[lVar4];
        lVar4 = lVar4 + 1;
        uVar2 = uVar2 + 1;
        cVar5 = param_2[lVar4];
      } while (cVar5 != '\0' && uVar2 < param_3 - 1);
    }
  }
  param_1[uVar2] = 0;
  return;
}




long FUN_1004d1404(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  __darwin_ct_rune_t _Var2;
  char cStack_68;
  char local_67;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_1004d0ee0(param_1,param_2,"",&cStack_68,0x40,param_4);
  if (iVar1 != 0) {
    if ((iVar1 < 2) || (_Var2 = ___toupper((int)local_67), _Var2 != 0x58)) {
      iVar1 = 10;
    }
    else {
      iVar1 = 0x10;
    }
    param_3 = _strtol(&cStack_68,(char **)0x0,iVar1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1  [16]
FUN_1004d14a8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  char acStack_68 [64];
  long local_28;
  
  uVar5 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_1004d0ee0(param_2,param_3,"",acStack_68,0x40,param_4);
  if (iVar1 != 0) {
    dVar2 = _strtod(acStack_68,(char **)0x0);
    uVar4 = (ulong)(uint)(float)dVar2;
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    auVar3._8_8_ = uVar5;
    auVar3._0_8_ = uVar4;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1004d1528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  __darwin_ct_rune_t _Var2;
  int iVar3;
  undefined2 local_22;
  
  local_22 = 0;
  FUN_1004d0ee0(param_1,param_2,"",&local_22,2,param_4);
  _Var2 = ___toupper((int)(char)local_22);
  iVar1 = _Var2 * 0x1000000;
  if (iVar1 < 0x4e000000) {
    if (iVar1 == 0x30000000) {
      return 0;
    }
    if (iVar1 == 0x31000000) {
      return 1;
    }
    iVar3 = 0x46000000;
  }
  else {
    if (iVar1 == 0x59000000 || iVar1 == 0x54000000) {
      return 1;
    }
    iVar3 = 0x4e000000;
  }
  if (iVar1 == iVar3) {
    return 0;
  }
  return param_3;
}




byte * FUN_1004d15d0(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  size_t sVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar2 = false;
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    pbVar6 = pbVar5;
    if (bVar1 < 0x3b) {
      if (bVar1 == 0x22) {
        bVar3 = pbVar5[1] == 0x22;
        if (!bVar3) {
          bVar2 = !bVar2;
        }
LAB_1004d1650:
        pbVar6 = pbVar5 + 1;
        if (!bVar3) {
          pbVar6 = pbVar5;
        }
      }
      else if (bVar1 == 0x23) {
LAB_1004d1620:
        if (!bVar2) break;
      }
      else if (bVar1 == 0) break;
    }
    else {
      if (bVar1 == 0x5c) {
        bVar3 = pbVar5[1] == 0x22;
        goto LAB_1004d1650;
      }
      if (bVar1 == 0x3b) goto LAB_1004d1620;
    }
    pbVar5 = pbVar6 + 1;
  } while( true );
  *pbVar5 = 0;
  sVar4 = _strlen((char *)param_1);
  pbVar5 = param_1 + sVar4;
  do {
    pbVar6 = pbVar5;
    if (pbVar6 <= param_1) break;
    pbVar5 = pbVar6 + -1;
  } while (pbVar6[-1] - 1 < 0x20);
  *pbVar6 = 0;
  *param_2 = 0;
  if (*param_1 == 0x22) {
    sVar4 = _strlen((char *)param_1);
    pbVar5 = param_1 + sVar4;
    if ((pbVar5 != (byte *)0x0) && (pbVar5[-1] == 0x22)) {
      param_1 = param_1 + 1;
      pbVar5[-1] = 0;
      *param_2 = 2;
    }
  }
  return param_1;
}




void FUN_1004d16dc(char *param_1,char *param_2,char *param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  FILE *pFVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined8 uVar13;
  int iVar14;
  byte *pbVar15;
  int local_494;
  long local_490;
  long local_488;
  FILE *local_480;
  undefined8 local_478;
  byte abStack_470 [1024];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  local_478 = _fopen(param_4,"rb");
  bVar2 = param_2 == (char *)0x0;
  bVar3 = param_3 == (char *)0x0;
  if (local_478 != (FILE *)0x0) {
    if (!bVar2 && !bVar3) {
      lVar7 = _ftell(local_478);
      iVar5 = FUN_1004d0fb0(&local_478,param_1,param_2,0xffffffff,0xffffffff,abStack_470,0x400,
                            &local_490);
      if (iVar5 != 0) {
        iVar5 = _strcmp((char *)abStack_470,param_3);
        pFVar10 = local_478;
        if (iVar5 != 0) {
          lVar8 = _ftell(local_478);
          FUN_1004d1da4(abStack_470,param_2,param_3,0);
          sVar9 = _strlen((char *)abStack_470);
          if (sVar9 != lVar8 - local_490) goto LAB_1004d1850;
          _fclose(local_478);
          local_480 = _fopen(param_4,"r+b");
          uVar13 = 0;
          if (local_480 == (FILE *)0x0) goto LAB_1004d1cf4;
          _fseek(local_480,local_490,0);
          _fputs((char *)abStack_470,local_480);
          pFVar10 = local_480;
        }
LAB_1004d1848:
        _fclose(pFVar10);
        goto LAB_1004d1cf0;
      }
LAB_1004d1850:
      _fseek(local_478,lVar7,0);
    }
    FUN_1004d12e0(abStack_470,param_4,0x400,0);
    sVar9 = _strlen((char *)abStack_470);
    abStack_470[sVar9 - 1] = 0x7e;
    local_480 = _fopen((char *)abStack_470,"wb");
    if (local_480 == (FILE *)0x0) {
      _fclose(local_478);
      uVar13 = 0;
      goto LAB_1004d1cf4;
    }
    local_488 = _ftell(local_478);
    local_494 = 0;
    if (param_1 == (char *)0x0) {
LAB_1004d1a0c:
      FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
      if (param_2 == (char *)0x0) {
        _fgets((char *)abStack_470,0x400,local_478);
        local_488 = _ftell(local_478);
LAB_1004d1a68:
        iVar5 = 0;
      }
      else {
        if (param_2 == (char *)0x0) goto LAB_1004d1a68;
        sVar9 = _strlen(param_2);
        iVar5 = (int)sVar9;
      }
      pcVar11 = _fgets((char *)abStack_470,0x400,local_478);
      if (pcVar11 != (char *)0x0) {
        pbVar12 = abStack_470;
        do {
          do {
            pbVar15 = pbVar12;
            bVar1 = *pbVar15;
            pbVar12 = pbVar15 + 1;
          } while (bVar1 - 1 < 0x20);
          pbVar12 = (byte *)_strchr((char *)pbVar15,0x3d);
          if (pbVar12 == (byte *)0x0) {
            pbVar12 = (byte *)_strchr((char *)pbVar15,0x3a);
            if (pbVar12 == (byte *)0x0) goto LAB_1004d1b20;
LAB_1004d1ac4:
            if (iVar5 < 1) goto LAB_1004d1b20;
            iVar6 = (iVar5 + (int)pbVar15) - (int)pbVar12;
            do {
              iVar14 = iVar6;
              if (pbVar12 <= pbVar15) break;
              pbVar12 = pbVar12 + -1;
              iVar6 = iVar14 + 1;
            } while (*pbVar12 - 1 < 0x20);
            if ((iVar14 != 0) ||
               (iVar6 = _strncasecmp((char *)pbVar15,param_2,(long)iVar5),
               param_2 == (char *)0x0 || iVar6 != 0)) goto LAB_1004d1b20;
LAB_1004d1bf8:
            FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
            if (!bVar2 && !bVar3) {
              FUN_1004d1da4(abStack_470,param_2,param_3,&local_480);
            }
            _fgets((char *)abStack_470,0x400,local_478);
            if (bVar1 == 0x5b) goto LAB_1004d1c50;
            local_488 = _ftell(local_478);
            goto LAB_1004d1c6c;
          }
          if (pbVar12 != (byte *)0x0) goto LAB_1004d1ac4;
LAB_1004d1b20:
          if (bVar1 == 0x5b) goto LAB_1004d1bf8;
          if (param_2 == (char *)0x0) {
            local_488 = _ftell(local_478);
          }
          else {
            sVar9 = _strlen((char *)abStack_470);
            iVar6 = local_494 + (int)sVar9;
            if (0x3ff < iVar6) {
              FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
              _fgets((char *)abStack_470,0x400,local_478);
              sVar9 = _strlen((char *)abStack_470);
              iVar6 = local_494 + (int)sVar9;
              if (0x3ff < iVar6) goto LAB_1004d1b98;
            }
            local_494 = iVar6;
          }
LAB_1004d1b98:
          pcVar11 = _fgets((char *)abStack_470,0x400,local_478);
          pbVar12 = abStack_470;
        } while (pcVar11 != (char *)0x0);
      }
      iVar5 = FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
      if (bVar2 || bVar3) goto LAB_1004d1cdc;
      if (iVar5 == 0) {
        _fputs("\n",local_480);
      }
    }
    else {
      sVar9 = _strlen(param_1);
      iVar5 = (int)sVar9;
      if (iVar5 < 1) goto LAB_1004d1a0c;
      pcVar11 = _fgets((char *)abStack_470,0x400,local_478);
      if (pcVar11 != (char *)0x0) {
        pbVar12 = abStack_470;
        do {
          do {
            pbVar15 = pbVar12;
            bVar1 = *pbVar15;
            pbVar12 = pbVar15 + 1;
          } while (bVar1 - 1 < 0x20);
          pcVar11 = _strchr((char *)pbVar15,0x5d);
          if ((bVar1 == 0x5b && pcVar11 != (char *)0x0) && (iVar5 == (int)pcVar11 + ~(uint)pbVar15))
          {
            iVar6 = _strncasecmp((char *)(pbVar15 + 1),param_1,(long)iVar5);
            bVar4 = iVar6 == 0;
            if ((iVar6 != 0) || (param_2 != (char *)0x0)) goto LAB_1004d1950;
          }
          else {
            bVar4 = false;
LAB_1004d1950:
            sVar9 = _strlen((char *)abStack_470);
            iVar6 = local_494 + (int)sVar9;
            if (0x3ff < iVar6) {
              FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
              _fgets((char *)abStack_470,0x400,local_478);
              sVar9 = _strlen((char *)abStack_470);
              iVar6 = local_494 + (int)sVar9;
              if (0x3ff < iVar6) goto LAB_1004d19ac;
            }
            local_494 = iVar6;
          }
LAB_1004d19ac:
          if (bVar4) goto LAB_1004d1a0c;
          pcVar11 = _fgets((char *)abStack_470,0x400,local_478);
          pbVar12 = abStack_470;
        } while (pcVar11 != (char *)0x0);
      }
      iVar5 = FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
      if (bVar2 || bVar3) goto LAB_1004d1cdc;
      if (iVar5 == 0) {
        _fputs("\n",local_480);
      }
      FUN_1004d1d30(abStack_470,param_1,&local_480);
    }
    FUN_1004d1da4(abStack_470,param_2,param_3,&local_480);
    goto LAB_1004d1cdc;
  }
  if (!bVar2 && !bVar3) {
    local_480 = _fopen(param_4,"wb");
    uVar13 = 0;
    if (local_480 == (FILE *)0x0) goto LAB_1004d1cf4;
    FUN_1004d1d30(abStack_470,param_1,&local_480);
    FUN_1004d1da4(abStack_470,param_2,param_3,&local_480);
    pFVar10 = local_480;
    goto LAB_1004d1848;
  }
  goto LAB_1004d1cf0;
code_r0x0001004d1c98:
  FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
  _fgets((char *)abStack_470,0x400,local_478);
LAB_1004d1c50:
  sVar9 = _strlen((char *)abStack_470);
  iVar5 = local_494 + (int)sVar9;
  if (iVar5 < 0x400) {
LAB_1004d1c68:
    local_494 = iVar5;
  }
LAB_1004d1c6c:
  pcVar11 = _fgets((char *)abStack_470,0x400,local_478);
  if (pcVar11 != (char *)0x0) {
    sVar9 = _strlen((char *)abStack_470);
    iVar5 = local_494 + (int)sVar9;
    if (0x3ff < iVar5) goto code_r0x0001004d1c98;
    goto LAB_1004d1c68;
  }
  FUN_1004d1e80(abStack_470,&local_494,&local_478,&local_480,&local_488);
LAB_1004d1cdc:
  FUN_1004d1fac(&local_478,&local_480,param_4,abStack_470);
LAB_1004d1cf0:
  uVar13 = 1;
LAB_1004d1cf4:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar13);
  }
  return;
}




char * FUN_1004d1d30(char *param_1,char *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *param_1 = '[';
    FUN_1004d12e0(param_1 + 1,param_2,0x3fc,0);
    pcVar3 = (char *)_strlen(param_1);
    pcVar1 = param_1 + (long)pcVar3;
    *pcVar1 = ']';
    pcVar1[1] = '\n';
    pcVar1[2] = '\0';
    if (param_3 != (undefined8 *)0x0) {
      uVar2 = _fputs(param_1,(FILE *)*param_3);
      return (char *)(ulong)uVar2;
    }
  }
  return pcVar3;
}




ulong FUN_1004d1da4(char *param_1,undefined8 param_2,byte *param_3,undefined8 *param_4)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  size_t sVar5;
  ulong uVar6;
  byte *pbVar7;
  
  pbVar7 = param_3;
  while( true ) {
    bVar2 = *pbVar7;
    if (bVar2 - 0x22 < 2) break;
    if (bVar2 == 0) {
      if (param_3 < pbVar7) {
        bVar3 = pbVar7[-1] == 0x20;
      }
      else {
        bVar3 = false;
      }
      goto LAB_1004d1dec;
    }
    if (bVar2 == 0x3b) break;
    pbVar7 = pbVar7 + 1;
  }
  bVar3 = true;
LAB_1004d1dec:
  FUN_1004d12e0(param_1,param_2,0x3fd,0);
  sVar5 = _strlen(param_1);
  pcVar1 = param_1 + sVar5;
  *pcVar1 = '=';
  FUN_1004d12e0(pcVar1 + 1,param_3,param_1 + (0x3fe - (long)(pcVar1 + 1)),bVar3);
  uVar6 = _strlen(param_1);
  (param_1 + uVar6)[0] = '\n';
  (param_1 + uVar6)[1] = '\0';
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = _fputs(param_1,(FILE *)*param_4);
    return (ulong)uVar4;
  }
  return uVar6;
}




bool FUN_1004d1e80(char *param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4,long *param_5
                  )

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  _fseek((FILE *)*param_3,*param_5,0);
  *param_1 = '\0';
  if ((int)*param_2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      _fgets(param_1 + (int)uVar5,0x400 - uVar5,(FILE *)*param_3);
      uVar6 = *param_2;
      if ((int)uVar5 < (int)uVar6) {
        pcVar3 = param_1 + (int)uVar5;
        lVar4 = (long)(int)uVar6 - (long)(int)uVar5;
        while (*pcVar3 != '\0') {
          uVar5 = uVar5 + 1;
          pcVar3 = pcVar3 + 1;
          lVar4 = lVar4 + -1;
          if (lVar4 == 0) goto LAB_1004d1f2c;
        }
      }
      bVar1 = (int)uVar5 < (int)uVar6;
      uVar6 = uVar5;
    } while (bVar1);
LAB_1004d1f2c:
    uVar5 = uVar6;
    if (*param_1 != '\0') {
      uVar5 = 0x3ff;
      if (uVar6 != 0x400) {
        uVar5 = uVar6;
      }
      param_1[(int)uVar5] = '\0';
      _fputs(param_1,(FILE *)*param_4);
    }
  }
  lVar4 = _ftell((FILE *)*param_3);
  bVar1 = false;
  *param_5 = lVar4;
  *param_2 = 0;
  if (1 < (int)uVar5) {
    iVar2 = _strcmp(param_1 + ((ulong)uVar5 - 1),"\n");
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




int FUN_1004d1fac(undefined8 *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  
  _fclose((FILE *)*param_1);
  _fclose((FILE *)*param_2);
  _remove(param_3);
  FUN_1004d12e0(param_4,param_3,0x400,0);
  sVar2 = _strlen(param_4);
  param_4[sVar2 - 1] = '~';
  iVar1 = _rename(param_4,param_3);
  return iVar1;
}




void FUN_1004d2020(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar7 = 0;
  lVar8 = param_3;
  do {
    uVar6 = uVar7;
    iVar4 = (int)lVar8 + (int)(lVar8 / 10) * -10;
    iVar2 = -iVar4;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    local_58[uVar6] = (char)iVar2 + '0';
    uVar7 = uVar6 + 1;
    uVar1 = lVar8 + 9;
    lVar8 = lVar8 / 10;
  } while (0x12 < uVar1);
  if (param_3 < 0) {
    local_58[uVar7 & 0xffffffff] = '-';
    uVar7 = uVar6 + 2;
  }
  local_58[(int)uVar7] = '\0';
  sVar5 = _strlen(local_58);
  if (1 < (int)sVar5) {
    lVar8 = 0;
    lVar9 = (long)(int)sVar5 + -1;
    do {
      cVar3 = local_58[lVar8];
      local_58[lVar8] = local_58[lVar9];
      local_58[lVar9] = cVar3;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar8 < lVar9);
  }
  FUN_1004d16dc(param_1,param_2,local_58,param_4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004d2138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  ___sprintf_chk(auStack_78,0,0x40,"%f");
  FUN_1004d16dc(param_1,param_2,auStack_78,param_3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_1004d21cc(void)

{
  return DAT_101e943d8 != 0;
}




void FUN_1004d21e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  tm *ptVar2;
  time_t tStack_8a8;
  char acStack_898 [64];
  undefined1 auStack_858 [2048];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101e943d8 != (code *)0x0) {
    iVar1 = FUN_1004d26e8(auStack_858,0x800,param_6,&stack0x00000000);
    if (0 < iVar1) {
      _time(&tStack_8a8);
      ptVar2 = _localtime(&tStack_8a8);
      _strftime(acStack_898,0x40,"%Y-%m-%dT%H:%M:%S%z",ptVar2);
      (*DAT_101e943d8)(param_1,DAT_101e943e0,param_2,param_3,acStack_898,param_4,param_5,auStack_858
                      );
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004d22dc(long param_1)

{
  if (param_1 != 0) {
    FUN_1004d25b8(&DAT_101d91034,0x100,param_1);
    return;
  }
  return;
}




void FUN_1004d22f8(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  FUN_1004d2b50();
  uVar2 = _rand();
  for (iVar1 = (int)uVar2 % 0x10 + 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar2 = _rand();
  }
  uVar3 = (ulong)uVar2;
  for (puVar4 = DAT_101d91138; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[1]) {
    uVar3 = (*(code *)*puVar4)(uVar3);
  }
  return;
}




int FUN_1004d235c(byte *param_1,undefined8 param_2,byte *param_3,int param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  char local_4 [4];
  
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar6 = 0;
    iVar4 = 0;
    bVar5 = false;
    iVar3 = 0;
    do {
      cVar2 = (&DAT_10115a05c)[*param_3];
      if (cVar2 == -0x36) {
        if (iVar6 == 3) {
          iVar4 = 1;
        }
        else {
          if (iVar6 != 2) {
            return iVar3;
          }
          param_4 = param_4 + -1;
          if (param_4 == 0) {
            return iVar3;
          }
          param_3 = param_3 + 1;
          if (*param_3 != 0x3d) {
            return iVar3;
          }
          local_4[2] = 0;
          iVar4 = 2;
        }
        local_4[3] = 0;
        bVar5 = true;
LAB_1004d240c:
        iVar3 = (iVar3 - iVar4) + 3;
        *param_1 = (byte)local_4[1] >> 4 | local_4[0] << 2;
        if (iVar4 == 2) {
          param_1 = param_1 + 1;
          iVar6 = 0;
        }
        else {
          param_1[1] = (byte)local_4[2] >> 2 | local_4[1] << 4;
          iVar6 = 0;
          if (iVar4 == 0) {
            param_1[2] = local_4[3] | local_4[2] << 6;
            param_1 = param_1 + 3;
          }
          else {
            param_1 = param_1 + 2;
          }
        }
      }
      else if (cVar2 == -0x37) {
LAB_1004d23a8:
        if ((param_6 & 1) == 0) {
          return iVar3;
        }
      }
      else if (cVar2 == -0x38) {
        if ((param_5 & 1) == 0) goto LAB_1004d23a8;
      }
      else {
        if (bVar5) {
          return iVar3;
        }
        bVar5 = false;
        iVar1 = iVar6 + 1;
        local_4[iVar6] = cVar2;
        iVar6 = iVar1;
        if (iVar1 == 4) goto LAB_1004d240c;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return iVar3;
}




void FUN_1004d2494(undefined8 param_1,ulong param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  
  std::string::resize((ulong)param_3,
                      (char)(param_2 >> 2) * '\x02' + (char)((uint)param_2 >> 2) + '\x01');
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  uVar2 = FUN_1004d235c(plVar1,extraout_x1,param_1,param_2,param_4,param_5);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  *(undefined1 *)((long)plVar1 + (uVar2 & 0xffffffff)) = 0;
  return;
}




void FUN_1004d2524(char *param_1)

{
  _strlen(param_1);
  return;
}




bool FUN_1004d2538(char *param_1)

{
  if (param_1 != (char *)0x0) {
    return *param_1 == '\0';
  }
  return true;
}




undefined8 FUN_1004d2554(char *param_1,uint param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    sVar1 = _strlen(param_1);
    if ((uint)sVar1 <= param_2) {
      uVar2 = FUN_1004d25b8(param_1 + (sVar1 & 0xffffffff),param_2 - (uint)sVar1,param_3);
      return uVar2;
    }
  }
  return 0xffffffff;
}




undefined4 FUN_1004d25b8(char *param_1,uint param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 == (char *)0x0) {
      *param_1 = '\0';
      uVar3 = 0xffffffff;
    }
    else {
      pcVar2 = _strncpy(param_1,param_3,(ulong)param_2);
      cVar1 = pcVar2[param_2 - 1];
      pcVar2[param_2 - 1] = '\0';
      uVar3 = 0;
      if (cVar1 != '\0') {
        uVar3 = 0xfffffffe;
      }
    }
  }
  return uVar3;
}




void FUN_1004d2628(char *param_1,char *param_2,ulong param_3)

{
  _strncpy(param_1,param_2,param_3 & 0xffffffff);
  return;
}




int FUN_1004d2638(char *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = _strncmp(param_1,param_2,param_3 & 0xffffffff);
  return iVar1;
}




int FUN_1004d2640(char *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = _strncasecmp(param_1,param_2,param_3 & 0xffffffff);
  return iVar1;
}




int FUN_1004d2650(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR____stdoutp_101444230;
  _vfprintf(*(FILE **)PTR____stdoutp_101444230,param_1,&stack0x00000000);
  iVar2 = _fflush(*(FILE **)puVar1);
  return iVar2;
}




int FUN_1004d2698(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _vsprintf(param_1,param_2,&stack0x00000000);
  return iVar1;
}




void FUN_1004d26c0(void)

{
  FUN_1004d26e8();
  return;
}




uint FUN_1004d26e8(char *param_1,uint param_2,char *param_3,va_list param_4)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 == (char *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = _vsnprintf(param_1,(ulong)param_2,param_3,param_4);
      if (uVar1 < param_2) {
        return uVar1;
      }
      param_1 = param_1 + (param_2 - 1);
    }
    *param_1 = '\0';
  }
  return uVar1;
}




long FUN_1004d2744(char *param_1,undefined1 *param_2)

{
  int *piVar1;
  long lVar2;
  char *local_28;
  
  piVar1 = ___error();
  *piVar1 = 0;
  lVar2 = _strtol(param_1,&local_28,10);
  *param_2 = 1;
  if ((lVar2 + 0x8000000000000001U < 2) && (piVar1 = ___error(), *piVar1 == 0x22)) {
    *param_2 = 0;
  }
  if (*local_28 != '\0') {
    *param_2 = 0;
  }
  return lVar2;
}




longlong FUN_1004d27c8(char *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char *local_28;
  
  piVar1 = ___error();
  *piVar1 = 0;
  lVar2 = _strtoll(param_1,&local_28,10);
  *param_2 = 1;
  if ((lVar2 + 0x8000000000000001U < 2) && (piVar1 = ___error(), *piVar1 == 0x22)) {
    *param_2 = 0;
  }
  if (*local_28 != '\0') {
    *param_2 = 0;
  }
  return lVar2;
}




float FUN_1004d284c(char *param_1)

{
  double dVar1;
  
  dVar1 = _atof(param_1);
  return (float)dVar1;
}




int FUN_1004d2864(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _vsscanf(param_1,param_2,&stack0x00000000);
  return iVar1;
}




void FUN_1004d288c(ulong param_1)

{
  _malloc(param_1 & 0xffffffff);
  return;
}




int FUN_1004d2898(void *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = _memcmp(param_1,param_2,param_3 & 0xffffffff);
  return iVar1;
}




void FUN_1004d28a8(void *param_1,ulong param_2,ulong param_3,FILE *param_4)

{
  _fread(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4);
  return;
}




void FUN_1004d28c8(void *param_1,ulong param_2,ulong param_3,FILE *param_4)

{
  _fwrite(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4);
  return;
}




bool FUN_1004d28e4(char *param_1)

{
  int iVar1;
  
  iVar1 = _access(param_1,0);
  return iVar1 == 0;
}




undefined4 FUN_1004d2904(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  stat sStack_a0;
  
  iVar2 = _stat(param_1,&sStack_a0);
  uVar1 = 0;
  if (iVar2 != -1) {
    uVar1 = (undefined4)sStack_a0.st_size;
  }
  return uVar1;
}




int FUN_1004d2934(FILE *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _vfprintf(param_1,param_2,&stack0x00000000);
  return iVar1;
}




void FUN_1004d295c(undefined8 param_1,undefined4 param_2,FILE *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = ___error();
  *piVar2 = 0;
  iVar1 = _fileno(param_3);
  _mmap(param_1,param_2,1,2,iVar1,param_4);
  return;
}




void FUN_1004d29b8(undefined8 param_1,undefined4 param_2)

{
  _munmap(param_1,param_2);
  return;
}




int FUN_1004d29c0(int param_1)

{
  int iVar1;
  
  iVar1 = _usleep(param_1 * 1000);
  return iVar1;
}




void FUN_1004d29d0(void)

{
  _time((time_t *)0x0);
  return;
}




int FUN_1004d29d8(uint param_1,ulong param_2)

{
  tm *ptVar1;
  float fVar2;
  time_t tStack_28;
  
  _time(&tStack_28);
  ptVar1 = _localtime(&tStack_28);
  fVar2 = 0.0;
  if ((param_2 & 1) == 0) {
    fVar2 = (float)ptVar1->tm_gmtoff * 0.00027777778;
  }
  return ((int)(fVar2 + (float)param_1) + 0x18) % 0x18;
}




int FUN_1004d2a5c(uint param_1,ulong param_2)

{
  tm *ptVar1;
  float fVar2;
  time_t tStack_28;
  
  _time(&tStack_28);
  ptVar1 = _localtime(&tStack_28);
  fVar2 = 0.0;
  if ((param_2 & 1) == 0) {
    fVar2 = (float)ptVar1->tm_gmtoff * 0.00027777778;
  }
  return ((int)((float)param_1 - fVar2) + 0x18) % 0x18;
}




long FUN_1004d2ae0(void)

{
  int iVar1;
  size_t local_38;
  int local_30 [2];
  long local_28 [2];
  long local_18;
  
  _time(&local_18);
  local_30[0] = 1;
  local_30[1] = 0x15;
  local_38 = 0x10;
  iVar1 = _sysctl(local_30,2,local_28,&local_38,(void *)0x0,0);
  if ((iVar1 == -1) || (local_28[0] == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = local_18 - local_28[0];
  }
  return local_18;
}




void FUN_1004d2b50(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  clock_t cVar4;
  time_t tVar5;
  
  cVar4 = _clock();
  tVar5 = _time((time_t *)0x0);
  uVar3 = _getpid();
  uVar1 = (int)cVar4 - (uVar3 + (int)tVar5) ^ uVar3 >> 0xd;
  uVar2 = (int)tVar5 - (uVar3 + uVar1) ^ uVar1 << 8;
  uVar3 = uVar3 - (uVar1 + uVar2) ^ uVar2 >> 0xd;
  uVar1 = uVar1 - (uVar2 + uVar3) ^ uVar3 >> 0xc;
  uVar2 = uVar2 - (uVar3 + uVar1) ^ uVar1 << 0x10;
  uVar3 = uVar3 - (uVar1 + uVar2) ^ uVar2 >> 5;
  uVar1 = uVar1 - (uVar2 + uVar3) ^ uVar3 >> 3;
  uVar2 = uVar2 - (uVar3 + uVar1) ^ uVar1 << 10;
  _srand(uVar3 - (uVar1 + uVar2) ^ uVar2 >> 0xf);
  return;
}




char * FUN_1004d2cc8(char *param_1,char *param_2)

{
  _strcpy(param_1,param_2);
  return param_1;
}




bool FUN_1004d2cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1004d1528(param_2,param_3,param_4,param_1);
  return iVar1 != 0;
}




void FUN_1004d2d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_1004d1404(param_2,param_3,(long)param_4,param_1);
  return;
}




void FUN_1004d2d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1004d14a8(param_2,param_3,param_1);
  return;
}




void FUN_1004d2d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1004d0ee0(param_2,param_3,param_6,param_4,param_5,param_1);
  return;
}




bool FUN_1004d2d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1004d2020(param_2,param_3,param_4,param_1);
  return iVar1 != 0;
}




bool FUN_1004d2da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_1004d2020(param_2,param_3,(long)param_4,param_1);
  return iVar1 != 0;
}




bool FUN_1004d2ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1004d2138(param_2,param_3,param_1);
  return iVar1 != 0;
}




bool FUN_1004d2e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1004d16dc(param_2,param_3,param_4,param_1);
  return iVar1 != 0;
}




bool FUN_1004d2e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1004d16dc(param_2,param_3,0,param_1);
  return iVar1 != 0;
}




void FUN_1004d2e64(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  plVar2 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar2 = param_4;
  }
  plVar3 = (long *)*param_5;
  if (-1 < *(char *)((long)param_5 + 0x17)) {
    plVar3 = param_5;
  }
  FUN_1004d0ee0(plVar1,plVar2,plVar3,auStack_428,0x400,param_2);
  FUN_10001549c(param_1,auStack_428);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_1004d2f00(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  plVar2 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar2 = param_3;
  }
  plVar3 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar3 = param_4;
  }
  iVar4 = FUN_1004d16dc(plVar1,plVar2,plVar3,param_1);
  return iVar4 != 0;
}




void FUN_1004d2f54(char *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  time_t tVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  char local_191;
  tm local_190;
  undefined1 auStack_158 [256];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (((DAT_101e943f0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e943f0), iVar1 != 0)) {
    DAT_101e943e8 = (double)_nan("");
    ___cxa_guard_release(&DAT_101e943f0);
  }
  dVar8 = DAT_101e943e8;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) goto LAB_1004d318c;
  FUN_1004d25b8(auStack_158,0x100,param_1);
  local_190.tm_zone = (char *)0x0;
  local_190.tm_wday = 0;
  local_190.tm_yday = 0;
  local_190.tm_mon = 0;
  local_190.tm_year = 0;
  local_190.tm_gmtoff = 0;
  local_190.tm_isdst = 0;
  local_190._36_4_ = 0;
  local_190.tm_hour = 0;
  local_190.tm_mday = 0;
  local_190.tm_sec = 0;
  local_190.tm_min = 0;
  lVar2 = FUN_1004d321c(auStack_158,"Tt ");
  dVar8 = DAT_101e943e8;
  if ((lVar2 == 0) ||
     ((lVar3 = FUN_1004d321c(auStack_158,"-"), dVar8 = DAT_101e943e8, lVar3 == 0 ||
      (lVar4 = FUN_1004d321c(lVar3,"-"), dVar8 = DAT_101e943e8, lVar4 == 0)))) goto LAB_1004d318c;
  local_191 = '\0';
  iVar1 = FUN_1004d2744(auStack_158,&local_191);
  dVar8 = DAT_101e943e8;
  if (local_191 == '\0') goto LAB_1004d318c;
  local_190.tm_year = iVar1 + -0x76c;
  iVar1 = FUN_1004d2744(lVar3,&local_191);
  dVar8 = DAT_101e943e8;
  if (local_191 == '\0') goto LAB_1004d318c;
  local_190.tm_mon = iVar1 + -1;
  iVar1 = FUN_1004d2744(lVar4,&local_191);
  local_190.tm_mday = iVar1;
  dVar8 = DAT_101e943e8;
  if (local_191 == '\0') goto LAB_1004d318c;
  pcVar5 = (char *)FUN_1004d321c(lVar2,"Zz");
  if (pcVar5 == (char *)0x0) {
    lVar3 = FUN_1004d321c(lVar2,"+");
    if (lVar3 == 0) {
      lVar3 = FUN_1004d321c(lVar2,"-");
      if (lVar3 == 0) goto LAB_1004d3074;
      iVar1 = FUN_1004d3268();
      dVar9 = (double)iVar1;
    }
    else {
      iVar1 = FUN_1004d3268();
      dVar9 = -(double)iVar1;
    }
  }
  else {
    dVar8 = DAT_101e943e8;
    if (*pcVar5 != '\0') goto LAB_1004d318c;
LAB_1004d3074:
    dVar9 = 0.0;
  }
  lVar3 = FUN_1004d321c(lVar2,":");
  dVar8 = DAT_101e943e8;
  if ((lVar3 != 0) && (lVar4 = FUN_1004d321c(lVar3,":"), dVar8 = DAT_101e943e8, lVar4 != 0)) {
    iVar1 = FUN_1004d2744(lVar2,&local_191);
    local_190.tm_hour = iVar1;
    dVar8 = DAT_101e943e8;
    if (local_191 != '\0') {
      iVar1 = FUN_1004d2744(lVar3,&local_191);
      local_190.tm_min = iVar1;
      dVar8 = DAT_101e943e8;
      if (local_191 != '\0') {
        fVar7 = (float)FUN_1004d284c(lVar4);
        local_190.tm_sec = (int)fVar7;
        pcVar5 = _getenv("TZ");
        _setenv("TZ","",1);
        _tzset();
        tVar6 = _mktime(&local_190);
        if (pcVar5 == (char *)0x0) {
          _unsetenv("TZ");
        }
        else {
          _setenv("TZ",pcVar5,1);
        }
        _tzset();
        dVar8 = (((double)fVar7 + dVar9 * 60.0) - (double)(int)fVar7) + (double)tVar6;
      }
    }
  }
LAB_1004d318c:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(dVar8);
  }
  return;
}




char * FUN_1004d321c(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    param_2 = param_2 + 1;
    pcVar2 = _strchr(param_1,(int)cVar1);
    if (pcVar2 != (char *)0x0) break;
    cVar1 = *param_2;
  }
  *pcVar2 = '\0';
  return pcVar2 + 1;
}




int FUN_1004d3268(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined1 uStack_21;
  
  lVar3 = FUN_1004d321c(param_1,":");
  iVar1 = FUN_1004d2744(param_1,&uStack_21);
  if (lVar3 == 0) {
    iVar4 = iVar1 / 100;
    iVar2 = iVar1 % 100;
  }
  else {
    iVar2 = FUN_1004d2744(lVar3,&uStack_21);
    iVar4 = iVar1;
  }
  return iVar2 + iVar4 * 0x3c;
}




void FUN_1004d32ec(double param_1,char *param_2,uint param_3,char *param_4)

{
  tm *ptVar1;
  tm tStack_70;
  long local_38;
  
  local_38 = (long)param_1;
  ptVar1 = _localtime_r(&local_38,&tStack_70);
  param_2[param_3 - 1] = '\0';
  _strftime(param_2,(ulong)param_3,param_4,ptVar1);
  return;
}




void FUN_1004d3350(double param_1,char *param_2,uint param_3)

{
  tm *ptVar1;
  tm tStack_60;
  long local_28;
  
  local_28 = (long)param_1;
  ptVar1 = _gmtime_r(&local_28,&tStack_60);
  param_2[param_3 - 1] = '\0';
  _strftime(param_2,(ulong)param_3,PTR_s__Y__m__dT_H__M__SZ_101867448,ptVar1);
  return;
}




byte * FUN_1004d33ac(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
LAB_1004d33c0:
  bVar1 = *param_1;
  uVar5 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  if (bVar1 < 0x61) {
    if (uVar6 == 0x5a || bVar1 < 0x5a) {
      if (uVar5 - 0x55 < 6) {
LAB_1004d342c:
        bVar2 = param_1[1];
LAB_1004d3488:
        param_1 = param_1 + (ulong)(bVar2 - 0xf < 2) * 2;
      }
      else if (uVar5 == 0) {
        return (byte *)0x0;
      }
    }
    else {
      if (uVar6 - 0x5b < 3) {
LAB_1004d3484:
        bVar2 = param_1[3];
        goto LAB_1004d3488;
      }
      if (uVar5 - 0x5e < 3) goto LAB_1004d342c;
    }
  }
  else {
    uVar4 = uVar6 - 0x7c;
    if (0x1f < uVar4) {
LAB_1004d3460:
      if (uVar6 == 0x61) goto LAB_1004d3484;
      if (uVar5 != 0x70) goto LAB_1004d3498;
      param_1 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                           (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
      goto LAB_1004d33c0;
    }
    uVar3 = 1 << (ulong)(uVar4 & 0x1f);
    if ((uVar3 & 0xc600) == 0) {
      if ((uVar3 & 0xaa000000) != 0) {
        param_1 = param_1 + param_1[1];
        goto LAB_1004d3498;
      }
      if (uVar4 != 0) goto LAB_1004d3460;
      if ((int)param_3 < 0) {
        return param_1;
      }
      param_1 = param_1 + 3;
      goto LAB_1004d33c0;
    }
    if ((((*(ushort *)(param_1 + 3) & 0xff00) << 0x10) >> 8 | (uint)*(ushort *)(param_1 + 3) << 0x18
        ) >> 0x10 == param_3) {
      return param_1;
    }
  }
LAB_1004d3498:
  param_1 = param_1 + (byte)(&DAT_10115bc9c)[bVar1];
  goto LAB_1004d33c0;
}




void FUN_1004d34ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1004d34c0(param_1,param_2,0,param_3,param_4,param_5);
  return;
}




undefined4 *
FUN_1004d34c0(char *param_1,ulong param_2,int *param_3,undefined8 *param_4,int *param_5,
             undefined *param_6)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar14;
  uint uVar12;
  int iVar13;
  undefined8 uVar15;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined1 uVar16;
  uint uVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  char *pcVar22;
  char *pcVar23;
  ulong uVar24;
  int iVar25;
  byte *pbVar26;
  uint uVar27;
  uint uVar28;
  undefined4 *puVar29;
  ushort *puVar30;
  ushort *puVar31;
  void *pvVar32;
  long lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint local_12d0;
  uint local_12c8;
  undefined *local_12c0;
  undefined *local_12b8;
  undefined *local_12b0;
  undefined *puStack_12a8;
  ushort *local_12a0;
  ushort *local_1298;
  char *local_1290;
  char *local_1288;
  ushort *local_1280;
  undefined8 local_1278;
  undefined8 *local_1270;
  ushort *local_1268;
  undefined8 local_1260;
  undefined8 local_1258;
  long local_1250;
  uint local_1248;
  undefined8 local_1244;
  undefined4 local_123c;
  undefined8 local_1238;
  uint local_1230;
  uint uStack_122c;
  undefined8 local_1228;
  undefined8 uStack_1220;
  ulong local_1218;
  mach_header *local_1210;
  undefined2 local_1208;
  char *local_1200;
  ushort *local_11f8;
  int local_11ec;
  uint local_11e8;
  uint local_11e4;
  uint local_11e0;
  uint local_11dc;
  int local_11d8;
  undefined4 local_11d4;
  undefined8 local_11d0 [40];
  undefined1 local_1090 [4096];
  undefined1 auStack_90 [4];
  uint local_8c;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  local_11d8 = 1;
  local_11ec = 0;
  local_1200 = param_1;
  if (param_4 == (undefined8 *)0x0) {
    if (param_3 == (int *)0x0) goto LAB_1004d3990;
    iVar13 = 99;
    goto LAB_1004d3988;
  }
  *param_4 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_5 == (int *)0x0) {
    local_11ec = 0x10;
    goto LAB_1004d3940;
  }
  *param_5 = 0;
  puVar4 = PTR___DefaultRuneLocale_101444130;
  puVar3 = &DAT_10115a180;
  if (param_6 != (undefined *)0x0) {
    puVar3 = param_6;
  }
  local_12b8 = puVar3 + 0x100;
  local_12b0 = puVar3 + 0x200;
  puStack_12a8 = puVar3 + 0x340;
  uVar12 = (uint)param_2;
  local_12c0 = puVar3;
  if ((param_2 & 0xd8008580) != 0) {
    local_11ec = 0x11;
    goto LAB_1004d356c;
  }
  uStack_122c = 0;
  if (*param_1 == '(') {
    uVar28 = 0;
    lVar33 = 0;
    iVar13 = 0;
    local_12c8 = 0xffffffff;
    local_12d0 = 0xffffffff;
    pcVar19 = param_1;
    do {
      if (param_1[(long)iVar13 + 1] != '*') break;
      iVar10 = _strncmp(pcVar19 + 2,"UTF8)",5);
      uVar27 = (uint)param_2;
      if (iVar10 == 0) {
        iVar13 = iVar13 + 7;
LAB_1004d3764:
        param_2 = (ulong)(uVar27 | 0x800);
      }
      else {
        pcVar19 = param_1 + lVar33 + 2;
        iVar10 = _strncmp(pcVar19,"UTF)",4);
        if (iVar10 == 0) {
          iVar13 = iVar13 + 6;
          goto LAB_1004d3764;
        }
        iVar10 = _strncmp(pcVar19,"UCP)",4);
        if (iVar10 == 0) {
          iVar13 = iVar13 + 6;
          param_2 = (ulong)(uVar27 | 0x20000000);
        }
        else {
          iVar10 = _strncmp(pcVar19,"NO_AUTO_POSSESS)",0x10);
          if (iVar10 == 0) {
            iVar13 = iVar13 + 0x12;
            param_2 = (ulong)(uVar27 | 0x20000);
          }
          else {
            iVar10 = _strncmp(pcVar19,"NO_START_OPT)",0xd);
            if (iVar10 == 0) {
              iVar13 = iVar13 + 0xf;
              param_2 = (ulong)(uVar27 | 0x4000000);
            }
            else {
              iVar10 = _strncmp(pcVar19,"LIMIT_MATCH=",0xc);
              if (iVar10 == 0) {
                iVar10 = iVar13 + 0xe;
                uVar24 = (ulong)(byte)param_1[iVar10];
                if ((*(uint *)(puVar4 + uVar24 * 4 + 0x3c) >> 10 & 1) == 0) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = 0;
                  pbVar26 = (byte *)(param_1 + (long)iVar10 + 1);
                  do {
                    uVar27 = (uVar27 * 10 + (int)uVar24) - 0x30;
                    uVar24 = (ulong)*pbVar26;
                    iVar10 = iVar10 + 1;
                    if ((*(uint *)(puVar4 + uVar24 * 4 + 0x3c) >> 10 & 1) == 0) break;
                    pbVar26 = pbVar26 + 1;
                  } while (uVar27 < 0x19999999);
                }
                if ((int)uVar24 != 0x29) break;
                iVar13 = iVar10 + 1;
                if (uVar27 < local_12c8) {
                  uStack_122c = uVar28 | 0x2000;
                  uVar28 = uVar28 | 0x2000;
                  local_12c8 = uVar27;
                }
              }
              else {
                iVar10 = _strncmp(pcVar19,"LIMIT_RECURSION=",0x10);
                if (iVar10 == 0) {
                  iVar10 = iVar13 + 0x12;
                  uVar24 = (ulong)(byte)param_1[iVar10];
                  if ((*(uint *)(puVar4 + uVar24 * 4 + 0x3c) >> 10 & 1) == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0;
                    pbVar26 = (byte *)(param_1 + (long)iVar10 + 1);
                    do {
                      uVar27 = (uVar27 * 10 + (int)uVar24) - 0x30;
                      uVar24 = (ulong)*pbVar26;
                      iVar10 = iVar10 + 1;
                      if ((*(uint *)(puVar4 + uVar24 * 4 + 0x3c) >> 10 & 1) == 0) break;
                      pbVar26 = pbVar26 + 1;
                    } while (uVar27 < 0x19999999);
                  }
                  if ((int)uVar24 != 0x29) break;
                  iVar13 = iVar10 + 1;
                  if (uVar27 < local_12d0) {
                    uStack_122c = uVar28 | 0x4000;
                    uVar28 = uVar28 | 0x4000;
                    local_12d0 = uVar27;
                  }
                }
                else {
                  iVar10 = _strncmp(pcVar19,"CR)",3);
                  if (iVar10 == 0) {
                    uVar17 = 0x100000;
LAB_1004d38d0:
                    iVar10 = 5;
LAB_1004d38d4:
                    uVar27 = uVar27 & 0xff8fffff;
                  }
                  else {
                    iVar10 = _strncmp(pcVar19,"LF)",3);
                    if (iVar10 == 0) {
                      uVar17 = 0x200000;
                      goto LAB_1004d38d0;
                    }
                    iVar10 = _strncmp(pcVar19,"CRLF)",5);
                    if (iVar10 == 0) {
                      uVar17 = 0x300000;
                      iVar10 = 7;
                      goto LAB_1004d38d4;
                    }
                    iVar10 = _strncmp(pcVar19,"ANY)",4);
                    if (iVar10 == 0) {
                      uVar17 = 0x400000;
                      iVar10 = 6;
                      goto LAB_1004d38d4;
                    }
                    iVar10 = _strncmp(pcVar19,"ANYCRLF)",8);
                    if (iVar10 == 0) {
                      uVar17 = 0x500000;
                      iVar10 = 10;
                      goto LAB_1004d38d4;
                    }
                    iVar10 = _strncmp(pcVar19,"BSR_ANYCRLF)",0xc);
                    if (iVar10 == 0) {
                      uVar17 = 0x800000;
                    }
                    else {
                      iVar10 = _strncmp(pcVar19,"BSR_UNICODE)",0xc);
                      if (iVar10 != 0) break;
                      uVar17 = 0x1000000;
                    }
                    iVar10 = 0xe;
                    uVar27 = uVar27 & 0xfe7fffff;
                  }
                  iVar13 = iVar13 + iVar10;
                  param_2 = (ulong)(uVar17 | uVar27);
                }
              }
            }
          }
        }
      }
      lVar33 = (long)iVar13;
      pcVar19 = param_1 + iVar13;
    } while (*pcVar19 == '(');
  }
  else {
    iVar13 = 0;
    local_12d0 = 0xffffffff;
    local_12c8 = 0xffffffff;
  }
  uVar28 = (uint)param_2;
  if (((uVar28 >> 0xb & 1) != 0) && ((uVar12 >> 0x10 & 1) != 0)) {
    local_11ec = 0x4e;
    goto LAB_1004d3940;
  }
  if ((uVar28 >> 0xb & 1) != 0) {
    local_11ec = 0x20;
    goto LAB_1004d356c;
  }
  if ((uVar28 >> 0x1d & 1) != 0) {
    local_11ec = 0x43;
    goto LAB_1004d356c;
  }
  if ((~uVar28 & 0x1800000) == 0) {
switchD_1004d3a28_default:
    local_11ec = 0x38;
    goto LAB_1004d356c;
  }
  uVar16 = 10;
  switch(uVar28 >> 0x14 & 7) {
  case 1:
    uVar16 = 0xd;
  case 0:
  case 2:
    local_1210 = &__mh_execute_header;
    local_1208 = CONCAT11(local_1208._1_1_,uVar16);
    break;
  case 3:
    local_1210 = (mach_header *)0x200000000;
    local_1208 = 0xa0d;
    break;
  case 4:
    uVar18 = 1;
    goto LAB_1004d3a68;
  case 5:
    uVar18 = 2;
LAB_1004d3a68:
    local_1210 = (mach_header *)CONCAT44(local_1210._4_4_,uVar18);
    break;
  default:
    goto switchD_1004d3a28_default;
  }
  local_1244 = 0;
  local_1218 = 0;
  local_123c = 0;
  local_1268 = (ushort *)0x0;
  local_1260 = 0;
  local_1270 = local_11d0;
  local_1258 = 0x100000000014;
  local_1250 = 0;
  local_12a0 = (ushort *)local_1090;
  local_1298 = (ushort *)local_1090;
  local_1290 = param_1;
  local_1280 = (ushort *)local_1090;
  sVar14 = _strlen(param_1);
  local_1238 = 0;
  local_1288 = param_1 + sVar14;
  local_1248 = 0;
  local_1228 = local_1228 & 0xffffffff00000000;
  local_1278 = 0;
  local_1090[0] = 0x83;
  local_1230 = uVar28;
  local_1200 = param_1 + iVar13;
  local_11f8 = (ushort *)local_1090;
  FUN_1004d4370(param_2,&local_11f8,&local_1200,&local_11ec,0,0,0,0,&local_11e4,&local_11dc,
                &local_11e8,&local_11e0,0,&local_12c0,&local_11d8);
  if (local_11ec == 0) {
    if (local_11d8 < 0x10001) {
      lVar33 = (long)(int)(local_11d8 + local_1260._4_4_ * (int)local_1260) + 0x40;
      puVar29 = (undefined4 *)(*(code *)PTR__malloc_101867450)(lVar33);
      if (puVar29 == (undefined4 *)0x0) {
        local_11ec = 0x15;
      }
      else {
        *puVar29 = 0x50435245;
        puVar29[1] = (int)lVar33;
        *(ulong *)(puVar29 + 2) = CONCAT44(uStack_122c,local_1230);
        puVar29[4] = local_12c8;
        puVar29[5] = local_12d0;
        puVar29[6] = 0;
        *(undefined2 *)((long)puVar29 + 0x22) = 0x40;
        *(short *)(puVar29 + 9) = (short)(local_1260 >> 0x20);
        uVar24 = local_1260 & 0xffffffff;
        *(short *)((long)puVar29 + 0x26) = (short)local_1260;
        puVar4 = (undefined *)0x0;
        if (puVar3 != &DAT_10115a180) {
          puVar4 = puVar3;
        }
        *(undefined8 *)(puVar29 + 10) = 0;
        *(undefined **)(puVar29 + 0xc) = puVar4;
        *(undefined8 *)(puVar29 + 0xe) = 0;
        local_1250 = local_1250 << 0x20;
        local_1238 = 0;
        local_1248 = 0;
        local_1268 = (ushort *)(puVar29 + 0x10);
        puVar30 = (ushort *)
                  ((long)local_1268 + (local_1260 & 0xffff) * ((ulong)local_1260._4_4_ & 0xffff));
        local_1280 = local_12a0;
        local_1278 = 0;
        local_1218 = local_1218 & 0xffffffff;
        local_1228 = 0;
        uStack_1220 = 0;
        local_1298 = puVar30;
        if (0 < (int)local_1260) {
          iVar10 = 0;
          local_1260 = (ulong)local_1260._4_4_ << 0x20;
          puVar20 = local_1270;
          do {
            pvVar32 = (void *)*puVar20;
            uVar12 = *(uint *)((long)puVar20 + 0xc);
            sVar14 = (size_t)*(int *)(puVar20 + 1);
            puVar21 = local_1268;
            if (0 < iVar10) {
              iVar9 = local_1260._4_4_;
              lVar33 = (long)(int)local_1260._4_4_;
              puVar21 = (ushort *)((long)local_1268 + ((ulong)(iVar10 - 1) + 1) * lVar33);
              iVar25 = iVar10 * local_1260._4_4_;
              puVar31 = local_1268;
              do {
                iVar11 = _memcmp(pvVar32,puVar31 + 1,sVar14);
                if (iVar11 == 0) {
                  if (*(char *)((long)puVar31 + sVar14 + 2) != '\0') goto LAB_1004d3ca4;
                }
                else if (iVar11 < 0) {
LAB_1004d3ca4:
                  _memmove((void *)((long)puVar31 + lVar33),puVar31,(long)iVar25);
                  puVar21 = puVar31;
                  break;
                }
                puVar31 = (ushort *)((long)puVar31 + lVar33);
                iVar25 = iVar25 - iVar9;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            *puVar21 = (ushort)(uVar12 >> 8) & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
            _memcpy(puVar21 + 1,pvVar32,sVar14);
            *(undefined1 *)((long)puVar21 + sVar14 + 2) = 0;
            iVar10 = (int)local_1260 + 1;
            local_1260 = CONCAT44(local_1260._4_4_,iVar10);
            iVar25 = (int)uVar24;
            uVar12 = iVar25 - 1;
            uVar24 = (ulong)uVar12;
            if (uVar12 == 0 || iVar25 < 1) goto LAB_1004d3d08;
            puVar20 = puVar20 + 2;
          } while( true );
        }
LAB_1004d3d2c:
        *(byte *)puVar30 = 0x83;
        local_1200 = param_1 + iVar13;
        local_11f8 = puVar30;
        FUN_1004d4370(puVar29[2],&local_11f8,&local_1200,&local_11ec,0,0,0,0,&local_11e4,&local_11dc
                      ,&local_11e8,&local_11e0,0,&local_12c0,0);
        *(short *)((long)puVar29 + 0x1e) = (short)local_1250;
        *(short *)(puVar29 + 8) = (short)local_1244;
        *(short *)(puVar29 + 7) = (short)local_1248;
        puVar29[3] = uStack_122c | 1;
        if (local_1228._4_4_ != 0) {
          local_11e8 = 0;
          local_11e0 = 0xffffffff;
        }
        if ((local_11ec == 0) && (*local_1200 != '\0')) {
          local_11ec = 0x16;
        }
        puVar21 = (ushort *)((long)local_11f8 + 1);
        *(byte *)local_11f8 = 0;
        uVar24 = extraout_x1;
        local_11f8 = puVar21;
        if ((long)local_11d8 < (long)puVar21 - (long)puVar30) {
          local_11ec = 0x17;
          iVar13 = 0x17;
        }
        else {
          iVar13 = local_11ec;
          if ((local_12a0 < local_1280) && (local_11ec == 0)) {
            auVar34._8_8_ = 0;
            auVar34._0_8_ = extraout_x1;
            auVar34 = auVar34 << 0x40;
            uVar12 = 0xffffffff;
            do {
              puVar21 = local_1280 + -1;
              uVar8 = ((((ulong)local_1280[-1] & 0xff00) << 0x30) >> 8 |
                      (ulong)local_1280[-1] << 0x38) >> 0x30;
              uVar27 = (uint)CONCAT11(*(byte *)((long)puVar30 + uVar8),
                                      *(byte *)((long)puVar30 + uVar8 + 1));
              local_1280 = puVar21;
              if (uVar27 != uVar12) {
                auVar34 = FUN_1004d33ac(puVar30,auVar34._8_8_,uVar27);
                uVar12 = uVar27;
              }
              uVar24 = auVar34._8_8_;
              if (auVar34._0_8_ == 0) {
                iVar13 = 0x35;
                local_11ec = 0x35;
                goto LAB_1004d3ea8;
              }
              lVar33 = auVar34._0_8_ - (long)puVar30;
              *(byte *)((long)puVar30 + uVar8) = (byte)((ulong)lVar33 >> 8);
              *(byte *)((long)puVar30 + uVar8 + 1) = (byte)lVar33;
              iVar13 = local_11ec;
              if (local_11ec != 0) goto LAB_1004d3ea8;
            } while (local_12a0 < local_1280);
            iVar13 = 0;
          }
        }
LAB_1004d3ea8:
        if (0x1000 < local_1258._4_4_) {
          (*(code *)PTR__free_101867458)(local_12a0);
          uVar24 = extraout_x1_00;
          iVar13 = local_11ec;
        }
        local_12a0 = (ushort *)0x0;
        if ((iVar13 == 0) && (*(ushort *)((long)puVar29 + 0x1e) < *(ushort *)(puVar29 + 8))) {
          local_11ec = 0xf;
        }
        if (((uVar28 >> 0x11 & 1) == 0) && (bVar6 = (byte)*puVar30, bVar6 < 0xa2)) {
          puVar21 = puVar30;
          do {
            uVar12 = (uint)bVar6;
            if ((uVar12 - 0x21 & 0xff) < 0x41) {
              if (uVar12 < 0x55) {
                if (uVar12 < 0x48) {
                  iVar13 = -0x21;
                  if (0x2d < uVar12) {
                    iVar13 = -0x2e;
                  }
                  iVar10 = 0xc5;
                  if (uVar12 < 0x3b) {
                    iVar10 = iVar13;
                  }
                }
                else {
                  iVar10 = 0xb8;
                }
              }
              else {
                iVar10 = 0xab;
              }
              uVar27 = uVar12 + iVar10;
              if ((uVar27 + 0x21 & 0xff) < 0x29) {
                auVar35 = FUN_1004d9e80(puVar21,local_12b8,auStack_90);
              }
              else {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = uVar24;
                auVar35 = auVar35 << 0x40;
              }
              uVar24 = auVar35._8_8_;
              lVar33 = auVar35._0_8_;
              if ((uVar27 & 0xff) < 7) {
                local_8c = *(uint *)(&DAT_10115ba4c + (long)(char)uVar27 * 4);
              }
              else {
                local_8c = 0;
              }
              local_11d4 = 1000;
              if (((lVar33 != 0) &&
                  (iVar13 = FUN_1004da074(lVar33,uVar28 >> 0xb & 1,&local_12c0,auStack_90,lVar33,
                                          &local_11d4), uVar24 = extraout_x1_03, iVar13 != 0)) &&
                 ((uVar12 + iVar10 & 0xff) < 8)) {
                *(byte *)puVar21 =
                     (byte)*puVar21 +
                     (char)(0x506060707080809 >> (((ulong)(uVar12 + iVar10) & 7) << 3));
              }
LAB_1004d4194:
              bVar6 = (byte)*puVar21;
            }
            else if ((uVar12 - 0x6e & 0xff) < 3) {
              bVar6 = *(byte *)((long)puVar21 + 0x21);
              uVar12 = bVar6 - 0x62;
              if (uVar12 < 8) {
                uVar15 = FUN_1004d9e80(puVar21,local_12b8,auStack_90);
                local_8c = ~(uint)bVar6 & 1;
                local_11d4 = 1000;
                iVar13 = FUN_1004da074(uVar15,uVar28 >> 0xb & 1,&local_12c0,auStack_90,uVar15,
                                       &local_11d4);
                uVar24 = extraout_x1_02;
                if ((iVar13 != 0) && ((uVar12 & 0xff) < 8)) {
                  *(byte *)((long)puVar21 + 0x21) =
                       (byte)(0x6d6d6c6c6b6b6a6a >> (((ulong)uVar12 & 7) << 3));
                }
              }
              goto LAB_1004d4194;
            }
            uVar12 = (uint)bVar6;
            if (uVar12 - 0x55 < 0xd) {
              if ((1 << (ulong)(uVar12 - 0x55 & 0x1f) & 0xe3fU) == 0) {
                bVar7 = *(byte *)((long)puVar21 + 3);
              }
              else {
                bVar7 = *(byte *)((long)puVar21 + 1);
              }
              puVar21 = puVar21 + (bVar7 - 0xf < 2);
            }
            else if ((uVar12 - 0x95 < 7) && ((1 << (ulong)(uVar12 - 0x95 & 0x1f) & 0x55U) != 0)) {
              puVar21 = (ushort *)((long)puVar21 + (ulong)*(byte *)((long)puVar21 + 1));
            }
            else if (uVar12 == 0) break;
            puVar21 = (ushort *)((long)puVar21 + (ulong)(byte)(&DAT_10115bc9c)[bVar6]);
            bVar6 = (byte)*puVar21;
          } while (bVar6 < 0xa2);
        }
        if (uStack_1220._4_4_ != 0) {
          auVar34 = FUN_1004d33ac(puVar30,uVar24,0xffffffff);
          lVar33 = auVar34._0_8_;
          while (lVar33 != 0) {
            uVar15 = auVar34._8_8_;
            lVar33 = auVar34._0_8_;
            if ((*(ushort *)(lVar33 + 1) & 0xff00) == 0 && (*(ushort *)(lVar33 + 1) & 0xff) == 0) {
              lVar2 = (((((ulong)*(ushort *)(lVar33 + -2) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(lVar33 + -2) << 0x38) >> 0x30) + lVar33;
              uVar16 = *(undefined1 *)(lVar2 + -3);
              *(undefined1 *)(lVar2 + -3) = 0;
              uVar12 = FUN_1004d48e4(lVar33,1,&local_12c0,0);
              *(undefined1 *)(lVar2 + -3) = uVar16;
              if ((int)uVar12 < 0) {
                iVar13 = 0x46;
                if (uVar12 != 0xfffffffc) {
                  iVar13 = 0x19;
                }
                local_11ec = 0x24;
                if (uVar12 != 0xfffffffe) {
                  local_11ec = iVar13;
                }
                goto LAB_1004d3fa0;
              }
              if ((int)local_1248 < (int)uVar12) {
                local_1248 = uVar12;
              }
              *(ushort *)(lVar33 + 1) =
                   (ushort)(uVar12 >> 8) & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
              uVar15 = extraout_x1_01;
            }
            auVar34 = FUN_1004d33ac(lVar33 + 3,uVar15,0xffffffff);
            lVar33 = auVar34._0_8_;
          }
        }
        if (local_11ec == 0) {
          uVar12 = puVar29[2];
          if ((uVar12 >> 4 & 1) == 0) {
            iVar13 = FUN_1004d4b7c(puVar30,0,&local_12c0,0);
            if (iVar13 == 0) {
              if ((int)local_11dc < 0) {
                uVar24 = FUN_1004d4d08(puVar30,&local_11dc,0);
                local_11e4 = (uint)uVar24;
                if (-1 < (int)local_11dc) goto LAB_1004d427c;
                iVar13 = FUN_1004d4ec0(puVar30,0,&local_12c0,0);
                if (iVar13 == 0) goto LAB_1004d42b0;
                uVar12 = puVar29[3] | 0x100;
              }
              else {
                uVar24 = (ulong)local_11e4;
LAB_1004d427c:
                *(short *)(puVar29 + 6) = (short)(uVar24 & 0xff);
                if (((local_11dc & 1) != 0) &&
                   ((uint)(byte)local_12b8[uVar24 & 0xff] != ((uint)uVar24 & 0xff))) {
                  puVar29[3] = puVar29[3] | 0x20;
                }
                uVar12 = puVar29[3] | 0x10;
              }
              puVar29[3] = uVar12;
            }
            else {
              puVar29[2] = uVar12 | 0x10;
            }
          }
LAB_1004d42b0:
          puVar21 = local_11f8;
          if ((-1 < (int)local_11e0) &&
             (((*(byte *)(puVar29 + 2) >> 4 & 1) == 0 || ((local_11e0 >> 1 & 1) != 0)))) {
            *(short *)((long)puVar29 + 0x1a) = (short)((ulong)local_11e8 & 0xff);
            if (((local_11e0 & 1) != 0) &&
               ((uint)(byte)local_12b8[(ulong)local_11e8 & 0xff] != (local_11e8 & 0xff))) {
              puVar29[3] = puVar29[3] | 0x80;
            }
            puVar29[3] = puVar29[3] | 0x40;
          }
          do {
            iVar13 = FUN_1004d50dc(puVar30,puVar21,&local_12c0,0);
            if (iVar13 != 0) {
              puVar29[3] = puVar29[3] | 0x8000;
              break;
            }
            puVar30 = (ushort *)
                      ((long)puVar30 +
                      (((((ulong)*(ushort *)((long)puVar30 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)((long)puVar30 + 1) << 0x38) >> 0x30));
          } while ((byte)*puVar30 == 0x77);
          goto LAB_1004d3994;
        }
LAB_1004d3fa0:
        (*(code *)PTR__free_101867458)(puVar29);
      }
    }
    else {
      local_11ec = 0x14;
    }
  }
LAB_1004d356c:
  *param_5 = (int)local_1200 - (int)param_1;
  if (local_11ec < 1) {
    pcVar23 = "no error";
  }
  else {
LAB_1004d3940:
    pcVar19 = "no error";
    iVar13 = local_11ec;
    do {
      do {
        pcVar22 = pcVar19 + 1;
        cVar5 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar5 != '\0');
      pcVar23 = "Error text not found (please report)";
    } while ((*pcVar22 != '\0') &&
            (bVar1 = 1 < iVar13, pcVar23 = pcVar22, iVar13 = iVar13 + -1, bVar1));
  }
  *param_4 = pcVar23;
  iVar13 = local_11ec;
  if (param_3 == (int *)0x0) {
LAB_1004d3990:
    puVar29 = (undefined4 *)0x0;
  }
  else {
LAB_1004d3988:
    puVar29 = (undefined4 *)0x0;
    *param_3 = iVar13;
  }
LAB_1004d3994:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return puVar29;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_1004d3d08:
  if (0x14 < (int)local_1258) {
    (*(code *)PTR__free_101867458)(local_1270);
  }
  goto LAB_1004d3d2c;
}




undefined8
FUN_1004d4370(undefined4 param_1,long *param_2,long *param_3,undefined4 *param_4,int param_5,
             int param_6,uint param_7,undefined4 param_8,int *param_9,uint *param_10,int *param_11,
             uint *param_12,undefined8 param_13,long param_14,int *param_15)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  char *pcVar19;
  char *pcVar20;
  uint local_114;
  int local_e0;
  uint local_dc;
  int local_c8;
  uint local_c4;
  undefined8 local_b8;
  char *local_b0;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined2 local_88;
  undefined2 local_86;
  char *local_80;
  char *local_78;
  undefined4 local_6c [3];
  
  local_78 = (char *)*param_3;
  pcVar19 = (char *)*param_2;
  local_80 = pcVar19;
  local_6c[0] = param_1;
  if ((DAT_101d91148 != (code *)0x0) && (iVar9 = (*DAT_101d91148)(), iVar9 != 0)) {
    uVar15 = 0x55;
LAB_1004d43dc:
    *param_4 = uVar15;
    return 0;
  }
  lVar12 = *(long *)(param_14 + 0x40);
  lVar16 = *(long *)(param_14 + 0x20);
  local_a4 = param_7 + 6;
  if (*pcVar19 == -0x7b) {
    uVar4 = ((*(ushort *)(pcVar19 + 3) & 0xff00) << 0x10) >> 8 |
            (uint)*(ushort *)(pcVar19 + 3) << 0x18;
    local_114 = uVar4 >> 0x10;
    local_88 = (undefined2)(uVar4 >> 0x10);
    local_90 = *(undefined8 *)(param_14 + 0x48);
    local_86 = 0;
    *(undefined8 **)(param_14 + 0x48) = &local_90;
  }
  else {
    local_114 = 0;
  }
  local_c8 = 0;
  puVar18 = (ushort *)0x0;
  pcVar19[1] = '\0';
  local_80[2] = '\0';
  piVar3 = (int *)0x0;
  if (param_15 != (int *)0x0) {
    piVar3 = &local_a4;
  }
  uVar4 = *(uint *)(param_14 + 0x70);
  local_e0 = 0;
  local_dc = 0xfffffffe;
  local_c4 = 0xfffffffe;
  pcVar20 = pcVar19;
  local_b0 = pcVar19;
  local_80 = local_80 + (param_7 + 3);
  uVar10 = uVar4;
  local_b8 = param_13;
  uVar8 = local_c4;
  do {
    if (param_6 != 0) {
      *(uint *)(param_14 + 0x70) = uVar4;
    }
    if (param_5 != 0) {
      puVar18 = (ushort *)(local_80 + 1);
      *local_80 = '|';
      *(char *)puVar18 = '\0';
      local_80[2] = '\0';
      local_80 = local_80 + 3;
      local_a4 = local_a4 + 3;
    }
    uVar11 = FUN_1004d540c(local_6c,&local_80,&local_78,param_4,&local_94,&local_9c,&local_98,
                           &local_a0,&local_b8,param_8,param_14,piVar3);
    if ((int)uVar11 == 0) goto LAB_1004d48b8;
    uVar1 = *(uint *)(param_14 + 0x70);
    if (*(uint *)(param_14 + 0x70) <= uVar10) {
      uVar1 = uVar10;
    }
    local_c4 = uVar8;
    if (param_15 == (int *)0x0) {
      if (*pcVar20 == 'w') {
        if ((int)local_dc < 0) {
LAB_1004d45f8:
          if ((-1 < (int)local_9c) && ((int)local_a0 < 0)) {
            local_98 = local_94;
            local_a0 = local_9c;
          }
        }
        else if ((local_dc != local_9c) || (local_e0 != local_94)) {
          local_c4 = local_dc;
          iVar9 = local_e0;
          if (-1 < (int)uVar8) {
            local_c4 = uVar8;
            iVar9 = local_c8;
          }
          local_c8 = iVar9;
          local_dc = 0xffffffff;
          goto LAB_1004d45f8;
        }
        uVar10 = local_a0 ^ local_c4;
        local_c4 = local_a0 | local_c4;
        iVar9 = local_98;
        if ((uVar10 & 0xfffffffd) != 0 || local_c8 != local_98) {
          local_c4 = 0xffffffff;
          iVar9 = local_c8;
        }
      }
      else {
        local_e0 = local_94;
        local_dc = local_9c;
        local_c8 = local_98;
        local_c4 = local_a0;
        iVar9 = local_c8;
      }
      local_c8 = iVar9;
      if (param_5 != 0) {
        *local_80 = '\0';
        uVar10 = FUN_1004d48e4(pcVar20,0,param_14,0);
        if (uVar10 == 0xfffffffd) {
          *(undefined4 *)(param_14 + 0xa4) = 1;
        }
        else {
          if ((int)uVar10 < 0) {
            uVar11 = 0;
            uVar15 = 0x46;
            if (uVar10 != 0xfffffffc) {
              uVar15 = 0x19;
            }
            uVar2 = 0x24;
            if (uVar10 != 0xfffffffe) {
              uVar2 = uVar15;
            }
            *param_4 = uVar2;
LAB_1004d48b8:
            *param_3 = (long)local_78;
            return uVar11;
          }
          if (*(int *)(param_14 + 0x78) < (int)uVar10) {
            *(uint *)(param_14 + 0x78) = uVar10;
          }
          *puVar18 = (ushort)(uVar10 >> 8) & 0xff | (ushort)((uVar10 & 0xff00ff) << 8);
        }
      }
      if (*local_78 != '|') {
        uVar14 = (ulong)(uint)((int)local_80 - (int)pcVar20);
        do {
          uVar5 = (((ulong)*(ushort *)(pcVar20 + 1) & 0xff00) << 0x30) >> 8 |
                  (ulong)*(ushort *)(pcVar20 + 1) << 0x38;
          uVar6 = uVar5 >> 0x30;
          *(ushort *)(pcVar20 + 1) =
               (ushort)(uVar14 >> 8) & 0xff | (ushort)(((uint)uVar14 & 0xff00ff) << 8);
          pcVar20 = pcVar20 + -uVar6;
          uVar14 = uVar6;
        } while ((short)(uVar5 >> 0x30) != 0);
LAB_1004d4720:
        *local_80 = 'x';
        iVar9 = (int)pcVar19;
        local_80[1] = (char)((uint)((int)local_80 - iVar9) >> 8);
        cVar7 = (char)pcVar19;
        local_80[2] = (char)local_80 - cVar7;
        local_80 = local_80 + 3;
        if (local_114 != 0) {
          puVar17 = *(undefined8 **)(param_14 + 0x48);
          if (*(short *)((long)puVar17 + 10) != 0) {
            *local_80 = '\0';
            FUN_1004d9134(pcVar19,3,param_14,lVar12 - lVar16);
            _memmove(pcVar19 + 3,pcVar19,(long)local_80 - (long)pcVar19);
            *pcVar19 = -0x7f;
            pcVar20 = local_80 + 3;
            pcVar19[1] = (char)((uint)((int)pcVar20 - iVar9) >> 8);
            pcVar19[2] = (char)pcVar20 - cVar7;
            *pcVar20 = 'x';
            local_80[4] = (char)((uint)((int)pcVar20 - iVar9) >> 8);
            local_80[5] = (char)pcVar20 - cVar7;
            local_80 = local_80 + 6;
            local_a4 = local_a4 + 6;
            puVar17 = *(undefined8 **)(param_14 + 0x48);
          }
          *(undefined8 *)(param_14 + 0x48) = *puVar17;
        }
        *(uint *)(param_14 + 0x70) = uVar1;
        *param_2 = (long)local_80;
        *param_3 = (long)local_78;
        *param_9 = local_e0;
        *param_10 = local_dc;
        *param_11 = local_c8;
        *param_12 = local_c4;
        if (param_15 == (int *)0x0) {
          return 1;
        }
        if (local_a4 <= 0x7fffffeb - *param_15) {
          *param_15 = local_a4 + *param_15;
          return 1;
        }
        uVar15 = 0x14;
        goto LAB_1004d43dc;
      }
      *local_80 = 'w';
      local_80[1] = (char)((uint)((int)local_80 - (int)pcVar20) >> 8);
      local_80[2] = (char)local_80 - (char)pcVar20;
      local_b0 = local_80;
      pcVar13 = local_80 + 3;
    }
    else {
      if (*local_78 != '|') goto LAB_1004d4720;
      pcVar13 = (char *)(*param_2 + (ulong)param_7 + 3);
      local_a4 = local_a4 + 3;
      local_80 = pcVar20;
    }
    local_78 = local_78 + 1;
    pcVar20 = local_80;
    local_80 = pcVar13;
    uVar10 = uVar1;
    uVar8 = local_c4;
  } while( true );
}




ulong FUN_1004d48e4(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  long *local_70;
  byte *pbStack_68;
  
  uVar6 = 0;
  pbVar9 = (byte *)(param_1 + 3);
  uVar10 = 0xffffffff;
LAB_1004d4934:
  uVar5 = uVar6;
  bVar2 = *pbVar9;
  uVar6 = (ulong)bVar2;
  iVar11 = (int)uVar5;
  switch(uVar6) {
  case 0:
  case 0x77:
  case 0x78:
  case 0x9e:
  case 0x9f:
    if (((int)uVar10 < 0) || ((int)uVar10 == iVar11)) {
      if (bVar2 != 0x77) {
        return uVar5;
      }
      uVar6 = 0;
      pbVar9 = pbVar9 + 3;
      uVar10 = uVar5;
      goto LAB_1004d4934;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x76:
  case 0x7c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x96:
  case 0x98:
  case 0x9a:
  case 0x9c:
  case 0x9d:
  case 0xa0:
    goto switchD_1004d4954_caseD_1;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    goto switchD_1004d4954_caseD_6;
  case 0xe:
    goto switchD_1004d4954_caseD_e;
  case 0xf:
  case 0x10:
    pbVar9 = pbVar9 + 2;
switchD_1004d4954_caseD_6:
    pbVar9 = pbVar9 + 1;
    uVar6 = (ulong)(iVar11 + 1);
    goto LAB_1004d4934;
  case 0x11:
  case 0x16:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x84:
  case 0x86:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0xa1:
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    pbVar9 = pbVar9 + 2;
    uVar6 = (ulong)(iVar11 + 1);
    goto LAB_1004d4934;
  case 0x29:
  case 0x36:
  case 0x43:
  case 0x50:
    puVar1 = (ushort *)(pbVar9 + 1);
    pbVar9 = pbVar9 + 4;
    uVar6 = (ulong)(((((*puVar1 & 0xff00) << 0x10) >> 8 | (uint)*puVar1 << 0x18) >> 0x10) + iVar11);
    goto LAB_1004d4934;
  case 0x5d:
    puVar1 = (ushort *)(pbVar9 + 1);
    pbVar8 = pbVar9 + 2;
    if (1 < pbVar9[3] - 0xf) {
      pbVar8 = pbVar9;
    }
    pbVar9 = pbVar8 + 4;
    uVar6 = (ulong)(((((*puVar1 & 0xff00) << 0x10) >> 8 | (uint)*puVar1 << 0x18) >> 0x10) + iVar11);
    goto LAB_1004d4934;
  default:
    return 0xfffffffc;
  case 0x6e:
  case 0x6f:
    uVar3 = pbVar9[0x21] - 0x62;
    if (0xb < uVar3) {
      uVar6 = (ulong)(iVar11 + 1);
      pbVar9 = pbVar9 + 0x21;
      goto LAB_1004d4934;
    }
    if (((1 << (ulong)(uVar3 & 0x1f) & 0x8c0U) != 0) &&
       (uVar3 = (((*(ushort *)(pbVar9 + 0x22) & 0xff00) << 0x10) >> 8 |
                (uint)*(ushort *)(pbVar9 + 0x22) << 0x18) >> 0x10,
       uVar3 == (((*(ushort *)(pbVar9 + 0x24) & 0xff00) << 0x10) >> 8 |
                (uint)*(ushort *)(pbVar9 + 0x24) << 0x18) >> 0x10)) {
      uVar6 = (ulong)(uVar3 + iVar11);
      pbVar9 = pbVar9 + 0x26;
      goto LAB_1004d4934;
    }
    break;
  case 0x75:
    if ((int)param_2 == 0) {
      return 0xfffffffd;
    }
    pbStack_68 = (byte *)(*(long *)(param_3 + 0x28) +
                         (((((ulong)*(ushort *)(pbVar9 + 1) & 0xff00) << 0x30) >> 8 |
                          (ulong)*(ushort *)(pbVar9 + 1) << 0x38) >> 0x30));
    pbVar8 = pbStack_68;
    do {
      pbVar8 = pbVar8 + (((((ulong)*(ushort *)(pbVar8 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar8 + 1) << 0x38) >> 0x30);
    } while (*pbVar8 == 0x77);
    plVar4 = param_4;
    if ((pbStack_68 < pbVar9) && (pbVar9 < pbVar8)) {
      return 0xffffffff;
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if ((byte *)plVar4[1] == pbStack_68) {
        return 0xffffffff;
      }
    }
    local_70 = param_4;
    uVar6 = FUN_1004d48e4(pbStack_68 + 2,1,param_3,&local_70);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    goto LAB_1004d49e8;
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
    do {
      pbVar9 = pbVar9 + (((((ulong)*(ushort *)(pbVar9 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar9 + 1) << 0x38) >> 0x30);
      uVar6 = (ulong)*pbVar9;
    } while (uVar6 == 0x77);
switchD_1004d4954_caseD_1:
    uVar7 = (ulong)(byte)(&DAT_10115bc9c)[uVar6];
LAB_1004d495c:
    uVar6 = uVar5;
    pbVar9 = pbVar9 + uVar7;
    goto LAB_1004d4934;
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x85:
  case 0x87:
    uVar6 = FUN_1004d48e4(pbVar9 + (ulong)(bVar2 == 0x85) * 2,param_2,param_3,param_4);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    do {
      pbVar9 = pbVar9 + (((((ulong)*(ushort *)(pbVar9 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar9 + 1) << 0x38) >> 0x30);
    } while (*pbVar9 == 0x77);
LAB_1004d49e8:
    uVar6 = (ulong)(uint)((int)uVar6 + iVar11);
    pbVar9 = pbVar9 + 3;
    goto LAB_1004d4934;
  case 0x95:
  case 0x97:
  case 0x99:
  case 0x9b:
    uVar7 = (ulong)(byte)(&DAT_10115bc9c)[uVar6] + (ulong)pbVar9[1];
    goto LAB_1004d495c;
  }
  return 0xffffffff;
switchD_1004d4954_caseD_e:
  return 0xfffffffe;
}




undefined8 FUN_1004d4b7c(byte *param_1,ulong param_2,long param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*param_1;
  do {
    pbVar3 = (byte *)FUN_1004da72c(param_1 + (byte)(&DAT_10115bc9c)[uVar7],0);
    bVar1 = *pbVar3;
    uVar6 = bVar1 - 0x7d;
    uVar7 = param_2;
    if (uVar6 < 0xf) {
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      uVar5 = param_4;
      if ((uVar6 & 0x18c0) == 0) {
        if ((uVar6 & 0x6300) == 0) {
          if ((uVar6 & 0x401) == 0) goto LAB_1004d4c5c;
        }
        else {
          uVar2 = ((*(ushort *)(pbVar3 + 3) & 0xff00) << 0x10) >> 8;
          uVar6 = 1 << (ulong)((uVar2 & 0x1f0000) >> 0x10);
          if (0x1f < (uVar2 | (uint)*(ushort *)(pbVar3 + 3) << 0x18) >> 0x10) {
            uVar6 = 1;
          }
          uVar7 = (ulong)(uVar6 | (uint)param_2);
        }
      }
LAB_1004d4c30:
      uVar4 = FUN_1004d4b7c(pbVar3,uVar7,param_3,uVar5);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    else {
LAB_1004d4c5c:
      uVar5 = (ulong)((int)param_4 + 1);
      if ((bVar1 + 0x7f & 0xff) < 2) goto LAB_1004d4c30;
      uVar6 = (uint)bVar1;
      if (0x1b < uVar6 || (1 << (ulong)(uVar6 & 0x1f) & 0x8000006U) == 0) {
        if ((9 < uVar6 - 0x55 || (1 << (ulong)(uVar6 - 0x55 & 0x1f) & 0x203U) == 0) ||
           (pbVar3[1] != 0xd)) {
          return 0;
        }
        if ((*(uint *)(param_3 + 0x80) & (uint)param_2) != 0) {
          return 0;
        }
        if (0 < (int)param_4) {
          return 0;
        }
        if (*(int *)(param_3 + 0xa0) != 0) {
          return 0;
        }
      }
    }
    param_1 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
    uVar7 = 0x77;
    if (*param_1 != 0x77) {
      return 1;
    }
  } while( true );
}




ulong FUN_1004d4d08(char *param_1,int *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int local_54;
  
  *param_2 = -1;
  bVar4 = *param_1 + 0x7b;
  uVar7 = 0;
  iVar8 = -1;
  do {
    if (bVar4 < 7) {
      lVar6 = *(long *)(&DAT_10115ba68 + (long)(char)bVar4 * 8);
    }
    else {
      lVar6 = 3;
    }
    pbVar2 = (byte *)FUN_1004da72c(param_1 + lVar6,1);
    bVar4 = *pbVar2;
    uVar5 = (uint)bVar4;
    if (bVar4 < 0x36) {
      if (uVar5 == 0x28 || bVar4 < 0x28) {
        if (1 < uVar5 - 0x23 && uVar5 != 0x1d) {
          if (uVar5 != 0x1e) {
            return 0;
          }
          goto joined_r0x0001004d4e90;
        }
joined_r0x0001004d4e84:
        if (param_3 == 0) {
          return 0;
        }
        uVar3 = (ulong)pbVar2[1];
        if (iVar8 < 0) {
          iVar9 = 0;
          goto LAB_1004d4e5c;
        }
      }
      else {
        if (1 < uVar5 - 0x30) {
          if (uVar5 == 0x29) {
            pbVar2 = pbVar2 + 2;
          }
          else if (uVar5 != 0x2b) {
            return 0;
          }
          goto joined_r0x0001004d4e84;
        }
joined_r0x0001004d4e90:
        if (param_3 == 0) {
          return 0;
        }
        uVar3 = (ulong)pbVar2[1];
        if (iVar8 < 0) {
          iVar9 = 1;
          goto LAB_1004d4e5c;
        }
      }
      iVar1 = (int)uVar3;
      uVar3 = uVar7;
      iVar9 = iVar8;
      if ((int)uVar7 != iVar1) {
        return 0;
      }
    }
    else {
      if (0xe < uVar5 - 0x7d || (1 << (ulong)(uVar5 - 0x7d & 0x1f) & 0x63f1U) == 0) {
        if (uVar5 == 0x36) {
          pbVar2 = pbVar2 + 2;
        }
        else if (uVar5 != 0x38) {
          return 0;
        }
        goto joined_r0x0001004d4e90;
      }
      uVar3 = FUN_1004d4d08(pbVar2,&local_54,uVar5 == 0x7d);
      if (local_54 < 0) {
        return 0;
      }
      iVar9 = local_54;
      if ((-1 < iVar8) &&
         (iVar1 = (int)uVar3, uVar3 = uVar7, iVar9 = iVar8, (int)uVar7 != iVar1 || iVar8 != local_54
         )) {
        return 0;
      }
    }
LAB_1004d4e5c:
    param_1 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
    bVar4 = 0xf2;
    uVar7 = uVar3;
    iVar8 = iVar9;
    if (*param_1 != 'w') {
      *param_2 = iVar9;
      return uVar3;
    }
  } while( true );
}




undefined8 FUN_1004d4ec0(byte *param_1,ulong param_2,long param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  uVar8 = (ulong)*param_1;
  do {
    pbVar4 = (byte *)FUN_1004da72c(param_1 + (byte)(&DAT_10115bc9c)[uVar8],0);
    bVar1 = *pbVar4;
    if (bVar1 == 0x87) {
      pbVar9 = pbVar4 + 3;
      bVar1 = *pbVar9;
      if (bVar1 == 0x76) {
        pbVar9 = pbVar4 + 9;
        bVar1 = *pbVar9;
      }
      if (bVar1 - 0x8d < 0x11 && (1 << (ulong)(bVar1 - 0x8d & 0x1f) & 0x1001fU) != 0) {
        return 0;
      }
      uVar5 = FUN_1004d4ec0(pbVar9,param_2,param_3,param_4);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      do {
        pbVar9 = pbVar9 + (((((ulong)*(ushort *)(pbVar9 + 1) & 0xff00) << 0x30) >> 8 |
                           (ulong)*(ushort *)(pbVar9 + 1) << 0x38) >> 0x30);
      } while (*pbVar9 == 0x77);
      pbVar4 = (byte *)FUN_1004da72c(pbVar9 + 3,0);
      bVar1 = *pbVar4;
    }
    uVar7 = (uint)bVar1;
    uVar3 = uVar7 - 0x7d;
    uVar8 = param_2;
    if (uVar3 < 0xf) {
      uVar2 = 1 << (ulong)(uVar3 & 0x1f);
      uVar6 = param_4;
      if ((uVar2 & 0x18c0) == 0) {
        if ((uVar2 & 0x6300) == 0) {
          if (uVar3 != 0) goto LAB_1004d5034;
        }
        else {
          uVar7 = ((*(ushort *)(pbVar4 + 3) & 0xff00) << 0x10) >> 8;
          uVar3 = 1 << (ulong)((uVar7 & 0x1f0000) >> 0x10);
          if (0x1f < (uVar7 | (uint)*(ushort *)(pbVar4 + 3) << 0x18) >> 0x10) {
            uVar3 = 1;
          }
          uVar8 = (ulong)(uVar3 | (uint)param_2);
        }
      }
LAB_1004d5008:
      uVar5 = FUN_1004d4ec0(pbVar4,uVar8,param_3,uVar6);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    else {
LAB_1004d5034:
      if ((uVar7 + 0x7f & 0xff) < 2) {
        uVar6 = (ulong)((int)param_4 + 1);
        goto LAB_1004d5008;
      }
      if (uVar7 - 0x55 < 10 && (1 << (ulong)(uVar7 - 0x55 & 0x1f) & 0x203U) != 0) {
        if (pbVar4[1] != 0xc) {
          return 0;
        }
        if ((*(uint *)(param_3 + 0x80) & (uint)param_2) != 0) {
          return 0;
        }
        if (0 < (int)param_4) {
          return 0;
        }
        if (*(int *)(param_3 + 0xa0) != 0) {
          return 0;
        }
      }
      else if (1 < uVar7 - 0x1b) {
        return 0;
      }
    }
    param_1 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
    uVar8 = 0x77;
    if (*param_1 != 0x77) {
      return 1;
    }
  } while( true );
}




undefined8 FUN_1004d50dc(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  ushort *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long *local_70;
  byte *pbStack_68;
  
  pbVar8 = (byte *)FUN_1004da72c(param_1 + (byte)(&DAT_10115bc9c)[*param_1],1);
  while (uVar14 = 1, pbVar8 < param_2) {
    bVar2 = *pbVar8;
    uVar9 = (ulong)bVar2;
    uVar14 = 0;
    pbVar12 = pbVar8;
    switch(bVar2) {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x29:
    case 0x2b:
    case 0x30:
    case 0x31:
    case 0x36:
    case 0x38:
    case 0x3d:
    case 0x3e:
    case 0x43:
    case 0x45:
    case 0x4a:
    case 0x4b:
    case 0x50:
    case 0x52:
    case 0x57:
    case 0x58:
    case 0x5d:
    case 0x5f:
      goto switchD_1004d5164_caseD_6;
    case 0x55:
    case 0x56:
    case 0x59:
    case 0x5a:
    case 0x5e:
    case 0x60:
      bVar2 = pbVar8[1];
      goto LAB_1004d5268;
    case 0x5b:
    case 0x5c:
    case 0x61:
      bVar2 = pbVar8[3];
LAB_1004d5268:
      pbVar12 = pbVar8 + (ulong)(bVar2 - 0xf < 2) * 2;
      break;
    case 0x6e:
    case 0x6f:
      if (0xb < pbVar8[0x21] - 0x62) {
        return 0;
      }
      uVar3 = 1 << (ulong)(pbVar8[0x21] - 0x62 & 0x1f);
      if ((uVar3 & 0x533) == 0) {
        if ((uVar3 & 0x8c0) == 0) {
          return 0;
        }
        if ((*(ushort *)(pbVar8 + 0x22) & 0xff00) != 0 || (*(ushort *)(pbVar8 + 0x22) & 0xff) != 0)
        {
          return 0;
        }
      }
      break;
    case 0x75:
      uVar9 = (ulong)*(ushort *)(pbVar8 + 1);
      puVar10 = *(ushort **)(param_3 + 0x20);
      pbVar13 = (byte *)(*(long *)(param_3 + 0x28) +
                        ((((uVar9 & 0xff00) << 0x30) >> 8 | uVar9 << 0x38) >> 0x30));
      pbVar11 = pbVar13;
      if (puVar10 != (ushort *)0x0) {
        if (puVar10 < *(ushort **)(param_3 + 0x40)) {
          do {
            if ((((*puVar10 & 0xff00) << 0x10) >> 8 | (uint)*puVar10 << 0x18) >> 0x10 ==
                (int)(pbVar8 + 1) - (int)*(long *)(param_3 + 0x28)) {
              return 1;
            }
            puVar10 = puVar10 + 1;
          } while (puVar10 < *(ushort **)(param_3 + 0x40));
        }
        if ((*(ushort *)(pbVar13 + 1) & 0xff00) == 0 && (*(ushort *)(pbVar13 + 1) & 0xff) == 0) {
          return 1;
        }
      }
      do {
        pbVar11 = pbVar11 + (((((ulong)*(ushort *)(pbVar11 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar11 + 1) << 0x38) >> 0x30);
      } while (*pbVar11 == 0x77);
      plVar4 = param_4;
      if ((pbVar8 < pbVar13) || (pbVar11 < pbVar8)) {
        for (; plVar5 = param_4, pbVar8 = pbVar13, plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
        {
          if ((byte *)plVar4[1] == pbVar13) goto LAB_1004d5378;
        }
        while (pbStack_68 = pbVar8, local_70 = plVar5,
              iVar7 = FUN_1004d50dc(pbVar13,param_2,param_3,&local_70), iVar7 == 0) {
          pbVar13 = pbVar13 + (((((ulong)*(ushort *)(pbVar13 + 1) & 0xff00) << 0x30) >> 8 |
                               (ulong)*(ushort *)(pbVar13 + 1) << 0x38) >> 0x30);
          plVar5 = local_70;
          pbVar8 = pbStack_68;
          if (*pbVar13 != 0x77) {
            return 0;
          }
        }
      }
LAB_1004d5378:
      uVar9 = 0x75;
      break;
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
      return 1;
    case 0x7d:
      do {
        pbVar12 = pbVar12 + (((((ulong)*(ushort *)(pbVar12 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar12 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar12;
      } while (*pbVar12 == 0x77);
      break;
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      uVar9 = (((ulong)*(ushort *)(pbVar8 + 1) & 0xff00) << 0x30) >> 8 |
              (ulong)*(ushort *)(pbVar8 + 1) << 0x38;
      if ((short)(uVar9 >> 0x30) == 0) {
        return 1;
      }
      if (bVar2 == 0x87) {
        pbVar12 = pbVar8 + (uVar9 >> 0x30);
        uVar9 = (ulong)*pbVar12;
        if (*pbVar12 != 0x77) break;
      }
      bVar1 = false;
      do {
        if (bVar1) {
          bVar6 = false;
          bVar1 = true;
        }
        else {
          iVar7 = FUN_1004d50dc(pbVar8,param_2,param_3,param_4);
          bVar6 = iVar7 == 0;
          bVar1 = !bVar6;
        }
        pbVar8 = pbVar8 + (((((ulong)*(ushort *)(pbVar8 + 1) & 0xff00) << 0x30) >> 8 |
                           (ulong)*(ushort *)(pbVar8 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar8;
      } while (*pbVar8 == 0x77);
      pbVar12 = pbVar8;
      if (bVar6) {
        return 0;
      }
      break;
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      do {
        pbVar12 = pbVar12 + (((((ulong)*(ushort *)(pbVar12 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar12 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar12;
      } while (*pbVar12 == 0x77);
      break;
    case 0x92:
    case 0x93:
    case 0x94:
    case 0xa1:
      pbVar12 = pbVar8 + (byte)(&DAT_10115bc9c)[uVar9];
      do {
        pbVar12 = pbVar12 + (((((ulong)*(ushort *)(pbVar12 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar12 + 1) << 0x38) >> 0x30);
        uVar9 = (ulong)*pbVar12;
      } while (*pbVar12 == 0x77);
      break;
    case 0x95:
    case 0x97:
    case 0x99:
    case 0x9b:
      pbVar12 = pbVar8 + pbVar8[1];
    }
    pbVar8 = (byte *)FUN_1004da72c(pbVar12 + (byte)(&DAT_10115bc9c)[uVar9],1);
  }
switchD_1004d5164_caseD_6:
  return uVar14;
}



/*
Unable to decompile 'FUN_1004d540c'
Cause: 
Low-level Error: Conditional execution: Illegal op in iblock
*/


void FUN_1004d9134(byte *param_1,int param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  pbVar5 = param_1;
LAB_1004d9150:
  bVar1 = *pbVar5;
  switch((uint)bVar1) {
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x5f:
  case 0x60:
    bVar2 = pbVar5[1];
    goto LAB_1004d91a0;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x61:
    bVar2 = pbVar5[3];
LAB_1004d91a0:
    pbVar5 = pbVar5 + (ulong)(bVar2 - 0xf < 2) * 2;
    break;
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
    break;
  case 0x70:
    pbVar5 = pbVar5 + (((((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar5 + 1) << 0x38) >> 0x30);
    goto LAB_1004d9150;
  case 0x75:
    goto switchD_1004d916c_caseD_75;
  default:
    uVar4 = bVar1 - 0x95;
    if (uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x55U) != 0) {
      pbVar5 = pbVar5 + pbVar5[1];
    }
    else if (bVar1 == 0) {
      return;
    }
  }
  pbVar5 = pbVar5 + (byte)(&DAT_10115bc9c)[bVar1];
  goto LAB_1004d9150;
switchD_1004d916c_caseD_75:
  puVar6 = (ushort *)(*(long *)(param_3 + 0x20) + param_4);
  puVar7 = *(ushort **)(param_3 + 0x40);
  if (puVar6 < puVar7) {
    do {
      uVar3 = (((ulong)*puVar6 & 0xff00) << 0x30) >> 8 | (ulong)*puVar6 << 0x38;
      if ((byte *)(*(long *)(param_3 + 0x28) + (uVar3 >> 0x30)) == pbVar5 + 1) {
        uVar4 = (uint)(ushort)(uVar3 >> 0x30) + param_2;
        *puVar6 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
        puVar7 = *(ushort **)(param_3 + 0x40);
        break;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar7);
  }
  if ((puVar7 <= puVar6) &&
     (uVar3 = (((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
              (ulong)*(ushort *)(pbVar5 + 1) << 0x38,
     param_1 <= (byte *)(*(long *)(param_3 + 0x28) + (uVar3 >> 0x30)))) {
    uVar4 = (uint)(ushort)(uVar3 >> 0x30) + param_2;
    *(ushort *)(pbVar5 + 1) = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
  }
  pbVar5 = pbVar5 + 3;
  goto LAB_1004d9150;
}




bool FUN_1004d9270(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  
  if (*param_1 - 0x30 < 10) {
    do {
      pbVar2 = param_1;
      param_1 = pbVar2 + 1;
      bVar1 = *param_1;
    } while (bVar1 - 0x30 < 10);
    if (bVar1 != 0x2c) {
      return bVar1 == 0x7d;
    }
    uVar3 = (uint)pbVar2[2];
    if (uVar3 == 0x7d) {
      return true;
    }
    if (uVar3 - 0x30 < 10) {
      lVar4 = 2;
      do {
        pbVar2 = param_1 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pbVar2 - 0x30 < 10);
      return *pbVar2 == 0x7d;
    }
  }
  return false;
}




undefined8 FUN_1004d92f8(long param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *(char *)(param_1 + 1);
  pcVar5 = (char *)(param_1 + 2);
  do {
    cVar2 = *pcVar5;
    if (cVar2 == '\\') {
      pcVar4 = pcVar5 + 1;
      if (*pcVar4 != ']') goto LAB_1004d935c;
    }
    else {
      if (cVar2 == '\0') {
        return 0;
      }
      if (cVar2 == ']') {
        return 0;
      }
LAB_1004d935c:
      if ((cVar2 == cVar1) && (pcVar5[1] == ']')) {
        *param_2 = pcVar5;
        return 1;
      }
      pcVar4 = pcVar5;
      if ((((cVar2 == '[') && ((byte)pcVar5[1] < 0x3e)) &&
          ((1L << ((ulong)(byte)pcVar5[1] & 0x3f) & 0x2400400000000000U) != 0)) &&
         (iVar3 = FUN_1004d92f8(pcVar5,param_2), iVar3 != 0)) {
        return 0;
      }
    }
    pcVar5 = pcVar4 + 1;
  } while( true );
}




int FUN_1004d93cc(long *param_1,uint *param_2,undefined4 *param_3,int param_4,uint param_5,
                 int param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  
  lVar13 = *param_1;
  pbVar7 = (byte *)(lVar13 + 1);
  bVar2 = *pbVar7;
  uVar18 = (uint)bVar2;
  if (bVar2 != 0) {
    uVar12 = bVar2 - 0x30;
    if (uVar12 < 0x4b) {
      uVar15 = (uint)*(short *)(&DAT_10115a9d4 + (ulong)uVar12 * 2);
      pbVar16 = pbVar7;
      if (uVar15 != 0) {
        if (0 < (int)uVar15) {
          iVar6 = 0;
          uVar18 = uVar15;
          goto LAB_1004d9678;
        }
        goto LAB_1004d9470;
      }
      if (bVar2 < 0x4c) {
        if (uVar18 - 0x31 < 9) {
          if (param_6 == 0) {
            bVar2 = *(byte *)(lVar13 + 2);
            uVar8 = (uint)bVar2;
            pbVar17 = (byte *)(lVar13 + 2);
            uVar15 = uVar12;
            if (bVar2 - 0x30 < 10) {
              do {
                pbVar16 = pbVar17;
                uVar15 = (uVar15 * 10 + uVar8) - 0x30;
                uVar8 = (uint)pbVar16[1];
                if (9 < uVar8 - 0x30) goto LAB_1004d959c;
                pbVar17 = pbVar16 + 1;
              } while ((int)uVar15 < 0xccccccc);
              pbVar7 = pbVar16 + -1;
              do {
                pbVar16 = pbVar7 + 2;
                pbVar7 = pbVar7 + 1;
              } while (*pbVar16 - 0x30 < 10);
              goto LAB_1004d9590;
            }
LAB_1004d959c:
            if ((int)uVar15 < 8 || (int)uVar15 <= param_4) goto LAB_1004d9470;
          }
          if (0x37 < uVar18) goto LAB_1004d940c;
        }
        else if (uVar18 != 0x30) goto LAB_1004d96f4;
        lVar9 = 0;
        pbVar7 = (byte *)(lVar13 + 3);
        do {
          uVar18 = (uint)*(byte *)(lVar13 + lVar9 + 2);
          if ((uVar18 & 0xf8) != 0x30) {
            pbVar7 = (byte *)(lVar13 + lVar9 + 1);
            break;
          }
          uVar12 = (uVar18 + uVar12 * 8) - 0x30;
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 != 2);
        if (((param_5 >> 0xb & 1) == 0) && (0xff < uVar12)) {
          *param_3 = 0x33;
        }
        iVar6 = 0;
        uVar18 = uVar12;
        goto LAB_1004d9678;
      }
      if (uVar18 == 0x6b || bVar2 < 0x6b) {
        if (uVar18 == 0x62 || bVar2 < 0x62) {
          if (uVar18 == 0x4c) {
LAB_1004d960c:
            uVar11 = 0x25;
            goto LAB_1004d941c;
          }
          if (uVar18 == 0x55) {
            iVar6 = 0;
            if ((param_5 >> 0x19 & 1) == 0) {
              *param_3 = 0x25;
            }
            uVar18 = 0x55;
            goto LAB_1004d9678;
          }
        }
        else {
          if (uVar18 == 99) {
            pbVar7 = (byte *)(lVar13 + 2);
            uVar18 = (uint)*pbVar7;
            iVar6 = 0;
            if (uVar18 == 0) {
              uVar11 = 2;
            }
            else {
              if (-1 < (char)*pbVar7) {
                uVar12 = uVar18 - 0x20;
                if (0x19 < uVar18 - 0x61) {
                  uVar12 = uVar18;
                }
                uVar18 = uVar12 ^ 0x40;
                goto LAB_1004d9678;
              }
              uVar11 = 0x44;
            }
            goto LAB_1004d941c;
          }
          if (uVar18 == 0x67) {
            if (param_6 == 0) {
              pbVar16 = (byte *)(lVar13 + 2);
              bVar2 = *pbVar16;
              iVar6 = 0x1b;
              if ((bVar2 != 0x27) && (bVar2 != 0x3c)) {
                pbVar17 = pbVar7;
                if (bVar2 == 0x7b) {
                  pbVar10 = (byte *)(lVar13 + 3);
                  do {
                    bVar3 = *pbVar10;
                    if (bVar3 != 0x2d) {
                      pbVar17 = pbVar16;
                      if ((bVar3 == 0) || (uVar12 = (uint)bVar3, uVar12 == 0x7d)) break;
                      if (9 < uVar12 - 0x30) goto LAB_1004d9b94;
                    }
                    pbVar10 = pbVar10 + 1;
                  } while( true );
                }
                goto LAB_1004d9998;
              }
            }
            else {
              iVar6 = 0;
            }
            uVar18 = 0x67;
            goto LAB_1004d9678;
          }
        }
      }
      else {
        if (bVar2 < 0x75) {
          if (uVar18 == 0x6c) goto LAB_1004d960c;
          if (uVar18 != 0x6f) goto LAB_1004d96f4;
          if (*(char *)(lVar13 + 2) == '{') {
            pbVar16 = (byte *)(lVar13 + 3);
            bVar2 = *pbVar16;
            uVar12 = (uint)bVar2;
            if (bVar2 != 0x7d) {
              uVar15 = 0x10ffff;
              if ((param_5 & 0x800) == 0) {
                uVar15 = 0xff;
              }
              if ((bVar2 & 0xf8) == 0x30) {
                uVar18 = 0;
                pbVar7 = pbVar16;
                do {
                  if ((uVar18 == 0) && (uVar12 == 0x30)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = (uVar18 * 8 + uVar12) - 0x30;
                    if (uVar15 < uVar18) goto LAB_1004d9854;
                  }
                  pbVar16 = pbVar7 + 1;
                  uVar12 = (uint)pbVar7[1];
                  pbVar7 = pbVar16;
                } while ((uVar12 & 0xf8) == 0x30);
              }
              else {
                uVar18 = 0;
              }
              if (uVar12 == 0x7d) {
                pbVar7 = pbVar16;
                if ((((param_5 >> 0xb & 1) != 0) && (0x1a < uVar18 >> 0xb)) && (uVar18 >> 0xd < 7))
                {
                  uVar11 = 0x49;
                  goto LAB_1004d9988;
                }
              }
              else {
                uVar11 = 0x50;
LAB_1004d9988:
                *param_3 = uVar11;
                pbVar7 = pbVar16;
              }
              iVar6 = 0;
              goto LAB_1004d9678;
            }
            uVar11 = 0x56;
          }
          else {
            uVar11 = 0x51;
          }
          iVar6 = 0;
          *param_3 = uVar11;
          uVar18 = 0x6f;
          goto LAB_1004d9678;
        }
        if (uVar18 == 0x75) {
          if ((param_5 >> 0x19 & 1) == 0) {
            *param_3 = 0x25;
          }
          else if (((((byte)(&DAT_10115aa6a)[*(byte *)(lVar13 + 2)] >> 3 & 1) != 0) &&
                   (((byte)(&DAT_10115aa6a)[*(byte *)(lVar13 + 3)] >> 3 & 1) != 0)) &&
                  ((((byte)(&DAT_10115aa6a)[*(byte *)(lVar13 + 4)] >> 3 & 1) != 0 &&
                   (pbVar16 = (byte *)(lVar13 + 5), ((byte)(&DAT_10115aa6a)[*pbVar16] >> 3 & 1) != 0
                   )))) {
            lVar9 = 0;
            uVar18 = 0;
            do {
              bVar2 = *(byte *)(lVar13 + 2 + lVar9);
              uVar12 = bVar2 - 0x20;
              if (bVar2 < 0x61) {
                uVar12 = (uint)bVar2;
              }
              iVar6 = -0x30;
              if (0x40 < uVar12) {
                iVar6 = -0x37;
              }
              uVar18 = uVar12 + uVar18 * 0x10 + iVar6;
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 != 4);
            uVar12 = 0x10ffff;
            if ((param_5 & 0x800) == 0) {
              uVar12 = 0xff;
            }
            pbVar7 = pbVar16;
            if (uVar12 < uVar18) {
              uVar11 = 0x4c;
            }
            else {
              if (((param_5 >> 0xb & 1) == 0) || (uVar18 >> 0xb < 0x1b || 6 < uVar18 >> 0xd))
              goto LAB_1004d9940;
              uVar11 = 0x49;
            }
            *param_3 = uVar11;
LAB_1004d9940:
            iVar6 = 0;
            goto LAB_1004d9678;
          }
          iVar6 = 0;
          uVar18 = 0x75;
          goto LAB_1004d9678;
        }
        if (uVar18 == 0x78) {
          if ((param_5 >> 0x19 & 1) == 0) {
            pbVar7 = (byte *)(lVar13 + 3);
            if (*(byte *)(lVar13 + 2) != 0x7b) {
              lVar9 = 0;
              uVar18 = 0;
              do {
                bVar2 = *(byte *)(lVar13 + lVar9 + 2);
                if (((byte)(&DAT_10115aa6a)[bVar2] >> 3 & 1) == 0) {
                  iVar6 = 0;
                  pbVar7 = (byte *)(lVar13 + lVar9 + 1);
                  goto LAB_1004d9678;
                }
                uVar12 = bVar2 - 0x20;
                if (bVar2 < 0x61) {
                  uVar12 = (uint)bVar2;
                }
                iVar6 = -0x30;
                if (0x40 < uVar12) {
                  iVar6 = -0x37;
                }
                uVar18 = uVar12 + uVar18 * 0x10 + iVar6;
                lVar9 = lVar9 + 1;
              } while ((int)lVar9 != 2);
              goto LAB_1004d940c;
            }
            uVar14 = (ulong)*pbVar7;
            if (uVar14 != 0x7d) {
              uVar12 = 0x10ffff;
              if ((param_5 & 0x800) == 0) {
                uVar12 = 0xff;
              }
              if (((byte)(&DAT_10115aa6a)[uVar14] >> 3 & 1) == 0) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                pbVar16 = pbVar7;
                do {
                  uVar15 = (uint)uVar14;
                  if ((uVar18 == 0) && (uVar15 == 0x30)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar8 = uVar15 - 0x20;
                    if (uVar15 < 0x61) {
                      uVar8 = uVar15;
                    }
                    iVar6 = -0x30;
                    if (0x40 < uVar8) {
                      iVar6 = -0x37;
                    }
                    uVar18 = uVar8 + uVar18 * 0x10 + iVar6;
                    if (uVar12 < uVar18) goto LAB_1004d9ab0;
                  }
                  pbVar7 = pbVar16 + 1;
                  uVar14 = (ulong)pbVar16[1];
                  pbVar16 = pbVar7;
                } while (((byte)(&DAT_10115aa6a)[uVar14] >> 3 & 1) != 0);
              }
              if (*pbVar7 == 0x7d) {
                iVar6 = 0;
                if ((((param_5 >> 0xb & 1) == 0) || (uVar18 >> 0xb < 0x1b)) || (6 < uVar18 >> 0xd))
                goto LAB_1004d9678;
                uVar11 = 0x49;
              }
              else {
                uVar11 = 0x4f;
              }
              goto LAB_1004d941c;
            }
            *param_3 = 0x56;
          }
          else if ((((byte)(&DAT_10115aa6a)[*(byte *)(lVar13 + 2)] >> 3 & 1) != 0) &&
                  (((byte)(&DAT_10115aa6a)[*(byte *)(lVar13 + 3)] >> 3 & 1) != 0)) {
            uVar18 = 0;
            pbVar16 = (byte *)(lVar13 + 2);
            bVar5 = true;
            do {
              bVar4 = bVar5;
              bVar2 = *pbVar16;
              uVar12 = bVar2 - 0x20;
              if (bVar2 < 0x61) {
                uVar12 = (uint)bVar2;
              }
              iVar6 = -0x30;
              if (0x40 < uVar12) {
                iVar6 = -0x37;
              }
              uVar18 = uVar12 + uVar18 * 0x10 + iVar6;
              pbVar16 = pbVar16 + 1;
              pbVar7 = (byte *)(lVar13 + 3);
              bVar5 = false;
            } while (bVar4);
            goto LAB_1004d9940;
          }
          iVar6 = 0;
          uVar18 = 0x78;
          goto LAB_1004d9678;
        }
      }
LAB_1004d96f4:
      if ((param_5 >> 6 & 1) != 0) {
        uVar11 = 3;
        goto LAB_1004d941c;
      }
    }
LAB_1004d940c:
    iVar6 = 0;
    goto LAB_1004d9678;
  }
  uVar11 = 1;
  goto LAB_1004d941c;
LAB_1004d9ab0:
  do {
    pbVar16 = pbVar16 + 1;
  } while (((byte)(&DAT_10115aa6a)[*pbVar16] >> 3 & 1) != 0);
  uVar11 = 0x22;
  goto LAB_1004d9988;
LAB_1004d9b94:
  if ((uVar12 != 0) && (uVar12 != 0x7d)) {
    iVar6 = 0x1c;
    goto LAB_1004d9678;
  }
LAB_1004d9998:
  bVar3 = pbVar17[1];
  pbVar16 = pbVar17 + 1;
  if (bVar3 != 0x2d) {
    pbVar16 = pbVar17;
  }
  pbVar7 = pbVar16 + 1;
  uVar12 = (uint)*pbVar7;
  if (*pbVar7 - 0x30 < 10) {
    uVar15 = 0;
    pbVar16 = pbVar16 + 2;
    do {
      pbVar7 = pbVar16;
      uVar15 = (uVar15 * 10 + uVar12) - 0x30;
      uVar12 = (uint)*pbVar7;
      if (9 < uVar12 - 0x30) {
        pbVar16 = pbVar7 + -1;
        goto LAB_1004d9b44;
      }
      pbVar16 = pbVar7 + 1;
    } while ((int)uVar15 < 0xccccccc);
    pbVar7 = pbVar7 + -2;
    do {
      pbVar16 = pbVar7 + 2;
      pbVar7 = pbVar7 + 1;
    } while (*pbVar16 - 0x30 < 10);
LAB_1004d9590:
    uVar11 = 0x3d;
  }
  else {
    uVar15 = 0;
LAB_1004d9b44:
    if ((bVar2 != 0x7b) || (pbVar16 = pbVar7, uVar12 == 0x7d)) {
      pbVar7 = pbVar16;
      if (uVar15 == 0) {
        uVar11 = 0x3a;
LAB_1004d9b80:
        iVar6 = 0;
        *param_3 = uVar11;
      }
      else {
        pbVar16 = pbVar7;
        if (bVar3 == 0x2d) {
          if (param_4 < (int)uVar15) {
            uVar11 = 0xf;
            goto LAB_1004d9b80;
          }
          uVar15 = (param_4 - uVar15) + 1;
        }
LAB_1004d9470:
        pbVar7 = pbVar16;
        if (uVar15 == 0xfffffff4) {
          if ((pbVar7[1] == 0x7b) && (iVar6 = FUN_1004d9270(pbVar7 + 2), iVar6 == 0)) {
            *param_3 = 0x25;
          }
          iVar6 = 0xc;
        }
        else {
          iVar6 = -uVar15;
        }
      }
      goto LAB_1004d9678;
    }
    uVar11 = 0x39;
  }
  goto LAB_1004d941c;
LAB_1004d9854:
  do {
    pbVar7 = pbVar7 + 1;
  } while ((*pbVar7 & 0xf8) == 0x30);
  uVar11 = 0x22;
LAB_1004d941c:
  iVar6 = 0;
  *param_3 = uVar11;
LAB_1004d9678:
  iVar1 = iVar6 + 0x17;
  if (((uint)(5 < iVar6) & param_5 >> 0x1d & (uint)(iVar6 < 0xc)) == 0) {
    iVar1 = iVar6;
  }
  *param_1 = (long)pbVar7;
  *param_2 = uVar18;
  return iVar1;
}




void FUN_1004d9be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *param_4;
  while (iVar2 = iVar1, iVar1 != -1) {
    do {
      piVar3 = param_4;
      param_4 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 == *param_4);
    FUN_1004d9d10(param_1,param_2,param_3,iVar1,*piVar3);
    iVar1 = *param_4;
  }
  return;
}




void FUN_1004d9c50(undefined8 param_1,ulong param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x10ffff;
  if (*param_4 == 0) {
    if ((param_2 & 0x800) == 0) {
      iVar4 = -1;
    }
    iVar3 = 0;
  }
  else {
    FUN_1004d9d10(param_1,param_2,param_3,0,*param_4 + -1);
    if ((param_2 & 0x800) == 0) {
      iVar4 = -1;
    }
    iVar3 = *param_4;
    if (*param_4 == -1) {
      return;
    }
  }
  do {
    do {
      param_4 = param_4 + 1;
      iVar2 = *param_4;
      iVar1 = iVar3 + 1;
      iVar3 = iVar2;
    } while (iVar2 == iVar1);
    iVar3 = iVar4;
    if (iVar2 != -1) {
      iVar3 = iVar2 + -1;
    }
    FUN_1004d9d10(param_1,param_2,param_3,iVar1,iVar3);
    iVar3 = *param_4;
  } while (iVar3 != -1);
  return;
}




int FUN_1004d9d10(long param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  iVar2 = 0;
  if (0xfe < param_5) {
    param_5 = 0xff;
  }
  if (((param_2 & 1) != 0) && (param_4 <= param_5)) {
    uVar3 = (ulong)param_4;
    do {
      bVar1 = *(byte *)(*(long *)(param_3 + 8) + uVar3);
      uVar5 = (ulong)(bVar1 >> 3);
      *(byte *)(param_1 + uVar5) = (byte)(1 << ((ulong)bVar1 & 7)) | *(byte *)(param_1 + uVar5);
      uVar3 = uVar3 + 1;
    } while (param_5 + 1 != uVar3);
    iVar2 = (param_5 + 1) - param_4;
  }
  if (param_4 <= param_5) {
    uVar4 = param_4;
    do {
      *(byte *)(param_1 + (ulong)(uVar4 >> 3)) =
           *(byte *)(param_1 + (ulong)(uVar4 >> 3)) | (byte)(1 << (ulong)(uVar4 & 7));
      uVar4 = uVar4 + 1;
    } while (param_5 + 1 != uVar4);
    iVar2 = (iVar2 + param_5 + 1) - param_4;
  }
  return iVar2;
}




undefined8 FUN_1004d9db8(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  iVar1 = iVar2 * 2;
  if (0x63fff < iVar2 * 2) {
    iVar1 = 0x64000;
  }
  uVar3 = 0x48;
  if ((iVar2 < 0x64000) && (99 < iVar1 - iVar2)) {
    pvVar4 = (void *)(*(code *)PTR__malloc_101867450)((long)iVar1);
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0x15;
    }
    else {
      _memcpy(pvVar4,*(void **)(param_1 + 0x20),(long)*(int *)(param_1 + 0x6c));
      *(long *)(param_1 + 0x40) =
           (long)pvVar4 + (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x20));
      if (0x1000 < *(int *)(param_1 + 0x6c)) {
        (*(code *)PTR__free_101867458)();
      }
      uVar3 = 0;
      *(void **)(param_1 + 0x20) = pvVar4;
      *(int *)(param_1 + 0x6c) = iVar1;
    }
  }
  return uVar3;
}




byte * FUN_1004d9e80(byte *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar3 = *param_1;
  uVar6 = (uint)bVar3;
  *param_3 = (uint)bVar3;
  param_3[1] = 0;
  pbVar4 = param_1 + 1;
  if (bVar3 - 0x21 < 0x41) {
    uVar8 = 0x21;
    if (0x2d < bVar3) {
      uVar8 = 0x2e;
    }
    uVar2 = 0x3b;
    if (bVar3 < 0x3b) {
      uVar2 = uVar8;
    }
    uVar8 = 0x48;
    if (bVar3 < 0x48) {
      uVar8 = uVar2;
    }
    uVar2 = 0x55;
    if (bVar3 < 0x55) {
      uVar2 = uVar8;
    }
    uVar8 = (bVar3 - uVar2) + 0x21;
    uVar1 = uVar8 & 0xff;
    pbVar4 = param_1 + 3;
    if (0x2d < uVar1 || (1L << ((ulong)uVar8 & 0x3f) & 0x238000000000U) == 0) {
      pbVar4 = param_1 + 1;
    }
    uVar7 = 0;
    if (0x29 < uVar1 || (1L << ((ulong)uVar8 & 0x3f) & 0x21800000000U) == 0) {
      uVar7 = (uint)(uVar1 != 0x2b);
    }
    param_3[1] = uVar7;
    if (0x3a < uVar2) {
      if (uVar2 == 0x55) {
        uVar6 = (uint)*pbVar4;
        *param_3 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
      }
      else {
        if (uVar2 == 0x48) {
          uVar8 = 0x1f;
          goto switchD_1004d9f90_caseD_20;
        }
        if (uVar2 == 0x3b) {
          uVar6 = 0x1f;
          goto LAB_1004d9fdc;
        }
      }
      goto LAB_1004d9f6c;
    }
    if (uVar2 == 0x21) {
      uVar6 = 0x1d;
LAB_1004d9fdc:
      *param_3 = uVar6;
      goto switchD_1004d9f90_caseD_1d;
    }
    if (uVar2 != 0x2e) goto LAB_1004d9f6c;
switchD_1004d9f90_caseD_1e:
    uVar8 = 0x1d;
    goto switchD_1004d9f90_caseD_20;
  }
LAB_1004d9f6c:
  uVar8 = 0x1f;
  switch(uVar6) {
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    return pbVar4;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1b:
  case 0x1c:
    return (byte *)0x0;
  case 0x1d:
  case 0x1f:
switchD_1004d9f90_caseD_1d:
    param_3[2] = (uint)*pbVar4;
    param_3[3] = 0xffffffff;
    return pbVar4 + 1;
  case 0x1e:
    goto switchD_1004d9f90_caseD_1e;
  case 0x20:
switchD_1004d9f90_caseD_20:
    *param_3 = uVar8;
    bVar3 = *pbVar4;
    param_3[2] = (uint)bVar3;
    uVar6 = (uint)*(byte *)(param_2 + (ulong)(uint)bVar3);
    param_3[3] = uVar6;
    if (bVar3 == uVar6) {
      param_3[3] = 0xffffffff;
      return pbVar4 + 1;
    }
    param_3[4] = 0xffffffff;
    return pbVar4 + 1;
  default:
    if (1 < uVar6 - 0x6e) {
      return (byte *)0x0;
    }
    pbVar5 = pbVar4 + 0x20;
    if (*pbVar5 - 0x62 < 0xc) {
      uVar6 = 1 << (ulong)(*pbVar5 - 0x62 & 0x1f);
      if ((uVar6 & 0x533) == 0) {
        if ((uVar6 & 0x20c) == 0) {
          param_3[1] = (uint)((*(ushort *)(pbVar4 + 0x21) & 0xff00) == 0 &&
                             (*(ushort *)(pbVar4 + 0x21) & 0xff) == 0);
          pbVar5 = pbVar4 + 0x25;
          goto LAB_1004da064;
        }
      }
      else {
        param_3[1] = 1;
      }
      pbVar5 = pbVar4 + 0x21;
    }
LAB_1004da064:
    param_3[2] = (int)pbVar5 - (int)pbVar4;
    return pbVar5;
  }
}




void FUN_1004da074(byte *param_1,undefined8 param_2,long param_3,uint *param_4,byte *param_5,
                  int *param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint local_9c;
  uint local_88;
  int local_84;
  uint local_80 [6];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (*param_6 == 0) {
LAB_1004da6d4:
    uVar4 = 0;
  }
  else {
    *param_6 = *param_6 + -1;
    local_9c = 1;
LAB_1004da0f4:
    do {
      for (; bVar2 = *param_1, bVar2 == 0x76; param_1 = param_1 + *pbVar5) {
        pbVar5 = &DAT_10115bd12;
LAB_1004da1e0:
      }
      while (uVar13 = (uint)bVar2, uVar13 == 0x77) {
        param_1 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
        bVar2 = *param_1;
      }
      if (uVar13 - 0x92 < 2) {
        pbVar5 = param_1 + 1;
        if ((*pbVar5 - 0x81 < 3) || (*pbVar5 == 0x85)) {
          do {
            pbVar5 = pbVar5 + (((((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
                               (ulong)*(ushort *)(pbVar5 + 1) << 0x38) >> 0x30);
          } while (*pbVar5 == 0x77);
          uVar4 = FUN_1004da074(pbVar5 + 3,param_2,param_3,param_4,param_5,param_6);
          if ((int)uVar4 != 0) {
            pbVar5 = &DAT_10115bc9c + uVar13;
            goto LAB_1004da1e0;
          }
          goto switchD_1004da268_caseD_c;
        }
        goto LAB_1004da6d4;
      }
      switch(uVar13) {
      case 0x78:
        if (param_4[1] == 0) goto LAB_1004da6d4;
        if (5 < param_1[-(((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                          (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30)] - 0x7d) {
          pbVar5 = &DAT_10115bd14;
          goto LAB_1004da1e0;
        }
        uVar4 = (ulong)local_9c;
        goto switchD_1004da268_caseD_c;
      case 0x79:
      case 0x7a:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x84:
        goto switchD_1004da150_caseD_79;
      case 0x7b:
switchD_1004da150_caseD_7b:
        uVar4 = (ulong)(param_4[1] != 0);
        goto switchD_1004da268_caseD_c;
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x85:
        local_9c = 0;
        pbVar5 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                            (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
        param_1 = param_1 + (byte)(&DAT_10115bc9c)[uVar13];
        if (*pbVar5 == 0x77) {
          do {
            uVar4 = FUN_1004da074(param_1,param_2,param_3,param_4,param_5,param_6);
            if ((int)uVar4 == 0) goto switchD_1004da268_caseD_c;
            param_1 = pbVar5 + 3;
            pbVar5 = pbVar5 + (((((ulong)*(ushort *)(pbVar5 + 1) & 0xff00) << 0x30) >> 8 |
                               (ulong)*(ushort *)(pbVar5 + 1) << 0x38) >> 0x30);
          } while (*pbVar5 == 0x77);
          local_9c = 0;
        }
        goto LAB_1004da0f4;
      }
      if (uVar13 == 0) goto switchD_1004da150_caseD_7b;
switchD_1004da150_caseD_79:
      param_1 = (byte *)FUN_1004d9e80(param_1,*(undefined8 *)(param_3 + 8),&local_88);
      uVar4 = 0;
      if (param_1 == (byte *)0x0) goto switchD_1004da268_caseD_c;
      uVar13 = *param_4;
      if (uVar13 == 0x1d) {
        puVar6 = &local_88;
        puVar8 = param_4 + 2;
        uVar13 = local_88;
LAB_1004da238:
        uVar10 = *puVar8;
        pbVar5 = param_1;
        if (puVar6 != &local_88) {
          pbVar5 = param_5;
        }
        do {
          uVar4 = 0;
          switch(uVar13) {
          case 6:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 2;
              goto joined_r0x0001004da324;
            }
            goto LAB_1004da6d4;
          case 7:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 2;
              goto joined_r0x0001004da414;
            }
            break;
          case 8:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10);
              goto joined_r0x0001004da324;
            }
            goto LAB_1004da6d4;
          case 9:
            if (uVar10 < 0x100) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10);
              goto joined_r0x0001004da414;
            }
            break;
          case 10:
            if (0xff < uVar10) goto LAB_1004da6d4;
            bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 4;
joined_r0x0001004da324:
            if ((bVar2 & 1) == 0) goto LAB_1004da6d4;
            break;
          case 0xb:
            if (uVar10 < 0xff) {
              bVar2 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar10) >> 4;
              goto joined_r0x0001004da414;
            }
            break;
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x16:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1e:
            goto switchD_1004da268_caseD_c;
          case 0x11:
          case 0x15:
          case 0x17:
          case 0x19:
            uVar4 = 0;
            if (((uVar10 - 10 < 4) || (uVar10 - 0x2028 < 2)) || (uVar10 == 0x85))
            goto switchD_1004da268_caseD_c;
            break;
          case 0x12:
            uVar4 = 0;
            if ((int)uVar10 < 0x2000) {
              if ((int)uVar10 < 0xa0) {
                if ((uVar10 != 9) && (uVar10 != 0x20)) goto switchD_1004da268_caseD_c;
              }
              else if ((uVar10 != 0xa0) && ((uVar10 != 0x1680 && (uVar10 != 0x180e))))
              goto switchD_1004da268_caseD_c;
            }
            else if ((int)uVar10 < 0x202f) {
              if (10 < uVar10 - 0x2000) goto switchD_1004da268_caseD_c;
            }
            else if (((uVar10 != 0x202f) && (uVar10 != 0x205f)) && (uVar10 != 0x3000))
            goto switchD_1004da268_caseD_c;
            break;
          case 0x13:
            uVar4 = 0;
            if ((int)uVar10 < 0x2000) {
              if ((int)uVar10 < 0xa0) {
                if ((uVar10 == 9) || (uVar10 == 0x20)) goto switchD_1004da268_caseD_c;
              }
              else if ((uVar10 == 0xa0) || ((uVar10 == 0x1680 || (uVar10 == 0x180e))))
              goto switchD_1004da268_caseD_c;
            }
            else if ((int)uVar10 < 0x202f) {
              if (uVar10 - 0x2000 < 0xb) goto switchD_1004da268_caseD_c;
            }
            else if (((uVar10 == 0x202f) || (uVar10 == 0x205f)) || (uVar10 == 0x3000))
            goto switchD_1004da268_caseD_c;
            break;
          case 0x14:
            if (((3 < uVar10 - 10) && (1 < uVar10 - 0x2028)) && (uVar10 != 0x85))
            goto LAB_1004da6d4;
            break;
          case 0x18:
            break;
          case 0x1d:
            uVar12 = puVar6[2];
            puVar11 = puVar6 + 3;
            do {
              if (uVar10 == uVar12) goto LAB_1004da6d4;
              uVar12 = *puVar11;
              puVar11 = puVar11 + 1;
            } while (uVar12 != 0xffffffff);
            break;
          case 0x1f:
            uVar12 = puVar6[2];
            puVar11 = puVar6 + 3;
            while (uVar10 != uVar12) {
              uVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              if (uVar12 == 0xffffffff) goto LAB_1004da6d4;
            }
            if (uVar10 == 0xffffffff) goto LAB_1004da6d4;
            break;
          default:
            if (uVar13 == 0x6e) {
              if (0xff < uVar10) break;
            }
            else {
              if (uVar13 != 0x6f) goto switchD_1004da268_caseD_c;
              if (0xff < uVar10) goto LAB_1004da6d4;
            }
            bVar2 = pbVar5[(ulong)(uVar10 >> 3) - (ulong)puVar6[2]] >> (ulong)(uVar10 & 7);
joined_r0x0001004da414:
            if ((bVar2 & 1) != 0) goto LAB_1004da6d4;
          }
          puVar8 = puVar8 + 1;
          uVar10 = *puVar8;
        } while (uVar10 != 0xffffffff);
      }
      else {
        puVar6 = param_4;
        puVar8 = local_80;
        if (local_88 == 0x1d) goto LAB_1004da238;
        if (((uVar13 != 0x6e) && (local_88 != 0x6e)) &&
           (((int)param_2 != 0 || ((uVar13 != 0x6f && (local_88 != 0x6f)))))) {
          uVar4 = 0;
          if ((uVar13 - 6 < 0x11) && ((5 < local_88 && (local_88 < 0x1b)))) {
            if ((&UNK_10115abe1)[(ulong)(local_88 - 6) + (ulong)(uVar13 - 6) * 0x15] != '\0')
            goto LAB_1004da6c4;
            goto LAB_1004da6d4;
          }
          goto switchD_1004da268_caseD_c;
        }
        if ((uVar13 == 0x6e) || ((pbVar5 = param_1, (int)param_2 == 0 && (uVar13 == 0x6f)))) {
          puVar6 = &local_88;
          puVar8 = param_4 + 2;
          pbVar5 = param_5;
          uVar13 = local_88;
        }
        uVar4 = 0;
        switch(uVar13) {
        case 6:
          uVar4 = 1;
        case 7:
          iVar3 = (int)uVar4;
          lVar7 = *(long *)(param_3 + 0x10) + 0x40;
          break;
        case 8:
          uVar4 = 1;
        case 9:
          iVar3 = (int)uVar4;
          lVar7 = *(long *)(param_3 + 0x10);
          break;
        case 10:
          uVar4 = 1;
        case 0xb:
          iVar3 = (int)uVar4;
          lVar7 = *(long *)(param_3 + 0x10) + 0xa0;
          break;
        default:
          if (uVar13 - 0x6e < 2) {
            pbVar1 = param_1;
            if (puVar6 != &local_88) {
              pbVar1 = param_5;
            }
            lVar7 = (long)pbVar1 - (ulong)puVar6[2];
            goto LAB_1004da6a4;
          }
          goto switchD_1004da268_caseD_c;
        }
        if (iVar3 == 0) {
LAB_1004da6a4:
          lVar9 = 0;
          do {
            if ((*(byte *)(lVar7 + lVar9) & pbVar5[lVar9 - (ulong)*puVar8]) != 0)
            goto LAB_1004da6d4;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x20);
        }
        else {
          lVar9 = 0;
          do {
            if ((pbVar5[lVar9 - (ulong)*puVar8] & (*(byte *)(lVar7 + lVar9) ^ 0xff)) != 0)
            goto LAB_1004da6d4;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x20);
        }
      }
LAB_1004da6c4:
    } while (local_84 != 0);
    uVar4 = 1;
  }
switchD_1004da268_caseD_c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_1004da72c(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    bVar1 = *param_1;
    uVar3 = (ulong)bVar1;
    uVar2 = bVar1 - 0x76;
    if (uVar2 < 0x1c) {
      uVar2 = 1 << (ulong)(uVar2 & 0x1f);
      if ((uVar2 & 0xf800001) == 0) {
        if ((uVar2 & 0x700) == 0) goto LAB_1004da788;
        if (param_2 == 0) {
          return;
        }
        do {
          param_1 = param_1 + (((((ulong)*(ushort *)(param_1 + 1) & 0xff00) << 0x30) >> 8 |
                               (ulong)*(ushort *)(param_1 + 1) << 0x38) >> 0x30);
          uVar3 = (ulong)*param_1;
        } while (*param_1 == 0x77);
      }
    }
    else {
LAB_1004da788:
      if (1 < bVar1 - 4 || param_2 == 0) {
        return;
      }
    }
    param_1 = param_1 + (byte)(&DAT_10115bc9c)[uVar3];
  } while( true );
}




/* WARNING: Type propagation algorithm not settling */

ulong FUN_1004da7a8(int *param_1,ulong *param_2,byte *param_3,uint param_4,int param_5,uint param_6,
                   int *param_7,uint param_8)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  int *piVar23;
  long lVar25;
  byte *pbVar26;
  undefined *puVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  long local_208;
  uint local_1fc;
  ulong local_1f8;
  ulong local_1e8;
  ulong local_1d0;
  uint local_1b4;
  byte *local_1a8;
  byte *local_1a0;
  byte *local_198;
  undefined8 local_180;
  ulong local_178;
  ulong uStack_170;
  int *local_168;
  int local_160;
  uint uStack_15c;
  undefined8 local_158;
  uint local_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  long local_140;
  undefined2 local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  ulong local_118;
  uint local_110;
  ulong local_10c;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  long local_e8;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  int local_c8;
  byte *local_c0;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  int *piVar24;
  
  if ((((param_1 == (int *)0x0) && (param_2 == (ulong *)0x0)) && (param_3 == (byte *)0x0)) &&
     ((param_4 == 0xfffffc19 && (param_5 == -999)))) {
    uVar15 = FUN_1004db458(0,0,0,0,0,0,0);
    return uVar15;
  }
  if ((param_6 & 0xe20f5a6f) != 0) {
    return 0xfffffffd;
  }
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_3 == (byte *)0x0) {
    return 0xfffffffe;
  }
  if ((param_7 == (int *)0x0) && (0 < (int)param_8)) {
    return 0xfffffffe;
  }
  if ((int)param_8 < 0) {
    return 0xfffffff1;
  }
  if ((int)param_4 < 0) {
    return 0xffffffe0;
  }
  if (param_5 < 0) {
    return 0xffffffe8;
  }
  if ((int)param_4 < param_5) {
    return 0xffffffe8;
  }
  if (*param_1 != 0x50435245) {
    uVar18 = 0xffffffe3;
    if (*param_1 != 0x45524350) {
      uVar18 = 0xfffffffc;
    }
    return (ulong)uVar18;
  }
  uVar18 = param_1[3];
  if ((uVar18 & 1) == 0) {
    return 0xffffffe4;
  }
  uVar6 = param_1[2];
  uVar9 = uVar6 >> 0xb & 1;
  local_b8 = param_6 >> 0xf & 1;
  if ((param_6 & 0x8000000) != 0) {
    local_b8 = 2;
  }
  local_140 = (long)param_1 + (ulong)*(ushort *)((long)param_1 + 0x22);
  local_150 = (uint)*(ushort *)((long)param_1 + 0x26);
  uStack_14c = (uint)*(ushort *)(param_1 + 9);
  uStack_170 = 10000000;
  local_178 = 10000000;
  local_88 = 0;
  puVar27 = *(undefined **)(param_1 + 0xc);
  if (param_2 == (ulong *)0x0) {
    local_1d0 = 0;
  }
  else {
    uVar28 = (uint)*param_2;
    if ((*param_2 & 1) == 0) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = param_2[1];
    }
    if ((uVar28 >> 1 & 1) != 0) {
      local_178 = param_2[2];
    }
    if ((uVar28 >> 4 & 1) != 0) {
      uStack_170 = param_2[5];
    }
    if ((uVar28 >> 2 & 1) != 0) {
      local_88 = param_2[3];
    }
    if ((uVar28 >> 3 & 1) != 0) {
      puVar27 = (undefined *)param_2[4];
    }
  }
  if (((uVar18 >> 0xd & 1) != 0) && ((uint)param_1[4] < local_178)) {
    local_178 = (ulong)(uint)param_1[4];
  }
  if (((uVar18 >> 0xe & 1) != 0) && ((uint)param_1[5] < uStack_170)) {
    uStack_170 = (ulong)(uint)param_1[5];
  }
  local_130 = &DAT_10115a180;
  if (puVar27 != (undefined *)0x0) {
    local_130 = puVar27;
  }
  local_e8 = (long)param_1 +
             (ulong)*(ushort *)((long)param_1 + 0x22) +
             (ulong)*(ushort *)(param_1 + 9) * (ulong)*(ushort *)((long)param_1 + 0x26);
  pbVar2 = param_3 + param_4;
  local_104 = uVar6 >> 5 & 1;
  local_10c = NEON_ushl(CONCAT44(uVar6,uVar6),0xffffffe3ffffffe7,4);
  local_10c = local_10c & 0x100000001;
  local_144 = 0;
  local_118 = NEON_ushl(CONCAT44(param_6,param_6),0xfffffff8fffffff9,4);
  local_118 = local_118 & 0x100000001;
  local_100 = param_6 >> 10 & 1;
  local_fc = param_6 >> 0x1c;
  local_f8 = 0;
  local_f0 = uVar18 >> 0xc & 1;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  puVar27 = local_130 + 0x100;
  local_120 = local_130 + 0x340;
  if ((param_6 & 0x1800000) == 0x1000000) {
LAB_1004daac0:
    local_f4 = 0;
  }
  else if ((param_6 & 0x1800000) == 0x800000) {
    local_f4 = 1;
  }
  else {
    if ((param_6 & 0x1800000) != 0) {
      return 0xffffffe9;
    }
    if ((uVar6 & 0x1800000) == 0) goto LAB_1004daac0;
    local_f4 = uVar6 >> 0x17 & 1;
  }
  uVar28 = uVar6;
  if ((param_6 & 0x700000) != 0) {
    uVar28 = param_6;
  }
  uVar21 = 10;
  switch(uVar28 >> 0x14 & 7) {
  case 1:
    uVar21 = 0xd;
  case 0:
  case 2:
    local_158 = &__mh_execute_header;
    local_138 = CONCAT11(local_138._1_1_,uVar21);
    break;
  case 3:
    local_158 = (mach_header *)0x200000000;
    local_138 = 0xa0d;
    break;
  case 4:
    uVar22 = 1;
    goto LAB_1004dab44;
  case 5:
    uVar22 = 2;
LAB_1004dab44:
    local_158 = (mach_header *)CONCAT44(local_158._4_4_,uVar22);
    break;
  default:
    return 0xffffffe9;
  }
  if ((local_b8 != 0) && ((uVar18 >> 9 & 1) != 0)) {
    return 0xfffffff3;
  }
  iVar5 = (param_8 / 3) * 3;
  uVar28 = (int)((param_8 / 3) * 6) / 3;
  uVar7 = *(ushort *)(param_1 + 8);
  bVar12 = uVar7 != 0;
  bVar13 = param_8 / 3 == (uint)uVar7;
  bVar1 = param_8 / 3 < (uint)uVar7;
  local_168 = param_7;
  local_160 = iVar5;
  uStack_15c = uVar28;
  puStack_128 = puVar27;
  local_110 = uVar9;
  local_e0 = param_3;
  local_d8 = pbVar2;
  local_ac = param_5;
  if (bVar12 && (bVar13 || bVar1)) {
    iVar14 = (uint)uVar7 * 3 + 3;
    local_168 = (int *)(*(code *)PTR__malloc_101867450)(iVar14 * 4);
    if (local_168 == (int *)0x0) {
      return 0xfffffffa;
    }
    local_160 = iVar14;
    uStack_15c = (uint)(iVar14 * 2) / 3;
  }
  local_b0 = 0;
  if (local_168 != (int *)0x0) {
    lVar25 = (long)local_160 - (ulong)*(ushort *)((long)param_1 + 0x1e);
    if (lVar25 < 3) {
      lVar25 = 2;
    }
    if (lVar25 < local_160) {
      piVar23 = local_168 + (long)local_160 + -1;
      do {
        piVar24 = piVar23 + -1;
        *piVar23 = -1;
        piVar23 = piVar24;
      } while (local_168 + lVar25 <= piVar24);
    }
    local_168[0] = -1;
    local_168[1] = -1;
  }
  pbVar3 = param_3 + param_5;
  uVar19 = param_1[3];
  if (((uVar6 | param_6) >> 4 & 1) == 0) {
    if ((uVar19 >> 4 & 1) != 0) {
      local_1f8 = (ulong)*(byte *)(param_1 + 6);
      lVar25 = 0;
      local_1fc = (uint)*(byte *)(param_1 + 6);
      if ((uVar19 >> 5 & 1) == 0) {
        bVar10 = false;
        local_208 = 1;
      }
      else {
        bVar10 = false;
        local_1f8 = (ulong)(byte)puVar27[local_1f8];
        local_208 = 1;
      }
      goto LAB_1004dace8;
    }
    lVar25 = 0;
    bVar10 = true;
    local_1f8 = 0;
    if ((uVar18 >> 8 & 1) != 0) {
      local_1fc = 0;
      local_208 = 0;
      goto LAB_1004dace8;
    }
    local_1fc = 0;
    local_208 = 0;
    if (local_1d0 == 0) goto LAB_1004dace8;
    lVar25 = 0;
    if ((*(byte *)(local_1d0 + 4) & 1) != 0) {
      lVar25 = local_1d0 + 8;
    }
  }
  else {
    lVar25 = 0;
  }
  local_1f8 = 0;
  local_1fc = 0;
  local_208 = 0;
  bVar10 = true;
LAB_1004dace8:
  local_1a8 = pbVar3 + -1;
  if ((uVar19 >> 6 & 1) == 0) {
    local_1e8 = 0;
    local_1b4 = 0;
    bVar11 = true;
  }
  else {
    local_1e8 = (ulong)*(byte *)((long)param_1 + 0x1a);
    if ((uVar19 >> 7 & 1) == 0) {
      bVar11 = false;
      local_1b4 = (uint)*(byte *)((long)param_1 + 0x1a);
    }
    else {
      bVar11 = false;
      local_1b4 = (uint)(byte)puVar27[local_1e8];
    }
  }
  local_1a0 = (byte *)0x0;
  local_198 = (byte *)0x0;
  lVar4 = (long)&local_158 + 4;
  pbVar26 = pbVar3;
  do {
    pbVar30 = pbVar2;
    if (((uVar6 >> 0x12 & 1) != 0) && (pbVar16 = local_d8, pbVar30 = pbVar26, pbVar26 < local_d8)) {
      do {
        if ((int)local_158 == 0) {
          if (((pbVar30 <= pbVar16 + -(long)local_158._4_4_) && (*pbVar30 == (byte)local_138)) &&
             ((local_158._4_4_ == 1 || (pbVar30[1] == local_138._1_1_)))) break;
        }
        else {
          iVar14 = FUN_1004df520(pbVar30,(ulong)local_158 & 0xffffffff,pbVar16,lVar4,uVar9);
          pbVar16 = local_d8;
          if (iVar14 != 0) break;
        }
        pbVar30 = pbVar30 + 1;
      } while (pbVar30 < pbVar16);
    }
    pbVar16 = pbVar26;
    if (((param_1[2] | param_6) >> 0x1a & 1) == 0) {
      if (bVar10) {
        if ((uVar18 >> 8 & 1) == 0) {
          if (lVar25 != 0) {
            do {
              pbVar16 = pbVar26;
              if (pbVar30 <= pbVar16) break;
              pbVar26 = pbVar16 + 1;
            } while ((*(byte *)(lVar25 + (ulong)(*pbVar16 >> 3)) >> (ulong)(*pbVar16 & 7) & 1) == 0)
            ;
          }
        }
        else if (local_e0 + param_5 < pbVar26) {
          if (pbVar26 < pbVar30) {
            do {
              if ((int)local_158 == 0) {
                lVar20 = (long)local_158._4_4_;
                if ((local_e0 + lVar20 <= pbVar26) && (pbVar26[-lVar20] == (byte)local_138)) {
                  bVar17 = 1;
                  if (local_158._4_4_ == 1) goto LAB_1004dafa0;
                  if (pbVar26[1 - lVar20] == local_138._1_1_) goto LAB_1004daf98;
                }
              }
              else if ((local_e0 < pbVar26) &&
                      (iVar14 = FUN_1004df59c(pbVar26,(ulong)local_158 & 0xffffffff,local_e0,lVar4,
                                              uVar9), iVar14 != 0)) {
LAB_1004daf98:
                bVar17 = 1;
                goto LAB_1004dafa0;
              }
              pbVar26 = pbVar26 + 1;
            } while (pbVar26 < pbVar30);
            bVar17 = 0;
          }
          else {
            bVar17 = 0;
          }
LAB_1004dafa0:
          pbVar16 = pbVar26;
          if (((pbVar26[-1] == 0xd) && (!(bool)(bVar17 ^ 1) && (int)local_158 - 1U < 2)) &&
             (*pbVar26 == 10)) {
            pbVar16 = pbVar26 + 1;
          }
        }
      }
      else {
        uVar19 = (uint)local_1f8;
        if (local_1fc == uVar19) {
          if (pbVar26 < pbVar30) {
            lVar20 = (long)pbVar30 - (long)pbVar26;
            do {
              pbVar16 = pbVar26;
              if (*pbVar26 == uVar19) break;
              pbVar26 = pbVar26 + 1;
              lVar20 = lVar20 + -1;
              pbVar16 = pbVar30;
            } while (lVar20 != 0);
          }
        }
        else if (pbVar26 < pbVar30) {
          lVar20 = (long)pbVar30 - (long)pbVar26;
          do {
            pbVar16 = pbVar26;
            if (*pbVar26 == local_1fc || *pbVar26 == uVar19) break;
            pbVar26 = pbVar26 + 1;
            lVar20 = lVar20 + -1;
            pbVar16 = pbVar30;
          } while (lVar20 != 0);
        }
      }
    }
    if (((param_1[2] | param_6) & 0x4000000) == 0 && local_b8 == 0) {
      if (((local_1d0 != 0) && ((*(byte *)(local_1d0 + 4) >> 1 & 1) != 0)) &&
         ((uint)((int)pbVar2 - (int)pbVar16) < *(uint *)(local_1d0 + 0x28))) {
LAB_1004db270:
        uVar29 = 0;
switchD_1004db154_caseD_fffffc1c:
        if (bVar12 && (bVar13 || bVar1)) {
          (*(code *)PTR__free_101867458)(local_168);
        }
        if (((int)uVar29 != 0) && ((int)uVar29 != -0xc)) {
          return uVar29;
        }
        if (local_198 == (byte *)0x0) {
          uVar15 = 0xffffffff;
        }
        else {
          if (1 < (int)param_8) {
            *param_7 = (int)local_1a0 - (int)param_3;
            param_7[1] = param_4;
            if (param_8 != 2) {
              param_7[2] = (int)local_198 - (int)param_3;
            }
          }
          uVar15 = 0xfffffff4;
        }
        if (param_2 == (ulong *)0x0) {
          return uVar15;
        }
        if (((byte)*param_2 >> 5 & 1) == 0) {
          return uVar15;
        }
LAB_1004db440:
        *(undefined8 *)param_2[6] = local_78;
        return uVar15;
      }
      if (((!bVar11) && ((long)pbVar2 - (long)pbVar16 < 1000)) &&
         (pbVar26 = pbVar16 + local_208, local_1a8 < pbVar26)) {
        uVar19 = (uint)local_1e8;
        pbVar30 = pbVar26;
        if (uVar19 == local_1b4) {
          do {
            pbVar26 = pbVar30;
            if (pbVar2 <= pbVar26) break;
            pbVar30 = pbVar26 + 1;
          } while (*pbVar26 != uVar19);
        }
        else {
          do {
            if (pbVar2 <= pbVar26) break;
            uVar8 = (uint)(*pbVar26 == uVar19 || *pbVar26 == local_1b4);
            pbVar26 = pbVar26 + (uVar8 ^ 1);
          } while (uVar8 == 0);
        }
        local_1a8 = pbVar26;
        if (pbVar2 <= pbVar26) goto LAB_1004db270;
      }
    }
    local_180 = 0;
    local_a8 = 0;
    local_b4 = 0;
    local_148 = 0;
    local_d0 = pbVar16;
    local_c0 = pbVar16;
    uVar15 = FUN_1004db458(pbVar16,local_e8,pbVar16,2,&local_180,0,0);
    pbVar26 = pbVar16;
    pbVar30 = local_c0;
    if (local_f8 == 0 || local_1a0 != (byte *)0x0) {
      pbVar26 = local_198;
      pbVar30 = local_1a0;
    }
    local_1a0 = pbVar30;
    iVar14 = (int)uVar15;
    uVar29 = 0;
    local_198 = pbVar26;
    switch(iVar14) {
    case -999:
      goto switchD_1004db154_caseD_fffffc19;
    case -0x3e6:
    case -0x3e5:
switchD_1004db154_caseD_fffffc1a:
      uVar29 = uVar15;
    case -0x3e4:
      goto switchD_1004db154_caseD_fffffc1c;
    case -0x3e3:
    case -0x3e0:
switchD_1004db154_caseD_fffffc1d:
      local_144 = 0;
      pbVar26 = pbVar16 + 1;
      break;
    case -0x3e2:
      pbVar26 = local_d0;
      if (local_d0 <= pbVar16) goto switchD_1004db154_caseD_fffffc1d;
      break;
    case -0x3e1:
      local_144 = local_148;
      pbVar26 = pbVar16;
      break;
    default:
      if (iVar14 == 0) goto switchD_1004db154_caseD_fffffc1d;
      if (iVar14 != 1) goto switchD_1004db154_caseD_fffffc1a;
      goto switchD_1004db154_caseD_fffffc19;
    }
    if ((uVar6 >> 0x12 & 1) != 0) {
      if ((int)local_158 == 0) {
        if (((pbVar16 <= local_d8 + -(long)local_158._4_4_) && (*pbVar16 == (byte)local_138)) &&
           ((local_158._4_4_ == 1 || (pbVar16[1] == local_138._1_1_)))) goto LAB_1004db270;
      }
      else if ((pbVar16 < local_d8) &&
              (iVar14 = FUN_1004df520(pbVar16,(ulong)local_158 & 0xffffffff,local_d8,lVar4,uVar9),
              iVar14 != 0)) goto LAB_1004db270;
    }
    if (((uVar6 | param_6) >> 4 & 1) != 0 || pbVar2 < pbVar26) goto LAB_1004db270;
    if ((((pbVar3 < pbVar26) && (pbVar26[-1] == 0xd)) && (pbVar26 < pbVar2)) &&
       ((*pbVar26 == 10 && ((*(byte *)((long)param_1 + 0xd) >> 3 & 1) == 0)))) {
      pbVar26 = pbVar26 + ((int)local_158 - 1U < 2 || local_158._4_4_ == 2);
    }
    local_80 = 0;
  } while( true );
switchD_1004db154_caseD_fffffc19:
  if (bVar12 && (bVar13 || bVar1)) {
    if (5 < iVar5) {
      _memcpy(param_7 + 2,local_168 + 2,(ulong)(uVar28 - 2) << 2);
    }
    if ((int)uVar28 < local_b4) {
      local_b0 = local_b0 | 0x10000;
    }
    (*(code *)PTR__free_101867458)(local_168);
  }
  iVar5 = local_b4;
  if (local_b4 < 0) {
    iVar5 = local_b4 + 1;
  }
  uVar18 = iVar5 >> 1;
  if ((int)uVar28 <= local_b4 && (local_b0 & 0x10000) != 0) {
    uVar18 = 0;
  }
  uVar15 = (ulong)uVar18;
  if ((iVar5 >> 1 <= (int)(uint)*(ushort *)((long)param_1 + 0x1e)) && (param_7 != (int *)0x0)) {
    uVar18 = (uint)*(ushort *)((long)param_1 + 0x1e) * 2 + 2;
    uVar6 = param_8;
    if ((int)uVar18 <= (int)param_8) {
      uVar6 = uVar18;
    }
    if (local_b4 < (int)uVar6) {
      piVar23 = param_7 + local_b4;
      piVar24 = piVar23 + 1;
      if (piVar23 + 1 <= param_7 + (int)uVar6) {
        piVar24 = param_7 + (int)uVar6;
      }
      _memset(piVar23,0xff,
              (long)piVar24 + (long)local_b4 * -4 + ~(ulong)param_7 + 4 & 0xfffffffffffffffc);
    }
  }
  if ((int)param_8 < 2) {
    uVar15 = 0;
  }
  else {
    *param_7 = (int)local_d0 - (int)local_e0;
    param_7[1] = local_c8 - (int)local_e0;
  }
  if (param_2 == (ulong *)0x0) {
    return uVar15;
  }
  local_78 = local_80;
  if (((byte)*param_2 >> 5 & 1) == 0) {
    return uVar15;
  }
  goto LAB_1004db440;
}




/* WARNING: Type propagation algorithm not settling */

ulong FUN_1004db458(undefined8 ******param_1,byte *param_2,undefined8 ******param_3,ulong param_4,
                   ulong *param_5,undefined8 *******param_6,uint param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  int *piVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  byte bVar20;
  ulong uVar21;
  byte bVar22;
  long lVar23;
  ulong *puVar24;
  char *pcVar25;
  long lVar26;
  ulong *puVar27;
  undefined8 ******ppppppuVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  undefined8 ******ppppppuVar33;
  undefined8 ******ppppppuVar34;
  ulong uVar35;
  byte *pbVar36;
  ulong uVar37;
  undefined8 uVar38;
  undefined8 *******local_190;
  undefined8 ******local_188;
  undefined4 local_180;
  uint local_17c;
  ulong local_178;
  ulong uStack_170;
  int local_168;
  int iStack_164;
  int local_160;
  int local_15c;
  uint uStack_158;
  ulong local_150;
  uint local_148;
  uint local_144;
  ulong local_140;
  undefined8 *******local_138;
  undefined8 ******ppppppuStack_130;
  ulong *local_128;
  uint local_120;
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined8 ******local_108;
  undefined8 local_fc;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  local_fc._0_4_ = param_7;
  if (param_2 == (byte *)0x0) {
    if (param_7 == 0) {
      ppppppuVar34 = (undefined8 ******)&local_fc;
      pbVar19 = (byte *)0x0;
      local_188 = (undefined8 ******)0x0;
      param_4 = 0;
      param_5 = (ulong *)0x0;
      local_190 = (undefined8 *******)0x0;
      iVar17 = 1;
LAB_1004de3b4:
      uVar37 = FUN_1004db458(ppppppuVar34,pbVar19,local_188,param_4,param_5,local_190,iVar17);
    }
    else {
      iVar16 = (int)&local_fc - (int)param_1;
      iVar17 = -iVar16;
      if (-1 < iVar16) {
        iVar17 = iVar16;
      }
      uVar37 = (ulong)(uint)-iVar17;
    }
  }
  else {
    uVar37 = *param_5;
    *param_5 = uVar37 + 1;
    if (uVar37 < param_5[1]) {
      if ((ulong)param_7 < param_5[2]) {
        puVar1 = param_5 + 0x15;
        puVar2 = param_5 + 0xc;
        piVar3 = (int *)((long)param_5 + 0x2c);
        puVar4 = param_5 + 0x19;
        puVar5 = param_5 + 0x11;
        puVar6 = param_5 + 0x18;
        local_190 = param_6;
        local_188 = param_3;
LAB_1004db4e8:
        ppppppuVar34 = param_1;
        if ((int)param_5[0x1b] == 2) {
          local_138 = local_190;
          local_190 = &local_138;
          *(undefined4 *)(param_5 + 0x1b) = 0;
          ppppppuStack_130 = param_1;
        }
LAB_1004db50c:
        pbVar36 = param_2;
        bVar20 = *pbVar36;
        if (0xa1 < bVar20) {
switchD_1004db54c_caseD_f:
          uVar37 = 0xfffffffb;
          goto switchD_1004db54c_caseD_9d;
        }
        bVar14 = false;
        bVar11 = false;
        bVar13 = false;
        uVar15 = 0;
        uVar37 = 0;
        uVar29 = 0x7fffffff;
        lVar23 = 1;
        uVar32 = (uint)bVar20;
        uVar30 = (uint)bVar20;
        uVar18 = (uint)param_4;
        iVar17 = (int)ppppppuVar34;
        bVar12 = false;
        param_1 = ppppppuVar34;
        switch(bVar20) {
        case 0:
        case 0x9e:
        case 0x9f:
          if ((((ppppppuVar34 == local_188) && (uVar30 != 0x9f)) && (param_5[0x1e] == 0)) &&
             (((int)param_5[0x10] != 0 ||
              ((*(int *)((long)param_5 + 0x84) != 0 &&
               (local_188 ==
                (undefined8 ******)(param_5[0x14] + (long)*(int *)((long)param_5 + 0xd4))))))))
          goto LAB_1004dee24;
          *(uint *)((long)param_5 + 0xcc) = uVar18;
          param_5[0x16] = (ulong)local_188;
          param_5[0x17] = (ulong)ppppppuVar34;
          uVar15 = 0xfffffc19;
          if (bVar20 == 0) {
            uVar15 = 1;
          }
          uVar37 = (ulong)uVar15;
          goto switchD_1004db54c_caseD_9d;
        case 1:
          goto switchD_1004db54c_caseD_1;
        case 2:
          ppppppuVar28 = (undefined8 ******)(param_5[0x14] + (long)*(int *)((long)param_5 + 0xd4));
          goto LAB_1004dc4dc;
        case 3:
          param_2 = pbVar36 + 1;
          local_188 = ppppppuVar34;
          goto LAB_1004db50c;
        case 4:
        case 5:
          if (ppppppuVar34 == (undefined8 ******)param_5[0x14]) {
            bVar20 = 0;
          }
          else {
            if (ppppppuVar34 <= (undefined8 ******)*puVar6) {
              *puVar6 = (ulong)((long)ppppppuVar34 - 1);
            }
            bVar20 = *(byte *)(*puVar2 + (ulong)*(byte *)((long)ppppppuVar34 + -1)) >> 4 & 1;
          }
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            bVar22 = *(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 4 & 1;
          }
          else {
            bVar22 = 0;
            if ((int)*puVar4 != 0) {
              if (((undefined8 ******)*puVar6 < ppppppuVar34) &&
                 (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
              bVar22 = 0;
            }
          }
          param_2 = pbVar36 + 1;
          if (*pbVar36 == 5) {
            uVar37 = 0;
            if (bVar22 == bVar20) goto switchD_1004db54c_caseD_9d;
          }
          else {
            uVar37 = 0;
            if (bVar22 != bVar20) goto switchD_1004db54c_caseD_9d;
          }
          goto LAB_1004db50c;
        case 6:
          if ((undefined8 ******)*puVar1 <= ppppppuVar34) break;
          bVar20 = *(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 2;
joined_r0x0001004dc2c0:
          if ((bVar20 & 1) == 0) goto LAB_1004dd4f0;
          goto LAB_1004dee24;
        case 7:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            bVar20 = *(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 2;
joined_r0x0001004dc2e8:
            if ((bVar20 & 1) != 0) goto LAB_1004dd4f0;
            goto LAB_1004dee24;
          }
          break;
        case 8:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            bVar20 = *(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34);
            goto joined_r0x0001004dc2c0;
          }
          break;
        case 9:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            bVar20 = *(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34);
            goto joined_r0x0001004dc2e8;
          }
          break;
        case 10:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            bVar20 = *(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 4;
            goto joined_r0x0001004dc2c0;
          }
          break;
        case 0xb:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            bVar20 = *(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 4;
            goto joined_r0x0001004dc2e8;
          }
          break;
        case 0xc:
          ppppppuVar28 = (undefined8 ******)param_5[0x15];
          if ((int)param_5[5] == 0) {
            if (((ppppppuVar34 <= (undefined8 ******)((long)ppppppuVar28 - (long)*piVar3)) &&
                (*(byte *)ppppppuVar34 == (byte)param_5[9])) &&
               ((*piVar3 == 1 ||
                (*(byte *)((long)ppppppuVar34 + 1) == *(byte *)((long)param_5 + 0x49)))))
            goto LAB_1004dee24;
          }
          else if ((ppppppuVar34 < ppppppuVar28) &&
                  (iVar17 = FUN_1004df520(ppppppuVar34,(int)param_5[5],ppppppuVar28,piVar3,0),
                  iVar17 != 0)) goto LAB_1004dee24;
          if (((int)*puVar4 == 0) ||
             (((((byte *)((long)ppppppuVar34 + 1U) < (byte *)*puVar1 || ((int)param_5[5] != 0)) ||
               (*piVar3 != 2)) ||
              ((*(byte *)ppppppuVar34 != (byte)param_5[9] ||
               (*(undefined4 *)puVar5 = 1, (int)*puVar4 < 2)))))) goto switchD_1004db54c_caseD_d;
          goto LAB_1004de3f0;
        case 0xd:
        case 0xe:
switchD_1004db54c_caseD_d:
          if ((undefined8 ******)*puVar1 <= ppppppuVar34) break;
LAB_1004dd4f0:
          ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
          goto LAB_1004dd4f4;
        default:
          goto switchD_1004db54c_caseD_f;
        case 0x11:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            uVar37 = 0;
            ppppppuVar33 = (undefined8 ******)((long)ppppppuVar34 + 1);
            uVar15 = (uint)*(byte *)ppppppuVar34;
            ppppppuVar28 = ppppppuVar33;
            if (*(byte *)ppppppuVar34 < 0xd) {
              if (uVar15 - 0xb < 2) {
LAB_1004dd0dc:
                if (*(int *)((long)param_5 + 0x8c) != 0) goto LAB_1004dee24;
              }
              else if (uVar15 != 10) goto switchD_1004db54c_caseD_9d;
            }
            else {
              if (uVar15 == 0x85) goto LAB_1004dd0dc;
              if (uVar15 != 0xd) goto switchD_1004db54c_caseD_9d;
              if (ppppppuVar33 < (undefined8 ******)*puVar1) {
                ppppppuVar28 = (undefined8 ******)((long)ppppppuVar34 + 2);
                if (*(byte *)((long)ppppppuVar34 + 1) != 10) {
                  ppppppuVar28 = ppppppuVar33;
                }
              }
              else if ((((int)*puVar4 != 0) && ((undefined8 ******)*puVar6 < ppppppuVar33)) &&
                      (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
            }
            ppppppuVar34 = ppppppuVar28;
            param_2 = pbVar36 + 1;
            goto LAB_1004db50c;
          }
          break;
        case 0x12:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            uVar37 = 0;
            bVar20 = *(byte *)ppppppuVar34;
            if (((bVar20 != 9) && (bVar20 != 0x20)) && (bVar20 != 0xa0)) goto LAB_1004dd4f0;
            goto switchD_1004db54c_caseD_9d;
          }
          break;
        case 0x13:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            bVar20 = *(byte *)ppppppuVar34;
            if (((bVar20 == 9) || (bVar20 == 0xa0)) || (bVar20 == 0x20)) goto LAB_1004dd4f0;
            goto LAB_1004dee24;
          }
          break;
        case 0x14:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            uVar37 = 0;
            if ((3 < *(byte *)ppppppuVar34 - 10) && (*(byte *)ppppppuVar34 != 0x85))
            goto LAB_1004dd4f0;
            goto switchD_1004db54c_caseD_9d;
          }
          break;
        case 0x15:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            if ((*(byte *)ppppppuVar34 - 10 < 4) || (*(byte *)ppppppuVar34 == 0x85))
            goto LAB_1004dd4f0;
            goto LAB_1004dee24;
          }
          break;
        case 0x17:
          goto switchD_1004db54c_caseD_17;
        case 0x18:
switchD_1004db54c_caseD_18:
          if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddd30;
          goto LAB_1004dee24;
        case 0x19:
          if (*(int *)((long)param_5 + 0x6c) != 0) goto LAB_1004dee24;
          if (*(int *)((long)param_5 + 0x7c) != 0) goto switchD_1004db54c_caseD_18;
switchD_1004db54c_caseD_17:
          ppppppuVar28 = (undefined8 ******)*puVar1;
          if (ppppppuVar28 <= ppppppuVar34) {
LAB_1004ddd30:
            if ((((int)*puVar4 == 0) || (ppppppuVar34 <= (undefined8 ******)*puVar6)) ||
               (*(undefined4 *)puVar5 = 1, (int)*puVar4 < 2)) goto LAB_1004dd4f4;
            goto LAB_1004de3f0;
          }
          if ((int)param_5[5] == 0) {
            iVar17 = *piVar3;
            if ((ppppppuVar34 <= (undefined8 ******)((long)ppppppuVar28 - (long)iVar17)) &&
               (*(byte *)ppppppuVar34 == (byte)param_5[9])) {
              if (iVar17 == 1) {
                iVar17 = 1;
              }
              else if (*(byte *)((long)ppppppuVar34 + 1) != *(byte *)((long)param_5 + 0x49))
              goto LAB_1004dea24;
LAB_1004ddd24:
              if (ppppppuVar34 == (undefined8 ******)((long)ppppppuVar28 - (long)iVar17))
              goto LAB_1004ddd30;
            }
          }
          else {
            iVar17 = FUN_1004df520(ppppppuVar34,(int)param_5[5],ppppppuVar28,piVar3,0);
            if (iVar17 != 0) {
              ppppppuVar28 = (undefined8 ******)*puVar1;
              iVar17 = *piVar3;
              goto LAB_1004ddd24;
            }
          }
LAB_1004dea24:
          iVar17 = (int)*puVar4;
          if (((iVar17 == 0) || ((byte *)((long)ppppppuVar34 + 1U) < (byte *)*puVar1)) ||
             (((int)param_5[5] != 0 ||
              ((*piVar3 != 2 || (*(byte *)ppppppuVar34 != (byte)param_5[9])))))) goto LAB_1004dee24;
          goto LAB_1004de3dc;
        case 0x1a:
          ppppppuVar28 = (undefined8 ******)*puVar1;
          if (ppppppuVar34 < ppppppuVar28) {
            if ((int)param_5[5] == 0) {
              if (((ppppppuVar34 <= (undefined8 ******)((long)ppppppuVar28 - (long)*piVar3)) &&
                  (*(byte *)ppppppuVar34 == (byte)param_5[9])) &&
                 ((*piVar3 == 1 ||
                  (*(byte *)((long)ppppppuVar34 + 1) == *(byte *)((long)param_5 + 0x49)))))
              goto LAB_1004dd4f4;
              goto LAB_1004dea24;
            }
            iVar17 = FUN_1004df520(ppppppuVar34,(int)param_5[5],ppppppuVar28,piVar3,0);
            if (iVar17 == 0) goto LAB_1004dea24;
            goto LAB_1004dd4f4;
          }
          if (*(int *)((long)param_5 + 0x6c) == 0) goto LAB_1004ddd30;
          goto LAB_1004dee24;
        case 0x1b:
          if (((int)param_5[0xd] != 0) && (ppppppuVar34 == (undefined8 ******)param_5[0x14]))
          goto LAB_1004dee24;
switchD_1004db54c_caseD_1:
          ppppppuVar28 = (undefined8 ******)param_5[0x14];
LAB_1004dc4dc:
          if (ppppppuVar34 != ppppppuVar28) goto LAB_1004dee24;
          goto LAB_1004dd4f4;
        case 0x1c:
          ppppppuVar28 = (undefined8 ******)param_5[0x14];
          if ((int)param_5[0xd] != 0 && ppppppuVar34 == ppppppuVar28) goto LAB_1004dee24;
          if (ppppppuVar34 != ppppppuVar28) {
            if (ppppppuVar34 == (undefined8 ******)*puVar1) goto LAB_1004dee24;
            if ((int)param_5[5] == 0) {
              iVar17 = *piVar3;
              if ((((undefined8 ******)((long)ppppppuVar28 + (long)iVar17) <= ppppppuVar34) &&
                  (pcVar25 = (char *)((long)ppppppuVar34 - (long)iVar17),
                  *pcVar25 == (char)param_5[9])) &&
                 ((iVar17 == 1 || (pcVar25[1] == *(char *)((long)param_5 + 0x49)))))
              goto LAB_1004dd4f4;
              goto LAB_1004dee24;
            }
            if ((ppppppuVar34 <= ppppppuVar28) ||
               (iVar17 = FUN_1004df59c(ppppppuVar34,(int)param_5[5],ppppppuVar28,piVar3,0),
               iVar17 == 0)) goto LAB_1004dee24;
          }
LAB_1004dd4f4:
          param_2 = pbVar36 + 1;
          goto LAB_1004db50c;
        case 0x1d:
          if (0 < (long)(*puVar1 - (long)ppppppuVar34)) {
            if (pbVar36[1] != *(byte *)ppppppuVar34) goto LAB_1004dee24;
LAB_1004dc59c:
            ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
            param_2 = pbVar36 + 2;
            goto LAB_1004db50c;
          }
          break;
        case 0x1e:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            if (*(char *)(param_5[10] + (ulong)pbVar36[1]) ==
                *(char *)(param_5[10] + (ulong)*(byte *)ppppppuVar34)) goto LAB_1004dc59c;
            goto LAB_1004dee24;
          }
          break;
        case 0x1f:
        case 0x20:
          if (ppppppuVar34 < (undefined8 ******)*puVar1) {
            if ((pbVar36[1] != *(byte *)ppppppuVar34) &&
               ((uVar30 != 0x20 ||
                (*(byte *)(param_5[0xb] + (ulong)pbVar36[1]) != *(byte *)ppppppuVar34))))
            goto LAB_1004dc59c;
            goto LAB_1004dee24;
          }
          break;
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
          bVar11 = false;
          pbVar36 = pbVar36 + 1;
          iVar17 = -0x21;
          if (0x2d < uVar30) {
            iVar17 = -0x2e;
          }
          uVar37 = (ulong)(iVar17 + uVar30);
          uVar29 = (uint)(char)(&DAT_10115bc6c)[uVar37];
          uVar15 = iVar17 + uVar30 & 1;
          uVar18 = (uint)(char)(&DAT_10115bc77)[uVar37];
          if ((0x3cfUL >> (uVar37 & 0x3f) & 1) != 0) {
            uVar18 = 0x7fffffff;
          }
          goto LAB_1004dba94;
        case 0x27:
        case 0x28:
        case 0x34:
        case 0x35:
          goto switchD_1004db54c_caseD_27;
        case 0x29:
        case 0x36:
          bVar11 = false;
          uVar15 = 0;
          uVar18 = (((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10;
          pbVar36 = pbVar36 + 3;
          uVar29 = uVar18;
          goto LAB_1004dba94;
        case 0x2a:
        case 0x37:
          uVar15 = 0;
          pbVar36 = pbVar36 + 1;
          bVar11 = true;
          uVar18 = 0x7fffffff;
          uVar29 = 0;
          goto LAB_1004dba94;
        case 0x2b:
        case 0x38:
          param_2 = pbVar36 + 2;
          uVar21 = (ulong)pbVar36[1];
          if (uVar32 < 0x2e) {
            uVar15 = 0;
            uVar29 = 1;
            uVar18 = 0x7fffffff;
            bVar11 = true;
            goto LAB_1004dbb08;
          }
          uVar15 = 0;
          uVar32 = (uint)*(byte *)(param_5[0xb] + uVar21);
          uVar29 = 1;
          uVar18 = 0x7fffffff;
          bVar11 = true;
          goto LAB_1004dbab0;
        case 0x2c:
        case 0x39:
          uVar15 = 0;
          pbVar36 = pbVar36 + 1;
          uVar18 = 1;
          bVar11 = true;
          uVar29 = 0;
          goto LAB_1004dba94;
        case 0x2d:
        case 0x3a:
          bVar11 = true;
switchD_1004db54c_caseD_27:
          uVar18 = (((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10;
          uVar15 = (uint)(uVar30 == 0x28 || uVar30 == 0x35);
          pbVar36 = pbVar36 + 3;
          uVar29 = 0;
LAB_1004dba94:
          param_2 = pbVar36 + 1;
          uVar21 = (ulong)*pbVar36;
          if (uVar30 < 0x2e) {
            if (0 < (int)uVar29) {
LAB_1004dbb08:
              lVar23 = 0;
              param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(uVar29 - 1) + 1);
              do {
                pbVar19 = (byte *)((long)ppppppuVar34 + lVar23);
                if ((byte *)*puVar1 <= pbVar19) goto LAB_1004de3c0;
                if ((uint)uVar21 != (uint)*pbVar19) goto LAB_1004dee24;
                lVar23 = lVar23 + 1;
              } while (uVar29 != (uint)lVar23);
            }
            ppppppuVar34 = param_1;
            if (uVar29 != uVar18) {
              if (uVar15 != 0) {
                uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,
                                       (uint)local_fc + 1);
                if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
                uVar15 = uVar29;
                if ((int)uVar29 <= (int)uVar18) {
                  uVar15 = uVar18;
                }
                iVar17 = uVar15 - uVar29;
                goto LAB_1004de988;
              }
              if ((int)uVar29 < (int)uVar18) {
                iVar17 = uVar18 - uVar29;
                do {
                  if ((undefined8 ******)*puVar1 <= ppppppuVar34) {
                    if ((((int)*puVar4 != 0) && ((undefined8 ******)*puVar6 < ppppppuVar34)) &&
                       (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
                    break;
                  }
                  if ((uint)uVar21 != (uint)*(byte *)ppppppuVar34) break;
                  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
              if (!bVar11) goto LAB_1004ddf48;
            }
          }
          else {
            uVar32 = (uint)*(byte *)(param_5[0xb] + uVar21);
            if (0 < (int)uVar29) {
LAB_1004dbab0:
              lVar23 = 0;
              param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(uVar29 - 1) + 1);
              do {
                pbVar19 = (byte *)((long)ppppppuVar34 + lVar23);
                if ((byte *)*puVar1 <= pbVar19) goto LAB_1004de3c0;
                if ((uint)uVar21 != (uint)*pbVar19 && uVar32 != *pbVar19) goto LAB_1004dee24;
                lVar23 = lVar23 + 1;
              } while (uVar29 != (uint)lVar23);
            }
            ppppppuVar34 = param_1;
            if (uVar29 != uVar18) {
              if (uVar15 != 0) {
                uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,
                                       (uint)local_fc + 1);
                if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
                uVar15 = uVar29;
                if ((int)uVar29 <= (int)uVar18) {
                  uVar15 = uVar18;
                }
                iVar17 = uVar15 - uVar29;
                goto LAB_1004de8fc;
              }
              if ((int)uVar29 < (int)uVar18) {
                iVar17 = uVar18 - uVar29;
                do {
                  if ((undefined8 ******)*puVar1 <= ppppppuVar34) {
                    if ((((int)*puVar4 != 0) && ((undefined8 ******)*puVar6 < ppppppuVar34)) &&
                       (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
                    break;
                  }
                  if ((uint)uVar21 != (uint)*(byte *)ppppppuVar34 && uVar32 != *(byte *)ppppppuVar34
                     ) break;
                  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
              if (!bVar11) goto LAB_1004ddf0c;
            }
          }
          goto LAB_1004db50c;
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
          pbVar36 = pbVar36 + 1;
          iVar17 = -0x48;
          if (uVar30 < 0x48) {
            iVar17 = -0x3b;
          }
          uVar30 = iVar17 + uVar32;
          uVar15 = uVar30 & 1;
          uVar29 = (uint)(char)(&DAT_10115bc6c)[uVar30];
          uVar18 = (uint)(char)(&DAT_10115bc77)[uVar30];
          if ((0x3cfUL >> ((ulong)uVar30 & 0x3f) & 1) != 0) {
            uVar18 = 0x7fffffff;
          }
          goto LAB_1004db7d4;
        case 0x41:
        case 0x42:
        case 0x4e:
        case 0x4f:
          uVar29 = 0;
          uVar18 = (((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10;
          uVar15 = (uint)(uVar30 == 0x42 || uVar30 == 0x4f);
          pbVar36 = pbVar36 + 3;
LAB_1004db7d4:
          bVar13 = true;
          goto LAB_1004db7d8;
        case 0x43:
        case 0x50:
          uVar15 = 0;
          uVar18 = (((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10;
          pbVar36 = pbVar36 + 3;
          bVar13 = true;
          uVar29 = uVar18;
          goto LAB_1004db7d8;
        case 0x44:
        case 0x51:
          bVar13 = false;
          uVar15 = 0;
          pbVar36 = pbVar36 + 1;
          uVar18 = 0x7fffffff;
          uVar29 = 0;
          goto LAB_1004db7d8;
        case 0x45:
        case 0x52:
          param_2 = pbVar36 + 2;
          uVar21 = (ulong)pbVar36[1];
          if (uVar32 < 0x48) {
            bVar13 = false;
            uVar15 = 0;
            uVar29 = 1;
            uVar18 = 0x7fffffff;
            goto LAB_1004db84c;
          }
          bVar13 = false;
          uVar15 = 0;
          uVar32 = (uint)*(byte *)(param_5[0xb] + uVar21);
          uVar29 = 1;
          uVar18 = 0x7fffffff;
          goto LAB_1004db7f4;
        case 0x46:
        case 0x53:
          bVar13 = false;
          uVar15 = 0;
          pbVar36 = pbVar36 + 1;
          uVar18 = 1;
          uVar29 = 0;
          goto LAB_1004db7d8;
        case 0x47:
        case 0x54:
          bVar13 = false;
          uVar15 = 0;
          uVar18 = (((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10;
          pbVar36 = pbVar36 + 3;
          uVar29 = 0;
LAB_1004db7d8:
          param_2 = pbVar36 + 1;
          uVar21 = (ulong)*pbVar36;
          if (uVar32 < 0x48) {
            if (0 < (int)uVar29) {
LAB_1004db84c:
              lVar23 = 0;
              param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(uVar29 - 1) + 1);
              do {
                pbVar19 = (byte *)((long)ppppppuVar34 + lVar23);
                if ((byte *)*puVar1 <= pbVar19) goto LAB_1004de3c0;
                if ((uint)uVar21 == (uint)*pbVar19) goto LAB_1004dee24;
                lVar23 = lVar23 + 1;
              } while (uVar29 != (uint)lVar23);
            }
            ppppppuVar34 = param_1;
            if (uVar29 != uVar18) {
              if (uVar15 != 0) {
                uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,
                                       (uint)local_fc + 1);
                if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
                uVar15 = uVar29;
                if ((int)uVar29 <= (int)uVar18) {
                  uVar15 = uVar18;
                }
                iVar17 = uVar15 - uVar29;
                goto LAB_1004de874;
              }
              if ((int)uVar29 < (int)uVar18) {
                iVar17 = uVar18 - uVar29;
                do {
                  if ((undefined8 ******)*puVar1 <= ppppppuVar34) {
                    if ((((int)*puVar4 != 0) && ((undefined8 ******)*puVar6 < ppppppuVar34)) &&
                       (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
                    break;
                  }
                  if ((uint)uVar21 == (uint)*(byte *)ppppppuVar34) break;
                  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
              if (bVar13) goto joined_r0x0001004de020;
            }
          }
          else {
            uVar32 = (uint)*(byte *)(param_5[0xb] + uVar21);
            if (0 < (int)uVar29) {
LAB_1004db7f4:
              lVar23 = 0;
              param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(uVar29 - 1) + 1);
              do {
                pbVar19 = (byte *)((long)ppppppuVar34 + lVar23);
                if ((byte *)*puVar1 <= pbVar19) goto LAB_1004de3c0;
                if ((uint)uVar21 == (uint)*pbVar19 || uVar32 == *pbVar19) goto LAB_1004dee24;
                lVar23 = lVar23 + 1;
              } while (uVar29 != (uint)lVar23);
            }
            ppppppuVar34 = param_1;
            if (uVar29 != uVar18) {
              if (uVar15 != 0) {
                uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,
                                       (uint)local_fc + 1);
                if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
                uVar15 = uVar29;
                if ((int)uVar29 <= (int)uVar18) {
                  uVar15 = uVar18;
                }
                iVar17 = uVar15 - uVar29;
                goto LAB_1004de7e8;
              }
              if ((int)uVar29 < (int)uVar18) {
                iVar17 = uVar18 - uVar29;
                do {
                  if ((undefined8 ******)*puVar1 <= ppppppuVar34) {
                    if ((((int)*puVar4 != 0) && ((undefined8 ******)*puVar6 < ppppppuVar34)) &&
                       (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
                    break;
                  }
                  if ((uint)uVar21 == (uint)*(byte *)ppppppuVar34 || uVar32 == *(byte *)ppppppuVar34
                     ) break;
                  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                  iVar17 = iVar17 + -1;
                } while (iVar17 != 0);
              }
              if (bVar13) goto joined_r0x0001004ddfd8;
            }
          }
          goto LAB_1004db50c;
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          pbVar36 = pbVar36 + 1;
          uVar37 = (ulong)(uVar32 - 0x55);
          uVar31 = (ulong)(char)(&DAT_10115bc6c)[uVar37];
          uVar15 = uVar32 - 0x55 & 1;
          uVar29 = (uint)(char)(&DAT_10115bc77)[uVar37];
          if ((0x3cfUL >> (uVar37 & 0x3f) & 1) != 0) {
            uVar29 = 0x7fffffff;
          }
          goto LAB_1004db648;
        case 0x5b:
        case 0x5c:
          uVar29 = ((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18;
          uVar15 = (uint)(uVar32 == 0x5c);
          bVar13 = true;
          goto LAB_1004dc604;
        case 0x5d:
          uVar29 = (((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10;
          uVar31 = (ulong)uVar29;
          pbVar36 = pbVar36 + 3;
          uVar15 = 1;
LAB_1004db648:
          param_2 = pbVar36 + 1;
          uVar18 = (uint)*pbVar36;
          bVar13 = true;
          uVar21 = uVar31;
          if ((int)uVar31 < 1) goto LAB_1004dc61c;
LAB_1004db658:
          uVar37 = 0xfffffff2;
          if (0xf < uVar18 - 6) goto switchD_1004db54c_caseD_9d;
          uVar31 = uVar21 & 0xffffffff;
          iVar17 = (int)uVar21;
          switch(uVar18) {
          case 6:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 2 & 1) != 0)
              goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 6;
            break;
          case 7:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 2 & 1) == 0)
              goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 7;
            break;
          case 8:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) & 1) != 0) goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 8;
            break;
          case 9:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) & 1) == 0) goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 9;
            break;
          case 10:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 4 & 1) != 0)
              goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 10;
            break;
          case 0xb:
            lVar23 = 0;
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              pbVar19 = (byte *)((long)ppppppuVar34 + lVar23);
              if ((byte *)*puVar1 <= pbVar19) {
                iVar17 = (int)*puVar4;
                if ((iVar17 == 0) || (pbVar19 <= (byte *)*puVar6)) goto LAB_1004dee24;
                goto LAB_1004de3dc;
              }
              if ((*(byte *)(*puVar2 + (ulong)*pbVar19) >> 4 & 1) == 0) goto LAB_1004dee24;
              lVar23 = lVar23 + 1;
            } while (iVar17 != (int)lVar23);
            uVar18 = 0xb;
            break;
          case 0xc:
            do {
              ppppppuVar28 = (undefined8 ******)*puVar1;
              if (ppppppuVar28 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((int)param_5[5] == 0) {
                if (((ppppppuVar34 <= (undefined8 ******)((long)ppppppuVar28 - (long)*piVar3)) &&
                    (*(byte *)ppppppuVar34 == (byte)param_5[9])) &&
                   ((*piVar3 == 1 ||
                    (*(byte *)((long)ppppppuVar34 + 1) == *(byte *)((long)param_5 + 0x49)))))
                goto LAB_1004dee24;
              }
              else {
                iVar17 = FUN_1004df520(ppppppuVar34,(int)param_5[5],ppppppuVar28,piVar3,0);
                if (iVar17 != 0) goto LAB_1004dee24;
              }
              if ((((((int)*puVar4 != 0) && ((byte *)*puVar1 <= (byte *)((long)ppppppuVar34 + 1U)))
                   && ((int)param_5[5] == 0)) &&
                  ((*piVar3 == 2 && (*(byte *)ppppppuVar34 == (byte)param_5[9])))) &&
                 (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 0xc;
            param_1 = ppppppuVar34;
            break;
          case 0xd:
            if ((undefined8 ******)(*puVar1 - (uVar21 & 0xffffffff)) < ppppppuVar34)
            goto LAB_1004de3f8;
            param_1 = (undefined8 ******)((long)ppppppuVar34 + uVar31);
            uVar18 = 0xd;
            break;
          case 0xe:
            if ((undefined8 ******)(*puVar1 - (uVar21 & 0xffffffff)) < ppppppuVar34)
            goto LAB_1004de3f8;
            param_1 = (undefined8 ******)((long)ppppppuVar34 + uVar31);
            uVar18 = 0xe;
            break;
          default:
            goto switchD_1004db54c_caseD_9d;
          case 0x11:
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) {
                iVar17 = (int)*puVar4;
                if ((iVar17 == 0) || (ppppppuVar34 <= (undefined8 ******)*puVar6))
                goto LAB_1004dee24;
                goto LAB_1004de3dc;
              }
              uVar37 = 0;
              ppppppuVar28 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (uint)*(byte *)ppppppuVar34;
              param_1 = ppppppuVar28;
              if (*(byte *)ppppppuVar34 < 0xd) {
                if (uVar18 - 0xb < 2) {
LAB_1004dd2f8:
                  if (*(int *)((long)param_5 + 0x8c) != 0) goto LAB_1004dee24;
                }
                else if (uVar18 != 10) goto switchD_1004db54c_caseD_9d;
              }
              else {
                if (uVar18 == 0x85) goto LAB_1004dd2f8;
                if (uVar18 != 0xd) goto switchD_1004db54c_caseD_9d;
                if ((ppppppuVar28 < (undefined8 ******)*puVar1) &&
                   (param_1 = (undefined8 ******)((long)ppppppuVar34 + 2),
                   *(byte *)((long)ppppppuVar34 + 1) != 10)) {
                  param_1 = ppppppuVar28;
                }
              }
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
              ppppppuVar34 = param_1;
            } while (uVar18 != 0);
            uVar18 = 0x11;
            break;
          case 0x12:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              bVar20 = *(byte *)ppppppuVar34;
              if (((bVar20 == 9) || (bVar20 == 0x20)) || (bVar20 == 0xa0)) goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 0x12;
            break;
          case 0x13:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              bVar20 = *(byte *)ppppppuVar34;
              if (((bVar20 != 9) && (bVar20 != 0xa0)) && (bVar20 != 0x20)) goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 0x13;
            break;
          case 0x14:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((*(byte *)ppppppuVar34 - 10 < 4) || (*(byte *)ppppppuVar34 == 0x85))
              goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 0x14;
            break;
          case 0x15:
            param_1 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(iVar17 - 1) + 1);
            do {
              if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004de3f8;
              if ((3 < *(byte *)ppppppuVar34 - 10) && (*(byte *)ppppppuVar34 != 0x85))
              goto LAB_1004dee24;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
              uVar18 = (int)uVar21 - 1;
              uVar21 = (ulong)uVar18;
            } while (uVar18 != 0);
            uVar18 = 0x15;
          }
          goto LAB_1004dc61c;
        case 0x5e:
          goto switchD_1004db54c_caseD_5e;
        case 0x5f:
          uVar15 = 0;
          bVar13 = false;
          param_2 = pbVar36 + 2;
          uVar18 = (uint)pbVar36[1];
          uVar29 = 0x7fffffff;
          uVar21 = 1;
          goto LAB_1004db658;
        case 0x60:
          bVar13 = false;
          uVar15 = 0;
          lVar23 = 1;
          uVar29 = 1;
          goto switchD_1004db54c_caseD_5e;
        case 0x61:
          bVar13 = false;
          uVar15 = 0;
          uVar29 = ((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18;
LAB_1004dc604:
          uVar29 = uVar29 >> 0x10;
          lVar23 = 3;
switchD_1004db54c_caseD_5e:
          uVar31 = 0;
          param_2 = pbVar36 + lVar23 + 1;
          uVar18 = (uint)pbVar36[lVar23];
LAB_1004dc61c:
          uVar30 = (uint)uVar31;
          uVar32 = uVar29 - uVar30;
          ppppppuVar34 = param_1;
          if (uVar32 == 0) goto LAB_1004db50c;
          if (uVar15 != 0) {
            uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,
                                   (uint)local_fc + 1);
            if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
            uVar15 = uVar30;
            if ((int)uVar30 <= (int)uVar29) {
              uVar15 = uVar29;
            }
            iVar17 = (uVar15 - uVar30) + 1;
            goto LAB_1004de47c;
          }
          uVar37 = 0xfffffff2;
          switch(uVar18) {
          case 6:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 2 & 1) != 0) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 7:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 2 & 1) == 0) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 8:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) & 1) != 0) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 9:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) & 1) == 0) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 10:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 4 & 1) != 0) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 0xb:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((*(byte *)(*puVar2 + (ulong)*(byte *)ppppppuVar34) >> 4 & 1) == 0) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 0xc:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                ppppppuVar28 = (undefined8 ******)*puVar1;
                if (ppppppuVar28 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((int)param_5[5] == 0) {
                  if (((ppppppuVar34 <= (undefined8 ******)((long)ppppppuVar28 - (long)*piVar3)) &&
                      (*(byte *)ppppppuVar34 == (byte)param_5[9])) &&
                     ((*piVar3 == 1 ||
                      (*(byte *)((long)ppppppuVar34 + 1) == *(byte *)((long)param_5 + 0x49)))))
                  break;
                }
                else {
                  iVar16 = FUN_1004df520(ppppppuVar34,(int)param_5[5],ppppppuVar28,piVar3,0);
                  if (iVar16 != 0) break;
                }
                if ((((((int)*puVar4 != 0) && ((byte *)*puVar1 <= (byte *)((long)ppppppuVar34 + 1U))
                      ) && ((int)param_5[5] == 0)) &&
                    ((*piVar3 == 2 && (*(byte *)ppppppuVar34 == (byte)param_5[9])))) &&
                   (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 0xd:
          case 0xe:
            ppppppuVar34 = (undefined8 ******)*puVar1;
            if (uVar32 <= (uint)((int)ppppppuVar34 - (int)param_1)) {
              ppppppuVar34 = (undefined8 ******)((long)param_1 + (ulong)uVar32);
              break;
            }
            iVar17 = (int)*puVar4;
            if (iVar17 == 0) break;
            goto LAB_1004ddac4;
          default:
            goto switchD_1004db54c_caseD_9d;
          case 0x11:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              ppppppuVar28 = param_1;
              do {
                ppppppuVar34 = ppppppuVar28;
                if ((undefined8 ******)*puVar1 <= ppppppuVar28) goto LAB_1004ddab8;
                bVar20 = *(byte *)ppppppuVar28;
                if (bVar20 == 10) {
LAB_1004dd96c:
                  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar28 + 1);
                }
                else {
                  if (bVar20 != 0xd) {
                    if ((*(int *)((long)param_5 + 0x8c) == 0) &&
                       ((bVar20 - 0xb < 2 || (bVar20 == 0x85)))) goto LAB_1004dd96c;
                    break;
                  }
                  ppppppuVar33 = (undefined8 ******)((long)ppppppuVar28 + 1);
                  ppppppuVar34 = ppppppuVar33;
                  if ((undefined8 ******)*puVar1 <= ppppppuVar33) break;
                  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar28 + 2);
                  if (*(byte *)((long)ppppppuVar28 + 1) != 10) {
                    ppppppuVar34 = ppppppuVar33;
                  }
                }
                iVar17 = iVar17 + -1;
                ppppppuVar28 = ppppppuVar34;
              } while (iVar17 != 0);
            }
            break;
          case 0x12:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                bVar20 = *(byte *)ppppppuVar34;
                if (((bVar20 == 9) || (bVar20 == 0x20)) || (bVar20 == 0xa0)) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 0x13:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                bVar20 = *(byte *)ppppppuVar34;
                if (((bVar20 != 9) && (bVar20 != 0xa0)) && (bVar20 != 0x20)) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 0x14:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((*(byte *)ppppppuVar34 - 10 < 4) || (*(byte *)ppppppuVar34 == 0x85)) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            break;
          case 0x15:
            iVar17 = uVar29 - uVar30;
            if (iVar17 != 0 && (int)uVar30 <= (int)uVar29) {
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) goto LAB_1004ddab8;
                if ((3 < *(byte *)ppppppuVar34 - 10) && (*(byte *)ppppppuVar34 != 0x85)) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
          }
          goto LAB_1004ddd08;
        case 0x6e:
        case 0x6f:
          param_2 = pbVar36 + 0x21;
          bVar20 = *param_2;
          uVar15 = 1;
          uVar18 = bVar20 - 0x62;
          if (uVar18 < 0xc) {
            if ((1 << (ulong)(uVar18 & 0x1f) & 0x73fU) == 0) {
              bVar14 = bVar20 == 0x69;
              bVar13 = bVar20 == 0x6d;
              uVar15 = (((*(ushort *)(pbVar36 + 0x22) & 0xff00) << 0x10) >> 8 |
                       (uint)*(ushort *)(pbVar36 + 0x22) << 0x18) >> 0x10;
              uVar18 = (((*(ushort *)(pbVar36 + 0x24) & 0xff00) << 0x10) >> 8 |
                       (uint)*(ushort *)(pbVar36 + 0x24) << 0x18) >> 0x10;
              uVar29 = 0x7fffffff;
              if (uVar18 != 0) {
                uVar29 = uVar18;
              }
              param_2 = pbVar36 + 0x26;
            }
            else {
              param_2 = pbVar36 + 0x22;
              bVar13 = 7 < uVar18;
              bVar14 = (bool)(bVar20 & 1);
              uVar15 = (uint)(char)(&DAT_10115bc6c)[uVar18];
              if (7 < uVar18) {
                bVar14 = false;
              }
              uVar29 = (uint)(char)(&DAT_10115bc77)[uVar18];
              if ((0x3cfUL >> ((ulong)uVar18 & 0x3f) & 1) != 0) {
                uVar29 = 0x7fffffff;
              }
            }
            ppppppuVar28 = ppppppuVar34;
            if (0 < (int)uVar15) goto LAB_1004dceb0;
          }
          else {
            bVar14 = false;
            bVar13 = false;
            uVar29 = 1;
LAB_1004dceb0:
            lVar23 = 0;
            do {
              pbVar19 = (byte *)((long)ppppppuVar34 + lVar23);
              if ((byte *)*puVar1 <= pbVar19) goto LAB_1004de3c0;
              if ((pbVar36[(ulong)(*pbVar19 >> 3) + 1] >> (ulong)(*pbVar19 & 7) & 1) == 0)
              goto LAB_1004dee24;
              lVar23 = lVar23 + 1;
              ppppppuVar28 = (undefined8 ******)((long)ppppppuVar34 + (ulong)(uVar15 - 1) + 1);
            } while (uVar15 != (uint)lVar23);
          }
          ppppppuVar34 = ppppppuVar28;
          if (uVar15 != uVar29) {
            if (bVar14 != false) {
              uVar37 = FUN_1004db458(ppppppuVar28,param_2,local_188,param_4,param_5,local_190,
                                     (uint)local_fc + 1);
              if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
              uVar18 = uVar15;
              if ((int)uVar15 <= (int)uVar29) {
                uVar18 = uVar29;
              }
              iVar17 = uVar18 - uVar15;
              goto LAB_1004deeec;
            }
            if ((int)uVar15 < (int)uVar29) {
              iVar17 = uVar29 - uVar15;
              do {
                if ((undefined8 ******)*puVar1 <= ppppppuVar34) {
                  if ((((int)*puVar4 != 0) && ((undefined8 ******)*puVar6 < ppppppuVar34)) &&
                     (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
                  break;
                }
                if ((pbVar36[(ulong)(*(byte *)ppppppuVar34 >> 3) + 1] >>
                     (ulong)(*(byte *)ppppppuVar34 & 7) & 1) == 0) break;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + 1);
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            if (!bVar13) {
              if (ppppppuVar34 < ppppppuVar28) goto LAB_1004dee24;
              goto LAB_1004def58;
            }
          }
          goto LAB_1004db50c;
        case 0x71:
        case 0x72:
          bVar13 = uVar32 == 0x72;
          uVar21 = (ulong)pbVar36[1] << 9 | (ulong)pbVar36[2] << 1;
          param_2 = pbVar36 + 3;
          if ((int)(uint)uVar21 < (int)uVar18) {
            iVar17 = *(int *)(param_5[3] + uVar21 * 4);
            if (-1 < iVar17) {
              iVar17 = *(int *)(param_5[3] + (ulong)((uint)uVar21 | 1) * 4) - iVar17;
              goto LAB_1004dcf70;
            }
          }
          iVar17 = -(uint)(*(int *)((long)param_5 + 0x74) == 0);
          goto LAB_1004dcf70;
        case 0x73:
        case 0x74:
          bVar13 = bVar20 == 0x74;
          uVar15 = (((*(ushort *)(pbVar36 + 3) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 3) << 0x18) >> 0x10;
          param_2 = pbVar36 + 5;
          iVar17 = -(uint)(*(int *)((long)param_5 + 0x74) == 0);
          if (uVar15 == 0) {
            uVar21 = 0;
          }
          else {
            iVar16 = uVar15 + 1;
            pbVar19 = (byte *)(param_5[8] +
                               (ulong)(((((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                                        (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10) *
                                      *(int *)((long)param_5 + 0x34)) + 1);
            do {
              uVar21 = (ulong)pbVar19[-1] << 9 | (ulong)*pbVar19 << 1;
              if ((int)(uint)uVar21 < (int)uVar18) {
                iVar8 = *(int *)(param_5[3] + uVar21 * 4);
                if (-1 < iVar8) {
                  iVar17 = *(int *)(param_5[3] + (ulong)((uint)uVar21 | 1) * 4) - iVar8;
                  break;
                }
              }
              iVar16 = iVar16 + -1;
              pbVar19 = pbVar19 + *(int *)((long)param_5 + 0x34);
            } while (1 < iVar16);
          }
LAB_1004dcf70:
          bVar20 = *param_2;
          uVar15 = bVar20 - 0x62;
          if (uVar15 < 6) {
            param_2 = param_2 + 1;
            uVar29 = (uint)(char)(&DAT_10115bc6c)[uVar15];
            bVar14 = (bool)(bVar20 & 1);
            uVar18 = (uint)(char)(&DAT_10115bc77)[uVar15];
            if ((0x3cfUL >> ((ulong)uVar15 & 0x3f) & 1) != 0) {
              uVar18 = 0x7fffffff;
            }
          }
          else {
            if (1 < bVar20 - 0x68) {
              uVar15 = FUN_1004df21c(uVar21,ppppppuVar34,iVar17,param_5,bVar13);
              if ((int)uVar15 < 0) goto LAB_1004dedf8;
              ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + (ulong)uVar15);
              goto LAB_1004db50c;
            }
            bVar14 = bVar20 == 0x69;
            uVar29 = (((*(ushort *)(param_2 + 1) & 0xff00) << 0x10) >> 8 |
                     (uint)*(ushort *)(param_2 + 1) << 0x18) >> 0x10;
            uVar15 = (((*(ushort *)(param_2 + 3) & 0xff00) << 0x10) >> 8 |
                     (uint)*(ushort *)(param_2 + 3) << 0x18) >> 0x10;
            uVar18 = 0x7fffffff;
            if (uVar15 != 0) {
              uVar18 = uVar15;
            }
            param_2 = param_2 + 5;
          }
          if ((iVar17 != 0) && ((-1 < iVar17 || (uVar29 != 0)))) {
            uVar32 = uVar29;
            if (0 < (int)uVar29) {
              do {
                uVar15 = FUN_1004df21c(uVar21,ppppppuVar34,iVar17,param_5,bVar13);
                if ((int)uVar15 < 0) goto LAB_1004dedf8;
                ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + (ulong)uVar15);
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
            if (uVar29 != uVar18) {
              if (bVar14 == false) {
                ppppppuVar28 = ppppppuVar34;
                if ((int)uVar18 <= (int)uVar29) goto LAB_1004df050;
                iVar16 = uVar18 - uVar29;
                goto LAB_1004defac;
              }
              uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,
                                     (uint)local_fc + 1);
              if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
              uVar15 = uVar29;
              if ((int)uVar29 <= (int)uVar18) {
                uVar15 = uVar18;
              }
              iVar16 = (uVar15 - uVar29) + 1;
              goto LAB_1004deda4;
            }
          }
          goto LAB_1004db50c;
        case 0x75:
          uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                   (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
          pbVar19 = (byte *)(param_5[0x13] + uVar37);
          if (uVar37 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (((*(ushort *)(pbVar19 + 3) & 0xff00) << 0x10) >> 8 |
                     (uint)*(ushort *)(pbVar19 + 3) << 0x18) >> 0x10;
          }
          puVar24 = (ulong *)param_5[0x1e];
          for (puVar27 = puVar24; puVar27 != (ulong *)0x0; puVar27 = (ulong *)*puVar27) {
            if ((uVar15 == (uint)puVar27[1]) && (ppppppuVar34 == (undefined8 ******)puVar27[4])) {
              uVar37 = 0xffffffe6;
              goto switchD_1004db54c_caseD_9d;
            }
          }
          local_10c = (undefined4)param_5[0x1a];
          param_5[0x1e] = (ulong)&local_128;
          local_110 = (uint)param_5[4];
          uVar37 = (ulong)local_110;
          local_128 = puVar24;
          local_120 = uVar15;
          local_108 = ppppppuVar34;
          if ((int)local_110 < 0x1f) {
            local_118 = (uint *)((long)&local_fc + 4);
          }
          else {
            local_118 = (uint *)(*(code *)PTR__malloc_101867450)(uVar37 << 2);
            if (local_118 == (uint *)0x0) {
              uVar37 = 0xfffffffa;
              goto switchD_1004db54c_caseD_9d;
            }
            uVar37 = (ulong)local_110;
          }
          _memcpy(local_118,(void *)param_5[3],-(uVar37 >> 0x1f) & 0xfffffffc00000000 | uVar37 << 2)
          ;
          bVar20 = *pbVar19;
          uVar37 = (ulong)bVar20;
LAB_1004dd5a0:
          if (0x87 < bVar20) {
            *(undefined4 *)(param_5 + 0x1b) = 2;
            uVar37 = (ulong)*pbVar19;
          }
          uVar37 = FUN_1004db458(ppppppuVar34,pbVar19 + (byte)(&DAT_10115bc9c)[uVar37],local_188,
                                 param_4,param_5,local_190,(uint)local_fc + 1);
          _memcpy((void *)param_5[3],local_118,(long)(int)local_110 << 2);
          *(undefined4 *)(param_5 + 0x1a) = local_10c;
          param_5[0x1e] = (ulong)local_128;
          iVar17 = (int)uVar37;
          if ((iVar17 != 1) && (iVar17 != -999)) {
            if (iVar17 + 0x3e4U < 5) goto LAB_1004de720;
            if (iVar17 == 0) goto code_r0x0001004dd630;
            if (local_118 != (uint *)((long)&local_fc + 4U)) {
              (*(code *)PTR__free_101867458)();
            }
            goto switchD_1004db54c_caseD_9d;
          }
          if (local_118 != (uint *)((long)&local_fc + 4U)) {
            (*(code *)PTR__free_101867458)();
          }
          ppppppuVar34 = (undefined8 ******)param_5[0x17];
          param_2 = pbVar36 + 3;
          local_188 = (undefined8 ******)param_5[0x16];
          goto LAB_1004db50c;
        case 0x76:
          if (DAT_101d91140 != (code *)0x0) {
            local_180 = 2;
            local_17c = (uint)pbVar36[1];
            local_178 = param_5[3];
            uStack_170 = param_5[0x14];
            local_160 = (int)uStack_170;
            local_168 = (int)param_5[0x15] - local_160;
            iStack_164 = (int)local_188 - local_160;
            local_160 = iVar17 - local_160;
            local_148 = (((*(ushort *)(pbVar36 + 2) & 0xff00) << 0x10) >> 8 |
                        (uint)*(ushort *)(pbVar36 + 2) << 0x18) >> 0x10;
            local_144 = (((*(ushort *)(pbVar36 + 4) & 0xff00) << 0x10) >> 8 |
                        (uint)*(ushort *)(pbVar36 + 4) << 0x18) >> 0x10;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + 1;
            }
            local_15c = (int)uVar18 >> 1;
            uStack_158 = (uint)(ushort)param_5[0x1a];
            if (uStack_158 == 0) {
              uStack_158 = 0xffffffff;
            }
            local_150 = param_5[0x1f];
            local_140 = param_5[0x21];
            uVar37 = (*DAT_101d91140)(&local_180);
            if (0 < (int)uVar37) goto LAB_1004dee24;
            if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
          }
          param_2 = pbVar36 + 6;
          goto LAB_1004db50c;
        case 0x77:
          do {
            pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                 (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
            param_2 = pbVar36;
          } while (*pbVar36 == 0x77);
          goto LAB_1004db50c;
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
          pbVar19 = pbVar36 + -(((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
          uVar15 = (uint)*pbVar19;
          if ((*pbVar19 < 0x88) && (uVar15 != 0x81)) {
            if (3 < uVar15 - 0x7d) {
              ppppppuVar28 = (undefined8 ******)0x0;
              goto LAB_1004dc09c;
            }
LAB_1004dea10:
            *(uint *)((long)param_5 + 0xcc) = uVar18;
            uVar37 = 1;
            param_5[0x16] = (ulong)local_188;
            param_5[0x17] = (ulong)ppppppuVar34;
            goto switchD_1004db54c_caseD_9d;
          }
          ppppppuVar28 = local_190[1];
          local_190 = (undefined8 *******)*local_190;
LAB_1004dc09c:
          uVar15 = uVar15 - 0x82;
          if (uVar15 < 10) {
            if ((1 << (ulong)(uVar15 & 0x1f) & 0x318U) == 0) {
              if (uVar15 == 0) goto LAB_1004dea10;
              goto LAB_1004dd080;
            }
            uVar37 = (((ulong)*(ushort *)(pbVar19 + 3) & 0xff00) << 0x30) >> 8 |
                     (ulong)*(ushort *)(pbVar19 + 3) << 0x38;
            uVar21 = uVar37 >> 0x30;
            uVar10 = (ushort)(uVar37 >> 0x30);
            if ((param_5[0x1e] == 0) || (*(uint *)(param_5[0x1e] + 8) != (uint)uVar10)) {
              lVar23 = uVar21 * 2;
              uVar15 = CONCAT22(*(undefined2 *)((long)param_5 + 0xd2),uVar10);
              *(uint *)(param_5 + 0x1a) = uVar15;
              uVar29 = (uint)lVar23;
              if ((int)uVar29 < *(int *)((long)param_5 + 0x24)) {
                if (((int)uVar18 < (int)uVar29) && (lVar26 = (long)(int)uVar18, lVar26 < lVar23)) {
                  uVar35 = param_5[3];
                  pvVar7 = (void *)(uVar35 + lVar26 * 4);
                  uVar37 = (long)pvVar7 + 4;
                  uVar31 = uVar35 + (ulong)uVar10 * 8;
                  if (uVar37 <= uVar31) {
                    uVar37 = uVar31;
                  }
                  _memset(pvVar7,0xff,uVar37 + ~uVar35 + lVar26 * -4 + 4 & 0xfffffffffffffffc);
                }
                uVar37 = param_5[3];
                *(undefined4 *)(uVar37 + uVar21 * 8) =
                     *(undefined4 *)(uVar37 + (ulong)((int)param_5[4] - (uint)uVar10) * 4);
                *(int *)(uVar37 + (ulong)(uVar29 | 1) * 4) = iVar17 - (int)param_5[0x14];
                if ((int)uVar18 <= (int)uVar29) {
                  uVar18 = uVar29 + 2;
                }
                param_4 = (ulong)uVar18;
              }
              else {
                *(uint *)(param_5 + 0x1a) = uVar15 | 0x10000;
              }
              goto LAB_1004dd080;
            }
            param_5[0x16] = (ulong)local_188;
            param_5[0x17] = (ulong)ppppppuVar34;
            goto LAB_1004dea78;
          }
LAB_1004dd080:
          bVar20 = *pbVar36;
          if (bVar20 == 0x78) {
LAB_1004dd09c:
            param_2 = pbVar36 + 3;
            if (*pbVar19 != 0x81) goto LAB_1004db50c;
LAB_1004de798:
            uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,
                                   (uint)local_fc + 1);
            if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
            param_5[0x22] = (ulong)pbVar19;
          }
          else {
            if (bVar20 == 0x7b) {
              param_5[0x16] = (ulong)local_188;
              param_5[0x17] = (ulong)ppppppuVar34;
              uVar37 = 0xfffffc1a;
              *(int *)((long)param_5 + 0xcc) = (int)param_4;
              goto switchD_1004db54c_caseD_9d;
            }
            if (ppppppuVar34 == ppppppuVar28) goto LAB_1004dd09c;
            if (bVar20 == 0x7a) {
              uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + 3,local_188,param_4,param_5,local_190,
                                     (uint)local_fc + 1);
              if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
              param_2 = pbVar19;
              if (*pbVar19 == 0x81) goto LAB_1004de798;
              if (0x87 < *pbVar19) goto LAB_1004deffc;
              goto LAB_1004de250;
            }
            uVar37 = FUN_1004db458(ppppppuVar34,pbVar19,local_188,param_4,param_5,local_190,
                                   (uint)local_fc + 1);
            if ((int)uVar37 == 0) {
LAB_1004de238:
              param_2 = pbVar36 + 3;
              if (*pbVar19 == 0x81) goto LAB_1004de798;
              goto LAB_1004de250;
            }
            if ((int)uVar37 != -0x3e5) goto switchD_1004db54c_caseD_9d;
            if ((byte *)param_5[0x22] == pbVar19) goto LAB_1004de238;
          }
          uVar37 = 0xfffffc1b;
          goto switchD_1004db54c_caseD_9d;
        case 0x7c:
          ppppppuVar34 = (undefined8 ******)
                         ((long)ppppppuVar34 -
                         (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                          (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30));
          if ((undefined8 ******)param_5[0x14] <= ppppppuVar34) {
            if (ppppppuVar34 < (undefined8 ******)*puVar6) {
              *puVar6 = (ulong)ppppppuVar34;
            }
            goto LAB_1004dce68;
          }
          goto LAB_1004dee24;
        case 0x7d:
        case 0x7f:
          uVar21 = param_5[0x1b];
          if ((int)uVar21 == 1) {
            *(undefined4 *)(param_5 + 0x1b) = 0;
          }
          uVar31 = param_5[0x20];
          do {
            uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + 3,local_188,param_4,param_5,0,
                                   (uint)local_fc + 1);
            iVar17 = (int)uVar37;
            if ((iVar17 == 1) || (iVar17 == -999)) {
              local_188 = (undefined8 ******)param_5[0x16];
              bVar20 = *pbVar36;
              break;
            }
            param_5[0x20] = uVar31;
            if (iVar17 == -0x3e0) {
              uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
              if ((pbVar36 + uVar37 <= (byte *)param_5[0x16]) ||
                 ((*pbVar36 != 0x77 && (pbVar36[uVar37] != 0x77)))) goto LAB_1004dece8;
            }
            else {
              if (iVar17 != 0) goto switchD_1004db54c_caseD_9d;
              uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
            }
            pbVar36 = pbVar36 + uVar37;
            bVar20 = *pbVar36;
          } while (bVar20 == 0x77);
          if (bVar20 == 0x78 || (int)uVar21 == 1) {
            uVar37 = (ulong)(bVar20 != 0x78);
            goto switchD_1004db54c_caseD_9d;
          }
          do {
            pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                 (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
          } while (*pbVar36 == 0x77);
          param_4 = (ulong)*(uint *)((long)param_5 + 0xcc);
          param_2 = pbVar36 + 3;
          goto LAB_1004db50c;
        case 0x7e:
        case 0x80:
          uVar21 = param_5[0x1b];
          if ((int)uVar21 == 1) {
            *(undefined4 *)(param_5 + 0x1b) = 0;
          }
          uVar31 = param_5[0x20];
          do {
            uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + 3,local_188,param_4,param_5,0,
                                   (uint)local_fc + 1);
            param_5[0x20] = uVar31;
            iVar17 = (int)uVar37;
            if (iVar17 < 0) {
              if (iVar17 != -0x3e0) {
                if (iVar17 + 0x3e4U < 4) goto LAB_1004dc1bc;
                if (iVar17 == -999) goto LAB_1004dee24;
                goto switchD_1004db54c_caseD_9d;
              }
              uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
              if ((pbVar36 + uVar37 <= (byte *)param_5[0x16]) ||
                 ((*pbVar36 != 0x77 && (pbVar36[uVar37] != 0x77)))) goto LAB_1004dc1bc;
            }
            else {
              if (iVar17 != 0) {
                if (iVar17 == 1) goto LAB_1004dee24;
                goto switchD_1004db54c_caseD_9d;
              }
              uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
            }
            pbVar36 = pbVar36 + uVar37;
          } while (*pbVar36 == 0x77);
          goto LAB_1004dc1d8;
        case 0x81:
        case 0x83:
        case 0x88:
          goto switchD_1004db54c_caseD_81;
        case 0x82:
          uVar21 = param_5[0x20];
          pbVar19 = pbVar36;
          do {
            uVar37 = FUN_1004db458(ppppppuVar34,pbVar19 + 3,local_188,param_4,param_5,local_190,
                                   (uint)local_fc + 1);
            iVar17 = (int)uVar37;
            if (iVar17 == -0x3e0) {
              uVar37 = ((((ulong)*(ushort *)(pbVar19 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar19 + 1) << 0x38) >> 0x30;
              if ((pbVar19 + uVar37 <= (byte *)param_5[0x16]) ||
                 ((*pbVar19 != 0x77 && (pbVar19[uVar37] != 0x77)))) goto LAB_1004dece8;
            }
            else {
              if (iVar17 != 0) {
                if (iVar17 != 1) goto switchD_1004db54c_caseD_9d;
                local_188 = (undefined8 ******)param_5[0x16];
                bVar20 = *pbVar19;
                break;
              }
              uVar37 = ((((ulong)*(ushort *)(pbVar19 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar19 + 1) << 0x38) >> 0x30;
            }
            pbVar19 = pbVar19 + uVar37;
            param_5[0x20] = uVar21;
            bVar20 = *pbVar19;
          } while (bVar20 == 0x77);
          if ((bVar20 != 0x82) && (bVar20 != 0x77)) goto LAB_1004dee24;
          do {
            pbVar19 = pbVar19 + (((((ulong)*(ushort *)(pbVar19 + 1) & 0xff00) << 0x30) >> 8 |
                                 (ulong)*(ushort *)(pbVar19 + 1) << 0x38) >> 0x30);
            bVar20 = *pbVar19;
          } while (bVar20 == 0x77);
          param_4 = (ulong)*(uint *)((long)param_5 + 0xcc);
          param_1 = (undefined8 ******)param_5[0x17];
          if (bVar20 != 0x78 && param_1 != ppppppuVar34) {
            if (bVar20 == 0x7a) {
              uVar37 = FUN_1004db458(param_1,pbVar19 + 3,local_188,param_4,param_5,local_190,
                                     (uint)local_fc + 1);
              param_2 = pbVar36;
              if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
            }
            else {
              uVar37 = FUN_1004db458(param_1,pbVar36,local_188,param_4,param_5,local_190,
                                     (uint)local_fc + 1);
              if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
              param_2 = pbVar19 + 3;
            }
            goto LAB_1004de250;
          }
          ppppppuVar34 = param_1;
          param_2 = pbVar19 + 3;
          goto LAB_1004db50c;
        case 0x84:
        case 0x89:
          goto switchD_1004db54c_caseD_84;
        case 0x85:
        case 0x8a:
          uVar37 = (((ulong)*(ushort *)(pbVar36 + 3) & 0xff00) << 0x30) >> 8 |
                   (ulong)*(ushort *)(pbVar36 + 3) << 0x38;
          uVar21 = uVar37 >> 0x30;
          if (*(int *)((long)param_5 + 0x24) <= (int)(uVar21 << 1)) {
switchD_1004db54c_caseD_81:
            if (0x87 < uVar30 || bVar20 == 0x81) goto LAB_1004de0c4;
            while (((int)param_5[0x12] != 0 ||
                   (pbVar36[((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                            (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30] == 0x77))) {
              while( true ) {
                uVar31 = param_5[0x20];
                uVar21 = param_5[0x1a];
                uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + (byte)(&DAT_10115bc9c)[*pbVar36],
                                       local_188,param_4,param_5,local_190,(uint)local_fc + 1);
                iVar17 = (int)uVar37;
                if (iVar17 == -0x3e0) {
                  uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                           (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
                  if ((pbVar36 + uVar37 <= (byte *)param_5[0x16]) ||
                     ((*pbVar36 != 0x77 && (pbVar36[uVar37] != 0x77)))) goto LAB_1004dece8;
                }
                else {
                  if (iVar17 != 0) {
                    if (iVar17 == -0x3e5) {
                      bVar20 = *pbVar36;
                      if (bVar20 != 0x81) {
                        while (bVar20 == 0x77) {
                          pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30)
                                                >> 8 | (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >>
                                              0x30);
                          bVar20 = *pbVar36;
                        }
                        pbVar36 = pbVar36 + -(((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30)
                                               >> 8 | (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >>
                                             0x30);
                      }
                      uVar15 = 0;
                      if ((byte *)param_5[0x22] != pbVar36) {
                        uVar15 = 0xfffffc1b;
                      }
                      uVar37 = (ulong)uVar15;
                    }
                    goto switchD_1004db54c_caseD_9d;
                  }
                  uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                           (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
                }
                pbVar36 = pbVar36 + uVar37;
                param_5[0x20] = uVar31;
                if (*pbVar36 != 0x77) goto LAB_1004dee24;
                *(int *)(param_5 + 0x1a) = (int)uVar21;
                if (0x87 >= uVar30 && bVar20 != 0x81) break;
LAB_1004de0c4:
                *(undefined4 *)(param_5 + 0x1b) = 2;
              }
            }
            param_2 = pbVar36 + (byte)(&DAT_10115bc9c)[*pbVar36];
            goto LAB_1004de250;
          }
          uVar31 = param_5[3];
          lVar23 = uVar21 * 8;
          uVar38 = *(undefined8 *)(uVar31 + lVar23);
          uVar18 = (uint)(ushort)(uVar37 >> 0x30);
          uVar15 = (int)param_5[4] - uVar18;
          uVar9 = *(undefined4 *)(uVar31 + (ulong)uVar15 * 4);
          uVar21 = param_5[0x1a];
          uVar35 = param_5[0x20];
          *(int *)(uVar31 + (ulong)uVar15 * 4) = iVar17 - (int)param_5[0x14];
          goto LAB_1004df0d8;
        case 0x86:
        case 0x8b:
switchD_1004db54c_caseD_86:
          bVar14 = bVar12;
          uVar37 = (((ulong)*(ushort *)(pbVar36 + 3) & 0xff00) << 0x30) >> 8 |
                   (ulong)*(ushort *)(pbVar36 + 3) << 0x38;
          uVar21 = uVar37 >> 0x30;
          if ((int)(uVar21 << 1) < *(int *)((long)param_5 + 0x24)) {
            bVar13 = false;
            uVar31 = param_5[0x13];
            iVar17 = (int)pbVar36;
            lVar23 = uVar21 * 8;
            uVar38 = *(undefined8 *)(param_5[3] + lVar23);
            uVar15 = (uint)(ushort)(uVar37 >> 0x30);
            uVar9 = *(undefined4 *)(param_5[3] + (ulong)((int)param_5[4] - uVar15) * 4);
            ppppppuVar28 = ppppppuVar34;
LAB_1004dc8ac:
            ppppppuVar34 = ppppppuVar28;
            uVar21 = param_5[0x1a];
            do {
              *(int *)(param_5[3] + (ulong)((int)param_5[4] - uVar15) * 4) =
                   (int)ppppppuVar34 - (int)param_5[0x14];
              if (0x87 < bVar20) {
                *(undefined4 *)(param_5 + 0x1b) = 2;
              }
              uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + (byte)(&DAT_10115bc9c)[*pbVar36],
                                     local_188,param_4,param_5,local_190,(uint)local_fc + 1);
              iVar16 = (int)uVar37;
              if (iVar16 == -0x3e0) {
                if ((pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30) <=
                     (byte *)param_5[0x16]) ||
                   ((*pbVar36 != 0x77 &&
                    (pbVar36[((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                             (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30] != 0x77))))
                goto LAB_1004dece8;
              }
              else if (iVar16 != 0) goto LAB_1004dc97c;
              *(int *)(param_5 + 0x1a) = (int)uVar21;
              pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                   (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
              if (*pbVar36 != 0x77) {
                if (bVar13) goto LAB_1004dce68;
                uVar37 = param_5[3];
                *(undefined8 *)(uVar37 + lVar23) = uVar38;
                *(undefined4 *)(uVar37 + (ulong)((int)param_5[4] - uVar15) * 4) = uVar9;
                if (bVar14) goto LAB_1004dce68;
                goto LAB_1004dee24;
              }
            } while( true );
          }
          goto switchD_1004db54c_caseD_84;
        case 0x87:
        case 0x8c:
          pbVar19 = pbVar36 + 3;
          bVar22 = *pbVar19;
          uVar15 = (((*(ushort *)(pbVar36 + 1) & 0xff00) << 0x10) >> 8 |
                   (uint)*(ushort *)(pbVar36 + 1) << 0x18) >> 0x10;
          if (bVar22 == 0x76) {
            if (DAT_101d91140 != (code *)0x0) {
              local_17c = (uint)pbVar36[4];
              local_180 = 2;
              local_178 = param_5[3];
              uStack_170 = param_5[0x14];
              local_160 = (int)uStack_170;
              local_168 = (int)param_5[0x15] - local_160;
              iStack_164 = (int)local_188 - local_160;
              local_160 = iVar17 - local_160;
              local_148 = (((*(ushort *)(pbVar36 + 5) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar36 + 5) << 0x18) >> 0x10;
              local_144 = (((*(ushort *)(pbVar36 + 7) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar36 + 7) << 0x18) >> 0x10;
              uVar29 = uVar18;
              if ((int)uVar18 < 0) {
                uVar29 = uVar18 + 1;
              }
              local_15c = (int)uVar29 >> 1;
              uStack_158 = (uint)(ushort)param_5[0x1a];
              if (uStack_158 == 0) {
                uStack_158 = 0xffffffff;
              }
              local_150 = param_5[0x1f];
              local_140 = param_5[0x21];
              uVar37 = (*DAT_101d91140)(&local_180);
              if (0 < (int)uVar37) goto LAB_1004dee24;
              if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
            }
            pbVar19 = pbVar36 + 9;
            uVar15 = uVar15 - 6;
            bVar22 = *pbVar19;
          }
          uVar29 = (uint)bVar22;
          switch(uVar29) {
          case 0x8d:
            uVar37 = (ulong)pbVar19[1] << 9 | (ulong)pbVar19[2] << 1;
            if (((int)uVar18 <= (int)uVar37) || (*(int *)(param_5[3] + uVar37 * 4) < 0)) break;
            uVar29 = 0x8d;
            goto LAB_1004de1d8;
          case 0x8e:
            uVar29 = (((*(ushort *)(pbVar19 + 3) & 0xff00) << 0x10) >> 8 |
                     (uint)*(ushort *)(pbVar19 + 3) << 0x18) >> 0x10;
            if (uVar29 != 0) {
              iVar17 = uVar29 + 1;
              pbVar36 = (byte *)(param_5[8] +
                                 (ulong)(((((*(ushort *)(pbVar19 + 1) & 0xff00) << 0x10) >> 8 |
                                          (uint)*(ushort *)(pbVar19 + 1) << 0x18) >> 0x10) *
                                        *(int *)((long)param_5 + 0x34)) + 1);
              do {
                uVar37 = (ulong)pbVar36[-1] << 9 | (ulong)*pbVar36 << 1;
                if (((int)uVar37 < (int)uVar18) && (-1 < *(int *)(param_5[3] + uVar37 * 4))) {
                  uVar29 = 0x8e;
                  goto LAB_1004de1d8;
                }
                iVar17 = iVar17 + -1;
                pbVar36 = pbVar36 + *(int *)((long)param_5 + 0x34);
              } while (1 < iVar17);
            }
            break;
          case 0x8f:
            if ((param_5[0x1e] != 0) &&
               ((uVar18 = (((*(ushort *)(pbVar19 + 1) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar19 + 1) << 0x18) >> 0x10, uVar18 == 0xffff ||
                (uVar18 == *(uint *)(param_5[0x1e] + 8))))) {
              uVar29 = 0x8f;
              goto LAB_1004de1d8;
            }
            break;
          case 0x90:
            if ((param_5[0x1e] != 0) &&
               (uVar18 = (((*(ushort *)(pbVar19 + 3) & 0xff00) << 0x10) >> 8 |
                         (uint)*(ushort *)(pbVar19 + 3) << 0x18) >> 0x10, uVar18 != 0)) {
              iVar17 = uVar18 + 1;
              lVar23 = param_5[8] +
                       (ulong)(((((*(ushort *)(pbVar19 + 1) & 0xff00) << 0x10) >> 8 |
                                (uint)*(ushort *)(pbVar19 + 1) << 0x18) >> 0x10) *
                              *(int *)((long)param_5 + 0x34)) + 1;
              do {
                if ((((*(ushort *)(lVar23 + -1) & 0xff00) << 0x10) >> 8 |
                    (uint)*(ushort *)(lVar23 + -1) << 0x18) >> 0x10 == *(uint *)(param_5[0x1e] + 8))
                {
                  uVar29 = 0x90;
                  goto LAB_1004de1d8;
                }
                iVar17 = iVar17 + -1;
                lVar23 = lVar23 + *(int *)((long)param_5 + 0x34);
              } while (1 < iVar17);
            }
            break;
          case 0x91:
            break;
          default:
            if (uVar29 == 0x9d) break;
            *(undefined4 *)(param_5 + 0x1b) = 1;
            uVar37 = FUN_1004db458(ppppppuVar34,pbVar19,local_188,param_4,param_5,0,
                                   (uint)local_fc + 1);
            iVar17 = (int)uVar37;
            if (iVar17 == -0x3e0 || iVar17 == 0) break;
            if (iVar17 != 1) goto switchD_1004db54c_caseD_9d;
            uVar15 = *(uint *)((long)param_5 + 0xcc);
            if ((int)*(uint *)((long)param_5 + 0xcc) <= (int)uVar18) {
              uVar15 = uVar18;
            }
            param_4 = (ulong)uVar15;
            if (*pbVar19 == 0x92) {
              pbVar19 = pbVar19 + 1;
            }
            do {
              pbVar19 = pbVar19 + (((((ulong)*(ushort *)(pbVar19 + 1) & 0xff00) << 0x30) >> 8 |
                                   (ulong)*(ushort *)(pbVar19 + 1) << 0x38) >> 0x30);
            } while (*pbVar19 == 0x77);
            pbVar19 = pbVar19 + (3 - (ulong)(byte)(&DAT_10115bc9c)[uVar29]);
LAB_1004de1d8:
            pbVar19 = pbVar19 + (byte)(&DAT_10115bc9c)[uVar29];
LAB_1004de1e8:
            param_2 = pbVar19;
            if (bVar20 != 0x8c) goto LAB_1004de250;
            *(undefined4 *)(param_5 + 0x1b) = 2;
LAB_1004deffc:
            iVar17 = (uint)local_fc + 1;
            goto LAB_1004de3b4;
          }
          pbVar19 = pbVar19 + (int)uVar15;
          param_2 = pbVar19;
          if (pbVar19[-3] == 0x77) goto LAB_1004de1e8;
          goto LAB_1004db50c;
        case 0x92:
          pbVar36 = pbVar36 + 1;
          uVar37 = FUN_1004db458(ppppppuVar34,pbVar36,local_188,param_4,param_5,local_190,
                                 (uint)local_fc + 1);
          if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
          do {
            pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                 (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
          } while (*pbVar36 == 0x77);
          param_2 = pbVar36 + 3;
          goto LAB_1004db50c;
        case 0x93:
          pbVar19 = pbVar36 + 1;
          do {
            pbVar19 = pbVar19 + (((((ulong)*(ushort *)(pbVar19 + 1) & 0xff00) << 0x30) >> 8 |
                                 (ulong)*(ushort *)(pbVar19 + 1) << 0x38) >> 0x30);
          } while (*pbVar19 == 0x77);
          uVar37 = FUN_1004db458(ppppppuVar34,pbVar19 + 3,local_188,param_4,param_5,local_190,
                                 (uint)local_fc + 1);
          param_2 = pbVar36 + 1;
          if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
          goto LAB_1004db50c;
        case 0x94:
          pbVar36 = pbVar36 + 1;
          bVar20 = *pbVar36;
          bVar14 = true;
          bVar12 = true;
          if ((bVar20 == 0x86) || (bVar20 == 0x8b)) goto switchD_1004db54c_caseD_86;
switchD_1004db54c_caseD_84:
          bVar13 = false;
          uVar21 = param_5[0x13];
          iVar17 = (int)pbVar36;
          uVar31 = param_5[0x1a];
          do {
            while( true ) {
              ppppppuVar28 = ppppppuVar34;
              if (0x87 < bVar20) {
                *(undefined4 *)(param_5 + 0x1b) = 2;
              }
              uVar37 = FUN_1004db458(ppppppuVar28,pbVar36 + (byte)(&DAT_10115bc9c)[*pbVar36],
                                     local_188,param_4,param_5,local_190,(uint)local_fc + 1);
              iVar16 = (int)uVar37;
              if (iVar16 != -0x3e0) break;
              uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
              if ((pbVar36 + uVar37 <= (byte *)param_5[0x16]) ||
                 ((*pbVar36 != 0x77 && (pbVar36[uVar37] != 0x77)))) goto LAB_1004dece8;
LAB_1004dca90:
              pbVar36 = pbVar36 + uVar37;
              if (*pbVar36 != 0x77) goto LAB_1004dcaf4;
              *(int *)(param_5 + 0x1a) = (int)uVar31;
              ppppppuVar34 = ppppppuVar28;
            }
            if (iVar16 == 0) {
              uVar37 = ((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30;
              goto LAB_1004dca90;
            }
            if (iVar16 != -0x3e6) goto switchD_1004db54c_caseD_9d;
            param_4 = (ulong)*(uint *)((long)param_5 + 0xcc);
            pbVar36 = (byte *)(param_5[0x13] + (long)(iVar17 - (int)uVar21));
            local_188 = (undefined8 ******)param_5[0x16];
            bVar13 = true;
            ppppppuVar34 = (undefined8 ******)param_5[0x17];
          } while (ppppppuVar28 != (undefined8 ******)param_5[0x17]);
          do {
            pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                 (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
            bVar13 = true;
          } while (*pbVar36 == 0x77);
LAB_1004dcaf4:
          if (!bVar13 && !bVar14) goto LAB_1004dee24;
          ppppppuVar34 = ppppppuVar28;
          param_2 = pbVar36 + 3;
          goto LAB_1004db50c;
        case 0x95:
          pbVar19 = pbVar36 + 2;
          param_5[0x20] = 0;
          param_5[0x21] = (ulong)pbVar19;
          uVar37 = FUN_1004db458(ppppppuVar34,
                                 pbVar36 + (ulong)pbVar36[1] +
                                           (ulong)(byte)(&DAT_10115bc9c)[*pbVar36],local_188,param_4
                                 ,param_5,local_190,(uint)local_fc + 1);
          iVar17 = (int)uVar37;
          if (iVar17 == 1) {
LAB_1004deb4c:
            if (param_5[0x20] == 0) {
              param_5[0x20] = (ulong)pbVar19;
              goto switchD_1004db54c_caseD_9d;
            }
            if (iVar17 != -0x3e1) goto switchD_1004db54c_caseD_9d;
          }
          else if (iVar17 != -0x3e1) {
            if (iVar17 == -999) goto LAB_1004deb4c;
            goto switchD_1004db54c_caseD_9d;
          }
          iVar17 = _strcmp((char *)pbVar19,(char *)param_5[0x16]);
          if (iVar17 != 0) goto LAB_1004ded5c;
          goto LAB_1004dec40;
        case 0x96:
          uVar18 = FUN_1004db458(ppppppuVar34,pbVar36 + 1,local_188,param_4,param_5,local_190,
                                 (uint)local_fc + 1);
          uVar15 = 0xfffffc1d;
          goto LAB_1004ded20;
        case 0x97:
          param_5[0x20] = 0;
          param_5[0x21] = (ulong)(pbVar36 + 2);
          uVar37 = FUN_1004db458(ppppppuVar34,
                                 pbVar36 + (ulong)pbVar36[1] +
                                           (ulong)(byte)(&DAT_10115bc9c)[*pbVar36],local_188,param_4
                                 ,param_5,local_190,(uint)local_fc + 1);
          iVar17 = (int)uVar37;
          if (iVar17 == 1) {
LAB_1004debf8:
            if (param_5[0x20] == 0) {
              param_5[0x20] = (ulong)(pbVar36 + 2);
            }
            if (iVar17 != 0) goto switchD_1004db54c_caseD_9d;
          }
          else if (iVar17 != 0) {
            if (iVar17 == -999) goto LAB_1004debf8;
            goto switchD_1004db54c_caseD_9d;
          }
          uVar37 = 0xfffffc1d;
          goto switchD_1004db54c_caseD_9d;
        case 0x98:
          uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + 1,local_188,param_4,param_5,local_190,
                                 (uint)local_fc + 1);
          if ((int)uVar37 == 0) {
LAB_1004dec40:
            param_5[0x16] = (ulong)ppppppuVar34;
            uVar37 = 0xfffffc1e;
          }
          goto switchD_1004db54c_caseD_9d;
        case 0x99:
          uVar15 = (int)param_5[7] + 1;
          *(uint *)(param_5 + 7) = uVar15;
          param_2 = pbVar36 + (ulong)pbVar36[1] + (ulong)(byte)(&DAT_10115bc9c)[*pbVar36];
          if (*(uint *)((long)param_5 + 0x3c) < uVar15) {
            uVar37 = FUN_1004db458(ppppppuVar34,
                                   pbVar36 + (ulong)pbVar36[1] +
                                             (ulong)(byte)(&DAT_10115bc9c)[*pbVar36],local_188,
                                   param_4,param_5,local_190,(uint)local_fc + 1);
            if ((int)uVar37 == 0) {
              param_5[0x16] = (ulong)(pbVar36 + 2);
LAB_1004ded5c:
              uVar37 = 0xfffffc1f;
            }
            goto switchD_1004db54c_caseD_9d;
          }
          goto LAB_1004db50c;
        case 0x9a:
          uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + 1,local_188,param_4,param_5,local_190,
                                 (uint)local_fc + 1);
          if ((int)uVar37 == 0) goto LAB_1004dece4;
          goto switchD_1004db54c_caseD_9d;
        case 0x9b:
          param_5[0x20] = 0;
          param_5[0x21] = (ulong)(pbVar36 + 2);
          uVar37 = FUN_1004db458(ppppppuVar34,
                                 pbVar36 + (ulong)pbVar36[1] +
                                           (ulong)(byte)(&DAT_10115bc9c)[*pbVar36],local_188,param_4
                                 ,param_5,local_190,(uint)local_fc + 1);
          iVar17 = (int)uVar37;
          if (iVar17 != 1) {
            if (iVar17 == 0) goto LAB_1004dece4;
            if (iVar17 != -999) goto switchD_1004db54c_caseD_9d;
          }
          if (param_5[0x20] == 0) {
            param_5[0x20] = (ulong)(pbVar36 + 2);
          }
          if (iVar17 != 0) goto switchD_1004db54c_caseD_9d;
LAB_1004dece4:
          param_5[0x16] = (ulong)pbVar36;
          goto LAB_1004dece8;
        case 0x9c:
          uVar18 = FUN_1004db458(ppppppuVar34,pbVar36 + 1,local_188,param_4,param_5,local_190,
                                 (uint)local_fc + 1);
          uVar15 = 0xfffffc1c;
LAB_1004ded20:
          if (uVar18 != 0) {
            uVar15 = uVar18;
          }
          uVar37 = (ulong)uVar15;
        case 0x9d:
          goto switchD_1004db54c_caseD_9d;
        case 0xa0:
          uVar37 = (((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                   (ulong)*(ushort *)(pbVar36 + 1) << 0x38;
          uVar21 = uVar37 >> 0x30;
          lVar23 = uVar21 * 2;
          uVar10 = (ushort)(uVar37 >> 0x30);
          uVar15 = CONCAT22(*(undefined2 *)((long)param_5 + 0xd2),uVar10);
          *(uint *)(param_5 + 0x1a) = uVar15;
          uVar29 = (uint)lVar23;
          if ((int)uVar29 < *(int *)((long)param_5 + 0x24)) {
            uVar37 = param_5[3];
            *(undefined4 *)(uVar37 + uVar21 * 8) =
                 *(undefined4 *)(uVar37 + (ulong)((int)param_5[4] - (uint)uVar10) * 4);
            *(int *)(uVar37 + (ulong)(uVar29 | 1) * 4) = iVar17 - (int)param_5[0x14];
            if ((int)uVar18 <= (int)uVar29) {
              lVar26 = (long)(int)uVar18;
              if (lVar26 < lVar23) {
                pvVar7 = (void *)(uVar37 + lVar26 * 4);
                uVar21 = (long)pvVar7 + 4;
                uVar31 = uVar37 + (ulong)uVar10 * 8;
                if (uVar21 <= uVar31) {
                  uVar21 = uVar31;
                }
                _memset(pvVar7,0xff,uVar21 + ~uVar37 + lVar26 * -4 + 4 & 0xfffffffffffffffc);
              }
              param_4 = (ulong)(uVar29 + 2);
            }
          }
          else {
            *(uint *)(param_5 + 0x1a) = uVar15 | 0x10000;
          }
          goto LAB_1004dce68;
        case 0xa1:
          pbVar36 = pbVar36 + 1;
          do {
            pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                                 (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
          } while (*pbVar36 == 0x77);
          param_2 = pbVar36 + 3;
          goto LAB_1004db50c;
        }
LAB_1004de3f8:
        iVar17 = (int)*puVar4;
        if (iVar17 != 0) goto LAB_1004de404;
        goto LAB_1004dee24;
      }
      uVar37 = 0xffffffeb;
    }
    else {
LAB_1004de388:
      uVar37 = 0xfffffff8;
    }
  }
  goto switchD_1004db54c_caseD_9d;
LAB_1004dc97c:
  if (iVar16 != -0x3e6) goto switchD_1004db54c_caseD_9d;
  param_4 = (ulong)*(uint *)((long)param_5 + 0xcc);
  pbVar36 = (byte *)(param_5[0x13] + (long)(iVar17 - (int)uVar31));
  local_188 = (undefined8 ******)param_5[0x16];
  bVar13 = true;
  ppppppuVar28 = (undefined8 ******)param_5[0x17];
  if (ppppppuVar34 == (undefined8 ******)param_5[0x17]) goto LAB_1004dc9ac;
  goto LAB_1004dc8ac;
LAB_1004dc9ac:
  do {
    pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
  } while (*pbVar36 == 0x77);
  goto LAB_1004dce68;
LAB_1004df0d8:
  do {
    if (0x87 < bVar20) {
      *(undefined4 *)(param_5 + 0x1b) = 2;
    }
    uVar37 = FUN_1004db458(ppppppuVar34,pbVar36 + (byte)(&DAT_10115bc9c)[*pbVar36],local_188,param_4
                           ,param_5,local_190,(uint)local_fc + 1);
    iVar17 = (int)uVar37;
    if (iVar17 == -0x3e0) {
      if ((pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                      (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30) <= (byte *)param_5[0x16]) ||
         ((*pbVar36 != 0x77 &&
          (pbVar36[((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                   (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30] != 0x77)))) goto LAB_1004dece8;
    }
    else if (iVar17 != 0) {
      if (iVar17 == -0x3e5) goto LAB_1004df1f8;
      goto switchD_1004db54c_caseD_9d;
    }
    *(int *)(param_5 + 0x1a) = (int)uVar21;
    pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
    param_5[0x20] = uVar35;
  } while (*pbVar36 == 0x77);
  uVar37 = 0;
LAB_1004df1f8:
  uVar21 = param_5[3];
  *(undefined8 *)(uVar21 + lVar23) = uVar38;
  *(undefined4 *)(uVar21 + (ulong)((int)param_5[4] - uVar18) * 4) = uVar9;
  goto switchD_1004db54c_caseD_9d;
LAB_1004dc1bc:
  do {
    pbVar36 = pbVar36 + (((((ulong)*(ushort *)(pbVar36 + 1) & 0xff00) << 0x30) >> 8 |
                         (ulong)*(ushort *)(pbVar36 + 1) << 0x38) >> 0x30);
  } while (*pbVar36 == 0x77);
LAB_1004dc1d8:
  if ((int)uVar21 == 1) {
LAB_1004dea78:
    uVar37 = 1;
    goto switchD_1004db54c_caseD_9d;
  }
LAB_1004dce68:
  param_2 = pbVar36 + 3;
  goto LAB_1004db50c;
LAB_1004dece8:
  uVar37 = 0xfffffc20;
  goto switchD_1004db54c_caseD_9d;
code_r0x0001004dd630:
  param_5[0x1e] = (ulong)&local_128;
  pbVar19 = pbVar19 + (((((ulong)*(ushort *)(pbVar19 + 1) & 0xff00) << 0x30) >> 8 |
                       (ulong)*(ushort *)(pbVar19 + 1) << 0x38) >> 0x30);
  uVar37 = 0x77;
  if (*pbVar19 != 0x77) {
    param_5[0x1e] = (ulong)local_128;
LAB_1004de720:
    if (local_118 != (uint *)((long)&local_fc + 4U)) {
      (*(code *)PTR__free_101867458)();
    }
    goto LAB_1004dee24;
  }
  goto LAB_1004dd5a0;
  while( true ) {
    ppppppuVar28 = (undefined8 ******)((long)ppppppuVar28 + (ulong)uVar15);
    iVar16 = iVar16 + -1;
    if (iVar16 == 0) break;
LAB_1004defac:
    uVar15 = FUN_1004df21c(uVar21,ppppppuVar28,iVar17,param_5,bVar13);
    if ((int)uVar15 < 0) {
      if ((((uVar15 == 0xfffffffe) && ((int)*puVar4 != 0)) && (*puVar6 < *puVar1)) &&
         (*(undefined4 *)puVar5 = 1, 1 < (int)*puVar4)) goto LAB_1004de3f0;
      break;
    }
  }
  if (ppppppuVar34 <= ppppppuVar28) {
LAB_1004df050:
    do {
      uVar37 = FUN_1004db458(ppppppuVar28,param_2,local_188,param_4,param_5,local_190,
                             (uint)local_fc + 1);
      if ((int)uVar37 != 0) break;
      uVar37 = 0;
      ppppppuVar28 = (undefined8 ******)((long)ppppppuVar28 - (long)iVar17);
    } while (ppppppuVar34 <= ppppppuVar28);
    goto switchD_1004db54c_caseD_9d;
  }
LAB_1004dee24:
  uVar37 = 0;
  goto switchD_1004db54c_caseD_9d;
  while( true ) {
    uVar15 = FUN_1004df21c(uVar21,ppppppuVar34,iVar17,param_5,bVar13);
    if ((int)uVar15 < 0) goto LAB_1004dedf8;
    ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + (ulong)uVar15);
    uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,
                           (uint)local_fc + 1);
    if ((int)uVar37 != 0) break;
LAB_1004deda4:
    iVar16 = iVar16 + -1;
    if (iVar16 == 0) goto LAB_1004dee24;
  }
  goto switchD_1004db54c_caseD_9d;
LAB_1004dedf8:
  if (uVar15 == 0xfffffffe) {
    ppppppuVar34 = (undefined8 ******)*puVar1;
  }
  iVar17 = (int)*puVar4;
  if ((iVar17 != 0) && ((undefined8 ******)*puVar1 <= ppppppuVar34)) {
LAB_1004de404:
    if ((undefined8 ******)*puVar6 < ppppppuVar34) goto LAB_1004de3dc;
  }
  goto LAB_1004dee24;
  while( true ) {
    if ((undefined8 ******)*puVar1 <= ppppppuVar28) {
      iVar17 = (int)*puVar4;
      if ((iVar17 == 0) || (ppppppuVar28 <= (undefined8 ******)*puVar6)) goto LAB_1004dee24;
      goto LAB_1004de3dc;
    }
    if ((pbVar36[(ulong)(*(byte *)ppppppuVar28 >> 3) + 1] >> (ulong)(*(byte *)ppppppuVar28 & 7) & 1)
        == 0) goto LAB_1004dee24;
    ppppppuVar28 = (undefined8 ******)((long)ppppppuVar28 + 1);
    uVar37 = FUN_1004db458(ppppppuVar28,param_2,local_188,param_4,param_5,local_190,
                           (uint)local_fc + 1);
    iVar17 = iVar17 + -1;
    if ((int)uVar37 != 0) break;
LAB_1004deeec:
    if (iVar17 == 0) goto LAB_1004dee24;
  }
  goto switchD_1004db54c_caseD_9d;
  while( true ) {
    uVar37 = 0;
    ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 + -1);
    if (ppppppuVar34 < ppppppuVar28) break;
LAB_1004def58:
    uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,
                           (uint)local_fc + 1);
    if ((int)uVar37 != 0) break;
  }
  goto switchD_1004db54c_caseD_9d;
LAB_1004de47c:
  do {
    iVar17 = iVar17 + -1;
    if (iVar17 == 0) goto LAB_1004dee24;
    ppppppuVar34 = (undefined8 ******)*puVar1;
    if (ppppppuVar34 <= param_1) goto LAB_1004dea94;
    if (uVar18 == 0xc) {
      if ((int)param_5[5] == 0) {
        if (((param_1 <= (undefined8 ******)((long)ppppppuVar34 - (long)*piVar3)) &&
            (*(byte *)param_1 == (byte)param_5[9])) &&
           ((*piVar3 == 1 || (*(byte *)((long)param_1 + 1) == *(byte *)((long)param_5 + 0x49)))))
        goto LAB_1004dee24;
      }
      else {
        iVar16 = FUN_1004df520(param_1,(int)param_5[5],ppppppuVar34,piVar3,0);
        if (iVar16 != 0) goto LAB_1004dee24;
      }
      ppppppuVar28 = (undefined8 ******)((long)param_1 + 1);
      if ((((((int)*puVar4 == 0) || (ppppppuVar28 < (undefined8 ******)*puVar1)) ||
           ((int)param_5[5] != 0)) || ((*piVar3 != 2 || (*(byte *)param_1 != (byte)param_5[9])))) ||
         (*(undefined4 *)puVar5 = 1, (int)*puVar4 < 2)) goto switchD_1004de4e4_caseD_d;
      goto LAB_1004de3f0;
    }
    uVar37 = 0xfffffff2;
    if (0xf < uVar18 - 6) break;
    ppppppuVar33 = (undefined8 ******)((long)param_1 + 1);
    bVar20 = *(byte *)param_1;
    uVar21 = (ulong)bVar20;
    uVar15 = (uint)bVar20;
    uVar29 = (uint)bVar20;
    ppppppuVar28 = ppppppuVar33;
    switch(uVar18) {
    case 6:
      bVar20 = *(byte *)(*puVar2 + uVar21) >> 2;
      goto joined_r0x0001004de610;
    case 7:
      bVar20 = *(byte *)(*puVar2 + uVar21) >> 2;
      goto joined_r0x0001004de624;
    case 8:
      bVar20 = *(byte *)(*puVar2 + uVar21);
      goto joined_r0x0001004de610;
    case 9:
      bVar20 = *(byte *)(*puVar2 + uVar21);
      goto joined_r0x0001004de624;
    case 10:
      bVar20 = *(byte *)(*puVar2 + uVar21) >> 4;
joined_r0x0001004de610:
      if ((bVar20 & 1) != 0) goto LAB_1004dee24;
      break;
    case 0xb:
      bVar20 = *(byte *)(*puVar2 + uVar21) >> 4;
joined_r0x0001004de624:
      if ((bVar20 & 1) == 0) goto LAB_1004dee24;
      break;
    default:
      goto switchD_1004db54c_caseD_9d;
    case 0xd:
    case 0xe:
      break;
    case 0x11:
      uVar37 = 0;
      if (bVar20 < 0xd) {
        if (uVar29 - 0xb < 2) {
LAB_1004de6ec:
          if (*(int *)((long)param_5 + 0x8c) != 0) goto LAB_1004dee24;
        }
        else if (uVar29 != 10) goto switchD_1004db54c_caseD_9d;
      }
      else {
        if (uVar29 == 0x85) goto LAB_1004de6ec;
        if (uVar29 != 0xd) goto switchD_1004db54c_caseD_9d;
        if ((ppppppuVar33 < ppppppuVar34) &&
           (ppppppuVar28 = (undefined8 ******)((long)param_1 + 2),
           *(byte *)((long)param_1 + 1) != 10)) {
          ppppppuVar28 = ppppppuVar33;
        }
      }
      break;
    case 0x12:
      uVar37 = 0;
      if (((uVar15 == 9) || (uVar29 == 0x20)) || (uVar29 == 0xa0)) goto switchD_1004db54c_caseD_9d;
      break;
    case 0x13:
      if (((uVar29 != 9) && (uVar29 != 0x20)) && (uVar15 != 0xa0)) goto LAB_1004dee24;
      break;
    case 0x14:
      uVar37 = 0;
      if ((uVar15 - 10 < 4) || (uVar15 == 0x85)) goto switchD_1004db54c_caseD_9d;
      break;
    case 0x15:
      if ((3 < uVar15 - 10) && (uVar15 != 0x85)) goto LAB_1004dee24;
    }
switchD_1004de4e4_caseD_d:
    uVar37 = FUN_1004db458(ppppppuVar28,param_2,local_188,param_4,param_5,local_190,
                           (uint)local_fc + 1);
    param_1 = ppppppuVar28;
  } while ((int)uVar37 == 0);
  goto switchD_1004db54c_caseD_9d;
LAB_1004ddab8:
  iVar17 = (int)*puVar4;
  if (iVar17 != 0) {
LAB_1004ddac4:
    if (((undefined8 ******)*puVar6 < ppppppuVar34) && (*(undefined4 *)puVar5 = 1, 1 < iVar17))
    goto LAB_1004de3f0;
  }
LAB_1004ddd08:
  if (bVar13) goto joined_r0x0001004ddf58;
  goto LAB_1004db50c;
joined_r0x0001004ddf58:
  ppppppuVar28 = ppppppuVar34;
  if (ppppppuVar28 != param_1) {
    uVar37 = FUN_1004db458(ppppppuVar28,param_2,local_188,param_4,param_5,local_190,
                           (uint)local_fc + 1);
    if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
    ppppppuVar33 = (undefined8 ******)((long)ppppppuVar28 - 1);
    ppppppuVar34 = ppppppuVar33;
    if ((((uVar18 == 0x11) && (param_1 < ppppppuVar33)) && (*(byte *)ppppppuVar33 == 10)) &&
       (ppppppuVar34 = (undefined8 ******)((long)ppppppuVar28 - 2U),
       *(byte *)((long)ppppppuVar28 - 2U) != 0xd)) {
      ppppppuVar34 = ppppppuVar33;
    }
    goto joined_r0x0001004ddf58;
  }
LAB_1004de250:
  uVar37 = *param_5;
  *param_5 = uVar37 + 1;
  if (param_5[1] <= uVar37) goto LAB_1004de388;
  uVar37 = 0xffffffeb;
  if (param_5[2] <= (ulong)(uint)local_fc) goto switchD_1004db54c_caseD_9d;
  goto LAB_1004db4e8;
  while( true ) {
    if ((undefined8 ******)*puVar1 <= param_1) goto LAB_1004dea94;
    if ((uint)uVar21 == (uint)*(byte *)param_1) goto LAB_1004dee24;
    param_1 = (undefined8 ******)((long)param_1 + 1);
    uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1);
    iVar17 = iVar17 + -1;
    if ((int)uVar37 != 0) break;
LAB_1004de874:
    if (iVar17 == 0) goto LAB_1004dee24;
  }
  goto switchD_1004db54c_caseD_9d;
joined_r0x0001004de020:
  if (ppppppuVar34 == param_1) goto LAB_1004de250;
  uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1
                        );
  if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 - 1);
  goto joined_r0x0001004de020;
  while( true ) {
    if ((undefined8 ******)*puVar1 <= param_1) goto LAB_1004dea94;
    if ((uint)uVar21 == (uint)*(byte *)param_1 || uVar32 == *(byte *)param_1) goto LAB_1004dee24;
    param_1 = (undefined8 ******)((long)param_1 + 1);
    uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1);
    iVar17 = iVar17 + -1;
    if ((int)uVar37 != 0) break;
LAB_1004de7e8:
    if (iVar17 == 0) goto LAB_1004dee24;
  }
  goto switchD_1004db54c_caseD_9d;
joined_r0x0001004ddfd8:
  if (ppppppuVar34 == param_1) goto LAB_1004de250;
  uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1
                        );
  if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 - 1);
  goto joined_r0x0001004ddfd8;
  while( true ) {
    if ((undefined8 ******)*puVar1 <= param_1) goto LAB_1004dea94;
    if ((uint)uVar21 != (uint)*(byte *)param_1) goto LAB_1004dee24;
    param_1 = (undefined8 ******)((long)param_1 + 1);
    uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1);
    iVar17 = iVar17 + -1;
    if ((int)uVar37 != 0) break;
LAB_1004de988:
    if (iVar17 == 0) goto LAB_1004dee24;
  }
  goto switchD_1004db54c_caseD_9d;
LAB_1004ddf48:
  if (ppppppuVar34 == param_1) goto LAB_1004de250;
  uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1
                        );
  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 - 1);
  if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
  goto LAB_1004ddf48;
LAB_1004de3c0:
  iVar17 = (int)*puVar4;
  if ((iVar17 == 0) || (pbVar19 <= (byte *)*puVar6)) goto LAB_1004dee24;
  goto LAB_1004de3dc;
LAB_1004dea94:
  iVar17 = (int)*puVar4;
  if ((iVar17 != 0) && ((undefined8 ******)*puVar6 < param_1)) {
LAB_1004de3dc:
    *(undefined4 *)puVar5 = 1;
    if (1 < iVar17) {
LAB_1004de3f0:
      uVar37 = 0xfffffff4;
      goto switchD_1004db54c_caseD_9d;
    }
  }
  goto LAB_1004dee24;
LAB_1004ddf0c:
  if (ppppppuVar34 == param_1) goto LAB_1004de250;
  uVar37 = FUN_1004db458(ppppppuVar34,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1
                        );
  ppppppuVar34 = (undefined8 ******)((long)ppppppuVar34 - 1);
  if ((int)uVar37 != 0) goto switchD_1004db54c_caseD_9d;
  goto LAB_1004ddf0c;
  while( true ) {
    if ((undefined8 ******)*puVar1 <= param_1) goto LAB_1004dea94;
    if ((uint)uVar21 != (uint)*(byte *)param_1 && uVar32 != *(byte *)param_1) goto LAB_1004dee24;
    param_1 = (undefined8 ******)((long)param_1 + 1);
    uVar37 = FUN_1004db458(param_1,param_2,local_188,param_4,param_5,local_190,(uint)local_fc + 1);
    iVar17 = iVar17 + -1;
    if ((int)uVar37 != 0) break;
LAB_1004de8fc:
    if (iVar17 == 0) goto LAB_1004dee24;
  }
switchD_1004db54c_caseD_9d:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return uVar37;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_1004df21c(int param_1,byte *param_2,int param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar3 = (int)param_2;
  if (-1 < param_3) {
    pbVar4 = (byte *)(*(long *)(param_4 + 0xa0) +
                     (long)*(int *)(*(long *)(param_4 + 0x18) + (long)param_1 * 4));
    if (param_5 != 0) {
      iVar5 = iVar3;
      if (0 < param_3) {
        iVar5 = param_3 + iVar3;
        param_3 = param_3 + 1;
        do {
          if (*(byte **)(param_4 + 0xa8) <= param_2) {
            return -2;
          }
          if (*(char *)(*(long *)(param_4 + 0x50) + (ulong)*pbVar4) !=
              *(char *)(*(long *)(param_4 + 0x50) + (ulong)*param_2)) {
            return -1;
          }
          pbVar4 = pbVar4 + 1;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        } while (1 < param_3);
      }
LAB_1004df28c:
      return iVar5 - iVar3;
    }
    iVar5 = iVar3 + param_3;
    do {
      if (param_3 < 1) goto LAB_1004df28c;
      if (*(byte **)(param_4 + 0xa8) <= param_2) {
        return -2;
      }
      bVar1 = *pbVar4;
      bVar2 = *param_2;
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (bVar1 == bVar2);
  }
  return -1;
}




undefined4 FUN_1004df2d0(int *param_1,byte *param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if (param_4 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if ((param_2 == (byte *)0x0) || ((*param_2 & 1) == 0)) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = *(uint **)(param_2 + 8);
  }
  if (*param_1 != 0x50435245) {
    uVar2 = 0xffffffe3;
    if (*param_1 != 0x45524350) {
      uVar2 = 0xfffffffc;
    }
    return uVar2;
  }
  uVar1 = param_1[3];
  if ((uVar1 & 1) == 0) {
    return 0xffffffe4;
  }
  switch(param_3) {
  case 0:
    puVar4 = (undefined *)(ulong)(param_1[2] & 0x27ff7a7f);
    goto LAB_1004df420;
  case 1:
    puVar4 = (undefined *)(ulong)(uint)param_1[1];
    goto LAB_1004df420;
  case 2:
    uVar3 = (uint)*(ushort *)((long)param_1 + 0x1e);
    break;
  case 3:
    uVar3 = (uint)*(ushort *)(param_1 + 8);
    break;
  case 4:
    if ((uVar1 >> 4 & 1) == 0) {
      uVar3 = 0xfffffffe;
      if ((uVar1 & 0x100) != 0) {
        uVar3 = 0xffffffff;
      }
      break;
    }
    goto LAB_1004df49c;
  case 5:
    if ((puVar5 != (uint *)0x0) && ((puVar5[1] & 1) != 0)) {
      puVar4 = (undefined *)(*(long *)(param_2 + 8) + 8);
      goto LAB_1004df420;
    }
    goto LAB_1004df408;
  case 6:
    if ((uVar1 >> 6 & 1) != 0) {
LAB_1004df4fc:
      uVar3 = (uint)*(ushort *)((long)param_1 + 0x1a);
      break;
    }
    goto LAB_1004df45c;
  case 7:
    uVar3 = (uint)*(ushort *)(param_1 + 9);
    break;
  case 8:
    uVar3 = (uint)*(ushort *)((long)param_1 + 0x26);
    break;
  case 9:
    puVar4 = (undefined *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + 0x22));
    goto LAB_1004df420;
  case 10:
    if (puVar5 != (uint *)0x0) {
      puVar4 = (undefined *)(ulong)*puVar5;
      goto LAB_1004df420;
    }
LAB_1004df408:
    puVar4 = (undefined *)0x0;
    goto LAB_1004df420;
  case 0xb:
    puVar4 = &DAT_10115a180;
LAB_1004df420:
    *(undefined **)param_4 = puVar4;
    return 0;
  case 0xc:
    uVar3 = (uVar1 >> 9 ^ 0xffffffff) & 1;
    break;
  case 0xd:
    uVar3 = uVar1 >> 10 & 1;
    break;
  case 0xe:
    uVar3 = uVar1 >> 0xb & 1;
    break;
  case 0xf:
    if ((puVar5 != (uint *)0x0) && (((byte)puVar5[1] >> 1 & 1) != 0)) {
      uVar3 = puVar5[10];
      break;
    }
LAB_1004df45c:
    uVar3 = 0xffffffff;
    break;
  case 0x10:
    if ((param_2 != (byte *)0x0) && ((*param_2 >> 6 & 1) != 0)) {
      uVar3 = (uint)(*(long *)(param_2 + 0x38) != 0);
      break;
    }
    goto LAB_1004df4c0;
  case 0x11:
    param_4[0] = 0;
    param_4[1] = 0;
    return 0;
  case 0x12:
    uVar3 = (uint)*(ushort *)(param_1 + 7);
    break;
  case 0x13:
    if ((uVar1 >> 4 & 1) == 0) goto LAB_1004df4c0;
LAB_1004df49c:
    uVar3 = (uint)*(ushort *)(param_1 + 6);
    break;
  case 0x14:
    uVar3 = uVar1 >> 7 & 2;
    if ((uVar1 & 0x10) != 0) {
      uVar3 = 1;
    }
    break;
  case 0x15:
    if ((uVar1 >> 6 & 1) != 0) goto LAB_1004df4fc;
LAB_1004df4c0:
    uVar3 = 0;
    break;
  case 0x16:
    uVar3 = uVar1 >> 6 & 1;
    break;
  case 0x17:
    if ((uVar1 >> 0xd & 1) == 0) {
      return 0xffffffdf;
    }
    uVar3 = param_1[4];
    break;
  case 0x18:
    if ((uVar1 >> 0xe & 1) == 0) {
      return 0xffffffdf;
    }
    uVar3 = param_1[5];
    break;
  case 0x19:
    uVar3 = uVar1 >> 0xf & 1;
    break;
  default:
    return 0xfffffffd;
  }
  *param_4 = uVar3;
  return 0;
}




undefined8 FUN_1004df520(byte *param_1,int param_2,long param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*param_1;
  if (param_2 == 2) {
    if (uVar1 != 10) {
LAB_1004df554:
      if (uVar1 != 0xd) {
        return 0;
      }
      uVar2 = 1;
      if ((param_1 < (byte *)(param_3 + -1)) && (uVar2 = 1, param_1[1] == 10)) {
        uVar2 = 2;
      }
      goto LAB_1004df590;
    }
  }
  else if (2 < uVar1 - 10) {
    if (uVar1 == 0x85) {
      uVar2 = 1;
      if (param_5 != 0) {
        uVar2 = 2;
      }
      goto LAB_1004df590;
    }
    goto LAB_1004df554;
  }
  uVar2 = 1;
LAB_1004df590:
  *param_4 = uVar2;
  return 1;
}




undefined8 FUN_1004df59c(long param_1,int param_2,byte *param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + -1);
  if (param_2 == 2) {
    if (uVar1 != 0xd) {
LAB_1004df5d4:
      if (uVar1 != 10) {
        return 0;
      }
      uVar2 = 1;
      if ((param_3 < (byte *)(param_1 + -1)) && (uVar2 = 1, *(char *)(param_1 + -2) == '\r')) {
        uVar2 = 2;
      }
      goto LAB_1004df60c;
    }
  }
  else if (2 < uVar1 - 0xb) {
    if (uVar1 == 0x85) {
      uVar2 = 1;
      if (param_5 != 0) {
        uVar2 = 2;
      }
      goto LAB_1004df60c;
    }
    goto LAB_1004df5d4;
  }
  uVar2 = 1;
LAB_1004df60c:
  *param_4 = uVar2;
  return 1;
}




void FUN_1004df618(string *param_1,string *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  std::string::operator=(param_1,param_2);
  puVar1 = &DAT_101e94410;
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  uVar2 = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)(param_1 + 0x18) = *puVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 **)(param_1 + 0x38) = &DAT_101e943f8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar3 = FUN_1004df690(param_1,0);
  *(long *)(param_1 + 0x30) = lVar3;
  if (lVar3 != 0) {
    uVar4 = FUN_1004df690(param_1,2);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  return;
}




long FUN_1004df690(undefined8 *param_1,int param_2)

{
  undefined8 ***pppuVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 **local_58 [2];
  char local_41;
  undefined1 auStack_3c [4];
  undefined8 local_38;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  if (param_2 == 2) {
    FUN_1004df858(local_58,"(?:");
    puVar4 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar4 = param_1;
    }
    std::string::append((char *)local_58,(ulong)puVar4);
    std::string::append((char *)local_58);
    pppuVar1 = (undefined8 ***)local_58[0];
    if (-1 < local_41) {
      pppuVar1 = local_58;
    }
    lVar3 = FUN_1004d34ac(pppuVar1,uVar2,&local_38,auStack_3c,0);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  else {
    puVar4 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      puVar4 = (undefined8 *)*param_1;
    }
    lVar3 = FUN_1004d34ac(puVar4,uVar2,&local_38,auStack_3c,0);
  }
  if ((lVar3 == 0) && ((undefined8 *)param_1[7] == &DAT_101e943f8)) {
    pvVar5 = operator_new(0x18);
    uVar6 = FUN_1004df858(pvVar5,local_38);
    param_1[7] = uVar6;
  }
  return lVar3;
}




void FUN_1004df7a4(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    (*(code *)PTR__free_101867458)();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (*(code *)PTR__free_101867458)();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 == &DAT_101e943f8 || puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    operator_delete((void *)*puVar1);
  }
  operator_delete(puVar1);
  return;
}




undefined8 * FUN_1004df820(undefined8 *param_1)

{
  FUN_1004df7a4();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




undefined8 * thunk_FUN_1004df820(undefined8 *param_1)

{
  FUN_1004df7a4();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




undefined8 * FUN_1004df858(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  sVar1 = _strlen(param_2);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1004dfd04();
  }
  if (sVar1 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)sVar1;
    puVar2 = param_1;
    if (sVar1 == 0) goto LAB_1004df8d0;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    puVar2 = operator_new(uVar3);
    param_1[1] = sVar1;
    param_1[2] = uVar3 | 0x8000000000000000;
    *param_1 = puVar2;
  }
  _memcpy(puVar2,param_2,sVar1);
LAB_1004df8d0:
  *(undefined1 *)((long)puVar2 + sVar1) = 0;
  return param_1;
}




void FUN_1004df8f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14,undefined8 *param_15,
                  undefined8 *param_16,undefined8 *param_17,undefined8 *param_18)

{
  undefined8 uVar1;
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [204];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_3 == &DAT_101d91150) {
    uVar1 = 0;
  }
  else {
    local_a8 = param_3;
    if (param_4 == &DAT_101d91150) {
      uVar1 = 1;
    }
    else {
      local_a0 = param_4;
      if (param_5 == &DAT_101d91150) {
        uVar1 = 2;
      }
      else {
        local_98 = param_5;
        if (param_6 == &DAT_101d91150) {
          uVar1 = 3;
        }
        else {
          local_90 = param_6;
          if (param_7 == &DAT_101d91150) {
            uVar1 = 4;
          }
          else {
            local_88 = param_7;
            if (param_8 == &DAT_101d91150) {
              uVar1 = 5;
            }
            else {
              local_80 = param_8;
              if (param_9 == &DAT_101d91150) {
                uVar1 = 6;
              }
              else {
                local_78 = param_9;
                if (param_10 == &DAT_101d91150) {
                  uVar1 = 7;
                }
                else {
                  local_70 = param_10;
                  if (param_11 == &DAT_101d91150) {
                    uVar1 = 8;
                  }
                  else {
                    local_68 = param_11;
                    if (param_12 == &DAT_101d91150) {
                      uVar1 = 9;
                    }
                    else {
                      local_60 = param_12;
                      if (param_13 == &DAT_101d91150) {
                        uVar1 = 10;
                      }
                      else {
                        local_58 = param_13;
                        if (param_14 == &DAT_101d91150) {
                          uVar1 = 0xb;
                        }
                        else {
                          local_50 = param_14;
                          if (param_15 == &DAT_101d91150) {
                            uVar1 = 0xc;
                          }
                          else {
                            local_48 = param_15;
                            if (param_16 == &DAT_101d91150) {
                              uVar1 = 0xd;
                            }
                            else {
                              local_40 = param_16;
                              if (param_17 == &DAT_101d91150) {
                                uVar1 = 0xe;
                              }
                              else {
                                local_38 = param_17;
                                if (param_18 == &DAT_101d91150) {
                                  uVar1 = 0xf;
                                }
                                else {
                                  local_30 = param_18;
                                  uVar1 = 0x10;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1004dfac8(param_1,param_2,2,auStack_178,&local_a8,uVar1,auStack_174,0x33);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




ulong FUN_1004dfac8(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4,long param_5,
                   uint param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int local_54;
  
  uVar2 = FUN_1004dfbd4(param_1,param_2,0,param_3,1,param_7,param_8);
  if ((int)uVar2 != 0) {
    *param_4 = *(undefined4 *)(param_7 + 4);
    uVar2 = 1;
    if ((param_6 != 0) && (param_5 != 0)) {
      if (*(long *)(param_1 + 0x30) == 0) {
        local_54 = -1;
      }
      else {
        FUN_1004df2d0(*(long *)(param_1 + 0x30),0,2,&local_54);
      }
      if (local_54 < (int)param_6) {
        uVar2 = 0;
      }
      else {
        lVar5 = (long)(int)param_6;
        if ((int)param_6 < 1) {
          param_6 = 0;
        }
        uVar6 = 3;
        uVar2 = 0;
        do {
          uVar7 = uVar2;
          if (param_6 == uVar7) break;
          iVar1 = *(int *)(param_7 + (ulong)(uVar6 - 1) * 4);
          puVar4 = *(undefined8 **)(param_5 + uVar7 * 8);
          uVar3 = (*(code *)puVar4[1])
                            (*param_2 + (long)iVar1,*(int *)(param_7 + (ulong)uVar6 * 4) - iVar1,
                             *puVar4);
          uVar6 = uVar6 + 2;
          uVar2 = uVar7 + 1;
        } while ((uVar3 & 1) != 0);
        uVar2 = (ulong)(lVar5 <= (long)uVar7);
      }
    }
  }
  return uVar2;
}




int FUN_1004dfbd4(long param_1,undefined8 *param_2,undefined8 param_3,int param_4,int param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = 0x28;
  if (param_4 != 2) {
    lVar2 = 0x30;
  }
  iVar6 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    uStack_38 = 0;
    local_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    if ((int)*(uint *)(param_1 + 0x18) < 1) {
      uVar5 = 0x10;
    }
    else {
      local_60 = 2;
      uVar5 = 0x12;
      local_50 = (ulong)*(uint *)(param_1 + 0x18);
    }
    if (0 < (int)*(uint *)(param_1 + 0x1c)) {
      local_60 = uVar5;
      uStack_38 = (ulong)*(uint *)(param_1 + 0x1c);
    }
    uVar1 = *(uint *)(param_1 + 0x20) & 0x2000;
    if (param_4 != 0) {
      uVar1 = uVar1 | 0x10;
    }
    if (param_5 == 0) {
      uVar1 = uVar1 | 0x400;
    }
    pcVar3 = "";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar3 = (char *)*param_2;
    }
    iVar4 = FUN_1004da7a8(*(long *)(param_1 + lVar2),&local_60,pcVar3,*(undefined4 *)(param_2 + 1),
                          param_3,uVar1,param_6,param_7);
    if (iVar4 < 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)param_7;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar6 >> 1;
      if (iVar4 != 0) {
        iVar6 = iVar4;
      }
    }
  }
  return iVar6;
}




bool FUN_1004dfcc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}




undefined8 FUN_1004dfcd4(ulong param_1,undefined8 param_2,char *param_3)

{
  if (param_3 != (char *)0x0) {
    std::string::assign(param_3,param_1);
  }
  return 1;
}




undefined8 FUN_1004dfcd8(ulong param_1,undefined8 param_2,char *param_3)

{
  std::string::assign(param_3,param_1);
  return 1;
}




void FUN_1004dfd04(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1004dfd10(void)

{
  DAT_101d91150 = 0;
  DAT_101d91158 = FUN_1004dfcc8;
  DAT_101e94400 = 0;
  DAT_101e94408 = 0;
  DAT_101e943f8 = 0;
  ___cxa_atexit(PTR__string_101444190,&DAT_101e943f8,0x100000000);
  DAT_101e94410 = 0;
  DAT_101e94418 = 0;
  return;
}




void FUN_1004dfd68(ushort *param_1,byte *param_2,int param_3,int param_4)

{
  for (param_4 = param_4 * param_3; param_4 != 0; param_4 = param_4 + -1) {
    *param_1 = (*param_2 & 0xf8) << 8 | (ushort)(param_2[1] >> 2) << 5 | (ushort)(param_2[2] >> 3);
    param_2 = param_2 + 3;
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_1004dfda4(void)

{
  DAT_101e94438 = operator_new(0x18);
  DAT_101e94438[1] = 0;
  DAT_101e94438[2] = 0;
  *DAT_101e94438 = DAT_101e94438 + 1;
  DAT_101e94440 = 0;
  std::string::operator=((string *)&DAT_101e94420,(string *)&DAT_101d91198);
  return;
}




void FUN_1004dfdec(void)

{
  void *pvVar1;
  
  std::string::operator=((string *)&DAT_101e94420,(string *)&DAT_101d91198);
  pvVar1 = DAT_101e94438;
  DAT_101e94440 = 0;
  if (DAT_101e94438 != (void *)0x0) {
    FUN_1004e02a0(DAT_101e94438,*(undefined8 *)((long)DAT_101e94438 + 8));
    operator_delete(pvVar1);
  }
  DAT_101e94438 = (void *)0x0;
  return;
}




bool FUN_1004dfe44(undefined1 *param_1,void *param_2,ulong param_3,long param_4,int param_5)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  void *pvVar3;
  int iVar4;
  undefined8 **local_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  iVar4 = (int)param_3;
  if (param_2 != (void *)0x0 && iVar4 != 0) {
    puVar1 = &DAT_101e94440;
    if (param_1 != (undefined1 *)0x0) {
      puVar1 = param_1;
    }
    pvVar3 = operator_new__((ulong)(iVar4 + 1));
    *(undefined1 *)((long)pvVar3 + (param_3 & 0xffffffff)) = 0;
    _memcpy(pvVar3,param_2,param_3 & 0xffffffff);
    FUN_1004e313c(auStack_60);
    if (param_5 == 0) {
      FUN_1004e3148(auStack_60,pvVar3);
    }
    else {
      local_78 = (undefined8 ***)0x0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_1004d2494(pvVar3,param_3,&local_78,1,1);
      pppuVar2 = (undefined8 ***)local_78;
      if (-1 < local_68) {
        pppuVar2 = &local_78;
      }
      FUN_1004e3148(auStack_60,pppuVar2);
      if (local_68 < 0) {
        operator_delete(local_78);
      }
    }
    operator_delete__(pvVar3);
    FUN_1004dff8c(puVar1,auStack_60);
    if (param_4 != 0) {
      FUN_10001549c(&local_78,param_4);
      std::string::operator=((string *)&DAT_101e94420,(string *)&local_78);
      if (local_68 < 0) {
        operator_delete(local_78);
      }
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  return param_2 != (void *)0x0 && iVar4 != 0;
}

