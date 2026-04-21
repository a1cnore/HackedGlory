// functions/00f1c — 52 functions
#include "libGameKindred.h"




void FUN_00f1c03c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0xc;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar4 = *puVar2;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
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




void FUN_00f1c0cc(void)

{
  FUN_00f1c0e0();
  return;
}




void FUN_00f1c0e0(long param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  
  FUN_0199cc74(param_1,0,0,param_2,param_3);
  FUN_0199cc98(param_1,param_4,param_5,param_6,param_7);
  fVar2 = 1.0 / (0.0 - (float)param_3);
  *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  fVar1 = 1.0 / (float)param_2;
  *(undefined8 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3f80000000000000;
  *(float *)(param_1 + 0x70) = fVar1 + fVar1;
  *(float *)(param_1 + 0x84) = fVar2 + fVar2;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xbc23d70a;
  *(float *)(param_1 + 0xa0) = -(fVar1 * (float)param_2);
  *(float *)(param_1 + 0xa4) = -(fVar2 * (float)param_3);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa8) = 0x3f80000080000000;
  return;
}




void FUN_00f1c1dc(long param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_4 + 4) & 0xffff;
  uVar2 = *(uint *)(param_4 + 4) >> 0x10;
  FUN_0199cc74(param_1,0,0,uVar1,uVar2);
  FUN_0199cc98(param_1,0,0,uVar1,uVar2);
  FUN_0199cc60(param_1,param_4);
  fVar4 = 1.0 / (0.0 - (float)param_3);
  *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  fVar3 = 1.0 / (float)param_2;
  *(undefined8 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3f80000000000000;
  *(float *)(param_1 + 0x70) = fVar3 + fVar3;
  *(float *)(param_1 + 0x84) = fVar4 + fVar4;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xbc23d70a;
  *(float *)(param_1 + 0xa0) = -(fVar3 * (float)param_2);
  *(float *)(param_1 + 0xa4) = -(fVar4 * (float)param_3);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa8) = 0x3f80000080000000;
  return;
}




void FUN_00f1c2dc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  memcpy((void *)(param_1 + 0x30),(void *)(param_2 + 0x30),0x9c);
  return;
}




void FUN_00f1c300(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  memcpy((void *)(param_1 + 0x30),(void *)(param_2 + 0x30),0x9c);
  FUN_0199cc98(param_1,param_3,param_4,param_5,param_6);
  return;
}




void FUN_00f1c370(undefined8 *param_1,ushort param_2,ushort param_3)

{
  *param_1 = &PTR_FUN_02828a18;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfc00 | 0x55;
  *(ushort *)((long)param_1 + 0xc) =
       param_3 & 0x1f | (param_2 & 0xf) << 5 | *(ushort *)((long)param_1 + 0xc) & 0xf800;
  return;
}




void FUN_00f1c3b0(void)

{
  return;
}




void FUN_00f1c3b4(long param_1)

{
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x200;
  return;
}




undefined4 FUN_00f1c3c4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_00f1c3cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf1c3d0);
  (*pcVar1)();
}




undefined8 FUN_00f1c3d0(void)

{
  return 0;
}




void FUN_00f1c3d8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00f1c370(param_1,param_3,param_4);
  *param_1 = &PTR_FUN_02828a78;
  param_1[2] = param_2;
  return;
}




void FUN_00f1c418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long *plVar1;
  
  if ((*(long *)(param_5 + 0x10) != 0) && (plVar1 = (long *)FUN_00f14058(), plVar1 != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x00f1c46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}




undefined8 FUN_00f1c480(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f1c490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x118))();
    return uVar1;
  }
  return DAT_03211260;
}




undefined8 FUN_00f1c4a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f1c4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x120))();
    return uVar1;
  }
  return DAT_03211260;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f1c4c8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f1c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x128))();
    return uVar1;
  }
  return _DAT_03211258;
}




