// functions/00d0c — 48 functions
#include "libGameKindred.h"




void FUN_00d0c140(void)

{
  return;
}




void FUN_00d0c144(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02812390;
  *(undefined4 *)(param_1 + 6) = 1;
  return;
}




void FUN_00d0c180(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}




void FUN_00d0c18c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d25570(param_2);
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = FUN_00e6a474(uVar6);
  uVar2 = FUN_0091ed5c(uVar6,uVar2,0x12345678);
  FUN_00d9ff84(local_40,uVar2);
  uVar5 = FUN_00d6bbac(lVar4,local_40[0],0);
  if ((uVar5 & 1) != 0) {
    FUN_00d9ff84(local_48,uVar2);
    uVar3 = FUN_00d6bb44(lVar4,local_48[0]);
    if (*(uint *)(param_1 + 0x30) <= uVar3) {
      uVar6 = 1;
      goto LAB_00d0c254;
    }
  }
  uVar6 = 2;
LAB_00d0c254:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00d0c27c(void)

{
  return;
}




void FUN_00d0c280(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812418;
  param_1[5] = 0;
  return;
}




void FUN_00d0c2b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d0c2bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_150 [2];
  undefined1 auStack_148 [96];
  long local_e8 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d25570(param_2);
  FUN_00d4d9e8(auStack_148);
  uVar6 = 1;
  FUN_00d4dabc(auStack_148,1);
  FUN_00d4daf4(auStack_148,1,0,1,uVar4);
  FUN_00d55870(uVar4);
  uVar2 = FUN_00ced7b4();
  iVar3 = FUN_00d9e840(auStack_148,local_e8,uVar2,0);
  if (0 < iVar3) {
    lVar8 = 0;
    do {
      lVar7 = *(long *)(local_e8[lVar8] + 0x18);
      while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar7 = *(long *)(lVar7 + 0x20);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = FUN_00e6a474(uVar4);
      uVar2 = FUN_0091ed5c(uVar4,uVar2,0x12345678);
      FUN_00d9ff84(local_150,uVar2);
      uVar5 = FUN_00d6bbac(lVar7,local_150[0],0);
      if ((uVar5 & 1) == 0) {
        uVar6 = 2;
        goto LAB_00d0c3e0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
    uVar6 = 1;
  }
LAB_00d0c3e0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d0c418(void)

{
  return;
}




undefined4 FUN_00d0c41c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00d25570(param_2);
  uVar2 = FUN_00d74024(uVar1,0);
  uVar3 = 1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00d0c448(void)

{
  return;
}




void FUN_00d0c44c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 local_c8 [8];
  float local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x8000000);
  FUN_00d4dca4(auStack_98,PTR_s_Neutral_JungleMinion_StoreCenter_02beb2e8,0);
  lVar3 = FUN_00d9dc3c(0x41f00000,uVar2,auStack_98);
  if (lVar3 != 0) {
    FUN_00d55794(uVar2,auStack_a8,0);
    FUN_00d55794(lVar3,local_b8,0);
    FUN_00d55870(uVar2);
    uVar2 = FUN_00d25ff0();
    uVar4 = FUN_00d26640(uVar2,auStack_a8,local_b8,local_c8);
    if ((uVar4 & 1) != 0) {
      uVar2 = NEON_fmov(0x3f400000,4);
      uVar5 = NEON_fmov(0x3e800000,4);
      *(ulong *)(param_2 + 0x1430) =
           CONCAT44(local_c8._4_4_ * (float)((ulong)uVar2 >> 0x20) +
                    local_b8._4_4_ * (float)((ulong)uVar5 >> 0x20),
                    local_c8._0_4_ * (float)uVar2 + local_b8._0_4_ * (float)uVar5);
      *(float *)(param_2 + 0x1438) = local_c0 * 0.75 + local_b0 * 0.25;
      uVar2 = 1;
      goto LAB_00d0c54c;
    }
  }
  uVar2 = 2;
LAB_00d0c54c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d0c574(void)

{
  return;
}




void FUN_00d0c578(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028124a0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d0c5ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_00d0c5b4(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00e0bac0(param_2);
  uVar2 = 1;
  if (uVar1 < *(uint *)(param_1 + 0x24)) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d0c5e8(void)

{
  return;
}




void FUN_00d0c5ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  lVar7 = *(long *)(lVar3 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  uVar4 = FUN_00d25628(param_2);
  FUN_00d74024(lVar3,&local_4c);
  iVar2 = FUN_00da3904(lVar3,uVar4,local_4c,1,1);
  uVar5 = FUN_00e0bac0(param_2);
  if (iVar2 == 0xffff) {
    uVar8 = 2;
  }
  else {
    uVar6 = FUN_00da3778(uVar5,lVar7,uVar4,iVar2,0,0);
    uVar8 = 1;
    if ((uVar6 & 1) == 0) {
      uVar8 = 2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}




void FUN_00d0c6f0(void)

{
  return;
}




void FUN_00d0c6f4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812528;
  *(undefined4 *)((long)param_1 + 0x24) = 0x40400000;
  return;
}




void FUN_00d0c72c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d0c734(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [96];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d25570(param_2);
  FUN_00d55794(uVar3,auStack_b0,0);
  FUN_00d4d9e8(auStack_a0);
  FUN_00d4dabc(auStack_a0,0x2000);
  FUN_00d4daf4(auStack_a0,1,0,0,uVar3);
  FUN_00d4db48(*(float *)(param_1 + 0x24) + 2.15,auStack_a0,auStack_b0);
  FUN_00d4d364(auStack_a0,0);
  uVar2 = FUN_00d9e840(auStack_a0,&local_40,1,0);
  if (uVar2 != 0) {
    uVar4 = 0;
    uVar5 = (ulong)*(ushort *)(local_40 + 0x88) & 0x1f;
    do {
      if (((int)uVar5 == 0x1f) || (1 < ((ushort *)(local_40 + 0x88))[uVar5 * 0x1c + 4] - 3)) {
        uVar3 = 1;
        goto LAB_00d0c828;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar3 = 2;
LAB_00d0c828:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d0c850(void)

{
  return;
}




void FUN_00d0c854(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028125b0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x40400000;
  return;
}




void FUN_00d0c88c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d0c894(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,local_48,0);
  if (*(long *)(param_2 + 0x14f8) != 0) {
    if (*(int *)(param_2 + 0x1500) == *(int *)(*(long *)(param_2 + 0x14f8) + 8)) {
      local_48[0] = local_48[0] - *(float *)(param_2 + 0x1508);
      fVar3 = (float)local_48._4_8_ - (float)*(undefined8 *)(param_2 + 0x150c);
      fVar4 = SUB84(local_48._4_8_,4) - (float)((ulong)*(undefined8 *)(param_2 + 0x150c) >> 0x20);
      if (local_48[0] * local_48[0] + fVar3 * fVar3 + fVar4 * fVar4 <
          *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24)) {
        uVar2 = 1;
        goto LAB_00d0c948;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x14f8) = 0;
      *(undefined4 *)(param_2 + 0x1500) = DAT_03214ce8;
    }
  }
  uVar2 = 2;
LAB_00d0c948:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d0c970(void)

{
  return;
}




undefined8 FUN_00d0c974(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      if ((*(byte *)(param_2 + 0x14b4) >> 3 & 1) != 0) {
        return 1;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1478) = 0;
      *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
    }
  }
  return 2;
}




void FUN_00d0c9bc(void)

{
  return;
}




void FUN_00d0c9c0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812638;
  return;
}




void FUN_00d0c9f0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d0c9f8(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  
  uVar3 = 2;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    lVar4 = 0x19d0;
    break;
  default:
    goto switchD_00d0ca34_caseD_3;
  case 4:
    lVar4 = 0x1b10;
    break;
  case 5:
    lVar4 = 0x1b50;
    break;
  case 6:
    lVar4 = 0x1b90;
  }
  plVar1 = (long *)(param_2 + lVar4);
  fVar8 = (float)FUN_009bc24c(2);
  if (((char)plVar1[7] == '\0') ||
     (*(float *)((long)plVar1 + 0x2c) + *(float *)(plVar1 + 6) < fVar8)) {
    uVar3 = 2;
  }
  else {
    *(int *)(param_2 + 0x1438) = (int)plVar1[5];
    *(long *)(param_2 + 0x1430) = plVar1[4];
    if (*(int *)(param_2 + 0x1330) != 0) {
      uVar6 = 0;
      puVar7 = (undefined8 *)(param_2 + 0x1230);
      do {
        lVar4 = (**(code **)(*(long *)*puVar7 + 0x10))();
        plVar5 = (long *)*plVar1;
        if (plVar5 != (long *)0x0) {
          if ((int)plVar1[1] == (int)plVar5[1]) {
            iVar2 = *(int *)(lVar4 + 0x260);
            lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
            if ((lVar4 != 0) && (iVar2 == *(int *)(lVar4 + 0x260))) {
              *(undefined8 **)(param_2 + 0x1428) = puVar7;
              break;
            }
          }
          else {
            *plVar1 = 0;
            *(undefined4 *)(plVar1 + 1) = DAT_03214ce8;
          }
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 8;
      } while (uVar6 < *(uint *)(param_2 + 0x1330));
    }
    uVar3 = 1;
  }
switchD_00d0ca34_caseD_3:
  return uVar3;
}




void FUN_00d0cb38(void)

{
  return;
}




undefined8 FUN_00d0cb3c(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_2 + 0x378) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x278;
    do {
      if ((*(byte *)(param_2 + (ulong)uVar2 * 0x40 + 0x2b4) & 1) != 0) {
        *(long *)(param_2 + 0x1428) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x378));
  }
  if (*(uint *)(param_2 + 0x888) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x688;
    do {
      if ((*(byte *)(param_2 + (ulong)uVar2 * 0x40 + 0x6c4) & 1) != 0) {
        *(long *)(param_2 + 0x1428) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x888));
  }
  return 2;
}




void FUN_00d0cbbc(void)

{
  return;
}




undefined8 FUN_00d0cbc0(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_2 + 0x378) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x278;
    do {
      if ((*(byte *)(param_2 + (ulong)uVar2 * 0x40 + 0x2b4) & 1) != 0) {
        *(long *)(param_2 + 0x1428) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x378));
  }
  return 2;
}




