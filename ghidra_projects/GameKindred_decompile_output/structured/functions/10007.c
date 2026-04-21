// functions/10007 — 210 functions
#include "GameKindred.h"




void FUN_1000701d0(long param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = &DAT_101d22fec;
  if (param_2 == 0) {
    puVar1 = &DAT_101dc4634;
  }
  uVar3 = 0xcc;
  if (param_2 == 0) {
    uVar3 = 0x33;
  }
  FUN_100652590(param_1 + 0x2c8,puVar1,2);
  FUN_100652dd4(param_1 + 0x5f0,puVar1,2);
  FUN_100652dd4(param_1 + 0x6e0,puVar1,2);
  FUN_100652dd4(param_1 + 2000,puVar1,2);
  uVar2 = *(uint *)(param_1 + 0x854);
  if (uVar3 != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x854) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
    FUN_1000200a0(param_1 + 2000);
  }
  *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) | 4;
  *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) | 4;
  return;
}




void FUN_100070298(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100065974();
  operator_delete(pvVar1);
  return;
}




void FUN_1000702ac(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000702d8(void)

{
  DAT_101dc44c0 = 0xff;
  DAT_101dc44c2 = 0xffff;
  DAT_101dc44c4 = 0xffff;
  DAT_101dc44c6 = 0xffbc9c44;
  DAT_101dc44ca = 0xff1166f2;
  DAT_101dc44ce = 0xffe0e0e0;
  DAT_101dc44d2 = 0xffa0a0a0;
  DAT_101dc44d6 = 0xff8c8c8c;
  DAT_101dc44da = 0xff322213;
  DAT_101dc44de = 0xff091911;
  DAT_101dc44e2 = 0xff170c19;
  DAT_101dc44e6 = 0xff241a14;
  DAT_101dc44ea = 0xff14171c;
  DAT_101dc44ee = 0xff221911;
  DAT_101dc44f2 = 0xff1a1416;
  DAT_101dc44f6 = 0xff121414;
  DAT_101dc44fa = 0xff1a1809;
  DAT_101dc44fe = 0xff141414;
  DAT_101dc4502 = 0xff141414;
  DAT_101dc4506 = 0xff2929c0;
  DAT_101dc450a = 0xff283082;
  DAT_101dc450e = 0xff5262cc;
  DAT_101dc4512 = 0xff283082;
  DAT_101dc4516 = 0xff5262cc;
  DAT_101dc451a = 0xff745c42;
  DAT_101dc451e = 0xff184155;
  DAT_101dc4522 = 0xff92665e;
  DAT_101dc4526 = 0xffbc9c44;
  DAT_101dc452a = 0xffbbae56;
  DAT_101dc452e = 0xff8b7b01;
  DAT_101dc4532 = 0xff90b3ef;
  DAT_101dc4536 = 0xff728ebe;
  DAT_101dc453a = 0xff19459d;
  DAT_101dc453e = 0xff9d877b;
  DAT_101dc4542 = 0xffcbb1a3;
  DAT_101dc4546 = 0xff3f6fb5;
  DAT_101dc454a = 0xffc5c5c5;
  DAT_101dc454e = 0xff4fc1f1;
  DAT_101dc4552 = 0xff606060;
  DAT_101dc4556 = 0xffc5ff7b;
  DAT_101dc455a = 0xff5271eb;
  DAT_101dc455e = 0xfffae076;
  DAT_101dc4562 = 0xff3ac8f6;
  DAT_101dc4566 = 0xffaaaaaa;
  DAT_101dc456a = 0xffe19400;
  DAT_101dc456e = 0xffe19400;
  DAT_101dc4572 = 0xffe550b2;
  DAT_101dc4576 = 0xfff22ae8;
  DAT_101dc457a = 0xff005ae1;
  DAT_101dc457e = 0xff1addfa;
  DAT_101dc4582 = 0xff2424b3;
  DAT_101dc4586 = 0xff2424b3;
  DAT_101dc458a = 0xff646464;
  DAT_101dc458e = 0xff92665e;
  DAT_101dc4592 = 0xff646037;
  DAT_101dc4598 = 0xffffffff;
  DAT_101dc459c = 0xff1111a1;
  DAT_101dc45a0 = 0xff321ee1;
  DAT_101dc45a4 = 0xffc8c8c8;
  DAT_101dc45a8 = 0xff321ee1;
  DAT_101dc45ac = 0xff7fe801;
  DAT_101dc45b0 = 0xffffffff;
  DAT_101dc45b4 = 0xff6259b3;
  DAT_101dc45b8 = 0xff506e73;
  DAT_101dc45bc = 0xff9dbf86;
  DAT_101dc45c0 = 0xffa35244;
  DAT_101dc45c4 = 0xffca828e;
  DAT_101dc45c8 = 0xffa6a6a6;
  DAT_101dc45cc = 0xffa6a6a6;
  DAT_101dc45d0 = 0xffffffff;
  DAT_101dc45d4 = 0xff88ea2f;
  DAT_101dc45d8 = 0xff8c8c8c;
  DAT_101dc45dc = 0xffffb400;
  DAT_101dc45e0 = 0xffff00ff;
  DAT_101dc45e4 = 0xff00aded;
  DAT_101dc45e8 = 0xff33d3ff;
  DAT_101dc45ec = 0xff7fe801;
  DAT_101dc45f0 = 0xff282828;
  DAT_101dc45f4 = 0xfff0f0f0;
  DAT_101dc45f8 = 0xffa4781e;
  DAT_101dc45fc = 0xffa6654b;
  DAT_101dc4600 = 0xff93435b;
  DAT_101dc4604 = 0xff387f9c;
  DAT_101dc4608 = 0xffa3781e;
  DAT_101dc460c = 0xffffd18a;
  DAT_101dc4610 = 0xffff61f7;
  DAT_101dc4614 = 0xff5de1f2;
  DAT_101dc4618 = 0xff80eaff;
  DAT_101dc461c = 0xff32e00e;
  DAT_101dc4620 = 0xff5a3c10;
  DAT_101dc4624 = 0xff330b03;
  DAT_101dc4628 = 0xff33031d;
  DAT_101dc462c = 0xff032433;
  DAT_101dc4630 = 0xff9e8e8d;
  uRam0000000101dc4708 = 0x7f7fffff7f7fffff;
  _DAT_101dc4700 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4718 = 0x7f7fffff7f7fffff;
  _DAT_101dc4710 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4728 = 0x7f7fffff7f7fffff;
  _DAT_101dc4720 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4738 = 0x7f7fffff7f7fffff;
  _DAT_101dc4730 = 0x7f7fffff7f7fffff;
  DAT_101dc4740 = 0x7f7fffff;
  DAT_101dc4744 = 0x7f7fffff;
  DAT_101dc4748 = 0x7f7fffff;
  DAT_101dc474c = 0x3f800000;
  uRam0000000101dc4758 = 0x7f7fffff7f7fffff;
  _DAT_101dc4750 = 0x7f7fffff7f7fffff;
  DAT_101dc4760 = 0x7f7fffff;
  DAT_101dc4764 = 0x3eb33333;
  uRam0000000101dc4770 = 0x7f7fffff7f7fffff;
  _DAT_101dc4768 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4780 = 0x7f7fffff7f7fffff;
  _DAT_101dc4778 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4790 = 0x7f7fffff7f7fffff;
  _DAT_101dc4788 = 0x7f7fffff7f7fffff;
  _DAT_101dc47a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc4798 = 0x7f7fffff7f7fffff;
  DAT_101dc47a8 = 0x7f7fffff;
  DAT_101dc47ac = 0x7f7fffff;
  DAT_101dc47b0 = 0x7f7fffff;
  uRam0000000101dc4648 = 0xff7fffffff7fffff;
  _DAT_101dc4640 = 0xff7fffffff7fffff;
  DAT_101dc4650 = 0;
  DAT_101dc4658 = 0;
  uRam0000000101dc4664 = 0xff7fffffff7fffff;
  _DAT_101dc465c = 0xff7fffffff7fffff;
  DAT_101dc466c = 0xff7fffff;
  DAT_101dc4670 = 0xff7fffff;
  DAT_101dc4674 = NEON_fmov(0xbf800000,4);
  DAT_101dc467c = 0x3f000000;
  DAT_101dc4680 = 0;
  DAT_101dc4688 = 0;
  uRam0000000101dc4698 = 0xff7fffffff7fffff;
  _DAT_101dc4690 = 0xff7fffffff7fffff;
  uRam0000000101dc46a8 = 0xff7fffffff7fffff;
  _DAT_101dc46a0 = 0xff7fffffff7fffff;
  uRam0000000101dc46b8 = 0xff7fffffff7fffff;
  _DAT_101dc46b0 = 0xff7fffffff7fffff;
  uRam0000000101dc46c8 = 0xbf800000bf800000;
  _DAT_101dc46c0 = 0xbf80000000000000;
  DAT_101dc46d0 = 0xbf800000;
  DAT_101dc46d4 = 0xff7fffff;
  DAT_101dc46d8 = 0xff7fffff;
  DAT_101dc46dc = 0xff7fffff;
  DAT_101dc46e0 = 0;
  DAT_101dc46e4 = 0xff7fffff;
  DAT_101dc46e8 = 0;
  DAT_101dc46f0 = 0;
  DAT_101dc4634 = 0xffc0c0c0;
  return;
}




long * FUN_100070a7c(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_100070b80_10144dfc8;
  FUN_100269de4(puVar3 + 0x17);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) & 0xfc00 | 1;
  uVar1 = FUN_1004d2524("HUD_BattleLog");
  uVar2 = FUN_100015208("HUD_BattleLog",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0x3c29fe0,FUN_100070b38,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x17,1);
  return param_1;
}




void FUN_100070b38(undefined8 param_1)

{
  uint *puVar1;
  undefined4 in_stack_00000000;
  
  puVar1 = (uint *)((ulong)&stack0x00000000 | 8);
  FUN_1000728d8((float)*(double *)(puVar1 + 4),param_1,in_stack_00000000,*puVar1 & 0xff,puVar1[2],
                puVar1[6]);
  return;
}




long * thunk_FUN_100070a7c(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_100070b80_10144dfc8;
  FUN_100269de4(puVar3 + 0x17);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) & 0xfc00 | 1;
  uVar1 = FUN_1004d2524("HUD_BattleLog");
  uVar2 = FUN_100015208("HUD_BattleLog",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  uVar4 = FUN_1000bdb98();
  FUN_1004e18bc(uVar4,param_1,0x3c29fe0,FUN_100070b38,0);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x17,1);
  return param_1;
}




void FUN_100070b80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_100070b80_10144dfc8;
  FUN_100070bd4();
  uVar1 = FUN_1000bdb98();
  FUN_1004e1b58(uVar1,param_1);
  if ((void *)param_1[0x31] != (void *)0x0) {
    operator_delete__((void *)param_1[0x31]);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100070bd4(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x180);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x188) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x188) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x180);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  return;
}




void thunk_FUN_100070b80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_100070b80_10144dfc8;
  FUN_100070bd4();
  uVar1 = FUN_1000bdb98();
  FUN_1004e1b58(uVar1,param_1);
  if ((void *)param_1[0x31] != (void *)0x0) {
    operator_delete__((void *)param_1[0x31]);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100070c3c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100070b80();
  operator_delete(pvVar1);
  return;
}




void FUN_100070c50(long param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)*param_2;
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar3 = 0;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  uVar1 = FUN_100345bbc(uVar3);
  *(undefined1 *)(param_1 + 400) = uVar1;
  return;
}




void FUN_100070cb4(long param_1)

{
  FUN_100269e20(param_1 + 0xb8);
  return;
}




void FUN_100070cbc(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x200;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 400) = *(ushort *)(param_1 + 400) & 0xfdff | uVar1;
  return;
}




