// functions/00d99 — 51 functions
#include "libGameKindred.h"




void FUN_00d99000(undefined8 param_1,undefined8 *param_2)

{
  FUN_00d6a140(*(undefined4 *)(param_2[0x84] + 8),*param_2);
  FUN_00d6a19c(*(undefined4 *)(param_2[0x84] + 0xc),*param_2);
  FUN_00d69fc0(*param_2,*(undefined4 *)(param_2[0x84] + 0x10));
  FUN_00d6a01c(*param_2,*(undefined4 *)(param_2[0x84] + 0x14));
  return;
}




void FUN_00d9905c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00d99088(undefined8 *param_1)

{
  param_1[1] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_0281f2f8;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d990a8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00d990b0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}




void FUN_00d990b8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




bool FUN_00d990c0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_00d66d28(*param_2);
  uVar1 = *(uint *)(lVar3 + 0x2f4);
  bVar2 = false;
  if (((*(uint *)(param_1 + 8) & (uVar1 ^ 0xffffffff)) == 0) &&
     ((*(uint *)(param_1 + 0xc) == 0xffffffff ||
      (bVar2 = false, (*(uint *)(param_1 + 0xc) & uVar1) != 0)))) {
    bVar2 = (*(uint *)(param_1 + 0x10) & uVar1) == 0;
  }
  return bVar2;
}




void FUN_00d99120(undefined8 *param_1)

{
  FUN_00d66d28(*param_1);
  return;
}




void FUN_00d99138(undefined8 *param_1)

{
  param_1[1] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_0281ef78;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d99158(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00d99160(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}




void FUN_00d99168(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




bool FUN_00d99170(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = *(uint *)(*(long *)(param_2 + 8) + 0x2f4);
    bVar2 = false;
    if (((*(uint *)(param_1 + 8) & (uVar1 ^ 0xffffffff)) == 0) &&
       ((*(uint *)(param_1 + 0xc) == 0xffffffff ||
        (bVar2 = false, (*(uint *)(param_1 + 0xc) & uVar1) != 0)))) {
      bVar2 = (*(uint *)(param_1 + 0x10) & uVar1) == 0;
    }
  }
  return bVar2;
}




undefined8 FUN_00d991b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_00d991c0(undefined8 *param_1)

{
  param_1[1] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_027be8c0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d991e0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00d991e8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}




void FUN_00d991f0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




bool FUN_00d991f8(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_00d1e494(param_2);
  bVar2 = false;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x2f4);
    bVar2 = false;
    if (((*(uint *)(param_1 + 8) & (uVar1 ^ 0xffffffff)) == 0) &&
       ((*(uint *)(param_1 + 0xc) == 0xffffffff ||
        (bVar2 = false, (*(uint *)(param_1 + 0xc) & uVar1) != 0)))) {
      bVar2 = (*(uint *)(param_1 + 0x10) & uVar1) == 0;
    }
  }
  return bVar2;
}




void FUN_00d99258(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}




bool FUN_00d9929c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00d50ef8(param_2);
  lVar3 = *(long *)(lVar3 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef78) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  iVar1 = FUN_00d5412c(lVar3,*(undefined4 *)(param_1 + 8));
  if (iVar1 == -1) {
    return false;
  }
  iVar2 = FUN_00d535a4(lVar3,iVar1);
  iVar1 = FUN_00d548e8(lVar3,iVar1);
  return iVar2 == iVar1;
}




void FUN_00d99344(void)

{
  FUN_00d50ef8();
  return;
}




void FUN_00d99358(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}




bool FUN_00d9939c(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00d44c78(*param_2);
  if (lVar3 != 0) {
    for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef78) {
        iVar1 = FUN_00d5412c(lVar3,*(undefined4 *)(param_1 + 8));
        if (iVar1 != -1) {
          iVar2 = FUN_00d535a4(lVar3,iVar1);
          iVar1 = FUN_00d548e8(lVar3,iVar1);
          return iVar2 == iVar1;
        }
        return false;
      }
    }
  }
  return false;
}




void FUN_00d9944c(undefined8 *param_1)

{
  FUN_00d44c78(*param_1);
  return;
}




