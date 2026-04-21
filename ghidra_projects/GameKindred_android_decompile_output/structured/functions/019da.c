// functions/019da — 21 functions
#include "libGameKindred.h"




char * FUN_019da360(int param_1)

{
  if (param_1 - 1U < 6) {
    return (&PTR_s_Too_long_hexadecimal_number_02bb0310)[(int)(param_1 - 1U)];
  }
  return "OK";
}




void FUN_019da388(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}




undefined8 FUN_019da3c4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)(0x18);
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_3;
    lVar4 = param_1[3];
    if (lVar4 == 0) {
      plVar5 = param_1 + 1;
      *param_1 = (long)puVar2;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    else {
      plVar5 = (long *)(param_2 + 0x10);
      plVar1 = plVar5;
      if (param_2 == 0) {
        plVar1 = param_1;
      }
      lVar6 = *plVar1;
      puVar2[1] = param_2;
      puVar2[2] = lVar6;
      if (param_2 == 0) {
        *(undefined8 **)(*param_1 + 8) = puVar2;
        plVar5 = param_1;
      }
      else {
        plVar1 = param_1;
        if ((long *)*plVar5 != (long *)0x0) {
          plVar1 = (long *)*plVar5;
        }
        plVar1[1] = (long)puVar2;
      }
    }
    *plVar5 = (long)puVar2;
    uVar3 = 1;
    param_1[3] = lVar4 + 1;
  }
  return uVar3;
}




undefined8 FUN_019da474(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    lVar1 = param_2[2];
    if ((undefined8 *)*param_1 == param_2) {
      *param_1 = lVar1;
      if (lVar1 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(lVar1 + 8) = 0;
      }
    }
    else {
      lVar2 = param_2[1];
      *(long *)(lVar2 + 0x10) = lVar1;
      if (param_2[2] == 0) {
        param_1[1] = lVar2;
      }
      else {
        *(long *)(param_2[2] + 8) = lVar2;
      }
    }
    (*(code *)param_1[2])(param_3,*param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    (*(code *)PTR_free_02bf74b0)(param_2);
    param_1[3] = param_1[3] + -1;
  }
  return 1;
}




void FUN_019da520(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    while (lVar1 != 0) {
      FUN_019da474(param_1,*(undefined8 *)(param_1 + 8),param_2);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    (*(code *)PTR_free_02bf74b0)(param_1);
    return;
  }
  return;
}




