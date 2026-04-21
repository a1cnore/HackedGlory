// functions/1002b — 333 functions
#include "GameKindred.h"




void FUN_1002b0068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002b09ec(param_1,param_2,param_5);
  return;
}




void thunk_FUN_1002b0a94(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_100640a74(0x3ba3d70a,param_1 + 0xb8,&DAT_101e44a9c,0,2);
    FUN_100642b7c(param_1 + 0xb8,uVar1);
  }
  return;
}




void thunk_FUN_1002b0af0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_100640a74(0x3ba3d70a,param_1 + 0xb8,&DAT_101e44a98,0,2);
    FUN_100642b7c(param_1 + 0xb8,uVar1);
  }
  return;
}




void FUN_1002b0078(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_1002b0078_101483df0;
  puVar2 = (uint *)FUN_1003166d0();
  if (*puVar2 != 0) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar4 = (ulong)*puVar2 << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1000decc0();
        break;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  thunk_FUN_100651068(param_1 + 0xe2);
  param_1[0x35] = &PTR_FUN_101464d00;
  param_1[0xc4] = &PTR_FUN_1014a7108;
  param_1[0xdb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xde);
  FUN_10064e2bc(param_1 + 0xc4);
  param_1[0xa6] = &PTR_FUN_1014a7108;
  param_1[0xbd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc0);
  FUN_10064e2bc(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_1014a7108;
  param_1[0x9f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa2);
  FUN_10064e2bc(param_1 + 0x88);
  param_1[0x6a] = &PTR_FUN_1014a7108;
  param_1[0x81] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x84);
  FUN_10064e2bc(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_1014a7108;
  param_1[99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x66);
  FUN_10064e2bc(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002b0078(void)

{
  FUN_1002b0078();
  return;
}




void FUN_1002b01cc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b0078();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b01e0(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined4 local_64;
  ulong local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  
  if ((*(char *)(param_1 + 0x860) != '\0') && (*(char *)(param_1 + 0x861) != '\0')) {
    iVar2 = 0;
    iVar4 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
    do {
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if ((iVar2 != 0x3d) && (iVar2 != 0x68)) {
        iVar1 = FUN_10109c4ac(iVar2);
        if (iVar1 != 0) {
          FUN_10109c85c(local_60 & 0xffffffff);
          _printf("KEY TRIGGERED: %s\n");
          *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + 1;
        }
        iVar1 = FUN_10109c4c4(local_60 & 0xffffffff);
        if ((iVar1 != 0) && (0 < *(int *)(param_1 + 0x85c))) {
          FUN_10109c85c(local_60 & 0xffffffff);
          _printf("KEY RELEASED: %s\n");
          *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + -1;
          FUN_1002b03c8(&local_50,&local_60);
          iVar4 = iVar4 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x69);
    local_60 = 0;
    local_58 = (void *)0x0;
    local_64 = 2;
    uVar3 = FUN_10109c508(2);
    if ((uVar3 & 1) != 0) {
      FUN_10109db58(local_64);
      _printf("KEY TRIGGERED: %s\n");
      *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + 1;
    }
    iVar2 = FUN_10109c520(local_64);
    if ((iVar2 != 0) && (0 < *(int *)(param_1 + 0x85c))) {
      FUN_10109db58(local_64);
      _printf("KEY RELEASED: %s\n");
      *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + -1;
      FUN_1002b0448(&local_60,&local_64);
      iVar4 = iVar4 + 1;
    }
    if (((int)local_50 != 0) || ((int)local_60 != 0)) {
      FUN_1002b04c8(param_1,&local_50,&local_60);
    }
    if (0 < *(int *)(param_1 + 0x85c)) {
      _printf("NUM KEYS WAITING FOR RELEASE: %i\n");
    }
    if (0 < iVar4) {
      _printf("NUM KEYS RELEASED: %i\n");
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  return;
}




void FUN_1002b03c8(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002b1ac0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_1002b0448(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002b1b3c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_1002b04c8(long param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_60 [32];
  
  uVar4 = (ulong)*param_2;
  if (*param_2 != 0) {
    uVar7 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_2 + 2) + uVar7 * 4);
      if (iVar1 == 0x4c) {
LAB_1002b053c:
        uVar3 = FUN_1000f2f24();
        *(undefined1 *)(param_1 + 0x858) = uVar3;
        uVar4 = (ulong)*param_2;
      }
      else {
        uVar2 = 0;
        do {
          uVar6 = uVar2;
          if (uVar6 == 5) break;
          uVar2 = uVar6 + 1;
        } while ((&DAT_1011588dc)[uVar6] != iVar1);
        if (uVar6 < 5) goto LAB_1002b053c;
        *(int *)(param_1 + 0x850) = iVar1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = (ulong)*param_3;
  if (*param_3 != 0) {
    puVar5 = *(undefined4 **)(param_3 + 2);
    do {
      *(undefined4 *)(param_1 + 0x854) = *puVar5;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (0 < *(int *)(param_1 + 0x85c)) {
    *(undefined1 *)(param_1 + 0x861) = 1;
    FUN_1002b0898(param_1);
    FUN_1002b068c(param_1);
    return;
  }
  FUN_100644aec(auStack_60,DAT_101e44a80,param_1);
  FUN_100644c34(param_1,auStack_60,1);
  return;
}




void FUN_1002b05ec(long *param_1)

{
  undefined4 uVar1;
  
  FUN_10064e32c();
  uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10065179c(uVar1,0,0x3f800000,param_1 + 0xe2);
  FUN_10064e5ec(0,0,param_1 + 0x17,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0x35,8,param_1,8);
  FUN_10064e5ec(0,0,param_1 + 0xe2,8,param_1,8);
  return;
}




void FUN_1002b068c(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3120(auStack_30,"-");
  if (*(char *)((long)param_1 + 0x861) != '\0') goto LAB_1002b07c0;
  if (*(int *)((long)param_1 + 0x844) < 0x69) {
    cVar2 = *(char *)((long)param_1 + 0x84c);
    FUN_100651594(param_1 + 0xe2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
    if (cVar2 != '\0') {
      FUN_1000f2ef8(*(undefined1 *)((long)param_1 + 0x84c));
      FUN_10109c85c(*(undefined4 *)((long)param_1 + 0x844));
LAB_1002b0744:
      FUN_1004e38ac(auStack_30,"%s + %s");
      goto LAB_1002b07c0;
    }
    uVar3 = FUN_10109c85c(*(undefined4 *)((long)param_1 + 0x844));
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x84c);
    if ((int)param_1[0x109] < 3) {
      FUN_100651594(param_1 + 0xe2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
      if (cVar2 != '\0') {
        FUN_1000f2ef8(*(undefined1 *)((long)param_1 + 0x84c));
        FUN_10109db58((int)param_1[0x109]);
        goto LAB_1002b0744;
      }
      uVar3 = FUN_10109db58((int)param_1[0x109]);
    }
    else {
      if (cVar2 == '\0') goto LAB_1002b07c0;
      FUN_100651594(param_1 + 0xe2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
      uVar3 = FUN_1000f2ef8(*(undefined1 *)((long)param_1 + 0x84c));
    }
  }
  FUN_1004e3120(auStack_40,uVar3);
  FUN_1000153b4(auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
LAB_1002b07c0:
  plVar1 = param_1 + 0xe2;
  FUN_1006513c0(plVar1,auStack_30);
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10065179c(uVar4,0,0x3f800000,plVar1);
  FUN_10064e5ec(0,0,plVar1,8,param_1,8);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002b0828(long param_1,int param_2,uint param_3)

{
  *(char *)(param_1 + 0x861) = (char)param_2;
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x85c) == 0) && ((param_3 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x844) = *(undefined8 *)(param_1 + 0x850);
      *(undefined1 *)(param_1 + 0x84c) = *(undefined1 *)(param_1 + 0x858);
    }
    *(undefined8 *)(param_1 + 0x850) = 0x300000069;
    *(undefined1 *)(param_1 + 0x858) = 0;
    FUN_1002b09a0(param_1);
    *(undefined4 *)(param_1 + 0x85c) = 0;
  }
  else {
    FUN_1002b0898(param_1);
  }
  FUN_1002b068c(param_1);
  return;
}




void FUN_1002b0898(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  uVar2 = FUN_100640840(0x3f800000,0x3eb33333,0);
  FUN_100640840(0,0x3eb33333,0);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f564(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f614(puVar4,uVar2);
  FUN_10063f664(puVar4);
  FUN_100642b7c(param_1 + 0x1a8,puVar4);
  return;
}




void FUN_1002b09a0(long param_1)

{
  FUN_100642324(param_1 + 0x1a8);
  if ((*(uint *)(param_1 + 0x22c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x1a8);
    return;
  }
  return;
}




void FUN_1002b09ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 auStack_40 [32];
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    if ((param_3 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x850) = 0x300000069;
      *(undefined1 *)(param_1 + 0x858) = 0;
      cVar2 = *(char *)(param_1 + 0x861);
      FUN_1002b0828(param_1,0,cVar2);
      uVar1 = DAT_101e44a84;
      if (cVar2 != '\0') {
        return;
      }
    }
    else {
      if (*(char *)(param_1 + 0x861) != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x861) = 1;
      FUN_1002b0898(param_1);
      FUN_1002b068c(param_1);
      uVar1 = DAT_101e44a7c;
    }
    FUN_100644aec(auStack_40,uVar1,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_1002b0a94(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_100640a74(0x3ba3d70a,param_1 + 0xb8,&DAT_101e44a9c,0,2);
    FUN_100642b7c(param_1 + 0xb8,uVar1);
  }
  return;
}




void FUN_1002b0af0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_100640a74(0x3ba3d70a,param_1 + 0xb8,&DAT_101e44a98,0,2);
    FUN_100642b7c(param_1 + 0xb8,uVar1);
  }
  return;
}




void FUN_1002b0b4c(long param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x840) == *param_2) {
    uVar4 = FUN_1003166d0();
    lVar5 = FUN_1003166dc(uVar4,*(undefined4 *)(param_1 + 0x840));
    bVar3 = *(char *)(param_1 + 0x862) == '\0';
    puVar1 = (undefined1 *)(lVar5 + 0x34);
    if (!bVar3) {
      puVar1 = (undefined1 *)(lVar5 + 0x28);
    }
    uVar2 = *puVar1;
    uVar6 = (uint)bVar3;
    *(ulong *)(param_1 + 0x844) =
         *(ulong *)(lVar5 + 0x2c) ^
         (*(ulong *)(lVar5 + 0x2c) ^ *(ulong *)(lVar5 + 0x20)) &
         ~CONCAT44((int)(uVar6 << 0x1f) >> 0x1f,(int)(uVar6 << 0x1f) >> 0x1f);
    *(undefined1 *)(param_1 + 0x84c) = uVar2;
    FUN_1002b068c(param_1);
    return;
  }
  return;
}




long FUN_1002b0bd4(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_101483f38;
  FUN_10064e264(puVar1 + 0x17);
  thunk_FUN_100650e64(param_1 + 0x170);
  thunk_FUN_100650e64(param_1 + 0x2a0);
  FUN_10064e264(param_1 + 0x3d0);
  FUN_1002afdac(param_1 + 0x488);
  FUN_1002afdac(param_1 + 0xcf0);
  thunk_FUN_1002eca3c(param_1 + 0x1558,0);
  *(undefined4 *)(param_1 + 0x1fa0) = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x1fb0) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x1fa8) = uVar2;
  *(undefined8 *)(param_1 + 0x1fb8) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x1fc0) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x1fc8) = *(undefined1 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x1fcc) = *(undefined8 *)(param_2 + 0xb);
  *(undefined1 *)(param_1 + 0x1fd4) = *(undefined1 *)(param_2 + 0xd);
  FUN_1002b0c98(param_1);
  return param_1;
}




void FUN_1002b0c98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x2e;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x54;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar1 = param_1 + 0x7a;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x91,1);
  FUN_100642bd8(plVar1,param_1 + 0x19e,1);
  plVar4 = param_1 + 0x2ab;
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar6 = FUN_1004e0150(param_1[0x3f6],0);
  FUN_1006513c0(plVar2,uVar6);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  FUN_1006515e0(plVar3,1);
  uVar6 = FUN_1004e0150(param_1[0x3f7],0);
  FUN_1006513c0(plVar3,uVar6);
  *(int *)(param_1 + 0x199) = (int)param_1[0x3f4];
  *(long *)((long)param_1 + 0xccc) = param_1[0x3f8];
  *(char *)((long)param_1 + 0xcd4) = (char)param_1[0x3f9];
  *(undefined1 *)((long)param_1 + 0xcea) = 1;
  FUN_1002b068c(param_1 + 0x91);
  *(undefined1 *)(param_1 + 0x19d) = 1;
  *(uint *)((long)param_1 + 0x50c) = *(uint *)((long)param_1 + 0x50c) | 0x10;
  *(int *)(param_1 + 0x2a6) = (int)param_1[0x3f4];
  *(undefined8 *)((long)param_1 + 0x1534) = *(undefined8 *)((long)param_1 + 0x1fcc);
  *(undefined1 *)((long)param_1 + 0x153c) = *(undefined1 *)((long)param_1 + 0x1fd4);
  *(undefined1 *)((long)param_1 + 0x1552) = 0;
  FUN_1002b068c(param_1 + 0x19e);
  *(undefined1 *)(param_1 + 0x2aa) = 1;
  *(uint *)((long)param_1 + 0xd74) = *(uint *)((long)param_1 + 0xd74) | 0x10;
  FUN_1002ecc7c(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1002eccb4(plVar4,&DAT_10115a168);
  local_68 = DAT_101d91884;
  local_90 = FUN_1002b1228;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x2ac,&local_90);
  FUN_1002ebe0c(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe4c(plVar4,&DAT_101e44a98);
  FUN_1002ebee0(0x42480000,0x41400000,plVar4);
  uVar6 = FUN_1004e0150("KEYBINDING_RESET_TO_DEFAULT",0);
  FUN_1002ecce4(plVar4,uVar6);
  iVar5 = _strcmp((char *)param_1[0x3f7],"");
  if (iVar5 == 0) {
    *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1002b0f44(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  
  FUN_1006511d0(param_3 + 0x170);
  fVar1 = param_2;
  FUN_1006511d0(param_3 + 0x2a0);
  FUN_10064e47c(0x43160000,param_1,fVar1 + param_2,param_3);
  return;
}




void FUN_1002b0f98(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  
  FUN_10064e32c();
  plVar5 = param_3 + 0x2ab;
  plVar1 = param_3 + 0x19e;
  local_68 = FUN_10064e3cc(plVar1);
  uStack_64 = param_2;
  FUN_10064e48c(plVar5,&local_68);
  plVar2 = param_3 + 0x91;
  fVar11 = (float)FUN_10064e3cc(plVar2);
  fVar12 = (float)FUN_10064e3cc(plVar1);
  fVar13 = (float)FUN_10064e3cc(plVar5);
  plVar3 = param_3 + 0x7a;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(fVar11 + 40.0 + fVar12 + fVar13,plVar3);
  fVar11 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = (float)FUN_10064e3cc(plVar3);
  fVar11 = (fVar11 - fVar12) + -50.0;
  plVar9 = param_3 + 0x17;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(fVar11,plVar9);
  FUN_100651708(fVar11,param_3 + 0x54,1);
  FUN_10064e72c(0,plVar9,5,param_3,5);
  FUN_10064e72c(0,plVar3,5,param_3,5);
  FUN_10064e72c(0,plVar9,3,param_3,3);
  FUN_10064e72c(0x42480000,plVar3,3,plVar9,1);
  iVar6 = _strcmp((char *)param_3[0x3f7],"");
  plVar4 = param_3 + 0x2e;
  if (iVar6 == 0) {
    FUN_10064e72c(0,plVar4,3,plVar9,3);
    uVar8 = 5;
    uVar10 = 5;
    plVar7 = plVar4;
  }
  else {
    FUN_10064e5ec(0,0,plVar4,0,plVar9,0);
    uVar8 = 0;
    uVar10 = 2;
    plVar7 = param_3 + 0x54;
    plVar9 = plVar4;
  }
  FUN_10064e72c(0,plVar7,uVar8,plVar9,uVar10);
  FUN_10064e72c(0,plVar2,5,plVar3,5);
  FUN_10064e72c(0,plVar1,5,plVar3,5);
  FUN_10064e72c(0,plVar5,5,plVar3,5);
  FUN_10064e72c(0,plVar2,3,plVar3,3);
  FUN_10064e72c(0x41a00000,plVar1,3,plVar2,1);
  FUN_10064e72c(0x41a00000,plVar5,3,plVar1,1);
  return;
}




void FUN_1002b1228(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101e44a88,param_1 + 0x488);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * FUN_1002b1270(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_thunk_FUN_1002b143c_101484080;
  puVar1 = puVar3 + 0x1b;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  thunk_FUN_100650e64(puVar1);
  plVar2 = param_1 + 0x41;
  thunk_FUN_1005357f4(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100651594(puVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar4 = FUN_1004e0150("KEYBIND_BLURB",0);
  FUN_1006513c0(puVar1,uVar4);
  local_60 = (code *)CONCAT71(local_60._1_7_,9);
  FUN_100534ebc(plVar2,&local_60);
  FUN_100534ef4(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  local_38 = DAT_101e44a7c;
  local_60 = FUN_1002b1418;
  plVar2 = param_1 + 1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&local_60);
  local_38 = DAT_101e44a80;
  local_60 = FUN_1002b1420;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&local_60);
  local_38 = DAT_101e44a84;
  local_60 = FUN_1002b1428;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&local_60);
  local_38 = DAT_101e44a88;
  local_60 = FUN_1002b1430;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&local_60);
  return param_1;
}




void FUN_1002b1418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002b17fc(param_1,param_4);
  return;
}




void FUN_1002b1420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002b1860(param_1,param_4);
  return;
}




void FUN_1002b1428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002b1930(param_1,param_4);
  return;
}




void FUN_1002b1430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002b18bc(param_1,param_4);
  return;
}




long * thunk_FUN_1002b1270(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  *puVar3 = &PTR_thunk_FUN_1002b143c_101484080;
  puVar1 = puVar3 + 0x1b;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  thunk_FUN_100650e64(puVar1);
  plVar2 = param_1 + 0x41;
  thunk_FUN_1005357f4(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100651594(puVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar4 = FUN_1004e0150("KEYBIND_BLURB",0);
  FUN_1006513c0(puVar1,uVar4);
  pcStack_60 = (code *)CONCAT71(pcStack_60._1_7_,9);
  FUN_100534ebc(plVar2,&pcStack_60);
  FUN_100534ef4(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  uStack_38 = DAT_101e44a7c;
  pcStack_60 = FUN_1002b1418;
  plVar2 = param_1 + 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&pcStack_60);
  uStack_38 = DAT_101e44a80;
  pcStack_60 = FUN_1002b1420;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&pcStack_60);
  uStack_38 = DAT_101e44a84;
  pcStack_60 = FUN_1002b1428;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&pcStack_60);
  uStack_38 = DAT_101e44a88;
  pcStack_60 = FUN_1002b1430;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(plVar2,&pcStack_60);
  return param_1;
}




void FUN_1002b143c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  
  *param_1 = &PTR_thunk_FUN_1002b143c_101484080;
  param_1[0x1a] = 0;
  puVar4 = (uint *)(param_1 + 0x18);
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      lVar3 = param_1[0x19];
      plVar1 = *(long **)(lVar3 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0x19];
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (param_1[0x19] != 0) {
    *puVar4 = 0;
  }
  thunk_FUN_100534a3c(param_1 + 0x41);
  thunk_FUN_100651068(param_1 + 0x1b);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002b143c(void)

{
  FUN_1002b143c();
  return;
}




void FUN_1002b14e4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b143c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b14f8(undefined8 param_1,float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2;
  FUN_1006511d0(param_3 + 0x1b);
  fVar2 = fVar1;
  FUN_100534eac(param_3 + 0x41);
  fVar2 = fVar1 + 100.0 + fVar2;
  FUN_10064e47c(param_1,fVar2,param_3);
  FUN_1006511d0(param_3 + 0x1b);
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(fVar1 + -100.0,(param_2 + -100.0) - fVar2,param_3 + 0x41);
                    /* WARNING: Could not recover jumptable at 0x0001002b15ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_1002b15b0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  FUN_10064e32c();
  lVar3 = param_1 + 0xd8;
  FUN_10064e72c(0,lVar3,4,param_1,4);
  lVar1 = param_1 + 0x208;
  FUN_10064e72c(0,lVar1,4,param_1,4);
  FUN_10064e72c(0x42480000,lVar3,0,param_1,0);
  FUN_10064e72c(0x42480000,lVar1,0,lVar3,2);
  lVar3 = FUN_100534eb4(lVar1);
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    iVar6 = 0;
    plVar2 = *(long **)(lVar3 + 0x28);
    plVar4 = (long *)0x0;
    do {
      plVar5 = plVar2;
      uVar7 = FUN_10064e3cc(lVar1);
      (**(code **)(*plVar5 + 0x48))(plVar5);
      FUN_10064e47c(uVar7,plVar5);
      if (iVar6 == 0) {
        plVar4 = (long *)plVar5[4];
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar8 = 0x41a00000;
        uVar7 = 3;
      }
      FUN_10064e5ec(0,uVar8,plVar5,0,plVar4,uVar7);
      iVar6 = iVar6 + -1;
      plVar2 = (long *)plVar5[6];
      plVar4 = plVar5;
    } while ((long *)plVar5[6] != (long *)0x0);
  }
  return;
}




void FUN_1002b16e0(long param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined8 local_38;
  
  pvVar1 = operator_new(0x1fd8);
  local_70[0] = *param_2;
  uStack_60 = *(undefined8 *)(param_2 + 4);
  local_68 = *(undefined8 *)(param_2 + 2);
  local_58 = *(undefined8 *)(param_2 + 6);
  local_50 = *(undefined8 *)(param_2 + 8);
  local_48 = *(undefined1 *)(param_2 + 10);
  local_44 = *(undefined8 *)(param_2 + 0xb);
  local_3c = *(undefined1 *)(param_2 + 0xd);
  local_38 = FUN_1002b0bd4(pvVar1,local_70);
  FUN_100534ad8(param_1 + 0x208,pvVar1,1);
  FUN_1002b177c(param_1 + 0xc0,&local_38);
  return;
}




void FUN_1002b177c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002b1bb8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002b17fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100644b2c(param_2);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x861) = 0;
    *(undefined8 *)(lVar2 + 0x850) = 0x300000069;
    *(undefined1 *)(lVar2 + 0x858) = 0;
    FUN_1002b09a0(lVar2);
    *(undefined4 *)(lVar2 + 0x85c) = 0;
    FUN_1002b068c(lVar2);
  }
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  return;
}




void FUN_1002b1860(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100644b2c(param_2);
  FUN_1002b0828(*(undefined8 *)(param_1 + 0xd0),0,0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001002b18b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),*(undefined4 *)(lVar1 + 0x840),
             *(undefined1 *)(lVar1 + 0x862),*(undefined4 *)(lVar1 + 0x844),
             *(undefined4 *)(lVar1 + 0x848),*(undefined1 *)(lVar1 + 0x84c));
  return;
}




void FUN_1002b18bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100644b2c(param_2);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x861) = 0;
    *(undefined8 *)(lVar2 + 0x850) = 0x300000069;
    *(undefined1 *)(lVar2 + 0x858) = 0;
    FUN_1002b09a0(lVar2);
    *(undefined4 *)(lVar2 + 0x85c) = 0;
    FUN_1002b068c(lVar2);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002b192c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
            (*(long **)(param_1 + 0xb8),*(undefined4 *)(lVar1 + 0x840));
  return;
}




void FUN_1002b1930(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100644b2c(param_2);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x861) = 0;
    *(undefined8 *)(lVar2 + 0x850) = 0x300000069;
    *(undefined1 *)(lVar2 + 0x858) = 0;
    FUN_1002b09a0(lVar2);
    *(undefined4 *)(lVar2 + 0x85c) = 0;
    FUN_1002b068c(lVar2);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002b19a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))
            (*(long **)(param_1 + 0xb8),*(undefined4 *)(lVar1 + 0x840),
             *(undefined1 *)(lVar1 + 0x862));
  return;
}




void FUN_1002b19a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101483f38;
  param_1[0x2ab] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x3cc);
  FUN_1002ebc50(param_1 + 0x2ab);
  FUN_1002b0078(param_1 + 0x19e);
  FUN_1002b0078(param_1 + 0x91);
  thunk_FUN_10064e2bc(param_1 + 0x7a);
  thunk_FUN_100651068(param_1 + 0x54);
  thunk_FUN_100651068(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002b1a30(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101483f38;
  param_1[0x2ab] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x3cc);
  FUN_1002ebc50(param_1 + 0x2ab);
  FUN_1002b0078(param_1 + 0x19e);
  FUN_1002b0078(param_1 + 0x91);
  thunk_FUN_10064e2bc(param_1 + 0x7a);
  thunk_FUN_100651068(param_1 + 0x54);
  thunk_FUN_100651068(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002b0b4c(long param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x840) == *param_2) {
    uVar4 = FUN_1003166d0();
    lVar5 = FUN_1003166dc(uVar4,*(undefined4 *)(param_1 + 0x840));
    bVar3 = *(char *)(param_1 + 0x862) == '\0';
    puVar1 = (undefined1 *)(lVar5 + 0x34);
    if (!bVar3) {
      puVar1 = (undefined1 *)(lVar5 + 0x28);
    }
    uVar2 = *puVar1;
    uVar6 = (uint)bVar3;
    *(ulong *)(param_1 + 0x844) =
         *(ulong *)(lVar5 + 0x2c) ^
         (*(ulong *)(lVar5 + 0x2c) ^ *(ulong *)(lVar5 + 0x20)) &
         ~CONCAT44((int)(uVar6 << 0x1f) >> 0x1f,(int)(uVar6 << 0x1f) >> 0x1f);
    *(undefined1 *)(param_1 + 0x84c) = uVar2;
    FUN_1002b068c(param_1);
    return;
  }
  return;
}




void FUN_1002b1ac0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002b1b3c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002b1bb8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002b1c34(void)

{
  DAT_101e448f8 = 0xff;
  DAT_101e448fa = 0xffff;
  DAT_101e448fc = 0xffff;
  DAT_101e44900 = 0x4326000041900000;
  DAT_101e44908 = 0x4326000041c00000;
  DAT_101e44910 = 0xffbc9c44;
  DAT_101e44914 = 0xff1166f2;
  DAT_101e44918 = 0xffe0e0e0;
  DAT_101e4491c = 0xffa0a0a0;
  DAT_101e44920 = 0xff8c8c8c;
  DAT_101e44924 = 0xff322213;
  DAT_101e44928 = 0xff091911;
  DAT_101e4492c = 0xff170c19;
  DAT_101e44930 = 0xff241a14;
  DAT_101e44934 = 0xff14171c;
  DAT_101e44938 = 0xff221911;
  DAT_101e4493c = 0xff1a1416;
  DAT_101e44940 = 0xff121414;
  DAT_101e44944 = 0xff1a1809;
  DAT_101e44948 = 0xff141414;
  DAT_101e4494c = 0xff141414;
  DAT_101e44950 = 0xff2929c0;
  DAT_101e44954 = 0xff283082;
  DAT_101e44958 = 0xff5262cc;
  DAT_101e4495c = 0xff283082;
  DAT_101e44960 = 0xff5262cc;
  DAT_101e44964 = 0xff745c42;
  DAT_101e44968 = 0xff184155;
  DAT_101e4496c = 0xff92665e;
  DAT_101e44970 = 0xffbc9c44;
  DAT_101e44974 = 0xffbbae56;
  DAT_101e44978 = 0xff8b7b01;
  DAT_101e4497c = 0xff90b3ef;
  DAT_101e44980 = 0xff728ebe;
  DAT_101e44984 = 0xff19459d;
  DAT_101e44988 = 0xff9d877b;
  DAT_101e4498c = 0xffcbb1a3;
  DAT_101e44990 = 0xff3f6fb5;
  DAT_101e44994 = 0xffc5c5c5;
  DAT_101e44998 = 0xff4fc1f1;
  DAT_101e4499c = 0xff606060;
  DAT_101e449a0 = 0xffc5ff7b;
  DAT_101e449a4 = 0xff5271eb;
  DAT_101e449a8 = 0xfffae076;
  DAT_101e449ac = 0xff3ac8f6;
  DAT_101e449b0 = 0xffaaaaaa;
  DAT_101e449b4 = 0xffe19400;
  DAT_101e449b8 = 0xffe19400;
  DAT_101e449bc = 0xffe550b2;
  DAT_101e449c0 = 0xfff22ae8;
  DAT_101e449c4 = 0xff005ae1;
  DAT_101e449c8 = 0xff1addfa;
  DAT_101e449cc = 0xff2424b3;
  DAT_101e449d0 = 0xff2424b3;
  DAT_101e449d4 = 0xff646464;
  DAT_101e449d8 = 0xff92665e;
  DAT_101e449dc = 0xff646037;
  DAT_101e449e4 = 0xff1111a1;
  DAT_101e449e8 = 0xff321ee1;
  DAT_101e449ec = 0xffc8c8c8;
  DAT_101e449f0 = 0xff321ee1;
  DAT_101e449fc = 0xff6259b3;
  DAT_101e44a00 = 0xff506e73;
  DAT_101e44a04 = 0xff9dbf86;
  DAT_101e449e0 = 0xffffffff;
  DAT_101e44a08 = 0xffa35244;
  DAT_101e449f4 = 0xff7fe801;
  DAT_101e44a0c = 0xffca828e;
  DAT_101e449f8 = 0xffffffff;
  DAT_101e44a10 = 0xffa6a6a6;
  DAT_101e44a14 = 0xffa6a6a6;
  DAT_101e44a18 = 0xffffffff;
  DAT_101e44a1c = 0xff88ea2f;
  DAT_101e44a20 = 0xff8c8c8c;
  DAT_101e44a24 = 0xffffb400;
  DAT_101e44a28 = 0xffff00ff;
  DAT_101e44a2c = 0xff00aded;
  DAT_101e44a30 = 0xff33d3ff;
  DAT_101e44a34 = 0xff7fe801;
  DAT_101e44a38 = 0xff282828;
  DAT_101e44a3c = 0xfff0f0f0;
  DAT_101e44a40 = 0xffa4781e;
  DAT_101e44a44 = 0xffa6654b;
  DAT_101e44a48 = 0xff93435b;
  DAT_101e44a4c = 0xff387f9c;
  DAT_101e44a50 = 0xffa3781e;
  DAT_101e44a54 = 0xffffd18a;
  DAT_101e44a58 = 0xffff61f7;
  DAT_101e44a5c = 0xff5de1f2;
  DAT_101e44a60 = 0xff80eaff;
  DAT_101e44a64 = 0xff32e00e;
  DAT_101e44a68 = 0xff5a3c10;
  DAT_101e44a6c = 0xff330b03;
  DAT_101e44a70 = 0xff33031d;
  DAT_101e44a74 = 0xff032433;
  DAT_101e44a78 = 0xff9e8e8d;
  DAT_101e44a7c = FUN_100644a94("UI::EVENT_KEYBIND_INPUT_WIDGET_START_WAITING_FOR_INPUT");
  DAT_101e44a80 = FUN_100644a94("UI::EVENT_KEYBIND_INPUT_WIDGET_STOP_WAITING_FOR_INPUT");
  DAT_101e44a84 = FUN_100644a94("UI::EVENT_KEYBIND_INPUT_WIDGET_CLEAR_INPUT");
  DAT_101e44a88 = FUN_100644a94("UI::EVENT_KEYBIND_INPUT_WIDGET_RESET_TO_DEFAULT");
  DAT_101e44a90 = 0x4316000043e10000;
  DAT_101e44a98 = 0xa33f2b2a;
  DAT_101e44a9c = 0xa36e5858;
  DAT_101e44aa0 = 0x4316000043e10000;
  return;
}




long * FUN_1002b23a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_10064f204();
  *puVar5 = &PTR_thunk_FUN_1002b2534_1014841c8;
  puVar5[0x29] = &PTR_FUN_101484320;
  puVar5 = puVar5 + 0x2a;
  thunk_FUN_10064f204(puVar5);
  plVar1 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x79;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x9f;
  thunk_FUN_100652c08(plVar3);
  FUN_1000fa154(param_1 + 0xbd);
  param_1[199] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_10064f31c(puVar5,plVar3,1);
  FUN_10064f31c(puVar5,plVar2,1);
  FUN_10064f31c(puVar5,plVar1,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  FUN_100651700(plVar2,3);
  uVar4 = *(uint *)((long)param_1 + 0x44c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x44c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_1000200a0(plVar2);
  }
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100651700(plVar1,3);
  uVar4 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x31c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_100652ca4(plVar3,"build://Keys.atlas");
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_1002b2534(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002b2534_1014841c8;
  param_1[0x29] = &PTR_FUN_101484320;
  if (*(char *)((long)param_1 + 0x62f) < '\0') {
    operator_delete((void *)param_1[0xc3]);
  }
  if (*(char *)((long)param_1 + 0x617) < '\0') {
    operator_delete((void *)param_1[0xc0]);
  }
  if (*(char *)((long)param_1 + 0x5ff) < '\0') {
    operator_delete((void *)param_1[0xbd]);
  }
  param_1[0x9f] = &PTR_FUN_1014a7108;
  param_1[0xb6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb9);
  FUN_10064e2bc(param_1 + 0x9f);
  thunk_FUN_100651068(param_1 + 0x79);
  thunk_FUN_100651068(param_1 + 0x53);
  param_1[0x2a] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x41);
  FUN_10064e2bc(param_1 + 0x2a);
  param_1[0x29] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002b2534(void)

{
  FUN_1002b2534();
  return;
}




void FUN_1002b2628(long param_1)

{
  FUN_1002b2534(param_1 + -0x148);
  return;
}




void FUN_1002b2630(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b2534();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b2644(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b2534(param_1 + -0x148);
  operator_delete(pvVar1);
  return;
}




void FUN_1002b265c(long param_1)

{
  long lVar1;
  float fVar2;
  float local_38;
  float fStack_34;
  
  FUN_10064e48c(param_1,param_1 + 0x638);
  FUN_10064e48c(param_1 + 0x150,param_1 + 0x638);
  lVar1 = param_1 + 0x4f8;
  local_38 = *(float *)(param_1 + 0x638) * 0.6;
  fStack_34 = local_38;
  FUN_10064e48c(lVar1,&local_38);
  FUN_100651708(*(undefined4 *)(param_1 + 0x638),param_1 + 0x298,1);
  fVar2 = (float)FUN_100652e60(lVar1);
  FUN_100651708(fVar2 * 0.5,param_1 + 0x3c8,1);
  FUN_10064e5ec(0,0,lVar1,4,param_1 + 0x150,4);
  FUN_10064e5ec(0,0,param_1 + 0x298,4,lVar1,6);
  FUN_10064e5ec(0xc1200000,0xc1f00000,param_1 + 0x3c8,2,lVar1,2);
  return;
}




void FUN_1002b2750(long *param_1,string *param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_90 [2];
  char local_79;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined8 **local_58 [2];
  char local_41;
  
  std::string::operator=((string *)(param_1 + 0xbd),param_2);
  std::string::operator=((string *)(param_1 + 0xc0),param_2 + 0x18);
  std::string::operator=((string *)(param_1 + 0xc3),param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xc6) = *(undefined4 *)(param_2 + 0x48);
  FUN_10003330c(local_58,(string *)(param_1 + 0xc0));
  pppuVar1 = (undefined8 ***)local_58[0];
  if (-1 < local_41) {
    pppuVar1 = local_58;
  }
  uVar2 = FUN_1004e0150(pppuVar1,0);
  FUN_1006513c0(param_1 + 0x53,uVar2);
  FUN_1004e3120(auStack_68,"x ");
  FUN_1004e313c(auStack_78);
  FUN_1004e38ac(auStack_78,"%d");
  FUN_1004e372c(auStack_68,auStack_78);
  FUN_1006513c0(param_1 + 0x79,auStack_68);
  FUN_10003330c(local_90,(string *)(param_1 + 0xc3));
  pppuVar1 = (undefined8 ***)local_90[0];
  if (-1 < local_79) {
    pppuVar1 = local_90;
  }
  FUN_100652cdc(param_1 + 0x9f,pppuVar1);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_1002b28a8(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 199) = param_1;
  *(undefined4 *)((long)param_3 + 0x63c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002b28b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_1002b28bc(void)

{
  return;
}




void FUN_1002b28c0(void)

{
  return;
}




long * FUN_1002b28c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  *puVar5 = &PTR_thunk_FUN_1002b2d00_101484348;
  puVar5 = puVar5 + 0x18;
  FUN_10064e264(puVar5);
  plVar1 = param_1 + 0x2f;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x6c;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x92;
  thunk_FUN_100652c08(plVar4);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(puVar5,plVar3,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x514) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x514) = *(uint *)((long)param_1 + 0x514) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_KEY_SECTION_TITLE",0);
  FUN_1006513c0(plVar2,uVar6);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_NO_KEY_INSTRUCTION",0);
  FUN_1006513c0(plVar3,uVar6);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  FUN_1002b2a90(param_1);
  return param_1;
}




void FUN_1002b2a90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  
  FUN_10064e48c(param_1 + 0xc0,param_1 + 0x590);
  lVar1 = param_1 + 0x178;
  uVar5 = 0x42f00000;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x590),lVar1);
  local_78 = FUN_10064e3cc(lVar1);
  uStack_74 = uVar5;
  FUN_10064e48c(param_1 + 0x490,&local_78);
  uVar6 = FUN_10064e3cc(lVar1);
  FUN_10065179c(uVar6,0,0x3f800000,param_1 + 0x230);
  FUN_100651708(*(float *)(param_1 + 0x590) + -20.0,param_1 + 0x360,1);
  FUN_10064e5ec(0x41a00000,0x41a00000,param_1 + 0x360,0,lVar1,3);
  if (*(int *)(param_1 + 0x580) != 0) {
    uVar4 = 0;
    fVar8 = *(float *)(param_1 + 0x590) * 0.2 + -12.0;
    lVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x588) + uVar4 * 8);
      FUN_10064e47c(fVar8,fVar8 * 0.8,lVar3);
      if (uVar4 == 0) {
        FUN_10064e72c(0,lVar3,0,lVar1,2);
        uVar5 = 0x41200000;
        lVar2 = lVar1;
LAB_1002b2c5c:
        FUN_10064e72c(uVar5,lVar3,3,lVar2,3);
      }
      else {
        if ((int)uVar4 == (int)((uVar4 & 0xffffffff) / 5) * 5) {
          FUN_10064e72c(0x41200000,lVar3,0,lVar2,2);
          uVar5 = 0;
          goto LAB_1002b2c5c;
        }
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x588) + (ulong)((int)uVar4 - 1) * 8);
        FUN_10064e72c(0x41200000,lVar3,3,uVar6,1);
        FUN_10064e72c(0,lVar3,0,uVar6,0);
        lVar3 = lVar2;
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar3;
    } while (uVar4 < *(uint *)(param_1 + 0x580));
  }
  uVar7 = 0;
  FUN_10064e5ec(0,param_1 + 0x230,8,lVar1,8);
  *(uint *)(param_1 + 0x3e4) =
       *(uint *)(param_1 + 0x3e4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3e4) & 3 | (uint)(*(int *)(param_1 + 0x580) == 0) << 2;
  uVar5 = FUN_1006425d0(param_1 + 0xc0,0,0,1,1);
  *(undefined4 *)(param_1 + 0x590) = uVar5;
  *(undefined4 *)(param_1 + 0x594) = uVar7;
  FUN_10064e48c(param_1,param_1 + 0x590);
  return;
}




long * thunk_FUN_1002b28c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  puVar5[0x17] = 0;
  *puVar5 = &PTR_thunk_FUN_1002b2d00_101484348;
  puVar5 = puVar5 + 0x18;
  FUN_10064e264(puVar5);
  plVar1 = param_1 + 0x2f;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x6c;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x92;
  thunk_FUN_100652c08(plVar4);
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(puVar5,plVar3,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x514) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x514) = *(uint *)((long)param_1 + 0x514) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_KEY_SECTION_TITLE",0);
  FUN_1006513c0(plVar2,uVar6);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar6 = FUN_1004e0150("INVENTORY_NO_KEY_INSTRUCTION",0);
  FUN_1006513c0(plVar3,uVar6);
  FUN_100651700(plVar3,3);
  *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb;
  FUN_1002b2a90(param_1);
  return param_1;
}




void FUN_1002b2d00(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1002b2d00_101484348;
  uVar2 = *(uint *)(param_1 + 0xb0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0xb1];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0xb1];
        uVar2 = *(uint *)(param_1 + 0xb0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[0xb1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    operator_delete__((void *)param_1[0xb1]);
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
  }
  param_1[0x92] = &PTR_FUN_1014a7108;
  param_1[0xa9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xac);
  FUN_10064e2bc(param_1 + 0x92);
  thunk_FUN_100651068(param_1 + 0x6c);
  thunk_FUN_100651068(param_1 + 0x46);
  thunk_FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002b2d00(void)

{
  FUN_1002b2d00();
  return;
}




void FUN_1002b2dd0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b2d00();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b2de4(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  operator_new(0x640);
  local_28 = FUN_1002b23a8();
  FUN_1002b2750(local_28,param_2);
  FUN_1002b2e48(param_1 + 0x580,&local_28);
  FUN_100642bd8(param_1 + 0xc0,local_28,1);
  FUN_1002b2a90(param_1);
  return;
}




void FUN_1002b2e48(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002b2f3c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002b2ec8(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x580);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x588);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x588);
        uVar2 = *(uint *)(param_1 + 0x580);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  FUN_1002b2a90(param_1);
  return;
}




void FUN_1002b2f30(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x590) = param_1;
  *(undefined4 *)(param_3 + 0x594) = param_2;
  FUN_1002b2a90();
  return;
}




void FUN_1002b2f3c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 FUN_1002b2fb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_FUN_101484490;
  uVar2 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar2);
  return param_1;
}




undefined8 thunk_FUN_1002b2fb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_FUN_101484490;
  uVar2 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar2);
  return param_1;
}




void FUN_1002b3000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101484490;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002b3044(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101484490;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002b308c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_10064e5a0();
  (**(code **)(*plVar1 + 0x50))();
  FUN_100642378(param_1,1);
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 8))();
  }
  param_1[0x18] = 0;
  operator_new(0x1228);
  lVar2 = FUN_1002b4504();
  param_1[0x18] = lVar2;
  FUN_1002b3154(lVar2,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  plVar1 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1[0x18],0,2);
                    /* WARNING: Could not recover jumptable at 0x0001002b3150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_1002b3154(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1006513c0(param_1 + 0xba8);
  FUN_1002b3608(param_1 + 0xcd8,param_3,param_4,param_1);
  FUN_1002b4334(param_1 + 0xe90,param_4);
  uVar1 = (**(code **)(*param_4 + 0x38))(param_4);
  *(undefined8 *)(param_1 + 0x1220) = uVar1;
  lVar2 = FUN_1004f1a74(0);
  FUN_1002b4970(auStack_40,lVar2 - *(long *)(param_1 + 0x1220));
  FUN_1006513c0(param_1 + 0x1000,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




long * FUN_1002b31f8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_1002b4fb4_1014845d8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100650e64(puVar2);
  plVar1 = param_1 + 0x3d;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_100652c08(param_1 + 0x5b);
  thunk_FUN_100652c08(param_1 + 0x79);
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  plVar3 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(param_1,plVar3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*plVar3 + 0x68))(plVar3,puVar2,0,2);
  *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) & 0xffffffbf;
  FUN_10064e5b8(plVar1,&DAT_101872ba0);
  *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) & 0xfffffffb;
  FUN_100652cac(plVar1,DAT_101854a08,"quest_normal_state");
  FUN_100651038(puVar2,DAT_101e44c48);
  FUN_100651460(puVar2,&DAT_101e44ab6);
  FUN_10064e5b8(puVar2,&DAT_101dbd510);
  FUN_10065165c(puVar2,1);
  FUN_100651700(puVar2,3);
  FUN_1006515e0(puVar2,1);
  return param_1;
}




void FUN_1002b3370(long param_1,string *param_2,string *param_3,ulong param_4,long param_5)

{
  string *psVar1;
  undefined8 uVar2;
  
  std::string::operator=((string *)(param_1 + 0x4b8),param_2);
  std::string::operator=((string *)(param_1 + 0x4d0),param_3);
  psVar1 = *(string **)param_3;
  if (-1 < (char)param_3[0x17]) {
    psVar1 = param_3;
  }
  uVar2 = FUN_1004e0150(psVar1,0);
  FUN_1006513c0(param_1 + 0xb8,uVar2);
  FUN_10064e4dc(param_1 + 0xb8,param_4 & 0xffffffff | param_5 << 0x20);
  return;
}




void FUN_1002b33e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c(param_3 + 0x1e8);
  FUN_10064e328(param_1,param_2,param_3);
  return;
}




long * FUN_1002b3428(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 local_40 [4];
  undefined2 local_38 [4];
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1002b3500_101484720;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1 = puVar1 + 0x19;
  thunk_FUN_100652c08(puVar1);
  uVar2 = thunk_FUN_10064dde8();
  FUN_10064e524(param_1,uVar2);
  local_38[0] = 3;
  FUN_10064e5b8(param_1,local_38);
  FUN_10064e4dc(param_1,0x50000003e8);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100652cac(puVar1,DAT_101854a08,"quest_normal_state");
  local_40[0] = 3;
  FUN_10064e5b8(puVar1,local_40);
  FUN_10064e4dc(puVar1,0x50000003e8);
  return param_1;
}




void FUN_1002b3500(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002b3500_101484720;
  FUN_1002b356c();
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002b356c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar2 = 0;
    do {
      FUN_100644c24(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar2 * 8));
      plVar1 = *(long **)(*(long *)(param_1 + 0xc0) + uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xb8));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  plVar1 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar1 + 0x50))();
  FUN_100642378(param_1,1);
  return;
}




void thunk_FUN_1002b3500(void)

{
  FUN_1002b3500();
  return;
}




void FUN_1002b35f4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b3500();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b3608(long *param_1,undefined8 param_2,long *param_3,size_t param_4)

{
  size_t sVar1;
  size_t sVar2;
  code ****ppppcVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 auStack_a8 [8];
  long local_a0;
  long local_98;
  code ***local_90;
  size_t local_88;
  ulong local_80;
  undefined8 uStack_78;
  long local_70;
  undefined4 local_68;
  
  FUN_1002b356c();
  plVar9 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar9 + 0x78))(plVar9,0,1);
  (**(code **)(*param_3 + 0x18))(&local_90,param_3);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x84) & 3 | (uint)(1 < (uint)local_90) << 2;
  FUN_10001629c(&local_90,1);
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  (**(code **)(*param_3 + 0x18))(&local_90,param_3);
  iVar8 = (uint)local_90;
  FUN_10001629c(&local_90,1);
  uVar6 = DAT_101dbd484;
  uVar5 = DAT_101dbd458;
  if (iVar8 != 0) {
    uVar16 = 0;
    do {
      pvVar10 = operator_new(0x4f0);
      local_98 = FUN_1002b31f8();
      (**(code **)(*param_3 + 0x18))(&local_90,param_3);
      FUN_1002b3370(pvVar10,param_2,local_88 + uVar16 * 0x18,300,0x50);
      FUN_10001629c(&local_90,1);
      local_68 = uVar5;
      local_90 = (code ***)FUN_1002b3950;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = local_98;
      local_88 = param_4;
      FUN_10001554c(local_98 + 8,&local_90);
      local_68 = uVar6;
      local_90 = (code ***)FUN_1002b3950;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = local_98;
      local_88 = param_4;
      FUN_10001554c(local_98 + 8,&local_90);
      lVar7 = local_98;
      (**(code **)(*param_3 + 0x20))(&local_90,param_3);
      (**(code **)(*param_3 + 0x18))(auStack_a8,param_3);
      pbVar15 = (byte *)(local_a0 + uVar16 * 0x18);
      uVar11 = local_80 >> 0x38;
      sVar1 = local_88;
      if (-1 < (long)local_80) {
        sVar1 = uVar11;
      }
      bVar4 = pbVar15[0x17];
      sVar2 = *(size_t *)(pbVar15 + 8);
      if (-1 < (char)bVar4) {
        sVar2 = (ulong)bVar4;
      }
      if (sVar1 == sVar2) {
        ppppcVar3 = (code ****)local_90;
        if (-1 < (long)local_80) {
          ppppcVar3 = &local_90;
        }
        pbVar13 = *(byte **)pbVar15;
        if (-1 < (char)bVar4) {
          pbVar13 = pbVar15;
        }
        if ((long)local_80 < 0) {
          if (sVar1 == 0) goto LAB_1002b3884;
          iVar8 = _memcmp(ppppcVar3,pbVar13,sVar1);
          uVar12 = *(uint *)(lVar7 + 0x26c);
          if (iVar8 != 0) goto LAB_1002b3860;
        }
        else {
          if (sVar1 != 0) {
            pbVar15 = (byte *)((ulong)&local_90 | 1);
            if ((uint)*pbVar13 == ((uint)local_90 & 0xff)) {
              do {
                uVar11 = uVar11 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar11 == 0) goto LAB_1002b3884;
                bVar4 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar4 == *pbVar13);
            }
            goto LAB_1002b3854;
          }
LAB_1002b3884:
          uVar12 = *(uint *)(lVar7 + 0x26c);
        }
        uVar14 = 4;
      }
      else {
LAB_1002b3854:
        uVar12 = *(uint *)(lVar7 + 0x26c);
LAB_1002b3860:
        uVar14 = 0;
      }
      *(uint *)(lVar7 + 0x26c) = uVar14 | uVar12 & 0xfffffffb;
      FUN_10001629c(auStack_a8,1);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      FUN_1002b3958(param_1 + 0x17,&local_98);
      (**(code **)(*param_1 + 0x78))(param_1,local_98,1);
      plVar9 = (long *)FUN_10064e5a0(param_1);
      (**(code **)(*plVar9 + 0x68))(plVar9,local_98,0,0x12);
      uVar16 = uVar16 + 1;
      (**(code **)(*param_3 + 0x18))(&local_90,param_3);
      uVar11 = (ulong)local_90 & 0xffffffff;
      FUN_10001629c(&local_90,1);
    } while (uVar16 < uVar11);
  }
  return;
}




void FUN_1002b3950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002b4c68(param_1,param_2,param_5);
  return;
}




void FUN_1002b3958(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002b5074(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002b39d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c(param_3 + 200);
  FUN_10064e328(param_1,param_2,param_3);
  return;
}




long * FUN_1002b3a18(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 local_28 [4];
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_101484868;
  puVar1 = puVar1 + 0x17;
  thunk_FUN_100652c08(puVar1);
  uVar2 = thunk_FUN_10064dde8();
  FUN_10064e524(param_1,uVar2);
  local_28[0] = 0x41;
  FUN_10064e5b8(param_1,local_28);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100652cac(puVar1,DAT_101854a08,"quest_normal_state");
  return param_1;
}




void FUN_1002b3ab4(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x10) - 1;
  if (uVar1 < 3) {
    puVar5 = (undefined4 *)(&PTR_DAT_101485008)[(int)uVar1];
  }
  else {
    puVar5 = &DAT_101e44c34;
    if ((*(uint *)(param_2 + 0x10) & 1) != 0) {
      puVar5 = &DAT_101e44c30;
    }
  }
  FUN_100652dd4(param_1 + 0xb8,puVar5,2);
  uVar2 = FUN_1002b3c3c(param_1,1);
  FUN_1002b3cb0(uVar2,*(undefined4 *)(param_2 + 0x10));
  plVar3 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
  plVar3 = (long *)FUN_100204258(param_1,1);
  FUN_100651594(plVar3,DAT_101e44c50,&DAT_10115a168);
  (**(code **)(*plVar3 + 0x138))(plVar3,param_2);
  plVar4 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar4 + 0x68))(plVar4,plVar3,0,10);
  plVar3 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar3 + 0x78))(plVar3,0,1);
  if (*param_3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar2 = FUN_1002b3d84(param_1,1);
      FUN_1002b3df8(uVar2,param_2,*(long *)(param_3 + 2) + lVar6);
      plVar3 = (long *)FUN_10064e5a0(param_1);
      (**(code **)(*plVar3 + 0x68))(plVar3,uVar2,0,10);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < *param_3);
  }
  return;
}




void * FUN_1002b3c3c(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xb8);
  lVar2 = FUN_1002b4208();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1002b3cb0(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = (long *)FUN_100204258(param_1,1);
  FUN_100651594(plVar1,DAT_101e44c50,&DAT_10115a168);
  FUN_1004d2698(auStack_40,"%d");
  FUN_1004e3120(auStack_50,auStack_40);
  (**(code **)(*plVar1 + 0x138))(plVar1,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  plVar2 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar2 + 0x58))(plVar2,plVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void * FUN_1002b3d84(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xb8);
  lVar2 = FUN_1002b4264();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1002b3df8(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  float fVar10;
  undefined1 auStack_60 [8];
  void *local_58;
  char acStack_50 [8];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_1002b42c0(param_1,1);
  FUN_10064e5b8(lVar3,&DAT_101dbd510);
  plVar4 = (long *)FUN_100204258(param_1,1);
  FUN_100651594(plVar4,DAT_101e44c50,&DAT_10115a168);
  FUN_100651700(plVar4,3);
  FUN_100651708(0x43160000,plVar4,1);
  bVar9 = *(byte *)(param_3 + 0x17);
  uVar7 = (ulong)bVar9;
  uVar8 = *(ulong *)(param_3 + 8);
  uVar1 = uVar8;
  if (-1 < (char)bVar9) {
    uVar1 = uVar7;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecb5c);
    if (iVar2 != 0) {
      bVar9 = *(byte *)(param_3 + 0x17);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_3 + 8);
      goto LAB_1002b3ed0;
    }
    FUN_1004d2698(acStack_50,"%d");
    FUN_1004e3120(auStack_60,acStack_50);
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (0 < *(int *)(param_2 + 0x24)) {
      fVar10 = *(float *)(param_2 + 0x20);
LAB_1002b40dc:
      if (0 < (int)fVar10) {
        FUN_1001c6fd8(lVar3);
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x78))(plVar5,0,1);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x68))(plVar5,lVar3,0,0x12);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x70))(plVar5,5);
        plVar5 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar5 + 0x68))(plVar5,plVar4,0,10);
        plVar4 = (long *)FUN_10064e5a0(param_1);
        (**(code **)(*plVar4 + 0x78))(plVar4,0,1);
        goto LAB_1002b3ff8;
      }
    }
LAB_1002b4190:
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
    FUN_1004e3120(auStack_60,"-");
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  else {
LAB_1002b3ed0:
    uVar1 = uVar8;
    if (-1 < (char)bVar9) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x2c) {
      iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecb89);
      if (iVar2 == 0) {
        FUN_1004d2698(acStack_50,"%d");
        FUN_1004e3120(auStack_60,acStack_50);
        (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
        }
        if (0 < *(int *)(param_2 + 0x2c)) {
          fVar10 = *(float *)(param_2 + 0x28);
          goto LAB_1002b40dc;
        }
        goto LAB_1002b4190;
      }
      bVar9 = *(byte *)(param_3 + 0x17);
      uVar7 = (ulong)bVar9;
      uVar8 = *(ulong *)(param_3 + 8);
    }
    uVar1 = uVar8;
    if (-1 < (char)bVar9) {
      uVar1 = uVar7;
    }
    if (uVar1 == 0x2e) {
      iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecbb6);
      if (iVar2 != 0) {
        bVar9 = *(byte *)(param_3 + 0x17);
        uVar7 = (ulong)bVar9;
        uVar8 = *(ulong *)(param_3 + 8);
        goto LAB_1002b3f50;
      }
      if (*(float *)(param_2 + 0x30) <= 0.0) goto LAB_1002b41ec;
LAB_1002b3f8c:
      FUN_1004d2698(acStack_50,"%d");
      pcVar6 = acStack_50;
    }
    else {
LAB_1002b3f50:
      if (-1 < (char)bVar9) {
        uVar8 = uVar7;
      }
      if (((uVar8 != 0x2d) ||
          (iVar2 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013ecbe5),
          iVar2 != 0)) || (0 < *(int *)(param_2 + 0x38))) goto LAB_1002b3f8c;
LAB_1002b41ec:
      pcVar6 = "-";
    }
    FUN_1004e3120(auStack_60,pcVar6);
    (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffffb;
  }
  plVar5 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar4,0,2);
LAB_1002b3ff8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002b4200(long param_1)

{
  FUN_10064e47c(param_1 + 0xb8);
  return;
}




undefined8 FUN_1002b4208(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_1014849b0;
  uVar2 = thunk_FUN_10064dde8();
  FUN_10064e524(param_1,uVar2);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  return param_1;
}




undefined8 FUN_1002b4258(void)

{
  return 0x5000000064;
}




undefined8 FUN_1002b4264(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_101484af8;
  uVar2 = thunk_FUN_10064dde8();
  FUN_10064e524(param_1,uVar2);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  return param_1;
}




undefined8 FUN_1002b42b4(void)

{
  return 0x500000012c;
}




void * FUN_1002b42c0(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x3d0);
  lVar2 = thunk_FUN_1001c6e5c();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1002b4334(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_70 [16];
  
  plVar2 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(param_1,plVar2);
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
  uVar7 = NEON_ucvtf(*puVar3);
  fVar8 = (float)NEON_fminnm(uVar7,0x42c80000);
  if (0.0 < fVar8) {
    uVar6 = 1;
    do {
      uVar4 = FUN_1002b4490(param_1,1);
      lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(*param_2 + 0x18))(auStack_70,param_2);
      FUN_1002b3ab4(uVar4,lVar5 + (ulong)(uVar6 - 1) * 0x40,auStack_70);
      FUN_10001629c(auStack_70,1);
      (**(code **)(*plVar2 + 0x60))(plVar2,uVar4,9);
      uVar1 = (ulong)uVar6;
      puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
      uVar7 = NEON_ucvtf(*puVar3);
      fVar8 = (float)NEON_fminnm(uVar7,0x42c80000);
      uVar6 = uVar6 + 1;
    } while ((float)uVar1 < fVar8);
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,0,1);
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void * FUN_1002b4490(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1a8);
  lVar2 = FUN_1002b3a18();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




long * FUN_1002b4504(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_70;
  code *pcStack_68;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_1002b489c_101484c40;
  lVar8 = thunk_FUN_10064de70();
  param_1[0x17] = lVar8;
  plVar10 = param_1 + 0x18;
  thunk_FUN_1005357f4(plVar10);
  lVar8 = thunk_FUN_10064de70();
  param_1[0x15d] = lVar8;
  plVar1 = param_1 + 0x15e;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x175;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x19b;
  FUN_1002b3428(plVar3);
  plVar4 = param_1 + 0x1d2;
  FUN_10064e20c(plVar4);
  param_1[0x1d2] = (long)&PTR_thunk_FUN_10064e2bc_101484ed0;
  plVar5 = param_1 + 0x1e9;
  FUN_10064e264(plVar5);
  plVar6 = param_1 + 0x200;
  thunk_FUN_100650e64(plVar6);
  plVar9 = param_1 + 0x226;
  thunk_FUN_100652c08(plVar9);
  FUN_10064e524(param_1,param_1[0x17]);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100652cac(plVar9,DAT_101854a08,"quest_normal_state");
  FUN_10064e5b8(plVar9,&DAT_101872ba0);
  local_70 = (long *)CONCAT62(local_70._2_6_,3);
  FUN_10064e5b8(plVar1,&local_70);
  plVar9 = (long *)thunk_FUN_10064dde8();
  FUN_10064a8b0(plVar9,0,0x1e,0,0x1e);
  FUN_10064e524(plVar1,plVar9);
  (**(code **)(*(long *)param_1[0x17] + 0x68))((long *)param_1[0x17],plVar1,0,3);
  FUN_100651594(plVar2,DAT_101e44c58,&DAT_101e44ab6);
  FUN_10065165c(plVar2,1);
  FUN_100651700(plVar2,0);
  (**(code **)(*plVar9 + 0x58))(plVar9,plVar2);
  (**(code **)(*(long *)param_1[0x17] + 0x68))((long *)param_1[0x17],plVar3,0,3);
  FUN_100534e34(plVar10,param_1[0x15d]);
  local_70 = (long *)CONCAT71(local_70._1_7_,9);
  FUN_100534ebc(plVar10,&local_70);
  local_70._0_2_ = 0x17;
  FUN_10064e5b8(plVar10,&local_70);
  (**(code **)(*(long *)param_1[0x17] + 0x68))((long *)param_1[0x17],plVar10,1,3);
  FUN_100534ad8(plVar10,plVar4,1);
  (**(code **)(*(long *)param_1[0x15d] + 0x60))((long *)param_1[0x15d],plVar4,3);
  local_70 = (long *)CONCAT62(local_70._2_6_,3);
  FUN_10064e5b8(plVar5,&local_70);
  plVar10 = (long *)thunk_FUN_10064dde8();
  FUN_10064a8b0(plVar10,0,0x1e,0,0x1e);
  FUN_10064e524(plVar5,plVar10);
  (**(code **)(*(long *)param_1[0x17] + 0x68))((long *)param_1[0x17],plVar5,0,3);
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_101e44ab6);
  FUN_10065165c(plVar6,1);
  FUN_100651700(plVar6,0);
  (**(code **)(*plVar10 + 0x58))(plVar10,plVar6);
  pcStack_68 = thunk_FUN_1002b4c10;
  local_70 = param_1;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  return param_1;
}




void FUN_1002b489c(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1002b489c_101484c40;
  pcStack_28 = thunk_FUN_1002b4c10;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  param_1[0x226] = &PTR_FUN_1014a7108;
  param_1[0x23d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x240);
  FUN_10064e2bc(param_1 + 0x226);
  thunk_FUN_100651068(param_1 + 0x200);
  thunk_FUN_10064e2bc(param_1 + 0x1e9);
  FUN_10064e2bc(param_1 + 0x1d2);
  FUN_1002b3500(param_1 + 0x19b);
  thunk_FUN_100651068(param_1 + 0x175);
  thunk_FUN_10064e2bc(param_1 + 0x15e);
  thunk_FUN_100534a3c(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002b489c(void)

{
  FUN_1002b489c();
  return;
}




void FUN_1002b495c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b489c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b4970(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  param_2 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  FUN_1004e313c(param_1);
  if (SUB164(auVar1 * ZEXT816(0xc22e450672894ab7),10) < 1) {
    if ((int)((long)(param_2 - ((long)((param_2 / 0x15180) * 0x1518000000000) >> 0x20)) / 0xe10) < 1
       ) {
      uVar2 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_MINUTES_AGO",0);
      FUN_1000153b4(param_1,uVar2);
      FUN_1000f0a04(auStack_58,"%d");
      FUN_1004e3120(auStack_68,"[NUM_MINUTES]");
      FUN_1004e3120(auStack_78,auStack_58);
      FUN_1004e3bc4(param_1,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1000f0a04(auStack_58,"%d");
      pcVar3 = "[NUM_SECONDS]";
    }
    else {
      uVar2 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_HOURS_AGO",0);
      FUN_1000153b4(param_1,uVar2);
      FUN_1000f0a04(auStack_58,"%d");
      FUN_1004e3120(auStack_68,"[NUM_HOURS]");
      FUN_1004e3120(auStack_78,auStack_58);
      FUN_1004e3bc4(param_1,0,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1000f0a04(auStack_58,"%d");
      pcVar3 = "[NUM_MINUTES]";
    }
  }
  else {
    uVar2 = FUN_1004e0150("MENU_LEADERBOARDS_LEADERBOARD_LAST_UPDATED_DAYS_AGO",0);
    FUN_1000153b4(param_1,uVar2);
    FUN_1000f0a04(auStack_58,"%d");
    pcVar3 = "[NUM_DAYS]";
  }
  FUN_1004e3120(auStack_68,pcVar3);
  FUN_1004e3120(auStack_78,auStack_58);
  FUN_1004e3bc4(param_1,0,auStack_68,auStack_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002b4c04(long param_1)

{
  FUN_10064e47c(param_1 + 0x1130);
  return;
}




void FUN_1002b4c10(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  void *local_28;
  
  lVar1 = FUN_1004f1a74(0);
  FUN_1002b4970(auStack_30,lVar1 - *(long *)(param_1 + 0x1220));
  FUN_1006513c0(param_1 + 0x1000,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002b4c68(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0xd90) != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)(*(long *)(param_1 + 0xd98) + uVar4 * 8);
        *(uint *)(lVar5 + 0x26c) = *(uint *)(lVar5 + 0x26c) & 0xfffffffb;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0xd90));
    }
    uVar1 = FUN_10031a90c();
    lVar5 = param_3 + 0x4b8;
    lVar2 = FUN_10031af0c(uVar1,lVar5);
    if (lVar2 != 0) {
      uVar1 = FUN_10031a90c();
      plVar3 = (long *)FUN_10031af0c(uVar1,lVar5);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_3 + 0x4d0);
      uVar1 = FUN_10031a90c();
      plVar3 = (long *)FUN_10031af0c(uVar1,lVar5);
      (**(code **)(*plVar3 + 0x30))();
      *(uint *)(param_3 + 0x26c) = *(uint *)(param_3 + 0x26c) | 4;
    }
  }
  return;
}




long * FUN_1002b4d0c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_FUN_101484d88;
  puVar2[0x19] = 0;
  FUN_1001b11fc(puVar2 + 0x1a);
  plVar1 = param_1 + 0x34;
  thunk_FUN_100198904(plVar1,puVar2 + 0x1a);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100199194(plVar1,1,1);
  *(uint *)((long)param_1 + 0xebc) = *(uint *)((long)param_1 + 0xebc) | 4;
  return param_1;
}




long * thunk_FUN_1002b4d0c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *puVar2 = &PTR_FUN_101484d88;
  puVar2[0x19] = 0;
  FUN_1001b11fc(puVar2 + 0x1a);
  plVar1 = param_1 + 0x34;
  thunk_FUN_100198904(plVar1,puVar2 + 0x1a);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100199194(plVar1,1,1);
  *(uint *)((long)param_1 + 0xebc) = *(uint *)((long)param_1 + 0xebc) | 4;
  return param_1;
}




void FUN_1002b4da0(long param_1)

{
  FUN_10064e47c(param_1 + 0x1a0);
  return;
}




void FUN_1002b4da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_28;
  
  FUN_100198d1c(param_1 + 0x1a0,param_4,param_2,param_5,param_3);
  local_28 = param_4;
  FUN_1002afbbc(param_1 + 0xc0,&local_28);
  return;
}




void FUN_1002b4dfc(long param_1,undefined8 param_2)

{
  FUN_1001990b0(param_1 + 0x1a0,param_2,0);
  return;
}




void thunk_FUN_1002b4fb4(void)

{
  FUN_1002b4fb4();
  return;
}




void FUN_1002b4e0c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b4fb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b4e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101484868;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002b4e78(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101484868;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002b4ed8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b4ef0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b4f04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101484d88;
  thunk_FUN_100198b18(param_1 + 0x34);
  thunk_FUN_1001b1228(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002b4f50(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101484d88;
  thunk_FUN_100198b18(param_1 + 0x34);
  thunk_FUN_1001b1228(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002b4fa0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b4fb4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002b4fb4_1014845d8;
  if (*(char *)((long)param_1 + 0x4e7) < '\0') {
    operator_delete((void *)param_1[0x9a]);
  }
  if (*(char *)((long)param_1 + 0x4cf) < '\0') {
    operator_delete((void *)param_1[0x97]);
  }
  param_1[0x79] = &PTR_FUN_1014a7108;
  param_1[0x90] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x93);
  FUN_10064e2bc(param_1 + 0x79);
  param_1[0x5b] = &PTR_FUN_1014a7108;
  param_1[0x72] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x75);
  FUN_10064e2bc(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_1014a7108;
  param_1[0x54] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x57);
  FUN_10064e2bc(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002b5074(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void thunk_FUN_1002b4c10(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  lVar1 = FUN_1004f1a74(0);
  FUN_1002b4970(auStack_30,lVar1 - *(long *)(param_1 + 0x1220));
  FUN_1006513c0(param_1 + 0x1000,auStack_30);
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  return;
}




void FUN_1002b50f4(void)

{
  DAT_101e44aa8 = 0xff;
  DAT_101e44aaa = 0xffff;
  DAT_101e44aac = 0xffff;
  DAT_101e44aae = 0xffbc9c44;
  DAT_101e44ab2 = 0xff1166f2;
  DAT_101e44ab6 = 0xffe0e0e0;
  DAT_101e44aba = 0xffa0a0a0;
  DAT_101e44abe = 0xff8c8c8c;
  DAT_101e44ac2 = 0xff322213;
  DAT_101e44ac6 = 0xff091911;
  DAT_101e44aca = 0xff170c19;
  DAT_101e44ace = 0xff241a14;
  DAT_101e44ad2 = 0xff14171c;
  DAT_101e44ad6 = 0xff221911;
  DAT_101e44ada = 0xff1a1416;
  DAT_101e44ade = 0xff121414;
  DAT_101e44ae2 = 0xff1a1809;
  DAT_101e44ae6 = 0xff141414;
  DAT_101e44aea = 0xff141414;
  DAT_101e44aee = 0xff2929c0;
  DAT_101e44af2 = 0xff283082;
  DAT_101e44af6 = 0xff5262cc;
  DAT_101e44afa = 0xff283082;
  DAT_101e44afe = 0xff5262cc;
  DAT_101e44b02 = 0xff745c42;
  DAT_101e44b06 = 0xff184155;
  DAT_101e44b0a = 0xff92665e;
  DAT_101e44b0e = 0xffbc9c44;
  DAT_101e44b12 = 0xffbbae56;
  DAT_101e44b16 = 0xff8b7b01;
  DAT_101e44b1a = 0xff90b3ef;
  DAT_101e44b1e = 0xff728ebe;
  DAT_101e44b22 = 0xff19459d;
  DAT_101e44b26 = 0xff9d877b;
  DAT_101e44b2a = 0xffcbb1a3;
  DAT_101e44b2e = 0xff3f6fb5;
  DAT_101e44b32 = 0xffc5c5c5;
  DAT_101e44b36 = 0xff4fc1f1;
  DAT_101e44b3a = 0xff606060;
  DAT_101e44b3e = 0xffc5ff7b;
  DAT_101e44b42 = 0xff5271eb;
  DAT_101e44b46 = 0xfffae076;
  DAT_101e44b4a = 0xff3ac8f6;
  DAT_101e44b4e = 0xffaaaaaa;
  DAT_101e44b52 = 0xffe19400;
  DAT_101e44b56 = 0xffe19400;
  DAT_101e44b5a = 0xffe550b2;
  DAT_101e44b5e = 0xfff22ae8;
  DAT_101e44b62 = 0xff005ae1;
  DAT_101e44b66 = 0xff1addfa;
  DAT_101e44b6a = 0xff2424b3;
  DAT_101e44b6e = 0xff2424b3;
  DAT_101e44b72 = 0xff646464;
  DAT_101e44b76 = 0xff92665e;
  DAT_101e44b7a = 0xff646037;
  DAT_101e44b80 = 0xffffffff;
  DAT_101e44b84 = 0xff1111a1;
  DAT_101e44b88 = 0xff321ee1;
  DAT_101e44b8c = 0xffc8c8c8;
  DAT_101e44b90 = 0xff321ee1;
  DAT_101e44b94 = 0xff7fe801;
  DAT_101e44b98 = 0xffffffff;
  DAT_101e44b9c = 0xff6259b3;
  DAT_101e44ba0 = 0xff506e73;
  DAT_101e44ba4 = 0xff9dbf86;
  DAT_101e44ba8 = 0xffa35244;
  DAT_101e44bac = 0xffca828e;
  DAT_101e44bb0 = 0xffa6a6a6;
  DAT_101e44bb4 = 0xffa6a6a6;
  DAT_101e44bb8 = 0xffffffff;
  DAT_101e44bbc = 0xff88ea2f;
  DAT_101e44bc0 = 0xff8c8c8c;
  DAT_101e44bc4 = 0xffffb400;
  DAT_101e44bc8 = 0xffff00ff;
  DAT_101e44bcc = 0xff00aded;
  DAT_101e44bd0 = 0xff33d3ff;
  DAT_101e44bd4 = 0xff7fe801;
  DAT_101e44bd8 = 0xff282828;
  DAT_101e44bdc = 0xfff0f0f0;
  DAT_101e44be0 = 0xffa4781e;
  DAT_101e44be4 = 0xffa6654b;
  DAT_101e44be8 = 0xff93435b;
  DAT_101e44bec = 0xff387f9c;
  DAT_101e44bf0 = 0xffa3781e;
  DAT_101e44bf4 = 0xffffd18a;
  DAT_101e44bf8 = 0xffff61f7;
  DAT_101e44bfc = 0xff5de1f2;
  DAT_101e44c00 = 0xff80eaff;
  DAT_101e44c04 = 0xff32e00e;
  DAT_101e44c08 = 0xff5a3c10;
  DAT_101e44c0c = 0xff330b03;
  DAT_101e44c10 = 0xff33031d;
  DAT_101e44c14 = 0xff032433;
  DAT_101e44c18 = 0xff9e8e8d;
  DAT_101e44c20 = 0x4326000041900000;
  DAT_101e44c28 = 0x4326000041c00000;
  DAT_101e44c58 = PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  DAT_101e44c48 = PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  DAT_101e44c50 = PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  DAT_101e44c30 = 0xff404040;
  DAT_101e44c34 = 0xff202020;
  DAT_101e44c38 = 0xff396eb6;
  DAT_101e44c3c = 0xffc0c0c0;
  DAT_101e44c40 = 0xff4ec0ee;
  return;
}




undefined8 FUN_1002b5860(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  *puVar1 = &PTR_thunk_FUN_10064e2bc_101485030;
  FUN_100654488(puVar1,1);
  return param_1;
}




void FUN_1002b589c(long *param_1,long param_2)

{
  param_1[0x35] = param_2;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0001002b58e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[0x35] + 0x138))(0,(long *)param_1[0x35],1,4,1);
    return;
  }
  return;
}




void FUN_1002b58f8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x150))();
    lVar2 = *(long *)(param_1 + 0x1a8);
    bVar1 = false;
    if ((*(float *)(lVar2 + 0x44) == 0.0) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x40)))) {
      bVar1 = *(float *)(lVar2 + 0x40) == 0.0;
    }
    if (!bVar1) {
      *(undefined8 *)(lVar2 + 0x40) = 0;
      FUN_1000200a0();
      return;
    }
  }
  return;
}




void FUN_1002b5950(float param_1,float param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_3 + 0x1a8) != 0) {
    fVar4 = param_2;
    FUN_10064e47c();
    fVar3 = (float)(**(code **)(**(long **)(param_3 + 0x1a8) + 0x48))();
    if (((0.0 < fVar3) && (0.0 < fVar4)) &&
       (fVar4 = (float)NEON_fminnm(param_1 / fVar3,param_2 / fVar4), fVar4 < 1.0)) {
      lVar2 = *(long *)(param_3 + 0x1a8);
      bVar1 = false;
      if ((*(float *)(lVar2 + 0x48) == fVar4) &&
         (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)) && !NAN(fVar4))) {
        bVar1 = *(float *)(lVar2 + 0x4c) == fVar4;
      }
      if (!bVar1) {
        *(float *)(lVar2 + 0x48) = fVar4;
        *(float *)(lVar2 + 0x4c) = fVar4;
        FUN_1000200a0();
      }
    }
    FUN_1002b58f8(param_3);
    return;
  }
  return;
}




long * FUN_1002b59f0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_1002b5a74_101485190;
  puVar1[0x19] = 0;
  FUN_1001b11fc(puVar1 + 0x1a);
  thunk_FUN_100198904(param_1 + 0x34,puVar1 + 0x1a);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  *(uint *)((long)param_1 + 0xebc) = *(uint *)((long)param_1 + 0xebc) | 4;
  return param_1;
}




long * thunk_FUN_1002b59f0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_thunk_FUN_1002b5a74_101485190;
  puVar1[0x19] = 0;
  FUN_1001b11fc(puVar1 + 0x1a);
  thunk_FUN_100198904(param_1 + 0x34,puVar1 + 0x1a);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  *(uint *)((long)param_1 + 0xebc) = *(uint *)((long)param_1 + 0xebc) | 4;
  return param_1;
}




void FUN_1002b5a74(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002b5a74_101485190;
  thunk_FUN_100198b18(param_1 + 0x34);
  thunk_FUN_1001b1228(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002b5a74(void)

{
  FUN_1002b5a74();
  return;
}




void FUN_1002b5ac4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b5a74();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b5ad8(long param_1)

{
  FUN_10064e47c(param_1 + 0x1a0);
  return;
}




void FUN_1002b5ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_28;
  
  FUN_100198d1c(param_1 + 0x1a0,param_4,param_2,param_5,param_3);
  local_28 = param_4;
  FUN_1002afbbc(param_1 + 0xc0,&local_28);
  return;
}




void FUN_1002b5b34(long param_1,undefined8 param_2)

{
  FUN_1001990b0(param_1 + 0x1a0,param_2,0);
  return;
}




void FUN_1002b5b44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




long * FUN_1002b5b58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 local_78;
  
  puVar17 = (undefined8 *)FUN_10064e20c();
  *puVar17 = &PTR_thunk_FUN_1002b8628_1014852d8;
  puVar17 = puVar17 + 0x17;
  thunk_FUN_100652c08(puVar17);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x71;
  thunk_FUN_100650e64();
  plVar4 = param_1 + 0x97;
  FUN_10064fd54(plVar4,0);
  param_1[0x97] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar5 = param_1 + 0xb0;
  thunk_FUN_10019468c(plVar5,0);
  plVar6 = param_1 + 0x231;
  thunk_FUN_1001d0644(plVar6,0);
  plVar7 = param_1 + 0x3b1;
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x3d7;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x3f5;
  FUN_10064fd54(plVar9,0);
  param_1[0x3f5] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar10 = param_1 + 0x40e;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x42c;
  thunk_FUN_100652c08();
  plVar12 = param_1 + 0x44a;
  thunk_FUN_1001c6e5c();
  plVar13 = param_1 + 0x4c4;
  thunk_FUN_100655644(plVar13);
  thunk_FUN_100655644();
  plVar14 = param_1 + 0x51a;
  thunk_FUN_100652c08(plVar14);
  plVar15 = param_1 + 0x538;
  thunk_FUN_100650e64(plVar15);
  plVar16 = param_1 + 0x55e;
  thunk_FUN_100652c08(plVar16);
  param_1[0x580] = 0;
  param_1[0x57f] = 0;
  param_1[0x582] = 0;
  param_1[0x581] = 0;
  param_1[0x57e] = 0;
  param_1[0x57d] = 0;
  *(undefined4 *)(param_1 + 0x583) = 0x3f000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  FUN_100642bd8(plVar9,plVar13,1);
  FUN_100655930(plVar13,plVar14,1);
  FUN_100655930(plVar13,plVar15,1);
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_100642bd8(plVar9,plVar11,1);
  FUN_100642bd8(plVar9,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4ef,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar18 = *(uint *)((long)param_1 + 0x22c);
  if ((~uVar18 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x22c) = uVar18 | 0x7f80;
    FUN_1000200a0(plVar1);
    uVar18 = *(uint *)((long)param_1 + 0x22c);
  }
  *(uint *)((long)param_1 + 0x22c) = uVar18 & 0xfffffffb;
  FUN_100652cac(puVar17,PTR_s_build___InventoryCommon_atlas_10184e108,
                "inventory_hero_portrait_frame_glow");
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar18 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar18 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x31c) = uVar18 & 0xffff807f;
    FUN_1000200a0(plVar2);
    uVar18 = *(uint *)((long)param_1 + 0x31c);
  }
  *(uint *)((long)param_1 + 0x31c) = uVar18 | 4;
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar8,&DAT_10115a164,2);
  uVar18 = *(uint *)((long)param_1 + 0x1f3c);
  if ((uVar18 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1f3c) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x5900;
    FUN_1000200a0(plVar8);
  }
  local_78 = 0x3f80000000000000;
  (**(code **)(param_1[0x3d7] + 0x28))(plVar8,&local_78);
  *(byte *)(param_1 + 0x3f2) = *(byte *)(param_1 + 0x3f2) | 2;
  FUN_10065165c(plVar3,1);
  local_78 = 0x4000000040000000;
  FUN_1006516c8(plVar3,&local_78);
  FUN_1006516bc(plVar3,&DAT_10115a164);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  if ((*(float *)(param_1 + 0xba) != 0.0) || (*(float *)((long)param_1 + 0x5d4) != 0.5)) {
    param_1[0xba] = 0x3f00000000000000;
    FUN_1000200a0(plVar5);
  }
  FUN_10019495c(plVar5,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  *(uint *)((long)param_1 + 0x604) = *(uint *)((long)param_1 + 0x604) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x23b) != 0.0) || (*(float *)((long)param_1 + 0x11dc) != 0.5)) {
    param_1[0x23b] = 0x3f00000000000000;
    FUN_1000200a0(plVar6);
  }
  FUN_1001d08f8(plVar6,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  *(uint *)((long)param_1 + 0x120c) = *(uint *)((long)param_1 + 0x120c) & 0xfffffffb;
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  if ((~*(uint *)((long)param_1 + 0x1e0c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1e0c) = *(uint *)((long)param_1 + 0x1e0c) | 0x7f80;
    FUN_1000200a0(plVar7);
  }
  FUN_10065168c(plVar7,1);
  FUN_100652ca4(plVar10,PTR_s_build___FranchiseLogos_tga_101854a30);
  FUN_10064e47c(0x42c80000,0x42c80000,plVar10);
  *(uint *)((long)param_1 + 0x20f4) = *(uint *)((long)param_1 + 0x20f4) & 0xfffffffb;
  FUN_100652cac(plVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"loading_screen_avatar_5v5");
  FUN_10064e47c(0x42c80000,0x42c80000,plVar11);
  *(uint *)((long)param_1 + 0x21e4) = *(uint *)((long)param_1 + 0x21e4) & 0xfffffffb;
  FUN_100652cac(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"brawl_trophy");
  FUN_10064e47c(0x42a00000,0x42a00000,plVar14);
  FUN_100651038(plVar15,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  *(uint *)((long)param_1 + 0x26a4) = *(uint *)((long)param_1 + 0x26a4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x27fc) = *(uint *)((long)param_1 + 0x27fc) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x453) != 1.2) || (*(float *)((long)param_1 + 0x229c) != 1.2)) {
    param_1[0x453] = 0x3f99999a3f99999a;
    FUN_1000200a0(plVar12);
  }
  FUN_1001c7278(plVar12,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_1001c72a8(0x3f4ccccd,plVar12);
  *(uint *)((long)param_1 + 0x22d4) = *(uint *)((long)param_1 + 0x22d4) & 0xfffffffb;
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar16,&DAT_10115890c,2);
  *(uint *)((long)param_1 + 0x2b74) = *(uint *)((long)param_1 + 0x2b74) & 0xfffffffb;
  return param_1;
}




void FUN_1002b6238(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,string *param_7,string *param_8,
                  long *param_9,undefined8 param_10,ulong param_11,undefined8 param_12,int param_13)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_1006513c0();
  iVar5 = FUN_1004e3624(param_4);
  uVar7 = 4;
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = uVar7;
  }
  *(uint *)(param_2 + 0x604) = *(uint *)(param_2 + 0x604) & 0xfffffffb | uVar6;
  FUN_100194b7c(param_2 + 0x580,param_4);
  iVar5 = FUN_1004e3624(param_5);
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = uVar7;
  }
  *(uint *)(param_2 + 0x120c) = *(uint *)(param_2 + 0x120c) & 0xfffffffb | uVar6;
  FUN_1001d0b14(param_2 + 0x1188,param_5);
  std::string::operator=((string *)(param_2 + 0x2be8),param_7);
  std::string::operator=((string *)(param_2 + 0x2c00),param_8);
  FUN_1002b652c(param_2,(string *)(param_2 + 0x2be8),(string *)(param_2 + 0x2c00));
  FUN_1006513c0(param_2 + 0x1d88,param_6);
  FUN_100651460(param_2 + 0x1d88,param_10);
  *(undefined4 *)(param_2 + 0x2c18) = param_1;
  FUN_1002b6584(param_2,param_12._4_4_);
  uVar6 = uVar7;
  if ((0 < param_12._4_4_ & (param_11._2_1_ ^ 1)) == 0) {
    uVar6 = 0;
  }
  *(uint *)(param_2 + 0x26a4) = *(uint *)(param_2 + 0x26a4) & 0xfffffffb | uVar6;
  FUN_1002b6684(param_2,param_13);
  if ((0 < param_13 & (param_11._2_1_ ^ 1)) == 0) {
    uVar7 = 0;
  }
  *(uint *)(param_2 + 0x27fc) = *(uint *)(param_2 + 0x27fc) & 0xfffffffb | uVar7;
  FUN_1001c6fd8(param_2 + 0x2250,(int)param_12);
  uVar6 = 0;
  if ((0 < (int)param_12) && ((param_11 & 0x10000) == 0)) {
    FUN_1003467f8();
    iVar5 = FUN_10034cdf8();
    uVar6 = 4;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
  }
  *(uint *)(param_2 + 0x22d4) = *(uint *)(param_2 + 0x22d4) & 0xfffffffb | uVar6;
  *(undefined1 *)(param_2 + 0x2be0) = (undefined1)param_11;
  *(uint *)(param_2 + 0x22c) = *(uint *)(param_2 + 0x22c) | 4;
  *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) | 4;
  if (param_11._4_1_ != '\0') {
    *(uint *)(param_2 + 0x2b74) = *(uint *)(param_2 + 0x2b74) | 4;
  }
  uVar6 = 4;
  if (param_11._1_1_ == '\0') {
    uVar6 = 0;
  }
  *(uint *)(param_2 + 0x21e4) = *(uint *)(param_2 + 0x21e4) & 0xfffffffb | uVar6;
  bVar4 = *(byte *)((long)param_9 + 0x17);
  uVar6 = *(uint *)(param_9 + 1);
  if (-1 < (char)bVar4) {
    uVar6 = (uint)bVar4;
  }
  if (uVar6 == 0) {
    uVar6 = *(uint *)(param_2 + 0x20f4) & 0xfffffffb;
  }
  else {
    plVar1 = (long *)*param_9;
    if (-1 < (char)bVar4) {
      plVar1 = param_9;
    }
    FUN_100652cdc(param_2 + 0x2070,plVar1);
    uVar6 = *(uint *)(param_2 + 0x20f4) | 4;
  }
  *(uint *)(param_2 + 0x20f4) = uVar6;
  puVar2 = &DAT_10115891c;
  if (param_11._3_1_ == '\0') {
    puVar2 = &DAT_101158918;
  }
  puVar3 = &UNK_101158914;
  if (param_11._3_1_ == '\0') {
    puVar3 = &DAT_101158910;
  }
  if (param_11._2_1_ == 0) {
    puVar3 = puVar2;
  }
  FUN_100651460(param_2 + 0x388,puVar3);
  FUN_1002b67bc(param_2);
  return;
}




void FUN_1002b652c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  FUN_100652d8c(param_1 + 0x1a8);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  plVar2 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar2 = param_3;
  }
  FUN_100652cac(param_1 + 0x1a8,plVar1,plVar2);
  return;
}




void FUN_1002b6584(long param_1)

{
  long lVar1;
  int iVar2;
  
  if (((DAT_101e44c70 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101e44c70), iVar2 != 0)) {
    FUN_1004e313c(&DAT_101e44c60);
    ___cxa_atexit(FUN_100046198,&DAT_101e44c60,0x100000000);
    ___cxa_guard_release(&DAT_101e44c70);
  }
  FUN_1004e38ac(&DAT_101e44c60,"%d");
  lVar1 = param_1 + 0x29c0;
  FUN_1006513c0(lVar1,&DAT_101e44c60);
  FUN_10064e72c(0xc1200000,lVar1,0,param_1 + 0x28d0,2);
  FUN_10064e72c(0,lVar1,4,param_1 + 0x28d0,4);
  FUN_1006557ec(param_1 + 0x2620);
  return;
}




void FUN_1002b6684(long param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (0 < param_2) {
    iVar4 = 0;
    lVar3 = 0;
    do {
      lVar2 = FUN_100088a94(param_1 + 0x2778,1);
      FUN_100652cac(lVar2,PTR_s_build___InventoryCommon_atlas_10184e108,"64x64_hero_mastery_star");
      if ((*(float *)(lVar2 + 0x48) == 0.8) && (*(float *)(lVar2 + 0x4c) == 0.8)) {
        if (iVar4 != 0) goto LAB_1002b6728;
LAB_1002b676c:
        bVar1 = false;
        if ((*(float *)(lVar2 + 0x44) == 0.0) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x40)))) {
          bVar1 = *(float *)(lVar2 + 0x40) == 0.0;
        }
        if (!bVar1) {
          *(undefined8 *)(lVar2 + 0x40) = 0;
          FUN_1000200a0(lVar2);
        }
      }
      else {
        *(undefined8 *)(lVar2 + 0x48) = 0x3f4ccccd3f4ccccd;
        FUN_1000200a0(lVar2);
        if (iVar4 == 0) goto LAB_1002b676c;
LAB_1002b6728:
        FUN_10064e72c(0,lVar2,3,lVar3,1);
        FUN_10064e72c(0,lVar2,0,lVar3,0);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar2;
    } while (param_2 != iVar4);
  }
  FUN_1006557ec(param_1 + 0x2778);
  return;
}




void FUN_1002b67bc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_70;
  
  plVar1 = param_3 + 0x35;
  uVar7 = FUN_100652e60(plVar1);
  local_70 = (undefined1 *)CONCAT44(param_2,uVar7);
  FUN_10064e48c(param_3 + 0x53,&local_70);
  uVar9 = FUN_100652e60(plVar1);
  FUN_100652e60(plVar1);
  param_2 = param_2 * 0.4;
  FUN_10064e47c(uVar9,param_2,param_3 + 0x3d7);
  fVar8 = (float)FUN_100652e60(plVar1);
  FUN_100652e60(plVar1);
  FUN_10064e47c(fVar8 + 8.0,param_2 + 8.0,param_3 + 0x55e);
  plVar2 = param_3 + 0x71;
  fVar8 = (float)FUN_100652e60(plVar1);
  FUN_10065179c(fVar8 * 0.9,0,0x3f800000,plVar2);
  plVar4 = param_3 + 0x3b1;
  fVar8 = (float)FUN_100652e60(plVar1);
  FUN_10065179c(fVar8 * 0.9,0,0x3f800000,plVar4);
  FUN_10064e5ec(0,0,param_3 + 0x3d7,2,plVar1,2);
  FUN_10064e5ec(0,0,param_3 + 0x53,2,plVar1,2);
  plVar5 = param_3 + 0x3f5;
  FUN_10064fc74(0,0x3f000000,0x41a00000,&local_70);
  FUN_100650064(plVar5,&local_70);
  (**(code **)(param_3[0x3f5] + 0x90))(plVar5);
  plVar3 = param_3 + 0x97;
  fVar10 = 0.5;
  FUN_10064fc74(0,0x3f000000,0x41f00000,&local_70);
  FUN_100650064(plVar3,&local_70);
  (**(code **)(param_3[0x97] + 0x90))(plVar3);
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x3fd) != fVar8 * 0.5) ||
     (*(float *)((long)param_3 + 0x1fec) != fVar10 * 0.52)) {
    *(float *)(param_3 + 0x3fd) = fVar8 * 0.5;
    *(float *)((long)param_3 + 0x1fec) = fVar10 * 0.52;
    FUN_1000200a0(plVar5);
  }
  local_70 = &DAT_3f0000003f000000;
  (**(code **)(param_3[0x3f5] + 0x28))(plVar5,&local_70);
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = 0.5;
  (**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x79) != fVar8 * 0.5) ||
     (*(float *)((long)param_3 + 0x3cc) != fVar10 * 0.73)) {
    *(float *)(param_3 + 0x79) = fVar8 * 0.5;
    *(float *)((long)param_3 + 0x3cc) = fVar10 * 0.73;
    FUN_1000200a0(plVar2);
  }
  local_70 = &DAT_3f0000003f000000;
  (**(code **)(param_3[0x71] + 0x28))(plVar2,&local_70);
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = 0.5;
  (**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x3b9) != fVar8 * 0.5) ||
     (*(float *)((long)param_3 + 0x1dcc) != fVar10 * 0.83)) {
    *(float *)(param_3 + 0x3b9) = fVar8 * 0.5;
    *(float *)((long)param_3 + 0x1dcc) = fVar10 * 0.83;
    FUN_1000200a0(plVar4);
  }
  local_70 = &DAT_3f0000003f000000;
  (**(code **)(param_3[0x3b1] + 0x28))(plVar4,&local_70);
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar10 = 0.5;
  (**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x9f) != fVar8 * 0.5) ||
     (*(float *)((long)param_3 + 0x4fc) != fVar10 * 0.9)) {
    *(float *)(param_3 + 0x9f) = fVar8 * 0.5;
    *(float *)((long)param_3 + 0x4fc) = fVar10 * 0.9;
    FUN_1000200a0(plVar3);
  }
  local_70 = &DAT_3f0000003f000000;
  (**(code **)(param_3[0x97] + 0x28))(plVar3,&local_70);
  FUN_10064e5ec(0,0,param_3 + 0x55e,8,plVar1,8);
  if ((char)param_3[0x57c] == '\x02') {
    uVar7 = 0x41a00000;
    uVar9 = 8;
    uVar6 = 6;
  }
  else {
    *(byte *)(param_3 + 0x50) = *(byte *)(param_3 + 0x50) | 1;
    uVar7 = 0;
    uVar9 = 4;
    uVar6 = 4;
  }
  FUN_10064e5ec(0,uVar7,param_3 + 0x4ef,uVar9,plVar1,uVar6);
  FUN_10064e5ec(0,0,param_3 + 0x17,8,plVar1,8);
  return;
}




void FUN_1002b6be0(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c();
  FUN_10064e47c(param_1,param_2,param_3 + 0xb8);
  FUN_10064e47c((float)param_1 + -12.0,(float)param_2 + -24.0,param_3 + 0x1a8);
  FUN_1002b67bc(param_3);
  return;
}




long * FUN_1002b6c3c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined **ppuVar15;
  float fVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  float local_7c;
  undefined1 *local_78;
  
  plVar1 = param_1 + 0x3852;
  plVar2 = param_1 + 0x3823;
  puVar3 = (uint *)((long)param_1 + 0x1be4c);
  puVar18 = (undefined8 *)FUN_100533dfc();
  lVar22 = 0;
  puVar18[0x1b] = 0;
  *puVar18 = &PTR_thunk_FUN_1002b8990_101485420;
  do {
    FUN_1002b5b58((long)param_1 + lVar22 + 0xe0);
    lVar22 = lVar22 + 0x2c20;
  } while (lVar22 != 0x1b940);
  plVar20 = param_1 + 0x3744;
  thunk_FUN_10064f848(plVar20);
  plVar4 = param_1 + 0x375f;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x377d;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x379b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x37b9;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x37d7;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x37fd;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar2);
  *plVar2 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x3834;
  thunk_FUN_100652c08();
  FUN_1001aa1d4(plVar1);
  plVar11 = param_1 + 0x388e;
  FUN_10064e264(plVar11);
  plVar12 = param_1 + 0x38a5;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x38c3;
  thunk_FUN_100650e64();
  plVar14 = param_1 + 0x38e9;
  thunk_FUN_100650e64();
  param_1[0x3916] = 0;
  param_1[0x3915] = 0;
  param_1[0x3918] = 0;
  param_1[0x3917] = 0;
  param_1[0x3912] = 0;
  param_1[0x3911] = 0;
  param_1[0x3914] = 0;
  param_1[0x3913] = 0;
  param_1[0x3910] = 0;
  param_1[0x390f] = 0;
  FUN_1004e313c(param_1 + 0x3919);
  *(undefined4 *)(param_1 + 0x391e) = 0;
  param_1[0x391d] = 0;
  param_1[0x391c] = 0;
  param_1[0x391b] = 0;
  plVar23 = param_1 + 0x1c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar20,1);
  FUN_100642bd8(plVar20,plVar4,1);
  FUN_100642bd8(plVar20,plVar5,1);
  FUN_100642bd8(plVar20,plVar6,1);
  FUN_100642bd8(plVar20,plVar7,1);
  lVar22 = 10;
  do {
    FUN_100642bd8(plVar20,plVar23,1);
    plVar23 = plVar23 + 0x584;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  FUN_100642bd8(plVar20,plVar8,1);
  FUN_100642bd8(plVar20,plVar9,1);
  FUN_100642bd8(plVar20,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,plVar10,1);
  FUN_100642bd8(plVar20,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar11,plVar13,1);
  FUN_100642bd8(plVar11,plVar14,1);
  uVar21 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar21 & 0xfffffffb;
  if ((uVar21 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar21 & 0xffff807b;
    FUN_1000200a0(param_1);
  }
  FUN_10064f8a8(plVar20,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100652cac(plVar5,PTR_s_build___MenuBackground_Loading_p_1018549f0,"loading_background_top");
  FUN_100652cac(plVar6,PTR_s_build___MenuBackground_Loading_p_1018549f0,"loading_background_bottom")
  ;
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x37d4) = *(byte *)(param_1 + 0x37d4) | 2;
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  uVar21 = *puVar3;
  if ((uVar21 & 0x7f80) != 0x7280) {
    *puVar3 = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x7280;
    FUN_1000200a0(plVar7);
    uVar21 = *puVar3;
  }
  *puVar3 = uVar21 & 0xfffffffb;
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Light_150__10184e1e0,&DAT_10115a168);
  uVar19 = FUN_1004e0150("LOADING_SCREEN_LOADING",0);
  FUN_1006513c0(plVar8,uVar19);
  FUN_10065175c(0x41600000,plVar8);
  plVar20 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(plVar11,plVar20);
  (**(code **)(*plVar20 + 0x68))(plVar20,plVar13,1,6);
  (**(code **)(*plVar20 + 0x68))(plVar20,plVar14,1,6);
  FUN_10064a894(plVar20,0x3c);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar21 = *(uint *)((long)param_1 + 0x1c5ac);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1c5ac) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar12);
  }
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100651700(plVar13,3);
  FUN_1006515e0(plVar13,1);
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  iVar17 = FUN_100126c88();
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
  if (iVar17 == 0) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar9,*ppuVar15,&DAT_10115a168);
  FUN_100651700(plVar9,3);
  FUN_10065165c(plVar9,1);
  FUN_1006516bc(plVar9,&DAT_10115a164);
  local_78 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(plVar9,&local_78);
  uVar21 = *(uint *)((long)param_1 + 0x1c06c);
  if ((uVar21 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c06c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x6600;
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_1 + 0x382c) != 1.25) || (*(float *)((long)param_1 + 0x1c164) != 1.25)) {
    lVar22 = NEON_fmov(0x3fa00000,4);
    param_1[0x382c] = lVar22;
    FUN_1000200a0(plVar2);
  }
  FUN_1001aa38c(0,0,plVar1,"Effect_LoadingScreen",
                "build://Effects/Menu/LoadingScreen/LoadingScreen/LoadingScreen.pfx",4);
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_78);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"loading_screen_VS_new");
  if ((*(float *)(param_1 + 0x383e) != 0.5) || (*(float *)((long)param_1 + 0x1c1f4) != 0.5)) {
    param_1[0x383e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_1 + 0x383d) != 1.5) || (*(float *)((long)param_1 + 0x1c1ec) != 1.5)) {
    lVar22 = NEON_fmov(0x3fc00000,4);
    param_1[0x383d] = lVar22;
    FUN_1000200a0(plVar10);
  }
  *(uint *)((long)param_1 + 0x1c4f4) = *(uint *)((long)param_1 + 0x1c4f4) & 0xfffffffb;
  FUN_10064142c(&local_78,&local_7c);
  fVar16 = local_7c * 1.7777778;
  if (local_78._0_4_ / local_7c <= 1.7777778) {
    local_7c = local_78._0_4_ * 0.5625;
    fVar16 = local_78._0_4_;
  }
  *(float *)(param_1 + 0x391b) = fVar16;
  *(float *)((long)param_1 + 0x1c8dc) = local_7c;
  return param_1;
}




long * thunk_FUN_1002b6c3c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined **ppuVar15;
  float fVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  float fStack_7c;
  undefined1 *puStack_78;
  
  plVar1 = param_1 + 0x3852;
  plVar2 = param_1 + 0x3823;
  puVar3 = (uint *)((long)param_1 + 0x1be4c);
  puVar18 = (undefined8 *)FUN_100533dfc();
  lVar22 = 0;
  puVar18[0x1b] = 0;
  *puVar18 = &PTR_thunk_FUN_1002b8990_101485420;
  do {
    FUN_1002b5b58((long)param_1 + lVar22 + 0xe0);
    lVar22 = lVar22 + 0x2c20;
  } while (lVar22 != 0x1b940);
  plVar20 = param_1 + 0x3744;
  thunk_FUN_10064f848(plVar20);
  plVar4 = param_1 + 0x375f;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x377d;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x379b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x37b9;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x37d7;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x37fd;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar2);
  *plVar2 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x3834;
  thunk_FUN_100652c08();
  FUN_1001aa1d4(plVar1);
  plVar11 = param_1 + 0x388e;
  FUN_10064e264(plVar11);
  plVar12 = param_1 + 0x38a5;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x38c3;
  thunk_FUN_100650e64();
  plVar14 = param_1 + 0x38e9;
  thunk_FUN_100650e64();
  param_1[0x3916] = 0;
  param_1[0x3915] = 0;
  param_1[0x3918] = 0;
  param_1[0x3917] = 0;
  param_1[0x3912] = 0;
  param_1[0x3911] = 0;
  param_1[0x3914] = 0;
  param_1[0x3913] = 0;
  param_1[0x3910] = 0;
  param_1[0x390f] = 0;
  FUN_1004e313c(param_1 + 0x3919);
  *(undefined4 *)(param_1 + 0x391e) = 0;
  param_1[0x391d] = 0;
  param_1[0x391c] = 0;
  param_1[0x391b] = 0;
  plVar23 = param_1 + 0x1c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar20,1);
  FUN_100642bd8(plVar20,plVar4,1);
  FUN_100642bd8(plVar20,plVar5,1);
  FUN_100642bd8(plVar20,plVar6,1);
  FUN_100642bd8(plVar20,plVar7,1);
  lVar22 = 10;
  do {
    FUN_100642bd8(plVar20,plVar23,1);
    plVar23 = plVar23 + 0x584;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  FUN_100642bd8(plVar20,plVar8,1);
  FUN_100642bd8(plVar20,plVar9,1);
  FUN_100642bd8(plVar20,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,plVar10,1);
  FUN_100642bd8(plVar20,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar11,plVar13,1);
  FUN_100642bd8(plVar11,plVar14,1);
  uVar21 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar21 & 0xfffffffb;
  if ((uVar21 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar21 & 0xffff807b;
    FUN_1000200a0(param_1);
  }
  FUN_10064f8a8(plVar20,1);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100652cac(plVar5,PTR_s_build___MenuBackground_Loading_p_1018549f0,"loading_background_top");
  FUN_100652cac(plVar6,PTR_s_build___MenuBackground_Loading_p_1018549f0,"loading_background_bottom")
  ;
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x37d4) = *(byte *)(param_1 + 0x37d4) | 2;
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  uVar21 = *puVar3;
  if ((uVar21 & 0x7f80) != 0x7280) {
    *puVar3 = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x7280;
    FUN_1000200a0(plVar7);
    uVar21 = *puVar3;
  }
  *puVar3 = uVar21 & 0xfffffffb;
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Light_150__10184e1e0,&DAT_10115a168);
  uVar19 = FUN_1004e0150("LOADING_SCREEN_LOADING",0);
  FUN_1006513c0(plVar8,uVar19);
  FUN_10065175c(0x41600000,plVar8);
  plVar20 = (long *)thunk_FUN_10064de70();
  FUN_10064e524(plVar11,plVar20);
  (**(code **)(*plVar20 + 0x68))(plVar20,plVar13,1,6);
  (**(code **)(*plVar20 + 0x68))(plVar20,plVar14,1,6);
  FUN_10064a894(plVar20,0x3c);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar21 = *(uint *)((long)param_1 + 0x1c5ac);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1c5ac) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar12);
  }
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_100651700(plVar13,3);
  FUN_1006515e0(plVar13,1);
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  iVar17 = FUN_100126c88();
  ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
  if (iVar17 == 0) {
    ppuVar15 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar9,*ppuVar15,&DAT_10115a168);
  FUN_100651700(plVar9,3);
  FUN_10065165c(plVar9,1);
  FUN_1006516bc(plVar9,&DAT_10115a164);
  puStack_78 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(plVar9,&puStack_78);
  uVar21 = *(uint *)((long)param_1 + 0x1c06c);
  if ((uVar21 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c06c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x6600;
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_1 + 0x382c) != 1.25) || (*(float *)((long)param_1 + 0x1c164) != 1.25)) {
    lVar22 = NEON_fmov(0x3fa00000,4);
    param_1[0x382c] = lVar22;
    FUN_1000200a0(plVar2);
  }
  FUN_1001aa38c(0,0,plVar1,"Effect_LoadingScreen",
                "build://Effects/Menu/LoadingScreen/LoadingScreen/LoadingScreen.pfx",4);
  puStack_78 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&puStack_78);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"loading_screen_VS_new");
  if ((*(float *)(param_1 + 0x383e) != 0.5) || (*(float *)((long)param_1 + 0x1c1f4) != 0.5)) {
    param_1[0x383e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_1 + 0x383d) != 1.5) || (*(float *)((long)param_1 + 0x1c1ec) != 1.5)) {
    lVar22 = NEON_fmov(0x3fc00000,4);
    param_1[0x383d] = lVar22;
    FUN_1000200a0(plVar10);
  }
  *(uint *)((long)param_1 + 0x1c4f4) = *(uint *)((long)param_1 + 0x1c4f4) & 0xfffffffb;
  FUN_10064142c(&puStack_78,&fStack_7c);
  fVar16 = fStack_7c * 1.7777778;
  if (puStack_78._0_4_ / fStack_7c <= 1.7777778) {
    fStack_7c = puStack_78._0_4_ * 0.5625;
    fVar16 = puStack_78._0_4_;
  }
  *(float *)(param_1 + 0x391b) = fVar16;
  *(float *)((long)param_1 + 0x1c8dc) = fStack_7c;
  return param_1;
}




void FUN_1002b7348(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_a0;
  uint local_9c;
  int local_98 [2];
  float local_90;
  float local_8c;
  undefined8 local_88;
  
  plVar1 = (long *)(param_1 + 0x1bdc8);
  plVar2 = (long *)(param_1 + 0x1baf8);
  FUN_10064142c(&local_8c,&local_90);
  FUN_10064e47c(local_8c,local_90,param_1 + 0x1ba20);
  FUN_10064e47c(local_8c,local_8c * 0.75,plVar2);
  local_98[0] = 0;
  local_98[1] = 0;
  iVar5 = FUN_100147980();
  if (iVar5 != 0) {
    FUN_10064e48c(plVar2,&local_88);
    if ((*(float *)(param_1 + 0x1bb38) != local_8c * 0.5) || (*(float *)(param_1 + 0x1bb3c) != 0.0))
    {
      *(float *)(param_1 + 0x1bb38) = local_8c * 0.5;
      *(undefined4 *)(param_1 + 0x1bb3c) = 0;
      FUN_1000200a0(plVar2);
    }
    local_88 = 0x3f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_88);
  }
  lVar3 = param_1 + 0x1bfe8;
  FUN_100651708(*(float *)(&DAT_1011588f0 + (ulong)((*(uint *)(param_1 + 0x1bf3c) & 4) == 0) * 4) *
                local_8c,lVar3,1);
  FUN_10064e68c(0,0xc2480000,lVar3,6);
  FUN_10064e5ec(0,0,param_1 + 0x1beb8,6,lVar3,4);
  lVar3 = param_1 + 0x1c118;
  FUN_10064e68c(0,0xc2700000,lVar3,8);
  FUN_10064e47c(local_8c,*(undefined4 *)(param_1 + 0x1c15c),param_1 + 0x1bbe8);
  FUN_10064e47c(local_8c,local_90 - *(float *)(param_1 + 0x1c15c),param_1 + 0x1bcd8);
  FUN_10064e5ec(0,0,param_1 + 0x1bcd8,0,param_1 + 0x1bbe8,3);
  if ((*(float *)(param_1 + 0x1be08) != 0.0) || (*(float *)(param_1 + 0x1be0c) != local_90)) {
    *(undefined4 *)(param_1 + 0x1be08) = 0;
    *(float *)(param_1 + 0x1be0c) = local_90;
    FUN_1000200a0(plVar1);
  }
  local_88 = 0x3f80000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_88);
  FUN_10064e47c(local_8c,0x44160000,plVar1);
  lVar10 = param_1 + 0x1c470;
  FUN_10064e47c(local_8c * 0.4,lVar10);
  uVar14 = FUN_10064e3cc(lVar10);
  local_88 = CONCAT44(local_90,uVar14);
  FUN_10064e48c(param_1 + 0x1c528,&local_88);
  FUN_10064e5ec(0,0,param_1 + 0x1c528,8,lVar10,8);
  if (*(int *)(param_1 + 0x1c8e8) == 0) {
    *(uint *)(param_1 + 0x1bf3c) = *(uint *)(param_1 + 0x1bf3c) | 4;
    *(uint *)(param_1 + 0x1be4c) = *(uint *)(param_1 + 0x1be4c) | 4;
  }
  else {
    fVar16 = -100.0;
    fVar17 = *(float *)(param_1 + 0x1c8dc) * 0.5 + -100.0;
    fVar15 = (float)FUN_1006531b0(param_1 + 0xe0 + (ulong)(*(int *)(param_1 + 0x1c8e8) - 1) * 0x2c20
                                  + 0x1a8);
    FUN_1006531b0(param_1 + 0xe0 + (ulong)(*(int *)(param_1 + 0x1c8e8) - 1) * 0x2c20 + 0x1a8);
    *(float *)(param_1 + 0x1c8e0) = (fVar15 * fVar17) / fVar16;
    *(float *)(param_1 + 0x1c8e4) = fVar17;
    if (*(int *)(param_1 + 0x1c8ec) != 0) {
      uVar13 = 0;
      lVar10 = param_1 + 0x5920;
      pcVar11 = (char *)(param_1 + 0x2cc0);
      local_a0 = 0xffffffff;
      local_9c = 0xffffffff;
      lVar9 = param_1;
      do {
        lVar7 = lVar9 + 0xe0;
        FUN_10064e48c(lVar7,param_1 + 0x1c8e0);
        Hint_Prefetch(lVar10 + 0x2be0,0,0,0);
        piVar4 = local_98 + 1;
        if (*pcVar11 != '\x01') {
          piVar4 = local_98;
        }
        if (*piVar4 != *(int *)(param_1 + 0x1c8f0)) {
          Hint_Prefetch(lVar10,0,0,0);
          uVar12 = (uint)uVar13;
          if (*pcVar11 == '\x01') {
            if ((int)local_9c < 0) {
              fVar16 = (float)(**(code **)(*(long *)(lVar9 + 0xe0) + 0x48))(lVar7);
              fVar16 = (float)*(int *)(param_1 + 0x1c8f0) * fVar16 * -0.5 + -500.0;
              uVar14 = 0xc0a00000;
              uVar6 = 3;
              uVar8 = 8;
              lVar7 = lVar3;
            }
            else {
              fVar16 = 0.0;
              uVar14 = 0;
              uVar6 = 0;
              uVar8 = 1;
              lVar7 = param_1 + (ulong)local_9c * 0x2c20 + 0xe0;
            }
            FUN_10064e5ec(fVar16,uVar14,lVar9 + 0xe0,uVar6,lVar7,uVar8);
            local_88 = CONCAT44(local_88._4_4_,uVar12);
            FUN_1000e6a60(param_1 + 0x1c8a8,&local_88);
            local_9c = uVar12;
          }
          else {
            if ((int)local_a0 < 0) {
              fVar16 = (float)(**(code **)(*(long *)(lVar9 + 0xe0) + 0x48))(lVar7);
              fVar16 = (float)*(int *)(param_1 + 0x1c8f0) * fVar16 * 0.5 + 500.0;
              uVar14 = 0xc0a00000;
              uVar6 = 1;
              uVar8 = 8;
              lVar7 = lVar3;
            }
            else {
              fVar16 = 0.0;
              uVar14 = 0;
              uVar6 = 2;
              uVar8 = 3;
              lVar7 = param_1 + (ulong)local_a0 * 0x2c20 + 0xe0;
            }
            FUN_10064e5ec(fVar16,uVar14,lVar9 + 0xe0,uVar6,lVar7,uVar8);
            local_88 = CONCAT44(local_88._4_4_,uVar12);
            FUN_1000e6a60(param_1 + 0x1c8b8,&local_88);
            local_a0 = uVar12;
          }
          *piVar4 = *piVar4 + 1;
          Hint_Prefetch(lVar10 + 0x84,0,0,0);
          if ((*(uint *)(lVar9 + 0x164) & 0x7f80) != 0) {
            *(uint *)(lVar9 + 0x164) = *(uint *)(lVar9 + 0x164) & 0xffff807f;
            FUN_1000200a0(lVar9 + 0xe0);
          }
        }
        uVar13 = uVar13 + 1;
        lVar10 = lVar10 + 0x2c20;
        lVar9 = lVar9 + 0x2c20;
        pcVar11 = pcVar11 + 0x2c20;
      } while (uVar13 < *(uint *)(param_1 + 0x1c8ec));
    }
  }
  return;
}




void FUN_1002b7898(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  long *plVar8;
  ushort uVar9;
  uint *puVar10;
  ulong uVar11;
  ushort *puVar12;
  void *pvVar13;
  ulong uVar14;
  float fVar15;
  undefined4 uVar16;
  int iVar17;
  float local_80;
  undefined1 auStack_7c [4];
  undefined8 ***local_78;
  ulong local_70;
  undefined8 uStack_68;
  
  plVar7 = (long *)(param_1 + 0x1c878);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  if ((char)*(byte *)(param_1 + 0x1c8a7) < '\0') {
    uVar11 = *(ulong *)(param_1 + 0x1c898);
  }
  else {
    uVar11 = (ulong)*(byte *)(param_1 + 0x1c8a7);
  }
  plVar1 = (long *)(param_1 + 0x1baf8);
  if (uVar11 == 0) {
    bVar4 = false;
  }
  else {
    if ((char)*(byte *)(param_1 + 0x1c88f) < '\0') {
      uVar11 = *(ulong *)(param_1 + 0x1c880);
    }
    else {
      uVar11 = (ulong)*(byte *)(param_1 + 0x1c88f);
    }
    bVar4 = uVar11 != 0;
  }
  uVar16 = *(undefined4 *)(param_1 + 0x1c8e8);
  iVar17 = *(int *)(param_1 + 0x1c8ec);
  iVar5 = FUN_100147980();
  if (iVar5 != 0) {
    FUN_100652d8c(param_1 + 0x1baf8);
    FUN_100652cac(param_1 + 0x1baf8,PTR_s_build___ChooseYourHero_png_1018549a0,"full_splash_512");
    uVar11 = (ulong)*(uint *)(param_1 + 0x1c8ec);
    if (*(uint *)(param_1 + 0x1c8ec) != 0) {
      puVar10 = (uint *)(param_1 + 0x164);
      do {
        *puVar10 = *puVar10 & 0xfffffffb;
        puVar10 = puVar10 + 0xb08;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    *(uint *)(param_1 + 0x1c19c) = *(uint *)(param_1 + 0x1c19c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1c06c) = *(uint *)(param_1 + 0x1c06c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1bc6c) = *(uint *)(param_1 + 0x1bc6c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1bd5c) = *(uint *)(param_1 + 0x1bd5c) & 0xfffffffb;
    goto LAB_1002b7c38;
  }
  uVar16 = NEON_ucvtf(uVar16);
  fVar15 = (float)NEON_fminnm(uVar16,(float)iVar17);
  if (!(bool)((int)fVar15 == 1 | bVar4)) {
    if ((int)fVar15 < 2) {
      FUN_100652d8c(param_1 + 0x1baf8);
      FUN_100652cac(param_1 + 0x1baf8,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background"
                   );
      uVar11 = (ulong)*(uint *)(param_1 + 0x1c8ec);
      if (*(uint *)(param_1 + 0x1c8ec) != 0) {
        puVar10 = (uint *)(param_1 + 0x164);
        do {
          *puVar10 = *puVar10 & 0xfffffffb;
          puVar10 = puVar10 + 0xb08;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      *(uint *)(param_1 + 0x1c19c) = *(uint *)(param_1 + 0x1c19c) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0x1bf3c) = *(uint *)(param_1 + 0x1bf3c) & 0xfffffffb;
      *(uint *)(param_1 + 0x1c19c) = *(uint *)(param_1 + 0x1c19c) | 4;
      *(uint *)(param_1 + 0x1bb7c) = *(uint *)(param_1 + 0x1bb7c) | 4;
    }
    goto LAB_1002b7c38;
  }
  FUN_100652d8c(plVar1);
  if (bVar4) {
    plVar8 = (long *)(param_1 + 0x1c890);
    if (*(char *)(param_1 + 0x1c88f) < '\0') {
      plVar7 = (long *)*plVar7;
    }
    if (*(char *)(param_1 + 0x1c8a7) < '\0') {
      plVar8 = (long *)*plVar8;
    }
    FUN_100652cac(plVar1,plVar7,plVar8);
  }
  else {
    if ((char)*(byte *)(param_1 + 0x2cdf) < '\0') {
      uVar11 = *(ulong *)(param_1 + 0x2cd0);
      if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_1002b861c();
      }
      pvVar13 = *(void **)(param_1 + 0x2cc8);
    }
    else {
      pvVar13 = (void *)(param_1 + 0x2cc8);
      uVar11 = (ulong)*(byte *)(param_1 + 0x2cdf);
    }
    if (uVar11 < 0x17) {
      ppppuVar6 = &local_78;
      uStack_68 = CONCAT17((char)uVar11,(undefined7)uStack_68);
      if (uVar11 != 0) goto LAB_1002b7b3c;
    }
    else {
      uVar14 = uVar11 + 0x10 & 0xfffffffffffffff0;
      ppppuVar6 = operator_new(uVar14);
      uStack_68 = uVar14 | 0x8000000000000000;
      local_78 = ppppuVar6;
      local_70 = uVar11;
LAB_1002b7b3c:
      _memcpy(ppppuVar6,pvVar13,uVar11);
    }
    *(undefined1 *)((long)ppppuVar6 + uVar11) = 0;
    ppppuVar6 = (undefined8 ****)local_78;
    if (-1 < (long)uStack_68) {
      ppppuVar6 = &local_78;
    }
    FUN_100652cac(plVar1,ppppuVar6,"full_splash_1k");
    if ((long)uStack_68 < 0) {
      operator_delete(local_78);
    }
  }
  FUN_10064142c(auStack_7c,&local_80);
  fVar15 = *(float *)(param_1 + 0x2cf8);
  local_80 = fVar15 * local_80;
  if ((*(float *)(param_1 + 0x1bb38) != 0.0) || (*(float *)(param_1 + 0x1bb3c) != local_80)) {
    *(undefined4 *)(param_1 + 0x1bb38) = 0;
    *(float *)(param_1 + 0x1bb3c) = local_80;
    FUN_1000200a0(plVar1);
  }
  local_78 = (undefined8 ***)((ulong)(uint)fVar15 << 0x20);
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_78);
  uVar11 = (ulong)*(uint *)(param_1 + 0x1c8ec);
  if (*(uint *)(param_1 + 0x1c8ec) != 0) {
    puVar10 = (uint *)(param_1 + 0x164);
    do {
      *puVar10 = *puVar10 & 0xfffffffb;
      puVar10 = puVar10 + 0xb08;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *(uint *)(param_1 + 0x1c19c) = *(uint *)(param_1 + 0x1c19c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1bc6c) = *(uint *)(param_1 + 0x1bc6c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1bd5c) = *(uint *)(param_1 + 0x1bd5c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1be4c) = *(uint *)(param_1 + 0x1be4c) | 4;
LAB_1002b7c38:
  lVar3 = DAT_101dbd2f8;
  uVar9 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar12;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar9;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar12);
    *(undefined ***)puVar12 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_1002b7ddc();
  FUN_10063f0e8(0x3e99999a);
  FUN_100642b7c(param_1,puVar12);
  FUN_1006513c0(param_1 + 0x1bfe8,param_1 + 0x1c8c8);
  FUN_1002b7348(param_1);
  if (1 < *(uint *)(param_1 + 0x1c8e8)) {
    FUN_1002b7e74(param_1);
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_loading_screen.mp3",0,0);
    iVar5 = *(int *)(param_1 + 0x1c8a8);
    uVar2 = iVar5 - 1;
    if (-1 < (int)uVar2) {
      FUN_1002b7fd4(param_1,(ulong)uVar2,
                    *(undefined4 *)(*(long *)(param_1 + 0x1c8b0) + (ulong)uVar2 * 4),iVar5,0);
      for (uVar2 = iVar5 - 2; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
        FUN_1002b7fd4(param_1,(ulong)uVar2,
                      *(undefined4 *)(*(long *)(param_1 + 0x1c8b0) + (ulong)uVar2 * 4),
                      *(undefined4 *)(param_1 + 0x1c8a8),0);
      }
    }
    if (*(int *)(param_1 + 0x1c8b8) != 0) {
      uVar11 = 0;
      do {
        FUN_1002b7fd4(param_1,uVar11,*(undefined4 *)(*(long *)(param_1 + 0x1c8c0) + uVar11 * 4),
                      *(undefined4 *)(param_1 + 0x1c8a8),1);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x1c8b8));
    }
  }
  return;
}




undefined8 * FUN_1002b7ddc(void)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar2 = (undefined8 *)FUN_10063f0f0();
    *puVar2 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar2;
}




void FUN_1002b7e74(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  void *local_58 [2];
  char local_41;
  
  lVar1 = param_1 + 0x1c290;
  uVar6 = FUN_10064e3cc(param_1 + 0x1ba20);
  FUN_10064e3cc(param_1 + 0x1ba20);
  FUN_10064e47c(uVar6,lVar1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1c2d8) == 1.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x1c2dc)))
     ) {
    bVar3 = *(float *)(param_1 + 0x1c2dc) == 1.0;
  }
  if (!bVar3) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x1c2d8) = uVar6;
    FUN_1000200a0(lVar1);
  }
  uVar6 = FUN_10001f55c();
  FUN_10063f0e8(0x3e99999a);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_1001e1d58(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10001549c(local_58,"Effect_LoadingScreen");
  FUN_1001e1dcc(puVar5,lVar1,local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_100642b7c(lVar1,uVar6);
  return;
}




void FUN_1002b7fd4(long param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  long lVar8;
  ushort *puVar9;
  ushort *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  
  fVar12 = 0.0;
  if ((int)param_4 < *(int *)(param_1 + 0x1c8f0)) {
    fVar12 = *(float *)(param_1 + 0x1c8e0) * (float)(int)(*(int *)(param_1 + 0x1c8f0) + ~param_4);
  }
  bVar3 = param_5 == 0;
  uVar2 = param_2;
  if (bVar3) {
    uVar2 = ~param_2 + param_4;
  }
  fVar13 = -500.0 - fVar12;
  if (bVar3) {
    fVar13 = fVar12 + 500.0;
  }
  fVar12 = 0.492;
  if (bVar3) {
    fVar12 = 0.50200003;
  }
  lVar11 = (long)param_3;
  lVar8 = param_1 + (long)param_3 * 0x2c20;
  lVar1 = lVar8 + 0xe0;
  bVar3 = false;
  if ((*(float *)(lVar8 + 0x128) == 0.2) && (bVar3 = false, !NAN(*(float *)(lVar8 + 300)))) {
    bVar3 = *(float *)(lVar8 + 300) == 1.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + lVar11 * 0x2c20 + 0x128) = 0x3f8000003e4ccccd;
    FUN_1000200a0(lVar1);
  }
  uVar4 = FUN_10001f55c();
  FUN_10063f0e8((float)(int)uVar2 * 0.024 + 0.3);
  FUN_1002b7ddc();
  FUN_10063f0e8(0x3df5c28f);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063fb5c(puVar9);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  lVar8 = param_1 + lVar11 * 0x2c20;
  local_98 = CONCAT44(*(undefined4 *)(lVar8 + 0x124),*(float *)(lVar8 + 0x120) + fVar13);
  FUN_10063fb90(puVar9,&local_98);
  FUN_10063f0e8(0x3df5c28f,puVar9);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10064021c(puVar10);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  local_98 = NEON_fmov(0x3f800000,4);
  FUN_10064025c(puVar10,&local_98);
  FUN_10063f0e8(0x3df5c28f,puVar10);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063f1bc(puVar10);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar10,puVar9);
  uVar5 = FUN_10001f55c();
  FUN_10063f0e8(fVar12 + (float)(int)param_2 * 0.024);
  lVar8 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063fcac(puVar9);
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_10063fce0(0x3e99999a,puVar9);
  FUN_10063f0e8(0x3df5c28f,puVar9);
  uVar6 = FUN_100047300();
  FUN_100642b14(lVar1,uVar4);
  FUN_100642b14(lVar1,puVar10);
  lVar1 = param_1 + lVar11 * 0x2c20 + 0x378;
  FUN_100642b14(lVar1,uVar5);
  FUN_100642b14(lVar1,puVar9);
  FUN_100642b14(lVar1,uVar6);
  return;
}




void FUN_1002b83d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  uVar2 = FUN_100047300();
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5410;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3f733333,puVar4);
  FUN_10063eee4(puVar4,uVar2);
  FUN_100642b7c(param_1,puVar4);
  return;
}




undefined4 FUN_1002b84b8(void)

{
  return 0x3fa66666;
}




void FUN_1002b84c4(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x1c8e8) = param_2;
  *(undefined4 *)(param_1 + 0x1c8ec) = param_3;
  *(undefined4 *)(param_1 + 0x1c8f0) = param_4;
  return;
}




void FUN_1002b84dc(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined1 param_11,undefined4 param_12,undefined4 param_13)

{
  if (param_2 < 10) {
    FUN_1002b6238(param_1 + (long)param_2 * 0x2c20 + 0xe0,param_3,param_4,param_5,param_6,param_7,
                  param_8,param_9,param_10,param_11,param_12,param_13);
  }
  return;
}




void FUN_1002b8570(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(uint *)(param_1 + 0x1c4f4) = *(uint *)(param_1 + 0x1c4f4) | 4;
  FUN_1006513c0(param_1 + 0x1c618);
  FUN_1006513c0(param_1 + 0x1c748,param_3);
  *(uint *)(param_1 + 0x1c06c) = *(uint *)(param_1 + 0x1c06c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1bf3c) = *(uint *)(param_1 + 0x1bf3c) & 0xfffffffb;
  return;
}




void thunk_FUN_1002b8628(void)

{
  FUN_1002b8628();
  return;
}




void FUN_1002b85f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b8628();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002b8990(void)

{
  FUN_1002b8990();
  return;
}




void FUN_1002b8608(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b8990();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b861c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1002b8628(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002b8628_1014852d8;
  if (*(char *)((long)param_1 + 0x2c17) < '\0') {
    operator_delete((void *)param_1[0x580]);
  }
  if (*(char *)((long)param_1 + 0x2bff) < '\0') {
    operator_delete((void *)param_1[0x57d]);
  }
  param_1[0x55e] = &PTR_FUN_1014a7108;
  param_1[0x575] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x578);
  FUN_10064e2bc(param_1 + 0x55e);
  thunk_FUN_100651068(param_1 + 0x538);
  param_1[0x51a] = &PTR_FUN_1014a7108;
  param_1[0x531] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x534);
  FUN_10064e2bc(param_1 + 0x51a);
  param_1[0x4ef] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x506);
  FUN_10064e2bc(param_1 + 0x4ef);
  param_1[0x4c4] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x4db);
  FUN_10064e2bc(param_1 + 0x4c4);
  FUN_10017d364(param_1 + 0x44a);
  param_1[0x42c] = &PTR_FUN_1014a7108;
  param_1[0x443] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x446);
  FUN_10064e2bc(param_1 + 0x42c);
  param_1[0x40e] = &PTR_FUN_1014a7108;
  param_1[0x425] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x428);
  FUN_10064e2bc(param_1 + 0x40e);
  FUN_10064e2bc(param_1 + 0x3f5);
  param_1[0x3d7] = &PTR_FUN_1014a7108;
  param_1[0x3ee] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3f1);
  FUN_10064e2bc(param_1 + 0x3d7);
  thunk_FUN_100651068(param_1 + 0x3b1);
  param_1[0x231] = &PTR_FUN_1014623b0;
  param_1[0x391] = &PTR_FUN_1014a7108;
  param_1[0x3a8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ab);
  FUN_10064e2bc(param_1 + 0x391);
  param_1[0x373] = &PTR_FUN_1014a7108;
  param_1[0x38a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x38d);
  FUN_10064e2bc(param_1 + 0x373);
  FUN_100191808(param_1 + 0x308);
  FUN_100191808(param_1 + 0x29d);
  thunk_FUN_100651068(param_1 + 0x277);
  param_1[0x259] = &PTR_FUN_1014a7108;
  param_1[0x270] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x273);
  FUN_10064e2bc(param_1 + 0x259);
  FUN_10064221c(param_1 + 0x248);
  FUN_10064e2bc(param_1 + 0x231);
  param_1[0xb0] = &PTR_FUN_101460ab8;
  param_1[0x210] = &PTR_FUN_1014a7108;
  param_1[0x227] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x22a);
  FUN_10064e2bc(param_1 + 0x210);
  param_1[0x1f2] = &PTR_FUN_1014a7108;
  param_1[0x209] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20c);
  FUN_10064e2bc(param_1 + 0x1f2);
  FUN_100191808(param_1 + 0x187);
  FUN_100191808(param_1 + 0x11c);
  thunk_FUN_100651068(param_1 + 0xf6);
  param_1[0xd8] = &PTR_FUN_1014a7108;
  param_1[0xef] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf2);
  FUN_10064e2bc(param_1 + 0xd8);
  FUN_10064221c(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xb0);
  FUN_10064e2bc(param_1 + 0x97);
  thunk_FUN_100651068(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002b8990(undefined8 *param_1)

{
  long lVar1;
  long lVar3;
  undefined8 *puVar2;
  
  *param_1 = &PTR_thunk_FUN_1002b8990_101485420;
  if ((void *)param_1[0x391a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x391a]);
    param_1[0x391a] = 0;
    param_1[0x3919] = 0;
  }
  if ((void *)param_1[0x3918] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3918]);
    param_1[0x3918] = 0;
    param_1[0x3917] = 0;
  }
  if ((void *)param_1[0x3916] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3916]);
    param_1[0x3916] = 0;
    param_1[0x3915] = 0;
  }
  if (*(char *)((long)param_1 + 0x1c8a7) < '\0') {
    operator_delete((void *)param_1[0x3912]);
  }
  if (*(char *)((long)param_1 + 0x1c88f) < '\0') {
    operator_delete((void *)param_1[0x390f]);
  }
  thunk_FUN_100651068(param_1 + 0x38e9);
  thunk_FUN_100651068(param_1 + 0x38c3);
  param_1[0x38a5] = &PTR_FUN_1014a7108;
  param_1[0x38bc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x38bf);
  FUN_10064e2bc(param_1 + 0x38a5);
  thunk_FUN_10064e2bc(param_1 + 0x388e);
  thunk_FUN_1001aa23c(param_1 + 0x3852);
  param_1[0x3834] = &PTR_FUN_1014a7108;
  param_1[0x384b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x384e);
  FUN_10064e2bc(param_1 + 0x3834);
  FUN_10064221c(param_1 + 0x3823);
  thunk_FUN_100651068(param_1 + 0x37fd);
  thunk_FUN_100651068(param_1 + 0x37d7);
  param_1[0x37b9] = &PTR_FUN_1014a7108;
  param_1[0x37d0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37d3);
  FUN_10064e2bc(param_1 + 0x37b9);
  param_1[0x379b] = &PTR_FUN_1014a7108;
  param_1[0x37b2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37b5);
  FUN_10064e2bc(param_1 + 0x379b);
  param_1[0x377d] = &PTR_FUN_1014a7108;
  param_1[0x3794] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3797);
  FUN_10064e2bc(param_1 + 0x377d);
  param_1[0x375f] = &PTR_FUN_1014a7108;
  param_1[0x3776] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3779);
  FUN_10064e2bc(param_1 + 0x375f);
  FUN_10064e2bc(param_1 + 0x3744);
  puVar2 = param_1 + 0x31c0;
  lVar3 = -0x1b940;
  do {
    lVar1 = FUN_1002b8628(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x2c20);
    lVar3 = lVar3 + 0x2c20;
  } while (lVar3 != 0);
  thunk_FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002b8c10(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 *local_78;
  
  puVar9 = (undefined8 *)FUN_10052fa40();
  puVar9[0x48] = 0;
  *puVar9 = &PTR_thunk_FUN_1002b919c_101485568;
  puVar9 = puVar9 + 0x49;
  thunk_FUN_100652c08(puVar9);
  plVar1 = param_1 + 0x67;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x82;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xa0;
  thunk_FUN_100652c08(plVar3);
  thunk_FUN_100652c08();
  thunk_FUN_100652c08(param_1 + 0xdc);
  plVar4 = param_1 + 0xfa;
  FUN_1006505b8(plVar4);
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x133;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x1b3;
  thunk_FUN_100650e64(plVar6);
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x233;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x24a;
  FUN_10064f3dc(plVar8);
  thunk_FUN_1002efc48();
  param_1[0x979] = 0xff000000ff;
  param_1[0x97a] = 0;
  *(undefined4 *)(param_1 + 0x97b) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(puVar9,plVar3,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(puVar9,param_1 + 0xbe,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(puVar9,param_1 + 0xdc,1);
  FUN_100642bd8(puVar9,param_1 + 0x115,1);
  FUN_100642bd8(puVar9,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(puVar9,param_1 + 0x1d9,1);
  FUN_100642bd8(puVar9,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x151,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f7,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x18d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x215,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x16f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x26f,1);
  FUN_100651038(param_1 + 0x18d,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100652cac(param_1 + 0x1f7,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_person_counter"
               );
  *(uint *)((long)param_1 + 0x103c) = *(uint *)((long)param_1 + 0x103c) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x215,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_chat_mute");
  *(uint *)((long)param_1 + 0x112c) = *(uint *)((long)param_1 + 0x112c) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x1d9,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_fill");
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) & 0xfffffffb;
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x1b3] + 0x28))(plVar6,&local_78);
  *(uint *)((long)param_1 + 0xe1c) = *(uint *)((long)param_1 + 0xe1c) & 0xfffffffb;
  FUN_100650608(plVar4,&DAT_10115a164);
  FUN_100652ca4(param_1 + 0x115,PTR_s_build___MenuDraftPartsCommon_tga_101854a38);
  FUN_100652cac(plVar5,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_positions_btn_press")
  ;
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x133] + 0x28))(plVar5,&local_78);
  FUN_100652cac(puVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652ca4(param_1 + 0x151,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652ca4(param_1 + 0x16f,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_warning");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"local_player_bg");
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_player_turn_bg");
  if ((*(uint *)((long)param_1 + 0x584) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  if ((*(uint *)((long)param_1 + 0x3bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3bc) = *(uint *)((long)param_1 + 0x3bc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100650608(plVar1,&DAT_10115a164);
  *(uint *)((long)param_1 + 0x13fc) = *(uint *)((long)param_1 + 0x13fc) & 0xffffffbb;
  FUN_10064f4ec(plVar8,PTR_DAT_101854950);
  FUN_10064f7ec(0x3d072b02,plVar8);
  FUN_10064f828(plVar8,1);
  FUN_10064f7f4(plVar8,1);
  FUN_10064f7dc(plVar8);
  FUN_100642378(param_1 + 0x133,1);
  FUN_1002ba404(0x3e4ccccd,param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_10064e5b8(param_1,&DAT_101872b9c);
  return param_1;
}




long * thunk_FUN_1002b8c10(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 *puStack_78;
  
  puVar9 = (undefined8 *)FUN_10052fa40();
  puVar9[0x48] = 0;
  *puVar9 = &PTR_thunk_FUN_1002b919c_101485568;
  puVar9 = puVar9 + 0x49;
  thunk_FUN_100652c08(puVar9);
  plVar1 = param_1 + 0x67;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x82;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xa0;
  thunk_FUN_100652c08(plVar3);
  thunk_FUN_100652c08();
  thunk_FUN_100652c08(param_1 + 0xdc);
  plVar4 = param_1 + 0xfa;
  FUN_1006505b8(plVar4);
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x133;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0x1b3;
  thunk_FUN_100650e64(plVar6);
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x233;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x24a;
  FUN_10064f3dc(plVar8);
  thunk_FUN_1002efc48();
  param_1[0x979] = 0xff000000ff;
  param_1[0x97a] = 0;
  *(undefined4 *)(param_1 + 0x97b) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(puVar9,plVar3,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(puVar9,param_1 + 0xbe,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(puVar9,param_1 + 0xdc,1);
  FUN_100642bd8(puVar9,param_1 + 0x115,1);
  FUN_100642bd8(puVar9,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(puVar9,param_1 + 0x1d9,1);
  FUN_100642bd8(puVar9,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x151,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f7,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x18d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x215,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x16f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x26f,1);
  FUN_100651038(param_1 + 0x18d,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100652cac(param_1 + 0x1f7,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_person_counter"
               );
  *(uint *)((long)param_1 + 0x103c) = *(uint *)((long)param_1 + 0x103c) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x215,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_chat_mute");
  *(uint *)((long)param_1 + 0x112c) = *(uint *)((long)param_1 + 0x112c) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x1d9,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_fill");
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) & 0xfffffffb;
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  puStack_78 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x1b3] + 0x28))(plVar6,&puStack_78);
  *(uint *)((long)param_1 + 0xe1c) = *(uint *)((long)param_1 + 0xe1c) & 0xfffffffb;
  FUN_100650608(plVar4,&DAT_10115a164);
  FUN_100652ca4(param_1 + 0x115,PTR_s_build___MenuDraftPartsCommon_tga_101854a38);
  FUN_100652cac(plVar5,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_positions_btn_press")
  ;
  puStack_78 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x133] + 0x28))(plVar5,&puStack_78);
  FUN_100652cac(puVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652ca4(param_1 + 0x151,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652ca4(param_1 + 0x16f,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652cac(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_warning");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"local_player_bg");
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_player_turn_bg");
  if ((*(uint *)((long)param_1 + 0x584) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  if ((*(uint *)((long)param_1 + 0x3bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3bc) = *(uint *)((long)param_1 + 0x3bc) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100650608(plVar1,&DAT_10115a164);
  *(uint *)((long)param_1 + 0x13fc) = *(uint *)((long)param_1 + 0x13fc) & 0xffffffbb;
  FUN_10064f4ec(plVar8,PTR_DAT_101854950);
  FUN_10064f7ec(0x3d072b02,plVar8);
  FUN_10064f828(plVar8,1);
  FUN_10064f7f4(plVar8,1);
  FUN_10064f7dc(plVar8);
  FUN_100642378(param_1 + 0x133,1);
  FUN_1002ba404(0x3e4ccccd,param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_10064e5b8(param_1,&DAT_101872b9c);
  return param_1;
}




void FUN_1002b919c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002b919c_101485568;
  thunk_FUN_1002f023c(param_1 + 0x26f);
  FUN_10064f424(param_1 + 0x24a);
  thunk_FUN_10064e2bc(param_1 + 0x233);
  param_1[0x215] = &PTR_FUN_1014a7108;
  param_1[0x22c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x22f);
  FUN_10064e2bc(param_1 + 0x215);
  param_1[0x1f7] = &PTR_FUN_1014a7108;
  param_1[0x20e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x211);
  FUN_10064e2bc(param_1 + 0x1f7);
  param_1[0x1d9] = &PTR_FUN_1014a7108;
  param_1[0x1f0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 499);
  FUN_10064e2bc(param_1 + 0x1d9);
  thunk_FUN_100651068(param_1 + 0x1b3);
  thunk_FUN_100651068(param_1 + 0x18d);
  param_1[0x16f] = &PTR_FUN_1014a7108;
  param_1[0x186] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x189);
  FUN_10064e2bc(param_1 + 0x16f);
  param_1[0x151] = &PTR_FUN_1014a7108;
  param_1[0x168] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x16b);
  FUN_10064e2bc(param_1 + 0x151);
  param_1[0x133] = &PTR_FUN_1014a7108;
  param_1[0x14a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14d);
  FUN_10064e2bc(param_1 + 0x133);
  param_1[0x115] = &PTR_FUN_1014a7108;
  param_1[300] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12f);
  FUN_10064e2bc(param_1 + 0x115);
  FUN_10064e2bc(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_1014a7108;
  param_1[0xf3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf6);
  FUN_10064e2bc(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  FUN_10064e2bc(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  FUN_10052ffb4(param_1);
  return;
}




void thunk_FUN_1002b919c(void)

{
  FUN_1002b919c();
  return;
}




void FUN_1002b9384(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002b919c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002b9398(long param_1)

{
  long lVar1;
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x240);
  local_28 = DAT_101d23820;
  local_50 = FUN_1002b94c8;
  lVar1 = param_1 + 0x1380;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  FUN_10001554c(lVar1,&local_50);
  uStack_48 = *(undefined8 *)(param_1 + 0x240);
  local_28 = DAT_101d23824;
  local_50 = FUN_1002b94dc;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  FUN_10001554c(lVar1,&local_50);
  uStack_48 = *(undefined8 *)(param_1 + 0x240);
  local_28 = DAT_101d23828;
  local_50 = FUN_1002b94f0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  FUN_10001554c(lVar1,&local_50);
  uStack_48 = *(undefined8 *)(param_1 + 0x240);
  local_28 = DAT_101d2382c;
  local_50 = FUN_1002b9504;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  FUN_10001554c(lVar1,&local_50);
  uStack_48 = *(undefined8 *)(param_1 + 0x240);
  local_28 = DAT_101d2381c;
  local_50 = FUN_1002b9518;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  FUN_10001554c(lVar1,&local_50);
  return;
}




void FUN_1002b94c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002b94d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_4,param_5);
  return;
}




void FUN_1002b94dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002b94ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_4,param_5);
  return;
}




void FUN_1002b94f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002b9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5);
  return;
}




void FUN_1002b9504(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002b9514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_4,param_5);
  return;
}




void FUN_1002b9518(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002b9528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_4,param_5);
  return;
}




void FUN_1002b952c(long param_1,uint param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(byte *)(param_1 + 0x4bd9) != param_2) {
    *(byte *)(param_1 + 0x4bd9) = (byte)param_2;
    FUN_1002b9624(param_1);
  }
  pcVar1 = "draft_ally_hero_box";
  if (param_2 == 0) {
    pcVar1 = "draft_enemy_hero_box";
  }
  puVar2 = &UNK_10115893b;
  if (param_2 == 0) {
    puVar2 = &DAT_10115893f;
  }
  FUN_100652cdc(param_1 + 0x8a8,pcVar1);
  FUN_100651460(param_1 + 0xd98,puVar2);
  if (param_2 == 0) {
    local_38 = 0xff0000dc;
    FUN_100652dd4(param_1 + 0x500,&local_38,2);
    local_38 = 0xbdcccccd;
  }
  else {
    local_38 = 0xffffae00;
    FUN_100652dd4(param_1 + 0x500,&local_38,2);
    local_38 = 0x3dcccccd;
  }
  local_34 = 0;
  (**(code **)(*(long *)(param_1 + 0x248) + 0x28))(param_1 + 0x248,&local_38);
  return;
}




void FUN_1002b9624(long param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  long lVar4;
  float fVar5;
  float local_58;
  float fStack_54;
  
  pbVar2 = (byte *)(param_1 + 0x4bd9);
  if (*pbVar2 == 0) {
    FUN_1002ba898(param_1);
  }
  else {
    FUN_1002ba704(param_1);
  }
  FUN_10064e72c(0,param_1 + 0x248,5,param_1,5);
  FUN_10064e68c(0,0,param_1 + 0x500,8);
  FUN_10064e68c(0,0,param_1 + 0x338,8);
  FUN_10064e68c(0,0,param_1 + 0x410,8);
  FUN_1002ba644(param_1);
  puVar3 = &DAT_101158947;
  if (*pbVar2 != 0) {
    puVar3 = &DAT_101158943;
  }
  FUN_100652dd4(param_1 + 0xec8,puVar3,2);
  lVar1 = param_1 + 2000;
  puVar3 = &DAT_101158947;
  if (*pbVar2 != 0) {
    puVar3 = &DAT_101158943;
  }
  FUN_100650608(lVar1,puVar3);
  puVar3 = &DAT_101158937;
  if (*pbVar2 != 0) {
    puVar3 = &DAT_101158933;
  }
  FUN_100652dd4(param_1 + 0x248,puVar3,2);
  *(byte *)(param_1 + 800) = *(byte *)(param_1 + 800) & 0xfe | *pbVar2 ^ 1;
  *(byte *)(param_1 + 0x5d8) = *(byte *)(param_1 + 0x5d8) & 0xfe | *pbVar2 ^ 1;
  FUN_10064e5ec(0,0,param_1 + 0x6e0,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x8a8,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0xd98,8,param_1 + 0xec8,8);
  FUN_10064e5ec(0,0,param_1 + 0x1198,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x1250,8,param_1 + 0x1198,8);
  fVar5 = 0.0;
  FUN_10064e5ec(0,param_1 + 0x1378,7,param_1,5);
  lVar4 = *(long *)(param_1 + 0x4bd0);
  if (lVar4 != 0) {
    local_58 = (float)FUN_10064259c(lVar1);
    local_58 = local_58 * 0.7;
    fStack_54 = fVar5 * 0.7;
    FUN_10064e48c(lVar4,&local_58);
    FUN_10064e5ec(0xc2400000,0,*(undefined8 *)(param_1 + 0x4bd0),5,param_1 + 0xd98,7);
  }
  return;
}




void FUN_1002b9884(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4bd8) = param_2;
  FUN_100652cdc(param_1 + 0x998,"draft_positions_btn_press");
  FUN_100642378(param_1 + 0x998,1);
  FUN_1002ba404(0x3e4ccccd,param_1);
  return;
}




void FUN_1002b98d4(long param_1)

{
  *(uint *)(param_1 + 0xe1c) = *(uint *)(param_1 + 0xe1c) | 4;
  *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) | 4;
  return;
}




void FUN_1002b98f0(long param_1,int param_2)

{
  uint uVar1;
  
  FUN_1002f07f4(param_1 + 0x1378);
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x112c) = *(uint *)(param_1 + 0x112c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002b9938(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 4;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x12d4) = *(uint *)(param_1 + 0x12d4) & 0xfffffffb | uVar2;
  if (*(byte *)(param_1 + 0x4bda) == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x4bda) = (byte)param_2;
  FUN_1002b9624();
  uVar3 = 0x3f4ccccd;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  uVar1 = FUN_100640840(uVar3,0x3dcccccd,0);
  FUN_100642324(param_1 + 0x500);
  FUN_100642b14(param_1 + 0x500,uVar1);
  return;
}




void FUN_1002b99d8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100655b6c(param_1 + 0xd38);
  iVar1 = FUN_1004e36c0(param_2,uVar2);
  if (iVar1 != 0) {
    FUN_1006513c0(param_1 + 0xc68,param_2);
    return;
  }
  return;
}




void FUN_1002b9a24(long param_1,int param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (param_2 == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  uVar5 = 0xff;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  FUN_100651038(param_1 + 0xc68,*ppuVar1);
  uVar4 = *(uint *)(param_1 + 0x494);
  if (uVar5 != (uVar4 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x494) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar5 << 7;
    FUN_1000200a0(param_1 + 0x410);
  }
  uVar5 = 4;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffffb | uVar5;
  if ((*(char *)(param_1 + 0x4bdb) == '\0' && param_2 != 0) && (*(int *)(param_1 + 0x4bcc) == 0xff))
  {
    *(uint *)(param_1 + 0xa1c) = *(uint *)(param_1 + 0xa1c) | 4;
    FUN_100642378(param_1 + 0x998,1);
    FUN_1002ba404(0x3e4ccccd,param_1);
  }
  else {
    *(uint *)(param_1 + 0xa1c) = *(uint *)(param_1 + 0xa1c) & 0xfffffffb;
    FUN_100642378(param_1 + 0x998,1);
  }
  puVar2 = (undefined4 *)&UNK_10115892b;
  if (param_4 == 0) {
    puVar2 = (undefined4 *)&DAT_101158927;
  }
  if (param_3 == 0) {
    puVar2 = (undefined4 *)&DAT_10115892f;
  }
  uVar5 = 4;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x103c) = *(uint *)(param_1 + 0x103c) & 0xfffffffb | uVar5;
  puVar3 = &DAT_10115a168;
  if (param_2 == 0) {
    puVar3 = puVar2;
  }
  FUN_100651460(param_1 + 0xc68,puVar3);
  return;
}




void FUN_1002b9b8c(long param_1,byte *param_2,int param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  
  bVar4 = param_2[0x17];
  uVar6 = (ulong)bVar4;
  sVar2 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar2 = uVar6;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar2 == 0) || (iVar5 = _memcmp(pbVar7,pbVar8,sVar2), iVar5 == 0)) goto LAB_1002b9c94;
    }
    else {
      if (sVar2 == 0) {
LAB_1002b9c94:
        FUN_100652d8c(param_1 + 0x6e0);
        return;
      }
      pbVar7 = param_2;
      if ((uint)*pbVar8 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar6 == 0) goto LAB_1002b9c94;
        } while (*pbVar7 == *pbVar8);
      }
    }
  }
  lVar1 = param_1 + 0x6e0;
  FUN_100652d8c(lVar1);
  pbVar7 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    pbVar7 = param_2;
  }
  FUN_1001e34dc(lVar1,pbVar7);
  uVar9 = 0x3f800000;
  if (param_3 == 0) {
    uVar9 = 0;
  }
  FUN_100652e14(uVar9,lVar1);
  FUN_1002b9624(param_1);
  return;
}




void FUN_1002b9ca8(long param_1)

{
  FUN_100652d8c(param_1 + 0x6e0);
  return;
}




void FUN_1002b9cb0(long param_1)

{
  int iVar1;
  
  if (((DAT_101e44c88 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e44c88), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e44c78);
    ___cxa_atexit(FUN_100046198,&DAT_101e44c78,0x100000000);
    ___cxa_guard_release(&DAT_101e44c88);
  }
  FUN_1004e38ac(&DAT_101e44c78,"%d");
  FUN_1006513c0(param_1 + 0xd98,&DAT_101e44c78);
  FUN_1002b9624(param_1);
  return;
}




void FUN_1002b9d70(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x4bd0) = param_2;
  FUN_100642bd8(param_1 + 0x248,param_2,1);
  FUN_1002b9624(param_1);
  return;
}




void FUN_1002b9da0(long param_1)

{
  *(undefined8 *)(param_1 + 0x4bd0) = 0;
  return;
}




void FUN_1002b9da8(long param_1,undefined4 param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ***pppuVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  undefined **ppuVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  void *local_88 [2];
  char local_71;
  undefined8 **local_70;
  size_t local_68;
  ulong local_60;
  undefined8 **local_58;
  size_t local_50;
  undefined8 local_48;
  
  local_58 = (undefined8 ***)0x0;
  local_50 = 0;
  local_48 = 0;
  local_70 = (undefined8 ***)0x0;
  local_68 = 0;
  local_60 = 0;
  switch(param_2) {
  case 0:
    pcVar7 = "lobby_position_captain";
    break;
  case 1:
    pcVar7 = "lobby_position_jungle";
    break;
  case 2:
    pcVar7 = "lobby_position_top";
    break;
  case 3:
    pcVar7 = "lobby_position_middle";
    break;
  case 4:
    pcVar7 = "lobby_position_bottom";
    break;
  case 5:
    pcVar7 = "lobby_position_carry";
    break;
  case 6:
    FUN_10001549c(local_88,"draft_shrug_emoji");
    std::string::operator=((string *)&local_58,(string *)local_88);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    ppuVar8 = &PTR_s_build___MenuDraftPartsCommon_tga_101854a38;
    goto LAB_1002b9e90;
  default:
    std::string::operator=((string *)&local_58,(string *)&DAT_101d91198);
    std::string::operator=((string *)&local_70,(string *)&DAT_101d91198);
    goto LAB_1002b9eb8;
  }
  FUN_10001549c(local_88,pcVar7);
  std::string::operator=((string *)&local_58,(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  ppuVar8 = &PTR_s_build___MenuPartsCommon_tga_101854970;
LAB_1002b9e90:
  FUN_10001549c(local_88,*ppuVar8);
  std::string::operator=((string *)&local_70,(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
LAB_1002b9eb8:
  bVar5 = DAT_101d911a8._7_1_;
  bVar12 = local_48._7_1_;
  uVar9 = (ulong)local_48._7_1_;
  sVar2 = local_50;
  if (-1 < local_48) {
    sVar2 = uVar9;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar1) {
    pppuVar3 = (undefined8 ***)local_58;
    if (-1 < local_48) {
      pppuVar3 = &local_58;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if (local_48 < 0) {
      if ((sVar2 == 0) || (iVar6 = _memcmp(pppuVar3,pbVar11,sVar2), iVar6 == 0)) goto LAB_1002ba010;
    }
    else {
      if (sVar2 == 0) goto LAB_1002ba010;
      if ((uint)*pbVar11 == ((uint)local_58 & 0xff)) {
        pbVar10 = (byte *)((ulong)&local_58 | 1);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_1002ba010;
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 == *pbVar11);
      }
    }
  }
  uVar9 = local_60 >> 0x38;
  sVar2 = local_68;
  if (-1 < (long)local_60) {
    sVar2 = uVar9;
  }
  if (sVar2 == sVar1) {
    pppuVar3 = (undefined8 ***)local_70;
    if (-1 < (long)local_60) {
      pppuVar3 = &local_70;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)bVar5) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((long)local_60 < 0) {
      if ((sVar1 == 0) || (iVar6 = _memcmp(pppuVar3,pbVar11,sVar1), iVar6 == 0)) goto LAB_1002ba010;
    }
    else {
      if (sVar1 == 0) goto LAB_1002ba010;
      if ((uint)*pbVar11 == ((uint)local_70 & 0xff)) {
        pbVar10 = (byte *)((ulong)&local_70 | 1);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_1002ba010;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
    }
  }
  FUN_100652d8c(param_1 + 0xa88);
  pppuVar3 = (undefined8 ***)local_70;
  if (-1 < (long)local_60) {
    pppuVar3 = &local_70;
  }
  FUN_100652ca4(param_1 + 0xa88,pppuVar3);
  bVar12 = local_48._7_1_;
LAB_1002ba010:
  pppuVar3 = (undefined8 ***)local_58;
  if (-1 < (char)bVar12) {
    pppuVar3 = &local_58;
  }
  FUN_100652cdc(param_1 + 0xa88,pppuVar3);
  *(undefined4 *)(param_1 + 0x4bcc) = param_2;
  FUN_1002b9624(param_1);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_1002ba0ac(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0xe1c) = *(uint *)(param_1 + 0xe1c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002ba0dc(long param_1,int param_2)

{
  undefined8 ***pppuVar1;
  char *pcVar2;
  void *local_50 [2];
  char local_39;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  if (param_2 == 2) {
    pcVar2 = "lobby_build_utility";
  }
  else if (param_2 == 1) {
    pcVar2 = "lobby_build_crystal";
  }
  else {
    if (param_2 != 0) {
      std::string::operator=((string *)&local_38,(string *)&DAT_101d91198);
      goto LAB_1002ba168;
    }
    pcVar2 = "lobby_build_weapon";
  }
  FUN_10001549c(local_50,pcVar2);
  std::string::operator=((string *)&local_38,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
LAB_1002ba168:
  *(int *)(param_1 + 0x4bc8) = param_2;
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_100652cdc(param_1 + 0xb78,pppuVar1);
  FUN_1002b9624(param_1);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_1002ba1b4(long param_1)

{
  FUN_1002f0390(param_1 + 0x1378,4);
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) & 0xfffffffb;
  return;
}




void FUN_1002ba1ec(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_1002f0390(param_1 + 0x1378,1);
  return;
}




void FUN_1002ba20c(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_1002f0390(param_1 + 0x1378,2);
  return;
}




void FUN_1002ba22c(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_1002f0390(param_1 + 0x1378,3);
  return;
}




void FUN_1002ba24c(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_1002f0390(param_1 + 0x1378,0);
  return;
}




void FUN_1002ba26c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_70;
  float fStack_6c;
  int iStack_68;
  int local_64;
  
  FUN_10016aeec(&local_64,0,&iStack_68,0);
  piVar1 = &iStack_68;
  if (*(char *)(param_3 + 0x4bd9) != '\0') {
    piVar1 = &local_64;
  }
  iVar2 = *piVar1;
  FUN_10064e47c(param_1,param_2,param_3 + 0x248);
  FUN_10064e47c(param_1,param_2,param_3 + 0x500);
  FUN_10064e47c(param_1,param_2,param_3 + 0x410);
  FUN_10064e47c(param_1,param_2,param_3 + 0x338);
  fVar3 = (float)param_2;
  fVar4 = fVar3 + -16.0;
  local_70 = fVar4;
  fStack_6c = fVar4;
  FUN_10064e48c(param_3 + 2000,&local_70);
  local_70 = fVar4;
  fStack_6c = fVar4;
  FUN_10064e48c(param_3 + 0x6e0,&local_70);
  local_70 = fVar3 + -4.0;
  fStack_6c = local_70;
  FUN_10064e48c(param_3 + 0x8a8,&local_70);
  local_70 = fVar4 * 0.4;
  fStack_6c = local_70;
  FUN_10064e48c(param_3 + 0xec8,&local_70);
  fVar5 = fVar3 + 6.0;
  local_70 = fVar5;
  fStack_6c = fVar5;
  FUN_10064e48c(param_3 + 0x1198,&local_70);
  local_70 = fVar5;
  fStack_6c = fVar5;
  FUN_10064e48c(param_3 + 0x1250,&local_70);
  FUN_10065179c(-((fVar4 - (float)param_1) * 0.7) - (float)iVar2,0,0x3f800000,param_3 + 0xc68);
  FUN_100652eac(param_3 + 0xb78,(int)(fVar3 * 0.5));
  FUN_100652eac(param_3 + 0xa88,(int)(fVar3 * 0.5));
  FUN_1002b9624(param_3);
  return;
}




void FUN_1002ba404(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 *local_78;
  
  plVar2 = (long *)FUN_100088a94(param_2 + 0x998,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuDraftPartsCommon_Ico_101854a40,"draft_positions_btn");
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_78);
  if ((*(uint *)((long)plVar2 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)plVar2 + 0x84) = *(uint *)((long)plVar2 + 0x84) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  uVar3 = FUN_10064081c(param_1);
  FUN_100640db8(0x3f800000,0x3f800000,0,0);
  FUN_100640840(0x3f666666,0x3d4ccccd,0);
  uVar4 = FUN_100640db8(0x400ccccd,0x400ccccd,0x3f400000,FUN_10001f160);
  FUN_100640840(0,0x3f666666,FUN_10001f4ac);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f1bc(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar6,uVar4);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f564(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f614(puVar6,uVar3);
  FUN_10063f664(puVar6);
  FUN_100642b14(plVar2,puVar6);
  return;
}




void FUN_1002ba644(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)((long)param_1 + 0x4bda) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    fVar2 = fVar2 * 0.09;
  }
  FUN_100642324(param_1 + 0x49);
  if (*(float *)(param_1 + 0x51) != fVar2) {
    fVar3 = -fVar2;
    if (*(char *)((long)param_1 + 0x4bd9) != '\0') {
      fVar3 = fVar2;
    }
    uVar1 = FUN_1006408f4(fVar3,*(undefined4 *)((long)param_1 + 0x28c),0x3e4ccccd,0);
    FUN_10063f130(uVar1,FUN_10006bf9c);
    FUN_100642b14(param_1 + 0x49,uVar1);
    return;
  }
  return;
}




void FUN_1002ba704(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int local_54;
  
  FUN_10016aeec(&local_54,0,0,0);
  uVar2 = 0;
  FUN_10064e5ec(0xc1000000,0,param_1 + 2000,5,param_1 + 0x248,5);
  FUN_10064e5ec(0xc0c00000,0,param_1 + 0xec8,8,param_1 + 2000,7);
  FUN_10064e5ec((float)local_54 + 100.0,0x428a0000,param_1 + 0x998,8,param_1,0);
  lVar1 = param_1 + 0xc68;
  FUN_10064e5ec((float)local_54 + 48.0,0xc1000000,lVar1,3,param_1,3);
  FUN_10064e5ec((float)local_54 + 48.0,0x41000000,param_1 + 0xa88,0,param_1,0);
  if ((*(uint *)(param_1 + 0xa1c) & 4) != 0) {
    uVar2 = 0x42c80000;
  }
  FUN_10064e5ec(uVar2,0,param_1 + 0xb78,0,param_1 + 0xa88,1);
  FUN_10064e5ec(0,0,param_1 + 0x5f0,1,param_1 + 0x6e0,0);
  FUN_10064e5ec(0xc1000000,0,param_1 + 0xfb8,5,lVar1,7);
  FUN_10064e5ec(0x41000000,0,param_1 + 0x10a8,7,lVar1,5);
  return;
}




void FUN_1002ba898(long param_1)

{
  int local_24;
  
  FUN_10016aeec(0,0,&local_24,0);
  FUN_10064e5ec(0x41000000,0,param_1 + 2000,7,param_1 + 0x248,7);
  FUN_10064e5ec(0xc0c00000,0,param_1 + 0xec8,8,param_1 + 2000,5);
  FUN_10064e5ec(-8.0 - (float)local_24,0xc1000000,param_1 + 0xc68,2,param_1,2);
  FUN_10064e5ec(0,0,param_1 + 0x5f0,0,param_1 + 0x6e0,1);
  *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) & 0xfffffffb;
  *(uint *)(param_1 + 0xbfc) = *(uint *)(param_1 + 0xbfc) & 0xfffffffb;
  return;
}




void FUN_1002ba968(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_100530020();
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0x3bc) & 0x7f80) == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x3bc) & 0xffff807f;
  }
  else {
    if ((iVar2 != 1) || ((*(uint *)(param_1 + 0x3bc) & 0x7f80) == 0x3f80)) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x3bc) & 0xffff807f | 0x3f80;
  }
  *(uint *)(param_1 + 0x3bc) = uVar1;
  FUN_1000200a0(param_1 + 0x338);
  return;
}




long * FUN_1002ba9d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar5 = (undefined8 *)FUN_100655644();
  puVar5[0x2b] = 0;
  *puVar5 = &PTR_thunk_FUN_1002babb8_1014856c0;
  puVar5 = puVar5 + 0x2c;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x4a;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x75;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x93;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x13a;
  thunk_FUN_1006543ec(plVar4);
  param_1[0x16f] = 0;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar3,1);
  FUN_100652cac(puVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  *(uint *)((long)param_1 + 0x1e4) = *(uint *)((long)param_1 + 0x1e4) & 0xffffffbf | 0x10;
  local_58 = DAT_101dbd460;
  local_80 = FUN_1002baba4;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x2d,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = FUN_1002baba4;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x2d,&local_80);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100530adc(plVar3,0,1);
  *(uint *)((long)param_1 + 0x51c) = *(uint *)((long)param_1 + 0x51c) & 0xffffffbf;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}




void FUN_1002baba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002babb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 8))();
  return;
}




long * thunk_FUN_1002ba9d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar5 = (undefined8 *)FUN_100655644();
  puVar5[0x2b] = 0;
  *puVar5 = &PTR_thunk_FUN_1002babb8_1014856c0;
  puVar5 = puVar5 + 0x2c;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x4a;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x75;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x93;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x13a;
  thunk_FUN_1006543ec(plVar4);
  param_1[0x16f] = 0;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar3,1);
  FUN_100652cac(puVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  *(uint *)((long)param_1 + 0x1e4) = *(uint *)((long)param_1 + 0x1e4) & 0xffffffbf | 0x10;
  uStack_58 = DAT_101dbd460;
  pcStack_80 = FUN_1002baba4;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x2d,&pcStack_80);
  uStack_58 = DAT_101dbd48c;
  pcStack_80 = FUN_1002baba4;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x2d,&pcStack_80);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100530adc(plVar3,0,1);
  *(uint *)((long)param_1 + 0x51c) = *(uint *)((long)param_1 + 0x51c) & 0xffffffbf;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}




void FUN_1002babb8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002babb8_1014856c0;
  FUN_1002bac94();
  if ((void *)param_1[0x16f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x16f]);
    param_1[0x16f] = 0;
    param_1[0x16e] = 0;
  }
  FUN_10064e2bc(param_1 + 0x13a);
  thunk_FUN_100530784(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_1014a7108;
  param_1[0x8c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f);
  FUN_10064e2bc(param_1 + 0x75);
  param_1[0x4a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x4a);
  param_1[0x2c] = &PTR_FUN_1014a7108;
  param_1[0x43] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x46);
  FUN_10064e2bc(param_1 + 0x2c);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002bac94(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xb70);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xb78);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0xb78);
        uVar2 = *(uint *)(param_1 + 0xb70);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0xb78) != 0) {
    *(undefined4 *)(param_1 + 0xb70) = 0;
  }
  return;
}




void thunk_FUN_1002babb8(void)

{
  FUN_1002babb8();
  return;
}




void FUN_1002bacfc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002babb8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002bad10(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 local_50;
  float fStack_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  
  FUN_100641464(auStack_44,&local_48);
  FUN_10064e47c(0x44234000,local_48,param_1 + 0x75);
  plVar4 = param_1 + 0x13a;
  FUN_10064e47c(0x44174000,local_48,plVar4);
  FUN_100654488(plVar4,1);
  plVar1 = param_1 + 0x2c;
  FUN_10064e5ec(0,0,param_1 + 0x75,4,plVar1,4);
  fVar9 = 0.0;
  FUN_10064e5ec(0,plVar4,4,plVar1,4);
  plVar4 = param_1 + 0x93;
  if ((int)param_1[0x16e] != 0) {
    uVar8 = 0;
    do {
      if (uVar8 == 0) {
        uVar3 = *(undefined8 *)param_1[0x16f];
        uVar5 = 0;
        uVar7 = 0;
        plVar6 = plVar4;
      }
      else {
        uVar3 = *(undefined8 *)(param_1[0x16f] + uVar8 * 8);
        uVar5 = 4;
        uVar7 = 6;
        plVar6 = *(long **)(param_1[0x16f] + (ulong)((int)uVar8 - 1) * 8);
      }
      fVar9 = 24.0;
      FUN_10064e5ec(0,uVar3,uVar5,plVar6,uVar7);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x16e));
  }
  FUN_100530a48(plVar4,1);
  uVar3 = FUN_100530a94(plVar4);
  FUN_100530aa0(plVar4,1,0,1,1);
  fVar9 = fVar9 + 24.0;
  FUN_10053093c(uVar3,plVar4);
  FUN_1006557ec(param_1 + 0x4a);
  (**(code **)(*param_1 + 0x138))(param_1);
  plVar4 = (long *)FUN_100641574("root-layer");
  local_50 = (**(code **)(*plVar4 + 0x48))();
  fStack_4c = fVar9;
  FUN_10064e48c(plVar1,&local_50);
  uVar2 = *(uint *)((long)param_1 + 0x1e4);
  if ((uVar2 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x1e4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e5ec(0,0,plVar1,0,plVar4,0);
  return;
}




void FUN_1002baefc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  void *pvVar1;
  ulong uVar2;
  long local_78;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  pvVar1 = operator_new(0xf90);
  local_78 = FUN_1002bb3e8(pvVar1,param_2,param_3,param_4,param_5);
  FUN_1005308f8(param_1 + 0x498,pvVar1,1);
  FUN_1002baffc(param_1 + 0xb70,&local_78);
  if ((param_5 & 1) == 0) {
    uVar2 = (ulong)(*(int *)(param_1 + 0xb70) - 1);
    local_48 = DAT_101dbd460;
    local_70 = FUN_1002bb07c;
    local_60 = 0;
    uStack_58 = 0;
    lStack_68 = param_1;
    local_50 = uVar2;
    FUN_10001554c(local_78 + 8,&local_70);
    local_48 = DAT_101dbd48c;
    local_70 = FUN_1002bb07c;
    local_60 = 0;
    uStack_58 = 0;
    lStack_68 = param_1;
    local_50 = uVar2;
    FUN_10001554c(local_78 + 8,&local_70);
    *(uint *)(local_78 + 0x84) = *(uint *)(local_78 + 0x84) | 0x10;
  }
  return;
}




void FUN_1002baffc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002bb824(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002bb07c(long param_1)

{
  undefined8 in_x4;
  
  FUN_1002bb270(param_1,in_x4);
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_skin_confirm.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x0001002bb0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 8))();
  return;
}




void FUN_1002bb0c4(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  
  FUN_100642324();
  lVar1 = param_1 + 0x250;
  FUN_100642324(lVar1);
  uVar5 = 4;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffb | uVar5;
  if (param_2 == 0) {
    uVar2 = FUN_100047714();
    FUN_10063f0e8(0x3dcccccd);
    FUN_10063fce0(0,uVar2);
    lVar1 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 != 0xffff) {
      if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      puVar3 = (undefined8 *)FUN_10063ee9c();
      *puVar3 = &PTR_thunk_FUN_10063eeb4_1014a5338;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_100642b7c(param_1,uVar2);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x84);
    *(uint *)(param_1 + 0x84) = uVar5 | 4;
    if ((~uVar5 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = uVar5 | 0x7f84;
      FUN_1000200a0(param_1);
    }
    if ((*(uint *)(param_1 + 0x2d4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xffff807f;
      FUN_1000200a0(lVar1);
    }
    uVar2 = FUN_100047714();
    FUN_10063f0e8(0x3dcccccd);
    FUN_10063fce0(0x3f800000,uVar2);
    FUN_100642b14(lVar1,uVar2);
    if (*(float *)(param_1 + 0x4dc) != 0.0) {
      *(undefined4 *)(param_1 + 0x4dc) = 0;
      FUN_1000200a0(param_1 + 0x498);
      return;
    }
  }
  return;
}




void FUN_1002bb270(undefined1 param_1 [16],float param_2,long param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((-1 < (int)param_4) && (param_4 < *(uint *)(param_3 + 0xb70))) {
    uVar2 = 0;
    uVar5 = (ulong)param_4;
    do {
      lVar3 = *(long *)(*(long *)(param_3 + 0xb78) + uVar2 * 8);
      uVar4 = (uint)(uVar5 == uVar2);
      *(uint *)(lVar3 + 0x5dc) =
           *(uint *)(lVar3 + 0x5dc) & 0xfffffff8 | *(uint *)(lVar3 + 0x5dc) & 3 | uVar4 << 2;
      *(uint *)(lVar3 + 0xaf4) =
           *(uint *)(lVar3 + 0xaf4) & 0xfffffff8 | *(uint *)(lVar3 + 0xaf4) & 3 | uVar4 << 2;
      *(uint *)(lVar3 + 0x4ec) =
           *(uint *)(lVar3 + 0x4ec) & 0xfffffff8 |
           *(uint *)(lVar3 + 0x4ec) & 3 | (uint)(uVar5 != uVar2) << 2;
      *(uint *)(param_3 + 0xb80) = param_4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_3 + 0xb70));
    (**(code **)**(undefined8 **)(param_3 + 0x158))
              (*(undefined8 **)(param_3 + 0x158),
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0xb78) + uVar5 * 8) + 0xf88));
    plVar1 = *(long **)(*(long *)(param_3 + 0xb78) + uVar5 * 8);
    fVar8 = *(float *)((long)plVar1 + 0x44);
    fVar6 = *(float *)(param_3 + 0x4dc);
    (**(code **)(*plVar1 + 0x48))();
    fVar7 = *(float *)(param_3 + 0x4dc);
    if (0.0 <= fVar6 + fVar8) {
      fVar8 = param_2 + fVar8;
      FUN_10064e3cc(param_3 + 0x9d0);
      if (param_2 < fVar8 + fVar7) {
        fVar8 = *(float *)(*(long *)(*(long *)(param_3 + 0xb78) + uVar5 * 8) + 0x44);
        FUN_10064e3cc(param_3 + 0x9d0);
        fVar6 = param_2;
        (**(code **)(**(long **)(*(long *)(param_3 + 0xb78) + uVar5 * 8) + 0x48))();
        fVar6 = (param_2 + -24.0) - (fVar8 + fVar6);
        if (*(float *)(param_3 + 0x4dc) != fVar6) goto LAB_1002bb3b8;
      }
    }
    else {
      fVar6 = 24.0 - *(float *)(*(long *)(*(long *)(param_3 + 0xb78) + uVar5 * 8) + 0x44);
      if (fVar7 != fVar6) {
LAB_1002bb3b8:
        *(float *)(param_3 + 0x4dc) = fVar6;
        FUN_1000200a0(param_3 + 0x498);
        return;
      }
    }
  }
  return;
}




long * FUN_1002bb3e8(long *param_1,long param_2,undefined *param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar8 = (undefined8 *)FUN_100655644();
  *puVar8 = &PTR_thunk_FUN_1002bb8a0_101485810;
  puVar8 = puVar8 + 0x2b;
  thunk_FUN_100652c08(puVar8);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8d;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xab;
  thunk_FUN_1001c4be4(plVar4);
  plVar5 = param_1 + 0x14e;
  thunk_FUN_1001c4be4(plVar5);
  param_1[0x1f1] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  iVar7 = FUN_1004d2524(param_3);
  if (iVar7 == 0) {
    pcVar9 = "full_splash_512";
    param_3 = PTR_s_build___ChooseYourHero_png_1018549a0;
  }
  else {
    pcVar9 = "full_splash_1k";
  }
  FUN_100652cac(puVar8,param_3,pcVar9);
  FUN_10064e47c(0x44174000,0x43e2e000,puVar8);
  if (param_5 != 0) {
    FUN_100652e14(0,puVar8);
    uVar6 = *(uint *)((long)param_1 + 0x84);
    if ((uVar6 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
      FUN_1000200a0(param_1);
    }
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
  uVar6 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2cc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e47c(0x44174000,0x4362e000,plVar1);
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_1006513c0(plVar2,param_4);
  FUN_10065179c(0x44084000,0,0x3f800000,plVar2);
  FUN_1001c4c8c(0x44174000,0x43e2e000,0x40800000,plVar5);
  uVar6 = *(uint *)((long)param_1 + 0xaf4);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xaf4) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(plVar5);
  }
  uVar10 = 0x43d6e000;
  FUN_1001c4c8c(0x44114000,0x43d6e000,0x40400000,plVar4);
  if ((*(uint *)((long)param_1 + 0x5dc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5dc) = *(uint *)((long)param_1 + 0x5dc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  local_78 = FUN_100652e60(puVar8);
  uStack_74 = uVar10;
  FUN_10064e48c(plVar3,&local_78);
  uVar6 = *(uint *)((long)param_1 + 0x4ec);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_10064e5ec(0,0,plVar1,6,puVar8,6);
  FUN_10064e5ec(0,0xc1400000,plVar2,6,puVar8,6);
  FUN_10064e5ec(0,0,plVar5,8,puVar8,8);
  FUN_10064e5ec(0,0,plVar4,8,puVar8,8);
  FUN_10064e5ec(0,0,plVar3,8,puVar8,8);
  *(uint *)((long)param_1 + 0x5dc) = *(uint *)((long)param_1 + 0x5dc) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xaf4) = *(uint *)((long)param_1 + 0xaf4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x4ec) = *(uint *)((long)param_1 + 0x4ec) | 4;
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void thunk_FUN_1002bb8a0(void)

{
  FUN_1002bb8a0();
  return;
}




void FUN_1002bb810(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002bb8a0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002bb824(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002bb8a0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1002bb8a0_101485810;
  param_1[0x14e] = &PTR_FUN_101465600;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xe98) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xf50) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xf68);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xe98);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x3c0);
  param_1[0x14e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x165);
  FUN_10064e2bc(param_1 + 0x14e);
  lVar1 = 0;
  param_1[0xab] = &PTR_FUN_101465600;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x980) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xa38) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xa50);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x980);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x3c0);
  param_1[0xab] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xc2);
  FUN_10064e2bc(param_1 + 0xab);
  param_1[0x8d] = &PTR_FUN_1014a7108;
  param_1[0xa4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa7);
  FUN_10064e2bc(param_1 + 0x8d);
  thunk_FUN_100651068(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_1014a7108;
  param_1[0x42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002bba14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_94 [4];
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar9 = (undefined8 *)FUN_100533dfc();
  puVar9[0x1b] = 0;
  *puVar9 = &PTR_thunk_FUN_1002bc16c_101485960;
  puVar9 = puVar9 + 0x1c;
  FUN_1006505b8(puVar9);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x55;
  FUN_10064e264();
  plVar3 = param_1 + 0x6c;
  thunk_FUN_1001d0b98();
  plVar12 = param_1 + 0xd7;
  thunk_FUN_1001d4a98(plVar12);
  plVar11 = param_1 + 0x12a;
  thunk_FUN_1001d0b98(plVar11);
  plVar4 = param_1 + 0x195;
  thunk_FUN_1001d2b74(plVar4);
  plVar5 = param_1 + 0x2b1;
  thunk_FUN_1001d44d0(plVar5);
  plVar6 = param_1 + 0x5ac;
  thunk_FUN_100652c08(plVar6);
  param_1[0x5cc] = 0;
  param_1[0x5cb] = 0;
  param_1[0x5ca] = (long)(param_1 + 0x5cb);
  plVar7 = param_1 + 0x5cd;
  FUN_10064e264(plVar7);
  FUN_10064e264(param_1 + 0x5e4);
  thunk_FUN_1001d60a4(param_1 + 0x5fb);
  thunk_FUN_1001d57d8(param_1 + 0x1150);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(plVar1,plVar12,1);
  FUN_100642bd8(plVar12,plVar4,1);
  FUN_100642bd8(plVar12,plVar5,1);
  FUN_100642bd8(plVar12,plVar6,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_1001d0f60(plVar3,plVar7,1);
  FUN_100642bd8(plVar1,plVar11,1);
  FUN_100642bd8(puVar9,param_1 + 0x1150,1);
  FUN_100642bd8(puVar9,plVar2,1);
  plVar10 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar1,1,2);
  FUN_10064e524(puVar9,plVar10);
  FUN_10064e5b8(plVar1,&DAT_101872b9c);
  plVar10 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar3,1,2);
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar12,5,2);
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar11,1,2);
  FUN_10064e524(plVar1,plVar10);
  FUN_10064e4dc(plVar3,800);
  FUN_10064e5b8(plVar3,&DAT_101872b94);
  FUN_1001d0d24(plVar3,0);
  FUN_10064e4dc(plVar11,800);
  FUN_10064e5b8(plVar11,&DAT_101872b94);
  FUN_1001d0d24(plVar11,1);
  FUN_10064e5b8(plVar12,&DAT_101872ba4);
  plVar11 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar4,0,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar5,1,2);
  (**(code **)(*plVar11 + 0x58))(plVar11,plVar6);
  FUN_10064e524(plVar12,plVar11);
  FUN_10064e47c(0x448d2000,0x437e0000,plVar4);
  FUN_10064e4dc(plVar4,0xfe00000469);
  local_90 = (code *)CONCAT62(local_90._2_6_,0x15);
  FUN_10064e5b8(plVar4,&local_90);
  FUN_10064e5b8(plVar5,&DAT_101872ba4);
  FUN_100534ef4(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  local_90 = (code *)CONCAT71(local_90._1_7_,1);
  FUN_100534ebc(plVar5,&local_90);
  FUN_10064e5cc(plVar5,1);
  plVar12 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar12 + 0x78))(plVar12,0,1);
  (**(code **)(*plVar12 + 0x68))(plVar12,plVar7,1,9);
  (**(code **)(*plVar12 + 0x78))(plVar12,0,1);
  FUN_10064e524(plVar3,plVar12);
  uVar13 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar13,0,0xf,0x14,0xf);
  FUN_10064e524(plVar7,uVar13);
  FUN_100652cac(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_bg");
  FUN_100652cac(plVar6,PTR_s_build___SpoilsOfWarBg_png_101854a58,"full_loading_2k");
  FUN_10064e5b8(plVar6,&DAT_101872b9c);
  uVar14 = *(uint *)((long)param_1 + 0x2de4);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x2de4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_1000200a0(plVar6);
    uVar14 = *(uint *)((long)param_1 + 0x2de4);
  }
  *(uint *)((long)param_1 + 0x2de4) = uVar14 & 0xfffffffb;
  uVar8 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_1002bc07c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x119d,&local_90);
  local_68 = DAT_101d918e8;
  local_90 = FUN_1002bc0bc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x119d,&local_90);
  local_68 = uVar8;
  local_90 = FUN_1002bc0f4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1376,&local_90);
  local_68 = uVar8;
  local_90 = FUN_1002bc104;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x145c,&local_90);
  local_68 = uVar8;
  local_90 = FUN_1002bc114;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1542,&local_90);
  local_68 = uVar8;
  local_90 = FUN_1002bc124;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1628,&local_90);
  local_68 = DAT_101d2381c;
  local_90 = FUN_1002bc134;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  FUN_100641464(&local_90,auStack_94);
  uVar13 = thunk_FUN_10064dd80();
  FUN_10064e524(plVar2,uVar13);
  FUN_10064e5cc(plVar2,1);
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_10064e6d8(0,0,param_1,0);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002bc07c(long param_1)

{
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_lock_in_confirm.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x0001002bc0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_1002bc0bc(long param_1)

{
  FUN_1001d3e60(param_1 + 0x8ce0,0);
                    /* WARNING: Could not recover jumptable at 0x0001002bc0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  return;
}




void FUN_1002bc0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002bc100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  return;
}




void FUN_1002bc104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002bc110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x28))();
  return;
}




void FUN_1002bc114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002bc120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))();
  return;
}




void FUN_1002bc124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002bc130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x38))();
  return;
}




void FUN_1002bc134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001002bc164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar1);
  return;
}




long * thunk_FUN_1002bba14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_94 [4];
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar9 = (undefined8 *)FUN_100533dfc();
  puVar9[0x1b] = 0;
  *puVar9 = &PTR_thunk_FUN_1002bc16c_101485960;
  puVar9 = puVar9 + 0x1c;
  FUN_1006505b8(puVar9);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x55;
  FUN_10064e264();
  plVar3 = param_1 + 0x6c;
  thunk_FUN_1001d0b98();
  plVar12 = param_1 + 0xd7;
  thunk_FUN_1001d4a98(plVar12);
  plVar11 = param_1 + 0x12a;
  thunk_FUN_1001d0b98(plVar11);
  plVar4 = param_1 + 0x195;
  thunk_FUN_1001d2b74(plVar4);
  plVar5 = param_1 + 0x2b1;
  thunk_FUN_1001d44d0(plVar5);
  plVar6 = param_1 + 0x5ac;
  thunk_FUN_100652c08(plVar6);
  param_1[0x5cc] = 0;
  param_1[0x5cb] = 0;
  param_1[0x5ca] = (long)(param_1 + 0x5cb);
  plVar7 = param_1 + 0x5cd;
  FUN_10064e264(plVar7);
  FUN_10064e264(param_1 + 0x5e4);
  thunk_FUN_1001d60a4(param_1 + 0x5fb);
  thunk_FUN_1001d57d8(param_1 + 0x1150);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(plVar1,plVar12,1);
  FUN_100642bd8(plVar12,plVar4,1);
  FUN_100642bd8(plVar12,plVar5,1);
  FUN_100642bd8(plVar12,plVar6,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_1001d0f60(plVar3,plVar7,1);
  FUN_100642bd8(plVar1,plVar11,1);
  FUN_100642bd8(puVar9,param_1 + 0x1150,1);
  FUN_100642bd8(puVar9,plVar2,1);
  plVar10 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar1,1,2);
  FUN_10064e524(puVar9,plVar10);
  FUN_10064e5b8(plVar1,&DAT_101872b9c);
  plVar10 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar3,1,2);
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar12,5,2);
  (**(code **)(*plVar10 + 0x68))(plVar10,plVar11,1,2);
  FUN_10064e524(plVar1,plVar10);
  FUN_10064e4dc(plVar3,800);
  FUN_10064e5b8(plVar3,&DAT_101872b94);
  FUN_1001d0d24(plVar3,0);
  FUN_10064e4dc(plVar11,800);
  FUN_10064e5b8(plVar11,&DAT_101872b94);
  FUN_1001d0d24(plVar11,1);
  FUN_10064e5b8(plVar12,&DAT_101872ba4);
  plVar11 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar4,0,2);
  (**(code **)(*plVar11 + 0x68))(plVar11,plVar5,1,2);
  (**(code **)(*plVar11 + 0x58))(plVar11,plVar6);
  FUN_10064e524(plVar12,plVar11);
  FUN_10064e47c(0x448d2000,0x437e0000,plVar4);
  FUN_10064e4dc(plVar4,0xfe00000469);
  pcStack_90 = (code *)CONCAT62(pcStack_90._2_6_,0x15);
  FUN_10064e5b8(plVar4,&pcStack_90);
  FUN_10064e5b8(plVar5,&DAT_101872ba4);
  FUN_100534ef4(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
  FUN_100534ebc(plVar5,&pcStack_90);
  FUN_10064e5cc(plVar5,1);
  plVar12 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar12 + 0x78))(plVar12,0,1);
  (**(code **)(*plVar12 + 0x68))(plVar12,plVar7,1,9);
  (**(code **)(*plVar12 + 0x78))(plVar12,0,1);
  FUN_10064e524(plVar3,plVar12);
  uVar13 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar13,0,0xf,0x14,0xf);
  FUN_10064e524(plVar7,uVar13);
  FUN_100652cac(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,"draft_bg");
  FUN_100652cac(plVar6,PTR_s_build___SpoilsOfWarBg_png_101854a58,"full_loading_2k");
  FUN_10064e5b8(plVar6,&DAT_101872b9c);
  uVar14 = *(uint *)((long)param_1 + 0x2de4);
  if ((uVar14 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x2de4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x5900;
    FUN_1000200a0(plVar6);
    uVar14 = *(uint *)((long)param_1 + 0x2de4);
  }
  *(uint *)((long)param_1 + 0x2de4) = uVar14 & 0xfffffffb;
  uVar8 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002bc07c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x119d,&pcStack_90);
  uStack_68 = DAT_101d918e8;
  pcStack_90 = FUN_1002bc0bc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x119d,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002bc0f4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1376,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002bc104;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x145c,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002bc114;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1542,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002bc124;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1628,&pcStack_90);
  uStack_68 = DAT_101d2381c;
  pcStack_90 = FUN_1002bc134;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  FUN_100641464(&pcStack_90,auStack_94);
  uVar13 = thunk_FUN_10064dd80();
  FUN_10064e524(plVar2,uVar13);
  FUN_10064e5cc(plVar2,1);
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_10064e6d8(0,0,param_1,0);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002bc16c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002bc16c_101485960;
  FUN_1001d7d6c(param_1 + 0x1150);
  FUN_1001d81b8(param_1 + 0x5fb);
  thunk_FUN_10064e2bc(param_1 + 0x5e4);
  thunk_FUN_10064e2bc(param_1 + 0x5cd);
  FUN_10029a380(param_1 + 0x5ca,param_1[0x5cb]);
  param_1[0x5ac] = &PTR_FUN_1014a7108;
  param_1[0x5c3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5c6);
  FUN_10064e2bc(param_1 + 0x5ac);
  FUN_1001d7bcc(param_1 + 0x2b1);
  FUN_1001d7ab4(param_1 + 0x195);
  param_1[0x12a] = &PTR_FUN_101466d88;
  thunk_FUN_10064e2bc(param_1 + 0x17d);
  param_1[0x15f] = &PTR_FUN_1014a7108;
  param_1[0x176] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x179);
  FUN_10064e2bc(param_1 + 0x15f);
  param_1[0x141] = &PTR_FUN_1014a7108;
  param_1[0x158] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15b);
  FUN_10064e2bc(param_1 + 0x141);
  FUN_10064e2bc(param_1 + 0x12a);
  param_1[0xd7] = &PTR_FUN_101467be8;
  param_1[0x10c] = &PTR_FUN_1014a7108;
  param_1[0x123] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x126);
  FUN_10064e2bc(param_1 + 0x10c);
  param_1[0xee] = &PTR_FUN_1014a7108;
  param_1[0x105] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x108);
  FUN_10064e2bc(param_1 + 0xee);
  FUN_10064e2bc(param_1 + 0xd7);
  param_1[0x6c] = &PTR_FUN_101466d88;
  thunk_FUN_10064e2bc(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_1014a7108;
  param_1[0xb8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb);
  FUN_10064e2bc(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_1014a7108;
  param_1[0x9a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9d);
  FUN_10064e2bc(param_1 + 0x83);
  FUN_10064e2bc(param_1 + 0x6c);
  thunk_FUN_10064e2bc(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  FUN_10064e2bc(param_1 + 0x1c);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002bc16c(void)

{
  FUN_1002bc16c();
  return;
}




void FUN_1002bc360(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002bc16c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002bc374(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined8 uVar1;
  int local_34;
  
  uVar1 = (**(code **)(*param_3 + 0x48))();
  FUN_10064e47c(uVar1,param_2 * 0.6,param_3 + 0x55);
  FUN_10064e72c(0,param_3 + 0x55,2,param_3,2);
  FUN_10016aeec(0,0,0,&local_34);
  FUN_10064e47c(uVar1,(float)(local_34 + 0xfa),param_3 + 0x1150);
  FUN_10064e5ec(0,0,param_3 + 0x1150,3,param_3,3);
  return;
}




undefined4 FUN_1002bc434(void)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  
  FUN_10064142c(&local_14,local_18);
  return local_14;
}




void FUN_1002bc460(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined8 uVar1;
  int local_34;
  
  FUN_10016aeec(0,0,0,&local_34);
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 - (float)(local_34 + 0xfa);
  FUN_10064e47c(uVar1,param_2,param_3 + 0x1c);
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(uVar1,param_2 * 0.6,param_3 + 0x55);
  FUN_10064e6d8(0,0,param_3,0);
  return;
}




void FUN_1002bc538(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 **ppuVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *local_a0 [2];
  char local_89;
  uint local_84;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  
  uVar3 = FUN_100345b94();
  uVar2 = FUN_1003b1948(uVar3,*param_2);
  local_84 = uVar2;
  FUN_1000ea5b4(local_a0);
  uVar3 = FUN_1004e0150(param_2[3],0);
  uVar4 = FUN_10034c47c(param_2);
  ppuVar1 = (undefined1 **)local_a0[0];
  if (-1 < local_89) {
    ppuVar1 = local_a0;
  }
  lVar5 = FUN_1001d4864(param_1 + 0x1588,*param_2,ppuVar1,uVar3,uVar4,param_3,param_4);
  local_60 = (ulong)uVar2;
  local_58 = DAT_101d91884;
  local_80 = FUN_1002bc644;
  local_70 = 0;
  uStack_68 = 0;
  lStack_78 = param_1;
  FUN_10001554c(lVar5 + 8,&local_80);
  plVar6 = (long *)FUN_100299fe4(param_1 + 0x2e50,&local_84);
  *plVar6 = lVar5;
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  return;
}




void FUN_1002bc644(long param_1)

{
  undefined8 in_x4;
  
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x0001002bc688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 **)(param_1 + 0xd8),in_x4);
  return;
}




void FUN_1002bc68c(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint local_24;
  
  lVar5 = *(long *)(param_1 + 0x2e58);
  if (lVar5 != 0) {
    lVar1 = param_1 + 0x2e50;
    lVar6 = param_1 + 0x2e58;
    do {
      bVar2 = *(uint *)(lVar5 + 0x20) < param_2;
      if (!bVar2) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar2 * 8);
    } while (lVar5 != 0);
    if ((lVar6 != param_1 + 0x2e58) && (*(uint *)(lVar6 + 0x20) <= param_2)) {
      local_24 = param_2;
      puVar3 = (undefined8 *)FUN_100299fe4(lVar1,&local_24);
      FUN_1001d4964(param_1 + 0x1588,*puVar3);
      plVar4 = (long *)FUN_100299fe4(lVar1,&local_24);
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
      FUN_1002bce48(lVar1,&local_24);
    }
  }
  return;
}




void FUN_1002bc744(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined4 local_34;
  
  local_34 = (undefined4)param_2;
  plVar1 = (long *)FUN_100299fe4(param_1 + 0x2e50,&local_34);
  if (*plVar1 != 0) {
    if (param_3 == 0) {
      FUN_1002bc68c(param_1,param_2);
    }
    else {
      FUN_1001d1cec(*plVar1,1);
    }
  }
  return;
}




undefined8 FUN_1002bc7b0(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_14;
  
  local_14 = param_2;
  puVar1 = (undefined8 *)FUN_100299fe4(param_1 + 0x2e50,&local_14);
  return *puVar1;
}




void FUN_1002bc7e0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  local_24 = param_2;
  uVar1 = FUN_10034be60(&local_24);
  FUN_1001d6afc(param_1 + 0x2fd8,uVar1);
  return;
}




void FUN_1002bc820(long param_1)

{
  FUN_1001d6c84(param_1 + 0x2fd8);
  return;
}




void FUN_1002bc82c(long param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_1001d3d2c();
    return;
  }
  FUN_1001d3bdc(param_1 + 0x8ce0);
  return;
}




void FUN_1002bc840(long param_1,undefined4 param_2,int param_3,int param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  param_1 = param_1 + 0x2e50;
  local_3c = param_2;
  plVar1 = (long *)FUN_100299fe4(param_1,&local_3c);
  if (*plVar1 != 0) {
    if (param_4 == 0) {
      if (param_3 != 0) {
        local_34 = param_2;
        puVar2 = (undefined8 *)FUN_100299fe4(param_1,&local_34);
        FUN_1001d1c1c(*puVar2,1);
      }
    }
    else {
      local_38 = param_2;
      puVar2 = (undefined8 *)FUN_100299fe4(param_1,&local_38);
      FUN_1001d1c0c(*puVar2);
    }
  }
  return;
}




void FUN_1002bc8d4(long param_1)

{
  FUN_1001d30cc(param_1 + 0xca8);
  return;
}




void FUN_1002bc8dc(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  if (param_4 != 0) {
    plVar1 = param_1 + 0x1185;
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2,1);
    plVar1 = (long *)FUN_10064e5a0(plVar1);
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  }
  if (param_3 != 0) {
    FUN_10016aeec(&uStack_3c,0,&local_40,&local_44);
    FUN_10028fed4(param_2,uStack_3c,0,local_40,local_44);
    plVar1 = param_1 + 0x55;
    FUN_100642bd8(plVar1,param_2,1);
    plVar2 = (long *)FUN_10064e5a0(plVar1);
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
    FUN_10064e72c(0,plVar1,2,param_1,2);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002bc9dc(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_10064e5ec(0,0,param_2,8,param_1,8);
  return;
}




void FUN_1002bca24(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x160c) = *(uint *)(param_1 + 0x160c) & 0xfffffffb;
  *(uint *)(param_1 + 0x2de4) = *(uint *)(param_1 + 0x2de4) | 4;
  FUN_1001d5f88(param_1 + 0x8a80,1);
  *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x32c) & 0xfffffffb;
  lVar1 = param_1 + 0x2f20;
  FUN_1001d0f60(param_1 + 0x950,lVar1,1);
  plVar2 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar2 + 0x78))(plVar2,0,1);
  (**(code **)(*plVar2 + 0x68))(plVar2,lVar1,1,0x11);
  (**(code **)(*plVar2 + 0x78))(plVar2,0,1);
  FUN_10064e524(param_1 + 0x950,plVar2);
  uVar3 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar3,0x14,0xf,0,0xf);
  FUN_10064e524(lVar1,uVar3);
  return;
}




void FUN_1002bcb18(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x2fd8;
  FUN_1001d0f60(param_1 + 0x950,lVar1,1);
  plVar2 = (long *)thunk_FUN_10064de70();
  (**(code **)(*plVar2 + 0x60))(plVar2,lVar1,2);
  FUN_10064e524(param_1 + 0x950,plVar2);
  uVar3 = thunk_FUN_10064de70();
  FUN_10064a8b0(uVar3,0x14,0xf,0,0xf);
  FUN_10064e524(lVar1,uVar3);
  return;
}




void FUN_1002bcba0(long param_1)

{
  FUN_1001d32a0(param_1 + 0xca8);
  return;
}




void FUN_1002bcba8(long param_1,int param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x160c) = *(uint *)(param_1 + 0x160c) & 0xfffffffb;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xb8ec) | 4;
  }
  else {
    FUN_1001d5fe0(param_1 + 0x8a80);
    uVar1 = *(uint *)(param_1 + 0xb8ec) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0xb8ec) = uVar1;
  return;
}




void FUN_1002bcc00(long param_1)

{
  FUN_1001d3028(param_1 + 0xca8);
  return;
}




void FUN_1002bcc08(long param_1,undefined8 param_2,int param_3)

{
  FUN_1001d3dec(param_1 + 0x8ce0,param_3 != 0,param_2);
  return;
}




void FUN_1002bcc24(long param_1)

{
  FUN_1001d3578(param_1 + 0xb868);
  return;
}




void FUN_1002bcc30(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_38;
  
  lVar1 = param_1 + 0x2e68;
  FUN_100642bd8(lVar1,param_2,1);
  FUN_10064e4dc(param_2,0xbe00000000);
  local_60 = (code *)CONCAT62(local_60._2_6_,5);
  FUN_10064e5b8(param_2,&local_60);
  plVar3 = (long *)FUN_10064e5a0(lVar1);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_2,0,2);
  plVar3 = (long *)FUN_10064e5a0(lVar1);
  (**(code **)(*plVar3 + 0x70))(plVar3,0xf);
  iVar2 = FUN_100642da8(lVar1);
  local_40 = (ulong)(iVar2 - 1);
  local_38 = DAT_101d91884;
  local_60 = FUN_1002bcd08;
  local_50 = 0;
  uStack_48 = 0;
  lStack_58 = param_1;
  FUN_10001554c(param_2 + 8,&local_60);
  return;
}




void FUN_1002bcd08(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001002bcd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))(*(long **)(param_1 + 0xd8),in_x4);
  return;
}




void FUN_1002bcd1c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined2 local_28 [4];
  
  param_1 = param_1 + 0x2f20;
  FUN_100642bd8(param_1,param_2,1);
  FUN_10064e4dc(param_2,0xbe00000000);
  local_28[0] = 5;
  FUN_10064e5b8(param_2,local_28);
  plVar1 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2,0,2);
  plVar1 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar1 + 0x70))(plVar1,0xf);
  return;
}




void FUN_1002bcdac(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x2e50);
  while (plVar4 != (long *)(param_1 + 0x2e58)) {
    if (plVar4[5] != 0) {
      FUN_1001d19d4();
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar2 = plVar4 + 2;
      bVar1 = *(long **)*plVar2 != plVar4;
      plVar4 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar4 = (long *)*plVar2;
        } while (*plVar4 != lVar3);
      }
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}




void FUN_1002bce34(long param_1)

{
  FUN_1001d46fc(param_1 + 0x1588);
  return;
}




void FUN_1002bce40(long param_1)

{
  FUN_10064e32c(param_1 + 0xe0);
  return;
}




undefined8 FUN_1002bce48(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && (*(uint *)(plVar2 + 4) <= uVar1)) {
      FUN_1002bcea8();
      return 1;
    }
  }
  return 0;
}




long * FUN_1002bcea8(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




long * FUN_1002bcf3c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  *puVar9 = &PTR_thunk_FUN_1002bdaa4_101485aa8;
  puVar9 = puVar9 + 0x18;
  thunk_FUN_100650e64(puVar9);
  plVar12 = param_1 + 0x3e;
  FUN_10064e264(plVar12);
  plVar1 = param_1 + 0x55;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x6c;
  thunk_FUN_100184f78(plVar2);
  plVar3 = param_1 + 0x40a;
  thunk_FUN_100184f78(plVar3);
  plVar4 = param_1 + 0x7a8;
  thunk_FUN_1002eca3c(plVar4,0);
  plVar5 = param_1 + 0x8f1;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x917;
  thunk_FUN_1001c0c34(plVar6,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  uVar10 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar10);
  uVar10 = FUN_10064e5a0(param_1);
  FUN_10064a8b0(uVar10,200,0x14,200,0x14);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x78))(plVar11,0,0);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x60))(plVar11,puVar9,10);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x78))(plVar11,0,0);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x60))(plVar11,plVar12,10);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x70))(plVar12,0x14);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar1,10);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar4,0xc);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x70))(plVar12,4);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar5,9);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x78))(plVar12,0,0);
  FUN_100651038(puVar9,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_LOGIN_PROMPT",0);
  FUN_1006513c0(puVar9,uVar10);
  FUN_1006515e0(puVar9,1);
  FUN_1001b05dc(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_USER_DEFAULT",0);
  FUN_100185730(plVar2,uVar10);
  FUN_100185e1c(0xc1200000,plVar2);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  uVar13 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_1001afd98(plVar2,uVar10,uVar13,&DAT_101d91650,0,1,0,0,0,1);
  uVar7 = DAT_101dbd4ac;
  local_68 = DAT_101dbd4ac;
  local_90 = FUN_1002bd59c;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6d,&local_90);
  uVar8 = DAT_101dbd4b0;
  local_68 = DAT_101dbd4b0;
  local_90 = FUN_1002bd59c;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6d,&local_90);
  FUN_1001b05dc(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_PASS_DEFAULT",0);
  FUN_100185730(plVar3,uVar10);
  FUN_100185e1c(0xc1200000,plVar3);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  uVar13 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_PASS_MESSAGE",0);
  FUN_1001afd98(plVar3,uVar10,uVar13,&DAT_101d91650,1,0,0,0,0,0);
  local_68 = uVar7;
  local_90 = FUN_1002bd59c;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x40b,&local_90);
  local_68 = uVar8;
  local_90 = FUN_1002bd59c;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x40b,&local_90);
  FUN_1002ecc7c(plVar4,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
  FUN_1002ecce4(plVar4,uVar10);
  FUN_1002ebee0(0x42900000,0x41400000,plVar4);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1002bd814;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x7a9,&local_90);
  FUN_100530068(plVar4,0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_FORGOT_PASSWORD_LINK",0);
  FUN_1006513c0(plVar5,uVar10);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xfffac832);
  FUN_100651460(plVar5,&local_90);
  *(uint *)((long)param_1 + 0x480c) = *(uint *)((long)param_1 + 0x480c) | 0x10;
  local_68 = DAT_101dbd460;
  local_90 = FUN_1002bd5ac;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1002bd5ac;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&local_90);
  *(uint *)((long)param_1 + 0x493c) = *(uint *)((long)param_1 + 0x493c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x920) != 1.5) || (*(float *)((long)param_1 + 0x4904) != 1.5)) {
    lVar14 = NEON_fmov(0x3fc00000,4);
    param_1[0x920] = lVar14;
    FUN_1000200a0(plVar6);
  }
  return param_1;
}




void FUN_1002bd59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002bd8e0(param_1,param_4,param_5);
  return;
}




void thunk_FUN_1002bd814(long param_1)

{
  undefined8 uVar1;
  void *pvStack_50;
  undefined8 uStack_48;
  long lStack_40;
  void *pvStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  pvStack_38 = (void *)0x0;
  uStack_30 = 0;
  lStack_28 = 0;
  pvStack_50 = (void *)0x0;
  uStack_48 = 0;
  lStack_40 = 0;
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x540);
  FUN_1004e357c(uVar1,&pvStack_38);
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x23c0) & 1) * 0x130 + 0x2230);
  FUN_1004e357c(uVar1,&pvStack_50);
  FUN_100530068(param_1 + 0x3d40,0);
  FUN_1002bd728(param_1,1);
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),&pvStack_38,&pvStack_50);
  if (lStack_40 < 0) {
    operator_delete(pvStack_50);
  }
  if (lStack_28 < 0) {
    operator_delete(pvStack_38);
  }
  return;
}




void FUN_1002bd5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002bd5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




long * thunk_FUN_1002bcf3c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  puVar9[0x17] = 0;
  *puVar9 = &PTR_thunk_FUN_1002bdaa4_101485aa8;
  puVar9 = puVar9 + 0x18;
  thunk_FUN_100650e64(puVar9);
  plVar12 = param_1 + 0x3e;
  FUN_10064e264(plVar12);
  plVar1 = param_1 + 0x55;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x6c;
  thunk_FUN_100184f78(plVar2);
  plVar3 = param_1 + 0x40a;
  thunk_FUN_100184f78(plVar3);
  plVar4 = param_1 + 0x7a8;
  thunk_FUN_1002eca3c(plVar4,0);
  plVar5 = param_1 + 0x8f1;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x917;
  thunk_FUN_1001c0c34(plVar6,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  uVar10 = thunk_FUN_10064de70();
  FUN_10064e524(param_1,uVar10);
  uVar10 = FUN_10064e5a0(param_1);
  FUN_10064a8b0(uVar10,200,0x14,200,0x14);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x78))(plVar11,0,0);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x60))(plVar11,puVar9,10);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x78))(plVar11,0,0);
  plVar11 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar11 + 0x60))(plVar11,plVar12,10);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x70))(plVar12,0x14);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar1,10);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar4,0xc);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x70))(plVar12,4);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar5,9);
  plVar12 = (long *)FUN_10064e5a0(param_1);
  (**(code **)(*plVar12 + 0x78))(plVar12,0,0);
  FUN_100651038(puVar9,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_LOGIN_PROMPT",0);
  FUN_1006513c0(puVar9,uVar10);
  FUN_1006515e0(puVar9,1);
  FUN_1001b05dc(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_USER_DEFAULT",0);
  FUN_100185730(plVar2,uVar10);
  FUN_100185e1c(0xc1200000,plVar2);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  uVar13 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_1001afd98(plVar2,uVar10,uVar13,&DAT_101d91650,0,1,0,0,0,1);
  uVar7 = DAT_101dbd4ac;
  uStack_68 = DAT_101dbd4ac;
  pcStack_90 = FUN_1002bd59c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6d,&pcStack_90);
  uVar8 = DAT_101dbd4b0;
  uStack_68 = DAT_101dbd4b0;
  pcStack_90 = FUN_1002bd59c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x6d,&pcStack_90);
  FUN_1001b05dc(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_PASS_DEFAULT",0);
  FUN_100185730(plVar3,uVar10);
  FUN_100185e1c(0xc1200000,plVar3);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  uVar13 = FUN_1004e0150("MAIN_PROFILE_LOGIN_TEXTENTRY_PASS_MESSAGE",0);
  FUN_1001afd98(plVar3,uVar10,uVar13,&DAT_101d91650,1,0,0,0,0,0);
  uStack_68 = uVar7;
  pcStack_90 = FUN_1002bd59c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x40b,&pcStack_90);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002bd59c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x40b,&pcStack_90);
  FUN_1002ecc7c(plVar4,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
  FUN_1002ecce4(plVar4,uVar10);
  FUN_1002ebee0(0x42900000,0x41400000,plVar4);
  uStack_68 = DAT_101d91884;
  pcStack_90 = thunk_FUN_1002bd814;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x7a9,&pcStack_90);
  FUN_100530068(plVar4,0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  uVar10 = FUN_1004e0150("MAIN_PROFILE_FORGOT_PASSWORD_LINK",0);
  FUN_1006513c0(plVar5,uVar10);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xfffac832);
  FUN_100651460(plVar5,&pcStack_90);
  *(uint *)((long)param_1 + 0x480c) = *(uint *)((long)param_1 + 0x480c) | 0x10;
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_1002bd5ac;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&pcStack_90);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_1002bd5ac;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8f2,&pcStack_90);
  *(uint *)((long)param_1 + 0x493c) = *(uint *)((long)param_1 + 0x493c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x920) != 1.5) || (*(float *)((long)param_1 + 0x4904) != 1.5)) {
    lVar14 = NEON_fmov(0x3fc00000,4);
    param_1[0x920] = lVar14;
    FUN_1000200a0(plVar6);
  }
  return param_1;
}




void FUN_1002bd5c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 local_60 [4];
  undefined8 local_58;
  
  local_58 = 0;
  lVar1 = param_1 + 0x360;
  FUN_1006569f0(lVar1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x1e0,(long)&local_58 + 4,
                &local_58);
  lVar2 = param_1 + 0x1f0;
  FUN_10064e4dc(lVar2,(ulong)(uint)(int)((float)local_58 * 1.4) << 0x20);
  local_60[0] = 0x17;
  FUN_10064e5b8(lVar2,local_60);
  lVar3 = param_1 + 0x2a8;
  FUN_10064e4dc(lVar3,(ulong)(uint)(int)((float)local_58 * 1.4) << 0x20);
  local_60[0] = 0x17;
  FUN_10064e5b8(lVar3,local_60);
  FUN_10064e32c(param_1);
  uVar4 = FUN_10064e3cc(lVar2);
  FUN_10064e3cc(lVar2);
  FUN_1001853c0(uVar4,lVar1);
  FUN_10064e3cc(lVar3);
  FUN_1001853c0(uVar4,param_1 + 0x2050);
  FUN_10064e5ec(0,0,lVar1,7,lVar2,7);
  FUN_10064e5ec(0,0,param_1 + 0x2050,7,lVar3,7);
  FUN_10064e5ec(0,0,param_1 + 0x48b8,8,param_1 + 0x3d40,8);
  return;
}




void FUN_1002bd728(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x493c) = *(uint *)(param_1 + 0x493c) & 0xfffffffb | uVar3;
  lVar1 = param_1 + 0x3d40;
  FUN_100530068(lVar1,param_2 ^ 1);
  if (((param_2 ^ 1) & 1) == 0) {
    FUN_1001c0e10();
    FUN_1002ecce4(lVar1,&DAT_101d91650);
    uVar3 = *(uint *)(param_1 + 0x3dc4);
    if ((uVar3 & 0x7f80) == 0x6600) {
      return;
    }
    uVar3 = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
  }
  else {
    FUN_1001c102c(param_1 + 0x48b8);
    uVar2 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
    FUN_1002ecce4(lVar1,uVar2);
    if ((~*(uint *)(param_1 + 0x3dc4) & 0x7f80) == 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x3dc4) | 0x7f80;
  }
  *(uint *)(param_1 + 0x3dc4) = uVar3;
  FUN_1000200a0(lVar1);
  return;
}




void FUN_1002bd814(long param_1)

{
  undefined8 uVar1;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x540);
  FUN_1004e357c(uVar1,&local_38);
  uVar1 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x23c0) & 1) * 0x130 + 0x2230);
  FUN_1004e357c(uVar1,&local_50);
  FUN_100530068(param_1 + 0x3d40,0);
  FUN_1002bd728(param_1,1);
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),&local_38,&local_50);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_1002bd8e0(undefined8 param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  
  if (((param_3 & 1) != 0) &&
     (((uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4e4), (uVar1 & 1) != 0 ||
       (DAT_101dbd4e4 == DAT_101dbd450)) && (param_2[4] != 0)))) {
    FUN_1001b0734(param_2[4],1);
  }
  FUN_1002bd958(param_1);
  return;
}




uint FUN_1002bd958(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x360;
  FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x1e0);
  uVar2 = FUN_1004e3624();
  if (uVar2 != 0) {
    FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x1e0);
    iVar3 = FUN_1004e3624();
    if (iVar3 != 0) {
      FUN_100185630(lVar1,1);
      uVar5 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_100185de8(lVar1,uVar5);
    }
  }
  lVar1 = param_1 + 0x2050;
  FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x23c0) & 1) * 0x130 + 0x1e0);
  uVar4 = FUN_1004e3624();
  if (uVar4 != 0) {
    FUN_100655b6c(lVar1 + ((ulong)*(byte *)(param_1 + 0x23c0) & 1) * 0x130 + 0x1e0);
    iVar3 = FUN_1004e3624();
    if (iVar3 != 0) {
      FUN_100185630(lVar1,1);
      uVar5 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_100185de8(lVar1,uVar5);
    }
  }
  uVar2 = (uVar2 | uVar4) ^ 1;
  FUN_100530068(param_1 + 0x3d40,uVar2);
  return uVar2;
}




void thunk_FUN_1002bdaa4(void)

{
  FUN_1002bdaa4();
  return;
}




void FUN_1002bda90(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002bdaa4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002bdaa4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1002bdaa4_101485aa8;
  param_1[0x917] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x4d30) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x4de8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x4e00);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x4d30);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x917);
  thunk_FUN_100651068(param_1 + 0x8f1);
  param_1[0x7a8] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x8c9);
  FUN_1002ebc50(param_1 + 0x7a8);
  param_1[0x40a] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x7a2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a2]);
    param_1[0x7a2] = 0;
    param_1[0x7a1] = 0;
  }
  if ((void *)param_1[0x7a0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a0]);
    param_1[0x7a0] = 0;
    param_1[0x79f] = 0;
  }
  if ((void *)param_1[0x79e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x79e]);
    param_1[0x79e] = 0;
    param_1[0x79d] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x777);
  FUN_10064e2bc(param_1 + 0x75c);
  FUN_10064e2bc(param_1 + 0x741);
  FUN_10003bd40(param_1 + 0x48a);
  FUN_100186088(param_1 + 0x40a);
  param_1[0x6c] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x404] != (void *)0x0) {
    operator_delete__((void *)param_1[0x404]);
    param_1[0x404] = 0;
    param_1[0x403] = 0;
  }
  if ((void *)param_1[0x402] != (void *)0x0) {
    operator_delete__((void *)param_1[0x402]);
    param_1[0x402] = 0;
    param_1[0x401] = 0;
  }
  if ((void *)param_1[0x400] != (void *)0x0) {
    operator_delete__((void *)param_1[0x400]);
    param_1[0x400] = 0;
    param_1[0x3ff] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3d9);
  FUN_10064e2bc(param_1 + 0x3be);
  FUN_10064e2bc(param_1 + 0x3a3);
  FUN_10003bd40(param_1 + 0xec);
  FUN_100186088(param_1 + 0x6c);
  thunk_FUN_10064e2bc(param_1 + 0x55);
  thunk_FUN_10064e2bc(param_1 + 0x3e);
  thunk_FUN_100651068(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002bdcb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1002c15c8();
  puVar1[200] = 0;
  *puVar1 = &PTR_thunk_FUN_1002bdcf0_101485bf0;
  puVar1[0xca] = 0;
  puVar1[0xcc] = 0;
  puVar1[0xcb] = 0;
  *(uint *)((long)puVar1 + 0x84) = *(uint *)((long)puVar1 + 0x84) | 0x10;
  return;
}




void FUN_1002bdcf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1002bdcf0_101485bf0;
  if ((long *)param_1[0xca] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xca] + 8))();
  }
  param_1[0xca] = 0;
  if ((long *)param_1[0xcb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xcb] + 8))();
  }
  param_1[0xcb] = 0;
  lVar2 = FUN_10032834c();
  if (lVar2 != 0) {
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x38) != 0) {
      lVar3 = *(long *)(lVar2 + 0x40);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x28) != 0) {
      lVar3 = *(long *)(lVar2 + 0x30);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  FUN_1002c1eb8(param_1);
  return;
}




void thunk_FUN_1002bdcf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1002bdcf0_101485bf0;
  if ((long *)param_1[0xca] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xca] + 8))();
  }
  param_1[0xca] = 0;
  if ((long *)param_1[0xcb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xcb] + 8))();
  }
  param_1[0xcb] = 0;
  lVar2 = FUN_10032834c();
  if (lVar2 != 0) {
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x38) != 0) {
      lVar3 = *(long *)(lVar2 + 0x40);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x28) != 0) {
      lVar3 = *(long *)(lVar2 + 0x30);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  FUN_1002c1eb8(param_1);
  return;
}




void FUN_1002bddc8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002bdcf0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002bdddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_60;
  long lStack_58;
  long local_50;
  code *pcStack_48;
  
  if (*(char *)(param_1 + 0x667) == '\0') {
    *(undefined8 *)(param_1 + 0x648) = param_2;
    *(char *)(param_1 + 0x664) = (char)param_3;
    pvVar1 = operator_new(0x498);
    uVar2 = thunk_FUN_1002f2ab8(pvVar1,param_2,param_3,param_4);
    *(undefined8 *)(param_1 + 0x650) = uVar2;
    pvVar1 = operator_new(0x6748);
    uVar2 = thunk_FUN_1002f4164(pvVar1,param_2,param_3,param_4);
    *(undefined8 *)(param_1 + 0x658) = uVar2;
    FUN_1002c2110(param_1,*(undefined8 *)(param_1 + 0x650),pvVar1);
    lVar3 = FUN_10032834c();
    if (lVar3 != 0) {
      lVar3 = FUN_10032834c();
      local_60 = 0;
      pcStack_48 = FUN_1002be9b8;
      lStack_58 = param_1;
      local_50 = param_1;
      FUN_100207ae8(lVar3 + 0x38,&local_60);
      lVar3 = FUN_10032834c();
      local_60 = 0;
      pcStack_48 = FUN_1002be9cc;
      lStack_58 = param_1;
      local_50 = param_1;
      FUN_100207ae8(lVar3 + 0x28,&local_60);
    }
    *(undefined1 *)(param_1 + 0x667) = 1;
  }
  return;
}




void FUN_1002bdec8(long *param_1)

{
  FUN_1002c205c();
                    /* WARNING: Could not recover jumptable at 0x0001002bdef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c0))(param_1,1);
  return;
}




void FUN_1002bdef8(long *param_1)

{
  FUN_1002c2074();
                    /* WARNING: Could not recover jumptable at 0x0001002bdf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c0))(param_1,0);
  return;
}




void FUN_1002bdf28(long param_1)

{
  FUN_1002c2088();
  FUN_1001a87e8(*(undefined8 *)(param_1 + 0x658));
  return;
}




void FUN_1002bdf4c(long param_1)

{
  FUN_1002f6a18(*(undefined8 *)(param_1 + 0x658));
  return;
}




void FUN_1002bdf54(long param_1)

{
  FUN_1002f6a88(*(undefined8 *)(param_1 + 0x658));
  return;
}




void FUN_1002bdf5c(long param_1)

{
  if (*(long *)(param_1 + 0x658) != 0) {
    FUN_1002f6c78();
    return;
  }
  return;
}




void FUN_1002bdf6c(long param_1)

{
  FUN_1002f34cc(*(undefined8 *)(param_1 + 0x650));
  return;
}




void FUN_1002bdf74(long param_1)

{
  FUN_1002f68a0(*(undefined8 *)(param_1 + 0x658));
  return;
}




void FUN_1002bdf7c(long param_1)

{
  FUN_1002f64ac(*(undefined8 *)(param_1 + 0x658));
  return;
}




void FUN_1002bdf84(long param_1,int param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x665) == '\0') {
      return;
    }
    FUN_1002f3474(*(undefined8 *)(param_1 + 0x650));
    uVar1 = 0;
    goto LAB_1002be004;
  }
  if (*(char *)(param_1 + 0x665) != '\0') {
    return;
  }
  FUN_1002f321c(*(undefined8 *)(param_1 + 0x650));
  lVar2 = *(long *)(param_1 + 0x650);
  if (*(char *)(lVar2 + 0x457) < '\0') {
    if (*(long *)(lVar2 + 0x448) != 0) goto LAB_1002bdfdc;
  }
  else if (*(char *)(lVar2 + 0x457) != '\0') {
LAB_1002bdfdc:
    if (*(char *)(lVar2 + 0x46f) < '\0') {
      if (*(long *)(lVar2 + 0x460) != 0) goto LAB_1002bdfec;
    }
    else if (*(char *)(lVar2 + 0x46f) != '\0') {
LAB_1002bdfec:
      FUN_1002f6024(*(undefined8 *)(param_1 + 0x658),*(undefined8 *)(param_1 + 0x648),lVar2 + 0x440,
                    lVar2 + 0x458);
    }
  }
  uVar1 = 1;
LAB_1002be004:
  *(undefined1 *)(param_1 + 0x665) = uVar1;
  return;
}




void FUN_1002be020(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(param_1 + 0x658) + 0x6744) = param_2;
  return;
}




bool FUN_1002be030(long param_1)

{
  if (*(uint **)(param_1 + 0x648) != (uint *)0x0) {
    return (**(uint **)(param_1 + 0x648) & 0xfffffffe) == 4;
  }
  return false;
}




void FUN_1002be054(long param_1)

{
  FUN_1002f5f20(*(undefined8 *)(param_1 + 0x658));
  return;
}




void FUN_1002be05c(long *param_1)

{
  (**(code **)(*param_1 + 0x1a8))(param_1,0);
  FUN_1002c237c(param_1);
  return;
}




void FUN_1002be08c(long param_1)

{
  FUN_1002c2798();
  FUN_1002f6ce8(*(undefined8 *)(param_1 + 0x658),0);
  return;
}




void FUN_1002be0b4(long *param_1)

{
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/tap.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x0001002be0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x238))(param_1);
  return;
}




void FUN_1002be0f4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_1002c2840();
  uVar1 = FUN_100644a94("CardReveal");
  FUN_100644aec(auStack_40,uVar1,**(undefined4 **)(param_1 + 0x648));
  FUN_100644c34(*(undefined8 *)(param_1 + 0x658),auStack_40,1);
  return;
}




void FUN_1002be150(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_1002c2800();
  *(undefined4 *)(param_1 + 0x660) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x666) = 0;
  uVar1 = FUN_100644a94("CardInspect");
  FUN_100644aec(auStack_40,uVar1,**(undefined4 **)(param_1 + 0x648));
  FUN_100644c34(*(undefined8 *)(param_1 + 0x658),auStack_40,1);
  (**(code **)(**(long **)(param_1 + 0x658) + 0x158))(0x3e4ccccd,*(long **)(param_1 + 0x658),0);
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  return;
}




void FUN_1002be1e8(long param_1)

{
  FUN_1002c262c();
                    /* WARNING: Could not recover jumptable at 0x0001002be21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x180))(0x3e4ccccd,*(undefined4 *)(param_1 + 0x450));
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1002be220(long param_1)

{
  long *******ppppppplVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  long *******ppppppplVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  char *pcVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  float fVar21;
  void *local_a8 [2];
  char local_91;
  undefined8 *******local_90;
  size_t local_88;
  undefined8 uStack_80;
  long *******local_78;
  ulong uStack_70;
  byte local_61;
  
  if (*(long *)(param_1 + 0x648) == 0) {
    return;
  }
  fVar21 = *(float *)(param_1 + 0x660) - *(float *)(param_1 + 0x620);
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  *(float *)(param_1 + 0x660) = fVar21;
  if (fVar21 != 0.0) {
    return;
  }
  if (*(char *)(param_1 + 0x666) != '\0') {
    return;
  }
  FUN_10001549c(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x648) + 8));
  ppppppplVar6 = local_78;
  if (-1 < (char)local_61) {
    uStack_70 = (ulong)local_61;
    ppppppplVar6 = (long *******)&local_78;
  }
  ppppppplVar1 = (long *******)((long)ppppppplVar6 + uStack_70);
  uVar17 = uStack_70;
  ppppppplVar10 = ppppppplVar6;
  while (((ppppppplVar11 = ppppppplVar1, 9 < (long)uVar17 &&
          (ppppppplVar10 = _memchr(ppppppplVar10,99,uVar17 - 9), ppppppplVar10 != (long *******)0x0)
          ) && (ppppppplVar11 = ppppppplVar10,
               *ppppppplVar10 != (long ******)0x696b735f64726163 ||
               *(short *)(ppppppplVar10 + 1) != 0x5f6e))) {
    ppppppplVar10 = (long *******)((long)ppppppplVar10 + 1);
    uVar17 = (long)ppppppplVar1 - (long)ppppppplVar10;
  }
  ppppppplVar10 = ppppppplVar6;
  while (((ppppppplVar12 = ppppppplVar1, 8 < (long)uStack_70 &&
          (ppppppplVar10 = _memchr(ppppppplVar10,99,uStack_70 - 8),
          ppppppplVar10 != (long *******)0x0)) &&
         (ppppppplVar12 = ppppppplVar10,
         *ppppppplVar10 != (long ******)0x7265685f64726163 || *(char *)(ppppppplVar10 + 1) != 'o')))
  {
    ppppppplVar10 = (long *******)((long)ppppppplVar10 + 1);
    uStack_70 = (long)ppppppplVar1 - (long)ppppppplVar10;
  }
  bVar7 = ppppppplVar12 != ppppppplVar1;
  bVar8 = (long)ppppppplVar12 - (long)ppppppplVar6 != -1;
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar17 = DAT_101d911a0;
    pbVar19 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_1002be9ac();
    }
  }
  else {
    uVar17 = (ulong)DAT_101d911a8._7_1_;
    pbVar19 = (byte *)&DAT_101d91198;
  }
  if (uVar17 < 0x17) {
    pppppppuVar13 = &local_90;
    uStack_80 = CONCAT17((char)uVar17,(undefined7)uStack_80);
    if (uVar17 != 0) goto LAB_1002be3f0;
  }
  else {
    uVar20 = uVar17 + 0x10 & 0xfffffffffffffff0;
    pppppppuVar13 = operator_new(uVar20);
    uStack_80 = uVar20 | 0x8000000000000000;
    local_90 = pppppppuVar13;
    local_88 = uVar17;
LAB_1002be3f0:
    _memcpy(pppppppuVar13,pbVar19,uVar17);
  }
  *(undefined1 *)((long)pppppppuVar13 + uVar17) = 0;
  if (((ppppppplVar11 != ppppppplVar1 && ppppppplVar11 == ppppppplVar6) &&
      (*(char *)(param_1 + 0x664) == '\0')) && (lVar14 = FUN_10032bcd0(&local_78), lVar14 != 0)) {
    if (*(char *)(lVar14 + 0x35) == '\0') {
      iVar9 = *(int *)(lVar14 + 0x20);
      if (iVar9 == 3) {
        pcVar15 = "Tier_3_Skin_Unlocked";
      }
      else if (iVar9 == 2) {
        pcVar15 = "Tier_2_Skin_Unlocked";
      }
      else {
        if (iVar9 != 1) goto LAB_1002be410;
        pcVar15 = "Tier_1_Skin_Unlocked";
      }
    }
    else {
      pcVar15 = "Special_Edition_Skin_Purchased";
    }
    FUN_10001549c(local_a8,pcVar15);
    std::string::operator=((string *)&local_90,(string *)local_a8);
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
LAB_1002be410:
  switch(**(undefined4 **)(param_1 + 0x648)) {
  default:
    pcVar15 = "build://Sounds/Cards/reveal_common.mp3";
    break;
  case 1:
    FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/reveal_rare.mp3",0,0);
    pppppppuVar13 = local_90;
    uVar17 = uStack_80 >> 0x38;
    uVar16 = (uint)(byte)(uStack_80 >> 0x38);
    sVar2 = local_88;
    if (-1 < (long)uStack_80) {
      sVar2 = uVar17;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 != sVar3) goto LAB_1002be658;
    pppppppuVar4 = local_90;
    if (-1 < (long)uStack_80) {
      pppppppuVar4 = &local_90;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((long)uStack_80 < 0) {
      if ((sVar2 != 0) && (iVar9 = _memcmp(pppppppuVar4,pbVar19,sVar2), iVar9 != 0))
      goto LAB_1002be6ac;
    }
    else if (sVar2 != 0) {
      pppppppuVar13 = &local_90;
      if ((uint)*pbVar19 == ((uint)local_90 & 0xff)) {
        pbVar18 = (byte *)((ulong)&local_90 | 1);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_1002be730;
          bVar5 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar5 == *pbVar19);
        goto LAB_1002be658;
      }
      goto LAB_1002be6ac;
    }
LAB_1002be730:
    if (bVar7 && bVar8) {
LAB_1002be7a8:
      pcVar15 = "build://Sounds/UI.assetbundle/ui_tutorial_frontend_hero_unlock.mp3";
    }
    else {
      iVar9 = FUN_10016c2fc();
      if (((iVar9 == 0) || (lVar14 = FUN_10016c2f0(), *(int *)(lVar14 + 0x38) < 1)) ||
         (*(char *)(param_1 + 0x664) != '\0')) goto LAB_1002be6b4;
      pcVar15 = "build://Sounds/Cards/vo_vainglory_rare.mp3";
    }
    break;
  case 2:
    FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/reveal_epic.mp3",0,0);
    pppppppuVar13 = local_90;
    uVar17 = uStack_80 >> 0x38;
    uVar16 = (uint)(byte)(uStack_80 >> 0x38);
    sVar2 = local_88;
    if (-1 < (long)uStack_80) {
      sVar2 = uVar17;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 == sVar3) {
      pppppppuVar4 = local_90;
      if (-1 < (long)uStack_80) {
        pppppppuVar4 = &local_90;
      }
      pbVar19 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar19 = (byte *)&DAT_101d91198;
      }
      if ((long)uStack_80 < 0) {
        if ((sVar2 == 0) || (iVar9 = _memcmp(pppppppuVar4,pbVar19,sVar2), iVar9 == 0))
        goto LAB_1002be76c;
      }
      else {
        if (sVar2 == 0) {
LAB_1002be76c:
          if (bVar7 && bVar8) goto LAB_1002be7a8;
          if (*(char *)(param_1 + 0x664) != '\0') goto LAB_1002be6b4;
          pcVar15 = "build://Sounds/Cards/vo_vainglory_epic.mp3";
          break;
        }
        pppppppuVar13 = &local_90;
        if ((uint)*pbVar19 == ((uint)local_90 & 0xff)) {
          pbVar18 = (byte *)((ulong)&local_90 | 1);
          do {
            uVar17 = uVar17 - 1;
            pbVar19 = pbVar19 + 1;
            if (uVar17 == 0) goto LAB_1002be76c;
            bVar5 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar5 == *pbVar19);
          goto LAB_1002be658;
        }
      }
      goto LAB_1002be6ac;
    }
LAB_1002be658:
    pppppppuVar13 = local_90;
    if (uVar16 >> 7 == 0) {
      pppppppuVar13 = &local_90;
    }
    goto LAB_1002be6ac;
  case 3:
    FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/reveal_legendary.mp3",0,0);
    pppppppuVar13 = local_90;
    uVar17 = uStack_80 >> 0x38;
    uVar16 = (uint)(byte)(uStack_80 >> 0x38);
    sVar2 = local_88;
    if (-1 < (long)uStack_80) {
      sVar2 = uVar17;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 != sVar3) goto LAB_1002be658;
    pppppppuVar4 = local_90;
    if (-1 < (long)uStack_80) {
      pppppppuVar4 = &local_90;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((long)uStack_80 < 0) {
      if ((sVar2 == 0) || (iVar9 = _memcmp(pppppppuVar4,pbVar19,sVar2), iVar9 == 0))
      goto LAB_1002be790;
    }
    else {
      if (sVar2 == 0) {
LAB_1002be790:
        if (!bVar7 || !bVar8) {
          if (*(char *)(param_1 + 0x664) != '\0') goto LAB_1002be6b4;
          pcVar15 = "build://Sounds/Cards/vo_vainglory_legendary.mp3";
          break;
        }
        goto LAB_1002be7a8;
      }
      pppppppuVar13 = &local_90;
      if ((uint)*pbVar19 == ((uint)local_90 & 0xff)) {
        pbVar18 = (byte *)((ulong)&local_90 | 1);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_1002be790;
          bVar5 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar5 == *pbVar19);
        goto LAB_1002be658;
      }
    }
LAB_1002be6ac:
    FUN_1001e7a40(pppppppuVar13);
    goto LAB_1002be6b4;
  }
  FUN_1001e79b8(0x3f800000,pcVar15,0,0);
LAB_1002be6b4:
  *(undefined1 *)(param_1 + 0x666) = 1;
  if ((long)uStack_80 < 0) {
    operator_delete(local_90);
  }
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  return;
}




void FUN_1002be7d0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x658) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x658) + 0x6728) = param_2;
  }
  return;
}




void FUN_1002be7e0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x658);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb;
  }
  return;
}




void FUN_1002be7f8(float param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x658);
  if (lVar2 != 0) {
    bVar1 = false;
    if ((*(float *)(lVar2 + 0x48) == param_1) &&
       (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)) && !NAN(param_1))) {
      bVar1 = *(float *)(lVar2 + 0x4c) == param_1;
    }
    if (!bVar1) {
      *(float *)(lVar2 + 0x48) = param_1;
      *(float *)(lVar2 + 0x4c) = param_1;
      FUN_1000200a0();
      return;
    }
  }
  return;
}




void FUN_1002be81c(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x658);
  if (lVar1 != 0) {
    uVar2 = 4;
    if (param_2 == 0) {
      uVar2 = 0;
    }
    *(uint *)(lVar1 + 0x43d4) = *(uint *)(lVar1 + 0x43d4) & 0xfffffffb | uVar2;
  }
  return;
}




void FUN_1002be848(long param_1)

{
  if (*(long *)(param_1 + 0x658) != 0) {
    FUN_1002f6d1c();
    return;
  }
  return;
}




void FUN_1002be858(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_1002be89c;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_1002be89c:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x0001002be900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_1002be974(void)

{
  return;
}




void FUN_1002be978(void)

{
  return;
}




void FUN_1002be97c(void)

{
  return;
}




void FUN_1002be980(void)

{
  return;
}




void FUN_1002be984(void)

{
  return;
}




void FUN_1002be988(void)

{
  return;
}




void FUN_1002be98c(void)

{
  return;
}




void FUN_1002be990(void)

{
  return;
}




void FUN_1002be994(void)

{
  return;
}




void FUN_1002be998(void)

{
  return;
}




undefined8 FUN_1002be99c(void)

{
  return 1;
}




void FUN_1002be9a4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x450) = param_1;
  return;
}




void FUN_1002be9ac(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1002be9b8(long param_1)

{
  FUN_1002be858(param_1 + 0x2f0,1,0,0);
  return;
}




void FUN_1002be9cc(long param_1)

{
  FUN_1002be858(param_1 + 0x2f0,1,0,0);
  return;
}




long FUN_1002be9e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  bool bVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  uint uVar30;
  float fVar31;
  undefined1 *local_88;
  void *local_80;
  
  puVar28 = (undefined8 *)FUN_1002c15c8();
  puVar28[200] = 0;
  *puVar28 = &PTR_thunk_FUN_1002bf428_101485e40;
  puVar28 = puVar28 + 0xc9;
  thunk_FUN_100183990(puVar28,0);
  lVar1 = param_1 + 0xc38;
  FUN_100653ff8();
  lVar2 = param_1 + 0xd40;
  thunk_FUN_100652c08();
  lVar3 = param_1 + 0xe30;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0xe30) = &PTR_thunk_FUN_10064221c_10144b7e8;
  lVar4 = param_1 + 0xeb8;
  FUN_1006421a8(lVar4);
  *(undefined ***)(param_1 + 0xeb8) = &PTR_thunk_FUN_10064221c_10144b7e8;
  lVar5 = param_1 + 0xf40;
  thunk_FUN_100650e64();
  lVar6 = param_1 + 0x1070;
  thunk_FUN_100655644(lVar6);
  lVar7 = param_1 + 0x11c8;
  thunk_FUN_100655644(lVar7);
  lVar8 = param_1 + 0x1320;
  thunk_FUN_100650e64();
  lVar9 = param_1 + 0x1450;
  thunk_FUN_100655644(lVar9);
  thunk_FUN_100652c08();
  lVar10 = param_1 + 0x1698;
  thunk_FUN_100650e64();
  lVar11 = param_1 + 0x17c8;
  thunk_FUN_100650e64();
  lVar12 = param_1 + 0x18f8;
  thunk_FUN_100655644(lVar12);
  lVar13 = param_1 + 0x1a50;
  thunk_FUN_10064f204(lVar13);
  lVar14 = param_1 + 0x1b98;
  thunk_FUN_100652c08();
  lVar15 = param_1 + 0x1c88;
  thunk_FUN_100652c08();
  lVar16 = param_1 + 0x1d78;
  thunk_FUN_100652c08();
  lVar17 = param_1 + 0x1e68;
  thunk_FUN_100650e64();
  lVar18 = param_1 + 0x1f98;
  thunk_FUN_100650e64();
  lVar19 = param_1 + 0x20c8;
  thunk_FUN_10064f204(lVar19);
  lVar20 = param_1 + 0x2210;
  thunk_FUN_1001cb988(lVar20);
  lVar21 = param_1 + 0x4340;
  thunk_FUN_100650e64();
  lVar22 = param_1 + 0x4470;
  thunk_FUN_10064f204(lVar22);
  *(undefined8 *)(param_1 + 0x45c0) = 0;
  *(undefined8 *)(param_1 + 0x45b8) = 0;
  fVar31 = 0.8;
  *(undefined8 *)(param_1 + 0x45c8) = 0x434800003f4ccccd;
  *(undefined8 *)(param_1 + 0x45e0) = 0;
  *(undefined8 *)(param_1 + 0x45d8) = 0;
  *(undefined8 *)(param_1 + 0x45d0) = 0;
  *(undefined8 *)(param_1 + 0x45e8) = 4;
  *(undefined4 *)(param_1 + 0x45ef) = 0;
  FUN_100642bd8(param_1 + 0xb8,lVar4,1);
  FUN_100642bd8(lVar4,lVar5,1);
  FUN_100642bd8(lVar4,lVar6,1);
  FUN_100655930(lVar6,lVar7,1);
  FUN_100655930(lVar7,lVar8,1);
  FUN_100655930(lVar7,lVar9,1);
  FUN_100655930(lVar9,param_1 + 0x15a8,1);
  FUN_100655930(lVar9,lVar10,1);
  FUN_100655930(lVar6,lVar11,1);
  FUN_100655930(lVar6,lVar12,1);
  FUN_100655930(lVar12,lVar13,1);
  FUN_10064f31c(lVar13,lVar14,1);
  FUN_10064f31c(lVar13,lVar15,1);
  FUN_10064f31c(lVar13,lVar16,1);
  FUN_100655930(lVar12,lVar17,1);
  FUN_100655930(lVar12,lVar18,1);
  FUN_100655930(lVar12,lVar19,1);
  FUN_10064f324(lVar19,lVar20,1);
  FUN_100642bd8(lVar4,lVar22,1);
  FUN_10064f31c(lVar22,puVar28,1);
  FUN_100642bd8(lVar4,lVar3,1);
  FUN_100642bd8(lVar3,lVar2,1);
  FUN_100642bd8(lVar3,lVar1,1);
  FUN_100642bd8(lVar4,lVar21,1);
  iVar27 = FUN_100126c88();
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar27 == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar27 == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_100651594(lVar5,*ppuVar25,&DAT_10115a168);
  FUN_10065165c(lVar5,1);
  FUN_1006516bc(lVar5,&DAT_10115a164);
  local_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar5,&local_88);
  FUN_100651594(lVar8,*ppuVar23,&DAT_10115a168);
  if ((*(uint *)(param_1 + 0x13a4) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x13a4) = *(uint *)(param_1 + 0x13a4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(lVar8);
  }
  FUN_10065165c(lVar8,1);
  FUN_1006516bc(lVar8,&DAT_10115a164);
  local_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar8,&local_88);
  FUN_100652cac(param_1 + 0x15a8,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_lock");
  bVar26 = iVar27 == 0;
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (bVar26) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (bVar26) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (bVar26) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(lVar10,*ppuVar25,&DAT_10115a168);
  uVar29 = FUN_1004e0150("MENU_TALENTS_LABEL_UNDISCOVERED",0);
  FUN_1006513c0(lVar10,uVar29);
  FUN_10065165c(lVar10,1);
  FUN_1006516bc(lVar10,&DAT_10115a164);
  local_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar10,&local_88);
  FUN_100651594(lVar11,*ppuVar23,&DAT_10115a168);
  uVar29 = FUN_1004e0150("MENU_TALENTS_LABEL_UNLOCK_NOW",0);
  FUN_1006513c0(lVar11,uVar29);
  FUN_10065165c(lVar11,1);
  FUN_1006516bc(lVar11,&DAT_10115a164);
  local_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar11,&local_88);
  FUN_100652cac(lVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_new_banner_end");
  FUN_100652dd4(lVar14,&DAT_101158980,2);
  uVar29 = FUN_100652e60(lVar14);
  FUN_100652e60(lVar14);
  fVar31 = fVar31 + 40.0;
  FUN_10064e47c(uVar29,fVar31,lVar14);
  *(uint *)(param_1 + 0x1c1c) = *(uint *)(param_1 + 0x1c1c) & 0xffffffbf;
  FUN_100652cac(lVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_new_banner_stretch");
  FUN_100652dd4(lVar15,&DAT_101158980,2);
  uVar29 = FUN_100652e60(lVar15);
  FUN_100652e60(lVar15);
  fVar31 = fVar31 + 40.0;
  FUN_10064e47c(uVar29,fVar31,lVar15);
  *(uint *)(param_1 + 0x1d0c) = *(uint *)(param_1 + 0x1d0c) & 0xffffffbf;
  FUN_100652cac(lVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_new_banner_end");
  *(byte *)(param_1 + 0x1e50) = *(byte *)(param_1 + 0x1e50) | 1;
  FUN_100652dd4(lVar16,&DAT_101158980,2);
  uVar29 = FUN_100652e60(lVar16);
  FUN_100652e60(lVar16);
  FUN_10064e47c(uVar29,fVar31 + 40.0,lVar16);
  *(uint *)(param_1 + 0x1dfc) = *(uint *)(param_1 + 0x1dfc) & 0xffffffbf;
  *(uint *)(param_1 + 0x1ad4) = *(uint *)(param_1 + 0x1ad4) & 0xfffffffb;
  FUN_100651594(lVar17,*ppuVar24,&DAT_10115a168);
  uVar30 = *(uint *)(param_1 + 0x1eec);
  if ((uVar30 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x1eec) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5900;
    FUN_1000200a0(lVar17);
  }
  FUN_10065165c(lVar17,1);
  FUN_1006516bc(lVar17,&DAT_10115a164);
  local_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar17,&local_88);
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar27 == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(lVar18,*ppuVar25,&DAT_10115a168);
  FUN_1004e3120(&local_88,"+1");
  FUN_1006513c0(lVar18,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  uVar30 = *(uint *)(param_1 + 0x201c);
  if ((uVar30 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x201c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5900;
    FUN_1000200a0(lVar18);
  }
  FUN_100651460(lVar18,&DAT_101158984);
  *(uint *)(param_1 + 0x201c) = *(uint *)(param_1 + 0x201c) & 0xfffffffb;
  FUN_1001cbb94(0x43c80000,0x42600000,lVar20,0,0,0,1);
  *(uint *)(param_1 + 0x2294) = *(uint *)(param_1 + 0x2294) & 0xffffffbf;
  FUN_10064e47c(0x43c80000,0x42600000,lVar19);
  FUN_10064f308(0,0x3f000000,lVar19);
  FUN_100652cac(lVar2,PTR_s_build___Frames_tga_101854a00,"frame_0_star");
  if ((*(float *)(param_1 + 0xd90) != (float)DAT_101873a40) ||
     (*(float *)(param_1 + 0xd94) != DAT_101873a40._4_4_)) {
    *(ulong *)(param_1 + 0xd90) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar2);
  }
  if ((*(float *)(param_1 + 0xd88) != 1.65) || (*(float *)(param_1 + 0xd8c) != 1.65)) {
    *(undefined8 *)(param_1 + 0xd88) = 0x3fd333333fd33333;
    FUN_1000200a0(lVar2);
  }
  FUN_10065403c(lVar1,PTR_s_build___Frames_tga_101854a00,"frame_mask");
  FUN_100652dfc(lVar1,0xb);
  if ((*(float *)(param_1 + 0xc88) != (float)DAT_101873a40) ||
     (*(float *)(param_1 + 0xc8c) != DAT_101873a40._4_4_)) {
    *(ulong *)(param_1 + 0xc88) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar1);
  }
  FUN_100652cdc(param_1 + 0xb18,"circle_button_question");
  uVar30 = *(uint *)(param_1 + 0x6cc);
  if ((uVar30 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x6cc) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5f80;
    FUN_1000200a0(puVar28);
    uVar30 = *(uint *)(param_1 + 0x6cc);
  }
  uVar30 = uVar30 & 0xffffffef;
  *(uint *)(param_1 + 0x6cc) = uVar30;
  if ((*(float *)(param_1 + 0x690) != 0.65) || (*(float *)(param_1 + 0x694) != 0.65)) {
    *(undefined8 *)(param_1 + 0x690) = 0x3f2666663f266666;
    FUN_1000200a0(puVar28);
    uVar30 = *(uint *)(param_1 + 0x6cc);
  }
  *(uint *)(param_1 + 0x6cc) = uVar30 & 0xfffffffb;
  if ((*(float *)(param_1 + 0xe78) != 0.5) || (*(float *)(param_1 + 0xe7c) != 0.5)) {
    *(undefined1 **)(param_1 + 0xe78) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar3);
  }
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar27 == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651038(lVar21,*ppuVar25);
  uVar30 = *(uint *)(param_1 + 0x43c4);
  if ((uVar30 & 0x7f80) != 0x7280) {
    *(uint *)(param_1 + 0x43c4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x7280;
    FUN_1000200a0(lVar21);
    uVar30 = *(uint *)(param_1 + 0x43c4);
  }
  *(uint *)(param_1 + 0x43c4) = uVar30 & 0xfffffffb;
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x4340) + 0x28))(lVar21,&local_88);
  FUN_1006515d0(lVar21,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  return param_1;
}




long thunk_FUN_1002be9e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  bool bVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  uint uVar30;
  float fVar31;
  undefined1 *puStack_88;
  void *pvStack_80;
  
  puVar28 = (undefined8 *)FUN_1002c15c8();
  puVar28[200] = 0;
  *puVar28 = &PTR_thunk_FUN_1002bf428_101485e40;
  puVar28 = puVar28 + 0xc9;
  thunk_FUN_100183990(puVar28,0);
  lVar1 = param_1 + 0xc38;
  FUN_100653ff8();
  lVar2 = param_1 + 0xd40;
  thunk_FUN_100652c08();
  lVar3 = param_1 + 0xe30;
  FUN_1006421a8();
  *(undefined ***)(param_1 + 0xe30) = &PTR_thunk_FUN_10064221c_10144b7e8;
  lVar4 = param_1 + 0xeb8;
  FUN_1006421a8(lVar4);
  *(undefined ***)(param_1 + 0xeb8) = &PTR_thunk_FUN_10064221c_10144b7e8;
  lVar5 = param_1 + 0xf40;
  thunk_FUN_100650e64();
  lVar6 = param_1 + 0x1070;
  thunk_FUN_100655644(lVar6);
  lVar7 = param_1 + 0x11c8;
  thunk_FUN_100655644(lVar7);
  lVar8 = param_1 + 0x1320;
  thunk_FUN_100650e64();
  lVar9 = param_1 + 0x1450;
  thunk_FUN_100655644(lVar9);
  thunk_FUN_100652c08();
  lVar10 = param_1 + 0x1698;
  thunk_FUN_100650e64();
  lVar11 = param_1 + 0x17c8;
  thunk_FUN_100650e64();
  lVar12 = param_1 + 0x18f8;
  thunk_FUN_100655644(lVar12);
  lVar13 = param_1 + 0x1a50;
  thunk_FUN_10064f204(lVar13);
  lVar14 = param_1 + 0x1b98;
  thunk_FUN_100652c08();
  lVar15 = param_1 + 0x1c88;
  thunk_FUN_100652c08();
  lVar16 = param_1 + 0x1d78;
  thunk_FUN_100652c08();
  lVar17 = param_1 + 0x1e68;
  thunk_FUN_100650e64();
  lVar18 = param_1 + 0x1f98;
  thunk_FUN_100650e64();
  lVar19 = param_1 + 0x20c8;
  thunk_FUN_10064f204(lVar19);
  lVar20 = param_1 + 0x2210;
  thunk_FUN_1001cb988(lVar20);
  lVar21 = param_1 + 0x4340;
  thunk_FUN_100650e64();
  lVar22 = param_1 + 0x4470;
  thunk_FUN_10064f204(lVar22);
  *(undefined8 *)(param_1 + 0x45c0) = 0;
  *(undefined8 *)(param_1 + 0x45b8) = 0;
  fVar31 = 0.8;
  *(undefined8 *)(param_1 + 0x45c8) = 0x434800003f4ccccd;
  *(undefined8 *)(param_1 + 0x45e0) = 0;
  *(undefined8 *)(param_1 + 0x45d8) = 0;
  *(undefined8 *)(param_1 + 0x45d0) = 0;
  *(undefined8 *)(param_1 + 0x45e8) = 4;
  *(undefined4 *)(param_1 + 0x45ef) = 0;
  FUN_100642bd8(param_1 + 0xb8,lVar4,1);
  FUN_100642bd8(lVar4,lVar5,1);
  FUN_100642bd8(lVar4,lVar6,1);
  FUN_100655930(lVar6,lVar7,1);
  FUN_100655930(lVar7,lVar8,1);
  FUN_100655930(lVar7,lVar9,1);
  FUN_100655930(lVar9,param_1 + 0x15a8,1);
  FUN_100655930(lVar9,lVar10,1);
  FUN_100655930(lVar6,lVar11,1);
  FUN_100655930(lVar6,lVar12,1);
  FUN_100655930(lVar12,lVar13,1);
  FUN_10064f31c(lVar13,lVar14,1);
  FUN_10064f31c(lVar13,lVar15,1);
  FUN_10064f31c(lVar13,lVar16,1);
  FUN_100655930(lVar12,lVar17,1);
  FUN_100655930(lVar12,lVar18,1);
  FUN_100655930(lVar12,lVar19,1);
  FUN_10064f324(lVar19,lVar20,1);
  FUN_100642bd8(lVar4,lVar22,1);
  FUN_10064f31c(lVar22,puVar28,1);
  FUN_100642bd8(lVar4,lVar3,1);
  FUN_100642bd8(lVar3,lVar2,1);
  FUN_100642bd8(lVar3,lVar1,1);
  FUN_100642bd8(lVar4,lVar21,1);
  iVar27 = FUN_100126c88();
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar27 == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar27 == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_100651594(lVar5,*ppuVar25,&DAT_10115a168);
  FUN_10065165c(lVar5,1);
  FUN_1006516bc(lVar5,&DAT_10115a164);
  puStack_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar5,&puStack_88);
  FUN_100651594(lVar8,*ppuVar23,&DAT_10115a168);
  if ((*(uint *)(param_1 + 0x13a4) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x13a4) = *(uint *)(param_1 + 0x13a4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(lVar8);
  }
  FUN_10065165c(lVar8,1);
  FUN_1006516bc(lVar8,&DAT_10115a164);
  puStack_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar8,&puStack_88);
  FUN_100652cac(param_1 + 0x15a8,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_lock");
  bVar26 = iVar27 == 0;
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (bVar26) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (bVar26) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (bVar26) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(lVar10,*ppuVar25,&DAT_10115a168);
  uVar29 = FUN_1004e0150("MENU_TALENTS_LABEL_UNDISCOVERED",0);
  FUN_1006513c0(lVar10,uVar29);
  FUN_10065165c(lVar10,1);
  FUN_1006516bc(lVar10,&DAT_10115a164);
  puStack_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar10,&puStack_88);
  FUN_100651594(lVar11,*ppuVar23,&DAT_10115a168);
  uVar29 = FUN_1004e0150("MENU_TALENTS_LABEL_UNLOCK_NOW",0);
  FUN_1006513c0(lVar11,uVar29);
  FUN_10065165c(lVar11,1);
  FUN_1006516bc(lVar11,&DAT_10115a164);
  puStack_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar11,&puStack_88);
  FUN_100652cac(lVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_new_banner_end");
  FUN_100652dd4(lVar14,&DAT_101158980,2);
  uVar29 = FUN_100652e60(lVar14);
  FUN_100652e60(lVar14);
  fVar31 = fVar31 + 40.0;
  FUN_10064e47c(uVar29,fVar31,lVar14);
  *(uint *)(param_1 + 0x1c1c) = *(uint *)(param_1 + 0x1c1c) & 0xffffffbf;
  FUN_100652cac(lVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_new_banner_stretch");
  FUN_100652dd4(lVar15,&DAT_101158980,2);
  uVar29 = FUN_100652e60(lVar15);
  FUN_100652e60(lVar15);
  fVar31 = fVar31 + 40.0;
  FUN_10064e47c(uVar29,fVar31,lVar15);
  *(uint *)(param_1 + 0x1d0c) = *(uint *)(param_1 + 0x1d0c) & 0xffffffbf;
  FUN_100652cac(lVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_new_banner_end");
  *(byte *)(param_1 + 0x1e50) = *(byte *)(param_1 + 0x1e50) | 1;
  FUN_100652dd4(lVar16,&DAT_101158980,2);
  uVar29 = FUN_100652e60(lVar16);
  FUN_100652e60(lVar16);
  FUN_10064e47c(uVar29,fVar31 + 40.0,lVar16);
  *(uint *)(param_1 + 0x1dfc) = *(uint *)(param_1 + 0x1dfc) & 0xffffffbf;
  *(uint *)(param_1 + 0x1ad4) = *(uint *)(param_1 + 0x1ad4) & 0xfffffffb;
  FUN_100651594(lVar17,*ppuVar24,&DAT_10115a168);
  uVar30 = *(uint *)(param_1 + 0x1eec);
  if ((uVar30 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x1eec) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5900;
    FUN_1000200a0(lVar17);
  }
  FUN_10065165c(lVar17,1);
  FUN_1006516bc(lVar17,&DAT_10115a164);
  puStack_88 = (undefined1 *)0x4000000040000000;
  FUN_1006516c8(lVar17,&puStack_88);
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar27 == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(lVar18,*ppuVar25,&DAT_10115a168);
  FUN_1004e3120(&puStack_88,"+1");
  FUN_1006513c0(lVar18,&puStack_88);
  if (pvStack_80 != (void *)0x0) {
    operator_delete__(pvStack_80);
  }
  uVar30 = *(uint *)(param_1 + 0x201c);
  if ((uVar30 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x201c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5900;
    FUN_1000200a0(lVar18);
  }
  FUN_100651460(lVar18,&DAT_101158984);
  *(uint *)(param_1 + 0x201c) = *(uint *)(param_1 + 0x201c) & 0xfffffffb;
  FUN_1001cbb94(0x43c80000,0x42600000,lVar20,0,0,0,1);
  *(uint *)(param_1 + 0x2294) = *(uint *)(param_1 + 0x2294) & 0xffffffbf;
  FUN_10064e47c(0x43c80000,0x42600000,lVar19);
  FUN_10064f308(0,0x3f000000,lVar19);
  FUN_100652cac(lVar2,PTR_s_build___Frames_tga_101854a00,"frame_0_star");
  if ((*(float *)(param_1 + 0xd90) != (float)DAT_101873a40) ||
     (*(float *)(param_1 + 0xd94) != DAT_101873a40._4_4_)) {
    *(ulong *)(param_1 + 0xd90) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar2);
  }
  if ((*(float *)(param_1 + 0xd88) != 1.65) || (*(float *)(param_1 + 0xd8c) != 1.65)) {
    *(undefined8 *)(param_1 + 0xd88) = 0x3fd333333fd33333;
    FUN_1000200a0(lVar2);
  }
  FUN_10065403c(lVar1,PTR_s_build___Frames_tga_101854a00,"frame_mask");
  FUN_100652dfc(lVar1,0xb);
  if ((*(float *)(param_1 + 0xc88) != (float)DAT_101873a40) ||
     (*(float *)(param_1 + 0xc8c) != DAT_101873a40._4_4_)) {
    *(ulong *)(param_1 + 0xc88) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar1);
  }
  FUN_100652cdc(param_1 + 0xb18,"circle_button_question");
  uVar30 = *(uint *)(param_1 + 0x6cc);
  if ((uVar30 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x6cc) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5f80;
    FUN_1000200a0(puVar28);
    uVar30 = *(uint *)(param_1 + 0x6cc);
  }
  uVar30 = uVar30 & 0xffffffef;
  *(uint *)(param_1 + 0x6cc) = uVar30;
  if ((*(float *)(param_1 + 0x690) != 0.65) || (*(float *)(param_1 + 0x694) != 0.65)) {
    *(undefined8 *)(param_1 + 0x690) = 0x3f2666663f266666;
    FUN_1000200a0(puVar28);
    uVar30 = *(uint *)(param_1 + 0x6cc);
  }
  *(uint *)(param_1 + 0x6cc) = uVar30 & 0xfffffffb;
  if ((*(float *)(param_1 + 0xe78) != 0.5) || (*(float *)(param_1 + 0xe7c) != 0.5)) {
    *(undefined1 **)(param_1 + 0xe78) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar3);
  }
  ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar27 == 0) {
    ppuVar25 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651038(lVar21,*ppuVar25);
  uVar30 = *(uint *)(param_1 + 0x43c4);
  if ((uVar30 & 0x7f80) != 0x7280) {
    *(uint *)(param_1 + 0x43c4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x7280;
    FUN_1000200a0(lVar21);
    uVar30 = *(uint *)(param_1 + 0x43c4);
  }
  *(uint *)(param_1 + 0x43c4) = uVar30 & 0xfffffffb;
  puStack_88 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x4340) + 0x28))(lVar21,&puStack_88);
  FUN_1006515d0(lVar21,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1002bf428(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002bf428_101485e40;
  if ((long *)param_1[0x8b7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8b7] + 8))();
    param_1[0x8b7] = 0;
  }
  if ((long *)param_1[0x8b8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8b8] + 8))();
    param_1[0x8b8] = 0;
  }
  param_1[0x88e] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x8a5);
  FUN_10064e2bc(param_1 + 0x88e);
  thunk_FUN_100651068(param_1 + 0x868);
  param_1[0x442] = &PTR_FUN_101466220;
  thunk_FUN_1001aa23c(param_1 + 0x82a);
  FUN_10003bf20(param_1 + 0x71f);
  param_1[0x6a5] = &PTR_FUN_101466398;
  thunk_FUN_100651068(param_1 + 0x6f8);
  param_1[0x6da] = &PTR_FUN_1014a7108;
  param_1[0x6f1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6f4);
  FUN_10064e2bc(param_1 + 0x6da);
  param_1[0x6bc] = &PTR_FUN_1014a7108;
  param_1[0x6d3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d6);
  FUN_10064e2bc(param_1 + 0x6bc);
  FUN_10064e2bc(param_1 + 0x6a5);
  FUN_100196fa4(param_1 + 0x442);
  param_1[0x419] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x430);
  FUN_10064e2bc(param_1 + 0x419);
  thunk_FUN_100651068(param_1 + 0x3f3);
  thunk_FUN_100651068(param_1 + 0x3cd);
  param_1[0x3af] = &PTR_FUN_1014a7108;
  param_1[0x3c6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3c9);
  FUN_10064e2bc(param_1 + 0x3af);
  param_1[0x391] = &PTR_FUN_1014a7108;
  param_1[0x3a8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ab);
  FUN_10064e2bc(param_1 + 0x391);
  param_1[0x373] = &PTR_FUN_1014a7108;
  param_1[0x38a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x38d);
  FUN_10064e2bc(param_1 + 0x373);
  param_1[0x34a] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x361);
  FUN_10064e2bc(param_1 + 0x34a);
  param_1[799] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x336);
  FUN_10064e2bc(param_1 + 799);
  thunk_FUN_100651068(param_1 + 0x2f9);
  thunk_FUN_100651068(param_1 + 0x2d3);
  param_1[0x2b5] = &PTR_FUN_1014a7108;
  param_1[0x2cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2cf);
  FUN_10064e2bc(param_1 + 0x2b5);
  param_1[0x28a] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2a1);
  FUN_10064e2bc(param_1 + 0x28a);
  thunk_FUN_100651068(param_1 + 0x264);
  param_1[0x239] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x250);
  FUN_10064e2bc(param_1 + 0x239);
  param_1[0x20e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x225);
  FUN_10064e2bc(param_1 + 0x20e);
  thunk_FUN_100651068(param_1 + 0x1e8);
  FUN_10064221c(param_1 + 0x1d7);
  FUN_10064221c(param_1 + 0x1c6);
  param_1[0x1a8] = &PTR_FUN_1014a7108;
  param_1[0x1bf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c2);
  FUN_10064e2bc(param_1 + 0x1a8);
  param_1[0x187] = &PTR_FUN_1014a77a8;
  param_1[0x19e] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x1a5);
  param_1[0x187] = &PTR_FUN_1014a7108;
  param_1[0x19e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a1);
  FUN_10064e2bc(param_1 + 0x187);
  param_1[0xc9] = &PTR_FUN_10145f300;
  param_1[0x163] = &PTR_FUN_1014a7108;
  param_1[0x17a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17d);
  FUN_10064e2bc(param_1 + 0x163);
  param_1[0x145] = &PTR_FUN_1014a7108;
  param_1[0x15c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15f);
  FUN_10064e2bc(param_1 + 0x145);
  param_1[0x127] = &PTR_FUN_1014a7108;
  param_1[0x13e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x141);
  FUN_10064e2bc(param_1 + 0x127);
  FUN_10064221c(param_1 + 0x116);
  FUN_10003bec8(param_1 + 0xc9);
  FUN_1002c1eb8(param_1);
  return;
}




void thunk_FUN_1002bf428(void)

{
  FUN_1002bf428();
  return;
}




void FUN_1002bf810(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002bf428();
  operator_delete(pvVar1);
  return;
}




void FUN_1002bf824(long param_1,int param_2,ulong param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    pvVar1 = operator_new(0x610);
    uVar2 = thunk_FUN_1002f84e4(pvVar1,0);
    *(undefined8 *)(param_1 + 0x45b8) = uVar2;
  }
  if ((param_3 & 1) == 0) {
    pvVar1 = *(void **)(param_1 + 0x45c0);
  }
  else {
    pvVar1 = operator_new(0x5d8);
    lVar3 = thunk_FUN_1002f8f48();
    *(long *)(param_1 + 0x45c0) = lVar3;
    *(undefined4 *)(lVar3 + 0x5c0) = *(undefined4 *)(param_1 + 0x45c8);
  }
  FUN_1002c2110(param_1,*(undefined8 *)(param_1 + 0x45b8),pvVar1);
  return;
}




void FUN_1002bf894(long *param_1)

{
  long *plVar1;
  long *plVar2;
  float *pfVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  pfVar3 = (float *)((long)param_1 + 0x45cc);
  FUN_10064e32c();
  plVar1 = param_1 + 0x17;
  FUN_10064e5ec(0,0,plVar1,8,param_1,8);
  fVar13 = (float)FUN_10064e3cc(plVar1);
  fVar13 = fVar13 * 0.9;
  FUN_10065179c(fVar13,0,0x3f800000,param_1 + 0x2f9);
  plVar2 = param_1 + 0x1e8;
  FUN_10065179c(fVar13,0,0x3f800000,plVar2);
  plVar4 = param_1 + 0x264;
  FUN_10065179c(fVar13,0,0x3f800000);
  fVar14 = 0.0;
  FUN_10065179c(fVar13,0,0x3f800000,param_1 + 0x2d3);
  FUN_100651184(plVar2);
  fVar13 = fVar14;
  FUN_10064259c(plVar2);
  FUN_10064e5ec(0,(fVar14 - fVar13) * 0.5,plVar2,4,plVar1,4);
  FUN_1001cbc64();
  plVar5 = param_1 + 0x3cd;
  plVar6 = param_1 + 0x419;
  fVar14 = -20.0;
  FUN_10064e5ec(0,plVar5,6,plVar6,4);
  fVar13 = *(float *)((long)param_1 + 0x210c);
  FUN_10064e3cc(plVar6);
  fVar13 = fVar13 + fVar14 * 0.5;
  if (*(float *)((long)param_1 + 0x210c) != fVar13) {
    *(float *)((long)param_1 + 0x210c) = fVar13;
    FUN_1000200a0(plVar6);
  }
  FUN_10064e5ec(0,0,param_1 + 0x3f3,7,plVar5,5);
  plVar6 = param_1 + 0x391;
  uVar17 = FUN_10064259c(plVar5);
  FUN_100652e60(plVar6);
  FUN_10064e47c(uVar17,plVar6);
  plVar7 = param_1 + 0x34a;
  fVar13 = (float)FUN_10065317c(plVar6);
  fVar14 = (float)FUN_10065317c(param_1 + 0x373);
  fVar15 = (float)FUN_10065317c(param_1 + 0x3af);
  FUN_10064e47c(fVar14 + fVar13 + fVar15,0x42a00000,plVar7);
  FUN_10064e5ec(0,0,plVar6,8,plVar7,8);
  FUN_10064e5ec(0,0,param_1 + 0x373,1,plVar6,0);
  FUN_10064e5ec(0,0,param_1 + 0x3af,0,plVar6,1);
  FUN_10064f2cc(plVar7);
  FUN_10064e5ec(0,0x40a00000,plVar7,8,plVar5,8);
  plVar5 = param_1 + 799;
  FUN_1006557ec(plVar5);
  FUN_10064e5ec(0xc0c00000,0,param_1 + 0x2b5,5,param_1 + 0x2d3,7);
  FUN_1006557ec(param_1 + 0x28a);
  FUN_10064e5ec(0,0,plVar4,6,param_1 + 0x28a,4);
  FUN_1006557ec(param_1 + 0x239);
  FUN_10064e5ec(0,0,plVar5,8,param_1 + 0x239,8);
  FUN_10064e5ec(0,0x41900000,param_1 + 0x2f9,8,plVar5,8);
  plVar5 = param_1 + 0x20e;
  FUN_1006557ec(plVar5);
  uVar18 = 0xc1400000;
  FUN_10064e5ec(0,plVar5,6,plVar1,6);
  FUN_10064e3cc(plVar5);
  uVar17 = uVar18;
  uVar19 = 0;
  if (*(char *)((long)param_1 + 0x45f1) == '\0') {
    FUN_100651184(plVar2);
    uVar19 = uVar17;
  }
  fVar14 = (float)uVar17;
  FUN_10064e3cc(plVar1);
  fVar14 = (-12.0 - ((float)uVar18 + (float)uVar19)) + fVar14;
  uVar16 = FUN_10064e3cc(plVar1);
  fVar13 = (float)NEON_fminnm(uVar16,fVar14);
  *pfVar3 = fVar13;
  if (param_1[0x8b7] != 0) {
    FUN_1002f8928(fVar13,fVar13);
    fVar13 = (float)(**(code **)(*(long *)param_1[0x8b7] + 0x48))();
    *pfVar3 = fVar13;
  }
  plVar5 = param_1 + 0x88e;
  FUN_10064e47c(fVar13,fVar14,plVar5);
  FUN_10064e5ec(0,uVar19,plVar5,4,plVar1,4);
  if (param_1[0x8b7] != 0) {
    FUN_10064e5ec(0,0,param_1[0x8b7],8,plVar5,8);
  }
  if (param_1[0x8b8] != 0) {
    iVar8 = FUN_100126c88();
    fVar13 = 150.0;
    if (iVar8 == 0) {
      fVar13 = 210.0;
    }
    (**(code **)(*param_1 + 0x1e0))(*pfVar3 / fVar13,param_1);
    lVar9 = param_1[0x8b8];
    fVar13 = *(float *)(param_1 + 0x8a);
    if ((*(float *)(lVar9 + 0x48) != fVar13) || (*(float *)(lVar9 + 0x4c) != fVar13)) {
      *(float *)(lVar9 + 0x48) = fVar13;
      *(float *)(lVar9 + 0x4c) = fVar13;
      FUN_1000200a0();
    }
    FUN_10064e5ec(0,0,param_1 + 0x45,8,plVar5,8);
    FUN_10064e5ec(0,0,param_1[0x8b8],8,plVar5,8);
  }
  lVar9 = FUN_100655b94(param_1 + 0x882);
  FUN_10064e5ec(0,-*(float *)(lVar9 + 0x920),param_1 + 0x868,3,plVar5,2);
  fVar13 = *pfVar3;
  fVar14 = 0.55;
  plVar1 = param_1 + 0x1a8;
  FUN_10065317c(plVar1);
  fVar14 = (fVar13 * 0.55) / fVar14;
  if ((*(float *)(param_1 + 0x1cf) != fVar14) || (*(float *)((long)param_1 + 0xe7c) != fVar14)) {
    *(float *)(param_1 + 0x1cf) = fVar14;
    *(float *)((long)param_1 + 0xe7c) = fVar14;
    FUN_1000200a0(param_1 + 0x1c6);
  }
  FUN_10064e5ec(0xc1700000,0,plVar1,0,plVar5,0);
  FUN_10064e5ec(0,0,param_1 + 0x187,8,plVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0xc9,1,plVar5,1);
  if (*(char *)((long)param_1 + 0x45ec) != '\0') {
    FUN_1001cbff0(param_1 + 0x442,1);
    uVar17 = FUN_1004e0150("TALENT_MASTERED",0);
    FUN_1001b5dcc(param_1 + 0x442,uVar17);
  }
  if ((int)param_1[0x8bc] == 0) {
    *(uint *)((long)param_1 + 0x197c) = *(uint *)((long)param_1 + 0x197c) & 0xfffffffb;
    uVar11 = (uint)*(byte *)((long)param_1 + 0x45ef);
    *(uint *)((long)param_1 + 0x124c) =
         *(uint *)((long)param_1 + 0x124c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x124c) & 3 | (uint)(uVar11 == 0) << 2;
    *(uint *)((long)param_1 + 0x184c) = *(uint *)((long)param_1 + 0x184c) & 0xfffffffb | uVar11 << 2
    ;
    uVar12 = 0x66;
    if (uVar11 != 0) {
      uVar12 = 0xff;
    }
    uVar11 = *(uint *)((long)param_1 + 0xfc4);
    if (uVar12 != (uVar11 >> 7 & 0xff)) {
      *(uint *)((long)param_1 + 0xfc4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | uVar12 << 7;
      FUN_1000200a0(plVar2);
    }
    uVar12 = *(uint *)((long)param_1 + 0x13a4);
    if ((uVar12 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x13a4) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
      FUN_1000200a0(plVar4);
    }
    lVar9 = param_1[0x8b7];
    if (lVar9 == 0) {
      return;
    }
    uVar10 = *(undefined1 *)((long)param_1 + 0x45ef);
  }
  else {
    *(uint *)((long)param_1 + 0x197c) = *(uint *)((long)param_1 + 0x197c) | 4;
    *(uint *)((long)param_1 + 0x124c) = *(uint *)((long)param_1 + 0x124c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x184c) = *(uint *)((long)param_1 + 0x184c) & 0xfffffffb;
    if ((~*(uint *)((long)param_1 + 0xfc4) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xfc4) = *(uint *)((long)param_1 + 0xfc4) | 0x7f80;
      FUN_1000200a0(plVar2);
    }
    if ((~*(uint *)((long)param_1 + 0x13a4) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x13a4) = *(uint *)((long)param_1 + 0x13a4) | 0x7f80;
      FUN_1000200a0(plVar4);
    }
    lVar9 = param_1[0x8b7];
    if (lVar9 == 0) {
      return;
    }
    uVar10 = 1;
  }
  FUN_1002f8ad4(lVar9,uVar10);
  if ((param_1[0x8b7] != 0) && (*(char *)((long)param_1 + 0x45f2) != '\0')) {
    FUN_1002f8c00(param_1[0x8b7],0);
    return;
  }
  return;
}




void FUN_1002bffc0(long param_1)

{
  FUN_1002c2074();
  *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) & 0xfffffffb;
  return;
}




void FUN_1002bffec(long param_1)

{
  int iVar1;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if (*(long *)(param_1 + 0x45c0) != 0) {
    iVar1 = FUN_100642d08();
    if (iVar1 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_1 + 0x45c0),1);
    }
    FUN_10064f31c(param_1 + 0x4470,*(undefined8 *)(param_1 + 0x45c0),1);
    FUN_10064e5ec(0,0,*(undefined8 *)(param_1 + 0x45c0),8,param_1 + 0x4470,8);
    if ((*(uint *)(param_1 + 0xfc4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0xfc4) = *(uint *)(param_1 + 0xfc4) & 0xffff807f;
      FUN_1000200a0(param_1 + 0xf40);
    }
    if ((*(uint *)(param_1 + 0x197c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x197c) = *(uint *)(param_1 + 0x197c) & 0xffff807f;
      FUN_1000200a0(param_1 + 0x18f8);
    }
    if ((*(uint *)(param_1 + 0x201c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x201c) = *(uint *)(param_1 + 0x201c) & 0xffff807f;
      FUN_1000200a0(param_1 + 0x1f98);
    }
    FUN_1002f9784(*(undefined8 *)(param_1 + 0x45c0));
    local_28 = FUN_100644a94("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
    local_50 = thunk_FUN_1002c0f3c;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    lStack_48 = param_1;
    FUN_10001554c(param_1 + 8,&local_50);
  }
  return;
}

