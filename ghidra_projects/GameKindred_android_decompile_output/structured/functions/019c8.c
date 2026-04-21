// functions/019c8 — 10 functions
#include "libGameKindred.h"




undefined8 FUN_019c8268(long *param_1,uint param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  lVar1 = lVar7 + 0x8a40;
  puVar3 = (ulong *)(lVar7 + 0x8b98);
  if ((param_2 & 1) == 0) {
    lVar1 = lVar7 + 0x8a20;
    puVar3 = (ulong *)(lVar7 + 0x8ba0);
  }
  if (*param_3 == 0) {
    return 0;
  }
  do {
    iVar4 = FUN_019e2430(&DAT_01e21e68,param_3,4);
    if (iVar4 == 0) {
      iVar4 = FUN_019e2430("Digest",param_3,6);
      if (iVar4 == 0) {
        iVar4 = FUN_019e2430("Basic",param_3,5);
        if (iVar4 != 0) {
          *puVar3 = *puVar3 | 1;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 1;
          if (*(long *)(lVar1 + 8) == 1) {
            *(undefined8 *)(lVar1 + 0x10) = 0;
            goto LAB_019c8338;
          }
        }
      }
      else if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
        *puVar3 = *puVar3 | 2;
        *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
        iVar4 = FUN_019db3e4(param_1,param_2 & 1,param_3);
        if (iVar4 != 4) {
LAB_019c8338:
          FUN_019c9f64(lVar7,"Authentication problem. Ignoring this.\n");
          *(undefined1 *)(lVar7 + 0x8a60) = 1;
        }
      }
      else {
        FUN_019c9f64(lVar7,"Ignoring duplicate digest auth header.\n");
      }
    }
    else {
      *puVar3 = *puVar3 | 8;
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 8;
      if ((*(long *)(lVar1 + 8) == 0x20) || (*(long *)(lVar1 + 8) == 8)) {
        iVar4 = FUN_019eac24(param_1,param_2 & 1,param_3);
        if (iVar4 != 0) goto LAB_019c8338;
        *(undefined1 *)(lVar7 + 0x8a60) = 0;
        if (*(long *)(lVar1 + 8) == 0x20) {
          *puVar3 = *puVar3 & 0xfffffffffffffff7;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) & 0xfffffffffffffff7;
          *puVar3 = *puVar3 | 0x20;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 0x20;
          uVar6 = (uint)*param_3;
          if (*param_3 != 0) {
            do {
              iVar4 = isspace(uVar6);
              if (iVar4 == 0) break;
              param_3 = param_3 + 1;
              uVar6 = (uint)*param_3;
            } while (uVar6 != 0);
          }
          iVar4 = FUN_019e2430(&DAT_01e21e68,param_3,4);
          if (iVar4 != 0) {
            param_3 = param_3 + 4;
            uVar6 = (uint)*param_3;
            if (*param_3 != 0) {
              do {
                iVar4 = isspace(uVar6);
                if (iVar4 == 0) {
                  lVar5 = (*(code *)PTR_strdup_02bf74c0)(param_3);
                  param_1[0x85] = lVar5;
                  if (lVar5 == 0) {
                    return 0x1b;
                  }
                  break;
                }
                param_3 = param_3 + 1;
                uVar6 = (uint)*param_3;
              } while (uVar6 != 0);
            }
          }
        }
      }
    }
    for (; (bVar2 = *param_3, bVar2 != 0 && (bVar2 != 0x2c)); param_3 = param_3 + 1) {
    }
    if (bVar2 == 0x2c) {
      param_3 = param_3 + 1;
    }
    uVar6 = (uint)*param_3;
    if (*param_3 == 0) {
      return 0;
    }
    while (iVar4 = isspace(uVar6), iVar4 != 0) {
      param_3 = param_3 + 1;
      uVar6 = (uint)*param_3;
      if (uVar6 == 0) {
        return 0;
      }
    }
  } while( true );
}




void FUN_019c8504(void)

{
  (*(code *)PTR_calloc_02bf74c8)(1,0x18);
  return;
}




