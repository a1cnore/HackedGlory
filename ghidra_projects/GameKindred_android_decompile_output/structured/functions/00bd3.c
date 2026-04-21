// functions/00bd3 — 20 functions
#include "libGameKindred.h"




void FUN_00bd3004(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_009fbef4(pvVar1);
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_00c30dcc(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd3044(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_008fce60(param_1 + 0x1c878,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,param_3);
  FUN_008fce60(param_1 + 0x1c890,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd30f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,8,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd3190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed580;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd31d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed580;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bd3218(code *param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *local_78;
  code *pcStack_70;
  code *local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR___cxa_pure_virtual_027ed640;
  pvVar3 = operator_new(0xc1d0);
  FUN_00c3171c();
  *(code **)((long)pvVar3 + 0xd8) = param_1;
  *(undefined ***)param_1 = &PTR_FUN_027ed5a0;
  *(void **)(param_1 + 8) = pvVar3;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_027ed620;
  FUN_00bd6088(param_1 + 0x18);
  lVar6 = 0x48;
  do {
    FUN_00bd55d4(param_1 + lVar6);
    lVar6 = lVar6 + 0x28;
  } while (lVar6 != 0x110);
  lVar6 = 0x110;
  do {
    FUN_00bd55d4(param_1 + lVar6);
    lVar6 = lVar6 + 0x28;
  } while (lVar6 != 0x1d8);
  param_1[0x1640] = (code)0x0;
  memset(param_1 + 0x1d8,0,0x1458);
  *(undefined4 *)(param_1 + 0x1644) = 0xffffffff;
  param_1[0x1648] = (code)0x0;
  param_1[0x1649] = (code)(param_2 & 1);
  param_1[0x164a] = (code)0x0;
  *(undefined8 *)(param_1 + 0x164c) = 0;
  pvVar3 = operator_new(0x98);
  FUN_009e08ac();
  *(void **)(param_1 + 0x1608) = pvVar3;
  FUN_00bd354c(param_1);
  local_78 = (code *)0x0;
  local_60 = thunk_FUN_00bd3808;
  pcStack_70 = param_1;
  local_68 = param_1;
  FUN_00bd5190(*(long *)(param_1 + 0x1608) + 8,&local_78);
  local_78 = (code *)0x0;
  local_60 = thunk_FUN_00bd3fa8;
  pcStack_70 = param_1;
  local_68 = param_1;
  FUN_00bd52b0(*(long *)(param_1 + 0x1608) + 0x28,&local_78);
  local_78 = (code *)0x0;
  local_60 = thunk_FUN_00bd4250;
  pcStack_70 = param_1;
  local_68 = param_1;
  FUN_00bd53d0(*(long *)(param_1 + 0x1608) + 0x38,&local_78);
  pcStack_70 = (code *)0x0;
  local_60 = FUN_00bd54f0;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(*(long *)(param_1 + 0x1608) + 0x48,&local_78);
  pvVar3 = operator_new(0x58);
  FUN_00bc4e08();
  *(void **)(param_1 + 0x1630) = pvVar3;
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x1630);
    *(undefined4 *)(lVar6 + 0x50) = 100;
    FUN_00c19c68(*(undefined8 *)(lVar6 + 8),0);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1630) + 8) + 0x41d0) = 0;
    FUN_00c32890(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1630) + 8),1,0);
    FUN_00bc509c(*(undefined8 *)(param_1 + 0x1630));
  }
  pvVar3 = operator_new(0x58);
  FUN_00bc4e08();
  *(void **)(param_1 + 0x1638) = pvVar3;
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x1638);
    *(undefined4 *)(lVar6 + 0x50) = 10;
    FUN_00c19c68(*(undefined8 *)(lVar6 + 8),1);
    FUN_00c32890(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1638) + 8),0,1);
    FUN_00bc509c(*(undefined8 *)(param_1 + 0x1638));
  }
  FUN_00c329b8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  FUN_00c357f4(*(undefined8 *)(param_1 + 0x20),0);
  lVar6 = FUN_00ceace8();
  if (lVar6 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    uVar5 = FUN_00ceace8();
    FUN_00ceace8();
    uVar2 = FUN_00ceae78();
    FUN_00aae790(lVar6 + 0x8a90,uVar5,uVar2 & 1);
  }
  local_50 = DAT_0313adec;
  local_78 = FUN_00bd362c;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  local_50 = DAT_0313adf0;
  local_78 = FUN_00bd3640;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  lVar6 = FUN_00ceace8();
  if (lVar6 != 0) {
    FUN_00ceace8();
    uVar4 = FUN_00ceae80();
    if ((uVar4 & 1) != 0) {
      FUN_00ceace8();
      FUN_00907ce0();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd354c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  plVar4 = (long *)FUN_00ce9af4();
  plVar4 = (long *)*plVar4;
  lVar7 = *plVar4;
  while (lVar7 != 0) {
    uVar5 = FUN_0093d7f8();
    if (((uVar5 & 1) == 0) || (*(char *)(*plVar4 + 8) != '\0')) {
      uVar6 = FUN_009580b8();
      uVar1 = FUN_0096186c(uVar6,*(undefined8 *)*plVar4);
      lVar7 = FUN_00ceace8();
      if (lVar7 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_00ceace8();
        uVar5 = FUN_00ceaf34();
        uVar2 = 0;
        if ((uVar5 & 1) != 0) {
          FUN_00ceace8();
          uVar5 = FUN_00ceaef4();
          uVar2 = 0;
          if ((uVar5 & 1) != 0) {
            uVar2 = FUN_0093d808();
            uVar2 = uVar2 ^ 1;
          }
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      lVar8 = *plVar4;
      lVar7 = FUN_00ceace8();
      uVar3 = 0;
      if (lVar7 != 0) {
        FUN_00ceace8();
        uVar3 = FUN_00ceb05c();
      }
      FUN_00c32348(uVar6,lVar8,uVar3 & 1,uVar1 & uVar2 & 1);
    }
    plVar4 = plVar4 + 1;
    lVar7 = *plVar4;
  }
  FUN_00c32dd0(*(undefined8 *)(param_1 + 8));
  FUN_00c32e58(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd362c(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) | 4;
  return;
}




void FUN_00bd3640(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb
  ;
  return;
}




void FUN_00bd3654(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1[0x2c1];
  *param_1 = &PTR_FUN_027ed5a0;
  param_1[2] = &PTR_FUN_027ed620;
  lVar6 = (ulong)*(uint *)(lVar2 + 8) << 5;
  lVar5 = *(long *)(lVar2 + 0x10);
  do {
    lVar3 = lVar5;
    if (lVar6 == 0) goto LAB_00bd36b8;
    lVar6 = lVar6 + -0x20;
    lVar5 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00bd555c((uint *)(lVar2 + 8),lVar3);
  lVar2 = param_1[0x2c1];
LAB_00bd36b8:
  lVar5 = (ulong)*(uint *)(lVar2 + 0x48) << 5;
  puVar1 = *(undefined8 **)(lVar2 + 0x50);
  do {
    puVar4 = puVar1;
    if (lVar5 == 0) goto LAB_00bd36e0;
    lVar5 = lVar5 + -0x20;
    puVar1 = puVar4 + 4;
  } while ((undefined8 *)*puVar4 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x48),puVar4);
LAB_00bd36e0:
  if ((long *)param_1[0x2c6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c6] + 0x10))();
  }
  param_1[0x2c6] = 0;
  if ((long *)param_1[0x2c7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c7] + 0x10))();
  }
  param_1[0x2c7] = 0;
  if ((long *)param_1[0x2c1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c1] + 8))();
  }
  param_1[0x2c1] = 0;
  if ((*(byte *)(param_1 + 0x2c3) & 1) != 0) {
    operator_delete((void *)param_1[0x2c5]);
  }
  lVar5 = 0x1b0;
  do {
    FUN_00bd563c((long)param_1 + lVar5);
    lVar5 = lVar5 + -0x28;
  } while (lVar5 != 0xe8);
  do {
    FUN_00bd563c((long)param_1 + lVar5);
    lVar5 = lVar5 + -0x28;
  } while (lVar5 != 0x20);
  param_1[3] = &PTR_FUN_027ed738;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[3] = &PTR___cxa_pure_virtual_027ec488;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  param_1[4] = 0;
  *param_1 = &PTR___cxa_pure_virtual_027ed640;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd37e4(void *param_1)

