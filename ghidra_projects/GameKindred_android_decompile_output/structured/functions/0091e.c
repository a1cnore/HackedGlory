// functions/0091e — 21 functions
#include "libGameKindred.h"




float FUN_0091e258(void)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  ulong uVar5;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 == 0) {
    fVar2 = -1.0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x40);
    uVar3 = NEON_fmov(0x3f800000,4);
    fVar4 = (float)((ulong)uVar3 >> 0x20);
    fVar2 = ((float)*(undefined8 *)(lVar1 + 0x244) + (float)uVar3) *
            ((float)*(undefined8 *)(lVar1 + 0xdc) +
            (float)*(undefined8 *)(lVar1 + 400) *
            ((float)*(undefined8 *)(lVar1 + 0x2f8) + (float)uVar3));
    fVar4 = ((float)((ulong)*(undefined8 *)(lVar1 + 0x244) >> 0x20) + fVar4) *
            ((float)((ulong)*(undefined8 *)(lVar1 + 0xdc) >> 0x20) +
            (float)((ulong)*(undefined8 *)(lVar1 + 400) >> 0x20) *
            ((float)((ulong)*(undefined8 *)(lVar1 + 0x2f8) >> 0x20) + fVar4));
    uVar5 = DAT_02c0a134 ^
            (DAT_02c0a134 ^ CONCAT44(fVar4,fVar2)) &
            CONCAT44(-(uint)(fVar4 < (float)(DAT_02c0a134 >> 0x20)),
                     -(uint)(fVar2 < (float)DAT_02c0a134));
    uVar5 = uVar5 ^ (uVar5 ^ DAT_02c0a074) &
                    CONCAT44(-(uint)((float)(uVar5 >> 0x20) < (float)(DAT_02c0a074 >> 0x20)),
                             -(uint)((float)uVar5 < (float)DAT_02c0a074));
    fVar2 = (float)uVar5;
    fVar4 = fVar2 + (float)(uVar5 >> 0x20);
    fVar2 = fVar2 / fVar4;
    if (fVar4 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  return fVar2;
}




float FUN_0091e2e8(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 == 0) {
    fVar3 = -1.0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x40);
    fVar2 = (*(float *)(lVar1 + 0x244) + 1.0) *
            (*(float *)(lVar1 + 0xdc) + *(float *)(lVar1 + 400) * (*(float *)(lVar1 + 0x2f8) + 1.0))
    ;
    if ((float)DAT_02c0a134 <= fVar2) {
      fVar2 = (float)DAT_02c0a134;
    }
    fVar3 = (float)DAT_02c0a074;
    if ((float)DAT_02c0a074 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  return fVar3;
}




