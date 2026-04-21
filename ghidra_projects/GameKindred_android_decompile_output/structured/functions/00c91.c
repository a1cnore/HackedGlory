// functions/00c91 — 10 functions
#include "libGameKindred.h"




void FUN_00c91a18(long param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  
  bVar2 = *(byte *)(param_1 + 0x2dc8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2dd0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar6 = *(char **)(param_1 + 0x2dd8);
    pcVar4 = (char *)(param_1 + 0x2dc9);
    __s1 = pcVar4;
    if ((bVar2 & 1) != 0) {
      __s1 = pcVar6;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) goto LAB_00c91ab4;
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00c91aec;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00c91aec;
  }
  else {
LAB_00c91ab4:
    if ((bVar2 & 1) == 0) {
      pcVar6 = (char *)(param_1 + 0x2dc9);
    }
    else {
      pcVar6 = *(char **)(param_1 + 0x2dd8);
    }
  }
  FUN_00aa12a8(0x3f800000,pcVar6,0,1);
LAB_00c91aec:
  FUN_00c91da8(0,param_1);
  return;
}




void FUN_00c91b00(void)

{
  FUN_00c91da8(0x3f800000);
  return;
}




void FUN_00c91b08(long *param_1)

{
  long lVar1;
  long *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c8be40();
  pcStack_30 = FUN_00c91fb0;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_00c90d84(param_1,param_1 + 0x5c8);
  (**(code **)(*param_1 + 0x160))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c91b84(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  (**(code **)(*param_3 + 0x48))();
  if ((param_2 != 0.0) && (fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3), fVar6 != 0.0)) {
    plVar1 = param_3 + 0x1b;
    uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    local_60 = CONCAT44(param_2,uVar7);
    FUN_00f13f18(plVar1,&local_60);
    plVar2 = param_3 + 0x49;
    FUN_00b1e084(plVar2);
    FUN_00b1cbb0(param_3 + 0x1b7);
    local_60 = 0x3f0000003f000000;
    (**(code **)(param_3[0x49] + 0x28))(plVar2,&local_60);
    plVar3 = param_3 + 0x32;
    uVar8 = FUN_00f13e54(plVar1);
    FUN_00f13e54(plVar1);
    param_2 = param_2 - (*(float *)((long)param_3 + 0x2e74) + *(float *)((long)param_3 + 0x2e74));
    FUN_00f13f08(uVar8,plVar3);
    uVar5 = FUN_00f023dc(plVar2);
    if ((uVar5 & 1) == 0) {
      FUN_00f13e54(plVar3);
      fVar6 = param_2;
      FUN_00b1e834(plVar2);
      param_2 = param_2 / fVar6;
      if ((*(float *)(param_3 + 0x52) != param_2) || (*(float *)((long)param_3 + 0x294) != param_2))
      {
        *(float *)(param_3 + 0x52) = param_2;
        *(float *)((long)param_3 + 0x294) = param_2;
        FUN_0091ada4(plVar2);
      }
    }
    FUN_00f07940(0,0,plVar3,4,plVar1,4);
    fVar9 = *(float *)((long)param_3 + 0x2e74) * -0.5;
    FUN_00f07940(*(float *)(param_3 + 0x5ce) * -0.5,fVar9,param_3 + 0x1b7,6,plVar3,6);
    fVar6 = (float)FUN_00f13e54(plVar3);
    FUN_00f13e54(plVar3);
    FUN_00f07940(fVar6 * 0.5,fVar9 * 0.5,plVar3,4,plVar1,4);
    FUN_00f07940(0,0,plVar1,4,param_3,4);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c91d74(long param_1)

{
  FUN_00c8bee8();
  *(uint *)(param_1 + 0xe3c) = *(uint *)(param_1 + 0xe3c) & 0xfffffffb;
  FUN_00b1e284(param_1 + 0x248,0);
  return;
}




void FUN_00c91da8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00f048a4("SPOILSOFWAR::PULSE_RING");
  FUN_00f048e0(auStack_58,uVar3,0);
  FUN_00f04760(param_2,auStack_58,1);
  fVar5 = (float)NEON_fminnm((float)*(int *)(param_2 + 0x2e44),0x41e80000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  *(int *)(param_2 + 0x2e78) = (int)param_1;
  FUN_00b1d2b4(param_1,*(undefined4 *)(param_2 + 0x2e50),*(undefined4 *)(param_2 + 0x2e54),
               *(undefined4 *)(param_2 + 0x2e58),param_2 + 0xdb8,(int)fVar5);
  lVar1 = param_2 + 0x248;
  FUN_00f01980(lVar1);
  iVar4 = *(int *)(param_2 + 0x2e44);
  if ((iVar4 == 0) && (*(float *)(param_2 + 0x2e4c) == 0.0)) {
    iVar4 = -1;
  }
  FUN_00b1e298(lVar1,iVar4);
  FUN_00f01980(lVar1);
  if ((*(float *)(param_2 + 0x288) != 0.0) || (*(float *)(param_2 + 0x28c) != 0.0)) {
    *(undefined8 *)(param_2 + 0x288) = 0;
    FUN_0091ada4(lVar1);
  }
  FUN_00c8b224(0x438c0000,0x41700000,0x3f333333,0x3e800000,lVar1,&DAT_0320ffa8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c91ee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805f90;
  FUN_00beb548(param_1 + 0x5a7);
  FUN_00b1eb14(param_1 + 0x1b7);
  FUN_00b1df14(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00c8bc58(param_1);
  return;
}




void FUN_00c91f48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805f90;
  FUN_00beb548(param_1 + 0x5a7);
  FUN_00b1eb14(param_1 + 0x1b7);
  FUN_00b1df14(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00c8bc58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c91fb0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c91fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00c91fbc(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  FUN_00ecf178();
  plVar1 = param_1 + 0x48;
  *param_1 = (long)&PTR_FUN_02806118;
  FUN_00f0fe84(plVar1);
  plVar2 = param_1 + 0x72;
  FUN_00f0fe84(plVar2);
  plVar3 = param_1 + 0x9c;
  FUN_00f0fe84(plVar3);
  plVar4 = param_1 + 0xc6;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xe4;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x103;
  param_1[0x102] = 0;
  FUN_00f017e8(plVar6);
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  param_1[0x114] = (long)(param_1 + 0x115);
  *(undefined4 *)((long)param_1 + 0x8bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x8c4) = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  FUN_008fcdb8(param_1 + 0x11d,&DAT_03133a40);
  *(undefined2 *)(param_1 + 0x120) = 0x100;
  *(byte *)((long)param_1 + 0x902) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f023ec(plVar6,plVar3,1);
  FUN_00f023ec(plVar6,plVar4,1);
  FUN_00f023ec(plVar6,plVar5,1);
  FUN_00f023ec(plVar6,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f14070(param_1,&DAT_03211038);
  ppuVar7 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if ((param_2 & 1) == 0) {
    ppuVar7 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  puVar8 = *ppuVar7;
  FUN_00f0e540(plVar4,puVar8);
  FUN_00f0e548(plVar5,puVar8,"white_background");
  *(uint *)((long)param_1 + 0x7a4) = *(uint *)((long)param_1 + 0x7a4) & 0xfffffffb;
  FUN_00f0ff6c(plVar3,puVar8);
  FUN_00f0ff74(plVar3,"button_lively_glow_top_left",0,0,0,"button_lively_glow_top_middle",0,0,0,
               "button_lively_glow_top_left",1,0,0,"button_lively_glow_middle_left",0,0,0,0,0,0,0,
               "button_lively_glow_middle_left",1,0,0,"button_lively_glow_bottom_left",0,0,0,
               "button_lively_glow_bottom_middle",0,0,0,"button_lively_glow_bottom_left",1,0,0);
  *(uint *)((long)param_1 + 0x564) = *(uint *)((long)param_1 + 0x564) & 0xffffffbf;
  FUN_00f0ff6c(plVar2,puVar8);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xfffffffb;
  FUN_00f0ff6c(plVar1,puVar8);
  FUN_00c9228c(param_1,2);
  return;
}

