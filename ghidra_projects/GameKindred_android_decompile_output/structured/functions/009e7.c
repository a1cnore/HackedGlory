// functions/009e7 — 20 functions
#include "libGameKindred.h"




undefined4 FUN_009e7070(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_009e7eb0(param_1 + 0x28);
  if (param_1 + 0x30 == lVar4) {
    uVar3 = 0;
  }
  else {
    local_68 = param_2;
    lVar4 = FUN_009e7c74(param_1 + 0x28,param_2,&DAT_01b99bb6,&local_68,auStack_50);
    local_60 = 0;
    uStack_58 = 0;
    plVar7 = *(long **)(lVar4 + 0x38);
    local_68 = &local_60;
    while (plVar7 != (long *)(lVar4 + 0x40)) {
      FUN_009e7700(&local_68,&local_60,plVar7 + 4,plVar7 + 4);
      plVar5 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar5 = plVar7 + 2;
        bVar2 = *(long **)*plVar5 != plVar7;
        plVar7 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar7 = (long *)*plVar5;
          } while (*plVar7 != lVar6);
        }
      }
      else {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    FUN_009e66b8(&local_68,param_3);
    FUN_00ccf1dc();
    uVar3 = FUN_00ccf248();
    FUN_009e74d8(&local_68,local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}




void FUN_009e71b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  FUN_00948cd8();
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_027c4d40;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = puVar1 + 6;
  DAT_0312fd00 = puVar1;
  return;
}




void FUN_009e720c(void)

{
  if (DAT_0312fd00 != (long *)0x0) {
    (**(code **)(*DAT_0312fd00 + 8))();
  }
  DAT_0312fd00 = (long *)0x0;
  return;
}




undefined8 FUN_009e7240(void)

{
  return DAT_0312fd00;
}




