// functions/00a1b — 35 functions
#include "libGameKindred.h"




void FUN_00a1b094(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00a1b09c(long *param_1,int param_2,int param_3,undefined8 *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_150 [96];
  long alStack_f0 [16];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*param_1 == 0) goto LAB_00a1b2bc;
  if (param_2 == -1) {
    bVar3 = false;
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_00d9e390(param_2);
    if (lVar9 == 0) {
      bVar3 = false;
    }
    else {
      cVar4 = FUN_00d55870(*param_1);
      cVar5 = FUN_00d55870(lVar9);
      if (cVar4 != cVar5) goto LAB_00a1b2bc;
      bVar3 = true;
    }
  }
  puVar1 = &DAT_03218f30;
  if (param_4 != (undefined8 *)0x0) {
    puVar1 = param_4;
  }
  if (*(uint *)(param_1 + 1) != 0) {
    uVar8 = 0;
    do {
      if (*(int *)(param_1[2] + uVar8 * 4) == param_2) goto LAB_00a1b2bc;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 1));
  }
  if (param_2 == param_3 && bVar3) {
    FUN_00d4d9e8(auStack_150);
    FUN_00d4daf4(auStack_150,1,0,0,lVar9);
    FUN_00d4dabc(auStack_150,1);
    FUN_00d4d364(auStack_150,1);
    uVar6 = FUN_00d9e840(auStack_150,alStack_f0,0x10,0);
    if (uVar6 != 0) {
      uVar8 = (ulong)uVar6;
      plVar7 = alStack_f0;
      do {
        FUN_00d5e230(*plVar7,param_2,*(undefined4 *)(*plVar7 + 0x260),param_5,param_6);
        uVar8 = uVar8 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar8 = FUN_00ceab64();
    if (param_3 == -1) {
      if (((uVar8 & 1) != 0) ||
         (uVar8 = FUN_00a1b328(*param_1,lVar9,puVar1,param_5), (uVar8 & 1) != 0)) goto LAB_00a1b2bc;
    }
    else {
      if (((uVar8 & 1) != 0) || (lVar9 = FUN_00d9e390(param_3), lVar9 == 0)) goto LAB_00a1b2bc;
      FUN_00d5e230(lVar9,param_2,param_3,param_5,param_6);
    }
  }
  FUN_00a1fdf8(param_2,param_3,puVar1,param_5,param_6);
  for (plVar7 = *(long **)(*param_1 + 0x18); plVar7 != (long *)0x0; plVar7 = (long *)plVar7[4]) {
    if (*(int *)(plVar7[1] + 0xa4) == DAT_0312e4a8) {
      (**(code **)(*plVar7 + 400))(plVar7,param_2,param_3,puVar1,param_5);
      break;
    }
  }
LAB_00a1b2bc:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a1b2f0(long param_1,int param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 8) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x10) + uVar1 * 4) == param_2) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 0;
}




void FUN_00a1b328(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_7c8 [96];
  undefined1 auStack_768 [96];
  undefined1 auStack_708 [1600];
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x260) == *(int *)(param_2 + 0x260)) goto LAB_00a1b460;
    FUN_00ceace8(0);
    uVar5 = FUN_00ceae78();
    if (param_4 == 6) {
      uVar4 = 0;
      if ((uVar5 & 1) == 0) goto LAB_00a1b460;
      FUN_00d4d9e8(auStack_768);
      FUN_00d4dabc(auStack_768,1);
      FUN_00d4daf4(auStack_768,1,0,0,param_2);
      FUN_00d4db70(0x42a20000,auStack_768,param_3);
      iVar2 = FUN_00d9e840(auStack_768,auStack_c8,0x10,0);
      FUN_00d4d9e8(auStack_7c8);
      FUN_00d4dabc(auStack_7c8,0x10000);
      FUN_00d4db70(0x41100000,auStack_7c8,param_3);
      FUN_00d4d364(auStack_7c8,0);
      FUN_00d4daf4(auStack_7c8,0,1,0,param_1);
      iVar3 = FUN_00d9e840(auStack_7c8,auStack_708,200,0);
      if ((iVar2 != 0) && (iVar3 == 0)) {
        FUN_00ceace8();
        FUN_00908ae0();
        uVar4 = 1;
        goto LAB_00a1b460;
      }
    }
  }
  uVar4 = 0;
