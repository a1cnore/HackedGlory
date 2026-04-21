// functions/10110 — 210 functions
#include "GameKindred.h"




void FUN_101100124(long param_1)

{
  FUN_101102f0c(param_1 + 0x3c8);
  FUN_101102f0c(param_1 + 1000);
  FUN_101100350(param_1);
  return;
}




undefined8 FUN_101100154(long *param_1,int param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 local_50;
  long local_48;
  
  local_50 = 0;
  local_48 = 0;
  lVar8 = *param_1 + 0x89f0;
  plVar2 = param_1 + 0x79;
  plVar3 = param_1 + 0x2f;
  plVar4 = param_1 + 0x2e;
  plVar5 = param_1 + 0x68;
  if (param_2 != 0) {
    lVar8 = *param_1 + 0x8a10;
    plVar2 = param_1 + 0x7d;
    plVar3 = param_1 + 0x33;
    plVar4 = param_1 + 0x32;
    plVar5 = param_1 + 0x65;
  }
  pcVar9 = (char *)*plVar3;
  pcVar10 = (char *)*plVar4;
  *(undefined1 *)(lVar8 + 0x18) = 0;
  pcVar1 = "";
  if (pcVar10 != (char *)0x0) {
    pcVar1 = pcVar10;
  }
  pcVar10 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar10 = pcVar9;
  }
  if ((int)*plVar2 == 2) {
    uVar6 = FUN_1011014f8();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (local_48 == 0) {
      return 0;
    }
    if (*plVar5 != 0) {
      (*(code *)PTR__free_101873628)();
      *plVar5 = 0;
    }
    lVar7 = FUN_1010e7298("%sAuthorization: NTLM %s\r\n");
    *plVar5 = lVar7;
    (*(code *)PTR__free_101873628)(local_48);
    if (*plVar5 == 0) {
      return 0x1b;
    }
    *(int *)plVar2 = 3;
  }
  else {
    if ((int)*plVar2 != 3) {
      uVar6 = FUN_101101424(pcVar1,pcVar10,plVar2,&local_48,&local_50);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (local_48 == 0) {
        return 0;
      }
      if (*plVar5 != 0) {
        (*(code *)PTR__free_101873628)();
        *plVar5 = 0;
      }
      lVar8 = FUN_1010e7298("%sAuthorization: NTLM %s\r\n");
      *plVar5 = lVar8;
      (*(code *)PTR__free_101873628)(local_48);
      if (*plVar5 != 0) {
        return 0;
      }
      return 0x1b;
    }
    if (*plVar5 != 0) {
      (*(code *)PTR__free_101873628)();
      *plVar5 = 0;
    }
  }
  *(undefined1 *)(lVar8 + 0x18) = 1;
  return 0;
}




void FUN_101100350(long param_1)

{
  pid_t pVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x408) != -1) {
    _close();
    *(undefined4 *)(param_1 + 0x408) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x40c) != 0) {
    pVar1 = _waitpid(*(int *)(param_1 + 0x40c),(int *)0x0,1);
    if (pVar1 != *(int *)(param_1 + 0x40c)) {
      iVar4 = 0;
      do {
        piVar2 = ___error();
        if (*piVar2 == 10) break;
        if (iVar4 == 2) {
          pVar1 = *(pid_t *)(param_1 + 0x40c);
          iVar3 = 9;
LAB_1011003e0:
          _kill(pVar1,iVar3);
        }
        else if (iVar4 == 1) {
          FUN_1010f370c(1);
        }
        else {
          if (iVar4 == 0) {
            pVar1 = *(pid_t *)(param_1 + 0x40c);
            iVar3 = 0xf;
            goto LAB_1011003e0;
          }
          if (3 < iVar4 + 1) break;
        }
        iVar4 = iVar4 + 1;
        pVar1 = _waitpid(*(pid_t *)(param_1 + 0x40c),(int *)0x0,1);
      } while (pVar1 != *(int *)(param_1 + 0x40c));
    }
    *(undefined4 *)(param_1 + 0x40c) = 0;
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  *(undefined8 *)(param_1 + 0x410) = 0;
  if (*(long *)(param_1 + 0x418) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x418) = 0;
  }
  *(undefined8 *)(param_1 + 0x418) = 0;
  return;
}