ulong FUN_00f1c4ec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
    uVar1 = 0x55;
  }
  else {
    uVar1 = FUN_00f1407c();
    uVar2 = uVar1 & 0xffff0000;
    uVar1 = uVar1 & 0xffff;
  }
  return uVar1 | uVar2;
}




void FUN_00f1c520(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00f14070();
    return;
  }
  return;
}




undefined8 FUN_00f1c534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00f1c53c(undefined8 *param_1,uint param_2,int param_3,undefined4 param_4,byte param_5,
                 char param_6,undefined4 param_7,ushort param_8)

{
  FUN_00f1c370(param_1,param_4,param_7);
  *param_1 = &PTR_FUN_02828ae0;
  *(uint *)((long)param_1 + 0xe) = param_2 & 0xffff | param_3 << 0x10;
  *(byte *)(param_1 + 1) = param_5 & 0xf | param_6 << 4;
  *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) & 0xfbff | (param_8 & 1) << 10
  ;
  return;
}




ulong FUN_00f1c5bc(long param_1)

{
  return (ulong)*(uint *)(param_1 + 0xe) & 0xffff |
         (ulong)(*(uint *)(param_1 + 0xe) >> 0x10) << 0x20;
}




ulong FUN_00f1c5d0(long param_1)

{
  return (ulong)*(uint *)(param_1 + 0xe) & 0xffff |
         (ulong)(*(uint *)(param_1 + 0xe) >> 0x10) << 0x20;
}




undefined8 FUN_00f1c5e4(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_03211258;
  uVar1 = DAT_0321125c;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = *(uint *)(param_1 + 0xe) & 0xffff;
    uVar1 = *(uint *)(param_1 + 0xe) >> 0x10;
  }
  return CONCAT44(uVar1,uVar2);
}




void FUN_00f1c618(ulong param_1)

{
  long lVar1;
  void *pvVar2;
  byte local_1050 [16];
  void *local_1040;
  undefined1 auStack_1038 [4096];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x50);
  FUN_00f1ec30();
  DAT_03211268 = pvVar2;
  if ((param_1 & 1) != 0) {
    FUN_00e772cc(&DAT_0320ffc0,3,auStack_1038,0x1000);
    FUN_008fa54c(local_1050,auStack_1038);
    pvVar2 = (void *)((ulong)local_1050 | 1);
    if ((local_1050[0] & 1) != 0) {
      pvVar2 = local_1040;
    }
    FUN_00f1c6e4("build",pvVar2,0);
    if ((local_1050[0] & 1) != 0) {
      operator_delete(local_1040);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1c6e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  void *pvVar1;
  
  if ((param_3 & 1) == 0) {
    pvVar1 = operator_new(0x40);
    FUN_00f1ce5c(pvVar1,param_1,param_2);
  }
  else {
    pvVar1 = operator_new(0x70);
    FUN_00f1d3f4(pvVar1,param_1,param_2);
  }
  FUN_00f1ed50(DAT_03211268,pvVar1);
  return;
}




bool FUN_00f1c750(void)

{
  return DAT_03211268 != 0;
}




void FUN_00f1c764(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03211268;
  if (DAT_03211268 != (void *)0x0) {
    FUN_00f1ec64(DAT_03211268);
    operator_delete(pvVar1);
  }
  DAT_03211268 = (void *)0x0;
  return;
}




void FUN_00f1c79c(undefined8 param_1)

{
  FUN_00f1ed50(DAT_03211268,param_1);
  return;
}




void FUN_00f1c7b0(undefined8 param_1,undefined4 param_2)

{
  FUN_00f1ee8c(DAT_03211268,param_1,param_2);
  return;
}




void FUN_00f1c7c8(undefined4 param_1)

{
  FUN_00f1f07c(DAT_03211268,param_1);
  return;
}




void FUN_00f1c7dc(undefined4 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_00f1f1fc(DAT_03211268,param_1,param_2,param_3,param_4 & 1);
  return;
}




void FUN_00f1c800(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00f1f2b8(DAT_03211268,param_1,param_2,param_3 & 1);
  return;
}




void FUN_00f1c820(undefined4 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_00f1f488(DAT_03211268,param_1,param_2,param_3,param_4 & 1);
  return;
}




void FUN_00f1c844(undefined4 param_1,undefined8 param_2)

{
  FUN_00f1f544(DAT_03211268,param_1,param_2);
  return;
}




void FUN_00f1c85c(undefined4 param_1,undefined8 param_2)

{
  FUN_00f1f654(DAT_03211268,param_1,param_2);
  return;
}




void FUN_00f1c874(undefined8 param_1)

{
  FUN_00f1f660(DAT_03211268,param_1);
  return;
}




void FUN_00f1c888(undefined8 param_1)

{
  FUN_00f1f668(DAT_03211268,param_1);
  return;
}




void FUN_00f1c89c(undefined8 param_1)

{
  FUN_00f1f708(DAT_03211268,param_1);
  return;
}




void FUN_00f1c8b0(undefined8 param_1)

{
  FUN_00f1f768(DAT_03211268,param_1);
  return;
}




void FUN_00f1c8c4(undefined8 param_1)

{
  FUN_00f1f808(DAT_03211268,param_1);
  return;
}




void FUN_00f1c8d8(undefined8 param_1)

{
  FUN_00f1f8a8(DAT_03211268,param_1);
  return;
}




void FUN_00f1c8ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00f1f948(DAT_03211268,param_1,param_2);
  return;
}




