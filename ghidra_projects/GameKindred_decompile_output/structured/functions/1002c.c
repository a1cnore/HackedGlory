// functions/1002c — 381 functions
#include "GameKindred.h"




void thunk_FUN_1002c262c(void)

{
  FUN_1002c262c();
  return;
}




void thunk_FUN_1002c0f3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [32];
  
  uVar2 = FUN_100644a94("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar2);
  uVar2 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644aec(auStack_80,uVar2,0);
  FUN_100644c34(param_1,auStack_80,1);
  lVar4 = param_1 + 0xf40;
  if ((*(float *)(param_1 + 0xf88) != 0.7) || (*(float *)(param_1 + 0xf8c) != 0.7)) {
    *(undefined8 *)(param_1 + 0xf88) = 0x3f3333333f333333;
    FUN_1000200a0(lVar4);
  }
  lVar1 = param_1 + 0x18f8;
  if ((*(float *)(param_1 + 0x1940) != 0.7) || (*(float *)(param_1 + 0x1944) != 0.7)) {
    *(undefined8 *)(param_1 + 0x1940) = 0x3f3333333f333333;
    FUN_1000200a0(lVar1);
  }
  FUN_100642324(lVar4);
  uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3e000000,FUN_10001f4c4);
  FUN_100640840(0x3f800000,0x3e000000,FUN_10001f4c4);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b14(lVar4,uVar3);
  FUN_100642324(lVar1);
  uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3e000000,FUN_10001f4c4);
  FUN_100640840(0x3f800000,0x3e000000,FUN_10001f4c4);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b14(lVar1,uVar3);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(0x3f000000);
  FUN_100642b14(lVar1,uVar2);
  lVar4 = FUN_10008e900();
  *(code **)(lVar4 + 0x10) = FUN_1002c1124;
  *(long *)(lVar4 + 0x20) = param_1;
  FUN_100642b14(lVar1,lVar4);
  return;
}




void FUN_1002c00f8(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100644a94("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar4);
  lVar1 = param_1 + 0xf40;
  FUN_100642324(lVar1);
  if ((~*(uint *)(param_1 + 0xfc4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xfc4) = *(uint *)(param_1 + 0xfc4) | 0x7f80;
    FUN_1000200a0(lVar1);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0xf88) == 1.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0xf8c)))) {
    bVar3 = *(float *)(param_1 + 0xf8c) == 1.0;
  }
  uVar4 = NEON_fmov(0x3f800000,4);
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0xf88) = uVar4;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 0x1f98;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x201c);
  *(uint *)(param_1 + 0x201c) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x201c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5904;
    FUN_1000200a0(lVar1);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1fe0) == 1.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x1fe4))))
  {
    bVar3 = *(float *)(param_1 + 0x1fe4) == 1.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x1fe0) = uVar4;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 0x18f8;
  FUN_100642324(lVar1);
  if ((~*(uint *)(param_1 + 0x197c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x197c) = *(uint *)(param_1 + 0x197c) | 0x7f80;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0x1940) != 1.0) || (*(float *)(param_1 + 0x1944) != 1.0)) {
    *(undefined8 *)(param_1 + 0x1940) = uVar4;
    FUN_1000200a0(lVar1);
  }
  FUN_1001cbdd4(0,param_1 + 0x2210,0,*(undefined4 *)(param_1 + 0x4330),
                *(undefined4 *)(param_1 + 0x4334),0,(int)(float)*(int *)(param_1 + 0x351c));
  return;
}




void FUN_1002c0278(long param_1)

{
  FUN_1002c2088();
  if (*(long *)(param_1 + 0x45c0) != 0) {
    FUN_1001a87e8();
    return;
  }
  return;
}




void FUN_1002c02ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x45d0) = param_2;
  if (*(long *)(param_1 + 0x45c0) != 0) {
    FUN_1002f9474(*(long *)(param_1 + 0x45c0),param_2,*(undefined4 *)(param_1 + 0x45d4));
    return;
  }
  return;
}




void FUN_1002c02cc(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x45d4) = (int)param_2;
  if (*(long *)(param_1 + 0x45c0) != 0) {
    FUN_1002f9474(*(long *)(param_1 + 0x45c0),*(undefined4 *)(param_1 + 0x45d0),param_2);
    return;
  }
  return;
}




void FUN_1002c02f8(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x45ec) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002c0308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002c030c(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x45ed) = param_2;
  if (param_1[0x8b8] != 0) {
    *(undefined1 *)(param_1[0x8b8] + 0x5d1) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002c0328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002c032c(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x45ee) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002c033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002c0340(void)

{
  return;
}




void FUN_1002c0344(float param_1,long *param_2)

{
  FUN_1002c209c();
  FUN_1001cbc08(param_1 * 0.85,0x42600000,param_2 + 0x442);
  FUN_10064e47c(param_1 * 0.85,0x42600000,param_2 + 0x419);
                    /* WARNING: Could not recover jumptable at 0x0001002c03b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}




void FUN_1002c03b8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150(param_2,0);
  FUN_1006513c0(param_1 + 0x1e8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002c03f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c03fc(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  *(undefined4 *)(param_1 + 0x8bc) = param_2;
  uVar1 = FUN_1004e0150("MENU_TALENTS_TALENT_LEVEL",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%u");
  FUN_1004e3120(auStack_50,"[VALUE]");
  FUN_1004e3bc4(auStack_30,0,auStack_50,auStack_40);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1006513c0(param_1 + 0x3cd,auStack_30);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002c04cc(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = (int)param_2;
  *(int *)(param_1 + 0x8bd) = iVar3;
  FUN_1004e313c(auStack_40);
  local_48 = 0xff000000;
  local_44 = 0xff000000;
  if (iVar3 == 3) {
    local_44 = 0xff00aded;
    local_48 = 0xff5de1f2;
    pcVar1 = "MENU_TALENTS_LABEL_TIER_LEGENDARY";
  }
  else if (iVar3 == 2) {
    local_48 = 0xffff61f7;
    local_44 = 0xffff00ff;
    pcVar1 = "MENU_TALENTS_LABEL_TIER_EPIC";
  }
  else {
    if (iVar3 != 1) goto LAB_1002c057c;
    local_48 = 0xffffd18a;
    local_44 = 0xffffb400;
    pcVar1 = "MENU_TALENTS_LABEL_TIER_RARE";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1000153b4(auStack_40,uVar2);
LAB_1002c057c:
  FUN_1001cbd48(param_1 + 0x442,&local_44,&local_48);
  local_50[0] = 0xff348eb0;
  FUN_100652dd4(param_1 + 0x1a8,local_50,2);
  FUN_1006513c0(param_1 + 0x264,auStack_40);
  FUN_100651460(param_1 + 0x264,&local_44);
  if (param_1[0x8b7] != 0) {
    FUN_100652dd4(param_1[0x8b7] + 0x140,&local_44,2);
  }
  if (param_1[0x8b8] != 0) {
    FUN_1002f9224(param_1[0x8b8],param_2);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1002c0624(long *param_1,undefined8 param_2,undefined8 param_3)

{
  *(int *)(param_1 + 0x8bb) = (int)param_2;
  *(int *)((long)param_1 + 0x45dc) = (int)param_3;
  FUN_1001cbdd4(0x3f000000,param_1 + 0x442,param_2,(int)param_1[0x866],
                *(undefined4 *)((long)param_1 + 0x4334),0,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001002c0674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c0678(long *param_1,int param_2)

{
  uint *puVar1;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  puVar1 = (uint *)((long)param_1 + 0x43c4);
  *(int *)((long)param_1 + 0x45e4) = param_2;
  if (param_2 < 2) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  else {
    *puVar1 = *puVar1 | 4;
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    FUN_1004e3120(auStack_50,"x[COUNT]");
    FUN_1004e3120(auStack_60,"[COUNT]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1006513c0(param_1 + 0x868,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c0774(long *param_1,undefined8 param_2)

{
  FUN_100652d8c(param_1 + 0x187);
  FUN_1001e34dc(param_1 + 0x187,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001002c07bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c07c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x45b8) != 0) {
    FUN_1002f8c30(*(long *)(param_1 + 0x45b8),param_2,param_3);
  }
  if (*(long *)(param_1 + 0x45c0) != 0) {
    FUN_1002f9254(*(long *)(param_1 + 0x45c0),param_2,param_3);
    return;
  }
  return;
}




void FUN_1002c0820(long *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((long)param_1 + 0x1eec);
  uVar4 = 0xff;
  uVar3 = 0xb2;
  if (param_2 == 0) {
    uVar3 = uVar4;
  }
  if (uVar3 != (uVar2 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x1eec) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
    FUN_1000200a0(param_1 + 0x3cd);
  }
  uVar3 = *(uint *)((long)param_1 + 0x171c);
  if (param_2 == 0) {
    uVar4 = 0x7f;
  }
  if (uVar4 != (uVar3 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x171c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar4 << 7;
    FUN_1000200a0(param_1 + 0x2d3);
  }
  plVar1 = param_1 + 0x264;
  uVar3 = FUN_100642d08(plVar1);
  if ((param_2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      FUN_100655930(param_1 + 0x239,plVar1,0);
    }
  }
  else if (uVar3 != 0) {
    FUN_1006423ec(plVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002c08f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c08f8(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x1f98;
  uVar2 = *(uint *)(param_1 + 0x201c);
  *(uint *)(param_1 + 0x201c) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x201c) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1fe0) == 3.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x1fe4))))
  {
    bVar3 = *(float *)(param_1 + 0x1fe4) == 3.0;
  }
  if (!bVar3) {
    uVar5 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 0x1fe0) = uVar5;
    FUN_1000200a0(lVar1);
  }
  uVar5 = FUN_100640db8(0x3f800000,0x3f800000,0x3e000000,FUN_10006bf9c);
  FUN_100640840(0x3f333333,0x3e000000,FUN_10001f4ac);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,uVar5);
  FUN_100642b14(lVar1,uVar4);
  return;
}




void FUN_1002c09cc(long param_1)

{
  FUN_1001cbfac(param_1 + 0x2210);
  return;
}




void FUN_1002c09d8(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_1001cbfd0();
    return;
  }
  FUN_1001cbfac(param_1 + 0x2210,param_3);
  return;
}




void FUN_1002c09f0(long param_1)

{
  FUN_1001cbfe4(param_1 + 0x2210);
  return;
}




void FUN_1002c09fc(long param_1)

{
  if (*(long *)(param_1 + 0x45b8) != 0) {
    FUN_1002f8ad4();
    return;
  }
  return;
}




void FUN_1002c0a0c(long *param_1,undefined1 param_2)

{
  *(undefined1 *)((long)param_1 + 0x45ef) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002c0a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002c0a20(long *param_1,int param_2)

{
  uint uVar1;
  
  *(char *)((long)param_1 + 0x45f1) = (char)param_2;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)((long)param_1 + 0xfc4) = *(uint *)((long)param_1 + 0xfc4) & 0xfffffffb | uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001002c0a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002c0a50(long *param_1,uint param_2)

{
  *(char *)((long)param_1 + 0x45f2) = (char)param_2;
  if (param_1[0x8b7] != 0) {
    FUN_1002f8c00(param_1[0x8b7],param_2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x0001002c0a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))(param_1);
    return;
  }
  return;
}




void FUN_1002c0a9c(long *param_1)

{
  (**(code **)(*param_1 + 0x1a8))(param_1,0);
  FUN_1002c237c(param_1);
  return;
}




void FUN_1002c0acc(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x45ed) != '\0') {
    uVar2 = FUN_1004e0150("MENU_TALENT_COIN_NEW_TALENT_LABEL",0);
    FUN_1006513c0(param_1 + 0x3cd,uVar2);
    *(uint *)((long)param_1 + 0x2294) = *(uint *)((long)param_1 + 0x2294) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1ad4) = *(uint *)((long)param_1 + 0x1ad4) | 4;
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_coin_flip.mp3",0,0);
  uVar1 = (int)param_1[0x8bd] - 1;
  if (uVar1 < 3) {
    FUN_1001e79b8(0x3f800000,(&PTR_s_build___Sounds_UI_assetbundle_sf_101486188)[(int)uVar1],0,0);
  }
  *(uint *)((long)param_1 + 0xf3c) = *(uint *)((long)param_1 + 0xf3c) | 4;
                    /* WARNING: Could not recover jumptable at 0x0001002c0b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c0b9c(long param_1)

{
  (**(code **)**(undefined8 **)(param_1 + 0x640))();
  FUN_1002be858(param_1 + 0x2f0,3,0,0);
  return;
}




void FUN_1002c0bd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [32];
  
  *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) & 0xfffffffb;
  if (*(char *)(param_1 + 0x45ee) == '\0') {
    FUN_1001cbfe4(param_1 + 0x2210);
  }
  else {
    FUN_1001cbfd0();
  }
  if (*(long *)(param_1 + 0x45c0) != 0) {
    uVar1 = FUN_100644a94("CoinInspect");
    FUN_100644aec(auStack_50,uVar1,0);
    FUN_100644c34(*(undefined8 *)(param_1 + 0x45c0),auStack_50,1);
    (**(code **)(**(long **)(param_1 + 0x45c0) + 0x158))(0x3e4ccccd,*(long **)(param_1 + 0x45c0),0);
    uVar1 = FUN_10001f55c();
    FUN_10063f0e8(0x3e4ccccd);
    FUN_100642b14(param_1,uVar1);
    lVar2 = FUN_10008e900();
    *(code **)(lVar2 + 0x10) = FUN_1002c0b9c;
    *(long *)(lVar2 + 0x20) = param_1;
    FUN_100642b14(param_1,lVar2);
  }
  return;
}




void FUN_1002c0cc0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  *(uint *)(param_1 + 0xf3c) = *(uint *)(param_1 + 0xf3c) | 4;
  if (*(long *)(param_1 + 0x45c0) != 0) {
    uVar1 = FUN_100644a94("FinishedInspecting");
    FUN_100644aec(auStack_40,uVar1,0);
    FUN_100644c34(*(undefined8 *)(param_1 + 0x45c0),auStack_40,1);
    (**(code **)(**(long **)(param_1 + 0x45c0) + 0x180))
              (0x3e4ccccd,*(undefined4 *)(param_1 + 0x450));
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_coin_flip_back.mp3",0,0);
  return;
}




void FUN_1002c0d58(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_50;
  void *local_48;
  
  FUN_1002c2840();
  if (*(char *)(param_1 + 0x45f0) == '\0') {
    uVar3 = FUN_10001f55c();
    FUN_10063f0e8(0x3f000000);
    lVar1 = param_1 + 0x4340;
    FUN_100642b14(lVar1,uVar3);
    *(uint *)(param_1 + 0x43c4) = *(uint *)(param_1 + 0x43c4) & 0xfffffffb;
    FUN_1004e3120(&local_50,"x0");
    FUN_1006513c0(lVar1,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    uVar5 = 0x3db851ec;
    if (0 < *(int *)(param_1 + 0x45e4)) {
      uVar5 = NEON_fminnm(2.5 / (float)*(int *)(param_1 + 0x45e4),0x3db851ec);
    }
    lVar4 = FUN_1002c1538(lVar1,1);
    uVar2 = *(undefined4 *)(param_1 + 0x45e4);
    *(long *)(lVar4 + 0x88) = lVar1;
    *(undefined4 *)(lVar4 + 0x90) = uVar5;
    *(undefined4 *)(lVar4 + 0x94) = 0;
    *(undefined4 *)(lVar4 + 0x98) = uVar2;
    FUN_1002c1224(lVar4,lVar1);
    uVar5 = NEON_fminnm((float)*(int *)(param_1 + 0x45e4) * 0.09,0x3f800000);
    if (*(long *)(param_1 + 0x45b8) != 0) {
      uVar3 = FUN_10001f55c();
      FUN_10063f0e8(0x3f000000);
      FUN_100642b14(param_1 + 0x170,uVar3);
      uVar3 = FUN_10001f424();
      local_50 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1b8) >> 0x20) * 1.05,
                          (float)*(undefined8 *)(param_1 + 0x1b8) * 1.05);
      FUN_10064025c(uVar3,&local_50);
      FUN_10063f0e8(uVar5,uVar3);
      FUN_100642b14(param_1 + 0x170,uVar3);
    }
    if (*(long *)(param_1 + 0x45c0) != 0) {
      uVar3 = FUN_10001f55c();
      FUN_10063f0e8(0x3ed9999a);
      FUN_100642b14(param_1 + 0x228,uVar3);
      uVar3 = FUN_10001f424();
      local_50 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x270) >> 0x20) * 1.05,
                          (float)*(undefined8 *)(param_1 + 0x270) * 1.05);
      FUN_10064025c(uVar3,&local_50);
      FUN_10063f0e8(uVar5,uVar3);
      FUN_100642b14(param_1 + 0x228,uVar3);
    }
    *(undefined1 *)(param_1 + 0x45f0) = 1;
  }
  return;
}




void FUN_1002c0f3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [32];
  
  uVar2 = FUN_100644a94("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar2);
  uVar2 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644aec(auStack_80,uVar2,0);
  FUN_100644c34(param_1,auStack_80,1);
  lVar4 = param_1 + 0xf40;
  if ((*(float *)(param_1 + 0xf88) != 0.7) || (*(float *)(param_1 + 0xf8c) != 0.7)) {
    *(undefined8 *)(param_1 + 0xf88) = 0x3f3333333f333333;
    FUN_1000200a0(lVar4);
  }
  lVar1 = param_1 + 0x18f8;
  if ((*(float *)(param_1 + 0x1940) != 0.7) || (*(float *)(param_1 + 0x1944) != 0.7)) {
    *(undefined8 *)(param_1 + 0x1940) = 0x3f3333333f333333;
    FUN_1000200a0(lVar1);
  }
  FUN_100642324(lVar4);
  uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3e000000,FUN_10001f4c4);
  FUN_100640840(0x3f800000,0x3e000000,FUN_10001f4c4);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b14(lVar4,uVar3);
  FUN_100642324(lVar1);
  uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3e000000,FUN_10001f4c4);
  FUN_100640840(0x3f800000,0x3e000000,FUN_10001f4c4);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b14(lVar1,uVar3);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(0x3f000000);
  FUN_100642b14(lVar1,uVar2);
  lVar4 = FUN_10008e900();
  *(code **)(lVar4 + 0x10) = FUN_1002c1124;
  *(long *)(lVar4 + 0x20) = param_1;
  FUN_100642b14(lVar1,lVar4);
  return;
}




void FUN_1002c1124(long param_1)

{
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if (param_1 != 0) {
    FUN_1001cbdd4(0x40000000,param_1 + 0x2210,0,*(undefined4 *)(param_1 + 0x4330),
                  *(undefined4 *)(param_1 + 0x4334),1,(int)(float)*(int *)(param_1 + 0x351c));
    FUN_1001cbfd0(param_1 + 0x2210);
    local_28 = FUN_100644a94("UI::EVENT_PROGRESS_BAR_ANIMATION_FINISHED");
    local_50 = thunk_FUN_1002c11b8;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    lStack_48 = param_1;
    FUN_10001554c(param_1 + 8,&local_50);
  }
  return;
}




void FUN_1002c11b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  uVar1 = FUN_100644a94("UI::EVENT_PROGRESS_BAR_ANIMATION_FINISHED");
  FUN_100644bb0(param_1,uVar1);
  return;
}




void thunk_FUN_1002c11b8(void)

{
  FUN_1002c11b8();
  return;
}




void FUN_1002c1224(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined8 local_58;
  
  lVar2 = FUN_10008e900();
  *(code **)(lVar2 + 0x10) = FUN_1002c1440;
  *(long *)(lVar2 + 0x20) = param_1;
  uVar3 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(*(undefined4 *)(param_1 + 0x90),uVar3);
  uVar4 = FUN_10001f424();
  local_58 = NEON_fmov(0x3fe00000,4);
  FUN_10064025c(uVar4,&local_58);
  FUN_10063f0e8(*(undefined4 *)(param_1 + 0x90),uVar4);
  uVar5 = FUN_10001f4d4();
  FUN_10063f298(uVar5,uVar3,uVar4);
  iVar1 = *(int *)(param_1 + 0x94) + 1;
  *(int *)(param_1 + 0x94) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0x98)) {
    lVar6 = FUN_10008e900();
    *(code **)(lVar6 + 0x10) = FUN_1002c1224;
    *(long *)(lVar6 + 0x20) = param_1;
  }
  else {
    uVar3 = FUN_100047714();
    FUN_10063fce0(0x3f800000);
    FUN_10063f0e8(0,uVar3);
    uVar4 = FUN_10001f424();
    FUN_10064025c(uVar4,&DAT_101873a38);
    FUN_10063f0e8(0,uVar4);
    lVar6 = FUN_10008e900();
    *(code **)(lVar6 + 0x10) = FUN_1002c1400;
    *(long *)(lVar6 + 0x20) = param_1;
    uVar5 = FUN_10001f4d4();
    FUN_10063f298(uVar5,uVar3,uVar4);
    lVar6 = DAT_101dbd2f8;
    uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_10063f564(puVar8);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_10063f614(puVar8,uVar5);
  }
  FUN_100642b7c(param_2,lVar2);
  return;
}




void FUN_1002c1400(long *param_1)

{
  FUN_1006423ec(param_1,1);
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002c1430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}




void FUN_1002c1440(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  void *local_28;
  
  *(uint *)(*(long *)(param_1 + 0x88) + 0x84) = *(uint *)(*(long *)(param_1 + 0x88) + 0x84) | 4;
  lVar2 = *(long *)(param_1 + 0x88);
  if ((*(uint *)(lVar2 + 0x84) & 0x7f80) != 0x3f80) {
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffff807f | 0x3f80;
    FUN_1000200a0();
    lVar2 = *(long *)(param_1 + 0x88);
  }
  bVar1 = false;
  if ((*(float *)(lVar2 + 0x48) == 1.0) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)))) {
    bVar1 = *(float *)(lVar2 + 0x4c) == 1.0;
  }
  if (!bVar1) {
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    FUN_1000200a0();
  }
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"x%d");
  (**(code **)(**(long **)(param_1 + 0x88) + 0x138))(*(long **)(param_1 + 0x88),auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002c1500(void)

{
  return;
}




void FUN_1002c1504(void)

{
  return;
}




void FUN_1002c1508(void)

{
  return;
}




undefined8 FUN_1002c150c(void)

{
  return 0;
}




void FUN_1002c1514(void)

{
  return;
}




undefined8 FUN_1002c1518(void)

{
  return 0;
}




void FUN_1002c1524(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064221c();
  operator_delete(pvVar1);
  return;
}




void * FUN_1002c1538(long *param_1,int param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xa0);
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_thunk_FUN_10064221c_101486098;
  puVar2[0x11] = 0;
  *(undefined4 *)((long)puVar2 + 0x94) = 0;
  *(undefined4 *)(puVar2 + 0x13) = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0x3f800000;
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)((long)puVar2 + 0x84) = *(uint *)((long)puVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




long * FUN_1002c15c8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  float local_98;
  float fStack_94;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_1002c1eb8_1014861b0;
  puVar6 = puVar6 + 0x17;
  FUN_10064e264(puVar6);
  FUN_10064e264();
  plVar1 = param_1 + 0x45;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x5e;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_1 + 0x5e) & 0x8000 | 0x3ff;
  param_1[0x89] = (long)param_1;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined2 *)((long)param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0x3f800000;
  plVar9 = param_1 + 0x8b;
  *(ushort *)(param_1 + 0x8b) = *(ushort *)(param_1 + 0x8b) & 0x8000 | 0x3ff;
  param_1[0xa1] = (long)param_1;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0x462) = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa4] = DAT_101dc1cb8;
  param_1[0xa5] = DAT_101873a38;
  plVar3 = param_1 + 0xa6;
  thunk_FUN_100652c08(plVar3);
  *(undefined2 *)(param_1 + 0xc5) = 0;
  param_1[0xc4] = 0;
  *(undefined1 *)((long)param_1 + 0x62a) = 1;
  FUN_1004e3004();
  param_1[199] = 0;
  uVar5 = *(ushort *)(param_1 + 0x8b);
  plVar8 = param_1 + ((ulong)(uVar5 >> 10) & 0x1f) * 7 + 0x8c;
  *(undefined4 *)plVar8 = 0;
  uVar7 = uVar5 + 0x400;
  uVar4 = uVar5 & 0xffff83ff;
  plVar8[2] = 0;
  plVar8[1] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[3] = 0;
  plVar8 = param_1 + (ulong)(uVar7 >> 10 & 0x1f) * 7 + 0x8c;
  *(undefined4 *)plVar8 = 1;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)FUN_1002c1bcc;
  plVar8[4] = 0;
  plVar8[5] = (long)FUN_1002c1be0;
  plVar8[6] = 0;
  uVar7 = (uVar7 & 0x7c00 | uVar4) + 0x400;
  uVar5 = (ushort)uVar4;
  plVar8 = param_1 + (ulong)(uVar7 >> 10 & 0x1f) * 7 + 0x8c;
  *(undefined4 *)plVar8 = 2;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)FUN_1002c1bf4;
  plVar8[4] = 0;
  plVar8[5] = (long)FUN_1002c1c70;
  plVar8[6] = 0;
  *(ushort *)(param_1 + 0x8b) = ((ushort)uVar7 & 0x7c00 | uVar5) + 0x400 & 0x7c00 | uVar5;
  FUN_1002c1c80(plVar9,0,1);
  FUN_1002c1c80(plVar9,0,2);
  FUN_1002c1c80(plVar9,1,0);
  FUN_1002c1c80(plVar9,1,2);
  FUN_1002c1c80(plVar9,2,0);
  FUN_1002c1c80(plVar9,2,1);
  FUN_1002c1d04(plVar9,0,0,0);
  uVar5 = *(ushort *)(param_1 + 0x5e);
  plVar9 = param_1 + ((ulong)(uVar5 >> 10) & 0x1f) * 7 + 0x5f;
  *(undefined4 *)plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[4] = 1;
  plVar9[3] = 0x1f0;
  uVar7 = uVar5 + 0x400;
  uVar4 = uVar5 & 0xffff83ff;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9 = param_1 + (ulong)(uVar7 >> 10 & 0x1f) * 7 + 0x5f;
  *(undefined4 *)plVar9 = 3;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[4] = 1;
  plVar9[3] = 0x208;
  uVar7 = (uVar7 & 0x7c00 | uVar4) + 0x400;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9 = param_1 + (ulong)(uVar7 >> 10 & 0x1f) * 7 + 0x5f;
  *(undefined4 *)plVar9 = 4;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[4] = 1;
  plVar9[3] = 0x210;
  plVar9[6] = 1;
  plVar9[5] = 0x218;
  uVar7 = (uVar7 & 0x7c00 | uVar4) + 0x400;
  plVar9 = param_1 + (ulong)(uVar7 >> 10 & 0x1f) * 7 + 0x5f;
  *(undefined4 *)plVar9 = 5;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[4] = 1;
  plVar9[3] = 0x1f8;
  plVar9[6] = 1;
  plVar9[5] = 0x200;
  uVar7 = (uVar7 & 0x7c00 | uVar4) + 0x400;
  plVar9 = param_1 + (ulong)(uVar7 >> 10 & 0x1f) * 7 + 0x5f;
  *(undefined4 *)plVar9 = 1;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[4] = 1;
  plVar9[3] = 0x220;
  uVar7 = (uVar7 & 0x7c00 | uVar4) + 0x400;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9 = param_1 + (ulong)(uVar7 >> 10 & 0x1f) * 7 + 0x5f;
  *(undefined4 *)plVar9 = 2;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[4] = 1;
  plVar9[3] = 0x228;
  plVar9[6] = 1;
  plVar9[5] = 0x230;
  *(ushort *)(param_1 + 0x5e) =
       ((ushort)uVar7 & 0x7c00 | (ushort)uVar4) + 0x400 & 0x7c00 | (ushort)uVar4;
  FUN_1002c1e20(plVar2,5,0);
  FUN_1002c1e20(plVar2,3,0);
  FUN_1002c1e20(plVar2,4,0);
  FUN_1002c1e20(plVar2,1,0);
  FUN_1002c1e20(plVar2,2,0);
  FUN_1002c1e20(plVar2,0,5);
  FUN_1002c1e20(plVar2,0,3);
  FUN_1002c1e20(plVar2,5,3);
  FUN_1002c1e20(plVar2,3,4);
  FUN_1002c1e20(plVar2,4,3);
  FUN_1002c1e20(plVar2,0,1);
  FUN_1002c1e20(plVar2,1,2);
  FUN_1002c1e20(plVar2,2,1);
  FUN_1002be858(plVar2,0,0,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  FUN_100642bd8(puVar6,param_1 + 0x2e,1);
  FUN_100642bd8(puVar6,plVar1,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100641464(&fStack_94,&local_98);
  FUN_100652e40(plVar3,0);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x5b4);
  if ((uVar7 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5b4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7280;
    FUN_1000200a0(plVar3);
    uVar7 = *(uint *)((long)param_1 + 0x5b4);
  }
  *(uint *)((long)param_1 + 0x5b4) = uVar7 | 0x10;
  FUN_10064e47c(fStack_94 + fStack_94,local_98 + local_98,plVar3);
  if ((*(float *)(param_1 + 0xb0) != 0.5) || (*(float *)((long)param_1 + 0x584) != 0.5)) {
    param_1[0xb0] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x5b4) = *(uint *)((long)param_1 + 0x5b4) & 0xfffffffb;
  local_68 = DAT_101dbd460;
  local_90 = FUN_1002c1ea4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x46,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1002c1ea4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x46,&local_90);
  FUN_10064e47c(fStack_94,local_98,plVar1);
  if ((*(float *)(param_1 + 0x4f) != 0.5) || (*(float *)((long)param_1 + 0x27c) != 0.5)) {
    param_1[0x4f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_1004e3004(param_1 + 0xc6);
  return param_1;
}




void FUN_1002c1bcc(long param_1)

{
  *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) = *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) | 4;
  return;
}




void FUN_1002c1be0(long param_1)

{
  *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) & 0xfffffffb;
  return;
}




void FUN_1002c1bf4(long param_1)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) | 4;
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x150))();
  if ((*(uint *)(param_1 + 0x5b4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x530);
  }
  uVar1 = FUN_100640840(0x3f666666,0x3e4ccccd,FUN_10001f4ac);
  FUN_100642b14(param_1 + 0x530,uVar1);
  return;
}




void FUN_1002c1c70(long param_1)

{
  *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) & 0xfffffffb;
  return;
}




void FUN_1002c1c80(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_1002c1cb4;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_1002c1cb4:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_1002c1d04(ushort *param_1,uint param_2)

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
      if (*puVar5 == param_2) goto LAB_1002c1d48;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_1002c1d48:
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
             *(code **)(*(long *)(*(long *)(param_1 + 0x58) +
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
             *(code **)(*(long *)(*(long *)(param_1 + 0x58) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x0001002c1dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_1002c1e20(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_1002c1e54;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_1002c1e54:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_1002c1ea4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002c1eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e8))(param_1,param_4,param_5);
  return;
}




void FUN_1002c1eb8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002c1eb8_1014861b0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0xa6] = &PTR_FUN_1014a7108;
  param_1[0xbd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc0);
  FUN_10064e2bc(param_1 + 0xa6);
  thunk_FUN_10064e2bc(param_1 + 0x45);
  thunk_FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002c1eb8(void)

{
  FUN_1002c1eb8();
  return;
}




void FUN_1002c1f34(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c1eb8();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c1f48(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x620) = param_1;
  FUN_1002c1f74(param_2 + 0x458);
  FUN_1002c1fb8(param_2 + 0x2f0);
  return;
}




void FUN_1002c1f74(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x58) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x0001002c1fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_1002c1fb8(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x0001002c1ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_1002c1ffc(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x62a) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  FUN_1002be858(param_1 + 0x2f0,1,0,0);
  if ((*(long *)(param_1 + 0x2e8) != 0) && (iVar1 = FUN_100642d08(), iVar1 != 0)) {
    FUN_1006423ec(*(undefined8 *)(param_1 + 0x2e8),1);
  }
  *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) & 0xfffffffb;
  return;
}




void FUN_1002c205c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x518) = param_2;
  FUN_1002be858(param_1 + 0x2f0,1,0,0);
  return;
}




void FUN_1002c2074(long param_1)

{
  FUN_1002be858(param_1 + 0x2f0,5,0,0);
  return;
}




void FUN_1002c2088(long param_1)

{
  FUN_1002be858(param_1 + 0x2f0,0,0,0);
  return;
}




void FUN_1002c209c(long *param_1)

{
  FUN_10064e47c(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x0001002c20c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c20cc(long param_1)

{
  FUN_10064e3cc(param_1 + 0xb8);
  return;
}




void FUN_1002c20d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x2f0) & 0x1f;
  if (((int)uVar1 != 0x1f) && (*(short *)(param_1 + uVar1 * 0x38 + 0x2f8) == 5)) {
    FUN_1002be858(param_1 + 0x2f0,3,0,0);
    return;
  }
  return;
}




void FUN_1002c2110(long param_1,long param_2,long param_3)

{
  undefined4 local_54;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  *(long *)(param_1 + 0x2e0) = param_2;
  *(long *)(param_1 + 0x2e8) = param_3;
  if (param_2 != 0) {
    FUN_100642bd8(param_1 + 0x170,param_2,1);
    *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) =
         *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) & 0xfffffffb;
    local_50 = (code *)&DAT_3f0000003f000000;
    (**(code **)(**(long **)(param_1 + 0x2e0) + 0x28))(*(long **)(param_1 + 0x2e0),&local_50);
    *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) =
         *(uint *)(*(long *)(param_1 + 0x2e0) + 0x84) | 0x10;
    local_28 = DAT_101dbd460;
    local_50 = FUN_1002c1ea4;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    lStack_48 = param_1;
    FUN_10001554c(*(long *)(param_1 + 0x2e0) + 8,&local_50);
    local_28 = DAT_101dbd48c;
    local_50 = FUN_1002c1ea4;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    lStack_48 = param_1;
    FUN_10001554c(*(long *)(param_1 + 0x2e0) + 8,&local_50);
    param_3 = *(long *)(param_1 + 0x2e8);
  }
  if (param_3 != 0) {
    FUN_100642bd8(param_1 + 0x228,param_3,1);
    *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) & 0xfffffffb;
    local_50 = (code *)&DAT_3f0000003f000000;
    (**(code **)(**(long **)(param_1 + 0x2e8) + 0x28))(*(long **)(param_1 + 0x2e8),&local_50);
    FUN_100641464(&local_50,&local_54);
    FUN_10064e47c((ulong)local_50 & 0xffffffff,local_54,*(undefined8 *)(param_1 + 0x2e8));
  }
  return;
}




void FUN_1002c2240(long param_1,undefined8 param_2)

{
  long lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  FUN_100644b14(param_2);
  uVar2 = _mach_absolute_time();
  lVar1 = DAT_101d91638;
  lVar6 = *(long *)(param_1 + 0x630);
  lVar7 = *(long *)(param_1 + 0x638);
  uVar3 = _mach_absolute_time();
  *(long *)(param_1 + 0x638) =
       (long)((double)((uVar3 - *(long *)(param_1 + 0x630)) * DAT_101d91638) * 1e-09);
  if ((((*(byte *)(param_1 + 0x84) >> 4 & 1) != 0) &&
      (0 < (long)(-((double)((uVar2 - lVar6) * lVar1) * -1e-09) - (double)lVar7))) &&
     (uVar5 = (ulong)*(ushort *)(param_1 + 0x2f0) & 0x1f, (int)uVar5 != 0x1f)) {
    uVar4 = 3;
    switch(*(undefined2 *)(param_1 + uVar5 * 0x38 + 0x2f8)) {
    case 1:
      if ((*(char *)(param_1 + 0x628) == '\0') && (*(char *)(param_1 + 0x62a) != '\0')) {
        uVar4 = 2;
        goto switchD_1002c232c_caseD_4;
      }
      break;
    case 2:
      if (*(char *)(param_1 + 0x628) == '\0') {
        uVar4 = 1;
        goto switchD_1002c232c_caseD_4;
      }
      break;
    case 3:
      uVar4 = 4;
    case 4:
    case 5:
switchD_1002c232c_caseD_4:
      FUN_1002be858(param_1 + 0x2f0,uVar4,0,0);
      return;
    }
  }
  return;
}




void FUN_1002c237c(long param_1)

{
  int iVar1;
  
  FUN_1002c1d04(param_1 + 0x458,0,0,0);
  iVar1 = FUN_100642d08(param_1);
  if (iVar1 != 0) {
    FUN_1006423ec(param_1,1);
  }
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x520) = DAT_101dc1cb8;
  *(undefined8 *)(param_1 + 0x528) = DAT_101873a38;
  *(undefined1 *)(param_1 + 0x629) = 0;
  return;
}




void FUN_1002c23f0(long param_1)

{
  FUN_1002c1d04(param_1 + 0x458,1,0,0);
  return;
}




void FUN_1002c2404(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  
  uVar1 = FUN_100644a94("ZoomIn");
  FUN_100644aec(auStack_68,uVar1,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 0x2e8),auStack_68,1);
  FUN_100642324(param_1);
  FUN_1002c1d04(param_1 + 0x458,2,0,0);
  *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) | 4;
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x170))();
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_1 + 0x40);
  FUN_100641464(&local_70,(ulong)&local_70 | 4);
  fVar5 = (float)local_70 * 0.5;
  fVar6 = (float)((ulong)local_70 >> 0x20) * 0.5;
  local_70 = CONCAT44(fVar6,fVar5);
  FUN_100641518(&local_48,(ulong)&local_48 | 4);
  lVar2 = FUN_10003d5bc(param_1);
  local_48 = CONCAT44((fVar6 - (float)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20) /
                               (float)((ulong)local_48 >> 0x20)) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),
                      (fVar5 - (float)*(undefined8 *)(lVar2 + 8) / (float)local_48) +
                      (float)*(undefined8 *)(param_1 + 0x40));
  uVar1 = FUN_1000b50a8();
  FUN_10063fb90(uVar1,&local_48);
  FUN_10063f0e8(0x3ecccccd,uVar1);
  FUN_10063f130(uVar1,FUN_10001f4ac);
  uVar3 = FUN_10001f424();
  local_78 = 0x4000000040000000;
  FUN_10064025c(uVar3,&local_78);
  FUN_10063f0e8(0x3ecccccd,uVar3);
  FUN_10063f130(uVar3,FUN_10001f4ac);
  uVar4 = FUN_10001f4d4();
  FUN_10063f298(uVar4,uVar3,uVar1);
  FUN_100642b14(param_1,uVar4);
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/my_cards_flip.mp3",0,0);
  return;
}




void FUN_1002c2598(long param_1)

{
  FUN_1002be858(param_1 + 0x2f0,1,0,0);
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x178))();
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/my_cards_return.mp3",0,0);
  *(undefined1 *)(param_1 + 0x628) = 0;
  return;
}




void FUN_1002c25f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = thunk_FUN_1002c2598;
  local_20 = param_2;
  FUN_100643618(0xbf800000,&local_20,0,0);
  return;
}




void FUN_1002c262c(long param_1)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 local_48;
  
  *(undefined1 *)(param_1 + 0x628) = 1;
  FUN_100642324();
  uVar3 = FUN_10001f424();
  FUN_10064025c(uVar3,param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = DAT_101dc1cb8;
  FUN_10063f0e8(0x3e99999a,uVar3);
  FUN_10063f130(uVar3,FUN_10001f4ac);
  local_48 = *(undefined8 *)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x520) = DAT_101dc1cb8;
  uVar4 = FUN_1000b50a8();
  FUN_10063fb90(uVar4,&local_48);
  FUN_10063f0e8(0x3e99999a,uVar4);
  FUN_10063f130(uVar4,FUN_10001f4ac);
  uVar5 = FUN_10001f4d4();
  FUN_10063f298(uVar5,uVar3,uVar4);
  FUN_100642b14(param_1,uVar5);
  lVar2 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar6 * 0x40);
  if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
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
  *(code **)(puVar1 + 8) = FUN_1002c25f4;
  FUN_100642b14(param_1,puVar1);
  return;
}




void FUN_1002c2798(long param_1)

{
  bool bVar1;
  long *plVar2;
  float fVar3;
  
  FUN_1002c1d04(param_1 + 0x458,2,0,0);
  *(uint *)(param_1 + 0x5b4) = *(uint *)(param_1 + 0x5b4) | 4;
  plVar2 = *(long **)(param_1 + 0x2e8);
  fVar3 = *(float *)(param_1 + 0x450);
  bVar1 = false;
  if ((*(float *)(plVar2 + 9) == fVar3) &&
     (bVar1 = false, !NAN(*(float *)((long)plVar2 + 0x4c)) && !NAN(fVar3))) {
    bVar1 = *(float *)((long)plVar2 + 0x4c) == fVar3;
  }
  if (!bVar1) {
    *(float *)(plVar2 + 9) = fVar3;
    *(float *)((long)plVar2 + 0x4c) = fVar3;
    FUN_1000200a0();
    plVar2 = *(long **)(param_1 + 0x2e8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002c27fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x168))();
  return;
}




void FUN_1002c2800(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x158))(0x3e4ccccd,*(long **)(param_1 + 0x2e8),0);
  *(undefined1 *)(param_1 + 0x629) = 1;
  return;
}




void FUN_1002c2840(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  if (*(char *)((long)param_1 + 0x629) == '\0') {
    (**(code **)(*(long *)param_1[0x5d] + 0x158))(0x3e4ccccd,(long *)param_1[0x5d],1);
    *(undefined1 *)((long)param_1 + 0x629) = 1;
  }
  *(uint *)((long)param_1 + 0x5b4) = *(uint *)((long)param_1 + 0x5b4) & 0xfffffffb;
  uVar1 = FUN_100644a94("FinishedInspecting");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1[0x5d],auStack_40,1);
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/my_cards_return.mp3",0,0);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c28f0(void)

{
  return;
}




void FUN_1002c28f4(void)

{
  return;
}




void FUN_1002c28f8(void)

{
  return;
}




void thunk_FUN_1002c2598(long param_1)

{
  FUN_1002be858(param_1 + 0x2f0,1,0,0);
  (**(code **)(**(long **)(param_1 + 0x2e8) + 0x178))();
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/my_cards_return.mp3",0,0);
  *(undefined1 *)(param_1 + 0x628) = 0;
  return;
}




long * FUN_1002c2900(undefined4 param_1,undefined4 param_2,long *param_3,undefined4 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 ****ppppuVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  undefined8 ***local_a0;
  size_t sStack_98;
  byte local_89;
  undefined8 ***local_88;
  size_t local_80;
  ulong local_78;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_1002c3c64_1014863f8;
  puVar11 = puVar11 + 0x17;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_3 + 0x42;
  FUN_1006421a8(plVar1);
  param_3[0x42] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_3 + 0x53);
  thunk_FUN_100652c08(param_3 + 0x71);
  thunk_FUN_100650e64();
  plVar2 = param_3 + 0xb5;
  FUN_10064e264(plVar2);
  plVar3 = param_3 + 0xcc;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_3 + 0xea;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_3 + 0x108;
  thunk_FUN_100650e64(plVar5);
  thunk_FUN_1001c397c(param_3 + 0x12e);
  thunk_FUN_1004e439c(param_3 + 0x202,param_6);
  *(undefined4 *)(param_3 + 0x204) = param_1;
  *(undefined4 *)((long)param_3 + 0x1024) = param_2;
  *(undefined4 *)(param_3 + 0x205) = param_4;
  (**(code **)(*param_3 + 0x78))(param_3,puVar11,1);
  FUN_100655930(puVar11,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_100642bd8(plVar1,param_3 + 0x53,1);
  FUN_100642bd8(plVar1,param_3 + 0x71,1);
  FUN_100642bd8(plVar1,param_3 + 0x8f,1);
  FUN_100655930(puVar11,plVar5,1);
  FUN_100655930(puVar11,param_3 + 0x12e,1);
  uVar9 = FUN_1004d2524(param_5);
  uVar10 = FUN_100015208(param_5,uVar9,0x1234);
  *(uint *)((long)param_3 + 0x62c) =
       *(uint *)((long)param_3 + 0x62c) & 0x80000000 |
       *(uint *)((long)param_3 + 0x62c) & 0x7fff | (uVar10 & 0xffff) << 0xf;
  FUN_100652cac(plVar3,DAT_101854a08,param_5);
  uVar8 = DAT_101854a08;
  FUN_10001549c(&local_a0,param_5);
  local_88 = (undefined8 ****)0x0;
  local_80 = 0;
  local_78 = 0;
  ppppuVar6 = (undefined8 ****)local_a0;
  sVar7 = sStack_98;
  if (-1 < (char)local_89) {
    ppppuVar6 = &local_a0;
    sVar7 = (ulong)local_89;
  }
  if (0xffffffffffffffef < sVar7 + 4) {
                    /* WARNING: Subroutine does not return */
    FUN_1002c3c58();
  }
  if (sVar7 + 4 < 0x17) {
    ppppuVar12 = &local_88;
    local_78 = sVar7 << 0x38;
    if (sVar7 == 0) goto LAB_1002c2b7c;
  }
  else {
    uVar13 = sVar7 + 0x14 & 0xfffffffffffffff0;
    ppppuVar12 = operator_new(uVar13);
    local_78 = uVar13 | 0x8000000000000000;
    local_88 = ppppuVar12;
    local_80 = sVar7;
  }
  _memcpy(ppppuVar12,ppppuVar6,sVar7);
LAB_1002c2b7c:
  *(undefined1 *)((long)ppppuVar12 + sVar7) = 0;
  std::string::append((char *)&local_88,0x1013ed3d7);
  ppppuVar6 = (undefined8 ****)local_88;
  if (-1 < (long)local_78) {
    ppppuVar6 = &local_88;
  }
  FUN_100652cac(plVar4,uVar8,ppppuVar6);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  if ((char)local_89 < '\0') {
    operator_delete(local_a0);
  }
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100651038(param_3 + 0x8f,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_1006513c0(plVar5,param_3 + 0x202);
  FUN_1002c2c54(param_3,0);
  *(uint *)((long)param_3 + 0x294) = *(uint *)((long)param_3 + 0x294) & 0xfffffffb;
  (**(code **)(*param_3 + 0x90))(param_3);
  return param_3;
}




void FUN_1002c2c54(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_44;
  
  lVar1 = param_1 + 0x750;
  lVar2 = param_1 + 0x660;
  if (param_2 == 0) {
    lVar1 = param_1 + 0x660;
    lVar2 = param_1 + 0x750;
  }
  uVar3 = FUN_100640840(0x3f800000,0x3e800000,FUN_10002d3f4);
  uVar4 = FUN_100640840(0,0x3e800000,FUN_10002d3f4);
  FUN_100642324(lVar2);
  FUN_100642b14(lVar2,uVar3);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar4);
  if (param_2 == 0) {
    local_44 = 0xff968282;
  }
  else {
    local_44 = 0xffffffff;
  }
  param_1 = param_1 + 0x840;
  uVar3 = FUN_100640b58(0x3e800000,param_1,&local_44,FUN_10002d3f4);
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar3);
  return;
}