{
  FUN_00bd3654();
  operator_delete(param_1);
  return;
}




void FUN_00bd3808(long param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x1640) = 0;
  memcpy((void *)(param_1 + 0x1d8),param_2,0xa18);
  uVar1 = FUN_00bd38c8(param_1);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1648) = 1;
  }
  if (*(char *)(param_1 + 0x164a) == '\0') {
    if (*(char *)(param_1 + 0x1648) == '\0') {
      FUN_00c32af4(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_00c32a00();
    }
    lVar2 = FUN_00ceace8();
    if (lVar2 != 0) {
      FUN_00ceace8();
      uVar1 = FUN_00ceaf14();
      if ((uVar1 & 1) == 0) {
        FUN_00ceace8();
        uVar1 = FUN_00ceae90();
        if ((uVar1 & 1) == 0) goto LAB_00bd3894;
      }
      FUN_00c32b7c(*(undefined8 *)(param_1 + 8));
    }
  }
LAB_00bd3894:
  FUN_00bd3a50(param_1);
  FUN_00bd3ad8(param_1);
  FUN_00bd3d40(param_1);
  FUN_00c32bdc(*(undefined4 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 8));
  FUN_00bd3eb0(param_1);
  return;
}




undefined8 FUN_00bd38c8(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  
  iVar4 = FUN_00bd4f80();
  if (iVar4 == -1) {
    return 0;
  }
  lVar6 = param_1 + (long)iVar4 * 0xa1;
  lVar1 = lVar6 + 0x1e0;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar1 = lVar6 + 0xbf8;
  }
  iVar4 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
  iVar5 = FUN_009e0d88(*(undefined8 *)(param_1 + 0x1608));
  if (*(char *)(lVar1 + 3) == '\0') {
    if ((iVar4 != 0xffff) && (lVar6 = FUN_00c32690(*(undefined8 *)(param_1 + 8),iVar4), lVar6 != 0))
    {
      FUN_00aa9b78();
    }
  }
  else if (((iVar5 != iVar4) && (iVar5 != 0xffff)) &&
          (lVar6 = FUN_00c32690(*(undefined8 *)(param_1 + 8)), lVar6 != 0)) {
    FUN_00aa9b14();
  }
  FUN_00bd45d8(param_1,lVar1);
  if (*(long *)(param_1 + 0x1610) != 0) {
    FUN_00cbe2dc(*(long *)(param_1 + 0x1610),*(undefined1 *)(lVar1 + 5),*(undefined1 *)(lVar1 + 6));
  }
  FUN_00ecf888(*(long *)(param_1 + 8) + 0xa2e8,*(char *)(lVar1 + 3) != '\0');
  uVar7 = 0;
  pcVar8 = (char *)(param_1 + 0x68);
  while (cVar2 = *pcVar8, cVar3 = FUN_009e0d78(*(undefined8 *)(param_1 + 0x1608)), cVar2 != cVar3) {
    uVar7 = uVar7 + 1;
    pcVar8 = pcVar8 + 0x28;
    if (4 < uVar7) {
      return 1;
    }
  }
  uVar7 = FUN_0092e920();
  if ((uVar7 & 1) == 0) {
    return 1;
  }
  uVar7 = 0;
  pcVar8 = (char *)(param_1 + 0x68);
  do {
    cVar2 = *pcVar8;
    cVar3 = FUN_009e0d78(*(undefined8 *)(param_1 + 0x1608));
    if (cVar2 == cVar3) goto LAB_00bd3a28;
    uVar7 = uVar7 + 1;
    pcVar8 = pcVar8 + 0x28;
  } while (uVar7 < 5);
  uVar7 = 0xffffffffffffffff;
