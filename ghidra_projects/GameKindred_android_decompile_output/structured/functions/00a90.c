// functions/00a90 — 58 functions
#include "libGameKindred.h"




void FUN_00a90064(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (((char)param_3[4] != '\0') && (lVar1 = param_3[3], lVar1 != 0)) {
    if (*(long *)(lVar1 + 0x28) != 0) {
      (**(code **)(**(long **)(*(long *)(lVar1 + 0x28) + 0x10) + 0x20))();
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00a900b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  return;
}




undefined8 FUN_00a900c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 8);
  while( true ) {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 7;
    if (1 < uVar3) {
      return 1;
    }
  }
  return 0;
}




void FUN_00a9012c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d02b0;
  if (param_1[3] != 0) {
    FUN_00a89fe4(DAT_031336c0 + 0x54660);
    return;
  }
  return;
}




void FUN_00a90160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d02b0;
  if (param_1[3] != 0) {
    FUN_00a89fe4(DAT_031336c0 + 0x54660);
  }
  operator_delete(param_1);
  return;
}




void FUN_00a901b0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00a89fe4(DAT_031336c0 + 0x54660);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00a901f8(long param_1,undefined8 *param_2)

{
  FUN_009cbd04(*param_2,param_1 + 0x10);
  return;
}




void FUN_00a9020c(long param_1)

{
  FUN_00a7fc2c(*(undefined4 *)(param_1 + 0x10),1);
  return;
}




void FUN_00a90218(void)

{
  return;
}




undefined8 FUN_00a90220(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 0x18);
  while( true ) {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 7;
    if (1 < uVar3) {
      return 0;
    }
  }
  return 1;
}




void FUN_00a90284(void)

{
  return;
}




void FUN_00a9028c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d03b8;
  FUN_00a8944c(param_1 + 0x14);
  FUN_00a8944c(param_1 + 0x11);
  return;
}




void FUN_00a902c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d03b8;
  FUN_00a8944c(param_1 + 0x14);
  FUN_00a8944c(param_1 + 0x11);
  operator_delete(param_1);
  return;
}




void FUN_00a90308(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8c4f8(DAT_031336c8 + 0xf030);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a9033c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a90344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a90348(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a90350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_00a90354(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a9035c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a90360(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = FUN_00a8a630(DAT_031336c8 + 0x41060);
  if (*(int *)(DAT_031336c8 + 0x47ea0) < *(int *)(DAT_031336c8 + 0x44064)) {
    *(int *)(DAT_031336c8 + 0x47ea0) = *(int *)(DAT_031336c8 + 0x44064);
  }
  uVar4 = 0;
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  plVar5 = (long *)(param_1 + 0x18);
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) break;
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_3 + 0x18);
      param_1 = param_1 + 0xa0;
      *(undefined1 *)(param_3 + 0x20) = 0;
      goto LAB_00a9041c;
    }
    uVar4 = uVar4 + 1;
    plVar5 = plVar5 + 7;
  } while (uVar4 < 2);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined1 *)(param_3 + 0x20) = 1;
  param_1 = param_1 + 0x88;
LAB_00a9041c:
  FUN_00a89788(param_1,uVar1);
  FUN_00a89808(*(undefined8 *)(param_3 + 0x18),param_2);
  return;
}




