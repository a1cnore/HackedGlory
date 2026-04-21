// functions/10002 — 518 functions
#include "GameKindred.h"




undefined4 FUN_10002005c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




void FUN_100020064(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x58) = param_1;
  *(undefined4 *)(param_3 + 0x5c) = param_2;
  return;
}




void FUN_100020070(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x58) = param_1;
  *(undefined4 *)(param_2 + 0x5c) = param_1;
  return;
}




void FUN_10002007c(void)

{
  return;
}




void FUN_100020080(void)

{
  return;
}




void FUN_100020084(void)

{
  return;
}




void FUN_100020088(void)

{
  return;
}




void FUN_10002008c(void)

{
  return;
}




void FUN_100020090(void)

{
  return;
}




void FUN_100020094(void)

{
  return;
}




void FUN_100020098(void)

{
  return;
}




void FUN_10002009c(void)

{
  return;
}




void FUN_1000200a0(long param_1)

{
  long lVar1;
  
  if ((*(uint *)(param_1 + 0x84) & 1) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 1;
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
      if ((*(byte *)(lVar1 + 0x84) & 1) == 0) {
        FUN_1000200a0(lVar1);
      }
    }
  }
  return;
}




void FUN_1000200ec(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000200f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000200fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




char * FUN_100020110(void)

{
  return "";
}




void FUN_10002011c(void)

{
  if ((DAT_10184dc50 & 1) == 0) {
    DAT_10184dc48 = DAT_101872e38;
    DAT_10184dc50 = 1;
  }
  return;
}




void FUN_100020148(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_100020174(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000201a0(void)

{
  DAT_101dc23a4 = 0xff;
  DAT_101dc23a6 = 0xffff;
  DAT_101dc23a8 = 0xffff;
  DAT_101dc23aa = 0xffbc9c44;
  DAT_101dc23ae = 0xff1166f2;
  DAT_101dc23b2 = 0xffe0e0e0;
  DAT_101dc23b6 = 0xffa0a0a0;
  DAT_101dc23ba = 0xff8c8c8c;
  DAT_101dc23be = 0xff322213;
  DAT_101dc23c2 = 0xff091911;
  DAT_101dc23c6 = 0xff170c19;
  DAT_101dc23ca = 0xff241a14;
  DAT_101dc23ce = 0xff14171c;
  DAT_101dc23d2 = 0xff221911;
  DAT_101dc23d6 = 0xff1a1416;
  DAT_101dc23da = 0xff121414;
  DAT_101dc23de = 0xff1a1809;
  DAT_101dc23e2 = 0xff141414;
  DAT_101dc23e6 = 0xff141414;
  DAT_101dc23ea = 0xff2929c0;
  DAT_101dc23ee = 0xff283082;
  DAT_101dc23f2 = 0xff5262cc;
  DAT_101dc23f6 = 0xff283082;
  DAT_101dc23fa = 0xff5262cc;
  DAT_101dc23fe = 0xff745c42;
  DAT_101dc2402 = 0xff184155;
  DAT_101dc2406 = 0xff92665e;
  DAT_101dc240a = 0xffbc9c44;
  DAT_101dc240e = 0xffbbae56;
  DAT_101dc2412 = 0xff8b7b01;
  DAT_101dc2416 = 0xff90b3ef;
  DAT_101dc241a = 0xff728ebe;
  DAT_101dc241e = 0xff19459d;
  DAT_101dc2422 = 0xff9d877b;
  DAT_101dc2426 = 0xffcbb1a3;
  DAT_101dc242a = 0xff3f6fb5;
  DAT_101dc242e = 0xffc5c5c5;
  DAT_101dc2432 = 0xff4fc1f1;
  DAT_101dc2436 = 0xff606060;
  DAT_101dc243a = 0xffc5ff7b;
  DAT_101dc243e = 0xff5271eb;
  DAT_101dc2442 = 0xfffae076;
  DAT_101dc2446 = 0xff3ac8f6;
  DAT_101dc244a = 0xffaaaaaa;
  DAT_101dc244e = 0xffe19400;
  DAT_101dc2452 = 0xffe19400;
  DAT_101dc2456 = 0xffe550b2;
  DAT_101dc245a = 0xfff22ae8;
  DAT_101dc245e = 0xff005ae1;
  DAT_101dc2462 = 0xff1addfa;
  DAT_101dc2466 = 0xff2424b3;
  DAT_101dc246a = 0xff2424b3;
  DAT_101dc246e = 0xff646464;
  DAT_101dc2472 = 0xff92665e;
  DAT_101dc2476 = 0xff646037;
  DAT_101dc2480 = 0xff1111a1;
  DAT_101dc2484 = 0xff321ee1;
  DAT_101dc2488 = 0xffc8c8c8;
  DAT_101dc248c = 0xff321ee1;
  DAT_101dc2498 = 0xff6259b3;
  DAT_101dc249c = 0xff506e73;
  DAT_101dc24a0 = 0xff9dbf86;
  DAT_101dc247c = 0xffffffff;
  DAT_101dc24a4 = 0xffa35244;
  DAT_101dc2490 = 0xff7fe801;
  DAT_101dc24a8 = 0xffca828e;
  DAT_101dc2494 = 0xffffffff;
  DAT_101dc24ac = 0xffa6a6a6;
  DAT_101dc24b0 = 0xffa6a6a6;
  DAT_101dc24b4 = 0xffffffff;
  DAT_101dc24b8 = 0xff88ea2f;
  DAT_101dc24bc = 0xff8c8c8c;
  DAT_101dc24c0 = 0xffffb400;
  DAT_101dc24c4 = 0xffff00ff;
  DAT_101dc24c8 = 0xff00aded;
  DAT_101dc24cc = 0xff33d3ff;
  DAT_101dc24d0 = 0xff7fe801;
  DAT_101dc24d4 = 0xff282828;
  DAT_101dc24d8 = 0xfff0f0f0;
  DAT_101dc24dc = 0xffa4781e;
  DAT_101dc24e0 = 0xffa6654b;
  DAT_101dc24e4 = 0xff93435b;
  DAT_101dc24e8 = 0xff387f9c;
  DAT_101dc24ec = 0xffa3781e;
  DAT_101dc24f0 = 0xffffd18a;
  DAT_101dc24f4 = 0xffff61f7;
  DAT_101dc24f8 = 0xff5de1f2;
  DAT_101dc24fc = 0xff80eaff;
  DAT_101dc2500 = 0xff32e00e;
  DAT_101dc2504 = 0xff5a3c10;
  DAT_101dc2508 = 0xff330b03;
  DAT_101dc250c = 0xff33031d;
  DAT_101dc2510 = 0xff032433;
  DAT_101dc2514 = 0xff9e8e8d;
  DAT_101dc2518 = 0xff00c800;
  DAT_101dc251c = 0xff0042ff;
  DAT_101dc2520 = 0xff0042ff;
  DAT_101dc2524 = 0xffffac00;
  DAT_101dc2528 = 0xffdcdcdc;
  DAT_101dc252c = 0xff40b4ff;
  DAT_101dc2530 = 0xff2daaff;
  DAT_101dc2534 = 0xffb3c930;
  DAT_101dc2538 = 0xff3865ca;
  DAT_101dc253c = 0xffe6e6e6;
  DAT_101dc2540 = DAT_101872b90;
  DAT_101dc2541 = DAT_101872b90;
  DAT_101dc2542 = DAT_101872b90;
  return;
}




undefined4 FUN_100020938(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_50 [52];
  undefined4 local_1c;
  
  if ((DAT_101dc25d8 & 1) == 0) {
    iVar1 = ___cxa_guard_acquire(&DAT_101dc25d8);
    if (iVar1 != 0) {
      DAT_101dc25d0 = 0x3e3270a0;
      ___cxa_guard_release(&DAT_101dc25d8);
    }
  }
  FUN_1003ab468(param_1,&DAT_101dc25d0,auStack_50);
  return local_1c;
}




long * FUN_1000209b8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_1010a0298(param_1,DAT_10184db58);
  uVar3 = FUN_100465e48(param_1);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2,uVar3);
  plVar1 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 5;
  }
  return plVar1;
}




void FUN_100020a1c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_100020a1c_10144b2d0;
  param_1[5] = &PTR_FUN_10144b4a0;
  param_1[6] = &PTR_FUN_10144b640;
  if (param_1[10] != 0) {
    pvVar1 = (void *)thunk_FUN_1010af6a0();
    operator_delete(pvVar1);
    param_1[10] = 0;
  }
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_100020a1c(void)

{
  FUN_100020a1c();
  return;
}




void FUN_100020a6c(long param_1)

{
  FUN_100020a1c(param_1 + -0x28);
  return;
}




void FUN_100020a74(long param_1)

{
  FUN_100020a1c(param_1 + -0x30);
  return;
}




void FUN_100020a7c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100020a1c();
  operator_delete(pvVar1);
  return;
}




void FUN_100020a90(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100020a1c(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100020aa8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100020a1c(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_100020ac0(long param_1)

{
  long lVar1;
  
  DAT_10184db58 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184db58 + 1;
  lVar1 = param_1 + (ulong)DAT_10184db58 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000267a8;
  *(code **)(lVar1 + 0xb8) = FUN_100026810;
  *(uint *)(lVar1 + 0xa4) = DAT_10184db58;
  *(undefined4 *)(lVar1 + 0xa8) = 0xa8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_100020ccc,0);
  FUN_1010a0990(param_1,0x11a60336,FUN_100020d94,0);
  FUN_1010a0990(param_1,0x243804e0,thunk_FUN_100025838,0);
  FUN_1010a0990(param_1,0x1f1b047c,thunk_FUN_100025a1c,0);
  FUN_1010a0990(param_1,0xb0d0275,FUN_100020dc8,0);
  FUN_1010a0990(param_1,0xdc302c4,thunk_FUN_100025b9c,0);
  FUN_1010a0990(param_1,0x163803be,thunk_FUN_100025c74,0);
  FUN_1010a0990(param_1,0x22ef04a2,FUN_100020e04,0);
  FUN_1010a0990(param_1,0x22450493,FUN_100020e40,0);
  FUN_1010a0990(param_1,0x828f09a8,thunk_FUN_100026040,0);
  FUN_1010a0990(param_1,0x3be20659,FUN_100020e78,0);
  FUN_1010a0990(param_1,0x36de0632,FUN_100020ec4,0);
  FUN_1010a0990(param_1,0x3b27063d,FUN_100020ef0,0);
  FUN_1010a0990(param_1,0x29740532,thunk_FUN_100026164,0);
  FUN_1010a0990(param_1,0x28d80521,thunk_FUN_1000263b8,0);
  return;
}




void FUN_100020ccc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (((*(long *)(param_1 + 0x40) != 0) && ((*(uint *)(param_1 + 0x9c) >> 0x1a & 1) == 0)) &&
     (iVar1 = FUN_1003458ec(*(undefined4 *)(lVar3 + 0x260)), iVar1 != 0)) {
    FUN_100020f2c(param_1);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
    if (((int)uVar2 != 0x1f) && (*(short *)(lVar3 + uVar2 * 0x38 + 0x90) == 2)) {
      FUN_10002105c(param_1);
      if ((*(uint *)(param_1 + 0x9c) & 7) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        FUN_1000212b8(param_1);
        FUN_10002a1d4(uVar4);
        FUN_100021308(param_1);
      }
      FUN_1000214d8(param_1);
    }
    iVar1 = FUN_100021670(param_1);
    if (iVar1 != 0) {
      FUN_1000216a8(param_1);
    }
  }
  FUN_100021808(param_1);
  return;
}




void FUN_100020d94(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100025670(param_1,in_stack_00000000);
  return;
}




void thunk_FUN_100025838(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar5 + 0x303) & 1) == 0) {
      uVar1 = FUN_100490540(lVar5);
      if (((((uVar1 & 1) == 0) &&
           (uVar4 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f, (int)uVar4 != 0x1f)) &&
          (*(short *)(lVar5 + uVar4 * 0x38 + 0x90) == 2)) &&
         ((uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578), (uVar4 & 1) == 0
          && (iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2584), iVar2 != 0))))
      {
        uVar6 = *(undefined8 *)(param_1 + 0x58);
        FUN_1000212b8(param_1);
        FUN_100029eb4(uVar6,&DAT_101dc2584,0,1,"MoveToFromBrush");
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc256c);
      if ((iVar2 != 0) &&
         (uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564), (uVar4 & 1) == 0))
      {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c);
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2580);
      if (iVar2 != 0) {
        uVar3 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
        if (((uVar3 | uVar1) & 1) == 0) {
          FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580);
        }
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2594);
      if (iVar2 != 0) {
        uVar3 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
        if (((uVar3 | uVar1) & 1) == 0) {
          FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594);
        }
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a0);
      if (iVar2 != 0) {
        uVar3 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
        if (((uVar3 | uVar1) & 1) == 0) {
          FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0);
          return;
        }
      }
    }
  }
  return;
}




void thunk_FUN_100025a1c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar3 + 0x303) & 1) == 0) {
      uVar2 = FUN_100490540(lVar3);
      if (((((uVar2 & 1) == 0) &&
           (uVar2 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f, (int)uVar2 != 0x1f)) &&
          (*(short *)(lVar3 + uVar2 * 0x38 + 0x90) == 2)) &&
         ((iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580),
          iVar1 != 0 &&
          (iVar1 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2588), iVar1 != 0)))) {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        FUN_1000212b8(param_1);
        FUN_100029eb4(uVar4,&DAT_101dc2588,0,1,"MoveToFromBrush");
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564);
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
        return;
      }
    }
  }
  return;
}




void FUN_100020dc8(undefined8 param_1)

{
  int in_stack_00000000;
  
  FUN_100025754(param_1,in_stack_00000000 != 0);
  return;
}




void thunk_FUN_100025b9c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_10002508c();
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025bc4:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xdc302c4), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025bc4;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void thunk_FUN_100025c74(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025c98:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x163803be), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025c98;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100020e04(long *param_1)

{
  undefined8 in_stack_00000000;
  
  (**(code **)(*param_1 + 0x158))
            ((float)*(double *)((ulong)&stack0x00000000 | 8),param_1,in_stack_00000000);
  return;
}




void FUN_100020e40(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100025e44((float)*(double *)((ulong)&stack0x00000000 | 8),param_1,in_stack_00000000);
  return;
}




void thunk_FUN_100026040(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar5 = (ulong)*(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
        if ((((int)uVar5 != 0x1f) &&
            (*(short *)(*(long *)(param_1 + 0x10) + uVar5 * 0x38 + 0x90) == 2)) &&
           (iVar1 = FUN_100022f4c(param_1), iVar1 != 0)) {
          plVar2 = *(long **)(param_1 + 0x88);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 0x88) = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
            }
          }
          FUN_1000453bc(uVar4);
          return;
        }
        plVar2 = *(long **)(param_1 + 0x88);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        FUN_1000453dc(uVar4);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100020e78(undefined8 param_1)

{
  undefined8 *puVar1;
  int in_stack_00000000;
  
  puVar1 = (undefined8 *)((ulong)&stack0x00000000 | 8);
  FUN_100025f38((float)(double)puVar1[2],param_1,in_stack_00000000 != 0,*puVar1,
                *(int *)(puVar1 + 1) != 0);
  return;
}




void FUN_100020ec4(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100024ae8(param_1,in_stack_00000000);
  return;
}




void FUN_100020ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_1000265c0(param_1,in_stack_00000000,param_3,in_stack_00000010,in_stack_00000018);
  return;
}




void thunk_FUN_100026164(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_100490540(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar2 = FUN_10002a62c(*(long *)(param_1 + 0x58),&DAT_101dc2564);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c),
       iVar2 != 0)) {
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2568);
      if (iVar2 == 0) {
        iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c);
        if (iVar2 != 0) {
          FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564);
        }
      }
      else {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc2568);
      }
    }
    iVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580),
       iVar2 != 0)) {
      uVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc257c);
      if (((uVar3 ^ 1 | uVar1) & 1) == 0) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc257c);
      }
      else {
        iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580);
        if (iVar2 != 0) {
          FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
        }
      }
    }
    iVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594),
       iVar2 != 0)) {
      uVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2590);
      if (((uVar3 ^ 1 | uVar1) & 1) == 0) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2590);
      }
      else {
        iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594);
        if (iVar2 != 0) {
          FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
        }
      }
    }
    iVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0),
       iVar2 != 0)) {
      uVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc259c);
      if (((uVar3 ^ 1 | uVar1) & 1) == 0) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc259c);
        return;
      }
      iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0);
      if (iVar2 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
        return;
      }
    }
  }
  return;
}




void thunk_FUN_1000263b8(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  uVar4 = (ulong)*(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
  if ((((int)uVar4 == 0x1f) ||
      (1 < *(ushort *)(*(long *)(param_1 + 0x10) + uVar4 * 0x38 + 0x90) - 3)) &&
     (uVar4 = FUN_10002a294(*(long *)(param_1 + 0x58),&DAT_101dc25cc), (uVar4 & 1) == 0)) {
    if ((*(uint *)(param_1 + 0x9c) >> 0x18 & 1) == 0) {
      iVar1 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a8);
      if ((iVar1 == 0) ||
         (uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a8), (uVar4 & 1) != 0))
      goto LAB_10002640c;
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      FUN_1000212b8(param_1);
      puVar2 = (undefined4 *)&DAT_101dc25a8;
      pcVar3 = "IdleSheathToIdle";
    }
    else {
      if (((DAT_101dc25f8 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101dc25f8), iVar1 != 0))
      {
        DAT_101dc25f0 = DAT_101dc25a4;
        ___cxa_guard_release(&DAT_101dc25f8);
      }
      iVar1 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25f0);
      if ((iVar1 == 0) ||
         (uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25f0), (uVar4 & 1) != 0))
      goto LAB_10002640c;
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      FUN_1000212b8(param_1);
      puVar2 = &DAT_101dc25a4;
      pcVar3 = "MoveSheathToMove";
    }
    FUN_100029eb4(uVar5,puVar2,0,0,pcVar3);
  }
LAB_10002640c:
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc2568);
  if (iVar1 != 0) {
    FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564);
  }
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc257c);
  if (iVar1 != 0) {
    FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
  }
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2590);
  if (iVar1 != 0) {
    FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
  }
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc259c);
  if (iVar1 == 0) {
    return;
  }
  FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
  return;
}




void FUN_100020f2c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = FUN_10034e42c(*(undefined4 *)(lVar5 + 0x260));
  iVar1 = FUN_1004e3634();
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfbffffff | (uint)(iVar1 != 0) << 0x1a;
  uVar3 = FUN_10034e580(*(undefined4 *)(lVar5 + 0x260));
  iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
  if (iVar1 == 0) {
    uVar3 = FUN_10034e5dc(*(undefined4 *)(lVar5 + 0x260));
    iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
    if (iVar1 == 0) {
      FUN_100047200(*(undefined8 *)(param_1 + 0x40),uVar2);
      return;
    }
    uVar3 = FUN_10034e5dc(*(undefined4 *)(lVar5 + 0x260));
    thunk_FUN_1004e439c(auStack_40,uVar3);
    pcVar4 = "_";
  }
  else {
    uVar3 = FUN_10034e580(*(undefined4 *)(lVar5 + 0x260));
    thunk_FUN_1004e439c(auStack_40,uVar3);
    pcVar4 = "-";
  }
  FUN_1004e3120(auStack_50,pcVar4);
  FUN_1004e372c(auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e372c(auStack_40,uVar2);
  FUN_100047200(*(undefined8 *)(param_1 + 0x40),auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10002105c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100491200(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x58) != 0 && uVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0001000210a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1000210ac + (ulong)(byte)(&DAT_10114b5a0)[uVar1] * 4))();
    return;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffff8 | uVar1 & 7;
  return;
}




float FUN_1000212b8(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0;
  if ((*(uint *)(param_1 + 0x9c) >> 0x19 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    fVar2 = (float)FUN_1003e4a18(0x3f800000,lVar1);
    fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x80);
    fVar2 = fVar2 / fVar3;
    if (fVar3 <= 0.0) {
      fVar2 = 1.0;
    }
  }
  return fVar2;
}




void FUN_100021308(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint6 *puVar10;
  undefined4 local_48 [2];
  
  puVar10 = (uint6 *)(param_1 + 0x9c);
  uVar7 = *(uint *)puVar10;
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = FUN_100490540(uVar9);
  uVar4 = FUN_100490504(uVar9);
  uVar6 = (ulong)*puVar10;
  uVar2 = *(uint *)puVar10 & 0x18;
  if ((uVar2 == 0x10 || uVar3 == 0) || (uVar7 & 0x40000000) == 0) {
    if (((((uint)(uVar2 == 8) | uVar4 ^ 1 | uVar3) & 1) != 0) || (-1 < (int)uVar7)) {
      uVar7 = *(uint *)puVar10 >> 3 & 3;
      if (uVar7 == 0) {
        return;
      }
      if ((((uVar4 ^ 1) & (uint)(uVar7 == 1)) == 0) && ((uVar3 & 1) != 0 || uVar2 != 0x10)) {
        return;
      }
      iVar5 = FUN_1000229fc(param_1,&DAT_101dc2578,&DAT_101dc257c);
      puVar1 = &DAT_101dc257c;
      if (iVar5 == 0) {
        puVar1 = &DAT_101dc2578;
      }
      local_48[0] = *puVar1;
      lVar8 = *(long *)(param_1 + 0x58);
      if (lVar8 != 0) {
        FUN_1000212b8(param_1);
        FUN_100029f94(lVar8,local_48,1,0,&DAT_101dc2558);
      }
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffe7;
      return;
    }
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      FUN_1000212b8(param_1);
      FUN_100029f94(lVar8,&DAT_101dc2574,1,0,&DAT_101dc2558);
      uVar6 = (ulong)*(uint6 *)(param_1 + 0x9c);
    }
    uVar7 = (uint)uVar6 & 0xffffffef | 8;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x58);
    if (lVar8 != 0) {
      FUN_1000212b8(param_1);
      FUN_100029f94(lVar8,&DAT_101dc2570,1,0,&DAT_101dc2558);
      uVar6 = (ulong)*(uint6 *)(param_1 + 0x9c);
    }
    uVar7 = (uint)uVar6 & 0xffffffe7 | 0x10;
  }
  *(short *)(param_1 + 0xa0) = (short)(uVar6 >> 0x20);
  *(uint *)(param_1 + 0x9c) = uVar7;
  return;
}




void FUN_1000214d8(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x88);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        iVar1 = FUN_100045ccc(uVar4);
        if ((iVar1 != 0) && (iVar1 = FUN_100022f4c(param_1), iVar1 != 0)) {
          plVar2 = *(long **)(param_1 + 0x88);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 0x88) = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
            }
          }
          FUN_1000453bc(uVar4);
          return;
        }
        plVar2 = *(long **)(param_1 + 0x88);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        iVar1 = FUN_100045cf0(uVar4);
        if ((iVar1 != 0) && (uVar5 = FUN_100022f4c(param_1), (uVar5 & 1) == 0)) {
          plVar2 = *(long **)(param_1 + 0x88);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 0x88) = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
            }
          }
          FUN_1000453dc(uVar4);
          return;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




undefined8 FUN_100021670(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
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




void FUN_1000216a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x303) & 1) == 0) {
      uVar1 = FUN_100490540();
      uVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564);
      if (((uVar2 & 1) == 0) && ((((ulong)*(ushort *)(param_1 + 0xa0) << 0x20) >> 0x24 & 1) != 0)) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c);
      }
      uVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
      if (((uVar2 & 1) == 0) && ((*(ushort *)(param_1 + 0xa0) & 0x20) != 0 && (uVar1 & 1) == 0)) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580);
      }
      uVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
      if (((uVar2 & 1) == 0) && ((*(ushort *)(param_1 + 0xa0) & 0x40) != 0 && (uVar1 & 1) == 0)) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594);
      }
      uVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
      if (((uVar2 & 1) == 0) && ((*(ushort *)(param_1 + 0xa0) & 0x80) != 0 && (uVar1 & 1) == 0)) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0);
        return;
      }
    }
  }
  return;
}




void FUN_100021808(long param_1)

{
  float fVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2f4) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0x98);
    if (0.0 < fVar1) {
      fVar1 = (float)FUN_1010a1cd4();
      fVar1 = (float)NEON_fminnm(*(float *)(param_1 + 0x98) - fVar1,0x41200000);
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      *(float *)(param_1 + 0x98) = fVar1;
    }
    if (fVar1 == 0.0) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffff1f;
    }
  }
  return;
}




void FUN_100021878(long param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  uint *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  int local_13c;
  undefined8 local_138;
  void *local_130;
  long local_128;
  undefined4 local_120;
  long local_118;
  undefined4 local_110;
  long local_108;
  undefined4 local_100;
  long local_f8;
  undefined4 local_f0;
  ulong local_e8;
  int *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  
  lVar18 = *(long *)(param_1 + 0x10);
  *(uint **)(param_1 + 0x38) = param_2;
  puVar23 = (undefined8 *)**(undefined8 **)(param_2 + 0x76);
  plVar6 = param_3 + 1;
  if ((*plVar6 == 0) || (iVar3 = FUN_1004d2524(), plVar7 = plVar6, iVar3 == 0)) {
    plVar7 = puVar23 + 1;
  }
  if ((param_3[2] == 0) || (iVar3 = FUN_1004d2524(), iVar3 == 0)) {
    plVar6 = puVar23 + 1;
  }
  iVar3 = FUN_1004d2524(*plVar7);
  if ((iVar3 != 0) || (iVar3 = FUN_1004d2524(plVar6[1]), iVar3 != 0)) {
    lVar5 = FUN_1010a0298(lVar18,DAT_10184dc58);
    *(long *)(param_1 + 0x48) = lVar5;
    if (lVar5 != 0) {
      if ((*param_2 < 10) && ((0x23bU >> (ulong)(*param_2 & 0x1f) & 1) != 0)) {
        uVar4 = 5;
      }
      else {
        uVar4 = 5;
        if ((char)param_2[0x75] == '\0') {
          uVar4 = 1;
        }
      }
      FUN_1004e910c(lVar5,uVar4);
      iVar3 = FUN_1004d2524(plVar6[1]);
      plVar10 = plVar7;
      plVar22 = plVar7;
      if ((iVar3 != 0) && (iVar3 = FUN_1003a2d9c(lVar18), iVar3 == 0)) {
        plVar10 = plVar6 + 1;
        plVar22 = plVar6;
      }
      (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(*(long **)(param_1 + 0x48),*plVar10);
      FUN_1000e7b70(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50,plVar22[5]);
      *(char *)(*(long *)(param_1 + 0x48) + 0x33) = (char)plVar7[6];
      local_b8 = param_2[0x19];
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_84 = 0;
      local_8c = 0;
      local_7c = 0x3f800000;
      local_a4 = local_b8;
      local_90 = local_b8;
      FUN_1004e8e38(*(undefined8 *)(param_1 + 0x48),&local_b8);
      plVar6 = param_3 + 3;
      if ((*plVar6 == 0) || (iVar3 = FUN_1004d2524(), iVar3 == 0)) {
        plVar6 = puVar23 + 3;
      }
      lVar5 = *plVar6;
      iVar3 = FUN_1004d2524(lVar5);
      if (iVar3 != 0) {
        plVar6 = (long *)FUN_1010a0298(lVar18,DAT_10184dc68);
        *(long **)(param_1 + 0x58) = plVar6;
        (**(code **)(*plVar6 + 0x10))();
        FUN_100029c48(*(undefined8 *)(param_1 + 0x58),lVar5);
        local_e8 = 0;
        local_e0 = (int *)0x0;
        local_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0xffffffff;
        plVar6 = (long *)puVar23[5];
        lVar5 = *plVar6;
        while (lVar5 != 0) {
          FUN_10002235c(&local_e8,lVar5,plVar6);
          plVar6 = plVar6 + 1;
          lVar5 = *plVar6;
        }
        if (puVar23 != param_3) {
          plVar6 = (long *)param_3[5];
          lVar5 = *plVar6;
          while (lVar5 != 0) {
            plVar6 = plVar6 + 1;
            plVar7 = (long *)FUN_100026b04(&local_e8,lVar5);
            *plVar7 = lVar5;
            lVar5 = *plVar6;
          }
        }
        plVar6 = (long *)puVar23[5];
        lVar5 = *plVar6;
        while (lVar5 != 0) {
          puVar8 = (undefined8 *)FUN_100026b04(&local_e8);
          puVar8 = (undefined8 *)*puVar8;
          FUN_100029d44(*(undefined4 *)(puVar8 + 2),*(undefined4 *)((long)puVar8 + 0x14),
                        *(undefined4 *)(puVar8 + 3),*(undefined8 *)(param_1 + 0x58),*puVar8,
                        puVar8[1],*(undefined1 *)((long)puVar8 + 0x1c));
          plVar7 = (long *)puVar8[4];
          puVar11 = (undefined8 *)*plVar7;
          while (puVar11 != (undefined8 *)0x0) {
            plVar7 = plVar7 + 1;
            FUN_100029df4(*(undefined4 *)(puVar11 + 1),*(undefined4 *)((long)puVar11 + 0xc),
                          *(undefined4 *)(puVar11 + 2),*(undefined8 *)(param_1 + 0x58),*puVar8,
                          *puVar11,*(undefined1 *)((long)puVar11 + 0x14));
            puVar11 = (undefined8 *)*plVar7;
          }
          plVar6 = plVar6 + 1;
          lVar5 = *plVar6;
        }
        FUN_100029f20(0xbe800000,0x3e800000,*(undefined8 *)(param_1 + 0x58),"AttackToIdle",
                      &DAT_101dc2564);
        FUN_100029f20(0xbe800000,0x3e800000,*(undefined8 *)(param_1 + 0x58),"AttackToIdleCombat",
                      &DAT_101dc2568);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveToFromBrush",
                      &DAT_101dc2578);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStartToMove",
                      &DAT_101dc2578);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStartToMoveCombat",
                      &DAT_101dc257c);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStopToIdle",
                      &DAT_101dc2564);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStopToIdleCombat",
                      &DAT_101dc2568);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveSheathToMove",
                      &DAT_101dc2578);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"IdleSheathToIdle",
                      &DAT_101dc2564);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"IntroToDance",
                      &DAT_101dc255c);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"IntroToTaunt",
                      &DAT_101dc2560);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),
                      "StrafeForwardStartToStrafeForward",&DAT_101dc25ac);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),
                      "StrafeBackStartToStrafeBack",&DAT_101dc25b0);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),
                      "StrafeLeftStartToStrafeLeft",&DAT_101dc25b4);
        FUN_100029f20(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),
                      "StrafeRightStartToStrafeRight",&DAT_101dc25b8);
        if (*(char *)(puVar23 + 4) == '\0') {
          FUN_10002a9ec(*(undefined8 *)(param_1 + 0x58));
        }
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2570);
        puVar19 = (uint *)(param_1 + 0x9c);
        uVar1 = 0x40000000;
        if (iVar3 == 0) {
          uVar1 = 0;
        }
        *puVar19 = *puVar19 & 0xbfffffff | uVar1;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2574);
        uVar1 = 0x80000000;
        if (iVar3 == 0) {
          uVar1 = 0;
        }
        *puVar19 = *puVar19 & 0x7fffffff | uVar1;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25bc);
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xfffe | (ushort)(iVar3 != 0);
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25c0);
        uVar2 = 2;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xfffd | uVar2;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25c4);
        uVar2 = 4;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xfffb | uVar2;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25c8);
        uVar2 = 8;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xfff7 | uVar2;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc256c);
        uVar2 = 0x10;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xffef | uVar2;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2580);
        uVar2 = 0x20;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xffdf | uVar2;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2594);
        uVar2 = 0x40;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xffbf | uVar2;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a0);
        uVar2 = 0x80;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xff7f | uVar2;
        iVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2588);
        uVar2 = 0x100;
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xfeff | uVar2;
        FUN_10002681c(&local_e8);
      }
      FUN_1004e9194(*(undefined8 *)(param_1 + 0x48));
    }
  }
  if ((*(byte *)(lVar18 + 0x2f4) & 5) != 0) {
    FUN_1010a0298(param_1,DAT_10184dc78);
  }
  FUN_1000224f0(param_1,param_2 + 0x68);
  lVar5 = lVar18 + 0x28;
  uVar4 = *(undefined4 *)(lVar18 + 0x30);
  puVar19 = param_2 + 0x6e;
  if ((*(long *)(param_2 + 0x6e) != 0) && (iVar3 = FUN_1004d2524(), iVar3 != 0)) {
    uVar9 = FUN_1010a0298(param_1,DAT_10184dc88);
    *(undefined8 *)(param_1 + 0x68) = uVar9;
    local_f8 = lVar5;
    local_f0 = uVar4;
    FUN_10004a1e8(0xbf800000,uVar9,&local_f8,*(undefined8 *)puVar19,puVar19);
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    iVar3 = FUN_1004d2524();
    if (iVar3 != 0) {
      uVar9 = FUN_1010a0298(param_1,DAT_10184dc88);
      *(undefined8 *)(param_1 + 0x60) = uVar9;
      local_108 = lVar5;
      local_100 = uVar4;
      FUN_10004a1e8(0xbf800000,uVar9,&local_108,*(undefined8 *)(param_2 + 0x70),puVar19);
    }
    if ((*(long *)(param_2 + 0x70) != 0) && (iVar3 = FUN_1004d2524(), iVar3 != 0)) {
      uVar9 = FUN_1010a0298(param_1,DAT_10184dc88);
      *(undefined8 *)(param_1 + 0x70) = uVar9;
      local_118 = lVar5;
      local_110 = uVar4;
      FUN_10004a1e8(0xbf800000,uVar9,&local_118,*(undefined8 *)(param_2 + 0x70),puVar19);
      uVar9 = FUN_1010a0298(param_1,DAT_10184dc88);
      *(undefined8 *)(param_1 + 0x78) = uVar9;
      local_128 = lVar5;
      local_120 = uVar4;
      FUN_10004a1e8(0xbf800000,uVar9,&local_128,*(undefined8 *)(param_2 + 0x70),puVar19);
    }
  }
  FUN_1000225cc(param_1,lVar18,param_2);
  FUN_1000227d0(param_1,param_3[10]);
  puVar23 = (undefined8 *)**(undefined8 **)(param_2 + 0x76);
  if ((((*(long *)puVar23[0xb] != 0) || (*(long *)puVar23[0xc] != 0)) ||
      (*(long *)param_3[0xb] != 0)) || (*(long *)param_3[0xc] != 0)) {
    lVar5 = FUN_1010a0298(param_1,DAT_10184dc98);
    puVar11 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      puVar11 = (undefined8 *)(lVar5 + 0x28);
    }
    *(undefined8 **)(param_1 + 0x80) = puVar11;
    (**(code **)*puVar11)(puVar11,puVar23,param_3);
  }
  if (puVar23 == param_3) {
    FUN_100169f44(*param_3);
  }
  else {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    FUN_10016a114(*param_3,&local_b8);
    local_e8 = 0;
    local_e0 = (int *)0x0;
    plVar6 = (long *)puVar23[0xb];
    puVar23 = (undefined8 *)*plVar6;
    while (puVar23 != (undefined8 *)0x0) {
      plVar6 = plVar6 + 1;
      uVar9 = *puVar23;
      uVar4 = FUN_1004d2524(uVar9);
      uVar9 = FUN_100015208(uVar9,uVar4,0x12345678);
      uVar20 = puVar23[1];
      uVar4 = FUN_1004d2524(uVar20);
      uVar20 = FUN_100015208(uVar20,uVar4,0x12345678);
      FUN_100022824(&local_e8,uVar9,uVar20);
      puVar23 = (undefined8 *)*plVar6;
    }
    plVar6 = (long *)param_3[0xb];
    puVar23 = (undefined8 *)*plVar6;
    piVar13 = local_e0;
    while (local_e0 = piVar13, puVar23 != (undefined8 *)0x0) {
      uVar9 = *puVar23;
      uVar4 = FUN_1004d2524(uVar9);
      uVar9 = FUN_100015208(uVar9,uVar4,0x12345678);
      uVar20 = puVar23[1];
      uVar4 = FUN_1004d2524(uVar20);
      iVar3 = FUN_100015208(uVar20,uVar4,0x12345678);
      uVar12 = local_e8 & 0xffffffff;
      if ((int)local_e8 != 0) {
        piVar13 = local_e0 + 1;
        do {
          if (piVar13[-1] == (int)uVar9) {
            *piVar13 = iVar3;
            goto LAB_100022248;
          }
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      FUN_100022824(&local_e8,uVar9);
LAB_100022248:
      plVar6 = plVar6 + 1;
      piVar13 = local_e0;
      puVar23 = (undefined8 *)*plVar6;
    }
    local_138 = 0;
    local_130 = (void *)0x0;
    uVar12 = (ulong)local_b8;
    if (local_b8 != 0) {
      uVar21 = 0;
      iVar3 = (int)local_e8;
      lVar5 = (local_e8 & 0xffffffff) << 3;
      do {
        local_13c = *(int *)(CONCAT44(uStack_ac,uStack_b0) + uVar21 * 4);
        piVar14 = piVar13 + 1;
        lVar16 = lVar5;
        if (iVar3 != 0) {
          do {
            if (*piVar14 == local_13c) goto LAB_1000222bc;
            lVar16 = lVar16 + -8;
            lVar15 = lVar5;
            piVar14 = piVar14 + 2;
            piVar17 = piVar13;
          } while (lVar16 != 0);
          do {
            if (*piVar17 == local_13c) goto LAB_1000222cc;
            lVar15 = lVar15 + -8;
            piVar17 = piVar17 + 2;
          } while (lVar15 != 0);
        }
LAB_1000222bc:
        FUN_1000228fc(&local_138,&local_13c);
        uVar12 = (ulong)local_b8;
LAB_1000222cc:
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar12);
    }
    FUN_10016a42c(*param_3,&local_138);
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
    }
    if (piVar13 != (int *)0x0) {
      operator_delete__(piVar13);
    }
    if ((void *)CONCAT44(uStack_ac,uStack_b0) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_ac,uStack_b0));
    }
  }
  FUN_10002297c(param_1);
  iVar3 = FUN_10034ea2c(*(undefined4 *)(lVar18 + 0x260));
  if (iVar3 != 0) {
    FUN_1010a0298(param_1,DAT_10184dca8);
  }
  return;
}