undefined8 FUN_101100464(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uid_t uVar4;
  int iVar5;
  pid_t pVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  long lVar13;
  long local_4c0;
  char *local_4b8 [9];
  undefined1 auStack_470 [1024];
  int local_70;
  int local_6c;
  long local_68;
  
  lVar13 = *(long *)PTR____stack_chk_guard_101444218;
  lVar10 = *param_1 + 0x89f0;
  plVar1 = param_1 + 0x79;
  plVar2 = param_1 + 0x2e;
  plVar3 = param_1 + 0x68;
  if (param_2 != 0) {
    lVar10 = *param_1 + 0x8a10;
    plVar1 = param_1 + 0x7d;
    plVar2 = param_1 + 0x32;
    plVar3 = param_1 + 0x65;
  }
  pcVar12 = (char *)*plVar2;
  *(undefined1 *)(lVar10 + 0x18) = 0;
  pcVar9 = "";
  if (pcVar12 != (char *)0x0) {
    pcVar9 = pcVar12;
  }
  local_68 = lVar13;
  if ((int)*plVar1 == 2) {
    lVar7 = FUN_1010e7298("TT %s\n");
    if (lVar7 == 0) {
      uVar8 = 0x1b;
    }
    else {
      uVar8 = FUN_101100a08(param_1,lVar7,(int)*plVar1);
      (*(code *)PTR__free_101873628)(lVar7);
      if ((int)uVar8 == 0) {
        if (*plVar3 != 0) {
          (*(code *)PTR__free_101873628)();
          *plVar3 = 0;
        }
        lVar7 = FUN_1010e7298("%sAuthorization: %s\r\n");
        *plVar3 = lVar7;
        *(int *)plVar1 = 3;
        *(undefined1 *)(lVar10 + 0x18) = 1;
        FUN_101100350(param_1);
        uVar8 = 0;
      }
    }
    goto LAB_101100894;
  }
  if ((int)*plVar1 == 3) {
    if (*plVar3 != 0) {
      (*(code *)PTR__free_101873628)();
      *plVar3 = 0;
    }
    uVar8 = 0;
    *(undefined1 *)(lVar10 + 0x18) = 1;
    goto LAB_101100894;
  }
  if (((int)param_1[0x81] == -1) && (*(int *)((long)param_1 + 0x40c) == 0)) {
    if (*pcVar9 == '\0') {
      pcVar12 = _getenv("NTLMUSER");
      if (((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) &&
         ((pcVar12 = _getenv("LOGNAME"), pcVar12 == (char *)0x0 || (*pcVar12 == '\0')))) {
        pcVar12 = _getenv("USER");
        if (pcVar12 == (char *)0x0) {
          pcVar12 = (char *)0x0;
        }
        else if (*pcVar12 != '\0') goto LAB_101100694;
        uVar4 = _geteuid();
        iVar5 = _getpwuid_r(uVar4,local_4b8,auStack_470,0x400,&local_4c0);
        if (iVar5 == 0 && local_4c0 != 0) {
          pcVar12 = local_4b8[0];
        }
        if ((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) goto LAB_101100690;
      }
    }
    else {
LAB_101100690:
      pcVar12 = pcVar9;
    }
LAB_101100694:
    pcVar9 = _strpbrk(pcVar12,"\\/");
    if (pcVar9 == (char *)0x0) {
      lVar10 = 0;
LAB_1011006dc:
      iVar5 = _access("/usr/bin/ntlm_auth",1);
      if (iVar5 == 0) {
        iVar5 = _socketpair(1,1,0,&local_70);
        if (iVar5 == 0) {
          pVar6 = _fork();
          if (pVar6 == 0) {
            _close(local_70);
            iVar5 = _dup2(local_6c,0);
            if (iVar5 == -1) {
              piVar11 = ___error();
              lVar10 = *param_1;
              FUN_1010f2ce0(param_1,*piVar11);
              pcVar9 = "Could not redirect child stdin. errno %d: %s";
            }
            else {
              iVar5 = _dup2(local_6c,1);
              if (iVar5 == -1) {
                piVar11 = ___error();
                lVar10 = *param_1;
                FUN_1010f2ce0(param_1,*piVar11);
                pcVar9 = "Could not redirect child stdout. errno %d: %s";
              }
              else {
                _execl("/usr/bin/ntlm_auth","/usr/bin/ntlm_auth");
                piVar11 = ___error();
                iVar5 = *piVar11;
                _close(local_6c);
                lVar10 = *param_1;
                FUN_1010f2ce0(param_1,iVar5);
                pcVar9 = "Could not execl(). errno %d: %s";
              }
            }
            FUN_1010d9258(lVar10,pcVar9);
                    /* WARNING: Subroutine does not return */
            _exit(1);
          }
          if (pVar6 != -1) {
            _close(local_6c);
            *(int *)(param_1 + 0x81) = local_70;
            *(pid_t *)((long)param_1 + 0x40c) = pVar6;
            if (lVar10 != 0) {
              (*(code *)PTR__free_101873628)(lVar10);
            }
            goto LAB_101100808;
          }
          piVar11 = ___error();
          iVar5 = *piVar11;
          _close(local_70);
          _close(local_6c);
          lVar7 = *param_1;
          FUN_1010f2ce0(param_1,iVar5);
          pcVar9 = "Could not fork. errno %d: %s";
        }
        else {
          piVar11 = ___error();
          lVar7 = *param_1;
          FUN_1010f2ce0(param_1,*piVar11);
          pcVar9 = "Could not open socket pair. errno %d: %s";
        }
      }
      else {
        piVar11 = ___error();
        lVar7 = *param_1;
        FUN_1010f2ce0(param_1,*piVar11);
        pcVar9 = "Could not access ntlm_auth: %s errno %d: %s";
      }
      FUN_1010d9258(lVar7,pcVar9);
      if (lVar10 != 0) {
        (*(code *)PTR__free_101873628)(lVar10);
      }
      uVar8 = 9;
    }
    else {
      lVar10 = (*(code *)PTR__strdup_101873638)(pcVar12);
      if (lVar10 != 0) {
        pcVar9[lVar10 - (long)pcVar12] = '\0';
        goto LAB_1011006dc;
      }
      uVar8 = 0x1b;
    }
  }
  else {
LAB_101100808:
    uVar8 = 0;
  }
  if (((int)uVar8 == 0) && (uVar8 = FUN_101100a08(param_1,"YR\n",(int)*plVar1), (int)uVar8 == 0)) {
    if (*plVar3 != 0) {
      (*(code *)PTR__free_101873628)();
      *plVar3 = 0;
    }
    lVar10 = FUN_1010e7298("%sAuthorization: %s\r\n");
    *plVar3 = lVar10;
    if (param_1[0x83] != 0) {
      (*(code *)PTR__free_101873628)();
      param_1[0x83] = 0;
    }
    uVar8 = 0;
    param_1[0x83] = 0;
  }
LAB_101100894:
  if (lVar13 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}




undefined8 FUN_101100a08(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  pcVar1 = (char *)(*(code *)PTR__malloc_101873620)(0x400);
  sVar2 = _strlen(param_2);
  if (pcVar1 != (char *)0x0) {
    for (; sVar2 != 0; sVar2 = sVar2 - sVar3) {
      while (sVar3 = _send(*(int *)(param_1 + 0x408),param_2,sVar2,0), sVar3 == -1) {
        piVar4 = ___error();
        if (*piVar4 != 4) goto LAB_101100bf8;
      }
      param_2 = param_2 + sVar3;
    }
    uVar7 = 0;
    pcVar5 = pcVar1;
    do {
      pcVar1 = pcVar5;
      while( true ) {
        sVar3 = _recv(*(int *)(param_1 + 0x408),pcVar1 + uVar7,0x400,0);
        if (sVar3 == 0) goto LAB_101100bf8;
        if (sVar3 != -1) break;
        piVar4 = ___error();
        if (*piVar4 != 4) goto LAB_101100bf8;
      }
      uVar7 = sVar3 + uVar7;
      if (pcVar1[uVar7 - 1] == '\n') {
        pcVar1[uVar7 - 1] = '\0';
        if ((((param_3 == 1) && (uVar7 == 3)) && (*pcVar1 == 'P')) && (pcVar1[1] == 'W')) {
          return 9;
        }
        if (uVar7 < 4) goto LAB_101100bf8;
        if (param_3 == 1) {
          if ((*pcVar1 != 'Y') || (pcVar1[1] != 'R')) goto LAB_101100bf8;
        }
        else {
          if (param_3 != 2) goto LAB_101100bc0;
          if (*pcVar1 == 'A') {
            if (pcVar1[1] != 'F') goto LAB_101100bf8;
          }
          else if ((*pcVar1 != 'K') || (pcVar1[1] != 'K')) goto LAB_101100bf8;
        }
        if (pcVar1[2] == ' ') {
LAB_101100bc0:
          uVar6 = FUN_1010e7298("NTLM %.*s");
          *(undefined8 *)(param_1 + 0x418) = uVar6;
          (*(code *)PTR__free_101873628)(pcVar1);
          return 0;
        }
LAB_101100bf8:
        (*(code *)PTR__free_101873628)(pcVar1);
        return 9;
      }
      pcVar5 = (char *)(*(code *)PTR__realloc_101873630)(pcVar1,uVar7 + 0x400);
    } while (pcVar5 != (char *)0x0);
    (*(code *)PTR__free_101873628)(pcVar1);
  }
  return 0x1b;
}




void FUN_101100c28(long param_1,undefined8 param_2,long param_3)

{
  FUN_101100c80(param_2,param_3,param_1);
  FUN_101100c80(param_2,param_3 + 8,param_1 + 7);
  FUN_101100c80(param_2,param_3 + 0x10,param_1 + 0xe);
  return;
}




void FUN_101100c80(void *param_1,void *param_2,char *param_3)

{
  CCCryptorStatus CVar1;
  long lVar2;
  size_t sStack_38;
  char local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  char local_29;
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_30 = *param_3;
  local_2f = (byte)param_3[1] >> 1 | local_30 << 7;
  local_2e = (byte)param_3[2] >> 2 | param_3[1] << 6;
  local_2d = (byte)param_3[3] >> 3 | param_3[2] << 5;
  local_2c = (byte)param_3[4] >> 4 | param_3[3] << 4;
  local_2b = (byte)param_3[5] >> 5 | param_3[4] << 3;
  local_2a = (byte)param_3[6] >> 6 | param_3[5] << 2;
  local_29 = param_3[6] << 1;
  local_28 = lVar2;
  CVar1 = _CCCrypt(0,1,2,&local_30,8,(void *)0x0,param_1,8,param_2,8,&sStack_38);
  if (lVar2 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(CVar1);
}




undefined8 FUN_101100d68(undefined8 param_1,char *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  undefined1 auStack_56 [7];
  undefined1 auStack_4f [7];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  sVar1 = _strlen(param_2);
  if (0xd < sVar1) {
    sVar1 = 0xe;
  }
  FUN_1010f66c4(auStack_56,param_2,sVar1);
  _bzero(auStack_56 + sVar1,0xe - sVar1);
  FUN_101100c80(&DAT_1013cd662,param_3,auStack_56);
  FUN_101100c80(&DAT_1013cd662,param_3 + 8,auStack_4f);
  *(undefined1 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  if (lVar2 == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_101100e28(undefined8 param_1,char *param_2,uchar *param_3)

{
  size_t sVar1;
  void *data;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  sVar1 = _strlen(param_2);
  lVar4 = sVar1 << 1;
  data = (void *)(*(code *)PTR__malloc_101873620)(lVar4);
  if (data == (void *)0x0) {
    uVar2 = 0x1b;
  }
  else {
    if (sVar1 != 0) {
      puVar3 = (undefined1 *)((long)data + 1);
      do {
        puVar3[-1] = *param_2;
        *puVar3 = 0;
        sVar1 = sVar1 - 1;
        puVar3 = puVar3 + 2;
        param_2 = param_2 + 1;
      } while (sVar1 != 0);
    }
    _CC_MD4(data,(CC_LONG)lVar4,param_3);
    param_3[0x14] = '\0';
    param_3[0x10] = '\0';
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    (*(code *)PTR__free_101873628)(data);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8
FUN_101100edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1010fef08(&PTR__CC_MD5_Init_10182f390,param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_1010ff0a8(lVar1,param_3,param_4);
    FUN_1010ff0c8(lVar1,param_5);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8
FUN_101100f54(char *param_1,long param_2,undefined1 *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  __darwin_ct_rune_t _Var1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (param_4 + param_2) * 2;
  lVar2 = (*(code *)PTR__malloc_101873620)(lVar5);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    if (param_2 != 0) {
      puVar4 = (undefined1 *)(lVar2 + 1);
      lVar6 = param_2;
      do {
        _Var1 = ___toupper((int)*param_1);
        puVar4[-1] = (char)_Var1;
        *puVar4 = 0;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 2;
        param_1 = param_1 + 1;
      } while (lVar6 != 0);
    }
    if (param_4 != 0) {
      puVar4 = (undefined1 *)(lVar2 + param_2 * 2 + 1);
      do {
        puVar4[-1] = *param_3;
        *puVar4 = 0;
        param_4 = param_4 + -1;
        puVar4 = puVar4 + 2;
        param_3 = param_3 + 1;
      } while (param_4 != 0);
    }
    uVar3 = FUN_1010feedc(lVar5);
    uVar3 = FUN_101100edc(param_5,0x10,lVar2,uVar3,param_6);
    (*(code *)PTR__free_101873628)(lVar2);
  }
  return uVar3;
}




undefined8
FUN_101101058(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,uint *param_5)

{
  uint uVar1;
  time_t tVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar5;
  tVar2 = _time((time_t *)0x0);
  uVar1 = *(int *)(param_3 + 0x18) + 0x30;
  puVar3 = (undefined8 *)(*(code *)PTR__malloc_101873620)((ulong)uVar1);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = 0x1b;
  }
  else {
    _bzero(puVar3,(ulong)uVar1);
    FUN_1010e7270(puVar3 + 2,*(int *)(param_3 + 0x18) + 0x20,&DAT_1013cd66a);
    FUN_101104d4c(tVar2 * 10000000 + 0x19db1ded53e8000,puVar3 + 3);
    puVar3[4] = *param_2;
    _memcpy((void *)((long)puVar3 + 0x2c),*(void **)(param_3 + 0x10),
            (ulong)*(uint *)(param_3 + 0x18));
    puVar3[1] = *(undefined8 *)(param_3 + 8);
    uVar4 = FUN_101100edc(param_1,0x10,puVar3 + 1,*(int *)(param_3 + 0x18) + 0x28,&local_78);
    if ((int)uVar4 == 0) {
      uVar4 = 0;
      puVar3[1] = uStack_70;
      *puVar3 = local_78;
      *param_4 = puVar3;
      *param_5 = uVar1;
    }
    else {
      (*(code *)PTR__free_101873628)(puVar3);
    }
  }
  if (lVar5 == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1011011cc(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = *param_3;
  local_40 = *param_2;
  local_38 = lVar2;
  iVar1 = FUN_101100edc(param_1,0x10,&local_48,0x10,&local_58);
  if (iVar1 == 0) {
    param_4[1] = uStack_50;
    *param_4 = local_58;
    param_4[2] = *param_2;
  }
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_101101254(undefined8 param_1,char *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  size_t sVar6;
  void *pvVar7;
  char *pcVar8;
  ulong local_50;
  long *local_48;
  
  local_50 = 0;
  local_48 = (long *)0x0;
  if ((*param_2 != '\0') && (*param_2 != '=')) {
    uVar5 = FUN_1010d0ef8(param_2,&local_48,&local_50);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_48 != (long *)0x0) {
      *(undefined4 *)(param_3 + 4) = 0;
      if (((local_50 < 0x20) || (*local_48 != 0x5053534d4c544e)) || ((int)local_48[1] != 2)) {
        (*(code *)PTR__free_101873628)();
        pcVar8 = "NTLM handshake failure (bad type-2 message)\n";
        goto LAB_101101308;
      }
      uVar3 = FUN_101104d18((long)local_48 + 0x14);
      plVar2 = local_48;
      uVar1 = local_50;
      *(undefined4 *)(param_3 + 4) = uVar3;
      *(long *)(param_3 + 8) = local_48[3];
      if (-1 < *(char *)(param_3 + 6)) goto LAB_1011013c4;
      if (local_50 < 0x30) {
LAB_1011013bc:
        sVar6 = 0;
      }
      else {
        sVar6 = FUN_101104d04(local_48 + 5);
        uVar4 = FUN_101104d18((long)plVar2 + 0x2c);
        if ((int)sVar6 == 0) goto LAB_1011013bc;
        if ((uVar4 < 0x30) || (uVar1 < uVar4 + (int)sVar6)) {
          FUN_1010d909c(param_1,
                        "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by the peer\n"
                       );
          uVar5 = 0x3d;
LAB_1011013fc:
          (*(code *)PTR__free_101873628)(local_48);
          FUN_1010d909c(param_1,"NTLM handshake failure (bad type-2 message)\n");
          return uVar5;
        }
        pvVar7 = (void *)(*(code *)PTR__malloc_101873620)(sVar6);
        *(void **)(param_3 + 0x10) = pvVar7;
        if (pvVar7 == (void *)0x0) {
          uVar5 = 0x1b;
          goto LAB_1011013fc;
        }
        _memcpy(pvVar7,(void *)((long)plVar2 + (ulong)uVar4),sVar6);
      }
      *(int *)(param_3 + 0x18) = (int)sVar6;
LAB_1011013c4:
      (*(code *)PTR__free_101873628)(local_48);
      return 0;
    }
  }
  pcVar8 = "NTLM handshake failure (empty type-2 message)\n";
LAB_101101308:
  FUN_1010d909c(param_1,pcVar8);
  return 0x3d;
}




void FUN_101101424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar1;
  FUN_101102f0c(param_3);
  FUN_1010e7270(auStack_438,0x400,"NTLMSSP%c\x01%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%s%s")
  ;
  FUN_1010d10fc(0,auStack_438,0x20,param_4,param_5);
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1011014f8(undefined8 param_1,char *param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uchar *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  size_t sVar14;
  ulong uVar15;
  char *pcVar16;
  undefined4 *local_978;
  uint local_970;
  undefined4 *local_958;
  uint local_94c;
  undefined1 auStack_948 [24];
  undefined1 auStack_930 [24];
  uchar auStack_918 [16];
  undefined8 local_908;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined1 auStack_8ec [24];
  undefined1 auStack_8d4 [24];
  undefined4 local_8bc;
  undefined4 local_8b8;
  undefined1 auStack_8b1 [24];
  char acStack_899 [1025];
  undefined4 auStack_498 [6];
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 auStack_460 [127];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  local_94c = 0x18;
  local_958 = (undefined4 *)0x0;
  uVar3 = *(uint *)(param_4 + 4);
  _bzero(acStack_899,0x401);
  pcVar4 = _strchr(param_2,0x5c);
  if ((pcVar4 == (char *)0x0) && (pcVar4 = _strchr(param_2,0x2f), pcVar4 == (char *)0x0)) {
    uVar11 = 0;
    uVar15 = 0;
    pcVar16 = (char *)0x0;
    sVar5 = 0;
    pcVar4 = "";
    pcVar13 = param_2;
    if (param_2 != (char *)0x0) goto LAB_101101584;
  }
  else {
    uVar11 = (long)pcVar4 - (long)param_2;
    pcVar13 = pcVar4 + 1;
    pcVar4 = param_2;
LAB_101101584:
    sVar5 = _strlen(pcVar13);
    uVar15 = uVar11;
    pcVar16 = pcVar13;
  }
  iVar1 = FUN_1010ff150(acStack_899,0x401);
  if (iVar1 == 0) {
    sVar14 = _strlen(acStack_899);
  }
  else {
    FUN_1010d909c(param_1,"gethostname() failed, continuing without!\n");
    sVar14 = 0;
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    if ((*(byte *)(param_4 + 6) >> 3 & 1) == 0) {
      uVar6 = FUN_101100e28(param_1,param_3,auStack_930);
      if ((int)uVar6 != 0) goto LAB_101101a1c;
      puVar8 = (uchar *)(param_4 + 8);
      FUN_101100c28(auStack_930,puVar8,auStack_498);
      uVar6 = FUN_101100d68(param_1,param_3,auStack_948);
      if ((int)uVar6 != 0) goto LAB_101101a1c;
      puVar7 = auStack_948;
      puVar9 = &local_480;
    }
    else {
      uVar2 = FUN_101105054(param_1);
      local_8fc = FUN_101105054(param_1);
      local_470 = 0;
      uStack_478 = 0;
      local_908 = *(undefined8 *)(param_4 + 8);
      local_900 = uVar2;
      local_480 = uVar2;
      uStack_47c = local_8fc;
      _CC_MD5(&local_908,0x10,auStack_918);
      uVar6 = FUN_101100e28(param_1,param_3,auStack_8ec);
      if ((int)uVar6 != 0) goto LAB_101101a1c;
      puVar7 = auStack_8ec;
      puVar8 = auStack_918;
      puVar9 = auStack_498;
    }
    local_978 = auStack_498;
    FUN_101100c28(puVar7,puVar8,puVar9);
  }
  else {
    local_8bc = FUN_101105054(param_1);
    local_8b8 = FUN_101105054(param_1);
    uVar6 = FUN_101100e28(param_1,param_3,auStack_8b1);
    if (((((int)uVar6 != 0) ||
         (uVar6 = FUN_101100f54(pcVar16,sVar5,pcVar4,uVar15,auStack_8b1,auStack_8d4),
         (int)uVar6 != 0)) ||
        (uVar6 = FUN_1011011cc(auStack_8d4,&local_8bc,param_4 + 8,&local_480), (int)uVar6 != 0)) ||
       (uVar6 = FUN_101101058(auStack_8d4,&local_8bc,param_4,&local_958,&local_94c), (int)uVar6 != 0
       )) goto LAB_101101a1c;
    local_978 = local_958;
  }
  local_970 = uVar3 & 1;
  if ((uVar3 & 1) != 0) {
    uVar15 = uVar15 << 1;
    sVar5 = sVar5 << 1;
    sVar14 = sVar14 << 1;
  }
  uVar3 = FUN_1010e7270(&uStack_468,0x400,
                        "NTLMSSP%c\x03%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"
                       );
  uVar11 = (ulong)(int)uVar3;
  if (uVar3 < 1000) {
    *(undefined8 *)((long)auStack_460 + uVar11 + 8) = local_470;
    *(undefined8 *)((long)auStack_460 + uVar11) = uStack_478;
    *(ulong *)((long)&uStack_468 + uVar11) = CONCAT44(uStack_47c,local_480);
    uVar11 = uVar11 + 0x18;
  }
  if (uVar11 < 0x400 - local_94c) {
    _memcpy((void *)((long)&uStack_468 + uVar11),local_978,(ulong)local_94c);
    uVar11 = local_94c + uVar11;
  }
  if (local_958 != (undefined4 *)0x0) {
    (*(code *)PTR__free_101873628)();
    local_958 = (undefined4 *)0x0;
  }
  if (sVar5 + sVar14 + uVar15 + uVar11 < 0x400) {
    if (local_970 == 0) {
      _memcpy((void *)((long)&uStack_468 + uVar11),pcVar4,uVar15);
      _memcpy((void *)((long)&uStack_468 + uVar11 + uVar15),pcVar16,sVar5);
      lVar12 = uVar11 + uVar15 + sVar5;
      _memcpy((void *)((long)&uStack_468 + lVar12),acStack_899,sVar14);
    }
    else {
      uVar10 = uVar15 >> 1;
      if (uVar10 != 0) {
        puVar7 = (undefined1 *)((long)&uStack_468 + uVar11 + 1);
        do {
          puVar7[-1] = *pcVar4;
          *puVar7 = 0;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + 2;
          pcVar4 = pcVar4 + 1;
        } while (uVar10 != 0);
      }
      uVar10 = sVar5 >> 1;
      if (uVar10 != 0) {
        puVar7 = (undefined1 *)((long)&uStack_468 + uVar15 + uVar11 + 1);
        do {
          puVar7[-1] = *pcVar16;
          *puVar7 = 0;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + 2;
          pcVar16 = pcVar16 + 1;
        } while (uVar10 != 0);
      }
      lVar12 = uVar11 + uVar15 + sVar5;
      uVar10 = sVar14 >> 1;
      if (uVar10 != 0) {
        puVar7 = (undefined1 *)((long)&uStack_468 + sVar5 + uVar15 + uVar11 + 1);
        pcVar4 = acStack_899;
        do {
          puVar7[-1] = *pcVar4;
          *puVar7 = 0;
          uVar10 = uVar10 - 1;
          puVar7 = puVar7 + 2;
          pcVar4 = pcVar4 + 1;
        } while (uVar10 != 0);
      }
    }
    uVar6 = FUN_1010d10fc(0,&uStack_468,lVar12 + sVar14,param_5,param_6);
    FUN_101102f0c(param_4);
  }
  else {
    FUN_1010d9258(param_1,"user + domain + host name too big");
    uVar6 = 0x1b;
  }
LAB_101101a1c:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}




undefined8
FUN_101101a5c(undefined8 param_1,char *param_2,char *param_3,undefined8 *param_4,undefined8 *param_5
             )

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  sVar2 = _strlen(param_2);
  sVar3 = _strlen(param_3);
  lVar1 = sVar3 + sVar2 * 2 + 2;
  pvVar4 = (void *)(*(code *)PTR__malloc_101873620)(lVar1);
  if (pvVar4 == (void *)0x0) {
    *param_5 = 0;
    *param_4 = 0;
    uVar5 = 0x1b;
  }
  else {
    _memcpy(pvVar4,param_2,sVar2);
    *(undefined1 *)((long)pvVar4 + sVar2) = 0;
    _memcpy((undefined1 *)((long)pvVar4 + sVar2) + 1,param_2,sVar2);
    *(undefined1 *)((long)pvVar4 + (sVar2 * 2 | 1)) = 0;
    _memcpy((void *)((long)pvVar4 + sVar2 * 2 + 2),param_3,sVar3);
    uVar5 = FUN_1010d10fc(param_1,pvVar4,lVar1,param_4,param_5);
    (*(code *)PTR__free_101873628)(pvVar4);
  }
  return uVar5;
}




undefined8 FUN_101101b7c(undefined8 param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  
  sVar1 = _strlen(param_2);
  if (sVar1 != 0) {
    uVar2 = FUN_1010d10fc(param_1,param_2,sVar1,param_3,param_4);
    return uVar2;
  }
  lVar3 = (*(code *)PTR__strdup_101873638)("=");
  *param_3 = lVar3;
  if (lVar3 == 0) {
    *param_4 = 0;
    uVar2 = 0x1b;
  }
  else {
    uVar2 = 0;
    *param_4 = 1;
  }
  return uVar2;
}




undefined8 FUN_101101c18(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_1;
  *param_2 = 0;
  *param_3 = 0;
  if ((cVar1 != '\0') && (*param_1 != '=')) {
    uVar2 = FUN_1010d0ef8();
    return uVar2;
  }
  return 0;
}




undefined8
FUN_101101c40(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
             undefined8 param_6)

{
  size_t sVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_68 [16];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  if (param_2 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = _strlen(param_2);
  }
  _strlen(param_4);
  uVar2 = FUN_1010feedc();
  lVar3 = FUN_1010fef08(&PTR__CC_MD5_Init_10182f390,param_4,uVar2);
  if (lVar3 != 0) {
    if (sVar1 != 0) {
      uVar2 = FUN_1010feedc(sVar1);
      FUN_1010ff0a8(lVar3,param_2,uVar2);
    }
    FUN_1010ff0c8(lVar3,local_68);
    lVar3 = FUN_1010e7298("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x");
    if (lVar3 != 0) {
      uVar2 = FUN_1010d10fc(param_1,lVar3,0,param_5,param_6);
      (*(code *)PTR__free_101873628)(lVar3);
      goto LAB_101101d9c;
    }
  }
  uVar2 = 0x1b;
LAB_101101d9c:
  if (lVar4 == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_101101dcc(undefined8 param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  bool bVar8;
  long lVar9;
  undefined4 local_270;
  undefined1 local_26c;
  undefined8 local_268;
  char *local_260;
  undefined5 uStack_258;
  undefined3 local_253;
  undefined5 uStack_250;
  char local_248 [12];
  char acStack_23c [33];
  undefined1 auStack_21b [64];
  char acStack_1db [64];
  char local_19b [128];
  char acStack_11b [64];
  undefined1 auStack_db [33];
  undefined1 auStack_ba [33];
  undefined1 auStack_99 [33];
  undefined1 local_78 [16];
  long local_68;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  builtin_strncpy(local_248,"00000001",9);
  local_260 = (char *)0x0;
  uStack_250 = 0x45544143;
  uStack_258 = 0x4548545541;
  local_253 = 0x49544e;
  local_26c = 0;
  local_270 = 0x68747561;
  local_268 = 0;
  uVar2 = 0x3d;
  local_68 = lVar9;
  if (((*param_2 == '\0') || (*param_2 == '=')) ||
     (uVar2 = FUN_1010d0ef8(param_2,&local_260,&local_268), (int)uVar2 != 0)) goto LAB_10110246c;
  if (local_260 == (char *)0x0) goto LAB_101102468;
  uVar3 = FUN_10110301c(local_260,"nonce=\"",acStack_11b,0x40,0x22);
  if ((uVar3 & 1) == 0) {
LAB_101102450:
    if (local_260 != (char *)0x0) {
      (*(code *)PTR__free_101873628)();
      local_260 = (char *)0x0;
    }
  }
  else {
    uVar3 = FUN_10110301c(local_260,"realm=\"",local_19b,0x80,0x22);
    if ((uVar3 & 1) == 0) {
      local_19b[0] = '\0';
    }
    uVar3 = FUN_10110301c(local_260,"algorithm=",acStack_1db,0x40,0x2c);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = FUN_10110301c(local_260,"qop=\"",auStack_21b,0x40,0x22), (uVar3 & 1) == 0))
    goto LAB_101102450;
    if (local_260 != (char *)0x0) {
      (*(code *)PTR__free_101873628)();
      local_260 = (char *)0x0;
    }
    iVar1 = _strcmp(acStack_1db,"md5-sess");
    if (iVar1 == 0) {
      pcVar4 = (char *)(*(code *)PTR__strdup_101873638)(auStack_21b);
      if (pcVar4 != (char *)0x0) {
        pcVar5 = _strtok_r(pcVar4,",",&local_260);
        bVar8 = false;
        while (pcVar5 != (char *)0x0) {
          iVar1 = FUN_1010f659c(pcVar5,"auth");
          if (iVar1 == 0) {
            iVar1 = FUN_1010f659c(pcVar5,"auth-int");
            if (iVar1 == 0) {
              FUN_1010f659c(pcVar5,"auth-conf");
            }
          }
          else {
            bVar8 = true;
          }
          pcVar5 = _strtok_r((char *)0x0,",",&local_260);
        }
        (*(code *)PTR__free_101873628)(pcVar4);
        if (!bVar8) goto LAB_101102468;
        FUN_101105054(param_1);
        FUN_101105054(param_1);
        FUN_101105054(param_1);
        FUN_101105054(param_1);
        FUN_1010e7270(acStack_23c,0x21,"%08x%08x%08x%08x");
        lVar6 = FUN_1010f2bc8(&PTR__CC_MD5_Init_10182f3b8);
        if (lVar6 != 0) {
          _strlen(param_3);
          uVar2 = FUN_1010feedc();
          FUN_1010f2c48(lVar6,param_3,uVar2);
          FUN_1010f2c48(lVar6,":",1);
          _strlen(local_19b);
          uVar2 = FUN_1010feedc();
          FUN_1010f2c48(lVar6,local_19b,uVar2);
          FUN_1010f2c48(lVar6,":",1);
          _strlen(param_4);
          uVar2 = FUN_1010feedc();
          FUN_1010f2c48(lVar6,param_4,uVar2);
          FUN_1010f2c68(lVar6,local_78);
          lVar6 = FUN_1010f2bc8(&PTR__CC_MD5_Init_10182f3b8);
          if (lVar6 != 0) {
            FUN_1010f2c48(lVar6,local_78,0x10);
            FUN_1010f2c48(lVar6,":",1);
            _strlen(acStack_11b);
            uVar2 = FUN_1010feedc();
            FUN_1010f2c48(lVar6,acStack_11b,uVar2);
            FUN_1010f2c48(lVar6,":",1);
            _strlen(acStack_23c);
            uVar2 = FUN_1010feedc();
            FUN_1010f2c48(lVar6,acStack_23c,uVar2);
            FUN_1010f2c68(lVar6,local_78);
            lVar6 = 0;
            puVar7 = auStack_99;
            do {
              FUN_1010e7270(puVar7,3,"%02x");
              lVar6 = lVar6 + 1;
              puVar7 = puVar7 + 2;
            } while (lVar6 != 0x10);
            pcVar4 = (char *)FUN_1010e7298("%s/%s");
            if (pcVar4 != (char *)0x0) {
              lVar6 = FUN_1010f2bc8(&PTR__CC_MD5_Init_10182f3b8);
              if (lVar6 != 0) {
                _strlen((char *)&uStack_258);
                uVar2 = FUN_1010feedc();
                FUN_1010f2c48(lVar6,&uStack_258,uVar2);
                FUN_1010f2c48(lVar6,":",1);
                _strlen(pcVar4);
                uVar2 = FUN_1010feedc();
                FUN_1010f2c48(lVar6,pcVar4,uVar2);
                FUN_1010f2c68(lVar6,local_78);
                lVar6 = 0;
                puVar7 = auStack_ba;
                do {
                  FUN_1010e7270(puVar7,3,"%02x");
                  lVar6 = lVar6 + 1;
                  puVar7 = puVar7 + 2;
                } while (lVar6 != 0x10);
                lVar6 = FUN_1010f2bc8(&PTR__CC_MD5_Init_10182f3b8);
                if (lVar6 != 0) {
                  FUN_1010f2c48(lVar6,auStack_99,0x20);
                  FUN_1010f2c48(lVar6,":",1);
                  _strlen(acStack_11b);
                  uVar2 = FUN_1010feedc();
                  FUN_1010f2c48(lVar6,acStack_11b,uVar2);
                  FUN_1010f2c48(lVar6,":",1);
                  _strlen(local_248);
                  uVar2 = FUN_1010feedc();
                  FUN_1010f2c48(lVar6,local_248,uVar2);
                  FUN_1010f2c48(lVar6,":",1);
                  _strlen(acStack_23c);
                  uVar2 = FUN_1010feedc();
                  FUN_1010f2c48(lVar6,acStack_23c,uVar2);
                  FUN_1010f2c48(lVar6,":",1);
                  _strlen((char *)&local_270);
                  uVar2 = FUN_1010feedc();
                  FUN_1010f2c48(lVar6,&local_270,uVar2);
                  FUN_1010f2c48(lVar6,":",1);
                  FUN_1010f2c48(lVar6,auStack_ba,0x20);
                  FUN_1010f2c68(lVar6,local_78);
                  lVar6 = 0;
                  puVar7 = auStack_db;
                  do {
                    FUN_1010e7270(puVar7,3,"%02x");
                    lVar6 = lVar6 + 1;
                    puVar7 = puVar7 + 2;
                  } while (lVar6 != 0x10);
                  lVar6 = FUN_1010e7298(
                                       "username=\"%s\",realm=\"%s\",nonce=\"%s\",cnonce=\"%s\",nc=\"%s\",digest-uri=\"%s\",response=%s,qop=%s"
                                       );
                  (*(code *)PTR__free_101873628)(pcVar4);
                  if (lVar6 != 0) {
                    uVar2 = FUN_1010d10fc(param_1,lVar6,0,param_6,param_7);
                    (*(code *)PTR__free_101873628)(lVar6);
                    goto LAB_10110246c;
                  }
                  goto LAB_1011024ac;
                }
              }
              (*(code *)PTR__free_101873628)(pcVar4);
            }
          }
        }
      }
LAB_1011024ac:
      uVar2 = 0x1b;
      goto LAB_10110246c;
    }
  }
LAB_101102468:
  uVar2 = 0x3d;
LAB_10110246c:
  if (lVar9 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




void FUN_1011024b8(byte *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  char *pcStack_570;
  byte abStack_568 [1024];
  byte local_168 [256];
  long local_68;
  
  lVar16 = *(long *)PTR____stack_chk_guard_101444218;
  lVar15 = *param_2;
  local_68 = lVar16;
  FUN_10110296c(param_2);
  puVar6 = PTR___DefaultRuneLocale_101444130;
  bVar4 = false;
  bVar5 = false;
LAB_10110253c:
  uVar10 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      if ((char)(byte)uVar10 < '\0') {
        uVar10 = ___maskrune(uVar10,0x4000);
      }
      else {
        uVar10 = *(uint *)(puVar6 + (ulong)(byte)uVar10 * 4 + 0x3c) & 0x4000;
      }
      if (uVar10 == 0) break;
      param_1 = param_1 + 1;
      uVar10 = (uint)*param_1;
    } while (uVar10 != 0);
  }
  for (lVar12 = 0;
      ((bVar1 = param_1[lVar12], bVar1 != 0 && (bVar1 != 0x3d)) && ((int)lVar12 != 0xff));
      lVar12 = lVar12 + 1) {
    local_168[lVar12] = bVar1;
  }
  local_168[lVar12] = 0;
  pbVar14 = param_1 + lVar12;
  if (*pbVar14 != 0x3d) {
    if ((lVar15 == 0) || (*(char *)((long)param_2 + 0x1c) != '\0')) {
      uVar11 = 0x3d;
      if (*param_2 != 0) {
        uVar11 = 0;
      }
    }
    else {
LAB_101102938:
      uVar11 = 0x3d;
    }
    goto LAB_10110293c;
  }
  bVar1 = pbVar14[1];
  param_1 = pbVar14 + 2;
  if (bVar1 != 0x22) {
    param_1 = pbVar14 + 1;
  }
  bVar2 = *param_1;
  if (bVar2 == 0) {
    pbVar14 = abStack_568;
  }
  else {
    bVar3 = false;
    iVar7 = 0x3ff;
    pbVar13 = abStack_568;
    do {
      pbVar14 = pbVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      if ((char)bVar2 < '\\') {
        if ((char)bVar2 < '\"') {
          if ((bVar2 == 10) || (bVar2 == 0xd)) {
LAB_101102664:
            iVar7 = 0;
            goto LAB_101102668;
          }
        }
        else if (bVar2 == 0x22) {
          if (!bVar3 && bVar1 == 0x22) {
            iVar7 = 0;
            bVar3 = false;
            goto LAB_101102668;
          }
        }
        else if ((bVar2 == 0x2c) && (bVar1 != 0x22)) goto LAB_101102664;
LAB_101102658:
        bVar3 = false;
        *pbVar13 = bVar2;
        pbVar14 = pbVar13 + 1;
      }
      else {
        if ((bVar2 != 0x5c) || (bVar3)) goto LAB_101102658;
        pbVar14 = pbVar13 + 1;
        *pbVar13 = 0x5c;
        bVar3 = true;
      }
LAB_101102668:
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      pbVar13 = pbVar14;
    } while (bVar2 != 0);
  }
  *pbVar14 = 0;
  iVar7 = FUN_1010f659c(local_168,"nonce");
  if (iVar7 == 0) {
    iVar7 = FUN_1010f659c(local_168,"stale");
    if (iVar7 != 0) {
      iVar7 = FUN_1010f659c(abStack_568,"true");
      if (iVar7 != 0) {
        *(undefined1 *)((long)param_2 + 0x1c) = 1;
        *(undefined4 *)(param_2 + 7) = 1;
      }
      goto LAB_101102730;
    }
    iVar7 = FUN_1010f659c(local_168,"realm");
    if (iVar7 != 0) {
      lVar12 = (*(code *)PTR__strdup_101873638)(abStack_568);
      param_2[2] = lVar12;
      goto joined_r0x00010110272c;
    }
    iVar7 = FUN_1010f659c(local_168,"opaque");
    if (iVar7 == 0) {
      iVar7 = FUN_1010f659c(local_168,"qop");
      if (iVar7 == 0) {
        iVar7 = FUN_1010f659c(local_168,"algorithm");
        if (iVar7 != 0) {
          lVar12 = (*(code *)PTR__strdup_101873638)(abStack_568);
          param_2[6] = lVar12;
          if (lVar12 == 0) goto LAB_101102930;
          iVar7 = FUN_1010f659c(abStack_568,"MD5-sess");
          if (iVar7 == 0) {
            iVar7 = FUN_1010f659c(abStack_568,"MD5");
            if (iVar7 == 0) goto LAB_101102938;
            *(undefined4 *)(param_2 + 3) = 0;
          }
          else {
            *(undefined4 *)(param_2 + 3) = 1;
          }
        }
      }
      else {
        pcVar8 = (char *)(*(code *)PTR__strdup_101873638)(abStack_568);
        pcVar9 = pcVar8;
        if (pcVar8 == (char *)0x0) {
LAB_101102930:
          uVar11 = 0x1b;
LAB_10110293c:
          if (lVar16 == local_68) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail(uVar11);
        }
        while (pcVar9 = _strtok_r(pcVar9,",",&pcStack_570), pcVar9 != (char *)0x0) {
          iVar7 = FUN_1010f659c(pcVar9,"auth");
          if (iVar7 == 0) {
            iVar7 = FUN_1010f659c(pcVar9,"auth-int");
            bVar5 = (bool)(bVar5 | iVar7 != 0);
          }
          else {
            bVar4 = true;
          }
          pcVar9 = (char *)0x0;
        }
        (*(code *)PTR__free_101873628)(pcVar8);
        lVar16 = *(long *)PTR____stack_chk_guard_101444218;
        if (bVar4) {
          lVar12 = (*(code *)PTR__strdup_101873638)("auth");
          param_2[5] = lVar12;
          if (lVar12 == 0) goto LAB_101102930;
          bVar4 = true;
        }
        else {
          if (!bVar5) {
            bVar4 = false;
            bVar5 = false;
            goto LAB_101102730;
          }
          lVar12 = (*(code *)PTR__strdup_101873638)("auth-int");
          param_2[5] = lVar12;
          if (lVar12 == 0) goto LAB_101102930;
          bVar4 = false;
          bVar5 = true;
        }
      }
      goto LAB_101102730;
    }
    lVar12 = (*(code *)PTR__strdup_101873638)(abStack_568);
    param_2[4] = lVar12;
  }
  else {
    lVar12 = (*(code *)PTR__strdup_101873638)(abStack_568);
    *param_2 = lVar12;
  }
joined_r0x00010110272c:
  if (lVar12 == 0) goto LAB_101102930;
LAB_101102730:
  uVar10 = (uint)*param_1;
  pbVar14 = param_1;
  if (*param_1 != 0) {
    do {
      if ((char)(byte)uVar10 < '\0') {
        uVar10 = ___maskrune(uVar10,0x4000);
      }
      else {
        uVar10 = *(uint *)(puVar6 + (ulong)(byte)uVar10 * 4 + 0x3c) & 0x4000;
      }
      if (uVar10 == 0) {
        param_1 = pbVar14 + 1;
        if (*pbVar14 != 0x2c) {
          param_1 = pbVar14;
        }
        break;
      }
      param_1 = pbVar14 + 1;
      uVar10 = (uint)*param_1;
      pbVar14 = param_1;
    } while (uVar10 != 0);
  }
  goto LAB_10110253c;
}




void FUN_10110296c(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR__free_101873628)();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[6] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_101102a3c(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long in_x5;
  undefined8 *in_x6;
  size_t *in_x7;
  char *pcVar8;
  char cVar9;
  long lVar10;
  undefined8 local_110;
  undefined8 local_108;
  char acStack_fc [33];
  undefined1 auStack_db [33];
  undefined1 auStack_ba [33];
  undefined1 auStack_99 [33];
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  local_110 = 0;
  local_108 = 0;
  if (*(int *)(in_x5 + 0x38) == 0) {
    *(undefined4 *)(in_x5 + 0x38) = 1;
  }
  local_68 = lVar10;
  if (*(long *)(in_x5 + 8) == 0) {
    FUN_101105054(param_1);
    FUN_101105054(param_1);
    FUN_101105054(param_1);
    FUN_101105054(param_1);
    FUN_1010e7270(acStack_fc,0x21,"%08x%08x%08x%08x");
    sVar2 = _strlen(acStack_fc);
    uVar3 = FUN_1010d10fc(param_1,acStack_fc,sVar2,&local_108,&local_110);
    if ((int)uVar3 != 0) goto LAB_101102e78;
    *(undefined8 *)(in_x5 + 8) = local_108;
  }
  lVar4 = FUN_1010e7298("%s:%s:%s");
  if (lVar4 != 0) {
    FUN_1010f2b70(auStack_78,lVar4);
    (*(code *)PTR__free_101873628)(lVar4);
    FUN_101102ea8(auStack_78,auStack_ba);
    if (*(int *)(in_x5 + 0x18) == 1) {
      lVar4 = FUN_1010e7298("%s:%s:%s");
      if (lVar4 == 0) goto LAB_101102e74;
      FUN_1010f2b70(auStack_78,lVar4);
      (*(code *)PTR__free_101873628)(lVar4);
      FUN_101102ea8(auStack_78,auStack_ba);
    }
    lVar5 = FUN_1010e7298("%s:%s");
    lVar4 = lVar5;
    if (((*(long *)(in_x5 + 0x28) != 0) &&
        (iVar1 = FUN_1010f659c(*(long *)(in_x5 + 0x28),"auth-int"), iVar1 != 0)) &&
       (lVar4 = FUN_1010e7298("%s:%s"), lVar5 != 0)) {
      (*(code *)PTR__free_101873628)(lVar5);
    }
    if (lVar4 != 0) {
      FUN_1010f2b70(auStack_78,lVar4);
      (*(code *)PTR__free_101873628)(lVar4);
      FUN_101102ea8(auStack_78,auStack_db);
      if (*(long *)(in_x5 + 0x28) == 0) {
        pcVar7 = "%s:%s:%s";
      }
      else {
        pcVar7 = "%s:%s:%08x:%s:%s:%s";
      }
      lVar4 = FUN_1010e7298(pcVar7);
      if (lVar4 != 0) {
        FUN_1010f2b70(auStack_78,lVar4);
        (*(code *)PTR__free_101873628)(lVar4);
        FUN_101102ea8(auStack_78,auStack_99);
        lVar4 = 1;
        pcVar7 = param_2;
        do {
          cVar9 = *pcVar7;
          if (cVar9 == '\"') {
LAB_101102cf4:
            lVar4 = lVar4 + 2;
          }
          else {
            if (cVar9 == '\0') goto LAB_101102d10;
            if (cVar9 == '\\') goto LAB_101102cf4;
            lVar4 = lVar4 + 1;
          }
          pcVar7 = pcVar7 + 1;
        } while( true );
      }
    }
  }
  goto LAB_101102e74;
LAB_101102d60:
  *pcVar7 = '\0';
  if (*(long *)(in_x5 + 0x28) == 0) {
    pcVar7 = (char *)FUN_1010e7298(
                                  "username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                  );
  }
  else {
    pcVar7 = (char *)FUN_1010e7298(
                                  "username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                  );
    iVar1 = FUN_1010f659c(*(undefined8 *)(in_x5 + 0x28),"auth");
    if (iVar1 != 0) {
      *(int *)(in_x5 + 0x38) = *(int *)(in_x5 + 0x38) + 1;
    }
  }
  (*(code *)PTR__free_101873628)(pcVar6);
  if (pcVar7 != (char *)0x0) {
    pcVar6 = pcVar7;
    if (*(long *)(in_x5 + 0x20) != 0) {
      pcVar6 = (char *)FUN_1010e7298("%s, opaque=\"%s\"");
      (*(code *)PTR__free_101873628)(pcVar7);
      if (pcVar6 == (char *)0x0) goto LAB_101102e74;
    }
    pcVar7 = pcVar6;
    if (*(long *)(in_x5 + 0x30) != 0) {
      pcVar7 = (char *)FUN_1010e7298("%s, algorithm=\"%s\"");
      (*(code *)PTR__free_101873628)(pcVar6);
      if (pcVar7 == (char *)0x0) goto LAB_101102e74;
    }
    *in_x6 = pcVar7;
    sVar2 = _strlen(pcVar7);
    uVar3 = 0;
    *in_x7 = sVar2;
    goto LAB_101102e78;
  }
  goto LAB_101102e74;
LAB_101102d10:
  pcVar6 = (char *)(*(code *)PTR__malloc_101873620)(lVar4);
  pcVar7 = pcVar6;
  if (pcVar6 != (char *)0x0) {
    do {
      cVar9 = *param_2;
      if (cVar9 == '\"') {
LAB_101102d54:
        pcVar8 = pcVar7 + 1;
        *pcVar7 = '\\';
        cVar9 = *param_2;
      }
      else {
        if (cVar9 == '\0') goto LAB_101102d60;
        pcVar8 = pcVar7;
        if (cVar9 == '\\') goto LAB_101102d54;
      }
      param_2 = param_2 + 1;
      *pcVar8 = cVar9;
      pcVar7 = pcVar8 + 1;
    } while( true );
  }
LAB_101102e74:
  uVar3 = 0x1b;
LAB_101102e78:
  if (lVar10 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}




void FUN_101102ea8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_1010e7270(param_2,3,"%02x");
    lVar1 = lVar1 + 1;
    param_2 = param_2 + 2;
  } while (lVar1 != 0x10);
  return;
}




void FUN_101102f0c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




undefined8
FUN_101102f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)FUN_1010e7298("user=%s\x01auth=Bearer %s\x01\x01");
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    sVar2 = _strlen(pcVar1);
    uVar3 = FUN_1010d10fc(param_1,pcVar1,sVar2,param_4,param_5);
    (*(code *)PTR__free_101873628)(pcVar1);
  }
  return uVar3;
}




void FUN_101102fd8(long param_1,int param_2)

{
  if (param_2 == 0x40) {
    if (*(long *)(param_1 + 0x3d8) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x3d8) = 0;
    }
    *(undefined4 *)(param_1 + 0x3e0) = 0;
  }
  return;
}




undefined8 FUN_10110301c(char *param_1,char *param_2,long param_3,long param_4,char param_5)

{
  char *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  
  pcVar1 = _strstr(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    sVar2 = _strlen(param_2);
    uVar4 = 0;
    if ((param_4 != 1) && (cVar5 = pcVar1[sVar2], cVar5 != param_5 && cVar5 != '\0')) {
      uVar6 = 0;
      do {
        *(char *)(param_3 + uVar6) = cVar5;
        uVar4 = uVar6 + 1;
        if (param_4 - 1U <= uVar4) break;
        cVar5 = pcVar1[uVar6 + sVar2 + 1];
        uVar6 = uVar4;
      } while (cVar5 != param_5 && cVar5 != '\0');
    }
    *(undefined1 *)(param_3 + uVar4) = 0;
    uVar3 = 1;
  }
  return uVar3;
}




undefined8 FUN_1011030c4(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)(*(code *)PTR__malloc_101873620)(0x18);
  *param_2 = (long)puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar1 + 8) = 0;
    *puVar1 = 0;
    uVar2 = FUN_1010eef44(FUN_10110314c);
    *(undefined8 *)(*param_2 + 0x10) = uVar2;
    lVar3 = *param_2;
    if (*(long *)(lVar3 + 0x10) != 0) {
      return 0;
    }
    if (lVar3 != 0) {
      (*(code *)PTR__free_101873628)(lVar3);
      *param_2 = 0;
    }
  }
  return 0x1b;
}




void FUN_10110314c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x660) = 0;
  return;
}




void FUN_101103154(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1010ef0ec(*(long *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    (*(code *)PTR__free_101873628)(param_1);
    return;
  }
  return;
}




undefined8 FUN_1011031a4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1010eef88(*(long *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8),
                        param_2);
  if (iVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = 0;
    *(long *)(param_2 + 0x660) = param_1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  return uVar2;
}




undefined8 FUN_1011031f4(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)**(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_1010ef040(*(long **)(param_1 + 0x10),plVar1,0);
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  *(undefined8 *)(param_2 + 0x660) = 0;
  return 1;
}




long * FUN_101103258(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(code *)PTR__calloc_101873640)(1,0x28);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_1010ef388(param_1,FUN_1010ef80c,FUN_1010ef83c,thunk_FUN_101103154);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    (*(code *)PTR__free_101873628)(plVar1);
  }
  return (long *)0x0;
}




