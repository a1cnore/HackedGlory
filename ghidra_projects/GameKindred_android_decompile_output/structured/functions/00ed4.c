// functions/00ed4 — 34 functions
#include "libGameKindred.h"




void FUN_00ed4188(long *param_1,long *param_2)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar3 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
     (uVar2 = *(ushort *)(param_1 + 0xa6), (uVar2 & 0x30) != 0)) {
    fVar4 = *(float *)((long)param_2 + 0x34);
    fVar5 = ABS(*(float *)(param_2 + 6));
    if ((0.001 <= fVar5) || (0.001 <= ABS(fVar4))) {
      fVar6 = *(float *)(param_1 + 0xa9);
      if ((2.0 < fVar6) || (fVar6 < -2.0)) {
        (**(code **)(*param_1 + 0x138))(param_1);
        if (-0.001 <= fVar6) {
          if (fVar6 <= 0.001) {
            return;
          }
          iVar1 = (int)param_1[0xaa];
          if (iVar1 == -1) {
            iVar1 = *(int *)((long)param_1 + 0x54c);
          }
          else {
            *(int *)((long)param_1 + 0x54c) = iVar1;
          }
          iVar1 = iVar1 + -1;
        }
        else {
          iVar1 = (int)param_1[0xaa];
          if (iVar1 == -1) {
            iVar1 = *(int *)((long)param_1 + 0x54c);
          }
          else {
            *(int *)((long)param_1 + 0x54c) = iVar1;
          }
          iVar1 = iVar1 + 1;
        }
        FUN_00ed432c(param_1,iVar1,0);
        return;
      }
      if (((uVar2 >> 4 & 1) != 0) &&
         ((((uVar2 >> 5 & 1) != 0 || (ABS(fVar4) < 0.001)) || (0.001 <= fVar5)))) {
        fVar4 = *(float *)(param_2 + 6);
      }
      *(float *)(param_1 + 0xa9) = fVar4 + fVar6;
    }
  }
  return;
}




void FUN_00ed42e4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x550);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x54c);
  }
  else {
    *(int *)(param_1 + 0x54c) = iVar1;
  }
  FUN_00ed432c(param_1,iVar1 + 1,0);
  return;
}




void FUN_00ed4308(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x550);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x54c);
  }
  else {
    *(int *)(param_1 + 0x54c) = iVar1;
  }
  FUN_00ed432c(param_1,iVar1 + -1,0);
  return;
}




void FUN_00ed432c(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(int *)(param_1 + 0x554) - 1;
  if (*(int *)(param_1 + 0x554) < 1) goto LAB_00ed4424;
  if ((int)uVar1 <= (int)param_2) {
    param_2 = uVar1;
  }
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x550) = param_2;
  if ((param_3 & 1) == 0) {
    uVar3 = FUN_00f048a4("EVENT_SCROLLING_TO_PAGE");
    FUN_00f048e0(auStack_48,uVar3,*(undefined4 *)(param_1 + 0x550));
    FUN_00f04760(param_1,auStack_48,1);
    goto LAB_00ed4424;
  }
  if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
    fVar4 = 0.0;
    if ((*(ushort *)(param_1 + 0x530) >> 5 & 1) == 0) goto LAB_00ed43c8;
    fVar5 = -(*(float *)(param_1 + 0x538) * (float)(int)param_2);
  }
  else {
    fVar4 = -(*(float *)(param_1 + 0x534) * (float)(int)param_2);
LAB_00ed43c8:
    fVar5 = 0.0;
  }
  if ((*(float *)(param_1 + 0x40) != fVar4) || (*(float *)(param_1 + 0x44) != fVar5)) {
    *(float *)(param_1 + 0x40) = fVar4;
    *(float *)(param_1 + 0x44) = fVar5;
    FUN_0091ada4(param_1);
  }
  uVar3 = FUN_00f048a4("EVENT_SCROLLING_FINISHED");
  FUN_00f048e0(auStack_48,uVar3,*(undefined4 *)(param_1 + 0x550));
  FUN_00f04760(param_1,auStack_48,1);
  *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
