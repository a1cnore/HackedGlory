// functions/019f2 — 11 functions
#include "libGameKindred.h"




undefined8 FUN_019f2554(long *param_1,long param_2)

{
  if (param_2 != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2;
    param_1[1] = 0;
    return 0;
  }
  return 1;
}




size_t FUN_019f2574(long *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  FILE *__stream;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 8) == 2) {
    if ((code *)param_1[3] == (code *)0x0) {
      return 0;
    }
    sVar1 = (*(code *)param_1[3])(param_2,1,param_3,*(undefined8 *)(lVar2 + 0x10));
  }
  else {
    __stream = (FILE *)param_1[2];
    if (__stream == (FILE *)0x0) {
      __stream = fopen(*(char **)(lVar2 + 0x10),"rb");
      param_1[2] = (long)__stream;
      if (__stream == (FILE *)0x0) {
        return 0xffffffffffffffff;
      }
    }
    sVar1 = fread(param_2,1,param_3,__stream);
  }
  if (sVar1 == 0) {
    if ((FILE *)param_1[2] != (FILE *)0x0) {
      fclose((FILE *)param_1[2]);
      param_1[2] = 0;
    }
    sVar1 = 0;
    *param_1 = *(long *)*param_1;
  }
  return sVar1;
}




void FUN_019f263c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  while (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if (param_1[9] != 0) {
      FUN_019f263c();
    }
    uVar1 = param_1[10];
    if ((((uint)uVar1 >> 2 & 1) == 0) && (param_1[1] != 0)) {
      (*(code *)PTR_free_02bf74b0)();
      uVar1 = param_1[10];
    }
    if (((uVar1 & 0x58) == 0) && (param_1[3] != 0)) {
      (*(code *)PTR_free_02bf74b0)();
    }
    if (param_1[7] != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    if (param_1[0xb] != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    (*(code *)PTR_free_02bf74b0)(param_1);
    param_1 = (long *)lVar2;
  }
  return;
}




void FUN_019f26e8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_019c2a2c();
  uVar2 = FUN_019c2a2c(param_1);
  FUN_019d5c34("------------------------%08x%08x",uVar1,uVar2);
  return;
}




void FUN_019f2728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_10a0 [8];
  undefined8 local_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined1 *local_1070;
  undefined1 **ppuStack_1068;
  undefined1 *puStack_1060;
  undefined8 uStack_1058;
  undefined1 auStack_1030 [4096];
  
  puStack_1060 = auStack_10a0;
  ppuStack_1068 = &local_1070;
  uStack_1058 = 0xffffff80ffffffd8;
  local_1098 = param_4;
  local_1090 = param_5;
  uStack_1088 = param_6;
  local_1080 = param_7;
  uStack_1078 = param_8;
  local_1070 = (undefined1 *)register0x00000008;
  FUN_019d4a10(auStack_1030,0x1000,param_3,&local_1070);
  FUN_019f27d4(param_1,0,auStack_1030,0,param_2);
  return;
}




undefined8 FUN_019f27d4(undefined8 *param_1,uint param_2,char *param_3,size_t param_4,long *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined8 uVar3;
  uint local_c0;
  long local_a0;
  
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)(0x20);
  if (puVar2 == (undefined8 *)0x0) {
LAB_019f2904:
    uVar3 = 0x1b;
  }
  else {
    *puVar2 = 0;
    if (param_2 < 2) {
      if (param_4 == 0) {
        param_4 = strlen(param_3);
      }
      __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(param_4 + 1);
      puVar2[2] = __dest;
      if (__dest == (void *)0x0) {
        (*(code *)PTR_free_02bf74b0)(puVar2);
        goto LAB_019f2904;
      }
      memcpy(__dest,param_3,param_4);
      puVar2[3] = param_4;
      *(undefined1 *)(puVar2[2] + param_4) = 0;
    }
    else {
      puVar2[2] = param_3;
    }
    *(uint *)(puVar2 + 1) = param_2;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      *(undefined8 *)*param_1 = puVar2;
    }
    *param_1 = puVar2;
    if (param_5 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      if (param_2 == 3) {
        iVar1 = FUN_019d9df0(0x1e21c1a,puVar2[2]);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = stat((char *)puVar2[2],(stat *)&stack0xffffffffffffff30);
        if ((iVar1 != 0) || ((local_c0 & 0xf000) == 0x4000)) {
          return 0x2b;
        }
        local_a0 = *param_5 + local_a0;
      }
      else {
        local_a0 = *param_5 + param_4;
      }
      uVar3 = 0;
      *param_5 = local_a0;
    }
  }
  return uVar3;
}