undefined8 FUN_0091e360(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar5 = 0;
  piVar4 = &DAT_02c093d8;
  do {
    iVar1 = *piVar4;
    iVar2 = FUN_00cedce4();
    if (iVar1 == iVar2) {
      uVar3 = FUN_00d9e390(*piVar4);
      return uVar3;
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 0x1c;
  } while (uVar5 < 0x10);
  return 0;
}




int * FUN_0091e3c4(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  
  uVar4 = 0;
  piVar3 = &DAT_02c093d8;
  do {
    iVar1 = *piVar3;
    iVar2 = FUN_00cedce4();
    if (iVar1 == iVar2) {
      return piVar3;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x1c;
  } while (uVar4 < 0x10);
  return (int *)0x0;
}




char * FUN_0091e418(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  pcVar5 = &DAT_02c093dc;
  while (iVar1 = *(int *)(pcVar5 + -4), iVar2 = FUN_00cedce4(), iVar1 != iVar2) {
    uVar4 = uVar4 + 1;
    pcVar5 = pcVar5 + 0x70;
    if (0xf < uVar4) {
      return (char *)0x0;
    }
  }
  uVar4 = 0;
  pcVar3 = &DAT_02c09ad8;
  do {
    if (*pcVar3 == *pcVar5) {
      return pcVar3;
    }
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 0x48;
  } while (uVar4 < 0x10);
  return (char *)0x0;
}




char * FUN_0091e49c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  pcVar5 = &DAT_02c093dc;
  while (iVar1 = *(int *)(pcVar5 + -4), iVar2 = FUN_00cedce4(), iVar1 != iVar2) {
    uVar4 = uVar4 + 1;
    pcVar5 = pcVar5 + 0x70;
    if (0xf < uVar4) {
      return (char *)0x0;
    }
  }
  uVar4 = 0;
  pcVar3 = &DAT_02c09ad8;
  while ((*pcVar3 == *pcVar5 || (*pcVar3 == -1))) {
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 0x48;
    if (0xf < uVar4) {
      return (char *)0x0;
    }
  }
  return pcVar3;
}




float FUN_0091e534(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_1;
  if (param_2 <= param_1) {
    fVar4 = param_2;
  }
  fVar5 = param_1;
  if (param_1 <= 0.0) {
    fVar5 = param_2;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (0.0 < param_2) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 0.0;
      bVar2 = param_1 == 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar4 = fVar5;
  }
  return fVar4;
}




undefined1  [16] FUN_0091e558(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < (ulong)puVar3[4]) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_0091e5d0;
      }
      if (*param_2 <= (ulong)puVar3[4]) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_0091e5d0:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x50);
    *(undefined8 *)((long)pvVar5 + 0x20) = *(undefined8 *)*param_4;
    FUN_00ec3d6c((long)pvVar5 + 0x28);
    FUN_0090d414(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_0091e630(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027b9b80;
  FUN_00f123cc(param_1 + 0x17);
  FUN_00f13ca4(param_1 + 0x5d);
  FUN_00f13ca4(param_1 + 0x74);
  FUN_00f13ca4(param_1 + 0x8b);
  FUN_00f13ca4(param_1 + 0xa2);
  FUN_00f13ca4(param_1 + 0xb9);
  FUN_00f13ca4(param_1 + 0xd0);
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  FUN_00f11800(param_1 + 0x17,0);
  return;
}




void FUN_0091e6b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_027b9b80;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  FUN_00f13d08(param_1 + 0xd0);
  FUN_00f13d08(param_1 + 0xb9);
  FUN_00f13d08(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x74);
  FUN_00f13d08(param_1 + 0x5d);
  puVar1 = param_1 + 0x17;
  *puVar1 = &PTR_FUN_02827cb8;
  param_1[0x4b] = &PTR_FUN_02827e38;
  FUN_00f2d740(param_1 + 0x5a);
  *puVar1 = &PTR_FUN_028275a0;
  param_1[0x4b] = &PTR_FUN_02827718;
  FUN_0199d254(param_1 + 0x54);
  FUN_0199fb94(param_1 + 0x51);
  FUN_0199fb94(param_1 + 0x4e);
  FUN_00f13d08(puVar1);
  FUN_00f13d08(param_1);
  return;
}




void FUN_0091e778(void *param_1)

{
  FUN_0091e6b0();
  operator_delete(param_1);
  return;
}




void FUN_0091e79c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00e7bda0(2);
  plVar1 = param_1 + 0x17;
  param_1[0xe8] = lVar5;
  param_1[0x48] = (long)FUN_0091ea4c;
  param_1[0x49] = (long)param_1;
  FUN_00f112f0(plVar1,1);
  uVar3 = FUN_00e6a474("ingame-effects");
  uVar4 = FUN_0091ed5c("ingame-effects",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x36c) =
       *(uint *)((long)param_1 + 0x36c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x36c) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  uVar3 = FUN_00e6a474("ingame-actor-effects");
  uVar4 = FUN_0091ed5c("ingame-actor-effects",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x64c) =
       *(uint *)((long)param_1 + 0x64c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x64c) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  uVar3 = FUN_00e6a474("ingame-ui");
  uVar4 = FUN_0091ed5c("ingame-ui",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x704) =
       *(uint *)((long)param_1 + 0x704) & 0x80000000 |
       *(uint *)((long)param_1 + 0x704) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  uVar3 = FUN_00e6a474("plaques-player");
  uVar4 = FUN_0091ed5c("plaques-player",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x424) =
       *(uint *)((long)param_1 + 0x424) & 0x80000000 |
       *(uint *)((long)param_1 + 0x424) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  uVar3 = FUN_00e6a474("plaques-hero");
  uVar4 = FUN_0091ed5c("plaques-hero",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x4dc) =
       *(uint *)((long)param_1 + 0x4dc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x4dc) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  uVar3 = FUN_00e6a474("plaques-all");
  uVar4 = FUN_0091ed5c("plaques-all",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x594) =
       *(uint *)((long)param_1 + 0x594) & 0x80000000 |
       *(uint *)((long)param_1 + 0x594) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x5d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xa2,1);
  FUN_00f023ec(param_1 + 0xa2,param_1 + 0x8b,1);
  FUN_00f023ec(param_1 + 0x8b,param_1 + 0x74,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xb9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xd0,1);
  plVar6 = (long *)FUN_00f13624();
  (**(code **)(*plVar6 + 0x58))(plVar6,plVar1);
  FUN_00f13fd8(param_1,plVar6);
  plVar6 = (long *)FUN_00f13624();
  (**(code **)(*plVar6 + 0x58))(plVar6,param_1 + 0xd0);
  FUN_00f13fd8(plVar1,plVar6);
  FUN_009671b0(param_2,plVar6);
  FUN_00f0025c(&uStack_6c,&local_70);
  FUN_00f13f08(uStack_6c,local_70,param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0091ea4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0091eafc(param_3,param_1,param_2);
  return;
}




