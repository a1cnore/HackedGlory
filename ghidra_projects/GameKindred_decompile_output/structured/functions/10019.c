// functions/10019 — 267 functions
#include "GameKindred.h"




void FUN_1001900f8(long param_1,string *param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_48 [2];
  char local_31;
  
  std::string::operator=((string *)(param_1 + 0x808),param_2);
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  uVar7 = *(undefined8 *)((long)param_3 + 0x2f);
  *(undefined8 *)(param_1 + 0x717) = *(undefined8 *)((long)param_3 + 0x37);
  *(undefined8 *)(param_1 + 0x70f) = uVar7;
  *(undefined8 *)(param_1 + 0x708) = uVar6;
  *(undefined8 *)(param_1 + 0x700) = uVar5;
  *(undefined8 *)(param_1 + 0x6f8) = uVar4;
  *(undefined8 *)(param_1 + 0x6f0) = uVar3;
  *(undefined8 *)(param_1 + 0x6e8) = uVar2;
  *(undefined8 *)(param_1 + 0x6e0) = uVar1;
  *(byte *)(param_1 + 0x824) = *(byte *)(param_1 + 0x824) & 0xfe | param_4;
  if (*(long *)(param_1 + 0x710) != 0) {
    *(long *)(*(long *)(param_1 + 0x710) + 0x30) = param_1;
    FUN_10001549c(local_48,"wub_wub_tooltip");
    FUN_1001cefb8(param_1 + 0x720,local_48,*(undefined8 *)(param_1 + 0x710));
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  FUN_1001901c0(param_1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  FUN_1001903a0(param_1);
  return;
}




void FUN_1001901c0(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90 [2];
  undefined8 local_80 [2];
  float local_70 [4];
  float local_60 [4];
  undefined8 local_50;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined8 local_30;
  float local_28;
  
  if ((*(byte *)(param_1 + 0x824) & 1) == 0) {
    if (*(long *)(param_1 + 0x700) != 0) {
      FUN_100345b68(*(long *)(param_1 + 0x700),&local_30,0);
      goto LAB_100190204;
    }
    if (*(long *)(param_1 + 0x6f8) == 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
      FUN_100642324(param_1);
      lVar2 = *(long *)(param_1 + 0x708);
      if (lVar2 == 0) {
        return;
      }
      uVar3 = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
      goto LAB_100190364;
    }
    FUN_10064e5ec(*(undefined4 *)(param_1 + 0x6ec),*(undefined4 *)(param_1 + 0x6f0),param_1,8,
                  *(long *)(param_1 + 0x6f8),8);
    lVar2 = *(long *)(param_1 + 0x708);
    if (lVar2 == 0) {
      return;
    }
    local_b0 = DAT_101dc1cb8;
    uStack_a8 = DAT_101dc1cb8;
    local_a0 = *(undefined8 *)(param_1 + 0x6f8);
    local_94 = *(undefined1 *)(param_1 + 0x71e);
  }
  else {
    local_30 = *(undefined8 *)(param_1 + 0x6e0);
    local_28 = *(float *)(param_1 + 0x6e8);
LAB_100190204:
    FUN_10011a174(local_40,&local_30,0);
    fVar4 = (float)*(undefined8 *)(param_1 + 0x6ec) + (float)(int)(float)local_40._0_8_;
    fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x6ec) >> 0x20) +
            (float)(int)SUB84(local_40._0_8_,4);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x40) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x44)) && !NAN(fVar5))) {
      bVar1 = *(float *)(param_1 + 0x44) == fVar5;
    }
    if (!bVar1) {
      *(ulong *)(param_1 + 0x40) = CONCAT44(fVar5,fVar4);
      FUN_1000200a0(param_1);
    }
    if (*(long *)(param_1 + 0x708) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x700) == 0) {
      local_50 = local_30;
      local_48 = local_28;
      local_44 = 1.5;
    }
    else {
      FUN_1004651c0(*(long *)(param_1 + 0x700),&local_50);
    }
    local_60[0] = (float)local_30 - local_44;
    local_60[2] = local_28 - local_44;
    local_60[1] = 0.0;
    local_70[0] = local_44 + (float)local_30;
    local_70[2] = local_28 + local_44;
    local_70[1] = 0.0;
    FUN_10011a174(local_80,local_60,0);
    FUN_10011a174(local_90,local_70,0);
    local_a0 = 0;
    local_94 = 1;
    local_b0 = local_80[0];
    uStack_a8 = local_90[0];
    lVar2 = *(long *)(param_1 + 0x708);
  }
  local_98 = 1;
  FUN_10019cd6c(lVar2,param_1 + 0x808,&local_b0);
  lVar2 = *(long *)(param_1 + 0x708);
  uVar3 = *(uint *)(lVar2 + 0x84) | 4;
LAB_100190364:
  *(uint *)(lVar2 + 0x84) = uVar3;
  return;
}




void FUN_1001903a0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined4 local_48 [2];
  
  local_48[0] = 0xffffff00;
  lVar4 = param_1 + 0x500;
  if ((*(float *)(param_1 + 0x548) != 1.2) || (*(float *)(param_1 + 0x54c) != 1.2)) {
    *(undefined8 *)(param_1 + 0x548) = 0x3f99999a3f99999a;
    FUN_1000200a0(lVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x584);
  if ((uVar1 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x584) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x6600;
    FUN_1000200a0(lVar4);
  }
  FUN_100652dd4(lVar4,local_48,2);
  uVar2 = FUN_10001f424();
  local_50 = NEON_fmov(0x40a00000,4);
  FUN_10064025c(uVar2,&local_50);
  FUN_10063f0e8(0x3f800000,uVar2);
  FUN_10063f130(uVar2,FUN_10001f4ac);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3f800000,uVar3);
  FUN_10063f130(uVar3,FUN_10001f4ac);
  uVar3 = FUN_10018f89c();
  FUN_10063fe34(uVar3,lVar4,&DAT_10115a168,2);
  FUN_10063f0e8(0x3e4ccccd,uVar3);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642324(lVar4);
  FUN_100642b14(lVar4,uVar3);
  lVar4 = FUN_10008e900();
  *(code **)(lVar4 + 0x10) = FUN_10018fd04;
  *(long *)(lVar4 + 0x20) = param_1;
  FUN_10001f55c();
  FUN_10063f0e8(*(undefined4 *)(param_1 + 0x820));
  uVar2 = FUN_10008cac4();
  FUN_10063f664();
  FUN_10063f614(uVar2,lVar4);
  *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) & 0xfffffffb;
  lVar4 = FUN_10008e900();
  *(code **)(lVar4 + 0x10) = FUN_10018fd40;
  *(long *)(lVar4 + 0x20) = param_1;
  FUN_10001f55c();
  FUN_10063f0e8(*(undefined4 *)(param_1 + 0x820));
  uVar3 = FUN_10008cac4();
  FUN_10063f664();
  FUN_10063f614(uVar3,lVar4);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642324(param_1 + 0xb8);
  FUN_100642b14(param_1 + 0xb8,uVar3);
  return;
}




void FUN_1001905cc(long param_1)

{
  if ((*(char *)(param_1 + 0x71c) != '\0') && ((*(byte *)(param_1 + 0x84) >> 2 & 1) != 0)) {
    FUN_1001901c0();
    return;
  }
  return;
}




void FUN_1001905e4(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6ec) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x718) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x71c) = 0;
  FUN_100642324();
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  FUN_10001549c(local_38,"wub_wub_tooltip");
  FUN_1001ceeb0(param_1 + 0x720,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100190698(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100031c68();
  operator_delete(pvVar1);
  return;
}




long * FUN_1001906ac(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar3 = (undefined8 *)FUN_100532ff4();
  *puVar3 = &PTR_thunk_FUN_100190868_101460898;
  puVar3 = puVar3 + 0x12;
  FUN_1006421a8(puVar3);
  param_1[0x12] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x23;
  FUN_1006505b8(plVar1);
  thunk_FUN_1006421a8(param_1 + 0x3e);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  FUN_100642bd8(puVar3,param_1 + 0x3e,1);
  FUN_100641464(&uStack_64,&local_68);
  FUN_10064e47c(uStack_64,local_68,plVar1);
  FUN_100650608(plVar1,&DAT_10115a164);
  uVar2 = *(uint *)((long)param_1 + 0x19c);
  *(uint *)((long)param_1 + 0x19c) = uVar2 | 0x10;
  if ((uVar2 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x19c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6c10;
    FUN_1000200a0(plVar1);
  }
  local_38 = DAT_101dbd460;
  local_60 = FUN_10019082c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x24,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_10019082c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x24,&local_60);
  local_38 = DAT_101d23554;
  local_60 = FUN_10019082c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  return param_1;
}




void FUN_10019082c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100642bc8(param_1 + 0x118);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_100190934(param_1);
  return;
}




long * thunk_FUN_1001906ac(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uStack_68;
  undefined4 uStack_64;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = (undefined8 *)FUN_100532ff4();
  *puVar3 = &PTR_thunk_FUN_100190868_101460898;
  puVar3 = puVar3 + 0x12;
  FUN_1006421a8(puVar3);
  param_1[0x12] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x23;
  FUN_1006505b8(plVar1);
  thunk_FUN_1006421a8(param_1 + 0x3e);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  FUN_100642bd8(puVar3,param_1 + 0x3e,1);
  FUN_100641464(&uStack_64,&uStack_68);
  FUN_10064e47c(uStack_64,uStack_68,plVar1);
  FUN_100650608(plVar1,&DAT_10115a164);
  uVar2 = *(uint *)((long)param_1 + 0x19c);
  *(uint *)((long)param_1 + 0x19c) = uVar2 | 0x10;
  if ((uVar2 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x19c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6c10;
    FUN_1000200a0(plVar1);
  }
  uStack_38 = DAT_101dbd460;
  pcStack_60 = FUN_10019082c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x24,&pcStack_60);
  uStack_38 = DAT_101dbd48c;
  pcStack_60 = FUN_10019082c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x24,&pcStack_60);
  uStack_38 = DAT_101d23554;
  pcStack_60 = FUN_10019082c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  return param_1;
}




void FUN_100190868(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_100190868_101460898;
  pcStack_28 = thunk_FUN_1001908d4;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_1001908d4(param_1);
  FUN_10064230c(param_1 + 0x3e);
  FUN_10064e2bc(param_1 + 0x23);
  FUN_10064221c(param_1 + 0x12);
  FUN_100533140(param_1);
  return;
}




void FUN_1001908d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100533194();
  if (lVar1 != 0) {
    uVar2 = FUN_100533194(param_1);
    FUN_100532d78(uVar2,param_1);
    return;
  }
  return;
}




void thunk_FUN_100190868(void)

{
  FUN_100190868();
  return;
}




void FUN_100190914(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100190868();
  operator_delete(pvVar1);
  return;
}




void FUN_100190928(long param_1,undefined8 param_2)

{
  FUN_100642bd8(param_1 + 0x1f0,param_2,1);
  return;
}




void FUN_100190934(undefined8 param_1)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  FUN_100190a00();
  uVar3 = FUN_10064081c(0x3e4ccccd);
  FUN_100642b14(param_1,uVar3);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar4 * 0x40);
  if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_10144bff8;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  *(code **)(puVar1 + 8) = FUN_100190ae0;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  FUN_100642b14(param_1,puVar1);
  return;
}




void FUN_100190a00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  
  FUN_100642324(param_1 + 0x90);
  uVar2 = FUN_100640840(0,0x3e4ccccd,FUN_10001f218);
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
  FUN_100642b7c(param_1 + 0x90,uVar2);
  return;
}




void FUN_100190ae0(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = thunk_FUN_1001908d4;
  local_20 = param_1;
  FUN_100643618(0xbf800000,&local_20,0,0);
  return;
}




void thunk_FUN_100190b1c(void)

{
  FUN_100190b1c();
  return;
}




void FUN_100190b1c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x90;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  uVar3 = FUN_100640840(0x3f800000,0x3e4ccccd,FUN_10001f160);
  FUN_100642b14(lVar1,uVar3);
  return;
}




void thunk_FUN_100190a00(void)

{
  FUN_100190a00();
  return;
}




void thunk_FUN_100190b1c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x90;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x114) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x114) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  uVar3 = FUN_100640840(0x3f800000,0x3e4ccccd,FUN_10001f160);
  FUN_100642b14(lVar1,uVar3);
  return;
}




void thunk_FUN_100190a00(void)

{
  FUN_100190a00();
  return;
}




void FUN_100190b94(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100642bc8(param_1 + 0x118);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_100190934(param_1);
  return;
}




void thunk_FUN_1001908d4(void)

{
  FUN_1001908d4();
  return;
}




void FUN_100190bd0(void)

{
  DAT_101e3d5c8 = 0xff;
  DAT_101e3d5ca = 0xffff;
  DAT_101e3d5cc = 0xffff;
  DAT_101d23554 = FUN_100644a94("UI::EVENT_FULLSCREEN_DIALOG_COMPLETED");
  return;
}




long * FUN_100190c14(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_58;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_FUN_1014609b8;
  thunk_FUN_1001a7cf4(puVar7 + 0x11);
  plVar1 = param_1 + 0x87;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0xad;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xcb;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xf1;
  thunk_FUN_100650e64(plVar4);
  param_1[0x117] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)((long)param_1 + 0x8c1) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  if (*(char *)((long)param_1 + 0x8c1) == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  }
  local_58 = CONCAT44(local_58._4_4_,0xffe3e9f0);
  FUN_100651594(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&local_58);
  FUN_10065165c(plVar1,1);
  local_58 = NEON_fmov(0x40800000,4);
  FUN_1006516c8(plVar1,&local_58);
  local_58 = CONCAT44(local_58._4_4_,0xff464d4f);
  FUN_1006516bc(plVar1,&local_58);
  uVar8 = *(uint *)((long)param_1 + 0x4bc);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4bc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  uVar8 = 0xcc;
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    uVar8 = 0xff;
  }
  uVar6 = *(uint *)((long)param_1 + 0x5ec);
  if (uVar8 != (uVar6 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x5ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | uVar8 << 7;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0xb7) != 0.5) || (*(float *)((long)param_1 + 0x5bc) != 0.5)) {
    param_1[0xb7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  FUN_100651594(plVar3,*ppuVar5,&DAT_10115a168);
  FUN_10065165c(plVar3,*(char *)((long)param_1 + 0x8c1) == '\0');
  local_58 = 0x4000000040000000;
  FUN_1006516c8(plVar3,&local_58);
  local_58 = CONCAT44(local_58._4_4_,0xff323232);
  FUN_1006516bc(plVar3,&local_58);
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
    uVar8 = *(uint *)((long)param_1 + 0x80c);
    if ((uVar8 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x80c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
      FUN_1000200a0(plVar4);
    }
  }
  return param_1;
}




long * thunk_FUN_100190c14(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uStack_58;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_FUN_1014609b8;
  thunk_FUN_1001a7cf4(puVar7 + 0x11);
  plVar1 = param_1 + 0x87;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0xad;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0xcb;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xf1;
  thunk_FUN_100650e64(plVar4);
  param_1[0x117] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)((long)param_1 + 0x8c1) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  if (*(char *)((long)param_1 + 0x8c1) == '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  }
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffe3e9f0);
  FUN_100651594(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&uStack_58);
  FUN_10065165c(plVar1,1);
  uStack_58 = NEON_fmov(0x40800000,4);
  FUN_1006516c8(plVar1,&uStack_58);
  uStack_58 = CONCAT44(uStack_58._4_4_,0xff464d4f);
  FUN_1006516bc(plVar1,&uStack_58);
  uVar8 = *(uint *)((long)param_1 + 0x4bc);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4bc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  uVar8 = 0xcc;
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    uVar8 = 0xff;
  }
  uVar6 = *(uint *)((long)param_1 + 0x5ec);
  if (uVar8 != (uVar6 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x5ec) = uVar6 & 0xffff8000 | uVar6 & 0x7f | uVar8 << 7;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0xb7) != 0.5) || (*(float *)((long)param_1 + 0x5bc) != 0.5)) {
    param_1[0xb7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  FUN_100651594(plVar3,*ppuVar5,&DAT_10115a168);
  FUN_10065165c(plVar3,*(char *)((long)param_1 + 0x8c1) == '\0');
  uStack_58 = 0x4000000040000000;
  FUN_1006516c8(plVar3,&uStack_58);
  uStack_58 = CONCAT44(uStack_58._4_4_,0xff323232);
  FUN_1006516bc(plVar3,&uStack_58);
  if (*(char *)((long)param_1 + 0x8c1) != '\0') {
    FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
    uVar8 = *(uint *)((long)param_1 + 0x80c);
    if ((uVar8 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x80c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
      FUN_1000200a0(plVar4);
    }
  }
  return param_1;
}




void FUN_100190efc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*KindredMenuGuildBannerMesh*");
  FUN_1001a812c(param_1 + 0x88,uVar1);
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 4;
  FUN_1001a8964(param_1 + 0x88,"GUILD_BANNERS");
  return;
}




void FUN_100190f50(long param_1)

{
  FUN_1001a7e4c(param_1 + 0x88);
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  return;
}




void FUN_100190f80(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb | uVar1;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x8c0) == '\0')) {
    FUN_100190fb0();
    return;
  }
  return;
}




void FUN_100190fb0(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 local_48;
  undefined4 *local_40;
  int local_38;
  int local_34;
  ulong local_30;
  undefined4 *local_28;
  
  *(undefined1 *)(param_1 + 0x8c0) = 1;
  FUN_1001a86c8(param_1 + 0x88,0);
  if (*(int *)(param_1 + 0x8b8) < 1) {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) | 4;
    local_30 = 0;
    local_28 = (undefined4 *)0x0;
    local_34 = *(int *)(param_1 + 0x8b8) * 2 + -2;
    FUN_1000228fc(&local_30,&local_34);
    local_38 = local_34 + 1;
    FUN_1000228fc(&local_30,&local_38);
    local_48 = 0;
    local_40 = (undefined4 *)0x0;
    FUN_100026bb4(&local_48,local_30 & 0xffffffff);
    if ((int)local_30 == 0) {
      iVar1 = 0;
    }
    else {
      lVar4 = (local_30 & 0xffffffff) << 2;
      puVar2 = local_28;
      puVar3 = local_40;
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -4;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        iVar1 = (int)local_30;
      } while (lVar4 != 0);
    }
    local_48 = CONCAT44(local_48._4_4_,iVar1);
    FUN_1001a9150(param_1 + 0x88,&local_48,0);
    if (local_40 != (undefined4 *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (undefined4 *)0x0;
    }
    if (local_28 != (undefined4 *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_1001910b4(long param_1)

{
  if (*(char *)(param_1 + 0x8c1) != '\0') {
    FUN_1006513c0(param_1 + 0x788);
    FUN_1001910f0(param_1);
    return;
  }
  return;
}




void FUN_1001910f0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  
  FUN_100641464(&uStack_5c,&local_60);
  lVar1 = param_1 + 0x88;
  FUN_10064e47c(uStack_5c,local_60,lVar1);
  bVar4 = false;
  if ((*(float *)(param_1 + 0xd8) == 0.5) && (bVar4 = false, !NAN(*(float *)(param_1 + 0xdc)))) {
    bVar4 = *(float *)(param_1 + 0xdc) == 0.5;
  }
  if (!bVar4) {
    *(undefined1 **)(param_1 + 0xd8) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  if (*(char *)(param_1 + 0x8c1) == '\0') {
    plVar3 = (long *)(param_1 + 0x658);
    fVar5 = 70.0;
    if (*(int *)(param_1 + 0x8b8) != 2) {
      fVar5 = 85.0;
    }
    fVar6 = *(float *)(param_1 + 0x698);
    bVar4 = false;
    if ((fVar6 == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x69c)) && !NAN(fVar5))) {
      bVar4 = *(float *)(param_1 + 0x69c) == fVar5;
    }
    if (!bVar4) {
      *(undefined4 *)(param_1 + 0x698) = 0;
      *(float *)(param_1 + 0x69c) = fVar5;
      FUN_1000200a0(plVar3);
    }
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_58);
    local_68 = 0x43960000;
    local_64 = 0x43820000;
  }
  else {
    fVar5 = 320.0;
    if (3 < *(int *)(param_1 + 0x8b8)) {
      fVar5 = 400.0;
    }
    lVar2 = param_1 + 0x658;
    fVar6 = *(float *)(param_1 + 0x698);
    bVar4 = false;
    if ((fVar6 == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x69c)) && !NAN(fVar5))) {
      bVar4 = *(float *)(param_1 + 0x69c) == fVar5;
    }
    if (!bVar4) {
      *(undefined4 *)(param_1 + 0x698) = 0;
      *(float *)(param_1 + 0x69c) = fVar5;
      FUN_1000200a0(lVar2);
    }
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x658) + 0x28))(lVar2,&local_58);
    plVar3 = (long *)(param_1 + 0x788);
    fVar7 = *(float *)(param_1 + 0x698);
    fVar8 = *(float *)(param_1 + 0x69c);
    FUN_10064259c(lVar2);
    fVar5 = fVar6;
    FUN_10064259c(plVar3);
    fVar5 = fVar8 + 6.0 + (fVar5 + fVar6) * 0.5;
    local_58 = &DAT_3f0000003f000000;
    fVar6 = *(float *)(param_1 + 0x7c8);
    if ((fVar6 != fVar7) || (fVar6 = *(float *)(param_1 + 0x7cc), fVar6 != fVar5)) {
      *(float *)(param_1 + 0x7c8) = fVar7;
      *(float *)(param_1 + 0x7cc) = fVar5;
      FUN_1000200a0(plVar3);
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_58);
    local_68 = FUN_10064e3cc(lVar1);
    local_64 = 0x43c80000;
  }
  FUN_10064e48c(param_1 + 0x568,&local_68);
  fVar5 = *(float *)(param_1 + 0x698);
  fVar7 = *(float *)(param_1 + 0x69c);
  if (*(char *)(param_1 + 0x8c1) == '\0') {
    fVar6 = 0.0;
  }
  else {
    FUN_10064259c(param_1 + 0x658);
    fVar6 = fVar6 * 0.5;
  }
  fVar6 = fVar6 + fVar7;
  if ((*(float *)(param_1 + 0x5a8) != fVar5) || (*(float *)(param_1 + 0x5ac) != fVar6)) {
    *(float *)(param_1 + 0x5a8) = fVar5;
    *(float *)(param_1 + 0x5ac) = fVar6;
    FUN_1000200a0(param_1 + 0x568);
  }
  fVar5 = -20.0;
  if (*(int *)(param_1 + 0x8bc) % 10 != 1) {
    fVar5 = 0.0;
  }
  fVar6 = 10.0;
  if (9 < *(int *)(param_1 + 0x8bc) - 0x5aU) {
    fVar6 = fVar5;
  }
  lVar1 = param_1 + 0x438;
  fVar5 = -75.0;
  if (*(int *)(param_1 + 0x8b8) != 2) {
    fVar5 = -60.0;
  }
  if ((*(float *)(param_1 + 0x478) != fVar6) || (*(float *)(param_1 + 0x47c) != fVar5)) {
    *(float *)(param_1 + 0x478) = fVar6;
    *(float *)(param_1 + 0x47c) = fVar5;
    FUN_1000200a0(lVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x438) + 0x28))(lVar1,&local_58);
  fVar5 = (float)FUN_100651184(lVar1);
  fVar5 = (float)NEON_fminnm(210.0 / fVar5,0x3f800000);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x480) == fVar5) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x484)) && !NAN(fVar5))) {
    bVar4 = *(float *)(param_1 + 0x484) == fVar5;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x480) = fVar5;
    *(float *)(param_1 + 0x484) = fVar5;
    FUN_1000200a0(lVar1);
  }
  return;
}




void FUN_10019141c(long param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auStack_30 [8];
  void *local_28;
  
  *(undefined4 *)(param_1 + 0x8bc) = param_2;
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x438,auStack_30);
  fVar3 = (float)NEON_fminnm((float)(*(int *)(param_1 + 0x8bc) / 10 + 1),0x41200000);
  *(int *)(param_1 + 0x8b8) = (int)fVar3;
  switch((int)fVar3) {
  case 1:
    pcVar1 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar1 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar1 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar1 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar1 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar1 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar1 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar1 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar1 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar1 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar2 = &DAT_101d91650;
    goto LAB_100191574;
  }
  puVar2 = (undefined8 *)FUN_1004e0150(pcVar1,0);
LAB_100191574:
  FUN_1006513c0(param_1 + 0x658,puVar2);
  FUN_1001910f0(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_10019159c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014609b8;
  thunk_FUN_100651068(param_1 + 0xf1);
  thunk_FUN_100651068(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_1014a7108;
  param_1[0xc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xad);
  thunk_FUN_100651068(param_1 + 0x87);
  thunk_FUN_1001a7dd8(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_100191614(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014609b8;
  thunk_FUN_100651068(param_1 + 0xf1);
  thunk_FUN_100651068(param_1 + 0xcb);
  param_1[0xad] = &PTR_FUN_1014a7108;
  param_1[0xc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 199);
  FUN_10064e2bc(param_1 + 0xad);
  thunk_FUN_100651068(param_1 + 0x87);
  thunk_FUN_1001a7dd8(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100191690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101460ab8;
  param_1[0x160] = &PTR_FUN_1014a7108;
  param_1[0x177] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17a);
  FUN_10064e2bc(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_1014a7108;
  param_1[0x159] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15c);
  FUN_10064e2bc(param_1 + 0x142);
  FUN_100191808(param_1 + 0xd7);
  FUN_100191808(param_1 + 0x6c);
  thunk_FUN_100651068(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100191808(void)

{
  FUN_100191808();
  return;
}




void FUN_10019174c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101460ab8;
  param_1[0x160] = &PTR_FUN_1014a7108;
  param_1[0x177] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17a);
  FUN_10064e2bc(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_1014a7108;
  param_1[0x159] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15c);
  FUN_10064e2bc(param_1 + 0x142);
  FUN_100191808(param_1 + 0xd7);
  FUN_100191808(param_1 + 0x6c);
  thunk_FUN_100651068(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100191808(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100191808_101460c00;
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001918a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100191808();
  operator_delete(pvVar1);
  return;
}




long * FUN_1001918b4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1001941e4_101460d00;
  puVar5 = puVar5 + 0x17;
  FUN_10064fd54(puVar5,1);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar1 = param_1 + 0x30;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x56;
  thunk_FUN_100650e64(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(puVar5,plVar2,1);
  iVar4 = FUN_100126c88();
  if ((*(uint *)((long)param_1 + 0x204) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  FUN_10065179c(0x43480000,0,0x3f800000,plVar1);
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar4 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar1,*ppuVar3);
  if ((*(float *)(param_1 + 0x3a) != 0.5) || (*(float *)((long)param_1 + 0x1d4) != 0.0)) {
    param_1[0x3a] = 0x3f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_10065179c(0x43480000,0,0x3f800000,plVar2);
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar4 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar2,*ppuVar3);
  if ((*(float *)(param_1 + 0x60) != 0.5) || (*(float *)((long)param_1 + 0x304) != 0.0)) {
    param_1[0x60] = 0x3f000000;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_100191a64(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_30;
  float fStack_2c;
  
  lVar1 = param_1 + 0xb8;
  FUN_10064fc74(0,0,0,&local_30);
  FUN_100650064(lVar1,&local_30);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  fVar2 = (float)FUN_10064e3cc(lVar1);
  fVar3 = *(float *)(param_1 + 0xf8);
  if (fVar3 != fVar2 * 0.5) {
    *(float *)(param_1 + 0xf8) = fVar2 * 0.5;
    FUN_1000200a0(lVar1);
  }
  local_30 = FUN_10064e3cc(lVar1);
  fStack_2c = fVar3;
  FUN_10064e48c(param_1,&local_30);
  return;
}




long * FUN_100191afc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_10019422c_101460e48;
  puVar5 = puVar5 + 0x17;
  FUN_10064fd54(puVar5,1);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar1 = param_1 + 0x30;
  thunk_FUN_100650e64(plVar1);
  thunk_FUN_1001c6e5c(param_1 + 0x56);
  plVar2 = param_1 + 0xd0;
  thunk_FUN_100650e64(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(puVar5,param_1 + 0x56,1);
  FUN_100642bd8(puVar5,plVar2,1);
  iVar4 = FUN_100126c88();
  if ((*(uint *)((long)param_1 + 0x204) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  FUN_10065179c(0x43480000,0,0x3f800000,plVar1);
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar4 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar1,*ppuVar3);
  if ((*(float *)(param_1 + 0x3a) != 0.5) || (*(float *)((long)param_1 + 0x1d4) != 0.0)) {
    param_1[0x3a] = 0x3f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_10065179c(0x43480000,0,0x3f800000,plVar2);
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar4 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar2,*ppuVar3);
  uVar6 = FUN_1000f0a88(0xffffffff,0,0);
  FUN_1006513c0(plVar2,uVar6);
  if ((*(float *)(param_1 + 0xda) != 0.5) || (*(float *)((long)param_1 + 0x6d4) != 0.0)) {
    param_1[0xda] = 0x3f000000;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x704) = *(uint *)((long)param_1 + 0x704) & 0xfffffffb;
  return param_1;
}




void FUN_100191cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1006513c0(param_1 + 0x180);
  FUN_1001c6fd8(param_1 + 0x2b0,param_3);
  *(uint *)(param_1 + 0x334) =
       (*(uint *)(param_1 + 0x334) & 0xfffffff8 |
       *(uint *)(param_1 + 0x334) & 3 | ((uint)param_3 >> 0x1f) << 2) ^ 4;
  *(uint *)(param_1 + 0x704) =
       *(uint *)(param_1 + 0x704) & 0xfffffff8 |
       *(uint *)(param_1 + 0x704) & 3 | (uint)((uint)param_3 == 0xffffffff) << 2;
  FUN_100191d5c(param_1);
  return;
}




void FUN_100191d5c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_40;
  float fStack_3c;
  
  lVar1 = param_1 + 0xb8;
  FUN_10064fc74(0,0,0,&local_40);
  FUN_100650064(lVar1,&local_40);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  fVar2 = (float)FUN_10064e3cc(lVar1);
  if (*(float *)(param_1 + 0xf8) != fVar2 * 0.5) {
    *(float *)(param_1 + 0xf8) = fVar2 * 0.5;
    FUN_1000200a0(lVar1);
  }
  fVar2 = (float)FUN_10064e3cc(param_1 + 0x2b0);
  fVar3 = *(float *)(param_1 + 0x2f0);
  if (fVar3 != fVar2 * -0.5) {
    *(float *)(param_1 + 0x2f0) = fVar2 * -0.5;
    FUN_1000200a0(param_1 + 0x2b0);
  }
  local_40 = FUN_10064e3cc(lVar1);
  fStack_3c = fVar3;
  FUN_10064e48c(param_1,&local_40);
  return;
}




long * FUN_100191e28(long *param_1)

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
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  code *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  plVar33 = param_1 + 0x15fa;
  puVar30 = (undefined8 *)FUN_10064e20c();
  *puVar30 = &PTR_thunk_FUN_10019427c_101460f90;
  puVar30 = puVar30 + 0x17;
  FUN_1006421a8(puVar30);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x46;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 100;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x82;
  FUN_1006421a8();
  param_1[0x82] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0x93;
  FUN_10064e264();
  plVar6 = param_1 + 0xaa;
  FUN_10064fd54(plVar6,1);
  param_1[0xaa] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar7 = param_1 + 0xc3;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0xe9;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x10f;
  thunk_FUN_100183990(plVar9,0);
  plVar10 = param_1 + 0x1cd;
  thunk_FUN_100650e64(plVar10);
  plVar11 = param_1 + 499;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x219;
  thunk_FUN_100183990(plVar12,0);
  plVar13 = param_1 + 0x2d7;
  thunk_FUN_1001a1f9c();
  plVar14 = param_1 + 0x5b2;
  thunk_FUN_1001a1f9c();
  plVar15 = param_1 + 0x88d;
  thunk_FUN_1001a1f9c();
  plVar16 = param_1 + 0xb68;
  FUN_10064fd54(plVar16,1);
  param_1[0xb68] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar17 = param_1 + 0xdeb;
  FUN_10064fd54(plVar17,1);
  param_1[0xdeb] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar18 = param_1 + 0x106e;
  thunk_FUN_100181304(plVar18,0);
  plVar19 = param_1 + 0x1325;
  thunk_FUN_100652c08(plVar19);
  plVar20 = param_1 + 0x1343;
  thunk_FUN_100181304(plVar20,0);
  puVar31 = (undefined8 *)FUN_10064fd54(plVar33,0);
  *puVar31 = &PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar21 = param_1 + 0x1613;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x18ca;
  thunk_FUN_100181304(plVar22,0);
  *(undefined1 *)(param_1 + 0x1b81) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar30,1);
  FUN_100642bd8(puVar30,plVar2,1);
  FUN_100642bd8(puVar30,plVar1,1);
  FUN_100642bd8(puVar30,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar10,plVar12,1);
  FUN_100642bd8(plVar6,plVar11,1);
  FUN_100642bd8(plVar6,plVar13,1);
  FUN_100642bd8(plVar6,plVar14,1);
  FUN_100642bd8(plVar6,plVar15,1);
  FUN_100642bd8(plVar5,plVar16,1);
  FUN_100642bd8(plVar16,param_1 + 0xb81,1);
  FUN_100642bd8(plVar16,param_1 + 0xbfd,1);
  FUN_100642bd8(plVar16,param_1 + 0xcf3,1);
  FUN_100642bd8(plVar16,param_1 + 0xd6f,1);
  FUN_100642bd8(plVar5,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xe04,1);
  FUN_100642bd8(plVar17,param_1 + 0xe80,1);
  FUN_100642bd8(plVar17,param_1 + 0xf76,1);
  FUN_100642bd8(plVar17,param_1 + 0xff2,1);
  FUN_100642bd8(plVar4,plVar20,1);
  FUN_100642bd8(plVar4,plVar33,1);
  FUN_100642bd8(plVar33,plVar22,1);
  FUN_100642bd8(plVar33,plVar21,1);
  uVar32 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar32,auStack_bc,auStack_c0,auStack_c4);
  iVar29 = FUN_100126c88();
  plVar33 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar6,3,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar16,2,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar17,2,10);
  FUN_10064a8b0(plVar33,0x50,0,0x50,0);
  FUN_10064e524(plVar5,plVar33);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1c4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x3a4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 2;
  if ((*(float *)(param_1 + 0x6e) != 0.0) || (*(float *)((long)param_1 + 0x374) != 1.0)) {
    param_1[0x6e] = 0x3f80000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100652cdc(param_1 + 0x1a9,"edit_handle");
  *(uint *)((long)param_1 + 0xcdc) = *(uint *)((long)param_1 + 0xcdc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar9);
  uVar25 = *(uint *)((long)param_1 + 0x8fc);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8fc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar9);
  }
  uVar27 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_100194050;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x110,&local_b8);
  FUN_1001b4964(plVar9,1);
  if ((*(float *)(param_1 + 0x118) != 0.7) || (*(float *)((long)param_1 + 0x8c4) != 0.7)) {
    param_1[0x118] = 0x3f3333333f333333;
    FUN_1000200a0(plVar9);
  }
  bVar28 = iVar29 == 0;
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (bVar28) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  fVar35 = 1000.0;
  if (bVar28) {
    fVar35 = 800.0;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (bVar28) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar7,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MOTTO_LABEL",0);
  FUN_1006513c0(plVar7,uVar32);
  fVar34 = (float)FUN_10064259c(plVar9);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar8,0);
  FUN_100651038(plVar8,*ppuVar23);
  uVar25 = *(uint *)((long)param_1 + 0x7cc);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x7cc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar8);
  }
  FUN_100651708(fVar35,plVar8,1);
  FUN_100652cdc(param_1 + 0x2b3,"edit_handle");
  *(uint *)((long)param_1 + 0x152c) = *(uint *)((long)param_1 + 0x152c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar12);
  uVar25 = *(uint *)((long)param_1 + 0x114c);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x114c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar12);
  }
  local_90 = uVar27;
  local_b8 = thunk_FUN_1001940a0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x21a,&local_b8);
  FUN_1001b4964(plVar12,1);
  if ((*(float *)(param_1 + 0x222) != 0.7) || (*(float *)((long)param_1 + 0x1114) != 0.7)) {
    param_1[0x222] = 0x3f3333333f333333;
    FUN_1000200a0(plVar12);
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar29 == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar10,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MESSAGE_LABEL",0);
  FUN_1006513c0(plVar10,uVar32);
  fVar34 = (float)FUN_10064259c(plVar12);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar11,0);
  FUN_100651038(plVar11,*ppuVar23);
  FUN_1004e3120(&local_b8,
                "Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, fr"
               );
  FUN_1006513c0(plVar11,&local_b8);
  if (local_b0 != (long *)0x0) {
    operator_delete__(local_b0);
  }
  uVar25 = *(uint *)((long)param_1 + 0x101c);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x101c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar11);
  }
  FUN_100651708(fVar35,plVar11,1);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_1001816d4(0,0,fVar35,plVar13,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  plVar1 = param_1 + 0x365;
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar13);
  *(uint *)((long)param_1 + 0x1bac) = *(uint *)((long)param_1 + 0x1bac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a5c) = *(uint *)((long)param_1 + 0x1a5c) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar14,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar14);
  *(uint *)((long)param_1 + 0x3284) = *(uint *)((long)param_1 + 0x3284) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x3134) = *(uint *)((long)param_1 + 0x3134) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar15,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar35 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar35,0,plVar15);
  *(uint *)((long)param_1 + 0x495c) = *(uint *)((long)param_1 + 0x495c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x480c) = *(uint *)((long)param_1 + 0x480c) & 0xfffffffb;
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_1000200a0(plVar4);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_DETAILS_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar18,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = FUN_100192d44;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x106f,&local_b8);
  *(uint *)((long)param_1 + 0x8864) = *(uint *)((long)param_1 + 0x8864) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x8714) = *(uint *)((long)param_1 + 0x8714) & 0xfffffffb;
  FUN_100651038(param_1 + 0x1151,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_1001b495c(0xbf800000,plVar18);
  FUN_1001b4964(plVar18,1);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_right");
  if ((*(float *)(param_1 + 0x132f) != 0.5) || (*(float *)((long)param_1 + 0x997c) != 0.5)) {
    param_1[0x132f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_EDIT_GUILD_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar20,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = thunk_FUN_100194000;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x1344,&local_b8);
  FUN_1001b4964(plVar20,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar21,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = thunk_FUN_1001940f0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x1614,&local_b8);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  uVar26 = 0x43380000;
  if (iVar29 == 0) {
    uVar26 = 0x4300cccd;
  }
  FUN_100651038(param_1 + 0x16f6,*ppuVar24);
  FUN_100181c68(uVar26,plVar21);
  FUN_1001b4964(plVar21,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar22,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar27;
  local_b8 = thunk_FUN_100194140;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  local_b0 = param_1;
  FUN_10001554c(param_1 + 0x18cb,&local_b8);
  FUN_100651038(param_1 + 0x19ad,*ppuVar24);
  FUN_100181c68(uVar26,plVar22);
  FUN_1001b4964(plVar22,1);
  *(uint *)((long)param_1 + 0xb11c) = *(uint *)((long)param_1 + 0xb11c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xc6d4) = *(uint *)((long)param_1 + 0xc6d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xb054) = *(uint *)((long)param_1 + 0xb054) & 0xfffffffb;
  FUN_100192db8(param_1);
  if ((*(float *)(param_1 + 0xb72) != 0.5) || (*(float *)((long)param_1 + 0x5b94) != 0.0)) {
    param_1[0xb72] = 0x3f000000;
    FUN_1000200a0(plVar16);
  }
  if ((*(float *)(param_1 + 0xdf5) != 0.5) || (*(float *)((long)param_1 + 0x6fac) != 0.0)) {
    param_1[0xdf5] = 0x3f000000;
    FUN_1000200a0(plVar17);
  }
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100192db8(param_1);
  return param_1;
}




void thunk_FUN_100194050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_1001940a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100192d44(long param_1)

{
  FUN_100193c20(param_1,*(char *)(param_1 + 0xdc08) == '\0');
  return;
}




void thunk_FUN_100194000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_1001940f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_GUILD_JOIN");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_100194140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_GUILD_DECLINE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100192d64(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 4;
  uVar1 = uVar2;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0xb11c) = *(uint *)(param_1 + 0xb11c) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0xc6d4) = *(uint *)(param_1 + 0xc6d4) & 0xfffffffb | uVar1;
  uVar2 = 4;
  if (param_2 == 0) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0xb054) = *(uint *)(param_1 + 0xb054) & 0xfffffffb | uVar2;
  FUN_100192db8();
  return;
}