LAB_00a1b460:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00a1b48c(long param_1,int param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  int local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar6 = (uint *)(param_1 + 8);
  uVar2 = *puVar6;
  uVar4 = (ulong)uVar2;
  local_4c = param_2;
  if ((param_3 & 1) == 0) {
    if (uVar2 != 0) {
      lVar7 = 0;
      uVar5 = 0;
      do {
        piVar1 = (int *)(*(long *)(param_1 + 0x10) + lVar7);
        if (*piVar1 == param_2) {
          FUN_00a1b8f0(puVar6,piVar1,piVar1 + 1);
          uVar4 = (ulong)*puVar6;
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 4;
      } while (uVar5 < uVar4);
    }
  }
  else {
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x10) + uVar5 * 4) == param_2) goto LAB_00a1b53c;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    FUN_0091f584(puVar6,&local_4c);
  }
LAB_00a1b53c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1b568(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00a1b610();
  if (fVar3 <= 0.0) {
    FUN_00d061a8(auStack_70,*(undefined4 *)(*param_1 + 0x260),param_2,&DAT_03218f30,param_3,1);
    FUN_00ce20fc(auStack_70);
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      FUN_00e70314(param_1 + 3);
      iVar2 = (int)param_1[5];
    }
    *(int *)(param_1 + 5) = iVar2 + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00a1b610(ulong param_1)

{
  long lVar1;
  uint uVar2;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  timespec local_58;
  long local_48;
  ulong uVar3;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar6 = 0.0;
  uVar3 = param_1;
  if (3 < *(uint *)(param_1 + 0x28)) {
    uVar2 = clock_gettime(1,&local_58);
    uVar3 = (ulong)uVar2;
    lVar5 = local_58.tv_nsec - *(long *)(param_1 + 0x20);
    lVar4 = local_58.tv_sec - *(long *)(param_1 + 0x18);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (local_58.tv_nsec + 1000000000) - *(long *)(param_1 + 0x20);
    }
    fVar7 = *(float *)(param_1 + 0x2c);
    if ((double)(lVar5 + lVar4 * 1000000000) * 1e-09 < (double)fVar7) {
      uVar2 = clock_gettime(1,&local_58);
      uVar3 = (ulong)uVar2;
      lVar5 = local_58.tv_nsec - *(long *)(param_1 + 0x20);
      lVar4 = local_58.tv_sec - *(long *)(param_1 + 0x18);
      if (lVar5 < 0) {
        lVar4 = lVar4 + -1;
        lVar5 = (local_58.tv_nsec + 1000000000) - *(long *)(param_1 + 0x20);
      }
      fVar6 = (float)((double)fVar7 + (double)(lVar5 + lVar4 * 1000000000) * -1e-09);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return fVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00a1b728(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    FUN_00e70314(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar1 + param_2;
  return;
}




void FUN_00a1b764(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00a1b610();
  if (fVar3 <= 0.0) {
    FUN_00d061a8(auStack_70,*(undefined4 *)(*param_1 + 0x260),0xffffffff,param_2,param_3,1);
    FUN_00ce20fc(auStack_70);
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      FUN_00e70314(param_1 + 3);
      iVar2 = (int)param_1[5];
    }
    *(int *)(param_1 + 5) = iVar2 + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1b810(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00a1b610();
  if (fVar3 <= 0.0) {
    FUN_00d061a8(auStack_70,*(undefined4 *)(*param_1 + 0x260),*(undefined4 *)(*param_1 + 0x260),
                 &DAT_03218f30,param_2,param_3);
    FUN_00ce20fc(auStack_70);
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      FUN_00e70314(param_1 + 3);
      iVar2 = (int)param_1[5];
    }
    *(int *)(param_1 + 5) = iVar2 + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1b8b8(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    FUN_00e70314(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar1 + 2;
  return;
}




void FUN_00a1b8f0(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 2);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 4);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 1;
        *param_2 = *param_3;
        param_2 = param_2 + 1;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00a1b960(void)

{
  long lVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 local_58;
  void *pvStack_50;
  void *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_03130e08 == (void *)0x0) {
    pvVar3 = operator_new(8);
    uVar4 = FUN_009f1f64();
    local_58 = 0;
    pcStack_40 = thunk_FUN_00a1ba04;
    pvStack_50 = pvVar3;
    local_48 = pvVar3;
    FUN_009104f8(uVar4,&local_58);
    DAT_03130e08 = pvVar3;
  }
  bVar2 = FUN_0092e6c8();
  pvVar3 = DAT_03130e08;
  *(byte *)((long)DAT_03130e08 + 5) = bVar2 & 1;
  local_58 = CONCAT44(local_58._4_4_,0x22);
  FUN_00a1ba04(pvVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1ba04(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (DAT_03130e08 != 0) {
    uVar2 = *param_2;
    if ((uVar2 | 0x20) == 0x22) {
      iVar1 = FUN_009f1f94(2);
      if (iVar1 == 1) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0xd;
      }
      FUN_00a1bb58(uVar3);
      uVar2 = *param_2;
    }
    if ((uVar2 < 0x23) && ((1L << ((ulong)uVar2 & 0x3f) & 0x400000044U) != 0)) {
      uVar2 = FUN_009f1f70(6);
      FUN_00a1bbfc(~uVar2 & 1);
      return;
    }
  }
  return;
}




void FUN_00a1baa0(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03130e08;
  if (DAT_03130e08 != (void *)0x0) {
    FUN_00a1bad8(DAT_03130e08);
    operator_delete(pvVar1);
    DAT_03130e08 = (void *)0x0;
  }
  return;
}




void FUN_00a1bad8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = FUN_009f1f50();
  if ((uVar2 & 1) != 0) {
    puVar3 = (uint *)FUN_009f1f64();
    lVar5 = (ulong)*puVar3 << 5;
    lVar1 = *(long *)(puVar3 + 2);
    while (lVar4 = lVar1, lVar5 != 0) {
      lVar5 = lVar5 + -0x20;
      lVar1 = lVar4 + 0x20;
      if (*(long *)(lVar4 + 8) == param_1) {
        FUN_0091064c((int)puVar3,lVar4);
        return;
      }
    }
  }
  return;
}




undefined4 FUN_00a1bb34(void)

{
  return *DAT_03130e08;
}




bool FUN_00a1bb44(void)

{
  return DAT_03130e08 != 0;
}




void FUN_00a1bb58(undefined4 param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  *DAT_03130e08 = param_1;
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x461d39a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x461d39a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x461d39b)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_00a1bbfc(byte param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  *(byte *)(DAT_03130e08 + 4) = param_1 & 1;
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xc8e15bb6) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xc8e15bb6];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xc8e15bb7)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




bool FUN_00a1bca4(uint param_1)

{
  return (*DAT_03130e08 & param_1) != 0;
}




bool FUN_00a1bcbc(byte param_1)

{
  return ((*DAT_03130e08 ^ 0xff) & param_1) == 0;
}




uint FUN_00a1bcd8(void)

{
  return *DAT_03130e08 & 1;
}




byte FUN_00a1bcec(void)

{
  return *DAT_03130e08 >> 1 & 1;
}




undefined1 FUN_00a1bd00(void)

{
  return *(undefined1 *)(DAT_03130e08 + 5);
}




bool FUN_00a1bd10(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*DAT_03130e08 >> 3 & 1) != 0) {
    bVar1 = DAT_03130e08[4] != 0;
  }
  return bVar1;
}




bool FUN_00a1bd34(void)

{
  int iVar1;
  
  if (*(char *)(DAT_03130e08 + 4) != '\0') {
    iVar1 = FUN_0092f28c();
    return iVar1 != 1;
  }
  return false;
}




byte FUN_00a1bd68(void)

{
  return *DAT_03130e08 >> 2 & 1;
}




undefined8 FUN_00a1bd7c(void)

{
  return 0;
}




bool FUN_00a1bd84(void)

{
  int iVar1;
  
  iVar1 = FUN_0092f28c();
  return iVar1 == 1;
}




void thunk_FUN_00a1ba04(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (DAT_03130e08 != 0) {
    uVar2 = *param_2;
    if ((uVar2 | 0x20) == 0x22) {
      iVar1 = FUN_009f1f94(2);
      if (iVar1 == 1) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0xd;
      }
      FUN_00a1bb58(uVar3);
      uVar2 = *param_2;
    }
    if ((uVar2 < 0x23) && ((1L << ((ulong)uVar2 & 0x3f) & 0x400000044U) != 0)) {
      uVar2 = FUN_009f1f70(6);
      FUN_00a1bbfc(~uVar2 & 1);
      return;
    }
  }
  return;
}




