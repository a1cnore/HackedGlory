// functions/00e72 — 9 functions
#include "libGameKindred.h"




void FUN_00e721dc(undefined1 *param_1,char *param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  
  iVar1 = 0;
  if (param_4 != 1 || 2 < param_3) {
    iVar1 = param_4;
  }
  if (iVar1 == 0) {
    if (param_3 != 1) {
      uVar2 = 0;
      do {
        if (param_2[uVar2] == '\0') break;
        param_1[uVar2] = param_2[uVar2];
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3 - 1);
      goto LAB_00e72300;
    }
  }
  else {
    if (iVar1 == 1) {
      uVar4 = 1;
      *param_1 = 0x22;
      if ((1 < param_3 - 2) && (cVar5 = *param_2, cVar5 != '\0')) {
        uVar4 = 1;
        do {
          if (cVar5 == '\"') {
            if (param_3 - 3 <= uVar4) break;
            param_1[uVar4] = 0x5c;
            cVar5 = *param_2;
            uVar4 = uVar4 + 1;
          }
          param_1[uVar4] = cVar5;
          cVar5 = param_2[1];
          uVar4 = uVar4 + 1;
          if ((param_3 - 2 <= uVar4) || (param_2 = param_2 + 1, cVar5 == '\0')) break;
        } while( true );
      }
      uVar2 = uVar4 + 1;
      param_1[uVar4] = 0x22;
      goto LAB_00e72300;
    }
    if (iVar1 != 2) {
      return;
    }
    if (param_3 != 1) {
      cVar5 = *param_2;
      uVar2 = 0;
      if (cVar5 != '\0') {
        lVar3 = 0;
        uVar2 = 0;
        do {
          if (((cVar5 == '\\') || (cVar5 == '\"')) && (param_2[lVar3 + 1] == '\"')) {
            lVar3 = lVar3 + 1;
          }
          param_1[uVar2] = param_2[lVar3];
          uVar2 = uVar2 + 1;
          if (param_3 - 1 <= uVar2) break;
          lVar3 = lVar3 + 1;
          cVar5 = param_2[lVar3];
        } while (cVar5 != '\0');
      }
      goto LAB_00e72300;
    }
  }
  uVar2 = 0;
LAB_00e72300:
  param_1[uVar2] = 0;
  return;
}




long FUN_00e72308(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  char cStack_68;
  byte local_67;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e71dd0(param_1,param_2,&DAT_01e277f2,&cStack_68,0x40,param_4);
  if (iVar2 != 0) {
    if ((iVar2 < 2) || (iVar2 = toupper((uint)local_67), iVar2 != 0x58)) {
      iVar2 = 10;
    }
    else {
      iVar2 = 0x10;
    }
    param_3 = strtol(&cStack_68,(char **)0x0,iVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16]
FUN_00e723a0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  double dVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  char acStack_68 [64];
  long local_28;
  
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e71dd0(param_2,param_3,&DAT_01e277f2,acStack_68,0x40,param_4);
  if (iVar2 != 0) {
    dVar3 = strtod(acStack_68,(char **)0x0);
    uVar5 = (ulong)(uint)(float)dVar3;
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    auVar4._8_8_ = uVar6;
    auVar4._0_8_ = uVar5;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00e7241c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined2 local_2c [2];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2c[0] = 0;
  FUN_00e71dd0(param_1,param_2,&DAT_01e277f2,local_2c,2,param_4);
  uVar3 = toupper((uint)(byte)local_2c[0]);
  uVar1 = (uVar3 & 0xff) - 0x30;
  local_2c[0] = CONCAT11(local_2c[0]._1_1_,(char)uVar3);
  if (uVar1 < 0x2a) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x40400001U) == 0) {
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x21000000002U) != 0) {
        param_3 = 1;
      }
    }
    else {
      param_3 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e724d8(int param_1,char *param_2,int param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  FILE *__stream;
  FILE *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar3 = 0;
  if (((param_1 < 0) || (param_2 == (char *)0x0)) || (param_3 < 1)) goto LAB_00e72578;
  __stream = fopen(param_4,"rb");
  local_50 = __stream;
  if (__stream == (FILE *)0x0) {
LAB_00e7256c:
    *param_2 = '\0';
  }
  else {
    iVar2 = FUN_00e71ec8(&local_50,0,0,param_1,0xffffffff,param_2,param_3,0);
    fclose(__stream);
    if (iVar2 == 0) goto LAB_00e7256c;
  }
  sVar3 = strlen(param_2);
LAB_00e72578:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar3);
}




