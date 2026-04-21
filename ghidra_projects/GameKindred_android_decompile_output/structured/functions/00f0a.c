// functions/00f0a — 47 functions
#include "libGameKindred.h"




void FUN_00f0a0c8(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18;
  local_58 = *(undefined8 *)(lVar3 + 0x10);
  local_50 = local_58;
  if (param_2 <= param_3) {
    FUN_00f09ffc(param_1,lVar3,&local_50,&local_58);
    uVar2 = param_2;
    while (uVar2 = uVar2 + 1, uVar2 <= param_3) {
      FUN_00f09ffc(param_1,*(long *)(param_1 + 0x20) + (ulong)uVar2 * 0x18,&local_50,&local_58);
    }
    if (param_2 <= param_3) {
      fVar5 = *(float *)(param_1 + 0x28);
      lVar3 = *(long *)(param_1 + 0x20);
      do {
        lVar4 = lVar3 + (ulong)param_2 * 0x18;
        param_2 = param_2 + 1;
        *(float *)(lVar4 + 0x10) =
             (float)(int)(fVar5 - ((float)local_58 - (float)local_50)) + *(float *)(lVar4 + 0x10);
      } while (param_2 <= param_3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0a1c8(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar7 = (ulong)param_2;
  while ((param_2 <= param_3 &&
         (uVar5 = FUN_00f0a97c(*(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)param_3 * 0x18)),
         (uVar5 & 1) != 0))) {
    param_3 = param_3 - 1;
  }
  if (param_2 <= param_3) {
    uVar8 = 0;
    uVar5 = uVar7;
    do {
      uVar4 = FUN_00f0a97c(*(undefined4 *)(*(long *)(param_1 + 0x20) + uVar5 * 0x18));
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar1;
      uVar8 = uVar8 + (uVar4 & 1);
    } while (uVar1 <= param_3);
    if (uVar8 != 0) {
      lVar6 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18;
      local_78 = *(undefined8 *)(lVar6 + 0x10);
      if (param_3 < param_2) {
        local_70._0_4_ = (float)local_78;
        local_78._0_4_ = (float)local_70;
        uVar3 = local_78;
      }
      else {
        local_70 = local_78;
        FUN_00f09ffc(param_1,lVar6,&local_70,&local_78);
        uVar1 = param_2;
        while (uVar1 = uVar1 + 1, uVar1 <= param_3) {
          FUN_00f09ffc(param_1,*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x18,&local_70,&local_78);
        }
        uVar3 = local_70;
      }
      local_70 = uVar3;
      if (param_2 <= param_3) {
        fVar10 = *(float *)(param_1 + 0x28);
        fVar9 = (float)local_78 - (float)local_70;
        fVar11 = 0.0;
        do {
          uVar5 = FUN_00f0a97c(*(undefined4 *)(*(long *)(param_1 + 0x20) + uVar7 * 0x18));
          if ((uVar5 & 1) == 0) {
            lVar6 = *(long *)(param_1 + 0x20) + uVar7 * 0x18;
            *(float *)(lVar6 + 0x10) = fVar11 + *(float *)(lVar6 + 0x10);
          }
          else {
            fVar11 = (float)(int)((fVar10 - fVar9) / (float)uVar8) + fVar11;
          }
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
        } while (uVar1 <= param_3);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0a37c(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x20) + (ulong)param_2 * 0x18;
  local_58 = *(undefined8 *)(lVar4 + 0x10);
  if (param_3 < param_2) {
    local_50._0_4_ = (float)local_58;
    uVar3 = local_58;
  }
  else {
    local_50 = local_58;
    FUN_00f09ffc(param_1,lVar4,&local_50,&local_58);
    uVar2 = param_2;
    while (uVar2 = uVar2 + 1, uVar2 <= param_3) {
      FUN_00f09ffc(param_1,*(long *)(param_1 + 0x20) + (ulong)uVar2 * 0x18,&local_50,&local_58);
    }
    uVar3 = local_50;
  }
  local_50 = uVar3;
  if (param_2 <= param_3) {
    fVar7 = *(float *)(param_1 + 0x28);
    fVar6 = (float)local_58 - (float)local_50;
    lVar4 = *(long *)(param_1 + 0x20);
    do {
      lVar5 = lVar4 + (ulong)param_2 * 0x18;
      param_2 = param_2 + 1;
      *(float *)(lVar5 + 0x10) = (float)(int)((fVar7 - fVar6) * 0.5) + *(float *)(lVar5 + 0x10);
    } while (param_2 <= param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0a490(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x18;
        puVar4[2] = puVar2[2];
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
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




float FUN_00f0a520(float param_1,float param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00f08c10(param_3 + 0x1a);
  lVar2 = FUN_00f08c10(param_4 + 0x1a);
  fVar3 = 0.0;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    (**(code **)(*param_3 + 0x48))(0,param_3);
    fVar5 = *(float *)(lVar1 + 0x920);
    fVar3 = -fVar5;
    if (0.0 <= fVar5) {
      fVar3 = fVar5;
    }
    fVar5 = param_2 * (1.0 - *(float *)((long)param_3 + 0x54)) - fVar3;
    fVar4 = 0.0;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (**(code **)(*param_4 + 0x48))(param_4);
    if (param_1 <= fVar3) {
      param_1 = fVar3;
    }
    fVar3 = param_1 + fVar5 + *(float *)((long)param_4 + 0x54) * fVar4;
  }
  return fVar3;
}




float FUN_00f0a5e0(float param_1,float param_2,long *param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00f08c10(param_4 + 0x1a);
  if (lVar1 == 0) {
    param_1 = 0.0;
  }
  else {
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar2 = param_2 * (1.0 - *(float *)((long)param_3 + 0x54));
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    (**(code **)(*param_4 + 0x48))(param_4);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    param_1 = param_1 + fVar2 + *(float *)((long)param_4 + 0x54) * param_2;
  }
  return param_1;
}




void FUN_00f0a674(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00f08c10(param_2 + 0xd0);
  lVar2 = FUN_00f08c10(param_3 + 0xd0);
  fVar3 = *(float *)(lVar1 + 0x920);
  fVar5 = *(float *)(lVar2 + 0x920);
  fVar4 = -fVar3;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = -fVar5;
  if (0.0 <= fVar5) {
    fVar3 = fVar5;
  }
  FUN_00f07b18((fVar4 - fVar3) + param_1,param_2,2,param_3,2);
  return;
}




void FUN_00f0a6f4(undefined8 param_1,float param_2,long param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00f08c10(param_3 + 0xd0);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x920);
    fVar3 = -fVar2;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    FUN_00f07940(param_1,*(float *)(param_3 + 0x4c) * fVar3 + param_2,param_3,param_4,param_5,
                 param_6);
    return;
  }
  return;
}




void FUN_00f0a784(undefined8 *param_1)

{
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf8 | 4;
  return;
}




void FUN_00f0a79c(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_01997b00();
    FUN_01998658(uVar1,*param_1);
    return;
  }
  return;
}




void FUN_00f0a7d4(long *param_1)

{
  FUN_01997e94(*(undefined8 *)(*param_1 + 8));
  return;
}




void FUN_00f0a7e0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01997f5c(param_2);
  FUN_01997e94(*(undefined8 *)(*param_1 + 8),uVar1);
  return;
}




void FUN_00f0a814(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_00f1c904(param_2,local_50);
  bVar3 = 0;
  if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
    bVar3 = FUN_00e70308(&DAT_0320ffc0);
    bVar3 = DAT_0320ffd8 < 0x80000001 | (bVar3 ^ 0xff) & 1;
  }
  uVar4 = FUN_01997b00();
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_0199824c(uVar4,pvVar1,bVar3);
  uVar4 = FUN_01997b00();
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  uVar4 = FUN_0199849c(uVar4,pvVar1,0,0,1);
  *param_1 = uVar4;
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte FUN_00f0a908(void)

{
  byte bVar1;
  
  bVar1 = FUN_00e70308(&DAT_0320ffc0);
  return DAT_0320ffd8 < 0x80000001 | (bVar1 ^ 0xff) & 1;
}




void FUN_00f0a948(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_01997b00();
    FUN_01998658(uVar1,*param_1);
    *param_1 = 0;
  }
  return;
}




bool FUN_00f0a97c(int param_1)

{
  return param_1 == 0x20;
}




bool FUN_00f0a988(int param_1)

{
  return param_1 == 0x200b;
}




bool FUN_00f0a998(int param_1)

{
  return param_1 == 10;
}




undefined8 FUN_00f0a9a4(int param_1)

{
  if ((param_1 != 0x2d) && (param_1 != 0x2022)) {
    return 0;
  }
  return 1;
}




undefined4 FUN_00f0a9cc(int param_1,int *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = 1;
  if (((param_1 != 0x20) && (param_1 != 0x200b)) &&
     ((param_1 - 0x30a0U < 0x60 ||
      ((param_1 - 0x4e00U >> 6 < 0x147 || (uVar1 = 0, param_1 - 0x3040U < 0x60)))))) {
    uVar2 = 0;
    do {
      if ((&DAT_01bf44f0)[uVar2] == param_1) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10);
    if (param_2 == (int *)0x0) {
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      do {
        if ((&DAT_01bf43b0)[uVar2] == *param_2) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        uVar1 = 1;
      } while (uVar2 < 0x50);
    }
  }
  return uVar1;
}




bool FUN_00f0aa88(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((0x146 < param_1 - 0x4e00U >> 6) && (0x5f < param_1 - 0x3040U)) {
    bVar1 = param_1 - 0x30a0U < 0x60;
  }
  return bVar1;
}




undefined8 FUN_00f0aac8(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_01bf44f0)[lVar1] == param_1) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x10);
  return 0;
}




undefined8 FUN_00f0aafc(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_01bf43b0)[lVar1] == param_1) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x50);
  return 0;
}