void FUN_10002235c(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 local_40;
  void *local_38;
  
  uVar13 = *param_2;
  uVar5 = FUN_1004d2524(uVar13);
  uVar6 = FUN_100015208(uVar13,uVar5,0x12345678);
  uVar7 = param_1[4];
  param_1[4] = uVar7 + 1;
  uVar9 = *param_1;
  if (uVar9 >> 1 < uVar7 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar7 = *param_1;
    uVar9 = (uint)local_40;
    uVar11 = uVar7 - 1;
    if ((int)uVar11 < 0) {
      pvVar8 = *(void **)(param_1 + 2);
    }
    else {
      pvVar8 = *(void **)(param_1 + 2);
      do {
        uVar7 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8 + 4);
        if (uVar7 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar8 + (ulong)uVar11 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar12 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar12) {
              uVar4 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar12 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar12 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar7;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar7 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar11,uVar7);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar8;
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
      uVar9 = *param_1;
    }
  }
  uVar7 = 0;
  if (uVar9 != 0) {
    uVar7 = uVar6 / uVar9;
  }
  uVar12 = (ulong)(uVar6 - uVar7 * uVar9);
  lVar10 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar10 + uVar12 * 8 + 4);
  while (iVar2 != -1) {
    uVar7 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar7 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar7 - 1);
    iVar2 = *(int *)(lVar10 + uVar12 * 8 + 4);
  }
  puVar1 = (uint *)(lVar10 + uVar12 * 8);
  *puVar1 = uVar6;
  uVar7 = FUN_1000268a4(param_1,param_3);
  puVar1[1] = uVar7;
  return;
}




void FUN_1000224f0(long param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 != 7) {
    uVar1 = FUN_1010a0298(param_1,DAT_10184db68);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    if (*param_2 < 7) {
      switch(*param_2) {
      case 0:
        FUN_100046614(param_2[1],uVar1,*(undefined8 *)(param_1 + 0x10),&DAT_101d91650);
        return;
      case 1:
        FUN_100047018(param_2[1]);
        return;
      case 2:
        FUN_100047174(param_2[1]);
        return;
      case 3:
        FUN_100047180(param_2[1]);
        return;
      case 4:
        FUN_10004718c(param_2[1]);
        return;
      case 5:
        FUN_10004708c(param_2[1]);
        return;
      case 6:
        FUN_100047100(param_2[1],uVar1,*(undefined8 *)(param_1 + 0x10));
        return;
      }
    }
  }
  return;
}




void FUN_1000225cc(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_3 + 0x220);
  puVar6 = (undefined8 *)*plVar7;
  while (puVar6 != (undefined8 *)0x0) {
    iVar1 = _strcmp((char *)*puVar6,"KrakenAmbientSounds");
    if (iVar1 == 0) {
      FUN_1010a0298(param_2,DAT_10184dcc8);
    }
    iVar1 = _strcmp(*(char **)*plVar7,"Hero009ToggleSword");
    if (iVar1 == 0) {
      FUN_1010a0298(param_2,DAT_10184dcd8);
    }
    iVar1 = _strcmp(*(char **)*plVar7,"JouleToggleSword");
    if (iVar1 == 0) {
      FUN_1010a0298(param_2,DAT_10184dce8);
    }
    iVar1 = _strcmp(*(char **)*plVar7,"RezaToggleHorns");
    if (iVar1 == 0) {
      FUN_1010a0298(param_2,DAT_10184dcf8);
    }
    iVar1 = _strcmp(*(char **)*plVar7,"RingoSkin01ToggleArm");
    if (iVar1 == 0) {
      FUN_1010a0298(param_2,DAT_10184dd08);
    }
    plVar7 = plVar7 + 1;
    puVar6 = (undefined8 *)*plVar7;
  }
  if ((((*(byte *)(param_2 + 0x2f4) & 1) != 0) && (uVar3 = FUN_10034cb58(), (uVar3 & 1) == 0)) &&
     (*(char *)(param_3 + 0x200) != '\0')) {
    uVar4 = FUN_1010a0298(param_1,DAT_10184dd18);
    FUN_100027804(uVar4,param_2);
  }
  if ((*(byte *)(param_2 + 0x2f5) >> 5 & 1) == 0) {
    return;
  }
  uVar3 = FUN_10034cb58();
  if (((uVar3 & 1) == 0) && (iVar1 = FUN_100126afc(), iVar1 != 0)) {
    iVar1 = FUN_10034f06c();
    iVar2 = FUN_100345bbc(param_2);
    if ((iVar1 != iVar2) && (lVar5 = FUN_1010a0298(param_2,DAT_10184dd28), lVar5 != 0)) {
      FUN_100028a20(lVar5,0x20000018,2);
      FUN_1003467f8();
      iVar1 = FUN_10034cde0();
      if (iVar1 != 0) {
        FUN_100028a28(lVar5,1);
      }
    }
  }
  FUN_1010a0298(param_2,DAT_10184dd38);
  return;
}




void FUN_1000227d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  while (lVar2 != 0) {
    param_2 = param_2 + 1;
    lVar1 = FUN_1010a0298(param_1,DAT_10184dcb8);
    if (lVar1 != 0) {
      FUN_10003f05c(lVar1,lVar2);
    }
    lVar2 = *param_2;
  }
  return;
}




void FUN_100022824(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar8 = *param_1;
  if (uVar8 == param_1[1]) {
    uVar1 = 0;
    if (uVar8 != 0xffffffff) {
      uVar1 = uVar8 + (~uVar8 | 0xfffffff0) + 0x11;
    }
    if (uVar8 < 0x20) {
      uVar1 = uVar8 << 1;
    }
    uVar2 = uVar8 + 1;
    if (uVar8 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    if (uVar8 < uVar2) {
      puVar3 = operator_new__((ulong)uVar2 << 3);
      puVar4 = *(undefined8 **)(param_1 + 2);
      if (uVar8 != 0) {
        lVar5 = (ulong)uVar8 << 3;
        puVar6 = puVar3;
        puVar7 = puVar4;
        do {
          *puVar6 = *puVar7;
          lVar5 = lVar5 + -8;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar5 != 0);
      }
      param_1[1] = uVar2;
      if (puVar4 != (undefined8 *)0x0) {
        operator_delete__(puVar4);
        uVar8 = *param_1;
      }
      *(undefined8 **)(param_1 + 2) = puVar3;
    }
  }
  *param_1 = uVar8 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar8 + 1) * 8;
  *(undefined8 *)(lVar5 + -8) = 0;
  *(undefined4 *)(lVar5 + -8) = param_2;
  *(undefined4 *)(lVar5 + -4) = param_3;
  return;
}




void FUN_1000228fc(uint *param_1,undefined4 *param_2)

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
    FUN_100026bb4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_10002297c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_100142c58();
  if ((iVar1 != 0) && (iVar1 = FUN_100142c78(), iVar1 != 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
      lVar3 = 0;
    }
    uVar2 = FUN_1010a0298(param_1,DAT_10184dd98);
    FUN_1000354f8(uVar2,0,lVar3);
    return;
  }
  return;
}




void FUN_1000229f4(long param_1)

{
  FUN_100021878(param_1 + -0x28);
  return;
}




undefined8 FUN_1000229fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x58) != 0) && ((*(byte *)(*(long *)(param_1 + 0x10) + 0x303) & 1) != 0)
      ) && (uVar1 = FUN_10002a62c(), (uVar1 & 1) == 0)) {
    uVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),param_3);
    return uVar2;
  }
  return 0;
}




void FUN_100022a5c(long param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined4 local_58 [2];
  undefined1 auStack_50 [8];
  undefined4 local_48 [2];
  
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_100022bf0;
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_100490540(uVar12);
  uVar3 = FUN_100490504(uVar12);
  iVar4 = FUN_1000229fc(param_1,&DAT_101dc2598,&DAT_101dc259c);
  puVar9 = &DAT_101dc259c;
  if (iVar4 == 0) {
    puVar9 = &DAT_101dc2598;
  }
  local_48[0] = *puVar9;
  iVar4 = FUN_1000229fc(param_1,&DAT_101dc2564,&DAT_101dc2568);
  pcVar1 = "MoveStopToIdleCombat";
  if (iVar4 == 0) {
    pcVar1 = "MoveStopToIdle";
  }
  FUN_10034cb1c(auStack_50,pcVar1);
  if (((*(uint *)(param_1 + 0x9c) >> 0x18 & 1) == 0) ||
     (iVar4 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598), iVar4 == 0)) {
LAB_100022b50:
    uVar6 = FUN_100021670(param_1);
    if ((((uVar6 & 1) == 0) && ((*(uint *)(param_1 + 0x9c) >> 0x18 & 1) != 0)) &&
       (iVar4 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598), iVar4 != 0))
    goto LAB_100022b80;
    iVar4 = FUN_1000229fc(param_1,&DAT_101dc2564,&DAT_101dc2568);
    puVar9 = &DAT_101dc2568;
    if (iVar4 == 0) {
      puVar9 = &DAT_101dc2564;
    }
    local_58[0] = *puVar9;
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    puVar11 = &DAT_101dc2558;
    puVar9 = local_58;
    uVar10 = 1;
  }
  else {
    uVar5 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a0);
    if (((uVar5 ^ 1 | uVar2 | uVar3) & 1) != 0) goto LAB_100022b50;
LAB_100022b80:
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    puVar9 = local_48;
    puVar11 = auStack_50;
    uVar10 = 0;
  }
  FUN_100029f94(0x3f800000,uVar12,puVar9,uVar10,0,puVar11);
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfefffff8;
LAB_100022bf0:
  plVar7 = *(long **)(param_1 + 0x88);
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar7[1]) {
      lVar8 = (**(code **)(*plVar7 + 0x10))();
      if (lVar8 != 0) {
        plVar7 = *(long **)(param_1 + 0x88);
        uVar12 = 0;
        if (plVar7 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar7[1]) {
            uVar12 = (**(code **)(*plVar7 + 0x10))();
          }
          else {
            uVar12 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        FUN_1000453dc(uVar12);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100022c8c(long param_1)

{
  FUN_100022a5c(param_1 + -0x28);
  return;
}




void FUN_100022c94(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    iVar1 = FUN_10002a020(*(long *)(param_1 + 0x58),&DAT_101dc2570);
    uVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2574);
    iVar3 = FUN_100490540(uVar11);
    uVar4 = FUN_100490504(uVar11);
    if (iVar1 == 0 || iVar3 == 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x58);
      if ((uVar2 & uVar4) == 1) {
        FUN_1000212b8(param_1);
        FUN_100029f94(uVar11,&DAT_101dc2574,1,0,&DAT_101dc2558);
        uVar10 = (ulong)*(uint *)(param_1 + 0x9c) & 0xffffffffffffffe7 |
                 (ulong)*(ushort *)(param_1 + 0xa0) << 0x20 | 8;
      }
      else {
        iVar1 = FUN_10002a020(uVar11,&DAT_101dc258c);
        iVar3 = FUN_1000229fc(param_1,&DAT_101dc2578,&DAT_101dc257c);
        if (iVar1 == 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x58);
          FUN_1000212b8(param_1);
          if (iVar3 == 0) {
            puVar8 = &DAT_101dc2578;
          }
          else {
            puVar8 = &DAT_101dc257c;
          }
          FUN_100029f94(uVar11,puVar8,1,0,&DAT_101dc2558);
        }
        else {
          if ((iVar3 == 0) ||
             (iVar1 = FUN_1000229fc(param_1,&DAT_101dc258c,&DAT_101dc2590), iVar1 == 0)) {
            uVar11 = *(undefined8 *)(param_1 + 0x58);
            FUN_1000212b8(param_1);
            puVar7 = &DAT_101dc258c;
            pcVar9 = "MoveStartToMove";
          }
          else {
            uVar11 = *(undefined8 *)(param_1 + 0x58);
            FUN_1000212b8(param_1);
            puVar7 = &DAT_101dc2590;
            pcVar9 = "MoveStartToMoveCombat";
          }
          FUN_100029eb4(uVar11,puVar7,0,0,pcVar9);
        }
        uVar10 = (ulong)*(uint *)(param_1 + 0x9c) & 0xffffffffffffffe7 |
                 (ulong)*(ushort *)(param_1 + 0xa0) << 0x20;
      }
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x58);
      FUN_1000212b8(param_1);
      FUN_100029f94(uVar11,&DAT_101dc2570,1,0,&DAT_101dc2558);
      uVar10 = (ulong)*(uint *)(param_1 + 0x9c) & 0xffffffffffffffe7 |
               (ulong)*(ushort *)(param_1 + 0xa0) << 0x20 | 0x10;
    }
    *(short *)(param_1 + 0xa0) = (short)(uVar10 >> 0x20);
    *(uint *)(param_1 + 0x9c) = (uint)uVar10 | 0x1000000;
  }
  iVar1 = FUN_100022f4c(param_1);
  if ((iVar1 != 0) && (plVar5 = *(long **)(param_1 + 0x88), plVar5 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        plVar5 = *(long **)(param_1 + 0x88);
        uVar11 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
            uVar11 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            uVar11 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        FUN_1000453bc(uVar11);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




bool FUN_100022f4c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  fVar2 = (float)FUN_1003e4a18(lVar1);
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x80);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0x134);
  fVar4 = (float)FUN_1004704cc(lVar1,0);
  return fVar5 + fVar3 + fVar4 < fVar2;
}




void FUN_100022fa4(long param_1)

{
  FUN_100022c94(param_1 + -0x28);
  return;
}




void FUN_100022fac(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  lVar6 = param_1[2];
  if (param_1[8] != 0) {
    FUN_1000472c0();
  }
  (**(code **)(*param_1 + 0x110))(param_1);
  FUN_100345e2c(lVar6);
  lVar4 = FUN_100345d90();
  uVar8 = 0xffffffff;
  if (lVar4 != 0) {
    uVar8 = FUN_1003461dc(lVar4);
  }
  iVar1 = FUN_10034cb58();
  if (iVar1 == 0) {
LAB_100023038:
    uVar3 = 0;
  }
  else {
    if ((int)uVar8 == -1) {
      uVar3 = 0;
      if (lVar4 == 0) goto LAB_100023044;
      if ((*(byte *)(lVar4 + 0x2f4) & 1) == 0) goto LAB_100023038;
    }
    uVar3 = 1;
  }
LAB_100023044:
  FUN_100345e2c(lVar6);
  uVar5 = FUN_10034ea2c();
  if (((((uVar5 & 1) != 0) || (uVar2 = FUN_10034ea2c(uVar8), (uVar3 | uVar2) == 1)) &&
      ((*(uint *)(lVar6 + 0x2f4) & 0x20100314) != 0)) &&
     ((iVar1 = FUN_10046517c(lVar6), iVar1 != 0 &&
      (lVar4 = FUN_1010a1540(DAT_10184dc48,0), lVar4 != 0)))) {
    lVar7 = param_1[2];
    uVar9 = *(undefined4 *)(param_1[7] + 0x1a4);
    uVar3 = FUN_10046517c(lVar6);
    FUN_10001f5f0(uVar9,(float)uVar3,lVar4,lVar7,1);
  }
  FUN_1000230e8(param_1);
  return;
}




void FUN_1000230e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dd98) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_1010a1830();
  return;
}




void FUN_100023118(long param_1)

{
  FUN_100022fac(param_1 + -0x28);
  return;
}




void FUN_100023120(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    FUN_100047e84();
    if ((*(byte *)(lVar1 + 0x2fc) & 0x1f) != 0) {
      FUN_100047534(0x3f000000,*(undefined8 *)(param_1 + 0x40));
    }
  }
  FUN_10002297c(param_1);
  return;
}




void FUN_100023168(long param_1)

{
  FUN_100023120(param_1 + -0x28);
  return;
}




void FUN_100023170(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x8000000;
  FUN_100023184();
  return;
}




void FUN_100023184(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10004a308();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10004a308();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10004a308();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10004a308();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_100047274(*(long *)(param_1 + 0x40),(*(uint *)(param_1 + 0x9c) & 0x30000000) != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x9c);
  if ((uVar1 >> 0x1d & 1) == 0) {
    if ((uVar1 >> 0x1c & 1) == 0) {
      if ((uVar1 >> 0x1b & 1) == 0) {
        return;
      }
      iVar2 = FUN_10049015c(lVar3);
      if ((iVar2 != 0) && (*(long *)(param_1 + 0x68) != 0)) goto LAB_100023250;
      iVar2 = FUN_1003a2d9c(lVar3);
      if (iVar2 == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x60);
    }
    else {
      iVar2 = FUN_10049015c(lVar3);
      if (iVar2 == 0) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x70);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
  }
  if (lVar3 == 0) {
    return;
  }
LAB_100023250:
  FUN_10004a2a0();
  return;
}




void FUN_100023268(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x8000000;
  FUN_100023184(param_1 + -0x28);
  return;
}




void FUN_100023278(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xf7ffffff;
  FUN_100023184();
  return;
}




void FUN_100023294(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xf7ffffff;
  FUN_100023184(param_1 + -0x28);
  return;
}




void FUN_1000232b4(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10000000;
  FUN_100023184();
  return;
}




void FUN_1000232c8(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x10000000;
  FUN_100023184(param_1 + -0x28);
  return;
}




void FUN_1000232d8(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xefffffff;
  FUN_100023184();
  return;
}




void FUN_1000232f4(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xefffffff;
  FUN_100023184(param_1 + -0x28);
  return;
}




void FUN_100023314(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x20000000;
  FUN_100023184();
  return;
}




void FUN_100023328(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20000000;
  FUN_100023184(param_1 + -0x28);
  return;
}




void FUN_100023338(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xdfffffff;
  FUN_100023184();
  return;
}




void FUN_100023354(long param_1)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xdfffffff;
  FUN_100023184(param_1 + -0x28);
  return;
}




void FUN_100023374(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  
  lVar3 = *(long *)(param_2 + 0x58);
  if (lVar3 != 0) {
    FUN_10034cb1c(auStack_48);
    FUN_100029eb4(param_1,lVar3,auStack_48,param_4,0,param_5);
  }
  plVar1 = *(long **)(param_2 + 0x88);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_2 + 0x90) == (int)plVar1[1]) {
      lVar3 = (**(code **)(*plVar1 + 0x10))();
      if (lVar3 != 0) {
        plVar1 = *(long **)(param_2 + 0x88);
        uVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_2 + 0x90) == (int)plVar1[1]) {
            uVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar2 = 0;
            *(undefined8 *)(param_2 + 0x88) = 0;
            *(undefined4 *)(param_2 + 0x90) = DAT_101dc0b88;
          }
        }
        FUN_1000453dc(uVar2);
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100023464(long param_1)

{
  FUN_100023374(param_1 + -0x28);
  return;
}




void FUN_10002346c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_100029f94();
  }
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x88);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        FUN_1000453dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100023524(long param_1)

{
  FUN_10002346c(param_1 + -0x28);
  return;
}




void FUN_10002352c(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10002a29c();
    return;
  }
  return;
}




void FUN_10002353c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10002a29c();
    return;
  }
  return;
}




void FUN_10002354c(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10002a318();
    return;
  }
  return;
}




void FUN_10002355c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10002a318();
    return;
  }
  return;
}




void FUN_10002356c(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10002a5f4();
    return;
  }
  return;
}




void FUN_10002357c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10002a5f4();
    return;
  }
  return;
}




void FUN_10002358c(long param_1,undefined4 param_2)

{
  undefined4 local_18 [2];
  
  if (*(long *)(param_1 + 0x58) != 0) {
    local_18[0] = param_2;
    FUN_10002a62c(*(long *)(param_1 + 0x58),local_18);
  }
  return;
}




void FUN_1000235b8(long param_1,undefined4 param_2)

{
  undefined4 local_18 [2];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    local_18[0] = param_2;
    FUN_10002a62c(*(long *)(param_1 + 0x30),local_18);
  }
  return;
}




void FUN_1000235e4(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  
  if (*(long *)(param_1 + 0x58) != 0) {
    local_20[0] = param_3;
    local_18[0] = param_2;
    FUN_10002a678(*(long *)(param_1 + 0x58),local_18,local_20);
  }
  return;
}




void FUN_100023618(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    local_20[0] = param_3;
    local_18[0] = param_2;
    FUN_10002a678(*(long *)(param_1 + 0x30),local_18,local_20);
  }
  return;
}




void FUN_10002364c(undefined8 param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  if (*(char *)((long)param_2 + 0x67) != '\0') {
    FUN_100045764(*(undefined4 *)((long)param_2 + 0x2c),param_1);
  }
  lVar3 = *param_2;
  if (lVar3 == 0) {
    if (param_2[2] != 0) {
      FUN_100045ab4(param_1);
    }
  }
  else if (param_2[1] == 0) {
    if ((int)param_2[6] == -0x7ee3623b || (int)param_2[6] == 0) {
      FUN_1000458d0();
    }
    else {
      FUN_100045a88(param_1,lVar3);
    }
  }
  else {
    uVar2 = FUN_1010acd98();
    FUN_100045a68(param_1,lVar3,uVar2);
  }
  fVar4 = *(float *)(param_2 + 10);
  bVar1 = false;
  if ((*(float *)((long)param_2 + 0x54) == 0.0) && (bVar1 = false, !NAN(fVar4))) {
    bVar1 = fVar4 == 0.0;
  }
  if (!bVar1) {
    FUN_100045b44(fVar4,*(float *)((long)param_2 + 0x54),(int)param_2[0xb],param_1,
                  (long)param_2 + 0x44);
  }
  FUN_100045bc0(param_1,(long)param_2 + 0x34);
  FUN_100045bcc((int)param_2[7],param_1);
  FUN_100045bd4(param_1,(long)param_2 + 0x3c);
  FUN_1000453bc(param_1);
  return;
}




void FUN_100023750(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_1000237d8(*(undefined4 *)(param_2 + 0x24),param_1,param_2 + 0x20,
                        *(undefined1 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x5c),
                        *(undefined1 *)(param_2 + 0x66),*(undefined4 *)(param_2 + 0x60),
                        *(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                        *(undefined1 *)(param_2 + 0x68));
  if (lVar1 != 0) {
    FUN_1000455a4(lVar1,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_2 + 100));
    FUN_10002364c(lVar1,param_2);
    return;
  }
  return;
}




long FUN_1000237d8(undefined8 param_1,long param_2,undefined4 *param_3,int param_4,uint param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,long *param_9,
                  undefined1 param_10)

{
  long lVar1;
  long lVar2;
  undefined4 local_78 [2];
  
  if (param_4 == 0) {
    lVar1 = FUN_1010a1540(DAT_10184dad8,0);
  }
  else {
    lVar1 = FUN_1010a0298(param_2,DAT_10184dad8);
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
    local_78[0] = *param_3;
    if (param_9 != (long *)0x0) {
      local_78[0] = (**(code **)(*param_9 + 8))(param_9);
    }
    FUN_100045334(lVar1,local_78);
    FUN_1000453b4(lVar1,param_8);
    FUN_100045400(param_1,lVar1);
    FUN_100045414(lVar1,param_10);
    *(byte *)(lVar1 + 0x110) =
         *(byte *)(lVar1 + 0x110) & 0xe0 |
         *(byte *)(lVar1 + 0x110) & 6 | (byte)(((ulong)(param_5 & 3) << 0x23) >> 0x20) |
         param_6 != 0;
    FUN_100045b9c(lVar1,param_7);
    if (param_4 != 0) {
      FUN_100045c48(lVar1,lVar2 + 0x2fc);
    }
  }
  return lVar1;
}




void FUN_100023914(long param_1)

{
  FUN_100023750(param_1 + -0x28);
  return;
}




void FUN_10002391c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_1000237d8(*(undefined4 *)(param_2 + 0x24),param_1,param_2 + 0x20,
                        *(undefined1 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x5c),
                        *(undefined1 *)(param_2 + 0x66),*(undefined4 *)(param_2 + 0x60),
                        *(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                        *(undefined1 *)(param_2 + 0x68));
  if (lVar1 != 0) {
    FUN_10004560c(lVar1,*(undefined8 *)(param_1 + 0x10),param_3,*(undefined1 *)(param_2 + 100));
    FUN_10002364c(lVar1,param_2);
    return;
  }
  return;
}




void FUN_1000239ac(long param_1)

{
  FUN_10002391c(param_1 + -0x28);
  return;
}




void FUN_1000239b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_1000237d8(*(undefined4 *)(param_2 + 0x24),param_1,param_2 + 0x20,
                          *(undefined1 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x5c),
                          *(undefined1 *)(param_2 + 0x66),*(undefined4 *)(param_2 + 0x60),
                          *(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                          *(undefined1 *)(param_2 + 0x68));
    if (lVar1 != 0) {
      FUN_100045684(lVar1,*(undefined8 *)(param_1 + 0x10),param_3,*(undefined1 *)(param_2 + 100));
      FUN_10002364c(lVar1,param_2);
      return;
    }
  }
  return;
}




void FUN_100023a48(long param_1)

{
  FUN_1000239b4(param_1 + -0x28);
  return;
}




void FUN_100023a50(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100023a7c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x2af3056d), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100023a7c;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100023b34(long param_1)

{
  FUN_100023a50(param_1 + -0x28);
  return;
}




void FUN_100023b3c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100023b68:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x29d80553), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100023b68;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100023c20(long param_1)

{
  FUN_100023b3c(param_1 + -0x28);
  return;
}




void FUN_100023c28(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100023c54:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x35830610), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100023c54;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100023d0c(long param_1)

{
  FUN_100023c28(param_1 + -0x28);
  return;
}




void FUN_100023d14(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100023d48:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x3d56066a), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100023d48;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100023e08(long param_1)

{
  FUN_100023d14(param_1 + -0x28);
  return;
}




void FUN_100023e10(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100023e44:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x456706e0), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100023e44;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100023f00(long param_1)

{
  FUN_100023e10(param_1 + -0x28);
  return;
}




long FUN_100023f08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  
  lVar1 = FUN_1010a0298(*(undefined8 *)(param_2 + 0x10),DAT_10184dd48);
  if (lVar1 != 0) {
    if (param_5 != (long *)0x0) {
      param_3 = (**(code **)(*param_5 + 0x10))(param_5,param_3);
    }
    FUN_10004b038(param_1,lVar1,param_3,param_4,0,0);
    FUN_10004b148(lVar1);
  }
  return lVar1;
}




long FUN_100023f9c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,long *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  
  if (param_7 == 0) {
    FUN_100345b68(*(undefined8 *)(param_2 + 0x10),auStack_70,0);
    uVar2 = FUN_1000320fc();
    lVar1 = FUN_1010a0298(uVar2,DAT_10184dd58);
    if (lVar1 != 0) {
      FUN_10004beac(lVar1,auStack_70);
    }
  }
  else {
    lVar1 = FUN_1010a0298(*(undefined8 *)(param_2 + 0x10),DAT_10184dd58);
  }
  if (lVar1 != 0) {
    if (param_8 != (long *)0x0) {
      param_3 = (**(code **)(*param_8 + 0x10))(param_8,param_3);
    }
    FUN_10004bd34(param_1,lVar1,param_3,param_4,0,0,param_5,param_6);
    if (param_7 != 0) {
      FUN_10004bec0(lVar1,*(undefined8 *)(param_2 + 0x10));
    }
    FUN_10004bed4(lVar1);
  }
  return lVar1;
}




void FUN_1000240ac(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_248 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a0218(*(undefined8 *)(param_1 + 0x10),local_248,0x40,DAT_10184dd58);
  if (uVar1 != 0) {
    uVar4 = (ulong)uVar1;
    puVar5 = local_248;
    do {
      uVar3 = *puVar5;
      iVar2 = FUN_10004bfb4(uVar3);
      if (iVar2 == param_2) {
        FUN_10004bf84(uVar3);
        break;
      }
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10002415c(long param_1)

{
  FUN_1000240ac(param_1 + -0x28);
  return;
}




void FUN_100024164(long param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint local_38 [2];
  
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 == 0) goto LAB_100024204;
      plVar5 = *(long **)(param_1 + 0x88);
      uVar7 = 0;
      if (plVar5 != (long *)0x0) {
        if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
          uVar7 = (**(code **)(*plVar5 + 0x10))();
        }
        else {
          uVar7 = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
        }
      }
      FUN_1010a01dc(uVar7);
      uVar8 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      uVar8 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x90) = uVar8;
  }
LAB_100024204:
  if (param_2 == (char *)0x0) {
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x811c9dc5;
    cVar2 = *param_2;
    while (cVar2 != '\0') {
      param_2 = param_2 + 1;
      local_38[0] = (local_38[0] ^ (int)cVar2) * 0x1000193;
      cVar2 = *param_2;
    }
  }
  lVar6 = FUN_1000237d8(0xbf800000,param_1,local_38,1,1,0,0,0xffffffff,
                        *(undefined8 *)(param_1 + 0x80),0);
  plVar5 = (long *)0x0;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x40);
  }
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar6 != 0) {
    plVar1 = plVar5 + 1;
  }
  lVar3 = *plVar1;
  *(long **)(param_1 + 0x88) = plVar5;
  *(int *)(param_1 + 0x90) = (int)lVar3;
  if (lVar6 != 0) {
    if ((int)lVar3 == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x10);
        plVar5 = *(long **)(param_1 + 0x88);
        uVar7 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
            uVar7 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            uVar7 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        FUN_1000455a4(uVar7,uVar10,1);
        uVar9 = (ulong)*(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
        if ((((int)uVar9 != 0x1f) &&
            (*(short *)(*(long *)(param_1 + 0x10) + uVar9 * 0x38 + 0x90) == 2)) &&
           (iVar4 = FUN_100022f4c(param_1), iVar4 != 0)) {
          plVar5 = *(long **)(param_1 + 0x88);
          uVar7 = 0;
          if (plVar5 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar5[1]) {
              uVar7 = (**(code **)(*plVar5 + 0x10))();
            }
            else {
              uVar7 = 0;
              *(undefined8 *)(param_1 + 0x88) = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
            }
          }
          FUN_1000453bc(uVar7);
          return;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000243a0(long param_1)

{
  FUN_100024164(param_1 + -0x28);
  return;
}




void FUN_1000243a8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      plVar1 = *(long **)(param_1 + 0x88);
      uVar3 = 0;
      if (plVar1 != (long *)0x0) {
        if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
          uVar3 = (**(code **)(*plVar1 + 0x10))();
        }
        else {
          uVar3 = 0;
          *(undefined8 *)(param_1 + 0x88) = 0;
          *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
        }
      }
      FUN_1010a01dc(uVar3);
      uVar4 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x90) = uVar4;
  }
  return;
}




void FUN_100024458(long param_1)

{
  FUN_1000243a8(param_1 + -0x28);
  return;
}




void FUN_100024460(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_1000244a0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x363b0618), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_1000244a0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100024564(long param_1)

{
  FUN_100024460(param_1 + -0x28);
  return;
}




void FUN_10002456c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1010a1540(DAT_10184dc48,0);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = FUN_100020938(uVar2);
    FUN_10001ea90(uVar3,param_1,lVar1,uVar2,*(uint *)(param_2 + 0x9c) >> 8 & 1);
    *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) ^ 0x100;
  }
  return;
}




void FUN_1000245e4(long param_1)

{
  FUN_10002456c(param_1 + -0x28);
  return;
}




void FUN_1000245ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar2 = FUN_1010a1540(DAT_10184dc48,0);
  if (lVar2 != 0) {
    pcVar3 = (char *)FUN_10043dd78(lVar4);
    iVar1 = _strcmp(pcVar3,"Dying");
    if (iVar1 != 0) {
      uVar5 = FUN_100020938(lVar4);
      FUN_10001ee74(uVar5,param_1,lVar2,lVar4,param_3,param_4,param_5,
                    *(uint *)(param_2 + 0x9c) >> 8 & 1);
      *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) ^ 0x100;
    }
  }
  iVar1 = FUN_10034ea2c(*(undefined4 *)(lVar4 + 0x260));
  if (iVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar4 + 0x40);
  fVar6 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar2 + 0x1a0),DAT_101dc26d0);
  fVar6 = (float)NEON_fminnm(ABS((float)param_1) / DAT_101dc2610,0x3f800000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  FUN_1000320fc();
  FUN_100033428();
  FUN_10002e9a0(fVar6 * fVar6 * 0.275 + 0.025,0x3ecccccd,0x41f00000);
  return;
}




void FUN_100024740(long param_1)

{
  FUN_1000245ec(param_1 + -0x28);
  return;
}




void FUN_100024748(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [52];
  undefined4 local_3c;
  
  lVar2 = FUN_1010a1540(DAT_10184dc48,0);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    if (((DAT_101dc25e8 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101dc25e8), iVar1 != 0)) {
      DAT_101dc25e0 = 0x3e3270a0;
      ___cxa_guard_release(&DAT_101dc25e8);
    }
    FUN_1003ab468(uVar3,&DAT_101dc25e0,auStack_70);
    FUN_10001f5f0(local_3c,param_1,lVar2,uVar3,0);
  }
  return;
}




void FUN_100024800(long param_1)

{
  FUN_100024748(param_1 + -0x28);
  return;
}




void FUN_100024808(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (((*(byte *)(lVar3 + 0x2f4) & 1) != 0) && (lVar1 = FUN_1010a1540(DAT_10184dc48,0), lVar1 != 0))
  {
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1a4);
    uVar2 = FUN_10034ea2c(*(undefined4 *)(lVar3 + 0x260));
    FUN_10001f958(uVar4,lVar1,lVar3,uVar2);
    return;
  }
  return;
}




void FUN_10002488c(long param_1)

{
  FUN_100024808(param_1 + -0x28);
  return;
}




void FUN_100024894(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = FUN_1010a1540(DAT_10184dc48,0);
  if (lVar1 != 0) {
    uVar3 = FUN_100020938(uVar2);
    FUN_10001ef48(uVar3,param_1,lVar1,uVar2,param_3,*(uint *)(param_2 + 0x9c) >> 8 & 1);
    *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) ^ 0x100;
  }
  return;
}




void FUN_100024914(long param_1)

{
  FUN_100024894(param_1 + -0x28);
  return;
}




void FUN_10002491c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = FUN_1010a1540(DAT_10184dc48,0);
  if ((lVar2 != 0) && (((int)param_5 == -1 || (iVar1 = FUN_10034ea2c(param_5), iVar1 != 0)))) {
    uVar4 = FUN_100020938(uVar3);
    FUN_10001ef60(uVar4,param_1,lVar2,uVar3,param_3,param_4);
    return;
  }
  return;
}




void FUN_1000249cc(long param_1)

{
  FUN_10002491c(param_1 + -0x28);
  return;
}




void FUN_1000249d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = FUN_1010a1540(DAT_10184dc48,0);
  if ((lVar2 != 0) && (((int)param_5 == -1 || (iVar1 = FUN_10034ea2c(param_5), iVar1 != 0)))) {
    uVar4 = FUN_100020938(uVar3);
    FUN_10001f22c(uVar4,param_1,lVar2,uVar3,param_3,param_4);
    return;
  }
  return;
}




void FUN_100024a84(long param_1)

{
  FUN_1000249d4(param_1 + -0x28);
  return;
}




void FUN_100024a8c(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  iVar3 = 0x200;
  if (param_2 == 0) {
    iVar3 = 0x3e00;
  }
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xffffc1ff | iVar3 + uVar1 & 0x3e00;
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68)) {
    lVar2 = 0;
  }
  FUN_100024ae8(param_1,lVar2 + 0x2fc);
  return;
}




void FUN_100024ae8(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    if ((*param_2 & 0x1f) == 0 || (*(uint *)(param_1 + 0x9c) & 0x3e00) != 0) {
      FUN_1004e9194();
    }
    else {
      FUN_1004e9154();
    }
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100024b78:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x36de0632), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100024b78;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100024c30(long param_1)

{
  FUN_100024a8c(param_1 + -0x28);
  return;
}




