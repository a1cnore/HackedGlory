// functions/00bd7 — 25 functions
#include "libGameKindred.h"




void FUN_00bd7008(long param_1)

{
  FUN_00bd6afc(param_1,param_1 + 0x18);
  return;
}




void FUN_00bd7010(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00bd709c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
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
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00bd7114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed8c8;
  return;
}




void FUN_00bd7128(void)

{
  return;
}




void FUN_00bd712c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd7130);
  (*pcVar1)();
}




void FUN_00bd7130(code *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  code *local_78;
  code *pcStack_70;
  code *local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *(undefined ***)param_1 = &PTR___cxa_pure_virtual_027eddb8;
  pvVar4 = operator_new(0x8c0);
  FUN_00c3d29c();
  *(void **)(param_1 + 8) = pvVar4;
  *(code **)((long)pvVar4 + 0xd8) = param_1;
  pcVar8 = param_1 + 0x10;
  *(undefined ***)pcVar8 = &PTR_FUN_027e76c0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_009680c8(param_1 + 0x28);
  FUN_00948cd8(param_1 + 0x40);
  FUN_00e83560(param_1 + 0x58);
  pcVar1 = param_1 + 0x70;
  *(undefined ***)param_1 = &PTR_FUN_027ed900;
  *(undefined ***)pcVar8 = &PTR_FUN_027ed960;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_027ed978;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_027ed9a8;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_027edd40;
  FUN_00bd9c90(pcVar1);
  FUN_00bda084(param_1 + 0xa0);
  memset(param_1 + 0xe0,0,0x50);
  param_1[0x130] = (code)0x1;
  *(undefined2 *)(param_1 + 0x135) = 0;
  *(undefined4 *)(param_1 + 0x131) = 0;
  pcStack_70 = thunk_FUN_00bd7d9c;
  local_78 = param_1;
  FUN_00f02e98(0xbf800000,&local_78,0,1);
  FUN_00c3dbf8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78));
  FUN_00c3dc48(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xa8));
  FUN_00bd9cf4(pcVar1,param_1 + 0xa0);
  FUN_00aa218c(pcVar8,"HOME",param_1,thunk_FUN_00bd8e48);
  FUN_00aa218c(pcVar8,"PARTY",param_1,FUN_00bd9978);
  FUN_00aa218c(pcVar8,"MARKET",param_1,FUN_00bd9990);
  FUN_00aa218c(pcVar8,"HEROES",param_1,thunk_FUN_00bd8f5c);
  FUN_00aa218c(pcVar8,"ACADEMY",param_1,thunk_FUN_00bd8fb0);
  FUN_00aa218c(pcVar8,"NEWS",param_1,thunk_FUN_00bd9028);
  FUN_00aa218c(pcVar8,"FRIENDS",param_1,FUN_00bd99b4);
  FUN_00aa218c(pcVar8,"PEOPLE",param_1,thunk_FUN_00bd910c);
  FUN_00aa218c(pcVar8,"PRACTICE",param_1,FUN_00bd99d0);
  FUN_00aa218c(pcVar8,"PURCHASESKU",param_1,FUN_00bd99e8);
  FUN_00aa218c(pcVar8,"PROFILE",param_1,FUN_00bd9a00);
  local_50 = DAT_03210c7c;
  local_78 = thunk_FUN_00bd81f8;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  local_50 = DAT_03210c80;
  local_78 = thunk_FUN_00bd848c;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  local_50 = DAT_03133784;
  local_78 = thunk_FUN_00bd8314;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  lVar5 = FUN_009fece0();
  pcStack_70 = (code *)0x0;
  local_60 = thunk_FUN_00bd937c;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(lVar5 + 0x30,&local_78);
  lVar5 = FUN_009fece0();
  pcStack_70 = (code *)0x0;
  local_60 = FUN_00bd9a1c;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(lVar5 + 0x40,&local_78);
  lVar5 = FUN_009fece0();
  pcStack_70 = (code *)0x0;
  local_60 = thunk_FUN_00bd93d4;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(lVar5 + 0x50,&local_78);
  uVar6 = FUN_008fc900();
  pcStack_70 = (code *)0x0;
  local_60 = thunk_FUN_00bd8c50;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(uVar6,&local_78);
  lVar5 = FUN_00a099f8();
  pcStack_70 = (code *)0x0;
  local_60 = thunk_FUN_00bd8c50;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(lVar5 + 0x30,&local_78);
  FUN_00a01758();
  FUN_009f73a8();
  FUN_009fa738();
  pvVar4 = operator_new(0x38);
  FUN_00bd1e8c();
  *(void **)(param_1 + 0xe0) = pvVar4;
  pvVar4 = operator_new(0x2d058);
  FUN_00b577d4();
  *(void **)(param_1 + 0xe8) = pvVar4;
  uVar7 = FUN_0093dbe8();
  if ((uVar7 & 1) == 0) {
    pvVar4 = operator_new(0x9cc0);
    FUN_00b510e8();
    *(void **)(param_1 + 0x100) = pvVar4;
  }
  pvVar4 = operator_new(0x60);
  FUN_00bf20f0();
  *(void **)(param_1 + 0x108) = pvVar4;
  lVar5 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar5 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  *(long *)(param_1 + 0xb0) = lVar5;
  *(long *)(param_1 + 0xb8) = (long)pvVar4 + 0x28;
  uVar7 = FUN_0093dbe8();
  if ((uVar7 & 1) == 0) {
    lVar5 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar5 = *(long *)(param_1 + 0x100) + 0x2c90;
    }
    *(long *)(param_1 + 0xc0) = lVar5;
  }
  lVar5 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar5 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  FUN_00bd9cfc(pcVar1,lVar5,0);
  lVar5 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar5 = *(long *)(param_1 + 0x108) + 0x28;
  }
  FUN_00bd9cfc(pcVar1,lVar5,1);
  uVar7 = FUN_0093dbe8();
  if ((uVar7 & 1) == 0) {
    lVar5 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar5 = *(long *)(param_1 + 0x100) + 0x2c90;
    }
    FUN_00bd9cfc(pcVar1,lVar5,2);
  }
  uVar7 = FUN_0092e900();
  if ((uVar7 & 1) == 0) {
    pvVar4 = operator_new(0x139650);
    FUN_00b7b840();
    uVar6 = 5;
    *(void **)(param_1 + 0xf8) = pvVar4;
    lVar5 = (long)pvVar4 + 0x2c50;
  }
  else {
    pvVar4 = operator_new(0x160);
    FUN_00be3528();
    *(void **)(param_1 + 0xf0) = pvVar4;
    uVar7 = FUN_0093dbe8();
    if ((uVar7 & 1) != 0) goto LAB_00bd7634;
    uVar6 = 4;
    lVar5 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar5 = *(long *)(param_1 + 0xf0) + 0x10;
    }
  }
  *(long *)(param_1 + 0xd0) = lVar5;
  FUN_00bd9cfc(pcVar1,lVar5,uVar6);
