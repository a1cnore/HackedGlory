// functions/00be8 — 32 functions
#include "libGameKindred.h"




bool FUN_00be80c4(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x80) < *(int *)(param_2 + 0x80);
}




bool FUN_00be80d8(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x24) < *(int *)(param_2 + 0x24);
}




void FUN_00be80ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong local_78;
  ulong local_70;
  void *local_68;
  undefined8 *local_60;
  code *local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027efd40;
  pvVar7 = operator_new(0x1950);
  FUN_00c5e3b8();
  *(undefined8 **)((long)pvVar7 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027efba8;
  param_1[1] = pvVar7;
  FUN_00be75ac(param_1 + 2);
  puVar1 = param_1 + 0x2f;
  param_1[0xcb] = param_1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(ushort *)(param_1 + 0xcc) = *(ushort *)(param_1 + 0xcc) & 0x8000 | 0x3ff;
  *(undefined8 *)((long)param_1 + 0x18e) = 0;
  param_1[0xcd] = &PTR_FUN_027efc28;
  pvVar7 = operator_new(0x290);
  FUN_00c15a70();
  param_1[0xce] = pvVar7;
  *(undefined8 **)((long)pvVar7 + 0xb8) = param_1 + 0xcd;
  param_1[0xcf] = param_1 + 0xd0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcd] = &PTR_FUN_027efc08;
  param_1[0xd2] = &PTR_FUN_027efc68;
  pvVar7 = operator_new(0x4c8);
  FUN_00c16f24();
  param_1[0xd3] = pvVar7;
  *(undefined8 **)((long)pvVar7 + 0xb8) = param_1 + 0xd2;
  param_1[0xd2] = &PTR_FUN_027efc48;
  param_1[0xd4] = &PTR_FUN_027efca8;
  pvVar7 = operator_new(0xd0);
  FUN_00c1871c();
  param_1[0xd5] = pvVar7;
  *(undefined8 **)((long)pvVar7 + 0xb8) = param_1 + 0xd4;
  param_1[0xd4] = &PTR_FUN_027efc88;
  memset(param_1 + 0xd6,0,0x50);
  uVar5 = DAT_03214ce8;
  param_1[0xe3] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 2;
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
  *(undefined4 *)(param_1 + 0xe2) = uVar5;
  *(undefined8 *)((long)param_1 + 0x724) = 0x3e99999a;
  FUN_00c5eb44(param_1[1],param_1[0xd3]);
  FUN_00c5e884(param_1[1],param_1[0xce]);
  FUN_00c5eb78(param_1[1],param_1[0xd5]);
  FUN_00be8748(puVar1,0,FUN_00be879c,0,0,0,0,0);
  FUN_00be8748(puVar1,1,FUN_00be87c0,0,FUN_00be87f8,0,0,0);
  FUN_00be8748(puVar1,2,FUN_00be882c,0,FUN_00be8864,0,FUN_00be8894,0);
  FUN_00be8748(puVar1,3,FUN_00be8898,0,FUN_00be889c,0,FUN_00be88c4,0);
  FUN_00be8748(puVar1,4,FUN_00be88c8,0,FUN_00be8900,0,FUN_00be8b3c,0);
  FUN_00be8748(puVar1,5,FUN_00be8b40,0,FUN_00be8b78,0,FUN_00be8bc8,0);
  FUN_00be8748(puVar1,6,FUN_00be8bd8,0,FUN_00be8bdc,0,FUN_00be8c8c,0);
  FUN_00be8748(puVar1,7,0,0,FUN_00be8c90,0,FUN_00be8ca4,0);
  FUN_00be8748(puVar1,8,FUN_00be8ca8,0,FUN_00be8ce0,0,FUN_00be8e48,0);
  FUN_00be8748(puVar1,9,FUN_00be8e8c,0,FUN_00be8e90,0,FUN_00be8f50,0);
  FUN_00be8748(puVar1,10,FUN_00be8f54,0,FUN_00be8f8c,0,FUN_00be9018,0);
  FUN_00be8748(puVar1,0xc,FUN_00be901c,0,FUN_00be9054,0,0,0);
  FUN_00be8748(puVar1,0xb,FUN_00be90d8,0,FUN_00be9110,0,FUN_00be911c,0);
  FUN_00be8748(puVar1,0xd,0,0,FUN_00be9120,0,0,0);
  FUN_00be918c(puVar1,0,1);
  FUN_00be918c(puVar1,1,2);
  FUN_00be918c(puVar1,2,3);
  FUN_00be918c(puVar1,3,4);
  FUN_00be918c(puVar1,4,6);
  FUN_00be918c(puVar1,5,6);
  FUN_00be918c(puVar1,6,5);
  FUN_00be918c(puVar1,6,8);
  FUN_00be918c(puVar1,8,3);
  FUN_00be918c(puVar1,3,9);
  FUN_00be918c(puVar1,9,10);
  FUN_00be918c(puVar1,10,0xc);
  FUN_00be918c(puVar1,0xc,0xb);
  iVar6 = 0;
  do {
    FUN_00be918c(puVar1,iVar6,0xd);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xd);
  FUN_00be918c(puVar1,4,7);
  FUN_00be918c(puVar1,5,7);
  FUN_00be918c(puVar1,6,7);
  FUN_00be918c(puVar1,7,8);
  local_58 = FUN_00beb8e4;
  local_60 = param_1;
  FUN_00f02e98(0xbf800000,&local_60,0,1);
  local_60 = (undefined8 *)0x0;
  local_58 = (code *)0x0;
  local_50 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  FUN_0096beb0(&local_60,&local_78);
  lVar8 = FUN_009fded0();
  lVar10 = param_1[1];
  pcVar2 = (code *)((ulong)local_60 >> 1 & 0x7f);
  if (((ulong)local_60 & 1) != 0) {
    pcVar2 = local_58;
  }
  uVar9 = 0;
  if (pcVar2 != (code *)0x0) {
    uVar3 = local_78 >> 1 & 0x7f;
    if ((local_78 & 1) != 0) {
      uVar3 = local_70;
    }
    uVar9 = 0;
    if ((lVar8 != 0) && (uVar3 != 0)) {
      iVar6 = FUN_009fe4d0(lVar8,&local_78);
      uVar9 = (uint)(iVar6 == 1) << 2;
    }
  }
  *(uint *)(lVar10 + 0x15c) = *(uint *)(lVar10 + 0x15c) & 0xfffffffb | uVar9;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be8748(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)(*(ushort *)(param_1 + 0x4e8) >> 10 & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x50) = FUN_00beb8c0;
  *(code **)(lVar1 + 0x48) = FUN_00beb8c0;
  *(code **)(lVar1 + 0x58) = FUN_00beb8c0;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x4e8) =
       *(ushort *)(param_1 + 0x4e8) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x4e8) & 0x83ff;
  return;
}




