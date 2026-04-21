// functions/00d13 — 57 functions
#include "libGameKindred.h"




void FUN_00d13048(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d13050(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = FUN_00e6a474(uVar4);
  uVar2 = FUN_0091ed5c(uVar4,uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x18))(param_2 + 0x1688,uVar2);
  uVar2 = puVar3[1];
  *(undefined4 *)(param_1 + 0x30) = *puVar3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  local_58 = 0x4120000000000000;
  local_50 = 0;
  FUN_00d25570(param_2);
  uVar4 = thunk_FUN_00da2eb4();
  FUN_00ef0108(uVar4,param_1 + 0x30,(undefined4 *)(param_1 + 0x34),0,&local_58);
  FUN_00d1104c(param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d13140(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar2 = FUN_00d25570(param_2);
  if (lVar2 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = 0x10000;
  lVar3 = lVar2;
LAB_00d131b8:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x7fcd099f), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,lVar2,uVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d131b8;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d1322c(void)

{
  return;
}




void FUN_00d13230(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar2 = FUN_00d25570(param_2);
  if (lVar2 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = 0x10000;
  lVar3 = lVar2;
LAB_00d132a8:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar2) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x5b05080c), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,lVar2,uVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d132a8;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d1331c(void)

{
  return;
}




undefined4 FUN_00d13320(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d1332c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02813cd8;
  param_1[5] = 0;
  return;
}




void FUN_00d13360(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d13368(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = FUN_00e6a474(uVar5);
  uVar2 = FUN_0091ed5c(uVar5,uVar2,0x12345678);
  puVar3 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x18))(param_2 + 0x1688,uVar2);
  local_78 = *puVar3;
  local_70 = *(undefined4 *)(puVar3 + 1);
  lVar4 = FUN_00d25570(param_2);
  FUN_00d028e8(auStack_68,*(undefined4 *)(lVar4 + 0x260),&local_78);
  FUN_00ce20fc(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d13424(void)

{
  return;
}




void FUN_00d13428(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02813d60;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[6] = uVar1;
  return;
}




void FUN_00d1348c(undefined4 param_1,float param_2,long param_3,undefined4 param_4)

{
  *(undefined4 *)(param_3 + 0x3c) = param_4;
  *(undefined4 *)(param_3 + 0x40) = param_1;
  *(float *)(param_3 + 0x44) = param_2;
  *(bool *)(param_3 + 0x48) = 0.0 < param_2;
  return;
}




void FUN_00d134a4(void)

{
  return;
}




undefined4 FUN_00d134a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




byte thunk_FUN_00d134b8(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 2:
    lVar2 = 0x19d0;
    break;
  default:
    goto switchD_00d134f0_caseD_3;
  case 4:
    lVar2 = 0x1b10;
    break;
  case 5:
    lVar2 = 0x1b50;
    break;
  case 6:
    lVar2 = 0x1b90;
  }
  lVar2 = param_2 + lVar2;
  fVar3 = (float)FUN_009bc24c();
  if ((*(char *)(lVar2 + 0x38) == '\0') ||
     (*(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x30) < fVar3)) {
switchD_00d134f0_caseD_3:
    bVar1 = 0;
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar2 + 0x28);
    bVar1 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                      (*(undefined8 **)(param_2 + 0x1450),param_2,(undefined8 *)(param_1 + 0x30));
    *(byte *)(param_1 + 0x49) = bVar1 & 1;
  }
  return bVar1 & 1;
}




byte FUN_00d134b8(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 2:
    lVar2 = 0x19d0;
    break;
  default:
    goto switchD_00d134f0_caseD_3;
  case 4:
    lVar2 = 0x1b10;
    break;
  case 5:
    lVar2 = 0x1b50;
    break;
  case 6:
    lVar2 = 0x1b90;
  }
  lVar2 = param_2 + lVar2;
  fVar3 = (float)FUN_009bc24c();
  if ((*(char *)(lVar2 + 0x38) == '\0') ||
     (*(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x30) < fVar3)) {
switchD_00d134f0_caseD_3:
    bVar1 = 0;
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar2 + 0x28);
    bVar1 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                      (*(undefined8 **)(param_2 + 0x1450),param_2,(undefined8 *)(param_1 + 0x30));
    *(byte *)(param_1 + 0x49) = bVar1 & 1;
  }
  return bVar1 & 1;
}