undefined4 FUN_019f2938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  
  if (*(char **)(param_1 + 0x58) == (char *)0x0) {
    pcVar6 = (char *)(*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(param_1 + 0x18));
    puVar1 = PTR_strdup_02bf74c0;
    if (pcVar6 == (char *)0x0) {
      return 0x1b;
    }
    basename(pcVar6);
    pcVar9 = (char *)(*(code *)puVar1)();
    (*(code *)PTR_free_02bf74b0)(pcVar6);
    pcVar6 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      return 0x1b;
    }
  }
  else {
    pcVar9 = (char *)0x0;
    pcVar6 = *(char **)(param_1 + 0x58);
  }
  pcVar3 = strchr(pcVar6,0x5c);
  if ((pcVar3 != (char *)0x0) || (pcVar3 = strchr(pcVar6,0x22), pcVar3 != (char *)0x0)) {
    puVar1 = PTR_malloc_02bf74a8;
    sVar4 = strlen(pcVar6);
    pcVar5 = (char *)(*(code *)puVar1)(sVar4 << 1 | 1);
    pcVar3 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      if (pcVar9 != (char *)0x0) {
        (*(code *)PTR_free_02bf74b0)(pcVar9);
      }
      return 0x1b;
    }
    do {
      cVar8 = *pcVar6;
      if ((cVar8 == '\"') || (cVar8 == '\\')) {
        pcVar7 = pcVar3 + 1;
        *pcVar3 = '\\';
        cVar8 = *pcVar6;
      }
      else {
        pcVar7 = pcVar3;
        if (cVar8 == '\0') goto code_r0x019f29e0;
      }
      pcVar6 = pcVar6 + 1;
      *pcVar7 = cVar8;
      pcVar3 = pcVar7 + 1;
    } while( true );
  }
  uVar2 = FUN_019f2728(param_2,param_3,"; filename=\"%s\"",pcVar6);
joined_r0x019f2aa4:
  if (pcVar9 != (char *)0x0) {
    (*(code *)PTR_free_02bf74b0)(pcVar9);
  }
  return uVar2;
code_r0x019f29e0:
  *pcVar3 = '\0';
  uVar2 = FUN_019f2728(param_2,param_3,"; filename=\"%s\"",pcVar5);
  (*(code *)PTR_free_02bf74b0)(pcVar5);
  goto joined_r0x019f2aa4;
}




undefined8 FUN_019f2bbc(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = plVar2[2];
    *param_2 = plVar2[3];
    *param_1 = *plVar2;
  }
  return uVar1;
}




void * FUN_019f2be4(char *param_1,size_t param_2)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_2 == 0) {
    if (param_1 == (char *)0x0) {
      pvVar1 = (void *)(*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
      return pvVar1;
    }
    param_2 = strlen(param_1);
    lVar2 = 1;
  }
  pvVar1 = (void *)(*(code *)PTR_malloc_02bf74a8)(param_2 + lVar2);
  if ((pvVar1 != (void *)0x0) && (memcpy(pvVar1,param_1,param_2), (int)lVar2 != 0)) {
    *(undefined1 *)((long)pvVar1 + param_2) = 0;
  }
  return pvVar1;
}




