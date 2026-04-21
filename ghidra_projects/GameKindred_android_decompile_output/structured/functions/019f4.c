// functions/019f4 — 3 functions
#include "libGameKindred.h"




undefined8 FUN_019f4060(long *param_1,undefined8 *param_2,int *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int local_5c;
  long local_58;
  
  uVar2 = *(undefined4 *)(param_2 + 0x3a);
  uVar7 = *param_2;
  local_5c = 0;
  if (param_3 == (int *)0x0) {
    param_3 = &local_5c;
  }
  else {
    *param_3 = 0;
  }
  iVar8 = 0;
  plVar1 = param_2 + 0xa9;
  *param_1 = 0;
  do {
    while( true ) {
      if (*param_3 != 0) {
        uVar4 = 0;
        goto LAB_019f4170;
      }
      lVar5 = FUN_019e88d4(plVar1);
      if (lVar5 < 1) {
        FUN_019ca0fc(uVar7,"FTP response timeout");
        return 0x1c;
      }
      if ((1 < iVar8) || (*plVar1 == 0)) break;
LAB_019f40fc:
      uVar4 = FUN_019f41b8(uVar2,plVar1,param_3,&local_58);
      if ((int)uVar4 != 0) {
LAB_019f4170:
        *(undefined1 *)(param_2 + 0xad) = 0;
        return uVar4;
      }
      iVar3 = 0;
      if ((local_58 == 0) && (iVar3 = 0, *plVar1 != 0)) {
        iVar3 = iVar8 + 1;
      }
      iVar8 = iVar3;
      *param_1 = *param_1 + local_58;
    }
    if (999 < lVar5) {
      lVar5 = 1000;
    }
    iVar3 = FUN_019c14c8(uVar2,0xffffffff,0xffffffff,lVar5);
    if (iVar3 != 0) {
      if (iVar3 == -1) {
        puVar6 = (undefined4 *)__errno();
        FUN_019ca0fc(uVar7,"FTP response aborted due to select/poll error: %d",*puVar6);
        return 0x38;
      }
      goto LAB_019f40fc;
    }
    iVar3 = FUN_019c3f38(param_2);
    if (iVar3 != 0) {
      return 0x2a;
    }
  } while( true );
}




undefined8 FUN_019f41b8(undefined8 param_1,long param_2,int *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int local_24;
  
  plVar3 = *(long **)(param_2 + 0x58);
  lVar2 = *plVar3;
  uVar1 = FUN_019e8cb8(param_1,param_2,&local_24);
  *(int *)(lVar2 + 0x8b68) = local_24;
  if (param_3 != (int *)0x0) {
    *param_3 = local_24;
  }
  if (local_24 == 0x1a5) {
    FUN_019c9f64(lVar2,"We got a 421 - timeout!\n");
    uVar1 = 0x1c;
    *(undefined4 *)(plVar3 + 0xbf) = 0;
  }
  return uVar1;
}




undefined8
FUN_019f4220(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 *local_480;
  undefined1 **ppuStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined2 uStack_438;
  undefined1 auStack_436 [1022];
  long local_38;
  
  puStack_470 = &local_4b0;
  ppuStack_478 = &local_480;
  uStack_468 = 0xffffff80ffffffd0;
  local_4b0 = param_3;
  uStack_4a8 = param_4;
  local_4a0 = param_5;
  uStack_498 = param_6;
  local_490 = param_7;
  uStack_488 = param_8;
  local_480 = (undefined1 *)register0x00000008;
  iVar1 = FUN_019d4a10(&uStack_438,0x3fd,param_2,&local_480);
  auStack_436[iVar1] = 0;
  *(undefined2 *)((long)&uStack_438 + (long)iVar1) = 0xa0d;
  local_38 = 0;
  lVar3 = (long)iVar1 + 2;
  uVar2 = FUN_019ca368(param_1,(int)param_1[0x3a],&uStack_438,lVar3,&local_38);
  if ((int)uVar2 == 0) {
    puVar4 = &uStack_438;
    do {
      if (*(char *)(*param_1 + 0x520) != '\0') {
        FUN_019ca014(*param_1,2,puVar4,local_38,param_1);
      }
      lVar3 = lVar3 - local_38;
      if (lVar3 == 0) {
        return 0;
      }
      puVar4 = (undefined2 *)((long)puVar4 + local_38);
      uVar2 = FUN_019ca368(param_1,(int)param_1[0x3a],puVar4,lVar3,&local_38);
    } while ((int)uVar2 == 0);
  }
  return uVar2;
}