void FUN_00be879c(long param_1)

{
  if (0 < *(int *)(param_1 + 0x720)) {
    *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x720) + -1;
    return;
  }
  FUN_00be9550(param_1 + 0x178,1);
  return;
}




void FUN_00be87c0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,2);
    return;
  }
  return;
}




void FUN_00be87f8(long param_1)

{
  FUN_00c5e8b8(*(undefined8 *)(param_1 + 8));
  FUN_008fa2d8();
  FUN_00c5ebb0(0x3f800000,0x40000000,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00be882c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,3);
    return;
  }
  return;
}




void FUN_00be8864(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x670) + 0x288) = *(undefined4 *)(param_1 + 0x6c0);
  FUN_00c15c68();
  FUN_00bc4a34(param_1 + 0x6a0);
  return;
}




void FUN_00be8894(void)

{
  return;
}




void FUN_00be8898(void)

{
  return;
}




void FUN_00be889c(long param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x71c) = 0;
  uVar1 = 9;
  if (*(int *)(param_1 + 0x718) != *(int *)(param_1 + 0x6c0)) {
    uVar1 = 4;
  }
  FUN_00be9550(param_1 + 0x178,uVar1);
  return;
}




void FUN_00be88c4(void)

{
  return;
}




void FUN_00be88c8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,6);
    return;
  }
  return;
}




