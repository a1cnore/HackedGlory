// functions/00b04 — 22 functions
#include "libGameKindred.h"




undefined8 FUN_00b040b8(long param_1,int param_2,ulong param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x3440) == param_2) && ((param_3 & 1) == 0)) {
    return 1;
  }
  uVar1 = FUN_00b03ffc(param_1,param_2,param_4 & 1);
  return uVar1;
}




undefined8 FUN_00b040d8(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00b04144();
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x686))) {
                    /* WARNING: Could not recover jumptable at 0x00b0412c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x140))(param_1,uVar1,param_3 & 1,param_4 & 1);
    return uVar2;
  }
  return 0;
}




ulong FUN_00b04144(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  byte *pbVar8;
  byte *__s2;
  ulong uVar9;
  long lVar10;
  
  uVar3 = *(uint *)(param_1 + 0x3430);
  if (uVar3 != 0) {
    bVar4 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 0x3438);
    uVar9 = 0;
    if ((bVar4 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar4 >> 1);
    }
    do {
      pbVar8 = (byte *)(lVar10 + uVar9 * 0x18);
      bVar5 = *pbVar8;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar8 + 8);
      }
      if (__n == uVar2) {
        __s2 = *(byte **)(lVar10 + uVar9 * 0x18 + 0x10);
        if ((bVar5 & 1) == 0) {
          __s2 = pbVar8 + 1;
        }
        sVar1 = -(ulong)(bVar4 >> 1);
        pbVar8 = param_2;
        sVar6 = __n;
        if ((bVar4 & 1) == 0) {
          while( true ) {
            if (sVar6 == 0) goto LAB_00b0421c;
            if (pbVar8[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar8 = pbVar8 + 1;
            sVar6 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) goto LAB_00b0421c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  uVar9 = 0xffffffff;
LAB_00b0421c:
  return uVar9 & 0xffffffff;
}




undefined1 * FUN_00b0423c(long param_1)

{
  if ((*(uint *)(param_1 + 0x3430) != 0) &&
     (*(uint *)(param_1 + 0x3440) < *(uint *)(param_1 + 0x3430))) {
    return (undefined1 *)(*(long *)(param_1 + 0x3438) + (ulong)*(uint *)(param_1 + 0x3440) * 0x18);
  }
  return &DAT_0320ffa8;
}




void FUN_00b0426c(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  FUN_00b132e8(param_3 + 0x238,&DAT_01bee7f6);
  FUN_00b1326c(param_2,param_3 + 0x238,&DAT_01bee7fa);
  return;
}




void FUN_00b042b4(long param_1)

{
  FUN_00f0d378(param_1 + 0x6e8);
  FUN_00b042dc(param_1);
  return;
}




void FUN_00b042dc(long param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x3445) == '\0') {
    fVar1 = -1.0;
  }
  else {
    fVar1 = (float)FUN_00f13e54(param_1 + 0x238);
    fVar1 = fVar1 + -52.0;
  }
  FUN_00f0db64(fVar1,0,0x3f800000,param_1 + 0x6e8);
  return;
}




void FUN_00b04330(long param_1,uint param_2)

{
  FUN_00b09454(param_1 + 0x818,param_2 & 1);
  FUN_00b09454(param_1 + 0x1dd8,param_2 & 1);
  return;
}




void FUN_00b04368(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3445) = param_2 & 1;
  FUN_00b042dc();
  return;
}




void FUN_00b04378(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x3440) + param_3;
  if (*(char *)(param_1 + 0x3446) == '\0') {
    if ((int)uVar1 < 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x3420);
    if (uVar3 <= uVar1) {
      return;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3420);
  }
  uVar2 = uVar1;
  if (uVar3 <= uVar1) {
    uVar2 = 0;
  }
  uVar3 = uVar3 - 1;
  if (-1 < (int)uVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 == *(uint *)(param_1 + 0x3440)) {
    return;
  }
  FUN_00b03ffc(param_1,uVar3,0);
  return;
}




void FUN_00b043c8(undefined8 *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_027db790;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  return;
}




void FUN_00b04404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027db790;
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b04444(void *param_1)

{
  FUN_00b04404();
  operator_delete(param_1);
  return;
}




int FUN_00b04468(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00b04958(param_3,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,param_4,1);
  *(uint *)((long)plVar2 + 0x84) = *(uint *)((long)plVar2 + 0x84) & 0xfffffffb;
  uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  local_58 = (long *)CONCAT44(param_2,uVar3);
  FUN_00f13f18(param_4,&local_58);
  local_58 = plVar2;
  uStack_50 = param_4;
  FUN_00b04528(param_3 + 0x17,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (int)param_3[0x17] + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b04528(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00b049c0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00b045b0(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x19);
  if (uVar1 != param_2) {
    uVar8 = 0;
    uVar3 = 0x3dcccccd;
    if ((param_3 & 1) == 0) {
      uVar3 = 0;
    }
    if (-1 < (int)uVar1) {
      FUN_00f01980(*(undefined8 *)(param_1[0x18] + (ulong)uVar1 * 0x10));
      uVar8 = uVar3;
      uVar4 = FUN_00efee28(0,FUN_009a7608);
      lVar5 = DAT_03210d00;
      uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar6 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
        *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
        FUN_00efc8e8(puVar7);
        *(undefined ***)puVar7 = &PTR_FUN_02825148;
        *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
      }
      FUN_00f02308(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10),uVar4,
                   puVar7,0);
      FUN_00f048e0(&local_78,DAT_03210c80,0);
      FUN_00f04760(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10 + 8),
                   &local_78,0);
    }
    *(uint *)(param_1 + 0x19) = param_2;
    uVar4 = *(undefined8 *)(param_1[0x18] + (ulong)param_2 * 0x10 + 8);
    local_78 = (**(code **)(*param_1 + 0x48))(param_1);
    uStack_74 = uVar8;
    FUN_00f13f18(uVar4,&local_78);
    FUN_00f01980(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10));
    lVar5 = *(long *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10);
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 4;
    lVar5 = *(long *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10);
    uVar1 = *(uint *)(lVar5 + 0x84);
    if ((uVar1 & 0x7f80) != 0) {
      *(uint *)(lVar5 + 0x84) = uVar1 & 0xffff807f;
      FUN_0091ada4();
    }
    uVar4 = FUN_00efee28(0x3f800000,uVar3,FUN_009a7608);
    FUN_00f02308(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10),uVar4,0);
    FUN_00f048e0(&local_78,DAT_03210c7c,0);
    FUN_00f04760(*(undefined8 *)(param_1[0x18] + (ulong)*(uint *)(param_1 + 0x19) * 0x10 + 8),
                 &local_78,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00b0483c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uVar5 = 0;
    uVar4 = 0;
    lVar3 = 8;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0xc0) + lVar3) + 0x118))();
      fVar6 = (float)uVar4;
      if ((float)uVar4 <= (float)(uVar1 >> 0x20)) {
        fVar6 = (float)(uVar1 >> 0x20);
      }
      uVar4 = (uint)fVar6;
      uVar2 = uVar2 + 1;
      fVar6 = (float)uVar5;
      if ((float)uVar5 <= (float)(uVar1 & 0xffffffff)) {
        fVar6 = (float)(uVar1 & 0xffffffff);
      }
      uVar5 = (uint)fVar6;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 0xb8));
    uVar2 = (ulong)uVar4 << 0x20;
    uVar1 = (ulong)uVar5;
  }
  return uVar2 | uVar1;
}




void FUN_00b048ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_3 + 0xb8) != 0) {
    uVar1 = 0;
    lVar2 = 8;
    do {
      FUN_00f13f08(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0xc0) + lVar2));
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_3 + 0xb8));
  }
  return;
}




void * FUN_00b04958(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x88);
  FUN_00f017e8();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00b049c0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_00b04a44(undefined8 *param_1)

{
  FUN_00f1306c();
  FUN_00948cd8(param_1 + 0x2b);
  *param_1 = &PTR_FUN_027db8d8;
  param_1[0x2b] = &PTR_FUN_027dba40;
  FUN_00ab6c24(param_1 + 0x2e,0);
  FUN_00ab6c24(param_1 + 0x2e6,0);
  FUN_00ce1c44(param_1 + 0x59e);
  FUN_00abaee8(param_1 + 0x61e,0);
  FUN_00f1306c(param_1 + 0x6dd);
  FUN_00f0e4a8(param_1 + 0x708);
  FUN_00f0d160(param_1 + 0x726);
  FUN_00e70510(param_1 + 0x74c);
  FUN_00e70510(param_1 + 0x74e);
  *(undefined2 *)(param_1 + 0x750) = 0;
  FUN_00b04b04(param_1);
  return;
}




void FUN_00b04b04(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  plVar1 = param_1 + 0x59e;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x2e6;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x61e;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar4 = param_1 + 0x6dd;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar5 = param_1 + 0x708;
  FUN_00f133a4(plVar4,plVar5,1);
  plVar6 = param_1 + 0x726;
  FUN_00f133a4(plVar4,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  FUN_0092ea9c();
  FUN_00b0360c(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bb11f0);
  FUN_00b03834(plVar1,3);
  FUN_00b02bf4(0x41800000,plVar1);
  FUN_00ce1cbc(plVar1,0);
  FUN_00b0364c(plVar1,1);
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_TEXTENTRY_CHANGE_HANDLE_MESSAGE",0);
  thunk_FUN_00e7051c(&local_b8,uVar10);
  FUN_00e705c8(&local_a8,"[MIN]");
  FUN_00e705c8(&local_c8,"3");
  FUN_00e71248(&local_b8,0,&local_a8,&local_c8);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[MAX]");
  FUN_00e705c8(&local_c8,"16");
  FUN_00e71248(&local_b8,0,&local_a8,&local_c8);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c8 = 0;
    local_c0 = (void *)0x0;
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (void *)0x0;
  }
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_TEXTENTRY_CHANGE_HANDLE_CAPTION",0);
  FUN_00ce1e34(plVar1,uVar10,&local_b8,&DAT_03210450,0,0,0,0,0,1,0,0);
  local_80 = DAT_03210fac;
  local_a8 = FUN_00b06994;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(param_1 + 0x59f,&local_a8);
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_EDIT_NICKNAME_BUTTON",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,plVar2,0,uVar10,&DAT_01bee7fa,&DAT_03218ef8,0);
  uVar7 = DAT_03210c64;
  *(uint *)((long)param_1 + 0x17b4) = *(uint *)((long)param_1 + 0x17b4) & 0xfffffffb;
  local_a8 = FUN_00b0699c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar7;
  FUN_009693a0(param_1 + 0x2e7,&local_a8);
  FUN_00b0914c(plVar2,1);
  FUN_00f0e578(param_1 + 0x6b9,"edit_handle");
  *(uint *)((long)param_1 + 0x355c) = *(uint *)((long)param_1 + 0x355c) & 0xfffffffb;
  FUN_00b09144(0x3ecccccd,plVar3);
  uVar8 = *(uint *)((long)param_1 + 0x3174);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x3174) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar3);
  }
  lVar11 = NEON_fmov(0x41f00000,4);
  param_1[0x629] = lVar11;
  local_a8 = thunk_FUN_00b06a14;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar7;
  FUN_009693a0(param_1 + 0x61f,&local_a8);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"account_level_shield_big");
  if ((*(float *)(param_1 + 0x712) != 0.5) || (*(float *)((long)param_1 + 0x3894) != 0.45)) {
    param_1[0x712] = 0x3ee666663f000000;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x711) != 2.2) || (*(float *)((long)param_1 + 0x388c) != 2.2)) {
    param_1[0x711] = 0x400ccccd400ccccd;
    FUN_0091ada4(plVar5);
  }
  if ((*(uint *)((long)param_1 + 0x38c4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x38c4) = *(uint *)((long)param_1 + 0x38c4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x730) != 0.5) || (*(float *)((long)param_1 + 0x3984) != 0.6)) {
    param_1[0x730] = 0x3f19999a3f000000;
    FUN_0091ada4(plVar6);
  }
  local_a8 = thunk_FUN_00b06a84;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar7;
  FUN_009693a0(param_1 + 0x2f,&local_a8);
  uVar10 = FUN_00e6ce7c("REAL_ID_BUTTON",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x447a0000,param_1 + 0x2e,0,uVar10,&DAT_01bee7fa,&DAT_03218ef8,
               0);
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xfffffffb;
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

