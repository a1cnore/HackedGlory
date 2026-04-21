// functions/00b89 — 21 functions
#include "libGameKindred.h"




void thunk_FUN_00b89100(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_SPOILS_REWATCH_SEASON_REWARDS");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b89058(long param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x334c) = *(int *)(param_1 + 0x334c) + 1;
    FUN_00acdd70(param_1 + 0x88);
    return;
  }
  return;
}




void FUN_00b89078(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00b89c58(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b89100(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_SPOILS_REWATCH_SEASON_REWARDS");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b89170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e7dc8;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b891d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e7dc8;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b89240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e7ec8;
  FUN_00b89368(param_1 + 9,1);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00b89290(void)

{
  return 10;
}




void FUN_00b89298(uint *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        if ((*(byte *)(lVar1 + 0x60) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x70));
        }
        if ((*(byte *)(lVar1 + 0x48) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x58));
        }
        lVar1 = lVar3 + lVar4;
        if ((*(byte *)(lVar1 + 0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x40));
        }
        if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x28));
        }
        FUN_00930974(lVar3 + lVar4,*(undefined8 *)(lVar3 + lVar4 + 8));
        lVar4 = lVar4 + 0x88;
      } while ((ulong)uVar2 * 0x88 - lVar4 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00b89368(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x30;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        if ((*(byte *)(puVar2 + -4) & 1) != 0) {
          operator_delete((void *)puVar2[-2]);
        }
        lVar1 = lVar1 + -0x30;
        puVar2 = puVar2 + 6;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00b893f4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00b8947c(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0xc;
      puVar2 = *(undefined8 **)(param_2 + 2);
      do {
        lVar4 = lVar4 + -0xc;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar3 = *puVar2;
        puVar3 = (undefined8 *)((long)puVar3 + 0xc);
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00b8947c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0xc;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar4 = *puVar2;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
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




void FUN_00b8950c(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (param_1 != param_2) {
    FUN_00b89298(param_1,1);
    FUN_00b89658(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      puVar7 = *(undefined8 **)(param_2 + 2);
      puVar5 = *(undefined8 **)(param_1 + 2);
      puVar8 = puVar7 + (ulong)*param_2 * 0x11;
      do {
        puVar6 = puVar5 + 1;
        *puVar6 = 0;
        puVar5[2] = 0;
        *puVar5 = puVar6;
        plVar9 = (long *)*puVar7;
        while (plVar9 != puVar7 + 1) {
          FUN_00b89840(puVar5,puVar6,plVar9 + 4,plVar9 + 4);
          plVar3 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            plVar3 = plVar9 + 2;
            bVar1 = *(long **)*plVar3 != plVar9;
            plVar9 = (long *)*plVar3;
            if (bVar1) {
              do {
                lVar4 = *plVar3;
                plVar3 = (long *)(lVar4 + 0x10);
                plVar9 = (long *)*plVar3;
              } while (*plVar9 != lVar4);
            }
          }
          else {
            do {
              plVar9 = plVar3;
              plVar3 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        FUN_008fcdb8(puVar5 + 3,puVar7 + 3);
        FUN_008fcdb8(puVar5 + 6,puVar7 + 6);
        FUN_008fcdb8(puVar5 + 9,puVar7 + 9);
        FUN_008fcdb8(puVar5 + 0xc,puVar7 + 0xc);
        *(undefined1 *)(puVar5 + 0x10) = *(undefined1 *)(puVar7 + 0x10);
        puVar6 = puVar7 + 0xf;
        puVar7 = puVar7 + 0x11;
        puVar5[0xf] = *puVar6;
        puVar5 = puVar5 + 0x11;
      } while (puVar7 != puVar8);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00b89658(uint *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (param_1[1] < param_2) {
    puVar3 = operator_new__((ulong)param_2 * 0x88);
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar9 = puVar5 + (ulong)*param_1 * 0x11;
      puVar7 = puVar3;
      do {
        puVar8 = puVar7 + 1;
        *puVar8 = 0;
        puVar7[2] = 0;
        *puVar7 = puVar8;
        plVar10 = (long *)*puVar5;
        while (plVar10 != puVar5 + 1) {
          FUN_00b89840(puVar7,puVar8,plVar10 + 4,plVar10 + 4);
          plVar4 = (long *)plVar10[1];
          if ((long *)plVar10[1] == (long *)0x0) {
            plVar4 = plVar10 + 2;
            bVar2 = *(long **)*plVar4 != plVar10;
            plVar10 = (long *)*plVar4;
            if (bVar2) {
              do {
                lVar6 = *plVar4;
                plVar4 = (long *)(lVar6 + 0x10);
                plVar10 = (long *)*plVar4;
              } while (*plVar10 != lVar6);
            }
          }
          else {
            do {
              plVar10 = plVar4;
              plVar4 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
        }
        FUN_008fcdb8(puVar7 + 3,puVar5 + 3);
        FUN_008fcdb8(puVar7 + 6,puVar5 + 6);
        FUN_008fcdb8(puVar7 + 9,puVar5 + 9);
        FUN_008fcdb8(puVar7 + 0xc,puVar5 + 0xc);
        *(undefined1 *)(puVar7 + 0x10) = *(undefined1 *)(puVar5 + 0x10);
        puVar8 = puVar5 + 0xf;
        puVar5 = puVar5 + 0x11;
        puVar7[0xf] = *puVar8;
        puVar7 = puVar7 + 0x11;
      } while (puVar5 != puVar9);
      uVar1 = *param_1;
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (uVar1 != 0) {
        lVar6 = 0;
        do {
          if ((*(byte *)((long)puVar5 + lVar6 + 0x60) & 1) != 0) {
            operator_delete(*(void **)((long)puVar5 + lVar6 + 0x70));
          }
          if ((*(byte *)((long)puVar5 + lVar6 + 0x48) & 1) != 0) {
            operator_delete(*(void **)((long)puVar5 + lVar6 + 0x58));
          }
          if ((*(byte *)((long)puVar5 + lVar6 + 0x30) & 1) != 0) {
            operator_delete(*(void **)((long)puVar5 + lVar6 + 0x40));
          }
          if ((*(byte *)((long)puVar5 + lVar6 + 0x18) & 1) != 0) {
            operator_delete(*(void **)((long)puVar5 + lVar6 + 0x28));
          }
          FUN_00930974((long)puVar5 + lVar6,*(undefined8 *)((long)puVar5 + lVar6 + 8));
          lVar6 = lVar6 + 0x88;
        } while ((ulong)uVar1 * 0x88 - lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(undefined8 **)(param_1 + 2) = puVar3;
  }
  return;
}




void * FUN_00b89840(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00b898ec(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar3 + 0x20,param_4);
    *(undefined4 *)((long)pvVar3 + 0x38) = *(undefined4 *)(param_4 + 0x18);
    FUN_00930d28(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00b898ec(long *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

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
LAB_00b899a0:
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
          if (-1 < iVar8) goto LAB_00b89a90;
          goto LAB_00b89ac0;
        }
      }
      if (uVar2 <= uVar1) goto LAB_00b89a90;
    }
LAB_00b89ac0:
    param_4 = param_2;
    if (plVar14 != (long *)0x0) {
      *param_3 = (long)plVar9;
      return plVar9 + 1;
    }
LAB_00b89adc:
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
LAB_00b89998:
      if (uVar1 < uVar2) goto LAB_00b899a0;
      if (sVar3 != 0) {
        pvVar11 = (void *)param_2[6];
        pbVar10 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar11 = (void *)((long)param_2 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar10 = param_5 + 1;
        }
        goto LAB_00b899ec;
      }
LAB_00b89ae4:
      if (uVar2 < uVar1) {
LAB_00b89aec:
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
              if (-1 < iVar8) goto LAB_00b89a90;
              goto LAB_00b89b98;
            }
          }
          if (uVar2 <= uVar1) {
LAB_00b89a90:
            plVar9 = (long *)FUN_00930bfc(param_1,param_3,param_5);
            return plVar9;
          }
        }
LAB_00b89b98:
        if (param_2[1] != 0) {
          *param_3 = (long)plVar14;
          return plVar14;
        }
        goto LAB_00b89adc;
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
      if (iVar8 == 0) goto LAB_00b89998;
      if (iVar8 < 0) goto LAB_00b899a0;
LAB_00b899ec:
      iVar8 = memcmp(pvVar11,pbVar10,sVar3);
      if (iVar8 == 0) goto LAB_00b89ae4;
      if (iVar8 < 0) goto LAB_00b89aec;
    }
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
  }
  return param_4;
}




void FUN_00b89bd8(uint *param_1,uint param_2)

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




void FUN_00b89c58(uint *param_1,uint param_2)

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




void FUN_00b89cd8(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027e7ef8;
  param_1[0x17] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_00b89d24(long *param_1,byte param_2,undefined4 param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == (param_2 & 1)) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar4 = 1;
    uVar3 = 0;
    goto LAB_00b89dfc;
  case 1:
    uVar3 = 1;
    break;
  case 2:
    uVar3 = 2;
    break;
  case 3:
    uVar3 = 3;
    break;
  case 4:
    FUN_00b8a604(param_1,param_2 & 1);
    goto switchD_00b89d88_default;
  case 5:
    uVar3 = 1;
    goto LAB_00b89df8;
  case 6:
    uVar3 = 0;
LAB_00b89df8:
    uVar4 = 0;
    goto LAB_00b89dfc;
  default:
    goto switchD_00b89d88_default;
  }
  uVar4 = 1;
LAB_00b89dfc:
  FUN_00b89f9c(param_1,param_2 & 1,uVar3,uVar4);
switchD_00b89d88_default:
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  pcVar1 = FUN_00b8a9d4;
  if ((param_2 & 1) == 0) {
    pcVar1 = FUN_00b8a9ec;
  }
  *(code **)(puVar6 + 8) = pcVar1;
  *(long **)(puVar6 + 0x10) = param_1;
  FUN_00f022a0(param_1,puVar6);
  lVar2 = DAT_03210d00;
  if (((param_4 & 1) != 0) && ((param_2 & 1) == 0)) {
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_028250b8;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00f022a0(param_1,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00b89f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1,param_2 & 1);
  return;
}




void FUN_00b89f9c(undefined8 param_1,long param_2,byte param_3,int param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_90;
  float fStack_8c;
  undefined1 auStack_84 [4];
  float local_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_2 + 0xc0) & 1) == (param_3 & 1)) goto LAB_00b8a5cc;
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_2,uVar3 & 1,&local_7c,&local_80,auStack_84);
  if (param_4 == 2) {
    fVar10 = -0.35;
LAB_00b8a074:
    fVar9 = *(float *)(param_2 + 0xb8);
    fVar10 = local_80 * fVar10;
  }
  else {
    if (param_4 == 1) {
      fVar9 = 0.35;
    }
    else {
      if (param_4 != 0) {
        fVar10 = 0.35;
        goto LAB_00b8a074;
      }
      fVar9 = -0.35;
    }
    fVar10 = *(float *)(param_2 + 0xbc);
    fVar9 = local_7c * fVar9;
  }
  fVar11 = (float)param_1 * 0.5;
  local_90 = fVar9;
  fStack_8c = fVar10;
  FUN_00f01980(param_2);
  lVar2 = DAT_03210d00;
  if ((param_3 & 1) == 0) {
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdc08(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efdc50(puVar7,&local_90);
    FUN_00efcac4(param_1,puVar7);
    FUN_00efcb24(puVar7,FUN_009a71a4);
    lVar2 = DAT_03210d00;
    if ((param_5 & 1) != 0) {
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar6);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0,puVar6);
      FUN_00efcac4(fVar11,puVar6);
      lVar2 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efcd98(puVar8);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar8,puVar7,puVar6,0);
      puVar7 = puVar8;
    }
    FUN_00f022a0(param_2,puVar7);
    lVar2 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825148;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00f022a0(param_2,puVar7);
    bVar4 = *(byte *)(param_2 + 0xc0) & 0xfe;
  }
  else {
    if ((*(float *)(param_2 + 0x40) != fVar9) || (*(float *)(param_2 + 0x44) != fVar10)) {
      *(ulong *)(param_2 + 0x40) = CONCAT44(fStack_8c,local_90);
      FUN_0091ada4(param_2);
    }
    uVar3 = *(uint *)(param_2 + 0x84);
    if ((uVar3 & 0x7f80) != 0) {
      *(uint *)(param_2 + 0x84) = uVar3 & 0xffff807f;
      FUN_0091ada4(param_2);
      uVar3 = *(uint *)(param_2 + 0x84);
    }
    *(uint *)(param_2 + 0x84) = uVar3 | 0xc;
    lVar2 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdc08(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efdc50(puVar7,param_2 + 0xb8);
    FUN_00efcac4(param_1,puVar7);
    FUN_00efcb24(puVar7,FUN_0091aa80);
    lVar2 = DAT_03210d00;
    if ((param_5 & 1) == 0) {
      if ((~*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
        *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x7f80;
        FUN_0091ada4(param_2);
      }
    }
    else {
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar6);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0x3f800000,puVar6);
      FUN_00efcac4(fVar11,puVar6);
      lVar2 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efcd98(puVar8);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar8,puVar7,puVar6,0);
      puVar7 = puVar8;
    }
    FUN_00f022a0(param_2,puVar7);
    bVar4 = *(byte *)(param_2 + 0xc0) | 1;
  }
  *(byte *)(param_2 + 0xc0) = bVar4;
LAB_00b8a5cc:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