LAB_00bd7634:
  uVar2 = DAT_0313375c;
  local_78 = FUN_00bd778c;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  local_50 = uVar2;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  lVar5 = FUN_00969248();
  FUN_00bd77c0(param_1,0 < *(int *)(lVar5 + 0x38));
  lVar5 = FUN_00c3df08(*(undefined8 *)(param_1 + 8));
  local_78 = FUN_00bd778c;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  local_50 = uVar2;
  FUN_009693a0(lVar5 + 8,&local_78);
  lVar5 = FUN_009e80b8();
  local_78 = (code *)0x0;
  local_60 = FUN_00bd9aec;
  pcStack_70 = param_1;
  local_68 = param_1;
  FUN_00bd9a5c(lVar5 + 0x18,&local_78);
  lVar5 = FUN_00a06b24();
  local_78 = (code *)0x0;
  local_60 = thunk_FUN_00bd9570;
  pcStack_70 = param_1;
  local_68 = param_1;
  FUN_00933ec0(lVar5 + 0x40,&local_78);
  uVar6 = FUN_008fc8f0();
  pcStack_70 = (code *)0x0;
  local_60 = thunk_FUN_00bd9734;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(uVar6,&local_78);
  local_50 = DAT_0313aa44;
  local_78 = FUN_00bd7884;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  uVar7 = FUN_0093d808();
  if ((uVar7 & 1) != 0) {
    FUN_00bd78c8(param_1,0);
    FUN_00c2d9cc(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8));
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bd778c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00bd77bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  return;
}




