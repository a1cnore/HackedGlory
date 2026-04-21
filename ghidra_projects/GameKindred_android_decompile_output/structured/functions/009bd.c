// functions/009bd — 38 functions
#include "libGameKindred.h"




void FUN_009bd010(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2a8) = param_2;
  FUN_009bd04c(param_1 + 0x38,0,0,0);
  FUN_009bd184(param_1 + 0x128,0);
  return;
}




void FUN_009bd04c(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_009bd094;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009bd094:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009bd100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009bd184(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar3 = *(ushort *)(param_1 + 0x5e);
  if ((uVar3 & 0x7c00) != 0) {
    uVar4 = 0;
    piVar6 = param_1 + 4;
    do {
      if (*piVar6 == param_2) goto LAB_009bd1cc;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 0x16;
    } while (uVar4 < (uVar3 >> 10 & 0x1f));
  }
  uVar4 = 0x1f;
LAB_009bd1cc:
  uVar1 = uVar3 & 0x1f;
  uVar5 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar3 = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    *(ushort *)(param_1 + 0x5e) = uVar3;
  }
  else {
    if (uVar4 == uVar1) {
      return;
    }
    if ((param_1[uVar5 * 0x16 + 0x18] & 1 << (ulong)(uVar4 & 0x1f)) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x5e) = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar5 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar5 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar5 * 0x16 + 0x10),uVar2);
    uVar3 = *(ushort *)(param_1 + 0x5e);
  }
  uVar4 = uVar4 & 0x1f;
  *(ushort *)(param_1 + 0x5e) = (ushort)uVar4 | uVar3 & 0xfc00 | 0x3e0;
  if (uVar4 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x009bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar4 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 0xc),uVar2);
  return;
}




void FUN_009bd2b0(void)

{
  FUN_00ce211c();
  FUN_019889f0(DAT_02c09220);
  FUN_019889f0(DAT_0312e88c);
  FUN_019889f0(DAT_02e3ef88);
  FUN_019889f0(DAT_0312edd0);
  FUN_019889f0(DAT_0312ee10);
  FUN_019889f0(DAT_0312ebb0);
  FUN_019889f0(DAT_0312ebc0);
  FUN_019889f0(DAT_0312ee20);
  return;
}




void FUN_009bd320(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x38) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x40) == 1)) {
    FUN_009bd184(param_1 + 0x128,0);
    FUN_009426bc();
    return;
  }
  return;
}




void FUN_009bd368(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x38) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x40) == 1)) {
    FUN_009426bc();
  }
  FUN_009426d0();
  return;
}




void FUN_009bd3a4(void)

{
  return;
}




void FUN_009bd3a8(long param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  ulong uVar2;
  
  *(char *)(param_1 + 0x2c4) = param_2;
  *(undefined4 *)(param_1 + 0x2b8) = param_3;
  uVar2 = FUN_00ceab64();
  if ((uVar2 & 1) == 0) {
    FUN_00ceace8();
    uVar2 = FUN_00ceae90();
    if ((uVar2 & 1) == 0) {
      FUN_00ceace8();
      uVar2 = FUN_00ceae88();
      if ((uVar2 & 1) == 0) {
        FUN_00cedce4();
        FUN_00d9e390();
        cVar1 = FUN_00d55870();
        if (cVar1 != param_2) {
          FUN_008fa3d0();
          goto LAB_009bd400;
        }
      }
    }
  }
  FUN_008fa36c();
LAB_009bd400:
  FUN_009bd04c(param_1 + 0x38,2,0,0);
  FUN_009bd184(param_1 + 0x128,3);
  return;
}




void FUN_009bd430(undefined4 param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_009bd184(param_2 + 0x128,2);
  FUN_00cead10(param_3);
  FUN_00cead30();
  FUN_009188a4();
  FUN_0091a50c();
  FUN_0091b248();
  *(undefined4 *)(param_2 + 700) = param_1;
  FUN_008fcdb8(local_60,&DAT_0320ffa8);
  FUN_008fcdb8(local_78,&DAT_0320ffa8);
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00e829e0();
    FUN_008fce60(local_60,lVar3 + 0xa8);
    FUN_00e81200(local_78);
  }
  uVar4 = FUN_00ceace8();
  FUN_008ffe10(uVar4,local_60);
  FUN_00ceace8();
  if ((param_4 & 1) == 0) {
    FUN_009016b4();
  }
  else {
    FUN_009018a4();
  }
  uVar2 = FUN_0094276c();
  if ((uVar2 & 1) == 0) {
    FUN_00923da4(local_78,local_60);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bd54c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x38) & 0x1f;
  if (((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x40) == 0)) &&
     ((uVar2 = FUN_00ceab64(), (uVar2 & 1) == 0 || ((*(byte *)(param_1 + 0x2c5) >> 1 & 1) != 0)))) {
    FUN_009bd04c((ushort *)(param_1 + 0x38),1,0,0);
  }
  *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) | 0x400;
  return;
}




