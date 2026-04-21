// functions/00cd0 — 16 functions
#include "libGameKindred.h"




undefined8
FUN_00cd0340(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_4)(*param_2,*param_1);
  uVar2 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_4)(*param_3);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  return 1;
}




int FUN_00cd0438(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00cd0340();
  uVar2 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar2 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar2 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar1;
}




int FUN_00cd0508(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00cd0438();
  uVar2 = (*(code *)*param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar2 = (*(code *)*param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar2 = (*(code *)*param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar2 = (*(code *)*param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          uVar3 = *param_1;
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}




void FUN_00cd0610(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_00cd0340(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar3 = puVar4;
      uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
      if ((uVar2 & 1) != 0) {
        uVar6 = *puVar3;
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          puVar4 = param_1;
          if (lVar8 == -0x10) goto LAB_00cd06b4;
          uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar8 + 8));
          lVar1 = lVar8 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
LAB_00cd06b4:
        *puVar4 = uVar6;
      }
      lVar7 = lVar7 + 8;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}




bool FUN_00cd06e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    FUN_00cd0340(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00cd0438(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00cd0508(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00cd0340(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar4 = param_1 + 3;
      puVar5 = param_1 + 2;
      do {
        puVar3 = puVar4;
        uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
        if ((uVar2 & 1) != 0) {
          uVar6 = *puVar3;
          lVar1 = lVar7;
          do {
            lVar9 = lVar1;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            puVar4 = param_1;
            if (lVar9 == -0x10) goto LAB_00cd07dc;
            uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
            lVar1 = lVar9 + -8;
          } while ((uVar2 & 1) != 0);
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_00cd07dc:
          iVar8 = iVar8 + 1;
          *puVar4 = uVar6;
          if (iVar8 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        puVar4 = puVar3 + 1;
        puVar5 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  return true;
}




void FUN_00cd087c(uint *param_1,uint param_2)

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




void FUN_00cd08fc(uint *param_1,uint param_2)

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




void * FUN_00cd097c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00930bfc(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined4 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_00930d28(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




void FUN_00cd0a2c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x30);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        pbVar3 = (byte *)((long)pvVar2 + 0x18);
        do {
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x10));
          }
          if ((pbVar3[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          lVar4 = lVar4 + -0x30;
          pbVar3 = pbVar3 + 0x30;
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




void FUN_00cd0b1c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x98);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x98);
      pvVar5 = pvVar2;
      do {
        FUN_008fcdb8(pvVar5,pvVar3);
        FUN_008fcdb8((long)pvVar5 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar5 + 0x48,(long)pvVar3 + 0x48);
        FUN_008fcdb8((long)pvVar5 + 0x60,(long)pvVar3 + 0x60);
        FUN_008fcdb8((long)pvVar5 + 0x78,(long)pvVar3 + 0x78);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x90);
        pvVar3 = (void *)((long)pvVar3 + 0x98);
        *(undefined4 *)((long)pvVar5 + 0x90) = *puVar1;
        pvVar5 = (void *)((long)pvVar5 + 0x98);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x98;
        do {
          FUN_00b01800(pvVar3);
          lVar4 = lVar4 + -0x98;
          pvVar3 = (void *)((long)pvVar3 + 0x98);
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




void FUN_00cd0c28(long *param_1)

{
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_0280d4d0;
  FUN_00f0bdbc(param_1 + 0x11,1);
  param_1[0x11] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(param_1 + 0x2a);
  FUN_00f13ca4(param_1 + 0x50);
  FUN_00f0e4a8(param_1 + 0x67);
  FUN_00b25254(param_1 + 0x85);
  FUN_00b0108c(param_1 + 0xb1);
  FUN_00aba378(param_1 + 0x1f1,0);
  FUN_00f0d160(param_1 + 0x67f);
  FUN_00f0e4a8(param_1 + 0x6a5);
  FUN_00f0e4a8(param_1 + 0x6c3);
  FUN_00b25254(param_1 + 0x6e1);
  FUN_00ab6c24(param_1 + 0x70d,0);
  FUN_00f0bdbc(param_1 + 0x9c5,1);
  param_1[0x9c5] = (long)&PTR_FUN_027ccd08;
  FUN_00afbfb0(param_1 + 0x9de);
  FUN_00b1a9d4(param_1 + 0xa1a);
  FUN_00b1a1c4(param_1 + 0xab5);
  FUN_00cd0d40(param_1 + 0xb89);
  param_1[0xbbf] = 0;
  param_1[0xbbe] = 0;
                    /* WARNING: Could not recover jumptable at 0x00cd0d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1);
  return;
}




void FUN_00cd0d40(long param_1)

{
  FUN_00cd2eb8();
  FUN_00e70510(param_1 + 0x120);
  FUN_00e70510(param_1 + 0x130);
  FUN_00e70510(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x150) = 0xff000000;
  FUN_00e70510(param_1 + 0x158);
  FUN_00e70510(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}




void FUN_00cd0dac(long param_1)

{
  if ((*(byte *)(param_1 + 400) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x1a0));
  }
  if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x188));
  }
  if (*(void **)(param_1 + 0x170) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(void **)(param_1 + 0x148) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if (*(void **)(param_1 + 0x138) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (*(void **)(param_1 + 0x128) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  FUN_00cd2f04(param_1);
  return;
}




void FUN_00cd0e3c(void *param_1)

{
  FUN_00cd2a74();
  operator_delete(param_1);
  return;
}




void FUN_00cd0e60(void)

{
  return;
}




void FUN_00cd0e64(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0xb1;
  uVar6 = FUN_00cd114c(plVar1);
  if ((uVar6 & 1) == 0) {
    *(int *)(param_1 + 0xb8a) = (int)param_2[1];
    plVar2 = param_1 + 0xb89;
    param_1[0xb89] = *param_2;
    FUN_008fce60(param_1 + 0xb8b,param_2 + 2);
    FUN_008fce60(param_1 + 0xb8e,param_2 + 5);
    FUN_00cd2f88(param_1 + 0xb91,param_2 + 8);
    FUN_008fce60(param_1 + 0xb93,param_2 + 10);
    lVar7 = param_2[0xd];
    param_1[0xb97] = param_2[0xe];
    param_1[0xb96] = lVar7;
    lVar7 = param_2[0xf];
    param_1[0xb99] = param_2[0x10];
    param_1[0xb98] = lVar7;
    lVar7 = param_2[0x11];
    param_1[0xb9b] = param_2[0x12];
    param_1[0xb9a] = lVar7;
    FUN_008fce60(param_1 + 0xb9c,param_2 + 0x13);
    lVar7 = param_2[0x16];
    param_1[0xba0] = param_2[0x17];
    param_1[0xb9f] = lVar7;
    lVar7 = param_2[0x18];
    param_1[0xba2] = param_2[0x19];
    param_1[0xba1] = lVar7;
    lVar7 = param_2[0x1a];
    param_1[0xba4] = param_2[0x1b];
    param_1[0xba3] = lVar7;
    FUN_008fce60(param_1 + 0xba5,param_2 + 0x1c);
    param_1[0xba8] = param_2[0x1f];
    FUN_008fce60(param_1 + 0xba9,param_2 + 0x20);
    param_1[0xbac] = param_2[0x23];
    (**(code **)(*param_1 + 0x130))(param_1);
    FUN_00f0d75c(param_1 + 0x2a,param_1 + 0xbad);
    FUN_00f0d75c(param_1 + 0x85,param_1 + 0xbb1);
    FUN_00f0d7fc(param_1 + 0x85,param_1 + 0xbb3);
    FUN_00b015a0(plVar1,param_1 + 0xb8b);
    FUN_008fa54c(local_70,"IDLE_CLOSED");
    FUN_00b013a0(0xbf800000,plVar1,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if ((char)*plVar2 == '\0') {
      uVar6 = FUN_00cd70a4(plVar2);
      if ((uVar6 & 1) == 0) {
        FUN_00caf12c(param_1 + 0xb93,param_1 + 0x1f1);
      }
      else {
        FUN_00caf12c(param_1 + 0xb9c,param_1 + 0x1f1);
        FUN_00caf368(param_1 + 0xb9c,param_1 + 0xa1a);
      }
      uVar5 = FUN_00cd70a4(plVar2);
      *(uint *)((long)param_1 + 0x5154) =
           *(uint *)((long)param_1 + 0x5154) & 0xfffffff8 |
           *(uint *)((long)param_1 + 0x5154) & 3 | (uVar5 & 1) << 2;
      uVar5 = FUN_00cd70a4(plVar2);
      *(uint *)((long)param_1 + 0x347c) =
           *(uint *)((long)param_1 + 0x347c) & 0xfffffff8 |
           *(uint *)((long)param_1 + 0x347c) & 3 | (~uVar5 & 1) << 2;
      FUN_00f0d75c(param_1 + 0x67f,param_1 + 0xbb6);
      FUN_00f0dc4c(0x43160000,0,0x3f800000,param_1 + 0x67f);
    }
    (**(code **)(*param_1 + 0x100))(param_1);
  }
  FUN_009697c8(local_70,param_2 + 5,&DAT_01bb05c9);
  pvVar3 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar3 = local_60;
  }
  FUN_00b1a8e8(param_1 + 0xab5,pvVar3);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