void FUN_100024c38(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  iVar3 = 0x4000;
  if (param_2 == 0) {
    iVar3 = 0x7c000;
  }
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xfff83fff | iVar3 + uVar1 & 0x7c000;
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68)) {
    lVar2 = 0;
  }
  FUN_100024ae8(param_1,lVar2 + 0x2fc);
  return;
}




void FUN_100024c94(long param_1)

{
  FUN_100024c38(param_1 + -0x28);
  return;
}




void FUN_100024c9c(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  iVar3 = 0x80000;
  if (param_2 == 0) {
    iVar3 = 0xf80000;
  }
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xff07ffff | iVar3 + uVar1 & 0xf80000;
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68)) {
    lVar2 = 0;
  }
  FUN_100024ae8(param_1,lVar2 + 0x2fc);
  return;
}




void FUN_100024cf8(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1004e8e38();
    return;
  }
  return;
}




void FUN_100024d08(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1004e8e38();
    return;
  }
  return;
}




void FUN_100024d18(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1004e9090();
    return;
  }
  return;
}




void FUN_100024d28(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1004e9090();
    return;
  }
  return;
}




void FUN_100024d38(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x2000000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfdffffff | uVar1;
  return;
}




void FUN_100024d60(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x2000000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfdffffff | uVar1;
  return;
}




undefined8 FUN_100024d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}




undefined8 FUN_100024d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}




void FUN_100024d98(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_100024eec(param_1,param_5);
  uVar1 = (int)param_5 - 1;
  if (param_3 == -1 && uVar1 < 6) {
    lVar2 = FUN_1010a0298(param_1,DAT_10184dad8);
    if (lVar2 != 0) {
      uStack_78 = 0;
      local_80 = 0x3f800000;
      uStack_68 = 0;
      uStack_70 = 0x3f80000000000000;
      uStack_58 = 0x3f800000;
      local_60 = 0;
      local_44 = 0x3f800000;
      local_50 = *param_4;
      local_48 = *(undefined4 *)(param_4 + 1);
      FUN_1000451ac(lVar2,(&PTR_s_Effect_Ping_Danger_10144b6b8)[(int)uVar1],1);
      FUN_100045400(0x40800000,lVar2);
      FUN_100045474(lVar2,&local_80);
      FUN_1000453bc(lVar2);
    }
    if ((((int)param_5 == 3) && (lVar2 = FUN_100345d90(param_2), lVar2 != 0)) &&
       (lVar3 = FUN_1010a1540(DAT_10184dc48,0), lVar3 != 0)) {
      local_80 = CONCAT44(local_80._4_4_,0xffffff00);
      uVar4 = FUN_1004e0150(*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x28),0);
      FUN_10001fca4(0x40900000,lVar3,param_4,&local_80,uVar4);
    }
  }
  return;
}




void FUN_100024eec(long param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 - 3U < 9) {
    pcVar1 = (&PTR_s_build___Sounds_UI_assetbundle_sf_10144b670)[(int)(param_2 - 3U)];
  }
  else {
    pcVar1 = "build://Sounds/UI.assetbundle/sfx__minimap_ping.mp3";
  }
  FUN_100023f08(0x3f800000,param_1,pcVar1,0,*(undefined8 *)(param_1 + 0x80));
  return;
}




void FUN_100024f20(long param_1)

{
  FUN_100024d98(param_1 + -0x28);
  return;
}




void FUN_100024f28(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long local_158 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10034cb1c(local_158);
    iVar1 = FUN_1010af928(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0]);
    if (iVar1 != 0) {
      switch((int)param_4) {
      case 1:
        FUN_1010af998(*param_3,*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0]);
        break;
      case 2:
        FUN_1010af9d0(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0],param_3);
        break;
      case 3:
        FUN_1010afa18(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0],param_3);
        break;
      case 4:
        FUN_1010afa68(*(undefined8 *)(param_1 + 0x50),(undefined4)local_158[0],param_3);
      }
    }
    uVar2 = FUN_1010a0218(param_1,local_158,0x20,DAT_10184dcb8);
    if (uVar2 != 0) {
      uVar4 = (ulong)uVar2;
      plVar5 = local_158;
      do {
        lVar3 = *plVar5;
        if ((lVar3 != 0) && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dcb8)) {
          FUN_10003f1d4(lVar3,param_2,param_4,param_3);
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10002508c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2f4) & 1) != 0) {
    FUN_100345e34();
    lVar1 = FUN_100345d90();
    if (lVar1 != 0) {
      lVar2 = FUN_1003a3524();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -0x28;
      }
      if (((*(uint *)(lVar1 + 0x9c) & 0xe0) == 0) || (0.0 < *(float *)(lVar1 + 0x98))) {
        FUN_100025138(lVar1);
        lVar2 = ((ulong)(*(uint *)(lVar1 + 0x9c) >> 5) & 7) - 2;
        fVar3 = 10.0;
        if ((uint)lVar2 < 3) {
          fVar3 = *(float *)(&DAT_10114b5b4 + lVar2 * 4);
        }
        fVar3 = (float)NEON_fminnm(*(float *)(lVar1 + 0x98) + fVar3,0x41200000);
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        *(float *)(lVar1 + 0x98) = fVar3;
      }
    }
  }
  return;
}




uint FUN_10002512c(long param_1)

{
  return *(uint *)(param_1 + 0x9c) >> 5 & 7;
}




void FUN_100025138(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x9c) >> 5 & 7;
  uVar3 = FUN_1003467f8();
  uVar4 = FUN_100345bbc(uVar4);
  uVar2 = FUN_10034d01c(uVar3,uVar4);
  if ((int)(uVar1 + 1) < (int)uVar2) {
    uVar2 = uVar1 + 1;
  }
  *(uint *)(param_1 + 0x9c) =
       *(uint *)(param_1 + 0x9c) & 0xffffff1f |
       (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU) & 7) << 5;
  return;
}




void FUN_1000251b8(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0x98),0x41200000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x98) = fVar1;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffff1f;
  return;
}




void FUN_1000251e8(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar2 = auStack_30;
  iVar1 = FUN_10002a29c(*(undefined8 *)(param_1 + 0x58),"DanceIntro");
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  if (iVar1 == 0) {
    iVar1 = FUN_10002a29c(uVar5,"Dance");
    if (iVar1 == 0) {
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    FUN_10034cb1c(auStack_30,"Dance");
    pcVar4 = "";
    uVar3 = 1;
  }
  else {
    FUN_10034cb1c(auStack_28,"DanceIntro");
    pcVar4 = "IntroToDance";
    puVar2 = auStack_28;
    uVar3 = 0;
  }
  FUN_100029eb4(0x3f800000,uVar5,puVar2,uVar3,0,pcVar4);
  return;
}




void FUN_100025298(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar2 = auStack_30;
  iVar1 = FUN_10002a29c(*(undefined8 *)(param_1 + 0x58),"TauntIntro");
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  if (iVar1 == 0) {
    iVar1 = FUN_10002a29c(uVar4,"Taunt");
    if (iVar1 == 0) {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    FUN_10034cb1c(auStack_30,"Taunt");
    pcVar3 = "AttackToIdle";
  }
  else {
    FUN_10034cb1c(auStack_28,"TauntIntro");
    pcVar3 = "IntroToTaunt";
    puVar2 = auStack_28;
  }
  FUN_100029eb4(0x3f800000,uVar4,puVar2,0,0,pcVar3);
  return;
}




undefined8 FUN_100025344(long param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  
  if (*param_2 != -0x7ee3623b && *param_2 != 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = FUN_100331a84(param_2);
    if (lVar2 != 0) {
      uVar3 = FUN_100345b94();
      lVar2 = FUN_10034c450(uVar3,*(undefined8 *)(lVar2 + 8));
      if (((lVar2 != 0) && (lVar2 = FUN_1000254d4(param_1,lVar2), lVar2 != 0)) &&
         (lVar4 = FUN_1010a0298(param_1,DAT_10184dd78), lVar4 != 0)) {
        FUN_10002c480(lVar4,*(undefined8 *)(lVar2 + 0x40));
        FUN_10002c4e0(lVar4,*(undefined8 *)(lVar2 + 0x48),lVar2 + 0x50);
        FUN_10002c524(lVar4,lVar7 + 0x2fc);
        lVar7 = FUN_1010a0298(param_1,DAT_10184dd88);
        if (lVar7 != 0) {
          uVar5 = FUN_1004d2538(*(undefined8 *)(lVar2 + 8));
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_1010acd98(*(undefined8 *)(lVar2 + 8));
            uVar3 = 3;
          }
          else {
            uVar5 = FUN_1004d2538(*(undefined8 *)(lVar2 + 0x10));
            if ((uVar5 & 1) != 0) {
              FUN_10002cc10(lVar7,lVar4 + 0x28,param_1 + 0x30,1,0);
              return 1;
            }
            uVar5 = 0x811c9dc5;
            pcVar6 = *(char **)(lVar2 + 0x10);
            cVar1 = *pcVar6;
            while (cVar1 != '\0') {
              pcVar6 = pcVar6 + 1;
              uVar5 = (ulong)(((uint)uVar5 ^ (int)cVar1) * 0x1000193);
              cVar1 = *pcVar6;
            }
            uVar3 = 2;
          }
          FUN_10002cc10(lVar7,lVar4 + 0x28,param_1 + 0x30,uVar3,uVar5);
          return 1;
        }
      }
    }
  }
  return 0;
}




long FUN_1000254d4(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68) {
    lVar3 = 0;
  }
  puVar2 = (undefined8 *)FUN_100465e48(lVar3);
  if ((puVar2 != (undefined8 *)0x0) && (plVar5 = *(long **)(param_2 + 0x78), plVar5 != (long *)0x0))
  {
    puVar4 = (undefined8 *)*plVar5;
    while (puVar4 != (undefined8 *)0x0) {
      iVar1 = _strcmp((char *)*puVar4,(char *)*puVar2);
      if (iVar1 == 0) {
        if (*plVar5 != 0) {
          return *plVar5;
        }
        break;
      }
      puVar4 = (undefined8 *)plVar5[1];
      plVar5 = plVar5 + 1;
    }
  }
  iVar1 = FUN_1004d2538(*(undefined8 *)(param_2 + 0x40));
  lVar3 = 0;
  if (iVar1 == 0) {
    lVar3 = param_2;
  }
  return lVar3;
}




void FUN_100025574(long param_1)

{
  FUN_100025344(param_1 + -0x28);
  return;
}




void FUN_10002557c(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100025588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x1a8))(param_2,param_1);
  return;
}




void FUN_10002558c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100025598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -0x30) + 0x1a8))((long *)(param_2 + -0x30),param_1);
  return;
}




void FUN_10002559c(long param_1)

{
  FUN_100463fe0(*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_1000255a4(long param_1)

{
  FUN_100463fe0(*(undefined8 *)(param_1 + -0x20));
  return;
}




void FUN_1000255ac(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar1 == 0) {
LAB_100025604:
      FUN_100463fe0(lVar3,param_2);
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dc68) {
      uVar2 = FUN_10002a6cc(lVar1,param_2);
      if ((uVar2 & 1) != 0) {
        return;
      }
      goto LAB_100025604;
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while( true );
}




void FUN_100025618(long param_1)

{
  FUN_1000255ac(param_1 + -0x30);
  return;
}




void FUN_100025620(long param_1,undefined4 param_2)

{
  undefined4 local_18 [2];
  
  local_18[0] = param_2;
  FUN_1003ab468(*(undefined8 *)(param_1 + 0x10),local_18);
  return;
}




void FUN_100025648(long param_1,undefined4 param_2)

{
  undefined4 local_18 [2];
  
  local_18[0] = param_2;
  FUN_1003ab468(*(undefined8 *)(param_1 + -0x20),local_18);
  return;
}




void FUN_100025670(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_10002569c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x11a60336), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_10002569c;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100025754(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025780:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xb0d0275), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025780;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100025838(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar5 + 0x303) & 1) == 0) {
      uVar1 = FUN_100490540(lVar5);
      if (((((uVar1 & 1) == 0) &&
           (uVar4 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f, (int)uVar4 != 0x1f)) &&
          (*(short *)(lVar5 + uVar4 * 0x38 + 0x90) == 2)) &&
         ((uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578), (uVar4 & 1) == 0
          && (iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2584), iVar2 != 0))))
      {
        uVar6 = *(undefined8 *)(param_1 + 0x58);
        FUN_1000212b8(param_1);
        FUN_100029eb4(uVar6,&DAT_101dc2584,0,1,"MoveToFromBrush");
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc256c);
      if ((iVar2 != 0) &&
         (uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564), (uVar4 & 1) == 0))
      {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c);
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2580);
      if (iVar2 != 0) {
        uVar3 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
        if (((uVar3 | uVar1) & 1) == 0) {
          FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580);
        }
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2594);
      if (iVar2 != 0) {
        uVar3 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
        if (((uVar3 | uVar1) & 1) == 0) {
          FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594);
        }
      }
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a0);
      if (iVar2 != 0) {
        uVar3 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
        if (((uVar3 | uVar1) & 1) == 0) {
          FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0);
          return;
        }
      }
    }
  }
  return;
}




void FUN_100025a1c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar3 + 0x303) & 1) == 0) {
      uVar2 = FUN_100490540(lVar3);
      if (((((uVar2 & 1) == 0) &&
           (uVar2 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f, (int)uVar2 != 0x1f)) &&
          (*(short *)(lVar3 + uVar2 * 0x38 + 0x90) == 2)) &&
         ((iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580),
          iVar1 != 0 &&
          (iVar1 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2588), iVar1 != 0)))) {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        FUN_1000212b8(param_1);
        FUN_100029eb4(uVar4,&DAT_101dc2588,0,1,"MoveToFromBrush");
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564);
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
      }
      iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0);
      if (iVar1 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
        return;
      }
    }
  }
  return;
}




void FUN_100025b9c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_10002508c();
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025bc4:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xdc302c4), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025bc4;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100025c74(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025c98:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x163803be), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025c98;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100025d48(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025d7c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x22ef04a2), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025d7c;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100025e3c(long param_1)

{
  FUN_100025d48(param_1 + -0x28);
  return;
}




void FUN_100025e44(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025e78:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x22450493), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025e78;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100025f38(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100025f78:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x3be20659), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100025f78;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_100026040(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar5 = (ulong)*(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
        if ((((int)uVar5 != 0x1f) &&
            (*(short *)(*(long *)(param_1 + 0x10) + uVar5 * 0x38 + 0x90) == 2)) &&
           (iVar1 = FUN_100022f4c(param_1), iVar1 != 0)) {
          plVar2 = *(long **)(param_1 + 0x88);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 0x88) = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
            }
          }
          FUN_1000453bc(uVar4);
          return;
        }
        plVar2 = *(long **)(param_1 + 0x88);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x88) = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
          }
        }
        FUN_1000453dc(uVar4);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100026164(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_100490540(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar2 = FUN_10002a62c(*(long *)(param_1 + 0x58),&DAT_101dc2564);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c),
       iVar2 != 0)) {
      iVar2 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2568);
      if (iVar2 == 0) {
        iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc256c);
        if (iVar2 != 0) {
          FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564);
        }
      }
      else {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc2568);
      }
    }
    iVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580),
       iVar2 != 0)) {
      uVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc257c);
      if (((uVar3 ^ 1 | uVar1) & 1) == 0) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc257c);
      }
      else {
        iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc2580);
        if (iVar2 != 0) {
          FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
        }
      }
    }
    iVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594),
       iVar2 != 0)) {
      uVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2590);
      if (((uVar3 ^ 1 | uVar1) & 1) == 0) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2590);
      }
      else {
        iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2594);
        if (iVar2 != 0) {
          FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
        }
      }
    }
    iVar2 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0),
       iVar2 != 0)) {
      uVar3 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc259c);
      if (((uVar3 ^ 1 | uVar1) & 1) == 0) {
        FUN_10002a364(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc259c);
        return;
      }
      iVar2 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc25a0);
      if (iVar2 != 0) {
        FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
        return;
      }
    }
  }
  return;
}




void FUN_1000263b8(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  uVar4 = (ulong)*(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
  if ((((int)uVar4 == 0x1f) ||
      (1 < *(ushort *)(*(long *)(param_1 + 0x10) + uVar4 * 0x38 + 0x90) - 3)) &&
     (uVar4 = FUN_10002a294(*(long *)(param_1 + 0x58),&DAT_101dc25cc), (uVar4 & 1) == 0)) {
    if ((*(uint *)(param_1 + 0x9c) >> 0x18 & 1) == 0) {
      iVar1 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a8);
      if ((iVar1 == 0) ||
         (uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25a8), (uVar4 & 1) != 0))
      goto LAB_10002640c;
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      FUN_1000212b8(param_1);
      puVar2 = (undefined4 *)&DAT_101dc25a8;
      pcVar3 = "IdleSheathToIdle";
    }
    else {
      if (((DAT_101dc25f8 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101dc25f8), iVar1 != 0))
      {
        DAT_101dc25f0 = DAT_101dc25a4;
        ___cxa_guard_release(&DAT_101dc25f8);
      }
      iVar1 = FUN_10002a020(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25f0);
      if ((iVar1 == 0) ||
         (uVar4 = FUN_10002a62c(*(undefined8 *)(param_1 + 0x58),&DAT_101dc25f0), (uVar4 & 1) != 0))
      goto LAB_10002640c;
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      FUN_1000212b8(param_1);
      puVar2 = &DAT_101dc25a4;
      pcVar3 = "MoveSheathToMove";
    }
    FUN_100029eb4(uVar5,puVar2,0,0,pcVar3);
  }
LAB_10002640c:
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564,&DAT_101dc2568);
  if (iVar1 != 0) {
    FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2564);
  }
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578,&DAT_101dc257c);
  if (iVar1 != 0) {
    FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2578);
  }
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c,&DAT_101dc2590);
  if (iVar1 != 0) {
    FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc258c);
  }
  iVar1 = FUN_10002a678(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598,&DAT_101dc259c);
  if (iVar1 == 0) {
    return;
  }
  FUN_10002a4f4(*(undefined8 *)(param_1 + 0x58),&DAT_101dc2598);
  return;
}




void FUN_1000265c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined7 local_a4;
  undefined4 uStack_9d;
  undefined1 local_99;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (((DAT_101dc2608 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_101dc2608), iVar3 != 0)) {
    DAT_101dc2600 = 0x3e3270a0;
    ___cxa_guard_release(&DAT_101dc2608);
  }
  uVar2 = (int)param_4 - 1;
  if (uVar2 < 6) {
    pcVar6 = (&PTR_s_Effect_Ping_Danger_10144b6b8)[(int)uVar2];
    uVar7 = 0x41000000;
    if ((int)param_4 != 3) {
      uVar7 = 0x40800000;
    }
    lVar4 = FUN_100345d90(param_2);
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    cVar1 = *pcVar6;
    local_b0 = 0x811c9dc5;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      local_b0 = (local_b0 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
    local_a8 = 0xffffffff;
    local_a4 = 0;
    uStack_9d = 0;
    local_99 = 0xff;
    local_98 = 0;
    local_94 = DAT_101dc1cb8;
    local_8c = 0x3f8000003f800000;
    local_84 = 0x3f800000;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0x10100000000;
    local_68 = 0;
    local_ac = uVar7;
    local_b8 = FUN_1003a2dc8(uVar5);
    local_74 = (uint)(lVar4 != 0);
    iVar3 = FUN_100464050(uVar5,&DAT_101dc2600);
    if (iVar3 == 0) {
      FUN_1003a2de0(uVar5,&local_d0);
    }
    else {
      FUN_1003c1f88(uVar5,&local_d0,&DAT_101dc2600);
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10004787c(*(long *)(param_1 + 0x40),param_2,param_4,param_5);
  }
  return;
}




void thunk_FUN_100023f08(void)

{
  FUN_100023f08();
  return;
}




void thunk_FUN_100023f9c(void)

{
  FUN_100023f9c();
  return;
}




void FUN_100026798(long param_1)

{
  FUN_100023f08(param_1 + -0x28);
  return;
}




void FUN_1000267a0(long param_1)

{
  FUN_100023f9c(param_1 + -0x28);
  return;
}




void FUN_1000267a8(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR_thunk_FUN_100020a1c_10144b2d0;
  param_1[5] = &PTR_FUN_10144b4a0;
  param_1[6] = &PTR_FUN_10144b640;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar1 = (ulong)*(uint6 *)((long)param_1 + 0x9c) & 0xfffffe0000000007;
  *(int *)((long)param_1 + 0x9c) = (int)uVar1;
  *(short *)(param_1 + 0x14) = (short)(uVar1 >> 0x20);
  return;
}




void FUN_100026810(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100026818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




uint * FUN_10002681c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_1000268a4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100026a08(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_10002690c(uint *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_2;
  if (uVar1 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar1) {
      FUN_10002698c(param_1,param_2);
    }
    uVar2 = (ulong)*param_1;
    if (*param_1 < uVar1) {
      do {
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar2 * 8) = param_3;
        uVar2 = uVar2 + 1;
      } while ((param_2 & 0xffffffff) != uVar2);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_10002698c(uint *param_1,uint param_2)

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




void FUN_100026a08(uint *param_1,undefined8 *param_2)

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
    FUN_100026a88(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100026a88(uint *param_1,uint param_2)

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




long FUN_100026b04(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_100026b9c:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) goto LAB_100026b9c;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 8;
}




void FUN_100026bb4(uint *param_1,uint param_2)

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




void FUN_100026c30(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_100026c5c(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




void FUN_100026c88(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




void FUN_100026cb4(void)

{
  if ((DAT_10184dc80 & 1) == 0) {
    DAT_10184dc78 = DAT_101872e38;
    DAT_10184dc80 = 1;
  }
  return;
}




void FUN_100026ce0(void)

{
  if ((DAT_10184dc90 & 1) == 0) {
    DAT_10184dc88 = DAT_101872e38;
    DAT_10184dc90 = 1;
  }
  return;
}




void FUN_100026d0c(void)

{
  if ((DAT_10184dca0 & 1) == 0) {
    DAT_10184dc98 = DAT_101872e38;
    DAT_10184dca0 = 1;
  }
  return;
}




void FUN_100026d38(void)

{
  if ((DAT_10184dcb0 & 1) == 0) {
    DAT_10184dca8 = DAT_101872e38;
    DAT_10184dcb0 = 1;
  }
  return;
}




void FUN_100026d64(void)

{
  if ((DAT_10184dcc0 & 1) == 0) {
    DAT_10184dcb8 = DAT_101872e38;
    DAT_10184dcc0 = 1;
  }
  return;
}




void FUN_100026d90(void)

{
  if ((DAT_10184db70 & 1) == 0) {
    DAT_10184db68 = DAT_101872e38;
    DAT_10184db70 = 1;
  }
  return;
}




void FUN_100026dbc(void)

{
  if ((DAT_10184dc50 & 1) == 0) {
    DAT_10184dc48 = DAT_101872e38;
    DAT_10184dc50 = 1;
  }
  return;
}




void FUN_100026de8(void)

{
  if ((DAT_10184dcd0 & 1) == 0) {
    DAT_10184dcc8 = DAT_101872e38;
    DAT_10184dcd0 = 1;
  }
  return;
}




void FUN_100026e14(void)

{
  if ((DAT_10184dce0 & 1) == 0) {
    DAT_10184dcd8 = DAT_101872e38;
    DAT_10184dce0 = 1;
  }
  return;
}




void FUN_100026e40(void)

{
  if ((DAT_10184dcf0 & 1) == 0) {
    DAT_10184dce8 = DAT_101872e38;
    DAT_10184dcf0 = 1;
  }
  return;
}




void FUN_100026e6c(void)

{
  if ((DAT_10184dd00 & 1) == 0) {
    DAT_10184dcf8 = DAT_101872e38;
    DAT_10184dd00 = 1;
  }
  return;
}




void FUN_100026e98(void)

{
  if ((DAT_10184dd10 & 1) == 0) {
    DAT_10184dd08 = DAT_101872e38;
    DAT_10184dd10 = 1;
  }
  return;
}




void FUN_100026ec4(void)

{
  if ((DAT_10184dd20 & 1) == 0) {
    DAT_10184dd18 = DAT_101872e38;
    DAT_10184dd20 = 1;
  }
  return;
}




void FUN_100026ef0(void)

{
  if ((DAT_10184dd30 & 1) == 0) {
    DAT_10184dd28 = DAT_101872e38;
    DAT_10184dd30 = 1;
  }
  return;
}




void FUN_100026f1c(void)

{
  if ((DAT_10184dd40 & 1) == 0) {
    DAT_10184dd38 = DAT_101872e38;
    DAT_10184dd40 = 1;
  }
  return;
}




void FUN_100026f48(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_100026f74(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




void FUN_100026fa0(void)

{
  if ((DAT_10184dd60 & 1) == 0) {
    DAT_10184dd58 = DAT_101872e38;
    DAT_10184dd60 = 1;
  }
  return;
}




void FUN_100026fcc(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_100026ff8(void)

{
  if ((DAT_10184dd80 & 1) == 0) {
    DAT_10184dd78 = DAT_101872e38;
    DAT_10184dd80 = 1;
  }
  return;
}




void FUN_100027024(void)

{
  if ((DAT_10184dd90 & 1) == 0) {
    DAT_10184dd88 = DAT_101872e38;
    DAT_10184dd90 = 1;
  }
  return;
}




void FUN_100027050(void)

{
  if ((DAT_10184dda0 & 1) == 0) {
    DAT_10184dd98 = DAT_101872e38;
    DAT_10184dda0 = 1;
  }
  return;
}




void FUN_10002707c(void)

{
  if ((DAT_10184ddb0 & 1) == 0) {
    DAT_10184dda8 = DAT_101872e38;
    DAT_10184ddb0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000270a8(void)

{
  uRam0000000101dc26d8 = 0x7f7fffff7f7fffff;
  _DAT_101dc26d0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc26e8 = 0x7f7fffff7f7fffff;
  _DAT_101dc26e0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc26f8 = 0x7f7fffff7f7fffff;
  _DAT_101dc26f0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2708 = 0x7f7fffff7f7fffff;
  _DAT_101dc2700 = 0x7f7fffff7f7fffff;
  DAT_101dc2710 = 0x7f7fffff;
  DAT_101dc2714 = 0x7f7fffff;
  DAT_101dc2718 = 0x7f7fffff;
  DAT_101dc271c = 0x3f800000;
  uRam0000000101dc2728 = 0x7f7fffff7f7fffff;
  _DAT_101dc2720 = 0x7f7fffff7f7fffff;
  DAT_101dc2730 = 0x7f7fffff;
  DAT_101dc2734 = 0x3eb33333;
  uRam0000000101dc2740 = 0x7f7fffff7f7fffff;
  _DAT_101dc2738 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2750 = 0x7f7fffff7f7fffff;
  _DAT_101dc2748 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2760 = 0x7f7fffff7f7fffff;
  _DAT_101dc2758 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2770 = 0x7f7fffff7f7fffff;
  _DAT_101dc2768 = 0x7f7fffff7f7fffff;
  DAT_101dc2778 = 0x7f7fffff;
  DAT_101dc277c = 0x7f7fffff;
  DAT_101dc2780 = 0x7f7fffff;
  DAT_101dc263c = 0xff7fffff;
  uRam0000000101dc2618 = 0xff7fffffff7fffff;
  _DAT_101dc2610 = 0xff7fffffff7fffff;
  DAT_101dc2620 = 0;
  DAT_101dc2628 = 0;
  uRam0000000101dc2634 = 0xff7fffffff7fffff;
  _DAT_101dc262c = 0xff7fffffff7fffff;
  DAT_101dc2644 = NEON_fmov(0xbf800000,4);
  DAT_101dc264c = 0x3f000000;
  DAT_101dc2650 = 0;
  DAT_101dc2658 = 0;
  uRam0000000101dc2668 = 0xff7fffffff7fffff;
  _DAT_101dc2660 = 0xff7fffffff7fffff;
  uRam0000000101dc2678 = 0xff7fffffff7fffff;
  _DAT_101dc2670 = 0xff7fffffff7fffff;
  uRam0000000101dc2688 = 0xff7fffffff7fffff;
  _DAT_101dc2680 = 0xff7fffffff7fffff;
  uRam0000000101dc2698 = 0xbf800000bf800000;
  _DAT_101dc2690 = 0xbf80000000000000;
  DAT_101dc26a0 = 0xbf800000;
  DAT_101dc26b0 = 0;
  DAT_101dc26b8 = 0;
  DAT_101dc26c0 = 0;
  DAT_101dc2550 = 0xff;
  DAT_101dc2552 = 0xffff;
  DAT_101dc2554 = 0xffff;
  DAT_101dc2640 = DAT_101dc263c;
  DAT_101dc26a4 = DAT_101dc263c;
  DAT_101dc26a8 = DAT_101dc263c;
  DAT_101dc26ac = DAT_101dc263c;
  DAT_101dc26b4 = DAT_101dc263c;
  FUN_1003ba954(&DAT_101dc2558,0);
  FUN_10034cb1c(&DAT_101dc255c,"Dance");
  FUN_10034cb1c(&DAT_101dc2560,"Taunt");
  FUN_10034cb1c(&DAT_101dc2564,"Idle");
  FUN_10034cb1c(&DAT_101dc2568,"IdleCombat");
  FUN_10034cb1c(&DAT_101dc256c,"IdleBrush");
  FUN_10034cb1c(&DAT_101dc2570,"Sprint");
  FUN_10034cb1c(&DAT_101dc2574,"FastMove");
  FUN_10034cb1c(&DAT_101dc2578,"Move");
  FUN_10034cb1c(&DAT_101dc257c,"MoveCombat");
  FUN_10034cb1c(&DAT_101dc2580,"MoveBrush");
  FUN_10034cb1c(&DAT_101dc2584,"MoveIntoBrush");
  FUN_10034cb1c(&DAT_101dc2588,"MoveFromBrush");
  FUN_10034cb1c(&DAT_101dc258c,"MoveStart");
  FUN_10034cb1c(&DAT_101dc2590,"MoveStartCombat");
  FUN_10034cb1c(&DAT_101dc2594,"MoveStartBrush");
  FUN_10034cb1c(&DAT_101dc2598,"MoveStop");
  FUN_10034cb1c(&DAT_101dc259c,"MoveStopCombat");
  FUN_10034cb1c(&DAT_101dc25a0,"MoveStopBrush");
  FUN_10034cb1c(&DAT_101dc25a4,"MoveSheath");
  FUN_10034cb1c(&DAT_101dc25a8,"IdleSheath");
  FUN_10034cb1c(&DAT_101dc25ac,"StrafeForward");
  FUN_10034cb1c(&DAT_101dc25b0,"StrafeBack");
  FUN_10034cb1c(&DAT_101dc25b4,"StrafeLeft");
  FUN_10034cb1c(&DAT_101dc25b8,"StrafeRight");
  FUN_10034cb1c(&DAT_101dc25bc,"StrafeForwardStart");
  FUN_10034cb1c(&DAT_101dc25c0,"StrafeBackStart");
  FUN_10034cb1c(&DAT_101dc25c4,"StrafeLeftStart");
  FUN_10034cb1c(&DAT_101dc25c8,"StrafeRightStart");
  FUN_10034cb1c(&DAT_101dc25cc,"Withdraw");
  return;
}




void FUN_1000273f4(long param_1)

{
  long lVar1;
  
  DAT_10184dd18 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd18 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd18 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000284b4;
  *(code **)(lVar1 + 0xb8) = FUN_1000284f4;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd18;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_100027520,0);
  FUN_1010a0990(param_1,0xb0d0275,FUN_100027644,0);
  FUN_1010a0990(param_1,0x11a60336,FUN_100027670,0);
  FUN_1010a0990(param_1,0xdc302c4,thunk_FUN_100027f14,0);
  FUN_1010a0990(param_1,0x22ef04a2,FUN_10002769c,0);
  FUN_1010a0990(param_1,0x443e06d8,FUN_1000276d0,0);
  FUN_1010a0990(param_1,0x2a7d0549,FUN_1000276fc,0);
  return;
}




void FUN_100027520(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x28) + 0x88) & 0x1f;
  if (((int)uVar2 == 0x1f) || (1 < *(ushort *)(*(long *)(param_1 + 0x28) + uVar2 * 0x38 + 0x90) - 3)
     ) {
    FUN_1000320fc();
    iVar1 = FUN_1000334b8();
    if (iVar1 != 0) {
      lVar3 = 0;
      do {
        fVar6 = *(float *)(param_1 + 0x38 + lVar3);
        if (0.0 < fVar6) {
          fVar4 = (float)FUN_1010a1cd4();
          fVar6 = fVar6 - fVar4;
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          *(float *)(param_1 + 0x38 + lVar3) = fVar6;
        }
        fVar6 = *(float *)(param_1 + 0x98);
        if (0.0 < fVar6) {
          fVar4 = (float)FUN_1010a1cd4();
          fVar6 = fVar6 - fVar4;
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          *(float *)(param_1 + 0x98) = fVar6;
        }
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0x60);
      lVar3 = *(long *)(param_1 + 0x28);
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
      if (((int)uVar2 != 0x1f) && (*(short *)(lVar3 + uVar2 * 0x38 + 0x90) == 1)) {
        FUN_100027734(param_1);
        return;
      }
      fVar5 = *(float *)(*(long *)(lVar3 + 0x38) + 0x204);
      fVar4 = *(float *)(*(long *)(lVar3 + 0x38) + 0x208);
      fVar6 = fVar5;
      if (fVar5 <= fVar4) {
        fVar6 = fVar4;
      }
      iVar1 = _rand();
      *(float *)(param_1 + 0x94) = fVar5 + (float)iVar1 * (fVar6 - fVar5) * 4.656613e-10;
    }
  }
  return;
}




void FUN_100027644(undefined8 param_1)

{
  FUN_100027e2c(param_1,0);
  return;
}




void FUN_100027670(void)

{
  FUN_100027ea0();
  return;
}




void thunk_FUN_100027f14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 auStack_38 [2];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  FUN_10034cb1c(auStack_38,"death");
  uVar1 = FUN_100027b64(param_1,lVar2 + 0x200,auStack_38[0]);
  FUN_100027c84(param_1,1,1,param_1 + 0x60,uVar1);
  return;
}




void FUN_10002769c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100027f88((float)*(double *)((ulong)&stack0x00000000 | 8),param_1,in_stack_00000000);
  return;
}




void FUN_1000276d0(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_1000280c4(param_1,in_stack_00000000);
  return;
}




void FUN_1000276fc(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10002818c(param_1,in_stack_00000000,*(int *)((ulong)&stack0x00000000 | 8) != 0);
  return;
}




void FUN_100027734(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48 [2];
  
  fVar5 = *(float *)(param_1 + 0x94);
  fVar4 = (float)FUN_1010a1cd4();
  fVar5 = fVar5 - fVar4;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x94) = fVar5;
  if (fVar5 <= 0.0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    FUN_10034cb1c(local_48,"idle");
    uVar2 = FUN_100027b64(param_1,lVar3 + 0x200,local_48[0]);
    FUN_100027c84(param_1,1,0,param_1 + 0x30,uVar2);
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    fVar6 = *(float *)(lVar3 + 0x204);
    fVar5 = *(float *)(lVar3 + 0x208);
    fVar4 = fVar6;
    if (fVar6 <= fVar5) {
      fVar4 = fVar5;
    }
    iVar1 = _rand();
    *(float *)(param_1 + 0x94) = fVar6 + (float)iVar1 * (fVar4 - fVar6) * 4.656613e-10;
  }
  return;
}




void FUN_100027804(long param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  iVar3 = FUN_100126d70();
  pcVar2 = "en";
  if (iVar3 == 8) {
    pcVar2 = "ko";
  }
  pcVar1 = "zh";
  if (iVar3 != 0xf) {
    pcVar1 = pcVar2;
  }
  pcVar2 = "ja";
  if (iVar3 != 6) {
    pcVar2 = pcVar1;
  }
  *(char **)(param_1 + 0xa0) = pcVar2;
  *(undefined4 *)(param_1 + 0x90) =
       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x214);
  FUN_1000278b8(param_1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  fVar6 = *(float *)(lVar4 + 0x204);
  fVar5 = *(float *)(lVar4 + 0x208);
  fVar7 = fVar6;
  if (fVar6 <= fVar5) {
    fVar7 = fVar5;
  }
  iVar3 = _rand();
  *(float *)(param_1 + 0x94) = fVar6 + (float)iVar3 * (fVar7 - fVar6) * 4.656613e-10;
  return;
}




void FUN_1000278b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x200;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  FUN_10034cb1c(local_38,"idle");
  uVar2 = FUN_100027bf4(param_1,lVar1,local_38[0],uVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  FUN_10034cb1c(local_38,"attack");
  uVar2 = FUN_100027bf4(param_1,lVar1,local_38[0],uVar2);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  FUN_10034cb1c(local_38,"movement");
  uVar2 = FUN_100027bf4(param_1,lVar1,local_38[0],uVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  FUN_10034cb1c(local_38,"death");
  uVar2 = FUN_100027bf4(param_1,lVar1,local_38[0],uVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  FUN_10034cb1c(local_38,"takeDamage");
  uVar2 = FUN_100027bf4(param_1,lVar1,local_38[0],uVar2);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  FUN_10034cb1c(local_38,"learnUltimate");
  uVar2 = FUN_100027bf4(param_1,lVar1,local_38[0],uVar2);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  return;
}




void FUN_1000279f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = lVar2;
  if (lVar2 != 0) {
    do {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dd48) break;
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    do {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dd58) break;
      lVar2 = *(long *)(lVar2 + 0x20);
    } while (lVar2 != 0);
    if (lVar1 != 0) {
      FUN_1010a02fc(param_1);
    }
    if (lVar2 != 0) {
      FUN_1010a02fc(param_1,lVar2);
      return;
    }
  }
  return;
}




void FUN_100027a90(int param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long local_b8 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_b8,0x10,DAT_10184dd18,0);
  if (uVar1 != 0) {
    uVar2 = (ulong)uVar1;
    plVar3 = local_b8;
    do {
      if (param_1 == 0) {
        *(int *)(*plVar3 + 0xa8) = *(int *)(*plVar3 + 0xa8) + -1;
      }
      else {
        FUN_1000279f8();
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100027b34(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  *(undefined4 *)(param_1 + 0x90) = param_2;
  do {
    *(undefined8 *)(param_1 + lVar1 + 0x30) = 0;
    *(undefined4 *)(param_1 + lVar1 + 0x3c) = 0xffffffff;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x60);
  FUN_1000278b8();
  return;
}




undefined4 FUN_100027b5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




long FUN_100027b64(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_38 [2];
  
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  piVar2 = (int *)*puVar4;
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (*piVar2 == *(int *)(param_1 + 0x90)) {
      puVar3 = (undefined8 *)**(long **)(piVar2 + 2);
      plVar1 = *(long **)(piVar2 + 2);
      while (puVar3 != (undefined8 *)0x0) {
        FUN_10034cb1c(local_38,*puVar3);
        if (local_38[0] == param_3) {
          return *plVar1;
        }
        puVar3 = (undefined8 *)plVar1[1];
        plVar1 = plVar1 + 1;
      }
    }
    puVar4 = puVar4 + 1;
    piVar2 = (int *)*puVar4;
  } while( true );
}




undefined8 FUN_100027bf4(undefined8 param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  lVar2 = FUN_100027b64(param_1,param_2,param_3);
  if (lVar2 != 0) {
    plVar4 = *(long **)(lVar2 + 0x18);
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      uVar3 = 0;
      do {
        iVar1 = _strcmp(param_4,*(char **)(lVar2 + 8));
        if (iVar1 == 0) {
          return *(undefined8 *)(*plVar4 + 0x10);
        }
        iVar1 = _strcmp("en",*(char **)(*plVar4 + 8));
        if (iVar1 == 0) {
          uVar3 = *(undefined8 *)(*plVar4 + 0x10);
        }
        plVar4 = plVar4 + 1;
        lVar2 = *plVar4;
      } while (lVar2 != 0);
      return uVar3;
    }
  }
  return 0;
}




void FUN_100027c84(ulong param_1,int param_2,uint param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_5 == 0) {
    return;
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    return;
  }
  uVar3 = param_1;
  if ((param_2 != 0) &&
     (uVar3 = FUN_10034ea2c(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x260)), (int)uVar3 == 0)) {
    return;
  }
  if (((param_3 & 1) == 0) && (0.0 < *(float *)(param_1 + 0x98))) {
    return;
  }
  if (0.0 < *(float *)(param_4 + 8)) {
    return;
  }
  fVar6 = *(float *)(param_5 + 8);
  if (fVar6 < 1.0) {
    uVar1 = _rand();
    uVar3 = (ulong)uVar1;
    if (fVar6 < (float)(int)uVar1 * 4.656613e-10) {
      return;
    }
  }
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = lVar5;
  if (lVar5 != 0) {
    do {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184dd48) break;
      lVar4 = *(long *)(lVar4 + 0x20);
    } while (lVar4 != 0);
    do {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184dd58) break;
      lVar5 = *(long *)(lVar5 + 0x20);
    } while (lVar5 != 0);
    if (param_3 == 0) goto LAB_100027dac;
    if (lVar4 != 0) {
      uVar3 = FUN_1010a02fc(param_1);
    }
    if (lVar5 != 0) {
      uVar3 = FUN_1010a02fc(param_1,lVar5);
      lVar5 = 0;
    }
  }
  lVar4 = 0;
LAB_100027dac:
  if (((lVar4 == 0 && lVar5 == 0) && (lVar4 = FUN_100028210(uVar3,param_4), lVar4 != 0)) &&
     (iVar2 = FUN_1000283b8(param_1,lVar4,*(undefined1 *)(param_5 + 0x14)), iVar2 != 0)) {
    fVar7 = *(float *)(param_5 + 0xc);
    fVar6 = fVar7;
    if (fVar7 <= *(float *)(param_5 + 0x10)) {
      fVar6 = *(float *)(param_5 + 0x10);
    }
    iVar2 = _rand();
    *(float *)(param_4 + 8) = fVar7 + (float)iVar2 * (fVar6 - fVar7) * 4.656613e-10;
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    fVar8 = *(float *)(lVar4 + 0x20c);
    fVar7 = *(float *)(lVar4 + 0x210);
    fVar6 = fVar8;
    if (fVar8 <= fVar7) {
      fVar6 = fVar7;
    }
    iVar2 = _rand();
    *(float *)(param_1 + 0x98) = fVar8 + (float)iVar2 * (fVar6 - fVar8) * 4.656613e-10;
  }
  return;
}




void FUN_100027e2c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_38 [2];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  FUN_10034cb1c(local_38,"movement");
  uVar1 = FUN_100027b64(param_1,lVar2 + 0x200,local_38[0]);
  FUN_100027c84(param_1,1,0,param_1 + 0x50,uVar1);
  return;
}




void FUN_100027ea0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_38 [2];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  FUN_10034cb1c(local_38,"attack");
  uVar1 = FUN_100027b64(param_1,lVar2 + 0x200,local_38[0]);
  FUN_100027c84(param_1,1,0,param_1 + 0x40,uVar1);
  return;
}




void FUN_100027f14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_38 [2];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  FUN_10034cb1c(local_38,"death");
  uVar1 = FUN_100027b64(param_1,lVar2 + 0x200,local_38[0]);
  FUN_100027c84(param_1,1,1,param_1 + 0x60,uVar1);
  return;
}