void FUN_009bd5c0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 700) = param_1;
  return;
}




undefined8 FUN_009bd5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}




void FUN_009bd5d0(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009bd610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009bd618(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x5e) & 0x1f;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x009bd65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 6),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 8),uVar2);
  return;
}




bool FUN_009bd660(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x38) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x40) == 1;
  }
  return bVar2;
}




bool FUN_009bd694(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x38) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x40) == 2;
  }
  return bVar2;
}




bool FUN_009bd6c8(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x38) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x40) == 3;
  }
  return bVar2;
}




void FUN_009bd6fc(long param_1)

{
  thunk_FUN_0091b34c();
  FUN_009bd734(param_1);
  FUN_009bd04c(param_1 + 0x38,3,0,0);
  return;
}




void FUN_009bd734(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  
  FUN_00ceace8();
  uVar3 = FUN_00ceaf14();
  if (((uVar3 & 1) != 0) && (fVar4 = (float)FUN_00ceadbc(), 0.0 <= fVar4)) {
    FUN_00ceace8();
    uVar3 = FUN_00ceae88();
    if (((uVar3 & 1) == 0) &&
       (cVar1 = *(char *)(param_1 + 0x2c4), cVar2 = FUN_00cedf10(), cVar1 == cVar2)) {
      FUN_00ceadbc();
      FUN_0093c14c();
      return;
    }
  }
  return;
}




void FUN_009bd794(long param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x2a0) & 0x1f;
  if ((param_2 & 1) == 0) {
    if (uVar1 == 0x1f) {
      return;
    }
    if (1 < *(int *)(param_1 + (ulong)uVar1 * 0x58 + 0x138) - 1U) {
      return;
    }
    FUN_009bd04c(param_1 + 0x38,0,0,0);
    uVar2 = 0;
  }
  else {
    if ((uVar1 == 0x1f) || (*(int *)(param_1 + (ulong)uVar1 * 0x58 + 0x138) != 0)) {
      return;
    }
    uVar2 = 1;
  }
  FUN_009bd184(param_1 + 0x128,uVar2);
  return;
}




void FUN_009bd82c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(ushort *)(param_1 + 0x2c4) >> 9 & 1) == 0) {
    FUN_00cedd7c();
    lVar1 = FUN_00d9e390();
    if (lVar1 != 0) {
      FUN_009b6c70(*(undefined8 *)(param_1 + 0x2b0));
      lVar2 = *(long *)(param_1 + 0x2b0);
      FUN_009b8274(*(undefined4 *)(lVar2 + 0x70),*(undefined4 *)(lVar2 + 0x74),
                   *(undefined4 *)(lVar2 + 0x78),lVar2,lVar1,1);
      FUN_00ceab88(*(undefined4 *)(lVar1 + 0x260));
      *(ushort *)(param_1 + 0x2c4) = *(ushort *)(param_1 + 0x2c4) | 0x200;
      FUN_00927678();
      FUN_00904fb8();
      return;
    }
  }
  else if ((*(ushort *)(param_1 + 0x2c4) >> 10 & 1) != 0) {
    FUN_009bd04c(param_1 + 0x38,1,0,0);
    return;
  }
  return;
}




void FUN_009bd8c4(long param_1,int param_2,uint param_3)

{
  long lVar1;
  
  if ((param_2 != -1) && (lVar1 = FUN_00d9e390(param_2), lVar1 != 0)) {
    FUN_009b8274((undefined4)DAT_03218f30,DAT_03218f30._4_4_,DAT_03218f38,
                 *(undefined8 *)(param_1 + 0x2b0),lVar1,param_3 & 1);
    FUN_009b850c(*(undefined8 *)(param_1 + 0x2b0));
    FUN_00ceab88(param_2);
    return;
  }
  return;
}




