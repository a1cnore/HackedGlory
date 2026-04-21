// functions/00ed2 — 24 functions
#include "libGameKindred.h"




void FUN_00ed210c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar1 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  lVar2 = param_2[4];
  *(long *)(param_1 + 0x168) = lVar2;
  FUN_00f0044c(lVar2,param_1);
  return;
}




void FUN_00ed2188(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  fVar7 = (float)(**(code **)(*param_3 + 0x48))();
  if ((((10.0 <= fVar7) || (10.0 <= param_2)) &&
      ((uVar5 = (**(code **)(*param_4 + 0x10))(param_4,DAT_03210fd8), (uVar5 & 1) != 0 ||
       (DAT_03210fd8 == DAT_03210f50)))) && (param_4[4] == param_3[0x2d])) {
    fVar7 = *(float *)((long)param_4 + 0x2c);
    lVar6 = FUN_00965ecc(param_3);
    fVar9 = *(float *)(lVar6 + 0xc);
    fVar8 = *(float *)(lVar6 + 0x14);
    (**(code **)(*param_3 + 0x48))(param_3);
    uVar2 = *(uint *)(param_3 + 0x29);
    if (uVar2 != 0) {
      fVar7 = (float)NEON_fminnm((((float)(int)fVar7 - fVar9) / fVar8) / param_2,0x3f800000);
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      uVar1 = (int)(fVar7 * (float)uVar2);
      if (uVar2 - 1 <= (uint)(int)(fVar7 * (float)uVar2)) {
        uVar1 = uVar2 - 1;
      }
      if (uVar1 != *(uint *)(param_3 + 0x2c)) {
        uVar4 = FUN_00f048a4("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
        FUN_00f048e0(auStack_78,uVar4,(ulong)uVar1);
        FUN_00f04760(param_3,auStack_78,0);
        *(uint *)(param_3 + 0x2c) = uVar1;
        if ((param_3[0x2b] != 0) &&
           (lVar6 = *(long *)(param_3[0x2a] + (ulong)uVar1 * 0x10 + 8), lVar6 != 0)) {
          FUN_00f07b18(0,param_3[0x2b],5,lVar6,5);
          FUN_00f07b18(0,param_3[0x2b],1,param_3,1);
          *(uint *)(param_3[0x2b] + 0x84) = *(uint *)(param_3[0x2b] + 0x84) | 4;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed234c(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) && (*(long *)(param_1 + 0x168) != 0)) {
    FUN_00f00464();
    return;
  }
  return;
}




void FUN_00ed23b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb;
  }
  return;
}




void FUN_00ed23dc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_00ed2460(undefined8 *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_028229c8;
  FUN_00f0c714(param_1 + 0x19);
  FUN_00f0c774(param_1 + 0x19,&DAT_01bee7f2);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  return;
}




void FUN_00ed24bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028229c8;
  FUN_00ed2508();
  FUN_00f13d08(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ed2508(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xb8) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0xc0);
      FUN_00f048e0(auStack_68,DAT_03210c2c,param_1);
      FUN_00f04760(*(undefined8 *)(lVar6 + lVar4),auStack_68,1);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < *(uint *)(param_1 + 0xb8));
    if (*(uint *)(param_1 + 0xb8) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0xc0);
        uVar2 = FUN_00f02540(*(undefined8 *)(lVar6 + lVar4));
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(lVar6 + lVar4),1);
        }
        if ((*(char *)(lVar6 + lVar4 + 0xe) != '\0') &&
           (plVar3 = *(long **)(*(long *)(param_1 + 0xc0) + lVar4), plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 8))();
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar5 < *(uint *)(param_1 + 0xb8));
    }
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  uVar5 = FUN_00f02540(param_1 + 200);
  if ((uVar5 & 1) != 0) {
    FUN_00f01a4c(param_1 + 200,1);
  }
  FUN_00f048e0(auStack_68,DAT_03210c38,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed2654(void *param_1)

{
  FUN_00ed24bc();
  operator_delete(param_1);
  return;
}




void FUN_00ed2678(long param_1,undefined8 param_2,byte *param_3,byte param_4,byte param_5,
                 byte param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_b8;
  uint local_b0;
  byte local_ac;
  byte local_ab;
  byte local_aa;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    FUN_00f048e0(auStack_88,DAT_03210c34,param_1);
    FUN_00f04760(*(undefined8 *)(lVar3 + (ulong)(iVar1 - 1) * 0x10),auStack_88,1);
  }
  if (param_3 == (byte *)0x0) {
    local_b0 = 0;
  }
  else {
    uVar4 = (uint)*param_3;
    local_b0 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        local_b0 = (local_b0 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  local_b8 = param_2;
  local_ac = param_4 & 1;
  local_ab = param_5 & 1;
  local_aa = param_6 & 1;
  FUN_00ed2854((int *)(param_1 + 0xb8),&local_b8);
  FUN_00f048e0(auStack_88,DAT_03210c28,param_1);
  FUN_00f04760(param_2,auStack_88,1);
  FUN_00ed28dc(param_1,&local_b8);
  if (iVar1 == 0) {
    FUN_00f048e0(auStack_a8,DAT_03210c3c,0);
    FUN_00f04760(param_1,auStack_a8,1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ed27ec(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03210c34,param_1);
  FUN_00f04760(*param_2,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed2854(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00ed3194(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00ed28dc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = param_1 + 0x19;
  uVar3 = FUN_00f02540(plVar1);
  if ((uVar3 & 1) != 0) {
    FUN_00f01a4c(plVar1,1);
  }
  uVar3 = FUN_00f02540(*param_2);
  if ((uVar3 & 1) != 0) {
    FUN_00f01a4c(*param_2,1);
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,*param_2,1);
  if (*(char *)((long)param_2 + 0xd) != '\0') {
    FUN_00f07a78(0,0,*param_2,8);
  }
  FUN_00f048e0(auStack_58,DAT_03210c30,param_1);
  FUN_00f04760(*param_2,auStack_58,1);
  FUN_00f0025c(&uStack_5c,&local_60);
  FUN_00f13f08(uStack_5c,local_60,plVar1);
  FUN_00f07a78(0,0,plVar1,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed2a04(long *param_1,undefined8 param_2,byte *param_3,byte param_4,byte param_5,
                 byte param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  uint local_80;
  byte local_7c;
  byte local_7b;
  byte local_7a;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[0x17] == 0) {
    FUN_00ed2678(param_1,param_2,param_3,param_4 & 1,param_5 & 1,param_6 & 1);
  }
  else {
    local_7a = param_6 & 1;
    local_7b = param_5 & 1;
    local_7c = param_4 & 1;
    if (param_3 == (byte *)0x0) {
      local_80 = 0;
    }
    else {
      uVar3 = (uint)*param_3;
      local_80 = 0x811c9dc5;
      if (*param_3 != 0) {
        do {
          param_3 = param_3 + 1;
          local_80 = (local_80 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*param_3;
        } while (*param_3 != 0);
      }
    }
    local_88 = param_2;
    FUN_00ed3218(param_1 + 0x17,param_1[0x18],&local_88,auStack_78);
    FUN_00f048e0(auStack_78,DAT_03210c28,param_1);
    FUN_00f04760(param_2,auStack_78,1);
    uVar2 = FUN_00f02540(local_88);
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(local_88,1);
    }
    (**(code **)(*param_1 + 0x78))(param_1,local_88,1);
    if (local_7b != 0) {
      FUN_00f07a78(0,0,local_88,8);
    }
    puVar4 = (undefined8 *)param_1[0x18];
    FUN_00f048e0(auStack_58,DAT_03210c34,param_1);
    FUN_00f04760(*puVar4,auStack_58,1);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ed2b84(undefined8 param_1,undefined8 param_2)

{
  FUN_00f07a78(0,0,param_2,8);
  return;
}




void FUN_00ed2b98(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar1 * 0x10) == param_2) {
        FUN_00ed2c1c();
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xb8));
  }
  FUN_00ed2678();
  return;
}




bool FUN_00ed2bdc(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar1 * 0x10) == param_2) goto LAB_00ed2c10;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xb8));
  }
  uVar1 = 0xffffffff;
LAB_00ed2c10:
  return uVar1 != 0xffffffff;
}




void FUN_00ed2c1c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0xc0);
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(lVar7 + (ulong)uVar6 * 0x10) == param_2) {
        uVar4 = 0;
        goto LAB_00ed2c88;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < uVar1);
  }
  goto LAB_00ed2d20;
  while (uVar4 = uVar4 + 1, uVar4 < uVar1) {
LAB_00ed2c88:
    if (*(long *)(lVar7 + (ulong)uVar4 * 0x10) == param_2) {
      if (uVar1 - 1 == uVar4) goto LAB_00ed2d20;
      break;
    }
  }
  FUN_00f048e0(&local_80,DAT_03210c34,param_1);
  FUN_00f04760(*(undefined8 *)(lVar7 + (ulong)(uVar1 - 1) * 0x10),&local_80,1);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0xc0) + lVar5);
  uStack_78 = puVar2[1];
  local_80 = *puVar2;
  lVar5 = *(long *)(param_1 + 0xc0) + (long)(int)uVar6 * 0x10;
  FUN_00ed3484(param_1 + 0xb8,lVar5,lVar5 + 0x10);
  FUN_00ed2854(param_1 + 0xb8,&local_80);
  FUN_00ed28dc(param_1,&local_80);
