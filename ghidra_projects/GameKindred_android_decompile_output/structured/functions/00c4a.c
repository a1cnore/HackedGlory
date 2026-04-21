// functions/00c4a — 26 functions
#include "libGameKindred.h"




void FUN_00c4a200(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (**(code **)(*param_3 + 0x48))();
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x29,&local_40);
  local_40 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_3c = param_2;
  uVar2 = FUN_00f13f18(param_3 + 0x188,&local_40);
  uVar2 = FUN_00c4a2f8(uVar2,param_3 + 0x29);
  FUN_00c4a2f8(uVar2,param_3 + 0x188);
  FUN_00c49ff0(param_3);
  if ((*(float *)(param_3 + 0x32e) != 3.0) || (*(float *)((long)param_3 + 0x1974) != 3.0)) {
    lVar3 = NEON_fmov(0x40400000,4);
    param_3[0x32e] = lVar3;
    FUN_0091ada4(param_3 + 0x325);
  }
  FUN_00f07940(0,0,param_3 + 0x325,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4a2f8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float local_90;
  float fStack_8c;
  long local_88;
  
  fVar13 = (float)param_2;
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if ((int)param_4[0x15c] != 0) {
    puVar10 = (undefined8 *)param_4[0x15d];
    uVar12 = 0;
    do {
      plVar7 = (long *)*puVar10;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*param_4 + 0x48))(param_4);
        iVar8 = (int)((float)param_2 + -96.0);
        iVar3 = (**(code **)(*plVar7 + 0x150))(plVar7,iVar8,0);
        if (-1 < iVar3) {
          uVar4 = FUN_00c4794c(plVar7);
          iVar1 = (int)((float)(iVar8 - 0x28) * 0.5);
          if ((uVar4 & 1) == 0) {
            iVar1 = iVar8;
          }
          FUN_00f13f2c(plVar7,CONCAT44(iVar1,iVar3));
          uVar4 = FUN_00c4794c(plVar7);
          uVar11 = 1;
          if ((uVar4 & 1) == 0) {
            uVar11 = 2;
          }
          if (puVar10 == (undefined8 *)param_4[0x15d]) {
            param_2 = 0x42400000;
            FUN_00f07a18(0x42400000,plVar7,0);
            uVar12 = uVar11;
          }
          else {
            uVar9 = puVar10[-1];
            if (2 - uVar12 < uVar11) {
              FUN_00f07b18(0x42200000,plVar7,3,uVar9,1);
              FUN_00f07b18(0,plVar7,0,*(undefined8 *)param_4[0x15d],0);
              uVar12 = uVar11;
            }
            else {
              FUN_00f07b18(0x42200000,plVar7,0,uVar9,2);
              FUN_00f07b18(0,plVar7,3,uVar9,3);
              uVar12 = uVar11 + uVar12;
            }
          }
        }
      }
      fVar13 = (float)param_2;
      puVar10 = puVar10 + 1;
    } while (puVar10 != (undefined8 *)(param_4[0x15d] + (ulong)*(uint *)(param_4 + 0x15c) * 8));
  }
  plVar7 = param_4 + 0x145;
  local_90 = (float)FUN_00f01c54(plVar7,0,0,0,0);
  local_90 = local_90 + 96.0;
  fStack_8c = fVar13 + 96.0;
  FUN_00f13f18(plVar7,&local_90);
  fVar13 = (float)FUN_00f13e54(plVar7);
  fVar14 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  uVar9 = FUN_00ed5aa8(param_4);
  if (fVar13 <= fVar14) {
    uVar5 = 4;
    uVar6 = 4;
  }
  else {
    uVar5 = 3;
    uVar6 = 3;
  }
  FUN_00f07b18(0,plVar7,uVar5,uVar9,uVar6);
  FUN_00ed567c(param_4);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4a580(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x1ea0) == 0xff) {
                    /* WARNING: Could not recover jumptable at 0x00c4a5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),param_3);
    return;
  }
  if (*(byte *)(param_1 + 0x1ea0) == param_3) {
    return;
  }
  FUN_00c4a5b4();
  return;
}




void FUN_00c4a5b4(long param_1)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  pbVar1 = (byte *)(param_1 + 0x1ea0);
  FUN_00c47798(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)*pbVar1 * 8),
               0);
  FUN_00c47e3c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1738) + 0xae8) + (ulong)*pbVar1 * 8))
  ;
  lVar2 = *(long *)(param_1 + 0x1738);
  if (*(int *)(lVar2 + 0xae0) != 0) {
    plVar3 = *(long **)(lVar2 + 0xae8);
    plVar5 = plVar3;
    do {
      lVar4 = *plVar5;
      if ((lVar4 != 0) && ((uint)((ulong)((long)plVar5 - (long)plVar3) >> 3) != (uint)*pbVar1)) {
        FUN_00c47798(lVar4,0);
        FUN_00c478d4(lVar4,1);
        lVar2 = *(long *)(param_1 + 0x1738);
      }
      plVar3 = *(long **)(lVar2 + 0xae8);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar3 + *(uint *)(lVar2 + 0xae0));
  }
  *pbVar1 = 0xff;
  return;
}




void FUN_00c4a688(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00c4a6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),uVar1);
  return;
}




void FUN_00c4a6c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c4a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))(*(long **)(param_1 + 0xb8),param_3);
  return;
}




void FUN_00c4a6d4(long param_1,undefined8 param_2)

{
  FUN_00c49ca8();
  FUN_00c49ad0(param_1);
  FUN_00b16058(param_1 + 0x1928);
  *(uint *)(param_1 + 0x19ac) = *(uint *)(param_1 + 0x19ac) | 4;
  FUN_00f0490c(param_2);
  return;
}




void FUN_00c4a720(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 2);
  puVar3 = puVar2;
  if (*param_2 != 0) {
    do {
      uVar1 = FUN_00f02540(*puVar3);
      if ((uVar1 & 1) != 0) {
        FUN_00f01a4c(*puVar3,1);
      }
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2 + *param_2);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return;
}




void FUN_00c4a784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fc3e0;
  if ((void *)param_1[0x15d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15d]);
    param_1[0x15d] = 0;
    param_1[0x15c] = 0;
  }
  FUN_00f13d08(param_1 + 0x145);
  thunk_FUN_00ed5534(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c4a7e0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c4a860(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00c260b4();
  plVar1 = param_1 + 199;
  param_1[0xc6] = 0;
  *param_1 = (long)&PTR_FUN_027fc578;
  FUN_00f0ac5c(plVar1);
  plVar2 = param_1 + 0xf0;
  FUN_00f0ac5c(plVar2);
  plVar3 = param_1 + 0x119;
  FUN_00f0ac5c(plVar3);
  FUN_00cd0c28(param_1 + 0x142);
  param_1[0xd02] = -1;
  param_1[0x142] = (long)&PTR_FUN_0280d618;
  FUN_00cd0c28(param_1 + 0xd03);
  plVar4 = param_1 + 0x18c3;
  param_1[0xd03] = (long)&PTR_FUN_0280d760;
  FUN_00cd0c28(plVar4);
  *plVar4 = (long)&PTR_FUN_0280d8a8;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0ad88(plVar1,param_1 + 0x142,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0ad88(plVar2,param_1 + 0xd03,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0ad88(plVar3,plVar4,1);
  lVar6 = FUN_009b8d90();
  local_60 = FUN_00f048a4("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  local_88 = FUN_00c4aa40;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(lVar6 + 0x6740,&local_88);
  local_60 = FUN_00f048a4("UI::EVENT_DISPLAY_PROGRESSIVE_REWARD_CHEST_INFO");
  local_88 = FUN_00c4aa48;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4aa40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c4ae00(param_1,param_4);
  return;
}




void FUN_00c4aa48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c4ada8(param_1,param_4);
  return;
}




void FUN_00c4aa50(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027fc578;
  lVar2 = FUN_009b8d90();
  uVar1 = FUN_00f048a4("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  FUN_00c4ab2c(lVar2 + 0x6738,uVar1,FUN_00c4aa40,param_1);
  FUN_00cd2a74(param_1 + 0x18c3);
  FUN_00cd2a74(param_1 + 0xd03);
  FUN_00cd2a74(param_1 + 0x142);
  param_1[0x119] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x130);
  FUN_00f13d08(param_1 + 0x119);
  param_1[0xf0] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x107);
  FUN_00f13d08(param_1 + 0xf0);
  param_1[199] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xde);
  FUN_00f13d08(param_1 + 199);
  FUN_00c22f2c(param_1);
  return;
}




void FUN_00c4ab2c(long param_1,int param_2,long param_3,long param_4)

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
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00c4ab80(void *param_1)

{
  FUN_00c4aa50();
  operator_delete(param_1);
  return;
}




void FUN_00c4aba4(long *param_1)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c262a8();
  FUN_008fa54c(local_50,"SUN_BURST");
  FUN_00cd11a4(param_1 + 0x18c3,1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4ac48(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  param_2 = param_2 * 0.71;
  if ((*(float *)(param_3 + 0x14a) != fVar1 * 0.194) ||
     (*(float *)((long)param_3 + 0xa54) != param_2)) {
    *(float *)(param_3 + 0x14a) = fVar1 * 0.194;
    *(float *)((long)param_3 + 0xa54) = param_2;
    FUN_0091ada4(param_3 + 0x142);
  }
  if ((*(float *)(param_3 + 0xd0b) != fVar1 * 0.492) ||
     (*(float *)((long)param_3 + 0x685c) != param_2)) {
    *(float *)(param_3 + 0xd0b) = fVar1 * 0.492;
    *(float *)((long)param_3 + 0x685c) = param_2;
    FUN_0091ada4(param_3 + 0xd03);
  }
  if ((*(float *)(param_3 + 0x18cb) == fVar1 * (float)0x3f4a3d71) &&
     (*(float *)((long)param_3 + 0xc65c) == param_2)) {
    return;
  }
  *(float *)(param_3 + 0x18cb) = fVar1 * (float)0x3f4a3d71;
  *(float *)((long)param_3 + 0xc65c) = param_2;
  FUN_0091ada4(param_3 + 0x18c3);
  return;
}




void FUN_00c4ad58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00cd1e9c(param_1 + 0xa10);
  FUN_00cd0e64(param_1 + 0x6818,param_3);
  FUN_00cd0e64(param_1 + 0xc618,param_4);
  return;
}




void FUN_00c4ada8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00f04924(param_2);
  if (((lVar1 != 0) && (lVar1 = FUN_00f04924(param_2), lVar1 != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x630), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00c4adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,lVar1);
    return;
  }
  return;
}




void FUN_00c4ae00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00f04924(param_2);
  if (((lVar1 != 0) && (lVar1 = FUN_00f04924(param_2), lVar1 != 0)) &&
     (puVar2 = *(undefined8 **)(param_1 + 0x630), puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00c4ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,lVar1);
    return;
  }
  return;
}




void FUN_00c4ae58(undefined8 *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_027fc698;
  return;
}




void FUN_00c4ae8c(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_00c26c2c();
                    /* WARNING: Could not recover jumptable at 0x00c4aebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x90))();
    return;
  }
  return;
}




void FUN_00c4aecc(long *param_1,long param_2)

{
  param_1[0x18] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c4aedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  return;
}




void FUN_00c4aee0(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c4af04(long *param_1)

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
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar20 = tpidr_el0;
  local_70 = *(long *)(lVar20 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027fc7e0;
  FUN_00f0d160();
  plVar2 = param_1 + 0x3e;
  FUN_00f0d160();
  plVar3 = param_1 + 100;
  FUN_00f0d160();
  plVar4 = param_1 + 0x8a;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0xa1;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 199;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0xe5;
  FUN_00f0e4a8();
  plVar8 = param_1 + 0x103;
  FUN_00abbf0c();
  plVar9 = param_1 + 0x4a2;
  FUN_00f13ca4(plVar9);
  plVar10 = param_1 + 0x4b9;
  FUN_00f0d160(plVar10);
  plVar11 = param_1 + 0x4df;
  FUN_00f0e4a8(plVar11);
  plVar12 = param_1 + 0x4fd;
  FUN_00f0e4a8(plVar12);
  plVar13 = param_1 + 0x51b;
  FUN_00abbf0c(plVar13);
  FUN_00f017e8();
  plVar14 = param_1 + 0x8cb;
  param_1[0x8ba] = (long)&PTR_FUN_027c1f80;
  FUN_00c93600(plVar14,0);
  plVar15 = param_1 + 0xa14;
  FUN_00c93600(plVar15,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  FUN_00f023ec(plVar9,plVar10,1);
  FUN_00f023ec(plVar9,plVar11,1);
  FUN_00f023ec(plVar9,plVar12,1);
  FUN_00f023ec(plVar9,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x8ba,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar15,1);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar22 = FUN_00e6ce7c("RETRIEVE_CREDENTIALS_HEADER",0);
  FUN_00f0d75c(plVar1,uVar22);
  FUN_00f0d9b0(plVar1,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee802);
  uVar22 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
  FUN_00f0d75c(plVar2,uVar22);
  *(uint *)((long)param_1 + 0x274) = *(uint *)((long)param_1 + 0x274) & 0xfffffffb;
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar22 = FUN_00e6ce7c("RETRIEVE_CREDENTIALS_DESCRIPTION",0);
  FUN_00f0d75c(plVar3,uVar22);
  FUN_00f0d9b0(plVar3,1);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar17 = *(uint *)((long)param_1 + 0x6bc);
  if ((uVar17 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x6bc) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x1e80;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff6c5050);
  FUN_00f0e670(plVar7,&local_a0,2);
  if ((*(uint *)((long)param_1 + 0x7ac) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x7ac) = *(uint *)((long)param_1 + 0x7ac) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar22 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  FUN_00f0d75c(plVar5,uVar22);
  iVar21 = FUN_0092f28c();
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (iVar21 != 1) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  FUN_00b0360c(plVar8,*ppuVar16,&DAT_01bee7fa);
  uVar22 = FUN_00e6ce7c("MAIN_PROFILE_REG_USER_DEFAULT",0);
  FUN_00abc73c(plVar8,uVar22);
  FUN_00abceac(0xc1200000,plVar8);
  uVar22 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  uVar23 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_00ce1e34(plVar8,uVar22,uVar23,&DAT_03210450,0,1,0,0,0,1,0,0);
  uVar18 = DAT_03210fac;
  local_a0 = FUN_00c4b7bc;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar18;
  FUN_009693a0(param_1 + 0x104,&local_a0);
  local_a0 = FUN_00c4b7bc;
  uVar19 = DAT_03210fb0;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar19;
  FUN_009693a0(param_1 + 0x104,&local_a0);
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar11,&DAT_01bee7f6,2);
  uVar17 = *(uint *)((long)param_1 + 0x277c);
  if ((uVar17 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x277c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x1e80;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff6c5050);
  FUN_00f0e670(plVar12,&local_a0,2);
  if ((*(uint *)((long)param_1 + 0x286c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x286c) = *(uint *)((long)param_1 + 0x286c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar22 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  FUN_00f0d75c(plVar10,uVar22);
  iVar21 = FUN_0092f28c();
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (iVar21 != 1) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  FUN_00b0360c(plVar13,*ppuVar16,&DAT_01bee7fa);
  uVar22 = FUN_00e6ce7c("MAIN_PROFILE_REG_PASS_DEFAULT",0);
  FUN_00abc73c(plVar13,uVar22);
  FUN_00abceac(0xc1200000,plVar13);
  uVar22 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  uVar23 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_TEXTENTRY_PASS_MESSAGE",0);
  FUN_00ce1e34(plVar13,uVar22,uVar23,&DAT_03210450,1,0,0,0,0,0,0,0);
  local_a0 = FUN_00c4b7bc;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  plStack_98 = param_1;
  local_78 = uVar18;
  FUN_009693a0(param_1 + 0x51c,&local_a0);
  local_a0 = FUN_00c4b7bc;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  plStack_98 = param_1;
  local_78 = uVar19;
  FUN_009693a0(param_1 + 0x51c,&local_a0);
  uVar18 = DAT_03210c64;
  local_a0 = FUN_00c4b7e8;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar18;
  FUN_009693a0(param_1 + 0x8cc,&local_a0);
  FUN_00c9228c(plVar14,1);
  FUN_00c93864(plVar14,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar22 = FUN_00e6ce7c("RETRIEVE_CREDENTIALS_BUTTON_CANCEL",0);
  FUN_00c938d4(plVar14,uVar22);
  FUN_00c9279c(plVar14,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff3f2b2a);
  FUN_00c927dc(plVar14,&local_a0);
  FUN_00c92844(plVar14,1);
  local_a0 = thunk_FUN_00c4bcfc;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  local_78 = uVar18;
  FUN_009693a0(param_1 + 0xa15,&local_a0);
  FUN_00c9228c(plVar15,1);
  FUN_00c93864(plVar15,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar22 = FUN_00e6ce7c("RETRIEVE_CREDENTIALS_BUTTON_ACCEPT",0);
  FUN_00c938d4(plVar15,uVar22);
  FUN_00c9279c(plVar15,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff3f2b2a);
  FUN_00c927dc(plVar15,&local_a0);
  FUN_00c92844(plVar15,1);
  FUN_00ecf888(plVar15,0);
  if (*(long *)(lVar20 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

