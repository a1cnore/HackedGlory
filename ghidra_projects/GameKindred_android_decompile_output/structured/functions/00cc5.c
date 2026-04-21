// functions/00cc5 — 27 functions
#include "libGameKindred.h"




void thunk_FUN_00cc5a60(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x7c050);
  FUN_00cc5aa4();
  FUN_00aa18e0(pvVar1,"GUILD_PANEL_POPUP",1,0,1);
  return;
}




void thunk_FUN_00cc5e38(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2e008);
  FUN_00cc5e7c();
  FUN_00aa18e0(pvVar1,"TEAM_PANEL_POPUP",1,0,1);
  return;
}




void thunk_FUN_00cc53e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a87e60();
  FUN_00a87aa0(uVar2,param_1 + 0x1d18);
  *(uint *)(param_1 + 0x34fc) = *(uint *)(param_1 + 0x34fc) & 0xfffffffb;
  FUN_00aa1954("INVENTORY_CHEST_POPUP");
  if (*(int *)(param_1 + 0x1cf8) == 0) {
    FUN_008fa54c(abStack_50,&DAT_01e277f2);
    FUN_00a8886c(param_1 + 0x1cf8,abStack_50);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  else {
    FUN_00a8886c(param_1 + 0x1cf8,*(undefined8 *)(param_1 + 0x1d00));
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cc54c0(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_68 [16];
  void *pvStack_58;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  FUN_008fcdb8(abStack_50,param_1 + 0x1d90);
  uVar3 = FUN_009b8d90();
  pvVar1 = (void *)((ulong)abStack_50 | 1);
  if ((abStack_50[0] & 1) != 0) {
    pvVar1 = pvStack_40;
  }
  FUN_008fa54c(abStack_68,pvVar1);
  FUN_009bb46c(uVar3,abStack_68,&DAT_0320ffa8,0,0);
  if ((abStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if ((abStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc5390(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_00f0eac0(param_2 + 0x1e8);
  FUN_00f0dad0(param_1 - fVar1,param_2 + 0xb8,1);
  FUN_00cc5848(param_2);
  return;
}




void FUN_00cc53d8(void)

{
  return;
}




void FUN_00cc53dc(void)

{
  return;
}




void FUN_00cc53e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a87e60();
  FUN_00a87aa0(uVar2,param_1 + 0x1d18);
  *(uint *)(param_1 + 0x34fc) = *(uint *)(param_1 + 0x34fc) & 0xfffffffb;
  FUN_00aa1954("INVENTORY_CHEST_POPUP");
  if (*(int *)(param_1 + 0x1cf8) == 0) {
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_00a8886c(param_1 + 0x1cf8,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    FUN_00a8886c(param_1 + 0x1cf8,*(undefined8 *)(param_1 + 0x1d00));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc54a0(long param_1)

{
  *(uint *)(param_1 + 0x2ccc) = *(uint *)(param_1 + 0x2ccc) | 4;
  return;
}




void FUN_00cc54b0(long param_1)

{
  *(uint *)(param_1 + 0x2ccc) = *(uint *)(param_1 + 0x2ccc) & 0xfffffffb;
  return;
}




void FUN_00cc54c0(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_008fcdb8(local_50,param_1 + 0x1d90);
  uVar3 = FUN_009b8d90();
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_008fa54c(local_68,pvVar1);
  FUN_009bb46c(uVar3,local_68,&DAT_0320ffa8,0,0);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc557c(long param_1)

{
  FUN_00f0d75c(param_1 + 0xb8);
  FUN_00cc5848(param_1);
  return;
}




void FUN_00cc55a4(long param_1,undefined8 param_2)

{
  FUN_00f0d92c(param_1 + 0xb8,param_2,&DAT_01bee7fa);
  FUN_00cc5848(param_1);
  return;
}




void FUN_00cc55d4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00cc59e0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00cc565c(long param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = *param_3;
  uVar5 = *(ulong *)(param_3 + 8);
  uVar6 = (ulong)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 4) {
    iVar3 = FUN_0090d610(param_3,0,0xffffffffffffffff,"hero",4);
    if (iVar3 != 0) {
      bVar2 = *param_3;
      uVar5 = *(ulong *)(param_3 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
      goto LAB_00cc56cc;
    }
    FUN_00f0e628(param_1 + 0x1e8);
    pcVar4 = PTR_s_build___Frames_tga_02be35e0;
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
LAB_00cc579c:
    FUN_00f0e548(param_1 + 0x1e8,pcVar4,param_2);
  }
  else {
LAB_00cc56cc:
    if ((bVar2 & 1) != 0) {
      uVar6 = uVar5;
    }
    if (uVar6 == 0x10) {
      iVar3 = FUN_0090d610(param_3,0,0xffffffffffffffff,"craftingMaterial",0x10);
      FUN_00f0e628(param_1 + 0x1e8);
      if (iVar3 == 0) {
        if ((*param_2 & 1) == 0) {
          param_2 = param_2 + 1;
        }
        else {
          param_2 = *(byte **)(param_2 + 0x10);
        }
        pcVar4 = "build://HatsMaterials.atlas";
        goto LAB_00cc579c;
      }
    }
    else {
      FUN_00f0e628(param_1 + 0x1e8);
    }
    FUN_00f0e540(param_1 + 0x1e8,PTR_s_build___MenuPartsCommon_tga_02be3530);
    if ((*param_2 & 1) == 0) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x10);
    }
    FUN_00f0e578(param_1 + 0x1e8,param_2);
  }
  FUN_00f13f08(0x42a00000,0x42a00000,param_1 + 0x1e8);
  return;
}




void FUN_00cc57c4(long *param_1,byte param_2)

{
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_0280cea8;
  FUN_00f0d160(param_1 + 0x17);
  FUN_00f0e4a8(param_1 + 0x3d);
  *(byte *)(param_1 + 0x5b) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
                    /* WARNING: Could not recover jumptable at 0x00cc5844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3d,1);
  return;
}




void FUN_00cc5848(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((char)param_3[0x5b] == '\0') {
    FUN_00f07b18(0x40000000,param_3 + 0x17,3,param_3 + 0x3d,1);
  }
  else {
    *(uint *)((long)param_3 + 0x26c) = *(uint *)((long)param_3 + 0x26c) & 0xfffffffb;
    if ((*(float *)(param_3 + 0x1f) != 0.0) || (*(float *)((long)param_3 + 0xfc) != 0.0)) {
      param_3[0x1f] = 0;
      FUN_0091ada4(param_3 + 0x17);
    }
  }
  local_30 = (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  uStack_2c = param_2;
  FUN_00f13f18(param_3,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc5910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280cea8;
  param_1[0x3d] = &PTR_FUN_028266f0;
  param_1[0x54] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x57);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00cc5974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280cea8;
  param_1[0x3d] = &PTR_FUN_028266f0;
  param_1[0x54] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x57);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc59e0(uint *param_1,uint param_2)

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




void FUN_00cc5a60(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x7c050);
  FUN_00cc5aa4();
  FUN_00aa18e0(pvVar1,"GUILD_PANEL_POPUP",1,0,1);
  return;
}




void FUN_00cc5aa4(long *param_1)

{
  long *plVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  undefined **local_298 [5];
  undefined1 auStack_270 [112];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [224];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00b06f74();
  plVar1 = param_1 + 0x39e;
  *param_1 = (long)&PTR_FUN_0280cff0;
  FUN_00ba22d8(plVar1);
  uVar6 = FUN_00e6ce7c("MENU_GUILD_TITLE",0);
  FUN_00b078b8(param_1,uVar6);
  FUN_00b0780c(param_1,plVar1);
  *(uint *)((long)param_1 + 0x1d74) = *(uint *)((long)param_1 + 0x1d74) & 0xfffffffb;
  FUN_00ba5184(plVar1,0);
  uVar7 = FUN_009580c4();
  if ((uVar7 & 1) == 0) goto LAB_00cc5cb4;
  lVar8 = FUN_009580b8();
  bVar3 = *(byte *)(lVar8 + 0x5478);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(lVar8 + 0x5480);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(lVar8 + 0x5488);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(lVar8 + 0x5479);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(lVar8 + 0x5479);
        lVar8 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00cc5bd8;
          pcVar9 = pcVar9 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00cc5bd8;
    FUN_00e84dac(local_298);
    local_298[0] = &PTR_FUN_027bbaa8;
    memset(auStack_1f8,0,0xd8);
    memset(auStack_270,0,0x60);
    FUN_00954ec0(auStack_200);
    FUN_00954d1c(auStack_270);
    uStack_70 = 0;
    local_78 = 0;
    local_68 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    FUN_00e84dec(local_298);
    FUN_00ba6b60(plVar1,local_298);
    FUN_0094dae0(local_298);
  }
  else {
LAB_00cc5bd8:
    uVar6 = FUN_009580b8();
    lVar8 = FUN_009580b8();
    FUN_0095e21c(uVar6,lVar8 + 0x5478,1);
  }
LAB_00cc5cb4:
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cc5cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280cff0;
  FUN_00ba4458(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc5d30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280cff0;
  FUN_00ba4458(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc5d74(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  fVar3 = local_40 + -100.0;
  uVar2 = FUN_00b07b80(fStack_3c + -200.0,param_1);
  local_48 = CONCAT44(fVar3,uVar2);
  FUN_00b07d08(fStack_3c + -200.0,local_40 + -100.0,param_1,0);
  FUN_00b0828c(param_1);
  FUN_00f13f18(param_1 + 0x1cf0,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc5e38(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2e008);
  FUN_00cc5e7c();
  FUN_00aa18e0(pvVar1,"TEAM_PANEL_POPUP",1,0,1);
  return;
}




void FUN_00cc5e7c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  char *__s2;
  char *pcVar11;
  void *__s1;
  undefined **local_128 [5];
  undefined1 auStack_100 [112];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00b06f74();
  plVar1 = param_1 + 0x39e;
  *param_1 = (long)&PTR_FUN_0280d120;
  FUN_00ed66ec(plVar1);
  plVar2 = param_1 + 0x4e3;
  FUN_00bafdc4(plVar2);
  uVar7 = FUN_00e6ce7c("MENU_TEAM_TITLE",0);
  FUN_00b078b8(param_1,uVar7);
  FUN_00b0780c(param_1,plVar1);
  FUN_00ed5664(plVar1,plVar2,1);
  FUN_00ed5b20(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,1);
  local_128[0] = (undefined **)CONCAT71(local_128[0]._1_7_,1);
  FUN_00ed5ab0(plVar1,local_128);
  plVar8 = (long *)FUN_00f136e0();
  FUN_00ed59f4(plVar1,plVar8);
  FUN_00f13ba0(plVar8,0x28,0x14,0x28,0x14);
  (**(code **)(*plVar8 + 0x58))(plVar8,plVar2);
  *(uint *)((long)param_1 + 0x279c) = *(uint *)((long)param_1 + 0x279c) & 0xfffffffb;
  FUN_00bb2af8(plVar2,0);
  uVar9 = FUN_009580c4();
  if ((uVar9 & 1) == 0) goto LAB_00cc60b4;
  lVar10 = FUN_009580b8();
  bVar4 = *(byte *)(lVar10 + 0x5490);
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(lVar10 + 0x5498);
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (__n == sVar3) {
    __s1 = *(void **)(lVar10 + 0x54a0);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(lVar10 + 0x5491);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        pcVar11 = (char *)(lVar10 + 0x5491);
        lVar10 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar11 != *__s2) goto LAB_00cc6038;
          pcVar11 = pcVar11 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_00cc6038;
    FUN_00e84dac(local_128);
    local_128[0] = &PTR_FUN_027bbb08;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    memset(auStack_100,0,0x48);
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_00e84dec(local_128);
    FUN_00bb40cc(plVar2,local_128);
    FUN_0094f104(local_128);
  }
  else {
LAB_00cc6038:
    uVar7 = FUN_009580b8();
    lVar10 = FUN_009580b8();
    FUN_0095e34c(uVar7,lVar10 + 0x5490,1);
  }
LAB_00cc60b4:
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