bool FUN_00d99454(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_00d1e494(param_2);
  bVar2 = false;
  if (lVar3 != 0) {
    uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
    if (uVar1 == 0x1f) {
      bVar2 = true;
    }
    else {
      bVar2 = *(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) != 5;
    }
  }
  return bVar2;
}




void FUN_00d994a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027be970;
  param_1[1] = 0;
  return;
}




void FUN_00d994b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




undefined8 FUN_00d994bc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = FUN_00d1e494(param_2);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_03130aa8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    uVar3 = FUN_00d6eb50();
    uVar1 = FUN_00d6e9d4(uVar3,*(undefined8 *)(param_1 + 8));
    uVar4 = FUN_00d73590(lVar2,uVar1);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}




void FUN_00d99534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bead0;
  param_1[1] = 0xbf80000000000010;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d99554(undefined4 param_1,long param_2,undefined4 param_3,byte param_4)

{
  *(undefined4 *)(param_2 + 8) = param_3;
  *(undefined4 *)(param_2 + 0xc) = param_1;
  *(byte *)(param_2 + 0x10) = param_4 & 1;
  return;
}




bool FUN_00d99568(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d1e494(param_2);
  if (lVar1 == 0) {
    return false;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    switch((ulong)*(uint *)(param_1 + 8)) {
    case 0:
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar3 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
              (*(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
      fVar2 = *(float *)(lVar1 + 0x308);
      fVar4 = DAT_031ab8f0;
      fVar5 = DAT_031ab9b0;
      break;
    case 1:
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar3 = (*(float *)(lVar1 + 0x250) + 1.0) *
              (*(float *)(lVar1 + 0xe8) +
              *(float *)(lVar1 + 0x19c) * (*(float *)(lVar1 + 0x304) + 1.0));
      fVar2 = *(float *)(lVar1 + 0x30c);
      fVar4 = DAT_031ab9a0;
      fVar5 = DAT_031aba60;
      break;
    case 2:
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar2 = 1.0;
      fVar4 = (*(float *)(lVar1 + 0x1a8) + 1.0) *
              (*(float *)(lVar1 + 0x40) +
              *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0));
      if (DAT_031ab9b8 <= fVar4) {
        fVar4 = DAT_031ab9b8;
      }
      fVar3 = DAT_031ab8f8;
      if (DAT_031ab8f8 <= fVar4) {
        fVar3 = fVar4;
      }
      if (0.0 < fVar3) {
        fVar2 = *(float *)(lVar1 + 0x310) / fVar3;
      }
      goto LAB_00d99768;
    case 3:
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar3 = (*(float *)(lVar1 + 0x24c) + 1.0) *
              (*(float *)(lVar1 + 0xe4) +
              *(float *)(lVar1 + 0x198) * (*(float *)(lVar1 + 0x300) + 1.0));
      fVar2 = *(float *)(lVar1 + 0x314);
      fVar4 = DAT_031ab998._4_4_;
      fVar5 = DAT_031aba5c;
      break;
    case 4:
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar3 = (*(float *)(lVar1 + 0x220) + 1.0) *
              (*(float *)(lVar1 + 0xb8) +
              *(float *)(lVar1 + 0x16c) * (*(float *)(lVar1 + 0x2d4) + 1.0));
      fVar2 = *(float *)(lVar1 + 0x318);
      fVar4 = DAT_031ab970;
      fVar5 = DAT_031aba30;
      break;
    default:
      return false;
    }
    if (fVar5 <= fVar3) {
      fVar3 = fVar5;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 / fVar4;
  }
  else {
    fVar2 = *(float *)(*(long *)(lVar1 + 0x40) + (ulong)*(uint *)(param_1 + 8) * 4 + 0x308);
  }
LAB_00d99768:
  return *(float *)(param_1 + 0xc) < fVar2;
}




void FUN_00d9977c(void)

{
  FUN_00d50ef8();
  FUN_00d5cf60();
  FUN_00d9e390();
  return;
}




void FUN_00d99794(undefined8 *param_1)

{
  FUN_00d80f68(*param_1);
  return;
}




undefined4 FUN_00d9979c(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_00d67c60(*param_1);
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x100) + 0x18))(lVar2 + 0x100,uVar1);
  return *puVar3;
}




undefined4 FUN_00d99804(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_00d67c60(*param_1);
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x100) + 0x18))(lVar2 + 0x100,uVar1);
  return *puVar3;
}