void FUN_100192db8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 *local_98;
  float local_8c;
  undefined1 auStack_88 [4];
  float local_84;
  
  uVar6 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar6,&local_84,auStack_88,&local_8c);
  fVar9 = local_84 - local_8c;
  fVar10 = *(float *)(param_1 + 0x8ac8);
  fVar7 = (float)FUN_100651184(param_1 + 0x8a88);
  fVar8 = (float)FUN_100652e60(param_1 + 0x9928);
  fVar7 = fVar10 + 20.0 + (fVar8 + fVar7) * 0.5;
  fVar8 = *(float *)(param_1 + 0x8acc);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x9968) == fVar7) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x996c)) && !NAN(fVar8))) {
    bVar5 = *(float *)(param_1 + 0x996c) == fVar8;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x9968) = fVar7;
    *(float *)(param_1 + 0x996c) = fVar8;
    FUN_1000200a0(param_1 + 0x9928);
  }
  lVar3 = param_1 + 0x8370;
  fVar10 = fVar9 * 0.5;
  FUN_10064259c(lVar3);
  fVar7 = fVar8 * 0.5 + 30.0;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x83b0) == fVar10) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x83b4)) && !NAN(fVar7))) {
    bVar5 = *(float *)(param_1 + 0x83b4) == fVar7;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x83b0) = fVar10;
    *(float *)(param_1 + 0x83b4) = fVar7;
    FUN_1000200a0(lVar3);
  }
  lVar1 = param_1 + 0x878;
  fVar8 = (float)FUN_1006511d0(param_1 + 0x618);
  fVar7 = (float)FUN_10064259c(lVar1);
  fVar8 = fVar8 + 16.0;
  fVar7 = fVar8 + fVar7 * 0.5;
  FUN_10064259c(param_1 + 0x618);
  fVar8 = fVar8 * 0.5;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x8b8) == fVar7) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x8bc)) && !NAN(fVar8))) {
    bVar5 = *(float *)(param_1 + 0x8bc) == fVar8;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x8b8) = fVar7;
    *(float *)(param_1 + 0x8bc) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_98 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x878) + 0x28))(lVar1,&local_98);
  lVar1 = param_1 + 0x10c8;
  fVar8 = (float)FUN_1006511d0(param_1 + 0xe68);
  fVar7 = (float)FUN_10064259c(lVar1);
  fVar8 = fVar8 + 16.0;
  fVar7 = fVar8 + fVar7 * 0.5;
  FUN_10064259c(param_1 + 0xe68);
  fVar8 = fVar8 * 0.5;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1108) == fVar7) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x110c)) && !NAN(fVar8))) {
    bVar5 = *(float *)(param_1 + 0x110c) == fVar8;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x1108) = fVar7;
    *(float *)(param_1 + 0x110c) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_98 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x10c8) + 0x28))(lVar1,&local_98);
  fVar7 = (float)FUN_10064259c(param_1 + 0x16b8);
  if (*(float *)(param_1 + 0x16f8) != fVar7 * 0.5) {
    *(float *)(param_1 + 0x16f8) = fVar7 * 0.5;
    FUN_1000200a0(param_1 + 0x16b8);
  }
  fVar7 = (float)FUN_10064259c(param_1 + 0x2d90);
  if (*(float *)(param_1 + 0x2dd0) != fVar7 * 0.5) {
    *(float *)(param_1 + 0x2dd0) = fVar7 * 0.5;
    FUN_1000200a0(param_1 + 0x2d90);
  }
  fVar7 = (float)FUN_10064259c(param_1 + 0x4468);
  fVar8 = *(float *)(param_1 + 0x44a8);
  if (fVar8 != fVar7 * 0.5) {
    *(float *)(param_1 + 0x44a8) = fVar7 * 0.5;
    FUN_1000200a0(param_1 + 0x4468);
  }
  plVar4 = (long *)(param_1 + 0xafd0);
  FUN_10064fc68(&local_98);
  FUN_100650064(param_1 + 0x550,&local_98);
  (**(code **)(*(long *)(param_1 + 0x550) + 0x90))(param_1 + 0x550);
  lVar1 = param_1 + 0x5b40;
  FUN_10064fc68(&local_98);
  FUN_100650064(lVar1,&local_98);
  (**(code **)(*(long *)(param_1 + 0x5b40) + 0x90))(lVar1);
  FUN_10064ff6c(0x3f000000,lVar1,0);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(0x43480000,lVar1);
  lVar1 = param_1 + 0x6f58;
  FUN_10064fc68(&local_98);
  FUN_100650064(lVar1,&local_98);
  (**(code **)(*(long *)(param_1 + 0x6f58) + 0x90))(lVar1);
  FUN_10064ff6c(0x3f000000,lVar1,0);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(0x43480000,lVar1);
  lVar1 = param_1 + 0x498;
  local_98 = (undefined1 *)(ulong)(uint)fVar9;
  FUN_10064e48c(lVar1,&local_98);
  fVar7 = *(float *)(param_1 + 0x83b4);
  FUN_10064259c(lVar3);
  fVar7 = fVar8 + fVar7;
  fVar11 = *(float *)(param_1 + 0x4dc);
  if (fVar11 != fVar7) {
    *(float *)(param_1 + 0x4dc) = fVar7;
    FUN_1000200a0(lVar1);
    fVar11 = *(float *)(param_1 + 0x4dc);
  }
  FUN_1006425d0(lVar1,1,0,1,1);
  fVar7 = fVar8;
  FUN_10064259c(param_1 + 0x9a18);
  fVar7 = fVar11 + fVar8 + 20.0 + fVar7 * 0.5;
  if ((*(float *)(param_1 + 0x9a58) != fVar10) || (*(float *)(param_1 + 0x9a5c) != fVar7)) {
    *(float *)(param_1 + 0x9a58) = fVar10;
    *(float *)(param_1 + 0x9a5c) = fVar7;
    FUN_1000200a0(param_1 + 0x9a18);
  }
  fVar8 = 0.5;
  FUN_10064fc74(fVar10,0x3f000000,0x42700000,&local_98);
  FUN_100650064(plVar4,&local_98);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  fVar10 = *(float *)(param_1 + 0x4dc);
  FUN_1006425d0(lVar1,1,0,1,1);
  lVar1 = param_1 + 0xb098;
  fVar7 = fVar8;
  FUN_10064259c(lVar1);
  fVar7 = fVar10 + fVar8 + 40.0 + fVar7 * 0.5;
  fVar8 = *(float *)(param_1 + 0xb014);
  if (fVar8 != fVar7) {
    *(float *)(param_1 + 0xb014) = fVar7;
    FUN_1000200a0(plVar4);
  }
  uVar6 = FUN_10064e3cc(plVar4);
  FUN_10064e3cc(plVar4);
  fVar7 = fVar8;
  FUN_10064259c(lVar1);
  FUN_10064e47c(uVar6,fVar8 + fVar7 * -0.5,plVar4);
  fVar7 = 60.0;
  FUN_10064e47c(fVar9,0x42700000,param_1 + 0x140);
  FUN_10064e47c(fVar9,0x42700000,param_1 + 800);
  lVar2 = param_1 + 0x230;
  if (*(char *)(param_1 + 0xdc08) == '\0') {
    FUN_10064259c(lVar3);
    fVar8 = 60.0;
  }
  else {
    FUN_100642888(param_1 + 0x410,1,0,1,1);
    fVar11 = *(float *)(param_1 + 0x83b4);
    fVar10 = fVar7;
    FUN_10064259c(lVar3);
    fVar8 = 0.0;
    if ((*(byte *)(param_1 + 0xb054) >> 2 & 1) != 0) {
      fVar8 = fVar10;
      FUN_10064259c(lVar1);
      fVar8 = fVar8 * 0.5;
    }
    fVar7 = fVar11 + 30.0 + fVar7 + fVar10;
  }
  FUN_10064e47c(fVar9,fVar7 + fVar8,lVar2);
  fVar7 = local_8c;
  FUN_100652e60(lVar2);
  FUN_10064e47c(local_84 - local_8c,param_1);
  fVar8 = *(float *)(param_1 + 0x274);
  FUN_100652e60(lVar2);
  fVar7 = fVar7 + fVar8;
  if (*(float *)(param_1 + 0x364) != fVar7) {
    *(float *)(param_1 + 0x364) = fVar7;
    FUN_1000200a0(param_1 + 800);
  }
  return;
}




long * thunk_FUN_100191e28(long *param_1)

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
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  plVar33 = param_1 + 0x15fa;
  puVar30 = (undefined8 *)FUN_10064e20c();
  *puVar30 = &PTR_thunk_FUN_10019427c_101460f90;
  puVar30 = puVar30 + 0x17;
  FUN_1006421a8(puVar30);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x46;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 100;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x82;
  FUN_1006421a8();
  param_1[0x82] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0x93;
  FUN_10064e264();
  plVar6 = param_1 + 0xaa;
  FUN_10064fd54(plVar6,1);
  param_1[0xaa] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar7 = param_1 + 0xc3;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0xe9;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x10f;
  thunk_FUN_100183990(plVar9,0);
  plVar10 = param_1 + 0x1cd;
  thunk_FUN_100650e64(plVar10);
  plVar11 = param_1 + 499;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x219;
  thunk_FUN_100183990(plVar12,0);
  plVar13 = param_1 + 0x2d7;
  thunk_FUN_1001a1f9c();
  plVar14 = param_1 + 0x5b2;
  thunk_FUN_1001a1f9c();
  plVar15 = param_1 + 0x88d;
  thunk_FUN_1001a1f9c();
  plVar16 = param_1 + 0xb68;
  FUN_10064fd54(plVar16,1);
  param_1[0xb68] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar17 = param_1 + 0xdeb;
  FUN_10064fd54(plVar17,1);
  param_1[0xdeb] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001918b4();
  FUN_100191afc();
  FUN_1001918b4();
  FUN_1001918b4();
  plVar18 = param_1 + 0x106e;
  thunk_FUN_100181304(plVar18,0);
  plVar19 = param_1 + 0x1325;
  thunk_FUN_100652c08(plVar19);
  plVar20 = param_1 + 0x1343;
  thunk_FUN_100181304(plVar20,0);
  puVar31 = (undefined8 *)FUN_10064fd54(plVar33,0);
  *puVar31 = &PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar21 = param_1 + 0x1613;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x18ca;
  thunk_FUN_100181304(plVar22,0);
  *(undefined1 *)(param_1 + 0x1b81) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar30,1);
  FUN_100642bd8(puVar30,plVar2,1);
  FUN_100642bd8(puVar30,plVar1,1);
  FUN_100642bd8(puVar30,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar10,plVar12,1);
  FUN_100642bd8(plVar6,plVar11,1);
  FUN_100642bd8(plVar6,plVar13,1);
  FUN_100642bd8(plVar6,plVar14,1);
  FUN_100642bd8(plVar6,plVar15,1);
  FUN_100642bd8(plVar5,plVar16,1);
  FUN_100642bd8(plVar16,param_1 + 0xb81,1);
  FUN_100642bd8(plVar16,param_1 + 0xbfd,1);
  FUN_100642bd8(plVar16,param_1 + 0xcf3,1);
  FUN_100642bd8(plVar16,param_1 + 0xd6f,1);
  FUN_100642bd8(plVar5,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xe04,1);
  FUN_100642bd8(plVar17,param_1 + 0xe80,1);
  FUN_100642bd8(plVar17,param_1 + 0xf76,1);
  FUN_100642bd8(plVar17,param_1 + 0xff2,1);
  FUN_100642bd8(plVar4,plVar20,1);
  FUN_100642bd8(plVar4,plVar33,1);
  FUN_100642bd8(plVar33,plVar22,1);
  FUN_100642bd8(plVar33,plVar21,1);
  uVar32 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar32,auStack_bc,auStack_c0,auStack_c4);
  iVar29 = FUN_100126c88();
  plVar33 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar6,3,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar16,2,10);
  (**(code **)(*plVar33 + 0x68))(plVar33,plVar17,2,10);
  FUN_10064a8b0(plVar33,0x50,0,0x50,0);
  FUN_10064e524(plVar5,plVar33);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1c4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  uVar25 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar25 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x3a4) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 2;
  if ((*(float *)(param_1 + 0x6e) != 0.0) || (*(float *)((long)param_1 + 0x374) != 1.0)) {
    param_1[0x6e] = 0x3f80000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100652cdc(param_1 + 0x1a9,"edit_handle");
  *(uint *)((long)param_1 + 0xcdc) = *(uint *)((long)param_1 + 0xcdc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar9);
  uVar25 = *(uint *)((long)param_1 + 0x8fc);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8fc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar9);
  }
  uVar27 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = thunk_FUN_100194050;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x110,&pcStack_b8);
  FUN_1001b4964(plVar9,1);
  if ((*(float *)(param_1 + 0x118) != 0.7) || (*(float *)((long)param_1 + 0x8c4) != 0.7)) {
    param_1[0x118] = 0x3f3333333f333333;
    FUN_1000200a0(plVar9);
  }
  bVar28 = iVar29 == 0;
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (bVar28) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  fVar35 = 1000.0;
  if (bVar28) {
    fVar35 = 800.0;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (bVar28) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar7,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MOTTO_LABEL",0);
  FUN_1006513c0(plVar7,uVar32);
  fVar34 = (float)FUN_10064259c(plVar9);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar8,0);
  FUN_100651038(plVar8,*ppuVar23);
  uVar25 = *(uint *)((long)param_1 + 0x7cc);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x7cc) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar8);
  }
  FUN_100651708(fVar35,plVar8,1);
  FUN_100652cdc(param_1 + 0x2b3,"edit_handle");
  *(uint *)((long)param_1 + 0x152c) = *(uint *)((long)param_1 + 0x152c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar12);
  uVar25 = *(uint *)((long)param_1 + 0x114c);
  if ((uVar25 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x114c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar12);
  }
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_1001940a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x21a,&pcStack_b8);
  FUN_1001b4964(plVar12,1);
  if ((*(float *)(param_1 + 0x222) != 0.7) || (*(float *)((long)param_1 + 0x1114) != 0.7)) {
    param_1[0x222] = 0x3f3333333f333333;
    FUN_1000200a0(plVar12);
  }
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  ppuVar23 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar29 == 0) {
    ppuVar23 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar10,*ppuVar24);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_MESSAGE_LABEL",0);
  FUN_1006513c0(plVar10,uVar32);
  fVar34 = (float)FUN_10064259c(plVar12);
  FUN_10065179c(fVar35 - fVar34,0,0x3f800000,plVar10);
  FUN_1006515d8(plVar11,0);
  FUN_100651038(plVar11,*ppuVar23);
  FUN_1004e3120(&pcStack_b8,
                "Contrary to popular belief, Lorem Ipsum is not simply random text. It has roots in a piece of classical Latin literature from 45 BC, making it over 2000 years old. Richard McClintock, a Latin professor at Hampden-Sydney College in Virginia, looked up one of the more obscure Latin words, consectetur, fr"
               );
  FUN_1006513c0(plVar11,&pcStack_b8);
  if (plStack_b0 != (long *)0x0) {
    operator_delete__(plStack_b0);
  }
  uVar25 = *(uint *)((long)param_1 + 0x101c);
  if ((uVar25 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x101c) = uVar25 & 0xffff8000 | uVar25 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar11);
  }
  FUN_100651708(fVar35,plVar11,1);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_1001816d4(0,0,fVar35,plVar13,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  plVar1 = param_1 + 0x365;
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar13);
  *(uint *)((long)param_1 + 0x1bac) = *(uint *)((long)param_1 + 0x1bac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a5c) = *(uint *)((long)param_1 + 0x1a5c) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar14,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar34 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar34,0,plVar14);
  *(uint *)((long)param_1 + 0x3284) = *(uint *)((long)param_1 + 0x3284) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x3134) = *(uint *)((long)param_1 + 0x3134) & 0xfffffffb;
  FUN_1001816d4(0,0,fVar35,plVar15,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,*ppuVar24);
  fVar35 = (float)FUN_100652390(plVar1,0);
  FUN_100181b5c(*(float *)(param_1 + 0x3b9) * -fVar35,0,plVar15);
  *(uint *)((long)param_1 + 0x495c) = *(uint *)((long)param_1 + 0x495c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x480c) = *(uint *)((long)param_1 + 0x480c) & 0xfffffffb;
  if ((*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xffff807f;
    FUN_1000200a0(plVar4);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_GUILD_DETAILS_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar18,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = FUN_100192d44;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x106f,&pcStack_b8);
  *(uint *)((long)param_1 + 0x8864) = *(uint *)((long)param_1 + 0x8864) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x8714) = *(uint *)((long)param_1 + 0x8714) & 0xfffffffb;
  FUN_100651038(param_1 + 0x1151,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_1001b495c(0xbf800000,plVar18);
  FUN_1001b4964(plVar18,1);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_right");
  if ((*(float *)(param_1 + 0x132f) != 0.5) || (*(float *)((long)param_1 + 0x997c) != 0.5)) {
    param_1[0x132f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_EDIT_GUILD_BUTTON",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar20,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_100194000;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1344,&pcStack_b8);
  FUN_1001b4964(plVar20,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_JOIN",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar21,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_1001940f0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1614,&pcStack_b8);
  ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar29 == 0) {
    ppuVar24 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  uVar26 = 0x43380000;
  if (iVar29 == 0) {
    uVar26 = 0x4300cccd;
  }
  FUN_100651038(param_1 + 0x16f6,*ppuVar24);
  FUN_100181c68(uVar26,plVar21);
  FUN_1001b4964(plVar21,1);
  uVar32 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x44960000,plVar22,0,uVar32,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar27;
  pcStack_b8 = thunk_FUN_100194140;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x18cb,&pcStack_b8);
  FUN_100651038(param_1 + 0x19ad,*ppuVar24);
  FUN_100181c68(uVar26,plVar22);
  FUN_1001b4964(plVar22,1);
  *(uint *)((long)param_1 + 0xb11c) = *(uint *)((long)param_1 + 0xb11c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xc6d4) = *(uint *)((long)param_1 + 0xc6d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xb054) = *(uint *)((long)param_1 + 0xb054) & 0xfffffffb;
  FUN_100192db8(param_1);
  if ((*(float *)(param_1 + 0xb72) != 0.5) || (*(float *)((long)param_1 + 0x5b94) != 0.0)) {
    param_1[0xb72] = 0x3f000000;
    FUN_1000200a0(plVar16);
  }
  if ((*(float *)(param_1 + 0xdf5) != 0.5) || (*(float *)((long)param_1 + 0x6fac) != 0.0)) {
    param_1[0xdf5] = 0x3f000000;
    FUN_1000200a0(plVar17);
  }
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100192db8(param_1);
  return param_1;
}




void FUN_1001933ac(long param_1,long param_2)

{
  uint *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  void *pvVar16;
  byte *pbVar17;
  undefined1 auStack_1c8 [8];
  void *local_1c0;
  void *local_1b8;
  void *local_1b0;
  char local_1a1;
  undefined8 local_1a0;
  void *local_198;
  undefined1 auStack_188 [8];
  void *local_180;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_78 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e3170(auStack_178,param_2 + 0x70);
  FUN_1006513c0(param_1 + 0x748,auStack_178);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  FUN_1004e3170(auStack_178,param_2 + 0xd0);
  FUN_1006513c0(param_1 + 0xf98,auStack_178);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  uVar13 = *(ulong *)(param_2 + 0xa8);
  if (-1 < (char)*(byte *)(param_2 + 0xb7)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0xb7);
  }
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_TYPE",0);
  if (uVar13 == 0) {
    uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_UNSET",0);
  }
  else {
    uVar9 = FUN_1000f18d4(param_2 + 0xa0,0);
  }
  FUN_1006513c0(param_1 + 0x5d88,uVar8);
  FUN_1006513c0(param_1 + 0x5eb8,uVar9);
  FUN_100191a64(param_1 + 0x5c08);
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_REQUIRED_SKILL_TIER",0);
  FUN_100191cf0(param_1 + 0x5fe8,uVar8,*(undefined4 *)(param_2 + 0x9c));
  FUN_1004d2698(auStack_78,"%d/%d");
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_MEMBERS",0);
  FUN_1004e3120(auStack_178,auStack_78);
  FUN_1006513c0(param_1 + 0x6918,uVar8);
  FUN_1006513c0(param_1 + 0x6a48,auStack_178);
  FUN_100191a64(param_1 + 0x6798);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  uVar13 = *(ulong *)(param_2 + 0xc0);
  if (-1 < (char)*(byte *)(param_2 + 0xcf)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0xcf);
  }
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_LANGUAGE",0);
  if (uVar13 == 0) {
    uVar9 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_UNSET",0);
    FUN_1006513c0(param_1 + 0x6cf8,uVar8);
    FUN_1006513c0(param_1 + 0x6e28,uVar9);
    FUN_100191a64(param_1 + 0x6b78);
  }
  else {
    uVar9 = FUN_1000f13e0(param_2 + 0xb8);
    FUN_1000f10e4(auStack_178,uVar9,0);
    FUN_1006513c0(param_1 + 0x6cf8,uVar8);
    FUN_1006513c0(param_1 + 0x6e28,auStack_178);
    FUN_100191a64(param_1 + 0x6b78);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
    }
  }
  thunk_FUN_1004e439c(auStack_188,&DAT_101d91650);
  if (*(int *)(param_2 + 0x1d4) == 0) {
    pcVar10 = "GUILD_OVERVIEW_LABEL_MEMBER_TYPE_OPEN";
LAB_100193640:
    uVar8 = FUN_1004e0150(pcVar10,0);
    FUN_1000153b4(auStack_188,uVar8);
  }
  else if (*(int *)(param_2 + 0x1d4) == 1) {
    pcVar10 = "GUILD_OVERVIEW_LABEL_MEMBER_TYPE_INVITE_ONLY";
    goto LAB_100193640;
  }
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_MEMBERSHIP",0);
  FUN_1006513c0(param_1 + 0x71a0,uVar8);
  FUN_1006513c0(param_1 + 0x72d0,auStack_188);
  FUN_100191a64(param_1 + 0x7020);
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_AVERAGE_SKILL_TIER",0);
  FUN_100191cf0(param_1 + 0x7400,uVar8,*(undefined4 *)(param_2 + 0x1bc));
  FUN_1004d2698(auStack_78,"%d");
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_ACTIVITY",0);
  FUN_1004e3120(auStack_178,auStack_78);
  FUN_1006513c0(param_1 + 0x7d30,uVar8);
  FUN_1006513c0(param_1 + 0x7e60,auStack_178);
  FUN_100191a64(param_1 + 0x7bb0);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  puVar1 = (uint *)(param_1 + 0x9a9c);
  FUN_1004d32ec(*(undefined8 *)(param_2 + 0x1c8),auStack_178,0x100,"%Y-%m-%d");
  uVar8 = FUN_1004e0150("GUILD_OVERVIEW_LABEL_ESTABLISHED_DATE",0);
  FUN_1004e3120(&local_1b8,auStack_178);
  FUN_1006513c0(param_1 + 0x8110,uVar8);
  FUN_1006513c0(param_1 + 0x8240,&local_1b8);
  FUN_100191a64(param_1 + 0x7f90);
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
  }
  lVar11 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar11 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar11 + 0x5268) + (ulong)*(uint *)(lVar11 + 0x5624) * 0x108 + 0x50) != 4))
  {
LAB_10019386c:
    uVar14 = 0;
    uVar12 = *puVar1;
  }
  else {
    lVar11 = FUN_10015d3ec();
    bVar5 = *(byte *)(param_2 + 0x197);
    uVar13 = (ulong)bVar5;
    bVar6 = *(byte *)(lVar11 + 0x548f);
    sVar2 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar5) {
      sVar2 = uVar13;
    }
    sVar3 = *(size_t *)(lVar11 + 0x5480);
    if (-1 < (char)bVar6) {
      sVar3 = (ulong)bVar6;
    }
    if (sVar2 != sVar3) goto LAB_10019386c;
    pvVar16 = *(void **)(param_2 + 0x180);
    puVar4 = pvVar16;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(param_2 + 0x180);
    }
    pbVar17 = *(byte **)(lVar11 + 0x5478);
    if (-1 < (char)bVar6) {
      pbVar17 = (byte *)(lVar11 + 0x5478);
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) goto LAB_100193b2c;
      iVar7 = _memcmp(puVar4,pbVar17,sVar2);
      uVar12 = *puVar1;
      if (iVar7 == 0) goto LAB_100193b30;
      uVar14 = 0;
    }
    else {
      if (sVar2 != 0) {
        if ((uint)*pbVar17 == ((uint)pvVar16 & 0xff)) {
          pbVar15 = (byte *)(param_2 + 0x181);
          do {
            uVar13 = uVar13 - 1;
            pbVar17 = pbVar17 + 1;
            if (uVar13 == 0) goto LAB_100193b2c;
            bVar5 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar5 == *pbVar17);
        }
        goto LAB_10019386c;
      }
LAB_100193b2c:
      uVar12 = *puVar1;
LAB_100193b30:
      uVar14 = 4;
    }
  }
  *puVar1 = uVar14 | uVar12 & 0xfffffffb;
  *(uint *)(param_1 + 0x114c) = *(uint *)(param_1 + 0x114c) & 0xfffffffb | uVar14;
  *(uint *)(param_1 + 0x8fc) = *(uint *)(param_1 + 0x8fc) & 0xfffffffb | uVar14;
  uVar13 = *(ulong *)(param_2 + 0xf0);
  if (-1 < (char)*(byte *)(param_2 + 0xff)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0xff);
  }
  if (uVar13 == 0) {
LAB_10019394c:
    uVar12 = *(uint *)(param_1 + 0x173c) & 0xfffffffb;
  }
  else {
    uVar13 = *(ulong *)(param_2 + 0x138);
    if (-1 < (char)*(byte *)(param_2 + 0x147)) {
      uVar13 = (ulong)*(byte *)(param_2 + 0x147);
    }
    if (uVar13 == 0) goto LAB_10019394c;
    FUN_1004e3170(auStack_1c8,param_2 + 0xe8);
    FUN_100193b3c(&local_1b8,param_2 + 0x130,auStack_1c8,1,1,0,0);
    FUN_1001a2020(param_1 + 0x16b8,&local_1b8);
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      local_1a0 = 0;
      local_198 = (void *)0x0;
    }
    if (local_1a1 < '\0') {
      operator_delete(local_1b8);
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
    }
    uVar12 = *(uint *)(param_1 + 0x173c) | 4;
  }
  *(uint *)(param_1 + 0x173c) = uVar12;
  puVar1 = (uint *)(param_1 + 0x44ec);
  uVar13 = *(ulong *)(param_2 + 0x108);
  if (-1 < (char)*(byte *)(param_2 + 0x117)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0x117);
  }
  if (uVar13 == 0) {
LAB_100193a08:
    uVar12 = *(uint *)(param_1 + 0x2e14) & 0xfffffffb;
  }
  else {
    uVar13 = *(ulong *)(param_2 + 0x150);
    if (-1 < (char)*(byte *)(param_2 + 0x15f)) {
      uVar13 = (ulong)*(byte *)(param_2 + 0x15f);
    }
    if (uVar13 == 0) goto LAB_100193a08;
    FUN_1004e3170(auStack_1c8,param_2 + 0x100);
    FUN_100193b3c(&local_1b8,param_2 + 0x148,auStack_1c8,1,1,0,0);
    FUN_1001a2020(param_1 + 0x2d90,&local_1b8);
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      local_1a0 = 0;
      local_198 = (void *)0x0;
    }
    if (local_1a1 < '\0') {
      operator_delete(local_1b8);
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
    }
    uVar12 = *(uint *)(param_1 + 0x2e14) | 4;
  }
  *(uint *)(param_1 + 0x2e14) = uVar12;
  uVar13 = *(ulong *)(param_2 + 0x120);
  if (-1 < (char)*(byte *)(param_2 + 0x12f)) {
    uVar13 = (ulong)*(byte *)(param_2 + 0x12f);
  }
  if (uVar13 != 0) {
    uVar13 = *(ulong *)(param_2 + 0x168);
    if (-1 < (char)*(byte *)(param_2 + 0x177)) {
      uVar13 = (ulong)*(byte *)(param_2 + 0x177);
    }
    if (uVar13 != 0) {
      FUN_1004e3170(auStack_1c8,param_2 + 0x118);
      FUN_100193b3c(&local_1b8,param_2 + 0x160,auStack_1c8,1,1,0,0);
      FUN_1001a2020(param_1 + 0x4468,&local_1b8);
      if (local_198 != (void *)0x0) {
        operator_delete__(local_198);
        local_1a0 = 0;
        local_198 = (void *)0x0;
      }
      if (local_1a1 < '\0') {
        operator_delete(local_1b8);
      }
      if (local_1c0 != (void *)0x0) {
        operator_delete__(local_1c0);
      }
      uVar12 = *puVar1 | 4;
      goto LAB_100193ac8;
    }
  }
  uVar12 = *puVar1 & 0xfffffffb;
LAB_100193ac8:
  *puVar1 = uVar12;
  FUN_100192db8(param_1);
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 *
FUN_100193b3c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((char)*(byte *)((long)param_2 + 0x17) < '\0') {
    uVar2 = param_2[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001941d8();
    }
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100193bdc;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar3);
    param_1[1] = uVar2;
    param_1[2] = uVar3 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,param_2,uVar2);
LAB_100193bdc:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  thunk_FUN_1004e439c(param_1 + 3,param_3);
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)((long)param_1 + 0x29) = param_5;
  *(undefined1 *)((long)param_1 + 0x2a) = param_6;
  *(undefined1 *)((long)param_1 + 0x2b) = param_7;
  return param_1;
}




void FUN_100193c20(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  char *pcVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_a0 [36];
  float local_7c;
  undefined1 auStack_78 [4];
  float local_74;
  
  pcVar9 = (char *)(param_1 + 0xdc08);
  *pcVar9 = (char)param_2;
  if (param_2 == 0) {
    pcVar8 = FUN_10001f160;
    fVar11 = 0.25;
    uVar5 = FUN_100640840(0,0x3e800000,FUN_10001f160);
    uVar6 = FUN_100193f78();
    FUN_10063f090(uVar6,0);
    lVar1 = param_1 + 0x410;
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
    FUN_100642b14(lVar1,uVar6);
    FUN_10064259c(param_1 + 0x8370);
    fVar11 = fVar11 + 60.0;
    lVar1 = param_1 + 0x230;
    uVar12 = FUN_100652e60(lVar1);
    uVar5 = FUN_100640ce8(uVar12,fVar11,0x3e800000,lVar1,FUN_10001f160);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
    uVar12 = *(undefined4 *)(param_1 + 0x360);
  }
  else {
    uVar5 = FUN_10064081c(0x3e000000);
    uVar6 = FUN_100193f78();
    FUN_10063f090(uVar6,1);
    fVar13 = 0.25;
    uVar7 = FUN_100640840(0x3f800000,0x3e800000,FUN_10001f218);
    lVar1 = param_1 + 0x410;
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
    FUN_100642b14(lVar1,uVar6);
    FUN_100642b14(lVar1,uVar7);
    FUN_100642888(lVar1,1,0,1,1);
    fVar15 = *(float *)(param_1 + 0x83b4);
    fVar14 = fVar13;
    FUN_10064259c(param_1 + 0x8370);
    fVar11 = 0.0;
    if ((*(byte *)(param_1 + 0xb054) >> 2 & 1) != 0) {
      fVar11 = fVar14;
      FUN_10064259c(param_1 + 0xb098);
      fVar11 = fVar11 * 0.5;
    }
    fVar11 = fVar15 + 30.0 + fVar13 + fVar14 + fVar11;
    lVar1 = param_1 + 0x230;
    uVar12 = FUN_100652e60(lVar1);
    pcVar8 = FUN_10001f218;
    uVar5 = FUN_100640ce8(uVar12,fVar11,0x3e800000,lVar1,FUN_10001f218);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
    uVar12 = *(undefined4 *)(param_1 + 0x360);
  }
  uVar5 = FUN_1006408f4(uVar12,fVar11,0x3e800000,pcVar8);
  FUN_100642324(param_1 + 800);
  FUN_100642b14(param_1 + 800,uVar5);
  cVar4 = *pcVar9;
  uVar10 = 0xff;
  uVar3 = uVar10;
  if (cVar4 != '\0') {
    uVar3 = 0x33;
  }
  uVar2 = *(uint *)(param_1 + 0x8594);
  if (uVar3 != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x8594) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
    FUN_1000200a0(param_1 + 0x8510);
    cVar4 = *pcVar9;
  }
  if (cVar4 != '\0') {
    uVar10 = 0x33;
  }
  uVar3 = *(uint *)(param_1 + 0x99ac);
  if (uVar10 != (uVar3 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x99ac) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar10 << 7;
    FUN_1000200a0(param_1 + 0x9928);
    cVar4 = *pcVar9;
  }
  pcVar9 = "arrow_right";
  if (cVar4 != '\0') {
    pcVar9 = "arrow_down";
  }
  FUN_100652cdc(param_1 + 0x9928,pcVar9);
  uVar5 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar5,&local_74,auStack_78,&local_7c);
  FUN_10064e47c(local_74 - local_7c,fVar11,param_1);
  if (param_2 == 0) {
    pcVar9 = "UI::EVENT_COLLAPSE_GUILD_SETTINGS";
  }
  else {
    pcVar9 = "UI::EVENT_EXPAND_GUILD_SETTINGS";
  }
  uVar5 = FUN_100644a94(pcVar9);
  FUN_100644aec(auStack_a0,uVar5,(int)fVar11);
  FUN_100644c34(param_1,auStack_a0,1);
  return;
}