int FUN_019c851c(long *param_1,long *param_2,long *param_3,long param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  void *__src;
  long lVar4;
  size_t __n;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong local_68;
  
  __src = (void *)*param_1;
  uVar2 = *(undefined4 *)((long)param_2 + (long)param_5 * 4 + 0x1d0);
  lVar5 = *(long *)(*param_2 + 0x218);
  uVar6 = param_1[2];
  __n = uVar6;
  if ((*(byte *)(param_2[100] + 0x7c) & 1) != 0) {
    if (0x3fff < uVar6) {
      __n = 0x4000;
    }
    memcpy((void *)(*param_2 + 0x4939),__src,__n);
    __src = (void *)(*param_2 + 0x4939);
  }
  iVar3 = FUN_019ca368(param_2,uVar2,__src,__n,&local_68);
  if (iVar3 != 0) goto LAB_019c8644;
  uVar1 = uVar6 - param_4;
  if (local_68 <= uVar6 - param_4) {
    uVar1 = local_68;
  }
  lVar4 = local_68 - uVar1;
  if (*(char *)(*param_2 + 0x520) == '\0') {
    if (lVar4 != 0) goto LAB_019c861c;
LAB_019c8698:
    *param_3 = *param_3 + local_68;
    if (lVar5 == 0) {
      if (uVar6 != local_68) {
        return 0x37;
      }
      *(undefined1 *)((long)param_2 + 0x395) = 0;
      goto LAB_019c8644;
    }
  }
  else {
    FUN_019ca014(*param_2,2,__src,uVar1,param_2);
    if (lVar4 == 0) goto LAB_019c8698;
    FUN_019ca014(*param_2,4,(long)__src + uVar1,lVar4,param_2);
LAB_019c861c:
    *(long *)(lVar5 + 0x30) = *(long *)(lVar5 + 0x30) + lVar4;
    *param_3 = *param_3 + local_68;
  }
  if (uVar6 != local_68) {
    lVar4 = *param_1;
    lVar8 = param_2[0x7b];
    lVar7 = param_2[0x7a];
    *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar5 + 8);
    *(long *)(lVar5 + 0x60) = lVar8;
    *(long *)(lVar5 + 0x58) = lVar7;
    param_2[0x7a] = (long)&LAB_019c870c;
    param_2[0x7b] = (long)param_2;
    *(long **)(lVar5 + 0x80) = param_1;
    *(ulong *)(lVar5 + 8) = uVar6 - local_68;
    *(ulong *)(lVar5 + 0x10) = lVar4 + local_68;
    *(undefined4 *)(lVar5 + 0x78) = 1;
    return 0;
  }
  *(undefined4 *)(lVar5 + 0x78) = 2;
LAB_019c8644:
  if (*param_1 != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  (*(code *)PTR_free_02bf74b0)(param_1);
  return iVar3;
}




undefined4
FUN_019c87cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
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
  __s = (char *)FUN_019d5e00(param_2,&local_70);
  if (__s == (char *)0x0) {
    if (*param_1 != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    (*(code *)PTR_free_02bf74b0)(param_1);
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    uVar1 = FUN_019c88c0(param_1,__s,sVar2);
    (*(code *)PTR_free_02bf74b0)(__s);
  }
  return uVar1;
}




undefined8 FUN_019c88c0(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = param_1[2];
  lVar1 = *param_1;
  if (~param_3 < uVar3) {
LAB_019c8990:
    if (lVar1 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *param_1 = 0;
    }
    (*(code *)PTR_free_02bf74b0)(param_1);
    uVar2 = 0x1b;
  }
  else {
    if ((lVar1 == 0) || (param_1[1] - 1U < uVar3 + param_3)) {
      lVar5 = -1;
      if ((-1 < (long)(uVar3 | param_3)) &&
         (uVar4 = param_3 << 1 ^ 0xffffffffffffffff, uVar3 * 2 < uVar4 || uVar3 * 2 - uVar4 == 0)) {
        lVar5 = (uVar3 + param_3) * 2;
      }
      if (lVar1 == 0) {
        lVar1 = (*(code *)PTR_malloc_02bf74a8)(lVar5);
      }
      else {
        lVar1 = (*(code *)PTR_realloc_02bf74b8)(lVar1,lVar5);
      }
      if (lVar1 == 0) {
        lVar1 = *param_1;
        goto LAB_019c8990;
      }
      uVar3 = param_1[2];
      *param_1 = lVar1;
      param_1[1] = lVar5;
    }
    memcpy((void *)(lVar1 + uVar3),param_2,param_3);
    uVar2 = 0;
    param_1[2] = param_1[2] + param_3;
  }
  return uVar2;
}




