// functions/00b49 — 20 functions
#include "libGameKindred.h"




void FUN_00b493f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00b4bb88(param_1,uVar1);
  return;
}




void FUN_00b4941c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b49440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,0);
  return;
}




void FUN_00b49444(long *param_1)

{
  FUN_00b43450(param_1 + 0x7d4,param_1 + 0xc9d9);
                    /* WARNING: Could not recover jumptable at 0x00b4949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,1);
  return;
}




void FUN_00b494b0(void)

{
  return;
}




void FUN_00b494b8(long *param_1)

{
  FUN_00b32074(param_1 + 0xba56,6);
                    /* WARNING: Could not recover jumptable at 0x00b49508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,1,0);
  return;
}




void FUN_00b4950c(void)

{
  FUN_00b49a54();
  return;
}




void FUN_00b49538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e1dc8;
  param_1[0x587] = &PTR_FUN_027e1fd8;
  FUN_00b1fa78(param_1 + 0x67a);
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  if ((*(byte *)(param_1 + 0xc9eb) & 1) != 0) {
    operator_delete((void *)param_1[0xc9ed]);
  }
  if ((*(byte *)(param_1 + 0xc9e8) & 1) != 0) {
    operator_delete((void *)param_1[0xc9ea]);
  }
  if ((*(byte *)(param_1 + 0xc9e5) & 1) != 0) {
    operator_delete((void *)param_1[0xc9e7]);
  }
  FUN_00955098(param_1 + 0xc9e2,1);
  FUN_00b35268(param_1 + 0xba56);
  FUN_00b71a3c(param_1 + 0xb64e);
  FUN_00b45fb0(param_1 + 0x931e);
  FUN_00b38844(param_1 + 0x725c);
  FUN_00b3efe0(param_1 + 0x7d4);
  FUN_00b1f8e8(param_1 + 0x67a);
  FUN_00ed00e0(param_1 + 0x5d0);
  FUN_00f13d08(param_1 + 0x5b9);
  param_1[0x59b] = &PTR_FUN_028266f0;
  param_1[0x5b2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5b5);
  FUN_00f13d08(param_1 + 0x59b);
  FUN_00f01868(param_1 + 0x58a);
  FUN_00948d58(param_1 + 0x587);
  FUN_00a9f558(param_1);
  return;
}




void FUN_00b496d0(long param_1)

{
  FUN_00b49538(param_1 + -0x2c38);
  return;
}




void FUN_00b496dc(void *param_1)

{
  FUN_00b49538();
  operator_delete(param_1);
  return;
}




void FUN_00b49700(long param_1)

{
  FUN_00b49538((void *)(param_1 + -0x2c38));
  operator_delete((void *)(param_1 + -0x2c38));
  return;
}




void FUN_00b4972c(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_150;
  void *local_148;
  undefined **local_140;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0 [16];
  void *local_d0;
  undefined8 local_b0;
  undefined4 local_98;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00a9f604(param_1,param_2 & 1);
  FUN_00936760(FUN_00b49a08,FUN_00b49a0c);
  FUN_00b43418(param_1 + 0x7d4,(char)param_1[0xc9ef]);
  plVar1 = param_1 + 0x67a;
  uVar3 = FUN_00b20974(plVar1);
  (**(code **)(*(long *)param_1[(uVar3 & 0xffffffff) + 0x677] + 0x140))
            ((long *)param_1[(uVar3 & 0xffffffff) + 0x677],param_2 & 1);
  if ((param_2 & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x5d334) >> 2 & 1) != 0) {
      (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,1);
    }
  }
  else {
    FUN_00b49a10();
    FUN_00b49a54(param_1);
    if (param_1[0xc9e4] == 0) {
      uVar3 = FUN_00b20974(plVar1);
      if (param_1[(uVar3 & 0xffffffff) + 0x677] != 0) {
        uVar3 = FUN_00b20974(plVar1);
        param_1[0xc9e4] = param_1[(uVar3 & 0xffffffff) + 0x677];
      }
    }
    FUN_00b49d94(param_1);
    if ((((char)param_1[0xc9ef] != '\0') && (uVar3 = FUN_0093be8c(), (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_0093bea8("seasonGuildTrophy"), (uVar3 & 1) == 0)) {
      FUN_00b26098(&local_140);
      uVar4 = FUN_00e6ce7c("MAIN_SEASON_TROPHY_GUILD_TOOLTIP",0);
      thunk_FUN_00e7051c(&local_150,uVar4);
      thunk_FUN_00e7051c(&local_90,&local_150);
      FUN_008fcdb8(&local_80,&DAT_0320ffa8);
      local_68 = 1;
      local_64 = 0x41a00000;
      FUN_009c82b4(auStack_138,&local_90);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      local_110 = FUN_00b2097c(plVar1,2);
      local_98 = 1;
      local_b0 = 0x441600003f000000;
      FUN_008fa54c(&local_90,"seasonGuildTrophy");
      FUN_008fce60(local_e0,&local_90);
      if ((local_90 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_7f,local_80));
      }
      uVar4 = FUN_009b8d90();
      FUN_008fa54c(&local_90,"seasonTrophy");
      FUN_009badc0(uVar4,&local_90,&local_140);
      if ((local_90 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_7f,local_80));
      }
      if (local_148 != (void *)0x0) {
        operator_delete__(local_148);
        local_150 = 0;
        local_148 = (void *)0x0;
      }
      local_140 = &PTR_FUN_027de7f0;
      if ((local_e0[0] & 1) != 0) {
        operator_delete(local_d0);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      FUN_009c8464(auStack_138,1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b49a08(void)

{
  return;
}




void FUN_00b49a0c(void)

{
  return;
}




void FUN_00b49a10(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0093618c();
  if ((((char)piVar1[6] == '\0') && (*piVar1 != 0)) && (piVar1[1] == 0)) {
    FUN_009367f8(FUN_00b4bca4,FUN_00b4bd80);
    return;
  }
  return;
}




void FUN_00b49a54(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  local_70 = 0;
  FUN_0096bf08(&local_78);
  if ((int)local_78 != 0) {
    uVar9 = 0;
    do {
      lVar3 = local_70;
      lVar11 = local_70 + uVar9 * 0xe8;
      pbVar12 = (byte *)(lVar11 + 0xc0);
      bVar1 = *pbVar12;
      puVar8 = (ulong *)(lVar11 + 200);
      uVar5 = *puVar8;
      uVar6 = (ulong)(bVar1 >> 1);
      uVar15 = uVar6;
      if ((bVar1 & 1) != 0) {
        uVar15 = uVar5;
      }
      if (uVar15 == 0xb) {
        iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"renameGuild",0xb);
        if (iVar4 != 0) {
          bVar1 = *pbVar12;
          uVar5 = *puVar8;
          uVar6 = (ulong)(bVar1 >> 1);
          goto LAB_00b49b48;
        }
        puVar7 = (uint *)(lVar3 + uVar9 * 0xe8 + 8);
        if (*puVar7 != 0) {
          uVar15 = 0;
          do {
            lVar11 = *(long *)(lVar3 + uVar9 * 0xe8 + 0x10);
            puVar13 = (uint *)(lVar11 + uVar15 * 0xa0 + 8);
            if (*puVar13 != 0) {
              lVar11 = lVar11 + uVar15 * 0xa0;
              lVar14 = 0;
              uVar6 = 0;
              do {
                lVar10 = *(long *)(lVar11 + 0x10);
                pbVar12 = (byte *)(lVar10 + lVar14);
                uVar5 = (ulong)(*pbVar12 >> 1);
                if ((*pbVar12 & 1) != 0) {
                  uVar5 = *(ulong *)(pbVar12 + 8);
                }
                if ((uVar5 == 4) &&
                   (iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"gold",4), iVar4 == 0)) {
                  FUN_008fce60(param_1 + 0x64f40,lVar11 + 0x60);
                  *(undefined4 *)(param_1 + 0x64f70) = *(undefined4 *)(lVar10 + lVar14 + 0x18);
                }
                uVar6 = uVar6 + 1;
                lVar14 = lVar14 + 0x20;
              } while (uVar6 < *puVar13);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *puVar7);
        }
      }
      else {
LAB_00b49b48:
        if ((bVar1 & 1) != 0) {
          uVar6 = uVar5;
        }
        if (((uVar6 == 0xe) &&
            (iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"renameGuildTag",0xe), iVar4 == 0))
           && (puVar7 = (uint *)(lVar3 + uVar9 * 0xe8 + 8), *puVar7 != 0)) {
          uVar15 = 0;
          do {
            lVar11 = *(long *)(lVar3 + uVar9 * 0xe8 + 0x10);
            puVar13 = (uint *)(lVar11 + uVar15 * 0xa0 + 8);
            if (*puVar13 != 0) {
              lVar11 = lVar11 + uVar15 * 0xa0;
              lVar14 = 0;
              uVar6 = 0;
              do {
                lVar10 = *(long *)(lVar11 + 0x10);
                pbVar12 = (byte *)(lVar10 + lVar14);
                uVar5 = (ulong)(*pbVar12 >> 1);
                if ((*pbVar12 & 1) != 0) {
                  uVar5 = *(ulong *)(pbVar12 + 8);
                }
                if ((uVar5 == 4) &&
                   (iVar4 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"gold",4), iVar4 == 0)) {
                  FUN_008fce60(param_1 + 0x64f58,lVar11 + 0x60);
                  *(undefined4 *)(param_1 + 0x64f74) = *(undefined4 *)(lVar10 + lVar14 + 0x18);
                }
                uVar6 = uVar6 + 1;
                lVar14 = lVar14 + 0x20;
              } while (uVar6 < *puVar13);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *puVar7);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (local_78 & 0xffffffff));
  }
  FUN_0097905c(&local_78,1);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b49d94(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  
  lVar1 = param_3 + 0x2e80;
  if (*(float *)(param_3 + 0x2ec4) != 0.0) {
    *(undefined4 *)(param_3 + 0x2ec4) = 0;
    FUN_0091ada4(lVar1);
  }
  plVar2 = (long *)(param_3 + 0x64f20);
  if ((long *)*plVar2 == (long *)0x0) {
    uVar3 = 0;
    *(uint *)(param_3 + 0x2f04) = *(uint *)(param_3 + 0x2f04) & 0xffffffef;
  }
  else {
    (**(code **)(*(long *)*plVar2 + 0x150))();
    uVar4 = (**(code **)(*(long *)*plVar2 + 0x58))((long *)*plVar2,1,0,1,1);
    FUN_00ed02d8(uVar4,param_2 + 160.0,lVar1);
    uVar3 = (uint)(*plVar2 == param_3 + 0x3ea0 || *plVar2 == param_3 + 0x392e0);
    *(uint *)(param_3 + 0x2f04) =
         *(uint *)(param_3 + 0x2f04) & 0xffffffe0 | *(uint *)(param_3 + 0x2f04) & 0xf | uVar3 << 4;
  }
  FUN_00ed04d8(lVar1,0,uVar3);
  return;
}




void thunk_FUN_00b49e8c(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  FUN_00a9f644();
  uVar5 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar5 & 1,&fStack_64,&fStack_68,&fStack_6c);
  fVar8 = fStack_64 - fStack_6c;
  FUN_00f13f08(fVar8,fVar8 * 0.75,param_1 + 0x2cd8);
  if ((*(float *)(param_1 + 0x2d20) != 1.3) || (*(float *)(param_1 + 0x2d24) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2d20) = 0x3fa666663fa66666;
    FUN_0091ada4(param_1 + 0x2cd8);
  }
  lVar1 = param_1 + 0x33d0;
  fVar6 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fVar7 = fVar8 * 0.5 - fVar6 * 0.5;
  if ((*(float *)(param_1 + 0x3410) != fVar7) || (*(float *)(param_1 + 0x3414) != 30.0)) {
    *(float *)(param_1 + 0x3410) = fVar7;
    *(undefined4 *)(param_1 + 0x3414) = 0x41f00000;
    FUN_0091ada4(lVar1);
  }
  uStack_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x33d0) + 0x28))(lVar1,&uStack_60);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x3ea0);
  FUN_00b4048c(param_1 + 0x3ea0);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x392e0);
  FUN_00b38c5c(param_1 + 0x392e0);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x498f0);
  FUN_00b47250(param_1 + 0x498f0);
  fVar7 = *(float *)(param_1 + 0x3414);
  cVar3 = *(char *)(param_1 + 0x64f7a);
  lVar2 = param_1 + 0x5b270;
  fVar9 = fStack_68 - fVar7;
  FUN_00b20aa0(fStack_68,fVar7,lVar1);
  fVar9 = fVar9 - fVar7;
  if (cVar3 == '\0') {
    fVar9 = fVar9 + -160.0;
  }
  FUN_00f13f08(fVar8,fVar9,lVar2);
  FUN_00b71d70(lVar2);
  FUN_00f07940(fVar6 * 0.5,0,lVar2,4,lVar1,6);
  FUN_00b315d0(param_1 + 0x5d2b0);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x2dc8);
  if (*(long *)(lVar4 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b49e8c(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00a9f644();
  uVar5 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar5 & 1,&local_64,&local_68,&local_6c);
  fVar8 = local_64 - local_6c;
  FUN_00f13f08(fVar8,fVar8 * 0.75,param_1 + 0x2cd8);
  if ((*(float *)(param_1 + 0x2d20) != 1.3) || (*(float *)(param_1 + 0x2d24) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2d20) = 0x3fa666663fa66666;
    FUN_0091ada4(param_1 + 0x2cd8);
  }
  lVar1 = param_1 + 0x33d0;
  fVar6 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fVar7 = fVar8 * 0.5 - fVar6 * 0.5;
  if ((*(float *)(param_1 + 0x3410) != fVar7) || (*(float *)(param_1 + 0x3414) != 30.0)) {
    *(float *)(param_1 + 0x3410) = fVar7;
    *(undefined4 *)(param_1 + 0x3414) = 0x41f00000;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x33d0) + 0x28))(lVar1,&local_60);
  FUN_00f13f08(fVar8,local_68,param_1 + 0x3ea0);
  FUN_00b4048c(param_1 + 0x3ea0);
  FUN_00f13f08(fVar8,local_68,param_1 + 0x392e0);
  FUN_00b38c5c(param_1 + 0x392e0);
  FUN_00f13f08(fVar8,local_68,param_1 + 0x498f0);
  FUN_00b47250(param_1 + 0x498f0);
  fVar7 = *(float *)(param_1 + 0x3414);
  cVar3 = *(char *)(param_1 + 0x64f7a);
  lVar2 = param_1 + 0x5b270;
  fVar9 = local_68 - fVar7;
  FUN_00b20aa0(local_68,fVar7,lVar1);
  fVar9 = fVar9 - fVar7;
  if (cVar3 == '\0') {
    fVar9 = fVar9 + -160.0;
  }
  FUN_00f13f08(fVar8,fVar9,lVar2);
  FUN_00b71d70(lVar2);
  FUN_00f07940(fVar6 * 0.5,0,lVar2,4,lVar1,6);
  FUN_00b315d0(param_1 + 0x5d2b0);
  FUN_00f13f08(fVar8,local_68,param_1 + 0x2dc8);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b49e8c(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  FUN_00a9f644();
  uVar5 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar5 & 1,&fStack_64,&fStack_68,&fStack_6c);
  fVar8 = fStack_64 - fStack_6c;
  FUN_00f13f08(fVar8,fVar8 * 0.75,param_1 + 0x2cd8);
  if ((*(float *)(param_1 + 0x2d20) != 1.3) || (*(float *)(param_1 + 0x2d24) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2d20) = 0x3fa666663fa66666;
    FUN_0091ada4(param_1 + 0x2cd8);
  }
  lVar1 = param_1 + 0x33d0;
  fVar6 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fVar7 = fVar8 * 0.5 - fVar6 * 0.5;
  if ((*(float *)(param_1 + 0x3410) != fVar7) || (*(float *)(param_1 + 0x3414) != 30.0)) {
    *(float *)(param_1 + 0x3410) = fVar7;
    *(undefined4 *)(param_1 + 0x3414) = 0x41f00000;
    FUN_0091ada4(lVar1);
  }
  uStack_60 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x33d0) + 0x28))(lVar1,&uStack_60);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x3ea0);
  FUN_00b4048c(param_1 + 0x3ea0);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x392e0);
  FUN_00b38c5c(param_1 + 0x392e0);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x498f0);
  FUN_00b47250(param_1 + 0x498f0);
  fVar7 = *(float *)(param_1 + 0x3414);
  cVar3 = *(char *)(param_1 + 0x64f7a);
  lVar2 = param_1 + 0x5b270;
  fVar9 = fStack_68 - fVar7;
  FUN_00b20aa0(fStack_68,fVar7,lVar1);
  fVar9 = fVar9 - fVar7;
  if (cVar3 == '\0') {
    fVar9 = fVar9 + -160.0;
  }
  FUN_00f13f08(fVar8,fVar9,lVar2);
  FUN_00b71d70(lVar2);
  FUN_00f07940(fVar6 * 0.5,0,lVar2,4,lVar1,6);
  FUN_00b315d0(param_1 + 0x5d2b0);
  FUN_00f13f08(fVar8,fStack_68,param_1 + 0x2dc8);
  if (*(long *)(lVar4 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b49a10(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0093618c();
  if ((((char)piVar1[6] == '\0') && (*piVar1 != 0)) && (piVar1[1] == 0)) {
    FUN_009367f8(FUN_00b4bca4,FUN_00b4bd80);
    return;
  }
  return;
}