void FUN_00f1c904(char *param_1,undefined8 param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined8 uVar7;
  byte local_1d0 [8];
  ulong local_1c8;
  void *local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  byte local_120 [16];
  void *local_110;
  byte local_108 [8];
  ulong local_100;
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  undefined1 auStack_d8 [16];
  byte local_c8 [16];
  void *local_b8;
  byte local_70 [16];
  void *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar5 = strstr(param_1,"://");
  uVar7 = 0;
  if (pcVar5 != (char *)0x0) {
    FUN_008fa54c(local_f0,param_1);
    FUN_0093ddb0(local_70,local_f0,(int)((long)pcVar5 - (long)param_1) + 3,0xffffffffffffffff,
                 local_f0);
    FUN_008fcdb8(local_c8,local_70);
    FUN_008fce60(local_f0,local_c8);
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    pvVar1 = (void *)((ulong)local_f0 | 1);
    if ((local_f0[0] & 1) != 0) {
      pvVar1 = local_e0;
    }
    thunk_FUN_00e6dd88(local_c8);
    uVar4 = FUN_00e6a474(pvVar1);
    thunk_FUN_00e6ddac(local_c8,pvVar1,uVar4);
    thunk_FUN_00e6e91c(local_c8,auStack_d8);
    FUN_00e6d9c4(auStack_d8,local_70,0);
    FUN_008fa54c(local_108,local_70);
    FUN_008fa54c(local_120,param_1);
    FUN_008fce60(param_2,local_120);
    if ((local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    FUN_0093ddb0(local_1b8,param_2,0,(long)pcVar5 - (long)param_1 & 0xffffffff,param_2);
    puVar6 = (ulong *)FUN_0090de84(local_1b8,"://",3);
    local_190 = (void *)puVar6[2];
    uStack_198 = puVar6[1];
    local_1a0 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    FUN_0093ddb0(local_1d0,local_108,0,2,local_108);
    uVar2 = (ulong)(local_1d0[0] >> 1);
    pvVar1 = (void *)((ulong)local_1d0 | 1);
    if ((local_1d0[0] & 1) != 0) {
      uVar2 = local_1c8;
      pvVar1 = local_1c0;
    }
    puVar6 = (ulong *)FUN_0090de84(&local_1a0,pvVar1,uVar2);
    local_170 = (void *)puVar6[2];
    uStack_178 = puVar6[1];
    local_180 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6 = (ulong *)FUN_0090de84(&local_180,"/",1);
    local_150 = (void *)puVar6[2];
    uStack_158 = puVar6[1];
    local_160 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar2 = (ulong)(local_108[0] >> 1);
    pvVar1 = (void *)((ulong)local_108 | 1);
    if ((local_108[0] & 1) != 0) {
      uVar2 = local_100;
      pvVar1 = local_f8;
    }
    puVar6 = (ulong *)FUN_0090de84(&local_160,pvVar1,uVar2);
    local_130 = (void *)puVar6[2];
    uStack_138 = puVar6[1];
    local_140 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    FUN_008fcdb8(local_120,&local_140);
    FUN_008fce60(param_2,local_120);
    if ((local_120[0] & 1) != 0) {
      operator_delete(local_110);
    }
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    if ((local_160 & 1) != 0) {
      operator_delete(local_150);
    }
    if ((local_180 & 1) != 0) {
      operator_delete(local_170);
    }
    if ((local_1d0[0] & 1) != 0) {
      operator_delete(local_1c0);
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    if ((local_108[0] & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((local_f0[0] & 1) != 0) {
      operator_delete(local_e0);
    }
    uVar7 = 1;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}




uint FUN_00f1cc0c(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  uVar4 = FUN_00f1c904(param_1,local_50);
  uVar3 = 0;
  if ((uVar4 & 1) != 0) {
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    uVar3 = FUN_00f1f948(DAT_03211268,pvVar1,param_2);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1ccb0(char *param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar2 = strstr(param_1,"://");
  uVar3 = 0;
  if (pcVar2 != (char *)0x0) {
    FUN_008fa54c(local_50,param_1);
    FUN_008fce60(param_2,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_008f68f8(param_2,(long)pcVar2 - (long)param_1,0);
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




uint FUN_00f1cd50(uint param_1)

{
  uint uVar1;
  
  uVar1 = 2;
  if ((param_1 & 3) != 3) {
    uVar1 = (uint)((param_1 & 3) == 2);
  }
  return uVar1 | (param_1 >> 2 & 1) << 6;
}




undefined8 FUN_00f1cd74(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_50,param_1);
  FUN_008fce60(param_3,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_0090de84(param_3,"/",1);
  pcVar1 = (char *)(param_2 + 0x39);
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    pcVar1 = *(char **)(param_2 + 0x48);
  }
  sVar3 = strlen(pcVar1);
  FUN_0090de84(param_3,pcVar1,sVar3);
  pcVar1 = (char *)(param_2 + 0x51);
  if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
    pcVar1 = *(char **)(param_2 + 0x60);
  }
  sVar3 = strlen(pcVar1);
  FUN_0090de84(param_3,pcVar1,sVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1ce5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f1fb78(param_1,param_2,7);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_02828b40;
  param_1[5] = 0;
  FUN_008fa54c(local_50,param_3);
  FUN_008fce60(param_1 + 5,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1cef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02828b40;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00f1fbfc(param_1);
  return;
}




void FUN_00f1cf34(void *param_1)

{
  FUN_00f1cef4();
  operator_delete(param_1);
  return;
}




void * FUN_00f1cf58(long *param_1,undefined8 param_2,uint param_3)

{
  char *__file;
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  void *pvVar5;
  ulong local_60 [2];
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (char *)0x0;
  uVar3 = (**(code **)(*param_1 + 0x38))(param_1,param_2,local_60);
  pvVar5 = (void *)0x0;
  if ((uVar3 & 1) != 0) {
    uVar4 = 2;
    if ((param_3 & 3) != 3) {
      uVar4 = (uint)((param_3 & 3) == 2);
    }
    __file = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      __file = local_50;
    }
    iVar2 = open(__file,uVar4 | (param_3 >> 2 & 1) << 6 | 0x800,0x180);
    if (iVar2 < 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = operator_new(0x18);
      FUN_00f203fc(pvVar5,param_1,iVar2,param_3);
    }
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

