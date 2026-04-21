// functions/009f5 — 10 functions
#include "libGameKindred.h"




void FUN_009f5b48(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x38;
    puVar1[1] = puVar1[0xb7];
    *puVar1 = puVar1[0xb6];
    puVar1[3] = puVar1[0xb9];
    puVar1[2] = puVar1[0xb8];
    puVar1[5] = puVar1[0xbb];
    puVar1[4] = puVar1[0xba];
    *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)((long)puVar1 + 0x5dd);
  } while (lVar2 != 0x5b0);
  return;
}




void FUN_009f5b80(long param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 0x38);
  puVar1[1] = puVar1[0xb7];
  *puVar1 = puVar1[0xb6];
  puVar1[3] = puVar1[0xb9];
  puVar1[2] = puVar1[0xb8];
  puVar1[5] = puVar1[0xbb];
  puVar1[4] = puVar1[0xba];
  *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)((long)puVar1 + 0x5dd);
  return;
}




void FUN_009f5bac(void)

{
  long lVar1;
  void *pvVar2;
  undefined1 auStack_228 [496];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memcpy(auStack_228,&PTR_s_vainglory___video_welcome_027c5460,0x1f0);
  pvVar2 = operator_new(0x20);
  FUN_009f5c24(pvVar2,auStack_228);
  DAT_031308a0 = pvVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f5c24(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar3 = param_1 + 2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  *puVar3 = 0;
  FUN_0091f484(param_1,0x1f);
  FUN_009f5eac(puVar3,0x1f);
  lVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  do {
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    uVar2 = FUN_00e6a474(uVar4);
    local_5c = FUN_0091ed5c(uVar4,uVar2,0x12345678);
    if (local_5c < uVar7) goto LAB_009f5ce4;
    FUN_0091f584(param_1,&local_5c);
    FUN_009f5f2c(puVar3,param_2 + lVar5 + 8);
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x10;
    uVar7 = local_5c;
  } while (uVar6 < 0x1f);
LAB_009f5d00:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_009f5ce4:
  do {
    FUN_009f5fb4(param_1,param_2 + lVar5,param_2 + lVar5 + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x1f0);
  goto LAB_009f5d00;
}




void FUN_009f5d30(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_031308a0;
  if (DAT_031308a0 != (void *)0x0) {
    if (*(void **)((long)DAT_031308a0 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_031308a0 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_031308a0 = (void *)0x0;
  return;
}




void FUN_009f5d7c(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 **ppuVar1;
  long lVar2;
  int iVar3;
  undefined1 **ppuVar4;
  size_t sVar5;
  char *__s;
  undefined1 *puVar6;
  byte local_70 [16];
  void *local_60;
  undefined1 *local_58 [2];
  void *local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58[0] = param_1;
  if ((param_3 & 1) == 0) {
    local_58[0] = &DAT_01e277f2;
  }
  local_40 = param_1;
  ppuVar4 = (undefined1 **)FUN_009f62f0(DAT_031308a0,&local_40);
  ppuVar1 = local_58;
  if (ppuVar4 != (undefined1 **)0x0) {
    ppuVar1 = ppuVar4;
  }
  __s = *ppuVar1;
  if (__s != (char *)0x0) {
    sVar5 = strlen(__s);
    FUN_008fcea8(param_2,__s,sVar5);
    iVar3 = FUN_0092ec00();
    if (iVar3 - 1U < 0x10) {
      puVar6 = (&PTR_DAT_027c5650)[(int)(iVar3 - 1U)];
    }
    else {
      puVar6 = &DAT_01e277f2;
    }
    FUN_008fa54c(local_58,"[LOC]");
    FUN_008fa54c(local_70,puVar6);
    FUN_00937db8(param_2,local_58,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (((ulong)local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f5e94(byte *param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  FUN_009f5d7c(pbVar1,param_2,param_3 & 1);
  return;
}




void FUN_009f5eac(uint *param_1,uint param_2)

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




void FUN_009f5f2c(uint *param_1,undefined8 *param_2)

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
    FUN_009f5eac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_009f5fb4(uint *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  local_3c = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar1 = *param_1;
  lVar5 = *(long *)(param_1 + 2);
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else {
    uVar8 = (ulong)uVar1 * (ulong)local_3c >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)local_3c >> 0x20)) {
      do {
        if (*(uint *)(lVar5 + uVar8 * 4) <= local_3c) break;
        iVar6 = (int)uVar8;
        uVar2 = iVar6 - 1;
        uVar8 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar6);
    }
    while ((iVar6 = (int)uVar8, iVar6 < (int)uVar1 && (*(uint *)(lVar5 + uVar8 * 4) < local_3c))) {
      uVar8 = (ulong)(iVar6 + 1);
    }
  }
  FUN_0091f770(param_1,lVar5 + (long)iVar6 * 4,&local_3c,&local_38);
  FUN_009f60b0(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar6 * 8,param_3,param_3 + 8);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