bool FUN_00f0ab30(int param_1)

{
  return param_1 - 0x4e00U >> 6 < 0x147;
}




bool FUN_00f0ab48(int param_1)

{
  return param_1 - 0x3040U < 0x60;
}




bool FUN_00f0ab5c(int param_1)

{
  return param_1 - 0x30a0U < 0x60;
}




bool FUN_00f0ab70(uint param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((0x4f < param_1 - 0xd7b0) && ((param_1 & 0xffffffe0) != 0xa960)) &&
      ((param_1 & 0xffffff00) != 0x3200)) &&
     (((0x5f < param_1 - 0x3130 && (0x2ba < param_1 - 0xac00 >> 4)) &&
      ((param_1 & 0xffffff00) != 0x1100)))) {
    bVar1 = param_1 - 0xff00 < 0xf0;
  }
  return bVar1;
}




undefined8 FUN_00f0abec(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_01bf4530)[lVar1] == param_1) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x21);
  return 0;
}




undefined8 FUN_00f0ac20(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_01bf45b4)[lVar1] == param_1) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x18);
  return 0;
}




undefined8 FUN_00f0ac54(void)

{
  return 0x25a1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0ac5c(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_02825728;
  FUN_00f017e8(param_1 + 0x17);
  param_1[0x17] = &PTR_FUN_02825878;
  param_1[0x28] = _DAT_03218ef8;
  FUN_00f023ec(param_1,param_1 + 0x17,1);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffbf;
  return;
}




void FUN_00f0acd4(long *param_1,float *param_2)

{
  if ((*(float *)(param_1 + 10) != *param_2) || (*(float *)((long)param_1 + 0x54) != param_2[1])) {
    param_1[10] = *(long *)param_2;
    FUN_0091ada4(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f0ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void thunk_FUN_00f0ad30(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ((float)*(undefined8 *)(param_1 + 0x140) - (float)*(undefined8 *)(param_1 + 0x50)) *
          (float)*(undefined8 *)(param_1 + 0x90);
  fVar2 = ((float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20)) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  if ((*(float *)(param_1 + 0xf8) == fVar1) && (*(float *)(param_1 + 0xfc) == fVar2)) {
    return;
  }
  *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar2,fVar1);
  FUN_0091ada4(param_1 + 0xb8);
  return;
}




void FUN_00f0ad30(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ((float)*(undefined8 *)(param_1 + 0x140) - (float)*(undefined8 *)(param_1 + 0x50)) *
          (float)*(undefined8 *)(param_1 + 0x90);
  fVar2 = ((float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20)) *
          (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  if ((*(float *)(param_1 + 0xf8) == fVar1) && (*(float *)(param_1 + 0xfc) == fVar2)) {
    return;
  }
  *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar2,fVar1);
  FUN_0091ada4(param_1 + 0xb8);
  return;
}




void FUN_00f0ad74(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x28) = param_1;
  *(undefined4 *)((long)param_3 + 0x144) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00f0ad84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0xe8))();
  return;
}




