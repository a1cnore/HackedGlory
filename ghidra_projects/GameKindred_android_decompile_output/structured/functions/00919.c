// functions/00919 — 23 functions
#include "libGameKindred.h"




void FUN_00919018(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + 0x7141) != '\0') && (*(char *)(param_1 + 0x7140) != '\0')) {
    *(char *)(param_1 + 0x7140) = '\0';
    FUN_009426d0();
    FUN_00ce211c();
    FUN_00942b04(*(undefined4 *)(param_1 + 0x7138));
    FUN_00ceb9e4();
    plVar2 = (long *)*param_2;
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *param_2 = 0;
        uVar3 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
      }
    }
    FUN_009bd794(uVar3,0);
    plVar2 = (long *)*param_2;
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *param_2 = 0;
        uVar3 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
      }
    }
    FUN_009bd794(uVar3,1);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x350) & 0x1f;
  if ((uVar1 == 0x1f) || (*(int *)(param_1 + (ulong)uVar1 * 0x58 + 0x1e8) != 2)) {
    uVar4 = FUN_00e80f58();
    if ((uVar4 & 1) == 0) goto LAB_00919198;
    lVar5 = FUN_00e829e0();
    if ((8 < *(uint *)(lVar5 + 0xa0)) ||
       ((1 << (ulong)(*(uint *)(lVar5 + 0xa0) & 0x1f) & 0x1c1U) == 0)) goto LAB_00919198;
  }
  plVar2 = (long *)*param_2;
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *param_2 = 0;
      uVar3 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  uVar4 = FUN_009bd6c8(uVar3);
  if ((uVar4 & 1) == 0) {
    return;
  }
LAB_00919198:
  FUN_00919c84(param_1,0);
  return;
}




void FUN_009191b8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00e7d1e0(*(undefined8 *)(param_1 + 0x358));
  FUN_00919fe8(param_1);
  FUN_0091a69c(param_1,param_2);
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)param_2[1] == (int)plVar1[1]) {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  else {
    *param_2 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  FUN_009317e4(param_1 + 0x360,uVar2);
  FUN_009277a4();
  uVar3 = FUN_00ceab64();
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar1[1]) {
        (**(code **)(*plVar1 + 0x10))();
      }
      else {
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
      }
    }
    FUN_009bd94c(0,0xffffffff);
  }
  uVar2 = FUN_00e7d4c4();
  FUN_00e7d25c(uVar2,1);
  return;
}




void FUN_009192b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00ce2834(0x3ff0000000000000);
  FUN_0091a814(uVar1,param_2);
  FUN_009580b8();
  FUN_00963a6c();
  FUN_00cead98();
  return;
}




void FUN_009192e4(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x1d0) >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if (*piVar4 == param_2) goto LAB_00919318;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 0x16;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00919318:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(param_1 + 0x10);
      do {
        if (*piVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1 = param_1 + (long)(int)uVar2 * 0x58;
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar3 & 0x1f);
          return;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x16;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_0091936c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)(*(ushort *)(param_1 + 0x178) >> 10 & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x50) = FUN_0091adec;
  *(code **)(lVar1 + 0x48) = FUN_0091adec;
  *(code **)(lVar1 + 0x58) = FUN_0091adec;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x178) =
       *(ushort *)(param_1 + 0x178) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x178) & 0x83ff;
  return;
}




void FUN_009193c0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_00e829e0();
  if (*(int *)(lVar2 + 0xa0) != 6) {
    lVar2 = FUN_00e829e0();
    if ((*(int *)(lVar2 + 0xa0) != 7) && (uVar3 = FUN_009188d8(), (uVar3 & 1) == 0)) {
      return;
    }
  }
  lVar2 = FUN_00e829e0();
  if (*(int *)(lVar2 + 0xa0) == 7) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_009188d8();
  }
  FUN_00ceab70(uVar1 & 1,&DAT_03210450);
  lVar2 = FUN_00e829e0();
  uVar1 = (uint)(*(byte *)(lVar2 + 0xc0) >> 1);
  if ((*(byte *)(lVar2 + 0xc0) & 1) != 0) {
    uVar1 = *(uint *)(lVar2 + 200);
  }
  if (uVar1 != 0) {
    lVar2 = FUN_00e829e0();
    FUN_00ceaba0(lVar2 + 0xc0);
  }
  FUN_00919db0(param_1 + 0x1d8,1);
  return;
}




