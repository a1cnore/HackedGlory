// functions/009c8 — 37 functions
#include "libGameKindred.h"




void FUN_009c8134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dca88;
  param_1[0xe9] = &PTR_FUN_028266f0;
  param_1[0x100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x103);
  FUN_00f13d08(param_1 + 0xe9);
  param_1[0xcb] = &PTR_FUN_028266f0;
  param_1[0xe2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe5);
  FUN_00f13d08(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_028266f0;
  param_1[0xc4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 199);
  FUN_00f13d08(param_1 + 0xad);
  param_1[0x8f] = &PTR_FUN_028266f0;
  param_1[0xa6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa9);
  FUN_00f13d08(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_009c825c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dbf08;
  if ((*(byte *)(param_1 + 0x4a) & 1) != 0) {
    operator_delete((void *)param_1[0x4c]);
  }
  if ((*(byte *)(param_1 + 0x47) & 1) != 0) {
    operator_delete((void *)param_1[0x49]);
  }
  FUN_00f01868(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_009c82b4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_009c8364(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  thunk_FUN_00e7051c(lVar4 + -0x38,param_2);
  FUN_008fcdb8(lVar4 + -0x28,param_2 + 0x10);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_009c8364(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x38);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x38);
      pvVar6 = pvVar2;
      do {
        thunk_FUN_00e7051c(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x10,(long)pvVar3 + 0x10);
        *(undefined4 *)((long)pvVar6 + 0x30) = *(undefined4 *)((long)pvVar3 + 0x30);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x28);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        *(undefined8 *)((long)pvVar6 + 0x28) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x38);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        pbVar4 = (byte *)((long)pvVar3 + 0x10);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if (*(void **)(pbVar4 + -8) != (void *)0x0) {
            operator_delete__(*(void **)(pbVar4 + -8));
            pbVar4[-0x10] = 0;
            pbVar4[-0xf] = 0;
            pbVar4[-0xe] = 0;
            pbVar4[-0xd] = 0;
            pbVar4[-0xc] = 0;
            pbVar4[-0xb] = 0;
            pbVar4[-10] = 0;
            pbVar4[-9] = 0;
            pbVar4[-8] = 0;
            pbVar4[-7] = 0;
            pbVar4[-6] = 0;
            pbVar4[-5] = 0;
            pbVar4[-4] = 0;
            pbVar4[-3] = 0;
            pbVar4[-2] = 0;
            pbVar4[-1] = 0;
          }
          lVar5 = lVar5 + -0x38;
          pbVar4 = pbVar4 + 0x38;
        } while (lVar5 != 0);
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




void FUN_009c8464(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if (*(void **)(pbVar2 + -8) != (void *)0x0) {
          operator_delete__(*(void **)(pbVar2 + -8));
          pbVar2[-0x10] = 0;
          pbVar2[-0xf] = 0;
          pbVar2[-0xe] = 0;
          pbVar2[-0xd] = 0;
          pbVar2[-0xc] = 0;
          pbVar2[-0xb] = 0;
          pbVar2[-10] = 0;
          pbVar2[-9] = 0;
          pbVar2[-8] = 0;
          pbVar2[-7] = 0;
          pbVar2[-6] = 0;
          pbVar2[-5] = 0;
          pbVar2[-4] = 0;
          pbVar2[-3] = 0;
          pbVar2[-2] = 0;
          pbVar2[-1] = 0;
        }
        lVar1 = lVar1 + -0x38;
        pbVar2 = pbVar2 + 0x38;
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




void FUN_009c84f0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_009c85a0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  thunk_FUN_00e7051c(lVar4 + -0x38,param_2);
  FUN_008fcdb8(lVar4 + -0x28,param_2 + 0x10);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x28);
  return;
}




void FUN_009c85a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x38);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x38);
      pvVar6 = pvVar2;
      do {
        thunk_FUN_00e7051c(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x10,(long)pvVar3 + 0x10);
        *(undefined4 *)((long)pvVar6 + 0x30) = *(undefined4 *)((long)pvVar3 + 0x30);
        puVar1 = (undefined8 *)((long)pvVar3 + 0x28);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        *(undefined8 *)((long)pvVar6 + 0x28) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x38);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        pbVar4 = (byte *)((long)pvVar3 + 0x10);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if (*(void **)(pbVar4 + -8) != (void *)0x0) {
            operator_delete__(*(void **)(pbVar4 + -8));
            pbVar4[-0x10] = 0;
            pbVar4[-0xf] = 0;
            pbVar4[-0xe] = 0;
            pbVar4[-0xd] = 0;
            pbVar4[-0xc] = 0;
            pbVar4[-0xb] = 0;
            pbVar4[-10] = 0;
            pbVar4[-9] = 0;
            pbVar4[-8] = 0;
            pbVar4[-7] = 0;
            pbVar4[-6] = 0;
            pbVar4[-5] = 0;
            pbVar4[-4] = 0;
            pbVar4[-3] = 0;
            pbVar4[-2] = 0;
            pbVar4[-1] = 0;
          }
          lVar5 = lVar5 + -0x38;
          pbVar4 = pbVar4 + 0x38;
        } while (lVar5 != 0);
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




