// functions/00ad4 — 17 functions
#include "libGameKindred.h"




void thunk_FUN_00ad4d74(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MOTTO");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ad4de4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MESSAGE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ad4d04(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ad4e54(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_GUILD_JOIN");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ad4ec4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_GUILD_DECLINE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad40e4(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  void *__s1;
  char *pcVar11;
  ulong uVar12;
  undefined8 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  void *local_1b0;
  ulong local_1a8;
  void *local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined4 local_180;
  undefined8 local_178;
  void *local_170;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00e70570(&local_178,param_2 + 0x70);
  FUN_00f0d75c(param_1 + 0x748,&local_178);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (void *)0x0;
  }
  FUN_00e70570(&local_178,param_2 + 0xd0);
  FUN_00f0d75c(param_1 + 4000,&local_178);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (void *)0x0;
  }
  bVar2 = *(byte *)(param_2 + 0xa0);
  if ((bVar2 & 1) == 0) {
    uVar12 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0xa8);
  }
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_TYPE",0);
  if (uVar12 == 0) {
    uVar7 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_UNSET",0);
  }
  else {
    uVar7 = FUN_00cb50d8((byte *)(param_2 + 0xa0),0);
  }
  FUN_00f0d75c(param_1 + 0x5db0,uVar6);
  FUN_00f0d75c(param_1 + 0x5ee0,uVar7);
  FUN_00ad26ec(param_1 + 0x5c30);
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_REQUIRED_SKILL_TIER",0);
  FUN_00ad29ac(param_1 + 0x6010,uVar6,*(undefined4 *)(param_2 + 0x9c));
  FUN_00e6a8a8(auStack_78,"%d/%d",*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_MEMBERS",0);
  FUN_00e705c8(&local_178,auStack_78);
  FUN_00f0d75c(param_1 + 0x6940,uVar6);
  FUN_00f0d75c(param_1 + 0x6a70,&local_178);
  FUN_00ad26ec(param_1 + 0x67c0);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (void *)0x0;
  }
  bVar2 = *(byte *)(param_2 + 0xb8);
  if ((bVar2 & 1) == 0) {
    uVar12 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0xc0);
  }
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_LANGUAGE",0);
  if (uVar12 == 0) {
    uVar7 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_UNSET",0);
    FUN_00f0d75c(param_1 + 0x6d20,uVar6);
    FUN_00f0d75c(param_1 + 0x6e50,uVar7);
    FUN_00ad26ec(param_1 + 0x6ba0);
  }
  else {
    uVar7 = FUN_00cb4bd8((byte *)(param_2 + 0xb8));
    FUN_00cb49ec(&local_178,uVar7,0);
    FUN_00f0d75c(param_1 + 0x6d20,uVar6);
    FUN_00f0d75c(param_1 + 0x6e50,&local_178);
    FUN_00ad26ec(param_1 + 0x6ba0);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
  }
  thunk_FUN_00e7051c(&local_1b8,&DAT_03210450);
  if (*(int *)(param_2 + 0x1d4) == 1) {
    pcVar11 = "GUILD_OVERVIEW_LABEL_MEMBER_TYPE_INVITE_ONLY";
LAB_00ad4384:
    uVar6 = FUN_00e6ce7c(pcVar11,0);
    FUN_00910394(&local_1b8,uVar6);
  }
  else if (*(int *)(param_2 + 0x1d4) == 0) {
    pcVar11 = "GUILD_OVERVIEW_LABEL_MEMBER_TYPE_OPEN";
    goto LAB_00ad4384;
  }
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_MEMBERSHIP",0);
  FUN_00f0d75c(param_1 + 0x71c8,uVar6);
  FUN_00f0d75c(param_1 + 0x72f8,&local_1b8);
  FUN_00ad26ec(param_1 + 0x7048);
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_AVERAGE_SKILL_TIER",0);
  FUN_00ad29ac(param_1 + 0x7428,uVar6,*(undefined4 *)(param_2 + 0x1bc));
  FUN_00e6a8a8(auStack_78,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0x1c4));
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_ACTIVITY",0);
  FUN_00e705c8(&local_178,auStack_78);
  FUN_00f0d75c(param_1 + 0x7d58,uVar6);
  FUN_00f0d75c(param_1 + 0x7e88,&local_178);
  FUN_00ad26ec(param_1 + 0x7bd8);
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (void *)0x0;
  }
  FUN_00e6c1c0(*(undefined8 *)(param_2 + 0x1c8),&local_178,0x100,&DAT_01baf1d3);
  uVar6 = FUN_00e6ce7c("GUILD_OVERVIEW_LABEL_ESTABLISHED_DATE",0);
  FUN_00e705c8(&local_1a8,&local_178);
  FUN_00f0d75c(param_1 + 0x8138,uVar6);
  FUN_00f0d75c(param_1 + 0x8268,&local_1a8);
  FUN_00ad26ec(param_1 + 0x7fb8);
  if (local_1a0 != (void *)0x0) {
    operator_delete__(local_1a0);
    local_1a8 = 0;
    local_1a0 = (void *)0x0;
  }
  lVar8 = FUN_009580b8();
  if ((int)*(uint *)(lVar8 + 0x5634) < 0) {
LAB_00ad45ac:
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(int *)(*(long *)(lVar8 + 0x5268) + (ulong)*(uint *)(lVar8 + 0x5634) * 0x108 + 0x50) == 4)
    {
      lVar8 = FUN_009580b8();
      bVar2 = *(byte *)(param_2 + 0x180);
      bVar3 = *(byte *)(lVar8 + 0x5478);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 0x188);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar8 + 0x5480);
      }
      uVar9 = 0;
      if (__n == sVar1) {
        __s1 = *(void **)(param_2 + 400);
        pcVar11 = *(char **)(lVar8 + 0x5488);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(param_2 + 0x181);
        }
        if ((bVar3 & 1) == 0) {
          pcVar11 = (char *)(lVar8 + 0x5479);
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
LAB_00ad4890:
            uVar9 = 1;
          }
          else {
            pcVar10 = (char *)(param_2 + 0x181);
            lVar8 = -(ulong)(bVar2 >> 1);
            do {
              if (*pcVar10 != *pcVar11) goto LAB_00ad45ac;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
              lVar8 = lVar8 + 1;
              uVar9 = 1;
            } while (lVar8 != 0);
          }
        }
        else {
          if (__n == 0) goto LAB_00ad4890;
          iVar5 = memcmp(__s1,pcVar11,__n);
          uVar9 = (uint)(iVar5 == 0);
        }
      }
    }
  }
  *(uint *)(param_1 + 0x9acc) =
       *(uint *)(param_1 + 0x9acc) & 0xfffffff8 | *(uint *)(param_1 + 0x9acc) & 3 | uVar9 << 2;
  *(uint *)(param_1 + 0x1154) =
       *(uint *)(param_1 + 0x1154) & 0xfffffff8 | *(uint *)(param_1 + 0x1154) & 3 | uVar9 << 2;
  *(uint *)(param_1 + 0x8fc) =
       *(uint *)(param_1 + 0x8fc) & 0xfffffff8 | *(uint *)(param_1 + 0x8fc) & 3 | uVar9 << 2;
  if ((*(byte *)(param_2 + 0xe8) & 1) == 0) {
    if (*(byte *)(param_2 + 0xe8) >> 1 == 0) goto LAB_00ad4694;
LAB_00ad45f8:
    if ((*(byte *)(param_2 + 0x130) & 1) == 0) {
      if (*(byte *)(param_2 + 0x130) >> 1 == 0) goto LAB_00ad4694;
    }
    else if (*(long *)(param_2 + 0x138) == 0) goto LAB_00ad4694;
    FUN_00e70570(&local_1c8);
    FUN_008fcdb8(&local_1a8,param_2 + 0x130);
    thunk_FUN_00e7051c(&local_190,&local_1c8);
    local_180 = 0x101;
    FUN_00aea30c(param_1 + 0x16c8,&local_1a8);
    if (local_188 != (void *)0x0) {
      operator_delete__(local_188);
      local_190 = 0;
      local_188 = (void *)0x0;
    }
    if ((local_1a8 & 1) != 0) {
      operator_delete(local_198);
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
      local_1c8 = 0;
      local_1c0 = (void *)0x0;
    }
    uVar9 = *(uint *)(param_1 + 0x174c) | 4;
  }
  else {
    if (*(long *)(param_2 + 0xf0) != 0) goto LAB_00ad45f8;
LAB_00ad4694:
    uVar9 = *(uint *)(param_1 + 0x174c) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x174c) = uVar9;
  if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
    if (*(byte *)(param_2 + 0x100) >> 1 == 0) goto LAB_00ad475c;
