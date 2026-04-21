// functions/019ca — 14 functions
#include "libGameKindred.h"




void FUN_019ca014(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_d0 [160];
  
  if (((param_5 == 0) || (*(char *)(param_1 + 0x508) == '\0')) || (*(long *)(param_5 + 200) == 0))
  goto switchD_019ca078_default;
  pcVar3 = "Data";
  pcVar4 = "from";
  switch(param_2) {
  case 1:
    pcVar3 = "Header";
    pcVar4 = "from";
    break;
  case 2:
    pcVar3 = "Header";
  case 4:
    pcVar4 = "to";
    break;
  case 3:
    break;
  default:
    goto switchD_019ca078_default;
  }
  FUN_019d5bc0(acStack_d0,0xa0,"[%s %s %s]",pcVar3,pcVar4);
  sVar2 = strlen(acStack_d0);
  iVar1 = FUN_019caa84(param_1,0,acStack_d0,sVar2);
  if (iVar1 == 0) {
switchD_019ca078_default:
    FUN_019caa84(param_1,param_2,param_3,param_4);
  }
  return;
}




void FUN_019ca0fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s;
  long lVar1;
  size_t sVar2;
  undefined8 local_a0;
  undefined8 local_98;
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
  __s = (char *)(param_1 + 0x938);
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  local_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_019d4a10(__s,0x4000,param_2,&local_70);
  if (*(long *)(param_1 + 0x230) != 0) {
    if (*(char *)(param_1 + 0x8988) == '\0') {
      FUN_019d5bc0(*(long *)(param_1 + 0x230),0x100,"%s",__s);
      *(char *)(param_1 + 0x8988) = '\x01';
    }
  }
  if (*(char *)(param_1 + 0x520) != '\0') {
    sVar2 = strlen(__s);
    if (sVar2 < 0x3fff) {
      lVar1 = param_1 + sVar2;
      sVar2 = sVar2 + 1;
      *(undefined2 *)(lVar1 + 0x938) = 10;
    }
    FUN_019caa84(param_1,0,__s,sVar2);
  }
  return;
}




int FUN_019ca208(int param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s;
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  int local_64;
  
  lVar4 = *param_2;
  puStack_a0 = auStack_e0;
  ppuStack_a8 = &local_b0;
  uStack_98 = 0xffffff80ffffffd8;
  local_d8 = param_4;
  local_d0 = param_5;
  uStack_c8 = param_6;
  local_c0 = param_7;
  uStack_b8 = param_8;
  local_b0 = (undefined1 *)register0x00000008;
  __s = (char *)FUN_019d5e00(param_3,&local_b0);
  if (__s == (char *)0x0) {
    iVar6 = 0x1b;
  }
  else {
    sVar1 = strlen(__s);
    pcVar5 = __s;
    while( true ) {
      local_64 = 0;
      uVar3 = (ulong)(*(int *)((long)param_2 + 0x1d4) == param_1);
      lVar2 = (*(code *)param_2[uVar3 + 0x3f])(param_2,uVar3,pcVar5,sVar1,&local_64);
      if (lVar2 < 0) {
        lVar2 = 0;
        if (local_64 != 0x51) {
          iVar6 = local_64;
          if (local_64 == 0) {
            iVar6 = 0x37;
          }
          goto LAB_019ca31c;
        }
      }
      if (*(char *)(lVar4 + 0x520) != '\0') {
        FUN_019ca014(lVar4,4,pcVar5,lVar2,param_2);
      }
      sVar1 = sVar1 - lVar2;
      if (sVar1 == 0) break;
      pcVar5 = pcVar5 + lVar2;
    }
    iVar6 = 0;
LAB_019ca31c:
    (*(code *)PTR_free_02bf74b0)(__s);
  }
  return iVar6;
}




ssize_t FUN_019ca3d8(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  sVar2 = send(*(int *)((long)param_1 + (long)param_2 * 4 + 0x1d0),param_3,param_4,0x4000);
  *param_5 = 0;
  if (sVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    uVar5 = 0x51;
    if (iVar1 == 4) {
      sVar2 = 0;
    }
    else {
      sVar2 = 0;
      if (iVar1 != 0xb) {
        lVar6 = *param_1;
        uVar4 = FUN_019c1348(param_1,iVar1);
        FUN_019ca0fc(lVar6,"Send failure: %s",uVar4);
        sVar2 = -1;
        *(int *)(*param_1 + 0x898c) = iVar1;
        uVar5 = 0x37;
      }
    }
    *param_5 = uVar5;
  }
  return sVar2;
}




undefined4
FUN_019ca48c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = FUN_019ca3d8(param_1,*(int *)(param_1 + 0x1d4) == param_2,param_3,param_4,&local_14);
  *param_5 = uVar1;
  return local_14;
}