void FUN_009c86a0(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if (*(void **)(pbVar2 + -8) != (void *)0x0) {
          operator_delete__(*(void **)(pbVar2 + -8));
          pbVar2[-0x10] = 0;
          pbVar2[-0xf] = 0;
          pbVar2[-0xe] = 0;
          pbVar2[-0xd] = 0;
          pbVar2[-0xc] = 0;
          pbVar2[-0xb] = 0;
          pbVar2[-10] = 0;
          pbVar2[-9] = 0;
          pbVar2[-8] = 0;
          pbVar2[-7] = 0;
          pbVar2[-6] = 0;
          pbVar2[-5] = 0;
          pbVar2[-4] = 0;
          pbVar2[-3] = 0;
          pbVar2[-2] = 0;
          pbVar2[-1] = 0;
        }
        lVar1 = lVar1 + -0x38;
        pbVar2 = pbVar2 + 0x38;
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




undefined8 FUN_009c8730(undefined8 param_1)

{
  FUN_009c11fc();
  return param_1;
}




void FUN_009c8754(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009c875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009c8760(uint *param_1,uint param_2)

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




uint FUN_009c87e0(int param_1)

{
  if (param_1 - 30000U < 6) {
    return 0x27U >> (ulong)(param_1 - 30000U & 0x1f) & 1;
  }
  return 0;
}




void FUN_009c880c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027c2a28;
  lVar1 = FUN_01985d44(param_1,DAT_0312ead4);
  param_1[5] = lVar1;
  *(undefined1 *)(lVar1 + 0x33) = 0xb;
  uVar2 = FUN_01985d44(param_1,DAT_0312f168);
  param_1[6] = uVar2;
  return;
}




void FUN_009c8868(long param_1)

{
  long lVar1;
  
  DAT_0312f178 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f178 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f178 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009c8b5c;
  *(code **)(lVar1 + 0xb8) = FUN_009c8b80;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f178;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009c88d8,0);
  return;
}