void FUN_00bd77c0(long param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  bVar1 = ~param_2 & 1;
  FUN_00bd78c8(param_1,bVar1);
  FUN_00bd219c(*(undefined8 *)(param_1 + 0xe0),bVar1);
  if ((~param_2 & 1) == 0) {
    FUN_00969248();
    uVar4 = FUN_00968794();
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_0093d808(), (uVar4 & 1) == 0)) {
      FUN_00cbf310();
    }
  }
  uVar3 = FUN_0093ad60();
  uVar4 = FUN_009580c4();
  if ((uVar4 & 1) == 0) {
    bVar2 = true;
  }
  else {
    lVar5 = FUN_009580b8();
    bVar2 = *(char *)(lVar5 + 0x568c) == '\0';
  }
  if ((((param_2 & 1) == 0) && ((uVar3 & 1) == 0 && !bVar2)) && (*(char *)(param_1 + 0x131) != '\0')
     ) {
    FUN_00cc2464(&DAT_03218f18);
    FUN_0093ac98(1);
  }
  *(byte *)(param_1 + 0x131) = param_2 & 1;
  FUN_00bd83bc(param_1);
  return;
}




void FUN_00bd7884(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bd9fc8(param_1 + 0x70);
  FUN_00c3dcbc(*(undefined8 *)(param_1 + 8),iVar1 != 0 || *(char *)(param_1 + 0x133) != '\0',
               iVar1 != 0);
  return;
}




void FUN_00bd78c8(long param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((param_2 & 1) != 0) {
    bVar2 = FUN_0093d808();
    bVar2 = bVar2 ^ 1;
  }
  bVar1 = bVar2 & 1;
  if (*(byte *)(param_1 + 0x130) != bVar1) {
    if ((bVar2 & 1) == 0) {
      FUN_00bd9e88(param_1 + 0x70,0);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    FUN_00bd9f98(param_1 + 0x70,bVar1);
    *(byte *)(param_1 + 0x130) = bVar1;
  }
  return;
}




void FUN_00bd7938(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027ed900;
  param_1[2] = &PTR_FUN_027ed960;
  param_1[5] = &PTR_FUN_027ed978;
  param_1[8] = &PTR_FUN_027ed9a8;
  param_1[0xb] = &PTR_FUN_027edd40;
  pcStack_50 = thunk_FUN_00bd7d9c;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  lVar3 = FUN_00aa323c();
  if (lVar3 != 0) {
    puVar4 = (uint *)FUN_00aa323c();
    lVar3 = (ulong)*puVar4 << 5;
    puVar2 = *(undefined8 **)(puVar4 + 2);
    do {
      puVar6 = puVar2;
      if (lVar3 == 0) goto LAB_00bd79e4;
      lVar3 = lVar3 + -0x20;
      puVar2 = puVar6 + 4;
    } while ((undefined8 *)*puVar6 != param_1);
    FUN_00910480(puVar4,puVar6);
  }
LAB_00bd79e4:
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))();
  }
  param_1[0x1c] = 0;
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 8))();
  }
  param_1[0x1d] = 0;
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x30))();
  }
  param_1[0x1e] = 0;
  if ((long *)param_1[0x1f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1f] + 8))();
  }
  param_1[0x1f] = 0;
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 8))();
  }
  param_1[0x21] = 0;
  lVar3 = FUN_009fece0();
  lVar8 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
  puVar2 = *(undefined8 **)(lVar3 + 0x38);
  do {
    puVar6 = puVar2;
    if (lVar8 == 0) goto LAB_00bd7a88;
    lVar8 = lVar8 + -0x20;
    puVar2 = puVar6 + 4;
  } while ((undefined8 *)*puVar6 != param_1);
  FUN_00910480((uint *)(lVar3 + 0x30),puVar6);