undefined8 FUN_019ca574(long *param_1,uint param_2,char *param_3,size_t param_4)

{
  short *psVar1;
  long *plVar2;
  short *psVar3;
  long lVar4;
  size_t sVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  code *pcVar9;
  long lVar10;
  short *psVar11;
  long lVar12;
  
  lVar12 = *param_1;
  if (param_4 == 0) {
    param_4 = strlen(param_3);
  }
  if ((*(byte *)(lVar12 + 0x1e4) >> 4 & 1) == 0) {
    if ((param_2 & 1) == 0) {
LAB_019ca7e8:
      if ((param_2 >> 1 & 1) == 0) {
        return 0;
      }
      pcVar9 = *(code **)(lVar12 + 0x2b8);
      if (pcVar9 == (code *)0x0) {
        if (*(long *)(lVar12 + 0x250) == 0) {
          return 0;
        }
        pcVar9 = *(code **)(lVar12 + 0x2b0);
      }
      sVar5 = (*pcVar9)(param_3,1,param_4);
      if (sVar5 == 0x10000001) {
        pvVar6 = (void *)(*(code *)PTR_malloc_02bf74a8)(param_4);
        if (pvVar6 != (void *)0x0) {
          memcpy(pvVar6,param_3,param_4);
          *(void **)(lVar12 + 0x8968) = pvVar6;
          *(size_t *)(lVar12 + 0x8970) = param_4;
          *(undefined4 *)(lVar12 + 0x8978) = 2;
LAB_019ca86c:
          *(uint *)(lVar12 + 0x1e4) = *(uint *)(lVar12 + 0x1e4) | 0x10;
          return 0;
        }
        goto LAB_019ca87c;
      }
      if (sVar5 == param_4) {
        return 0;
      }
      pcVar8 = "Failed writing header";
LAB_019ca8a4:
      FUN_019ca0fc(lVar12,pcVar8);
    }
    else {
      if (((((*(byte *)(param_1[100] + 0x78) & 0xc) != 0) && ((char)param_1[0xbd] == 'A')) &&
          (param_3 != (char *)0x0)) && (param_4 != 0)) {
        pcVar8 = (char *)(lVar12 + 0x8ad2);
        if (*pcVar8 != '\0') {
          if (*param_3 == '\n') {
            param_4 = param_4 - 1;
            memmove(param_3,param_3 + 1,param_4);
            *(long *)(lVar12 + 0x8ad8) = *(long *)(lVar12 + 0x8ad8) + 1;
          }
          *pcVar8 = '\0';
        }
        psVar3 = memchr(param_3,0xd,param_4);
        if (psVar3 != (short *)0x0) {
          psVar1 = (short *)(param_3 + param_4);
          psVar11 = psVar3;
          if (psVar3 < (short *)((long)psVar1 + -1)) {
            do {
              if (*psVar11 == 0xa0d) {
                psVar11 = (short *)((long)psVar11 + 1);
                *(char *)psVar3 = *(char *)psVar11;
                *(long *)(lVar12 + 0x8ad8) = *(long *)(lVar12 + 0x8ad8) + 1;
              }
              else if ((char)*psVar11 == '\r') {
                *(char *)psVar3 = '\n';
              }
              else {
                *(char *)psVar3 = (char)*psVar11;
              }
              psVar11 = (short *)((long)psVar11 + 1);
              psVar3 = (short *)((long)psVar3 + 1);
            } while (psVar11 < (short *)((long)psVar1 + -1));
          }
          if (psVar11 < psVar1) {
            if ((char)*psVar11 == '\r') {
              *(char *)psVar3 = '\n';
              *pcVar8 = '\x01';
            }
            else {
              *(char *)psVar3 = (char)*psVar11;
            }
            psVar3 = (short *)((long)psVar3 + 1);
          }
          if (psVar3 < psVar1) {
            *(char *)psVar3 = '\0';
          }
          param_4 = (long)psVar3 - (long)param_3;
        }
      }
      if (param_4 == 0) goto LAB_019ca7e8;
      sVar5 = (**(code **)(lVar12 + 0x2b0))(param_3,1,param_4,*(undefined8 *)(lVar12 + 0x240));
      if (sVar5 == 0x10000001) {
        if ((*(byte *)(param_1[100] + 0x7c) >> 4 & 1) == 0) {
          pvVar6 = (void *)(*(code *)PTR_malloc_02bf74a8)(param_4);
          if (pvVar6 != (void *)0x0) {
            memcpy(pvVar6,param_3,param_4);
            *(void **)(lVar12 + 0x8968) = pvVar6;
            *(size_t *)(lVar12 + 0x8970) = param_4;
            *(uint *)(lVar12 + 0x8978) = param_2;
            goto LAB_019ca86c;
          }
          goto LAB_019ca87c;
        }
        pcVar8 = "Write callback asked for PAUSE when not supported!";
        goto LAB_019ca8a4;
      }
      if (sVar5 == param_4) goto LAB_019ca7e8;
      FUN_019ca0fc(lVar12,"Failed writing body (%zu != %zu)",sVar5,param_4);
    }
    uVar7 = 0x17;
  }
  else {
    if (*(uint *)(lVar12 + 0x8978) != param_2) {
      return 0x38;
    }
    plVar2 = (long *)(lVar12 + 0x8970);
    lVar10 = *plVar2;
    lVar4 = (*(code *)PTR_realloc_02bf74b8)(*(long *)(lVar12 + 0x8968),lVar10 + param_4);
    if (lVar4 != 0) {
      memcpy((void *)(lVar4 + *plVar2),param_3,param_4);
      *(long *)(lVar12 + 0x8968) = lVar4;
      *plVar2 = lVar10 + param_4;
      return 0;
    }
LAB_019ca87c:
    uVar7 = 0x1b;
  }
  return uVar7;
}