void FUN_009bd94c(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = FUN_00ceab64();
  if ((uVar5 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x260);
    iVar3 = FUN_00cedce4();
    if (iVar1 == iVar3) {
      FUN_009b6c70(*(undefined8 *)(DAT_0312ede8 + 0x2b0));
      lVar7 = *(long *)(DAT_0312ede8 + 0x2b0);
      FUN_009b8274(*(undefined4 *)(lVar7 + 0x70),*(undefined4 *)(lVar7 + 0x74),
                   *(undefined4 *)(lVar7 + 0x78),lVar7,param_1,1);
      FUN_019889f0(DAT_02e3ef68);
      uVar6 = FUN_01985d44(param_1,DAT_02e3ef68);
      FUN_00a13f5c(*(undefined4 *)(DAT_0312ede8 + 700),uVar6,param_1);
      uVar4 = FUN_0094276c();
      FUN_00a144fc(uVar6,uVar4 & 1);
      uVar4 = *(ushort *)(DAT_0312ede8 + 0x38) & 0x1f;
      if ((uVar4 == 0x1f) || (*(short *)(DAT_0312ede8 + (ulong)uVar4 * 0x38 + 0x40) != 1)) {
        FUN_009bd04c((ushort *)(DAT_0312ede8 + 0x38),0,0,0);
      }
      lVar7 = DAT_0312ede8;
      uVar4 = FUN_00d55870(param_1);
      FUN_00934f50(1);
      FUN_00934ef8(uVar4);
      *(int *)(lVar7 + 0x2c0) = 1 << (ulong)(uVar4 & 0x1f);
    }
    else {
      FUN_00cedce4();
      lVar7 = FUN_00d9e390();
      if (lVar7 != 0) {
        for (lVar7 = *(long *)(lVar7 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
          if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02e3ef68) {
            FUN_00a14cc0();
            return;
          }
        }
      }
    }
  }
  else {
    for (lVar7 = *(long *)(DAT_0312ede8 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_0312ee00) goto LAB_009bd9ac;
    }
    lVar7 = FUN_01985d44(DAT_0312ede8);
    FUN_00a18d74();
LAB_009bd9ac:
    lVar2 = DAT_0312ede8;
    FUN_00934f50(1);
    FUN_00934f20();
    *(undefined4 *)(lVar2 + 0x2c0) = 0xfffffffe;
    if ((param_1 != 0) && ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0)) {
      FUN_00a18db8(lVar7,param_1);
      return;
    }
  }
  return;
}




void FUN_009bdb28(long param_1)

{
  FUN_00934f50(1);
  FUN_00934f20();
  *(undefined4 *)(param_1 + 0x2c0) = 0xfffffffe;
  return;
}




void FUN_009bdb58(long param_1,uint param_2)

{
  FUN_00934f50(1);
  FUN_00934ef8(param_2);
  *(int *)(param_1 + 0x2c0) = 1 << (ulong)(param_2 & 0x1f);
  return;
}




bool FUN_009bdba0(long param_1)

{
  return *(long *)(param_1 + 0x2b0) != 0;
}




void FUN_009bdbb0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab64();
  if ((uVar1 & 1) == 0) {
    FUN_00cedce4();
    lVar2 = FUN_00d9e390();
    if (lVar2 != 0) {
      FUN_00d5e334(lVar2,param_2);
      return;
    }
  }
  else {
    for (lVar2 = *(long *)(DAT_0312ede8 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ee00) {
        FUN_00a18dc0(lVar2,param_2);
        return;
      }
    }
  }
  return;
}




void FUN_009bdc34(void)

{
  long lVar1;
  long lVar2;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef68) {
        FUN_019888f4();
        break;
      }
    }
  }
  for (lVar2 = *(long *)(DAT_0312ede8 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ee00) goto LAB_009bdcc4;
  }
  lVar2 = FUN_01985d44(DAT_0312ede8,DAT_0312ee00);
  FUN_00a18d74();
LAB_009bdcc4:
  FUN_00a18db8(lVar2,lVar1);
  return;
}




bool FUN_009bdcd8(long param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x2c0) & 1 << (ulong)(param_2 & 0x1f)) != 0;
}




void FUN_009bdcf4(long param_1)

{
  FUN_00934f50(0);
  *(undefined4 *)(param_1 + 0x2c0) = 0xffffffff;
  return;
}




void thunk_FUN_009bdc34(void)