LAB_00ad46bc:
    if ((*(byte *)(param_2 + 0x148) & 1) == 0) {
      if (*(byte *)(param_2 + 0x148) >> 1 == 0) goto LAB_00ad475c;
    }
    else if (*(long *)(param_2 + 0x150) == 0) goto LAB_00ad475c;
    FUN_00e70570(&local_1c8,param_2 + 0x100);
    FUN_008fcdb8(&local_1a8,param_2 + 0x148);
    thunk_FUN_00e7051c(&local_190,&local_1c8);
    local_180 = 0x101;
    FUN_00aea30c(param_1 + 0x2da8,&local_1a8);
    if (local_188 != (void *)0x0) {
      operator_delete__(local_188);
      local_190 = 0;
      local_188 = (void *)0x0;
    }
    if ((local_1a8 & 1) != 0) {
      operator_delete(local_198);
    }
    if (local_1c0 != (void *)0x0) {
      operator_delete__(local_1c0);
      local_1c8 = 0;
      local_1c0 = (void *)0x0;
    }
    uVar9 = *(uint *)(param_1 + 0x2e2c) | 4;
  }
  else {
    if (*(long *)(param_2 + 0x108) != 0) goto LAB_00ad46bc;
LAB_00ad475c:
    uVar9 = *(uint *)(param_1 + 0x2e2c) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x2e2c) = uVar9;
  if ((*(byte *)(param_2 + 0x118) & 1) == 0) {
    if (*(byte *)(param_2 + 0x118) >> 1 != 0) {
LAB_00ad4784:
      if ((*(byte *)(param_2 + 0x160) & 1) == 0) {
        if (*(byte *)(param_2 + 0x160) >> 1 != 0) {
LAB_00ad4794:
          FUN_00e70570(&local_1c8,param_2 + 0x118);
          FUN_008fcdb8(&local_1a8,param_2 + 0x160);
          thunk_FUN_00e7051c(&local_190,&local_1c8);
          local_180 = 0x101;
          FUN_00aea30c(param_1 + 0x4488,&local_1a8);
          if (local_188 != (void *)0x0) {
            operator_delete__(local_188);
            local_190 = 0;
            local_188 = (void *)0x0;
          }
          if ((local_1a8 & 1) != 0) {
            operator_delete(local_198);
          }
          if (local_1c0 != (void *)0x0) {
            operator_delete__(local_1c0);
            local_1c8 = 0;
            local_1c0 = (void *)0x0;
          }
          uVar9 = *(uint *)(param_1 + 0x450c) | 4;
          goto LAB_00ad4834;
        }
      }
      else if (*(long *)(param_2 + 0x168) != 0) goto LAB_00ad4794;
    }
  }
  else if (*(long *)(param_2 + 0x120) != 0) goto LAB_00ad4784;
  uVar9 = *(uint *)(param_1 + 0x450c) & 0xfffffffb;