void FUN_00e725a4(undefined8 param_1,int param_2,char *param_3,int param_4,char *param_5)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  FILE *__stream;
  FILE *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar3 = 0;
  if (((param_2 < 0) || (param_3 == (char *)0x0)) || (param_4 < 1)) goto LAB_00e72648;
  __stream = fopen(param_5,"rb");
  local_50 = __stream;
  if (__stream == (FILE *)0x0) {
LAB_00e7263c:
    *param_3 = '\0';
  }
  else {
    iVar2 = FUN_00e71ec8(&local_50,param_1,0,0xffffffff,param_2,param_3,param_4,0);
    fclose(__stream);
    if (iVar2 == 0) goto LAB_00e7263c;
  }
  sVar3 = strlen(param_3);
LAB_00e72648:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar3);
}




void FUN_00e72674(code *param_1,undefined8 param_2,char *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  FILE *__stream;
  size_t sVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  byte *__s;
  int __n;
  byte *__s_00;
  undefined4 local_474;
  byte local_470 [1040];
  
  lVar2 = tpidr_el0;
  lVar9 = *(long *)(lVar2 + 0x28);
  uVar8 = 0;
  if (param_1 != (code *)0x0) {
    __stream = fopen(param_3,"rb");
    uVar8 = 0;
    if (__stream != (FILE *)0x0) {
      local_470[0] = 0;
      sVar5 = strlen((char *)local_470);
      __s = local_470 + ((long)((sVar5 << 0x20) + 0x100000000) >> 0x20);
      __n = 0x3ff - (int)sVar5;
      pcVar6 = fgets((char *)__s,__n,__stream);
      if (pcVar6 != (char *)0x0) {
LAB_00e72710:
        pbVar7 = __s;
LAB_00e72718:
        do {
          __s_00 = pbVar7;
          bVar1 = *__s_00;
          pbVar7 = __s_00 + 1;
        } while (bVar1 - 1 < 0x20);
        if ((0x3b < bVar1) || ((1L << ((ulong)bVar1 & 0x3f) & 0x800000800000001U) == 0)) {
          pcVar6 = strchr((char *)__s_00,0x5d);
          if ((bVar1 == 0x5b) && (pcVar6 != (char *)0x0)) goto LAB_00e72840;
          pbVar7 = (byte *)strchr((char *)__s_00,0x3d);
          if ((pbVar7 != (byte *)0x0) ||
             (pbVar7 = (byte *)strchr((char *)__s_00,0x3a), pbVar7 != (byte *)0x0)) {
            *pbVar7 = 0;
            sVar5 = strlen((char *)__s_00);
            pbVar3 = __s_00 + sVar5;
            do {
              pbVar10 = pbVar3;
              if (pbVar10 <= __s_00) break;
              pbVar3 = pbVar10 + -1;
            } while (pbVar10[-1] - 1 < 0x20);
            *pbVar10 = 0;
            FUN_00e721dc(__s,__s_00,(long)__n,0);
            sVar5 = strlen((char *)__s);
            do {
              pbVar7 = pbVar7 + 1;
            } while (*pbVar7 - 1 < 0x20);
            iVar4 = (int)sVar5 + 1;
            uVar8 = FUN_00e728d0(pbVar7,&local_474);
            FUN_00e721dc(__s + iVar4,uVar8,(long)(__n - iVar4),local_474);
            iVar4 = (*param_1)(local_470,__s,__s + iVar4,param_2);
            if (iVar4 == 0) goto LAB_00e7288c;
          }
        }
        pcVar6 = fgets((char *)__s,__n,__stream);
        pbVar7 = __s;
        if (pcVar6 == (char *)0x0) goto LAB_00e7288c;
        goto LAB_00e72718;
      }
LAB_00e7288c:
      fclose(__stream);
      uVar8 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
LAB_00e72840:
  *pcVar6 = '\0';
  FUN_00e721dc(local_470,__s_00 + 1,0x400,0);
  sVar5 = strlen((char *)local_470);
  __s = local_470 + ((long)((sVar5 << 0x20) + 0x100000000) >> 0x20);
  __n = 0x3ff - (int)sVar5;
  pcVar6 = fgets((char *)__s,__n,__stream);
  if (pcVar6 == (char *)0x0) goto LAB_00e7288c;
  goto LAB_00e72710;
}




byte * FUN_00e728d0(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  bVar2 = false;
  pbVar4 = param_1;
  do {
    bVar1 = *pbVar4;
    pbVar5 = pbVar4;
    if (bVar1 < 0x3b) {
      if (bVar1 == 0x22) {
        pbVar5 = pbVar4 + 1;
        if (*pbVar5 != 0x22) {
          bVar2 = !bVar2;
          pbVar5 = pbVar4;
        }
      }
      else if (bVar1 == 0x23) {
LAB_00e72900:
        if (!bVar2) break;
      }
      else if (bVar1 == 0) break;
    }
    else if (bVar1 == 0x5c) {
      pbVar5 = pbVar4 + 1;
      if (pbVar4[1] != 0x22) {
        pbVar5 = pbVar4;
      }
    }
    else if (bVar1 == 0x3b) goto LAB_00e72900;
    pbVar4 = pbVar5 + 1;
  } while( true );
  *pbVar4 = 0;
  sVar3 = strlen((char *)param_1);
  pbVar4 = param_1 + sVar3;
  do {
    pbVar5 = pbVar4;
    if (pbVar5 <= param_1) break;
    pbVar4 = pbVar5 + -1;
  } while (pbVar5[-1] - 1 < 0x20);
  *pbVar5 = 0;
  *param_2 = 0;
  if (*param_1 == 0x22) {
    sVar3 = strlen((char *)param_1);
    pbVar4 = param_1 + sVar3;
    if ((pbVar4 != (byte *)0x0) && (pbVar4[-1] == 0x22)) {
      param_1 = param_1 + 1;
      pbVar4[-1] = 0;
      *param_2 = 2;
    }
  }
  return param_1;
}




void FUN_00e729e0(char *param_1,char *param_2,char *param_3,char *param_4)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long __off;
  long lVar8;
  size_t sVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  FILE *__stream;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  int local_494;
  long local_490;
  long local_488;
  FILE *local_480;
  undefined8 local_478;
  byte abStack_470 [1040];
  
  lVar2 = tpidr_el0;
  lVar14 = *(long *)(lVar2 + 0x28);
  local_478 = fopen(param_4,"rb");
  bVar3 = param_2 != (char *)0x0;
  bVar4 = param_3 != (char *)0x0;
  if (local_478 == (FILE *)0x0) {
    if (bVar3 && bVar4) {
      local_480 = fopen(param_4,"wb");
      uVar13 = 0;
      if (local_480 == (FILE *)0x0) goto LAB_00e73044;
      FUN_00e73078(abStack_470,param_1,&local_480);
      FUN_00e730f0(abStack_470,param_2,param_3,&local_480);
      __stream = local_480;
      goto LAB_00e72f1c;
    }
  }
  else {
    if (bVar3 && bVar4) {
      __off = ftell(local_478);
      local_488 = __off;
      iVar6 = FUN_00e71ec8(&local_478,param_1,param_2,0xffffffff,0xffffffff,abStack_470,0x400,
                           &local_490);
      if (iVar6 != 0) {
        iVar6 = strcmp((char *)abStack_470,param_3);
        __stream = local_478;
        if (iVar6 != 0) {
          lVar8 = ftell(local_478);
          FUN_00e730f0(abStack_470,param_2,param_3,0);
          sVar9 = strlen((char *)abStack_470);
          if (sVar9 != lVar8 - local_490) goto LAB_00e72b54;
          fclose(local_478);
          local_480 = fopen(param_4,"r+b");
          uVar13 = 0;
          if (local_480 == (FILE *)0x0) goto LAB_00e73044;
          fseek(local_480,local_490,0);
          fputs((char *)abStack_470,local_480);
          __stream = local_480;
        }
LAB_00e72f1c:
        fclose(__stream);
        goto LAB_00e73040;
      }
LAB_00e72b54:
      fseek(local_478,__off,0);
    }
    FUN_00e721dc(abStack_470,param_4,0x400,0);
    sVar9 = strlen((char *)abStack_470);
    abStack_470[sVar9 - 1] = 0x7e;
    local_480 = fopen((char *)abStack_470,"wb");
    if (local_480 == (FILE *)0x0) {
      fclose(local_478);
      uVar13 = 0;
      goto LAB_00e73044;
    }
    local_488 = ftell(local_478);
    local_494 = 0;
    if (param_1 == (char *)0x0) {
LAB_00e72d20:
      FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
      if (param_2 == (char *)0x0) {
        fgets((char *)abStack_470,0x400,local_478);
        local_488 = ftell(local_478);
LAB_00e72d80:
        iVar6 = 0;
      }
      else {
        if (param_2 == (char *)0x0) goto LAB_00e72d80;
        sVar9 = strlen(param_2);
        iVar6 = (int)sVar9;
      }
      pcVar10 = fgets((char *)abStack_470,0x400,local_478);
      if (pcVar10 != (char *)0x0) {
        pbVar11 = abStack_470;
        do {
          do {
            pbVar15 = pbVar11;
            bVar1 = *pbVar15;
            pbVar11 = pbVar15 + 1;
          } while (bVar1 - 1 < 0x20);
          pbVar11 = (byte *)strchr((char *)pbVar15,0x3d);
          if (pbVar11 == (byte *)0x0) {
            pbVar11 = (byte *)strchr((char *)pbVar15,0x3a);
          }
          if ((iVar6 < 1) || (pbVar11 == (byte *)0x0)) {
LAB_00e72e9c:
            if (bVar1 == 0x5b) {
LAB_00e72f24:
              FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
              if (bVar3 && bVar4) {
                FUN_00e730f0(abStack_470,param_2,param_3,&local_480);
              }
              fgets((char *)abStack_470,0x400,local_478);
              if (bVar1 != 0x5b) {
                local_488 = ftell(local_478);
                goto LAB_00e72fa4;
              }
              sVar9 = strlen((char *)abStack_470);
              iVar6 = local_494 + (int)sVar9;
              do {
                if (0x3ff < iVar6) goto LAB_00e72fa4;
                do {
                  local_494 = iVar6;
LAB_00e72fa4:
                  pcVar10 = fgets((char *)abStack_470,0x400,local_478);
                  if (pcVar10 == (char *)0x0) {
                    FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
                    goto LAB_00e7302c;
                  }
                  sVar9 = strlen((char *)abStack_470);
                  iVar6 = local_494 + (int)sVar9;
                } while (iVar6 < 0x400);
                FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
                fgets((char *)abStack_470,0x400,local_478);
                sVar9 = strlen((char *)abStack_470);
                iVar6 = local_494 + (int)sVar9;
              } while( true );
            }
          }
          else {
            do {
              pbVar12 = pbVar11;
              if (pbVar12 <= pbVar15) break;
              pbVar11 = pbVar12 + -1;
            } while (pbVar12[-1] - 1 < 0x20);
            if (iVar6 != (int)pbVar12 - (int)pbVar15) goto LAB_00e72e9c;
            iVar7 = strncasecmp((char *)pbVar15,param_2,(long)iVar6);
            if ((bVar1 == 0x5b) || (param_2 != (char *)0x0 && iVar7 == 0)) goto LAB_00e72f24;
          }
          if (param_2 == (char *)0x0) {
            local_488 = ftell(local_478);
          }
          else {
            sVar9 = strlen((char *)abStack_470);
            iVar7 = local_494 + (int)sVar9;
            if (0x3ff < iVar7) {
              FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
              fgets((char *)abStack_470,0x400,local_478);
              sVar9 = strlen((char *)abStack_470);
              iVar7 = local_494 + (int)sVar9;
              if (0x3ff < iVar7) goto LAB_00e72eb4;
            }
            local_494 = iVar7;
          }
LAB_00e72eb4:
          pcVar10 = fgets((char *)abStack_470,0x400,local_478);
          pbVar11 = abStack_470;
        } while (pcVar10 != (char *)0x0);
      }
      iVar6 = FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
      if (bVar3 && bVar4) {
        if (iVar6 == 0) {
          fputs("\n",local_480);
        }
LAB_00e72f00:
        FUN_00e730f0(abStack_470,param_2,param_3,&local_480);
      }
    }
    else {
      sVar9 = strlen(param_1);
      iVar6 = (int)sVar9;
      if (iVar6 < 1) goto LAB_00e72d20;
      pcVar10 = fgets((char *)abStack_470,0x400,local_478);
      if (pcVar10 != (char *)0x0) {
        pbVar11 = abStack_470;
        do {
          do {
            pbVar15 = pbVar11;
            bVar1 = *pbVar15;
            pbVar11 = pbVar15 + 1;
          } while (bVar1 - 1 < 0x20);
          pcVar10 = strchr((char *)pbVar15,0x5d);
          if (bVar1 == 0x5b) {
            bVar5 = false;
            if ((pcVar10 == (char *)0x0) ||
               (bVar5 = false, ((int)pcVar10 - (int)pbVar15) + -1 != iVar6)) goto LAB_00e72c60;
            iVar7 = strncasecmp((char *)(pbVar15 + 1),param_1,(long)iVar6);
            bVar5 = iVar7 == 0;
            if ((param_2 != (char *)0x0) || (iVar7 != 0)) goto LAB_00e72c60;
          }
          else {
            bVar5 = false;
LAB_00e72c60:
            sVar9 = strlen((char *)abStack_470);
            iVar7 = local_494 + (int)sVar9;
            if (0x3ff < iVar7) {
              FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
              fgets((char *)abStack_470,0x400,local_478);
              sVar9 = strlen((char *)abStack_470);
              iVar7 = local_494 + (int)sVar9;
              if (0x3ff < iVar7) goto LAB_00e72cbc;
            }
            local_494 = iVar7;
          }
LAB_00e72cbc:
          if (bVar5) goto LAB_00e72d20;
          pcVar10 = fgets((char *)abStack_470,0x400,local_478);
          pbVar11 = abStack_470;
        } while (pcVar10 != (char *)0x0);
      }
      iVar6 = FUN_00e731c8(abStack_470,&local_494,&local_478,&local_480,&local_488);
      if (bVar3 && bVar4) {
        if (iVar6 == 0) {
          fputs("\n",local_480);
        }
        FUN_00e73078(abStack_470,param_1,&local_480);
        goto LAB_00e72f00;
      }
    }
LAB_00e7302c:
    FUN_00e732dc(&local_478,&local_480,param_4,abStack_470);
  }
LAB_00e73040:
  uVar13 = 1;
LAB_00e73044:
  if (*(long *)(lVar2 + 0x28) != lVar14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}

