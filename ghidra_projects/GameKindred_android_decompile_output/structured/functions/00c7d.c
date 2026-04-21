// functions/00c7d — 19 functions
#include "libGameKindred.h"




void FUN_00c7d01c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803090;
  if ((void *)param_1[0x7d9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7d9]);
    param_1[0x7d9] = 0;
    param_1[0x7d8] = 0;
  }
  FUN_00b27cec(param_1 + 0x7bb);
  FUN_00ed7b24(param_1 + 0x725);
  param_1[0x707] = &PTR_FUN_028266f0;
  param_1[0x71e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x721);
  FUN_00f13d08(param_1 + 0x707);
  param_1[0x6e9] = &PTR_FUN_028266f0;
  param_1[0x700] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x703);
  FUN_00f13d08(param_1 + 0x6e9);
  FUN_00f13d08(param_1 + 0x6d2);
  param_1[0x6b4] = &PTR_FUN_028266f0;
  param_1[0x6cb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6ce);
  FUN_00f13d08(param_1 + 0x6b4);
  thunk_FUN_00ed5534(param_1 + 0x56f);
  FUN_00aad654(param_1 + 0x3f5);
  FUN_00aad654(param_1 + 0x27b);
  FUN_00aad654(param_1 + 0x101);
  FUN_00f0d3a4(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_028266f0;
  param_1[0xd4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd7);
  FUN_00f13d08(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_028266f0;
  param_1[0xb6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb9);
  FUN_00f13d08(param_1 + 0x9f);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7d1bc(void *param_1)

{
  FUN_00c7d01c();
  operator_delete(param_1);
  return;
}




void FUN_00c7d1e0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_88;
  long *plStack_80;
  long *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_028031d8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_3 + 0x35;
  FUN_00b1571c(plVar2);
  plVar3 = param_3 + 0xe2;
  FUN_00f0d160(plVar3);
  *(undefined1 *)((long)param_3 + 0x84c) = 0;
  *(undefined1 *)(param_3 + 0x10b) = 0;
  *(undefined4 *)((long)param_3 + 0x85c) = 0;
  *(undefined4 *)((long)param_3 + 0x844) = 0x69;
  *(undefined2 *)(param_3 + 0x10c) = 1;
  param_3[0x10a] = 0x300000069;
  *(undefined1 *)((long)param_3 + 0x862) = 1;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  FUN_00f13f18(param_3,&DAT_0313c208);
  local_60 = DAT_03210f58;
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) | 0x10;
  local_68 = 1;
  plVar4 = param_3 + 1;
  local_88 = FUN_00c7d4c4;
  local_78 = (long *)0x0;
  local_70 = (code *)0x0;
  plStack_80 = param_3;
  FUN_009693a0(plVar4,&local_88);
  local_88 = FUN_00c7d4c4;
  local_60 = DAT_03210f70;
  local_70 = (code *)0x0;
  local_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_3;
  FUN_009693a0(plVar4,&local_88);
  local_60 = DAT_03210f94;
  local_88 = thunk_FUN_00c7e020;
  local_70 = (code *)0x0;
  local_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_3;
  FUN_009693a0(plVar4,&local_88);
  local_60 = DAT_03210f98;
  local_88 = thunk_FUN_00c7e074;
  local_70 = (code *)0x0;
  local_68 = 0;
  local_78 = (long *)0x0;
  plStack_80 = param_3;
  FUN_009693a0(plVar4,&local_88);
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  local_88 = (code *)CONCAT44(param_2,uVar6);
  FUN_00f13f18(plVar1,&local_88);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_0313c210,2);
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00b1574c(uVar7,plVar2);
  if ((*(uint *)((long)param_3 + 0x22c) & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x22c) = *(uint *)((long)param_3 + 0x22c) & 0xffff807f;
    FUN_0091ada4(plVar2);
  }
  local_88 = (code *)CONCAT44(local_88._4_4_,0x7fffffff);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&local_88);
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0db64(uVar7,0,0x3f800000,plVar3);
  uVar7 = FUN_009f2588();
  local_88 = (code *)0x0;
  local_70 = thunk_FUN_00c7e0c8;
  plStack_80 = param_3;
  local_78 = param_3;
  FUN_00c7f1a0(uVar7,&local_88);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7d4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c7df50(param_1,param_2,param_5);
  return;
}




