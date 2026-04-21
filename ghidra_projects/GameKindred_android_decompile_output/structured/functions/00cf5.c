// functions/00cf5 — 36 functions
#include "libGameKindred.h"




void FUN_00cf5074(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *param_1 = &PTR_FUN_0280f8a8;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}




void FUN_00cf50b0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_00cf50b8(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}




void FUN_00cf50c4(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d5048c(param_2);
    lVar6 = *(long *)(lVar5 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    iVar2 = FUN_00d5359c(lVar6);
    if (iVar2 != 0) {
      uVar7 = 0;
      do {
        uVar4 = FUN_00d54528(lVar6,uVar7);
        if ((uVar4 & 1) != 0) {
          if (*(char *)(param_1 + 0x14) == '\0') {
            fVar8 = (float)FUN_00d53a18(lVar6,uVar7);
          }
          else {
            fVar8 = (float)FUN_00d539d0(lVar6,uVar7);
          }
          FUN_00d04e08(fVar8 * *(float *)(param_1 + 0x10),auStack_78,*(undefined4 *)(lVar5 + 0x260),
                       0xd60c580b,1);
          FUN_00ce20fc(auStack_78);
          break;
        }
        uVar7 = uVar7 + 1;
        uVar3 = FUN_00d5359c(lVar6);
      } while (uVar7 < uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf51e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d51974(param_2);
  return;
}




void FUN_00cf51e8(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f908;
  param_1[2] = 0;
  return;
}




void FUN_00cf521c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_170 [40];
  undefined8 auStack_148 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d634(auStack_170);
  uVar3 = FUN_00d5048c(param_2);
  FUN_00d4d66c(auStack_170,uVar3);
  FUN_00d4d364(auStack_170,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00d4d678(auStack_170);
  }
  uVar2 = FUN_00d9e840(auStack_170,auStack_148,0x20,0);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    puVar5 = auStack_148;
    do {
      FUN_00d518f4(param_2,*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf52e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf52e8(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f968;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00cf531c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00cf5324(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf532c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_6e8 [96];
  long local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00d4d9e8(auStack_6e8);
    (**(code **)(param_1 + 0x18))(param_2,auStack_6e8);
    uVar2 = FUN_00d9e840(auStack_6e8,local_688,200,0);
    if (uVar2 != 0) {
      uVar5 = (ulong)uVar2;
      plVar6 = local_688;
      do {
        lVar4 = *plVar6;
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          if (lVar4 != 0) goto LAB_00cf53c0;
        }
        else if ((lVar4 != 0) && (uVar3 = (**(code **)(param_1 + 0x10))(param_2), (uVar3 & 1) != 0))
        {
          lVar4 = *plVar6;
LAB_00cf53c0:
          FUN_00d518f4(param_2,lVar4);
        }
        uVar5 = uVar5 - 1;
        plVar6 = plVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf5400(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f9c8;
  FUN_00d4d9e8(param_1 + 2);
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xe0 | 2;
  return;
}




long FUN_00cf5460(undefined4 param_1,long param_2,long param_3,byte param_4,byte param_5,
                 uint param_6,byte param_7)

{
  byte bVar1;
  
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 8);
  memcpy((void *)(param_2 + 0x24),(void *)(param_3 + 0x14),0x47);
  if ((param_6 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_00ceab48();
    bVar1 = bVar1 & 1;
  }
  *(undefined4 *)(param_2 + 0xa4) = param_1;
  *(byte *)(param_2 + 0xa8) =
       (param_5 & 1) << 2 | (param_7 & 1) << 3 |
       bVar1 | (param_4 & 1) << 1 | *(byte *)(param_2 + 0xa8) & 0xf0;
  return param_2;
}




long FUN_00cf5504(long param_1,long param_2,byte param_3,undefined8 param_4,byte param_5,
                 uint param_6,byte param_7)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 8);
  memcpy((void *)(param_1 + 0x24),(void *)(param_2 + 0x14),0x47);
  if ((param_6 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_00ceab48();
    bVar1 = bVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x78) = param_4;
  *(byte *)(param_1 + 0xa8) =
       (param_5 & 1) << 2 | (param_7 & 1) << 3 |
       bVar1 | (param_3 & 1) << 1 | *(byte *)(param_1 + 0xa8) & 0xf0;
  return param_1;
}




void FUN_00cf55a0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}




void FUN_00cf55a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | 0x10;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}




void FUN_00cf55c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return;
}




void FUN_00cf55d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  return;
}




void FUN_00cf55e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0xa0) = 2;
  return;
}




void FUN_00cf55f0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x70) = param_1;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  return;
}