void FUN_0091946c(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  
  uVar1 = (ushort)((ushort)param_1[0x5e] >> 10) & 0x1f;
  param_1[(ulong)uVar1 * 0x16 + 4] = param_2;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 6) = param_3;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 8) = param_4;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 10) = param_5;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xc) = param_6;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe) = param_7;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10) = param_8;
  *(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x14) = FUN_0091afcc;
  *(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x12) = FUN_0091afa0;
  *(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16) = FUN_0091affc;
  param_1[(ulong)uVar1 * 0x16 + 0x18] = 0;
  uVar1 = *param_1;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_0091aea8(param_1,uVar1,0);
  *(ushort *)(param_1 + 0x5e) =
       (ushort)param_1[0x5e] + 0x400 & 0x7c00 | (ushort)param_1[0x5e] & 0x83ff;
  return;
}




void FUN_00919504(long param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  
  lVar2 = FUN_00e829e0();
  if (((*(int *)(lVar2 + 0xa0) != 6) && (uVar3 = FUN_009188d8(), (uVar3 & 1) == 0)) &&
     (lVar2 = FUN_00e829e0(), *(int *)(lVar2 + 0xa0) != 7)) {
    FUN_009426bc();
    FUN_009426d0();
    FUN_00919db0(param_1 + 0x1d8,0);
    return;
  }
  uVar3 = FUN_00942694();
  if ((((uVar3 & 1) == 0) && (uVar3 = FUN_009426a8(), (uVar3 & 1) == 0)) && (*param_2 == 0.0)) {
    FUN_00942680();
    *param_2 = 0.5;
  }
  fVar4 = (float)FUN_01988c84();
  fVar4 = *param_2 - fVar4;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *param_2 = fVar4;
  uVar3 = FUN_00e80f58();
  if (((uVar3 & 1) == 0) || (lVar2 = FUN_00e829e0(), *(int *)(lVar2 + 0xa0) != 7)) {
    uVar1 = FUN_009188d8();
    uVar1 = uVar1 & 1;
  }
  else {
    uVar1 = 1;
  }
  FUN_00ceab70(uVar1,&DAT_03210450);
  uVar3 = FUN_0094276c();
  if ((uVar3 & 1) != 0) {
    FUN_00942708();
    return;
  }
  return;
}




void FUN_009195f8(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00e829e0();
    FUN_00ce262c(lVar2 + 0xa8);
    return;
  }
  return;
}




void FUN_00919620(void)

{
  FUN_009426bc();
  FUN_009426d0();
  return;
}




void FUN_00919634(long param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x178) >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    piVar4 = (int *)(param_1 + 0x10);
    do {
      if (*piVar4 == param_2) goto LAB_00919668;
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 0x16;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00919668:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(param_1 + 0x10);
      do {
        if (*piVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1 = param_1 + (long)(int)uVar2 * 0x58;
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar3 & 0x1f);
          return;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 0x16;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_009196bc(long param_1)

{
  DAT_02c09218 = 0;
  FUN_009597cc(param_1 + 0x19d8);
  FUN_0091ac4c(param_1 + 0x1848);
  *(undefined ***)(param_1 + 0x360) = &PTR_FUN_027ba008;
  *(undefined ***)(param_1 + 0x13b8) = &PTR_FUN_027e8060;
  FUN_00f0d3a4(param_1 + 0x1710);
  *(undefined ***)(param_1 + 0x1620) = &PTR_FUN_028266f0;
  *(undefined ***)(param_1 + 0x16d8) = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16f0);
  FUN_00f13d08(param_1 + 0x1620);
  *(undefined ***)(param_1 + 0x1530) = &PTR_FUN_028266f0;
  *(undefined ***)(param_1 + 0x15e8) = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1600);
  FUN_00f13d08(param_1 + 0x1530);
  *(undefined ***)(param_1 + 0x1440) = &PTR_FUN_028266f0;
  *(undefined ***)(param_1 + 0x14f8) = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1510);
  FUN_00f13d08(param_1 + 0x1440);
  FUN_00f01868(param_1 + 0x13b8);
  FUN_00ed483c(param_1 + 0x1140);
  FUN_0091ac9c(param_1 + 0xea0);
  FUN_00f13d08(param_1 + 0xd00);
  FUN_00f13d08(param_1 + 0xc48);
  FUN_0091e6b0(param_1 + 0x500);
  FUN_00f13d08(param_1 + 0x360);
  FUN_00919804(param_1 + 0x1d8);
  FUN_00919854(param_1);
  return;
}