LAB_00bd7a88:
  lVar3 = FUN_009fece0();
  lVar8 = (ulong)*(uint *)(lVar3 + 0x40) << 5;
  puVar2 = *(undefined8 **)(lVar3 + 0x48);
  do {
    puVar6 = puVar2;
    if (lVar8 == 0) goto LAB_00bd7ab4;
    lVar8 = lVar8 + -0x20;
    puVar2 = puVar6 + 4;
  } while ((undefined8 *)*puVar6 != param_1);
  FUN_00910480((uint *)(lVar3 + 0x40),puVar6);
LAB_00bd7ab4:
  puVar4 = (uint *)FUN_008fc900();
  lVar3 = (ulong)*puVar4 << 5;
  puVar2 = *(undefined8 **)(puVar4 + 2);
  do {
    puVar6 = puVar2;
    if (lVar3 == 0) goto LAB_00bd7ae0;
    lVar3 = lVar3 + -0x20;
    puVar2 = puVar6 + 4;
  } while ((undefined8 *)*puVar6 != param_1);
  FUN_00910480(puVar4,puVar6);
LAB_00bd7ae0:
  lVar3 = FUN_00a099f8();
  lVar8 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
  puVar2 = *(undefined8 **)(lVar3 + 0x38);
  do {
    puVar6 = puVar2;
    if (lVar8 == 0) goto LAB_00bd7b0c;
    lVar8 = lVar8 + -0x20;
    puVar2 = puVar6 + 4;
  } while ((undefined8 *)*puVar6 != param_1);
  FUN_00910480((uint *)(lVar3 + 0x30),puVar6);
LAB_00bd7b0c:
  lVar8 = FUN_009e80b8();
  lVar9 = (ulong)*(uint *)(lVar8 + 0x18) << 5;
  lVar3 = *(long *)(lVar8 + 0x20);
  do {
    lVar7 = lVar3;
    if (lVar9 == 0) goto LAB_00bd7b3c;
    lVar9 = lVar9 + -0x20;
    lVar3 = lVar7 + 0x20;
  } while (*(undefined8 **)(lVar7 + 8) != param_1);
  FUN_00bd9bb0((uint *)(lVar8 + 0x18),lVar7);
LAB_00bd7b3c:
  lVar8 = FUN_00a06b24();
  lVar9 = (ulong)*(uint *)(lVar8 + 0x40) << 5;
  lVar3 = *(long *)(lVar8 + 0x48);
  do {
    lVar7 = lVar3;
    if (lVar9 == 0) goto LAB_00bd7b6c;
    lVar9 = lVar9 + -0x20;
    lVar3 = lVar7 + 0x20;
  } while (*(undefined8 **)(lVar7 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar8 + 0x40),lVar7);
LAB_00bd7b6c:
  uVar5 = FUN_00969248();
  FUN_009683b8(uVar5,0);
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    operator_delete((void *)param_1[0x25]);
  }
  param_1[0x14] = &PTR_FUN_027edd70;
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
  }
  param_1[0x15] = 0;
  FUN_00bd7c84(param_1 + 0xe);
  FUN_00e835e0(param_1 + 0xb);
  FUN_00948d58(param_1 + 8);
  FUN_00968148(param_1 + 5);
  param_1[2] = &PTR_FUN_027e76c0;
  FUN_00b7d304(param_1 + 3,1);
  *param_1 = &PTR___cxa_pure_virtual_027eddb8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd7c40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027edd70;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd7c84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eddf8;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027edd90;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd7ce8(long param_1)

{
  FUN_00bd7938(param_1 + -0x28);
  return;
}




void FUN_00bd7cf0(long param_1)

{
  FUN_00bd7938(param_1 + -0x40);
  return;
}




void FUN_00bd7cf8(long param_1)

{
  FUN_00bd7938(param_1 + -0x58);
  return;
}




void FUN_00bd7d00(void *param_1)

{
  FUN_00bd7938();
  operator_delete(param_1);
  return;
}




void FUN_00bd7d24(long param_1)