void thunk_FUN_101103154(void)

{
  FUN_101103154();
  return;
}




void FUN_1011032dc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1010ef7c8(*param_1);
    *param_1 = 0;
    (*(code *)PTR__free_101873628)(param_1);
    return;
  }
  return;
}




undefined8 FUN_101103324(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1;
    sVar1 = _strlen(param_2);
    uVar2 = FUN_1010ef618(uVar2,param_2,sVar1 + 1);
  }
  return uVar2;
}




undefined8 FUN_101103368(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long local_48;
  
  local_48 = 0;
  lVar5 = *param_2;
  lVar1 = FUN_101103324(*(undefined8 *)(lVar5 + 0x8d0),param_2[0x18]);
  if (lVar1 == 0) {
    uVar2 = FUN_1011030c4(lVar5,&local_48);
    lVar1 = local_48;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    pcVar6 = (char *)param_2[0x18];
    uVar2 = **(undefined8 **)(lVar5 + 0x8d0);
    sVar3 = _strlen(pcVar6);
    lVar4 = FUN_1010ef428(uVar2,pcVar6,sVar3 + 1,lVar1);
    lVar1 = local_48;
    if (lVar4 == 0) {
      FUN_101103154(local_48);
      return 0x1b;
    }
  }
  uVar2 = FUN_1011031a4(lVar1,param_2);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    lVar1 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1 + 1;
    param_2[10] = lVar1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  else if (local_48 != 0) {
    FUN_101103458(*(undefined8 *)(lVar5 + 0x8d0));
  }
  return uVar2;
}




void FUN_101103458(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_1010ef884(*param_1,auStack_38);
    do {
      plVar1 = (long *)FUN_1010ef894(auStack_38);
      if (plVar1 == (long *)0x0) {
        return;
      }
    } while (*plVar1 != param_2);
    FUN_1010ef574(*param_1,plVar1[1],plVar1[2]);
  }
  return;
}




void FUN_1011034b8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x660);
  if (lVar1 != 0) {
    FUN_1011031f4(lVar1);
    if (*(long *)(lVar1 + 8) == 0) {
      FUN_101103458(param_1,lVar1);
    }
    if (param_1 != 0) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
    }
  }
  return;
}




void FUN_101103508(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [24];
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_1010ef884(*param_1,auStack_48);
    plVar2 = (long *)FUN_1010ef894(auStack_48);
    while (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      plVar2 = (long *)FUN_1010ef894(auStack_48);
      puVar5 = (undefined8 *)**(undefined8 **)(lVar4 + 0x10);
      while (puVar5 != (undefined8 *)0x0) {
        uVar3 = *puVar5;
        puVar5 = (undefined8 *)puVar5[2];
        iVar1 = (*param_3)(uVar3,param_2);
        if (iVar1 == 1) {
          return;
        }
      }
    }
  }
  return;
}




undefined8 FUN_10110358c(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_28 [24];
  
  FUN_1010ef884(*param_1,auStack_28);
  do {
    plVar1 = (long *)FUN_1010ef894(auStack_28);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
  } while ((undefined8 *)**(undefined8 **)(*plVar1 + 0x10) == (undefined8 *)0x0);
  return *(undefined8 *)**(undefined8 **)(*plVar1 + 0x10);
}




bool FUN_1011035d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    lVar1 = FUN_1010f2074(*(undefined8 *)(param_1 + 0x60));
    lVar2 = FUN_1010f2088(*(undefined8 *)(param_1 + 0x60));
    if ((*(long **)(param_2 + 0x388) == (long *)0x0) ||
       (plVar3 = (long *)**(long **)(param_2 + 0x388), plVar3 == (long *)0x0)) {
      bVar4 = false;
    }
    else {
      bVar4 = 0 < lVar1 && lVar1 < *(long *)(*plVar3 + 0x78);
    }
    if (0 < lVar2) {
      bVar4 = (bool)(bVar4 | lVar2 < *(long *)(param_2 + 0x28));
    }
    FUN_1010d909c(param_1,"Conn: %ld (%p) Receive pipe weight: (%ld/%zu), penalized: %s\n");
  }
  return bVar4;
}




undefined8 FUN_1011036b4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 0x380);
  lVar3 = *plVar2;
  uVar1 = FUN_1010e2124(param_1,plVar2);
  if ((plVar2 == *(long **)(param_2 + 0x380)) && (lVar3 != *plVar2)) {
    *(undefined1 *)(param_2 + 0x379) = 0;
    FUN_1010efbdc(*(undefined8 *)**(long **)(param_2 + 0x380),1);
  }
  return uVar1;
}




void FUN_10110371c(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)**(long **)(param_2 + 0x380);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_1010ef14c();
  if (**(long **)(param_2 + 0x380) == 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x379) = 0;
  FUN_1010efbdc(*(undefined8 *)**(long **)(param_2 + 0x380),1);
  return;
}