undefined8 FUN_100193f78(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
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
    uVar2 = FUN_10063f050();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




void FUN_100194000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100194050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1001940a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1001940f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_GUILD_JOIN");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100194140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_GUILD_DECLINE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_1001941e4(void)

{
  FUN_1001941e4();
  return;
}




void FUN_100194194(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001941e4();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10019422c(void)

{
  FUN_10019422c();
  return;
}




void FUN_1001941ac(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10019422c();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10019427c(void)

{
  FUN_10019427c();
  return;
}




void FUN_1001941c4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10019427c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001941d8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1001941e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001941e4_101460d00;
  thunk_FUN_100651068(param_1 + 0x56);
  thunk_FUN_100651068(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10019422c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10019422c_101460e48;
  thunk_FUN_100651068(param_1 + 0xd0);
  FUN_10017d364(param_1 + 0x56);
  thunk_FUN_100651068(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10019427c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10019427c_101460f90;
  FUN_10003bd40(param_1 + 0x18ca);
  FUN_10003bd40(param_1 + 0x1613);
  FUN_10064e2bc(param_1 + 0x15fa);
  FUN_10003bd40(param_1 + 0x1343);
  param_1[0x1325] = &PTR_FUN_1014a7108;
  param_1[0x133c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x133f);
  FUN_10064e2bc(param_1 + 0x1325);
  FUN_10003bd40(param_1 + 0x106e);
  FUN_1001941e4(param_1 + 0xff2);
  FUN_1001941e4(param_1 + 0xf76);
  FUN_10019422c(param_1 + 0xe80);
  FUN_1001941e4(param_1 + 0xe04);
  FUN_10064e2bc(param_1 + 0xdeb);
  FUN_1001941e4(param_1 + 0xd6f);
  FUN_1001941e4(param_1 + 0xcf3);
  FUN_10019422c(param_1 + 0xbfd);
  FUN_1001941e4(param_1 + 0xb81);
  FUN_10064e2bc(param_1 + 0xb68);
  param_1[0x88d] = &PTR_FUN_1014627f8;
  if ((void *)param_1[0xb66] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb66]);
    param_1[0xb66] = 0;
    param_1[0xb65] = 0;
  }
  if (*(char *)((long)param_1 + 0x5b27) < '\0') {
    operator_delete((void *)param_1[0xb62]);
  }
  param_1[0xb44] = &PTR_FUN_1014a7108;
  param_1[0xb5b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb5e);
  FUN_10064e2bc(param_1 + 0xb44);
  FUN_10003bd40(param_1 + 0x88d);
  param_1[0x5b2] = &PTR_FUN_1014627f8;
  if ((void *)param_1[0x88b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x88b]);
    param_1[0x88b] = 0;
    param_1[0x88a] = 0;
  }
  if (*(char *)((long)param_1 + 0x444f) < '\0') {
    operator_delete((void *)param_1[0x887]);
  }
  param_1[0x869] = &PTR_FUN_1014a7108;
  param_1[0x880] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x883);
  FUN_10064e2bc(param_1 + 0x869);
  FUN_10003bd40(param_1 + 0x5b2);
  param_1[0x2d7] = &PTR_FUN_1014627f8;
  if ((void *)param_1[0x5b0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5b0]);
    param_1[0x5b0] = 0;
    param_1[0x5af] = 0;
  }
  if (*(char *)((long)param_1 + 0x2d77) < '\0') {
    operator_delete((void *)param_1[0x5ac]);
  }
  param_1[0x58e] = &PTR_FUN_1014a7108;
  param_1[0x5a5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5a8);
  FUN_10064e2bc(param_1 + 0x58e);
  FUN_10003bd40(param_1 + 0x2d7);
  param_1[0x219] = &PTR_FUN_10145f300;
  param_1[0x2b3] = &PTR_FUN_1014a7108;
  param_1[0x2ca] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2cd);
  FUN_10064e2bc(param_1 + 0x2b3);
  param_1[0x295] = &PTR_FUN_1014a7108;
  param_1[0x2ac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2af);
  FUN_10064e2bc(param_1 + 0x295);
  param_1[0x277] = &PTR_FUN_1014a7108;
  param_1[0x28e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x291);
  FUN_10064e2bc(param_1 + 0x277);
  FUN_10064221c(param_1 + 0x266);
  FUN_10003bec8(param_1 + 0x219);
  thunk_FUN_100651068(param_1 + 499);
  thunk_FUN_100651068(param_1 + 0x1cd);
  param_1[0x10f] = &PTR_FUN_10145f300;
  param_1[0x1a9] = &PTR_FUN_1014a7108;
  param_1[0x1c0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c3);
  FUN_10064e2bc(param_1 + 0x1a9);
  param_1[0x18b] = &PTR_FUN_1014a7108;
  param_1[0x1a2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a5);
  FUN_10064e2bc(param_1 + 0x18b);
  param_1[0x16d] = &PTR_FUN_1014a7108;
  param_1[0x184] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x187);
  FUN_10064e2bc(param_1 + 0x16d);
  FUN_10064221c(param_1 + 0x15c);
  FUN_10003bec8(param_1 + 0x10f);
  thunk_FUN_100651068(param_1 + 0xe9);
  thunk_FUN_100651068(param_1 + 0xc3);
  FUN_10064e2bc(param_1 + 0xaa);
  thunk_FUN_10064e2bc(param_1 + 0x93);
  FUN_10064221c(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_10019468c(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined4 local_68 [2];
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  *puVar9 = &PTR_FUN_101460ab8;
  puVar9 = puVar9 + 0x17;
  FUN_1006421a8(puVar9);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x6c;
  thunk_FUN_1001c0838(plVar3);
  plVar4 = param_1 + 0xd7;
  thunk_FUN_1001c0838(plVar4);
  plVar5 = param_1 + 0x142;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x160;
  thunk_FUN_100652c08(plVar6);
  param_1[0x17e] = 0;
  *(undefined1 *)(param_1 + 0x17f) = 1;
  *(undefined8 *)((long)param_1 + 0xbfc) = 0x4100000041600000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(puVar9,plVar3,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(puVar9,plVar5,1);
  FUN_100642bd8(puVar9,plVar6,1);
  ppuVar7 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar7 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar10 = *ppuVar7;
  FUN_100652cac(plVar1,puVar10,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar5,puVar10,"white_background");
  uVar8 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xa94) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,puVar10,"white_background");
  uVar8 = *(uint *)((long)param_1 + 0xb84);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb84) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_1000200a0(plVar6);
  }
  FUN_1006515d8(plVar2,0);
  local_68[0] = 0xffe0e0e0;
  FUN_100651460(plVar2,local_68);
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  uVar8 = *(uint *)((long)param_1 + 0x3e4);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x3e4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  uVar8 = *(uint *)((long)param_1 + 0x73c);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x73c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  return param_1;
}




long * thunk_FUN_10019468c(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined4 auStack_68 [2];
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  *puVar9 = &PTR_FUN_101460ab8;
  puVar9 = puVar9 + 0x17;
  FUN_1006421a8(puVar9);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x6c;
  thunk_FUN_1001c0838(plVar3);
  plVar4 = param_1 + 0xd7;
  thunk_FUN_1001c0838(plVar4);
  plVar5 = param_1 + 0x142;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x160;
  thunk_FUN_100652c08(plVar6);
  param_1[0x17e] = 0;
  *(undefined1 *)(param_1 + 0x17f) = 1;
  *(undefined8 *)((long)param_1 + 0xbfc) = 0x4100000041600000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar9,1);
  FUN_100642bd8(puVar9,plVar1,1);
  FUN_100642bd8(puVar9,plVar2,1);
  FUN_100642bd8(puVar9,plVar3,1);
  FUN_100642bd8(puVar9,plVar4,1);
  FUN_100642bd8(puVar9,plVar5,1);
  FUN_100642bd8(puVar9,plVar6,1);
  ppuVar7 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar7 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar10 = *ppuVar7;
  FUN_100652cac(plVar1,puVar10,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1c4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar5,puVar10,"white_background");
  uVar8 = *(uint *)((long)param_1 + 0xa94);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xa94) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,puVar10,"white_background");
  uVar8 = *(uint *)((long)param_1 + 0xb84);
  if ((uVar8 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb84) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
    FUN_1000200a0(plVar6);
  }
  FUN_1006515d8(plVar2,0);
  auStack_68[0] = 0xffe0e0e0;
  FUN_100651460(plVar2,auStack_68);
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  uVar8 = *(uint *)((long)param_1 + 0x3e4);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x3e4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  uVar8 = *(uint *)((long)param_1 + 0x73c);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x73c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  return param_1;
}




void FUN_10019495c(long param_1)

{
  FUN_100651038(param_1 + 0x230);
  FUN_100194984(param_1);
  return;
}




void FUN_100194984(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  float fVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  
  plVar1 = param_1 + 0x46;
  fVar8 = (float)FUN_100651184(plVar1);
  fVar10 = *(float *)((long)param_1 + 0xbfc);
  fVar5 = fVar10 * 2.0;
  FUN_100651184(plVar1);
  plVar2 = param_1 + 0x28;
  FUN_10064e47c(fVar8 + 6.0 + fVar5,fVar10 + 2.0 + *(float *)(param_1 + 0x180) * 2.0,plVar2);
  plVar3 = param_1 + 0x17;
  FUN_10064e5ec(0,0,plVar1,8,plVar3,8);
  FUN_10064e5ec(0,0,plVar2,8,plVar3,8);
  bVar4 = *(byte *)(param_1 + 0x17f);
  *(uint *)((long)param_1 + 0x3e4) =
       *(uint *)((long)param_1 + 0x3e4) & 0xfffffffb | (uint)bVar4 << 2;
  *(uint *)((long)param_1 + 0x73c) =
       *(uint *)((long)param_1 + 0x73c) & 0xfffffffb | (uint)bVar4 << 2;
  uVar7 = (uint)(bVar4 == 0);
  *(uint *)((long)param_1 + 0xa94) =
       *(uint *)((long)param_1 + 0xa94) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xa94) & 3 | uVar7 << 2;
  *(uint *)((long)param_1 + 0xb84) =
       *(uint *)((long)param_1 + 0xb84) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xb84) & 3 | uVar7 << 2;
  if (bVar4 == 0) {
    lVar6 = param_1[0x180];
    FUN_10065317c(plVar2);
    FUN_10064e47c((int)lVar6,param_1 + 0x142);
    lVar6 = param_1[0x180];
    FUN_10065317c(plVar2);
    FUN_10064e47c((int)lVar6,param_1 + 0x160);
    FUN_10064e5ec(0,0,param_1 + 0x142,7,plVar2,7);
    uVar11 = 0;
    FUN_10064e5ec(0,param_1 + 0x160,5,plVar2,5);
  }
  else {
    FUN_1001c0968(*(undefined4 *)((long)param_1 + 0xbfc),(int)param_1[0x180],0,param_1 + 0x6c,plVar2
                  ,1);
    uVar11 = (undefined4)param_1[0x180];
    FUN_1001c0968(*(undefined4 *)((long)param_1 + 0xbfc),uVar11,0,param_1 + 0xd7,plVar2,0);
  }
  uVar9 = (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  *(undefined4 *)(param_1 + 0x17e) = uVar9;
  *(undefined4 *)((long)param_1 + 0xbf4) = uVar11;
  FUN_10064e48c(param_1,param_1 + 0x17e);
  FUN_10064e5ec(0,0,plVar3,8,param_1,8);
  return;
}




void FUN_100194b7c(long param_1)

{
  FUN_1006513c0(param_1 + 0x230);
  FUN_100194984(param_1);
  return;
}




void FUN_100194ba4(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xbfc) = param_1;
  *(undefined4 *)(param_3 + 0xc00) = param_2;
  FUN_100194984();
  return;
}




void FUN_100194bb0(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 * 255.0);
  uVar1 = *(uint *)(param_2 + 0x3e4);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x3e4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_2 + 0x360);
  }
  uVar1 = *(uint *)(param_2 + 0x73c);
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x73c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_1000200a0(param_2 + 0x6b8);
  return;
}




undefined4 FUN_100194c24(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbf0);
}




undefined4 FUN_100194c2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xbf4);
}




long * FUN_100194c34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float local_68;
  float fStack_64;
  
  puVar10 = (undefined8 *)FUN_1001b4648();
  *puVar10 = &PTR_thunk_FUN_100195ff4_1014610d8;
  puVar10 = puVar10 + 0x4d;
  thunk_FUN_100650e64(puVar10);
  plVar1 = param_1 + 0x73;
  thunk_FUN_1001bce98(plVar1);
  plVar2 = param_1 + 0x120;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x13e;
  FUN_1006421a8(plVar3);
  param_1[0x13e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0x14f;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x16d;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x18b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x1a9;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x1c7;
  thunk_FUN_100652c08(plVar8);
  *(undefined4 *)(param_1 + 0x1e5) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0xf2c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100651038(puVar10,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar9 = *(uint *)((long)param_1 + 0x2ec);
  if ((uVar9 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2ec) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
    FUN_1000200a0(puVar10);
  }
  FUN_10065165c(puVar10,1);
  if ((*(float *)(param_1 + 0x57) != 0.5) || (*(float *)((long)param_1 + 700) != 1.0)) {
    param_1[0x57] = 0x3f8000003f000000;
    FUN_1000200a0(puVar10);
  }
  FUN_1001bd128(0x42c80000,0x42c80000,0x40800000,plVar1);
  FUN_1001bd340(0x3f800000,plVar1,&DAT_10115a168);
  FUN_10064e47c(0x42c00000,0x42c00000,plVar2);
  fVar12 = *(float *)(param_1 + 0x12a);
  if ((fVar12 != 0.5) || (fVar12 = *(float *)((long)param_1 + 0x954), fVar12 != 0.5)) {
    param_1[0x12a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_vignette");
  local_68 = (float)FUN_10065317c(plVar2);
  local_68 = local_68 * 1.5;
  fStack_64 = fVar12 * 1.5;
  FUN_10064e48c(plVar4,&local_68);
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  fVar12 = *(float *)(param_1 + 0x159);
  if ((fVar12 != 1.0) || (fVar12 = *(float *)((long)param_1 + 0xacc), fVar12 != 1.0)) {
    lVar11 = NEON_fmov(0x3f800000,4);
    param_1[0x159] = lVar11;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_vignette");
  local_68 = (float)FUN_10065317c(plVar2);
  local_68 = local_68 * 1.5;
  fStack_64 = fVar12 * 1.5;
  fVar12 = fStack_64;
  FUN_10064e48c(plVar5,&local_68);
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  if (*(float *)(param_1 + 0x177) == 0.0) {
    fVar13 = 1.0;
    fVar12 = 1.0;
    if (*(float *)((long)param_1 + 0xbbc) == 1.0) goto LAB_100194f88;
  }
  fVar13 = fVar12;
  param_1[0x177] = 0x3f80000000000000;
  FUN_1000200a0(plVar5);
LAB_100194f88:
  *(byte *)(param_1 + 0x188) = *(byte *)(param_1 + 0x188) | 1;
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_vignette");
  local_68 = (float)FUN_10065317c(plVar2);
  local_68 = local_68 * 1.5;
  fStack_64 = fVar13 * 1.5;
  FUN_10064e48c(plVar6,&local_68);
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  fVar12 = 1.0;
  if ((*(float *)(param_1 + 0x195) != 1.0) || (*(float *)((long)param_1 + 0xcac) != 0.0)) {
    param_1[0x195] = 0x3f800000;
    fVar12 = 1.0;
    FUN_1000200a0(plVar6);
  }
  *(byte *)(param_1 + 0x1a6) = *(byte *)(param_1 + 0x1a6) | 2;
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_vignette");
  local_68 = (float)FUN_10065317c(plVar2);
  local_68 = local_68 * 1.5;
  fStack_64 = fVar12 * 1.5;
  FUN_10064e48c(plVar7,&local_68);
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x1c4) = *(byte *)(param_1 + 0x1c4) | 3;
  uVar9 = *(uint *)((long)param_1 + 0xa74);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa74) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064e47c(0x42c00000,0x42c00000,plVar8);
  if ((*(float *)(param_1 + 0x1d1) != 0.5) || (*(float *)((long)param_1 + 0xe8c) != 0.5)) {
    param_1[0x1d1] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  if ((*(uint *)((long)param_1 + 0xebc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xebc) = *(uint *)((long)param_1 + 0xebc) & 0xffff807f;
    FUN_1000200a0(plVar8);
  }
  FUN_100195138(param_1);
  return param_1;
}




void FUN_100195138(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  
  lVar1 = param_1 + 0x398;
  fVar4 = *(float *)(param_1 + 0xf28) * 100.0;
  FUN_1001bd128(fVar4,fVar4,0x40800000,lVar1);
  fVar4 = (float)FUN_10064e3cc(lVar1);
  fVar5 = *(float *)(param_1 + 0x3d8);
  if (fVar5 != fVar4 * -0.5) {
    *(float *)(param_1 + 0x3d8) = fVar4 * -0.5;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e3cc(lVar1);
  if (*(float *)(param_1 + 0x2ac) != fVar5 * -0.5) {
    *(float *)(param_1 + 0x2ac) = fVar5 * -0.5;
    FUN_1000200a0(param_1 + 0x268);
  }
  lVar2 = param_1 + 0x900;
  fVar4 = *(float *)(param_1 + 0xf28);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x948) == fVar4) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x94c)) && !NAN(fVar4))) {
    bVar3 = *(float *)(param_1 + 0x94c) == fVar4;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x948) = fVar4;
    *(float *)(param_1 + 0x94c) = fVar4;
    FUN_1000200a0(lVar2);
    fVar4 = *(float *)(param_1 + 0xf28);
  }
  fVar5 = *(float *)(param_1 + 0xe80);
  bVar3 = false;
  if ((fVar5 == fVar4) && (bVar3 = false, !NAN(*(float *)(param_1 + 0xe84)) && !NAN(fVar4))) {
    bVar3 = *(float *)(param_1 + 0xe84) == fVar4;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0xe80) = fVar4;
    *(float *)(param_1 + 0xe84) = fVar4;
    FUN_1000200a0(param_1 + 0xe38);
  }
  local_48 = (float)FUN_10065317c(lVar2);
  local_48 = local_48 * 0.5;
  fStack_44 = fVar5 * 0.5;
  fVar4 = fStack_44;
  FUN_10064e48c(param_1 + 0xa78,&local_48);
  local_48 = (float)FUN_10065317c(lVar2);
  local_48 = local_48 * 0.5;
  fStack_44 = fVar4 * 0.5;
  fVar4 = fStack_44;
  FUN_10064e48c(param_1 + 0xb68,&local_48);
  local_48 = (float)FUN_10065317c(lVar2);
  local_48 = local_48 * 0.5;
  fStack_44 = fVar4 * 0.5;
  fVar4 = fStack_44;
  FUN_10064e48c(param_1 + 0xc58,&local_48);
  local_48 = (float)FUN_10065317c(lVar2);
  local_48 = local_48 * 0.5;
  fStack_44 = fVar4 * 0.5;
  fVar4 = fStack_44;
  FUN_10064e48c(param_1 + 0xd48,&local_48);
  local_48 = (float)FUN_10064e3cc(lVar1);
  fStack_44 = fVar4;
  FUN_10064e48c(param_1,&local_48);
  return;
}




void FUN_1001952dc(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x900;
  FUN_100652d8c(lVar1);
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  FUN_100652ca4(lVar1,plVar2);
  plVar2 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar2 = param_3;
  }
  FUN_100652cdc(lVar1,plVar2);
  FUN_1006513c0(param_1 + 0x268,param_4);
  return;
}




void FUN_100195358(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100640db8(*(undefined4 *)(param_1 + 0xf28),*(undefined4 *)(param_1 + 0xf28),0x3daaaaab
                        ,FUN_10001f160);
  param_1 = param_1 + 0x900;
  FUN_100640a74(0x3daaaaab,param_1,&DAT_10115a168,FUN_10001f160,2);
  uVar2 = FUN_10001f4d4();
  FUN_10063f2a4(uVar2,uVar1);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1001953fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 local_48 [2];
  
  fVar3 = *(float *)(param_1 + 0xf28) * 0.9;
  uVar1 = FUN_100640db8(fVar3,fVar3,0x3daaaaab,FUN_10001f160);
  param_1 = param_1 + 0x900;
  local_48[0] = 0xffa0a0a0;
  FUN_100640a74(0x3daaaaab,param_1,local_48,FUN_10001f160,2);
  uVar2 = FUN_10001f4d4();
  FUN_10063f2a4(uVar2,uVar1);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1001954b8(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 0x3f0ccccd;
  }
  uVar1 = FUN_100640840(uVar2,0x3f000000,FUN_10001f160);
  FUN_100642324(param_1 + 0xe38);
  FUN_100642b14(param_1 + 0xe38,uVar1);
  return;
}




long FUN_100195510(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1001958d8_101461258;
  FUN_10064fd54(puVar1 + 0x17,0);
  lVar2 = 0;
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  do {
    FUN_100194c34(param_1 + lVar2 + 0x180);
    lVar2 = lVar2 + 0xf30;
  } while (lVar2 != 0x3cc0);
  FUN_100194c34(param_1 + 0x3e40);
  FUN_1004e313c(param_1 + 0x4d88);
  FUN_10019559c(param_1);
  return param_1;
}




void FUN_10019559c(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong unaff_x28;
  float fVar9;
  float fVar10;
  void *local_b8 [2];
  char local_a1;
  code *local_a0;
  long *plStack_98;
  long local_90;
  undefined8 local_88;
  ulong local_80;
  undefined4 local_78;
  
  plVar8 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  plVar5 = param_1 + 0x30;
  lVar6 = 4;
  do {
    FUN_100642bd8(plVar8,plVar5,1);
    plVar5 = plVar5 + 0x1e6;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar5 = param_1 + 0x7c8;
  FUN_100642bd8(plVar8,plVar5,1);
  iVar2 = FUN_100126c88();
  uVar4 = DAT_101d91884;
  fVar9 = 1.4;
  if (iVar2 == 0) {
    fVar9 = 1.0;
  }
  uVar7 = 0;
  plVar8 = param_1;
  do {
    local_78 = uVar4;
    unaff_x28 = unaff_x28 & 0xffffffff00000000 | uVar7;
    local_a0 = FUN_100195da0;
    local_90 = 0;
    local_88 = 0;
    plVar1 = plVar8 + 0x30;
    plStack_98 = param_1;
    local_80 = unaff_x28;
    FUN_10001554c(plVar8 + 0x31,&local_a0);
    FUN_1001b495c(0xbf800000,plVar1);
    local_a0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(plVar8[0x30] + 0x28))(plVar1,&local_a0);
    *(float *)(plVar8 + 0x215) = fVar9;
    FUN_100195138(plVar1);
    uVar7 = uVar7 + 1;
    plVar8 = plVar8 + 0x1e6;
  } while (uVar7 != 4);
  plVar8 = param_1 + 0x30;
  *(float *)(param_1 + 0x215) = fVar9 * 0.73;
  FUN_100195138(plVar8);
  if ((*(float *)(param_1 + 0x87) != 1.0) || (*(float *)((long)param_1 + 0x43c) != 1.0)) {
    lVar6 = NEON_fmov(0x3f800000,4);
    param_1[0x87] = lVar6;
    FUN_1000200a0(param_1 + 0x7d);
  }
  fVar10 = (float)(**(code **)(param_1[0x30] + 0x50))(plVar8);
  if (*(float *)(param_1 + 0x85) != fVar10 * 0.5) {
    *(float *)(param_1 + 0x85) = fVar10 * 0.5;
    FUN_1000200a0(param_1 + 0x7d);
  }
  FUN_10001549c(&local_a0,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_10001549c(local_b8,"generic_protip");
  uVar3 = FUN_1004e0150("MENU_HERO_INSPECTOR_PROTIP_LABEL",0);
  FUN_1001952dc(plVar5,&local_a0,local_b8,uVar3);
  if (local_a1 < '\0') {
    operator_delete(local_b8[0]);
  }
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  local_78 = uVar4;
  local_a0 = thunk_FUN_100195e84;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x7c9,&local_a0);
  FUN_1001b495c(0xbf800000,plVar5);
  if ((*(float *)(param_1 + 0x7d2) != 0.5) || (*(float *)((long)param_1 + 0x3e94) != 0.5)) {
    param_1[0x7d2] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  *(float *)(param_1 + 0x9ad) = fVar9 * 0.73;
  FUN_100195138(plVar5);
  plVar5 = param_1 + 0x815;
  if ((*(float *)(param_1 + 0x81f) != 0.0) || (*(float *)((long)param_1 + 0x40fc) != 1.0)) {
    param_1[0x81f] = 0x3f80000000000000;
    FUN_1000200a0(plVar5);
  }
  iVar2 = FUN_100126c88();
  uVar4 = 0x43520000;
  if (iVar2 == 0) {
    uVar4 = 0x43160000;
  }
  FUN_10065179c(uVar4,0,0x3f800000,plVar5);
  fVar9 = (float)(**(code **)(param_1[0x30] + 0x50))(plVar8);
  if (*(float *)(param_1 + 0x81d) != fVar9 * -0.5) {
    *(float *)(param_1 + 0x81d) = fVar9 * -0.5;
    FUN_1000200a0(plVar5);
  }
  FUN_100195cac(param_1);
  return;
}




long thunk_FUN_100195510(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1001958d8_101461258;
  FUN_10064fd54(puVar1 + 0x17,0);
  lVar2 = 0;
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  do {
    FUN_100194c34(param_1 + lVar2 + 0x180);
    lVar2 = lVar2 + 0xf30;
  } while (lVar2 != 0x3cc0);
  FUN_100194c34(param_1 + 0x3e40);
  FUN_1004e313c(param_1 + 0x4d88);
  FUN_10019559c(param_1);
  return param_1;
}




void FUN_1001958d8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1001958d8_101461258;
  if ((void *)param_1[0x9b2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9b2]);
    param_1[0x9b2] = 0;
    param_1[0x9b1] = 0;
  }
  FUN_100195ff4(param_1 + 0x7c8);
  lVar1 = 0;
  do {
    FUN_100195ff4((long)param_1 + lVar1 + 0x2f10);
    lVar1 = lVar1 + -0xf30;
  } while (lVar1 != -0x3cc0);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100195ff4(void)

{
  FUN_100195ff4();
  return;
}




void thunk_FUN_1001958d8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1001958d8_101461258;
  if ((void *)param_1[0x9b2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9b2]);
    param_1[0x9b2] = 0;
    param_1[0x9b1] = 0;
  }
  FUN_100195ff4(param_1 + 0x7c8);
  lVar1 = 0;
  do {
    FUN_100195ff4((long)param_1 + lVar1 + 0x2f10);
    lVar1 = lVar1 + -0xf30;
  } while (lVar1 != -0x3cc0);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100195964(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001958d8();
  operator_delete(pvVar1);
  return;
}




void FUN_100195978(long param_1,int param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x10ac);
    lVar2 = 4;
    do {
      *puVar1 = 0;
      (**(code **)(*(long *)(puVar1 + -0xf2c) + 0x150))(puVar1 + -0xf2c,1);
      puVar1 = puVar1 + 0xf30;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_1001959c4(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x10ac);
  lVar2 = 4;
  do {
    *puVar1 = 0;
    (**(code **)(*(long *)(puVar1 + -0xf2c) + 0x150))(puVar1 + -0xf2c,1);
    puVar1 = puVar1 + 0xf30;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}




void FUN_100195a0c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  void *local_168 [2];
  char local_151;
  undefined1 auStack_150 [8];
  void *local_148;
  void *local_140 [2];
  char local_129;
  undefined4 local_128;
  undefined4 uStack_124;
  char local_111;
  undefined1 auStack_108 [128];
  undefined1 auStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1004e0150(param_2[10],0);
  FUN_1000153b4(param_1 + 0x4d88,uVar2);
  FUN_10034bf64(*param_2);
  FUN_1004d2698(auStack_88,"build://Splash_%s.png");
  FUN_10034c0cc(*param_2,param_1 + 0x4d70,3);
  FUN_1004d2698(auStack_108,PTR_s_build___HUDPartsHero__s_png_10184e0b8);
  FUN_10001549c(&local_128,auStack_108);
  FUN_10001549c(local_140,"perk_icon");
  uVar2 = FUN_1004e0150("MENU_HERO_INSPECTOR_PERK_LABEL",0);
  FUN_1001952dc(param_1 + 0x180,&local_128,local_140,uVar2);
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT44(uStack_124,local_128));
  }
  iVar1 = FUN_100126c88();
  uVar3 = 0x43520000;
  if (iVar1 == 0) {
    uVar3 = 0x43160000;
  }
  FUN_10065179c(uVar3,0,0x3f800000,param_1 + 1000);
  ppuVar5 = &PTR_s_MENU_HERO_INSPECTOR_ABILITY_A_LA_101461390;
  lVar4 = param_1 + 0x10b0;
  lVar6 = 0x9ae;
  do {
    FUN_1004d2698(&local_128,"ability_icon_%d");
    FUN_1004e313c(auStack_150);
    if ((int)lVar6 - 0x9aeU < 3) {
      uVar2 = FUN_1004e0150(*ppuVar5,0);
      FUN_1000153b4(auStack_150,uVar2);
    }
    FUN_10001549c(local_140,auStack_108);
    FUN_10001549c(local_168,&local_128);
    FUN_1001952dc(lVar4,local_140,local_168,auStack_150);
    if (local_151 < '\0') {
      operator_delete(local_168[0]);
    }
    if (local_129 < '\0') {
      operator_delete(local_140[0]);
    }
    iVar1 = FUN_100126c88();
    uVar3 = 0x430c0000;
    if (iVar1 == 0) {
      uVar3 = 0x42c80000;
    }
    FUN_10065179c(uVar3,0,0x3f800000,lVar4 + 0x268);
    if (local_148 != (void *)0x0) {
      operator_delete__(local_148);
    }
    lVar4 = lVar4 + 0xf30;
    ppuVar5 = ppuVar5 + 1;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x9b1);
  local_128 = CONCAT13((char)((ulong)*(undefined8 *)((long)param_2 + 0x74) >> 0x20),
                       CONCAT12((char)*(undefined8 *)((long)param_2 + 0x74),
                                CONCAT11((char)((ulong)*(undefined8 *)((long)param_2 + 0x6c) >> 0x20
                                               ),(char)*(undefined8 *)((long)param_2 + 0x6c))));
  FUN_1001bd46c(0x3f800000,param_1 + 0x41d8,&local_128);
  FUN_100195cac(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100195cac(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  plVar1 = (long *)(param_3 + 0x180);
  lVar2 = 4;
  do {
    (**(code **)(*plVar1 + 0x48))(plVar1);
    fVar3 = param_2 * -0.5;
    param_2 = *(float *)((long)plVar1 + 0x44);
    if (param_2 != fVar3) {
      *(float *)((long)plVar1 + 0x44) = fVar3;
      FUN_1000200a0(plVar1);
    }
    plVar1 = plVar1 + 0x1e6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_10064e3cc(param_3 + 0x3e40);
  if (*(float *)(param_3 + 0x3e84) != param_2 * -0.5) {
    *(float *)(param_3 + 0x3e84) = param_2 * -0.5;
    FUN_1000200a0(param_3 + 0x3e40);
  }
  lVar2 = param_3 + 0xb8;
  uVar4 = 0;
  FUN_10064fc74(0,0,0x41d00000,&local_50);
  FUN_100650064(lVar2,&local_50);
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x90))(lVar2);
  local_50 = FUN_10064e3cc(lVar2);
  uStack_4c = uVar4;
  FUN_10064e48c(param_3,&local_50);
  return;
}




void FUN_100195da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100195dac(param_1,param_2,param_5);
  return;
}




void thunk_FUN_100195e84(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_118;
  void *pvStack_110;
  undefined7 uStack_108;
  char cStack_101;
  char cStack_f1;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [40];
  long lStack_b0;
  undefined8 uStack_90;
  void *pvStack_88;
  void *pvStack_80;
  char cStack_69;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_38;
  
  thunk_FUN_1001cd434(&ppuStack_e0);
  thunk_FUN_1004e439c(&pvStack_118,param_3 + 0x4d88);
  FUN_10003330c(&uStack_108,&DAT_101d91198);
  uStack_f0 = 1;
  uStack_ec = 0x41a00000;
  FUN_10003c048(auStack_d8,&pvStack_118);
  if (cStack_f1 < '\0') {
    operator_delete((void *)CONCAT17(cStack_101,uStack_108));
  }
  if (pvStack_110 != (void *)0x0) {
    operator_delete__(pvStack_110);
  }
  lStack_b0 = param_3 + 0x3e40;
  uStack_38 = 0;
  FUN_10064259c();
  fStack_5c = -param_2;
  uStack_60 = 0;
  uStack_50 = 0x3f7ae148;
  iVar1 = FUN_100126c88();
  uStack_4c = 0x44e10000;
  if (iVar1 == 0) {
    uStack_4c = 0x44960000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&pvStack_118,"protip");
  FUN_100030e74(uVar2,&pvStack_118,&ppuStack_e0);
  if (cStack_101 < '\0') {
    operator_delete(pvStack_118);
  }
  ppuStack_e0 = &PTR_FUN_1014666e0;
  if (cStack_69 < '\0') {
    operator_delete(pvStack_80);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void FUN_100195dac(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [32];
  
  uVar4 = FUN_100644a94("UI::EVENT_HERO_ABILITY_SELECT");
  FUN_100644aec(auStack_60,uVar4,param_3);
  FUN_100644c34(param_1,auStack_60,1);
  if (param_3 < 4) {
    pcVar1 = (char *)(param_1 + (long)param_3 * 0xf30 + 0x10ac);
    cVar2 = *pcVar1;
    puVar5 = (undefined1 *)(param_1 + 0x10ac);
    lVar6 = 4;
    do {
      *puVar5 = 0;
      (**(code **)(*(long *)(puVar5 + -0xf2c) + 0x150))(puVar5 + -0xf2c,1);
      puVar5 = puVar5 + 0xf30;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_1 = param_1 + (long)param_3 * 0xf30;
    bVar3 = cVar2 == '\0';
    *pcVar1 = bVar3;
    (**(code **)(*(long *)(param_1 + 0x180) + 0x150))(param_1 + 0x180,!bVar3);
  }
  return;
}




void FUN_100195e84(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *local_118;
  void *local_110;
  undefined7 local_108;
  char cStack_101;
  char local_f1;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined **local_e0;
  undefined1 auStack_d8 [40];
  long local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  char local_69;
  undefined4 local_60;
  float local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  thunk_FUN_1001cd434(&local_e0);
  thunk_FUN_1004e439c(&local_118,param_3 + 0x4d88);
  FUN_10003330c(&local_108,&DAT_101d91198);
  local_f0 = 1;
  local_ec = 0x41a00000;
  FUN_10003c048(auStack_d8,&local_118);
  if (local_f1 < '\0') {
    operator_delete((void *)CONCAT17(cStack_101,local_108));
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
  }
  local_b0 = param_3 + 0x3e40;
  local_38 = 0;
  FUN_10064259c();
  local_5c = -param_2;
  local_60 = 0;
  local_50 = 0x3f7ae148;
  iVar1 = FUN_100126c88();
  local_4c = 0x44e10000;
  if (iVar1 == 0) {
    local_4c = 0x44960000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&local_118,"protip");
  FUN_100030e74(uVar2,&local_118,&local_e0);
  if (cStack_101 < '\0') {
    operator_delete(local_118);
  }
  local_e0 = &PTR_FUN_1014666e0;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void FUN_100195fe0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100195ff4();
  operator_delete(pvVar1);
  return;
}




void FUN_100195ff4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100195ff4_1014610d8;
  param_1[0x1c7] = &PTR_FUN_1014a7108;
  param_1[0x1de] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e1);
  FUN_10064e2bc(param_1 + 0x1c7);
  param_1[0x1a9] = &PTR_FUN_1014a7108;
  param_1[0x1c0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c3);
  FUN_10064e2bc(param_1 + 0x1a9);
  param_1[0x18b] = &PTR_FUN_1014a7108;
  param_1[0x1a2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a5);
  FUN_10064e2bc(param_1 + 0x18b);
  param_1[0x16d] = &PTR_FUN_1014a7108;
  param_1[0x184] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x187);
  FUN_10064e2bc(param_1 + 0x16d);
  param_1[0x14f] = &PTR_FUN_1014a7108;
  param_1[0x166] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x169);
  FUN_10064e2bc(param_1 + 0x14f);
  FUN_10064221c(param_1 + 0x13e);
  param_1[0x120] = &PTR_FUN_1014a7108;
  param_1[0x137] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13a);
  FUN_10064e2bc(param_1 + 0x120);
  param_1[0x73] = &PTR_FUN_101464d00;
  param_1[0x102] = &PTR_FUN_1014a7108;
  param_1[0x119] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11c);
  FUN_10064e2bc(param_1 + 0x102);
  param_1[0xe4] = &PTR_FUN_1014a7108;
  param_1[0xfb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfe);
  FUN_10064e2bc(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_1014a7108;
  param_1[0xdd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe0);
  FUN_10064e2bc(param_1 + 0xc6);
  param_1[0xa8] = &PTR_FUN_1014a7108;
  param_1[0xbf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc2);
  FUN_10064e2bc(param_1 + 0xa8);
  param_1[0x8a] = &PTR_FUN_1014a7108;
  param_1[0xa1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa4);
  FUN_10064e2bc(param_1 + 0x8a);
  FUN_10064e2bc(param_1 + 0x73);
  thunk_FUN_100651068(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




long FUN_1001961a0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100196370_1014613b8;
  FUN_10064fd54(puVar1 + 0x17,0);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100652c08(param_1 + 0x180);
  thunk_FUN_100650e64(param_1 + 0x270);
  thunk_FUN_100650e64(param_1 + 0x3a0);
  thunk_FUN_1001b4d10(param_1 + 0x4d0);
  FUN_10019620c(param_1);
  return param_1;
}




void FUN_10019620c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x30,1);
  FUN_100642bd8(plVar1,param_1 + 0x4e,1);
  plVar2 = param_1 + 0x74;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar1 = param_1 + 0x9a;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652ca4(param_1 + 0x30,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651038(param_1 + 0x4e,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar3 = *(uint *)((long)param_1 + 0x424);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x424) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar2);
  }
  FUN_1001b66dc(0x3f800000,plVar1,"white_background","white_background");
  FUN_1001b6720(0x3f800000,0x3f800000,plVar1);
  FUN_1001b5d78(plVar1,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  FUN_1001b5e00(0x442f0000,0x42400000,plVar1,0,100,0,1);
  FUN_1001b676c(plVar1);
  return;
}




void FUN_100196370(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100196370_1014613b8;
  FUN_100196fa4(param_1 + 0x9a);
  thunk_FUN_100651068(param_1 + 0x74);
  thunk_FUN_100651068(param_1 + 0x4e);
  param_1[0x30] = &PTR_FUN_1014a7108;
  param_1[0x47] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4a);
  FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100196370(void)

{
  FUN_100196370();
  return;
}




void FUN_1001963ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100196370();
  operator_delete(pvVar1);
  return;
}




void FUN_100196400(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  
  if (param_2 < 4) {
    puVar4 = (&PTR_s_MENU_HERO_ATTRIBUTES_LABEL_OFFEN_1014617a0)[(int)param_2];
    FUN_100652cdc(param_1 + 0x180,(&PTR_s_stat_offense_101461780)[(int)param_2]);
    uVar1 = FUN_1004e0150(puVar4,0);
    FUN_1006513c0(param_1 + 0x270,uVar1);
  }
  FUN_1004e313c(&uStack_60);
  uVar2 = FUN_1004e3624(param_4);
  if ((uVar2 & 1) == 0) {
    FUN_1004e3120(auStack_70,"([VALUE])");
    FUN_1000153b4(&uStack_60,auStack_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1004e3120(auStack_70,"[VALUE]");
    FUN_1004e3bc4(&uStack_60,0,auStack_70,param_4);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    puVar3 = &uStack_60;
  }
  else {
    puVar3 = &DAT_101d91650;
  }
  FUN_1006513c0(param_1 + 0x3a0,puVar3);
  FUN_1001b5918(0x3f000000,param_1 + 0x4d0,param_3,param_5,param_6,param_7,0xffffffff,1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void FUN_10019654c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_50 [16];
  
  FUN_100651184(param_3 + 0x270);
  fVar2 = param_2;
  FUN_100652e60(param_3 + 0x180);
  fVar2 = (param_2 - fVar2) * 0.5;
  if (*(float *)(param_3 + 0x1c4) != fVar2) {
    *(float *)(param_3 + 0x1c4) = fVar2;
    FUN_1000200a0(param_3 + 0x180);
  }
  lVar1 = param_3 + 0xb8;
  fVar2 = 0.0;
  FUN_10064fc74(0,0,0x41000000,auStack_50);
  FUN_100650064(lVar1,auStack_50);
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x90))(lVar1);
  FUN_10064e3cc(lVar1);
  fVar3 = *(float *)(param_3 + 0x514);
  if (fVar3 != fVar2 * 1.5) {
    *(float *)(param_3 + 0x514) = fVar2 * 1.5;
    FUN_1000200a0(param_3 + 0x4d0);
    fVar3 = *(float *)(param_3 + 0x514);
  }
  FUN_10064e3cc(param_3 + 0x4d0);
  FUN_10064e47c(0x442f0000,fVar2 + fVar3,param_3);
  return;
}




