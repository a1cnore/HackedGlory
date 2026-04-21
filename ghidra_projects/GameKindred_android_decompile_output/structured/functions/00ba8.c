// functions/00ba8 — 23 functions
#include "libGameKindred.h"




void thunk_FUN_00ba8e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x6bfd8;
  uVar2 = FUN_00ce1f88(param_1 + 0x6a2e0);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00ba72d8(param_1);
  return;
}




void thunk_FUN_00ba8ec8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x6fc28;
  uVar2 = FUN_00ce1f88(param_1 + 0x6df30);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00ba72d8(param_1);
  return;
}




void thunk_FUN_00ba8f34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x71b80;
  FUN_00abc788(lVar1);
  uVar5 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x71ef0) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0x7a340;
  FUN_00910394(lVar2,uVar5);
  uVar4 = FUN_00e70b14(lVar2);
  if (0x10 < uVar4) {
    FUN_00e71810(&uStack_48,lVar2,0,0x10);
    FUN_00e705c8(&uStack_58,"...");
    FUN_00e70c34(&uStack_48,&uStack_58);
    if (pvStack_50 != (void *)0x0) {
      operator_delete__(pvStack_50);
      uStack_58 = 0;
      pvStack_50 = (void *)0x0;
    }
    FUN_00abc73c(lVar1,&uStack_48);
    if (pvStack_40 != (void *)0x0) {
      operator_delete__(pvStack_40);
      uStack_48 = 0;
      pvStack_40 = (void *)0x0;
    }
  }
  FUN_00ba72d8(param_1);
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba8090(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 0x7a310);
  *(undefined4 *)(param_1 + 0x7a354) = *param_3;
  FUN_008fce60(param_1 + 0x7a328,param_4);
  *(undefined4 *)(param_1 + 0x7a358) = *param_5;
  FUN_00e70510(&local_80);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,*param_3);
  plVar1 = (long *)(param_1 + 0x79ba0);
  FUN_00f0d75c(plVar1,&local_80);
  fVar3 = (float)FUN_00f0e700(param_1 + 0x79cd0);
  fVar4 = *(float *)(param_1 + 0x79d14) + -3.0;
  if ((*(float *)(param_1 + 0x79be0) != fVar3) || (*(float *)(param_1 + 0x79be4) != fVar4)) {
    *(float *)(param_1 + 0x79be0) = fVar3;
    *(float *)(param_1 + 0x79be4) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  plVar1 = (long *)(param_1 + 0x79ae8);
  fVar3 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  FUN_00f01c54(plVar1,0,0,1,1);
  fVar4 = fVar4 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x79b28) != fVar3 * -0.5) || (*(float *)(param_1 + 0x79b2c) != fVar4)) {
    *(float *)(param_1 + 0x79b28) = fVar3 * -0.5;
    *(float *)(param_1 + 0x79b2c) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,*param_5);
  plVar1 = (long *)(param_1 + 0x78308);
  FUN_00f0d75c(plVar1,&local_80);
  fVar3 = (float)FUN_00f0e700(param_1 + 0x78438);
  fVar4 = *(float *)(param_1 + 0x7847c) + -3.0;
  if ((*(float *)(param_1 + 0x78348) != fVar3) || (*(float *)(param_1 + 0x7834c) != fVar4)) {
    *(float *)(param_1 + 0x78348) = fVar3;
    *(float *)(param_1 + 0x7834c) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  plVar1 = (long *)(param_1 + 0x78250);
  fVar3 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  FUN_00f01c54(plVar1,0,0,1,1);
  fVar4 = fVar4 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0x78290) != fVar3 * -0.5) || (*(float *)(param_1 + 0x78294) != fVar4)) {
    *(float *)(param_1 + 0x78290) = fVar3 * -0.5;
    *(float *)(param_1 + 0x78294) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba8400(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0xf46a) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00ba8414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_00ba8418(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  undefined **local_288 [5];
  undefined1 auStack_260 [112];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [224];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x7a35c) != '\0') {
    bVar2 = *(byte *)(param_2 + 0x90);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_2 + 0x98);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_2 + 0xa0);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_2 + 0x91);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar5 = (char *)(param_2 + 0x91);
          lVar6 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar5 != *__s2) goto LAB_00ba859c;
            pcVar5 = pcVar5 + 1;
            lVar6 = lVar6 + 1;
            __s2 = __s2 + 1;
          } while (lVar6 != 0);
        }
      }
      else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00ba859c;
      FUN_00e84dac(local_288);
      local_288[0] = &PTR_FUN_027bbaa8;
      memset(auStack_1e8,0,0xd8);
      memset(auStack_260,0,0x60);
      FUN_00954ec0(auStack_1f0);
      FUN_00954d1c(auStack_260);
      uStack_60 = 0;
      local_68 = 0;
      local_58 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_f8 = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      FUN_00e84dec(local_288);
      FUN_00ba6b60(param_1,local_288);
      FUN_0094dae0(local_288);
    }
  }