LAB_00ed4424:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed4448(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_00ed16a8();
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if (((uVar3 & 1) == 0) && (DAT_03210fd8 != DAT_03210f50)) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x53c) = uVar4;
  if ((*(ushort *)(param_1 + 0x530) >> 4 & 1) == 0) {
    if ((*(ushort *)(param_1 + 0x530) >> 5 & 1) == 0) {
      return;
    }
    fVar6 = (float)((ulong)uVar4 >> 0x20);
    if (fVar6 < -*(float *)(param_1 + 0x544)) {
      iVar1 = *(int *)(param_1 + 0x550);
      if (iVar1 == -1) {
        iVar1 = *(int *)(param_1 + 0x54c);
      }
      else {
        *(int *)(param_1 + 0x54c) = iVar1;
      }
      uVar5 = iVar1 + 1;
    }
    else {
      if (fVar6 <= *(float *)(param_1 + 0x544)) goto LAB_00ed4560;
      iVar1 = *(int *)(param_1 + 0x550);
      if (iVar1 == -1) {
        iVar1 = *(int *)(param_1 + 0x54c);
      }
      else {
        *(int *)(param_1 + 0x54c) = iVar1;
      }
      uVar5 = iVar1 - 1;
    }
  }
  else {
    if (-*(float *)(param_1 + 0x544) <= (float)uVar4) {
      if ((float)uVar4 <= *(float *)(param_1 + 0x544)) {
LAB_00ed4560:
        *(undefined4 *)(param_1 + 0x550) = 0xffffffff;
        return;
      }
      fVar6 = *(float *)(param_1 + 0x534);
      fVar7 = *(float *)(param_1 + 0x40);
      fVar8 = 0.5;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x534);
      fVar7 = *(float *)(param_1 + 0x40);
      fVar8 = -0.5;
    }
    uVar5 = (uint)(-(fVar7 + fVar6 * fVar8) / fVar6);
    uVar2 = *(int *)(param_1 + 0x554) - 1;
    if ((int)uVar2 <= (int)uVar5) {
      uVar5 = uVar2;
    }
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  }
  FUN_00ed432c(param_1,uVar5,0);
  return;
}




void FUN_00ed45a4(undefined8 *param_1)

{
  FUN_00ed8798();
  *param_1 = &PTR_thunk_FUN_00f13d08_02822dc0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  if ((*(float *)(param_1 + 10) == 0.0) && (*(float *)((long)param_1 + 0x54) == 0.0)) {
    return;
  }
  param_1[10] = 0;
  FUN_0091ada4(param_1);
  return;
}




void FUN_00ed460c(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00ed4630(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ed4784(param_2);
  *(undefined4 *)(param_1 + 200) = uVar1;
  return;
}




bool FUN_00ed4658(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  iVar2 = FUN_00ed4784(param_2);
  return iVar1 == iVar2;
}




undefined4 FUN_00ed4684(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}




void FUN_00ed468c(void)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&uStack_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uStack_2c,local_30);
}




void FUN_00ed46dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f00298(param_2,param_3);
  return;
}




void FUN_00ed46e8(long param_1,undefined8 param_2)

{
  FUN_00ed4b68(*(undefined8 *)(param_1 + 0xd0),param_2,1);
  return;
}




undefined8 FUN_00ed46f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}




bool FUN_00ed46fc(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0xd0) != 0) {
    iVar2 = FUN_00ed4b60();
    iVar3 = FUN_00ed4784(param_2);
    bVar1 = iVar2 == iVar3;
  }
  return bVar1;
}




bool FUN_00ed4738(long param_1)

{
  return *(long *)(param_1 + 0xd0) != 0;
}




bool FUN_00ed4748(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0xd0) != 0) {
    iVar2 = FUN_00ed4b60();
    bVar1 = iVar2 == *(int *)(param_1 + 200);
  }
  return bVar1;
}




void FUN_00ed477c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  return;
}