long FUN_10019663c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100196788_101461500;
  FUN_10064fd54(puVar1 + 0x17,0);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100650e64(param_1 + 0x180);
  thunk_FUN_100650e64(param_1 + 0x2b0);
  FUN_100196698(param_1);
  return param_1;
}




void FUN_100196698(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x30;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x56;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar5 = FUN_1004e0150("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
  FUN_1006513c0(plVar2,uVar5);
  FUN_10065179c(0x442f0000,0,0x3f800000,plVar2);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar4 = *(uint *)((long)param_1 + 0x334);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x334) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651708(0x442f0000,plVar3,1);
  return;
}




void FUN_100196788(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100196788_101461500;
  thunk_FUN_100651068(param_1 + 0x56);
  thunk_FUN_100651068(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100196788(void)

{
  FUN_100196788();
  return;
}




void FUN_1001967d4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100196788();
  operator_delete(pvVar1);
  return;
}




void FUN_1001967e8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  lVar1 = param_1 + 0xb8;
  uVar2 = 0;
  FUN_10064fc74(0,0,0x41a00000,&local_30);
  FUN_100650064(lVar1,&local_30);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  local_30 = FUN_10064e3cc(lVar1);
  uStack_2c = uVar2;
  FUN_10064e48c(param_1,&local_30);
  return;
}




long FUN_100196858(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100196a8c_101461648;
  FUN_10064fd54(puVar1 + 0x17,1);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_101451a40;
  thunk_FUN_100650e64(param_1 + 0x180);
  thunk_FUN_100652c08(param_1 + 0x2b0);
  FUN_10064e264(param_1 + 0x3a0);
  thunk_FUN_100650e64(param_1 + 0x458);
  FUN_1001961a0(param_1 + 0x588);
  FUN_1001961a0(param_1 + 0x1d70);
  FUN_1001961a0(param_1 + 0x3558);
  FUN_1001961a0(param_1 + 0x4d40);
  FUN_10019663c(param_1 + 0x6528);
  *(undefined1 *)(param_1 + 0x6908) = 1;
  FUN_100196908(param_1);
  return param_1;
}




void FUN_100196908(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x74,1);
  plVar2 = param_1 + 0x8b;
  FUN_100642bd8(param_1 + 0x74,plVar2,1);
  FUN_100642bd8(plVar1,param_1 + 0xb1,1);
  FUN_100642bd8(plVar1,param_1 + 0x3ae,1);
  FUN_100642bd8(plVar1,param_1 + 0x9a8,1);
  FUN_100642bd8(plVar1,param_1 + 0x6ab,1);
  FUN_100642bd8(plVar1,param_1 + 0xca5,1);
  plVar1 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar3 = param_1 + 0x56;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290);
  FUN_10065179c(0x442f0000,0,0x3f800000,plVar1);
  FUN_100652ca4(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970);
  uVar4 = *(uint *)((long)param_1 + 0x334);
  if ((uVar4 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x334) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x5900;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651708(0x44750000,plVar2,1);
  return;
}




long thunk_FUN_100196858(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100196a8c_101461648;
  FUN_10064fd54(puVar1 + 0x17,1);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_101451a40;
  thunk_FUN_100650e64(param_1 + 0x180);
  thunk_FUN_100652c08(param_1 + 0x2b0);
  FUN_10064e264(param_1 + 0x3a0);
  thunk_FUN_100650e64(param_1 + 0x458);
  FUN_1001961a0(param_1 + 0x588);
  FUN_1001961a0(param_1 + 0x1d70);
  FUN_1001961a0(param_1 + 0x3558);
  FUN_1001961a0(param_1 + 0x4d40);
  FUN_10019663c(param_1 + 0x6528);
  *(undefined1 *)(param_1 + 0x6908) = 1;
  FUN_100196908(param_1);
  return param_1;
}




void FUN_100196a8c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100196a8c_101461648;
  FUN_100196788(param_1 + 0xca5);
  FUN_100196370(param_1 + 0x9a8);
  FUN_100196370(param_1 + 0x6ab);
  FUN_100196370(param_1 + 0x3ae);
  FUN_100196370(param_1 + 0xb1);
  thunk_FUN_100651068(param_1 + 0x8b);
  thunk_FUN_10064e2bc(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_1014a7108;
  param_1[0x6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  thunk_FUN_100651068(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100196a8c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100196a8c_101461648;
  FUN_100196788(param_1 + 0xca5);
  FUN_100196370(param_1 + 0x9a8);
  FUN_100196370(param_1 + 0x6ab);
  FUN_100196370(param_1 + 0x3ae);
  FUN_100196370(param_1 + 0xb1);
  thunk_FUN_100651068(param_1 + 0x8b);
  thunk_FUN_10064e2bc(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_1014a7108;
  param_1[0x6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  thunk_FUN_100651068(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100196b40(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100196a8c();
  operator_delete(pvVar1);
  return;
}




void FUN_100196b54(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6908) = param_2;
  FUN_100196b60();
  return;
}




void FUN_100196b60(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [16];
  
  uVar3 = (uint)*(byte *)(param_1 + 0x6908);
  *(uint *)(param_1 + 0x204) = *(uint *)(param_1 + 0x204) & 0xfffffffb | uVar3 << 2;
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfffffffb | uVar3 << 2;
  fVar5 = *(float *)(param_1 + 0x1c0);
  fVar4 = (float)FUN_100651184(param_1 + 0x180);
  fVar5 = fVar5 + fVar4 + 10.0;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x2f0) == fVar5) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x2f4))))
  {
    bVar2 = *(float *)(param_1 + 0x2f4) == 20.0;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x2f0) = fVar5;
    *(undefined4 *)(param_1 + 0x2f4) = 0x41a00000;
    FUN_1000200a0(param_1 + 0x2b0);
  }
  FUN_10019654c(param_1 + 0x588);
  FUN_10019654c(param_1 + 0x1d70);
  FUN_10019654c(param_1 + 0x3558);
  FUN_10019654c(param_1 + 0x4d40);
  lVar1 = param_1 + 0xb8;
  fVar4 = 0.0;
  FUN_10064fc74(0,0,0x40000000,auStack_50);
  FUN_100650064(lVar1,auStack_50);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  if (*(byte *)(param_1 + 0x6908) == 0) {
    if (*(float *)(param_1 + 0xfc) == 0.0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  else {
    FUN_100651184(param_1 + 0x180);
    if (*(float *)(param_1 + 0xfc) == fVar4 + 22.0) {
      return;
    }
    *(float *)(param_1 + 0xfc) = fVar4 + 22.0;
  }
  FUN_1000200a0(lVar1);
  return;
}




void FUN_100196cac(undefined1 param_1 [16],float param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined4 local_88;
  undefined4 uStack_84;
  void *local_80;
  void *local_78;
  char local_69;
  undefined8 ***local_68 [2];
  char local_51;
  
  lVar5 = FUN_10034be08(param_4);
  if (param_4 == 0) {
    return;
  }
  lVar6 = FUN_10034bf64(param_4);
  if (lVar6 == 0) {
    return;
  }
  uVar7 = FUN_1004e0150(*(undefined8 *)(lVar5 + 0x18),0);
  FUN_1006513c0(param_3 + 0x180,uVar7);
  FUN_10001549c(local_68,"rolepicker_lane");
  iVar3 = *(int *)(lVar5 + 0x90);
  iVar4 = *(int *)(lVar5 + 0x94);
  if ((iVar4 < iVar3) && (*(int *)(lVar5 + 0x8c) < iVar3)) {
    pcVar9 = "rolepicker_jungle";
  }
  else {
    if ((iVar4 <= iVar3) || (iVar4 <= *(int *)(lVar5 + 0x8c))) goto LAB_100196d84;
    pcVar9 = "rolepicker_roam";
  }
  FUN_10001549c(&local_80,pcVar9);
  std::string::operator=((string *)local_68,(string *)&local_80);
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
LAB_100196d84:
  ppppuVar2 = (undefined8 ****)local_68[0];
  if (-1 < local_51) {
    ppppuVar2 = local_68;
  }
  FUN_100652cdc(param_3 + 0x2b0,ppppuVar2);
  lVar1 = param_3 + 0x458;
  uVar7 = FUN_1004e0150(*(undefined8 *)(lVar5 + 0x48),0);
  FUN_1006513c0(lVar1,uVar7);
  uVar7 = FUN_100651184(lVar1);
  FUN_100651184(lVar1);
  FUN_10064e47c(uVar7,param_2 + 40.0,param_3 + 0x3a0);
  pcVar9 = "MENU_HERO_ATTRIBUTES_RANGED";
  if (*(char *)(lVar6 + 0x60) != '\0') {
    pcVar9 = "MENU_HERO_ATTRIBUTES_MELEE";
  }
  uVar7 = FUN_1004e0150(pcVar9,0);
  thunk_FUN_1004e439c(&local_80,uVar7);
  uStack_84 = CONCAT13((char)((ulong)*(undefined8 *)(lVar5 + 0x74) >> 0x20),
                       CONCAT12((char)*(undefined8 *)(lVar5 + 0x74),
                                CONCAT11((char)((ulong)*(undefined8 *)(lVar5 + 0x6c) >> 0x20),
                                         (char)*(undefined8 *)(lVar5 + 0x6c))));
  local_88 = CONCAT13((char)((ulong)*(undefined8 *)(lVar5 + 0x84) >> 0x20),
                      CONCAT12((char)*(undefined8 *)(lVar5 + 0x84),
                               CONCAT11((char)((ulong)*(undefined8 *)(lVar5 + 0x7c) >> 0x20),
                                        (char)*(undefined8 *)(lVar5 + 0x7c))));
  FUN_100196400(param_3 + 0x588,0,*(undefined4 *)(lVar5 + 0x5c),&local_80,&uStack_84,&local_88,
                param_5);
  FUN_100196400(param_3 + 0x1d70,1,*(undefined4 *)(lVar5 + 0x60),&DAT_101d91650,&uStack_84,&local_88
                ,param_5);
  FUN_100196400(param_3 + 0x3558,2,*(undefined4 *)(lVar5 + 100),&DAT_101d91650,&uStack_84,&local_88,
                param_5);
  FUN_100196400(param_3 + 0x4d40,3,*(undefined4 *)(lVar5 + 0x68),&DAT_101d91650,&uStack_84,&local_88
                ,param_5);
  if (*(uint *)(lVar5 + 0x58) < 3) {
    puVar10 = (&PTR_s_MENU_HERO_ATTRIBUTES_LABEL_DIFFI_1014617c0)[(int)*(uint *)(lVar5 + 0x58)];
    uVar7 = FUN_1004e0150("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
    uVar8 = FUN_1004e0150(puVar10,0);
    FUN_1006513c0(param_3 + 0x66a8,uVar7);
    FUN_1006513c0(param_3 + 0x67d8,uVar8);
    FUN_1001967e8(param_3 + 0x6528);
  }
  FUN_100196b60(param_3);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  return;
}




void FUN_100196f78(float param_1,float param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_3 + 0x100) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x104)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0x104) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x100) = param_1;
    *(float *)(param_3 + 0x104) = param_2;
    FUN_1000200a0(param_3 + 0xb8);
    return;
  }
  return;
}




void FUN_100196fa4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100196fa4_1014645b0;
  FUN_10064e2bc(param_1 + 0x22b);
  thunk_FUN_100651068(param_1 + 0x205);
  param_1[0x158] = &PTR_FUN_101464d00;
  param_1[0x1e7] = &PTR_FUN_1014a7108;
  param_1[0x1fe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x201);
  FUN_10064e2bc(param_1 + 0x1e7);
  param_1[0x1c9] = &PTR_FUN_1014a7108;
  param_1[0x1e0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e3);
  FUN_10064e2bc(param_1 + 0x1c9);
  param_1[0x1ab] = &PTR_FUN_1014a7108;
  param_1[0x1c2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c5);
  FUN_10064e2bc(param_1 + 0x1ab);
  param_1[0x18d] = &PTR_FUN_1014a7108;
  param_1[0x1a4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a7);
  FUN_10064e2bc(param_1 + 0x18d);
  param_1[0x16f] = &PTR_FUN_1014a7108;
  param_1[0x186] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x189);
  FUN_10064e2bc(param_1 + 0x16f);
  FUN_10064e2bc(param_1 + 0x158);
  thunk_FUN_1001aa23c(param_1 + 0x11c);
  param_1[0xfe] = &PTR_FUN_1014a7108;
  param_1[0x115] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x118);
  FUN_10064e2bc(param_1 + 0xfe);
  param_1[0xe0] = &PTR_FUN_1014a7108;
  param_1[0xf7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfa);
  FUN_10064e2bc(param_1 + 0xe0);
  param_1[0xc2] = &PTR_FUN_1014a7108;
  param_1[0xd9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdc);
  FUN_10064e2bc(param_1 + 0xc2);
  FUN_10064221c(param_1 + 0xb1);
  param_1[0x93] = &PTR_FUN_1014a7108;
  param_1[0xaa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xad);
  FUN_10064e2bc(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_1014a7108;
  param_1[0x8c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f);
  FUN_10064e2bc(param_1 + 0x75);
  param_1[0x57] = &PTR_FUN_1014a7108;
  param_1[0x6e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x71);
  FUN_10064e2bc(param_1 + 0x57);
  param_1[0x39] = &PTR_FUN_1014a7108;
  param_1[0x50] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x53);
  FUN_10064e2bc(param_1 + 0x39);
  FUN_10064221c(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100197858(long param_1,string *param_2)

{
  long lVar1;
  undefined8 *puVar3;
  string *this;
  undefined1 auStack_58 [32];
  long local_38;
  string *psVar2;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  this = (string *)(param_1 + 0xfb8);
  std::string::operator=(this,param_2);
  psVar2 = this;
  if (*(char *)(param_1 + 0xfcf) < '\0') {
    psVar2 = *(string **)this;
  }
  lVar1 = FUN_10034bf64(psVar2);
  if (lVar1 == 0) {
    puVar3 = &DAT_101d91650;
  }
  else {
    puVar3 = (undefined8 *)FUN_1004e0150(*(undefined8 *)(lVar1 + 0x28),0);
  }
  FUN_1000153b4(param_1 + 0xfa8,puVar3);
  FUN_1006513c0(param_1 + 0x9f8,param_1 + 0xfa8);
  if (*(char *)(param_1 + 0xfcf) < '\0') {
    this = *(string **)this;
  }
  lVar1 = FUN_10034be08(this);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    FUN_1004d2698(auStack_58,"portrait_%s");
    FUN_100652d8c(param_1 + 0x278);
    FUN_1001e34dc(param_1 + 0x278,auStack_58);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void thunk_FUN_10019860c(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1001312c0();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x1161) = 0;
  }
  else {
    uVar3 = FUN_1000160dc(param_1 + 0xf48);
    bVar1 = (uVar3 & 0xff00000000) != 0;
    uVar4 = FUN_100341d4c();
    uVar2 = FUN_100342b1c(uVar4,param_1 + 0xfb8);
    if (((bool)*(char *)(param_1 + 0x1161) == bVar1) && (*(byte *)(param_1 + 0x1160) == uVar2))
    goto LAB_100198678;
    *(bool *)(param_1 + 0x1161) = bVar1;
  }
  *(byte *)(param_1 + 0x1160) = (byte)uVar2;
LAB_100198678:
  FUN_100197960(param_1);
  return;
}




void thunk_FUN_10019868c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_1001312c0();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x1162) == '\0') {
      return;
    }
    *(char *)(param_1 + 0x1162) = '\0';
  }
  else {
    uVar2 = FUN_1000160dc(param_1 + 0xf78);
    bVar1 = (uVar2 & 0xff00000000) != 0;
    if ((bool)*(char *)(param_1 + 0x1162) == bVar1) {
      return;
    }
    *(char *)(param_1 + 0x1162) = bVar1;
  }
  FUN_100197960(param_1);
  return;
}




void FUN_100197960(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  cVar1 = *(char *)((long)param_1 + 0x1163);
  plVar4 = param_1 + 0x1ad;
  uVar2 = FUN_100642d08(plVar4);
  if (cVar1 == '\0') {
    if (uVar2 != 0) {
      FUN_1006423ec(plVar4,1);
    }
    *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) & 0xfffffffb;
    uVar2 = *(uint *)((long)param_1 + 0x2fc);
    goto joined_r0x000100197a00;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  }
  if (*(char *)((long)param_1 + 0x1161) == '\0') {
    *(uint *)((long)param_1 + 0x4dc) =
         *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb |
         (uint)*(byte *)((long)param_1 + 0x1162) << 2;
    uVar6 = 0;
    if (*(byte *)((long)param_1 + 0x1162) != 0) goto LAB_100197a28;
  }
  else {
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
    uVar6 = 0x3f800000;
LAB_100197a28:
    FUN_100652e14(uVar6,param_1 + 0x8b);
  }
  if ((int)param_1[0x22b] == 1) {
    uVar2 = *(uint *)((long)param_1 + 0x3ec) & 0xfffffffb;
LAB_100197a54:
    *(uint *)((long)param_1 + 0x3ec) = uVar2;
  }
  else if ((int)param_1[0x22b] == 0) {
    uVar2 = *(uint *)((long)param_1 + 0x3ec) | 4;
    goto LAB_100197a54;
  }
  switch(*(undefined4 *)((long)param_1 + 0x115c)) {
  case 0:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
    break;
  case 1:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) | 4;
    plVar4 = param_1 + 199;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) | 4;
    uVar3 = FUN_1004e0150("MENU_HEROES_BANNER_NEW",0);
    FUN_1006513c0(param_1 + 0x165,uVar3);
    FUN_100651460(param_1 + 0x165,&DAT_10115a168);
    uVar7 = 0x41200000;
    uVar6 = 0;
    uVar3 = 7;
    uVar5 = 7;
    goto LAB_100197bb8;
  case 2:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) | 4;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
    uVar3 = FUN_1004e0150("MENU_MARKET_FEATURED_SALE",0);
    FUN_1006513c0(param_1 + 0x165,uVar3);
    FUN_100651460(param_1 + 0x165,&DAT_10115a168);
    plVar4 = param_1 + 0xe5;
    uVar6 = 0xc1200000;
    goto LAB_100197bac;
  case 3:
    *(uint *)((long)param_1 + 0xbac) = *(uint *)((long)param_1 + 0xbac) | 4;
    *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
    uVar3 = FUN_1004e0150("GENERIC_HERO_FEATURED_FREE_ROTATION",0);
    FUN_1006513c0(param_1 + 0x165,uVar3);
    FUN_100651460(param_1 + 0x165,&DAT_10115a174);
    plVar4 = param_1 + 0x4f;
    uVar6 = 0;
LAB_100197bac:
    uVar7 = 0;
    uVar3 = 6;
    uVar5 = 6;
LAB_100197bb8:
    FUN_10064e5ec(uVar7,uVar6,param_1 + 0x165,uVar3,plVar4,uVar5);
  }
  if (((int)param_1[0x22b] == 0) && (*(int *)((long)param_1 + 0x115c) != 3)) {
    FUN_100652e14(0x3ecccccd,param_1 + 0x4f);
    uVar2 = *(uint *)((long)param_1 + 0x2fc);
    if ((uVar2 & 0x7f80) == 0x3300) goto LAB_100197c00;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
  }
  else {
    FUN_100652e14(0x3f800000,param_1 + 0x4f);
    uVar2 = *(uint *)((long)param_1 + 0x2fc);
joined_r0x000100197a00:
    if ((~uVar2 & 0x7f80) == 0) goto LAB_100197c00;
    uVar2 = uVar2 | 0x7f80;
  }
  *(uint *)((long)param_1 + 0x2fc) = uVar2;
  FUN_1000200a0(param_1 + 0x4f);
LAB_100197c00:
  FUN_10019825c(param_1);
  return;
}




void FUN_100197c4c(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_100197c4c_1014617e8;
  lVar2 = FUN_100341d4c();
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar3 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      puVar4 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_100198894();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_10030d844();
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x18),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  if (param_1[0x4e] != 0) {
    *(undefined4 *)(param_1 + 0x4d) = 0;
  }
  param_1[0x217] = &PTR_FUN_10145ac30;
  if ((void *)param_1[0x229] != (void *)0x0) {
    operator_delete__((void *)param_1[0x229]);
    param_1[0x229] = 0;
    param_1[0x228] = 0;
  }
  if ((void *)param_1[0x227] != (void *)0x0) {
    operator_delete__((void *)param_1[0x227]);
    param_1[0x227] = 0;
    param_1[0x226] = 0;
  }
  if (*(char *)((long)param_1 + 0x112f) < '\0') {
    operator_delete((void *)param_1[0x223]);
  }
  if (*(char *)((long)param_1 + 0x10e7) < '\0') {
    operator_delete((void *)param_1[0x21a]);
  }
  FUN_1001423e4(param_1 + 0x218,1);
  param_1[0x203] = &PTR_FUN_10145ac30;
  if ((void *)param_1[0x215] != (void *)0x0) {
    operator_delete__((void *)param_1[0x215]);
    param_1[0x215] = 0;
    param_1[0x214] = 0;
  }
  if ((void *)param_1[0x213] != (void *)0x0) {
    operator_delete__((void *)param_1[0x213]);
    param_1[0x213] = 0;
    param_1[0x212] = 0;
  }
  if (*(char *)((long)param_1 + 0x108f) < '\0') {
    operator_delete((void *)param_1[0x20f]);
  }
  if (*(char *)((long)param_1 + 0x1047) < '\0') {
    operator_delete((void *)param_1[0x206]);
  }
  FUN_1001423e4(param_1 + 0x204,1);
  if (*(char *)((long)param_1 + 0x1017) < '\0') {
    operator_delete((void *)param_1[0x200]);
  }
  if (*(char *)((long)param_1 + 0xfff) < '\0') {
    operator_delete((void *)param_1[0x1fd]);
  }
  if (*(char *)((long)param_1 + 0xfe7) < '\0') {
    operator_delete((void *)param_1[0x1fa]);
  }
  if (*(char *)((long)param_1 + 0xfcf) < '\0') {
    operator_delete((void *)param_1[0x1f7]);
  }
  if ((void *)param_1[0x1f6] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f6]);
    param_1[0x1f6] = 0;
    param_1[0x1f5] = 0;
  }
  thunk_FUN_1000160a0(param_1 + 0x1ef);
  thunk_FUN_1000160a0(param_1 + 0x1e9);
  param_1[0x1be] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1d5);
  FUN_10064e2bc(param_1 + 0x1be);
  FUN_10064221c(param_1 + 0x1ad);
  FUN_10064221c(param_1 + 0x19c);
  FUN_10064221c(param_1 + 0x18b);
  thunk_FUN_100651068(param_1 + 0x165);
  thunk_FUN_100651068(param_1 + 0x13f);
  param_1[0x121] = &PTR_FUN_1014a7108;
  param_1[0x138] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13b);
  FUN_10064e2bc(param_1 + 0x121);
  param_1[0x103] = &PTR_FUN_1014a7108;
  param_1[0x11a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11d);
  FUN_10064e2bc(param_1 + 0x103);
  param_1[0xe5] = &PTR_FUN_1014a7108;
  param_1[0xfc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xff);
  FUN_10064e2bc(param_1 + 0xe5);
  param_1[199] = &PTR_FUN_1014a7108;
  param_1[0xde] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe1);
  FUN_10064e2bc(param_1 + 199);
  param_1[0xa9] = &PTR_FUN_1014a7108;
  param_1[0xc0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc3);
  FUN_10064e2bc(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_1014a7108;
  param_1[0xa2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa5);
  FUN_10064e2bc(param_1 + 0x8b);
  param_1[0x6d] = &PTR_FUN_1014a7108;
  param_1[0x84] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x87);
  FUN_10064e2bc(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_1014a7108;
  param_1[0x66] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x69);
  FUN_10064e2bc(param_1 + 0x4f);
  if ((void *)param_1[0x4e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4e]);
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
  }
  FUN_10003bec8(param_1);
  return;
}




void thunk_FUN_100197c4c(void)

{
  FUN_100197c4c();
  return;
}




void FUN_100197fc4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100197c4c();
  operator_delete(pvVar1);
  return;
}




void FUN_100197fd8(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1001312c0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_100342b1c(param_2,param_1 + 0xfb8);
  }
  if (*(byte *)(param_1 + 0x1160) == uVar2) {
    return;
  }
  *(byte *)(param_1 + 0x1160) = (byte)uVar2;
  FUN_100197960(param_1);
  return;
}




void FUN_100198034(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_10003330c(local_38,&DAT_101d91198);
    FUN_1004ef16c(local_38);
    uVar2 = FUN_10030d844();
    FUN_10003330c(local_50,local_38);
    plVar3 = (long *)(param_1 + 0xfb8);
    if (*(char *)(param_1 + 0xfcf) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    uVar2 = FUN_10030d540(uVar2,local_50,plVar3);
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  FUN_1001980e0(param_1,uVar2);
  return;
}




void FUN_1001980e0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_68;
  
  *(uint *)(param_1 + 0xe74) =
       *(uint *)(param_1 + 0xe74) & 0xfffffff8 |
       *(uint *)(param_1 + 0xe74) & 3 | (uint)(0 < param_2) << 2;
  if (0 < param_2) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = FUN_100088a94(param_1 + 0xdf0,1);
      FUN_100652cac(uVar1,PTR_s_build___InventoryCommon_atlas_10184e108,"64x64_hero_mastery_star");
      local_68 = uVar1;
      FUN_100047df4(param_1 + 0x268,&local_68);
      if (iVar3 != 0) {
        FUN_10064e72c(0,uVar1,3,uVar2,1);
        FUN_10064e72c(0,uVar1,0,uVar2,0);
      }
      iVar3 = iVar3 + 1;
      uVar2 = uVar1;
    } while (param_2 != iVar3);
  }
  FUN_1006557ec(param_1 + 0xdf0);
  FUN_10019825c(param_1);
  return;
}




void FUN_1001981e4(void)

{
  return;
}




void FUN_1001981e8(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  FUN_10064e47c(param_3 + 0x818);
  uVar2 = param_1;
  FUN_10064e47c(param_1,param_1,param_3 + 0x278);
  fVar1 = (float)uVar2;
  FUN_100652e60(param_3 + 0x278);
  FUN_10064e47c(param_1,(param_2 - fVar1) + (param_2 - fVar1),param_3 + 0x728);
  FUN_10019825c(param_3);
  return;
}




void FUN_10019825c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float local_78;
  undefined4 uStack_74;
  
  uVar7 = (**(code **)(*param_3 + 0x48))();
  fVar10 = (float)uVar7;
  fVar11 = fVar10 * 0.8;
  local_78 = fVar10;
  uStack_74 = param_2;
  FUN_10065179c(fVar11,0,0x3f800000,param_3 + 0x13f);
  fVar8 = 0.0;
  FUN_10065179c(uVar7,0,0x3f800000,param_3 + 0x165);
  plVar1 = param_3 + 0xa9;
  FUN_1006531b0(plVar1);
  fVar5 = (float)FUN_1006531b0(plVar1);
  FUN_10064e47c(fVar11,(fVar8 * fVar11) / fVar5,plVar1);
  FUN_10064e47c(fVar10 * 0.5,0x42480000,param_3 + 199);
  FUN_10064e48c(param_3 + 0x121,&local_78);
  plVar2 = param_3 + 0xe5;
  FUN_10064e5ec(0,0,plVar2,2,param_3,2);
  FUN_10064e5ec(0,0,param_3 + 0x121,2,param_3,2);
  plVar3 = param_3 + 0x8b;
  FUN_10064e5ec(0xc1200000,0x41200000,plVar3,1,param_3 + 0x4f,1);
  if ((*(byte *)((long)param_3 + 0x4dc) >> 2 & 1) == 0) {
    uVar6 = 0xc1a00000;
    uVar9 = 0x41a00000;
    uVar7 = 1;
    uVar4 = 1;
    plVar3 = param_3 + 0x4f;
  }
  else {
    uVar6 = 0;
    uVar9 = 0;
    uVar7 = 5;
    uVar4 = 7;
  }
  FUN_10064e5ec(uVar6,uVar9,param_3 + 0x6d,uVar7,plVar3,uVar4);
  fVar10 = -10.0;
  FUN_10064e5ec(0,0xc1200000,param_3 + 0x1be,6,plVar2,6);
  FUN_100652e60(plVar2);
  FUN_10064e5ec(0,fVar10 * 0.25,plVar1,8,plVar2,8);
  FUN_10064e5ec(0,0,param_3 + 0x13f,6,plVar1,4);
  FUN_10064e5ec(0,0,param_3 + 199,0,param_3,0);
  FUN_10064e5ec(0,0,param_3 + 0x103,8,param_3,8);
  return;
}




void FUN_10019847c(long param_1,long param_2,long param_3,string *param_4,string *param_5,
                  string *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_100146c30(param_1 + 0x1020,param_2 + 8);
  std::string::operator=((string *)(param_1 + 0x1030),(string *)(param_2 + 0x18));
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x1050) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x1048) = uVar5;
  *(undefined8 *)(param_1 + 0x1060) = uVar4;
  *(undefined8 *)(param_1 + 0x1058) = uVar3;
  *(undefined8 *)(param_1 + 0x1070) = uVar2;
  *(undefined8 *)(param_1 + 0x1068) = uVar1;
  std::string::operator=((string *)(param_1 + 0x1078),(string *)(param_2 + 0x60));
  FUN_1000153b4(param_1 + 0x1090,param_2 + 0x78);
  FUN_1000153b4(param_1 + 0x10a0,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x10b0) = *(undefined4 *)(param_2 + 0x98);
  FUN_100146c30(param_1 + 0x10c0,param_3 + 8);
  std::string::operator=((string *)(param_1 + 0x10d0),(string *)(param_3 + 0x18));
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  uVar1 = *(undefined8 *)(param_3 + 0x50);
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x10f0) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + 0x10e8) = uVar5;
  *(undefined8 *)(param_1 + 0x1100) = uVar4;
  *(undefined8 *)(param_1 + 0x10f8) = uVar3;
  *(undefined8 *)(param_1 + 0x1110) = uVar2;
  *(undefined8 *)(param_1 + 0x1108) = uVar1;
  std::string::operator=((string *)(param_1 + 0x1118),(string *)(param_3 + 0x60));
  FUN_1000153b4(param_1 + 0x1130,param_3 + 0x78);
  FUN_1000153b4(param_1 + 0x1140,param_3 + 0x88);
  *(undefined4 *)(param_1 + 0x1150) = *(undefined4 *)(param_3 + 0x98);
  std::string::operator=((string *)(param_1 + 0xfd0),param_4);
  std::string::operator=((string *)(param_1 + 0xfe8),param_5);
  std::string::operator=((string *)(param_1 + 0x1000),param_6);
  FUN_10019825c(param_1);
  return;
}




void FUN_1001985d4(long param_1,int *param_2)

{
  if (*param_2 == *(int *)(param_1 + 0x1158)) {
    return;
  }
  *(int *)(param_1 + 0x1158) = *param_2;
  FUN_100197960();
  return;
}




void FUN_1001985f0(long param_1,int *param_2)

{
  if (*param_2 == *(int *)(param_1 + 0x115c)) {
    return;
  }
  *(int *)(param_1 + 0x115c) = *param_2;
  FUN_100197960();
  return;
}




void FUN_10019860c(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1001312c0();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x1161) = 0;
  }
  else {
    uVar3 = FUN_1000160dc(param_1 + 0xf48);
    bVar1 = (uVar3 & 0xff00000000) != 0;
    uVar4 = FUN_100341d4c();
    uVar2 = FUN_100342b1c(uVar4,param_1 + 0xfb8);
    if (((bool)*(char *)(param_1 + 0x1161) == bVar1) && (*(byte *)(param_1 + 0x1160) == uVar2))
    goto LAB_100198678;
    *(bool *)(param_1 + 0x1161) = bVar1;
  }
  *(byte *)(param_1 + 0x1160) = (byte)uVar2;
LAB_100198678:
  FUN_100197960(param_1);
  return;
}




void FUN_10019868c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_1001312c0();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x1162) == '\0') {
      return;
    }
    *(char *)(param_1 + 0x1162) = '\0';
  }
  else {
    uVar2 = FUN_1000160dc(param_1 + 0xf78);
    bVar1 = (uVar2 & 0xff00000000) != 0;
    if ((bool)*(char *)(param_1 + 0x1162) == bVar1) {
      return;
    }
    *(char *)(param_1 + 0x1162) = bVar1;
  }
  FUN_100197960(param_1);
  return;
}




void FUN_100198700(long param_1)

{
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
  FUN_100652cdc(param_1 + 0x818,"inventory_hero_portrait_frame_selected");
  *(uint *)(param_1 + 0x98c) = *(uint *)(param_1 + 0x98c) | 4;
  FUN_10019825c(param_1);
  return;
}




void FUN_100198754(long param_1)

{
  FUN_100652cdc(param_1 + 0x818,"inventory_hero_portrait_frame_standard");
  *(uint *)(param_1 + 0x98c) = *(uint *)(param_1 + 0x98c) & 0xfffffffb;
  FUN_10019825c(param_1);
  return;
}




void FUN_100198790(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100198814(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_100197fd8(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1001312c0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_100342b1c(param_2,param_1 + 0xfb8);
  }
  if (*(byte *)(param_1 + 0x1160) == uVar2) {
    return;
  }
  *(byte *)(param_1 + 0x1160) = (byte)uVar2;
  FUN_100197960(param_1);
  return;
}




void FUN_100198814(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
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




void thunk_FUN_100198034(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  void *apvStack_50 [2];
  char cStack_39;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_10003330c(apvStack_38,&DAT_101d91198);
    FUN_1004ef16c(apvStack_38);
    uVar2 = FUN_10030d844();
    FUN_10003330c(apvStack_50,apvStack_38);
    plVar3 = (long *)(param_1 + 0xfb8);
    if (*(char *)(param_1 + 0xfcf) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    uVar2 = FUN_10030d540(uVar2,apvStack_50,plVar3);
    if (cStack_39 < '\0') {
      operator_delete(apvStack_50[0]);
    }
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  FUN_1001980e0(param_1,uVar2);
  return;
}




void FUN_100198894(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




long * FUN_100198904(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_100198b18_101461968;
  puVar4 = puVar4 + 0x17;
  FUN_10064e264(puVar4);
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4c;
  thunk_FUN_1005357f4(plVar2);
  param_1[0x191] = 0;
  param_1[0x192] = param_2;
  plVar3 = param_1 + 0x193;
  thunk_FUN_100652c08(plVar3);
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b3] = 0x404000003f800000;
  param_1[0x1b4] = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x192],1);
  (**(code **)(*(long *)param_1[0x192] + 0x78))((long *)param_1[0x192],plVar3,1);
  plVar5 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(param_1,plVar5);
  (**(code **)(*plVar5 + 0x68))(plVar5,puVar4,(int)*(float *)(param_1 + 0x1b3),2);
  (**(code **)(*plVar5 + 0x68))(plVar5,param_1[0x192],(int)*(float *)((long)param_1 + 0xd9c),2);
  local_80 = (code *)CONCAT71(local_80._1_7_,9);
  FUN_100534ebc(plVar2,&local_80);
  lVar6 = thunk_FUN_10064de70();
  param_1[0x191] = lVar6;
  FUN_100534e34(plVar2,lVar6);
  FUN_100652cac(plVar1,DAT_101854a08,"main_nav_background");
  FUN_100652cac(plVar3,DAT_101854a08,"popup_content_shadow_overlay");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  local_58 = FUN_100644a94("UI_MENU_CLEAR_TAB");
  local_80 = FUN_100198b0c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  return param_1;
}




void FUN_100198b0c(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_100199238(param_1,in_x4);
  return;
}




long * thunk_FUN_100198904(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_100198b18_101461968;
  puVar4 = puVar4 + 0x17;
  FUN_10064e264(puVar4);
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4c;
  thunk_FUN_1005357f4(plVar2);
  param_1[0x191] = 0;
  param_1[0x192] = param_2;
  plVar3 = param_1 + 0x193;
  thunk_FUN_100652c08(plVar3);
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b3] = 0x404000003f800000;
  param_1[0x1b4] = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x192],1);
  (**(code **)(*(long *)param_1[0x192] + 0x78))((long *)param_1[0x192],plVar3,1);
  plVar5 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(param_1,plVar5);
  (**(code **)(*plVar5 + 0x68))(plVar5,puVar4,(int)*(float *)(param_1 + 0x1b3),2);
  (**(code **)(*plVar5 + 0x68))(plVar5,param_1[0x192],(int)*(float *)((long)param_1 + 0xd9c),2);
  pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,9);
  FUN_100534ebc(plVar2,&pcStack_80);
  lVar6 = thunk_FUN_10064de70();
  param_1[0x191] = lVar6;
  FUN_100534e34(plVar2,lVar6);
  FUN_100652cac(plVar1,DAT_101854a08,"main_nav_background");
  FUN_100652cac(plVar3,DAT_101854a08,"popup_content_shadow_overlay");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uStack_58 = FUN_100644a94("UI_MENU_CLEAR_TAB");
  pcStack_80 = FUN_100198b0c;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_80);
  return param_1;
}