LAB_00ad4834:
  *(uint *)(param_1 + 0x450c) = uVar9;
  FUN_00ad3a94(param_1);
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
    local_1b8 = 0;
    local_1b0 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ad489c(long param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ushort uVar9;
  long lVar10;
  uint uVar11;
  ushort *puVar12;
  code *pcVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float local_94;
  undefined1 auStack_90 [4];
  float local_8c;
  undefined1 auStack_88 [32];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar1 = (byte *)(param_1 + 0xdc50);
  *pbVar1 = param_2 & 1;
  if ((param_2 & 1) == 0) {
    fVar14 = 0.25;
    uVar6 = FUN_00efee28(0,0x3e800000,FUN_0091aa80);
    lVar10 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar12 = (ushort *)0x0;
    }
    else {
      puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar12;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efc9c0(puVar12);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    FUN_00efca10(puVar12,0);
    lVar10 = param_1 + 0x410;
    FUN_00f01980(lVar10);
    FUN_00f022a0(lVar10,uVar6);
    FUN_00f022a0(lVar10,puVar12);
    FUN_00f01c20(param_1 + 0x8398);
    fVar14 = fVar14 + 60.0;
    uVar15 = FUN_00f0e700(param_1 + 0x230);
    pcVar13 = FUN_0091aa80;
  }
  else {
    uVar6 = FUN_00efed6c(0x3e000000);
    lVar10 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar12 = (ushort *)0x0;
    }
    else {
      puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar12;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
      FUN_00efc9c0(puVar12);
      *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
    }
    FUN_00efca10(puVar12,1);
    fVar16 = 0.25;
    uVar7 = FUN_00efee28(0x3f800000,0x3e800000,FUN_009a71a4);
    lVar10 = param_1 + 0x410;
    FUN_00f01980(lVar10);
    FUN_00f022a0(lVar10,uVar6);
    FUN_00f022a0(lVar10,puVar12);
    FUN_00f022a0(lVar10,uVar7);
    FUN_00f01fcc(lVar10,1,0,1,1);
    fVar17 = fVar16 + *(float *)(param_1 + 0x83dc);
    FUN_00f01c20(param_1 + 0x8398);
    fVar17 = fVar17 + fVar16;
    fVar14 = 0.0;
    if ((*(byte *)(param_1 + 0xb08c) >> 2 & 1) != 0) {
      FUN_00f01c20(param_1 + 0xb0d0);
      fVar14 = fVar16 * 0.5;
    }
    fVar14 = fVar17 + fVar14 + 30.0;
    uVar15 = FUN_00f0e700(param_1 + 0x230);
    pcVar13 = FUN_009a71a4;
  }
  lVar10 = param_1 + 0x230;
  uVar6 = FUN_00eff430(uVar15,fVar14,0x3e800000,lVar10,pcVar13);
  FUN_00f01980(lVar10);
  FUN_00f022a0(lVar10,uVar6);
  uVar6 = FUN_00efef08(*(undefined4 *)(param_1 + 0x360),fVar14,0x3e800000,pcVar13);
  FUN_00f01980(param_1 + 800);
  FUN_00f022a0(param_1 + 800,uVar6);
  bVar3 = *pbVar1;
  uVar2 = *(uint *)(param_1 + 0x85bc);
  uVar11 = 0xff;
  uVar5 = uVar11;
  if (bVar3 != 0) {
    uVar5 = 0x33;
  }
  if ((uVar2 >> 7 & 0xff) != uVar5) {
    *(uint *)(param_1 + 0x85bc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar5 << 7;
    FUN_0091ada4(param_1 + 0x8538);
    bVar3 = *pbVar1;
  }
  uVar5 = *(uint *)(param_1 + 0x99dc);
  if (bVar3 != 0) {
    uVar11 = 0x33;
  }
  if ((uVar5 >> 7 & 0xff) != uVar11) {
    *(uint *)(param_1 + 0x99dc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | uVar11 << 7;
    FUN_0091ada4(param_1 + 0x9958);
    bVar3 = *pbVar1;
  }
  pcVar8 = "arrow_right";
  if (bVar3 != 0) {
    pcVar8 = "arrow_down";
  }
  FUN_00f0e578(param_1 + 0x9958,pcVar8);
  uVar5 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar5 & 1,&local_8c,auStack_90,&local_94);
  FUN_00f13f08(local_8c - local_94,fVar14,param_1);
  if ((param_2 & 1) == 0) {
    pcVar8 = "UI::EVENT_COLLAPSE_GUILD_SETTINGS";
  }
  else {
    pcVar8 = "UI::EVENT_EXPAND_GUILD_SETTINGS";
  }
  uVar15 = FUN_00f048a4(pcVar8);
  FUN_00f048e0(auStack_88,uVar15,(int)fVar14);
  FUN_00f04760(param_1,auStack_88,1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad4cf0(long param_1)

{
  FUN_00ad489c(param_1,*(char *)(param_1 + 0xdc50) == '\0');
  return;
}




void FUN_00ad4d04(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad4d74(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MOTTO");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad4de4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MESSAGE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad4e54(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_GUILD_JOIN");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad4ec4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_GUILD_DECLINE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad4f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d7430;
  FUN_00f0d3a4(param_1 + 0x56);
  FUN_00f0d3a4(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad4f80(void *param_1)

{
  FUN_00ad4f34();
  operator_delete(param_1);
  return;
}




void FUN_00ad4fa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d7578;
  FUN_00f0d3a4(param_1 + 0xd0);
  FUN_00ab3254(param_1 + 0x56);
  FUN_00f0d3a4(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad4ff8(void *param_1)

{
  FUN_00ad4fa4();
  operator_delete(param_1);
  return;
}

