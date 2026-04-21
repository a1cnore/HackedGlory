// functions/00ccf — 25 functions
#include "libGameKindred.h"




void FUN_00ccf0e4(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar1 = (undefined8 *)
           FUN_00ccef78("*KindredPlayerAvatarsManifest*",
                        "build://Progression/KindredPlayerAvatarsManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar5 = (byte *)*puVar2;
      uVar4 = 0x811c9dc5;
      if (*pbVar5 != 0) {
        uVar4 = 0x811c9dc5;
        uVar3 = (uint)*pbVar5;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if (*param_1 == uVar4) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00ccf174(void)

{
  FUN_00ccf188("*KindredHeroMasteryManifest*","build://Progression/KindredHeroMasteryManifest.def");
  return;
}




void FUN_00ccf188(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




int FUN_00ccf1dc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined8 *)
           FUN_00ccf188("*KindredHeroMasteryManifest*",
                        "build://Progression/KindredHeroMasteryManifest.def");
  puVar3 = (undefined8 *)*puVar3;
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      puVar3 = puVar3 + 1;
      iVar1 = iVar2;
      if ((piVar4[1] <= param_1) && (iVar1 = *piVar4, *piVar4 <= iVar2)) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      piVar4 = (int *)*puVar3;
    } while (piVar4 != (int *)0x0);
  }
  return iVar2;
}




int FUN_00ccf248(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined8 *)
           FUN_00ccf188("*KindredHeroMasteryManifest*",
                        "build://Progression/KindredHeroMasteryManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  piVar2 = (int *)*puVar1;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    puVar1 = puVar1 + 1;
    if (*piVar2 == param_1) break;
    piVar2 = (int *)*puVar1;
  }
  return piVar2[1];
}




undefined8 FUN_00ccf2a8(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined8 *)
           FUN_00ccf188("*KindredHeroMasteryManifest*",
                        "build://Progression/KindredHeroMasteryManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  piVar2 = (int *)*puVar1;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    puVar1 = puVar1 + 1;
    if (*piVar2 == param_1) break;
    piVar2 = (int *)*puVar1;
  }
  return 1;
}




void FUN_00ccf308(void)

{
  FUN_00ccf31c("*KindredAnnouncerVOPacksManifest*",
               "build://Progression/KindredAnnouncerVOPacksManifest.def");
  return;
}




void FUN_00ccf31c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