LAB_00ba859c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ba85c8(long param_1)

{
  FUN_00ba8418(param_1 + -0x368);
  return;
}




void FUN_00ba85d0(undefined8 param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  void *__s1;
  char *__s2;
  
  uVar5 = FUN_009580c4();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_009580b8();
    bVar2 = *(byte *)(lVar6 + 0x5478);
    bVar3 = *(byte *)(param_2 + 0x180);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar6 + 0x5480);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_2 + 0x188);
    }
    if (__n != sVar1) {
      return;
    }
    __s1 = *(void **)(lVar6 + 0x5488);
    __s2 = *(char **)(param_2 + 400);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(lVar6 + 0x5479);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(param_2 + 0x181);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(lVar6 + 0x5479);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) {
            return;
          }
          pcVar7 = pcVar7 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
  }
  FUN_00ba6b60(param_1,param_2);
  return;
}




void FUN_00ba86a4(long param_1)

{
  FUN_00ba85d0(param_1 + -0x368);
  return;
}




void FUN_00ba86b0(long param_1)

{
  FUN_00ba6f54(param_1 + -0x368);
  return;
}




void FUN_00ba86bc(long param_1)

{
  FUN_00ba7444(param_1 + -0x368);
  return;
}




void FUN_00ba86c8(long param_1)

{
  FUN_00ba754c(param_1 + -0x368);
  return;
}




void FUN_00ba86d4(long param_1)

{
  FUN_00ba7780(param_1 + -0x368);
  return;
}




void FUN_00ba86e8(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort *puVar12;
  undefined4 uVar13;
  
  uVar7 = FUN_00efed6c();
  bVar6 = (param_3 & 1) == 0;
  uVar2 = 0x3eb33333;
  if (bVar6) {
    uVar2 = 0x3e19999a;
  }
  uVar13 = 0x3f800000;
  if (bVar6) {
    uVar13 = 0;
  }
  uVar3 = 0;
  if (bVar6) {
    uVar3 = 0x42c80000;
  }
  uVar4 = 0x3f800000;
  if (bVar6) {
    uVar4 = 0x3f666666;
  }
  uVar8 = FUN_00efee28(uVar13,uVar2,FUN_0091aa80);
  uVar9 = FUN_00efef08(0,uVar3,uVar2,FUN_0091aa80);
  uVar10 = FUN_00eff63c(uVar4,uVar4,uVar2,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar12);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar12,uVar8,uVar9,uVar10,0);
  lVar1 = param_2 + 0x694c0;
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar7,puVar12,0);
  lVar5 = DAT_03210d00;
  if ((param_3 & 1) != 0) {
    FUN_00ba4198(param_1,param_2,0,1,1);
    *(uint *)(param_2 + 0x69544) = *(uint *)(param_2 + 0x69544) | 4;
    *(uint *)(param_2 + 0x404) = *(uint *)(param_2 + 0x404) & 0xfffffffb;
    return;
  }
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar12;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar12);
    *(undefined ***)puVar12 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar12);
  return;
}




void FUN_00ba8990(long param_1)