undefined8 FUN_1002c2d4c(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x58))(param_3,0,0,0,1);
  return CONCAT44((int)(param_2 / *(float *)((long)param_3 + 0x104)),
                  (int)(fVar1 / *(float *)(param_3 + 0x20)));
}




void FUN_1002c2da0(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  void *local_48;
  
  FUN_10064e32c();
  if ((*(byte *)(param_3 + 0x294) >> 2 & 1) == 0) {
    FUN_1004e3120(&local_50,"0:00");
    FUN_1006513c0(param_3 + 0x478,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  lVar1 = param_3 + 0x5a8;
  lVar2 = param_3 + 0x750;
  local_50 = FUN_100652e60(lVar2);
  uStack_4c = param_2;
  FUN_10064e48c(lVar1,&local_50);
  *(uint *)(param_3 + 0x294) = *(uint *)(param_3 + 0x294) & 0xffffffbf;
  *(uint *)(param_3 + 0x9f4) = *(uint *)(param_3 + 0x9f4) & 0xffffffbf;
  FUN_10064e5ec(0,0,param_3 + 0x660,6,lVar1,6);
  fVar4 = 0.0;
  FUN_10064e5ec(0,0,lVar2,6,lVar1,6);
  lVar3 = param_3 + 0x840;
  FUN_100651184(lVar3);
  FUN_10064e5ec(0,fVar4 * -0.5,lVar1,8,param_3,8);
  FUN_10064e72c(0xc1a00000,lVar3,0,lVar1,2);
  FUN_10064e72c(0,lVar3,4,lVar1,4);
  FUN_10064e5ec(0,0,param_3 + 0x210,8,lVar1,8);
  FUN_10064e5ec(*(undefined4 *)(param_3 + 0x1020),*(undefined4 *)(param_3 + 0x1024),param_3 + 0x970,
                8,lVar2,1);
  param_3 = param_3 + 0xb8;
  FUN_1006556c8(param_3,&DAT_101873a40);
  FUN_1006557ec(param_3);
  FUN_10064e68c(0,0,param_3,8);
  return;
}




void FUN_1002c2f48(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  
  uVar3 = 4;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)((long)param_1 + 0x62c) = *(uint *)((long)param_1 + 0x62c) & 0xfffffffb | uVar1;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)((long)param_1 + 0x294) = *(uint *)((long)param_1 + 0x294) & 0xfffffffb | uVar3;
  if (param_2 == 0) {
    plVar2 = param_1 + 0x202;
  }
  else {
    plVar2 = param_1 + 0x53;
    if (param_1[0x6d] == 0) {
      FUN_100652cac(plVar2,DAT_101854a08,"main_nav_home_in_queue");
    }
    if (param_1[0x8b] == 0) {
      FUN_100652cac(param_1 + 0x71,DAT_101854a08,"main_nav_circle_in_queue");
    }
    FUN_10064e5ec(0,0,plVar2,8,param_1 + 0x42,8);
    FUN_10064e5ec(0,0,param_1 + 0x71,8,plVar2,8);
    FUN_10064e5ec(0,0,param_1 + 0x8f,8,plVar2,8);
    plVar2 = (long *)FUN_1004e0150("MENU_FRIENDS_STATUS_MATCHING",0);
  }
  FUN_1006513c0(param_1 + 0x108,plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001002c3080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002c3084(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = (int)param_2;
  uVar4 = 0x3f800000;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x3f800000;
  if (iVar3 == 0) {
    uVar5 = 0x3ecccccd;
  }
  uVar1 = FUN_100640840(uVar4,uVar5,FUN_10001f160);
  uVar2 = FUN_100193f78();
  FUN_10063f090(uVar2,param_2);
  FUN_100642324(param_1 + 0xb8);
  if (iVar3 != 0) {
    uVar1 = uVar2;
  }
  FUN_100642b7c(param_1 + 0xb8,uVar1);
  return;
}




void FUN_1002c3120(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  lVar1 = param_3 + 0xb8;
  if ((*(uint *)(param_3 + 0x13c) & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x13c) = *(uint *)(param_3 + 0x13c) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  bVar3 = false;
  if ((*(float *)(param_3 + 0x100) == 2.0) && (bVar3 = false, !NAN(*(float *)(param_3 + 0x104)))) {
    bVar3 = *(float *)(param_3 + 0x104) == 2.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_3 + 0x100) = 0x4000000040000000;
    FUN_1000200a0(lVar1);
  }
  uVar4 = FUN_10064081c(param_1);
  lVar2 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f1bc(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar5 = FUN_100640840(0x3f800000,param_2,FUN_10001f160);
  FUN_100640db8(0x3f800000,0x3f800000,param_2,FUN_10001f160);
  FUN_10063f2a4(puVar7,uVar5);
  FUN_100642324(lVar1);
  FUN_100642b7c(lVar1,uVar4);
  return;
}




long * FUN_1002c3284(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined8 local_50;
  long *plStack_48;
  long *local_40;
  code *pcStack_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  *puVar3 = &PTR_thunk_FUN_1002c33dc_101486540;
  puVar3 = puVar3 + 0x18;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x36;
  FUN_10064e264(plVar1);
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  FUN_1004e313c(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  iVar2 = FUN_1001311d4();
  if (iVar2 != 0) {
    *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) & 0xfffffffb;
  }
  FUN_100652cac(puVar3,PTR_s_build___VGX_common_atlas_101854980,"VGX_logo");
  FUN_100641478();
  FUN_10064e4dc(param_1,(ulong)(uint)(int)(float)CONCAT13(extraout_var_01,
                                                          CONCAT12(extraout_var_00,
                                                                   CONCAT11(extraout_var,extraout_b0
                                                                           ))) << 0x20 | 0x102);
  local_50 = CONCAT62(local_50._2_6_,0x70);
  FUN_10064e5b8(param_1,&local_50);
  lVar4 = thunk_FUN_10064de70();
  param_1[0x4d] = lVar4;
  FUN_10064e524(plVar1,lVar4);
  lVar4 = FUN_10032523c();
  local_50 = 0;
  pcStack_38 = thunk_FUN_1002c3764;
  plStack_48 = param_1;
  local_40 = param_1;
  FUN_100031f58(lVar4 + 0x40,&local_50);
  lVar4 = FUN_10032523c();
  local_50 = 0;
  pcStack_38 = thunk_FUN_1002c383c;
  plStack_48 = param_1;
  local_40 = param_1;
  FUN_1002a71d4(lVar4 + 0x50,&local_50);
  return param_1;
}




long * thunk_FUN_1002c3284(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  code *pcStack_38;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  puVar3[0x17] = 0;
  *puVar3 = &PTR_thunk_FUN_1002c33dc_101486540;
  puVar3 = puVar3 + 0x18;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x36;
  FUN_10064e264(plVar1);
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  FUN_1004e313c(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  iVar2 = FUN_1001311d4();
  if (iVar2 != 0) {
    *(uint *)((long)param_1 + 0x234) = *(uint *)((long)param_1 + 0x234) & 0xfffffffb;
  }
  FUN_100652cac(puVar3,PTR_s_build___VGX_common_atlas_101854980,"VGX_logo");
  FUN_100641478();
  FUN_10064e4dc(param_1,(ulong)(uint)(int)(float)CONCAT13(extraout_var_01,
                                                          CONCAT12(extraout_var_00,
                                                                   CONCAT11(extraout_var,extraout_b0
                                                                           ))) << 0x20 | 0x102);
  uStack_50 = CONCAT62(uStack_50._2_6_,0x70);
  FUN_10064e5b8(param_1,&uStack_50);
  lVar4 = thunk_FUN_10064de70();
  param_1[0x4d] = lVar4;
  FUN_10064e524(plVar1,lVar4);
  lVar4 = FUN_10032523c();
  uStack_50 = 0;
  pcStack_38 = thunk_FUN_1002c3764;
  plStack_48 = param_1;
  plStack_40 = param_1;
  FUN_100031f58(lVar4 + 0x40,&uStack_50);
  lVar4 = FUN_10032523c();
  uStack_50 = 0;
  pcStack_38 = thunk_FUN_1002c383c;
  plStack_48 = param_1;
  plStack_40 = param_1;
  FUN_1002a71d4(lVar4 + 0x50,&uStack_50);
  return param_1;
}




void FUN_1002c33dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = &PTR_thunk_FUN_1002c33dc_101486540;
  uVar4 = (ulong)*(uint *)(param_1 + 0x4e);
  if (*(uint *)(param_1 + 0x4e) != 0) {
    uVar6 = 0;
    do {
      lVar5 = param_1[0x4f];
      plVar2 = *(long **)(lVar5 + uVar6 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar5 = param_1[0x4f];
        uVar4 = (ulong)*(uint *)(param_1 + 0x4e);
      }
      *(undefined8 *)(lVar5 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  lVar5 = FUN_10032523c();
  if (*(uint *)(lVar5 + 0x40) != 0) {
    lVar3 = *(long *)(lVar5 + 0x48);
    lVar5 = (ulong)*(uint *)(lVar5 + 0x40) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  lVar5 = FUN_10032523c();
  if (*(uint *)(lVar5 + 0x50) != 0) {
    lVar3 = *(long *)(lVar5 + 0x58);
    lVar5 = (ulong)*(uint *)(lVar5 + 0x50) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001f3dd4();
        break;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if ((void *)param_1[0x51] != (void *)0x0) {
    operator_delete__((void *)param_1[0x51]);
    param_1[0x51] = 0;
    param_1[0x50] = 0;
  }
  if ((void *)param_1[0x4f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4f]);
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_1014a7108;
  param_1[0x2f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002c33dc(void)

{
  FUN_1002c33dc();
  return;
}




void FUN_1002c3514(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c33dc();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c3528(void)

{
  return;
}




ulong FUN_1002c352c(long *param_1,long *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *local_88;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  
  if ((int)param_1[0x4e] == 0) {
    uVar4 = 0;
  }
  else {
    (**(code **)(*(long *)param_1[0x4d] + 0x70))((long *)param_1[0x4d],0x28);
    uVar4 = (ulong)*(uint *)(param_1 + 0x4e);
  }
  pvVar1 = operator_new(0x1030);
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*param_2 + 0x40))(param_2);
  FUN_1002c2900(pvVar1,uVar4,uVar2,uVar3);
  local_88 = pvVar1;
  FUN_1002c36c8(param_1 + 0x4e,&local_88);
  FUN_100642bd8(param_1 + 0x36,local_88,1);
  (**(code **)(*(long *)param_1[0x4d] + 0x68))((long *)param_1[0x4d],local_88,1,2);
  local_58 = DAT_101dbd460;
  local_80 = FUN_1002c3748;
  local_70 = 0;
  uStack_68 = 0;
  plStack_78 = param_1;
  local_60 = uVar4;
  FUN_10001554c((long)local_88 + 8,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = FUN_1002c3748;
  local_70 = 0;
  uStack_68 = 0;
  plStack_78 = param_1;
  local_60 = uVar4;
  FUN_10001554c((long)local_88 + 8,&local_80);
  *(uint *)((long)local_88 + 0x84) = *(uint *)((long)local_88 + 0x84) | 0x10;
  (**(code **)(*param_2 + 0x38))(param_2,(long)local_88 + 0x970);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return uVar4;
}




void FUN_1002c36c8(uint *param_1,undefined8 *param_2)

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
    FUN_1002c3e00(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002c3748(long param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002c375c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,in_x4);
    return;
  }
  return;
}




void FUN_1002c3764(long param_1,int *param_2)

{
  long *plVar1;
  
  if (*param_2 == 1) {
    FUN_1002c37d0();
    return;
  }
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x278);
  *(uint *)((long)plVar1 + 0x62c) = *(uint *)((long)plVar1 + 0x62c) | 4;
  *(uint *)((long)plVar1 + 0x294) = *(uint *)((long)plVar1 + 0x294) & 0xfffffffb;
  FUN_1006513c0(plVar1 + 0x108,plVar1 + 0x202);
                    /* WARNING: Could not recover jumptable at 0x0001002c37cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  return;
}




void FUN_1002c37d0(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1002c2f48(**(undefined8 **)(param_1 + 0x278),1);
  lVar1 = **(long **)(param_1 + 0x278);
  FUN_1004e3120(auStack_30,"0:00");
  if ((*(byte *)(lVar1 + 0x294) >> 2 & 1) != 0) {
    FUN_1006513c0(lVar1 + 0x478,auStack_30);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002c383c(long param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = "%d:0%d";
  if (9 < *param_2 % 0x3c) {
    pcVar1 = "%d:%d";
  }
  FUN_1004e38ac(param_1 + 0x280,pcVar1);
  if ((*(byte *)(**(long **)(param_1 + 0x278) + 0x294) >> 2 & 1) == 0) {
    return;
  }
  FUN_1006513c0(**(long **)(param_1 + 0x278) + 0x478,param_1 + 0x280);
  return;
}




void FUN_1002c38d8(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x290) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x290) = param_2;
  FUN_10064e32c(param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x270) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x278) + uVar2 * 8);
      FUN_1002c2c54(lVar1,*(int *)(lVar1 + 0x1028) == param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x270));
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_button_tap_drill_in.mp3",0,0);
  FUN_1002c3980(param_1,param_2 == 0);
  return;
}




void FUN_1002c3980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = (uint)param_2;
  uVar4 = 0x3f800000;
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x3f800000;
  if (uVar3 == 0) {
    uVar5 = 0x3ecccccd;
  }
  uVar1 = FUN_100640840(uVar4,uVar5,FUN_10001f160);
  uVar2 = FUN_100193f78();
  FUN_10063f090(uVar2,param_2);
  FUN_100642324(param_1 + 0xc0);
  if (uVar3 != 0) {
    uVar1 = uVar2;
  }
  FUN_100642b7c(param_1 + 0xc0,uVar1);
  FUN_1002c3084(**(undefined8 **)(param_1 + 0x278),uVar3 ^ 1);
  return;
}




void FUN_1002c3a30(long *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  FUN_10064e32c();
  iVar2 = FUN_1001270c4();
  fVar6 = 20.0;
  if (iVar2 < 2) {
    fVar6 = 4.0;
  }
  FUN_10064e47c(0x43a90000,0x43a90000,param_1 + 0x18);
  FUN_10064e68c(0x41a00000,fVar6,param_1 + 0x18,0);
  iVar2 = FUN_1001270c4();
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  plVar1 = param_1 + 0x36;
  uVar3 = FUN_10064e4e4(plVar1);
  (**(code **)(*param_1 + 0x48))(param_1);
  uVar4 = 0x42aa0000;
  if (iVar2 < 2) {
    uVar4 = 0x42820000;
  }
  fVar8 = 190.0;
  if (iVar2 < 2) {
    fVar8 = 150.0;
  }
  uVar7 = NEON_fminnm((float)(uVar3 >> 0x20),fVar6 - fVar8);
  FUN_10064e47c(fVar5 + -36.0,uVar7,plVar1);
  FUN_10064a8f8(param_1[0x4d],0);
  FUN_10064e68c(0,uVar4,plVar1,4);
  return;
}




void FUN_1002c3b48(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = 4;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x270);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x278) + uVar4 * 8);
      if (param_2 != (*(uint *)((long)plVar1 + 0x84) & 4) >> 2) {
        *(uint *)((long)plVar1 + 0x84) = *(uint *)((long)plVar1 + 0x84) & 0xfffffffb | uVar2;
        (**(code **)(*plVar1 + 0xe8))();
        uVar3 = *(uint *)(param_1 + 0x270);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}




void FUN_1002c3bc8(long param_1)

{
  ulong uVar1;
  
  if (1 < *(uint *)(param_1 + 0x270)) {
    uVar1 = 1;
    do {
      FUN_1002c3120((float)(int)uVar1 * 0.1 + 0.5,0x3fb33333,
                    *(undefined8 *)(*(long *)(param_1 + 0x278) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x270));
  }
  return;
}




void thunk_FUN_1002c3c64(void)

{
  FUN_1002c3c64();
  return;
}




void FUN_1002c3c44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c3c64();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c3c58(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1002c3c64(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002c3c64_1014863f8;
  if ((void *)param_1[0x203] != (void *)0x0) {
    operator_delete__((void *)param_1[0x203]);
    param_1[0x203] = 0;
    param_1[0x202] = 0;
  }
  param_1[0x12e] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x1fa);
  thunk_FUN_100651068(param_1 + 0x1d3);
  thunk_FUN_100651068(param_1 + 0x1ad);
  thunk_FUN_100651068(param_1 + 0x187);
  param_1[0x169] = &PTR_FUN_1014a7108;
  param_1[0x180] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x183);
  FUN_10064e2bc(param_1 + 0x169);
  param_1[0x13f] = &PTR_FUN_1014a6db0;
  param_1[0x156] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x159);
  FUN_10064e2bc(param_1 + 0x13f);
  FUN_10064221c(param_1 + 0x12e);
  thunk_FUN_100651068(param_1 + 0x108);
  param_1[0xea] = &PTR_FUN_1014a7108;
  param_1[0x101] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x104);
  FUN_10064e2bc(param_1 + 0xea);
  param_1[0xcc] = &PTR_FUN_1014a7108;
  param_1[0xe3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe6);
  FUN_10064e2bc(param_1 + 0xcc);
  thunk_FUN_10064e2bc(param_1 + 0xb5);
  thunk_FUN_100651068(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  FUN_10064221c(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002c3764(long param_1,int *param_2)

{
  long *plVar1;
  
  if (*param_2 == 1) {
    FUN_1002c37d0();
    return;
  }
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x278);
  *(uint *)((long)plVar1 + 0x62c) = *(uint *)((long)plVar1 + 0x62c) | 4;
  *(uint *)((long)plVar1 + 0x294) = *(uint *)((long)plVar1 + 0x294) & 0xfffffffb;
  FUN_1006513c0(plVar1 + 0x108,plVar1 + 0x202);
                    /* WARNING: Could not recover jumptable at 0x0001002c37cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  return;
}




void thunk_FUN_1002c383c(long param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = "%d:0%d";
  if (9 < *param_2 % 0x3c) {
    pcVar1 = "%d:%d";
  }
  FUN_1004e38ac(param_1 + 0x280,pcVar1);
  if ((*(byte *)(**(long **)(param_1 + 0x278) + 0x294) >> 2 & 1) == 0) {
    return;
  }
  FUN_1006513c0(**(long **)(param_1 + 0x278) + 0x478,param_1 + 0x280);
  return;
}




void FUN_1002c3e00(uint *param_1,uint param_2)

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




long * FUN_1002c3e7c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100269da8();
  *puVar3 = &PTR_FUN_101486688;
  puVar3 = puVar3 + 0x19;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100652c08(plVar1);
  param_1[0x55] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(puVar3,&DAT_10115a164,2);
  uVar2 = *(uint *)((long)param_1 + 0x14c);
  if ((uVar2 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x14c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_1000200a0(puVar3);
  }
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 1;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar2 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar2 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x23c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_1002c3fb8(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 *param_4,
                  int param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((undefined8 *)param_3[0x55] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_3[0x55])();
    iVar1 = FUN_100642d08();
    if (iVar1 != 0) {
      uVar2 = (*(code *)**(undefined8 **)param_3[0x55])();
      FUN_1006423ec(uVar2,1);
    }
  }
  param_3[0x55] = (long)param_4;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*param_4)(param_4);
    (**(code **)(*param_3 + 0x78))(param_3,uVar2,1);
    lVar3 = (*(code *)**(undefined8 **)param_3[0x55])();
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
    uVar2 = (*(code *)**(undefined8 **)param_3[0x55])();
    local_38 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_34 = param_2;
    FUN_10064e48c(uVar2,&local_38);
    uVar2 = (*(code *)**(undefined8 **)param_3[0x55])();
    FUN_10064e5ec(0,0,uVar2,0,param_3,0);
  }
  uVar4 = 4;
  if (param_5 == 0) {
    uVar4 = 0;
  }
  *(uint *)((long)param_3 + 0x14c) = *(uint *)((long)param_3 + 0x14c) & 0xfffffffb | uVar4;
  *(uint *)((long)param_3 + 0x23c) = *(uint *)((long)param_3 + 0x23c) & 0xfffffffb | uVar4;
  (**(code **)(*param_3 + 0xe8))(param_3);
  return;
}




void FUN_1002c4104(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if ((undefined8 *)param_3[0x55] != (undefined8 *)0x0) {
    uVar1 = (*(code *)**(undefined8 **)param_3[0x55])();
    local_28 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_24 = param_2;
    FUN_10064e48c(uVar1,&local_28);
    uVar1 = (*(code *)**(undefined8 **)param_3[0x55])();
    FUN_10064e5ec(0,0,uVar1,0,param_3,0);
  }
  return;
}




void FUN_1002c4188(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  (**(code **)(*param_3 + 0x48))();
  FUN_10064e47c(0x41f00000,param_3 + 0x19);
  FUN_10064e47c(0x41f00000,param_2,param_3 + 0x37);
  FUN_10064e5ec(0,0,param_3 + 0x19,1,param_3,0);
  FUN_10064e5ec(0,0,param_3 + 0x37,0,param_3,1);
  return;
}




void FUN_1002c421c(long param_1,int param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  
  if (*(long *)(param_1 + 0x2a8) != 0) {
    puVar1 = &DAT_101d918d4;
    if (param_2 == 0) {
      puVar1 = &DAT_101d918d8;
    }
    lVar2 = 8;
    if (param_2 == 0) {
      lVar2 = 0x18;
    }
    FUN_100644aec(auStack_40,*puVar1,0);
    uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x2a8))();
    FUN_100644c34(uVar3,auStack_40,0);
    (**(code **)(**(long **)(param_1 + 0x2a8) + lVar2))();
  }
  return;
}




void FUN_1002c42a8(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long **)(param_1 + 0x2a8) != (long *)0x0) {
    lVar3 = **(long **)(param_1 + 0x2a8);
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002c42d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x10))();
      return;
    }
    (**(code **)(lVar3 + 0x20))();
    (**(code **)**(undefined8 **)(param_1 + 0x2a8))();
    iVar1 = FUN_100642d08();
    if (iVar1 != 0) {
      uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x2a8))();
      FUN_1006423ec(uVar2,1);
      return;
    }
  }
  return;
}




long * FUN_1002c4324(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_thunk_FUN_1002c43e4_1014867f0;
  lVar4 = 0xc0;
  do {
    FUN_1002c3e7c((long)param_3 + lVar4);
    lVar4 = lVar4 + 0x2b0;
  } while (lVar4 != 0x620);
  lVar4 = 0;
  *(undefined4 *)(param_3 + 0xc4) = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    (**(code **)(*param_3 + 0x78))(param_3,param_3 + lVar4 * 0x56 + 0x18,1);
    local_38 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_34 = param_2;
    FUN_10064e48c(param_3 + lVar4 * 0x56 + 0x18,&local_38);
    lVar4 = 1;
    bVar1 = false;
  } while (bVar3);
  return param_3;
}




long * thunk_FUN_1002c4324(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  puVar2[0x17] = 0;
  *puVar2 = &PTR_thunk_FUN_1002c43e4_1014867f0;
  lVar4 = 0xc0;
  do {
    FUN_1002c3e7c((long)param_3 + lVar4);
    lVar4 = lVar4 + 0x2b0;
  } while (lVar4 != 0x620);
  lVar4 = 0;
  *(undefined4 *)(param_3 + 0xc4) = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    (**(code **)(*param_3 + 0x78))(param_3,param_3 + lVar4 * 0x56 + 0x18,1);
    uStack_38 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_34 = param_2;
    FUN_10064e48c(param_3 + lVar4 * 0x56 + 0x18,&uStack_38);
    lVar4 = 1;
    bVar1 = false;
  } while (bVar3);
  return param_3;
}




void FUN_1002c43e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1002c43e4_1014867f0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x370) = &PTR_FUN_101486688;
    *(undefined ***)((long)param_1 + lVar1 + 0x528) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x5e0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x5f8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x528);
    *(undefined ***)((long)param_1 + lVar1 + 0x438) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x4f0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x508);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x438);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x370);
    lVar1 = lVar1 + -0x2b0;
  } while (lVar1 != -0x560);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002c44a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101486688;
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002c43e4(void)

{
  FUN_1002c43e4();
  return;
}




void FUN_1002c4528(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c43e4();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c453c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[(ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x6d] != param_2) {
    (**(code **)(param_1[(ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18] + 0x138))
              (0x3e800000,param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,0,param_3,1);
    uVar1 = *(uint *)(param_1 + 0xc4);
    *(int *)(param_1 + 0xc4) = (int)((ulong)~uVar1 & 1);
    iVar2 = FUN_100642d08(param_1 + ((ulong)~uVar1 & 1) * 0x56 + 0x18);
    if (iVar2 != 0) {
      FUN_1006423ec(param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,1);
    }
    (**(code **)(*param_1 + 0x78))
              (param_1,param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,1);
    FUN_1002c3fb8(param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001002c4638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[(ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18] + 0x138))
              (0x3e800000,param_1 + (ulong)*(uint *)(param_1 + 0xc4) * 0x56 + 0x18,1,param_4,1);
    return;
  }
  return;
}




void FUN_1002c4650(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    local_38 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_34 = param_2;
    FUN_10064e48c(param_3 + lVar2 * 0x56 + 0x18,&local_38);
    lVar2 = 1;
    bVar1 = false;
  } while (bVar3);
  FUN_1002c4104(param_3 + (ulong)*(uint *)(param_3 + 0xc4) * 0x56 + 0x18);
  return;
}




void FUN_1002c46d4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x620) * 0x2b0 + 0x368);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002c46f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}




void FUN_1002c46f8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101486688;
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002c4778(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 local_90 [2];
  undefined4 local_88 [2];
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar7 = (undefined8 *)FUN_100533dfc();
  puVar7[0x1b] = 0;
  *puVar7 = &PTR_thunk_FUN_1002c4a94_101486938;
  puVar7 = puVar7 + 0x1c;
  FUN_1006505b8(puVar7);
  plVar1 = param_1 + 0x37;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x52;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x70;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8e;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xac;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xca;
  FUN_10064e264(plVar6);
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  thunk_FUN_1005324bc(param_1 + 0xe3);
  *(undefined1 *)(param_1 + 0x117) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  local_88[0] = 0xff120906;
  local_90[0] = 0xff3b1d17;
  FUN_100650608(puVar7,local_88);
  FUN_100652dd4(plVar4,local_88,2);
  FUN_100650608(plVar1,local_90);
  FUN_100652dd4(plVar5,local_90,2);
  FUN_100652cac(plVar4,PTR_s_build___VGX_common_atlas_101854980,"global_fade_curved_01");
  *(byte *)(param_1 + 0xa9) = *(byte *)(param_1 + 0xa9) | 1;
  FUN_100652cac(plVar5,PTR_s_build___VGX_common_atlas_101854980,"global_fade_curved_01");
  local_80 = (code *)CONCAT44(local_80._4_4_,0xff606060);
  FUN_100652dd4(plVar2,&local_80,2);
  FUN_100652cac(plVar2,PTR_s_build___VGX_splash_tga_101854978,"blurred");
  FUN_100652cac(plVar3,PTR_s_build___VGX_splash_tga_101854978,"splash");
  uVar8 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar6,uVar8);
  local_58 = DAT_101d918ac;
  local_80 = thunk_FUN_1002c525c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  local_58 = DAT_101d918a4;
  local_80 = FUN_1002c4a70;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xe4,&local_80);
  local_58 = DAT_101d918a0;
  local_80 = FUN_1002c4a80;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xe4,&local_80);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void thunk_FUN_1002c525c(long param_1)

{
  FUN_1001e7eb0(param_1 + 0x718);
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
  FUN_100329cd4();
  FUN_100329f18();
  return;
}




void FUN_1002c4a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002c4a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_1002c4a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002c4a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))();
  return;
}




long * thunk_FUN_1002c4778(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 auStack_90 [2];
  undefined4 auStack_88 [2];
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar7 = (undefined8 *)FUN_100533dfc();
  puVar7[0x1b] = 0;
  *puVar7 = &PTR_thunk_FUN_1002c4a94_101486938;
  puVar7 = puVar7 + 0x1c;
  FUN_1006505b8(puVar7);
  plVar1 = param_1 + 0x37;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x52;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x70;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8e;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xac;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xca;
  FUN_10064e264(plVar6);
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  thunk_FUN_1005324bc(param_1 + 0xe3);
  *(undefined1 *)(param_1 + 0x117) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  auStack_88[0] = 0xff120906;
  auStack_90[0] = 0xff3b1d17;
  FUN_100650608(puVar7,auStack_88);
  FUN_100652dd4(plVar4,auStack_88,2);
  FUN_100650608(plVar1,auStack_90);
  FUN_100652dd4(plVar5,auStack_90,2);
  FUN_100652cac(plVar4,PTR_s_build___VGX_common_atlas_101854980,"global_fade_curved_01");
  *(byte *)(param_1 + 0xa9) = *(byte *)(param_1 + 0xa9) | 1;
  FUN_100652cac(plVar5,PTR_s_build___VGX_common_atlas_101854980,"global_fade_curved_01");
  pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,0xff606060);
  FUN_100652dd4(plVar2,&pcStack_80,2);
  FUN_100652cac(plVar2,PTR_s_build___VGX_splash_tga_101854978,"blurred");
  FUN_100652cac(plVar3,PTR_s_build___VGX_splash_tga_101854978,"splash");
  uVar8 = thunk_FUN_10064dde8();
  FUN_10064e524(plVar6,uVar8);
  uStack_58 = DAT_101d918ac;
  pcStack_80 = thunk_FUN_1002c525c;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_80);
  uStack_58 = DAT_101d918a4;
  pcStack_80 = FUN_1002c4a70;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xe4,&pcStack_80);
  uStack_58 = DAT_101d918a0;
  pcStack_80 = FUN_1002c4a80;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xe4,&pcStack_80);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1002c4a94(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_1002c4a94_101486938;
  puVar1 = param_1 + 0xe3;
  FUN_1002c4bac(puVar1,DAT_101d918a4,FUN_1002c4a70,param_1);
  FUN_1002c4bac(puVar1,DAT_101d918a0,FUN_1002c4a80,param_1);
  thunk_FUN_100532514(puVar1);
  thunk_FUN_10064e2bc(param_1 + 0xca);
  param_1[0xac] = &PTR_FUN_1014a7108;
  param_1[0xc3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc6);
  FUN_10064e2bc(param_1 + 0xac);
  param_1[0x8e] = &PTR_FUN_1014a7108;
  param_1[0xa5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa8);
  FUN_10064e2bc(param_1 + 0x8e);
  param_1[0x70] = &PTR_FUN_1014a7108;
  param_1[0x87] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8a);
  FUN_10064e2bc(param_1 + 0x70);
  param_1[0x52] = &PTR_FUN_1014a7108;
  param_1[0x69] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x37);
  FUN_10064e2bc(param_1 + 0x1c);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void FUN_1002c4bac(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




void thunk_FUN_1002c4a94(void)

{
  FUN_1002c4a94();
  return;
}




void FUN_1002c4c04(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c4a94();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c4c18(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002c4c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002c4c24(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float local_84;
  undefined1 auStack_80 [4];
  float local_7c;
  float local_78;
  float local_74;
  
  FUN_10064e32c();
  FUN_10064e6d8(0,0,param_1,0);
  FUN_10064142c(&local_74,&local_78);
  FUN_100641464(&local_7c,auStack_80);
  lVar1 = param_1 + 0xe0;
  FUN_10064e47c(local_74 * 0.5,local_78,lVar1);
  lVar11 = param_1 + 0x1b8;
  FUN_10064e47c(local_74 * 0.5,local_78,lVar11);
  FUN_10064e6d8(0,0,lVar1,0);
  FUN_10064e6d8(0,0,lVar11,1);
  local_84 = 1.7777778;
  lVar2 = param_1 + 0x380;
  FUN_100653080(lVar2,1);
  FUN_100652f30(lVar2,&local_84);
  iVar9 = FUN_1001270c4();
  fVar13 = 1.1;
  if (iVar9 != 1) {
    fVar13 = 1.0;
  }
  fVar14 = 1.3;
  if (iVar9 != 0) {
    fVar14 = fVar13;
  }
  fVar14 = fVar14 * local_78;
  fVar13 = fVar14 * local_84;
  uVar7 = 0x3edc28f6;
  if (fVar13 <= local_74) {
    uVar7 = (undefined4)DAT_101873a40;
  }
  uVar8 = 0x3ec7ae14;
  if (fVar14 <= local_78) {
    uVar8 = DAT_101873a40._4_4_;
  }
  FUN_10064e47c(fVar13,fVar14,lVar2);
  uVar10 = FUN_100641574("root-layer");
  FUN_10064e784(uVar7,uVar8,uVar7,uVar8,0,0,lVar2,uVar10);
  FUN_10064e47c(fVar13,fVar14,param_1 + 0x290);
  if ((*(float *)(param_1 + 0x2d0) != *(float *)(param_1 + 0x3c0)) ||
     (*(float *)(param_1 + 0x2d4) != *(float *)(param_1 + 0x3c4))) {
    *(float *)(param_1 + 0x2d0) = *(float *)(param_1 + 0x3c0);
    *(float *)(param_1 + 0x2d4) = *(float *)(param_1 + 0x3c4);
    FUN_1000200a0(param_1 + 0x290);
  }
  fVar14 = (float)NEON_fminnm(local_74 / fVar13,0x3f800000);
  if (fVar14 <= 0.85) {
    fVar14 = 0.85;
  }
  fVar6 = ((fVar14 + -0.85) * -1.666667 + 1.0) * local_78;
  lVar3 = param_1 + 0x470;
  FUN_10064e47c(((fVar14 + -0.85) * -1.3333335 + 0.75) * local_78 + 16.0,local_78 + 32.0,lVar3);
  lVar4 = param_1 + 0x560;
  FUN_10064e47c(fVar6 + 16.0,local_78 + 32.0,lVar4);
  uVar5 = *(uint *)(param_1 + 0x4f4);
  if (local_74 / fVar13 <= 1.0) {
    if ((uVar5 & 0x7f80) != 0x7280) {
      *(uint *)(param_1 + 0x4f4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
      FUN_1000200a0(lVar3);
    }
    uVar5 = *(uint *)(param_1 + 0x5e4);
    if ((uVar5 & 0x7f80) != 0x7280) {
      *(uint *)(param_1 + 0x5e4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x7280;
      FUN_1000200a0(lVar4);
    }
    FUN_10064e5ec(0xc1000000,0,lVar3,0,lVar1,0);
    uVar10 = 1;
    uVar12 = 1;
  }
  else {
    if ((uVar5 & 0x7f80) != 0x7f80) {
      *(uint *)(param_1 + 0x4f4) = uVar5 | 0x7f80;
      FUN_1000200a0(lVar3);
    }
    if ((~*(uint *)(param_1 + 0x5e4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x5e4) = *(uint *)(param_1 + 0x5e4) | 0x7f80;
      FUN_1000200a0(lVar4);
    }
    FUN_10064e5ec(0xc1000000,0,lVar3,7,lVar2,7);
    uVar10 = 5;
    uVar12 = 5;
    lVar11 = lVar2;
  }
  FUN_10064e5ec(0x41000000,0,lVar4,uVar10,lVar11,uVar12);
  iVar9 = FUN_1001270c4();
  fVar13 = 1.6666666;
  if (iVar9 < 2) {
    fVar13 = 2.0;
  }
  if (fVar13 < local_7c / local_78) {
    local_7c = (float)NEON_fminnm(local_78 * 2.2222223,
                                  (fVar13 + (local_7c / local_78 - fVar13) * 0.4) * local_78);
  }
  lVar1 = param_1 + 0x650;
  FUN_10064e47c(local_7c,lVar1);
  FUN_10064e32c(lVar1);
  FUN_10064e5ec(0,0,lVar1,8,param_1,8);
  return;
}




undefined4 FUN_1002c5004(void)

{
  undefined4 local_18 [2];
  
  FUN_10064142c(local_18,(ulong)local_18 | 4);
  return local_18[0];
}




void FUN_1002c5030(long param_1)

{
  FUN_1002c3bc8(*(undefined8 *)(param_1 + 0x708));
  return;
}




void FUN_1002c5038(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x708) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x708) = param_2;
  plVar1 = (long *)FUN_10064e5a0(param_1 + 0x650);
                    /* WARNING: Could not recover jumptable at 0x0001002c5084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined8 *)(param_1 + 0x708),0,9);
  return;
}




void FUN_1002c5088(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x710) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x710) = param_2;
  lVar1 = param_1 + 0x650;
  FUN_100642bd8(lVar1,param_2,1);
  if (*(long *)(param_1 + 0x708) != 0) {
    FUN_100642bd8(lVar1,*(long *)(param_1 + 0x708),1);
  }
  plVar2 = (long *)FUN_10064e5a0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002c50f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,*(undefined8 *)(param_1 + 0x710),1,9);
  return;
}




void FUN_1002c50fc(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(byte *)(param_1 + 0x8b8) != param_2) {
    uVar2 = 0x3ea8f5c3;
    if (param_3 == 0) {
      uVar2 = 0x3f800000;
    }
    if (param_2 == 0) {
      lVar4 = param_1 + 0x380;
      uVar1 = *(uint *)(param_1 + 0x404);
      *(uint *)(param_1 + 0x404) = uVar1 | 4;
      if ((uVar1 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x404) = uVar1 & 0xffff807f | 4;
        FUN_1000200a0(lVar4);
      }
      uVar3 = FUN_100640840(0x3f800000,uVar2,FUN_10001f160);
      FUN_100642324(lVar4);
      FUN_100642b14(lVar4,uVar3);
      uVar3 = FUN_10064081c(uVar2);
      FUN_100047300();
      lVar4 = param_1 + 0x290;
    }
    else {
      FUN_100642324(param_1 + 0x290);
      *(uint *)(param_1 + 0x314) = *(uint *)(param_1 + 0x314) | 4;
      uVar3 = FUN_100640840(0,uVar2,FUN_10001f160);
      FUN_100047300();
      lVar4 = param_1 + 0x380;
    }
    FUN_100642324(lVar4);
    FUN_100642b7c(lVar4,uVar3);
    *(char *)(param_1 + 0x8b8) = (char)param_2;
  }
  return;
}




long FUN_1002c5224(long param_1)

{
  return param_1 + 0x718;
}




void FUN_1002c522c(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = FUN_100126b6c();
  pcVar1 = "vainglory://SOCIAL";
  if (iVar2 == 0) {
    pcVar1 = "vainglory://PEOPLE/FRIENDS";
  }
  FUN_1001db0bc(pcVar1,0);
  return;
}




void FUN_1002c525c(long param_1)

{
  FUN_1001e7eb0(param_1 + 0x718);
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
  FUN_100329cd4();
  FUN_100329f18();
  return;
}




void FUN_1002c5294(void)

{
  return;
}




void FUN_1002c5298(void)

{
  return;
}




void FUN_1002c529c(void)

{
  return;
}




void FUN_1002c52a0(void)

{
  return;
}




void FUN_1002c52a4(void)

{
  return;
}




void FUN_1002c52a8(void)

{
  return;
}




undefined8 FUN_1002c52ac(void)

{
  return 0;
}




void FUN_1002c52b4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x708),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"Solid_Ring_Bar_Fill");
  FUN_1000f4b7c(*param_2,param_2[1],fVar2,0,0,param_1,param_2,uVar1,param_3,param_4);
  return;
}




long * FUN_1002c5338(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_1002c5744_101486ac0;
  FUN_10064e264(puVar8 + 0x18);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  FUN_1006421a8(plVar2);
  param_1[0x4d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10064e264(param_1 + 0x5e);
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  plVar3 = param_1 + 0x77;
  thunk_FUN_100652c08(plVar3);
  FUN_1002c6c6c(param_1 + 0x95);
  plVar4 = param_1 + 0x1fe;
  FUN_1002c6824(plVar4);
  plVar5 = param_1 + 0x2e0;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x429;
  thunk_FUN_1002eca3c(plVar6,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x95,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,param_1 + 0x5e,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  local_b0._0_4_ = 0xff606060;
  FUN_100652dd4(plVar1,&local_b0,2);
  FUN_100652cac(plVar1,PTR_s_build___VGX_splash_tga_101854978,"blurred");
  FUN_1002ecc7c(plVar5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1002eccb4(plVar5,&DAT_10115a168);
  FUN_1002ebe0c(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b0 = (code *)CONCAT44(local_b0._4_4_,0xff5e4040);
  FUN_1002ebe4c(plVar5,&local_b0);
  FUN_1002ebe68(0x3f4ccccd,plVar5);
  FUN_1002ebee0(0x42480000,0x41400000,plVar5);
  uVar7 = DAT_101d91884;
  local_88 = DAT_101d91884;
  local_b0 = FUN_1002c56d8;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x2e1,&local_b0);
  uVar9 = FUN_1004e0150("MAIN_MATCH_CONFIRM_ACCEPT",0);
  FUN_1002ecce4(plVar5,uVar9);
  FUN_10064e47c(0x43c00000,0x42c00000,plVar5);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1002eccb4(plVar6,&DAT_10115a168);
  FUN_1002ebe0c(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe68(0,plVar6);
  FUN_1002ebee0(0x42480000,0x41400000,plVar6);
  local_88 = uVar7;
  local_b0 = FUN_1002c570c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x42a,&local_b0);
  uVar9 = FUN_1004e0150("MAIN_MATCH_CONFIRM_DECLINE",0);
  FUN_1002ecce4(plVar6,uVar9);
  FUN_10064e47c(0x43c00000,0x42c00000,plVar6);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar9 = FUN_10064e4e4(plVar4);
  FUN_10064e4a0(plVar4,uVar9);
  return param_1;
}




void FUN_1002c56d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  }
  FUN_100644b08(param_4);
  return;
}




void FUN_1002c570c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  }
  FUN_100644b08(param_4);
  return;
}




long * thunk_FUN_1002c5338(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  puVar8[0x17] = 0;
  *puVar8 = &PTR_thunk_FUN_1002c5744_101486ac0;
  FUN_10064e264(puVar8 + 0x18);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  FUN_1006421a8(plVar2);
  param_1[0x4d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10064e264(param_1 + 0x5e);
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  plVar3 = param_1 + 0x77;
  thunk_FUN_100652c08(plVar3);
  FUN_1002c6c6c(param_1 + 0x95);
  plVar4 = param_1 + 0x1fe;
  FUN_1002c6824(plVar4);
  plVar5 = param_1 + 0x2e0;
  thunk_FUN_1002eca3c(plVar5,0);
  plVar6 = param_1 + 0x429;
  thunk_FUN_1002eca3c(plVar6,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x95,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,param_1 + 0x5e,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  pcStack_b0._0_4_ = 0xff606060;
  FUN_100652dd4(plVar1,&pcStack_b0,2);
  FUN_100652cac(plVar1,PTR_s_build___VGX_splash_tga_101854978,"blurred");
  FUN_1002ecc7c(plVar5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1002eccb4(plVar5,&DAT_10115a168);
  FUN_1002ebe0c(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_b0 = (code *)CONCAT44(pcStack_b0._4_4_,0xff5e4040);
  FUN_1002ebe4c(plVar5,&pcStack_b0);
  FUN_1002ebe68(0x3f4ccccd,plVar5);
  FUN_1002ebee0(0x42480000,0x41400000,plVar5);
  uVar7 = DAT_101d91884;
  uStack_88 = DAT_101d91884;
  pcStack_b0 = FUN_1002c56d8;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x2e1,&pcStack_b0);
  uVar9 = FUN_1004e0150("MAIN_MATCH_CONFIRM_ACCEPT",0);
  FUN_1002ecce4(plVar5,uVar9);
  FUN_10064e47c(0x43c00000,0x42c00000,plVar5);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1002eccb4(plVar6,&DAT_10115a168);
  FUN_1002ebe0c(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebe68(0,plVar6);
  FUN_1002ebee0(0x42480000,0x41400000,plVar6);
  uStack_88 = uVar7;
  pcStack_b0 = FUN_1002c570c;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x42a,&pcStack_b0);
  uVar9 = FUN_1004e0150("MAIN_MATCH_CONFIRM_DECLINE",0);
  FUN_1002ecce4(plVar6,uVar9);
  FUN_10064e47c(0x43c00000,0x42c00000,plVar6);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar9 = FUN_10064e4e4(plVar4);
  FUN_10064e4a0(plVar4,uVar9);
  return param_1;
}




void FUN_1002c5744(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002c5744_101486ac0;
  param_1[0x429] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x54a);
  FUN_1002ebc50(param_1 + 0x429);
  param_1[0x2e0] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x401);
  FUN_1002ebc50(param_1 + 0x2e0);
  param_1[0x1fe] = &PTR_FUN_101486d50;
  thunk_FUN_100651068(param_1 + 0x2b8);
  thunk_FUN_100651068(param_1 + 0x292);
  param_1[0x272] = &PTR_FUN_1014a7108;
  param_1[0x289] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x28c);
  FUN_10064e2bc(param_1 + 0x272);
  param_1[0x254] = &PTR_FUN_1014a7108;
  param_1[0x26b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x26e);
  FUN_10064e2bc(param_1 + 0x254);
  param_1[0x233] = &PTR_FUN_1014a77a8;
  param_1[0x24a] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x251);
  param_1[0x233] = &PTR_FUN_1014a7108;
  param_1[0x24a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x24d);
  FUN_10064e2bc(param_1 + 0x233);
  param_1[0x215] = &PTR_FUN_1014a7108;
  param_1[0x22c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x22f);
  FUN_10064e2bc(param_1 + 0x215);
  FUN_10064e2bc(param_1 + 0x1fe);
  FUN_1002c752c(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_1014a7108;
  param_1[0x8e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x91);
  FUN_10064e2bc(param_1 + 0x77);
  if ((void *)param_1[0x76] != (void *)0x0) {
    operator_delete__((void *)param_1[0x76]);
    param_1[0x76] = 0;
    param_1[0x75] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002c5930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101486d50;
  thunk_FUN_100651068(param_1 + 0xba);
  thunk_FUN_100651068(param_1 + 0x94);
  param_1[0x74] = &PTR_FUN_1014a7108;
  param_1[0x8b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8e);
  FUN_10064e2bc(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_1014a7108;
  param_1[0x6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x35] = &PTR_FUN_1014a77a8;
  param_1[0x4c] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x53);
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




void thunk_FUN_1002c752c(void)

{
  FUN_1002c752c();
  return;
}




void thunk_FUN_1002c5744(void)

{
  FUN_1002c5744();
  return;
}




void FUN_1002c5a1c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c5744();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c5a30(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  
  FUN_10064e32c();
  uVar8 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(uVar8,param_3 + 0x18);
  FUN_10064e47c(uVar8,param_2,param_3 + 0x2f);
  plVar1 = param_3 + 0x1fe;
  uVar12 = 0;
  FUN_10064e5ec(0,plVar1,8,param_3,8);
  uVar9 = (undefined4)uVar12;
  if (1 < *(uint *)(param_3 + 0x75)) {
    lVar6 = 0;
    do {
      puVar4 = (undefined8 *)(param_3[0x76] + lVar6 * 8);
      FUN_10064e72c(0x41400000,puVar4[1],3,*puVar4,1);
      uVar9 = (undefined4)uVar12;
      uVar5 = lVar6 + 2;
      lVar6 = lVar6 + 1;
    } while (uVar5 < *(uint *)(param_3 + 0x75));
  }
  plVar2 = param_3 + 0x5e;
  local_78 = FUN_1006425d0(plVar2,0,0,1,1);
  uStack_74 = uVar9;
  FUN_10064e48c(plVar2,&local_78);
  plVar3 = param_3 + 0x77;
  fVar7 = (float)FUN_10064e3cc(plVar2);
  FUN_10064e47c(fVar7 + 96.0,0x40400000,plVar3);
  FUN_10064e5ec(0,0x41c00000,plVar2,4,plVar1,6);
  FUN_10064e5ec(0,0x41400000,plVar3,4,plVar2,6);
  FUN_10064e5ec(0x42c00000,0x41c00000,param_3 + 0x2e0,0,plVar3,6);
  fVar10 = 24.0;
  FUN_10064e5ec(0xc2c00000,0x41c00000,param_3 + 0x429,1,plVar3,6);
  plVar3 = param_3 + 0x95;
  uVar5 = FUN_10064e4e4(plVar3);
  FUN_10064e3cc(plVar1);
  fVar11 = fVar10;
  FUN_10064e3cc(plVar2);
  fVar7 = fVar11;
  FUN_10064e3cc(param_3 + 0x2e0);
  FUN_10064e47c(uVar8,(float)(uVar5 >> 0x20) + fVar10 + 300.0 + fVar11 + fVar7,plVar3);
  FUN_10064e5ec(0,0,plVar3,8,plVar1,8);
  FUN_10064e72c(0x42c00000,plVar3,2,param_3 + 0x429,2);
  return;
}




void FUN_1002c5c84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x1700;
  FUN_100530068(lVar1,1);
  lVar2 = param_1 + 0x2148;
  FUN_100530068(lVar2,1);
  FUN_100642324(lVar2);
  FUN_100642324(lVar1);
  if ((~*(uint *)(param_1 + 0x21cc) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x21cc) = *(uint *)(param_1 + 0x21cc) | 0x7f80;
    FUN_1000200a0(lVar2);
  }
  if ((~*(uint *)(param_1 + 0x1784) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1784) = *(uint *)(param_1 + 0x1784) | 0x7f80;
    FUN_1000200a0(lVar1);
  }
  FUN_1002c5d5c(param_1 + 0xff0);
  return;
}




void FUN_1002c5d24(long param_1,undefined8 param_2)

{
  FUN_100530068(param_1 + 0x1700);
  FUN_100530068(param_1 + 0x2148,param_2);
  return;
}




void FUN_1002c5d5c(long param_1)

{
  undefined4 local_38 [2];
  
  FUN_100642324(param_1 + 0xb8);
  FUN_100642324(param_1 + 0x2b0);
  FUN_100652dd4(param_1 + 0xb8,&DAT_10115a168,2);
  local_38[0] = 0xffc8bebe;
  FUN_100652dd4(param_1 + 0x2b0,local_38,2);
  FUN_100652dd4(param_1 + 0x3a0,&DAT_10115a168,2);
  return;
}




void FUN_1002c5de4(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10002f320();
  lVar2 = FUN_1010a0298(uVar1,DAT_10184dd48);
  if (lVar2 != 0) {
    FUN_10004b038(0x3f800000,lVar2,"build://Sounds/UI.assetbundle/ui_matchmaker_match_found.mp3",0,1
                  ,0);
    FUN_10004b148(lVar2);
    return;
  }
  return;
}




void FUN_1002c5e40(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10002f320();
  lVar2 = FUN_1010a0298(uVar1,DAT_10184dd48);
  if (lVar2 != 0) {
    FUN_10004b038(0x3f800000,lVar2,"build://Sounds/UI.assetbundle/sfx__minimap_avoid.mp3",0,1,0);
    FUN_10004b148(lVar2);
    return;
  }
  return;
}




void FUN_1002c5e9c(undefined1 param_1 [16],undefined4 param_2,long *param_3,int param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 local_48;
  
  if ((int)param_3[0x75] != param_4) {
    FUN_1002c5f80();
    if (param_4 != 0) {
      do {
        operator_new(0x358);
        local_48 = FUN_1002c6578();
        FUN_1002c5fdc(param_3 + 0x75,&local_48);
        plVar1 = *(long **)(param_3[0x76] + (ulong)((int)param_3[0x75] - 1) * 8);
        uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,0,0,1,1);
        local_48 = CONCAT44(param_2,uVar2);
        FUN_10064e48c(plVar1,&local_48);
        FUN_100642bd8(param_3 + 0x5e,
                      *(undefined8 *)(param_3[0x76] + (ulong)((int)param_3[0x75] - 1) * 8),1);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    (**(code **)(*param_3 + 0xe8))(param_3);
  }
  return;
}




void FUN_1002c5f80(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x3a8);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x3b0) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x3a8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x3b0) != 0) {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  return;
}




void FUN_1002c5fdc(uint *param_1,undefined8 *param_2)

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
    FUN_1002c764c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002c605c(long param_1,uint *param_2,ulong param_3)

{
  ulong uVar1;
  
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(uint *)(param_1 + 0x3a8) <= uVar1) {
        return;
      }
      FUN_1002c60cc(*(undefined8 *)(*(long *)(param_1 + 0x3b0) + uVar1 * 8),
                    *(undefined4 *)(*(long *)(param_2 + 2) + uVar1 * 4),
                    (param_3 & 0xffffffff) == uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  return;
}




void FUN_1002c60cc(long param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  
  if ((*(char *)(param_1 + 0x355) != '\0') && (*(int *)(param_1 + 0x350) == param_2)) {
    return;
  }
  if (param_2 == 0) {
    FUN_100642324(param_1 + 0xb8);
    bVar1 = false;
    if ((*(float *)(param_1 + 0xfc) == 0.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0xf8)))) {
      bVar1 = *(float *)(param_1 + 0xf8) == 0.0;
    }
    if (!bVar1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      FUN_1000200a0(param_1 + 0xb8);
    }
    *(undefined1 *)(param_1 + 0x354) = 0;
    *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
    local_60[0] = 0xff5e4040;
    FUN_100652dd4(param_1 + 0x260,local_60,2);
  }
  else {
    if (param_2 == 1) {
      puVar4 = &DAT_101d236c0;
      if (param_3 == 0) {
        puVar4 = &DAT_10115a168;
      }
    }
    else {
      if (param_2 != 2) goto LAB_1002c6280;
      local_58[0] = 0xff5a5ad2;
      puVar4 = local_58;
    }
    lVar5 = param_1 + 0x260;
    FUN_100652dd4(lVar5,puVar4,2);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x2a8) == 2.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x2ac))))
    {
      bVar1 = *(float *)(param_1 + 0x2ac) == 2.0;
    }
    if (!bVar1) {
      *(undefined8 *)(param_1 + 0x2a8) = 0x4000000040000000;
      FUN_1000200a0(lVar5);
    }
    if ((*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) & 0xffff807f;
      FUN_1000200a0(lVar5);
    }
    uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3e4ccccd,FUN_10006bf9c);
    FUN_100640840(0x3f800000,0x3e19999a,0);
    uVar3 = FUN_10001f4d4();
    FUN_10063f2a4(uVar3,uVar2);
    FUN_100642b14(lVar5,uVar3);
    uVar2 = FUN_10064081c(0x3e4ccccd);
    uVar3 = FUN_100193f78();
    FUN_10063f090(uVar3,0);
    FUN_100642b7c(param_1 + 0x170,uVar2);
  }
LAB_1002c6280:
  *(undefined1 *)(param_1 + 0x355) = 1;
  *(int *)(param_1 + 0x350) = param_2;
  return;
}




void FUN_1002c62a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1006513c0(param_1 + 0x1490);
  FUN_1006513c0(param_1 + 0x15c0,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001002c62f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0xff0) + 0xe8))(param_1 + 0xff0);
  return;
}




void FUN_1002c62fc(float param_1,float param_2,long param_3)

{
  *(float *)(param_3 + 0x16f8) = param_1 / param_2;
  return;
}




void FUN_1002c6308(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 0x2ec) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x268);
  }
  uVar2 = FUN_100640840(0x3f800000,0x3e800000,0);
  FUN_100642b14(param_1 + 0x268,uVar2);
  lVar1 = param_1 + 0x10a8;
  FUN_100642324(lVar1);
  if ((*(uint *)(param_1 + 0x112c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x112c) = *(uint *)(param_1 + 0x112c) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  uVar2 = FUN_10064081c(0x3e800000);
  FUN_100640840(0x3f800000,0x41200000,0);
  FUN_100642b7c(lVar1,uVar2);
  return;
}




void FUN_1002c63c0(long param_1)

{
  FUN_100642324(param_1 + 0x10a8);
  if ((*(uint *)(param_1 + 0x112c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x112c) = *(uint *)(param_1 + 0x112c) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x10a8);
    return;
  }
  return;
}




void FUN_1002c6410(long param_1)

{
  FUN_1002c6418(param_1 + 0xff0);
  return;
}




void FUN_1002c6418(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  
  local_48[0] = 0xff0606a4;
  FUN_100652dd4(param_1 + 0x3a0,local_48,2);
  lVar1 = param_1 + 0xb8;
  FUN_100642324(lVar1);
  FUN_100652dd4(lVar1,&DAT_10115a170,2);
  if ((~*(uint *)(param_1 + 0x13c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x7f80;
    FUN_1000200a0(lVar1);
  }
  uVar2 = FUN_100640840(0x3f800000,0x3f000000,0);
  FUN_100640840(0x3e800000,0x3f000000,0);
  uVar3 = FUN_10008cac4();
  FUN_10063f614(uVar3,uVar2);
  FUN_10063f664(uVar3);
  FUN_100642b14(lVar1,uVar3);
  param_1 = param_1 + 0x2b0;
  local_50[0] = 0xff0606a4;
  FUN_100652dd4(param_1,local_50,2);
  local_58[0] = 0xff0606a4;
  uVar2 = FUN_100640a74(0x3f000000,param_1,local_58,0,2);
  FUN_100640a74(0x3f000000,param_1,&DAT_10115a168,0,2);
  uVar3 = FUN_10008cac4();
  FUN_10063f614(uVar3,uVar2);
  FUN_10063f664(uVar3);
  FUN_100642b14(param_1,uVar3);
  return;
}




long * FUN_1002c6578(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_101486c08;
  puVar4 = puVar4 + 0x17;
  FUN_10064e264(puVar4);
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4c;
  thunk_FUN_100652c08(plVar2);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)((long)param_1 + 0x354) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___VGX_common_atlas_101854980,"global_playericon_outline");
  local_70 = (code *)CONCAT44(local_70._4_4_,0xffa08c8c);
  FUN_100652dd4(plVar1,&local_70,2);
  FUN_100652cac(plVar2,PTR_s_build___VGX_common_atlas_101854980,"global_playericon_solid");
  FUN_100653080(plVar1,1);
  FUN_100653080(plVar2,1);
  FUN_100652fd8(plVar1,0x30);
  FUN_100652fd8(plVar2,0x30);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x56) == (float)DAT_101873a40) &&
     (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x2b4)) && !NAN(DAT_101873a40._4_4_))) {
    bVar3 = *(float *)((long)param_1 + 0x2b4) == DAT_101873a40._4_4_;
  }
  if (!bVar3) {
    param_1[0x56] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar2);
  }
  uVar6 = 0;
  FUN_10064e5ec(0,plVar2,8,plVar1,8);
  uVar5 = FUN_1006425d0(puVar4,0,0,1,1);
  local_70 = (code *)CONCAT44(uVar6,uVar5);
  FUN_10064e48c(puVar4,&local_70);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  local_48 = DAT_101dbd484;
  local_70 = thunk_FUN_1002c6780;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  local_48 = DAT_101dbd458;
  local_70 = thunk_FUN_1002c6780;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  return param_1;
}




void thunk_FUN_1002c6780(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x354) == '\0') && (*(int *)(param_1 + 0x350) != 0)) {
    uVar1 = FUN_1006409b4(0,0x41400000,0x3f000000,FUN_1000d05c0);
    FUN_1006409b4(0,0xc1400000,0x3f000000,FUN_1000d05c0);
    uVar2 = FUN_10008cac4();
    FUN_10063f614(uVar2,uVar1);
    FUN_10063f664(uVar2);
    FUN_100642b14(param_1 + 0xb8,uVar2);
    *(undefined1 *)(param_1 + 0x354) = 1;
  }
  return;
}




void FUN_1002c6780(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x354) == '\0') && (*(int *)(param_1 + 0x350) != 0)) {
    uVar1 = FUN_1006409b4(0,0x41400000,0x3f000000,FUN_1000d05c0);
    FUN_1006409b4(0,0xc1400000,0x3f000000,FUN_1000d05c0);
    uVar2 = FUN_10008cac4();
    FUN_10063f614(uVar2,uVar1);
    FUN_10063f664(uVar2);
    FUN_100642b14(param_1 + 0xb8,uVar2);
    *(undefined1 *)(param_1 + 0x354) = 1;
  }
  return;
}




long * FUN_1002c6824(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_101486d50;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_3 + 0x35;
  FUN_100653ff8(plVar1);
  plVar2 = param_3 + 0x56;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_3 + 0x74;
  FUN_1006533a4(plVar3);
  plVar4 = param_3 + 0x94;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_3 + 0xba;
  thunk_FUN_100650e64(plVar5);
  (**(code **)(*param_3 + 0x78))(param_3,puVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  FUN_100652cac(puVar6,PTR_s_build___VGX_common_atlas_101854980,"solid_round_glow");
  FUN_100652cac(plVar1,PTR_s_build___VGX_common_atlas_101854980,"match_found_fill_bg");
  FUN_10065403c(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dfc(plVar1,0xb);
  FUN_100652cac(plVar2,PTR_s_build___VGX_common_atlas_101854980,"solid_ring_bar_outline");
  local_58[0] = 0xffc8bebe;
  FUN_100652dd4(plVar2,local_58,2);
  FUN_100652cac(plVar3,PTR_s_build___VGX_common_atlas_101854980,"Solid_Ring_Bar_Fill");
  uVar7 = FUN_100652e60(plVar3);
  *(undefined4 *)(param_3 + 0xe0) = uVar7;
  *(undefined4 *)((long)param_3 + 0x704) = param_2;
  FUN_100653464(plVar3,FUN_1002c52b4,param_3);
  local_60[0] = 0xffc8bebe;
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260,local_60);
  local_68[0] = 0xffc8bebe;
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,local_68);
  FUN_10064e4dc(param_3,0x19000000190);
  return param_3;
}




void FUN_1002c6a54(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  
  FUN_10064e32c();
  uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c((float)uVar5 + (float)uVar5,(float)param_2 + (float)param_2,param_3 + 0x17);
  plVar1 = param_3 + 0x35;
  FUN_10064e47c(uVar5,param_2,plVar1);
  plVar2 = param_3 + 0x56;
  FUN_10064e47c(uVar5,param_2,plVar2);
  FUN_1002c6bf4(uVar5,param_2,param_3);
  plVar3 = param_3 + 0xba;
  fVar4 = (float)FUN_100652e60(plVar2);
  FUN_10065179c(fVar4 + -48.0,0,0x3f800000,plVar3);
  FUN_10064e5ec(0,0xc2480000,param_3 + 0x17,4,param_3,4);
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
  fVar4 = 0.0;
  FUN_10064e5ec(0,0,param_3 + 0x74,0,plVar2,0);
  param_3 = param_3 + 0x94;
  FUN_1006511d0(param_3);
  FUN_10064e5ec(0,fVar4 * 0.25,param_3,6,plVar1,8);
  FUN_10064e72c(0xc1f00000,plVar3,0,param_3,2);
  FUN_10064e72c(0,plVar3,4,param_3,4);
  return;
}




void FUN_1002c6bf4(float param_1,float param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_1 / *(float *)(param_3 + 0x700);
  fVar5 = param_2 / *(float *)(param_3 + 0x704);
  fVar2 = *(float *)(param_3 + 1000);
  fVar3 = *(float *)(param_3 + 0x3ec);
  bVar1 = false;
  if ((fVar2 == fVar4) && (bVar1 = false, !NAN(fVar3) && !NAN(fVar5))) {
    bVar1 = fVar3 == fVar5;
  }
  if (!bVar1) {
    *(float *)(param_3 + 1000) = fVar4;
    *(float *)(param_3 + 0x3ec) = fVar5;
    FUN_1000200a0(param_3 + 0x3a0);
    fVar2 = *(float *)(param_3 + 1000);
    fVar3 = *(float *)(param_3 + 0x3ec);
  }
  FUN_10064e47c(param_1 / fVar2,param_2 / fVar3,param_3 + 0x3a0);
  return;
}




long * FUN_1002c6c6c(undefined1 param_1 [16],float param_2,long *param_3)

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
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 local_170 [2];
  undefined **local_168 [23];
  undefined **local_b0;
  undefined1 auStack_98 [40];
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  *puVar11 = &PTR_thunk_FUN_1002c752c_101486e98;
  puVar11 = puVar11 + 0x17;
  thunk_FUN_100652c08(puVar11);
  plVar1 = param_3 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_3 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_3 + 0x71;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_3 + 0xa5;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_3 + 0xc3;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_3 + 0xe1;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_3 + 0xff;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_3 + 0x11d;
  thunk_FUN_100650e64();
  plVar9 = param_3 + 0x143;
  thunk_FUN_100650e64(plVar9);
  (**(code **)(*param_3 + 0x78))(param_3,puVar11,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar8,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar9,1);
  FUN_100652cac(puVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar10 = *(uint *)((long)param_3 + 0x13c);
  if ((uVar10 & 0x7f80) != 0xa00) {
    *(uint *)((long)param_3 + 0x13c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0xa00;
    FUN_1000200a0(puVar11);
  }
  FUN_100652cac(plVar1,PTR_s_build___VGX_common_atlas_101854980,"global_panel_scroll_fade");
  uVar10 = *(uint *)((long)param_3 + 0x22c);
  if ((uVar10 & 0x7f80) != 0x1180) {
    *(uint *)((long)param_3 + 0x22c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1180;
    FUN_1000200a0(plVar1);
  }
  thunk_FUN_100652c08(local_168);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_170[0] = 0xff00004c;
  FUN_100652dd4(plVar2,local_170,2);
  FUN_100654488(plVar3,1);
  FUN_100652cac(plVar4,PTR_s_build___VGX_common_atlas_101854980,"global_brushstroke_01");
  local_170[0] = 0xff141472;
  FUN_100652dd4(plVar4,local_170,2);
  FUN_100653080(plVar4,1);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar10 = *(uint *)((long)param_3 + 0x69c);
  if ((uVar10 & 0x7f80) != 0x1680) {
    *(uint *)((long)param_3 + 0x69c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1680;
    FUN_1000200a0(plVar5);
  }
  uVar10 = *(uint *)((long)param_3 + 0x78c);
  if ((uVar10 & 0x7f80) != 0x1680) {
    *(uint *)((long)param_3 + 0x78c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1680;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  local_170[0] = 0xffc8bebe;
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,local_170);
  uVar12 = FUN_1004e0150("MAIN_MATCH_CONFIRM_TITLE",0);
  FUN_1006513c0(plVar8,uVar12);
  uVar12 = FUN_1004e0150("MAIN_MATCH_CONFIRM_SUBTITLE",0);
  FUN_1006513c0(plVar9,uVar12);
  FUN_100652e60(plVar7);
  fVar13 = param_2;
  FUN_1006511d0(plVar8);
  FUN_10064e4dc(param_3,(ulong)(uint)(int)(param_2 + 96.0 + fVar13) << 0x20);
  local_170[0] = CONCAT22(local_170[0]._2_2_,0x3d);
  FUN_10064e5b8(param_3,local_170);
  local_168[0] = &PTR_FUN_1014a7108;
  local_b0 = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(auStack_98);
  FUN_10064e2bc(local_168);
  return param_3;
}




void FUN_1002c70c4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_78;
  float fStack_74;
  
  FUN_10064e32c();
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  plVar1 = param_3 + 0x53;
  fVar8 = param_2;
  FUN_1006511d0(param_3 + 0x11d);
  fVar8 = fVar8 + 96.0;
  FUN_10064e47c(uVar7,plVar1);
  plVar2 = param_3 + 0x71;
  local_78 = FUN_100652e60(plVar1);
  fStack_74 = fVar8;
  FUN_10064e48c(plVar2,&local_78);
  FUN_100652e60(plVar1);
  FUN_100652eac(param_3 + 0xa5,(int)(fVar8 * 5.0));
  FUN_10064e47c(uVar7,0x3f800000,param_3 + 0xc3);
  FUN_10064e47c(uVar7,0x3f800000,param_3 + 0xe1);
  plVar3 = param_3 + 0xff;
  FUN_10064e47c(uVar7,0x41000000,plVar3);
  plVar6 = param_3 + 0x17;
  uVar5 = (**(code **)(*param_3 + 0x118))(param_3);
  FUN_10064e47c(uVar7,param_2 - (float)(uVar5 >> 0x20),plVar6);
  plVar4 = param_3 + 0x35;
  FUN_100652e60(plVar4);
  FUN_10064e47c(uVar7,plVar4);
  FUN_10064e5ec(0,0,plVar2,8,plVar1,8);
  FUN_10064e5ec(0,0,param_3 + 0xa5,8,plVar2,8);
  FUN_10064e5ec(0,0,plVar3,4,plVar1,6);
  FUN_10064e5ec(0,0xc1c00000,param_3 + 0x143,6,plVar3,4);
  FUN_10064e5ec(0,0,param_3 + 0x11d,8,plVar1,8);
  FUN_10064e5ec(0,0,plVar6,4,plVar3,6);
  FUN_10064e5ec(0,0,plVar4,6,plVar6,6);
  FUN_10064e5ec(0,0,param_3 + 0xc3,4,plVar1,4);
  FUN_10064e5ec(0,0,param_3 + 0xe1,6,plVar6,6);
  return;
}




void FUN_1002c7324(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c752c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c7338(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101486d50;
  thunk_FUN_100651068(param_1 + 0xba);
  thunk_FUN_100651068(param_1 + 0x94);
  param_1[0x74] = &PTR_FUN_1014a7108;
  param_1[0x8b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8e);
  FUN_10064e2bc(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_1014a7108;
  param_1[0x6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70);
  FUN_10064e2bc(param_1 + 0x56);
  param_1[0x35] = &PTR_FUN_1014a77a8;
  param_1[0x4c] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002c7420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101486c08;
  param_1[0x4c] = &PTR_FUN_1014a7108;
  param_1[99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x66);
  FUN_10064e2bc(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002c74a4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101486c08;
  param_1[0x4c] = &PTR_FUN_1014a7108;
  param_1[99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x66);
  FUN_10064e2bc(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002c752c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002c752c_101486e98;
  thunk_FUN_100651068(param_1 + 0x143);
  thunk_FUN_100651068(param_1 + 0x11d);
  param_1[0xff] = &PTR_FUN_1014a7108;
  param_1[0x116] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x119);
  FUN_10064e2bc(param_1 + 0xff);
  param_1[0xe1] = &PTR_FUN_1014a7108;
  param_1[0xf8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfb);
  FUN_10064e2bc(param_1 + 0xe1);
  param_1[0xc3] = &PTR_FUN_1014a7108;
  param_1[0xda] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdd);
  FUN_10064e2bc(param_1 + 0xc3);
  param_1[0xa5] = &PTR_FUN_1014a7108;
  param_1[0xbc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbf);
  FUN_10064e2bc(param_1 + 0xa5);
  FUN_10064e2bc(param_1 + 0x71);
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




void FUN_1002c764c(uint *param_1,uint param_2)

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




void FUN_1002c76c8(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




long * FUN_1002c76f4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar9 = (undefined8 *)FUN_10029b498();
  puVar9[0xc9] = 0;
  *puVar9 = &PTR_thunk_FUN_1002c7b74_101486fe0;
  puVar9 = puVar9 + 0xca;
  thunk_FUN_100181304(puVar9,0);
  plVar1 = param_1 + 0x381;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x39f;
  FUN_10064fd54(plVar2,1);
  param_1[0x39f] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar3 = param_1 + 0x3b8;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x3de;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x404;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x42a;
  thunk_FUN_100650e64(plVar6);
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x476;
  FUN_1006421a8(plVar7);
  param_1[0x476] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x487);
  param_1[0x487] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x498);
  param_1[0x498] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x4aa] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ab] = 0;
  thunk_FUN_1001b4d10(param_1 + 0x4ad);
  param_1[0x712] = 0;
  param_1[0x711] = 0;
  param_1[0x710] = 0;
  param_1[0x713] = DAT_101dc1cb8;
  param_1[0x716] = 0;
  param_1[0x715] = 0;
  param_1[0x714] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x450,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x487,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x498,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,plVar1,1);
  FUN_100642bd8(plVar7,puVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4ad,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651038(param_1 + 0x450,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1006516bc(plVar3,&DAT_101158a40);
  FUN_10065165c(plVar3,1);
  FUN_1006516bc(plVar4,&DAT_101158a40);
  FUN_10065165c(plVar4,1);
  FUN_1006516bc(plVar5,&DAT_101158a40);
  FUN_10065165c(plVar5,1);
  FUN_100651654(0x3f4ccccd,plVar3);
  FUN_100651654(0x3f000000,plVar4);
  FUN_100651654(0x3f4ccccd,plVar5);
  *(uint *)((long)param_1 + 0x2434) = *(uint *)((long)param_1 + 0x2434) & 0xfffffffb;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x1c8c);
  if ((uVar8 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x1c8c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar10 = FUN_1004e0150("MENU_NEWS_TILE_LEAVE_APP_BUTTON",0);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x44960000,puVar9,0,uVar10,&local_a0,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(puVar9,1);
  FUN_1001b495c(0x3f000000,puVar9);
  local_78 = DAT_101d91884;
  local_a0 = FUN_1002c7b58;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xcb,&local_a0);
  FUN_1001b4964(puVar9,1);
  *(uint *)((long)param_1 + 0x25ec) = *(uint *)((long)param_1 + 0x25ec) & 0xfffffffb;
  return param_1;
}




void FUN_1002c7b58(long param_1)

{
  if (*(long **)(param_1 + 0x648) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002c7b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x648) + 8))();
    return;
  }
  return;
}




long * thunk_FUN_1002c76f4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar9 = (undefined8 *)FUN_10029b498();
  puVar9[0xc9] = 0;
  *puVar9 = &PTR_thunk_FUN_1002c7b74_101486fe0;
  puVar9 = puVar9 + 0xca;
  thunk_FUN_100181304(puVar9,0);
  plVar1 = param_1 + 0x381;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x39f;
  FUN_10064fd54(plVar2,1);
  param_1[0x39f] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar3 = param_1 + 0x3b8;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x3de;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x404;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x42a;
  thunk_FUN_100650e64(plVar6);
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x476;
  FUN_1006421a8(plVar7);
  param_1[0x476] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x487);
  param_1[0x487] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x498);
  param_1[0x498] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x4aa] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ab] = 0;
  thunk_FUN_1001b4d10(param_1 + 0x4ad);
  param_1[0x712] = 0;
  param_1[0x711] = 0;
  param_1[0x710] = 0;
  param_1[0x713] = DAT_101dc1cb8;
  param_1[0x716] = 0;
  param_1[0x715] = 0;
  param_1[0x714] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x450,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x487,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x498,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,plVar1,1);
  FUN_100642bd8(plVar7,puVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4ad,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651038(param_1 + 0x450,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_1006516bc(plVar3,&DAT_101158a40);
  FUN_10065165c(plVar3,1);
  FUN_1006516bc(plVar4,&DAT_101158a40);
  FUN_10065165c(plVar4,1);
  FUN_1006516bc(plVar5,&DAT_101158a40);
  FUN_10065165c(plVar5,1);
  FUN_100651654(0x3f4ccccd,plVar3);
  FUN_100651654(0x3f000000,plVar4);
  FUN_100651654(0x3f4ccccd,plVar5);
  *(uint *)((long)param_1 + 0x2434) = *(uint *)((long)param_1 + 0x2434) & 0xfffffffb;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x1c8c);
  if ((uVar8 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x1c8c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar10 = FUN_1004e0150("MENU_NEWS_TILE_LEAVE_APP_BUTTON",0);
  pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x44960000,puVar9,0,uVar10,&pcStack_a0,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(puVar9,1);
  FUN_1001b495c(0x3f000000,puVar9);
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1002c7b58;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xcb,&pcStack_a0);
  FUN_1001b4964(puVar9,1);
  *(uint *)((long)param_1 + 0x25ec) = *(uint *)((long)param_1 + 0x25ec) & 0xfffffffb;
  return param_1;
}




void FUN_1002c7b74(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002c7b74_101486fe0;
  FUN_1002c7ca4();
  if (*(char *)((long)param_1 + 0x3897) < '\0') {
    operator_delete((void *)param_1[0x710]);
  }
  FUN_100196fa4(param_1 + 0x4ad);
  if ((void *)param_1[0x4ac] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4ac]);
    param_1[0x4ac] = 0;
    param_1[0x4ab] = 0;
  }
  if ((void *)param_1[0x4aa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4aa]);
    param_1[0x4aa] = 0;
    param_1[0x4a9] = 0;
  }
  FUN_10064221c(param_1 + 0x498);
  FUN_10064221c(param_1 + 0x487);
  FUN_10064221c(param_1 + 0x476);
  thunk_FUN_100651068(param_1 + 0x450);
  thunk_FUN_100651068(param_1 + 0x42a);
  thunk_FUN_100651068(param_1 + 0x404);
  thunk_FUN_100651068(param_1 + 0x3de);
  thunk_FUN_100651068(param_1 + 0x3b8);
  FUN_10064e2bc(param_1 + 0x39f);
  param_1[0x381] = &PTR_FUN_1014a7108;
  param_1[0x398] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x39b);
  FUN_10064e2bc(param_1 + 0x381);
  FUN_10003bd40(param_1 + 0xca);
  FUN_100296d58(param_1);
  return;
}




void FUN_1002c7ca4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x2550);
  if (*(uint *)(param_1 + 0x2548) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x2548) << 3;
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      *plVar1 = 0;
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
    plVar1 = *(long **)(param_1 + 0x2550);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x2548) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x2560);
  if (*(uint *)(param_1 + 0x2558) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x2558) << 3;
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      *plVar1 = 0;
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
    plVar1 = *(long **)(param_1 + 0x2560);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x2558) = 0;
  }
  return;
}




void thunk_FUN_1002c7b74(void)

{
  FUN_1002c7b74();
  return;
}




void FUN_1002c7d44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c7b74();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c7d58(undefined1 param_1 [16],float param_2,long *param_3)

{
  bool bVar1;
  float fVar2;
  float local_40;
  float fStack_3c;
  undefined1 *local_38;
  
  FUN_10029b664();
  local_40 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_3c = param_2;
  FUN_10064e48c(param_3 + 0x381,&local_40);
  fVar2 = fStack_3c * 0.5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0xd2) == local_40 * 0.5) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x694)) && !NAN(fVar2))) {
    bVar1 = *(float *)((long)param_3 + 0x694) == fVar2;
  }
  if (!bVar1) {
    param_3[0xd2] = CONCAT44(fVar2,local_40 * 0.5);
    FUN_1000200a0(param_3 + 0xca);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(param_3[0xca] + 0x28))(param_3 + 0xca,&local_38);
  (**(code **)(*param_3 + 0x100))(param_3);
  return;
}




void FUN_1002c7e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined8 param_13,undefined4 param_14)

{
  undefined1 auStack_80 [8];
  void *local_78;
  
  FUN_1004e3170(auStack_80);
  FUN_1002c7f2c(param_5,auStack_80,param_7);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e3170(auStack_80,param_8);
  FUN_1002c7f98(param_5,auStack_80,param_9);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e3170(auStack_80,param_10);
  FUN_1002c8004(param_5,auStack_80,param_11);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  *(undefined4 *)(param_5 + 0x38a0) = param_3;
  *(undefined4 *)(param_5 + 0x38a4) = param_4;
  *(undefined4 *)(param_5 + 0x38a8) = param_13._4_4_;
  *(undefined4 *)(param_5 + 0x38ac) = param_14;
  *(undefined4 *)(param_5 + 0x38b0) = param_12;
  *(undefined4 *)(param_5 + 0x38b4) = (undefined4)param_13;
  if (*(int *)(param_5 + 0x630) == 2) {
    *(undefined4 *)(param_5 + 0x3898) = param_1;
    *(undefined4 *)(param_5 + 0x389c) = param_2;
  }
  return;
}




void FUN_1002c7f2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_1006513c0(param_1 + 0x1dc0);
  FUN_100651460(param_1 + 0x1dc0,param_3);
  iVar1 = FUN_1004e3624(param_2);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x1e44) = *(uint *)(param_1 + 0x1e44) & 0xfffffffb | uVar2;
  return;
}




void FUN_1002c7f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_1006513c0(param_1 + 0x1ef0);
  FUN_100651460(param_1 + 0x1ef0,param_3);
  iVar1 = FUN_1004e3624(param_2);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x1f74) = *(uint *)(param_1 + 0x1f74) & 0xfffffffb | uVar2;
  return;
}




void FUN_1002c8004(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_1006513c0(param_1 + 0x2020);
  FUN_100651460(param_1 + 0x2020,param_3);
  iVar1 = FUN_1004e3624(param_2);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x20a4) = *(uint *)(param_1 + 0x20a4) & 0xfffffffb | uVar2;
  return;
}




void FUN_1002c8070(undefined8 param_1)

{
  FUN_1002c809c();
  FUN_1002c80c0(param_1);
  FUN_1002c8210(param_1);
  return;
}




void FUN_1002c809c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x630);
  if (iVar1 == 2) {
    FUN_1002c8834();
    return;
  }
  if ((iVar1 != 1) && (iVar1 != 0)) {
    return;
  }
  FUN_1002c857c();
  return;
}




void FUN_1002c80c0(undefined1 param_1 [16],ulong param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  
  if (*(uint *)(param_3 + 0x2548) != 0) {
    puVar7 = *(undefined8 **)(param_3 + 0x2550);
    puVar1 = puVar7 + *(uint *)(param_3 + 0x2548);
    do {
      fVar10 = (float)param_2;
      plVar6 = (long *)*puVar7;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x90))(plVar6);
        FUN_10064ff6c(0,plVar6,0);
        if (*(uint *)(param_3 + 0x2558) != 0) {
          plVar4 = *(long **)(param_3 + 0x2560);
          lVar5 = (ulong)*(uint *)(param_3 + 0x2558) << 3;
          do {
            if ((*plVar4 != 0) && (*(int *)(*plVar4 + 0x368) == 1)) {
              fVar14 = 158.0;
              goto LAB_1002c8154;
            }
            plVar4 = plVar4 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        fVar14 = 50.0;
LAB_1002c8154:
        fVar8 = (float)FUN_1002c8be0(param_3);
        lVar5 = plVar6[0x1b];
        fVar11 = (float)lVar5;
        uVar2 = (ulong)lVar5 >> 0x20;
        fVar9 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
        dVar12 = (double)CONCAT44(fVar14 + fVar10 * (float)uVar2,fVar8 * fVar11 + 50.0) -
                 (double)CONCAT44((float)lVar5 * (float)((ulong)plVar6[0x1c] >> 0x20),
                                  fVar9 * (float)plVar6[0x1c]);
        dVar13 = dVar12;
        fVar10 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
        fVar14 = SUB84(dVar12,0) + fVar10 * (float)plVar6[10];
        fVar8 = (float)((ulong)dVar12 >> 0x20) +
                SUB84(dVar13,0) * (float)((ulong)plVar6[10] >> 0x20);
        fVar10 = *(float *)((long)plVar6 + 0x44);
        param_2 = (ulong)(uint)fVar10;
        bVar3 = false;
        if ((*(float *)(plVar6 + 8) == fVar14) && (bVar3 = false, !NAN(fVar10) && !NAN(fVar8))) {
          bVar3 = fVar10 == fVar8;
        }
        if (!bVar3) {
          plVar6[8] = CONCAT44(fVar8,fVar14);
          FUN_1000200a0(plVar6);
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  return;
}




void FUN_1002c8210(undefined1 param_1 [16],float param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if (*(uint *)(param_3 + 0x4ab) != 0) {
    puVar3 = (undefined8 *)param_3[0x4ac];
    lVar4 = (ulong)*(uint *)(param_3 + 0x4ab) << 3;
    do {
      plVar2 = (long *)*puVar3;
      fVar6 = param_2;
      if (plVar2 != (long *)0x0) {
        iVar1 = (int)plVar2[0x6d];
        fVar6 = 108.0;
        if (iVar1 == 2) {
          (**(code **)(*param_3 + 0x48))(param_3);
          FUN_1001a6880(plVar2);
          fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
          *(float *)((long)plVar2 + 0x34c) = fVar5 * 0.5;
          *(undefined4 *)(plVar2 + 0x6a) = 0x41d80000;
          (**(code **)(*param_3 + 0x48))(param_3);
          param_2 = fVar6;
          (**(code **)(*plVar2 + 0x48))(plVar2);
          param_2 = fVar6 - param_2;
LAB_1002c8330:
          fVar6 = *(float *)((long)plVar2 + 0x44);
          if (fVar6 != param_2) {
            *(float *)((long)plVar2 + 0x44) = param_2;
LAB_1002c8340:
            FUN_1000200a0(plVar2);
          }
        }
        else if (iVar1 == 1) {
          (**(code **)(*param_3 + 0x48))(param_3);
          FUN_1001a6880(plVar2);
          fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
          *(float *)((long)plVar2 + 0x34c) = fVar5 * 0.5;
          *(undefined4 *)(plVar2 + 0x6a) = 0x41d80000;
          if (*(float *)((long)plVar2 + 0x44) != 0.0) {
            *(undefined4 *)((long)plVar2 + 0x44) = 0;
            goto LAB_1002c8340;
          }
        }
        else {
          fVar6 = param_2;
          if (iVar1 == 0) {
            fVar6 = *(float *)((long)plVar2 + 0x364);
            (**(code **)(*param_3 + 0x48))(param_3);
            param_2 = param_2 * fVar6;
            goto LAB_1002c8330;
          }
        }
        FUN_1001a5e74(plVar2);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -8;
      param_2 = fVar6;
    } while (lVar4 != 0);
  }
  return;
}




void FUN_1002c8374(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  
  lVar1 = param_1 + 0x23b0;
  FUN_100642324(lVar1);
  if (param_2 == 0) {
    uVar4 = FUN_100640840(0,0x3e4ccccd,FUN_10017e164);
    FUN_100642b14(lVar1,uVar4);
    lVar2 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    puVar3 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar3);
    *(undefined ***)puVar3 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  else {
    *(uint *)(param_1 + 0x2434) = *(uint *)(param_1 + 0x2434) | 4;
    puVar3 = (ushort *)FUN_100640840(0x3f800000,0x3e4ccccd,FUN_10017e164);
  }
  FUN_100642b14(lVar1,puVar3);
  return;
}




void FUN_1002c8478(undefined8 *param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1002c8478_101487100;
  puVar2 = (uint *)(param_1 + 0x19);
  plVar1 = (long *)param_1[0x1a];
  if (*puVar2 != 0) {
    lVar3 = (ulong)*puVar2 << 3;
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      *plVar1 = 0;
      lVar3 = lVar3 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar3 != 0);
    plVar1 = (long *)param_1[0x1a];
  }
  if (plVar1 != (long *)0x0) {
    *puVar2 = 0;
    operator_delete__(plVar1);
    puVar2[0] = 0;
    puVar2[1] = 0;
    param_1[0x1a] = 0;
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002c8478(void)

{
  FUN_1002c8478();
  return;
}




void FUN_1002c84fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002c8478();
  operator_delete(pvVar1);
  return;
}




void FUN_1002c8510(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x648) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002c8520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x648))();
    return;
  }
  return;
}




void FUN_1002c8528(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  if ((param_3 != 0) && (plVar1 = *(long **)(param_1 + 0x648), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x10))
              (plVar1,param_3 + 0x16a8,*(undefined1 *)(param_3 + 0x16d2),
               *(undefined1 *)(param_3 + 0x16d3));
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1002c857c(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_70 [16];
  
  iVar2 = (int)param_1[0x715];
  fVar7 = (float)(iVar2 + -1) * 0.0;
  if (iVar2 + -1 == 0 || iVar2 < 1) {
    fVar7 = 0.0;
  }
  fVar7 = (float)iVar2 * 302.0 + -100.0 + fVar7;
  lVar3 = param_1[0x716];
  fVar10 = (float)(int)lVar3;
  fVar6 = (float)FUN_10029bc64();
  fVar8 = fVar10 * 0.0;
  if ((int)lVar3 < 1) {
    fVar8 = 0.0;
  }
  fVar8 = fVar8 + fVar10 * fVar6;
  fVar6 = fVar8 + 50.0;
  fVar8 = fVar8 + 56.0;
  if (*(float *)(param_1 + 0x714) == 1.0) {
    uVar5 = 1;
  }
  else if (*(float *)(param_1 + 0x714) == 0.5) {
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x63c));
    fVar7 = (float)FUN_10029bc64();
    fVar7 = fVar7 * fVar6 + (float)(*(int *)((long)param_1 + 0x63c) - 1) * 0.0;
    fVar8 = 0.0;
    uVar5 = 3;
    fVar6 = 0.0;
  }
  else {
    uVar5 = 0;
  }
  fVar10 = (float)*(int *)((long)param_1 + 0x38ac);
  fVar9 = fVar10 * 0.0;
  if (*(int *)((long)param_1 + 0x38ac) < 1) {
    fVar9 = 0.0;
  }
  if (*(float *)((long)param_1 + 0x38a4) == 0.0) {
    fVar10 = (float)*(int *)((long)param_1 + 0x38b4);
    fVar9 = fVar10 * 0.0;
    if (*(int *)((long)param_1 + 0x38b4) < 1) {
      fVar9 = 0.0;
    }
    fVar10 = fVar10 * 151.0 + 34.0;
  }
  else {
    if (*(float *)((long)param_1 + 0x38a4) == 0.5) {
      (**(code **)(*param_1 + 0x48))(param_1);
      fVar10 = fVar10 * 0.5;
      goto LAB_1002c86e8;
    }
    fVar10 = fVar10 * 151.0 + -50.0;
  }
  fVar10 = fVar10 + fVar9;
LAB_1002c86e8:
  FUN_100655b6c(param_1 + 0x3d2);
  uVar4 = FUN_1004e3624();
  if ((uVar4 & 1) == 0) {
    plVar1 = param_1 + 0x3b8;
    if (*(float *)(param_1 + 0x3c0) != fVar6) {
      *(float *)(param_1 + 0x3c0) = fVar6;
      FUN_1000200a0(plVar1);
    }
    FUN_100651708(fVar7,plVar1,1);
    FUN_100651700(plVar1,uVar5);
  }
  plVar1 = param_1 + 0x3de;
  if (*(float *)(param_1 + 0x3e6) != fVar8) {
    *(float *)(param_1 + 0x3e6) = fVar8;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708(fVar7,plVar1,1);
  FUN_100651700(plVar1,uVar5);
  plVar1 = param_1 + 0x404;
  if (*(float *)(param_1 + 0x40c) != fVar6) {
    *(float *)(param_1 + 0x40c) = fVar6;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708(fVar7,plVar1,1);
  FUN_100651700(plVar1,uVar5);
  plVar1 = param_1 + 0x39f;
  FUN_10064fc74(0,*(undefined4 *)((long)param_1 + 0x38a4),0,auStack_70);
  FUN_100650064(plVar1,auStack_70);
  (**(code **)(param_1[0x39f] + 0x90))(plVar1);
  if (*(float *)((long)param_1 + 0x1d3c) != fVar10) {
    *(float *)((long)param_1 + 0x1d3c) = fVar10;
    FUN_1000200a0(plVar1);
  }
  return;
}




void FUN_1002c8834(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_80;
  float fStack_7c;
  float local_78 [2];
  
  fVar8 = (float)FUN_1002c8be0();
  if (*(uint *)(param_3 + 0x2558) != 0) {
    plVar6 = *(long **)(param_3 + 0x2560);
    lVar7 = (ulong)*(uint *)(param_3 + 0x2558) << 3;
    do {
      if ((*plVar6 != 0) && (*(int *)(*plVar6 + 0x368) == 1)) {
        fVar11 = 158.0;
        goto LAB_1002c88a4;
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  fVar11 = 50.0;
LAB_1002c88a4:
  fVar13 = *(float *)(param_3 + 0x38a0);
  fVar14 = *(float *)(param_3 + 0x38a4);
  local_78[1] = 0.0;
  iVar3 = *(int *)(param_3 + 0x38a8);
  fVar10 = 302.0;
  fVar12 = (float)(iVar3 + -1) * 0.0;
  if (iVar3 + -1 == 0 || iVar3 < 1) {
    fVar12 = 0.0;
  }
  fVar12 = (float)iVar3 * 302.0 + -100.0 + fVar12;
  fVar15 = 1.0;
  lVar7 = param_3 + 0x1ef0;
  local_78[0] = fVar13;
  if (fVar13 == 1.0) {
    FUN_100651700(lVar7,1);
    FUN_100651700(param_3 + 0x1dc0,1);
    uVar5 = 1;
  }
  else {
    fVar15 = 0.5;
    if (fVar13 != 0.5) {
      FUN_100651700(lVar7,0);
      FUN_100651700(param_3 + 0x1dc0,0);
      FUN_100651700(param_3 + 0x2020,0);
      local_78[0] = 0.0;
      fVar15 = 0.0;
      goto LAB_1002c896c;
    }
    FUN_100651700(lVar7,3);
    FUN_100651700(param_3 + 0x1dc0,3);
    uVar5 = 3;
  }
  FUN_100651700(param_3 + 0x2020,uVar5);
LAB_1002c896c:
  lVar7 = param_3 + 0x1dc0;
  FUN_100651708(fVar12,lVar7,1);
  FUN_100651038(lVar7,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  lVar1 = param_3 + 0x1ef0;
  FUN_100651708(fVar12,lVar1,1);
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  lVar2 = param_3 + 0x2020;
  FUN_100651708(fVar12,lVar2,1);
  fVar12 = (float)FUN_10064259c(lVar7);
  fVar9 = (float)FUN_10064259c(lVar1);
  FUN_10064259c(lVar2);
  if (fVar12 <= fVar9) {
    fVar12 = fVar9;
  }
  fVar15 = fVar12 * fVar15;
  fVar9 = 0.0;
  if ((*(byte *)(param_3 + 0x1e44) >> 2 & 1) != 0) {
    if ((*(float *)(param_3 + 0x1e00) != fVar15) || (*(float *)(param_3 + 0x1e04) != 0.0)) {
      *(float *)(param_3 + 0x1e00) = fVar15;
      *(undefined4 *)(param_3 + 0x1e04) = 0;
      FUN_1000200a0(lVar7);
    }
    (**(code **)(*(long *)(param_3 + 0x1dc0) + 0x28))(lVar7,local_78);
    *(uint *)(param_3 + 0x1e44) = *(uint *)(param_3 + 0x1e44) | 0x10;
    FUN_10064259c(lVar7);
    fVar9 = fVar10;
  }
  if ((*(byte *)(param_3 + 0x1f74) >> 2 & 1) != 0) {
    fVar10 = *(float *)(param_3 + 0x1f34);
    bVar4 = false;
    if ((*(float *)(param_3 + 0x1f30) == fVar15) && (bVar4 = false, !NAN(fVar10) && !NAN(fVar9))) {
      bVar4 = fVar10 == fVar9;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0x1f30) = fVar15;
      *(float *)(param_3 + 0x1f34) = fVar9;
      FUN_1000200a0(lVar1);
    }
    (**(code **)(*(long *)(param_3 + 0x1ef0) + 0x28))(lVar1,local_78);
    *(uint *)(param_3 + 0x1f74) = *(uint *)(param_3 + 0x1f74) | 0x10;
    FUN_10064259c(lVar1);
    fVar9 = fVar10 + fVar9;
  }
  if ((*(byte *)(param_3 + 0x20a4) >> 2 & 1) != 0) {
    fVar10 = *(float *)(param_3 + 0x2064);
    bVar4 = false;
    if ((*(float *)(param_3 + 0x2060) == fVar15) && (bVar4 = false, !NAN(fVar10) && !NAN(fVar9))) {
      bVar4 = fVar10 == fVar9;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0x2060) = fVar15;
      *(float *)(param_3 + 0x2064) = fVar9;
      FUN_1000200a0(lVar2);
    }
    (**(code **)(*(long *)(param_3 + 0x2020) + 0x28))(lVar2,local_78);
    *(uint *)(param_3 + 0x20a4) = *(uint *)(param_3 + 0x20a4) | 0x10;
    FUN_10064259c(lVar2);
    fVar9 = fVar10 + fVar9;
  }
  fVar8 = (*(float *)(param_3 + 0x3898) * fVar8 - fVar12 * fVar13) + 50.0;
  fVar11 = (*(float *)(param_3 + 0x389c) * param_2 - fVar9 * fVar14) + fVar11;
  bVar4 = false;
  if ((*(float *)(param_3 + 0x1d38) == fVar8) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0x1d3c)) && !NAN(fVar11))) {
    bVar4 = *(float *)(param_3 + 0x1d3c) == fVar11;
  }
  local_80 = fVar12;
  fStack_7c = fVar9;
  if (!bVar4) {
    *(float *)(param_3 + 0x1d38) = fVar8;
    *(float *)(param_3 + 0x1d3c) = fVar11;
    FUN_1000200a0(param_3 + 0x1cf8);
  }
  FUN_10064e48c(param_3 + 0x1cf8,&local_80);
  return;
}




float FUN_1002c8be0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  
  fVar5 = (float)(**(code **)(*param_1 + 0x48))();
  if (*(uint *)(param_1 + 0x4ab) != 0) {
    plVar1 = (long *)param_1[0x4ac];
    lVar2 = (ulong)*(uint *)(param_1 + 0x4ab) << 3;
    lVar3 = lVar2;
    plVar4 = plVar1;
    do {
      if ((*plVar4 != 0) && (*(int *)(*plVar4 + 0x368) == 1)) break;
      plVar4 = plVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    do {
      if ((*plVar1 != 0) && (*(int *)(*plVar1 + 0x368) == 2)) break;
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return fVar5 + -100.0;
}




void FUN_1002c8c9c(undefined8 param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*param_2 != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_1002c8cf8(param_1,*(long *)(param_2 + 2) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (uVar2 < *param_2);
  }
  return;
}




void FUN_1002c8cf8(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 local_69;
  long *local_68 [2];
  undefined8 *local_58;
  
  plVar1 = operator_new(0xf0);
  local_58 = (undefined8 *)FUN_10064fd0c();
  *local_58 = &PTR_thunk_FUN_1002c8478_101487100;
  puVar3 = local_58 + 0x19;
  *puVar3 = 0;
  local_58[0x1a] = 0;
  *(undefined4 *)(local_58 + 0x1d) = 0;
  *(undefined2 *)((long)local_58 + 0xec) = 0x101;
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  local_58[0x1c] = *(undefined8 *)(param_2 + 0x20);
  local_58[0x1b] = uVar7;
  FUN_100650140(local_58,*(byte *)(param_2 + 0x2c) ^ 1);
  fVar8 = 0.0;
  FUN_10064fc74(0,0,(float)*(int *)(param_2 + 0x28),local_68);
  FUN_100650064(plVar1,local_68);
  local_69 = 1;
  if (*(int *)(param_2 + 8) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    fVar8 = 0.0;
    do {
      local_68[0] = (long *)FUN_1002c90e0(param_1,*(long *)(param_2 + 0x10) + lVar4,&local_69);
      if (local_68[0] != (long *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1,local_68[0],1);
        FUN_10018e1d4(puVar3,local_68);
        fVar6 = (float)(**(code **)(*local_68[0] + 0x48))();
        if (fVar8 <= fVar6) {
          fVar8 = fVar6;
        }
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0xd0;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  *(undefined1 *)((long)plVar1 + 0xed) = local_69;
  if ((*(char *)((long)plVar1 + 0xec) == '\0') &&
     (uVar5 = (ulong)*(uint *)(plVar1 + 0x19), *(uint *)(plVar1 + 0x19) != 0)) {
    uVar2 = 0;
    do {
      lVar4 = *(long *)(plVar1[0x1a] + uVar2 * 8);
      if (lVar4 != 0) {
        FUN_100181c18(*(undefined4 *)(lVar4 + 0x1584),fVar8,fVar8);
        uVar5 = (ulong)*(uint *)(plVar1 + 0x19);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
  }
  FUN_100642bd8(param_1 + 0x24c0,plVar1,1);
  FUN_1002c9244(param_1 + 0x2548,&local_58);
  return;
}




void FUN_1002c8e9c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  float fVar5;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar1 = param_1 + 0x2568;
  FUN_1001b5e00((float)*(int *)(param_2 + 0x78),(float)*(int *)(param_2 + 0x7c),lVar1,
                (int)*(float *)(param_2 + 0x84),(int)*(float *)(param_2 + 0x88),
                (int)*(float *)(param_2 + 0x80),0);
  fVar5 = (float)*(int *)(param_2 + 0x74);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x25a8) == (float)*(int *)(param_2 + 0x70)) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x25ac)) && !NAN(fVar5))) {
    bVar4 = *(float *)(param_1 + 0x25ac) == fVar5;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x25a8) = (float)*(int *)(param_2 + 0x70);
    *(float *)(param_1 + 0x25ac) = fVar5;
    FUN_1000200a0(lVar1);
  }
  *(uint *)(param_1 + 0x25ec) = *(uint *)(param_1 + 0x25ec) | 4;
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (-1 < *(char *)(param_2 + 0x4f)) {
    puVar3 = (undefined8 *)(param_2 + 0x38);
  }
  plVar2 = (long *)*(long *)(param_2 + 0x50);
  if (-1 < *(char *)(param_2 + 0x67)) {
    plVar2 = (long *)(param_2 + 0x50);
  }
  FUN_1001b66dc(0x3fef684c,lVar1,puVar3,plVar2);
  FUN_1001b5d78(lVar1,param_2 + 0x68,param_2 + 0x6c,&DAT_10115a168);
  if (*(char *)(param_2 + 0x90) != '\0') {
    *(undefined1 *)(param_1 + 0x387c) = 1;
    puVar3 = *(undefined8 **)(param_2 + 0x20);
    if (-1 < *(char *)(param_2 + 0x37)) {
      puVar3 = (undefined8 *)(param_2 + 0x20);
    }
    FUN_1001b6758(lVar1,puVar3);
    FUN_1000f0a04(auStack_58,"%d / %d");
    FUN_1004e3120(auStack_68,auStack_58);
    FUN_1001b5dcc(lVar1,auStack_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002c902c(long param_1,int param_2)

{
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  FUN_100644c24();
  if (param_2 != 0) {
    local_38 = DAT_101dbd460;
    local_60 = FUN_1002c90cc;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(param_1 + 8,&local_60);
    local_38 = DAT_101dbd48c;
    local_60 = FUN_1002c90cc;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    lStack_58 = param_1;
    FUN_10001554c(param_1 + 8,&local_60);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
  }
  return;
}




void FUN_1002c90cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002c90dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,param_4,param_5);
  return;
}




undefined8 FUN_1002c90e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  
  uVar1 = param_2 + 0x18;
  uVar4 = FUN_1000e8120(uVar1);
  if ((int)uVar4 != 0) {
    uVar4 = FUN_1002c92c4(uVar4,param_2,param_3);
    return uVar4;
  }
  bVar7 = *(byte *)(param_2 + 0x2f);
  uVar5 = (ulong)bVar7;
  uVar6 = *(ulong *)(param_2 + 0x20);
  uVar2 = uVar6;
  if (-1 < (char)bVar7) {
    uVar2 = uVar5;
  }
  if (uVar2 == 3) {
    uVar4 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013dd69e);
    if ((int)uVar4 == 0) {
      uVar4 = FUN_1002c93b0(uVar4,param_2,param_3);
      return uVar4;
    }
    bVar7 = *(byte *)(param_2 + 0x2f);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 0x20);
  }
  uVar2 = uVar6;
  if (-1 < (char)bVar7) {
    uVar2 = uVar5;
  }
  if (uVar2 == 8) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ed5ac);
    if (iVar3 == 0) {
      uVar4 = FUN_1002c957c(param_1,param_2);
      return uVar4;
    }
    bVar7 = *(byte *)(param_2 + 0x2f);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 0x20);
  }
  if (-1 < (char)bVar7) {
    uVar6 = uVar5;
  }
  if (((uVar6 == 0xd) &&
      (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ed5b5), iVar3 == 0)) &&
     (iVar3 = FUN_10012cf04(), iVar3 != 0)) {
    uVar4 = FUN_1002c97b0(param_1,param_2);
    return uVar4;
  }
  return 0;
}




void FUN_1002c9244(uint *param_1,undefined8 *param_2)

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
    FUN_1002ca038(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




long * FUN_1002c92c4(undefined8 param_1,long param_2,byte *param_3)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  plVar2 = operator_new(0x24e8);
  thunk_FUN_1001b6da8(*(undefined4 *)(param_2 + 200),plVar2,param_2 + 0x30,
                      *(undefined1 *)(param_2 + 0xcc));
  if (*(int *)(param_2 + 8) != 0) {
    uVar3 = 0;
    lVar4 = 0x20;
    do {
      FUN_1001b7e90(plVar2,*(long *)(param_2 + 0x10) + lVar4 + -0x18);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (uVar3 < *(uint *)(param_2 + 8));
  }
  (**(code **)(*plVar2 + 0x170))(plVar2);
  FUN_1001b8274(plVar2,*(undefined4 *)(param_2 + 0xc4));
  FUN_100181c18(*(undefined4 *)((long)plVar2 + 0x1584),*(float *)(plVar2 + 0x2b1) + 20.0,
                *(undefined4 *)((long)plVar2 + 0x158c),plVar2);
  if (*(char *)((long)plVar2 + 0x24e6) == '\0') {
    bVar1 = (int)plVar2[0x48d] == 0;
  }
  else {
    bVar1 = true;
  }
  *param_3 = *param_3 & bVar1;
  return plVar2;
}




long * FUN_1002c93b0(undefined8 param_1,long param_2,byte *param_3)

{
  size_t sVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  undefined4 uVar13;
  void *local_80 [2];
  char local_69;
  undefined8 **local_68;
  size_t local_60;
  byte local_51;
  
  FUN_10003330c(&local_68,param_2 + 0x60);
  FUN_10003330c(local_80,param_2 + 0xa8);
  uVar9 = (ulong)local_51;
  if (-1 < (char)local_51) {
    local_60 = uVar9;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_60 == sVar1) {
    pppuVar2 = (undefined8 ***)local_68;
    if (-1 < (char)local_51) {
      pppuVar2 = &local_68;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)local_51 < '\0') {
      if ((local_60 == 0) || (iVar6 = _memcmp(pppuVar2,pbVar11,local_60), iVar6 == 0))
      goto LAB_1002c951c;
    }
    else {
      if (local_60 == 0) {
LAB_1002c951c:
        plVar7 = (long *)0x0;
        goto LAB_1002c953c;
      }
      if ((uint)*pbVar11 == ((uint)local_68 & 0xff)) {
        pbVar10 = (byte *)((ulong)&local_68 | 1);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_1002c951c;
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 == *pbVar11);
      }
    }
  }
  uVar4 = *(undefined1 *)(param_2 + 0xcc);
  uVar13 = *(undefined4 *)(param_2 + 200);
  plVar7 = operator_new(0x24e8);
  uVar8 = thunk_FUN_1001b6ee4(uVar13,plVar7,&local_68,local_80,uVar4);
  FUN_1001b8274(uVar8,*(undefined4 *)(param_2 + 0xc4));
  if (*(int *)(param_2 + 8) != 0) {
    uVar9 = 0;
    lVar12 = 0x20;
    do {
      FUN_1001b7e90(plVar7,*(long *)(param_2 + 0x10) + lVar12 + -0x18);
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x38;
    } while (uVar9 < *(uint *)(param_2 + 8));
  }
  (**(code **)(*plVar7 + 0x170))(plVar7);
  if (*(char *)((long)plVar7 + 0x24e6) == '\0') {
    bVar5 = (int)plVar7[0x48d] == 0;
  }
  else {
    bVar5 = true;
  }
  *param_3 = *param_3 & bVar5;
LAB_1002c953c:
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  return plVar7;
}




long * FUN_1002c957c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_90 [8];
  void *local_88;
  code *local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined4 local_58;
  
  iVar4 = FUN_100126c88();
  plVar5 = operator_new(0x16d8);
  thunk_FUN_1001a1f9c();
  uVar7 = 0x434c0000;
  if (iVar4 == 0) {
    uVar7 = 0x432e0000;
  }
  FUN_1004e3170(&local_80,&DAT_101d91198);
  FUN_1001816d4(0x41a00000,uVar7,0x43c80000,plVar5,0,&local_80,&DAT_10115a168,&DAT_101dc1cb8,0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_1004e3120(auStack_90,"");
  uVar3 = *(undefined2 *)(param_2 + 0xcd);
  FUN_10003330c(&local_80,param_2 + 0x78);
  thunk_FUN_1004e439c(&local_68,auStack_90);
  local_58 = CONCAT22(uVar3,0x100);
  FUN_1001a2020(plVar5,&local_80);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_70._7_1_ < '\0') {
    operator_delete(local_80);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  iVar4 = FUN_100126c88();
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar4 == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651038(plVar5 + 0xe3,*ppuVar1);
  local_80 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_80);
  FUN_100181bd0(0x3f800000,plVar5,&DAT_10115a164);
  FUN_1001b4964(plVar5,1);
  puVar8 = (undefined8 *)(param_2 + 0x90);
  puVar2 = (undefined8 *)*puVar8;
  if (-1 < *(char *)(param_2 + 0xa7)) {
    puVar2 = puVar8;
  }
  uVar6 = FUN_1004e0150(puVar2,0);
  thunk_FUN_1004e439c(auStack_90,uVar6);
  iVar4 = FUN_1004e3654(auStack_90,&DAT_101d91650);
  if (iVar4 != 0) {
    FUN_1004e3494(auStack_90,puVar8);
  }
  FUN_100181af8(plVar5,auStack_90);
  local_58 = DAT_101d91884;
  local_80 = FUN_1002c99cc;
  local_70 = 0;
  local_68 = 0;
  local_78 = (void *)param_1;
  local_60 = plVar5;
  FUN_10001554c(plVar5 + 1,&local_80);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return plVar5;
}




long * FUN_1002c97b0(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_80 [8];
  void *local_78;
  code *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined4 local_48;
  
  iVar3 = FUN_100126c88();
  plVar6 = operator_new(0x15e8);
  _bzero(plVar6,0x15e8);
  FUN_100181304(plVar6,0);
  *plVar6 = (long)&PTR_FUN_101487248;
  plVar6[0x2b8] = 0;
  plVar6[0x2b7] = 0;
  plVar6[0x2ba] = 0;
  plVar6[0x2b9] = 0;
  plVar6[700] = 0;
  plVar6[699] = 0;
  uVar4 = 0x434c0000;
  if (iVar3 == 0) {
    uVar4 = 0x432e0000;
  }
  FUN_1004e3170(&local_70,&DAT_101d91198);
  FUN_1001816d4(0x41a00000,uVar4,0x43c80000,plVar6,0,&local_70,&DAT_10115a168,&DAT_101dc1cb8,0);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1001bffdc(plVar6,param_2 + 0x30,param_2 + 0x48);
  iVar3 = FUN_100126c88();
  ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar3 == 0) {
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651038(plVar6 + 0xe3,*ppuVar1);
  local_70 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_70);
  FUN_100181bd0(0x3f800000,plVar6,&DAT_10115a164);
  FUN_1001b4964(plVar6,1);
  puVar8 = (undefined8 *)(param_2 + 0x90);
  puVar2 = (undefined8 *)*puVar8;
  if (-1 < *(char *)(param_2 + 0xa7)) {
    puVar2 = puVar8;
  }
  uVar7 = FUN_1004e0150(puVar2,0);
  thunk_FUN_1004e439c(auStack_80,uVar7);
  iVar3 = FUN_1004e3654(auStack_80,&DAT_101d91650);
  if (iVar3 != 0) {
    FUN_1004e3494(auStack_80,puVar8);
  }
  FUN_100181af8(plVar6,auStack_80);
  local_48 = DAT_101d91884;
  local_70 = FUN_1002c99d8;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  local_50 = plVar6;
  FUN_10001554c(plVar6 + 1,&local_70);
  uVar4 = FUN_1004d2524("rewarded_video");
  uVar5 = FUN_100015208("rewarded_video",uVar4,0x1234);
  *(uint *)((long)plVar6 + 0x84) =
       *(uint *)((long)plVar6 + 0x84) & 0x80000000 |
       *(uint *)((long)plVar6 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  return plVar6;
}




void FUN_1002c99cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002c8528(param_1,param_4,param_5);
  return;
}




void FUN_1002c99d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  
  if ((param_5 != 0) && (plVar1 = *(long **)(param_1 + 0x648), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_5 + 0x15d0,param_5 + 0x15b8);
  }
  FUN_100644b14(param_4);
  return;
}




void FUN_1002c9a20(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long local_48;
  
  uVar1 = FUN_1004d2524("rewarded_video");
  iVar2 = FUN_100015208("rewarded_video",uVar1,0x1234);
  uVar3 = *(uint *)(param_1 + 0x2548);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x2550) + uVar5 * 8);
      if (lVar6 != 0) {
        uVar4 = *(uint *)(lVar6 + 200);
        if (uVar4 != 0) {
          uVar7 = 0;
          do {
            local_48 = *(long *)(*(long *)(lVar6 + 0xd0) + uVar7 * 8);
            if ((uint)(iVar2 << 0x10 ^ *(int *)(local_48 + 0x84) << 1) >> 0x10 == 0) {
              FUN_1002c9ae8(param_2,&local_48);
              uVar4 = *(uint *)(lVar6 + 200);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
          uVar3 = *(uint *)(param_1 + 0x2548);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}




void FUN_1002c9ae8(uint *param_1,undefined8 *param_2)

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
    FUN_1002ca0b4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002c9b68(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_48;
  
  if (*param_2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    lVar1 = param_1 + 0x2438;
    lVar2 = param_1 + 0x2558;
    do {
      lVar3 = *(long *)(param_2 + 2) + lVar4;
      local_48 = FUN_1002c9c14(param_1,lVar3 + 8);
      *(undefined8 *)(local_48 + 0x34c) = *(undefined8 *)(lVar3 + 0x80);
      *(undefined8 *)(local_48 + 0x360) = *(undefined8 *)(lVar3 + 0x88);
      FUN_100642bd8(lVar1,local_48,1);
      param_1 = FUN_1002c9de0(lVar2,&local_48);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x90;
    } while (uVar5 < *param_2);
  }
  return;
}




void * FUN_1002c9c14(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  void *local_48;
  ulong local_40;
  byte local_31;
  
  pvVar5 = operator_new(0x370);
  thunk_FUN_1001a5c0c();
  FUN_10003330c(&local_48,param_2 + 0x20);
  if (-1 < (char)local_31) {
    local_40 = (ulong)local_31;
  }
  if ((local_40 != 8) ||
     (iVar4 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013dacf6),
     iVar4 != 0)) goto LAB_1002c9d78;
  uVar1 = param_2 + 0x50;
  bVar10 = *(byte *)(param_2 + 0x67);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x58);
  uVar2 = uVar9;
  if (-1 < (char)bVar10) {
    uVar2 = uVar8;
  }
  if (uVar2 == 9) {
    iVar4 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013dd15d);
    if (iVar4 != 0) {
      bVar10 = *(byte *)(param_2 + 0x67);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x58);
      goto LAB_1002c9cd0;
    }
LAB_1002c9ce8:
    lVar7 = *(long *)(param_2 + 0x70);
  }
  else {
LAB_1002c9cd0:
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 10) {
      iVar4 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ed5d2);
      if (iVar4 != 0) {
        bVar10 = *(byte *)(param_2 + 0x67);
        uVar8 = (ulong)bVar10;
        uVar9 = *(ulong *)(param_2 + 0x58);
        goto LAB_1002c9d1c;
      }
      lVar7 = FUN_10015d3ec();
      lVar7 = (long)*(int *)(lVar7 + 0x565c);
    }
    else {
      if (uVar2 == 0) goto LAB_1002c9ce8;
LAB_1002c9d1c:
      if (-1 < (char)bVar10) {
        uVar9 = uVar8;
      }
      if ((uVar9 != 0x12) ||
         (iVar4 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013ed5dd), iVar4 != 0))
      goto LAB_1002c9d78;
      lVar7 = FUN_10015d3ec();
      lVar7 = *(long *)(lVar7 + 0x55b0);
    }
    lVar7 = *(long *)(param_2 + 0x70) + lVar7;
  }
  FUN_1001a5e2c(pvVar5,lVar7);
LAB_1002c9d78:
  puVar3 = *(undefined8 **)(param_2 + 8);
  if (-1 < *(char *)(param_2 + 0x1f)) {
    puVar3 = (undefined8 *)(param_2 + 8);
  }
  uVar6 = FUN_1004e0150(puVar3,0);
  FUN_1001cd23c((long)pvVar5 + 0x100,uVar6,0,0);
  FUN_1001a6784(pvVar5,param_2 + 0x38);
  *(undefined4 *)((long)pvVar5 + 0x348) = *(undefined4 *)(param_2 + 0x68);
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  return pvVar5;
}




void FUN_1002c9de0(uint *param_1,undefined8 *param_2)

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
    FUN_1002ca130(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002c9e60(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long local_28;
  
  lVar1 = FUN_1002c9c14();
  local_28 = lVar1;
  FUN_100651700(lVar1 + 0x100,3);
  uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x63c));
  FUN_1001a6880(uVar2,0x42d80000,lVar1);
  *(undefined4 *)(lVar1 + 0x368) = 1;
  FUN_100642bd8(param_1 + 0x2438,lVar1,1);
  FUN_1002c9de0(param_1 + 0x2558,&local_28);
  return;
}




void FUN_1002c9ee0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long local_28;
  
  lVar1 = FUN_1002c9c14();
  local_28 = lVar1;
  FUN_100651700(lVar1 + 0x100,3);
  uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x63c));
  FUN_1001a6880(uVar2,0x42d80000,lVar1);
  *(undefined4 *)(lVar1 + 0x368) = 2;
  FUN_100642bd8(param_1 + 0x2438,lVar1,1);
  FUN_1002c9de0(param_1 + 0x2558,&local_28);
  return;
}




long FUN_1002c9f60(long param_1)

{
  return param_1 + 0x2558;
}




void FUN_1002c9f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101487248;
  if (*(char *)((long)param_1 + 0x15e7) < '\0') {
    operator_delete((void *)param_1[0x2ba]);
  }
  if (*(char *)((long)param_1 + 0x15cf) < '\0') {
    operator_delete((void *)param_1[0x2b7]);
  }
  FUN_10003bd40(param_1);
  return;
}




void FUN_1002c9fd0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101487248;
  if (*(char *)((long)param_1 + 0x15e7) < '\0') {
    operator_delete((void *)param_1[0x2ba]);
  }
  if (*(char *)((long)param_1 + 0x15cf) < '\0') {
    operator_delete((void *)param_1[0x2b7]);
  }
  pvVar1 = (void *)FUN_10003bd40(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002ca038(uint *param_1,uint param_2)

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




void FUN_1002ca0b4(uint *param_1,uint param_2)

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




void FUN_1002ca130(uint *param_1,uint param_2)

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




long FUN_1002ca1ac(long param_1)

{
  undefined8 *puVar1;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_10052fa40();
  puVar1[0x49] = 0;
  puVar1[0x48] = 0;
  *puVar1 = &PTR_thunk_FUN_1002ca92c_1014873e0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  FUN_10064e264(puVar1 + 0x4c);
  FUN_1006505b8(param_1 + 0x318);
  thunk_FUN_1006509c0(param_1 + 0x3f0);
  thunk_FUN_100652c08(param_1 + 0x630);
  FUN_1006505b8(param_1 + 0x720);
  thunk_FUN_1006421a8(param_1 + 0x7f8);
  thunk_FUN_100650e64(param_1 + 0x880);
  thunk_FUN_100650e64(param_1 + 0x9b0);
  thunk_FUN_100652c08(param_1 + 0xae0);
  thunk_FUN_100652c08(param_1 + 0xbd0);
  thunk_FUN_100650e64(param_1 + 0xcc0);
  FUN_10064e264(param_1 + 0xdf0);
  thunk_FUN_1002eca3c(param_1 + 0xea8,0);
  thunk_FUN_100655644(param_1 + 0x18f0);
  FUN_10064e264(param_1 + 0x1a48);
  FUN_1006505b8(param_1 + 0x1b00);
  *(undefined2 *)(param_1 + 0x1bd8) = 0;
  *(undefined1 *)(param_1 + 0x1bda) = 0;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  FUN_1002ca2e0(param_1);
  FUN_1002ca528(param_1);
  local_28 = DAT_101d91884;
  local_50 = FUN_1002ca920;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&local_50);
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ca2e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  plVar1 = param_1 + 0x4c;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 99;
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x7e,1);
  FUN_100650dc4(param_1 + 0x7e,param_1 + 0xc6,1);
  FUN_100642bd8(plVar1,param_1 + 0xe4,1);
  plVar3 = param_1 + 0xff;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0x110,1);
  FUN_100642bd8(plVar3,param_1 + 0x136,1);
  FUN_100642bd8(plVar1,param_1 + 0x15c,1);
  FUN_100642bd8(plVar1,param_1 + 0x198,1);
  FUN_100642bd8(plVar1,param_1 + 0x31e,1);
  FUN_100642bd8(plVar1,param_1 + 0x349,1);
  FUN_100642bd8(plVar1,param_1 + 0x360,1);
  FUN_100642bd8(plVar1,param_1 + 0x1be,1);
  plVar1 = param_1 + 0x1d5;
  FUN_100642bd8(param_1 + 0x1be,plVar1,1);
  *(uint *)((long)param_1 + 0x2e4) = *(uint *)((long)param_1 + 0x2e4) & 0xffffffbf;
  FUN_10064e4dc(param_1,_DAT_101e44e18);
  local_70 = (code *)CONCAT44(local_70._4_4_,0xff7b6561);
  FUN_100650608(plVar2,&local_70);
  FUN_100652cac(param_1 + 0x17a,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_shadow_half");
  *(byte *)(param_1 + 0x195) = *(byte *)(param_1 + 0x195) | 2;
  FUN_1002ecc7c(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar4 = FUN_1004e0150("PLAY_MENU_HOW_TO_PLAY_BUTTON",0);
  FUN_1002ecce4(plVar1,uVar4);
  local_48 = DAT_101d91884;
  local_70 = FUN_1002cb49c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x1d6,&local_70);
  *(uint *)((long)param_1 + 0x1b84) = *(uint *)((long)param_1 + 0x1b84) & 0xfffffffb;
  FUN_100650608(param_1 + 0x360,&DAT_10115a164);
  *(uint *)((long)param_1 + 0x7a4) = *(uint *)((long)param_1 + 0x7a4) & 0xfffffffb;
  FUN_100650608(param_1 + 0xe4,&DAT_10115a164);
  return;
}




void FUN_1002ca528(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_5c;
  undefined8 local_58;
  
  plVar1 = param_1 + 0x110;
  FUN_100651460(plVar1,&DAT_10115a168);
  FUN_10065165c(plVar1,1);
  local_58 = 0x4040000000000000;
  FUN_1006516c8(plVar1,&local_58);
  FUN_1006516bc(plVar1,&DAT_101158c80);
  local_5c = 0xffffffff;
  if (*(char *)((long)param_1 + 0x1bd9) == '\0') {
    local_5c = 0xffddcbc6;
    plVar2 = param_1 + 0x136;
    FUN_10065165c(plVar2,1);
    FUN_1006516bc(plVar2,&DAT_101158c80);
    local_58 = 0x4000000000000000;
    FUN_1006516c8(plVar2,&local_58);
  }
  else {
    FUN_10065165c(param_1 + 0x136,0);
  }
  iVar4 = *(int *)((long)param_1 + 0x25c);
  if (iVar4 == 2) {
    if (param_1[0x176] == 0) {
      FUN_100652cac(param_1 + 0x15c,DAT_101854a08,"shiny_checkbox_on");
      iVar4 = *(int *)((long)param_1 + 0x25c);
      uVar7 = *(uint *)((long)param_1 + 0xb64);
      if (iVar4 != 2) goto LAB_1002ca624;
    }
    else {
      uVar7 = *(uint *)((long)param_1 + 0xb64);
    }
    *(uint *)((long)param_1 + 0xb64) = uVar7 | 4;
    fVar11 = 1.0;
    fVar10 = 0.35;
  }
  else {
    uVar7 = *(uint *)((long)param_1 + 0xb64);
LAB_1002ca624:
    *(uint *)((long)param_1 + 0xb64) = uVar7 & 0xfffffffb;
    fVar10 = 0.2;
    if (iVar4 != 1) {
      fVar10 = 1.0;
    }
    fVar11 = 0.8;
    if (iVar4 != 1) {
      fVar11 = 1.0;
    }
  }
  if ((int)param_1[0x4b] == 2) {
    fVar11 = fVar11 * 0.2;
  }
  else if ((int)param_1[0x4b] == 1) {
    fVar10 = fVar10 * 0.15;
  }
  uVar8 = (uint)(255.0 - fVar10 * 255.0);
  uVar7 = *(uint *)((long)param_1 + 0x7a4);
  uVar9 = uVar7 >> 7 & 0xff;
  if (uVar9 != uVar8) {
    *(uint *)((long)param_1 + 0x7a4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | (uVar8 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0xe4);
    uVar7 = *(uint *)((long)param_1 + 0x7a4);
    uVar9 = uVar7 >> 7 & 0xff;
  }
  *(uint *)((long)param_1 + 0x7a4) =
       uVar7 & 0xfffffff8 | uVar7 & 3 | (uint)(0.0 < (float)uVar9 * 0.003921569) << 2;
  uVar8 = (uint)(255.0 - fVar11 * 255.0);
  uVar7 = *(uint *)((long)param_1 + 0x1b84);
  uVar9 = uVar7 >> 7 & 0xff;
  if (uVar9 != uVar8) {
    *(uint *)((long)param_1 + 0x1b84) = uVar7 & 0xffff8000 | uVar7 & 0x7f | (uVar8 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0x360);
    uVar7 = *(uint *)((long)param_1 + 0x1b84);
    uVar9 = uVar7 >> 7 & 0xff;
  }
  *(uint *)((long)param_1 + 0x1b84) =
       uVar7 & 0xfffffff8 | uVar7 & 3 | (uint)(0.0 < (float)uVar9 * 0.003921569) << 2;
  fVar11 = 1.0;
  fVar10 = 0.0;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    fVar10 = fVar11;
  }
  FUN_100652e14(fVar10,param_1 + 0xc6);
  uVar6 = 5;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    uVar6 = 2;
  }
  FUN_100652dfc(param_1 + 0xc6,uVar6);
  uVar7 = *(uint *)(param_1 + 0x4b);
  *(uint *)((long)param_1 + 0x87c) =
       *(uint *)((long)param_1 + 0x87c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x87c) & 3 | (uint)((long)(int)uVar7 != 1) << 2;
  if (uVar7 < 3) {
    fVar11 = *(float *)(&DAT_101158a68 + (long)(int)uVar7 * 4);
  }
  fVar10 = (float)NEON_fminnm(fVar11,0x3e99999a);
  if (*(int *)((long)param_1 + 0x25c) != 2) {
    fVar10 = fVar11;
  }
  uVar9 = (uint)(fVar10 * 255.0);
  uVar7 = *(uint *)((long)param_1 + 0x904);
  if (uVar9 != (uVar7 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x904) = uVar7 & 0xffff8000 | uVar7 & 0x7f | (uVar9 & 0xff) << 7;
    FUN_1000200a0(plVar1);
  }
  uVar7 = *(uint *)((long)param_1 + 0xa34);
  if (uVar9 != (uVar7 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0xa34) = uVar7 & 0xffff8000 | uVar7 & 0x7f | (uVar9 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0x136);
  }
  uVar7 = *(uint *)((long)param_1 + 0xd44);
  if (uVar9 != (uVar7 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0xd44) = uVar7 & 0xffff8000 | uVar7 & 0x7f | (uVar9 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0x198);
  }
  puVar3 = &DAT_101e44cb8;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    puVar3 = &DAT_10115a168;
  }
  FUN_100651460(plVar1,puVar3);
  puVar3 = &DAT_101e44cb8;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    puVar3 = &local_5c;
  }
  FUN_100651460(param_1 + 0x136,puVar3);
  puVar3 = &DAT_101e44cb8;
  if (*(int *)((long)param_1 + 0x25c) != 1) {
    puVar3 = &DAT_10115a168;
  }
  FUN_100651460(param_1 + 0x198,puVar3);
  if (*(int *)((long)param_1 + 0x25c) == 1) {
    uVar7 = 0;
  }
  else {
    uVar5 = FUN_100655b6c(param_1 + 0x150);
    iVar4 = FUN_1004e36c0(uVar5,&DAT_101d91650);
    uVar7 = 4;
    if (iVar4 == 0) {
      uVar7 = 0;
    }
  }
  *(uint *)((long)param_1 + 0xa34) = *(uint *)((long)param_1 + 0xa34) & 0xfffffffb | uVar7;
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002ca920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002cb444(param_1,param_4);
  return;
}




long thunk_FUN_1002ca1ac(long param_1)

{
  undefined8 *puVar1;
  code *pcStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = (undefined8 *)FUN_10052fa40();
  puVar1[0x49] = 0;
  puVar1[0x48] = 0;
  *puVar1 = &PTR_thunk_FUN_1002ca92c_1014873e0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  FUN_10064e264(puVar1 + 0x4c);
  FUN_1006505b8(param_1 + 0x318);
  thunk_FUN_1006509c0(param_1 + 0x3f0);
  thunk_FUN_100652c08(param_1 + 0x630);
  FUN_1006505b8(param_1 + 0x720);
  thunk_FUN_1006421a8(param_1 + 0x7f8);
  thunk_FUN_100650e64(param_1 + 0x880);
  thunk_FUN_100650e64(param_1 + 0x9b0);
  thunk_FUN_100652c08(param_1 + 0xae0);
  thunk_FUN_100652c08(param_1 + 0xbd0);
  thunk_FUN_100650e64(param_1 + 0xcc0);
  FUN_10064e264(param_1 + 0xdf0);
  thunk_FUN_1002eca3c(param_1 + 0xea8,0);
  thunk_FUN_100655644(param_1 + 0x18f0);
  FUN_10064e264(param_1 + 0x1a48);
  FUN_1006505b8(param_1 + 0x1b00);
  *(undefined2 *)(param_1 + 0x1bd8) = 0;
  *(undefined1 *)(param_1 + 0x1bda) = 0;
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  FUN_1002ca2e0(param_1);
  FUN_1002ca528(param_1);
  uStack_28 = DAT_101d91884;
  pcStack_50 = FUN_1002ca920;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&pcStack_50);
  return param_1;
}




void FUN_1002ca92c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002ca92c_1014873e0;
  if (param_1[0x4a] != 0) {
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  FUN_10064e2bc(param_1 + 0x360);
  thunk_FUN_10064e2bc(param_1 + 0x349);
  param_1[0x31e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x335);
  FUN_10064e2bc(param_1 + 0x31e);
  param_1[0x1d5] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x2f6);
  FUN_1002ebc50(param_1 + 0x1d5);
  thunk_FUN_10064e2bc(param_1 + 0x1be);
  thunk_FUN_100651068(param_1 + 0x198);
  param_1[0x17a] = &PTR_FUN_1014a7108;
  param_1[0x191] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x194);
  FUN_10064e2bc(param_1 + 0x17a);
  param_1[0x15c] = &PTR_FUN_1014a7108;
  param_1[0x173] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x176);
  FUN_10064e2bc(param_1 + 0x15c);
  thunk_FUN_100651068(param_1 + 0x136);
  thunk_FUN_100651068(param_1 + 0x110);
  FUN_10064230c(param_1 + 0xff);
  FUN_10064e2bc(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_1014a7108;
  param_1[0xdd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe0);
  FUN_10064e2bc(param_1 + 0xc6);
  param_1[0x7e] = &PTR_FUN_1014a6a80;
  FUN_10064230c(param_1 + 0xb2);
  FUN_10064e2bc(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 99);
  thunk_FUN_10064e2bc(param_1 + 0x4c);
  if ((void *)param_1[0x4a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4a]);
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
  }
  FUN_10052ffb4(param_1);
  return;
}




void thunk_FUN_1002ca92c(void)

{
  FUN_1002ca92c();
  return;
}




void FUN_1002caac0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ca92c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002caad4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 600) = param_2;
  FUN_1002ca528();
  return;
}




void FUN_1002caadc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x25c) = param_2;
  FUN_1002ca528();
  return;
}




void FUN_1002caae4(long *param_1)

{
  FUN_1006513c0(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x0001002cab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002cab14(long *param_1)

{
  FUN_1006513c0(param_1 + 0x136);
  FUN_1002ca528(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001002cab48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002cab4c(long *param_1,uint param_2,undefined8 param_3)

{
  if (param_1[0xe0] != 0) {
    FUN_100652d8c(param_1 + 0xc6);
  }
  if (param_2 < 4) {
    FUN_100652cac(param_1 + 0xc6,*(undefined8 *)(&PTR_PTR_101487680)[(int)param_2],param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002cabb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002cabbc(long *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)((long)param_1 + 0xe74) = *(uint *)((long)param_1 + 0xe74) & 0xfffffffb | uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001002cabe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002cabe4(long param_1,uint param_2)

{
  FUN_100530068(param_1 + 0xea8);
  FUN_100530048(param_1 + 0xea8,param_2 ^ 1);
  return;
}




void FUN_1002cac14(long param_1)

{
  FUN_1006513c0(param_1 + 0xcc0);
  return;
}




void FUN_1002cac1c(long *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37b) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001002cac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002cac30(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1bd9) = param_2;
  return;
}




void FUN_1002cac3c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1bda) = param_2;
  return;
}




undefined1 FUN_1002cac48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1bda);
}




void FUN_1002cac54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar1 = FUN_10002f320();
  FUN_100030cf0(uVar1,param_2);
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0x3f800000;
  local_22 = 1;
  local_48 = param_1 + 0x630;
  uStack_40 = 0;
  local_24 = 1;
  _local_54 = CONCAT44(0xc3a50000,(int)DAT_101dc1cb8);
  uVar1 = FUN_10002f320();
  FUN_100030c8c(uVar1,param_2,&local_60);
  return;
}




float FUN_1002cace8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_3 + 0x260;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x2a8) == 0.75) && (bVar2 = false, !NAN(*(float *)(param_3 + 0x2ac)))) {
    bVar2 = *(float *)(param_3 + 0x2ac) == 0.75;
  }
  if (!bVar2) {
    uVar5 = NEON_fmov(0x3f400000,4);
    *(undefined8 *)(param_3 + 0x2a8) = uVar5;
    FUN_1000200a0(lVar1);
  }
  if ((*(uint *)(param_3 + 0x2e4) & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x2e4) = *(uint *)(param_3 + 0x2e4) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  uVar5 = FUN_10064081c(param_1);
  uVar3 = FUN_10001f4d4();
  uVar4 = FUN_100640db8(0x3f800000,0x3f800000,param_2,FUN_10006bf9c);
  FUN_100640840(0x3f800000,param_2,FUN_10001f160);
  FUN_10063f2a4(uVar3,uVar4);
  FUN_100642b7c(lVar1,uVar5);
  *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xffffffef;
  uVar5 = FUN_10064081c(param_1);
  uVar3 = FUN_10006bf14();
  FUN_10063f0d8(uVar3,1);
  FUN_100642b7c(param_3,uVar5);
  return (float)param_2 + (float)param_1;
}




float FUN_1002cae14(float param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xffffffef;
  uVar1 = FUN_10064081c();
  uVar2 = FUN_10001f4d4();
  uVar3 = FUN_100640db8(0x3f400000,0x3f400000,param_2,FUN_1002caec8);
  FUN_100640840(0,param_2,FUN_10001f160);
  FUN_10063f2a4(uVar2,uVar3);
  FUN_100642b7c(param_3 + 0x260,uVar1);
  FUN_1002caef0(param_3);
  return (float)param_2 + param_1;
}




float FUN_1002caec8(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / param_4;
  return param_2 + (param_1 * 2.70158 + -1.70158) * param_1 * param_1 * param_3;
}




void FUN_1002caef0(long param_1)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  long *plVar5;
  long *plVar6;
  
  uVar3 = FUN_100640840(0,0x3e99999a,FUN_10001f160);
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
  *(code **)(puVar1 + 8) = FUN_1002cb1cc;
  *(long *)(puVar1 + 0x10) = param_1;
  FUN_100642324(param_1 + 0x18f0);
  FUN_100642b7c(param_1 + 0x18f0,uVar3);
  if (*(int *)(param_1 + 0x248) != 0) {
    plVar5 = *(long **)(param_1 + 0x250);
    do {
      plVar6 = plVar5 + 1;
      *(uint *)(*plVar5 + 0x1c4) = *(uint *)(*plVar5 + 0x1c4) & 0xffffffef;
      plVar5 = plVar6;
    } while (plVar6 != (long *)(*(long *)(param_1 + 0x250) + (ulong)*(uint *)(param_1 + 0x248) * 8))
    ;
  }
  return;
}




void FUN_1002cb00c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  
  FUN_100642324(param_1 + 0x18f0);
  if ((~*(uint *)(param_1 + 0x1974) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1974) = *(uint *)(param_1 + 0x1974) | 0x7f80;
    FUN_1000200a0(param_1 + 0x18f0);
  }
  if (*(int *)(param_1 + 0x248) != 0) {
    plVar5 = *(long **)(param_1 + 0x250);
    fVar7 = 0.0;
    do {
      lVar6 = *plVar5;
      lVar1 = lVar6 + 0xb8;
      if ((*(uint *)(lVar6 + 0x13c) & 0x7f80) != 0) {
        *(uint *)(lVar6 + 0x13c) = *(uint *)(lVar6 + 0x13c) & 0xffff807f;
        FUN_1000200a0(lVar1);
      }
      if ((*(float *)(lVar6 + 0x100) != 0.8) || (*(float *)(lVar6 + 0x104) != 0.8)) {
        *(undefined8 *)(lVar6 + 0x100) = 0x3f4ccccd3f4ccccd;
        FUN_1000200a0(lVar1);
      }
      uVar2 = FUN_10064081c(fVar7);
      uVar3 = FUN_10001f4d4();
      uVar4 = FUN_100640db8(0x3f800000,0x3f800000,0x3e99999a,FUN_10006bf9c);
      FUN_100640840(0x3f800000,0x3e99999a,FUN_10001f160);
      FUN_10063f2a4(uVar3,uVar4);
      FUN_100642b7c(lVar1,uVar2);
      *(uint *)(lVar6 + 0x1c4) = *(uint *)(lVar6 + 0x1c4) & 0xffffffef;
      uVar2 = FUN_10064081c(fVar7 + 0.3);
      FUN_10006bf14();
      FUN_100642b7c(lVar6 + 0x140,uVar2);
      fVar7 = fVar7 + 0.045;
      plVar5 = plVar5 + 1;
    } while (plVar5 != (long *)(*(long *)(param_1 + 0x250) + (ulong)*(uint *)(param_1 + 0x248) * 8))
    ;
  }
  return;
}




void FUN_1002cb1cc(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = thunk_FUN_1002cb204;
  local_20 = param_1;
  FUN_100643618(0xbf800000,&local_20,0,0);
  return;
}




void FUN_1002cb204(long param_1)

{
  FUN_1006559a0(param_1 + 0x18f0);
  FUN_1006424f4();
  if (*(long *)(param_1 + 0x250) != 0) {
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  return;
}




void FUN_1002cb23c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  pcVar2 = (code *)FUN_1002cbdb8(param_1 + 0x31e,1);
  pcVar1 = pcVar2 + 0x140;
  FUN_1002ecce4(pcVar1,param_2);
  FUN_1002ecc7c(pcVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  local_50 = param_3 & 0xffffffff;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002cb320;
  local_60 = 0;
  uStack_58 = 0;
  plStack_68 = param_1;
  FUN_10001554c(pcVar2 + 0x148,&local_70);
  *(uint *)(pcVar2 + 0x1c4) = *(uint *)(pcVar2 + 0x1c4) | 0x10;
  FUN_100530068(pcVar1,param_4);
  local_70 = pcVar2;
  FUN_1002cb368(param_1 + 0x49,&local_70);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002cb320(undefined8 param_1)

{
  undefined4 in_w4;
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d237f8,in_w4);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002cb368(uint *param_1,undefined8 *param_2)

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
    FUN_1002cbf68(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_1002cb3e8(undefined8 param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_ucvtf(DAT_101e44e1c);
  fVar2 = (float)NEON_ucvtf(DAT_101e44e18);
  return (int)((fVar1 * (float)param_2) / fVar2);
}




int FUN_1002cb410(undefined8 param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_ucvtf(DAT_101e44e18);
  fVar2 = (float)NEON_ucvtf(DAT_101e44e1c);
  return (int)((fVar1 * (float)param_2) / fVar2);
}




void FUN_1002cb438(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002cb440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_1002cb444(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [32];
  
  lVar1 = *(long *)(param_1 + 0x1a70);
  if (lVar1 != 0) {
    FUN_100644aec(auStack_40,DAT_101d23800,0);
    FUN_100644c34(lVar1,auStack_40,0);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1002cb49c(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d237fc,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002cb4e4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  
  plVar1 = param_3 + 0x4c;
  fVar10 = *(float *)(param_3 + 0x55);
  fVar11 = *(float *)((long)param_3 + 0x2ac);
  bVar5 = false;
  if ((fVar10 == 1.0) && (bVar5 = false, !NAN(fVar11))) {
    bVar5 = fVar11 == 1.0;
  }
  if (!bVar5) {
    lVar8 = NEON_fmov(0x3f800000,4);
    param_3[0x55] = lVar8;
    FUN_1000200a0(plVar1);
  }
  local_58 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar9 = local_58 + -96.0;
  fStack_54 = param_2;
  FUN_10064e48c(plVar1,&local_58);
  bVar5 = false;
  if ((*(float *)(param_3 + 0x56) == (float)DAT_101873a40) &&
     (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x2b4)) && !NAN(DAT_101873a40._4_4_))) {
    bVar5 = *(float *)((long)param_3 + 0x2b4) == DAT_101873a40._4_4_;
  }
  if (!bVar5) {
    param_3[0x56] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  FUN_1002cb808(0x3df5c28f,0x3c23d70a,param_3,&local_58);
  FUN_1002cb950(fVar9,param_3);
  FUN_1002cbb44(fVar9,param_3);
  FUN_1002cbc64(0x42400000,local_58,fStack_54,param_3);
  if ((*(byte *)((long)param_3 + 0xe74) >> 2 & 1) != 0) {
    plVar2 = param_3 + 0x1be;
    fVar9 = fStack_54 * 0.12;
    FUN_10064e47c(local_58,plVar2);
    local_60 = FUN_10064e3cc(plVar2);
    fStack_5c = fVar9;
    FUN_10064e48c(param_3 + 0x1d5,&local_60);
    FUN_10064e5ec(0,0,plVar2,6,plVar1,6);
  }
  uVar7 = FUN_100655b6c(param_3 + 0x1b2);
  iVar6 = FUN_1004e36c0(uVar7,&DAT_101d91650);
  if (iVar6 == 0) {
    *(uint *)((long)param_3 + 0xc54) = *(uint *)((long)param_3 + 0xc54) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xd44) = *(uint *)((long)param_3 + 0xd44) & 0xfffffffb;
  }
  else {
    plVar2 = param_3 + 0x198;
    *(uint *)((long)param_3 + 0xd44) = *(uint *)((long)param_3 + 0xd44) | 4;
    FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
    uVar4 = *(uint *)((long)param_3 + 0xd44);
    if ((uVar4 & 0x7f80) != 0x6c00) {
      *(uint *)((long)param_3 + 0xd44) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6c00;
      FUN_1000200a0(plVar2);
    }
    FUN_10065165c(plVar2,0);
    plVar3 = param_3 + 0x17a;
    uVar4 = *(uint *)((long)param_3 + 0xc54);
    *(uint *)((long)param_3 + 0xc54) = uVar4 | 4;
    if ((uVar4 & 0x7f80) != 0x3900) {
      *(uint *)((long)param_3 + 0xc54) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3904;
      FUN_1000200a0(plVar3);
    }
    fVar9 = (float)FUN_100651184(plVar2);
    FUN_10064e47c(fVar9 + 320.0,0x42340000,plVar3);
    FUN_10064e5ec(0,0,plVar3,4,param_3 + 0x7e,4);
    FUN_10064e72c(0xc0800000,plVar2,2,param_3 + 0x110,0);
    FUN_10064e72c(0,plVar2,4,param_3 + 0x110,4);
  }
  if ((*(byte *)((long)param_3 + 0xb64) >> 2 & 1) != 0) {
    FUN_10064e47c(0x43140000,0x43140000,param_3 + 0x15c);
    FUN_10064e784(0x3f000000,0x3f000000,0x3f000000,0x3f08f5c3,0xc0c00000,0,param_3 + 0x15c,plVar1);
  }
  if ((*(float *)(param_3 + 0x55) != fVar10) || (*(float *)((long)param_3 + 0x2ac) != fVar11)) {
    *(float *)(param_3 + 0x55) = fVar10;
    *(float *)((long)param_3 + 0x2ac) = fVar11;
    FUN_1000200a0(plVar1);
  }
  return;
}




void FUN_1002cb808(float param_1,float param_2,long param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = param_4[1];
  if ((*(uint *)(param_3 + 0xe74) & 4) != 0) {
    fVar3 = fVar3 - (param_2 + param_1) * fVar3;
  }
  lVar1 = param_3 + 0x318;
  FUN_10064e47c(*param_4,fVar3,lVar1);
  lVar2 = param_3 + 0x3f0;
  FUN_10064e47c(*param_4 + -10.0,fVar3 + -10.0,lVar2);
  FUN_100650da0(lVar2,2);
  FUN_100650db8(0x3f000000,0,lVar2);
  FUN_100650db0(lVar2,2);
  FUN_100654488(lVar2,1);
  FUN_100650a8c(lVar2);
  FUN_10064e5ec(0,0,lVar2,8,lVar1,8);
  FUN_10064e47c(*param_4,fVar3,param_3 + 0x720);
  FUN_10064e5ec(0,0,param_3 + 0x720,0,lVar1,0);
  FUN_10064e47c(*param_4,fVar3,param_3 + 0x1b00);
  FUN_10064e5ec(0,0,param_3 + 0x1b00,0,lVar1,0);
  FUN_10064e5ec(0,0,lVar1,0,param_3 + 0x260,0);
  return;
}




void FUN_1002cb950(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(&DAT_101158a48 + (ulong)(*(char *)(param_2 + 0x1bd8) == '\0') * 4);
  lVar2 = param_2 + 0x880;
  if (*(char *)(param_2 + 0x1bd9) == '\0') {
    FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Regular_12_10184e210);
    fVar4 = 0.0;
    FUN_10065179c(param_1,0,uVar5,lVar2);
    lVar1 = param_2 + 0x9b0;
    FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
    FUN_100651708(param_1,lVar1,1);
    FUN_100651700(lVar1,3);
    lVar1 = FUN_100655b94(param_2 + 0x950);
    fVar3 = *(float *)(lVar1 + 0x920);
    FUN_100651184(lVar2);
    fVar3 = 1.0 - ABS(fVar3) / fVar4;
    FUN_10064e784(0x3f000000,fVar3,0x3f000000,0x3f051eb8,0,0,lVar2,param_2 + 0x260);
    uVar5 = 0;
  }
  else {
    FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
    fVar4 = 0.0;
    FUN_10065179c(param_1,0,uVar5,lVar2);
    lVar1 = param_2 + 0x9b0;
    FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
    FUN_100651708(param_1,lVar1,1);
    FUN_100651700(lVar1,3);
    lVar1 = FUN_100655b94(param_2 + 0x950);
    fVar3 = *(float *)(lVar1 + 0x920);
    FUN_100651184(lVar2);
    FUN_10064e784(0x3f000000,1.0 - ABS(fVar3) / fVar4,0x3f000000,0x3f333333,0,0,lVar2,
                  param_2 + 0x260);
    fVar3 = 0.845;
    uVar5 = 0x3f000000;
    lVar2 = param_2 + 0x260;
  }
  FUN_10064e784(0x3f000000,uVar5,0x3f000000,fVar3,0,0x41c00000,param_2 + 0x9b0,lVar2);
  return;
}




void FUN_1002cbb44(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_2 + 0x248) != 0) {
    plVar3 = *(long **)(param_2 + 0x250);
    lVar1 = 0;
    do {
      lVar2 = *plVar3;
      FUN_10064e47c(param_1,0x43020000,lVar2);
      FUN_10064e47c(param_1,0x43020000,lVar2 + 0x140);
      FUN_10064e5ec(0,0,lVar2 + 0xb8,8,lVar2,8);
      FUN_10064e5ec(0,0,lVar2 + 0x140,8,lVar2 + 0xb8,8);
      if (lVar1 != 0) {
        FUN_10064e72c(0x42100000,lVar2,0,lVar1,2);
      }
      plVar3 = plVar3 + 1;
      lVar1 = lVar2;
    } while (plVar3 != (long *)(*(long *)(param_2 + 0x250) + (ulong)*(uint *)(param_2 + 0x248) * 8))
    ;
  }
  FUN_1006557ec(param_2 + 0x18f0);
  FUN_10064e5ec(0,0,param_2 + 0x18f0,8,param_2 + 0x630,8);
  return;
}




void FUN_1002cbc64(float param_1,undefined1 param_2 [16],long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined8 local_48;
  
  fVar3 = param_2._0_4_;
  if (*(char *)(param_3 + 0x1bd9) != '\0') {
    FUN_10064e3cc(param_3 + 0x318);
    plVar1 = (long *)(param_3 + 0x1a48);
    FUN_10064e47c(param_2._0_8_,fVar3 * 0.605,plVar1);
    if (*(long **)(param_3 + 0x1a70) != (long *)0x0) {
      (**(code **)(**(long **)(param_3 + 0x1a70) + 0x90))();
    }
    local_48 = 0x3f8000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_48);
    FUN_10064e5ec(0,0,plVar1,4,param_3 + 0x318,4);
    return;
  }
  FUN_10064eb7c(param_3 + 0x9b0,6,param_3 + 0x318,6);
  lVar2 = param_3 + 0x1a48;
  FUN_10064e47c(param_2._0_8_,(-20.0 - param_1) + fVar3,lVar2);
  if (*(long **)(param_3 + 0x1a70) != (long *)0x0) {
    (**(code **)(**(long **)(param_3 + 0x1a70) + 0x90))();
  }
  FUN_10064e72c(0x41a00000,lVar2,0,param_3 + 0x880,2);
  FUN_10064e72c(0,lVar2,4,param_3 + 0x880,4);
  return;
}




void * FUN_1002cbdb8(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xb88);
  lVar2 = FUN_1002cbe2c();
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




long * FUN_1002cbe2c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_101487548;
  puVar1 = puVar1 + 0x17;
  FUN_1006421a8(puVar1);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1002eca3c(param_1 + 0x28,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x28,1);
  return param_1;
}




void FUN_1002cbeb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101487548;
  param_1[0x28] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x149);
  FUN_1002ebc50(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002cbf0c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101487548;
  param_1[0x28] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x149);
  FUN_1002ebc50(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002cbf68(uint *param_1,uint param_2)

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




void thunk_FUN_1002cb204(void)

{
  FUN_1002cb204();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002cbfe8(void)

{
  DAT_101e44c90 = 0xff;
  DAT_101e44c92 = 0xffff;
  DAT_101e44c94 = 0xffff;
  DAT_101e44c98 = 0x4326000041900000;
  DAT_101e44ca0 = 0x4326000041c00000;
  DAT_101e44ca8 = 0xffbc9c44;
  DAT_101e44cac = 0xff1166f2;
  DAT_101e44cb0 = 0xffe0e0e0;
  DAT_101e44cb4 = 0xffa0a0a0;
  DAT_101e44cb8 = 0xff8c8c8c;
  DAT_101e44cbc = 0xff322213;
  DAT_101e44cc0 = 0xff091911;
  DAT_101e44cc4 = 0xff170c19;
  DAT_101e44cc8 = 0xff241a14;
  DAT_101e44ccc = 0xff14171c;
  DAT_101e44cd0 = 0xff221911;
  DAT_101e44cd4 = 0xff1a1416;
  DAT_101e44cd8 = 0xff121414;
  DAT_101e44cdc = 0xff1a1809;
  DAT_101e44ce0 = 0xff141414;
  DAT_101e44ce4 = 0xff141414;
  DAT_101e44ce8 = 0xff2929c0;
  DAT_101e44cec = 0xff283082;
  DAT_101e44cf0 = 0xff5262cc;
  DAT_101e44cf4 = 0xff283082;
  DAT_101e44cf8 = 0xff5262cc;
  DAT_101e44cfc = 0xff745c42;
  DAT_101e44d00 = 0xff184155;
  DAT_101e44d04 = 0xff92665e;
  DAT_101e44d08 = 0xffbc9c44;
  DAT_101e44d0c = 0xffbbae56;
  DAT_101e44d10 = 0xff8b7b01;
  DAT_101e44d14 = 0xff90b3ef;
  DAT_101e44d18 = 0xff728ebe;
  DAT_101e44d1c = 0xff19459d;
  DAT_101e44d20 = 0xff9d877b;
  DAT_101e44d24 = 0xffcbb1a3;
  DAT_101e44d28 = 0xff3f6fb5;
  DAT_101e44d2c = 0xffc5c5c5;
  DAT_101e44d30 = 0xff4fc1f1;
  DAT_101e44d34 = 0xff606060;
  DAT_101e44d38 = 0xffc5ff7b;
  DAT_101e44d3c = 0xff5271eb;
  DAT_101e44d40 = 0xfffae076;
  DAT_101e44d44 = 0xff3ac8f6;
  DAT_101e44d48 = 0xffaaaaaa;
  DAT_101e44d4c = 0xffe19400;
  DAT_101e44d50 = 0xffe19400;
  DAT_101e44d54 = 0xffe550b2;
  DAT_101e44d58 = 0xfff22ae8;
  DAT_101e44d5c = 0xff005ae1;
  DAT_101e44d60 = 0xff1addfa;
  DAT_101e44d64 = 0xff2424b3;
  DAT_101e44d68 = 0xff2424b3;
  DAT_101e44d6c = 0xff646464;
  DAT_101e44d70 = 0xff92665e;
  DAT_101e44d74 = 0xff646037;
  DAT_101e44d7c = 0xff1111a1;
  DAT_101e44d80 = 0xff321ee1;
  DAT_101e44d84 = 0xffc8c8c8;
  DAT_101e44d88 = 0xff321ee1;
  DAT_101e44d94 = 0xff6259b3;
  DAT_101e44d98 = 0xff506e73;
  DAT_101e44d9c = 0xff9dbf86;
  DAT_101e44d78 = 0xffffffff;
  DAT_101e44da0 = 0xffa35244;
  DAT_101e44d8c = 0xff7fe801;
  DAT_101e44da4 = 0xffca828e;
  DAT_101e44d90 = 0xffffffff;
  DAT_101e44da8 = 0xffa6a6a6;
  DAT_101e44dac = 0xffa6a6a6;
  DAT_101e44db0 = 0xffffffff;
  DAT_101e44db4 = 0xff88ea2f;
  DAT_101e44db8 = 0xff8c8c8c;
  DAT_101e44dbc = 0xffffb400;
  DAT_101e44dc0 = 0xffff00ff;
  DAT_101e44dc4 = 0xff00aded;
  DAT_101e44dc8 = 0xff33d3ff;
  DAT_101e44dcc = 0xff7fe801;
  DAT_101e44dd0 = 0xff282828;
  DAT_101e44dd4 = 0xfff0f0f0;
  DAT_101e44dd8 = 0xffa4781e;
  DAT_101e44ddc = 0xffa6654b;
  DAT_101e44de0 = 0xff93435b;
  DAT_101e44de4 = 0xff387f9c;
  DAT_101e44de8 = 0xffa3781e;
  DAT_101e44dec = 0xffffd18a;
  DAT_101e44df0 = 0xffff61f7;
  DAT_101e44df4 = 0xff5de1f2;
  DAT_101e44df8 = 0xff80eaff;
  DAT_101e44dfc = 0xff32e00e;
  DAT_101e44e00 = 0xff5a3c10;
  DAT_101e44e04 = 0xff330b03;
  DAT_101e44e08 = 0xff33031d;
  DAT_101e44e0c = 0xff032433;
  DAT_101e44e10 = 0xff9e8e8d;
  DAT_101d237f8 = FUN_100644a94("UI::EVENT_PLAY_MENU_TILE_VIEW_SELECT_SUB_OPTION");
  DAT_101d237fc = FUN_100644a94("UI::EVENT_PLAY_MENU_TILE_VIEW_SElECT_HOW_TO_PLAY");
  DAT_101d23800 = FUN_100644a94("UI::EVENT_PLAY_MENU_TILE_VIEW_MYSELF_SELECTED");
  _DAT_101e44e18 = 0x3c100000240;
  return;
}




code * FUN_1002cc718(code *param_1)

{
  undefined8 *puVar1;
  code *local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  *puVar1 = &PTR_thunk_FUN_1002cca00_1014876b0;
  thunk_FUN_1006421a8(puVar1 + 0x18);
  FUN_1005357f4(param_1 + 0x148);
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_1014877f8;
  FUN_10064e264(param_1 + 0xb70);
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  FUN_1005357f4(param_1 + 0xc40);
  *(undefined ***)(param_1 + 0xc40) = &PTR_FUN_1014877f8;
  FUN_10064e264(param_1 + 0x1668);
  *(undefined8 *)(param_1 + 0x1728) = 0;
  *(undefined8 *)(param_1 + 0x1720) = 0;
  *(code **)(param_1 + 0x1738) = param_1 + 0x148;
  *(code **)(param_1 + 0x1740) = param_1 + 0xc40;
  thunk_FUN_100652c08(param_1 + 0x1748);
  thunk_FUN_100652c08(param_1 + 0x1838);
  thunk_FUN_1001c0c34(param_1 + 0x1928,0);
  param_1[0x1ea0] = (code)0xff;
  FUN_1002cc840(param_1);
  pcStack_58 = thunk_FUN_1002cd2d4;
  local_60 = param_1;
  FUN_100643618(0,&local_60,0,1);
  local_38 = DAT_101d23804;
  local_60 = FUN_1002cc9f4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  pcStack_58 = param_1;
  FUN_10001554c(param_1 + 8,&local_60);
  return param_1;
}




void FUN_1002cc840(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 local_58 [2];
  
  plVar1 = param_1 + 0x18;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x29;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x188;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar1 = param_1 + 0x2e9;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar4 = param_1 + 0x307;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x325,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"tile_edge_shadow_vert");
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"tile_edge_shadow_vert");
  *(byte *)(param_1 + 0x304) = *(byte *)(param_1 + 0x304) | 1;
  *(uint *)((long)param_1 + 0x17cc) = *(uint *)((long)param_1 + 0x17cc) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x18bc) = *(uint *)((long)param_1 + 0x18bc) & 0xffffffbf;
  local_58[0] = 0xff503d2b;
  FUN_100652dd4(plVar1,local_58,2);
  local_58[0] = 0xff503d2b;
  FUN_100652dd4(plVar4,local_58,2);
  local_58[0]._0_1_ = 6;
  FUN_100534ebc(plVar2,local_58);
  local_58[0] = CONCAT31(local_58[0]._1_3_,6);
  FUN_100534ebc(plVar3,local_58);
  FUN_100534ad8(plVar2,param_1 + 0x16e,1);
  FUN_100534ad8(plVar3,param_1 + 0x2cd,1);
  *(uint *)((long)param_1 + 0x19ac) = *(uint *)((long)param_1 + 0x19ac) & 0xfffffffb;
  return;
}




void FUN_1002cc9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002cd908(param_1,param_4);
  return;
}




code * thunk_FUN_1002cc718(code *param_1)

{
  undefined8 *puVar1;
  code *pcStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  puVar1[0x17] = 0;
  *puVar1 = &PTR_thunk_FUN_1002cca00_1014876b0;
  thunk_FUN_1006421a8(puVar1 + 0x18);
  FUN_1005357f4(param_1 + 0x148);
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_1014877f8;
  FUN_10064e264(param_1 + 0xb70);
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  FUN_1005357f4(param_1 + 0xc40);
  *(undefined ***)(param_1 + 0xc40) = &PTR_FUN_1014877f8;
  FUN_10064e264(param_1 + 0x1668);
  *(undefined8 *)(param_1 + 0x1728) = 0;
  *(undefined8 *)(param_1 + 0x1720) = 0;
  *(code **)(param_1 + 0x1738) = param_1 + 0x148;
  *(code **)(param_1 + 0x1740) = param_1 + 0xc40;
  thunk_FUN_100652c08(param_1 + 0x1748);
  thunk_FUN_100652c08(param_1 + 0x1838);
  thunk_FUN_1001c0c34(param_1 + 0x1928,0);
  param_1[0x1ea0] = (code)0xff;
  FUN_1002cc840(param_1);
  pcStack_58 = thunk_FUN_1002cd2d4;
  pcStack_60 = param_1;
  FUN_100643618(0,&pcStack_60,0,1);
  uStack_38 = DAT_101d23804;
  pcStack_60 = FUN_1002cc9f4;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  pcStack_58 = param_1;
  FUN_10001554c(param_1 + 8,&pcStack_60);
  return param_1;
}




void FUN_1002cca00(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_60;
  code *pcStack_58;
  
  *param_1 = &PTR_thunk_FUN_1002cca00_1014876b0;
  pcStack_58 = thunk_FUN_1002cd0f4;
  local_60 = param_1;
  FUN_100643a8c(&local_60);
  pcStack_58 = thunk_FUN_1002cd2d4;
  local_60 = param_1;
  FUN_100643a8c(&local_60);
  lVar1 = 0;
  param_1[0x325] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x1da0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1e58) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1e70);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x1da0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x325);
  param_1[0x307] = &PTR_FUN_1014a7108;
  param_1[0x31e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x321);
  FUN_10064e2bc(param_1 + 0x307);
  param_1[0x2e9] = &PTR_FUN_1014a7108;
  param_1[0x300] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x303);
  FUN_10064e2bc(param_1 + 0x2e9);
  param_1[0x188] = &PTR_FUN_1014877f8;
  if ((void *)param_1[0x2e5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2e5]);
    param_1[0x2e5] = 0;
    param_1[0x2e4] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x2cd);
  thunk_FUN_100534a3c(param_1 + 0x188);
  param_1[0x29] = &PTR_FUN_1014877f8;
  if ((void *)param_1[0x186] != (void *)0x0) {
    operator_delete__((void *)param_1[0x186]);
    param_1[0x186] = 0;
    param_1[0x185] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x16e);
  thunk_FUN_100534a3c(param_1 + 0x29);
  FUN_10064230c(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002ccb94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014877f8;
  if ((void *)param_1[0x15d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15d]);
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x145);
  thunk_FUN_100534a3c(param_1);
  return;
}




void thunk_FUN_1002cca00(void)

{
  FUN_1002cca00();
  return;
}




void FUN_1002ccbe0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002cca00();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ccbf4(long *param_1,code *param_2,ulong param_3)

{
  code *pcVar1;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_38;
  
  param_3 = param_3 & 0xffffffff;
  local_38 = DAT_101d91884;
  local_60 = FUN_1002ccd0c;
  local_50 = 0;
  uStack_48 = 0;
  pcVar1 = param_2 + 8;
  plStack_58 = param_1;
  local_40 = param_3;
  FUN_10001554c(pcVar1,&local_60);
  local_38 = DAT_101d237f8;
  local_60 = FUN_1002ccd40;
  local_50 = 0;
  uStack_48 = 0;
  plStack_58 = param_1;
  local_40 = param_3;
  FUN_10001554c(pcVar1,&local_60);
  local_38 = DAT_101d237fc;
  local_60 = FUN_1002ccd74;
  local_50 = 0;
  uStack_48 = 0;
  plStack_58 = param_1;
  local_40 = param_3;
  FUN_10001554c(pcVar1,&local_60);
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x10;
  FUN_100530048(param_2,1);
  FUN_100642bd8(param_1[0x2e7] + 0xa28,param_2,1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  local_60 = param_2;
  FUN_1002ccd88(param_1[0x2e7] + 0xae0,&local_60);
  return;
}




void FUN_1002ccd0c(long param_1)

{
  undefined8 in_x4;
  
  if (*(byte *)(param_1 + 0x1ea0) == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x0001002ccd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),in_x4);
    return;
  }
  if ((uint)*(byte *)(param_1 + 0x1ea0) == (uint)in_x4) {
    return;
  }
  FUN_1002cd824();
  return;
}




void FUN_1002ccd40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001002ccd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),uVar1);
  return;
}




void FUN_1002ccd74(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001002ccd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))(*(long **)(param_1 + 0xb8),in_x4);
  return;
}




void FUN_1002ccd88(uint *param_1,undefined8 *param_2)

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
    FUN_1002cda08(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002cce08(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  (**(code **)(**(long **)(param_2 + 0x1738) + 0x140))();
  FUN_100534e3c(*(undefined8 *)(param_2 + 0x1738),&DAT_101dc1cb8);
  if (*(int *)(*(long *)(param_2 + 0x1738) + 0xae0) != 0) {
    puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x1738) + 0xae8);
    do {
      puVar2 = puVar1 + 1;
      FUN_1002cace8(param_1,0x3e4ccccd,*puVar1);
      param_1 = (ulong)(uint)((float)param_1 + 0.0666);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(*(long *)(param_2 + 0x1738) + 0xae8) +
                       (ulong)*(uint *)(*(long *)(param_2 + 0x1738) + 0xae0) * 8));
  }
  return;
}




void FUN_1002ccea4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(*(long *)(param_1 + 0x1740) + 0xae0) != 0) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x1740) + 0xae8);
    do {
      puVar5 = puVar3 + 1;
      fVar6 = (float)FUN_1002cae14(fVar7,0x3e4ccccd,*puVar3);
      if (fVar8 <= fVar6) {
        fVar8 = fVar6;
      }
      fVar7 = fVar7 + 0.0666;
      puVar3 = puVar5;
    } while (puVar5 != (undefined8 *)
                       (*(long *)(*(long *)(param_1 + 0x1740) + 0xae8) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x1740) + 0xae0) * 8));
    uVar2 = FUN_10064081c(fVar8);
    lVar1 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar4 * 0x40);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar3 = (undefined8 *)FUN_10063ee9c();
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_thunk_FUN_10063eeb4_10144bff8;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    puVar3[2] = FUN_1002ccfd0;
    FUN_100642b7c(param_1,uVar2);
  }
  return;
}




void FUN_1002ccfd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = thunk_FUN_1002cd0f4;
  local_20 = param_2;
  FUN_100643618(0xbf800000,&local_20,0,0);
  return;
}




void FUN_1002cd008(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x148;
  FUN_1006423ec(lVar1,1);
  lVar2 = param_1 + 0xc40;
  FUN_1006423ec(lVar2,1);
  FUN_1002cd0f4(param_1);
  uVar3 = (ulong)*(byte *)(param_1 + 0x1ea0);
  if (uVar3 != 0xff) {
    FUN_1002cb204(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + uVar3 * 8));
    *(byte *)(param_1 + 0x1ea0) = 0xff;
  }
  if (*(long *)(param_1 + 0x1738) == lVar1) {
    *(long *)(param_1 + 0x1738) = lVar2;
    *(long *)(param_1 + 0x1740) = lVar1;
    FUN_100642bd8(param_1 + 0xc0,lVar1,1);
  }
  else {
    if (*(long *)(param_1 + 0x1738) != lVar2) {
      return;
    }
    *(long *)(param_1 + 0x1738) = lVar1;
    *(long *)(param_1 + 0x1740) = lVar2;
    FUN_100642bd8(param_1 + 0xc0,lVar2,1);
    lVar2 = lVar1;
  }
  FUN_100642bd8(param_1 + 0xc0,lVar2,1);
  return;
}




void FUN_1002cd0f4(long param_1)

{
  long *plVar1;
  
  FUN_1002cd950(param_1,*(long *)(param_1 + 0x1740) + 0xae0);
  plVar1 = (long *)FUN_10064e5a0(*(long *)(param_1 + 0x1740) + 0xa28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002cd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))();
    return;
  }
  return;
}




void FUN_1002cd140(long param_1,uint param_2)

{
  FUN_1002cb204(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)param_2 * 8)
               );
  return;
}




void FUN_1002cd150(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_1002caad4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)param_2 * 8)
                ,1);
  FUN_1002cb00c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)param_2 * 8)
               );
  *(char *)(param_1 + 0x1ea0) = (char)param_2;
  lVar1 = *(long *)(param_1 + 0x1738);
  if (*(int *)(lVar1 + 0xae0) != 0) {
    plVar3 = *(long **)(lVar1 + 0xae8);
    plVar4 = plVar3;
    plVar5 = plVar3;
    do {
      lVar2 = *plVar5;
      if ((uint)((ulong)((long)plVar4 - (long)plVar3) >> 3) != param_2 && lVar2 != 0) {
        FUN_1002caad4(lVar2,2);
        FUN_1002cabe4(lVar2,0);
        lVar1 = *(long *)(param_1 + 0x1738);
      }
      plVar5 = plVar5 + 1;
      plVar3 = *(long **)(lVar1 + 0xae8);
      plVar4 = plVar4 + 1;
    } while (plVar5 != plVar3 + *(uint *)(lVar1 + 0xae0));
  }
  return;
}




void FUN_1002cd214(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002cb23c(*(undefined8 *)
                 (*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (param_3 & 0xffffffff) * 8),
                param_2,param_4,param_5);
  return;
}




void FUN_1002cd22c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002cd234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002cd238(long param_1)

{
  FUN_10064e3cc(*(long *)(param_1 + 0x1738) + 0xa28);
  return;
}




void FUN_1002cd244(long param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  
  uVar1 = 5;
  if (param_2 != 0) {
    uVar1 = 6;
  }
  local_28[0] = uVar1;
  FUN_100534ebc(param_1 + 0x148,local_28);
  local_30[0] = uVar1;
  FUN_100534ebc(param_1 + 0xc40,local_30);
  return;
}




bool FUN_1002cd294(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x1738);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0xae0) != 0)) {
    lVar3 = (ulong)*(uint *)(lVar1 + 0xae0) * 8;
    plVar2 = *(long **)(lVar1 + 0xae8);
    do {
      lVar3 = lVar3 + -8;
      lVar1 = *plVar2;
      plVar2 = plVar2 + 1;
    } while (lVar1 != param_2 && lVar3 != 0);
    return lVar1 == param_2;
  }
  return false;
}




void FUN_1002cd2d4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x148))();
  if (((uVar2 & 1) == 0) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x150))(), iVar1 == 0)) {
    return;
  }
  FUN_1002cd328(param_1);
  return;
}




void FUN_1002cd328(long *param_1)

{
  long *plVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float local_50 [2];
  float local_48 [2];
  float local_40 [2];
  float local_38 [2];
  
  (**(code **)(*(long *)param_1[0x2e7] + 0x68))((long *)param_1[0x2e7],local_38,local_40);
  FUN_1006428bc(param_1[0x2e7] + 0xa28,local_48,local_50);
  fVar3 = local_38[0] - local_48[0];
  if (local_38[0] - local_48[0] <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = local_50[0] - local_40[0];
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar3 <= 0.0) {
    *(uint *)((long)param_1 + 0x17cc) = *(uint *)((long)param_1 + 0x17cc) & 0xfffffffb;
  }
  else {
    fVar3 = (float)NEON_fminnm(fVar3 * 1.1,0x43960000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    plVar1 = param_1 + 0x2e9;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_10064e47c(fVar3,plVar1);
    uVar2 = *(uint *)((long)param_1 + 0x17cc);
    if ((int)(fVar3 * 0.85) != (uVar2 >> 7 & 0xff)) {
      *(uint *)((long)param_1 + 0x17cc) =
           uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar3 * 0.85) & 0xffU) << 7;
      FUN_1000200a0(plVar1);
      uVar2 = *(uint *)((long)param_1 + 0x17cc);
    }
    *(uint *)((long)param_1 + 0x17cc) = uVar2 | 4;
    FUN_10064e72c(0,plVar1,3,param_1,3);
  }
  if (fVar4 <= 0.0) {
    *(uint *)((long)param_1 + 0x18bc) = *(uint *)((long)param_1 + 0x18bc) & 0xfffffffb;
  }
  else {
    fVar3 = (float)NEON_fminnm(fVar4 * 1.1,0x43960000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    plVar1 = param_1 + 0x307;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_10064e47c(fVar3,plVar1);
    uVar2 = *(uint *)((long)param_1 + 0x18bc);
    if ((int)(fVar3 * 0.85) != (uVar2 >> 7 & 0xff)) {
      *(uint *)((long)param_1 + 0x18bc) =
           uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar3 * 0.85) & 0xffU) << 7;
      FUN_1000200a0(plVar1);
      uVar2 = *(uint *)((long)param_1 + 0x18bc);
    }
    *(uint *)((long)param_1 + 0x18bc) = uVar2 | 4;
    FUN_10064e72c(0,plVar1,1,param_1,1);
  }
  return;
}




void FUN_1002cd500(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_38 = (**(code **)(*param_3 + 0x48))();
  uStack_34 = param_2;
  FUN_10064e48c(param_3 + 0x29,&local_38);
  local_38 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_34 = param_2;
  uVar2 = FUN_10064e48c(param_3 + 0x188,&local_38);
  uVar2 = FUN_1002cd5d4(uVar2,param_3 + 0x29);
  FUN_1002cd5d4(uVar2,param_3 + 0x188);
  FUN_1002cd328(param_3);
  bVar1 = false;
  if ((*(float *)(param_3 + 0x32e) == 3.0) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x1974)))) {
    bVar1 = *(float *)((long)param_3 + 0x1974) == 3.0;
  }
  if (!bVar1) {
    lVar3 = NEON_fmov(0x40400000,4);
    param_3[0x32e] = lVar3;
    FUN_1000200a0(param_3 + 0x325);
  }
  FUN_10064e5ec(0,0,param_3 + 0x325,8,param_3,8);
  return;
}




void FUN_1002cd5d4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float local_78;
  float fStack_74;
  
  fVar12 = (float)param_2;
  if ((int)param_4[0x15c] != 0) {
    uVar9 = 0;
    puVar10 = (undefined8 *)param_4[0x15d];
    do {
      plVar6 = (long *)*puVar10;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*param_4 + 0x48))(param_4);
        iVar7 = (int)((float)param_2 + -96.0);
        iVar2 = (**(code **)(*plVar6 + 0x150))(plVar6,iVar7,0);
        if (-1 < iVar2) {
          iVar3 = FUN_1002cac48(plVar6);
          iVar1 = (int)((float)(iVar7 - 0x28) * 0.5);
          if (iVar3 == 0) {
            iVar1 = iVar7;
          }
          FUN_10064e4a0(plVar6,CONCAT44(iVar1,iVar2));
          iVar2 = FUN_1002cac48(plVar6);
          uVar11 = 1;
          if (iVar2 == 0) {
            uVar11 = 2;
          }
          if (puVar10 == (undefined8 *)param_4[0x15d]) {
            param_2 = 0x42400000;
            FUN_10064e68c(plVar6,0);
            uVar9 = uVar11;
          }
          else {
            uVar8 = puVar10[-1];
            if (2 - uVar9 < uVar11) {
              FUN_10064e72c(0x42200000,plVar6,3,uVar8,1);
              FUN_10064e72c(0,plVar6,0,*(undefined8 *)param_4[0x15d],0);
              uVar9 = uVar11;
            }
            else {
              FUN_10064e72c(0x42200000,plVar6,0,uVar8,2);
              FUN_10064e72c(0,plVar6,3,uVar8,3);
              uVar9 = uVar11 + uVar9;
            }
          }
        }
      }
      fVar12 = (float)param_2;
      puVar10 = puVar10 + 1;
    } while (puVar10 != (undefined8 *)(param_4[0x15d] + (ulong)*(uint *)(param_4 + 0x15c) * 8));
  }
  plVar6 = param_4 + 0x145;
  local_78 = (float)FUN_1006425d0(plVar6,0,0,0,0);
  local_78 = local_78 + 96.0;
  fStack_74 = fVar12 + 96.0;
  FUN_10064e48c(plVar6,&local_78);
  fVar12 = (float)FUN_10064e3cc(plVar6);
  fVar13 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  uVar8 = FUN_100534eb4(param_4);
  if (fVar12 <= fVar13) {
    uVar4 = 4;
    uVar5 = 4;
  }
  else {
    uVar4 = 3;
    uVar5 = 3;
  }
  FUN_10064e72c(0,plVar6,uVar4,uVar8,uVar5);
  FUN_100534aec(param_4);
  return;
}




void FUN_1002cd824(long param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  pbVar1 = (byte *)(param_1 + 0x1ea0);
  FUN_1002caad4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)*pbVar1 * 8)
                ,0);
  FUN_1002caef0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)*pbVar1 * 8)
               );
  lVar2 = *(long *)(param_1 + 0x1738);
  if (*(int *)(lVar2 + 0xae0) != 0) {
    plVar4 = *(long **)(lVar2 + 0xae8);
    plVar5 = plVar4;
    plVar6 = plVar4;
    do {
      lVar3 = *plVar6;
      if ((uint)((ulong)((long)plVar5 - (long)plVar4) >> 3) != (uint)*pbVar1 && lVar3 != 0) {
        FUN_1002caad4(lVar3,0);
        FUN_1002cabe4(lVar3,1);
        lVar2 = *(long *)(param_1 + 0x1738);
      }
      plVar6 = plVar6 + 1;
      plVar4 = *(long **)(lVar2 + 0xae8);
      plVar5 = plVar5 + 1;
    } while (plVar6 != plVar4 + *(uint *)(lVar2 + 0xae0));
  }
  *pbVar1 = 0xff;
  return;
}




void FUN_1002cd908(long param_1,undefined8 param_2)

{
  FUN_1002cd008();
  FUN_1002ccea4(param_1);
  FUN_1001c0e10(param_1 + 0x1928);
  *(uint *)(param_1 + 0x19ac) = *(uint *)(param_1 + 0x19ac) | 4;
  FUN_100644b14(param_2);
  return;
}




void FUN_1002cd950(undefined8 param_1,uint *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 2);
  puVar3 = puVar2;
  if (*param_2 != 0) {
    do {
      iVar1 = FUN_100642d08(*puVar3);
      if (iVar1 != 0) {
        FUN_1006423ec(*puVar3,1);
      }
      puVar3 = puVar3 + 1;
      puVar2 = *(undefined8 **)(param_2 + 2);
    } while (puVar3 != puVar2 + *param_2);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return;
}




void FUN_1002cd9b4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014877f8;
  if ((void *)param_1[0x15d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15d]);
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x145);
  pvVar1 = (void *)thunk_FUN_100534a3c(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002cd2d4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x148))();
  if (((uVar2 & 1) == 0) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x1738) + 0x150))(), iVar1 == 0)) {
    return;
  }
  FUN_1002cd328(param_1);
  return;
}




void thunk_FUN_1002cd0f4(void)

{
  FUN_1002cd0f4();
  return;
}




void FUN_1002cda08(uint *param_1,uint param_2)

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




void FUN_1002cda84(void)

{
  DAT_101e44e20 = 0xff;
  DAT_101e44e22 = 0xffff;
  DAT_101e44e24 = 0xffff;
  DAT_101e44e26 = 0xffbc9c44;
  DAT_101e44e2a = 0xff1166f2;
  DAT_101e44e2e = 0xffe0e0e0;
  DAT_101e44e32 = 0xffa0a0a0;
  DAT_101e44e36 = 0xff8c8c8c;
  DAT_101e44e3a = 0xff322213;
  DAT_101e44e3e = 0xff091911;
  DAT_101e44e42 = 0xff170c19;
  DAT_101e44e46 = 0xff241a14;
  DAT_101e44e4a = 0xff14171c;
  DAT_101e44e4e = 0xff221911;
  DAT_101e44e52 = 0xff1a1416;
  DAT_101e44e56 = 0xff121414;
  DAT_101e44e5a = 0xff1a1809;
  DAT_101e44e5e = 0xff141414;
  DAT_101e44e62 = 0xff141414;
  DAT_101e44e66 = 0xff2929c0;
  DAT_101e44e6a = 0xff283082;
  DAT_101e44e6e = 0xff5262cc;
  DAT_101e44e72 = 0xff283082;
  DAT_101e44e76 = 0xff5262cc;
  DAT_101e44e7a = 0xff745c42;
  DAT_101e44e7e = 0xff184155;
  DAT_101e44e82 = 0xff92665e;
  DAT_101e44e86 = 0xffbc9c44;
  DAT_101e44e8a = 0xffbbae56;
  DAT_101e44e8e = 0xff8b7b01;
  DAT_101e44e92 = 0xff90b3ef;
  DAT_101e44e96 = 0xff728ebe;
  DAT_101e44e9a = 0xff19459d;
  DAT_101e44e9e = 0xff9d877b;
  DAT_101e44ea2 = 0xffcbb1a3;
  DAT_101e44ea6 = 0xff3f6fb5;
  DAT_101e44eaa = 0xffc5c5c5;
  DAT_101e44eae = 0xff4fc1f1;
  DAT_101e44eb2 = 0xff606060;
  DAT_101e44eb6 = 0xffc5ff7b;
  DAT_101e44eba = 0xff5271eb;
  DAT_101e44ebe = 0xfffae076;
  DAT_101e44ec2 = 0xff3ac8f6;
  DAT_101e44ec6 = 0xffaaaaaa;
  DAT_101e44eca = 0xffe19400;
  DAT_101e44ece = 0xffe19400;
  DAT_101e44ed2 = 0xffe550b2;
  DAT_101e44ed6 = 0xfff22ae8;
  DAT_101e44eda = 0xff005ae1;
  DAT_101e44ede = 0xff1addfa;
  DAT_101e44ee2 = 0xff2424b3;
  DAT_101e44ee6 = 0xff2424b3;
  DAT_101e44eea = 0xff646464;
  DAT_101e44eee = 0xff92665e;
  DAT_101e44ef2 = 0xff646037;
  DAT_101e44efc = 0xff1111a1;
  DAT_101e44f04 = 0xffc8c8c8;
  DAT_101e44f00 = 0xff321ee1;
  DAT_101e44f08 = 0xff321ee1;
  DAT_101e44f14 = 0xff6259b3;
  DAT_101e44f18 = 0xff506e73;
  DAT_101e44ef8 = 0xffffffff;
  DAT_101e44f1c = 0xff9dbf86;
  DAT_101e44f0c = 0xff7fe801;
  DAT_101e44f20 = 0xffa35244;
  DAT_101e44f10 = 0xffffffff;
  DAT_101e44f24 = 0xffca828e;
  DAT_101e44f28 = 0xffa6a6a6;
  DAT_101e44f2c = 0xffa6a6a6;
  DAT_101e44f30 = 0xffffffff;
  DAT_101e44f34 = 0xff88ea2f;
  DAT_101e44f38 = 0xff8c8c8c;
  DAT_101e44f3c = 0xffffb400;
  DAT_101e44f40 = 0xffff00ff;
  DAT_101e44f44 = 0xff00aded;
  DAT_101e44f48 = 0xff33d3ff;
  DAT_101e44f4c = 0xff7fe801;
  DAT_101e44f50 = 0xff282828;
  DAT_101e44f54 = 0xfff0f0f0;
  DAT_101e44f58 = 0xffa4781e;
  DAT_101e44f5c = 0xffa6654b;
  DAT_101e44f60 = 0xff93435b;
  DAT_101e44f64 = 0xff387f9c;
  DAT_101e44f68 = 0xffa3781e;
  DAT_101e44f6c = 0xffffd18a;
  DAT_101e44f70 = 0xffff61f7;
  DAT_101e44f74 = 0xff5de1f2;
  DAT_101e44f78 = 0xff80eaff;
  DAT_101e44f7c = 0xff32e00e;
  DAT_101e44f80 = 0xff5a3c10;
  DAT_101e44f84 = 0xff330b03;
  DAT_101e44f88 = 0xff33031d;
  DAT_101e44f8c = 0xff032433;
  DAT_101e44f90 = 0xff9e8e8d;
  DAT_101e44f98 = 0x4326000041900000;
  DAT_101e44fa0 = 0x4326000041c00000;
  DAT_101d23804 = FUN_100644a94("UI::EVENT_PLAY_MENU_LAUNCH");
  return;
}




long * FUN_1002ce17c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)FUN_10029b498();
  puVar4[0xc9] = 0;
  *puVar4 = &PTR_thunk_FUN_1002ce350_101487990;
  puVar4 = puVar4 + 0xca;
  thunk_FUN_10064f204(puVar4);
  plVar1 = param_1 + 0xf3;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0x11c;
  thunk_FUN_10064f204(plVar2);
  FUN_100333b84(param_1 + 0x145);
  param_1[0x145] = (long)&PTR_thunk_FUN_100333c98_101493ee0;
  param_1[0xcff] = -1;
  FUN_100333b84(param_1 + 0xd00);
  param_1[0xd00] = (long)&PTR_thunk_FUN_100333c98_101494028;
  plVar3 = param_1 + 0x18ba;
  FUN_100333b84(plVar3);
  *plVar3 = (long)&PTR_thunk_FUN_100333c98_101494170;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_10064f31c(puVar4,param_1 + 0x145,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_10064f31c(plVar1,param_1 + 0xd00,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_10064f31c(plVar2,plVar3,1);
  lVar5 = FUN_10002f320();
  local_58 = FUN_100644a94("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  local_80 = FUN_1002ce33c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(lVar5 + 0x6728,&local_80);
  local_58 = FUN_100644a94("UI::EVENT_DISPLAY_PROGRESSIVE_REWARD_CHEST_INFO");
  local_80 = FUN_1002ce344;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  return param_1;
}




void FUN_1002ce33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002ce6b0(param_1,param_4);
  return;
}




void FUN_1002ce344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002ce654(param_1,param_4);
  return;
}




long * thunk_FUN_1002ce17c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar4 = (undefined8 *)FUN_10029b498();
  puVar4[0xc9] = 0;
  *puVar4 = &PTR_thunk_FUN_1002ce350_101487990;
  puVar4 = puVar4 + 0xca;
  thunk_FUN_10064f204(puVar4);
  plVar1 = param_1 + 0xf3;
  thunk_FUN_10064f204(plVar1);
  plVar2 = param_1 + 0x11c;
  thunk_FUN_10064f204(plVar2);
  FUN_100333b84(param_1 + 0x145);
  param_1[0x145] = (long)&PTR_thunk_FUN_100333c98_101493ee0;
  param_1[0xcff] = -1;
  FUN_100333b84(param_1 + 0xd00);
  param_1[0xd00] = (long)&PTR_thunk_FUN_100333c98_101494028;
  plVar3 = param_1 + 0x18ba;
  FUN_100333b84(plVar3);
  *plVar3 = (long)&PTR_thunk_FUN_100333c98_101494170;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_10064f31c(puVar4,param_1 + 0x145,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_10064f31c(plVar1,param_1 + 0xd00,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_10064f31c(plVar2,plVar3,1);
  lVar5 = FUN_10002f320();
  uStack_58 = FUN_100644a94("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  pcStack_80 = FUN_1002ce33c;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(lVar5 + 0x6728,&pcStack_80);
  uStack_58 = FUN_100644a94("UI::EVENT_DISPLAY_PROGRESSIVE_REWARD_CHEST_INFO");
  pcStack_80 = FUN_1002ce344;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_80);
  return param_1;
}




void FUN_1002ce350(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1002ce350_101487990;
  lVar1 = FUN_10002f320();
  uVar2 = FUN_100644a94("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  FUN_1002ce428(lVar1 + 0x6720,uVar2,FUN_1002ce33c,param_1);
  FUN_100333c98(param_1 + 0x18ba);
  FUN_100333c98(param_1 + 0xd00);
  FUN_100333c98(param_1 + 0x145);
  param_1[0x11c] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x133);
  FUN_10064e2bc(param_1 + 0x11c);
  param_1[0xf3] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x10a);
  FUN_10064e2bc(param_1 + 0xf3);
  param_1[0xca] = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0xe1);
  FUN_10064e2bc(param_1 + 0xca);
  FUN_100296d58(param_1);
  return;
}




void FUN_1002ce428(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




void thunk_FUN_1002ce350(void)

{
  FUN_1002ce350();
  return;
}




void FUN_1002ce480(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ce350();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ce494(long *param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10029b664();
  FUN_10001549c(local_38,"SUN_BURST");
  FUN_10033444c(param_1 + 0x18ba,1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002ce50c(undefined1 param_1 [16],float param_2,long *param_3)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  param_2 = param_2 * 0.71;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x14d) == fVar2 * 0.194) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0xa6c)) && !NAN(param_2))) {
    bVar1 = *(float *)((long)param_3 + 0xa6c) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x14d) = fVar2 * 0.194;
    *(float *)((long)param_3 + 0xa6c) = param_2;
    FUN_1000200a0(param_3 + 0x145);
  }
  bVar1 = false;
  if ((*(float *)(param_3 + 0xd08) == fVar2 * 0.492) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x6844)) && !NAN(param_2))) {
    bVar1 = *(float *)((long)param_3 + 0x6844) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0xd08) = fVar2 * 0.492;
    *(float *)((long)param_3 + 0x6844) = param_2;
    FUN_1000200a0(param_3 + 0xd00);
  }
  bVar1 = false;
  if ((*(float *)(param_3 + 0x18c2) == fVar2 * 0.79) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0xc614)) && !NAN(param_2))) {
    bVar1 = *(float *)((long)param_3 + 0xc614) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x18c2) = fVar2 * 0.79;
    *(float *)((long)param_3 + 0xc614) = param_2;
    FUN_1000200a0(param_3 + 0x18ba);
    return;
  }
  return;
}




void FUN_1002ce604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1003350b8(param_1 + 0xa28);
  FUN_1003340b8(param_1 + 0x6800,param_3);
  FUN_1003340b8(param_1 + 0xc5d0,param_4);
  return;
}




void FUN_1002ce654(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    lVar1 = FUN_100644b2c(param_2);
    if (*(long **)(param_1 + 0x648) != (long *)0x0 && lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002ce6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x648) + 8))();
      return;
    }
  }
  return;
}




void FUN_1002ce6b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    lVar1 = FUN_100644b2c(param_2);
    if (*(undefined8 **)(param_1 + 0x648) != (undefined8 *)0x0 && lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002ce708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)**(undefined8 **)(param_1 + 0x648))();
      return;
    }
  }
  return;
}




long * FUN_1002ce70c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_1002ce8d0_101487ab0;
  *(undefined4 *)(puVar4 + 0x18) = 0x41c80000;
  puVar4 = puVar4 + 0x19;
  thunk_FUN_1002fb340(puVar4);
  plVar1 = param_1 + 0x225;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x24b;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x12dc);
  if ((uVar3 & 0x7f80) != 0x2b00) {
    *(uint *)((long)param_1 + 0x12dc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x2b00;
    FUN_1000200a0(plVar2);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1006515d0(plVar1,1);
  FUN_100651460(plVar1,&DAT_10115a168);
  FUN_100651700(plVar1,0);
  uVar5 = FUN_1004e0150("QUEST_PROGRESS_TITLE_ROAD_TO_RANKED",0);
  FUN_1006513c0(plVar1,uVar5);
  FUN_1002fb710(0,0x42c80000,puVar4);
  FUN_1002fb85c(0,puVar4);
  FUN_1002fb690(puVar4,0);
  FUN_1002fb6f0(puVar4,0);
  FUN_10064e47c(0x42c80000,0x42960000,puVar4);
  return param_1;
}




long * thunk_FUN_1002ce70c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_1002ce8d0_101487ab0;
  *(undefined4 *)(puVar4 + 0x18) = 0x41c80000;
  puVar4 = puVar4 + 0x19;
  thunk_FUN_1002fb340(puVar4);
  plVar1 = param_1 + 0x225;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x24b;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x12dc);
  if ((uVar3 & 0x7f80) != 0x2b00) {
    *(uint *)((long)param_1 + 0x12dc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x2b00;
    FUN_1000200a0(plVar2);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1006515d0(plVar1,1);
  FUN_100651460(plVar1,&DAT_10115a168);
  FUN_100651700(plVar1,0);
  uVar5 = FUN_1004e0150("QUEST_PROGRESS_TITLE_ROAD_TO_RANKED",0);
  FUN_1006513c0(plVar1,uVar5);
  FUN_1002fb710(0,0x42c80000,puVar4);
  FUN_1002fb85c(0,puVar4);
  FUN_1002fb690(puVar4,0);
  FUN_1002fb6f0(puVar4,0);
  FUN_10064e47c(0x42c80000,0x42960000,puVar4);
  return param_1;
}




void FUN_1002ce8d0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002ce8d0_101487ab0;
  param_1[0x24b] = &PTR_FUN_1014a7108;
  param_1[0x262] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x265);
  FUN_10064e2bc(param_1 + 0x24b);
  thunk_FUN_100651068(param_1 + 0x225);
  FUN_1002ceae0(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002ceae0(void)

{
  FUN_1002ceae0();
  return;
}




void thunk_FUN_1002ce8d0(void)

{
  FUN_1002ce8d0();
  return;
}




void FUN_1002ce94c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ce8d0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ce960(long param_1,uint param_2,uint param_3)

{
  param_1 = param_1 + 200;
  FUN_1002fb6f0(param_1,1);
  FUN_1002fb710(0,(float)param_3,param_1);
  FUN_1002fb85c((float)param_2,param_1);
  FUN_1002fb8c4(param_1);
  return;
}




void FUN_1002ce9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  
  lVar1 = param_3 + 200;
  uVar3 = param_2;
  FUN_10064e3cc(lVar1);
  fVar2 = (float)uVar3;
  FUN_100651184(param_3 + 0x1128);
  if (1.0 < ABS((float)param_2 -
                (float)(int)(fVar2 + (float)uVar3 + *(float *)(param_3 + 0xc0) * 2.0))) {
    FUN_10064e47c(param_1,param_3);
    return;
  }
  FUN_10064e47c(param_1,param_2,param_3 + 0x1258);
  FUN_10064e47c((float)param_1 + *(float *)(param_3 + 0xc0) * -2.0,0x42960000,lVar1);
  FUN_10064e5ec(0,0,param_3 + 0x1258,8,param_3,8);
  FUN_10064e5ec(0,*(undefined4 *)(param_3 + 0xc0),param_3 + 0x1128,4,param_3,4);
  FUN_10064e5ec(0,-*(float *)(param_3 + 0xc0),lVar1,6,param_3,6);
  return;
}




void FUN_1002ceae0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1002ceae0_101487bf8;
  thunk_FUN_100651068(param_1 + 0x1e4);
  thunk_FUN_100651068(param_1 + 0x1be);
  lVar1 = 0xcc0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0xa60);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xaa0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xb58) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xb70);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xaa0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x1e0);
  thunk_FUN_100651068(param_1 + 0x110);
  param_1[0xf2] = &PTR_FUN_1014a7108;
  param_1[0x109] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10c);
  FUN_10064e2bc(param_1 + 0xf2);
  param_1[0xd4] = &PTR_FUN_1014a7108;
  param_1[0xeb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xee);
  FUN_10064e2bc(param_1 + 0xd4);
  thunk_FUN_10064e2bc(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_1014a7108;
  param_1[0xb6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb9);
  FUN_10064e2bc(param_1 + 0x9f);
  param_1[0x17] = &PTR_FUN_10148cfa0;
  FUN_10064e2bc(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_1014a7108;
  param_1[99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x66);
  FUN_10064e2bc(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_1014a7108;
  param_1[0x45] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48);
  FUN_10064e2bc(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002cec44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ceae0();
  operator_delete(pvVar1);
  return;
}




long * FUN_1002cec5c(long *param_1)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar10 = (undefined8 *)FUN_1002fc4c4();
  puVar10[0x137] = 0;
  *puVar10 = &PTR_thunk_FUN_1002cf080_101487d40;
  puVar10 = puVar10 + 0x138;
  FUN_1006421a8(puVar10);
  param_1[0x138] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x149;
  thunk_FUN_1001cd1dc(plVar1);
  plVar2 = param_1 + 0x174;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x19a;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1c0;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x1e6;
  thunk_FUN_1002fb340(plVar5);
  plVar7 = param_1 + 0x3f2;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x409;
  thunk_FUN_1002eca3c(plVar8,0);
  plVar9 = param_1 + 0x552;
  FUN_1002fcabc(plVar9);
  *(undefined1 *)(param_1 + 0x597) = 0;
  param_1[0x596] = 0;
  param_1[0x595] = 0;
  param_1[0x594] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  local_90 = (code *)CONCAT62(local_90._2_6_,0x37);
  FUN_10064e5b8(param_1,&local_90);
  plVar6 = param_1 + 0x94;
  (**(code **)(param_1[0x94] + 0x78))(plVar6,plVar3,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar6,plVar4,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar6,plVar5,1);
  (**(code **)(param_1[0x7d] + 0x78))(param_1 + 0x7d,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651460(plVar3,&DAT_101158a80);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_100651460(plVar4,&DAT_101158a84);
  FUN_1006515e0(plVar4,1);
  FUN_100651764(0xcd,plVar4);
  FUN_1002fb710(0,0x42c80000,plVar5);
  FUN_1002fb85c(0,plVar5);
  FUN_1002fb690(plVar5,0);
  FUN_1002fb6f0(plVar5,1);
  FUN_1002ecc7c(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1002eccb4(plVar8,&DAT_10115a168);
  local_68 = DAT_101d91884;
  local_90 = FUN_1002cf040;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x40a,&local_90);
  FUN_1002ebe0c(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebee0(0,0x41400000,plVar8);
  FUN_1002fcbec(plVar9);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_1006515d0(plVar2,1);
  FUN_100651460(plVar2,&DAT_101158a84);
  FUN_100651700(plVar2,0);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_1006515d0(plVar1,1);
  FUN_100651460(plVar1,&DAT_101158a84);
  FUN_100651700(plVar1,0);
  uVar11 = FUN_1004e0150("MENU_LANDING_PAGE_SIDEBAR_QUEST_TILE_TIME_TO_NEXT_QUEST",0);
  FUN_1001cd23c(plVar1,uVar11,1,1);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1002cf064;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  local_68 = DAT_101dbd460;
  local_90 = FUN_1002cf064;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1002cf040(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x9b8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002cf05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1 + 0x2ca0);
    return;
  }
  return;
}




void FUN_1002cf064(long param_1)

{
  if (*(long **)(param_1 + 0x9b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002cf074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x9b8) + 8))();
    return;
  }
  return;
}




long * thunk_FUN_1002cec5c(long *param_1)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar10 = (undefined8 *)FUN_1002fc4c4();
  puVar10[0x137] = 0;
  *puVar10 = &PTR_thunk_FUN_1002cf080_101487d40;
  puVar10 = puVar10 + 0x138;
  FUN_1006421a8(puVar10);
  param_1[0x138] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x149;
  thunk_FUN_1001cd1dc(plVar1);
  plVar2 = param_1 + 0x174;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x19a;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1c0;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x1e6;
  thunk_FUN_1002fb340(plVar5);
  plVar7 = param_1 + 0x3f2;
  FUN_10064e264(plVar7);
  plVar8 = param_1 + 0x409;
  thunk_FUN_1002eca3c(plVar8,0);
  plVar9 = param_1 + 0x552;
  FUN_1002fcabc(plVar9);
  *(undefined1 *)(param_1 + 0x597) = 0;
  param_1[0x596] = 0;
  param_1[0x595] = 0;
  param_1[0x594] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  pcStack_90 = (code *)CONCAT62(pcStack_90._2_6_,0x37);
  FUN_10064e5b8(param_1,&pcStack_90);
  plVar6 = param_1 + 0x94;
  (**(code **)(param_1[0x94] + 0x78))(plVar6,plVar3,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar6,plVar4,1);
  (**(code **)(param_1[0x94] + 0x78))(plVar6,plVar5,1);
  (**(code **)(param_1[0x7d] + 0x78))(param_1 + 0x7d,plVar7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651460(plVar3,&DAT_101158a80);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_100651460(plVar4,&DAT_101158a84);
  FUN_1006515e0(plVar4,1);
  FUN_100651764(0xcd,plVar4);
  FUN_1002fb710(0,0x42c80000,plVar5);
  FUN_1002fb85c(0,plVar5);
  FUN_1002fb690(plVar5,0);
  FUN_1002fb6f0(plVar5,1);
  FUN_1002ecc7c(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1002eccb4(plVar8,&DAT_10115a168);
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002cf040;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x40a,&pcStack_90);
  FUN_1002ebe0c(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_1002ebee0(0,0x41400000,plVar8);
  FUN_1002fcbec(plVar9);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_1006515d0(plVar2,1);
  FUN_100651460(plVar2,&DAT_101158a84);
  FUN_100651700(plVar2,0);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_1006515d0(plVar1,1);
  FUN_100651460(plVar1,&DAT_101158a84);
  FUN_100651700(plVar1,0);
  uVar11 = FUN_1004e0150("MENU_LANDING_PAGE_SIDEBAR_QUEST_TILE_TIME_TO_NEXT_QUEST",0);
  FUN_1001cd23c(plVar1,uVar11,1,1);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_1002cf064;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_1002cf064;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return param_1;
}




void FUN_1002cf080(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002cf080_101487d40;
  if (*(char *)((long)param_1 + 0x2cb7) < '\0') {
    operator_delete((void *)param_1[0x594]);
  }
  thunk_FUN_1002fcb10(param_1 + 0x552);
  param_1[0x409] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x52a);
  FUN_1002ebc50(param_1 + 0x409);
  thunk_FUN_10064e2bc(param_1 + 0x3f2);
  FUN_1002ceae0(param_1 + 0x1e6);
  thunk_FUN_100651068(param_1 + 0x1c0);
  thunk_FUN_100651068(param_1 + 0x19a);
  thunk_FUN_100651068(param_1 + 0x174);
  param_1[0x149] = &PTR_FUN_10145eb78;
  param_1[0x160] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x171] != (void *)0x0) {
    operator_delete__((void *)param_1[0x171]);
    param_1[0x171] = 0;
    param_1[0x170] = 0;
  }
  FUN_100651068(param_1 + 0x149);
  FUN_10064221c(param_1 + 0x138);
  *param_1 = &PTR_FUN_10148d378;
  thunk_FUN_1002fc050(param_1 + 0xab);
  thunk_FUN_10064e2bc(param_1 + 0x94);
  thunk_FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_1014a6db0;
  param_1[0x4c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002cf080(void)

{
  FUN_1002cf080();
  return;
}




void FUN_1002cf210(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002cf080();
  operator_delete(pvVar1);
  return;
}




void FUN_1002cf224(long param_1,int *param_2)

{
  undefined8 ***pppuVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  undefined1 *local_80;
  size_t local_78;
  ulong local_70;
  undefined8 **local_68;
  size_t sStack_60;
  byte local_51;
  
  ppuVar4 = &local_80;
  ppuVar5 = &local_80;
  FUN_1006513c0(param_1 + 0xcd0,param_2 + 0x1e);
  FUN_1006513c0(param_1 + 0xe00,param_2 + 0x26);
  FUN_1002fb85c((float)param_2[0x35],param_1 + 0xf30);
  if (*(char *)(param_1 + 0x2cb8) != '\0') goto LAB_1002cf388;
  if ((*param_2 != 0) && (*(char *)((long)param_2 + 0xd9) == '\0')) {
    FUN_1000e6234(&local_68,param_2);
    puVar3 = PTR_s_build___Chests_tga_1018549e0;
    local_80 = (undefined1 *)0x0;
    local_78 = 0;
    local_70 = 0;
    pppuVar1 = (undefined8 ***)local_68;
    sVar2 = sStack_60;
    if (-1 < (char)local_51) {
      pppuVar1 = &local_68;
      sVar2 = (ulong)local_51;
    }
    if (0xffffffffffffffef < sVar2 + 6) {
                    /* WARNING: Subroutine does not return */
      FUN_1002cfc34();
    }
    if (sVar2 + 6 < 0x17) {
      local_70 = sVar2 << 0x38;
      if (sVar2 != 0) goto LAB_1002cf310;
    }
    else {
      uVar6 = sVar2 + 0x16 & 0xfffffffffffffff0;
      ppuVar4 = operator_new(uVar6);
      local_70 = uVar6 | 0x8000000000000000;
      local_80 = (undefined1 *)ppuVar4;
      local_78 = sVar2;
LAB_1002cf310:
      _memcpy(ppuVar4,pppuVar1,sVar2);
      ppuVar5 = ppuVar4;
    }
    *(undefined1 *)((long)ppuVar5 + sVar2) = 0;
    std::string::append((char *)&local_80,0x1013ed7b2);
    ppuVar5 = (undefined1 **)local_80;
    if (-1 < (long)local_70) {
      ppuVar5 = &local_80;
    }
    FUN_1002fc7a8(param_1,puVar3,ppuVar5,&DAT_101d91650);
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    if ((char)local_51 < '\0') {
      operator_delete(local_68);
    }
  }
  *(char *)(param_1 + 0x2cb8) = '\x01';
LAB_1002cf388:
  FUN_1002cf3b4(param_1,param_2);
  return;
}




void FUN_1002cf3b4(long *param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  long *plVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  undefined4 uVar22;
  undefined4 local_50 [2];
  undefined8 local_48;
  
  if (param_2 == 0) {
    return;
  }
  puVar16 = local_50;
  cVar7 = *(char *)(param_2 + 0xd8);
  bVar10 = cVar7 != '\0';
  cVar8 = *(char *)(param_2 + 0xd9);
  bVar1 = cVar8 != '\0';
  FUN_1002fc780(param_1,bVar10 && cVar8 == '\0');
  uVar18 = 4;
  if (!bVar10 || !bVar1) {
    uVar18 = 0;
  }
  *(uint *)((long)param_1 + 0xa44) = *(uint *)((long)param_1 + 0xa44) & 0xfffffffb | uVar18;
  FUN_1002fc7b0(param_1,bVar10 && bVar1);
  if (cVar8 != '\0') {
    lVar12 = FUN_100319d14(param_2);
    if (lVar12 < 1) {
      uVar18 = *(uint *)((long)param_1 + 0xacc) & 0xfffffffb;
    }
    else {
      local_48 = FUN_100319d14(param_2);
      FUN_1001cd374(param_1 + 0x149,&local_48);
      uVar22 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_10065179c(uVar22,0,0x3f800000,param_1 + 0x149);
      uVar18 = *(uint *)((long)param_1 + 0xacc) | 4;
    }
    *(uint *)((long)param_1 + 0xacc) = uVar18;
    goto LAB_1002cf69c;
  }
  FUN_1006513c0(param_1 + 0x19a,param_2 + 0x78);
  piVar13 = (int *)FUN_100319d48(param_2,"displayProgressCur");
  piVar14 = (int *)FUN_100319d48(param_2,"displayProgressMax");
  if (((piVar13 == (int *)0x0) || (piVar14 == (int *)0x0)) || (*piVar14 < 2)) {
    *(uint *)((long)param_1 + 0xfb4) = *(uint *)((long)param_1 + 0xfb4) & 0xfffffffb;
  }
  else {
    FUN_1002fb710(0,(float)*piVar14,param_1 + 0x1e6);
    FUN_1002fb85c((float)*piVar13,param_1 + 0x1e6);
    *(uint *)((long)param_1 + 0xfb4) =
         *(uint *)((long)param_1 + 0xfb4) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0xfb4) & 3 | (uint)(cVar7 == '\0') << 2;
    *(uint *)((long)param_1 + 0x2b14) =
         *(uint *)((long)param_1 + 0x2b14) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x2b14) & 3 | (uint)(cVar7 == '\0') << 2;
  }
  uVar15 = FUN_100319d14(param_2);
  FUN_1002cf874(param_1,uVar15);
  plVar2 = param_1 + 0x594;
  FUN_1003195f0(param_2 + 0x60,plVar2,1);
  plVar3 = param_1 + 0x409;
  if (cVar7 == '\0') {
    bVar9 = *(byte *)((long)param_1 + 0x2cb7);
    uVar17 = (ulong)bVar9;
    sVar4 = param_1[0x595];
    if (-1 < (char)bVar9) {
      sVar4 = uVar17;
    }
    sVar5 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar5 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar4 == sVar5) {
      plVar6 = (long *)*plVar2;
      if (-1 < (char)bVar9) {
        plVar6 = plVar2;
      }
      pbVar21 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar21 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if (sVar4 != 0) {
          iVar11 = _memcmp(plVar6,pbVar21,sVar4);
          uVar18 = *(uint *)((long)param_1 + 0x20cc);
          if (iVar11 != 0) goto LAB_1002cf634;
          uVar20 = 0;
          goto LAB_1002cf66c;
        }
      }
      else if (sVar4 != 0) {
        if ((uint)*pbVar21 == ((uint)(long *)*plVar2 & 0xff)) {
          pbVar19 = (byte *)((long)param_1 + 0x2ca1);
          do {
            uVar17 = uVar17 - 1;
            pbVar21 = pbVar21 + 1;
            if (uVar17 == 0) goto LAB_1002cf65c;
            bVar9 = *pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (bVar9 == *pbVar21);
        }
        goto LAB_1002cf628;
      }
LAB_1002cf65c:
      uVar20 = 0;
      uVar18 = *(uint *)((long)param_1 + 0x20cc);
    }
    else {
LAB_1002cf628:
      uVar18 = *(uint *)((long)param_1 + 0x20cc);
LAB_1002cf634:
      uVar20 = 4;
    }
LAB_1002cf66c:
    *(uint *)((long)param_1 + 0x20cc) = uVar20 | uVar18 & 0xfffffffb;
    FUN_1002ecce4(plVar3,param_2 + 0xb8);
    puVar16 = &DAT_10115a164;
  }
  else {
    *(uint *)((long)param_1 + 0x20cc) = *(uint *)((long)param_1 + 0x20cc) | 4;
    uVar15 = FUN_1004e0150("MENU_DAILY_LOGIN_POPUP_COLLECT_BUTTON",0);
    FUN_1002ecce4(plVar3,uVar15);
    local_50[0] = 0xff5ac8f4;
  }
  FUN_1002ebe4c(plVar3,puVar16);
  FUN_1002ecd24(plVar3);
LAB_1002cf69c:
  FUN_1002cf8d8(param_1);
  return;
}




void FUN_1002cf6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = (int)param_3;
  if (iVar3 == 1) {
    pcVar4 = "QUEST_WIN_OF_THE_DAY_DESCRIPTION";
    pcVar1 = "QUEST_WIN_OF_THE_DAY_1ST_TITLE";
  }
  else if (iVar3 == 7) {
    pcVar4 = "QUEST_SINISTER_SEVEN_DESCRIPTION";
    pcVar1 = "QUEST_WIN_OF_THE_DAY_7TH_TITLE";
  }
  else {
    if (iVar3 != 3) goto LAB_1002cf754;
    pcVar4 = "QUEST_WIN_OF_THE_DAY_DESCRIPTION";
    pcVar1 = "QUEST_WIN_OF_THE_DAY_3RD_TITLE";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1006513c0(param_1 + 0xcd0,uVar2);
  uVar2 = FUN_1004e0150(pcVar4,0);
  FUN_1006513c0(param_1 + 0xe00,uVar2);
LAB_1002cf754:
  FUN_1002fb710(0,(float)iVar3,param_1 + 0xf30);
  uVar2 = FUN_1004e0150("QUEST_TILE_COMPLETED",0);
  FUN_1006513c0(param_1 + 0xba0,uVar2);
  *(uint *)(param_1 + 0x2b14) = *(uint *)(param_1 + 0x2b14) & 0xfffffffb;
  *(uint *)(param_1 + 0x20cc) = *(uint *)(param_1 + 0x20cc) & 0xfffffffb;
  FUN_1002fc780(param_1,0);
  *(uint *)(param_1 + 0xacc) = *(uint *)(param_1 + 0xacc) & 0xfffffffb;
  if (*(char *)(param_1 + 0x2cb8) == '\0') {
    FUN_1002fc7a8(param_1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_glory_icon",
                  &DAT_101d91650);
    *(char *)(param_1 + 0x2cb8) = '\x01';
  }
  FUN_1002cf80c(param_1,param_2,param_3);
  return;
}




void FUN_1002cf80c(long param_1,int param_2,int param_3)

{
  *(uint *)(param_1 + 0xa44) =
       *(uint *)(param_1 + 0xa44) & 0xfffffff8 |
       *(uint *)(param_1 + 0xa44) & 3 | (uint)(param_3 <= param_2) << 2;
  *(uint *)(param_1 + 0xc24) =
       *(uint *)(param_1 + 0xc24) & 0xfffffff8 |
       *(uint *)(param_1 + 0xc24) & 3 | (uint)(param_3 <= param_2) << 2;
  FUN_1002fc7b0();
  FUN_1002fb85c((float)param_2,param_1 + 0xf30);
  *(uint *)(param_1 + 0xfb4) =
       *(uint *)(param_1 + 0xfb4) & 0xfffffff8 |
       *(uint *)(param_1 + 0xfb4) & 3 | (uint)(param_2 < param_3) << 2;
  return;
}




void FUN_1002cf874(long param_1,uint param_2)

{
  ulong local_28;
  
  if ((int)param_2 < 1) {
    *(uint *)(param_1 + 0x2b14) = *(uint *)(param_1 + 0x2b14) & 0xfffffffb;
  }
  else {
    local_28 = (ulong)param_2;
    FUN_1002fccd0(param_1 + 0x2a90,&local_28);
    local_28 = (ulong)param_2;
    FUN_1001cd374(param_1 + 0xa48,&local_28);
  }
  return;
}




void FUN_1002cf8d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  
  plVar1 = param_1 + 0x149;
  bVar6 = false;
  if ((*(float *)(param_1 + 0x151) == (float)DAT_101dc1cb8) &&
     (bVar6 = false, !NAN(*(float *)((long)param_1 + 0xa8c)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar6 = *(float *)((long)param_1 + 0xa8c) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar6) {
    param_1[0x151] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar1);
  }
  plVar2 = param_1 + 0x174;
  bVar6 = false;
  if ((*(float *)(param_1 + 0x17c) == (float)DAT_101dc1cb8) &&
     (bVar6 = false, !NAN(*(float *)((long)param_1 + 0xbe4)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar6 = *(float *)((long)param_1 + 0xbe4) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar6) {
    param_1[0x17c] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar2);
  }
  uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
  if (0.0 < (float)uVar10) {
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_1002fc8c0(uVar10,param_1);
    if ((*(byte *)((long)param_1 + 0x2b14) >> 2 & 1) == 0) {
      uVar12 = 0;
      FUN_10064e5ec(0,param_1 + 0x409,8,param_1 + 0x3f2,7);
    }
    else {
      plVar5 = param_1 + 0x409;
      fVar8 = (float)FUN_10064e3cc(plVar5);
      uVar12 = 0xbf000000;
      FUN_10064e72c(0,plVar5,0,param_1 + 0x552,2);
      FUN_10064e72c(fVar8 * -0.5,plVar5,3,param_1 + 0x552,3);
    }
    plVar5 = param_1 + 0x3f2;
    local_68 = FUN_1006425d0(plVar5,1,0,0,1);
    uStack_64 = uVar12;
    FUN_10064e48c(plVar5,&local_68);
    fVar8 = (float)FUN_10064e3cc(plVar5);
    FUN_10064e5ec(fVar8 * 0.5,0,plVar5,8,param_1 + 0x7d,8);
    plVar5 = param_1 + 0x94;
    plVar3 = param_1 + 0x1c0;
    fVar8 = (float)(**(code **)(param_1[0x94] + 0x48))(plVar5);
    FUN_10065125c(plVar3,(int)fVar8);
    plVar4 = param_1 + 0x1e6;
    uVar11 = (**(code **)(param_1[0x94] + 0x48))(plVar5);
    FUN_10064e47c(uVar11,0x42960000,plVar4);
    plVar7 = param_1 + 0x19a;
    fVar8 = 0.0;
    FUN_10064e5ec(0,plVar7,0,plVar5,0);
    if ((*(byte *)((long)param_1 + 0xe84) >> 2 & 1) != 0) {
      FUN_10064e72c(0,plVar3,0,plVar7,2);
      FUN_10064e72c(0,plVar3,3,plVar7,3);
      plVar7 = plVar3;
    }
    if ((*(byte *)((long)param_1 + 0xfb4) >> 2 & 1) != 0) {
      FUN_10064e72c(0,plVar4,0,plVar7,2);
      FUN_10064e72c(0,plVar4,3,plVar7,3);
    }
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar9 = (float)FUN_1002fc880(param_1);
    if (ABS(fVar8 - fVar9) <= 1.0) {
      uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_10065179c(uVar10,0,0x3f800000,plVar1);
      FUN_10064e5ec(0,0,plVar1,8,param_1,8);
      uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_10065179c(uVar10,0,0x3f800000,plVar2);
      FUN_10064e5ec(0,0,plVar2,8,param_1,8);
    }
    else {
      uVar11 = FUN_1002fc880(param_1);
      FUN_10064e47c(uVar10,uVar11,param_1);
    }
  }
  return;
}




void thunk_FUN_1002cf8d8(void)

{
  FUN_1002cf8d8();
  return;
}




void FUN_1002cfc34(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




long * FUN_1002cfc40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 local_38 [8];
  
  puVar4 = (undefined8 *)FUN_1006543ec();
  puVar4[0x34] = 0;
  *puVar4 = &PTR_thunk_FUN_1002cfdc0_101487e88;
  puVar4 = puVar4 + 0x35;
  thunk_FUN_1005357f4(puVar4);
  plVar1 = param_1 + 0x17a;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x198;
  thunk_FUN_100652c08(plVar2);
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b6] = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  local_38[0] = 9;
  FUN_100534ebc(puVar4,local_38);
  FUN_100652cac(plVar1,PTR_s_build___SophomoreQuestBackground_101854a60,
                "SophomoreQuestBackground_Default_Top");
  *(uint *)((long)param_1 + 0xc54) = *(uint *)((long)param_1 + 0xc54) & 0xfffffffb;
  FUN_100653080(plVar1,1);
  FUN_100654488(param_1,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x1b3) = *(byte *)(param_1 + 0x1b3) | 2;
  uVar3 = *(uint *)((long)param_1 + 0xd44);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xd44) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




long * thunk_FUN_1002cfc40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [8];
  
  puVar4 = (undefined8 *)FUN_1006543ec();
  puVar4[0x34] = 0;
  *puVar4 = &PTR_thunk_FUN_1002cfdc0_101487e88;
  puVar4 = puVar4 + 0x35;
  thunk_FUN_1005357f4(puVar4);
  plVar1 = param_1 + 0x17a;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x198;
  thunk_FUN_100652c08(plVar2);
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b6] = 0;
  *(undefined1 *)(param_1 + 0x1ba) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  auStack_38[0] = 9;
  FUN_100534ebc(puVar4,auStack_38);
  FUN_100652cac(plVar1,PTR_s_build___SophomoreQuestBackground_101854a60,
                "SophomoreQuestBackground_Default_Top");
  *(uint *)((long)param_1 + 0xc54) = *(uint *)((long)param_1 + 0xc54) & 0xfffffffb;
  FUN_100653080(plVar1,1);
  FUN_100654488(param_1,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x1b3) = *(byte *)(param_1 + 0x1b3) | 2;
  uVar3 = *(uint *)((long)param_1 + 0xd44);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xd44) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_1002cfdc0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002cfdc0_101487e88;
  if ((void *)param_1[0x1b9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b9]);
    param_1[0x1b9] = 0;
    param_1[0x1b8] = 0;
  }
  if ((void *)param_1[0x1b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b7]);
    param_1[0x1b7] = 0;
    param_1[0x1b6] = 0;
  }
  param_1[0x198] = &PTR_FUN_1014a7108;
  param_1[0x1af] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b2);
  FUN_10064e2bc(param_1 + 0x198);
  param_1[0x17a] = &PTR_FUN_1014a7108;
  param_1[0x191] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x194);
  FUN_10064e2bc(param_1 + 0x17a);
  thunk_FUN_100534a3c(param_1 + 0x35);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002cfdc0(void)

