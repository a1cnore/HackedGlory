// functions/1003e — 379 functions
#include "GameKindred.h"




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




void thunk_FUN_1003e0a70(void)

{
  FUN_1003e0a70();
  return;
}




undefined8 FUN_1003e000c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




undefined4 FUN_1003e0014(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




void FUN_1003e001c(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x1a8);
  lVar1 = *plVar2;
  if (lVar1 != 0 && param_3 != 0) {
    do {
      plVar2 = plVar2 + 1;
      param_3 = param_3 + -1;
      lVar1 = *plVar2;
    } while (lVar1 != 0 && param_3 != 0);
  }
  FUN_1003df74c(param_1,lVar1,param_4);
  return;
}




void FUN_1003e0054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010a1520();
  uVar1 = FUN_1010a0e0c(uVar1,0,param_2,0);
  FUN_1003e001c(param_1,uVar1,param_3,param_4);
  return;
}




undefined1  [16]
FUN_1003e00a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    FUN_1003461dc();
    lVar1 = FUN_100345d90();
    if (lVar1 != 0) {
      FUN_1003dfe60(lVar1,param_2,param_3,param_4,param_5);
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_00;
      return auVar2;
    }
  }
  return ZEXT816(0);
}




float FUN_1003e0110(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x54);
}




undefined8 * FUN_1003e0174(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  FUN_1003e33b0(param_1 + 2);
  param_1[0x3ca] = 0;
  param_1[0x3c9] = 0;
  *(undefined1 *)(param_1 + 0x3cb) = 1;
  return param_1;
}




long * FUN_1003e01b8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000141e0();
  }
  return param_1;
}




void FUN_1003e01e4(long param_1)

{
  FUN_1003e01ec(param_1 + 0x10);
  return;
}




void FUN_1003e01ec(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  plVar1 = (long *)*param_2;
  *param_1 = (long)plVar1;
  lVar2 = param_2[1];
  *(int *)(param_1 + 1) = (int)lVar2;
  param_1[0xc] = 0x3f8000003f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  if (plVar1 != (long *)0x0) {
    if ((int)lVar2 == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0x264) == '\x01') {
          param_1[0x331] = 0x3d23d70ac07147ae;
          uVar3 = 0x4121c28f;
        }
        else {
          if (*(char *)(lVar2 + 0x264) == '\x02') {
            param_1[0x331] = 0x3d23d70a408b3333;
            *(undefined4 *)(param_1 + 0x332) = 0x41200000;
            param_1[0x335] = -0x3dfbffffbe9428f6;
            param_1[0x334] = 0x3c23d70ac1a80000;
            param_1[0x336] = 0x416733333c23d70a;
            goto LAB_1003e02d0;
          }
          param_1[0x331] = 0;
          uVar3 = 0;
        }
        *(undefined4 *)(param_1 + 0x332) = uVar3;
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
LAB_1003e02d0:
  uVar3 = DAT_101dc0b88;
  param_1[0x33a] = 0;
  *(undefined4 *)(param_1 + 0x33b) = uVar3;
  param_1[0x33c] = 0;
  *(undefined4 *)(param_1 + 0x33d) = uVar3;
  param_1[0x33e] = 0;
  *(undefined4 *)(param_1 + 0x33f) = 0;
  *(undefined4 *)((long)param_1 + 0x1a0c) = 0;
  *(undefined8 *)((long)param_1 + 0x19fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1a01) = 0;
  param_1[0x362] = 0;
  *(undefined4 *)(param_1 + 0x363) = uVar3;
  param_1[0x364] = 0;
  *(undefined4 *)(param_1 + 0x365) = uVar3;
  param_1[0x366] = 0;
  *(undefined4 *)(param_1 + 0x367) = 0;
  *(undefined4 *)((long)param_1 + 0x1b4c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b41) = 0;
  *(undefined8 *)((long)param_1 + 0x1b3c) = 0;
  param_1[0x36a] = 0;
  *(undefined4 *)(param_1 + 0x36b) = uVar3;
  param_1[0x36c] = 0;
  *(undefined4 *)(param_1 + 0x36d) = uVar3;
  *(undefined4 *)(param_1 + 0x36f) = 0;
  param_1[0x36e] = 0;
  *(undefined4 *)((long)param_1 + 0x1b8c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b81) = 0;
  *(undefined8 *)((long)param_1 + 0x1b7c) = 0;
  param_1[0x372] = 0;
  *(undefined4 *)(param_1 + 0x373) = uVar3;
  param_1[0x374] = 0;
  *(undefined4 *)(param_1 + 0x375) = uVar3;
  *(undefined4 *)(param_1 + 0x377) = 0;
  param_1[0x376] = 0;
  *(undefined4 *)((long)param_1 + 0x1bcc) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc1) = 0;
  plVar1 = param_1 + 0x342;
  lVar2 = 3;
  *(undefined8 *)((long)param_1 + 0x1bbc) = 0;
  while( true ) {
    *plVar1 = 0;
    *(undefined4 *)(plVar1 + 1) = uVar3;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = uVar3;
    *(undefined4 *)(plVar1 + 5) = 0;
    plVar1[4] = 0;
    *(undefined4 *)((long)plVar1 + 0x3c) = 0;
    *(undefined8 *)((long)plVar1 + 0x2c) = 0;
    *(undefined8 *)((long)plVar1 + 0x31) = 0;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    plVar1 = plVar1 + 8;
    uVar3 = DAT_101dc0b88;
  }
  return;
}




void FUN_1003e03f8(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0x70) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0x78) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x200);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0x278) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0x280) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x100);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0x380) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0x388) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x300);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x680) = 0;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0x688) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0x690) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x200);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0xa18) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0xa20) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x300);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x1338) = *(undefined4 *)(param_1 + 0xd18);
  *(undefined4 *)(param_1 + 0xd18) = 0;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0xd20) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0xd28) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x300);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x1334) = *(undefined4 *)(param_1 + 0x1020);
  *(undefined4 *)(param_1 + 0x1020) = 0;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0x890) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0x898) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x180);
  *(undefined4 *)(param_1 + 0xa10) = 0;
  lVar3 = -0x100;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0x1330) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0x1338) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x133c) = *(undefined4 *)(param_1 + 0x1330);
  *(undefined4 *)(param_1 + 0x1330) = 0;
  lVar3 = -0x200;
  do {
    uVar2 = DAT_101dc0b88;
    *(undefined8 *)(param_1 + lVar3 + 0x1228) = 0;
    *(undefined4 *)(param_1 + lVar3 + 0x1230) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x1340) = *(undefined4 *)(param_1 + 0x1228);
  *(undefined4 *)(param_1 + 0x1228) = 0;
  plVar1 = *(long **)(param_1 + 0x1478);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1480) == (int)plVar1[1]) {
      lVar3 = (**(code **)(*plVar1 + 0x10))();
      uVar2 = DAT_101dc0b88;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
      if (((int)uVar4 == 0x1f) || (1 < *(ushort *)(lVar3 + uVar4 * 0x38 + 0x90) - 3))
      goto LAB_1003e05dc;
      *(undefined8 *)(param_1 + 0x1478) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x1478) = 0;
      uVar2 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x1480) = uVar2;
  }
LAB_1003e05dc:
  *(undefined1 *)(param_1 + 0x1448) = 0;
  *(undefined1 *)(param_1 + 0x1984) = 0;
  *(undefined8 *)(param_1 + 0x1428) = 0;
  *(undefined8 *)(param_1 + 0x1420) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined4 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(long *)(param_1 + 0x1450) = param_1 + 0x1458;
  *(undefined8 *)(param_1 + 0x1dd0) = 0;
  *(undefined8 *)(param_1 + 0x1dc8) = 0;
  return;
}




undefined8 FUN_1003e0630(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  
  FUN_1010a1cd4();
  *(float *)((long)param_1 + 0x7c) =
       *(float *)((long)param_1 + 0x7c) +
       (float)CONCAT13(extraout_var_07,CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0)))
  ;
  if (0.0 < *(float *)(param_1 + 0x3ca)) {
    FUN_1010a1cd4();
    *(float *)(param_1 + 0x3ca) =
         *(float *)(param_1 + 0x3ca) -
         (float)CONCAT13(extraout_var_08,
                         CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00)));
    return 0;
  }
  plVar1 = param_1 + 2;
  FUN_1003e07b4(plVar1);
  if ((*(char *)(param_1 + 0x3cb) != '\0') && (plVar3 = (long *)*plVar1, plVar3 != (long *)0x0)) {
    if (*(int *)(param_1 + 3) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x88) & 0x1f;
        if ((((int)uVar5 != 0x1f) && (*(ushort *)(lVar4 + uVar5 * 0x38 + 0x90) - 3 < 3)) ||
           (((*(ushort *)(lVar4 + 0x2f8) ^ 0xffff) & 0x201a) == 0)) {
          FUN_100032228();
          *(uint *)((long)param_1 + 0x1e54) =
               CONCAT13(extraout_var_09,
                        CONCAT12(extraout_var_05,CONCAT11(extraout_var_01,extraout_b0_01)));
          return 0;
        }
        FUN_100032228();
        if ((float)CONCAT13(extraout_var_10,
                            CONCAT12(extraout_var_06,CONCAT11(extraout_var_02,extraout_b0_02))) -
            *(float *)((long)param_1 + 0x1e54) < 0.5) {
          return 0;
        }
      }
    }
    else {
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
    }
  }
  plVar6 = param_1 + 1;
  plVar3 = (long *)*plVar6;
  *plVar6 = 0;
  uVar2 = FUN_1003e086c(*param_1,plVar1,plVar6);
  *(uint *)(param_1 + 0x3c9) = uVar2;
  if (((uVar2 | 2) == 3 && plVar3 != (long *)0x0) && (plVar3 != (long *)*plVar6)) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *(undefined4 *)(param_1 + 0x32d) = 0;
  param_1[0x32a] = 0;
  param_1[0x329] = 0;
  param_1[0x32c] = 0;
  param_1[0x32b] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x3ca) = *(undefined4 *)((long)param_1 + 0x1e4c);
  return 1;
}




void FUN_1003e07b4(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        FUN_1003e03f8(param_1);
        FUN_1003e3cd4(param_1);
        uVar4 = FUN_1003e3fb0(param_1);
        FUN_1003e1570(uVar4,lVar3,lVar3,param_1 + 3);
        FUN_1003e42fc(param_1);
        FUN_1003e45ac(param_1);
        FUN_1003e49a4(param_1);
        uVar1 = FUN_1003df478(lVar3,param_1 + 0x37a,0x19);
        *(undefined4 *)((long)param_1 + 0x1dc4) = uVar1;
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  return;
}




int FUN_1003e086c(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_1[4] == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 3) {
    (**(code **)(*param_1 + 0x20))(param_1);
    iVar1 = (int)param_1[4];
    if (iVar1 == 1) {
      lVar2 = param_1[2];
      if (lVar2 != 0) {
        iVar1 = 0;
        lVar3 = lVar2;
        do {
          lVar3 = *(long *)(lVar3 + 0x18);
          iVar1 = iVar1 + -1;
        } while (lVar3 != 0);
        if (iVar1 != 0) {
          iVar1 = 1;
          lVar3 = lVar2;
          do {
            lVar3 = *(long *)(lVar3 + 0x18);
            iVar1 = iVar1 + -1;
          } while (lVar3 != 0);
          if (iVar1 != 0) {
            return 1;
          }
          *(long *)(param_2 + 0x1dc8) = lVar2;
          return 1;
        }
      }
      *(long **)(param_2 + 0x1dc8) = param_1;
      return 1;
    }
    if (iVar1 == 2) {
      lVar2 = param_1[2];
      if (lVar2 != 0) {
        iVar1 = 0;
        do {
          lVar2 = *(long *)(lVar2 + 0x18);
          iVar1 = iVar1 + -1;
        } while (lVar2 != 0);
        if (iVar1 != 0) {
          return 2;
        }
      }
      *(long **)(param_2 + 0x1dd0) = param_1;
      return 2;
    }
    if (iVar1 != 3) {
      return iVar1;
    }
  }
  if (*param_3 == 0) {
    *param_3 = (long)param_1;
  }
  return 3;
}




void FUN_1003e0980(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1e58) = param_2;
  return;
}




long FUN_1003e098c(long param_1)

{
  return param_1 + 0x10;
}




void FUN_1003e0994(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pcVar1 = (code *)FUN_100012be0(param_2);
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(&local_30,param_3);
    uVar2 = local_30;
  }
  *param_1 = uVar2;
  return;
}




void FUN_1003e09e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1003e09ec(long param_1)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  return;
}




void FUN_1003e09fc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_1 == 0) {
    plVar2 = param_1 + 1;
    *param_1 = param_2;
  }
  else {
    lVar1 = param_1[1];
    *(long *)(param_2 + 8) = lVar1;
    plVar2 = (long *)(lVar1 + 0x10);
    lVar1 = *plVar2;
    if (*plVar2 != 0) {
      do {
        lVar3 = lVar1;
        lVar1 = *(long *)(lVar3 + 0x18);
      } while (lVar1 != 0);
      plVar2 = (long *)(lVar3 + 0x18);
    }
  }
  *plVar2 = param_2;
  return;
}




void FUN_1003e0a34(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_1003e0a3c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_1003e0a44(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x30) = param_3;
  return;
}




void FUN_1003e0a50(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_1003e0a58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014979c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




undefined8 * FUN_1003e0a70(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_1003e0ac0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0ac4);
  (*pcVar1)();
}




void FUN_1003e0ac4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e0ac8);
  (*pcVar1)();
}




void FUN_1003e0ac8(void)

{
  return;
}




undefined8 FUN_1003e0acc(void)

{
  return 0;
}




undefined4 FUN_1003e0ad4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x274);
}




undefined8 FUN_1003e0adc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar3 = DAT_101d90978;
  uVar4 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((int)uVar4 == 0x1f) || (1 < *(ushort *)(param_1 + uVar4 * 0x38 + 0x90) - 3)) {
    plVar5 = (long *)(param_1 + 0x18);
    do {
      lVar6 = *plVar5;
      plVar5 = (long *)(lVar6 + 0x20);
    } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8);
    lVar2 = *(long *)(lVar6 + 0x28);
    for (lVar6 = lVar2; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
      if ((*(int *)(lVar6 + 0x314) == DAT_101d3ee28) && (*(int *)(lVar6 + 0x310) == 0)) {
        if (param_2 == (undefined4 *)0x0) {
          return 1;
        }
        goto LAB_1003e0bc0;
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    lVar6 = FUN_1003e10f0();
    uVar1 = FUN_1003b1948(uVar3,*(undefined8 *)(lVar6 + 0x128));
    uVar3 = 0;
    goto LAB_1003e0be0;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 1;
  }
  lVar6 = FUN_1003e10f0();
  uVar1 = FUN_1003b1948(uVar3,*(undefined8 *)(lVar6 + 0x128));
  goto LAB_1003e0bd8;
  while (lVar2 = *(long *)(lVar2 + 0x350), lVar2 != 0) {
LAB_1003e0bc0:
    if (*(int *)(lVar2 + 0x30c) == *(int *)(lVar6 + 0x30c)) break;
  }
  uVar1 = FUN_100432d40();
LAB_1003e0bd8:
  uVar3 = 1;
LAB_1003e0be0:
  *param_2 = uVar1;
  return uVar3;
}




ulong FUN_1003e0bf8(long param_1,undefined8 param_2,ulong param_3,int param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  long *plVar7;
  undefined **ppuVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_dc;
  uint local_d8 [20];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_101444218;
  lVar17 = *(long *)(param_1 + 0x18);
  if (lVar17 != 0) {
    fVar21 = *(float *)(*(long *)(param_1 + 0x40) + 800);
    lVar12 = lVar17;
    do {
      lVar11 = lVar17;
      if (*(int *)(*(long *)(lVar12 + 8) + 0xa4) == DAT_10184e000) break;
      lVar12 = *(long *)(lVar12 + 0x20);
    } while (lVar12 != 0);
    do {
      if (lVar11 == 0) break;
      if (*(int *)(*(long *)(lVar11 + 8) + 0xa4) == DAT_10184e150) {
        uVar6 = 0xffff;
        if (*(int *)(lVar11 + 0x28) == 0xfe) goto LAB_1003e0c9c;
        uVar19 = 0;
        goto LAB_1003e0d00;
      }
      lVar11 = *(long *)(lVar11 + 0x20);
    } while( true );
  }
LAB_1003e0c98:
  uVar6 = 0xffff;
LAB_1003e0c9c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_88) {
    return uVar6;
  }
LAB_1003e10ec:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
  while( true ) {
    local_d8[uVar19] = uVar1;
    uVar19 = uVar19 + 1;
    if (uVar19 == 0x14) break;
LAB_1003e0d00:
    uVar1 = *(uint *)(lVar11 + 0x68 + uVar19 * 4);
    if (uVar1 == 0xffff) {
      if ((int)uVar19 == 0) goto LAB_1003e0c98;
      break;
    }
  }
  if (param_5 != 0) {
    uVar2 = *(ushort *)(lVar12 + 0xdc);
    uVar1 = uVar2 >> 8 & 0x7f;
    if ((uVar2 & 0xff) == uVar1) {
      uVar14 = 0;
      if ((uVar2 & 0xff) != 0) {
        uVar9 = 0;
        plVar7 = (long *)(lVar12 + 0x38);
        uVar13 = uVar9;
        do {
          for (; *plVar7 == 0; plVar7 = plVar7 + 1) {
LAB_1003e0d6c:
          }
          if (uVar9 != 0) {
            uVar9 = uVar9 - 1;
            goto LAB_1003e0d6c;
          }
          iVar3 = FUN_10046f4b0(param_2,*(undefined4 *)(*plVar7 + 0x48));
          uVar14 = uVar14 + iVar3;
          uVar9 = uVar13 + 1;
          plVar7 = (long *)(lVar12 + 0x38);
          uVar13 = uVar9;
        } while (uVar9 != (uVar2 & 0xff));
      }
      if (uVar14 == uVar1) {
        if (*(int *)(lVar11 + 0xb8) == 1) {
          ppuVar8 = &PTR_s__Item_WeaponInfusion__10185ab70;
          piVar10 = &DAT_101d3ea3c;
        }
        else {
          if (*(int *)(lVar11 + 0xb8) != 2) goto LAB_1003e0c98;
          ppuVar8 = &PTR_s__Item_CrystalInfusion__10185ab88;
          piVar10 = &DAT_101d3ea40;
        }
        while (*(int *)(*(long *)(lVar17 + 8) + 0xa4) != DAT_10184daa8) {
          lVar17 = *(long *)(lVar17 + 0x20);
        }
        lVar17 = *(long *)(lVar17 + 0x28);
        if (lVar17 != 0) {
          lVar12 = lVar17;
          do {
            if ((*(int *)(lVar12 + 0x314) == *piVar10) &&
               (lVar11 = lVar17, *(int *)(lVar12 + 0x310) == 0)) goto LAB_1003e1020;
            lVar12 = *(long *)(lVar12 + 0x350);
          } while (lVar12 != 0);
        }
        goto LAB_1003e1094;
      }
    }
  }
  uVar15 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (param_3 & 0xffffffff) * 8);
  uVar4 = FUN_1010a1520();
  lVar17 = FUN_1010a0e0c(uVar4,0,uVar15,0);
  uVar1 = DAT_10185dfb8;
  uVar6 = 0xffff;
  if (*(char *)(lVar17 + 8) != '\0') {
    uVar16 = (ulong)DAT_10185dfb8;
    if (DAT_10185dfb8 != 0xffff) {
      if ((int)uVar19 == 0) goto LAB_1003e0c98;
      uVar18 = 0;
      do {
        if (local_d8[uVar18] == uVar1) {
          iVar3 = FUN_1004915d0(uVar18,uVar16,local_d8,lVar12,param_2);
          if (iVar3 == 0) break;
          local_dc = uVar1;
          uVar6 = uVar16;
          if (param_4 != 0) {
            FUN_1004917ac(param_1,lVar12,param_2,uVar16,&local_dc);
            uVar6 = (ulong)local_dc;
          }
          if ((int)uVar6 != 0xffff) goto LAB_1003e0c9c;
        }
        uVar18 = uVar18 + 1;
      } while ((uVar19 & 0xffffffff) != uVar18);
    }
    if ((int)uVar19 == 0) goto LAB_1003e0c98;
    uVar16 = 0;
    uVar6 = 0xffff;
    do {
      uVar1 = local_d8[uVar16];
      uVar18 = (ulong)uVar1;
      iVar3 = FUN_1004915d0(uVar16,uVar18,local_d8,lVar12,param_2);
      if (iVar3 != 0) {
        uVar6 = uVar18;
        local_dc = uVar1;
        if (param_4 != 0) {
          uVar5 = FUN_1004917ac(param_1,lVar12,param_2,uVar18,&local_dc);
          uVar6 = (ulong)local_dc;
          if ((uVar5 & 1) != 0) break;
        }
        uVar5 = FUN_10046f4b0(param_2,uVar6);
        if ((uVar5 & 1) == 0) {
          fVar22 = 0.0;
          uVar5 = uVar18;
          goto LAB_1003e0f28;
        }
        break;
      }
      uVar16 = uVar16 + 1;
    } while ((uVar19 & 0xffffffff) != uVar16);
  }
  goto LAB_1003e0c9c;
LAB_1003e1020:
  for (; (*(int *)(lVar11 + 0x314) != *piVar10 || (*(int *)(lVar11 + 0x310) != 0));
      lVar11 = *(long *)(lVar11 + 0x350)) {
  }
  iVar3 = *(int *)(lVar17 + 0x30c);
  lVar12 = lVar17;
  while (iVar3 != *(int *)(lVar11 + 0x30c)) {
    lVar12 = *(long *)(lVar12 + 0x350);
    iVar3 = *(int *)(lVar12 + 0x30c);
  }
  for (; *(int *)(lVar17 + 0x30c) != *(int *)(lVar11 + 0x30c); lVar17 = *(long *)(lVar17 + 0x350)) {
  }
  if (*(float *)(lVar12 + 0x318) / *(float *)(lVar17 + 0x31c) < 0.4) {
LAB_1003e1094:
    if (*(long *)PTR____stack_chk_guard_101444218 == local_88) {
      uVar6 = FUN_1003b1948(DAT_101d90978,*ppuVar8);
      return uVar6;
    }
    goto LAB_1003e10ec;
  }
  goto LAB_1003e0c98;
LAB_1003e0f28:
  if (((uint)uVar5 != uVar1) &&
     (iVar3 = FUN_1004915d0(uVar16,uVar5,local_d8,lVar12,param_2), iVar3 != 0)) {
    fVar20 = (float)FUN_100491538(param_1,extraout_x1,param_2,uVar5);
    fVar22 = fVar20 + fVar22;
    iVar3 = FUN_10046f4b0(param_2,uVar5);
    if (iVar3 != 0) {
      if (fVar22 <= fVar21) {
        uVar6 = uVar5;
      }
      goto LAB_1003e0c9c;
    }
    iVar3 = FUN_10046f108(param_2,uVar18,uVar5);
    if (iVar3 < 1) {
      if (fVar21 < fVar22) goto LAB_1003e0c9c;
    }
    else {
      uVar14 = (uint)uVar6;
      if (fVar20 < fVar21) {
        uVar14 = (uint)uVar5;
      }
      uVar6 = (ulong)uVar14;
    }
  }
  if ((uVar19 & 0xffffffff) - 1 == uVar16) goto LAB_1003e0c9c;
  uVar5 = (ulong)local_d8[uVar16 + 1];
  uVar16 = uVar16 + 1;
  goto LAB_1003e0f28;
}




undefined8 FUN_1003e10f0(void)

{
  int iVar1;
  long local_18;
  
  local_18 = 0;
  iVar1 = FUN_1010a1958(&local_18,1,DAT_1018673c0,0);
  if (iVar1 != 1) {
    FUN_1004d22dc(0);
  }
  return *(undefined8 *)(local_18 + 0x28);
}




long FUN_1003e113c(long param_1)

{
  return param_1 + 0x3c;
}




void FUN_1003e1144(long param_1)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  FUN_1003a4e5c(local_28);
  FUN_1003e2b0c(uVar1,local_28[0]);
  return;
}




undefined1 FUN_1003e1178(long param_1,uint param_2)

{
  return *(undefined1 *)(*(long *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) + 0x38) + 0x8d);
}




float FUN_1003e118c(long param_1,uint param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  fVar2 = 0.0;
  if ((lVar1 != 0) && (-1 < *(short *)(lVar1 + 0x21e))) {
    fVar2 = *(float *)(lVar1 + 0x218) *
            (float)(int)((uint)*(ushort *)(lVar1 + 0x21c) +
                        (((int)*(short *)(lVar1 + 0x21e) << 0x11) >> 0x11));
  }
  return fVar2;
}




float FUN_1003e11c0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((lVar1 != 0) && (*(short *)(lVar1 + 0x21e) < 0)) {
    return *(float *)(lVar1 + 0x218) *
           (float)(int)((uint)*(ushort *)(lVar1 + 0x21c) +
                       (((int)*(short *)(lVar1 + 0x21e) << 0x11) >> 0x11));
  }
  return 0.0;
}




undefined1 FUN_1003e11f8(long param_1,uint param_2)

{
  return *(undefined1 *)(*(long *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) + 0x38) + 0x7c);
}




void FUN_1003e120c(void)

{
  return;
}




void FUN_1003e1210(uint param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long local_a8 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_a8,0x10,DAT_10184de70,0);
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    plVar4 = local_a8;
    do {
      lVar2 = *plVar4;
      lVar5 = *(long *)(lVar2 + 0x28);
      if (((*(byte *)(lVar5 + 8) == param_1) && (*(int *)(lVar5 + 0xc) == 0)) &&
         (*(int *)(lVar5 + 0x10) == param_2)) goto LAB_1003e1294;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar2 = 0;
LAB_1003e1294:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2);
}