undefined8 FUN_019f2c84(long *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  
  lVar8 = *param_1;
  if ((*(char *)((long)param_1 + 0x2e3) != '\0') && (*(char *)(lVar8 + 0x50a) == '\0')) {
    ppuVar1 = &PTR_DAT_02bb0fc8;
    if ((undefined **)param_1[100] != &PTR_DAT_02bb0ec8) {
      ppuVar1 = &PTR_DAT_02bb1048;
    }
    pcVar7 = (code *)ppuVar1[1];
    param_1[100] = (long)ppuVar1;
    uVar6 = (*pcVar7)(param_1);
    return uVar6;
  }
  plVar3 = (long *)(*(code *)PTR_malloc_02bf74a8)(0x28);
  *(long **)(*param_1 + 0x218) = plVar3;
  if (plVar3 == (long *)0x0) {
    uVar6 = 0x1b;
  }
  else {
    pcVar4 = (char *)(*(long *)(lVar8 + 0x8ae8) + 1);
    *(char **)(lVar8 + 0x8ae8) = pcVar4;
    *(undefined1 *)(lVar8 + 0x8af0) = 1;
    pcVar4 = strstr(pcVar4,";type=");
    if ((pcVar4 != (char *)0x0) ||
       (pcVar4 = strstr((char *)param_1[0x16],";type="), pcVar4 != (char *)0x0)) {
      *pcVar4 = '\0';
      cVar2 = FUN_019e22b8(pcVar4[6]);
      *(undefined1 *)(param_1 + 0x5f) = 1;
      if (cVar2 == 'D') {
        *(undefined1 *)(lVar8 + 0x50d) = 1;
      }
      else if (cVar2 == 'A') {
        *(undefined1 *)(lVar8 + 0x50b) = 1;
      }
      else {
        *(undefined1 *)(lVar8 + 0x50b) = 0;
      }
    }
    lVar8 = *param_1;
    *(undefined4 *)(plVar3 + 3) = 0;
    plVar3[4] = 0;
    *plVar3 = lVar8 + 0x98;
    plVar3[1] = param_1[0x2e];
    lVar8 = param_1[0x2f];
    plVar3[2] = lVar8;
    uVar5 = FUN_019f7320();
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_019f7320(lVar8), (uVar5 & 1) == 0)) {
      uVar6 = 0;
      param_1[0xc2] = -1;
    }
    else {
      uVar6 = 3;
    }
  }
  return uVar6;
}