{
  FUN_1002cfdc0();
  return;
}




void FUN_1002cfe70(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002cfdc0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002cfe84(float param_1,float param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  float fStack_34;
  
  local_40 = param_4;
  local_38 = param_1;
  fStack_34 = param_2;
  FUN_100534ad8(param_3 + 0x35,param_4,1);
  FUN_1000d60cc(param_3 + 0x1b8,&local_38);
  FUN_1002afbbc(param_3 + 0x1b6,&local_40);
  uVar1 = local_40;
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_48 = CONCAT44(param_2 + fStack_34 * -2.0,fVar8 + local_38 * -2.0);
  FUN_10064e48c(uVar1,&local_48);
  if ((int)param_3[0x1b6] != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      if (uVar7 == 0) {
        lVar3 = *(long *)param_3[0x1b7];
        pfVar5 = (float *)param_3[0x1b9];
        bVar2 = false;
        if ((*(float *)(lVar3 + 0x40) == *pfVar5) &&
           (bVar2 = false, !NAN(*(float *)(lVar3 + 0x44)) && !NAN(pfVar5[1]))) {
          bVar2 = *(float *)(lVar3 + 0x44) == pfVar5[1];
        }
        if (!bVar2) {
          *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)pfVar5;
          FUN_1000200a0();
        }
      }
      else {
        lVar4 = param_3[0x1b7];
        lVar3 = *(long *)(lVar4 + uVar7 * 8);
        if (*(float *)(lVar3 + 0x40) != *(float *)(param_3[0x1b9] + lVar6)) {
          *(float *)(lVar3 + 0x40) = *(float *)(param_3[0x1b9] + lVar6);
          FUN_1000200a0();
          lVar4 = param_3[0x1b7];
          lVar3 = *(long *)(lVar4 + uVar7 * 8);
        }
        FUN_10064e72c(0,lVar3,0,*(undefined8 *)(lVar4 + (ulong)((int)uVar7 - 1) * 8),2);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 < *(uint *)(param_3 + 0x1b6));
  }
  return;
}




void FUN_1002cffb0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  if (*(byte *)(param_1 + 0x1ba) != param_2) {
    *(char *)(param_1 + 0x1ba) = (char)param_2;
    uVar1 = 4;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    *(uint *)((long)param_1 + 0xd44) = *(uint *)((long)param_1 + 0xd44) & 0xfffffffb | uVar1;
    if (param_2 == 0) {
      local_40[0] = 5;
      FUN_100534ebc(param_1 + 0x35,local_40);
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      uVar1 = FUN_1002d0060(param_1);
      FUN_10064e47c(uVar2,(float)uVar1,param_1);
    }
    else {
      local_38[0] = 9;
      FUN_100534ebc(param_1 + 0x35,local_38);
    }
  }
  return;
}