void FUN_00f0ad88(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0xb8,param_2,param_3 & 1);
  return;
}




void FUN_00f0ad94(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0xb8,param_2,param_3 & 1);
  return;
}




undefined1  [16] FUN_00f0ada0(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416(DAT_03218ef8);
}




void FUN_00f0add4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0ae10(void *param_1)

{
  FUN_00f01868();
  operator_delete(param_1);
  return;
}




void FUN_00f0ae34(undefined8 *param_1)

{
  FUN_00f0e4a8();
  param_1[0x17] = &PTR_FUN_02825ae0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_02825978;
  param_1[0x1f] = 0;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xf8;
  return;
}




void FUN_00f0ae84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00f0aec4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(param_1 + -0x17);
  return;
}




void FUN_00f0af00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f0af48(long param_1)

{
  FUN_00f0af00(param_1 + -0xb8);
  return;
}




void FUN_00f0af50(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined8 **)(param_1 + 0xf0) = param_2;
  FUN_00f0e548(param_1,*param_2,param_2[1]);
  uVar1 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x1c));
  uVar2 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0xf0) + 0x20));
  FUN_00f13f08(uVar1,uVar2,param_1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_00f0af9c(param_1);
  return;
}




void FUN_00f0af9c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar16 = FUN_00f0e650();
  bVar6 = *(byte *)(param_1 + 0xd8);
  lVar17 = FUN_00f0a7d4(param_1 + 0xd0,uVar16);
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar17 + 4));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar17 + 8));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar17 + 6));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar17 + 10));
  fVar19 = fVar20;
  fVar13 = fVar20 + fVar12;
  if ((bVar6 & 1) == 0) {
    fVar19 = fVar20 + fVar12;
    fVar13 = fVar20;
  }
  fVar20 = fVar11;
  fVar12 = fVar11 + fVar14;
  if ((bVar6 & 2) == 0) {
    fVar20 = fVar11 + fVar14;
    fVar12 = fVar11;
  }
  lVar17 = *(long *)(param_1 + 0xf0);
  uVar7 = *(ushort *)(*(long *)(param_1 + 0xe0) + 8);
  uVar2 = *(uint *)(lVar17 + 0x1c);
  uVar3 = *(uint *)(lVar17 + 0x20);
  uVar4 = *(uint *)(lVar17 + 0x10);
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar8 = uVar7 / uVar2;
  }
  uVar5 = *(uint *)(*(long *)(*(long *)(param_1 + 0xd0) + 8) + 0x3c);
  uVar1 = uVar4 + (int)*(float *)(param_1 + 0xf8);
  uVar9 = 0;
  uVar18 = (uint)*(ushort *)(*(long *)(param_1 + 0xe0) + 10);
  if (uVar3 != 0) {
    uVar9 = uVar18 / uVar3;
  }
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar1 / uVar9;
  }
  fVar11 = (float)uVar2 / (float)uVar7;
  fVar14 = (float)uVar3 / (float)uVar18;
  fVar21 = 1.0 / (float)(uVar5 & 0x3fff);
  fVar13 = fVar21 * fVar13;
  uVar2 = 0;
  if (uVar8 != 0) {
    uVar2 = uVar1 / uVar8;
  }
  fVar15 = 1.0 / (float)(uVar5 >> 0xe & 0x3fff);
  fVar12 = 1.0 - fVar15 * fVar12;
  fVar19 = fVar21 * fVar19 - fVar13;
  fVar20 = (1.0 - fVar15 * fVar20) - fVar12;
  *(float *)(param_1 + 0x108) =
       (fVar13 + fVar19 * fVar11 * (float)(uVar1 - uVar2 * uVar8)) - fVar13 * fVar11;
  *(float *)(param_1 + 0x100) = fVar11;
  *(float *)(param_1 + 0x104) = fVar14;
  *(float *)(param_1 + 0x10c) = (fVar12 + fVar20 * fVar14 * (float)uVar10) - fVar12 * fVar14;
  if ((*(byte *)(param_1 + 0x120) >> 2 & 1) != 0) {
    uVar2 = *(uint *)(lVar17 + 0x14);
    *(float *)(param_1 + 0x110) = fVar11;
    *(float *)(param_1 + 0x114) = fVar14;
    if (uVar1 + 1 <= uVar2) {
      uVar4 = uVar1 + 1;
    }
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar4 / uVar8;
    }
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = uVar4 / uVar9;
    }
    *(float *)(param_1 + 0x118) =
         (fVar13 + fVar19 * fVar11 * (float)(uVar4 - uVar2 * uVar8)) - fVar13 * fVar11;
    *(float *)(param_1 + 0x11c) = (fVar12 + fVar20 * fVar14 * (float)uVar3) - fVar12 * fVar14;
  }
  return;
}