void FUN_00919804(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x5e) & 0x1f;
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_1 + 0x5e) | 0x3e0;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00919850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar2);
  return;
}




void FUN_00919854(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x74) & 0x1f;
  *(ushort *)(param_1 + 0x74) = *(ushort *)(param_1 + 0x74) | 0x3e0;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x009198a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
            (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar2);
  return;
}




void FUN_009198a4(undefined8 param_1)

{
  long lVar1;
  byte local_a0 [16];
  void *local_90;
  undefined1 auStack_88 [8];
  byte local_80;
  void *local_70;
  undefined1 auStack_60 [8];
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ec3db8(auStack_60,"54e65de43cf56b9e0457e33f");
  FUN_008fa54c(local_a0,PTR_s_CONFIG_CRASH_REPORTING_KEY_APP_I_02bf2530);
  FUN_00ec3d7c(auStack_88,auStack_60);
  FUN_0091b028(param_1,local_a0,local_a0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00919964(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00938158();
  FUN_00ceab54(0);
  FUN_00ce24f8(0,0);
  FUN_00ceb964();
  FUN_00942550(0);
  thunk_FUN_00e7f85c();
  FUN_00948078();
  FUN_00948398(FUN_009188b0);
  FUN_019804cc();
  FUN_009f23d8();
  FUN_0091f200();
  local_70 = 0;
  uStack_68 = 0;
  local_78 = &local_70;
  FUN_009198a4(&local_78);
  FUN_00ec54a8(&local_78,0x73fbf);
  pvVar3 = operator_new(0x50);
  FUN_009682c0();
  *(void **)(param_1 + 0x7080) = pvVar3;
  FUN_00915e50();
  FUN_008ff424();
  FUN_009305a8();
  FUN_00a073c0();
  FUN_00cc73e0();
  FUN_00940b14();
  FUN_00cb99d8();
  FUN_00a1ff50();
  FUN_00d7e360();
  FUN_009e4aa0();
  FUN_009e50e0();
  FUN_009208b8();
  FUN_009d7e60();
  uVar4 = FUN_00ec516c();
  if ((uVar4 & 1) != 0) {
    FUN_008fa54c(local_60,PTR_s_CONFIG_CRASH_REPORTING_KEY_APP_I_02bf2530);
    puVar5 = (undefined8 *)FUN_0091b0e0(&local_78,local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if (&local_70 != puVar5) {
      FUN_008fa54c(local_60,PTR_s_CONFIG_CRASH_REPORTING_KEY_APP_I_02bf2530);
      lVar6 = FUN_0091b0e0(&local_78,local_60);
      uVar7 = FUN_00ec3f08(lVar6 + 0x38);
      FUN_00ec5174(uVar7,0);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      FUN_00919be4(local_60,&DAT_01bb6d43,DAT_02bf24e0);
      FUN_00ec5178("kindred_revision",local_60);
    }
  }
  uVar7 = FUN_00e7d4c4();
  uVar2 = FUN_009f1f70(0);
  FUN_00e7d248(uVar7,uVar2 & 1);
  FUN_00a06a4c();
  uVar4 = FUN_0092e920();
  if ((uVar4 & 1) != 0) {
    FUN_00931bf8();
  }
  FUN_008ff778(param_2);
  FUN_008ffb14();
  FUN_00911584();
  FUN_008f6c84();
  FUN_00941728();
  FUN_0092da54();
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) == 0) {
    FUN_0090d694();
  }
  FUN_00920cf8();
  FUN_00a8df40();
  FUN_00cdafcc();
  FUN_009314d0(param_1 + 0x360);
  FUN_00948018();
  FUN_00919c84(param_1,0);
  FUN_00919db0(param_1 + 0x1d8,0);
  FUN_008ffd58();
  FUN_00910328(&local_78,local_70);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00919bac(void)

{
  FUN_00942550(0);
  return;
}




void FUN_00919bb4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x50);
  FUN_009682c0();
  *(void **)(param_1 + 0x7080) = pvVar1;
  return;
}