undefined8 FUN_101103794(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (plVar2 = (long *)FUN_1010f209c(), plVar2 != (long *)0x0))
  {
    for (puVar3 = (undefined8 *)*plVar2; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[2]) {
      puVar4 = (undefined8 *)*puVar3;
      iVar1 = FUN_1010f659c(*puVar4,*(undefined8 *)(param_2 + 0xc0));
      if ((iVar1 != 0) && ((uint)*(ushort *)(puVar4 + 1) == *(uint *)(param_2 + 0xf8))) {
        FUN_1010d909c(param_1,"Site %s:%d is pipeline blacklisted\n");
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_10110382c(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1010eef44(FUN_101103990);
    if (lVar2 == 0) {
      return 3;
    }
    lVar3 = *param_1;
    while (lVar3 != 0) {
      param_1 = param_1 + 1;
      plVar4 = (long *)(*(code *)PTR__strdup_101873638)();
      if (plVar4 == (long *)0x0) goto LAB_101103964;
      plVar5 = (long *)(*(code *)PTR__malloc_101873620)(0x10);
      if (plVar5 == (long *)0x0) {
LAB_101103960:
        (*(code *)PTR__free_101873628)(plVar4);
LAB_101103964:
        FUN_1010ef0ec(lVar2,0);
        return 3;
      }
      pcVar6 = _strchr((char *)plVar4,0x3a);
      if (pcVar6 == (char *)0x0) {
        *(undefined2 *)(plVar5 + 1) = 0x50;
      }
      else {
        *pcVar6 = '\0';
        lVar3 = _strtol(pcVar6 + 1,(char **)0x0,10);
        *(short *)(plVar5 + 1) = (short)lVar3;
      }
      *plVar5 = (long)plVar4;
      iVar1 = FUN_1010eef88(lVar2,*(undefined8 *)(lVar2 + 8),plVar5);
      if (iVar1 == 0) {
        plVar4 = plVar5;
        if (*plVar5 != 0) {
          (*(code *)PTR__free_101873628)();
          *plVar5 = 0;
        }
        goto LAB_101103960;
      }
      lVar3 = *param_1;
    }
  }
  if (lVar7 != 0) {
    FUN_1010ef0ec(lVar7,0);
  }
  *param_2 = lVar2;
  return 0;
}




void FUN_101103990(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    (*(code *)PTR__free_101873628)();
    *param_2 = 0;
  }
  (*(code *)PTR__free_101873628)(param_2);
  return;
}




undefined8 FUN_1011039d8(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  
  if (((param_2 != 0) && (*(long *)(param_1 + 0x60) != 0)) &&
     (plVar2 = (long *)FUN_1010f20a4(*(long *)(param_1 + 0x60)), plVar2 != (long *)0x0)) {
    for (puVar5 = (undefined8 *)*plVar2; puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)puVar5[2]) {
      pcVar4 = (char *)*puVar5;
      sVar3 = _strlen(pcVar4);
      iVar1 = FUN_1010f6624(pcVar4,param_2,sVar3);
      if (iVar1 != 0) {
        FUN_1010d909c(param_1,"Server %s is blacklisted\n");
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_101103a74(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1010eef44(FUN_101103b28);
    if (lVar2 == 0) {
      return 3;
    }
    lVar3 = *param_1;
    while (lVar3 != 0) {
      param_1 = param_1 + 1;
      lVar3 = (*(code *)PTR__strdup_101873638)();
      if (lVar3 == 0) {
        return 3;
      }
      iVar1 = FUN_1010eef88(lVar2,*(undefined8 *)(lVar2 + 8),lVar3);
      if (iVar1 == 0) {
        return 3;
      }
      lVar3 = *param_1;
    }
  }
  if (lVar4 != 0) {
    FUN_1010ef0ec(lVar4,0);
  }
  *param_2 = lVar2;
  return 0;
}




void FUN_101103b28(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    (*(code *)PTR__free_101873628)(param_2);
    return;
  }
  return;
}




char * FUN_101103b44(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar9;
  char *pcVar8;
  
  sVar2 = _strlen(param_1);
  pcVar3 = (char *)(*(code *)PTR__malloc_101873620)(sVar2 + 1);
  if (pcVar3 != (char *)0x0) {
    pcVar4 = (char *)(*(code *)PTR__strdup_101873638)(param_1);
    if (pcVar4 != (char *)0x0) {
      pcVar5 = _strchr(pcVar4,0x3f);
      pcVar7 = pcVar3;
      pcVar9 = pcVar4;
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
      }
      do {
        iVar1 = _strncmp("./",pcVar9,2);
        if (iVar1 == 0) {
LAB_101103c8c:
          pcVar9 = pcVar9 + 2;
        }
        else {
          iVar1 = _strncmp("../",pcVar9,3);
          if (iVar1 == 0) {
            pcVar9 = pcVar9 + 3;
          }
          else {
            iVar1 = _strncmp("/./",pcVar9,3);
            if (iVar1 == 0) goto LAB_101103c8c;
            iVar1 = _strcmp("/.",pcVar9);
            if (iVar1 == 0) {
              pcVar9 = pcVar9 + 1;
              *pcVar9 = '/';
            }
            else {
              iVar1 = _strncmp("/../",pcVar9,4);
              if (iVar1 == 0) {
                pcVar9 = pcVar9 + 3;
                do {
                  if (pcVar7 <= pcVar3) break;
                  pcVar7 = pcVar7 + -1;
                } while (*pcVar7 != '/');
              }
              else {
                iVar1 = _strcmp("/..",pcVar9);
                if (iVar1 == 0) {
                  pcVar9 = pcVar9 + 2;
                  *pcVar9 = '/';
                  do {
                    if (pcVar7 <= pcVar3) break;
                    pcVar7 = pcVar7 + -1;
                  } while (*pcVar7 != '/');
                }
                else {
                  iVar1 = _strcmp(".",pcVar9);
                  if ((iVar1 == 0) || (iVar1 = _strcmp("..",pcVar9), iVar1 == 0)) {
                    *pcVar9 = '\0';
                    goto LAB_101103cec;
                  }
                  cVar6 = *pcVar9;
                  pcVar8 = pcVar7;
                  do {
                    pcVar7 = pcVar8 + 1;
                    *pcVar8 = cVar6;
                    pcVar9 = pcVar9 + 1;
                    cVar6 = *pcVar9;
                    if (cVar6 == '\0') break;
                    pcVar8 = pcVar7;
                  } while (cVar6 != '/');
                }
              }
              *pcVar7 = '\0';
            }
          }
        }
LAB_101103cec:
        if (*pcVar9 == '\0') {
          if (pcVar5 != (char *)0x0) {
            sVar2 = _strlen(param_1 + ((long)pcVar5 - (long)pcVar4));
            _memcpy(pcVar7,param_1 + ((long)pcVar5 - (long)pcVar4),sVar2 + 1);
          }
          (*(code *)PTR__free_101873628)(pcVar4);
          return pcVar3;
        }
      } while( true );
    }
    (*(code *)PTR__free_101873628)(pcVar3);
  }
  return (char *)0x0;
}




undefined8 FUN_101103d60(long *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_28;
  
  lVar2 = (*(code *)PTR__calloc_101873640)(1,0x20);
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x218) = lVar2;
  if (lVar2 != 0) {
    uVar4 = FUN_1010e5f8c(lVar3,*(undefined8 *)(lVar3 + 0x8ab0),0,&local_28,0,1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if ((*local_28 == '/') || (pcVar5 = local_28, *local_28 == '\\')) {
      pcVar5 = local_28 + 1;
    }
    pcVar5 = (char *)(*(code *)PTR__strdup_101873638)(pcVar5);
    *(char **)(lVar2 + 8) = pcVar5;
    if (pcVar5 != (char *)0x0) {
      pcVar6 = _strchr(pcVar5,0x2f);
      if ((pcVar6 == (char *)0x0) && (pcVar6 = _strchr(pcVar5,0x5c), pcVar6 == (char *)0x0)) {
        if (local_28 != (char *)0x0) {
          (*(code *)PTR__free_101873628)();
        }
        return 3;
      }
      *pcVar6 = '\0';
      *(char **)(lVar2 + 0x10) = pcVar6 + 1;
      pcVar5 = pcVar6 + 1;
      while (*pcVar5 != '\0') {
        if (*pcVar5 == '/') {
          *pcVar5 = '\\';
        }
        pcVar1 = pcVar6 + 2;
        pcVar6 = pcVar5;
        pcVar5 = pcVar1;
      }
      if (local_28 != (char *)0x0) {
        (*(code *)PTR__free_101873628)();
        return 0;
      }
      return 0;
    }
    if (local_28 != (char *)0x0) {
      (*(code *)PTR__free_101873628)();
    }
  }
  return 0x1b;
}




undefined8 FUN_101103ecc(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  if (*(long *)(lVar1 + 8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(lVar1 + 8) = 0;
    lVar1 = *(long *)(*param_1 + 0x218);
  }
  if (lVar1 != 0) {
    (*(code *)PTR__free_101873628)(lVar1);
    *(undefined8 *)(*param_1 + 0x218) = 0;
  }
  return param_2;
}




undefined8 FUN_101103f44(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (*(char *)(param_1 + 0x2cc) == '\0') {
    return 0x43;
  }
  _memset((void *)(param_1 + 0x530),0,0x50);
  *(undefined4 *)(param_1 + 0x530) = 1;
  lVar1 = (*(code *)PTR__malloc_101873620)(0x9000);
  *(long *)(param_1 + 0x558) = lVar1;
  if (lVar1 == 0) {
LAB_101104024:
    uVar3 = 0x1b;
  }
  else {
    *(undefined1 *)(param_1 + 0x2c8) = 0;
    pcVar4 = *(char **)(param_1 + 0x170);
    pcVar2 = _strchr(pcVar4,0x2f);
    if ((pcVar2 == (char *)0x0) && (pcVar2 = _strchr(pcVar4,0x5c), pcVar2 == (char *)0x0)) {
      *(char **)(param_1 + 0x538) = pcVar4;
      lVar1 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(param_1 + 0xc0));
      *(long *)(param_1 + 0x540) = lVar1;
      if (lVar1 == 0) goto LAB_101104024;
    }
    else {
      *(char **)(param_1 + 0x538) = pcVar2 + 1;
      lVar1 = (*(code *)PTR__strdup_101873638)(pcVar4);
      *(long *)(param_1 + 0x540) = lVar1;
      if (lVar1 == 0) goto LAB_101104024;
      pcVar2[lVar1 - *(long *)(param_1 + 0x170)] = '\0';
    }
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_101104038(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  char local_4e1;
  long local_4e0;
  undefined8 local_4d2;
  undefined8 uStack_4ca;
  undefined8 local_4c2;
  undefined1 auStack_4ba [21];
  undefined8 local_4a5;
  undefined8 uStack_49d;
  undefined8 local_495;
  undefined1 auStack_48d [21];
  undefined1 local_478;
  undefined1 local_477;
  undefined2 local_473;
  undefined2 local_471;
  undefined2 local_46f;
  undefined4 local_46d;
  undefined2 local_469;
  undefined2 local_467;
  undefined4 local_461;
  short local_45d;
  undefined8 local_45b;
  undefined8 uStack_453;
  undefined8 local_44b;
  undefined8 local_443;
  undefined8 uStack_43b;
  undefined8 local_433;
  undefined1 uStack_42b;
  char acStack_42a [9];
  char acStack_421 [8];
  undefined1 uStack_419;
  undefined4 uStack_418;
  undefined1 auStack_414 [956];
  long local_58;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_4e0 = 0;
  local_58 = lVar5;
  if (*(int *)(param_1 + 0xa6) == 1) {
    if ((*(byte *)(param_1[0x61] + 0x7c) & 1) != 0) {
      uVar2 = FUN_1011051a8(param_1,0,&local_4e1);
      if (((int)uVar2 != 0) && ((int)uVar2 != 0x51)) goto LAB_1011042e4;
      if (local_4e1 != '\0') goto LAB_1011040b0;
      goto LAB_101104118;
    }
LAB_1011040b0:
    uVar2 = FUN_101104ba8(param_1,0x72,&DAT_1013cd677,0xf);
    if ((int)uVar2 == 0) {
      *(undefined4 *)(param_1 + 0xa6) = 2;
      goto LAB_1011040d4;
    }
  }
  else {
LAB_1011040d4:
    uVar2 = FUN_101104a00(param_1,&local_4e0);
    if (((int)uVar2 == 0) || ((int)uVar2 == 0x51)) {
      if (local_4e0 != 0) {
        if (*(int *)(param_1 + 0xa6) == 3) {
          if (*(int *)(local_4e0 + 9) != 0) {
            *(undefined1 *)(param_1 + 0x59) = 1;
            uVar2 = 0x43;
            goto LAB_1011042e4;
          }
          *(undefined2 *)((long)param_1 + 0x554) = *(undefined2 *)(local_4e0 + 0x20);
          *(undefined4 *)(param_1 + 0xa6) = 4;
          *param_2 = 1;
        }
        else if (*(int *)(param_1 + 0xa6) == 2) {
          if (*(int *)(local_4e0 + 9) != 0) {
            *(undefined1 *)(param_1 + 0x59) = 1;
            uVar2 = 7;
            goto LAB_1011042e4;
          }
          param_1[0xa9] = *(undefined8 *)(local_4e0 + 0x49);
          *(undefined4 *)(param_1 + 0xaa) = *(undefined4 *)(local_4e0 + 0x34);
          sVar3 = _strlen((char *)param_1[0xa7]);
          sVar4 = _strlen((char *)param_1[0xa8]);
          if (sVar3 + sVar4 + 0x48 < 0x401) {
            FUN_101100d68(*param_1,param_1[0x2f],auStack_48d);
            FUN_101100c28(auStack_48d,param_1 + 0xa9,&local_4a5);
            FUN_101100e28(*param_1,param_1[0x2f],auStack_4ba);
            FUN_101100c28(auStack_4ba,param_1 + 0xa9,&local_4d2);
            _bzero(&local_478,0x41d);
            local_478 = 0xd;
            local_477 = 0xff;
            local_473 = 0x9000;
            local_471 = 1;
            local_46f = 1;
            local_46d = *(undefined4 *)(param_1 + 0xaa);
            local_461 = 8;
            local_469 = 0x18;
            local_467 = 0x18;
            local_44b = local_495;
            uStack_453 = uStack_49d;
            local_45b = local_4a5;
            local_433 = local_4c2;
            uStack_43b = uStack_4ca;
            local_443 = local_4d2;
            ___strcpy_chk(&uStack_42b,param_1[0xa7],0x3d0);
            sVar3 = _strlen((char *)param_1[0xa7]);
            _strcpy(acStack_42a + sVar3,(char *)param_1[0xa8]);
            sVar4 = _strlen((char *)param_1[0xa8]);
            lVar1 = sVar3 + sVar4;
            (&uStack_419)[lVar1] = 0;
            builtin_strncpy(acStack_421 + sVar3 + sVar4,"e-darwin",8);
            builtin_strncpy(acStack_42a + sVar3 + sVar4 + 1,"arm-appl",8);
            auStack_414[lVar1] = 0;
            *(undefined4 *)(auStack_414 + lVar1 + -4) = 0x6c727563;
            local_45d = (short)lVar1 + 0x48;
            uVar2 = FUN_101104ba8(param_1,0x73,&local_478,lVar1 + 0x65);
          }
          else {
            uVar2 = 0x3f;
          }
          if ((int)uVar2 != 0) goto LAB_1011042dc;
          *(undefined4 *)(param_1 + 0xa6) = 3;
        }
        uVar2 = 0;
        param_1[0xaf] = 0;
        goto LAB_1011042e4;
      }
LAB_101104118:
      uVar2 = 0;
      goto LAB_1011042e4;
    }
  }
LAB_1011042dc:
  *(undefined1 *)(param_1 + 0x59) = 1;
LAB_1011042e4:
  if (lVar5 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




ulong FUN_10110431c(long *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  short sVar17;
  long lVar18;
  long local_4a8;
  undefined1 local_4a0;
  undefined1 uStack_49f;
  undefined1 uStack_49e;
  undefined2 uStack_49d;
  undefined1 uStack_49b;
  undefined1 uStack_49a;
  undefined1 uStack_499;
  undefined1 uStack_498;
  short sStack_497;
  undefined2 uStack_495;
  undefined2 uStack_493;
  undefined1 uStack_491;
  undefined1 local_490 [4];
  int iStack_48c;
  undefined1 uStack_488;
  undefined1 uStack_487;
  undefined1 local_486;
  undefined4 local_480;
  undefined4 local_47c;
  short local_46f;
  undefined1 auStack_46d [1029];
  long local_68;
  
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  piVar15 = *(int **)(*param_1 + 0x218);
  local_4a8 = 0;
  local_68 = lVar14;
  if (*piVar15 != 0) {
LAB_101104458:
    uVar11 = FUN_101104a00(param_1,&local_4a8);
    lVar9 = local_4a8;
    if (((int)uVar11 != 0) && ((int)uVar11 != 0x51)) goto LAB_1011048a4;
    if (local_4a8 == 0) {
      uVar11 = 0;
      goto LAB_1011048ac;
    }
    switch(*piVar15) {
    case 1:
      if (*(int *)(local_4a8 + 9) == 0) {
        *(undefined2 *)(piVar15 + 6) = *(undefined2 *)(local_4a8 + 0x1c);
        param_1[0xaf] = 0;
switchD_101104780_caseD_2:
        lVar13 = *param_1;
        lVar9 = *(long *)(lVar13 + 0x218);
        sVar5 = _strlen(*(char **)(lVar9 + 0x10));
        if (sVar5 + 1 < 0x401) {
          _bzero(&local_4a0,0x433);
          local_4a0 = 0x18;
          uStack_49f = 0xff;
          sVar5 = _strlen(*(char **)(lVar9 + 0x10));
          uStack_49a = (undefined1)sVar5;
          uStack_499 = (undefined1)(sVar5 >> 8);
          local_480 = 7;
          bVar2 = *(char *)(lVar13 + 0x501) != '\0';
          local_490 = (undefined1  [4])0x80000000;
          if (bVar2) {
            local_490 = (undefined1  [4])0xc0000000;
          }
          local_47c = 1;
          if (bVar2) {
            local_47c = 5;
          }
          local_46f = (short)sVar5 + 1;
          ___strcpy_chk(auStack_46d,*(undefined8 *)(lVar9 + 0x10),0x400);
          uVar11 = FUN_101104ba8(param_1,0xa2,&local_4a0,sVar5 + 0x34);
        }
        else {
          uVar11 = 0x3f;
        }
        uVar8 = 2;
        break;
      }
      iVar3 = 9;
      if (*(int *)(local_4a8 + 9) != 0x50001) {
        iVar3 = 0x4e;
      }
      piVar15[7] = iVar3;
    case 6:
      param_1[0xaf] = 0;
switchD_101104780_caseD_7:
      uVar11 = (ulong)(uint)piVar15[7];
      *param_2 = 1;
      uVar8 = 7;
      break;
    case 2:
      if (*(int *)(local_4a8 + 9) == 0) {
        *(undefined2 *)((long)piVar15 + 0x1a) = *(undefined2 *)(local_4a8 + 0x2a);
        lVar9 = *param_1;
        *(undefined8 *)(lVar9 + 0x120) = 0;
        if (*(char *)(lVar9 + 0x501) == '\0') {
          *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(local_4a8 + 0x5c);
          FUN_1010d22cc();
          param_1[0xaf] = 0;
          goto switchD_101104780_caseD_3;
        }
        *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar9 + 0x8ae8);
        FUN_1010d22f4();
        param_1[0xaf] = 0;
switchD_101104780_caseD_4:
        lVar13 = *param_1;
        lVar9 = *(long *)(lVar13 + 0x218);
        uVar16 = *(undefined8 *)(lVar13 + 0x120);
        lVar18 = *(long *)(lVar13 + 0x78) - *(long *)(lVar13 + 0x98);
        _memset((void *)(lVar13 + 0x4909),0,0x44);
        *(undefined2 *)(lVar13 + 0x492d) = 0xff0e;
        *(undefined2 *)(lVar13 + 0x4932) = *(undefined2 *)(lVar9 + 0x1a);
        *(int *)(lVar13 + 0x4934) = (int)uVar16;
        *(int *)(lVar13 + 0x4946) = (int)((ulong)uVar16 >> 0x20);
        lVar9 = lVar18;
        if (0x7ffe < lVar18) {
          lVar9 = 0x7fff;
        }
        *(short *)(lVar13 + 0x4942) = (short)lVar9;
        *(undefined2 *)(lVar13 + 0x4944) = 0x40;
        sVar17 = (short)lVar18;
        if (0x7ffe < lVar18) {
          sVar17 = 0x7fff;
        }
        *(short *)(lVar13 + 0x494a) = sVar17 + 1;
        FUN_101104c10(param_1,(void *)(lVar13 + 0x4909),0x2f,lVar9 + 0x20);
        uVar11 = FUN_101104c94(param_1,0x44,lVar9);
        uVar8 = 4;
        break;
      }
      piVar15[7] = 0x4e;
    case 5:
      param_1[0xaf] = 0;
switchD_101104780_caseD_6:
      uStack_49e = 0;
      local_4a0 = 0;
      uStack_49f = 0;
      uVar11 = FUN_101104ba8(param_1,0x71,&local_4a0,3);
      uVar8 = 6;
      break;
    case 3:
      if (*(int *)(local_4a8 + 9) == 0) {
        iVar3 = FUN_101104d04(local_4a8 + 0x2f);
        uVar7 = FUN_101104d04(lVar9 + 0x31);
        if (iVar3 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (ulong)(uint)(int)(short)iVar3 & 0xffff;
          iVar4 = FUN_1010d98ec(param_1,1,lVar9 + (uVar7 & 0xffffffff) + 4,uVar12);
          if (iVar4 != 0) {
            piVar15[7] = iVar4;
            goto LAB_1011045f4;
          }
          uVar11 = 0;
        }
        lVar9 = *param_1;
        *(ulong *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + uVar12;
        *(ulong *)(lVar9 + 0x120) = *(long *)(lVar9 + 0x120) + uVar12;
        FUN_1010d2460();
        uVar8 = 5;
        if ((short)iVar3 < 0) {
          uVar8 = 3;
        }
        goto LAB_101104760;
      }
      piVar15[7] = 0x38;
LAB_1011045f4:
      param_1[0xaf] = 0;
switchD_101104780_caseD_5:
      uStack_498 = 0;
      uStack_49d = 0;
      uStack_49b = 0;
      uStack_49a = 0;
      uStack_499 = 0;
      local_4a0 = 3;
      uVar1 = *(undefined2 *)(*(long *)(*param_1 + 0x218) + 0x1a);
      uStack_49f = (undefined1)uVar1;
      uStack_49e = (undefined1)((ushort)uVar1 >> 8);
      uVar11 = FUN_101104ba8(param_1,4,&local_4a0,9);
      uVar8 = 5;
      break;
    case 4:
      if (*(int *)(local_4a8 + 9) != 0) {
        piVar15[7] = 0x19;
        goto LAB_1011045f4;
      }
      uVar7 = FUN_101104d04(local_4a8 + 0x29);
      lVar9 = *param_1;
      *(ulong *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) + (uVar7 & 0xffffffff);
      *(ulong *)(lVar9 + 0x120) = *(long *)(lVar9 + 0x120) + (uVar7 & 0xffffffff);
      FUN_1010d2468(lVar9);
      uVar8 = 4;
      if (*(long *)(*param_1 + 0x78) <= *(long *)(*param_1 + 0x98)) {
        uVar8 = 5;
      }
LAB_101104760:
      param_1[0xaf] = 0;
      switch(uVar8) {
      case 2:
        goto switchD_101104780_caseD_2;
      case 3:
switchD_101104780_caseD_3:
        uVar16 = *(undefined8 *)(*param_1 + 0x120);
        local_486 = 0;
        uStack_487 = 0;
        uStack_491 = 0;
        local_490 = (undefined1  [4])0x0;
        uStack_49e = 0;
        uStack_49d = 0;
        local_4a0 = 0xc;
        uStack_49f = 0xff;
        uVar1 = *(undefined2 *)(*(long *)(*param_1 + 0x218) + 0x1a);
        uStack_49b = (undefined1)uVar1;
        uStack_49a = (undefined1)((ushort)uVar1 >> 8);
        uStack_499 = (undefined1)uVar16;
        uStack_498 = (undefined1)((ulong)uVar16 >> 8);
        sStack_497 = (short)((ulong)uVar16 >> 0x10);
        iStack_48c = (int)((ulong)uVar16 >> 0x20) << 8;
        uStack_488 = (undefined1)((ulong)uVar16 >> 0x38);
        uStack_493._0_1_ = 0;
        uStack_493._1_1_ = 0x80;
        uStack_495 = 0x8000;
        uVar11 = FUN_101104ba8(param_1,0x2e,&local_4a0,0x1b);
        uVar8 = 3;
        break;
      case 4:
        goto switchD_101104780_caseD_4;
      case 5:
        goto switchD_101104780_caseD_5;
      case 6:
        goto switchD_101104780_caseD_6;
      case 7:
        goto switchD_101104780_caseD_7;
      }
      break;
    default:
      uVar11 = 0;
      param_1[0xaf] = 0;
      goto LAB_1011048ac;
    }
    if ((int)uVar11 == 0) {
      uVar11 = 0;
      **(undefined4 **)(*param_1 + 0x218) = uVar8;
    }
    else {
LAB_1011048a4:
      *(undefined1 *)(param_1 + 0x59) = 1;
    }
LAB_1011048ac:
    if (lVar14 != local_68) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return uVar11;
  }
  pcVar10 = (char *)param_1[0x18];
  sVar5 = _strlen(pcVar10);
  sVar6 = _strlen(*(char **)(piVar15 + 2));
  if (sVar5 + sVar6 + 10 < 0x401) {
    _bzero(&local_4a0,0x40b);
    local_4a0 = 4;
    uStack_49f = 0xff;
    uStack_499 = 0;
    uStack_498 = 0;
    uStack_493._0_1_ = 0;
    uStack_495 = 0x5c5c;
    ___strcpy_chk(&uStack_493,pcVar10,0x3fe);
    sVar5 = _strlen((char *)param_1[0x18]);
    *(undefined2 *)((long)&uStack_493 + sVar5) = 0x5c;
    _strcpy((char *)((long)&uStack_493 + sVar5 + 1),*(char **)(piVar15 + 2));
    sVar6 = _strlen(*(char **)(piVar15 + 2));
    lVar9 = sVar5 + sVar6;
    *(undefined2 *)(local_490 + lVar9 + 3) = 0x3f;
    *(undefined4 *)(local_490 + lVar9 + -1) = 0x3f3f3f3f;
    sStack_497 = (short)lVar9 + 10;
    uVar11 = FUN_101104ba8(param_1,0x75,&local_4a0,lVar9 + 0x15);
    if ((int)uVar11 == 0) {
      **(undefined4 **)(*param_1 + 0x218) = 1;
      goto LAB_101104458;
    }
  }
  else {
    uVar11 = 0x3f;
  }
  goto LAB_1011048a4;
}




undefined4 FUN_101104924(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x1d0);
  uVar1 = 0x10000;
  if ((*(long *)(param_1 + 0x568) == 0) && (uVar1 = 1, *(long *)(param_1 + 0x560) != 0)) {
    uVar1 = 0x10000;
  }
  return uVar1;
}




undefined8 FUN_10110495c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  if (param_1[0xa8] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[0xa8] = 0;
  }
  if (param_1[0xab] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[0xab] = 0;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    if (*(long *)(*param_1 + 0x218) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(*param_1 + 0x218) = 0;
    }
  }
  return 0;
}




undefined8 FUN_101104a00(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int local_3c;
  long local_38;
  
  lVar5 = param_1[0xad];
  if (lVar5 == 0) {
    uVar4 = param_1[0xac];
    if (uVar4 == 0) {
LAB_101104ae8:
      lVar5 = param_1[0xab];
      uVar2 = FUN_1010d9ad8(param_1,0,lVar5 + param_1[0xaf],0x9000 - param_1[0xaf],&local_38);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((local_38 != 0) &&
         (lVar6 = param_1[0xaf], param_1[0xaf] = lVar6 + local_38, 3 < (ulong)(lVar6 + local_38))) {
        lVar6 = FUN_101104d3c(lVar5 + 2);
        uVar4 = lVar6 + 4;
        if (uVar4 <= (ulong)param_1[0xaf]) {
          if (0x24 < uVar4) {
            uVar3 = (ulong)*(byte *)(lVar5 + 0x24) << 1 | 1;
            uVar1 = uVar3 + 0x26;
            if ((uVar1 <= uVar4) &&
               (uVar3 = FUN_101104d04(uVar3 + lVar5 + 0x24), uVar4 < uVar1 + (uVar3 & 0xffffffff)))
            {
              return 0x1a;
            }
          }
          *param_2 = lVar5;
          return 0;
        }
      }
    }
    else {
      local_3c = 0x4000;
      if (uVar4 < 0x4001) {
        local_3c = (int)uVar4;
      }
      *(long *)(*param_1 + 0x208) = *param_1 + 0x4909;
      uVar2 = FUN_1010e9874(param_1,local_3c,&local_3c);
      if (((int)uVar2 != 0) && ((int)uVar2 != 0x51)) {
        return uVar2;
      }
      lVar5 = (long)local_3c;
      if (local_3c != 0) {
        param_1[0xac] = param_1[0xac] - lVar5;
        param_1[0xad] = lVar5;
        param_1[0xae] = 0;
        goto LAB_101104a80;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_101104a80:
    lVar5 = lVar5 - param_1[0xae];
    uVar2 = FUN_1010d942c(param_1,0,*param_1 + param_1[0xae] + 0x4909,lVar5,&local_38);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (local_38 == lVar5) {
      param_1[0xad] = 0;
LAB_101104ad8:
      if (param_1[0xac] == 0) goto LAB_101104ae8;
    }
    else {
      param_1[0xae] = param_1[0xae] + local_38;
      if (param_1[0xad] == 0) goto LAB_101104ad8;
    }
    uVar2 = 0x51;
  }
  return uVar2;
}




void FUN_101104ba8(long *param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  FUN_101104c10(param_1,*param_1 + 0x4909,param_2);
  _memcpy((void *)(*param_1 + 0x492d),param_3,param_4);
  FUN_101104c94(param_1,param_4 + 0x24,0);
  return;
}




void FUN_101104c10(long *param_1,undefined8 *param_2,undefined1 param_3,int param_4)

{
  pid_t pVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 0x218);
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(ushort *)((long)param_2 + 2) =
       (ushort)(param_4 + 0x20U >> 8) & 0xff | (ushort)((param_4 + 0x20U & 0xffff) << 8);
  *(undefined4 *)((long)param_2 + 4) = 0x424d53ff;
  *(undefined1 *)(param_2 + 1) = param_3;
  *(undefined1 *)((long)param_2 + 0xd) = 0x18;
  *(undefined2 *)((long)param_2 + 0xe) = 0x41;
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)((long)param_1 + 0x554);
  *(undefined2 *)((long)param_2 + 0x1c) = *(undefined2 *)(lVar2 + 0x18);
  pVar1 = _getpid();
  *(short *)(param_2 + 2) = (short)((uint)pVar1 >> 0x10);
  *(short *)((long)param_2 + 0x1e) = (short)pVar1;
  return;
}




undefined8 FUN_101104c94(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long local_38;
  
  uVar1 = FUN_1010d942c(param_1,0,*param_1 + 0x4909,param_2,&local_38);
  if ((int)uVar1 == 0) {
    if (local_38 != param_2) {
      param_1[0xad] = param_2;
      param_1[0xae] = local_38;
    }
    uVar1 = 0;
    param_1[0xac] = param_3;
  }
  return uVar1;
}




undefined2 FUN_101104d04(undefined2 *param_1)

{
  return *param_1;
}




undefined4 FUN_101104d18(undefined4 *param_1)

{
  return *param_1;
}




undefined2 FUN_101104d3c(undefined1 *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}




void FUN_101104d4c(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((ulong)param_1 >> 8);
  param_2[2] = (char)((ulong)param_1 >> 0x10);
  param_2[3] = (char)((ulong)param_1 >> 0x18);
  param_2[4] = (char)((ulong)param_1 >> 0x20);
  param_2[5] = (char)((ulong)param_1 >> 0x28);
  param_2[6] = (char)((ulong)param_1 >> 0x30);
  param_2[7] = (char)((ulong)param_1 >> 0x38);
  return;
}




undefined8 FUN_101104d8c(long *param_1,long *param_2)

{
  int iVar1;
  
  if (((*param_1 == *param_2) && ((char)param_1[2] == (char)param_2[2])) &&
     (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11))) {
    if ((param_1[3] == 0) || (param_2[3] == 0)) {
      if (param_1[3] != 0 || param_2[3] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_1010f659c();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[4] == 0) || (param_2[4] == 0)) {
      if (param_1[4] != 0 || param_2[4] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_1010f659c();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[7] == 0) || (param_2[7] == 0)) {
      if (param_1[7] != 0 || param_2[7] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_1010f659c();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[8] == 0) || (param_2[8] == 0)) {
      if (param_1[8] != 0 || param_2[8] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_1010f659c();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[9] == 0) || (param_2[9] == 0)) {
      if (param_1[9] == 0 && param_2[9] == 0) {
        return 1;
      }
    }
    else {
      iVar1 = FUN_1010f659c();
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_101104e9c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)((long)param_2 + 0x11) = *(undefined1 *)((long)param_1 + 0x11);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
  *param_2 = *param_1;
  if (param_1[4] == 0) {
    param_2[4] = 0;
LAB_101104ef8:
    if (param_1[3] == 0) {
      param_2[3] = 0;
    }
    else {
      lVar1 = (*(code *)PTR__strdup_101873638)();
      param_2[3] = lVar1;
      if (lVar1 == 0) goto LAB_101104f90;
    }
    if (param_1[9] == 0) {
      param_2[9] = 0;
    }
    else {
      lVar1 = (*(code *)PTR__strdup_101873638)();
      param_2[9] = lVar1;
      if (lVar1 == 0) goto LAB_101104f90;
    }
    if (param_1[8] == 0) {
      param_2[8] = 0;
    }
    else {
      lVar1 = (*(code *)PTR__strdup_101873638)();
      param_2[8] = lVar1;
      if (lVar1 == 0) goto LAB_101104f90;
    }
    if (param_1[7] == 0) {
      param_2[7] = 0;
    }
    else {
      lVar1 = (*(code *)PTR__strdup_101873638)();
      param_2[7] = lVar1;
      if (lVar1 == 0) goto LAB_101104f90;
    }
    uVar2 = 1;
  }
  else {
    lVar1 = (*(code *)PTR__strdup_101873638)();
    param_2[4] = lVar1;
    if (lVar1 != 0) goto LAB_101104ef8;
LAB_101104f90:
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_101104fac(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}




uint FUN_101105054(undefined8 param_1)

{
  int iVar1;
  int extraout_w1;
  uint local_34;
  
  local_34 = 0;
  iVar1 = FUN_1011066d0(&local_34,4);
  if (iVar1 != 0) {
    if (DAT_101ea5fac != '\x01') {
      iVar1 = FUN_1010d0e58();
      FUN_1010d909c(param_1,"WARNING: Using weak random seed\n");
      DAT_101ea5fa8 = (extraout_w1 + iVar1 + DAT_101ea5fa8) * -0x7f82434b + 0xa70427df;
      DAT_101ea5fac = '\x01';
    }
    DAT_101ea5fa8 = DAT_101ea5fa8 * 0x41c64e6d + 0x3039;
    local_34 = DAT_101ea5fa8 >> 0x10 | DAT_101ea5fa8 * 0x10000;
  }
  return local_34;
}




undefined8 FUN_101105124(void)

{
  if ((DAT_101ea5fad & 1) == 0) {
    DAT_101ea5fad = 1;
  }
  return 1;
}




void FUN_101105140(void)

{
  if (DAT_101ea5fad == '\x01') {
    DAT_101ea5fad = '\0';
  }
  return;
}




undefined8 FUN_101105158(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + (long)param_2 * 5 + 0x41) = 1;
  *(undefined4 *)((long)param_1 + (long)param_2 * 0x28 + 0x20c) = 1;
  uVar1 = FUN_10110659c();
  if ((int)uVar1 == 0) {
    FUN_1010d231c(*param_1,5);
  }
  return uVar1;
}




undefined8 FUN_1011051a8(undefined8 *param_1,int param_2,char *param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + (long)param_2 * 5 + 0x41) = 1;
  uVar1 = FUN_101105734();
  if (((int)uVar1 == 0) && (*param_3 != '\0')) {
    FUN_1010d231c(*param_1,5);
  }
  return uVar1;
}




undefined8 FUN_101105208(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar3 = *param_1;
  *param_2 = 0;
  if ((char)param_1[0x58] == '\0') {
    uVar4 = 1;
  }
  else {
    if ((*(byte **)(lVar3 + 0x70) == (byte *)0x0) || ((**(byte **)(lVar3 + 0x70) >> 4 & 1) == 0)) {
      plVar5 = (long *)(lVar3 + 0x8930);
    }
    else {
      FUN_1010f2820(lVar3,4,2);
      plVar5 = (long *)(*(long *)(lVar3 + 0x70) + 0x40);
    }
    if (*(long *)(lVar3 + 0x480) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar8 = *(long *)(lVar3 + 0x8928);
        if ((((*(long *)(lVar8 + lVar6 + 8) != 0) &&
             (iVar1 = FUN_1010f659c(param_1[0x18],*(undefined8 *)(lVar8 + lVar6)), iVar1 != 0)) &&
            ((int)param_1[0x1f] == *(int *)(lVar8 + lVar6 + 0x20))) &&
           (iVar1 = FUN_101104d8c(param_1 + 0x4b,lVar8 + lVar6 + 0x28), iVar1 != 0)) {
          lVar2 = *plVar5;
          *plVar5 = lVar2 + 1;
          lVar8 = lVar8 + lVar6;
          *(long *)(lVar8 + 0x18) = lVar2 + 1;
          *param_2 = *(undefined8 *)(lVar8 + 8);
          uVar4 = 0;
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = *(undefined8 *)(lVar8 + 0x10);
          }
          goto LAB_1011052f4;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x98;
      } while (uVar7 < *(ulong *)(lVar3 + 0x480));
    }
    uVar4 = 1;
LAB_1011052f4:
    if ((*(byte **)(lVar3 + 0x70) != (byte *)0x0) && ((**(byte **)(lVar3 + 0x70) >> 4 & 1) != 0)) {
      FUN_1010f2868(lVar3,4);
    }
  }
  return uVar4;
}




void FUN_101105360(long *param_1)

{
  if (param_1[1] != 0) {
    FUN_101106620();
    param_1[1] = 0;
    param_1[3] = 0;
    FUN_101104fac(param_1 + 5);
    if (*param_1 != 0) {
      (*(code *)PTR__free_101873628)();
      *param_1 = 0;
    }
  }
  return;
}




undefined8 FUN_1011053b4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar7 = *param_1;
  plVar1 = (long *)(lVar7 + 0x8928);
  plVar6 = (long *)*plVar1;
  lVar9 = plVar6[3];
  lVar3 = (*(code *)PTR__strdup_101873638)(param_1[0x18]);
  if (lVar3 != 0) {
    if ((*(byte **)(lVar7 + 0x70) == (byte *)0x0) || ((**(byte **)(lVar7 + 0x70) >> 4 & 1) == 0)) {
      plVar8 = (long *)(lVar7 + 0x8930);
    }
    else {
      FUN_1010f2820(lVar7,4,2);
      plVar8 = (long *)(*(long *)(lVar7 + 0x70) + 0x40);
    }
    uVar5 = *(ulong *)(lVar7 + 0x480);
    uVar4 = 1;
    if (1 < uVar5) {
      uVar4 = 1;
      plVar2 = (long *)*plVar1;
      do {
        if (plVar2[0x14] == 0) break;
        if (plVar2[0x16] < lVar9) {
          lVar9 = plVar2[0x16];
          plVar6 = plVar2 + 0x13;
        }
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 0x13;
      } while (uVar4 < uVar5);
    }
    if (uVar4 == uVar5) {
      FUN_101105360(plVar6);
    }
    else {
      plVar6 = (long *)(*plVar1 + uVar4 * 0x98);
    }
    plVar6[1] = param_2;
    plVar6[2] = param_3;
    plVar6[3] = *plVar8;
    if (*plVar6 != 0) {
      (*(code *)PTR__free_101873628)();
    }
    *plVar6 = lVar3;
    *(int *)(plVar6 + 4) = (int)param_1[0x1f];
    if ((*(byte **)(lVar7 + 0x70) != (byte *)0x0) && ((**(byte **)(lVar7 + 0x70) >> 4 & 1) != 0)) {
      FUN_1010f2868(lVar7,4);
    }
    uVar4 = FUN_101104e9c(param_1 + 0x4b,plVar6 + 5);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    plVar6[1] = 0;
    (*(code *)PTR__free_101873628)(lVar3);
  }
  return 0x1b;
}




void FUN_101105540(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  plVar1 = (long *)(param_1 + 0x8928);
  lVar2 = *plVar1;
  if ((lVar2 != 0) &&
     ((*(byte **)(param_1 + 0x70) == (byte *)0x0 || ((**(byte **)(param_1 + 0x70) >> 4 & 1) == 0))))
  {
    if (*(long *)(param_1 + 0x480) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        FUN_101105360(lVar2 + lVar3);
        uVar4 = uVar4 + 1;
        lVar2 = *plVar1;
        lVar3 = lVar3 + 0x98;
      } while (uVar4 < *(ulong *)(param_1 + 0x480));
      if (lVar2 == 0) goto LAB_1011055bc;
    }
    (*(code *)PTR__free_101873628)();
    *plVar1 = 0;
  }
LAB_1011055bc:
  FUN_10110661c(param_1);
  return;
}