void FUN_100027f88(float param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(*(int *)(param_3 + 0x260) != *(int *)(*(long *)(param_2 + 0x28) + 0x260));
  }
  uVar2 = uVar2 & param_3 != 0;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_3 + 0x2f4) >> 4 & 1;
  }
  uVar3 = uVar3 & uVar2;
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
    fVar5 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1a0),DAT_101dc2860);
    if (0.5 <= *(float *)(lVar4 + 0x308) / DAT_101dc27a0) {
      uVar2 = (uint)(DAT_101dc27a0 * 0.2 <= param_1);
    }
    else {
      uVar2 = 1;
    }
  }
  if ((uVar2 & uVar3) != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 0x38);
    FUN_10034cb1c(local_38,"takeDamage");
    uVar1 = FUN_100027b64(param_2,lVar4 + 0x200,local_38[0]);
    FUN_100027c84(param_2,1,0,param_2 + 0x70,uVar1);
  }
  return;
}




void FUN_1000280c4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38 [2];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  iVar1 = FUN_1003e1178(lVar3,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_1003a4970(lVar3,param_2), iVar1 == 1)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    FUN_10034cb1c(local_38,"learnUltimate");
    uVar2 = FUN_100027b64(param_1,lVar3 + 0x200,local_38[0]);
    FUN_100027c84(param_1,1,1,param_1 + 0x80,uVar2);
  }
  return;
}




void FUN_10002818c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  
  FUN_1003ba954(local_28);
  local_38 = FUN_100027bf4(param_1,*(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x200,local_28[0],
                           *(undefined8 *)(param_1 + 0xa0));
  uStack_30 = 0xffffffff00000000;
  uVar1 = FUN_100027b64(param_1,*(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x200,local_28[0]);
  FUN_100027c84(param_1,param_3,1,&local_38,uVar1);
  return;
}




void FUN_100028210(undefined8 param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  char local_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  plVar5 = (long *)*param_2;
  if (*plVar5 != 0) {
    uVar6 = 0;
    do {
      local_88[uVar6] = (char)uVar6;
      uVar11 = uVar6 + 1;
      if (plVar5[uVar6 + 1] == 0) break;
      bVar2 = uVar6 < 0x3f;
      uVar6 = uVar11;
    } while (bVar2);
    uVar6 = 0;
    do {
      uVar1 = (int)uVar11 - 1;
      uVar10 = (ulong)uVar1;
      if (uVar1 == 0) {
        uVar11 = 1;
      }
      else {
        uVar8 = 0;
        cVar9 = local_88[uVar6];
        do {
          if (*(char *)((long)param_2 + uVar8 + 0xc) == cVar9) {
            cVar9 = local_88[(int)uVar10];
            local_88[uVar6] = cVar9;
            uVar11 = uVar10;
          }
          if (2 < uVar8) break;
          uVar8 = uVar8 + 1;
          uVar10 = (ulong)((int)uVar11 - 1);
        } while (uVar8 < uVar10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uVar11 & 0xffffffff));
    uVar6 = uVar11 & 0xffffffff;
    fVar13 = 0.0;
    if ((int)uVar11 != 0) {
      fVar13 = 0.0;
      pcVar7 = local_88;
      uVar10 = uVar6;
      do {
        fVar13 = *(float *)(plVar5[*pcVar7] + 8) + fVar13;
        uVar10 = uVar10 - 1;
        pcVar7 = pcVar7 + 1;
      } while (uVar10 != 0);
    }
    iVar3 = _rand();
    if ((int)uVar11 != 0) {
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar12 = 0.0;
      pcVar7 = local_88;
      do {
        cVar9 = *pcVar7;
        fVar12 = *(float *)(*(long *)(*param_2 + (long)cVar9 * 8) + 8) + fVar12;
        if (fVar13 * (float)iVar3 * 4.656613e-10 <= fVar12) {
          if (cVar9 != -1) {
            *(undefined1 *)((long)param_2 + 0xf) = *(undefined1 *)((long)param_2 + 0xe);
            *(undefined2 *)((long)param_2 + 0xd) = *(undefined2 *)((long)param_2 + 0xc);
            *(char *)((long)param_2 + 0xc) = cVar9;
            if (-1 < cVar9) {
              uVar4 = *(undefined8 *)(*param_2 + (ulong)(uint)(int)cVar9 * 8);
              goto LAB_100028384;
            }
          }
          break;
        }
        pcVar7 = pcVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  uVar4 = 0;
LAB_100028384:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




undefined8 FUN_1000283b8(long param_1,undefined8 *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_10034ea2c(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x260));
  if (((uVar1 & 1) == 0) && (param_3 == 0)) {
    lVar2 = FUN_1010a0298(param_1,DAT_10184dd58);
    if (lVar2 != 0) {
      FUN_10004bd34(0x3eb33333,lVar2,*param_2,0,1,0,1,0xffffffff);
      FUN_10004bec0(lVar2,*(undefined8 *)(param_1 + 0x28));
      FUN_10004bed4(lVar2);
      return 1;
    }
  }
  else {
    lVar2 = FUN_1010a0298(param_1,DAT_10184dd48);
    if (lVar2 != 0) {
      FUN_10004b038(0x3eb33333,lVar2,*param_2,0,1,1);
      FUN_10004b148(lVar2);
      return 1;
    }
  }
  return 0;
}




void FUN_1000284a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_1000284b4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1010a0064_10144b6f8;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x38) = 0xffffffff00000000;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x60);
  return;
}




void FUN_1000284f4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000284fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100028500(void)

{
  if ((DAT_10184dd20 & 1) == 0) {
    DAT_10184dd18 = DAT_101872e38;
    DAT_10184dd20 = 1;
  }
  return;
}




void FUN_10002852c(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_100028558(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




void FUN_100028584(void)

{
  if ((DAT_10184dd60 & 1) == 0) {
    DAT_10184dd58 = DAT_101872e38;
    DAT_10184dd60 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000285b0(void)

{
  DAT_101dc2790 = 0xff;
  DAT_101dc2792 = 0xffff;
  DAT_101dc2794 = 0xffff;
  uRam0000000101dc2868 = 0x7f7fffff7f7fffff;
  _DAT_101dc2860 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2878 = 0x7f7fffff7f7fffff;
  _DAT_101dc2870 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2888 = 0x7f7fffff7f7fffff;
  _DAT_101dc2880 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2898 = 0x7f7fffff7f7fffff;
  _DAT_101dc2890 = 0x7f7fffff7f7fffff;
  DAT_101dc28a0 = 0x7f7fffff;
  DAT_101dc28a4 = 0x7f7fffff;
  DAT_101dc28a8 = 0x7f7fffff;
  DAT_101dc28ac = 0x3f800000;
  uRam0000000101dc28b8 = 0x7f7fffff7f7fffff;
  _DAT_101dc28b0 = 0x7f7fffff7f7fffff;
  DAT_101dc28c0 = 0x7f7fffff;
  DAT_101dc28c4 = 0x3eb33333;
  uRam0000000101dc28d0 = 0x7f7fffff7f7fffff;
  _DAT_101dc28c8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc28e0 = 0x7f7fffff7f7fffff;
  _DAT_101dc28d8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc28f0 = 0x7f7fffff7f7fffff;
  _DAT_101dc28e8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc2900 = 0x7f7fffff7f7fffff;
  _DAT_101dc28f8 = 0x7f7fffff7f7fffff;
  DAT_101dc2908 = 0x7f7fffff;
  DAT_101dc290c = 0x7f7fffff;
  DAT_101dc2910 = 0x7f7fffff;
  uRam0000000101dc27a8 = 0xff7fffffff7fffff;
  _DAT_101dc27a0 = 0xff7fffffff7fffff;
  DAT_101dc27b0 = 0;
  DAT_101dc27b8 = 0;
  uRam0000000101dc27c4 = 0xff7fffffff7fffff;
  _DAT_101dc27bc = 0xff7fffffff7fffff;
  DAT_101dc27cc = 0xff7fffff;
  DAT_101dc27d0 = 0xff7fffff;
  DAT_101dc27d4 = NEON_fmov(0xbf800000,4);
  DAT_101dc27dc = 0x3f000000;
  DAT_101dc27e0 = 0;
  DAT_101dc27e8 = 0;
  uRam0000000101dc27f8 = 0xff7fffffff7fffff;
  _DAT_101dc27f0 = 0xff7fffffff7fffff;
  uRam0000000101dc2808 = 0xff7fffffff7fffff;
  _DAT_101dc2800 = 0xff7fffffff7fffff;
  uRam0000000101dc2818 = 0xff7fffffff7fffff;
  _DAT_101dc2810 = 0xff7fffffff7fffff;
  uRam0000000101dc2828 = 0xbf800000bf800000;
  _DAT_101dc2820 = 0xbf80000000000000;
  DAT_101dc2830 = 0xbf800000;
  DAT_101dc2834 = 0xff7fffff;
  DAT_101dc2838 = 0xff7fffff;
  DAT_101dc283c = 0xff7fffff;
  DAT_101dc2840 = 0;
  DAT_101dc2844 = 0xff7fffff;
  DAT_101dc2848 = 0;
  DAT_101dc2850 = 0;
  return;
}




void FUN_1000286b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_1000286c4(long param_1)

{
  long lVar1;
  
  DAT_10184dd28 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd28 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd28 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_100028ed0;
  *(code **)(lVar1 + 0xb8) = FUN_100028f10;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd28;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x3be20659,FUN_100028780,0);
  FUN_1010a0990(param_1,0xdc302c4,thunk_FUN_100028c88,0);
  FUN_1010a0944(param_1,3,thunk_FUN_1000287d4,0);
  return;
}




void FUN_100028780(undefined8 param_1)

{
  undefined8 *puVar1;
  int in_stack_00000000;
  
  puVar1 = (undefined8 *)((ulong)&stack0x00000000 | 8);
  FUN_100028cfc((float)(double)puVar1[2],param_1,in_stack_00000000 != 0,*puVar1,
                *(int *)(puVar1 + 1) != 0);
  return;
}




void thunk_FUN_100028c88(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
        FUN_1010a1830();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  FUN_1010a01dc(param_1);
  return;
}




void thunk_FUN_1000287d4(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined **appuStack_710 [12];
  undefined4 uStack_6ac;
  float afStack_6a8 [4];
  float afStack_698 [400];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_101444218;
  plVar6 = (long *)(param_1 + 0x28);
  plVar2 = (long *)*plVar6;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
        FUN_100345b68(lVar3,afStack_6a8,0);
        FUN_10034ee90();
        lVar4 = FUN_100345d90();
        if (lVar4 == 0) {
          FUN_100028b84(param_1,0,plVar6);
        }
        else {
          FUN_100345b68(lVar4,afStack_698,0);
          fVar7 = (float)afStack_6a8._4_8_ - (float)afStack_698._4_8_;
          fVar8 = SUB84(afStack_6a8._4_8_,4) - SUB84(afStack_698._4_8_,4);
          fVar7 = fVar7 * fVar7 +
                  (afStack_6a8[0] - afStack_698[0]) * (afStack_6a8[0] - afStack_698[0]) +
                  fVar8 * fVar8;
          FUN_100028b84(param_1,fVar7 <= 169.0,plVar6);
          if (fVar7 <= 169.0) {
            uStack_6ac = 0xa600a6a6;
            if ((*(byte *)(param_1 + 0x44) >> 2 & 1) == 0) {
              if (*(int *)(param_1 + 0x3c) == -1) {
                uVar1 = 0;
              }
              else {
                FUN_10045cc04(appuStack_710);
                appuStack_710[0] = &PTR_FUN_10149d278;
                FUN_1003b0624(appuStack_710,*(undefined4 *)(param_1 + 0x3c));
                FUN_1003a25f4(appuStack_710,0,1,0,lVar3);
                FUN_1003e4ad4(appuStack_710,1);
                FUN_1003a6cbc(*(undefined4 *)(param_1 + 0x38),appuStack_710,afStack_6a8);
                FUN_1003c3608(appuStack_710,0);
                uVar1 = FUN_1003a6ce4(appuStack_710,afStack_698,200,0);
              }
              if (*(uint *)(param_1 + 0x40) <= uVar1) {
                uStack_6ac = 0xa600a600;
              }
            }
            else {
              uStack_6ac = 0xff0000c8;
            }
            plVar6 = (long *)*plVar6;
            uVar5 = 0;
            if (plVar6 != (long *)0x0) {
              if (*(int *)(param_1 + 0x30) == (int)plVar6[1]) {
                uVar5 = (**(code **)(*plVar6 + 0x10))();
              }
              else {
                uVar5 = 0;
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
              }
            }
            FUN_100045bc0(uVar5,&uStack_6ac);
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000287d4(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined **local_710 [12];
  undefined4 local_6ac;
  float local_6a8 [4];
  float local_698 [400];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  plVar6 = (long *)(param_1 + 0x28);
  plVar2 = (long *)*plVar6;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
        FUN_100345b68(lVar3,local_6a8,0);
        FUN_10034ee90();
        lVar4 = FUN_100345d90();
        if (lVar4 == 0) {
          FUN_100028b84(param_1,0,plVar6);
        }
        else {
          FUN_100345b68(lVar4,local_698,0);
          fVar7 = (float)local_6a8._4_8_ - (float)local_698._4_8_;
          fVar8 = SUB84(local_6a8._4_8_,4) - SUB84(local_698._4_8_,4);
          fVar7 = fVar7 * fVar7 + (local_6a8[0] - local_698[0]) * (local_6a8[0] - local_698[0]) +
                  fVar8 * fVar8;
          FUN_100028b84(param_1,fVar7 <= 169.0,plVar6);
          if (fVar7 <= 169.0) {
            local_6ac = 0xa600a6a6;
            if ((*(byte *)(param_1 + 0x44) >> 2 & 1) == 0) {
              if (*(int *)(param_1 + 0x3c) == -1) {
                uVar1 = 0;
              }
              else {
                FUN_10045cc04(local_710);
                local_710[0] = &PTR_FUN_10149d278;
                FUN_1003b0624(local_710,*(undefined4 *)(param_1 + 0x3c));
                FUN_1003a25f4(local_710,0,1,0,lVar3);
                FUN_1003e4ad4(local_710,1);
                FUN_1003a6cbc(*(undefined4 *)(param_1 + 0x38),local_710,local_6a8);
                FUN_1003c3608(local_710,0);
                uVar1 = FUN_1003a6ce4(local_710,local_698,200,0);
              }
              if (*(uint *)(param_1 + 0x40) <= uVar1) {
                local_6ac = 0xa600a600;
              }
            }
            else {
              local_6ac = 0xff0000c8;
            }
            plVar6 = (long *)*plVar6;
            uVar5 = 0;
            if (plVar6 != (long *)0x0) {
              if (*(int *)(param_1 + 0x30) == (int)plVar6[1]) {
                uVar5 = (**(code **)(*plVar6 + 0x10))();
              }
              else {
                uVar5 = 0;
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
              }
            }
            FUN_100045bc0(uVar5,&local_6ac);
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100028a20(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}




void FUN_100028a28(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 8;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xf7 | bVar1;
  return;
}




void FUN_100028a48(undefined4 param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  plVar3 = (long *)*param_3;
  if (plVar3 != (long *)0x0) {
    if ((int)param_3[1] == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        return;
      }
    }
    else {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_101dc0b88;
    }
  }
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    local_90 = 0xfc2e3586;
    local_84 = 0;
    local_74 = DAT_101dc1cb8;
    local_6c = 0x3f8000003f800000;
    local_64 = 0x3f800000;
    local_60 = 0;
    uStack_58 = 0x200000000;
    local_50 = 0x10100000001;
    local_88 = FUN_10034d060();
    local_48 = 1;
    local_7c = 0xa600a6a6;
    local_78 = param_1;
    lVar5 = FUN_1000e5920(lVar4,&local_b0);
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = lVar5 + 0x40;
    }
    puVar1 = &DAT_101dc0b88;
    if (lVar5 != 0) {
      puVar1 = (undefined4 *)(lVar4 + 8);
    }
    uVar2 = *puVar1;
    *param_3 = lVar4;
    *(undefined4 *)(param_3 + 1) = uVar2;
    FUN_100028b84(param_2,0,param_3);
  }
  return;
}




void FUN_100028b84(long param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  byte local_38 [8];
  
  plVar2 = (long *)*param_3;
  if (plVar2 != (long *)0x0) {
    if ((int)param_3[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
        FUN_10034cbcc(local_38);
        if ((param_2 & 1) == 0) {
          bVar5 = *(byte *)(param_1 + 0x44) >> 3 & 1;
        }
        else {
          bVar5 = 1;
        }
        bVar1 = *(byte *)(lVar3 + 0x2fc);
        local_38[0] = local_38[0] & 0x40 | bVar5 | bVar1 & 0x20 | bVar1 & 0x80;
        plVar2 = (long *)*param_3;
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if ((int)param_3[1] == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *param_3 = 0;
            *(undefined4 *)(param_3 + 1) = DAT_101dc0b88;
          }
        }
        FUN_100045c48(uVar4,local_38);
      }
    }
    else {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100028c88(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
        FUN_1010a1830();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  FUN_1010a01dc(param_1);
  return;
}




void FUN_100028cfc(float param_1,long param_2,byte param_3,long param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
  if (((int)uVar5 != 0x1f) && (*(ushort *)(lVar2 + uVar5 * 0x38 + 0x90) - 3 < 2)) {
    return;
  }
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe | param_3;
  FUN_10034ee90();
  lVar2 = FUN_100345d90();
  bVar3 = 4;
  if (lVar2 != param_4 || lVar2 == 0) {
    bVar3 = 0;
  }
  fVar7 = *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 0x38) = param_1 + 0.8;
  bVar4 = 2;
  if (param_5 == 0) {
    bVar4 = 0;
  }
  *(byte *)(param_2 + 0x44) = bVar3 | *(byte *)(param_2 + 0x44) & 0xf9 | bVar4;
  if ((0.001 <= ABS(fVar7 - (param_1 + 0.8))) &&
     (plVar1 = *(long **)(param_2 + 0x28), plVar1 != (long *)0x0)) {
    if (*(int *)(param_2 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_2 + 0x28) + 0x10))();
        FUN_1010a1830();
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x30) = DAT_101dc0b88;
    }
  }
  plVar6 = (long *)(param_2 + 0x28);
  plVar1 = (long *)*plVar6;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_2 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) goto LAB_100028e68;
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x30) = DAT_101dc0b88;
    }
  }
  FUN_100028a48(*(undefined4 *)(param_2 + 0x38),param_2,plVar6);
LAB_100028e68:
  plVar6 = (long *)*plVar6;
  if (plVar6 != (long *)0x0) {
    if (*(int *)(param_2 + 0x30) == (int)plVar6[1]) {
      lVar2 = (**(code **)(*plVar6 + 0x10))();
      if (lVar2 != 0) {
        FUN_1000287d4(param_2);
        return;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x30) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100028ed0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10144b728;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 7) = 0x40a00000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffff;
  *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_1 + 0x44) & 0xf0;
  return;
}




void FUN_100028f10(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100028f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_100028f1c(void)

{
  if ((DAT_10184dd30 & 1) == 0) {
    DAT_10184dd28 = DAT_101872e38;
    DAT_10184dd30 = 1;
  }
  return;
}




void FUN_100028f4c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100028f60(long param_1)

{
  long lVar1;
  
  DAT_10184dd38 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd38 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd38 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000294c4;
  *(code **)(lVar1 + 0xb8) = FUN_1000294f0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd38;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x3be20659,FUN_100029004,0);
  FUN_1010a0990(param_1,0xdc302c4,thunk_FUN_1000292ac,0);
  return;
}




void FUN_100029004(undefined8 param_1)

{
  FUN_100029320(param_1,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void thunk_FUN_1000292ac(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
        FUN_1010a1830();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  FUN_1010a01dc(param_1);
  return;
}




void FUN_100029038(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined7 local_74;
  undefined4 uStack_6d;
  undefined1 local_69;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 local_38;
  
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    iVar4 = FUN_100440cb4();
    pcVar8 = "Effect_TurretLaser_5v5";
    if (iVar4 != 2) {
      pcVar8 = "Effect_TurretLaser";
    }
    cVar3 = *pcVar8;
    local_80 = 0x811c9dc5;
    while (cVar3 != '\0') {
      pcVar8 = pcVar8 + 1;
      local_80 = (local_80 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar8;
    }
    local_69 = 0xff;
    local_64 = DAT_101dc1cb8;
    local_5c = 0x3f8000003f800000;
    local_90 = 0;
    uStack_88 = 0;
    local_74 = 0;
    uStack_6d = 0;
    local_68 = 0;
    local_54 = 0x3f800000;
    local_50 = 0;
    uStack_48 = 0x200000000;
    local_3a = 0;
    uStack_7c = 0;
    local_3c = 0x101;
    local_40 = 1;
    local_78 = FUN_10034d060();
    local_38 = 1;
    local_a0 = param_2;
    local_98 = FUN_100448e2c(param_2,"Bone_CenterMass");
    lVar7 = FUN_1000e5bb8(lVar6,&local_a0,"Bone_SearchLight");
    lVar6 = 0;
    if (lVar7 != 0) {
      lVar6 = lVar7 + 0x40;
    }
    puVar1 = &DAT_101dc0b88;
    if (lVar7 != 0) {
      puVar1 = (undefined4 *)(lVar6 + 8);
    }
    uVar2 = *puVar1;
    *(long *)(param_1 + 0x28) = lVar6;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    FUN_1000291c8(param_1,0);
  }
  return;
}




void FUN_1000291c8(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_38 [8];
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
        FUN_10034cbcc(local_38);
        local_38[0] = local_38[0] & 0xc0 | param_2 | *(byte *)(lVar2 + 0x2fc) & 0x20;
        plVar1 = *(long **)(param_1 + 0x28);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
          }
        }
        FUN_100045c48(uVar3,local_38);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000292ac(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
        FUN_1010a1830();
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  FUN_1010a01dc(param_1);
  return;
}




void FUN_100029320(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar1 = DAT_101dc0b88;
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2f5) >> 5 & 1) == 0) {
    return;
  }
  if ((param_2 == 0) ||
     ((uVar6 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f, (int)uVar6 != 0x1f &&
      (*(ushort *)(param_2 + uVar6 * 0x38 + 0x90) - 3 < 2)))) {
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_100029418;
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
LAB_1000293fc:
    FUN_100029038(param_1,param_2);
  }
  else {
    if (*(int *)(param_1 + 0x30) != (int)plVar2[1]) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
      goto LAB_1000293fc;
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (lVar3 == 0) goto LAB_1000293fc;
    plVar2 = *(long **)(param_1 + 0x38);
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        lVar3 = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
      }
    }
    if (lVar3 != param_2) {
      plVar2 = *(long **)(param_1 + 0x28);
      if (plVar2 == (long *)0x0) {
        uVar4 = 0;
      }
      else if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
        uVar4 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar4 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
      }
      FUN_100448e2c(param_2,"Bone_CenterMass");
      uVar5 = FUN_1010acd98();
      FUN_100045a68(uVar4,param_2,uVar5);
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x38) = param_2 + 0x28;
  uVar4 = 1;
LAB_100029418:
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  FUN_1000291c8(param_1,uVar4);
  return;
}




void FUN_1000294c4(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10144b758;
  param_1[5] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_1000294f0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000294f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000294fc(void)

{
  if ((DAT_10184dd40 & 1) == 0) {
    DAT_10184dd38 = DAT_101872e38;
    DAT_10184dd40 = 1;
  }
  return;
}




undefined8 * FUN_100029528(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000295a8_10144b788;
  FUN_1010a7e48(param_1 + 5);
  param_1[0x380] = 0;
  param_1[0x37f] = 0;
  param_1[0x37e] = 0;
  param_1[0x37d] = 0;
  param_1[0x37c] = 0;
  FUN_10034d83c(param_1 + 0x381);
  param_1[0x382] = 0;
  *(ushort *)((long)param_1 + 0x1d12) = *(ushort *)((long)param_1 + 0x1d12) | 0x3fe0;
  *(undefined1 *)((long)param_1 + 0x1d14) = 0xff;
  _bzero(param_1 + 0x13,0x1a58);
  *(undefined2 *)(param_1 + 0x3a2) = 0xffff;
  param_1[0x3a1] = 0xffffffffffffffff;
  return param_1;
}




void FUN_1000295a8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000295a8_10144b788;
  FUN_1000295e8();
  FUN_1010ad0c4(param_1[0x37d]);
  FUN_1010a7eb4(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1000295e8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x1bf0) != 0) {
    FUN_1010a8698(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x1bf0) = 0;
  }
  if (*(long *)(param_1 + 0x1bf8) != 0) {
    FUN_1010a8698(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x1bf8) = 0;
  }
  lVar3 = 0;
  puVar4 = (undefined8 *)(param_1 + 0xb8);
  do {
    lVar5 = param_1 + lVar3 * 0x88;
    plVar6 = (long *)(lVar5 + 0xa0);
    if (*plVar6 != 0) {
      uVar1 = FUN_1010a8710();
      FUN_1010a8ad8(uVar1,*plVar6);
      lVar2 = param_1 + lVar3 * 0x88;
      if (*(char *)(lVar2 + 0x118) != '\0') {
        uVar7 = 0;
        puVar8 = puVar4;
        do {
          uVar1 = FUN_1010a8710();
          FUN_1010a8ad8(uVar1,*puVar8);
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 3;
        } while (uVar7 < *(byte *)(lVar2 + 0x118));
      }
      *(undefined8 *)(lVar5 + 0x118) = 0;
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *(undefined8 *)(lVar5 + 0xf8) = 0;
      *(undefined8 *)(lVar5 + 0x110) = 0;
      *(undefined8 *)(lVar5 + 0x108) = 0;
      *(undefined8 *)(lVar5 + 0xe0) = 0;
      *(undefined8 *)(lVar5 + 0xd8) = 0;
      *(undefined8 *)(lVar5 + 0xf0) = 0;
      *(undefined8 *)(lVar5 + 0xe8) = 0;
      *(undefined8 *)(lVar5 + 0xc0) = 0;
      *(undefined8 *)(lVar5 + 0xb8) = 0;
      *(undefined8 *)(lVar5 + 0xd0) = 0;
      *(undefined8 *)(lVar5 + 200) = 0;
      *plVar6 = 0;
      *(undefined8 *)(lVar5 + 0x98) = 0;
      *(undefined8 *)(lVar5 + 0xb0) = 0;
      *(undefined8 *)(lVar5 + 0xa8) = 0;
    }
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 0x11;
  } while (lVar3 != 0x30);
  return;
}




void thunk_FUN_1000295a8(void)

{
  FUN_1000295a8();
  return;
}




void FUN_1000296cc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000295a8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000296e0(long param_1)

{
  long lVar1;
  
  DAT_10184dc68 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dc68 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dc68 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_100029528;
  *(code **)(lVar1 + 0xb8) = FUN_10002ab24;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dc68;
  *(undefined4 *)(lVar1 + 0xa8) = 0x1d18;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0xfa;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10002974c,0);
  return;
}




void FUN_10002974c(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar10 = param_1 + 0x28;
  iVar3 = FUN_1010a879c(lVar10);
  if (iVar3 != 0) {
    fVar13 = (float)FUN_1010a1cd4();
    FUN_1010a7ed8(lVar10);
    uVar8 = 0;
    do {
      if (((*(ushort *)(param_1 + 0x1d12) & 0x1f) >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
        lVar4 = param_1 + 0x1c18;
        lVar6 = param_1 + 0x1d08;
        uVar7 = 5;
        goto LAB_1000297d0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 5);
    lVar4 = 0;
    lVar6 = 0;
    uVar7 = 0;
LAB_1000297d0:
    uVar7 = FUN_1010a87a4(lVar10,lVar4,lVar6,uVar7);
    lVar4 = *(long *)(param_1 + 0x1bf8);
    if (lVar4 != 0) {
      fVar14 = *(float *)(param_1 + 0x1c04);
      fVar15 = (float)NEON_fminnm(fVar14 / *(float *)(param_1 + 0x1c00),0x3f800000);
      fVar16 = 0.0;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      *(float *)(*(long *)(param_1 + 0x1bf0) + 0x10) = fVar15;
      *(float *)(lVar4 + 0x10) = 1.0 - fVar15;
      if (0.01 <= 1.0 - fVar15) {
        fVar16 = fVar14 + fVar13;
      }
      else {
        uVar7 = FUN_1010a8698(lVar10);
        *(undefined8 *)(param_1 + 0x1bf8) = 0;
        *(undefined4 *)(param_1 + 0x1c00) = 0;
      }
      *(float *)(param_1 + 0x1c04) = fVar16;
    }
    lVar10 = (long)*(char *)(param_1 + 0x1d14);
    plVar9 = *(long **)(param_1 + 0x1bf0);
    if (lVar10 == -1 || *(int *)((long)plVar9 + 0x14) != 0) {
      if ((*(int *)((long)plVar9 + 0x14) == 1) &&
         (plVar5 = *(long **)(param_1 + 0x1c10), plVar5 != (long *)0x0)) {
        fVar13 = *(float *)(*plVar9 + 4) - (*(float *)(plVar9 + 4) + *(float *)(plVar9 + 4));
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (fVar13 - *(float *)((long)plVar5 + 0xc) <= *(float *)(plVar9 + 1)) {
          if (*plVar9 != *plVar5) {
            uVar7 = FUN_100029b4c((int)plVar9[3],param_1,plVar5,
                                  (int)((uint)*(ushort *)(param_1 + 0x1d12) << 0x12) >> 0x18,1);
          }
          uVar7 = FUN_10002aa78(uVar7,param_1 + (long)((int)((uint)*(ushort *)(param_1 + 0x1d12) <<
                                                            0x12) >> 0x18) * 0x88 + 0x98);
          *(undefined8 *)(param_1 + 0x1c10) = uVar7;
        }
      }
    }
    else {
      fVar13 = *(float *)(plVar9 + 1);
      lVar10 = param_1 + 0x1af0 + lVar10 * 0x10;
      fVar14 = *(float *)(lVar10 + 8);
      bVar1 = true;
      bVar2 = false;
      if (0.0 < fVar14) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar13) && !NAN(fVar14)) {
          bVar1 = fVar13 < fVar14;
          bVar2 = false;
        }
      }
      if (bVar1 != bVar2) {
        fVar15 = *(float *)(*plVar9 + 4) + fVar14;
        bVar1 = true;
        bVar2 = false;
        if (fVar14 <= 0.0) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar13) && !NAN(fVar15)) {
            bVar1 = fVar13 < fVar15;
            bVar2 = false;
          }
        }
        if (bVar1 != bVar2) {
          return;
        }
      }
      FUN_100490c3c(param_1 + 0x1c08,*(undefined4 *)(lVar10 + 4));
      iVar3 = *(int *)(param_1 + 0x1c08);
      pcVar11 = (char *)(param_1 + 0x1a20);
      lVar10 = 0x12;
      do {
        if ((*pcVar11 != '\0') && (*(int *)(pcVar11 + -8) == iVar3)) {
          iVar3 = *(int *)(pcVar11 + -4);
          break;
        }
        pcVar11 = pcVar11 + 0xc;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar10 = 0;
      piVar12 = (int *)(param_1 + 0x98);
      do {
        if (*piVar12 == iVar3) {
          FUN_100029ab4(0x3f800000,param_1,lVar10,1,0,
                        param_1 + 0x1af0 + (long)*(char *)(param_1 + 0x1d14) * 0x10 + 0xc);
          return;
        }
        lVar10 = lVar10 + 1;
        piVar12 = piVar12 + 0x22;
      } while (lVar10 != 0x30);
    }
  }
  return;
}