void FUN_00919be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,0x10,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00919c84(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar3 = *(ushort *)(param_1 + 0x74);
  if ((uVar3 & 0x7c00) != 0) {
    uVar4 = 0;
    piVar6 = param_1 + 4;
    do {
      if (*piVar6 == param_2) goto LAB_00919ccc;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 0x16;
    } while (uVar4 < (uVar3 >> 10 & 0x1f));
  }
  uVar4 = 0x1f;
LAB_00919ccc:
  uVar1 = uVar3 & 0x1f;
  uVar5 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar3 = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    *(ushort *)(param_1 + 0x74) = uVar3;
  }
  else {
    if (uVar4 == uVar1) {
      return;
    }
    if ((param_1[uVar5 * 0x16 + 0x18] & 1 << (ulong)(uVar4 & 0x1f)) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x74) = uVar3 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar5 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + uVar5 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar5 * 0x16 + 0x10),uVar2);
    uVar3 = *(ushort *)(param_1 + 0x74);
  }
  uVar4 = uVar4 & 0x1f;
  *(ushort *)(param_1 + 0x74) = (ushort)uVar4 | uVar3 & 0xfc00 | 0x3e0;
  if (uVar4 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00919dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar4 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 0xc),uVar2);
  return;
}




void FUN_00919db0(int *param_1,int param_2)

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
      if (*piVar6 == param_2) goto LAB_00919df8;
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 0x16;
    } while (uVar4 < (uVar3 >> 10 & 0x1f));
  }
  uVar4 = 0x1f;
LAB_00919df8:
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
                    /* WARNING: Could not recover jumptable at 0x00919ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar4 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar4 * 0x16 + 0xc),uVar2);
  return;
}




void FUN_00919edc(long param_1)

{
  ulong uVar1;
  
  FUN_00919c84(param_1,4);
  FUN_00919db0(param_1 + 0x1d8,3);
  FUN_009e5118();
  FUN_009e4aec();
  FUN_009d7e90();
  FUN_00d7e39c();
  FUN_00a1ff8c();
  thunk_FUN_00cd93a8();
  FUN_00a8ea14();
  FUN_00920d28();
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) == 0) {
    FUN_0090d718();
  }
  FUN_0092da60();
  FUN_0094172c();
  FUN_008fa074();
  FUN_009115ac();
  FUN_00919fe8(param_1);
  FUN_0093176c(param_1 + 0x360);
  FUN_008ff8e8();
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    FUN_00931c3c();
  }
  FUN_00a06ad8();
  FUN_01988724(0);
  uVar1 = FUN_00942694();
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_009426a8(), (uVar1 & 1) != 0)) {
    FUN_009426bc();
  }
  FUN_0094800c();
  FUN_00cb9a2c();
  FUN_00940b58();
  FUN_00cc7410();
  FUN_00a07524();
  FUN_009305f0();
  FUN_008ff49c();
  FUN_00915e80();
  if (*(long **)(param_1 + 0x7080) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x7080) + 8))();
  }
  *(undefined8 *)(param_1 + 0x7080) = 0;
  FUN_00ec557c();
  FUN_009f254c();
  FUN_019804cc();
  FUN_00948398(0);
  FUN_009480a8();
  thunk_FUN_00e7f8d4();
  FUN_00942618();
  FUN_00cebb98();
  FUN_00ce25f8();
  FUN_00920918();
  return;
}




void FUN_00919fe8(long param_1)

{
  FUN_009481cc(0);
  if (*(long *)(param_1 + 0x7078) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x7078) = 0;
  }
  FUN_019889f0(DAT_02c09240);
  FUN_01988724(0);
  FUN_009439c8(1);
  return;
}