void thunk_FUN_1011065c4(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + (long)param_2 * 0x28;
  if (*(long *)(lVar2 + 0x210) != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x210);
    _SSLClose();
    _CFRelease(*puVar1);
    *puVar1 = 0;
  }
  *(undefined4 *)(param_1 + (long)param_2 * 0x28 + 0x218) = 0;
  return;
}




undefined8 FUN_1011055d4(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (long)param_2 * 0x28;
  *(undefined1 *)(lVar1 + 0x208) = 0;
  *(undefined4 *)(lVar1 + 0x20c) = 0;
  param_1 = param_1 + (long)param_2 * 8;
  *(code **)(param_1 + 0x1e8) = FUN_1010d959c;
  *(code **)(param_1 + 0x1f8) = FUN_1010d94a0;
  return 0;
}




undefined8 FUN_10110560c(void)

{
  return 4;
}




undefined8 FUN_101105614(void)

{
  return 4;
}




undefined8 FUN_10110561c(void)

{
  return 0;
}




undefined8 FUN_101105624(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x8928) == 0) {
    lVar2 = (*(code *)PTR__calloc_101873640)(param_2,0x98);
    if (lVar2 == 0) {
      uVar1 = 0x1b;
    }
    else {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x480) = param_2;
      *(long *)(param_1 + 0x8928) = lVar2;
      *(undefined8 *)(param_1 + 0x8930) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




ulong thunk_FUN_101106638(long param_1)

{
  int iVar1;
  ulong uVar2;
  int iStack_14;
  
  if (*(long *)(param_1 + 0x210) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = _SSLGetSessionState(*(long *)(param_1 + 0x210),&iStack_14);
    if (iVar1 == 0) {
      uVar2 = (ulong)(iStack_14 - 1U < 2);
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}




bool thunk_FUN_101106684(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lStack_18;
  
  lVar3 = *(long *)(param_1 + (long)param_2 * 0x28 + 0x210);
  if ((lVar3 == 0) || (iVar2 = _SSLGetBufferedReadSize(lVar3,&lStack_18), iVar2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = lStack_18 != 0;
  }
  return bVar1;
}




void FUN_1011056ac(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  
  piVar1 = (int *)(param_1 + 0x8bf0);
  if (*piVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x8bf8);
    if (0 < *piVar1) {
      lVar3 = 0;
      do {
        FUN_1010f6eb4(*(undefined8 *)(*plVar2 + lVar3 * 8));
        *(undefined8 *)(*plVar2 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *piVar1);
    }
    (*(code *)PTR__free_101873628)(*plVar2);
    *plVar2 = 0;
    *piVar1 = 0;
  }
  return;
}




void FUN_101105734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_101105744(param_1,param_2,1,param_3);
  return;
}




undefined8 FUN_101105744(long *param_1,undefined8 param_2,int param_3,undefined1 *param_4)

{
  uint *puVar1;
  long *plVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  long lVar13;
  long lVar14;
  size_t sVar15;
  ushort *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined1 uVar21;
  int iVar22;
  long lVar23;
  undefined8 uVar24;
  char *pcVar25;
  long lVar26;
  long lVar27;
  undefined8 local_170;
  undefined8 local_168;
  size_t local_160;
  char *local_158;
  long local_150;
  undefined1 auStack_148 [16];
  long local_138;
  int local_12c;
  undefined8 local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  stat local_f8;
  long local_68;
  uint uVar12;
  
  lVar26 = *(long *)PTR____stack_chk_guard_101444218;
  iVar10 = (int)param_2;
  lVar27 = (long)iVar10;
  local_68 = lVar26;
  if (*(int *)((long)param_1 + lVar27 * 0x28 + 0x20c) == 2) {
    uVar24 = 0;
    *param_4 = 1;
    goto LAB_101106554;
  }
  lVar23 = *param_1;
  uVar5 = *(undefined4 *)((long)param_1 + (long)iVar10 * 4 + 0x1d0);
  puVar1 = (uint *)((long)param_1 + lVar27 * 0x28 + 0x21c);
  uVar12 = *(uint *)((long)param_1 + lVar27 * 0x28 + 0x21c);
  if (uVar12 != 0) goto LAB_101106370;
  lVar13 = FUN_1010edb38(lVar23,0,1);
  if (lVar13 < 0) {
LAB_101106354:
    FUN_1010d9258(lVar23,"SSL connection timeout");
    uVar24 = 0x1c;
    goto LAB_101106554;
  }
  lVar13 = *param_1;
  uVar6 = *(undefined4 *)((long)param_1 + (long)iVar10 * 4 + 0x1d0);
  local_150 = 0;
  plVar2 = param_1 + lVar27 * 5 + 0x42;
  if (param_1[lVar27 * 5 + 0x42] != 0) {
    _CFRelease();
  }
  lVar14 = _SSLCreateContext(0,1,0);
  *plVar2 = lVar14;
  if (lVar14 == 0) {
    FUN_1010d9258(lVar13,"SSL: couldn\'t create a context!");
    uVar24 = 0x1b;
  }
  else {
    param_1[lVar27 * 5 + 0x45] = 0;
    switch(*(undefined8 *)(lVar13 + 0x430)) {
    case 2:
      iVar10 = _SSLSetProtocolVersionMin(lVar14,1);
      if (iVar10 != 0) {
        pcVar25 = "Your version of the OS does not support SSLv2";
LAB_1011058d8:
        FUN_1010d9258(lVar13,pcVar25);
        uVar24 = 0x23;
        goto LAB_101105ea8;
      }
      lVar14 = *plVar2;
      uVar24 = 1;
      break;
    case 3:
      iVar10 = _SSLSetProtocolVersionMin(lVar14,2);
      if (iVar10 != 0) {
        pcVar25 = "Your version of the OS does not support SSLv3";
        goto LAB_1011058d8;
      }
      lVar14 = *plVar2;
      uVar24 = 2;
      break;
    case 4:
      _SSLSetProtocolVersionMin(lVar14,4);
      lVar14 = *plVar2;
      uVar24 = 4;
      break;
    case 5:
      _SSLSetProtocolVersionMin(lVar14,7);
      lVar14 = *plVar2;
      uVar24 = 7;
      break;
    case 6:
      _SSLSetProtocolVersionMin(lVar14,8);
      lVar14 = *plVar2;
      uVar24 = 8;
      break;
    default:
      _SSLSetProtocolVersionMin(lVar14,4);
      _SSLSetProtocolVersionMax(*plVar2,8);
      goto LAB_101105958;
    }
    _SSLSetProtocolVersionMax(lVar14,uVar24);
LAB_101105958:
    if (*(long *)(lVar13 + 0x5a0) != 0) {
      FUN_1010d909c(lVar13,
                    "WARNING: SSL: CURLOPT_SSLKEY is ignored by Secure Transport. The private key must be in the Keychain.\n"
                   );
    }
    if (*(long *)(lVar13 + 0x550) != 0) {
      local_168 = 0;
      if (((*(char **)(lVar13 + 0x550) == (char *)0x0) ||
          (iVar10 = _stat(*(char **)(lVar13 + 0x550),&local_f8), iVar10 != 0)) ||
         ((local_f8.st_mode & 0xf000) != 0x8000)) {
        lVar26 = *(long *)PTR__kSecClassIdentity_101444310;
        if (lVar26 == 0) {
          iVar10 = -0x62d4;
        }
        else {
          uVar24 = _CFStringCreateWithCString(0,*(undefined8 *)(lVar13 + 0x550),0x8000100);
          local_f8._0_8_ = *(undefined8 *)PTR__kSecClass_101444300;
          local_110 = *(undefined8 *)PTR__kCFBooleanTrue_101444280;
          local_f8.st_ino = *(__darwin_ino64_t *)PTR__kSecReturnRef_101444358;
          local_108 = *(undefined8 *)PTR__kSecMatchLimitOne_101444338;
          local_f8._16_8_ = *(undefined8 *)PTR__kSecMatchLimit_101444328;
          local_118 = lVar26;
          local_100 = _SecPolicyCreateSSL(0,uVar24);
          local_f8._24_8_ = *(undefined8 *)PTR__kSecMatchPolicy_101444340;
          uVar17 = _CFDictionaryCreate(0,&local_f8,&local_118,4,
                                       PTR__kCFCopyStringDictionaryKeyCallBacks_101444298,
                                       PTR__kCFTypeDictionaryValueCallBacks_1014442b8);
          _CFRelease(local_100);
          _CFRelease(uVar24);
          iVar10 = _SecItemCopyMatching(uVar17,&local_168);
          _CFRelease(uVar17);
        }
        lVar26 = *(long *)PTR____stack_chk_guard_101444218;
      }
      else {
        pcVar25 = *(char **)(lVar13 + 0x558);
        if (pcVar25 == (char *)0x0) {
          FUN_1010d909c(lVar13,"WARNING: SSL: Certificate type not set, assuming PKCS#12 format.\n")
          ;
        }
        else {
          sVar15 = _strlen(pcVar25);
          iVar10 = _strncmp(pcVar25,"P12",sVar15);
          if (iVar10 != 0) {
            FUN_1010d909c(lVar13,
                          "WARNING: SSL: The Security framework only supports loading identities that are in PKCS#12 format.\n"
                         );
          }
        }
        pcVar25 = *(char **)(lVar13 + 0x550);
        lVar26 = *(long *)(lVar13 + 0x5a8);
        local_12c = -0x62d4;
        sVar15 = _strlen(pcVar25);
        uVar24 = _CFURLCreateFromFileSystemRepresentation(0,pcVar25,sVar15,0);
        lVar14 = 0;
        if (lVar26 != 0) {
          lVar14 = _CFStringCreateWithCString(0,lVar26,0x8000100);
        }
        local_f8.st_dev = 0;
        local_f8.st_mode = 0;
        local_f8.st_nlink = 0;
        iVar10 = _CFURLCreateDataAndPropertiesFromResource(0,uVar24,&local_f8,0,0,&local_12c);
        lVar26 = *(long *)PTR____stack_chk_guard_101444218;
        if (iVar10 != 0) {
          local_118 = *(long *)PTR__kSecImportExportPassphrase_101444318;
          local_120 = lVar14;
          uVar17 = _CFDictionaryCreate(0,&local_118,&local_120,lVar14 != 0,0,0);
          local_138 = 0;
          local_12c = _SecPKCS12Import(local_f8._0_8_,uVar17,&local_138);
          if ((local_12c == 0 && local_138 != 0) && (lVar18 = _CFArrayGetCount(), lVar18 != 0)) {
            uVar19 = _CFArrayGetValueAtIndex(local_138,0);
            uVar19 = _CFDictionaryGetValue
                               (uVar19,*(undefined8 *)PTR__kSecImportItemIdentity_101444320);
            _CFRetain();
            lVar26 = *(long *)PTR____stack_chk_guard_101444218;
            local_168 = uVar19;
          }
          if (local_138 != 0) {
            _CFRelease();
          }
          _CFRelease(uVar17);
          _CFRelease(local_f8._0_8_);
        }
        if (lVar14 != 0) {
          _CFRelease(lVar14);
        }
        _CFRelease(uVar24);
        iVar10 = local_12c;
      }
      if (iVar10 < 0) {
        if (iVar10 < -0x62d4) {
          iVar22 = -0x66a3;
LAB_101105b08:
          if (iVar10 == iVar22) {
            pcVar25 = 
            "SSL: Couldn\'t make sense of the data in the certificate \"%s\" and its private key.";
          }
          else {
LAB_101105c80:
            pcVar25 = "SSL: Can\'t load the certificate \"%s\" and its private key: OSStatus %d";
          }
        }
        else if (iVar10 < -0x62cd) {
          if (iVar10 != -0x62d4) goto LAB_101105c80;
          pcVar25 = "SSL: Can\'t find the certificate \"%s\" and its private key in the Keychain.";
        }
        else if (iVar10 < -0x62ac) {
          if ((iVar10 != -0x62cd) && (iVar10 != -0x62b0)) goto LAB_101105c80;
          pcVar25 = "SSL: Incorrect password for the certificate \"%s\" and its private key.";
        }
        else {
          if (iVar10 != -0x62ac) {
            iVar22 = -0x62a9;
            goto LAB_101105b08;
          }
          pcVar25 = "SSL The certificate \"%s\" requires a password.";
        }
        FUN_1010d9258(lVar13,pcVar25);
        uVar24 = 0x3a;
        goto LAB_101105ea8;
      }
      if (iVar10 != 0) goto LAB_101105c80;
      local_170 = 0;
      iVar10 = _SecIdentityCopyCertificate(local_168,&local_170);
      if ((iVar10 == 0) && (lVar26 = _SecCertificateCopySubjectSummary(local_170), lVar26 != 0)) {
        _memset(&local_f8,0,0x80);
        iVar10 = _CFStringGetCString(lVar26,&local_f8,0x80,0x8000100);
        if (iVar10 != 0) {
          FUN_1010d909c(lVar13,"Client certificate: %s\n");
        }
        _CFRelease(lVar26);
        _CFRelease(local_170);
      }
      local_128 = local_168;
      lVar26 = _CFArrayCreate(0,&local_128,1,PTR__kCFTypeArrayCallBacks_1014442b0);
      iVar10 = _SSLSetCertificate(*plVar2,lVar26);
      if (lVar26 != 0) {
        _CFRelease(lVar26);
      }
      if (iVar10 != 0) {
        FUN_1010d9258(lVar13,"SSL: SSLSetCertificate() failed: OSStatus %d");
        uVar24 = 0x3a;
        lVar26 = *(long *)PTR____stack_chk_guard_101444218;
        goto LAB_101105ea8;
      }
      _CFRelease(local_168);
      lVar26 = *(long *)PTR____stack_chk_guard_101444218;
    }
    if (*(char *)(lVar13 + 0x440) == '\0') {
      bVar9 = true;
    }
    else {
      bVar9 = *(long *)(lVar13 + 0x5f0) != 0;
    }
    iVar10 = _SSLSetSessionOption(*plVar2,0,bVar9);
    if (iVar10 != 0) {
      pcVar25 = "SSL: SSLSetSessionOption() failed: OSStatus %d";
      goto LAB_101105d00;
    }
    if (*(char **)(lVar13 + 0x5f0) != (char *)0x0) {
      iVar10 = _stat(*(char **)(lVar13 + 0x5f0),&local_f8);
      if ((iVar10 != 0) || ((local_f8.st_mode & 0xf000) != 0x8000)) {
        FUN_1010d9258(lVar13,"SSL: can\'t load CA certificate file %s");
        uVar24 = 0x4d;
        goto LAB_101105ea8;
      }
      if (*(char *)(lVar13 + 0x440) == '\0') {
        pcVar25 = "SSL: CA certificate set, but certificate verification is disabled";
        goto LAB_101105d00;
      }
    }
    if (*(char *)(lVar13 + 0x441) != '\0') {
      lVar26 = *plVar2;
      pcVar25 = (char *)param_1[0x18];
      sVar15 = _strlen(pcVar25);
      iVar10 = _SSLSetPeerDomainName(lVar26,pcVar25,sVar15);
      if (iVar10 != 0) {
        FUN_1010d909c(lVar13,"WARNING: SSL: SSLSetPeerDomainName() failed: OSStatus %d\n");
      }
      iVar10 = _inet_pton(2,(char *)param_1[0x18],auStack_148);
      if ((iVar10 != 0) ||
         (iVar10 = _inet_pton(0x1e,(char *)param_1[0x18],auStack_148), iVar10 != 0)) {
        FUN_1010d909c(lVar13,"WARNING: using IP address, SNI is being disabled by the OS.\n");
      }
    }
    _SSLGetNumberSupportedCiphers(*plVar2,&local_150);
    puVar16 = (ushort *)(*(code *)PTR__malloc_101873620)(local_150 << 1);
    lVar26 = (*(code *)PTR__malloc_101873620)(local_150 << 1);
    if ((puVar16 == (ushort *)0x0 || lVar26 == 0) ||
       (iVar10 = _SSLGetSupportedCiphers(*plVar2,puVar16,&local_150), iVar10 != 0)) {
      if (puVar16 != (ushort *)0x0) {
        (*(code *)PTR__free_101873628)(puVar16);
      }
      if (lVar26 != 0) {
        (*(code *)PTR__free_101873628)(lVar26);
      }
      FUN_1010d9258(lVar13,"SSL: Failed to allocate memory for allowed ciphers");
      uVar24 = 0x1b;
      lVar26 = *(long *)PTR____stack_chk_guard_101444218;
    }
    else {
      lVar14 = 0;
      puVar3 = puVar16;
      for (lVar18 = local_150; lVar18 != 0; lVar18 = lVar18 + -1) {
        uVar7 = *puVar3;
        uVar11 = (uint)uVar7;
        uVar12 = (uint)uVar7;
        if (uVar7 < 0xc001) {
          if (uVar11 == 0x2b || uVar7 < 0x2b) {
            if (0x1c < uVar11 || (1 << (ulong)(uVar11 & 0x1f) & 0x1fb6dbcfU) == 0)
            goto LAB_10110613c;
          }
          else {
            if (uVar11 != 0xa5 && 0xa4 < uVar7) {
              uVar12 = uVar12 - 0xa6;
              uVar11 = 1 << (ulong)(uVar12 & 0x1f) & 0xccc03;
              bVar8 = 0x12 < uVar12;
              bVar9 = uVar12 == 0x13;
              goto LAB_101106124;
            }
            if (uVar11 == 0x6b || uVar7 < 0x6b) {
              if ((0x3b < uVar11) || ((1L << ((ulong)uVar7 & 0x3f) & 0xc10700000000000U) == 0)) {
LAB_10110613c:
                *(ushort *)(lVar26 + lVar14 * 2) = uVar7;
                lVar14 = lVar14 + 1;
              }
            }
            else if (1 < uVar11 - 0x6c) goto LAB_10110613c;
          }
        }
        else if (uVar11 < 0xff81) {
          uVar12 = uVar12 - 0xc001;
          uVar11 = 1 << (ulong)(uVar12 & 0x1f) & 0x1f08421;
          bVar8 = 0x17 < uVar12;
          bVar9 = uVar12 == 0x18;
LAB_101106124:
          if (bVar8 && !bVar9 || uVar11 == 0) goto LAB_10110613c;
        }
        else if (uVar12 != 0xff81) goto LAB_10110613c;
        puVar3 = puVar3 + 1;
      }
      iVar10 = _SSLSetEnabledCiphers(*plVar2,lVar26);
      if (iVar10 == 0) {
        (*(code *)PTR__free_101873628)(puVar16);
        (*(code *)PTR__free_101873628)(lVar26);
        _SSLSetSessionOption(*plVar2,4,*(byte *)(lVar13 + 0x522) ^ 1);
        uVar20 = FUN_101105208(param_1,&local_158,&local_160);
        if ((uVar20 & 1) == 0) {
          iVar10 = _SSLSetPeerID(*plVar2,local_158,local_160);
          lVar26 = *(long *)PTR____stack_chk_guard_101444218;
          if (iVar10 != 0) {
            pcVar25 = "SSL: SSLSetPeerID() failed: OSStatus %d";
            goto LAB_101105d00;
          }
          FUN_1010d909c(lVar13,"SSL re-using session ID\n");
LAB_1011062d4:
          iVar10 = _SSLSetIOFuncs(*plVar2,FUN_1011092bc,FUN_101109384);
          if (iVar10 == 0) {
            *(undefined4 *)(param_1 + lVar27 * 5 + 0x43) = uVar6;
            iVar10 = _SSLSetConnection(*plVar2,param_1 + lVar27 * 5 + 0x41);
            if (iVar10 == 0) {
              uVar24 = 0;
              *puVar1 = 1;
              goto LAB_101105ea8;
            }
            pcVar25 = "SSL: SSLSetConnection() failed: %d";
          }
          else {
            pcVar25 = "SSL: SSLSetIOFuncs() failed: OSStatus %d";
          }
          FUN_1010d9258(lVar13,pcVar25);
          uVar24 = 0x23;
        }
        else {
          pcVar25 = (char *)FUN_1010e7298("%s:%d:%d:%s:%hu");
          local_158 = pcVar25;
          local_160 = _strlen(pcVar25);
          iVar10 = _SSLSetPeerID(*plVar2,pcVar25,local_160);
          lVar26 = *(long *)PTR____stack_chk_guard_101444218;
          if (iVar10 == 0) {
            uVar24 = FUN_1011053b4(param_1,local_158,local_160);
            if ((int)uVar24 == 0) goto LAB_1011062d4;
            FUN_1010d9258(lVar13,"failed to store ssl session");
          }
          else {
            pcVar25 = "SSL: SSLSetPeerID() failed: OSStatus %d";
LAB_101105d00:
            FUN_1010d9258(lVar13,pcVar25);
            uVar24 = 0x23;
          }
        }
      }
      else {
        FUN_1010d9258(lVar13,"SSL: SSLSetEnabledCiphers() failed: OSStatus %d");
        uVar24 = 0x23;
        lVar26 = *(long *)PTR____stack_chk_guard_101444218;
      }
    }
  }
LAB_101105ea8:
  if ((int)uVar24 == 0) {
LAB_10110636c:
    uVar12 = *puVar1;
LAB_101106370:
    do {
      if (uVar12 == 5) goto LAB_101106514;
      if (uVar12 == 4) {
        lVar23 = *param_1;
        local_118 = 0;
        iVar10 = _SSLCopyPeerTrust(param_1[lVar27 * 5 + 0x42],&local_118);
        if (iVar10 == 0 && local_118 != 0) {
          lVar26 = _SecTrustGetCertificateCount();
          if (0 < lVar26) {
            lVar13 = 0;
            do {
              _SecTrustGetCertificateAtIndex(local_118,lVar13);
              uVar24 = _SecCertificateCopySubjectSummary();
              _memset(&local_f8,0,0x80);
              iVar10 = _CFStringGetCString(uVar24,&local_f8,0x80,0x8000100);
              if (iVar10 != 0) {
                FUN_1010d909c(lVar23,"Server certificate: %s\n");
              }
              _CFRelease(uVar24);
              lVar13 = lVar13 + 1;
            } while (lVar26 != lVar13);
          }
          _CFRelease();
          lVar26 = *(long *)PTR____stack_chk_guard_101444218;
        }
        *puVar1 = 5;
LAB_101106514:
        *(undefined4 *)((long)param_1 + lVar27 * 0x28 + 0x20c) = 2;
        param_1[lVar27 + 0x3d] = (long)FUN_101109118;
        param_1[lVar27 + 0x3f] = (long)FUN_1011091e0;
        uVar21 = 1;
LAB_101106548:
        uVar24 = 0;
        *param_4 = uVar21;
        *puVar1 = 0;
        break;
      }
      if (2 < uVar12 - 1) {
        uVar21 = 0;
        goto LAB_101106548;
      }
      lVar13 = FUN_1010edb38(lVar23,0,1);
      if (lVar13 < 0) goto LAB_101106354;
      uVar12 = *puVar1;
      if ((uVar12 & 0xfffffffe) == 2) {
        uVar6 = uVar5;
        if (uVar12 != 3) {
          uVar6 = 0xffffffff;
        }
        uVar4 = uVar5;
        if (uVar12 != 2) {
          uVar4 = 0xffffffff;
        }
        lVar14 = 0;
        if (param_3 == 0) {
          lVar14 = lVar13;
        }
        iVar10 = FUN_1010f37c8(uVar4,0xffffffff,uVar6,lVar14);
        if (iVar10 < 0) {
          ___error();
          FUN_1010d9258(lVar23,"select/poll on SSL socket, errno: %d");
          uVar24 = 0x23;
          break;
        }
        if (iVar10 == 0) {
          if (param_3 == 0) goto LAB_101106354;
          uVar24 = 0;
          *param_4 = 0;
          break;
        }
      }
      uVar24 = FUN_10110672c(param_1,param_2);
      if ((int)uVar24 != 0) break;
      if (param_3 == 0) goto LAB_10110636c;
      uVar12 = *puVar1;
      if (uVar12 - 1 < 3) {
        uVar24 = 0;
        break;
      }
    } while( true );
  }
LAB_101106554:
  if (lVar26 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar24;
}




void FUN_10110659c(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_101105744(param_1,param_2,0,&local_11);
  return;
}




void FUN_1011065c4(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + (long)param_2 * 0x28;
  if (*(long *)(lVar2 + 0x210) != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x210);
    _SSLClose();
    _CFRelease(*puVar1);
    *puVar1 = 0;
  }
  *(undefined4 *)(param_1 + (long)param_2 * 0x28 + 0x218) = 0;
  return;
}




void FUN_10110661c(void)

{
  return;
}




void FUN_101106620(long param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR__free_101873628)();
    return;
  }
  return;
}




ulong FUN_101106638(long param_1)

{
  int iVar1;
  ulong uVar2;
  int local_14;
  
  if (*(long *)(param_1 + 0x210) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = _SSLGetSessionState(*(long *)(param_1 + 0x210),&local_14);
    if (iVar1 == 0) {
      uVar2 = (ulong)(local_14 - 1U < 2);
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}




bool FUN_101106684(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long local_18;
  
  lVar3 = *(long *)(param_1 + (long)param_2 * 0x28 + 0x210);
  if ((lVar3 == 0) || (iVar2 = _SSLGetBufferedReadSize(lVar3,&local_18), iVar2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = local_18 != 0;
  }
  return bVar1;
}




undefined8 FUN_1011066d0(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar1 = 0;
    uVar2 = 0;
    do {
      if ((uVar2 & 3) == 0) {
        uVar1 = _arc4random();
      }
      *(char *)(param_1 + uVar2) = (char)uVar1;
      uVar1 = uVar1 >> 8;
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  return 0;
}




long FUN_101109118(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long local_28;
  
  local_28 = 0;
  iVar1 = _SSLRead(param_1[(long)param_2 * 5 + 0x42],param_3,param_4,&local_28);
  if (iVar1 < -0x264b) {
    if (iVar1 == -0x2658 || iVar1 == -0x264d) {
      *param_5 = 0;
      return -1;
    }
  }
  else {
    if (iVar1 == 0) {
      return local_28;
    }
    if (iVar1 == -0x264b) {
      if (local_28 != 0) {
        return local_28;
      }
      uVar2 = 0x51;
      goto LAB_1011091c8;
    }
  }
  FUN_1010d9258(*param_1,"SSLRead() return error %d");
  uVar2 = 0x38;
LAB_1011091c8:
  *param_5 = uVar2;
  return -1;
}




undefined8
FUN_1011091e0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_38;
  
  local_38 = 0;
  puVar1 = param_1 + (long)param_2 * 5 + 0x45;
  if (param_1[(long)param_2 * 5 + 0x45] == 0) {
    iVar2 = _SSLWrite(param_1[(long)param_2 * 5 + 0x42],param_3,param_4,&local_38);
    if (iVar2 == -0x264b) {
      *puVar1 = param_4;
      goto LAB_101109270;
    }
    if (iVar2 == 0) {
      return local_38;
    }
  }
  else {
    iVar2 = _SSLWrite(param_1[(long)param_2 * 5 + 0x42],0,0,&local_38);
    if (iVar2 == -0x264b) {
LAB_101109270:
      uVar4 = 0x51;
      goto LAB_1011092a0;
    }
    if (iVar2 == 0) {
      uVar3 = *puVar1;
      *puVar1 = 0;
      return uVar3;
    }
  }
  FUN_1010d9258(*param_1,"SSLWrite() returned error %d");
  uVar4 = 0x37;
LAB_1011092a0:
  *param_5 = uVar4;
  return 0xffffffffffffffff;
}




undefined4 FUN_1011092bc(long param_1,void *param_2,size_t *param_3)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 uVar4;
  size_t sVar5;
  size_t sVar6;
  
  sVar6 = *param_3;
  iVar1 = *(int *)(param_1 + 0x10);
  *param_3 = 0;
  sVar5 = sVar6;
  do {
    sVar2 = _read(iVar1,param_2,sVar5);
    if (sVar2 < 1) {
      piVar3 = ___error();
      if ((sVar2 == 0) || (iVar1 = *piVar3, iVar1 == 2)) {
        uVar4 = 0xffffd9b3;
      }
      else if (iVar1 == 0x23) {
        *(undefined1 *)(param_1 + 0x18) = 0;
        uVar4 = 0xffffd9b5;
      }
      else {
        uVar4 = 0xffffffdc;
        if (iVar1 == 0x36) {
          uVar4 = 0xffffd9b2;
        }
      }
      goto LAB_101109364;
    }
    sVar5 = sVar5 - sVar2;
    param_2 = (void *)((long)param_2 + sVar2);
  } while (sVar5 != 0);
  uVar4 = 0;
LAB_101109364:
  *param_3 = sVar6 - sVar5;
  return uVar4;
}




undefined8 FUN_101109384(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar6 = *param_3;
  *param_3 = 0;
  do {
    sVar2 = _write(iVar1,(void *)(param_2 + uVar5),uVar6 - uVar5);
    if (sVar2 < 1) {
      piVar4 = ___error();
      if (*piVar4 == 0x23) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        uVar3 = 0xffffd9b5;
      }
      else {
        uVar3 = 0xffffffdc;
      }
      goto LAB_101109404;
    }
    uVar5 = sVar2 + uVar5;
  } while (uVar5 < uVar6);
  uVar3 = 0;
LAB_101109404:
  *param_3 = uVar5;
  return uVar3;
}




void FUN_10110941c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_101444278;
  local_48 = lVar6;
  lVar2 = _CFDataCreate(uVar5);
  if (lVar2 == 0) {
    FUN_1010d9258(param_1,"SSL: failed to allocate array for CA certificate");
    uVar5 = 0x1b;
  }
  else {
    lVar3 = _SecCertificateCreateWithData(uVar5,lVar2);
    _CFRelease(lVar2);
    if (lVar3 == 0) {
      pcVar4 = "SSL: failed to create SecCertificate from CA certificate";
    }
    else {
      lVar2 = _SecCertificateCopySubjectSummary(lVar3);
      if (lVar2 == 0) {
        _CFRelease(lVar3);
        pcVar4 = "SSL: invalid CA certificate";
      }
      else {
        _memset(auStack_c8,0,0x80);
        iVar1 = _CFStringGetCString(lVar2,auStack_c8,0x80,0x8000100);
        if (iVar1 != 0) {
          _CFRelease(lVar2);
          _CFArrayAppendValue(param_4,lVar3);
          _CFRelease(lVar3);
          uVar5 = 0;
          goto LAB_101109538;
        }
        _CFRelease(lVar3);
        pcVar4 = "SSL: invalid CA certificate subject";
      }
    }
    FUN_1010d9258(param_1,pcVar4);
    uVar5 = 0x3c;
  }
LAB_101109538:
  if (lVar6 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}




undefined8 FUN_101109560(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 < -0x2656) {
    if (param_2 == -0x2673) {
      FUN_1010d9258(param_1,"SSL certificate peer hostname mismatch");
      return 0x33;
    }
switchD_1011095b8_caseD_ffffd9ad:
    pcVar1 = "SSL unexpected certificate error %d";
  }
  else {
    switch(param_2) {
    case -0x2656:
      pcVar1 = "SSL certificate problem: Certificate chain had an expired certificate";
      break;
    case -0x2655:
      pcVar1 = "SSL certificate problem: No root certificate";
      break;
    case -0x2654:
      pcVar1 = "SSL certificate problem: Untrusted root certificate";
      break;
    default:
      goto switchD_1011095b8_caseD_ffffd9ad;
    case -0x2650:
      FUN_1010d9258(param_1,
                    "SSL certificate problem: Couldn\'t understand the server certificate format");
      return 0x23;
    case -0x264f:
      pcVar1 = "SSL certificate problem: Invalid certificate chain";
    }
  }
  FUN_1010d9258(param_1,pcVar1);
  return 0x3c;
}




void FUN_101109640(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  return;
}




void FUN_101109650(long *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  puVar2 = (undefined4 *)0x0;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + ((ulong)(uint)-(int)param_2 | 0xfffffffffffffff0) + 0x10);
  }
  *puVar2 = (int)puVar2;
  *(undefined8 *)(puVar2 + 1) = 0x10000000;
  *(undefined8 *)(puVar2 + 3) = 0xffffffffffffffff;
  iVar3 = (int)*param_1;
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = iVar3 + (-iVar3 | 0xfffffff0U) + 0x10;
  }
  *(ulong *)(puVar2 + 1) =
       (ulong)(((int)param_1[3] + iVar3 & 0xfffffff0U) - iVar1 >> 4) | 0x10000000;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)puVar2;
  return;
}