long FUN_1003e12c0(float param_1,long param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_6b8 [200];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1010a1958(local_6b8,200,DAT_10184dd68,0);
  if (param_1 <= 0.0) {
    lVar5 = *(long *)(param_2 + 0x40);
    fVar10 = *(float *)(lVar5 + 0x7c) +
             *(float *)(lVar5 + 0x130) * (*(float *)(lVar5 + 0x298) + 1.0);
    fVar10 = (float)NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar5 + 0x1e4),DAT_101e94364);
    param_1 = DAT_101e942a4;
    if (DAT_101e942a4 <= fVar10) {
      param_1 = fVar10;
    }
  }
  lVar5 = 0;
  if (uVar3 != 0) {
    fVar10 = 3.4028235e+38;
    uVar8 = (ulong)uVar3;
    plVar9 = local_6b8;
    do {
      lVar7 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x88) & 0x1f;
      if (((int)uVar6 == 0x1f) || (1 < *(ushort *)(lVar7 + uVar6 * 0x38 + 0x90) - 3)) {
        fVar11 = *(float *)(param_2 + 0x250) - *(float *)(lVar7 + 0x250);
        fVar12 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254)) -
                 (*(float *)(lVar7 + 0x254) + *(float *)(lVar7 + 0x2ec));
        fVar13 = *(float *)(param_2 + 600) - *(float *)(lVar7 + 600);
        fVar14 = *(float *)(*(long *)(lVar7 + 0x38) + 100);
        fVar11 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12) -
                 ((*(float *)(lVar7 + 0x2e8) + fVar14) * *(float *)(*(long *)(lVar7 + 0x38) + 0x68))
                 / fVar14;
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        bVar1 = false;
        bVar2 = false;
        if (fVar11 <= param_1) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar11) && !NAN(fVar10)) {
            bVar1 = fVar11 < fVar10;
            bVar2 = false;
          }
        }
        if ((bVar1 != bVar2) &&
           ((param_3 == (long *)0x0 ||
            (iVar4 = (**(code **)(*param_3 + 0x18))(param_3,lVar7), iVar4 != 0)))) {
          lVar5 = lVar7;
          fVar10 = fVar11;
        }
      }
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




uint FUN_1003e148c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  local_90 = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  uVar1 = FUN_1003e1f98(param_3,param_4,param_1,(long)&local_90 + 4,&local_88,&local_90,0);
  uVar2 = FUN_1003db280(param_2,param_4);
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = (char)uVar1;
  }
  uVar2 = uVar2 | (int)local_90 != 0;
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = (char)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return uVar1 & uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003e1570(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar10 = DAT_101e94340;
  fVar11 = DAT_101e94280;
  lVar7 = *(long *)(param_3 + 0x40);
  fVar9 = (float)NEON_fminnm(*(undefined4 *)(lVar7 + 0x31c),*(float *)(lVar7 + 0x308));
  fVar9 = *(float *)(lVar7 + 0x318) + *(float *)(lVar7 + 0x308) + fVar9;
  fVar12 = *(float *)(lVar7 + 0x54) + *(float *)(lVar7 + 0x108) * (*(float *)(lVar7 + 0x270) + 1.0);
  NEON_fminnm(fVar12 + fVar12 * *(float *)(lVar7 + 0x1bc),DAT_101e9433c);
  *(float *)(param_4 + 5) = fVar9 + fVar9 * DAT_101e9427c * 0.01;
  fVar14 = *(float *)(lVar7 + 0x274) + 1.0;
  fVar12 = *(float *)(lVar7 + 0x58) + *(float *)(lVar7 + 0x10c) * fVar14;
  fVar13 = *(float *)(lVar7 + 0x1c0);
  *param_4 = param_3 + 0x28;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_3 + 0x30);
  NEON_fminnm(fVar12 + fVar12 * fVar13,uVar10);
  *(float *)((long)param_4 + 0x2c) = fVar9 + fVar9 * fVar11 * 0.01;
  uVar2 = DAT_101e9435c;
  fVar9 = *(float *)(lVar7 + 0x48) + *(float *)(lVar7 + 0xfc) * (*(float *)(lVar7 + 0x264) + 1.0);
  NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar7 + 0x1b0),DAT_101e94330);
  fVar9 = *(float *)(lVar7 + 0x74) + *(float *)(lVar7 + 0x128) * (*(float *)(lVar7 + 0x290) + 1.0);
  NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar7 + 0x1dc),DAT_101e9435c);
  *(float *)(param_4 + 6) = DAT_101e94270 / DAT_101e9429c;
  uVar3 = DAT_101e94360;
  uVar10 = DAT_101e942a0;
  fVar9 = *(float *)(lVar7 + 0x78) + *(float *)(lVar7 + 300) * (*(float *)(lVar7 + 0x294) + 1.0);
  NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar7 + 0x1e0),DAT_101e94360);
  *(undefined4 *)((long)param_4 + 0x34) = DAT_101e942a0;
  uVar10 = FUN_1003e4a18(uVar10,uVar10,uVar3,uVar2,0x3f800000,fVar11,fVar13,fVar14,param_3);
  *(undefined4 *)(param_4 + 7) = uVar10;
  plVar4 = *(long **)(param_3 + 0x2b0);
  lVar7 = 0;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_3 + 0x2b8) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      lVar7 = 0;
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_3 + 0x2b0);
        lVar7 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_3 + 0x2b8) == (int)plVar4[1]) {
            lVar7 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            lVar7 = 0;
            *(undefined8 *)(param_3 + 0x2b0) = 0;
            *(undefined4 *)(param_3 + 0x2b8) = DAT_101dc0b88;
          }
        }
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x88) & 0x1f;
        if (((int)uVar8 == 0x1f) || (1 < *(ushort *)(lVar7 + uVar8 * 0x38 + 0x90) - 3)) {
          plVar4 = *(long **)(param_3 + 0x2b0);
          lVar7 = 0;
          if (plVar4 != (long *)0x0) {
            if (*(int *)(param_3 + 0x2b8) != (int)plVar4[1]) goto LAB_1003e1790;
            lVar7 = (**(code **)(*plVar4 + 0x10))();
          }
        }
        else {
          lVar7 = 0;
        }
      }
    }
    else {
LAB_1003e1790:
      lVar7 = 0;
      *(undefined8 *)(param_3 + 0x2b0) = 0;
      *(undefined4 *)(param_3 + 0x2b8) = DAT_101dc0b88;
    }
  }
  *(byte *)((long)param_4 + 0x3c) = *(byte *)((long)param_4 + 0x3c) & 0xfd | (lVar7 == param_2) << 1
  ;
  plVar4 = *(long **)(param_3 + 0x2b0);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_3 + 0x2b8) != (int)plVar4[1]) {
LAB_1003e188c:
      bVar6 = 0;
      *(undefined8 *)(param_3 + 0x2b0) = 0;
      *(undefined4 *)(param_3 + 0x2b8) = DAT_101dc0b88;
      goto LAB_1003e18a4;
    }
    lVar7 = (**(code **)(*plVar4 + 0x10))();
    if (lVar7 != 0) {
      plVar4 = *(long **)(param_3 + 0x2b0);
      lVar7 = 0;
      if (plVar4 != (long *)0x0) {
        if (*(int *)(param_3 + 0x2b8) == (int)plVar4[1]) {
          lVar7 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          lVar7 = 0;
          *(undefined8 *)(param_3 + 0x2b0) = 0;
          *(undefined4 *)(param_3 + 0x2b8) = DAT_101dc0b88;
        }
      }
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x88) & 0x1f;
      if ((((int)uVar8 == 0x1f) || (1 < *(ushort *)(lVar7 + uVar8 * 0x38 + 0x90) - 3)) &&
         (plVar4 = *(long **)(param_3 + 0x2b0), plVar4 != (long *)0x0)) {
        if (*(int *)(param_3 + 0x2b8) == (int)plVar4[1]) {
          lVar7 = (**(code **)(*plVar4 + 0x10))();
          bVar6 = (lVar7 != 0) << 2;
          goto LAB_1003e18a4;
        }
        goto LAB_1003e188c;
      }
    }
  }
  bVar6 = 0;
LAB_1003e18a4:
  bVar1 = *(byte *)((long)param_4 + 0x3c);
  *(byte *)((long)param_4 + 0x3c) = bVar1 & 0xf3 | bVar6;
  lVar7 = *(long *)(param_3 + 0x80) + (ulong)*(uint *)(*(long *)(param_3 + 0x80) + 0x5c) * 0x19 +
          (ulong)*(byte *)(param_2 + 0x264);
  *(byte *)((long)param_4 + 0x3c) =
       bVar1 & 0xf2 | bVar6 |
       (*(byte *)(lVar7 + 0x28) & ((*(byte *)(lVar7 + 0x38) | *(byte *)(lVar7 + 0x30)) ^ 0xff)) == 0
  ;
  if ((((*(byte *)(param_2 + 0x2f4) & 1) != 0) && ((*(byte *)(param_3 + 0x2f4) & 1) != 0)) &&
     (fVar11 = (float)FUN_100032228(),
     fVar11 - *(float *)(*(long *)(param_3 + 0x80) + (ulong)*(byte *)(param_2 + 0x264) * 4 + 0x6c) <
     3.0)) {
    *(byte *)((long)param_4 + 0x3c) = *(byte *)((long)param_4 + 0x3c) | 1;
  }
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_3 + 0x250);
  fVar11 = *(float *)(param_3 + 0x254);
  *(float *)((long)param_4 + 0x14) = fVar11;
  *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_3 + 600);
  *(float *)((long)param_4 + 0x14) = *(float *)(param_3 + 0x2ec) + fVar11;
  FUN_1003a31c8(param_3,(long)param_4 + 0x1c,&DAT_1013cd824);
  return;
}




void FUN_1003e197c(void)

{
  return;
}




ulong FUN_1003e1980(long param_1)

{
  ulong uVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x198) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(param_1 + 0x50 + uVar1 * 8) == *(long *)(param_1 + 0x30)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (*(byte *)(param_1 + 0x198) != uVar1);
  }
  return 0xffffffff;
}




void FUN_1003e19b8(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1904);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar3 = (int *)(param_1 + (ulong)uVar2 * 8 + 4);
    if (*piVar3 == param_2) {
      uVar1 = *(int *)(param_1 + 0x1904) - 1;
      *(uint *)(param_1 + 0x1904) = uVar1;
      if (uVar2 < uVar1) {
        *(undefined8 *)piVar3 = *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 4);
      }
    }
  }
  return;
}




bool FUN_1003e19fc(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  if (DAT_101d23a38 == '\0') {
    iVar2 = FUN_10034ee90();
    if (iVar2 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_10034e738();
      uVar3 = uVar3 & 0xffffffff;
    }
    bVar1 = (bool)(*(byte *)(param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + uVar3 + 0x28) >> 1
                  & 1);
  }
  else {
    bVar1 = *(long *)(param_1 + 0x60) != 0;
  }
  return bVar1;
}




void FUN_1003e1a68(void)

{
  return;
}




void FUN_1003e1a6c(void)

{
  return;
}