LAB_00bd3a28:
  FUN_00bd5f1c(param_1 + (long)(int)uVar7 * 0x28 + 0x48,*(undefined8 *)(param_1 + 0x1608));
  return 1;
}




void FUN_00bd3a50(undefined8 *param_1)

{
  int iVar1;
  
  if ((*(char *)((long)param_1 + 0x164a) == '\0') && (iVar1 = FUN_00bd4f80(param_1), iVar1 != -1)) {
    iVar1 = FUN_00bd4fec(param_1);
    if (iVar1 != 0xffff) {
      FUN_00c32e64(param_1[1]);
      FUN_00c32700(param_1[1],iVar1);
                    /* WARNING: Could not recover jumptable at 0x00bd3ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,iVar1);
      return;
    }
  }
  return;
}




void FUN_00bd3ad8(long param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x164a) == '\0') {
    lVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    local_78 = 0;
    uStack_70 = 0;
    do {
      pcVar1 = (char *)(param_1 + lVar10 + 0x1e0);
      if (*(char *)(param_1 + 0x1640) != '\0') {
        pcVar1 = (char *)(param_1 + lVar10 + 0xbf8);
      }
      if (*pcVar1 != '\0') {
        if (*(char *)(param_1 + 0x1648) == '\0') {
          cVar3 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x1608));
          if (cVar3 == pcVar1[8]) {
            lVar8 = param_1 + (long)iVar11 * 0x28;
            lVar6 = lVar8 + 0x48;
            FUN_00c32c0c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar8 + 0x50));
            uVar9 = *(undefined8 *)(lVar8 + 0x50);
            lVar8 = FUN_00ceace8();
            uVar4 = 0;
            if (lVar8 != 0) goto LAB_00bd3be0;
LAB_00bd3be8:
            FUN_00c33e0c(uVar9,uVar4 & 1);
            iVar11 = iVar11 + 1;
            uVar9 = 1;
            goto LAB_00bd3c4c;
          }
        }
        else if (pcVar1[8] == '\x02') {
          lVar8 = param_1 + (long)iVar12 * 0x28;
          lVar6 = lVar8 + 0x110;
          FUN_00c32d18(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar8 + 0x118));
          *(uint *)(*(long *)(lVar8 + 0x118) + 0x84) =
               *(uint *)(*(long *)(lVar8 + 0x118) + 0x84) & 0xffffffef;
          uVar9 = *(undefined8 *)(lVar8 + 0x118);
          FUN_00ceace8();
          uVar4 = FUN_00ceaf9c();
          FUN_00c33e0c(uVar9,uVar4 & 1);
          iVar12 = iVar12 + 1;
          uVar9 = 0;
LAB_00bd3c4c:
          FUN_00bd56cc(lVar6,uVar9);
        }
        else if (pcVar1[8] == '\x01') {
          lVar8 = param_1 + (long)iVar11 * 0x28;
          lVar6 = lVar8 + 0x48;
          FUN_00c32c0c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar8 + 0x50));
          *(uint *)(*(long *)(lVar8 + 0x50) + 0x84) =
               *(uint *)(*(long *)(lVar8 + 0x50) + 0x84) & 0xffffffef;
          uVar9 = *(undefined8 *)(lVar8 + 0x50);
LAB_00bd3be0:
          FUN_00ceace8();
          uVar4 = FUN_00ceaf9c();
          goto LAB_00bd3be8;
        }
        FUN_008fa54c(local_90,pcVar1 + 0x61);
        FUN_0096204c(&local_78,local_90);
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      lVar10 = lVar10 + 0xa1;
    } while (lVar10 != 0x64a);
    uVar9 = FUN_009580b8();
    FUN_00962178(uVar9,&local_78);
    if (*(char *)(param_1 + 0x1649) == '\0') {
      uVar5 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x1608));
      FUN_00bd4d78(param_1,uVar5);
    }
    uVar7 = FUN_0092e920();
    if (((uVar7 & 1) != 0) && (uVar7 = thunk_FUN_00ec5f5c(), (uVar7 & 1) != 0)) {
      FUN_009e0d70(*(undefined8 *)(param_1 + 0x1608));
      FUN_00931e78();
    }
    FUN_00bd4ea8(param_1);
    if (*(char *)(param_1 + 0x1649) == '\0') {
      FUN_00ceace8();
      uVar7 = FUN_00ceae78();
      if ((uVar7 & 1) != 0) {
        FUN_009013e4();
      }
    }
    *(char *)(param_1 + 0x164a) = '\x01';
    FUN_00951534(&local_78,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd3d40(long param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int local_6c;
  
  uVar7 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x1608));
  local_6c = 0;
  lVar10 = 0;
  iVar11 = 0;
  do {
    pcVar1 = (char *)(param_1 + lVar10 + 0x1e0);
    if (*(char *)(param_1 + 0x1640) != '\0') {
      pcVar1 = (char *)(param_1 + lVar10 + 0xbf8);
    }
    if (*pcVar1 != '\0') {
      bVar2 = pcVar1[8];
      if ((uVar7 & 0xff) == (uint)bVar2) {
        cVar3 = pcVar1[1];
        lVar5 = (long)iVar11;
        iVar11 = iVar11 + 1;
        cVar6 = FUN_009e0d78(*(undefined8 *)(param_1 + 0x1608));
        FUN_00bd591c(param_1 + lVar5 * 0x28 + 0x48,pcVar1,uVar7,cVar3 == cVar6);
      }
      else if (*(char *)(param_1 + 0x1648) != '\0') {
        FUN_00bd591c(param_1 + (long)local_6c * 0x28 + 0x110,pcVar1,uVar7,0);
        local_6c = local_6c + 1;
      }
      sVar4 = *(short *)(pcVar1 + 9);
      if ((sVar4 != -1) && (pcVar1[3] != '\0')) {
        uVar9 = *(undefined8 *)(param_1 + 8);
        uVar8 = FUN_00ced270(*(undefined2 *)(pcVar1 + 0xb));
        FUN_00c32784(uVar9,sVar4,(uVar7 & 0xff) == (uint)bVar2,uVar8 & 1);
      }
    }
    lVar10 = lVar10 + 0xa1;
  } while (lVar10 != 0x64a);
  return;
}




void FUN_00bd3eb0(long param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e7051c(&local_48,&DAT_03210450);
  if (*(char *)(param_1 + 0x1648) == '\0') {
    iVar2 = FUN_009e0d88(*(undefined8 *)(param_1 + 0x1608));
    if (iVar2 == 0xffff) {
      iVar2 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
      if (iVar2 == 0xffff) {
        pcVar3 = "MENU_DRAFT_LOBBY_LABEL_SELECT_A_HERO";
      }
      else {
        iVar2 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
        if (iVar2 == 0xffff) goto LAB_00bd3f48;
        pcVar3 = "MENU_DRAFT_LOBBY_LABEL_LOCK_IN_A_HERO";
      }
    }
    else {
      pcVar3 = "MENU_DRAFT_LOBBY_BUTTON_LOCKED_IN";
    }
    uVar4 = FUN_00e6ce7c(pcVar3,0);
    FUN_00910394(&local_48,uVar4);
  }
LAB_00bd3f48:
  FUN_00c32888(*(undefined8 *)(param_1 + 8),&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd3fa8(undefined8 *param_1,void *param_2)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pcVar1 = (char *)(param_1 + 0x2c8);
  *pcVar1 = '\x01';
  iVar5 = FUN_00bd4f80();
  lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
  }
  sVar2 = *(short *)((long)param_1 + lVar8 + 9);
  memcpy(param_1 + 0x17e,param_2,0xa18);
  iVar5 = FUN_00bd4f80(param_1);
  lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
  }
  sVar3 = *(short *)((long)param_1 + lVar8 + 9);
  uVar7 = FUN_00bd38c8(param_1);
  if ((uVar7 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2c9) = 1;
  }
  if (*(char *)((long)param_1 + 0x164a) != '\0') goto LAB_00bd40f8;
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_00c32af4(param_1[1]);
  }
  else {
    FUN_00c32a00();
  }
  lVar8 = FUN_00ceace8();
  if (lVar8 != 0) {
    FUN_00ceace8();
    uVar7 = FUN_00ceaf14();
    if ((uVar7 & 1) == 0) {
      FUN_00ceace8();
      uVar7 = FUN_00ceae90();
      if ((uVar7 & 1) == 0) goto LAB_00bd40b0;
    }
    FUN_00c32b7c(param_1[1]);
  }
LAB_00bd40b0:
  uVar10 = param_1[1];
  lVar8 = FUN_00ceace8();
  uVar6 = 0;
  if (lVar8 != 0) {
    FUN_00ceace8();
    uVar7 = FUN_00ceaeb0();
    if ((uVar7 & 1) == 0) {
      FUN_00ceace8();
      uVar6 = FUN_00ceaf14();
    }
    else {
      uVar6 = 1;
    }
  }
  FUN_00c32b84(uVar10,uVar6 & 1);
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_00bd6418(param_1 + 3,1);
  }
LAB_00bd40f8:
  if (sVar2 != sVar3) {
    FUN_00c32e64(param_1[1]);
    uVar10 = param_1[1];
    iVar5 = FUN_00bd4f80(param_1);
    lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
    }
    FUN_00c32700(uVar10,*(undefined2 *)((long)param_1 + lVar8 + 9));
    iVar5 = FUN_00bd4f80(param_1);
    lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
    }
    (**(code **)*param_1)(param_1,*(undefined2 *)((long)param_1 + lVar8 + 9));
    iVar5 = FUN_00bd4f80(param_1);
    lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
    }
    local_6c = (uint)*(ushort *)((long)param_1 + lVar8 + 9);
    puVar9 = (undefined8 *)FUN_00ce9ba0(&local_6c);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00bd615c(param_1 + 3,*puVar9);
    }
  }
  FUN_00bd3ad8(param_1);
  FUN_00bd3d40(param_1);
  FUN_00c32bdc(*(undefined4 *)(param_1 + 0x17e),param_1[1]);
  FUN_00bd3eb0(param_1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bd3808(long param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x1640) = 0;
  memcpy((void *)(param_1 + 0x1d8),param_2,0xa18);
  uVar1 = FUN_00bd38c8(param_1);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1648) = 1;
  }
  if (*(char *)(param_1 + 0x164a) == '\0') {
    if (*(char *)(param_1 + 0x1648) == '\0') {
      FUN_00c32af4(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_00c32a00();
    }
    lVar2 = FUN_00ceace8();
    if (lVar2 != 0) {
      FUN_00ceace8();
      uVar1 = FUN_00ceaf14();
      if ((uVar1 & 1) == 0) {
        FUN_00ceace8();
        uVar1 = FUN_00ceae90();
        if ((uVar1 & 1) == 0) goto LAB_00bd3894;
      }
      FUN_00c32b7c(*(undefined8 *)(param_1 + 8));
    }
  }
LAB_00bd3894:
  FUN_00bd3a50(param_1);
  FUN_00bd3ad8(param_1);
  FUN_00bd3d40(param_1);
  FUN_00c32bdc(*(undefined4 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 8));
  FUN_00bd3eb0(param_1);
  return;
}




void thunk_FUN_00bd3fa8(undefined8 *param_1,void *param_2)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uStack_6c;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  pcVar1 = (char *)(param_1 + 0x2c8);
  *pcVar1 = '\x01';
  iVar5 = FUN_00bd4f80();
  lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
  }
  sVar2 = *(short *)((long)param_1 + lVar8 + 9);
  memcpy(param_1 + 0x17e,param_2,0xa18);
  iVar5 = FUN_00bd4f80(param_1);
  lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
  }
  sVar3 = *(short *)((long)param_1 + lVar8 + 9);
  uVar7 = FUN_00bd38c8(param_1);
  if ((uVar7 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2c9) = 1;
  }
  if (*(char *)((long)param_1 + 0x164a) != '\0') goto LAB_00bd40f8;
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_00c32af4(param_1[1]);
  }
  else {
    FUN_00c32a00();
  }
  lVar8 = FUN_00ceace8();
  if (lVar8 != 0) {
    FUN_00ceace8();
    uVar7 = FUN_00ceaf14();
    if ((uVar7 & 1) == 0) {
      FUN_00ceace8();
      uVar7 = FUN_00ceae90();
      if ((uVar7 & 1) == 0) goto LAB_00bd40b0;
    }
    FUN_00c32b7c(param_1[1]);
  }
LAB_00bd40b0:
  uVar10 = param_1[1];
  lVar8 = FUN_00ceace8();
  uVar6 = 0;
  if (lVar8 != 0) {
    FUN_00ceace8();
    uVar7 = FUN_00ceaeb0();
    if ((uVar7 & 1) == 0) {
      FUN_00ceace8();
      uVar6 = FUN_00ceaf14();
    }
    else {
      uVar6 = 1;
    }
  }
  FUN_00c32b84(uVar10,uVar6 & 1);
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_00bd6418(param_1 + 3,1);
  }
LAB_00bd40f8:
  if (sVar2 != sVar3) {
    FUN_00c32e64(param_1[1]);
    uVar10 = param_1[1];
    iVar5 = FUN_00bd4f80(param_1);
    lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
    }
    FUN_00c32700(uVar10,*(undefined2 *)((long)param_1 + lVar8 + 9));
    iVar5 = FUN_00bd4f80(param_1);
    lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
    }
    (**(code **)*param_1)(param_1,*(undefined2 *)((long)param_1 + lVar8 + 9));
    iVar5 = FUN_00bd4f80(param_1);
    lVar8 = (long)iVar5 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar8 = (long)iVar5 * 0xa1 + 0xbf8;
    }
    uStack_6c = (uint)*(ushort *)((long)param_1 + lVar8 + 9);
    puVar9 = (undefined8 *)FUN_00ce9ba0(&uStack_6c);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00bd615c(param_1 + 3,*puVar9);
    }
  }
  FUN_00bd3ad8(param_1);
  FUN_00bd3d40(param_1);
  FUN_00c32bdc(*(undefined4 *)(param_1 + 0x17e),param_1[1]);
  FUN_00bd3eb0(param_1);
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

