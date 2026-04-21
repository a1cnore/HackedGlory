// functions/00a03 — 13 functions
#include "libGameKindred.h"




void FUN_00a030b4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




undefined8 FUN_00a030bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




int * FUN_00a030c4(uint *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    piVar1 = *(int **)(param_1 + 2);
    lVar2 = (ulong)*param_1 * 0x38;
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      lVar2 = lVar2 + -0x38;
      piVar1 = piVar1 + 0xe;
    } while (lVar2 != 0);
  }
  return (int *)0x0;
}




void thunk_FUN_00a030fc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00a0359c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  *(undefined4 *)(lVar4 + -0x38) = *param_2;
  FUN_00a03764(lVar4 + -0x30,param_2 + 2);
  *(undefined4 *)(lVar4 + -0x20) = param_2[6];
  thunk_FUN_00e7051c(lVar4 + -0x18,param_2 + 8);
  *(undefined1 *)(lVar4 + -6) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0xc);
  return;
}




void FUN_00a030fc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00a0359c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  *(undefined4 *)(lVar4 + -0x38) = *param_2;
  FUN_00a03764(lVar4 + -0x30,param_2 + 2);
  *(undefined4 *)(lVar4 + -0x20) = param_2[6];
  thunk_FUN_00e7051c(lVar4 + -0x18,param_2 + 8);
  *(undefined1 *)(lVar4 + -6) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0xc);
  return;
}




void FUN_00a031b8(undefined8 param_1)

{
  FUN_00a031c0(param_1,0);
  return;
}




void FUN_00a031c0(uint *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x28);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        FUN_00a036a8(puVar2 + -4,1);
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
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




uint FUN_00a03248(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  
  uVar2 = *(int *)(param_1 + 0x34) - 2;
  if (uVar2 < 3) {
    iVar6 = *(int *)(&DAT_01b9e14c + (long)(int)uVar2 * 4);
  }
  else {
    iVar6 = 1;
  }
  lVar3 = FUN_009fa72c();
  if (lVar3 == 0) {
    iVar1 = -1;
  }
  else {
    uVar4 = FUN_009fa72c();
    if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
      lVar3 = param_1 + 0x71;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x80);
    }
    iVar1 = FUN_009fb4d4(uVar4,lVar3);
    if (iVar1 == 0) {
      return 4;
    }
  }
  if ((iVar1 != 1) && (*(char *)(param_1 + 0x9c) == '\0')) {
    return 4;
  }
  uVar2 = *(uint *)(param_1 + 0x34);
  switch(uVar2) {
  case 0:
    goto switchD_00a032ec_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    lVar3 = FUN_00969248();
    if (*(int *)(lVar3 + 0x38) < 1) {
      return 0;
    }
    lVar3 = FUN_00969248();
    if (*(int *)(lVar3 + 0x38) == iVar6) {
      return 0;
    }
    lVar3 = FUN_00969248(0);
    if (iVar6 < *(int *)(lVar3 + 0x38)) {
      return 2;
    }
    lVar3 = FUN_00969248();
    if (iVar6 <= *(int *)(lVar3 + 0x38)) goto switchD_00a032ec_caseD_5;
    break;
  case 5:
  case 6:
switchD_00a032ec_caseD_5:
    uVar5 = FUN_0093dbe8();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    lVar3 = FUN_009580b8(0);
    if (*(uint *)(lVar3 + 0x55e0) < 5) {
      fVar7 = (float)FUN_0093c228(0);
      if ((1.0 <= fVar7) && (*(int *)(param_1 + 0x34) == 5)) {
        return 0;
      }
      return (uint)(fVar7 < 5.0 || *(int *)(param_1 + 0x34) != 6);
    }
    return 0;
  case 7:
    uVar5 = FUN_0093dbe8();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    FUN_00a07558(0);
    uVar5 = FUN_00a0763c();
    goto joined_r0x00a0336c;
  case 8:
    uVar5 = FUN_0093dbe8();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    FUN_00a07558(0);
    uVar5 = FUN_00a07644();
joined_r0x00a0336c:
    if ((uVar5 & 1) != 0) {
      lVar3 = FUN_009580b8();
      if (*(int *)(lVar3 + 0x55d8) < 1) {
        return 0;
      }
      return 3;
    }
    break;
  case 9:
    uVar5 = FUN_0093dbe8();
    uVar2 = 0;
    if ((uVar5 & 1) == 0) {
      lVar3 = FUN_009580b8(0);
      uVar2 = (uint)(*(uint *)(lVar3 + 0x55e0) < 5);
    }
    goto switchD_00a032ec_caseD_0;
  }
  uVar2 = 1;
switchD_00a032ec_caseD_0:
  return uVar2;
}




