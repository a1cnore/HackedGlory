// functions/00aff — 39 functions
#include "libGameKindred.h"




void thunk_FUN_00aff5d0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_POPUP_REQUESTING_CLOSE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aff4d8(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x13d);
                    /* WARNING: Could not recover jumptable at 0x00aff504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00aff508(long *param_1,long *param_2)

{
  param_1[0x3d2] = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00aff518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00aff51c(long *param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1[0x3d1] == 0) && (param_1[0x3d1] = param_2, param_2 != 0)) {
    uVar1 = FUN_00f02540(param_2);
    if ((uVar1 & 1) != 0) {
      FUN_00f01a4c(param_1[0x3d1],1);
    }
    FUN_00f023ec(param_1 + 0x3c0,param_1[0x3d1],1);
                    /* WARNING: Could not recover jumptable at 0x00aff588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))(param_1);
    return;
  }
  return;
}




void FUN_00aff58c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x1e88) != 0) {
    FUN_00f04710();
    uVar1 = FUN_00f02540(*(undefined8 *)(param_1 + 0x1e88));
    if ((uVar1 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_1 + 0x1e88),1);
    }
  }
  *(undefined8 *)(param_1 + 0x1e88) = 0;
  return;
}




void FUN_00aff5d0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_POPUP_REQUESTING_CLOSE");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aff640(void)

{
  return;
}




void FUN_00aff644(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027db078;
  *(undefined1 *)((long)param_1 + 0xb5) = 0;
  return;
}




void FUN_00aff678(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aff680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00aff684(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aff68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00aff690(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aff698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




undefined4 FUN_00aff69c(void)

{
  return 0x42200000;
}




void FUN_00aff6b0(long *param_1)

{
  long *plVar1;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *(undefined1 *)((long)param_1 + 0xb5) = 0;
  *param_1 = (long)&PTR_FUN_027db1d0;
  FUN_00f0d160(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  return;
}




void FUN_00aff718(long *param_1)

{
  FUN_00f0d378(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00aff744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00aff748(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00aff774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00aff778(long *param_1)

{
  float fVar1;
  long lVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  FUN_00f0dad0(fVar1 + -40.0,param_1 + 0x17,1);
  if ((*(float *)(param_1 + 0x1f) == 20.0) && (*(float *)((long)param_1 + 0xfc) == 20.0)) {
    return;
  }
  lVar2 = NEON_fmov(0x41a00000,4);
  param_1[0x1f] = lVar2;
  FUN_0091ada4(param_1 + 0x17);
  return;
}




void FUN_00aff7f0(void)

{
  return;
}




void FUN_00aff7f4(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00aff818(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xb5) = param_2 & 1;
  return;
}




void FUN_00aff824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027db1d0;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aff858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027db1d0;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aff894(undefined8 *param_1)

{
  *param_1 = 0x4416000044160000;
  param_1[1] = _DAT_03218ef8;
  FUN_00e70510(param_1 + 2);
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_008fa54c(param_1 + 5,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_008fa54c(param_1 + 8,"popup_fill");
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xff808080;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffa3781effa4781e;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}




void FUN_00aff91c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_008fce60(param_1 + 0x28,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,param_3);
  FUN_008fce60(param_1 + 0x40,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0x58) = *param_4;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aff9c4(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1f68);
  FUN_00affa9c(pvVar1,param_1);
  DAT_03139948 = pvVar1;
  return;
}




void FUN_00aff9fc(void)

{
  if (DAT_03139948 != (long *)0x0) {
    (**(code **)(*DAT_03139948 + 8))();
  }
  DAT_03139948 = (long *)0x0;
  return;
}




bool FUN_00affa30(void)

{
  return DAT_03139948 != 0;
}




void FUN_00affa44(undefined8 param_1)

{
  FUN_00b00008(DAT_03139948,param_1);
  return;
}




long FUN_00affa58(void)

{
  return DAT_03139948 + 0x1f50;
}




void FUN_00affa6c(void)

{
  FUN_00b0039c(DAT_03139948);
  return;
}




void FUN_00affa78(void)

{
  FUN_00b00540(DAT_03139948);
  return;
}




void FUN_00affa84(void)

{
  FUN_00affc00(DAT_03139948);
  return;
}




void FUN_00affa90(void)

{
  FUN_00b0080c(DAT_03139948);
  return;
}




void FUN_00affa9c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f017e8();
  *param_1 = &PTR_FUN_027db328;
  FUN_00afdd18(param_1 + 0x11);
  param_1[0x3ec] = 0;
  param_1[0x3eb] = 0;
  param_1[0x3ea] = 0;
  param_1[0x3e9] = 0;
  param_1[1000] = 0;
  param_1[999] = 0;
  param_1[0x3e6] = 0;
  param_1[0x3e5] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x11,1);
  local_50 = FUN_00f048a4("UI::EVENT_MENU_POPUP_REQUESTING_CLOSE");
  local_78 = thunk_FUN_00b0039c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(param_1 + 0x12,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00affb88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027db328;
  FUN_00b00400();
  FUN_00b0039c(param_1);
  if ((*(byte *)(param_1 + 0x3ea) & 1) != 0) {
    operator_delete((void *)param_1[0x3ec]);
  }
  FUN_00951534(param_1 + 1000,1);
  FUN_00b00494(param_1 + 0x3e6,1);
  FUN_00afe4f8(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00affc00(undefined8 param_1)

{
  FUN_00b00400();
  FUN_00b0039c(param_1);
  return;
}




void FUN_00affc24(void *param_1)

{
  FUN_00affb88();
  operator_delete(param_1);
  return;
}




void FUN_00affc48(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x1f28) == 0) {
    *(undefined8 *)(param_1 + 0x1f28) = *(undefined8 *)(param_2 + 0x20);
    FUN_008fce60(param_1 + 0x1f50,param_2 + 0x1a);
    uVar5 = FUN_00f02540(*(undefined8 *)(param_1 + 0x1f28));
    if ((uVar5 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_1 + 0x1f28),1);
    }
    plVar1 = (long *)(param_1 + 0x88);
    FUN_00f13f08(*param_2,param_2[1],plVar1);
    FUN_00aff4d8(plVar1,param_2 + 4);
    lVar2 = (long)param_2 + 0x29;
    if ((*(byte *)(param_2 + 10) & 1) != 0) {
      lVar2 = *(long *)(param_2 + 0xe);
    }
    lVar3 = (long)param_2 + 0x41;
    if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
      lVar3 = *(long *)(param_2 + 0x14);
    }
    FUN_00afec14(plVar1,lVar2,lVar3,param_2 + 0x16);
    FUN_00b14cbc(param_1 + 800,param_2 + 0x17);
    FUN_00b14d10(param_1 + 800,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x1f20) = *(undefined1 *)(param_2 + 8);
    FUN_00aff51c(plVar1,*(undefined8 *)(param_1 + 0x1f28));
    FUN_00afe780(plVar1);
    (**(code **)(**(long **)(param_1 + 0x1f28) + 0x138))();
    FUN_00f00298(&fStack_54,&local_58);
    if ((uint)param_2[0x19] < 2) {
      if ((*(float *)(param_1 + 200) != fStack_54 * 0.5) ||
         (*(float *)(param_1 + 0xcc) != local_58 * 0.5)) {
        *(float *)(param_1 + 200) = fStack_54 * 0.5;
        *(float *)(param_1 + 0xcc) = local_58 * 0.5;
        FUN_0091ada4(plVar1);
      }
      local_50 = 0x3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_50);
      FUN_00aff508(plVar1,&DAT_03218ef8);
    }
    FUN_00afecb4(plVar1,1);
  }
  else {
    uVar5 = FUN_00affe38(param_1,param_2 + 0x1a);
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)param_2 + 0x21) == '\0') {
        FUN_00afff34(param_1 + 0x1f30,param_2);
      }
      else {
        FUN_00b00968(param_1 + 0x1f30,*(undefined8 *)(param_1 + 0x1f38),param_2,param_2 + 0x22);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00affe38(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  size_t sVar7;
  int iVar8;
  long lVar9;
  byte *__s2;
  ulong uVar10;
  long lVar11;
  
  uVar3 = *(uint *)(param_1 + 0x1f30);
  if (uVar3 != 0) {
    bVar5 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_1 + 0x1f38);
    uVar10 = 0;
    if ((bVar5 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar5 >> 1);
    }
    do {
      lVar9 = lVar11 + uVar10 * 0x88;
      bVar4 = *(byte *)(lVar9 + 0x68);
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *(ulong *)(lVar9 + 0x70);
      }
      if (__n == uVar2) {
        __s2 = *(byte **)(lVar11 + uVar10 * 0x88 + 0x78);
        if ((bVar4 & 1) == 0) {
          __s2 = (byte *)(lVar9 + 0x69);
        }
        sVar1 = -(ulong)(bVar5 >> 1);
        pbVar6 = param_2;
        sVar7 = __n;
        if ((bVar5 & 1) == 0) {
          while( true ) {
            if (sVar7 == 0) {
              return 1;
            }
            if (pbVar6[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar6 = pbVar6 + 1;
            sVar7 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar8 = memcmp(__s1,__s2,__n), iVar8 == 0)) {
          return 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  return 0;
}




void FUN_00afff34(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_00b00820(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  uVar5 = *param_2;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x88;
  *(undefined8 *)(lVar4 + -0x80) = param_2[1];
  *(undefined8 *)(lVar4 + -0x88) = uVar5;
  thunk_FUN_00e7051c(lVar4 + -0x78,param_2 + 2);
  *(undefined2 *)(lVar4 + -0x68) = *(undefined2 *)(param_2 + 4);
  FUN_008fcdb8(lVar4 + -0x60,param_2 + 5);
  FUN_008fcdb8(lVar4 + -0x48,param_2 + 8);
  uVar5 = param_2[0xb];
  *(undefined8 *)(lVar4 + -0x28) = param_2[0xc];
  *(undefined8 *)(lVar4 + -0x30) = uVar5;
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0xd);
  *(undefined8 *)(lVar4 + -8) = param_2[0x10];
  return;
}

