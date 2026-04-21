// functions/00d41 — 62 functions
#include "libGameKindred.h"




void FUN_00d41024(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281af88;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x40000002d;
  return;
}




void FUN_00d41068(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  return;
}




void FUN_00d41074(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d66d28(param_2);
    fVar5 = (float)(**(code **)(param_1 + 0x10))();
    fVar6 = (float)(**(code **)(param_1 + 0x18))(lVar3);
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar7 = (*(float *)(lVar4 + 0x240) + 1.0) *
            (*(float *)(lVar4 + 0xd8) +
            *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0));
    if (DAT_031a9140 <= fVar7) {
      fVar7 = DAT_031a9140;
    }
    fVar8 = DAT_031a9080;
    if (DAT_031a9080 <= fVar7) {
      fVar8 = fVar7;
    }
    fVar5 = fVar5 + (fVar6 - fVar5) * ((fVar8 + -1.0) / 11.0);
    FUN_00d041e4(fVar5 - *(float *)(param_1 + 0x20),auStack_70,*(undefined4 *)(lVar3 + 0x260),
                 *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),0,0xffffffff);
    FUN_00ce20fc(auStack_70);
    *(float *)(param_1 + 0x20) = fVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4119c(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[2] = 0x10;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_0281afc8;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}




void FUN_00d411dc(undefined4 param_1,long param_2,undefined4 param_3,byte param_4)

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  *(byte *)(param_2 + 0x20) = param_4 & 1;
  return;
}




void FUN_00d411f0(long param_1,undefined4 param_2,undefined8 param_3,byte param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(byte *)(param_1 + 0x20) = param_4 & 1;
  return;
}




void FUN_00d41204(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_6c;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d66d28(param_2);
    local_6c = *(undefined4 *)(param_1 + 0x14);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,&local_6c);
    }
    FUN_00d043c0(local_6c,auStack_68,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(param_1 + 0x10),
                 *(undefined1 *)(param_1 + 0x20));
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d412ac(undefined8 param_1,undefined8 param_2)

{
  FUN_00d66d28(param_2);
  FUN_00d5af28();
  FUN_00d6a32c(param_2);
  return;
}




void FUN_00d412d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d66d28(param_2);
  FUN_00d5af28();
  FUN_00d6a32c(param_2);
  return;
}




void FUN_00d41304(undefined8 param_1,undefined8 param_2)

{
  FUN_00d66d28(param_2);
  FUN_00d5b038();
  FUN_00d6a340(param_2);
  return;
}




void FUN_00d41330(undefined8 param_1,undefined8 *param_2)

{
  FUN_00d66d28(*param_2);
  FUN_00d5af28();
  FUN_00d6a32c(*param_2);
  return;
}




void FUN_00d4135c(undefined8 param_1,undefined8 *param_2)

{
  FUN_00d66d28(*param_2);
  FUN_00d5b038();
  FUN_00d6a340(*param_2);
  return;
}




void FUN_00d41388(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b008;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  return;
}




void FUN_00d413c0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_00d413c8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d66d28(param_2);
    lVar7 = *(long *)(lVar6 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    iVar3 = FUN_00d5359c(lVar7);
    if (iVar3 != 0) {
      uVar8 = 0;
      do {
        uVar5 = FUN_00d54528(lVar7,uVar8);
        if ((uVar5 & 1) != 0) {
          uVar1 = *(undefined4 *)(lVar6 + 0x260);
          fVar9 = (float)FUN_00d53a18(lVar7,uVar8);
          FUN_00d04e08(fVar9 * *(float *)(param_1 + 0x10),auStack_78,uVar1,0xd60c580b,1);
          FUN_00ce20fc(auStack_78);
          break;
        }
        uVar8 = uVar8 + 1;
        uVar4 = FUN_00d5359c(lVar7);
      } while (uVar8 < uVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d414d4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312ec00))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7d5e4();
  return;
}




void FUN_00d41514(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312ec00))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7d5f4();
  return;
}




void FUN_00d41554(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312ec00))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7d614();
  return;
}




void FUN_00d41594(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312ec00))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7d624();
  return;
}




void FUN_00d415d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d66d28(param_2);
    FUN_00d043c0(0xc61c4000,auStack_58,*(undefined4 *)(lVar3 + 0x260),0,1);
    FUN_00ce20fc(auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4164c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00ceab48();
  lVar2 = FUN_00d66d28(param_2);
  if ((uVar1 & 1) == 0) {
    plVar3 = (long *)FUN_00d5bae0();
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d416a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x150))(plVar3,1);
      return;
    }
  }
  else {
    *(ushort *)(lVar2 + 0x301) = *(ushort *)(lVar2 + 0x301) | 0x8000;
  }
  return;
}




