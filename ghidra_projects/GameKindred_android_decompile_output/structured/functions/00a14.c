// functions/00a14 — 26 functions
#include "libGameKindred.h"




void FUN_00a141b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_00a13dd4(param_1,0);
  uVar1 = FUN_00a1bcec();
  lVar4 = *(long *)(param_1 + 0x150);
  if ((uVar1 & 1) != 0) {
    if (lVar4 == 0) {
      uVar2 = FUN_01985d44(param_1,DAT_03130dc4);
      *(undefined8 *)(param_1 + 0x150) = uVar2;
      FUN_00a1e99c(uVar2,param_1);
    }
    if (*(long *)(param_1 + 0x158) == 0) {
      uVar2 = FUN_01985d44(param_1,DAT_03130dd0);
      *(undefined8 *)(param_1 + 0x158) = uVar2;
      FUN_00a1d318(uVar2,param_1);
    }
    if (*(long *)(param_1 + 0x160) == 0) {
      uVar2 = FUN_01985d44(param_1,DAT_03130de0);
      *(undefined8 *)(param_1 + 0x160) = uVar2;
      FUN_009bbfb0();
      uVar3 = FUN_009bd5c8();
      FUN_00a1e71c(uVar2,param_1,uVar3);
    }
    FUN_00a1bdd0(param_1 + 0x188,*(long *)(param_1 + 0x150) + 0x28,*(long *)(param_1 + 0x158) + 0x28
                 ,param_1 + 0x168);
    return;
  }
  if (lVar4 != 0) {
    FUN_019888f4(lVar4);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}




void FUN_00a142b0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = FUN_00a1bd10();
  FUN_00a15728(param_1,uVar1 & 1);
  FUN_00a13dd4(param_1,0);
  uVar2 = FUN_00a1bd10();
  FUN_009bbfb0();
  FUN_009bd5c8();
  if ((uVar2 & 1) == 0) {
    FUN_009b850c();
  }
  else {
    FUN_009b8570();
  }
  lVar3 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0312f134) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar1 = FUN_00a1bd7c();
  FUN_009c068c(lVar3,uVar1 & 1);
  return;
}




void FUN_00a14348(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long *plVar13;
  
  if ((*(int *)(param_1 + 0x35c) != -1) && (*(int *)(param_1 + 0x360) != -1)) {
    return;
  }
  if (*(long *)(param_1 + 0x340) == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x340) + 0x18);
  if (lVar9 == 0) {
    return;
  }
  while (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_03130aa8) {
    lVar9 = *(long *)(lVar9 + 0x20);
    if (lVar9 == 0) {
      return;
    }
  }
  iVar1 = FUN_00d72dac(lVar9);
  if (iVar1 == 0) {
    return;
  }
  uVar10 = 0;
  do {
    uVar2 = FUN_00d72ed0(lVar9,uVar10);
    puVar4 = (undefined8 *)FUN_00d73214(lVar9,uVar2);
    iVar1 = strcmp((char *)*puVar4,PTR_s_Healing_Flask_02be3428);
    if (iVar1 == 0) {
      uVar11 = 0;
      puVar7 = (undefined4 *)(param_1 + 0x35c);
LAB_00a1444c:
      *puVar7 = uVar2;
      lVar5 = FUN_00a1ffc0();
      plVar6 = (long *)(lVar5 + 0x10);
      plVar8 = (long *)*plVar6;
      plVar13 = plVar6;
      if (plVar8 != (long *)0x0) {
        do {
          if (*(uint *)(plVar8 + 4) >= 0x8a579c5c) {
            plVar13 = plVar8;
          }
          plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < 0x8a579c5c];
        } while (plVar8 != (long *)0x0);
        if (((plVar13 != plVar6) && (*(uint *)(plVar13 + 4) < 0x8a579c5d)) && ((int)plVar13[5] != 0)
           ) {
          lVar5 = 0;
          uVar12 = 0;
          do {
            (*(code *)((undefined8 *)(plVar13[6] + lVar5))[1])
                      (*(undefined8 *)(plVar13[6] + lVar5),uVar11,uVar2);
            uVar12 = uVar12 + 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar12 < *(uint *)(plVar13 + 5));
        }
      }
    }
    else {
      iVar1 = strcmp((char *)*puVar4,PTR_s_Vision_Totem_02be3430);
      if (iVar1 == 0) {
        uVar11 = 1;
        puVar7 = (undefined4 *)(param_1 + 0x360);
        goto LAB_00a1444c;
      }
    }
    uVar10 = uVar10 + 1;
    uVar3 = FUN_00d72dac(lVar9);
    if (uVar3 <= uVar10) {
      return;
    }
  } while( true );
}