void FUN_100198b18(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100198b18_101461968;
  param_1[0x191] = 0;
  if ((void *)param_1[0x1b2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b2]);
    param_1[0x1b2] = 0;
    param_1[0x1b1] = 0;
  }
  param_1[0x193] = &PTR_FUN_1014a7108;
  param_1[0x1aa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ad);
  FUN_10064e2bc(param_1 + 0x193);
  thunk_FUN_100534a3c(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100198b18(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100198b18_101461968;
  param_1[0x191] = 0;
  if ((void *)param_1[0x1b2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b2]);
    param_1[0x1b2] = 0;
    param_1[0x1b1] = 0;
  }
  param_1[0x193] = &PTR_FUN_1014a7108;
  param_1[0x1aa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ad);
  FUN_10064e2bc(param_1 + 0x193);
  thunk_FUN_100534a3c(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100198bc4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100198b18();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_100198bdc(void)

{
  FUN_100198bdc();
  return;
}




void FUN_100198bdc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined4 local_48;
  float fStack_44;
  
  (**(code **)(*param_3 + 0x90))();
  if (*(int *)((long)param_3 + 0xda4) == 1) {
    FUN_10064e3cc(param_3 + 0x17);
    FUN_10064e514(param_3 + 0x4c,(ulong)(uint)(int)param_2 << 0x20);
  }
  plVar1 = param_3 + 0x17;
  local_48 = FUN_10064e3cc(plVar1);
  fStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x2e,&local_48);
  local_48 = FUN_10064e3cc(plVar1);
  fStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x4c,&local_48);
  if ((int)param_3[0x1b1] != 0) {
    uVar3 = 0;
    lVar4 = 8;
    do {
      lVar2 = *(long *)(param_3[0x1b2] + lVar4);
      fVar5 = (float)FUN_10064e3cc(plVar1);
      FUN_10065179c(fVar5 + -90.0,0,0x3f800000,lVar2 + 0xf0);
      param_2 = 3.0;
      FUN_10064e5ec(0x41500000,*(long *)(param_3[0x1b2] + lVar4) + 0x220,8,
                    *(long *)(param_3[0x1b2] + lVar4) + 0xf0,1);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 < *(uint *)(param_3 + 0x1b1));
  }
  local_48 = (**(code **)(*(long *)param_3[0x192] + 0x48))();
  fStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x193,&local_48);
  return;
}




void FUN_100198d1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  undefined1 auStack_48 [8];
  
  uVar1 = FUN_1001b127c(*(undefined8 *)(param_1 + 0xc90));
  pvVar3 = operator_new(0x8c0);
  lVar4 = FUN_1001992b4();
  *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) | 0x20;
  FUN_100534ad8(param_1 + 0x260,pvVar3,1);
  FUN_10064e504(pvVar3,0xc800000000);
  if (*(int *)(param_1 + 0xda4) == 1) {
    puVar5 = (undefined8 *)&DAT_101872ba4;
  }
  else {
    local_78 = (code *)CONCAT62(local_78._2_6_,0x57);
    puVar5 = &local_78;
  }
  FUN_10064e5b8(pvVar3,puVar5);
  FUN_1006513c0((long)pvVar3 + 0xf0,param_3);
  if ((param_4 != 0) && (iVar2 = FUN_1004d2524(param_4), iVar2 != 0)) {
    FUN_1001c3fc8((long)pvVar3 + 0x220,param_4);
  }
  local_50 = DAT_101dbd458;
  local_78 = FUN_100198eec;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = (void *)param_1;
  local_58 = pvVar3;
  FUN_10001554c((long)pvVar3 + 8,&local_78);
  local_50 = DAT_101dbd484;
  local_78 = FUN_100198eec;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = (void *)param_1;
  local_58 = pvVar3;
  FUN_10001554c((long)pvVar3 + 8,&local_78);
  local_78 = (code *)CONCAT44(uVar1,param_5);
  local_70 = pvVar3;
  FUN_100198ef8(param_1 + 0xd88,&local_78);
  FUN_100199950(*(long *)(param_1 + 0xd90),
                *(long *)(param_1 + 0xd90) + (ulong)*(uint *)(param_1 + 0xd88) * 0x10,auStack_48);
  (**(code **)(**(long **)(param_1 + 0xc88) + 0x50))();
  if (*(int *)(param_1 + 0xd88) != 0) {
    uVar6 = 0;
    lVar4 = 8;
    do {
      (**(code **)(**(long **)(param_1 + 0xc88) + 0x68))
                (*(long **)(param_1 + 0xc88),*(undefined8 *)(*(long *)(param_1 + 0xd90) + lVar4),0,2
                );
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar6 < *(uint *)(param_1 + 0xd88));
  }
  (**(code **)(**(long **)(param_1 + 0xc88) + 0x78))(*(long **)(param_1 + 0xc88),0,1);
  FUN_100198bdc(param_1);
  return;
}




void FUN_100198eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100199054(param_1,param_4,param_5);
  return;
}




void FUN_100198ef8(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_1001998d4(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_100198f78(long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 0xd88) != 0) {
    uVar7 = 0;
    lVar6 = 8;
    do {
      uVar3 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0xd90) + lVar6) + 0x1c0);
      iVar2 = FUN_1004e3654(uVar3,param_3);
      if (iVar2 != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0xd90) + lVar6);
        uVar5 = 0x10;
        if (param_2 == 0) {
          uVar5 = 0;
        }
        *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xffffffef | uVar5;
        lVar6 = *(long *)(*(long *)(param_1 + 0xd90) + lVar6);
        uVar1 = *(uint *)(lVar6 + 0x84);
        uVar5 = 0xff;
        if (param_2 == 0) {
          uVar5 = 0x4c;
        }
        if (uVar5 == (uVar1 >> 7 & 0xff)) {
          return;
        }
        *(uint *)(lVar6 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar5 << 7;
        FUN_1000200a0();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < *(uint *)(param_1 + 0xd88));
  }
  return;
}




void FUN_100199054(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(uint *)(param_1 + 0xd88) != 0) {
    uVar1 = 0;
    plVar2 = (long *)(*(long *)(param_1 + 0xd90) + 8);
    do {
      if (*plVar2 == param_3) {
        FUN_1001990b0(param_1,uVar1,1);
        break;
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 2;
    } while (*(uint *)(param_1 + 0xd88) != uVar1);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1001990b0(long param_1,uint param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0xda0) = param_2;
  FUN_1001b1390(*(undefined8 *)(param_1 + 0xc90),
                *(undefined4 *)(*(long *)(param_1 + 0xd90) + (ulong)param_2 * 0x10 + 4));
  if (*(int *)(param_1 + 0xd88) != 0) {
    uVar3 = 0;
    lVar4 = 8;
    do {
      FUN_100652d8c(*(undefined8 *)(*(long *)(param_1 + 0xd90) + lVar4));
      puVar1 = &UNK_101158024;
      pcVar2 = "popup_tab_active";
      if (param_2 != uVar3) {
        puVar1 = &DAT_101158028;
        pcVar2 = "popup_tab_inactive";
      }
      FUN_100652cac(*(undefined8 *)(*(long *)(param_1 + 0xd90) + lVar4),DAT_101854a08,pcVar2);
      FUN_100651460(*(long *)(*(long *)(param_1 + 0xd90) + lVar4) + 0xf0,puVar1);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0xd88));
  }
  return;
}




void FUN_100199194(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(float *)(param_1 + 0xd98) = (float)param_2;
  *(float *)(param_1 + 0xd9c) = (float)param_3;
  uVar1 = FUN_10064e5a0();
  lVar2 = FUN_10064c7a4(uVar1,0);
  if (lVar2 != 0) {
    lVar2 = FUN_10064c7a4(uVar1,0);
    *(ushort *)(lVar2 + 0xc) =
         (ushort)(((int)*(float *)(param_1 + 0xd98) & 0xfU) << 5) |
         *(ushort *)(lVar2 + 0xc) & 0xfe1f;
  }
  lVar2 = FUN_10064c7a4(uVar1,1);
  if (lVar2 != 0) {
    lVar2 = FUN_10064c7a4(uVar1,1);
    *(ushort *)(lVar2 + 0xc) =
         (ushort)(((int)*(float *)(param_1 + 0xd9c) & 0xfU) << 5) |
         *(ushort *)(lVar2 + 0xc) & 0xfe1f;
  }
  FUN_100198bdc(param_1);
  return;
}




void FUN_100199238(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0xda0) == param_2) {
    if (param_2 == 0) {
      if (*(uint *)(param_1 + 0xd88) < 2) goto LAB_100199280;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    FUN_1001990b0(param_1,uVar1,1);
  }
LAB_100199280:
  FUN_10064e47c(0,0,*(undefined8 *)(*(long *)(param_1 + 0xd90) + (ulong)param_2 * 0x10 + 8));
  FUN_100642378(*(undefined8 *)(*(long *)(param_1 + 0xd90) + (ulong)param_2 * 0x10 + 8),1);
  return;
}




long * FUN_1001992b4(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_100652c08();
  *puVar1 = &PTR_FUN_101461ab0;
  puVar1[0x17] = &PTR_FUN_101461c10;
  puVar1 = puVar1 + 0x1e;
  thunk_FUN_100650e64(puVar1);
  thunk_FUN_1001c397c(param_1 + 0x44);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x44,1);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  plVar2 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(param_1,plVar2);
  (**(code **)(*plVar2 + 0x70))(plVar2,0x28);
  (**(code **)(*plVar2 + 0x68))(plVar2,puVar1,1,10);
  FUN_100651038(puVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1001993a8(long param_1)

{
  FUN_10064e5ec(0x41500000,0x40400000,param_1 + 0x220,8,param_1 + 0xf0,1);
  return;
}




void FUN_1001993c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101461ab0;
  param_1[0x17] = &PTR_FUN_101461c10;
  param_1[0x44] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x110);
  thunk_FUN_100651068(param_1 + 0xe9);
  thunk_FUN_100651068(param_1 + 0xc3);
  thunk_FUN_100651068(param_1 + 0x9d);
  param_1[0x7f] = &PTR_FUN_1014a7108;
  param_1[0x96] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x99);
  FUN_10064e2bc(param_1 + 0x7f);
  param_1[0x55] = &PTR_FUN_1014a6db0;
  param_1[0x6c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x6f);
  FUN_10064e2bc(param_1 + 0x55);
  FUN_10064221c(param_1 + 0x44);
  thunk_FUN_100651068(param_1 + 0x1e);
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001994b4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101461ab0;
  param_1[0x17] = &PTR_FUN_101461c10;
  param_1[0x44] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x110);
  thunk_FUN_100651068(param_1 + 0xe9);
  thunk_FUN_100651068(param_1 + 0xc3);
  thunk_FUN_100651068(param_1 + 0x9d);
  param_1[0x7f] = &PTR_FUN_1014a7108;
  param_1[0x96] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x99);
  FUN_10064e2bc(param_1 + 0x7f);
  param_1[0x55] = &PTR_FUN_1014a6db0;
  param_1[0x6c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x6f);
  FUN_10064e2bc(param_1 + 0x55);
  FUN_10064221c(param_1 + 0x44);
  thunk_FUN_100651068(param_1 + 0x1e);
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001995a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_101461ab0;
  *param_1 = &PTR_FUN_101461c10;
  param_1[0x2d] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0xf9);
  thunk_FUN_100651068(param_1 + 0xd2);
  thunk_FUN_100651068(param_1 + 0xac);
  thunk_FUN_100651068(param_1 + 0x86);
  param_1[0x68] = &PTR_FUN_1014a7108;
  param_1[0x7f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x82);
  FUN_10064e2bc(param_1 + 0x68);
  param_1[0x3e] = &PTR_FUN_1014a6db0;
  param_1[0x55] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x58);
  FUN_10064e2bc(param_1 + 0x3e);
  FUN_10064221c(param_1 + 0x2d);
  thunk_FUN_100651068(param_1 + 7);
  *puVar1 = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064e2bc(puVar1);
  return;
}




void FUN_100199694(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + -0x17;
  *puVar2 = &PTR_FUN_101461ab0;
  *param_1 = &PTR_FUN_101461c10;
  param_1[0x2d] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0xf9);
  thunk_FUN_100651068(param_1 + 0xd2);
  thunk_FUN_100651068(param_1 + 0xac);
  thunk_FUN_100651068(param_1 + 0x86);
  param_1[0x68] = &PTR_FUN_1014a7108;
  param_1[0x7f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x82);
  FUN_10064e2bc(param_1 + 0x68);
  param_1[0x3e] = &PTR_FUN_1014a6db0;
  param_1[0x55] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x58);
  FUN_10064e2bc(param_1 + 0x3e);
  FUN_10064221c(param_1 + 0x2d);
  thunk_FUN_100651068(param_1 + 7);
  *puVar2 = &PTR_FUN_1014a7108;
  *param_1 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064e2bc(puVar2);
  operator_delete(pvVar1);
  return;
}




void FUN_100199788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0xcc);
  thunk_FUN_100651068(param_1 + 0xa5);
  thunk_FUN_100651068(param_1 + 0x7f);
  thunk_FUN_100651068(param_1 + 0x59);
  param_1[0x3b] = &PTR_FUN_1014a7108;
  param_1[0x52] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x55);
  FUN_10064e2bc(param_1 + 0x3b);
  param_1[0x11] = &PTR_FUN_1014a6db0;
  param_1[0x28] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10019982c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0xcc);
  thunk_FUN_100651068(param_1 + 0xa5);
  thunk_FUN_100651068(param_1 + 0x7f);
  thunk_FUN_100651068(param_1 + 0x59);
  param_1[0x3b] = &PTR_FUN_1014a7108;
  param_1[0x52] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x55);
  FUN_10064e2bc(param_1 + 0x3b);
  param_1[0x11] = &PTR_FUN_1014a6db0;
  param_1[0x28] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001998d4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
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




void FUN_100199950(int *param_1,int *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
LAB_10019997c:
  piVar11 = param_2 + -4;
  piVar6 = param_1;
LAB_100199984:
  param_1 = piVar6;
  lVar8 = (long)param_2 - (long)param_1;
  uVar4 = lVar8 >> 4;
  switch(uVar4) {
  case 0:
  case 1:
    goto switchD_100199c1c_caseD_0;
  case 2:
    if (*piVar11 <= *param_1) {
      return;
    }
    uVar15 = *(undefined8 *)(param_1 + 2);
    uVar13 = *(undefined8 *)param_1;
    uVar14 = *(undefined8 *)piVar11;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)param_1 = uVar14;
    *(undefined8 *)(param_2 + -2) = uVar15;
    *(undefined8 *)piVar11 = uVar13;
    return;
  case 3:
    FUN_100199d20(param_1,param_1 + 4,piVar11,param_3);
    return;
  case 4:
    FUN_100199ddc(param_1,param_1 + 4,param_1 + 8,piVar11,param_3);
    return;
  case 5:
    FUN_100199e90(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,piVar11,param_3);
    return;
  default:
    if (lVar8 < 0x1f0) {
      FUN_100199f78(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar4;
    if ((long)uVar4 < 0) {
      uVar1 = uVar4 + 1;
    }
    piVar6 = param_1 + (uVar1 & 0x1ffffffffffffffe) * 2;
    if (lVar8 < 0x3e71) {
      iVar3 = FUN_100199d20(param_1,piVar6,piVar11,param_3);
    }
    else {
      uVar1 = uVar4 + 3;
      if (-1 < (long)uVar4) {
        uVar1 = uVar4;
      }
      iVar3 = FUN_100199e90(param_1,param_1 + (uVar1 & 0x3ffffffffffffffc),piVar6,
                            piVar6 + (uVar1 & 0x3ffffffffffffffc),piVar11,param_3);
    }
    iVar2 = *param_1;
    piVar7 = piVar11;
    if (iVar2 <= *piVar6) break;
    goto LAB_100199a58;
  }
  while (piVar9 = piVar7, piVar7 = piVar9 + -4, piVar7 != param_1) {
    if (*piVar6 < piVar9[-4]) goto code_r0x000100199a3c;
  }
  piVar7 = param_1 + 4;
  piVar6 = piVar7;
  if (iVar2 <= *piVar11) {
    while( true ) {
      if (piVar6 == piVar11) {
        return;
      }
      if (*piVar6 < iVar2) break;
      piVar6 = piVar6 + 4;
    }
    uVar15 = *(undefined8 *)(piVar6 + 2);
    uVar13 = *(undefined8 *)piVar6;
    uVar14 = *(undefined8 *)piVar11;
    piVar7 = piVar6 + 4;
    *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)piVar6 = uVar14;
    *(undefined8 *)(param_2 + -2) = uVar15;
    *(undefined8 *)piVar11 = uVar13;
  }
  piVar9 = piVar11;
  if (piVar7 == piVar11) {
    return;
  }
  while( true ) {
    piVar6 = piVar7 + -4;
    do {
      piVar12 = piVar6;
      piVar6 = piVar12 + 4;
    } while (*param_1 <= *piVar6);
    piVar7 = piVar12 + 8;
    do {
      piVar10 = piVar9;
      piVar9 = piVar10 + -4;
    } while (*piVar9 < *param_1);
    if (piVar9 <= piVar6) break;
    uVar15 = *(undefined8 *)(piVar12 + 6);
    uVar13 = *(undefined8 *)piVar6;
    uVar14 = *(undefined8 *)piVar9;
    *(undefined8 *)(piVar12 + 6) = *(undefined8 *)(piVar10 + -2);
    *(undefined8 *)piVar6 = uVar14;
    *(undefined8 *)(piVar10 + -2) = uVar15;
    *(undefined8 *)piVar9 = uVar13;
  }
  goto LAB_100199984;
code_r0x000100199a3c:
  uVar15 = *(undefined8 *)(param_1 + 2);
  uVar13 = *(undefined8 *)param_1;
  uVar14 = *(undefined8 *)piVar7;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar9 + -2);
  *(undefined8 *)param_1 = uVar14;
  *(undefined8 *)(piVar9 + -2) = uVar15;
  *(undefined8 *)piVar7 = uVar13;
  iVar3 = iVar3 + 1;
LAB_100199a58:
  piVar9 = param_1 + 4;
  piVar10 = piVar6;
  piVar12 = piVar9;
  if (piVar9 < piVar7) {
    while( true ) {
      piVar6 = piVar10;
      piVar9 = piVar12 + -4;
      do {
        piVar10 = piVar9;
        piVar9 = piVar10 + 4;
      } while (*piVar6 < *piVar9);
      piVar12 = piVar10 + 8;
      do {
        piVar5 = piVar7;
        piVar7 = piVar5 + -4;
      } while (*piVar7 <= *piVar6);
      if (piVar7 < piVar9) break;
      uVar15 = *(undefined8 *)(piVar10 + 6);
      uVar13 = *(undefined8 *)piVar9;
      uVar14 = *(undefined8 *)piVar7;
      *(undefined8 *)(piVar10 + 6) = *(undefined8 *)(piVar5 + -2);
      *(undefined8 *)piVar9 = uVar14;
      *(undefined8 *)(piVar5 + -2) = uVar15;
      *(undefined8 *)piVar7 = uVar13;
      iVar3 = iVar3 + 1;
      piVar10 = piVar7;
      if (piVar9 != piVar6) {
        piVar10 = piVar6;
      }
    }
  }
  if ((piVar9 != piVar6) && (*piVar9 < *piVar6)) {
    uVar15 = *(undefined8 *)(piVar9 + 2);
    uVar13 = *(undefined8 *)piVar9;
    uVar14 = *(undefined8 *)piVar6;
    *(undefined8 *)(piVar9 + 2) = *(undefined8 *)(piVar6 + 2);
    *(undefined8 *)piVar9 = uVar14;
    *(undefined8 *)(piVar6 + 2) = uVar15;
    *(undefined8 *)piVar6 = uVar13;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar4 = FUN_10019a078(param_1,piVar9,param_3);
    iVar3 = FUN_10019a078(piVar9 + 4,param_2,param_3);
    if (iVar3 != 0) goto LAB_100199bfc;
    piVar6 = piVar9 + 4;
    if ((uVar4 & 1) != 0) goto LAB_100199984;
  }
  if ((long)param_2 - (long)piVar9 <= (long)piVar9 - (long)param_1) {
    FUN_100199950(piVar9 + 4,param_2,param_3);
    param_2 = piVar9;
    goto LAB_10019997c;
  }
  FUN_100199950(param_1,piVar9,param_3);
  piVar6 = piVar9 + 4;
  goto LAB_100199984;
LAB_100199bfc:
  param_2 = piVar9;
  if ((uVar4 & 1) != 0) {
switchD_100199c1c_caseD_0:
    return;
  }
  goto LAB_10019997c;
}




undefined8 FUN_100199d20(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *param_2;
  if (*param_1 < iVar1) {
    if (iVar1 < *param_3) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_3 + 2) = uVar3;
      *(undefined8 *)param_3 = uVar2;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
      if (*param_2 < *param_3) {
        uVar3 = *(undefined8 *)(param_2 + 2);
        uVar2 = *(undefined8 *)param_2;
        uVar4 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar4;
        *(undefined8 *)(param_3 + 2) = uVar3;
        *(undefined8 *)param_3 = uVar2;
        return 2;
      }
    }
  }
  else {
    if (*param_3 <= iVar1) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
    if (*param_1 < *param_2) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
      return 2;
    }
  }
  return 1;
}




ulong FUN_100199ddc(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_100199d20();
  if (*param_3 < *param_4) {
    uVar4 = *(undefined8 *)(param_3 + 2);
    uVar3 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar5;
    *(undefined8 *)(param_4 + 2) = uVar4;
    *(undefined8 *)param_4 = uVar3;
    iVar1 = (int)uVar2;
    if (*param_2 < *param_3) {
      uVar4 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar5;
      *(undefined8 *)(param_3 + 2) = uVar4;
      *(undefined8 *)param_3 = uVar3;
      if (*param_1 < *param_2) {
        uVar4 = *(undefined8 *)(param_1 + 2);
        uVar3 = *(undefined8 *)param_1;
        uVar5 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar5;
        *(undefined8 *)(param_2 + 2) = uVar4;
        *(undefined8 *)param_2 = uVar3;
        uVar2 = (ulong)(iVar1 + 3);
      }
      else {
        uVar2 = (ulong)(iVar1 + 2);
      }
    }
    else {
      uVar2 = (ulong)(iVar1 + 1);
    }
  }
  return uVar2;
}




ulong FUN_100199e90(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_100199ddc();
  if (*param_4 < *param_5) {
    uVar4 = *(undefined8 *)(param_4 + 2);
    uVar3 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar5;
    *(undefined8 *)(param_5 + 2) = uVar4;
    *(undefined8 *)param_5 = uVar3;
    iVar1 = (int)uVar2;
    if (*param_3 < *param_4) {
      uVar4 = *(undefined8 *)(param_3 + 2);
      uVar3 = *(undefined8 *)param_3;
      uVar5 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar5;
      *(undefined8 *)(param_4 + 2) = uVar4;
      *(undefined8 *)param_4 = uVar3;
      if (*param_2 < *param_3) {
        uVar4 = *(undefined8 *)(param_2 + 2);
        uVar3 = *(undefined8 *)param_2;
        uVar5 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar5;
        *(undefined8 *)(param_3 + 2) = uVar4;
        *(undefined8 *)param_3 = uVar3;
        if (*param_1 < *param_2) {
          uVar4 = *(undefined8 *)(param_1 + 2);
          uVar3 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = uVar5;
          *(undefined8 *)(param_2 + 2) = uVar4;
          *(undefined8 *)param_2 = uVar3;
          uVar2 = (ulong)(iVar1 + 4);
        }
        else {
          uVar2 = (ulong)(iVar1 + 3);
        }
      }
      else {
        uVar2 = (ulong)(iVar1 + 2);
      }
    }
    else {
      uVar2 = (ulong)(iVar1 + 1);
    }
  }
  return uVar2;
}




void FUN_100199f78(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_100199d20(param_1,param_1 + 4,param_1 + 8,param_3);
  if (param_1 + 0xc != param_2) {
    lVar5 = 0;
    piVar9 = param_1 + 0xc;
    piVar10 = param_1 + 8;
    do {
      piVar6 = piVar9;
      iVar1 = *piVar6;
      if (*piVar10 < iVar1) {
        uVar7 = *(undefined8 *)(piVar6 + 1);
        iVar2 = piVar6[3];
        lVar3 = lVar5;
        do {
          lVar8 = lVar3;
          *(undefined8 *)((long)param_1 + lVar8 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x28);
          *(undefined8 *)((long)param_1 + lVar8 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x20);
          piVar9 = param_1;
          if (lVar8 == -0x20) goto LAB_10019a024;
          lVar3 = lVar8 + -0x10;
        } while (*(int *)((long)param_1 + lVar8 + 0x10) < iVar1);
        piVar9 = (int *)((long)param_1 + lVar8 + 0x20);
LAB_10019a024:
        *piVar9 = iVar1;
        *(undefined8 *)(piVar9 + 1) = uVar7;
        piVar9[3] = iVar2;
      }
      lVar5 = lVar5 + 0x10;
      piVar9 = piVar6 + 4;
      piVar10 = piVar6;
    } while (piVar6 + 4 != param_2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != lVar4) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10019a078(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  bVar4 = true;
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    goto switchD_10019a0d0_caseD_0;
  case 2:
    piVar11 = param_2 + -4;
    if (*param_1 < *piVar11) {
      uVar13 = *(undefined8 *)(param_1 + 2);
      uVar9 = *(undefined8 *)param_1;
      uVar14 = *(undefined8 *)piVar11;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)param_1 = uVar14;
      *(undefined8 *)(param_2 + -2) = uVar13;
      *(undefined8 *)piVar11 = uVar9;
    }
    break;
  case 3:
    FUN_100199d20(param_1,param_1 + 4,param_2 + -4,param_3);
    break;
  case 4:
    FUN_100199ddc(param_1,param_1 + 4,param_1 + 8,param_2 + -4,param_3);
    break;
  case 5:
    FUN_100199e90(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
    break;
  default:
    FUN_100199d20(param_1,param_1 + 4,param_1 + 8,param_3);
    if (param_1 + 0xc != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      piVar11 = param_1 + 0xc;
      piVar12 = param_1 + 8;
      do {
        piVar8 = piVar11;
        iVar1 = *piVar8;
        if (*piVar12 < iVar1) {
          uVar9 = *(undefined8 *)(piVar8 + 1);
          iVar2 = piVar8[3];
          lVar3 = lVar6;
          do {
            lVar10 = lVar3;
            *(undefined8 *)((long)param_1 + lVar10 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x28);
            *(undefined8 *)((long)param_1 + lVar10 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x20);
            piVar11 = param_1;
            if (lVar10 == -0x20) goto LAB_10019a180;
            lVar3 = lVar10 + -0x10;
          } while (*(int *)((long)param_1 + lVar10 + 0x10) < iVar1);
          piVar11 = (int *)((long)param_1 + lVar10 + 0x20);
LAB_10019a180:
          *piVar11 = iVar1;
          *(undefined8 *)(piVar11 + 1) = uVar9;
          piVar11[3] = iVar2;
          iVar7 = iVar7 + 1;
          if (iVar7 == 8) {
            bVar4 = piVar8 + 4 == param_2;
            goto switchD_10019a0d0_caseD_0;
          }
        }
        lVar6 = lVar6 + 0x10;
        piVar11 = piVar8 + 4;
        piVar12 = piVar8;
      } while (piVar8 + 4 != param_2);
    }
  }
  bVar4 = true;
switchD_10019a0d0_caseD_0:
  if (*(long *)PTR____stack_chk_guard_101444218 != lVar5) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(bVar4);
  }
  return;
}




void FUN_10019a244(long param_1,string *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_100126c88();
  if (*(int *)(param_1 + 0x28) == 1) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
  }
  else {
    if (*(int *)(param_1 + 0x28) != 0) {
      return;
    }
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  if (iVar1 == 0) {
    ppuVar2 = ppuVar3;
  }
  FUN_10001549c(local_38,*ppuVar2);
  std::string::operator=(param_2,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




undefined8 * FUN_10019a2d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  code *local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  lVar9 = FUN_1005302b0();
  lVar9 = lVar9 + 0x30;
  FUN_1006421a8(lVar9);
  *param_1 = &PTR_FUN_101461d58;
  param_1[6] = &PTR_FUN_101461dd0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  FUN_10064e264(param_1 + 0x19);
  puVar1 = param_1 + 0x30;
  FUN_1006421a8(puVar1);
  param_1[0x30] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001c10a4(param_1 + 0x41);
  puVar2 = param_1 + 0x1b5;
  FUN_1006421a8(puVar2);
  param_1[0x1b5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar3 = param_1 + 0x1c6;
  thunk_FUN_100181304(puVar3,param_2);
  puVar4 = param_1 + 0x47d;
  thunk_FUN_100181304(puVar4,param_2);
  uVar10 = thunk_FUN_100181304(param_1 + 0x734,param_2);
  param_1[0x9ed] = 0;
  param_1[0x9ec] = 0;
  param_1[0x9eb] = 0;
  param_1[0x9ee] = 0x300000001;
  param_1[0x9f0] = 0;
  param_1[0x9ef] = 0;
  *(undefined4 *)(param_1 + 0x9f1) = DAT_101dc0b88;
  uVar6 = 0x403e8;
  if ((int)param_2 == 0) {
    uVar6 = 1000;
  }
  *(short *)(param_1 + 0x9f2) = (short)uVar6;
  *(byte *)((long)param_1 + 0x4f92) =
       (byte)((uint)uVar6 >> 0x10) |
       (byte)(((uint)(*(byte *)((long)param_1 + 0x4f92) >> 5) << 0x15) >> 0x10);
  (**(code **)(param_1[6] + 0x78))(lVar9,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(lVar9,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x41,1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_100642bd8(puVar2,puVar4,1);
  FUN_100642bd8(puVar2,uVar10,1);
  if ((*(float *)(param_1 + 0x1d0) != 0.5) || (*(float *)((long)param_1 + 0xe84) != 0.5)) {
    param_1[0x1d0] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar3);
  }
  FUN_100651700(param_1 + 0x2a9,0);
  uVar5 = *(uint *)((long)param_1 + 0xeb4);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar3);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar3,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar11 = 1.2;
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x1cf) != fVar7) || (*(float *)((long)param_1 + 0xe7c) != fVar7)) {
    *(float *)(param_1 + 0x1cf) = fVar7;
    *(float *)((long)param_1 + 0xe7c) = fVar7;
    FUN_1000200a0(puVar3);
  }
  FUN_1001b495c(0,puVar3);
  param_1[0x1d1] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0xeb4) = *(uint *)((long)param_1 + 0xeb4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x487) != 0.5) || (*(float *)((long)param_1 + 0x243c) != 0.5)) {
    param_1[0x487] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_100651700(param_1 + 0x560,0);
  uVar5 = *(uint *)((long)param_1 + 0x246c);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x246c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar4);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar4,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x486) != fVar7) || (*(float *)((long)param_1 + 0x2434) != fVar7)) {
    *(float *)(param_1 + 0x486) = fVar7;
    *(float *)((long)param_1 + 0x2434) = fVar7;
    FUN_1000200a0(puVar4);
  }
  FUN_1001b495c(0,puVar4);
  param_1[0x488] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x246c) = *(uint *)((long)param_1 + 0x246c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x73e) != 0.5) || (*(float *)((long)param_1 + 0x39f4) != 0.5)) {
    param_1[0x73e] = &DAT_3f0000003f000000;
    FUN_1000200a0(uVar10);
  }
  FUN_100651700(param_1 + 0x817,0);
  uVar5 = *(uint *)((long)param_1 + 0x3a24);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a24) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(uVar10);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,uVar10,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x73d) != fVar7) || (*(float *)((long)param_1 + 0x39ec) != fVar7)) {
    *(float *)(param_1 + 0x73d) = fVar7;
    *(float *)((long)param_1 + 0x39ec) = fVar7;
    FUN_1000200a0(uVar10);
  }
  FUN_1001b495c(0,uVar10);
  param_1[0x73f] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x3a24) = *(uint *)((long)param_1 + 0x3a24) & 0xfffffffb;
  uVar6 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_10019a8ac;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1c7,&local_a0);
  local_78 = uVar6;
  local_a0 = FUN_10019a8ac;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x47e,&local_a0);
  local_78 = uVar6;
  local_a0 = FUN_10019a8ac;
  local_90 = 0;
  local_88 = 0;
  local_80 = 2;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x735,&local_a0);
  local_78 = DAT_101dbd48c;
  local_a0 = FUN_10019a900;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&local_a0);
  local_78 = DAT_101dbd460;
  local_a0 = FUN_10019a900;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&local_a0);
  uVar5 = *(uint *)((long)param_1 + 0xb4);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_1000200a0(lVar9);
  }
  return param_1;
}




void FUN_10019a8ac(long param_1)

{
  undefined4 in_w4;
  
  *(undefined4 *)(param_1 + 0x4f7c) = in_w4;
  *(byte *)(param_1 + 0x4f92) = *(byte *)(param_1 + 0x4f92) | 1;
  *(undefined2 *)(param_1 + 0x4f90) = *(undefined2 *)(param_1 + 0x4f90);
  *(uint *)(param_1 + 0xeb4) = *(uint *)(param_1 + 0xeb4) & 0xffffffef;
  *(uint *)(param_1 + 0x246c) = *(uint *)(param_1 + 0x246c) & 0xffffffef;
  *(uint *)(param_1 + 0x3a24) = *(uint *)(param_1 + 0x3a24) & 0xffffffef;
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xffffffef;
  return;
}




void FUN_10019a900(long param_1)

{
  undefined8 in_x4;
  
  FUN_100530368(param_1,in_x4);
  *(byte *)(param_1 + 0x4f92) = *(byte *)(param_1 + 0x4f92) | 1;
  *(uint *)(param_1 + 0xeb4) = *(uint *)(param_1 + 0xeb4) & 0xffffffef;
  *(uint *)(param_1 + 0x246c) = *(uint *)(param_1 + 0x246c) & 0xffffffef;
  *(uint *)(param_1 + 0x3a24) = *(uint *)(param_1 + 0x3a24) & 0xffffffef;
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xffffffef;
  return;
}




undefined8 * thunk_FUN_10019a2d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar9 = FUN_1005302b0();
  lVar9 = lVar9 + 0x30;
  FUN_1006421a8(lVar9);
  *param_1 = &PTR_FUN_101461d58;
  param_1[6] = &PTR_FUN_101461dd0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  FUN_10064e264(param_1 + 0x19);
  puVar1 = param_1 + 0x30;
  FUN_1006421a8(puVar1);
  param_1[0x30] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001c10a4(param_1 + 0x41);
  puVar2 = param_1 + 0x1b5;
  FUN_1006421a8(puVar2);
  param_1[0x1b5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar3 = param_1 + 0x1c6;
  thunk_FUN_100181304(puVar3,param_2);
  puVar4 = param_1 + 0x47d;
  thunk_FUN_100181304(puVar4,param_2);
  uVar10 = thunk_FUN_100181304(param_1 + 0x734,param_2);
  param_1[0x9ed] = 0;
  param_1[0x9ec] = 0;
  param_1[0x9eb] = 0;
  param_1[0x9ee] = 0x300000001;
  param_1[0x9f0] = 0;
  param_1[0x9ef] = 0;
  *(undefined4 *)(param_1 + 0x9f1) = DAT_101dc0b88;
  uVar6 = 0x403e8;
  if ((int)param_2 == 0) {
    uVar6 = 1000;
  }
  *(short *)(param_1 + 0x9f2) = (short)uVar6;
  *(byte *)((long)param_1 + 0x4f92) =
       (byte)((uint)uVar6 >> 0x10) |
       (byte)(((uint)(*(byte *)((long)param_1 + 0x4f92) >> 5) << 0x15) >> 0x10);
  (**(code **)(param_1[6] + 0x78))(lVar9,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(lVar9,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x41,1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_100642bd8(puVar2,puVar4,1);
  FUN_100642bd8(puVar2,uVar10,1);
  if ((*(float *)(param_1 + 0x1d0) != 0.5) || (*(float *)((long)param_1 + 0xe84) != 0.5)) {
    param_1[0x1d0] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar3);
  }
  FUN_100651700(param_1 + 0x2a9,0);
  uVar5 = *(uint *)((long)param_1 + 0xeb4);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar3);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar3,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar11 = 1.2;
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x1cf) != fVar7) || (*(float *)((long)param_1 + 0xe7c) != fVar7)) {
    *(float *)(param_1 + 0x1cf) = fVar7;
    *(float *)((long)param_1 + 0xe7c) = fVar7;
    FUN_1000200a0(puVar3);
  }
  FUN_1001b495c(0,puVar3);
  param_1[0x1d1] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0xeb4) = *(uint *)((long)param_1 + 0xeb4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x487) != 0.5) || (*(float *)((long)param_1 + 0x243c) != 0.5)) {
    param_1[0x487] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_100651700(param_1 + 0x560,0);
  uVar5 = *(uint *)((long)param_1 + 0x246c);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x246c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar4);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar4,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x486) != fVar7) || (*(float *)((long)param_1 + 0x2434) != fVar7)) {
    *(float *)(param_1 + 0x486) = fVar7;
    *(float *)((long)param_1 + 0x2434) = fVar7;
    FUN_1000200a0(puVar4);
  }
  FUN_1001b495c(0,puVar4);
  param_1[0x488] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x246c) = *(uint *)((long)param_1 + 0x246c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x73e) != 0.5) || (*(float *)((long)param_1 + 0x39f4) != 0.5)) {
    param_1[0x73e] = &DAT_3f0000003f000000;
    FUN_1000200a0(uVar10);
  }
  FUN_100651700(param_1 + 0x817,0);
  uVar5 = *(uint *)((long)param_1 + 0x3a24);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a24) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(uVar10);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,uVar10,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x73d) != fVar7) || (*(float *)((long)param_1 + 0x39ec) != fVar7)) {
    *(float *)(param_1 + 0x73d) = fVar7;
    *(float *)((long)param_1 + 0x39ec) = fVar7;
    FUN_1000200a0(uVar10);
  }
  FUN_1001b495c(0,uVar10);
  param_1[0x73f] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x3a24) = *(uint *)((long)param_1 + 0x3a24) & 0xfffffffb;
  uVar6 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_10019a8ac;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1c7,&pcStack_a0);
  uStack_78 = uVar6;
  pcStack_a0 = FUN_10019a8ac;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 1;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x47e,&pcStack_a0);
  uStack_78 = uVar6;
  pcStack_a0 = FUN_10019a8ac;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 2;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x735,&pcStack_a0);
  uStack_78 = DAT_101dbd48c;
  pcStack_a0 = FUN_10019a900;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&pcStack_a0);
  uStack_78 = DAT_101dbd460;
  pcStack_a0 = FUN_10019a900;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&pcStack_a0);
  uVar5 = *(uint *)((long)param_1 + 0xb4);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_1000200a0(lVar9);
  }
  return param_1;
}