void FUN_00a1bda4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_027c8698;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00a1bdc8(void)

{
  return;
}




void FUN_00a1bdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}




void FUN_00a1bddc(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar11;
  float *pfVar12;
  long *plVar13;
  code *pcVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float __x;
  float fVar22;
  float __x_00;
  float fVar23;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar6 = tpidr_el0;
  local_a8 = *(long *)(lVar6 + 0x28);
  fVar16 = (float)FUN_019805f4(2);
  fVar17 = (float)FUN_019805f4(3);
  local_b0 = fVar16;
  fStack_ac = fVar17;
  fVar18 = (float)FUN_019805f4(0);
  fVar19 = (float)FUN_019805f4(1);
  __x = fVar16 * fVar16 + fVar17 * fVar17;
  fVar23 = SQRT(__x);
  if (NAN(fVar23)) {
    fVar23 = sqrtf(__x);
  }
  __x_00 = fVar18 * fVar18 + fVar19 * fVar19;
  fVar22 = SQRT(__x_00);
  if (NAN(fVar22)) {
    fVar22 = sqrtf(__x_00);
  }
  fVar20 = (float)FUN_019805f4(5);
  fVar21 = (float)FUN_019805f4(4);
  bVar2 = *(byte *)(param_1 + 0x2d);
  bVar8 = FUN_019805b4(8);
  bVar3 = *(byte *)(param_1 + 0x2b);
  bVar9 = FUN_019805b4(9);
  cVar4 = *(char *)(param_1 + 0x2a);
  bVar7 = DAT_02be3410 <= fVar20;
  bVar10 = FUN_019805b4(8);
  *(byte *)(param_1 + 0x2d) = bVar10 & 1;
  bVar10 = FUN_019805b4(9);
  *(byte *)(param_1 + 0x2b) = bVar10 & 1;
  *(bool *)(param_1 + 0x2a) = DAT_02be3410 <= fVar20;
  bVar10 = FUN_019805b4(4);
  plVar13 = *(long **)(param_1 + 8);
  if (plVar13 != (long *)0x0) {
    if (DAT_02be3408 <= fVar23) {
      fVar20 = SQRT(__x);
      if (NAN(fVar20)) {
        fVar20 = sqrtf(__x);
      }
      local_b0 = fVar16 / fVar20;
      fStack_ac = fVar17 / fVar20;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))(fVar23,*(long **)(param_1 + 8),1,&local_b0);
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    else if (*(char *)(param_1 + 0x28) != '\0') {
      (**(code **)(*plVar13 + 0x20))(plVar13,1);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
  }
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    if (DAT_02be3414 <= fVar21) {
      if (*(char *)(param_1 + 0x2c) == '\0') {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        plVar13 = *(long **)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      if (DAT_02be340c <= fVar22) {
        fStack_b4 = SQRT(__x_00);
        if (NAN(fStack_b4)) {
          fStack_b4 = sqrtf(__x_00);
        }
        uVar11 = 1;
        pfVar12 = &local_b8;
        local_b8 = fVar18 / fStack_b4;
        fStack_b4 = fVar19 / fStack_b4;
        pcVar14 = *(code **)(*plVar13 + 0x18);
        fVar16 = fVar22;
      }
      else {
        pcVar14 = *(code **)(*plVar13 + 0x18);
        pfVar12 = (float *)&DAT_03218ef8;
        uVar11 = 0;
        fVar16 = 0.0;
      }
      (*pcVar14)(fVar16,plVar13,uVar11,pfVar12);
    }
    else if (*(char *)(param_1 + 0x2c) != '\0') {
      (**(code **)(*plVar13 + 0x20))(plVar13,*(undefined1 *)(param_1 + 0x29));
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  plVar13 = *(long **)(param_1 + 0x18);
  if (plVar13 == (long *)0x0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
LAB_00a1c0c0:
    if ((bVar10 & 1) == 0) goto LAB_00a1c228;
  }
  else {
    cVar5 = *(char *)(param_1 + 0x20);
    if (((*(char *)(param_1 + 0x2d) == '\0') && (*(char *)(param_1 + 0x2b) == '\0')) &&
       (*(char *)(param_1 + 0x2a) == '\0')) {
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    else {
      *(byte *)(param_1 + 0x20) = ~bVar10 & 1;
      if ((bVar10 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x24);
        iVar15 = 0;
        if (*(char *)(param_1 + 0x2d) == '\0') {
          if (*(char *)(param_1 + 0x2b) != '\0') {
            iVar15 = 1;
            goto LAB_00a1c160;
          }
          if (*(char *)(param_1 + 0x2a) != '\0') {
            iVar15 = 2;
            goto LAB_00a1c160;
          }
          iVar15 = iVar1;
          if (cVar5 == '\0') goto LAB_00a1c194;
LAB_00a1c168:
          if (iVar1 != iVar15) {
            (**(code **)(*plVar13 + 0x28))();
          }
        }
        else {
LAB_00a1c160:
          *(int *)(param_1 + 0x24) = iVar15;
          if (cVar5 != '\0') goto LAB_00a1c168;
LAB_00a1c194:
          (**(code **)(*plVar13 + 0x10))();
          FUN_00a1f304(*(undefined4 *)(param_1 + 0x24));
          FUN_009e0314();
        }
        plVar13 = *(long **)(param_1 + 0x18);
        bVar7 = fVar22 < DAT_02be340c;
        *(bool *)(param_1 + 0x29) = !bVar7;
        if (bVar7) {
          fVar22 = 0.0;
          pcVar14 = *(code **)(*plVar13 + 0x18);
          pfVar12 = (float *)&DAT_03218ef8;
          uVar11 = 0;
        }
        else {
          fVar16 = SQRT(__x_00);
          if (NAN(fVar16)) {
            fVar16 = sqrtf(__x_00);
          }
          uVar11 = 1;
          pfVar12 = &local_b8;
          local_b8 = fVar18 / fVar16;
          fStack_b4 = fVar19 / fVar16;
          pcVar14 = *(code **)(*plVar13 + 0x18);
        }
        (*pcVar14)(fVar22,plVar13,uVar11,pfVar12);
        goto LAB_00a1c228;
      }
    }
    if (cVar5 == '\0') goto LAB_00a1c0c0;
    if ((bVar10 & 1) == 0) {
      (**(code **)(*plVar13 + 0x20))(plVar13,*(undefined1 *)(param_1 + 0x29));
      goto LAB_00a1c228;
    }
    (**(code **)(*plVar13 + 0x28))();
  }
  if ((bVar2 != (bVar8 & 1)) && (*(char *)(param_1 + 0x2d) != '\0')) {
    FUN_00a1f304(0);
    FUN_009e03cc();
  }
  if ((bVar3 != (bVar9 & 1)) && (*(char *)(param_1 + 0x2b) != '\0')) {
    FUN_00a1f304(1);
    FUN_009e03cc();
  }
  if (((bool)cVar4 != bVar7) && (*(char *)(param_1 + 0x2a) != '\0')) {
    FUN_00a1f304(2);
    FUN_009e03cc();
  }
LAB_00a1c228:
  if (*(long *)(lVar6 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