ulong FUN_019f2df8(long *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  char *__s;
  undefined8 *puVar11;
  long lVar12;
  
  *param_2 = '\0';
  lVar12 = *param_1;
  *(undefined1 *)((long)param_1 + 0x5dc) = 0;
  if (*(char *)(lVar12 + 0x708) != '\0') {
    do {
      iVar3 = 2;
      piVar1 = (int *)(lVar12 + 0x8b30);
      switch(*piVar1) {
      case 0:
        goto switchD_019f2fc4_caseD_0;
      case 1:
        puVar11 = *(undefined8 **)(lVar12 + 0x8b50);
        *(undefined8 *)(lVar12 + 0x2b0) = puVar11[1];
        *(undefined8 *)(lVar12 + 0x240) = puVar11[2];
        puVar11[1] = 0;
        puVar11[2] = 0;
        *piVar1 = 2;
        iVar3 = FUN_019f744c(*puVar11);
        if (iVar3 != 0) {
          iVar3 = 3;
          break;
        }
        if (*(long *)(*(long *)(lVar12 + 0x8b48) + 0x18) != 0) goto LAB_019f2fa8;
        *piVar1 = 3;
        uVar4 = 0x4e;
        goto LAB_019f3234;
      case 2:
        plVar8 = (long *)(lVar12 + 0x8b48);
        puVar11 = (undefined8 *)**(undefined8 **)*plVar8;
        lVar5 = FUN_019d5c34("%s%s",*(undefined8 *)(lVar12 + 0x8b38),*puVar11);
        if (lVar5 == 0) {
          uVar4 = 0x1b;
          goto LAB_019f3234;
        }
        lVar6 = *param_1;
        plVar10 = (long *)(lVar6 + 0x8ae0);
        if (*plVar10 != 0) {
          (*(code *)PTR_free_02bf74b0)(*plVar10);
          lVar6 = *param_1;
          plVar10 = (long *)(lVar6 + 0x8ae0);
          *plVar10 = 0;
        }
        *plVar10 = lVar5;
        *(long *)(lVar6 + 0x8ae8) = lVar5;
        FUN_019c9f64(lVar6,"Wildcard - START of \"%s\"\n",*puVar11);
        if (*(code **)(*param_1 + 0x710) == (code *)0x0) {
LAB_019f2f34:
          if (*(int *)(puVar11 + 1) == 0) {
            if ((*(byte *)(puVar11 + 0xc) >> 6 & 1) != 0) {
              param_1[0xc2] = puVar11[5];
            }
            uVar4 = FUN_019f6ec0(param_1);
            if ((uVar4 != 0) ||
               (FUN_019da474((undefined8 *)*plVar8,*(undefined8 *)*plVar8,0),
               *(long *)(*plVar8 + 0x18) != 0)) goto LAB_019f3234;
            uVar4 = 0;
            iVar3 = 3;
            goto LAB_019f3230;
          }
        }
        else {
          lVar12 = (**(code **)(*param_1 + 0x710))
                             (puVar11,*(undefined8 *)(lVar12 + 0x8b60),
                              *(undefined4 *)(*plVar8 + 0x18));
          if (lVar12 != 2) {
            if (lVar12 != 1) goto LAB_019f2f34;
            uVar4 = 0x58;
            goto LAB_019f3234;
          }
          FUN_019c9f64(*param_1,"Wildcard - \"%s\" skipped by user\n",*puVar11);
        }
        iVar3 = 4;
        break;
      case 3:
        if ((*(undefined8 **)(lVar12 + 0x8b50) == (undefined8 *)0x0) ||
           (uVar4 = FUN_019f744c(**(undefined8 **)(lVar12 + 0x8b50)), uVar4 == 0)) {
          uVar4 = 0;
          iVar3 = 6;
        }
        else {
          iVar3 = 5;
        }
        goto LAB_019f3230;
      case 4:
        if (*(code **)(lVar12 + 0x718) != (code *)0x0) {
          (**(code **)(lVar12 + 0x718))(*(undefined8 *)(lVar12 + 0x8b60));
        }
        FUN_019da474(*(undefined8 **)(lVar12 + 0x8b48),**(undefined8 **)(lVar12 + 0x8b48),0);
        if (*(long *)(*(long *)(lVar12 + 0x8b48) + 0x18) == 0) {
          iVar3 = 3;
        }
        break;
      default:
        uVar4 = 0;
        goto LAB_019f3234;
      }
      *piVar1 = iVar3;
LAB_019f2fa8:
      lVar12 = *param_1;
    } while( true );
  }
  uVar4 = FUN_019f6ec0(param_1);
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
  lVar12 = *param_1;
  goto LAB_019f3258;
switchD_019f2fc4_caseD_0:
  __s = *(char **)(lVar12 + 0x8ae8);
  pcVar7 = strrchr(__s,0x2f);
  if (pcVar7 != (char *)0x0) {
    __s = pcVar7 + 1;
    if (*__s != '\0') {
      lVar5 = (*(code *)PTR_strdup_02bf74c0)(__s);
      goto LAB_019f30dc;
    }
LAB_019f3194:
    *(undefined4 *)(lVar12 + 0x8b30) = 3;
    uVar4 = FUN_019f6ec0(param_1);
    goto LAB_019f3218;
  }
  if (*__s == '\0') goto LAB_019f3194;
  lVar5 = (*(code *)PTR_strdup_02bf74c0)(__s);
LAB_019f30dc:
  *(long *)(lVar12 + 0x8b40) = lVar5;
  if (lVar5 == 0) {
LAB_019f3214:
    uVar4 = 0x1b;
  }
  else {
    *__s = '\0';
    plVar8 = (long *)(*(code *)PTR_calloc_02bf74c8)(1,0x18);
    if (plVar8 == (long *)0x0) {
      if (*(long *)(lVar12 + 0x8b40) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(long *)(lVar12 + 0x8b40) = 0;
      }
      goto LAB_019f3214;
    }
    lVar5 = FUN_019f73fc();
    *plVar8 = lVar5;
    if (lVar5 == 0) {
      if (*(long *)(lVar12 + 0x8b40) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(long *)(lVar12 + 0x8b40) = 0;
      }
      (*(code *)PTR_free_02bf74b0)(plVar8);
      goto LAB_019f3214;
    }
    plVar10 = (long *)(lVar12 + 0x8b50);
    puVar11 = (undefined8 *)(lVar12 + 0x8b58);
    *plVar10 = (long)plVar8;
    *puVar11 = FUN_019f72e8;
    if (*(int *)(*param_1 + 0x4f0) == 2) {
      *(undefined4 *)(*param_1 + 0x4f0) = 1;
    }
    uVar4 = FUN_019f6ec0(param_1);
    if (uVar4 == 0) {
      lVar5 = (*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(*param_1 + 0x8ae8));
      *(long *)(lVar12 + 0x8b38) = lVar5;
      if (lVar5 == 0) {
        if (*(long *)(lVar12 + 0x8b40) != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *(long *)(lVar12 + 0x8b40) = 0;
        }
        (*(code *)*puVar11)(*plVar10);
        *plVar10 = 0;
        *(undefined8 *)(lVar12 + 0x8b58) = 0;
        goto LAB_019f3214;
      }
      lVar12 = *param_1;
      plVar8[1] = *(long *)(lVar12 + 0x2b0);
      *(code **)(lVar12 + 0x2b0) = FUN_019f7454;
      plVar8[2] = *(long *)(lVar12 + 0x240);
      *(long **)(lVar12 + 0x240) = param_1;
      FUN_019c9f64(lVar12,"Wildcard - Parsing started\n");
      uVar4 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x8b40) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(long *)(lVar12 + 0x8b40) = 0;
      }
      (*(code *)*puVar11)(*plVar10);
      *plVar10 = 0;
      *(undefined8 *)(lVar12 + 0x8b58) = 0;
    }
  }