void FUN_1000299cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dc58) {
        *(long *)(param_1 + 0x1be0) = lVar2;
        FUN_1004e89f4(lVar2,1);
        uVar1 = FUN_1004e8a24(lVar2);
        FUN_1010a5270(uVar1,param_1 + 0x28);
        return;
      }
    }
  }
  return;
}




void FUN_100029a40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dc58) {
        uVar2 = FUN_1004e8a24();
        lVar1 = FUN_1010a5280();
        if (lVar1 == param_1 + 0x28) {
          FUN_1010a5278(uVar2);
        }
        *(undefined8 *)(param_1 + 0x1be0) = 0;
        return;
      }
    }
  }
  return;
}




void FUN_100029ab4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2 + (long)(int)param_3 * 0x88;
  lVar1 = lVar3 + 0x98;
  uVar2 = FUN_10002aa78(param_2,lVar1);
  uVar2 = FUN_100029b4c(param_1,param_2,uVar2,param_3,param_4);
  if (*(char *)(lVar3 + 0x118) == '\0' || (int)param_4 != 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10002aa78(uVar2,lVar1);
  }
  *(undefined8 *)(param_2 + 0x1c10) = uVar2;
  return;
}




void FUN_100029b4c(float param_1,long param_2,undefined8 *param_3,ushort param_4,undefined4 param_5,
                  undefined8 param_6,float *param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (*(long *)(param_2 + 0x1bf8) != 0) {
    FUN_1010a8698(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x1bf8) = 0;
  }
  *(undefined8 *)(param_2 + 0x1c00) = 0;
  pfVar1 = (float *)((long)param_3 + 0xc);
  if (param_7 != (float *)0x0) {
    pfVar1 = param_7;
  }
  lVar3 = *(long *)(param_2 + 0x1bf0);
  uVar5 = 0x3f800000;
  if (lVar3 != 0) {
    fVar4 = *pfVar1;
    if (0.0001 <= ABS(fVar4)) {
      *(long *)(param_2 + 0x1bf8) = lVar3;
      *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
      *(float *)(param_2 + 0x1c00) = fVar4;
      *(undefined4 *)(param_2 + 0x1c04) = 0;
      uVar5 = 0;
    }
    else {
      FUN_1010a8698(param_2 + 0x28);
      uVar5 = 0x3f800000;
    }
  }
  uVar2 = FUN_1010a8710();
  lVar3 = FUN_1010a8bf0(uVar2,*param_3);
  *(long *)(param_2 + 0x1bf0) = lVar3;
  *(ushort *)(param_2 + 0x1d12) = *(ushort *)(param_2 + 0x1d12) & 0xc03f | (param_4 & 0xff) << 6;
  *(float *)(lVar3 + 0x18) = *(float *)(param_3 + 1) * param_1;
  *(undefined4 *)(lVar3 + 0x14) = param_5;
  *(undefined4 *)(lVar3 + 0xc) = 0;
  *(undefined4 *)(lVar3 + 0x10) = uVar5;
  FUN_1010a8680(param_2 + 0x28,lVar3);
  return;
}




void FUN_100029c48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010acfb8(param_2);
  *(undefined8 *)(param_1 + 0x1be8) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_100029c74(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  (**(code **)(*param_1 + 0x10))();
  lVar1 = FUN_1010acfb8(param_2);
  param_1[0x37d] = lVar1;
  param_1[5] = lVar1;
  FUN_100029d44(*(undefined4 *)(param_3 + 2),*(undefined4 *)((long)param_3 + 0x14),
                *(undefined4 *)(param_3 + 3),param_1,*param_3,param_3[1],
                *(undefined1 *)((long)param_3 + 0x1c));
  plVar3 = (long *)param_3[4];
  puVar2 = (undefined8 *)*plVar3;
  while (puVar2 != (undefined8 *)0x0) {
    plVar3 = plVar3 + 1;
    FUN_100029df4(*(undefined4 *)(puVar2 + 1),*(undefined4 *)((long)puVar2 + 0xc),
                  *(undefined4 *)(puVar2 + 2),param_1,*param_3,*puVar2,0);
    puVar2 = (undefined8 *)*plVar3;
  }
  FUN_10034cb1c(auStack_40,*param_3);
  FUN_10034cb1c(auStack_38,0);
  FUN_100029f94(0x3f800000,param_1,auStack_40,1,0,auStack_38);
  return;
}




void FUN_100029d44(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_4 + 0x98);
  lVar3 = 0x30;
  do {
    if (*(long *)(puVar4 + 2) == 0) {
      uVar2 = FUN_1010a8710();
      uVar2 = FUN_1010a88cc(uVar2,param_6);
      uVar1 = FUN_1004d2524(param_5);
      uVar1 = FUN_100015208(param_5,uVar1,0x12345678);
      *puVar4 = uVar1;
      *(undefined8 *)(puVar4 + 2) = uVar2;
      puVar4[4] = param_1;
      puVar4[5] = param_2;
      puVar4[6] = param_3;
      *(undefined1 *)((long)puVar4 + 0x81) = param_7;
      *(undefined1 *)(puVar4 + 0x20) = 0;
      return;
    }
    puVar4 = puVar4 + 0x22;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}




void FUN_100029df4(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  
  uVar2 = FUN_1004d2524(param_5);
  iVar3 = FUN_100015208(param_5,uVar2,0x12345678);
  lVar6 = 0;
  piVar5 = (int *)(param_4 + 0x98);
  do {
    if (*piVar5 == iVar3) goto LAB_100029e68;
    lVar6 = lVar6 + 1;
    piVar5 = piVar5 + 0x22;
  } while (lVar6 != 0x30);
  lVar6 = -1;
LAB_100029e68:
  uVar4 = FUN_1010a8710();
  uVar4 = FUN_1010a88cc(uVar4,param_6);
  param_4 = param_4 + (long)(int)lVar6 * 0x88;
  bVar1 = *(byte *)(param_4 + 0x118);
  *(byte *)(param_4 + 0x118) = bVar1 + 1;
  param_4 = param_4 + (ulong)bVar1 * 0x18;
  *(undefined8 *)(param_4 + 0xb8) = uVar4;
  *(undefined4 *)(param_4 + 0xc0) = param_1;
  *(undefined4 *)(param_4 + 0xc4) = param_2;
  *(undefined4 *)(param_4 + 200) = param_3;
  return;
}




void FUN_100029eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_48 [8];
  
  FUN_10034cb1c(auStack_48,param_6);
  FUN_100029f94(param_1,param_2,param_3,param_4,param_5,auStack_48);
  return;
}




void FUN_100029f20(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_38 [2];
  
  FUN_10034cb1c(local_38);
  uVar2 = *param_5;
  lVar3 = -0xf0;
  do {
    lVar1 = param_3 + lVar3;
    if (*(int *)(lVar1 + 0x1be0) == 0) {
      *(undefined4 *)(lVar1 + 0x1be0) = local_38[0];
      *(undefined4 *)(lVar1 + 0x1be4) = uVar2;
      *(undefined4 *)(lVar1 + 0x1be8) = param_1;
      *(undefined4 *)(lVar1 + 0x1bec) = param_2;
      return;
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0);
  return;
}




void FUN_100029f94(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  
  iVar1 = *param_2;
  if (*(int *)(param_1 + 0x98) != iVar1) {
    piVar4 = (int *)(param_1 + 0x120);
    uVar3 = 0;
    do {
      uVar6 = uVar3;
      if (uVar6 == 0x2f) break;
      iVar2 = *piVar4;
      piVar4 = piVar4 + 0x22;
      uVar3 = uVar6 + 1;
    } while (iVar2 != iVar1);
    if (0x2e < uVar6) {
      return;
    }
  }
  lVar5 = 0;
  *(int *)(param_1 + 0x1c08) = iVar1;
  while ((*(char *)(param_1 + 0x1a20 + lVar5) == '\0' ||
         (*(int *)(param_1 + lVar5 + 0x1a18) != iVar1))) {
    lVar5 = lVar5 + 0xc;
    if (lVar5 == 0xd8) {
LAB_10002a00c:
      iVar2 = *param_5;
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      FUN_10002a068(param_1,iVar1,param_3,param_4,iVar2);
      return;
    }
  }
  iVar1 = *(int *)(param_1 + lVar5 + 0x1a1c);
  goto LAB_10002a00c;
}




bool FUN_10002a020(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x98) == *param_2) {
    return true;
  }
  piVar3 = (int *)(param_1 + 0x120);
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar4 == 0x2f) break;
    iVar1 = *piVar3;
    piVar3 = piVar3 + 0x22;
    uVar2 = uVar4 + 1;
  } while (iVar1 != *param_2);
  return uVar4 < 0x2f;
}




void FUN_10002a068(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,int param_6)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = 0;
  lVar2 = 0x98;
  do {
    if (*(int *)(param_2 + lVar2) == param_3) goto LAB_10002a0bc;
    lVar4 = lVar4 + 1;
    lVar2 = lVar2 + 0x88;
  } while (lVar4 != 0x30);
  lVar4 = 0xffffffff;
LAB_10002a0bc:
  iVar1 = FUN_10002a16c(param_2);
  if ((iVar1 == 0) || (*(char *)(param_2 + (long)(int)lVar4 * 0x88 + 0x119) != '\0')) {
    FUN_100029ab4(param_1,param_2,lVar4,param_4,param_5,0);
  }
  else {
    lVar2 = *(long *)(param_2 + 0x1bf0);
    *(float *)(lVar2 + 0x18) = *(float *)(param_2 + (long)(int)lVar4 * 0x88 + 0xa8) * (float)param_1
    ;
    *(int *)(lVar2 + 0x14) = (int)param_4;
  }
  if (param_6 != -1) {
    lVar4 = 0;
    piVar3 = (int *)(param_2 + 0x1af0);
    do {
      if (*piVar3 == param_6) goto LAB_10002a14c;
      lVar4 = lVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (lVar4 != 0xf);
  }
  lVar4 = 0xff;
LAB_10002a14c:
  *(char *)(param_2 + 0x1d14) = (char)lVar4;
  return;
}




bool FUN_10002a16c(long param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x1bf0) != (long *)0x0) {
    plVar2 = (long *)(param_1 + 0xb8);
    lVar3 = 0x30;
    do {
      if ((int)plVar2[-4] == param_2) {
        lVar3 = **(long **)(param_1 + 0x1bf0);
        if (lVar3 != plVar2[-3]) {
          lVar4 = 3;
          do {
            lVar5 = *plVar2;
            bVar1 = lVar4 != 0;
            lVar4 = lVar4 + -1;
            plVar2 = plVar2 + 3;
          } while (lVar3 != lVar5 && bVar1);
          return lVar3 == lVar5;
        }
        return true;
      }
      plVar2 = plVar2 + 0x11;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return false;
}




void FUN_10002a1d4(float param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  ulong uVar4;
  
  plVar2 = *(long **)(param_2 + 0x1bf0);
  if (plVar2 != (long *)0x0) {
    lVar1 = (long)((ulong)(uint)(int)(short)(*(ushort *)(param_2 + 0x1d12) << 2) << 0x20) >> 0x28;
    if (*plVar2 ==
        *(long *)(param_2 + (long)((int)((uint)*(ushort *)(param_2 + 0x1d12) << 0x12) >> 0x18) *
                            0x88 + 0xa0)) {
      pfVar3 = (float *)(param_2 + lVar1 * 0x88 + 0xa8);
LAB_10002a24c:
      *(float *)(plVar2 + 3) = *pfVar3 * param_1;
      return;
    }
    uVar4 = (ulong)*(byte *)(param_2 + lVar1 * 0x88 + 0x118);
    if (uVar4 != 0) {
      pfVar3 = (float *)(param_2 + lVar1 * 0x88 + 0xc0);
      do {
        if (*plVar2 == *(long *)(pfVar3 + -2)) goto LAB_10002a24c;
        pfVar3 = pfVar3 + 6;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}




void FUN_10002a25c(undefined8 param_1)

{
  undefined4 local_28 [2];
  
  FUN_10034cb1c(local_28);
  FUN_10002a16c(param_1,local_28[0]);
  return;
}




void FUN_10002a294(undefined8 param_1,undefined4 *param_2)

{
  FUN_10002a16c(param_1,*param_2);
  return;
}




bool FUN_10002a29c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  
  uVar4 = FUN_1004d2524(param_2);
  iVar5 = FUN_100015208(param_2,uVar4,0x12345678);
  if (*(int *)(param_1 + 0x98) == iVar5) {
    bVar3 = true;
  }
  else {
    piVar6 = (int *)(param_1 + 0x120);
    uVar2 = 0;
    do {
      uVar7 = uVar2;
      if (uVar7 == 0x2f) break;
      iVar1 = *piVar6;
      piVar6 = piVar6 + 0x22;
      uVar2 = uVar7 + 1;
    } while (iVar1 != iVar5);
    bVar3 = uVar7 < 0x2f;
  }
  return bVar3;
}




void FUN_10002a318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_10034cb1c(auStack_28);
  FUN_10034cb1c(auStack_30,param_3);
  FUN_10002a364(param_1,auStack_28,auStack_30);
  return;
}




void FUN_10002a364(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  
  iVar1 = *param_2;
  if (*(int *)(param_1 + 0x98) != iVar1) {
    piVar6 = (int *)(param_1 + 0x120);
    uVar4 = 0;
    do {
      uVar8 = uVar4;
      if (uVar8 == 0x2f) break;
      iVar2 = *piVar6;
      piVar6 = piVar6 + 0x22;
      uVar4 = uVar8 + 1;
    } while (iVar2 != iVar1);
    if (0x2e < uVar8) {
      return;
    }
  }
  iVar2 = *param_3;
  if (*(int *)(param_1 + 0x98) != iVar2) {
    piVar6 = (int *)(param_1 + 0x120);
    uVar4 = 0;
    do {
      uVar8 = uVar4;
      if (uVar8 == 0x2f) break;
      iVar3 = *piVar6;
      piVar6 = piVar6 + 0x22;
      uVar4 = uVar8 + 1;
    } while (iVar3 != iVar2);
    if (0x2e < uVar8) {
      return;
    }
  }
  lVar7 = 0;
  while (((*(char *)(param_1 + 0x1a20 + lVar7) == '\0' ||
          (*(int *)(param_1 + lVar7 + 0x1a18) != iVar1)) ||
         (*(int *)(param_1 + lVar7 + 0x1a1c) != iVar2))) {
    lVar7 = lVar7 + 0xc;
    if (lVar7 == 0xd8) {
      FUN_10002a4f4(param_1);
      lVar7 = 0;
      do {
        if (*(char *)(param_1 + 0x1a20 + lVar7) == '\0') {
          lVar7 = param_1 + lVar7;
          *(int *)(lVar7 + 0x1a18) = iVar1;
          *(int *)(lVar7 + 0x1a1c) = iVar2;
          *(undefined1 *)(lVar7 + 0x1a20) = 1;
          if (*(long *)(param_1 + 0x1bf0) == 0) {
            return;
          }
          lVar7 = -0x1980;
          do {
            if ((iVar1 == *(int *)(param_1 + lVar7 + 0x1a18)) &&
               (iVar1 == *(int *)(param_1 + 0x1c08))) {
              if ((long)*(char *)(param_1 + 0x1d14) == -1) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = *(undefined4 *)(param_1 + (long)*(char *)(param_1 + 0x1d14) * 0x10 + 0x1af0)
                ;
              }
              FUN_10002a068(*(undefined4 *)(*(long *)(param_1 + 0x1bf0) + 0x18),param_1,iVar2,
                            *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + 0x14),0,uVar5);
            }
            lVar7 = lVar7 + 0x88;
          } while (lVar7 != 0);
          return;
        }
        lVar7 = lVar7 + 0xc;
      } while (lVar7 != 0xd8);
      return;
    }
  }
  return;
}




void FUN_10002a4f4(long param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  lVar3 = 0;
  iVar6 = 0;
  iVar1 = *param_2;
  do {
    if (*(int *)(param_1 + lVar3 + 0x1a18) == iVar1) {
      iVar6 = *(int *)(param_1 + lVar3 + 0x1a1c);
      *(undefined1 *)(param_1 + 0x1a20 + lVar3) = 0;
    }
    lVar3 = lVar3 + 0xc;
  } while (lVar3 != 0xd8);
  if (*(long *)(param_1 + 0x1bf0) != 0) {
    lVar3 = -0x1980;
    do {
      if ((iVar6 == *(int *)(param_1 + lVar3 + 0x1a18)) && (iVar1 == *(int *)(param_1 + 0x1c08))) {
        lVar4 = *(long *)(param_1 + 0x1bf0);
        if ((*(byte *)(param_1 + 0x1d12) >> 5 & 1) == 0) {
          if (*(int *)(lVar4 + 0x14) == 1) {
            *(undefined4 *)(lVar4 + 0x14) = 0;
            *(char *)(param_1 + 0x1d14) = '\x01';
          }
        }
        else {
          lVar5 = (long)*(char *)(param_1 + 0x1d14);
          if (lVar5 == -1) {
            uVar2 = 0xffffffff;
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + lVar5 * 0x10 + 0x1af0);
          }
          FUN_10002a068(*(undefined4 *)(lVar4 + 0x18),param_1,iVar1,*(int *)(lVar4 + 0x14),0,uVar2);
        }
      }
      lVar3 = lVar3 + 0x88;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_10002a5f4(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_10034cb1c(auStack_28);
  FUN_10002a4f4(param_1,auStack_28);
  return;
}




bool FUN_10002a62c(long param_1,int *param_2)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar3 = 0;
  pcVar2 = (char *)(param_1 + 0x1a20);
  bVar1 = true;
  while ((*(int *)(pcVar2 + -8) != *param_2 || (*pcVar2 == '\0'))) {
    bVar1 = uVar3 < 0x11;
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 0xc;
    if (uVar3 == 0x12) {
      return bVar1;
    }
  }
  return bVar1;
}




bool FUN_10002a678(long param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 0x1a1c);
  bVar1 = true;
  while ((piVar2[-1] != *param_2 || (*piVar2 != *param_3))) {
    bVar1 = uVar3 < 0x11;
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 3;
    if (uVar3 == 0x12) {
      return bVar1;
    }
  }
  return bVar1;
}




void FUN_10002a6cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010acd10(*(undefined8 *)(param_1 + 0x28),param_3);
  FUN_10002a714(param_1,param_2,uVar1,param_4);
  return;
}




bool FUN_10002a714(long param_1,float *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  float local_58;
  float local_50;
  float local_4c;
  float fStack_48;
  
  if ((int)param_3 != 0xffff) {
    FUN_1010a82e4(param_1 + 0x28,&local_70,1,param_3,1);
    param_2[3] = 0.0;
    param_2[7] = 0.0;
    param_2[0xb] = 0.0;
    param_2[0xf] = 1.0;
    fVar4 = local_68 * local_68 + fStack_6c * fStack_6c;
    fVar3 = local_70 * local_70 + local_68 * local_68;
    fVar2 = local_70 * local_70 + fStack_6c * fStack_6c;
    *param_2 = local_50 - local_50 * (fVar4 + fVar4);
    param_2[4] = (local_4c + local_4c) * (local_70 * fStack_6c - fStack_64 * local_68);
    param_2[8] = (fStack_48 + fStack_48) * (fStack_64 * fStack_6c + local_70 * local_68);
    param_2[1] = (local_50 + local_50) * (fStack_64 * local_68 + local_70 * fStack_6c);
    param_2[5] = local_4c - local_4c * (fVar3 + fVar3);
    param_2[9] = (fStack_48 + fStack_48) * (local_68 * fStack_6c - fStack_64 * local_70);
    param_2[2] = (local_50 + local_50) * (local_70 * local_68 - fStack_64 * fStack_6c);
    param_2[6] = (local_4c + local_4c) * (fStack_64 * local_70 + local_68 * fStack_6c);
    param_2[10] = fStack_48 - fStack_48 * (fVar2 + fVar2);
    *(undefined8 *)(param_2 + 0xc) = local_60;
    param_2[0xe] = local_58;
    if (param_4 != 0) {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x1be0) + 0x30))();
      FUN_10002a9fc(param_2,param_2,uVar1);
    }
  }
  return (int)param_3 != 0xffff;
}




bool FUN_10002a880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010acd44(*(undefined8 *)(param_1 + 0x28),param_3);
  if ((int)uVar1 != 0xffff) {
    FUN_1010a82e4((undefined8 *)(param_1 + 0x28),param_2,1,uVar1,0);
  }
  return (int)uVar1 != 0xffff;
}




bool FUN_10002a8e4(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = FUN_1010acd44(*(undefined8 *)(param_1 + 0x28),param_3);
  uVar3 = 0;
  if ((*(ushort *)(param_1 + 0x1d12) & 1) == 0) {
    uVar6 = 0;
    bVar1 = true;
    uVar4 = 1;
  }
  else {
    uVar5 = 1;
    bVar1 = true;
    do {
      uVar4 = (ushort)uVar5;
      if (*(ushort *)(param_1 + 0x1d08 + uVar3 * 2) == uVar2) break;
      bVar1 = uVar3 < 4;
      if (uVar3 == 4) {
        return false;
      }
      uVar3 = uVar3 + 1;
      uVar5 = 1 << (ulong)((uint)uVar3 & 0x1f);
      uVar4 = (ushort)uVar5;
    } while ((uVar5 & *(ushort *)(param_1 + 0x1d12) & 0x1f) != 0);
    uVar6 = (undefined4)uVar3;
  }
  lVar7 = param_1 + (uVar3 & 0xffffffff) * 0x30;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar10 = param_2[2];
  uVar12 = param_2[5];
  uVar11 = param_2[4];
  *(undefined8 *)(lVar7 + 0x1c30) = param_2[3];
  *(undefined8 *)(lVar7 + 0x1c28) = uVar10;
  *(undefined8 *)(lVar7 + 0x1c40) = uVar12;
  *(undefined8 *)(lVar7 + 0x1c38) = uVar11;
  *(undefined8 *)(lVar7 + 0x1c20) = uVar9;
  *(undefined8 *)(lVar7 + 0x1c18) = uVar8;
  *(short *)(param_1 + (uVar3 & 0xffffffff) * 2 + 0x1d08) = (short)uVar2;
  *(ushort *)(param_1 + 0x1d12) = *(ushort *)(param_1 + 0x1d12) | uVar4;
  *param_4 = uVar6;
  return bVar1;
}




undefined8 FUN_10002a9bc(long param_1,uint param_2)

{
  *(ushort *)(param_1 + 0x1d12) =
       (~(ushort)(1 << (ulong)(param_2 & 0x1f)) | 0xffe0) & *(ushort *)(param_1 + 0x1d12);
  *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 0x1d08) = 0xffff;
  return 1;
}




void FUN_10002a9ec(long param_1)

{
  *(ushort *)(param_1 + 0x1d12) = *(ushort *)(param_1 + 0x1d12) & 0xffdf;
  return;
}




void FUN_10002a9fc(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = param_2[2];
  fVar9 = param_2[3];
  fVar12 = (float)*param_3;
  fVar13 = (float)((ulong)*param_3 >> 0x20);
  fVar14 = (float)param_3[1];
  fVar15 = (float)((ulong)param_3[1] >> 0x20);
  fVar16 = (float)param_3[2];
  fVar17 = (float)((ulong)param_3[2] >> 0x20);
  fVar18 = (float)param_3[3];
  fVar19 = (float)((ulong)param_3[3] >> 0x20);
  fVar3 = (float)param_3[4];
  fVar4 = (float)((ulong)param_3[4] >> 0x20);
  fVar5 = (float)param_3[5];
  fVar6 = (float)((ulong)param_3[5] >> 0x20);
  fVar20 = (float)param_3[6];
  fVar21 = (float)((ulong)param_3[6] >> 0x20);
  fVar22 = (float)param_3[7];
  fVar23 = (float)((ulong)param_3[7] >> 0x20);
  fVar8 = param_2[4];
  fVar10 = param_2[5];
  fVar24 = param_2[6];
  fVar27 = param_2[7];
  fVar11 = param_2[8];
  fVar25 = param_2[9];
  fVar28 = param_2[10];
  fVar30 = param_2[0xb];
  fVar26 = param_2[0xc];
  fVar29 = param_2[0xd];
  fVar31 = param_2[0xe];
  fVar32 = param_2[0xf];
  param_1[1] = CONCAT44(fVar15 * fVar1 + fVar19 * fVar2 + fVar6 * fVar7 + fVar23 * fVar9,
                        fVar14 * fVar1 + fVar18 * fVar2 + fVar5 * fVar7 + fVar22 * fVar9);
  *param_1 = CONCAT44(fVar13 * fVar1 + fVar17 * fVar2 + fVar4 * fVar7 + fVar21 * fVar9,
                      fVar12 * fVar1 + fVar16 * fVar2 + fVar3 * fVar7 + fVar20 * fVar9);
  param_1[3] = CONCAT44(fVar15 * fVar8 + fVar19 * fVar10 + fVar6 * fVar24 + fVar23 * fVar27,
                        fVar14 * fVar8 + fVar18 * fVar10 + fVar5 * fVar24 + fVar22 * fVar27);
  param_1[2] = CONCAT44(fVar13 * fVar8 + fVar17 * fVar10 + fVar4 * fVar24 + fVar21 * fVar27,
                        fVar12 * fVar8 + fVar16 * fVar10 + fVar3 * fVar24 + fVar20 * fVar27);
  param_1[5] = CONCAT44(fVar15 * fVar11 + fVar19 * fVar25 + fVar6 * fVar28 + fVar23 * fVar30,
                        fVar14 * fVar11 + fVar18 * fVar25 + fVar5 * fVar28 + fVar22 * fVar30);
  param_1[4] = CONCAT44(fVar13 * fVar11 + fVar17 * fVar25 + fVar4 * fVar28 + fVar21 * fVar30,
                        fVar12 * fVar11 + fVar16 * fVar25 + fVar3 * fVar28 + fVar20 * fVar30);
  param_1[7] = CONCAT44(fVar15 * fVar26 + fVar19 * fVar29 + fVar6 * fVar31 + fVar23 * fVar32,
                        fVar14 * fVar26 + fVar18 * fVar29 + fVar5 * fVar31 + fVar22 * fVar32);
  param_1[6] = CONCAT44(fVar13 * fVar26 + fVar17 * fVar29 + fVar4 * fVar31 + fVar21 * fVar32,
                        fVar12 * fVar26 + fVar16 * fVar29 + fVar3 * fVar31 + fVar20 * fVar32);
  return;
}




long FUN_10002aa78(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  
  uVar2 = (ulong)*(byte *)(param_2 + 0x80);
  if (uVar2 != 0) {
    fVar5 = *(float *)(param_2 + 0x18);
    pfVar3 = (float *)(param_2 + 0x30);
    do {
      fVar5 = *pfVar3 + fVar5;
      uVar2 = uVar2 - 1;
      pfVar3 = pfVar3 + 6;
    } while (uVar2 != 0);
    iVar1 = _rand();
    fVar5 = fVar5 * 4.656613e-10 * (float)iVar1 - *(float *)(param_2 + 0x18);
    uVar2 = (ulong)*(byte *)(param_2 + 0x80);
    if (0.0 < fVar5 && *(byte *)(param_2 + 0x80) != 0) {
      lVar4 = param_2 + 0x20;
      do {
        fVar5 = fVar5 - *(float *)(lVar4 + 0x10);
        if (fVar5 <= 0.0) {
          return lVar4;
        }
        lVar4 = lVar4 + 0x18;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return param_2 + 8;
}




undefined8 * thunk_FUN_100029528(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000295a8_10144b788;
  FUN_1010a7e48(param_1 + 5);
  param_1[0x380] = 0;
  param_1[0x37f] = 0;
  param_1[0x37e] = 0;
  param_1[0x37d] = 0;
  param_1[0x37c] = 0;
  FUN_10034d83c(param_1 + 0x381);
  param_1[0x382] = 0;
  *(ushort *)((long)param_1 + 0x1d12) = *(ushort *)((long)param_1 + 0x1d12) | 0x3fe0;
  *(undefined1 *)((long)param_1 + 0x1d14) = 0xff;
  _bzero(param_1 + 0x13,0x1a58);
  *(undefined2 *)(param_1 + 0x3a2) = 0xffff;
  param_1[0x3a1] = 0xffffffffffffffff;
  return param_1;
}




void FUN_10002ab24(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002ab2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10002ab30(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




void FUN_10002ab5c(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




undefined8 * FUN_10002ab88(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = 0;
  *param_1 = &PTR_FUN_10144b7b8;
  param_1[5] = 0;
  do {
    FUN_1004e313c((long)param_1 + lVar5 + 0x38);
    FUN_1004e313c((long)param_1 + lVar5 + 0x48);
    *(undefined8 *)((long)param_1 + lVar5 + 0x70) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x58) = 0;
    lVar5 = lVar5 + 0x48;
  } while (lVar5 != 0x2d0);
  param_1[99] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_1006421a8(param_1 + 100);
  param_1[100] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar1 = param_1 + 0x75;
  thunk_FUN_100650f44(puVar1,DAT_101d23000);
  puVar2 = param_1 + 0x9b;
  thunk_FUN_100650f44(puVar2,DAT_101d23008);
  uVar4 = FUN_100345b94();
  uVar4 = FUN_10034c450(uVar4,"*KindredAnnouncements*");
  param_1[5] = uVar4;
  FUN_100651460(puVar1,&DAT_101d23010);
  FUN_1006516bc(puVar1,&DAT_101d23014);
  FUN_10065165c(puVar1,1);
  if ((*(float *)(param_1 + 0x7f) != 0.5) || (*(float *)((long)param_1 + 0x3fc) != 0.5)) {
    param_1[0x7f] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar1);
  }
  if ((*(float *)(param_1 + 0x7e) != 1.2) || (*(float *)((long)param_1 + 0x3f4) != 1.2)) {
    param_1[0x7e] = 0x3f99999a3f99999a;
    FUN_1000200a0(puVar1);
  }
  FUN_100651460(puVar2,&DAT_101d23010);
  uVar3 = *(uint *)((long)param_1 + 0x55c);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x55c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(puVar2);
  }
  FUN_1006516bc(puVar2,&DAT_101d23014);
  FUN_10065165c(puVar2,1);
  if ((*(float *)(param_1 + 0xa5) != 0.5) || (*(float *)((long)param_1 + 0x52c) != 0.5)) {
    param_1[0xa5] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar2);
  }
  if ((*(float *)(param_1 + 0x6e) != 0.5) || (*(float *)((long)param_1 + 0x374) != 0.5)) {
    param_1[0x6e] = &DAT_3f0000003f000000;
    FUN_1000200a0(param_1 + 100);
  }
  return param_1;
}




void FUN_10002ad98(long param_1,long *param_2)

{
  long lVar1;
  
  *(long **)(param_1 + 0x318) = param_2;
  lVar1 = param_1 + 800;
  (**(code **)(*param_2 + 0x78))(param_2,lVar1,1);
  FUN_100642bd8(lVar1,param_1 + 0x3a8,1);
  FUN_100642bd8(lVar1,param_1 + 0x4d8,1);
  return;
}




void FUN_10002adf0(long param_1)

{
  long lVar1;
  
  DAT_10184dde8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dde8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dde8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10002ab88;
  *(code **)(lVar1 + 0xb8) = FUN_10002c2d0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dde8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x608;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,5,FUN_10002ae5c,0);
  return;
}




void FUN_10002ae5c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float local_28;
  float local_24;
  
  if (*(int *)(param_1 + 0x308) != 0) {
    fVar4 = (float)FUN_1010a1cd4();
    fVar4 = *(float *)(param_1 + 0x30c) - fVar4;
    *(float *)(param_1 + 0x30c) = fVar4;
    if (fVar4 <= 0.0) {
      lVar2 = *(long *)(param_1 + 0x300);
    }
    else if ((*(uint *)(param_1 + 0x308) < 2) ||
            (lVar2 = *(long *)(param_1 + 0x300),
            *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x34) < fVar4)) goto LAB_10002af08;
    lVar3 = *(long *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(long *)(param_1 + 0x300) = lVar3;
    if (lVar3 != 0) {
      FUN_10002af94(*(undefined4 *)(lVar3 + 0x30),param_1,lVar3 + 8,lVar3 + 0x18,
                    *(undefined8 *)(lVar3 + 0x28));
      *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x30);
    }
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
  }
LAB_10002af08:
  FUN_100641464(&local_24,&local_28);
  local_28 = local_28 * 0.13;
  bVar1 = false;
  if ((*(float *)(param_1 + 0x360) == local_24 * 0.5) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x364)) && !NAN(local_28))) {
    bVar1 = *(float *)(param_1 + 0x364) == local_28;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x360) = local_24 * 0.5;
    *(float *)(param_1 + 0x364) = local_28;
    FUN_1000200a0(param_1 + 800);
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x518) == 0.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x51c)))) {
    bVar1 = *(float *)(param_1 + 0x51c) == 100.0;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x518) = 0x42c8000000000000;
    FUN_1000200a0(param_1 + 0x4d8);
  }
  return;
}




void FUN_10002af94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 local_80;
  undefined1 auStack_78 [4];
  float local_74;
  
  FUN_100641464(&local_74,auStack_78);
  FUN_1003467f8();
  uVar6 = FUN_10034cde0();
  if ((uVar6 & 1) != 0) {
    return;
  }
  if ((param_5 != 0) && (iVar5 = FUN_1004d2524(param_5), iVar5 != 0)) {
    FUN_10002c02c(0x3e99999a,param_2,param_5);
  }
  iVar5 = FUN_1004e3634(param_3);
  lVar1 = param_2 + 0x3a8;
  if (iVar5 == 0) {
    FUN_1006513c0(lVar1,&DAT_101d91650);
    FUN_1006513c0(param_2 + 0x4d8,&DAT_101d91650);
    return;
  }
  FUN_1006513c0(lVar1,param_3);
  FUN_10065179c(local_74 * 0.6,0,0x3f800000,lVar1);
  iVar5 = FUN_1004e3634(param_4);
  puVar2 = &DAT_101d91650;
  if (iVar5 != 0) {
    puVar2 = param_4;
  }
  FUN_1006513c0(param_2 + 0x4d8,puVar2);
  FUN_10065179c(local_74 * 0.6,0,0x3f800000,param_2 + 0x4d8);
  iVar5 = FUN_1001269b8();
  uVar8 = 4;
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  *(uint *)(param_2 + 0x55c) = *(uint *)(param_2 + 0x55c) & 0xfffffffb | uVar8;
  lVar1 = param_2 + 800;
  FUN_100642324(lVar1);
  bVar4 = false;
  if ((*(float *)(param_2 + 0x368) == 3.0) && (bVar4 = false, !NAN(*(float *)(param_2 + 0x36c)))) {
    bVar4 = *(float *)(param_2 + 0x36c) == 3.0;
  }
  if (!bVar4) {
    *(undefined4 *)(param_2 + 0x368) = 0x40400000;
    *(undefined4 *)(param_2 + 0x36c) = 0x40400000;
    FUN_1000200a0(lVar1);
  }
  if ((~*(uint *)(param_2 + 0x3a4) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x3a4) = *(uint *)(param_2 + 0x3a4) | 0x7f80;
    FUN_1000200a0(lVar1);
  }
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
LAB_10002b1e0:
    puVar10 = (ushort *)0x0;
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
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar9);
    *(undefined ***)puVar9 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    lVar3 = DAT_101dbd2f8;
    uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar7 == 0xffff) goto LAB_10002b1e0;
    puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar10;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063f0f0(puVar10);
    *(undefined ***)puVar10 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3c23d70a,puVar10);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10064021c(puVar11);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_80 = NEON_fmov(0x3f800000,4);
  FUN_10064025c(puVar11,&local_80);
  FUN_10063f0e8(0x3e19999a,puVar11);
  FUN_10063f130(puVar11,FUN_10001f4ac);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063f0f0(puVar11);
    *(undefined ***)puVar11 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063f0e8(param_1,puVar11);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063f0f0(puVar11);
    *(undefined ***)puVar11 = &PTR_thunk_FUN_10063eeb4_1014a5410;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3f800000,puVar11);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 != 0xffff) {
    puVar11 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar11;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar11);
    *(undefined ***)puVar11 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    lVar3 = DAT_101dbd2f8;
    uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar7 != 0xffff) {
      puVar11 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar11;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_10063f1bc(puVar11);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      goto LAB_10002b4c4;
    }
  }
  puVar11 = (ushort *)0x0;