void FUN_00ed4784(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00ed47b4(long *param_1)

{
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_02822f08;
  FUN_00f017e8(param_1 + 0x11);
  param_1[0x11] = (long)&PTR_FUN_027c1f80;
  FUN_00f0ac5c(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4e) = DAT_02bf2578;
                    /* WARNING: Could not recover jumptable at 0x00ed4838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11,1);
  return;
}




void FUN_00ed483c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02822f08;
  pcStack_40 = FUN_00ed5344;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x22] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x39);
  FUN_00f13d08(param_1 + 0x22);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed48f0(void *param_1)

{
  FUN_00ed483c();
  operator_delete(param_1);
  return;
}




void FUN_00ed4914(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  *(undefined8 *)(param_3 + 0xb8) = 0;
  lVar4 = *(long *)(param_1 + 0x260);
  *(long *)(param_3 + 0xc0) = lVar4;
  plVar1 = (long *)(param_1 + 600);
  if (*(long *)(param_1 + 600) != 0) {
    plVar1 = (long *)(lVar4 + 0xb8);
  }
  *plVar1 = param_3;
  *(long *)(param_1 + 0x260) = param_3;
  *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + 1;
  FUN_00f023ec(param_1 + 0x88,param_3,1);
  FUN_00ed4630(param_3,param_2);
  FUN_00ed477c(param_3,param_1);
  uVar2 = *(uint *)(param_3 + 0x84);
  uVar3 = uVar2 & 0xfffffffb;
  *(uint *)(param_3 + 0x84) = uVar3;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x84) = uVar2 & 0xffff807b;
    FUN_0091ada4(param_3);
    uVar3 = *(uint *)(param_3 + 0x84);
  }
  *(uint *)(param_3 + 0x84) = uVar3 & 0xfffffff7;
  return;
}




void FUN_00ed49d0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00ed4a50();
  if (lVar3 != 0) {
    FUN_00f01a4c(lVar3,1);
    FUN_00ed477c(lVar3,0);
    FUN_00ed4a9c(param_1 + 600,lVar3);
    FUN_00f00478(param_1);
    iVar1 = *(int *)(param_1 + 0x270);
    iVar2 = FUN_00ed4684(lVar3);
    if (iVar1 == iVar2) {
      *(undefined4 *)(param_1 + 0x270) = DAT_02bf2578;
    }
  }
  return;
}




long FUN_00ed4a50(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_00ed4784(param_2);
  lVar3 = *(long *)(param_1 + 600);
  while ((lVar3 != 0 && (iVar2 = FUN_00ed4684(lVar3), iVar2 != iVar1))) {
    lVar3 = *(long *)(lVar3 + 0xb8);
  }
  return lVar3;
}




void FUN_00ed4a9c(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0xb8);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0xc0);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0xc0);
    *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(long *)(*(long *)(param_2 + 0xb8) + 0xc0) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00ed4afc(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 600); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0xb8)) {
    FUN_00ed477c(lVar1,0);
  }
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  FUN_00f00478(param_1);
  *(undefined4 *)(param_1 + 0x270) = DAT_02bf2578;
  return;
}




undefined4 FUN_00ed4b60(long param_1)

{
  return *(undefined4 *)(param_1 + 0x270);
}




void FUN_00ed4b68(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar6 = FUN_00ed4a50();
  if (lVar6 != 0) {
    iVar4 = FUN_00ed4684(lVar6);
    iVar1 = *(int *)(param_1 + 0x270);
    if (iVar1 != iVar4) {
      for (lVar7 = *(long *)(param_1 + 600); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0xb8)) {
        iVar5 = FUN_00ed4684(lVar7);
        if (iVar5 == iVar1) {
          FUN_00ed88b0(auStack_80,DAT_03210c80,lVar7);
          FUN_00f04760(lVar7,auStack_80,0);
          FUN_00ed4e44(0x3e800000,lVar7,0);
          FUN_00ed4d34(0x3e800000,param_1);
          break;
        }
      }
      uVar3 = DAT_03210c7c;
      *(int *)(param_1 + 0x270) = iVar4;
      FUN_00ed88b0(auStack_80,uVar3,lVar6);
      FUN_00f04760(lVar6,auStack_80,0);
      FUN_00ed4cdc(lVar6,1,param_3 & 1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00ed4c9c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 600);
  while ((lVar2 != 0 && (iVar1 = FUN_00ed4684(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0xb8);
  }
  return lVar2;
}




void FUN_00ed4cdc(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    if ((param_3 & 1) != 0) {
      FUN_00ed4e44(0x3e800000,param_1,0);
      return;
    }
    FUN_00ed5280(param_1,0);
    return;
  }
  if ((param_3 & 1) != 0) {
    FUN_00ed4e44(0x3e800000,param_1,1);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 | 0xc;
  if ((~uVar1 & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x84) = uVar1 | 0x7f8c;
  FUN_0091ada4();
  return;
}




void FUN_00ed4d34(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = param_2 + 0x22;
  uVar3 = FUN_00f02540(plVar1);
  if ((uVar3 & 1) != 0) {
    FUN_00f01a4c(plVar1,1);
  }
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  uVar4 = FUN_00f00274();
  uVar5 = FUN_00f00280();
  FUN_00f13f08(uVar4,uVar5,plVar1);
  *(uint *)((long)param_2 + 0x194) = *(uint *)((long)param_2 + 0x194) | 0x10;
  pcStack_50 = FUN_00ed5344;
  local_58 = param_2;
  FUN_00f02e98(param_1,&local_58,0,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed4e08(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f02540(param_1 + 0x110);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1 + 0x110,1);
    return;
  }
  return;
}




void FUN_00ed4e44(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  FUN_00f01980();
  lVar1 = DAT_03210d00;
  if ((param_3 & 1) == 0) {
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar3 = (ushort *)0x0;
    }
    else {
      puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar3);
      *(undefined ***)puVar3 = &PTR_FUN_02825268;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(param_1,puVar3);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar5 = (ushort *)0x0;
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      lVar1 = DAT_03210d00;
      uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar2 == 0xffff) {
        puVar5 = (ushort *)0x0;
      }
      else {
        puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
        if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar2 = 0xffff;
        }
        else {
          uVar2 = *puVar5;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efc8e8(puVar5);
        *(undefined ***)puVar5 = &PTR_FUN_028250b8;
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
        lVar1 = DAT_03210d00;
        uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar2 != 0xffff) {
          puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
          if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar2 = 0xffff;
          }
          else {
            uVar2 = *puVar6;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
          *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
          FUN_00efec8c(puVar6);
          *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
          goto LAB_00ed5238;
        }
      }
    }
    puVar6 = (ushort *)0x0;
LAB_00ed5238:
    FUN_00efecf8(puVar6,DAT_03210c84,0);
    FUN_00f02308(param_2,puVar3,puVar4,puVar5,puVar6,0);
    return;
  }
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 8;
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 != 0xffff) {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825220;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00ed5138;
    }
  }
  puVar4 = (ushort *)0x0;
LAB_00ed5138:
  FUN_00efcac4(param_1,puVar4);
  FUN_00f02308(param_2,puVar3,puVar4,0);
  return;
}