{
  FUN_00bd7938((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00bd7d4c(long param_1)

{
  FUN_00bd7938((void *)(param_1 + -0x40));
  operator_delete((void *)(param_1 + -0x40));
  return;
}




void FUN_00bd7d74(long param_1)

{
  FUN_00bd7938((void *)(param_1 + -0x58));
  operator_delete((void *)(param_1 + -0x58));
  return;
}




void FUN_00bd7d9c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_0091f2ec(0);
  if ((uVar3 & 1) == 0) goto LAB_00bd7e38;
  uVar3 = FUN_00ed4748(*(undefined8 *)(param_1 + 8));
  if ((uVar3 & 1) == 0) {
    uVar3 = thunk_FUN_00ec9300();
    if ((uVar3 & 1) == 0) goto LAB_00bd7e38;
  }
  else {
    lVar4 = FUN_009b8d90();
    uVar1 = *(uint *)(lVar4 + 0x67bc);
    FUN_009b8d90();
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_009bb45c();
      goto LAB_00bd7e38;
    }
    uVar3 = FUN_009badb4();
    if (((uVar3 & 1) != 0) || (uVar3 = FUN_00a9b8a4(), (uVar3 & 1) != 0)) goto LAB_00bd7e38;
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    iVar2 = FUN_00ed30c4();
    if ((iVar2 != 0) || (uVar3 = FUN_00affa6c(), (uVar3 & 1) != 0)) goto LAB_00bd7e38;
    if ((*(long *)(param_1 + 0xe0) != 0) && (uVar3 = FUN_00bd21d0(), (uVar3 & 1) == 0)) {
      FUN_00bd9e88(param_1 + 0x70,0);
      *(undefined1 *)(param_1 + 0x132) = 1;
      goto LAB_00bd7e38;
    }
    uVar3 = thunk_FUN_00ec9300();
    if ((uVar3 & 1) == 0) {
      FUN_00e7d4c4();
      FUN_00e7d210();
      goto LAB_00bd7e38;
    }
  }
  thunk_FUN_00ec9930();
LAB_00bd7e38:
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_00bd7e9c(param_1);
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  return;
}




void FUN_00bd7e70(long param_1)

{
  FUN_00bd9e88(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x132) = 1;
  return;
}




void FUN_00bd7e9c(long *****param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_a0 [16];
  void *local_90;
  long ****local_88;
  long ****local_80;
  long ****local_78;
  code *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_0093d808();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_009e80b8();
    iVar3 = FUN_009e8894();
    while (0 < iVar3) {
      lVar6 = FUN_009e87c8(uVar5);
      if (*(int *)(lVar6 + 0x378) != 6) {
        switch(*(int *)(lVar6 + 0x378)) {
        case 1:
          local_88 = (long ****)&local_80;
          local_80 = (long ****)0x0;
          local_78 = (long ****)0x0;
          lVar6 = FUN_00cc1d38(lVar6,&local_88);
          FUN_00bd98dc(&local_88,local_80);
          if (lVar6 != 0) goto LAB_00bd7fac;
          break;
        case 2:
          lVar6 = FUN_00bd8960();
LAB_00bd7fac:
          local_60 = DAT_03210c2c;
          local_88 = (long ****)FUN_00bd8950;
          local_70 = (code *)0x0;
          uStack_68 = 0;
          local_78 = (long ****)0x0;
          local_80 = (long ****)param_1;
          FUN_009693a0(lVar6 + 8,&local_88);
          break;
        case 3:
          uVar9 = FUN_00e6ce7c("MENU_DIALOG_DODGE_PENALTY_TITLE",0);
          uVar7 = FUN_00e6ce7c("MENU_DIALOG_DODGE_PENALTY_BODY",0);
          uVar8 = FUN_00e6ce7c("MENU_DIALOG_DODGE_PENALTY_BUTTON_TITLE",0);
          FUN_00a9babc(uVar9,uVar7,uVar8,8,param_1,thunk_FUN_00bd8630);
          break;
        case 4:
          if ((*(byte *)(lVar6 + 0x330) & 1) == 0) {
            if (*(byte *)(lVar6 + 0x330) >> 1 == 0) goto LAB_00bd8038;
LAB_00bd8130:
            FUN_008fce60(param_1 + 0x23,lVar6 + 0x330);
            bVar2 = false;
          }
          else {
            if (*(long *)(lVar6 + 0x338) != 0) goto LAB_00bd8130;
LAB_00bd8038:
            bVar2 = true;
          }
          FUN_00e70570(&local_88,&DAT_0320ffa8);
          FUN_00a9b94c(lVar6 + 0x348,lVar6 + 0x358,lVar6 + 0x368,&local_88,param_1,
                       thunk_FUN_00bd8630,0);
          if ((long *****)local_80 != (long *****)0x0) {
            operator_delete__(local_80);
            local_88 = (long ****)0x0;
            local_80 = (long ****)0x0;
          }
          if (!bVar2) goto LAB_00bd81e8;
          break;
        case 5:
          (*(code *)(*param_1)[3])(param_1,lVar6 + 0x178);
          break;
        case 7:
          FUN_008fce60(param_1 + 0x23,lVar6 + 0x330);
          lVar6 = FUN_00a099f8();
          if (*(char *)(lVar6 + 0x60) == '\0') {
            lVar6 = FUN_00a099f8();
            local_80 = (long ****)0x0;
            local_70 = FUN_00bd9c30;
            local_88 = (long ****)param_1;
            local_78 = (long ****)param_1;
            FUN_009e4694(lVar6 + 0x30,&local_88);
          }
          else {
            uVar4 = FUN_00bd88ac(param_1);
            if ((uVar4 & 1) == 0) {
              *(undefined1 *)((long)param_1 + 0x134) = 1;
            }
          }
LAB_00bd81e8:
          FUN_009e888c(uVar5);
          goto LAB_00bd819c;
        case 10:
          if (*(int *)(lVar6 + 0x168) != 0) {
            uVar9 = FUN_009b8d90();
            FUN_008fa54c(&local_88,"inboxMessage");
            FUN_008fa54c(local_a0,"opulent");
            FUN_009bb728(uVar9,&local_88,local_a0);
            if ((local_a0[0] & 1) != 0) {
              operator_delete(local_90);
            }
            if (((ulong)local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            uVar9 = FUN_009b8d90();
            FUN_008fa54c(&local_88,"inboxMessage");
            FUN_009bb7d4(uVar9,&local_88,lVar6 + 0x168);
            if (((ulong)local_88 & 1) != 0) {
              operator_delete(local_78);
            }
          }
        }
        FUN_009e87d4(uVar5);
        break;
      }
      FUN_00a9da50(*(undefined4 *)(lVar6 + 0x37c),lVar6 + 0x358,*(undefined1 *)(lVar6 + 0x380),
                   *(undefined1 *)(lVar6 + 0x381));
      FUN_009e87d4(uVar5);
      iVar3 = FUN_009e8894(uVar5);
    }
  }
LAB_00bd819c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bd7d9c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_0091f2ec(0);
  if ((uVar3 & 1) == 0) goto LAB_00bd7e38;
  uVar3 = FUN_00ed4748(*(undefined8 *)(param_1 + 8));
  if ((uVar3 & 1) == 0) {
    uVar3 = thunk_FUN_00ec9300();
    if ((uVar3 & 1) == 0) goto LAB_00bd7e38;
  }
  else {
    lVar4 = FUN_009b8d90();
    uVar1 = *(uint *)(lVar4 + 0x67bc);
    FUN_009b8d90();
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_009bb45c();
      goto LAB_00bd7e38;
    }
    uVar3 = FUN_009badb4();
    if (((uVar3 & 1) != 0) || (uVar3 = FUN_00a9b8a4(), (uVar3 & 1) != 0)) goto LAB_00bd7e38;
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    iVar2 = FUN_00ed30c4();
    if ((iVar2 != 0) || (uVar3 = FUN_00affa6c(), (uVar3 & 1) != 0)) goto LAB_00bd7e38;
    if ((*(long *)(param_1 + 0xe0) != 0) && (uVar3 = FUN_00bd21d0(), (uVar3 & 1) == 0)) {
      FUN_00bd9e88(param_1 + 0x70,0);
      *(undefined1 *)(param_1 + 0x132) = 1;
      goto LAB_00bd7e38;
    }
    uVar3 = thunk_FUN_00ec9300();
    if ((uVar3 & 1) == 0) {
      FUN_00e7d4c4();
      FUN_00e7d210();
      goto LAB_00bd7e38;
    }
  }
  thunk_FUN_00ec9930();
LAB_00bd7e38:
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_00bd7e9c(param_1);
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  return;
}