void FUN_00d0cc04(void)

{
  return;
}




undefined8 FUN_00d0cc08(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_00d25570(param_2);
  FUN_00d55870();
  uVar1 = FUN_00d25ff0();
  if (*(int *)(param_2 + 0x378) != 0) {
    uVar3 = 0;
    lVar4 = param_2 + 0x278;
    do {
      uVar2 = FUN_00d26a50(uVar1,lVar4 + 0x10);
      if ((uVar2 & 1) != 0) {
        *(long *)(param_2 + 0x1428) = lVar4;
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x40;
    } while (uVar3 < *(uint *)(param_2 + 0x378));
  }
  return 2;
}




void FUN_00d0cc84(void)

{
  return;
}




void FUN_00d0cc88(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028126c0;
  return;
}




void FUN_00d0ccb8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d0ccc0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(int *)(param_1 + 0x24) == 0) &&
     (plVar2 = (long *)FUN_00d0add0("__MASTER__",param_2), plVar2 != (long *)0x0)) {
    plVar3 = (long *)*plVar2;
    lVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if ((int)plVar2[1] == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *plVar2 = 0;
        lVar4 = 0;
        *(undefined4 *)(plVar2 + 1) = DAT_03214ce8;
      }
    }
    uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
      *(long **)(param_2 + 0x1428) = plVar2;
      return 1;
    }
  }
  return 2;
}