void FUN_00a9043c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  if (param_3[3] != 0) {
    FUN_00a89868();
                    /* WARNING: Could not recover jumptable at 0x00a9046c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  return;
}




void FUN_00a9047c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)(param_3 + 0x18) == 0) {
    return;
  }
  uVar5 = 0;
  plVar6 = (long *)(param_1 + 0x18);
  do {
    plVar1 = (long *)*plVar6;
    if (plVar1 == (long *)0x0) break;
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) {
      cVar4 = '\0';
      goto LAB_00a904f8;
    }
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 7;
  } while (uVar5 < 2);
  cVar4 = '\x01';
LAB_00a904f8:
  if (cVar4 == *(char *)(param_3 + 0x20)) {
    FUN_00a898d0(*(undefined8 *)(param_3 + 0x18),param_2);
    return;
  }
  FUN_00a89868(*(undefined8 *)(param_3 + 0x18),param_2);
  FUN_00a8a6d0(DAT_031336c8 + 0x41060,*(undefined8 *)(param_3 + 0x18));
  *(char *)(param_3 + 0x20) = cVar4;
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    param_1 = param_1 + 0xa0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    param_1 = param_1 + 0x88;
  }
  FUN_00a89788(param_1,uVar3);
  FUN_00a89808(*(undefined8 *)(param_3 + 0x18),param_2);
  return;
}




void FUN_00a90580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0410;
  if (param_1[3] != 0) {
    FUN_00a8a6d0(DAT_031336c8 + 0x41060);
    return;
  }
  return;
}




void FUN_00a905b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d0410;
  if (param_1[3] != 0) {
    FUN_00a8a6d0(DAT_031336c8 + 0x41060);
  }
  operator_delete(param_1);
  return;
}




void FUN_00a90604(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00a8a6d0(DAT_031336c8 + 0x41060);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00a9064c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8c818(DAT_031336c8 + 0xf030);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a90680(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a90688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a9068c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a90694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_00a90698(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a906a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a906a4(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00d9d984(param_2 + 0x10);
  if (iVar1 == 1) {
    uVar3 = FUN_00d9d9a0(param_2 + 0x10,0);
    uVar2 = thunk_FUN_00da2eb4();
    *(undefined4 *)(param_3 + 0x18) = uVar2;
    thunk_FUN_00da2ee8(uVar3,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}




void FUN_00a90710(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00d9d984(param_2 + 0x10);
  if (iVar1 == 1) {
    uVar2 = FUN_00d9d9a0(param_2 + 0x10,0);
    thunk_FUN_00da2ee8(uVar2,*(undefined4 *)(param_3 + 0x18));
    return;
  }
  return;
}




void FUN_00a9075c(void)

{
  return;
}




void FUN_00a90764(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_00a90770(long param_1)

{
  FUN_00a7fc2c(*(undefined4 *)(param_1 + 0x10),0);
  return;
}




void FUN_00a9077c(long param_1)

{
  FUN_00a7fc2c(*(undefined4 *)(param_1 + 0x10),1);
  return;
}




void FUN_00a9078c(void)

{
  FUN_00a8515c(1);
  return;
}




void FUN_00a90794(void)

{
  FUN_00a8515c(0);
  return;
}




void FUN_00a907a0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8ccc8(DAT_031336c8 + 0xf030);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a907d4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a907dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a907e0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a907e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_00a907ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a907f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a907f8(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  lVar3 = FUN_01988738(DAT_02e3ef98,0);
  uVar2 = DAT_03214ce8;
  plVar5 = (long *)(lVar3 + 0x40);
  if (lVar3 == 0) {
    *(undefined8 *)(param_3 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x48);
    *(long **)(param_3 + 0x18) = plVar5;
    *(int *)(param_3 + 0x20) = iVar1;
    if (iVar1 == *(int *)(lVar3 + 0x48)) {
      uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
      goto LAB_00a90890;
    }
    *(undefined8 *)(param_3 + 0x18) = 0;
  }
  uVar4 = 0;
  *(undefined4 *)(param_3 + 0x20) = uVar2;
LAB_00a90890:
  FUN_009d31b4(uVar4,param_1[2],1);
  if (*(char *)((long)param_1 + 0x4c) != '\0') {
    plVar5 = *(long **)(param_3 + 0x18);
    uVar4 = 0;
    if (plVar5 != (long *)0x0) {
      if (*(int *)(param_3 + 0x20) == (int)plVar5[1]) {
        uVar4 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        *(undefined8 *)(param_3 + 0x18) = 0;
        uVar4 = 0;
        *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
      }
    }
    FUN_009d3950(0,uVar4);
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
  plVar5 = *(long **)(param_3 + 0x18);
  uVar4 = 0;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_3 + 0x20) == (int)plVar5[1]) {
      uVar4 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_3 + 0x18) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
    }
  }
  FUN_009d33ec(uVar4);
  return;
}




void FUN_00a90954(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_3 + 0x18);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_3 + 0x20) == (int)plVar4[1]) {
      lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (lVar2 != 0) {
        plVar4 = *(long **)(param_3 + 0x18);
        cVar1 = *(char *)(param_1 + 0x4d);
        uVar3 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar4[1]) {
            uVar3 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *(undefined8 *)(param_3 + 0x18) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
          }
        }
        if (cVar1 == '\0') {
          FUN_009d340c(uVar3);
          return;
        }
        FUN_009d3430();
        return;
      }
    }
    else {
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a90a14(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint local_a0 [2];
  long local_98;
  byte *local_90;
  long local_88;
  undefined4 local_80;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = *(long **)(param_3 + 0x18);
  if (plVar7 == (long *)0x0) goto LAB_00a90d70;
  if (*(int *)(param_3 + 0x20) != (int)plVar7[1]) {
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
    goto LAB_00a90d70;
  }
  lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
  if (lVar5 == 0) goto LAB_00a90d70;
  if (*(int *)(param_1 + 0x48) == 0) {
    (**(code **)(param_1 + 0x20))(param_2,*(undefined4 *)(param_1 + 0x40),&local_88);
    plVar7 = *(long **)(param_3 + 0x18);
    uVar6 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_3 + 0x20) == (int)plVar7[1]) {
        uVar6 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *(undefined8 *)(param_3 + 0x18) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
      }
    }
    FUN_009d34d4(uVar6,&local_88);
  }
  else {
    lVar5 = (**(code **)(param_1 + 0x18))(param_2);
    if (lVar5 == 0) {
      plVar7 = *(long **)(param_3 + 0x18);
      uVar6 = 0;
      if (plVar7 != (long *)0x0) {
        if (*(int *)(param_3 + 0x20) == (int)plVar7[1]) {
          uVar6 = (**(code **)(*plVar7 + 0x10))();
        }
        else {
          *(undefined8 *)(param_3 + 0x18) = 0;
          uVar6 = 0;
          *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
        }
      }
      FUN_01985ca8(uVar6);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 3) {
        plVar7 = *(long **)(param_3 + 0x18);
        uVar6 = 0;
        if (plVar7 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar7[1]) {
            uVar6 = (**(code **)(*plVar7 + 0x10))();
          }
          else {
            *(undefined8 *)(param_3 + 0x18) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
          }
        }
        FUN_009d3840(uVar6,lVar5,*(undefined8 *)(param_1 + 0x38),1);
      }
      else if (iVar1 == 2) {
        plVar7 = *(long **)(param_3 + 0x18);
        uVar6 = 0;
        if (plVar7 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar7[1]) {
            uVar6 = (**(code **)(*plVar7 + 0x10))();
          }
          else {
            *(undefined8 *)(param_3 + 0x18) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
          }
        }
        pbVar8 = *(byte **)(param_1 + 0x38);
        if (pbVar8 == (byte *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar10 = (uint)*pbVar8;
          uVar9 = 0x811c9dc5;
          if (*pbVar8 != 0) {
            do {
              pbVar8 = pbVar8 + 1;
              uVar9 = (uVar9 ^ uVar10) * 0x1000193;
              uVar10 = (uint)*pbVar8;
            } while (*pbVar8 != 0);
          }
        }
        local_88 = CONCAT44(local_88._4_4_,uVar9);
        FUN_009d373c(uVar6,lVar5,&local_88,1);
      }
      else if (iVar1 == 1) {
        plVar7 = *(long **)(param_3 + 0x18);
        uVar6 = 0;
        if (plVar7 != (long *)0x0) {
          if (*(int *)(param_3 + 0x20) == (int)plVar7[1]) {
            uVar6 = (**(code **)(*plVar7 + 0x10))();
          }
          else {
            *(undefined8 *)(param_3 + 0x18) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
          }
        }
        FUN_009d3654(uVar6,lVar5,1);
      }
    }
  }
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    local_88 = 0;
    local_80 = 0;
    (**(code **)(param_1 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x44),&local_88);
    plVar7 = *(long **)(param_3 + 0x18);
    uVar6 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_3 + 0x20) == (int)plVar7[1]) {
        uVar6 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *(undefined8 *)(param_3 + 0x18) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
      }
    }
    FUN_009d3db8(uVar6,&local_88);
    goto LAB_00a90d70;
  }
  if (*(code **)(param_1 + 0x30) == (code *)0x0) goto LAB_00a90d70;
  local_90 = (byte *)0x0;
  local_88 = 0;
  local_98 = 0;
  (**(code **)(param_1 + 0x30))(param_2,&local_88,&local_90,&local_98);
  lVar5 = local_98;
  if (local_88 == 0) goto LAB_00a90d70;
  if (local_90 == (byte *)0x0) {
    plVar7 = *(long **)(param_3 + 0x18);
    lVar3 = local_88;
    if (plVar7 == (long *)0x0) {
      uVar6 = 0;
    }
    else if (*(int *)(param_3 + 0x20) == (int)plVar7[1]) {
      uVar6 = (**(code **)(*plVar7 + 0x10))();
      lVar3 = local_88;
    }
    else {
      *(undefined8 *)(param_3 + 0x18) = 0;
      uVar6 = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
    }
    local_88 = lVar3;
    if (lVar5 == 0) {
      FUN_009d3b70(uVar6,lVar3);
    }
    else {
      uVar4 = FUN_01995208(local_98);
      FUN_009d3d6c(uVar6,lVar3,uVar4);
    }
    goto LAB_00a90d70;
  }
  plVar7 = *(long **)(param_3 + 0x18);
  if (plVar7 == (long *)0x0) {
LAB_00a90de4:
    uVar6 = 0;
LAB_00a90de8:
    uVar9 = (uint)*local_90;
    local_a0[0] = 0x811c9dc5;
    pbVar8 = local_90;
    if (*local_90 != 0) {
      do {
        uVar10 = (uint)pbVar8[1];
        local_a0[0] = (local_a0[0] ^ uVar9) * 0x1000193;
        uVar9 = uVar10;
        pbVar8 = pbVar8 + 1;
      } while (uVar10 != 0);
    }
  }
  else {
    if (*(int *)(param_3 + 0x20) != (int)plVar7[1]) {
      *(undefined8 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
      goto LAB_00a90de4;
    }
    uVar6 = (**(code **)(*plVar7 + 0x10))();
    if (local_90 != (byte *)0x0) goto LAB_00a90de8;
    local_a0[0] = 0;
  }
  FUN_009d3d8c(uVar6,local_88,local_a0);
LAB_00a90d70:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a90e84(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00a90e8c(long param_1)

{
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}




void FUN_00a90e98(long param_1)

{
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}




void FUN_00a90ea4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x48) = 1;
  return;
}




void FUN_00a90eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return;
}




void FUN_00a90ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 3;
  return;
}




void FUN_00a90edc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}




void FUN_00a90eec(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  return;
}




void FUN_00a90ef8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00a90f00(void)

{
  return;
}




void FUN_00a90f08(void)

{
  return;
}




void FUN_00a90f10(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8cf24(DAT_031336c8 + 0xf030);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a90f44(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a90f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_00a90f50(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a90f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_00a90f5c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a90f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_00a90f68(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d9d790(param_1 + 0x10);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x28;
  }
  puVar2 = &DAT_03214ce8;
  if (lVar4 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_3 + 0x18) = lVar1;
  *(undefined4 *)(param_3 + 0x20) = uVar3;
  FUN_00d9d98c(param_2 + 0x10,lVar4);
  return;
}




void FUN_00a90fc0(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(long **)(param_3 + 0x18);
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else if (*(int *)(param_3 + 0x20) == (int)plVar2[1]) {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
  }
  else {
    *(undefined8 *)(param_3 + 0x18) = 0;
    uVar3 = 0;
    *(undefined4 *)(param_3 + 0x20) = DAT_03214ce8;
  }
  FUN_00d9d98c(param_2 + 0x10,uVar3);
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  return;
}