void FUN_00cf55fc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  float *pfVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_740;
  undefined4 local_738;
  uint local_730 [10];
  undefined **local_708;
  undefined8 uStack_700;
  undefined1 local_6f8;
  undefined1 auStack_6f4 [76];
  float local_6a8 [12];
  undefined8 local_678;
  undefined4 local_670;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_4 + 0xa8) & 1) == 0) goto LAB_00cf5910;
  local_6f8 = *(undefined1 *)(param_4 + 0x20);
  uStack_700 = *(undefined8 *)(param_4 + 0x18);
  local_708 = &PTR_FUN_0281d898;
  memcpy(auStack_6f4,(void *)(param_4 + 0x24),0x47);
  lVar3 = FUN_00d5048c(param_5);
  pbVar8 = *(byte **)(param_4 + 0x98);
  if (pbVar8 == (byte *)0x0) {
    lVar5 = lVar3;
    if ((*(byte *)(param_4 + 0xa8) >> 3 & 1) == 0) {
LAB_00cf572c:
      FUN_00d55794(lVar5,&local_740,0);
    }
    else {
      iVar2 = FUN_00d51a94(param_5);
      if (iVar2 == 2) {
        uVar12 = FUN_00d51820(param_5);
        local_740 = CONCAT44(param_2,uVar12);
        local_738 = param_3;
      }
      else {
        iVar2 = FUN_00d51a94(param_5);
        if ((iVar2 != 1) || (lVar5 = FUN_00d51778(param_5), lVar5 != 0)) goto LAB_00cf572c;
      }
    }
  }
  else {
    uVar9 = (uint)*pbVar8;
    local_730[0] = 0x811c9dc5;
    if (*pbVar8 != 0) {
      do {
        pbVar8 = pbVar8 + 1;
        local_730[0] = (local_730[0] ^ uVar9) * 0x1000193;
        uVar9 = (uint)*pbVar8;
      } while (*pbVar8 != 0);
    }
    FUN_00d58298(lVar3,local_730,local_6a8);
    local_740 = local_678;
    local_738 = local_670;
  }
  iVar2 = *(int *)(param_4 + 0xa0);
  if (iVar2 == 2) {
    local_6a8[0] = 0.0;
    (**(code **)(param_4 + 0x70))(param_5,local_6a8);
    fVar13 = local_6a8[0];
LAB_00cf577c:
    FUN_00d4db94(fVar13,&local_708);
  }
  else {
    if (iVar2 == 1) {
      fVar13 = (float)(**(code **)(param_4 + 0x70))(lVar3);
      goto LAB_00cf577c;
    }
    if (iVar2 == 0) {
      fVar13 = *(float *)(param_4 + 0x70);
      goto LAB_00cf577c;
    }
  }
  if (*(code **)(param_4 + 0x78) != (code *)0x0) {
    uVar12 = (**(code **)(param_4 + 0x78))(lVar3);
    *(undefined4 *)(param_4 + 0xa4) = uVar12;
  }
  FUN_00d4db40(&local_708,lVar3);
  if ((*(byte *)(param_4 + 0xa8) >> 1 & 1) == 0) {
    if (*(code **)(param_4 + 0x90) != (code *)0x0) {
      local_6a8[0] = 0.0;
      (**(code **)(param_4 + 0x90))(param_5,local_6a8);
      fVar14 = local_6a8[0];
      goto LAB_00cf5820;
    }
    fVar14 = *(float *)(param_4 + 0xa4);
    if (0.0 < *(float *)(param_4 + 0xa4)) goto LAB_00cf5820;
    uVar10 = FUN_00d4ddd8(&local_708);
    if ((uVar10 & 1) != 0) {
      fVar14 = (float)FUN_00d4dde8(&local_708);
      goto LAB_00cf5820;
    }
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x40);
    fVar13 = (*(float *)(lVar3 + 0x1e0) + 1.0) *
             (*(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0)
             );
    if (DAT_0314f6b0 <= fVar13) {
      fVar13 = DAT_0314f6b0;
    }
    fVar14 = (float)DAT_0314f5f0;
    if ((float)DAT_0314f5f0 <= fVar13) {
      fVar14 = fVar13;
    }