{
  long lVar1;
  long lVar2;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_02e3ef68) {
        FUN_019888f4();
        break;
      }
    }
  }
  for (lVar2 = *(long *)(DAT_0312ede8 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ee00) goto LAB_009bdcc4;
  }
  lVar2 = FUN_01985d44(DAT_0312ede8,DAT_0312ee00);
  FUN_00a18d74();
LAB_009bdcc4:
  FUN_00a18db8(lVar2,lVar1);
  return;
}




long FUN_009bdd24(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009bdd2c(long param_1)

{
  return param_1 + -0x28;
}




void FUN_009bdd34(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1 + ((long)param_3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x009bdd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




undefined8 FUN_009bdd58(undefined8 param_1)

{
  FUN_009bc278();
  return param_1;
}




void FUN_009bdd7c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bdd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009bdd88(long param_1)

{
  long lVar1;
  
  DAT_0312eb00 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb00 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb00 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009be6dc;
  *(code **)(lVar1 + 0xb8) = FUN_009be71c;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb00;
  *(undefined4 *)(lVar1 + 0xa8) = 0x90;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_009bdde8(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint uVar18;
  undefined8 local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar16 = *(undefined8 **)(param_2 + 0x58);
  puVar7 = (undefined8 *)*puVar16;
  if (puVar7 != (undefined8 *)0x0) {
    puVar1 = (uint *)(param_1 + 0x30);
    do {
      pbVar12 = (byte *)*puVar7;
      if (pbVar12 == (byte *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        if (*pbVar12 != 0) {
          uVar18 = 0x811c9dc5;
          uVar8 = (uint)*pbVar12;
          do {
            pbVar12 = pbVar12 + 1;
            uVar18 = (uVar18 ^ uVar8) * 0x1000193;
            uVar8 = (uint)*pbVar12;
          } while (*pbVar12 != 0);
        }
      }
      pbVar12 = (byte *)puVar7[1];
      if (pbVar12 == (byte *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x811c9dc5;
        if (*pbVar12 != 0) {
          uVar8 = 0x811c9dc5;
          uVar9 = (uint)*pbVar12;
          do {
            pbVar12 = pbVar12 + 1;
            uVar8 = (uVar8 ^ uVar9) * 0x1000193;
            uVar9 = (uint)*pbVar12;
          } while (*pbVar12 != 0);
        }
      }
      local_80 = CONCAT44(local_80._4_4_,uVar8);
      uVar9 = *(uint *)(param_1 + 0x30);
      uVar8 = *(int *)(param_1 + 0x40) + 1;
      *(uint *)(param_1 + 0x40) = uVar8;
      if (uVar9 >> 1 < uVar8) {
        local_78 = 0;
        local_70 = (void *)0x0;
        FUN_009348c8(&local_78,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
        uVar8 = *puVar1;
        uVar11 = uVar8 - 1;
        uVar9 = (uint)local_78;
        if ((int)uVar11 < 0) {
          pvVar6 = *(void **)(param_1 + 0x38);
        }
        else {
          pvVar6 = *(void **)(param_1 + 0x38);
          do {
            iVar5 = *(int *)((long)pvVar6 + (ulong)uVar11 * 8 + 4);
            if (iVar5 != -1) {
              uVar8 = *(uint *)((long)pvVar6 + (ulong)uVar11 * 8);
              uVar3 = 0;
              if ((uint)local_78 != 0) {
                uVar3 = uVar8 / (uint)local_78;
              }
              uVar13 = (ulong)(uVar8 - uVar3 * (uint)local_78);
              piVar14 = (int *)((long)local_70 + uVar13 * 8 + 4);
              iVar2 = *piVar14;
              while (iVar2 != -1) {
                uVar3 = (uint)local_78;
                if (0 < (int)(uint)uVar13) {
                  uVar3 = (uint)uVar13;
                }
                uVar13 = (ulong)(uVar3 - 1);
                piVar14 = (int *)((long)local_70 + uVar13 * 8 + 4);
                iVar2 = *piVar14;
              }
              *(uint *)((long)local_70 + uVar13 * 8) = uVar8;
              *piVar14 = iVar5;
            }
            uVar11 = uVar11 - 1;
          } while (-1 < (int)uVar11);
          uVar8 = *puVar1;
        }
        *(undefined8 *)(param_1 + 0x30) = local_78;
        local_78 = CONCAT44(*(undefined4 *)(param_1 + 0x34),uVar8);
        *(void **)(param_1 + 0x38) = local_70;
        if (pvVar6 == (void *)0x0) {
          local_70 = (void *)0x0;
        }
        else {
          local_70 = pvVar6;
          operator_delete__(pvVar6);
          local_78 = 0;
          local_70 = (void *)0x0;
          uVar9 = *puVar1;
        }
      }
      lVar10 = *(long *)(param_1 + 0x38);
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar18 / uVar9;
      }
      uVar13 = (ulong)(uVar18 - uVar8 * uVar9);
      piVar14 = (int *)(lVar10 + uVar13 * 8 + 4);
      iVar5 = *piVar14;
      while (iVar5 != -1) {
        uVar8 = uVar9;
        if (0 < (int)(uint)uVar13) {
          uVar8 = (uint)uVar13;
        }
        uVar13 = (ulong)(uVar8 - 1);
        piVar14 = (int *)(lVar10 + uVar13 * 8 + 4);
        iVar5 = *piVar14;
      }
      *(uint *)(lVar10 + uVar13 * 8) = uVar18;
      iVar5 = FUN_009be728(puVar1,&local_80);
      *piVar14 = iVar5;
      puVar16 = puVar16 + 1;
      puVar7 = (undefined8 *)*puVar16;
    } while (puVar7 != (undefined8 *)0x0);
  }
  plVar17 = *(long **)(param_2 + 0x60);
  if (*plVar17 != 0) {
    do {
      local_78 = *(undefined8 *)*plVar17;
      local_80 = *(undefined8 *)(*plVar17 + 8);
      FUN_009be1c8(param_1 + 0x60,&local_78,&local_80);
      plVar17 = plVar17 + 1;
    } while (*plVar17 != 0);
  }
  if (param_2 != param_3) {
    puVar7 = *(undefined8 **)(param_3 + 0x58);
    puVar16 = (undefined8 *)*puVar7;
    while (puVar16 != (undefined8 *)0x0) {
      pbVar12 = (byte *)*puVar16;
      if (pbVar12 == (byte *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        if (*pbVar12 != 0) {
          uVar18 = 0x811c9dc5;
          uVar8 = (uint)*pbVar12;
          do {
            pbVar12 = pbVar12 + 1;
            uVar18 = (uVar18 ^ uVar8) * 0x1000193;
            uVar8 = (uint)*pbVar12;
          } while (*pbVar12 != 0);
        }
      }
      pbVar12 = (byte *)puVar16[1];
      if (pbVar12 == (byte *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x811c9dc5;
        if (*pbVar12 != 0) {
          uVar8 = 0x811c9dc5;
          uVar9 = (uint)*pbVar12;
          do {
            pbVar12 = pbVar12 + 1;
            uVar8 = (uVar8 ^ uVar9) * 0x1000193;
            uVar9 = (uint)*pbVar12;
          } while (*pbVar12 != 0);
        }
      }
      uVar9 = *(uint *)(param_1 + 0x30);
      if (uVar9 == 0) {
LAB_009be144:
        uVar18 = 0xffffffff;
      }
      else {
        lVar10 = *(long *)(param_1 + 0x38);
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar18 / uVar9;
        }
        uVar11 = uVar18 - uVar11 * uVar9;
        while ((*(uint *)(lVar10 + (ulong)uVar11 * 8) != uVar18 &&
               (*(int *)(lVar10 + (ulong)uVar11 * 8 + 4) != -1))) {
          uVar3 = uVar9;
          if (0 < (int)uVar11) {
            uVar3 = uVar11;
          }
          uVar11 = uVar3 - 1;
        }
        if (uVar11 == 0xffffffff) goto LAB_009be144;
        uVar18 = *(uint *)(lVar10 + (ulong)uVar11 * 8 + 4);
      }
      *(uint *)(*(long *)(param_1 + 0x50) + (ulong)uVar18 * 4) = uVar8;
      puVar7 = puVar7 + 1;
      puVar16 = (undefined8 *)*puVar7;
    }
    plVar17 = *(long **)(param_3 + 0x60);
    if (*plVar17 != 0) {
      do {
        local_78 = *(undefined8 *)*plVar17;
        uVar15 = *(undefined8 *)(*plVar17 + 8);
        puVar7 = (undefined8 *)FUN_009bea5c(param_1 + 0x60,&local_78);
        *puVar7 = uVar15;
        plVar17 = plVar17 + 1;
      } while (*plVar17 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