LAB_10002b4c4:
  FUN_10063f2a4(puVar11,puVar10);
  FUN_100642b7c(lVar1,puVar9);
  return;
}




void FUN_10002b510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar2 = FUN_100345d90(param_2);
  if (lVar2 == 0) {
    iVar1 = FUN_10034cb58();
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    uVar3 = FUN_10034ea2c(*(undefined4 *)(lVar2 + 0x260));
    if ((uVar3 & 1) == 0) {
      FUN_10034cb58();
      return;
    }
  }
  puVar4 = (undefined8 *)FUN_10002b694(param_1,param_4);
  iVar1 = FUN_10034cb58();
  if (iVar1 == 0) {
    iVar1 = FUN_1003458ec(param_3);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_10034ea2c(param_3);
    if (iVar1 == 0) {
      uVar6 = FUN_10034ee90();
      iVar1 = FUN_10034ec24(uVar6,param_3);
      if (iVar1 == 0) {
        uVar6 = FUN_10034ee90();
        iVar1 = FUN_10034eb10(uVar6,param_3);
        if (iVar1 == 0) {
          return;
        }
        uVar7 = *puVar4;
        uVar6 = puVar4[6];
        uVar8 = puVar4[7];
        uVar5 = FUN_10002ba2c(puVar4[5]);
        uVar9 = *(undefined4 *)(puVar4 + 8);
        uVar10 = *(undefined4 *)((long)puVar4 + 0x44);
      }
      else {
        uVar6 = puVar4[2];
        uVar8 = puVar4[3];
        uVar7 = *puVar4;
        uVar5 = FUN_10002ba2c(puVar4[1]);
        uVar9 = *(undefined4 *)(puVar4 + 4);
        uVar10 = *(undefined4 *)((long)puVar4 + 0x24);
      }
    }
    else {
      uVar7 = *puVar4;
      uVar6 = puVar4[10];
      uVar8 = puVar4[0xb];
      uVar5 = FUN_10002ba2c(puVar4[9]);
      uVar9 = *(undefined4 *)(puVar4 + 0xc);
      uVar10 = *(undefined4 *)((long)puVar4 + 100);
    }
  }
  else {
    iVar1 = FUN_1004d2524(puVar4[0xe]);
    if (iVar1 == 0) {
      return;
    }
    uVar7 = *puVar4;
    uVar6 = puVar4[0xe];
    uVar8 = puVar4[0xf];
    uVar5 = FUN_10002ba2c(puVar4[0xd]);
    uVar9 = *(undefined4 *)(puVar4 + 0x10);
    uVar10 = *(undefined4 *)((long)puVar4 + 0x84);
  }
  FUN_10002b708(uVar9,uVar10,param_1,uVar7,uVar6,uVar8,uVar5,param_5,param_6,param_7);
  return;
}




long FUN_10002b694(long param_1,int param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined8 **)**(long **)(param_1 + 0x28);
  plVar1 = (long *)**(long **)(param_1 + 0x28);
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    uVar5 = *puVar4;
    uVar2 = FUN_1004d2524(uVar5);
    iVar3 = FUN_100015208(uVar5,uVar2,0x12345678);
    if (iVar3 == param_2) break;
    puVar4 = (undefined8 *)plVar1[1];
    plVar1 = plVar1 + 1;
  }
  return *plVar1;
}




void FUN_10002b708(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_d0 [8];
  void *local_c8;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  
  if (*(uint *)(param_3 + 0x308) < 10) {
    lVar4 = *(long *)(param_3 + 0x300);
    do {
      lVar3 = lVar4;
      if (lVar3 == 0) break;
      lVar4 = *(long *)(lVar3 + 0x38);
    } while (*(long *)(lVar3 + 0x38) != 0);
    lVar4 = 0;
    do {
      if ((param_3 + lVar4 + 0x30 != *(long *)(param_3 + 0x300)) &&
         (*(long *)(param_3 + lVar4 + 0x70) == 0)) {
        puVar5 = (undefined8 *)(param_3 + lVar4 + 0x30);
        goto LAB_10002b7ac;
      }
      lVar4 = lVar4 + 0x48;
    } while (lVar4 != 0x2d0);
    puVar5 = (undefined8 *)0x0;
LAB_10002b7ac:
    uVar1 = FUN_1004e0150(param_5,0);
    thunk_FUN_1004e439c(auStack_80,uVar1);
    uVar1 = FUN_1004e0150(param_6,0);
    thunk_FUN_1004e439c(auStack_90,uVar1);
    FUN_1004e313c(auStack_a0);
    FUN_1004e313c(auStack_b0);
    FUN_1004e313c(auStack_c0);
    FUN_1004e38ac(auStack_a0,"%d");
    FUN_1004e38ac(auStack_b0,"%d");
    FUN_1004e38ac(auStack_c0,"%d");
    FUN_1004e3120(auStack_d0,"[VAR1]");
    FUN_1004e3bc4(auStack_80,0,auStack_d0,auStack_a0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(auStack_d0,"[VAR2]");
    FUN_1004e3bc4(auStack_80,0,auStack_d0,auStack_b0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(auStack_d0,"[VAR3]");
    FUN_1004e3bc4(auStack_80,0,auStack_d0,auStack_c0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(auStack_d0,"[VAR1]");
    FUN_1004e3bc4(auStack_90,0,auStack_d0,auStack_a0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(auStack_d0,"[VAR2]");
    FUN_1004e3bc4(auStack_90,0,auStack_d0,auStack_b0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_1004e3120(auStack_d0,"[VAR3]");
    FUN_1004e3bc4(auStack_90,0,auStack_d0,auStack_c0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    *puVar5 = param_4;
    puVar5[7] = 0;
    puVar5[8] = lVar3;
    FUN_1000153b4(puVar5 + 1,auStack_80);
    FUN_1000153b4(puVar5 + 3,auStack_90);
    puVar5[5] = param_7;
    *(int *)(puVar5 + 6) = (int)param_1;
    *(undefined4 *)((long)puVar5 + 0x34) = param_2;
    if (lVar3 != 0) {
      *(undefined8 **)(lVar3 + 0x38) = puVar5;
    }
    iVar2 = *(int *)(param_3 + 0x308);
    if (iVar2 == 0) {
      if (*(float *)(param_3 + 0x30c) <= 0.0) {
        *(undefined8 **)(param_3 + 0x300) = puVar5;
        *(int *)(param_3 + 0x30c) = (int)param_1;
        FUN_10002af94(param_1,param_3,puVar5 + 1,puVar5 + 3,param_7);
        iVar2 = *(int *)(param_3 + 0x308);
      }
      else {
        iVar2 = 0;
      }
    }
    *(int *)(param_3 + 0x308) = iVar2 + 1;
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
  }
  return;
}




void FUN_10002ba2c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  iVar1 = FUN_100126d70();
  if (iVar1 == 6) {
    pcVar3 = "ja";
  }
  else if (iVar1 == 0xf) {
    pcVar3 = "zh";
  }
  else {
    if (iVar1 != 8) goto LAB_10002ba90;
    pcVar3 = "ko";
  }
  lVar2 = FUN_10002c148(param_1,pcVar3);
  if (lVar2 != 0) {
    return;
  }
LAB_10002ba90:
  FUN_10002c148(param_1,"en");
  return;
}




void FUN_10002baa8(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((*(uint *)(param_2 + 0x2f4) & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) >> 0xd & 1) == 0) {
      return;
    }
    FUN_1000320fc();
    fVar14 = (float)FUN_100032244();
    if (fVar14 <= 10.0) {
      return;
    }
    FUN_1003467f8();
    iVar1 = FUN_10034cec0();
    if (iVar1 == 0) {
      return;
    }
    puVar3 = (undefined8 *)FUN_10002bf14(param_1,"TurretDestroyed");
    iVar1 = FUN_10034cb58();
    if (iVar1 != 0) {
      uVar13 = *puVar3;
      uVar10 = puVar3[0xe];
      uVar9 = puVar3[0xf];
      uVar4 = FUN_10002ba2c(puVar3[0xd]);
      uVar15 = *(undefined4 *)(puVar3 + 0x10);
      uVar11 = (ulong)(uint)(int)*(float *)((long)puVar3 + 0x84);
      uVar5 = FUN_10046517c(param_2);
      uVar16 = uVar15;
      goto LAB_10002be30;
    }
    uVar10 = FUN_10034ee90();
    iVar1 = FUN_10034eaf8(uVar10,param_2);
    if (iVar1 == 0) {
      uVar10 = FUN_10034ee90();
      iVar1 = FUN_10034ea80(uVar10,param_2);
      if (iVar1 == 0) {
        return;
      }
      uVar13 = *puVar3;
      uVar10 = puVar3[6];
      uVar9 = puVar3[7];
      uVar4 = FUN_10002ba2c(puVar3[5]);
      uVar15 = *(undefined4 *)(puVar3 + 8);
      uVar16 = *(undefined4 *)((long)puVar3 + 0x44);
LAB_10002bdc8:
      uVar11 = FUN_10046517c(param_2);
    }
    else {
      uVar10 = puVar3[2];
      uVar9 = puVar3[3];
      uVar13 = *puVar3;
      uVar4 = FUN_10002ba2c(puVar3[1]);
      uVar15 = *(undefined4 *)(puVar3 + 4);
      uVar16 = *(undefined4 *)((long)puVar3 + 0x24);
      uVar11 = FUN_10046517c(param_2);
    }
  }
  else {
    lVar6 = FUN_100345d90(param_3);
    if (lVar6 != 0) {
      FUN_1003461dc();
      lVar7 = FUN_100345d90();
      if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x2f4) & 1) != 0)) {
        param_3 = (ulong)*(uint *)(lVar7 + 0x260);
      }
      uVar11 = FUN_10034cb58();
      if ((uVar11 & 1) == 0) {
        uVar10 = FUN_10034ee90();
        iVar1 = FUN_10034ea80(uVar10,param_2);
        if (iVar1 == 0) goto LAB_10002bcf8;
      }
      lVar8 = FUN_1003a3524(lVar6);
      lVar7 = 0;
      if (lVar8 != 0) {
        lVar7 = lVar8 + -0x28;
      }
      iVar1 = FUN_10002512c(lVar7);
      ppuVar12 = &PTR_s_HeroKills_Double_Kill_10184ddc8;
      switch(iVar1) {
      case 2:
        break;
      case 3:
        ppuVar12 = &PTR_s_HeroKills_Triple_Kill_10184ddd0;
        break;
      case 4:
        puVar3 = (undefined8 *)FUN_10002bf14(param_1,PTR_s_HeroKills_Triple_Kill_10184ddd0);
        uVar10 = FUN_1003467f8();
        uVar13 = FUN_100345bbc(lVar6);
        iVar2 = FUN_10034d01c(uVar10,uVar13);
        if (3 < iVar2) {
          ppuVar12 = &PTR_s_HeroKills_Quadra_Kill_10184ddd8;
          break;
        }
        goto LAB_10002bc94;
      case 5:
        puVar3 = (undefined8 *)FUN_10002bf14(param_1,PTR_s_HeroKills_Triple_Kill_10184ddd0);
        uVar10 = FUN_1003467f8();
        uVar13 = FUN_100345bbc(lVar6);
        iVar2 = FUN_10034d01c(uVar10,uVar13);
        if (iVar2 < 5) goto LAB_10002bc94;
        ppuVar12 = &PTR_s_HeroKills_Penta_Kill_10184dde0;
        break;
      default:
        goto switchD_10002bbf0_default;
      }
      puVar3 = (undefined8 *)FUN_10002bf14(param_1,*ppuVar12);
LAB_10002bc94:
      uVar4 = *puVar3;
      uVar10 = puVar3[10];
      uVar13 = puVar3[0xb];
      uVar9 = FUN_10002ba2c(puVar3[9]);
      FUN_10002b708(*(undefined4 *)(puVar3 + 0xc),*(undefined4 *)((long)puVar3 + 100),param_1,uVar4,
                    uVar10,uVar13,uVar9,0xffffffff,0xffffffff,0xffffffff);
switchD_10002bbf0_default:
      uVar10 = FUN_1003467f8();
      uVar13 = FUN_100345bbc(lVar6);
      iVar2 = FUN_10034d01c(uVar10,uVar13);
      if (iVar2 <= iVar1) {
        FUN_1000251b8(lVar7);
      }
    }
LAB_10002bcf8:
    iVar1 = FUN_10034ea2c(param_3);
    if (iVar1 != 0) {
      uVar10 = FUN_10034ee90();
      uVar11 = FUN_10034eaf8(uVar10,param_2);
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN_10002bf68(param_1);
        if ((uVar11 & 1) != 0) {
          return;
        }
        puVar3 = (undefined8 *)FUN_10002bf14(param_1,PTR_s_YourKill_10184ddb8);
        uVar13 = *puVar3;
        uVar10 = puVar3[10];
        uVar9 = puVar3[0xb];
        uVar4 = FUN_10002ba2c(puVar3[9]);
        uVar15 = *(undefined4 *)(puVar3 + 0xc);
        uVar16 = *(undefined4 *)((long)puVar3 + 100);
        goto LAB_10002bdc8;
      }
    }
    puVar3 = (undefined8 *)FUN_10002bf14(param_1,PTR_s_HeroKilled_10184ddc0);
    iVar1 = FUN_10034cb58();
    if (iVar1 == 0) {
      uVar10 = FUN_10034ee90();
      iVar1 = FUN_10034ea80(uVar10,param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260));
        if (iVar1 == 0) {
          uVar10 = FUN_10034ee90();
          iVar1 = FUN_10034eaf8(uVar10,param_2);
          if (iVar1 == 0) {
            return;
          }
          uVar10 = puVar3[2];
          uVar9 = puVar3[3];
          uVar13 = *puVar3;
          uVar4 = FUN_10002ba2c(puVar3[1]);
          uVar15 = *(undefined4 *)(puVar3 + 4);
          uVar16 = *(undefined4 *)((long)puVar3 + 0x24);
        }
        else {
          uVar13 = *puVar3;
          uVar10 = puVar3[10];
          uVar9 = puVar3[0xb];
          uVar4 = FUN_10002ba2c(puVar3[9]);
          uVar15 = *(undefined4 *)(puVar3 + 0xc);
          uVar16 = *(undefined4 *)((long)puVar3 + 100);
        }
      }
      else {
        uVar11 = FUN_10002bf68(param_1);
        if ((uVar11 & 1) != 0) {
          return;
        }
        uVar13 = *puVar3;
        uVar10 = puVar3[6];
        uVar9 = puVar3[7];
        uVar4 = FUN_10002ba2c(puVar3[5]);
        uVar15 = *(undefined4 *)(puVar3 + 8);
        uVar16 = *(undefined4 *)((long)puVar3 + 0x44);
      }
    }
    else {
      uVar11 = FUN_10002bf68(param_1);
      if ((uVar11 & 1) != 0) {
        return;
      }
      uVar13 = *puVar3;
      uVar10 = puVar3[0xe];
      uVar9 = puVar3[0xf];
      uVar4 = FUN_10002ba2c(puVar3[0xd]);
      uVar15 = *(undefined4 *)(puVar3 + 0x10);
      uVar16 = *(undefined4 *)((long)puVar3 + 0x84);
    }
    uVar11 = 0xffffffff;
  }
  uVar5 = 0xffffffff;
LAB_10002be30:
  FUN_10002b708(uVar15,uVar16,param_1,uVar13,uVar10,uVar9,uVar4,uVar11,uVar5,0xffffffff);
  return;
}




long FUN_10002bf14(long param_1,char *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)**(long **)(param_1 + 0x28);
  plVar1 = (long *)**(long **)(param_1 + 0x28);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar2 = _strcmp((char *)*puVar3,param_2);
    if (iVar2 == 0) break;
    puVar3 = (undefined8 *)plVar1[1];
    plVar1 = plVar1 + 1;
  }
  return *plVar1;
}




undefined8 FUN_10002bf68(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x300);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _strcmp((char *)*puVar2,PTR_s_HeroKilled_10184ddc0);
    if ((((iVar1 == 0) || (iVar1 = _strcmp((char *)*puVar2,PTR_s_YourKill_10184ddb8), iVar1 == 0))
        || (iVar1 = _strcmp((char *)*puVar2,PTR_s_HeroKills_Double_Kill_10184ddc8), iVar1 == 0)) ||
       (((iVar1 = _strcmp((char *)*puVar2,PTR_s_HeroKills_Triple_Kill_10184ddd0), iVar1 == 0 ||
         (iVar1 = _strcmp((char *)*puVar2,PTR_s_HeroKills_Quadra_Kill_10184ddd8), iVar1 == 0)) ||
        (iVar1 = _strcmp((char *)*puVar2,PTR_s_HeroKills_Penta_Kill_10184dde0), iVar1 == 0))))
    break;
    puVar2 = (undefined8 *)puVar2[7];
  }
  return 1;
}




void FUN_10002c02c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((*(char *)(param_2 + 0x310) == '\0') &&
     (lVar1 = FUN_1010a0298(param_2,DAT_10184dd48), lVar1 != 0)) {
    FUN_10004b038(param_1,lVar1,param_3,0,1,0);
    FUN_10004b148(lVar1);
    return;
  }
  return;
}




void FUN_10002c09c(undefined8 param_1)

{
  DAT_101dc2918 = FUN_1010a1540(DAT_10184dde8,0);
  FUN_10002ad98(DAT_101dc2918,param_1);
  return;
}




void FUN_10002c0d4(void)

{
  if (DAT_101dc2918 != 0) {
    FUN_1010a1830();
    DAT_101dc2918 = 0;
  }
  return;
}




void FUN_10002c100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (DAT_101dc2918 != 0) {
    FUN_10002b510(DAT_101dc2918,param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}




void FUN_10002c12c(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101dc2918 != 0) {
    FUN_10002baa8(DAT_101dc2918,param_1,param_2);
    return;
  }
  return;
}




undefined8 FUN_10002c148(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _strcmp((char *)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)param_1[1];
    param_1 = param_1 + 1;
  }
  return *(undefined8 *)(*param_1 + 8);
}




void FUN_10002c198(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10144b7b8;
  thunk_FUN_100651068(param_1 + 0x9b);
  thunk_FUN_100651068(param_1 + 0x75);
  FUN_10064221c(param_1 + 100);
  lVar2 = 0;
  do {
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2d8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d0) = 0;
    }
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2c8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c0) = 0;
    }
    lVar2 = lVar2 + -0x48;
  } while (lVar2 != -0x2d0);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10002c224(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10144b7b8;
  thunk_FUN_100651068(param_1 + 0x9b);
  thunk_FUN_100651068(param_1 + 0x75);
  FUN_10064221c(param_1 + 100);
  lVar2 = 0;
  do {
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2d8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2d0) = 0;
    }
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x2c8);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c8) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x2c0) = 0;
    }
    lVar2 = lVar2 + -0x48;
  } while (lVar2 != -0x2d0);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10002c2b8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064221c();
  operator_delete(pvVar1);
  return;
}




undefined8 * thunk_FUN_10002ab88(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = 0;
  *param_1 = &PTR_FUN_10144b7b8;
  param_1[5] = 0;
  do {
    FUN_1004e313c((long)param_1 + lVar5 + 0x38);
    FUN_1004e313c((long)param_1 + lVar5 + 0x48);
    *(undefined8 *)((long)param_1 + lVar5 + 0x70) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x68) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x58) = 0;
    lVar5 = lVar5 + 0x48;
  } while (lVar5 != 0x2d0);
  param_1[99] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_1006421a8(param_1 + 100);
  param_1[100] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar1 = param_1 + 0x75;
  thunk_FUN_100650f44(puVar1,DAT_101d23000);
  puVar2 = param_1 + 0x9b;
  thunk_FUN_100650f44(puVar2,DAT_101d23008);
  uVar4 = FUN_100345b94();
  uVar4 = FUN_10034c450(uVar4,"*KindredAnnouncements*");
  param_1[5] = uVar4;
  FUN_100651460(puVar1,&DAT_101d23010);
  FUN_1006516bc(puVar1,&DAT_101d23014);
  FUN_10065165c(puVar1,1);
  if ((*(float *)(param_1 + 0x7f) != 0.5) || (*(float *)((long)param_1 + 0x3fc) != 0.5)) {
    param_1[0x7f] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar1);
  }
  if ((*(float *)(param_1 + 0x7e) != 1.2) || (*(float *)((long)param_1 + 0x3f4) != 1.2)) {
    param_1[0x7e] = 0x3f99999a3f99999a;
    FUN_1000200a0(puVar1);
  }
  FUN_100651460(puVar2,&DAT_101d23010);
  uVar3 = *(uint *)((long)param_1 + 0x55c);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x55c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(puVar2);
  }
  FUN_1006516bc(puVar2,&DAT_101d23014);
  FUN_10065165c(puVar2,1);
  if ((*(float *)(param_1 + 0xa5) != 0.5) || (*(float *)((long)param_1 + 0x52c) != 0.5)) {
    param_1[0xa5] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar2);
  }
  if ((*(float *)(param_1 + 0x6e) != 0.5) || (*(float *)((long)param_1 + 0x374) != 0.5)) {
    param_1[0x6e] = &DAT_3f0000003f000000;
    FUN_1000200a0(param_1 + 100);
  }
  return param_1;
}




void FUN_10002c2d0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10002c2dc(void)

{
  if ((DAT_10184ddf0 & 1) == 0) {
    DAT_10184dde8 = DAT_101872e38;
    DAT_10184ddf0 = 1;
  }
  return;
}




void FUN_10002c308(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




void FUN_10002c334(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10002c334_10144b8e8;
  param_1[5] = &PTR_FUN_10144b938;
  param_1[6] = &PTR_FUN_10144b980;
  if (param_1[8] != 0) {
    FUN_1010a1830();
    param_1[8] = 0;
  }
  FUN_1010a1da8(param_1 + 6);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10002c334(void)

{
  FUN_10002c334();
  return;
}




void FUN_10002c390(long param_1)

{
  FUN_10002c334(param_1 + -0x28);
  return;
}




void FUN_10002c398(long param_1)

{
  FUN_10002c334(param_1 + -0x30);
  return;
}




void FUN_10002c3a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002c334();
  operator_delete(pvVar1);
  return;
}




void FUN_10002c3b4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002c334(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10002c3cc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002c334(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_10002c3e4(long param_1)

{
  long lVar1;
  
  DAT_10184dd78 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd78 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd78 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10002c620;
  *(code **)(lVar1 + 0xb8) = FUN_10002c680;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd78;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0990(param_1,0x36de0632,FUN_10002c454,0);
  return;
}




void FUN_10002c454(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10002c524(param_1,in_stack_00000000);
  return;
}




void FUN_10002c480(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  plVar1 = (long *)FUN_1010a0298(param_1,DAT_10184dc58);
  *(long **)(param_1 + 0x40) = plVar1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010002c4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    return;
  }
  return;
}




void FUN_10002c4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_1010a0298(param_1,DAT_10184dc68);
  if (lVar1 != 0) {
    FUN_100029c74(lVar1,param_2,param_3);
    return;
  }
  return;
}




void FUN_10002c524(long param_1,byte *param_2)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  if ((*param_2 & 0x1f) == 0 || (*param_2 & 0x20) != 0) {
    FUN_1004e9194();
    return;
  }
  FUN_1004e9154();
  return;
}




void FUN_10002c550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002c55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
  return;
}




void FUN_10002c560(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
  uVar2 = puVar1[4];
  uVar4 = puVar1[7];
  uVar3 = puVar1[6];
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  uVar6 = puVar1[3];
  uVar5 = puVar1[2];
  param_2[5] = puVar1[5];
  param_2[4] = uVar2;
  param_2[7] = uVar4;
  param_2[6] = uVar3;
  param_2[1] = uVar8;
  *param_2 = uVar7;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  return;
}




void FUN_10002c59c(long param_1)

{
  FUN_1004e8e38(*(undefined8 *)(param_1 + 0x40));
  return;
}




void FUN_10002c5a4(long param_1)

{
  FUN_1004e9090(*(undefined8 *)(param_1 + 0x40));
  return;
}




void FUN_10002c5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002c5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  return;
}




void FUN_10002c5bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  uVar2 = puVar1[4];
  uVar4 = puVar1[7];
  uVar3 = puVar1[6];
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  uVar6 = puVar1[3];
  uVar5 = puVar1[2];
  param_2[5] = puVar1[5];
  param_2[4] = uVar2;
  param_2[7] = uVar4;
  param_2[6] = uVar3;
  param_2[1] = uVar8;
  *param_2 = uVar7;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  return;
}




void FUN_10002c5f8(long param_1)

{
  FUN_1004e8e38(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_10002c600(long param_1)

{
  FUN_1004e9090(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_10002c608(void)

{
  return;
}




long FUN_10002c60c(long param_1)

{
  return param_1 + -0x30;
}




long FUN_10002c614(long param_1)

{
  return param_1 + -0x30;
}




void FUN_10002c61c(void)

{
  return;
}




undefined8 * FUN_10002c620(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  param_1[5] = &PTR_FUN_10144b9b0;
  FUN_1010a1d84(param_1 + 6);
  *param_1 = &PTR_thunk_FUN_10002c334_10144b8e8;
  param_1[5] = &PTR_FUN_10144b938;
  param_1[6] = &PTR_FUN_10144b980;
  param_1[8] = 0;
  return param_1;
}




void FUN_10002c680(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002c688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10002c68c(void)

{
  if ((DAT_10184dd80 & 1) == 0) {
    DAT_10184dd78 = DAT_101872e38;
    DAT_10184dd80 = 1;
  }
  return;
}




void FUN_10002c6b8(void)

{
  if ((DAT_10184dc60 & 1) == 0) {
    DAT_10184dc58 = DAT_101872e38;
    DAT_10184dc60 = 1;
  }
  return;
}




void FUN_10002c6e4(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




void FUN_10002c710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144b9f8;
  param_1[5] = &PTR_FUN_10144ba30;
  FUN_1010a1da8();
  FUN_1010a0064(param_1);
  return;
}




void FUN_10002c748(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10144b9f8;
  *param_1 = &PTR_FUN_10144ba30;
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_10002c780(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144b9f8;
  param_1[5] = &PTR_FUN_10144ba30;
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10002c7bc(long param_1)

{
  FUN_10002c780(param_1 + -0x28);
  return;
}




void FUN_10002c7c4(long param_1)

{
  long lVar1;
  
  DAT_10184dd88 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dd88 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dd88 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10002ce2c;
  *(code **)(lVar1 + 0xb8) = FUN_10002ce84;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dd88;
  *(undefined4 *)(lVar1 + 0xa8) = 0x70;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,0,FUN_10002c878,0);
  FUN_1010a0944(param_1,1,FUN_10002c87c,0);
  FUN_1010a0944(param_1,5,thunk_FUN_10002c884,0);
  return;
}




void FUN_10002c878(void)

{
  return;
}




void FUN_10002c87c(void)

{
  return;
}




void thunk_FUN_10002c884(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 3) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&fStack_b0,*(undefined4 *)(param_1 + 0x60),1);
  }
  else if (iVar1 == 2) {
    (**(code **)(*plVar2 + 0x28))(plVar2,*(undefined4 *)(param_1 + 0x60),&fStack_b0);
  }
  else {
    if (iVar1 != 1) goto LAB_10002c930;
    (**(code **)(*plVar2 + 0x18))(plVar2,&fStack_b0);
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(*(long **)(param_1 + 0x38),&fStack_b0);
LAB_10002c930:
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_10002cc64(*(undefined4 *)(param_1 + 100),param_1);
  }
  if ((*(float *)(param_1 + 0x58) != 0.0) || (*(float *)(param_1 + 0x54) != 0.0)) {
    fVar4 = (float)FUN_1010a1cd4();
    fVar4 = *(float *)(param_1 + 0x5c) + fVar4 * *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = fVar4;
    fVar7 = 0.5;
    fVar4 = (float)___sincosf_stret(fVar4 * 0.5);
    fVar14 = fVar4 * 0.0;
    fVar13 = fVar4 * 1.0;
    fVar4 = fVar4 * 0.0;
    fVar8 = *(float *)(param_1 + 0x48);
    fVar10 = *(float *)(param_1 + 0x4c);
    fVar11 = *(float *)(param_1 + 0x50);
    fVar5 = fVar8 * 0.0 + fVar10 * 1.0 + fVar11 * 0.0;
    if (1.0 <= fVar5) {
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar5 = 0.0;
      fVar8 = 1.0;
    }
    else if (fVar5 <= -1.0) {
      fVar8 = 0.5;
      fVar5 = (float)___sincosf_stret(0x3fc90fdb);
      fVar10 = fVar5 * 0.0;
      fVar11 = fVar5 * 0.0;
      fVar5 = fVar5 * 0.0;
    }
    else {
      fVar12 = fVar11 * 1.0 - fVar10 * 0.0;
      fVar11 = fVar8 * 0.0 - fVar11 * 0.0;
      fVar9 = fVar10 * 0.0 - fVar8 * 1.0;
      fVar6 = SQRT(fVar5 * 2.0 + 2.0);
      fVar8 = fVar6 * 0.5;
      fVar6 = 1.0 / fVar6;
      fVar5 = 1.0 / SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar11 * fVar11);
      fVar10 = fVar6 * fVar12 * fVar5;
      fVar11 = fVar6 * fVar11 * fVar5;
      fVar5 = fVar6 * fVar9 * fVar5;
    }
    uStack_a4 = 0;
    uStack_94 = 0;
    uStack_7c = 0;
    uStack_84 = 0;
    uStack_74 = 0x3f800000;
    fVar6 = ((fVar10 * fVar7 + fVar4 * fVar11) - fVar13 * fVar5) + fVar14 * fVar8;
    fVar9 = (fVar11 * fVar7 - fVar10 * fVar4) + fVar14 * fVar5 + fVar13 * fVar8;
    fVar12 = (fVar10 * fVar13 - fVar11 * fVar14) + fVar7 * fVar5 + fVar4 * fVar8;
    fVar4 = fVar8 * fVar7 - (fVar10 * fVar14 + fVar13 * fVar11 + fVar4 * fVar5);
    fVar5 = fVar9 + fVar9;
    fVar7 = fVar12 + fVar12;
    fStack_9c = 1.0 - fVar6 * (fVar6 + fVar6);
    fStack_88 = fStack_9c - fVar5 * fVar9;
    fStack_8c = (fVar6 + fVar6) * fVar4;
    fStack_98 = fStack_8c + fVar7 * fVar9;
    fStack_b0 = 1.0 - (fVar5 * fVar9 + fVar7 * fVar12);
    fStack_9c = fStack_9c - fVar7 * fVar12;
    fStack_a0 = fVar6 * fVar5 - fVar7 * fVar4;
    fStack_ac = fVar7 * fVar4 + fVar6 * fVar5;
    fStack_a8 = fVar7 * fVar6 - fVar4 * fVar5;
    fStack_8c = fVar7 * fVar9 - fStack_8c;
    fStack_90 = fVar7 * fVar6 + fVar4 * fVar5;
    uStack_c0 = *(undefined4 *)(param_1 + 0x54);
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0x3f800000;
    uStack_d8 = 0;
    uStack_e0 = 0x3f80000000000000;
    uStack_c8 = 0x3f800000;
    uStack_d0 = 0;
    uStack_b4 = 0x3f800000;
    plVar2 = *(long **)(param_1 + 0x38);
    FUN_10002a9fc(auStack_170,&uStack_f0,&fStack_b0);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    FUN_10002a9fc(auStack_130,auStack_170,uVar3);
    (**(code **)(*plVar2 + 0x20))(plVar2,auStack_130);
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x30))();
  return;
}




void FUN_10002c884(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 3) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_b0,*(undefined4 *)(param_1 + 0x60),1);
  }
  else if (iVar1 == 2) {
    (**(code **)(*plVar2 + 0x28))(plVar2,*(undefined4 *)(param_1 + 0x60),&local_b0);
  }
  else {
    if (iVar1 != 1) goto LAB_10002c930;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_b0);
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x20))(*(long **)(param_1 + 0x38),&local_b0);
LAB_10002c930:
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_10002cc64(*(undefined4 *)(param_1 + 100),param_1);
  }
  if ((*(float *)(param_1 + 0x58) != 0.0) || (*(float *)(param_1 + 0x54) != 0.0)) {
    fVar4 = (float)FUN_1010a1cd4();
    fVar4 = *(float *)(param_1 + 0x5c) + fVar4 * *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = fVar4;
    fVar7 = 0.5;
    fVar4 = (float)___sincosf_stret(fVar4 * 0.5);
    fVar14 = fVar4 * 0.0;
    fVar13 = fVar4 * 1.0;
    fVar4 = fVar4 * 0.0;
    fVar8 = *(float *)(param_1 + 0x48);
    fVar10 = *(float *)(param_1 + 0x4c);
    fVar11 = *(float *)(param_1 + 0x50);
    fVar5 = fVar8 * 0.0 + fVar10 * 1.0 + fVar11 * 0.0;
    if (1.0 <= fVar5) {
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar5 = 0.0;
      fVar8 = 1.0;
    }
    else if (fVar5 <= -1.0) {
      fVar8 = 0.5;
      fVar5 = (float)___sincosf_stret(0x3fc90fdb);
      fVar10 = fVar5 * 0.0;
      fVar11 = fVar5 * 0.0;
      fVar5 = fVar5 * 0.0;
    }
    else {
      fVar12 = fVar11 * 1.0 - fVar10 * 0.0;
      fVar11 = fVar8 * 0.0 - fVar11 * 0.0;
      fVar9 = fVar10 * 0.0 - fVar8 * 1.0;
      fVar6 = SQRT(fVar5 * 2.0 + 2.0);
      fVar8 = fVar6 * 0.5;
      fVar6 = 1.0 / fVar6;
      fVar5 = 1.0 / SQRT(fVar9 * fVar9 + fVar12 * fVar12 + fVar11 * fVar11);
      fVar10 = fVar6 * fVar12 * fVar5;
      fVar11 = fVar6 * fVar11 * fVar5;
      fVar5 = fVar6 * fVar9 * fVar5;
    }
    local_a4 = 0;
    local_94 = 0;
    local_7c = 0;
    local_84 = 0;
    local_74 = 0x3f800000;
    fVar6 = ((fVar10 * fVar7 + fVar4 * fVar11) - fVar13 * fVar5) + fVar14 * fVar8;
    fVar9 = (fVar11 * fVar7 - fVar10 * fVar4) + fVar14 * fVar5 + fVar13 * fVar8;
    fVar12 = (fVar10 * fVar13 - fVar11 * fVar14) + fVar7 * fVar5 + fVar4 * fVar8;
    fVar4 = fVar8 * fVar7 - (fVar10 * fVar14 + fVar13 * fVar11 + fVar4 * fVar5);
    fVar5 = fVar9 + fVar9;
    fVar7 = fVar12 + fVar12;
    local_9c = 1.0 - fVar6 * (fVar6 + fVar6);
    local_88 = local_9c - fVar5 * fVar9;
    fStack_8c = (fVar6 + fVar6) * fVar4;
    fStack_98 = fStack_8c + fVar7 * fVar9;
    local_b0 = 1.0 - (fVar5 * fVar9 + fVar7 * fVar12);
    local_9c = local_9c - fVar7 * fVar12;
    local_a0 = fVar6 * fVar5 - fVar7 * fVar4;
    fStack_ac = fVar7 * fVar4 + fVar6 * fVar5;
    local_a8 = fVar7 * fVar6 - fVar4 * fVar5;
    fStack_8c = fVar7 * fVar9 - fStack_8c;
    local_90 = fVar7 * fVar6 + fVar4 * fVar5;
    local_c0 = *(undefined4 *)(param_1 + 0x54);
    local_bc = 0;
    uStack_b8 = 0;
    uStack_e8 = 0;
    local_f0 = 0x3f800000;
    uStack_d8 = 0;
    uStack_e0 = 0x3f80000000000000;
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b4 = 0x3f800000;
    plVar2 = *(long **)(param_1 + 0x38);
    FUN_10002a9fc(auStack_170,&local_f0,&local_b0);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    FUN_10002a9fc(auStack_130,auStack_170,uVar3);
    (**(code **)(*plVar2 + 0x20))(plVar2,auStack_130);
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x30))();
  return;
}




void FUN_10002cc10(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(uint *)(param_1 + 0x68) = param_4;
  if ((param_4 & 0xfffffffe) == 2) {
    *(undefined4 *)(param_1 + 0x60) = param_5;
  }
  return;
}




void FUN_10002cc2c(undefined4 param_1,long param_2)

{
  FUN_10002cc64();
  *(undefined1 *)(param_2 + 0x6c) = 1;
  *(undefined4 *)(param_2 + 100) = param_1;
  return;
}