undefined8 FUN_1003e1a70(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar2[1]) {
                    /* WARNING: Could not recover jumptable at 0x0001003e1a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar1;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
  }
  return 0;
}




void FUN_1003e1ab4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497a48;
  return;
}




undefined4 FUN_1003e1ad0(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x193c) == *(int *)(param_1 + 0x24)) {
    return 1;
  }
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (uVar3 == 7) break;
    uVar1 = uVar3 + 1;
  } while (*(int *)(param_2 + 0x1940 + uVar3 * 4) != *(int *)(param_1 + 0x24));
  uVar2 = 1;
  if (6 < uVar3) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_1003e1b20(void)

{
  return;
}




undefined1 FUN_1003e1b24(long param_1)

{
  return *(undefined1 *)(param_1 + 0xdc);
}




bool FUN_1003e1b2c(long param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xdd) & 0x7f;
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = 0;
    bVar1 = true;
    do {
      lVar4 = *(long *)(param_1 + 0x38 + uVar3 * 8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x48) == param_2)) {
        return bVar1;
      }
      uVar3 = uVar3 + 1;
      bVar1 = uVar3 < uVar2;
    } while (uVar2 != uVar3);
  }
  return bVar1;
}




void FUN_1003e1b7c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497ad0;
  param_1[1] = 0;
  param_1[5] = 0;
  return;
}




undefined8 FUN_1003e1b98(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = FUN_1004d2524(uVar2);
  uVar2 = FUN_100015208(uVar2,uVar1,0x12345678);
  (**(code **)(*(long *)(param_2 + 0x1688) + 8))(param_2 + 0x1688,uVar2);
  return 1;
}




void FUN_1003e1bfc(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x0001003e1c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar2);
  return;
}




void FUN_1003e1c48(void)

{
  return;
}




void FUN_1003e1c4c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497b58;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




undefined8 FUN_1003e1c6c(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar2,0x12345678);
  uVar3 = (**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar3);
  *(bool *)uVar3 = iVar1 != 0;
  return 1;
}




void FUN_1003e1ce0(void)

{
  return;
}




void FUN_1003e1ce4(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497be0;
  param_1[1] = 0;
  param_1[5] = 0;
  return;
}




undefined4 FUN_1003e1d00(long param_1,long param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
  pcVar2 = (char *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar3);
  uVar1 = 1;
  if (*pcVar2 == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_1003e1d70(void)

{
  return;
}




void FUN_1003e1d74(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x200000000;
  *param_1 = &PTR_FUN_101497c68;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return;
}




void FUN_1003e1d98(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




undefined8 FUN_1003e1da4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_100032228();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    fVar6 = 0.0;
  }
  else {
    uVar1 = FUN_1004d2524(lVar4);
    uVar2 = FUN_100015208(lVar4,uVar1,0x12345678);
    pfVar3 = (float *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
    fVar6 = *pfVar3;
  }
  if (*(uint *)(param_1 + 0x24) < 5) {
    fVar6 = *(float *)(param_1 + 0x28) + fVar6;
    switch(*(uint *)(param_1 + 0x24)) {
    case 0:
      if (fVar6 < fVar5) {
        return 1;
      }
      break;
    case 1:
      if (fVar5 < fVar6) {
        return 1;
      }
      break;
    case 2:
      if (fVar5 == fVar6) {
        return 1;
      }
      break;
    case 3:
      if (fVar6 <= fVar5) {
        return 1;
      }
      break;
    case 4:
      if (fVar5 <= fVar6) {
        return 1;
      }
    }
  }
  return 2;
}




void FUN_1003e1e94(void)

{
  return;
}




void FUN_1003e1e98(undefined8 param_1)

{
  long lVar1;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  byte local_8e;
  undefined1 auStack_88 [96];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_e8 = &PTR_FUN_101499960;
  local_d4 = 0;
  local_c4 = 0;
  uStack_c0 = 0;
  local_cc = 0;
  uStack_c8 = 0;
  local_bc = 0;
  uStack_b0 = 0xbf800000c0000000;
  local_b8 = 0xbf800000bf800000;
  local_a8 = 0x3f800000;
  local_a4 = 0xff;
  uStack_98 = 0xffffffff00000000;
  local_a0 = 0xffffffff00000000;
  lVar1 = FUN_1003e10f0();
  local_d8 = 3;
  uStack_c8 = 0x13fcd16;
  local_c4 = 1;
  local_90 = 0x5110;
  local_8e = *(byte *)(lVar1 + 0xe5) | 0x14;
  local_e0 = param_1;
  FUN_1003a6ce4(&local_e8,auStack_88,0xc,0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1  [16] FUN_1003e1f70(long param_1,ulong param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (lVar1 != 0) {
    FUN_10045f34c(lVar1 + 0x220);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




void FUN_1003e1f8c(void)

{
  return;
}




undefined4 FUN_1003e1f90(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




ulong FUN_1003e1f98(long param_1,int param_2,uint param_3,uint *param_4,undefined8 param_5,
                   undefined4 *param_6,int param_7)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  int local_64;
  
  lVar7 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  lVar12 = *(long *)(lVar7 + 0x18);
  while ((lVar12 != 0 && (*(int *)(*(long *)(lVar12 + 8) + 0xa4) != DAT_10184e000))) {
    lVar12 = *(long *)(lVar12 + 0x20);
  }
  *param_6 = 0;
  if (*(uint *)(param_1 + 0x38) == 0) {
    return 0;
  }
  lVar8 = 0;
  while (lVar1 = param_1 + lVar8, *(int *)(lVar1 + 0x40) != param_2) {
    lVar8 = lVar8 + 0x90;
    if ((ulong)*(uint *)(param_1 + 0x38) * 0x90 - lVar8 == 0) {
      return 0;
    }
  }
  if ((*(long *)(lVar1 + 0x48) == 0) ||
     (local_64 = 0xffff, *(char *)(*(long *)(lVar1 + 0x48) + 0x19e) == '\0')) {
    local_64 = 0xffff;
    uVar13 = FUN_1003e0adc(lVar7,&local_64);
    iVar5 = FUN_10046edd8(uVar13,local_64);
    bVar4 = false;
    iVar5 = (int)(float)iVar5;
  }
  else {
    uVar13 = 1;
    bVar4 = true;
    iVar5 = 1;
  }
  uVar6 = FUN_10046ecd4(param_1,lVar12,lVar1 + 0x40,param_5,param_6,iVar5);
  *param_4 = uVar6;
  if ((param_7 != 0) && ((int)uVar13 == 0)) {
    return 0;
  }
  if (!bVar4) {
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar9 = 0;
      uVar3 = *(int *)(param_1 + 0x38) - 1;
      if (0x8a < uVar3) {
        uVar3 = 0x8b;
      }
      piVar10 = (int *)(param_1 + 0x40);
      do {
        if (*piVar10 == param_2) goto LAB_1003e2138;
        uVar9 = uVar9 + 1;
        piVar10 = piVar10 + 0x24;
      } while (uVar3 + 1 != uVar9);
    }
    uVar9 = 0xffffffff;
LAB_1003e2138:
    lVar7 = 0;
    piVar10 = (int *)0x0;
    bVar4 = true;
    do {
      bVar11 = bVar4;
      piVar2 = (int *)(param_1 + lVar7 * 0x1344 + 0x4f00);
      if (*piVar2 != local_64) {
        piVar2 = piVar10;
      }
      lVar7 = 1;
      piVar10 = piVar2;
      bVar4 = false;
    } while (bVar11);
    if (*(char *)((long)piVar2 + uVar9 + 0x12b8) != '\0') {
      if (*(char *)(DAT_101d23a68 + 0x3d) == '\0') goto LAB_1003e20e8;
      if (uVar6 <= param_3) {
        uVar9 = FUN_10046ee74(param_1,lVar12,lVar1 + 0x40);
        return uVar9;
      }
    }
    return 0;
  }
LAB_1003e20e8:
  return (ulong)(uVar6 <= param_3);
}




void FUN_1003e21b0(void)

{
  return;
}




void FUN_1003e21b4(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497cf0;
  param_1[1] = 0;
  param_1[5] = 0;
  return;
}




void FUN_1003e21d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_1003e21d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(code **)(param_1 + 0x28) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_1 + 0x28))(param_2), (uVar1 & 1) == 0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_1003e2208(void)

{
  return;
}




void FUN_1003e220c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497d78;
  return;
}




undefined8 FUN_1003e2228(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 4) {
    param_2 = (long *)param_2[0x284];
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 0) {
        return 2;
      }
      goto LAB_1003e2260;
    }
    param_2 = (long *)param_2[0x285];
  }
  if (param_2 == (long *)0x0) {
    return 2;
  }
LAB_1003e2260:
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (((lVar3 != 0) && (uVar4 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f, (int)uVar4 != 0x1f)) &&
         (*(ushort *)(lVar3 + uVar4 * 0x38 + 0x90) - 3 < 2)) {
        return 1;
      }
    }
    else {
      *param_2 = 0;
      *(int *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  return 2;
}




void FUN_1003e22dc(void)

{
  return;
}




undefined8 * FUN_1003e22e0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497e00;
  param_1[1] = 0;
  uVar1 = FUN_1004d2524(&DAT_101159fdc);
  uVar1 = FUN_100015208(&DAT_101159fdc,uVar1,0x12345678);
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  return param_1;
}




void FUN_1003e2344(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  return;
}




void FUN_1003e2350(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




undefined8 FUN_1003e2358(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  plVar3 = (long *)*param_2;
  lVar4 = 0;
  if (plVar3 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      lVar4 = 0;
      *param_2 = 0;
      *(int *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x18);
      do {
        lVar4 = *plVar3;
        plVar3 = (long *)(lVar4 + 0x20);
      } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 != 0) {
        lVar7 = lVar4;
        do {
          if ((*(int *)(lVar7 + 0x314) == *(int *)(param_1 + 0x24)) &&
             (*(int *)(lVar7 + 0x310) == 0)) {
            for (; *(int *)(lVar4 + 0x30c) != *(int *)(lVar7 + 0x30c);
                lVar4 = *(long *)(lVar4 + 0x350)) {
            }
            goto LAB_1003e27fc;
          }
          lVar7 = *(long *)(lVar7 + 0x350);
        } while (lVar7 != 0);
      }
    }
    break;
  case 1:
    uVar1 = *(uint *)(param_2 + 0x266);
    if (uVar1 != 0) {
      uVar8 = 0;
      bVar2 = true;
      do {
        plVar3 = (long *)param_2[uVar8 * 8 + 0x246];
        if (plVar3 != (long *)0x0) {
          if ((int)param_2[uVar8 * 8 + 0x247] == (int)plVar3[1]) {
            lVar4 = (**(code **)(*plVar3 + 0x10))();
            if ((lVar4 != 0) &&
               ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) {
              plVar3 = (long *)(lVar4 + 0x18);
              do {
                lVar4 = *plVar3;
                plVar3 = (long *)(lVar4 + 0x20);
              } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
              lVar4 = *(long *)(lVar4 + 0x28);
              if (lVar4 != 0) {
                lVar7 = lVar4;
LAB_1003e24cc:
                if ((*(int *)(lVar7 + 0x314) != *(int *)(param_1 + 0x24)) ||
                   (*(int *)(lVar7 + 0x310) != 0)) goto LAB_1003e24e0;
                for (; *(int *)(lVar4 + 0x30c) != *(int *)(lVar7 + 0x30c);
                    lVar4 = *(long *)(lVar4 + 0x350)) {
                }
                if (*(uint *)(param_1 + 0x28) <= (uint)*(ushort *)(lVar4 + 0x344)) {
                  param_2[0x285] = (long)(param_2 + uVar8 * 8 + 0x246);
                  if (!bVar2) {
                    return 2;
                  }
                  return 1;
                }
              }
            }
          }
          else {
            param_2[uVar8 * 8 + 0x246] = 0;
            *(int *)(param_2 + uVar8 * 8 + 0x247) = DAT_101dc0b88;
          }
        }
LAB_1003e24fc:
        uVar8 = uVar8 + 1;
        bVar2 = uVar8 < uVar1;
      } while (uVar8 != uVar1);
    }
    break;
  case 2:
    uVar1 = *(uint *)(param_2 + 0x245);
    if (uVar1 != 0) {
      uVar8 = 0;
      bVar2 = true;
      do {
        plVar3 = (long *)param_2[uVar8 * 8 + 0x205];
        if (plVar3 != (long *)0x0) {
          if ((int)param_2[uVar8 * 8 + 0x206] == (int)plVar3[1]) {
            lVar4 = (**(code **)(*plVar3 + 0x10))();
            if ((lVar4 != 0) &&
               ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) {
              plVar3 = (long *)(lVar4 + 0x18);
              do {
                lVar4 = *plVar3;
                plVar3 = (long *)(lVar4 + 0x20);
              } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
              lVar4 = *(long *)(lVar4 + 0x28);
              if (lVar4 != 0) {
                lVar7 = lVar4;
LAB_1003e25d8:
                if ((*(int *)(lVar7 + 0x314) != *(int *)(param_1 + 0x24)) ||
                   (*(int *)(lVar7 + 0x310) != 0)) goto LAB_1003e25ec;
                for (; *(int *)(lVar4 + 0x30c) != *(int *)(lVar7 + 0x30c);
                    lVar4 = *(long *)(lVar4 + 0x350)) {
                }
                if (*(uint *)(param_1 + 0x28) <= (uint)*(ushort *)(lVar4 + 0x344)) {
                  param_2[0x284] = (long)(param_2 + uVar8 * 8 + 0x205);
                  if (!bVar2) {
                    return 2;
                  }
                  return 1;
                }
              }
            }
          }
          else {
            param_2[uVar8 * 8 + 0x205] = 0;
            *(int *)(param_2 + uVar8 * 8 + 0x206) = DAT_101dc0b88;
          }
        }
LAB_1003e2608:
        uVar8 = uVar8 + 1;
        bVar2 = uVar8 < uVar1;
      } while (uVar8 != uVar1);
    }
    break;
  case 3:
    plVar3 = (long *)param_2[0x285];
    if (plVar3 == (long *)0x0) {
      return 2;
    }
    plVar5 = (long *)*plVar3;
    if (plVar5 == (long *)0x0) {
      return 2;
    }
    plVar6 = plVar3 + 1;
    if ((int)*plVar6 == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (lVar4 == 0) {
        return 2;
      }
      if ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) != 0) {
        return 2;
      }
      plVar3 = (long *)(lVar4 + 0x18);
      do {
        lVar4 = *plVar3;
        plVar3 = (long *)(lVar4 + 0x20);
      } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) {
        return 2;
      }
      lVar7 = lVar4;
      while ((*(int *)(lVar7 + 0x314) != *(int *)(param_1 + 0x24) || (*(int *)(lVar7 + 0x310) != 0))
            ) {
        lVar7 = *(long *)(lVar7 + 0x350);
        if (lVar7 == 0) {
          return 2;
        }
      }
      for (; *(int *)(lVar4 + 0x30c) != *(int *)(lVar7 + 0x30c); lVar4 = *(long *)(lVar4 + 0x350)) {
      }
LAB_1003e27fc:
      if ((uint)*(ushort *)(lVar4 + 0x344) < *(uint *)(param_1 + 0x28)) {
        return 2;
      }
      return 1;
    }
    goto LAB_1003e2780;
  case 4:
    plVar3 = (long *)param_2[0x284];
    if (plVar3 == (long *)0x0) {
      return 2;
    }
    plVar5 = (long *)*plVar3;
    if (plVar5 == (long *)0x0) {
      return 2;
    }
    plVar6 = plVar3 + 1;
    if ((int)*plVar6 == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (lVar4 == 0) {
        return 2;
      }
      if ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) != 0) {
        return 2;
      }
      plVar3 = (long *)(lVar4 + 0x18);
      do {
        lVar4 = *plVar3;
        plVar3 = (long *)(lVar4 + 0x20);
      } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) {
        return 2;
      }
      lVar7 = lVar4;
      while ((*(int *)(lVar7 + 0x314) != *(int *)(param_1 + 0x24) || (*(int *)(lVar7 + 0x310) != 0))
            ) {
        lVar7 = *(long *)(lVar7 + 0x350);
        if (lVar7 == 0) {
          return 2;
        }
      }
      for (; *(int *)(lVar4 + 0x30c) != *(int *)(lVar7 + 0x30c); lVar4 = *(long *)(lVar4 + 0x350)) {
      }
      goto LAB_1003e27fc;
    }
LAB_1003e2780:
    *plVar3 = 0;
    *(int *)plVar6 = DAT_101dc0b88;
  }
  return 2;
LAB_1003e25ec:
  lVar7 = *(long *)(lVar7 + 0x350);
  if (lVar7 == 0) goto LAB_1003e2608;
  goto LAB_1003e25d8;
LAB_1003e24e0:
  lVar7 = *(long *)(lVar7 + 0x350);
  if (lVar7 == 0) goto LAB_1003e24fc;
  goto LAB_1003e24cc;
}




void FUN_1003e2814(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_1003e2840(void)

{
  return;
}




void FUN_1003e2844(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497e88;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




undefined8 FUN_1003e2864(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      return 2;
    }
    if ((int)param_2[1] != (int)plVar7[1]) {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
      return 2;
    }
    plVar4 = (long *)(**(code **)(*plVar7 + 0x10))();
    plVar6 = plVar4;
    if (plVar4 == (long *)0x0) {
      return 2;
    }
    goto LAB_1003e2a8c;
  case 1:
    if ((int)param_2[0x266] != 0) {
      uVar5 = 0;
      plVar7 = param_2 + 0x246;
      do {
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          if ((int)plVar7[1] == (int)plVar4[1]) {
            lVar3 = (**(code **)(*plVar4 + 0x10))();
            if (((lVar3 != 0) &&
                ((*(uint *)(param_1 + 0x28) & (*(uint *)(lVar3 + 0x2f4) ^ 0xffffffff)) == 0)) &&
               (iVar2 = FUN_1003e2ad4(lVar3,lVar3), iVar2 != 0)) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                return 1;
              }
              param_2[0x285] = (long)plVar7;
              return 1;
            }
          }
          else {
            *plVar7 = 0;
            *(undefined4 *)(plVar7 + 1) = DAT_101dc0b88;
          }
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 8;
      } while (uVar5 < *(uint *)(param_2 + 0x266));
    }
    break;
  case 2:
    if ((int)param_2[0x245] != 0) {
      uVar5 = 0;
      plVar7 = param_2 + 0x205;
      do {
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          if ((int)plVar7[1] == (int)plVar4[1]) {
            lVar3 = (**(code **)(*plVar4 + 0x10))();
            if (((lVar3 != 0) &&
                ((*(uint *)(param_1 + 0x28) & (*(uint *)(lVar3 + 0x2f4) ^ 0xffffffff)) == 0)) &&
               (iVar2 = FUN_1003e2ad4(lVar3,lVar3), iVar2 != 0)) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                return 1;
              }
              param_2[0x284] = (long)plVar7;
              return 1;
            }
          }
          else {
            *plVar7 = 0;
            *(undefined4 *)(plVar7 + 1) = DAT_101dc0b88;
          }
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 8;
      } while (uVar5 < *(uint *)(param_2 + 0x245));
    }
    break;
  case 3:
    if ((undefined8 *)param_2[0x285] == (undefined8 *)0x0) {
      return 2;
    }
    plVar4 = (long *)(**(code **)(**(long **)param_2[0x285] + 0x10))();
    uVar1 = *(uint *)(param_1 + 0x28) & (*(uint *)((long)plVar4 + 0x2f4) ^ 0xffffffff);
    plVar6 = plVar4;
    goto joined_r0x0001003e2a88;
  case 4:
    plVar7 = (long *)param_2[0x284];
    if (plVar7 == (long *)0x0) {
      return 2;
    }
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else if ((int)plVar7[1] == (int)plVar4[1]) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x10))();
      plVar6 = plVar4;
    }
    else {
      plVar6 = (long *)0x0;
      *plVar7 = 0;
      *(undefined4 *)(plVar7 + 1) = DAT_101dc0b88;
    }
    uVar1 = *(uint *)(param_1 + 0x28) & (*(uint *)((long)plVar6 + 0x2f4) ^ 0xffffffff);
joined_r0x0001003e2a88:
    if (uVar1 == 0) {
LAB_1003e2a8c:
      uVar5 = FUN_1003e2ad4(plVar4,plVar6);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
  }
  return 2;
}




undefined8 FUN_1003e2ad4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dda8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_1003e19fc();
  return uVar2;
}




void FUN_1003e2b08(void)

{
  return;
}




ulong FUN_1003e2b0c(long param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  uint local_48 [2];
  
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar5 = 0;
    do {
      plVar6 = (long *)(param_1 + uVar5 * 8 + 0x50);
      lVar3 = *plVar6;
      pcVar1 = *(char **)(lVar3 + 0x200);
      if ((pcVar1 == (char *)0x0) &&
         (lVar3 = *(long *)(lVar3 + 0x38), pcVar1 = "<null>", lVar3 != 0)) {
        pcVar1 = *(char **)(lVar3 + 8);
      }
      FUN_1003a4e5c(local_48,pcVar1);
      if (local_48[0] == param_2) {
        return uVar5;
      }
      lVar3 = *plVar6;
      pcVar1 = *(char **)(lVar3 + 0x200);
      if ((pcVar1 == (char *)0x0) &&
         (lVar3 = *(long *)(lVar3 + 0x38), pcVar1 = "<null>", lVar3 != 0)) {
        pcVar1 = *(char **)(lVar3 + 8);
      }
      cVar2 = *pcVar1;
      uVar4 = 0x811c9dc5;
      if (cVar2 != '\0') {
        uVar4 = 0x811c9dc5;
        do {
          pcVar1 = pcVar1 + 1;
          uVar4 = (uVar4 ^ (int)cVar2) * 0x1000193;
          cVar2 = *pcVar1;
        } while (cVar2 != '\0');
      }
      if (uVar4 == param_2) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_1 + 0x198));
  }
  return 0xffffffff;
}




void FUN_1003e2c08(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497f10;
  *(undefined4 *)(param_1 + 5) = DAT_101d2d128;
  return;
}




long FUN_1003e2c30(long param_1)

{
  FUN_1003a4e5c(param_1 + 0x28);
  return param_1;
}




undefined8 FUN_1003e2c58(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 4) {
    param_2 = (long *)param_2[0x284];
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 0) {
        return 2;
      }
      goto LAB_1003e2c98;
    }
    param_2 = (long *)param_2[0x285];
  }
  if (param_2 == (long *)0x0) {
    return 2;
  }
LAB_1003e2c98:
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x270) == *(int *)(param_1 + 0x28))) {
        return 1;
      }
    }
    else {
      *param_2 = 0;
      *(int *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  return 2;
}




void FUN_1003e2d00(void)

{
  return;
}




undefined8 FUN_1003e2d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = (ulong)DAT_101d2d130;
  uVar1 = (long)(int)DAT_101d2d130 + 1;
  if ((int)DAT_101d2d130 < 0) {
    uVar3 = 0;
    DAT_101d2d130 = (uint)uVar1;
    (&DAT_101d2d138)[uVar1 * 4] = 0xffffffff;
    uVar2 = uVar1;
  }
  else {
    DAT_101d2d130 = (uint)uVar1;
    (&DAT_101d2d138)[(uVar1 & 0xffffffff) * 4] = (&DAT_101d2d138)[uVar2 * 4];
    uVar3 = (&DAT_101d2d140)[uVar2 * 2];
    uVar2 = uVar1 & 0xffffffff;
  }
  (&DAT_101d2d140)[uVar2 * 2] = uVar3;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = 1;
  }
  else {
    do {
      uVar3 = FUN_1003e086c(lVar4,param_2,param_3);
      if ((int)uVar3 != 1) break;
      lVar4 = *(long *)(lVar4 + 0x18);
    } while (lVar4 != 0);
    uVar1 = (ulong)DAT_101d2d130;
  }
  DAT_101d2d130 = (int)uVar1 + -1;
  return uVar3;
}




undefined1  [16] FUN_1003e2dc8(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e2dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




void FUN_1003e2de4(void)

{
  return;
}




undefined8 FUN_1003e2de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = (ulong)DAT_101d2d130;
  uVar1 = (long)(int)DAT_101d2d130 + 1;
  if ((int)DAT_101d2d130 < 0) {
    uVar3 = 0;
    DAT_101d2d130 = (uint)uVar1;
    (&DAT_101d2d138)[uVar1 * 4] = 0xffffffff;
    uVar2 = uVar1;
  }
  else {
    DAT_101d2d130 = (uint)uVar1;
    (&DAT_101d2d138)[(uVar1 & 0xffffffff) * 4] = (&DAT_101d2d138)[uVar2 * 4];
    uVar3 = (&DAT_101d2d140)[uVar2 * 2];
    uVar2 = uVar1 & 0xffffffff;
  }
  (&DAT_101d2d140)[uVar2 * 2] = uVar3;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = 2;
  }
  else {
    do {
      uVar3 = FUN_1003e086c(lVar4,param_2,param_3);
      if ((int)uVar3 != 2) break;
      lVar4 = *(long *)(lVar4 + 0x18);
    } while (lVar4 != 0);
    uVar1 = (ulong)DAT_101d2d130;
  }
  DAT_101d2d130 = (int)uVar1 + -1;
  return uVar3;
}




float FUN_1003e2eac(long param_1,undefined8 param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    do {
      fVar2 = (float)(**(code **)(*plVar1 + 0x40))(plVar1,param_2);
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
      plVar1 = (long *)plVar1[3];
    } while (plVar1 != (long *)0x0);
  }
  return fVar3;
}




void FUN_1003e2f08(void)

{
  return;
}




int FUN_1003e2f0c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1003e086c(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 2) {
    iVar1 = 1;
  }
  return iVar1;
}




void FUN_1003e2f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e2f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




int FUN_1003e2f3c(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_1003e086c(*(undefined8 *)(param_1 + 0x10));
  iVar1 = (uint)(iVar2 == 1) << 1;
  if (iVar2 == 2) {
    iVar1 = 1;
  }
  return iVar1;
}




void FUN_1003e2f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e2f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




undefined8 FUN_1003e2f78(long param_1)

{
  FUN_1003e086c(*(undefined8 *)(param_1 + 0x10));
  return 2;
}




void FUN_1003e2f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e2fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




void FUN_1003e2fa4(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_101497f98;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




undefined8 FUN_1003e2fc0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar1 = FUN_1003e086c(*(undefined8 *)(param_1 + 0x10));
    if ((int)uVar1 != 2) {
      if (((int)uVar1 == 1) && (*(char *)(param_1 + 0x24) == '\0')) {
        uVar1 = 1;
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_1003e301c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e3028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  return;
}




undefined8 FUN_1003e302c(void)

{
  return 1;
}




bool FUN_1003e3034(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined **local_a0;
  long local_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined1 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined2 local_48;
  byte local_46;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_a0 = &PTR_FUN_101499960;
  local_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_64 = 0x3f800000bf800000;
  local_6c = 0xc0000000bf800000;
  local_5c = 0xff;
  local_54 = 0xffffffff;
  local_4c = 0xffffffff;
  lVar4 = FUN_1003e10f0();
  local_46 = *(byte *)(lVar4 + 0xe5);
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (lVar4 != 0) {
        local_98 = lVar4;
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  local_58 = 0x2000;
  local_70 = *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  local_8c = *param_3;
  local_84 = *(undefined4 *)(param_3 + 1);
  local_46 = local_46 | 0x14;
  local_48 = 0xc110;
  local_90 = 1;
  uVar3 = FUN_1003a6ce4(&local_a0,&local_40,1,0);
  if (uVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar7 = (ulong)*(ushort *)(local_40 + 0x88) & 0x1f;
    iVar6 = (int)uVar7;
    if (iVar6 == 0x1f) {
      bVar2 = true;
    }
    else {
      bVar2 = true;
      uVar1 = 1;
      do {
        uVar8 = uVar1;
        if (1 < (ushort)(((ushort *)(local_40 + 0x88))[uVar7 * 0x1c + 4] - 3)) goto LAB_1003e31c0;
        bVar2 = uVar8 < uVar3;
      } while ((uVar3 != uVar8) && (uVar1 = uVar8 + 1, iVar6 != 0x1f));
      bVar2 = uVar8 != uVar3;
    }
  }
LAB_1003e31c0:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar2;
}




byte FUN_1003e31f4(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined **local_a0;
  long local_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined1 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined2 local_48;
  byte local_46;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_a0 = &PTR_FUN_101499960;
  local_98 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_64 = 0x3f800000bf800000;
  local_6c = 0xc0000000bf800000;
  local_5c = 0xff;
  local_54 = 0xffffffff;
  local_4c = 0xffffffff;
  lVar4 = FUN_1003e10f0();
  local_46 = *(byte *)(lVar4 + 0xe5);
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (lVar4 != 0) {
        local_98 = lVar4;
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  local_58 = 0x2000;
  local_8c = *param_3;
  local_84 = *(undefined4 *)(param_3 + 1);
  local_70 = 0x42a20000;
  local_46 = local_46 | 0x14;
  local_48 = 0xc120;
  local_90 = 1;
  uVar3 = FUN_1003a6ce4(&local_a0,&local_40,1,0);
  if (uVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar7 = (ulong)*(ushort *)(local_40 + 0x88) & 0x1f;
    iVar6 = (int)uVar7;
    if (iVar6 == 0x1f) {
      bVar2 = true;
    }
    else {
      bVar2 = true;
      uVar1 = 1;
      do {
        uVar8 = uVar1;
        if (1 < (ushort)(((ushort *)(local_40 + 0x88))[uVar7 * 0x1c + 4] - 3)) goto LAB_1003e3378;
        bVar2 = uVar8 < uVar3;
      } while ((uVar3 != uVar8) && (uVar1 = uVar8 + 1, iVar6 != 0x1f));
      bVar2 = uVar8 != uVar3;
    }
  }
LAB_1003e3378:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return ~bVar2 & 1;
}




void FUN_1003e33b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = 0;
  uVar2 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)((long)param_1 + 0x54) = *(byte *)((long)param_1 + 0x54) & 0xfe;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar3 = 0xb0;
  *(byte *)((long)param_1 + 0xac) = *(byte *)((long)param_1 + 0xac) & 0xfe;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  lVar3 = 0x278;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x6f);
  lVar3 = 0x380;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  lVar3 = 0x688;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x111);
  lVar3 = 0x890;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x142);
  lVar3 = 0xa18;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x1a3);
  *(undefined4 *)(param_1 + 0x1a3) = 0;
  lVar3 = 0xd20;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x204) = 0;
  lVar3 = 0x1028;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x245);
  lVar3 = 0x1230;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x266);
  *(undefined8 *)((long)param_1 + 0x133c) = 0;
  *(undefined8 *)((long)param_1 + 0x1334) = 0;
  uVar2 = DAT_101dc0b88;
  param_1[0x269] = 0;
  *(undefined4 *)(param_1 + 0x26a) = uVar2;
  param_1[0x26b] = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)((long)param_1 + 0x1364) = 0;
  *(undefined4 *)((long)param_1 + 0x136c) = 0;
  param_1[0x26f] = 0;
  param_1[0x26e] = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(byte *)((long)param_1 + 0x1384) = *(byte *)((long)param_1 + 0x1384) & 0xfe;
  param_1[0x272] = 0;
  *(undefined4 *)(param_1 + 0x273) = uVar2;
  *(undefined4 *)(param_1 + 0x275) = 0;
  param_1[0x274] = 0;
  *(undefined4 *)((long)param_1 + 0x13b4) = 0;
  *(undefined8 *)((long)param_1 + 0x13ac) = 0;
  param_1[0x278] = 0;
  param_1[0x277] = 0;
  *(undefined4 *)(param_1 + 0x279) = 0;
  *(byte *)((long)param_1 + 0x13cc) = *(byte *)((long)param_1 + 0x13cc) & 0xfe;
  param_1[0x27b] = 0;
  *(undefined4 *)(param_1 + 0x27c) = uVar2;
  *(undefined4 *)(param_1 + 0x27e) = 0;
  param_1[0x27d] = 0;
  *(undefined4 *)((long)param_1 + 0x13fc) = 0;
  *(undefined8 *)((long)param_1 + 0x13f4) = 0;
  *(undefined4 *)(param_1 + 0x282) = 0;
  *(byte *)((long)param_1 + 0x1414) = *(byte *)((long)param_1 + 0x1414) & 0xfe;
  *(undefined4 *)((long)param_1 + 0x1444) = 0;
  *(undefined8 *)((long)param_1 + 0x143c) = 0;
  param_1[0x28a] = param_1 + 0x28b;
  param_1[0x28b] = &PTR_FUN_10149ba98;
  param_1[0x281] = 0;
  param_1[0x280] = 0;
  param_1[0x28c] = &DAT_101498020;
  *(undefined4 *)(param_1 + 0x28d) = 0x40a00000;
  param_1[0x285] = 0;
  param_1[0x284] = 0;
  param_1[0x28e] = &PTR_FUN_10149bab0;
  param_1[0x28f] = 0;
  *(undefined4 *)(param_1 + 0x290) = uVar2;
  *(undefined4 *)(param_1 + 0x292) = 0;
  param_1[0x291] = 0;
  *(undefined4 *)((long)param_1 + 0x149c) = 0;
  *(undefined8 *)((long)param_1 + 0x1494) = 0;
  *(undefined4 *)(param_1 + 0x296) = 0;
  param_1[0x295] = 0;
  param_1[0x294] = 0;
  *(byte *)((long)param_1 + 0x14b4) = *(byte *)((long)param_1 + 0x14b4) & 0xfe;
  param_1[0x297] = 0;
  *(undefined4 *)(param_1 + 0x298) = uVar2;
  *(undefined4 *)(param_1 + 0x29a) = 0;
  param_1[0x299] = 0;
  *(undefined4 *)((long)param_1 + 0x14dc) = 0;
  *(undefined8 *)((long)param_1 + 0x14d4) = 0;
  *(undefined4 *)(param_1 + 0x29e) = 0;
  param_1[0x29d] = 0;
  param_1[0x29c] = 0;
  *(byte *)((long)param_1 + 0x14f4) = *(byte *)((long)param_1 + 0x14f4) & 0xfe;
  param_1[0x29f] = 0;
  *(undefined4 *)(param_1 + 0x2a0) = uVar2;
  *(undefined4 *)(param_1 + 0x2a2) = 0;
  param_1[0x2a1] = 0;
  *(undefined4 *)((long)param_1 + 0x151c) = 0;
  *(undefined8 *)((long)param_1 + 0x1514) = 0;
  *(undefined4 *)(param_1 + 0x2a6) = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a4] = 0;
  *(byte *)((long)param_1 + 0x1534) = *(byte *)((long)param_1 + 0x1534) & 0xfe;
  param_1[0x2a7] = 0;
  *(undefined4 *)(param_1 + 0x2a8) = uVar2;
  *(undefined4 *)(param_1 + 0x2aa) = 0;
  param_1[0x2a9] = 0;
  *(undefined4 *)((long)param_1 + 0x155c) = 0;
  *(undefined8 *)((long)param_1 + 0x1554) = 0;
  *(undefined4 *)(param_1 + 0x2ae) = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ac] = 0;
  *(byte *)((long)param_1 + 0x1574) = *(byte *)((long)param_1 + 0x1574) & 0xfe;
  param_1[0x2af] = 0;
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  *(undefined4 *)(param_1 + 0x2b2) = 0;
  param_1[0x2b1] = 0;
  *(undefined4 *)((long)param_1 + 0x159c) = 0;
  *(undefined8 *)((long)param_1 + 0x1594) = 0;
  *(undefined4 *)(param_1 + 0x2b6) = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b4] = 0;
  *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) & 0xfe;
  param_1[0x2b7] = 0;
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ba) = 0;
  param_1[0x2b9] = 0;
  *(undefined4 *)((long)param_1 + 0x15dc) = 0;
  *(undefined8 *)((long)param_1 + 0x15d4) = 0;
  *(undefined4 *)(param_1 + 0x2be) = 0;
  param_1[0x2bd] = 0;
  param_1[700] = 0;
  *(byte *)((long)param_1 + 0x15f4) = *(byte *)((long)param_1 + 0x15f4) & 0xfe;
  param_1[0x2bf] = 0;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  *(undefined4 *)(param_1 + 0x2c2) = 0;
  param_1[0x2c1] = 0;
  *(undefined4 *)((long)param_1 + 0x161c) = 0;
  *(undefined8 *)((long)param_1 + 0x1614) = 0;
  *(undefined4 *)(param_1 + 0x2c6) = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c4] = 0;
  *(byte *)((long)param_1 + 0x1634) = *(byte *)((long)param_1 + 0x1634) & 0xfe;
  param_1[0x2c7] = 0;
  *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  *(undefined4 *)(param_1 + 0x2ca) = 0;
  param_1[0x2c9] = 0;
  *(undefined4 *)((long)param_1 + 0x165c) = 0;
  *(undefined8 *)((long)param_1 + 0x1654) = 0;
  *(undefined4 *)(param_1 + 0x2ce) = 0;
  param_1[0x2cd] = 0;
  param_1[0x2cc] = 0;
  *(byte *)((long)param_1 + 0x1674) = *(byte *)((long)param_1 + 0x1674) & 0xfe;
  param_1[0x2d0] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d1] = &PTR_FUN_10149d7b0;
  *(undefined1 *)(param_1 + 0x30e) = 0;
  param_1[0x30d] = 0;
  param_1[0x30c] = 0;
  param_1[0x30b] = 0;
  param_1[0x30a] = 0;
  param_1[0x309] = 0;
  param_1[0x308] = 0;
  param_1[0x307] = 0;
  param_1[0x306] = 0;
  param_1[0x305] = 0;
  param_1[0x304] = 0;
  param_1[0x303] = 0;
  param_1[0x302] = 0;
  param_1[0x301] = 0;
  param_1[0x300] = 0;
  param_1[0x2ff] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2ef] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e5] = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2df] = 0;
  param_1[0x2de] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2db] = 0;
  param_1[0x2da] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d4] = 0;
  lVar3 = 0x1878;
  param_1[0x2d3] = 0;
  param_1[0x2d2] = 0;
  do {
    uVar2 = DAT_101dc0b88;
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(byte *)((long)puVar1 + 0x3c) = *(byte *)((long)puVar1 + 0x3c) & 0xfe;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x327);
  *(undefined4 *)(param_1 + 0x327) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined1 *)((long)param_1 + 0x1984) = 0;
  uVar2 = DAT_101dc0b88;
  param_1[0x33a] = 0;
  *(undefined4 *)(param_1 + 0x33b) = uVar2;
  param_1[0x33c] = 0;
  param_1[0x33e] = 0;
  *(undefined4 *)(param_1 + 0x33f) = 0;
  *(undefined4 *)((long)param_1 + 0x1a0c) = 0;
  *(undefined8 *)((long)param_1 + 0x19fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1a01) = 0;
  lVar3 = 0x1a10;
  *(undefined4 *)(param_1 + 0x33d) = uVar2;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = uVar2;
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = 0;
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0;
    *(undefined8 *)((long)puVar1 + 0x31) = 0;
    lVar3 = lVar3 + 0x40;
  } while (puVar1 + 8 != param_1 + 0x362);
  param_1[0x362] = 0;
  *(undefined4 *)(param_1 + 0x363) = uVar2;
  param_1[0x364] = 0;
  *(undefined4 *)(param_1 + 0x365) = uVar2;
  param_1[0x366] = 0;
  *(undefined4 *)(param_1 + 0x367) = 0;
  *(undefined4 *)((long)param_1 + 0x1b4c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b3c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b41) = 0;
  param_1[0x36a] = 0;
  *(undefined4 *)(param_1 + 0x36b) = uVar2;
  param_1[0x36c] = 0;
  *(undefined4 *)(param_1 + 0x36d) = uVar2;
  *(undefined4 *)(param_1 + 0x36f) = 0;
  param_1[0x36e] = 0;
  *(undefined4 *)((long)param_1 + 0x1b8c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b81) = 0;
  *(undefined8 *)((long)param_1 + 0x1b7c) = 0;
  param_1[0x372] = 0;
  *(undefined4 *)(param_1 + 0x373) = uVar2;
  param_1[0x374] = 0;
  *(undefined4 *)(param_1 + 0x375) = uVar2;
  param_1[0x376] = 0;
  *(undefined4 *)(param_1 + 0x377) = 0;
  *(undefined4 *)((long)param_1 + 0x1bcc) = 0;
  *(undefined8 *)((long)param_1 + 0x1bbc) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc1) = 0;
  param_1[0x3bb] = 0;
  param_1[0x3ba] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3bc] = 0xffffffff00000000;
  param_1[0x3bd] = 0;
  *(undefined4 *)(param_1 + 0x3be) = uVar2;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  param_1[0x3bf] = 0;
  *(undefined4 *)((long)param_1 + 0x1e0c) = 0;
  *(undefined8 *)((long)param_1 + 0x1e04) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  param_1[0x3c2] = 0;
  param_1[0x3c3] = 0;
  *(byte *)((long)param_1 + 0x1e24) = *(byte *)((long)param_1 + 0x1e24) & 0xfe;
  return;
}




void FUN_1003e3cd4(long *param_1)

{
  undefined ***pppuVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  undefined **local_730;
  undefined8 uStack_728;
  undefined4 local_720;
  float fStack_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined1 local_710;
  undefined **local_708;
  long local_700;
  undefined1 local_6f8;
  undefined8 local_6f4;
  undefined8 local_6ec;
  undefined8 local_6e4;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  undefined1 local_6c4;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined2 local_6b0;
  byte local_6ae;
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        local_708 = &PTR_FUN_101499960;
        local_6f4 = 0;
        local_6e4 = 0;
        local_6ec = 0;
        local_6dc = 0;
        uStack_6d0 = 0xbf800000c0000000;
        local_6d8 = 0xbf800000bf800000;
        local_6c8 = 0x3f800000;
        local_6c4 = 0xff;
        uStack_6b8 = 0xffffffff00000000;
        local_6c0 = 0xffffffff00000000;
        lVar7 = FUN_1003e10f0();
        local_6f8 = 1;
        local_6b0 = 0x4130;
        local_720 = *(undefined4 *)(lVar6 + 0x250);
        local_718 = *(undefined4 *)(lVar6 + 600);
        fStack_71c = *(float *)(lVar6 + 0x2ec) + *(float *)(lVar6 + 0x254);
        cVar4 = *(char *)(lVar6 + 0x264);
        local_730 = &PTR_FUN_101499a08;
        uStack_728 = 0;
        local_714 = 1000;
        local_710 = 1;
        if (*(char *)((long)param_1 + 0x1984) == '\0') {
          fVar12 = *(float *)(*(long *)(lVar6 + 0x40) + 0x130) +
                   *(float *)(*(long *)(lVar6 + 0x40) + 0x7c);
          local_6f4 = CONCAT44(fStack_71c,local_720);
          local_6ec = CONCAT44(local_6ec._4_4_,local_718);
          local_6d8 = CONCAT44(local_6d8._4_4_,fVar12 * fVar12);
          local_6b0 = 0xc130;
        }
        local_6ae = *(byte *)(lVar7 + 0xe5) | 0x16;
        pppuVar1 = (undefined ***)(undefined1 *)0x0;
        if (*(char *)((long)param_1 + 0x1984) != '\0') {
          pppuVar1 = &local_730;
        }
        local_700 = lVar6;
        uVar8 = FUN_1003a6ce4(&local_708,local_6a8,200,pppuVar1);
        if ((int)uVar8 != 0) {
          plVar5 = local_6a8;
          uVar11 = uVar8 & 0xffffffff;
          do {
            lVar7 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar7 + 0x88) & 0x1f;
            if (((int)uVar10 == 0x1f) || (1 < *(ushort *)(lVar7 + uVar10 * 0x38 + 0x90) - 3)) {
              uVar2 = *(uint *)(lVar7 + 0x2f4);
              if (*(char *)(lVar7 + 0x264) == cVar4) {
                if ((uVar2 & 1) == 0) {
LAB_1003e3ed8:
                  if ((uVar2 >> 4 & 1) != 0) {
                    uVar2 = *(uint *)(param_1 + 0x111);
                    if (uVar2 < 8) {
                      *(uint *)(param_1 + 0x111) = uVar2 + 1;
                      plVar9 = param_1 + (ulong)uVar2 * 8 + 0xd1;
                      goto LAB_1003e3f48;
                    }
                  }
                }
                else {
                  uVar3 = *(uint *)(param_1 + 0x6f);
                  if (3 < uVar3) goto LAB_1003e3ed8;
                  *(uint *)(param_1 + 0x6f) = uVar3 + 1;
                  plVar9 = param_1 + (ulong)uVar3 * 8 + 0x4f;
LAB_1003e3f48:
                  uVar8 = FUN_1003e1570(uVar8,lVar6,lVar7,plVar9);
                }
              }
              else {
                if ((uVar2 & 5) != 0) {
                  uVar3 = *(uint *)(param_1 + 0x4e);
                  if (uVar3 < 8) {
                    *(uint *)(param_1 + 0x4e) = uVar3 + 1;
                    plVar9 = param_1 + (ulong)uVar3 * 8 + 0xe;
                    goto LAB_1003e3f48;
                  }
                }
                if ((uVar2 & 0x20100010) != 0) {
                  uVar3 = *(uint *)(param_1 + 0xd0);
                  if (uVar3 < 0xc) {
                    *(uint *)(param_1 + 0xd0) = uVar3 + 1;
                    plVar9 = param_1 + (ulong)uVar3 * 8 + 0x70;
                    goto LAB_1003e3f48;
                  }
                }
                if ((uVar2 & 0x300) != 0) {
                  uVar2 = *(uint *)(param_1 + 0x142);
                  if (uVar2 < 6) {
                    *(uint *)(param_1 + 0x142) = uVar2 + 1;
                    plVar9 = param_1 + (ulong)uVar2 * 8 + 0x112;
                    goto LAB_1003e3f48;
                  }
                }
              }
            }
            plVar5 = plVar5 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1003e3fb0(long *param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003e4b04();
  plVar1 = param_1 + 0x28f;
  plVar4 = (long *)param_1[0x28f];
  if (plVar4 != (long *)0x0) {
    if ((int)param_1[0x290] == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f;
      if (((int)uVar8 == 0x1f) || (1 < *(ushort *)(lVar5 + uVar8 * 0x38 + 0x90) - 3)) {
        plVar4 = (long *)*param_1;
        if (plVar4 == (long *)0x0) {
          uVar6 = 0;
        }
        else if ((int)param_1[1] == (int)plVar4[1]) {
          uVar6 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          uVar6 = 0;
          *param_1 = 0;
          *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
        }
        uVar7 = (**(code **)(*(long *)*plVar1 + 0x10))();
        if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
          FUN_1003e1570(uVar7,uVar6,uVar7,plVar1);
          return;
        }
        goto LAB_1003e42f8;
      }
    }
    else {
      param_1[0x28f] = 0;
      *(undefined4 *)(param_1 + 0x290) = DAT_101dc0b88;
    }
  }
  lVar5 = (**(code **)(*(long *)*param_1 + 0x10))();
  cVar2 = *(char *)(lVar5 + 0x264);
  uVar3 = FUN_1010a1958(local_698,200,DAT_10184dd68,0);
  if (uVar3 != 0) {
    lVar5 = 0;
    uVar9 = (ulong)uVar3;
    plVar4 = local_698;
    uVar8 = uVar9;
    lVar14 = 0;
    do {
      lVar11 = *plVar4;
      lVar13 = lVar14;
      if (((*(byte *)(lVar11 + 0x2f5) >> 5 & 1) == 0) ||
         ((uVar12 = (ulong)*(ushort *)(lVar11 + 0x88) & 0x1f, (int)uVar12 != 0x1f &&
          (*(ushort *)(lVar11 + uVar12 * 0x38 + 0x90) - 3 < 2)))) goto LAB_1003e4170;
      if (*(char *)(lVar11 + 0x264) == cVar2) {
        lVar13 = lVar11;
        if (lVar14 != 0) {
          lVar13 = lVar14;
        }
        if (cVar2 == '\x02') {
          if (*(float *)(lVar11 + 0x250) < *(float *)(lVar13 + 0x250)) goto LAB_1003e415c;
        }
        else if ((cVar2 == '\x01') && (*(float *)(lVar13 + 0x250) < *(float *)(lVar11 + 0x250))) {
LAB_1003e415c:
          lVar13 = lVar11;
        }
      }
      else {
        lVar14 = lVar11;
        if (lVar5 != 0) {
          lVar14 = lVar5;
        }
        lVar5 = lVar14;
        if (cVar2 == '\x02') {
          if (*(float *)(lVar11 + 0x250) < *(float *)(lVar14 + 0x250)) goto LAB_1003e416c;
        }
        else if ((cVar2 == '\x01') && (*(float *)(lVar14 + 0x250) < *(float *)(lVar11 + 0x250))) {
LAB_1003e416c:
          lVar5 = lVar11;
        }
      }
LAB_1003e4170:
      plVar4 = plVar4 + 1;
      uVar8 = uVar8 - 1;
      lVar14 = lVar13;
    } while (uVar8 != 0);
    lVar14 = 0;
    plVar4 = local_698;
    lVar11 = 0;
    do {
      lVar10 = *plVar4;
      lVar15 = lVar11;
      if ((*(char *)(lVar10 + 0x2f5) < '\0') &&
         (lVar15 = lVar10, *(char *)(lVar10 + 0x264) != cVar2)) {
        lVar14 = lVar10;
        lVar15 = lVar11;
      }
      plVar4 = plVar4 + 1;
      uVar9 = uVar9 - 1;
      lVar11 = lVar15;
    } while (uVar9 != 0);
    lVar11 = lVar13;
    if (lVar15 != 0) {
      uVar6 = (**(code **)(*(long *)*param_1 + 0x10))();
      FUN_1003e1570(uVar6,uVar6,lVar15,param_1 + 0x29f);
      lVar11 = lVar15;
      if (lVar13 != 0) {
        lVar11 = lVar13;
      }
    }
    if (lVar14 != 0) {
      uVar6 = (**(code **)(*(long *)*param_1 + 0x10))();
      FUN_1003e1570(uVar6,uVar6,lVar14,param_1 + 0x2c7);
    }
    if (lVar11 != 0) {
      uVar6 = (**(code **)(*(long *)*param_1 + 0x10))();
      FUN_1003e1570(uVar6,uVar6,lVar11,plVar1);
    }
    if (lVar5 != 0) {
      uVar6 = (**(code **)(*(long *)*param_1 + 0x10))();
      FUN_1003e1570(uVar6,uVar6,lVar5,param_1 + 0x2af);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
LAB_1003e42f8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003e42fc(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined **local_710;
  long local_708;
  undefined1 local_700;
  undefined8 local_6fc;
  undefined8 local_6f4;
  undefined8 local_6ec;
  undefined4 local_6e4;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined4 local_6d0;
  undefined1 local_6cc;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined2 local_6b8;
  byte local_6b6;
  long local_6b0 [200];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        local_710 = &PTR_FUN_101499960;
        local_6fc = 0;
        local_6ec = 0;
        local_6f4 = 0;
        local_6e4 = 0;
        uStack_6d8 = 0xbf800000c0000000;
        local_6e0 = 0xbf800000bf800000;
        local_6d0 = 0x3f800000;
        local_6cc = 0xff;
        uStack_6c0 = 0xffffffff00000000;
        local_6c8 = 0xffffffff00000000;
        lVar6 = FUN_1003e10f0();
        local_700 = 3;
        local_6b8 = 0x4130;
        local_6b6 = *(byte *)(lVar6 + 0xe5) | 0x16;
        local_708 = lVar5;
        uVar7 = FUN_1003a6ce4(&local_710,local_6b0,200,0);
        param_1[0x337] = 0;
        *(undefined1 *)(param_1 + 0x271) = 0;
        *(undefined1 *)(param_1 + 0x27a) = 0;
        *(undefined1 *)(param_1 + 0x283) = 0;
        *(undefined4 *)(param_1 + 0x245) = 0;
        if ((int)uVar7 != 0) {
          cVar2 = *(char *)(lVar5 + 0x264);
          plVar4 = local_6b0;
          uVar11 = uVar7 & 0xffffffff;
          do {
            lVar6 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
            if (((int)uVar9 != 0x1f) && (*(ushort *)(lVar6 + uVar9 * 0x38 + 0x90) - 3 < 2))
            goto LAB_1003e454c;
            uVar1 = *(uint *)(lVar6 + 0x2f4);
            if ((uVar1 >> 0x1e & 1) == 0) {
              if ((uVar1 >> 0xb & 1) != 0) {
                *(undefined1 *)(param_1 + 0x27a) = 1;
                plVar8 = param_1 + 0x272;
                goto LAB_1003e4544;
              }
              bVar3 = *(char *)(lVar6 + 0x264) == cVar2;
              if ((uVar1 >> 10 & 1) != 0) {
                if (bVar3) goto LAB_1003e44c4;
                *(undefined1 *)(param_1 + 0x283) = 1;
                plVar8 = param_1 + 0x27b;
                goto LAB_1003e4544;
              }
              if (bVar3) {
LAB_1003e44c4:
                if ((uVar1 & 1) == 0) {
                  if ((uVar1 >> 0xd & 1) != 0) {
                    *(int *)((long)param_1 + 0x19bc) = *(int *)((long)param_1 + 0x19bc) + 1;
                    uVar1 = *(uint *)(param_1 + 0x204);
                    if (uVar1 < 0xc) {
                      *(uint *)(param_1 + 0x204) = uVar1 + 1;
                      plVar8 = param_1 + (ulong)uVar1 * 8 + 0x1a4;
                      goto LAB_1003e4544;
                    }
                  }
                }
                else {
                  uVar1 = *(uint *)(param_1 + 0x266);
                  if (uVar1 < 4) {
                    *(uint *)(param_1 + 0x266) = uVar1 + 1;
                    lVar10 = 0x1230;
                    goto LAB_1003e4540;
                  }
                }
              }
              else if ((uVar1 & 1) == 0) {
                if ((uVar1 & 0x6000) != 0) {
                  uVar1 = *(uint *)(param_1 + 0x1a3);
                  if (uVar1 < 0xc) {
                    *(int *)(param_1 + 0x337) = (int)param_1[0x337] + 1;
                    *(uint *)(param_1 + 0x1a3) = uVar1 + 1;
                    plVar8 = param_1 + (ulong)uVar1 * 8 + 0x143;
                    goto LAB_1003e4544;
                  }
                }
              }
              else {
                uVar1 = *(uint *)(param_1 + 0x245);
                if (uVar1 < 8) {
                  *(uint *)(param_1 + 0x245) = uVar1 + 1;
                  lVar10 = 0x1028;
LAB_1003e4540:
                  plVar8 = (long *)((long)param_1 + lVar10 + (ulong)uVar1 * 0x40);
                  goto LAB_1003e4544;
                }
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x271) = 1;
              plVar8 = param_1 + 0x269;
LAB_1003e4544:
              uVar7 = FUN_1003e1570(uVar7,lVar5,lVar6,plVar8);
            }
LAB_1003e454c:
            plVar4 = plVar4 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1003e45ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = param_1 + 0x18;
  uVar2 = FUN_1003e4e78(lVar5,param_1 + 0x70,*(undefined4 *)(param_1 + 0x270));
  if ((((uVar2 & 1) != 0) ||
      (uVar2 = FUN_1003e4e78(lVar5,param_1 + 0x380,*(undefined4 *)(param_1 + 0x680)),
      (uVar2 & 1) != 0)) ||
     (iVar1 = FUN_1003e4e78(lVar5,param_1 + 0x890,*(undefined4 *)(param_1 + 0xa10)), iVar1 != 0)) {
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
  }
  if (*(int *)(param_1 + 0x680) != 0) {
    uVar2 = 0;
    lVar5 = param_1 + 0x380;
    do {
      uVar3 = FUN_1003e4e78(lVar5,param_1 + 0x688,*(undefined4 *)(param_1 + 0x888));
      if (((uVar3 & 1) != 0) ||
         (iVar1 = FUN_1003e4e78(lVar5,param_1 + 0x278,*(undefined4 *)(param_1 + 0x378)), iVar1 != 0)
         ) {
        *(byte *)(lVar5 + 0x3c) = *(byte *)(lVar5 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x680));
  }
  if (*(int *)(param_1 + 0x270) != 0) {
    uVar2 = 0;
    lVar5 = param_1 + 0x70;
    do {
      uVar3 = FUN_1003e4e78(lVar5,param_1 + 0x688,*(undefined4 *)(param_1 + 0x888));
      if (((uVar3 & 1) != 0) ||
         (iVar1 = FUN_1003e4e78(lVar5,param_1 + 0x278,*(undefined4 *)(param_1 + 0x378)), iVar1 != 0)
         ) {
        *(byte *)(lVar5 + 0x3c) = *(byte *)(lVar5 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x270));
  }
  lVar5 = param_1 + 0x380;
  if (*(int *)(param_1 + 0x378) != 0) {
    uVar2 = 0;
    lVar6 = param_1 + 0x278;
    do {
      uVar3 = FUN_1003e4e78(lVar6,lVar5,*(undefined4 *)(param_1 + 0x680));
      if ((((uVar3 & 1) != 0) ||
          (uVar3 = FUN_1003e4e78(lVar6,param_1 + 0x70,*(undefined4 *)(param_1 + 0x270)),
          (uVar3 & 1) != 0)) ||
         (iVar1 = FUN_1003e4e78(lVar6,param_1 + 0x890,*(undefined4 *)(param_1 + 0xa10)), iVar1 != 0)
         ) {
        *(byte *)(lVar6 + 0x3c) = *(byte *)(lVar6 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar6 = lVar6 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x378));
  }
  if (*(int *)(param_1 + 0x1020) != 0) {
    uVar2 = 0;
    lVar6 = param_1 + 0xd20;
    do {
      uVar3 = FUN_1003e4e78(lVar6,lVar5,*(undefined4 *)(param_1 + 0x680));
      if (((uVar3 & 1) != 0) ||
         (iVar1 = FUN_1003e4e78(lVar6,param_1 + 0x1028,*(undefined4 *)(param_1 + 0x1228)),
         iVar1 != 0)) {
        *(byte *)(lVar6 + 0x3c) = *(byte *)(lVar6 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar6 = lVar6 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x1020));
  }
  if (*(long *)(param_1 + 0x1478) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1480) != *(int *)(*(long *)(param_1 + 0x1478) + 8)) {
    *(undefined8 *)(param_1 + 0x1478) = 0;
    *(undefined4 *)(param_1 + 0x1480) = DAT_101dc0b88;
    return;
  }
  plVar7 = (long *)(param_1 + 0x1478);
  uVar2 = FUN_1003e4e78(plVar7,lVar5,*(undefined4 *)(param_1 + 0x680));
  if (((uVar2 & 1) != 0) ||
     (uVar2 = FUN_1003e4e78(plVar7,param_1 + 0x1028,*(undefined4 *)(param_1 + 0x1228)),
     (uVar2 & 1) != 0)) goto LAB_1003e47f0;
  if (*(char *)(param_1 + 5000) == '\0') {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x1348);
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else if (*(int *)(param_1 + 0x1350) == (int)plVar4[1]) {
    lVar5 = (**(code **)(*plVar4 + 0x10))();
  }
  else {
    lVar5 = 0;
    *(undefined8 *)(param_1 + 0x1348) = 0;
    *(undefined4 *)(param_1 + 0x1350) = DAT_101dc0b88;
  }
  plVar4 = *(long **)(lVar5 + 0x2b0);
  if (plVar4 == (long *)0x0) {
LAB_1003e4938:
    lVar6 = 0;
  }
  else {
    if (*(int *)(lVar5 + 0x2b8) == (int)plVar4[1]) {
      lVar6 = (**(code **)(*plVar4 + 0x10))();
      if (lVar6 != 0) {
        plVar4 = *(long **)(lVar5 + 0x2b0);
        lVar6 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(lVar5 + 0x2b8) == (int)plVar4[1]) {
            lVar6 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            lVar6 = 0;
            *(undefined8 *)(lVar5 + 0x2b0) = 0;
            *(undefined4 *)(lVar5 + 0x2b8) = DAT_101dc0b88;
          }
        }
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
        if ((((int)uVar2 == 0x1f) || (1 < *(ushort *)(lVar6 + uVar2 * 0x38 + 0x90) - 3)) &&
           (plVar4 = *(long **)(lVar5 + 0x2b0), plVar4 != (long *)0x0)) {
          if (*(int *)(lVar5 + 0x2b8) != (int)plVar4[1]) goto LAB_1003e4940;
          lVar6 = (**(code **)(*plVar4 + 0x10))();
          goto LAB_1003e4958;
        }
      }
      goto LAB_1003e4938;
    }
LAB_1003e4940:
    lVar6 = 0;
    *(undefined8 *)(lVar5 + 0x2b0) = 0;
    *(undefined4 *)(lVar5 + 0x2b8) = DAT_101dc0b88;
  }
LAB_1003e4958:
  plVar7 = (long *)*plVar7;
  lVar5 = 0;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1480) == (int)plVar7[1]) {
      lVar5 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      lVar5 = 0;
      *(undefined8 *)(param_1 + 0x1478) = 0;
      *(undefined4 *)(param_1 + 0x1480) = DAT_101dc0b88;
    }
  }
  if (lVar6 != lVar5) {
    return;
  }
LAB_1003e47f0:
  *(byte *)(param_1 + 0x14b4) = *(byte *)(param_1 + 0x14b4) | 8;
  return;
}




void FUN_1003e49a4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x195c);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x1938);
      if (iVar2 < 8) {
        uVar1 = *(undefined4 *)(param_1 + 0x1960 + uVar3 * 4);
        *(int *)(param_1 + 0x1938) = iVar2 + 1;
        *(undefined4 *)(param_1 + (long)iVar2 * 4 + 0x193c) = uVar1;
        uVar4 = *(uint *)(param_1 + 0x195c);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined4 *)(param_1 + 0x195c) = 0;
  return;
}




void FUN_1003e49f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_1003e49f8(long param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1938);
  if (iVar1 < 8) {
    *(int *)(param_1 + 0x1938) = iVar1 + 1;
    *(undefined4 *)(param_1 + (long)iVar1 * 4 + 0x193c) = param_2;
  }
  return;
}




float FUN_1003e4a18(long param_1)

{
  long lVar1;
  float fVar2;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10047018c(param_1,&local_34);
  lVar1 = *(long *)(param_1 + 0x40);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(float *)(lVar1 + 0x80),*(float *)(lVar1 + 0x134),*(float *)(lVar1 + 0x1e8),
                      DAT_101e942a8,*(float *)(lVar1 + 0x29c),local_34,local_2c,DAT_101e94368);
  }
  fVar2 = *(float *)(lVar1 + 0x80) + *(float *)(lVar1 + 0x134) * (*(float *)(lVar1 + 0x29c) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1e8),DAT_101e94368);
  fVar2 = fStack_30 + local_34 + DAT_101e942a8;
  fVar2 = fVar2 - fVar2 * local_2c;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}




void FUN_1003e4ad4(long param_1,int param_2)

{
  byte bVar1;
  
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfd | bVar1;
  return;
}




void FUN_1003e4b04(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_780;
  undefined **local_778;
  undefined8 local_770;
  undefined1 local_768;
  undefined8 local_764;
  undefined8 local_75c;
  undefined8 local_754;
  undefined4 local_74c;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined4 local_738;
  undefined1 local_734;
  undefined4 local_730;
  undefined8 local_72c;
  undefined4 local_724;
  undefined2 local_720;
  byte local_71e;
  undefined **local_718;
  undefined8 local_710;
  undefined1 local_708;
  undefined8 local_704;
  undefined8 local_6fc;
  undefined8 local_6f4;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d8;
  undefined1 local_6d4;
  undefined4 local_6d0;
  undefined8 local_6cc;
  undefined4 local_6c4;
  undefined2 local_6c0;
  undefined1 local_6be;
  long alStack_6b8 [200];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    uVar6 = 0;
  }
  else if ((int)param_1[1] == (int)plVar5[1]) {
    uVar6 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    uVar6 = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
  }
  plVar5 = param_1 + 0x297;
  plVar7 = (long *)param_1[0x297];
  if (plVar7 != (long *)0x0) {
    if ((int)param_1[0x298] == (int)plVar7[1]) {
      lVar8 = (**(code **)(*plVar7 + 0x10))();
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x88) & 0x1f;
      if (((int)uVar10 == 0x1f) || (1 < *(ushort *)(lVar8 + uVar10 * 0x38 + 0x90) - 3)) {
        uVar9 = (**(code **)(*(long *)*plVar5 + 0x10))();
        if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
          FUN_1003e1570(uVar9,uVar6,uVar9,plVar5);
          return;
        }
        goto LAB_1003e4e30;
      }
    }
    else {
      param_1[0x297] = 0;
      *(undefined4 *)(param_1 + 0x298) = DAT_101dc0b88;
    }
  }
  local_718 = &PTR_FUN_101499960;
  local_704 = 0;
  local_6f4 = 0;
  local_6fc = 0;
  uStack_6e0 = 0xbf800000c0000000;
  local_6e8 = 0xbf800000bf800000;
  local_6ec = 0;
  local_6d8 = 0x3f800000;
  local_6d4 = 0xff;
  local_6cc = 0xffffffff;
  local_6c4 = 0xffffffff;
  lVar8 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar8 + 0xe5);
  local_778 = &PTR_FUN_101499960;
  local_770 = 0;
  local_764 = 0;
  local_754 = 0;
  local_75c = 0;
  local_74c = 0;
  uStack_740 = 0xbf800000c0000000;
  local_748 = 0xbf800000bf800000;
  local_738 = 0x3f800000;
  local_734 = 0xff;
  local_72c = 0xffffffff;
  local_724 = 0xffffffff;
  lVar8 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar8 + 0xe5);
  local_780 = 0;
  local_6d0 = 0x8000;
  iVar4 = ((uint)bVar1 << 0x10 | 0x144110) + 0x10;
  local_6be = (undefined1)((uint)iVar4 >> 0x10);
  local_6c0 = (undefined2)iVar4;
  local_708 = 1;
  local_710 = uVar6;
  iVar4 = FUN_1003a6ce4(&local_718,&local_780,1,0);
  if (iVar4 != 0) {
    local_730 = 0x10;
    local_71e = bVar2 | 0x14;
    local_720 = 0x4110;
    local_768 = 1;
    local_770 = uVar6;
    uVar10 = FUN_1003a6ce4(&local_778,alStack_6b8,200,0);
    uVar3 = DAT_101dc0b88;
    if ((int)uVar10 != 0) {
      fVar13 = 3.4028235e+38;
      uVar11 = uVar10 & 0xffffffff;
      lVar8 = 0;
      plVar7 = alStack_6b8;
      do {
        lVar12 = *plVar7;
        fVar14 = *(float *)(lVar12 + 0x250) - *(float *)(local_780 + 0x250);
        fVar15 = (*(float *)(lVar12 + 0x2ec) + *(float *)(lVar12 + 0x254)) -
                 (*(float *)(local_780 + 0x254) + *(float *)(local_780 + 0x2ec));
        fVar16 = *(float *)(lVar12 + 600) - *(float *)(local_780 + 600);
        fVar14 = fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15;
        if (fVar13 <= fVar14) {
          lVar12 = lVar8;
        }
        fVar13 = (float)NEON_fminnm(fVar14,fVar13);
        uVar11 = uVar11 - 1;
        lVar8 = lVar12;
        plVar7 = plVar7 + 1;
      } while (uVar11 != 0);
      if (lVar12 != 0) {
        FUN_1003e1570(uVar10,uVar6,lVar12,plVar5);
        goto LAB_1003e4df4;
      }
    }
    param_1[0x297] = 0;
    *(undefined4 *)(param_1 + 0x298) = uVar3;
  }
LAB_1003e4df4:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
LAB_1003e4e30:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




float FUN_1003e4e34(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x250) - *(float *)(param_2 + 0x250);
  fVar2 = (*(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254)) -
          (*(float *)(param_2 + 0x254) + *(float *)(param_2 + 0x2ec));
  fVar3 = *(float *)(param_1 + 600) - *(float *)(param_2 + 600);
  return fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
}




bool FUN_1003e4e78(long *param_1,long param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    lVar2 = 0;
  }
  else if ((int)param_1[1] == (int)plVar6[1]) {
    lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  else {
    lVar2 = 0;
    *param_1 = 0;
    *(int *)(param_1 + 1) = DAT_101dc0b88;
  }
  if ((int)param_3 < 1) {
    bVar1 = false;
  }
  else {
    uVar9 = 0;
    piVar8 = (int *)(param_2 + 8);
    bVar1 = true;
    do {
      plVar6 = *(long **)(piVar8 + -2);
      if (plVar6 == (long *)0x0) {
        lVar3 = 0;
      }
      else if (*piVar8 == (int)plVar6[1]) {
        lVar3 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        lVar3 = 0;
        piVar8[-2] = 0;
        piVar8[-1] = 0;
        *piVar8 = DAT_101dc0b88;
      }
      plVar6 = *(long **)(lVar3 + 0x2b0);
      lVar5 = 0;
      if (plVar6 != (long *)0x0) {
        if (*(int *)(lVar3 + 0x2b8) == (int)plVar6[1]) {
          lVar4 = (**(code **)(*plVar6 + 0x10))();
          lVar5 = 0;
          if (lVar4 != 0) {
            plVar6 = *(long **)(lVar3 + 0x2b0);
            lVar5 = 0;
            if (plVar6 != (long *)0x0) {
              if (*(int *)(lVar3 + 0x2b8) == (int)plVar6[1]) {
                lVar5 = (**(code **)(*plVar6 + 0x10))();
              }
              else {
                lVar5 = 0;
                *(undefined8 *)(lVar3 + 0x2b0) = 0;
                *(int *)(lVar3 + 0x2b8) = DAT_101dc0b88;
              }
            }
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f;
            if (((int)uVar7 == 0x1f) || (1 < *(ushort *)(lVar5 + uVar7 * 0x38 + 0x90) - 3)) {
              plVar6 = *(long **)(lVar3 + 0x2b0);
              lVar5 = 0;
              if (plVar6 != (long *)0x0) {
                if (*(int *)(lVar3 + 0x2b8) != (int)plVar6[1]) goto LAB_1003e4ffc;
                lVar5 = (**(code **)(*plVar6 + 0x10))();
              }
            }
            else {
              lVar5 = 0;
            }
          }
        }
        else {
LAB_1003e4ffc:
          lVar5 = 0;
          *(undefined8 *)(lVar3 + 0x2b0) = 0;
          *(int *)(lVar3 + 0x2b8) = DAT_101dc0b88;
        }
      }
      if (lVar5 == lVar2) {
        return bVar1;
      }
      uVar9 = uVar9 + 1;
      bVar1 = uVar9 < param_3;
      piVar8 = piVar8 + 0x10;
    } while (param_3 != uVar9);
  }
  return bVar1;
}




undefined8 FUN_1003e5058(char *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = -0x5250;
  do {
    iVar1 = _strcmp(*(char **)(&DAT_101d3e4f0 + lVar2),param_1);
    if (iVar1 == 0) {
      return *(undefined8 *)(&DAT_101d3e4f8 + lVar2);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0);
  return 0;
}




void FUN_1003e50b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  pcVar2 = (code *)FUN_1003e5058(param_6);
  if (pcVar2 != (code *)0x0) {
    lVar3 = FUN_1010a1540(DAT_1018672e0,0);
    FUN_1003e5254(param_1,lVar3,param_5,param_6,param_7,param_9,param_10);
    lVar1 = lVar3 + 0x168;
    uVar4 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar1,PTR_s___VAR1_FLOAT___10185d7e8);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar1,uVar4);
    *puVar5 = param_2;
    uVar4 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar1,PTR_s___VAR2_FLOAT___10185d7f0);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar1,uVar4);
    *puVar5 = param_3;
    uVar4 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar1,PTR_s___VAR1_INT___10185d7f8);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar1,uVar4);
    *puVar5 = param_11;
    uVar4 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar1,PTR_s___VAR2_INT___10185d800);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar1,uVar4);
    *puVar5 = param_12;
    FUN_1010a02e4(param_4,lVar3);
    (*pcVar2)(lVar3);
    *param_8 = lVar3;
  }
  return;
}




void FUN_1003e5254(float param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5,
                  undefined4 param_6,uint param_7)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  undefined4 local_58 [2];
  
  *(long *)(param_2 + 0x40) = param_5;
  *(undefined4 *)(param_2 + 0x308) = param_3;
  FUN_1003a4e5c(local_58,param_4);
  *(undefined4 *)(param_2 + 0x314) = local_58[0];
  *(float *)(param_2 + 0x318) = param_1;
  *(float *)(param_2 + 0x31c) = param_1;
  *(undefined4 *)(param_2 + 0x30c) = param_6;
  uVar2 = *(ushort *)(param_5 + 0x34);
  uVar3 = *(ulong *)(param_2 + 0x344);
  uVar1 = (uint)uVar2;
  if (param_7 <= uVar2) {
    uVar1 = param_7;
  }
  *(ulong *)(param_2 + 0x344) =
       uVar3 & 0xffff000000000000 |
       uVar3 & 0xffff | (ulong)uVar2 << 0x10 | (ulong)(uVar1 & 0xffff) << 0x20;
  *(uint *)(param_2 + 0x340) =
       *(uint *)(param_2 + 0x340) & 0xfffe0 | (uint)(param_1 < 0.0) << 4 |
       *(uint *)(param_2 + 0x340) & 0xfff0000f;
  return;
}




void FUN_1003e5314(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000012;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f99999a;
  return;
}




void FUN_1003e5358(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000010;
  *(undefined4 *)(lVar1 + 0x18) = 0x40200000;
  return;
}




void FUN_1003e5398(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000007;
  *(undefined4 *)(lVar1 + 0x18) = 0x42a00000;
  lVar1 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000008;
  *(undefined4 *)(lVar1 + 0x18) = 0x42a00000;
  return;
}




void FUN_1003e53f8(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000019;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f400000;
  return;
}




void FUN_1003e5438(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f400000;
  return;
}




void FUN_1003e5478(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000004;
  *(undefined4 *)(lVar1 + 0x18) = 0x42480000;
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f19999a;
  return;
}




void FUN_1003e54d8(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000004;
  *(undefined4 *)(lVar1 + 0x18) = 0x42c80000;
  return;
}




void FUN_1003e5518(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000005;
  *(undefined4 *)(lVar1 + 0x18) = 0x42c80000;
  return;
}




void FUN_1003e5558(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000b;
  *(undefined4 *)(lVar1 + 0x18) = 0x3e800000;
  return;
}




void FUN_1003e5598(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000009;
  *(undefined4 *)(lVar1 + 0x18) = 0x3e800000;
  return;
}




void FUN_1003e55d8(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000001e;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f000000;
  return;
}




void FUN_1003e5618(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000001f;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f000000;
  return;
}




void FUN_1003e5658(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000001e;
  *(undefined4 *)(lVar1 + 0x18) = 0x3eb33333;
  lVar1 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000001f;
  *(undefined4 *)(lVar1 + 0x18) = 0x3eb33333;
  return;
}




void FUN_1003e56bc(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000001;
  *(undefined4 *)(lVar1 + 0x18) = 0x42c80000;
  return;
}




void FUN_1003e56f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000019;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f000000;
  lVar1 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f000000;
  return;
}




void FUN_1003e5758(long param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = FUN_10042e498();
  FUN_10049c0a8(lVar1 + 0x10);
  FUN_100450f38(auStack_38,param_1 + 0x98);
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_1014986b8;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0xffffffffffffffff;
    (&DAT_101e48168)[lVar1] = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_38,puVar3);
  *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260)
  ;
  puVar3[10] = 0xffff;
  puVar3[0xb] = 0xffff;
  *(undefined1 *)(puVar3 + 0xc) = 1;
  return;
}




void FUN_1003e5888(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100435a7c(param_1,0x1f,"Effect_Stunned_buff","OverHead");
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043594c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Stun");
  (**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x38))();
  FUN_10049c260(lVar1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049c148(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Idle");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001003e5960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}




void FUN_1003e5964(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  FUN_100435a7c(param_1,0x1f,"Effect_Stunned_buff","OverHead");
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30[0] = FUN_100432da4(param_1);
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_1003e59f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onBeforeReApplyName_10185d588;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeReApplyName_10185d588);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004357c0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_38,param_1 + 0x78);
  FUN_100435830(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_100435830(auStack_38);
  return;
}




void FUN_1003e5a88(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onBeforeReApplyName_10185d588;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeReApplyName_10185d588);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004357c0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_38,param_1 + 0x78);
  FUN_10043200c(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_10043200c(auStack_38);
  return;
}




void FUN_1003e5b20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  if (0.0 < *(float *)(param_1 + 0x31c)) {
    FUN_100450f38(auStack_38,param_1 + 0x70);
    FUN_100432680(auStack_38);
  }
  return;
}




void FUN_1003e5b78(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043594c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Idle");
  (**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)FUN_10049c0f8(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_1004357a0);
  FUN_10049b914(lVar1);
  lVar1 = FUN_10042e2c8(param_1);
  FUN_10049b964(lVar1 + 0x10);
  return;
}




void FUN_1003e5bf4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10049c148(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,1);
  lVar3 = FUN_10049be50(lVar1);
  *(undefined1 *)(lVar3 + 0x2c) = 0x11;
  *(undefined4 *)(lVar3 + 0x30) = 6;
  lVar1 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x200;
  if (0.0 < *(float *)(param_1 + 0x31c)) {
    FUN_100450f38(auStack_38,param_1 + 0x70);
    FUN_100432680(auStack_38);
  }
  return;
}




void FUN_1003e5c80(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100433144;
  *(undefined4 *)(lVar1 + 0x18) = 4;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003e5cd0(undefined8 param_1)

{
  FUN_10042ebc4(param_1,1);
  return;
}




void FUN_1003e5cd8(void)

{
  return;
}




void FUN_1003e5cdc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_MortalWound");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xbea8f5c3;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x23,2,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xbea8f5c3;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x21,1,local_40);
  plVar2 = (long *)FUN_10049c148(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,0xe);
  lVar1 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x800;
  return;
}




void FUN_1003e5de4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_58 [24];
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100435448;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_58,param_1 + 0x98);
  lVar4 = FUN_100431ad4(auStack_58);
  *(char **)(lVar4 + 0x20) = "CenterBody";
  *(char **)(lVar4 + 0x10) = "Effect_AceBuff";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfd98 | 0x222;
  lVar4 = FUN_10043255c(auStack_58);
  lVar5 = FUN_1003e10f0();
  uVar3 = *(undefined4 *)(lVar5 + 0xe0);
  *(undefined4 *)(lVar4 + 0x10) = 1;
  *(undefined4 *)(lVar4 + 0x14) = uVar3;
  FUN_100450f38(auStack_58,param_1 + 0x70);
  FUN_1004354f8(auStack_58);
  FUN_100450f38(auStack_58,param_1 + 0x90);
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar4 = *(long *)(lVar5 + 0x40);
  fVar6 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
  fVar6 = DAT_101e94260 - *(float *)(lVar4 + 0x308);
  fVar7 = *(float *)(param_1 + 0x31c);
  lVar4 = FUN_1004355d8(fVar6,fVar7,DAT_101e94320,auStack_58);
  *(float *)(lVar4 + 0x10) = fVar6 / fVar7;
  lVar4 = *(long *)(lVar5 + 0x40);
  fVar6 = *(float *)(lVar4 + 0x40) + *(float *)(lVar4 + 0xf4) * (*(float *)(lVar4 + 0x25c) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a8),DAT_101e94328);
  fVar6 = DAT_101e94268 - *(float *)(lVar4 + 0x310);
  fVar7 = *(float *)(param_1 + 0x31c);
  lVar4 = FUN_1004356bc(fVar6,fVar7,DAT_101e94328,auStack_58);
  *(float *)(lVar4 + 0x10) = fVar6 / fVar7;
  return;
}




void FUN_1003e5f9c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100435a7c(param_1,0x10,"Effect_ItemSilence","OverHead");
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049c148(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e5fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,9);
  return;
}




void FUN_1003e5fec(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x18,"Effect_Silence","OverHead");
  return;
}




void FUN_1003e6004(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  FUN_10043599c(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  return;
}




void FUN_1003e6050(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_1003e6004();
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_100435910;
  plVar3 = (long *)FUN_10043594c(lVar1 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Idle");
                    /* WARNING: Could not recover jumptable at 0x0001003e60b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}




void FUN_1003e60bc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049c148(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,1);
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x200;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003e6114(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar2 + 0x10) = 0x100;
  FUN_10049c210(lVar1 + 0x10);
  return;
}




void FUN_1003e6148(undefined8 param_1)

{
  undefined4 local_20 [2];
  undefined4 local_18;
  
  local_20[0] = 0x3f000000;
  local_18 = 1;
  FUN_10042eb40(param_1,local_20);
  return;
}




void FUN_1003e6178(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  uVar3 = FUN_1004d2524("fearPositionX");
  uVar4 = FUN_100015208("fearPositionX",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  uVar3 = FUN_1004d2524("fearPositionZ");
  uVar4 = FUN_100015208("fearPositionZ",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100435d08;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar5 = FUN_10042e498(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_1004385a0(lVar5);
  (**(code **)(*plVar6 + 0x38))();
  FUN_10049c260(lVar5);
  FUN_10049b914(lVar5);
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar5 = FUN_100435fb4(auStack_48);
  *(code **)(lVar5 + 0x10) = FUN_100435c28;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  lVar5 = FUN_100435fb4(auStack_48);
  *(code **)(lVar5 + 0x10) = FUN_100435c28;
  FUN_100432680(auStack_48);
  lVar5 = FUN_10042e2c8(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_100441e68(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,"Bone_Head");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Feared");
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  lVar7 = FUN_10049b9b4(lVar5);
  *(undefined2 *)(lVar7 + 0x10) = 0x1e;
  plVar6 = (long *)FUN_10049c148(lVar5);
  (**(code **)(*plVar6 + 0x30))(plVar6,7);
  FUN_100450f38(auStack_48,param_1 + 0x80);
  lVar5 = FUN_100435fb4(auStack_48);
  *(code **)(lVar5 + 0x10) = FUN_100435f60;
  return;
}




void FUN_1003e6378(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_38 [24];
  
  *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436094;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e498(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar5 + 0x38))();
  FUN_10049c260(lVar4);
  FUN_10049b914(lVar4);
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,"Bone_Head");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Feared");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar6 = FUN_10049b9b4(lVar4);
  *(undefined2 *)(lVar6 + 0x10) = 0x1e;
  plVar5 = (long *)FUN_10049c148(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,7);
  FUN_100450f38(auStack_38,param_1 + 0x80);
  lVar4 = FUN_100435fb4(auStack_38);
  *(code **)(lVar4 + 0x10) = FUN_100435f60;
  return;
}




void FUN_1003e64cc(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  char *pcVar6;
  
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_10049c2b0(lVar2 + 0x10);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))();
  (**(code **)*puVar4)();
  lVar2 = FUN_100436184(param_1);
  FUN_1004385f0(lVar2 + 0x10);
  lVar2 = FUN_100433910(param_1);
  if (PTR_s_Ability__Emote_Dance_101858a00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Emote_Dance_101858a00;
    pcVar6 = PTR_s_Ability__Emote_Dance_101858a00;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar5;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | 4;
  FUN_1004385f0(lVar2 + 0x10);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_1003e658c(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_10049c2b0(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  (**(code **)(*plVar3 + 8))();
  lVar2 = FUN_10043fc08(lVar2 + 0x10);
  lVar4 = FUN_10049c300(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Emote_Taunt_VO_Cooldown_10185bdb8;
  plVar3 = (long *)FUN_10043626c(lVar2 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,"taunt");
  plVar3 = (long *)FUN_100433e34(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Emote_Taunt_VO_Cooldown_10185bdb8);
  local_40[0] = 0x41700000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  lVar2 = FUN_10042ea44(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x90))
            (plVar3,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_100436184(param_1);
  FUN_1004385f0(lVar2 + 0x10);
  lVar2 = FUN_100433910(param_1);
  if (PTR_s_Ability__Emote_Taunt_101858a08 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Emote_Taunt_101858a08;
    pcVar6 = PTR_s_Ability__Emote_Taunt_101858a08;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar5;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | 4;
  FUN_1004385f0(lVar2 + 0x10);
  return;
}




void FUN_1003e6704(void)

{
  return;
}




void FUN_1003e6708(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  FUN_100435a7c(param_1,0x51f,"Effect_Stunned_buff","OverHead");
  lVar1 = FUN_10042e2c8(param_1);
  lVar2 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar2 + 0x10) = 0x200;
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shell");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_40[0] = 0x3f99999a;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_40);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f800000,0x3f000000);
  (**(code **)(*plVar3 + 0xd8))(0x3f800000);
  lVar1 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Idle");
  (**(code **)(*plVar3 + 0x20))();
  plVar3 = (long *)FUN_10045607c(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,0xb);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Idle");
  (**(code **)(*plVar3 + 0x20))();
  return;
}




void FUN_1003e6880(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_1004519c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  local_20 = FUN_10048ba90;
  local_18 = 4;
  (**(code **)(*plVar2 + 0x10))(plVar2,6,&local_20);
  return;
}




void FUN_1003e68d8(void)

{
  return;
}




void FUN_1003e68dc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taunt");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0x3f000000);
  (**(code **)(*plVar2 + 0xd8))(0x3f800000);
  lVar3 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar3 + 0x10) = 0x601a;
  plVar2 = (long *)FUN_10049c148(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,5);
  lVar1 = FUN_10042ea44(param_1);
  plVar2 = (long *)FUN_10049c3b4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003e69f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
  if (*(float *)(param_1 + 0x31c) < 1.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x3f800000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  FUN_100450f38(auStack_38,param_1 + 0x68);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100436378(auStack_38);
  *(code **)(lVar1 + 0x18) = FUN_10043630c;
  FUN_100431f2c(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x70);
  lVar1 = FUN_10043645c(auStack_38);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100436378(auStack_38);
  *(code **)(lVar1 + 0x18) = FUN_10043630c;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_1003e6aa8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049c404(lVar1 + 0x10);
  uVar3 = FUN_100432d40(param_1);
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar3);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003e6afc(undefined8 param_1)

{
  undefined4 local_30 [2];
  undefined4 local_28;
  
  local_30[0] = FUN_100432da4();
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003e6b3c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100433144;
  local_18 = 4;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_1003e6b78(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100433144;
  local_18 = 4;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_1003e6bb4(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  *(undefined4 *)(param_1 + 0x318) = 0x3e4ccccd;
  if (*(float *)(param_1 + 0x31c) < 0.2) {
    *(undefined4 *)(param_1 + 0x31c) = 0x3e4ccccd;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  FUN_100450f38(auStack_28,param_1 + 0x68);
  lVar1 = FUN_100436540(auStack_28);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(char **)(lVar1 + 0x10) = "Effect_Cleanse";
  *(undefined4 *)(lVar1 + 0x58) = 0x3f800000;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x2a;
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_100436680(auStack_28);
  *(undefined4 *)(lVar1 + 0x18) = 2;
  FUN_100431f2c(auStack_28);
  return;
}




void FUN_1003e6c68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar1 = FUN_100436780(auStack_38);
  *(undefined4 *)(lVar1 + 0x10) = 5;
  FUN_100450f38(auStack_38,param_1 + 0x98);
  FUN_10043599c(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  return;
}




void FUN_1003e6cd0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Shell");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40[0] = 0x3f99999a;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0x3f000000);
  (**(code **)(*plVar2 + 0xd8))(0x3f800000);
  FUN_10049b964(lVar1);
  lVar3 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar3 + 0x10) = 0x500;
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Invulnerable_10185a588);
  lVar1 = FUN_10049be50(lVar1);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Idle");
  (**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)FUN_10045607c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,0xb);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Idle");
  (**(code **)(*plVar2 + 0x20))();
  return;
}




void FUN_1003e6e48(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Generic_WarningRing");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40[0] = FUN_100432da4(param_1);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f000000,0x3f000000);
  (**(code **)(*plVar2 + 0xd8))(0x3f4ccccd);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049c454;
  FUN_10044c418(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_1003e6f34(void)

{
  return;
}




void FUN_1003e6f38(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c460(lVar1 + 0x10);
  return;
}




void FUN_1003e6f50(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e6f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,2);
  return;
}




void FUN_1003e6f98(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = FUN_10042e3b0();
  FUN_10049b814(lVar3 + 0x10);
  lVar3 = FUN_10042e2c8(param_1);
  plVar4 = (long *)FUN_10049bf9c(lVar3 + 0x10);
  uVar2 = FUN_100451a18(param_1);
  uVar1 = 0;
  if (uVar2 != 0xff) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e6ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar1 & 0xff,3);
  return;
}




void FUN_1003e7000(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = FUN_10042e3b0();
  FUN_10049b814(lVar3 + 0x10);
  lVar3 = FUN_10042e2c8(param_1);
  plVar4 = (long *)FUN_10049bf9c(lVar3 + 0x10);
  uVar2 = FUN_100451a18(param_1);
  uVar1 = 0;
  if (uVar2 != 0xff) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar1 & 0xff,7);
  return;
}




void FUN_1003e7068(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  
  lVar2 = FUN_10042e3b0();
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_10049bf9c(lVar2 + 0x10);
  uVar1 = FUN_100451a18(param_1);
  uVar4 = 0xffffffff;
  if (uVar1 != 0xff) {
    uVar4 = ~(1 << (ulong)(uVar1 & 0x1f));
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar4 & 0xff,3);
  return;
}




void FUN_1003e70d4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e7118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,2);
  return;
}




void FUN_1003e711c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e7160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,3);
  return;
}




void FUN_1003e7164(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e71a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,7);
  return;
}




void FUN_1003e71ac(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,7);
  return;
}




void FUN_1003e71f4(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(char **)(lVar1 + 0x10) = "Effect_Vision";
  *(char **)(lVar1 + 0x18) = "Effect_Vision_Ally";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfe98 | 0x121;
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  return;
}




void FUN_1003e7250(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c500(lVar1 + 0x10);
  return;
}




void FUN_1003e7268(long param_1)

{
  ushort *puVar1;
  ulong uVar2;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar1;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar2 * 0x98) = 0;
    *(undefined ***)puVar1 = &PTR_FUN_10149be58;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_28,puVar1);
  return;
}




void FUN_1003e7350(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x68);
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar1 = FUN_100436780(auStack_38);
    *(undefined4 *)(lVar1 + 0x10) = 4;
  }
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000011;
  *(undefined4 *)(lVar1 + 0x18) = 0xbf800000;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  return;
}




void FUN_1003e73e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar1 = FUN_1004368b4(auStack_38);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  FUN_100450f38(auStack_38,param_1 + 0x80);
  lVar1 = FUN_1004368b4(auStack_38);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return;
}




void FUN_1003e743c(undefined8 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_100432d40();
  FUN_100435a7c(param_1,uVar1,0,0);
  return;
}




void FUN_1003e746c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436864;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003e74d4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436998;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003e753c(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x500,"Effect_MortalWound","OverHead");
  return;
}




void FUN_1003e7554(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_1004337f4(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x447a000000000005;
  return;
}




void FUN_1003e758c(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c460(lVar1 + 0x10);
  FUN_10049c4b0(lVar1 + 0x10);
  return;
}




void FUN_1003e75b8(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,7);
  local_20[0] = 0;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_20);
  return;
}




void FUN_1003e761c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0x42c80000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x11,1,local_20);
  return;
}




void FUN_1003e7668(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0xbf7d70a4;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,2,local_20);
  return;
}




void FUN_1003e76b8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40[0] = 0x40400000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar3 + 8) = FUN_1004369b8;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_DelayedDestroy_10185bd78);
  local_40[0] = 0x40400000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_1003e77a4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  iVar1 = _rand();
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,(&PTR_s_Effect_AceBuff_101498060)[iVar1 % 0xb]);
  plVar3 = (long *)FUN_100430a84(lVar2 + 0x10);
  local_50[0] = 0x40400000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,local_50);
  lVar2 = FUN_10042e580(param_1);
  fVar4 = (float)FUN_100432da4(param_1);
  fVar5 = (float)FUN_100432e08(param_1);
  iVar1 = _rand();
  *(float *)(lVar2 + 0x40) = fVar4 + (float)iVar1 * (fVar5 - fVar4) * 4.656613e-10;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  plVar3 = (long *)FUN_10043fc58(lVar2 + 0x10);
  local_50[0] = 0x42c80000;
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,local_50);
  (**(code **)(*plVar3 + 0x40))(plVar3,0x1001);
  plVar3 = (long *)FUN_100432a84(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  (**(code **)(*plVar3 + 0x30))(plVar3,0xd9);
  return;
}




void FUN_1003e7918(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c210(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined1 *)(lVar1 + 0x58) = 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_40);
  FUN_10044c418(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 0x40000000;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
  local_40[0] = 0x42480000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x38))(plVar2,8);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40[0] = 0x47c34f80;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40,2,1);
  return;
}




void FUN_1003e7a78(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c210(lVar1 + 0x10);
  return;
}




void FUN_1003e7a90(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x1e;
  return;
}




void FUN_1003e7ab4(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x80);
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_100436540(auStack_28);
  *(char **)(lVar1 + 0x10) = "Effect_PetalMinion_Explosion";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff18 | 0xa1;
  FUN_100435830(auStack_28);
  return;
}




void FUN_1003e7b14(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x68);
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_100436540(auStack_28);
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar1 + 0x10) = "Effect_PetalMinion_Explosion";
  lVar1 = FUN_1004369e4(auStack_28);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Emote_Dance_101858a00;
  return;
}




void FUN_1003e7b80(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar1 + 0x10) = "Effect_Tut_Compass_Arrow";
  return;
}




void FUN_1003e7bd0(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar1 + 0x10) = "Effect_Tut_Compass_Arrow_2";
  return;
}




void FUN_1003e7c20(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044d430;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003e7c88(void)

{
  return;
}




void FUN_1003e7c8c(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x11e;
  return;
}




void FUN_1003e7cb0(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049b964(lVar1 + 0x10);
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x84;
  return;
}




void FUN_1003e7ce8(undefined8 param_1)

{
  FUN_100435a7c(param_1,1,0,0);
  return;
}




void FUN_1003e7cf8(undefined8 param_1)

{
  FUN_100435a7c(param_1,4,0,0);
  return;
}




void FUN_1003e7d08(undefined8 param_1)

{
  FUN_100435a7c(param_1,8,0,0);
  return;
}




void FUN_1003e7d18(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,7);
  local_30[0] = 0;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x447a0000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,3,0,local_30);
  return;
}




void FUN_1003e7dbc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_10044d494;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined1 *)(lVar1 + 0x58) = 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_10044d4ec;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10044d544;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_30);
  return;
}




void FUN_1003e7eb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar1 = FUN_10043101c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x430c000000000000;
  *(undefined1 *)(lVar1 + 0x20) = 1;
  lVar1 = FUN_100430f18(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0x430c0000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_100430f18(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x11;
  *(undefined4 *)(lVar1 + 0x20) = 0x41900000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_100430f18(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x14;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  return;
}




void FUN_1003e7f50(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044d67c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003e7fc4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044d76c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar4 = FUN_10043101c(auStack_38);
  *(undefined8 *)(lVar4 + 0x10) = 0x4348000000000000;
  *(undefined1 *)(lVar4 + 0x20) = 0;
  lVar4 = FUN_100430f18(auStack_38);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined4 *)(lVar4 + 0x20) = 0x43480000;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_100433e34(lVar4 + 0x10);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_GloballyVisible_10185a1f0);
  return;
}




void FUN_1003e809c(long param_1)

{
  long lVar1;
  ushort *puVar2;
  ulong uVar3;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x68);
  uVar3 = (ulong)DAT_101e94150;
  if (uVar3 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar3 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar3 * 0x98;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_101498748;
    (&DAT_101e48160)[lVar1] = 1;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_28,puVar2);
  return;
}




void FUN_1003e818c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  
  FUN_100450f38(local_38,param_1 + 0x68);
  lVar1 = FUN_100430f18(local_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x11;
  *(undefined4 *)(lVar1 + 0x20) = 0x42c80000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_100430f18(local_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000019;
  *(undefined4 *)(lVar1 + 0x20) = 0x40400000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_GloballyVisible_10185a1f0);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_1004519c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  local_38[0] = 0x40a00000;
  local_30 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,2,local_38);
  return;
}




void FUN_1003e8274(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_SmokeBomb");
  (**(code **)(*plVar2 + 0x80))(plVar2,0);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/Taka/SFX/Default/Taka_Basic_Abilty2_Start.mp3")
  ;
  (**(code **)(*plVar2 + 0x28))(0x3e99999a);
  lVar1 = FUN_10042e2c8(param_1);
  FUN_10049c460(lVar1 + 0x10);
  return;
}




void FUN_1003e830c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x0001003e8340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero000_TargetLock_A");
  return;
}




void FUN_1003e8344(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x200;
  return;
}




void FUN_1003e8368(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_38[0] = 0x44160000;
  local_30 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x1a,1,local_38);
  FUN_100450f38(local_38,param_1 + 0x98);
  lVar1 = FUN_100436e1c(local_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000019;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f400000;
  lVar1 = FUN_100436e1c(local_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000003;
  *(undefined4 *)(lVar1 + 0x18) = 0x41200000;
  return;
}




void FUN_1003e8404(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044d8f0;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar4 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar4 + 0x10) = 0x10000000d;
  *(undefined4 *)(lVar4 + 0x18) = 0xbf000000;
  lVar4 = FUN_100436e1c(auStack_38);
  *(undefined8 *)(lVar4 + 0x10) = 0x10000000e;
  *(undefined4 *)(lVar4 + 0x18) = 0xbf000000;
  return;
}




void FUN_1003e84c0(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0xc4fa0000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,0,local_20);
  return;
}




void FUN_1003e850c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x466a6000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x15,0,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xbf28f5c3;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,2,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xc2c80000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,7,0,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xc2c80000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,8,0,local_40);
  return;
}




void FUN_1003e85f4(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0xbf4ccccd;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,2,local_20);
  return;
}




void FUN_1003e8644(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xbf28f5c3;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,2,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xc2c80000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,7,0,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xc2c80000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,8,0,local_40);
  return;
}




void FUN_1003e86fc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044d58c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar4 = FUN_100430f18(auStack_38);
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined4 *)(lVar4 + 0x20) = 0x41200000;
  *(undefined2 *)(lVar4 + 0x24) = 1;
  return;
}




void FUN_1003e87a8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e87ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,7);
  return;
}




void FUN_1003e87f0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100434180();
  if (PTR_s_Buff_Catherine_MercilessPursuit__10185a540 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Buff_Catherine_MercilessPursuit__10185a540;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Buff_Catherine_MercilessPursuit__10185a540;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  plVar2 = (long *)FUN_10045562c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_40[0] = 0x40400000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10044d964);
  lVar1 = FUN_100434180(param_1);
  if (PTR_s_Buff_Catherine_MercilessPursuit__10185a548 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Buff_Catherine_MercilessPursuit__10185a548;
    pcVar5 = PTR_s_Buff_Catherine_MercilessPursuit__10185a548;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  plVar2 = (long *)FUN_10045562c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_40[0] = 0x40400000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10044d964);
  return;
}




void FUN_1003e8948(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined1 *)(lVar1 + 0x58) = 8;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20[0] = 0x3f000000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_20);
  return;
}




void FUN_1003e89b0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_1004340c4;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined1 *)(lVar1 + 0x58) = 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_10043410c;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_100434154;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_30);
  return;
}




void FUN_1003e8aac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = FUN_10049ba54(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x10) = 3;
  lVar1 = FUN_10042e2c8(param_1);
  lVar2 = FUN_10049baa4(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x200;
  lVar1 = FUN_10042ea44(param_1);
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_SpawnStage_MatchStart_Speed_10185c110);
  local_30[0] = 0x41a00000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003e8b60(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x3eb33333;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,3,2,local_30);
  lVar1 = FUN_100430b44(param_1);
  plVar2 = (long *)FUN_10049baf4(lVar1 + 0x10);
  local_30[0] = 0x43c80000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,0x15,local_30);
  return;
}




void FUN_1003e8bec(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  uVar3 = FUN_1004d2524("timeOfLastDamageExchange");
  uVar4 = FUN_100015208("timeOfLastDamageExchange",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  uVar3 = FUN_1004d2524("timeOfLastDamageExchange");
  uVar4 = FUN_100015208("timeOfLastDamageExchange",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
  *puVar5 = 0;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100430c2c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100430da0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003e8d18(long param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000015;
  *(undefined4 *)(lVar1 + 0x20) = 0x3f800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000014;
  *(undefined4 *)(lVar1 + 0x20) = 0x3f800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  fVar2 = DAT_101e94300 * 0.1;
  lVar1 = FUN_100430f18(DAT_101e94300,0x3dcccccd,DAT_101e943c0,0x3f800000,auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000012;
  *(float *)(lVar1 + 0x20) = fVar2;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_10042e498(param_1);
  lVar1 = FUN_10049ba54(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x10) = 3;
  return;
}




void FUN_1003e8e10(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x68);
  lVar1 = FUN_10043101c(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0xc448000000000000;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  lVar1 = FUN_100430f18(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0xc4480000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_28);
  *(undefined8 *)(lVar1 + 0x10) = 0x14;
  *(undefined4 *)(lVar1 + 0x20) = 0x42a00000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  return;
}




void FUN_1003e8e84(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0x3f000000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,2,local_20);
  return;
}




void FUN_1003e8ed0(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0xc47a0000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0,1,local_20);
  return;
}




void FUN_1003e8f1c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Red_Buff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40[0] = 0x3ecccccd;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  (**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0);
  lVar1 = FUN_10042ea44(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_weapon_buff_picked_up.mp3");
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x42c80000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,1,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x42c80000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,1,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x12,1,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x3eb33333;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x22,1,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x24,1,local_40);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0xbf800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x23,2,local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 1;
  lVar3 = FUN_10049bb44(lVar1 + 0x10);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_ARAM_AscendedPower_10185bfb8);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_weapon_buff_dropped_on_ground.mp3")
  ;
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  return;
}




void FUN_1003e91d0(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0x3f800000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x15,2,local_20);
  return;
}




void FUN_1003e921c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40[0] = 0x3ea8f5c3;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40[0] = 0x3ea8f5c3;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_40);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x3ecccccd;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_1003e92fc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3e800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_30);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x40000000;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_1003e93d0(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x41a00000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,1,1,local_30);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x3e800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,3,2,local_30);
  return;
}




void FUN_1003e9454(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x3f800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x12,1,local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_1003e94c8(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_40 [2];
  undefined4 local_38;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar4 = DAT_101e94260 * 0.125;
  fVar3 = *(float *)(lVar2 + 0x40) + *(float *)(lVar2 + 0xf4) * (*(float *)(lVar2 + 0x25c) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a8),DAT_101e94328);
  fVar3 = DAT_101e94268 * 0.125;
  lVar2 = FUN_10042e2c8();
  lVar2 = lVar2 + 0x10;
  plVar1 = (long *)FUN_100430a84(lVar2);
  local_38 = 1;
  local_40[0] = fVar4;
  (**(code **)(*plVar1 + 0x30))(plVar1,1,1,local_40);
  plVar1 = (long *)FUN_100430a84(lVar2);
  local_38 = 1;
  local_40[0] = fVar3;
  (**(code **)(*plVar1 + 0x30))(plVar1,3,1,local_40);
  plVar1 = (long *)FUN_100441e68(lVar2);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x60))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x48))(plVar1,"Effect_JungleHeal_buff");
  plVar1 = (long *)(**(code **)(*plVar1 + 0x78))(plVar1,1);
  (**(code **)(*plVar1 + 0xb0))(plVar1,1);
  return;
}




void FUN_1003e9618(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(code **)(param_1 + 0x330) = FUN_100433a34;
  lVar1 = FUN_100430b44();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_10185bfe8);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_SpawnSpeedBoos_10185bfe0);
  lVar3 = FUN_10049bea0(lVar1);
  *(code **)(lVar3 + 0x10) = FUN_100433b3c;
  plVar2 = (long *)FUN_100434b18(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_HealthDecayCon_10185c020);
  lVar1 = FUN_100432f48(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_SpawnSpeedBoos_10185bfe0);
  lVar1 = FUN_100433910(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Blitz_Revamp_RegenCooldown_10185c010);
  local_40[0] = 0x40800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Blitz_Revamp_RegenCooldown_10185c010);
  local_40[0] = 0x40800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Blitz_Revamp_RegenCooldown_10185c010);
  local_40[0] = 0x40800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_1003e97cc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,2);
  local_30[0] = 0xbda3d70a;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_30);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049bf90;
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_1003e984c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,2);
  local_30[0] = 0xbd23d70a;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_30);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049bf90;
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_1003e98cc(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined1 auStack_58 [24];
  
  FUN_100450f38(auStack_58,param_1 + 0x68);
  lVar1 = FUN_100430f18(auStack_58);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000015;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_58);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000014;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,2);
  local_68[0] = 0xbc23d70a;
  local_60 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_68);
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,4);
  local_68[0] = 0xbcf5c28f;
  local_60 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_68);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_68[0] = 0xbeae147b;
  local_60 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,7,2,local_68);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_68[0] = 0xbeae147b;
  local_60 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,8,2,local_68);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5a) = 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_HitEnemyHero_10185bff8);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5a) = 2;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_HitEnemyHero_10185bff8);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Blitz_Revamp_HeroEngage_10185c018);
  local_68[0] = 0x42700000;
  local_60 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_68);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_10185bfe8);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5a) = 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_EnemyHeroHitMe_10185c000);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5a) = 2;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_EnemyHeroHitMe_10185c000);
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 8;
  *(undefined **)(lVar1 + 0x38) = PTR_s_Buff_Blitz_Revamp_HeroEngage_10185c018;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  plVar2 = (long *)FUN_1004519c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  local_68[0] = 0x443b8000;
  local_60 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,6,local_68);
  return;
}




void FUN_1003e9c54(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_10185bfe8);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003e9cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_10185bfe8);
  return;
}




void FUN_1003e9cbc(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003e9cd4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_100433b70();
  *(code **)(lVar1 + 0x40) = FUN_100433c84;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bea0(lVar1);
  *(code **)(lVar2 + 0x10) = FUN_100433c90;
  plVar3 = (long *)FUN_100434b18(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_GloballyVisible_10185c070);
  plVar3 = (long *)FUN_100434b18(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003e9d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_HealthDecay_10185c028);
  return;
}




void FUN_1003e9d48(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_RegenControl_10185bff0);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_RegenCooldown_10185c010);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_10185bfe8);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_50[0] = 0xbf800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x23,2,local_50);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_50[0] = 0xbf800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,1,2,local_50);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_50[0] = 0xbf800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x17,2,local_50);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_50[0] = 0xbf800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x18,2,local_50);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_50[0] = 0xbf800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x20,2,local_50);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_50[0] = 0xbf800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x21,1,local_50);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x12,1,local_50);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))();
  local_50[0] = 0x3d23d70a;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_50,2,3);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_10185bfe8);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_Lifespring_10185c340);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_UnifiedVamp_Control_10185c478);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_BookOfEulogies_Control_10185c458);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_SerpentMask_Control_10185c370);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_EveOfHarvest_Control_10185c380);
  return;
}




void FUN_1003ea02c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x1280;
  *(code **)(param_1 + 0x338) = FUN_100433cd0;
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_58 = FUN_100433da4;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x20;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 2;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_58 = FUN_100433d60;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x40;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 2;
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Blitz_SentryDefense_Cooldow_10185c038;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_100433de4(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Blitz_SentryDefense_10185c030);
  local_58 = (code *)CONCAT44(local_58._4_4_,0xffffffff);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Blitz_SentryDefense_Cooldow_10185c038);
  local_58 = FUN_100433e84;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar2 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_100433de4(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Blitz_SentryDefense_10185c030);
  local_58 = FUN_100433d3c;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
  FUN_100450f38(&local_58,param_1 + 0x98);
  lVar2 = FUN_100433e90(&local_58);
  *(code **)(lVar2 + 0x18) = FUN_100433cfc;
  return;
}




void FUN_1003ea238(void)

{
  return;
}




void FUN_1003ea23c(long param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000015;
  *(undefined4 *)(lVar1 + 0x20) = 0x3f400000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000014;
  *(undefined4 *)(lVar1 + 0x20) = 0x3f400000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  fVar2 = DAT_101e94300 * 0.1;
  lVar1 = FUN_100430f18(DAT_101e94300,0x3dcccccd,DAT_101e943c0,0x3f800000,auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000012;
  *(float *)(lVar1 + 0x20) = fVar2;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  return;
}




void FUN_1003ea31c(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  lVar8 = param_1 + 0x168;
  uVar4 = FUN_1004d2524("revealed");
  uVar5 = FUN_100015208("revealed",uVar4,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar5);
  uVar4 = FUN_1004d2524("revealed");
  uVar5 = FUN_100015208("revealed",uVar4,0x12345678);
  puVar6 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar5);
  *puVar6 = 0;
  uVar4 = FUN_1004d2524("buffLifeTime");
  uVar5 = FUN_100015208("buffLifeTime",uVar4,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar5);
  uVar4 = FUN_1004d2524("buffLifeTime");
  uVar5 = FUN_100015208("buffLifeTime",uVar4,0x12345678);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar5);
  *puVar7 = 0;
  FUN_100450f38(auStack_58,param_1 + 0x68);
  iVar2 = DAT_101d2d0a0;
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x270);
  lVar8 = FUN_100430f18(auStack_58);
  bVar3 = iVar1 == iVar2;
  *(undefined8 *)(lVar8 + 0x10) = 0x200000015;
  uVar4 = 0xbf800000;
  if (!bVar3) {
    uVar4 = 0x3fe00000;
  }
  *(undefined4 *)(lVar8 + 0x20) = uVar4;
  *(bool *)(lVar8 + 0x24) = bVar3;
  *(undefined1 *)(lVar8 + 0x25) = 0;
  lVar8 = FUN_100430f18(auStack_58);
  *(undefined8 *)(lVar8 + 0x10) = 0x200000014;
  *(undefined4 *)(lVar8 + 0x20) = uVar4;
  *(bool *)(lVar8 + 0x24) = bVar3;
  *(undefined1 *)(lVar8 + 0x25) = 0;
  return;
}




void FUN_1003ea4a4(void)

{
  return;
}




void FUN_1003ea4a8(long param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000015;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000014;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000007;
  *(undefined4 *)(lVar1 + 0x20) = 0x432f0000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000008;
  *(undefined4 *)(lVar1 + 0x20) = 0x432f0000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  fVar2 = DAT_101e94300 * 0.1;
  lVar1 = FUN_100430f18(DAT_101e94300,0x3dcccccd,DAT_101e943c0,0x3f800000,auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000012;
  *(float *)(lVar1 + 0x20) = fVar2;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  return;
}




void FUN_1003ea5c4(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  
  lVar5 = param_1 + 0x168;
  uVar1 = FUN_1004d2524("revealed");
  uVar2 = FUN_100015208("revealed",uVar1,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar5,uVar2);
  uVar1 = FUN_1004d2524("revealed");
  uVar2 = FUN_100015208("revealed",uVar1,0x12345678);
  puVar3 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar5,uVar2);
  *puVar3 = 0;
  uVar1 = FUN_1004d2524("buffLifeTime");
  uVar2 = FUN_100015208("buffLifeTime",uVar1,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar5,uVar2);
  uVar1 = FUN_1004d2524("buffLifeTime");
  uVar2 = FUN_100015208("buffLifeTime",uVar1,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar5,uVar2);
  *puVar4 = 0;
  lVar5 = FUN_10042e498(param_1);
  plVar6 = (long *)FUN_1004385a0(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Blitz_SentryDefense_10185c030);
  plVar6 = (long *)FUN_1004385a0(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_JungleMinion_Perk_NWScaling_10185c1a8);
  FUN_100450f38(local_48,param_1 + 0x68);
  lVar5 = FUN_100430f18(local_48);
  *(undefined8 *)(lVar5 + 0x10) = 0x200000015;
  *(undefined4 *)(lVar5 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar5 + 0x24) = 1;
  lVar5 = FUN_100430f18(local_48);
  *(undefined8 *)(lVar5 + 0x10) = 0x200000014;
  *(undefined4 *)(lVar5 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar5 + 0x24) = 1;
  lVar5 = FUN_10042e694(param_1);
  *(ushort *)(lVar5 + 0x48) = *(ushort *)(lVar5 + 0x48) | 0x10;
  *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) & 0xfc | 2;
  plVar6 = (long *)FUN_10043187c(lVar5 + 0x10);
  local_48[0] = 0x3f400000;
  local_40 = 1;
  (**(code **)(*plVar6 + 0x30))(plVar6,local_48);
  return;
}




void FUN_1003ea7a8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  
  FUN_100450f38(local_48,param_1 + 0x68);
  lVar1 = FUN_100430f18(local_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000015;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_100430f18(local_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000014;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_48);
  return;
}




void FUN_1003ea868(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ea8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,3);
  return;
}




void FUN_1003ea8b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100433f80;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003ea928(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    FUN_100450f38(auStack_28,param_1 + 0x68);
    lVar1 = FUN_100430f18(auStack_28);
    *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
    *(undefined4 *)(lVar1 + 0x20) = 0xbeb33333;
    *(undefined2 *)(lVar1 + 0x24) = 1;
  }
  return;
}




void FUN_1003ea984(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100433fe4;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003ea9fc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100434060;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003eaa74(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  if (*(char *)(DAT_101d23a68 + 0x3b) != '\0') {
    FUN_100450f38(auStack_28,param_1 + 0x68);
    lVar1 = FUN_100430f18(auStack_28);
    *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
    *(undefined4 *)(lVar1 + 0x20) = 0xbe75c28f;
    *(undefined2 *)(lVar1 + 0x24) = 1;
  }
  return;
}




void FUN_1003eaad0(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0xc0800000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x11,1,local_20);
  return;
}




void FUN_1003eab1c(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Item__VisionTotem_101858eb8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Item__VisionTotem_101858eb8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Item__VisionTotem_101858eb8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(undefined4 *)(lVar2 + 0x10) = 0xc1200000;
  *(undefined4 *)(lVar2 + 0x18) = 1;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Item__VisionTotem_101858eb8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Item__VisionTotem_101858eb8;
    pcVar5 = PTR_s_Ability__Item__VisionTotem_101858eb8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_1003eac08(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_GameObjectives_River5v5Bonu_10185c0c0);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003eac50(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_GameObjectives_River5v5Aura_10185c0b0);
  local_20[0] = 0x40a00000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_20);
  return;
}




void FUN_1003eacc4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_100432da4();
  *(code **)(param_1 + 0x330) = FUN_100438558;
  lVar1 = FUN_10042e2c8(param_1);
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined8 *)(lVar2 + 0x58) = 0x300000001;
  *(code **)(lVar2 + 0x10) = FUN_100438428;
  *(undefined4 *)(lVar2 + 0x18) = 4;
  *(undefined4 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(lVar2 + 0x44) = uVar3;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_1004384c0;
  *(undefined4 *)(lVar1 + 0x18) = 4;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003ead6c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_VainCrystal_Node_DeadGlow");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_100431764(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_VainCrystal_Node_Timer");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x0001003eae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1003eae54(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined1 auStack_58 [24];
  
  iVar1 = FUN_100432d40();
  FUN_100450f38(auStack_58,param_1 + 0x68);
  lVar2 = FUN_100430f18(auStack_58);
  *(undefined8 *)(lVar2 + 0x10) = 0x200000000;
  *(undefined4 *)(lVar2 + 0x20) = 0x3fc00000;
  *(undefined2 *)(lVar2 + 0x24) = 0;
  lVar2 = FUN_100430f18(auStack_58);
  *(undefined8 *)(lVar2 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar2 + 0x20) = 0x40400000;
  *(undefined2 *)(lVar2 + 0x24) = 0;
  lVar2 = FUN_100430f18(auStack_58);
  fVar3 = (float)iVar1 + (float)iVar1;
  *(undefined8 *)(lVar2 + 0x10) = 0x200000000;
  *(float *)(lVar2 + 0x20) = fVar3;
  *(undefined2 *)(lVar2 + 0x24) = 0;
  lVar2 = FUN_100430f18(auStack_58);
  *(undefined8 *)(lVar2 + 0x10) = 0x200000004;
  *(float *)(lVar2 + 0x20) = fVar3;
  *(undefined2 *)(lVar2 + 0x24) = 0;
  return;
}




void FUN_1003eaf0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  *(float *)(param_1 + 800) = *(float *)(param_1 + 800) + *(float *)(param_1 + 0x328);
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x100;
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar1 = FUN_1004355d8(auStack_38);
  *(code **)(lVar1 + 0x18) = FUN_100436ae4;
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_AdagioFortunesSmile_buff";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfe90 | 0x129;
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_1004354f8(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x90);
  lVar1 = FUN_1004355d8(auStack_38);
  *(code **)(lVar1 + 0x18) = FUN_100436b30;
  return;
}




void FUN_1003eafdc(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(char **)(lVar1 + 0x10) = "Effect_Horde_Ring_Green";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x29;
  return;
}




void FUN_1003eb02c(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(char **)(lVar1 + 0x10) = "Effect_Horde_Ring_Blue";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x29;
  return;
}




void FUN_1003eb07c(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(char **)(lVar1 + 0x10) = "Effect_Horde_Ring_Purple";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x29;
  return;
}




void FUN_1003eb0cc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  code *local_58;
  undefined4 local_50;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044c17c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onBeforeReApplyName_10185d588;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeReApplyName_10185d588);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044c2b0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  *(undefined4 *)(param_1 + 0x328) = 0x3e99999a;
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3e99999a;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  lVar4 = lVar4 + 0x10;
  FUN_1004386bc(lVar4);
  plVar5 = (long *)FUN_10043aa54(lVar4);
  local_58 = FUN_10044c3ac;
  local_50 = 5;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x20))();
  plVar5 = (long *)FUN_100433e34(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_SpawnStage_MidMatch_SpeedBo_10185c108);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40a00000);
  local_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  FUN_100450f38(&local_58,param_1 + 0x90);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar6 = *(float *)(lVar4 + 0x40) + *(float *)(lVar4 + 0xf4) * (*(float *)(lVar4 + 0x25c) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a8),DAT_101e94328);
  fVar6 = DAT_101e94268 * 0.0375;
  lVar4 = FUN_1004356bc(DAT_101e94268,0x3d19999a,DAT_101e94328,0x3f800000,&local_58);
  *(float *)(lVar4 + 0x10) = fVar6;
  return;
}




void FUN_1003eb2ac(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_DeathRay");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049bc4c(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 0xc) = 0x100000;
  FUN_10044c418(lVar1 + 0x88);
  FUN_1004386bc(lVar1 + 0xa0);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))();
  local_30[0] = 0x3ecccccd;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30,2,2);
  return;
}




void FUN_1003eb3c0(long param_1)

{
  long lVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  
  local_38[0] = 0x40200000;
  local_30 = 1;
  FUN_10043050c(0,0x3f800000,param_1,local_38);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  FUN_1004385f0(lVar1 + 0x10);
  FUN_100450f38(local_38,param_1 + 0x70);
  FUN_100432680(local_38);
  return;
}




void FUN_1003eb444(undefined8 param_1)

{
  undefined4 local_20 [2];
  undefined4 local_18;
  
  local_20[0] = 0x40800000;
  local_18 = 1;
  FUN_10043050c(0,0x3f800000,param_1,local_20);
  return;
}




void FUN_1003eb47c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  if (*(char *)(DAT_101d23a68 + 0x47) != '\0') {
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044c468;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    lVar4 = FUN_10042e2c8(param_1);
    FUN_10049b964(lVar4 + 0x10);
    lVar4 = FUN_10049b9b4(lVar4 + 0x10);
    *(undefined2 *)(lVar4 + 0x10) = 0x80;
    FUN_100450f38(auStack_38,param_1 + 0x70);
    lVar4 = FUN_10043645c(auStack_38);
    *(undefined1 *)(lVar4 + 0x10) = 1;
    FUN_100450f38(auStack_38,param_1 + 0x80);
    FUN_100431d2c(auStack_38);
    lVar4 = FUN_100436540(auStack_38);
    *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xff98 | 0x21;
    *(char **)(lVar4 + 0x10) = "Effect_MatchStart_ShoppinDelay_Finish";
    FUN_100431f2c(auStack_38);
  }
  return;
}




void FUN_1003eb590(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  code *local_58;
  undefined4 local_50;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044c17c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onBeforeReApplyName_10185d588;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeReApplyName_10185d588);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044c2b0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  *(undefined4 *)(param_1 + 0x328) = 0x3e99999a;
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3e99999a;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  FUN_1004386bc(lVar4 + 0x10);
  plVar5 = (long *)FUN_10043aa54(lVar4 + 0x10);
  local_58 = FUN_10044c3ac;
  local_50 = 5;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x20))();
  lVar4 = FUN_10042ea44(param_1);
  plVar5 = (long *)FUN_100433e34(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_SpawnStage_MatchStart_Speed_10185c110);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x41a00000);
  local_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  FUN_100450f38(&local_58,param_1 + 0x90);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar6 = *(float *)(lVar4 + 0x40) + *(float *)(lVar4 + 0xf4) * (*(float *)(lVar4 + 0x25c) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a8),DAT_101e94328);
  fVar6 = DAT_101e94268 * 0.054000005;
  lVar4 = FUN_1004356bc(DAT_101e94268,0x3d5d2f1c,DAT_101e94328,0x3f800000,&local_58);
  *(float *)(lVar4 + 0x10) = fVar6;
  return;
}




void FUN_1003eb778(void)

{
  return;
}




void FUN_1003eb77c(long param_1)

{
  undefined8 uVar1;
  
  if (DAT_101d23a38 == '\0') {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = FUN_1003b1948(DAT_101d90978,
                          *(undefined8 *)
                           (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x38) + 0x298));
  }
  FUN_100449194(param_1,uVar1);
  return;
}




void FUN_1003eb7d0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_101d90978;
  if (DAT_101d23a38 == '\0') {
    uVar2 = 0xffff;
  }
  else {
    lVar1 = FUN_1003e10f0();
    uVar2 = FUN_1003b1948(uVar2,*(undefined8 *)(lVar1 + 0x128));
  }
  FUN_100449194(param_1,uVar2);
  return;
}




void FUN_1003eb820(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_101d90978;
  if (DAT_101d23a38 == '\0') {
    uVar2 = 0xffff;
  }
  else {
    lVar1 = FUN_1003e10f0();
    uVar2 = FUN_1003b1948(uVar2,*(undefined8 *)(lVar1 + 0x128));
  }
  FUN_100449238(param_1,uVar2);
  return;
}




void FUN_1003eb870(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  uint *puVar10;
  undefined1 auStack_48 [24];
  
  lVar5 = FUN_10042e498();
  plVar6 = (long *)FUN_100433e34(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Shop_CanShopIcon_10185c128);
  lVar5 = FUN_10042fdc4(param_1);
  plVar6 = (long *)FUN_1004385a0(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Shop_CanShopIcon_10185c128);
  iVar3 = FUN_100432d40(param_1);
  uVar7 = DAT_101d90978;
  if (iVar3 == 0) {
    lVar5 = FUN_1003e10f0();
    uVar4 = FUN_1003b1948(uVar7,*(undefined8 *)(lVar5 + 0x128));
    uVar7 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (param_1 + 0x168,PTR_s___VAR1_INT___10185d7f8);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar7);
    *puVar8 = uVar4;
  }
  puVar2 = PTR_s_onApplyName_10185d540;
  uVar4 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar4 = FUN_100015208(puVar2,uVar4,0x12345678);
  lVar5 = param_1 + 0xa0;
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar1 = *(uint *)(param_1 + 0x160);
  lVar9 = param_1 + 0xe0;
  *(code **)(lVar9 + (ulong)uVar1 * 8) = FUN_100448bb4;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onEndName_10185d548;
  uVar4 = FUN_1004d2524(PTR_s_onEndName_10185d548);
  uVar4 = FUN_100015208(puVar2,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar9 + (ulong)uVar1 * 8) = FUN_100448f0c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onAfterReApplyName_10185d690;
  uVar4 = FUN_1004d2524(PTR_s_onAfterReApplyName_10185d690);
  uVar4 = FUN_100015208(puVar2,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar9 + (ulong)uVar1 * 8) = FUN_100448fd8;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar5 = param_1 + 0x168;
  uVar4 = FUN_1004d2524("PFXonShopID");
  uVar7 = FUN_100015208("PFXonShopID",uVar4,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar5,uVar7);
  uVar4 = FUN_1004d2524("NearestShopGuid");
  uVar7 = FUN_100015208("NearestShopGuid",uVar4,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar5,uVar7);
  FUN_100450f38(auStack_48,param_1 + 0x70);
  lVar9 = FUN_10043645c(auStack_48);
  *(undefined1 *)(lVar9 + 0x10) = 1;
  iVar3 = FUN_1004354f8(auStack_48);
  uVar4 = FUN_1004d2524("PFXonShopID");
  uVar7 = FUN_100015208("PFXonShopID",uVar4,0x12345678);
  puVar10 = (uint *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar5,uVar7);
  *puVar10 = (iVar3 + 0xfe1b7eb0U >> 3) * 0x286bca1b & 0xffff;
  return;
}




void FUN_1003ebafc(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x68);
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_100431e0c(auStack_28);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Untargetable_10185bda8;
  *(undefined4 *)(lVar1 + 0x30) = 0x41000000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  FUN_100431f2c(auStack_28);
  return;
}




void FUN_1003ebb60(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  byte unaff_w23;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined **local_118;
  undefined8 uStack_110;
  byte local_108;
  byte local_107;
  char local_106;
  undefined1 auStack_100 [24];
  long alStack_e8 [16];
  long local_68;
  
  puVar2 = PTR_s_onApplyDamageName_10185d5f8;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 == '\0') {
    local_108 = 0xff;
  }
  else {
    uVar3 = FUN_1004d2524(PTR_s_onApplyDamageName_10185d5f8);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    lVar10 = param_1 + 0xa0;
    *(undefined4 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar4 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar10 + (ulong)uVar4 * 8 + 0x40) = FUN_100441fc4;
    *(uint *)(param_1 + 0x160) = uVar4 + 1;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x264) == '\0') {
      uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
      uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
      *(undefined4 *)(lVar10 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
      uVar4 = *(uint *)(param_1 + 0x160);
      *(code **)(lVar10 + (ulong)uVar4 * 8 + 0x40) = FUN_1004420bc;
      *(uint *)(param_1 + 0x160) = uVar4 + 1;
      uVar3 = FUN_1004d2524("gold_poll_timer");
      uVar5 = FUN_100015208("gold_poll_timer",uVar3,0x12345678);
      (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
      uVar3 = FUN_1004d2524("gold_poll_timer");
      uVar5 = FUN_100015208("gold_poll_timer",uVar3,0x12345678);
      puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5)
      ;
      *puVar6 = 0x42700000;
      local_108 = local_108 | 3;
      unaff_w23 = local_107;
    }
    else {
      local_108 = 0xff;
    }
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_100,param_1 + 0x68);
  local_118 = &PTR_FUN_1014998d0;
  uStack_110 = 0;
  local_107 = unaff_w23 & 0xfe;
  local_106 = -1;
  bVar1 = *(byte *)(lVar10 + 0x264);
  if (bVar1 != 0) {
    local_106 = (bVar1 & 1) + 1;
    local_107 = unaff_w23 | 1;
  }
  uVar4 = FUN_1003a6ce4(&local_118,alStack_e8,0x10,0);
  if (uVar4 == 0) {
    fVar11 = 0.0;
  }
  else {
    uVar8 = (ulong)uVar4;
    fVar11 = 0.0;
    plVar9 = alStack_e8;
    do {
      fVar11 = *(float *)(*(long *)(*plVar9 + 0x40) + 0x324) + fVar11;
      uVar8 = uVar8 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != 0);
    if (1 < uVar4) {
      fVar11 = fVar11 / (float)uVar4;
    }
  }
  fVar11 = fVar11 * *(float *)(&DAT_101159ce8 + (ulong)(bVar1 == 0) * 4);
  lVar7 = FUN_100430f18(auStack_100);
  *(mach_header **)(lVar7 + 0x10) = &__mh_execute_header;
  *(float *)(lVar7 + 0x20) = fVar11;
  *(undefined2 *)(lVar7 + 0x24) = 1;
  lVar7 = FUN_100430f18(auStack_100);
  *(undefined8 *)(lVar7 + 0x10) = 0x100000001;
  *(float *)(lVar7 + 0x20) = fVar11 * 0.1;
  *(undefined2 *)(lVar7 + 0x24) = 1;
  lVar7 = FUN_10043101c(auStack_100);
  *(undefined4 *)(lVar7 + 0x10) = 0;
  *(float *)(lVar7 + 0x14) = fVar11;
  *(undefined1 *)(lVar7 + 0x20) = 0;
  FUN_100431d2c(auStack_100);
  lVar7 = FUN_100431e0c(auStack_100);
  *(undefined **)(lVar7 + 0x10) = PTR_s_Buff_Revealed_10185a448;
  *(undefined4 *)(lVar7 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar7 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar7 + 0x44) = 0;
  *(undefined8 *)(lVar7 + 0x3c) = 0;
  FUN_100431f2c(auStack_100);
  if (bVar1 == 0) {
    lVar10 = FUN_100430f18(auStack_100);
    *(undefined8 *)(lVar10 + 0x10) = 0x100000004;
    *(float *)(lVar10 + 0x20) = fVar11 * 0.12;
    *(undefined2 *)(lVar10 + 0x24) = 1;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    uVar3 = *(undefined4 *)(lVar7 + 0x250);
    fVar11 = *(float *)(lVar7 + 0x254);
    uVar13 = *(undefined4 *)(lVar7 + 600);
    fVar12 = *(float *)(lVar7 + 0x2ec);
    lVar7 = FUN_1003e10f0();
    bVar1 = *(byte *)(lVar7 + 0xe5);
    lVar7 = FUN_100437600(auStack_100);
    *(long *)(lVar7 + 0x18) = lVar10;
    *(undefined1 *)(lVar7 + 0x20) = 1;
    *(undefined4 *)(lVar7 + 0x24) = uVar3;
    *(float *)(lVar7 + 0x28) = fVar12 + fVar11;
    *(undefined4 *)(lVar7 + 0x2c) = uVar13;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x48) = 0xbf800000c0000000;
    *(undefined8 *)(lVar7 + 0x40) = 0xbf80000047afc800;
    *(undefined4 *)(lVar7 + 0x50) = 0x3f800000;
    *(undefined1 *)(lVar7 + 0x54) = 0xff;
    *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
    *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00000001;
    *(byte *)(lVar7 + 0x6a) = bVar1 | 0x14;
    *(undefined2 *)(lVar7 + 0x68) = 0xc110;
    *(byte *)(lVar7 + 0x94) = *(byte *)(lVar7 + 0x94) & 0xfc | 1;
    lVar10 = FUN_100431e0c(auStack_100);
    *(undefined **)(lVar10 + 0x10) = PTR_s_Buff_Ace_10185bd98;
    *(undefined4 *)(lVar10 + 0x30) = 0x41200000;
    *(undefined8 *)(lVar10 + 0x34) = 0xffffffff00000001;
    *(undefined8 *)(lVar10 + 0x44) = 0;
    *(undefined8 *)(lVar10 + 0x3c) = 0;
    FUN_100431f2c(auStack_100);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003ebf54(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Shell");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kraken_Shell_Glow");
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Shell");
                    /* WARNING: Could not recover jumptable at 0x0001003ebfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kraken_Breath");
  return;
}




void FUN_1003ebfd0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100442328;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ace_10185bd98);
  local_30[0] = 0x41200000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  return;
}




void FUN_1003ec048(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Shell");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Goldshell");
                    /* WARNING: Could not recover jumptable at 0x0001003ec09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f000000,0);
  return;
}




void FUN_1003ec0a0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  undefined4 local_60 [2];
  undefined4 local_58;
  
  fVar3 = (float)FUN_100032228();
  fVar3 = (float)((int)(fVar3 * 0.008333334 + 1.0) - 1) * 40.0 + 60.0;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 0x1000;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60[0] = 0x3e19999a;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_60);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ghostwing_Buff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3ef0a3d7,0x3f6147ae,0x3f2b851f);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_10185c170);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(fVar3);
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_ghostwing_buff_activation.mp3");
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  lVar1 = FUN_100432f48(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_10185c170);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(fVar3);
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_10185c170);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Barrier_10185c178);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Regen_10185c180);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_10185c170);
  local_60[0] = 0x40800000;
  local_58 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  (**(code **)(*plVar2 + 0x38))(fVar3);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Barrier_10185c178);
  return;
}




void FUN_1003ec38c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Barrier_10185c178);
                    /* WARNING: Could not recover jumptable at 0x0001003ec3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,FUN_100438578);
  return;
}




void FUN_1003ec3e8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ghostwing_Shield");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3ef0a3d7,0x3f6147ae,0x3f2b851f);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_40[0] = 0x3f666666;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_40);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_100430a84(lVar2);
  local_40[0] = 0x41a00000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,3,1,local_40);
  plVar3 = (long *)FUN_100430a84(lVar2);
  local_40[0] = 0x41200000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,1,1,local_40);
  lVar2 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x3f000000;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) | 1;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Kraken5v5_Ghostwing_Regen_10185c180);
  (**(code **)(*plVar3 + 0x58))(plVar3,FUN_100438578);
  lVar2 = FUN_10042ea44(param_1);
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Kraken5v5_Ghostwing_Bonus_10185c168;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_1004385a0(lVar2 + 0x28);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kraken5v5_Ghostwing_Regen_10185c180);
  FUN_1004385f0(lVar2 + 0x28);
  return;
}




void FUN_1003ec5ac(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e95c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ec5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100438640);
  return;
}




void FUN_1003ec5dc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Untargetable_10185bda8);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ec62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Invulnerable_10185a588);
  return;
}




void FUN_1003ec630(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  undefined4 uVar6;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  lVar1 = FUN_10042e2c8();
  uVar2 = FUN_10034ee90();
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = FUN_10034ea80(uVar2,lVar5);
  if (((uVar3 & 1) == 0) && ((DAT_101d23a39 == '\0' || (*(char *)(lVar5 + 0x264) != '\x02')))) {
    plVar4 = (long *)FUN_10049bef0(lVar1 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"u_crystal_color");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x40cc0000);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x42b28000);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x38);
    uVar6 = 0x42e58000;
  }
  else {
    plVar4 = (long *)FUN_10049bef0(lVar1 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"u_crystal_color");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x435f0000);
    uVar6 = 0x4137999a;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x4137999a);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003ec750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar6);
  return;
}




void FUN_1003ec754(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar5;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  lVar3 = FUN_10042e2c8();
  if (DAT_101d23a39 == '\0') {
    iVar1 = FUN_100432d40(param_1);
    iVar2 = FUN_10034f06c();
    if (iVar1 != iVar2) goto LAB_1003ec82c;
    if (DAT_101d23a39 != '\0') goto LAB_1003ec7a0;
  }
  else {
LAB_1003ec7a0:
    iVar1 = FUN_100432d40(param_1);
    if (iVar1 == 2) {
LAB_1003ec82c:
      plVar4 = (long *)FUN_10049bef0(lVar3 + 0x10);
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"u_crystal_color");
      plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x435f0000);
      uVar5 = 0x4137999a;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x4137999a);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x38);
      goto LAB_1003ec880;
    }
  }
  plVar4 = (long *)FUN_10049bef0(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"u_crystal_color");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x40cc0000);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(0x42b28000);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x38);
  uVar5 = 0x42e58000;
LAB_1003ec880:
                    /* WARNING: Could not recover jumptable at 0x0001003ec890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}




void FUN_1003ec894(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  code *local_30;
  undefined4 local_28;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100433384;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_100441e68(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"CenterBody");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_BlackClaw_Heal_Buff");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3f000000;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  lVar4 = lVar4 + 0x10;
  FUN_1004386bc(lVar4);
  plVar5 = (long *)FUN_10043aa54(lVar4);
  local_30 = FUN_100433434;
  local_28 = 4;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_30);
  plVar5 = (long *)FUN_1004519c8(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  local_30 = FUN_10043348c;
  local_28 = 4;
  (**(code **)(*plVar5 + 0x10))(plVar5,2,&local_30);
  return;
}




void FUN_1003ec9e8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 0x1000;
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kraken5v5_Blackclaw_Defensi_10185c198);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3e800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_30);
  return;
}




void FUN_1003eca9c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3e99999a;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3e19999a;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_30);
  lVar1 = FUN_10042e2c8(param_1);
  lVar3 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 0x58) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x3ecccccd;
  *(undefined4 *)(lVar3 + 0x18) = 1;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blackclaw_Lane_Aura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x3fe66666;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3ecccccd,0x3f000000,0x3f19999a);
  (**(code **)(*plVar2 + 0xd8))(0x3e4ccccd);
  return;
}




void FUN_1003ecc14(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004409c0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003ecc7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x50) = 0x1001;
  FUN_1004385f0(lVar1 + 0x10);
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_JungleHeal_buff";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfe98 | 0x121;
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x90);
  lVar1 = FUN_1004355d8(auStack_38);
  *(code **)(lVar1 + 0x18) = FUN_100440bb8;
  lVar1 = FUN_1004356bc(auStack_38);
  *(code **)(lVar1 + 0x18) = FUN_100440d0c;
  return;
}




void FUN_1003ecd54(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  lVar1 = FUN_10042e95c(param_1);
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100440e08);
  return;
}




void FUN_1003ecdb4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100435a7c(param_1,0x23,"Effect_JungleMinionTreeEnt_Immobilize",0);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/Treant/tree_ent_root_field_impact.mp3");
                    /* WARNING: Could not recover jumptable at 0x0001003ece14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(0x3e99999a);
  return;
}




void FUN_1003ece18(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [3];
  undefined8 local_85;
  undefined4 uStack_7d;
  undefined4 uStack_79;
  undefined4 uStack_75;
  undefined8 uStack_71;
  undefined1 auStack_68 [24];
  
  puVar2 = PTR_s__JungleMinion_TreeEnt__10185bbd0;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar4 = FUN_1010a1520();
  uVar4 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  fVar8 = (float)FUN_1003df5b4(uVar4,3,4);
  *(float *)(param_1 + 0x318) = fVar8;
  if (*(float *)(param_1 + 0x31c) < fVar8) {
    *(float *)(param_1 + 0x31c) = fVar8;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar8 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar5 = FUN_10042e498(param_1);
  plVar6 = (long *)FUN_100441e18(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,"build://Sounds/Treant/tree_ent_root_field_start.mp3");
  (**(code **)(*plVar6 + 0x28))(0x3f800000);
  FUN_100450f38(auStack_88,param_1 + 0x98);
  lVar5 = FUN_100431ad4(auStack_88);
  *(char **)(lVar5 + 0x10) = "Effect_JungleMinionTreeEnt_Root_AOE";
  *(undefined4 *)(lVar5 + 0x5c) = 0;
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xfc98 | 0x321;
  FUN_100450f38(auStack_68,param_1 + 0x88);
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  fVar8 = (float)FUN_1003df5b4(uVar4,3,3);
  uStack_71 = 0;
  uStack_79 = 0;
  uStack_75 = 0;
  local_85 = 0;
  uStack_7d = 0;
  lVar5 = FUN_100437600(auStack_68);
  *(undefined8 *)(lVar5 + 0x18) = uVar7;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_79,uStack_7d);
  *(undefined8 *)(lVar5 + 0x24) = local_85;
  *(undefined8 *)(lVar5 + 0x38) = uStack_71;
  *(ulong *)(lVar5 + 0x30) = CONCAT44(uStack_75,uStack_79);
  *(float *)(lVar5 + 0x40) = fVar8 * fVar8;
  *(undefined8 *)(lVar5 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar5 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0xc120;
  *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) & 0xfc | 1;
  lVar5 = FUN_100440f9c(auStack_68);
  *(code **)(lVar5 + 0x18) = FUN_100440f30;
  *(undefined8 *)(lVar5 + 0x20) = 0x200000003;
  *(byte *)(lVar5 + 0x30) = *(byte *)(lVar5 + 0x30) & 0xfe;
  lVar5 = FUN_100431e0c(auStack_68);
  puVar2 = PTR_s_Buff_JungleMinion_TreeEnt_Immobi_10185c1c0;
  uVar9 = FUN_1003df5b4(uVar4,3,5);
  uVar3 = FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  *(undefined **)(lVar5 + 0x10) = puVar2;
  *(undefined4 *)(lVar5 + 0x30) = uVar9;
  *(undefined4 *)(lVar5 + 0x34) = 1;
  *(undefined4 *)(lVar5 + 0x38) = uVar3;
  *(undefined8 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  FUN_100431f2c(auStack_68);
  FUN_100450f38(auStack_88,param_1 + 0x80);
  FUN_100435830(auStack_88);
  return;
}




void FUN_1003ed070(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onHostDieName_10185d528;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onHostDieName_10185d528);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004410a8;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003ed0e4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_68 [24];
  
  puVar2 = PTR_s_onHostDieName_10185d528;
  uVar3 = FUN_1004d2524(PTR_s_onHostDieName_10185d528);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100441370;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x400;
  lVar6 = param_1 + 0x168;
  uVar3 = FUN_1004d2524("attr");
  uVar4 = FUN_100015208("attr",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar4);
  uVar3 = FUN_1004d2524("pierce");
  uVar4 = FUN_100015208("pierce",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar4);
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar9 = *(float *)(lVar7 + 0xfc);
  fVar10 = *(float *)(lVar7 + 0x100);
  uVar3 = FUN_1004d2524("attr");
  uVar4 = FUN_100015208("attr",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar4);
  uVar3 = 4;
  if (fVar9 <= fVar10) {
    uVar3 = 5;
  }
  uVar8 = 9;
  if (fVar9 <= fVar10) {
    uVar8 = 0xb;
  }
  *puVar5 = uVar3;
  uVar3 = FUN_1004d2524("pierce");
  uVar4 = FUN_100015208("pierce",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar4);
  *puVar5 = uVar8;
  FUN_100450f38(auStack_68,param_1 + 0x98);
  lVar7 = FUN_100436e1c(auStack_68);
  uVar3 = FUN_1004d2524("attr");
  uVar4 = FUN_100015208("attr",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar4);
  *(undefined4 *)(lVar7 + 0x10) = *puVar5;
  *(undefined8 *)(lVar7 + 0x14) = 0x4120000000000001;
  lVar7 = FUN_100436e1c(auStack_68);
  uVar3 = FUN_1004d2524("pierce");
  uVar4 = FUN_100015208("pierce",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar4);
  *(undefined4 *)(lVar7 + 0x10) = *puVar5;
  *(undefined8 *)(lVar7 + 0x14) = 0x3ca3d70a00000001;
  lVar6 = FUN_100436e1c(auStack_68);
  *(undefined8 *)(lVar6 + 0x10) = 0x100000019;
  *(undefined4 *)(lVar6 + 0x18) = 0x3dcccccd;
  lVar6 = FUN_100431ad4(auStack_68);
  *(char **)(lVar6 + 0x10) = "Effect_MinerBuff";
  *(ushort *)(lVar6 + 0x74) = *(ushort *)(lVar6 + 0x74) & 0xfe98 | 0x121;
  *(undefined4 *)(lVar6 + 0x5c) = 0;
  FUN_100450f38(auStack_68,param_1 + 0x70);
  FUN_1004354f8(auStack_68);
  return;
}




void FUN_1003ed394(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onApplyDamageName_10185d5f8;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onApplyDamageName_10185d5f8);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044142c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003ed408(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_CrystalMiner_Empowerment_Hero");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined1 *)(lVar1 + 0x58) = 0xfb;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40[0] = 0x3e4ccccd;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined1 *)(lVar1 + 0x58) = 0xfb;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40[0] = 0x3dcccccd;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_40);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e99999a;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
  local_40[0] = 0x40200000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x20))(0x3f400000);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_SlowUsingBuffVar_10185bde0);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x38))(0x3e4ccccd);
  return;
}




void FUN_1003ed5e8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_1004415e8;
  FUN_1004385f0(lVar1 + 0x10);
  FUN_1004386bc(lVar1 + 0x28);
  plVar2 = (long *)FUN_10043aa54(lVar1 + 0x28);
  local_30 = FUN_1004415c4;
  local_28 = 5;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_MulledWine_buff");
  return;
}




void FUN_1003ed6c0(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_1004415e8;
  FUN_1004385f0(lVar1 + 0x10);
  FUN_1004386bc(lVar1 + 0x28);
  plVar2 = (long *)FUN_10043aa54(lVar1 + 0x28);
  local_30 = FUN_100441640;
  local_28 = 5;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  (**(code **)(*plVar2 + 0x18))();
  return;
}




void FUN_1003ed764(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x328) = 0x41a00000;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100440abc;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003ed7d4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_40;
  undefined4 local_38;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blue_Buff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3ecccccd);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0xc0))(0,0x3f800000,0x3f19999a);
  lVar1 = FUN_10042ea44(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_crystal_buff_picked_up.mp3");
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(undefined2 *)(lVar1 + 0x5e) = 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined1 *)(lVar1 + 0x58) = 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100441504;
  local_38 = 4;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_40);
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_1004414f0;
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 1;
  lVar3 = FUN_10049bb44(lVar1 + 0x10);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185ac28);
  local_40 = FUN_1004414dc;
  local_38 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_crystal_buff_dropped_on_ground.mp3"
                             );
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  return;
}




void FUN_1003ed9f4(void)

{
  return;
}




void FUN_1003ed9f8(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blue_Buff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  (**(code **)(*plVar2 + 0xc0))(0,0x3f800000,0x3f19999a);
  return;
}




void FUN_1003edaa8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Red_Buff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40._0_4_ = 0x3ecccccd;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3ecccccd,0);
  lVar1 = FUN_10042ea44(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_weapon_buff_picked_up.mp3");
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  FUN_10043b4e8(lVar1 + 0x10);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_SlowUsingBuffVar_10185bde0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3f000000);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x38))(0x3e19999a);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(undefined2 *)(lVar1 + 0x5e) = 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined1 *)(lVar1 + 0x58) = 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100441564;
  local_38 = 4;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 1;
  lVar3 = FUN_10049bb44(lVar1 + 0x10);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_JungleMinion_5v5_WeaponOrb_10185ac30);
  local_40 = FUN_1004414dc;
  local_38 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_weapon_buff_dropped_on_ground.mp3")
  ;
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  return;
}




void FUN_1003edd2c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Red_Buff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  (**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3ecccccd,0);
  return;
}




void FUN_1003edddc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100443ddc;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ede38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Minion_ArmoryVictoryBoost_10185c228);
  return;
}




void FUN_1003ede3c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x54) = 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3e800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_ArmoryMinionBuff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_30[0] = 0x3d75c28f;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3ecccccd);
  local_40[0] = 0x3f333333;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x3fc00000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x1c,2,local_30);
  return;
}




void FUN_1003edfe0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100443e90;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Minion_CaptainBuff_10185c238);
  local_30[0] = 0x3f99999a;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  lVar1 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_10049cee4(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,"u_Ally_Enemy");
  return;
}




void FUN_1003ee098(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined1 *)(lVar1 + 0x58) = 8;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x40))(plVar2,local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0x3e4ccccd;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003ee168(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  code *local_30;
  undefined4 local_28;
  
  puVar2 = PTR_s_onApplyName_10185d540;
  uVar3 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100443f44;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"CenterBody");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_AceBuff");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)FUN_100430a84(lVar4);
  local_30 = FUN_100444020;
  local_28 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,0x12,1,&local_30);
  plVar5 = (long *)FUN_100430a84(lVar4);
  local_30 = FUN_100444028;
  local_28 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,0x1c,2,&local_30);
  plVar5 = (long *)FUN_100430a84(lVar4);
  local_30 = FUN_100444030;
  local_28 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,0xf,1,&local_30);
  return;
}




void FUN_1003ee2b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x3fa66666;
  *(undefined4 *)(lVar2 + 0x18) = 1;
  plVar3 = (long *)FUN_10049bfec(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  lVar1 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Gwen_Cleanse");
  local_40[0] = 0x3f800000;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_40);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  return;
}




void FUN_1003ee384(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bfec(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x3fa66666;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Gwen_Cleanse");
  local_30[0] = 0x3f800000;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_30);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_1003ee448(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 8;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ee4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__VainCrystal__HitReact_101858ba0);
  return;
}




void FUN_1003ee4a4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044da24;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044d980;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  uVar3 = FUN_1004d2524("timeOfLastDamage");
  uVar4 = FUN_100015208("timeOfLastDamage",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  FUN_100450f38(auStack_58,param_1 + 0x68);
  lVar5 = FUN_100436540(auStack_58);
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar5 + 0x10) = "Effect_Nexus_Arcane_LifeTimePFX";
  return;
}




void FUN_1003ee5e0(void)

{
  return;
}




void FUN_1003ee5e4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"ShieldBreak");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049ba04(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Idle_NoShield");
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ee67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Turret_Invulnerable_10185c2b8);
  return;
}




void FUN_1003ee680(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_60;
  undefined4 local_58;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,3);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_VainCrystal_B_Warning");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0x3f800000);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3f000000);
  local_60._0_4_ = 0x3fc00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_60);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049d454;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_VainCrystal_B_Impact");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3f800000);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_60);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/5v5/SFX/sfx_rupture_stun_line.mp3");
  (**(code **)(*plVar2 + 0x28))(0x3e99999a);
  plVar2 = (long *)FUN_10043fc58(lVar1);
  local_60 = FUN_10044db74;
  local_58 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_60);
  (**(code **)(*plVar2 + 0x20))(0x3e99999a);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_Impact_10185c258);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3f800000);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049d80c;
  FUN_10044c418(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_1003ee8a0(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_10044dc58;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_10044db88;
  local_28 = 5;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,3,2);
  return;
}




void FUN_1003ee950(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  if (DAT_101d23a38 == '\0') {
    FUN_100450f38(auStack_38,param_1 + 0x98);
    FUN_100432d40(param_1);
    lVar1 = FUN_100345d90();
    if (lVar1 != 0) {
      lVar1 = FUN_100431ad4(auStack_38);
      *(char **)(lVar1 + 0x20) = "CenterBody";
      *(char **)(lVar1 + 0x10) = "Effect_VainCrystal_Target_Laser";
      *(code **)(lVar1 + 0x40) = FUN_10044dc6c;
      *(undefined4 *)(lVar1 + 0x5c) = 0;
      *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfc90 | 0x32a;
    }
  }
  return;
}




void FUN_1003ee9e4(void)

{
  return;
}




void FUN_1003ee9e8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = FUN_1003e10f0();
    if (*(char *)(lVar4 + 0xe4) != '\0') {
      uVar3 = FUN_1004d2524("time_last_barrier_disabled");
      uVar5 = FUN_100015208("time_last_barrier_disabled",uVar3,0x12345678);
      uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
      puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5)
      ;
      *puVar6 = 0;
      puVar2 = PTR_s_onBuffIntervalName_10185d558;
      uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
      uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
      *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
      uVar1 = *(uint *)(param_1 + 0x160);
      *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044dcb0;
      *(uint *)(param_1 + 0x160) = uVar1 + 1;
      *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
    }
  }
  return;
}




void FUN_1003eeacc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 8;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003eeb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__VainNode__HitReact_101858bc8);
  return;
}




void FUN_1003eeb28(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044e0d4;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044e030;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  uVar3 = FUN_1004d2524("vainNodeTimeOfLastDamage");
  uVar4 = FUN_100015208("vainNodeTimeOfLastDamage",uVar3,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x0001003eec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  return;
}




void FUN_1003eec14(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044d2dc;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003eec7c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10043099c();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x3f200000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xd,1,local_40);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40[0] = 0x3f200000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xe,1,local_40);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Muzzle");
  (**(code **)(*plVar2 + 0x58))(plVar2,FUN_10044d3fc);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003eed6c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044cc78;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003eedd4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = FUN_1003e10f0();
    if (*(char *)(lVar4 + 0xe4) != '\0') {
      uVar3 = FUN_1004d2524("time_last_barrier_disabled");
      uVar5 = FUN_100015208("time_last_barrier_disabled",uVar3,0x12345678);
      uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
      puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5)
      ;
      *puVar6 = 0;
      puVar2 = PTR_s_onBuffIntervalName_10185d558;
      uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
      uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
      *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
      uVar1 = *(uint *)(param_1 + 0x160);
      *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044cd44;
      *(uint *)(param_1 + 0x160) = uVar1 + 1;
      *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
    }
  }
  return;
}




void FUN_1003eeeb8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = FUN_1003e10f0();
    if (*(char *)(lVar4 + 0xe4) != '\0') {
      uVar3 = FUN_1004d2524("time_last_barrier_disabled");
      uVar5 = FUN_100015208("time_last_barrier_disabled",uVar3,0x12345678);
      uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
      puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5)
      ;
      *puVar6 = 0;
      puVar2 = PTR_s_onBuffIntervalName_10185d558;
      uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
      uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
      *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
      uVar1 = *(uint *)(param_1 + 0x160);
      *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044cfb8;
      *(uint *)(param_1 + 0x160) = uVar1 + 1;
      *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
    }
  }
  return;
}




void FUN_1003eef9c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  if ((((*(char *)(DAT_101d23a68 + 0x39) == '\0') && (*(char *)(DAT_101d23a68 + 0x4a) == '\0')) &&
      (*(char *)(DAT_101d23a68 + 0x4d) == '\0')) &&
     ((*(char *)(DAT_101d23a68 + 0x43) == '\0' && (*(char *)(DAT_101d23a68 + 0x3a) == '\0')))) {
    lVar1 = FUN_10042e694();
    *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
    *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
    plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
    local_40[0] = 0x3f2b851f;
    local_38 = 1;
    (**(code **)(*plVar2 + 0x30))(plVar2,local_40);
    plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                               (plVar2,PTR_s_Buff_Turret_DamageReduction_5v5__10185c298);
    local_40[0] = 0x3f000000;
    local_38 = 1;
    (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
    lVar1 = FUN_10042e2c8(param_1);
    plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"BarrierLocator");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Turret_DamageReduction_Aura");
    (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  }
  return;
}




void FUN_1003ef0c8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"BarrierLocator");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Turret_DamageReduction");
                    /* WARNING: Could not recover jumptable at 0x0001003ef114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1003ef118(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x42700000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ef154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Turret_GainPowerOverTime_Pa_10185c2a8);
  return;
}




void FUN_1003ef158(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20[0] = 0x41200000;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,4,1,local_20);
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_1003ef1b0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000007;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000008;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  FUN_100450f38(auStack_48,param_1 + 0x80);
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000007;
  *(undefined4 *)(lVar1 + 0x20) = 0x3f800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_48);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000008;
  *(undefined4 *)(lVar1 + 0x20) = 0x3f800000;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  return;
}




void FUN_1003ef25c(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003ef288(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x200;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Turret_Invulnerable_FlyoutT_10185c2c0);
  local_30[0] = 0x3dcccccd;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_1003ef324(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10045607c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ef348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,8);
  return;
}




void FUN_1003ef34c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_101d23a68 != (int *)0x0) && (*DAT_101d23a68 == 0x1c)) {
    iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x270);
    uVar2 = FUN_1004d2524("Reza");
    iVar3 = FUN_100015208("Reza",uVar2,0x12345678);
    if (iVar1 == iVar3) {
      return;
    }
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x80;
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_100441e68(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,"Bone_CenterMass");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_ReflexBlock_Loop");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_10049b864(lVar4 + 0x10);
  (**(code **)(*plVar5 + 0x30))(plVar5,4,FUN_10043e6d0);
  lVar4 = FUN_10042fdc4(param_1);
  plVar5 = (long *)FUN_100441e68(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,"Bone_CenterMass");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_ReflexBlock_End");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  return;
}




void FUN_1003ef49c(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_94;
  float local_90;
  float local_8c;
  code *local_88;
  undefined4 local_80;
  
  puVar1 = PTR_s__Item_CrystalInfusion__10185ab88;
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,puVar1,0);
  plVar5 = *(long **)(lVar4 + 0x1a8);
  if (*plVar5 == 0) {
    local_90 = 0.0;
    fVar11 = -0.0;
    fVar17 = -0.0;
    local_94 = 0.0;
    local_8c = 0.0;
    fVar10 = 0.0;
    fVar19 = -0.0;
    fVar9 = 0.0;
  }
  else {
    lVar4 = 0;
    do {
      lVar6 = *(long *)((long)plVar5 + lVar4 + 8);
      iVar8 = (int)lVar4;
      lVar4 = lVar4 + 8;
    } while (lVar6 != 0 && iVar8 != 8);
    fVar9 = 0.0;
    fVar10 = 0.0;
    if (lVar6 != 0) {
      fVar10 = *(float *)(lVar6 + 8);
    }
    lVar4 = plVar5[1];
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      fVar9 = *(float *)(lVar4 + 8);
      lVar6 = 0;
      do {
        lVar7 = *(long *)((long)plVar5 + lVar6 + 0x10);
        iVar8 = (int)lVar6;
        lVar6 = lVar6 + 8;
      } while (lVar7 != 0 && iVar8 != 0x10);
    }
    fVar12 = 0.0;
    if (lVar7 != 0) {
      fVar12 = *(float *)(lVar7 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar6 != 0 && iVar8 != 8);
    }
    fVar13 = 0.0;
    if (lVar6 != 0) {
      fVar13 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
      bVar2 = true;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (iVar8 != 0x20);
    }
    fVar14 = 0.0;
    if (!bVar2) {
      fVar14 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar6 != 0 && iVar8 != 0x18);
    }
    fVar15 = 0.0;
    if (lVar6 != 0) {
      fVar15 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
      bVar2 = true;
    }
    else {
      lVar7 = 0x10;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (iVar8 != 0x40);
    }
    fVar16 = 0.0;
    if (!bVar2) {
      fVar16 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
      bVar2 = true;
    }
    else {
      lVar7 = 0x10;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (iVar8 != 0x38);
    }
    fVar17 = 0.0;
    fVar18 = 0.0;
    if (!bVar2) {
      fVar18 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      fVar17 = *(float *)(lVar4 + 8);
      lVar6 = 0;
      do {
        lVar7 = *(long *)((long)plVar5 + lVar6 + 0x10);
        iVar8 = (int)lVar6;
        lVar6 = lVar6 + 8;
      } while (lVar7 != 0 && iVar8 != 8);
    }
    fVar19 = 0.0;
    if (lVar7 != 0) {
      fVar19 = *(float *)(lVar7 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar6 != 0 && iVar8 != 0x18);
    }
    fVar11 = 0.0;
    if (lVar6 != 0) {
      fVar11 = *(float *)(lVar6 + 8);
    }
    local_90 = (fVar10 - fVar9) * 0.09090909;
    local_94 = (fVar12 - fVar13) * 0.09090909;
    local_8c = (fVar14 - fVar15) * 0.09090909;
    bVar2 = lVar4 == 0;
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar4 = 0x10;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar4);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar4;
        lVar4 = lVar4 + 8;
      } while (iVar8 != 0x38);
    }
    fVar10 = (fVar16 - fVar18) * 0.09090909;
    fVar17 = fVar17 - local_90;
    fVar19 = fVar19 - local_94;
    fVar11 = fVar11 - local_8c;
    fVar9 = 0.0;
    if (!bVar2) {
      fVar9 = *(float *)(lVar6 + 8);
    }
  }
  lVar4 = FUN_10042ea44(param_1);
  plVar5 = (long *)FUN_100433de4(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  local_88 = FUN_10043daf0;
  local_80 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_88);
  FUN_100450f38(&local_88,param_1 + 0x68);
  lVar4 = FUN_100436540(&local_88);
  *(char **)(lVar4 + 0x10) = "Effect_Crisis_Crystal";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfe90 | 0x129;
  *(undefined8 *)(lVar4 + 0x58) = 0x40400000;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000005;
  *(float *)(lVar4 + 0x20) = fVar17;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000019;
  *(float *)(lVar4 + 0x20) = fVar19;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(float *)(lVar4 + 0x20) = fVar11;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(float *)(lVar4 + 0x20) = fVar9 - fVar10;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  FUN_100450f38(&local_88,param_1 + 0x98);
  lVar4 = FUN_100431ad4(&local_88);
  *(char **)(lVar4 + 0x28) = "Bone_CenterMass";
  *(char **)(lVar4 + 0x10) = "Effect_Crisis_Crystal_Con";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfe98 | 0x143;
  *(undefined4 *)(lVar4 + 0x5c) = 0;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000005;
  *(float *)(lVar4 + 0x18) = local_90;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000019;
  *(float *)(lVar4 + 0x18) = local_94;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(float *)(lVar4 + 0x18) = local_8c;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(float *)(lVar4 + 0x18) = fVar10;
  FUN_100450f38(&local_88,param_1 + 0x70);
  FUN_1004354f8(&local_88);
  lVar4 = FUN_100436540(&local_88);
  *(char **)(lVar4 + 0x10) = "Effect_Crisis_Crystal";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfe90 | 0x129;
  *(undefined8 *)(lVar4 + 0x58) = 0x40400000;
  FUN_100450f38(&local_88,param_1 + 0x80);
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000005;
  *(float *)(lVar4 + 0x20) = -fVar17;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000019;
  *(float *)(lVar4 + 0x20) = -fVar19;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(float *)(lVar4 + 0x20) = -fVar11;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(float *)(lVar4 + 0x20) = -(fVar9 - fVar10);
  *(undefined2 *)(lVar4 + 0x24) = 0;
  return;
}




void FUN_1003efa60(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_94;
  float local_90;
  float local_8c;
  code *local_88;
  undefined4 local_80;
  
  puVar1 = PTR_s__Item_WeaponInfusion__10185ab70;
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,puVar1,0);
  plVar5 = *(long **)(lVar4 + 0x1a8);
  if (*plVar5 == 0) {
    local_90 = 0.0;
    fVar11 = -0.0;
    fVar17 = -0.0;
    local_94 = 0.0;
    local_8c = 0.0;
    fVar10 = 0.0;
    fVar19 = -0.0;
    fVar9 = 0.0;
  }
  else {
    lVar4 = 0;
    do {
      lVar6 = *(long *)((long)plVar5 + lVar4 + 8);
      iVar8 = (int)lVar4;
      lVar4 = lVar4 + 8;
    } while (lVar6 != 0 && iVar8 != 8);
    fVar9 = 0.0;
    fVar10 = 0.0;
    if (lVar6 != 0) {
      fVar10 = *(float *)(lVar6 + 8);
    }
    lVar4 = plVar5[1];
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      fVar9 = *(float *)(lVar4 + 8);
      lVar6 = 0;
      do {
        lVar7 = *(long *)((long)plVar5 + lVar6 + 0x10);
        iVar8 = (int)lVar6;
        lVar6 = lVar6 + 8;
      } while (lVar7 != 0 && iVar8 != 0x10);
    }
    fVar12 = 0.0;
    if (lVar7 != 0) {
      fVar12 = *(float *)(lVar7 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar6 != 0 && iVar8 != 8);
    }
    fVar13 = 0.0;
    if (lVar6 != 0) {
      fVar13 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
      bVar2 = true;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (iVar8 != 0x20);
    }
    fVar14 = 0.0;
    if (!bVar2) {
      fVar14 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar6 != 0 && iVar8 != 0x18);
    }
    fVar15 = 0.0;
    if (lVar6 != 0) {
      fVar15 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
      bVar2 = true;
    }
    else {
      lVar7 = 0x10;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (iVar8 != 0x40);
    }
    fVar16 = 0.0;
    if (!bVar2) {
      fVar16 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
      bVar2 = true;
    }
    else {
      lVar7 = 0x10;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (iVar8 != 0x38);
    }
    fVar17 = 0.0;
    fVar18 = 0.0;
    if (!bVar2) {
      fVar18 = *(float *)(lVar6 + 8);
    }
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    else {
      fVar17 = *(float *)(lVar4 + 8);
      lVar6 = 0;
      do {
        lVar7 = *(long *)((long)plVar5 + lVar6 + 0x10);
        iVar8 = (int)lVar6;
        lVar6 = lVar6 + 8;
      } while (lVar7 != 0 && iVar8 != 8);
    }
    fVar19 = 0.0;
    if (lVar7 != 0) {
      fVar19 = *(float *)(lVar7 + 8);
    }
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar7 + 0x10);
        iVar8 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar6 != 0 && iVar8 != 0x18);
    }
    fVar11 = 0.0;
    if (lVar6 != 0) {
      fVar11 = *(float *)(lVar6 + 8);
    }
    local_90 = (fVar10 - fVar9) * 0.09090909;
    local_94 = (fVar12 - fVar13) * 0.09090909;
    local_8c = (fVar14 - fVar15) * 0.09090909;
    bVar2 = lVar4 == 0;
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar4 = 0x10;
      do {
        lVar6 = *(long *)((long)plVar5 + lVar4);
        bVar2 = lVar6 == 0;
        if (lVar6 == 0) break;
        iVar8 = (int)lVar4;
        lVar4 = lVar4 + 8;
      } while (iVar8 != 0x38);
    }
    fVar10 = (fVar16 - fVar18) * 0.09090909;
    fVar17 = fVar17 - local_90;
    fVar19 = fVar19 - local_94;
    fVar11 = fVar11 - local_8c;
    fVar9 = 0.0;
    if (!bVar2) {
      fVar9 = *(float *)(lVar6 + 8);
    }
  }
  lVar4 = FUN_10042ea44(param_1);
  plVar5 = (long *)FUN_100433de4(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  local_88 = FUN_10043daf0;
  local_80 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_88);
  FUN_100450f38(&local_88,param_1 + 0x68);
  lVar4 = FUN_100436540(&local_88);
  *(char **)(lVar4 + 0x10) = "Effect_Crisis_Weapon";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfe90 | 0x129;
  *(undefined8 *)(lVar4 + 0x58) = 0x40400000;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000004;
  *(float *)(lVar4 + 0x20) = fVar17;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x10000000f;
  *(float *)(lVar4 + 0x20) = fVar19;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(float *)(lVar4 + 0x20) = fVar11;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(float *)(lVar4 + 0x20) = fVar9 - fVar10;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  FUN_100450f38(&local_88,param_1 + 0x98);
  lVar4 = FUN_100431ad4(&local_88);
  *(char **)(lVar4 + 0x28) = "Bone_CenterMass";
  *(char **)(lVar4 + 0x10) = "Effect_Crisis_Weapon_Con";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfe98 | 0x143;
  *(undefined4 *)(lVar4 + 0x5c) = 0;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000004;
  *(float *)(lVar4 + 0x18) = local_90;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x10000000f;
  *(float *)(lVar4 + 0x18) = local_94;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(float *)(lVar4 + 0x18) = local_8c;
  lVar4 = FUN_100436e1c(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(float *)(lVar4 + 0x18) = fVar10;
  FUN_100450f38(&local_88,param_1 + 0x70);
  FUN_1004354f8(&local_88);
  lVar4 = FUN_100436540(&local_88);
  *(char **)(lVar4 + 0x10) = "Effect_Crisis_Weapon";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfe90 | 0x129;
  *(undefined8 *)(lVar4 + 0x58) = 0x40400000;
  FUN_100450f38(&local_88,param_1 + 0x80);
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000004;
  *(float *)(lVar4 + 0x20) = -fVar17;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x10000000f;
  *(float *)(lVar4 + 0x20) = -fVar19;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(float *)(lVar4 + 0x20) = -fVar11;
  *(undefined2 *)(lVar4 + 0x24) = 0;
  lVar4 = FUN_100430f18(&local_88);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(float *)(lVar4 + 0x20) = -(fVar9 - fVar10);
  *(undefined2 *)(lVar4 + 0x24) = 0;
  return;
}

