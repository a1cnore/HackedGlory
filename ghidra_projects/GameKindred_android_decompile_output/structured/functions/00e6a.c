// functions/00e6a — 48 functions
#include "libGameKindred.h"




void FUN_00e6a068(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edd0,1,9);
  return;
}




void FUN_00e6a07c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edd0,0,9);
  return;
}




void FUN_00e6a090(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edd0,2,9);
  return;
}




void FUN_00e6a0a4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Shin_C_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e6a17c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Shin__C_02bf0150);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e6a190;
  local_40 = 3;
  FUN_00d97d24(uVar2,"Shin_C",&local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6a17c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edd8,0,9);
  return;
}




void FUN_00e6a190(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edd8,1,9);
  return;
}




void FUN_00e6a1a4(undefined8 param_1,undefined8 param_2)

{
  DAT_0320ede0 = param_1;
  DAT_0320ede8 = param_2;
  return;
}




bool FUN_00e6a1b8(void)

{
  return DAT_0320ede0 != 0;
}




void FUN_00e6a1cc(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  tm *__tp;
  long lVar3;
  undefined1 auStack_900 [8];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  time_t tStack_8e8;
  undefined1 *local_8e0;
  time_t *ptStack_8d8;
  undefined1 *puStack_8d0;
  undefined8 uStack_8c8;
  char acStack_898 [64];
  undefined1 auStack_858 [2056];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  local_8f8 = param_7;
  uStack_8f0 = param_8;
  if (DAT_0320ede0 != (code *)0x0) {
    puStack_8d0 = auStack_900;
    ptStack_8d8 = &tStack_8e8;
    uStack_8c8 = 0xffffff80fffffff0;
    local_8e0 = (undefined1 *)register0x00000008;
    iVar2 = FUN_00e6a9d0(auStack_858,0x800,param_6,&local_8e0);
    if (0 < iVar2) {
      time(&tStack_8e8);
      __tp = localtime(&tStack_8e8);
      strftime(acStack_898,0x40,"%Y-%m-%dT%H:%M:%S%z",__tp);
      (*DAT_0320ede0)(param_1,DAT_0320ede8,param_2,param_3,acStack_898,param_4,param_5,auStack_858);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6a2fc(long param_1)

{
  if (param_1 != 0) {
    FUN_00e6a50c(&DAT_0320edf0,0x100,param_1);
    return;
  }
  return;
}




void FUN_00e6a318(void)

{
  return;
}




void FUN_00e6a31c(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  FUN_00e6b798();
  uVar2 = rand();
  for (iVar1 = (int)uVar2 % 0x10 + 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar2 = rand();
  }
  uVar3 = (ulong)uVar2;
  for (puVar4 = DAT_0320eef0; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[1]) {
    uVar3 = (*(code *)*puVar4)(uVar3);
  }
  return;
}




void FUN_00e6a380(void)

{
  return;
}




void FUN_00e6a384(void)

{
  return;
}




void FUN_00e6a388(byte *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_38 = 0;
  local_30 = 0;
  iVar3 = FUN_00e6acac(param_2,"%d,%d,%d,%d",(long)&local_30 + 4,&local_30,(long)&local_38 + 4,
                       &local_38);
  if (iVar3 - 3U < 2) {
    bVar5 = 0xff;
    iVar1 = local_30._4_4_;
    if (0xfe < local_30._4_4_) {
      iVar1 = 0xff;
    }
    *param_1 = (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
    iVar1 = (int)local_30;
    if (0xfe < (int)local_30) {
      iVar1 = 0xff;
    }
    param_1[1] = (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
    iVar1 = local_38._4_4_;
    if (0xfe < local_38._4_4_) {
      iVar1 = 0xff;
    }
    param_1[2] = (byte)iVar1 & ((byte)(iVar1 >> 0x1f) ^ 0xff);
    if (iVar3 == 4) {
      iVar3 = (int)local_38;
      if (0xfe < (int)local_38) {
        iVar3 = 0xff;
      }
      bVar5 = (byte)iVar3 & ((byte)(iVar3 >> 0x1f) ^ 0xff);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    bVar5 = 0xff;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  param_1[3] = bVar5;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00e6a474(char *param_1)

{
  strlen(param_1);
  return;
}




bool FUN_00e6a488(char *param_1)

{
  if (param_1 != (char *)0x0) {
    return *param_1 == '\0';
  }
  return true;
}




undefined8 FUN_00e6a4a4(char *param_1,uint param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    sVar1 = strlen(param_1);
    if ((uint)sVar1 <= param_2) {
      uVar2 = FUN_00e6a50c(param_1 + (sVar1 & 0xffffffff),param_2 - (uint)sVar1,param_3);
      return uVar2;
    }
  }
  return 0xffffffff;
}




undefined4 FUN_00e6a50c(char *param_1,uint param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 == (char *)0x0) {
      *param_1 = '\0';
      uVar2 = 0xffffffff;
    }
    else {
      strncpy(param_1,param_3,(ulong)param_2);
      cVar1 = param_1[param_2 - 1];
      param_1[param_2 - 1] = '\0';
      uVar2 = 0;
      if (cVar1 != '\0') {
        uVar2 = 0xfffffffe;
      }
    }
  }
  return uVar2;
}




void FUN_00e6a584(char *param_1,char *param_2,ulong param_3)

{
  strncpy(param_1,param_2,param_3 & 0xffffffff);
  return;
}




int FUN_00e6a594(char *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,param_2,param_3 & 0xffffffff);
  return iVar1;
}




int FUN_00e6a59c(char *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = strncasecmp(param_1,param_2,param_3 & 0xffffffff);
  return iVar1;
}




byte * FUN_00e6a5ac(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  byte *__s1;
  
  if (*param_2 != 0) {
    uVar1 = tolower((uint)*param_2);
    sVar4 = strlen((char *)(param_2 + 1));
    __s1 = param_1;
    do {
      param_1 = __s1;
      __s1 = param_1 + 1;
      if (*param_1 == 0) {
        return (byte *)0x0;
      }
      uVar2 = tolower((uint)*param_1);
    } while ((((uVar2 ^ uVar1) & 0xff) != 0) ||
            (iVar3 = strncasecmp((char *)__s1,(char *)(param_2 + 1),sVar4 & 0xffffffff), iVar3 != 0)
            );
  }
  return param_1;
}




void FUN_00e6a640(char *param_1,char param_2,char param_3)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    uVar1 = 1;
    pcVar3 = param_1;
    do {
      if (cVar2 == param_2) {
        *pcVar3 = param_3;
      }
      pcVar3 = param_1 + uVar1;
      cVar2 = *pcVar3;
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (cVar2 != '\0');
  }
  return;
}




void FUN_00e6a678(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = 0;
  do {
    cVar3 = *param_2;
    cVar1 = 'n';
    switch(cVar3) {
    case '\0':
      *(undefined1 *)(param_1 + iVar2) = 0;
      return;
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
      goto switchD_00e6a70c_caseD_1;
    case '\a':
      cVar1 = 'a';
      break;
    case '\b':
      cVar1 = 'b';
      break;
    case '\t':
      cVar1 = 't';
      break;
    case '\n':
      break;
    case '\v':
      cVar1 = 'v';
      break;
    case '\f':
      cVar1 = 'f';
      break;
    case '\r':
      cVar1 = 'r';
      break;
    default:
      cVar1 = cVar3;
      if ((cVar3 == '\"') || (cVar3 == '\\')) break;
      goto switchD_00e6a70c_caseD_1;
    }
    cVar3 = cVar1;
    *(undefined1 *)(param_1 + iVar2) = 0x5c;
    iVar2 = iVar2 + 1;
switchD_00e6a70c_caseD_1:
    *(char *)(param_1 + iVar2) = cVar3;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  } while( true );
}




void FUN_00e6a718(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    bVar4 = *(byte *)(param_2 + (int)uVar3);
    if (bVar4 == 0x5c) {
      uVar3 = (long)(int)uVar3 + 1;
      bVar1 = *(byte *)(param_2 + uVar3);
      if (bVar1 < 0x62) {
        bVar4 = bVar1;
        if ((bVar1 != 0x22) && (bVar1 != 0x5c)) {
          if (bVar1 != 0x61) goto switchD_00e6a798_caseD_6f;
          bVar4 = 7;
        }
      }
      else {
        bVar4 = 10;
        switch(bVar1) {
        case 0x6e:
          break;
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x73:
        case 0x75:
switchD_00e6a798_caseD_6f:
          *(undefined1 *)(param_1 + iVar2) = 0x5c;
          bVar4 = *(byte *)(param_2 + uVar3);
          iVar2 = iVar2 + 1;
          break;
        case 0x72:
          bVar4 = 0xd;
          break;
        case 0x74:
          bVar4 = 9;
          break;
        case 0x76:
          bVar4 = 0xb;
          break;
        default:
          if (bVar1 == 0x62) {
            bVar4 = 8;
          }
          else {
            if (bVar1 != 0x66) goto switchD_00e6a798_caseD_6f;
            bVar4 = 0xc;
          }
        }
      }
    }
    else if (bVar4 == 0) {
      *(undefined1 *)(param_1 + iVar2) = 0;
      return;
    }
    *(byte *)(param_1 + iVar2) = bVar4;
    uVar3 = (ulong)((int)uVar3 + 1);
    iVar2 = iVar2 + 1;
  } while( true );
}




void FUN_00e6a7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puStack_60 = auStack_b0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffc8;
  local_a8 = param_2;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  __android_log_vprint(2,&DAT_01bee880,param_1,&local_70);
  iVar2 = fflush((FILE *)isgraph);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00e6a8a8(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsprintf(param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00e6a93c(void)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = auStack_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = in_x3;
  local_90 = in_x4;
  uStack_88 = in_x5;
  local_80 = in_x6;
  uStack_78 = in_x7;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6a9d0(char *param_1,uint param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = 0xffffffff;
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 == (char *)0x0) {
      *param_1 = '\0';
      uVar2 = 0xffffffff;
    }
    else {
      uStack_48 = param_4[3];
      local_50 = param_4[2];
      uStack_58 = param_4[1];
      local_60 = *param_4;
      uVar2 = vsnprintf(param_1,(ulong)param_2,param_3,&local_60);
      if (param_2 <= uVar2) {
        param_1[param_2 - 1] = '\0';
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00e6aa6c(char *param_1,ulong param_2,char *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = param_4[3];
  local_40 = param_4[2];
  uStack_48 = param_4[1];
  local_50 = *param_4;
  iVar2 = vsnprintf(param_1,param_2 & 0xffffffff,param_3,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




bool FUN_00e6aac8(char *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  
  sVar3 = strlen(param_1);
  sVar4 = strlen(param_2);
  bVar1 = false;
  if ((uint)sVar4 <= (uint)sVar3) {
    if ((param_3 & 1) == 0) {
      iVar2 = strncmp(param_1 + ((sVar3 & 0xffffffff) - (sVar4 & 0xffffffff)),param_2,
                      sVar4 & 0xffffffff);
    }
    else {
      iVar2 = strcasecmp(param_1 + ((sVar3 & 0xffffffff) - (sVar4 & 0xffffffff)),param_2);
    }
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




void FUN_00e6ab4c(char *param_1,undefined1 *param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  piVar2 = (int *)__errno();
  *piVar2 = 0;
  lVar3 = strtol(param_1,&local_40,10);
  *param_2 = 1;
  if ((lVar3 + 0x8000000000000001U < 2) && (*piVar2 == 0x22)) {
    *param_2 = 0;
  }
  if (*local_40 != '\0') {
    *param_2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6abf0(char *param_1,undefined1 *param_2)

{
  long lVar1;
  int *piVar2;
  longlong lVar3;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  piVar2 = (int *)__errno();
  *piVar2 = 0;
  lVar3 = strtoll(param_1,&local_40,10);
  *param_2 = 1;
  if ((lVar3 + 0x8000000000000001U < 2) && (*piVar2 == 0x22)) {
    *param_2 = 0;
  }
  if (*local_40 != '\0') {
    *param_2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e6ac94(char *param_1)

{
  double dVar1;
  
  dVar1 = atof(param_1);
  return (float)dVar1;
}




void FUN_00e6acac(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vsscanf(param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00e6ad40(FILE *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vfscanf(param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00e6add4(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_20;
  long local_18;
  
  lVar2 = tpidr_el0;
  local_18 = *(long *)(lVar2 + 0x28);
  uVar1 = param_3 & 0xfffffff8;
  local_20 = CONCAT44(param_2,param_2);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      *(undefined8 *)(param_1 + uVar3) = local_20;
      uVar3 = uVar3 + 8;
    } while (uVar3 < uVar1);
  }
  if (uVar1 < param_3) {
    uVar3 = (ulong)uVar1;
    do {
      *(undefined1 *)(param_1 + uVar3) = *(undefined1 *)((ulong)&local_20 | uVar3 & 7);
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6ae64(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 local_8 [8];
  
  if ((param_3 & 0xfffffff8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1 + uVar2) = param_2;
      uVar2 = uVar2 + 8;
    } while (uVar2 < (param_3 & 0xfffffff8));
    uVar1 = param_3 & 0xfffffff8;
  }
  if (uVar1 < param_3) {
    uVar2 = (ulong)uVar1;
    do {
      *(undefined1 *)(param_1 + uVar2) = *(undefined1 *)((ulong)local_8 | uVar2 & 7);
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return;
}




void FUN_00e6aecc(ulong param_1)

{
  malloc(param_1 & 0xffffffff);
  return;
}




void FUN_00e6aed4(void *param_1,ulong param_2)

{
  realloc(param_1,param_2 & 0xffffffff);
  return;
}




int FUN_00e6aee0(void *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_2,param_3 & 0xffffffff);
  return iVar1;
}




void FUN_00e6aef0(void *param_1,ulong param_2,ulong param_3,FILE *param_4)

{
  fread(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4);
  return;
}




void FUN_00e6af10(void *param_1,ulong param_2,ulong param_3,FILE *param_4)

{
  fwrite(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,param_4);
  return;
}




bool FUN_00e6af2c(char *param_1)

{
  int iVar1;
  
  iVar1 = access(param_1,0);
  return iVar1 == 0;
}




bool FUN_00e6af4c(char *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 4;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  uVar3 = 2;
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  iVar1 = access(param_1,uVar3 | uVar2);
  return iVar1 == 0;
}




void FUN_00e6af84(char *param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 local_78;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = stat(param_1,(stat *)&stack0xffffffffffffff58);
  uVar1 = 0;
  if (iVar3 != -1) {
    uVar1 = local_78;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}




void FUN_00e6afdc(FILE *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  iVar2 = vfprintf(param_1,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