LAB_00ed2d20:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00ed2d50(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xc0) + uVar2 * 0x10) == param_2) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb8));
  }
  return 0xffffffff;
}




bool FUN_00ed2d8c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar2 * 0x10) == param_2) {
        return uVar1 - 1 == uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return false;
}




void FUN_00ed2dd4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00ed2e0c();
  if (lVar1 != 0) {
    FUN_00ed2c1c(param_1,lVar1);
    return;
  }
  return;
}




undefined8 FUN_00ed2e0c(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar2 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0xc0);
    do {
      if (*(uint *)(*(undefined8 **)(param_1 + 0xc0) + (ulong)uVar2 * 2 + 1) == uVar1) {
        return *puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar2 < *(uint *)(param_1 + 0xb8));
  }
  return 0;
}




void FUN_00ed2e8c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xc0) + (ulong)uVar2 * 0x10) == param_2) {
        lVar1 = *(long *)(param_1 + 0xc0) + (long)(int)uVar2 * 0x10;
        FUN_00ed3484(param_1 + 0xb8,lVar1,lVar1 + 0x10);
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xb8));
  }
  return;
}




void FUN_00ed2ed0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar6 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0xc0);
    do {
      if ((*(undefined8 **)(param_1 + 0xc0))[(ulong)uVar6 * 2] == param_2) {
        FUN_00f048e0(auStack_78,DAT_03210c2c,param_1);
        FUN_00f04760(*puVar7,auStack_78,1);
        lVar1 = DAT_03210d00;
        if (*(char *)((long)puVar7 + 0xe) == '\0') {
          FUN_00f01a4c(*puVar7,1);
        }
        else {
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
            FUN_00efc8e8(puVar5);
            *(undefined ***)puVar5 = &PTR_FUN_028251d8;
            *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
          }
          FUN_00f022a0(*puVar7,puVar5);
        }
        lVar1 = *(long *)(param_1 + 0xc0) + (long)(int)uVar6 * 0x10;
        FUN_00ed3484(param_1 + 0xb8,lVar1,lVar1 + 0x10);
        if (*(int *)(param_1 + 0xb8) == 0) {
          uVar3 = FUN_00f02540(param_1 + 200);
          if ((uVar3 & 1) != 0) {
            FUN_00f01a4c(param_1 + 200,1);
          }
          FUN_00f048e0(auStack_98,DAT_03210c38,0);
          FUN_00f04760(param_1,auStack_98,1);
        }
        else {
          FUN_00ed28dc(param_1,*(long *)(param_1 + 0xc0) +
                               (ulong)(*(int *)(param_1 + 0xb8) - 1) * 0x10);
        }
        break;
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar6 < *(uint *)(param_1 + 0xb8));
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

