// functions/009f2 — 30 functions
#include "libGameKindred.h"




void FUN_009f202c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_009f2088();
  puVar2 = (uint *)FUN_00940aac();
  lVar4 = (ulong)*puVar2 << 5;
  puVar1 = *(undefined8 **)(puVar2 + 2);
  do {
    puVar3 = puVar1;
    if (lVar4 == 0) goto LAB_009f206c;
    lVar4 = lVar4 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480(puVar2,puVar3);
LAB_009f206c:
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_009f2088(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iStack_88;
  undefined8 local_70;
  void *local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x10);
  do {
    lVar2 = FUN_009f1a68(uVar3 & 0xffffffff);
    uVar5 = *(undefined8 *)(lVar2 + 8);
    uVar6 = *(undefined8 *)(lVar2 + 0x18);
    thunk_FUN_00e7051c(&local_70,lVar2 + 0x30);
    FUN_009f2318(auStack_60,lVar2 + 0x40);
    iStack_88 = (int)uVar6;
    if (iStack_88 == 2) {
      FUN_009371ac(*puVar4,uVar5);
    }
    else if (iStack_88 == 1) {
      FUN_009370dc(uVar5,*puVar4);
    }
    else if (iStack_88 == 0) {
      FUN_00936e48(uVar5,*(undefined1 *)puVar4);
    }
    FUN_009f1bec(auStack_60,1);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 != 0x22);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f2198(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_44;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = param_1 + (ulong)param_2 * 4;
  local_44 = param_2;
  local_40[0] = param_3;
  uVar2 = FUN_009f1b1c(lVar3 + 0x10,local_40);
  *(undefined4 *)(lVar3 + 0x10) = local_40[0];
  if ((uVar2 & 1) == 0) {
    FUN_009f2250(param_1,&local_44);
    param_2 = local_44;
  }
  lVar3 = FUN_009f1a68(param_2);
  if (*(char *)(lVar3 + 0x20) != '\0') {
    FUN_009277a4();
  }
  if (local_44 == 1) {
    FUN_0092dba4();
  }
  else if (local_44 == 0) {
    uVar4 = FUN_00e7d4c4();
    FUN_00e7d248(uVar4,(undefined1)local_40[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f2250(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009f22bc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_0092f28c();
  if ((iVar1 == 1) && (*(int *)(param_1 + 0x18) == 1)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_0092dba4();
  return;
}




void FUN_009f22f4(undefined8 param_1)

{
  FUN_009eeb40();
  FUN_009f1dc8(param_1);
  return;
}




void FUN_009f2318(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009f1c78(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    puVar2 = *(undefined4 **)(param_2 + 2);
    puVar3 = *(undefined4 **)(param_1 + 2);
    puVar4 = puVar2 + (ulong)*param_2 * 10;
    do {
      *puVar3 = *puVar2;
      thunk_FUN_00e7051c(puVar3 + 2,puVar2 + 2);
      thunk_FUN_00e7051c(puVar3 + 6,puVar2 + 6);
      puVar2 = puVar2 + 10;
      puVar3 = puVar3 + 10;
    } while (puVar2 != puVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_009f23b4(undefined8 param_1)

{
  FUN_009eeb40();
  FUN_009f1dc8(param_1);
  return;
}




void FUN_009f23d8(void)

{
  undefined8 *puVar1;
  
  if (DAT_03130898 != (undefined8 *)0x0) {
    return;
  }
  puVar1 = operator_new(0xb70);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_009f4e8c(puVar1 + 2);
  DAT_03130898 = puVar1;
  FUN_009f242c(puVar1);
  FUN_009f2ff0(DAT_03130898);
  return;
}




void FUN_009f242c(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),1,0);
    uVar4 = FUN_00e6a488();
    if ((uVar4 & 1) == 0) {
LAB_009f2480:
      FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),1,0);
      uVar3 = FUN_01980d64();
      *(undefined4 *)(lVar1 + 0x30) = uVar3;
      FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),1,1);
      uVar2 = FUN_00cb68c0();
      *(undefined1 *)(lVar1 + 0x38) = uVar2;
    }
    else {
      FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),1,1);
      uVar4 = FUN_00e6a488();
      if ((uVar4 & 1) == 0) goto LAB_009f2480;
    }
    FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),0,0);
    uVar4 = FUN_00e6a488();
    if ((uVar4 & 1) == 0) {
LAB_009f24f0:
      FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),0,0);
      uVar3 = FUN_01980d64();
      *(undefined4 *)(param_1 + lVar5 + 0x3c) = uVar3;
      FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),0,1);
      uVar2 = FUN_00cb68c0();
      *(undefined1 *)(param_1 + lVar5 + 0x44) = uVar2;
    }
    else {
      FUN_009f2e58(param_1,*(undefined8 *)(lVar1 + 0x18),0,1);
      uVar4 = FUN_00e6a488();
      if ((uVar4 & 1) == 0) goto LAB_009f24f0;
    }
    lVar5 = lVar5 + 0x38;
    if (lVar5 == 0x5b0) {
      return;
    }
  } while( true );
}




