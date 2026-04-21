// functions/10010 — 343 functions
#include "GameKindred.h"




void thunk_FUN_1001025e0(void)

{
  FUN_1001025e0();
  return;
}




void thunk_FUN_1001025e0(void)

{
  FUN_1001025e0();
  return;
}




undefined8 FUN_100101034(void)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  uVar3 = FUN_10052c424("ingamewin5v5");
  FUN_10052c434("default");
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/Win/1-Win-Start.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/Win/2-Win-Start-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"intro");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/Win/3-Win-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/Win/4-Win-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/Win/3-Win-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/Win/4-Win-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c45c();
  return uVar3;
}




undefined8 FUN_1001011ec(void)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  uVar3 = FUN_10052c424("ingamelose5v5");
  FUN_10052c434("default");
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/Loss/1-LOSE-Start.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/Loss/2-LOSE-Start-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"intro");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/Loss/3-LOSE-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/Loss/4-LOSE-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/Loss/3-LOSE-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/Loss/4-LOSE-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c45c();
  return uVar3;
}




void FUN_1001013a4(void)

{
  FUN_10052c3d8(DAT_101d2308a);
  FUN_10052c3d8(DAT_101d2308c);
  FUN_10052c3d8(DAT_101d2308e);
  FUN_10052c3d8(DAT_101d23090);
  FUN_10052c3d8(DAT_101d23092);
  FUN_10052c3d8(DAT_101d23094);
  FUN_10052c3d8(DAT_101d23096);
  FUN_10052c3d8(DAT_101d23098);
  FUN_10052c3d8(DAT_101d2309a);
  return;
}




void FUN_10010141c(void)

{
  return;
}




void FUN_100101420(void)

{
  if (DAT_101d23089 != '\0') {
    FUN_100101450(0,0);
    return;
  }
  FUN_1000fe474();
  FUN_10052c40c();
  return;
}




void FUN_100101450(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23089 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23089)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23089)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23089)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23089 != '\0')) {
    auVar4 = FUN_1000fe474();
    FUN_10052c418(auVar4,0x40400000);
    return;
  }
  return;
}




void FUN_1001014c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1000fe474();
  uVar2 = 0;
  if (param_1 == 0) {
    uVar2 = uVar1;
  }
  FUN_10052c418(uVar2,0x3f800000);
  return;
}




void FUN_1001014f4(void)

{
  FUN_10052c3c8(0x40000000,DAT_101d2308a);
  FUN_10052c3c8(0x40000000,DAT_101d2308c);
  FUN_10052c3c8(0x40000000,DAT_101d2308e);
  FUN_10052c3c8(0x40000000,DAT_101d23090);
  FUN_10052c3c8(0x40000000,DAT_101d23092);
  FUN_10052c3c8(0x40000000,DAT_101d23094);
  FUN_10052c3c8(0x40000000,DAT_101d23096);
  FUN_10052c3c8(0x40000000,DAT_101d23098);
  FUN_10052c3c8(0x40000000,DAT_101d2309a);
  return;
}




void FUN_100101590(void)

{
  FUN_1001014f4();
  FUN_10052c3b8(DAT_101d2308a);
  FUN_10052c3fc(0x3f000000,DAT_101d2308a);
  return;
}




void FUN_1001015c0(void)

{
  FUN_1001014f4();
  FUN_10052c3b8(DAT_101d2308c);
  FUN_10052c3fc(0x3f000000,DAT_101d2308c);
  return;
}




void FUN_1001015f0(void)

{
  FUN_1001014f4();
  FUN_10052c3b8(DAT_101d2308e);
  FUN_10052c3fc(0x3f000000,DAT_101d2308e);
  return;
}




void FUN_100101620(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  FUN_1001014f4();
  iVar2 = FUN_1004914e8();
  if (iVar2 != 0) {
    iVar2 = FUN_100440cb4();
    puVar1 = &DAT_101d23096;
    if (iVar2 != 2) {
      puVar1 = &DAT_101d23090;
    }
    FUN_10052c3b8(*puVar1);
    FUN_10052c3fc(0x3e800000,*puVar1);
    return;
  }
  return;
}




void FUN_10010167c(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  FUN_1001014f4();
  iVar2 = FUN_1004914e8();
  if (iVar2 != 0) {
    iVar2 = FUN_100440cb4();
    puVar1 = &DAT_101d23098;
    if (iVar2 != 2) {
      puVar1 = &DAT_101d23092;
    }
    FUN_10052c3b8(*puVar1);
    FUN_10052c3fc(0x3f000000,*puVar1);
    return;
  }
  return;
}




void FUN_1001016d8(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  FUN_1001014f4();
  iVar2 = FUN_1004914e8();
  if (iVar2 != 0) {
    iVar2 = FUN_100440cb4();
    puVar1 = &DAT_101d2309a;
    if (iVar2 != 2) {
      puVar1 = &DAT_101d23094;
    }
    FUN_10052c3b8(*puVar1);
    FUN_10052c3fc(0x3f000000,*puVar1);
    return;
  }
  return;
}




void FUN_100101734(undefined8 param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = FUN_1004914e8();
  if (iVar2 != 0) {
    iVar2 = FUN_100440cb4();
    puVar1 = &DAT_101d23096;
    if (iVar2 != 2) {
      puVar1 = &DAT_101d23090;
    }
    FUN_10052c3e8(*puVar1,param_1);
    return;
  }
  return;
}




void FUN_100101788(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1006581d8(param_2,&local_38);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_100658d0c(pppuVar1,param_1);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_1001017f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1000fe37c();
  FUN_10052c39c(auVar1,0x3f000000);
  auVar1 = FUN_1000fe474();
  FUN_10052c418(auVar1,0x3f000000);
  return;
}




void FUN_100101814(void)

{
  DAT_101d23088 = 0;
  DAT_101d23089 = 0;
  DAT_101d2308a = DAT_10186760c;
  DAT_101d2308c = DAT_10186760c;
  DAT_101d2308e = DAT_10186760c;
  DAT_101d23090 = DAT_10186760c;
  DAT_101d23092 = DAT_10186760c;
  DAT_101d23094 = DAT_10186760c;
  DAT_101d23096 = DAT_10186760c;
  DAT_101d23098 = DAT_10186760c;
  DAT_101d2309a = DAT_10186760c;
  return;
}




void FUN_10010187c(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 3;
  return;
}




void FUN_10010189c(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}




void FUN_1001018b4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}




void FUN_1001018bc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[1] = param_2;
  return;
}




void FUN_1001018c8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_1001018d0(undefined4 *param_1)

{
  return *param_1;
}