void FUN_00be8900(long param_1)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  
  *(undefined4 *)(param_1 + 0x728) = 0;
  FUN_00bc49d8(param_1 + 0x690,
               *(undefined8 *)(*(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x718) * 8));
  FUN_008fce60(param_1 + 0x6e0,
               *(long *)(*(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x718) * 8) + 8);
  plVar5 = *(long **)(param_1 + 0x6f8);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x700) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        plVar5 = *(long **)(param_1 + 0x6f8);
        uVar7 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x700) == (int)plVar5[1]) {
            uVar7 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x6f8) = 0;
            uVar7 = 0;
            *(undefined4 *)(param_1 + 0x700) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar7);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      *(undefined4 *)(param_1 + 0x700) = DAT_03214ce8;
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x718) * 8);
  bVar3 = *(byte *)(lVar6 + 0x40);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(lVar6 + 0x48);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar10 = *(void **)(lVar6 + 0x50);
    __s1 = pvVar10;
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(lVar6 + 0x41);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(lVar6 + 0x41);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00be8a60;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00be8aa8;
    }
    if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00be8aa8;
  }
  else {
LAB_00be8a60:
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(lVar6 + 0x41);
    }
    else {
      pvVar10 = *(void **)(lVar6 + 0x50);
    }
  }
  lVar6 = FUN_00aa12a8(*(undefined4 *)(lVar6 + 0x58),pvVar10,1,1);
  if (lVar6 != 0) {
    uVar2 = *(undefined4 *)(lVar6 + 0x30);
    *(long *)(param_1 + 0x6f8) = lVar6 + 0x28;
    *(undefined4 *)(param_1 + 0x700) = uVar2;
  }
LAB_00be8aa8:
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_spoils_fly_in.mp3",0,1);
  plVar5 = *(long **)(param_1 + 0x708);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x710) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x708) = 0;
      *(undefined4 *)(param_1 + 0x710) = DAT_03214ce8;
    }
  }
  lVar6 = FUN_00aa12a8(0x3e000000,
                       "build://Sounds/UI.assetbundle/sfx_spoils_electric_blue_circle_loop.ogg",1,1)
  ;
  if (lVar6 != 0) {
    uVar2 = *(undefined4 *)(lVar6 + 0x30);
    *(long *)(param_1 + 0x708) = lVar6 + 0x28;
    *(undefined4 *)(param_1 + 0x710) = uVar2;
  }
  return;
}




void FUN_00be8b3c(void)

{
  return;
}




void FUN_00be8b40(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,6);
    return;
  }
  return;
}




void FUN_00be8b78(long param_1)

{
  int iVar1;
  
  FUN_00bc4c08(param_1 + 0x6a0,*(undefined4 *)(param_1 + 0x71c));
  iVar1 = FUN_00bc4b2c(param_1 + 0x6a0,*(undefined4 *)(param_1 + 0x71c),param_1 + 0x6e0);
  FUN_00bc4a0c((float)iVar1,param_1 + 0x690);
  return;
}




void FUN_00be8bc8(long param_1)

{
  *(int *)(param_1 + 0x71c) = *(int *)(param_1 + 0x71c) + 1;
  return;
}




void FUN_00be8bd8(void)

{
  return;
}