undefined8 FUN_019c89d0(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *__s;
  ulong uVar6;
  
  sVar2 = strlen(param_2);
  uVar3 = FUN_019e2430(param_1,param_2,sVar2);
  if ((int)uVar3 != 0) {
    __s = (byte *)(param_1 + sVar2);
    uVar5 = (uint)*__s;
    if (*__s != 0) {
      do {
        iVar1 = isspace(uVar5);
        if (iVar1 == 0) break;
        __s = __s + 1;
        uVar5 = (uint)*__s;
      } while (uVar5 != 0);
    }
    pbVar4 = (byte *)strchr((char *)__s,0xd);
    if ((pbVar4 == (byte *)0x0) && (pbVar4 = (byte *)strchr((char *)__s,10), pbVar4 == (byte *)0x0))
    {
      sVar2 = strlen((char *)__s);
      pbVar4 = __s + sVar2;
    }
    uVar6 = (long)pbVar4 - (long)__s;
    sVar2 = strlen(param_3);
    uVar3 = 0;
    if (sVar2 <= uVar6) {
      do {
        iVar1 = FUN_019e2430(__s,param_3,sVar2);
        if (iVar1 != 0) {
          return 1;
        }
        uVar6 = uVar6 - 1;
        __s = __s + 1;
      } while (sVar2 <= uVar6);
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_019c8ab4(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *__s;
  long lVar7;
  ulong uVar8;
  long local_70 [2];
  
  lVar7 = *param_1;
  if ((param_2 & 1) == 0) {
    if ((*(char *)((long)param_1 + 0x2e3) == '\0') || (*(char *)((long)param_1 + 0x2ed) != '\0'))
    goto LAB_019c8b04;
    local_70[0] = *(long *)(lVar7 + 0x3b0);
    if (*(char *)(lVar7 + 0x3c8) != '\0') {
      uVar8 = 2;
      local_70[1] = *(undefined8 *)(lVar7 + 0x3b8);
      goto LAB_019c8b10;
    }
  }
  else {
    if (*(char *)(lVar7 + 0x3c8) == '\0') {
LAB_019c8b04:
      local_70[0] = *(long *)(lVar7 + 0x3b0);
    }
    else {
      local_70[0] = *(long *)(lVar7 + 0x3b8);
    }
  }
  uVar8 = 1;
LAB_019c8b10:
  uVar5 = 0;
  do {
    for (puVar6 = (undefined8 *)local_70[uVar5]; puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)puVar6[1]) {
      __s = (char *)*puVar6;
      pbVar2 = (byte *)strchr(__s,0x3a);
      if (pbVar2 == (byte *)0x0) {
        pbVar2 = (byte *)strchr(__s,0x3b);
        if (pbVar2 != (byte *)0x0) {
          do {
            uVar4 = (uint)pbVar2[1];
            if (uVar4 == 0) {
              if (*pbVar2 == 0x3b) {
                *pbVar2 = 0x3a;
                goto LAB_019c8c28;
              }
              break;
            }
            iVar1 = isspace(uVar4);
            pbVar2 = pbVar2 + 1;
          } while (iVar1 != 0);
        }
      }
      else {
        do {
          pbVar2 = pbVar2 + 1;
          if (*pbVar2 == 0) goto LAB_019c8c3c;
          iVar1 = isspace((uint)*pbVar2);
        } while (iVar1 != 0);
        if (((((param_1[0x6e] == 0) || (iVar1 = FUN_019e2430("Host:",__s,5), iVar1 == 0)) &&
             ((*(int *)(lVar7 + 0x420) != 3 ||
              (iVar1 = FUN_019e2430("Content-Type:",*puVar6,0xd), iVar1 == 0)))) &&
            ((*(char *)((long)param_1 + 0x2ee) == '\0' ||
             (iVar1 = FUN_019e2430("Content-Length",*puVar6,0xe), iVar1 == 0)))) &&
           ((param_1[0x71] == 0 || (iVar1 = FUN_019e2430("Connection",*puVar6,10), iVar1 == 0)))) {
LAB_019c8c28:
          uVar3 = FUN_019c87cc(param_3,"%s\r\n",*puVar6);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
LAB_019c8c3c:
    }
    uVar5 = uVar5 + 1;
    if (uVar8 <= uVar5) {
      return 0;
    }
  } while( true );
}




int FUN_019c8c94(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  
  iVar2 = FUN_019dc820(*(undefined8 *)(param_1 + 0x418),&local_68);
  if (iVar2 == 0) {
    lVar1 = 6;
    if (iStack_50 != 0) {
      lVar1 = (long)iStack_50 + -1;
    }
    FUN_019d5bc0(param_1 + 0x938,0x3fff,"%s, %02d %s %4d %02d:%02d:%02d GMT",
                 (&PTR_DAT_02bb0388)[lVar1],local_5c,(&PTR_DAT_02bb03c0)[iStack_58],local_54 + 0x76c
                 ,uStack_60,local_64,local_68);
    if (*(int *)(param_1 + 0x410) == 2) {
      pcVar3 = "If-Unmodified-Since: %s\r\n";
    }
    else if (*(int *)(param_1 + 0x410) == 3) {
      pcVar3 = "Last-Modified: %s\r\n";
    }
    else {
      pcVar3 = "If-Modified-Since: %s\r\n";
    }
    iVar2 = FUN_019c87cc(param_2,pcVar3,param_1 + 0x938);
  }
  else {
    FUN_019ca0fc(param_1,"Invalid TIMEVALUE");
  }
  return iVar2;
}




int FUN_019c8d98(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  *(byte *)(param_1 + 0x8ad0) = 0;
  if (*(long *)(param_1 + 0x428) < 2) {
    if (*(long *)(param_1 + 0x428) == 1) {
      return 0;
    }
    if (*(int *)(param_2 + 0x1a4) == 10) {
      return 0;
    }
    if ((*(int *)(param_2 + 0x1a4) != 0xb) && (*(int *)(param_1 + 0x8acc) == 10)) {
      return 0;
    }
  }
  lVar3 = FUN_019c78b4(param_2,"Expect:");
  if (lVar3 == 0) {
    iVar2 = FUN_019c87cc(param_3,"Expect: 100-continue\r\n");
    if (iVar2 != 0) {
      return iVar2;
    }
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_019c89d0(lVar3,"Expect:","100-continue");
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_1 + 0x8ad0) = bVar1;
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_019c8e64(long param_1,long param_2,size_t *param_3,char *param_4)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  int *piVar5;
  size_t sVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined4 uVar18;
  uint uVar19;
  char cVar20;
  undefined1 *puVar21;
  char *pcVar22;
  size_t __n;
  long lVar23;
  byte *pbVar24;
  time_t local_70;
  int local_64;
  
  plVar1 = (long *)(param_1 + 0x78);
  piVar2 = (int *)(param_2 + 0x1a4);
  plVar7 = (long *)(param_1 + 0x8b00);
  plVar8 = (long *)(param_1 + 0x8bb0);
  pcVar22 = *(char **)(param_1 + 0xf8);
  piVar3 = (int *)(param_2 + 0x1a8);
  plVar4 = (long *)(param_1 + 0x110);
  piVar5 = (int *)(param_1 + 0x128);
  plVar9 = (long *)(param_1 + 0x8b88);
  do {
    *(char **)(param_1 + 0x100) = pcVar22;
    __n = *param_3;
    pvVar14 = memchr(pcVar22,10,__n);
    *(void **)(param_1 + 0x108) = pvVar14;
    if (pvVar14 == (void *)0x0) {
      iVar12 = FUN_019c9dac(param_1,plVar1,__n);
      if (iVar12 != 0) {
        return iVar12;
      }
      if (*(int *)(param_1 + 0xe0) != 0) {
        return 0;
      }
      if (*(ulong *)(param_1 + 0xf0) < 6) {
        return 0;
      }
      uVar15 = FUN_019c9ea8(param_1,param_2,*(undefined8 *)(param_1 + 0x928));
      if ((uVar15 & 1) != 0) {
        return 0;
      }
      uVar18 = 2;
      *(undefined1 *)(param_1 + 0xd8) = 0;
LAB_019c9cac:
      *(undefined4 *)(param_1 + 0xdc) = uVar18;
      return 0;
    }
    sVar6 = (long)pvVar14 + (1 - (long)pcVar22);
    *param_3 = __n - sVar6;
    *(long *)(param_1 + 0xf8) = (long)pvVar14 + 1;
    iVar12 = FUN_019c9dac(param_1,plVar1,((long)pvVar14 + 1) - (long)pcVar22);
    if (iVar12 != 0) {
      return iVar12;
    }
    pcVar22 = *(char **)(param_1 + 0x928);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xe8);
    *(char **)(param_1 + 0x110) = pcVar22;
    if ((*(int *)(param_1 + 0xe0) == 0) && (5 < *(ulong *)(param_1 + 0xf0))) {
      uVar15 = FUN_019c9ea8(param_1,param_2,pcVar22);
      if ((uVar15 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if (*param_3 == 0) {
          *(undefined4 *)(param_1 + 0xdc) = 2;
          *param_3 = sVar6;
          return 0;
        }
        uVar18 = 1;
        goto LAB_019c9cac;
      }
      pcVar22 = (char *)*plVar4;
    }
    pcVar17 = pcVar22;
    if (*pcVar22 == '\n') {
LAB_019c8fdc:
      *plVar4 = (long)(pcVar17 + 1);
LAB_019c8fe4:
      iVar12 = *piVar5;
      if (iVar12 - 100U < 100) {
        *(undefined1 *)(param_1 + 0xd8) = 1;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (iVar12 == 0x65) {
          if (*(int *)(param_1 + 0x144) == 1) {
            FUN_019c9f64(param_1,"Received 101\n");
            *(undefined4 *)(param_1 + 0x144) = 2;
            return 1;
          }
        }
        else if ((iVar12 == 100) && (*(int *)(param_1 + 0x140) != 0)) {
          *(undefined4 *)(param_1 + 0x140) = 0;
          *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if (((((*(long *)(param_1 + 0x78) == -1) && (*(char *)(param_1 + 0x210) == '\0')) &&
             (*(char *)(param_2 + 0x2e0) == '\0')) &&
            ((*piVar2 == 0xb && ((*(byte *)(*(long *)(param_2 + 800) + 0x7a) >> 2 & 1) == 0)))) &&
           (*(int *)(param_1 + 0x420) != 5)) {
          FUN_019c9f64(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          *(undefined1 *)(param_2 + 0x2e0) = 1;
        }
      }
      iVar12 = FUN_019c7e40(param_2);
      if (iVar12 != 0) {
        iVar12 = *(int *)(param_1 + 0x128);
LAB_019c9bd4:
        FUN_019ca0fc(param_1,"The requested URL returned error: %d",iVar12);
        return 0x16;
      }
      lVar23 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x928);
      uVar18 = 2;
      if (*(char *)(param_1 + 0x514) != '\0') {
        uVar18 = 3;
      }
      iVar12 = FUN_019ca574(param_2,uVar18,*(long *)(param_1 + 0x928),lVar23);
      if (iVar12 != 0) {
        return iVar12;
      }
      *plVar9 = *plVar9 + lVar23;
      lVar10 = *(long *)(param_1 + 0xa8) + lVar23;
      *(long *)(param_1 + 0xa8) = lVar10;
      if (99 < *(int *)(param_1 + 0x128) - 100U) {
        lVar10 = 0;
      }
      *(long *)(param_1 + 0xb0) = lVar10;
      if (*param_4 == '\0') {
        iVar12 = FUN_019c7a9c(param_2);
        if (iVar12 != 0) {
          return iVar12;
        }
        if (((*piVar5 < 300) || (*(char *)(param_2 + 0x2ee) != '\0')) ||
           (*(char *)(param_2 + 0x2e0) != '\0')) {
LAB_019c918c:
          if (*(char *)(param_2 + 0x2ef) == '\0') goto LAB_019c91b0;
        }
        else if (*(char *)(param_2 + 0x2ef) == '\0') {
          if ((*(int *)(param_1 + 0x420) - 2U < 3) && (*(char *)(param_1 + 0x1e8) == '\0')) {
            FUN_019c9f64(param_1,"HTTP error before end of send, stop sending\n");
            *(undefined1 *)(param_2 + 0x2e0) = 1;
            *(undefined1 *)(param_1 + 0x1e8) = 1;
            *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffd;
            if (*(char *)(param_1 + 0x8ad0) != '\0') {
              *(undefined4 *)(param_1 + 0x140) = 3;
            }
          }
          goto LAB_019c918c;
        }
        FUN_019c9f64(param_1,"Keep sending data to get tossed away!\n");
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) | 2;
      }
LAB_019c91b0:
      if (*(char *)(param_1 + 0xd8) == '\0') {
        if (*(char *)(param_1 + 0x517) == '\0') {
          if (*(char *)(param_1 + 0x210) == '\0') goto LAB_019c9bf0;
          *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
LAB_019c9c34:
          if (*(long *)(param_1 + 0x88) == 0) goto LAB_019c9c14;
LAB_019c9c3c:
          if (*param_4 == '\0') goto LAB_019c9c50;
        }
        else {
          *param_4 = '\x01';
LAB_019c9bf0:
          if (*plVar1 == -1) goto LAB_019c9c34;
          FUN_019c4438(param_1);
          *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x78);
          if (*(long *)(param_1 + 0x78) != 0) goto LAB_019c9c3c;
LAB_019c9c14:
          *param_4 = '\x01';
        }
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
LAB_019c9c50:
        if (*(char *)(param_1 + 0x520) != '\0') {
          FUN_019ca014(param_1,1,*(undefined8 *)(param_1 + 0x100),lVar23,param_2);
        }
        return 0;
      }
    }
    else {
      if (*pcVar22 == '\r') {
        pcVar17 = pcVar22 + 1;
        *plVar4 = (long)pcVar17;
        if (pcVar22[1] == '\n') goto LAB_019c8fdc;
        goto LAB_019c8fe4;
      }
      iVar12 = *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe0) = iVar12 + 1;
      if (iVar12 == 0) {
        uVar19 = *(uint *)(*(long *)(param_2 + 800) + 0x78);
        if ((uVar19 & 3) == 0) {
          if (((uVar19 >> 0x12 & 1) == 0) ||
             (iVar12 = sscanf(pcVar22," RTSP/%d.%d %3d",&local_64,piVar3,piVar5), iVar12 != 3)) {
LAB_019c9cdc:
            *(undefined1 *)(param_1 + 0xd8) = 0;
            return 0;
          }
          *piVar3 = *piVar3 + local_64 * 10;
          iVar13 = 0xb;
LAB_019c9244:
          *piVar2 = iVar13;
        }
        else {
          iVar12 = sscanf(pcVar22," HTTP/%d.%d %3d",&local_70,piVar2,piVar5);
          if (iVar12 == 3) {
            iVar13 = *piVar2 + (int)local_70 * 10;
            goto LAB_019c9244;
          }
          iVar12 = sscanf((char *)*plVar4," HTTP %3d",piVar5);
          iVar13 = 10;
          *piVar2 = 10;
          if (iVar12 == 0) {
            uVar15 = FUN_019c9eec(param_1,*(undefined8 *)(param_1 + 0x110));
            if ((uVar15 & 1) == 0) goto LAB_019c9cdc;
            *piVar5 = 200;
            iVar13 = 10;
            goto LAB_019c9244;
          }
        }
        iVar12 = *piVar5;
        *(int *)(param_1 + 0x8b68) = iVar12;
        *(int *)(param_1 + 0x8b70) = iVar13;
        iVar11 = *(int *)(param_1 + 0x8acc);
        if ((iVar11 == 0) || (iVar13 < iVar11)) {
          *(int *)(param_1 + 0x8acc) = iVar13;
        }
        if ((399 < iVar12) && (*(char *)(param_1 + 0x510) != '\0')) {
          if (iVar12 == 0x197) {
            cVar20 = *(char *)(param_2 + 0x2e5);
joined_r0x019c92a8:
            if (cVar20 != '\0') goto LAB_019c92cc;
          }
          else if (iVar12 == 0x191) {
            cVar20 = *(char *)(param_2 + 0x2e4);
            goto joined_r0x019c92a8;
          }
          if (((*plVar7 == 0) || (iVar12 != 0x1a0)) || (*(int *)(param_1 + 0x420) != 1)) {
            pcVar22 = (char *)*plVar4;
            iVar13 = strncmp(pcVar22,"HTTP",4);
            if (((iVar13 == 0) && (pcVar22 = strchr(pcVar22,0x20), pcVar22 != (char *)0x0)) &&
               (pcVar22 = pcVar22 + 1, *pcVar22 != '\0')) {
              cVar20 = '\r';
              pcVar17 = strchr(pcVar22,0xd);
              if (pcVar17 == (char *)0x0) {
                cVar20 = '\n';
                pcVar17 = strchr(pcVar22,10);
                if (pcVar17 == (char *)0x0) goto LAB_019c9bd4;
              }
              *pcVar17 = '\0';
              FUN_019ca0fc(param_1,"The requested URL returned error: %s",pcVar22);
              *pcVar17 = cVar20;
              return 0x16;
            }
            goto LAB_019c9bd4;
          }
        }
LAB_019c92cc:
        if (iVar13 == 10) {
          FUN_019c9f64(param_1,"HTTP 1.0, assume close after body\n");
          *(undefined1 *)(param_2 + 0x2e0) = 1;
        }
        else if (((10 < iVar13) && (*(char *)(param_2 + 0x2e0) == '\0')) &&
                ((puVar21 = *(undefined1 **)(param_2 + 0x6c0), puVar21 != (undefined1 *)0x0 &&
                 (uVar15 = FUN_019c23e8(param_1,param_2), (uVar15 & 1) == 0)))) {
          *puVar21 = 1;
        }
        if ((*piVar5 == 0x130) || (*piVar5 == 0xcc)) {
          if (*(int *)(param_1 + 0x410) != 0) {
            *(undefined1 *)(param_1 + 0x8b80) = 1;
          }
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined1 *)(param_1 + 0x1ea) = 1;
        }
      }
      if (((*(char *)(param_1 + 0x1ea) == '\0') && (*(char *)(param_1 + 0x537) == '\0')) &&
         (iVar12 = FUN_019e2430("Content-Length:",*plVar4,0xf), iVar12 != 0)) {
        lVar23 = strtol((char *)(*(long *)(param_1 + 0x110) + 0xf),(char **)0x0,10);
        if ((*(long *)(param_1 + 0x4e8) != 0) && (*(long *)(param_1 + 0x4e8) < lVar23)) {
          FUN_019ca0fc(param_1,"Maximum file size exceeded");
          return 0x3f;
        }
        if (lVar23 < 0) {
          *(undefined1 *)(param_2 + 0x2e0) = 1;
          FUN_019c9f64(param_1,"Negative content-length: %ld, closing after transfer\n");
        }
        else {
          *(long *)(param_1 + 0x78) = lVar23;
          *(long *)(param_1 + 0x88) = lVar23;
          FUN_019c4438(param_1,lVar23);
        }
      }
      else {
        iVar12 = FUN_019e2430("Content-Type:",*plVar4,0xd);
        if (iVar12 == 0) {
          iVar12 = FUN_019e2430("Server:",*plVar4,7);
          if (iVar12 == 0) {
            iVar12 = *piVar2;
            if (iVar12 == 10) {
              if (*(char *)(param_2 + 0x2e3) == '\0') {
LAB_019c9624:
                uVar15 = FUN_019c89d0(*plVar4,"Connection:","keep-alive");
                if ((uVar15 & 1) == 0) goto LAB_019c9658;
                pcVar22 = "HTTP/1.0 connection set to keep alive!\n";
              }
              else {
                uVar15 = FUN_019c89d0(*plVar4,"Proxy-Connection:","keep-alive");
                if ((uVar15 & 1) == 0) {
                  iVar12 = *piVar2;
                  goto LAB_019c95d0;
                }
                pcVar22 = "HTTP/1.0 proxy connection set to keep alive!\n";
              }
              *(undefined1 *)(param_2 + 0x2e0) = 0;
LAB_019c9650:
              FUN_019c9f64(param_1,pcVar22);
            }
            else {
LAB_019c95d0:
              if (iVar12 == 0xb) {
                if (*(char *)(param_2 + 0x2e3) != '\0') {
                  uVar15 = FUN_019c89d0(*plVar4,"Proxy-Connection:","close");
                  if ((uVar15 & 1) == 0) {
                    iVar12 = *piVar2;
                    goto LAB_019c961c;
                  }
                  pcVar22 = "HTTP/1.1 proxy connection set close!\n";
                  *(undefined1 *)(param_2 + 0x2e0) = 1;
                  goto LAB_019c9650;
                }
              }
              else {
LAB_019c961c:
                if (iVar12 == 10) goto LAB_019c9624;
              }
LAB_019c9658:
              uVar15 = FUN_019c89d0(*plVar4,"Connection:","close");
              if ((uVar15 & 1) == 0) {
                iVar12 = FUN_019e2430("Transfer-Encoding:",*plVar4,0x12);
                if (iVar12 != 0) {
                  pbVar24 = (byte *)(*plVar4 + 0x12);
                  do {
                    uVar19 = (uint)*pbVar24;
                    if (*pbVar24 != 0) {
                      do {
                        iVar12 = isspace(uVar19);
                        if ((uVar19 != 0x2c) && (iVar12 == 0)) break;
                        pbVar24 = pbVar24 + 1;
                        uVar19 = (uint)*pbVar24;
                      } while (uVar19 != 0);
                    }
                    iVar12 = FUN_019e2430("chunked",pbVar24,7);
                    if (iVar12 != 0) {
                      *(undefined1 *)(param_1 + 0x210) = 1;
                      FUN_019d9eec(param_2);
                      pbVar24 = pbVar24 + 7;
                    }
                    if (*(int *)(param_1 + 0x148) != 0) goto LAB_019c9404;
                    iVar12 = FUN_019e2430("identity",pbVar24,8);
                    uVar18 = 0;
                    lVar23 = 8;
                    if (iVar12 == 0) {
                      iVar12 = FUN_019e2430("deflate",pbVar24,7);
                      if (iVar12 == 0) {
                        iVar12 = FUN_019e2430("gzip",pbVar24,4);
                        if (iVar12 == 0) {
                          iVar12 = FUN_019e2430("x-gzip",pbVar24,6);
                          if (iVar12 == 0) {
                            iVar12 = FUN_019e2430("compress",pbVar24,8);
                            if (iVar12 == 0) {
                              iVar12 = FUN_019e2430("x-compress",pbVar24,10);
                              if (iVar12 == 0) goto LAB_019c9404;
                              uVar18 = 3;
                              lVar23 = 10;
                            }
                            else {
                              uVar18 = 3;
                              lVar23 = 8;
                            }
                          }
                          else {
                            uVar18 = 2;
                            lVar23 = 6;
                          }
                        }
                        else {
                          uVar18 = 2;
                          lVar23 = 4;
                        }
                      }
                      else {
                        uVar18 = 1;
                        lVar23 = 7;
                      }
                    }
                    *(undefined4 *)(param_1 + 0x148) = uVar18;
                    pbVar24 = pbVar24 + lVar23;
                  } while( true );
                }
                iVar12 = FUN_019e2430("Content-Encoding:",*plVar4,0x11);
                if ((iVar12 == 0) || ((*(long *)(param_1 + 0x598) == 0 && (*piVar2 != 0x14)))) {
                  iVar12 = FUN_019e2430("Content-Range:",*plVar4,0xe);
                  if (iVar12 == 0) {
                    if ((*(long *)(param_1 + 0x798) == 0) ||
                       (iVar12 = FUN_019e2430("Set-Cookie:",*plVar4,0xb), iVar12 == 0)) {
                      iVar12 = FUN_019e2430("Last-Modified:",*plVar4,0xe);
                      if ((iVar12 == 0) ||
                         ((*(int *)(param_1 + 0x410) == 0 && (*(char *)(param_1 + 0x509) == '\0'))))
                      {
                        iVar12 = FUN_019e2430("WWW-Authenticate:",*plVar4,0x11);
                        if ((iVar12 == 0) || (*piVar5 != 0x191)) {
                          iVar12 = FUN_019e2430("Proxy-authenticate:",*plVar4,0x13);
                          if ((iVar12 != 0) && (*piVar5 == 0x197)) {
                            iVar12 = 0x197;
                            goto LAB_019c9a48;
                          }
                          if (((*piVar5 - 300U < 100) &&
                              (iVar12 = FUN_019e2430("Location:",*plVar4,9), iVar12 != 0)) &&
                             (*(long *)(param_1 + 0x1f0) == 0)) {
                            pcVar22 = (char *)FUN_019c79a0(*plVar4);
                            if (pcVar22 == (char *)0x0) {
                              return 0x1b;
                            }
                            if (*pcVar22 == '\0') goto LAB_019c93fc;
                            *(char **)(param_1 + 0x1f0) = pcVar22;
                            if (*(char *)(param_1 + 0x511) != '\0') {
                              lVar23 = (*(code *)PTR_strdup_02bf74c0)();
                              *(long *)(param_1 + 0x1f8) = lVar23;
                              if (lVar23 == 0) {
                                return 0x1b;
                              }
                              iVar12 = FUN_019c7cd0(param_2);
                              goto joined_r0x019c9ad0;
                            }
                            goto LAB_019c9404;
                          }
                          if ((*(byte *)(*(long *)(param_2 + 800) + 0x7a) >> 2 & 1) == 0)
                          goto LAB_019c9404;
                          iVar12 = FUN_019e9c54(param_2,*plVar4);
                        }
                        else {
                          iVar12 = 0x191;
LAB_019c9a48:
                          lVar23 = FUN_019c79a0(*plVar4);
                          if (lVar23 == 0) {
                            return 0x1b;
                          }
                          iVar12 = FUN_019c8268(param_2,iVar12 == 0x197,lVar23);
                          (*(code *)PTR_free_02bf74b0)(lVar23);
                        }
joined_r0x019c9ad0:
                        if (iVar12 != 0) {
                          return iVar12;
                        }
                      }
                      else {
                        local_70 = time((time_t *)0x0);
                        uVar16 = FUN_019dc270(*(long *)(param_1 + 0x110) + 0xe,&local_70);
                        *(undefined8 *)(param_1 + 0x1c0) = uVar16;
                        if (*(char *)(param_1 + 0x509) != '\0') {
                          *(undefined8 *)(param_1 + 0x8b78) = uVar16;
                        }
                      }
                    }
                    else {
                      FUN_019c1238(param_1,2,2);
                      lVar23 = *(long *)(param_2 + 0x378);
                      if (lVar23 == 0) {
                        lVar23 = *(long *)(param_2 + 0xc0);
                      }
                      FUN_019c4a2c(param_1,*(undefined8 *)(param_1 + 0x798),1,
                                   *(long *)(param_1 + 0x110) + 0xb,lVar23,
                                   *(undefined8 *)(param_1 + 0x8ae8));
                      FUN_019c1288(param_1,2);
                    }
                  }
                  else {
                    pbVar24 = (byte *)(*plVar4 + 0xe);
                    uVar19 = (uint)*pbVar24;
                    if (*pbVar24 != 0) {
                      do {
                        if ((uVar19 == 0x2a) || (uVar19 - 0x30 < 10)) {
                          if (uVar19 - 0x30 < 10) {
                            lVar23 = strtol((char *)pbVar24,(char **)0x0,10);
                            *(long *)(param_1 + 0x120) = lVar23;
                            if (*plVar7 == lVar23) {
                              *(undefined1 *)(param_1 + 0x118) = 1;
                            }
                            goto LAB_019c9404;
                          }
                          break;
                        }
                        pbVar24 = pbVar24 + 1;
                        uVar19 = (uint)*pbVar24;
                      } while (uVar19 != 0);
                    }
                    *plVar7 = 0;
                  }
                }
                else {
                  pbVar24 = (byte *)(*plVar4 + 0x11);
                  uVar19 = (uint)*pbVar24;
                  if (*pbVar24 != 0) {
                    do {
                      iVar12 = isspace(uVar19);
                      if (iVar12 == 0) break;
                      pbVar24 = pbVar24 + 1;
                      uVar19 = (uint)*pbVar24;
                    } while (uVar19 != 0);
                  }
                  iVar12 = FUN_019e2430("identity",pbVar24,8);
                  if (iVar12 == 0) {
                    iVar12 = FUN_019e2430("deflate",pbVar24,7);
                    if (iVar12 == 0) {
                      iVar12 = FUN_019e2430("gzip",pbVar24,4);
                      if ((iVar12 == 0) && (iVar12 = FUN_019e2430("x-gzip",pbVar24,6), iVar12 == 0))
                      {
                        iVar12 = FUN_019e2430("compress",pbVar24,8);
                        if ((iVar12 == 0) &&
                           (iVar12 = FUN_019e2430("x-compress",pbVar24,10), iVar12 == 0))
                        goto LAB_019c9404;
                        uVar18 = 3;
                      }
                      else {
                        uVar18 = 2;
                      }
                    }
                    else {
                      uVar18 = 1;
                    }
                    *(undefined4 *)(param_1 + 0x148) = uVar18;
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x148) = 0;
                  }
                }
              }
              else {
                *(undefined1 *)(param_2 + 0x2e0) = 1;
              }
            }
          }
          else {
            pcVar22 = (char *)FUN_019c79a0(*plVar4);
            if (((*(char **)(param_2 + 0x6c0) != (char *)0x0) &&
                (**(char **)(param_2 + 0x6c0) != '\0')) &&
               (uVar15 = FUN_019c2610(param_1,pcVar22), (uVar15 & 1) != 0)) {
              **(undefined1 **)(param_2 + 0x6c0) = 0;
            }
            if (pcVar22 != (char *)0x0) goto LAB_019c93fc;
          }
        }
        else {
          pcVar22 = (char *)FUN_019c79a0(*plVar4);
          if (pcVar22 == (char *)0x0) {
            return 0x1b;
          }
          if (*pcVar22 == '\0') {
LAB_019c93fc:
            (*(code *)PTR_free_02bf74b0)(pcVar22);
          }
          else {
            if (*plVar8 != 0) {
              (*(code *)PTR_free_02bf74b0)();
              *plVar8 = 0;
            }
            *plVar8 = (long)pcVar22;
          }
        }
      }
LAB_019c9404:
      uVar18 = 2;
      if (*(char *)(param_1 + 0x514) != '\0') {
        uVar18 = 3;
      }
      if (*(char *)(param_1 + 0x520) != '\0') {
        FUN_019ca014(param_1,1,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xf0),
                     param_2);
      }
      iVar12 = FUN_019ca574(param_2,uVar18,*(undefined8 *)(param_1 + 0x110),
                            *(undefined8 *)(param_1 + 0xf0));
      if (iVar12 != 0) {
        return iVar12;
      }
      *plVar9 = *plVar9 + *(long *)(param_1 + 0xf0);
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xf0);
    }
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x928);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (*param_4 != '\0') {
      return 0;
    }
    pcVar22 = *(char **)(param_1 + 0xf8);
    if (*pcVar22 == '\0') {
      return 0;
    }
  } while( true );
}