undefined1 FUN_00d9986c(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = FUN_00d67c60(*param_1);
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  puVar3 = (undefined1 *)(**(code **)(*(long *)(lVar2 + 0x100) + 0x18))(lVar2 + 0x100,uVar1);
  return *puVar3;
}




void FUN_00d998d4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00d51a94();
  if (iVar2 == 1) {
    local_48 = FUN_00d51830(param_4);
    uStack_44 = param_2;
    local_40 = param_3;
  }
  else {
    iVar2 = FUN_00d51a94(param_4);
    if (iVar2 == 2) {
      local_48 = FUN_00d51820(param_4);
      uStack_44 = param_2;
      local_40 = param_3;
    }
    else {
      uVar3 = FUN_00d50ef8(param_4);
      FUN_00d55794(uVar3,&local_48,0);
    }
  }
  *param_5 = local_48;
  param_5[1] = local_40;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00d99988(float param_1,float param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 1) {
    return param_2 <= param_1;
  }
  if (param_4 != 2) {
    if (param_4 == 3) {
      return param_1 <= param_2;
    }
    return param_2 < param_1;
  }
  return param_1 < param_2;
}




uint FUN_00d999d0(undefined8 param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if (param_3 == 1) {
    uVar1 = param_2 ^ param_4;
  }
  else {
    uVar1 = 0;
    if (param_3 == 0) {
      uVar1 = param_2 ^ param_4 ^ 1;
    }
  }
  return uVar1 & 1;
}




void FUN_00d999f8(undefined8 param_1,undefined4 *param_2,undefined4 param_3,long param_4,
                 uint param_5,uint param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_b8);
  if (param_4 != 0) {
    FUN_00d4daf4(auStack_b8,param_5 & 1,param_6 & 1,param_7 & 1,param_4);
  }
  FUN_00d4dabc(auStack_b8,param_3);
  if (0.0 < (float)param_1) {
    local_c8 = *param_2;
    local_c0 = param_2[1];
    uStack_c4 = 0;
    FUN_00d4db48(param_1,auStack_b8,&local_c8);
  }
  iVar2 = FUN_00d9e840(auStack_b8,&local_c8,1,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}




void FUN_00d99ae4(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_708 [96];
  long local_6a8 [200];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d4d9e8(auStack_708);
  FUN_00d4daf4(auStack_708,0,1,0,param_1);
  FUN_00d4dabc(auStack_708,param_2);
  uVar3 = FUN_00d9e840(auStack_708,local_6a8,200,0);
  if ((int)uVar3 != 0) {
    uVar6 = 0;
    do {
      lVar7 = local_6a8[uVar6];
      plVar4 = *(long **)(lVar7 + 0x2b0);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(lVar7 + 0x2b8) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 != 0) {
            plVar4 = *(long **)(lVar7 + 0x2b0);
            lVar5 = 0;
            if (plVar4 != (long *)0x0) {
              if (*(int *)(lVar7 + 0x2b8) == (int)plVar4[1]) {
                lVar5 = (**(code **)(*plVar4 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar7 + 0x2b0) = 0;
                lVar5 = 0;
                *(undefined4 *)(lVar7 + 0x2b8) = DAT_03214ce8;
              }
            }
            uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
            if (((uVar1 == 0x1f) || (1 < *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
               (plVar4 = *(long **)(lVar7 + 0x2b0), plVar4 != (long *)0x0)) {
              if (*(int *)(lVar7 + 0x2b8) != (int)plVar4[1]) goto LAB_00d99c30;
              lVar7 = (**(code **)(*plVar4 + 0x10))();
              if (lVar7 == param_1) {
                uVar3 = 1;
                goto LAB_00d99c4c;
              }
            }
          }
        }
        else {
LAB_00d99c30:
          *(undefined8 *)(lVar7 + 0x2b0) = 0;
          *(undefined4 *)(lVar7 + 0x2b8) = DAT_03214ce8;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uVar3 & 0xffffffff));
    uVar3 = 0;
  }
LAB_00d99c4c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




bool FUN_00d99c88(long param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e3ef78) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  iVar1 = FUN_00d5412c(lVar3,*param_2);
  if (iVar1 == -1) {
    return false;
  }
  uVar2 = FUN_00d535a4(lVar3,iVar1);
  return param_3 <= uVar2;
}




bool FUN_00d99d0c(void)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = thunk_FUN_00d9f258();
  bVar1 = false;
  if (lVar2 != 0) {
    fVar3 = (float)FUN_00d6d9f4();
    bVar1 = 0.0 < fVar3;
  }
  return bVar1;
}