void FUN_00a03430(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0xa8);
    puVar3 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar5 = puVar3 + (ulong)*param_1 * 0x15;
      puVar6 = puVar2;
      do {
        uVar7 = *puVar3;
        puVar6[1] = puVar3[1];
        *puVar6 = uVar7;
        FUN_008fcdb8(puVar6 + 2,puVar3 + 2);
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar3 + 7);
        uVar7 = puVar3[5];
        puVar6[6] = puVar3[6];
        puVar6[5] = uVar7;
        thunk_FUN_00e7051c(puVar6 + 8,puVar3 + 8);
        thunk_FUN_00e7051c(puVar6 + 10,puVar3 + 10);
        thunk_FUN_00e7051c(puVar6 + 0xc,puVar3 + 0xc);
        FUN_008fcdb8(puVar6 + 0xe,puVar3 + 0xe);
        uVar7 = *(undefined8 *)((long)puVar3 + 0x91);
        *(undefined8 *)((long)puVar6 + 0x99) = *(undefined8 *)((long)puVar3 + 0x99);
        *(undefined8 *)((long)puVar6 + 0x91) = uVar7;
        puVar1 = puVar3 + 0x12;
        uVar7 = puVar3[0x11];
        puVar3 = puVar3 + 0x15;
        puVar6[0x12] = *puVar1;
        puVar6[0x11] = uVar7;
        puVar6 = puVar6 + 0x15;
      } while (puVar3 != puVar5);
      puVar3 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0xa8;
        puVar3 = puVar3 + 8;
        do {
          if ((*(byte *)(puVar3 + 6) & 1) != 0) {
            operator_delete((void *)puVar3[8]);
          }
          if ((void *)puVar3[5] != (void *)0x0) {
            operator_delete__((void *)puVar3[5]);
            puVar3[4] = 0;
            puVar3[5] = 0;
          }
          if ((void *)puVar3[3] != (void *)0x0) {
            operator_delete__((void *)puVar3[3]);
            puVar3[2] = 0;
            puVar3[3] = 0;
          }
          if ((void *)puVar3[1] != (void *)0x0) {
            operator_delete__((void *)puVar3[1]);
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          if ((*(byte *)(puVar3 + -6) & 1) != 0) {
            operator_delete((void *)puVar3[-4]);
          }
          lVar4 = lVar4 + -0xa8;
          puVar3 = puVar3 + 0x15;
        } while (lVar4 != 0);
        puVar3 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete__(puVar3);
    }
    *(undefined8 **)(param_1 + 2) = puVar2;
  }
  return;
}




void FUN_00a0359c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0x38);
    puVar3 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar6 = puVar3 + (ulong)*param_1 * 0xe;
      puVar7 = puVar2;
      do {
        *puVar7 = *puVar3;
        FUN_00a03764(puVar7 + 2,puVar3 + 2);
        puVar7[6] = puVar3[6];
        thunk_FUN_00e7051c(puVar7 + 8,puVar3 + 8);
        *(undefined1 *)((long)puVar7 + 0x32) = *(undefined1 *)((long)puVar3 + 0x32);
        puVar1 = puVar3 + 0xc;
        puVar3 = puVar3 + 0xe;
        *(undefined2 *)(puVar7 + 0xc) = *(undefined2 *)puVar1;
        puVar7 = puVar7 + 0xe;
      } while (puVar3 != puVar6);
      puVar3 = *(undefined4 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        puVar4 = (undefined8 *)(puVar3 + 10);
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            operator_delete__((void *)*puVar4);
            puVar4[-1] = 0;
            *puVar4 = 0;
          }
          FUN_00a036a8(puVar4 + -4,1);
          lVar5 = lVar5 + -0x38;
          puVar4 = puVar4 + 7;
        } while (lVar5 != 0);
        puVar3 = *(undefined4 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      operator_delete__(puVar3);
    }
    *(undefined4 **)(param_1 + 2) = puVar2;
  }
  return;
}