void FUN_10002cc64(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_e0 [32];
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  fVar1 = (float)___sincosf_stret();
  fVar4 = fVar1 * fVar1 + param_2 * param_2;
  if (1e-06 <= fVar4) {
    fVar4 = SQRT(fVar4);
    param_2 = param_2 / fVar4;
    fVar1 = fVar1 / fVar4;
  }
  else {
    param_2 = 1.0;
    fVar1 = 0.0;
  }
  fVar5 = fVar1 * 1.0 - 0.0;
  fVar1 = param_2 * 0.0 - fVar1 * 0.0;
  fVar2 = 0.0 - param_2 * 1.0;
  fVar4 = 1.0 / SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar1 * fVar1);
  fVar5 = fVar5 * fVar4;
  fVar1 = fVar1 * fVar4;
  fVar2 = fVar2 * fVar4;
  fVar7 = fVar1 * 0.0 - fVar2 * 1.0;
  fVar6 = fVar2 * 0.0 - fVar5 * 0.0;
  fVar3 = fVar5 * 1.0 - fVar1 * 0.0;
  (**(code **)(**(long **)(param_3 + 0x38) + 0x18))(*(long **)(param_3 + 0x38),auStack_e0);
  local_70 = local_b0;
  local_68 = local_a8;
  local_94 = 0;
  local_84 = 0;
  local_74 = 0;
  local_64 = 0x3f800000;
  fVar4 = SQRT(local_c0 * local_c0 + fStack_bc * fStack_bc + local_b8 * local_b8);
  local_a0 = fVar4 * fVar5;
  fStack_9c = fVar4 * fVar1;
  local_98 = fVar4 * fVar2;
  local_90 = fVar4 * 0.0;
  fStack_8c = fVar4 * 1.0;
  local_88 = fVar4 * 0.0;
  local_78 = 1.0 / SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3);
  local_80 = fVar7 * fVar4 * local_78;
  fStack_7c = fVar6 * fVar4 * local_78;
  local_78 = fVar3 * fVar4 * local_78;
  (**(code **)(**(long **)(param_3 + 0x38) + 0x20))(*(long **)(param_3 + 0x38),&local_a0);
  return;
}




long FUN_10002ce1c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10002ce24(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_10002ce2c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144b9f8;
  param_1[5] = &PTR_FUN_10144ba30;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  return param_1;
}




void FUN_10002ce84(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002ce8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10002ce90(void)

{
  if ((DAT_10184dd90 & 1) == 0) {
    DAT_10184dd88 = DAT_101872e38;
    DAT_10184dd90 = 1;
  }
  return;
}




void FUN_10002cec0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10002ced4(long param_1)

{
  long lVar1;
  
  DAT_10184ddf8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184ddf8 + 1;
  lVar1 = param_1 + (ulong)DAT_10184ddf8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10002d078;
  *(code **)(lVar1 + 0xb8) = FUN_10002d08c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184ddf8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_10002cf40,0);
  return;
}




void FUN_10002cf40(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)FUN_1010a1cd4();
  fVar3 = *(float *)(param_1 + 0x30);
  fVar2 = (float)NEON_fminnm(*(float *)(param_1 + 0x34) + fVar2,fVar3);
  *(float *)(param_1 + 0x34) = fVar2;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  if (fVar2 < fVar3) {
    fVar4 = *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar2 = (float)_cosf((fVar2 * 0.5 * 3.1415927) / fVar3);
    FUN_100463f90(fVar5 + (fVar4 - fVar5) * fVar2,lVar1);
    return;
  }
  FUN_100463f90(*(undefined4 *)(param_1 + 0x2c),lVar1);
  FUN_1010a01dc(param_1);
  return;
}




void FUN_10002cff8(float param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [4];
  float local_3c;
  
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  FUN_100345b68(lVar1,auStack_40,1);
  *(float *)(param_3 + 0x28) = local_3c;
  *(float *)(param_3 + 0x2c) = local_3c - param_1;
  *(undefined4 *)(param_3 + 0x30) = param_2;
  *(undefined4 *)(param_3 + 0x34) = 0;
  return;
}




void FUN_10002d078(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10144ba60;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_10002d08c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002d094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10002d098(void)

{
  if ((DAT_10184de00 & 1) == 0) {
    DAT_10184ddf8 = DAT_101872e38;
    DAT_10184de00 = 1;
  }
  return;
}




void FUN_10002d0c4(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_10002d0f0(long param_1)

{
  long lVar1;
  
  DAT_10184de08 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de08 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de08 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_10002d31c;
  *(code **)(lVar1 + 0xb8) = FUN_10002d390;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de08;
  *(undefined4 *)(lVar1 + 0xa8) = 0x78;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_10002d18c,0);
  FUN_1010a0944(param_1,1,FUN_10002d1a8,0);
  return;
}




void FUN_10002d18c(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184de08) {
    param_1 = 0;
  }
  FUN_10002d1c4(param_1);
  return;
}




void FUN_10002d1a8(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184de08) {
    param_1 = 0;
  }
  FUN_10002d208(param_1);
  return;
}




void FUN_10002d1c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dc68) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_10002a8e4(lVar1,param_1 + 0x34,*(undefined8 *)(param_1 + 0x68),param_1 + 0x70);
  return;
}




void FUN_10002d208(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x70) != -1) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dc68) {
        FUN_10002a9bc();
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  return;
}




void FUN_10002d26c(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10002d294(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10002d2c0(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10002d2e4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10002d30c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10002d314(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_10002d31c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10144ba90;
  param_1[5] = &PTR_FUN_10144bac0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0x3f8000003f800000;
  return param_1;
}




void FUN_10002d390(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002d398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10002d39c(void)

{
  if ((DAT_10184de10 & 1) == 0) {
    DAT_10184de08 = DAT_101872e38;
    DAT_10184de10 = 1;
  }
  return;
}




void FUN_10002d3c8(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




float FUN_10002d3f4(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (1.1920929e-07 <= ABS(param_1 / param_4 + -2.0)) {
    fVar1 = param_1 / param_4 + -1.0;
    param_2 = param_2 + param_3 * SQRT(-(fVar1 * fVar1) - -1.0);
  }
  return param_2;
}




undefined8 * FUN_10002d434(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_10144baf0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  uVar2 = DAT_101dc1cb8;
  param_1[10] = DAT_101dc1cb8;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  param_1[0xe] = 0x3fc0000000000000;
  *(byte *)((long)param_1 + 0x7c) = *(byte *)((long)param_1 + 0x7c) & 0xe0 | 2;
  param_1[0x1e] = 0x200000002;
  param_1[0x2f] = uVar2;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x234) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0x3f80000000000000;
  FUN_1010b2058(param_1 + 0x4a);
  param_1[0x5f] = 0;
  param_1[0x61] = 0x44bb80003fc00000;
  param_1[0x60] = 0x3f800000420c0000;
  FUN_1010cf208(param_1 + 0x62);
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined4 *)((long)param_1 + 0x41c) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = DAT_101dc1cb8;
  *(undefined4 *)((long)param_1 + 0x434) = 0;
  param_1[0x87] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x88) = DAT_101dc0b88;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = uVar1;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  param_1[0x8d] = PTR_FUN_10184de18;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  return param_1;
}




void FUN_10002d594(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_54;
  undefined4 uStack_50;
  float local_4c;
  long local_48;
  
  FUN_10034ee90();
  uVar4 = FUN_10034e738();
  local_48 = 0;
  FUN_1010a1958(&local_48,1,DAT_10184dac8,0);
  puVar6 = *(undefined8 **)
            (*(long *)(*(long *)(local_48 + 0x290) + 0xc0) + (uVar4 & 0xffffffff) * 8 + -8);
  uVar8 = *(undefined4 *)(puVar6 + 1);
  *(undefined8 *)(param_1 + 0x44) = *puVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)((long)puVar6 + 0xc);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)((long)puVar6 + 0x14);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)((long)puVar6 + 0x1c);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)((long)puVar6 + 0x24);
  uVar8 = *(undefined4 *)(puVar6 + 1);
  *(undefined8 *)(param_1 + 0x80) = *puVar6;
  *(undefined4 *)(param_1 + 0x88) = uVar8;
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)puVar6 + 0xc);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)((long)puVar6 + 0x14);
  *(undefined4 *)(param_1 + 0x9c) = 0x44480000;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
  local_4c = 0.0;
  FUN_10012e9ac(0,0,0,0,0,&local_4c,0,0);
  FUN_10064142c(&uStack_50,&local_54);
  iVar3 = FUN_10012709c();
  if (iVar3 == 1) {
    fVar11 = *(float *)(puVar6 + 9);
    bVar2 = true;
    fVar7 = 1.0;
  }
  else {
    fVar11 = 0.0;
    fVar7 = 1.0;
    uVar4 = FUN_100126c88();
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_100126cb8(uStack_50,local_54), (uVar4 & 1) == 0)) {
      fVar7 = *(float *)((long)puVar6 + 0x44) + 1.0;
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  fVar11 = fVar11 + fVar7;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)((long)puVar6 + 0x2c);
  *(float *)(param_1 + 0x30) = (local_4c + *(float *)((long)puVar6 + 0x34)) * fVar11;
  fVar7 = (float)puVar6[7] * fVar11;
  fVar11 = (float)((ulong)puVar6[7] >> 0x20) * fVar11;
  *(ulong *)(param_1 + 0x34) = CONCAT44(fVar11,fVar7);
  *(ulong *)(param_1 + 0x3c) =
       CONCAT44(fVar11 * (*(float *)(puVar6 + 8) + 1.0),fVar7 * (*(float *)(puVar6 + 8) + 1.0));
  puVar1 = (undefined8 *)(param_1 + 0x58);
  if (!bVar2) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
  }
  uVar8 = 1;
  if (bVar2) {
    uVar8 = 2;
    fVar7 = fVar11;
  }
  uVar5 = *puVar1;
  *(undefined4 *)(param_1 + 0x470) = uVar8;
  *(float *)(param_1 + 0xdc) = fVar7;
  *(undefined8 *)(param_1 + 0xd4) = uVar5;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_1 + 0x94);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_10002de48(param_1);
  fVar7 = 3.1415927;
  fVar11 = (float)___sincosf_stret(*(float *)(param_1 + 0x98) * 0.0055555557 * 3.1415927);
  fVar9 = *(float *)((long)puVar6 + 0x4c);
  fVar10 = *(float *)(puVar6 + 10);
  *(float *)(param_1 + 0x70) = fVar7 * fVar9 - fVar10 * fVar11;
  *(float *)(param_1 + 0x78) = fVar10 * fVar7 + fVar9 * fVar11;
  return;
}




void FUN_10002d7b8(undefined4 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  switch(param_3) {
  case 1:
    puVar2 = (undefined4 *)(param_2 + 0x34);
    goto LAB_10002d7fc;
  case 2:
    puVar2 = (undefined4 *)(param_2 + 0x38);
    break;
  case 3:
    puVar2 = (undefined4 *)(param_2 + 0x3c);
LAB_10002d7fc:
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    break;
  case 4:
    puVar2 = (undefined4 *)(param_2 + 0x40);
    break;
  default:
    puVar2 = (undefined4 *)(param_2 + 0x30);
  }
  uVar3 = *puVar2;
  *(undefined4 *)(param_2 + 0x470) = param_3;
  *(undefined4 *)(param_2 + 0xdc) = uVar3;
  *(undefined8 *)(param_2 + 0xd4) = uVar1;
  *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0xb4) = *(undefined8 *)(param_2 + 0x94);
  *(undefined4 *)(param_2 + 0xe8) = 0;
  *(undefined4 *)(param_2 + 0xec) = param_1;
  FUN_10002de48();
  return;
}




void FUN_10002d834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144baf0;
  FUN_1010a0064();
  return;
}




void FUN_10002d844(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144baf0;
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10002d864(long param_1)

{
  long lVar1;
  
  DAT_10184de20 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de20 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de20 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10002d434;
  *(code **)(lVar1 + 0xb8) = FUN_10002f0d0;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de20;
  *(undefined4 *)(lVar1 + 0xa8) = 0x478;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_10002d8d0,0);
  return;
}




void FUN_10002d8d0(long param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined8 local_30;
  float local_28;
  
  local_30 = *(undefined8 *)(param_1 + 0x414);
  local_28 = *(float *)(param_1 + 0x41c);
  if (((*(byte *)(param_1 + 0x7c) >> 4 & 1) == 0) &&
     (iVar2 = FUN_10002d9e0(param_1,&local_30), iVar2 != 0)) {
    local_30 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20) +
                        (float)((ulong)local_30 >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x420) + (float)local_30);
    local_28 = *(float *)(param_1 + 0x428) + local_28;
  }
  uVar1 = *(int *)(param_1 + 0xf0) - 1;
  fVar3 = 0.0;
  if (uVar1 < 4) {
    fVar3 = *(float *)(&DAT_10114b650 + (long)(int)uVar1 * 4);
  }
  *(undefined8 *)(param_1 + 0xc0) = local_30;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 6;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
  *(float *)(param_1 + 200) = local_28;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(float *)(param_1 + 0xe4) = fVar3;
  if (fVar3 <= 0.0) {
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_10002de48(param_1);
  FUN_10002db00(param_1);
  FUN_10002de48(param_1);
  FUN_10002e020(param_1);
  FUN_10002e0d4(param_1);
  FUN_10002e3c8(param_1);
  return;
}




undefined8 FUN_10002d9e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x458);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x460) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x458);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x460) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x458) = 0;
            *(undefined4 *)(param_1 + 0x460) = DAT_101dc0b88;
          }
        }
        FUN_100474200(uVar3,param_2);
        return 1;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x458) = 0;
      *(undefined4 *)(param_1 + 0x460) = DAT_101dc0b88;
    }
  }
  plVar1 = *(long **)(param_1 + 0x448);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x450) == (int)plVar1[1]) goto LAB_10002da9c;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x450) = DAT_101dc0b88;
  }
  plVar1 = *(long **)(param_1 + 0x438);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x440) != (int)plVar1[1]) {
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x440) = DAT_101dc0b88;
    return 0;
  }
LAB_10002da9c:
  uVar3 = (**(code **)(*plVar1 + 0x10))();
  FUN_100463ff4(uVar3,param_2);
  return 1;
}




void FUN_10002db00(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  iVar1 = FUN_10034cb58();
  if (iVar1 != 0) {
    uVar6 = FUN_10109c494(0x4c);
    if ((uVar6 & 1) == 0) {
      uVar2 = FUN_10109c494(0x4d);
    }
    else {
      uVar2 = 1;
    }
    uVar6 = FUN_10109c494(0x4e);
    if ((uVar6 & 1) == 0) {
      uVar3 = FUN_10109c494(0x4f);
    }
    else {
      uVar3 = 1;
    }
    uVar6 = FUN_10109c494(0x50);
    if ((uVar6 & 1) == 0) {
      uVar4 = FUN_10109c494(0x51);
    }
    else {
      uVar4 = 1;
    }
    if (((((uVar2 ^ 1) & 1) != 0) || (((uVar3 ^ 1) & 1) != 0)) || (fVar13 = 0.125, uVar4 == 0)) {
      fVar13 = 0.25;
      if ((uVar3 ^ 1 | uVar2 ^ 1) == 1) {
        fVar13 = 0.25;
        if ((uVar3 & uVar4) == 0) {
          fVar13 = 0.5;
        }
        fVar7 = 2.0;
        if (uVar2 == 0) {
          fVar7 = 1.0;
        }
        if (uVar3 == 0) {
          fVar13 = fVar7;
        }
      }
    }
    iVar1 = FUN_10109c494(0x5c);
    fVar7 = 0.0;
    if (iVar1 != 0) {
      fVar7 = (float)FUN_1010a1ce0();
      fVar7 = fVar13 * -10.0 * fVar7;
    }
    fVar14 = fVar13 * 10.0;
    iVar5 = FUN_10109c494(0x5d);
    if (iVar5 != 0) {
      fVar8 = (float)FUN_1010a1ce0();
      fVar7 = fVar7 + fVar14 * fVar8;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x5a);
    fVar8 = 0.0;
    if (iVar5 != 0) {
      fVar8 = (float)FUN_1010a1ce0();
      fVar8 = fVar13 * -10.0 * fVar8;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x5b);
    if (iVar5 != 0) {
      fVar9 = (float)FUN_1010a1ce0();
      fVar8 = fVar8 + fVar14 * fVar9;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x52);
    fVar9 = 0.0;
    if (iVar5 != 0) {
      fVar9 = (float)FUN_1010a1ce0();
      fVar9 = fVar9 * fVar13 * 45.0;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x53);
    if (iVar5 != 0) {
      fVar10 = (float)FUN_1010a1ce0();
      fVar9 = fVar9 - fVar13 * 45.0 * fVar10;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x41);
    fVar10 = 0.0;
    if (iVar5 != 0) {
      fVar10 = (float)FUN_1010a1ce0();
      fVar10 = fVar13 * -10.0 * fVar10;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x42);
    if (iVar5 != 0) {
      fVar11 = (float)FUN_1010a1ce0();
      fVar10 = fVar10 + fVar14 * fVar11;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x45);
    fVar14 = 0.0;
    if (iVar5 != 0) {
      fVar14 = (float)FUN_1010a1ce0();
      fVar14 = fVar13 * -25.0 * fVar14;
      iVar1 = 1;
    }
    iVar5 = FUN_10109c494(0x46);
    if (iVar5 != 0) {
      fVar11 = (float)FUN_1010a1ce0();
      fVar14 = fVar14 + fVar13 * 25.0 * fVar11;
      iVar1 = 1;
    }
    iVar5 = FUN_10034cb58();
    if ((iVar5 != 0) &&
       (((uVar6 = FUN_10109c4ac(0x5c), (uVar6 & 1) != 0 ||
         (uVar6 = FUN_10109c4ac(0x5d), (uVar6 & 1) != 0)) ||
        ((uVar6 = FUN_10109c4ac(0x5a), (uVar6 & 1) != 0 || (iVar5 = FUN_10109c4ac(0x5b), iVar5 != 0)
         ))))) {
      FUN_10002e944(param_1);
    }
    if (iVar1 != 0) {
      *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 6;
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
      *(ulong *)(param_1 + 0xd4) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xd4) >> 0x20) + fVar9,
                    (float)*(undefined8 *)(param_1 + 0xd4) + fVar14);
      *(ulong *)(param_1 + 0xcc) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xcc) >> 0x20) + fVar7,
                    (float)*(undefined8 *)(param_1 + 0xcc) + fVar8);
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + fVar10;
      *(undefined8 *)(param_1 + 0xe8) = 0x4120000000000000;
      FUN_10002de48(param_1);
    }
    iVar1 = FUN_10011a354(0x2a);
    if (iVar1 != 0) {
      uVar12 = 0x42c80000;
      if (uVar3 == 0) {
        uVar12 = 0;
      }
      FUN_10002e7bc(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                    *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                    *(undefined4 *)(param_1 + 0x30),uVar12,param_1);
      return;
    }
  }
  return;
}




void FUN_10002de48(long param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  float extraout_s0;
  float fVar5;
  undefined4 extraout_var;
  float fVar6;
  undefined4 extraout_var_00;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  
  if ((*(byte *)(param_1 + 0x7c) >> 2 & 1) != 0) {
    fVar3 = (float)FUN_1010a1ce0();
    fVar14 = *(float *)(param_1 + 0xe4);
    uVar4 = NEON_fminnm(*(float *)(param_1 + 0xe0) + fVar3,fVar14);
    *(undefined4 *)(param_1 + 0xe0) = uVar4;
    fVar11 = *(float *)(param_1 + 0xec);
    uVar7 = NEON_fminnm(*(float *)(param_1 + 0xe8) + fVar3,fVar11);
    *(undefined4 *)(param_1 + 0xe8) = uVar7;
    fVar3 = 1.0;
    uVar15 = 0;
    if (0.001 <= ABS(fVar14)) {
      (**(code **)(param_1 + 0x468))(uVar4,ZEXT816(0),0x3f800000,fVar14);
      uVar15 = CONCAT44(extraout_var_00,extraout_var);
      fVar11 = *(float *)(param_1 + 0xec);
      fVar3 = extraout_s0;
    }
    fVar14 = 1.0;
    if (0.001 <= ABS(fVar11)) {
      fVar14 = (float)(**(code **)(param_1 + 0x468))
                                (*(undefined4 *)(param_1 + 0xe8),ZEXT816(0),0x3f800000);
    }
    uVar8 = NEON_fmov(0x3f800000,4);
    fVar11 = (float)uVar8 - fVar3;
    fVar10 = (float)((ulong)uVar8 >> 0x20) - fVar14;
    auVar9._4_4_ = fVar11;
    auVar9._0_4_ = fVar11;
    auVar9._8_4_ = fVar11;
    auVar9._12_4_ = fVar11;
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar11;
    auVar13._8_8_ = 0;
    auVar9 = NEON_ext(auVar9,auVar13,8,1);
    fVar6 = (float)*(undefined8 *)(param_1 + 200);
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    fVar11 = (float)uVar8;
    fVar5 = (float)((ulong)uVar8 >> 0x20);
    auVar12._4_4_ = fVar3;
    auVar12._0_4_ = fVar3;
    auVar12._8_4_ = fVar3;
    auVar12._12_4_ = fVar3;
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = fVar3;
    auVar2._8_8_ = uVar15;
    auVar13 = NEON_ext(auVar12,auVar2,8,1);
    fVar3 = *(float *)(param_1 + 0xa0) * auVar9._0_4_ + auVar13._0_4_ * fVar11;
    *(float *)(param_1 + 0x90) =
         *(float *)(param_1 + 0xb0) * fVar10 + fVar14 * *(float *)(param_1 + 0xd0);
    *(ulong *)(param_1 + 0x94) =
         CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0x42c) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0xd4) >> 0x20)) * fVar14 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20) * fVar10,
                  ((float)*(undefined8 *)(param_1 + 0x42c) + (float)*(undefined8 *)(param_1 + 0xd4))
                  * fVar14 + (float)*(undefined8 *)(param_1 + 0xb4) * fVar10);
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0xa8) * auVar9._8_4_ + auVar13._8_4_ * fVar6;
    *(float *)(param_1 + 0x8c) =
         *(float *)(param_1 + 0xac) * auVar9._12_4_ +
         auVar13._12_4_ * (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
    *(float *)(param_1 + 0x80) = fVar3;
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0xa4) * auVar9._4_4_ + auVar13._4_4_ * fVar5;
    *(float *)(param_1 + 0x9c) =
         *(float *)(param_1 + 0xbc) +
         fVar14 * ((*(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xbc)) +
                  *(float *)(param_1 + 0x434));
    bVar1 = *(byte *)(param_1 + 0x7c);
    *(byte *)(param_1 + 0x7c) = bVar1 | 2;
    if ((*(float *)(param_1 + 0xe4) <= *(float *)(param_1 + 0xe0)) &&
       (*(float *)(param_1 + 0xec) <= *(float *)(param_1 + 0xe8))) {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xd0);
      *(byte *)(param_1 + 0x7c) = bVar1 & 0xfb | 2;
      fVar3 = *(float *)(param_1 + 0x80);
    }
    if ((((ABS(fVar3 - fVar11) < 0.1) && (ABS(*(float *)(param_1 + 0x84) - fVar5) < 0.1)) &&
        (ABS(*(float *)(param_1 + 0x88) - fVar6) < 0.1)) &&
       (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0xf4))) {
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf4);
    }
  }
  return;
}




void FUN_10002e020(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((*(byte *)(param_1 + 0x7c) >> 3 & 1) != 0) {
    fVar8 = *(float *)(param_1 + 0x184);
    fVar1 = (float)FUN_1010a1ce0();
    fVar2 = *(float *)(param_1 + 0x180);
    fVar1 = (float)NEON_fminnm(fVar1 + fVar8,fVar2);
    *(float *)(param_1 + 0x184) = fVar1;
    fVar8 = *(float *)(param_1 + 0x188) * fVar1;
    uVar5 = *(undefined8 *)(param_1 + 0xf8 + (ulong)((int)fVar8 & 0xf) * 8);
    uVar7 = *(undefined8 *)(param_1 + 0xf8 + (ulong)((int)(fVar8 + 1.0) & 0xf) * 8);
    fVar4 = (float)uVar5;
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    fVar3 = 1.0 - fVar1 / fVar2;
    *(ulong *)(param_1 + 0x178) =
         CONCAT44((fVar6 + ((float)((ulong)uVar7 >> 0x20) - fVar6) * (fVar8 - (float)(int)fVar8)) *
                  fVar3,(fVar4 + ((float)uVar7 - fVar4) * (fVar8 - (float)(int)fVar8)) * fVar3);
    if (fVar2 <= fVar1) {
      *(undefined8 *)(param_1 + 0x178) = DAT_101dc1cb8;
      *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xf7;
    }
  }
  return;
}




void FUN_10002e0d4(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_d0;
  undefined8 local_cc;
  float local_c0;
  undefined8 local_bc;
  float local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    lVar1 = param_1 + 0x18c;
    *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(param_1 + 0x178);
    *(float *)(param_1 + 0x1c4) = -*(float *)(param_1 + 0x9c);
    fVar14 = 0.0055555557;
    fVar5 = (float)___sincosf_stret(*(float *)(param_1 + 0x94) * 0.017453294);
    *(float *)(param_1 + 0x1a0) = fVar14;
    *(float *)(param_1 + 0x1a4) = fVar5;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    fVar16 = *(float *)(param_1 + 0x98);
    fVar7 = fVar14;
    fVar6 = (float)___sincosf_stret(fVar16 * 0.017453294);
    *(float *)(param_1 + 0x18c) = fVar7;
    *(float *)(param_1 + 400) = fVar6 * fVar5;
    *(float *)(param_1 + 0x194) = fVar6 * -fVar14;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(float *)(param_1 + 0x1ac) = fVar6;
    *(float *)(param_1 + 0x1b0) = fVar7 * -fVar5;
    *(float *)(param_1 + 0x1b4) = fVar7 * fVar14;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    fVar6 = *(float *)(param_1 + 0x8c);
    fVar14 = *(float *)(param_1 + 0x90);
    fVar5 = (float)___sincosf_stret(fVar16 * -0.0055555557 * 3.1415927);
    local_70 = -(fVar14 * fVar5) - (*(float *)(param_1 + 0x80) + fVar7 * fVar6);
    fStack_6c = -*(float *)(param_1 + 0x84);
    local_68 = (fVar6 * fVar5 - fVar14 * fVar7) - *(float *)(param_1 + 0x88);
    fVar6 = 0.0;
    uStack_98 = 0;
    local_a0 = 0x3f800000;
    uStack_88 = 0;
    uStack_90 = 0x3f80000000000000;
    uStack_78 = 0x3f800000;
    local_80 = 0;
    local_64 = 0x3f800000;
    FUN_10002a9fc(lVar1,&local_a0,lVar1);
    FUN_10002ee14(param_1 + 0x1cc,lVar1);
    fVar14 = *(float *)(param_1 + 0x300);
    fVar7 = DAT_101873a38._4_4_;
    fVar5 = (float)DAT_101873a38;
    if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
      fVar5 = (float)(**(code **)(**(long **)(param_1 + 0x2f8) + 0x48))();
      fVar7 = fVar6;
    }
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (0.0 < fVar7) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar5)) {
        bVar2 = fVar5 < 0.0;
        bVar3 = fVar5 == 0.0;
        bVar4 = false;
      }
    }
    fVar7 = fVar5 / fVar7;
    if (bVar3 || bVar2 != bVar4) {
      fVar7 = 1.0;
    }
    *(float *)(param_1 + 0x304) = fVar7;
    fVar15 = *(float *)(param_1 + 0x308);
    fVar17 = *(float *)(param_1 + 0x30c);
    fVar5 = (float)_tanf((3.1415927 - fVar14 * 0.017453294) * 0.5);
    *(float *)(param_1 + 0x20c) = fVar5 / fVar7;
    *(float *)(param_1 + 0x220) = fVar5;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(float *)(param_1 + 0x234) = (fVar17 + fVar15) / (fVar15 - fVar17);
    *(float *)(param_1 + 0x244) = (fVar15 * (fVar17 + fVar17)) / (fVar15 - fVar17);
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x22c) = 0;
    *(undefined8 *)(param_1 + 0x224) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x248) = 0;
    local_c0 = *(float *)(param_1 + 0x1dc);
    fVar9 = *(float *)(param_1 + 0x1ec);
    local_b0 = *(float *)(param_1 + 0x1cc) * 0.0 + local_c0 * 0.0 + fVar9 * 0.0 +
               *(float *)(param_1 + 0x1fc);
    fVar11 = (float)*(undefined8 *)(param_1 + 0x1e0);
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x1e0) >> 0x20);
    fVar16 = (float)*(undefined8 *)(param_1 + 0x1f0);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20);
    fVar5 = (float)*(undefined8 *)(param_1 + 0x1d0) * 0.0 + fVar11 * 0.0 + fVar16 * 0.0 +
            (float)*(undefined8 *)(param_1 + 0x200);
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d0) >> 0x20) * 0.0 + fVar12 * 0.0 +
            fVar8 * 0.0 + (float)((ulong)*(undefined8 *)(param_1 + 0x200) >> 0x20);
    local_ac = CONCAT44(fVar6,fVar5);
    fVar10 = SQRT(fVar16 * fVar16 + fVar9 * fVar9 + fVar8 * fVar8);
    fVar13 = SQRT(fVar11 * fVar11 + local_c0 * local_c0 + fVar12 * fVar12);
    local_c0 = local_c0 / fVar13;
    local_bc = CONCAT44(fVar12 / fVar13,fVar11 / fVar13);
    local_d0 = local_b0 - fVar9 / fVar10;
    local_cc = CONCAT44(fVar6 - fVar8 / fVar10,fVar5 - fVar16 / fVar10);
    thunk_FUN_1010cf220(fVar15,fVar17,fVar7,fVar14,param_1 + 0x310,&local_b0,&local_d0,&local_c0);
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfd;
  }
  return;
}




void FUN_10002e3c8(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x194);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x18c);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x1a4);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x19c);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x1b4);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x1ac);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x1bc);
  }
  else {
    FUN_10002e0d4(param_1);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x194);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x18c);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x1a4);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x19c);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x1b4);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x1ac);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x1bc);
    if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
      FUN_10002e0d4(param_1);
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x214);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x20c);
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x224);
      *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x21c);
      *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x234);
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x22c);
      *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x244);
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x23c);
      if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
        FUN_10002e0d4(param_1);
      }
      goto LAB_10002e478;
    }
  }
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x214);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x20c);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x224);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x21c);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x234);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x22c);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x244);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x23c);
LAB_10002e478:
  *(long *)(param_1 + 0x2d8) = param_1 + 0x310;
  FUN_1010b23e4(param_1 + 0x250,FUN_10002eddc);
  return;
}




void FUN_10002e4e0(undefined4 param_1,long param_2)

{
  *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) | 2;
  *(undefined4 *)(param_2 + 0x30c) = param_1;
  return;
}




void FUN_10002e4f4(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_3 + 0xdc) = param_1;
  *(undefined8 *)(param_3 + 0xd4) = *param_4;
  *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(param_3 + 0x9c);
  *(undefined8 *)(param_3 + 0xb4) = *(undefined8 *)(param_3 + 0x94);
  *(undefined4 *)(param_3 + 0xe8) = 0;
  *(undefined4 *)(param_3 + 0xec) = param_2;
  FUN_10002de48();
  return;
}




long FUN_10002e51c(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_10002e0d4(param_1);
  }
  return param_1 + 0x310;
}




long FUN_10002e54c(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_10002e0d4(param_1);
  }
  return param_1 + 0x1cc;
}




long FUN_10002e57c(long param_1)

{
  return param_1 + 0x80;
}




long FUN_10002e584(long param_1)

{
  return param_1 + 0x94;
}




long FUN_10002e58c(long param_1)

{
  return param_1 + 0xd4;
}




float FUN_10002e594(long param_1)

{
  return *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x8c);
}




long FUN_10002e5ac(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_10002e0d4(param_1);
  }
  return param_1 + 0x32c;
}




long FUN_10002e5dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_10002e0d4(param_1);
  }
  return param_1 + 800;
}




undefined4 FUN_10002e60c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}




undefined4 FUN_10002e614(long param_1)

{
  return *(undefined4 *)(param_1 + 0x470);
}




void FUN_10002e61c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}




void FUN_10002e624(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}




long FUN_10002e62c(long param_1)

{
  return param_1 + 0x250;
}




void FUN_10002e634(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2f8) = param_2;
  return;
}




void FUN_10002e63c(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 2;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x414) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xf0) = param_3;
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  uVar2 = 0;
  if (param_3 - 1U < 4) {
    uVar2 = *(undefined4 *)(&DAT_10114b650 + (long)(int)(param_3 - 1U) * 4);
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  return;
}




void FUN_10002e688(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x420) = uVar1;
  return;
}




void FUN_10002e69c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x42c) = *param_2;
  return;
}




void FUN_10002e6ac(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x434) = param_1;
  return;
}




void FUN_10002e6b4(float param_1,float param_2,float param_3,long param_4,long param_5,int param_6)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 local_40 [8];
  float local_38;
  
  *(long *)(param_4 + 0x438) = param_5 + 0x28;
  *(undefined4 *)(param_4 + 0x440) = *(undefined4 *)(param_5 + 0x30);
  *(float *)(param_4 + 0x420) = param_1;
  *(float *)(param_4 + 0x424) = param_2;
  *(float *)(param_4 + 0x428) = param_3;
  FUN_100463ff4(param_5,local_40);
  fVar2 = 0.0;
  if (param_6 == 0) {
    fVar2 = 100.0;
  }
  bVar1 = *(byte *)(param_4 + 0x7c);
  *(byte *)(param_4 + 0x7c) = bVar1 | 7;
  *(undefined8 *)(param_4 + 0xa8) = *(undefined8 *)(param_4 + 0x88);
  *(undefined8 *)(param_4 + 0xa0) = *(undefined8 *)(param_4 + 0x80);
  *(undefined8 *)(param_4 + 0xb8) = *(undefined8 *)(param_4 + 0x98);
  *(undefined8 *)(param_4 + 0xb0) = *(undefined8 *)(param_4 + 0x90);
  *(ulong *)(param_4 + 0xc0) = CONCAT44(local_40._4_4_ + param_2,local_40._0_4_ + param_1);
  *(float *)(param_4 + 200) = local_38 + param_3;
  *(undefined4 *)(param_4 + 0xe0) = 0;
  *(float *)(param_4 + 0xe4) = fVar2;
  if (fVar2 <= 0.0) {
    *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(param_4 + 0xc0);
    *(undefined4 *)(param_4 + 0x88) = *(undefined4 *)(param_4 + 200);
    *(undefined4 *)(param_4 + 0xe4) = 0;
  }
  uVar3 = 0x44480000;
  if ((bVar1 & 1) != 0) {
    uVar3 = *(undefined4 *)(param_4 + 0xdc);
  }
  FUN_10002de48(param_4);
  FUN_10002e7bc(*(undefined4 *)(param_4 + 0x50),*(undefined4 *)(param_4 + 0x54),
                *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0xd8),uVar3,fVar2,param_4)
  ;
  return;
}




void FUN_10002e7bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,float param_6,long param_7)

{
  *(byte *)(param_7 + 0x7c) = *(byte *)(param_7 + 0x7c) | 6;
  *(undefined8 *)(param_7 + 0xa8) = *(undefined8 *)(param_7 + 0x88);
  *(undefined8 *)(param_7 + 0xa0) = *(undefined8 *)(param_7 + 0x80);
  *(undefined8 *)(param_7 + 0xb8) = *(undefined8 *)(param_7 + 0x98);
  *(undefined8 *)(param_7 + 0xb0) = *(undefined8 *)(param_7 + 0x90);
  *(undefined4 *)(param_7 + 0xcc) = param_1;
  *(undefined4 *)(param_7 + 0xd0) = param_2;
  *(undefined4 *)(param_7 + 0xd4) = param_3;
  *(undefined4 *)(param_7 + 0xd8) = param_4;
  *(undefined4 *)(param_7 + 0xdc) = param_5;
  *(undefined4 *)(param_7 + 0xe8) = 0;
  *(float *)(param_7 + 0xec) = param_6;
  if (param_6 <= 0.0) {
    *(undefined8 *)(param_7 + 0x94) = *(undefined8 *)(param_7 + 0xd4);
    *(undefined8 *)(param_7 + 0x8c) = *(undefined8 *)(param_7 + 0xcc);
    *(undefined4 *)(param_7 + 0x9c) = param_5;
    *(undefined4 *)(param_7 + 0xec) = 0;
  }
  FUN_10002de48();
  return;
}




bool FUN_10002e800(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  undefined1 auStack_20 [16];
  
  plVar4 = *(long **)(param_1 + 0x438);
  bVar2 = false;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x440) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      bVar2 = false;
      if (lVar5 != 0) {
        FUN_100345b68(lVar5,auStack_20,0);
        FUN_10011a174(&fStack_30,auStack_20,0);
        FUN_10064142c(&local_34,&local_38);
        bVar2 = false;
        bVar1 = false;
        bVar3 = false;
        if (0.0 < fStack_30) {
          bVar1 = false;
          bVar3 = true;
          if (!NAN(fStack_30) && !NAN(local_34)) {
            bVar1 = fStack_30 < local_34;
            bVar3 = false;
          }
        }
        if (bVar1 != bVar3) {
          if (local_2c <= 0.0) {
            bVar2 = false;
          }
          else {
            bVar2 = local_2c < local_38;
          }
        }
      }
    }
    else {
      bVar2 = false;
      *(undefined8 *)(param_1 + 0x438) = 0;
      *(undefined4 *)(param_1 + 0x440) = DAT_101dc0b88;
    }
  }
  return bVar2;
}