bool FUN_1011096c4(ulong *param_1,ulong param_2)

{
  if (param_2 < *param_1) {
    return false;
  }
  return param_2 < *param_1 + (ulong)(uint)param_1[3];
}




long FUN_1011096ec(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 < 0x11) {
    param_3 = 0x10;
  }
  uVar3 = (ulong)param_3;
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    do {
      lVar4 = 0;
      if (lVar2 + 0x10 != 0) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = (lVar2 + 0xfU) / uVar3;
        }
        lVar4 = lVar2 + 0x10 + uVar3 + ~((lVar2 + 0xfU) - uVar1 * uVar3);
      }
      if (lVar4 + (param_2 & 0xffffffff) <= (ulong)(uint)(*(int *)(lVar2 + 4) << 4) + lVar2) {
        lVar2 = FUN_10110977c(param_1,lVar2,param_2);
        return lVar2 + 0x10;
      }
    } while ((*(uint *)(lVar2 + 0xc) != 0xffffffff) &&
            (lVar2 = *param_1 + (ulong)*(uint *)(lVar2 + 0xc), *param_1 != 0));
  }
  return 0;
}




void FUN_10110977c(long *param_1,int *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int *local_60 [4];
  long local_40;
  int *piStack_38;
  int *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  uVar12 = *(ulong *)(param_2 + 1);
  puVar11 = (undefined4 *)((ulong)(uint)((int)uVar12 << 4) + (long)param_2);
  uVar5 = (ulong)param_4;
  uVar14 = 0;
  if (uVar5 != 0) {
    uVar14 = ((long)puVar11 - (param_3 & 0xffffffff)) / uVar5;
  }
  lVar8 = uVar14 * uVar5;
  piVar3 = (int *)(lVar8 + -0x10);
  uVar14 = (long)piVar3 - (long)param_2;
  if (piVar3 < param_2) {
    piVar3 = (int *)0x0;
  }
  else {
    local_40 = 0;
    if ((uVar12 >> 0x1c & 0xfffffff0) != 0) {
      local_40 = (long)param_2 - (ulong)((uint)(uVar12 >> 0x1c) & 0xfffffff0);
    }
    lVar6 = *param_1;
    local_30[2] = puVar11;
    if ((undefined4 *)((ulong)*(uint *)(param_1 + 3) + lVar6 & 0xfffffffffffffff0) <= puVar11) {
      local_30[2] = (undefined4 *)0x0;
    }
    local_60[0] = (int *)0x0;
    if (param_2[4] != 0xffffffff) {
      local_60[0] = (int *)(lVar6 + (ulong)(uint)param_2[4]);
    }
    puVar7 = (undefined4 *)0x0;
    if (param_2[3] != 0xffffffff) {
      puVar7 = (undefined4 *)(lVar6 + (ulong)(uint)param_2[3]);
    }
    lVar6 = lVar8 + (param_3 & 0xffffffff);
    puVar9 = (undefined4 *)0x0;
    if (lVar6 != 0) {
      puVar9 = (undefined4 *)(lVar6 + ((ulong)(uint)-(int)lVar6 | 0xfffffffffffffff0) + 0x10);
    }
    iVar2 = (int)piVar3;
    if ((uVar14 & 0xffffffe0) == 0) {
      param_2 = (int *)0x0;
      if ((int)uVar14 != 0) {
        if (local_40 == 0) {
          param_1[1] = (long)piVar3;
        }
        else {
          *(ulong *)(local_40 + 4) =
               *(ulong *)(local_40 + 4) & 0xfffffffff0000000 |
               (ulong)((uint)(iVar2 - (int)local_40) >> 4);
        }
      }
    }
    else {
      *(ulong *)(param_2 + 1) = uVar12 & 0xfffffffff0000000 | uVar14 >> 4 & 0xfffffff;
    }
    if (((long)puVar11 - (long)puVar9 & 0xffffffe0U) == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = (int)puVar9;
      *(undefined8 *)(puVar9 + 3) = 0xffffffffffffffff;
      *(ulong *)(puVar9 + 1) = (ulong)((long)puVar11 - (long)puVar9) >> 4 & 0xfffffff | 0x10000000;
      puVar11 = puVar9;
    }
    *piVar3 = iVar2;
    *(undefined4 *)(lVar8 + -4) = 0;
    *(ulong *)(lVar8 + -0xc) = (ulong)((uint)((int)puVar11 - iVar2) >> 4);
    local_30[0] = piVar3;
    local_30[1] = puVar9;
    if (local_40 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(int *)(local_40 + 4) << 4;
    }
    lVar8 = 0;
    piVar13 = param_2;
    while( true ) {
      if (piVar13 != (int *)0x0) {
        uVar1 = uVar10 >> 4;
        uVar14 = *(ulong *)(piVar13 + 1);
        uVar10 = (int)uVar14 << 4;
        *(ulong *)(piVar13 + 1) =
             uVar14 & 0xf000000000000000 | uVar14 & 0xffffffff | (ulong)uVar1 << 0x20;
      }
      if (lVar8 == 0x18) break;
      piVar13 = *(int **)((long)local_30 + lVar8);
      lVar8 = lVar8 + 8;
    }
    lVar8 = 0;
    local_60[1] = param_2;
    local_60[2] = puVar9;
    local_60[3] = puVar7;
    piVar13 = local_60[0];
    piVar4 = param_2;
    while( true ) {
      if (piVar4 != (int *)0x0) {
        if (piVar13 == (int *)0x0) {
          iVar2 = -1;
        }
        else {
          iVar2 = (int)piVar13 - (int)*param_1;
        }
        piVar4[4] = iVar2;
        piVar13 = piVar4;
      }
      if (lVar8 == 0x10) break;
      piVar4 = *(int **)((long)local_60 + lVar8 + 0x10);
      lVar8 = lVar8 + 8;
    }
    lVar8 = 8;
    while( true ) {
      if (puVar9 != (undefined4 *)0x0) {
        if (puVar7 == (undefined4 *)0x0) {
          iVar2 = -1;
        }
        else {
          iVar2 = (int)puVar7 - (int)*param_1;
        }
        puVar9[3] = iVar2;
        puVar7 = puVar9;
      }
      if (lVar8 == -8) break;
      puVar9 = *(undefined4 **)((long)local_60 + lVar8);
      lVar8 = lVar8 + -8;
    }
    piStack_38 = param_2;
    if (local_60[0] == (int *)0x0) {
      param_1[2] = (long)puVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(piVar3);
}




void FUN_1011099d4(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  
  piVar5 = (int *)(param_2 + -0x10);
  uVar9 = *(ulong *)(param_2 + -0xc) >> 0x1c;
  lVar10 = (long)piVar5 - (ulong)((uint)uVar9 & 0xfffffff0);
  uVar11 = *(ulong *)(param_2 + -0xc) << 4;
  uVar1 = (uVar11 & 0xfffffff0) + (long)piVar5;
  lVar13 = *param_1;
  uVar18 = (ulong)*(uint *)(param_1 + 3) + lVar13 & 0xfffffffffffffff0;
  if (uVar18 <= uVar1) {
    uVar1 = 0;
  }
  if ((uVar9 & 0xfffffff0) == 0 || lVar10 == 0) {
    piVar6 = (int *)0x0;
    if (lVar13 != 0) {
      piVar6 = (int *)(lVar13 + ((ulong)(uint)-(int)lVar13 | 0xfffffffffffffff0) + 0x10);
    }
    uVar9 = (ulong)((uint)(((int)uVar11 + (int)piVar5) - (int)piVar6) >> 4);
    *piVar6 = (int)piVar6;
    puVar12 = (ulong *)(piVar6 + 1);
    *puVar12 = uVar9;
    piVar6[3] = 0;
    piVar5 = piVar6;
    if (uVar1 == 0) {
      param_1[1] = (long)piVar6;
      uVar9 = *(ulong *)(piVar6 + 1);
      uVar14 = (int)uVar9 << 4;
    }
    else {
      *(ulong *)(uVar1 + 4) =
           *(ulong *)(uVar1 + 4) & 0xf000000000000000 |
           *(ulong *)(uVar1 + 4) & 0xffffffff | uVar9 << 0x20;
      param_1[1] = (long)piVar6;
      uVar9 = *(ulong *)(piVar6 + 1);
      uVar14 = (int)uVar9 << 4;
      uVar17 = *(ulong *)(uVar1 + 4);
      uVar16 = (uint)uVar17;
joined_r0x000101109b9c:
      if ((uVar16 >> 0x1c & 1) != 0) {
        uVar11 = (uint)((int)uVar17 << 4) + uVar1;
        lVar10 = *param_1;
        uVar15 = *(uint *)(param_1 + 3);
        iVar4 = (int)piVar5;
        *piVar5 = iVar4;
        piVar5[1] = 0x10000000;
        piVar5[2] = 0;
        piVar5[3] = -1;
        piVar5[4] = -1;
        uVar18 = (ulong)(uVar14 + (int)uVar17 * 0x10 >> 4);
        *puVar12 = uVar9 & 0xfffffff00000000 | uVar18 | *puVar12 & 0xf0000000f0000000;
        if (uVar11 != 0 && uVar11 < ((ulong)uVar15 + lVar10 & 0xfffffffffffffff0)) {
          *(ulong *)(uVar11 + 4) =
               *(ulong *)(uVar11 + 4) & 0xf000000000000000 |
               *(ulong *)(uVar11 + 4) & 0xffffffff | uVar18 << 0x20;
        }
        if (*(uint *)(uVar1 + 0x10) == 0xffffffff) {
          lVar10 = 0;
        }
        else {
          lVar10 = *param_1 + (ulong)*(uint *)(uVar1 + 0x10);
        }
        if (*(uint *)(uVar1 + 0xc) == 0xffffffff) {
          lVar13 = 0;
        }
        else {
          lVar13 = *param_1 + (ulong)*(uint *)(uVar1 + 0xc);
        }
        if (lVar10 == 0) {
          param_1[2] = (long)piVar5;
          iVar8 = -1;
        }
        else {
          lVar2 = *param_1;
          *(int *)(lVar10 + 0xc) = iVar4 - (int)lVar2;
          iVar8 = (int)lVar10 - (int)lVar2;
        }
        piVar5[4] = iVar8;
        if (lVar13 == 0) {
          iVar4 = -1;
        }
        else {
          lVar10 = *param_1;
          *(int *)(lVar13 + 0x10) = iVar4 - (int)lVar10;
          iVar4 = (int)lVar13 - (int)lVar10;
        }
        piVar5[3] = iVar4;
        return;
      }
    }
  }
  else {
    puVar12 = (ulong *)(param_2 + -0xc);
    uVar9 = *puVar12;
    iVar4 = (int)uVar9;
    uVar14 = iVar4 << 4;
    uVar11 = *(ulong *)(lVar10 + 4);
    uVar15 = (uint)uVar11;
    if (uVar1 != 0) {
      uVar17 = *(ulong *)(uVar1 + 4);
      uVar16 = (uint)uVar17;
      if (((uVar15 >> 0x1c & 1) != 0) && ((uVar16 >> 0x1c & 1) != 0)) {
        uVar9 = (uVar16 << 4) + uVar1;
        uVar17 = (ulong)(uVar15 + iVar4 + uVar16 & 0xfffffff);
        if (uVar9 != 0 && uVar9 < uVar18) {
          *(ulong *)(uVar9 + 4) =
               *(ulong *)(uVar9 + 4) & 0xf000000000000000 |
               *(ulong *)(uVar9 + 4) & 0xffffffff | uVar17 << 0x20;
          uVar11 = *(ulong *)(lVar10 + 4);
        }
        *(ulong *)(lVar10 + 4) = uVar11 & 0xfffffffff0000000 | uVar17;
        uVar14 = *(uint *)(uVar1 + 0xc);
        if ((uVar14 == 0xffffffff) || (lVar13 = *param_1, lVar13 == 0)) {
          uVar14 = 0xffffffff;
        }
        else {
          *(int *)((ulong)uVar14 + lVar13 + 0x10) = (int)lVar10 - (int)lVar13;
        }
        *(uint *)(lVar10 + 0xc) = uVar14;
        return;
      }
      if ((uVar15 >> 0x1c & 1) != 0) {
        uVar9 = (ulong)(uVar15 + iVar4) & 0xfffffff;
        *(ulong *)(uVar1 + 4) = uVar17 & 0xf000000000000000 | uVar17 & 0xffffffff | uVar9 << 0x20;
        uVar11 = *(ulong *)(lVar10 + 4);
        goto LAB_101109c88;
      }
      goto joined_r0x000101109b9c;
    }
    if ((uVar15 >> 0x1c & 1) != 0) {
      uVar9 = (ulong)(uVar15 + iVar4) & 0xfffffff;
LAB_101109c88:
      *(ulong *)(lVar10 + 4) = uVar11 & 0xfffffffff0000000 | uVar9;
      return;
    }
  }
  iVar4 = (int)piVar5;
  *piVar5 = iVar4;
  piVar5[1] = 0x10000000;
  piVar5[2] = 0;
  piVar5[3] = -1;
  piVar5[4] = -1;
  *puVar12 = uVar9 & 0xfffffff00000000 | (ulong)(uVar14 >> 4) | *puVar12 & 0xf0000000f0000000;
  piVar6 = (int *)param_1[2];
  if ((piVar6 == (int *)0x0) || (piVar5 <= piVar6)) {
    param_1[2] = (long)piVar5;
    iVar8 = -1;
    piVar5[4] = -1;
    if (piVar6 == (int *)0x0) goto LAB_101109c60;
  }
  else {
    do {
      piVar7 = piVar6;
      if (piVar7[3] == 0xffffffff) {
        piVar6 = (int *)0x0;
        bVar3 = false;
        break;
      }
      piVar6 = (int *)(*param_1 + (ulong)(uint)piVar7[3]);
      bVar3 = *param_1 != 0;
    } while (bVar3 && piVar6 < piVar5);
    lVar10 = *param_1;
    iVar8 = iVar4 - (int)lVar10;
    if (piVar5 == (int *)0x0) {
      iVar8 = -1;
    }
    piVar7[3] = iVar8;
    piVar5[4] = (int)piVar7 - (int)lVar10;
    if (!bVar3) {
      iVar8 = -1;
      goto LAB_101109c60;
    }
  }
  lVar10 = *param_1;
  piVar6[4] = iVar4 - (int)lVar10;
  iVar8 = (int)piVar6 - (int)lVar10;
LAB_101109c60:
  piVar5[3] = iVar8;
  return;
}




void FUN_101109d00(void)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
  uVar1 = _objc_retainAutorelease();
  pbVar2 = (byte *)_objc_msgSend(uVar1,"bytes");
  uVar3 = _objc_msgSend(uVar1,"length");
  if (uVar3 == 0) {
    uVar1 = 0;
    goto LAB_101109ea4;
  }
  pcVar4 = _calloc((uVar3 + 2) / 3 << 2 | 1,1);
  pcVar5 = pcVar4;
  pcVar6 = pcVar4;
  if (uVar3 < 3) {
LAB_101109e00:
    *pcVar5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar2 >> 2];
    lVar7 = ((ulong)*pbVar2 & 3) * 0x10;
    if (uVar3 == 1) {
      pcVar5[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[lVar7];
      pcVar5[2] = '=';
    }
    else {
      pcVar5[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(uint)lVar7 | (uint)(pbVar2[1] >> 4)];
      pcVar5[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [((ulong)pbVar2[1] & 0xf) * 4];
    }
    pcVar5[3] = '=';
    pcVar5 = pcVar5 + 4;
  }
  else {
    do {
      *pcVar6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar2 >> 2];
      pcVar6[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(uint)(pbVar2[1] >> 4) | (*pbVar2 & 3) << 4];
      pcVar6[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(uint)(pbVar2[2] >> 6) | (pbVar2[1] & 0xf) << 2];
      pcVar5 = pcVar6 + 4;
      pcVar6[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                  [(ulong)pbVar2[2] & 0x3f];
      pbVar2 = pbVar2 + 3;
      uVar3 = uVar3 - 3;
      pcVar6 = pcVar5;
    } while (2 < uVar3);
    if (uVar3 != 0) goto LAB_101109e00;
  }
  *pcVar5 = '\0';
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithCString:encoding:",pcVar4,1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _free(pcVar4);
LAB_101109ea4:
  _objc_autoreleaseReturnValue(uVar1);
  return;
}




void FUN_101109eb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSCharacterSet,"whitespaceAndNewlineCharacterSet");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"stringByTrimmingCharactersInSet:",uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}




