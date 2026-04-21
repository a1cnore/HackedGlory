// functions/019c5 — 13 functions
#include "libGameKindred.h"




char * FUN_019c550c(void)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)(*(code *)PTR_strdup_02bf74c0)();
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\"') {
      sVar2 = strlen(pcVar1);
      memmove(pcVar1,pcVar1 + 1,sVar2);
    }
    sVar2 = strlen(pcVar1);
    if (pcVar1[sVar2 - 1] == '\"') {
      pcVar1[sVar2 - 1] = '\0';
    }
    if (*pcVar1 != '/') {
      (*(code *)PTR_free_02bf74b0)(pcVar1);
      pcVar1 = (char *)(*(code *)PTR_strdup_02bf74c0)("/");
      return pcVar1;
    }
    sVar2 = strlen(pcVar1);
    if ((1 < sVar2) && (pcVar1[sVar2 - 1] == '/')) {
      pcVar1[sVar2 - 1] = '\0';
    }
  }
  return pcVar1;
}




bool FUN_019c55ec(char *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_18 [8];
  
  iVar2 = inet_pton(2,param_1,auStack_18);
  if (iVar2 == 0) {
    iVar2 = inet_pton(10,param_1,auStack_30);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




ulong FUN_019c5644(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  
  sVar1 = strlen(param_1);
  sVar2 = strlen(param_2);
  uVar3 = 0;
  if (sVar1 <= sVar2) {
    uVar3 = FUN_019e23a8(param_1,param_2 + (sVar2 - sVar1));
    if ((int)uVar3 != 0) {
      if (sVar2 == sVar1) {
        uVar3 = 1;
      }
      else {
        uVar3 = (ulong)((param_2 + (sVar2 - sVar1))[-1] == '.');
      }
    }
  }
  return uVar3;
}




void FUN_019c56c0(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (*(long *)(param_1 + 8) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  (*(code *)PTR_free_02bf74b0)(param_1);
  return;
}




void FUN_019c57ac(long *param_1)

{
  long *plVar1;
  time_t tVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  tVar2 = time((time_t *)0x0);
  if ((long *)*param_1 != (long *)0x0) {
    plVar4 = (long *)*param_1;
    plVar5 = (long *)0x0;
    do {
      while (((plVar3 = plVar4, plVar4 = (long *)*plVar3, plVar3[7] == 0 && (plVar3[10] == 0)) ||
             (tVar2 <= plVar3[6]))) {
        plVar5 = plVar3;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      plVar1 = param_1;
      if (plVar3 != (long *)*param_1) {
        plVar1 = plVar5;
      }
      *plVar1 = *plVar3;
      param_1[3] = param_1[3] + -1;
      FUN_019c56c0();
    } while (plVar4 != (long *)0x0);
  }
  return;
}




long * FUN_019c5840(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  time_t tVar4;
  char *__s;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  size_t __n;
  long *plVar8;
  long *__base;
  char cVar9;
  long *plVar10;
  char *__s_00;
  long *plVar11;
  undefined8 *__src;
  size_t local_68;
  
  tVar4 = time((time_t *)0x0);
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    FUN_019c57ac(param_1);
    bVar2 = FUN_019c55ec(param_2);
    __src = (undefined8 *)*param_1;
    if (__src != (void *)0x0) {
      local_68 = 0;
      plVar10 = (long *)0x0;
      plVar11 = (long *)0x0;
      do {
        if (((__src[6] == 0) || (tVar4 < (long)__src[6])) &&
           ((*(char *)(__src + 0xb) == '\0' || ((param_4 & 1) != 0)))) {
          if (__src[5] != 0) {
            cVar9 = *(char *)(__src + 8);
            if ((bVar2 & 1) == 0 && cVar9 != '\0') {
              uVar7 = FUN_019c5644(__src[5],param_2);
              if ((uVar7 & 1) != 0) goto LAB_019c5a3c;
              cVar9 = *(char *)(__src + 8);
            }
            if (((cVar9 != '\0' & (bVar2 ^ 0xff)) != 0) ||
               (iVar3 = FUN_019e23a8(param_2,__src[5]), iVar3 == 0)) goto LAB_019c5a94;
          }
LAB_019c5a3c:
          __s_00 = (char *)__src[4];
          if ((__s_00 == (char *)0x0) || (__n = strlen(__s_00), __n == 1)) goto LAB_019c5a54;
          __s = (char *)(*(code *)PTR_strdup_02bf74c0)(param_3);
          if (__s != (char *)0x0) {
            pcVar5 = strchr(__s,0x3f);
            if (pcVar5 != (char *)0x0) {
              *pcVar5 = '\0';
            }
            if (*__s != '/') {
              (*(code *)PTR_free_02bf74b0)(__s);
              __s = (char *)(*(code *)PTR_strdup_02bf74c0)("/");
              if (__s == (char *)0x0) goto LAB_019c5a94;
            }
            sVar6 = strlen(__s);
            if ((sVar6 < __n) || (iVar3 = strncmp(__s_00,__s,__n), iVar3 != 0)) {
              (*(code *)PTR_free_02bf74b0)(__s);
            }
            else {
              if (__n == sVar6) {
                (*(code *)PTR_free_02bf74b0)(__s);
              }
              else {
                cVar9 = __s[__n];
                (*(code *)PTR_free_02bf74b0)(__s);
                if (cVar9 != '/') goto LAB_019c5a94;
              }
LAB_019c5a54:
              plVar8 = (long *)(*(code *)PTR_malloc_02bf74a8)(0x60);
              if (plVar8 == (long *)0x0) goto LAB_019c5b40;
              memcpy(plVar8,__src,0x60);
              *plVar8 = (long)plVar10;
              local_68 = local_68 + 1;
              plVar10 = plVar8;
              plVar11 = plVar8;
            }
          }
        }
LAB_019c5a94:
        __src = (undefined8 *)*__src;
      } while (__src != (void *)0x0);
      if (local_68 == 0) {
        return plVar10;
      }
      __base = (long *)(*(code *)PTR_malloc_02bf74a8)(local_68 << 3);
      plVar8 = __base;
      if (__base != (long *)0x0) {
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          *plVar8 = (long)plVar10;
          plVar8 = plVar8 + 1;
        }
        qsort(__base,local_68,8,(__compar_fn_t)&LAB_019c5b48);
        plVar11 = (long *)*__base;
        plVar10 = __base;
        for (lVar1 = local_68 - 1; lVar1 != 0; lVar1 = lVar1 + -1) {
          *(long *)*plVar10 = plVar10[1];
          plVar10 = plVar10 + 1;
        }
        *(undefined8 *)__base[local_68 - 1] = 0;
        (*(code *)PTR_free_02bf74b0)(__base);
        return plVar11;
      }
LAB_019c5b40:
      while (plVar10 != (long *)0x0) {
        plVar10 = (long *)*plVar10;
        (*(code *)PTR_free_02bf74b0)(plVar11);
        plVar11 = plVar10;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}




void FUN_019c5bfc(long *param_1)

{
  long *plVar1;
  
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      FUN_019c56c0();
    }
    *param_1 = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_019c5c3c(long *param_1,uint param_2)

{
  while (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
    if ((param_2 & 1) == 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    else {
      FUN_019c56c0();
    }
  }
  return;
}




void FUN_019c5c8c(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((param_1 != (long *)0x0) &&
     (plVar3 = (long *)*param_1, plVar6 = plVar3, plVar4 = plVar3, plVar3 != (long *)0x0)) {
    do {
      plVar2 = plVar6;
      plVar6 = (long *)*plVar2;
      plVar5 = plVar4;
      if (plVar2[6] == 0) {
        plVar5 = plVar6;
        if (plVar4 != plVar2) {
          plVar5 = plVar4;
        }
        bVar1 = plVar3 != plVar2;
        plVar2 = plVar6;
        if (bVar1) {
          *plVar3 = (long)plVar6;
          plVar2 = plVar3;
        }
        FUN_019c56c0();
        param_1[3] = param_1[3] + -1;
      }
      plVar3 = plVar2;
      plVar4 = plVar5;
    } while (plVar6 != (long *)0x0);
    *param_1 = (long)plVar5;
  }
  return;
}




void FUN_019c5d10(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_1[1] != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    FUN_019c56c0();
  }
  (*(code *)PTR_free_02bf74b0)(param_1);
  return;
}




long FUN_019c5d74(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x798);
  if (((plVar3 == (long *)0x0) || (plVar3[3] == 0)) ||
     (plVar3 = (long *)*plVar3, plVar3 == (long *)0x0)) {
LAB_019c5dec:
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar1 = FUN_019c5e00(plVar3);
      if (lVar1 == 0) {
LAB_019c5de4:
        FUN_019c1dcc(lVar4);
        goto LAB_019c5dec;
      }
      lVar2 = FUN_019c1c48(lVar4,lVar1);
      if (lVar2 == 0) {
        (*(code *)PTR_free_02bf74b0)(lVar1);
        goto LAB_019c5de4;
      }
      plVar3 = (long *)*plVar3;
      lVar4 = lVar2;
    } while (plVar3 != (long *)0x0);
  }
  return lVar2;
}




void FUN_019c5e00(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x28);
  pcVar1 = "";
  if (*(char *)(param_1 + 0x5a) != '\0') {
    pcVar1 = "#HttpOnly_";
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    pcVar6 = "";
  }
  else {
    pcVar6 = "";
    if ((pcVar7 != (char *)0x0) && (*pcVar7 != '.')) {
      pcVar6 = ".";
    }
  }
  pcVar2 = "unknown";
  if (pcVar7 != (char *)0x0) {
    pcVar2 = pcVar7;
  }
  pcVar7 = "FALSE";
  if (*(char *)(param_1 + 0x40) != '\0') {
    pcVar7 = "TRUE";
  }
  pcVar3 = "/";
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    pcVar3 = *(char **)(param_1 + 0x18);
  }
  pcVar4 = "FALSE";
  if (*(char *)(param_1 + 0x58) != '\0') {
    pcVar4 = "TRUE";
  }
  pcVar5 = "";
  if (*(char **)(param_1 + 0x10) != (char *)0x0) {
    pcVar5 = *(char **)(param_1 + 0x10);
  }
  FUN_019d5c34("%s%s%s\t%s\t%s\t%s\t%ld\t%s\t%s",pcVar1,pcVar6,pcVar2,pcVar7,pcVar3,pcVar4,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),pcVar5);
  return;
}