void FUN_00a036a8(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0xa8;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x40);
      do {
        if ((*(byte *)(puVar2 + 6) & 1) != 0) {
          operator_delete((void *)puVar2[8]);
        }
        if ((void *)puVar2[5] != (void *)0x0) {
          operator_delete__((void *)puVar2[5]);
          puVar2[4] = 0;
          puVar2[5] = 0;
        }
        if ((void *)puVar2[3] != (void *)0x0) {
          operator_delete__((void *)puVar2[3]);
          puVar2[2] = 0;
          puVar2[3] = 0;
        }
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((*(byte *)(puVar2 + -6) & 1) != 0) {
          operator_delete((void *)puVar2[-4]);
        }
        lVar1 = lVar1 + -0xa8;
        puVar2 = puVar2 + 0x15;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
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




void FUN_00a03764(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00a03430(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    puVar3 = *(undefined8 **)(param_2 + 2);
    puVar4 = *(undefined8 **)(param_1 + 2);
    puVar5 = puVar3 + (ulong)*param_2 * 0x15;
    do {
      uVar6 = *puVar3;
      puVar4[1] = puVar3[1];
      *puVar4 = uVar6;
      FUN_008fcdb8(puVar4 + 2,puVar3 + 2);
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(puVar3 + 7);
      uVar6 = puVar3[5];
      puVar4[6] = puVar3[6];
      puVar4[5] = uVar6;
      thunk_FUN_00e7051c(puVar4 + 8,puVar3 + 8);
      thunk_FUN_00e7051c(puVar4 + 10,puVar3 + 10);
      thunk_FUN_00e7051c(puVar4 + 0xc,puVar3 + 0xc);
      FUN_008fcdb8(puVar4 + 0xe,puVar3 + 0xe);
      uVar6 = *(undefined8 *)((long)puVar3 + 0x91);
      *(undefined8 *)((long)puVar4 + 0x99) = *(undefined8 *)((long)puVar3 + 0x99);
      *(undefined8 *)((long)puVar4 + 0x91) = uVar6;
      puVar1 = puVar3 + 0x12;
      uVar6 = puVar3[0x11];
      puVar3 = puVar3 + 0x15;
      puVar4[0x12] = *puVar1;
      puVar4[0x11] = uVar6;
      puVar4 = puVar4 + 0x15;
    } while (puVar3 != puVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00a03834(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte local_10b8 [16];
  void *local_10a8;
  undefined1 auStack_10a0 [16];
  byte local_1090;
  void *local_1080;
  undefined4 local_106c;
  undefined8 local_1060;
  void *local_1058;
  undefined8 local_1050;
  void *local_1048;
  undefined8 local_1040;
  void *local_1038;
  byte local_1030;
  void *local_1020;
  undefined1 auStack_ff8 [16];
  byte local_fe8;
  void *local_fd8;
  undefined4 local_fc4;
  undefined8 local_fb8;
  void *local_fb0;
  undefined8 local_fa8;
  void *local_fa0;
  undefined8 local_f98;
  void *local_f90;
  byte local_f88;
  void *local_f78;
  undefined1 auStack_f50 [16];
  byte local_f40;
  void *local_f30;
  undefined4 local_f1c;
  undefined8 local_f10;
  void *local_f08;
  undefined8 local_f00;
  void *local_ef8;
  undefined8 local_ef0;
  void *local_ee8;
  byte local_ee0;
  void *local_ed0;
  undefined1 auStack_ea8 [16];
  byte local_e98;
  void *local_e88;
  undefined4 local_e74;
  undefined8 local_e68;
  void *local_e60;
  undefined8 local_e58;
  void *local_e50;
  undefined8 local_e48;
  void *local_e40;
  byte local_e38;
  void *local_e28;
  undefined1 auStack_e00 [16];
  byte local_df0;
  void *local_de0;
  undefined8 local_dc0;
  void *local_db8;
  undefined8 local_db0;
  void *local_da8;
  undefined8 local_da0;
  void *local_d98;
  byte local_d90;
  void *local_d80;
  undefined1 auStack_d58 [16];
  byte local_d48;
  void *local_d38;
  undefined8 local_d18;
  void *local_d10;
  undefined8 local_d08;
  void *local_d00;
  undefined8 local_cf8;
  void *local_cf0;
  byte local_ce8;
  void *local_cd8;
  undefined4 local_cd0;
  char *local_cc8;
  undefined4 local_cc0;
  undefined1 auStack_cb0 [16];
  byte local_ca0;
  void *local_c90;
  undefined8 local_c70;
  void *local_c68;
  undefined8 local_c60;
  void *local_c58;
  undefined8 local_c50;
  void *local_c48;
  byte local_c40;
  void *local_c30;
  undefined4 local_c28;
  char *local_c20;
  undefined4 local_c18;
  undefined1 auStack_c08 [16];
  byte local_bf8;
  void *local_be8;
  undefined8 local_bc8;
  void *local_bc0;
  undefined8 local_bb8;
  void *local_bb0;
  undefined8 local_ba8;
  void *local_ba0;
  byte local_b98;
  void *local_b88;
  undefined4 local_b80;
  char *local_b78;
  undefined4 local_b70;
  undefined1 auStack_b60 [16];
  byte local_b50;
  void *local_b40;
  undefined8 local_b20;
  void *local_b18;
  undefined8 local_b10;
  void *local_b08;
  undefined8 local_b00;
  void *local_af8;
  byte local_af0;
  void *local_ae0;
  undefined4 local_ad8;
  char *local_ad0;
  undefined4 local_ac8;
  undefined1 local_ac2;
  undefined1 auStack_ab8 [16];
  byte local_aa8;
  void *local_a98;
  undefined4 local_a84;
  undefined8 local_a78;
  void *local_a70;
  undefined8 local_a68;
  void *local_a60;
  undefined8 local_a58;
  void *local_a50;
  byte local_a48;
  void *local_a38;
  undefined4 local_a30;
  char *local_a28;
  undefined4 local_a20;
  undefined1 local_a1a;
  undefined1 auStack_a10 [16];
  byte local_a00;
  void *local_9f0;
  undefined8 local_9d0;
  void *local_9c8;
  undefined8 local_9c0;
  void *local_9b8;
  undefined8 local_9b0;
  void *local_9a8;
  byte local_9a0;
  void *local_990;
  undefined4 local_988;
  char *local_980;
  undefined1 local_970;
  undefined1 auStack_968 [16];
  byte local_958;
  void *local_948;
  undefined8 local_928;
  void *local_920;
  undefined8 local_918;
  void *local_910;
  undefined8 local_908;
  void *local_900;
  byte local_8f8;
  void *local_8e8;
  undefined4 local_8e0;
  char *local_8d8;
  undefined1 local_8c8;
  undefined1 auStack_8c0 [16];
  byte local_8b0;
  void *local_8a0;
  undefined8 local_880;
  void *local_878;
  undefined8 local_870;
  void *local_868;
  undefined8 local_860;
  void *local_858;
  byte local_850;
  void *local_840;
  undefined4 local_838;
  char *local_830;
  undefined1 local_820;
  undefined1 auStack_818 [16];
  byte local_808;
  void *local_7f8;
  undefined4 local_7e4;
  undefined8 local_7d8;
  void *local_7d0;
  undefined8 local_7c8;
  void *local_7c0;
  undefined8 local_7b8;
  void *local_7b0;
  byte local_7a8;
  void *local_798;
  undefined4 local_790;
  char *local_788;
  undefined4 local_780;
  undefined1 local_778;
  undefined1 auStack_770 [16];
  byte local_760;
  void *local_750;
  undefined4 local_73c;
  undefined8 local_730;
  void *local_728;
  undefined8 local_720;
  void *local_718;
  undefined8 local_710;
  void *local_708;
  byte local_700 [16];
  void *local_6f0;
  undefined4 local_6e8;
  char *local_6e0;
  undefined4 local_6d8;
  undefined1 local_6d4;
  undefined1 auStack_6c8 [16];
  byte local_6b8;
  void *local_6a8;
  undefined4 local_694;
  undefined8 local_688;
  void *local_680;
  undefined8 local_678;
  void *local_670;
  undefined8 local_668;
  void *local_660;
  byte local_658 [16];
  void *local_648;
  undefined4 local_640;
  char *local_638;
  undefined4 local_630;
  undefined1 local_62c;
  undefined1 auStack_620 [16];
  byte local_610;
  void *local_600;
  undefined4 local_5ec;
  undefined8 local_5e0;
  void *local_5d8;
  undefined8 local_5d0;
  void *local_5c8;
  undefined8 local_5c0;
  void *local_5b8;
  byte local_5b0 [16];
  void *local_5a0;
  undefined4 local_598;
  char *local_590;
  undefined4 local_588;
  undefined1 local_584;
  undefined1 auStack_578 [16];
  byte local_568;
  void *local_558;
  undefined4 local_544;
  undefined8 local_538;
  void *local_530;
  undefined8 local_528;
  void *local_520;
  undefined8 local_518;
  void *local_510;
  byte local_508 [16];
  void *local_4f8;
  undefined4 local_4f0;
  char *local_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc;
  undefined1 auStack_4d0 [16];
  byte local_4c0;
  void *local_4b0;
  undefined4 local_49c;
  undefined8 local_490;
  void *local_488;
  undefined8 local_480;
  void *local_478;
  undefined8 local_470;
  void *local_468;
  byte local_460 [16];
  void *local_450;
  undefined4 local_448;
  char *local_440;
  undefined4 local_438;
  undefined1 local_434;
  undefined1 auStack_428 [16];
  byte local_418;
  void *local_408;
  undefined4 local_3f4;
  undefined8 local_3e8;
  void *local_3e0;
  undefined8 local_3d8;
  void *local_3d0;
  undefined8 local_3c8;
  void *local_3c0;
  byte local_3b8 [16];
  void *local_3a8;
  undefined4 local_3a0;
  char *local_398;
  undefined4 local_390;
  undefined1 auStack_380 [16];
  byte local_370;
  void *local_360;
  undefined8 local_340;
  void *local_338;
  undefined8 local_330;
  void *local_328;
  undefined8 local_320;
  void *local_318;
  byte local_310 [16];
  void *local_300;
  undefined4 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined1 auStack_2d8 [16];
  byte local_2c8;
  void *local_2b8;
  undefined8 local_298;
  void *local_290;
  undefined8 local_288;
  void *local_280;
  undefined8 local_278;
  void *local_270;
  byte local_268 [16];
  void *local_258;
  undefined4 local_250;
  char *local_248;
  undefined4 local_240;
  undefined1 auStack_230 [16];
  byte local_220;
  void *local_210;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  byte local_1c0;
  void *local_1b0;
  undefined4 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined1 local_192;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [24];
  undefined8 local_168;
  void *local_160;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [24];
  undefined8 local_130;
  void *local_128;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined8 local_f8;
  void *local_f0;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  void *local_b8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  void *local_80;
  undefined1 local_77;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_00a02e7c(auStack_a8,"gameplayMode",0);
  FUN_00a02e7c(auStack_e0,"casualOrRankedStep",0);
  FUN_00a02e7c(auStack_118,"botTypeStep",0);
  FUN_00a02e7c(auStack_150,"botdifficultyStep",1);
  FUN_00a02e7c(auStack_188,"tutorialChoiceStep",1);
  FUN_00a02b4c(auStack_230,0,"casualOrRankedStep",0xffffffff,0);
  FUN_00a02b4c(auStack_2d8,3,0,0xffffffff,4);
  FUN_00a02b4c(auStack_380,4,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_428,6,0,0xffffffff,5);
  FUN_00a02b4c(auStack_4d0,5,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_578,8,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_620,7,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_6c8,9,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_770,1,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_818,2,0,0xffffffff,0xffffffff);
  FUN_00a02c18(auStack_8c0,3,"botTypeStep",0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_968,10,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_a10,0x11,PTR_s_tutorialLevelGwen_02be3400,0xffffffff,0xffffffff);
  FUN_00a02c18(auStack_ab8,1,0,0xffffffff,3);
  FUN_00a02c18(auStack_b60,0,0,0xffffffff,0);
  FUN_00a02b4c(auStack_c08,0,"botdifficultyStep",0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_cb0,3,"botdifficultyStep",0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_d58,2,"botdifficultyStep",0xffffffff,0xffffffff);
  FUN_00a02ce4(auStack_e00,0,0,0xffffffff,0xffffffff);
  FUN_00a02ce4(auStack_ea8,1,0,0xffffffff,0xffffffff);
  FUN_00a02ce4(auStack_f50,2,0,0xffffffff,0xffffffff);
  FUN_00a02ce4(auStack_ff8,3,0,0xffffffff,0xffffffff);
  FUN_00a02ce4(auStack_10a0,4,0,0xffffffff,0xffffffff);
  uVar3 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00910394(&local_1f0,uVar3);
  local_192 = 1;
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_1e0,uVar3);
  local_1a8 = 0;
  local_1a0 = "playmode_5v5_casual";
  local_198 = 0x19;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_CASUAL_TITLE",0);
  FUN_00910394(&local_b20,uVar3);
  local_ac2 = 1;
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_b10,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_b10,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00e70c34(&local_b10,uVar3);
  local_ad8 = 0;
  local_ad0 = "playmode_5v5_casual";
  local_ac8 = 0x19;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_RANKED_TITLE",0);
  FUN_00910394(&local_a78,uVar3);
  local_a1a = 1;
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_a68,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_a68,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00e70c34(&local_a68,uVar3);
  local_a30 = 0;
  local_a28 = "playmode_5v5_ranked";
  local_a20 = 0x19;
  local_a84 = 7;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BLITZ_TITLE",0);
  FUN_00910394(&local_298,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_288,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_288,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00e70c34(&local_288,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_288,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_TALENTS_MODE_LABEL",0);
  FUN_00e70c34(&local_288,uVar3);
  local_250 = 0;
  local_248 = "playmode_blitz";
  local_240 = 5;
  FUN_008fa54c(local_10b8,"blitz_ranked");
  FUN_008fce60(local_268,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BLITZ_REVAMP_TITLE",0);
  FUN_00910394(&local_340,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_330,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_330,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00e70c34(&local_330,uVar3);
  local_2f0 = "playmode_blitzreloaded";
  local_2f8 = 0;
  local_2e8 = 2;
  FUN_008fa54c(local_10b8,"blitz_revamp");
  FUN_008fce60(local_310,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  local_2e4 = 0;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_ARAL_TITLE",0);
  FUN_00910394(&local_3e8,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_3d8,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_3d8,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00e70c34(&local_3d8,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_3d8,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_TALENTS_MODE_LABEL",0);
  FUN_00e70c34(&local_3d8,uVar3);
  local_3a0 = 0;
  local_398 = "playmode_aral";
  local_390 = 10;
  FUN_008fa54c(local_10b8,"aral_casual");
  FUN_008fce60(local_3b8,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  local_3f4 = 9;
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00910394(&local_7d8,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_7c8,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_7c8,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_RANKED_TITLE",0);
  FUN_00e70c34(&local_7c8,uVar3);
  local_790 = 0;
  local_788 = "playmode_3v3";
  local_780 = 0x14;
  local_7e4 = 8;
  local_778 = 1;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_SOLOBOTS_TITLE",0);
  FUN_00910394(&local_880,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_SOLOBOTS_SUBTEXT",0);
  FUN_00910394(&local_870,uVar3);
  local_838 = 0;
  local_830 = "playmode_solobots";
  local_820 = 1;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_PRACTICE_TITLE",0);
  FUN_00910394(&local_928,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_PRACTICE_SUBTEXT",0);
  FUN_00910394(&local_918,uVar3);
  local_8e0 = 0;
  local_8d8 = "playmode_practice";
  local_8c8 = 1;
  uVar3 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00910394(&local_bc8,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_bb8,uVar3);
  local_b80 = 0;
  local_b78 = "playmode_5v5_ranked";
  local_b70 = 0x19;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BLITZ_TITLE",0);
  FUN_00910394(&local_c70,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_c60,uVar3);
  local_c28 = 0;
  local_c20 = "playmode_blitz";
  local_c18 = 5;
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00910394(&local_d18,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_d08,uVar3);
  local_cd0 = 0;
  local_cc8 = "playmode_3v3";
  local_cc0 = 0x14;
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00910394(&local_730,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_720,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_720,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_PLAY_MENU_MODE_STANDARD_CASUAL_OPTION_TITLE",0);
  FUN_00e70c34(&local_720,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_00910394(&local_710,uVar3);
  local_6e8 = 0;
  local_73c = 9;
  local_6e0 = "playmode_3v3";
  local_6d8 = 0x14;
  FUN_008fa54c(local_10b8,"casual_3v3");
  FUN_008fce60(local_700,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  local_6d4 = 0;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_RUMBLE_TITLE",0);
  FUN_00910394(&local_490,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_480,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_480,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00e70c34(&local_480,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_00910394(&local_470,uVar3);
  local_448 = 0;
  local_49c = 9;
  local_440 = "playmode_rumble";
  local_438 = 10;
  FUN_008fa54c(local_10b8,"rumble");
  FUN_008fce60(local_460,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  local_434 = 0;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_ONE_FOR_ALL_TITLE",0);
  FUN_00910394(&local_538,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_528,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_528,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00e70c34(&local_528,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_00910394(&local_518,uVar3);
  local_4f0 = 0;
  local_4e8 = "playmode_oneforall";
  local_4e0 = 0x14;
  FUN_008fa54c(local_10b8,"one_for_all");
  FUN_008fce60(local_508,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  local_544 = 9;
  local_4dc = 0;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_PURE_BLITZ_TITLE",0);
  FUN_00910394(&local_688,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_678,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_678,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  FUN_00e70c34(&local_678,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_00910394(&local_668,uVar3);
  local_640 = 0;
  local_638 = "playmode_blitz";
  local_630 = 5;
  FUN_008fa54c(local_10b8,"blitz_pure");
  FUN_008fce60(local_658,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  local_694 = 9;
  local_62c = 0;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_ARAM_TITLE",0);
  FUN_00910394(&local_5e0,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_CAP",0);
  FUN_00910394(&local_5d0,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_DOT_SEPARATOR",0);
  FUN_00e70c34(&local_5d0,uVar3);
  uVar3 = FUN_00e6ce7c("GENERIC_5V5",0);
  FUN_00e70c34(&local_5d0,uVar3);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_EVENT_MODE_LABEL",0);
  FUN_00910394(&local_5c0,uVar3);
  local_598 = 0;
  local_590 = "playmode_aram";
  local_588 = 0xf;
  FUN_008fa54c(local_10b8,"aram");
  FUN_008fce60(local_5b0,local_10b8);
  if ((local_10b8[0] & 1) != 0) {
    operator_delete(local_10a8);
  }
  local_5ec = 9;
  local_584 = 0;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_TUTORIAL_TITLE",0);
  FUN_00910394(&local_9d0,uVar3);
  local_988 = 0;
  local_980 = "PlayMode_Tutorial";
  local_970 = 1;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BOT_DIFFICULTY_VERY_EASY_ITLE",0);
  FUN_00910394(&local_dc0,uVar3);
  FUN_00910394(&local_db0,&DAT_03210450);
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BOT_DIFFICULTY_EASY_ITLE",0);
  FUN_00910394(&local_e68,uVar3);
  FUN_00910394(&local_e58,&DAT_03210450);
  local_e74 = 5;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BOT_DIFFICULTY_MEDIUM_TITLE",0);
  FUN_00910394(&local_f10,uVar3);
  FUN_00910394(&local_f00,&DAT_03210450);
  local_f1c = 5;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BOT_DIFFICULTY_HARD_TITLE",0);
  FUN_00910394(&local_fb8,uVar3);
  FUN_00910394(&local_fa8,&DAT_03210450);
  local_fc4 = 6;
  uVar3 = FUN_00e6ce7c("PLAYMENU_OPTION_BOT_DIFFICULTY_VERY_HARD_TITLE",0);
  FUN_00910394(&local_1060,uVar3);
  FUN_00910394(&local_1050,&DAT_03210450);
  local_106c = 6;
  iVar2 = FUN_0092f28c();
  if (iVar2 == 0) {
    puVar4 = auStack_380;
    puVar5 = auStack_2d8;
    puVar6 = auStack_428;
    puVar7 = auStack_230;
  }
  else {
    puVar4 = auStack_230;
    puVar5 = auStack_380;
    puVar6 = auStack_2d8;
    puVar7 = auStack_428;
  }
  FUN_00a02ef0(auStack_a8,puVar4,puVar5,puVar6,puVar7,0);
  FUN_00a02ef0(auStack_a8,auStack_4d0,auStack_620,auStack_578,auStack_770,auStack_6c8,0);
  FUN_00a02ef0(auStack_a8,auStack_818,auStack_8c0,auStack_968,auStack_a10,0);
  FUN_00a02ef0(auStack_e0,auStack_b60,auStack_ab8,0);
  FUN_00a02ef0(auStack_118,auStack_c08,auStack_cb0,auStack_d58,0);
  FUN_00a02ef0(auStack_150,auStack_e00,auStack_ea8,auStack_f50,auStack_ff8,auStack_10a0,0);
  local_77 = 1;
  thunk_FUN_00a030fc(param_1,auStack_a8);
  thunk_FUN_00a030fc(param_1,auStack_e0);
  thunk_FUN_00a030fc(param_1,auStack_118);
  thunk_FUN_00a030fc(param_1,auStack_150);
  thunk_FUN_00a030fc(param_1,auStack_188);
  FUN_00a051ec(param_1,PTR_s_tutorialLevelGwen_02be3400,0);
  FUN_00a0552c(param_1,PTR_s_tutorialLevelKoshka_02be33f8);
  if ((local_1030 & 1) != 0) {
    operator_delete(local_1020);
  }
  if (local_1038 != (void *)0x0) {
    operator_delete__(local_1038);
    local_1040 = 0;
    local_1038 = (void *)0x0;
  }
  if (local_1048 != (void *)0x0) {
    operator_delete__(local_1048);
    local_1050 = 0;
    local_1048 = (void *)0x0;
  }
  if (local_1058 != (void *)0x0) {
    operator_delete__(local_1058);
    local_1060 = 0;
    local_1058 = (void *)0x0;
  }
  if ((local_1090 & 1) != 0) {
    operator_delete(local_1080);
  }
  if ((local_f88 & 1) != 0) {
    operator_delete(local_f78);
  }
  if (local_f90 != (void *)0x0) {
    operator_delete__(local_f90);
    local_f90 = (void *)0x0;
    local_f98 = 0;
  }
  if (local_fa0 != (void *)0x0) {
    operator_delete__(local_fa0);
    local_fa8 = 0;
    local_fa0 = (void *)0x0;
  }
  if (local_fb0 != (void *)0x0) {
    operator_delete__(local_fb0);
    local_fb8 = 0;
    local_fb0 = (void *)0x0;
  }
  if ((local_fe8 & 1) != 0) {
    operator_delete(local_fd8);
  }
  if ((local_ee0 & 1) != 0) {
    operator_delete(local_ed0);
  }
  if (local_ee8 != (void *)0x0) {
    operator_delete__(local_ee8);
    local_ee8 = (void *)0x0;
    local_ef0 = 0;
  }
  if (local_ef8 != (void *)0x0) {
    operator_delete__(local_ef8);
    local_f00 = 0;
    local_ef8 = (void *)0x0;
  }
  if (local_f08 != (void *)0x0) {
    operator_delete__(local_f08);
    local_f10 = 0;
    local_f08 = (void *)0x0;
  }
  if ((local_f40 & 1) != 0) {
    operator_delete(local_f30);
  }
  if ((local_e38 & 1) != 0) {
    operator_delete(local_e28);
  }
  if (local_e40 != (void *)0x0) {
    operator_delete__(local_e40);
    local_e40 = (void *)0x0;
    local_e48 = 0;
  }
  if (local_e50 != (void *)0x0) {
    operator_delete__(local_e50);
    local_e58 = 0;
    local_e50 = (void *)0x0;
  }
  if (local_e60 != (void *)0x0) {
    operator_delete__(local_e60);
    local_e68 = 0;
    local_e60 = (void *)0x0;
  }
  if ((local_e98 & 1) != 0) {
    operator_delete(local_e88);
  }
  if ((local_d90 & 1) != 0) {
    operator_delete(local_d80);
  }
  if (local_d98 != (void *)0x0) {
    operator_delete__(local_d98);
    local_d98 = (void *)0x0;
    local_da0 = 0;
  }
  if (local_da8 != (void *)0x0) {
    operator_delete__(local_da8);
    local_db0 = 0;
  }
  if (local_db8 != (void *)0x0) {
    operator_delete__(local_db8);
    local_dc0 = 0;
  }
  if ((local_df0 & 1) != 0) {
    operator_delete(local_de0);
  }
  if ((local_ce8 & 1) != 0) {
    operator_delete(local_cd8);
  }
  if (local_cf0 != (void *)0x0) {
    operator_delete__(local_cf0);
    local_cf0 = (void *)0x0;
    local_cf8 = 0;
  }
  if (local_d00 != (void *)0x0) {
    operator_delete__(local_d00);
    local_d08 = 0;
  }
  if (local_d10 != (void *)0x0) {
    operator_delete__(local_d10);
    local_d18 = 0;
  }
  if ((local_d48 & 1) != 0) {
    operator_delete(local_d38);
  }
  if ((local_c40 & 1) != 0) {
    operator_delete(local_c30);
  }
  if (local_c48 != (void *)0x0) {
    operator_delete__(local_c48);
    local_c48 = (void *)0x0;
    local_c50 = 0;
  }
  if (local_c58 != (void *)0x0) {
    operator_delete__(local_c58);
    local_c60 = 0;
  }
  if (local_c68 != (void *)0x0) {
    operator_delete__(local_c68);
    local_c70 = 0;
  }
  if ((local_ca0 & 1) != 0) {
    operator_delete(local_c90);
  }
  if ((local_b98 & 1) != 0) {
    operator_delete(local_b88);
  }
  if (local_ba0 != (void *)0x0) {
    operator_delete__(local_ba0);
    local_ba0 = (void *)0x0;
    local_ba8 = 0;
  }
  if (local_bb0 != (void *)0x0) {
    operator_delete__(local_bb0);
    local_bb8 = 0;
  }
  if (local_bc0 != (void *)0x0) {
    operator_delete__(local_bc0);
    local_bc8 = 0;
  }
  if ((local_bf8 & 1) != 0) {
    operator_delete(local_be8);
  }
  if ((local_af0 & 1) != 0) {
    operator_delete(local_ae0);
  }
  if (local_af8 != (void *)0x0) {
    operator_delete__(local_af8);
    local_af8 = (void *)0x0;
    local_b00 = 0;
  }
  if (local_b08 != (void *)0x0) {
    operator_delete__(local_b08);
    local_b10 = 0;
  }
  if (local_b18 != (void *)0x0) {
    operator_delete__(local_b18);
    local_b20 = 0;
  }
  if ((local_b50 & 1) != 0) {
    operator_delete(local_b40);
  }
  if ((local_a48 & 1) != 0) {
    operator_delete(local_a38);
  }
  if (local_a50 != (void *)0x0) {
    operator_delete__(local_a50);
    local_a50 = (void *)0x0;
    local_a58 = 0;
  }
  if (local_a60 != (void *)0x0) {
    operator_delete__(local_a60);
    local_a68 = 0;
  }
  if (local_a70 != (void *)0x0) {
    operator_delete__(local_a70);
    local_a78 = 0;
  }
  if ((local_aa8 & 1) != 0) {
    operator_delete(local_a98);
  }
  if ((local_9a0 & 1) != 0) {
    operator_delete(local_990);
  }
  if (local_9a8 != (void *)0x0) {
    operator_delete__(local_9a8);
    local_9a8 = (void *)0x0;
    local_9b0 = 0;
  }
  if (local_9b8 != (void *)0x0) {
    operator_delete__(local_9b8);
    local_9b8 = (void *)0x0;
    local_9c0 = 0;
  }
  if (local_9c8 != (void *)0x0) {
    operator_delete__(local_9c8);
    local_9d0 = 0;
  }
  if ((local_a00 & 1) != 0) {
    operator_delete(local_9f0);
  }
  if ((local_8f8 & 1) != 0) {
    operator_delete(local_8e8);
  }
  if (local_900 != (void *)0x0) {
    operator_delete__(local_900);
    local_900 = (void *)0x0;
    local_908 = 0;
  }
  if (local_910 != (void *)0x0) {
    operator_delete__(local_910);
    local_918 = 0;
  }
  if (local_920 != (void *)0x0) {
    operator_delete__(local_920);
    local_928 = 0;
  }
  if ((local_958 & 1) != 0) {
    operator_delete(local_948);
  }
  if ((local_850 & 1) != 0) {
    operator_delete(local_840);
  }
  if (local_858 != (void *)0x0) {
    operator_delete__(local_858);
    local_858 = (void *)0x0;
    local_860 = 0;
  }
  if (local_868 != (void *)0x0) {
    operator_delete__(local_868);
    local_870 = 0;
  }
  if (local_878 != (void *)0x0) {
    operator_delete__(local_878);
    local_880 = 0;
  }
  if ((local_8b0 & 1) != 0) {
    operator_delete(local_8a0);
  }
  if ((local_7a8 & 1) != 0) {
    operator_delete(local_798);
  }
  if (local_7b0 != (void *)0x0) {
    operator_delete__(local_7b0);
    local_7b0 = (void *)0x0;
    local_7b8 = 0;
  }
  if (local_7c0 != (void *)0x0) {
    operator_delete__(local_7c0);
    local_7c8 = 0;
  }
  if (local_7d0 != (void *)0x0) {
    operator_delete__(local_7d0);
    local_7d8 = 0;
  }
  if ((local_808 & 1) != 0) {
    operator_delete(local_7f8);
  }
  if ((local_700[0] & 1) != 0) {
    operator_delete(local_6f0);
  }
  if (local_708 != (void *)0x0) {
    operator_delete__(local_708);
    local_710 = 0;
  }
  if (local_718 != (void *)0x0) {
    operator_delete__(local_718);
    local_720 = 0;
  }
  if (local_728 != (void *)0x0) {
    operator_delete__(local_728);
    local_730 = 0;
  }
  if ((local_760 & 1) != 0) {
    operator_delete(local_750);
  }
  if ((local_658[0] & 1) != 0) {
    operator_delete(local_648);
  }
  if (local_660 != (void *)0x0) {
    operator_delete__(local_660);
    local_668 = 0;
  }
  if (local_670 != (void *)0x0) {
    operator_delete__(local_670);
    local_678 = 0;
  }
  if (local_680 != (void *)0x0) {
    operator_delete__(local_680);
    local_688 = 0;
  }
  if ((local_6b8 & 1) != 0) {
    operator_delete(local_6a8);
  }
  if ((local_5b0[0] & 1) != 0) {
    operator_delete(local_5a0);
  }
  if (local_5b8 != (void *)0x0) {
    operator_delete__(local_5b8);
    local_5c0 = 0;
  }
  if (local_5c8 != (void *)0x0) {
    operator_delete__(local_5c8);
    local_5d0 = 0;
  }
  if (local_5d8 != (void *)0x0) {
    operator_delete__(local_5d8);
    local_5e0 = 0;
  }
  if ((local_610 & 1) != 0) {
    operator_delete(local_600);
  }
  if ((local_508[0] & 1) != 0) {
    operator_delete(local_4f8);
  }
  if (local_510 != (void *)0x0) {
    operator_delete__(local_510);
    local_518 = 0;
  }
  if (local_520 != (void *)0x0) {
    operator_delete__(local_520);
    local_528 = 0;
  }
  if (local_530 != (void *)0x0) {
    operator_delete__(local_530);
    local_538 = 0;
  }
  if ((local_568 & 1) != 0) {
    operator_delete(local_558);
  }
  if ((local_460[0] & 1) != 0) {
    operator_delete(local_450);
  }
  if (local_468 != (void *)0x0) {
    operator_delete__(local_468);
    local_470 = 0;
  }
  if (local_478 != (void *)0x0) {
    operator_delete__(local_478);
    local_480 = 0;
  }
  if (local_488 != (void *)0x0) {
    operator_delete__(local_488);
    local_490 = 0;
  }
  if ((local_4c0 & 1) != 0) {
    operator_delete(local_4b0);
  }
  if ((local_3b8[0] & 1) != 0) {
    operator_delete(local_3a8);
  }
  if (local_3c0 != (void *)0x0) {
    operator_delete__(local_3c0);
    local_3c0 = (void *)0x0;
    local_3c8 = 0;
  }
  if (local_3d0 != (void *)0x0) {
    operator_delete__(local_3d0);
    local_3d8 = 0;
  }
  if (local_3e0 != (void *)0x0) {
    operator_delete__(local_3e0);
    local_3e8 = 0;
  }
  if ((local_418 & 1) != 0) {
    operator_delete(local_408);
  }
  if ((local_310[0] & 1) != 0) {
    operator_delete(local_300);
  }
  if (local_318 != (void *)0x0) {
    operator_delete__(local_318);
    local_318 = (void *)0x0;
    local_320 = 0;
  }
  if (local_328 != (void *)0x0) {
    operator_delete__(local_328);
    local_330 = 0;
  }
  if (local_338 != (void *)0x0) {
    operator_delete__(local_338);
    local_340 = 0;
  }
  if ((local_370 & 1) != 0) {
    operator_delete(local_360);
  }
  if ((local_268[0] & 1) != 0) {
    operator_delete(local_258);
  }
  if (local_270 != (void *)0x0) {
    operator_delete__(local_270);
    local_270 = (void *)0x0;
    local_278 = 0;
  }
  if (local_280 != (void *)0x0) {
    operator_delete__(local_280);
    local_288 = 0;
  }
  if (local_290 != (void *)0x0) {
    operator_delete__(local_290);
    local_298 = 0;
  }
  if ((local_2c8 & 1) != 0) {
    operator_delete(local_2b8);
  }
  if ((local_1c0 & 1) != 0) {
    operator_delete(local_1b0);
  }
  if (local_1c8 != (void *)0x0) {
    operator_delete__(local_1c8);
    local_1c8 = (void *)0x0;
    local_1d0 = 0;
  }
  if (local_1d8 != (void *)0x0) {
    operator_delete__(local_1d8);
    local_1e0 = 0;
  }
  if (local_1e8 != (void *)0x0) {
    operator_delete__(local_1e8);
    local_1f0 = 0;
  }
  if ((local_220 & 1) != 0) {
    operator_delete(local_210);
  }
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
    local_160 = (void *)0x0;
    local_168 = 0;
  }
  FUN_00a036a8(auStack_180,1);
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_128 = (void *)0x0;
    local_130 = 0;
  }
  FUN_00a036a8(auStack_148,1);
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f0 = (void *)0x0;
    local_f8 = 0;
  }
  FUN_00a036a8(auStack_110,1);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  FUN_00a036a8(auStack_d8,1);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00a036a8(auStack_a0,1);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

