// functions/019f0 — 7 functions
#include "libGameKindred.h"




void FUN_019f02b4(int *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (9 < *param_1) {
    pbVar4 = *(byte **)(param_1 + 2);
    uVar5 = 0;
    do {
      if (9 < pbVar4[uVar5] - 0x30) {
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 10);
    uVar2 = (uint)pbVar4[1] + (uint)*pbVar4 * 10;
    iVar3 = (uint)pbVar4[3] + (uint)pbVar4[2] * 10;
    iVar7 = -0x1ac;
    if (0x241 < uVar2) {
      iVar7 = -0x210;
    }
    if (iVar3 - 0x211U < 0xc) {
      iVar6 = 0;
      if (pbVar4[10] - 0x30 < 10) {
        iVar6 = 0;
        if (pbVar4[0xb] - 0x30 < 10) {
          iVar6 = (uint)pbVar4[0xb] + (uint)pbVar4[10] * 10 + -0x210;
        }
      }
      pcVar1 = "GMT";
      if (pbVar4[(long)*param_1 + -1] != 0x5a) {
        pcVar1 = "";
      }
      FUN_019d5bc0(param_2,param_3,"%04d-%02d-%02d %02d:%02d:%02d %s",uVar2 + iVar7 + 0x76c,
                   iVar3 + -0x210,(uint)pbVar4[5] + (uint)pbVar4[4] * 10 + -0x210,
                   (uint)pbVar4[7] + (uint)pbVar4[6] * 10 + -0x210,
                   (uint)pbVar4[9] + (uint)pbVar4[8] * 10 + -0x210,iVar6,pcVar1);
    }
  }
  return;
}




void FUN_019f03e4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_70 [32];
  
  lVar2 = (long)(int)(param_6 * 3 + 1);
  lVar1 = (*(code *)PTR_malloc_02bf74a8)(lVar2);
  if (lVar1 != 0) {
    FUN_019d5bc0(auStack_70,0x20,"%s(%s)",param_3,param_4);
    if (0 < (int)param_6) {
      uVar4 = (ulong)param_6;
      lVar3 = lVar1;
      do {
        FUN_019d5bc0(lVar3,lVar2,"%02x:",*param_5);
        lVar3 = lVar3 + 3;
        uVar4 = uVar4 - 1;
        lVar2 = lVar2 + -3;
        param_5 = param_5 + 1;
      } while (uVar4 != 0);
    }
    FUN_019c9f64(param_1,"   %s: %s\n",auStack_70,lVar1);
    FUN_019c333c(param_1,param_2,auStack_70,lVar1);
    (*(code *)PTR_free_02bf74b0)(lVar1);
  }
  return;
}




int FUN_019f0540(long *param_1,undefined1 *param_2)