void FUN_00d0cd78(void)

{
  return;
}




void FUN_00d0cd7c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812748;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f40000000000001;
  return;
}




void FUN_00d0cdb8(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




undefined8 FUN_00d0cdc4(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    if (*(undefined8 **)(param_2 + 0x1428) != (undefined8 *)0x0) {
      lVar1 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1428) + 0x10))();
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar8 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
              (*(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
      if (DAT_031500a0 <= fVar8) {
        fVar8 = DAT_031500a0;
      }
      fVar6 = DAT_0314ffe0;
      if (DAT_0314ffe0 <= fVar8) {
        fVar6 = fVar8;
      }
      if (*(float *)(lVar1 + 0x308) / fVar6 <= *(float *)(param_1 + 0x28)) {
        return 1;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x24) == 1) && (*(int *)(param_2 + 0x378) != 0)) {
    fVar8 = 1.0;
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x278);
    puVar2 = (undefined8 *)0x0;
    do {
      lVar1 = (**(code **)(*(long *)*puVar5 + 0x10))();
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar6 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
              (*(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
      if (DAT_031500a0 <= fVar6) {
        fVar6 = DAT_031500a0;
      }
      fVar7 = DAT_0314ffe0;
      if (DAT_0314ffe0 <= fVar6) {
        fVar7 = fVar6;
      }
      fVar7 = *(float *)(lVar1 + 0x308) / fVar7;
      puVar3 = puVar2;
      fVar6 = fVar8;
      if ((fVar7 <= *(float *)(param_1 + 0x28)) &&
         (puVar3 = puVar5, fVar6 = fVar7, puVar2 != (undefined8 *)0x0 && fVar8 <= fVar7)) {
        puVar3 = puVar2;
        fVar6 = fVar8;
      }
      fVar8 = fVar6;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
      puVar2 = puVar3;
    } while (uVar4 < *(uint *)(param_2 + 0x378));
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 **)(param_2 + 0x1428) = puVar3;
      return 1;
    }
  }
  return 2;
}




void FUN_00d0cf60(void)

{
  return;
}




undefined8 FUN_00d0cf64(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_2 + 0x888) != 0) {
    fVar8 = 1.0;
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x688);
    puVar2 = (undefined8 *)0x0;
    do {
      lVar1 = (**(code **)(*(long *)*puVar5 + 0x10))();
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar6 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
              (*(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
      if (DAT_031500a0 <= fVar6) {
        fVar6 = DAT_031500a0;
      }
      fVar7 = DAT_0314ffe0;
      if (DAT_0314ffe0 <= fVar6) {
        fVar7 = fVar6;
      }
      fVar7 = *(float *)(lVar1 + 0x308) / fVar7;
      puVar3 = puVar2;
      fVar6 = fVar8;
      if ((fVar7 <= 0.7) &&
         (puVar3 = puVar5, fVar6 = fVar7, puVar2 != (undefined8 *)0x0 && fVar8 <= fVar7)) {
        puVar3 = puVar2;
        fVar6 = fVar8;
      }
      fVar8 = fVar6;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
      puVar2 = puVar3;
    } while (uVar4 < *(uint *)(param_2 + 0x888));
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 **)(param_2 + 0x1428) = puVar3;
      return 1;
    }
  }
  return 2;
}