undefined8 FUN_019da578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_019da580(long *param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((param_2 != 0) && (lVar2 = param_1[3], lVar2 != 0)) {
    lVar3 = *(long *)(param_2 + 0x10);
    if (*param_1 == param_2) {
      *param_1 = lVar3;
      if (lVar3 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
    }
    else {
      lVar5 = *(long *)(param_2 + 8);
      *(long *)(lVar5 + 0x10) = lVar3;
      if (*(long *)(param_2 + 0x10) == 0) {
        param_1[1] = lVar5;
      }
      else {
        *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar5;
      }
    }
    param_1[3] = lVar2 + -1;
    lVar2 = param_3[3];
    if (lVar2 == 0) {
      plVar4 = param_3 + 1;
      *param_3 = param_2;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    else {
      plVar4 = (long *)(param_4 + 0x10);
      lVar3 = *plVar4;
      *(long *)(param_2 + 8) = param_4;
      *(long *)(param_2 + 0x10) = lVar3;
      plVar1 = param_3;
      if ((long *)*plVar4 != (long *)0x0) {
        plVar1 = (long *)*plVar4;
      }
      plVar1[1] = param_2;
    }
    *plVar4 = param_2;
    param_3[3] = lVar2 + 1;
    return 1;
  }
  return 0;
}




undefined8 FUN_019da630(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = 1;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    *(uint *)(param_1 + 4) = param_2;
    lVar2 = (*(code *)PTR_malloc_02bf74a8)
                      (-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
    *param_1 = lVar2;
    if (lVar2 == 0) {
LAB_019da748:
      uVar1 = 1;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      if (0 < (int)param_2) {
        lVar5 = 0;
        lVar2 = -2;
        do {
          uVar1 = FUN_019da388(FUN_019da764);
          *(undefined8 *)(*param_1 + lVar5) = uVar1;
          lVar3 = *param_1;
          if (*(long *)(lVar3 + lVar5) == 0) {
            iVar4 = (int)lVar2;
            if (iVar4 != -2) {
              FUN_019da520(*(undefined8 *)(lVar3 + lVar5 + -8),0);
              *(undefined8 *)(*param_1 + lVar5 + -8) = 0;
              while (iVar4 != -1) {
                FUN_019da520(*(undefined8 *)(*param_1 + lVar2 * 8),0);
                *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
                lVar2 = lVar2 + -1;
                iVar4 = (int)lVar2;
              }
              lVar3 = *param_1;
            }
            (*(code *)PTR_free_02bf74b0)(lVar3);
            *param_1 = 0;
            goto LAB_019da748;
          }
          lVar3 = lVar2 + 3;
          lVar2 = lVar2 + 1;
          lVar5 = lVar5 + 8;
        } while (lVar3 < (int)param_2);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}




void FUN_019da764(long param_1,long *param_2)

{
  if (param_2[1] != 0) {
    (*(code *)PTR_free_02bf74b0)(param_2[1]);
    param_2[1] = 0;
  }
  if (*param_2 != 0) {
    (**(code **)(param_1 + 0x18))();
    *param_2 = 0;
  }
  param_2[2] = 0;
  (*(code *)PTR_free_02bf74b0)(param_2);
  return;
}




long FUN_019da7cc(int param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    lVar2 = (*(code *)PTR_malloc_02bf74a8)(0x30);
    if ((lVar2 != 0) && (iVar1 = FUN_019da630(lVar2,param_1,param_2,param_3,param_4), iVar1 != 0)) {
      (*(code *)PTR_free_02bf74b0)(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}




undefined8 FUN_019da86c(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__dest;
  long *plVar5;
  long *plVar6;
  
  lVar3 = *param_1;
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar5 = *(long **)(lVar3 + lVar2 * 8);
  plVar6 = (long *)*plVar5;
  do {
    if (plVar6 == (long *)0x0) {
LAB_019da8f8:
      puVar4 = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)(0x18);
      if (puVar4 != (undefined8 *)0x0) {
        __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(param_3);
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,param_3);
          *puVar4 = param_4;
          puVar4[1] = __dest;
          puVar4[2] = param_3;
          iVar1 = FUN_019da3c4(plVar5,plVar5[1],puVar4);
          if (iVar1 != 0) {
            param_1[5] = param_1[5] + 1;
            return param_4;
          }
          (*(code *)PTR_free_02bf74b0)(puVar4[1]);
        }
        (*(code *)PTR_free_02bf74b0)(puVar4);
      }
      return 0;
    }
    lVar3 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar6 + 8),*(undefined8 *)(*plVar6 + 0x10),param_2,param_3)
    ;
    if (lVar3 != 0) {
      FUN_019da474(plVar5,plVar6,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_019da8f8;
    }
    plVar6 = (long *)plVar6[2];
  } while( true );
}




undefined8 FUN_019da9b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *param_1;
  lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar3 = *(long **)(lVar2 + lVar1 * 8);
  plVar4 = (long *)*plVar3;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    lVar2 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar4 + 8),*(undefined8 *)(*plVar4 + 0x10),param_2,param_3)
    ;
    if (lVar2 != 0) break;
    plVar4 = (long *)plVar4[2];
  }
  FUN_019da474(plVar3,plVar4,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}




undefined8 FUN_019daa50(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
    for (puVar3 = (undefined8 *)**(long **)(lVar2 + lVar1 * 8); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[2]) {
      puVar4 = (undefined8 *)*puVar3;
      lVar2 = (*(code *)param_1[2])(puVar4[1],puVar4[2],param_2,param_3);
      if (lVar2 != 0) {
        return *puVar4;
      }
    }
  }
  return 0;
}




void FUN_019daad8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (0 < (int)param_1[4]) {
    lVar2 = 0;
    do {
      FUN_019da520(*(undefined8 *)(lVar1 + lVar2 * 8),param_1);
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar1 = *param_1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[4]);
  }
  if (lVar1 != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *param_1 = 0;
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




void FUN_019dab50(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (int)param_1[4];
    if (0 < iVar1) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
        puVar3 = (undefined8 *)*puVar2;
        if (puVar3 != (undefined8 *)0x0) {
          do {
            puVar5 = (undefined8 *)puVar3[2];
            iVar1 = (*param_3)(param_2,*(undefined8 *)*puVar3);
            if (iVar1 != 0) {
              FUN_019da474(puVar2,puVar3,param_1);
              param_1[5] = param_1[5] + -1;
            }
            puVar3 = puVar5;
          } while (puVar5 != (undefined8 *)0x0);
          iVar1 = (int)param_1[4];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar1);
    }
  }
  return;
}




void FUN_019dabfc(long param_1)

{
  if (param_1 != 0) {
    FUN_019daad8();
    (*(code *)PTR_free_02bf74b0)(param_1);
    return;
  }
  return;
}