undefined8 FUN_101109f20(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _CFStringConvertNSStringEncodingToEncoding(4);
  uVar1 = _CFURLCreateStringByAddingPercentEscapes(0,param_1,0,&cf______________________,uVar1);
  _objc_autoreleaseReturnValue();
  return uVar1;
}




undefined8 FUN_101109f6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _CFURLCreateStringByReplacingPercentEscapes
                    (*(undefined8 *)PTR__kCFAllocatorDefault_101444278,param_1,&cf___);
  _objc_autoreleaseReturnValue();
  return uVar1;
}




void FUN_101109fb0(undefined8 param_1)

{
  _objc_msgSend(param_1,"stringByReplacingOccurrencesOfString:withString:",&cf__,&cf___);
  return;
}




void FUN_101109fcc(void)

{
  undefined8 uVar1;
  char *data;
  size_t sVar2;
  long lVar3;
  uchar local_58 [16];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = _objc_retainAutorelease();
  data = (char *)_objc_msgSend(uVar1,"UTF8String");
  sVar2 = _strlen(data);
  _CC_MD5(data,(CC_LONG)sVar2,local_58);
  _objc_msgSend(&_OBJC_CLASS___NSMutableString,"stringWithCapacity:",0x20);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  do {
    _objc_msgSend(uVar1,"appendFormat:",&cf__02x);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    _objc_autoreleaseReturnValue(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10110a0b4(undefined8 param_1)

{
  CC_LONG len;
  undefined8 uVar1;
  void *data;
  undefined8 uVar2;
  long lVar3;
  uchar local_5c [20];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  _objc_msgSend(param_1,"dataUsingEncoding:",4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_retainAutorelease();
  data = (void *)_objc_msgSend(uVar1,"bytes");
  len = _objc_msgSend(uVar1,"length");
  _CC_SHA1(data,len,local_5c);
  _objc_msgSend(&_OBJC_CLASS___NSMutableString,"stringWithCapacity:",0x28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  do {
    _objc_msgSend(uVar2,"appendFormat:",&cf__02x);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x14);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    _objc_autoreleaseReturnValue(uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10110a1cc(void)

{
  undefined8 uVar1;
  char *data;
  size_t sVar2;
  long lVar3;
  uchar local_68 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = _objc_retainAutorelease();
  data = (char *)_objc_msgSend(uVar1,"UTF8String");
  sVar2 = _strlen(data);
  _CC_SHA256(data,(CC_LONG)sVar2,local_68);
  _objc_msgSend(&_OBJC_CLASS___NSMutableString,"stringWithCapacity:",0x40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  do {
    _objc_msgSend(uVar1,"appendFormat:",&cf__02x);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    _objc_autoreleaseReturnValue(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10110a2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_stack_00000000;
  
  _objc_retain(param_3);
  uVar3 = _objc_retain();
  lVar4 = _objc_retain(in_stack_00000000);
  puVar1 = (undefined8 *)((ulong)&stack0x00000000 | 8);
  uVar2 = uVar3;
  while (lVar4 != 0) {
    _objc_msgSend(lVar4,"capitalizedString");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"stringByAppendingString:",uVar5);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar5);
    lVar7 = _objc_retain(*puVar1);
    _objc_release(lVar4);
    puVar1 = puVar1 + 1;
    uVar2 = uVar6;
    lVar4 = lVar7;
  }
  _objc_release(0);
  _objc_release(uVar3);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}




undefined8 FUN_10110a3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 == 0 && param_4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = _objc_msgSend(lVar1,"isEqualToString:",param_4);
  }
  _objc_release(lVar1);
  return uVar2;
}




bool FUN_10110a418(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_msgSend(&_OBJC_CLASS___NSString,"adjJoin:",&cf_A);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar4 = _NSClassFromString();
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"adjJoin:",&cf_shared);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _NSSelectorFromString();
    iVar2 = _objc_msgSend(lVar4,"respondsToSelector:",uVar6);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      _objc_msgSend(lVar4,"performSelector:",uVar6);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(&_OBJC_CLASS___NSString,"adjJoin:",&cf_is);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar8 = _NSSelectorFromString();
      iVar2 = _objc_msgSend(uVar6,"respondsToSelector:",uVar8);
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        lVar4 = _objc_msgSend(uVar6,"performSelector:",uVar8);
        bVar1 = lVar4 != 0;
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  return bVar1;
}




void FUN_10110a5c4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  
  _objc_msgSend(&_OBJC_CLASS___NSString,"adjJoin:",&cf_A);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _NSClassFromString();
  if (lVar2 == 0) {
    pcVar10 = &cf___;
    _objc_retain(&cf___);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"adjJoin:",&cf_shared);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _NSSelectorFromString();
    uVar5 = _objc_msgSend(lVar2,"respondsToSelector:",uVar4);
    if ((uVar5 & 1) == 0) {
      pcVar10 = &cf___;
      _objc_retain(&cf___);
    }
    else {
      _objc_msgSend(lVar2,"performSelector:",uVar4);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(&_OBJC_CLASS___NSString,"adjJoin:",&cf_advertising);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _NSSelectorFromString();
      uVar5 = _objc_msgSend(uVar4,"respondsToSelector:",uVar7);
      if ((uVar5 & 1) == 0) {
        pcVar10 = &cf___;
        _objc_retain(&cf___);
      }
      else {
        _objc_msgSend(uVar4,"performSelector:",uVar7);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(&_OBJC_CLASS___NSString,"adjJoin:",&cf_UUID);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        uVar9 = _NSSelectorFromString();
        uVar5 = _objc_msgSend(uVar7,"respondsToSelector:",uVar9);
        if ((uVar5 & 1) == 0) {
          pcVar10 = &cf___;
          _objc_retain(&cf___);
        }
        else {
          _objc_msgSend(uVar7,"performSelector:",uVar9);
          pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(pcVar10);
  return;
}




void FUN_10110a80c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  code *pcStack_30;
  undefined8 local_28;
  
  puStack_58 = &local_50;
  local_50 = 0;
  local_40 = 0x32000000;
  local_3c = 0x30;
  pcStack_30 = FUN_10110a92c;
  local_38 = FUN_10110a91c;
  local_28 = 0;
  local_78 = PTR___NSConcreteStackBlock_101444138;
  local_70 = 0xc2000000;
  uStack_6c = 0;
  local_68 = FUN_10110a934;
  local_60 = &DAT_101830010;
  local_48 = puStack_58;
  lVar2 = _objc_retainBlock(&local_78);
  iVar1 = _objc_msgSend(&_OBJC_CLASS___NSThread,"isMainThread");
  if (iVar1 == 0) {
    _dispatch_sync(PTR___dispatch_main_q_101444238,lVar2);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2);
  }
  uVar3 = _objc_retain(local_48[5]);
  _objc_release(lVar2);
  __Block_object_dispose(&local_50,8);
  _objc_release(local_28);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}




void FUN_10110a91c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}




void FUN_10110a92c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110a934(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_msgSend(&_OBJC_CLASS___UIPasteboard,"pasteboardWithName:create:",&cf_fb_app_attribution,0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"string");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar4 + 0x28) != 0) {
    return;
  }
  _objc_retain(&cf___);
  *(cfstringStruct **)(lVar4 + 0x28) = &cf___;
  _objc_release(0);
  return;
}




void FUN_10110a9f0(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}




void FUN_10110aa00(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}




void FUN_10110aa0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(param_1,"model");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"stringByReplacingOccurrencesOfString:withString:",&cf_space_s_,&cf___);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}