void FUN_009c88d8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e7c674(*(undefined8 *)(param_1 + 0x30));
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_0092e670(), (uVar1 & 1) != 0)) {
    return;
  }
  FUN_00e7ce38(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_009c8918(long param_1,int param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
            (*(long **)(param_1 + 0x28),"build://Characters/moveCursor/Art/moveCursor.mesh");
  pcVar1 = "build://Characters/moveCursor/Art/moveCursor.tapAndHold_150.anim";
  if (param_2 != 2) {
    pcVar1 = "build://Characters/moveCursor/Art/moveCursor.go.anim";
  }
  pcVar2 = "build://Characters/moveCursor/Art/moveCursor.tapAndHold_200.anim";
  if (param_2 != 1) {
    pcVar2 = pcVar1;
  }
  FUN_00e7c54c(*(undefined8 *)(param_1 + 0x30),
               "build://Characters/moveCursor/Art/moveCursor.skeleton",pcVar2);
  uStack_78 = 0;
  local_80 = 0x3bc49ba6;
  uStack_68 = 0;
  uStack_70 = 0x3bc49ba600000000;
  uStack_58 = 0x3bc49ba6;
  local_60 = 0;
  uStack_48 = 0x3f80000000000000;
  uStack_50 = 0;
  if ((param_3 & 1) != 0) {
    FUN_01995ebc(auStack_98);
    local_88 = 0;
    local_90 = 0x437f0000;
    FUN_01996270(auStack_98,0,&local_90,3,1,"u_color");
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_019962e8(auStack_98);
    FUN_00e7cdd0(uVar5,uVar4);
    FUN_01995ef4(auStack_98);
  }
  FUN_00e7ca50(*(undefined8 *)(param_1 + 0x28),&local_80);
  FUN_00e7cdd8(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c8a5c(long param_1,float *param_2)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0;
  local_70 = 0x3bc49ba6;
  uStack_58 = 0;
  uStack_60 = 0x3bc49ba600000000;
  uStack_48 = 0x3bc49ba6;
  local_50 = 0;
  local_34 = 0x3f800000;
  local_40 = *param_2 + 0.0;
  fStack_3c = param_2[1] + 0.0;
  local_38 = param_2[2] + 0.0;
  FUN_00e7ca50(*(undefined8 *)(param_1 + 0x28),&local_70);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c8af0(long param_1)

{
  FUN_00e7cdd8(*(undefined8 *)(param_1 + 0x28));
  FUN_00e7c58c(0x3f800000,0x3f800000,0,0,0,*(undefined8 *)(param_1 + 0x30),0);
  return;
}




void FUN_009c8b30(long param_1)

{
  FUN_00e7ce38(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_009c8b38(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_009c8b5c(undefined8 param_1)

{
  FUN_009c880c();
  return param_1;
}




void FUN_009c8b80(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009c8b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009c8b8c(undefined8 *param_1)

{
  FUN_009df040();
  *param_1 = &PTR_thunk_FUN_009df4b8_027c2a58;
  FUN_009df57c(param_1,"m_forkGlow_bnd");
  return;
}




void FUN_009c8bcc(void *param_1)

{
  FUN_009df4b8();
  operator_delete(param_1);
  return;
}




void FUN_009c8bf0(long param_1)

{
  long lVar1;
  
  DAT_0312eb50 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb50 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb50 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009c8cb8;
  *(code **)(lVar1 + 0xb8) = FUN_009c8cfc;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb50;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009df500,0);
  return;
}




uint FUN_009c8c60(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_009df550();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_00d6bbac(lVar2,DAT_0315cef0,0);
  return ~uVar1 & 1;
}




undefined8 * FUN_009c8cb8(undefined8 *param_1)

{
  FUN_009df040();
  *param_1 = &PTR_thunk_FUN_009df4b8_027c2a58;
  FUN_009df57c(param_1,"m_forkGlow_bnd");
  return param_1;
}




void FUN_009c8cfc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009c8d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009c8d08(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_02baef70;
  FUN_00f017e8(plVar1);
  uVar4 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x17) = 0x7000000;
  *param_1 = &PTR_FUN_027c2a90;
  param_1[5] = &PTR_FUN_027c2ae8;
  param_1[0x16] = &PTR_FUN_027c2be8;
  param_1[0x18] = uVar4;
  *(undefined4 *)(param_1 + 0x1a) = DAT_03218f38;
  param_1[0x19] = DAT_03218f30;
  FUN_00f0a784(param_1 + 0x1b);
  lVar5 = 0;
  do {
    lVar2 = lVar5 + 0x18;
    *(undefined4 *)((long)param_1 + lVar5 + 0xf0) = 0xff000000;
    lVar5 = lVar2;
  } while (lVar2 != 0x120);
  param_1[0x41] = 0x424800003f000000;
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x1a) = DAT_03218f38;
  param_1[0x19] = DAT_03218f30;
  lVar5 = 0;
  do {
    lVar2 = lVar5 + 0x18;
    *(undefined8 *)((long)param_1 + lVar5 + 0xe8) = 0x3f80000000000000;
    *(undefined4 *)((long)param_1 + lVar5 + 0xf0) = 0xffffffff;
    *(undefined8 *)((long)param_1 + lVar5 + 0xf8) = 0;
    lVar5 = lVar2;
  } while (lVar2 != 0x120);
  FUN_00f0a814(param_1 + 0x1b,PTR_s_build___LensFlares_psd_02be3438);
  local_50 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c8e80(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0xd0) = DAT_03218f38;
  *(undefined8 *)(param_1 + 200) = DAT_03218f30;
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 0x18;
    *(undefined8 *)(lVar1 + 0xe8) = 0x3f80000000000000;
    *(undefined4 *)(lVar1 + 0xf0) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0xf8) = 0;
  } while (lVar2 != 0x120);
  return;
}




void FUN_009c8ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2a90;
  param_1[5] = &PTR_FUN_027c2ae8;
  param_1[0x16] = &PTR_FUN_027c2be8;
  FUN_00f0a79c(param_1 + 0x1b);
  FUN_00f01868(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009c8f24(long param_1)

{
  FUN_009c8ed0(param_1 + -0x28);
  return;
}




void FUN_009c8f2c(long param_1)

{
  FUN_009c8ed0(param_1 + -0xb0);
  return;
}




void FUN_009c8f34(void *param_1)

{
  FUN_009c8ed0();
  operator_delete(param_1);
  return;
}




void FUN_009c8f58(long param_1)

{
  FUN_009c8ed0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009c8f80(long param_1)

{
  FUN_009c8ed0((void *)(param_1 + -0xb0));
  operator_delete((void *)(param_1 + -0xb0));
  return;
}




void FUN_009c8fa8(long param_1)

{
  long lVar1;
  
  DAT_0312f188 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f188 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f188 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009c9ca4;
  *(code **)(lVar1 + 0xb8) = FUN_009c9cc8;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f188;
  *(undefined4 *)(lVar1 + 0xa8) = 0x210;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}

