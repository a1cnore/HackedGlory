// functions/00bdd — 31 functions
#include "libGameKindred.h"




void * FUN_00bdd05c(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x950);
  FUN_00ca1524();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00bdd0c4(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x430);
  FUN_00ca189c();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00bdd12c(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x130);
  FUN_00f0d160();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00bdd194(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x810);
  FUN_00ca0b08();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00bdd1fc(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x340);
  FUN_00ca1b34();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00bdd264(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ee5a8;
  pvVar1 = operator_new(0x1ea8);
  FUN_00c4925c();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_009680c8(param_1 + 2);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027ee4a0;
  param_1[2] = &PTR_FUN_027ee4e8;
  param_1[5] = &PTR_FUN_027ee518;
  FUN_00a030b4(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0x200000005;
  param_1[0xc] = 0x500000011;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}




void FUN_00bdd300(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_027ee4a0;
  param_1[2] = &PTR_FUN_027ee4e8;
  param_1[5] = &PTR_FUN_027ee518;
  puVar3 = (uint *)(param_1 + 6);
  uVar2 = *puVar3;
  plVar1 = (long *)param_1[7];
  plVar4 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
        uVar2 = *(uint *)(param_1 + 6);
        plVar1 = (long *)param_1[7];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *puVar3 = 0;
  }
  FUN_00bdd420();
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  FUN_00bdd5a8(param_1 + 10,1);
  FUN_00a031c0(param_1 + 8,1);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[7] = 0;
  }
  FUN_00ec5d8c(param_1 + 5);
  FUN_00968148(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ee5a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdd420(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009b8d90();
  FUN_009baadc(uVar1,&DAT_0313abc8);
  uVar1 = FUN_009b8d90();
  FUN_009ba61c(uVar1,&DAT_0313abc8);
  return;
}




void FUN_00bdd454(long param_1)

{
  FUN_00bdd300(param_1 + -0x10);
  return;
}




void FUN_00bdd45c(long param_1)

{
  FUN_00bdd300(param_1 + -0x28);
  return;
}




void FUN_00bdd464(void *param_1)

{
  FUN_00bdd300();
  operator_delete(param_1);
  return;
}




void FUN_00bdd488(long param_1)

{
  FUN_00bdd300((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bdd4b0(long param_1)

{
  FUN_00bdd300((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00bdd4d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x40;
  FUN_00a031b8(lVar1);
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0x200000005;
  *(undefined8 *)(param_1 + 0x60) = 0x500000011;
  FUN_00bdd5a8(param_1 + 0x50,0);
  lVar2 = FUN_00969248();
  if (*(int *)(lVar2 + 0x38) < 1) {
    FUN_00a03834(lVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    FUN_00a06acc();
    lVar2 = FUN_00940c10();
    if (0 < *(int *)(lVar2 + 0x20)) {
      lVar2 = FUN_00969248();
      if (*(char *)(lVar2 + 0x3e) == '\0') {
        lVar2 = FUN_00969248();
        if (*(int *)(lVar2 + 0x38) == 1) {
          FUN_00a05988(lVar1);
          goto LAB_00bdd588;
        }
      }
    }
    FUN_00a05980(lVar1,"tutorialLevel");
  }
LAB_00bdd588:
  uVar3 = FUN_00a030bc(lVar1);
  FUN_00bdd624(param_1,uVar3,0xffffffff);
  return;
}




void FUN_00bdd5a8(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x28;
        puVar2 = puVar2 + 5;
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




void FUN_00bdd624(long param_1,long param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    puVar5 = (undefined8 *)(param_1 + 8);
    FUN_00c49ca8(*puVar5);
    if (*(int *)(param_2 + 8) != 0) {
      lVar6 = 0;
      uVar8 = 0;
      do {
        iVar4 = FUN_00a03248(*(long *)(param_2 + 0x10) + lVar6);
        if (iVar4 != 4) {
          FUN_00bddcc0(param_1,*(long *)(param_2 + 0x10) + lVar6,uVar8 & 0xffffffff);
        }
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0xa8;
      } while (uVar8 < *(uint *)(param_2 + 8));
    }
    FUN_00c49ad0(*puVar5);
    uVar9 = 0x3e800000;
    if (param_3 != 0xffffffff) {
      uVar9 = 0;
    }
    FUN_00c49a34(uVar9,*puVar5);
  }
  else if (*(int *)(param_2 + 0x18) == 1) {
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      if (*(int *)(lVar6 + 8) != 0) {
        lVar7 = 0;
        iVar4 = 0;
        uVar8 = 1;
        do {
          iVar3 = FUN_00a03248(*(long *)(lVar6 + 0x10) + lVar7);
          if (iVar3 != 4) {
            iVar4 = iVar4 + 1;
          }
          if (param_3 <= uVar8) break;
          lVar7 = lVar7 + 0xa8;
          bVar2 = uVar8 < *(uint *)(lVar6 + 8);
          uVar8 = uVar8 + 1;
        } while (bVar2);
      }
    }
    puVar5 = (undefined8 *)(param_1 + 8);
    FUN_00c49de4(*puVar5,iVar4);
    if (*(int *)(param_2 + 8) != 0) {
      lVar6 = 0;
      uVar8 = 0;
      do {
        iVar3 = FUN_00a03248(*(long *)(param_2 + 0x10) + lVar6);
        FUN_00c49ea8(*puVar5,*(long *)(param_2 + 0x10) + lVar6 + 0x40,iVar4,uVar8 & 0xffffffff,
                     iVar3 == 0);
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0xa8;
      } while (uVar8 < *(uint *)(param_2 + 8));
    }
    FUN_00c49df4(*puVar5,iVar4);
  }
  FUN_00f048e0(auStack_78,DAT_0313abc0,param_2);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_78,1);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bdd810(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x98) + 0x10) + (ulong)param_2 * 0xa8;
  iVar1 = FUN_00a03248(lVar4);
  if (iVar1 == 0) {
    uVar2 = FUN_009b8d90();
    FUN_009baadc(uVar2,&DAT_0313abc8);
    uVar2 = FUN_009b8d90();
    FUN_009ba61c(uVar2,&DAT_0313abc8);
    FUN_00c49ee8(*(undefined8 *)(param_1 + 8),1);
    uVar3 = FUN_00bdd8b0(param_1,lVar4);
    if ((uVar3 & 1) == 0) {
      FUN_00bdda14(param_1,lVar4,param_2);
      return;
    }
  }
  return;
}




void FUN_00bdd8b0(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  switch(*(undefined4 *)(param_2 + 0x38)) {
  case 1:
    lVar3 = FUN_00969248();
    *(undefined1 *)(lVar3 + 0x3e) = 1;
    FUN_00907af0(1);
    break;
  case 2:
    lVar3 = FUN_00969248();
    *(undefined1 *)(lVar3 + 0x3e) = 1;
    FUN_00907af0(0);
    lVar3 = FUN_00940c10();
    uVar4 = 0;
    if (*(int *)(lVar3 + 0x20) == 1) {
      FUN_00969248(0);
      FUN_0096877c();
      uVar4 = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    goto LAB_00bdd9ec;
  case 3:
    lVar3 = FUN_00940c10();
    bVar1 = *(byte *)(lVar3 + 8);
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 != 0) {
LAB_00bdd940:
        if ((bVar1 & 1) == 0) {
          pcVar5 = (char *)(lVar3 + 9);
        }
        else {
          pcVar5 = *(char **)(lVar3 + 0x18);
        }
        goto LAB_00bdd9b4;
      }
    }
    else if (*(long *)(lVar3 + 0x10) != 0) goto LAB_00bdd940;
    break;
  case 4:
    FUN_0092ec00();
    pcVar5 = "pre_gwen_tutorial_1";
    goto LAB_00bdd9b4;
  case 5:
    FUN_0092ec00();
    pcVar5 = "pre_gwen_tutorial_2";
LAB_00bdd9b4:
    FUN_0096c0ec(local_50,pcVar5);
    FUN_00a99564(param_1 + 0x28,local_50,1,1,2);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar4 = 1;
    *(long *)(param_1 + 0xa0) = param_2;
    goto LAB_00bdd9ec;
  }
  uVar4 = 0;
LAB_00bdd9ec:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00bdda14(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  FUN_00bde194(param_1 + 0x50,lVar1);
  FUN_00bde228(param_1 + 0x88,param_1 + 0x98);
  FUN_00a02ae8(lVar1,param_2);
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_00bde08c(param_1,lVar1);
    return;
  }
  lVar1 = FUN_00a030c4(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_00bdd624(param_1,lVar1,param_3);
    return;
  }
  return;
}




void FUN_00bddac0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((*(long *)(param_1 + 0x98) != 0) && (param_2 < *(uint *)(*(long *)(param_1 + 0x98) + 8))) &&
     (uVar3 = FUN_00ec5c9c(), (uVar3 & 1) != 0)) {
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + (ulong)param_2 * 0xa8 + 0x30);
    if (uVar1 < 7) {
      puVar4 = (&PTR_s_5v5_standard_027ee530)[(int)uVar1];
    }
    else {
      puVar4 = &DAT_01e277f2;
    }
    FUN_0096c0ec(local_50,puVar4);
    uVar3 = (ulong)(local_50[0] >> 1);
    if ((local_50[0] & 1) != 0) {
      uVar3 = local_48;
    }
    if (uVar3 != 0) {
      FUN_00a99564(param_1 + 0x28,local_50,1,1,2);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00bddbb0(undefined8 param_1,uint param_2)

{
  if (param_2 < 7) {
    return (&PTR_s_5v5_standard_027ee530)[(int)param_2];
  }
  return &DAT_01e277f2;
}




void thunk_FUN_00bddbd8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)(*(int *)(param_1 + 0x50) - 1) * 0x28);
  uVar3 = *puVar2;
  *(undefined8 *)(param_1 + 0x68) = puVar2[1];
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  FUN_008fce60(param_1 + 0x70,puVar2 + 2);
  FUN_00bde14c((int *)(param_1 + 0x50));
  uVar1 = *(int *)(param_1 + 0x88) - 1;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
  *(uint *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  return;
}




void FUN_00bddbd8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)(*(int *)(param_1 + 0x50) - 1) * 0x28);
  uVar3 = *puVar2;
  *(undefined8 *)(param_1 + 0x68) = puVar2[1];
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  FUN_008fce60(param_1 + 0x70,puVar2 + 2);
  FUN_00bde14c((int *)(param_1 + 0x50));
  uVar1 = *(int *)(param_1 + 0x88) - 1;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
  *(uint *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  return;
}