LAB_00cf5820:
    FUN_00d4db48(fVar14,&local_708,&local_740);
  }
  if ((*(byte *)(param_4 + 0xa8) >> 4 & 1) == 0) {
    puVar6 = (uint *)0x0;
  }
  else {
    uVar4 = FUN_00d5048c(param_5);
    uVar12 = FUN_00cf5968(param_4 + 0x80,param_5,uVar4);
    FUN_00d4eb08(local_730,&local_740,uVar12,0);
    puVar6 = local_730;
  }
  uVar9 = FUN_00d9e840(&local_708,local_6a8,200,puVar6);
  if (uVar9 != 0) {
    lVar3 = 0;
    uVar10 = (ulong)uVar9;
    pfVar11 = local_6a8;
    do {
      pfVar7 = pfVar11;
      if ((*(byte *)(param_4 + 0xa8) >> 2 & 1) == 0) {
LAB_00cf58b8:
        FUN_00d518f4(param_5,*(undefined8 *)pfVar7);
      }
      else {
        iVar2 = FUN_00d51a94(param_5);
        if (((iVar2 == 1) && (lVar5 = FUN_00d51778(param_5), lVar5 != 0)) &&
           (iVar2 = *(int *)(*(long *)pfVar11 + 0x260), lVar5 = FUN_00d51778(param_5),
           iVar2 != *(int *)(lVar5 + 0x260))) {
          pfVar7 = local_6a8 + lVar3 * 2;
          goto LAB_00cf58b8;
        }
      }
      lVar3 = lVar3 + 1;
      uVar10 = uVar10 - 1;
      pfVar11 = pfVar11 + 2;
    } while (uVar10 != 0);
  }
LAB_00cf5910:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00cf5968(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)param_1[2];
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00cf59c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00cfb5cc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00cf59e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00cf5a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00cf5a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    plVar3 = (long *)FUN_00cfb6c8(param_2);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar5 = *(undefined8 *)param_1;
      uVar1 = FUN_00e6a474(uVar5);
      uVar1 = FUN_0091ed5c(uVar5,uVar1,0x12345678);
      puVar4 = (uint *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
      uVar2 = (ulong)*puVar4;
    }
    break;
  default:
    FUN_00e6a2fc(0);
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00cf5a78(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_thunk_FUN_00cfc44c_0280fa28;
  FUN_00d4d9e8(param_1 + 2);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(byte *)((long)param_1 + 0x8c) = *(byte *)((long)param_1 + 0x8c) & 0xfe;
  return;
}




void FUN_00cf5ac8(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_2 + 0x70) = param_3;
  *(undefined8 *)(param_2 + 0x78) = param_4;
  *(undefined4 *)(param_2 + 0x88) = param_1;
  return;
}




void FUN_00cf5ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_3;
  *(undefined8 *)(param_1 + 0x80) = param_4;
  return;
}




long FUN_00cf5ae0(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 8);
  memcpy((void *)(param_1 + 0x24),(void *)(param_2 + 0x14),0x47);
  return param_1;
}




void FUN_00cf5b20(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe | param_2 & 1;
  return;
}