undefined8 FUN_019ca8e4(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined8 uVar2;
  int *piVar3;
  
  sVar1 = recv(param_1,param_2,param_3,0);
  if (sVar1 == -1) {
    piVar3 = (int *)__errno();
    uVar2 = 0x51;
    if ((*piVar3 != 4) && (*piVar3 != 0xb)) {
      uVar2 = 0x38;
    }
  }
  else {
    uVar2 = 0;
    *param_4 = sVar1;
  }
  return uVar2;
}




undefined4 FUN_019ca940(long *param_1,int param_2,void *param_3,ulong param_4,size_t *param_5)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined4 local_44;
  
  local_44 = 0x38;
  uVar3 = FUN_019be9cc(*(undefined8 *)(*param_1 + 0x60));
  iVar2 = *(int *)((long)param_1 + 0x1d4);
  *param_5 = 0;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0x4000;
    if (*(ulong *)(*param_1 + 0x4c8) != 0) {
      uVar1 = *(ulong *)(*param_1 + 0x4c8);
    }
    pvVar4 = param_3;
    if ((long)uVar1 <= (long)param_4) {
      param_4 = uVar1;
    }
  }
  else {
    sVar5 = param_1[0x77] - param_1[0x76];
    if (param_4 <= sVar5) {
      sVar5 = param_4;
    }
    if (sVar5 != 0) {
      memcpy(param_3,(void *)(param_1[0x75] + param_1[0x76]),sVar5);
      *(undefined1 *)((long)param_1 + 0x2f5) = 0;
      param_1[0x76] = param_1[0x76] + sVar5;
      *param_5 = sVar5;
      return 0;
    }
    pvVar4 = (void *)param_1[0x75];
    if (0x3fff < param_4) {
      param_4 = 0x4000;
    }
  }
  sVar5 = (*(code *)param_1[(ulong)(iVar2 == param_2) + 0x3d])
                    (param_1,iVar2 == param_2,pvVar4,param_4,&local_44);
  if (-1 < (long)sVar5) {
    if ((uVar3 & 1) != 0) {
      memcpy(param_3,(void *)param_1[0x75],sVar5);
      param_1[0x77] = sVar5;
      param_1[0x76] = sVar5;
    }
    local_44 = 0;
    *param_5 = *param_5 + sVar5;
  }
  return local_44;
}




undefined8 FUN_019caa84(long param_1,ulong param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 0x2e8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019caac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x2e8))
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x228));
    return uVar1;
  }
  if ((uint)param_2 < 3) {
    fwrite(&UNK_01e226f0 + (param_2 & 0xffffffff) * 2 + (param_2 & 0xffffffff),2,1,
           *(FILE **)(param_1 + 0x220));
    fwrite(param_3,param_4,1,*(FILE **)(param_1 + 0x220));
  }
  return 0;
}




void FUN_019cab20(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x568 + lVar1) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x568 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x170);
  if (*(char *)(param_1 + 0x780) != '\0') {
    if (*(long *)(param_1 + 0x778) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x778) = 0;
    }
    *(undefined1 *)(param_1 + 0x780) = 0;
  }
  *(undefined8 *)(param_1 + 0x778) = 0;
  if (*(char *)(param_1 + 0x770) != '\0') {
    if (*(long *)(param_1 + 0x768) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x768) = 0;
    }
    *(undefined1 *)(param_1 + 0x770) = 0;
  }
  *(undefined8 *)(param_1 + 0x768) = 0;
  return;
}