void FUN_00bddc3c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  FUN_00a99668(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0xa0);
  if ((lVar1 == 0) || (lVar3 = *(long *)(param_1 + 0x98), lVar3 == 0)) {
    return;
  }
  if (*(uint *)(lVar3 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = (lVar1 - *(long *)(lVar3 + 0x10)) + 0xa8;
    do {
      lVar4 = lVar4 + -0xa8;
      if (lVar4 == 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(lVar3 + 8));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_00bdda14(param_1,lVar1,uVar2);
  return;
}




void FUN_00bddcb8(long param_1)

{
  FUN_00bddc3c(param_1 + -0x28);
  return;
}




void FUN_00bddcc0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  void *pvVar2;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0xb8);
  FUN_00bdc4f4(pvVar2,param_2);
  local_50 = pvVar2;
  FUN_00bde004(param_1 + 0x30,&local_50);
  FUN_00c497b8(*(undefined8 *)(param_1 + 8),*(undefined8 *)((long)local_50 + 8),param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bddd54(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    lVar2 = (ulong)*(uint *)(param_1 + 0x30) << 3;
    do {
      if (*(int *)(*plVar1 + 0x10) == *param_2) {
        FUN_00c47958(*(undefined8 *)(*plVar1 + 8),&DAT_0313abc8);
        FUN_00c49ee8(*(undefined8 *)(param_1 + 8),0);
        return;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00bdddc4(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    lVar2 = (ulong)*(uint *)(param_1 + 0x30) << 3;
    do {
      if (*(int *)(*plVar1 + 0x14) == *param_2) {
        FUN_00c47958(*(undefined8 *)(*plVar1 + 8),&DAT_0313abc8);
        FUN_00c49ee8(*(undefined8 *)(param_1 + 8),0);
        return;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




undefined8 FUN_00bdde34(long param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = *(long **)(param_1 + 0x38);
    plVar3 = plVar2;
    do {
      if (*(int *)(*plVar3 + 0x10) == *param_2) {
        uVar1 = FUN_00c49f60(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*plVar3 + 8));
        if ((uVar1 & 1) != 0) {
          FUN_00c479d4(*(undefined8 *)(*plVar3 + 8),&DAT_0313abc8);
          return 1;
        }
        uVar1 = (ulong)*(uint *)(param_1 + 0x30);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar1);
  }
  return 0;
}




undefined8 FUN_00bddec8(long param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = *(long **)(param_1 + 0x38);
    plVar3 = plVar2;
    do {
      if (*(int *)(*plVar3 + 0x14) == *param_2) {
        uVar1 = FUN_00c49f60(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*plVar3 + 8));
        if ((uVar1 & 1) != 0) {
          FUN_00c479d4(*(undefined8 *)(*plVar3 + 8),&DAT_0313abc8);
          return 1;
        }
        uVar1 = (ulong)*(uint *)(param_1 + 0x30);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar1);
  }
  return 0;
}




undefined8 FUN_00bddf5c(long param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = *(long **)(param_1 + 0x38);
    plVar3 = plVar2;
    do {
      if ((*(int *)(param_1 + 0x60) == *param_2) && (*(int *)(*plVar3 + 0x14) == *param_3)) {
        uVar1 = FUN_00c49f60(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*plVar3 + 8));
        if ((uVar1 & 1) != 0) {
          FUN_00c479d4(*(undefined8 *)(*plVar3 + 8),&DAT_0313abc8);
          return 1;
        }
        uVar1 = (ulong)*(uint *)(param_1 + 0x30);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar1);
  }
  return 0;
}

