// functions/00b2f — 26 functions
#include "libGameKindred.h"




void FUN_00b2f200(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00b2f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1,param_4,param_5);
  return;
}




void FUN_00b2f214(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_00ed0470(param_3 + 0x588,1,0,1,1);
  FUN_00ed02d8(auVar1,param_2 + -15.0,param_3 + 0x588);
  return;
}




void FUN_00b2f254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dfef0;
  param_1[0x6d] = &PTR_FUN_027e00d0;
  FUN_00f0d3a4(param_1 + 0x158);
  FUN_00ed00e0(param_1 + 0xb1);
  FUN_00f13d08(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_028266f0;
  param_1[0x93] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7c);
  FUN_00b357ac(param_1);
  return;
}




void FUN_00b2f2d0(long param_1)

{
  FUN_00b2f254(param_1 + -0x368);
  return;
}




void FUN_00b2f2d8(void *param_1)

{
  FUN_00b2f254();
  operator_delete(param_1);
  return;
}




void FUN_00b2f2fc(long param_1)

{
  FUN_00b2f254((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00b2f324(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float local_5c;
  float local_58;
  float local_54;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,&local_54,&local_58,&local_5c);
  fVar5 = *(float *)(param_1 + 0x3d8);
  if (*(float *)(param_1 + 0x514) != fVar5) {
    *(float *)(param_1 + 0x514) = fVar5;
    FUN_0091ada4(param_1 + 0x4d0);
    fVar5 = *(float *)(param_1 + 0x3d8);
  }
  FUN_00f13f08(local_54 - local_5c,local_58 - fVar5,param_1 + 0x4d0);
  lVar1 = param_1 + 0xac0;
  fVar6 = (local_54 - local_5c) * 0.5;
  FUN_00f01c20(lVar1);
  fVar5 = local_5c * 0.5 + 10.0;
  if ((*(float *)(param_1 + 0xb00) != fVar6) || (*(float *)(param_1 + 0xb04) != fVar5)) {
    *(float *)(param_1 + 0xb00) = fVar6;
    *(float *)(param_1 + 0xb04) = fVar5;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xac0) + 0x28))(lVar1,&local_50);
  fVar5 = *(float *)(param_1 + 0x5cc);
  if (0.0 < fVar5) {
    fVar6 = fVar5 / 172.0;
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    fVar6 = fVar6 * 0.33 + 0.66;
    if ((*(float *)(param_1 + 0xb08) != fVar6) || (*(float *)(param_1 + 0xb0c) != fVar6)) {
      *(float *)(param_1 + 0xb08) = fVar6;
      *(float *)(param_1 + 0xb0c) = fVar6;
      FUN_0091ada4(lVar1);
      fVar5 = *(float *)(param_1 + 0x5cc);
    }
    if (fVar5 <= 129.0) {
      fVar5 = fVar5 / 172.0;
      uVar3 = *(uint *)(param_1 + 0xb44);
      if (1.0 < fVar5) {
        fVar5 = 1.0;
      }
      uVar4 = (uint)(fVar5 * 0.5 * 255.0);
      if ((uVar3 >> 7 & 0xff) == uVar4) goto LAB_00b2f4e0;
      uVar3 = uVar3 & 0xffff8000 | uVar3 & 0x7f | (uVar4 & 0xff) << 7;
    }
    else {
      if ((~*(uint *)(param_1 + 0xb44) & 0x7f80) == 0) goto LAB_00b2f4e0;
      uVar3 = *(uint *)(param_1 + 0xb44) | 0x7f80;
    }
    *(uint *)(param_1 + 0xb44) = uVar3;
    FUN_0091ada4(lVar1);
  }
LAB_00b2f4e0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2f510(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  int local_48;
  float local_44;
  undefined4 local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,&fStack_3c,&local_40,&local_44);
  FUN_00f13f08(fStack_3c - local_44,local_40,param_1 + 0x3e0);
  lVar1 = param_1 + 0x588;
  FUN_00ed0418(lVar1,0);
  fVar4 = (float)FUN_00ed0464(lVar1);
  fVar4 = (fStack_3c - local_44) / fVar4;
  if ((*(float *)(param_1 + 0x5d0) != fVar4) || (*(float *)(param_1 + 0x5d4) != fVar4)) {
    *(float *)(param_1 + 0x5d0) = fVar4;
    *(float *)(param_1 + 0x5d4) = fVar4;
    FUN_0091ada4(lVar1);
  }
  local_48 = 0;
  FUN_00967388(0,0,0,&local_48);
  FUN_00ed04ac(0,(float)local_48,lVar1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2f608(long param_1,uint param_2)

{
  long lVar1;
  
  FUN_00b359dc(param_1,param_2 & 1);
  if ((param_2 & 1) != 0) {
    lVar1 = param_1 + 0x588;
    FUN_00ed02ac(lVar1);
    if ((*(float *)(param_1 + 0x5c8) != 0.0) || (*(float *)(param_1 + 0x5cc) != 0.0)) {
      *(undefined8 *)(param_1 + 0x5c8) = 0;
      FUN_0091ada4(lVar1);
    }
    FUN_00ed1918(lVar1);
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    return;
  }
  return;
}




void FUN_00b2f68c(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_00ed026c(param_1 + 0x588,uVar1,1);
  return;
}




void FUN_00b2f6c4(long *param_1)

{
  if (129.0 < *(float *)((long)param_1 + 0x5cc)) {
                    /* WARNING: Could not recover jumptable at 0x00b2f6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c0))();
    return;
  }
  return;
}




void FUN_00b2f6e8(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_00ed0470(param_3 + 0x588,1,0,1,1);
  FUN_00ed02d8(auVar1,param_2 + -15.0,param_3 + 0x588);
  return;
}




void FUN_00b2f728(long param_1)

{
  FUN_00ed0280(param_1 + 0x588);
  return;
}




void FUN_00b2f730(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3 + 0x588;
  FUN_00f01980(lVar1);
  if (0.0 < (float)param_2) {
    uVar2 = FUN_00efef08(*(undefined4 *)(param_3 + 0x5c8),param_1._0_8_,param_2,FUN_009a7608);
    FUN_00f022a0(lVar1,uVar2);
    return;
  }
  if (*(float *)(param_3 + 0x5cc) != param_1._0_4_) {
    *(float *)(param_3 + 0x5cc) = param_1._0_4_;
    FUN_0091ada4(lVar1);
    return;
  }
  return;
}




void FUN_00b2f7c4(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0x370) != '\0') {
    bVar3 = *param_2;
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    if (__n != 0) {
      uVar2 = *(uint *)(param_1 + 0x378);
      if (uVar2 != 0) {
        __s2 = *(byte **)(param_2 + 0x10);
        lVar10 = *(long *)(param_1 + 0x380);
        uVar9 = 0;
        if ((bVar3 & 1) == 0) {
          __s2 = param_2 + 1;
        }
        do {
          plVar8 = *(long **)(lVar10 + uVar9 * 8);
          bVar3 = *(byte *)(plVar8 + 10);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar8[0xb];
          }
          if (sVar1 == __n) {
            if ((bVar3 & 1) == 0) {
              pbVar5 = (byte *)((long)plVar8 + 0x51);
              lVar6 = -(ulong)(bVar3 >> 1);
              pbVar7 = __s2;
              while (*pbVar5 == *pbVar7) {
                pbVar5 = pbVar5 + 1;
                lVar6 = lVar6 + 1;
                pbVar7 = pbVar7 + 1;
                if (lVar6 == 0) goto LAB_00b2f898;
              }
            }
            else {
              iVar4 = memcmp((void *)plVar8[0xc],__s2,__n);
              if (iVar4 == 0) {
LAB_00b2f898:
                lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8);
                FUN_00b2f730(-(*(float *)(lVar10 + 0x44) * *(float *)(param_1 + 0x5d4)),0x3e4ccccd,
                             param_1);
                break;
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
      FUN_008fce60(param_1 + 0x3b8,&DAT_0320ffa8);
    }
  }
  return;
}




void FUN_00b2f8ec(void)

{
  return;
}




void FUN_00b2f8f0(long *param_1)

{
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_027e00f8;
  FUN_00f0e4a8(param_1 + 0x17);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_00f0e4a8(param_1 + 0x3a);
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
                    /* WARNING: Could not recover jumptable at 0x00b2f97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3a,1);
  return;
}




void FUN_00b2f980(long param_1)

{
  if (*(long *)(param_1 + 0x2a0) != 0) {
    FUN_00f0e628(param_1 + 0x1d0);
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_00f0e628(param_1 + 0xb8);
    return;
  }
  return;
}




void FUN_00b2f9c4(undefined4 param_1,undefined4 param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  byte local_88 [16];
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar1 = param_5 + 0xb8;
  local_70 = param_1;
  uStack_6c = param_2;
  if (*(long *)(param_5 + 0x188) == 0) {
    FUN_00f13f18(lVar1,&local_70);
    if ((*(float *)(param_5 + 0x108) != param_3) || (*(float *)(param_5 + 0x10c) != param_4)) {
      *(float *)(param_5 + 0x108) = param_3;
      *(float *)(param_5 + 0x10c) = param_4;
      FUN_0091ada4(lVar1);
    }
    FUN_00f0e6e8(lVar1,0);
    FUN_00f0e540(lVar1,param_6);
    FUN_00f0e578(lVar1,"full_splash_1k");
    if ((~*(uint *)(param_5 + 0x13c) & 0x7f80) != 0) {
      *(uint *)(param_5 + 0x13c) = *(uint *)(param_5 + 0x13c) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
  }
  else {
    lVar2 = param_5 + 0x1d0;
    FUN_00f0e628(lVar2);
    FUN_008fa54c(local_88,param_6);
    FUN_008fce60(param_5 + 0x2c0,local_88);
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    *(float *)(param_5 + 0x2e0) = param_3;
    *(ulong *)(param_5 + 0x2d8) = CONCAT44(uStack_6c,local_70);
    *(float *)(param_5 + 0x2e4) = param_4;
    FUN_00f13f18(lVar2,&local_70);
    if ((*(float *)(param_5 + 0x220) != param_3) || (*(float *)(param_5 + 0x224) != param_4)) {
      *(float *)(param_5 + 0x220) = param_3;
      *(float *)(param_5 + 0x224) = param_4;
      FUN_0091ada4(lVar2);
    }
    FUN_00f0e6e8(lVar2,0);
    FUN_00f0e540(lVar2,param_6);
    FUN_00f0e578(lVar2,"full_splash_1k");
    if ((*(uint *)(param_5 + 0x254) & 0x7f80) != 0) {
      *(uint *)(param_5 + 0x254) = *(uint *)(param_5 + 0x254) & 0xffff807f;
      FUN_0091ada4(lVar2);
    }
    FUN_00f01980(lVar1);
    uVar5 = FUN_00efee28(0,0x3ecccccd,FUN_009a7608);
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_027c27b8;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    *(code **)(puVar7 + 8) = FUN_00b2fc98;
    *(long *)(puVar7 + 0x10) = param_5;
    FUN_00f02308(lVar1,uVar5,puVar7,0);
    FUN_00f01980(lVar2);
    uVar5 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_009a7608);
    FUN_00f022a0(lVar2,uVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2fc98(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0xb8;
  FUN_00f0e628(lVar1);
  FUN_00f13f18(lVar1,param_1 + 0x2d8);
  if ((*(float *)(param_1 + 0x108) != *(float *)(param_1 + 0x2e0)) ||
     (*(float *)(param_1 + 0x10c) != *(float *)(param_1 + 0x2e4))) {
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x2e0);
    FUN_0091ada4(lVar1);
  }
  FUN_00f0e6e8(lVar1,0);
  if ((*(byte *)(param_1 + 0x2c0) & 1) == 0) {
    lVar2 = param_1 + 0x2c1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x2d0);
  }
  FUN_00f0e548(lVar1,lVar2,"full_splash_1k");
  if ((~*(uint *)(param_1 + 0x13c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0e628(param_1 + 0x1d0);
  return;
}




void FUN_00b2fd5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e00f8;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    operator_delete((void *)param_1[0x5a]);
  }
  param_1[0x3a] = &PTR_FUN_028266f0;
  param_1[0x51] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x54);
  FUN_00f13d08(param_1 + 0x3a);
  if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
    operator_delete((void *)param_1[0x37]);
  }
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b2fdfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e00f8;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    operator_delete((void *)param_1[0x5a]);
  }
  param_1[0x3a] = &PTR_FUN_028266f0;
  param_1[0x51] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x54);
  FUN_00f13d08(param_1 + 0x3a);
  if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
    operator_delete((void *)param_1[0x37]);
  }
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b2fea4(long *param_1)

{
  long lVar1;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b89cd8();
  *param_1 = (long)&PTR_FUN_027e0240;
  FUN_00f0e4a8(param_1 + 0x19);
  FUN_00f0e4a8(param_1 + 0x37);
  FUN_00f0e4a8(param_1 + 0x55);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x37,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  local_50 = DAT_03210f60;
  local_78 = thunk_FUN_00b3068c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  local_78 = thunk_FUN_00b3068c;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  FUN_00b2ffe0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2ffe0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 200;
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_00f0e628(lVar1);
  }
  lVar2 = param_1 + 0x1b8;
  if (*(long *)(param_1 + 0x288) != 0) {
    FUN_00f0e628(lVar2);
  }
  lVar3 = param_1 + 0x2a8;
  if (*(long *)(param_1 + 0x378) != 0) {
    FUN_00f0e628(lVar3);
  }
  uVar4 = FUN_00937f1c();
  if ((uVar4 & 1) != 0) {
    FUN_00f0e548(lVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x10;
    if ((*(float *)(param_1 + 0x118) != 0.5) || (*(float *)(param_1 + 0x11c) != 0.5)) {
      *(undefined8 *)(param_1 + 0x118) = 0x3f0000003f000000;
      FUN_0091ada4(lVar1);
    }
    FUN_00f0e548(lVar2,PTR_s_build___NeteaseLogo_png_02be35a0,"startupscreen_china_netease");
    *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffffb;
    if ((*(float *)(param_1 + 0x208) != 0.5) || (*(float *)(param_1 + 0x20c) != 0.5)) {
      *(undefined8 *)(param_1 + 0x208) = 0x3f0000003f000000;
      FUN_0091ada4(lVar2);
    }
    FUN_00f0e548(lVar3,PTR_s_build___NeteaseChinaPublishing_p_02be35a8,
                 "startupscreen_china_publishing");
    *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x32c) & 0xfffffffb;
    if ((*(float *)(param_1 + 0x2f8) != 0.5) || (*(float *)(param_1 + 0x2fc) != 0.5)) {
      *(undefined8 *)(param_1 + 0x2f8) = 0x3f0000003f000000;
      FUN_0091ada4(lVar3);
      return;
    }
  }
  return;
}




void thunk_FUN_00b2f254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dfef0;
  param_1[0x6d] = &PTR_FUN_027e00d0;
  FUN_00f0d3a4(param_1 + 0x158);
  FUN_00ed00e0(param_1 + 0xb1);
  FUN_00f13d08(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_028266f0;
  param_1[0x93] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7c);
  FUN_00b357ac(param_1);
  return;
}




void thunk_FUN_00b2f254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dfef0;
  param_1[0x6d] = &PTR_FUN_027e00d0;
  FUN_00f0d3a4(param_1 + 0x158);
  FUN_00ed00e0(param_1 + 0xb1);
  FUN_00f13d08(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_028266f0;
  param_1[0x93] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x96);
  FUN_00f13d08(param_1 + 0x7c);
  FUN_00b357ac(param_1);
  return;
}

