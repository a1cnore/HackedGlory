// functions/019cf — 13 functions
#include "libGameKindred.h"




undefined8 FUN_019cf8e8(long *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (lVar2 = *param_1, lVar2 != 0)) {
    if (param_1[0xb] != 0) {
      FUN_019c3c58(lVar2);
      param_1[0xb] = 0;
    }
    FUN_019c35dc(lVar2);
    FUN_019ead00(param_1);
    if (*(code **)(param_1[100] + 0x60) != (code *)0x0) {
      (**(code **)(param_1[100] + 0x60))(param_1,param_2 & 1);
    }
    FUN_019c9f64(lVar2,"Closing connection %ld\n",param_1[10]);
    FUN_019c2114(*(undefined8 *)(lVar2 + 0x900),param_1);
    thunk_FUN_019ed194(param_1,0);
    uVar1 = FUN_019be9cc(*(undefined8 *)(lVar2 + 0x60));
    if ((uVar1 & 1) != 0) {
      FUN_019cf9ac(param_1[0x73]);
      FUN_019cf9ac(param_1[0x74]);
    }
    FUN_019cfa14(param_1);
  }
  return 0;
}




void FUN_019cf9ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    while (plVar1 != (long *)0x0) {
      plVar2 = (long *)plVar1[2];
      *(undefined1 *)(*plVar1 + 0x8ad1) = 1;
      FUN_019be9e0();
      FUN_019da474(param_1,plVar1,0);
      plVar1 = plVar2;
    }
  }
  return;
}




void FUN_019cfa14(long param_1)

{
  if (param_1 != 0) {
    thunk_FUN_019ed194(param_1,0);
    thunk_FUN_019ed194(param_1,1);
    if (*(int *)(param_1 + 0x1d4) != -1) {
      FUN_019bd51c(param_1);
    }
    if (*(int *)(param_1 + 0x1d0) != -1) {
      FUN_019bd51c(param_1);
    }
    if (*(int *)(param_1 + 0x1d8) != -1) {
      FUN_019bd51c(param_1);
    }
    if (*(int *)(param_1 + 0x1dc) != -1) {
      FUN_019bd51c(param_1);
    }
    FUN_019eaf4c(param_1);
    if (*(long *)(param_1 + 0x170) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    if (*(long *)(param_1 + 0x178) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    if (*(long *)(param_1 + 0x180) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    if (*(long *)(param_1 + 400) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 400) = 0;
    }
    if (*(long *)(param_1 + 0x198) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    if (*(long *)(param_1 + 0x340) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x340) = 0;
    }
    if (*(long *)(param_1 + 0x348) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    if (*(long *)(param_1 + 0x358) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
    if (*(long *)(param_1 + 0x350) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x350) = 0;
    }
    if (*(long *)(param_1 + 0x388) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x388) = 0;
    }
    if (*(long *)(param_1 + 0x360) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x360) = 0;
    }
    if (*(long *)(param_1 + 0x368) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x368) = 0;
    }
    if (*(long *)(param_1 + 0x370) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    if (*(long *)(param_1 + 0x378) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x378) = 0;
    }
    if (*(long *)(param_1 + 0x380) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    if (*(long *)(param_1 + 0x538) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x538) = 0;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    if (*(long *)(param_1 + 0x3a8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x3a8) = 0;
    }
    FUN_019da520(*(undefined8 *)(param_1 + 0x398),0);
    FUN_019da520(*(undefined8 *)(param_1 + 0x3a0),0);
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    if (*(long *)(param_1 + 0x6a8) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x6a8) = 0;
    }
    FUN_019c2984(param_1 + 600);
    (*(code *)PTR_free_02bf74b0)(param_1);
    return;
  }
  return;
}




undefined4 FUN_019cfd34(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_019da3c4(param_2,*(undefined8 *)(param_2 + 8),param_1);
  uVar2 = 0x1b;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_019cfd64(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_019da474(param_2,plVar1,0);
  return 1;
}




void FUN_019cfdac(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0x394) == '\0') {
    bVar1 = true;
  }
  else {
    lVar4 = 0;
    if ((long *)**(long **)(param_2 + 0x3a0) != (long *)0x0) {
      lVar4 = *(long *)**(long **)(param_2 + 0x3a0);
    }
    bVar1 = lVar4 != param_1;
  }
  if (*(char *)(param_2 + 0x395) == '\0') {
    bVar2 = true;
  }
  else {
    lVar4 = 0;
    if ((long *)**(long **)(param_2 + 0x398) != (long *)0x0) {
      lVar4 = *(long *)**(long **)(param_2 + 0x398);
    }
    bVar2 = lVar4 != param_1;
  }
  iVar3 = FUN_019cfd64(param_1,*(undefined8 *)(param_2 + 0x3a0));
  if (!bVar1 && iVar3 != 0) {
    *(undefined1 *)(param_2 + 0x394) = 0;
  }
  iVar3 = FUN_019cfd64(param_1,*(undefined8 *)(param_2 + 0x398));
  if (!bVar2 && iVar3 != 0) {
    *(undefined1 *)(param_2 + 0x395) = 0;
  }
  return;
}




undefined8 FUN_019cfe64(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) && (*(char *)(param_1 + 0x2e2) != '\0')) {
    switch(*(undefined4 *)(param_1 + 0x1a0)) {
    case 4:
      uVar1 = FUN_019ddf00(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0xc0),
                           *(undefined4 *)(param_1 + 0xf8),0,param_1,0);
      return uVar1;
    case 5:
    case 7:
      uVar1 = FUN_019de30c(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                           *(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xf8),0,param_1
                          );
      return uVar1;
    case 6:
      uVar1 = FUN_019ddf00(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0xc0),
                           *(undefined4 *)(param_1 + 0xf8),0,param_1,1);
      return uVar1;
    }
  }
  return 0;
}




void FUN_019cfef0(long *param_1)

{
  long lVar1;
  
  if (*(char *)(*param_1 + 0x520) != '\0') {
    lVar1 = 200;
    if (*(char *)((long)param_1 + 0x2e2) != '\0') {
      lVar1 = 0xe8;
    }
    FUN_019c9f64(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",
                 *(undefined8 *)((long)param_1 + lVar1),param_1 + 0xf,param_1[0x1e],param_1[10]);
    return;
  }
  return;
}




undefined8 FUN_019cff34(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 800) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019cff40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_019cff4c(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 800) + 0x48);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019cff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  return 0;
}




undefined8 FUN_019cff68(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 800) + 0x30);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x019cff7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  *param_2 = 1;
  return 0;
}




undefined8 FUN_019cff90(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 800) + 0x38);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x019cffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  *param_2 = 1;
  return 0;
}




undefined8 FUN_019cffb8(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x2e9) == '\0') {
    if (*(char *)(param_1 + 0x2eb) != '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x2eb) != '\0') {
    if (*(long *)(*(long *)(param_1 + 800) + 0x30) != 0) {
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
  uVar1 = FUN_019ea0a4(param_1);
  if (((int)uVar1 == 0) &&
     (((*(char *)(param_1 + 0x2ed) == '\0' || (*(char *)(param_1 + 0x2e3) == '\0')) ||
      (uVar1 = 0, *(int *)(param_1 + 0x6b8) == 2)))) {
    pcVar2 = *(code **)(*(long *)(param_1 + 800) + 0x28);
    if (pcVar2 == (code *)0x0) {
      *param_2 = 1;
    }
    else {
      uVar1 = (*pcVar2)(param_1,param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x2eb) = 1;
  }
  return uVar1;
}