void FUN_00be8bdc(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x71c);
  lVar1 = param_1 + 0x6a0;
  iVar2 = FUN_00bc4c00(lVar1);
  if (iVar3 == iVar2) {
    uVar4 = 8;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x71c);
    iVar2 = FUN_00bc4c00(lVar1);
    if (iVar3 < iVar2) {
      do {
        iVar3 = FUN_00bc4b2c(lVar1,*(undefined4 *)(param_1 + 0x71c),param_1 + 0x6e0);
        if (0 < iVar3) break;
        iVar3 = *(int *)(param_1 + 0x71c) + 1;
        *(int *)(param_1 + 0x71c) = iVar3;
        iVar2 = FUN_00bc4c00(lVar1);
      } while (iVar3 < iVar2);
    }
    iVar3 = *(int *)(param_1 + 0x71c);
    iVar2 = FUN_00bc4c00(lVar1);
    uVar4 = 8;
    if (iVar3 != iVar2) {
      uVar4 = 5;
    }
  }
  FUN_00be9550(param_1 + 0x178,uVar4);
  return;
}




void FUN_00be8c8c(void)

{
  return;
}




void FUN_00be8c90(long param_1)

{
  *(undefined4 *)(param_1 + 0x724) = 0;
  FUN_00be9550(param_1 + 0x178,8);
  return;
}




void FUN_00be8ca4(void)

{
  return;
}




void FUN_00be8ca8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,3);
    return;
  }
  return;
}




void FUN_00be8ce0(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (float)(**(code **)(**(long **)(param_3 + 0x698) + 0x48))();
  local_40 = local_40 * 0.5;
  fStack_3c = param_2 * 0.5;
  lVar3 = param_3 + 0x668;
  FUN_00f0862c(&local_40,*(undefined8 *)(*(long *)(param_3 + 0x698) + 0x20));
  FUN_00bc46f4(lVar3);
  FUN_00bc4a14(param_3 + 0x690);
  FUN_00bc4798(lVar3,*(undefined4 *)(param_3 + 0x718));
  FUN_00bc4a04(param_3 + 0x690);
  FUN_00bc46fc(*(undefined4 *)(param_3 + 0x724),lVar3,
               *(long *)(param_3 + 0x6c8) + (ulong)*(uint *)(param_3 + 0x718) * 0xb0);
  plVar2 = *(long **)(param_3 + 0x6f8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_3 + 0x700) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_3 + 0x6f8);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_3 + 0x700) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_3 + 0x6f8) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_3 + 0x700) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3e800000,uVar4);
      }
    }
    else {
      *(undefined8 *)(param_3 + 0x6f8) = 0;
      *(undefined4 *)(param_3 + 0x700) = DAT_03214ce8;
    }
  }
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_spoils_fly_to_HUD.mp3",0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be8e48(long param_1)

{
  *(int *)(param_1 + 0x718) = *(int *)(param_1 + 0x718) + 1;
  FUN_008fce60(param_1 + 0x6e0,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x724) = 0x3e99999a;
  return;
}




void FUN_00be8e8c(void)

{
  return;
}




void FUN_00be8e90(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_008fa1d0();
  FUN_00bc4a24(param_1 + 0x690);
  FUN_00c5ec18(0x3fc00000,*(undefined8 *)(param_1 + 8));
  plVar1 = *(long **)(param_1 + 0x708);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x710) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x708);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x710) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x708) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x710) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x708) = 0;
      *(undefined4 *)(param_1 + 0x710) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00be8f50(void)

{
  return;
}




void FUN_00be8f54(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00beaef4();
  if ((uVar1 & 1) != 0) {
    FUN_00be9550(param_1 + 0x178,0xc);
    return;
  }
  return;
}




void FUN_00be8f8c(long param_1)

{
  FUN_00f01980(*(undefined8 *)(param_1 + 8));
  FUN_00c16068(*(undefined8 *)(param_1 + 0x670));
  FUN_00c160b0(0x3f400000,*(undefined8 *)(param_1 + 0x670));
  FUN_00c16120(0x3f400000,*(undefined8 *)(param_1 + 0x670));
  *(uint *)(*(long *)(param_1 + 0x6a8) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x6a8) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x698) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x698) + 0x84) & 0xfffffffb;
  FUN_00c5ed38(*(undefined8 *)(param_1 + 8));
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_spoils_end_sequence_fly_away.mp3",0,1);
  return;
}