void FUN_009e724c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_009e724c(param_1,*param_2);
    FUN_009e724c(param_1,param_2[1]);
    FUN_009e74d8(param_2 + 7,param_2[8]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_009e72b4(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[2] != 0) {
    lVar5 = *param_1;
    plVar6 = param_1 + 1;
    *param_1 = (long)plVar6;
    *(undefined8 *)(*plVar6 + 0x10) = 0;
    param_1[2] = 0;
    *plVar6 = 0;
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
joined_r0x009e7318:
    lVar7 = lVar5;
    if (lVar5 != 0) {
      do {
        if (param_2 == param_3) {
          lVar5 = *(long *)(lVar7 + 0x10);
          while (lVar2 = lVar5, lVar2 != 0) {
            lVar7 = lVar2;
            lVar5 = *(long *)(lVar2 + 0x10);
          }
          FUN_009e74d8(param_1,lVar7);
          goto LAB_009e7428;
        }
        FUN_008fce60(lVar7 + 0x20,param_2 + 4);
        *(int *)(lVar7 + 0x38) = (int)param_2[7];
        lVar5 = FUN_009e747c(lVar7);
        uVar4 = FUN_009e7534(param_1,&local_60,lVar7 + 0x20);
        FUN_009e7608(param_1,local_60,uVar4,lVar7);
        plVar6 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) {
          plVar6 = param_2 + 2;
          bVar3 = *(long **)*plVar6 == param_2;
          param_2 = (long *)*plVar6;
          if (bVar3) goto joined_r0x009e7318;
          do {
            lVar7 = *plVar6;
            plVar6 = (long *)(lVar7 + 0x10);
            param_2 = (long *)*plVar6;
          } while (*param_2 != lVar7);
        }
        else {
          do {
            param_2 = plVar6;
            plVar6 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar7 = lVar5;
        if (lVar5 == 0) break;
      } while( true );
    }
  }
  while (param_2 != param_3) {
    FUN_009e765c(param_1,param_2 + 4);
    plVar6 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar6 = param_2 + 2;
      bVar3 = *(long **)*plVar6 != param_2;
      param_2 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          param_2 = (long *)*plVar6;
        } while (*param_2 != lVar5);
      }
    }
    else {
      do {
        param_2 = plVar6;
        plVar6 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
LAB_009e7428:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e747c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      plVar2 = (long *)plVar1[1];
      *plVar1 = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}




void FUN_009e74d8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_009e74d8(param_1,*param_2);
    FUN_009e74d8(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




long * FUN_009e7534(long param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  long *plVar5;
  void *__s2;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = (long)plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar5 = plVar6;
        bVar3 = *(byte *)(plVar5 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar5[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar5[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar5 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (iVar4 < 0) goto LAB_009e75c8;
LAB_009e75b4:
        plVar6 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          *param_2 = (long)plVar5;
          return plVar5 + 1;
        }
      }
      if (uVar1 <= uVar2) goto LAB_009e75b4;
LAB_009e75c8:
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    *param_2 = (long)plVar5;
  }
  return plVar5;
}




void FUN_009e7608(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void * FUN_009e765c(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x40);
  FUN_008fcdb8((long)pvVar2 + 0x20,param_2);
  *(undefined4 *)((long)pvVar2 + 0x38) = *(undefined4 *)(param_2 + 0x18);
  uVar3 = FUN_009e7534(param_1,&local_50,(long)pvVar2 + 0x20);
  FUN_009e7608(param_1,local_50,uVar3,pvVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_009e7700(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_009e77ac(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar3 + 0x20,param_4);
    *(undefined4 *)((long)pvVar3 + 0x38) = *(undefined4 *)(param_4 + 0x18);
    FUN_009e7608(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_009e77ac(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  if (param_1 + 1 == param_2) {
LAB_009e7860:
    plVar14 = (long *)*param_2;
    plVar9 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar6 = plVar14;
      plVar13 = param_2;
      if (plVar14 == (long *)0x0) {
        do {
          plVar9 = (long *)plVar13[2];
          bVar7 = (long *)*plVar9 == plVar13;
          plVar13 = plVar9;
        } while (bVar7);
      }
      else {
        do {
          plVar9 = plVar6;
          plVar6 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      bVar4 = *(byte *)(plVar9 + 4);
      bVar5 = *param_5;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(param_5 + 8);
      }
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = plVar9[5];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 != 0) {
        pvVar11 = (void *)plVar9[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)plVar9 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        iVar8 = memcmp(pvVar11,pbVar10,sVar3);
        if (iVar8 != 0) {
          if (-1 < iVar8) goto LAB_009e7950;
          goto LAB_009e7980;
        }
      }
      if (uVar2 <= uVar1) goto LAB_009e7950;
    }
LAB_009e7980:
    param_4 = param_2;
    if (plVar14 != (long *)0x0) {
      *param_3 = (long)plVar9;
      return plVar9 + 1;
    }
LAB_009e799c:
    *param_3 = (long)param_2;
  }
  else {
    bVar4 = *(byte *)(param_2 + 4);
    bVar5 = *param_5;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = param_2[5];
    }
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_009e7858:
      if (uVar1 < uVar2) goto LAB_009e7860;
      if (sVar3 != 0) {
        pvVar11 = (void *)param_2[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)param_2 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        goto LAB_009e78ac;
      }
LAB_009e79a4:
      if (uVar2 < uVar1) {
LAB_009e79ac:
        param_4 = param_2 + 1;
        plVar9 = (long *)*param_4;
        if ((long *)*param_4 == (long *)0x0) {
          plVar9 = param_2 + 2;
          plVar14 = (long *)*plVar9;
          if ((long *)*plVar14 != param_2) {
            do {
              lVar12 = *plVar9;
              plVar9 = (long *)(lVar12 + 0x10);
              plVar14 = (long *)*plVar9;
            } while (*plVar14 != lVar12);
          }
        }
        else {
          do {
            plVar14 = plVar9;
            plVar9 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        if (plVar14 != param_1 + 1) {
          bVar4 = *(byte *)(plVar14 + 4);
          uVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = plVar14[5];
          }
          sVar3 = uVar2;
          if (uVar1 <= uVar2) {
            sVar3 = uVar1;
          }
          if (sVar3 != 0) {
            pbVar10 = *(byte **)(param_5 + 0x10);
            pvVar11 = (void *)plVar14[6];
            if ((bVar5 & 1) == 0) {
              pbVar10 = param_5 + 1;
            }
            if ((bVar4 & 1) == 0) {
              pvVar11 = (void *)((long)plVar14 + 0x21);
            }
            iVar8 = memcmp(pbVar10,pvVar11,sVar3);
            if (iVar8 != 0) {
              if (-1 < iVar8) goto LAB_009e7950;
              goto LAB_009e7a58;
            }
          }
          if (uVar2 <= uVar1) {
LAB_009e7950:
            plVar9 = (long *)FUN_009e7a98(param_1,param_3,param_5);
            return plVar9;
          }
        }
LAB_009e7a58:
        if (param_2[1] != 0) {
          *param_3 = (long)plVar14;
          return plVar14;
        }
        goto LAB_009e799c;
      }
    }
    else {
      pbVar10 = *(byte **)(param_5 + 0x10);
      pvVar11 = (void *)param_2[6];
      if ((bVar5 & 1) == 0) {
        pbVar10 = param_5 + 1;
      }
      if ((bVar4 & 1) == 0) {
        pvVar11 = (void *)((long)param_2 + 0x21);
      }
      iVar8 = memcmp(pbVar10,pvVar11,sVar3);
      if (iVar8 == 0) goto LAB_009e7858;
      if (iVar8 < 0) goto LAB_009e7860;
LAB_009e78ac:
      iVar8 = memcmp(pvVar11,pbVar10,sVar3);
      if (iVar8 == 0) goto LAB_009e79a4;
      if (iVar8 < 0) goto LAB_009e79ac;
    }
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
  }
  return param_4;
}




long * FUN_009e7a98(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_009e7afc:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_009e7b18;
          if (iVar4 < 0) goto LAB_009e7b20;
          goto LAB_009e7b98;
        }
LAB_009e7b84:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_009e7b84;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_009e7afc;
      }
LAB_009e7b18:
      if (uVar2 <= uVar1) break;
LAB_009e7b20:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_009e7b98:
    *param_2 = plVar7;
  }
  return plVar5;
}




void * FUN_009e7bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_009e7a98(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined4 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_009e7608(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




void * FUN_009e7c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_009e7d30(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x50);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x40) = 0;
    *(undefined8 *)((long)pvVar4 + 0x48) = 0;
    *(undefined8 **)((long)pvVar4 + 0x38) = (undefined8 *)((long)pvVar4 + 0x40);
    puVar3 = (undefined8 *)FUN_009e7e5c(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_009e7d30(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_009e7d94:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_009e7db0;
          if (iVar4 < 0) goto LAB_009e7db8;
          goto LAB_009e7e30;
        }
LAB_009e7e1c:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_009e7e1c;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_009e7d94;
      }
LAB_009e7db0:
      if (uVar2 <= uVar1) break;
LAB_009e7db8:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_009e7e30:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_009e7e5c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 * FUN_009e7eb0(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_009e7f68(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_009e7f68(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_009e7fdc:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_009e7fdc;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}