undefined4 FUN_1001018d8(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined4 FUN_1001018e0(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined4 FUN_1001018e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




bool FUN_1001018f0(int *param_1)

{
  return *param_1 == 0;
}




bool FUN_100101900(int *param_1)

{
  return *param_1 == 1;
}




bool FUN_100101910(uint *param_1,uint *param_2)

{
  if (*param_1 != *param_2 || 1 < *param_1) {
    return false;
  }
  return param_1[1] == param_2[1];
}




void FUN_100101940(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b2bc();
  if (iVar1 != 0) {
    FUN_10052b2c8(0x3f800000,"",1);
    return;
  }
  return;
}




void FUN_100101970(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b2bc();
  if (iVar1 != 0) {
    FUN_10052b2c8(0x3f800000,"",1);
    return;
  }
  return;
}




void FUN_1001019a0(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b2bc();
  if (iVar1 != 0) {
    FUN_10052b2c8(0x3f800000,"",1);
    return;
  }
  return;
}




void FUN_1001019d0(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b2bc();
  if (iVar1 != 0) {
    FUN_10052b2c8(0x3f800000,"",1);
    return;
  }
  return;
}




void FUN_100101a00(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b2bc();
  if (iVar1 != 0) {
    FUN_10052b2c8(0x3f800000,"",1);
    return;
  }
  return;
}




void FUN_100101a30(void)

{
  return;
}




void FUN_100101a34(void)

{
  return;
}




void FUN_100101a38(void)

{
  return;
}




void FUN_100101a3c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10034ea2c(*(undefined4 *)(param_1 + 0x260));
  if (iVar1 != 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cde0();
    if ((((iVar1 != 0) && (iVar1 = FUN_10034cc34(), iVar1 != 3)) &&
        (iVar1 = FUN_10034cc34(), iVar1 != 0x34)) &&
       ((iVar1 = FUN_10034cc34(), iVar1 != 4 && (iVar1 = FUN_10034cc34(), iVar1 != 0x35)))) {
      uVar2 = FUN_1010a0298(param_1,DAT_10184db08);
      iVar1 = FUN_10034cc34();
      if (iVar1 == 0x2d) {
        FUN_100051418(uVar2,param_1,"Tutorial05_5v5_Client",0);
        return;
      }
    }
  }
  return;
}




void FUN_100101ae0(void)

{
  if ((DAT_10184db10 & 1) == 0) {
    DAT_10184db08 = DAT_101872e38;
    DAT_10184db10 = 1;
  }
  return;
}




undefined8 FUN_100101b0c(void)

{
  return 0;
}




undefined8 FUN_100101b14(void)

{
  return 0;
}




undefined8 FUN_100101b1c(void)

{
  return 0;
}




void FUN_100101b24(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = operator_new(0xc88);
  _bzero(puVar3,0xc88);
  *puVar3 = &PTR_FUN_101459020;
  uVar2 = DAT_101dc0b88;
  lVar4 = 8;
  do {
    puVar1 = (undefined8 *)((long)puVar3 + lVar4);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar4 = lVar4 + 0x10;
  } while (puVar1 + 2 != puVar3 + 0x191);
  DAT_101d230a0 = puVar3;
  return;
}




void FUN_100101b94(void)

{
  if (DAT_101d230a0 != (long *)0x0) {
    (**(code **)(*DAT_101d230a0 + 8))();
  }
  DAT_101d230a0 = (long *)0x0;
  return;
}




void FUN_100101bc8(long param_1,undefined8 param_2)

{
  long local_20;
  undefined4 local_18;
  
  local_20 = param_1 + 0x28;
  local_18 = *(undefined4 *)(param_1 + 0x30);
  (**(code **)(*DAT_101d230a0 + 0x10))(DAT_101d230a0,&local_20,param_2);
  return;
}




void FUN_100101c0c(undefined8 param_1)

{
  (**(code **)(*DAT_101d230a0 + 0x20))(DAT_101d230a0,param_1);
                    /* WARNING: Could not recover jumptable at 0x000100101c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101d230a0 + 0x18))(DAT_101d230a0,param_1);
  return;
}




undefined8 FUN_100101c50(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((uint)param_1 < 200) {
    plVar1 = (long *)(**(code **)(*DAT_101d230a0 + 0x20))(DAT_101d230a0,param_1);
    plVar3 = (long *)*plVar1;
    if (plVar3 != (long *)0x0) {
      if ((int)plVar1[1] == (int)plVar3[1]) {
                    /* WARNING: Could not recover jumptable at 0x000100101ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar2;
      }
      *plVar1 = 0;
      *(undefined4 *)(plVar1 + 1) = DAT_101dc0b88;
    }
  }
  return 0;
}




void FUN_100101cc4(void)

{
  return;
}




void FUN_100101cc8(void)

{
  return;
}




void FUN_100101ccc(void)

{
  return;
}




void FUN_100101cd4(long param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1 = param_1 + (ulong)param_3 * 0x10;
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))();
  uVar1 = *(undefined4 *)(lVar2 + 0x30);
  *(long *)(param_1 + 8) = lVar2 + 0x28;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}




void FUN_100101d10(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_101dc0b88;
  param_1 = param_1 + (ulong)param_2 * 0x10;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}




long FUN_100101d2c(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x10 + 8;
}




bool FUN_100101d38(long param_1,uint param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + (ulong)param_2 * 0x10 + 8);
  plVar2 = (long *)*plVar5;
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    piVar4 = (int *)(param_1 + (ulong)param_2 * 0x10 + 0x10);
    if (*piVar4 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      bVar1 = lVar3 != 0;
    }
    else {
      bVar1 = false;
      *plVar5 = 0;
      *piVar4 = DAT_101dc0b88;
    }
  }
  return bVar1;
}




void FUN_100101da0(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_101dc7410 == 0) {
    operator_new(0x30);
    DAT_101dc7410 = FUN_10010a1c8();
  }
  iVar1 = FUN_10052b1c8();
  if (iVar1 != 0) {
    FUN_10052b1c0();
    FUN_10052b238("494793743970584");
    FUN_10052b22c("qsuppjz772zx",param_1,0,0);
    FUN_10052b200("061afb898671266e9eeff5d34321620b",0);
    FUN_10052b1d8();
    return;
  }
  return;
}




void FUN_100101e24(void)

{
  int iVar1;
  
  if (DAT_101dc7410 != (void *)0x0) {
    operator_delete(DAT_101dc7410);
    DAT_101dc7410 = (void *)0x0;
  }
  iVar1 = FUN_10052b1c8();
  if (iVar1 != 0) {
    FUN_10052b1c4();
    return;
  }
  return;
}




void FUN_100101e64(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1003467f8();
    if ((lVar2 != 0) && (lVar2 = FUN_100134110(), *(char *)(lVar2 + 8) == '\0')) {
      local_40 = 0;
      uStack_38 = 0;
      local_48 = &local_40;
      FUN_1003467f8();
      uVar3 = FUN_10034cd20();
      local_50 = "mode";
      uVar4 = FUN_100101fac(&local_48,&local_50);
      FUN_10052b124(uVar4,uVar3);
      uVar3 = FUN_10034cd14();
      local_50 = "botDifficulty";
      FUN_100101fac(&local_48,&local_50);
      FUN_10052b18c(uVar3);
      uVar3 = FUN_10011903c();
      local_50 = "myKDpct";
      FUN_100101fac(&local_48,&local_50);
      FUN_10052b18c(uVar3);
      uVar3 = FUN_1001190c4();
      local_50 = "myKills";
      FUN_100101fac(&local_48,&local_50);
      FUN_10052b18c(uVar3);
      FUN_10052b20c("App_Suspend_MidGame",&local_48);
      FUN_10052b1e0("App_Suspend_MidGame",&local_48);
      FUN_10010a220(&local_48,local_40);
    }
    lVar2 = DAT_101dc7410;
    if (DAT_101dc7410 != 0) {
      *(undefined1 *)(DAT_101dc7410 + 1) = 0;
      uVar3 = NEON_fmov(0xbf800000,4);
      *(undefined8 *)(lVar2 + 4) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = 0xbf800000;
    }
    FUN_10052b1d4();
  }
  return;
}




undefined8 * FUN_100101fac(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_100102024:
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, (ulong)puVar2[4] <= uVar4) {
        if (uVar4 <= (ulong)puVar2[4]) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_100102054;
          goto LAB_100102024;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_100102028;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_100102028:
  puVar3 = operator_new(0x50);
  puVar3[4] = uVar4;
  FUN_10052b058(puVar3 + 5);
  FUN_10010a270(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_100102054:
  return puVar2 + 5;
}




void FUN_10010206c(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b1c8();
  if (iVar1 != 0) {
    FUN_10052b204();
    return;
  }
  return;
}




void FUN_10010208c(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_38 [2];
  char local_21;
  
  FUN_10052b900(local_38,"hud_layout",&DAT_101d91198);
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_100102198("client_pref_hudLayout",pppuVar1,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  uVar2 = FUN_100126990();
  FUN_10052b21c("client_pref_settings_enabledMovementIndicator",uVar2);
  FUN_10052b1f0("client_pref_settings_enabledMovementIndicator",uVar2);
  uVar2 = FUN_1001269e0();
  FUN_10052b21c("client_pref_enableTapAndHoldMovement",uVar2);
  FUN_10052b1f0("client_pref_enableTapAndHoldMovement",uVar2);
  uVar2 = FUN_100126aac();
  FUN_10052b21c("client_pref_dailyChestNotificationEnabled",uVar2);
  FUN_10052b1f0("client_pref_dailyChestNotificationEnabled",uVar2);
  uVar2 = FUN_100130950();
  FUN_10052b21c("client_pref_notificationKindredRequestResponse",uVar2);
  FUN_10052b1f0("client_pref_notificationKindredRequestResponse",uVar2);
  return;
}




void FUN_100102198(undefined8 param_1,char *param_2)

{
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_10052b218(param_1,param_2);
    FUN_10052b1ec(param_1,param_2);
    return;
  }
  FUN_10052b228(param_1);
  FUN_10052b1fc(param_1);
  return;
}




void FUN_1001021f0(undefined8 param_1,undefined8 param_2)

{
  FUN_10052b21c();
  FUN_10052b1f0(param_1,param_2);
  return;
}




void FUN_10010221c(undefined8 param_1)

{
  FUN_10052b214();
  FUN_10052b1e8(param_1);
  return;
}




void FUN_100102240(undefined8 param_1,undefined8 param_2)

{
  FUN_10052b21c();
  FUN_10052b1f0(param_1,param_2);
  return;
}




void FUN_10010226c(undefined8 param_1,undefined8 param_2)

{
  FUN_10052b220();
  FUN_10052b1f4(param_1,param_2);
  return;
}




void FUN_1001022a0(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_100126c18();
    FUN_10012702c();
    FUN_10052b294("Graphics Quality is %s%s");
  }
  return;
}




void FUN_10010231c(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_10052b294("Enter game (game mode: %d)");
    FUN_10052b294("Match ID: %s");
  }
  return;
}




void FUN_100102380(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_10052b294("Start Game Session (game mode: %d)");
  }
  FUN_10052b1d4();
  return;
}




void FUN_1001023c0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_10052b294("End Game Session (game mode: %d)");
  }
  FUN_10034cd20(param_1);
  FUN_100102450(auStack_68,"Match_Complete_%s");
  FUN_10052b23c(auStack_68);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100102450(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,0x40,param_2,&stack0x00000000);
  return;
}




void FUN_100102480(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  local_40 = "reason";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,plVar1);
  FUN_10052b20c("Game_Match_Declined",&puStack_38);
  FUN_10052b1e0("Game_Match_Declined",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100102508(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "played";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar1,param_1);
  FUN_10052b20c("App_SizzleVideo_ABtest",&puStack_38);
  FUN_10052b1e0("App_SizzleVideo_ABtest",&puStack_38);
  FUN_10052b240("App_SizzleVideo",&puStack_38);
  FUN_10052b21c("experiments_sizzlevideo",param_1);
  FUN_10052b1f0("experiments_sizzlevideo",param_1);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_1001025b4(void)

{
  FUN_10052b208("App_Offerwall_Show");
  FUN_10052b1dc("App_Offerwall_Show");
  return;
}




void FUN_1001025e0(void)

{
  FUN_10052b208("App_Offerwall_Hide");
  FUN_10052b1dc("App_Offerwall_Hide");
  return;
}




void FUN_10010260c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_48 = &local_40;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = "timeInQueue";
    FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b18c(param_1);
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    local_50 = "queueName";
    uVar3 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b124(uVar3,plVar1);
    local_50 = "userInitiated";
    uVar3 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar3,param_3);
    FUN_10052b20c("Matchmaker_Queue_Cancel",&puStack_48);
    FUN_10052b1e0("Matchmaker_Queue_Cancel",&puStack_48);
    FUN_10010a220(&puStack_48,local_40);
  }
  return;
}




void FUN_1001026f4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "timeInQueue";
  FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b18c(param_1);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  local_50 = "queueName";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,plVar1);
  FUN_10052b20c("Matchmaker_Queue_SignPost",&puStack_48);
  FUN_10052b1e0("Matchmaker_Queue_SignPost",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_1001027ac(int param_1)

{
  if (param_1 == 2) {
    FUN_10052b208("App_Registration");
    FUN_10052b1dc("App_Registration");
    FUN_10052b230("gfyw92");
    FUN_10052b23c("App_Registration");
    return;
  }
  return;
}




void FUN_1001027f8(int param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  if (param_1 == 2) {
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "succeed";
  }
  else if (param_1 == 1) {
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "fail";
  }
  else {
    if (param_1 != 0) goto LAB_100102898;
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "try";
  }
  FUN_10052b124(uVar1,pcVar2);
LAB_100102898:
  FUN_10052b20c("App_SetHandle",&local_38);
  FUN_10052b1e0("App_SetHandle",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_1001028d4(int param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  if (param_1 == 2) {
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "succeed";
  }
  else if (param_1 == 1) {
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "fail";
  }
  else {
    if (param_1 != 0) goto LAB_100102974;
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "try";
  }
  FUN_10052b124(uVar1,pcVar2);
LAB_100102974:
  FUN_10052b20c("App_Guild_SetName",&local_38);
  FUN_10052b1e0("App_Guild_SetName",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_1001029b0(int param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  if (param_1 == 2) {
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "succeed";
  }
  else if (param_1 == 1) {
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "fail";
  }
  else {
    if (param_1 != 0) goto LAB_100102a50;
    local_40 = "success";
    uVar1 = FUN_100101fac(&local_38,&local_40);
    pcVar2 = "try";
  }
  FUN_10052b124(uVar1,pcVar2);
LAB_100102a50:
  FUN_10052b20c("App_Guild_SetTag",&local_38);
  FUN_10052b1e0("App_Guild_SetTag",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_100102a8c(void)

{
  FUN_10052b208("App_Login_UserInitiated");
  FUN_10052b1dc("App_Login_UserInitiated");
  return;
}




void FUN_100102ab8(void)

{
  return;
}




void FUN_100102abc(int param_1)

{
  if (param_1 == 2) {
    FUN_10052b208("App_Logout");
    FUN_10052b1dc("App_Logout");
    return;
  }
  return;
}




void FUN_100102af4(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_68 [2];
  char local_51;
  char *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  uVar2 = FUN_1004ef1b4();
  local_50 = "anonymous";
  uVar3 = FUN_100101fac(&local_38,&local_50);
  FUN_10052b17c(uVar3,uVar2);
  FUN_10052b20c("App_Login_PostPlayerInfo",&local_38);
  FUN_10052b1e0("App_Login_PostPlayerInfo",&local_38);
  iVar1 = FUN_10052b840();
  if (iVar1 != 0) {
    local_50 = (char *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    FUN_1004ef16c(&local_50);
    FUN_10001549c(local_68,"1");
    FUN_10052b848(local_68,&local_50);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (local_40 < 0) {
      operator_delete(local_50);
    }
  }
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_100102bcc(void)

{
  FUN_10052b208("App_RecordVideo_OpenControl");
  FUN_10052b1dc("App_RecordVideo_OpenControl");
  return;
}




void FUN_100102bf8(int param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  pcVar1 = "ranked";
  if (param_1 == 0) {
    pcVar1 = "casual";
  }
  local_40 = "mode";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,pcVar1);
  local_40 = "partySize";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar2,param_2);
  FUN_10052b20c("Game_EnterPublicQueue",&puStack_38);
  FUN_10052b1e0("Game_EnterPublicQueue",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100102cac(void)

{
  if (DAT_101dc7410 != 0) {
    FUN_1004e3004(DAT_101dc7410 + 0x28);
    return;
  }
  return;
}




void FUN_100102cc4(void)

{
  if (DAT_101dc7410 != 0) {
    FUN_1004e3004(DAT_101dc7410 + 0x20);
    return;
  }
  return;
}




void FUN_100102cdc(void)

{
  long lVar1;
  long lVar2;
  uint64_t uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  char *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = FUN_100134110();
  lVar1 = DAT_101dc7410;
  if (*(char *)(lVar2 + 8) == '\0') {
    if (DAT_101dc7410 == 0) {
      fVar7 = -1.0;
      fVar6 = -1.0;
    }
    else {
      uVar3 = _mach_absolute_time();
      lVar2 = DAT_101dc7410;
      fVar6 = -1.0;
      fVar7 = -1.0;
      if ((double)((uVar3 - *(long *)(lVar1 + 0x20)) * DAT_101d91638) * 1e-09 < 120.0) {
        uVar3 = _mach_absolute_time();
        fVar7 = (float)((double)((uVar3 - *(long *)(lVar2 + 0x20)) * DAT_101d91638) * 1e-09);
      }
      lVar1 = DAT_101dc7410;
      if ((DAT_101dc7410 != 0) &&
         (uVar3 = _mach_absolute_time(), lVar2 = DAT_101dc7410,
         (double)((uVar3 - *(long *)(lVar1 + 0x28)) * DAT_101d91638) * 1e-09 < 120.0)) {
        uVar3 = _mach_absolute_time();
        fVar6 = (float)((double)((uVar3 - *(long *)(lVar2 + 0x28)) * DAT_101d91638) * 1e-09);
      }
    }
    local_60 = 0;
    uStack_58 = 0;
    local_68 = &local_60;
    FUN_1003467f8();
    uVar4 = FUN_10034cd20();
    local_70 = "mode";
    uVar5 = FUN_100101fac(&local_68,&local_70);
    FUN_10052b124(uVar5,uVar4);
    uVar4 = FUN_10034cd14();
    local_70 = "botDifficulty";
    FUN_100101fac(&local_68,&local_70);
    FUN_10052b18c(uVar4);
    local_70 = "timeSinceAllPlayersAccepted";
    FUN_100101fac(&local_68,&local_70);
    FUN_10052b18c(fVar7);
    local_70 = "timeSinceStatePlaying";
    FUN_100101fac(&local_68,&local_70);
    FUN_10052b18c(fVar6);
    FUN_10052b20c("Game_Lobby_Start",&local_68);
    FUN_10052b1e0("Game_Lobby_Start",&local_68);
    FUN_10010a220(&local_68,local_60);
  }
  return;
}




void FUN_100102ec8(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20();
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar2);
  lVar4 = FUN_100134110();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_10052b20c("Game_Match_Start",&local_48);
    FUN_10052b1e0("Game_Match_Start",&local_48);
  }
  iVar1 = FUN_10015d3f8();
  if ((iVar1 == 0) || (lVar4 = FUN_10015d3ec(), *(int *)(lVar4 + 0x55e4) != 0))
  goto switchD_100102fb8_caseD_1c;
  iVar1 = *param_1;
  pcVar6 = "First_Game_3V3";
  pcVar5 = "rpgyvi";
  switch(iVar1) {
  case 0x19:
    break;
  case 0x1a:
switchD_100102fb8_caseD_1a:
    pcVar6 = "First_Game_Battle_Royale";
    pcVar5 = "j70zvw";
    break;
  case 0x1b:
  case 0x20:
    pcVar6 = "First_Game_Blitz";
    pcVar5 = "db584g";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_100102fb8_caseD_1c;
  case 0x25:
    pcVar6 = "First_Game_5V5_Ranked";
    pcVar5 = "bhv1ps";
    break;
  case 0x26:
  case 0x27:
    pcVar6 = "First_Game_5V5";
    pcVar5 = "dwl8fy";
    break;
  default:
    if (iVar1 != 9) {
      if (iVar1 != 0xf) goto switchD_100102fb8_caseD_1c;
      goto switchD_100102fb8_caseD_1a;
    }
  }
  FUN_10052b230(pcVar5);
  FUN_10052b240(pcVar6,&local_48);
switchD_100102fb8_caseD_1c:
  FUN_10010a220(&local_48,local_40);
  return;
}




void FUN_100103048(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar1 = FUN_10034cd20();
  local_50 = "mode";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar2,uVar1);
  uVar1 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(uVar1);
  FUN_10052b20c("Game_Match_Reconnect",&local_48);
  FUN_10052b1e0("Game_Match_Reconnect",&local_48);
  FUN_10010a220(&local_48,local_40);
  return;
}




void FUN_1001030fc(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  char *local_38;
  
  uVar2 = FUN_100327e00();
  puVar3 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar3;
  local_38 = "eloTier5v5";
  uVar2 = FUN_100101fac(param_1,&local_38);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar3 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar3;
  local_38 = "eloTier3v3";
  uVar2 = FUN_100101fac(param_1,&local_38);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_10034cd14();
  local_38 = "botDifficulty";
  FUN_100101fac(param_1,&local_38);
  FUN_10052b18c(uVar2);
  FUN_10052b20c("Game_Match_Finish",param_1);
  FUN_10052b1e0("Game_Match_Finish",param_1);
  FUN_10052b230("evuukx");
  return;
}




void FUN_1001031dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puStack_58 = &local_50;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = "retryReason";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar2,param_1);
  local_60 = "stateID";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar2,param_2);
  local_60 = "pendingStateID";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar2,param_3);
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  local_60 = "platformHost";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar2,plVar1);
  local_60 = "retryCounter";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar2,param_5);
  FUN_10052b20c("Platform_Retry",&puStack_58);
  FUN_10052b1e0("Platform_Retry",&puStack_58);
  FUN_10010a220(&puStack_58,local_50);
  return;
}




void FUN_100103308(void)

{
  return;
}




void FUN_10010330c(void)

{
  return;
}




void FUN_100103310(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 **local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_70 = (undefined8 ***)0x0;
  uStack_68 = 0;
  local_60 = 0;
  bVar8 = *(byte *)(param_3 + 0x17);
  uVar6 = (ulong)bVar8;
  uVar7 = *(ulong *)(param_3 + 8);
  uVar1 = uVar7;
  if (-1 < (char)bVar8) {
    uVar1 = uVar6;
  }
  if (uVar1 == 4) {
    iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013d24d0);
    if (iVar3 != 0) {
      bVar8 = *(byte *)(param_3 + 0x17);
      uVar6 = (ulong)bVar8;
      uVar7 = *(ulong *)(param_3 + 8);
      goto LAB_10010338c;
    }
    FUN_10001549c(&local_88,"ICE");
    std::string::operator=((string *)&local_58,(string *)&local_88);
    puVar5 = PTR_s_Economy_Sink_ICE_10184e358;
    if (uStack_78 < 0) {
      operator_delete(local_88);
      puVar5 = PTR_s_Economy_Sink_ICE_10184e358;
    }
  }
  else {
LAB_10010338c:
    if (-1 < (char)bVar8) {
      uVar7 = uVar6;
    }
    if ((uVar7 != 6) ||
       (iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013d247a), iVar3 != 0))
    goto LAB_1001035b0;
    FUN_10001549c(&local_88,"glory");
    std::string::operator=((string *)&local_58,(string *)&local_88);
    puVar5 = PTR_s_Economy_Sink_Glory_10184e360;
    if (uStack_78 < 0) {
      operator_delete(local_88);
      puVar5 = PTR_s_Economy_Sink_Glory_10184e360;
    }
  }
  FUN_10001549c(&local_88,puVar5);
  std::string::operator=((string *)&local_70,(string *)&local_88);
  if (uStack_78._7_1_ < '\0') {
    operator_delete(local_88);
  }
  local_80 = 0;
  uStack_78 = 0;
  local_90 = "hero";
  local_88 = &local_80;
  uVar4 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b124(uVar4,param_1);
  pppuVar2 = (undefined8 ***)local_58;
  if (-1 < local_48) {
    pppuVar2 = &local_58;
  }
  local_90 = "currency";
  uVar4 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b124(uVar4,pppuVar2);
  local_90 = "price";
  uVar4 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar4,param_2);
  FUN_10052b20c("Progression_UnlockHero",&local_88);
  FUN_10052b1e0("Progression_UnlockHero",&local_88);
  FUN_10010a220(&local_88,local_80);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = "type1";
  local_88 = &local_80;
  uVar4 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b124(uVar4,"hero");
  local_90 = "type2_hero";
  uVar4 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b124(uVar4,param_1);
  local_90 = "amount";
  uVar4 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar4,param_2);
  pppuVar2 = (undefined8 ***)local_70;
  if (-1 < local_60) {
    pppuVar2 = &local_70;
  }
  FUN_10052b20c(pppuVar2,&local_88);
  pppuVar2 = (undefined8 ***)local_70;
  if (-1 < local_60) {
    pppuVar2 = &local_70;
  }
  FUN_10052b1e0(pppuVar2,&local_88);
  FUN_10010a220(&local_88,local_80);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
LAB_1001035b0:
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_1001035d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "hero";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  local_40 = "currency";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,"cash");
  local_40 = "product_id";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_2);
  FUN_10052b20c("Progression_UnlockHero",&puStack_38);
  FUN_10052b1e0("Progression_UnlockHero",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_10010369c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *****local_58;
  undefined8 ***local_50;
  long local_48;
  
  local_58 = (undefined8 ******)0x0;
  local_50 = (undefined8 ****)0x0;
  local_48 = 0;
  bVar8 = *(byte *)(param_3 + 0x17);
  uVar6 = (ulong)bVar8;
  uVar7 = *(ulong *)(param_3 + 8);
  uVar1 = uVar7;
  if (-1 < (char)bVar8) {
    uVar1 = uVar6;
  }
  if (uVar1 == 4) {
    iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013d24d0);
    puVar5 = PTR_s_Economy_Sink_ICE_10184e358;
    if (iVar3 == 0) goto LAB_10010381c;
    bVar8 = *(byte *)(param_3 + 0x17);
    uVar6 = (ulong)bVar8;
    uVar7 = *(ulong *)(param_3 + 8);
  }
  uVar1 = uVar7;
  if (-1 < (char)bVar8) {
    uVar1 = uVar6;
  }
  if (uVar1 == 6) {
    iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013d247a);
    puVar5 = PTR_s_Economy_Sink_Glory_10184e360;
    if (iVar3 == 0) goto LAB_10010381c;
    bVar8 = *(byte *)(param_3 + 0x17);
    uVar6 = (ulong)bVar8;
    uVar7 = *(ulong *)(param_3 + 8);
  }
  uVar1 = uVar7;
  if (-1 < (char)bVar8) {
    uVar1 = uVar6;
  }
  if (uVar1 == 4) {
    iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013d253c);
    puVar5 = PTR_s_Economy_Sink_Opal_10184e368;
    if (iVar3 == 0) goto LAB_10010381c;
    bVar8 = *(byte *)(param_3 + 0x17);
    uVar6 = (ulong)bVar8;
    uVar7 = *(ulong *)(param_3 + 8);
  }
  if (-1 < (char)bVar8) {
    uVar7 = uVar6;
  }
  if ((uVar7 != 7) ||
     (iVar3 = std::string::compare(param_3,0,(char *)0xffffffffffffffff,0x1013d251e),
     puVar5 = PTR_s_Economy_Sink_Essence_10184e380, iVar3 != 0)) {
    if ((int)param_2 != 0) {
      return;
    }
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    puVar5 = PTR_s_Economy_Sink_Free_10184e390;
    if (uVar1 != 0) {
      return;
    }
  }
LAB_10010381c:
  FUN_10001549c(&local_70,puVar5);
  std::string::operator=((string *)&local_58,(string *)&local_70);
  if (uStack_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  local_70 = (char *)&local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "type1";
  uVar4 = FUN_100101fac(&local_70,&local_78);
  FUN_10052b124(uVar4,"bundle");
  local_78 = "type2_bundleId";
  uVar4 = FUN_100101fac(&local_70,&local_78);
  FUN_10052b124(uVar4,param_1);
  local_78 = "amount";
  uVar4 = FUN_100101fac(&local_70,&local_78);
  FUN_10052b17c(uVar4,param_2);
  ppppppuVar2 = (undefined8 ******)local_58;
  if (-1 < local_48) {
    ppppppuVar2 = &local_58;
  }
  FUN_10052b20c(ppppppuVar2,&local_70);
  ppppppuVar2 = (undefined8 ******)local_58;
  if (-1 < local_48) {
    ppppppuVar2 = &local_58;
  }
  FUN_10052b1e0(ppppppuVar2,&local_70);
  FUN_10010a220(&local_70,local_68);
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  local_58 = (undefined8 *****)&local_50;
  local_50 = (undefined8 ****)0x0;
  local_48 = 0;
  local_70 = "type1";
  uVar4 = FUN_100101fac(&local_58,&local_70);
  FUN_10052b124(uVar4,"bundle");
  local_70 = "type2_bundleId";
  uVar4 = FUN_100101fac(&local_58,&local_70);
  FUN_10052b124(uVar4,param_1);
  FUN_100103970(param_4,&local_58);
  FUN_10010a220(&local_58,local_50);
  return;
}




void FUN_100103970(uint *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  char *local_68;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar8 = 0;
    lVar9 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar9 + lVar8;
      uVar3 = *(undefined4 *)(lVar1 + 0x60);
      local_68 = "amount";
      uVar5 = FUN_100101fac(param_2,&local_68);
      FUN_10052b17c(uVar5,uVar3);
      uVar5 = FUN_100109e3c(lVar1);
      local_68 = "isDupe";
      uVar6 = FUN_100101fac(param_2,&local_68);
      FUN_10052b17c(uVar6,uVar5);
      iVar4 = FUN_100109e3c(lVar1);
      if (iVar4 != 0) {
        if (*(char *)(lVar1 + 0x47) < '\0') {
          lVar7 = *(long *)(lVar9 + lVar8 + 0x30);
        }
        else {
          lVar7 = lVar9 + lVar8 + 0x30;
        }
        local_68 = "originalId";
        uVar5 = FUN_100101fac(param_2,&local_68);
        FUN_10052b124(uVar5,lVar7);
        lVar7 = lVar9 + lVar8;
        if (*(char *)(lVar7 + 0x5f) < '\0') {
          lVar7 = *(long *)(lVar7 + 0x48);
        }
        else {
          lVar7 = lVar7 + 0x48;
        }
        local_68 = "originalType";
        uVar5 = FUN_100101fac(param_2,&local_68);
        FUN_10052b124(uVar5,lVar7);
        uVar3 = *(undefined4 *)(lVar9 + lVar8 + 100);
        local_68 = "originalAmount";
        uVar5 = FUN_100101fac(param_2,&local_68);
        FUN_10052b17c(uVar5,uVar3);
      }
      FUN_10003330c(local_80,lVar1 + 0x18);
      FUN_10003330c(local_98,lVar1);
      FUN_100107fd8(local_80,local_98,param_2);
      if (local_81 < '\0') {
        operator_delete(local_98[0]);
      }
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      lVar8 = lVar8 + 0x68;
    } while ((ulong)uVar2 * 0x68 - lVar8 != 0);
  }
  return;
}




void FUN_100103b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "campaignId";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  local_40 = "skuId";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_2);
  FUN_10052b20c("Market_Offers_AdView_Triggered",&puStack_38);
  FUN_10052b1e0("Market_Offers_AdView_Triggered",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100103bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "campaignId";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "skuId";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_2);
  local_50 = "result";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_3);
  FUN_10052b20c("Market_Offers_AdView_Completed",&puStack_48);
  FUN_10052b1e0("Market_Offers_AdView_Completed",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_100103c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "campaignId";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "skuId";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_2);
  local_50 = "result";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_3);
  FUN_10052b20c("Market_Offers_Redemption",&puStack_48);
  FUN_10052b1e0("Market_Offers_Redemption",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_100103d54(void)

{
  long lVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_38 = &local_30;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = "streak";
    uVar2 = FUN_100101fac(&puStack_38,&local_40);
    FUN_10052b124(uVar2,"1stWin");
    FUN_10052b20c("Progression_Quest_WinStreak",&puStack_38);
    FUN_10052b1e0("Progression_Quest_WinStreak",&puStack_38);
    FUN_10010a220(&puStack_38,local_30);
  }
  return;
}




void FUN_100103ddc(void)

{
  long lVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_38 = &local_30;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = "streak";
    uVar2 = FUN_100101fac(&puStack_38,&local_40);
    FUN_10052b124(uVar2,"3rdWin");
    FUN_10052b20c("Progression_Quest_WinStreak",&puStack_38);
    FUN_10052b1e0("Progression_Quest_WinStreak",&puStack_38);
    FUN_10010a220(&puStack_38,local_30);
  }
  return;
}




void FUN_100103e64(void)

{
  long lVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_38 = &local_30;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = "streak";
    uVar2 = FUN_100101fac(&puStack_38,&local_40);
    FUN_10052b124(uVar2,"SinisterSeven");
    FUN_10052b20c("Progression_Quest_WinStreak",&puStack_38);
    FUN_10052b1e0("Progression_Quest_WinStreak",&puStack_38);
    FUN_10010a220(&puStack_38,local_30);
  }
  return;
}




void FUN_100103eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  char *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  local_70 = "skin";
  puStack_68 = &local_60;
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar3,param_3);
  local_70 = "buyOrWeave";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar3,"buy");
  uVar1 = *(undefined4 *)(param_5 + 0x18);
  local_70 = "ICEspent";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar3,uVar1);
  uVar1 = *(undefined4 *)(param_5 + 0x20);
  local_70 = "OPALspent";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar3,uVar1);
  uVar1 = *(undefined4 *)(param_5 + 0x1c);
  local_70 = "SILVERspent";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar3,uVar1);
  local_70 = "rarity";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar3,param_4);
  local_70 = "skuId";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar3,param_1);
  local_70 = "chestContents";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar3,param_2);
  FUN_10052b20c("Progression_UnlockSkin",&puStack_68);
  FUN_10052b1e0("Progression_UnlockSkin",&puStack_68);
  FUN_10010a220(&puStack_68,local_60);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = "type1";
  puStack_68 = &local_60;
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar3,"skin");
  local_70 = "type2_skinTier";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar3,param_4);
  local_70 = "type3_skinKey";
  uVar3 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar3,param_3);
  iVar2 = *(int *)(param_5 + 0x18);
  if (iVar2 != 0) {
    local_70 = "amount";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,iVar2);
    FUN_10052b20c(PTR_s_Economy_Sink_ICE_10184e358,&puStack_68);
    FUN_10052b1e0(PTR_s_Economy_Sink_ICE_10184e358,&puStack_68);
  }
  iVar2 = *(int *)(param_5 + 0x20);
  if (iVar2 != 0) {
    local_70 = "amount";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,iVar2);
    FUN_10052b20c(PTR_s_Economy_Sink_Opal_10184e368,&puStack_68);
    FUN_10052b1e0(PTR_s_Economy_Sink_Opal_10184e368,&puStack_68);
  }
  iVar2 = *(int *)(param_5 + 0x1c);
  if (iVar2 != 0) {
    local_70 = "amount";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,iVar2);
    FUN_10052b20c(PTR_s_Economy_Sink_Glory_10184e360,&puStack_68);
    FUN_10052b1e0(PTR_s_Economy_Sink_Glory_10184e360,&puStack_68);
  }
  FUN_10010a220(&puStack_68,local_60);
  return;
}




void FUN_1001041ac(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "skin";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,param_1);
  local_50 = "buyOrWeave";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,"weave");
  local_50 = "ICEspent";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar2,0);
  local_50 = "rarity";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar2,param_2);
  pcVar1 = "isFromInventory";
  if (param_3 == 0) {
    pcVar1 = "notFromInventory";
  }
  local_50 = "fromInventory";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,pcVar1);
  FUN_10052b20c("Progression_UnlockSkin",&puStack_48);
  FUN_10052b1e0("Progression_UnlockSkin",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_1001042d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "skin";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "buyOrWeave";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,"cash");
  local_50 = "product_id";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_3);
  local_50 = "rarity";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_2);
  FUN_10052b20c("Progression_UnlockSkin",&puStack_48);
  FUN_10052b1e0("Progression_UnlockSkin",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_1001043c4(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "productID";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  FUN_10052b20c("Monetization_IAP_Try",&puStack_38);
  FUN_10052b1e0("Monetization_IAP_Try",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100104440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "productID";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_2);
  FUN_10052b20c("Monetization_IAP_Complete",&puStack_48);
  FUN_10052b1e0("Monetization_IAP_Complete",&puStack_48);
  FUN_10052b21c("isSpender",1);
  FUN_10052b1f0("isSpender",1);
  FUN_10052b224("spendCount",1);
  FUN_10052b1f8("spendCount",1);
  FUN_10052b210(param_1,param_2,1);
  FUN_10052b1e4(param_1,param_2,1);
  FUN_10052b234(param_1,"isa0ga",1);
  FUN_10052b244(param_1,1);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_100104548(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "tile_id";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  FUN_10052b20c("Monetization_OfferPopup_Shown",&puStack_38);
  FUN_10052b1e0("Monetization_OfferPopup_Shown",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_1001045c4(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "productID";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  FUN_10052b20c("Monetization_IAP_Fail",&puStack_38);
  FUN_10052b1e0("Monetization_IAP_Fail",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100104640(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8 [2];
  char local_91;
  undefined8 **local_90 [2];
  char local_79;
  undefined8 **local_78 [2];
  char local_61;
  
  uVar4 = *(undefined4 *)(param_4 + 0xd4);
  FUN_10003330c(local_78,&DAT_101d91198);
  FUN_10003330c(local_90,&DAT_101d91198);
  FUN_10003330c(local_a8,&DAT_101d91198);
  if (((*(int *)(param_4 + 0xb0) != 0) &&
      (std::string::operator=((string *)local_78,*(string **)(param_4 + 0xb8)),
      1 < *(uint *)(param_4 + 0xb0))) &&
     (std::string::operator=((string *)local_90,(string *)(*(long *)(param_4 + 0xb8) + 0x18)),
     2 < *(uint *)(param_4 + 0xb0))) {
    std::string::operator=((string *)local_a8,(string *)(*(long *)(param_4 + 0xb8) + 0x30));
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = "boxSkuID";
  puStack_c0 = &local_b8;
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,param_3);
  local_c8 = "currency";
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  pcVar1 = "ICE";
  if (param_2 == 0) {
    pcVar1 = "glory";
  }
  ppuVar2 = &PTR_s_Economy_Sink_ICE_10184e358;
  if (param_2 == 0) {
    ppuVar2 = &PTR_s_Economy_Sink_Glory_10184e360;
  }
  FUN_10052b124(uVar5,pcVar1);
  local_c8 = "boxProgressPercent";
  FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b18c(param_1);
  local_c8 = "primaryTheme";
  pppuVar3 = (undefined8 ***)local_78[0];
  if (-1 < local_61) {
    pppuVar3 = local_78;
  }
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,pppuVar3);
  local_c8 = "secondaryTheme";
  pppuVar3 = (undefined8 ***)local_90[0];
  if (-1 < local_79) {
    pppuVar3 = local_90;
  }
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,pppuVar3);
  local_c8 = "tertiaryTheme";
  pppuVar3 = (undefined8 ***)local_a8[0];
  if (-1 < local_91) {
    pppuVar3 = local_a8;
  }
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,pppuVar3);
  FUN_10052b20c("Progression_Cardbox_Pull",&puStack_c0);
  FUN_10052b1e0("Progression_Cardbox_Pull",&puStack_c0);
  FUN_10010a220(&puStack_c0,local_b8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = "type1";
  puStack_c0 = &local_b8;
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,"box");
  local_c8 = "type2_boxType";
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,"skinCards");
  local_c8 = "type3_theme1";
  pppuVar3 = (undefined8 ***)local_78[0];
  if (-1 < local_61) {
    pppuVar3 = local_78;
  }
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,pppuVar3);
  local_c8 = "type3_theme2";
  pppuVar3 = (undefined8 ***)local_90[0];
  if (-1 < local_79) {
    pppuVar3 = local_90;
  }
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,pppuVar3);
  local_c8 = "type3_theme3";
  pppuVar3 = (undefined8 ***)local_a8[0];
  if (-1 < local_91) {
    pppuVar3 = local_a8;
  }
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b124(uVar5,pppuVar3);
  local_c8 = "amount";
  uVar5 = FUN_100101fac(&puStack_c0,&local_c8);
  FUN_10052b17c(uVar5,uVar4);
  FUN_10052b20c(*ppuVar2,&puStack_c0);
  FUN_10052b1e0(*ppuVar2,&puStack_c0);
  FUN_10010a220(&puStack_c0,local_b8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return;
}




void FUN_1001049b8(void)

{
  return;
}




void FUN_1001049bc(undefined8 param_1,undefined8 param_2)

{
  FUN_100104640(1,param_1,param_2);
  return;
}




void FUN_1001049cc(void)

{
  return;
}




void FUN_1001049d0(undefined8 param_1,undefined8 param_2)

{
  FUN_100104640(0,param_1,param_2);
  return;
}




void FUN_1001049e0(void)

{
  long lVar1;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_10052b208("Social_FriendRequest");
  FUN_10052b1dc("Social_FriendRequest");
  return;
}




void FUN_100104a24(void)

{
  long lVar1;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_10052b208("Social_FriendAccept");
  FUN_10052b1dc("Social_FriendAccept");
  return;
}




void FUN_100104a68(int param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  pcVar1 = "auto";
  if (param_1 == 0) {
    pcVar1 = "manual";
  }
  local_40 = "auto";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,pcVar1);
  FUN_10052b20c("Social_PresenceBroadcast",&puStack_38);
  FUN_10052b1e0("Social_PresenceBroadcast",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100104af0(void)

{
  FUN_10052b208("Social_CreateGuild");
  FUN_10052b1dc("Social_CreateGuild");
  return;
}




void FUN_100104b1c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "numGuildPlayers";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar1,param_1);
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    FUN_10052b20c("Social_GuildMatch_Finish",&puStack_38);
    FUN_10052b1e0("Social_GuildMatch_Finish",&puStack_38);
  }
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100104ba4(void)

{
  FUN_10052b208("Social_CreateTeam");
  FUN_10052b1dc("Social_CreateTeam");
  return;
}




void FUN_100104bd0(void)

{
  long lVar1;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_10052b208("Social_Guild_Finder_See");
  FUN_10052b1dc("Social_Guild_Finder_See");
  return;
}




void FUN_100104c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "guildType";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "languageCode";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_2);
  local_50 = "minSkillTier";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_3);
  local_50 = "primeTimeUTC";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_4);
  FUN_10052b20c("Social_Guild_Finder_ApplyFilter",&puStack_48);
  FUN_10052b1e0("Social_Guild_Finder_ApplyFilter",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_100104d04(void)

{
  FUN_10052b208("Social_Guild_Finder_JoinFromFinder");
  FUN_10052b1dc("Social_Guild_Finder_JoinFromFinder");
  return;
}




void FUN_100104d30(void)

{
  FUN_10052b208("Social_Guild_Finder_JoinFromInvite");
  FUN_10052b1dc("Social_Guild_Finder_JoinFromInvite");
  return;
}




void FUN_100104d5c(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "guildUUID";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  FUN_10052b20c("Social_Guild_Finder_InfoFromInvite",&puStack_38);
  FUN_10052b1e0("Social_Guild_Finder_InfoFromInvite",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100104dd8(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "guildUUID";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  FUN_10052b20c("Social_Guild_Finder_InfoFromFinder",&puStack_38);
  FUN_10052b1e0("Social_Guild_Finder_InfoFromFinder",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100104e54(void)

{
  FUN_10052b208("Social_Guild_JoinFromGuildPage");
  FUN_10052b1dc("Social_Guild_JoinFromGuildPage");
  return;
}




void FUN_100104e80(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "errorName";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  FUN_10052b20c("Quality_PlatformErrorDialog",&puStack_38);
  FUN_10052b1e0("Quality_PlatformErrorDialog",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100104efc(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100134110();
  if (((*(char *)(lVar2 + 8) == '\0') || (iVar1 = FUN_10012709c(), iVar1 != 0)) &&
     (lVar2 = DAT_101dc7410, DAT_101dc7410 != 0)) {
    *(undefined1 *)(DAT_101dc7410 + 1) = 0;
    uVar3 = NEON_fmov(0xbf800000,4);
    *(undefined8 *)(lVar2 + 4) = uVar3;
    *(undefined4 *)(lVar2 + 0xc) = 0xbf800000;
    FUN_1004e3004(lVar2 + 0x10);
    return;
  }
  return;
}




void FUN_100104f4c(void)

{
  long lVar1;
  uint64_t uVar2;
  
  lVar1 = DAT_101dc7410;
  if (DAT_101dc7410 != 0) {
    uVar2 = _mach_absolute_time();
    *(float *)(DAT_101dc7410 + 8) =
         (float)((double)((uVar2 - *(long *)(lVar1 + 0x10)) * DAT_101d91638) * 1e-09);
  }
  return;
}




void FUN_100104fa8(void)

{
  long lVar1;
  uint64_t uVar2;
  
  lVar1 = DAT_101dc7410;
  if (DAT_101dc7410 != 0) {
    uVar2 = _mach_absolute_time();
    *(float *)(DAT_101dc7410 + 0xc) =
         (float)((double)((uVar2 - *(long *)(lVar1 + 0x10)) * DAT_101d91638) * 1e-09);
  }
  return;
}




void FUN_100105004(void)

{
  long lVar1;
  uint64_t uVar2;
  
  lVar1 = DAT_101dc7410;
  if (DAT_101dc7410 != 0) {
    uVar2 = _mach_absolute_time();
    *(float *)(DAT_101dc7410 + 4) =
         (float)((double)((uVar2 - *(long *)(lVar1 + 0x10)) * DAT_101d91638) * 1e-09);
  }
  return;
}




void FUN_100105060(void)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  uint64_t uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  char *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = FUN_100134110();
  if ((*(char *)(lVar5 + 8) == '\0') || (iVar4 = FUN_10012709c(), iVar4 != 0)) {
    puVar2 = DAT_101dc7410;
    local_58 = &local_50;
    local_50 = 0;
    uStack_48 = 0;
    if (DAT_101dc7410 != (undefined2 *)0x0) {
      fVar8 = *(float *)(DAT_101dc7410 + 2);
      uVar6 = _mach_absolute_time();
      puVar3 = DAT_101dc7410;
      fVar9 = (float)((double)((uVar6 - *(long *)(puVar2 + 8)) * DAT_101d91638) * 1e-09);
      uVar10 = *(undefined4 *)(DAT_101dc7410 + 4);
      *(undefined4 *)(DAT_101dc7410 + 6) = uVar10;
      uVar1 = *(undefined1 *)puVar3;
      local_60 = "firstLoad";
      uVar7 = FUN_100101fac(&local_58,&local_60);
      FUN_10052b17c(uVar7,uVar1);
      local_60 = "loadingTime";
      FUN_100101fac(&local_58,&local_60);
      FUN_10052b18c(fVar8);
      local_60 = "loadingScreenTime";
      FUN_100101fac(&local_58,&local_60);
      FUN_10052b18c(fVar9);
      local_60 = "loadingLevelTime";
      FUN_100101fac(&local_58,&local_60);
      FUN_10052b18c(uVar10);
      if (0.0 < *(float *)(DAT_101dc7410 + 2)) {
        local_60 = "waitingForOthersTime";
        FUN_100101fac(&local_58,&local_60);
        FUN_10052b18c(fVar9 - fVar8);
      }
      puVar2 = DAT_101dc7410;
      uVar7 = NEON_fmov(0xbf800000,4);
      *(undefined8 *)(DAT_101dc7410 + 2) = uVar7;
      *(undefined4 *)(puVar2 + 6) = 0xbf800000;
      *puVar2 = 0;
    }
    FUN_10052b20c("Quality_LoadingScreenFinish",&local_58);
    FUN_10052b1e0("Quality_LoadingScreenFinish",&local_58);
    FUN_10010a220(&local_58,local_50);
  }
  return;
}




void FUN_1001051fc(void)

{
  return;
}




void FUN_100105200(void)

{
  FUN_10052b208("Quality_Client_Switched_LongPoll");
  FUN_10052b1dc("Quality_Client_Switched_LongPoll");
  return;
}




void FUN_10010522c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,char *param_6)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_68 = &local_60;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = "maxPing";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(param_1);
    local_70 = "numPingSpikes";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,param_4);
    local_70 = "avgPing";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(param_2);
    local_70 = "stdDev";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(param_3);
    pcVar1 = "";
    if (param_5 != (char *)0x0) {
      pcVar1 = param_5;
    }
    local_70 = "gameHost";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,pcVar1);
    pcVar1 = "";
    if (param_6 != (char *)0x0) {
      pcVar1 = param_6;
    }
    local_70 = "proxyHost";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,pcVar1);
    FUN_10052b20c("Quality_MatchEnd_Ping_Report",&puStack_68);
    FUN_10052b1e0("Quality_MatchEnd_Ping_Report",&puStack_68);
    FUN_10010a220(&puStack_68,local_60);
  }
  return;
}




void FUN_100105398(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  local_88 = &local_80;
  local_80 = 0;
  local_78 = 0;
  pcVar1 = "";
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  local_90 = "pingHost";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b124(uVar2,pcVar1);
  local_90 = "pingAvg";
  FUN_100101fac(&local_88,&local_90);
  FUN_10052b18c(param_1);
  local_90 = "pingStdDev";
  FUN_100101fac(&local_88,&local_90);
  FUN_10052b18c(param_2);
  local_90 = "pingBucket_25";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_4);
  local_90 = "pingBucket_50";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_5);
  local_90 = "pingBucket_75";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_6);
  local_90 = "pingBucket_100";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_7);
  local_90 = "pingBucket_125";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_8);
  local_90 = "pingBucket_150";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_9);
  local_90 = "pingBucket_175";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_10);
  local_90 = "pingBucket_200";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,(undefined4)param_11);
  local_90 = "pingBucket_225";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_11._4_4_);
  local_90 = "pingBucket_250";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,(undefined4)param_12);
  local_90 = "pingBucket_275";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_12._4_4_);
  local_90 = "pingBucket_300";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,(undefined4)param_13);
  local_90 = "pingBucket_325";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_13._4_4_);
  local_90 = "pingBucket_350";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,(undefined4)param_14);
  local_90 = "pingBucket_375";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_14._4_4_);
  local_90 = "pingBucket_400";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,(undefined4)param_15);
  local_90 = "pingBucket_500";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_15._4_4_);
  local_90 = "pingBucket_750";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,(undefined4)param_16);
  local_90 = "pingBucket_1000";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_16._4_4_);
  local_90 = "pingBucket_2000";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,(undefined4)param_17);
  local_90 = "pingBucket_More";
  uVar2 = FUN_100101fac(&local_88,&local_90);
  FUN_10052b17c(uVar2,param_17._4_4_);
  FUN_10052b20c("Quality_Ping_Report",&local_88);
  FUN_10052b1e0("Quality_Ping_Report",&local_88);
  FUN_10010a220(&local_88,local_80);
  return;
}




void FUN_1001057b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_10034cd20(param_3);
  local_50 = "mode";
  uVar3 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar3,uVar2);
  local_50 = "hero";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar2,param_2);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar4;
  local_50 = "eloTier5v5";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar4;
  local_50 = "eloTier3v3";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b17c(uVar2,uVar1);
  local_50 = "matchClock";
  FUN_100101fac(&local_48,&local_50);
  FUN_10052b18c(param_1);
  lVar5 = FUN_100134110();
  if (*(char *)(lVar5 + 8) == '\0') {
    FUN_10052b20c("Balance_Hero_Win",&local_48);
    FUN_10052b1e0("Balance_Hero_Win",&local_48);
  }
  FUN_10010a220(&local_48,local_40);
  return;
}




void FUN_1001058f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = &local_40;
    uVar3 = FUN_10034cd20(param_3);
    local_50 = "mode";
    uVar4 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar4,uVar3);
    local_50 = "hero";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar3,param_2);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,0);
    uVar1 = *puVar5;
    local_50 = "eloTier5v5";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,1);
    uVar1 = *puVar5;
    local_50 = "eloTier3v3";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    local_50 = "matchClock";
    FUN_100101fac(&local_48,&local_50);
    FUN_10052b18c(param_1);
    FUN_10052b20c("Balance_Hero_Lose",&local_48);
    FUN_10052b1e0("Balance_Hero_Lose",&local_48);
    FUN_10010a220(&local_48,local_40);
  }
  return;
}




void FUN_100105a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_50 = 0;
    uStack_48 = 0;
    local_58 = &local_50;
    uVar3 = FUN_10034cd20(param_1);
    local_60 = "mode";
    uVar4 = FUN_100101fac(&local_58,&local_60);
    FUN_10052b124(uVar4,uVar3);
    uVar3 = FUN_10034cd14();
    local_60 = "botDifficulty";
    FUN_100101fac(&local_58,&local_60);
    FUN_10052b18c(uVar3);
    local_60 = "hero";
    uVar3 = FUN_100101fac(&local_58,&local_60);
    FUN_10052b124(uVar3,param_2);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,0);
    uVar1 = *puVar5;
    local_60 = "eloTier5v5";
    uVar3 = FUN_100101fac(&local_58,&local_60);
    FUN_10052b17c(uVar3,uVar1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,1);
    uVar1 = *puVar5;
    local_60 = "eloTier3v3";
    uVar3 = FUN_100101fac(&local_58,&local_60);
    FUN_10052b17c(uVar3,uVar1);
    local_60 = "pathName";
    uVar3 = FUN_100101fac(&local_58,&local_60);
    FUN_10052b124(uVar3,param_3);
    FUN_10052b20c("Balance_RecommendedPath_Selected",&local_58);
    FUN_10052b1e0("Balance_RecommendedPath_Selected",&local_58);
    FUN_10010a220(&local_58,local_50);
  }
  return;
}




void FUN_100105bb8(int param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar3 = FUN_100134110();
  if (*(char *)(lVar3 + 8) == '\0') {
    puStack_58 = &local_50;
    local_50 = 0;
    uStack_48 = 0;
    pcVar1 = "enemy";
    if (param_1 == 0) {
      pcVar1 = "ally";
    }
    local_60 = "team";
    uVar4 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar4,pcVar1);
    plVar2 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar2 = param_3;
    }
    local_60 = "matchId";
    uVar4 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar4,plVar2);
    uVar4 = FUN_10034cd20(param_2);
    local_60 = "mode";
    uVar5 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar5,uVar4);
    uVar4 = FUN_10034cd14();
    local_60 = "botDifficulty";
    FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b18c(uVar4);
    FUN_10052b20c("Game_Karma_Upvote",&puStack_58);
    FUN_10052b1e0("Game_Karma_Upvote",&puStack_58);
    FUN_10010a220(&puStack_58,local_50);
  }
  return;
}




void FUN_100105cf4(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar3 = FUN_100134110();
  if (*(char *)(lVar3 + 8) == '\0') {
    puStack_58 = &local_50;
    local_50 = 0;
    uStack_48 = 0;
    pcVar1 = "ally";
    if (param_2 == 0) {
      pcVar1 = "enemy";
    }
    local_60 = "team";
    uVar4 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar4,pcVar1);
    local_60 = "type";
    uVar4 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar4,param_1);
    plVar2 = (long *)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      plVar2 = param_4;
    }
    local_60 = "matchId";
    uVar4 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar4,plVar2);
    uVar4 = FUN_10034cd20(param_3);
    local_60 = "mode";
    uVar5 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar5,uVar4);
    uVar4 = FUN_10034cd14();
    local_60 = "botDifficulty";
    FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b18c(uVar4);
    FUN_10052b20c("Game_Karma_Downvote",&puStack_58);
    FUN_10052b1e0("Game_Karma_Downvote",&puStack_58);
    FUN_10010a220(&puStack_58,local_50);
  }
  return;
}




void FUN_100105e54(void)

{
  FUN_10052b208("Game_Karma_BanReceived");
  FUN_10052b1dc("Game_Karma_BanReceived");
  return;
}




void FUN_100105e80(void)

{
  FUN_10052b208("Game_Karma_WarningReceived");
  FUN_10052b1dc("Game_Karma_WarningReceived");
  return;
}




void FUN_100105eac(void)

{
  FUN_10052b208("Game_Elo_ForgivenReceived");
  FUN_10052b1dc("Game_Elo_ForgivenReceived");
  return;
}




void FUN_100105ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  char *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_78 = &local_70;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = "hero";
    uVar2 = FUN_100101fac(&puStack_78,&local_80);
    FUN_10052b124(uVar2,param_1);
    local_80 = "talent";
    uVar2 = FUN_100101fac(&puStack_78,&local_80);
    FUN_10052b124(uVar2,param_2);
    local_80 = "rarity";
    uVar2 = FUN_100101fac(&puStack_78,&local_80);
    FUN_10052b17c(uVar2,param_3);
    local_80 = "newLevel";
    uVar2 = FUN_100101fac(&puStack_78,&local_80);
    FUN_10052b17c(uVar2,param_4);
    local_80 = "glorySpent";
    uVar2 = FUN_100101fac(&puStack_78,&local_80);
    FUN_10052b17c(uVar2,param_5);
    FUN_10052b20c("Progression_Talent_Upgrade",&puStack_78);
    FUN_10052b1e0("Progression_Talent_Upgrade",&puStack_78);
    FUN_10010a220(&puStack_78,local_70);
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = "type1";
  puStack_78 = &local_70;
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,"talent");
  local_80 = "type2_talent_action";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,"upgrading");
  local_80 = "type3_talent_upgrade_hero";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,param_1);
  local_80 = "type4_talent_upgrade_rarity";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar2,param_3);
  local_80 = "type5_talent_upgrade_talent";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,param_2);
  local_80 = "type6_talent_upgrade_level";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar2,param_4);
  local_80 = "amount";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar2,param_5);
  FUN_10052b20c(PTR_s_Economy_Sink_Glory_10184e360,&puStack_78);
  FUN_10052b1e0(PTR_s_Economy_Sink_Glory_10184e360,&puStack_78);
  FUN_10010a220(&puStack_78,local_70);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = "type1";
  puStack_78 = &local_70;
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,"talent");
  local_80 = "type2_talent_action";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,"upgrading");
  local_80 = "type3_talent_upgrade_hero";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,param_1);
  local_80 = "type4_talent_upgrade_rarity";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar2,param_3);
  local_80 = "type5_talent_upgrade_talent";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar2,param_2);
  local_80 = "type6_talent_upgrade_level";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar2,param_4);
  local_80 = "amount";
  uVar2 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar2,param_6);
  FUN_10052b20c(PTR_s_Economy_Sink_Talent_10184e388,&puStack_78);
  FUN_10052b1e0(PTR_s_Economy_Sink_Talent_10184e388,&puStack_78);
  FUN_10010a220(&puStack_78,local_70);
  return;
}




void FUN_100106228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  char *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  local_70 = "hero";
  puStack_68 = &local_60;
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar1,param_1);
  local_70 = "talent";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar1,param_2);
  local_70 = "rarity";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar1,param_3);
  local_70 = "quantity";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar1,param_4);
  local_70 = "totalGloryPrice";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar1,param_5);
  FUN_10052b20c("Progression_Talent_DailyPick_Purchase",&puStack_68);
  FUN_10052b1e0("Progression_Talent_DailyPick_Purchase",&puStack_68);
  FUN_10010a220(&puStack_68,local_60);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = "type1";
  puStack_68 = &local_60;
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar1,"talent");
  local_70 = "type2_talent_action";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar1,"buyDailyPick");
  local_70 = "type3_talent_dailyPick_hero";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar1,param_1);
  local_70 = "type4_talent_dailyPick_rarity";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar1,param_3);
  local_70 = "type5_talent_dailyPick_talent";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b124(uVar1,param_2);
  local_70 = "amount";
  uVar1 = FUN_100101fac(&puStack_68,&local_70);
  FUN_10052b17c(uVar1,param_5);
  FUN_10052b20c(PTR_s_Economy_Sink_Glory_10184e360,&puStack_68);
  FUN_10052b1e0(PTR_s_Economy_Sink_Glory_10184e360,&puStack_68);
  FUN_10010a220(&puStack_68,local_60);
  return;
}




void FUN_10010643c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    uVar3 = FUN_100341d4c();
    pcVar4 = (char *)FUN_10034260c(uVar3,param_2);
    pcVar1 = "talent_none";
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4;
    }
    puStack_68 = &local_60;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = "hero";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,param_1);
    local_70 = "talent";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,pcVar1);
    local_70 = "rarity";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,param_3);
    local_70 = "level";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,param_4);
    uVar3 = FUN_10034cd20(param_5);
    local_70 = "mode";
    uVar5 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar5,uVar3);
    uVar3 = FUN_10034cd14();
    local_70 = "botDifficulty";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(uVar3);
    FUN_10052b20c("Balance_Talent_Pick",&puStack_68);
    FUN_10052b1e0("Balance_Talent_Pick",&puStack_68);
    FUN_10010a220(&puStack_68,local_60);
  }
  return;
}




void FUN_1001065bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    uVar3 = FUN_100341d4c();
    pcVar4 = (char *)FUN_10034260c(uVar3,param_2);
    pcVar1 = "talent_none";
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4;
    }
    puStack_68 = &local_60;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = "hero";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,param_1);
    local_70 = "talent";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar3,pcVar1);
    local_70 = "rarity";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,param_3);
    local_70 = "level";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,param_4);
    uVar3 = FUN_10034cd20(param_5);
    local_70 = "mode";
    uVar5 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b124(uVar5,uVar3);
    uVar3 = FUN_10034cd14();
    local_70 = "botDifficulty";
    FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b18c(uVar3);
    local_70 = "win";
    uVar3 = FUN_100101fac(&puStack_68,&local_70);
    FUN_10052b17c(uVar3,param_6);
    FUN_10052b20c("Balance_Talent_MatchEnd",&puStack_68);
    FUN_10052b1e0("Balance_Talent_MatchEnd",&puStack_68);
    FUN_10010a220(&puStack_68,local_60);
  }
  return;
}




void FUN_100106760(void)

{
  long lVar1;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_10052b208("Game_Karma_JusticeServedReceived");
  FUN_10052b1dc("Game_Karma_JusticeServedReceived");
  return;
}




void FUN_1001067a4(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  local_40 = "reason";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,plVar1);
  FUN_10052b20c("Game_Penalty_QbanReceived",&puStack_38);
  FUN_10052b1e0("Game_Penalty_QbanReceived",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_10010682c(void)

{
  long lVar1;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_10052b208("Onboarding_Tutorial_Exit");
  FUN_10052b1dc("Onboarding_Tutorial_Exit");
  return;
}




void FUN_100106870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint64_t uVar3;
  ulong uVar4;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_101dc7410 != 0) {
    FUN_1004e3004(DAT_101dc7410 + 0x18);
  }
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_58 = &local_50;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = "tag1";
    uVar2 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar2,param_1);
    local_60 = "tag2";
    uVar2 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar2,param_2);
    local_60 = "tag3";
    uVar2 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar2,param_3);
    lVar1 = DAT_101dc7410;
    if (DAT_101dc7410 != 0) {
      uVar3 = _mach_absolute_time();
      uVar4 = (uVar3 - *(long *)(lVar1 + 0x18)) * DAT_101d91638;
      local_60 = "timeSinceLastOnboardingFunnel";
      FUN_100101fac(&puStack_58,&local_60);
      FUN_10052b18c((float)((double)uVar4 * 1e-09));
    }
    FUN_10052b20c("Onboarding_Funnel",&puStack_58);
    FUN_10052b1e0("Onboarding_Funnel",&puStack_58);
    FUN_10010a220(&puStack_58,local_50);
  }
  return;
}




void FUN_1001069bc(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_1 == 2) {
    pcVar2 = "Tutorial_1_Complete";
    pcVar1 = "vfr3mn";
  }
  else if (param_1 == 6) {
    pcVar2 = "Tutorial_3_Complete";
    pcVar1 = "bi9qca";
  }
  else {
    if (param_1 != 4) {
      return;
    }
    pcVar2 = "Tutorial_2_Complete";
    pcVar1 = "9vt10s";
  }
  FUN_10052b230(pcVar1);
  FUN_10052b23c(pcVar2);
  return;
}




void FUN_100106a38(void)

{
  FUN_10052b230("ta3v4m");
  FUN_10052b23c("Tutorial_4_Complete");
  FUN_10052b230("b32e1n");
  return;
}




void FUN_100106a68(undefined8 param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  pcVar1 = "new";
  if ((int)param_1 == 0) {
    pcVar1 = "experienced";
  }
  local_40 = "areYouNew";
  uVar2 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar2,pcVar1);
  FUN_10052b20c("Onboarding_AreYouNew",&puStack_38);
  FUN_10052b1e0("Onboarding_AreYouNew",&puStack_38);
  FUN_10052b21c("Onboarding_AreYouNew",param_1);
  FUN_10052b1f0("Onboarding_AreYouNew",param_1);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100106b14(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = FUN_100134110();
  if (*(char *)(lVar3 + 8) == '\0') {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = &local_40;
    uVar4 = FUN_10034cd20(param_1);
    local_50 = "mode";
    uVar5 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar5,uVar4);
    uVar4 = FUN_10034cd14();
    local_50 = "botDifficulty";
    FUN_100101fac(&local_48,&local_50);
    FUN_10052b18c(uVar4);
    uVar4 = FUN_100327e00();
    puVar6 = (undefined4 *)FUN_100327f2c(uVar4,0);
    uVar1 = *puVar6;
    local_50 = "eloTier5v5";
    uVar4 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar4,uVar1);
    uVar4 = FUN_100327e00();
    puVar6 = (undefined4 *)FUN_100327f2c(uVar4,1);
    uVar1 = *puVar6;
    local_50 = "eloTier3v3";
    uVar4 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar4,uVar1);
    lVar3 = FUN_10015d3ec();
    uVar2 = *(undefined1 *)(lVar3 + 0x567a);
    local_50 = "bInParty";
    uVar4 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar4,uVar2);
    FUN_10052b20c("Lobby_Created",&local_48);
    FUN_10052b1e0("Lobby_Created",&local_48);
    FUN_10010a220(&local_48,local_40);
  }
  return;
}




void FUN_100106c68(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_30 = 0;
    uStack_28 = 0;
    local_38 = &local_30;
    uVar3 = FUN_10034cd20(param_1);
    local_40 = "mode";
    uVar4 = FUN_100101fac(&local_38,&local_40);
    FUN_10052b124(uVar4,uVar3);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,0);
    uVar1 = *puVar5;
    local_40 = "eloTier5v5";
    uVar3 = FUN_100101fac(&local_38,&local_40);
    FUN_10052b17c(uVar3,uVar1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,1);
    uVar1 = *puVar5;
    local_40 = "eloTier3v3";
    uVar3 = FUN_100101fac(&local_38,&local_40);
    FUN_10052b17c(uVar3,uVar1);
    FUN_10052b20c("DraftLobby_Started",&local_38);
    FUN_10052b1e0("DraftLobby_Started",&local_38);
    FUN_10010a220(&local_38,local_30);
  }
  return;
}




void FUN_100106d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = &local_40;
    uVar3 = FUN_10034cd20(param_2);
    local_50 = "mode";
    uVar4 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar4,uVar3);
    local_50 = "hero";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar3,param_1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,0);
    uVar1 = *puVar5;
    local_50 = "eloTier5v5";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,1);
    uVar1 = *puVar5;
    local_50 = "eloTier3v3";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    local_50 = "turn";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,param_3);
    FUN_10052b20c("DraftLobby_Hero_Ban",&local_48);
    FUN_10052b1e0("DraftLobby_Hero_Ban",&local_48);
    FUN_10010a220(&local_48,local_40);
  }
  return;
}




void FUN_100106ea8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  uVar2 = FUN_10034cd20();
  local_40 = "mode";
  uVar3 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar4;
  local_40 = "eloTier5v5";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar4;
  local_40 = "eloTier3v3";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  local_40 = "turn";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,param_2);
  FUN_10052b20c("DraftLobby_Skipped_Ban",&local_38);
  FUN_10052b1e0("DraftLobby_Skipped_Ban",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_100106fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = &local_40;
    uVar3 = FUN_10034cd20(param_2);
    local_50 = "mode";
    uVar4 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar4,uVar3);
    local_50 = "hero";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar3,param_1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,0);
    uVar1 = *puVar5;
    local_50 = "eloTier5v5";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,1);
    uVar1 = *puVar5;
    local_50 = "eloTier3v3";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    local_50 = "turn";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,param_3);
    FUN_10052b20c("DraftLobby_Hero_Pick",&local_48);
    FUN_10052b1e0("DraftLobby_Hero_Pick",&local_48);
    FUN_10010a220(&local_48,local_40);
  }
  return;
}




void FUN_1001070f8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  uVar2 = FUN_10034cd20();
  local_40 = "mode";
  uVar3 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar4;
  local_40 = "eloTier5v5";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar4;
  local_40 = "eloTier3v3";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  FUN_10052b20c("DraftLobby_Swap_Accepted",&local_38);
  FUN_10052b1e0("DraftLobby_Swap_Accepted",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_1001071dc(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  uVar2 = FUN_10034cd20();
  local_40 = "mode";
  uVar3 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar4;
  local_40 = "eloTier5v5";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar4;
  local_40 = "eloTier3v3";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  FUN_10052b20c("DraftLobby_Swap_Rejected",&local_38);
  FUN_10052b1e0("DraftLobby_Swap_Rejected",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_1001072c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &local_40;
  uVar2 = FUN_100327e00();
  puVar3 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar3;
  local_50 = "eloTier5v5";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar3 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar3;
  local_50 = "eloTier3v3";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b17c(uVar2,uVar1);
  local_50 = "turn";
  uVar2 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b17c(uVar2,param_1);
  uVar2 = FUN_10034cd20(param_2);
  local_50 = "mode";
  uVar4 = FUN_100101fac(&local_48,&local_50);
  FUN_10052b124(uVar4,uVar2);
  FUN_10052b20c("DraftLobby_Dodge_Victimed",&local_48);
  FUN_10052b1e0("DraftLobby_Dodge_Victimed",&local_48);
  FUN_10010a220(&local_48,local_40);
  return;
}




void FUN_1001073d8(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  uVar1 = FUN_10034cd20();
  local_40 = "mode";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b124(uVar2,uVar1);
  local_40 = "unmute";
  uVar1 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar1,param_2 ^ 1);
  FUN_10052b20c("DraftLobby_Muted",&local_38);
  FUN_10052b1e0("DraftLobby_Muted",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_100107484(void)

{
  return;
}




void FUN_100107488(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_100134110();
  if (*(char *)(lVar2 + 8) == '\0') {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = &local_40;
    FUN_1003467f8();
    uVar3 = FUN_10034cd20();
    local_50 = "mode";
    uVar4 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar4,uVar3);
    uVar3 = FUN_10034cd14();
    local_50 = "botDifficulty";
    FUN_100101fac(&local_48,&local_50);
    FUN_10052b18c(uVar3);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,0);
    uVar1 = *puVar5;
    local_50 = "eloTier5v5";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    uVar3 = FUN_100327e00();
    puVar5 = (undefined4 *)FUN_100327f2c(uVar3,1);
    uVar1 = *puVar5;
    local_50 = "eloTier3v3";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b17c(uVar3,uVar1);
    local_50 = "messageKey";
    uVar3 = FUN_100101fac(&local_48,&local_50);
    FUN_10052b124(uVar3,param_1);
    FUN_10052b20c("Game_HUDQUickMessage",&local_48);
    FUN_10052b1e0("Game_HUDQUickMessage",&local_48);
    FUN_10010a220(&local_48,local_40);
  }
  return;
}




void FUN_1001075d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "reason";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  uVar1 = FUN_10034cd20(param_2);
  local_50 = "mode";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,uVar1);
  uVar1 = FUN_10034cd14();
  local_50 = "botDifficulty";
  FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b18c(uVar1);
  FUN_10052b20c("Quality_Post_Match_Survey",&puStack_48);
  FUN_10052b1e0("Quality_Post_Match_Survey",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_1001076ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_38 = &local_30;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = "tab_index";
    uVar2 = FUN_100101fac(&puStack_38,&local_40);
    FUN_10052b17c(uVar2,param_1);
    FUN_10052b20c("Market_Tab_Viewed",&puStack_38);
    FUN_10052b1e0("Market_Tab_Viewed",&puStack_38);
    FUN_10010a220(&puStack_38,local_30);
  }
  return;
}




void FUN_100107734(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "key";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,param_1);
  local_50 = "tags";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,param_2);
  pcVar1 = "true";
  if (param_3 == 0) {
    pcVar1 = "false";
  }
  local_50 = "interest";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,pcVar1);
  pcVar1 = "true";
  if (param_4 == 0) {
    pcVar1 = "false";
  }
  local_50 = "leavingApp";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,pcVar1);
  lVar3 = FUN_100134110();
  if (*(char *)(lVar3 + 8) == '\0') {
    FUN_10052b20c("NewsFeed_Item_Clicked",&puStack_48);
    FUN_10052b1e0("NewsFeed_Item_Clicked",&puStack_48);
  }
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_100107850(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = "skuId";
  puStack_58 = &local_50;
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar3,param_1);
  local_60 = "currency";
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar3,param_2);
  local_60 = "price";
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar3,param_3);
  local_60 = "gift";
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar3,param_5);
  local_60 = "fromInventory";
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar3,param_4);
  FUN_10052b20c("Progression_BoostPurchase",&puStack_58);
  FUN_10052b1e0("Progression_BoostPurchase",&puStack_58);
  FUN_10010a220(&puStack_58,local_50);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = "type1";
  puStack_58 = &local_50;
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar3,"boost");
  local_60 = "type2_skuId";
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar3,param_1);
  pcVar1 = "gifted";
  if ((int)param_5 == 0) {
    pcVar1 = "self";
  }
  local_60 = "type3_gifted";
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar3,pcVar1);
  local_60 = "amount";
  uVar3 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar3,param_3);
  iVar2 = _strcmp(param_2,"silver");
  if (iVar2 == 0) {
    ppuVar4 = &PTR_s_Economy_Sink_Glory_10184e360;
  }
  else {
    iVar2 = _strcmp(param_2,"gold");
    if (iVar2 != 0) goto LAB_100107a48;
    ppuVar4 = &PTR_s_Economy_Sink_ICE_10184e358;
  }
  FUN_10052b20c(*ppuVar4,&puStack_58);
  FUN_10052b1e0(*ppuVar4,&puStack_58);
LAB_100107a48:
  FUN_10010a220(&puStack_58,local_50);
  return;
}




void FUN_100107a6c(char *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "currency";
  puStack_48 = &local_40;
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,param_1);
  local_50 = "price";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar2,param_2);
  local_50 = "rerollNumber";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar2,param_3);
  FUN_10052b20c("Progression_Casual_Aral_Reroll",&puStack_48);
  FUN_10052b1e0("Progression_Casual_Aral_Reroll",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "type1";
  puStack_48 = &local_40;
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,"casual_aral_reroll");
  local_50 = "amount";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar2,param_2);
  iVar1 = _strcmp(param_1,"silver");
  if (iVar1 == 0) {
    ppuVar3 = &PTR_s_Economy_Sink_Glory_10184e360;
  }
  else {
    iVar1 = _strcmp(param_1,"gold");
    if (iVar1 != 0) goto LAB_100107bc0;
    ppuVar3 = &PTR_s_Economy_Sink_ICE_10184e358;
  }
  FUN_10052b20c(*ppuVar3,&puStack_48);
  FUN_10052b1e0(*ppuVar3,&puStack_48);
LAB_100107bc0:
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_100107be0(uint *param_1)

{
  char ***pppcVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  char *local_e0;
  char **local_d8 [2];
  char local_c1;
  void *local_c0 [2];
  char local_a9;
  void *local_a8 [2];
  char local_91;
  char **local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_1 != (uint *)0x0) {
    lVar4 = FUN_100134110();
    if (*(char *)(lVar4 + 8) == '\0') {
      local_78 = &local_70;
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = param_1 + 0x12;
      if (*(char *)((long)param_1 + 0x5f) < '\0') {
        puVar8 = *(uint **)puVar8;
      }
      local_90 = (char **)0x1013d2688;
      uVar5 = FUN_100101fac(&local_78,&local_90);
      FUN_10052b124(uVar5,puVar8);
      FUN_10032722c(&local_90,param_1[0x10]);
      pppcVar1 = (char ***)local_90;
      if (-1 < lStack_80) {
        pppcVar1 = &local_90;
      }
      local_d8[0] = (char **)0x1013d4045;
      uVar5 = FUN_100101fac(&local_78,local_d8);
      FUN_10052b124(uVar5,pppcVar1);
      if (lStack_80 < 0) {
        operator_delete(local_90);
      }
      uVar5 = FUN_100327400(param_1[0x11]);
      local_90 = (char **)0x1013dacee;
      uVar6 = FUN_100101fac(&local_78,&local_90);
      FUN_10052b124(uVar6,uVar5);
      uVar5 = FUN_100319d14(param_1);
      local_90 = (char **)0x1013dacf6;
      uVar6 = FUN_100101fac(&local_78,&local_90);
      FUN_10052b17c(uVar6,uVar5);
      uVar2 = param_1[0x33];
      local_90 = (char **)0x1013dacff;
      uVar5 = FUN_100101fac(&local_78,&local_90);
      FUN_10052b17c(uVar5,uVar2);
      FUN_10052b20c("Progression_Quest_Reward_Redeemed",&local_78);
      FUN_10052b1e0("Progression_Quest_Reward_Redeemed",&local_78);
      FUN_10010a220(&local_78,local_70);
    }
    if (*param_1 != 0) {
      lVar4 = *(long *)(param_1 + 2);
      lVar7 = lVar4 + (ulong)*param_1 * 0x58;
      do {
        if (*(uint *)(lVar4 + 0x48) != 0) {
          lVar10 = (ulong)*(uint *)(lVar4 + 0x48) * 0x70;
          lVar9 = *(long *)(lVar4 + 0x50) + 0x18;
          do {
            local_70 = 0;
            uStack_68 = 0;
            local_90 = (char **)0x1013d9fda;
            local_78 = &local_70;
            uVar5 = FUN_100101fac(&local_78,&local_90);
            FUN_10052b124(uVar5,"quest_reward");
            FUN_10032722c(&local_90,param_1[0x10]);
            pppcVar1 = (char ***)local_90;
            if (-1 < lStack_80) {
              pppcVar1 = &local_90;
            }
            local_d8[0] = (char **)0x1013dad38;
            uVar5 = FUN_100101fac(&local_78,local_d8);
            FUN_10052b124(uVar5,pppcVar1);
            if (lStack_80 < 0) {
              operator_delete(local_90);
            }
            uVar5 = FUN_100327400(param_1[0x11]);
            local_90 = (char **)0x1013dad48;
            uVar6 = FUN_100101fac(&local_78,&local_90);
            FUN_10052b124(uVar6,uVar5);
            uVar3 = *(undefined4 *)(lVar9 + 0x18);
            local_90 = (char **)0x1013d404a;
            uVar5 = FUN_100101fac(&local_78,&local_90);
            FUN_10052b17c(uVar5,uVar3);
            FUN_10003330c(local_a8,lVar9 + -0x18);
            FUN_10003330c(local_c0,lVar9);
            FUN_100107fd8(local_a8,local_c0,&local_78);
            if (local_a9 < '\0') {
              operator_delete(local_c0[0]);
            }
            if (local_91 < '\0') {
              operator_delete(local_a8[0]);
            }
            if (0 < (int)param_1[0x33]) {
              local_88 = (char *)0x0;
              lStack_80 = 0;
              local_d8[0] = (char **)0x1013d9fda;
              local_90 = (char **)&local_88;
              uVar5 = FUN_100101fac(&local_90,local_d8);
              FUN_10052b124(uVar5,"quest_reward");
              FUN_10032722c(local_d8,param_1[0x10]);
              pppcVar1 = (char ***)local_d8[0];
              if (-1 < local_c1) {
                pppcVar1 = local_d8;
              }
              local_e0 = "type2_questType";
              uVar5 = FUN_100101fac(&local_90,&local_e0);
              FUN_10052b124(uVar5,pppcVar1);
              if (local_c1 < '\0') {
                operator_delete(local_d8[0]);
              }
              uVar5 = FUN_100327400(param_1[0x11]);
              local_d8[0] = (char **)0x1013dad48;
              uVar6 = FUN_100101fac(&local_90,local_d8);
              FUN_10052b124(uVar6,uVar5);
              uVar2 = param_1[0x33];
              local_d8[0] = (char **)0x1013d404a;
              uVar5 = FUN_100101fac(&local_90,local_d8);
              FUN_10052b17c(uVar5,uVar2);
              FUN_10052b20c(PTR_s_Economy_Tap_XP_10184e338,&local_90);
              FUN_10052b1e0(PTR_s_Economy_Tap_XP_10184e338,&local_90);
              FUN_10010a220(&local_90,local_88);
            }
            FUN_10010a220(&local_78,local_70);
            lVar9 = lVar9 + 0x70;
            lVar10 = lVar10 + -0x70;
          } while (lVar10 != 0);
        }
        lVar4 = lVar4 + 0x58;
      } while (lVar4 != lVar7);
    }
  }
  return;
}




void FUN_100107fd8(ulong param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  char **ppcVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  ulong *puVar14;
  long *plVar15;
  undefined4 uVar16;
  char *local_148 [2];
  char local_131;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  bVar13 = *(byte *)(param_1 + 0x17);
  uVar11 = (ulong)bVar13;
  uVar12 = *(ulong *)(param_1 + 8);
  uVar1 = uVar12;
  if (-1 < (char)bVar13) {
    uVar1 = uVar11;
  }
  if (uVar1 == 8) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d2471);
    if (iVar2 != 0) {
      bVar13 = *(byte *)(param_1 + 0x17);
      uVar11 = (ulong)bVar13;
      uVar12 = *(ulong *)(param_1 + 8);
      goto LAB_100108054;
    }
    bVar13 = *(byte *)((long)param_2 + 0x17);
    uVar11 = (ulong)bVar13;
    uVar12 = param_2[1];
    uVar1 = uVar12;
    if (-1 < (char)bVar13) {
      uVar1 = uVar11;
    }
    if (uVar1 == 6) {
      iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d247a);
      if (iVar2 != 0) {
        bVar13 = *(byte *)((long)param_2 + 0x17);
        uVar11 = (ulong)bVar13;
        uVar12 = param_2[1];
        goto LAB_100108348;
      }
      FUN_10052b20c(PTR_s_Economy_Tap_Glory_10184e2d8,param_3);
      puVar7 = PTR_s_Economy_Tap_Glory_10184e2d8;
LAB_100108a14:
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        FUN_10052b1e0(puVar7,param_3);
        return;
      }
      goto LAB_100108adc;
    }
LAB_100108348:
    uVar1 = uVar12;
    if (-1 < (char)bVar13) {
      uVar1 = uVar11;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d24d0);
      if (iVar2 == 0) {
        FUN_10052b20c(PTR_s_Economy_Tap_ICE_10184e2d0,param_3);
        puVar7 = PTR_s_Economy_Tap_ICE_10184e2d0;
        goto LAB_100108a14;
      }
      bVar13 = *(byte *)((long)param_2 + 0x17);
      uVar11 = (ulong)bVar13;
      uVar12 = param_2[1];
    }
    uVar1 = uVar12;
    if (-1 < (char)bVar13) {
      uVar1 = uVar11;
    }
    if (uVar1 == 7) {
      iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d251e);
      if (iVar2 == 0) {
        FUN_10052b20c(PTR_s_Economy_Tap_Essence_10184e2f8,param_3);
        puVar7 = PTR_s_Economy_Tap_Essence_10184e2f8;
        goto LAB_100108a14;
      }
      bVar13 = *(byte *)((long)param_2 + 0x17);
      uVar11 = (ulong)bVar13;
      uVar12 = param_2[1];
    }
    uVar1 = uVar12;
    if (-1 < (char)bVar13) {
      uVar1 = uVar11;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d253c);
      if (iVar2 == 0) {
        FUN_10052b20c(PTR_s_Economy_Tap_Opal_10184e2e0,param_3);
        puVar7 = PTR_s_Economy_Tap_Opal_10184e2e0;
        goto LAB_100108a14;
      }
      bVar13 = *(byte *)((long)param_2 + 0x17);
      uVar11 = (ulong)bVar13;
      uVar12 = param_2[1];
    }
    uVar1 = uVar12;
    if (-1 < (char)bVar13) {
      uVar1 = uVar11;
    }
    if (uVar1 == 0xc) {
      iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d2554);
      if (iVar2 == 0) {
        FUN_10052b20c(PTR_s_Economy_Tap_Seasonal_Key_10184e2e8,param_3);
        puVar7 = PTR_s_Economy_Tap_Seasonal_Key_10184e2e8;
        goto LAB_100108a14;
      }
      bVar13 = *(byte *)((long)param_2 + 0x17);
      uVar11 = (ulong)bVar13;
      uVar12 = param_2[1];
    }
    if (-1 < (char)bVar13) {
      uVar12 = uVar11;
    }
    if ((uVar12 == 8) &&
       (iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d257c),
       iVar2 == 0)) {
      FUN_10052b20c(PTR_s_Economy_Tap_Epic_Key_10184e2f0,param_3);
      puVar7 = PTR_s_Economy_Tap_Epic_Key_10184e2f0;
      goto LAB_100108a14;
    }
  }
  else {
LAB_100108054:
    uVar1 = uVar12;
    if (-1 < (char)bVar13) {
      uVar1 = uVar11;
    }
    if (uVar1 == 4) {
      iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d259c);
      if (iVar2 != 0) {
        bVar13 = *(byte *)(param_1 + 0x17);
        uVar11 = (ulong)bVar13;
        uVar12 = *(ulong *)(param_1 + 8);
        goto LAB_100108094;
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        param_2 = (ulong *)*param_2;
      }
      local_148[0] = "type4";
      uVar5 = FUN_100101fac(param_3,local_148);
      FUN_10052b124(uVar5,param_2);
      FUN_10052b20c(PTR_s_Economy_Tap_Buff_10184e300,param_3);
      ppcVar8 = (char **)PTR_s_Economy_Tap_Buff_10184e300;
    }
    else {
LAB_100108094:
      uVar1 = uVar12;
      if (-1 < (char)bVar13) {
        uVar1 = uVar11;
      }
      if (uVar1 == 4) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25c4);
        if (iVar2 == 0) {
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            param_2 = (ulong *)*param_2;
          }
          local_148[0] = "type4";
          uVar5 = FUN_100101fac(param_3,local_148);
          FUN_10052b124(uVar5,param_2);
          FUN_10052b20c(PTR_s_Economy_Tap_Hero_10184e308,param_3);
          ppcVar8 = (char **)PTR_s_Economy_Tap_Hero_10184e308;
          goto LAB_100108aa4;
        }
        bVar13 = *(byte *)(param_1 + 0x17);
        uVar11 = (ulong)bVar13;
        uVar12 = *(ulong *)(param_1 + 8);
      }
      uVar1 = uVar12;
      if (-1 < (char)bVar13) {
        uVar1 = uVar11;
      }
      if (uVar1 == 4) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25b2);
        if (iVar2 == 0) {
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            param_2 = (ulong *)*param_2;
          }
          local_148[0] = "type4";
          uVar5 = FUN_100101fac(param_3,local_148);
          FUN_10052b124(uVar5,param_2);
          FUN_10052b20c(PTR_s_Economy_Tap_Skin_10184e310,param_3);
          ppcVar8 = (char **)PTR_s_Economy_Tap_Skin_10184e310;
          goto LAB_100108aa4;
        }
        bVar13 = *(byte *)(param_1 + 0x17);
        uVar11 = (ulong)bVar13;
        uVar12 = *(ulong *)(param_1 + 8);
      }
      uVar1 = uVar12;
      if (-1 < (char)bVar13) {
        uVar1 = uVar11;
      }
      if (uVar1 == 4) {
        iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25a1);
        if (iVar2 != 0) {
          bVar13 = *(byte *)(param_1 + 0x17);
          uVar11 = (ulong)bVar13;
          uVar12 = *(ulong *)(param_1 + 8);
          goto LAB_100108154;
        }
LAB_1001084d8:
        puVar3 = (undefined4 *)FUN_10032c068(param_2);
        if (puVar3 != (undefined4 *)0x0) {
          switch(*puVar3) {
          case 0:
            local_148[0] = "type4_skincard_rarity";
            uVar5 = FUN_100101fac(param_3,local_148);
            FUN_10052b124(uVar5,"common");
            local_148[0] = "type4_skincard_essence";
            FUN_100101fac(param_3,local_148);
            uVar16 = 0x3f800000;
            break;
          case 1:
            local_148[0] = "type4_skincard_rarity";
            uVar5 = FUN_100101fac(param_3,local_148);
            FUN_10052b124(uVar5,"rare");
            local_148[0] = "type4_skincard_essence";
            FUN_100101fac(param_3,local_148);
            uVar16 = 0x40c00000;
            break;
          case 2:
            local_148[0] = "type4_skincard_rarity";
            uVar5 = FUN_100101fac(param_3,local_148);
            FUN_10052b124(uVar5,"epic");
            local_148[0] = "type4_skincard_essence";
            FUN_100101fac(param_3,local_148);
            uVar16 = 0x41f00000;
            break;
          case 3:
            local_148[0] = "type4_skincard_rarity";
            uVar5 = FUN_100101fac(param_3,local_148);
            FUN_10052b124(uVar5,"legendary");
            local_148[0] = "type4_skincard_essence";
            FUN_100101fac(param_3,local_148);
            uVar16 = 0x42f00000;
            break;
          default:
            goto switchD_100108504_default;
          }
          FUN_10052b18c(uVar16);
        }
switchD_100108504_default:
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          param_2 = (ulong *)*param_2;
        }
        local_148[0] = "type5_skincard_name";
        uVar5 = FUN_100101fac(param_3,local_148);
        FUN_10052b124(uVar5,param_2);
        FUN_10052b20c(PTR_s_Economy_Tap_Card_10184e318,param_3);
        ppcVar8 = (char **)PTR_s_Economy_Tap_Card_10184e318;
      }
      else {
LAB_100108154:
        uVar1 = uVar12;
        if (-1 < (char)bVar13) {
          uVar1 = uVar11;
        }
        if (uVar1 == 0xb) {
          iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25a6);
          if (iVar2 == 0) goto LAB_1001084d8;
          bVar13 = *(byte *)(param_1 + 0x17);
          uVar11 = (ulong)bVar13;
          uVar12 = *(ulong *)(param_1 + 8);
        }
        uVar1 = uVar12;
        if (-1 < (char)bVar13) {
          uVar1 = uVar11;
        }
        if (uVar1 == 6) {
          iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d246a);
          if (iVar2 == 0) {
            puVar14 = param_2;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              puVar14 = (ulong *)*param_2;
            }
            local_148[0] = "type6_talent_id";
            uVar5 = FUN_100101fac(param_3,local_148);
            FUN_10052b124(uVar5,puVar14);
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              param_2 = (ulong *)*param_2;
            }
            FUN_10001549c(local_148,param_2);
            lVar6 = FUN_100341d58(local_148);
            if (local_131 < '\0') {
              operator_delete(local_148[0]);
            }
            if (((lVar6 != 0) && ((*(ushort *)(lVar6 + 0xb0) >> 8 & 1) != 0)) &&
               (lVar4 = FUN_100343694(lVar6), lVar4 != 0)) {
              plVar15 = (long *)(lVar6 + 0x78);
              if (*(char *)(lVar6 + 0x8f) < '\0') {
                plVar15 = (long *)*plVar15;
              }
              local_148[0] = "type4_talent_hero";
              uVar5 = FUN_100101fac(param_3,local_148);
              FUN_10052b124(uVar5,plVar15);
              iVar2 = *(int *)(lVar4 + 0x18);
              if (iVar2 == 3) {
                local_148[0] = "type5_talent_rarity";
                uVar5 = FUN_100101fac(param_3,local_148);
                pcVar9 = "legendary";
              }
              else if (iVar2 == 2) {
                local_148[0] = "type5_talent_rarity";
                uVar5 = FUN_100101fac(param_3,local_148);
                pcVar9 = "epic";
              }
              else {
                if (iVar2 != 1) goto LAB_100108a90;
                local_148[0] = "type5_talent_rarity";
                uVar5 = FUN_100101fac(param_3,local_148);
                pcVar9 = "rare";
              }
              FUN_10052b124(uVar5,pcVar9);
            }
LAB_100108a90:
            FUN_10052b20c(PTR_s_Economy_Tap_Talent_10184e320,param_3);
            ppcVar8 = (char **)PTR_s_Economy_Tap_Talent_10184e320;
            goto LAB_100108aa4;
          }
          bVar13 = *(byte *)(param_1 + 0x17);
          uVar11 = (ulong)bVar13;
          uVar12 = *(ulong *)(param_1 + 8);
        }
        uVar1 = uVar12;
        if (-1 < (char)bVar13) {
          uVar1 = uVar11;
        }
        if (uVar1 == 9) {
          iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d25d6);
          if (iVar2 == 0) {
            uVar10 = (uint)(char)*(byte *)((long)param_2 + 0x17);
            uVar1 = param_2[1];
            if (-1 < (int)uVar10) {
              uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
            }
            if (uVar1 == 0xf) {
              iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d25e0);
              if (iVar2 == 0) {
                FUN_10052b20c(PTR_s_Economy_Tap_GoldenTicket_10184e328,param_3);
                puVar7 = PTR_s_Economy_Tap_GoldenTicket_10184e328;
                goto LAB_100108a14;
              }
              uVar10 = (uint)*(byte *)((long)param_2 + 0x17);
            }
            if ((uVar10 >> 7 & 1) != 0) {
              param_2 = (ulong *)*param_2;
            }
            local_148[0] = "type4";
            uVar5 = FUN_100101fac(param_3,local_148);
            FUN_10052b124(uVar5,param_2);
            FUN_10052b20c(PTR_s_Economy_Tap_Commodity_10184e350,param_3);
            ppcVar8 = (char **)PTR_s_Economy_Tap_Commodity_10184e350;
            goto LAB_100108aa4;
          }
          bVar13 = *(byte *)(param_1 + 0x17);
          uVar11 = (ulong)bVar13;
          uVar12 = *(ulong *)(param_1 + 8);
        }
        uVar1 = uVar12;
        if (-1 < (char)bVar13) {
          uVar1 = uVar11;
        }
        if (uVar1 == 9) {
          iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d260c);
          if (iVar2 == 0) {
            puVar14 = param_2;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              puVar14 = (ulong *)*param_2;
            }
            local_148[0] = "type5_blueprint";
            uVar5 = FUN_100101fac(param_3,local_148);
            FUN_10052b124(uVar5,puVar14);
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              param_2 = (ulong *)*param_2;
            }
            lVar6 = FUN_10032bbf4(param_2);
            if (lVar6 != 0) {
              uVar16 = *(undefined4 *)(lVar6 + 0x20);
              local_148[0] = "type4_blueprint_rarity";
              uVar5 = FUN_100101fac(param_3,local_148);
              FUN_10052b17c(uVar5,uVar16);
            }
            FUN_10052b20c(PTR_s_Economy_Tap_Blueprint_10184e330,param_3);
            ppcVar8 = (char **)PTR_s_Economy_Tap_Blueprint_10184e330;
            goto LAB_100108aa4;
          }
          bVar13 = *(byte *)(param_1 + 0x17);
          uVar11 = (ulong)bVar13;
          uVar12 = *(ulong *)(param_1 + 8);
        }
        uVar1 = uVar12;
        if (-1 < (char)bVar13) {
          uVar1 = uVar11;
        }
        if (uVar1 == 9) {
          iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d2616);
          if (iVar2 == 0) {
            bVar13 = *(byte *)((long)param_2 + 0x17);
            uVar11 = (ulong)bVar13;
            uVar12 = param_2[1];
            uVar1 = uVar12;
            if (-1 < (char)bVar13) {
              uVar1 = uVar11;
            }
            if (uVar1 == 5) {
              iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013d2620);
              if (iVar2 == 0) goto LAB_100108aac;
              bVar13 = *(byte *)((long)param_2 + 0x17);
              uVar11 = (ulong)bVar13;
              uVar12 = param_2[1];
            }
            if (-1 < (char)bVar13) {
              uVar12 = uVar11;
            }
            if (uVar12 == 8) {
              if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
                std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013db002);
                return;
              }
              goto LAB_100108adc;
            }
            goto LAB_100108aac;
          }
          bVar13 = *(byte *)(param_1 + 0x17);
          uVar11 = (ulong)bVar13;
          uVar12 = *(ulong *)(param_1 + 8);
        }
        if (-1 < (char)bVar13) {
          uVar12 = uVar11;
        }
        if ((uVar12 == 9) &&
           (iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d2649),
           iVar2 == 0)) goto LAB_100108aac;
        FUN_1004d26c0(local_148,0x100,"Economy_Tap_Unknown_%s");
        FUN_10052b20c(local_148,param_3);
        ppcVar8 = local_148;
      }
    }
LAB_100108aa4:
    FUN_10052b1e0(ppcVar8,param_3);
  }
LAB_100108aac:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
LAB_100108adc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100108ae0(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  char *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar2 = param_1[0x18];
  if ((int)uVar2 <= (int)param_1[0x14]) goto LAB_100108bac;
  puStack_78 = &local_70;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = "new_level";
  uVar6 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar6,uVar2);
  FUN_10052b20c("Progression_LevelUp",&puStack_78);
  FUN_10052b1e0("Progression_LevelUp",&puStack_78);
  uVar2 = param_1[0x18];
  if (uVar2 == 5) {
    pcVar7 = "3jkxbo";
LAB_100108b9c:
    FUN_10052b230(pcVar7);
  }
  else {
    if (uVar2 == 0xf) {
      pcVar7 = "7agepz";
      goto LAB_100108b9c;
    }
    if (uVar2 == 10) {
      pcVar7 = "d4am06";
      goto LAB_100108b9c;
    }
  }
  FUN_10010a220(&puStack_78,local_70);
LAB_100108bac:
  if (*param_1 != 0) {
    lVar14 = 0;
    uVar15 = 0;
    do {
      local_70 = 0;
      uStack_68 = 0;
      local_80 = "type1";
      puStack_78 = &local_70;
      uVar6 = FUN_100101fac(&puStack_78,&local_80);
      FUN_10052b124(uVar6,"spoils");
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 2) + lVar14 + 8);
      local_80 = "amount";
      uVar6 = FUN_100101fac(&puStack_78,&local_80);
      FUN_10052b17c(uVar6,uVar3);
      lVar8 = *(long *)(param_1 + 2);
      lVar12 = lVar8 + lVar14;
      bVar11 = *(byte *)(lVar12 + 0x27);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(lVar12 + 0x18);
      uVar1 = uVar10;
      if (-1 < (char)bVar11) {
        uVar1 = uVar9;
      }
      if (uVar1 == 5) {
        iVar5 = std::string::compare(lVar12 + 0x10,0,(char *)0xffffffffffffffff,0x1013d9fbd);
        if (iVar5 != 0) {
          lVar8 = *(long *)(param_1 + 2);
          bVar11 = *(byte *)(lVar8 + lVar14 + 0x27);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(lVar8 + lVar14 + 0x18);
          goto LAB_100108c80;
        }
        ppuVar13 = &PTR_s_Economy_Tap_Glory_10184e2d8;
LAB_100108cc8:
        FUN_10052b20c(*ppuVar13,&puStack_78);
        FUN_10052b1e0(*ppuVar13,&puStack_78);
      }
      else {
LAB_100108c80:
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 == 7) &&
           (iVar5 = std::string::compare
                              (lVar8 + lVar14 + 0x10,0,(char *)0xffffffffffffffff,0x1013d251e),
           iVar5 == 0)) {
          ppuVar13 = &PTR_s_Economy_Tap_Essence_10184e2f8;
          goto LAB_100108cc8;
        }
      }
      FUN_10010a220(&puStack_78,local_70);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x28;
    } while (uVar15 < *param_1);
  }
  if (param_1[8] != 0) {
    lVar14 = 0;
    uVar15 = 0;
    do {
      local_70 = 0;
      uStack_68 = 0;
      local_80 = "type1";
      puStack_78 = &local_70;
      uVar6 = FUN_100101fac(&puStack_78,&local_80);
      FUN_10052b124(uVar6,"spoils");
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 10) + lVar14);
      local_80 = "amount";
      uVar6 = FUN_100101fac(&puStack_78,&local_80);
      FUN_10052b17c(uVar6,uVar3);
      lVar12 = *(long *)(param_1 + 10) + lVar14;
      if (*(char *)(lVar12 + 0x7f) < '\0') {
        lVar12 = *(long *)(lVar12 + 0x68);
      }
      else {
        lVar12 = lVar12 + 0x68;
      }
      local_80 = "type2";
      uVar6 = FUN_100101fac(&puStack_78,&local_80);
      FUN_10052b124(uVar6,lVar12);
      lVar8 = *(long *)(param_1 + 10);
      lVar12 = lVar8 + lVar14;
      bVar11 = *(byte *)(lVar12 + 0x67);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(lVar12 + 0x58);
      uVar1 = uVar10;
      if (-1 < (char)bVar11) {
        uVar1 = uVar9;
      }
      if (uVar1 == 5) {
        iVar5 = std::string::compare(lVar12 + 0x50,0,(char *)0xffffffffffffffff,0x1013d6faf);
        if (iVar5 != 0) {
          lVar8 = *(long *)(param_1 + 10);
          bVar11 = *(byte *)(lVar8 + lVar14 + 0x67);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(lVar8 + lVar14 + 0x58);
          goto LAB_100108dec;
        }
        ppuVar13 = &PTR_s_Economy_Tap_Chest_10184e340;
LAB_100108e38:
        FUN_10052b20c(*ppuVar13,&puStack_78);
        FUN_10052b1e0(*ppuVar13,&puStack_78);
      }
      else {
LAB_100108dec:
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 == 3) &&
           (iVar5 = std::string::compare
                              (lVar8 + lVar14 + 0x50,0,(char *)0xffffffffffffffff,0x1013d6fb5),
           iVar5 == 0)) {
          ppuVar13 = &PTR_s_Economy_Tap_Key_10184e348;
          goto LAB_100108e38;
        }
      }
      FUN_10010a220(&puStack_78,local_70);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x80;
    } while (uVar15 < param_1[8]);
  }
  local_70 = 0;
  uStack_68 = 0;
  puStack_78 = &local_70;
  local_80 = "type1";
  uVar6 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b124(uVar6,"spoils");
  uVar2 = param_1[0x14];
  uVar4 = param_1[0x19];
  local_80 = "amount";
  uVar6 = FUN_100101fac(&puStack_78,&local_80);
  FUN_10052b17c(uVar6,uVar2 - uVar4);
  FUN_10052b20c(PTR_s_Economy_Tap_XP_10184e338,&puStack_78);
  FUN_10052b1e0(PTR_s_Economy_Tap_XP_10184e338,&puStack_78);
  FUN_100104b1c(param_1[0x28]);
  if ((char)param_1[0x29] != '\0') {
    FUN_10052b208("Social_TeamMatch_Finish");
    FUN_10052b1dc("Social_TeamMatch_Finish");
  }
  FUN_10010a220(&puStack_78,local_70);
  return;
}




void FUN_100108f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_58 = &local_50;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = "ascension_season_id";
    uVar2 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b124(uVar2,param_3);
    local_60 = "ascension_rank";
    uVar2 = FUN_100101fac(&puStack_58,&local_60);
    FUN_10052b17c(uVar2,param_4);
    FUN_10052b20c(param_1,&puStack_58);
    FUN_10052b1e0(param_1,&puStack_58);
    FUN_10010a220(&puStack_58,local_50);
  }
  FUN_100109000(param_2,param_5,param_3,param_4);
  return;
}




void FUN_100109000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "type1";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "type2_seasonId";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_3);
  local_50 = "type2_ascensionRank";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_4);
  FUN_100103970(param_2,&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_1001090bc(undefined8 param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*param_2 != 0) {
    lVar8 = (ulong)*param_2 * 0x68;
    puVar10 = *(undefined8 **)(param_2 + 2);
    do {
      uVar1 = puVar10[4];
      if (-1 < (char)*(byte *)((long)puVar10 + 0x2f)) {
        uVar1 = (ulong)*(byte *)((long)puVar10 + 0x2f);
      }
      if (uVar1 == 4) {
        iVar3 = std::string::compare((ulong)(puVar10 + 3),0,(char *)0xffffffffffffffff,0x1013d25b2);
        uVar1 = puVar10[4];
        if (-1 < (char)*(byte *)((long)puVar10 + 0x2f)) {
          uVar1 = (ulong)*(byte *)((long)puVar10 + 0x2f);
        }
        if (uVar1 == 4) {
          iVar4 = std::string::compare
                            ((ulong)(puVar10 + 3),0,(char *)0xffffffffffffffff,0x1013d25c4);
          if (iVar3 == 0) {
LAB_100109248:
            puVar9 = puVar10;
            if (*(char *)((long)puVar10 + 0x17) < '\0') {
              puVar9 = (undefined8 *)*puVar10;
            }
            lVar6 = FUN_10032bbf4(puVar9);
            if (lVar6 == 0) goto LAB_100109368;
            local_70 = 0;
            uStack_68 = 0;
            puVar9 = puVar10;
            if (*(char *)((long)puVar10 + 0x17) < '\0') {
              puVar9 = (undefined8 *)*puVar10;
            }
            local_80 = "skin";
            local_78 = &local_70;
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b124(uVar5,puVar9);
            local_80 = "buyOrWeave";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b124(uVar5,param_1);
            uVar2 = *(undefined4 *)(param_3 + 0x18);
            local_80 = "ICEspent";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b17c(uVar5,uVar2);
            uVar2 = *(undefined4 *)(param_3 + 0x20);
            local_80 = "OPALspent";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b17c(uVar5,uVar2);
            uVar2 = *(undefined4 *)(param_3 + 0x1c);
            local_80 = "SILVERspent";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b17c(uVar5,uVar2);
            uVar2 = *(undefined4 *)(lVar6 + 0x20);
            local_80 = "rarity";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b17c(uVar5,uVar2);
            FUN_10052b20c("Progression_UnlockSkin",&local_78);
            pcVar7 = "Progression_UnlockSkin";
          }
          else {
            if (iVar4 != 0) goto LAB_100109368;
            local_70 = 0;
            uStack_68 = 0;
            local_80 = "chest";
            local_78 = &local_70;
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b124(uVar5,param_1);
            puVar9 = puVar10;
            if (*(char *)((long)puVar10 + 0x17) < '\0') {
              puVar9 = (undefined8 *)*puVar10;
            }
            local_80 = "hero";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b124(uVar5,puVar9);
            local_80 = "currency";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b124(uVar5,"ICE");
            uVar2 = *(undefined4 *)(param_3 + 0x18);
            local_80 = "price";
            uVar5 = FUN_100101fac(&local_78,&local_80);
            FUN_10052b17c(uVar5,uVar2);
            FUN_10052b20c("Progression_UnlockHero",&local_78);
            pcVar7 = "Progression_UnlockHero";
          }
          FUN_10052b1e0(pcVar7,&local_78);
          FUN_10010a220(&local_78,local_70);
        }
        else if (iVar3 == 0) goto LAB_100109248;
      }
LAB_100109368:
      puVar10 = puVar10 + 0xd;
      lVar8 = lVar8 + -0x68;
    } while (lVar8 != 0);
  }
  return;
}




void FUN_100109394(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = "type1";
  puStack_58 = &local_50;
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar2,"purchase");
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  local_60 = "amount";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar2,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_60 = "ICEspent";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar2,uVar1);
  FUN_10052b20c(PTR_s_Economy_Tap_Seasonal_Key_10184e2e8,&puStack_58);
  FUN_10052b1e0(PTR_s_Economy_Tap_Seasonal_Key_10184e2e8,&puStack_58);
  FUN_10010a220(&puStack_58,local_50);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = "type1";
  puStack_58 = &local_50;
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b124(uVar2,"seasonKey");
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_60 = "amount";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar2,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  local_60 = "type2_keys";
  uVar2 = FUN_100101fac(&puStack_58,&local_60);
  FUN_10052b17c(uVar2,uVar1);
  FUN_10052b20c(PTR_s_Economy_Sink_ICE_10184e358,&puStack_58);
  FUN_10052b1e0(PTR_s_Economy_Sink_ICE_10184e358,&puStack_58);
  FUN_10010a220(&puStack_58,local_50);
  return;
}




void FUN_1001094f0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_2 + 0x28) < 1) {
    if (*(int *)(param_2 + 0x2c) < 1) {
      puStack_38 = &local_30;
      local_30 = 0;
      uStack_28 = 0;
      local_40 = "type1";
      uVar2 = FUN_100101fac(&puStack_38,&local_40);
      FUN_10052b124(uVar2,param_1);
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      local_40 = "amount";
      uVar2 = FUN_100101fac(&puStack_38,&local_40);
      FUN_10052b17c(uVar2,uVar1);
      FUN_10052b20c(PTR_s_Economy_Sink_ICE_10184e358,&puStack_38);
      puVar3 = PTR_s_Economy_Sink_ICE_10184e358;
    }
    else {
      puStack_38 = &local_30;
      local_30 = 0;
      uStack_28 = 0;
      local_40 = "type1";
      uVar2 = FUN_100101fac(&puStack_38,&local_40);
      FUN_10052b124(uVar2,param_1);
      uVar1 = *(undefined4 *)(param_2 + 0x44);
      local_40 = "amount";
      uVar2 = FUN_100101fac(&puStack_38,&local_40);
      FUN_10052b17c(uVar2,uVar1);
      FUN_10052b20c(PTR_s_Economy_Sink_Seasonal_Key_10184e378,&puStack_38);
      puVar3 = PTR_s_Economy_Sink_Seasonal_Key_10184e378;
    }
  }
  else {
    puStack_38 = &local_30;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = "type1";
    uVar2 = FUN_100101fac(&puStack_38,&local_40);
    FUN_10052b124(uVar2,param_1);
    uVar1 = *(undefined4 *)(param_2 + 0x40);
    local_40 = "amount";
    uVar2 = FUN_100101fac(&puStack_38,&local_40);
    FUN_10052b17c(uVar2,uVar1);
    FUN_10052b20c(PTR_s_Economy_Sink_Seasonal_Key_10184e370,&puStack_38);
    puVar3 = PTR_s_Economy_Sink_Seasonal_Key_10184e370;
  }
  FUN_10052b1e0(puVar3,&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100109678(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "type1";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,"Progression_Guild_Chest_Reward_Redeemed");
  local_40 = "type2_guildLevel";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar1,param_1);
  FUN_100103970(param_2,&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100109708(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "type1";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,"Hero_Chest");
  FUN_100103970(param_1,&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100109774(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "lpq_level";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar1,param_1);
  local_40 = "isMe";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar1,param_2);
  FUN_10052b20c("Progression_LPQ_Screen_Seen",&puStack_38);
  FUN_10052b1e0("Progression_LPQ_Screen_Seen",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100109814(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "lpq_level";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar1,param_1);
  FUN_10052b20c("Progression_LPQ_Screen_Cancelled",&puStack_38);
  FUN_10052b1e0("Progression_LPQ_Screen_Cancelled",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_100109890(undefined8 param_1)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "lpq_level";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b17c(uVar1,param_1);
  FUN_10052b20c("Progression_LPQ_Screen_Completed",&puStack_38);
  FUN_10052b1e0("Progression_LPQ_Screen_Completed",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_10010990c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "received";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_1);
  local_50 = "sent";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_2);
  local_50 = "missed";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_3);
  FUN_10052b20c("StateUpdate_Message_Dropped",&puStack_48);
  FUN_10052b1e0("StateUpdate_Message_Dropped",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_1001099d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  uVar1 = FUN_10034cd20();
  local_40 = "mode";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b124(uVar2,uVar1);
  FUN_10052b20c("Game_Replay",&local_38);
  FUN_10052b1e0("Game_Replay",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_100109a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "source";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,param_1);
  local_50 = "response";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,param_2);
  local_50 = "action";
  uVar2 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar2,param_3);
  if (param_4 != (undefined1 *)0x0) {
    uVar1 = *param_4;
    local_50 = "hardFought";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[1];
    local_50 = "1stWin";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[2];
    local_50 = "3rdWin";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[3];
    local_50 = "7thDayWin";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[4];
    local_50 = "tier1SkinUnlock";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[5];
    local_50 = "tier2SkinUnlock";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[6];
    local_50 = "tier3SkinUnlock";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[7];
    local_50 = "SESkinUnlock";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
    uVar1 = param_4[8];
    local_50 = "heroUnlock";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,uVar1);
  }
  FUN_10052b20c("Rate_App",&puStack_48);
  FUN_10052b1e0("Rate_App",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_100109c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_48 = &local_40;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = "scheme";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b124(uVar2,param_1);
    local_50 = "host";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b124(uVar2,param_2);
    local_50 = "port";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,param_3);
    local_50 = "connectionTimeMS";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,param_4);
    FUN_10052b20c("Chat_ConnectionTime",&puStack_48);
    FUN_10052b1e0("Chat_ConnectionTime",&puStack_48);
    FUN_10010a220(&puStack_48,local_40);
  }
  return;
}




void FUN_100109d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "scheme";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "host";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_2);
  local_50 = "port";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_3);
  FUN_10052b20c("Chat_ConnectionFailure",&puStack_48);
  FUN_10052b1e0("Chat_ConnectionFailure",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




bool FUN_100109e3c(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  void *pvVar10;
  
  bVar4 = *(byte *)(param_1 + 0x47);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x38);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 != sVar2) {
    return true;
  }
  pvVar10 = *(void **)(param_1 + 0x30);
  puVar3 = pvVar10;
  if (-1 < (char)bVar4) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
  }
  pbVar9 = DAT_101d91198;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    pbVar9 = (byte *)&DAT_101d91198;
  }
  if ((char)bVar4 < '\0') {
    if (sVar1 == 0) {
      return false;
    }
    iVar6 = _memcmp(puVar3,pbVar9,sVar1);
    bVar5 = iVar6 == 0;
  }
  else {
    if (sVar1 == 0) {
      return false;
    }
    if ((uint)*pbVar9 != ((uint)pvVar10 & 0xff)) {
      return true;
    }
    pbVar7 = (byte *)(param_1 + 0x31);
    do {
      uVar8 = uVar8 - 1;
      pbVar9 = pbVar9 + 1;
      if (uVar8 == 0) break;
      bVar4 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar4 == *pbVar9);
    bVar5 = uVar8 == 0;
  }
  return !bVar5;
}




void FUN_100109f0c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  uVar2 = FUN_10034cd20();
  local_40 = "mode";
  uVar3 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b124(uVar3,uVar2);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,0);
  uVar1 = *puVar4;
  local_40 = "eloTier5v5";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  uVar2 = FUN_100327e00();
  puVar4 = (undefined4 *)FUN_100327f2c(uVar2,1);
  uVar1 = *puVar4;
  local_40 = "eloTier3v3";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,uVar1);
  local_40 = "role";
  uVar2 = FUN_100101fac(&local_38,&local_40);
  FUN_10052b17c(uVar2,param_2);
  FUN_10052b20c("DraftLobby_Role_Bumped",&local_38);
  FUN_10010a220(&local_38,local_30);
  return;
}




void FUN_10010a004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "skin";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "rarity";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_2);
  local_50 = "fromInventory";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_3);
  FUN_10052b20c("Progression_DestroyBlueprint",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}




void FUN_10010a0c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puStack_38 = &local_30;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = "chestID";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_1);
  local_40 = "keyID";
  uVar1 = FUN_100101fac(&puStack_38,&local_40);
  FUN_10052b124(uVar1,param_2);
  FUN_10052b20c("Inventory_OpenChestWithKey",&puStack_38);
  FUN_10010a220(&puStack_38,local_30);
  return;
}




void FUN_10010a150(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_10052b294("Open In-App Web URL: %s");
  }
  return;
}




void FUN_10010a18c(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_10052b294("Play Video: %s");
  }
  return;
}




undefined1 * FUN_10010a1c8(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 1;
  FUN_1004e3004(param_1 + 0x10);
  FUN_1004e3004(param_1 + 0x18);
  FUN_1004e3004(param_1 + 0x20);
  FUN_1004e3004(param_1 + 0x28);
  param_1[1] = 0;
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  return param_1;
}




void FUN_10010a220(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10010a220(param_1,*param_2);
    FUN_10010a220(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x47) < '\0') {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10010a270(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_10010a2c4(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar5 = (long *)*plVar2;
    if (plVar5 == plVar3) {
      if ((plVar2[1] == 0) || (plVar5 = (long *)(plVar2[1] + 0x18), *(char *)plVar5 != '\0')) {
        if ((long *)*plVar3 != param_2) {
          plVar5 = (long *)plVar3[1];
          lVar4 = *plVar5;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar5[2] = (long)plVar2;
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar2 = (long *)plVar5[2];
          plVar3 = plVar5;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        plVar3 = (long *)*plVar2;
        lVar4 = plVar3[1];
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar2;
        }
        plVar5 = plVar2 + 2;
        plVar3[2] = *plVar5;
        ((undefined8 *)*plVar5)[*(long **)*plVar5 != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
LAB_10010a45c:
        *plVar5 = (long)plVar3;
        return;
      }
    }
    else if ((plVar5 == (long *)0x0) || (plVar5 = plVar5 + 3, (char)*plVar5 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = param_2;
        param_2[1] = (long)plVar3;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
        plVar3 = param_2;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar4 = *plVar3;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      plVar5 = plVar2 + 2;
      plVar3[2] = *plVar5;
      ((undefined8 *)*plVar5)[*(long **)*plVar5 != plVar2] = plVar3;
      *plVar3 = (long)plVar2;
      goto LAB_10010a45c;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar5 = '\x01';
    param_2 = plVar2;
  } while( true );
}




void FUN_10010a464(void)

{
  operator_new(0x188);
  DAT_101d230a8 = thunk_FUN_10010a88c();
  return;
}




void FUN_10010a488(void)

{
  ulong uVar1;
  
  if ((DAT_101d230a8 != 0) && (uVar1 = FUN_10010adbc(), (uVar1 & 1) == 0)) {
    FUN_10010ac10(DAT_101d230a8);
    return;
  }
  return;
}




void FUN_10010a4c4(void)

{
  if (DAT_101d230a8 != (long *)0x0) {
    (**(code **)(*DAT_101d230a8 + 0x40))();
    DAT_101d230a8 = (long *)0x0;
  }
  return;
}




void FUN_10010a4f8(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010adc4(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a510(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010b9ac(DAT_101d230a8,param_1,param_2);
    return;
  }
  return;
}




void FUN_10010a52c(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010b9bc(DAT_101d230a8,param_1,param_2);
    return;
  }
  return;
}




void FUN_10010a548(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010add4(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a560(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010affc(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a660(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010b010(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a678(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010b118(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a690(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010b220(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a6a8(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010b288(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_40 [8];
  void *local_38;
  
  lVar1 = DAT_101d230a8;
  if (DAT_101d230a8 != 0) {
    thunk_FUN_1004e439c(local_40);
    FUN_10010b318(lVar1,param_1,local_40,param_3);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_10010a728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_40 [8];
  void *local_38;
  
  lVar1 = DAT_101d230a8;
  if (DAT_101d230a8 != 0) {
    thunk_FUN_1004e439c(local_40);
    FUN_10010b4e4(lVar1,param_1,local_40,param_3,0);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_10010a794(undefined8 param_1)

{
  long lVar1;
  undefined1 local_30 [8];
  void *local_28;
  
  lVar1 = DAT_101d230a8;
  if (DAT_101d230a8 != 0) {
    thunk_FUN_1004e439c(local_30);
    FUN_10010b894(lVar1,param_1,local_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_10010a7ec(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010c70c(DAT_101d230a8,param_1);
    return;
  }
  return;
}




void FUN_10010a804(void)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010c75c();
    return;
  }
  return;
}




undefined8 FUN_10010a818(void)

{
  return 0;
}




void FUN_10010a820(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010c544(DAT_101d230a8,param_1,param_2);
    return;
  }
  return;
}




void FUN_10010a83c(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010c5c8(DAT_101d230a8,param_1,param_2);
    return;
  }
  return;
}




void FUN_10010a858(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010c648(DAT_101d230a8,param_1,param_2);
    return;
  }
  return;
}




void FUN_10010a874(undefined8 param_1)

{
  if (DAT_101d230a8 != 0) {
    FUN_10010c6c8(DAT_101d230a8,param_1);
    return;
  }
  return;
}




undefined8 * FUN_10010a88c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_1014594d0;
  FUN_1004f0a20(param_1 + 1);
  FUN_10014f4a0(param_1 + 4);
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10030915c(param_1 + 9);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar2 = FUN_10052b260();
  param_1[0x19] = uVar2;
  FUN_10003330c(param_1 + 0x1a,&DAT_101d91198);
  FUN_1004e3170(param_1 + 0x1d,&DAT_101d91198);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_10003330c(param_1 + 0x22,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x2b,&DAT_101d91198);
  param_1[0x2f] = 0xdc;
  param_1[0x2e] = 0x200000000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_100528b70(param_1[0x19],param_1);
  uVar2 = FUN_100316150();
  local_40 = 0;
  pcStack_28 = FUN_10010c860;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_10003c508(uVar2,&local_40);
  uVar1 = FUN_10031615c(0x10);
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  FUN_100529258(param_1[0x19],param_1 + 10);
  return param_1;
}




undefined8 * thunk_FUN_10010a88c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_1014594d0;
  FUN_1004f0a20(param_1 + 1);
  FUN_10014f4a0(param_1 + 4);
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10030915c(param_1 + 9);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar2 = FUN_10052b260();
  param_1[0x19] = uVar2;
  FUN_10003330c(param_1 + 0x1a,&DAT_101d91198);
  FUN_1004e3170(param_1 + 0x1d,&DAT_101d91198);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_10003330c(param_1 + 0x22,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x2b,&DAT_101d91198);
  param_1[0x2f] = 0xdc;
  param_1[0x2e] = 0x200000000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_100528b70(param_1[0x19],param_1);
  uVar2 = FUN_100316150();
  uStack_40 = 0;
  pcStack_28 = FUN_10010c860;
  puStack_38 = param_1;
  puStack_30 = param_1;
  FUN_10003c508(uVar2,&uStack_40);
  uVar1 = FUN_10031615c(0x10);
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  FUN_100529258(param_1[0x19],param_1 + 10);
  return param_1;
}




undefined8 * FUN_10010a9ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 **local_68 [2];
  char local_51;
  
  *param_1 = &PTR_FUN_101459078;
  param_1[1] = &PTR_FUN_101459108;
  param_1[4] = &PTR_FUN_101459138;
  FUN_100529300(param_1[0x19],param_1 + 10);
  puVar8 = (uint *)(param_1 + 7);
  if (*puVar8 != 0) {
    uVar9 = 0;
    do {
      lVar7 = *(long *)(param_1[8] + uVar9 * 8);
      FUN_10003330c(local_68,lVar7 + 0x40);
      pppuVar2 = (undefined8 ***)local_68[0];
      if (-1 < local_51) {
        pppuVar2 = local_68;
      }
      FUN_1005290ac(param_1[0x19],lVar7,pppuVar2);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      plVar4 = *(long **)(param_1[8] + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar8);
  }
  if (param_1[8] != 0) {
    *puVar8 = 0;
  }
  FUN_100528c18(param_1[0x19],param_1);
  *(undefined1 *)((long)param_1 + 0x17d) = 0;
  bVar3 = FUN_100126968();
  *(byte *)((long)param_1 + 0x17e) = bVar3 ^ 1;
  (**(code **)(*(long *)param_1[0x19] + 0x58))();
  FUN_10052b268(param_1[0x19]);
  puVar5 = (uint *)FUN_100316150();
  if (*puVar5 != 0) {
    lVar7 = *(long *)(puVar5 + 2);
    lVar6 = (ulong)*puVar5 << 5;
    do {
      puVar1 = (undefined8 *)(lVar7 + 8);
      lVar7 = lVar7 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_10003c608();
        break;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  FUN_10010b1a8(param_1 + 0x17,1);
  thunk_FUN_10030918c(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    puVar8[0] = 0;
    puVar8[1] = 0;
    param_1[8] = 0;
  }
  FUN_10014f51c(param_1 + 4);
  FUN_1004f0a9c(param_1 + 1);
  return param_1;
}




void thunk_FUN_10010a9ac(void)

{
  FUN_10010a9ac();
  return;
}




void FUN_10010abbc(long param_1)

{
  FUN_10010a9ac(param_1 + -8);
  return;
}




void FUN_10010abc4(long param_1)

{
  FUN_10010a9ac(param_1 + -0x20);
  return;
}




void FUN_10010abcc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10010a9ac();
  operator_delete(pvVar1);
  return;
}




void FUN_10010abe0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10010a9ac(param_1 + -8);
  operator_delete(pvVar1);
  return;
}




void FUN_10010abf8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10010a9ac(param_1 + -0x20);
  operator_delete(pvVar1);
  return;
}




void FUN_10010ac10(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x60))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010010ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0xb0))(0x3a83126f);
    return;
  }
  return;
}




void FUN_10010ac60(long param_1)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  FUN_10010ad20();
  if (*(char *)(param_1 + 0x17e) == '\0') {
    uVar2 = FUN_1004e3624(param_1 + 0xe8);
    if ((uVar2 & 1) == 0) {
      local_38 = (undefined8 ***)0x0;
      uStack_30 = 0;
      local_28 = 0;
      FUN_1004e357c(param_1 + 0xe8,&local_38);
      plVar3 = (long *)(param_1 + 0xd0);
      if (*(char *)(param_1 + 0xe7) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      plVar4 = (long *)(param_1 + 0x110);
      if (*(char *)(param_1 + 0x127) < '\0') {
        plVar4 = (long *)*plVar4;
      }
      plVar5 = (long *)(param_1 + 0x128);
      if (*(char *)(param_1 + 0x13f) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      pppuVar1 = (undefined8 ***)local_38;
      if (-1 < local_28) {
        pppuVar1 = &local_38;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0x48))
                (*(long **)(param_1 + 200),plVar3,*(undefined4 *)(param_1 + 0x170),plVar4,plVar5,
                 pppuVar1,*(undefined1 *)(param_1 + 0x17c));
      if (local_28 < 0) {
        operator_delete(local_38);
      }
    }
  }
  return;
}




void FUN_10010ad20(long param_1)

{
  byte bVar1;
  ulong uVar2;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_10014e338(&local_48,param_1 + 0xd0,(int *)(param_1 + 0x170));
  if ((char)*(byte *)(param_1 + 0xe7) < '\0') {
    uVar2 = *(ulong *)(param_1 + 0xd8);
  }
  else {
    uVar2 = (ulong)*(byte *)(param_1 + 0xe7);
  }
  if ((uVar2 == 0) || (*(int *)(param_1 + 0x170) < 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_100126968();
    bVar1 = bVar1 ^ 1;
  }
  *(byte *)(param_1 + 0x17e) = bVar1;
  FUN_10014e384(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x17d) = 1;
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




undefined1 FUN_10010adbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17e);
}




void FUN_10010adc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010010add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x90))();
  return;
}




void FUN_10010add4(long param_1,undefined8 param_2)

{
  long *plVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  FUN_10010ae48(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  plVar1 = (long *)(param_1 + 0x128);
  if (*(char *)(param_1 + 0x13f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  (**(code **)(**(long **)(param_1 + 200) + 0x78))(*(long **)(param_1 + 200),param_2,plVar1,0);
  return;
}




undefined8 ****** FUN_10010ae48(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *******pppppppuVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint *puVar11;
  ulong uVar12;
  void *local_80 [2];
  char local_69;
  undefined8 ******local_68;
  size_t local_60;
  byte local_51;
  
  puVar11 = (uint *)(param_1 + 0x38);
  if (*puVar11 != 0) {
    uVar12 = 0;
    do {
      FUN_10003330c(&local_68,*(long *)(*(long *)(param_1 + 0x40) + uVar12 * 8) + 0x40);
      uVar8 = (ulong)local_51;
      sVar1 = local_60;
      if (-1 < (char)local_51) {
        sVar1 = uVar8;
      }
      bVar4 = param_2[0x17];
      sVar2 = *(size_t *)(param_2 + 8);
      if (-1 < (char)bVar4) {
        sVar2 = (ulong)bVar4;
      }
      if (sVar1 == sVar2) {
        pppppppuVar3 = (undefined8 *******)local_68;
        if (-1 < (char)local_51) {
          pppppppuVar3 = &local_68;
        }
        pbVar9 = *(byte **)param_2;
        if (-1 < (char)bVar4) {
          pbVar9 = param_2;
        }
        if (-1 < (char)local_51) {
          if (sVar1 == 0) goto LAB_10010afd8;
          pbVar10 = (byte *)((ulong)&local_68 | 1);
          if ((uint)*pbVar9 != ((uint)local_68 & 0xff)) goto LAB_10010af28;
          do {
            uVar8 = uVar8 - 1;
            pbVar9 = pbVar9 + 1;
            bVar5 = uVar8 == 0;
            if (uVar8 == 0) break;
            bVar4 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar4 == *pbVar9);
          goto LAB_10010af2c;
        }
        if (sVar1 == 0) {
          operator_delete(local_68);
          goto LAB_10010afd8;
        }
        iVar6 = _memcmp(pppppppuVar3,pbVar9,sVar1);
        bVar5 = iVar6 == 0;
LAB_10010af4c:
        operator_delete(local_68);
        if (bVar5) {
LAB_10010afd8:
          return (undefined8 ******)
                 *(undefined8 *)(*(long *)(param_1 + 0x40) + (uVar12 & 0xffffffff) * 8);
        }
      }
      else {
LAB_10010af28:
        bVar5 = false;
LAB_10010af2c:
        if ((char)local_51 < '\0') goto LAB_10010af4c;
        if (bVar5) goto LAB_10010afd8;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *puVar11);
  }
  pvVar7 = operator_new(0x70);
  local_68 = (undefined8 ******)FUN_10030915c();
  FUN_10003330c(local_80,param_2);
  std::string::operator=((string *)((long)pvVar7 + 0x40),(string *)local_80);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  FUN_10010c764(puVar11,&local_68);
  pbVar9 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    pbVar9 = param_2;
  }
  FUN_100528c54(*(undefined8 *)(param_1 + 200),local_68,pbVar9);
  return local_68;
}




void FUN_10010affc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x80))(*(long **)(param_1 + 200),param_2,0);
  return;
}




void FUN_10010b010(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = (uint *)(param_1 + 0xb8);
  if (*puVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_1004e3654(*(long *)(param_1 + 0xc0) + lVar3,param_2);
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < *puVar2);
  }
  FUN_10010b098(puVar2,param_2);
  return;
}




void FUN_10010b098(uint *param_1,undefined8 param_2)

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
    FUN_10010c894(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  thunk_FUN_1004e439c(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x10 + -0x10,param_2);
  return;
}




void FUN_10010b118(long param_1,undefined8 param_2)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = (uint *)(param_1 + 0xb8);
  if (*puVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = FUN_1004e3654(*(long *)(param_1 + 0xc0) + lVar3,param_2);
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0xc0) + lVar3;
        FUN_10010c960(puVar2,lVar3,lVar3 + 0x10);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < *puVar2);
  }
  return;
}




void FUN_10010b1a8(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 4;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        puVar2 = puVar2 + 2;
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
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




undefined8 FUN_10010b220(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_1004e3654(*(long *)(param_1 + 0xc0) + lVar2,param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0xb8));
  }
  return uVar1;
}




bool FUN_10010b288(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  iVar2 = FUN_10034f248(param_2);
  uVar3 = FUN_10034ea2c(param_2);
  FUN_10034e42c(param_2);
  lVar5 = FUN_100111850();
  lVar6 = FUN_1003467f8();
  bVar1 = false;
  if (lVar6 != 0) {
    FUN_1003467f8();
    iVar4 = FUN_10034cdd0();
    bVar1 = false;
    if (((*(char *)(param_1 + 0x180) != '\0' && (uVar3 & 1) == 0) && (lVar5 == 0)) && (iVar4 != 0))
    {
      bVar1 = iVar2 < *(int *)(param_1 + 0x174);
    }
  }
  return bVar1;
}




void FUN_10010b318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 local_a8;
  void *local_a0;
  void *local_98 [2];
  char local_81;
  undefined4 local_80 [2];
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_58 = &local_50;
  FUN_10052b10c(local_80,param_4);
  FUN_1001862c4(local_98);
  puVar1 = (undefined4 *)FUN_10010b464(&local_58,local_98);
  *puVar1 = local_80[0];
  std::string::operator=((string *)(puVar1 + 2),(string *)local_78);
  puVar1[8] = local_60;
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_10052b10c(local_80,1);
  FUN_1001862d4(local_98);
  puVar1 = (undefined4 *)FUN_10010b464(&local_58,local_98);
  *puVar1 = local_80[0];
  std::string::operator=((string *)(puVar1 + 2),(string *)local_78);
  puVar1[8] = local_60;
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  thunk_FUN_1004e439c(&local_a8,param_3);
  FUN_10010b4e4(param_1,param_2,&local_a8,0,&local_58);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_10010c800(&local_58,local_50);
  return;
}




long FUN_10010b464(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_1000be7f0(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x60);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    FUN_10052b058((long)pvVar2 + 0x38);
    FUN_10010ca44(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_10010b4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 ***pppuVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *local_1a0 [2];
  char local_189;
  void *local_188 [2];
  char local_171;
  undefined8 **local_170;
  void *local_168;
  long local_160;
  undefined1 local_158 [8];
  void *local_150;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  iVar2 = FUN_1004e3634(param_3);
  if (iVar2 == 0) goto LAB_10010b80c;
  iVar2 = FUN_1004e3648(param_3,0);
  if (iVar2 == 0x2f) {
    FUN_1004e3120(local_158,"/");
    FUN_1004e3120(&local_170,"\\");
    FUN_1004e3bc4(param_3,0,local_158,&local_170);
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
  }
  uVar3 = FUN_1004e3634(param_3);
  if (*(uint *)(param_1 + 0x178) < uVar3) {
    FUN_1004e4154(local_158,param_3,0,*(uint *)(param_1 + 0x178) - 3);
    FUN_1000153b4(param_3,local_158);
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
    FUN_1004e3120(local_158,"...");
    FUN_1004e372c(param_3,local_158);
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
  }
  local_158[0] = 0;
  iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x70))();
  if (iVar2 == 0) {
    lVar4 = FUN_1004f1a74(0);
    FUN_1004d3350((double)lVar4,local_158,0x100);
    if ((int)param_4 == 0) goto LAB_10010b638;
LAB_10010b614:
    lVar4 = param_1 + 0x48;
  }
  else {
    if ((int)param_4 != 0) goto LAB_10010b614;
LAB_10010b638:
    FUN_10001549c(&local_170,param_2);
    lVar4 = FUN_10010ae48(param_1,&local_170);
    if (local_160 < 0) {
      operator_delete(local_170);
    }
  }
  uVar5 = FUN_1001861f4(param_3);
  if ((uVar5 & 1) == 0) {
    local_170 = (undefined8 ***)0x0;
    local_168 = (void *)0x0;
    local_160 = 0;
    FUN_1004e357c(param_3,&local_170);
    pppuVar1 = (undefined8 ***)local_170;
    if (-1 < local_160) {
      pppuVar1 = &local_170;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xb8))
              (*(long **)(param_1 + 200),param_2,pppuVar1,param_5);
    if (param_5 == (undefined8 *)0x0) {
      param_5 = operator_new(0x18);
      param_5[2] = 0;
      param_5[1] = 0;
      *param_5 = param_5 + 1;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xd0))(*(long **)(param_1 + 200),param_5);
    lVar6 = FUN_10015d3ec();
    FUN_10001549c(local_188,param_2);
    FUN_10001549c(local_1a0,local_158);
    FUN_100309314(lVar4,param_3,lVar6 + 0x5508,local_188,&DAT_101d91198,local_1a0,0,param_4,1,
                  param_5);
    if (local_189 < '\0') {
      operator_delete(local_1a0[0]);
    }
  }
  else {
    if (param_5 == (undefined8 *)0x0) {
      param_5 = operator_new(0x18);
      param_5[2] = 0;
      param_5[1] = 0;
      *param_5 = param_5 + 1;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xd0))(*(long **)(param_1 + 200),param_5);
    if (((DAT_101dc7428 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101dc7428), iVar2 != 0)) {
      FUN_1004e3340(&DAT_101dc7418,&DAT_10114ce10);
      ___cxa_atexit(FUN_100046198,&DAT_101dc7418,0x100000000);
      ___cxa_guard_release(&DAT_101dc7428);
    }
    lVar6 = FUN_10015d3ec();
    FUN_10001549c(&local_170,param_2);
    FUN_10001549c(local_188,local_158);
    FUN_100309314(lVar4,&DAT_101dc7418,lVar6 + 0x5508,&local_170,&DAT_101d91198,local_188,0,param_4,
                  0,param_5);
  }
  if (local_171 < '\0') {
    operator_delete(local_188[0]);
  }
  if (local_160 < 0) {
    operator_delete(local_170);
  }
LAB_10010b80c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10010b894(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *local_168 [2];
  char local_151;
  void *local_150 [2];
  char local_139;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_1004e3634(param_3);
  if (iVar1 != 0) {
    local_138[0] = 0;
    iVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x70))();
    if (iVar1 == 0) {
      lVar2 = FUN_1004f1a74(0);
      FUN_1004d3350((double)lVar2,local_138,0x100);
    }
    FUN_10001549c(local_150,param_2);
    uVar3 = FUN_10010ae48(param_1,local_150);
    FUN_10001549c(local_168,local_138);
    FUN_100309314(uVar3,param_3,&DAT_101d91198,&DAT_101d91198,&DAT_101d91198,local_168,0,0,1,0);
    if (local_151 < '\0') {
      operator_delete(local_168[0]);
    }
    if (local_139 < '\0') {
      operator_delete(local_150[0]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10010b9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0xc0))();
  return;
}




void FUN_10010b9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 200))();
  return;
}




void FUN_10010b9cc(long param_1)

{
  string *psVar1;
  size_t sVar2;
  size_t sVar3;
  string *psVar4;
  undefined8 ******ppppppuVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  size_t sVar12;
  size_t sVar13;
  byte bVar14;
  void *local_70 [2];
  char local_59;
  undefined8 *****local_58 [2];
  char local_41;
  
  bVar14 = DAT_101d911a8._7_1_;
  sVar13 = DAT_101d911a0;
  psVar1 = (string *)(param_1 + 0x140);
  bVar6 = *(byte *)(param_1 + 0x157);
  uVar9 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0x148);
  if (-1 < (char)bVar6) {
    sVar3 = uVar9;
  }
  sVar12 = (size_t)DAT_101d911a8._7_1_;
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = sVar12;
  }
  if (sVar3 == sVar2) {
    psVar4 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar4 = psVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 == 0) || (iVar7 = _memcmp(psVar4,pbVar11,sVar3), iVar7 == 0)) goto LAB_10010bb18;
    }
    else {
      if (sVar3 == 0) goto LAB_10010bb18;
      if ((uint)*pbVar11 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x141);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_10010bb18;
          bVar6 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar6 == *pbVar11);
      }
    }
  }
  std::operator+("#",psVar1);
  std::string::string((string *)local_58,(string *)local_70);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  ppppppuVar5 = (undefined8 ******)local_58[0];
  if (-1 < local_41) {
    ppppppuVar5 = local_58;
  }
  lVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),ppppppuVar5);
  if (lVar8 == 0) {
    ppppppuVar5 = (undefined8 ******)local_58[0];
    if (-1 < local_41) {
      ppppppuVar5 = local_58;
    }
    FUN_10010add4(param_1,ppppppuVar5);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  sVar12 = (size_t)DAT_101d911a8._7_1_;
  sVar13 = DAT_101d911a0;
  bVar14 = DAT_101d911a8._7_1_;
LAB_10010bb18:
  psVar1 = (string *)(param_1 + 0x158);
  bVar6 = *(byte *)(param_1 + 0x16f);
  uVar9 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0x160);
  if (-1 < (char)bVar6) {
    sVar3 = uVar9;
  }
  if (-1 < (char)bVar14) {
    sVar13 = sVar12;
  }
  if (sVar3 == sVar13) {
    psVar4 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar4 = psVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)bVar14) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar7 = _memcmp(psVar4,pbVar11,sVar3);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar11 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x159);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) {
            return;
          }
          bVar6 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar6 == *pbVar11);
      }
    }
  }
  std::operator+("#",psVar1);
  std::string::string((string *)local_58,(string *)local_70);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  ppppppuVar5 = (undefined8 ******)local_58[0];
  if (-1 < local_41) {
    ppppppuVar5 = local_58;
  }
  lVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),ppppppuVar5);
  if (lVar8 == 0) {
    ppppppuVar5 = (undefined8 ******)local_58[0];
    if (-1 < local_41) {
      ppppppuVar5 = local_58;
    }
    FUN_10010add4(param_1,ppppppuVar5);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_10010bc44(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x17f) == '\0') {
    *(undefined1 *)(param_1 + 0x17f) = 1;
    pcStack_28 = FUN_10010ca98;
    local_30 = param_1;
    FUN_100643618(0x41700000,&local_30,0,0);
    pcStack_28 = FUN_10010cad0;
    local_30 = param_1;
    FUN_100643618(0x41700000,&local_30,0,0);
  }
  return;
}




void FUN_10010bcb8(long param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_1004e3170(auStack_30,param_2 + 0xe0);
    FUN_1000153b4(param_1 + 0xe8,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
    std::string::operator=((string *)(param_1 + 0x110),(string *)(param_2 + 0x98));
    std::string::operator=((string *)(param_1 + 0x140),(string *)(param_2 + 0xb0));
    std::string::operator=((string *)(param_1 + 0x158),(string *)(param_2 + 200));
    FUN_10010ac60(param_1);
  }
  return;
}




void FUN_10010bd44(long param_1)

{
  FUN_10010bcb8(param_1 + -8);
  return;
}




void FUN_10010bd4c(long param_1)

{
  byte bVar1;
  
  FUN_1004e34c8(param_1 + 0xe8);
  if (*(char *)(param_1 + 0x127) < '\0') {
    **(undefined1 **)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(param_1 + 0x127) = 0;
  }
  if (*(char *)(param_1 + 0x157) < '\0') {
    **(undefined1 **)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x140) = 0;
    *(undefined1 *)(param_1 + 0x157) = 0;
  }
  if (*(char *)(param_1 + 0x16f) < '\0') {
    **(undefined1 **)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 0x16f) = 0;
  }
  *(undefined1 *)(param_1 + 0x17d) = 0;
  bVar1 = FUN_100126968();
  *(byte *)(param_1 + 0x17e) = bVar1 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010bde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x58))();
  return;
}




void FUN_10010bdec(long param_1)

{
  FUN_10010bd4c(param_1 + -8);
  return;
}




void FUN_10010bdf4(long param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar4 = FUN_1004f1680(param_2);
  if ((iVar4 != 0) && (*(int *)(param_2 + 0x240) == 0)) {
    param_2 = param_2 + 0x80;
    lVar1 = param_1 + 0xe8;
    uVar5 = FUN_1004e3634(lVar1);
    uVar6 = FUN_1004e3790(param_2,lVar1,uVar5);
    if ((uVar6 & 1) == 0) {
      iVar4 = FUN_1004e3624(param_2);
      if (iVar4 != 0) {
        FUN_1004e34c8(lVar1);
        if (*(char *)(param_1 + 0x127) < '\0') {
          **(undefined1 **)(param_1 + 0x110) = 0;
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x110) = 0;
          *(undefined1 *)(param_1 + 0x127) = 0;
        }
        if (*(char *)(param_1 + 0x157) < '\0') {
          **(undefined1 **)(param_1 + 0x140) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x140) = 0;
          *(undefined1 *)(param_1 + 0x157) = 0;
        }
        if (*(char *)(param_1 + 0x16f) < '\0') {
          **(undefined1 **)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x158) = 0;
          *(undefined1 *)(param_1 + 0x16f) = 0;
        }
        *(undefined1 *)(param_1 + 0x17d) = 0;
        bVar3 = FUN_100126968();
        *(byte *)(param_1 + 0x17e) = bVar3 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 200) + 0x58))();
        return;
      }
      FUN_1000153b4(lVar1,param_2);
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(lVar1,&local_48);
      pppuVar2 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar2 = &local_48;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0xa0))(*(long **)(param_1 + 200),pppuVar2);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_10010bf54(long param_1)

{
  FUN_10010bdf4(param_1 + -0x20);
  return;
}




void FUN_10010bf5c(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  void *local_50 [2];
  char local_39;
  undefined8 ****local_38 [2];
  char local_21;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  lVar7 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar7 + 0x548f);
  uVar8 = (ulong)bVar5;
  sVar1 = *(size_t *)(lVar7 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar7 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(lVar7 + 0x5478);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar7 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  lVar7 = FUN_10015d3ec();
  std::operator+("#",(string *)(lVar7 + 0x5478));
  std::string::string((string *)local_38,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  pppppuVar4 = (undefined8 *****)local_38[0];
  if (-1 < local_21) {
    pppppuVar4 = local_38;
  }
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pppppuVar4);
  if (lVar7 == 0) {
    pppppuVar4 = (undefined8 *****)local_38[0];
    if (-1 < local_21) {
      pppppuVar4 = local_38;
    }
    FUN_10010add4(param_1,pppppuVar4);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10010c0c8(long param_1)

{
  FUN_10010bf5c(param_1 + -0x20);
  return;
}




void FUN_10010c0d0(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  void *local_50 [2];
  char local_39;
  undefined8 ****local_38 [2];
  char local_21;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  lVar7 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar7 + 0x548f);
  uVar8 = (ulong)bVar5;
  sVar1 = *(size_t *)(lVar7 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar7 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(lVar7 + 0x5478);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar7 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  lVar7 = FUN_10015d3ec();
  std::operator+("#",(string *)(lVar7 + 0x5478));
  std::string::string((string *)local_38,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  pppppuVar4 = (undefined8 *****)local_38[0];
  if (-1 < local_21) {
    pppppuVar4 = local_38;
  }
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pppppuVar4);
  if (lVar7 != 0) {
    pppppuVar4 = (undefined8 *****)local_38[0];
    if (-1 < local_21) {
      pppppuVar4 = local_38;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0x80))(*(long **)(param_1 + 200),pppppuVar4,0);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10010c248(long param_1)

{
  FUN_10010c0d0(param_1 + -0x20);
  return;
}




void FUN_10010c250(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  void *local_50 [2];
  char local_39;
  undefined8 ****local_38 [2];
  char local_21;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  lVar7 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar7 + 0x54a7);
  uVar8 = (ulong)bVar5;
  sVar1 = *(size_t *)(lVar7 + 0x5498);
  if (-1 < (char)bVar5) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar7 + 0x5490);
    puVar3 = pvVar11;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(lVar7 + 0x5490);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar7 + 0x5491);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  lVar7 = FUN_10015d3ec();
  std::operator+("#",(string *)(lVar7 + 0x5490));
  std::string::string((string *)local_38,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  pppppuVar4 = (undefined8 *****)local_38[0];
  if (-1 < local_21) {
    pppppuVar4 = local_38;
  }
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pppppuVar4);
  if (lVar7 != 0) {
    pppppuVar4 = (undefined8 *****)local_38[0];
    if (-1 < local_21) {
      pppppuVar4 = local_38;
    }
    FUN_10010add4(param_1,pppppuVar4);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10010c3bc(long param_1)

{
  FUN_10010c250(param_1 + -0x20);
  return;
}




void FUN_10010c3c4(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *****pppppuVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  void *local_50 [2];
  char local_39;
  undefined8 ****local_38 [2];
  char local_21;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  lVar7 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar7 + 0x54a7);
  uVar8 = (ulong)bVar5;
  sVar1 = *(size_t *)(lVar7 + 0x5498);
  if (-1 < (char)bVar5) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar7 + 0x5490);
    puVar3 = pvVar11;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(lVar7 + 0x5490);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar7 + 0x5491);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  lVar7 = FUN_10015d3ec();
  std::operator+("#",(string *)(lVar7 + 0x5490));
  std::string::string((string *)local_38,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  pppppuVar4 = (undefined8 *****)local_38[0];
  if (-1 < local_21) {
    pppppuVar4 = local_38;
  }
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pppppuVar4);
  if (lVar7 != 0) {
    pppppuVar4 = (undefined8 *****)local_38[0];
    if (-1 < local_21) {
      pppppuVar4 = local_38;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0x80))(*(long **)(param_1 + 200),pppppuVar4,0);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10010c53c(long param_1)

{
  FUN_10010c3c4(param_1 + -0x20);
  return;
}




void FUN_10010c544(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  lVar2 = FUN_10010ae48(param_1,local_38);
  uVar1 = *(uint *)(lVar2 + 0x10);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    plVar4 = *(long **)(lVar2 + 0x18);
    do {
      if (*plVar4 == param_3) {
        FUN_1000c044c((uint *)(lVar2 + 0x10),plVar4,plVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10010c5c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  lVar2 = FUN_10010ae48(param_1,local_38);
  if (*(uint *)(lVar2 + 0x20) != 0) {
    lVar3 = *(long *)(lVar2 + 0x28);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x20) << 5;
    do {
      plVar1 = (long *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if (*plVar1 == param_3) {
        FUN_10010caf4();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10010c648(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  lVar2 = FUN_10010ae48(param_1,local_38);
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar3 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      plVar1 = (long *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if (*plVar1 == param_3) {
        FUN_10010caf4();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10010c6c8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 << 5;
    plVar3 = *(long **)(param_1 + 0x60);
    do {
      if (*plVar3 == param_2) {
        FUN_1000c044c((uint *)(param_1 + 0x58),plVar3,plVar3 + 4);
        return;
      }
      lVar2 = lVar2 + -0x20;
      plVar3 = plVar3 + 4;
    } while (lVar2 != 0);
  }
  return;
}




long FUN_10010c704(long param_1)

{
  return param_1 + 0x48;
}




long FUN_10010c70c(undefined8 param_1)

{
  long lVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  lVar1 = FUN_10010ae48(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return lVar1 + 0x58;
}




long FUN_10010c75c(long param_1)

{
  return param_1 + 0xa0;
}




void FUN_10010c764(uint *param_1,undefined8 *param_2)

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
    FUN_10010cb64(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10010c7e4(void)

{
  return;
}




void FUN_10010c7e8(void)

{
  return;
}




void FUN_10010c7ec(void)

{
  return;
}




void FUN_10010c7f0(void)

{
  return;
}




void FUN_10010c7f4(void)

{
  return;
}




void FUN_10010c7f8(void)

{
  return;
}




void FUN_10010c7fc(void)

{
  return;
}




void FUN_10010c800(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10010c800(param_1,*param_2);
    FUN_10010c800(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x57) < '\0') {
      operator_delete((void *)param_2[8]);
    }
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10010c860(long param_1,int *param_2)

{
  undefined1 uVar1;
  
  if (*param_2 == 0x10) {
    uVar1 = FUN_10031615c(0x10);
    *(undefined1 *)(param_1 + 0x180) = uVar1;
  }
  return;
}




void FUN_10010c894(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 4);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 << 4;
      pvVar2 = pvVar1;
      do {
        lVar3 = thunk_FUN_1004e439c(pvVar2,pvVar4);
        pvVar4 = (void *)((long)pvVar4 + 0x10);
        pvVar2 = (void *)(lVar3 + 0x10);
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 4;
        puVar5 = (undefined8 *)((long)pvVar4 + 8);
        do {
          if ((void *)*puVar5 != (void *)0x0) {
            operator_delete__((void *)*puVar5);
            puVar5[-1] = 0;
            *puVar5 = 0;
          }
          puVar5 = puVar5 + 2;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10010c960(uint *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  
  uVar4 = (ulong)*param_1;
  uVar8 = (uint)((ulong)(param_3 - param_2) >> 4);
  if (*param_1 != uVar8) {
    lVar5 = *(long *)(param_1 + 2);
    lVar1 = lVar5 + uVar4 * 0x10;
    uVar3 = lVar1 - param_3;
    lVar7 = param_2;
    if (uVar3 != 0) {
      do {
        FUN_1000153b4(lVar7,param_3);
        param_3 = param_3 + 0x10;
        lVar7 = lVar7 + 0x10;
      } while (param_3 != lVar1);
      uVar4 = (ulong)*param_1;
      lVar5 = *(long *)(param_1 + 2);
    }
    puVar6 = (undefined8 *)(param_2 + (uVar3 >> 4 & 0xffffffff) * 0x10);
    puVar2 = (undefined8 *)(lVar5 + uVar4 * 0x10);
    if (puVar6 != puVar2) {
      do {
        if ((void *)puVar6[1] != (void *)0x0) {
          operator_delete__((void *)puVar6[1]);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar2);
      uVar4 = (ulong)*param_1;
    }
    *param_1 = (int)uVar4 - uVar8;
    return;
  }
  FUN_10010b1a8(param_1,1);
  return;
}




void FUN_10010ca44(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_10010ca98(long param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x17d) = 0;
  bVar1 = FUN_100126968();
  *(byte *)(param_1 + 0x17e) = bVar1 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010010cacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x58))();
  return;
}




void FUN_10010cad0(long param_1)

{
  FUN_10010ac60();
  *(undefined1 *)(param_1 + 0x17f) = 0;
  return;
}




void FUN_10010caf4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_10010cb64(uint *param_1,uint param_2)

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




void FUN_10010cbe0(void)

{
  return;
}




void FUN_10010cbe4(void)

{
  return;
}




undefined1  [16] FUN_10010cbe8(void)

{
  return ZEXT816(0);
}




undefined1  [16] FUN_10010cbf0(void)

{
  return ZEXT816(0);
}




undefined8 * FUN_10010cbf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101459518;
  _bzero(param_1 + 1,0x2805);
  return param_1;
}




void FUN_10010cc2c(void)

{
  return;
}




undefined8 FUN_10010cc30(long param_1)

{
  undefined8 ***pppuVar1;
  undefined4 local_3c;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  *(undefined1 *)(param_1 + 0x280c) = 0;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  thunk_FUN_1004f03a4(&local_38,&local_3c);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_100122b9c(pppuVar1,local_3c);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return 1;
}




void FUN_10010cc9c(long param_1)

{
  *(undefined1 *)(param_1 + 0x280c) = 0;
  FUN_1001148bc();
  FUN_100116278();
  return;
}




void FUN_10010ccb8(void)

{
  return;
}




void FUN_10010ce8c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec234(param_2,1);
  return;
}




void FUN_10010ce98(void)

{
  return;
}




void FUN_10010ce9c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x280c) = param_2;
  return;
}




undefined1 FUN_10010cea8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x280c);
}




void FUN_10010ceb4(void)

{
  return;
}




undefined8 FUN_10010cebc(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_10034cb58();
  if ((((uVar2 & 1) == 0) &&
      (uVar2 = FUN_10034ea2c(*(undefined4 *)(param_1 + 0x260)), (uVar2 & 1) != 0)) ||
     ((iVar1 = FUN_10034cb58(), iVar1 != 0 &&
      (iVar1 = FUN_10034cb84(), iVar1 == *(int *)(param_1 + 0x260))))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_10010cf10(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  float extraout_s0;
  long local_e8 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10010d0b8(DAT_101dc7430);
  uVar3 = FUN_1010a1958(local_e8,0x10,DAT_10184dc78,0);
  uVar5 = uVar3;
  if ((int)uVar3 != 0) {
    uVar8 = uVar3 & 0xffffffff;
    plVar9 = local_e8;
    uVar5 = uVar8;
    do {
      uVar6 = *(undefined8 *)(*(long *)(*plVar9 + 0x10) + 0x10);
      iVar2 = FUN_10010cebc(uVar6);
      if (iVar2 != 0) {
        FUN_10010d148(DAT_101dc7430,uVar6,local_e8,uVar3);
        break;
      }
      plVar9 = plVar9 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    uVar5 = 0;
    plVar9 = local_e8;
    do {
      lVar7 = *plVar9;
      lVar10 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
      uVar3 = FUN_10034cb58();
      if ((((uVar3 & 1) == 0) &&
          (iVar2 = FUN_10034ea2c(*(undefined4 *)(lVar10 + 0x260)), iVar2 != 0)) &&
         (uVar3 = FUN_1000350fc(lVar7), (uVar3 & 1) != 0)) {
        uVar5 = 4;
        break;
      }
      if (((*(byte *)(lVar10 + 0x2f4) >> 2 & 1) != 0) &&
         (uVar3 = FUN_1000350f0(lVar7), (uVar3 & 1) != 0)) {
        uVar5 = 3;
        break;
      }
      FUN_1000320fc();
      uVar3 = FUN_100032244();
      uVar4 = (uint)uVar5;
      if (420.0 <= extraout_s0) {
        uVar4 = 1;
      }
      uVar1 = 2;
      if (extraout_s0 < 900.0) {
        uVar1 = uVar4;
      }
      uVar4 = 3;
      if (extraout_s0 < 1200.0) {
        uVar4 = uVar1;
      }
      uVar5 = (ulong)(uVar4 + (*(byte *)(param_1 + 0xc) & uVar4 < 3));
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_10010d314(uVar3,uVar5);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10010d0b8(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 4);
  if (0.0 < fVar2) {
    fVar2 = (float)FUN_1010a1cd4();
    fVar2 = (float)NEON_fminnm(*(float *)(param_1 + 4) - fVar2,0x40a00000);
    *(float *)(param_1 + 4) = fVar2;
  }
  fVar1 = *(float *)(param_1 + 8);
  if ((0.0 < fVar1) && (fVar2 <= 0.0)) {
    fVar1 = (float)NEON_fminnm(fVar1 + -0.005,0x3f800000);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 8) = fVar1;
  }
  if (fVar1 <= 0.0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  }
  return;
}




void FUN_10010d148(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                  undefined8 param_5,long *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_90;
  undefined8 local_8c;
  float local_80;
  float local_7c;
  float fStack_78;
  
  iVar1 = FUN_10034cb58();
  if (iVar1 == 0) {
LAB_10010d194:
    FUN_100345b68(param_5,&local_80,0);
  }
  else {
    FUN_1000320fc();
    lVar3 = FUN_100033428();
    if ((*(byte *)(lVar3 + 0x7c) >> 4 & 1) == 0) goto LAB_10010d194;
    local_80 = (float)FUN_10010d348();
    local_7c = param_2;
    fStack_78 = param_3;
  }
  if (param_7 != 0) {
    uVar5 = 0;
    uVar6 = (ulong)param_7;
    fVar7 = 0.0;
    do {
      lVar3 = *param_6;
      lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
      FUN_100345b68(lVar4,&local_90,0);
      fVar8 = local_7c - (float)local_8c;
      fVar9 = fStack_78 - (float)((ulong)local_8c >> 0x20);
      if (fVar8 * fVar8 + (local_80 - local_90) * (local_80 - local_90) + fVar9 * fVar9 < 144.0) {
        iVar1 = FUN_100345bbc(lVar4);
        iVar2 = FUN_100345bbc(param_5);
        if ((iVar1 != iVar2) && ((*(byte *)(lVar4 + 0x2fc) & 0x1f) == 0)) break;
        fVar8 = (float)FUN_1000350d8(lVar3);
        fVar9 = (float)FUN_1000350e4(lVar3);
        fVar7 = fVar8 + fVar7 + fVar9;
        uVar5 = uVar5 + 1;
      }
      param_6 = param_6 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (uVar5 != 0) {
      fVar7 = fVar7 / (float)uVar5;
    }
    if (0.0 < fVar7) {
      *(undefined4 *)(param_4 + 4) = 0x40a00000;
      FUN_1000320fc();
      fVar8 = (float)FUN_100032244();
      fVar7 = (float)NEON_fminnm(SQRT(SQRT(-0.5 / fVar8 + 1.0) * fVar7) + *(float *)(param_4 + 8),
                                 0x3f800000);
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)(param_4 + 8) = fVar7;
      goto LAB_10010d2d8;
    }
  }
  fVar7 = *(float *)(param_4 + 8);
LAB_10010d2d8:
  if (1.0 <= fVar7) {
    *(byte *)(param_4 + 0xc) = *(byte *)(param_4 + 0xc) | 1;
  }
  return;
}




void FUN_10010d314(undefined8 param_1,uint param_2)

{
  if ((*DAT_101dc7430 != param_2) && (*DAT_101dc7430 = param_2, param_2 < 5)) {
    FUN_100101734((&PTR_s_jungle_101459570)[(int)param_2]);
    return;
  }
  return;
}




undefined1  [16] FUN_10010d348(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  lVar2 = FUN_10002e584();
  auVar3 = ___sincosf_stret(*(float *)(lVar2 + 4) * 0.0055555557 * 3.1415927);
  uVar4 = auVar3._8_8_;
  lVar2 = FUN_10002e54c(uVar1);
  auVar3._4_4_ = auVar3._4_4_;
  auVar3._0_4_ = *(float *)(lVar2 + 0x30) + auVar3._0_4_ * 20.0;
  FUN_10002e57c(uVar1);
  FUN_10002e54c(uVar1);
  auVar3._8_8_ = uVar4;
  return auVar3;
}




void FUN_10010d3e4(void)

{
  DAT_101dc7430 = operator_new(0x10);
  *DAT_101dc7430 = 0;
  *(undefined8 *)((long)DAT_101dc7430 + 5) = 0;
  return;
}




void FUN_10010d40c(void)

{
  if (DAT_101dc7430 != (void *)0x0) {
    operator_delete(DAT_101dc7430);
  }
  DAT_101dc7430 = (void *)0x0;
  return;
}




void FUN_10010d438(void)

{
  if (DAT_101dc7430 != 0) {
    FUN_10010cf10();
    return;
  }
  return;
}




void FUN_10010d44c(void)

{
  if ((DAT_10184dc80 & 1) == 0) {
    DAT_10184dc78 = DAT_101872e38;
    DAT_10184dc80 = 1;
  }
  return;
}




undefined8 * FUN_10010d478(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10010d604_1014595a8;
  param_1[3] = &PTR_FUN_101459950;
  FUN_100169ba4(param_1 + 6);
  param_1[6] = &PTR_FUN_101459980;
  FUN_1004f1580(param_1 + 9);
  param_1[9] = &PTR_FUN_1014599b8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  FUN_1004f1580(param_1 + 0x12);
  param_1[0x12] = &PTR_FUN_101454740;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  FUN_1004f1580(param_1 + 0x1e);
  param_1[0x1e] = &PTR_FUN_101454740;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  FUN_1004f1580(param_1 + 0x2a);
  param_1[0x2a] = &PTR_FUN_101454740;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  FUN_1004f1580(param_1 + 0x36);
  param_1[0x36] = &PTR_FUN_101454740;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_1004f1580(param_1 + 0x42);
  param_1[0x42] = &PTR_FUN_101454740;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  thunk_FUN_100016500(param_1 + 0x54,"FRIENDS.REQUEST",1);
  FUN_10003330c(param_1 + 0x58,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x5b,&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x5e) = 0x41a00000;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((long)param_1 + 0x2fa) = 0;
  FUN_1000165f0(param_1 + 0x54,0);
  return param_1;
}




void FUN_10010d604(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10010d604_1014595a8;
  param_1[3] = &PTR_FUN_101459950;
  DAT_101d230b0 = 0;
  DAT_101d230b8 = 0;
  DAT_101d230c0 = 0;
  if (*(char *)((long)param_1 + 0x2ef) < '\0') {
    operator_delete((void *)param_1[0x5b]);
  }
  if (*(char *)((long)param_1 + 0x2d7) < '\0') {
    operator_delete((void *)param_1[0x58]);
  }
  thunk_FUN_10001653c(param_1 + 0x54);
  FUN_1001107e4(param_1 + 0x52,1);
  FUN_100110778(param_1 + 0x50,1);
  FUN_100110778(param_1 + 0x4e,1);
  param_1[0x42] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x26f) < '\0') {
    operator_delete((void *)param_1[0x4b]);
  }
  if (*(char *)((long)param_1 + 0x24f) < '\0') {
    operator_delete((void *)param_1[0x47]);
  }
  FUN_1004f15a8(param_1 + 0x42);
  param_1[0x36] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x20f) < '\0') {
    operator_delete((void *)param_1[0x3f]);
  }
  if (*(char *)((long)param_1 + 0x1ef) < '\0') {
    operator_delete((void *)param_1[0x3b]);
  }
  FUN_1004f15a8(param_1 + 0x36);
  param_1[0x2a] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    operator_delete((void *)param_1[0x33]);
  }
  if (*(char *)((long)param_1 + 399) < '\0') {
    operator_delete((void *)param_1[0x2f]);
  }
  FUN_1004f15a8(param_1 + 0x2a);
  param_1[0x1e] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    operator_delete((void *)param_1[0x27]);
  }
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    operator_delete((void *)param_1[0x23]);
  }
  FUN_1004f15a8(param_1 + 0x1e);
  param_1[0x12] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    operator_delete((void *)param_1[0x1b]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    operator_delete((void *)param_1[0x17]);
  }
  FUN_1004f15a8(param_1 + 0x12);
  param_1[9] = &PTR_FUN_1014599b8;
  param_1[6] = &PTR_FUN_101459980;
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_1004f15a8(param_1 + 9);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




undefined8 * FUN_10010d7d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101459980;
  param_1[3] = &PTR_FUN_1014599b8;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_1004f15a8(param_1 + 3);
  return param_1;
}




void thunk_FUN_10010d604(void)

{
  FUN_10010d604();
  return;
}




void FUN_10010d82c(long param_1)

{
  FUN_10010d604(param_1 + -0x18);
  return;
}




void FUN_10010d834(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10010d604();
  operator_delete(pvVar1);
  return;
}




void FUN_10010d848(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10010d604(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10010d860(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  iVar2 = FUN_1004f1698(param_1 + 0x48);
  if (((iVar2 != 0) && (FUN_10010da6c(param_1,param_1 + 0x48), *(char *)(param_1 + 0x2f8) == '\0'))
     && (lVar3 = FUN_10015d3ec(), *(int *)(lVar3 + 0x55cc) == 1)) {
    *(undefined1 *)(param_1 + 0x2f8) = 1;
    FUN_100102240("numFriends",*(int *)(param_1 + 0x2f4) + *(int *)(param_1 + 0x270),1);
  }
  iVar2 = FUN_1004f1698(param_1 + 0x90);
  if (iVar2 != 0) {
    plVar5 = (long *)(DAT_101d230b0 + -8);
    if (DAT_101d230b0 != 0 && plVar5 != (long *)0x0) {
      do {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + 0x90);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      } while (plVar5 != (long *)0x0);
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  iVar2 = FUN_1004f1698(param_1 + 0x1b0);
  if (iVar2 != 0) {
    if (DAT_101d230b0 != 0) {
      plVar5 = (long *)(DAT_101d230b0 + -8);
      while (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 0x1b0);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x2f9) != '\0') {
    if (DAT_101d230b0 != 0) {
      plVar5 = (long *)(DAT_101d230b0 + -8);
      while (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2f9) = 0;
  }
  iVar2 = FUN_1004f1698(param_1 + 0xf0);
  if (iVar2 != 0) {
    iVar2 = FUN_1004f1680(param_1 + 0xf0);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x130) == 0)) {
      FUN_10010f6bc(param_1);
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x2fa) != '\0') {
    if (DAT_101d230b0 != 0) {
      plVar5 = (long *)(DAT_101d230b0 + -8);
      while (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
        plVar1 = plVar5 + 1;
        plVar5 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar5 = (long *)(*plVar1 + -8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2fa) = 0;
  }
  uVar4 = FUN_1004f1698(param_1 + 0x150);
  if (((uVar4 & 1) != 0) || (iVar2 = FUN_1004f1698(param_1 + 0x210), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  FUN_100169bc4(param_1 + 0x30);
  return;
}




void FUN_10010f6bc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_1 + 0x270);
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 0x181;
    do {
      lVar5 = *(long *)(param_1 + 0x278);
      if ((*(char *)(lVar5 + lVar3) != '\0') &&
         (iVar1 = FUN_10010f7ac(param_1,lVar5 + lVar3 + -0x179), iVar1 != -1)) {
        lVar5 = lVar5 + (long)iVar1 * 0x188;
        FUN_100114024(param_1 + 0x270,lVar5,lVar5 + 0x188);
        *(undefined1 *)(param_1 + 0x2f9) = 1;
        uVar4 = *(uint *)(param_1 + 0x270);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x188;
    } while (uVar2 < uVar4);
  }
  return;
}




void FUN_10010f758(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100131560();
  param_2 = param_2 & (uVar1 ^ 0xffffffff);
  uVar2 = 0xbf800000;
  if (param_2 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x2f0);
  }
  FUN_100169cf8(uVar2,param_1 + 0x30);
  FUN_100169cc0(param_1 + 0x30,param_2 ^ 1);
  return;
}




ulong FUN_10010f7ac(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  uVar3 = *(uint *)(param_1 + 0x270);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x278);
    pbVar13 = (byte *)(lVar12 + 9);
    do {
      lVar9 = lVar12 + uVar11 * 0x188;
      bVar4 = *(byte *)(lVar9 + 0x1f);
      uVar7 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar9 + 0x10);
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if (sVar5 == 0) {
            return uVar11;
          }
          iVar6 = _memcmp(*(void **)(lVar9 + 8),pbVar1,sVar5);
          if (iVar6 == 0) {
            return uVar11;
          }
        }
        else {
          if (sVar5 == 0) {
            return uVar11;
          }
          pbVar10 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 8) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) {
                return uVar11;
              }
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      pbVar13 = pbVar13 + 0x188;
    } while (uVar11 != uVar3);
  }
  return 0xffffffff;
}




long FUN_10010f8ac(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x270) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = FUN_1004e3654(*(long *)(param_1 + 0x278) + lVar2 + 0x20,param_2);
      if (iVar1 != 0) {
        return *(long *)(param_1 + 0x278) + lVar2;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x188;
    } while (uVar3 < *(uint *)(param_1 + 0x270));
  }
  return 0;
}




long FUN_10010f920(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  
  uVar3 = *(uint *)(param_1 + 0x270);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar11 = *(long *)(param_1 + 0x278);
    pbVar13 = (byte *)(lVar11 + 9);
    do {
      lVar9 = lVar11 + uVar12 * 0x188;
      bVar4 = *(byte *)(lVar9 + 0x1f);
      uVar7 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar9 + 0x10);
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(lVar9 + 8),pbVar1,sVar5), iVar6 == 0)) {
LAB_10010fa08:
            return lVar11 + (uVar12 & 0xffffffff) * 0x188;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_10010fa08;
          pbVar10 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 8) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) goto LAB_10010fa08;
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar12 = uVar12 + 1;
      pbVar13 = pbVar13 + 0x188;
    } while (uVar12 != uVar3);
  }
  return 0;
}




void FUN_10010fa2c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_10010fa84(param_1,param_2);
    FUN_1004ef410(param_2,param_1 + 0x90);
    FUN_1001049e0();
    FUN_100169cc0(param_1 + 0x30,1);
    return;
  }
  return;
}




void FUN_10010fa84(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x290) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = FUN_1004e3654(*(long *)(param_1 + 0x298) + lVar2 + 0x20,param_2);
      if (iVar1 != 0) {
        lVar2 = *(long *)(param_1 + 0x298) + lVar2;
        FUN_1001124d4((uint *)(param_1 + 0x290),lVar2,lVar2 + 0x38);
        *(undefined1 *)(param_1 + 0x2fa) = 1;
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (uVar3 < *(uint *)(param_1 + 0x290));
  }
  return;
}




void FUN_10010fb14(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0xf0);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_10010f920(param_1,param_2);
      if (lVar3 != 0) {
        *(undefined1 *)(lVar3 + 0x181) = 1;
      }
      FUN_1004ef4ac(param_2,param_1 + 0xf0);
      FUN_100169cc0(param_1 + 0x30,1);
      return;
    }
  }
  return;
}




void FUN_10010fb90(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004ef4e0(param_2,param_1 + 0x150);
    FUN_100169cc0(param_1 + 0x30,1);
    return;
  }
  return;
}




void FUN_10010fbd8(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004ef514(param_2,param_1 + 0x150);
    FUN_100169cc0(param_1 + 0x30,1);
    return;
  }
  return;
}




long FUN_10010fc20(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  
  uVar3 = *(uint *)(param_1 + 0x280);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar11 = *(long *)(param_1 + 0x288);
    pbVar13 = (byte *)(lVar11 + 9);
    do {
      lVar9 = lVar11 + uVar12 * 0x188;
      bVar4 = *(byte *)(lVar9 + 0x1f);
      uVar7 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar9 + 0x10);
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(lVar9 + 8),pbVar1,sVar5), iVar6 == 0)) {
LAB_10010fd08:
            return lVar11 + (uVar12 & 0xffffffff) * 0x188;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_10010fd08;
          pbVar10 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 8) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) goto LAB_10010fd08;
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar12 = uVar12 + 1;
      pbVar13 = pbVar13 + 0x188;
    } while (uVar12 != uVar3);
  }
  return 0;
}




void FUN_10010fd2c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004ef444(param_2,param_1 + 0x1b0);
    FUN_100104a24();
    FUN_100169cc0(param_1 + 0x30,1);
    if (0 < *(int *)(param_1 + 0x2b8)) {
      FUN_100016598(param_1 + 0x2a0,0xffffffff);
      return;
    }
  }
  return;
}




void FUN_10010fd90(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004ef478(param_2,param_1 + 0x210);
    FUN_100169cc0(param_1 + 0x30,1);
    if (0 < *(int *)(param_1 + 0x2b8)) {
      FUN_100016598(param_1 + 0x2a0,0xffffffff);
      return;
    }
  }
  return;
}




undefined8 FUN_10010fdf0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulong *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (((*param_3 ^ *param_2) & 0x1ffffffff) == 0) {
    bVar5 = *(byte *)((long)param_2 + 0x1f);
    uVar10 = (ulong)bVar5;
    sVar1 = param_2[2];
    if (-1 < (char)bVar5) {
      sVar1 = uVar10;
    }
    bVar6 = *(byte *)((long)param_3 + 0x1f);
    sVar2 = param_3[2];
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar1 == sVar2) {
      puVar12 = (ulong *)param_2[1];
      puVar3 = puVar12;
      if (-1 < (char)bVar5) {
        puVar3 = param_2 + 1;
      }
      puVar13 = (ulong *)param_3[1];
      if (-1 < (char)bVar6) {
        puVar13 = param_3 + 1;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
          return 0;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
          return 0;
        }
        pcVar11 = (char *)((long)param_2 + 9);
        while( true ) {
          uVar10 = uVar10 - 1;
          puVar13 = (ulong *)((long)puVar13 + 1);
          if (uVar10 == 0) break;
          cVar4 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          if (cVar4 != *(char *)puVar13) {
            return 0;
          }
        }
      }
      uVar8 = FUN_1004e3634(param_3 + 4);
      uVar8 = FUN_1004e3790(param_2 + 4,param_3 + 4,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 6);
      uVar8 = FUN_1004e3790(param_2 + 6,param_3 + 6,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      uVar8 = FUN_1004e3634(param_3 + 8);
      uVar8 = FUN_1004e3790(param_2 + 8,param_3 + 8,uVar8);
      if ((int)uVar8 == 0) {
        return uVar8;
      }
      bVar5 = *(byte *)((long)param_2 + 0x67);
      uVar10 = (ulong)bVar5;
      sVar1 = param_2[0xb];
      if (-1 < (char)bVar5) {
        sVar1 = uVar10;
      }
      bVar6 = *(byte *)((long)param_3 + 0x67);
      sVar2 = param_3[0xb];
      if (-1 < (char)bVar6) {
        sVar2 = (ulong)bVar6;
      }
      if (sVar1 == sVar2) {
        puVar12 = (ulong *)param_2[10];
        puVar3 = puVar12;
        if (-1 < (char)bVar5) {
          puVar3 = param_2 + 10;
        }
        puVar13 = (ulong *)param_3[10];
        if (-1 < (char)bVar6) {
          puVar13 = param_3 + 10;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
            return 0;
          }
        }
        else if (sVar1 != 0) {
          if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
            return 0;
          }
          pcVar11 = (char *)((long)param_2 + 0x51);
          while( true ) {
            uVar10 = uVar10 - 1;
            puVar13 = (ulong *)((long)puVar13 + 1);
            if (uVar10 == 0) break;
            cVar4 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            if (cVar4 != *(char *)puVar13) {
              return 0;
            }
          }
        }
        uVar8 = FUN_1004e3634(param_3 + 0xd);
        uVar8 = FUN_1004e3790(param_2 + 0xd,param_3 + 0xd,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        uVar8 = FUN_1004e3634(param_3 + 0xf);
        uVar8 = FUN_1004e3790(param_2 + 0xf,param_3 + 0xf,uVar8);
        if ((int)uVar8 == 0) {
          return uVar8;
        }
        bVar5 = *(byte *)((long)param_2 + 0x9f);
        uVar10 = (ulong)bVar5;
        sVar1 = param_2[0x12];
        if (-1 < (char)bVar5) {
          sVar1 = uVar10;
        }
        bVar6 = *(byte *)((long)param_3 + 0x9f);
        sVar2 = param_3[0x12];
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          puVar12 = (ulong *)param_2[0x11];
          puVar3 = puVar12;
          if (-1 < (char)bVar5) {
            puVar3 = param_2 + 0x11;
          }
          puVar13 = (ulong *)param_3[0x11];
          if (-1 < (char)bVar6) {
            puVar13 = param_3 + 0x11;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,puVar13,sVar1), iVar7 != 0)) {
              return 0;
            }
          }
          else if (sVar1 != 0) {
            if ((uint)(byte)*puVar13 != ((uint)puVar12 & 0xff)) {
              return 0;
            }
            pcVar11 = (char *)((long)param_2 + 0x89);
            while( true ) {
              uVar10 = uVar10 - 1;
              puVar13 = (ulong *)((long)puVar13 + 1);
              if (uVar10 == 0) break;
              cVar4 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              if (cVar4 != *(char *)puVar13) {
                return 0;
              }
            }
          }
          if ((((((double)param_2[0x14] == (double)param_3[0x14]) &&
                ((((*param_2 & 0xffff) != 2 && ((short)*param_3 != 2)) ||
                 ((uint)param_2[0x15] == (uint)param_3[0x15])))) &&
               ((((*(uint *)((long)param_2 + 0xac) == *(uint *)((long)param_3 + 0xac) &&
                  ((uint)param_2[0x16] == (uint)param_3[0x16])) &&
                 ((((uint)*param_3 ^ (uint)*param_2) & 0xff0000) == 0)) &&
                (((uint)param_2[0x1d] == (uint)param_3[0x1d] &&
                 (*(uint *)((long)param_2 + 0xec) == *(uint *)((long)param_3 + 0xec))))))) &&
              (((((uint)param_2[0x1e] == (uint)param_3[0x1e] &&
                 ((((*(float *)((long)param_2 + 0xf4) == *(float *)((long)param_3 + 0xf4) &&
                    (*(float *)(param_2 + 0x1f) == *(float *)(param_3 + 0x1f))) &&
                   (*(float *)((long)param_2 + 0xfc) == *(float *)((long)param_3 + 0xfc))) &&
                  ((*(float *)(param_2 + 0x20) == *(float *)(param_3 + 0x20) &&
                   (*(float *)((long)param_2 + 0x104) == *(float *)((long)param_3 + 0x104))))))) &&
                (*(float *)(param_2 + 0x21) == *(float *)(param_3 + 0x21))) &&
               ((*(float *)((long)param_2 + 0x10c) == *(float *)((long)param_3 + 0x10c) &&
                (param_2[0x22] == param_3[0x22])))))) &&
             ((((uint)param_2[0x17] == (uint)param_3[0x17] &&
               (((*(uint *)((long)param_2 + 0xbc) == *(uint *)((long)param_3 + 0xbc) &&
                 ((uint)param_2[0x18] == (uint)param_3[0x18])) &&
                (*(float *)((long)param_2 + 0xc4) == *(float *)((long)param_3 + 0xc4))))) &&
              (((((*(float *)(param_2 + 0x19) == *(float *)(param_3 + 0x19) &&
                  (*(float *)((long)param_2 + 0xcc) == *(float *)((long)param_3 + 0xcc))) &&
                 (*(float *)(param_2 + 0x1a) == *(float *)(param_3 + 0x1a))) &&
                (((*(float *)((long)param_2 + 0xd4) == *(float *)((long)param_3 + 0xd4) &&
                  (*(float *)(param_2 + 0x1b) == *(float *)(param_3 + 0x1b))) &&
                 ((*(float *)((long)param_2 + 0xdc) == *(float *)((long)param_3 + 0xdc) &&
                  (((param_2[0x1c] == param_3[0x1c] && ((uint)param_2[0x23] == (uint)param_3[0x23]))
                   && (*(uint *)((long)param_2 + 0x11c) == *(uint *)((long)param_3 + 0x11c)))))))))
               && ((((uint)param_2[0x24] == (uint)param_3[0x24] &&
                    (*(float *)((long)param_2 + 0x124) == *(float *)((long)param_3 + 0x124))) &&
                   ((*(float *)(param_2 + 0x25) == *(float *)(param_3 + 0x25) &&
                    (((*(float *)((long)param_2 + 300) == *(float *)((long)param_3 + 300) &&
                      (*(float *)(param_2 + 0x26) == *(float *)(param_3 + 0x26))) &&
                     ((*(float *)((long)param_2 + 0x134) == *(float *)((long)param_3 + 0x134) &&
                      ((((*(float *)(param_2 + 0x27) == *(float *)(param_3 + 0x27) &&
                         (*(float *)((long)param_2 + 0x13c) == *(float *)((long)param_3 + 0x13c)))
                        && (param_2[0x28] == param_3[0x28])) &&
                       (((uint)param_2[0x29] == (uint)param_3[0x29] &&
                        ((uint)param_2[0x2a] == (uint)param_3[0x2a])))))))))))))))))) {
            if ((uint)param_2[0x2a] != 0) {
              lVar14 = 0;
              uVar10 = 0;
              do {
                thunk_FUN_1004e439c(auStack_50,param_2[0x2b] + lVar14);
                thunk_FUN_1004e439c(auStack_60,param_3[0x2b] + lVar14);
                uVar8 = FUN_1004e3634(auStack_60);
                uVar9 = FUN_1004e3790(auStack_50,auStack_60,uVar8);
                if (local_58 != (void *)0x0) {
                  operator_delete__(local_58);
                }
                if (local_48 != (void *)0x0) {
                  operator_delete__(local_48);
                }
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                uVar10 = uVar10 + 1;
                lVar14 = lVar14 + 0x10;
              } while (uVar10 < (uint)param_2[0x2a]);
            }
            if ((uint)param_2[0x2c] == (uint)param_3[0x2c]) {
              bVar5 = *(byte *)((long)param_2 + 0x17f);
              uVar10 = (ulong)bVar5;
              sVar1 = param_2[0x2e];
              if (-1 < (char)bVar5) {
                sVar1 = uVar10;
              }
              bVar6 = *(byte *)((long)param_3 + 0x17f);
              sVar2 = param_3[0x2e];
              if (-1 < (char)bVar6) {
                sVar2 = (ulong)bVar6;
              }
              if (sVar1 == sVar2) {
                puVar12 = (ulong *)param_2[0x2d];
                puVar3 = puVar12;
                if (-1 < (char)bVar5) {
                  puVar3 = param_2 + 0x2d;
                }
                puVar13 = (ulong *)param_3[0x2d];
                if (-1 < (char)bVar6) {
                  puVar13 = param_3 + 0x2d;
                }
                if ((char)bVar5 < '\0') {
                  if (sVar1 == 0) {
                    return 1;
                  }
                  iVar7 = _memcmp(puVar3,puVar13,sVar1);
                  if (iVar7 == 0) {
                    return 1;
                  }
                }
                else {
                  if (sVar1 == 0) {
                    return 1;
                  }
                  if ((uint)(byte)*puVar13 == ((uint)puVar12 & 0xff)) {
                    pcVar11 = (char *)((long)param_2 + 0x169);
                    do {
                      uVar10 = uVar10 - 1;
                      puVar13 = (ulong *)((long)puVar13 + 1);
                      if (uVar10 == 0) {
                        return 1;
                      }
                      cVar4 = *pcVar11;
                      pcVar11 = pcVar11 + 1;
                    } while (cVar4 == *(char *)puVar13);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