void FUN_10110aa70(void)

{
  void *pvVar1;
  undefined8 uVar2;
  size_t local_28;
  
  _sysctlbyname("hw.machine",(void *)0x0,&local_28,(void *)0x0,0);
  pvVar1 = _malloc(local_28);
  _sysctlbyname("hw.machine",pvVar1,&local_28,(void *)0x0,0);
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pvVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _free(pvVar1);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}




void FUN_10110ab04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_101444278;
  uVar1 = _CFUUIDCreate(uVar3);
  uVar3 = _CFUUIDCreateString(uVar3,uVar1);
  _objc_msgSend(uVar3,"lowercaseString");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _CFRelease(uVar1);
  _objc_release(uVar3);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}




void FUN_10110ab78(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar2,"respondsToSelector:","identifierForVendor");
  _objc_release(uVar2);
  if (iVar1 == 0) {
    pcVar4 = &cf___;
    _objc_retain(&cf___);
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"identifierForVendor");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"UUIDString");
    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_autoreleaseReturnValue(pcVar4);
  return;
}




void FUN_10110ac58(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"debug:",&cf_ADJUST_NO_IADorTARGET_OS_TVnotset);
  lVar3 = _NSClassFromString(&cf_ADClient);
  if (lVar3 == 0) {
    pcVar6 = &cf_iAdframeworknotfoundinuser_sapp_ADClientClassnotfound_;
  }
  else {
    uVar4 = _NSSelectorFromString(&cf_sharedClient);
    uVar5 = _objc_msgSend(lVar3,"respondsToSelector:",uVar4);
    if ((uVar5 & 1) != 0) {
      _objc_msgSend(lVar3,"performSelector:",uVar4);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        pcVar6 = &cf_iAdframeworknotfoundinuser_sapp_ADClientSharedClientInstanceisnil_;
LAB_10110add8:
        _objc_msgSend(uVar2,"warn:",pcVar6);
      }
      else {
        _objc_msgSend(uVar2,"debug:",&cf_iAdframeworksuccessfullyfoundinuser_sapp);
        _objc_msgSend(uVar2,"debug:",&cf_iAdwith_dtriestoreadv3);
        if (param_4 == 0) {
          pcVar6 = &cf_ReachedlimitnumberofretryforiAdv3;
          goto LAB_10110add8;
        }
        uVar5 = _objc_msgSend(param_1,
                              "adjSetIadWithDetails:ADClientSharedClientInstance:retriesLeft:",uVar1
                              ,lVar3,param_4 + -1);
        if ((uVar5 & 1) == 0) {
          pcVar6 = &cf_iAdv3notavailable;
          goto LAB_10110add8;
        }
      }
      _objc_release(lVar3);
      goto LAB_10110ade8;
    }
    pcVar6 = &cf_iAdframeworknotfoundinuser_sapp_sharedClientmethodnotfound_;
  }
  _objc_msgSend(uVar2,"warn:",pcVar6);
LAB_10110ade8:
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




bool FUN_10110ae10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  uVar4 = _NSSelectorFromString(&cf_requestAttributionDetailsWithBlock_);
  iVar1 = _objc_msgSend(uVar3,"respondsToSelector:",uVar4);
  if (iVar1 != 0) {
    local_60 = PTR___NSConcreteStackBlock_101444138;
    local_58 = 0xc2000000;
    uStack_54 = 0;
    local_50 = FUN_10110af10;
    local_48 = &DAT_101830040;
    local_40 = _objc_retain(uVar2);
    local_38 = param_5;
    uVar5 = _objc_retainBlock(&local_60);
    _objc_msgSend(uVar3,"performSelector:withObject:",uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(local_40);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return iVar1 != 0;
}




void FUN_10110af10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = _objc_retain(param_2);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"setAttributionDetails:error:retriesLeft:",uVar1,
                param_3,*(undefined4 *)(param_1 + 0x28));
  _objc_release(uVar1);
  return;
}




void FUN_10110af64(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110af6c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110b15c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"alloc");
  uVar2 = _objc_msgSend(uVar1,"init");
  uVar1 = DAT_101ea5fb0;
  DAT_101ea5fb0 = uVar2;
  _objc_release(uVar1);
  return;
}




void FUN_10110b198(void)

{
  return;
}




void FUN_10110b19c(void)

{
  return;
}




void FUN_10110c418(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"addSessionCallbackParameterI:key:value:",param_2,
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110c434(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10110c45c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110c6a4(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"addSessionPartnerParameterI:key:value:",param_2,
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110c6c0(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10110c6e8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110c8f8(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"removeSessionCallbackParameterI:key:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110c914(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110c91c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110cb0c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"removeSessionPartnerParameterI:key:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110cb28(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110cb30(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110ccb8(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"resetSessionCallbackParametersI:",param_2);
  return;
}




void FUN_10110ce50(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"resetSessionPartnerParametersI:",param_2);
  return;
}




void FUN_10110e1e4(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"setEnabledI:enabled:",param_2,*(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_10110e200(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = _objc_retain(param_2);
  _objc_msgSend(uVar2,"preLaunchActionsArray");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_2,"initI:preLaunchActionsArray:",uVar1,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




void FUN_10110e278(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110e280(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110e324(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_2);
  _objc_msgSend(param_2,"delayStartI:",uVar1);
  _objc_msgSend(param_2,"stopBackgroundTimerI:",uVar1);
  _objc_msgSend(param_2,"startForegroundTimerI:",uVar1);
  _objc_msgSend(param_2,"logger");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"verbose:",&cf_Subsessionstart);
  _objc_release(uVar2);
  _objc_msgSend(param_2,"startI:",uVar1);
  _objc_release(uVar1);
  return;
}




void FUN_10110e480(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_2);
  _objc_msgSend(param_2,"stopForegroundTimerI:",uVar1);
  _objc_msgSend(param_2,"startBackgroundTimerI:",uVar1);
  _objc_msgSend(param_2,"logger");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"verbose:",&cf_Subsessionend);
  _objc_release(uVar2);
  _objc_msgSend(param_2,"endI:",uVar1);
  _objc_release(uVar1);
  return;
}




void FUN_10110e600(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _objc_retain(param_2);
  _objc_msgSend(uVar1,"activityState");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_msgSend(uVar1,"startI:",uVar1);
  }
  _objc_msgSend(uVar1,"eventI:event:",uVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
  return;
}




void FUN_10110e680(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110e688(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110e88c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"launchEventResponseTasksI:eventResponseData:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110e8a8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110e8b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110e98c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"launchSessionResponseTasksI:sessionResponseData:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110e9a8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110e9b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110ea8c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"launchSdkClickResponseTasksI:sdkClickResponseData:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110eaa8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110eab0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110eb8c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"launchAttributionResponseTasksI:attributionResponseData:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110eba8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110ebb0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110ec5c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"setEnabledI:enabled:",param_2,*(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_10110ed1c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"setOfflineModeI:offline:",param_2,*(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_10110eea8(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"appWillOpenUrlI:url:",param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110eec4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110eecc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110efa8(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"setDeviceTokenI:deviceToken:",param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110efc4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110efcc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110f30c(long param_1)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"adjSetIad:triesV3Left:",*(undefined8 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x28));
  _objc_release(uVar1);
  return;
}




void FUN_10110f360(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110f368(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110f370(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"saveAttributionDetailsI:attributionDetails:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110f38c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110f394(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110f39c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_msgSend(uVar1,"activityState");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"attributionDetails");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend(uVar5,"isEqualToDictionary:",uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    _objc_msgSend(uVar1,"sendIad3ClickPackage:attributionDetails:",uVar1,
                  *(undefined8 *)(param_1 + 0x20));
    _objc_msgSend(uVar1,"saveAttributionDetailsI:attributionDetails:",uVar1,
                  *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(uVar1);
  return;
}




void FUN_10110f468(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110f470(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110f838(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"setAskingAttributionI:askingAttribution:",param_2,
                *(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_10110f8bc(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"foregroundTimerFiredI:",param_2);
  return;
}




void FUN_10110f93c(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"backgroundTimerFiredI:",param_2);
  return;
}




void FUN_10110f9bc(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"sendFirstPackagesI:",param_2);
  return;
}




void FUN_10110fad8(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"addSessionCallbackParameterI:key:value:",param_2,
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110faf4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10110fb1c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110fc48(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"addSessionPartnerParameterI:key:value:",param_2,
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110fc64(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10110fc8c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10110fd88(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"removeSessionCallbackParameterI:key:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110fda4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110fdac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110fe88(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"removeSessionPartnerParameterI:key:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110fea4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10110feac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10110ff1c(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"resetSessionCallbackParametersI:",param_2);
  return;
}




void FUN_10110ff9c(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"resetSessionPartnerParametersI:",param_2);
  return;
}