bool FUN_00d99d30(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if (uVar1 == 0x1f) {
    return true;
  }
  return 1 < *(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3;
}




ulong FUN_00d99d68(undefined8 param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  
  if ((param_3 & 1) == 0) {
    uVar1 = FUN_00d588d4(param_1,param_2);
    uVar5 = FUN_00d5867c(param_1,uVar1);
    return uVar5;
  }
  lVar4 = FUN_00d9eb0c(param_1);
  uVar5 = 0;
  if ((lVar4 != 0) && (uVar5 = FUN_00d72dac(lVar4), (int)uVar5 != 0)) {
    uVar9 = 0;
    do {
      uVar1 = FUN_00d72ed0(lVar4,uVar9);
      uVar5 = FUN_00d73360(lVar4,uVar1);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_00d73560(lVar4,uVar1);
        pbVar8 = *(byte **)(lVar6 + 8);
        if (pbVar8 == (byte *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x811c9dc5;
          if (*pbVar8 != 0) {
            uVar2 = 0x811c9dc5;
            uVar7 = (uint)*pbVar8;
            do {
              pbVar8 = pbVar8 + 1;
              uVar2 = (uVar2 ^ uVar7) * 0x1000193;
              uVar7 = (uint)*pbVar8;
            } while (*pbVar8 != 0);
          }
        }
        if (uVar2 == *param_2) {
          iVar3 = FUN_00d736f4(lVar4,uVar1);
          return (ulong)(iVar3 == 0);
        }
      }
      uVar9 = uVar9 + 1;
      uVar2 = FUN_00d72dac(lVar4);
    } while (uVar9 < uVar2);
    uVar5 = 0;
  }
  return uVar5;
}




void FUN_00d99e94(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = FUN_00d9ea34();
  bVar2 = false;
  if (lVar6 != 0) {
    thunk_FUN_00d9ff34(&local_40,param_2);
    uVar7 = FUN_00d6bbac(lVar6,local_40,&local_3c);
    bVar2 = false;
    if ((uVar7 & 1) != 0) {
      if (param_3 == 0xffffffff) {
        iVar3 = FUN_00d6bb04(lVar6,local_3c);
        iVar4 = FUN_00d6bd30(lVar6,local_3c);
        bVar2 = false;
        if (iVar3 != iVar4) goto LAB_00d99f34;
      }
      uVar5 = FUN_00d6bb04(lVar6,local_3c);
      bVar2 = param_3 <= uVar5;
    }
  }
LAB_00d99f34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




byte FUN_00d99f5c(long param_1)

{
  return *(byte *)(param_1 + 0x303) & 1;
}




undefined8 FUN_00d99f68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ec00) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d7d300();
  return uVar2;
}




bool FUN_00d99f9c(undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00d9eb64();
  uVar1 = FUN_00d5412c(uVar3,*param_2);
  iVar2 = FUN_00d53990(uVar3,uVar1);
  return iVar2 == param_3;
}




uint FUN_00d99fe0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_019889cc(&local_40,1,DAT_031328d8,0);
  lVar2 = local_40;
  if (local_40 != 0) {
    uVar4 = 0;
    if (*(int *)(*(long *)(local_40 + 8) + 0xa4) != DAT_031328d8) goto LAB_00d9a0b4;
    FUN_00d74024(param_1,&local_44);
    iVar3 = FUN_00da3904(param_1,lVar2,local_44,1,1);
    uVar4 = 0;
    if (iVar3 == 0xffff) goto LAB_00d9a0b4;
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      do {
        if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_03130aa8) {
          uVar4 = FUN_00da3778((int)*(float *)(*(long *)(param_1 + 0x40) + 800),lVar5,lVar2,iVar3,0,
                               0);
          goto LAB_00d9a0b4;
        }
        lVar5 = *(long *)(lVar5 + 0x20);
      } while (lVar5 != 0);
    }
  }
  uVar4 = 0;
LAB_00d9a0b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