void FUN_00cf5b30(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 auStack_1e4 [4];
  undefined1 auStack_1e0 [120];
  long local_168 [32];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar7 = *(code **)(param_1 + 0x70);
  uVar4 = FUN_00d5048c(param_2);
  (*pcVar7)(param_2,uVar4,auStack_1e4,&local_1f0);
  pcVar7 = *(code **)(param_1 + 0x78);
  uVar4 = FUN_00d5048c(param_2);
  (*pcVar7)(param_2,uVar4,auStack_1e4,&local_200);
  local_210 = local_1e8;
  local_218 = local_1f0;
  local_20c = local_200;
  local_204 = local_1f8;
  uVar4 = FUN_00d5048c(param_2);
  if (*(code **)(param_1 + 0x80) == (code *)0x0) {
    uVar10 = (ulong)*(uint *)(param_1 + 0x88);
  }
  else {
    uVar10 = (**(code **)(param_1 + 0x80))(uVar4);
  }
  FUN_00d4e61c(auStack_1e0,param_1 + 0x10);
  FUN_00d4e838(uVar10,auStack_1e0,&local_218);
  FUN_00d4db40(auStack_1e0,uVar4);
  uVar2 = FUN_00d9e840(auStack_1e0,local_168,0x20,0);
  if (uVar2 != 0) {
    lVar8 = 0;
    uVar10 = (ulong)uVar2;
    plVar9 = local_168;
    do {
      plVar6 = plVar9;
      if ((*(byte *)(param_1 + 0x8c) & 1) == 0) {
LAB_00cf5c58:
        FUN_00d518f4(param_2,*plVar6);
      }
      else {
        iVar3 = FUN_00d51a94(param_2);
        if (((iVar3 == 1) && (lVar5 = FUN_00d51778(param_2), lVar5 != 0)) &&
           (iVar3 = *(int *)(*plVar9 + 0x260), lVar5 = FUN_00d51778(param_2),
           iVar3 != *(int *)(lVar5 + 0x260))) {
          plVar6 = local_168 + lVar8;
          goto LAB_00cf5c58;
        }
      }
      lVar8 = lVar8 + 1;
      uVar10 = uVar10 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar10 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf5ce8(undefined8 *param_1)

{
  long lVar1;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_84 [76];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfc438();
  *param_1 = &PTR_thunk_FUN_00cfc44c_0280fa88;
  FUN_00d4d9e8(param_1 + 2);
  param_1[0xe] = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf8 | 2;
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,1,1,1,0);
  *(undefined1 *)(param_1 + 4) = local_88;
  param_1[3] = local_90;
  memcpy((void *)((long)param_1 + 0x24),auStack_84,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00cf5da8(long param_1,undefined8 param_2,byte param_3,uint param_4)

{
  byte bVar1;
  
  *(undefined8 *)(param_1 + 0x78) = param_2;
  if ((param_4 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_00ceab48();
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_1 + 0x80) = bVar1 | (param_3 & 1) << 1 | *(byte *)(param_1 + 0x80) & 0xfc;
  return param_1;
}




long FUN_00cf5df8(long param_1,undefined8 param_2,long param_3,byte param_4,uint param_5)

{
  byte bVar1;
  
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 8);
  memcpy((void *)(param_1 + 0x24),(void *)(param_3 + 0x14),0x47);
  if ((param_5 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_00ceab48();
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_1 + 0x80) = bVar1 | (param_4 & 1) << 1 | *(byte *)(param_1 + 0x80) & 0xfc;
  return param_1;
}




void FUN_00cf5e74(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}




void FUN_00cf5e7c(long param_1)

{
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 4;
  return;
}




void FUN_00cf5e8c(long param_1)

{
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 8;
  return;
}




void FUN_00cf5e9c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_718 [16];
  undefined **local_708;
  undefined8 uStack_700;
  undefined1 local_6f8;
  undefined1 auStack_6f4 [76];
  long local_6a8 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) goto LAB_00cf6048;
  local_6f8 = *(undefined1 *)(param_1 + 0x20);
  uStack_700 = *(undefined8 *)(param_1 + 0x18);
  local_708 = &PTR_FUN_0281d898;
  memcpy(auStack_6f4,(void *)(param_1 + 0x24),0x47);
  lVar3 = FUN_00d5048c(param_2);
  FUN_00d55794(lVar3,auStack_718,0);
  FUN_00d4db40(&local_708,lVar3);
  if ((*(byte *)(param_1 + 0x80) >> 1 & 1) == 0) {
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      fVar7 = (float)(**(code **)(param_1 + 0x70))(lVar3);
      goto LAB_00cf5f9c;
    }
    uVar6 = FUN_00d4ddd8(&local_708);
    if ((uVar6 & 1) != 0) {
      fVar7 = (float)FUN_00d4dde8(&local_708);
      goto LAB_00cf5f9c;
    }
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar8 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
            (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0))
    ;
    if (DAT_0314f6b0 <= fVar8) {
      fVar8 = DAT_0314f6b0;
    }
    fVar7 = (float)DAT_0314f5f0;
    if ((float)DAT_0314f5f0 <= fVar8) {
      fVar7 = fVar8;
    }
LAB_00cf5f9c:
    FUN_00d4db48(fVar7,&local_708,auStack_718);
  }
  if ((*(byte *)(param_1 + 0x80) >> 3 & 1) != 0) {
    FUN_00d4dc24(&local_708,0);
  }
  uVar2 = FUN_00d9e840(&local_708,local_6a8,200,0);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)(local_6a8[uVar6] + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      if ((*(byte *)(param_1 + 0x80) >> 2 & 1) == 0) {
        uVar5 = FUN_00d6c0bc();
      }
      else {
        uVar5 = FUN_00d6c130(lVar4,*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(lVar3 + 0x260));
      }
      if ((uVar5 & 1) != 0) {
        FUN_00d518f4(param_2,local_6a8[uVar6]);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
LAB_00cf6048:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