undefined8 * FUN_10019a96c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101461d58;
  param_1[6] = &PTR_FUN_101461dd0;
  FUN_10019b824();
  *(undefined4 *)(param_1 + 0x9ef) = 0;
  *(undefined4 *)(param_1 + 0x9ee) = 1;
  *(undefined2 *)(param_1 + 0x9f2) = 1000;
  *(byte *)((long)param_1 + 0x4f92) = *(byte *)((long)param_1 + 0x4f92) & 0xf5;
  if (*(char *)((long)param_1 + 0x4f6f) < '\0') {
    operator_delete((void *)param_1[0x9eb]);
  }
  FUN_10003bd40(param_1 + 0x734);
  FUN_10003bd40(param_1 + 0x47d);
  FUN_10003bd40(param_1 + 0x1c6);
  FUN_10064221c(param_1 + 0x1b5);
  FUN_1000cbf18(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064221c(param_1 + 6);
  return param_1;
}




undefined8 * thunk_FUN_10019a96c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101461d58;
  param_1[6] = &PTR_FUN_101461dd0;
  FUN_10019b824();
  *(undefined4 *)(param_1 + 0x9ef) = 0;
  *(undefined4 *)(param_1 + 0x9ee) = 1;
  *(undefined2 *)(param_1 + 0x9f2) = 1000;
  *(byte *)((long)param_1 + 0x4f92) = *(byte *)((long)param_1 + 0x4f92) & 0xf5;
  if (*(char *)((long)param_1 + 0x4f6f) < '\0') {
    operator_delete((void *)param_1[0x9eb]);
  }
  FUN_10003bd40(param_1 + 0x734);
  FUN_10003bd40(param_1 + 0x47d);
  FUN_10003bd40(param_1 + 0x1c6);
  FUN_10064221c(param_1 + 0x1b5);
  FUN_1000cbf18(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064221c(param_1 + 6);
  return param_1;
}




void FUN_10019aa54(long param_1)

{
  FUN_10019a96c(param_1 + -0x30);
  return;
}




void FUN_10019aa5c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10019a96c();
  operator_delete(pvVar1);
  return;
}




void FUN_10019aa70(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10019a96c(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_10019aa88(long param_1,string *param_2,long param_3)

{
  long lVar1;
  ushort *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ushort uVar12;
  uint uVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  
  std::string::operator=((string *)(param_1 + 0x4f58),param_2);
  uVar8 = *(undefined2 *)(param_3 + 0x7e);
  bVar7 = *(byte *)(param_1 + 0x4f92);
  *(undefined2 *)(param_1 + 0x4f90) = uVar8;
  *(byte *)(param_1 + 0x4f92) = bVar7;
  *(float *)(param_1 + 0x4f78) = (float)(int)*(short *)(param_3 + 0x7c);
  bVar6 = *(byte *)(param_3 + 0x80);
  *(undefined2 *)(param_1 + 0x4f90) = uVar8;
  *(byte *)(param_1 + 0x4f92) = (byte)(((bVar6 & 1) << 0x11) >> 0x10) | bVar7 & 0xfd;
  FUN_10053035c(param_1,*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_3 + 0x48),
                *(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
  lVar1 = param_1 + 0xe30;
  FUN_100181af8(lVar1,param_3 + 0x10);
  lVar3 = param_1 + 0x23e8;
  FUN_100181af8(lVar3,param_3 + 0x20);
  lVar4 = param_1 + 0x39a0;
  FUN_100181af8(lVar4,param_3 + 0x30);
  iVar9 = FUN_1004e3624(param_3 + 0x10);
  uVar10 = FUN_100642d08(lVar1);
  if (iVar9 == 0) {
    if ((uVar10 & 1) == 0) {
      FUN_100642bd8(param_1 + 0xda8,lVar1,1);
    }
    uVar10 = *(uint *)(param_1 + 0xeb4) | 0x14;
  }
  else {
    if (uVar10 != 0) {
      FUN_1006423ec(lVar1,1);
    }
    uVar10 = *(uint *)(param_1 + 0xeb4) & 0xffffffeb;
  }
  *(uint *)(param_1 + 0xeb4) = uVar10;
  iVar9 = FUN_1004e3624(param_3 + 0x20);
  uVar10 = FUN_100642d08(lVar3);
  if (iVar9 == 0) {
    if ((uVar10 & 1) == 0) {
      FUN_100642bd8(param_1 + 0xda8,lVar3,1);
    }
    uVar10 = *(uint *)(param_1 + 0x246c) | 0x14;
  }
  else {
    if (uVar10 != 0) {
      FUN_1006423ec(lVar3,1);
    }
    uVar10 = *(uint *)(param_1 + 0x246c) & 0xffffffeb;
  }
  *(uint *)(param_1 + 0x246c) = uVar10;
  iVar9 = FUN_1004e3624(param_3 + 0x30);
  uVar10 = FUN_100642d08(lVar4);
  if (iVar9 == 0) {
    if ((uVar10 & 1) == 0) {
      FUN_100642bd8(param_1 + 0xda8,lVar4,1);
    }
    uVar10 = *(uint *)(param_1 + 0x3a24) | 0x14;
  }
  else {
    if (uVar10 != 0) {
      FUN_1006423ec(lVar4,1);
    }
    uVar10 = *(uint *)(param_1 + 0x3a24) & 0xffffffeb;
  }
  *(uint *)(param_1 + 0x3a24) = uVar10;
  uVar5 = *(undefined4 *)(param_3 + 0x68);
  *(undefined4 *)(param_1 + 0x4f70) = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 0x4f74) = uVar5;
  bVar6 = *(byte *)(param_3 + 0x80);
  *(undefined2 *)(param_1 + 0x4f90) = *(undefined2 *)(param_1 + 0x4f90);
  *(byte *)(param_1 + 0x4f92) =
       (byte)(((bVar6 & 2) << 0x12) >> 0x10) | *(byte *)(param_1 + 0x4f92) & 0xf7;
  FUN_100641464(&uStack_64,&local_68);
  if ((((uint)*(byte *)(param_1 + 0x4f92) << 0x10) >> 0x13 & 1) == 0) {
    uVar10 = *(uint *)(param_1 + 0x14c) & 0xffffffeb;
  }
  else {
    FUN_10064e47c(uStack_64,local_68,param_1 + 200);
    uVar10 = *(uint *)(param_1 + 0x14c) | 0x10;
  }
  *(uint *)(param_1 + 0x14c) = uVar10;
  if ((((ulong)*(byte *)(param_3 + 0x80) << 0x20) >> 0x22 & 1) == 0) {
    uVar13 = 0;
    uVar10 = *(uint *)(param_1 + 0x28c);
  }
  else {
    if (((*(byte *)(param_1 + 0xeb4) >> 2 & 1) == 0) &&
       ((*(byte *)(param_1 + 0x246c) >> 2 & 1) == 0)) {
      uVar10 = *(uint *)(param_1 + 0x28c);
      if ((*(byte *)(param_1 + 0x3a24) >> 2 & 1) == 0) {
        uVar13 = 0;
        goto LAB_10019ad44;
      }
    }
    else {
      uVar10 = *(uint *)(param_1 + 0x28c);
    }
    uVar13 = 0x10;
  }
LAB_10019ad44:
  *(uint *)(param_1 + 0x28c) = uVar13 | uVar10 & 0xffffffef;
  FUN_10019ae74(param_1,param_3);
  FUN_10019afc0(param_1);
  FUN_10019b0ac(param_1,param_3);
  lVar1 = param_1 + 0x30;
  FUN_100642324(lVar1);
  if ((*(uint *)(param_1 + 0xb4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  lVar3 = DAT_101dbd2f8;
  uVar12 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar2 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar12 * 0x40 + 0x10);
  if (uVar12 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar12 = 0xffff;
  }
  else {
    uVar12 = *puVar2;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar12;
  *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
  FUN_10063ee9c(puVar2);
  *(undefined ***)puVar2 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
  *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  FUN_100642b14(lVar1,puVar2);
  uVar11 = FUN_100047714();
  FUN_10063fce0(0x3f4ccccd);
  FUN_10063f0e8(0x3e4ccccd,uVar11);
  FUN_10063f130(uVar11,FUN_10001f4c4);
  FUN_100642b14(lVar1,uVar11);
  return;
}




void FUN_10019ae74(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long *local_68;
  
  FUN_10019b824();
  if (*param_2 != 0) {
    lVar5 = *(long *)(param_2 + 2);
    lVar6 = (ulong)*param_2 * 0x38;
    fVar8 = 0.0;
    uVar4 = extraout_x1;
    do {
      local_68 = (long *)0x0;
      uVar1 = *(uint *)(lVar5 + 0x28);
      if (uVar1 < 2) {
        local_68 = (long *)FUN_10019b8ac(param_1,lVar5);
        if (local_68 != (long *)0x0) goto LAB_10019af20;
        uVar4 = 0;
      }
      else {
        if (uVar1 == 3) {
          local_68 = (long *)FUN_10019ba7c(param_1,lVar5);
        }
        else {
          if (uVar1 != 2) goto LAB_10019af8c;
          local_68 = (long *)FUN_10019b9c0(param_1,uVar4);
        }
LAB_10019af20:
        FUN_100642bd8(param_1 + 0xda8,local_68,1);
        FUN_10019bafc(param_1 + 0xb8,&local_68);
        plVar2 = local_68;
        fVar9 = *(float *)(lVar5 + 0x30);
        fVar7 = (float)(**(code **)(*local_68 + 0x50))(local_68);
        fVar9 = fVar9 + fVar7 * -0.5;
        fVar7 = *(float *)(plVar2 + 8);
        bVar3 = false;
        if ((fVar7 == fVar9) &&
           (bVar3 = false, !NAN(*(float *)((long)plVar2 + 0x44)) && !NAN(fVar8))) {
          bVar3 = *(float *)((long)plVar2 + 0x44) == fVar8;
        }
        if (!bVar3) {
          *(float *)(plVar2 + 8) = fVar9;
          *(float *)((long)plVar2 + 0x44) = fVar8;
          FUN_1000200a0(plVar2);
        }
        (**(code **)(*local_68 + 0x50))();
        fVar8 = *(float *)(lVar5 + 0x2c) + fVar8 + fVar7;
        uVar4 = extraout_x1_00;
      }
LAB_10019af8c:
      lVar5 = lVar5 + 0x38;
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
  }
  FUN_10019b1bc(param_1);
  return;
}




void FUN_10019afc0(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x4f92) & 0x10) == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x4f88);
  *(undefined2 *)(param_1 + 0x4f90) = *(undefined2 *)(param_1 + 0x4f90);
  *(byte *)(param_1 + 0x4f92) = *(byte *)(param_1 + 0x4f92) & 0xef;
  plVar2 = *(long **)(param_1 + 0x4f80);
  if (plVar2 != (long *)0x0) {
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x4f80);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x4f80) = 0;
            *piVar1 = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3dcccccd,uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x4f80) = 0;
      *piVar1 = DAT_101dc0b88;
    }
  }
  FUN_100094bd4(0,0);
  return;
}




void FUN_10019b0ac(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_2 + 0x70) != 0) {
    *(undefined2 *)(param_1 + 0x4f90) = *(undefined2 *)(param_1 + 0x4f90);
    *(byte *)(param_1 + 0x4f92) = *(byte *)(param_1 + 0x4f92) | 0x10;
    lVar5 = FUN_1003e10f0();
    puVar6 = (undefined8 *)**(long **)(lVar5 + 0x168);
    plVar1 = *(long **)(lVar5 + 0x168);
    while (puVar6 != (undefined8 *)0x0) {
      iVar4 = _strcmp((char *)*puVar6,*(char **)(param_2 + 0x70));
      if (iVar4 == 0) {
        FUN_10002ba2c(*(undefined8 *)(*plVar1 + 8));
        lVar5 = FUN_100094b5c(0x3ecccccd);
        plVar1 = (long *)0x0;
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 0x28);
        }
        plVar2 = (long *)&DAT_101dc0b88;
        if (lVar5 != 0) {
          plVar2 = plVar1 + 1;
        }
        lVar3 = *plVar2;
        *(long **)(param_1 + 0x4f80) = plVar1;
        *(int *)(param_1 + 0x4f88) = (int)lVar3;
        if (lVar5 == 0) {
          return;
        }
        if ((int)lVar3 != (int)plVar1[1]) {
          *(undefined8 *)(param_1 + 0x4f80) = 0;
          *(int *)(param_1 + 0x4f88) = DAT_101dc0b88;
          return;
        }
        lVar5 = (**(code **)(*plVar1 + 0x10))();
        if (lVar5 == 0) {
          return;
        }
        FUN_100094bd4(*(undefined4 *)(param_2 + 0x78),1);
        return;
      }
      puVar6 = (undefined8 *)plVar1[1];
      plVar1 = plVar1 + 1;
    }
  }
  return;
}




void FUN_10019b1bc(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float local_5c;
  undefined1 *local_58;
  
  FUN_100641464(&local_5c,&local_60);
  if (*(uint *)(param_3 + 0xb8) == 0) {
    fVar8 = 40.0;
  }
  else {
    plVar3 = *(long **)(*(long *)(param_3 + 0xc0) + (ulong)*(uint *)(param_3 + 0xb8) * 8 + -8);
    fVar8 = *(float *)((long)plVar3 + 0x44);
    (**(code **)(*plVar3 + 0x50))();
    fVar8 = param_2 + fVar8 + 30.0 + 10.0;
  }
  plVar3 = (long *)(param_3 + 0xe30);
  FUN_10064259c(plVar3);
  fVar8 = fVar8 + param_2 * 0.5;
  FUN_100655b6c(param_3 + 0x2bd0);
  iVar2 = FUN_1004e3624();
  if (iVar2 == 0) {
LAB_10019b2a0:
    plVar4 = (long *)(param_3 + 0x23e8);
    FUN_100655b6c(param_3 + 0x4188);
    iVar2 = FUN_1004e3624();
    if (iVar2 != 0) {
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4f90));
      bVar1 = false;
      if ((*(float *)(param_3 + 0x2428) == fVar6 * -0.166) &&
         (bVar1 = false, !NAN(*(float *)(param_3 + 0x242c)) && !NAN(fVar8))) {
        bVar1 = *(float *)(param_3 + 0x242c) == fVar8;
      }
      if (!bVar1) {
        *(float *)(param_3 + 0x2428) = fVar6 * -0.166;
        *(float *)(param_3 + 0x242c) = fVar8;
        FUN_1000200a0(plVar4);
      }
      local_58 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(param_3 + 0x23e8) + 0x28))(plVar4,&local_58);
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4f90));
      fVar7 = *(float *)(param_3 + 0xe70);
      bVar1 = false;
      if ((fVar7 == fVar6 * 0.166) &&
         (bVar1 = false, !NAN(*(float *)(param_3 + 0xe74)) && !NAN(fVar8))) {
        bVar1 = *(float *)(param_3 + 0xe74) == fVar8;
      }
      if (!bVar1) {
        *(float *)(param_3 + 0xe70) = fVar6 * 0.166;
        *(float *)(param_3 + 0xe74) = fVar8;
        FUN_1000200a0(plVar3);
      }
      goto LAB_10019b34c;
    }
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4f90));
    bVar1 = false;
    if ((*(float *)(param_3 + 0xe70) == fVar6 * 0.33) &&
       (bVar1 = false, !NAN(*(float *)(param_3 + 0xe74)) && !NAN(fVar8))) {
      bVar1 = *(float *)(param_3 + 0xe74) == fVar8;
    }
    if (!bVar1) {
      *(float *)(param_3 + 0xe70) = fVar6 * 0.33;
      *(float *)(param_3 + 0xe74) = fVar8;
      FUN_1000200a0(plVar3);
    }
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_3 + 0xe30) + 0x28))(plVar3,&local_58);
    if ((*(float *)(param_3 + 0x39e0) != 0.0) || (*(float *)(param_3 + 0x39e4) != fVar8)) {
      *(undefined4 *)(param_3 + 0x39e0) = 0;
      *(float *)(param_3 + 0x39e4) = fVar8;
      FUN_1000200a0(param_3 + 0x39a0);
    }
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_3 + 0x39a0) + 0x28))(param_3 + 0x39a0,&local_58);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4f90));
    fVar7 = *(float *)(param_3 + 0x2428);
    bVar1 = false;
    if ((fVar7 == fVar6 * -0.33) &&
       (bVar1 = false, !NAN(*(float *)(param_3 + 0x242c)) && !NAN(fVar8))) {
      bVar1 = *(float *)(param_3 + 0x242c) == fVar8;
    }
    if (!bVar1) {
      *(float *)(param_3 + 0x2428) = fVar6 * -0.33;
      *(float *)(param_3 + 0x242c) = fVar8;
      FUN_1000200a0(plVar4);
    }
    pcVar5 = *(code **)(*plVar4 + 0x28);
  }
  else {
    FUN_100655b6c(param_3 + 0x4188);
    iVar2 = FUN_1004e3624();
    if (iVar2 == 0) goto LAB_10019b2a0;
    fVar7 = *(float *)(param_3 + 0xe74);
    bVar1 = false;
    if ((*(float *)(param_3 + 0xe70) == 0.0) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar8))) {
      bVar1 = fVar7 == fVar8;
    }
    if (!bVar1) {
      *(undefined4 *)(param_3 + 0xe70) = 0;
      *(float *)(param_3 + 0xe74) = fVar8;
      FUN_1000200a0(plVar3);
    }
LAB_10019b34c:
    pcVar5 = *(code **)(*plVar3 + 0x28);
    plVar4 = plVar3;
  }
  local_58 = &DAT_3f0000003f000000;
  (*pcVar5)(plVar4,&local_58);
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4f90));
  FUN_1006425d0(param_3 + 0xda8,0,0,1,1);
  FUN_1001c2d98(fVar8 + 60.0,fVar7 + 60.0,0xbf800000,param_3 + 0x208,
                *(byte *)(param_3 + 0x4f92) >> 2 & 1);
  local_58 = *(undefined1 **)(param_3 + 600);
  (**(code **)(*(long *)(param_3 + 0x30) + 0x28))((long *)(param_3 + 0x30),&local_58);
  fVar8 = 30.0;
  FUN_1001c34ac(0,0x41f00000,(undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,param_3 + 0x208,
                param_3 + 0xda8);
  iVar2 = *(int *)(param_3 + 0x4f70);
  if (iVar2 == 3) {
    fVar8 = -40.0;
    FUN_100642888(param_3 + 0x180,0,0,1,1);
    fVar8 = (local_60 + -40.0) - fVar8;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        return;
      }
      if ((*(float *)(param_3 + 0x1c0) == local_5c * 0.5) && (*(float *)(param_3 + 0x1c4) == 40.0))
      {
        return;
      }
      *(float *)(param_3 + 0x1c0) = local_5c * 0.5;
      *(undefined4 *)(param_3 + 0x1c4) = 0x42200000;
      goto LAB_10019b5c8;
    }
    FUN_100642888(param_3 + 0x180,0,0,1,1);
    fVar8 = (local_60 - fVar8) * 0.5;
  }
  if ((*(float *)(param_3 + 0x1c0) == local_5c * 0.5) && (*(float *)(param_3 + 0x1c4) == fVar8)) {
    return;
  }
  *(float *)(param_3 + 0x1c0) = local_5c * 0.5;
  *(float *)(param_3 + 0x1c4) = fVar8;
LAB_10019b5c8:
  FUN_1000200a0(param_3 + 0x180);
  return;
}




void FUN_10019b5ec(float param_1,long param_2)

{
  float fVar1;
  
  if ((*(byte *)(param_2 + 0x4f92) & 1) == 0) {
    fVar1 = *(float *)(param_2 + 0x4f78);
    if ((0.0 < fVar1) &&
       (fVar1 = fVar1 - param_1, *(float *)(param_2 + 0x4f78) = fVar1, fVar1 <= 0.0)) {
      *(undefined4 *)(param_2 + 0x4f7c) = 0;
      *(undefined2 *)(param_2 + 0x4f90) = *(undefined2 *)(param_2 + 0x4f90);
      *(byte *)(param_2 + 0x4f92) = *(byte *)(param_2 + 0x4f92) | 1;
    }
    return;
  }
  FUN_10019b644();
  return;
}




void FUN_10019b644(long param_1)

{
  long lVar1;
  ushort *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined1 auStack_60 [32];
  
  FUN_100530368(param_1,*(undefined4 *)(param_1 + 0x4f7c));
  FUN_10019afc0(param_1);
  lVar1 = param_1 + 0x30;
  FUN_100642324(lVar1);
  uVar3 = *(uint *)(param_1 + 0xb4);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0xb4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(lVar1);
  }
  uVar5 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3ecccccd,uVar5);
  FUN_10063f130(uVar5,FUN_10001f4ac);
  FUN_100642b14(lVar1,uVar5);
  lVar4 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar2 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
  if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = *puVar2;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
  *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
  FUN_10063ee9c(puVar2);
  *(undefined ***)puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  FUN_100642b14(lVar1,puVar2);
  *(undefined2 *)(param_1 + 0x4f90) = *(undefined2 *)(param_1 + 0x4f90);
  *(byte *)(param_1 + 0x4f92) = *(byte *)(param_1 + 0x4f92) & 0xfe;
  uVar5 = FUN_100644a94("EVENT_INFO_PANEL_CLOSED");
  FUN_100644aec(auStack_60,uVar5,0);
  FUN_100644c34(lVar1,auStack_60,1);
  if ((((uint)*(byte *)(param_1 + 0x4f92) << 0x10) >> 0x11 & 1) != 0) {
    FUN_10012027c(0);
  }
  FUN_10019b824(param_1);
  *(undefined4 *)(param_1 + 0x4f78) = 0;
  *(undefined4 *)(param_1 + 0x4f70) = 1;
  *(undefined2 *)(param_1 + 0x4f90) = 1000;
  *(byte *)(param_1 + 0x4f92) = *(byte *)(param_1 + 0x4f92) & 0xf5;
  return;
}




void FUN_10019b810(long param_1)

{
  FUN_10019b5ec(param_1 + -0x30);
  return;
}




void thunk_FUN_10019b1bc(void)

{
  FUN_10019b1bc();
  return;
}




void FUN_10019b81c(long param_1)

{
  FUN_10019b1bc(param_1 + -0x30);
  return;
}




void FUN_10019b824(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xc0) + uVar5 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar5 * 8),1);
        }
        lVar4 = *(long *)(param_1 + 0xc0);
        plVar2 = *(long **)(lVar4 + uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar4 = *(long *)(param_1 + 0xc0);
        }
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
        uVar3 = (ulong)*(uint *)(param_1 + 0xb8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}




void * FUN_10019b8ac(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 **local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,DAT_101d23558);
  FUN_10019a244(param_2,local_48);
  pvVar4 = operator_new(0x130);
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  plVar5 = (long *)thunk_FUN_100650f44(pvVar4,pppuVar1);
  (**(code **)(*plVar5 + 0x138))(plVar5,param_2);
  if (*(int *)(param_2 + 0x28) == 1) {
    FUN_100655b9c((long)pvVar4 + 0xd0,*(undefined4 *)(param_1 + 0x4f74));
    if ((~*(uint *)((long)pvVar4 + 0x84) & 0x7f80) == 0) goto LAB_10019b984;
    uVar2 = *(uint *)((long)pvVar4 + 0x84) | 0x7f80;
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) goto LAB_10019b984;
    FUN_100655b9c((long)pvVar4 + 0xd0,3);
    uVar2 = *(uint *)((long)pvVar4 + 0x84);
    if ((uVar2 & 0x7f80) == 0x5900) goto LAB_10019b984;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
  }
  *(uint *)((long)pvVar4 + 0x84) = uVar2;
  FUN_1000200a0(pvVar4);
LAB_10019b984:
  uVar3 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0x4f90));
  FUN_100651708((short)uVar3,pvVar4,1);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return pvVar4;
}




void * FUN_10019b9c0(long param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  pvVar4 = operator_new(0xf0);
  uVar5 = thunk_FUN_100652c08();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if ((*(byte *)(param_1 + 0x4f92) & 4) != 0) {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  FUN_100652cac(uVar5,*ppuVar1,"white_background");
  FUN_100652dd4(pvVar4,&DAT_10115a168,2);
  uVar2 = *(uint *)((long)pvVar4 + 0x84);
  if ((uVar2 & 0x7f80) != 0x1980) {
    *(uint *)((long)pvVar4 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x1980;
    FUN_1000200a0(pvVar4);
  }
  uVar3 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0x4f90));
  FUN_10064e47c((short)uVar3,0x40000000,pvVar4);
  return pvVar4;
}




void * FUN_10019ba7c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = operator_new(0xf0);
  uVar4 = thunk_FUN_100652c08();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if ((*(byte *)(param_1 + 0x4f92) & 4) != 0) {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (-1 < *(char *)(param_2 + 0x27)) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
  }
  FUN_100652cac(uVar4,*ppuVar1,puVar2);
  return pvVar3;
}




void FUN_10019bafc(uint *param_1,undefined8 *param_2)

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
    FUN_10019bb94(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10019bb7c(void)

{
  return;
}




void FUN_10019bb80(void)

{
  return;
}




void FUN_10019bb84(void)

{
  return;
}




void FUN_10019bb88(void)

{
  return;
}




void FUN_10019bb8c(void)

{
  return;
}




void FUN_10019bb90(void)

{
  return;
}




void FUN_10019bb94(uint *param_1,uint param_2)

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




void FUN_10019bc10(void)

{
  DAT_101e3d5d0 = 0xff;
  DAT_101e3d5d2 = 0xffff;
  DAT_101e3d5d4 = 0xffff;
  DAT_101e3d5d6 = 0xffbc9c44;
  DAT_101e3d5da = 0xff1166f2;
  DAT_101e3d5de = 0xffe0e0e0;
  DAT_101e3d5e2 = 0xffa0a0a0;
  DAT_101e3d5e6 = 0xff8c8c8c;
  DAT_101e3d5ea = 0xff322213;
  DAT_101e3d5ee = 0xff091911;
  DAT_101e3d5f2 = 0xff170c19;
  DAT_101e3d5f6 = 0xff241a14;
  DAT_101e3d5fa = 0xff14171c;
  DAT_101e3d5fe = 0xff221911;
  DAT_101e3d602 = 0xff1a1416;
  DAT_101e3d606 = 0xff121414;
  DAT_101e3d60a = 0xff1a1809;
  DAT_101e3d60e = 0xff141414;
  DAT_101e3d612 = 0xff141414;
  DAT_101e3d616 = 0xff2929c0;
  DAT_101e3d61a = 0xff283082;
  DAT_101e3d622 = 0xff283082;
  DAT_101e3d61e = 0xff5262cc;
  DAT_101e3d626 = 0xff5262cc;
  DAT_101e3d62a = 0xff745c42;
  DAT_101e3d62e = 0xff184155;
  DAT_101e3d632 = 0xff92665e;
  DAT_101e3d636 = 0xffbc9c44;
  DAT_101e3d63a = 0xffbbae56;
  DAT_101e3d63e = 0xff8b7b01;
  DAT_101e3d642 = 0xff90b3ef;
  DAT_101e3d646 = 0xff728ebe;
  DAT_101e3d64a = 0xff19459d;
  DAT_101e3d64e = 0xff9d877b;
  DAT_101e3d652 = 0xffcbb1a3;
  DAT_101e3d656 = 0xff3f6fb5;
  DAT_101e3d65a = 0xffc5c5c5;
  DAT_101e3d65e = 0xff4fc1f1;
  DAT_101e3d662 = 0xff606060;
  DAT_101e3d666 = 0xffc5ff7b;
  DAT_101e3d66a = 0xff5271eb;
  DAT_101e3d66e = 0xfffae076;
  DAT_101e3d672 = 0xff3ac8f6;
  DAT_101e3d676 = 0xffaaaaaa;
  DAT_101e3d67a = 0xffe19400;
  DAT_101e3d67e = 0xffe19400;
  DAT_101e3d682 = 0xffe550b2;
  DAT_101e3d686 = 0xfff22ae8;
  DAT_101e3d68a = 0xff005ae1;
  DAT_101e3d68e = 0xff1addfa;
  DAT_101e3d692 = 0xff2424b3;
  DAT_101e3d696 = 0xff2424b3;
  DAT_101e3d69a = 0xff646464;
  DAT_101e3d69e = 0xff92665e;
  DAT_101e3d6a2 = 0xff646037;
  DAT_101e3d6ac = 0xff1111a1;
  DAT_101e3d6a8 = 0xffffffff;
  DAT_101e3d6b4 = 0xffc8c8c8;
  DAT_101e3d6b0 = 0xff321ee1;
  DAT_101e3d6b8 = 0xff321ee1;
  DAT_101e3d6bc = 0xff7fe801;
  DAT_101e3d6c0 = 0xffffffff;
  DAT_101e3d6c4 = 0xff6259b3;
  DAT_101e3d6c8 = 0xff506e73;
  DAT_101e3d6cc = 0xff9dbf86;
  DAT_101e3d6d0 = 0xffa35244;
  DAT_101e3d6d4 = 0xffca828e;
  DAT_101e3d6d8 = 0xffa6a6a6;
  DAT_101e3d6dc = 0xffa6a6a6;
  DAT_101e3d6e0 = 0xffffffff;
  DAT_101e3d6e4 = 0xff88ea2f;
  DAT_101e3d6e8 = 0xff8c8c8c;
  DAT_101e3d6ec = 0xffffb400;
  DAT_101e3d6f0 = 0xffff00ff;
  DAT_101e3d6f4 = 0xff00aded;
  DAT_101e3d6f8 = 0xff33d3ff;
  DAT_101e3d6fc = 0xff7fe801;
  DAT_101e3d700 = 0xff282828;
  DAT_101e3d704 = 0xfff0f0f0;
  DAT_101e3d708 = 0xffa4781e;
  DAT_101e3d70c = 0xffa6654b;
  DAT_101e3d710 = 0xff93435b;
  DAT_101e3d714 = 0xff387f9c;
  DAT_101e3d718 = 0xffa3781e;
  DAT_101e3d71c = 0xffffd18a;
  DAT_101e3d720 = 0xffff61f7;
  DAT_101e3d724 = 0xff5de1f2;
  DAT_101e3d728 = 0xff80eaff;
  DAT_101e3d72c = 0xff32e00e;
  DAT_101e3d730 = 0xff5a3c10;
  DAT_101e3d734 = 0xff330b03;
  DAT_101e3d738 = 0xff33031d;
  DAT_101e3d73c = 0xff032433;
  DAT_101e3d740 = 0xff9e8e8d;
  DAT_101e3d748 = 0x4326000041900000;
  DAT_101e3d750 = 0x4326000041c00000;
  DAT_101d23558 = PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  return;
}




long * FUN_10019c2fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100655644();
  *puVar4 = &PTR_FUN_101461ed0;
  puVar4 = puVar4 + 0x2b;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"capsule_button_fill_middle");
  FUN_100652dd4(puVar4,&DAT_10115a164,2);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"capsule_button_fill_left");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1dc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar4);
  }
  uVar3 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Light_96_f_10184e1d8);
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




long * thunk_FUN_10019c2fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100655644();
  *puVar4 = &PTR_FUN_101461ed0;
  puVar4 = puVar4 + 0x2b;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x49;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x67;
  thunk_FUN_100650e64(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"capsule_button_fill_middle");
  FUN_100652dd4(puVar4,&DAT_10115a164,2);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"capsule_button_fill_left");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1dc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar4);
  }
  uVar3 = *(uint *)((long)param_1 + 0x2cc);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Light_96_f_10184e1d8);
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_10019c474(long *param_1)