void FUN_00c7d4d4(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_028031d8;
  puVar2 = (uint *)FUN_009f2588();
  lVar4 = (ulong)*puVar2 << 5;
  lVar1 = *(long *)(puVar2 + 2);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00c7d52c;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00c7f2c0(puVar2,lVar3);
LAB_00c7d52c:
  FUN_00f0d3a4(param_1 + 0xe2);
  param_1[0x35] = &PTR_FUN_027dc7d8;
  param_1[0xc4] = &PTR_FUN_028266f0;
  param_1[0xdb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xde);
  FUN_00f13d08(param_1 + 0xc4);
  param_1[0xa6] = &PTR_FUN_028266f0;
  param_1[0xbd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_028266f0;
  param_1[0x9f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x88);
  param_1[0x6a] = &PTR_FUN_028266f0;
  param_1[0x81] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x84);
  FUN_00f13d08(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7d620(void *param_1)

{
  FUN_00c7d4d4();
  operator_delete(param_1);
  return;
}




void FUN_00c7d644(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int local_6c;
  ulong local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x860) != '\0') && (*(char *)(param_1 + 0x861) != '\0')) {
    uVar6 = 0;
    uVar5 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    do {
      local_68 = CONCAT44(local_68._4_4_,uVar6);
      if (((uVar6 & 0x7fffffff) != 0x3d) && ((uVar6 & 0x7fffffff) != 0x68)) {
        uVar3 = FUN_01980664(uVar6);
        if ((uVar3 & 1) != 0) {
          uVar4 = FUN_01980d54(local_68 & 0xffffffff);
          printf("KEY TRIGGERED: %s\n",uVar4);
          *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + 1;
        }
        uVar3 = FUN_01980684(local_68 & 0xffffffff);
        if (((uVar3 & 1) != 0) && (0 < *(int *)(param_1 + 0x85c))) {
          uVar4 = FUN_01980d54(local_68 & 0xffffffff);
          printf("KEY RELEASED: %s\n",uVar4);
          *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + -1;
          FUN_00c7d864(&local_58,&local_68);
          uVar5 = uVar5 + 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x69);
    local_68 = 0;
    local_60 = (void *)0x0;
    iVar2 = 1;
    do {
      local_6c = iVar2;
      iVar2 = local_6c + 1;
    } while (local_6c + 1 != 3);
    uVar3 = FUN_019806d8(2);
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_01980e18(local_6c);
      printf("KEY TRIGGERED: %s\n",uVar4);
      *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + 1;
    }
    uVar3 = FUN_019806f8(local_6c);
    if (((uVar3 & 1) != 0) && (0 < *(int *)(param_1 + 0x85c))) {
      uVar4 = FUN_01980e18(local_6c);
      printf("KEY RELEASED: %s\n",uVar4);
      *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + -1;
      FUN_00c7d8ec(&local_68,&local_6c);
      uVar5 = uVar5 + 1;
    }
    if (((int)local_58 != 0) || ((int)local_68 != 0)) {
      FUN_00c7d974(param_1,&local_58,&local_68);
    }
    if (0 < *(int *)(param_1 + 0x85c)) {
      printf("NUM KEYS WAITING FOR RELEASE: %i\n");
    }
    if (0 < (int)uVar5) {
      printf("NUM KEYS RELEASED: %i\n",(ulong)uVar5);
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7d864(uint *param_1,undefined4 *param_2)

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
    FUN_00c7f338(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00c7d8ec(uint *param_1,undefined4 *param_2)

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
    FUN_00c7f3b8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00c7d974(long param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar6 = (ulong)*param_2;
  if (*param_2 != 0) {
    uVar9 = 0;
    do {
      iVar3 = *(int *)(*(long *)(param_2 + 2) + uVar9 * 4);
      uVar7 = 0;
      do {
        if ((&DAT_01bbee70)[uVar7] == iVar3) {
          uVar5 = FUN_00cb6864();
          *(undefined1 *)(param_1 + 0x858) = uVar5;
          uVar6 = (ulong)*param_2;
          goto LAB_00c7d9f0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 6);
      *(int *)(param_1 + 0x850) = iVar3;
LAB_00c7d9f0:
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  uVar2 = *param_3;
  if (uVar2 != 0) {
    lVar8 = *(long *)(param_3 + 2);
    uVar6 = 0;
    do {
      lVar1 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(lVar8 + lVar1);
    } while (uVar6 < uVar2);
  }
  if (*(int *)(param_1 + 0x85c) < 1) {
    FUN_00f048e0(auStack_68,DAT_0313c1f8,param_1);
    FUN_00f04760(param_1,auStack_68,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x861) = 1;
    FUN_00c7ddb8(param_1);
    FUN_00c7db54(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7da98(long *param_1)

{
  undefined4 uVar1;
  
  FUN_00f13db4();
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0db64(uVar1,0,0x3f800000,param_1 + 0xe2);
  FUN_00f07940(0,0,param_1 + 0x17,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x35,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0xe2,8,param_1,8);
  return;
}




void FUN_00c7db38(long param_1,undefined4 param_2,byte param_3,undefined4 param_4,undefined4 param_5
                 ,undefined1 param_6)

{
  *(undefined4 *)(param_1 + 0x840) = param_2;
  *(undefined4 *)(param_1 + 0x844) = param_4;
  *(undefined4 *)(param_1 + 0x848) = param_5;
  *(undefined1 *)(param_1 + 0x84c) = param_6;
  *(byte *)(param_1 + 0x862) = param_3 & 1;
  FUN_00c7db54();
  return;
}




void FUN_00c7db54(long *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00e705c8(&local_48,0x1e21c1a);
  if (*(char *)((long)param_1 + 0x861) != '\0') goto LAB_00c7dca8;
  if (*(int *)((long)param_1 + 0x844) < 0x69) {
    cVar2 = *(char *)((long)param_1 + 0x84c);
    FUN_00f0d92c(param_1 + 0xe2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
    if (cVar2 != '\0') {
      uVar4 = FUN_00cb6834(*(undefined1 *)((long)param_1 + 0x84c));
      uVar5 = FUN_01980d54(*(undefined4 *)((long)param_1 + 0x844));
LAB_00c7dc24:
      FUN_00e70e18(&local_48,"%s + %s",uVar4,uVar5);
      goto LAB_00c7dca8;
    }
    uVar4 = FUN_01980d54(*(undefined4 *)((long)param_1 + 0x844));
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x84c);
    if ((int)param_1[0x109] < 3) {
      FUN_00f0d92c(param_1 + 0xe2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
      if (cVar2 != '\0') {
        uVar4 = FUN_00cb6834(*(undefined1 *)((long)param_1 + 0x84c));
        uVar5 = FUN_01980e18((int)param_1[0x109]);
        goto LAB_00c7dc24;
      }
      uVar4 = FUN_01980e18((int)param_1[0x109]);
    }
    else {
      if (cVar2 == '\0') goto LAB_00c7dca8;
      FUN_00f0d92c(param_1 + 0xe2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
      uVar4 = FUN_00cb6834(*(undefined1 *)((long)param_1 + 0x84c));
    }
  }
  FUN_00e705c8(&local_58,uVar4);
  FUN_00910394(&local_48,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
LAB_00c7dca8:
  plVar1 = param_1 + 0xe2;
  FUN_00f0d75c(plVar1,&local_48);
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f0db64(uVar6,0,0x3f800000,plVar1);
  FUN_00f07940(0,0,plVar1,8,param_1,8);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7dd2c(long param_1,uint param_2)

{
  *(char *)(param_1 + 0x860) = (char)(param_2 & 1);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xffffffe0 | *(uint *)(param_1 + 0x84) & 0xf | (param_2 & 1) << 4
  ;
  return;
}




void FUN_00c7dd44(long param_1,byte param_2,uint param_3)

{
  *(byte *)(param_1 + 0x861) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    if ((*(int *)(param_1 + 0x85c) == 0) && ((param_3 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x844) = *(undefined8 *)(param_1 + 0x850);
      *(undefined1 *)(param_1 + 0x84c) = *(undefined1 *)(param_1 + 0x858);
    }
    *(undefined8 *)(param_1 + 0x850) = 0x300000069;
    *(undefined1 *)(param_1 + 0x858) = 0;
    FUN_00c7ded0(param_1);
    *(undefined4 *)(param_1 + 0x85c) = 0;
  }
  else {
    FUN_00c7ddb8(param_1);
  }
  FUN_00c7db54(param_1);
  return;
}




void FUN_00c7ddb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  uVar2 = FUN_00efee28(0x3f800000,0x3eb33333,0);
  uVar3 = FUN_00efee28(0,0x3eb33333,0);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar5,uVar2,uVar3,0);
  FUN_00efd3bc(puVar5);
  FUN_00f02308(param_1 + 0x1a8,puVar5,0);
  return;
}




void FUN_00c7ded0(long param_1)

{
  FUN_00f01980(param_1 + 0x1a8);
  if ((*(uint *)(param_1 + 0x22c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x1a8);
    return;
  }
  return;
}




undefined8 FUN_00c7df1c(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_01bbee70)[lVar1] == param_2) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 6);
  return 0;
}




void FUN_00c7df50(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x860) != '\0') {
    if ((param_3 & 1) == 0) {
      cVar2 = *(char *)(param_1 + 0x861);
      *(undefined8 *)(param_1 + 0x850) = 0x300000069;
      *(undefined1 *)(param_1 + 0x858) = 0;
      FUN_00c7dd44(param_1,0,cVar2);
      uVar1 = DAT_0313c1fc;
      if (cVar2 != '\0') goto LAB_00c7dff8;
    }
    else {
      if (*(char *)(param_1 + 0x861) != '\0') goto LAB_00c7dff8;
      *(undefined1 *)(param_1 + 0x861) = 1;
      FUN_00c7ddb8(param_1);
      FUN_00c7db54(param_1);
      uVar1 = DAT_0313c1f4;
    }
    FUN_00f048e0(auStack_58,uVar1,param_1);
    FUN_00f04760(param_1,auStack_58,1);
  }
LAB_00c7dff8:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