void FUN_00d13580(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  fVar4 = *(float *)(param_1 + 6);
  uVar5 = *(undefined8 *)((long)param_1 + 0x34);
  uVar1 = FUN_00d134b8();
  if (((uVar1 & 1) != 0) &&
     (fVar2 = (float)*(undefined8 *)((long)param_1 + 0x34) - (float)uVar5,
     fVar3 = (float)((ulong)*(undefined8 *)((long)param_1 + 0x34) >> 0x20) -
             (float)((ulong)uVar5 >> 0x20),
     (*(float *)(param_1 + 6) - fVar4) * (*(float *)(param_1 + 6) - fVar4) + fVar2 * fVar2 +
     fVar3 * fVar3 <= 4.0)) {
                    /* WARNING: Could not recover jumptable at 0x00d13604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    return;
  }
  return;
}




void FUN_00d13608(long param_1,long param_2)

{
  long lVar1;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 2:
    lVar1 = 0x19d0;
    break;
  default:
    goto switchD_00d1362c_caseD_3;
  case 4:
    lVar1 = 0x1b10;
    break;
  case 5:
    lVar1 = 0x1b50;
    break;
  case 6:
    lVar1 = 0x1b90;
  }
  *(undefined1 *)(param_2 + lVar1 + 0x38) = 0;
switchD_00d1362c_caseD_3:
  *(undefined1 *)(param_2 + 0x19cc) = 0;
  FUN_00d256f0(param_2,0xf);
  return;
}




long FUN_00d13664(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 2:
    lVar1 = 0x19d0;
    break;
  default:
    goto switchD_00d13688_caseD_3;
  case 4:
    lVar1 = 0x1b10;
    break;
  case 5:
    lVar1 = 0x1b50;
    break;
  case 6:
    lVar1 = 0x1b90;
  }
  lVar1 = param_2 + lVar1;
switchD_00d13688_caseD_3:
  return lVar1;
}




void FUN_00d136b0(long param_1,long param_2)

{
  long lVar1;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 2:
    lVar1 = 0x19d0;
    break;
  default:
    goto switchD_00d136d0_caseD_3;
  case 4:
    lVar1 = 0x1b10;
    break;
  case 5:
    lVar1 = 0x1b50;
    break;
  case 6:
    lVar1 = 0x1b90;
  }
  *(undefined1 *)(param_2 + lVar1 + 0x38) = 0;
switchD_00d136d0_caseD_3:
  *(undefined1 *)(param_2 + 0x19cc) = 0;
  return;
}




undefined4 FUN_00d13704(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}




void FUN_00d1370c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d13714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}




void FUN_00d13718(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x38) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x30) = DAT_03218f30;
  return;
}




void FUN_00d13738(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02813e60;
  return;
}




void FUN_00d13768(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d13770(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_2 + 0x1420);
  plVar4 = (long *)*plVar5;
  if (plVar4 == (long *)0x0) {
    lVar2 = 0;
  }
  else if ((int)plVar5[1] == (int)plVar4[1]) {
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  else {
    *plVar5 = 0;
    lVar2 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(lVar2,auStack_80,0);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d061a8(auStack_70,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(lVar2 + 0x260),auStack_80,
               *(undefined4 *)(param_1 + 0x24),1);
  FUN_00ce20fc(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d13854(void)

{
  return;
}




void FUN_00d13858(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02813ee8;
  return;
}




void FUN_00d13888(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d13890(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  FUN_00d061a8(auStack_70,*(undefined4 *)(lVar2 + 0x260),0xffffffff,param_2 + 0x1430,
               *(undefined4 *)(param_1 + 0x24),1);
  FUN_00ce20fc(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d1391c(void)

{
  return;
}




void FUN_00d13920(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02813f70;
  return;
}




void FUN_00d13950(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d13958(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  FUN_00d55794(lVar2,auStack_80,0);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d061a8(auStack_70,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(lVar2 + 0x260),auStack_80,
               *(undefined4 *)(param_1 + 0x24),1);
  FUN_00ce20fc(auStack_70);
  *(undefined1 *)(param_2 + 0x19cc) = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d139fc(void)

{
  return;
}




void FUN_00d13a00(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02813ff8;
  return;
}




void FUN_00d13a30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d13a38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_2 + 0x1478);
  if (plVar4 == (long *)0x0) {
    lVar2 = 0;
  }
  else if (*(int *)(param_2 + 0x1480) == (int)plVar4[1]) {
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  else {
    *(undefined8 *)(param_2 + 0x1478) = 0;
    lVar2 = 0;
    *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
  }
  FUN_00d55794(lVar2,auStack_80,0);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d061a8(auStack_70,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(lVar2 + 0x260),auStack_80,
               *(undefined4 *)(param_1 + 0x24),1);
  FUN_00ce20fc(auStack_70);
  *(undefined1 *)(param_2 + 0x19cc) = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d13b24(void)

{
  return;
}




void FUN_00d13b28(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814080;
  return;
}




void FUN_00d13b58(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d13b60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  FUN_00d55794(lVar2,auStack_80,0);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d061a8(auStack_70,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(lVar2 + 0x260),auStack_80,
               *(undefined4 *)(param_1 + 0x24),1);
  FUN_00ce20fc(auStack_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d13bf8(void)

{
  return;
}




undefined4 FUN_00d13bfc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar2 = 0;
    pbVar3 = (byte *)(param_2 + 0xac);
    do {
      if ((*pbVar3 >> 1 & 1) != 0) {
        return 2;
      }
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x270));
  }
  uVar1 = 1;
  if (*(char *)(param_2 + 0x19cc) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d13c44(void)

{
  return;
}




undefined4 FUN_00d13c48(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00e0ba18(param_2 + 0x18,*(undefined8 *)(param_2 + 0x1428));
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d13c74(void)

{
  return;
}




undefined8 FUN_00d13c78(undefined8 param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 5000) != '\0') {
    plVar2 = *(long **)(param_2 + 0x1348);
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_2 + 0x1350) == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *(undefined8 *)(param_2 + 0x1348) = 0;
        uVar3 = 0;
        *(undefined4 *)(param_2 + 0x1350) = DAT_03214ce8;
      }
    }
    cVar1 = FUN_00d55870(uVar3);
    if (cVar1 == '\0') {
      *(long *)(param_2 + 0x1420) = param_2 + 0x1348;
      return 1;
    }
  }
  return 2;
}




void FUN_00d13d04(void)

{
  return;
}




undefined8 FUN_00d13d08(undefined8 param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 5000) != '\0') {
    plVar3 = *(long **)(param_2 + 0x1348);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)(param_2 + 0x1350) == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_2 + 0x1348) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_2 + 0x1350) = DAT_03214ce8;
    }
    cVar1 = FUN_00d55870(uVar4);
    if (cVar1 != '\0') {
      cVar1 = FUN_00d55870(uVar4);
      FUN_00d25570(param_2);
      cVar2 = FUN_00d55870();
      if (cVar1 != cVar2) {
        *(long *)(param_2 + 0x1420) = param_2 + 0x1348;
        return 1;
      }
    }
  }
  return 2;
}




void FUN_00d13dc4(void)

{
  return;
}




undefined8 FUN_00d13dc8(undefined8 param_1,long param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 5000) != '\0') {
    plVar3 = *(long **)(param_2 + 0x1348);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)(param_2 + 0x1350) == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_2 + 0x1348) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_2 + 0x1350) = DAT_03214ce8;
    }
    cVar1 = FUN_00d55870(uVar4);
    if (cVar1 != '\0') {
      cVar1 = FUN_00d55870(uVar4);
      FUN_00d25570(param_2);
      cVar2 = FUN_00d55870();
      if (cVar1 == cVar2) {
        *(long *)(param_2 + 0x1428) = param_2 + 0x1348;
        return 1;
      }
    }
  }
  return 2;
}




void FUN_00d13e84(void)

{
  return;
}




undefined8 FUN_00d13e88(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  if (*(char *)(param_2 + 0x13d0) != '\0') {
    if (*(float *)(param_2 + 0x58) < 6.0) {
      FUN_00ceace8();
      uVar1 = FUN_00ceb054();
      if ((uVar1 & 1) == 0) {
        return 2;
      }
    }
    lVar2 = FUN_00d25570(param_2);
    fVar3 = *(float *)(*(long *)(lVar2 + 0x40) + 0xd0);
    if ((0.0 < fVar3) &&
       (lVar2 = FUN_00d25570(param_2), 0.7 <= *(float *)(*(long *)(lVar2 + 0x40) + 0xcc) / fVar3)) {
      *(long *)(param_2 + 0x1420) = param_2 + 0x1390;
      return 1;
    }
  }
  return 2;
}




void FUN_00d13f2c(void)

{
  return;
}




void FUN_00d13f30(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  plVar6 = *(long **)(param_2 + 0x1420);
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    uVar3 = 0;
  }
  else if ((int)plVar6[1] == (int)plVar5[1]) {
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    *plVar6 = 0;
    uVar3 = 0;
    *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d55794(uVar3,auStack_58,0);
  FUN_00d55870(uVar2);
  uVar2 = FUN_00d25ff0();
  uVar4 = FUN_00d26640(uVar2,auStack_48,auStack_58,&local_68);
  if ((uVar4 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
    *(undefined4 *)(param_2 + 0x1438) = local_60;
    *(undefined8 *)(param_2 + 0x1430) = local_68;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