{
  FUN_1006513c0(param_1 + 0x67);
                    /* WARNING: Could not recover jumptable at 0x00010019c4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_10019c4a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x158;
  FUN_10064e47c(0x43480000,0x43820000,lVar1);
  lVar2 = param_1 + 0x248;
  FUN_10064e47c(0x43020000,0x43820000,lVar2);
  FUN_10064e72c(0x80000000,lVar2,1,lVar1,3);
  FUN_10064e72c(0,lVar2,5,lVar1,5);
  FUN_10064e5ec(0x42500000,0,param_1 + 0x338,8,lVar2,8);
  FUN_1006557ec(param_1);
  return;
}




void FUN_10019c560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101461ed0;
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




void FUN_10019c5fc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101461ed0;
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
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10019c69c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_thunk_FUN_10019c7c8_101462020;
  thunk_FUN_100652c08(puVar2 + 0x11);
  thunk_FUN_100652c08(param_1 + 0x2f);
  thunk_FUN_100652c08(param_1 + 0x4d);
  thunk_FUN_100652c08(param_1 + 0x6b);
  thunk_FUN_100652c08(param_1 + 0x89);
  lVar1 = DAT_101dc1cb8;
  param_1[0xa7] = DAT_101dc1cb8;
  param_1[0xa8] = lVar1;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)((long)param_1 + 0x554) = 1;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6b,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x89,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x11,1);
  return param_1;
}




long * thunk_FUN_10019c69c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_thunk_FUN_10019c7c8_101462020;
  thunk_FUN_100652c08(puVar2 + 0x11);
  thunk_FUN_100652c08(param_1 + 0x2f);
  thunk_FUN_100652c08(param_1 + 0x4d);
  thunk_FUN_100652c08(param_1 + 0x6b);
  thunk_FUN_100652c08(param_1 + 0x89);
  lVar1 = DAT_101dc1cb8;
  param_1[0xa7] = DAT_101dc1cb8;
  param_1[0xa8] = lVar1;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)((long)param_1 + 0x554) = 1;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6b,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x89,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2 + 0x11,1);
  return param_1;
}




void FUN_10019c7c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_10019c7c8_101462020;
  uVar1 = DAT_101dc1cb8;
  param_1[0xa7] = DAT_101dc1cb8;
  param_1[0xa8] = uVar1;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  if (*(char *)((long)param_1 + 0x56f) < '\0') {
    operator_delete((void *)param_1[0xab]);
  }
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10019c8c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x538) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x540) = uVar1;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  return;
}




void thunk_FUN_10019c7c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_10019c7c8_101462020;
  uVar1 = DAT_101dc1cb8;
  param_1[0xa7] = DAT_101dc1cb8;
  param_1[0xa8] = uVar1;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  if (*(char *)((long)param_1 + 0x56f) < '\0') {
    operator_delete((void *)param_1[0xab]);
  }
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10019c8e8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10019c7c8();
  operator_delete(pvVar1);
  return;
}




void FUN_10019c8fc(long param_1)

{
  if (*(char *)(param_1 + 0x553) != '\0') {
    FUN_10019c90c();
    return;
  }
  return;
}




void FUN_10019c90c(long param_1)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar3 = *(long **)(param_1 + 0x548);
  if (plVar3 == (long *)0x0) {
    local_38 = *(ulong *)(param_1 + 0x538);
    local_40 = *(undefined8 *)(param_1 + 0x540);
  }
  else {
    if (*(char *)(param_1 + 0x554) == '\0') {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_38,&local_40);
    }
    else {
      FUN_1006429fc(plVar3,&local_38,&local_40,0,1,1,1);
    }
    lVar4 = FUN_10003d5bc(param_1);
    local_38 = CONCAT44((float)(local_38 >> 0x20) /
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20),
                        (float)local_38 / (float)*(undefined8 *)(lVar4 + 0x10));
    lVar4 = FUN_10003d5bc(param_1);
    local_40 = CONCAT44((float)((ulong)local_40 >> 0x20) /
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20),
                        (float)local_40 / (float)*(undefined8 *)(lVar4 + 0x10));
  }
  FUN_10016aeec(&local_44,&local_48,0,0);
  FUN_10064142c(&local_4c,&local_50);
  local_58 = (float)local_40 - (float)local_38;
  fVar6 = local_40._4_4_ - local_38._4_4_;
  local_4c = (float)local_44 + local_4c + 20.0;
  local_50 = (float)local_48 + local_50 + 20.0;
  fVar5 = (float)-local_48;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1b8) == (float)-local_44) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x1bc)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_1 + 0x1bc) == fVar5;
  }
  fStack_54 = fVar6;
  if (!bVar2) {
    *(float *)(param_1 + 0x1b8) = (float)-local_44;
    *(float *)(param_1 + 0x1bc) = fVar5;
    FUN_1000200a0(param_1 + 0x178);
  }
  FUN_10064e47c(local_4c,local_38._4_4_,param_1 + 0x178);
  *(uint *)(param_1 + 0x1fc) =
       *(uint *)(param_1 + 0x1fc) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  fVar5 = local_40._4_4_ + (float)-local_48;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x2a8) == (float)-local_44) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x2ac)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_1 + 0x2ac) == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x2a8) = (float)-local_44;
    *(float *)(param_1 + 0x2ac) = fVar5;
    FUN_1000200a0(param_1 + 0x268);
  }
  FUN_10064e47c(local_4c,local_50 - local_40._4_4_,param_1 + 0x268);
  *(uint *)(param_1 + 0x2ec) =
       *(uint *)(param_1 + 0x2ec) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  if ((*(float *)(param_1 + 0x398) != (float)-local_44) ||
     (*(float *)(param_1 + 0x39c) != local_38._4_4_ + (float)-local_48)) {
    *(float *)(param_1 + 0x398) = (float)-local_44;
    *(float *)(param_1 + 0x39c) = local_38._4_4_ + (float)-local_48;
    FUN_1000200a0(param_1 + 0x358);
  }
  FUN_10064e47c(local_38 & 0xffffffff,fVar6,param_1 + 0x358);
  *(uint *)(param_1 + 0x3dc) =
       *(uint *)(param_1 + 0x3dc) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  if ((*(float *)(param_1 + 0x488) != (float)local_40 - (float)local_44) ||
     (*(float *)(param_1 + 0x48c) != local_38._4_4_ + (float)-local_48)) {
    *(float *)(param_1 + 0x488) = (float)local_40 - (float)local_44;
    *(float *)(param_1 + 0x48c) = local_38._4_4_ + (float)-local_48;
    FUN_1000200a0(param_1 + 0x448);
  }
  FUN_10064e47c(local_4c - (float)local_40,fVar6,param_1 + 0x448);
  *(uint *)(param_1 + 0x4cc) =
       *(uint *)(param_1 + 0x4cc) & 0xffffffef | (uint)*(byte *)(param_1 + 0x550) << 4;
  FUN_10064e48c(param_1 + 0x88,&local_58);
  if ((*(float *)(param_1 + 200) != (float)local_38) ||
     (*(float *)(param_1 + 0xcc) != local_38._4_4_)) {
    *(ulong *)(param_1 + 200) = local_38;
    FUN_1000200a0(param_1 + 0x88);
  }
  *(uint *)(param_1 + 0x10c) =
       *(uint *)(param_1 + 0x10c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x10c) & 3 | (uint)(*(char *)(param_1 + 0x552) == '\0') << 2;
  uVar1 = *(uint *)(param_1 + 0x84);
  if (*(char *)(param_1 + 0x551) == '\0') {
    if ((uVar1 & 0x7f80) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xffff807f;
  }
  else {
    if ((uVar1 & 0x7f80) == 0x4c80) {
      return;
    }
    uVar1 = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x4c80;
  }
  *(uint *)(param_1 + 0x84) = uVar1;
  FUN_1000200a0(param_1);
  return;
}




void FUN_10019cc60(long param_1,uint param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar2 = *ppuVar1;
  if ((param_2 & 1) == 0) {
    FUN_100652cac(param_1 + 0x88,puVar2,"generic_keyhole");
  }
  FUN_100652dd4(param_1 + 0x88,&DAT_10115a164,2);
  FUN_100652cac(param_1 + 0x178,puVar2,"white_background");
  FUN_100652dd4(param_1 + 0x178,&DAT_10115a164,2);
  FUN_100652cac(param_1 + 0x268,puVar2,"white_background");
  FUN_100652dd4(param_1 + 0x268,&DAT_10115a164,2);
  FUN_100652cac(param_1 + 0x448,puVar2,"white_background");
  FUN_100652dd4(param_1 + 0x448,&DAT_10115a164,2);
  FUN_100652cac(param_1 + 0x358,puVar2,"white_background");
  FUN_100652dd4(param_1 + 0x358,&DAT_10115a164,2);
  return;
}




void FUN_10019cd6c(long param_1,string *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  std::string::operator=((string *)(param_1 + 0x558),param_2);
  uVar2 = *(undefined8 *)((long)param_3 + 0x15);
  uVar1 = *(undefined8 *)((long)param_3 + 0xd);
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x540) = param_3[1];
  *(undefined8 *)(param_1 + 0x538) = uVar3;
  *(undefined8 *)(param_1 + 0x54d) = uVar2;
  *(undefined8 *)(param_1 + 0x545) = uVar1;
  FUN_10019c90c(param_1);
  return;
}




void FUN_10019cdac(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_10019cec8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10003330c(lVar4 + -0x30,param_2);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_10019ce3c(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10019cec8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x30;
      pvVar4 = pvVar1;
      do {
        FUN_10003330c(pvVar4,pvVar2);
        FUN_10003330c((long)pvVar4 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar4 = (void *)((long)pvVar4 + 0x30);
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar5 = (ulong)*param_1 * 0x30;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




long * FUN_10019cfbc(long *param_1)

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
  undefined4 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar14 = (undefined8 *)FUN_10064e20c();
  *puVar14 = &PTR_thunk_FUN_10019d7f0_101462120;
  FUN_10064e264(puVar14 + 0x17);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0xb6;
  thunk_FUN_100183990(plVar2,0);
  plVar3 = param_1 + 0x174;
  thunk_FUN_100183990(plVar3,0);
  plVar4 = param_1 + 0x232;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x250;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x26e;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x28c;
  thunk_FUN_10019468c(plVar7,0);
  plVar8 = param_1 + 0x40d;
  thunk_FUN_1001d0644(plVar8,0);
  plVar9 = param_1 + 0x58d;
  thunk_FUN_100650e64(plVar9);
  thunk_FUN_1001c7e54();
  plVar10 = param_1 + 0x60f;
  thunk_FUN_100650e64(plVar10);
  thunk_FUN_1001c6e5c();
  plVar11 = param_1 + 0x6af;
  thunk_FUN_100650e64(plVar11);
  thunk_FUN_1001c6e5c();
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x775;
  thunk_FUN_100652c08();
  *(undefined4 *)(param_1 + 0x793) = 0x41;
  param_1[0x795] = 0;
  param_1[0x794] = 0;
  param_1[0x797] = 0;
  param_1[0x799] = 0;
  param_1[0x798] = 0;
  FUN_1004e313c(param_1 + 0x79a);
  param_1[0x79e] = 0;
  param_1[0x79d] = 0;
  param_1[0x79c] = 0;
  FUN_1004e313c(param_1 + 0x79f);
  FUN_1004e313c(param_1 + 0x7a1);
  param_1[0x7a5] = 0;
  param_1[0x7a4] = 0;
  param_1[0x7a3] = 0;
  FUN_1004e313c(param_1 + 0x7a6);
  FUN_1004e313c(param_1 + 0x7a8);
  param_1[0x7ac] = 0;
  param_1[0x7ab] = 0;
  param_1[0x7aa] = 0;
  param_1[0x7af] = 0;
  param_1[0x7ae] = 0;
  param_1[0x7b1] = 0;
  param_1[0x7b0] = 0;
  param_1[0x7b3] = 0;
  param_1[0x7b2] = 0;
  param_1[0x7b5] = 0;
  param_1[0x7b4] = 0;
  *(undefined4 *)((long)param_1 + 0x3daf) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x635,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6d5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x74f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  local_a8 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a8);
  FUN_100652cac(param_1 + 0x2e,PTR_s_build___MenuPartsCommon_tga_101854970,
                "friendslist_status_circle");
  if ((*(float *)(param_1 + 0x56) != 0.0) || (*(float *)((long)param_1 + 0x2b4) != 0.5)) {
    param_1[0x56] = 0x3f00000000000000;
    FUN_1000200a0(param_1 + 0x4c);
  }
  FUN_100652cac(param_1 + 0x72,PTR_s_build___MenuPartsCommon_tga_101854970,
                "generic_chat_bubble_outline");
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffffb;
  FUN_100652cdc(param_1 + 0x150,"generic_check");
  *(uint *)((long)param_1 + 0x924) = *(uint *)((long)param_1 + 0x924) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa14) = *(uint *)((long)param_1 + 0xa14) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar2);
  FUN_1001b4964(plVar2,1);
  lVar16 = NEON_fmov(0xc1200000,4);
  param_1[0xc1] = lVar16;
  uVar13 = DAT_101d91884;
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_10019fdb0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xb7,&local_a8);
  FUN_100652cdc(param_1 + 0x20e,"generic_x");
  *(uint *)((long)param_1 + 0xf14) = *(uint *)((long)param_1 + 0xf14) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1004) = *(uint *)((long)param_1 + 0x1004) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar3);
  FUN_1001b4964(plVar3,1);
  param_1[0x17f] = lVar16;
  local_80 = uVar13;
  local_a8 = thunk_FUN_10019fdfc;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x175,&local_a8);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar15 = *(uint *)((long)param_1 + 0x1214);
  if ((uVar15 & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x1214) = uVar15 & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar4);
    uVar15 = *(uint *)((long)param_1 + 0x1214);
  }
  *(uint *)((long)param_1 + 0x1214) = uVar15 & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x26b) = *(byte *)(param_1 + 0x26b) | 1;
  uVar15 = *(uint *)((long)param_1 + 0x1304);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x1304) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x13f4);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x13f4) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_1000200a0(plVar6);
  }
  FUN_100194ba4(0x40e00000,0x40800000,plVar7);
  FUN_1001d0b88(0x40800000,plVar8);
  uVar15 = *(uint *)((long)param_1 + 0x2cec);
  if ((uVar15 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2cec) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar9);
  }
  uVar15 = *(uint *)((long)param_1 + 0x30fc);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x30fc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_1000200a0(plVar10);
  }
  uVar15 = *(uint *)((long)param_1 + 0x35fc);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x35fc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_1000200a0(plVar11);
  }
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar12,&local_a8,2);
  uVar15 = *(uint *)((long)param_1 + 0x3c2c);
  if ((uVar15 & 0x7f80) != 0xa00) {
    *(uint *)((long)param_1 + 0x3c2c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0xa00;
    FUN_1000200a0(plVar12);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  local_80 = DAT_101dbd460;
  local_a8 = FUN_10019d7e4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_a8);
  local_80 = DAT_101dbd48c;
  local_a8 = FUN_10019d7e4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_a8);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a164);
  return param_1;
}




void thunk_FUN_10019fdb0(long param_1)

{
  if (*(char *)(param_1 + 0x3dae) != '\0') {
    FUN_100111870(param_1 + 0x3cd0);
    return;
  }
  FUN_1001118e8(param_1 + 0x3d70);
  FUN_1001b4bac(param_1 + 0xba0);
  return;
}




void thunk_FUN_10019fdfc(long param_1)

{
  if (*(char *)(param_1 + 0x3dae) != '\0') {
    FUN_10011194c(param_1 + 0x3cd0);
    return;
  }
  FUN_1001118f8(param_1 + 0x3d70);
  FUN_1001b4bac(param_1 + 0x5b0);
  return;
}




void FUN_10019d7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10019fd3c(param_1,param_4);
  return;
}




long * thunk_FUN_10019cfbc(long *param_1)

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
  undefined4 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar14 = (undefined8 *)FUN_10064e20c();
  *puVar14 = &PTR_thunk_FUN_10019d7f0_101462120;
  FUN_10064e264(puVar14 + 0x17);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0xb6;
  thunk_FUN_100183990(plVar2,0);
  plVar3 = param_1 + 0x174;
  thunk_FUN_100183990(plVar3,0);
  plVar4 = param_1 + 0x232;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x250;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x26e;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x28c;
  thunk_FUN_10019468c(plVar7,0);
  plVar8 = param_1 + 0x40d;
  thunk_FUN_1001d0644(plVar8,0);
  plVar9 = param_1 + 0x58d;
  thunk_FUN_100650e64(plVar9);
  thunk_FUN_1001c7e54();
  plVar10 = param_1 + 0x60f;
  thunk_FUN_100650e64(plVar10);
  thunk_FUN_1001c6e5c();
  plVar11 = param_1 + 0x6af;
  thunk_FUN_100650e64(plVar11);
  thunk_FUN_1001c6e5c();
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x775;
  thunk_FUN_100652c08();
  *(undefined4 *)(param_1 + 0x793) = 0x41;
  param_1[0x795] = 0;
  param_1[0x794] = 0;
  param_1[0x797] = 0;
  param_1[0x799] = 0;
  param_1[0x798] = 0;
  FUN_1004e313c(param_1 + 0x79a);
  param_1[0x79e] = 0;
  param_1[0x79d] = 0;
  param_1[0x79c] = 0;
  FUN_1004e313c(param_1 + 0x79f);
  FUN_1004e313c(param_1 + 0x7a1);
  param_1[0x7a5] = 0;
  param_1[0x7a4] = 0;
  param_1[0x7a3] = 0;
  FUN_1004e313c(param_1 + 0x7a6);
  FUN_1004e313c(param_1 + 0x7a8);
  param_1[0x7ac] = 0;
  param_1[0x7ab] = 0;
  param_1[0x7aa] = 0;
  param_1[0x7af] = 0;
  param_1[0x7ae] = 0;
  param_1[0x7b1] = 0;
  param_1[0x7b0] = 0;
  param_1[0x7b3] = 0;
  param_1[0x7b2] = 0;
  param_1[0x7b5] = 0;
  param_1[0x7b4] = 0;
  *(undefined4 *)((long)param_1 + 0x3daf) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x635,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6d5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x74f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  pcStack_a8 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&pcStack_a8);
  FUN_100652cac(param_1 + 0x2e,PTR_s_build___MenuPartsCommon_tga_101854970,
                "friendslist_status_circle");
  if ((*(float *)(param_1 + 0x56) != 0.0) || (*(float *)((long)param_1 + 0x2b4) != 0.5)) {
    param_1[0x56] = 0x3f00000000000000;
    FUN_1000200a0(param_1 + 0x4c);
  }
  FUN_100652cac(param_1 + 0x72,PTR_s_build___MenuPartsCommon_tga_101854970,
                "generic_chat_bubble_outline");
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffffb;
  FUN_100652cdc(param_1 + 0x150,"generic_check");
  *(uint *)((long)param_1 + 0x924) = *(uint *)((long)param_1 + 0x924) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xa14) = *(uint *)((long)param_1 + 0xa14) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar2);
  FUN_1001b4964(plVar2,1);
  lVar16 = NEON_fmov(0xc1200000,4);
  param_1[0xc1] = lVar16;
  uVar13 = DAT_101d91884;
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_10019fdb0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xb7,&pcStack_a8);
  FUN_100652cdc(param_1 + 0x20e,"generic_x");
  *(uint *)((long)param_1 + 0xf14) = *(uint *)((long)param_1 + 0xf14) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1004) = *(uint *)((long)param_1 + 0x1004) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar3);
  FUN_1001b4964(plVar3,1);
  param_1[0x17f] = lVar16;
  uStack_80 = uVar13;
  pcStack_a8 = thunk_FUN_10019fdfc;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x175,&pcStack_a8);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar15 = *(uint *)((long)param_1 + 0x1214);
  if ((uVar15 & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x1214) = uVar15 & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar4);
    uVar15 = *(uint *)((long)param_1 + 0x1214);
  }
  *(uint *)((long)param_1 + 0x1214) = uVar15 & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x26b) = *(byte *)(param_1 + 0x26b) | 1;
  uVar15 = *(uint *)((long)param_1 + 0x1304);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x1304) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x13f4);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x13f4) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_1000200a0(plVar6);
  }
  FUN_100194ba4(0x40e00000,0x40800000,plVar7);
  FUN_1001d0b88(0x40800000,plVar8);
  uVar15 = *(uint *)((long)param_1 + 0x2cec);
  if ((uVar15 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2cec) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar9);
  }
  uVar15 = *(uint *)((long)param_1 + 0x30fc);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x30fc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_1000200a0(plVar10);
  }
  uVar15 = *(uint *)((long)param_1 + 0x35fc);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_1 + 0x35fc) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_1000200a0(plVar11);
  }
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar12,&pcStack_a8,2);
  uVar15 = *(uint *)((long)param_1 + 0x3c2c);
  if ((uVar15 & 0x7f80) != 0xa00) {
    *(uint *)((long)param_1 + 0x3c2c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0xa00;
    FUN_1000200a0(plVar12);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  uStack_80 = DAT_101dbd460;
  pcStack_a8 = FUN_10019d7e4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x18,&pcStack_a8);
  uStack_80 = DAT_101dbd48c;
  pcStack_a8 = FUN_10019d7e4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x18,&pcStack_a8);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a164);
  return param_1;
}




void FUN_10019d7f0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10019d7f0_101462120;
  FUN_100644c24(param_1 + 0xb6);
  FUN_100644c24(param_1 + 0x174);
  if (*(char *)((long)param_1 + 0x3d87) < '\0') {
    operator_delete((void *)param_1[0x7ae]);
  }
  if (*(char *)((long)param_1 + 0x3d67) < '\0') {
    operator_delete((void *)param_1[0x7aa]);
  }
  if ((void *)param_1[0x7a9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a9]);
    param_1[0x7a9] = 0;
    param_1[0x7a8] = 0;
  }
  if ((void *)param_1[0x7a7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a7]);
    param_1[0x7a7] = 0;
    param_1[0x7a6] = 0;
  }
  if (*(char *)((long)param_1 + 0x3d2f) < '\0') {
    operator_delete((void *)param_1[0x7a3]);
  }
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
  if (*(char *)((long)param_1 + 0x3cf7) < '\0') {
    operator_delete((void *)param_1[0x79c]);
  }
  if ((void *)param_1[0x79b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x79b]);
    param_1[0x79b] = 0;
    param_1[0x79a] = 0;
  }
  if (*(char *)((long)param_1 + 0x3ccf) < '\0') {
    operator_delete((void *)param_1[0x797]);
  }
  FUN_10010b1a8(param_1 + 0x794,1);
  param_1[0x775] = &PTR_FUN_1014a7108;
  param_1[0x78c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78f);
  FUN_10064e2bc(param_1 + 0x775);
  thunk_FUN_100651068(param_1 + 0x74f);
  FUN_10017d364(param_1 + 0x6d5);
  thunk_FUN_100651068(param_1 + 0x6af);
  FUN_10017d364(param_1 + 0x635);
  thunk_FUN_100651068(param_1 + 0x60f);
  param_1[0x5b3] = &PTR_FUN_101462268;
  thunk_FUN_100651068(param_1 + 0x5e8);
  param_1[0x5ca] = &PTR_FUN_1014a7108;
  param_1[0x5e1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e4);
  FUN_10064e2bc(param_1 + 0x5ca);
  FUN_10064e2bc(param_1 + 0x5b3);
  thunk_FUN_100651068(param_1 + 0x58d);
  param_1[0x40d] = &PTR_FUN_1014623b0;
  param_1[0x56d] = &PTR_FUN_1014a7108;
  param_1[0x584] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x587);
  FUN_10064e2bc(param_1 + 0x56d);
  param_1[0x54f] = &PTR_FUN_1014a7108;
  param_1[0x566] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x569);
  FUN_10064e2bc(param_1 + 0x54f);
  FUN_100191808(param_1 + 0x4e4);
  FUN_100191808(param_1 + 0x479);
  thunk_FUN_100651068(param_1 + 0x453);
  param_1[0x435] = &PTR_FUN_1014a7108;
  param_1[0x44c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x44f);
  FUN_10064e2bc(param_1 + 0x435);
  FUN_10064221c(param_1 + 0x424);
  FUN_10064e2bc(param_1 + 0x40d);
  param_1[0x28c] = &PTR_FUN_101460ab8;
  param_1[0x3ec] = &PTR_FUN_1014a7108;
  param_1[0x403] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x406);
  FUN_10064e2bc(param_1 + 0x3ec);
  param_1[0x3ce] = &PTR_FUN_1014a7108;
  param_1[0x3e5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 1000);
  FUN_10064e2bc(param_1 + 0x3ce);
  FUN_100191808(param_1 + 0x363);
  FUN_100191808(param_1 + 0x2f8);
  thunk_FUN_100651068(param_1 + 0x2d2);
  param_1[0x2b4] = &PTR_FUN_1014a7108;
  param_1[0x2cb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ce);
  FUN_10064e2bc(param_1 + 0x2b4);
  FUN_10064221c(param_1 + 0x2a3);
  FUN_10064e2bc(param_1 + 0x28c);
  param_1[0x26e] = &PTR_FUN_1014a7108;
  param_1[0x285] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x288);
  FUN_10064e2bc(param_1 + 0x26e);
  param_1[0x250] = &PTR_FUN_1014a7108;
  param_1[0x267] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x26a);
  FUN_10064e2bc(param_1 + 0x250);
  param_1[0x232] = &PTR_FUN_1014a7108;
  param_1[0x249] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x24c);
  FUN_10064e2bc(param_1 + 0x232);
  param_1[0x174] = &PTR_FUN_10145f300;
  param_1[0x20e] = &PTR_FUN_1014a7108;
  param_1[0x225] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x228);
  FUN_10064e2bc(param_1 + 0x20e);
  param_1[0x1f0] = &PTR_FUN_1014a7108;
  param_1[0x207] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20a);
  FUN_10064e2bc(param_1 + 0x1f0);
  param_1[0x1d2] = &PTR_FUN_1014a7108;
  param_1[0x1e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ec);
  FUN_10064e2bc(param_1 + 0x1d2);
  FUN_10064221c(param_1 + 0x1c1);
  FUN_10003bec8(param_1 + 0x174);
  param_1[0xb6] = &PTR_FUN_10145f300;
  param_1[0x150] = &PTR_FUN_1014a7108;
  param_1[0x167] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x16a);
  FUN_10064e2bc(param_1 + 0x150);
  param_1[0x132] = &PTR_FUN_1014a7108;
  param_1[0x149] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14c);
  FUN_10064e2bc(param_1 + 0x132);
  param_1[0x114] = &PTR_FUN_1014a7108;
  param_1[299] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12e);
  FUN_10064e2bc(param_1 + 0x114);
  FUN_10064221c(param_1 + 0x103);
  FUN_10003bec8(param_1 + 0xb6);
  thunk_FUN_100651068(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_1014a7108;
  param_1[0x89] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8c);
  FUN_10064e2bc(param_1 + 0x72);
  thunk_FUN_100651068(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10019dd30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101462268;
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10019dd90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014623b0;
  param_1[0x160] = &PTR_FUN_1014a7108;
  param_1[0x177] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17a);
  FUN_10064e2bc(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_1014a7108;
  param_1[0x159] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15c);
  FUN_10064e2bc(param_1 + 0x142);
  FUN_100191808(param_1 + 0xd7);
  FUN_100191808(param_1 + 0x6c);
  thunk_FUN_100651068(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10019d7f0(void)

{
  FUN_10019d7f0();
  return;
}




void FUN_10019de4c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10019d7f0();
  operator_delete(pvVar1);
  return;
}




void FUN_10019de60(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  int param_9,string *param_10,undefined8 param_11,undefined8 param_12,
                  string *param_13,undefined8 param_14,undefined8 param_15,string *param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long lVar1;
  string *this;
  long lVar2;
  long lVar3;
  string *psVar4;
  undefined4 *puVar5;
  string *psVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_88;
  void *local_80;
  char local_71;
  
  FUN_1000153b4(param_3 + 0x3cd0);
  FUN_1000153b4(param_3 + 0x3cf8,param_11);
  lVar16 = param_3 + 0x3d08;
  FUN_1000153b4(lVar16,param_12);
  this = (string *)(param_3 + 0x3d18);
  std::string::operator=(this,param_13);
  lVar2 = param_3 + 0x3d30;
  FUN_1000153b4(lVar2,param_14);
  lVar3 = param_3 + 0x3d40;
  FUN_1000153b4(lVar3,param_15);
  psVar4 = (string *)(param_3 + 0x3d50);
  std::string::operator=(psVar4,param_16);
  *(undefined1 *)(param_3 + 0x3db2) = (undefined1)param_18;
  *(undefined4 *)(param_3 + 0x3d94) = param_18._4_4_;
  uVar21 = NEON_ucvtf((undefined4)param_19);
  fVar22 = (float)NEON_fminnm(uVar21,0x45e10000);
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  *(int *)(param_3 + 0x3d9c) = (int)fVar22;
  *(undefined4 *)(param_3 + 0x3d68) = param_19._4_4_;
  lVar1 = param_3 + 0x260;
  FUN_1006513c0(lVar1,param_4);
  uVar10 = *(uint *)(param_3 + 0x2e4);
  if ((uVar10 & 0x7f80) != 0x5900) {
    *(uint *)(param_3 + 0x2e4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x5900;
    FUN_1000200a0(lVar1);
  }
  puVar5 = &DAT_101d236b8;
  if (param_17._1_1_ == '\0') {
    puVar5 = &DAT_10115a168;
  }
  uVar15 = FUN_100651460(lVar1,puVar5);
  FUN_10019e5f4(&local_88,uVar15,param_3 + 0x3cd0);
  std::string::operator=((string *)(param_3 + 0x3ce0),(string *)&local_88);
  if (local_71 < '\0') {
    operator_delete(local_88);
  }
  FUN_10019e6d0(param_3,param_5);
  *(undefined4 *)(param_3 + 0x3d90) = param_2;
  FUN_1004e0150("MENU_GENERIC_LABEL_SKILL_TIER",0);
  FUN_1004e0150("PROFILE_SKILL_LABEL_UNRANKED",0);
  FUN_1001c6fd8(param_3 + 0x31a8,param_7);
  FUN_1001c6fd8(param_3 + 0x36a8,param_8);
  FUN_100194b7c(param_3 + 0x1460,lVar16);
  iVar14 = FUN_1004e36c0(lVar16,&DAT_101d91650);
  uVar20 = 4;
  uVar10 = uVar20;
  if (iVar14 == 0) {
    uVar10 = 0;
  }
  *(uint *)(param_3 + 0x14e4) = *(uint *)(param_3 + 0x14e4) & 0xfffffffb | uVar10;
  FUN_1001d0b14(param_3 + 0x2068,lVar3);
  iVar14 = FUN_1004e36c0(lVar3,&DAT_101d91650);
  if (iVar14 == 0) {
    uVar20 = 0;
  }
  *(uint *)(param_3 + 0x20ec) = *(uint *)(param_3 + 0x20ec) & 0xfffffffb | uVar20;
  iVar14 = FUN_1004e3624(lVar2);
  lVar16 = param_3 + 0x3cf8;
  if (iVar14 == 0) {
    lVar16 = lVar2;
  }
  FUN_1006513c0(param_3 + 0x3a78,lVar16);
  *(uint *)(param_3 + 0x3afc) =
       *(uint *)(param_3 + 0x3afc) & 0xfffffffb | (uint)*(byte *)(param_3 + 0x3db2) << 2;
  *(undefined4 *)(param_3 + 0x3da4) = param_7;
  *(undefined4 *)(param_3 + 0x3da8) = param_8;
  *(undefined4 *)(param_3 + 0x3da0) = param_6;
  *(undefined8 *)(param_3 + 0x3d88) = param_1;
  FUN_10019e818(param_3,(undefined1)param_17);
  std::string::operator=((string *)(param_3 + 0x3d70),param_10);
  *(char *)(param_3 + 0x3dac) = (char)param_9;
  bVar11 = *(byte *)(param_3 + 0x3d67);
  uVar17 = (ulong)bVar11;
  sVar7 = *(size_t *)(param_3 + 0x3d58);
  if (-1 < (char)bVar11) {
    sVar7 = uVar17;
  }
  sVar8 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar8 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar7 == sVar8) {
    psVar6 = *(string **)psVar4;
    if (-1 < (char)bVar11) {
      psVar6 = psVar4;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar11 < '\0') {
      if ((sVar7 != 0) && (iVar14 = _memcmp(psVar6,pbVar19,sVar7), iVar14 != 0)) goto LAB_10019e224;
    }
    else if (sVar7 != 0) {
      if ((uint)*pbVar19 == ((uint)*(string **)psVar4 & 0xff)) {
        pbVar18 = (byte *)(param_3 + 0x3d51);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_10019e2cc;
          bVar11 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar11 == *pbVar19);
      }
      goto LAB_10019e224;
    }
LAB_10019e2cc:
    bVar11 = *(byte *)(param_3 + 0x3d2f);
    uVar17 = (ulong)bVar11;
    sVar7 = *(size_t *)(param_3 + 0x3d20);
    if (-1 < (char)bVar11) {
      sVar7 = uVar17;
    }
    sVar8 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar8 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar7 == sVar8) {
      psVar4 = *(string **)this;
      if (-1 < (char)bVar11) {
        psVar4 = this;
      }
      pbVar19 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar19 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar11 < '\0') {
        if ((sVar7 != 0) && (iVar14 = _memcmp(psVar4,pbVar19,sVar7), iVar14 != 0))
        goto LAB_10019e3a0;
      }
      else if (sVar7 != 0) {
        if ((uint)*pbVar19 == ((uint)*(string **)this & 0xff)) {
          pbVar18 = (byte *)(param_3 + 0x3d19);
          do {
            uVar17 = uVar17 - 1;
            pbVar19 = pbVar19 + 1;
            if (uVar17 == 0) goto LAB_10019e448;
            bVar11 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar11 == *pbVar19);
        }
        goto LAB_10019e3a0;
      }
    }
    else {
LAB_10019e3a0:
      lVar16 = FUN_10015d3ec();
      bVar11 = *(byte *)(param_3 + 0x3d2f);
      uVar17 = (ulong)bVar11;
      bVar12 = *(byte *)(lVar16 + 0x548f);
      sVar7 = *(size_t *)(param_3 + 0x3d20);
      if (-1 < (char)bVar11) {
        sVar7 = uVar17;
      }
      sVar8 = *(size_t *)(lVar16 + 0x5480);
      if (-1 < (char)bVar12) {
        sVar8 = (ulong)bVar12;
      }
      if (sVar7 == sVar8) {
        psVar4 = *(string **)this;
        if (-1 < (char)bVar11) {
          psVar4 = this;
        }
        pbVar19 = *(byte **)(lVar16 + 0x5478);
        if (-1 < (char)bVar12) {
          pbVar19 = (byte *)(lVar16 + 0x5478);
        }
        if ((char)bVar11 < '\0') {
          if ((sVar7 == 0) || (iVar14 = _memcmp(psVar4,pbVar19,sVar7), iVar14 == 0))
          goto LAB_10019e470;
        }
        else {
          if (sVar7 == 0) {
LAB_10019e470:
            FUN_100652cdc(param_3 + 0x170,"generic_guild");
            bVar13 = false;
            if ((*(float *)(param_3 + 0x1b8) == 0.5) &&
               (bVar13 = false, !NAN(*(float *)(param_3 + 0x1bc)))) {
              bVar13 = *(float *)(param_3 + 0x1bc) == 0.5;
            }
            if (bVar13) goto LAB_10019e4b0;
            goto LAB_10019e4a0;
          }
          if ((uint)*pbVar19 == ((uint)*(string **)this & 0xff)) {
            pbVar18 = (byte *)(param_3 + 0x3d19);
            do {
              uVar17 = uVar17 - 1;
              pbVar19 = pbVar19 + 1;
              if (uVar17 == 0) goto LAB_10019e470;
              bVar11 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar11 == *pbVar19);
          }
        }
      }
    }
LAB_10019e448:
    pcVar9 = "capsule_button_star";
    if (param_9 == 0) {
      pcVar9 = "friendslist_status_circle";
    }
    FUN_100652cdc(param_3 + 0x170,pcVar9);
  }
  else {
LAB_10019e224:
    lVar16 = FUN_10015d3ec();
    bVar11 = *(byte *)(param_3 + 0x3d67);
    uVar17 = (ulong)bVar11;
    bVar12 = *(byte *)(lVar16 + 0x54a7);
    sVar7 = *(size_t *)(param_3 + 0x3d58);
    if (-1 < (char)bVar11) {
      sVar7 = uVar17;
    }
    sVar8 = *(size_t *)(lVar16 + 0x5498);
    if (-1 < (char)bVar12) {
      sVar8 = (ulong)bVar12;
    }
    if (sVar7 != sVar8) goto LAB_10019e2cc;
    psVar6 = *(string **)psVar4;
    if (-1 < (char)bVar11) {
      psVar6 = psVar4;
    }
    pbVar19 = *(byte **)(lVar16 + 0x5490);
    if (-1 < (char)bVar12) {
      pbVar19 = (byte *)(lVar16 + 0x5490);
    }
    if ((char)bVar11 < '\0') {
      if ((sVar7 == 0) || (iVar14 = _memcmp(psVar6,pbVar19,sVar7), iVar14 == 0)) goto LAB_10019e360;
      goto LAB_10019e2cc;
    }
    if (sVar7 != 0) {
      if ((uint)*pbVar19 == ((uint)*(string **)psVar4 & 0xff)) {
        pbVar18 = (byte *)(param_3 + 0x3d51);
        do {
          uVar17 = uVar17 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar17 == 0) goto LAB_10019e360;
          bVar11 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar11 == *pbVar19);
      }
      goto LAB_10019e2cc;
    }
LAB_10019e360:
    FUN_100652cdc(param_3 + 0x170,"generic_team");
    bVar13 = false;
    if ((*(float *)(param_3 + 0x1b8) == 0.5) && (bVar13 = false, !NAN(*(float *)(param_3 + 0x1bc))))
    {
      bVar13 = *(float *)(param_3 + 0x1bc) == 0.5;
    }
    if (bVar13) goto LAB_10019e4b0;
LAB_10019e4a0:
    *(undefined1 **)(param_3 + 0x1b8) = &DAT_3f0000003f000000;
    FUN_1000200a0(param_3 + 0x170);
  }
LAB_10019e4b0:
  *(uint *)(param_3 + 0x634) = *(uint *)(param_3 + 0x634) & 0xfffffffb;
  *(uint *)(param_3 + 0xc24) = *(uint *)(param_3 + 0xc24) & 0xfffffffb;
  *(uint *)(param_3 + 0x322c) = *(uint *)(param_3 + 0x322c) | 4;
  *(uint *)(param_3 + 0x372c) = *(uint *)(param_3 + 0x372c) | 4;
  *(uint *)(param_3 + 0x30fc) = *(uint *)(param_3 + 0x30fc) | 4;
  *(uint *)(param_3 + 0x35fc) = *(uint *)(param_3 + 0x35fc) | 4;
  *(uint *)(param_3 + 0x2e1c) = *(uint *)(param_3 + 0x2e1c) | 4;
  if ((*(int *)(param_3 + 0x3d98) == 2) && (*(int *)(param_3 + 0x3d9c) != 0)) {
    *(uint *)(param_3 + 0x2cec) = *(uint *)(param_3 + 0x2cec) | 4;
    *(uint *)(param_3 + 0x414) = *(uint *)(param_3 + 0x414) & 0xfffffffb;
    *(uint *)(param_3 + 0x504) = *(uint *)(param_3 + 0x504) & 0xfffffffb;
    uVar15 = FUN_1004e0150("MENU_FRIENDS_ITEM_TIME_IN_MATCH",0);
    thunk_FUN_1004e439c(&local_88,uVar15);
    FUN_1000f1e20(auStack_98,&local_88,*(undefined4 *)(param_3 + 0x3d9c),1);
    FUN_1006513c0(param_3 + 0x2c68,auStack_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
    }
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
    }
  }
  else {
    *(uint *)(param_3 + 0x2cec) = *(uint *)(param_3 + 0x2cec) & 0xfffffffb;
    FUN_1006513c0(param_3 + 0x2c68,&DAT_101d91650);
  }
  FUN_10019e90c(param_3,param_17._2_1_,param_17._3_1_,param_17._4_4_);
  return;
}




void FUN_10019e5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 *local_50;
  ulong uStack_48;
  ulong local_40;
  char acStack_31 [8];
  undefined1 local_29;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_50 = (undefined1 *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_1004e357c(param_3,&local_50);
  uVar1 = uStack_48;
  ppuVar2 = (undefined1 **)local_50;
  if (-1 < (long)local_40) {
    uVar1 = local_40 >> 0x38;
    ppuVar2 = &local_50;
  }
  uVar3 = FUN_100015208(ppuVar2,uVar1 & 0xffffffff,0x12345678);
  lVar4 = 0;
  pcVar5 = acStack_31;
  do {
    *pcVar5 = s_C0123456789ABCDEF_10185490f
              [((ulong)(uVar3 >> (ulong)((uint)lVar4 & 0x1f)) & 0xf) + 1];
    lVar4 = lVar4 + 4;
    pcVar5 = pcVar5 + 1;
  } while (lVar4 != 0x20);
  local_29 = 0;
  FUN_10001549c(param_1,acStack_31);
  if ((long)local_40 < 0) {
    operator_delete(local_50);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10019e6d0(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_1 + 0x3d98) = param_2;
  if ((*(char *)(param_1 + 0x3dad) == '\0') || (*(char *)(param_1 + 0x3dae) == '\0')) {
    switch(param_2) {
    case 0:
      uVar1 = *(uint *)(param_1 + 0x2e4);
      if ((uVar1 & 0x7f80) != 0x5900) {
        *(uint *)(param_1 + 0x2e4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5900;
        FUN_1000200a0(param_1 + 0x260);
      }
      local_28[0] = 0xffdcdcdc;
      break;
    case 1:
      if ((~*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x7f80;
        FUN_1000200a0(param_1 + 0x260);
      }
      local_28[0] = 0xff3b912e;
      break;
    case 2:
      if ((~*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x7f80;
        FUN_1000200a0(param_1 + 0x260);
      }
      FUN_100652dd4(param_1 + 0x170,&DAT_101d236c4,2);
      return;
    case 3:
    case 4:
      if ((~*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x7f80;
        FUN_1000200a0(param_1 + 0x260);
      }
      local_28[0] = 0xff65bdce;
      break;
    default:
      goto switchD_10019e720_default;
    }
    FUN_100652dd4(param_1 + 0x170,local_28,2);
  }
switchD_10019e720_default:
  return;
}




void FUN_10019e818(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *(char *)(param_1 + 0x3daf) = (char)param_2;
  uVar3 = *(uint *)(param_1 + 0x2e4);
  uVar5 = 0xff;
  if (param_2 == 0) {
    uVar5 = 0xb2;
  }
  if (uVar5 != (uVar3 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x2e4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar5 << 7;
    FUN_1000200a0(param_1 + 0x260);
  }
  uVar5 = 4;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x1214) = *(uint *)(param_1 + 0x1214) & 0xfffffffb | uVar5;
  uVar5 = 0;
  if (param_2 == 0) {
    uVar5 = 4;
  }
  *(uint *)(param_1 + 0x1304) = *(uint *)(param_1 + 0x1304) & 0xfffffffb | uVar5;
  *(uint *)(param_1 + 0x13f4) = *(uint *)(param_1 + 0x13f4) & 0xfffffffb | uVar5;
  *(uint *)(param_1 + 0x3c2c) = *(uint *)(param_1 + 0x3c2c) & 0xfffffffb | uVar5;
  iVar4 = FUN_100126c88();
  ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar4 == 0) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar4 == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  if (param_2 == 0) {
    ppuVar2 = ppuVar1;
  }
  FUN_100651038(param_1 + 0x260,*ppuVar2);
  return;
}




void FUN_10019e90c(long param_1,ulong param_2,int param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  pcVar2 = "generic_chat_bubble";
  if (param_3 == 0) {
    pcVar2 = "generic_chat_bubble_outline";
  }
  FUN_100652cdc(param_1 + 0x390,pcVar2);
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x414) = *(uint *)(param_1 + 0x414) & 0xfffffffb;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2cec) & 4;
    *(uint *)(param_1 + 0x414) = (*(uint *)(param_1 + 0x414) & 0xfffffffb | uVar1) ^ 4;
    if ((0 < param_4) && (uVar1 == 0)) {
      *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) | 4;
      FUN_1004e313c(auStack_40);
      if (param_4 < 99) {
        pcVar2 = "%d";
      }
      else {
        pcVar2 = "%d+";
      }
      FUN_1004e38ac(auStack_40,pcVar2);
      FUN_1006513c0(param_1 + 0x480,auStack_40);
      if (local_38 == (void *)0x0) {
        return;
      }
      operator_delete__(local_38);
      return;
    }
  }
  *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) & 0xfffffffb;
  return;
}




void FUN_10019ea08(undefined4 param_1,long param_2,undefined8 param_3,string *param_4,
                  undefined8 param_5,undefined8 param_6,string *param_7,undefined8 param_8,
                  undefined8 param_9,string *param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  string *psVar3;
  undefined4 *puVar4;
  size_t sVar5;
  size_t sVar6;
  byte bVar7;
  byte bVar8;
  string sVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  string *psVar14;
  ulong uVar15;
  byte *pbVar16;
  string *psVar17;
  byte *pbVar18;
  string *psVar19;
  uint uVar20;
  void *local_88 [2];
  char local_71;
  
  *(undefined1 *)(param_2 + 0x3dad) = 1;
  lVar1 = param_2 + 0x3cd0;
  FUN_1000153b4(lVar1);
  FUN_1000153b4(param_2 + 0x3cf8,param_5);
  lVar2 = param_2 + 0x3d08;
  FUN_1000153b4(lVar2,param_6);
  psVar17 = (string *)(param_2 + 0x3d18);
  std::string::operator=(psVar17,param_7);
  FUN_1000153b4(param_2 + 0x3d30,param_8);
  lVar13 = param_2 + 0x3d40;
  FUN_1000153b4(lVar13,param_9);
  psVar14 = (string *)(param_2 + 0x3d50);
  std::string::operator=(psVar14,param_10);
  FUN_1006513c0(param_2 + 0x260,lVar1);
  puVar4 = &DAT_101d236b8;
  if (param_11._1_1_ == '\0') {
    puVar4 = &DAT_10115a168;
  }
  FUN_100651460(param_2 + 0x260,puVar4);
  FUN_100194b7c(param_2 + 0x1460,lVar2);
  iVar11 = FUN_1004e36c0(lVar2,&DAT_101d91650);
  uVar20 = 4;
  uVar12 = uVar20;
  if (iVar11 == 0) {
    uVar12 = 0;
  }
  *(uint *)(param_2 + 0x14e4) = *(uint *)(param_2 + 0x14e4) & 0xfffffffb | uVar12;
  FUN_1001d0b14(param_2 + 0x2068,lVar13);
  iVar11 = FUN_1004e36c0(lVar13,&DAT_101d91650);
  if (iVar11 == 0) {
    uVar20 = 0;
  }
  *(uint *)(param_2 + 0x20ec) = *(uint *)(param_2 + 0x20ec) & 0xfffffffb | uVar20;
  lVar2 = param_2 + 0x170;
  *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) | 4;
  bVar7 = *(byte *)(param_2 + 0x3d67);
  uVar15 = (ulong)bVar7;
  sVar5 = *(size_t *)(param_2 + 0x3d58);
  if (-1 < (char)bVar7) {
    sVar5 = uVar15;
  }
  sVar6 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar6 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar5 == sVar6) {
    psVar3 = *(string **)psVar14;
    if (-1 < (char)bVar7) {
      psVar3 = psVar14;
    }
    pbVar18 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar18 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar5 != 0) && (iVar11 = _memcmp(psVar3,pbVar18,sVar5), iVar11 != 0)) goto LAB_10019ec40;
    }
    else if (sVar5 != 0) {
      if ((uint)*pbVar18 == ((uint)*(string **)psVar14 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x3d51);
        do {
          uVar15 = uVar15 - 1;
          pbVar18 = pbVar18 + 1;
          if (uVar15 == 0) goto LAB_10019ece8;
          bVar7 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar7 == *pbVar18);
      }
      goto LAB_10019ec40;
    }
LAB_10019ece8:
    bVar7 = *(byte *)(param_2 + 0x3d2f);
    uVar15 = (ulong)bVar7;
    sVar5 = *(size_t *)(param_2 + 0x3d20);
    if (-1 < (char)bVar7) {
      sVar5 = uVar15;
    }
    sVar6 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar6 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar5 == sVar6) {
      psVar14 = *(string **)psVar17;
      if (-1 < (char)bVar7) {
        psVar14 = psVar17;
      }
      pbVar18 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar18 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar7 < '\0') {
        if (sVar5 != 0) {
          uVar12 = _memcmp(psVar14,pbVar18,sVar5);
          psVar14 = (string *)(ulong)uVar12;
          if (uVar12 != 0) goto LAB_10019edb4;
        }
      }
      else if (sVar5 != 0) {
        if ((uint)*pbVar18 == ((uint)*(string **)psVar17 & 0xff)) {
          pbVar16 = (byte *)(param_2 + 0x3d19);
          do {
            uVar15 = uVar15 - 1;
            pbVar18 = pbVar18 + 1;
            if (uVar15 == 0) goto LAB_10019ee5c;
            bVar7 = *pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (bVar7 == *pbVar18);
        }
        goto LAB_10019edb4;
      }
    }
    else {
LAB_10019edb4:
      psVar14 = (string *)FUN_10015d3ec();
      bVar7 = *(byte *)(param_2 + 0x3d2f);
      uVar15 = (ulong)bVar7;
      sVar9 = psVar14[0x548f];
      sVar5 = *(size_t *)(param_2 + 0x3d20);
      if (-1 < (char)bVar7) {
        sVar5 = uVar15;
      }
      sVar6 = *(size_t *)(psVar14 + 0x5480);
      if (-1 < (char)sVar9) {
        sVar6 = (ulong)(byte)sVar9;
      }
      if (sVar5 == sVar6) {
        psVar3 = psVar14 + 0x5478;
        psVar14 = *(string **)psVar17;
        if (-1 < (char)bVar7) {
          psVar14 = psVar17;
        }
        psVar19 = *(string **)psVar3;
        if (-1 < (char)sVar9) {
          psVar19 = psVar3;
        }
        if ((char)bVar7 < '\0') {
          if (sVar5 != 0) {
            uVar12 = _memcmp(psVar14,psVar19,sVar5);
            psVar14 = (string *)(ulong)uVar12;
            if (uVar12 != 0) goto LAB_10019ee5c;
          }
        }
        else if (sVar5 != 0) {
          if ((uint)(byte)*psVar19 == ((uint)*(string **)psVar17 & 0xff)) {
            psVar17 = (string *)(param_2 + 0x3d19);
            do {
              uVar15 = uVar15 - 1;
              psVar19 = psVar19 + 1;
              if (uVar15 == 0) goto LAB_10019ee6c;
              sVar9 = *psVar17;
              psVar17 = psVar17 + 1;
            } while (sVar9 == *psVar19);
          }
          goto LAB_10019ee5c;
        }
LAB_10019ee6c:
        psVar14 = (string *)FUN_100652cdc(lVar2,"generic_guild");
        bVar10 = false;
        if ((*(float *)(param_2 + 0x1b8) == 0.5) &&
           (bVar10 = false, !NAN(*(float *)(param_2 + 0x1bc)))) {
          bVar10 = *(float *)(param_2 + 0x1bc) == 0.5;
        }
        if (bVar10) goto LAB_10019eea4;
        goto LAB_10019ee94;
      }
    }
LAB_10019ee5c:
    *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) & 0xfffffffb;
  }
  else {
LAB_10019ec40:
    lVar13 = FUN_10015d3ec();
    bVar7 = *(byte *)(param_2 + 0x3d67);
    uVar15 = (ulong)bVar7;
    bVar8 = *(byte *)(lVar13 + 0x54a7);
    sVar5 = *(size_t *)(param_2 + 0x3d58);
    if (-1 < (char)bVar7) {
      sVar5 = uVar15;
    }
    sVar6 = *(size_t *)(lVar13 + 0x5498);
    if (-1 < (char)bVar8) {
      sVar6 = (ulong)bVar8;
    }
    if (sVar5 != sVar6) goto LAB_10019ece8;
    psVar3 = *(string **)psVar14;
    if (-1 < (char)bVar7) {
      psVar3 = psVar14;
    }
    pbVar18 = *(byte **)(lVar13 + 0x5490);
    if (-1 < (char)bVar8) {
      pbVar18 = (byte *)(lVar13 + 0x5490);
    }
    if ((char)bVar7 < '\0') {
      if ((sVar5 == 0) || (iVar11 = _memcmp(psVar3,pbVar18,sVar5), iVar11 == 0)) goto LAB_10019ed78;
      goto LAB_10019ece8;
    }
    if (sVar5 != 0) {
      if ((uint)*pbVar18 == ((uint)*(string **)psVar14 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x3d51);
        do {
          uVar15 = uVar15 - 1;
          pbVar18 = pbVar18 + 1;
          if (uVar15 == 0) goto LAB_10019ed78;
          bVar7 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar7 == *pbVar18);
      }
      goto LAB_10019ece8;
    }
LAB_10019ed78:
    psVar14 = (string *)FUN_100652cdc(lVar2,"generic_team");
    bVar10 = false;
    if ((*(float *)(param_2 + 0x1b8) == 0.5) && (bVar10 = false, !NAN(*(float *)(param_2 + 0x1bc))))
    {
      bVar10 = *(float *)(param_2 + 0x1bc) == 0.5;
    }
    if (bVar10) goto LAB_10019eea4;
LAB_10019ee94:
    *(undefined1 **)(param_2 + 0x1b8) = &DAT_3f0000003f000000;
    psVar14 = (string *)FUN_1000200a0(lVar2);
  }
LAB_10019eea4:
  FUN_10019e5f4(local_88,psVar14,lVar1);
  std::string::operator=((string *)(param_2 + 0x3ce0),(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  *(uint *)(param_2 + 0x414) = *(uint *)(param_2 + 0x414) & 0xfffffffb;
  *(uint *)(param_2 + 0x634) = *(uint *)(param_2 + 0x634) | 4;
  *(uint *)(param_2 + 0xc24) = *(uint *)(param_2 + 0xc24) | 4;
  *(uint *)(param_2 + 0x322c) = *(uint *)(param_2 + 0x322c) & 0xfffffffb;
  *(uint *)(param_2 + 0x372c) = *(uint *)(param_2 + 0x372c) & 0xfffffffb;
  *(uint *)(param_2 + 0x30fc) = *(uint *)(param_2 + 0x30fc) & 0xfffffffb;
  *(uint *)(param_2 + 0x35fc) = *(uint *)(param_2 + 0x35fc) & 0xfffffffb;
  *(uint *)(param_2 + 0x2e1c) = *(uint *)(param_2 + 0x2e1c) & 0xfffffffb;
  *(uint *)(param_2 + 0x2cec) = *(uint *)(param_2 + 0x2cec) & 0xfffffffb;
  std::string::operator=((string *)(param_2 + 0x3d70),param_4);
  *(undefined4 *)(param_2 + 0x3d90) = param_1;
  FUN_10019e818(param_2,(undefined1)param_11);
  return;
}




void FUN_10019ef80(undefined4 param_1,long param_2,undefined8 param_3,string *param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  size_t sVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  void *local_78 [2];
  char local_61;
  
  *(undefined1 *)(param_2 + 0x3dae) = 1;
  lVar1 = param_2 + 0x3cd0;
  FUN_1000153b4(lVar1);
  FUN_1006513c0(param_2 + 0x260,lVar1);
  puVar3 = &DAT_101d236b8;
  if (param_6 == 0) {
    puVar3 = &DAT_10115a168;
  }
  FUN_100651460(param_2 + 0x260,puVar3);
  FUN_100194b7c(param_2 + 0x1460,param_2 + 0x3d08);
  iVar9 = FUN_1004e36c0(param_2 + 0x3d08,&DAT_101d91650);
  uVar17 = 4;
  uVar10 = uVar17;
  if (iVar9 == 0) {
    uVar10 = 0;
  }
  *(uint *)(param_2 + 0x14e4) = *(uint *)(param_2 + 0x14e4) & 0xfffffffb | uVar10;
  FUN_1001d0b14(param_2 + 0x2068,param_2 + 0x3d40);
  iVar9 = FUN_1004e36c0(param_2 + 0x3d40,&DAT_101d91650);
  if (iVar9 == 0) {
    uVar17 = 0;
  }
  *(uint *)(param_2 + 0x20ec) = *(uint *)(param_2 + 0x20ec) & 0xfffffffb | uVar17;
  *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) | 4;
  puVar2 = (undefined8 *)(param_2 + 0x3d50);
  bVar6 = *(byte *)(param_2 + 0x3d67);
  uVar14 = (ulong)bVar6;
  sVar4 = *(size_t *)(param_2 + 0x3d58);
  if (-1 < (char)bVar6) {
    sVar4 = uVar14;
  }
  sVar5 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar5 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar4 == sVar5) {
    puVar12 = (void *)*puVar2;
    if (-1 < (char)bVar6) {
      puVar12 = puVar2;
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar4 != 0) && (iVar9 = _memcmp(puVar12,pbVar15,sVar4), iVar9 != 0)) goto LAB_10019f140;
    }
    else if (sVar4 != 0) {
      if ((uint)*pbVar15 == ((uint)(void *)*puVar2 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x3d51);
        do {
          uVar14 = uVar14 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar14 == 0) goto LAB_10019f1e8;
          bVar6 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar6 == *pbVar15);
      }
      goto LAB_10019f140;
    }
LAB_10019f1e8:
    puVar2 = (undefined8 *)(param_2 + 0x3d18);
    bVar6 = *(byte *)(param_2 + 0x3d2f);
    uVar14 = (ulong)bVar6;
    sVar4 = *(size_t *)(param_2 + 0x3d20);
    if (-1 < (char)bVar6) {
      sVar4 = uVar14;
    }
    sVar5 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar5 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar4 == sVar5) {
      puVar12 = (void *)*puVar2;
      if (-1 < (char)bVar6) {
        puVar12 = puVar2;
      }
      pbVar15 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar15 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar6 < '\0') {
        if (sVar4 != 0) {
          uVar10 = _memcmp(puVar12,pbVar15,sVar4);
          puVar12 = (undefined8 *)(ulong)uVar10;
          if (uVar10 != 0) goto LAB_10019f298;
        }
      }
      else if (sVar4 != 0) {
        if ((uint)*pbVar15 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar16 = (byte *)(param_2 + 0x3d19);
          do {
            uVar14 = uVar14 - 1;
            pbVar15 = pbVar15 + 1;
            if (uVar14 == 0) goto LAB_10019f340;
            bVar6 = *pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (bVar6 == *pbVar15);
        }
        goto LAB_10019f298;
      }
    }
    else {
LAB_10019f298:
      puVar12 = (undefined8 *)FUN_10015d3ec();
      bVar6 = *(byte *)(param_2 + 0x3d2f);
      uVar14 = (ulong)bVar6;
      bVar7 = *(byte *)((long)puVar12 + 0x548f);
      sVar4 = *(size_t *)(param_2 + 0x3d20);
      if (-1 < (char)bVar6) {
        sVar4 = uVar14;
      }
      sVar5 = puVar12[0xa90];
      if (-1 < (char)bVar7) {
        sVar5 = (ulong)bVar7;
      }
      if (sVar4 == sVar5) {
        pbVar15 = (byte *)(puVar12 + 0xa8f);
        puVar12 = (undefined8 *)*puVar2;
        if (-1 < (char)bVar6) {
          puVar12 = puVar2;
        }
        pbVar16 = *(byte **)pbVar15;
        if (-1 < (char)bVar7) {
          pbVar16 = pbVar15;
        }
        if ((char)bVar6 < '\0') {
          if (sVar4 != 0) {
            uVar10 = _memcmp(puVar12,pbVar16,sVar4);
            puVar12 = (undefined8 *)(ulong)uVar10;
            if (uVar10 != 0) goto LAB_10019f340;
          }
        }
        else if (sVar4 != 0) {
          if ((uint)*pbVar16 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
            pbVar15 = (byte *)(param_2 + 0x3d19);
            do {
              uVar14 = uVar14 - 1;
              pbVar16 = pbVar16 + 1;
              if (uVar14 == 0) goto LAB_10019f350;
              bVar6 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar6 == *pbVar16);
          }
          goto LAB_10019f340;
        }
LAB_10019f350:
        pcVar13 = "generic_guild";
        goto LAB_10019f358;
      }
    }
LAB_10019f340:
    *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) & 0xfffffffb;
  }
  else {
LAB_10019f140:
    lVar11 = FUN_10015d3ec();
    bVar6 = *(byte *)(param_2 + 0x3d67);
    uVar14 = (ulong)bVar6;
    bVar7 = *(byte *)(lVar11 + 0x54a7);
    sVar4 = *(size_t *)(param_2 + 0x3d58);
    if (-1 < (char)bVar6) {
      sVar4 = uVar14;
    }
    sVar5 = *(size_t *)(lVar11 + 0x5498);
    if (-1 < (char)bVar7) {
      sVar5 = (ulong)bVar7;
    }
    if (sVar4 != sVar5) goto LAB_10019f1e8;
    puVar12 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar6) {
      puVar12 = puVar2;
    }
    pbVar15 = *(byte **)(lVar11 + 0x5490);
    if (-1 < (char)bVar7) {
      pbVar15 = (byte *)(lVar11 + 0x5490);
    }
    if ((char)bVar6 < '\0') {
      if ((sVar4 == 0) || (iVar9 = _memcmp(puVar12,pbVar15,sVar4), iVar9 == 0)) goto LAB_10019f280;
      goto LAB_10019f1e8;
    }
    if (sVar4 != 0) {
      if ((uint)*pbVar15 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x3d51);
        do {
          uVar14 = uVar14 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar14 == 0) goto LAB_10019f280;
          bVar6 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar6 == *pbVar15);
      }
      goto LAB_10019f1e8;
    }
LAB_10019f280:
    pcVar13 = "generic_team";
LAB_10019f358:
    puVar12 = (undefined8 *)FUN_100652cdc(param_2 + 0x170,pcVar13);
    bVar8 = false;
    if ((*(float *)(param_2 + 0x1b8) == 0.5) && (bVar8 = false, !NAN(*(float *)(param_2 + 0x1bc))))
    {
      bVar8 = *(float *)(param_2 + 0x1bc) == 0.5;
    }
    if (!bVar8) {
      *(undefined1 **)(param_2 + 0x1b8) = &DAT_3f0000003f000000;
      puVar12 = (undefined8 *)FUN_1000200a0(param_2 + 0x170);
    }
  }
  FUN_10019e5f4(local_78,puVar12,lVar1);
  std::string::operator=((string *)(param_2 + 0x3ce0),(string *)local_78);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  *(uint *)(param_2 + 0x414) = *(uint *)(param_2 + 0x414) & 0xfffffffb;
  *(uint *)(param_2 + 0x634) = *(uint *)(param_2 + 0x634) | 4;
  FUN_100652cdc(param_2 + 0xa80,"generic_invite_friend");
  *(uint *)(param_2 + 0xc24) = *(uint *)(param_2 + 0xc24) | 4;
  *(uint *)(param_2 + 0x322c) = *(uint *)(param_2 + 0x322c) & 0xfffffffb;
  *(uint *)(param_2 + 0x372c) = *(uint *)(param_2 + 0x372c) & 0xfffffffb;
  *(uint *)(param_2 + 0x30fc) = *(uint *)(param_2 + 0x30fc) & 0xfffffffb;
  *(uint *)(param_2 + 0x35fc) = *(uint *)(param_2 + 0x35fc) & 0xfffffffb;
  *(uint *)(param_2 + 0x2e1c) = *(uint *)(param_2 + 0x2e1c) & 0xfffffffb;
  *(uint *)(param_2 + 0x2cec) = *(uint *)(param_2 + 0x2cec) & 0xfffffffb;
  std::string::operator=((string *)(param_2 + 0x3d70),param_4);
  *(undefined4 *)(param_2 + 0x3d90) = param_1;
  FUN_10019e818(param_2,param_5);
  return;
}




void FUN_10019f470(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  
  FUN_10064e47c();
  iVar12 = FUN_100126c88();
  FUN_10019e818(param_3,*(undefined1 *)(param_3 + 0x3daf));
  lVar5 = param_3 + 0x2d98;
  FUN_1001c8080(lVar5,*(undefined4 *)(param_3 + 0x3da0));
  lVar14 = param_3 + 0x3078;
  bVar11 = iVar12 == 0;
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  if (bVar11) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218;
  }
  uVar16 = 0x43cb0000;
  if (bVar11) {
    uVar16 = 0x43c10000;
  }
  fVar18 = 1.5;
  if (bVar11) {
    fVar18 = 1.0;
  }
  FUN_100651038(lVar14,*ppuVar9);
  uVar13 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(lVar14,uVar13);
  lVar6 = param_3 + 0x3578;
  FUN_100651038(lVar6,*ppuVar9);
  uVar13 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(lVar6,uVar13);
  FUN_10064e47c(param_1,param_2,param_3 + 0xb8);
  FUN_10064e5ec(0,0,param_3 + 0xb8,0,*(undefined8 *)(param_3 + 0xd8),0);
  FUN_10064e47c(param_1,param_2,param_3 + 0x1190);
  FUN_10064e5ec(0,0,param_3 + 0x1190,0,*(undefined8 *)(param_3 + 0x11b0),0);
  fVar19 = (float)param_2 * 0.2;
  lVar1 = param_3 + 0x170;
  FUN_10064e5ec(0x42100000,fVar19,lVar1,0,*(undefined8 *)(param_3 + 400),0);
  FUN_10064e72c(0x41f00000,lVar5,3,lVar1,1);
  lVar2 = param_3 + 0x260;
  FUN_10064e72c(0,lVar5,5,lVar1,5);
  FUN_10065179c(uVar16,0,0x3f800000,lVar2);
  FUN_10064e72c(0x41700000,lVar2,3,lVar5,1);
  FUN_10064e72c(0,lVar2,5,lVar5,5);
  lVar1 = param_3 + 0xba0;
  if ((*(float *)(param_3 + 0xbe8) != fVar18) || (*(float *)(param_3 + 0xbec) != fVar18)) {
    *(float *)(param_3 + 0xbe8) = fVar18;
    *(float *)(param_3 + 0xbec) = fVar18;
    FUN_1000200a0(lVar1);
  }
  lVar3 = param_3 + 0x390;
  if ((*(float *)(param_3 + 0x3d8) != fVar18) || (*(float *)(param_3 + 0x3dc) != fVar18)) {
    *(float *)(param_3 + 0x3d8) = fVar18;
    *(float *)(param_3 + 0x3dc) = fVar18;
    FUN_1000200a0(lVar3);
  }
  fVar17 = fVar18 * 0.85;
  if ((*(float *)(param_3 + 0x4c8) != fVar17) || (*(float *)(param_3 + 0x4cc) != fVar17)) {
    *(float *)(param_3 + 0x4c8) = fVar17;
    *(float *)(param_3 + 0x4cc) = fVar17;
    FUN_1000200a0(param_3 + 0x480);
  }
  lVar4 = param_3 + 0x5b0;
  fVar17 = 0.9;
  if (*(char *)(param_3 + 0x3dae) != '\0') {
    fVar18 = fVar18 * 0.9;
  }
  if ((*(float *)(param_3 + 0x5f8) != fVar18) || (*(float *)(param_3 + 0x5fc) != fVar18)) {
    *(float *)(param_3 + 0x5f8) = fVar18;
    *(float *)(param_3 + 0x5fc) = fVar18;
    FUN_1000200a0(lVar4);
  }
  FUN_10064e5ec(0xc2940000,fVar19,lVar1,1,*(undefined8 *)(param_3 + 0xbc0),1);
  FUN_10064e72c(0x80000000,lVar4,1,lVar1,3);
  FUN_10064e72c(0,lVar4,5,lVar1,5);
  lVar1 = param_3 + 0x1460;
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218;
  }
  FUN_10019495c(lVar1,*ppuVar9);
  lVar4 = param_3 + 0x2068;
  FUN_1001d08f8(lVar4,*ppuVar9);
  uVar13 = FUN_100655b6c(param_3 + 0x1760);
  thunk_FUN_1004e439c(auStack_90,uVar13);
  FUN_1004e3120(auStack_a0,"Aj");
  FUN_100194b7c(lVar1,auStack_a0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  fVar18 = (float)FUN_100194c2c(lVar1);
  FUN_100194b7c(lVar1,auStack_90);
  lVar7 = param_3 + 0x1280;
  FUN_10064e47c(((float)param_1 - *(float *)(param_3 + 0x2dd8)) * 0.5,fVar18 + 4.0,lVar7);
  FUN_10064e72c(0,lVar7,0,lVar5,2);
  FUN_10064e72c(0,lVar7,3,lVar5,3);
  lVar5 = param_3 + 0x1370;
  uVar13 = FUN_100652e60(lVar7);
  FUN_10064e47c(uVar13,fVar18 + 4.0,lVar5);
  FUN_10064e72c(0,lVar5,3,lVar7,1);
  FUN_10064e72c(0,lVar5,5,lVar7,5);
  FUN_10064e5ec(0,0,lVar4,7,lVar7,7);
  FUN_100194984(lVar1);
  if ((*(byte *)(param_3 + 0x20ec) >> 2 & 1) == 0) {
    FUN_10064e5ec(0,0,lVar1,7,lVar7,7);
  }
  else {
    FUN_10064e72c(0x41700000,lVar1,3,lVar4,1);
    FUN_10064e72c(0,lVar1,5,lVar4,5);
  }
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218;
  }
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    fVar17 = 1.0;
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
  }
  FUN_100651038(param_3 + 0x3a78,*ppuVar9);
  FUN_10064e5ec(0,0,param_3 + 0x3a78,5,lVar5,5);
  *(uint *)(param_3 + 0x3afc) =
       *(uint *)(param_3 + 0x3afc) & 0xfffffffb | (uint)*(byte *)(param_3 + 0x3db2) << 2;
  lVar4 = param_3 + 0x3ba8;
  fVar18 = (float)FUN_100652e60(lVar7);
  fVar19 = (float)FUN_100652e60(lVar5);
  FUN_10064e47c(fVar19 + fVar18,0x40000000,lVar4);
  FUN_10064e72c(0,lVar4,0,lVar7,2);
  lVar8 = param_3 + 0x2c68;
  FUN_10064e72c(0,lVar4,3,lVar7,3);
  FUN_100651038(lVar8,*ppuVar10);
  if ((*(float *)(param_3 + 0x2cb0) != fVar17) || (*(float *)(param_3 + 0x2cb4) != fVar17)) {
    *(float *)(param_3 + 0x2cb0) = fVar17;
    *(float *)(param_3 + 0x2cb4) = fVar17;
    FUN_1000200a0(lVar8);
  }
  FUN_10064e72c(0x41700000,lVar8,3,lVar1,1);
  lVar1 = param_3 + 0x31a8;
  FUN_10064e5ec(0xc1f00000,0,lVar1,2,lVar5,2);
  FUN_10064e72c(0x80000000,lVar14,2,lVar1,0);
  FUN_10064e72c(0,lVar14,4,lVar1,4);
  lVar5 = param_3 + 0x36a8;
  FUN_10064e72c(0xc1700000,lVar5,1,lVar1,3);
  FUN_10064e72c(0,lVar5,5,lVar1,5);
  FUN_10064e72c(0x80000000,lVar6,2,lVar5,0);
  FUN_10064e72c(0,lVar6,4,lVar5,4);
  if (*(char *)(param_3 + 0x3db2) == '\0') {
    FUN_10064e72c(0xc1700000,lVar3,1,lVar5,3);
    uVar13 = 2;
    uVar15 = 2;
    lVar14 = lVar5;
  }
  else {
    *(uint *)(param_3 + 0x322c) = *(uint *)(param_3 + 0x322c) & 0xfffffffb;
    *(uint *)(param_3 + 0x372c) = *(uint *)(param_3 + 0x372c) & 0xfffffffb;
    *(uint *)(param_3 + 0x30fc) = *(uint *)(param_3 + 0x30fc) & 0xfffffffb;
    *(uint *)(param_3 + 0x35fc) = *(uint *)(param_3 + 0x35fc) & 0xfffffffb;
    *(uint *)(param_3 + 0x2e1c) = *(uint *)(param_3 + 0x2e1c) & 0xfffffffb;
    FUN_10064e72c(0x41700000,lVar3,3,lVar2,1);
    uVar13 = 5;
    uVar15 = 5;
    lVar14 = lVar2;
  }
  FUN_10064e72c(0,lVar3,uVar13,lVar14,uVar15);
  FUN_10064e5ec(0,0xc0a00000,param_3 + 0x480,8,lVar3,8);
  if ((*(byte *)(param_3 + 0x372c) >> 2 & 1) != 0) {
    uVar13 = FUN_10064eb7c(lVar2,7,lVar5,7);
    FUN_10065179c(uVar13,0,0x3f800000,lVar2);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return;
}




void FUN_10019fc80(long param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  string *param_5)

{
  *(undefined4 *)(param_1 + 0x3c98) = param_2;
  FUN_100111b3c(param_1 + 0x3ca0,param_3);
  *(undefined4 *)(param_1 + 0x3cb0) = *param_4;
  std::string::operator=((string *)(param_1 + 0x3cb8),param_5);
  return;
}




void FUN_10019fcd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  FUN_1000153b4(param_1 + 0x3cf8);
  lVar1 = param_1 + 0x3d30;
  FUN_1000153b4(lVar1,param_3);
  iVar3 = FUN_1004e3624(lVar1);
  lVar2 = param_1 + 0x3cf8;
  if (iVar3 == 0) {
    lVar2 = lVar1;
  }
  FUN_1006513c0(param_1 + 0x3a78,lVar2);
  return;
}




void FUN_10019fd3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  if ((*(char *)(param_1 + 0x3dad) == '\0') && (*(char *)(param_1 + 0x3dae) == '\0')) {
    uVar1 = FUN_100644a94("UI::EVENT_MENU_FRIENDS_SELECTED");
    FUN_100644aec(auStack_40,uVar1,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_10019fdb0(long param_1)

{
  if (*(char *)(param_1 + 0x3dae) != '\0') {
    FUN_100111870(param_1 + 0x3cd0);
    return;
  }
  FUN_1001118e8(param_1 + 0x3d70);
  FUN_1001b4bac(param_1 + 0xba0);
  return;
}




void FUN_10019fdfc(long param_1)

{
  if (*(char *)(param_1 + 0x3dae) != '\0') {
    FUN_10011194c(param_1 + 0x3cd0);
    return;
  }
  FUN_1001118f8(param_1 + 0x3d70);
  FUN_1001b4bac(param_1 + 0x5b0);
  return;
}




void FUN_10019fe48(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101462268;
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10019feac(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014623b0;
  param_1[0x160] = &PTR_FUN_1014a7108;
  param_1[0x177] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x17a);
  FUN_10064e2bc(param_1 + 0x160);
  param_1[0x142] = &PTR_FUN_1014a7108;
  param_1[0x159] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15c);
  FUN_10064e2bc(param_1 + 0x142);
  FUN_100191808(param_1 + 0xd7);
  FUN_100191808(param_1 + 0x6c);
  thunk_FUN_100651068(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10019ff68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 *local_88;
  
  puVar11 = (undefined8 *)FUN_1006421a8();
  *puVar11 = &PTR_thunk_FUN_1001a040c_1014624f8;
  puVar11 = puVar11 + 0x11;
  thunk_FUN_100650e64(puVar11);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0xf5;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x10c;
  thunk_FUN_100652c08(plVar3);
  param_1[0x12a] = -1;
  *(undefined4 *)(param_1 + 299) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x95c) = 0;
  *(undefined1 *)((long)param_1 + 0x95e) = 0;
  plVar4 = param_1 + 300;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x14a;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x168;
  FUN_10064e264(plVar6);
  lVar12 = 0xbf8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar12);
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0xec8);
  plVar7 = param_1 + 0x1d9;
  FUN_1001a0efc(plVar7);
  *(undefined2 *)(param_1 + 0x263) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  local_88 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_88);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x8e4);
  if ((uVar9 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8e4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x116) != 0.0) || (*(float *)((long)param_1 + 0x8b4) != 0.5)) {
    param_1[0x116] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar5,&local_88,2);
  uVar9 = *(uint *)((long)param_1 + 0xad4);
  if ((uVar9 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xad4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1300;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652dd4(plVar4,&DAT_10115a168,2);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f00000000000000;
    FUN_1000200a0(puVar11);
  }
  if ((*(float *)(param_1 + 0xff) != 0.0) || (*(float *)((long)param_1 + 0x7fc) != 0.5)) {
    param_1[0xff] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x82c) = *(uint *)((long)param_1 + 0x82c) | 0x10;
  FUN_100652cdc(param_1 + 0xd1,"generic_x");
  *(uint *)((long)param_1 + 0x52c) = *(uint *)((long)param_1 + 0x52c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar1);
  lVar12 = NEON_fmov(0xc1200000,4);
  param_1[0x42] = lVar12;
  FUN_1001b4964(plVar1,1);
  lVar12 = 0;
  *(uint *)((long)param_1 + 0xbc4) = *(uint *)((long)param_1 + 0xbc4) & 0xfffffffb;
  iVar13 = -1;
  do {
    lVar8 = (long)param_1 + lVar12 + 0xbf8;
    FUN_100642bd8(plVar6,lVar8,1);
    FUN_100652cac(lVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
    FUN_10064e47c(0x41f00000,0x40400000,lVar8);
    uVar9 = *(uint *)((long)param_1 + lVar12 + 0xc7c);
    if ((uVar9 & 0x7f80) != 0x2600) {
      *(uint *)((long)param_1 + lVar12 + 0xc7c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
      FUN_1000200a0(lVar8);
    }
    fVar14 = (float)iVar13 * 6.0;
    fVar15 = *(float *)((long)param_1 + lVar12 + 0xc3c);
    bVar10 = false;
    if ((*(float *)((long)param_1 + lVar12 + 0xc38) == 0.0) &&
       (bVar10 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar10 = fVar15 == fVar14;
    }
    if (!bVar10) {
      *(undefined4 *)((long)param_1 + lVar12 + 0xc38) = 0;
      *(float *)((long)param_1 + lVar12 + 0xc3c) = fVar14;
      FUN_1000200a0(lVar8);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0xbf8) + 0x28))(lVar8,&local_88);
    iVar13 = iVar13 + 1;
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0x2d0);
  if ((*(float *)(param_1 + 0x1e3) != 0.0) || (*(float *)((long)param_1 + 0xf1c) != 0.5)) {
    param_1[0x1e3] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_10019ff68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 *puStack_88;
  
  puVar11 = (undefined8 *)FUN_1006421a8();
  *puVar11 = &PTR_thunk_FUN_1001a040c_1014624f8;
  puVar11 = puVar11 + 0x11;
  thunk_FUN_100650e64(puVar11);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0xf5;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x10c;
  thunk_FUN_100652c08(plVar3);
  param_1[0x12a] = -1;
  *(undefined4 *)(param_1 + 299) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x95c) = 0;
  *(undefined1 *)((long)param_1 + 0x95e) = 0;
  plVar4 = param_1 + 300;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x14a;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x168;
  FUN_10064e264(plVar6);
  lVar12 = 0xbf8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar12);
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0xec8);
  plVar7 = param_1 + 0x1d9;
  FUN_1001a0efc(plVar7);
  *(undefined2 *)(param_1 + 0x263) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  puStack_88 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&puStack_88);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x8e4);
  if ((uVar9 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8e4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x116) != 0.0) || (*(float *)((long)param_1 + 0x8b4) != 0.5)) {
    param_1[0x116] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  puStack_88 = (undefined1 *)CONCAT44(puStack_88._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar5,&puStack_88,2);
  uVar9 = *(uint *)((long)param_1 + 0xad4);
  if ((uVar9 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xad4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1300;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652dd4(plVar4,&DAT_10115a168,2);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f00000000000000;
    FUN_1000200a0(puVar11);
  }
  if ((*(float *)(param_1 + 0xff) != 0.0) || (*(float *)((long)param_1 + 0x7fc) != 0.5)) {
    param_1[0xff] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x82c) = *(uint *)((long)param_1 + 0x82c) | 0x10;
  FUN_100652cdc(param_1 + 0xd1,"generic_x");
  *(uint *)((long)param_1 + 0x52c) = *(uint *)((long)param_1 + 0x52c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar1);
  lVar12 = NEON_fmov(0xc1200000,4);
  param_1[0x42] = lVar12;
  FUN_1001b4964(plVar1,1);
  lVar12 = 0;
  *(uint *)((long)param_1 + 0xbc4) = *(uint *)((long)param_1 + 0xbc4) & 0xfffffffb;
  iVar13 = -1;
  do {
    lVar8 = (long)param_1 + lVar12 + 0xbf8;
    FUN_100642bd8(plVar6,lVar8,1);
    FUN_100652cac(lVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
    FUN_10064e47c(0x41f00000,0x40400000,lVar8);
    uVar9 = *(uint *)((long)param_1 + lVar12 + 0xc7c);
    if ((uVar9 & 0x7f80) != 0x2600) {
      *(uint *)((long)param_1 + lVar12 + 0xc7c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
      FUN_1000200a0(lVar8);
    }
    fVar14 = (float)iVar13 * 6.0;
    fVar15 = *(float *)((long)param_1 + lVar12 + 0xc3c);
    bVar10 = false;
    if ((*(float *)((long)param_1 + lVar12 + 0xc38) == 0.0) &&
       (bVar10 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar10 = fVar15 == fVar14;
    }
    if (!bVar10) {
      *(undefined4 *)((long)param_1 + lVar12 + 0xc38) = 0;
      *(float *)((long)param_1 + lVar12 + 0xc3c) = fVar14;
      FUN_1000200a0(lVar8);
    }
    puStack_88 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0xbf8) + 0x28))(lVar8,&puStack_88);
    iVar13 = iVar13 + 1;
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0x2d0);
  if ((*(float *)(param_1 + 0x1e3) != 0.0) || (*(float *)((long)param_1 + 0xf1c) != 0.5)) {
    param_1[0x1e3] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) & 0xfffffffb;
  return param_1;
}




void thunk_FUN_100196fa4(void)

{
  FUN_100196fa4();
  return;
}