void FUN_00d416b0(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b048;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00d416e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00d416ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(param_2);
  FUN_00d59fb0(uVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00d41714(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(param_2);
  FUN_00d59fb0(uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_00d4173c(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b098;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  return;
}




void FUN_00d41780(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}




void FUN_00d41788(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00d41794(undefined8 param_1,undefined8 param_2)

{
  FUN_00d4179c(param_1,param_2,1);
  return;
}




void FUN_00d4179c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != -1) {
    iVar1 = FUN_00cedce4();
    if (iVar2 != iVar1) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (iVar2 == -1) {
    iVar2 = FUN_00cedce4();
  }
  uVar4 = FUN_00d9e390(iVar2);
  uVar5 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x10));
  if ((param_3 & 1) == 0) {
    FUN_00d5e5e8(uVar4,uVar5);
    return;
  }
  FUN_00d5e410(uVar4,uVar5,*(undefined1 *)(param_1 + 0x18));
  return;
}




void FUN_00d41850(undefined8 param_1,undefined8 param_2)

{
  FUN_00d4179c(param_1,param_2,0);
  return;
}




void FUN_00d41858(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b0e8;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d4188c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = FUN_00d66d28(param_2);
  FUN_00d5dddc(uVar2,*(undefined1 *)(param_1 + 0x10));
  return;
}




void FUN_00d418cc(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}




void FUN_00d418d8(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}




void FUN_00d418e0(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b128;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}




void FUN_00d41918(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00d66d28(param_2);
    FUN_00d5dd00(uVar2,*(undefined1 *)(param_1 + 0x10));
    return;
  }
  return;
}




void FUN_00d41958(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = param_2 & 1;
  return;
}




void FUN_00d41964(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b168;
  *(undefined4 *)(param_1 + 2) = 0xee;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  param_1[3] = "CenterBody";
  return;
}




void FUN_00d419b4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d419bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d419c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint local_b0 [2];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) == 0) goto LAB_00d41af0;
  uVar2 = FUN_00ceb350();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  iVar3 = FUN_00d6a0dc(param_2);
  if (iVar3 == 2) {
    FUN_00d66d28(param_2);
    iVar3 = FUN_00d5cf60();
LAB_00d41a30:
    if (iVar3 == -1) goto LAB_00d41a44;
    lVar7 = FUN_00d9e390();
  }
  else {
    if (iVar3 == 1) {
      iVar3 = FUN_00d67b84(param_2);
      goto LAB_00d41a30;
    }
LAB_00d41a44:
    lVar7 = FUN_00d44c78(param_2);
  }
  if (lVar7 != 0) {
    uVar2 = FUN_00d5ba88();
    FUN_00d426b0(param_2);
    uVar4 = FUN_00d5ba88();
    FUN_00d66d28(param_2);
    uVar5 = FUN_00d5ba88();
    pbVar8 = *(byte **)(param_1 + 0x18);
    if (pbVar8 == (byte *)0x0) {
      local_b0[0] = 0;
    }
    else {
      uVar9 = (uint)*pbVar8;
      local_b0[0] = 0x811c9dc5;
      if (*pbVar8 != 0) {
        do {
          pbVar8 = pbVar8 + 1;
          local_b0[0] = (local_b0[0] ^ uVar9) * 0x1000193;
          uVar9 = (uint)*pbVar8;
        } while (*pbVar8 != 0);
      }
    }
    FUN_00d02a78(0,auStack_a8,uVar2,uVar4,uVar5,*(undefined4 *)(param_1 + 0x10),local_b0,
                 *(undefined4 *)(param_1 + 0x14));
    FUN_00ce20fc(auStack_a8);
  }
LAB_00d41af0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d41b1c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d66d28(param_2);
    FUN_00d55794(uVar3,auStack_48,0);
    lVar4 = FUN_00d84770(*(undefined4 *)(param_1 + 0x14));
    if (lVar4 != 0) {
      FUN_00d80be4(lVar4,auStack_48);
      FUN_00931a8c(lVar4,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d41bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b1b8;
  uVar1 = _DAT_03218ef8;
  param_1[5] = 0xbf800000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00d41c0c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_00d41c14(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 0x18) = *param_3;
  return;
}




void FUN_00d41c30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d41c38(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




void FUN_00d41c40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float local_b0 [2];
  float local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_00ceb350();
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar5 = FUN_00d66d28(param_2);
      FUN_00d557c4(uVar5,local_b0,&DAT_03218f68);
      fVar7 = atan2f(local_a8,local_b0[0]);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = FUN_00d67b84(param_2);
      lVar6 = FUN_00d66d28(param_2);
      FUN_00d00d68(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),fVar7,auStack_a0,
                   uVar2,uVar3,*(undefined4 *)(lVar6 + 0x260),*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      uVar3 = FUN_00d67b84(param_2);
      FUN_00d00dc4(auStack_a0,uVar2,uVar3,param_1 + 0x10,param_1 + 0x18);
    }
    FUN_00ce20fc(auStack_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d41d4c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d01174(auStack_48,*(undefined4 *)(param_1 + 0x24));
    FUN_00ce20fc(auStack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d41dac(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b208;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d41de0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = param_2 & 1;
  return;
}




void FUN_00d41dec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar2 = FUN_00d67c60(param_2);
    uVar1 = FUN_00e6a474("__REAPPLYING_VAR1_FLOAT__");
    uVar1 = FUN_0091ed5c("__REAPPLYING_VAR1_FLOAT__",uVar1,0x12345678);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x100) + 0x10))(lVar2 + 0x100,uVar1);
    uVar4 = *puVar3;
    lVar2 = FUN_00d67c60(param_2);
    uVar1 = FUN_00e6a474("__REAPPLYING_VAR1_INT__");
    uVar1 = FUN_0091ed5c("__REAPPLYING_VAR1_INT__",uVar1,0x12345678);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x100) + 0x10))(lVar2 + 0x100,uVar1);
    FUN_00d69fc0(param_2,*puVar3);
    FUN_00d6a140(uVar4,param_2);
    return;
  }
  return;
}




void FUN_00d41edc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281b248;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00d41ef4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d41efc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_00d66d28(*param_2);
  uVar1 = thunk_FUN_00da2eb4();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar2 = FUN_00d66d28(*param_2);
  thunk_FUN_00da2ee8(uVar2,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_00d41f3c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  thunk_FUN_00da2ee8(uVar1,*(undefined4 *)(param_1 + 0x14));
  return;
}




void FUN_00d41f68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281b288;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_00d41f80(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d41f88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  thunk_FUN_00da2ee8(uVar1,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_00d41fb4(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}




void FUN_00d41fdc(void *param_1)

{
  FUN_00d468dc();
  operator_delete(param_1);
  return;
}