void thunk_FUN_009f2ff0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_009f3218();
  lVar2 = FUN_01980b80(0xcc7f156e);
  if (lVar2 == 0) {
    lVar2 = FUN_01980b5c(0xcc7f156e);
  }
  FUN_01981618(auStack_50,0xdc6ab1ed,0,0x3d,0,0);
  FUN_019818cc(lVar2,auStack_50);
  FUN_01981660(auStack_50,0xdc6ab1ed,0,1);
  FUN_019818cc(lVar2,auStack_50);
  FUN_01981988(lVar2,0xdc6ab1ed,0,FUN_009f3b24);
  lVar2 = FUN_01980b80(0xd9abc88a);
  if (lVar2 == 0) {
    lVar2 = FUN_01980b5c(0xd9abc88a,0);
  }
  FUN_009f2c20(param_1,lVar2,"close_shop",0,param_1 + 800,0,FUN_009f3b88);
  lVar2 = FUN_01980b80(0xd0ab9e9c);
  if (lVar2 == 0) {
    lVar2 = FUN_01980b5c(0xd0ab9e9c);
  }
  FUN_009f2c20(param_1,lVar2,"hudScoreboard",0,param_1 + 0x2b0,0,FUN_009f3bec);
  FUN_009f2c20(param_1,lVar2,"release_scoreboard",2,param_1 + 0x2b0,0,FUN_009f3c50);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f254c(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03130898;
  if (DAT_03130898 != (void *)0x0) {
    if (*(void **)((long)DAT_03130898 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_03130898 + 8));
    }
    operator_delete(pvVar1);
    DAT_03130898 = (void *)0x0;
  }
  return;
}




undefined8 FUN_009f2588(void)

{
  return DAT_03130898;
}




void FUN_009f2594(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_009f4e8c(param_1 + 2);
  return;
}




long FUN_009f25a4(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x38 + 0x10;
}




void FUN_009f25b4(long param_1)