void FUN_10002e8bc(long param_1,long param_2,int param_3)

{
  *(long *)(param_1 + 0x448) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x30);
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
  }
  return;
}




void FUN_10002e8e0(long param_1)

{
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
  return;
}




void FUN_10002e8f0(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x458) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x460) = uVar1;
  if (param_3 != 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
  }
  return;
}




void FUN_10002e914(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x450) = uVar1;
  return;
}




void FUN_10002e92c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x460) = uVar1;
  return;
}




void FUN_10002e944(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x7c) >> 4 & 1) == 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 0x10;
    puVar1 = (undefined8 *)(param_1 + 0x414);
    iVar2 = FUN_10002d9e0((int)param_1,puVar1);
    if (iVar2 != 0) {
      *puVar1 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20) +
                         (float)((ulong)*puVar1 >> 0x20),
                         (float)*(undefined8 *)(param_1 + 0x420) + (float)*puVar1);
      *(float *)(param_1 + 0x41c) = *(float *)(param_1 + 0x428) + *(float *)(param_1 + 0x41c);
    }
  }
  return;
}




void FUN_10002e9a0(float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = _rand();
  lVar2 = 0;
  fVar4 = 2.9258362e-09;
  fVar5 = (float)iVar1 * 2.9258362e-09;
  do {
    fVar3 = (float)___sincosf_stret(fVar5);
    *(float *)(param_4 + lVar2 + 0xf8) = fVar4 * param_1;
    *(float *)(param_4 + lVar2 + 0xfc) = fVar3 * param_1;
    iVar1 = _rand();
    fVar4 = 4.656613e-10;
    fVar5 = fVar5 + ((float)iVar1 * 4.656613e-10 + 0.25) * 3.1415927;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x80);
  *(undefined4 *)(param_4 + 0x184) = 0;
  *(undefined4 *)(param_4 + 0x180) = param_2;
  *(undefined4 *)(param_4 + 0x188) = param_3;
  *(byte *)(param_4 + 0x7c) = *(byte *)(param_4 + 0x7c) | 8;
  return;
}




undefined8 FUN_10002ea68(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x448);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x450) == (int)plVar2[1]) goto LAB_10002eaac;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x450) = DAT_101dc0b88;
  }
  plVar2 = *(long **)(param_1 + 0x438);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x440) == (int)plVar2[1]) {
LAB_10002eaac:
                    /* WARNING: Could not recover jumptable at 0x00010002eab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar1;
    }
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x440) = DAT_101dc0b88;
  }
  return 0;
}




undefined4 FUN_10002ead8(void)

{
  long lVar1;
  undefined4 local_20 [4];
  
  lVar1 = FUN_10002ea68();
  if (lVar1 == 0) {
    local_20[0] = 0;
  }
  else {
    FUN_100345b68(lVar1,local_20,0);
  }
  return local_20[0];
}




void FUN_10002eb28(long param_1,undefined8 *param_2,float *param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_10002e0d4();
  fVar7 = *(float *)(param_1 + 0x308) +
          (*(float *)(param_1 + 0x30c) - *(float *)(param_1 + 0x308)) * param_3[2];
  fVar6 = (fVar7 - fVar7 * ((param_3[1] + param_3[1]) / (float)param_5)) /
          *(float *)(param_1 + 0x220);
  fVar5 = (((*param_3 + *param_3) / (float)param_4) * fVar7 - fVar7) / *(float *)(param_1 + 0x20c);
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    FUN_10002e0d4(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1cc);
  uVar2 = *(undefined8 *)(param_1 + 0x1dc);
  uVar3 = *(undefined8 *)(param_1 + 0x1ec);
  uVar4 = *(undefined8 *)(param_1 + 0x1fc);
  *(float *)(param_2 + 1) =
       (*(float *)(param_1 + 0x204) + fVar5 * *(float *)(param_1 + 0x1d4) +
       fVar6 * *(float *)(param_1 + 0x1e4)) - fVar7 * *(float *)(param_1 + 500);
  *param_2 = CONCAT44(((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar1 >> 0x20) * fVar5 +
                      (float)((ulong)uVar2 >> 0x20) * fVar6) - (float)((ulong)uVar3 >> 0x20) * fVar7
                      ,((float)uVar4 + (float)uVar1 * fVar5 + (float)uVar2 * fVar6) -
                       (float)uVar3 * fVar7);
  return;
}




void FUN_10002ec1c(long param_1,undefined8 *param_2,float *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_10002e0d4();
  fVar12 = *param_3;
  fVar11 = param_3[1];
  fVar10 = param_3[2];
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) == 0) {
    bVar1 = true;
  }
  else {
    FUN_10002e0d4(param_1);
    bVar1 = (*(byte *)(param_1 + 0x7c) & 2) == 0;
  }
  fVar7 = *(float *)(param_1 + 0x18c) * fVar12 + fVar11 * *(float *)(param_1 + 0x19c) +
          fVar10 * *(float *)(param_1 + 0x1ac) + *(float *)(param_1 + 0x1bc);
  fVar8 = *(float *)(param_1 + 400) * fVar12 + fVar11 * *(float *)(param_1 + 0x1a0) +
          fVar10 * *(float *)(param_1 + 0x1b0) + *(float *)(param_1 + 0x1c0);
  fVar9 = *(float *)(param_1 + 0x194) * fVar12 + fVar11 * *(float *)(param_1 + 0x1a4) +
          fVar10 * *(float *)(param_1 + 0x1b4) + *(float *)(param_1 + 0x1c4);
  fVar10 = *(float *)(param_1 + 0x198) * fVar12 + fVar11 * *(float *)(param_1 + 0x1a8) +
           fVar10 * *(float *)(param_1 + 0x1b8) + *(float *)(param_1 + 0x1c8);
  if (!bVar1) {
    FUN_10002e0d4(param_1);
  }
  fVar11 = *(float *)(param_1 + 0x214);
  fVar12 = *(float *)(param_1 + 0x224);
  fVar3 = *(float *)(param_1 + 0x234);
  fVar4 = *(float *)(param_1 + 0x244);
  fVar5 = 1.0 / (*(float *)(param_1 + 0x218) * fVar7 + fVar8 * *(float *)(param_1 + 0x228) +
                 fVar9 * *(float *)(param_1 + 0x238) + fVar10 * *(float *)(param_1 + 0x248));
  fVar6 = fVar5 * 0.5;
  uVar2 = NEON_ucvtf(CONCAT44(param_5,param_4),4);
  *param_2 = CONCAT44((0.5 - ((float)((ulong)*(undefined8 *)(param_1 + 0x20c) >> 0x20) * fVar7 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x21c) >> 0x20) * fVar8 +
                              (float)((ulong)*(undefined8 *)(param_1 + 0x22c) >> 0x20) * fVar9 +
                             (float)((ulong)*(undefined8 *)(param_1 + 0x23c) >> 0x20) * fVar10) *
                             fVar6) * (float)((ulong)uVar2 >> 0x20),
                      (((float)*(undefined8 *)(param_1 + 0x20c) * fVar7 +
                        (float)*(undefined8 *)(param_1 + 0x21c) * fVar8 +
                        (float)*(undefined8 *)(param_1 + 0x22c) * fVar9 +
                       (float)*(undefined8 *)(param_1 + 0x23c) * fVar10) * fVar6 + 0.5) *
                      (float)uVar2);
  *(float *)(param_2 + 1) =
       fVar5 * (fVar11 * fVar7 + fVar8 * fVar12 + fVar9 * fVar3 + fVar10 * fVar4);
  return;
}




void FUN_10002eddc(long param_1)

{
  undefined8 uVar1;
  
  FUN_1010a1ce0();
  FUN_100663a88();
  uVar1 = FUN_1010aed34();
  FUN_100663b70(4,uVar1,param_1 + 8);
  FUN_10016b6e8();
  return;
}




bool FUN_10002ee14(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar8 = param_2[4];
  fVar19 = param_2[5];
  fVar7 = *param_2;
  fVar9 = param_2[1];
  fVar4 = fVar19 * fVar7 - fVar9 * fVar8;
  fVar12 = param_2[8];
  fVar20 = param_2[9];
  fVar5 = fVar20 * fVar7 - fVar12 * fVar9;
  fVar13 = param_2[0xc];
  fVar22 = param_2[0xd];
  fVar10 = fVar22 * fVar7 - fVar13 * fVar9;
  fVar7 = fVar20 * fVar8 - fVar12 * fVar19;
  fVar11 = fVar22 * fVar8 - fVar13 * fVar19;
  fVar12 = fVar22 * fVar12 - fVar13 * fVar20;
  fVar9 = param_2[6];
  fVar8 = param_2[7];
  fVar13 = param_2[2];
  fVar14 = param_2[3];
  fVar15 = fVar8 * fVar13 - fVar14 * fVar9;
  fVar23 = param_2[10];
  fVar21 = param_2[0xb];
  fVar16 = fVar21 * fVar13 - fVar23 * fVar14;
  fVar25 = param_2[0xe];
  fVar24 = param_2[0xf];
  fVar17 = fVar24 * fVar13 - fVar25 * fVar14;
  fVar14 = fVar21 * fVar9 - fVar23 * fVar8;
  fVar18 = fVar24 * fVar9 - fVar25 * fVar8;
  fVar21 = fVar24 * fVar23 - fVar25 * fVar21;
  fVar9 = fVar16 * fVar11 + fVar5 * fVar18;
  fVar13 = fVar15 * fVar12 + fVar10 * fVar14 + fVar4 * fVar21 + fVar7 * fVar17;
  fVar8 = ABS(fVar13 - fVar9);
  if (1e-08 <= fVar8) {
    lVar3 = 0;
    *param_1 = (fVar14 * fVar22 + fVar19 * fVar21) - fVar20 * fVar18;
    param_1[1] = param_2[9] * fVar17 - (param_2[1] * fVar21 + fVar16 * param_2[0xd]);
    param_1[2] = (param_2[1] * fVar18 - param_2[5] * fVar17) + fVar15 * param_2[0xd];
    param_1[3] = param_2[5] * fVar16 - (param_2[1] * fVar14 + fVar15 * param_2[9]);
    param_1[4] = param_2[8] * fVar18 - (param_2[4] * fVar21 + fVar14 * param_2[0xc]);
    param_1[5] = (*param_2 * fVar21 - param_2[8] * fVar17) + fVar16 * param_2[0xc];
    param_1[6] = param_2[4] * fVar17 - (*param_2 * fVar18 + fVar15 * param_2[0xc]);
    param_1[7] = (*param_2 * fVar14 - param_2[4] * fVar16) + fVar15 * param_2[8];
    param_1[8] = (param_2[7] * fVar12 - param_2[0xb] * fVar11) + fVar7 * param_2[0xf];
    param_1[9] = param_2[0xb] * fVar10 - (param_2[3] * fVar12 + fVar5 * param_2[0xf]);
    param_1[10] = (param_2[3] * fVar11 - param_2[7] * fVar10) + fVar4 * param_2[0xf];
    param_1[0xb] = param_2[7] * fVar5 - (param_2[3] * fVar7 + fVar4 * param_2[0xb]);
    param_1[0xc] = param_2[10] * fVar11 - (param_2[6] * fVar12 + fVar7 * param_2[0xe]);
    param_1[0xd] = (param_2[2] * fVar12 - param_2[10] * fVar10) + fVar5 * param_2[0xe];
    param_1[0xe] = param_2[6] * fVar10 - (param_2[2] * fVar11 + fVar4 * param_2[0xe]);
    fVar13 = fVar13 - fVar9;
    param_1[0xf] = (param_2[2] * fVar7 - param_2[6] * fVar5) + fVar4 * param_2[10];
    auVar6 = NEON_fmov(0x3f800000,4);
    do {
      pfVar1 = (float *)((long)param_1 + lVar3);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      pfVar2 = (float *)((long)param_1 + lVar3);
      pfVar2[2] = pfVar1[2] * (auVar6._8_4_ / fVar13);
      pfVar2[3] = pfVar1[3] * (auVar6._12_4_ / fVar13);
      *pfVar2 = fVar4 * (auVar6._0_4_ / fVar13);
      pfVar2[1] = fVar5 * (auVar6._4_4_ / fVar13);
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x40);
  }
  else {
    param_1[10] = 0.0;
    param_1[0xb] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[0xe] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
  }
  return 1e-08 <= fVar8;
}




undefined8 * thunk_FUN_10002d434(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_10144baf0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  uVar2 = DAT_101dc1cb8;
  param_1[10] = DAT_101dc1cb8;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  param_1[0xe] = 0x3fc0000000000000;
  *(byte *)((long)param_1 + 0x7c) = *(byte *)((long)param_1 + 0x7c) & 0xe0 | 2;
  param_1[0x1e] = 0x200000002;
  param_1[0x2f] = uVar2;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x234) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0x3f80000000000000;
  FUN_1010b2058(param_1 + 0x4a);
  param_1[0x5f] = 0;
  param_1[0x61] = 0x44bb80003fc00000;
  param_1[0x60] = 0x3f800000420c0000;
  FUN_1010cf208(param_1 + 0x62);
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined4 *)((long)param_1 + 0x41c) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = DAT_101dc1cb8;
  *(undefined4 *)((long)param_1 + 0x434) = 0;
  param_1[0x87] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x88) = DAT_101dc0b88;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = uVar1;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  param_1[0x8d] = PTR_FUN_10184de18;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  return param_1;
}




void FUN_10002f0d0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010002f0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10002f0dc(void)

{
  if ((DAT_10184dad0 & 1) == 0) {
    DAT_10184dac8 = DAT_101872e38;
    DAT_10184dad0 = 1;
  }
  return;
}




void FUN_10002f108(void)

{
  if ((DAT_10184de28 & 1) == 0) {
    DAT_10184de20 = DAT_101872e38;
    DAT_10184de28 = 1;
  }
  return;
}




void FUN_10002f134(undefined8 param_1)

{
  FUN_10001e7e8();
  FUN_1000273f4(param_1);
  FUN_100020ac0(param_1);
  FUN_1000286c4(param_1);
  FUN_100028f60(param_1);
  FUN_1000296e0(param_1);
  FUN_10002adf0(param_1);
  FUN_10002ced4(param_1);
  FUN_10002d0f0(param_1);
  FUN_10002d864(param_1);
  FUN_10002ffc8(param_1);
  FUN_100032c14(param_1);
  FUN_100033cb8(param_1);
  FUN_1000348a8(param_1);
  FUN_100034ca0(param_1);
  FUN_100035318(param_1);
  FUN_1000357cc(param_1);
  FUN_10003c7a0(param_1);
  FUN_10003cd64(param_1);
  FUN_100049728(param_1);
  FUN_100049908(param_1);
  FUN_100049a74(param_1);
  FUN_1000518c0(param_1);
  FUN_100037c8c(param_1);
  FUN_10004e630(param_1);
  FUN_10003ca00(param_1);
  FUN_100052210(param_1);
  FUN_100053480(param_1);
  FUN_100053698(param_1);
  FUN_10003d0b4(param_1);
  FUN_10003ddf0(param_1);
  FUN_10003efe8(param_1);
  FUN_10003f2f4(param_1);
  FUN_100040080(param_1);
  FUN_10005411c(param_1);
  FUN_1000413b0(param_1);
  FUN_100043990(param_1);
  FUN_100043cf4(param_1);
  FUN_100057510(param_1);
  FUN_100058950(param_1);
  FUN_10005d948(param_1);
  FUN_100044548(param_1);
  FUN_100045eb0(param_1);
  FUN_1000491e0(param_1);
  FUN_10005e5e8(param_1);
  FUN_1000514d0(param_1);
  FUN_1000b63f4(param_1);
  FUN_10004ae50(param_1);
  FUN_10004b964(param_1);
  FUN_10004c670(param_1);
  FUN_10004cf18(param_1);
  FUN_10004d7a0(param_1);
  FUN_10005e874(param_1);
  FUN_10004fe28(param_1);
  FUN_10004641c(param_1);
  FUN_10004a00c(param_1);
  FUN_10004f6c4(param_1);
  FUN_10002c7c4(param_1);
  FUN_10002c3e4(param_1);
  return;
}




undefined8 FUN_10002f320(void)

{
  return DAT_101dc2920;
}




bool FUN_10002f32c(void)

{
  return DAT_101dc2920 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10002f340(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  void *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  code *pcStack_48;
  
  puVar1 = param_1 + 0x1c59;
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  param_1[5] = &PTR_thunk_FUN_10052bac0_101469400;
  FUN_10014f4a0(param_1 + 6);
  FUN_1004f0a20(param_1 + 9);
  FUN_10011cc24(param_1 + 0xc);
  *param_1 = &PTR_thunk_FUN_10002f5f4_10144bb20;
  param_1[5] = &PTR_FUN_10144bb88;
  param_1[6] = &PTR_FUN_10144bbb0;
  param_1[9] = &PTR_FUN_10144bf48;
  param_1[0xc] = &PTR_FUN_10144bf78;
  param_1[0xd] = &PTR_FUN_10144bfa8;
  param_1[0x16] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  thunk_FUN_100268944(param_1 + 0x17);
  thunk_FUN_10019a2d4(param_1 + 0x121,0);
  thunk_FUN_10019c69c(param_1 + 0xb14);
  thunk_FUN_10018f3e4(param_1 + 0xbc2,0);
  thunk_FUN_1001ceb64(param_1 + 0xcc7,0);
  thunk_FUN_100335f00(param_1 + 0xce4);
  param_1[0x18d9] = 0;
  thunk_FUN_1001a2604(param_1 + 0x18da);
  FUN_1006421a8(param_1 + 0x1c37);
  param_1[0x1c37] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x1c48);
  param_1[0x1c48] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(puVar1);
  *puVar1 = &PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x1c73] = 0;
  param_1[0x1c74] = 0;
  param_1[0x1c72] = 0;
  *(undefined8 *)((long)param_1 + 0xe3a6) = 0;
  DAT_101dc2920 = param_1;
  FUN_1001369e8();
  FUN_1001e7e34(param_1 + 0x1c48);
  FUN_1001ad51c(puVar1);
  FUN_10032a02c();
  FUN_10030dec4();
  FUN_1003282e4();
  FUN_1000f7a58();
  FUN_10028cf74();
  FUN_10017b2a0();
  FUN_1001e13d0();
  FUN_10031a8a4();
  FUN_10031d3d4();
  uVar7 = FUN_100131560();
  if ((uVar7 & 1) == 0) {
    FUN_10031f218();
  }
  FUN_10031ff2c();
  operator_new(0x138);
  lVar8 = thunk_FUN_1001fd570();
  uVar10 = *(undefined8 *)(lVar8 + 8);
  param_1[0xf] = uVar10;
  param_1[0x10] = lVar8;
  pvVar9 = operator_new(0xc040);
  uVar10 = FUN_10033abfc(pvVar9,uVar10);
  param_1[0x18d9] = uVar10;
  operator_new(0x2a0);
  uVar10 = thunk_FUN_100268480();
  param_1[0x11] = uVar10;
  operator_new(0xe48);
  uVar10 = thunk_FUN_10026acfc();
  param_1[0x12] = uVar10;
  operator_new(0x370);
  uVar10 = thunk_FUN_10026ba98();
  param_1[0x13] = uVar10;
  operator_new(0x220);
  uVar10 = thunk_FUN_1002007f8();
  param_1[0x15] = uVar10;
  uVar6 = _DAT_101873a98;
  uVar5 = _DAT_101873a90;
  uVar4 = _DAT_101873a78;
  uVar3 = _DAT_101873a70;
  uVar10 = _DAT_101873a60;
  fVar11 = (float)_DAT_101873a80;
  uVar7 = (ulong)_DAT_101873a80 >> 0x20;
  fVar12 = (float)ram0x000101873a88;
  uVar2 = (ulong)ram0x000101873a88 >> 0x20;
  param_1[0x1c6b] = _DAT_101873a68;
  param_1[0x1c6a] = uVar10;
  param_1[0x1c6d] = uVar4;
  param_1[0x1c6c] = uVar3;
  param_1[0x1c6f] = CONCAT44(-(float)uVar2,-fVar12);
  param_1[0x1c6e] = CONCAT44(-(float)uVar7,-fVar11);
  param_1[0x1c71] = uVar6;
  param_1[0x1c70] = uVar5;
  FUN_10001549c(&local_60,PTR_s_screen_main_hub_101854a90);
  std::string::operator=((string *)(param_1 + 0x1c72),(string *)&local_60);
  if (local_50._7_1_ < '\0') {
    operator_delete(local_60);
  }
  lVar8 = FUN_10030df60();
  local_60 = (void *)0x0;
  pcStack_48 = thunk_FUN_1000311ac;
  puStack_58 = param_1;
  local_50 = param_1;
  FUN_100031d78(lVar8 + 0x28,&local_60);
  return param_1;
}




void FUN_10002f5f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_thunk_FUN_10002f5f4_10144bb20;
  param_1[5] = &PTR_FUN_10144bb88;
  param_1[6] = &PTR_FUN_10144bbb0;
  param_1[9] = &PTR_FUN_10144bf48;
  param_1[0xc] = &PTR_FUN_10144bf78;
  puVar6 = param_1 + 0xd;
  *puVar6 = &PTR_FUN_10144bfa8;
  FUN_1005341f4(param_1[0xe],PTR_s_screen_char_select_101854a88);
  FUN_1005341f4(param_1[0xe],PTR_s_screen_main_hub_101854a90);
  FUN_1005341f4(param_1[0xe],PTR_s_screen_rewards_101854a98);
  FUN_1005341f4(param_1[0xe],PTR_s_screen_talent_upgrade_101854aa0);
  FUN_1005341f4(param_1[0xe],PTR_s_screen_match_confirm_101854ab0);
  FUN_1006423ec(param_1 + 0xb14,1);
  FUN_1006423ec(param_1 + 0xbc2,1);
  FUN_1006423ec(param_1 + 0xcc7,1);
  if (*(char *)((long)param_1 + 0xe3ad) != '\0') {
    FUN_10052b3ec(puVar6);
    *(undefined1 *)((long)param_1 + 0xe3ad) = 0;
  }
  FUN_10030802c();
  FUN_1001db088();
  FUN_1001e7c0c();
  FUN_1001e3014();
  FUN_1001e5564();
  FUN_10030c638();
  FUN_100329c80();
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
  }
  param_1[0x11] = 0;
  plVar2 = (long *)param_1[0x18d9];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[0x18d9] = 0;
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x28))();
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_10031ff98();
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  param_1[0x12] = 0;
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  param_1[0x13] = 0;
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x10))();
  }
  param_1[0x14] = 0;
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  param_1[0x16] = 0;
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
  }
  param_1[0x15] = 0;
  lVar3 = FUN_10030df60();
  if (*(uint *)(lVar3 + 0x28) != 0) {
    lVar5 = *(long *)(lVar3 + 0x30);
    lVar3 = (ulong)*(uint *)(lVar3 + 0x28) << 5;
    do {
      puVar1 = (undefined8 *)(lVar5 + 8);
      lVar5 = lVar5 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100031e78();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  lVar3 = FUN_10032523c();
  if (*(uint *)(lVar3 + 0x30) != 0) {
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar3 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
    do {
      puVar1 = (undefined8 *)(lVar5 + 8);
      lVar5 = lVar5 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  lVar3 = FUN_10032523c();
  if (*(uint *)(lVar3 + 0x40) != 0) {
    lVar5 = *(long *)(lVar3 + 0x48);
    lVar3 = (ulong)*(uint *)(lVar3 + 0x40) << 5;
    do {
      puVar1 = (undefined8 *)(lVar5 + 8);
      lVar5 = lVar5 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  FUN_10030df2c();
  FUN_10032a088();
  FUN_100328318();
  FUN_10031a8d8();
  FUN_10031d408();
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    FUN_10031f24c();
  }
  FUN_1001e13f4();
  FUN_10017b2c4();
  FUN_10028cf98();
  FUN_1000f7a7c();
  FUN_1001ad550();
  FUN_1001e7e74();
  FUN_100136a1c();
  DAT_101dc2920 = 0;
  if (*(char *)((long)param_1 + 0xe3a7) < '\0') {
    operator_delete((void *)param_1[0x1c72]);
  }
  FUN_10064221c(param_1 + 0x1c59);
  FUN_10064221c(param_1 + 0x1c48);
  FUN_10064221c(param_1 + 0x1c37);
  thunk_FUN_1001a2954(param_1 + 0x18da);
  thunk_FUN_1003367ac(param_1 + 0xce4);
  thunk_FUN_1001cec4c(param_1 + 0xcc7);
  FUN_100031c68(param_1 + 0xbc2);
  thunk_FUN_10019c7c8(param_1 + 0xb14);
  thunk_FUN_10019a96c(param_1 + 0x121);
  thunk_FUN_100268a70(param_1 + 0x17);
  FUN_10052b3fc(puVar6);
  FUN_10011ccec(param_1 + 0xc);
  FUN_1004f0a9c(param_1 + 9);
  FUN_10014f51c(param_1 + 6);
  FUN_10052bac0(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10002f5f4(void)

{
  FUN_10002f5f4();
  return;
}




void FUN_10002f9c0(long param_1)

{
  FUN_10002f5f4(param_1 + -0x28);
  return;
}




void FUN_10002f9c8(long param_1)

{
  FUN_10002f5f4(param_1 + -0x30);
  return;
}




void FUN_10002f9d0(long param_1)

{
  FUN_10002f5f4(param_1 + -0x48);
  return;
}




void FUN_10002f9d8(long param_1)

{
  FUN_10002f5f4(param_1 + -0x60);
  return;
}




void FUN_10002f9e0(long param_1)

{
  FUN_10002f5f4(param_1 + -0x68);
  return;
}




void FUN_10002f9e8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002f5f4();
  operator_delete(pvVar1);
  return;
}




void FUN_10002f9fc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002f5f4(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10002fa14(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002f5f4(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_10002fa2c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002f5f4(param_1 + -0x48);
  operator_delete(pvVar1);
  return;
}




void FUN_10002fa44(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002f5f4(param_1 + -0x60);
  operator_delete(pvVar1);
  return;
}




void FUN_10002fa5c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10002f5f4(param_1 + -0x68);
  operator_delete(pvVar1);
  return;
}




void FUN_10002fa74(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *local_80;
  long lStack_78;
  long local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  *(long *)(param_1 + 0x70) = param_2;
  FUN_100534130(param_2,PTR_s_screen_char_select_101854a88,*(undefined8 *)(param_1 + 0x88));
  FUN_100534130(param_2,PTR_s_screen_main_hub_101854a90,*(undefined8 *)(param_1 + 0x78));
  FUN_100534130(param_2,PTR_s_screen_rewards_101854a98,*(undefined8 *)(param_1 + 0x90));
  FUN_100534130(param_2,PTR_s_screen_talent_upgrade_101854aa0,*(undefined8 *)(param_1 + 0x98));
  FUN_100534130(param_2,PTR_s_screen_match_confirm_101854ab0,*(undefined8 *)(param_1 + 0xa8));
  uVar2 = FUN_1001db518();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(*(long *)(param_1 + 0x80) + 0x132) == '\0') {
      FUN_1001ff20c();
      FUN_1001ff244(*(undefined8 *)(param_1 + 0x80));
    }
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xb8,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xe1b8,1);
  plVar3 = (long *)FUN_100641574("root-layer");
  (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x58a0,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x5e10,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,param_1 + 0x6638,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xe240,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xc6d0,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0x938,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0x6720,1);
  (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(*(long **)(param_1 + 0x70),param_1 + 0xe2c8,1);
  FUN_1001e54f0(param_2);
  FUN_1001e2fd0(param_2);
  FUN_1001e7b6c(param_2);
  FUN_100329c38();
  FUN_10030c5f0();
  lVar4 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar4 = *(long *)(param_1 + 0x80) + 0x10;
  }
  FUN_1001db048(lVar4);
  FUN_100307ff4();
  lVar4 = FUN_10032523c();
  local_80 = (code *)0x0;
  local_68 = FUN_100031fd8;
  lStack_78 = param_1;
  local_70 = param_1;
  FUN_100031f58(lVar4 + 0x30,&local_80);
  lVar4 = FUN_10032523c();
  local_80 = (code *)0x0;
  local_68 = thunk_FUN_100030eb4;
  lStack_78 = param_1;
  local_70 = param_1;
  FUN_100031f58(lVar4 + 0x40,&local_80);
  local_58 = DAT_101d23654;
  local_80 = FUN_10002fdbc;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(param_2 + 8,&local_80);
  local_58 = DAT_101d23688;
  local_80 = FUN_10002fdcc;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(param_2 + 8,&local_80);
  *(uint *)(param_1 + 0x5924) = *(uint *)(param_1 + 0x5924) & 0xfffffffb;
  FUN_10019cc60(param_1 + 0x58a0,0);
  *(uint *)(param_1 + 0x9bc) = *(uint *)(param_1 + 0x9bc) & 0xfffffffb;
  *(uint *)(param_1 + 0x5e94) = *(uint *)(param_1 + 0x5e94) & 0xfffffffb;
  FUN_10018f600(param_1 + 0x5e10,0);
  *(uint *)(param_1 + 0x67a4) = *(uint *)(param_1 + 0x67a4) & 0xfffffffb;
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    FUN_100136b10();
  }
  FUN_10002fe08(param_1,param_3);
  return;
}




void FUN_10002fdbc(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3ab) = 1;
  return;
}




void FUN_10002fdcc(undefined8 param_1)

{
  FUN_100030cf0(param_1,&DAT_101d91198);
  FUN_1000304f8(param_1,PTR_s_screen_char_select_101854a88,1);
  return;
}




void FUN_10002fe08(long param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  iVar3 = FUN_1004eef10();
  bVar2 = 8;
  if (iVar3 == 0) {
    bVar2 = 0;
  }
  pbVar1 = (byte *)(param_1 + 0xe3a8);
  *pbVar1 = bVar2 | *pbVar1;
  iVar3 = FUN_10012ced4();
  bVar2 = 0;
  if (iVar3 != 0) {
    bVar2 = FUN_1001311d4();
    bVar2 = (byte)param_2 & (bVar2 ^ 0xff);
  }
  *pbVar1 = *pbVar1 | bVar2;
  uVar5 = FUN_10012f3a0();
  if ((uVar5 & 1) == 0) {
    uVar4 = FUN_100131210();
    bVar2 = 2;
    if ((uVar4 & param_2) == 0) {
      bVar2 = 0;
    }
  }
  else {
    bVar2 = 0;
  }
  *pbVar1 = *pbVar1 | bVar2;
  FUN_100030118(param_1);
  return;
}




void FUN_10002fea4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_10002fed8(param_1);
    return;
  }
  return;
}




void FUN_10002fed8(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x13c) >> 2 & 1) != 0) {
    FUN_100030118(param_1);
  }
  FUN_100268b44(param_1 + 0xb8,0);
  bVar1 = *(byte *)(param_1 + 0xe3a8);
  if ((bVar1 >> 3 & 1) != 0) {
    *(byte *)(param_1 + 0xe3a8) = bVar1 ^ 8;
  }
  return;
}




void FUN_10002ff2c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_10002fed8(param_1 + -0x48);
    return;
  }
  return;
}




void FUN_10002ff60(void)

{
  return;
}




void FUN_10002ff64(void)

{
  return;
}




void FUN_10002ff68(void)

{
  return;
}




void FUN_10002ff6c(void)

{
  return;
}




void FUN_10002ff78(void)

{
  return;
}




void FUN_10002ff7c(void)

{
  return;
}




void FUN_10002ff80(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10052b3d8();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xe3ad) == '\0') {
      FUN_10052b3e8(param_1 + 0x68);
      FUN_10052b3f8();
      *(char *)(param_1 + 0xe3ad) = '\x01';
    }
  }
  return;
}




void FUN_10002ffc8(long param_1)

{
  long lVar1;
  
  DAT_10184de30 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184de30 + 1;
  lVar1 = param_1 + (ulong)DAT_10184de30 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10002f340;
  *(code **)(lVar1 + 0xb8) = FUN_100032080;
  *(uint *)(lVar1 + 0xa4) = DAT_10184de30;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe3b0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_100030034,0);
  return;
}




void thunk_FUN_10002fed8(void)

{
  FUN_10002fed8();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * thunk_FUN_10002f340(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  void *pvStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  
  puVar1 = param_1 + 0x1c59;
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  param_1[5] = &PTR_thunk_FUN_10052bac0_101469400;
  FUN_10014f4a0(param_1 + 6);
  FUN_1004f0a20(param_1 + 9);
  FUN_10011cc24(param_1 + 0xc);
  *param_1 = &PTR_thunk_FUN_10002f5f4_10144bb20;
  param_1[5] = &PTR_FUN_10144bb88;
  param_1[6] = &PTR_FUN_10144bbb0;
  param_1[9] = &PTR_FUN_10144bf48;
  param_1[0xc] = &PTR_FUN_10144bf78;
  param_1[0xd] = &PTR_FUN_10144bfa8;
  param_1[0x16] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  thunk_FUN_100268944(param_1 + 0x17);
  thunk_FUN_10019a2d4(param_1 + 0x121,0);
  thunk_FUN_10019c69c(param_1 + 0xb14);
  thunk_FUN_10018f3e4(param_1 + 0xbc2,0);
  thunk_FUN_1001ceb64(param_1 + 0xcc7,0);
  thunk_FUN_100335f00(param_1 + 0xce4);
  param_1[0x18d9] = 0;
  thunk_FUN_1001a2604(param_1 + 0x18da);
  FUN_1006421a8(param_1 + 0x1c37);
  param_1[0x1c37] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x1c48);
  param_1[0x1c48] = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(puVar1);
  *puVar1 = &PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x1c73] = 0;
  param_1[0x1c74] = 0;
  param_1[0x1c72] = 0;
  *(undefined8 *)((long)param_1 + 0xe3a6) = 0;
  DAT_101dc2920 = param_1;
  FUN_1001369e8();
  FUN_1001e7e34(param_1 + 0x1c48);
  FUN_1001ad51c(puVar1);
  FUN_10032a02c();
  FUN_10030dec4();
  FUN_1003282e4();
  FUN_1000f7a58();
  FUN_10028cf74();
  FUN_10017b2a0();
  FUN_1001e13d0();
  FUN_10031a8a4();
  FUN_10031d3d4();
  uVar7 = FUN_100131560();
  if ((uVar7 & 1) == 0) {
    FUN_10031f218();
  }
  FUN_10031ff2c();
  operator_new(0x138);
  lVar8 = thunk_FUN_1001fd570();
  uVar10 = *(undefined8 *)(lVar8 + 8);
  param_1[0xf] = uVar10;
  param_1[0x10] = lVar8;
  pvVar9 = operator_new(0xc040);
  uVar10 = FUN_10033abfc(pvVar9,uVar10);
  param_1[0x18d9] = uVar10;
  operator_new(0x2a0);
  uVar10 = thunk_FUN_100268480();
  param_1[0x11] = uVar10;
  operator_new(0xe48);
  uVar10 = thunk_FUN_10026acfc();
  param_1[0x12] = uVar10;
  operator_new(0x370);
  uVar10 = thunk_FUN_10026ba98();
  param_1[0x13] = uVar10;
  operator_new(0x220);
  uVar10 = thunk_FUN_1002007f8();
  param_1[0x15] = uVar10;
  uVar6 = _DAT_101873a98;
  uVar5 = _DAT_101873a90;
  uVar4 = _DAT_101873a78;
  uVar3 = _DAT_101873a70;
  uVar10 = _DAT_101873a60;
  fVar11 = (float)_DAT_101873a80;
  uVar7 = (ulong)_DAT_101873a80 >> 0x20;
  fVar12 = (float)ram0x000101873a88;
  uVar2 = (ulong)ram0x000101873a88 >> 0x20;
  param_1[0x1c6b] = _DAT_101873a68;
  param_1[0x1c6a] = uVar10;
  param_1[0x1c6d] = uVar4;
  param_1[0x1c6c] = uVar3;
  param_1[0x1c6f] = CONCAT44(-(float)uVar2,-fVar12);
  param_1[0x1c6e] = CONCAT44(-(float)uVar7,-fVar11);
  param_1[0x1c71] = uVar6;
  param_1[0x1c70] = uVar5;
  FUN_10001549c(&pvStack_60,PTR_s_screen_main_hub_101854a90);
  std::string::operator=((string *)(param_1 + 0x1c72),(string *)&pvStack_60);
  if (uStack_50._7_1_ < '\0') {
    operator_delete(pvStack_60);
  }
  lVar8 = FUN_10030df60();
  pvStack_60 = (void *)0x0;
  pcStack_48 = thunk_FUN_1000311ac;
  puStack_58 = param_1;
  uStack_50 = param_1;
  FUN_100031d78(lVar8 + 0x28,&pvStack_60);
  return param_1;
}




void thunk_FUN_100027a90(void)

{
  FUN_100027a90();
  return;
}