undefined8 FUN_00ccf370(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)
           FUN_00ccf31c("*KindredAnnouncerVOPacksManifest*",
                        "build://Progression/KindredAnnouncerVOPacksManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00ccf444;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00ccf450;
      }
      else {
LAB_00ccf444:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccf450:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)*puVar5;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00ccf488(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar1 = (undefined8 *)
           FUN_00ccf31c("*KindredAnnouncerVOPacksManifest*",
                        "build://Progression/KindredAnnouncerVOPacksManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar5 = (byte *)*puVar2;
      uVar4 = 0x811c9dc5;
      if (*pbVar5 != 0) {
        uVar4 = 0x811c9dc5;
        uVar3 = (uint)*pbVar5;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if (*param_1 == uVar4) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




undefined8 FUN_00ccf518(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *__s2;
  byte *pbVar6;
  byte *__s1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = FUN_00cce948("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar7 = *(undefined8 **)(lVar5 + 0x10);
  puVar8 = (undefined8 *)*puVar7;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar6 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar6 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar5 = -(ulong)(bVar3 >> 1);
            pbVar6 = pbVar1;
            do {
              if (*pbVar6 != *__s2) goto LAB_00ccf5ec;
              pbVar6 = pbVar6 + 1;
              lVar5 = lVar5 + 1;
              __s2 = __s2 + 1;
            } while (lVar5 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar6,__s2,__n), iVar4 != 0)) goto LAB_00ccf5f8;
      }
      else {
LAB_00ccf5ec:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccf5f8:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar7;
        }
      }
      puVar7 = puVar7 + 1;
      puVar8 = (undefined8 *)*puVar7;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00ccf630(uint *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  lVar1 = FUN_00cce948("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar3 = *(undefined8 **)(lVar1 + 0x10);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar6 = (byte *)*puVar2;
      uVar5 = 0x811c9dc5;
      if (*pbVar6 != 0) {
        uVar5 = 0x811c9dc5;
        uVar4 = (uint)*pbVar6;
        do {
          pbVar6 = pbVar6 + 1;
          uVar5 = (uVar5 ^ uVar4) * 0x1000193;
          uVar4 = (uint)*pbVar6;
        } while (*pbVar6 != 0);
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar3 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar3;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




undefined8 FUN_00ccf6c0(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)
           FUN_00cce948("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00ccf794;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00ccf7a0;
      }
      else {
LAB_00ccf794:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccf7a0:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)*puVar5;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00ccf7d8(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar1 = (undefined8 *)
           FUN_00cce948("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar5 = (byte *)*puVar2;
      uVar4 = 0x811c9dc5;
      if (*pbVar5 != 0) {
        uVar4 = 0x811c9dc5;
        uVar3 = (uint)*pbVar5;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if (*param_1 == uVar4) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00ccf868(void)

{
  FUN_00ccf87c("*KindredHatManifest*","build://Progression/KindredHatManifest.def");
  return;
}




void FUN_00ccf87c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




undefined8 FUN_00ccf8d0(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  undefined8 *puVar8;
  
  puVar5 = (undefined8 *)
           FUN_00ccf87c("*KindredHatManifest*","build://Progression/KindredHatManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar8 = (undefined8 *)*puVar5;
  if (puVar8 != (undefined8 *)0x0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00ccf9a4;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00ccf9b0;
      }
      else {
LAB_00ccf9a4:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00ccf9b0:
        iVar4 = strcmp((char *)__s1,(char *)*puVar8);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
      puVar5 = puVar5 + 1;
      puVar8 = (undefined8 *)*puVar5;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00ccf9e8(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  puVar1 = (undefined8 *)
           FUN_00ccf87c("*KindredHatManifest*","build://Progression/KindredHatManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pbVar5 = (byte *)*puVar2;
      uVar4 = 0x811c9dc5;
      if (*pbVar5 != 0) {
        uVar4 = 0x811c9dc5;
        uVar3 = (uint)*pbVar5;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = (uVar4 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar5;
        } while (*pbVar5 != 0);
      }
      if (*param_1 == uVar4) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00ccfa78(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00ccfb70(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0xf8;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
      FUN_008fcdb8(lVar4 + 0x60,lVar3 + 0x60);
      FUN_008fcdb8(lVar4 + 0x78,lVar3 + 0x78);
      FUN_00ccfcb8(lVar4 + 0x90,lVar3 + 0x90);
      FUN_00ccfcb8(lVar4 + 0xa0,lVar3 + 0xa0);
      FUN_00951160(lVar4 + 0xb0,lVar3 + 0xb0);
      *(undefined1 *)(lVar4 + 0xf0) = *(undefined1 *)(lVar3 + 0xf0);
      uVar6 = *(undefined8 *)(lVar3 + 0xe0);
      *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar3 + 0xe8);
      *(undefined8 *)(lVar4 + 0xe0) = uVar6;
      uVar6 = *(undefined8 *)(lVar3 + 0xd0);
      *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar3 + 0xd8);
      *(undefined8 *)(lVar4 + 0xd0) = uVar6;
      puVar1 = (undefined8 *)(lVar3 + 200);
      uVar6 = *(undefined8 *)(lVar3 + 0xc0);
      lVar3 = lVar3 + 0xf8;
      *(undefined8 *)(lVar4 + 200) = *puVar1;
      *(undefined8 *)(lVar4 + 0xc0) = uVar6;
      lVar4 = lVar4 + 0xf8;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00ccfb70(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0xf8);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0xf8);
      pvVar5 = pvVar2;
      do {
        FUN_008fcdb8(pvVar5,pvVar3);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar5 + 0x48,(long)pvVar3 + 0x48);
        FUN_008fcdb8((long)pvVar5 + 0x60,(long)pvVar3 + 0x60);
        FUN_008fcdb8((long)pvVar5 + 0x78,(long)pvVar3 + 0x78);
        FUN_00ccfcb8((long)pvVar5 + 0x90,(long)pvVar3 + 0x90);
        FUN_00ccfcb8((long)pvVar5 + 0xa0,(long)pvVar3 + 0xa0);
        FUN_00951160((long)pvVar5 + 0xb0,(long)pvVar3 + 0xb0);
        *(undefined1 *)((long)pvVar5 + 0xf0) = *(undefined1 *)((long)pvVar3 + 0xf0);
        uVar7 = *(undefined8 *)((long)pvVar3 + 0xe0);
        *(undefined8 *)((long)pvVar5 + 0xe8) = *(undefined8 *)((long)pvVar3 + 0xe8);
        *(undefined8 *)((long)pvVar5 + 0xe0) = uVar7;
        uVar7 = *(undefined8 *)((long)pvVar3 + 0xd0);
        *(undefined8 *)((long)pvVar5 + 0xd8) = *(undefined8 *)((long)pvVar3 + 0xd8);
        *(undefined8 *)((long)pvVar5 + 0xd0) = uVar7;
        puVar1 = (undefined8 *)((long)pvVar3 + 200);
        uVar7 = *(undefined8 *)((long)pvVar3 + 0xc0);
        pvVar3 = (void *)((long)pvVar3 + 0xf8);
        *(undefined8 *)((long)pvVar5 + 200) = *puVar1;
        *(undefined8 *)((long)pvVar5 + 0xc0) = uVar7;
        pvVar5 = (void *)((long)pvVar5 + 0xf8);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0xf8;
        do {
          FUN_00ccb680(pvVar3);
          lVar4 = lVar4 + -0xf8;
          pvVar3 = (void *)((long)pvVar3 + 0xf8);
        } while (lVar4 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00ccfcb8(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00ccfd40(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x28;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      *(undefined2 *)(lVar4 + 0x20) = *(undefined2 *)(lVar3 + 0x20);
      puVar1 = (undefined8 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x28;
      *(undefined8 *)(lVar4 + 0x18) = *puVar1;
      lVar4 = lVar4 + 0x28;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00ccfd40(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x28);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        *(undefined2 *)((long)pvVar5 + 0x20) = *(undefined2 *)((long)pvVar2 + 0x20);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x28);
        *(undefined8 *)((long)pvVar5 + 0x18) = *puVar3;
        pvVar5 = (void *)((long)pvVar5 + 0x28);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x10);
        do {
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          lVar4 = lVar4 + -0x28;
          puVar3 = puVar3 + 5;
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




void FUN_00ccfe24(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00ccfea4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00ccff24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
LAB_00ccffdc:
  puVar11 = param_2 + -1;
  puVar12 = param_1;
LAB_00ccfffc:
  param_1 = puVar12;
  lVar7 = (long)param_2 - (long)param_1;
  uVar6 = lVar7 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    uVar6 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar6 & 1) != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
      return;
    }
    return;
  case 3:
    FUN_00cd0340(param_1,param_1 + 1,puVar11,param_3);
    return;
  case 4:
    FUN_00cd0438(param_1,param_1 + 1,param_1 + 2,puVar11,param_3);
    return;
  case 5:
    FUN_00cd0508(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11,param_3);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_00cd0610(param_1,param_2,param_3);
    return;
  }
  uVar4 = uVar6;
  if ((long)uVar6 < 0) {
    uVar4 = uVar6 + 1;
  }
  puVar12 = (undefined8 *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar3 = FUN_00cd0340(param_1,puVar12,puVar11,param_3);
  }
  else {
    uVar4 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar4 = uVar6;
    }
    lVar7 = (uVar4 & 0x7ffffffffffffffc) * 2;
    iVar3 = FUN_00cd0508(param_1,(long)param_1 + lVar7,puVar12,(long)puVar12 + lVar7,puVar11,param_3
                        );
  }
  uVar6 = (*(code *)*param_3)(*param_1,*puVar12);
  puVar13 = puVar11;
  puVar10 = param_2 + -2;
  if ((uVar6 & 1) == 0) {
LAB_00cd00a0:
    puVar13 = puVar10;
    if (param_1 != puVar13) goto code_r0x00cd00a8;
    puVar12 = param_1 + 1;
    uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
    if ((uVar6 & 1) == 0) {
      if (puVar12 == puVar11) {
        return;
      }
      puVar12 = param_1 + 2;
      while (uVar6 = (*(code *)*param_3)(*param_1,puVar12[-1]), (uVar6 & 1) == 0) {
        puVar12 = puVar12 + 1;
        if (param_2 == puVar12) {
          return;
        }
      }
      uVar8 = puVar12[-1];
      puVar12[-1] = *puVar11;
      *puVar11 = uVar8;
    }
    if (puVar12 == puVar11) {
      return;
    }
    while( true ) {
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar13);
      } while ((uVar6 & 1) == 0);
      puVar12 = puVar12 + 2;
      do {
        puVar11 = puVar11 + -1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
      } while ((uVar6 & 1) != 0);
      if (puVar11 <= puVar13) break;
      uVar8 = *puVar13;
      *puVar13 = *puVar11;
      *puVar11 = uVar8;
    }
    uVar5 = 4;
    param_1 = puVar13;
    goto LAB_00ccffa0;
  }
  goto LAB_00cd00d0;
code_r0x00cd00a8:
  uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
  puVar10 = puVar13 + -1;
  if ((uVar6 & 1) != 0) goto code_r0x00cd00bc;
  goto LAB_00cd00a0;
code_r0x00cd00bc:
  uVar8 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar13;
  *puVar13 = uVar8;
LAB_00cd00d0:
  puVar10 = param_1 + 1;
  puVar9 = puVar10;
  puVar1 = puVar12;
  if (puVar10 < puVar13) {
    while( true ) {
      puVar12 = puVar1;
      puVar10 = puVar9 + -1;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + 1;
        uVar6 = (*(code *)*param_3)(*puVar10,*puVar12);
      } while ((uVar6 & 1) != 0);
      puVar9 = puVar9 + 2;
      do {
        puVar13 = puVar13 + -1;
        uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
      } while ((uVar6 & 1) == 0);
      if (puVar13 < puVar10) break;
      uVar8 = *puVar10;
      iVar3 = iVar3 + 1;
      *puVar10 = *puVar13;
      *puVar13 = uVar8;
      puVar1 = puVar13;
      if (puVar12 != puVar10) {
        puVar1 = puVar12;
      }
    }
  }
  if ((puVar10 != puVar12) && (uVar6 = (*(code *)*param_3)(*puVar12,*puVar10), (uVar6 & 1) != 0)) {
    uVar8 = *puVar10;
    iVar3 = iVar3 + 1;
    *puVar10 = *puVar12;
    *puVar12 = uVar8;
  }
  if (iVar3 == 0) {
    uVar6 = FUN_00cd06e0(param_1,puVar10,param_3);
    uVar4 = FUN_00cd06e0(puVar10 + 1,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00ccffc4;
    puVar12 = puVar10 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00ccfffc;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_00ccff24(puVar10 + 1,param_2,param_3);
    param_2 = puVar10;
    goto LAB_00ccffdc;
  }
  FUN_00ccff24(param_1,puVar10,param_3);
  puVar12 = puVar10 + 1;
  goto LAB_00ccfffc;
LAB_00ccffc4:
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    param_2 = puVar10;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 2;
  }
LAB_00ccffa0:
  if (4 < uVar5) {
    return;
  }
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00ccffdc;
}