void FUN_0091ea60(undefined8 param_1,long param_2)

{
  FUN_00f11800(param_2 + 0xb8,1);
  FUN_00f12440(param_1,param_2 + 0xb8);
  return;
}




void FUN_0091ea9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x738) = param_2;
  uVar1 = FUN_009bd5c8(param_2);
  FUN_009b81f4(uVar1,param_1);
  FUN_0092daa4(param_1);
  return;
}




void FUN_0091ead0(long param_1)

{
  FUN_0092dab8();
  *(undefined8 *)(param_1 + 0x738) = 0;
  return;
}




void FUN_0091eaf4(long param_1)

{
  FUN_00f13e54(param_1 + 0x680);
  return;
}




void FUN_0091eafc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1188 [144];
  undefined1 auStack_10f8 [144];
  undefined1 auStack_1068 [4096];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x738) == 0) {
    uVar3 = (**(code **)(*param_3 + 0x138))(param_3);
    uVar5 = (**(code **)(*param_3 + 0x140))(param_3);
    FUN_0199cd4c(auStack_1068,uVar3,uVar5);
    FUN_0199cee8(0,0,0,0x3f800000,auStack_1068);
    FUN_0199cf00(0x3f800000,auStack_1068);
    FUN_0199c960(param_2,auStack_1068,1);
  }
  else {
    FUN_009bd5c8();
    uVar3 = FUN_009b806c();
    uVar4 = FUN_00967c60();
    if ((uVar4 & 1) != 0) {
      FUN_00967c7c(param_2,uVar3);
    }
    uVar2 = FUN_01988c10(auStack_1068,0x200,1,uVar3);
    uVar3 = FUN_01997b18(0);
    uVar5 = (**(code **)(*param_3 + 0x138))(param_3);
    FUN_009bd5c8(*(undefined8 *)(param_1 + 0x738));
    uVar6 = FUN_009b81ec();
    FUN_0199b72c(auStack_10f8,"Draw all scene entities",auStack_1068,uVar2,uVar3,uVar5,uVar6,1);
    FUN_0199cee8(0,0,0,0x3f800000,auStack_10f8);
    FUN_0199cf00(0x3f800000,auStack_10f8);
    FUN_0199cf2c(auStack_10f8,thunk_FUN_00934f70);
    FUN_0199c960(param_2,auStack_10f8,0);
    FUN_009bd5c8(*(undefined8 *)(param_1 + 0x738));
    uVar3 = FUN_009b806c();
    uVar2 = FUN_01988c10(auStack_1068,0x200,2,uVar3);
    uVar3 = FUN_01997b18(0);
    uVar5 = (**(code **)(*param_3 + 0x138))(param_3);
    FUN_009bd5c8(*(undefined8 *)(param_1 + 0x738));
    uVar6 = FUN_009b81ec();
    FUN_0199b72c(auStack_1188,"Draw all particle effects",auStack_1068,uVar2,uVar3,uVar5,uVar6,0);
    FUN_0199c960(param_2,auStack_1188,0);
    FUN_0199b7a8(auStack_1188);
    FUN_0199b7a8(auStack_10f8);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0091ed5c(byte *param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = (int)param_2;
  uVar6 = 0x9e3779b9;
  if (param_2 < 0xc) {
    uVar7 = 0x9e3779b9;
  }
  else {
    uVar7 = 0x9e3779b9;
    do {
      iVar3 = *(int *)param_1;
      pbVar4 = param_1 + 4;
      param_2 = param_2 - 0xc;
      pbVar1 = param_1 + 8;
      param_1 = param_1 + 0xc;
      param_3 = *(int *)pbVar1 + param_3;
      uVar7 = ((iVar3 + uVar7) - (*(int *)pbVar4 + uVar6)) - param_3 ^ param_3 >> 0xd;
      uVar6 = ((*(int *)pbVar4 + uVar6) - param_3) - uVar7 ^ uVar7 << 8;
      uVar2 = (param_3 - uVar7) - uVar6 ^ uVar6 >> 0xd;
      uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar2 >> 0xc;
      uVar6 = (uVar6 - uVar2) - uVar7 ^ uVar7 << 0x10;
      uVar2 = (uVar2 - uVar7) - uVar6 ^ uVar6 >> 5;
      uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar2 >> 3;
      uVar6 = (uVar6 - uVar2) - uVar7 ^ uVar7 << 10;
      param_3 = (uVar2 - uVar7) - uVar6 ^ uVar6 >> 0xf;
    } while (0xb < param_2);
  }
  param_3 = param_3 + iVar5;
  switch(param_2) {
  case 0xb:
    param_3 = param_3 + (uint)param_1[10] * 0x1000000;
  case 10:
    param_3 = param_3 + (uint)param_1[9] * 0x10000;
  case 9:
    param_3 = param_3 + (uint)param_1[8] * 0x100;
  case 8:
    uVar6 = uVar6 + (uint)param_1[7] * 0x1000000;
  case 7:
    uVar6 = uVar6 + (uint)param_1[6] * 0x10000;
  case 6:
    uVar6 = uVar6 + (uint)param_1[5] * 0x100;
  case 5:
    uVar6 = uVar6 + param_1[4];
  case 4:
    uVar7 = uVar7 + (uint)param_1[3] * 0x1000000;
  case 3:
    uVar7 = uVar7 + (uint)param_1[2] * 0x10000;
  case 2:
    uVar7 = uVar7 + (uint)param_1[1] * 0x100;
  case 1:
    uVar7 = uVar7 + *param_1;
  default:
    uVar7 = (uVar7 - uVar6) - param_3 ^ param_3 >> 0xd;
    uVar6 = (uVar6 - param_3) - uVar7 ^ uVar7 << 8;
    uVar2 = (param_3 - uVar7) - uVar6 ^ uVar6 >> 0xd;
    uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar2 >> 0xc;
    uVar6 = (uVar6 - uVar2) - uVar7 ^ uVar7 << 0x10;
    uVar2 = (uVar2 - uVar7) - uVar6 ^ uVar6 >> 5;
    uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar2 >> 3;
    uVar6 = (uVar6 - uVar2) - uVar7 ^ uVar7 << 10;
    return (uVar2 - uVar7) - uVar6 ^ uVar6 >> 0xf;
  }
}




void FUN_0091ef04(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = -1.0;
  fStack_3c = -1.0;
  if ((param_3 & 1) == 0) {
    FUN_00f0025c(&fStack_3c,&local_40);
  }
  else {
    FUN_00f00238();
  }
  FUN_009bbfb0();
  uVar2 = FUN_009bd5c8();
  FUN_009b87f0(uVar2,param_1,param_2,(int)fStack_3c,(int)local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0091ef94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = -1.0;
  fStack_3c = -1.0;
  if ((param_3 & 1) == 0) {
    FUN_00f0025c(&fStack_3c,&local_40);
  }
  else {
    FUN_00f00238();
  }
  FUN_009bbfb0();
  uVar2 = FUN_009bd5c8();
  FUN_009b891c(uVar2,param_1,param_2,(int)fStack_3c,(int)local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