{
  bool bVar1;
  void *pvVar2;
  long *plVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  __off_t _Var12;
  ssize_t sVar13;
  void *__buf;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  size_t sVar20;
  undefined1 auVar21 [16];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 local_11c;
  int iStack_118;
  int local_114;
  int iStack_110;
  stat sStack_f0;
  
  lVar17 = *param_1;
  auVar21 = FUN_019c338c();
  *param_2 = 1;
  FUN_019d7c00(lVar17);
  FUN_019c4568(lVar17);
  lVar18 = *param_1;
  puVar19 = *(undefined8 **)(lVar18 + 0x218);
  if (*(char *)(lVar17 + 0x519) == '\0') {
    iVar5 = *(int *)(puVar19 + 2);
    iVar6 = fstat(iVar5,&sStack_f0);
    _Var12 = sStack_f0.st_size;
    if (iVar6 == -1) {
      _Var12 = 0;
      bVar1 = false;
    }
    else {
      *(__time_t *)(lVar17 + 0x8b78) = sStack_f0.st_mtim.tv_sec;
      if ((*(long *)(lVar17 + 0x8af8) == 0) && (*(int *)(lVar17 + 0x410) != 0)) {
        uVar11 = FUN_019d8500(lVar17);
        bVar1 = true;
        if ((uVar11 & 1) == 0) {
          *param_2 = 1;
          return 0;
        }
      }
      else {
        bVar1 = true;
      }
    }
    pvVar2 = (void *)(lVar17 + 0x938);
    if (((*(char *)(lVar17 + 0x517) != '\0') && (*(char *)(lVar17 + 0x514) != '\0')) && (bVar1)) {
      FUN_019d5bc0(pvVar2,0x4001,"Content-Length: %ld\r\n",_Var12);
      iVar5 = FUN_019ca574(param_1,3,pvVar2,0);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_019ca574(param_1,3,"Accept-ranges: bytes\r\n",0);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_019dc820(sStack_f0.st_mtim.tv_sec,&local_128);
      if (iVar5 != 0) {
        return iVar5;
      }
      lVar18 = 6;
      if (iStack_110 != 0) {
        lVar18 = (long)iStack_110 + -1;
      }
      FUN_019d5bc0(pvVar2,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                   (&PTR_DAT_02bb0388)[lVar18],local_11c,(&PTR_DAT_02bb03c0)[iStack_118],
                   local_114 + 0x76c,uStack_120,local_128._4_4_,(int)local_128);
      iVar5 = FUN_019ca574(param_1,3,pvVar2,0);
      FUN_019c4438(lVar17,_Var12);
      return iVar5;
    }
    lVar18 = *param_1;
    if ((*(char *)(lVar18 + 0x8af1) == '\0') || (*(char **)(lVar18 + 0x8af8) == (char *)0x0)) {
      *(undefined8 *)(lVar18 + 0x88) = 0xffffffffffffffff;
    }
    else {
      lVar16 = strtol(*(char **)(lVar18 + 0x8af8),(char **)&local_128,0);
      uVar15 = (uint)*local_128;
      if (*local_128 != 0) {
        do {
          iVar6 = isspace(uVar15);
          if ((uVar15 != 0x2d) && (iVar6 == 0)) break;
          local_128 = local_128 + 1;
          uVar15 = (uint)*local_128;
        } while (uVar15 != 0);
      }
      pbVar4 = local_128;
      lVar10 = strtol((char *)local_128,(char **)(sStack_f0.__unused + 1),0);
      if (pbVar4 == (byte *)sStack_f0.__unused[1]) {
        lVar10 = -1;
      }
      if ((lVar16 < 0) || (lVar10 != -1)) {
        if (lVar16 < 0) {
          *(long *)(lVar18 + 0x88) = -lVar16;
          *(long *)(lVar18 + 0x8b00) = lVar16;
        }
        else {
          *(long *)(lVar18 + 0x88) = (1 - lVar16) + lVar10;
          *(long *)(lVar18 + 0x8b00) = lVar16;
        }
      }
      else {
        *(long *)(lVar18 + 0x8b00) = lVar16;
      }
    }
    plVar3 = (long *)(lVar17 + 0x8b00);
    lVar18 = *plVar3;
    if (lVar18 < 0) {
      if (!bVar1) {
        FUN_019ca0fc(lVar17,"Can\'t get the size of file.");
        return 0x1a;
      }
      lVar18 = sStack_f0.st_size + lVar18;
      *plVar3 = lVar18;
    }
    if (_Var12 < lVar18) {
      FUN_019ca0fc(lVar17,"failed to resume file:// transfer");
    }
    else {
      lVar16 = *(long *)(lVar17 + 0x88);
      if (*(long *)(lVar17 + 0x88) < 1) {
        lVar16 = _Var12 - lVar18;
      }
      if ((bool)(bVar1 & lVar16 == 0)) {
        return 0;
      }
      if (bVar1) {
        FUN_019c4438(lVar17,lVar16);
        lVar18 = *plVar3;
      }
      if ((lVar18 == 0) || (_Var12 = lseek(iVar5,lVar18,0), lVar18 == _Var12)) {
        FUN_019c4488(lVar17,7);
        lVar18 = 0;
        do {
          if (lVar16 < 0x3fff) {
            sVar20 = FUN_019c1ea8(lVar16);
          }
          else {
            sVar20 = 0x3fff;
          }
          sVar13 = read(iVar5,pvVar2,sVar20);
          if ((sVar13 < 1) || (*(undefined1 *)(lVar17 + sVar13 + 0x938) = 0, lVar16 == 0)) {
            iVar6 = 0;
            break;
          }
          iVar6 = FUN_019ca574(param_1,1,pvVar2,sVar13);
          if (iVar6 != 0) {
            return iVar6;
          }
          lVar18 = sVar13 + lVar18;
          FUN_019c45a4(lVar17,lVar18);
          iVar6 = FUN_019c3f38(param_1);
          if (iVar6 != 0) {
            iVar6 = 0x2a;
            break;
          }
          lVar16 = lVar16 - sVar13;
          iVar6 = FUN_019d45a4(lVar17,auVar21._0_8_,auVar21._8_8_);
        } while (iVar6 == 0);
        iVar5 = FUN_019c3f38(param_1);
        if (iVar5 == 0) {
          return iVar6;
        }
        return 0x2a;
      }
    }
    return 0x24;
  }
  pcVar8 = strchr((char *)*puVar19,0x2f);
  pvVar2 = (void *)(lVar18 + 0x938);
  auVar21 = FUN_019c338c();
  param_1[0x7a] = *(long *)(lVar18 + 0x2c8);
  lVar17 = *param_1;
  param_1[0x7b] = *(long *)(lVar18 + 0x248);
  *(void **)(lVar17 + 0x208) = pvVar2;
  if ((pcVar8 == (char *)0x0) || (pcVar8[1] == '\0')) {
    return 0x25;
  }
  plVar3 = (long *)(lVar18 + 0x8b00);
  iVar5 = 0x241;
  if (*plVar3 != 0) {
    iVar5 = 0x441;
  }
  iVar5 = open((char *)*puVar19,iVar5,*(undefined8 *)(lVar17 + 0x550));
  if (iVar5 < 0) {
    uVar14 = *puVar19;
    pcVar8 = "Can\'t open %s for writing";
LAB_019f092c:
    FUN_019ca0fc(lVar18,pcVar8,uVar14);
    iVar6 = 0x17;
  }
  else {
    if (*(long *)(lVar18 + 0x8b28) != -1) {
      FUN_019c4460(lVar18);
    }
    if (*plVar3 < 0) {
      iVar6 = fstat(iVar5,&sStack_f0);
      if (iVar6 != 0) {
        close(iVar5);
        uVar14 = *puVar19;
        pcVar8 = "Can\'t get the size of %s";
        goto LAB_019f092c;
      }
      *plVar3 = sStack_f0.st_size;
    }
    lVar17 = 0;
    while (iVar6 = FUN_019d8210(param_1,0x4000,&local_128), iVar6 == 0) {
      sVar20 = (size_t)(int)local_128;
      if ((int)local_128 < 1) {
        iVar7 = FUN_019c3f38(param_1);
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = 0x2a;
        }
        break;
      }
      lVar16 = *plVar3;
      __buf = pvVar2;
      if (lVar16 != 0) {
        lVar10 = lVar16 - sVar20;
        bVar1 = (long)sVar20 <= lVar16;
        __buf = (void *)(lVar18 + lVar16 + 0x938);
        sVar20 = sVar20 - lVar16;
        lVar16 = 0;
        if (bVar1) {
          sVar20 = 0;
          __buf = pvVar2;
          lVar16 = lVar10;
        }
        *plVar3 = lVar16;
      }
      sVar9 = write(iVar5,__buf,sVar20);
      if (sVar9 != sVar20) {
        iVar6 = 0x37;
        break;
      }
      lVar17 = sVar20 + lVar17;
      FUN_019c45ac(lVar18,lVar17);
      iVar6 = FUN_019c3f38(param_1);
      if (iVar6 != 0) {
        iVar6 = 0x2a;
        break;
      }
      iVar6 = FUN_019d45a4(lVar18,auVar21._0_8_,auVar21._8_8_);
      if (iVar6 != 0) break;
    }
    close(iVar5);
  }
  return iVar6;
}




