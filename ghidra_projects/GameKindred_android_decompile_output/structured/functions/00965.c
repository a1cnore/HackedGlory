// functions/00965 — 46 functions
#include "libGameKindred.h"




void FUN_0096502c(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_00955098(param_1,1);
    FUN_00954c08(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x50;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
        puVar1 = (undefined8 *)(lVar3 + 0x48);
        lVar3 = lVar3 + 0x50;
        *(undefined8 *)(lVar4 + 0x48) = *puVar1;
        lVar4 = lVar4 + 0x50;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_009650d8(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_0095571c(param_1,1);
    FUN_00955508(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x38;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        thunk_FUN_00e7051c(lVar4 + 0x18,lVar3 + 0x18);
        *(undefined8 *)(lVar4 + 0x2f) = *(undefined8 *)(lVar3 + 0x2f);
        puVar1 = (undefined8 *)(lVar3 + 0x28);
        lVar3 = lVar3 + 0x38;
        *(undefined8 *)(lVar4 + 0x28) = *puVar1;
        lVar4 = lVar4 + 0x38;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00965180(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_009557a8(param_1,1);
    FUN_00955608(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x50;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
        puVar1 = (undefined8 *)(lVar3 + 0x48);
        lVar3 = lVar3 + 0x50;
        *(undefined8 *)(lVar4 + 0x48) = *puVar1;
        lVar4 = lVar4 + 0x50;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_0096522c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  thunk_FUN_00e7051c();
  FUN_008fcdb8(param_1 + 0x10,param_2 + 0x10);
  FUN_008fcdb8(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_008fcdb8(param_1 + 0x48,param_2 + 0x48);
  FUN_008fcdb8(param_1 + 0x60,param_2 + 0x60);
  FUN_008fcdb8(param_1 + 0x78,param_2 + 0x78);
  FUN_008fcdb8(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_008fcdb8(param_1 + 0xc0,param_2 + 0xc0);
  FUN_008fcdb8(param_1 + 0xd8,param_2 + 0xd8);
  FUN_008fcdb8(param_1 + 0xf0,param_2 + 0xf0);
  FUN_008fcdb8(param_1 + 0x108,param_2 + 0x108);
  FUN_008fcdb8(param_1 + 0x120,param_2 + 0x120);
  FUN_008fcdb8(param_1 + 0x138,param_2 + 0x138);
  FUN_008fcdb8(param_1 + 0x150,param_2 + 0x150);
  FUN_008fcdb8(param_1 + 0x168,param_2 + 0x168);
  FUN_008fcdb8(param_1 + 0x180,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  return;
}




void FUN_00965324(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_00951534(param_1,1);
    FUN_009511d8(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x18;
      do {
        FUN_008fcdb8(lVar3,lVar2);
        lVar2 = lVar2 + 0x18;
        lVar4 = lVar4 + -0x18;
        lVar3 = lVar3 + 0x18;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_009653b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    FUN_00952050(param_1,1);
    FUN_00951efc(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = lVar2 + (ulong)*param_2 * 0x88;
      do {
        FUN_008fcdb8(lVar3,lVar2);
        thunk_FUN_00e7051c(lVar3 + 0x18,lVar2 + 0x18);
        *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
        uVar5 = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
        *(undefined8 *)(lVar3 + 0x28) = uVar5;
        FUN_008fcdb8(lVar3 + 0x40,lVar2 + 0x40);
        FUN_008fcdb8(lVar3 + 0x58,lVar2 + 0x58);
        FUN_008fcdb8(lVar3 + 0x70,lVar2 + 0x70);
        lVar2 = lVar2 + 0x88;
        lVar3 = lVar3 + 0x88;
      } while (lVar2 != lVar4);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_0096547c(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined1 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined1 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_00965554(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x1a8);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x1a8);
      pvVar5 = pvVar2;
      do {
        FUN_0096522c(pvVar5,pvVar3);
        puVar1 = (undefined1 *)((long)pvVar3 + 0x1a0);
        pvVar3 = (void *)((long)pvVar3 + 0x1a8);
        *(undefined1 *)((long)pvVar5 + 0x1a0) = *puVar1;
        pvVar5 = (void *)((long)pvVar5 + 0x1a8);
      } while (pvVar3 != pvVar6);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x1a8;
        do {
          FUN_00964d08(pvVar3);
          lVar4 = lVar4 + -0x1a8;
          pvVar3 = (void *)((long)pvVar3 + 0x1a8);
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




void FUN_00965624(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x70);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x70);
      pvVar6 = pvVar2;
      do {
        thunk_FUN_00e7051c(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x10,(long)pvVar3 + 0x10);
        FUN_008fcdb8((long)pvVar6 + 0x28,(long)pvVar3 + 0x28);
        thunk_FUN_00e7051c((long)pvVar6 + 0x40,(long)pvVar3 + 0x40);
        thunk_FUN_00e7051c((long)pvVar6 + 0x50,(long)pvVar3 + 0x50);
        *(undefined1 *)((long)pvVar6 + 0x60) = *(undefined1 *)((long)pvVar3 + 0x60);
        puVar1 = (undefined1 *)((long)pvVar3 + 0x68);
        pvVar3 = (void *)((long)pvVar3 + 0x70);
        *(undefined1 *)((long)pvVar6 + 0x68) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x70);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x70;
        puVar4 = (undefined8 *)((long)pvVar3 + 0x38);
        do {
          if ((void *)puVar4[4] != (void *)0x0) {
            operator_delete__((void *)puVar4[4]);
            puVar4[3] = 0;
            puVar4[4] = 0;
          }
          if ((void *)puVar4[2] != (void *)0x0) {
            operator_delete__((void *)puVar4[2]);
            puVar4[1] = 0;
            puVar4[2] = 0;
          }
          if ((*(byte *)(puVar4 + -2) & 1) != 0) {
            operator_delete((void *)*puVar4);
          }
          if ((*(byte *)(puVar4 + -5) & 1) != 0) {
            operator_delete((void *)puVar4[-3]);
          }
          if ((void *)puVar4[-6] != (void *)0x0) {
            operator_delete__((void *)puVar4[-6]);
            puVar4[-7] = 0;
            puVar4[-6] = 0;
          }
          lVar5 = lVar5 + -0x70;
          puVar4 = puVar4 + 0xe;
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




void FUN_00965778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc058;
  param_1[1] = 0xbf80000000000000;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}




void FUN_0096579c(long *param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    uVar1 = FUN_00e84e4c();
    fVar2 = *(float *)(param_1 + 1);
    fVar3 = *(float *)((long)param_1 + 0xc);
    if (((uVar1 & 1) == 0) &&
       ((*(char *)((long)param_1 + 0x11) != '\0' ||
        (((0.0 < fVar3 && (fVar2 <= 0.0)) && ((char)param_1[2] == '\0')))))) {
      (**(code **)(*param_1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (0.0 < fVar3) {
      if (0.0 < fVar2) {
        fVar2 = (float)FUN_01988c78();
        *(float *)(param_1 + 1) = *(float *)(param_1 + 1) - fVar2;
      }
      else {
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0xc);
      }
    }
  }
  return;
}




void FUN_00965848(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    if (*(float *)((long)param_1 + 0xc) != -1.0) {
      *(float *)(param_1 + 1) = *(float *)((long)param_1 + 0xc);
    }
                    /* WARNING: Could not recover jumptable at 0x0096588c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}




void FUN_0096589c(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 2) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))();
    FUN_00e84dec();
    return;
  }
  return;
}




void FUN_009658c8(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}




void FUN_009658d4(float param_1,long param_2)

{
  float fVar1;
  
  *(float *)(param_2 + 0xc) = param_1;
  fVar1 = *(float *)(param_2 + 8);
  if (param_1 <= *(float *)(param_2 + 8)) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 8) = fVar1;
  return;
}




undefined1 FUN_009658ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}




void FUN_009658f4(void)

{
  return;
}




void FUN_009658f8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9658fc);
  (*pcVar1)();
}




void FUN_009658fc(long *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2 + 0x28;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x30);
  if ((param_3 & 1) != 0) {
    uVar1 = FUN_00a1f2bc();
    FUN_00a1a7fc(uVar1,param_2);
    return;
  }
  return;
}




void FUN_00965940(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        uVar3 = FUN_00a1f2bc();
        FUN_00a1aae0(uVar3,lVar2);
      }
      uVar4 = DAT_03214ce8;
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 1) = uVar4;
  }
  return;
}




void FUN_009659bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = &PTR_FUN_027bc090;
  param_1[0x19] = uVar1;
  param_1[0x17] = &PTR_FUN_027bc1f8;
  return;
}




void FUN_00965a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc090;
  param_1[0x17] = &PTR_FUN_027bc1f8;
  FUN_00f13d08();
  return;
}




void FUN_00965a28(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_027bc090;
  *param_1 = &PTR_FUN_027bc1f8;
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00965a4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc090;
  param_1[0x17] = &PTR_FUN_027bc1f8;
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00965a88(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027bc090;
  *param_1 = &PTR_FUN_027bc1f8;
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00965ac8(long param_1)

{
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00965ad8(void)

{
  return;
}




void FUN_00965adc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&uStack_2c,&local_30);
  local_34 = 0xffffffff;
  FUN_00965b68(0,0,uStack_2c,local_30,0,0,0,0x3f800000,param_2,&local_34,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00965b68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long *param_9,undefined1 *param_10,uint param_11)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_stack_00000000;
  
  if (5 < *(int *)((long)param_9 + 0xc) - (int)param_9[1]) {
    puVar3 = (undefined4 *)*param_9;
    bVar2 = (param_11 & 1) == 0;
    uVar6 = param_8;
    if (bVar2) {
      uVar6 = param_6;
    }
    *puVar3 = param_1;
    puVar3[1] = param_2;
    puVar3[2] = param_5;
    uVar7 = param_7;
    if (bVar2) {
      uVar7 = in_stack_00000000;
    }
    *(undefined1 *)(puVar3 + 3) = *param_10;
    *(undefined1 *)((long)puVar3 + 0xd) = param_10[1];
    *(undefined1 *)((long)puVar3 + 0xe) = param_10[2];
    uVar1 = param_10[3];
    puVar3[4] = param_6;
    puVar3[5] = param_7;
    uVar5 = in_stack_00000000;
    if (bVar2) {
      uVar5 = param_7;
      param_6 = param_8;
    }
    *(undefined1 *)((long)puVar3 + 0xf) = uVar1;
    lVar4 = *param_9;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x18) = param_1;
    *(undefined4 *)(lVar4 + 0x1c) = param_4;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = uVar6;
    *(undefined4 *)(lVar4 + 0x2c) = uVar7;
    *(undefined1 *)(lVar4 + 0x27) = uVar1;
    lVar4 = *param_9;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    *(undefined4 *)(lVar4 + 0x1c) = param_2;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = param_6;
    *(undefined4 *)(lVar4 + 0x2c) = uVar5;
    *(undefined1 *)(lVar4 + 0x27) = uVar1;
    lVar4 = *param_9;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x18) = param_1;
    *(undefined4 *)(lVar4 + 0x1c) = param_4;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = uVar6;
    *(undefined4 *)(lVar4 + 0x2c) = uVar7;
    *(undefined1 *)(lVar4 + 0x27) = uVar1;
    lVar4 = *param_9;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    *(undefined4 *)(lVar4 + 0x1c) = param_4;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = param_8;
    *(undefined4 *)(lVar4 + 0x2c) = in_stack_00000000;
    *(undefined1 *)(lVar4 + 0x27) = uVar1;
    lVar4 = *param_9;
    *param_9 = lVar4 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    *(undefined4 *)(lVar4 + 0x18) = param_3;
    *(undefined4 *)(lVar4 + 0x1c) = param_2;
    *(undefined4 *)(lVar4 + 0x20) = param_5;
    *(undefined1 *)(lVar4 + 0x24) = *param_10;
    *(undefined1 *)(lVar4 + 0x25) = param_10[1];
    *(undefined1 *)(lVar4 + 0x26) = param_10[2];
    uVar1 = param_10[3];
    *(undefined4 *)(lVar4 + 0x28) = param_6;
    *(undefined4 *)(lVar4 + 0x2c) = uVar5;
    *(undefined1 *)(lVar4 + 0x27) = uVar1;
    *param_9 = *param_9 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  }
  return;
}




void thunk_FUN_00965adc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&uStack_2c,&uStack_30);
  uStack_34 = 0xffffffff;
  FUN_00965b68(0,0,uStack_2c,uStack_30,0,0,0,0x3f800000,param_2,&uStack_34,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00965d34(void)

{
  return 0;
}




undefined8 FUN_00965d3c(void)

{
  return 0;
}




undefined8 FUN_00965d44(void)

{
  return 0;
}




undefined8 FUN_00965d4c(void)

{
  return 0;
}




undefined8 FUN_00965d54(void)

{
  return 0;
}




undefined8 FUN_00965d5c(void)

{
  return 0;
}




void FUN_00965d64(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 long param_5,uint *param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00965ecc();
  if (0.0 < *(float *)(lVar3 + 0x18)) {
    (**(code **)(*param_3 + 0x68))(param_3,&local_60,&local_68);
    FUN_00f0061c();
    plVar4 = (long *)FUN_00f03548();
    fVar5 = (float)(**(code **)(*plVar4 + 0x48))();
    fVar7 = 0.0;
    if (*(short *)(lVar3 + 0x1c) != -1) {
      fVar7 = (float)(int)*(short *)(lVar3 + 0x1c);
    }
    fVar6 = 0.0;
    if (*(short *)(lVar3 + 0x1e) != -1) {
      fVar6 = (float)(int)*(short *)(lVar3 + 0x1e);
    }
    if (*(short *)(lVar3 + 0x20) != -1) {
      fVar5 = (float)(int)*(short *)(lVar3 + 0x20);
    }
    if (local_60 <= fVar5) {
      if (*(short *)(lVar3 + 0x22) != -1) {
        param_2 = (float)(int)*(short *)(lVar3 + 0x22);
      }
      if (((local_5c <= param_2) && (fVar7 <= local_68)) && (fVar6 <= local_64)) {
        uVar1 = *param_6;
        *(long **)(param_5 + (ulong)uVar1 * 8) = param_3 + 0x18;
        *param_6 = uVar1 + 1;
      }
    }
    FUN_00f029e4(param_3,param_4,param_5,param_6,param_7);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00965ec4(void)

{
  return 0;
}




long * FUN_00965ecc(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_50 [40];
  long local_28;
  
  puVar2 = auStack_50;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 0x84) & 1) != 0) {
    if (param_1[4] == 0) {
      FUN_00f017ac(auStack_50);
      lVar3 = *param_1;
    }
    else {
      puVar2 = (undefined1 *)FUN_00965ecc();
      lVar3 = *param_1;
    }
    (**(code **)(lVar3 + 0xd8))(param_1,puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00965f50(undefined8 param_1)

{
  FUN_00951534(param_1,1);
  return;
}




void FUN_00965f58(void)

{
  return;
}




void FUN_00965f5c(void)

{
  return;
}




void FUN_00965f60(void)

{
  return;
}




void FUN_00965f64(void)

{
  return;
}




undefined8 FUN_00965f68(char *param_1)

{
  int iVar1;
  char *__s1;
  long lVar2;
  ulong uVar3;
  
  if ((uint)DAT_02c7ed08 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if ((*(byte *)(DAT_02c7ed10 + lVar2) & 1) == 0) {
        __s1 = (char *)(DAT_02c7ed10 + lVar2 + 1);
      }
      else {
        __s1 = *(char **)(DAT_02c7ed10 + lVar2 + 0x10);
      }
      iVar1 = strcmp(__s1,param_1);
      if (iVar1 == 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < (uint)DAT_02c7ed08);
  }
  return 0;
}




void FUN_00965ffc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00965f68();
  if ((uVar2 & 1) == 0) {
    FUN_008fa54c(local_40,param_1);
    FUN_0096204c(&DAT_02c7ed08,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

