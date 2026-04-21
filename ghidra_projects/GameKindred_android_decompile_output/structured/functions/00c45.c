// functions/00c45 — 12 functions
#include "libGameKindred.h"




float FUN_00c45390(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  
  fVar5 = (float)(**(code **)(*param_1 + 0x48))();
  if (*(uint *)(param_1 + 0x4a9) != 0) {
    plVar1 = (long *)param_1[0x4aa];
    lVar2 = (ulong)*(uint *)(param_1 + 0x4a9) << 3;
    lVar3 = lVar2;
    plVar4 = plVar1;
    do {
      if ((*plVar4 != 0) && (*(int *)(*plVar4 + 0x358) == 1)) break;
      lVar3 = lVar3 + -8;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    do {
      if ((*plVar1 != 0) && (*(int *)(*plVar1 + 0x358) == 2)) {
        return fVar5 + -100.0;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return fVar5 + -100.0;
}




void FUN_00c45440(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x2548) != 0) {
    plVar1 = *(long **)(param_1 + 0x2550);
    lVar2 = (ulong)*(uint *)(param_1 + 0x2548) << 3;
    do {
      if ((*plVar1 != 0) && (*(int *)(*plVar1 + 0x358) == 1)) {
        return;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00c4548c(undefined8 param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*param_2 != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_00c454e8(param_1,*(long *)(param_2 + 2) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (uVar2 < *param_2);
  }
  return;
}




void FUN_00c454e8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_64 [4];
  long *local_60 [2];
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = operator_new(0xf0);
  FUN_00f0bd88();
  plVar2[0x19] = 0;
  plVar2[0x1a] = 0;
  *(undefined4 *)(plVar2 + 0x1d) = 0;
  *(undefined2 *)((long)plVar2 + 0xec) = 0x101;
  *plVar2 = (long)&PTR_FUN_027fbd08;
  lVar3 = *(long *)(param_2 + 0x18);
  plVar2[0x1c] = *(long *)(param_2 + 0x20);
  plVar2[0x1b] = lVar3;
  local_50 = plVar2;
  FUN_00f0c244(plVar2,*(byte *)(param_2 + 0x2c) ^ 1);
  fVar6 = 0.0;
  FUN_00f0bc10(0,0,(float)*(int *)(param_2 + 0x28),local_60);
  FUN_00f0c168(plVar2,local_60);
  local_64[0] = 1;
  if (*(int *)(param_2 + 8) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    fVar6 = 0.0;
    do {
      local_60[0] = (long *)FUN_00c45928(param_1,*(long *)(param_2 + 0x10) + lVar3,local_64);
      if (local_60[0] != (long *)0x0) {
        (**(code **)(*local_50 + 0x78))(local_50,local_60[0],1);
        FUN_00ac91e4(local_50 + 0x19,local_60);
        fVar5 = (float)(**(code **)(*local_60[0] + 0x48))();
        if (fVar6 <= fVar5) {
          fVar6 = fVar5;
        }
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xd0;
      plVar2 = local_50;
    } while (uVar4 < *(uint *)(param_2 + 8));
  }
  *(undefined1 *)((long)plVar2 + 0xed) = local_64[0];
  if ((*(char *)((long)plVar2 + 0xec) == '\0') && ((int)plVar2[0x19] != 0)) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(plVar2[0x1a] + uVar4 * 8);
      if (lVar3 != 0) {
        FUN_00ab75d0(*(undefined4 *)(lVar3 + 0x158c),fVar6,fVar6);
        plVar2 = local_50;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(plVar2 + 0x19));
  }
  FUN_00f023ec(param_1 + 0x24b0,plVar2,1);
  FUN_00c45a94(param_1 + 0x2538,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c456bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 local_68;
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x2558;
  FUN_00b0a930((float)*(int *)(param_2 + 0x78),(float)*(int *)(param_2 + 0x7c),lVar1,
               (int)*(float *)(param_2 + 0x84),(int)*(float *)(param_2 + 0x88),
               (int)*(float *)(param_2 + 0x80),0);
  iVar5 = *(int *)(param_2 + 0x74);
  if ((*(float *)(param_1 + 0x2598) != (float)*(int *)(param_2 + 0x70)) ||
     (*(float *)(param_1 + 0x259c) != (float)iVar5)) {
    *(float *)(param_1 + 0x2598) = (float)*(int *)(param_2 + 0x70);
    *(float *)(param_1 + 0x259c) = (float)iVar5;
    FUN_0091ada4(lVar1);
  }
  *(uint *)(param_1 + 0x25dc) = *(uint *)(param_1 + 0x25dc) | 4;
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    lVar3 = param_2 + 0x39;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x48);
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    lVar4 = param_2 + 0x51;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x60);
  }
  FUN_00b0b848(0x3fef684c,lVar1,lVar3,lVar4);
  FUN_00b0a8a8(lVar1,param_2 + 0x68,param_2 + 0x6c,&DAT_01bee7fa);
  if (*(char *)(param_2 + 0x90) != '\0') {
    *(undefined1 *)(param_1 + 0x386c) = 1;
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      lVar3 = param_2 + 0x21;
    }
    else {
      lVar3 = *(long *)(param_2 + 0x30);
    }
    FUN_00b0b950(lVar1,lVar3);
    FUN_00968914(auStack_58,"%d / %d",(int)*(float *)(param_2 + 0x80),
                 (int)*(float *)(param_2 + 0x88));
    FUN_00e705c8(&local_68,auStack_58);
    FUN_00b0a8fc(lVar1,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c45854(long param_1,ulong param_2)

{
  long lVar1;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f04710();
  if ((param_2 & 1) != 0) {
    local_40 = DAT_03210f60;
    local_68 = FUN_00c45914;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(param_1 + 8,&local_68);
    local_68 = FUN_00c45914;
    local_40 = DAT_03210f8c;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(param_1 + 8,&local_68);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c45914(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c45924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,param_4,param_5);
  return;
}




undefined8 FUN_00c45928(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = param_2 + 0x18;
  uVar4 = FUN_00cabe08(lVar1);
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00c45b1c(uVar4,param_2,param_3);
    return uVar5;
  }
  bVar2 = *(byte *)(param_2 + 0x18);
  uVar6 = *(ulong *)(param_2 + 0x20);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar4 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar4 = uVar6;
  }
  if (uVar4 == 3) {
    uVar5 = FUN_0090d610(lVar1,0,0xffffffffffffffff,&DAT_01b97349,3);
    if ((int)uVar5 == 0) {
      uVar5 = FUN_00c45c08(uVar5,param_2,param_3);
      return uVar5;
    }
    bVar2 = *(byte *)(param_2 + 0x18);
    uVar6 = *(ulong *)(param_2 + 0x20);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  uVar4 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar4 = uVar6;
  }
  if (uVar4 == 8) {
    iVar3 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"moreInfo",8);
    if (iVar3 == 0) {
      uVar5 = FUN_00c45de8(param_1,param_2);
      return uVar5;
    }
    bVar2 = *(byte *)(param_2 + 0x18);
    uVar6 = *(ulong *)(param_2 + 0x20);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar7 = uVar6;
  }
  if (((uVar7 == 0xd) &&
      (iVar3 = FUN_0090d610(lVar1,0,0xffffffffffffffff,"rewardedVideo",0xd), iVar3 == 0)) &&
     (uVar4 = FUN_00937f24(), (uVar4 & 1) != 0)) {
    uVar5 = FUN_00c4604c(param_1,param_2);
    return uVar5;
  }
  return 0;
}




void FUN_00c45a94(uint *param_1,undefined8 *param_2)

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
    FUN_00c46c88(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




long * FUN_00c45b1c(undefined8 param_1,long param_2,byte *param_3)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = operator_new(0x24f8);
  FUN_00b0c060(*(undefined4 *)(param_2 + 200),plVar2,param_2 + 0x30,*(undefined1 *)(param_2 + 0xcc))
  ;
  if (*(int *)(param_2 + 8) != 0) {
    uVar3 = 0;
    lVar4 = 0x20;
    do {
      FUN_00b0d1f4(plVar2,*(long *)(param_2 + 0x10) + lVar4 + -0x18);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (uVar3 < *(uint *)(param_2 + 8));
  }
  (**(code **)(*plVar2 + 0x170))(plVar2);
  FUN_00b0d62c(plVar2,*(undefined4 *)(param_2 + 0xc4));
  FUN_00ab75d0(*(undefined4 *)((long)plVar2 + 0x158c),*(float *)(plVar2 + 0x2b2) + 20.0,
               *(undefined4 *)((long)plVar2 + 0x1594),plVar2);
  if (*(char *)((long)plVar2 + 0x24f6) == '\0') {
    bVar1 = (int)plVar2[0x48f] == 0;
  }
  else {
    bVar1 = true;
  }
  *param_3 = *param_3 & bVar1;
  return plVar2;
}




long * FUN_00c45c08(undefined8 param_1,long param_2,byte *param_3)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  undefined1 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte local_88 [16];
  void *local_78;
  byte local_70 [8];
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_008fcdb8(local_70,param_2 + 0x60);
  FUN_008fcdb8(local_88,param_2 + 0xa8);
  __n = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    __n = local_68;
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar6 = (char *)((ulong)local_70 | 1);
    __s1 = pcVar6;
    if ((local_70[0] & 1) != 0) {
      __s1 = local_60;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_70[0] & 1) == 0) {
      if (__n != 0) {
        lVar7 = -(ulong)(local_70[0] >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00c45ce4;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00c45ce4;
    plVar8 = (long *)0x0;
  }
  else {
LAB_00c45ce4:
    uVar10 = *(undefined4 *)(param_2 + 200);
    uVar2 = *(undefined1 *)(param_2 + 0xcc);
    plVar8 = operator_new(0x24f8);
    FUN_00b0c19c(uVar10,plVar8,local_70,local_88,uVar2);
    FUN_00b0d62c(plVar8,*(undefined4 *)(param_2 + 0xc4));
    if (*(int *)(param_2 + 8) != 0) {
      uVar9 = 0;
      lVar7 = 0x20;
      do {
        FUN_00b0d1f4(plVar8,*(long *)(param_2 + 0x10) + lVar7 + -0x18);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x38;
      } while (uVar9 < *(uint *)(param_2 + 8));
    }
    (**(code **)(*plVar8 + 0x170))(plVar8);
    if (*(char *)((long)plVar8 + 0x24f6) == '\0') {
      bVar4 = (int)plVar8[0x48f] == 0;
    }
    else {
      bVar4 = true;
    }
    *param_3 = *param_3 & bVar4;
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar8;
}




long * FUN_00c45de8(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined2 uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_98;
  void *local_90;
  code *local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_0092ea9c();
  plVar6 = operator_new(0x16e0);
  FUN_00aea298();
  uVar4 = 0x434c0000;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0x432e0000;
  }
  FUN_00e70570(&local_88,&DAT_0320ffa8);
  FUN_00ab703c(0x41a00000,uVar4,0x43c80000,plVar6,0,&local_88,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = (code *)0x0;
    local_80 = (void *)0x0;
  }
  FUN_00e705c8(&local_98,&DAT_01e277f2);
  uVar2 = *(undefined2 *)(param_2 + 0xcd);
  FUN_008fcdb8(&local_88,param_2 + 0x78);
  thunk_FUN_00e7051c(&local_70,&local_98);
  local_60 = CONCAT22(uVar2,0x100);
  FUN_00aea30c(plVar6,&local_88);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  uVar5 = FUN_0092ea9c();
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar5 & 1) == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d378(plVar6 + 0xe4,*ppuVar1);
  local_88 = (code *)0x3f0000003f000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_88);
  FUN_00ab7588(0x3f800000,plVar6,&DAT_01bee7f6);
  FUN_00b0914c(plVar6,1);
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    lVar7 = param_2 + 0x91;
  }
  else {
    lVar7 = *(long *)(param_2 + 0xa0);
  }
  uVar8 = FUN_00e6ce7c(lVar7,0);
  thunk_FUN_00e7051c(&local_98,uVar8);
  uVar5 = FUN_00e70b34(&local_98,&DAT_03210450);
  if ((uVar5 & 1) != 0) {
    FUN_00e70924(&local_98,(byte *)(param_2 + 0x90));
  }
  FUN_00ab7498(plVar6,&local_98);
  local_60 = DAT_03210c64;
  local_88 = FUN_00c462b0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_80 = (void *)param_1;
  local_68 = plVar6;
  FUN_009693a0(plVar6 + 1,&local_88);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