undefined8 FUN_019f0b4c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      puVar1[1] = 0;
    }
    *puVar1 = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      close(*(int *)(puVar1 + 2));
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}




undefined4 FUN_019f0bac(long *param_1,undefined1 *param_2)

{
  int iVar1;
  char *__file;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x218);
  __file = (char *)FUN_019d4834(lVar3,*(undefined8 *)(lVar3 + 0x8ae8),0,0);
  if (__file == (char *)0x0) {
    uVar2 = 0x1b;
  }
  else {
    iVar1 = open(__file,0);
    *puVar4 = __file;
    puVar4[1] = __file;
    *(int *)(puVar4 + 2) = iVar1;
    if ((iVar1 == -1) && (*(char *)(lVar3 + 0x519) == '\0')) {
      FUN_019ca0fc(lVar3,"Couldn\'t open file %s",*(undefined8 *)(lVar3 + 0x8ae8));
      uVar2 = 0x25;
      FUN_019f0b4c(param_1,0x25,0);
    }
    else {
      uVar2 = 0;
      *param_2 = 1;
    }
  }
  return uVar2;
}




undefined4 FUN_019f0cd0(char *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  undefined1 uVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  size_t sVar6;
  ulong uVar7;
  size_t sVar8;
  char *pcVar9;
  long lVar10;
  char cVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  
  *param_2 = 0;
  *param_3 = 0;
  sVar3 = strlen(param_1);
  uVar5 = 0x3d;
  if ((sVar3 != 0) && (sVar6 = sVar3, pcVar9 = param_1, (sVar3 & 3) == 0)) {
    while( true ) {
      if (*pcVar9 == '\0') break;
      if (*pcVar9 == '=') {
        sVar8 = 1;
        if (pcVar9[1] == '=') {
          sVar8 = 2;
        }
        goto LAB_019f0d54;
      }
      sVar6 = sVar6 - 1;
      pcVar9 = pcVar9 + 1;
    }
    sVar8 = 0;
LAB_019f0d54:
    if (sVar8 == sVar6) {
      uVar14 = sVar3 >> 2;
      lVar12 = (uVar14 * 2 + (sVar3 >> 2)) - sVar8;
      puVar4 = (undefined1 *)(*(code *)PTR_malloc_02bf74a8)(lVar12 + 1);
      if (puVar4 == (undefined1 *)0x0) {
        uVar5 = 0x1b;
      }
      else {
        puVar15 = puVar4;
        if (uVar14 != 0) {
          uVar16 = 0;
          do {
            uVar13 = 0;
            uVar7 = 0;
            lVar17 = 0;
            pcVar9 = param_1;
            do {
              cVar1 = *pcVar9;
              if (cVar1 == '=') {
                uVar13 = uVar13 << 6;
                lVar17 = lVar17 + 1;
              }
              else {
                if (cVar1 == 'A') {
                  lVar10 = 0;
                  cVar11 = 'A';
                }
                else {
                  lVar10 = 0;
                  do {
                    cVar11 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                             [lVar10 + 1];
                    lVar10 = lVar10 + 1;
                    if (cVar11 == '\0') break;
                  } while (cVar11 != cVar1);
                }
                if (cVar11 != cVar1) goto LAB_019f0e88;
                uVar13 = lVar10 + uVar13 * 0x40;
              }
              uVar7 = uVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (uVar7 < 4);
            if (lVar17 == 1) {
LAB_019f0e30:
              uVar2 = FUN_019c1e6c(uVar13 >> 8 & 0xff);
              puVar15[1] = uVar2;
            }
            else if (lVar17 == 0) {
              uVar2 = FUN_019c1e6c(uVar13 & 0xff);
              puVar15[2] = uVar2;
              goto LAB_019f0e30;
            }
            uVar2 = FUN_019c1e6c(uVar13 >> 0x10 & 0xff);
            *puVar15 = uVar2;
            if (3 - lVar17 == 0) {
LAB_019f0e88:
              (*(code *)PTR_free_02bf74b0)(puVar4);
              goto LAB_019f0e9c;
            }
            uVar16 = uVar16 + 1;
            puVar15 = puVar15 + (3 - lVar17);
            param_1 = param_1 + 4;
          } while (uVar16 < uVar14);
        }
        uVar5 = 0;
        *puVar15 = 0;
        *param_2 = puVar4;
        *param_3 = lVar12;
      }
    }
    else {
LAB_019f0e9c:
      uVar5 = 0x3d;
    }
  }
  return uVar5;
}




undefined8
FUN_019f0ec4(undefined8 param_1,byte *param_2,size_t param_3,undefined8 *param_4,size_t *param_5)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *__s;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  byte local_64 [4];
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  __s = (char *)(*(code *)PTR_malloc_02bf74a8)((param_3 << 2) / 3 + 4);
  pcVar3 = __s;
  if (__s == (char *)0x0) {
    uVar5 = 0x1b;
  }
  else {
    while (param_3 != 0) {
      lVar7 = 0;
      iVar6 = 0;
      do {
        if (param_3 == 0) {
          bVar8 = 0;
        }
        else {
          bVar8 = *param_2;
          iVar6 = iVar6 + 1;
          param_3 = param_3 - 1;
          param_2 = param_2 + 1;
        }
        local_64[lVar7] = bVar8;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      bVar8 = local_64[0] >> 2;
      uVar1 = (uint)(local_64[1] >> 4) | (local_64[0] & 3) << 4;
      uVar2 = (uint)(local_64[2] >> 6) | (local_64[1] & 0xf) << 2;
      if (iVar6 == 2) {
        FUN_019d5bc0(pcVar3,5,"%c%c%c=",
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar8],
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar1],
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar2]);
      }
      else if (iVar6 == 1) {
        FUN_019d5bc0(pcVar3,5,"%c%c==",
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar8],
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar1]);
      }
      else {
        FUN_019d5bc0(pcVar3,5,"%c%c%c%c",
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[bVar8],
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar1],
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar2],
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [(ulong)local_64[2] & 0x3f]);
      }
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = '\0';
    *param_4 = __s;
    sVar4 = strlen(__s);
    uVar5 = 0;
    *param_5 = sVar4;
  }
  return uVar5;
}