void FUN_019c5ed0(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  code *__stream;
  long lVar3;
  char *__filename;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x580) == 0) {
    if ((param_2 != 0) && (*(long *)(param_1 + 0x788) != 0)) {
      FUN_019c1dcc();
      *(undefined8 *)(param_1 + 0x788) = 0;
    }
    FUN_019c1238(param_1,2,2);
  }
  else {
    if (*(long *)(param_1 + 0x788) != 0) {
      FUN_019c4804(param_1);
    }
    FUN_019c1238(param_1,2,2);
    plVar4 = *(long **)(param_1 + 0x798);
    if ((plVar4 != (long *)0x0) && (plVar4[3] != 0)) {
      __filename = *(char **)(param_1 + 0x580);
      FUN_019c57ac(plVar4);
      iVar2 = FUN_019d9df0(0x1e21c1a,__filename);
      if (iVar2 == 0) {
        __stream = (code *)fopen(__filename,"w");
        if ((FILE *)__stream == (FILE *)0x0) {
LAB_019c6030:
          FUN_019c9f64(param_1,"WARNING: failed to save cookies in %s\n",
                       *(undefined8 *)(param_1 + 0x580));
          goto joined_r0x019c5f80;
        }
        bVar1 = false;
      }
      else {
        bVar1 = true;
        __stream = isgraph;
      }
      fputs("# Netscape HTTP Cookie File\n# http://curl.haxx.se/docs/http-cookies.html\n# This file was generated by libcurl! Edit at your own risk.\n\n"
            ,(FILE *)__stream);
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        lVar3 = FUN_019c5e00(plVar4);
        if (lVar3 == 0) {
          FUN_019d5ff8(__stream,"#\n# Fatal libcurl error\n");
          if (!bVar1) {
            fclose((FILE *)__stream);
          }
          goto LAB_019c6030;
        }
        FUN_019d5ff8(__stream,&DAT_01e28837,lVar3);
        (*(code *)PTR_free_02bf74b0)(lVar3);
      }
      if (!bVar1) {
        fclose((FILE *)__stream);
      }
    }
  }
joined_r0x019c5f80:
  if (param_2 != 0) {
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (*(long *)(param_1 + 0x798) != *(long *)(*(long *)(param_1 + 0x70) + 0x28))) {
      FUN_019c5d10();
    }
  }
  FUN_019c1288(param_1,2);
  return;
}