void FUN_100070cdc(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_6d8 [96];
  undefined8 local_678 [200];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  thunk_FUN_10045cc04(auStack_6d8);
  FUN_1003a2644(auStack_6d8,1);
  FUN_1003c3608(auStack_6d8,1);
  FUN_1003b0638(auStack_6d8,*(undefined1 *)(param_1 + 400));
  uVar1 = FUN_1003a6ce4(auStack_6d8,local_678,200,0);
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    puVar4 = local_678;
    do {
      lVar2 = FUN_100464bb0(*puVar4);
      if (lVar2 != 0) {
        FUN_100070da8(param_1,*puVar4,lVar2);
      }
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100070da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  void *local_130 [2];
  char local_119;
  void *local_118 [2];
  char local_101;
  undefined1 local_100;
  undefined1 auStack_f8 [128];
  undefined1 auStack_78 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar5 = FUN_100345bbc(param_2);
  bVar1 = (byte)*(undefined2 *)(param_1 + 400);
  bVar4 = uVar5 == bVar1;
  FUN_1004654a0(param_2);
  FUN_1004d2698(auStack_78,"icon_hero_%s");
  lVar7 = FUN_1003e000c(param_3);
  puVar3 = PTR_s_build___HUDPartsHero__s_png_10184e0b8;
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  FUN_1004654a0(param_2);
  FUN_1004d2698(auStack_f8,puVar3);
  FUN_10001549c(local_130,auStack_f8);
  FUN_10001549c(local_118,uVar8);
  local_100 = 1;
  iVar6 = FUN_100072128(param_1,auStack_78,0,&DAT_101d91650,local_130,1,1,bVar4,bVar4,0xffffffff,
                        0xffffffff,0);
  if (local_101 < '\0') {
    operator_delete(local_118[0]);
  }
  if (local_119 < '\0') {
    operator_delete(local_130[0]);
  }
  if ((iVar6 != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8),
     lVar7 != 0)) {
    *(uint *)(lVar7 + 0x96c) = *(uint *)(lVar7 + 0x96c) | 4;
    *(uint *)(lVar7 + 0xc3c) = *(uint *)(lVar7 + 0xc3c) | 4;
    puVar2 = &DAT_101dc47d8;
    if (uVar5 != bVar1) {
      puVar2 = &DAT_101dc47dc;
    }
    FUN_100652dd4(lVar7 + 0xac8,puVar2,2);
    if ((*(float *)(lVar7 + 0xb10) != 1.2) || (*(float *)(lVar7 + 0xb14) != 1.2)) {
      *(undefined8 *)(lVar7 + 0xb10) = 0x3f99999a3f99999a;
      FUN_1000200a0(lVar7 + 0xac8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100070f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 **local_58 [2];
  char local_41;
  
  FUN_10001549c(local_58,"icon_hero_");
  lVar4 = FUN_100345d90(param_2);
  if (lVar4 != 0) {
    uVar2 = FUN_100345bbc();
    if (uVar2 == *(byte *)(param_1 + 400)) {
      FUN_1004654a0(lVar4);
      std::string::append((char *)local_58);
      FUN_10034ee4c(param_2);
      lVar5 = FUN_1003318a0();
      if ((*(int *)(param_1 + 0x180) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8)
         , lVar6 != 0)) {
        pppuVar1 = (undefined8 ***)local_58[0];
        if (-1 < local_41) {
          pppuVar1 = local_58;
        }
        iVar3 = FUN_1000710e0(lVar6,pppuVar1,param_4);
        if (iVar3 != 0) {
          FUN_1000711d4(lVar6,param_5,lVar5);
          *(undefined4 *)(lVar6 + 0x158) = 0x40a00000;
          goto LAB_1000710b8;
        }
      }
      if (lVar5 != 0) {
        iVar3 = FUN_10034cbac(param_4);
        if (iVar3 == 0) {
          iVar3 = FUN_10034cbbc(param_4);
          if (iVar3 != 0) {
            FUN_100071378(param_1,lVar4,lVar5,param_4,param_5);
          }
        }
        else {
          FUN_100071270(param_1,lVar4,param_4);
        }
      }
    }
  }
LAB_1000710b8:
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




bool FUN_1000710e0(long param_1,char *param_2,int param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pcVar6 = (char *)(param_1 + 0xee0);
  bVar4 = *(byte *)(param_1 + 0xef7);
  uVar7 = (ulong)bVar4;
  if (param_2 == (char *)0x0) {
    sVar1 = *(size_t *)(param_1 + 0xee8);
    if (-1 < (char)bVar4) {
      sVar1 = uVar7;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 != sVar2) {
      return false;
    }
    pcVar3 = *(char **)pcVar6;
    if (-1 < (char)bVar4) {
      pcVar3 = pcVar6;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if (-1 < (char)bVar4) {
      if (sVar1 != 0) {
        if ((uint)*pbVar9 != ((uint)*(char **)pcVar6 & 0xff)) {
          return false;
        }
        pbVar8 = (byte *)(param_1 + 0xee1);
        while( true ) {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar9) {
            return false;
          }
        }
      }
      goto LAB_100071118;
    }
    if (sVar1 == 0) goto LAB_100071118;
    iVar5 = _memcmp(pcVar3,pbVar9,sVar1);
  }
  else {
    if ((char)bVar4 < '\0') {
      pcVar6 = *(char **)pcVar6;
    }
    iVar5 = _strcmp(param_2,pcVar6);
  }
  if (iVar5 != 0) {
    return false;
  }
LAB_100071118:
  return *(int *)(param_1 + 0xf54) == param_3;
}




void FUN_1000711d4(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  void *local_28;
  
  param_2 = *(int *)(param_1 + 0x15c) + param_2;
  *(int *)(param_1 + 0x15c) = param_2;
  *(int *)(param_1 + 0x160) = param_2;
  if (*(int *)(param_1 + 0xf54) != 0) {
    uVar1 = FUN_10011bc70(*(int *)(param_1 + 0xf54),param_3,param_1 + 0x160);
    FUN_100652cdc(param_1 + 0xca8,uVar1);
    param_2 = *(int *)(param_1 + 0x160);
  }
  if (1 < param_2) {
    FUN_1004e313c(auStack_30);
    FUN_1004e38ac(auStack_30,"x%d");
    FUN_100073704(param_1,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_100071270(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_4c;
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1004654a0(param_2);
  FUN_1004d2698(auStack_48,"icon_hero_%s");
  local_4c = 1;
  uVar3 = FUN_10011bc70(param_3,0,&local_4c);
  iVar1 = FUN_100071e38(param_1,auStack_48,0,&DAT_101d91650,uVar3,1,local_4c,1,
                        uVar2 & 0xffffffffffffff00,0xffffffff,0xffffffff,0);
  if (iVar1 != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8);
    *(uint *)(lVar4 + 0x96c) = *(uint *)(lVar4 + 0x96c) | 4;
    *(uint *)(lVar4 + 0xc3c) = *(uint *)(lVar4 + 0xc3c) & 0xfffffffb;
    *(int *)(*(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8) +
            0xf54) = (int)param_3;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100071378(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *******local_c0 [2];
  char local_a9;
  void *local_a8 [2];
  char local_91;
  void *local_90 [2];
  char local_79;
  undefined1 local_78;
  undefined4 local_6c;
  undefined1 auStack_68 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004654a0(param_2);
  FUN_1004d2698(auStack_68,"icon_hero_%s");
  local_6c = (undefined4)param_5;
  uVar3 = FUN_10011bc70(param_4,param_3,&local_6c);
  FUN_1000e88b4(local_c0,*(undefined8 *)(param_3 + 8));
  pppppppuVar1 = local_c0[0];
  if (-1 < local_a9) {
    pppppppuVar1 = local_c0;
  }
  FUN_10001549c(local_a8,pppppppuVar1);
  FUN_10001549c(local_90,uVar3);
  local_78 = 0;
  iVar2 = FUN_100072128(param_1,auStack_68,0,&DAT_101d91650,local_a8,param_5,local_6c,1,1,0xffffffff
                        ,0xffffffff,param_3);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (local_a9 < '\0') {
    operator_delete(local_c0[0]);
  }
  if ((iVar2 != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8),
     lVar4 != 0)) {
    *(uint *)(lVar4 + 0x96c) = *(uint *)(lVar4 + 0x96c) | 4;
    *(uint *)(lVar4 + 0xc3c) = *(uint *)(lVar4 + 0xc3c) & 0xfffffffb;
    *(int *)(lVar4 + 0xf54) = (int)param_4;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100071508(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *******pppppppuVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  undefined8 *******pppppppuVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  uint local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 uStack_a4;
  char local_91;
  undefined8 ******local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 ******local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_ac = 0xffffffff;
  uVar20 = 0xffffffff;
  if ((*(uint *)(param_2 + 0x2f4) & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) >> 0x10 & 1) == 0) {
      return;
    }
    FUN_10001549c(&local_78,"white_background");
    local_90 = (undefined8 *******)0x0;
    uStack_88 = 0;
    local_80 = 0;
    lVar13 = FUN_100345d90(param_3);
    if (lVar13 == 0) goto LAB_100071d50;
    uVar8 = FUN_100345bbc();
    bVar1 = (byte)*(undefined2 *)(param_1 + 400);
    bVar6 = uVar8 == bVar1;
    FUN_1003461dc(lVar13);
    lVar14 = FUN_100345d90();
    if (lVar14 == 0) {
      if (lVar13 == param_2) {
        pcVar16 = (char *)FUN_1004654a0(param_2);
        iVar12 = _strcmp(pcVar16,"GoldMine");
        if (iVar12 == 0) {
          FUN_10001549c(&local_a8,"hud_pingicon_action_kraken");
          std::string::operator=((string *)&local_78,(string *)&local_a8);
          if (local_91 < '\0') {
            operator_delete((void *)CONCAT44(uStack_a4,local_a8));
          }
          bVar6 = false;
          local_b0 = 0;
          local_ac = 0xffffffff;
          goto LAB_1000719f4;
        }
        goto LAB_100071848;
      }
      if (((*(byte *)(lVar13 + 0x2f4) & 1) == 0) && (iVar12 = FUN_100345bbc(lVar13), iVar12 != 0)) {
        puVar18 = &DAT_101dc47d8;
        if (uVar8 != bVar1) {
          puVar18 = &DAT_101dc47dc;
        }
        local_ac = *puVar18;
      }
      uVar9 = *(uint *)(lVar13 + 0x2f4);
      if ((uVar9 & 1) != 0) {
        uVar15 = FUN_10034cb58();
        if (((uVar15 & 1) != 0) || ((*(byte *)(param_2 + 0x2f5) >> 4 & 1) != 0)) {
          FUN_10001549c(&local_a8,"icon_hero_");
          std::string::operator=((string *)&local_78,(string *)&local_a8);
          if (local_91 < '\0') {
            operator_delete((void *)CONCAT44(uStack_a4,local_a8));
          }
          FUN_1004654a0(lVar13);
          std::string::append((char *)&local_78);
          goto LAB_100071914;
        }
LAB_100071868:
        bVar7 = false;
        bVar6 = false;
        local_b0 = 0;
        goto LAB_1000719f8;
      }
      if ((uVar9 >> 0xd & 1) == 0) {
        if ((uVar9 >> 0xb & 1) != 0) {
          pcVar16 = "hud_pingicon_action_gold_miner";
          goto LAB_1000719c8;
        }
        if ((uVar9 >> 10 & 1) != 0) {
          pcVar16 = "hud_pingicon_action_minion_miner";
          goto LAB_1000719c8;
        }
        if ((uVar9 & 0x110) != 0) {
          pcVar16 = "hud_pingicon_action_minion";
          goto LAB_1000719c8;
        }
        if ((uVar9 >> 2 & 1) == 0) goto LAB_100071868;
        iVar12 = FUN_1003bb288(lVar13);
        FUN_10034cb1c(&local_a8,"5v5_Blackclaw_Uncaptured");
        if (iVar12 == local_a8) {
LAB_100071de4:
          pcVar16 = "hud_battlelog_blackclaw";
          goto LAB_1000719c8;
        }
        iVar12 = FUN_1003bb288(lVar13);
        FUN_10034cb1c(&local_a8,"5v5_Blackclaw_Captured");
        if (iVar12 == local_a8) goto LAB_100071de4;
        iVar12 = FUN_1003bb288(lVar13);
        FUN_10034cb1c(&local_a8,"5v5_Ghostwing");
        if (iVar12 == local_a8) {
          pcVar16 = "hud_battlelog_ghostwing";
          goto LAB_1000719c8;
        }
        if ((*(byte *)(lVar13 + 0x2f7) >> 6 & 1) != 0) {
          pcVar16 = "hud_pingicon_action_kraken";
          goto LAB_1000719c8;
        }
      }
      else {
        pcVar16 = "hud_pingicon_action_turret";
LAB_1000719c8:
        FUN_10001549c(&local_a8,pcVar16);
        std::string::operator=((string *)&local_78,(string *)&local_a8);
        if (local_91 < '\0') {
          operator_delete((void *)CONCAT44(uStack_a4,local_a8));
        }
      }
      bVar6 = false;
      local_b0 = 0;
LAB_1000719f4:
      bVar7 = true;
    }
    else {
      if ((*(byte *)(lVar14 + 0x2f4) & 1) != 0) {
        FUN_10001549c(&local_a8,"icon_hero_");
        std::string::operator=((string *)&local_78,(string *)&local_a8);
        if (local_91 < '\0') {
          operator_delete((void *)CONCAT44(uStack_a4,local_a8));
        }
        FUN_1004654a0(lVar14);
        std::string::append((char *)&local_78);
        uVar9 = FUN_100345bbc(lVar14);
        bVar6 = uVar9 == *(byte *)(param_1 + 400);
        FUN_100345bbc(lVar14);
        local_ac = 0xffffffff;
        uVar20 = DAT_101dc47dc;
LAB_100071914:
        local_b0 = 4;
        goto LAB_1000719f4;
      }
LAB_100071848:
      bVar7 = false;
      bVar6 = false;
      local_b0 = 0;
      local_ac = 0xffffffff;
    }
LAB_1000719f8:
    uVar11 = FUN_100345bbc(param_2);
    uVar9 = *(uint *)(param_2 + 0x2f4);
    bVar2 = (byte)*(undefined2 *)(param_1 + 400);
    if ((uVar9 >> 2 & 1) == 0) {
      if ((uVar9 >> 0xf & 1) == 0) {
        if ((uVar9 >> 0xd & 1) != 0) {
          pcVar16 = "hud_pingicon_action_turret";
          goto LAB_100071b24;
        }
        if ((uVar9 >> 0xe & 1) != 0) {
          pcVar16 = "hud_battlelog_armory";
          goto LAB_100071b24;
        }
        if ((uVar9 >> 0xb & 1) == 0) {
          pcVar16 = "hud_pingicon_action_minion_miner";
        }
        else {
          pcVar16 = "hud_pingicon_action_gold_miner";
        }
        FUN_10001549c(&local_a8,pcVar16);
        std::string::operator=((string *)&local_90,(string *)&local_a8);
        if (local_91 < '\0') {
          operator_delete((void *)CONCAT44(uStack_a4,local_a8));
        }
        bVar5 = (uVar8 == bVar1) != (uVar11 == bVar2);
        if (lVar13 == param_2) goto LAB_100071b4c;
LAB_100071b58:
        if (bVar5) goto LAB_100071abc;
LAB_100071b5c:
        puVar18 = &DAT_101dc47d8;
        puVar19 = &DAT_101dc47dc;
        goto LAB_100071b6c;
      }
      pcVar16 = "hud_pingicon_action_vain_crystal";
LAB_100071b24:
      FUN_10001549c(&local_a8,pcVar16);
      std::string::operator=((string *)&local_90,(string *)&local_a8);
      if (local_91 < '\0') {
        operator_delete((void *)CONCAT44(uStack_a4,local_a8));
      }
      bVar5 = false;
LAB_100071b4c:
      iVar12 = FUN_100345bbc(param_2);
      if (iVar12 != 0) goto LAB_100071b58;
    }
    else {
      iVar12 = FUN_1003bb288(param_2);
      FUN_10034cb1c(&local_a8,"5v5_Blackclaw_Uncaptured");
      if (iVar12 == local_a8) {
LAB_100071a7c:
        pcVar16 = "hud_battlelog_blackclaw";
LAB_100071a84:
        FUN_10001549c(&local_a8,pcVar16);
        std::string::operator=((string *)&local_90,(string *)&local_a8);
        if (local_91 < '\0') {
          operator_delete((void *)CONCAT44(uStack_a4,local_a8));
        }
      }
      else {
        iVar12 = FUN_1003bb288(param_2);
        FUN_10034cb1c(&local_a8,"5v5_Blackclaw_Captured");
        if (iVar12 == local_a8) goto LAB_100071a7c;
        iVar12 = FUN_1003bb288(param_2);
        FUN_10034cb1c(&local_a8,"5v5_Ghostwing");
        if (iVar12 == local_a8) {
          pcVar16 = "hud_battlelog_ghostwing";
          goto LAB_100071a84;
        }
        if ((*(byte *)(param_2 + 0x2f7) >> 6 & 1) != 0) {
          pcVar16 = "hud_pingicon_action_kraken";
          goto LAB_100071a84;
        }
      }
      iVar12 = FUN_100345bbc(param_2);
      if ((iVar12 != 0) || (uVar8 != bVar1)) goto LAB_100071b5c;
LAB_100071abc:
      puVar18 = &DAT_101dc47dc;
      puVar19 = &DAT_101dc47d8;
LAB_100071b6c:
      if (uVar11 != bVar2) {
        puVar18 = puVar19;
      }
      uVar20 = *puVar18;
    }
    if (bVar7) {
      pppppppuVar17 = (undefined8 *******)local_78;
      if (-1 < local_68) {
        pppppppuVar17 = &local_78;
      }
    }
    else {
      pppppppuVar17 = (undefined8 *******)0x0;
    }
    pppppppuVar3 = (undefined8 *******)local_90;
    if (-1 < local_80) {
      pppppppuVar3 = &local_90;
    }
    iVar12 = FUN_100071e38(param_1,pppppppuVar17,"hud_stats_kills",&DAT_101d91650,pppppppuVar3,1,1,
                           bVar6,0,local_ac,uVar20,0);
    if (iVar12 == 0) goto LAB_100071d50;
    lVar13 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8);
    *(uint *)(lVar13 + 0x96c) = *(uint *)(lVar13 + 0x96c) & 0xfffffffb | local_b0;
    uVar8 = *(uint *)(lVar13 + 0xc3c) & 0xfffffffb;
  }
  else {
    local_78 = (undefined8 *******)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_10001549c(&local_90,"icon_hero_");
    FUN_1004654a0(param_2);
    std::string::append((char *)&local_90);
    uVar8 = FUN_100345bbc(param_2);
    uVar4 = *(undefined2 *)(param_1 + 400);
    iVar10 = FUN_100345e34(param_2);
    iVar12 = (int)param_3;
    if (iVar10 != -1) {
      iVar12 = iVar10;
    }
    lVar13 = FUN_100345d90(iVar12);
    if (lVar13 == 0) {
LAB_10007169c:
      bVar6 = false;
      bVar7 = false;
      pppppppuVar17 = (undefined8 *******)0x0;
    }
    else {
      FUN_1003461dc(lVar13);
      lVar14 = FUN_100345d90();
      if (lVar14 == 0) {
        if ((*(byte *)(lVar13 + 0x2f4) & 1) != 0) {
          FUN_10001549c(&local_a8,"icon_hero_");
          std::string::operator=((string *)&local_78,(string *)&local_a8);
          if (local_91 < '\0') {
            operator_delete((void *)CONCAT44(uStack_a4,local_a8));
          }
          FUN_1004654a0(lVar13);
          std::string::append((char *)&local_78);
          goto LAB_10007180c;
        }
        iVar12 = FUN_100345bbc(lVar13);
        if (iVar12 != 0) {
          uVar9 = FUN_100345bbc(lVar13);
          puVar18 = &DAT_101dc47d8;
          if (uVar9 != *(byte *)(param_1 + 400)) {
            puVar18 = &DAT_101dc47dc;
          }
          uVar20 = *puVar18;
        }
        uVar9 = *(uint *)(lVar13 + 0x2f4);
        if ((uVar9 >> 0xd & 1) == 0) {
          if ((uVar9 >> 2 & 1) == 0) {
            if ((uVar9 >> 0xb & 1) == 0) {
              if ((uVar9 >> 10 & 1) == 0) {
                if ((uVar9 & 0x110) == 0) goto LAB_10007169c;
                pcVar16 = "hud_pingicon_action_minion";
              }
              else {
                pcVar16 = "hud_pingicon_action_minion_miner";
              }
            }
            else {
              pcVar16 = "hud_pingicon_action_gold_miner";
            }
            goto LAB_100071c8c;
          }
          iVar12 = FUN_1003bb288(lVar13);
          FUN_10034cb1c(&local_a8,"5v5_Blackclaw_Uncaptured");
          if (iVar12 == local_a8) {
LAB_1000718c8:
            pcVar16 = "hud_battlelog_blackclaw";
            goto LAB_100071c8c;
          }
          iVar12 = FUN_1003bb288(lVar13);
          FUN_10034cb1c(&local_a8,"5v5_Blackclaw_Captured");
          if (iVar12 == local_a8) goto LAB_1000718c8;
          iVar12 = FUN_1003bb288(lVar13);
          FUN_10034cb1c(&local_a8,"5v5_Ghostwing");
          if (iVar12 == local_a8) {
            pcVar16 = "hud_battlelog_ghostwing";
            goto LAB_100071c8c;
          }
          if ((*(byte *)(lVar13 + 0x2f7) >> 6 & 1) != 0) {
            pcVar16 = "hud_pingicon_action_kraken";
            goto LAB_100071c8c;
          }
        }
        else {
          pcVar16 = "hud_pingicon_action_turret";
LAB_100071c8c:
          FUN_10001549c(&local_a8,pcVar16);
          std::string::operator=((string *)&local_78,(string *)&local_a8);
          if (local_91 < '\0') {
            operator_delete((void *)CONCAT44(uStack_a4,local_a8));
          }
        }
        bVar7 = false;
        bVar6 = false;
      }
      else {
        if ((*(byte *)(lVar14 + 0x2f4) & 1) == 0) goto LAB_10007169c;
        FUN_10001549c(&local_a8,"icon_hero_");
        std::string::operator=((string *)&local_78,(string *)&local_a8);
        if (local_91 < '\0') {
          operator_delete((void *)CONCAT44(uStack_a4,local_a8));
        }
        FUN_1004654a0(lVar14);
        std::string::append((char *)&local_78);
        lVar13 = lVar14;
LAB_10007180c:
        uVar9 = FUN_100345bbc(lVar13);
        bVar7 = uVar9 == *(byte *)(param_1 + 400);
        bVar6 = true;
      }
      pppppppuVar17 = (undefined8 *******)local_78;
      if (-1 < local_68) {
        pppppppuVar17 = &local_78;
      }
    }
    pppppppuVar3 = (undefined8 *******)local_90;
    if (-1 < local_80) {
      pppppppuVar3 = &local_90;
    }
    iVar12 = FUN_100071e38(param_1,pppppppuVar17,"hud_stats_kills",&DAT_101d91650,pppppppuVar3,1,1,
                           bVar7,uVar8 == (byte)uVar4,uVar20,0xffffffff,0);
    if (iVar12 == 0) goto LAB_100071d50;
    lVar13 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8);
    uVar8 = 4;
    if (!bVar6) {
      uVar8 = 0;
    }
    *(uint *)(lVar13 + 0x96c) = *(uint *)(lVar13 + 0x96c) & 0xfffffffb | uVar8;
    uVar8 = *(uint *)(lVar13 + 0xc3c) | 4;
  }
  *(uint *)(lVar13 + 0xc3c) = uVar8;
LAB_100071d50:
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}




undefined8
FUN_100071e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  void *local_98 [2];
  char local_81;
  void *local_80 [2];
  char local_69;
  undefined1 local_68;
  
  FUN_10001549c(local_98,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_10001549c(local_80,param_5);
  local_68 = 0;
  uVar1 = FUN_100072128(param_1,param_2,param_3,param_4,local_98,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  return uVar1;
}




void FUN_100071f20(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  void *local_a0 [2];
  char local_89;
  void *local_88 [2];
  char local_71;
  undefined1 local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = FUN_100345bbc(param_2);
  uVar3 = *(undefined2 *)(param_1 + 400);
  uVar6 = FUN_10034cb58();
  bVar1 = (byte)uVar3;
  if (((uVar6 & 1) != 0) || (uVar4 == bVar1)) {
    FUN_1004654a0(param_2);
    FUN_1004d2698(auStack_68,"icon_hero_%s");
    uVar7 = FUN_100345b94();
    lVar8 = FUN_10034e548(uVar7,param_3);
    if ((lVar8 != 0) &&
       ((*(char *)(lVar8 + 0x19c) != '\0' ||
        ((iVar5 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260)), iVar5 != 0 &&
         (iVar5 = FUN_100316180(0x1a), iVar5 == 0)))))) {
      uVar7 = *(undefined8 *)(lVar8 + 8);
      FUN_10001549c(local_a0,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
      FUN_10001549c(local_88,uVar7);
      local_70 = 0;
      iVar5 = FUN_100072128(param_1,auStack_68,"hud_stats_gold",&DAT_101d91650,local_a0,1,1,
                            uVar4 == bVar1,uVar4 == bVar1,0xffffffff,0xffffffff,0);
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
      if (local_89 < '\0') {
        operator_delete(local_a0[0]);
      }
      if ((iVar5 != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)(*(int *)(param_1 + 0x180) - 1) * 8)
         , lVar8 != 0)) {
        *(uint *)(lVar8 + 0x96c) = *(uint *)(lVar8 + 0x96c) | 4;
        *(uint *)(lVar8 + 0xc3c) = *(uint *)(lVar8 + 0xc3c) | 4;
        puVar2 = &DAT_101dc47d8;
        if (uVar4 != bVar1) {
          puVar2 = &DAT_101dc47dc;
        }
        FUN_100652dd4(lVar8 + 0xac8,puVar2,2);
        if ((*(float *)(lVar8 + 0xb10) != 1.2) || (*(float *)(lVar8 + 0xb14) != 1.2)) {
          *(undefined8 *)(lVar8 + 0xb10) = 0x3f99999a3f99999a;
          FUN_1000200a0(lVar8 + 0xac8);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_100072128(undefined1 param_1 [16],float param_2,long *param_3,long param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined4 param_8,undefined4 param_9,ulong param_10,
             undefined1 param_11,undefined4 param_12,undefined4 param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  local_90 = param_13;
  uStack_8c = param_12;
  if (param_4 == 0) {
    uVar4 = *(ulong *)(param_7 + 0x20);
    if (-1 < (char)*(byte *)(param_7 + 0x2f)) {
      uVar4 = (ulong)*(byte *)(param_7 + 0x2f);
    }
    if (uVar4 == 0) {
      return 0;
    }
  }
  if ((((int)param_3[0x30] != 0) &&
      (lVar5 = *(long *)(param_3[0x31] + (ulong)((int)param_3[0x30] - 1) * 8), lVar5 != 0)) &&
     ((*(byte *)(lVar5 + 0xf58) >> 2 & 1) != 0)) {
    iVar1 = FUN_100073c14(lVar5,param_4,param_5,param_6,param_7,param_10,param_11,&uStack_8c,
                          &local_90);
    param_10 = param_10 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_1000711d4(lVar5,param_8,param_14);
      *(undefined4 *)(lVar5 + 0x158) = 0x40a00000;
      goto LAB_100072334;
    }
  }
  plVar2 = operator_new(0xf60);
  local_98 = FUN_100072efc(plVar2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                           param_12,param_13,(byte)((ushort)(short)param_3[0x32] >> 9) & 1);
  if ((int)param_3[0x30] == 0) {
    fVar7 = 0.5;
    plVar3 = plVar2;
  }
  else {
    fVar7 = 1.0;
    plVar3 = *(long **)(param_3[0x31] + (ulong)((int)param_3[0x30] - 1) * 8);
  }
  fVar9 = *(float *)((long)plVar3 + 0x44);
  (**(code **)(*plVar3 + 0x50))();
  uVar8 = 0;
  uVar4 = FUN_100060a70();
  fVar6 = 0.0;
  if ((uVar4 & 1) == 0) {
    fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    uVar8 = 0x3f800000;
  }
  fVar9 = fVar9 + fVar7 * param_2;
  if ((*(float *)(plVar2 + 8) != fVar6) || (*(float *)((long)plVar2 + 0x44) != fVar9)) {
    *(float *)(plVar2 + 8) = fVar6;
    *(float *)((long)plVar2 + 0x44) = fVar9;
    FUN_1000200a0(plVar2);
  }
  local_84 = 0x3f000000;
  local_88 = uVar8;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_88);
  if ((*(uint *)((long)plVar2 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)plVar2 + 0x84) = *(uint *)((long)plVar2 + 0x84) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_10007401c(param_3 + 0x30,&local_98);
  FUN_100642bd8(param_3 + 0x17,local_98,1);
LAB_100072334:
  FUN_100072598(param_3);
  return 1;
}




void FUN_100072370(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 auStack_448 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_100345bbc(param_2);
  bVar1 = *(byte *)(param_1 + 400);
  uVar3 = FUN_10034cb58();
  if (((uVar3 & 1) != 0) || (uVar2 == bVar1)) {
    lVar4 = *(long *)(param_2 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dea0))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    uVar2 = FUN_100472138(lVar4,auStack_448,0x80);
    if (param_3 < uVar2) {
      FUN_100070da8(param_1,param_2,auStack_448[param_3]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100072448(float param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  
  uVar5 = (ulong)*(uint *)(param_2 + 0x180);
  if (*(uint *)(param_2 + 0x180) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    iVar2 = 0;
    do {
      fVar8 = (float)((int)uVar5 - 1) * 0.3;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      plVar3 = *(long **)(*(long *)(param_2 + 0x188) + lVar6);
      fVar8 = *(float *)(plVar3 + 0x2b) + param_1 * (-1.0 - fVar8);
      *(float *)(plVar3 + 0x2b) = fVar8;
      if (fVar8 <= 0.0) {
        (**(code **)(*plVar3 + 8))();
        lVar1 = *(long *)(param_2 + 0x188) + lVar6;
        FUN_10007409c(param_2 + 0x180,lVar1,lVar1 + 8);
        iVar2 = iVar2 + 1;
        uVar5 = (ulong)*(uint *)(param_2 + 0x180);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar7 < uVar5);
    if (0 < iVar2) {
      FUN_100072598(param_2);
    }
  }
  pfVar4 = (float *)FUN_1003e10f0();
  if ((((*(byte *)(param_2 + 0x191) & 1) == 0) && (0.0 < *pfVar4)) &&
     (fVar8 = (float)FUN_100032228(), 0.0 < fVar8 - *pfVar4)) {
    *(ushort *)(param_2 + 400) = *(ushort *)(param_2 + 400) | 0x100;
    FUN_1003467f8();
    iVar2 = FUN_10034cf60();
    if (iVar2 != 0) {
      FUN_100070bd4(param_2);
      FUN_100070cdc(param_2);
      return;
    }
  }
  return;
}




void FUN_100072598(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_a0;
  float fStack_9c;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  
  FUN_100641464(auStack_94,auStack_98);
  uVar2 = FUN_100060a70();
  iVar4 = (int)param_3[0x30];
  uVar5 = iVar4 - 5;
  if (0 < (int)uVar5) {
    lVar8 = 0;
    do {
      if (*(long **)(param_3[0x31] + lVar8) != (long *)0x0) {
        (**(code **)(**(long **)(param_3[0x31] + lVar8) + 8))();
        *(undefined8 *)(param_3[0x31] + lVar8) = 0;
      }
      lVar8 = lVar8 + 8;
    } while ((ulong)uVar5 * 8 - lVar8 != 0);
    FUN_10007409c(param_3 + 0x30,param_3[0x31],param_3[0x31] + (long)(int)uVar5 * 8);
    iVar4 = (int)param_3[0x30];
  }
  if (iVar4 != 0) {
    uVar9 = 0;
    if ((uVar2 & 1) == 0) {
      uVar9 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    (**(code **)(**(long **)param_3[0x31] + 0x50))();
    uVar5 = *(uint *)(param_3 + 0x30);
    if (uVar5 != 0) {
      uVar2 = 0;
      fVar11 = param_2 * 0.5;
      lVar8 = param_3[0x31];
      do {
        lVar1 = DAT_101dbd2f8;
        if (*(long *)(lVar8 + uVar2 * 8) != 0) {
          uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
          if ((ulong)uVar3 == 0xffff) {
            puVar6 = (ushort *)0x0;
          }
          else {
            puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
            if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
              uVar3 = 0xffff;
            }
            else {
              uVar3 = *puVar6;
            }
            *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
            *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
            FUN_10063fb5c(puVar6);
            *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
          }
          local_a0 = uVar9;
          fStack_9c = fVar11;
          FUN_10063fb90(puVar6,&local_a0);
          FUN_10063f0e8(0x3dcccccd,puVar6);
          lVar8 = DAT_101dbd2f8;
          uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
          if ((ulong)uVar3 == 0xffff) {
            puVar7 = (ushort *)0x0;
          }
          else {
            puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
            if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
              uVar3 = 0xffff;
            }
            else {
              uVar3 = *puVar7;
            }
            *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
            *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
            FUN_10063fcac(puVar7);
            *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
          }
          FUN_10063fce0(0x3f800000,puVar7);
          fVar10 = (float)(*(uint *)(*(long *)(param_3[0x31] + uVar2 * 8) + 0x84) >> 7 & 0xff) *
                   -0.0007843138 + 0.2;
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          FUN_10063f0e8(fVar10,puVar7);
          lVar8 = DAT_101dbd2f8;
          uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
          if ((ulong)uVar3 == 0xffff) {
            puVar7 = (ushort *)0x0;
          }
          else {
            puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
            if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
              uVar3 = 0xffff;
            }
            else {
              uVar3 = *puVar7;
            }
            *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
            *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
            FUN_10063f1bc(puVar7);
            *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
          }
          FUN_10063f2a4(puVar7,puVar6);
          FUN_100642324(*(undefined8 *)(param_3[0x31] + uVar2 * 8));
          FUN_100642b7c(*(undefined8 *)(param_3[0x31] + uVar2 * 8),puVar7);
          (**(code **)(**(long **)(param_3[0x31] + uVar2 * 8) + 0x48))();
          lVar8 = param_3[0x31];
          fVar11 = fVar11 + param_2 * *(float *)(*(long *)(lVar8 + uVar2 * 8) + 0x4c);
          uVar5 = *(uint *)(param_3 + 0x30);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar5);
    }
  }
  FUN_10064e47c(0x43a50000,0x44228000,param_3);
  return;
}




void thunk_FUN_100072598(void)

{
  FUN_100072598();
  return;
}




void FUN_1000728d8(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  ulong param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 ******ppppppuVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  void *local_c0;
  void *local_b8;
  char local_a9;
  void *local_a8 [2];
  char local_91;
  undefined1 local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 *****local_78 [2];
  char local_61;
  
  lVar5 = FUN_10005fe04();
  if (lVar5 != 0) {
    uVar6 = FUN_10005fe04();
    uVar7 = FUN_100060214(uVar6,param_3);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar6 = FUN_100491adc();
  puVar8 = (undefined4 *)FUN_100491c18(uVar6,param_4);
  iVar2 = FUN_10034e738(param_3);
  FUN_10034ee90();
  iVar3 = FUN_10034e738();
  uVar7 = FUN_10034cb58();
  if ((((uVar7 & 1) == 0) && (*(char *)(puVar8 + 7) == '\0')) && (iVar2 != iVar3)) {
    return;
  }
  iVar4 = FUN_10034cb58();
  if ((iVar4 != 0) && (*(char *)(puVar8 + 7) == '\0')) {
    return;
  }
  if (((param_5 != -1) && (iVar4 = FUN_10034ee90(), iVar4 != param_5)) &&
     (iVar4 = FUN_10034ee90(), iVar4 != (int)param_3)) {
    return;
  }
  if ((uint)puVar8[6] < 10) {
    pcVar9 = (&PTR_s_build___Sounds_UI_assetbundle_sf_10144e250)[(int)puVar8[6]];
  }
  else {
    pcVar9 = "";
  }
  FUN_100094b5c(0x3f800000,pcVar9);
  FUN_10001549c(local_78,"icon_hero_");
  FUN_100345d90(param_3);
  FUN_1004654a0();
  std::string::append((char *)local_78);
  iVar4 = (int)param_6;
  switch(*puVar8) {
  case 0:
    iVar2 = FUN_10034e738(param_3);
    FUN_10034ee90();
    iVar3 = FUN_10034e738();
    bVar1 = iVar2 == iVar3;
    uVar6 = FUN_100491adc();
    lVar5 = FUN_100491c18(uVar6,param_4);
    uVar10 = FUN_1004e0150(*(undefined8 *)(lVar5 + 8),0);
    thunk_FUN_1004e439c(&local_c0,uVar10);
    FUN_100491c24(param_1,uVar6,param_4,&local_c0,param_6);
    ppppppuVar12 = (undefined8 ******)local_78[0];
    if (-1 < local_61) {
      ppppppuVar12 = local_78;
    }
    goto LAB_100072e7c;
  case 1:
    if (iVar4 == 0xffff) goto switchD_100072a1c_default;
    uVar6 = FUN_100345b94();
    lVar5 = FUN_10034e548(uVar6,param_6);
    uVar6 = FUN_100491adc();
    lVar11 = FUN_100491c18(uVar6,param_4);
    uVar6 = FUN_1004e0150(*(undefined8 *)(lVar11 + 8),0);
    thunk_FUN_1004e439c(auStack_88,uVar6);
    ppppppuVar12 = (undefined8 ******)local_78[0];
    if (-1 < local_61) {
      ppppppuVar12 = local_78;
    }
    uVar6 = *(undefined8 *)(lVar5 + 8);
    FUN_10001549c(&local_c0,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
    FUN_10001549c(local_a8,uVar6);
    local_90 = 0;
    iVar2 = FUN_100072128(param_2,ppppppuVar12,0,auStack_88,&local_c0,1,1,iVar2 == iVar3,
                          iVar2 == iVar3,0xffffffff,0xffffffff,0);
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
    if (local_a9 < '\0') {
      operator_delete(local_c0);
    }
    if (iVar2 != 0) {
      lVar5 = *(long *)(*(long *)(param_2 + 0x188) + (ulong)(*(int *)(param_2 + 0x180) - 1) * 8);
      *(uint *)(lVar5 + 0x96c) = *(uint *)(lVar5 + 0x96c) | 4;
      *(uint *)(lVar5 + 0xc3c) = *(uint *)(lVar5 + 0xc3c) | 4;
      *(byte *)(lVar5 + 0xf58) = *(byte *)(lVar5 + 0xf58) & 0xfb;
      *(undefined4 *)(lVar5 + 0x158) = 0x40600000;
    }
    local_b8 = local_80;
    if (local_80 == (void *)0x0) goto switchD_100072a1c_default;
    goto LAB_100072ec8;
  case 2:
    uVar10 = FUN_100491adc();
    lVar5 = FUN_100491c18(uVar10,param_4);
    uVar6 = FUN_1004e0150(*(undefined8 *)(lVar5 + 8),0);
    thunk_FUN_1004e439c(&local_c0,uVar6);
    break;
  case 3:
    uVar6 = FUN_100491adc();
    lVar5 = FUN_100491c18(uVar6,param_4);
    uVar10 = FUN_1004e0150(*(undefined8 *)(lVar5 + 8),0);
    thunk_FUN_1004e439c(&local_c0,uVar10);
    lVar5 = FUN_100345d90(param_3);
    lVar5 = *(long *)(lVar5 + 0x38);
    uVar10 = 1;
    if (*(int *)(lVar5 + 0xd0) == iVar4) {
LAB_100072e1c:
      FUN_100491c24(param_1,uVar6,param_4,&local_c0,uVar10);
      ppppppuVar12 = (undefined8 ******)local_78[0];
      if (-1 < local_61) {
        ppppppuVar12 = local_78;
      }
      goto LAB_100072e5c;
    }
    if (*(int *)(lVar5 + 0xd4) == iVar4) {
      uVar10 = 2;
      goto LAB_100072e1c;
    }
    if (*(int *)(lVar5 + 0xd8) == iVar4) {
      uVar10 = 3;
      goto LAB_100072e1c;
    }
    goto LAB_100072ec0;
  case 4:
    uVar10 = FUN_100491adc();
    lVar5 = FUN_100491c18(uVar10,param_4);
    uVar6 = FUN_1004e0150(*(undefined8 *)(lVar5 + 8),0);
    thunk_FUN_1004e439c(&local_c0,uVar6);
    lVar5 = FUN_100345d90(param_3);
    lVar5 = *(long *)(lVar5 + 0x40);
    fVar14 = *(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0)
    ;
    NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar5 + 0x1a0),DAT_101dc4a10);
    fVar14 = *(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0xf4) * (*(float *)(lVar5 + 0x25c) + 1.0)
    ;
    NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar5 + 0x1a8),DAT_101dc4a18);
    if (DAT_101dc4958 == 0.0) {
      fVar14 = *(float *)(lVar5 + 0xe4) +
               *(float *)(lVar5 + 0x198) * (*(float *)(lVar5 + 0x300) + 1.0);
      fVar15 = (float)NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar5 + 0x24c),DAT_101dc4abc);
      fVar14 = DAT_101dc49f8._4_4_;
      if (DAT_101dc49f8._4_4_ <= fVar15) {
        fVar14 = fVar15;
      }
      fVar15 = 0.0;
      if (0.0 < fVar14) {
        pfVar13 = (float *)(lVar5 + 0x314);
        goto LAB_100072d9c;
      }
    }
    else {
      pfVar13 = (float *)(lVar5 + 0x310);
      fVar14 = DAT_101dc4958;
LAB_100072d9c:
      fVar15 = (*pfVar13 * 100.0) / fVar14;
    }
    param_1 = (ulong)(uint)(int)((*(float *)(lVar5 + 0x308) * 100.0) / DAT_101dc4950);
    param_6 = (ulong)(uint)(int)fVar15;
    break;
  default:
    goto switchD_100072a1c_default;
  }
  FUN_100491c24(param_1,uVar10,param_4,&local_c0,param_6);
  ppppppuVar12 = (undefined8 ******)local_78[0];
  if (-1 < local_61) {
    ppppppuVar12 = local_78;
  }
LAB_100072e5c:
  bVar1 = true;
LAB_100072e7c:
  iVar2 = FUN_100071e38(param_2,ppppppuVar12,0,&local_c0,"",1,1,bVar1,bVar1,0xffffffff,0xffffffff,0)
  ;
  if (iVar2 != 0) {
    lVar5 = *(long *)(*(long *)(param_2 + 0x188) + (ulong)(*(int *)(param_2 + 0x180) - 1) * 8);
    *(uint *)(lVar5 + 0x96c) = *(uint *)(lVar5 + 0x96c) | 4;
    *(uint *)(lVar5 + 0xc3c) = *(uint *)(lVar5 + 0xc3c) & 0xfffffffb;
    *(byte *)(lVar5 + 0xf58) = *(byte *)(lVar5 + 0xf58) & 0xfb;
    *(undefined4 *)(lVar5 + 0x158) = 0x40600000;
  }
LAB_100072ec0:
  if (local_b8 != (void *)0x0) {
LAB_100072ec8:
    operator_delete__(local_b8);
  }
switchD_100072a1c_default:
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return;
}




long * FUN_100072efc(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                    undefined4 param_6,undefined4 param_7,byte param_8,char param_9,
                    undefined4 param_10,undefined4 param_11,char param_12)

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
  ulong uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  undefined1 auStack_78 [8];
  void *local_70;
  
  puVar16 = (undefined8 *)FUN_100655644();
  *puVar16 = &PTR_thunk_FUN_100074120_10144e110;
  *(undefined4 *)(puVar16 + 0x2b) = 0x40a00000;
  *(undefined4 *)((long)puVar16 + 0x15c) = param_6;
  *(undefined4 *)(puVar16 + 0x2c) = param_7;
  puVar16 = puVar16 + 0x2d;
  FUN_1006421a8(puVar16);
  param_1[0x2d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar18 = param_1 + 0x3e;
  thunk_FUN_100652c08(plVar18);
  plVar1 = param_1 + 0x5c;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x7a;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x98;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xb6;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xd4;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xf2;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x11d;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0x13b;
  thunk_FUN_100652c08(plVar8);
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0x177;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x195;
  FUN_100653ff8();
  plVar11 = param_1 + 0x1b6;
  thunk_FUN_100650e64();
  if (param_2 == 0) {
    FUN_10003330c(param_1 + 0x1dc,&DAT_101d91198);
  }
  else {
    FUN_10001549c(param_1 + 0x1dc,param_2);
  }
  if (param_3 == 0) {
    FUN_10003330c(param_1 + 0x1df,&DAT_101d91198);
  }
  else {
    FUN_10001549c();
  }
  plVar17 = param_1 + 0x1e2;
  FUN_10003330c(plVar17,param_5);
  FUN_10003330c(param_1 + 0x1e5,param_5 + 0x18);
  *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_5 + 0x30);
  *(undefined4 *)(param_1 + 0x1e9) = param_10;
  *(undefined4 *)((long)param_1 + 0xf4c) = param_11;
  param_1[0x1ea] = 0xff000000;
  bVar20 = 2;
  if (param_9 == '\0') {
    bVar20 = 0;
  }
  bVar21 = 8;
  if (param_12 == '\0') {
    bVar21 = 0;
  }
  *(byte *)(param_1 + 0x1eb) = bVar20 | param_8 | bVar21 | *(byte *)(param_1 + 0x1eb) & 0xf0 | 4;
  (**(code **)(*param_1 + 0x78))(param_1,puVar16,1);
  FUN_100642bd8(puVar16,plVar18,1);
  FUN_100642bd8(puVar16,plVar1,1);
  FUN_100642bd8(puVar16,plVar2,1);
  FUN_100642bd8(puVar16,plVar3,1);
  if ((*(byte *)(param_1 + 0x1eb) >> 3 & 1) != 0) {
    FUN_100642bd8(puVar16,plVar4,1);
    FUN_100642bd8(puVar16,plVar5,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_100655930(plVar6,param_1 + 0x159,1);
  FUN_100655930(plVar6,plVar11,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,plVar8,1);
  FUN_100655930(plVar6,plVar9,1);
  FUN_100655930(plVar6,plVar10,1);
  *(uint *)((long)param_1 + 0x96c) = *(uint *)((long)param_1 + 0x96c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xc3c) = *(uint *)((long)param_1 + 0xc3c) & 0xfffffffb;
  uVar19 = (*(uint *)(param_1 + 0x1e9) & 0xff00ff00) >> 8 |
           (*(uint *)(param_1 + 0x1e9) & 0xff00ff) << 8;
  if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0xffffffff) {
    FUN_100652dd4(plVar8,param_1 + 0x1e9,2);
  }
  uVar19 = (*(uint *)((long)param_1 + 0xf4c) & 0xff00ff00) >> 8 |
           (*(uint *)((long)param_1 + 0xf4c) & 0xff00ff) << 8;
  if ((uVar19 >> 0x10 | uVar19 << 0x10) != 0xffffffff) {
    FUN_100652dd4(plVar10,(long)param_1 + 0xf4c,2);
  }
  FUN_100652cac(plVar18,PTR_s_build___HUDPartsCommon_atlas_10184e098,"capsule_button_fill_left");
  FUN_100652dd4(plVar18,&DAT_10115a164,2);
  uVar19 = *(uint *)((long)param_1 + 0x274);
  if ((uVar19 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x274) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2c80;
    FUN_1000200a0(plVar18);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"capsule_button_fill_left");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  uVar19 = *(uint *)((long)param_1 + 0x634);
  if ((uVar19 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x634) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2c80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"capsule_button_left");
  FUN_100652dd4(plVar2,&DAT_10115a168,2);
  uVar19 = *(uint *)((long)param_1 + 0x454);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x454) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0x83) != *(float *)(param_1 + 0x47)) ||
     (*(float *)((long)param_1 + 0x41c) != *(float *)((long)param_1 + 0x23c))) {
    *(float *)(param_1 + 0x83) = *(float *)(param_1 + 0x47);
    *(float *)((long)param_1 + 0x41c) = *(float *)((long)param_1 + 0x23c);
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"capsule_button_left");
  FUN_100652dd4(plVar5,&DAT_10115a168,2);
  uVar19 = *(uint *)((long)param_1 + 0x724);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x724) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  if ((*(float *)(param_1 + 0xdd) != *(float *)(param_1 + 0x47)) ||
     (*(float *)((long)param_1 + 0x6ec) != *(float *)((long)param_1 + 0x23c))) {
    *(float *)(param_1 + 0xdd) = *(float *)(param_1 + 0x47);
    *(float *)((long)param_1 + 0x6ec) = *(float *)((long)param_1 + 0x23c);
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar19 = *(uint *)((long)param_1 + 0x364);
  if ((uVar19 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x364) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2c80;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"capsule_button_middle");
  FUN_100652dd4(plVar3,&DAT_10115a168,2);
  uVar19 = *(uint *)((long)param_1 + 0x544);
  if ((uVar19 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x544) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100651594(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  FUN_10065165c(plVar11,1);
  FUN_1006516bc(plVar11,&DAT_10115a164);
  *(uint *)((long)param_1 + 0xe34) = *(uint *)((long)param_1 + 0xe34) & 0xfffffffb;
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  puVar14 = &DAT_101dc47dc;
  if ((*(byte *)(param_1 + 0x1eb) & 2) != 0) {
    puVar14 = &DAT_101dc47d8;
  }
  FUN_100652dd4(plVar9,puVar14,2);
  uVar12 = *(ulong *)(param_5 + 0x20);
  if (-1 < (char)*(byte *)(param_5 + 0x2f)) {
    uVar12 = (ulong)*(byte *)(param_5 + 0x2f);
  }
  if (uVar12 == 0) {
    *(uint *)((long)param_1 + 0xd2c) = *(uint *)((long)param_1 + 0xd2c) & 0xfffffffb;
    uVar19 = *(uint *)((long)param_1 + 0xc3c) & 0xfffffffb;
  }
  else {
    if (*(char *)((long)param_1 + 0xf27) < '\0') {
      plVar17 = (long *)*plVar17;
    }
    FUN_100652ca4(plVar10,plVar17);
    plVar18 = param_1 + 0x1e5;
    if (*(char *)((long)param_1 + 0xf3f) < '\0') {
      plVar18 = (long *)*plVar18;
    }
    thunk_FUN_100652cdc(plVar10,plVar18);
    pcVar13 = "white_background";
    if ((char)param_1[0x1e8] != '\0') {
      pcVar13 = "circle_button_fill";
    }
    FUN_10065403c(plVar10,PTR_s_build___HUDPartsCommon_atlas_10184e098,pcVar13);
    FUN_100652dfc(plVar10,0xb);
    *(uint *)((long)param_1 + 0xd2c) = *(uint *)((long)param_1 + 0xd2c) | 4;
    uVar19 = *(uint *)((long)param_1 + 0xc3c) | 4;
  }
  *(uint *)((long)param_1 + 0xc3c) = uVar19;
  if (param_3 != 0) {
    FUN_100652cac(param_1 + 0x159,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  }
  iVar15 = FUN_1004e36c0(param_4,&DAT_101d91650);
  if (iVar15 != 0) {
    FUN_100073704(param_1,param_4);
  }
  if (1 < (int)param_1[0x2c]) {
    FUN_1004e313c(auStack_78);
    FUN_1004e38ac(auStack_78,"x%d");
    FUN_100073704(param_1,auStack_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  if (param_2 == 0) {
    *(uint *)((long)param_1 + 0xa5c) = *(uint *)((long)param_1 + 0xa5c) & 0xfffffffb;
    uVar19 = *(uint *)((long)param_1 + 0x96c) & 0xfffffffb;
  }
  else {
    FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
    puVar14 = &DAT_101dc47dc;
    if ((*(byte *)(param_1 + 0x1eb) & 1) != 0) {
      puVar14 = &DAT_101dc47d8;
    }
    FUN_100652dd4(plVar7,puVar14,2);
    FUN_100652ca4(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    thunk_FUN_100652cdc(plVar8,param_2);
    *(uint *)((long)param_1 + 0xa5c) = *(uint *)((long)param_1 + 0xa5c) | 4;
    uVar19 = *(uint *)((long)param_1 + 0x96c) | 4;
  }
  *(uint *)((long)param_1 + 0x96c) = uVar19;
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_100073704(long *param_1)

{
  FUN_1006513c0(param_1 + 0x1b6);
  *(uint *)((long)param_1 + 0xe34) = *(uint *)((long)param_1 + 0xe34) | 4;
  *(uint *)((long)param_1 + 0xb4c) = *(uint *)((long)param_1 + 0xb4c) & 0xfffffffb;
  FUN_10065176c(param_1 + 0x1b6);
                    /* WARNING: Could not recover jumptable at 0x000100073754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_100073758(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_78 [4];
  int local_74;
  
  lVar9 = *(long *)(param_1 + 0xaa8);
  lVar10 = *(long *)(param_1 + 0xd78);
  lVar1 = param_1 + 0xac8;
  bVar7 = false;
  if ((*(float *)(param_1 + 0xb18) == (float)DAT_101873a40) &&
     (bVar7 = false, !NAN(*(float *)(param_1 + 0xb1c)) && !NAN(DAT_101873a40._4_4_))) {
    bVar7 = *(float *)(param_1 + 0xb1c) == DAT_101873a40._4_4_;
  }
  if (!bVar7) {
    *(ulong *)(param_1 + 0xb18) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar1);
  }
  lVar2 = param_1 + 0xdb0;
  bVar7 = false;
  if ((*(float *)(param_1 + 0xe00) == (float)DAT_101873a40) &&
     (bVar7 = false, !NAN(*(float *)(param_1 + 0xe04)) && !NAN(DAT_101873a40._4_4_))) {
    bVar7 = *(float *)(param_1 + 0xe04) == DAT_101873a40._4_4_;
  }
  if (!bVar7) {
    *(ulong *)(param_1 + 0xe00) = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(lVar2);
  }
  lVar3 = param_1 + 0x9d8;
  if (((*(byte *)(param_1 + 0xe34) >> 2 & 1) != 0) &&
     (fVar11 = (float)FUN_100651184(lVar2), 550.0 < fVar11)) {
    FUN_1000f2e00(0x44098000,0x43160000,lVar2);
  }
  lVar4 = param_1 + 0xca8;
  lVar5 = param_1 + 0x8e8;
  fVar11 = 96.0;
  FUN_10064e47c(0x42c00000,0x42c00000,lVar5);
  lVar6 = param_1 + 3000;
  FUN_10064e47c(0x42c00000,lVar6);
  if (lVar9 != 0) {
    fVar12 = (float)FUN_1006531b0(lVar3);
    FUN_1006531b0(lVar3);
    if (fVar12 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar12 = 84.0 / fVar12;
    fVar11 = *(float *)(param_1 + 0xa20);
    bVar7 = false;
    if ((fVar11 == fVar12) && (bVar7 = false, !NAN(*(float *)(param_1 + 0xa24)) && !NAN(fVar12))) {
      bVar7 = *(float *)(param_1 + 0xa24) == fVar12;
    }
    if (!bVar7) {
      *(float *)(param_1 + 0xa20) = fVar12;
      *(float *)(param_1 + 0xa24) = fVar12;
      FUN_1000200a0(lVar3);
    }
  }
  if (lVar10 != 0) {
    fVar12 = (float)FUN_1006531b0(lVar4);
    FUN_1006531b0(lVar4);
    if (fVar12 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar12 = 84.0 / fVar12;
    bVar7 = false;
    if ((*(float *)(param_1 + 0xcf0) == fVar12) &&
       (bVar7 = false, !NAN(*(float *)(param_1 + 0xcf4)) && !NAN(fVar12))) {
      bVar7 = *(float *)(param_1 + 0xcf4) == fVar12;
    }
    if (!bVar7) {
      *(float *)(param_1 + 0xcf0) = fVar12;
      *(float *)(param_1 + 0xcf4) = fVar12;
      FUN_1000200a0(lVar4);
    }
  }
  if ((*(byte *)(param_1 + 0xe34) >> 2 & 1) == 0) {
    FUN_10064e5ec(0xc2200000,0,lVar5,5,lVar1,8);
    FUN_10064e5ec(0x42200000,0,lVar6,7,lVar1,8);
  }
  else {
    FUN_10064e72c(0xc1c00000,lVar5,1,lVar2,3);
    FUN_10064e72c(0,lVar5,5,lVar2,5);
    FUN_10064e72c(0x41c00000,lVar6,3,lVar2,1);
    FUN_10064e72c(0,lVar6,5,lVar2,5);
  }
  FUN_10064e5ec(0,0,lVar3,8,lVar5,8);
  FUN_10064e5ec(0,0,lVar4,8,lVar6,8);
  if ((*(byte *)(param_1 + 0xe34) >> 2 & 1) != 0) {
    uVar8 = (uint)(lVar9 != 0);
    *(uint *)(param_1 + 0xa5c) =
         *(uint *)(param_1 + 0xa5c) & 0xffffff80 | *(uint *)(param_1 + 0xa5c) & 0x3f | uVar8 << 6;
    *(uint *)(param_1 + 0x96c) =
         *(uint *)(param_1 + 0x96c) & 0xffffff80 | *(uint *)(param_1 + 0x96c) & 0x3f | uVar8 << 6;
    uVar8 = (uint)(lVar10 != 0);
    *(uint *)(param_1 + 0xd2c) =
         *(uint *)(param_1 + 0xd2c) & 0xffffff80 | *(uint *)(param_1 + 0xd2c) & 0x3f | uVar8 << 6;
    *(uint *)(param_1 + 0xc3c) =
         *(uint *)(param_1 + 0xc3c) & 0xffffff80 | *(uint *)(param_1 + 0xc3c) & 0x3f | uVar8 << 6;
  }
  lVar1 = param_1 + 0x790;
  FUN_1006557ec(lVar1);
  fVar11 = (float)FUN_10064e3cc(lVar1);
  if ((*(byte *)(param_1 + 0xf58) >> 3 & 1) == 0) {
    FUN_10016ae00(&local_74,0,auStack_78,0);
    fVar11 = fVar11 + -26.0 + (float)local_74;
  }
  else {
    fVar11 = fVar11 + -64.0;
  }
  lVar9 = param_1 + 0x2e0;
  FUN_10064e47c(fVar11,0x42e00000,lVar9);
  FUN_10064e47c(fVar11,0x42f00000,param_1 + 0x4c0);
  lVar10 = param_1 + 0x1f0;
  *(byte *)(param_1 + 0x2c8) = *(byte *)(param_1 + 0x2c8) & 0xfe;
  *(byte *)(param_1 + 0x4a8) = *(byte *)(param_1 + 0x4a8) & 0xfe;
  lVar2 = param_1 + 0x5b0;
  *(byte *)(param_1 + 0x688) = *(byte *)(param_1 + 0x688) | 1;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) | 1;
  FUN_10064e5ec(0x42180000,0,lVar9,7,lVar1,7);
  FUN_10064e5ec(0,0,param_1 + 0x4c0,8,lVar9,8);
  FUN_10064ed30(0x42f00000,lVar10);
  FUN_10064ed30(0x42f00000,param_1 + 0x3d0);
  FUN_10064ed30(0x42f00000,lVar2);
  FUN_10064ed30(0x42f00000,param_1 + 0x6a0);
  FUN_10064e72c(0x80000000,lVar10,1,lVar9,3);
  FUN_10064e72c(0,lVar10,5,lVar9,5);
  FUN_10064e72c(0,lVar2,3,lVar9,1);
  FUN_10064e72c(0,lVar2,5,lVar9,5);
  FUN_10064e5ec(0,0,param_1 + 0x3d0,8,lVar10,8);
  FUN_10064e5ec(0,0,param_1 + 0x6a0,8,lVar2,8);
  FUN_1006557ec(param_1);
  return;
}




byte FUN_100073c14(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6,byte param_7,uint *param_8,uint *param_9)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  pcVar12 = (char *)(param_1 + 0xee0);
  bVar10 = *(byte *)(param_1 + 0xef7);
  uVar13 = (ulong)bVar10;
  if (param_2 == (char *)0x0) {
    sVar1 = *(size_t *)(param_1 + 0xee8);
    if (-1 < (char)bVar10) {
      sVar1 = uVar13;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pcVar3 = *(char **)pcVar12;
      if (-1 < (char)bVar10) {
        pcVar3 = pcVar12;
      }
      pbVar15 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar15 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar10 < '\0') {
        if (sVar1 != 0) {
          iVar11 = _memcmp(pcVar3,pbVar15,sVar1);
          goto LAB_100073c64;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar15 != ((uint)*(char **)pcVar12 & 0xff)) goto LAB_100073d04;
        pbVar14 = (byte *)(param_1 + 0xee1);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          bVar8 = uVar13 == 0;
          if (uVar13 == 0) break;
          bVar10 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar10 == *pbVar15);
        goto LAB_100073d1c;
      }
      bVar8 = true;
    }
    else {
LAB_100073d04:
      bVar8 = false;
    }
  }
  else {
    if ((char)bVar10 < '\0') {
      pcVar12 = *(char **)pcVar12;
    }
    iVar11 = _strcmp(param_2,pcVar12);
LAB_100073c64:
    bVar8 = iVar11 == 0;
  }
LAB_100073d1c:
  pcVar12 = (char *)(param_1 + 0xef8);
  bVar10 = *(byte *)(param_1 + 0xf0f);
  uVar13 = (ulong)bVar10;
  if (param_3 != (char *)0x0) {
    if ((char)bVar10 < '\0') {
      pcVar12 = *(char **)pcVar12;
    }
    iVar11 = _strcmp(param_3,pcVar12);
LAB_100073d38:
    bVar9 = iVar11 == 0;
    goto LAB_100073df0;
  }
  sVar1 = *(size_t *)(param_1 + 0xf00);
  if (-1 < (char)bVar10) {
    sVar1 = uVar13;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pcVar3 = *(char **)pcVar12;
    if (-1 < (char)bVar10) {
      pcVar3 = pcVar12;
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar10 < '\0') {
      if (sVar1 != 0) {
        iVar11 = _memcmp(pcVar3,pbVar15,sVar1);
        goto LAB_100073d38;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar15 == ((uint)*(char **)pcVar12 & 0xff)) {
        pbVar14 = (byte *)(param_1 + 0xef9);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          bVar9 = uVar13 == 0;
          if (uVar13 == 0) break;
          bVar10 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar10 == *pbVar15);
        goto LAB_100073df0;
      }
      goto LAB_100073dd8;
    }
    bVar9 = true;
  }
  else {
LAB_100073dd8:
    bVar9 = false;
  }
LAB_100073df0:
  iVar11 = FUN_100073e88(param_5,param_1 + 0xf10);
  if (((bool)(bVar8 & bVar9) && iVar11 != 0) && (((*(byte *)(param_1 + 0xf58) & 1) == 0) != param_6)
     ) {
    uVar4 = (*(uint *)(param_1 + 0xf48) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0xf48) & 0xff00ff) << 8;
    uVar5 = (*param_8 & 0xff00ff00) >> 8 | (*param_8 & 0xff00ff) << 8;
    uVar6 = (*(uint *)(param_1 + 0xf4c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0xf4c) & 0xff00ff) << 8;
    uVar7 = (*param_9 & 0xff00ff00) >> 8 | (*param_9 & 0xff00ff) << 8;
    bVar10 = ((*(byte *)(param_1 + 0xf58) & 2) == 0 ^ param_7) &
             (uVar4 >> 0x10 | uVar4 << 0x10) == (uVar5 >> 0x10 | uVar5 << 0x10) &
             (uVar6 >> 0x10 | uVar6 << 0x10) == (uVar7 >> 0x10 | uVar7 << 0x10);
  }
  else {
    bVar10 = 0;
  }
  return bVar10;
}




byte FUN_100073e88(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  bVar3 = param_1[0x17];
  uVar8 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar8;
  }
  bVar4 = param_2[0x17];
  sVar2 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (sVar1 == sVar2) {
    pbVar9 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar9 = param_1;
    }
    pbVar10 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar10 = param_2;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 == 0) goto LAB_100073f4c;
      iVar7 = _memcmp(pbVar9,pbVar10,sVar1);
      bVar5 = iVar7 == 0;
    }
    else if (sVar1 == 0) {
LAB_100073f4c:
      bVar5 = true;
    }
    else {
      pbVar9 = param_1;
      if ((uint)*pbVar10 != ((uint)*(byte **)param_1 & 0xff)) goto LAB_100073f30;
      do {
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
        pbVar9 = pbVar9 + 1;
        bVar5 = uVar8 == 0;
        if (uVar8 == 0) break;
      } while (*pbVar9 == *pbVar10);
    }
  }
  else {
LAB_100073f30:
    bVar5 = false;
  }
  bVar3 = param_1[0x2f];
  uVar8 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 0x20);
  if (-1 < (char)bVar3) {
    sVar1 = uVar8;
  }
  bVar4 = param_2[0x2f];
  sVar2 = *(size_t *)(param_2 + 0x20);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (sVar1 == sVar2) {
    pbVar10 = *(byte **)(param_1 + 0x18);
    pbVar9 = pbVar10;
    if (-1 < (char)bVar3) {
      pbVar9 = param_1 + 0x18;
    }
    pbVar11 = *(byte **)(param_2 + 0x18);
    if (-1 < (char)bVar4) {
      pbVar11 = param_2 + 0x18;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 != 0) {
        iVar7 = _memcmp(pbVar9,pbVar11,sVar1);
        bVar6 = iVar7 == 0;
        goto LAB_100074008;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar11 == ((uint)pbVar10 & 0xff)) {
        pbVar9 = param_1 + 0x19;
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          bVar6 = uVar8 == 0;
          if (uVar8 == 0) break;
          bVar3 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar3 == *pbVar11);
        goto LAB_100074008;
      }
      goto LAB_100073fe8;
    }
    bVar6 = true;
  }
  else {
LAB_100073fe8:
    bVar6 = false;
  }
LAB_100074008:
  return bVar5 & bVar6;
}




void FUN_10007401c(uint *param_1,undefined8 *param_2)

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
    FUN_100074340(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10007409c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void thunk_FUN_100074120(void)

{
  FUN_100074120();
  return;
}




void FUN_10007410c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100074120();
  operator_delete(pvVar1);
  return;
}




void FUN_100074120(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100074120_10144e110;
  if (*(char *)((long)param_1 + 0xf3f) < '\0') {
    operator_delete((void *)param_1[0x1e5]);
  }
  if (*(char *)((long)param_1 + 0xf27) < '\0') {
    operator_delete((void *)param_1[0x1e2]);
  }
  if (*(char *)((long)param_1 + 0xf0f) < '\0') {
    operator_delete((void *)param_1[0x1df]);
  }
  if (*(char *)((long)param_1 + 0xef7) < '\0') {
    operator_delete((void *)param_1[0x1dc]);
  }
  thunk_FUN_100651068(param_1 + 0x1b6);
  param_1[0x195] = &PTR_FUN_1014a77a8;
  param_1[0x1ac] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x1b3);
  param_1[0x195] = &PTR_FUN_1014a7108;
  param_1[0x1ac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1af);
  FUN_10064e2bc(param_1 + 0x195);
  param_1[0x177] = &PTR_FUN_1014a7108;
  param_1[0x18e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x191);
  FUN_10064e2bc(param_1 + 0x177);
  param_1[0x159] = &PTR_FUN_1014a7108;
  param_1[0x170] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x173);
  FUN_10064e2bc(param_1 + 0x159);
  param_1[0x13b] = &PTR_FUN_1014a7108;
  param_1[0x152] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x155);
  FUN_10064e2bc(param_1 + 0x13b);
  param_1[0x11d] = &PTR_FUN_1014a7108;
  param_1[0x134] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x137);
  FUN_10064e2bc(param_1 + 0x11d);
  param_1[0xf2] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x109);
  FUN_10064e2bc(param_1 + 0xf2);
  param_1[0xd4] = &PTR_FUN_1014a7108;
  param_1[0xeb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xee);
  FUN_10064e2bc(param_1 + 0xd4);
  param_1[0xb6] = &PTR_FUN_1014a7108;
  param_1[0xcd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd0);
  FUN_10064e2bc(param_1 + 0xb6);
  param_1[0x98] = &PTR_FUN_1014a7108;
  param_1[0xaf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb2);
  FUN_10064e2bc(param_1 + 0x98);
  param_1[0x7a] = &PTR_FUN_1014a7108;
  param_1[0x91] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x94);
  FUN_10064e2bc(param_1 + 0x7a);
  param_1[0x5c] = &PTR_FUN_1014a7108;
  param_1[0x73] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x76);
  FUN_10064e2bc(param_1 + 0x5c);
  param_1[0x3e] = &PTR_FUN_1014a7108;
  param_1[0x55] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x58);
  FUN_10064e2bc(param_1 + 0x3e);
  FUN_10064221c(param_1 + 0x2d);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100074340(uint *param_1,uint param_2)

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




void FUN_1000743bc(void)

{
  if ((DAT_10184dea8 & 1) == 0) {
    DAT_10184dea0 = DAT_101872e38;
    DAT_10184dea8 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000743e8(void)

{
  DAT_101dc47c0 = 0xff;
  DAT_101dc47c2 = 0xffff;
  DAT_101dc47c4 = 0xffff;
  DAT_101dc47c8 = 0x4326000041900000;
  DAT_101dc47d0 = 0x4326000041c00000;
  DAT_101dc47d8 = 0xffbc9c44;
  DAT_101dc47dc = 0xff1166f2;
  DAT_101dc47e0 = 0xffe0e0e0;
  DAT_101dc47e4 = 0xffa0a0a0;
  DAT_101dc47e8 = 0xff8c8c8c;
  DAT_101dc47ec = 0xff322213;
  DAT_101dc47f0 = 0xff091911;
  DAT_101dc47f4 = 0xff170c19;
  DAT_101dc47f8 = 0xff241a14;
  DAT_101dc47fc = 0xff14171c;
  DAT_101dc4800 = 0xff221911;
  DAT_101dc4804 = 0xff1a1416;
  DAT_101dc4808 = 0xff121414;
  DAT_101dc480c = 0xff1a1809;
  DAT_101dc4810 = 0xff141414;
  DAT_101dc4814 = 0xff141414;
  DAT_101dc4818 = 0xff2929c0;
  DAT_101dc481c = 0xff283082;
  DAT_101dc4820 = 0xff5262cc;
  DAT_101dc4824 = 0xff283082;
  DAT_101dc4828 = 0xff5262cc;
  DAT_101dc482c = 0xff745c42;
  DAT_101dc4830 = 0xff184155;
  DAT_101dc4834 = 0xff92665e;
  DAT_101dc4838 = 0xffbc9c44;
  DAT_101dc483c = 0xffbbae56;
  DAT_101dc4840 = 0xff8b7b01;
  DAT_101dc4844 = 0xff90b3ef;
  DAT_101dc4848 = 0xff728ebe;
  DAT_101dc484c = 0xff19459d;
  DAT_101dc4850 = 0xff9d877b;
  DAT_101dc4854 = 0xffcbb1a3;
  DAT_101dc4858 = 0xff3f6fb5;
  DAT_101dc485c = 0xffc5c5c5;
  DAT_101dc4860 = 0xff4fc1f1;
  DAT_101dc4864 = 0xff606060;
  DAT_101dc4868 = 0xffc5ff7b;
  DAT_101dc486c = 0xff5271eb;
  DAT_101dc4870 = 0xfffae076;
  DAT_101dc4874 = 0xff3ac8f6;
  DAT_101dc4878 = 0xffaaaaaa;
  DAT_101dc487c = 0xffe19400;
  DAT_101dc4880 = 0xffe19400;
  DAT_101dc4884 = 0xffe550b2;
  DAT_101dc4888 = 0xfff22ae8;
  DAT_101dc488c = 0xff005ae1;
  DAT_101dc4890 = 0xff1addfa;
  DAT_101dc4894 = 0xff2424b3;
  DAT_101dc4898 = 0xff2424b3;
  DAT_101dc489c = 0xff646464;
  DAT_101dc48a0 = 0xff92665e;
  DAT_101dc48a4 = 0xff646037;
  DAT_101dc48a8 = 0xffffffff;
  DAT_101dc48ac = 0xff1111a1;
  DAT_101dc48b0 = 0xff321ee1;
  DAT_101dc48b4 = 0xffc8c8c8;
  DAT_101dc48b8 = 0xff321ee1;
  DAT_101dc48bc = 0xff7fe801;
  DAT_101dc48c0 = 0xffffffff;
  DAT_101dc48c4 = 0xff6259b3;
  DAT_101dc48c8 = 0xff506e73;
  DAT_101dc48cc = 0xff9dbf86;
  DAT_101dc48d0 = 0xffa35244;
  DAT_101dc48d4 = 0xffca828e;
  DAT_101dc48d8 = 0xffa6a6a6;
  DAT_101dc48dc = 0xffa6a6a6;
  DAT_101dc48e0 = 0xffffffff;
  DAT_101dc48e4 = 0xff88ea2f;
  DAT_101dc48e8 = 0xff8c8c8c;
  DAT_101dc48ec = 0xffffb400;
  DAT_101dc48f0 = 0xffff00ff;
  DAT_101dc48f4 = 0xff00aded;
  DAT_101dc48f8 = 0xff33d3ff;
  DAT_101dc48fc = 0xff7fe801;
  DAT_101dc4900 = 0xff282828;
  DAT_101dc4904 = 0xfff0f0f0;
  DAT_101dc4908 = 0xffa4781e;
  DAT_101dc490c = 0xffa6654b;
  DAT_101dc4910 = 0xff93435b;
  DAT_101dc4914 = 0xff387f9c;
  DAT_101dc4918 = 0xffa3781e;
  DAT_101dc491c = 0xffffd18a;
  DAT_101dc4920 = 0xffff61f7;
  DAT_101dc4924 = 0xff5de1f2;
  DAT_101dc4928 = 0xff80eaff;
  DAT_101dc492c = 0xff32e00e;
  DAT_101dc4930 = 0xff5a3c10;
  DAT_101dc4934 = 0xff330b03;
  DAT_101dc4938 = 0xff33031d;
  DAT_101dc493c = 0xff032433;
  DAT_101dc4940 = 0xff9e8e8d;
  _DAT_101dc4a18 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a10 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4a28 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a20 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4a38 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a30 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4a48 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a40 = 0x7f7fffff7f7fffff;
  DAT_101dc4a50 = 0x7f7fffff;
  DAT_101dc4a54 = 0x7f7fffff;
  DAT_101dc4a58 = 0x7f7fffff;
  DAT_101dc4a5c = 0x3f800000;
  uRam0000000101dc4a68 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a60 = 0x7f7fffff7f7fffff;
  DAT_101dc4a70 = 0x7f7fffff;
  DAT_101dc4a74 = 0x3eb33333;
  uRam0000000101dc4a80 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a78 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4a90 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a88 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4aa0 = 0x7f7fffff7f7fffff;
  _DAT_101dc4a98 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4ab0 = 0x7f7fffff7f7fffff;
  _DAT_101dc4aa8 = 0x7f7fffff7f7fffff;
  DAT_101dc4ab8 = 0x7f7fffff;
  DAT_101dc4abc = 0x7f7fffff;
  DAT_101dc4ac0 = 0x7f7fffff;
  _DAT_101dc4958 = 0xff7fffffff7fffff;
  _DAT_101dc4950 = 0xff7fffffff7fffff;
  DAT_101dc4960 = 0;
  DAT_101dc4968 = 0;
  uRam0000000101dc4974 = 0xff7fffffff7fffff;
  _DAT_101dc496c = 0xff7fffffff7fffff;
  DAT_101dc497c = 0xff7fffff;
  DAT_101dc4980 = 0xff7fffff;
  DAT_101dc4984 = NEON_fmov(0xbf800000,4);
  DAT_101dc498c = 0x3f000000;
  DAT_101dc4990 = 0;
  DAT_101dc4998 = 0;
  uRam0000000101dc49a8 = 0xff7fffffff7fffff;
  _DAT_101dc49a0 = 0xff7fffffff7fffff;
  uRam0000000101dc49b8 = 0xff7fffffff7fffff;
  _DAT_101dc49b0 = 0xff7fffffff7fffff;
  uRam0000000101dc49c8 = 0xff7fffffff7fffff;
  _DAT_101dc49c0 = 0xff7fffffff7fffff;
  uRam0000000101dc49d8 = 0xbf800000bf800000;
  _DAT_101dc49d0 = 0xbf80000000000000;
  DAT_101dc49e0 = 0xbf800000;
  DAT_101dc49e4 = 0xff7fffff;
  DAT_101dc49e8 = 0xff7fffff;
  DAT_101dc49ec = 0xff7fffff;
  DAT_101dc49f0 = 0;
  DAT_101dc49f4 = 0xff7fffff;
  DAT_101dc49f8 = 0;
  DAT_101dc4a00 = 0;
  return;
}




long * FUN_100074b80(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10144e2b0;
  puVar6 = puVar6 + 0x17;
  FUN_1006421a8(puVar6);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  FUN_100653ff8(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_1006533a4(plVar2);
  plVar3 = param_1 + 0x69;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x87;
  thunk_FUN_100650e64(plVar4);
  FUN_1004e3004(param_1 + 0xad);
  *(undefined4 *)(param_1 + 0xae) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x574) = 0;
  *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) & 0xf0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  FUN_100642bd8(puVar6,plVar1,1);
  FUN_100642bd8(puVar6,plVar2,1);
  FUN_100642bd8(puVar6,plVar3,1);
  FUN_100642bd8(puVar6,plVar4,1);
  FUN_100652cac(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,"icon_item_empty");
  FUN_10065403c(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dfc(plVar1,0xb);
  if ((*(float *)(param_1 + 0x32) != 0.5) || (*(float *)((long)param_1 + 0x194) != 0.5)) {
    param_1[0x32] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x1c4) = *(uint *)((long)param_1 + 0x1c4) | 4;
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_buffs_overlay");
  if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.5)) {
    param_1[0x53] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100653464(plVar2,FUN_100074ef8,(long)param_1 + 0x574);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_buffs_outline");
  if ((*(float *)(param_1 + 0x73) != 0.5) || (*(float *)((long)param_1 + 0x39c) != 0.5)) {
    param_1[0x73] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100651700(plVar4,0);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  if ((*(float *)(param_1 + 0x91) != 0.5) || (*(float *)((long)param_1 + 0x48c) != 0.5)) {
    param_1[0x91] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 0x8f) != -1.0) || (*(float *)((long)param_1 + 0x47c) != 0.0)) {
    param_1[0x8f] = 0xbf800000;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x4bc) = *(uint *)((long)param_1 + 0x4bc) & 0xfffffffb;
  iVar5 = FUN_1001311fc();
  if (iVar5 != 0) {
    local_58 = DAT_101dbd458;
    local_80 = thunk_FUN_100075620;
    plVar1 = param_1 + 1;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&local_80);
    local_58 = DAT_101dbd484;
    local_80 = thunk_FUN_100075620;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&local_80);
    local_58 = DAT_101dbd460;
    local_80 = FUN_100074f90;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&local_80);
    local_58 = DAT_101dbd48c;
    local_80 = FUN_100074f90;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&local_80);
  }
  return param_1;
}




void FUN_100074ef8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"hud_buffs_overlay");
  FUN_1000625b0(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,param_1,param_2,uVar1,param_3,
                param_4,0,0);
  return;
}




void thunk_FUN_100075620(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_100131208();
  if ((uVar2 & 1) != 0) {
    FUN_1000755d0(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x578);
  *(byte *)(param_1 + 0x578) = bVar1 | 8;
  if ((bVar1 & 1) == 0) {
    FUN_1004e3004(param_1 + 0x568);
    *(byte *)(param_1 + 0x578) = *(byte *)(param_1 + 0x578) | 1;
  }
  return;
}




void FUN_100074f90(long param_1)

{
  *(byte *)(param_1 + 0x578) = *(byte *)(param_1 + 0x578) & 0xf7;
  return;
}




long * thunk_FUN_100074b80(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10144e2b0;
  puVar6 = puVar6 + 0x17;
  FUN_1006421a8(puVar6);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  FUN_100653ff8(plVar1);
  plVar2 = param_1 + 0x49;
  FUN_1006533a4(plVar2);
  plVar3 = param_1 + 0x69;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x87;
  thunk_FUN_100650e64(plVar4);
  FUN_1004e3004(param_1 + 0xad);
  *(undefined4 *)(param_1 + 0xae) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x574) = 0;
  *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) & 0xf0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  FUN_100642bd8(puVar6,plVar1,1);
  FUN_100642bd8(puVar6,plVar2,1);
  FUN_100642bd8(puVar6,plVar3,1);
  FUN_100642bd8(puVar6,plVar4,1);
  FUN_100652cac(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,"icon_item_empty");
  FUN_10065403c(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dfc(plVar1,0xb);
  if ((*(float *)(param_1 + 0x32) != 0.5) || (*(float *)((long)param_1 + 0x194) != 0.5)) {
    param_1[0x32] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x1c4) = *(uint *)((long)param_1 + 0x1c4) | 4;
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_buffs_overlay");
  if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.5)) {
    param_1[0x53] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100653464(plVar2,FUN_100074ef8,(long)param_1 + 0x574);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_buffs_outline");
  if ((*(float *)(param_1 + 0x73) != 0.5) || (*(float *)((long)param_1 + 0x39c) != 0.5)) {
    param_1[0x73] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100651700(plVar4,0);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
  if ((*(float *)(param_1 + 0x91) != 0.5) || (*(float *)((long)param_1 + 0x48c) != 0.5)) {
    param_1[0x91] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 0x8f) != -1.0) || (*(float *)((long)param_1 + 0x47c) != 0.0)) {
    param_1[0x8f] = 0xbf800000;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x4bc) = *(uint *)((long)param_1 + 0x4bc) & 0xfffffffb;
  iVar5 = FUN_1001311fc();
  if (iVar5 != 0) {
    uStack_58 = DAT_101dbd458;
    pcStack_80 = thunk_FUN_100075620;
    plVar1 = param_1 + 1;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&pcStack_80);
    uStack_58 = DAT_101dbd484;
    pcStack_80 = thunk_FUN_100075620;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&pcStack_80);
    uStack_58 = DAT_101dbd460;
    pcStack_80 = FUN_100074f90;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&pcStack_80);
    uStack_58 = DAT_101dbd48c;
    pcStack_80 = FUN_100074f90;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(plVar1,&pcStack_80);
  }
  return param_1;
}




void FUN_100074fa4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001311fc();
  if (iVar1 != 0) {
    FUN_100074fd8(param_1);
    return;
  }
  return;
}




void FUN_100074fd8(long param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x578);
  uVar5 = (uint)bVar1;
  if ((bVar1 >> 2 & 1) != 0) {
    uVar5 = bVar1 & 0xf0;
    *(char *)(param_1 + 0x578) = (char)uVar5;
  }
  if ((uVar5 >> 3 & 1) == 0) {
    return;
  }
  iVar2 = FUN_10109c574();
  if (iVar2 == 0) {
    uVar5 = FUN_10109c4f0();
  }
  else {
    iVar2 = FUN_10109c588();
    if (iVar2 == 0) goto LAB_100075090;
    puVar3 = (uint *)FUN_10109c59c(0);
    if ((int)*puVar3 < 0x10) goto LAB_100075090;
    uVar5 = *puVar3 & 1;
  }
  if (uVar5 != 0) {
    if ((*(byte *)(param_1 + 0x578) & 3) != 1) {
      return;
    }
    uVar4 = _mach_absolute_time();
    if ((double)((uVar4 - *(long *)(param_1 + 0x568)) * DAT_101d91638) * 1e-09 <= 1.0) {
      return;
    }
    *(byte *)(param_1 + 0x578) = *(byte *)(param_1 + 0x578) | 2;
    FUN_1000755d0(param_1);
    return;
  }
LAB_100075090:
  *(byte *)(param_1 + 0x578) = *(byte *)(param_1 + 0x578) | 4;
  return;
}




void FUN_1000750a8(undefined1 param_1 [16],float param_2,long *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  fVar4 = param_2;
  fVar3 = (float)FUN_100652e60(param_3 + 0x28);
  param_2 = param_2 / fVar4;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x31) == fVar2 / fVar3) &&
     (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x18c)) && !NAN(param_2))) {
    bVar1 = *(float *)((long)param_3 + 0x18c) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x31) = fVar2 / fVar3;
    *(float *)((long)param_3 + 0x18c) = param_2;
    FUN_1000200a0(param_3 + 0x28);
  }
  fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar4 = param_2;
  fVar3 = (float)FUN_100652e60(param_3 + 0x69);
  param_2 = param_2 / fVar4;
  if ((*(float *)(param_3 + 0x72) != fVar2 / fVar3) ||
     (*(float *)((long)param_3 + 0x394) != param_2)) {
    *(float *)(param_3 + 0x72) = fVar2 / fVar3;
    *(float *)((long)param_3 + 0x394) = param_2;
    FUN_1000200a0(param_3 + 0x69);
  }
  fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar4 = param_2;
  fVar3 = (float)FUN_100652e60(param_3 + 0x49);
  if ((*(float *)(param_3 + 0x52) == fVar2 / fVar3) &&
     (*(float *)((long)param_3 + 0x294) == param_2 / fVar4)) {
    return;
  }
  *(float *)(param_3 + 0x52) = fVar2 / fVar3;
  *(float *)((long)param_3 + 0x294) = param_2 / fVar4;
  FUN_1000200a0(param_3 + 0x49);
  return;
}




void FUN_1000751cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_c8 [16];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_1003a3644(param_3);
  if (lVar3 == 0) goto LAB_100075274;
  *(int *)(param_1 + 0x570) = (int)param_2;
  iVar2 = FUN_10046aecc(lVar3,param_2);
  if ((iVar2 == 0) || (iVar2 = FUN_10046aecc(lVar3,param_2), iVar2 == 1)) {
    puVar5 = (undefined8 *)PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0;
    uVar4 = FUN_10046aef0(lVar3,param_2);
    local_c8[0] = NEON_fmov(0x3f100000,4);
    puVar6 = local_c8;
LAB_100075264:
    FUN_100075304(param_1,puVar5,uVar4,puVar6);
  }
  else {
    iVar2 = FUN_10046aecc(lVar3,param_2);
    puVar1 = PTR_s_build___HUDPartsHero__s_png_10184e0b8;
    if (iVar2 == 2) {
      FUN_1004654a0(param_3);
      FUN_1004d2698(local_c8,puVar1);
      uVar4 = FUN_10046aef0(lVar3,param_2);
      puVar6 = &DAT_101873a38;
      puVar5 = local_c8;
      goto LAB_100075264;
    }
  }
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) | 4;
LAB_100075274:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100075304(long param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_1 + 0x140;
  if (*(long *)(param_1 + 0x210) != 0) {
    FUN_100652d8c(lVar1);
  }
  FUN_100652cac(lVar1,param_2,param_3);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x188) == *param_4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x18c)) && !NAN(param_4[1]))) {
    bVar2 = *(float *)(param_1 + 0x18c) == param_4[1];
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)param_4;
    FUN_1000200a0(lVar1);
    return;
  }
  return;
}




void FUN_100075398(long param_1)

{
  *(undefined4 *)(param_1 + 0x570) = 0xffffffff;
  *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) & 0xfffffffb;
  FUN_1006513c0(param_1 + 0x438,&DAT_101d91650);
  return;
}




void FUN_1000753c8(long param_1,int param_2)

{
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 < 1) {
    *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) & 0xfffffffb;
    if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
      FUN_1006513c0(param_1 + 0x438,&DAT_101d91650);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) | 4;
    FUN_1004d2698(auStack_30,"%d");
    FUN_1004e3120(auStack_40,auStack_30);
    FUN_1006513c0(param_1 + 0x438,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000754a0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(byte *)(param_1 + 0x578) = *(byte *)(param_1 + 0x578) & 0xef | (byte)uVar1;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffef | uVar1;
  return;
}




void FUN_1000754d0(undefined4 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0x574) = fVar1;
  return;
}




undefined4 FUN_1000754e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x570);
}




void FUN_1000754f0(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
  lVar1 = param_1 + 0xb8;
  if ((*(uint *)(param_1 + 0x13c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  lVar2 = DAT_101dbd2f8;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063fcac(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063fce0(0x3f800000,puVar4);
  FUN_10063f0e8(0x3ea8f5c3,puVar4);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,puVar4);
  return;
}




void FUN_1000755d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_BUFF_TOOLTIP_READY");
  FUN_100644aec(auStack_40,uVar1,*(undefined4 *)(param_1 + 0x570));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100075620(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_100131208();
  if ((uVar2 & 1) != 0) {
    FUN_1000755d0(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x578);
  *(byte *)(param_1 + 0x578) = bVar1 | 8;
  if ((bVar1 & 1) == 0) {
    FUN_1004e3004(param_1 + 0x568);
    *(byte *)(param_1 + 0x578) = *(byte *)(param_1 + 0x578) | 1;
  }
  return;
}




void FUN_100075678(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144e2b0;
  thunk_FUN_100651068(param_1 + 0x87);
  param_1[0x69] = &PTR_FUN_1014a7108;
  param_1[0x80] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x83);
  FUN_10064e2bc(param_1 + 0x69);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  param_1[0x28] = &PTR_FUN_1014a77a8;
  param_1[0x3f] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100075740(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144e2b0;
  thunk_FUN_100651068(param_1 + 0x87);
  param_1[0x69] = &PTR_FUN_1014a7108;
  param_1[0x80] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x83);
  FUN_10064e2bc(param_1 + 0x69);
  param_1[0x49] = &PTR_FUN_1014a7108;
  param_1[0x60] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 99);
  FUN_10064e2bc(param_1 + 0x49);
  param_1[0x28] = &PTR_FUN_1014a77a8;
  param_1[0x3f] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10007580c(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_10144e3f8;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = DAT_101dc0b88;
  thunk_FUN_1001ceb64(puVar4 + 0x1a,1);
  plVar6 = param_1 + 0x37;
  FUN_100269de4(plVar6);
  plVar1 = param_1 + 0x50;
  FUN_10064e264(plVar1);
  lVar7 = 0;
  do {
    thunk_FUN_100074b80((long)param_1 + lVar7 + 0x388);
    lVar7 = lVar7 + 0x580;
  } while (lVar7 != 0x2c00);
  *(byte *)(param_1 + 0x5f1) = *(byte *)(param_1 + 0x5f1) & 0xfc;
  uVar2 = FUN_1004d2524("HUD_Buffs");
  uVar3 = FUN_100015208("HUD_Buffs",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       (uVar3 & 0xffff) << 0xf | *(uint *)((long)param_1 + 0x84) & 0x80007fff | 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_100642bd8(plVar6,plVar1,1);
  FUN_100642bd8(plVar6,puVar4 + 0x1a,1);
  param_1[0x68] = -1;
  param_1[0x67] = -1;
  plVar6 = param_1 + 0x71;
  lVar7 = 8;
  do {
    FUN_100642bd8(plVar1,plVar6,1);
    local_80 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_80);
    *(uint *)((long)plVar6 + 0x84) = *(uint *)((long)plVar6 + 0x84) & 0xfffffffb;
    FUN_1000754d0(0,plVar6);
    plVar6 = plVar6 + 0xb0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar5 = FUN_1001311fc();
  if ((uVar5 & 1) != 0) {
    local_58 = FUN_100644a94("EVENT_BUFF_TOOLTIP_READY");
    local_80 = FUN_1000759d4;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(param_1 + 1,&local_80);
  }
  return param_1;
}




void FUN_1000759d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10007677c(param_1,param_4);
  return;
}




long * thunk_FUN_10007580c(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_10144e3f8;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = DAT_101dc0b88;
  thunk_FUN_1001ceb64(puVar4 + 0x1a,1);
  plVar6 = param_1 + 0x37;
  FUN_100269de4(plVar6);
  plVar1 = param_1 + 0x50;
  FUN_10064e264(plVar1);
  lVar7 = 0;
  do {
    thunk_FUN_100074b80((long)param_1 + lVar7 + 0x388);
    lVar7 = lVar7 + 0x580;
  } while (lVar7 != 0x2c00);
  *(byte *)(param_1 + 0x5f1) = *(byte *)(param_1 + 0x5f1) & 0xfc;
  uVar2 = FUN_1004d2524("HUD_Buffs");
  uVar3 = FUN_100015208("HUD_Buffs",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       (uVar3 & 0xffff) << 0xf | *(uint *)((long)param_1 + 0x84) & 0x80007fff | 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_100642bd8(plVar6,plVar1,1);
  FUN_100642bd8(plVar6,puVar4 + 0x1a,1);
  param_1[0x68] = -1;
  param_1[0x67] = -1;
  plVar6 = param_1 + 0x71;
  lVar7 = 8;
  do {
    FUN_100642bd8(plVar1,plVar6,1);
    pcStack_80 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&pcStack_80);
    *(uint *)((long)plVar6 + 0x84) = *(uint *)((long)plVar6 + 0x84) & 0xfffffffb;
    FUN_1000754d0(0,plVar6);
    plVar6 = plVar6 + 0xb0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar5 = FUN_1001311fc();
  if ((uVar5 & 1) != 0) {
    uStack_58 = FUN_100644a94("EVENT_BUFF_TOOLTIP_READY");
    pcStack_80 = FUN_1000759d4;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    plStack_78 = param_1;
    FUN_10001554c(param_1 + 1,&pcStack_80);
  }
  return param_1;
}




void FUN_1000759e0(long *param_1,long param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  float fVar8;
  undefined8 local_28;
  
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  param_1[0x17] = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  pbVar1 = (byte *)(param_1 + 0x5f1);
  bVar7 = 2;
  if ((param_3 & param_4) == 0) {
    bVar7 = 0;
  }
  *pbVar1 = bVar7 | (byte)param_3 | *pbVar1 & 0xfc;
  local_28 = 0x3f80000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_28);
  iVar4 = FUN_100075b30(param_1);
  if (iVar4 == 0) {
    fVar8 = *(float *)((long)param_1 + 0x54);
    bVar3 = false;
    if ((*(float *)(param_1 + 0x5a) == 0.5) &&
       (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x2d4)) && !NAN(fVar8))) {
      bVar3 = *(float *)((long)param_1 + 0x2d4) == fVar8;
    }
    if (bVar3) goto LAB_100075ab0;
    *(undefined4 *)(param_1 + 0x5a) = 0x3f000000;
    *(float *)((long)param_1 + 0x2d4) = fVar8;
  }
  else {
    bVar3 = false;
    if ((*(float *)(param_1 + 0x5a) == *(float *)(param_1 + 10)) &&
       (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x2d4)))) {
      bVar3 = *(float *)((long)param_1 + 0x2d4) == 0.5;
    }
    if (bVar3) goto LAB_100075ab0;
    *(float *)(param_1 + 0x5a) = *(float *)(param_1 + 10);
    *(undefined4 *)((long)param_1 + 0x2d4) = 0x3f000000;
  }
  FUN_1000200a0(param_1 + 0x50);
LAB_100075ab0:
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    if ((int)param_1[0x18] == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0) {
        lVar6 = FUN_1003e2814();
        param_1[0x19] = lVar6;
      }
    }
    else {
      param_1[0x17] = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
    }
  }
  if ((*pbVar1 & 1) != 0) {
    lVar6 = -0x2c00;
    do {
      *(uint *)((long)param_1 + lVar6 + 0x300c) = *(uint *)((long)param_1 + lVar6 + 0x300c) | 0x10;
      lVar6 = lVar6 + 0x580;
    } while (lVar6 != 0);
  }
  return;
}




undefined8 FUN_100075b30(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 0x2f88) & 1) == 0) && (uVar1 = FUN_100126a30(), (uVar1 & 1) != 0)) {
    return 1;
  }
  uVar2 = FUN_100060a70();
  return uVar2;
}




void FUN_100075b60(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 200) == 0) {
    plVar4 = *(long **)(param_1 + 0xb8);
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0xc0) == (int)plVar4[1]) {
        lVar5 = (**(code **)(*plVar4 + 0x10))();
        if ((lVar5 != 0) && (lVar5 = FUN_1003e2814(), lVar5 != 0)) {
          *(long *)(param_1 + 200) = lVar5;
          goto LAB_100075bd8;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
      }
    }
    if (*(long *)(param_1 + 200) == 0) goto LAB_100075d40;
  }
LAB_100075bd8:
  lVar5 = param_1 + 0x388;
  iVar1 = FUN_1003c2e80();
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      uVar6 = FUN_1003c2e88(*(undefined8 *)(param_1 + 200),uVar3);
      iVar1 = FUN_10046af5c(*(undefined8 *)(param_1 + 200),uVar6,*(byte *)(param_1 + 0x2f88) & 1);
      if (iVar1 != 0) {
        iVar1 = FUN_1000754e8(lVar5);
        if (iVar1 != (int)uVar6) {
          uVar7 = 0;
          lVar10 = param_1 + 0x908;
          do {
            uVar9 = uVar7;
            if (uVar9 == 7) break;
            iVar1 = FUN_1000754e8(lVar10);
            lVar10 = lVar10 + 0x580;
            uVar7 = uVar9 + 1;
          } while (iVar1 != (int)uVar6);
          if (6 < uVar9) {
            FUN_100075d5c(param_1,uVar6);
          }
        }
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_1003c2e80(*(undefined8 *)(param_1 + 200));
    } while (uVar3 < uVar2);
  }
  lVar10 = 0;
  do {
    uVar6 = FUN_1000754e8(lVar5);
    iVar1 = FUN_10034624c(*(undefined8 *)(param_1 + 200),uVar6);
    if ((iVar1 == 0) ||
       (uVar7 = FUN_10046af5c(*(undefined8 *)(param_1 + 200),uVar6,*(byte *)(param_1 + 0x2f88) & 1),
       (uVar7 & 1) == 0)) {
      FUN_100075eb8(param_1,lVar10);
    }
    else {
      uVar8 = FUN_1003c30e0(*(undefined8 *)(param_1 + 200),uVar6);
      uVar7 = FUN_10046af38(*(undefined8 *)(param_1 + 200),uVar6);
      if (((uVar7 & 1) != 0) ||
         ((uVar3 = FUN_10044c770(*(undefined8 *)(param_1 + 200),uVar6), uVar3 < 2 &&
          (uVar7 = FUN_10046af14(*(undefined8 *)(param_1 + 200),uVar6), (uVar7 & 1) == 0)))) {
        uVar8 = 0;
      }
      FUN_1000753c8(lVar5,uVar8);
      FUN_10046aff8(*(undefined8 *)(param_1 + 200),uVar6);
      FUN_1000754d0(lVar5);
    }
    lVar10 = lVar10 + 1;
    lVar5 = lVar5 + 0x580;
  } while (lVar10 != 8);
LAB_100075d40:
  FUN_100075f54(param_1);
  return;
}




void FUN_100075d5c(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != (int)plVar3[1]) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    return;
  }
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  if (lVar4 == 0) {
    return;
  }
  lVar8 = 0;
  lVar7 = param_1 + 0x388;
  while (iVar2 = FUN_1000754e8(lVar7), iVar2 != -1) {
    lVar8 = lVar8 + 1;
    lVar7 = lVar7 + 0x580;
    if (lVar8 == 8) {
      return;
    }
  }
  FUN_1000751cc(lVar7,param_2,lVar4);
  lVar4 = 0;
  pfVar6 = (float *)(param_1 + 0x348);
  do {
    if (*(short *)(param_1 + 0x338 + lVar4) == -1) {
      *(short *)(param_1 + lVar4 + 0x338) = (short)lVar8;
      bVar1 = false;
      if ((*(float *)(lVar7 + 0x40) == *pfVar6) &&
         (bVar1 = false, !NAN(*(float *)(lVar7 + 0x44)) && !NAN(pfVar6[1]))) {
        bVar1 = *(float *)(lVar7 + 0x44) == pfVar6[1];
      }
      if (!bVar1) {
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)pfVar6;
        FUN_1000200a0(lVar7);
      }
      break;
    }
    pfVar6 = pfVar6 + 2;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x10);
  *(uint *)(lVar7 + 0x84) = *(uint *)(lVar7 + 0x84) | 4;
  iVar2 = FUN_1001311fc();
  if ((iVar2 != 0) && (uVar5 = FUN_100131208(), (uVar5 & 1) == 0)) {
    *(uint *)(lVar7 + 0x84) = *(uint *)(lVar7 + 0x84) | 0x10;
  }
  if ((*(byte *)(param_1 + 0x2f88) & 1) == 0) {
    return;
  }
  FUN_1000754f0(lVar7);
  return;
}




void FUN_100075eb8(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1 + (ulong)param_2 * 0x580;
  FUN_100075398(lVar2 + 0x388);
  *(uint *)(lVar2 + 0x40c) = *(uint *)(lVar2 + 0x40c) & 0xfffffffb;
  FUN_1000753c8(lVar2 + 0x388,0);
  iVar1 = FUN_1001311fc();
  if (iVar1 != 0) {
    *(uint *)(lVar2 + 0x40c) = *(uint *)(lVar2 + 0x40c) & 0xffffffef;
  }
  lVar2 = 0;
  do {
    if ((int)*(short *)(param_1 + 0x338 + lVar2) == param_2) {
      *(undefined2 *)(param_1 + lVar2 + 0x338) = 0xffff;
      return;
    }
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x10);
  return;
}




void FUN_100075f54(long param_1)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  ushort *puVar6;
  
  FUN_100076a24();
  lVar5 = 0;
  puVar6 = (ushort *)(param_1 + 0x338);
  do {
    if ((-1 < (short)*puVar6) &&
       (iVar2 = FUN_1000754e8(param_1 + (ulong)*puVar6 * 0x580 + 0x388), iVar2 != -1)) {
      FUN_100642324(param_1 + (long)(short)*puVar6 * 0x580 + 0x388);
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
        FUN_10063fb5c(puVar4);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_10063fb90(puVar4,param_1 + 0x348 + lVar5);
      FUN_10063f0e8(0x3ea8f5c3,puVar4);
      FUN_10063f130(puVar4,FUN_100076a84);
      FUN_100642b14(param_1 + 0x388 + (long)(short)*puVar6 * 0x580,puVar4);
      FUN_1000750a8(param_1 + 0x388 + (long)(short)*puVar6 * 0x580);
    }
    puVar6 = puVar6 + 1;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x40);
  return;
}




void FUN_1000760c0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x2f88) & 3) == 0) {
    iVar1 = FUN_100075b30();
    if (iVar1 == 0) {
      FUN_100076534(param_1);
    }
    else {
      FUN_100076384(param_1);
    }
  }
  else {
    FUN_10007612c();
  }
  param_1 = param_1 + 0x388;
  lVar2 = 8;
  do {
    FUN_1000750a8(param_1);
    param_1 = param_1 + 0x580;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}




void FUN_10007612c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float local_78;
  float fStack_74;
  
  plVar1 = param_1 + 0x50;
  fVar8 = (float)(**(code **)(*param_1 + 0x50))();
  fVar12 = 0.95;
  (**(code **)(*param_1 + 0x50))(param_1);
  fVar12 = fVar12 * 0.98;
  FUN_10064e47c(fVar8 * 0.95,plVar1);
  fVar8 = (float)(**(code **)(*param_1 + 0x50))(param_1);
  fVar9 = (float)FUN_10064259c(plVar1);
  fVar14 = (fVar8 - fVar9) * 0.5;
  (**(code **)(*param_1 + 0x50))(param_1);
  fVar8 = fVar12;
  FUN_10064259c(plVar1);
  fVar8 = (fVar12 - fVar8) * -0.5;
  fVar9 = *(float *)(param_1 + 0x58);
  bVar3 = false;
  if ((fVar9 == fVar14) && (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x2c4)) && !NAN(fVar8)))
  {
    bVar3 = *(float *)((long)param_1 + 0x2c4) == fVar8;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x58) = fVar14;
    *(float *)((long)param_1 + 0x2c4) = fVar8;
    FUN_1000200a0(plVar1);
  }
  FUN_10064259c(plVar1);
  fVar8 = (float)FUN_10064259c(plVar1);
  fVar9 = fVar9 * 0.125;
  fVar8 = fVar9 * fVar8;
  FUN_10064259c(plVar1);
  uVar13 = NEON_fminnm(fVar9 * 0.5,SQRT(fVar8));
  fVar8 = (float)FUN_10064259c(plVar1);
  local_78 = (float)NEON_fminnm(fVar8 * 0.25,uVar13);
  plVar4 = param_1 + 0x71;
  lVar5 = 8;
  fStack_74 = local_78;
  do {
    FUN_10064e48c(plVar4,&local_78);
    plVar4 = plVar4 + 0xb0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fVar9 = (float)FUN_10064259c(plVar1);
  fVar8 = local_78 * -4.0;
  fVar12 = 0.33333334;
  pfVar7 = (float *)(param_1 + 0x69);
  plVar4 = param_1 + 0x71;
  uVar6 = 0;
  do {
    if (uVar6 < 4) {
      if (uVar6 == 0) {
        fVar14 = local_78 * 0.5;
        FUN_10064259c(plVar1);
        *pfVar7 = fVar14;
        *(float *)((long)param_1 + 0x34c) = fVar12 * -0.25;
      }
      else {
LAB_100076300:
        uVar2 = (int)uVar6 - 1;
        fVar12 = *(float *)(param_1 + (ulong)uVar2 + 0x69);
        fVar10 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
        fVar11 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
        fVar12 = ABS(fVar12) + (fVar9 + fVar8) * 0.33333334;
        fVar14 = *(float *)((long)param_1 + (ulong)uVar2 * 8 + 0x34c);
        *pfVar7 = fVar12 + (fVar11 + fVar10) * 0.5;
        pfVar7[1] = fVar14;
      }
    }
    else {
      if (uVar6 != 4) goto LAB_100076300;
      fVar14 = local_78 * 0.5;
      FUN_10064259c(plVar1);
      *pfVar7 = fVar14;
      *(float *)((long)param_1 + 0x36c) = fVar12 * -0.75;
    }
    uVar6 = uVar6 + 1;
    pfVar7 = pfVar7 + 2;
    plVar4 = plVar4 + 0xb0;
    if (uVar6 == 8) {
      return;
    }
  } while( true );
}




void FUN_100076384(long *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float local_68;
  float fStack_64;
  
  iVar3 = FUN_100060a70();
  fVar8 = -1.0;
  fVar11 = -1.0;
  if (iVar3 == 0) {
    fVar11 = 1.0;
  }
  plVar4 = param_1 + 0x50;
  local_68 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fStack_64 = fVar8;
  FUN_10064e48c(plVar4,&local_68);
  FUN_10064e3cc(plVar4);
  fVar8 = fVar8 * -0.5;
  fVar9 = *(float *)(param_1 + 0x58);
  bVar2 = false;
  if ((fVar9 == 0.0) && (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x2c4)) && !NAN(fVar8))) {
    bVar2 = *(float *)((long)param_1 + 0x2c4) == fVar8;
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(float *)((long)param_1 + 0x2c4) = fVar8;
    FUN_1000200a0(plVar4);
  }
  FUN_10064259c(plVar4);
  fVar7 = (float)FUN_10064259c(plVar4);
  fVar7 = fVar9 * 0.125 * fVar7;
  fVar9 = SQRT(fVar7);
  fVar8 = fVar9;
  if (fVar7 <= 0.0) {
    fVar8 = fVar7;
  }
  fVar7 = (float)FUN_10064259c(plVar4);
  uVar10 = NEON_fminnm(fVar7 * 0.125,fVar8);
  FUN_10064259c(plVar4);
  fVar8 = (float)NEON_fminnm(fVar9,uVar10);
  plVar4 = param_1 + 0x71;
  lVar5 = 8;
  local_68 = fVar8;
  fStack_64 = fVar8;
  do {
    FUN_10064e48c(plVar4,&local_68);
    plVar4 = plVar4 + 0xb0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pfVar6 = (float *)(param_1 + 0x69);
  lVar5 = 0;
  do {
    fVar9 = local_68;
    if (lVar5 == 0) {
      fVar7 = 0.0;
      if (iVar3 != 0) {
        fVar7 = (float)(**(code **)(*param_1 + 0x48))(param_1);
      }
      *pfVar6 = fVar7 + fVar11 * 0.5 * fVar9;
      *(undefined4 *)((long)param_1 + 0x34c) = 0;
    }
    else {
      uVar1 = (int)lVar5 - 1;
      fVar12 = *(float *)(param_1 + (ulong)uVar1 + 0x69);
      fVar7 = (float)(**(code **)(param_1[0x71] + 0x50))(param_1 + 0x71);
      fVar9 = *(float *)((long)param_1 + (ulong)uVar1 * 8 + 0x34c);
      *pfVar6 = fVar12 + fVar11 * (fVar7 + fVar8 * 0.15);
      pfVar6[1] = fVar9;
    }
    lVar5 = lVar5 + 1;
    pfVar6 = pfVar6 + 2;
  } while (lVar5 != 8);
  return;
}




void FUN_100076534(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float local_68;
  float local_64;
  
  plVar3 = param_3 + 0x50;
  local_68 = (float)(**(code **)(*param_3 + 0x48))();
  local_64 = (float)param_2;
  FUN_10064e48c(plVar3,&local_68);
  fVar6 = (float)FUN_10064e3cc(plVar3);
  fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = (float)FUN_10064e3cc(plVar3);
  fVar8 = ((fVar7 + fVar6) - fVar8) * 0.5;
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar7 = (float)FUN_10064e3cc(plVar3);
  fVar6 = (fVar6 - fVar7) * -0.5;
  fVar7 = *(float *)(param_3 + 0x58);
  bVar2 = false;
  if ((fVar7 == fVar8) && (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x2c4)) && !NAN(fVar6))) {
    bVar2 = *(float *)((long)param_3 + 0x2c4) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x58) = fVar8;
    *(float *)((long)param_3 + 0x2c4) = fVar6;
    FUN_1000200a0(plVar3);
  }
  FUN_10064e3cc(plVar3);
  fVar8 = (float)FUN_10064e3cc(plVar3);
  fVar8 = fVar7 * 0.125 * fVar8;
  fVar7 = SQRT(fVar8);
  fVar6 = fVar7;
  if (fVar8 <= 0.0) {
    fVar6 = fVar8;
  }
  FUN_10064e3cc(plVar3);
  uVar10 = NEON_fminnm(fVar7 * 0.125,fVar6);
  uVar9 = FUN_10064e3cc(plVar3);
  fVar8 = (float)NEON_fminnm(uVar9,uVar10);
  local_68 = fVar8;
  local_64 = fVar8;
  FUN_10064e3cc(plVar3);
  fVar6 = 0.14285715;
  plVar3 = param_3 + 0x71;
  lVar4 = 8;
  do {
    FUN_10064e48c(plVar3,&local_68);
    plVar3 = plVar3 + 0xb0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fVar7 = (float)NEON_fminnm((fVar7 + fVar8 * -8.0) * 0.14285715,0x41900000);
  lVar4 = 0;
  pfVar5 = (float *)((long)param_3 + 0x34c);
  do {
    if (lVar4 == 0) {
      fVar8 = 0.0;
      fVar11 = local_64 * -0.5;
    }
    else {
      uVar1 = (int)lVar4 - 1;
      fVar8 = *(float *)(param_3 + (ulong)uVar1 + 0x69);
      fVar11 = *(float *)((long)param_3 + (ulong)uVar1 * 8 + 0x34c);
      (**(code **)(param_3[0x71] + 0x50))(param_3 + 0x71);
      fVar11 = fVar11 - (fVar7 + fVar6);
    }
    pfVar5[-1] = fVar8;
    *pfVar5 = fVar11;
    lVar4 = lVar4 + 1;
    pfVar5 = pfVar5 + 2;
  } while (lVar4 != 8);
  return;
}




void FUN_100076708(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffff7 | uVar1;
  return;
}




void FUN_100076728(long param_1)

{
  FUN_100269e20(param_1 + 0x1b8);
  return;
}




void FUN_100076730(long param_1)

{
  FUN_1001cedd0(param_1 + 0xd0);
  return;
}




void FUN_100076738(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x388;
  lVar1 = 8;
  do {
    FUN_1000754a0(param_1,param_2);
    param_1 = param_1 + 0x580;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




void FUN_10007677c(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *local_158;
  void *local_150;
  undefined7 local_148;
  char cStack_141;
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined **local_120;
  undefined1 auStack_118 [40];
  long local_f0;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  char local_a9;
  undefined4 local_90;
  undefined4 local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  iVar1 = FUN_1001311fc();
  if ((iVar1 != 0) && (plVar2 = *(long **)(param_1 + 0xb8), plVar2 != (long *)0x0)) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (lVar4 = FUN_1003e2814(), lVar4 != 0)) {
        uVar5 = FUN_100644b2c(param_2);
        iVar1 = FUN_10034624c(lVar4,uVar5);
        if (iVar1 != 0) {
          lVar4 = FUN_100346280(lVar4,uVar5);
          uVar6 = FUN_1004e0150(*(undefined8 *)(lVar4 + 8),0);
          thunk_FUN_1004e439c(auStack_60,uVar6);
          uVar6 = FUN_1004e0150(*(undefined8 *)(lVar4 + 0x10),0);
          thunk_FUN_1004e439c(auStack_70,uVar6);
          FUN_1000ee838(auStack_70,uVar5,lVar3);
          lVar3 = param_1 + 0x388;
          lVar4 = 8;
          do {
            iVar1 = FUN_1000754e8(lVar3);
            if (iVar1 == (int)uVar5) {
              thunk_FUN_1001cd434(&local_120);
              local_f0 = lVar3;
              iVar1 = FUN_100075b30(param_1);
              local_78 = 3;
              if (iVar1 != 0) {
                local_78 = 1;
              }
              iVar1 = FUN_100075b30(param_1);
              local_90 = 0;
              if (iVar1 == 0) {
                local_90 = 0x3f000000;
              }
              thunk_FUN_1004e439c(&local_158,auStack_60);
              FUN_10003330c(&local_148,&DAT_101d91198);
              local_130 = 0;
              local_12c = 0x41a00000;
              FUN_10003c048(auStack_118,&local_158);
              if (local_131 < '\0') {
                operator_delete((void *)CONCAT17(cStack_141,local_148));
              }
              if (local_150 != (void *)0x0) {
                operator_delete__(local_150);
              }
              thunk_FUN_1004e439c(&local_158,auStack_70);
              FUN_10003330c(&local_148,&DAT_101d91198);
              local_130 = 1;
              local_12c = 0x41a00000;
              FUN_10003c048(auStack_118,&local_158);
              if (local_131 < '\0') {
                operator_delete((void *)CONCAT17(cStack_141,local_148));
              }
              if (local_150 != (void *)0x0) {
                operator_delete__(local_150);
              }
              FUN_10001549c(&local_158,"hudBuffsTooltip");
              FUN_1001cefb8(param_1 + 0xd0,&local_158,&local_120);
              if (cStack_141 < '\0') {
                operator_delete(local_158);
              }
              local_120 = &PTR_FUN_1014666e0;
              if (local_a9 < '\0') {
                operator_delete(local_c0);
              }
              if (local_c8 != (void *)0x0) {
                operator_delete__(local_c8);
                local_d0 = 0;
                local_c8 = (void *)0x0;
              }
              FUN_10003c1ec(auStack_118,1);
              break;
            }
            lVar3 = lVar3 + 0x580;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          if (local_68 != (void *)0x0) {
            operator_delete__(local_68);
          }
          if (local_58 != (void *)0x0) {
            operator_delete__(local_58);
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100076a24(long param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = 0;
  lVar4 = 0;
  do {
    lVar1 = param_1 + lVar4 * 2;
    if (*(short *)(lVar1 + 0x338) == -1) {
      lVar5 = lVar3;
      do {
        if (lVar5 == 0xe) goto LAB_100076a70;
        sVar2 = *(short *)(param_1 + lVar5 + 0x33a);
        lVar5 = lVar5 + 2;
      } while (sVar2 == -1);
      *(short *)(lVar1 + 0x338) = sVar2;
      *(undefined2 *)(param_1 + lVar5 + 0x338) = 0xffff;
    }
LAB_100076a70:
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 2;
    if (lVar4 == 8) {
      return;
    }
  } while( true );
}




float FUN_100076a84(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return param_2 + param_3 * (fVar1 * fVar1 * fVar1 * fVar1 * fVar1 + 1.0);
}




void FUN_100076aa8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_10144e3f8;
  do {
    FUN_100075678((long)param_1 + lVar1 + 0x2a08);
    lVar1 = lVar1 + -0x580;
  } while (lVar1 != -0x2c00);
  thunk_FUN_10064e2bc(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x37);
  thunk_FUN_1001cec4c(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100076b18(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = &PTR_FUN_10144e3f8;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x2a08) = &PTR_FUN_10144e2b0;
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x2e40);
    *(undefined ***)((long)param_1 + lVar2 + 0x2d50) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x2e08) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x2e20);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x2d50);
    *(undefined ***)((long)param_1 + lVar2 + 0x2c50) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x2d08) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x2d20);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x2c50);
    *(undefined ***)((long)param_1 + lVar2 + 0x2b48) = &PTR_FUN_1014a77a8;
    *(undefined ***)((long)param_1 + lVar2 + 0x2c00) = &PTR_FUN_1014a7910;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x2c38);
    *(undefined ***)((long)param_1 + lVar2 + 0x2b48) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x2c00) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x2c18);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x2b48);
    FUN_10064221c((long)param_1 + lVar2 + 0x2ac0);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x2a08);
    lVar2 = lVar2 + -0x580;
  } while (lVar2 != -0x2c00);
  thunk_FUN_10064e2bc(param_1 + 0x50);
  FUN_10064e2bc(param_1 + 0x37);
  thunk_FUN_1001cec4c(param_1 + 0x1a);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_100076cd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  code *pcStack_28;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100077f40_10144e540;
  FUN_10064e264(puVar1 + 0x17);
  thunk_FUN_100655644(param_1 + 0x170);
  thunk_FUN_10006c440(param_1 + 0x2c8);
  thunk_FUN_1000be114(param_1 + 0x8810);
  thunk_FUN_1000a8b7c(param_1 + 0x8848);
  FUN_10064e264(param_1 + 0xc370);
  thunk_FUN_10007580c(param_1 + 0xc428);
  thunk_FUN_1000867d4(param_1 + 0xf3b8);
  thunk_FUN_1000a8034(param_1 + 0xf700,1);
  thunk_FUN_1000a8034(param_1 + 0xf808,1);
  thunk_FUN_100652c08(param_1 + 0xf910);
  thunk_FUN_1000a883c(param_1 + 64000);
  thunk_FUN_100652c08(param_1 + 0xfb00);
  thunk_FUN_1000a883c(param_1 + 0xfbf0);
  thunk_FUN_100085a34(param_1 + 0xfcf0);
  thunk_FUN_100087540(param_1 + 0x109d0);
  thunk_FUN_100095fe0(param_1 + 0x13588);
  thunk_FUN_1000862b8(param_1 + 0x13d60);
  thunk_FUN_1000924c8(param_1 + 0x13f20);
  thunk_FUN_1000beac8(param_1 + 0x15570);
  thunk_FUN_100070a7c(param_1 + 0x155a0);
  thunk_FUN_1000ac1a8(param_1 + 0x15738);
  thunk_FUN_1000a2858(param_1 + 0x15ba0);
  FUN_100269de4(param_1 + 0x198f0);
  thunk_FUN_100080c8c(param_1 + 0x199b8);
  thunk_FUN_1000847c8(param_1 + 0x1d0e8);
  FUN_100269de4(param_1 + 0x1ef80);
  thunk_FUN_100651ebc(param_1 + 0x1f048);
  thunk_FUN_100651ebc(param_1 + 0x1f198);
  thunk_FUN_100652c08(param_1 + 0x1f2e8);
  thunk_FUN_100652c08(param_1 + 0x1f3d8);
  FUN_100269de4(param_1 + 0x1f4c8);
  FUN_100269de4(param_1 + 0x1f590);
  FUN_100269de4(param_1 + 0x1f658);
  thunk_FUN_100651ebc(param_1 + 0x1f720);
  thunk_FUN_100651ebc(param_1 + 0x1f870);
  FUN_1000c08a0(param_1 + 0x1f9c0);
  thunk_FUN_1001ceb64(param_1 + 0x1f9d0,1);
  thunk_FUN_100182684(param_1 + 0x1fab8,1);
  FUN_100269de4(param_1 + 0x21998);
  FUN_1000c06a8(param_1 + 0x21a60);
  FUN_1000c06a8(param_1 + 0x21a80);
  FUN_100269de4(param_1 + 0x21aa0);
  FUN_1000c06a8(param_1 + 0x21b68);
  thunk_FUN_1000e3734(param_1 + 0x21b88);
  thunk_FUN_1000e3940(param_1 + 0x21e20);
  thunk_FUN_1000e3940(param_1 + 0x220c8);
  FUN_10064e264(param_1 + 0x22370);
  FUN_10064e264(param_1 + 0x22428);
  FUN_10064e264(param_1 + 0x224e0);
  FUN_100269de4(param_1 + 0x22598);
  thunk_FUN_1000e2dac(param_1 + 0x22660);
  thunk_FUN_1000dda60(param_1 + 0x227f0);
  *(undefined1 *)(param_1 + 0x22978) = 0x80;
  FUN_100077108(param_1);
  uVar2 = FUN_10031615c(5);
  FUN_1000a8164(param_1 + 0xf700,uVar2);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xe5d47eef,thunk_FUN_10007c198,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xf1ccade8,thunk_FUN_100078f50,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0x461d39a,FUN_100077ed0,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xc8e15bb6,FUN_100077ef4,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xf6119432,thunk_FUN_10007c208,0);
  uVar2 = FUN_100316150();
  local_40 = 0;
  pcStack_28 = thunk_FUN_10007c3cc;
  lStack_38 = param_1;
  local_30 = param_1;
  FUN_10003c508(uVar2,&local_40);
  return param_1;
}




void FUN_100077108(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  plVar2 = param_1 + 0x1f01;
  plVar3 = param_1 + 0x1ee0;
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  uVar13 = FUN_1000c083c(param_1 + 0x434c);
  FUN_100642bd8(plVar1,uVar13,1);
  uVar13 = FUN_1000c083c(param_1 + 0x4350);
  FUN_100642bd8(plVar1,uVar13,1);
  FUN_100642bd8(plVar1,param_1 + 0x446e,1);
  FUN_100642bd8(plVar1,param_1 + 0x4485,1);
  FUN_100642bd8(plVar1,param_1 + 0x449c,1);
  uVar13 = FUN_1000c083c(param_1 + 0x436d);
  FUN_100642bd8(plVar1,uVar13,1);
  uVar13 = FUN_1000c0844(param_1 + 0x434c);
  (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
  uVar13 = FUN_1000c0844(param_1 + 0x4350);
  (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
  uVar13 = FUN_1000c0844(param_1 + 0x436d);
  (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x186e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ab4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1e77,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3337,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3a1d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e,1);
  FUN_100655930(param_1 + 0x2e,param_1 + 0x59,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1103],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1885,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2b74,1);
  plVar1 = param_1 + 0x3df0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar4 = param_1 + 0x3e09;
  FUN_100642bd8(plVar1,plVar4,1);
  plVar5 = param_1 + 0x3e33;
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(plVar1,param_1 + 0x213a,1);
  plVar1 = param_1 + 0x3e99;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar6 = param_1 + 0x3e5d;
  FUN_100642bd8(plVar1,plVar6,1);
  plVar7 = param_1 + 0x3e7b;
  FUN_100642bd8(plVar1,plVar7,1);
  FUN_100642bd8(plVar1,param_1 + 0x26b1,1);
  plVar1 = param_1 + 0x3eb2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar2,1);
  plVar8 = param_1 + 8000;
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,param_1 + 0x1f60,1);
  FUN_100642bd8(plVar1,param_1 + 0x1f7e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ae7,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3ecb,1);
  FUN_100642bd8(param_1 + 0x3ecb,param_1 + 0x1109,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4333,1);
  FUN_100642bd8(param_1 + 0x4333,param_1[0x434d],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x4351],1);
  plVar1 = param_1 + 0x44b3;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x44cc,1);
  FUN_100642bd8(plVar1,param_1 + 0x44fe,1);
  plVar1 = param_1 + 0x4354;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x4371,1);
  FUN_100642bd8(param_1 + 0x4371,param_1[0x436e],1);
  FUN_100642bd8(plVar1,param_1 + 0x43c4,1);
  FUN_100642bd8(plVar1,param_1 + 0x4419,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x3f39],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3f3a,1);
  iVar12 = 0;
  do {
    uVar13 = FUN_1000e3298(param_1 + 0x44cc,iVar12);
    (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 3);
  iVar12 = 0;
  do {
    uVar13 = FUN_100082ca4(param_1 + 0x3337,iVar12);
    (**(code **)(*param_1 + 0x78))(param_1,uVar13,1);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 6);
  FUN_1003467f8();
  iVar12 = FUN_10034cfb8();
  lVar15 = 0x13f20;
  if (iVar12 == 0) {
    lVar15 = 0xfcf0;
  }
  (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x27ac,1);
  iVar12 = FUN_100126d70();
  if (iVar12 == 0xe) {
    FUN_100652cac(param_1 + 0x1f22,PTR_s_build___HUDPartsFor35_atlas_10184e0a8,"18_vietnam");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f22,1);
  }
  uVar10 = DAT_101dbd458;
  local_70 = DAT_101dbd458;
  local_98 = FUN_1000786f8;
  plVar1 = param_1 + 0x18;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  uVar11 = DAT_101dbd484;
  local_70 = DAT_101dbd484;
  local_98 = FUN_1000786f8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = DAT_101dbd45c;
  local_98 = FUN_100078700;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = DAT_101dbd488;
  local_98 = FUN_100078700;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = DAT_101dbd460;
  local_98 = FUN_100078708;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = DAT_101dbd48c;
  local_98 = FUN_100078708;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x2aaf],1);
  FUN_1000bee64(param_1 + 0x2aae);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3f57,1);
  FUN_1003467f8();
  iVar12 = FUN_10034cde0();
  uVar14 = 4;
  if (iVar12 == 0) {
    uVar14 = 0;
  }
  *(uint *)((long)param_1 + 0x1fb3c) = *(uint *)((long)param_1 + 0x1fb3c) & 0xfffffffb | uVar14;
  uVar13 = FUN_1004e0150("HUD_TUTORIAL_SKIP_LEVEL",0);
  FUN_1001816d4(0x42800000,0x43200000,0x44960000,param_1 + 0x3f57,0,uVar13,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  local_70 = DAT_101d918e8;
  local_98 = FUN_100078710;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x3f58,&local_98);
  FUN_100651f8c(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652444(plVar4,"9slice_small_fill_corner",0,0,0,"white_background",0,0,0,"white_background",
                0,"white_background");
  FUN_100651f8c(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652444(plVar5,"9slice_small_line_corner",0,0,0,"9slice_small_line_edge_top",0,0,0,
                "9slice_small_line_edge_top",0,0);
  FUN_100652590(plVar4,&DAT_10115a164,2);
  FUN_100088750(0,param_1 + 0x213a,1,4,1);
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"9slice_small_fill_corner");
  *(byte *)(param_1 + 0x3e96) = *(byte *)(param_1 + 0x3e96) | 2;
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  plVar1 = param_1 + 0x3ee4;
  FUN_100651f8c(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652444(plVar1,"9slice_small_fill_corner",0,0,0,"white_background",0,0,0,"white_background",
                0,"white_background");
  FUN_100651f8c(param_1 + 0x3f0e,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652444(param_1 + 0x3f0e,"9slice_small_line_corner",0,0,0,"9slice_small_line_edge_top",0,0,0
                ,"9slice_small_line_edge_top",0,0);
  FUN_100652590(plVar1,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0xc3f4) = *(uint *)((long)param_1 + 0xc3f4) | 0x10;
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_zoom");
  uVar9 = DAT_101d91884;
  local_70 = DAT_101d91884;
  local_98 = thunk_FUN_10007c52c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1ee1,&local_98);
  *(uint *)((long)param_1 + 0xf784) = *(uint *)((long)param_1 + 0xf784) | 0x10;
  (**(code **)(*plVar3 + 0x40))(0x41000000,plVar3);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_follow_cam_on");
  local_70 = uVar9;
  local_98 = FUN_100078734;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1f02,&local_98);
  *(uint *)((long)param_1 + 0xf88c) = *(uint *)((long)param_1 + 0xf88c) | 0x10;
  (**(code **)(*plVar2 + 0x40))(0x41000000,plVar2);
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_settings");
  local_70 = uVar10;
  local_98 = FUN_100078770;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1f41,&local_98);
  local_70 = uVar11;
  local_98 = FUN_100078770;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1f41,&local_98);
  *(uint *)((long)param_1 + 0xfa84) = *(uint *)((long)param_1 + 0xfa84) | 0x10;
  FUN_100652cac(param_1 + 0x1f60,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  *(uint *)((long)param_1 + 0xfb84) = *(uint *)((long)param_1 + 0xfb84) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x1f7e,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_chat");
  local_70 = uVar10;
  local_98 = FUN_1000787b8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1f7f,&local_98);
  local_70 = uVar11;
  local_98 = FUN_1000787b8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x1f7f,&local_98);
  *(uint *)((long)param_1 + 0xfc74) = *(uint *)((long)param_1 + 0xfc74) | 0x10;
  iVar12 = FUN_100078800();
  uVar14 = 4;
  if (iVar12 == 0) {
    uVar14 = 0;
  }
  *(uint *)((long)param_1 + 0xfc74) = *(uint *)((long)param_1 + 0xfc74) & 0xfffffffb | uVar14;
  local_70 = FUN_100644a94("EVENT_REQUEST_SHOW_ABILITY_TOOLTIP");
  local_98 = FUN_100078834;
  plVar1 = param_1 + 1;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = FUN_100644a94("EVENT_REQUEST_HIDE_ABILITY_TOOLTIP");
  local_98 = thunk_FUN_10007c794;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP");
  local_98 = FUN_100078840;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  local_70 = FUN_100644a94("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  local_98 = FUN_100078848;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar1,&local_98);
  FUN_100078868(param_1);
  return;
}




void thunk_FUN_10007c198(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x22978);
  if ((bVar1 >> 1 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x22978) = bVar1 & 0xfd;
  FUN_1000a34a4(0x3f000000,param_1 + 0x15ba0,0,4,1);
  FUN_1000aa2a4(param_1 + 0x8848,1);
  return;
}




void thunk_FUN_100078f50(void)

{
  FUN_100078f50();
  return;
}




void FUN_100077ed0(undefined8 param_1)

{
  FUN_100078868();
  FUN_100078f50(param_1);
  return;
}




void FUN_100077ef4(long param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = FUN_100060a94();
  pcVar1 = "hud_follow_cam_off";
  if (iVar2 == 0) {
    pcVar1 = "hud_follow_cam_on";
  }
  FUN_100652cdc(param_1 + 0xf808,pcVar1);
  return;
}




void thunk_FUN_10007c208(long param_1)

{
  ushort *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ushort uVar7;
  
  lVar2 = param_1 + 0xfb00;
  puVar3 = (uint *)(param_1 + 0xfb84);
  uVar4 = *puVar3;
  *puVar3 = uVar4 | 4;
  if ((uVar4 & 0x7f80) != 0) {
    *puVar3 = uVar4 & 0xffff807f | 4;
    FUN_1000200a0(lVar2);
  }
  uVar6 = FUN_10064081c(0x3ea3d70a);
  FUN_100640840(0x3f800000,0x3da3d70a,FUN_10001f4c4);
  FUN_100640840(0,0x3e051eb8,FUN_10001f4ac);
  FUN_100640840(0x3f800000,0x3da3d70a,FUN_10001f4c4);
  FUN_100640840(0,0x3ee66666,FUN_10001f4ac);
  lVar5 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 != 0xffff) {
    puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar1;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_10063ee9c(puVar1);
    *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_100642324(lVar2);
  FUN_100642b7c(lVar2,uVar6);
  return;
}




long thunk_FUN_100076cd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  code *pcStack_28;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100077f40_10144e540;
  FUN_10064e264(puVar1 + 0x17);
  thunk_FUN_100655644(param_1 + 0x170);
  thunk_FUN_10006c440(param_1 + 0x2c8);
  thunk_FUN_1000be114(param_1 + 0x8810);
  thunk_FUN_1000a8b7c(param_1 + 0x8848);
  FUN_10064e264(param_1 + 0xc370);
  thunk_FUN_10007580c(param_1 + 0xc428);
  thunk_FUN_1000867d4(param_1 + 0xf3b8);
  thunk_FUN_1000a8034(param_1 + 0xf700,1);
  thunk_FUN_1000a8034(param_1 + 0xf808,1);
  thunk_FUN_100652c08(param_1 + 0xf910);
  thunk_FUN_1000a883c(param_1 + 64000);
  thunk_FUN_100652c08(param_1 + 0xfb00);
  thunk_FUN_1000a883c(param_1 + 0xfbf0);
  thunk_FUN_100085a34(param_1 + 0xfcf0);
  thunk_FUN_100087540(param_1 + 0x109d0);
  thunk_FUN_100095fe0(param_1 + 0x13588);
  thunk_FUN_1000862b8(param_1 + 0x13d60);
  thunk_FUN_1000924c8(param_1 + 0x13f20);
  thunk_FUN_1000beac8(param_1 + 0x15570);
  thunk_FUN_100070a7c(param_1 + 0x155a0);
  thunk_FUN_1000ac1a8(param_1 + 0x15738);
  thunk_FUN_1000a2858(param_1 + 0x15ba0);
  FUN_100269de4(param_1 + 0x198f0);
  thunk_FUN_100080c8c(param_1 + 0x199b8);
  thunk_FUN_1000847c8(param_1 + 0x1d0e8);
  FUN_100269de4(param_1 + 0x1ef80);
  thunk_FUN_100651ebc(param_1 + 0x1f048);
  thunk_FUN_100651ebc(param_1 + 0x1f198);
  thunk_FUN_100652c08(param_1 + 0x1f2e8);
  thunk_FUN_100652c08(param_1 + 0x1f3d8);
  FUN_100269de4(param_1 + 0x1f4c8);
  FUN_100269de4(param_1 + 0x1f590);
  FUN_100269de4(param_1 + 0x1f658);
  thunk_FUN_100651ebc(param_1 + 0x1f720);
  thunk_FUN_100651ebc(param_1 + 0x1f870);
  FUN_1000c08a0(param_1 + 0x1f9c0);
  thunk_FUN_1001ceb64(param_1 + 0x1f9d0,1);
  thunk_FUN_100182684(param_1 + 0x1fab8,1);
  FUN_100269de4(param_1 + 0x21998);
  FUN_1000c06a8(param_1 + 0x21a60);
  FUN_1000c06a8(param_1 + 0x21a80);
  FUN_100269de4(param_1 + 0x21aa0);
  FUN_1000c06a8(param_1 + 0x21b68);
  thunk_FUN_1000e3734(param_1 + 0x21b88);
  thunk_FUN_1000e3940(param_1 + 0x21e20);
  thunk_FUN_1000e3940(param_1 + 0x220c8);
  FUN_10064e264(param_1 + 0x22370);
  FUN_10064e264(param_1 + 0x22428);
  FUN_10064e264(param_1 + 0x224e0);
  FUN_100269de4(param_1 + 0x22598);
  thunk_FUN_1000e2dac(param_1 + 0x22660);
  thunk_FUN_1000dda60(param_1 + 0x227f0);
  *(undefined1 *)(param_1 + 0x22978) = 0x80;
  FUN_100077108(param_1);
  uVar2 = FUN_10031615c(5);
  FUN_1000a8164(param_1 + 0xf700,uVar2);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xe5d47eef,thunk_FUN_10007c198,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xf1ccade8,thunk_FUN_100078f50,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0x461d39a,FUN_100077ed0,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xc8e15bb6,FUN_100077ef4,0);
  uVar2 = FUN_1000bdb98();
  FUN_1004e18bc(uVar2,param_1,0xf6119432,thunk_FUN_10007c208,0);
  uVar2 = FUN_100316150();
  uStack_40 = 0;
  pcStack_28 = thunk_FUN_10007c3cc;
  lStack_38 = param_1;
  lStack_30 = param_1;
  FUN_10003c508(uVar2,&uStack_40);
  return param_1;
}




void FUN_100077f40(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_70;
  long local_68;
  
  *param_1 = &PTR_thunk_FUN_100077f40_10144e540;
  uVar3 = FUN_1000bdb98();
  FUN_1004e1b58(uVar3,param_1);
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar4 = (uint *)FUN_100316150();
    if (*puVar4 != 0) {
      lVar5 = *(long *)(puVar4 + 2);
      lVar6 = (ulong)*puVar4 << 5;
      do {
        puVar1 = (undefined8 *)(lVar5 + 8);
        lVar5 = lVar5 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  thunk_FUN_1000ddb00(param_1 + 0x44fe);
  thunk_FUN_1000e2eec(param_1 + 0x44cc);
  FUN_10064e2bc(param_1 + 0x44b3);
  thunk_FUN_10064e2bc(param_1 + 0x449c);
  thunk_FUN_10064e2bc(param_1 + 0x4485);
  thunk_FUN_10064e2bc(param_1 + 0x446e);
  thunk_FUN_1000e3b88(param_1 + 0x4419);
  thunk_FUN_1000e3b88(param_1 + 0x43c4);
  param_1[0x4371] = &PTR_FUN_1014580c8;
  param_1[0x43a6] = &PTR_FUN_1014a7108;
  param_1[0x43bd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43c0);
  FUN_10064e2bc(param_1 + 0x43a6);
  param_1[0x4388] = &PTR_FUN_1014a7108;
  param_1[0x439f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43a2);
  FUN_10064e2bc(param_1 + 0x4388);
  FUN_10064e2bc(param_1 + 0x4371);
  thunk_FUN_1000c06f8(param_1 + 0x436d);
  FUN_10064e2bc(param_1 + 0x4354);
  thunk_FUN_1000c06f8(param_1 + 0x4350);
  thunk_FUN_1000c06f8(param_1 + 0x434c);
  FUN_10064e2bc(param_1 + 0x4333);
  param_1[0x3f57] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x42fd);
  FUN_10064221c(param_1 + 0x42ec);
  FUN_10064e2bc(param_1 + 0x42b8);
  FUN_10064221c(param_1 + 0x42a7);
  thunk_FUN_100651068(param_1 + 0x4281);
  thunk_FUN_100651068(param_1 + 0x425b);
  param_1[0x423d] = &PTR_FUN_1014a7108;
  param_1[0x4254] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4257);
  FUN_10064e2bc(param_1 + 0x423d);
  param_1[0x421f] = &PTR_FUN_1014a7108;
  param_1[0x4236] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4239);
  FUN_10064e2bc(param_1 + 0x421f);
  FUN_10064221c(param_1 + 0x420e);
  FUN_10003bd40(param_1 + 0x3f57);
  thunk_FUN_1001cec4c(param_1 + 0x3f3a);
  FUN_1000c08e8(param_1 + 0x3f38);
  param_1[0x3f0e] = &PTR_FUN_1014a6db0;
  param_1[0x3f25] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3f28);
  FUN_10064e2bc(param_1 + 0x3f0e);
  param_1[0x3ee4] = &PTR_FUN_1014a6db0;
  param_1[0x3efb] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3efe);
  FUN_10064e2bc(param_1 + 0x3ee4);
  FUN_10064e2bc(param_1 + 0x3ecb);
  FUN_10064e2bc(param_1 + 0x3eb2);
  FUN_10064e2bc(param_1 + 0x3e99);
  param_1[0x3e7b] = &PTR_FUN_1014a7108;
  param_1[0x3e92] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3e95);
  FUN_10064e2bc(param_1 + 0x3e7b);
  param_1[0x3e5d] = &PTR_FUN_1014a7108;
  param_1[0x3e74] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3e77);
  FUN_10064e2bc(param_1 + 0x3e5d);
  param_1[0x3e33] = &PTR_FUN_1014a6db0;
  param_1[0x3e4a] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3e4d);
  FUN_10064e2bc(param_1 + 0x3e33);
  param_1[0x3e09] = &PTR_FUN_1014a6db0;
  param_1[0x3e20] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3e23);
  FUN_10064e2bc(param_1 + 0x3e09);
  FUN_10064e2bc(param_1 + 0x3df0);
  FUN_10007c8a4(param_1 + 0x3a1d);
  thunk_FUN_100080e94(param_1 + 0x3337);
  FUN_10064e2bc(param_1 + 0x331e);
  FUN_10004eb90(param_1 + 0x2b74);
  thunk_FUN_1000ac310(param_1 + 0x2ae7);
  thunk_FUN_100070b80(param_1 + 0x2ab4);
  thunk_FUN_1000beca8(param_1 + 0x2aae);
  FUN_10007c9e4(param_1 + 0x27e4);
  param_1[0x27ac] = &PTR_FUN_10144ee68;
  thunk_FUN_100651068(param_1 + 0x27bd);
  FUN_10064221c(param_1 + 0x27ac);
  thunk_FUN_100096278(param_1 + 0x26b1);
  thunk_FUN_100088020(param_1 + 0x213a);
  FUN_10007cbf8(param_1 + 0x1f9e);
  thunk_FUN_1000a88b4(param_1 + 0x1f7e);
  param_1[0x1f60] = &PTR_FUN_1014a7108;
  param_1[0x1f77] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f7a);
  FUN_10064e2bc(param_1 + 0x1f60);
  thunk_FUN_1000a88b4(param_1 + 8000);
  param_1[0x1f22] = &PTR_FUN_1014a7108;
  param_1[0x1f39] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f3c);
  FUN_10064e2bc(param_1 + 0x1f22);
  FUN_1000a88b4(param_1 + 0x1f01);
  FUN_1000a88b4(param_1 + 0x1ee0);
  thunk_FUN_1000868c8(param_1 + 0x1e77);
  param_1[0x1885] = &PTR_FUN_10144e3f8;
  lVar5 = -0x2c00;
  lVar12 = 0xeee8;
  lVar13 = 0xf040;
  local_70 = 0xef70;
  local_68 = 0xf060;
  lVar10 = 0xf148;
  lVar6 = 0xee30;
  lVar11 = 0xf078;
  lVar7 = 0xf248;
  lVar8 = 0xf268;
  lVar9 = 0xf178;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar6);
    *puVar1 = &PTR_FUN_10144e2b0;
    thunk_FUN_100651068((long)param_1 + lVar8);
    puVar1[0x69] = &PTR_FUN_1014a7108;
    puVar1[0x80] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar7);
    FUN_10064e2bc((long)param_1 + lVar9);
    puVar1[0x49] = &PTR_FUN_1014a7108;
    puVar1[0x60] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar10);
    FUN_10064e2bc((long)param_1 + lVar11);
    puVar1[0x28] = &PTR_FUN_1014a77a8;
    puVar1[0x3f] = &PTR_FUN_1014a7910;
    thunk_FUN_100657580((long)param_1 + local_68);
    puVar1[0x28] = &PTR_FUN_1014a7108;
    puVar1[0x3f] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar13);
    FUN_10064e2bc((long)param_1 + local_70);
    FUN_10064221c((long)param_1 + lVar12);
    FUN_10064e2bc(puVar1);
    lVar12 = lVar12 + -0x580;
    lVar13 = lVar13 + -0x580;
    local_68 = local_68 + -0x580;
    local_70 = local_70 + -0x580;
    lVar10 = lVar10 + -0x580;
    lVar6 = lVar6 + -0x580;
    lVar11 = lVar11 + -0x580;
    lVar7 = lVar7 + -0x580;
    lVar8 = lVar8 + -0x580;
    lVar9 = lVar9 + -0x580;
    lVar5 = lVar5 + 0x580;
  } while (lVar5 != 0);
  thunk_FUN_10064e2bc(param_1 + 0x18d5);
  FUN_10064e2bc(param_1 + 0x18bc);
  thunk_FUN_1001cec4c(param_1 + 0x189f);
  FUN_10064e2bc(param_1 + 0x1885);
  thunk_FUN_10064e2bc(param_1 + 0x186e);
  FUN_10007cce4(param_1 + 0x1109);
  thunk_FUN_1000be20c(param_1 + 0x1102);
  thunk_FUN_10006cb70(param_1 + 0x59);
  param_1[0x2e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100077f40(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  
  *param_1 = &PTR_thunk_FUN_100077f40_10144e540;
  uVar3 = FUN_1000bdb98();
  FUN_1004e1b58(uVar3,param_1);
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar4 = (uint *)FUN_100316150();
    if (*puVar4 != 0) {
      lVar5 = *(long *)(puVar4 + 2);
      lVar6 = (ulong)*puVar4 << 5;
      do {
        puVar1 = (undefined8 *)(lVar5 + 8);
        lVar5 = lVar5 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  thunk_FUN_1000ddb00(param_1 + 0x44fe);
  thunk_FUN_1000e2eec(param_1 + 0x44cc);
  FUN_10064e2bc(param_1 + 0x44b3);
  thunk_FUN_10064e2bc(param_1 + 0x449c);
  thunk_FUN_10064e2bc(param_1 + 0x4485);
  thunk_FUN_10064e2bc(param_1 + 0x446e);
  thunk_FUN_1000e3b88(param_1 + 0x4419);
  thunk_FUN_1000e3b88(param_1 + 0x43c4);
  param_1[0x4371] = &PTR_FUN_1014580c8;
  param_1[0x43a6] = &PTR_FUN_1014a7108;
  param_1[0x43bd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43c0);
  FUN_10064e2bc(param_1 + 0x43a6);
  param_1[0x4388] = &PTR_FUN_1014a7108;
  param_1[0x439f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43a2);
  FUN_10064e2bc(param_1 + 0x4388);
  FUN_10064e2bc(param_1 + 0x4371);
  thunk_FUN_1000c06f8(param_1 + 0x436d);
  FUN_10064e2bc(param_1 + 0x4354);
  thunk_FUN_1000c06f8(param_1 + 0x4350);
  thunk_FUN_1000c06f8(param_1 + 0x434c);
  FUN_10064e2bc(param_1 + 0x4333);
  param_1[0x3f57] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x42fd);
  FUN_10064221c(param_1 + 0x42ec);
  FUN_10064e2bc(param_1 + 0x42b8);
  FUN_10064221c(param_1 + 0x42a7);
  thunk_FUN_100651068(param_1 + 0x4281);
  thunk_FUN_100651068(param_1 + 0x425b);
  param_1[0x423d] = &PTR_FUN_1014a7108;
  param_1[0x4254] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4257);
  FUN_10064e2bc(param_1 + 0x423d);
  param_1[0x421f] = &PTR_FUN_1014a7108;
  param_1[0x4236] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4239);
  FUN_10064e2bc(param_1 + 0x421f);
  FUN_10064221c(param_1 + 0x420e);
  FUN_10003bd40(param_1 + 0x3f57);
  thunk_FUN_1001cec4c(param_1 + 0x3f3a);
  FUN_1000c08e8(param_1 + 0x3f38);
  param_1[0x3f0e] = &PTR_FUN_1014a6db0;
  param_1[0x3f25] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3f28);
  FUN_10064e2bc(param_1 + 0x3f0e);
  param_1[0x3ee4] = &PTR_FUN_1014a6db0;
  param_1[0x3efb] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3efe);
  FUN_10064e2bc(param_1 + 0x3ee4);
  FUN_10064e2bc(param_1 + 0x3ecb);
  FUN_10064e2bc(param_1 + 0x3eb2);
  FUN_10064e2bc(param_1 + 0x3e99);
  param_1[0x3e7b] = &PTR_FUN_1014a7108;
  param_1[0x3e92] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3e95);
  FUN_10064e2bc(param_1 + 0x3e7b);
  param_1[0x3e5d] = &PTR_FUN_1014a7108;
  param_1[0x3e74] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3e77);
  FUN_10064e2bc(param_1 + 0x3e5d);
  param_1[0x3e33] = &PTR_FUN_1014a6db0;
  param_1[0x3e4a] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3e4d);
  FUN_10064e2bc(param_1 + 0x3e33);
  param_1[0x3e09] = &PTR_FUN_1014a6db0;
  param_1[0x3e20] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x3e23);
  FUN_10064e2bc(param_1 + 0x3e09);
  FUN_10064e2bc(param_1 + 0x3df0);
  FUN_10007c8a4(param_1 + 0x3a1d);
  thunk_FUN_100080e94(param_1 + 0x3337);
  FUN_10064e2bc(param_1 + 0x331e);
  FUN_10004eb90(param_1 + 0x2b74);
  thunk_FUN_1000ac310(param_1 + 0x2ae7);
  thunk_FUN_100070b80(param_1 + 0x2ab4);
  thunk_FUN_1000beca8(param_1 + 0x2aae);
  FUN_10007c9e4(param_1 + 0x27e4);
  param_1[0x27ac] = &PTR_FUN_10144ee68;
  thunk_FUN_100651068(param_1 + 0x27bd);
  FUN_10064221c(param_1 + 0x27ac);
  thunk_FUN_100096278(param_1 + 0x26b1);
  thunk_FUN_100088020(param_1 + 0x213a);
  FUN_10007cbf8(param_1 + 0x1f9e);
  thunk_FUN_1000a88b4(param_1 + 0x1f7e);
  param_1[0x1f60] = &PTR_FUN_1014a7108;
  param_1[0x1f77] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f7a);
  FUN_10064e2bc(param_1 + 0x1f60);
  thunk_FUN_1000a88b4(param_1 + 8000);
  param_1[0x1f22] = &PTR_FUN_1014a7108;
  param_1[0x1f39] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f3c);
  FUN_10064e2bc(param_1 + 0x1f22);
  FUN_1000a88b4(param_1 + 0x1f01);
  FUN_1000a88b4(param_1 + 0x1ee0);
  thunk_FUN_1000868c8(param_1 + 0x1e77);
  param_1[0x1885] = &PTR_FUN_10144e3f8;
  lVar5 = -0x2c00;
  lVar12 = 0xeee8;
  lVar13 = 0xf040;
  lStack_70 = 0xef70;
  lStack_68 = 0xf060;
  lVar10 = 0xf148;
  lVar6 = 0xee30;
  lVar11 = 0xf078;
  lVar7 = 0xf248;
  lVar8 = 0xf268;
  lVar9 = 0xf178;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar6);
    *puVar1 = &PTR_FUN_10144e2b0;
    thunk_FUN_100651068((long)param_1 + lVar8);
    puVar1[0x69] = &PTR_FUN_1014a7108;
    puVar1[0x80] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar7);
    FUN_10064e2bc((long)param_1 + lVar9);
    puVar1[0x49] = &PTR_FUN_1014a7108;
    puVar1[0x60] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar10);
    FUN_10064e2bc((long)param_1 + lVar11);
    puVar1[0x28] = &PTR_FUN_1014a77a8;
    puVar1[0x3f] = &PTR_FUN_1014a7910;
    thunk_FUN_100657580((long)param_1 + lStack_68);
    puVar1[0x28] = &PTR_FUN_1014a7108;
    puVar1[0x3f] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar13);
    FUN_10064e2bc((long)param_1 + lStack_70);
    FUN_10064221c((long)param_1 + lVar12);
    FUN_10064e2bc(puVar1);
    lVar12 = lVar12 + -0x580;
    lVar13 = lVar13 + -0x580;
    lStack_68 = lStack_68 + -0x580;
    lStack_70 = lStack_70 + -0x580;
    lVar10 = lVar10 + -0x580;
    lVar6 = lVar6 + -0x580;
    lVar11 = lVar11 + -0x580;
    lVar7 = lVar7 + -0x580;
    lVar8 = lVar8 + -0x580;
    lVar9 = lVar9 + -0x580;
    lVar5 = lVar5 + 0x580;
  } while (lVar5 != 0);
  thunk_FUN_10064e2bc(param_1 + 0x18d5);
  FUN_10064e2bc(param_1 + 0x18bc);
  thunk_FUN_1001cec4c(param_1 + 0x189f);
  FUN_10064e2bc(param_1 + 0x1885);
  thunk_FUN_10064e2bc(param_1 + 0x186e);
  FUN_10007cce4(param_1 + 0x1109);
  thunk_FUN_1000be20c(param_1 + 0x1102);
  thunk_FUN_10006cb70(param_1 + 0x59);
  param_1[0x2e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000786e4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100077f40();
  operator_delete(pvVar1);
  return;
}




void FUN_1000786f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10007c57c(param_1,param_4);
  return;
}




void FUN_100078700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10007c5f0(param_1,param_4);
  return;
}




void FUN_100078708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10007c664(param_1,param_4);
  return;
}




void FUN_100078710(void)

{
  FUN_1001167b4(1,0);
  FUN_1000320fc();
  FUN_100033548();
  return;
}




void thunk_FUN_10007c52c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SELECT_ZOOM_TOGGLE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100078734(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x16;
  local_20 = &PTR_FUN_10144d708;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100078770(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23018,0);
  FUN_100644c34(param_1,auStack_40,0);
  return;
}




void FUN_1000787b8(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2301c,0);
  FUN_100644c34(param_1,auStack_40,0);
  return;
}




ulong FUN_100078800(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_100078f00();
    if ((int)uVar2 != 0) {
      iVar1 = FUN_10012709c();
      uVar2 = (ulong)(iVar1 == 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_100078834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10007c6d8(param_1,param_4);
  return;
}




void thunk_FUN_10007c794(long param_1)

{
  void *apvStack_38 [2];
  char cStack_21;
  
  FUN_10001549c(apvStack_38,"hudAbilityTooltip");
  FUN_1001ceeb0(param_1 + 0x1f9d0,apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void FUN_100078840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10007c7ec(param_1,param_4);
  return;
}




void FUN_100078848(long param_1)

{
  FUN_100269e20(0x3e800000,param_1 + 0x1d0e8,0,4,1);
  return;
}




void FUN_100078868(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  
  iVar3 = FUN_1000608ec();
  *(byte *)(param_1 + 0x22978) = *(byte *)(param_1 + 0x22978) & 0xef | (iVar3 == 2) << 4;
  lVar8 = param_1 + 0x21a60;
  FUN_1000c0828(lVar8);
  lVar1 = param_1 + 0x21a80;
  FUN_1000c0828(lVar1,*(byte *)(param_1 + 0x22978) >> 4 & 1);
  FUN_1000c0828(param_1 + 0x21b68,*(byte *)(param_1 + 0x22978) >> 4 & 1);
  if ((*(byte *)(param_1 + 0x22978) >> 4 & 1) == 0) {
    uVar5 = 0;
    bVar2 = true;
  }
  else {
    iVar3 = FUN_100316180(0x21);
    uVar5 = (uint)(iVar3 == 0) << 2;
    bVar2 = (*(byte *)(param_1 + 0x22978) & 0x10) == 0;
  }
  *(uint *)(param_1 + 0x21ea4) = *(uint *)(param_1 + 0x21ea4) & 0xfffffffb | uVar5;
  if (bVar2) {
    uVar5 = 0;
    uVar10 = 0;
  }
  else {
    iVar3 = FUN_100316180(0x21);
    uVar10 = (uint)(iVar3 == 0) << 2;
    uVar5 = *(byte *)(param_1 + 0x22978) & 0x10;
  }
  *(uint *)(param_1 + 0x2214c) = *(uint *)(param_1 + 0x2214c) & 0xfffffffb | uVar10;
  *(uint *)(param_1 + 0x21c0c) = *(uint *)(param_1 + 0x21c0c) & 0xfffffffb | uVar5 >> 2;
  FUN_1000e30e4(param_1 + 0x22660,uVar5 != 0);
  FUN_1000ddbb8(param_1 + 0x227f0,*(byte *)(param_1 + 0x22978) >> 4 & 1);
  uVar5 = *(byte *)(param_1 + 0x22978) & 0x10;
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffffffef | uVar5;
  *(uint *)(param_1 + 0x223f4) = *(uint *)(param_1 + 0x223f4) & 0xffffffef | uVar5;
  *(uint *)(param_1 + 0x224ac) = *(uint *)(param_1 + 0x224ac) & 0xffffffef | uVar5;
  *(uint *)(param_1 + 0x22564) = *(uint *)(param_1 + 0x22564) & 0xffffffef | uVar5;
  if ((*(byte *)(param_1 + 0x22978) >> 4 & 1) != 0) {
    lVar6 = FUN_100057f34();
    if (lVar6 != 0) {
      lVar7 = FUN_100061ce8();
      lVar6 = 0;
      if (lVar7 != 0) {
        lVar6 = lVar7 + 0x28;
      }
      FUN_1000c0874(lVar8,lVar6);
      lVar7 = FUN_100061d00();
      lVar6 = 0;
      if (lVar7 != 0) {
        lVar6 = lVar7 + 0x28;
      }
      FUN_1000c0874(lVar1,lVar6);
      lVar7 = FUN_100061d18();
      lVar6 = 0;
      if (lVar7 != 0) {
        lVar6 = lVar7 + 0x28;
      }
      FUN_1000c0874(param_1 + 0x21b68,lVar6);
    }
    iVar3 = FUN_100316180(0xc);
    FUN_1000c0854(lVar8,iVar3 == 1);
    iVar3 = FUN_100316180(0xc);
    FUN_1000c085c(lVar8,iVar3 != 2);
    FUN_1000c084c(lVar8,1);
    FUN_1000c0864(lVar8,1);
    lVar8 = FUN_1000d0378(*(undefined8 *)(param_1 + 0x21a68));
    uVar4 = FUN_1004d2524("HUD_movement_joystick");
    uVar5 = FUN_100015208("HUD_movement_joystick",uVar4,0x1234);
    *(uint *)(lVar8 + 0x84) =
         *(uint *)(lVar8 + 0x84) & 0x80000000 |
         *(uint *)(lVar8 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
    FUN_1000c085c(lVar1,1);
    FUN_1000c0864(lVar1,1);
    *(uint *)(*(long *)(param_1 + 0x21a88) + 0x84) =
         *(uint *)(*(long *)(param_1 + 0x21a88) + 0x84) & 0xfffffffb;
    uVar4 = FUN_1004d2524("HUD_attack_joystick");
    uVar5 = FUN_100015208("HUD_attack_joystick",uVar4,0x1234);
    *(uint *)(param_1 + 0x21c0c) =
         *(uint *)(param_1 + 0x21c0c) & 0x80000000 |
         *(uint *)(param_1 + 0x21c0c) & 0x7fff | (uVar5 & 0xffff) << 0xf;
    uVar9 = FUN_100061d18();
    FUN_1000e3c1c(param_1 + 0x21e20,uVar9,0);
    uVar9 = FUN_100061d18();
    FUN_1000e3c1c(param_1 + 0x220c8,uVar9,1);
    uVar4 = FUN_1004d2524("HUD_attack_structure_joystick");
    uVar5 = FUN_100015208("HUD_attack_structure_joystick",uVar4,0x1234);
    *(uint *)(param_1 + 0x2214c) =
         *(uint *)(param_1 + 0x2214c) & 0x80000000 |
         *(uint *)(param_1 + 0x2214c) & 0x7fff | (uVar5 & 0xffff) << 0xf;
    FUN_10007bd70(param_1);
    return;
  }
  return;
}




void FUN_100078bd0(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  long local_c0;
  undefined4 local_b8;
  void *local_b0 [2];
  char local_99;
  undefined8 **local_98;
  ulong local_90;
  undefined8 uStack_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  undefined4 local_68;
  long local_60;
  undefined4 local_58;
  
  FUN_10006cd64(param_1 + 0x2c8,param_2,0,0);
  FUN_1000e2f88(param_1 + 0x22660,param_2);
  FUN_1000ddbb0(param_1 + 0x227f0,param_2);
  FUN_100080fa8(param_1 + 0x199b8,param_2);
  FUN_1000a94e8(param_1 + 0x8848,param_2);
  lVar1 = param_2 + 0x28;
  local_58 = *(undefined4 *)(param_2 + 0x30);
  local_60 = lVar1;
  FUN_100070c50(param_1 + 0x155a0,&local_60);
  FUN_1000759e0(param_1 + 0xc428,param_2,0,0);
  FUN_100096390(param_1 + 0x13588,param_2);
  local_68 = *(undefined4 *)(param_2 + 0x30);
  local_70 = lVar1;
  FUN_10008873c(param_1 + 0x109d0,&local_70);
  local_78 = *(undefined4 *)(param_2 + 0x30);
  local_80 = lVar1;
  FUN_1000bef04(param_1 + 0x15570,&local_80);
  FUN_1000a2f70(param_1 + 0x15ba0,param_2);
  FUN_100086940(param_1 + 0xf3b8,param_2);
  iVar3 = FUN_1004eef10();
  if (iVar3 == 0) goto LAB_100078dc0;
  lVar4 = FUN_1004f0338();
  if ((char)*(byte *)(lVar4 + 0xb7) < '\0') {
    uVar9 = *(ulong *)(lVar4 + 0xa8);
    if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_10007cf68();
    }
    pvVar10 = *(void **)(lVar4 + 0xa0);
  }
  else {
    pvVar10 = (void *)(lVar4 + 0xa0);
    uVar9 = (ulong)*(byte *)(lVar4 + 0xb7);
  }
  if (uVar9 < 0x17) {
    pppuVar5 = &local_98;
    uStack_88 = CONCAT17((char)uVar9,(undefined7)uStack_88);
    if (uVar9 != 0) goto LAB_100078d6c;
  }
  else {
    uVar11 = uVar9 + 0x10 & 0xfffffffffffffff0;
    pppuVar5 = operator_new(uVar11);
    uStack_88 = uVar11 | 0x8000000000000000;
    local_98 = pppuVar5;
    local_90 = uVar9;
LAB_100078d6c:
    _memcpy(pppuVar5,pvVar10,uVar9);
  }
  *(undefined1 *)((long)pppuVar5 + uVar9) = 0;
  FUN_100345bbc(param_2);
  FUN_10010a578(local_b0);
  FUN_1000be178(param_1 + 0x8810,local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  if ((long)uStack_88 < 0) {
    operator_delete(local_98);
  }
LAB_100078dc0:
  lVar4 = *(long *)(param_1 + 0x8818);
  iVar3 = FUN_100078f00();
  uVar8 = 4;
  if (iVar3 == 0) {
    uVar8 = 0;
  }
  *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xfffffffb | uVar8;
  FUN_1003467f8();
  uVar9 = FUN_10034cfb8();
  local_b8 = *(undefined4 *)(param_2 + 0x30);
  lVar4 = param_1 + 0xfcf0;
  local_c0 = lVar1;
  FUN_100085cbc(lVar4,&local_c0);
  if ((uVar9 & 1) == 0) {
    iVar3 = FUN_1001311ec();
    if (iVar3 != 0) {
      FUN_100085d2c(lVar4,1);
    }
  }
  else {
    FUN_100085d1c(lVar4);
    lVar1 = param_1 + 0x13f20;
    FUN_1000934ac(lVar1,1);
    uVar6 = FUN_100345bbc(param_2);
    FUN_1000933a8(lVar1,uVar6);
    puVar7 = (undefined4 *)FUN_1003e10f0();
    FUN_1000933bc(*puVar7,puVar7[0x3e],lVar1,1);
  }
  *(byte *)(param_1 + 0x22978) = *(byte *)(param_1 + 0x22978) | 1;
  iVar3 = FUN_100060a94();
  pcVar2 = "hud_follow_cam_off";
  if (iVar3 == 0) {
    pcVar2 = "hud_follow_cam_on";
  }
  FUN_100652cdc(param_1 + 0xf808,pcVar2);
  iVar3 = FUN_100060a94();
  pcVar2 = "hud_follow_cam_off";
  if (iVar3 == 0) {
    pcVar2 = "hud_follow_cam_on";
  }
  FUN_100652cdc(param_1 + 0xf808,pcVar2);
  FUN_100078f50(param_1);
  return;
}




ulong FUN_100078f00(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_1004eef10();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    FUN_1003467f8();
    uVar1 = FUN_10034cde0();
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_10031615c(0xf);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      lVar2 = FUN_100134104();
      return (ulong)(*(char *)(lVar2 + 0xc) != '\0');
    }
  }
  return 0;
}




void FUN_100078f50(long param_1)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
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
  int *piVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  byte bVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  float local_b4;
  int local_b0;
  int local_ac [3];
  
  pbVar1 = (byte *)(param_1 + 0x22978);
  if ((*pbVar1 & 1) == 0) {
    return;
  }
  pfVar2 = (float *)(param_1 + 0x1efc0);
  pfVar3 = (float *)(param_1 + 0x19930);
  FUN_10016ae00(local_ac,0,&local_b0,0);
  FUN_100641464(&local_b4,&local_b8);
  FUN_10064142c(&uStack_bc,&local_c0);
  uVar19 = FUN_100641574("root-layer");
  FUN_10064e47c(local_b4,local_b8,param_1);
  uVar17 = FUN_10007b4bc(param_1);
  lVar4 = param_1 + 0xfcf0;
  FUN_100085db4();
  fVar53 = *pfVar3;
  fVar50 = *(float *)(param_1 + 0x19934);
  lVar5 = param_1 + 0x1ef80;
  fVar52 = *pfVar2;
  fVar54 = *(float *)(param_1 + 0x1efc4);
  fVar42 = *(float *)(param_1 + 0x1f508);
  fVar32 = *(float *)(param_1 + 0x1f50c);
  fVar43 = *(float *)(param_1 + 0x1f5d0);
  fVar33 = *(float *)(param_1 + 0x1f5d4);
  fVar44 = *(float *)(param_1 + 0x1f698);
  fVar34 = *(float *)(param_1 + 0x1f69c);
  fVar45 = *(float *)(param_1 + 0x219d8);
  fVar35 = *(float *)(param_1 + 0x219dc);
  fVar46 = *(float *)(param_1 + 0x21ae0);
  fVar36 = *(float *)(param_1 + 0x21ae4);
  fVar47 = *(float *)(param_1 + 0x225d8);
  fVar37 = *(float *)(param_1 + 0x225dc);
  if ((fVar53 != (float)DAT_101dc1cb8) ||
     (fVar49 = fVar52, fVar48 = fVar54, fVar50 != DAT_101dc1cb8._4_4_)) {
    *(ulong *)pfVar3 = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0x198f0);
    fVar49 = *pfVar2;
    fVar48 = *(float *)(param_1 + 0x1efc4);
  }
  if ((fVar49 != (float)DAT_101dc1cb8) || (fVar48 != DAT_101dc1cb8._4_4_)) {
    *(ulong *)pfVar2 = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(lVar5);
  }
  if ((*(float *)(param_1 + 0x1f508) != (float)DAT_101dc1cb8) ||
     (*(float *)(param_1 + 0x1f50c) != DAT_101dc1cb8._4_4_)) {
    *(ulong *)(param_1 + 0x1f508) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0x1f4c8);
  }
  lVar6 = param_1 + 0x1f658;
  if ((*(float *)(param_1 + 0x1f5d0) != (float)DAT_101dc1cb8) ||
     (*(float *)(param_1 + 0x1f5d4) != DAT_101dc1cb8._4_4_)) {
    *(ulong *)(param_1 + 0x1f5d0) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0x1f590);
  }
  if ((*(float *)(param_1 + 0x1f698) != (float)DAT_101dc1cb8) ||
     (*(float *)(param_1 + 0x1f69c) != DAT_101dc1cb8._4_4_)) {
    *(ulong *)(param_1 + 0x1f698) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(lVar6);
  }
  FUN_10064e47c(local_b4,local_b8,lVar5);
  FUN_10064e47c(uStack_bc,local_c0,param_1 + 0xb8);
  FUN_10064e5ec(0,0,param_1 + 0xb8,0,uVar19,0);
  uVar20 = FUN_1000c0844(param_1 + 0x21a60);
  FUN_10064e68c(0x44048000,0xc3b90000,uVar20,3);
  FUN_1000d0380(*(undefined8 *)(param_1 + 0x21a68));
  FUN_10007b508(param_1);
  FUN_1000d089c(0x447a0000,*(undefined8 *)(param_1 + 0x21a88));
  uVar20 = FUN_1000c083c(param_1 + 0x21a80);
  FUN_10064e47c(local_b4 * 0.5,local_b8);
  FUN_10064e5ec(0,0,uVar20,1,param_1,1);
  uVar20 = FUN_1000c0844(param_1 + 0x21a80);
  FUN_10064e68c(0xc3eb0000,0x43e10000,uVar20,1);
  lVar7 = param_1 + 0x21b88;
  FUN_10064e47c(0x43a00000,0x43a00000,lVar7);
  FUN_10064e5ec(0xc2f00000,0xc2a00000,lVar7,2,param_1,2);
  lVar23 = param_1 + 0x21b68;
  uVar20 = FUN_1000c083c(lVar23);
  FUN_10064e47c(0x43a00000,0x43a00000);
  FUN_10064e5ec(0,0,uVar20,8,lVar7,8);
  uVar21 = FUN_1000c0844(lVar23);
  FUN_10064e5ec(0,0,uVar21,8,uVar20,8);
  FUN_10064e5ec(0,0,*(undefined8 *)(param_1 + 0x21b70),0,param_1,0);
  lVar8 = param_1 + 0x21e20;
  FUN_10064e47c(0x43080000,0x43080000,lVar8);
  lVar24 = param_1 + 0x220c8;
  FUN_10064e47c(0x43080000,0x43080000,lVar24);
  FUN_1000e3c64(lVar8);
  FUN_1000e3c64(lVar24);
  uVar20 = FUN_1000c083c(lVar23);
  FUN_10064e5ec(0xc2a00000,0,lVar8,8,uVar20,3);
  uVar20 = FUN_1000c083c(lVar23);
  FUN_10064e5ec(0x41200000,0xc2100000,lVar24,8,uVar20,1);
  lVar23 = param_1 + 0x22660;
  FUN_1000e3148(lVar23);
  uVar40 = 0;
  FUN_10064e5ec(0,lVar23,2,lVar7,2);
  uVar20 = FUN_1000e3288(lVar23,0);
  uVar38 = FUN_10064eb7c(uVar20,0,uVar19,2);
  local_c8 = CONCAT44(uVar40,uVar38);
  FUN_10064e48c(param_1 + 0x22370,&local_c8);
  uVar20 = FUN_1000e3288(lVar23,1);
  uVar38 = FUN_10064eb7c(uVar20,0,uVar19,2);
  local_c8 = CONCAT44(uVar40,uVar38);
  FUN_10064e48c(param_1 + 0x22428,&local_c8);
  uVar20 = FUN_1000e3288(lVar23,2);
  uVar38 = FUN_10064eb7c(uVar20,0,uVar19,2);
  local_c8 = CONCAT44(uVar40,uVar38);
  FUN_10064e48c(param_1 + 0x224e0,&local_c8);
  FUN_10064e5ec(0,0,param_1 + 0x22370,2,uVar19,2);
  FUN_10064e5ec(0,0,param_1 + 0x22428,2,uVar19,2);
  FUN_10064e5ec(0,0,param_1 + 0x224e0,2,uVar19,2);
  lVar8 = param_1 + 0x109d0;
  FUN_100087e3c(lVar8);
  if ((*(float *)(param_1 + 0x10a20) != 1.0) || (*(float *)(param_1 + 0x10a24) != 0.0)) {
    *(undefined8 *)(param_1 + 0x10a20) = 0x3f800000;
    FUN_1000200a0(lVar8);
  }
  local_c8 = 0x42a0000043e90000;
  FUN_10064e48c(lVar8,&local_c8);
  uVar20 = NEON_fmov(0x3fc00000,4);
  if ((*(float *)(param_1 + 0x10a18) != 1.5) || (*(float *)(param_1 + 0x10a1c) != 1.5)) {
    *(undefined8 *)(param_1 + 0x10a18) = uVar20;
    FUN_1000200a0(lVar8);
  }
  iVar18 = FUN_1001312f4();
  fVar49 = 30.0;
  if (iVar18 == 0) {
    fVar49 = 40.0;
  }
  iVar18 = FUN_1001312f4();
  fVar48 = 75.0;
  fVar41 = 75.0;
  if (iVar18 == 0) {
    fVar41 = 65.0;
  }
  fVar39 = (float)FUN_10064259c(lVar8);
  fVar51 = (float)local_b0;
  FUN_10064259c(lVar8);
  lVar24 = param_1 + 0x1f048;
  fVar49 = (fVar49 - fVar41) + fVar39 + fVar51;
  fVar48 = (10.0 - fVar41) + fVar48;
  if (fVar48 <= 0.0) {
    fVar48 = 0.0;
  }
  FUN_1006525c4(fVar41,fVar49,0,0,fVar48,fVar41,lVar24);
  lVar9 = param_1 + 0x1f198;
  FUN_1006525c4(fVar41,fVar49,0,0,fVar48,fVar41,lVar9);
  uVar27 = *(uint *)(param_1 + 0x1f0cc);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f0cc) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(lVar24);
  }
  uVar27 = *(uint *)(param_1 + 0x1f21c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f21c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(lVar9);
  }
  FUN_10064e68c(0,0xc0c00000,lVar8,1);
  FUN_10064e5ec(0,0xc0c00000,lVar24,1,uVar19,1);
  FUN_10064e5ec(0,0,lVar9,8,lVar24,8);
  lVar9 = param_1 + 0x13588;
  FUN_1000963a4();
  fVar49 = *(float *)(param_1 + 0x135d0);
  if ((fVar49 != 1.5) || (fVar49 = *(float *)(param_1 + 0x135d4), fVar49 != 1.5)) {
    *(undefined8 *)(param_1 + 0x135d0) = uVar20;
    FUN_1000200a0(lVar9);
  }
  fVar48 = (float)FUN_10064259c(lVar9);
  piVar15 = local_ac;
  if (uVar17 == 0) {
    piVar15 = &local_b0;
  }
  local_c8._0_4_ = fVar48 + -2.0 + (float)*piVar15;
  lVar30 = param_1 + 0x1f2e8;
  local_c8._4_4_ = fVar49;
  FUN_10064e48c(lVar30,&local_c8);
  lVar10 = param_1 + 0x1f3d8;
  FUN_10064e47c(local_c8._4_4_,local_c8._4_4_,lVar10);
  uVar27 = *(uint *)(param_1 + 0x1360c);
  if ((uVar27 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x1360c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x5f80;
    FUN_1000200a0(lVar9);
  }
  uVar27 = *(uint *)(param_1 + 0x1f36c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f36c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(lVar30);
  }
  uVar27 = *(uint *)(param_1 + 0x1f45c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x1f45c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(lVar10);
  }
  if ((uVar17 == 0) || ((*pbVar1 >> 4 & 1) != 0)) {
    FUN_10064e5ec(0,0,lVar30,0,uVar19,0);
    FUN_10064e72c(0,lVar10,3,lVar30,1);
    FUN_10064e72c(0,lVar10,5,lVar30,5);
    *(byte *)(param_1 + 0x1f4b0) = *(byte *)(param_1 + 0x1f4b0) | 1;
    fVar49 = (float)local_ac[0] * 0.5 + 40.0;
  }
  else {
    FUN_10064e72c(0,lVar30,0,lVar24,2);
    FUN_10064e72c(0,lVar30,1,lVar24,1);
    FUN_10064e72c(0x80000000,lVar10,1,lVar30,3);
    FUN_10064e72c(0,lVar10,5,lVar30,5);
    *(byte *)(param_1 + 0x1f4b0) = *(byte *)(param_1 + 0x1f4b0) & 0xfe;
    fVar49 = (float)local_b0 * -0.5;
  }
  fVar48 = 0.0;
  FUN_10064e5ec(fVar49,lVar9,8,lVar30,8);
  lVar10 = param_1 + 0xf3b8;
  uVar38 = FUN_100086afc(lVar10);
  local_c8 = CONCAT44(fVar48,uVar38);
  FUN_10064e48c(lVar10,&local_c8);
  fVar49 = (float)FUN_10007b5e8(param_1);
  if ((*(float *)(param_1 + 0xf400) != fVar49) || (*(float *)(param_1 + 0xf404) != fVar48)) {
    *(float *)(param_1 + 0xf400) = fVar49;
    *(float *)(param_1 + 0xf404) = fVar48;
    FUN_1000200a0(lVar10);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if (uVar17 == 0) {
      FUN_10064e72c(0x41200000,lVar10,0,lVar24,2);
      uVar38 = 0xc1200000;
      uVar21 = 1;
      uVar25 = 1;
      goto LAB_100079a54;
    }
    fVar48 = 10.0;
    FUN_10064e5ec(0x41200000,lVar10,0,param_1,0);
  }
  else {
    FUN_10064e72c(0x41200000,lVar10,0,lVar30,2);
    uVar38 = 0x41200000;
    uVar21 = 3;
    uVar25 = 3;
LAB_100079a54:
    FUN_10064e72c(uVar38,lVar10,uVar21,param_1,uVar25);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    iVar18 = FUN_10031615c(8);
    if (iVar18 == 0) {
      *(uint *)(param_1 + 0xf88c) = *(uint *)(param_1 + 0xf88c) & 0xfffffffb;
    }
    else {
      lVar26 = param_1 + 0xf808;
      uVar27 = *(uint *)(param_1 + 0xf88c);
      *(uint *)(param_1 + 0xf88c) = uVar27 | 4;
      if ((uVar27 & 0x7f80) != 0x5f80) {
        *(uint *)(param_1 + 0xf88c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x5f84;
        FUN_1000200a0(lVar26);
      }
      if ((*(float *)(param_1 + 0xf850) != 1.35) || (*(float *)(param_1 + 0xf854) != 1.35)) {
        *(undefined8 *)(param_1 + 0xf850) = 0x3faccccd3faccccd;
        FUN_1000200a0(lVar26);
      }
      fVar48 = *(float *)(param_1 + 0xf858);
      if ((fVar48 != 0.5) || (fVar48 = *(float *)(param_1 + 0xf85c), fVar48 != 0.5)) {
        *(undefined1 **)(param_1 + 0xf858) = &DAT_3f0000003f000000;
        FUN_1000200a0(lVar26);
      }
    }
    lVar26 = param_1 + 64000;
    uVar38 = FUN_1006531b0(lVar26);
    local_c8 = CONCAT44(fVar48,uVar38);
    FUN_10064e48c(lVar26,&local_c8);
    if ((*(float *)(param_1 + 0xfa48) != 1.35) || (*(float *)(param_1 + 0xfa4c) != 1.35)) {
      *(undefined8 *)(param_1 + 0xfa48) = 0x3faccccd3faccccd;
      FUN_1000200a0(lVar26);
    }
    fVar49 = *(float *)(param_1 + 0xfa50);
    if ((fVar49 != 0.5) || (fVar49 = *(float *)(param_1 + 0xfa54), fVar49 != 0.5)) {
      *(undefined1 **)(param_1 + 0xfa50) = &DAT_3f0000003f000000;
      FUN_1000200a0(lVar26);
    }
    lVar11 = param_1 + 0xfbf0;
    uVar38 = FUN_1006531b0(lVar11);
    local_c8 = CONCAT44(fVar49,uVar38);
    FUN_10064e48c(lVar11,&local_c8);
    if ((*(float *)(param_1 + 0xfc38) != 1.35) || (*(float *)(param_1 + 0xfc3c) != 1.35)) {
      *(undefined8 *)(param_1 + 0xfc38) = 0x3faccccd3faccccd;
      FUN_1000200a0(lVar11);
    }
    fVar49 = *(float *)(param_1 + 0xfc40);
    if ((fVar49 != 0.5) || (fVar49 = *(float *)(param_1 + 0xfc44), fVar49 != 0.5)) {
      *(undefined1 **)(param_1 + 0xfc40) = &DAT_3f0000003f000000;
      FUN_1000200a0(lVar11);
    }
    iVar18 = FUN_10031615c(7);
    if (iVar18 == 0) {
      *(uint *)(param_1 + 0xf784) = *(uint *)(param_1 + 0xf784) & 0xfffffffb;
    }
    else {
      lVar31 = param_1 + 0xf700;
      *(uint *)(param_1 + 0xf784) = *(uint *)(param_1 + 0xf784) | 4;
      uVar38 = FUN_1006531b0(lVar31);
      local_c8 = CONCAT44(fVar49,uVar38);
      FUN_10064e48c(lVar31,&local_c8);
      uVar27 = *(uint *)(param_1 + 0xf784);
      if ((uVar27 & 0x7f80) != 0x5f80) {
        *(uint *)(param_1 + 0xf784) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x5f80;
        FUN_1000200a0(lVar31);
      }
      if ((*(float *)(param_1 + 0xf748) != 1.35) || (*(float *)(param_1 + 0xf74c) != 1.35)) {
        *(undefined8 *)(param_1 + 0xf748) = 0x3faccccd3faccccd;
        FUN_1000200a0(lVar31);
      }
      fVar49 = *(float *)(param_1 + 0xf750);
      if ((fVar49 != 0.5) || (fVar49 = *(float *)(param_1 + 0xf754), fVar49 != 0.5)) {
        *(undefined1 **)(param_1 + 0xf750) = &DAT_3f0000003f000000;
        FUN_1000200a0(lVar31);
      }
    }
    FUN_10064e72c(0x41400000,lVar26,0,lVar30,2);
    if (uVar17 == 0) {
      FUN_10064e72c(0x41400000,lVar26,3,param_1,3);
      FUN_10064e72c(0x41a00000,lVar11,3,lVar26,1);
      FUN_10064e72c(0,lVar11,5,lVar26,5);
      lVar31 = lVar11;
      if ((*(byte *)(param_1 + 0xf88c) >> 2 & 1) != 0) {
        lVar31 = param_1 + 0xf808;
        FUN_10064e72c(0x41a00000,lVar31,3,lVar11,1);
        FUN_10064e72c(0,lVar31,5,lVar11,5);
      }
      lVar30 = lVar31;
      if ((*(byte *)(param_1 + 0xf784) >> 2 & 1) != 0) {
        lVar30 = param_1 + 0xf700;
        FUN_10064e72c(0x41a00000,lVar30,3,lVar31,1);
        FUN_10064e72c(0,lVar30,5,lVar31,5);
      }
    }
    else {
      FUN_10064e72c(0xc1400000,lVar26,1,param_1,1);
      lVar31 = lVar26;
      if ((*(byte *)(param_1 + 0xfc74) >> 2 & 1) != 0) {
        FUN_10064e72c(0xc1a00000,lVar11,1,lVar26,3);
        FUN_10064e72c(0,lVar11,5,lVar26,5);
        lVar31 = lVar11;
      }
      lVar30 = lVar31;
      if ((*(byte *)(param_1 + 0xf88c) >> 2 & 1) != 0) {
        lVar30 = param_1 + 0xf808;
        FUN_10064e72c(0xc1a00000,lVar30,1,lVar31,3);
        FUN_10064e72c(0,lVar30,5,lVar31,5);
      }
      if ((*(byte *)(param_1 + 0xf784) >> 2 & 1) != 0) {
        lVar11 = param_1 + 0xf700;
        FUN_10064e72c(0xc1a00000,lVar11,1,lVar30,3);
        FUN_10064e72c(0,lVar11,5,lVar30,5);
        lVar30 = lVar11;
      }
    }
    FUN_10064e72c(0x41a00000,param_1 + 0xf910,0,lVar26,2);
    FUN_10064e72c(0,param_1 + 0xf910,1,lVar26,1);
    uVar38 = FUN_100652e60(lVar26);
    local_c8 = CONCAT44(fVar49,uVar38);
    FUN_10064e48c(param_1 + 0xfb00,&local_c8);
    FUN_10064e5ec(0,0,param_1 + 0xfb00,8,lVar26,8);
  }
  else {
    *(uint *)(param_1 + 0xf88c) = *(uint *)(param_1 + 0xf88c) & 0xfffffffb;
    lVar30 = param_1 + 64000;
    FUN_10064e47c(0x43280000,0x43280000,lVar30);
    if ((*(float *)(param_1 + 0xfa48) != 1.0) || (*(float *)(param_1 + 0xfa4c) != 1.0)) {
      uVar21 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfa48) = uVar21;
      FUN_1000200a0(lVar30);
    }
    lVar26 = param_1 + 0xfbf0;
    FUN_10064e47c(0x43280000,0x43280000,lVar26);
    fVar49 = *(float *)(param_1 + 0xfc38);
    if ((fVar49 != 1.0) || (fVar49 = *(float *)(param_1 + 0xfc3c), fVar49 != 1.0)) {
      uVar21 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xfc38) = uVar21;
      FUN_1000200a0(lVar26);
    }
    iVar18 = FUN_10031615c(7);
    if (iVar18 == 0) {
      *(uint *)(param_1 + 0xf784) = *(uint *)(param_1 + 0xf784) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0xf784) = *(uint *)(param_1 + 0xf784) | 4;
      uVar38 = FUN_100652e60(lVar30);
      local_c8 = CONCAT44(fVar49,uVar38);
      FUN_10064e48c(param_1 + 0xf700,&local_c8);
      if ((*(float *)(param_1 + 0xf748) != 1.0) || (*(float *)(param_1 + 0xf74c) != 1.0)) {
        uVar21 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0xf748) = uVar21;
        FUN_1000200a0(param_1 + 0xf700);
      }
    }
    FUN_10064e72c(0x41200000,lVar30,0,lVar10,2);
    FUN_10064e72c(0,lVar30,3,lVar10,3);
    lVar11 = param_1 + 0xf700;
    FUN_10064e72c(0x41200000,lVar11,0,lVar30,2);
    FUN_10064e72c(0,lVar11,3,lVar30,3);
    iVar18 = FUN_10031615c(7);
    if (iVar18 == 0) {
      lVar11 = lVar30;
    }
    FUN_10064e72c(0x41200000,lVar26,0,lVar11,2);
    FUN_10064e72c(0,lVar26,3,lVar11,3);
    lVar30 = 0;
  }
  if ((*pbVar1 >> 3 & 1) == 0) {
    iVar18 = FUN_100642d08(param_1 + 0xf910);
    if (iVar18 != 0) {
      FUN_10064e68c(0,0,param_1 + 0xf910,0);
    }
  }
  lVar26 = param_1 + 0x15738;
  FUN_1000ac4e4(lVar26);
  if ((*(float *)(param_1 + 0x15780) != 1.5) || (*(float *)(param_1 + 0x15784) != 1.5)) {
    *(undefined8 *)(param_1 + 0x15780) = uVar20;
    FUN_1000200a0(lVar26);
  }
  if ((*pbVar1 >> 4 & 1) == 0) {
    if ((uVar17 & lVar30 != 0) == 1) {
      uVar38 = 0xc1a00000;
      uVar20 = 1;
      uVar21 = 3;
LAB_10007a298:
      FUN_10064e72c(uVar38,lVar26,uVar20,lVar30,uVar21);
      uVar20 = 5;
      uVar21 = 5;
      goto LAB_10007a2b0;
    }
    if (lVar30 != 0) {
      uVar38 = 0x41a00000;
      uVar20 = 3;
      uVar21 = 1;
      goto LAB_10007a298;
    }
  }
  else {
    lVar30 = param_1 + 0x8b90;
    FUN_10064e72c(0x41200000,lVar26,0,lVar30,2);
    uVar20 = 1;
    uVar21 = 1;
LAB_10007a2b0:
    FUN_10064e72c(0,lVar26,uVar20,lVar30,uVar21);
  }
  lVar30 = param_1 + 0x155a0;
  FUN_100072598(lVar30);
  if ((*pbVar1 >> 4 & 1) == 0) {
    FUN_100070cbc(lVar30,0);
    FUN_10064e72c(0,lVar30,1,uVar19,1);
    lVar26 = lVar10;
    if (uVar17 != 0) {
      if ((*(byte *)(param_1 + 0x1fb3c) >> 2 & 1) == 0) {
        lVar26 = param_1 + 0xf910;
        iVar18 = FUN_100642d08(lVar26);
        if (iVar18 != 0) goto LAB_10007a3c4;
        lVar26 = 64000;
      }
      else {
        lVar26 = 0x1fab8;
      }
      lVar26 = param_1 + lVar26;
    }
LAB_10007a3c4:
    FUN_10064e72c(0x42000000,lVar30,0,lVar26,2);
  }
  else {
    FUN_100070cbc(lVar30,1);
    FUN_10064e72c(0x42000000,lVar30,3,param_1 + 64000,1);
    FUN_10064e72c(0,lVar30,0,param_1 + 64000,0);
  }
  bVar29 = *pbVar1;
  if ((bVar29 >> 4 & 1) == 0) {
    lVar30 = param_1 + 0x2c8;
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | 4;
    FUN_10006db14(lVar30);
    iVar18 = FUN_100126cb8(local_b4,local_b8);
    fVar49 = 1.25;
    if (iVar18 == 0) {
      fVar49 = 1.38;
    }
    local_c8 = 0x4341f3b643fc8d1b;
    FUN_10064e48c(lVar30,&local_c8);
    if ((*(float *)(param_1 + 0x310) != fVar49) || (*(float *)(param_1 + 0x314) != fVar49)) {
      *(float *)(param_1 + 0x310) = fVar49;
      *(float *)(param_1 + 0x314) = fVar49;
      FUN_1000200a0(lVar30);
    }
    FUN_10006db14(lVar30);
    FUN_1006557ec(param_1 + 0x170);
    FUN_10064e5ec(0,0,param_1 + 0x170,6,uVar19,6);
    bVar29 = *pbVar1;
  }
  else {
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xfffffffb;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x8818);
  if ((bVar29 >> 4 & 1) == 0) {
    fVar49 = 500.0;
    FUN_10064e47c(0x44480000,uVar19);
    FUN_10064e72c(0x43820000,uVar19,3,param_1,3);
    uVar38 = 0xc2700000;
    uVar20 = 2;
    lVar30 = param_1 + 0x2c8;
  }
  else {
    fVar49 = 274.0;
    FUN_10064e47c(0x44480000,uVar19);
    FUN_10064e72c(0x41f00000,uVar19,3,lVar10,1);
    uVar38 = 0x41800000;
    uVar20 = 0;
    lVar30 = lVar10;
  }
  FUN_10064e72c(uVar38,uVar19,uVar20,lVar30,0);
  iVar18 = FUN_100126a30();
  if ((iVar18 == 0) || ((*pbVar1 >> 4 & 1) != 0)) {
    bVar29 = 0;
  }
  else {
    bVar29 = (*pbVar1 >> 4 ^ 0xff) & 1;
  }
  lVar30 = param_1 + 0x199b8;
  FUN_10008165c(lVar30,bVar29 ^ 1);
  FUN_1000816dc(lVar30);
  if (bVar29 == 0) {
    if ((*pbVar1 >> 4 & 1) == 0) {
      local_c8._4_4_ = 213.0;
      fVar49 = (float)FUN_10064eb7c(param_1,3,param_1 + 0x170,3);
      local_c8 = CONCAT44(local_c8._4_4_,fVar49 + -20.0);
      FUN_10064e48c(lVar30,&local_c8);
      fVar49 = -10.0;
      FUN_10064e68c(0x41200000,lVar30,3);
      goto LAB_10007a64c;
    }
    local_c8 = 0x4355000044ac8000;
    FUN_10064e48c(lVar30,&local_c8);
    FUN_10064e72c(0xc3ff0000,lVar30,1,lVar7,3);
    FUN_10064e72c(0,lVar30,2,lVar7,2);
    FUN_100081690(lVar30,1);
  }
  else {
    local_c8 = CONCAT44(local_c8._4_4_,0x43550000);
    lVar7 = lVar10;
    lVar26 = lVar10;
    if (uVar17 == 0) {
      lVar7 = param_1 + 64000;
      lVar26 = param_1 + 0xf700;
    }
    FUN_10064eb7c(lVar26,3,param_1,3);
    local_c8 = CONCAT44(fVar49 + -20.0,(float)local_c8);
    FUN_10064e48c(lVar30,&local_c8);
    FUN_10064e72c(0x41200000,lVar30,0,lVar7,2);
    FUN_10064e72c(0,lVar30,3,lVar7,3);
LAB_10007a64c:
    FUN_100081690(lVar30,0);
    FUN_10008169c(lVar30,0);
  }
  lVar7 = param_1 + 0xc428;
  FUN_1000760c0(lVar7);
  iVar18 = FUN_100126a30();
  lVar26 = lVar30;
  if ((iVar18 == 0) && ((*pbVar1 >> 4 & 1) == 0)) {
    local_c8 = CONCAT44(local_c8._4_4_,0x42c00000);
    lVar11 = lVar10;
    if (uVar17 == 0) {
      lVar11 = param_1 + 0xf700;
    }
    FUN_10064eb7c(lVar11,3,lVar30,0);
    local_c8 = CONCAT44(fVar49 + -20.0,(float)local_c8);
    FUN_10064e48c(lVar7,&local_c8);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_10064e72c(0xc1200000,lVar7,2,lVar30,0);
      uVar21 = 0;
      uVar19 = 3;
      uVar20 = 3;
    }
    else {
      FUN_10064e72c(0x41200000,lVar7,3,param_1 + 64000,1);
      uVar21 = 0;
      uVar19 = 0;
      uVar20 = 0;
      lVar26 = param_1 + 64000;
    }
  }
  else {
    if ((*pbVar1 >> 4 & 1) == 0) {
      fVar48 = (float)FUN_10064eb7c(lVar30,2,param_1 + 0x170,3);
      fVar49 = -20.0;
    }
    else {
      fVar48 = (float)FUN_10064e3cc(lVar30);
      fVar49 = -62.0;
    }
    local_c8 = CONCAT44(0x42c00000,fVar48 + fVar49);
    FUN_10064e48c(lVar7,&local_c8);
    if ((*pbVar1 >> 4 & 1) == 0) {
      FUN_10064e72c(0x41200000,lVar7,3,lVar30,1);
      uVar21 = 0;
      uVar19 = 2;
      uVar20 = 2;
      lVar26 = param_1;
    }
    else {
      FUN_10064e72c(0xc1000000,lVar7,2,lVar30,0);
      uVar21 = 0xc2780000;
      uVar19 = 1;
      uVar20 = 1;
    }
  }
  FUN_10064e72c(uVar21,lVar7,uVar19,lVar26,uVar20);
  if ((*pbVar1 >> 4 & 1) == 0) {
    lVar24 = param_1 + 0x8848;
    *(byte *)(param_1 + 0xc36a) = *(byte *)(param_1 + 0xc36a) | 1;
    if ((*(float *)(param_1 + 0x8898) != 1.0) || (*(float *)(param_1 + 0x889c) != 1.0)) {
      uVar19 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x8898) = uVar19;
      FUN_1000200a0(lVar24);
    }
    fVar49 = local_b4;
    fVar48 = (float)FUN_10064259c(param_1 + 0x170);
    fVar41 = -60.0;
    FUN_10064259c(param_1 + 0x170);
    fVar41 = fVar41 * 0.9;
    FUN_10064e47c((fVar49 - fVar48) * 0.5 + -60.0,lVar24);
    fVar48 = (float)FUN_10064e3cc(lVar24);
    FUN_10064e3cc(lVar24);
    fVar49 = fVar41 + -55.0;
    if (fVar41 + -55.0 <= 0.0) {
      fVar49 = 0.0;
    }
    FUN_1006525c4(0x42820000,fVar48 + -35.0,0,0x42820000,fVar49,0,param_1 + 0x1f720);
    FUN_1006525c4(0x42820000,fVar48 + -35.0,0,0x42820000,fVar49,0,param_1 + 0x1f870);
    uVar27 = *(uint *)(param_1 + 0x1f7a4);
    if ((uVar27 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f7a4) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
      FUN_1000200a0(param_1 + 0x1f720);
    }
    uVar27 = *(uint *)(param_1 + 0x1f8f4);
    if ((uVar27 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x1f8f4) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
      FUN_1000200a0(param_1 + 0x1f870);
    }
    FUN_10064e47c(local_b4,local_b8,lVar6);
    FUN_10064e68c(0xc1200000,0xc1200000,lVar24,2);
    FUN_1000a9a8c(lVar24);
  }
  else {
    *(byte *)(param_1 + 0xc36a) = *(byte *)(param_1 + 0xc36a) & 0xfe;
    lVar26 = param_1 + 0x8b90;
    lVar11 = param_1 + 64000;
    uVar38 = FUN_100652e60(lVar11);
    local_c8 = CONCAT44(fVar49,uVar38);
    FUN_10064e48c(lVar26,&local_c8);
    lVar31 = param_1 + 0x8c90;
    uVar38 = FUN_100652e60(lVar11);
    local_c8 = CONCAT44(fVar49,uVar38);
    FUN_10064e48c(lVar31,&local_c8);
    lVar12 = param_1 + 0x8e90;
    uVar38 = FUN_100652e60(lVar11);
    local_c8 = CONCAT44(fVar49,uVar38);
    FUN_10064e48c(lVar12,&local_c8);
    lVar13 = param_1 + 0x8a90;
    uVar38 = FUN_100652e60(lVar11);
    local_c8 = CONCAT44(fVar49,uVar38);
    FUN_10064e48c(lVar13,&local_c8);
    lVar14 = param_1 + 0x8f90;
    FUN_100652e60(lVar11);
    FUN_10008dfd8(lVar14);
    FUN_10064e72c(0x41a00000,lVar26,0,lVar24,2);
    FUN_10064e72c(0xc1200000,lVar26,1,param_1,1);
    FUN_10064e72c(0xc1200000,lVar31,1,lVar26,3);
    FUN_10064e72c(0,lVar31,5,lVar26,5);
    FUN_10064e72c(0x41200000,lVar12,0,param_1 + 0xfbf0,2);
    FUN_10064e72c(0,lVar12,3,param_1 + 0xfbf0,3);
    FUN_10064e72c(0x41200000,lVar13,0,lVar12,2);
    FUN_10064e72c(0,lVar13,3,lVar12,3);
    FUN_10064e72c(0x41200000,param_1 + 0xf910,0,lVar13,2);
    FUN_10064e72c(0,param_1 + 0xf910,3,lVar13,3);
    *(byte *)(param_1 + 0xb77d) = *(byte *)(param_1 + 0xb77d) & 0xbf;
    *(undefined4 *)(param_1 + 0xb778) = 0x43af0000;
    FUN_10008ddec(lVar14);
    FUN_10064e72c(0xc2c80000,lVar14,1,lVar31,3);
    FUN_10064e72c(0,lVar14,5,lVar31,5);
  }
  if ((*pbVar1 >> 4 & 1) != 0) {
    lVar24 = param_1 + 0x227f0;
    FUN_1000ddc40(lVar24);
    FUN_10064e72c(0xc1a00000,lVar24,2,lVar23,0);
    FUN_10064e72c(0xc2f00000,lVar24,1,param_1,1);
  }
  uVar27 = 0;
  do {
    uVar19 = FUN_1000e3298(lVar23,uVar27);
    uVar20 = 0xc3440000;
    FUN_10064e72c((float)uVar27 * -80.0 + -196.0,uVar19,2,lVar23,0);
    FUN_10064e72c(0xc3340000,uVar19,1,lVar23,1);
    uVar27 = uVar27 + 1;
  } while (uVar27 != 3);
  iVar18 = 0;
  do {
    uVar19 = FUN_100082ca4(lVar30,iVar18);
    FUN_10064e72c(0xc3440000,uVar19,2,lVar23,0);
    FUN_10064e72c(0xc3340000,uVar19,1,lVar23,1);
    fVar49 = (float)uVar20;
    iVar18 = iVar18 + 1;
  } while (iVar18 != 6);
  lVar23 = param_1 + 0x227f0;
  uVar22 = FUN_1000ddd58(lVar23);
  if ((uVar22 & 1) != 0) {
    uVar19 = FUN_1000dddd8(lVar23);
    FUN_10064e72c(0xc3dc0000,uVar19,1,param_1 + 0x8b90,3);
    FUN_10064e72c(0,uVar19,0,param_1 + 0x8b90,0);
  }
  iVar18 = FUN_1000ddd68(lVar23);
  if (iVar18 != 0) {
    uVar19 = FUN_1000ddde0(lVar23);
    FUN_10064e72c(0xc3dc0000,uVar19,1,param_1 + 0x8b90,3);
    FUN_10064e72c(0,uVar19,0,param_1 + 0x8b90,0);
  }
  lVar23 = param_1 + 0x13f20;
  iVar18 = FUN_100642d08(lVar23);
  if (iVar18 != 0) {
    local_c8 = 0x42e00000442a0000;
    FUN_10064e48c(lVar23,&local_c8);
    FUN_10009308c(lVar23);
    fVar49 = 0.0;
    FUN_10064e5ec(0,lVar23,4,param_1,4);
  }
  iVar18 = FUN_100642d08(lVar4);
  if (iVar18 != 0) {
    iVar18 = FUN_1001312f4();
    fVar49 = 220.0;
    fVar48 = 220.0;
    if (iVar18 == 0) {
      fVar48 = 120.0;
    }
    iVar18 = FUN_100086294(lVar4);
    if (iVar18 == 0) {
      iVar18 = FUN_100086288(lVar4);
      if (iVar18 == 0) {
        bVar16 = false;
        if ((*(float *)(param_1 + 0xfd44) == 0.0) &&
           (bVar16 = false, !NAN(*(float *)(param_1 + 0xfd40)))) {
          bVar16 = *(float *)(param_1 + 0xfd40) == 0.0;
        }
        if (!bVar16) {
          *(undefined8 *)(param_1 + 0xfd40) = 0;
          FUN_1000200a0(lVar4);
        }
        if ((*(float *)(param_1 + 0xfd38) != *(float *)(param_1 + 0x135d0)) ||
           (*(float *)(param_1 + 0xfd3c) != *(float *)(param_1 + 0x135d4))) {
          *(float *)(param_1 + 0xfd38) = *(float *)(param_1 + 0x135d0);
          *(float *)(param_1 + 0xfd3c) = *(float *)(param_1 + 0x135d4);
          FUN_1000200a0(lVar4);
        }
        FUN_10064e47c(fVar48,0x42240000,lVar4);
        fVar49 = *(float *)(param_1 + 0x135c8);
        fVar48 = (float)FUN_10064259c(lVar9);
        fVar48 = fVar48 + fVar49;
        fVar49 = *(float *)(param_1 + 0x135cc);
        if ((*(float *)(param_1 + 0xfd30) != fVar48) || (*(float *)(param_1 + 0xfd34) != fVar49)) {
          *(float *)(param_1 + 0xfd30) = fVar48;
          *(float *)(param_1 + 0xfd34) = fVar49;
          goto LAB_10007b04c;
        }
      }
      else {
        if ((*(uint *)(param_1 + 0xfd74) >> 2 & 1) == 0) {
          *(uint *)(param_1 + 0xfd74) = *(uint *)(param_1 + 0xfd74) | 4;
        }
        if ((*(float *)(param_1 + 0xfd40) != 0.5) || (*(float *)(param_1 + 0xfd44) != 0.0)) {
          *(undefined8 *)(param_1 + 0xfd40) = 0x3f000000;
          FUN_1000200a0(lVar4);
        }
        if ((*(float *)(param_1 + 0xfd30) != local_b4 * 0.5) ||
           (*(float *)(param_1 + 0xfd34) != 10.0)) {
          *(float *)(param_1 + 0xfd30) = local_b4 * 0.5;
          *(undefined4 *)(param_1 + 0xfd34) = 0x41200000;
          FUN_1000200a0(lVar4);
        }
        FUN_10064e47c(fVar48 + 600.0,0x42b60000,lVar4);
        fVar49 = *(float *)(param_1 + 0x135d4);
        if ((*(float *)(param_1 + 0xfd38) != *(float *)(param_1 + 0x135d0)) ||
           (*(float *)(param_1 + 0xfd3c) != fVar49)) {
          *(float *)(param_1 + 0xfd38) = *(float *)(param_1 + 0x135d0);
          *(float *)(param_1 + 0xfd3c) = fVar49;
LAB_10007b04c:
          FUN_1000200a0(lVar4);
        }
      }
    }
    else {
      *(uint *)(param_1 + 0xfd74) = *(uint *)(param_1 + 0xfd74) & 0xfffffffb;
    }
  }
  plVar28 = *(long **)(param_1 + 0x15578);
  fVar48 = (float)FUN_1000885b4(lVar8);
  lVar23 = FUN_10003d5bc(param_1);
  fVar48 = (fVar48 - (float)*(undefined8 *)(lVar23 + 8)) / (float)*(undefined8 *)(lVar23 + 0x10);
  fVar49 = (fVar49 - (float)((ulong)*(undefined8 *)(lVar23 + 8) >> 0x20)) /
           (float)((ulong)*(undefined8 *)(lVar23 + 0x10) >> 0x20);
  bVar16 = false;
  if ((*(float *)(plVar28 + 8) == fVar48) &&
     (bVar16 = false, !NAN(*(float *)((long)plVar28 + 0x44)) && !NAN(fVar49))) {
    bVar16 = *(float *)((long)plVar28 + 0x44) == fVar49;
  }
  if (!bVar16) {
    plVar28[8] = CONCAT44(fVar49,fVar48);
    FUN_1000200a0(plVar28);
  }
  local_c8 = 0x3f800000;
  (**(code **)(*plVar28 + 0x28))(plVar28,&local_c8);
  (**(code **)(*plVar28 + 0x90))(plVar28);
  fVar48 = (float)FUN_10064259c(param_1 + 0x8848);
  FUN_1003467f8();
  iVar18 = FUN_10034ceb0();
  fVar49 = 1.0;
  if (iVar18 == 0) {
    fVar49 = 0.8;
  }
  fVar41 = -50.0;
  lVar23 = param_1 + 0xc370;
  FUN_1000aa0d0(param_1 + 0x8848);
  FUN_10064e47c(fVar48 * fVar49 + -50.0,fVar41 + -20.0,lVar23);
  if ((*(float *)(param_1 + 0xc3c0) != *(float *)(param_1 + 0x8898)) ||
     (*(float *)(param_1 + 0xc3c4) != *(float *)(param_1 + 0x889c))) {
    *(float *)(param_1 + 0xc3c0) = *(float *)(param_1 + 0x8898);
    *(float *)(param_1 + 0xc3c4) = *(float *)(param_1 + 0x889c);
    FUN_1000200a0(lVar23);
  }
  uVar19 = NEON_fmov(0x41200000,4);
  fVar49 = (float)*(undefined8 *)(param_1 + 0x8888) + (float)uVar19;
  fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x8888) >> 0x20) +
           (float)((ulong)uVar19 >> 0x20);
  if ((*(float *)(param_1 + 0xc3b0) != fVar49) || (*(float *)(param_1 + 0xc3b4) != fVar48)) {
    *(ulong *)(param_1 + 0xc3b0) = CONCAT44(fVar48,fVar49);
    FUN_1000200a0(lVar23);
  }
  lVar23 = param_1 + 0x15ba0;
  if ((*pbVar1 >> 4 & 1) == 0) {
    lVar24 = param_1 + 0x8b90;
    FUN_10064e72c(0xc1200000,lVar23,2,lVar24,0);
    uVar19 = 4;
    uVar20 = 4;
  }
  else {
    lVar24 = param_1 + 64000;
    FUN_10064e72c(0x41200000,lVar23,3,lVar24,1);
    uVar19 = 0;
    uVar20 = 0;
  }
  FUN_10064e72c(0,lVar23,uVar19,lVar24,uVar20);
  lVar23 = param_1 + 0x1fab8;
  if ((*(uint *)(param_1 + 0x1fb3c) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x1fb3c) = *(uint *)(param_1 + 0x1fb3c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(lVar23);
  }
  if ((*(byte *)(param_1 + 0x1f004) >> 2 & 1) == 0) {
    uVar38 = 0x428c0000;
    fVar49 = -20.0;
    uVar19 = 1;
  }
  else {
    if ((*pbVar1 >> 4 & 1) == 0) {
      uVar38 = 3;
      if (uVar17 != 0) {
        uVar38 = 1;
      }
      FUN_10064e72c(0x41200000,lVar23,0,param_1 + 64000,2);
      FUN_10064e72c(0,lVar23,uVar38,param_1 + 64000,uVar38);
      goto LAB_10007b300;
    }
    fVar49 = (float)(**(code **)(*(long *)(param_1 + 0x8a90) + 0x50))();
    fVar49 = fVar49 + 20.0;
    uVar38 = 0xc1200000;
    uVar19 = 3;
  }
  FUN_10064e68c(fVar49,uVar38,lVar23,uVar19);
LAB_10007b300:
  FUN_1000760c0(lVar7);
  FUN_1000816dc(lVar30);
  FUN_100085db4(lVar4);
  FUN_100086a78(lVar10);
  FUN_1000963a4(lVar9);
  FUN_100087e3c(lVar8);
  if ((*pfVar3 != fVar53) || (*(float *)(param_1 + 0x19934) != fVar50)) {
    *pfVar3 = fVar53;
    *(float *)(param_1 + 0x19934) = fVar50;
    FUN_1000200a0(param_1 + 0x198f0);
  }
  if ((*pfVar2 != fVar52) || (*(float *)(param_1 + 0x1efc4) != fVar54)) {
    *pfVar2 = fVar52;
    *(float *)(param_1 + 0x1efc4) = fVar54;
    FUN_1000200a0(lVar5);
  }
  if ((*(float *)(param_1 + 0x1f508) != fVar42) || (*(float *)(param_1 + 0x1f50c) != fVar32)) {
    *(float *)(param_1 + 0x1f508) = fVar42;
    *(float *)(param_1 + 0x1f50c) = fVar32;
    FUN_1000200a0(param_1 + 0x1f4c8);
  }
  if ((*(float *)(param_1 + 0x1f5d0) != fVar43) || (*(float *)(param_1 + 0x1f5d4) != fVar33)) {
    *(float *)(param_1 + 0x1f5d0) = fVar43;
    *(float *)(param_1 + 0x1f5d4) = fVar33;
    FUN_1000200a0(param_1 + 0x1f590);
  }
  if ((*(float *)(param_1 + 0x1f698) != fVar44) || (*(float *)(param_1 + 0x1f69c) != fVar34)) {
    *(float *)(param_1 + 0x1f698) = fVar44;
    *(float *)(param_1 + 0x1f69c) = fVar34;
    FUN_1000200a0(lVar6);
  }
  if ((*(float *)(param_1 + 0x219d8) != fVar45) || (*(float *)(param_1 + 0x219dc) != fVar35)) {
    *(float *)(param_1 + 0x219d8) = fVar45;
    *(float *)(param_1 + 0x219dc) = fVar35;
    FUN_1000200a0(param_1 + 0x21998);
  }
  if ((*(float *)(param_1 + 0x21ae0) != fVar46) || (*(float *)(param_1 + 0x21ae4) != fVar36)) {
    *(float *)(param_1 + 0x21ae0) = fVar46;
    *(float *)(param_1 + 0x21ae4) = fVar36;
    FUN_1000200a0(param_1 + 0x21aa0);
  }
  if ((*(float *)(param_1 + 0x225d8) != fVar47) || (*(float *)(param_1 + 0x225dc) != fVar37)) {
    *(float *)(param_1 + 0x225d8) = fVar47;
    *(float *)(param_1 + 0x225dc) = fVar37;
    FUN_1000200a0(param_1 + 0x22598);
  }
  return;
}




void FUN_10007b4b4(void)

{
  return;
}




void thunk_FUN_100078f50(void)

{
  FUN_100078f50();
  return;
}




byte FUN_10007b4bc(long param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_100440cb4();
  if ((iVar2 == 2) || (iVar2 = FUN_10031615c(0x16), iVar2 == 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x22978) >> 4 & 1;
  }
  return bVar1;
}




void FUN_10007b508(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  uVar1 = FUN_1000c083c(param_1 + 0x21a60);
  if ((*(byte *)(param_1 + 0x22978) & 0x60) == 0) {
    FUN_10064e47c(local_34 * 0.5,local_38,uVar1);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    fVar4 = *(float *)(*(long *)(param_1 + 0x21a68) + 0x4f8);
    fVar4 = fVar4 + fVar4;
    FUN_10064e47c(fVar4,fVar4,uVar1);
    param_1 = FUN_1000c0844(param_1 + 0x21a60);
    uVar2 = 8;
    uVar3 = 8;
  }
  FUN_10064e5ec(0,0,uVar1,uVar2,param_1,uVar3);
  return;
}




undefined1  [16] FUN_10007b5e8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  ulong uVar7;
  
  uVar2 = FUN_100126c88();
  auVar4 = FUN_100086b0c(param_1 + 0xf3b8,uVar2);
  uVar2 = auVar4._8_8_;
  uVar7 = auVar4._0_8_;
  iVar1 = FUN_1001270c4();
  if (iVar1 < 2) goto LAB_10007b668;
  fVar3 = (float)FUN_100316194(0x11);
  if (0.5 <= fVar3) {
    fVar5 = 1.25;
    if (0.5 < fVar3) {
      fVar5 = 0.5;
      fVar6 = 1.5;
      goto LAB_10007b65c;
    }
  }
  else {
    fVar5 = 0.6;
    fVar6 = 1.3;
LAB_10007b65c:
    fVar5 = fVar5 + fVar6 * fVar3;
  }
  uVar7 = (ulong)(uint)(fVar5 * auVar4._0_4_);
  uVar2 = 0;
LAB_10007b668:
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar7;
  return auVar4;
}




void FUN_10007b680(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,int param_5)

{
  long lVar1;
  byte *pbVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  
  pbVar2 = (byte *)(param_2 + 0x22978);
  puVar3 = (uint *)(param_2 + 0x1fb3c);
  FUN_100641464(auStack_74,auStack_78);
  uVar7 = FUN_10007b4bc(param_2);
  bVar10 = *pbVar2;
  uVar12 = (uint)param_3;
  FUN_1000868bc(param_1,param_2 + 0xf3b8,uVar12 & (param_4 & 0x20) >> 5,(uint)uVar7 ^ 1,1);
  uVar9 = uVar12 & (param_4 & 8) >> 3;
  FUN_100269e20(param_1,param_2 + 0x1f4c8,uVar9,uVar7,1);
  FUN_100269e20(param_1,param_2 + 0x1ef80,uVar12 & (param_4 & 0x10) >> 4,1,1);
  uVar5 = uVar12 & (param_4 & 0x8000) >> 0xf;
  FUN_100269e20(param_1,param_2 + 0x1f590,uVar5,uVar7,1);
  FUN_100269e20(param_1,param_2 + 0x1f658,param_3,4,1);
  FUN_100086228(param_1,param_2 + 0xfcf0,uVar9,2,1);
  lVar1 = param_2 + 0x2c8;
  uVar9 = uVar12 & (param_4 & 4) >> 2;
  FUN_10006d758(param_1,lVar1,uVar9,3,1);
  FUN_100082c4c(param_1,param_2 + 0x199b8,uVar12 & (param_4 & 0x40) >> 6,-(bVar10 >> 4 & 1) & 3,1);
  FUN_100076728(param_1,param_2 + 0xc428,uVar12 & (param_4 & 0x80) >> 7,0,1);
  FUN_100070cb4(param_1,param_2 + 0x155a0,uVar12 & (param_4 & 0x4000) >> 0xe,1,1);
  FUN_100269e20(param_1,param_2 + 0x22598,uVar9,1,1);
  FUN_100269e20(param_1,param_2 + 0x21998,uVar12 & (param_4 & 0x100000) >> 0x14,0,1);
  FUN_100269e20(param_1,param_2 + 0x21aa0,uVar12 & (param_4 & 0x200000) >> 0x15,1,1);
  if (uVar12 == 0) {
    FUN_1000a34a4(param_1,param_2 + 0x15ba0,0,4,1);
    *puVar3 = *puVar3 & 0xfffffffb;
    FUN_1000be548(param_2 + 0x8810,0);
    FUN_1000cb164(*(undefined8 *)(param_2 + 0x15578),0);
    if (param_5 == 0) goto LAB_10007bb70;
  }
  else {
    FUN_1000a34a4(param_1,param_2 + 0x15ba0,(uint)(*pbVar2 >> 1) & (param_4 & 0x2000) >> 0xd,4,1);
    FUN_1003467f8();
    uVar8 = FUN_10034cde0();
    uVar9 = *puVar3;
    if ((uVar8 & 1) == 0) {
      uVar9 = uVar9 & 0xfffffffb;
    }
    else {
      uVar9 = uVar9 & 0xfffffff8 | uVar9 & 3 | (param_4 >> 0x1c & 1) << 2;
    }
    *puVar3 = uVar9;
    FUN_1003467f8();
    uVar8 = FUN_10034cde0();
    if ((uVar8 & 1) == 0) {
      iVar6 = FUN_100078f00();
      uVar9 = 0;
      if (iVar6 != 0) {
        uVar9 = param_4 >> 0x1d & 1;
      }
    }
    else {
      uVar9 = 0;
    }
    FUN_1000be548(param_2 + 0x8810,uVar9);
    if ((param_4 >> 0x16 & 1) == 0) {
      FUN_10006e08c();
    }
    else {
      FUN_10006e078(lVar1,0);
    }
    lVar4 = param_2 + 0x22660;
    FUN_1000e3138(lVar4,0,param_4 >> 0x16 & 1);
    if ((param_4 >> 0x17 & 1) == 0) {
      FUN_10006e08c();
    }
    else {
      FUN_10006e078(lVar1,1);
    }
    FUN_1000e3138(lVar4,1,param_4 >> 0x17 & 1);
    if ((param_4 >> 0x18 & 1) == 0) {
      FUN_10006e08c();
    }
    else {
      FUN_10006e078(lVar1,2);
    }
    FUN_1000e3138(lVar4,2,param_4 >> 0x18 & 1);
    uVar9 = param_4 >> 0x1a & 1;
    FUN_10006e0a0(lVar1,uVar9);
    FUN_1000ddd78(param_2 + 0x227f0,uVar9);
    uVar9 = param_4 >> 0x1b & 1;
    FUN_10006e0ec(lVar1,uVar9);
    FUN_1000ddda8(param_2 + 0x227f0,uVar9);
    if (((*pbVar2 >> 4 & 1) == 0) || (iVar6 = FUN_100316180(0x21), iVar6 != 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_4 >> 0x17 & 4;
    }
    *(uint *)(param_2 + 0x21ea4) = *(uint *)(param_2 + 0x21ea4) & 0xfffffffb | uVar9;
    if (((*pbVar2 >> 4 & 1) == 0) || (iVar6 = FUN_100316180(0x21), iVar6 != 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_4 >> 0x17 & 4;
    }
    *(uint *)(param_2 + 0x2214c) = *(uint *)(param_2 + 0x2214c) & 0xfffffffb | uVar9;
    *(uint *)(param_2 + 0x8c14) =
         *(uint *)(param_2 + 0x8c14) & 0xfffffff8 |
         *(uint *)(param_2 + 0x8c14) & 3 | (param_4 >> 8 & 1) << 2;
    *(uint *)(param_2 + 0x8d14) =
         *(uint *)(param_2 + 0x8d14) & 0xfffffff8 |
         *(uint *)(param_2 + 0x8d14) & 3 | (param_4 >> 9 & 1) << 2;
    *(uint *)(param_2 + 0x8f14) =
         *(uint *)(param_2 + 0x8f14) & 0xfffffff8 |
         *(uint *)(param_2 + 0x8f14) & 3 | (param_4 >> 10 & 1) << 2;
    uVar9 = *(uint *)(param_2 + 0x8b14);
    *(uint *)(param_2 + 0x8b14) = uVar9 & 0xfffffff8 | uVar9 & 3 | (param_4 >> 0xb & 1) << 2;
    iVar6 = FUN_100316180(0x1a);
    uVar9 = 4;
    if (((uint)(iVar6 != 2) & (param_4 & 0x1000) >> 0xc) == 0) {
      uVar9 = 0;
    }
    *(uint *)(param_2 + 0x9014) = uVar9 | *(uint *)(param_2 + 0x9014) & 0xfffffffb;
  }
  FUN_1000934cc(param_1,param_2 + 0x13f20,uVar12 & (param_4 & 0x40000) >> 0x12,2,1);
LAB_10007bb70:
  bVar10 = 4;
  if (uVar12 == 0) {
    bVar10 = 0;
  }
  bVar11 = 8;
  if (uVar5 == 0) {
    bVar11 = 0;
  }
  *pbVar2 = bVar11 | bVar10 | *pbVar2 & 0xf3;
  FUN_100078f50(param_2);
  return;
}




byte FUN_10007bbc8(long param_1)

{
  return *(byte *)(param_1 + 0x22978) >> 2 & 1;
}




void FUN_10007bbdc(long param_1,undefined8 param_2)

{
  FUN_10006d760(param_1 + 0x2c8);
  FUN_100076738(param_1 + 0xc428,param_2);
  return;
}




void FUN_10007bc10(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_100086230(param_1 + 0xfcf0);
  FUN_100071508(param_1 + 0x155a0,param_2,param_3);
  iVar1 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260));
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x22978) = *(byte *)(param_1 + 0x22978) & 0x7f;
    FUN_10007bd70(param_1);
    return;
  }
  return;
}




void FUN_10007bc94(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0x80;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x22978) = bVar1 | *(byte *)(param_1 + 0x22978) & 0x7f;
  FUN_10007bd70();
  return;
}




void FUN_10007bcb8(long param_1)

{
  FUN_100071f20(param_1 + 0x155a0);
  return;
}




void FUN_10007bcc8(long param_1)

{
  FUN_100072370(param_1 + 0x155a0);
  return;
}




void FUN_10007bcd8(long param_1,long param_2)

{
  *(byte *)(param_1 + 0x22978) =
       *(byte *)(param_1 + 0x22978) & 0xfd | (*(int *)(param_2 + 4) != 0) << 1;
  FUN_1000a3954(param_1 + 0x15ba0);
  FUN_1000a34a4(0x3f000000,param_1 + 0x15ba0,*(byte *)(param_1 + 0x22978) >> 1 & 1,4,1);
  FUN_1000bf05c(param_1 + 0x15570,*(int *)(param_2 + 4) == 2);
  return;
}




void FUN_10007bd6c(void)

{
  return;
}




void FUN_10007bd70(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = FUN_100060a70();
  if (iVar1 != 0) {
    uVar3 = (uint)((*(byte *)(param_1 + 0x22978) & 0xe0) == 0x80);
    *(uint *)(param_1 + 0x13c) =
         *(uint *)(param_1 + 0x13c) & 0xffffffe0 | *(uint *)(param_1 + 0x13c) & 0xf | uVar3 << 4;
    lVar2 = FUN_1000c083c(param_1 + 0x21a80);
    *(uint *)(lVar2 + 0x84) =
         *(uint *)(lVar2 + 0x84) & 0xffffffe0 | *(uint *)(lVar2 + 0x84) & 0xf | uVar3 << 4;
    FUN_10007b508(param_1);
    lVar2 = FUN_1000c083c(param_1 + 0x21a60);
    *(uint *)(lVar2 + 0x84) =
         *(uint *)(lVar2 + 0x84) & 0xffffffe0 |
         *(uint *)(lVar2 + 0x84) & 0xf | (uint)(*(byte *)(param_1 + 0x22978) >> 7) << 4;
    lVar2 = FUN_1000c083c(param_1 + 0x21b68);
    *(uint *)(lVar2 + 0x84) =
         *(uint *)(lVar2 + 0x84) & 0xffffffe0 |
         *(uint *)(lVar2 + 0x84) & 0xf | (uint)(*(byte *)(param_1 + 0x22978) >> 7) << 4;
  }
  return;
}




void FUN_10007be34(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100078f00();
  if (iVar1 != 0) {
    FUN_1000c96c4(*(undefined8 *)(param_1 + 0x8818));
    return;
  }
  return;
}




void FUN_10007be6c(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_1003467f8();
  iVar1 = FUN_10034ce88();
  if (iVar1 != 0) {
    FUN_100086604(param_1 + 0x13d60);
  }
  iVar1 = FUN_100642d08(param_1 + 0x13f20);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_1003e10f0();
    FUN_1000933bc(*puVar2,puVar2[0x3e],param_1 + 0x13f20,1);
    return;
  }
  return;
}




void FUN_10007bedc(long param_1)

{
  FUN_10006d8d0(param_1 + 0x2c8);
  return;
}




void FUN_10007bee4(long param_1)

{
  FUN_10006d9c8(param_1 + 0x2c8);
  return;
}




void FUN_10007beec(long param_1)

{
  FUN_10006da0c(param_1 + 0x2c8,0);
  return;
}




void FUN_10007bef8(long param_1)

{
  FUN_10006d7d4(param_1 + 0x2c8);
  return;
}




void FUN_10007bf00(long param_1)

{
  FUN_10006d81c(param_1 + 0x2c8);
  return;
}




void FUN_10007bf08(long param_1)

{
  FUN_10006d874(param_1 + 0x2c8);
  return;
}




void FUN_10007bf10(long param_1)

{
  FUN_10006d8bc(param_1 + 0x2c8);
  return;
}




void FUN_10007bf18(long param_1)

{
  FUN_1000e3104(param_1 + 0x22660);
  return;
}




void FUN_10007bf28(long param_1)

{
  FUN_1000e311c(param_1 + 0x22660);
  return;
}




void FUN_10007bf38(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1000ddbd8(param_1 + 0x227f0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_100082c54(param_1 + 0x199b8,param_2);
  return;
}




void FUN_10007bf88(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0x20;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x22978) = *(byte *)(param_1 + 0x22978) & 0xdf | bVar1;
  FUN_10007bd70();
  return;
}




void FUN_10007bfb0(long param_1)

{
  FUN_1000aa0dc(param_1 + 0x8848);
  return;
}




void FUN_10007bfbc(long param_1)

{
  FUN_10008e5b0(param_1 + 0x8f90);
  return;
}




void FUN_10007bfc8(long param_1)

{
  FUN_1000cb1b8(*(undefined8 *)(param_1 + 0x15578));
  return;
}




void FUN_10007bfd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100086ae4(param_1 + 0xf3b8,param_3,param_4,param_5);
  FUN_100070f9c(param_1 + 0x155a0,param_2,param_3,param_5,param_6);
  return;
}




void FUN_10007c048(long param_1)

{
  FUN_100086aec(param_1 + 0xf3b8);
  *(byte *)(param_1 + 0x22978) = *(byte *)(param_1 + 0x22978) | 0x40;
  FUN_10007bd70(param_1);
  return;
}




void FUN_10007c088(long param_1)

{
  FUN_100088758(param_1 + 0x109d0);
  return;
}




void FUN_10007c098(long param_1)

{
  FUN_100088840(param_1 + 0x109d0);
  return;
}




void FUN_10007c0a8(long param_1)

{
  FUN_100086af4(param_1 + 0xf3b8);
  *(byte *)(param_1 + 0x22978) = *(byte *)(param_1 + 0x22978) & 0xbf;
  FUN_10007bd70(param_1);
  return;
}




void FUN_10007c0e8(long param_1)

{
  FUN_1000a8164(param_1 + 0xf700);
  return;
}




void FUN_10007c0f4(long param_1)

{
  FUN_100642d08(param_1 + 0xf700);
  return;
}




void FUN_10007c100(long param_1)

{
  FUN_10006d784(param_1 + 0x2c8);
  FUN_100076730(param_1 + 0xc428);
  FUN_1001cedd0(param_1 + 0x1f9d0);
  return;
}




void FUN_10007c13c(long param_1)

{
  FUN_10008665c(param_1 + 0x13d60,1);
  return;
}




void FUN_10007c150(long param_1)

{
  FUN_10008665c(param_1 + 0x13d60,0);
  return;
}




void FUN_10007c164(long param_1)

{
  FUN_1000c096c(param_1 + 0x1f9c0);
  return;
}




void FUN_10007c174(long param_1)

{
  FUN_1000c0974(param_1 + 0x1f9c0);
  return;
}




byte FUN_10007c184(long param_1)

{
  return *(byte *)(param_1 + 0x15db8) & 1;
}




void FUN_10007c198(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x22978);
  if ((bVar1 >> 1 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 0x22978) = bVar1 & 0xfd;
  FUN_1000a34a4(0x3f000000,param_1 + 0x15ba0,0,4,1);
  FUN_1000aa2a4(param_1 + 0x8848,1);
  return;
}




void FUN_10007c208(long param_1)

{
  ushort *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ushort uVar7;
  
  lVar2 = param_1 + 0xfb00;
  puVar3 = (uint *)(param_1 + 0xfb84);
  uVar4 = *puVar3;
  *puVar3 = uVar4 | 4;
  if ((uVar4 & 0x7f80) != 0) {
    *puVar3 = uVar4 & 0xffff807f | 4;
    FUN_1000200a0(lVar2);
  }
  uVar6 = FUN_10064081c(0x3ea3d70a);
  FUN_100640840(0x3f800000,0x3da3d70a,FUN_10001f4c4);
  FUN_100640840(0,0x3e051eb8,FUN_10001f4ac);
  FUN_100640840(0x3f800000,0x3da3d70a,FUN_10001f4c4);
  FUN_100640840(0,0x3ee66666,FUN_10001f4ac);
  lVar5 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 != 0xffff) {
    puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar1;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_10063ee9c(puVar1);
    *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_100642324(lVar2);
  FUN_100642b7c(lVar2,uVar6);
  return;
}




undefined4 FUN_10007c3a0(void)

{
  undefined4 local_18 [2];
  
  FUN_100641464(local_18,(ulong)local_18 | 4);
  return local_18[0];
}




void FUN_10007c3cc(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auStack_50 [32];
  
  iVar2 = *param_2;
  if (iVar2 == 0x22 || iVar2 == 0xc) {
    iVar2 = FUN_100316180(0xc);
    FUN_1000c0854(param_1 + 0x21a60,iVar2 == 1);
    iVar2 = FUN_100316180(0xc);
    FUN_1000c085c(param_1 + 0x21a60,iVar2 != 2);
    FUN_100078f50(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 5) {
    uVar3 = FUN_100644a94("EVENT_SELECT_IN_GAME_SETTING_ZOOM_TOGGLE");
    FUN_100644aec(auStack_50,uVar3,0);
    FUN_100644c34(param_1,auStack_50,1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x16) {
    FUN_100078f50(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x21) {
    FUN_100078f50(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0xf) {
    iVar2 = FUN_100078800();
    uVar6 = 4;
    uVar1 = uVar6;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    *(uint *)(param_1 + 0xfc74) = *(uint *)(param_1 + 0xfc74) & 0xfffffffb | uVar1;
    FUN_100078f50(param_1);
    lVar5 = *(long *)(param_1 + 0x8818);
    iVar2 = FUN_100078f00();
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xfffffffb | uVar6;
    uVar4 = FUN_100078f00();
    if ((uVar4 & 1) == 0) {
      FUN_1000be548(param_1 + 0x8810,0);
    }
  }
  return;
}




void FUN_10007c52c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SELECT_ZOOM_TOGGLE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10007c57c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  uVar2 = FUN_100057f34();
  FUN_10005a9fc((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),uVar2,param_2[4])
  ;
  return;
}




void FUN_10007c5f0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  uVar2 = FUN_100057f34();
  FUN_10005ab84((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),uVar2,param_2[4])
  ;
  return;
}




void FUN_10007c664(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar1 & 1) == 0) && (DAT_101dbd4d8 != DAT_101dbd450)) {
    return;
  }
  uVar2 = FUN_100057f34();
  FUN_10005ad04((int)*(float *)(param_2 + 5),(int)*(float *)((long)param_2 + 0x2c),uVar2,param_2[4])
  ;
  return;
}




void FUN_10007c6d8(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  void *local_48 [2];
  char local_31;
  
  lVar1 = FUN_100644b2c(param_4);
  if (lVar1 != 0) {
    FUN_1001cedd0(param_3 + 0x3f3a);
    fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    *(long **)(lVar1 + 0x30) = param_3;
    *(undefined1 *)(lVar1 + 0xaf) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0x3f8000003f000000;
    *(float *)(lVar1 + 0x80) = fVar2 * 0.5;
    *(float *)(lVar1 + 0x84) = param_2 + -80.0;
    FUN_10001549c(local_48,"hudAbilityTooltip");
    FUN_1001cefb8(param_3 + 0x3f3a,local_48,lVar1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




void FUN_10007c794(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"hudAbilityTooltip");
  FUN_1001ceeb0(param_1 + 0x1f9d0,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10007c7ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = FUN_100644b2c(param_2);
  lVar1 = param_1 + 0x1d0e8;
  FUN_1000853c4(lVar1,uVar2,0);
  FUN_100269e20(0x3e800000,lVar1,1,4,1);
  fVar3 = (float)FUN_10064e3cc(lVar1);
  fVar4 = 10.0;
  FUN_10064e3cc(lVar1);
  FUN_10064e72c(fVar3 * 0.5 + 10.0,lVar1,3,param_1 + 0xc428,1);
  FUN_10064e72c(fVar4 * 0.5 + -10.0,lVar1,2,param_1 + 0xc428,2);
  return;
}




void FUN_10007c8a4(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = 0;
  *param_1 = &PTR_thunk_FUN_10007c8a4_10144eba0;
  do {
    pvVar1 = *(void **)((long)param_1 + lVar2 + 0x1e88);
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *(undefined8 *)((long)param_1 + lVar2 + 0x1e88) = 0;
      *(undefined8 *)((long)param_1 + lVar2 + 0x1e80) = 0;
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x50);
  lVar2 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x1d10);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  lVar2 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2 + 0x1720);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  thunk_FUN_100651068(param_1 + 0x226);
  thunk_FUN_100651068(param_1 + 0x200);
  thunk_FUN_100651068(param_1 + 0x1da);
  thunk_FUN_100651068(param_1 + 0x1b4);
  thunk_FUN_10064e2bc(param_1 + 0x19d);
  thunk_FUN_100530784(param_1 + 0xf6);
  FUN_10064e2bc(param_1 + 0xc2);
  param_1[0xa4] = &PTR_FUN_1014a7108;
  param_1[0xbb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbe);
  FUN_10064e2bc(param_1 + 0xa4);
  lVar2 = 0x3c0;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar2 + 0x70);
    *puVar3 = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x128) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x140);
    FUN_10064e2bc(puVar3);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  FUN_10064221c(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10007c9e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10007c9e4_101450370;
  thunk_FUN_100651068(param_1 + 0x2a0);
  FUN_10064221c(param_1 + 0x28f);
  if ((void *)param_1[0x28e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28e]);
    param_1[0x28e] = 0;
    param_1[0x28d] = 0;
  }
  if ((void *)param_1[0x28c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28c]);
    param_1[0x28c] = 0;
    param_1[0x28b] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x265);
  thunk_FUN_100651068(param_1 + 0x23f);
  param_1[0x214] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x22b);
  FUN_10064e2bc(param_1 + 0x214);
  param_1[0x17e] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x1ed);
  thunk_FUN_100651068(param_1 + 0x1c7);
  param_1[0x1a9] = &PTR_FUN_1014a7108;
  param_1[0x1c0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c3);
  FUN_10064e2bc(param_1 + 0x1a9);
  param_1[0x17e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x195);
  FUN_10064e2bc(param_1 + 0x17e);
  param_1[0xe8] = &PTR_FUN_1014584a0;
  thunk_FUN_100651068(param_1 + 0x157);
  thunk_FUN_100651068(param_1 + 0x131);
  param_1[0x113] = &PTR_FUN_1014a7108;
  param_1[0x12a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12d);
  FUN_10064e2bc(param_1 + 0x113);
  param_1[0xe8] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xff);
  FUN_10064e2bc(param_1 + 0xe8);
  param_1[0xbd] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0xd4);
  FUN_10064e2bc(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_1014a7108;
  param_1[0xb6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb9);
  FUN_10064e2bc(param_1 + 0x9f);
  param_1[0x81] = &PTR_FUN_1014a7108;
  param_1[0x98] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9b);
  FUN_10064e2bc(param_1 + 0x81);
  param_1[99] = &PTR_FUN_1014a7108;
  param_1[0x7a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7d);
  FUN_10064e2bc(param_1 + 99);
  FUN_10064221c(param_1 + 0x52);
  FUN_10064e2bc(param_1 + 0x39);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10007cbf8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10007cbf8_10144ed20;
  thunk_FUN_100088ce4(param_1 + 0x151);
  thunk_FUN_100088ce4(param_1 + 0x107);
  if ((void *)param_1[0x106] != (void *)0x0) {
    operator_delete__((void *)param_1[0x106]);
    param_1[0x106] = 0;
    param_1[0x105] = 0;
  }
  if ((void *)param_1[0x102] != (void *)0x0) {
    operator_delete__((void *)param_1[0x102]);
    param_1[0x102] = 0;
    param_1[0x101] = 0;
  }
  if ((void *)param_1[0x100] != (void *)0x0) {
    operator_delete__((void *)param_1[0x100]);
    param_1[0x100] = 0;
    param_1[0xff] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xd9);
  thunk_FUN_100651068(param_1 + 0xb3);
  FUN_10064221c(param_1 + 0xa2);
  thunk_FUN_10064e2bc(param_1 + 0x8b);
  thunk_FUN_100651068(param_1 + 0x65);
  param_1[0x47] = &PTR_FUN_1014a7108;
  param_1[0x5e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10007cce4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10007cce4_101451ef0;
  param_1[0x70b] = &PTR_FUN_10144e688;
  thunk_FUN_100651068(param_1 + 0x73a);
  param_1[0x71c] = &PTR_FUN_1014a7108;
  param_1[0x733] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x736);
  FUN_10064e2bc(param_1 + 0x71c);
  FUN_10064221c(param_1 + 0x70b);
  param_1[0x6b5] = &PTR_FUN_10144e688;
  thunk_FUN_100651068(param_1 + 0x6e4);
  param_1[0x6c6] = &PTR_FUN_1014a7108;
  param_1[0x6dd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6e0);
  FUN_10064e2bc(param_1 + 0x6c6);
  FUN_10064221c(param_1 + 0x6b5);
  param_1[0x65f] = &PTR_FUN_10144e688;
  thunk_FUN_100651068(param_1 + 0x68e);
  param_1[0x670] = &PTR_FUN_1014a7108;
  param_1[0x687] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x68a);
  FUN_10064e2bc(param_1 + 0x670);
  FUN_10064221c(param_1 + 0x65f);
  param_1[0x609] = &PTR_FUN_10144e688;
  thunk_FUN_100651068(param_1 + 0x638);
  param_1[0x61a] = &PTR_FUN_1014a7108;
  param_1[0x631] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x634);
  FUN_10064e2bc(param_1 + 0x61a);
  FUN_10064221c(param_1 + 0x609);
  FUN_10064221c(param_1 + 0x5f8);
  FUN_10064221c(param_1 + 0x5e7);
  thunk_FUN_10008d304(param_1 + 0xe9);
  thunk_FUN_1000a88b4(param_1 + 0xc9);
  thunk_FUN_1000a88b4(param_1 + 0xa9);
  thunk_FUN_1000a88b4(param_1 + 0x89);
  thunk_FUN_1000a88b4(param_1 + 0x69);
  thunk_FUN_1000a88b4(param_1 + 0x49);
  thunk_FUN_10064e2bc(param_1 + 0x32);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10007cea4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144e688;
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10007cf04(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144e688;
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10007cf68(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void thunk_FUN_10007c3cc(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined1 auStack_50 [32];
  
  iVar2 = *param_2;
  if (iVar2 == 0x22 || iVar2 == 0xc) {
    iVar2 = FUN_100316180(0xc);
    FUN_1000c0854(param_1 + 0x21a60,iVar2 == 1);
    iVar2 = FUN_100316180(0xc);
    FUN_1000c085c(param_1 + 0x21a60,iVar2 != 2);
    FUN_100078f50(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 5) {
    uVar3 = FUN_100644a94("EVENT_SELECT_IN_GAME_SETTING_ZOOM_TOGGLE");
    FUN_100644aec(auStack_50,uVar3,0);
    FUN_100644c34(param_1,auStack_50,1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x16) {
    FUN_100078f50(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0x21) {
    FUN_100078f50(param_1);
    iVar2 = *param_2;
  }
  if (iVar2 == 0xf) {
    iVar2 = FUN_100078800();
    uVar6 = 4;
    uVar1 = uVar6;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    *(uint *)(param_1 + 0xfc74) = *(uint *)(param_1 + 0xfc74) & 0xfffffffb | uVar1;
    FUN_100078f50(param_1);
    lVar5 = *(long *)(param_1 + 0x8818);
    iVar2 = FUN_100078f00();
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xfffffffb | uVar6;
    uVar4 = FUN_100078f00();
    if ((uVar4 & 1) == 0) {
      FUN_1000be548(param_1 + 0x8810,0);
    }
  }
  return;
}




void FUN_10007cf78(void)

{
  DAT_101dc4ac4 = 0xff;
  DAT_101dc4ac6 = 0xffff;
  DAT_101dc4ac8 = 0xffff;
  DAT_101dc4aca = 0xffbc9c44;
  DAT_101dc4ace = 0xff1166f2;
  DAT_101dc4ad2 = 0xffe0e0e0;
  DAT_101dc4ad6 = 0xffa0a0a0;
  DAT_101dc4ada = 0xff8c8c8c;
  DAT_101dc4ade = 0xff322213;
  DAT_101dc4ae2 = 0xff091911;
  DAT_101dc4ae6 = 0xff170c19;
  DAT_101dc4aea = 0xff241a14;
  DAT_101dc4aee = 0xff14171c;
  DAT_101dc4af2 = 0xff221911;
  DAT_101dc4af6 = 0xff1a1416;
  DAT_101dc4afa = 0xff121414;
  DAT_101dc4afe = 0xff1a1809;
  DAT_101dc4b02 = 0xff141414;
  DAT_101dc4b06 = 0xff141414;
  DAT_101dc4b0a = 0xff2929c0;
  DAT_101dc4b0e = 0xff283082;
  DAT_101dc4b12 = 0xff5262cc;
  DAT_101dc4b16 = 0xff283082;
  DAT_101dc4b1a = 0xff5262cc;
  DAT_101dc4b1e = 0xff745c42;
  DAT_101dc4b22 = 0xff184155;
  DAT_101dc4b26 = 0xff92665e;
  DAT_101dc4b2a = 0xffbc9c44;
  DAT_101dc4b2e = 0xffbbae56;
  DAT_101dc4b32 = 0xff8b7b01;
  DAT_101dc4b36 = 0xff90b3ef;
  DAT_101dc4b3a = 0xff728ebe;
  DAT_101dc4b3e = 0xff19459d;
  DAT_101dc4b42 = 0xff9d877b;
  DAT_101dc4b46 = 0xffcbb1a3;
  DAT_101dc4b4a = 0xff3f6fb5;
  DAT_101dc4b4e = 0xffc5c5c5;
  DAT_101dc4b52 = 0xff4fc1f1;
  DAT_101dc4b56 = 0xff606060;
  DAT_101dc4b5a = 0xffc5ff7b;
  DAT_101dc4b5e = 0xff5271eb;
  DAT_101dc4b62 = 0xfffae076;
  DAT_101dc4b66 = 0xff3ac8f6;
  DAT_101dc4b6a = 0xffaaaaaa;
  DAT_101dc4b6e = 0xffe19400;
  DAT_101dc4b72 = 0xffe19400;
  DAT_101dc4b76 = 0xffe550b2;
  DAT_101dc4b7a = 0xfff22ae8;
  DAT_101dc4b7e = 0xff005ae1;
  DAT_101dc4b82 = 0xff1addfa;
  DAT_101dc4b86 = 0xff2424b3;
  DAT_101dc4b8a = 0xff2424b3;
  DAT_101dc4b8e = 0xff646464;
  DAT_101dc4b92 = 0xff92665e;
  DAT_101dc4b96 = 0xff646037;
  DAT_101dc4ba0 = 0xff1111a1;
  DAT_101dc4ba4 = 0xff321ee1;
  DAT_101dc4ba8 = 0xffc8c8c8;
  DAT_101dc4bac = 0xff321ee1;
  DAT_101dc4bb8 = 0xff6259b3;
  DAT_101dc4bbc = 0xff506e73;
  DAT_101dc4bc0 = 0xff9dbf86;
  DAT_101dc4b9c = 0xffffffff;
  DAT_101dc4bc4 = 0xffa35244;
  DAT_101dc4bb0 = 0xff7fe801;
  DAT_101dc4bc8 = 0xffca828e;
  DAT_101dc4bb4 = 0xffffffff;
  DAT_101dc4bcc = 0xffa6a6a6;
  DAT_101dc4bd0 = 0xffa6a6a6;
  DAT_101dc4bd4 = 0xffffffff;
  DAT_101dc4bd8 = 0xff88ea2f;
  DAT_101dc4bdc = 0xff8c8c8c;
  DAT_101dc4be0 = 0xffffb400;
  DAT_101dc4be4 = 0xffff00ff;
  DAT_101dc4be8 = 0xff00aded;
  DAT_101dc4bec = 0xff33d3ff;
  DAT_101dc4bf0 = 0xff7fe801;
  DAT_101dc4bf4 = 0xff282828;
  DAT_101dc4bf8 = 0xfff0f0f0;
  DAT_101dc4bfc = 0xffa4781e;
  DAT_101dc4c00 = 0xffa6654b;
  DAT_101dc4c04 = 0xff93435b;
  DAT_101dc4c08 = 0xff387f9c;
  DAT_101dc4c0c = 0xffa3781e;
  DAT_101dc4c10 = 0xffffd18a;
  DAT_101dc4c14 = 0xffff61f7;
  DAT_101dc4c18 = 0xff5de1f2;
  DAT_101dc4c1c = 0xff80eaff;
  DAT_101dc4c20 = 0xff32e00e;
  DAT_101dc4c24 = 0xff5a3c10;
  DAT_101dc4c28 = 0xff330b03;
  DAT_101dc4c2c = 0xff33031d;
  DAT_101dc4c30 = 0xff032433;
  DAT_101dc4c34 = 0xff9e8e8d;
  DAT_101d23018 = FUN_100644a94("UI::EVENT_GAMEHUD_REQUEST_OPEN_SETTINGS");
  DAT_101d2301c = FUN_100644a94("UI::EVENT_GAMEHUD_REQUEST_OPEN_MOBILECHAT");
  return;
}




long FUN_10007d664(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  uVar3 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x12) = 0x7000000;
  puVar2[0x13] = uVar3;
  *puVar2 = &PTR_FUN_10144e788;
  puVar2[0x11] = &PTR_FUN_10144e898;
  uVar3 = FUN_100657568(puVar2 + 0x14);
  *(undefined4 *)(param_1 + 0xb0) = 7;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0x3eb3333300000000;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f99999a;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xf0;
  FUN_1006575f4(uVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  return param_1;
}




long thunk_FUN_10007d664(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  uVar3 = DAT_101dbd2f0;
  *(undefined4 *)(puVar2 + 0x12) = 0x7000000;
  puVar2[0x13] = uVar3;
  *puVar2 = &PTR_FUN_10144e788;
  puVar2[0x11] = &PTR_FUN_10144e898;
  uVar3 = FUN_100657568(puVar2 + 0x14);
  *(undefined4 *)(param_1 + 0xb0) = 7;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0x3eb3333300000000;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f99999a;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xf0;
  FUN_1006575f4(uVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  return param_1;
}




void FUN_10007d730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144e788;
  param_1[0x11] = &PTR_FUN_10144e898;
  thunk_FUN_100657580(param_1 + 0x14);
  FUN_10064221c(param_1);
  return;
}




void FUN_10007d76c(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_10144e788;
  *param_1 = &PTR_FUN_10144e898;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064221c(param_1 + -0x11);
  return;
}




void FUN_10007d7a4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144e788;
  param_1[0x11] = &PTR_FUN_10144e898;
  thunk_FUN_100657580(param_1 + 0x14);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10007d7e4(long param_1)

{
  FUN_10007d7a4(param_1 + -0x88);
  return;
}




void FUN_10007d7ec(undefined4 param_1,long param_2,long param_3,undefined4 param_4,uint param_5,
                  uint param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  undefined1 auStack_d0 [24];
  long local_b8 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined4 *)(param_2 + 0xb0) = param_4;
  uVar4 = *(undefined4 *)(param_3 + 0x30);
  bVar12 = 2;
  if ((param_5 & param_6) == 0) {
    bVar12 = 0;
  }
  *(byte *)(param_2 + 0x140) = bVar12 | (byte)param_5 | *(byte *)(param_2 + 0x140) & 0xfc;
  plVar8 = (long *)(param_3 + 0x28);
  lVar11 = *plVar8;
  *(long **)(param_2 + 200) = plVar8;
  *(undefined4 *)(param_2 + 0xd0) = uVar4;
  *(undefined8 *)(param_2 + 0xe4) = 0x3f99999a3eb33333;
  *(undefined4 *)(param_2 + 0xec) = param_1;
  (**(code **)(lVar11 + 0x10))(plVar8);
  iVar5 = FUN_1003a2d9c();
  if (*(int *)(param_2 + 0xb0) == 0) {
    if ((*(byte *)(param_2 + 0x140) & 1) == 0) {
      (**(code **)(**(long **)(param_2 + 200) + 0x10))();
      iVar6 = FUN_100490188();
      FUN_10034cb1c(local_b8,"plaque_frame");
      *(undefined4 *)(param_2 + 0x114) = (undefined4)local_b8[0];
      pcVar1 = "plaque_ally_fill";
      if (iVar5 == 0) {
        pcVar1 = "plaque_enemy_fill";
      }
      pcVar9 = "hud_plaque_hero_forthp_ally";
      if (iVar5 == 0) {
        pcVar9 = "hud_plaque_hero_forthp_enemy";
      }
      pcVar2 = "plaque_hero_fill";
      if (iVar6 == 0) {
        pcVar2 = pcVar1;
      }
      FUN_10034cb1c(local_b8,pcVar2);
      *(undefined4 *)(param_2 + 0x124) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,"hud_plaque_hero_hp_damage");
      *(undefined4 *)(param_2 + 0x128) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,pcVar9);
      *(undefined4 *)(param_2 + 300) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,"hud_plaque_hero_barrier");
      *(undefined4 *)(param_2 + 0x130) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,"plaque_energy_tint_fill");
      *(undefined4 *)(param_2 + 0x134) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,"hud_plaque_energy_lost");
      *(undefined4 *)(param_2 + 0x138) = (undefined4)local_b8[0];
      pcVar9 = "plaque_tertiary_tint_fill";
    }
    else {
      FUN_10034cb1c(local_b8,"hud_plaque_hero_bg_left");
      *(undefined4 *)(param_2 + 0x118) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,"hud_plaque_hero_bg_center");
      *(undefined4 *)(param_2 + 0x11c) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,"hud_plaque_hero_bg_right");
      *(undefined4 *)(param_2 + 0x120) = (undefined4)local_b8[0];
      pcVar1 = "hud_plaque_hero_hp_ally";
      if (iVar5 == 0) {
        pcVar1 = "hud_plaque_hero_hp_enemy";
      }
      pcVar9 = "hud_plaque_hero_forthp_ally";
      if (iVar5 == 0) {
        pcVar9 = "hud_plaque_hero_forthp_enemy";
      }
      FUN_10034cb1c(local_b8,pcVar1);
      *(undefined4 *)(param_2 + 0x124) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,"hud_plaque_hero_hp_damage");
      *(undefined4 *)(param_2 + 0x128) = (undefined4)local_b8[0];
      FUN_10034cb1c(local_b8,pcVar9);
      *(undefined4 *)(param_2 + 300) = (undefined4)local_b8[0];
      pcVar1 = "hud_plaque_hero_barrier";
      FUN_10034cb1c(local_b8,"hud_plaque_hero_barrier");
      *(undefined4 *)(param_2 + 0x130) = (undefined4)local_b8[0];
      pcVar9 = "hud_plaque_energy_fill";
      if ((*(byte *)(param_2 + 0x140) & 2) != 0) {
        pcVar9 = pcVar1;
      }
      FUN_10034cb1c(local_b8,pcVar9);
      *(undefined4 *)(param_2 + 0x134) = (undefined4)local_b8[0];
      pcVar9 = "hud_plaque_energy_lost";
      if ((*(byte *)(param_2 + 0x140) & 2) != 0) {
        pcVar9 = pcVar1;
      }
      FUN_10034cb1c(local_b8,pcVar9);
      *(undefined4 *)(param_2 + 0x138) = (undefined4)local_b8[0];
      pcVar9 = "hud_plaque_energy_fill";
      if ((*(byte *)(param_2 + 0x140) & 2) != 0) {
        pcVar9 = pcVar1;
      }
    }
    FUN_10034cb1c(local_b8,pcVar9);
    *(undefined4 *)(param_2 + 0x13c) = (undefined4)local_b8[0];
  }
  else {
    FUN_10034cb1c(local_b8,"hud_plaque_minion_bg_left");
    *(undefined4 *)(param_2 + 0x118) = (undefined4)local_b8[0];
    FUN_10034cb1c(local_b8,"hud_plaque_minion_bg_center");
    *(undefined4 *)(param_2 + 0x11c) = (undefined4)local_b8[0];
    FUN_10034cb1c(local_b8,"hud_plaque_minion_bg_right");
    *(undefined4 *)(param_2 + 0x120) = (undefined4)local_b8[0];
    pcVar1 = "hud_plaque_minion_hp_ally";
    if (iVar5 == 0) {
      pcVar1 = "hud_plaque_minion_hp_enemy";
    }
    pcVar9 = "hud_plaque_minion_forthp_ally";
    if (iVar5 == 0) {
      pcVar9 = "hud_plaque_minion_forthp_enemy";
    }
    FUN_10034cb1c(local_b8,pcVar1);
    *(undefined4 *)(param_2 + 0x124) = (undefined4)local_b8[0];
    FUN_10034cb1c(local_b8,"hud_plaque_minion_hp_damage");
    *(undefined4 *)(param_2 + 0x128) = (undefined4)local_b8[0];
    FUN_10034cb1c(local_b8,pcVar9);
    *(undefined4 *)(param_2 + 300) = (undefined4)local_b8[0];
    FUN_10034cb1c(local_b8,"hud_plaque_minion_barrier");
    *(undefined4 *)(param_2 + 0x130) = (undefined4)local_b8[0];
  }
  FUN_1003a8de8(auStack_d0);
  uVar7 = FUN_1003a6ce4(auStack_d0,local_b8,0x10,0);
  if (uVar7 != 0) {
    uVar13 = (ulong)uVar7;
    plVar8 = local_b8;
    do {
      if (*plVar8 == 0) break;
      iVar5 = FUN_100490188();
      if (iVar5 != 0) {
        lVar10 = *plVar8;
        lVar11 = 0;
        if (lVar10 != 0) {
          lVar11 = lVar10 + 0x28;
        }
        puVar3 = &DAT_101dc0b88;
        if (lVar10 != 0) {
          puVar3 = (undefined4 *)(lVar11 + 8);
        }
        uVar4 = *puVar3;
        *(long *)(param_2 + 0xb8) = lVar11;
        *(undefined4 *)(param_2 + 0xc0) = uVar4;
      }
      plVar8 = plVar8 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_10007dc1c(param_2);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10007dc1c(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar1 = *(byte *)(lVar2 + 0x303);
  lVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x40);
  if ((((uint)bVar1 << 0x10) >> 0x12 & 1) == 0) {
    fVar7 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
    pfVar5 = (float *)(lVar2 + 0x1a0);
    puVar4 = &DAT_101dc4d80;
    pfVar6 = (float *)&DAT_101dc4cc0;
  }
  else {
    fVar7 = *(float *)(lVar2 + 0xe8) + *(float *)(lVar2 + 0x19c) * (*(float *)(lVar2 + 0x304) + 1.0)
    ;
    pfVar5 = (float *)(lVar2 + 0x250);
    puVar4 = &DAT_101dc4e30;
    pfVar6 = (float *)&DAT_101dc4d70;
  }
  fVar8 = (float)NEON_fminnm(fVar7 + fVar7 * *pfVar5,*puVar4);
  fVar7 = *pfVar6;
  if (*pfVar6 <= fVar8) {
    fVar7 = fVar8;
  }
  lVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  fVar11 = *(float *)(*(long *)(lVar2 + 0x40) + 0x31c);
  lVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar8 = *(float *)(lVar2 + 0xb8) + *(float *)(lVar2 + 0x16c) * (*(float *)(lVar2 + 0x2d4) + 1.0);
  fVar9 = (float)NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar2 + 0x220),DAT_101dc4e00);
  fVar8 = DAT_101dc4d40;
  if (DAT_101dc4d40 <= fVar9) {
    fVar8 = fVar9;
  }
  lVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  fVar9 = *(float *)(*(long *)(lVar2 + 0x40) + 0x318);
  *(float *)(param_1 + 0xf0) = fVar8 + fVar7;
  lVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar1 = *(byte *)(lVar2 + 0x303);
  lVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  lVar2 = 0x308;
  if ((bVar1 & 4) != 0) {
    lVar2 = 0x30c;
  }
  fVar7 = *(float *)(*(long *)(lVar3 + 0x40) + lVar2);
  *(float *)(param_1 + 0xf4) = fVar7;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  fVar10 = 1.0 / *(float *)(param_1 + 0xf0);
  fVar8 = (fVar7 - fVar11) * fVar10;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0xfc) = fVar8;
  fVar7 = (float)NEON_fminnm(fVar11,fVar7);
  *(float *)(param_1 + 0x100) = fVar7 * fVar10;
  *(float *)(param_1 + 0x104) = fVar9 * fVar10;
  *(undefined4 *)(param_1 + 0x108) = 0;
  lVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(*(long *)(lVar2 + 0x40) + 0x310);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}




void FUN_10007de28(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0xb0)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
  return;
}




float FUN_10007deb8(long *param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if ((int)param_1[0x16] == 0) {
    fVar1 = (float)(**(code **)(*param_1 + 0x48))(0x3f800000,0x3f800000);
    fVar1 = fVar1 / (float)DAT_101dc4c80;
  }
  return fVar1;
}




void FUN_10007def8(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x84) >> 3 & 1) == 0) {
    fVar1 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + fVar1;
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 4;
    return;
  }
  if ((*(byte *)(param_1 + 0x140) >> 2 & 1) == 0) {
    uVar2 = FUN_1010a1cd4();
    *(undefined4 *)(param_1 + 0x110) = uVar2;
  }
  else {
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xfb;
    if (3.0 < *(float *)(param_1 + 0x110)) {
      *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x110);
      uVar2 = FUN_1010a1cd4();
      *(undefined4 *)(param_1 + 0x110) = uVar2;
      FUN_10007dc1c(param_1);
      return;
    }
  }
  FUN_10007dfa0(param_1,param_2);
  return;
}




void FUN_10007dfa0(long param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    iVar5 = FUN_100490188();
    if (iVar5 == 0) goto LAB_10007e004;
    bVar4 = (*(byte *)(param_1 + 0x140) & 1) == 0;
    puVar13 = &DAT_101dc4c88;
    puVar15 = &DAT_101dc4c98;
  }
  else {
LAB_10007e004:
    uVar11 = FUN_10034ee90();
    uVar12 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    iVar5 = FUN_10034ea80(uVar11,uVar12);
    bVar4 = *(int *)(param_1 + 0xb0) == 0;
    puVar13 = &DAT_101dc4c90;
    if (iVar5 == 0) {
      puVar13 = &DAT_101dc4c8c;
    }
    puVar15 = &DAT_101dc4ca0;
    if (iVar5 == 0) {
      puVar15 = &DAT_101dc4c9c;
    }
  }
  if (!bVar4) {
    puVar15 = puVar13;
  }
  *(undefined4 *)(param_1 + 0x124) = *puVar15;
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar2 = *(byte *)(lVar7 + 0x303);
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  lVar7 = *(long *)(lVar7 + 0x40);
  if ((((uint)bVar2 << 0x10) >> 0x12 & 1) == 0) {
    fVar17 = *(float *)(lVar7 + 0x38) + *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0)
    ;
    pfVar14 = (float *)(lVar7 + 0x1a0);
    puVar13 = &DAT_101dc4d80;
    pfVar16 = (float *)&DAT_101dc4cc0;
  }
  else {
    fVar17 = *(float *)(lVar7 + 0xe8) +
             *(float *)(lVar7 + 0x19c) * (*(float *)(lVar7 + 0x304) + 1.0);
    pfVar14 = (float *)(lVar7 + 0x250);
    puVar13 = &DAT_101dc4e30;
    pfVar16 = (float *)&DAT_101dc4d70;
  }
  fVar18 = (float)NEON_fminnm(fVar17 + fVar17 * *pfVar14,*puVar13);
  fVar17 = *pfVar16;
  if (*pfVar16 <= fVar18) {
    fVar17 = fVar18;
  }
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  bVar2 = *(byte *)(lVar7 + 0x303);
  lVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  lVar7 = 0x308;
  if ((bVar2 & 4) != 0) {
    lVar7 = 0x30c;
  }
  fVar22 = *(float *)(*(long *)(lVar8 + 0x40) + lVar7);
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  fVar24 = *(float *)(*(long *)(lVar7 + 0x40) + 0x31c);
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(*(long **)(param_1 + 200));
  lVar7 = *(long *)(lVar7 + 0x40);
  fVar18 = *(float *)(lVar7 + 0xb8) + *(float *)(lVar7 + 0x16c) * (*(float *)(lVar7 + 0x2d4) + 1.0);
  fVar19 = (float)NEON_fminnm(fVar18 + fVar18 * *(float *)(lVar7 + 0x220),DAT_101dc4e00);
  fVar18 = DAT_101dc4d40;
  if (DAT_101dc4d40 <= fVar19) {
    fVar18 = fVar19;
  }
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  fVar19 = *(float *)(*(long *)(lVar7 + 0x40) + 0x318);
  fVar18 = fVar18 + fVar17;
  *(float *)(param_1 + 0xf0) = fVar18;
  fVar20 = *(float *)(param_1 + 0xf4);
  fVar17 = *(float *)(param_1 + 0xf8);
  bVar4 = true;
  bVar3 = false;
  if (fVar20 < fVar22) {
    bVar4 = false;
    bVar3 = true;
    if (!NAN(fVar22) && !NAN(fVar17)) {
      bVar4 = fVar22 < fVar17;
      bVar3 = false;
    }
  }
  fVar23 = fVar22;
  if (bVar4 == bVar3) {
    fVar21 = (float)NEON_fminnm(((fVar22 - fVar20) * 10.0) / fVar18,0x3f800000);
    if (fVar21 <= 0.1) {
      fVar21 = 0.1;
    }
    fVar21 = fVar21 * fVar18 * 0.8 * *(float *)(param_1 + 0x110);
    fVar23 = fVar21 + fVar20;
    if (fVar22 - fVar20 <= fVar21) {
      fVar23 = fVar22;
    }
  }
  *(float *)(param_1 + 0xf4) = fVar23;
  fVar17 = (float)NEON_fminnm(fVar18 - (fVar19 + fVar23),fVar17);
  *(float *)(param_1 + 0xf8) = fVar17;
  if (fVar17 <= 0.0) {
    *(undefined4 *)(param_1 + 0xe4) = 0x3eb33333;
  }
  else {
    fVar22 = *(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0x110);
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    *(float *)(param_1 + 0xe4) = fVar22;
    if (fVar22 == 0.0) {
      fVar17 = fVar17 + *(float *)(param_1 + 0x110) * fVar18 * -0.5;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      *(float *)(param_1 + 0xf8) = fVar17;
    }
  }
  fVar18 = 1.0 / fVar18;
  fVar20 = (fVar23 - fVar24) * fVar18;
  fVar22 = 0.0;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  *(float *)(param_1 + 0xfc) = fVar20;
  fVar24 = (float)NEON_fminnm(fVar24,fVar23);
  *(float *)(param_1 + 0x100) = fVar24 * fVar18;
  *(float *)(param_1 + 0x104) = fVar19 * fVar18;
  *(float *)(param_1 + 0x108) = fVar17 * fVar18;
  lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  lVar7 = *(long *)(lVar7 + 0x40);
  fVar17 = *(float *)(lVar7 + 0xe4) + *(float *)(lVar7 + 0x198) * (*(float *)(lVar7 + 0x300) + 1.0);
  fVar18 = (float)NEON_fminnm(fVar17 + fVar17 * *(float *)(lVar7 + 0x24c),DAT_101dc4e2c);
  fVar17 = DAT_101dc4d68._4_4_;
  if (DAT_101dc4d68._4_4_ <= fVar18) {
    fVar17 = fVar18;
  }
  if (fVar17 <= 0.0) {
    if (param_2 != 0) {
      lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
      fVar22 = *(float *)(*(long *)(lVar7 + 0x40) + 0x310);
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    lVar7 = *(long *)(lVar7 + 0x40);
    fVar17 = *(float *)(lVar7 + 0x40) + *(float *)(lVar7 + 0xf4) * (*(float *)(lVar7 + 0x25c) + 1.0)
    ;
    fVar18 = (float)NEON_fminnm(fVar17 + fVar17 * *(float *)(lVar7 + 0x1a8),DAT_101dc4d88);
    fVar17 = DAT_101dc4cc8;
    if (DAT_101dc4cc8 <= fVar18) {
      fVar17 = fVar18;
    }
  }
  else {
    fVar22 = 0.0;
    if (param_2 != 0) {
      lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
      fVar22 = *(float *)(*(long *)(lVar7 + 0x40) + 0x314);
    }
  }
  fVar19 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0xe0),fVar17);
  *(float *)(param_1 + 0xe0) = fVar19;
  fVar18 = fVar22;
  if (fVar19 < fVar22) {
LAB_10007e420:
    *(float *)(param_1 + 0xe0) = fVar18;
    fVar19 = fVar18;
  }
  else if (fVar22 < fVar19) {
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    else {
      fVar24 = *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0x110);
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      *(float *)(param_1 + 0xe8) = fVar24;
      if (fVar24 != 0.0) goto LAB_10007e428;
    }
    fVar19 = fVar19 + *(float *)(param_1 + 0x110) * fVar17 * -0.5;
    if (fVar22 <= fVar19) {
      fVar18 = fVar19;
    }
    goto LAB_10007e420;
  }
LAB_10007e428:
  if (fVar19 <= fVar22) {
    *(undefined4 *)(param_1 + 0xe8) = 0x3f99999a;
  }
  uVar9 = FUN_10034cb58();
  if (((uVar9 & 1) != 0) ||
     (lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))(),
     (*(byte *)(lVar7 + 0x2f4) >> 4 & 1) == 0)) goto LAB_10007e5f8;
  iVar5 = FUN_10034f06c();
  plVar10 = *(long **)(param_1 + 200);
  uVar11 = 0;
  if (plVar10 != (long *)0x0) {
    if (*(int *)(param_1 + 0xd0) == (int)plVar10[1]) {
      uVar11 = (**(code **)(*plVar10 + 0x10))();
    }
    else {
      uVar11 = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_101dc0b88;
    }
  }
  iVar6 = FUN_100345bbc(uVar11);
  if (iVar5 == iVar6) goto LAB_10007e5f8;
  plVar10 = *(long **)(param_1 + 0xb8);
  if (plVar10 == (long *)0x0) {
LAB_10007e4f4:
    FUN_10034ee90();
    lVar7 = FUN_100345d90();
    plVar10 = (long *)0x0;
    if (lVar7 != 0) {
      plVar10 = (long *)(lVar7 + 0x28);
    }
    plVar1 = (long *)&DAT_101dc0b88;
    if (lVar7 != 0) {
      plVar1 = plVar10 + 1;
    }
    lVar7 = *plVar1;
    *(long **)(param_1 + 0xb8) = plVar10;
    *(int *)(param_1 + 0xc0) = (int)lVar7;
  }
  else {
    if (*(int *)(param_1 + 0xc0) != (int)plVar10[1]) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
      goto LAB_10007e4f4;
    }
    lVar7 = (**(code **)(*plVar10 + 0x10))();
    if (lVar7 == 0) goto LAB_10007e4f4;
    plVar10 = *(long **)(param_1 + 0xb8);
  }
  if (plVar10 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar10[1]) {
      lVar7 = (**(code **)(*plVar10 + 0x10))();
      if (lVar7 != 0) {
        plVar10 = *(long **)(param_1 + 0xb8);
        if (plVar10 == (long *)0x0) {
          uVar11 = 0;
        }
        else if (*(int *)(param_1 + 0xc0) == (int)plVar10[1]) {
          uVar11 = (**(code **)(*plVar10 + 0x10))();
        }
        else {
          uVar11 = 0;
          *(undefined8 *)(param_1 + 0xb8) = 0;
          *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
        }
        uVar12 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
        fVar17 = (float)FUN_100465d68(uVar11,uVar12);
        lVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x10))();
        if (*(float *)(*(long *)(lVar7 + 0x40) + 0x308) < fVar17) {
          *(undefined4 *)(param_1 + 0x124) = DAT_101dc4c94;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
  }
LAB_10007e5f8:
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x110);
  return;
}




void FUN_10007e624(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined8 local_68;
  
  if ((int)param_1[0x16] == 4) {
    plVar2 = (long *)param_1[0x19];
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)param_1[0x1a] == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar3 = 0;
        param_1[0x19] = 0;
        *(undefined4 *)(param_1 + 0x1a) = DAT_101dc0b88;
      }
    }
    iVar1 = FUN_100345bbc(uVar3);
    if ((iVar1 == 0) && (*(float *)((long)param_1 + 0xfc) == 0.0)) {
      return;
    }
  }
  pfVar4 = (float *)FUN_10003d5bc(param_1);
  uVar3 = *(undefined8 *)(pfVar4 + 4);
  fVar7 = (float)NEON_fminnm((int)(pfVar4[6] * 255.0),0x437f0000);
  fVar8 = 0.0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_6c = 0xffff;
  local_6a = 0xff;
  local_69 = (undefined1)(int)fVar7;
  local_68 = uVar3;
  lVar5 = (**(code **)(*(long *)param_1[0x19] + 0x10))();
  lVar5 = *(long *)(lVar5 + 0x38) + 0x1a0;
  fVar7 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar7 = fVar7 * (float)uVar3;
  fVar8 = fVar8 * (float)((ulong)uVar3 >> 0x20);
  iVar9 = (int)(*pfVar4 - fVar7 * 0.5);
  iVar1 = (int)(pfVar4[1] - fVar8 * 0.5);
  if ((int)param_1[0x16] == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)param_1[0x19] + 0x10))();
      FUN_10034ea2c(*(undefined4 *)(lVar6 + 0x260));
      FUN_10007e974(iVar9,iVar1,fVar7,fVar8,param_1,param_2,&local_68,&local_6c,lVar5,0);
    }
    else if ((*(byte *)(param_1 + 0x28) >> 1 & 1) == 0) {
      FUN_10007e8d4();
    }
    else {
      FUN_10007e828(iVar9,iVar1,fVar7,fVar8,param_1,param_2,&local_68,&local_6c,lVar5);
    }
  }
  else {
    FUN_10007ebe8(iVar9,iVar1,fVar7,fVar8,param_1,param_2,&local_68,&local_6c,lVar5);
  }
  return;
}




void FUN_10007e828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  FUN_1000804b0(param_1,param_2,param_3,(float)param_4 * 0.8);
  FUN_100080380(param_1,param_2,param_3,param_4,(float)param_4 * 0.2,param_5,param_6,param_7,param_8
                ,param_9);
  return;
}




void FUN_10007e8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  FUN_100080158(param_1);
  FUN_100080380(param_1,param_2,param_3,param_4,(float)param_4 * 0.35999998,param_5,param_6,param_7,
                param_8,param_9);
  return;
}




void FUN_10007e974(undefined8 param_1,float param_2,undefined8 param_3,float param_4,long *param_5,
                  undefined8 param_6,undefined8 *param_7,undefined8 param_8,long param_9)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_bc;
  undefined8 local_88;
  
  fVar4 = param_2;
  fVar2 = (float)(**(code **)(*param_5 + 0x48))();
  fVar2 = ((float)*param_7 * fVar2) / (float)DAT_101dc4c80;
  fVar4 = ((float)((ulong)*param_7 >> 0x20) * fVar4) / (float)((ulong)DAT_101dc4c80 >> 0x20);
  local_88 = CONCAT44(fVar4,fVar2);
  fVar5 = (float)param_3 + (float)param_1;
  fVar9 = fVar2 * 3.0;
  fVar6 = fVar5 + fVar2 * -268.0;
  bVar1 = *(byte *)(param_5 + 0x28);
  if ((bVar1 >> 1 & 1) == 0) {
    fVar7 = fVar4 * 13.0;
    fVar3 = fVar7;
    if ((int)param_5[0x16] != 0) {
      fVar3 = 0.0;
    }
  }
  else {
    fVar7 = 4.0;
    fVar3 = 4.0;
  }
  local_bc = fVar4 * 13.0;
  fVar8 = fVar6 - fVar9;
  param_2 = fVar4 + fVar4 + param_2;
  FUN_10007ed38(param_1,fVar3 + param_2,param_3,param_4 + fVar3 * -2.0,param_5,param_6,param_8);
  param_2 = param_2 + fVar4 * 3.0;
  FUN_10007ee2c(fVar8,param_2,fVar2 * 263.0,fVar7,fVar9,param_5,param_6,&local_88,param_8);
  param_2 = param_2 + fVar4 * 16.0;
  FUN_10007ef84(fVar5 + fVar2 * -275.0,param_2,fVar2 * 269.0,fVar4 * 25.0,0,
                *(undefined4 *)(param_9 + 8),param_5,param_6,&local_88,param_8);
  if (*(char *)(param_9 + 0xc) != '\0') {
    param_2 = param_2 + fVar4 * 28.0;
    fVar5 = fVar4 * 15.0;
    if ((bVar1 & 2) != 0) {
      fVar5 = 4.0;
    }
    FUN_10007f4c0(fVar6,param_2,fVar2 * 257.0,fVar4 * 10.0,*(undefined4 *)(param_9 + 0x10),param_5,
                  param_6);
    FUN_10007faa8(fVar8,param_2 + local_bc,fVar2 * 263.0,fVar5,fVar9,fVar4 * 5.0,param_5,param_6,
                  &local_88,param_8);
  }
  return;
}




void FUN_10007ebe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7,undefined8 param_8,
                  long param_9)

{
  float fVar1;
  float fVar2;
  float local_68;
  float fStack_64;
  
  fVar1 = *param_7;
  fVar2 = param_7[1];
  local_68 = fVar1 * 1.2;
  fStack_64 = fVar2 * 1.7;
  FUN_100080598(param_1,param_2,param_3,(float)param_4 + fVar2 * 6.8,param_5,param_6,&local_68);
  FUN_10007ef84(param_1,(float)param_2 + fVar2 * 3.4,param_3,param_4,(int)(fVar1 * 2.4),
                *(undefined4 *)(param_9 + 8),param_5,param_6,&local_68,param_8);
  return;
}




void FUN_10007ecc8(long param_1)

{
  FUN_10007e624(param_1 + -0x88);
  return;
}




void FUN_10007ecd0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  return;
}




undefined8 FUN_10007ecd8(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_10007ecf0(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_10007ed08(float param_1,long param_2)

{
  *(float *)(param_2 + 0xf8) = *(float *)(param_2 + 0xf8) - param_1;
  return;
}




void FUN_10007ed18(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 8;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xf7 | bVar1;
  return;
}




void FUN_10007ed38(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char local_44;
  char local_43;
  char local_42;
  undefined1 local_41;
  
  local_44 = -((byte)(((uint)*(byte *)(param_5 + 0x140) << 4) >> 7) & 1);
  local_41 = *(undefined1 *)(param_7 + 3);
  local_43 = local_44;
  local_42 = local_44;
  lVar1 = FUN_1006575b8(param_5 + 0xa0,*(undefined4 *)(param_5 + 0x114));
  lVar2 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar6 = 1.0 / (float)*(int *)(lVar2 + 0x48);
  FUN_100043664(param_1,param_2,SUB42(param_3 + (float)param_1,0),param_4 + (float)param_2,0,
                fVar6 * fVar4,1.0 - fVar5 * (1.0 / (float)*(int *)(lVar2 + 0x4c)),
                fVar6 * (fVar3 + fVar4),param_6,&local_44,0);
  return;
}




void FUN_10007ee2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_7 + 0xd8) != 0) {
    fVar3 = (float)FUN_1000349f4();
    fVar3 = (float)(int)(fVar3 * (float)param_3);
    if (0.0 < fVar3) {
      FUN_10007fe14(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10,1);
      fVar9 = param_5 + (float)param_1;
      fVar8 = param_6 + (float)param_2;
      lVar1 = FUN_1006575b8(param_7 + 0xa0,*(undefined4 *)(param_7 + 0x134));
      lVar2 = *(long *)(*(long *)(param_7 + 0xa0) + 8);
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
      NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
      fVar7 = 1.0 / (float)*(int *)(lVar2 + 0x48);
      FUN_100043664(fVar9,fVar8,(fVar9 - (param_5 + param_5)) + fVar3,
                    ((float)param_4 - (param_6 + param_6)) + fVar8,0,fVar7 * fVar5,
                    1.0 - fVar6 * (1.0 / (float)*(int *)(lVar2 + 0x4c)),fVar7 * (fVar4 + fVar5),
                    param_8,param_10,0);
    }
  }
  return;
}




void FUN_10007ef84(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  float param_6,long param_7,undefined8 param_8,float *param_9,undefined1 *param_10)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
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
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  
  lVar5 = (**(code **)(**(long **)(param_7 + 200) + 0x10))();
  uVar4 = DAT_101dc4d80;
  fVar16 = DAT_101dc4cc0;
  lVar5 = *(long *)(lVar5 + 0x40);
  fVar24 = *(float *)(lVar5 + 0x38);
  fVar29 = *(float *)(lVar5 + 0xec);
  fVar25 = *(float *)(lVar5 + 0x254);
  fVar9 = *(float *)(lVar5 + 0x1a0);
  lVar5 = (**(code **)(**(long **)(param_7 + 200) + 0x10))();
  fVar10 = *(float *)(*(long *)(lVar5 + 0x40) + 0x308);
  uVar3 = param_10[3];
  lVar5 = (**(code **)(**(long **)(param_7 + 200) + 0x10))();
  if ((*(byte *)(lVar5 + 0x303) & 4) == 0) {
    uVar23 = *(undefined4 *)(param_7 + 0xfc);
    uVar2 = *(undefined4 *)(param_7 + 0x124);
    puVar6 = param_10;
  }
  else {
    fVar11 = (float)_fmodf(*(float *)(param_7 + 0x10c) * 1.25,0x3f800000);
    local_84 = (undefined1)(int)(ABS(0.5 - fVar11) * -224.0 + 192.0);
    uVar23 = *(undefined4 *)(param_7 + 0xfc);
    uVar2 = *(undefined4 *)(param_7 + 0x124);
    puVar6 = &local_84;
    local_83 = local_84;
    local_82 = local_84;
    local_81 = uVar3;
  }
  fVar11 = (float)FUN_1000807dc(param_1,param_2,param_3,param_4,param_5,uVar23,param_7,param_8,
                                puVar6,uVar2);
  fVar31 = fVar11 + (float)param_1;
  fVar12 = (float)FUN_1000807dc(fVar31,param_2,param_3,param_4,param_5,
                                *(undefined4 *)(param_7 + 0x100),param_7,param_8,param_10,
                                *(undefined4 *)(param_7 + 300));
  fVar13 = (float)FUN_1000807dc(fVar12 + fVar31,param_2,param_3,param_4,param_5,
                                *(undefined4 *)(param_7 + 0x104),param_7,param_8,param_10,
                                *(undefined4 *)(param_7 + 0x130));
  iVar7 = *(int *)(param_7 + 0xb0);
  fVar27 = (float)param_2;
  if (iVar7 == 0) {
    fVar17 = (param_6 * (float)param_3) / *(float *)(param_7 + 0xf0);
    if (fVar17 <= 2.0) {
      fVar17 = 2.0;
    }
    fVar20 = fVar12 + fVar11 + fVar13;
    plVar1 = (long *)(param_7 + 0xa0);
    fVar18 = (float)param_4 + fVar27;
    if (fVar17 < fVar20) {
      fVar19 = *param_9;
      fVar28 = fVar17;
      do {
        fVar30 = ((float)param_1 - fVar19 * 2.0) + (float)(int)fVar28;
        fVar14 = param_9[1];
        lVar5 = FUN_1006575b8(plVar1,DAT_101dc4ca4);
        fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
        NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
        fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
        fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
        fVar26 = 1.0 / (float)*(int *)(*(long *)(*plVar1 + 8) + 0x48);
        FUN_100043664(fVar30,fVar27 + fVar14 * -2.0,fVar30 + fVar19 * 4.0,fVar18,0,fVar26 * fVar21,
                      1.0 - fVar22 * (1.0 / (float)*(int *)(*(long *)(*plVar1 + 8) + 0x4c)),
                      fVar26 * (fVar15 + fVar21),param_8,param_10,0);
        fVar28 = fVar28 + fVar17;
      } while (fVar28 < fVar20);
      iVar7 = *(int *)(param_7 + 0xb0);
      param_5 = param_5 & 0xffffffff;
      param_4 = param_4 & 0xffffffff;
      param_3 = param_3 & 0xffffffff;
      if (iVar7 != 0) goto LAB_10007f164;
    }
    fVar20 = (float)param_4;
    fVar28 = (float)param_5;
    fVar17 = (float)param_3;
    if (fVar10 <= *(float *)(param_7 + 0xf4)) goto LAB_10007f3e0;
    fVar24 = fVar24 + fVar29 * (fVar25 + 1.0);
    NEON_fminnm(fVar24 + fVar24 * fVar9,uVar4);
    fVar16 = (float)NEON_fminnm((int)(((fVar10 - *(float *)(param_7 + 0xf4)) * 5100.0) / fVar16),
                                0x437f0000);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    fVar9 = (float)NEON_fminnm(fVar11,0x41e00000);
    local_88 = 0xffff;
    local_86 = 0xff;
    local_85 = (undefined1)(int)fVar16;
    lVar5 = FUN_1006575b8(plVar1,DAT_101dc4ca8);
    lVar8 = *(long *)(*(long *)(param_7 + 0xa0) + 8);
    fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
    fVar25 = 1.0 / (float)*(int *)(lVar8 + 0x48);
    FUN_100043664((fVar31 + fVar28) - fVar9,param_2,fVar31 + fVar28,fVar18,0,fVar25 * fVar10,
                  1.0 - fVar24 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),fVar25 * (fVar16 + fVar10),
                  param_8,&local_88,0);
    iVar7 = *(int *)(param_7 + 0xb0);
  }
LAB_10007f164:
  fVar20 = (float)param_4;
  fVar28 = (float)param_5;
  fVar17 = (float)param_3;
  if (iVar7 == 1) {
    return;
  }
LAB_10007f3e0:
  fVar16 = *(float *)(param_7 + 0x108);
  if (0.0 < fVar16) {
    fVar13 = fVar31 + fVar28 + fVar12 + fVar13;
    lVar5 = FUN_1006575b8(param_7 + 0xa0,*(undefined4 *)(param_7 + 0x128));
    lVar8 = *(long *)(*(long *)(param_7 + 0xa0) + 8);
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
    fVar25 = 1.0 / (float)*(int *)(lVar8 + 0x48);
    FUN_100043664(fVar13,param_2,(float)(int)(fVar16 * (fVar17 + fVar28 * -2.0)) + fVar13,
                  fVar20 + fVar27,0,fVar25 * fVar10,
                  1.0 - fVar24 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),fVar25 * (fVar9 + fVar10),
                  param_8,param_10,0);
  }
  return;
}




void FUN_10007f4c0(undefined8 param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,int param_10)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint3 *puVar10;
  long lVar11;
  float *pfVar12;
  uint3 *puVar13;
  float *pfVar14;
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
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  uint3 local_74;
  undefined1 local_71;
  
  lVar6 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
  lVar6 = *(long *)(lVar6 + 0x40);
  fVar15 = *(float *)(lVar6 + 0xe4) + *(float *)(lVar6 + 0x198) * (*(float *)(lVar6 + 0x300) + 1.0);
  fVar16 = (float)NEON_fminnm(fVar15 + fVar15 * *(float *)(lVar6 + 0x24c),DAT_101dc4e2c);
  fVar15 = DAT_101dc4d68._4_4_;
  if (DAT_101dc4d68._4_4_ <= fVar16) {
    fVar15 = fVar16;
  }
  plVar7 = *(long **)(param_6 + 200);
  if (fVar15 <= 0.0) {
    lVar6 = (**(code **)(*plVar7 + 0x10))();
    if (*(float *)(*(long *)(lVar6 + 0x40) + 0x40) <= 0.0) {
      return;
    }
    plVar7 = *(long **)(param_6 + 200);
    lVar6 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_6 + 0xd0) == (int)plVar7[1]) {
        lVar6 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        lVar6 = 0;
        *(undefined8 *)(param_6 + 200) = 0;
        *(undefined4 *)(param_6 + 0xd0) = DAT_101dc0b88;
      }
    }
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
    if (((int)uVar8 == 0x1f) || (fVar16 = 0.0, 1 < *(ushort *)(lVar6 + uVar8 * 0x38 + 0x90) - 3)) {
      lVar6 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
      fVar16 = *(float *)(*(long *)(lVar6 + 0x40) + 0x310);
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    lVar6 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
    lVar6 = *(long *)(lVar6 + 0x40);
    fVar17 = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0xf4) * (*(float *)(lVar6 + 0x25c) + 1.0)
    ;
    pfVar12 = (float *)(lVar6 + 0x1a8);
    puVar9 = &DAT_101dc4d88;
    pfVar14 = (float *)&DAT_101dc4cc8;
  }
  else {
    lVar6 = 0;
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_6 + 0xd0) == (int)plVar7[1]) {
        lVar6 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        lVar6 = 0;
        *(undefined8 *)(param_6 + 200) = 0;
        *(undefined4 *)(param_6 + 0xd0) = DAT_101dc0b88;
      }
    }
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
    if (((int)uVar8 == 0x1f) || (fVar16 = 0.0, 1 < *(ushort *)(lVar6 + uVar8 * 0x38 + 0x90) - 3)) {
      lVar6 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
      fVar16 = *(float *)(*(long *)(lVar6 + 0x40) + 0x314);
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    lVar6 = (**(code **)(**(long **)(param_6 + 200) + 0x10))();
    lVar6 = *(long *)(lVar6 + 0x40);
    fVar17 = *(float *)(lVar6 + 0xe4) +
             *(float *)(lVar6 + 0x198) * (*(float *)(lVar6 + 0x300) + 1.0);
    pfVar12 = (float *)(lVar6 + 0x24c);
    puVar9 = &DAT_101dc4e2c;
    pfVar14 = (float *)((long)&DAT_101dc4d68 + 4);
  }
  fVar18 = *pfVar14;
  NEON_fminnm(fVar17 + fVar17 * *pfVar12,*puVar9);
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar17 = (float)NEON_fminnm(fVar16 / fVar18,0x3f800000);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if ((float)(int)(fVar17 * param_3) == 0.0) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar17)) {
      bVar2 = fVar17 < 0.0;
      bVar3 = fVar17 == 0.0;
      bVar4 = false;
    }
  }
  fVar24 = 1.0;
  if (bVar3 || bVar2 != bVar4) {
    fVar24 = (float)(int)(fVar17 * param_3);
  }
  uVar1 = *(undefined1 *)(param_9 + 3);
  fVar23 = (float)param_1;
  fVar22 = (float)param_2;
  if (0.0 < fVar24) {
    local_74 = 0xff8030;
    local_78 = 0xa8e0;
    local_76 = 1;
    local_7c = 0xf3ff;
    local_7a = 1;
    local_80 = 0xb2b2;
    local_7e = 0xb2;
    local_84 = 0xffff;
    local_82 = 0xff;
    if (param_10 == 1) {
      puVar13 = (uint3 *)&local_80;
      puVar10 = (uint3 *)&local_84;
    }
    else if (param_10 == 2) {
      puVar10 = &local_74;
      puVar13 = &local_74;
    }
    else {
      puVar10 = (uint3 *)&local_7c;
      puVar13 = (uint3 *)&local_78;
    }
    if (param_5 <= fVar17) {
      puVar13 = puVar10;
    }
    if (fVar15 <= 0.0) {
      puVar13 = &local_74;
    }
    local_81 = uVar1;
    local_7d = uVar1;
    local_79 = uVar1;
    local_75 = uVar1;
    local_71 = uVar1;
    lVar6 = FUN_1006575b8(param_6 + 0xa0,*(undefined4 *)(param_6 + 0x134));
    lVar11 = *(long *)(*(long *)(param_6 + 0xa0) + 8);
    fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
    fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
    fVar21 = 1.0 / (float)*(int *)(lVar11 + 0x48);
    FUN_100043664(param_1,param_2,SUB42(fVar24 + fVar23,0),param_4 + fVar22,0,fVar21 * fVar19,
                  1.0 - fVar20 * (1.0 / (float)*(int *)(lVar11 + 0x4c)),fVar21 * (fVar17 + fVar19),
                  param_7,puVar13,0);
  }
  if (((*(int *)(param_6 + 0xb0) == 0) && (fVar15 <= 0.0)) && (fVar16 / fVar18 < 0.25)) {
    (**(code **)(**(long **)(param_6 + 200) + 0x10))();
    uVar8 = FUN_1003a2d9c();
    if (((uVar8 & 1) != 0) || (iVar5 = FUN_10034cb58(), iVar5 != 0)) {
      fVar17 = (float)_fmodf(*(float *)(param_6 + 0x10c) * 1.25,0x3f800000);
      local_74 = (uint3)(byte)(int)(ABS(0.5 - fVar17) * -288.0 + 224.0);
      local_71 = uVar1;
      lVar6 = FUN_1006575b8(param_6 + 0xa0,*(undefined4 *)(param_6 + 0x134));
      lVar11 = *(long *)(*(long *)(param_6 + 0xa0) + 8);
      fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
      NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
      fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
      fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
      fVar21 = 1.0 / (float)*(int *)(lVar11 + 0x48);
      FUN_100043664(fVar24 + fVar23,param_2,SUB42(param_3 + fVar23,0),param_4 + fVar22,0,
                    fVar21 * fVar19,1.0 - fVar20 * (1.0 / (float)*(int *)(lVar11 + 0x4c)),
                    fVar21 * (fVar17 + fVar19),param_7,&local_74,0);
    }
  }
  if ((*(int *)(param_6 + 0xb0) == 0) && (fVar16 < *(float *)(param_6 + 0xe0))) {
    fVar16 = (float)NEON_fminnm(*(float *)(param_6 + 0xe0) - fVar16,fVar18);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if ((0.0 < fVar16 / fVar18) && (fVar15 <= 0.0)) {
      local_74 = 0xffc2ae;
      local_71 = uVar1;
      lVar6 = FUN_1006575b8(param_6 + 0xa0,*(undefined4 *)(param_6 + 0x138));
      lVar11 = *(long *)(*(long *)(param_6 + 0xa0) + 8);
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
      NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
      fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
      fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
      fVar20 = 1.0 / (float)*(int *)(lVar11 + 0x48);
      FUN_100043664(fVar24 + fVar23,param_2,SUB42(fVar24 + fVar23 + param_3 * (fVar16 / fVar18),0),
                    param_4 + fVar22,0,fVar20 * fVar17,
                    1.0 - fVar19 * (1.0 / (float)*(int *)(lVar11 + 0x4c)),fVar20 * (fVar15 + fVar17)
                    ,param_7,&local_74,0);
    }
  }
  return;
}




void FUN_10007faa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  long param_10)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined2 local_a0;
  undefined1 local_9e;
  byte local_9d;
  uint local_9c;
  float local_98;
  float local_94;
  
  uVar2 = (**(code **)(**(long **)(param_7 + 200) + 0x10))();
  FUN_10004fe84(uVar2,&local_94,&local_98,&local_9c);
  if (0.0 < local_98) {
    if ((*(byte *)(param_7 + 0x140) & 3) == 0) {
      FUN_10007fe14(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10,0);
    }
    fVar16 = ((float)param_3 - ((float)(local_9c - 1) + param_5) * 2.0) / (float)local_9c;
    fVar13 = (local_94 * (float)local_9c) / local_98;
    bVar1 = *(byte *)(param_10 + 3);
    param_5 = param_5 + (float)param_1;
    fVar15 = fVar16 + 2.0;
    lVar4 = param_7 + 0xa0;
    param_6 = ((float)param_4 + (float)param_2) - param_6;
    if (local_9c != 0) {
      uVar6 = 0;
      do {
        local_a0 = 0xffff;
        local_9e = 0xff;
        fVar14 = param_5 + (float)(int)uVar6 * fVar15;
        local_9d = bVar1 >> 2;
        lVar3 = FUN_1006575b8(lVar4,*(undefined4 *)(param_7 + 0x13c));
        lVar5 = *(long *)(*(long *)(param_7 + 0xa0) + 8);
        fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
        NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
        fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
        fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
        fVar12 = 1.0 / (float)*(int *)(lVar5 + 0x48);
        FUN_100043664(fVar14,param_2,fVar14 + fVar16,param_6,0,fVar12 * fVar10,
                      1.0 - fVar11 * (1.0 / (float)*(int *)(lVar5 + 0x4c)),fVar12 * (fVar9 + fVar10)
                      ,param_8,&local_a0,0);
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_9c);
    }
    iVar7 = (int)fVar13;
    if (0 < iVar7) {
      iVar8 = 0;
      do {
        local_a0 = 0xffff;
        local_9e = 0xff;
        fVar14 = param_5 + (float)iVar8 * fVar15;
        local_9d = bVar1;
        lVar3 = FUN_1006575b8(lVar4,*(undefined4 *)(param_7 + 0x13c));
        lVar5 = *(long *)(*(long *)(param_7 + 0xa0) + 8);
        fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
        NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
        fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
        fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
        fVar12 = 1.0 / (float)*(int *)(lVar5 + 0x48);
        FUN_100043664(fVar14,param_2,fVar14 + fVar16,param_6,0,fVar12 * fVar10,
                      1.0 - fVar11 * (1.0 / (float)*(int *)(lVar5 + 0x4c)),fVar12 * (fVar9 + fVar10)
                      ,param_8,&local_a0,0);
        iVar8 = iVar8 + 1;
      } while (iVar7 != iVar8);
    }
    local_a0 = 0xffff;
    local_9e = 0xff;
    local_9d = bVar1 >> 1;
    param_5 = param_5 + (float)iVar7 * fVar15;
    fVar13 = (float)_fmodf(fVar13,0x3f800000);
    lVar4 = FUN_1006575b8(lVar4,*(undefined4 *)(param_7 + 0x13c));
    lVar3 = *(long *)(*(long *)(param_7 + 0xa0) + 8);
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
    fVar11 = 1.0 / (float)*(int *)(lVar3 + 0x48);
    FUN_100043664(param_5,param_2,param_5 + fVar13 * fVar16,param_6,0,fVar11 * fVar9,
                  1.0 - fVar10 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar11 * (fVar15 + fVar9),
                  param_8,&local_a0,0);
  }
  return;
}




void FUN_10007fe14(undefined8 param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,float *param_7,long param_8,int param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  char local_84;
  char local_83;
  char local_82;
  undefined1 local_81;
  
  fVar15 = *param_7;
  fVar14 = param_7[1];
  fVar4 = fVar14 * 7.0;
  param_4 = param_4 - fVar4;
  local_84 = -((byte)(((uint)*(byte *)(param_5 + 0x140) << 4) >> 7) & 1);
  local_81 = *(undefined1 *)(param_8 + 3);
  lVar2 = param_5 + 0xa0;
  local_83 = local_84;
  local_82 = local_84;
  lVar1 = FUN_1006575b8(lVar2,DAT_101dc4cb4);
  fVar13 = fVar14 * -2.0;
  if (param_9 == 0) {
    fVar13 = param_4;
  }
  fVar13 = fVar13 + param_2;
  fVar12 = (float)param_1;
  fVar5 = fVar12 + fVar15 * -2.0;
  lVar3 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar16 = 1.0 / (float)*(int *)(lVar3 + 0x48);
  fVar8 = fVar8 + fVar11;
  if (param_9 == 0) {
    fVar8 = fVar11;
  }
  fVar11 = fVar13 + fVar14 * 9.0;
  FUN_100043664(fVar5,fVar13,fVar5 + fVar15 * 9.0,fVar11,0,SUB42(fVar16 * fVar6,0),
                1.0 - fVar8 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar16 * (fVar7 + fVar6),param_6
                ,&local_84,0);
  lVar1 = FUN_1006575b8(lVar2,DAT_101dc4cb4);
  fVar6 = 0.0;
  fVar14 = fVar4;
  if (param_9 == 0) {
    fVar14 = 0.0;
    fVar6 = param_4;
  }
  fVar7 = (param_3 + fVar12) - fVar15 * 7.0;
  lVar3 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar10 = 1.0 / (float)*(int *)(lVar3 + 0x48);
  fVar5 = fVar5 + fVar8;
  if (param_9 == 0) {
    fVar5 = fVar8;
  }
  FUN_100043664(fVar7,fVar13,fVar7 + fVar15 * 9.0,fVar11,0,SUB42(fVar10 * (fVar16 + fVar9),0),
                1.0 - fVar5 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar10 * fVar9,param_6,&local_84
                ,0);
  lVar1 = FUN_1006575b8(lVar2,DAT_101dc4cac);
  lVar3 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar5 = 1.0 / (float)*(int *)(lVar3 + 0x48);
  FUN_100043664(param_1,fVar14 + param_2,param_3 + fVar12,fVar14 + param_2 + param_4,0,
                SUB42(fVar5 * fVar8,0),1.0 - fVar13 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),
                fVar5 * (fVar11 + fVar8),param_6,&local_84,0);
  fVar12 = fVar15 * 7.0 + fVar12;
  lVar2 = FUN_1006575b8(lVar2,DAT_101dc4cac);
  lVar1 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
  fVar8 = 1.0 / (float)*(int *)(lVar1 + 0x48);
  FUN_100043664(fVar12,fVar6 + param_2,param_3 + fVar15 * -14.0 + fVar12,fVar6 + param_2 + fVar4,0,
                SUB42(fVar8 * fVar13,0),1.0 - fVar11 * (1.0 / (float)*(int *)(lVar1 + 0x4c)),
                fVar8 * (fVar14 + fVar13),param_6,&local_84,0);
  return;
}




void thunk_FUN_10007c8a4(void)

{
  FUN_10007c8a4();
  return;
}




void thunk_FUN_10007cbf8(void)

{
  FUN_10007cbf8();
  return;
}




void thunk_FUN_10007c9e4(void)

{
  FUN_10007c9e4();
  return;
}




void thunk_FUN_10007cce4(void)

{
  FUN_10007cce4();
  return;
}