undefined8 FUN_019cabbc(long param_1,long param_2)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  
  memcpy((void *)(param_1 + 0x220),(void *)(param_2 + 0x220),0x548);
  __s = (void *)(param_1 + 0x568);
  memset(__s,0,0x170);
  uVar2 = 0;
  do {
    lVar1 = *(long *)(param_2 + 0x568 + uVar2 * 8);
    if (*(long *)((long)__s + uVar2 * 8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)((long)__s + uVar2 * 8) = 0;
    }
    if (lVar1 != 0) {
      lVar1 = (*(code *)PTR_strdup_02bf74c0)(lVar1);
      if (lVar1 == 0) {
        return 0x1b;
      }
      *(long *)((long)__s + uVar2 * 8) = lVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2e);
  return 0;
}




undefined8 FUN_019cac70(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    FUN_019be274(param_1,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_019be4c8(*(long *)(param_1 + 0x60),param_1);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_019c003c();
    }
    lVar1 = *(long *)(param_1 + 0x8ab8);
    if (lVar1 != 0) {
      FUN_019da520(lVar1,0);
      *(long *)(param_1 + 0x8ab8) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c50) = 0;
    if (*(char *)(param_1 + 0x8af2) != '\0') {
      (*(code *)PTR_free_02bf74b0)(*(undefined8 *)(param_1 + 0x8af8));
    }
    if (*(long *)(param_1 + 0x8ae0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(long *)(param_1 + 0x8ae0) = 0;
    }
    *(undefined8 *)(param_1 + 0x8ae8) = 0;
    if (*(long *)(param_1 + 0x218) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x218) = 0;
    }
    if (*(long *)(param_1 + 0x1f8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
    FUN_019c2fd4(param_1);
    if (*(long *)(param_1 + 0x8950) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(long *)(param_1 + 0x8950) = 0;
    }
    if (*(long *)(param_1 + 0x8980) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(long *)(param_1 + 0x8980) = 0;
    }
    FUN_019c3158(param_1);
    if (*(long *)(param_1 + 0x1f8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
    if (*(char *)(param_1 + 0x780) != '\0') {
      if (*(long *)(param_1 + 0x778) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x778) = 0;
      }
      *(undefined1 *)(param_1 + 0x780) = 0;
    }
    *(undefined8 *)(param_1 + 0x778) = 0;
    if (*(char *)(param_1 + 0x770) != '\0') {
      if (*(long *)(param_1 + 0x768) != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *(undefined8 *)(param_1 + 0x768) = 0;
      }
      *(undefined1 *)(param_1 + 0x770) = 0;
    }
    *(undefined8 *)(param_1 + 0x768) = 0;
    if (*(long *)(param_1 + 0x928) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x928) = 0;
    }
    FUN_019c5ed0(param_1,1);
    FUN_019dbf24(param_1);
    if (*(long *)(param_1 + 0x8bb0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(long *)(param_1 + 0x8bb0) = 0;
    }
    if (*(long *)(param_1 + 0x8bb8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(long *)(param_1 + 0x8bb8) = 0;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_019c1238(param_1,1,2);
      *(int *)(*(long *)(param_1 + 0x70) + 4) = *(int *)(*(long *)(param_1 + 0x70) + 4) + -1;
      FUN_019c1288(param_1,1);
    }
    FUN_019cab20(param_1);
    (*(code *)PTR_free_02bf74b0)(param_1);
  }
  return 0;
}




void FUN_019caef8(long param_1)

{
  if (*(long *)(param_1 + 0x218) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  return;
}




undefined8 FUN_019caf4c(undefined8 *param_1)

{
  param_1[0x12] = fwrite;
  *param_1 = glClearDepthf;
  param_1[0x15] = fread;
  param_1[0x16] = 0;
  param_1[0xf] = 0;
  param_1[5] = &__sF;
  param_1[4] = isgraph;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[10] = 1;
  param_1[9] = 1;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x54] = 0x3c;
  param_1[0x4c] = 5;
  param_1[3] = 0x438;
  param_1[0x2c] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)((long)param_1 + 0x4dc) = 1;
  *(undefined2 *)((long)param_1 + 0x304) = 0x101;
  *(undefined1 *)((long)param_1 + 0x306) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 1;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((long)param_1 + 0x2ef) = 1;
  *(undefined2 *)(param_1 + 0x44) = 0x101;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[100] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  param_1[0x98] = 0xffffffffffffffff;
  param_1[0x99] = 0xfffffffffffffbef;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa5] = 0x3c;
  param_1[0xa4] = 0x3c;
  *(undefined1 *)(param_1 + 0xa7) = 1;
  *(undefined1 *)((long)param_1 + 0x539) = 1;
  param_1[0x67] = 0x1ed;
  param_1[0x66] = 0x1a4;
  param_1[0xa8] = 1000;
  return 0;
}