LAB_019f3218:
  if (*piVar1 != 3) {
    iVar3 = 5;
    if (uVar4 == 0) {
      iVar3 = 1;
    }
LAB_019f3230:
    *piVar1 = iVar3;
  }
LAB_019f3234:
  lVar12 = *param_1;
  if ((*(uint *)(lVar12 + 0x8b30) | 2) == 6) {
    return 0;
  }
  if (uVar4 != 0) {
    return (ulong)uVar4;
  }
LAB_019f3258:
  *(undefined8 *)(lVar12 + 0x78) = 0xffffffffffffffff;
  FUN_019c45ac(lVar12,0);
  FUN_019c45a4(lVar12,0);
  FUN_019c4460(lVar12,0xffffffffffffffff);
  FUN_019c4438(lVar12,0xffffffffffffffff);
  *(undefined1 *)((long)param_1 + 0x5d9) = 1;
  if (*(char *)(*param_1 + 0x517) != '\0') {
    *(undefined4 *)(*(long *)(*param_1 + 0x218) + 0x18) = 1;
  }
  *param_2 = '\0';
  uVar4 = FUN_019f56b8(param_1,1,0xc);
  if (uVar4 == 0) {
    uVar4 = FUN_019e8940(param_1 + 0xa9,0);
    *param_2 = (int)param_1[0xbf] == 0;
    cVar2 = *(char *)((long)param_1 + 0x2ea);
    FUN_019c9f64(*param_1,"ftp_perform ends with SECONDARY: %d\n",cVar2);
    if (uVar4 == 0) {
      if (*param_2 == '\0') {
        return 0;
      }
      uVar9 = FUN_019f68f4(param_1,cVar2 != '\0');
      return uVar9;
    }
  }
  FUN_019f6e14(param_1 + 0xa9);
  return (ulong)uVar4;
}