{
  undefined8 uVar1;
  
  FUN_00abc5bc(param_1 + 0x6a2e0);
  FUN_00abc5bc(param_1 + 0x6bfd8);
  FUN_00abc5bc(param_1 + 0x6df30);
  FUN_00abc5bc(param_1 + 0x6fc28);
  FUN_00910394(param_1 + 0x7a340,&DAT_03210450);
  uVar1 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_00abc73c(param_1 + 0x71b80,uVar1);
  FUN_00f0e578(param_1 + 0x73b90,"checkbox_filled");
  FUN_00f0e578(param_1 + 0x73e68,"checkbox_empty");
  *(undefined4 *)(param_1 + 0x7a308) = 0;
  FUN_00b09454(param_1 + 0x756d0,0);
  FUN_00b09454(param_1 + 0x76c90,0);
  FUN_00b09454(param_1 + 0x78528,0);
  if (*(float *)(param_1 + 0x6958c) != 0.0) {
    *(float *)(param_1 + 0x6958c) = 0.0;
    FUN_0091ada4(param_1 + 0x69548);
  }
  if (*(float *)(param_1 + 0x673a4) != 0.0) {
    *(float *)(param_1 + 0x673a4) = 0.0;
    FUN_0091ada4(param_1 + 0x67360);
    return;
  }
  return;
}




void FUN_00ba8b04(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x404);
  if ((param_2 & 1) == 0) {
    puVar2 = (uint *)(param_1 + 0x404);
  }
  else {
    *(uint *)(param_1 + 0x404) = uVar1 | 4;
    *(uint *)(param_1 + 0x69544) = *(uint *)(param_1 + 0x69544) & 0xfffffffb;
    puVar2 = (uint *)(param_1 + 0x6572c);
    uVar1 = *puVar2;
  }
  *puVar2 = uVar1 & 0xfffffffb;
  return;
}




void FUN_00ba8b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x1aa0);
  FUN_00ba9ab8();
  local_50 = pvVar2;
  FUN_00f0d75c((long)pvVar2 + 0x268,param_2);
  uVar3 = FUN_00e6ce7c("MENU_PROFILE_GUILD_INVITE_FROM_LABEL",0);
  thunk_FUN_00e7051c(&local_60,uVar3);
  FUN_00e705c8(&local_70,"[HANDLE]");
  FUN_00e71248(&local_60,0,&local_70,param_3);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
    pvVar2 = local_50;
  }
  FUN_00f0d75c((long)pvVar2 + 0x398,&local_60);
  FUN_008fce60((long)pvVar2 + 0x1a88,param_4);
  FUN_00ed026c(param_1 + 0x67360,pvVar2,1);
  FUN_00ba8c78(param_1 + 0x67988,&local_50);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba8c78(uint *param_1,undefined8 *param_2)

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
    FUN_00ba9e0c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ba8d00(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_00f023dc(param_1 + 0x656a8);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0x694c0), (uVar1 & 1) == 0)) {
    lVar2 = FUN_009580b8();
    if (*(char *)(lVar2 + 0x568c) != '\0') {
      uVar3 = FUN_00e6ce7c("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TITLE",0);
      uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_MUST_REGISTER_DIALOG_TEXT",0);
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      uVar6 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
      FUN_00a9b94c(uVar3,uVar4,uVar5,uVar6,param_1,0,FUN_00ba8df0);
      return;
    }
    FUN_00ba6e60(param_1,1);
    return;
  }
  return;
}




void FUN_00ba8df0(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133758,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba8e5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x6bfd8;
  uVar2 = FUN_00ce1f88(param_1 + 0x6a2e0);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00ba72d8(param_1);
  return;
}




void FUN_00ba8ec8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x6fc28;
  uVar2 = FUN_00ce1f88(param_1 + 0x6df30);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00ba72d8(param_1);
  return;
}




void FUN_00ba8f34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x71b80;
  FUN_00abc788(lVar1);
  uVar5 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x71ef0) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0x7a340;
  FUN_00910394(lVar2,uVar5);
  uVar4 = FUN_00e70b14(lVar2);
  if (0x10 < uVar4) {
    FUN_00e71810(&local_48,lVar2,0,0x10);
    FUN_00e705c8(&local_58,"...");
    FUN_00e70c34(&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    FUN_00abc73c(lVar1,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  FUN_00ba72d8(param_1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