{
  long lVar1;
  int iVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009f5b48(param_1 + 0x10);
  iVar2 = 0;
  do {
    FUN_009f2634(param_1,iVar2);
    local_3c = iVar2;
    FUN_009f272c(param_1,&local_3c);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x1a);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f2634(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar6 = param_1 + (param_2 & 0xffffffff) * 0x38;
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  uVar1 = *(undefined4 *)(lVar6 + 0x3c);
  uVar2 = *(undefined1 *)(lVar6 + 0x38);
  uVar3 = *(undefined1 *)(lVar6 + 0x44);
  FUN_009f2f28(param_1,uVar7,*(undefined4 *)(lVar6 + 0x30),0,1,0);
  uVar5 = FUN_00cb6834(uVar2);
  FUN_00969b40(auStack_c8,"%s_Primary_Key_Mod",uVar7);
  FUN_0093727c(auStack_c8,uVar5);
  FUN_009f2f28(param_1,uVar7,uVar1,0,0,0);
  uVar5 = FUN_00cb6834(uVar3);
  FUN_00969b40(auStack_c8,"%s_Secondary_Key_Mod",uVar7);
  FUN_0093727c(auStack_c8,uVar5);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f272c(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009f2798(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  long lVar5;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar5 = param_1 + 0x10 + (param_2 & 0xffffffff) * 0x38;
  local_5c = (undefined4)param_2;
  uVar1 = *(undefined4 *)(lVar5 + 0x5dc);
  uVar2 = *(undefined4 *)(lVar5 + 0x5e0);
  uVar3 = *(undefined1 *)(lVar5 + 0x5e4);
  FUN_009f285c(param_1,param_2,*(undefined4 *)(lVar5 + 0x5d0),*(undefined4 *)(lVar5 + 0x5d4),
               *(undefined1 *)(lVar5 + 0x5d8));
  FUN_009f285c(param_1,extraout_x1,uVar1,uVar2,uVar3);
  FUN_009f5b80(param_1 + 0x10,param_2 & 0xffffffff);
  FUN_009f2634(param_1,param_2 & 0xffffffff);
  FUN_009f272c(param_1,&local_5c);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f285c(long param_1,undefined8 param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar7 = 0;
  lVar8 = 0;
  do {
    if (param_3 < 0x69) {
      iVar1 = *(int *)(param_1 + lVar7 + 0x30);
      if (param_5 == '\0') {
        bVar4 = iVar1 == param_3;
        if (bVar4) {
          local_7c = *(uint *)(param_1 + lVar7 + 0x10);
          lVar5 = param_1 + (ulong)local_7c * 0x38;
          *(undefined8 *)(lVar5 + 0x30) = 0x300000069;
          *(undefined1 *)(lVar5 + 0x38) = 0;
          FUN_009f2634(param_1);
          FUN_009f272c(param_1,&local_7c);
        }
        if (*(int *)(param_1 + lVar7 + 0x3c) != param_3) goto LAB_009f2ad8;
LAB_009f2a5c:
        local_7c = *(uint *)(param_1 + lVar7 + 0x10);
code_r0x009f2a64:
        lVar5 = param_1 + (ulong)local_7c * 0x38;
        *(undefined8 *)(lVar5 + 0x3c) = 0x300000069;
        *(undefined1 *)(lVar5 + 0x44) = 0;
        FUN_009f2634(param_1);
        FUN_009f272c(param_1,&local_7c);
        lVar5 = lVar8 * 0x38;
      }
      else {
        bVar4 = false;
        if (iVar1 == param_3) {
          bVar4 = false;
          if (*(char *)(param_1 + lVar7 + 0x38) == param_5) {
            local_7c = *(uint *)(param_1 + lVar7 + 0x10);
            lVar5 = param_1 + (ulong)local_7c * 0x38;
            *(undefined8 *)(lVar5 + 0x30) = 0x300000069;
            *(undefined1 *)(lVar5 + 0x38) = 0;
            FUN_009f2634(param_1);
            FUN_009f272c(param_1,&local_7c);
            bVar4 = true;
          }
        }
        if (*(int *)(param_1 + lVar7 + 0x3c) == param_3) {
LAB_009f29a8:
          cVar2 = *(char *)(param_1 + lVar7 + 0x44);
LAB_009f29fc:
          if (cVar2 == param_5) {
            local_7c = *(uint *)(param_1 + lVar7 + 0x10);
            goto code_r0x009f2a64;
          }
        }
LAB_009f2ad8:
        lVar5 = lVar7;
        if (!bVar4) goto LAB_009f2af0;
      }
      FUN_009f272c(param_1,param_1 + lVar5 + 0x10);
    }
    else {
      if (param_4 < 3) {
        iVar1 = *(int *)(param_1 + lVar7 + 0x34);
        if (param_5 == '\0') {
          bVar4 = iVar1 == param_4;
          if (bVar4) {
            local_7c = *(uint *)(param_1 + lVar7 + 0x10);
            lVar5 = param_1 + (ulong)local_7c * 0x38;
            *(undefined8 *)(lVar5 + 0x30) = 0x300000069;
            *(undefined1 *)(lVar5 + 0x38) = 0;
            FUN_009f2634(param_1);
            FUN_009f272c(param_1,&local_7c);
          }
          if (*(int *)(param_1 + lVar7 + 0x40) == param_4) goto LAB_009f2a5c;
        }
        else {
          bVar4 = false;
          if (iVar1 == param_4) {
            bVar4 = false;
            if (*(char *)(param_1 + lVar7 + 0x38) == param_5) {
              local_7c = *(uint *)(param_1 + lVar7 + 0x10);
              lVar5 = param_1 + (ulong)local_7c * 0x38;
              *(undefined8 *)(lVar5 + 0x30) = 0x300000069;
              *(undefined1 *)(lVar5 + 0x38) = 0;
              FUN_009f2634(param_1);
              FUN_009f272c(param_1,&local_7c);
              bVar4 = true;
            }
          }
          if (*(int *)(param_1 + lVar7 + 0x40) == param_4) goto LAB_009f29a8;
        }
        goto LAB_009f2ad8;
      }
      if (param_5 != '\0') {
        lVar5 = param_1 + lVar7;
        bVar4 = *(char *)(lVar5 + 0x38) == param_5;
        if (bVar4) {
          local_7c = *(uint *)(lVar5 + 0x10);
          lVar6 = param_1 + (ulong)local_7c * 0x38;
          *(undefined8 *)(lVar6 + 0x30) = 0x300000069;
          *(undefined1 *)(lVar6 + 0x38) = 0;
          FUN_009f2634(param_1);
          FUN_009f272c(param_1,&local_7c);
        }
        cVar2 = *(char *)(lVar5 + 0x44);
        goto LAB_009f29fc;
      }
    }
LAB_009f2af0:
    lVar7 = lVar7 + 0x38;
    lVar8 = lVar8 + 1;
    if (lVar7 == 0x5b0) {
      if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_009f2b38(undefined8 param_1,ulong param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_009f285c(param_1,param_2,param_4,param_5,param_6);
  FUN_009f2ba0(param_1,param_2 & 0xffffffff,param_3 & 1,param_4,param_5,param_6);
  return;
}




void FUN_009f2ba0(long param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 param_6)

{
  long lVar1;
  long lVar2;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + (ulong)param_2 * 0x38;
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(lVar2 + 0x3c) = param_4;
    *(undefined4 *)(lVar2 + 0x40) = param_5;
    *(undefined1 *)(lVar2 + 0x44) = param_6;
  }
  else {
    *(undefined4 *)(lVar2 + 0x30) = param_4;
    *(undefined4 *)(lVar2 + 0x34) = param_5;
    *(undefined1 *)(lVar2 + 0x38) = param_6;
  }
  local_2c = param_2;
  FUN_009f2634(param_1);
  FUN_009f272c(param_1,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f2c20(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  uVar7 = 0;
  if (param_4 != 2) {
    uVar4 = *(undefined1 *)(param_5 + 0x28);
    uVar7 = *(undefined1 *)(param_5 + 0x34);
  }
  iVar1 = -(uint)(param_4 == 2);
  if (*(int *)(param_5 + 0x24) == 3) {
    FUN_009f2df8(auStack_80,param_1,param_3,param_4,*(undefined4 *)(param_5 + 0x20),uVar4,iVar1);
  }
  else {
    FUN_009f2dac(auStack_80,param_1,param_3,param_4,*(int *)(param_5 + 0x24),uVar4,iVar1);
  }
  uVar3 = FUN_019818cc(param_2,auStack_80);
  if (*(int *)(param_5 + 0x30) == 3) {
    FUN_009f2df8(auStack_80,uVar3,param_3,param_4,*(undefined4 *)(param_5 + 0x2c),uVar7,iVar1);
  }
  else {
    FUN_009f2dac(auStack_80,uVar3,param_3,param_4,*(int *)(param_5 + 0x30),uVar7,iVar1);
  }
  FUN_019818cc(param_2,auStack_80);
  if (param_3 == (byte *)0x0) {
    uVar5 = 0;
  }
  else if (*param_3 == 0) {
    uVar5 = 0x811c9dc5;
  }
  else {
    uVar5 = 0x811c9dc5;
    uVar6 = (uint)*param_3;
    do {
      param_3 = param_3 + 1;
      uVar5 = (uVar5 ^ uVar6) * 0x1000193;
      uVar6 = (uint)*param_3;
    } while (*param_3 != 0);
  }
  FUN_01981988(param_2,uVar5,param_6,param_7);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009f2dac(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_3 != (byte *)0x0) {
    if (*param_3 == 0) {
      FUN_0198163c(param_1,0x811c9dc5);
      return;
    }
    uVar1 = 0x811c9dc5;
    uVar2 = (uint)*param_3;
    do {
      param_3 = param_3 + 1;
      uVar1 = (uVar1 ^ uVar2) * 0x1000193;
      uVar2 = (uint)*param_3;
    } while (*param_3 != 0);
  }
  FUN_0198163c(param_1,uVar1);
  return;
}




void FUN_009f2df8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_3 != (byte *)0x0) {
    if (*param_3 == 0) {
      FUN_01981618(param_1,0x811c9dc5);
      return;
    }
    uVar1 = 0x811c9dc5;
    uVar2 = (uint)*param_3;
    do {
      param_3 = param_3 + 1;
      uVar1 = (uVar1 ^ uVar2) * 0x1000193;
      uVar2 = (uint)*param_3;
    } while (*param_3 != 0);
  }
  FUN_01981618(param_1,uVar1);
  return;
}




void FUN_009f2e44(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_009f2ba0(param_1,param_2,param_3 & 1,0x69,3,0);
  return;
}




void * FUN_009f2e58(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  byte local_150 [16];
  void *local_140;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pcVar1 = "%s_Secondary_Key_Mod";
  pcVar2 = "%s_Primary_Key_Mod";
  if ((param_4 & 1) == 0) {
    pcVar1 = "%s_Secondary_Key";
    pcVar2 = "%s_Primary_Key";
  }
  if ((param_3 & 1) == 0) {
    pcVar2 = pcVar1;
  }
  FUN_00969b40(auStack_b8,pcVar2,param_2);
  FUN_009375d4(auStack_b8,auStack_138,0x80,0);
  FUN_008fa54c(local_150,auStack_138);
  if ((local_150[0] & 1) == 0) {
    local_140 = (void *)((ulong)local_150 | 1);
  }
  else {
    operator_delete(local_140);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_140;
}




void FUN_009f2f28(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [128];
  long local_38;
  
  bVar4 = (param_6 & 1) == 0;
  pcVar2 = "%s_Primary_Key_Mod";
  if (bVar4) {
    pcVar2 = "%s_Primary_Key";
  }
  lVar3 = tpidr_el0;
  pcVar1 = "%s_Secondary_Key_Mod";
  if (bVar4) {
    pcVar1 = "%s_Secondary_Key";
  }
  local_38 = *(long *)(lVar3 + 0x28);
  if ((param_5 & 1) == 0) {
    pcVar2 = pcVar1;
  }
  if (param_3 == 0x69) {
    uVar5 = FUN_00cb6834(param_4);
  }
  else {
    uVar5 = FUN_01980d54(param_3);
  }
  FUN_00969b40(auStack_b8,pcVar2,param_2);
  FUN_0093727c(auStack_b8,uVar5);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f2fe4(undefined8 param_1,undefined4 param_2,uint param_3)

{
  FUN_01980b94(param_2,param_3 & 1);
  return;
}




void FUN_009f2ff0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009f3218();
  lVar2 = FUN_01980b80(0xcc7f156e);
  if (lVar2 == 0) {
    lVar2 = FUN_01980b5c(0xcc7f156e);
  }
  FUN_01981618(auStack_50,0xdc6ab1ed,0,0x3d,0,0);
  FUN_019818cc(lVar2,auStack_50);
  FUN_01981660(auStack_50,0xdc6ab1ed,0,1);
  FUN_019818cc(lVar2,auStack_50);
  FUN_01981988(lVar2,0xdc6ab1ed,0,FUN_009f3b24);
  lVar2 = FUN_01980b80(0xd9abc88a);
  if (lVar2 == 0) {
    lVar2 = FUN_01980b5c(0xd9abc88a,0);
  }
  FUN_009f2c20(param_1,lVar2,"close_shop",0,param_1 + 800,0,FUN_009f3b88);
  lVar2 = FUN_01980b80(0xd0ab9e9c);
  if (lVar2 == 0) {
    lVar2 = FUN_01980b5c(0xd0ab9e9c);
  }
  FUN_009f2c20(param_1,lVar2,"hudScoreboard",0,param_1 + 0x2b0,0,FUN_009f3bec);
  FUN_009f2c20(param_1,lVar2,"release_scoreboard",2,param_1 + 0x2b0,0,FUN_009f3c50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

