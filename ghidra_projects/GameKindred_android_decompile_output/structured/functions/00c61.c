// functions/00c61 — 17 functions
#include "libGameKindred.h"




void FUN_00c61050(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  param_1 = param_1 + 0x2891;
  FUN_00ed0418(param_1,1);
  FUN_00ed0464(param_1);
  FUN_00ed02d8(uVar1,param_1);
  return;
}




void FUN_00c610ac(long *param_1)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)param_1[0x3fcb];
  if (pbVar5 != (byte *)0x0) {
    lVar1 = FUN_00cc7868(**(undefined8 **)(pbVar5 + 0x18));
    FUN_00c611d8(param_1,*(undefined8 *)(lVar1 + 0x28));
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
    }
    else {
      pbVar2 = *(byte **)(pbVar5 + 0x10);
    }
    FUN_00ad7c98(param_1 + 0xf4,pbVar2,0);
    FUN_00b4df64(param_1 + 0x3950,*(undefined8 *)(pbVar5 + 0x20),*(undefined8 *)(pbVar5 + 0x18));
    FUN_00ad6890(param_1 + 0x1d27,*(undefined8 *)(pbVar5 + 0x18));
    if (*(char *)((long)param_1 + 0x1fe61) == '\0') {
      if ((pbVar5[0xb8] & 1) == 0) {
        uVar4 = (ulong)(pbVar5[0xb8] >> 1);
      }
      else {
        uVar4 = *(ulong *)(pbVar5 + 0xc0);
      }
      *(uint *)((long)param_1 + 0x7134) =
           *(uint *)((long)param_1 + 0x7134) & 0xfffffff8 |
           *(uint *)((long)param_1 + 0x7134) & 3 | (uint)(uVar4 != 0) << 2;
      if ((pbVar5[0xd0] & 1) == 0) {
        uVar4 = (ulong)(pbVar5[0xd0] >> 1);
      }
      else {
        uVar4 = *(ulong *)(pbVar5 + 0xd8);
      }
      uVar3 = (uint)(uVar4 != 0) << 2;
    }
    else {
      uVar3 = 0;
      *(uint *)((long)param_1 + 0x7134) = *(uint *)((long)param_1 + 0x7134) & 0xfffffffb;
    }
    *(uint *)((long)param_1 + 0x13d74) = *(uint *)((long)param_1 + 0x13d74) & 0xfffffffb | uVar3;
                    /* WARNING: Could not recover jumptable at 0x00c611d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1);
    return;
  }
  return;
}




void FUN_00c611d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 0x390;
  FUN_00f0e628(param_1);
  FUN_00e6a8a8(auStack_b8,"build://Splash_%s.png",param_2);
  FUN_00f0e6e8(param_1,0);
  FUN_00f0e540(param_1,auStack_b8);
  FUN_00f0e578(param_1,"full_splash_1k");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6126c(long param_1)

{
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) | 4;
  *(uint *)(*(long *)(param_1 + 0x1fe78) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe78) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1feb0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1feb0) + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c612ac(long param_1)

{
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1fe78) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe78) + 0x84) | 4;
  *(uint *)(*(long *)(param_1 + 0x1feb0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1feb0) + 0x84) & 0xfffffffb;
  return;
}




void FUN_00c612ec(long param_1)

{
  *(uint *)(param_1 + 0x1ec) = *(uint *)(param_1 + 0x1ec) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1fe78) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1fe78) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x1feb0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1feb0) + 0x84) | 4;
  FUN_00bf1000(param_1 + 0x1fea8);
  return;
}




void FUN_00c61338(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x1fe68) = *(long *)(param_1 + 0x1fe58) + 0x60;
  uVar2 = FUN_009580b8();
  lVar4 = *(long *)(param_1 + 0x1fe58);
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_00961494(uVar2,lVar4 + 0x60,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar3 = FUN_00969254();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00969248();
    if (0 < *(int *)(lVar4 + 0x38)) {
      uVar2 = FUN_009b8d90();
      FUN_009baadc(uVar2,&DAT_0320ffa8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c61408(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x1fe68) = *(long *)(param_1 + 0x1fe58) + 0x80;
  uVar2 = FUN_009580b8();
  lVar4 = *(long *)(param_1 + 0x1fe58);
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_00961494(uVar2,lVar4 + 0x80,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar3 = FUN_00969254();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00969248();
    if (0 < *(int *)(lVar4 + 0x38)) {
      uVar2 = FUN_009b8d90();
      FUN_009baadc(uVar2,&DAT_0320ffa8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c614d8(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_2 + 0x240) != 0) {
    return;
  }
  if (param_1[0x3fcb] != 0) {
    uVar2 = FUN_009580b8();
    pbVar3 = (byte *)param_1[0x3fcb];
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      pbVar3 = *(byte **)(pbVar3 + 0x10);
    }
    uVar1 = FUN_00961804(uVar2,pbVar3,1);
    FUN_00c60e28(param_1,uVar1 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c61554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c61558(long param_1)

{
  FUN_00c614d8(param_1 + -0x150);
  return;
}




void FUN_00c61560(long param_1,uint param_2)

{
  FUN_00ad7b10(param_1 + 0x7a0,param_2 & 1);
  return;
}




void FUN_00c6156c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1fe61) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0x8964) = *(uint *)(param_1 + 0x8964) & 0xfffffffb;
    *(uint *)(param_1 + 0x889c) = *(uint *)(param_1 + 0x889c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1377c) = *(uint *)(param_1 + 0x1377c) & 0xfffffffb;
    *(uint *)(param_1 + 0x13d74) = *(uint *)(param_1 + 0x13d74) & 0xfffffffb;
    *(uint *)(param_1 + 0xa054) = *(uint *)(param_1 + 0xa054) & 0xfffffffb;
    *(uint *)(param_1 + 0xc4c4) = *(uint *)(param_1 + 0xc4c4) & 0xfffffffb;
    *(uint *)(param_1 + 0x8a94) = *(uint *)(param_1 + 0x8a94) & 0xfffffffb;
    *(uint *)(param_1 + 0x7134) = *(uint *)(param_1 + 0x7134) & 0xfffffffb;
  }
  return;
}




void FUN_00c6160c(long param_1,uint param_2,int param_3)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  param_2 = *(int *)(param_1 + 0x1fe64) != param_3 & param_2;
  if (param_2 == 1) {
    if (param_3 == 0) {
      FUN_00c6199c(param_1,1);
      FUN_00c61b5c(param_1,0,0xffffffff);
    }
    else if (param_3 - 1U < 3) {
      FUN_00c61b5c(param_1,1);
      FUN_00c6199c(param_1,0);
    }
    if (*(float *)(param_1 + 0x144cc) != 0.0) {
      *(float *)(param_1 + 0x144cc) = 0.0;
      FUN_0091ada4(param_1 + 0x14488);
    }
  }
  else {
    FUN_00c6199c(param_1,0);
    param_3 = -1;
    FUN_00c61b5c(param_1,0,0xffffffff);
    FUN_00ad67fc(param_1 + 0xe938,0);
  }
  *(int *)(param_1 + 0x1fe64) = param_3;
  pbVar2 = (byte *)(param_1 + 0x1fe60);
  bVar3 = *pbVar2;
  if (bVar3 != param_2) {
    lVar1 = param_1 + 0x390;
    if (param_2 == 0) {
      local_5c = 0xffffffff;
    }
    else {
      local_5c = 0xff282828;
    }
    uVar6 = FUN_00eff108(0x3f000000,lVar1,&local_5c,FUN_0091aa80,2);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar6);
    lVar1 = param_1 + 0x718;
    FUN_00f01980(lVar1);
    lVar5 = DAT_03210d00;
    if (param_2 == 0) {
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
        FUN_00efc8e8(puVar8);
        *(undefined ***)puVar8 = &PTR_FUN_02825100;
        *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
      }
      FUN_00f022a0(lVar1,puVar8);
      puVar8 = (ushort *)FUN_00efee28(0x3f800000,0x3f000000,FUN_0091aa80);
    }
    else {
      uVar6 = FUN_00efee28(0,0x3f000000,FUN_0091aa80);
      FUN_00f022a0(lVar1,uVar6);
      lVar5 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
        FUN_00efc8e8(puVar8);
        *(undefined ***)puVar8 = &PTR_FUN_02825148;
        *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
      }
    }
    FUN_00f022a0(lVar1,puVar8);
    FUN_00c61e78(param_1,param_2);
    *pbVar2 = (byte)param_2;
    *(uint *)(param_1 + 0x1450c) =
         *(uint *)(param_1 + 0x1450c) & 0xffffffe0 |
         *(uint *)(param_1 + 0x1450c) & 0xf | param_2 << 4;
    FUN_00ed06a4(param_1 + 0x14488,param_2);
    bVar3 = *pbVar2;
  }
  if (bVar3 != 0) {
    FUN_00ed1918(param_1 + 0x14488);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6199c(long param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 uVar8;
  
  if ((param_2 & 1) != 0) {
    puVar1 = (uint *)(param_1 + 0x1cb04);
    uVar5 = *puVar1;
    lVar2 = param_1 + 0x1ca80;
    if ((uVar5 & 0x7f80) != 0) {
      *puVar1 = uVar5 & 0xffff807f;
      FUN_0091ada4(lVar2);
      uVar5 = *puVar1;
    }
    *puVar1 = uVar5 | 4;
    uVar8 = 0;
    if (*(char *)(param_1 + 0x1fe60) != '\0') {
      uVar8 = 0x3dcccccd;
    }
    uVar3 = FUN_00efed6c(uVar8);
    uVar4 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
    FUN_00f01980(lVar2);
    FUN_00f02308(lVar2,uVar3,uVar4,0);
    FUN_00c61050(param_1);
    return;
  }
  uVar3 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
  lVar2 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(param_1 + 0x1ca80);
  FUN_00f02308(param_1 + 0x1ca80,uVar3,puVar7,0);
  return;
}




void FUN_00c61b5c(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
    lVar1 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00f01980(param_1 + 0x14fb8);
    FUN_00f02308(param_1 + 0x14fb8,uVar4,puVar8,0);
    return;
  }
  lVar1 = param_1 + 0x14fb8;
  if (*(char *)(param_1 + 0x1fe60) != '\0') {
    puVar2 = (uint *)(param_1 + 0x1503c);
    uVar6 = *puVar2;
    *puVar2 = uVar6 | 4;
    if ((uVar6 & 0x7f80) != 0) {
      *puVar2 = uVar6 & 0xffff807f | 4;
      FUN_0091ada4(lVar1);
    }
    uVar4 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
    lVar3 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar7 * 0x40);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    *(code **)(puVar8 + 8) = FUN_00c6201c;
    *(long *)(puVar8 + 0x10) = param_1;
    uVar5 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
    FUN_00f01980(lVar1);
    FUN_00f02308(lVar1,uVar4,puVar8,uVar5,0);
    return;
  }
  FUN_00b4c404(lVar1,*(undefined8 *)(*(long *)(param_1 + 0x1fe58) + (long)param_3 * 8 + 0x38));
  puVar2 = (uint *)(param_1 + 0x1503c);
  uVar6 = *puVar2;
  if ((uVar6 & 0x7f80) != 0) {
    *puVar2 = uVar6 & 0xffff807f;
    FUN_0091ada4(lVar1);
    uVar6 = *puVar2;
  }
  *puVar2 = uVar6 | 4;
  uVar4 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar4);
  FUN_00c61050(param_1);
  return;
}




void FUN_00c61e78(long param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x1fe60) != '\0') {
      uVar3 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
      lVar2 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efc8e8(puVar6);
        *(undefined ***)puVar6 = &PTR_FUN_02825148;
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00f01980(param_1 + 0x149c0);
      FUN_00f02308(param_1 + 0x149c0,uVar3,puVar6,0);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1fe60) == '\0') {
    puVar1 = (uint *)(param_1 + 0x14a44);
    uVar4 = *puVar1;
    param_1 = param_1 + 0x149c0;
    if ((uVar4 & 0x7f80) != 0) {
      *puVar1 = uVar4 & 0xffff807f;
      FUN_0091ada4(param_1);
      uVar4 = *puVar1;
    }
    *puVar1 = uVar4 | 4;
    uVar3 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,uVar3);
    return;
  }
  return;
}




void thunk_FUN_00c61338(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x1fe68) = *(long *)(param_1 + 0x1fe58) + 0x60;
  uVar2 = FUN_009580b8();
  lVar4 = *(long *)(param_1 + 0x1fe58);
  FUN_008fa54c(abStack_50,&DAT_01e277f2);
  FUN_00961494(uVar2,lVar4 + 0x60,abStack_50);
  if ((abStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  uVar3 = FUN_00969254();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00969248();
    if (0 < *(int *)(lVar4 + 0x38)) {
      uVar2 = FUN_009b8d90();
      FUN_009baadc(uVar2,&DAT_0320ffa8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