void FUN_00a144fc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x37c) = param_2 & 1;
  return;
}




void FUN_00a14508(float param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_009f1f70(0x14);
  if ((param_1 < 0.0) && ((uVar1 & 1) != 0)) {
    lVar3 = *(long *)(param_3 + 0x40);
    fVar4 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
            (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0)
            );
    if (DAT_03130d10 <= fVar4) {
      fVar4 = DAT_03130d10;
    }
    fVar5 = DAT_03130c50;
    if (DAT_03130c50 <= fVar4) {
      fVar5 = fVar4;
    }
    if (((*(uint *)(param_3 + 0x2f4) & 0x2205) != 0) &&
       ((fVar5 = -param_1 / fVar5, (*(uint *)(param_3 + 0x2f4) >> 0xd & 1) != 0 || (0.2 < fVar5))))
    {
      uVar2 = FUN_009c56f0(*(undefined8 *)(param_2 + 0x348));
      FUN_00a70d80(0x3d8f5c29,0x3ecccccd,fVar5 * fVar5 * 50.0,uVar2,0xff0f1ba9,0);
      return;
    }
  }
  return;
}




void FUN_00a14604(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009f1f70(0x14);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00d6a8a8(param_2), (uVar1 & 1) != 0)) {
    uVar2 = FUN_009c56f0(*(undefined8 *)(param_1 + 0x348));
    FUN_00a70d80(0,0x3f800000,0x3e99999a,uVar2,0xffffffff,0);
    return;
  }
  return;
}




void FUN_00a14670(long param_1)