void FUN_019dacb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  return;
}




undefined8 FUN_019dacc4(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    puVar2 = *(undefined8 **)(param_1[2] + 0x10);
    param_1[2] = (long)puVar2;
    puVar6 = puVar2;
    if (puVar2 != (undefined8 *)0x0) goto LAB_019dad10;
  }
  iVar5 = (int)param_1[1];
  lVar4 = (long)iVar5;
  iVar1 = (int)((long *)*param_1)[4];
  puVar6 = puVar2;
  if (iVar5 < iVar1) {
    do {
      iVar5 = iVar5 + 1;
      puVar6 = (undefined8 *)**(undefined8 **)(*(long *)*param_1 + lVar4 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        param_1[2] = (long)puVar6;
        *(int *)(param_1 + 1) = iVar5;
        goto LAB_019dad28;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar2;
    } while (lVar4 < iVar1);
  }
LAB_019dad10:
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    uVar3 = 0;
  }
  else {
LAB_019dad28:
    uVar3 = *puVar6;
  }
  return uVar3;
}




undefined8 FUN_019dad34(undefined8 param_1,long param_2,undefined4 param_3)

{
  void *__s;
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0xd4) == 0) {
    __s = (void *)(param_2 + 0xd8);
    memset(__s,0,0x70);
    *(undefined1 **)(param_2 + 0x118) = &LAB_019dade8;
    *(undefined1 **)(param_2 + 0x120) = &LAB_019dae00;
    iVar1 = FUN_00f2762c(__s,"1.2.7",0x70);
    if (iVar1 != 0) {
      FUN_019dae14(param_1,__s);
      return 0x3d;
    }
    *(undefined4 *)(param_2 + 0xd4) = 1;
  }
  *(undefined4 *)(param_2 + 0xe0) = param_3;
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
  uVar2 = FUN_019dae38(param_1,param_2);
  return uVar2;
}




void FUN_019dae14(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x30) != 0) {
    FUN_019ca0fc(*param_1,"Error while processing content unencoding: %s");
    return;
  }
  FUN_019ca0fc(*param_1,
               "Error while processing content unencoding: Unknown failure within decompression software."
              );
  return;
}




int FUN_019dae38(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_2 + 0xd8);
  uVar7 = *puVar6;
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  lVar5 = (*(code *)PTR_malloc_02bf74a8)(0x4000);
  if (lVar5 == 0) {
    FUN_00f28f48(puVar6);
    *(undefined4 *)(param_2 + 0xd4) = 0;
    iVar4 = 0x1b;
  }
  else {
    bVar2 = true;
LAB_019daee0:
    do {
      *(long *)(param_2 + 0xf0) = lVar5;
      *(undefined4 *)(param_2 + 0xf8) = 0x4000;
      uVar3 = FUN_00f276ac(puVar6,2);
      if (1 < uVar3) {
        if ((bVar2) && (uVar3 == 0xfffffffd)) {
          FUN_00f28f48(puVar6);
          iVar4 = FUN_00f27554(puVar6,0xfffffff1,"1.2.7",0x70);
          if (iVar4 == 0) {
            bVar2 = false;
            *(undefined8 *)(param_2 + 0xd8) = uVar7;
            *(undefined4 *)(param_2 + 0xe0) = uVar1;
            goto LAB_019daee0;
          }
        }
        (*(code *)PTR_free_02bf74b0)(lVar5);
LAB_019daf8c:
        FUN_019dae14(param_1,puVar6);
        FUN_00f28f48(puVar6);
        iVar4 = 0x3d;
LAB_019dafa4:
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return iVar4;
      }
      iVar4 = 0x4000 - *(int *)(param_2 + 0xf8);
      if (((iVar4 != 0) && (*(char *)(param_2 + 0x171) == '\0')) &&
         (iVar4 = FUN_019ca574(param_1,1,lVar5,iVar4), iVar4 != 0)) {
        (*(code *)PTR_free_02bf74b0)(lVar5);
        FUN_00f28f48(puVar6);
        goto LAB_019dafa4;
      }
      if (uVar3 == 1) {
        (*(code *)PTR_free_02bf74b0)(lVar5);
        iVar4 = FUN_00f28f48(puVar6);
        if (iVar4 == 0) {
          FUN_00f28f48(puVar6);
          iVar4 = 0;
          goto LAB_019dafa4;
        }
        goto LAB_019daf8c;
      }
      bVar2 = false;
    } while (*(int *)(param_2 + 0xe0) != 0);
    (*(code *)PTR_free_02bf74b0)(lVar5);
    iVar4 = 0;
  }
  return iVar4;
}