{
  FUN_009c4f10(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a14678(long param_1)

{
  FUN_009c30d0(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a14680(long param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 & 1) != 0;
  if (bVar1) {
    FUN_00a146bc(param_1,0);
    *(undefined4 *)(param_1 + 0x364) = 0;
  }
  *(bool *)(param_1 + 0x37d) = bVar1;
  return;
}




void FUN_00a146bc(long param_1,uint param_2)

{
  long lVar1;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(*(undefined8 *)(param_1 + 0x340),auStack_68,0);
  FUN_00985148(auStack_58,auStack_68,param_2 & 1,0);
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a1472c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_70;
  undefined4 local_68;
  undefined **local_60;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_68 = DAT_03218f38;
  local_70 = DAT_03218f30;
  uVar4 = 0;
  if (1.1920929e-07 <= ABS(*(float *)(param_1 + 0x370))) goto LAB_00a14868;
  FUN_00d4d478(&local_60);
  FUN_00d4d354(&local_60,0);
  lVar5 = FUN_00d9e458(param_2,1,&local_60);
  if (lVar5 == 0) {
    lVar5 = FUN_00d9e458(param_2,0x40000,&local_60);
  }
  if ((param_3 == 3) || (lVar5 == 0)) {
    uVar3 = FUN_00da2eb4(*(undefined8 *)(param_1 + 0x340));
    uVar6 = FUN_00cac868(param_2,uVar3,&local_70);
    uVar4 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00a14868;
    uVar4 = FUN_00a1ae38(0);
LAB_00a1482c:
    FUN_00a1b764(uVar4,&local_70,param_3);
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x260);
    uVar4 = FUN_00a1ae38();
    if (iVar1 == -1) goto LAB_00a1482c;
    FUN_00a1b568(uVar4,iVar1,param_3);
  }
  *(undefined4 *)(param_1 + 0x370) = 0x3e800000;
  local_60 = &PTR_FUN_027c8668;
  local_58 = 0x1d;
  FUN_00a1a334(param_1 + 0x260,&local_60);
  uVar4 = 1;
LAB_00a14868:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00a14894(long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    for (lVar2 = *(long *)(param_1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312f134) goto LAB_00a14914;
    }
    FUN_009bbfb0();
    uVar1 = FUN_009bd5c8();
    FUN_009b850c();
    FUN_009b81dc(uVar1,1);
    FUN_009b81e4(uVar1,2);
  }
  else {
    FUN_009bbfb0();
    FUN_009bd5c8();
    FUN_009b8570();
  }
LAB_00a14914:
  *(byte *)(param_1 + 0x37f) = param_2 & 1;
  FUN_009c62ec(*(undefined8 *)(param_1 + 0x348),param_2 & 1);
  return;
}




undefined8 FUN_00a14930(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312f134) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return 1;
}




uint FUN_00a14968(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x100000001;
  local_38 = param_4;
  local_30 = param_1;
  uStack_2c = param_2;
  uVar2 = FUN_00a149c4(param_3,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00a149c4(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined **local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar4 = param_2[1];
  if (iVar4 == 1) {
    if (*param_2 == 3) {
      local_40 = CONCAT44(local_40._4_4_,0x1d);
      local_48 = &PTR_FUN_027c8638;
      FUN_00a1a334(param_1 + 0x260,&local_48);
    }
    else if (*param_2 == 1) {
      uVar3 = FUN_01980644(0x50);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_01980644(0x4e);
        if ((uVar3 & 1) == 0) goto LAB_00a14a88;
        local_40 = 0x40000001d;
      }
      else {
        local_40 = 0x20000001d;
      }
      local_48 = &PTR_FUN_027c8620;
      FUN_00a1a334(param_1 + 0x260,&local_48);
      uVar2 = 1;
      goto LAB_00a14abc;
    }
LAB_00a14a88:
    iVar4 = param_2[1];
  }
  if (iVar4 == 4) {
    iVar4 = 4;
  }
  else {
    FUN_00a1bd34();
    iVar4 = param_2[1];
  }
  uVar2 = FUN_00a1f4b8(param_2[4],param_2[5],param_1 + 0x218,*(undefined8 *)(param_2 + 2),
                       param_1 + 800,*param_2,iVar4);
LAB_00a14abc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00a14ae8(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x100000003;
  local_38 = param_4;
  local_30 = param_1;
  uStack_2c = param_2;
  uVar2 = FUN_00a149c4(param_3,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a14b48(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_00ceb7b0(param_1 + 0x1e8);
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_00ceb7b0(param_1 + 0x1e8);
    bVar1 = *(int *)(lVar2 + 0x260) == *(int *)(param_2 + 0x260);
  }
  return bVar1;
}




void FUN_00a14b8c(long param_1,uint param_2)

{
  FUN_009c62ec(*(undefined8 *)(param_1 + 0x348),param_2 & 1);
  return;
}




void FUN_00a14b98(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float local_48;
  undefined4 local_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a1bd34();
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00a1bd10();
    if ((uVar2 & 1) == 0) {
      FUN_009bbfb0();
      uVar4 = FUN_009bd5c8();
      FUN_009bbfb0();
      lVar3 = FUN_009bd5c8();
      FUN_009b8248(uVar4,lVar3 + 0x70);
      FUN_009bbfb0();
      FUN_009bd5c8();
      FUN_009b850c();
    }
    else {
      FUN_009bbfb0();
      FUN_009bd5c8();
      fVar5 = (float)FUN_009b8778();
      FUN_009bbfb0();
      lVar3 = FUN_009bd5c8();
      local_48 = fVar5 + *(float *)(lVar3 + 0x420);
      local_40 = param_3 + *(float *)(lVar3 + 0x428);
      FUN_009bbfb0();
      lVar3 = FUN_009bd5c8();
      local_44 = *(undefined4 *)(lVar3 + 0x74);
      FUN_009bbfb0();
      uVar4 = FUN_009bd5c8();
      FUN_009b81fc(uVar4,&local_48,2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a14c78(long param_1,byte param_2,undefined4 param_3)

{
  FUN_00a13d48();
  *(byte *)(param_1 + 0x368) = param_2 & 1;
  *(undefined4 *)(param_1 + 0x378) = param_3;
  FUN_00a11d98(param_1 + 0x28,3,0,0);
  return;
}




void FUN_00a14cc0(long param_1)

{
  if (*(long *)(param_1 + 0x348) != 0) {
    FUN_009c382c();
    return;
  }
  return;
}




void FUN_00a14cd0(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    FUN_00965940(param_1 + 0x1e8);
    uVar2 = DAT_03214ce8;
    lVar1 = *(long *)(param_1 + 0x340);
    if (lVar1 == 0) {
      return;
    }
    *(undefined8 *)(lVar1 + 0x2b0) = 0;
  }
  else {
    FUN_009658fc(param_1 + 0x1e8,param_2,1);
    lVar1 = *(long *)(param_1 + 0x340);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(lVar1 + 0x2b0) = param_2 + 0x28;
  }
  *(undefined4 *)(lVar1 + 0x2b8) = uVar2;
  return;
}




void FUN_00a14d3c(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_009658fc(param_1 + 0x1e8,param_2,1);
  lVar2 = *(long *)(param_1 + 0x340);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(lVar2 + 0x2b0) = param_2 + 0x28;
    *(undefined4 *)(lVar2 + 0x2b8) = uVar1;
  }
  return;
}




void FUN_00a14d80(float param_1,long param_2,float *param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_98 [4];
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00a14ed8(param_2 + 0x28,1);
  if ((uVar3 & 1) != 0) {
    FUN_00d55794(*(undefined8 *)(param_2 + 0x340),local_98,0);
    fVar5 = (float)local_98._4_8_ - (float)*(undefined8 *)(param_3 + 1);
    fVar6 = SUB84(local_98._4_8_,4) - (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
    fVar6 = (local_98[0] - *param_3) * (local_98[0] - *param_3) + fVar5 * fVar5 + fVar6 * fVar6;
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    lVar4 = *(long *)(*(long *)(param_2 + 0x340) + 0x38);
    fVar6 = *(float *)(lVar4 + 100);
    if (((*(float *)(lVar4 + 0x68) * (fVar6 + *(float *)(*(long *)(param_2 + 0x340) + 0x2e8))) /
        fVar6) * param_1 < fVar5) {
      FUN_00985148(auStack_88,param_3,param_4 & 1,param_5 & 1);
      FUN_00ce20fc(auStack_88);
      *(undefined4 *)(param_2 + 0x364) = 0;
      if ((param_4 & 1) == 0) {
        FUN_00965940(param_2 + 0x1e8);
        uVar2 = DAT_03214ce8;
        lVar4 = *(long *)(param_2 + 0x340);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x2b0) = 0;
          *(undefined4 *)(lVar4 + 0x2b8) = uVar2;
        }
      }
      *(undefined1 *)(param_2 + 0x369) = 0;
      FUN_00a11d98(param_2 + 0x28,1,0,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00a14ed8(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    bVar3 = true;
  }
  else {
    uVar2 = *param_1 >> 10;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_00a14f20;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 < (uVar2 & 0x1f));
    }
    uVar4 = 0x1f;
LAB_00a14f20:
    bVar3 = true;
    if (uVar4 != uVar1) {
      bVar3 = (1 << (ulong)(uVar4 & 0x1f) & (uint)param_1[(ulong)uVar1 * 0x1c + 5]) != 0;
    }
  }
  return bVar3;
}




void FUN_00a14f50(float param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_68;
  undefined4 local_60;
  float local_5c;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00965940(param_2 + 0x1e8);
  uVar2 = DAT_03214ce8;
  lVar3 = *(long *)(param_2 + 0x340);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x2b0) = 0;
    *(undefined4 *)(lVar3 + 0x2b8) = uVar2;
  }
  FUN_00d55794(lVar3,local_48,0);
  fVar6 = cosf(param_1);
  fVar7 = sinf(param_1);
  local_58 = CONCAT44(local_48._4_4_ + 0.0,fVar6 + fVar6 + local_48._0_4_);
  local_50 = fVar7 + fVar7 + local_40;
  uVar4 = FUN_00da2eb4(*(undefined8 *)(param_2 + 0x340));
  uVar5 = FUN_00ef01b8(uVar4,local_48,&local_58,&local_5c,0,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x340) + 0x38);
    fVar8 = *(float *)(lVar3 + 100);
    if ((*(float *)(lVar3 + 0x68) * (fVar8 + *(float *)(*(long *)(param_2 + 0x340) + 0x2e8))) /
        fVar8 <= local_5c * 0.5) {
      local_5c = local_5c + local_5c;
      local_58 = CONCAT44(local_5c * 0.0 + local_48._4_4_,fVar6 * local_5c + local_48._0_4_);
      local_50 = fVar7 * local_5c + local_40;
    }
    else {
      local_60 = 0x3dcccccd;
      local_68 = 0x412000003dcccccd;
      uVar4 = FUN_00da2eb4();
      uVar5 = FUN_00ef00a0(uVar4,&local_58,&local_58,&local_68);
      if ((uVar5 & 1) == 0) goto LAB_00a150bc;
    }
  }
  FUN_00a14d80(0x3f800000,param_2,&local_58,0,0);
LAB_00a150bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

