// functions/00cac — 12 functions
#include "libGameKindred.h"




void FUN_00cac27c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"id");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "id";
    local_50 = 0x100005;
    local_58 = 2;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "id";
      local_50 = 0x100005;
      local_58 = 2;
      puVar4 = (undefined8 *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
        puVar4 = (undefined8 *)*puVar4;
      }
      goto LAB_00cac304;
    }
  }
  puVar4 = (undefined8 *)&DAT_01e277f2;
LAB_00cac304:
  FUN_008fa54c(&local_60,puVar4);
  FUN_008fce60(param_2,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar2 = FUN_008fd190(param_1,"price");
  if ((*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) && ((int)param_1[2] == 3)) {
    local_60 = "price";
    local_50 = 0x100005;
    local_58 = 5;
    uVar3 = FUN_008feca4(param_1,&local_60);
    FUN_00cabf38(uVar3,param_2 + 0x18);
  }
  lVar2 = FUN_008fd190(param_1,"awardedCurrencies");
  if ((*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) && ((int)param_1[2] == 3)) {
    local_60 = "awardedCurrencies";
    local_50 = 0x100005;
    local_58 = 0x11;
    uVar3 = FUN_008feca4(param_1,&local_60);
    FUN_00cabf38(uVar3,param_2 + 0x30);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cac438(undefined8 param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  ulong *puVar4;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e6a594(param_2,"build://",8);
  if (iVar2 == 0) {
    FUN_008fa54c(param_1,param_2);
  }
  else {
    FUN_008fa54c(local_68,"build://");
    sVar3 = strlen(param_2);
    puVar4 = (ulong *)FUN_0090de84(local_68,param_2,sVar3);
    local_40 = (void *)puVar4[2];
    uStack_48 = puVar4[1];
    local_50 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    FUN_008fcdb8(param_1,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cac518(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar4 = FUN_0090d610(param_2,0,8,"build://",8);
  if (iVar4 == 0) {
    FUN_008fcdb8(param_1,param_2);
  }
  else {
    FUN_008fa54c(local_68,"build://");
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    puVar5 = (ulong *)FUN_0090de84(local_68,pbVar2,uVar1);
    local_40 = (void *)puVar5[2];
    uStack_48 = puVar5[1];
    local_50 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_008fcdb8(param_1,&local_50);
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00cac608(float *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_009bbfb0();
  FUN_009bd5c8();
  lVar1 = FUN_009b8134();
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar3 = *(float *)(lVar1 + 4) * 0.017453292;
  fVar2 = sinf(fVar3);
  fVar3 = cosf(fVar3);
  return fVar4 * fVar3 - fVar5 * fVar2;
}




float FUN_00cac688(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = sinf(param_1);
  fVar2 = cosf(param_1);
  return fVar2 * *param_2 - fVar1 * param_2[2];
}




void FUN_00cac6e4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cedce4();
  uVar2 = FUN_00d9e390();
  FUN_00d4d37c(auStack_50,uVar2);
  lVar3 = FUN_00d9e578(param_1,0x40001,auStack_50);
  if ((lVar3 == 0) && (lVar3 = FUN_00d9e578(param_1,0x40000,auStack_50), lVar3 == 0)) {
    FUN_00d9e458(param_1,0x8000000,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cac778(float param_1,float *param_2,float *param_3)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_019bbd38(-param_1,&local_48,&DAT_03218f78);
  fVar3 = param_2[4];
  fVar4 = param_2[5];
  fVar5 = param_2[3] * local_48 + fVar3 * fStack_44 + fVar4 * local_40;
  bVar2 = 1e-06 <= ABS(fVar5);
  if (bVar2) {
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    fVar5 = -(local_3c + local_48 * *param_2 + fStack_44 * fVar6 + local_40 * fVar7) / fVar5;
    *param_3 = *param_2 + param_2[3] * fVar5;
    param_3[1] = fVar6 + fVar3 * fVar5;
    param_3[2] = fVar7 + fVar4 * fVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00cac868(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cac778(0,param_1,&local_48);
  if ((uVar2 & 1) != 0) {
    local_58 = NEON_fmov(0x40f00000,4);
    local_50 = 0x40f00000;
    local_5c = 0.0;
    uVar2 = FUN_00ef0108(param_2,&local_48,&local_5c,0,&local_58);
    if ((uVar2 & 1) != 0) {
      FUN_009bbfb0();
      FUN_009bd5c8();
      puVar3 = (undefined8 *)FUN_009b8164();
      fVar6 = (float)*puVar3;
      fVar7 = (float)((ulong)*puVar3 >> 0x20);
      fVar8 = (local_5c * DAT_03218f78 * -fVar6 + local_5c * DAT_03218f7c * -fVar7) -
              local_5c * DAT_03218f80 * *(float *)(puVar3 + 1);
      local_68 = CONCAT44((float)((ulong)local_48 >> 0x20) - fVar7 * fVar8,
                          (float)local_48 - fVar6 * fVar8);
      local_60 = local_40 - fVar8 * *(float *)(puVar3 + 1);
      local_48 = local_68;
      local_40 = local_60;
      uVar2 = FUN_00ef0108(param_2,&local_48,(ulong)&local_48 | 4,&local_68,&local_58);
      if ((uVar2 & 1) != 0) {
        uVar4 = 1;
        *(float *)(param_3 + 1) = local_60;
        uVar5 = local_68;
        goto LAB_00cac998;
      }
    }
  }
  uVar4 = 0;
  *(undefined4 *)(param_3 + 1) = DAT_03218f38;
  uVar5 = DAT_03218f30;
LAB_00cac998:
  *param_3 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00cac9c4(undefined8 param_1)

{
  if (DAT_0313cfb8 == 0) {
    FUN_019889cc(&DAT_0313cfb8,1,DAT_02e3ef88,0);
  }
  FUN_00d76334(DAT_0313cfb8 + 0x88,param_1);
  return;
}




void FUN_00caca18(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  float __x;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = *param_2;
  local_50 = 0.0;
  FUN_0091ef04(&local_48,&local_58,1);
  local_68 = *param_2;
  local_60 = 0x3f800000;
  FUN_0091ef04(&local_58,&local_68,1);
  fVar3 = (float)local_58 - (float)local_48;
  fVar4 = (float)((ulong)local_58 >> 0x20) - (float)((ulong)local_48 >> 0x20);
  fVar5 = local_50 - local_40;
  *(float *)(param_1 + 1) = local_40;
  __x = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar2 = SQRT(__x);
  *param_1 = local_48;
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  *(float *)((long)param_1 + 0x14) = fVar5 / fVar2;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar4 / fVar2,fVar3 / fVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cacb1c(void)

{
  long lVar1;
  undefined1 local_38 [4];
  float local_34;
  float local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_01980738(local_30,(ulong)local_30 | 4,0,0);
  FUN_00f0036c(&local_34,local_38);
  local_30[0] = local_30[0] / local_34;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cacb98(uint param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 local_df8;
  ushort local_df0;
  undefined8 local_de8;
  ushort local_de0 [4];
  undefined8 local_dd8;
  undefined2 local_dd0;
  undefined8 local_dc8;
  undefined2 local_dc0;
  undefined8 local_db8;
  undefined2 local_db0;
  undefined8 local_da8;
  undefined2 local_da0;
  undefined8 local_d98;
  undefined2 local_d90;
  undefined8 local_d88;
  undefined2 local_d80;
  undefined8 local_d78;
  undefined2 local_d70;
  undefined8 local_d68;
  undefined2 local_d60;
  undefined8 local_d58;
  undefined2 local_d50;
  undefined8 local_d48;
  undefined2 local_d40;
  undefined8 local_d38;
  undefined2 local_d30;
  undefined8 local_d28;
  undefined2 local_d20;
  undefined8 local_d18;
  undefined2 local_d10;
  undefined8 local_d08;
  undefined2 local_d00;
  undefined8 local_cf8;
  undefined2 local_cf0;
  undefined8 local_ce8;
  undefined2 local_ce0;
  undefined8 local_cd8;
  undefined2 local_cd0;
  undefined8 local_cc8;
  undefined2 local_cc0;
  undefined8 local_cb8;
  undefined2 local_cb0;
  undefined8 local_ca8;
  undefined2 local_ca0;
  undefined8 local_c98;
  undefined2 local_c90;
  undefined8 local_c88;
  undefined2 local_c80;
  undefined8 local_c78;
  undefined2 local_c70;
  undefined8 local_c68;
  undefined2 local_c60;
  undefined8 local_c58;
  undefined2 local_c50;
  undefined8 local_c48;
  undefined2 local_c40;
  undefined8 local_c38;
  undefined2 local_c30;
  undefined8 local_c28;
  undefined2 local_c20;
  undefined8 local_c18;
  undefined2 local_c10;
  undefined8 local_c08;
  undefined2 local_c00;
  undefined8 local_bf8;
  undefined2 local_bf0;
  undefined8 local_be8;
  undefined2 local_be0;
  undefined8 local_bd8;
  undefined2 local_bd0;
  undefined8 local_bc8;
  undefined2 local_bc0;
  undefined8 local_bb8;
  undefined2 local_bb0;
  undefined8 local_ba8;
  undefined2 local_ba0;
  undefined8 local_b98;
  undefined2 local_b90;
  undefined8 local_b88;
  undefined2 local_b80;
  undefined8 local_b78;
  undefined2 local_b70;
  undefined8 local_b68;
  undefined2 local_b60;
  undefined8 local_b58;
  undefined2 local_b50;
  undefined8 local_b48;
  undefined2 local_b40;
  undefined8 local_b38;
  undefined2 local_b30;
  undefined8 local_b28;
  undefined2 local_b20;
  undefined8 local_b18;
  undefined2 local_b10;
  undefined8 local_b08;
  undefined2 local_b00;
  undefined8 local_af8;
  undefined2 local_af0;
  undefined8 local_ae8;
  undefined2 local_ae0;
  undefined8 local_ad8;
  undefined2 local_ad0;
  undefined8 local_ac8;
  undefined2 local_ac0;
  undefined8 local_ab8;
  undefined2 local_ab0;
  undefined8 local_aa8;
  undefined2 local_aa0;
  undefined8 local_a98;
  undefined2 local_a90;
  undefined8 local_a88;
  undefined2 local_a80;
  undefined8 local_a78;
  undefined2 local_a70;
  undefined8 local_a68;
  undefined2 local_a60;
  undefined8 local_a58;
  undefined2 local_a50;
  undefined8 local_a48;
  undefined2 local_a40;
  undefined8 local_a38;
  undefined2 local_a30;
  undefined8 local_a28;
  undefined2 local_a20;
  undefined8 local_a18;
  undefined2 local_a10;
  undefined8 local_a08;
  undefined2 local_a00;
  undefined8 local_9f8;
  undefined2 local_9f0;
  undefined8 local_9e8;
  undefined2 local_9e0;
  undefined8 local_9d8;
  undefined2 local_9d0;
  undefined8 local_9c8;
  undefined2 local_9c0;
  undefined8 local_9b8;
  undefined2 local_9b0;
  undefined8 local_9a8;
  undefined2 local_9a0;
  undefined8 local_998;
  undefined2 local_990;
  undefined8 local_988;
  undefined2 local_980;
  undefined8 local_978;
  undefined2 local_970;
  undefined8 local_968;
  undefined2 local_960;
  undefined8 local_958;
  undefined2 local_950;
  undefined8 local_948;
  undefined2 local_940;
  undefined8 local_938;
  undefined2 local_930;
  undefined8 local_928;
  undefined2 local_920;
  undefined8 local_918;
  undefined2 local_910;
  undefined8 local_908;
  undefined2 local_900;
  undefined8 local_8f8;
  undefined2 local_8f0;
  undefined8 local_8e8;
  undefined2 local_8e0;
  undefined8 local_8d8;
  undefined2 local_8d0;
  undefined8 local_8c8;
  undefined2 local_8c0;
  undefined8 local_8b8;
  undefined2 local_8b0;
  undefined8 local_8a8;
  undefined2 local_8a0;
  undefined8 local_898;
  undefined2 local_890;
  undefined8 local_888;
  undefined2 local_880;
  undefined8 local_878;
  undefined2 local_870;
  undefined8 local_868;
  undefined2 local_860;
  undefined8 local_858;
  undefined2 local_850;
  undefined8 local_848;
  undefined2 local_840;
  undefined8 local_838;
  undefined2 local_830;
  undefined8 local_828;
  undefined2 local_820;
  undefined8 local_818;
  undefined2 local_810;
  undefined8 local_808;
  undefined2 local_800;
  undefined8 local_7f8;
  undefined2 local_7f0;
  undefined8 local_7e8;
  undefined2 local_7e0;
  undefined8 local_7d8;
  undefined2 local_7d0;
  undefined8 local_7c8;
  undefined2 local_7c0;
  undefined8 local_7b8;
  undefined2 local_7b0;
  undefined8 local_7a8;
  undefined2 local_7a0;
  undefined8 local_798;
  undefined2 local_790;
  undefined8 local_788;
  undefined2 local_780;
  undefined8 local_778;
  undefined2 local_770;
  undefined8 local_768;
  undefined2 local_760;
  undefined8 local_758;
  undefined2 local_750;
  undefined8 local_748;
  undefined2 local_740;
  undefined8 local_738;
  undefined2 local_730;
  undefined8 local_728;
  undefined2 local_720;
  undefined8 local_718;
  undefined2 local_710;
  undefined8 local_708;
  undefined2 local_700;
  undefined8 local_6f8;
  undefined2 local_6f0;
  undefined8 local_6e8;
  undefined2 local_6e0;
  undefined8 local_6d8;
  undefined2 local_6d0;
  undefined8 local_6c8;
  undefined2 local_6c0;
  undefined8 local_6b8;
  undefined2 local_6b0;
  undefined8 local_6a8;
  undefined2 local_6a0;
  undefined8 local_698;
  undefined2 local_690;
  undefined8 local_688;
  undefined2 local_680;
  undefined8 local_678;
  undefined2 local_670;
  undefined8 local_668;
  undefined2 local_660;
  undefined8 local_658;
  undefined2 local_650;
  undefined8 local_648;
  undefined2 local_640;
  undefined8 local_638;
  undefined2 local_630;
  undefined8 local_628;
  undefined2 local_620;
  undefined8 local_618;
  undefined2 local_610;
  undefined8 local_608;
  undefined2 local_600;
  undefined8 local_5f8;
  undefined2 local_5f0;
  undefined8 local_5e8;
  undefined2 local_5e0;
  undefined8 local_5d8;
  undefined2 local_5d0;
  undefined8 local_5c8;
  undefined2 local_5c0;
  undefined8 local_5b8;
  undefined2 local_5b0;
  undefined8 local_5a8;
  undefined2 local_5a0;
  undefined8 local_598;
  undefined2 local_590;
  undefined8 local_588;
  undefined2 local_580;
  undefined8 local_578;
  undefined2 local_570;
  undefined8 local_568;
  undefined2 local_560;
  undefined8 local_558;
  undefined2 local_550;
  undefined8 local_548;
  undefined2 local_540;
  undefined8 local_538;
  undefined2 local_530;
  undefined8 local_528;
  undefined2 local_520;
  undefined8 local_518;
  undefined2 local_510;
  undefined8 local_508;
  undefined2 local_500;
  undefined8 local_4f8;
  undefined2 local_4f0;
  undefined8 local_4e8;
  undefined2 local_4e0;
  undefined8 local_4d8;
  undefined2 local_4d0;
  undefined8 local_4c8;
  undefined2 local_4c0;
  undefined8 local_4b8;
  undefined2 local_4b0;
  undefined8 local_4a8;
  undefined2 local_4a0;
  undefined8 local_498;
  undefined2 local_490;
  undefined8 local_488;
  undefined2 local_480;
  undefined8 local_478;
  undefined2 local_470;
  undefined8 local_468;
  undefined2 local_460;
  undefined8 local_458;
  undefined2 local_450;
  undefined8 local_448;
  undefined2 local_440;
  undefined8 local_438;
  undefined2 local_430;
  undefined8 local_428;
  undefined2 local_420;
  undefined8 local_418;
  undefined2 local_410;
  undefined8 local_408;
  undefined2 local_400;
  undefined8 local_3f8;
  undefined2 local_3f0;
  undefined8 local_3e8;
  undefined2 local_3e0;
  undefined8 local_3d8;
  undefined2 local_3d0;
  undefined8 local_3c8;
  undefined2 local_3c0;
  undefined8 local_3b8;
  undefined2 local_3b0;
  undefined8 local_3a8;
  undefined2 local_3a0;
  undefined8 local_398;
  undefined2 local_390;
  undefined8 local_388;
  undefined2 local_380;
  undefined8 local_378;
  undefined2 local_370;
  undefined8 local_368;
  undefined2 local_360;
  undefined8 local_358;
  undefined2 local_350;
  undefined8 local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined2 local_330;
  undefined8 local_328;
  undefined2 local_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined8 local_308;
  undefined2 local_300;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined2 local_2a0;
  undefined8 local_298;
  undefined2 local_290;
  undefined8 local_288;
  undefined2 local_280;
  undefined8 local_278;
  undefined2 local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_248;
  undefined2 local_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined8 local_218;
  undefined2 local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined2 local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 *local_68;
  undefined2 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_df8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_00",0);
  local_df0 = 6;
  local_de8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_01",0);
  local_de0[0] = 6;
  local_dd8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_02",0);
  local_dd0 = 6;
  local_dc8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_03",0);
  local_dc0 = 6;
  local_db8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_04",0);
  local_db0 = 6;
  local_da8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_05",0);
  local_da0 = 6;
  local_d98 = FUN_00e6ce7c("LOADING_SCREEN_TIP_06",0);
  local_d90 = 0x44;
  local_d88 = FUN_00e6ce7c("LOADING_SCREEN_TIP_07",0);
  local_d80 = 0x7f;
  local_d78 = FUN_00e6ce7c("LOADING_SCREEN_TIP_08",0);
  local_d70 = 4;
  local_d68 = FUN_00e6ce7c("LOADING_SCREEN_TIP_09",0);
  local_d60 = 4;
  local_d58 = FUN_00e6ce7c("LOADING_SCREEN_TIP_10",0);
  local_d50 = 6;
  local_d48 = FUN_00e6ce7c("LOADING_SCREEN_TIP_11",0);
  local_d40 = 6;
  local_d38 = FUN_00e6ce7c("LOADING_SCREEN_TIP_12",0);
  local_d30 = 6;
  local_d28 = FUN_00e6ce7c("LOADING_SCREEN_TIP_13",0);
  local_d20 = 6;
  local_d18 = FUN_00e6ce7c("LOADING_SCREEN_TIP_14",0);
  local_d10 = 6;
  local_d08 = FUN_00e6ce7c("LOADING_SCREEN_TIP_15",0);
  local_d00 = 6;
  local_cf8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_16",0);
  local_cf0 = 6;
  local_ce8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_17",0);
  local_ce0 = 6;
  local_cd8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_18",0);
  local_cd0 = 6;
  local_cc8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_19",0);
  local_cc0 = 4;
  local_cb8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_20",0);
  local_cb0 = 6;
  local_ca8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_21",0);
  local_ca0 = 4;
  local_c98 = FUN_00e6ce7c("LOADING_SCREEN_TIP_22",0);
  local_c90 = 6;
  local_c88 = FUN_00e6ce7c("LOADING_SCREEN_TIP_23",0);
  local_c80 = 6;
  local_c78 = FUN_00e6ce7c("LOADING_SCREEN_TIP_24",0);
  local_c70 = 6;
  local_c68 = FUN_00e6ce7c("LOADING_SCREEN_TIP_25",0);
  local_c60 = 4;
  local_c58 = FUN_00e6ce7c("LOADING_SCREEN_TIP_26",0);
  local_c50 = 6;
  local_c48 = FUN_00e6ce7c("LOADING_SCREEN_TIP_27",0);
  local_c40 = 6;
  local_c38 = FUN_00e6ce7c("LOADING_SCREEN_TIP_28",0);
  local_c30 = 6;
  local_c28 = FUN_00e6ce7c("LOADING_SCREEN_TIP_29",0);
  local_c20 = 6;
  local_c18 = FUN_00e6ce7c("LOADING_SCREEN_TIP_30",0);
  local_c10 = 6;
  local_c08 = FUN_00e6ce7c("LOADING_SCREEN_TIP_31",0);
  local_c00 = 6;
  local_bf8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_32",0);
  local_bf0 = 4;
  local_be8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_33",0);
  local_be0 = 6;
  local_bd8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_34",0);
  local_bd0 = 4;
  local_bc8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_35",0);
  local_bc0 = 4;
  local_bb8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_36",0);
  local_bb0 = 6;
  local_ba8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_37",0);
  local_ba0 = 0x44;
  local_b98 = FUN_00e6ce7c("LOADING_SCREEN_TIP_38",0);
  local_b90 = 6;
  local_b88 = FUN_00e6ce7c("LOADING_SCREEN_TIP_39",0);
  local_b80 = 6;
  local_b78 = FUN_00e6ce7c("LOADING_SCREEN_TIP_40",0);
  local_b70 = 6;
  local_b68 = FUN_00e6ce7c("LOADING_SCREEN_TIP_41",0);
  local_b60 = 4;
  local_b58 = FUN_00e6ce7c("LOADING_SCREEN_TIP_42",0);
  local_b50 = 6;
  local_b48 = FUN_00e6ce7c("LOADING_SCREEN_TIP_43",0);
  local_b40 = 6;
  local_b38 = FUN_00e6ce7c("LOADING_SCREEN_TIP_44",0);
  local_b30 = 4;
  local_b28 = FUN_00e6ce7c("LOADING_SCREEN_TIP_45",0);
  local_b20 = 6;
  local_b18 = FUN_00e6ce7c("LOADING_SCREEN_TIP_46",0);
  local_b10 = 6;
  local_b08 = FUN_00e6ce7c("LOADING_SCREEN_TIP_47",0);
  local_b00 = 6;
  local_af8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_48",0);
  local_af0 = 4;
  local_ae8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_49",0);
  local_ae0 = 4;
  local_ad8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_50",0);
  local_ad0 = 6;
  local_ac8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_51",0);
  local_ac0 = 4;
  local_ab8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_52",0);
  local_ab0 = 0x44;
  local_aa8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_53",0);
  local_aa0 = 6;
  local_a98 = FUN_00e6ce7c("LOADING_SCREEN_TIP_54",0);
  local_a90 = 6;
  local_a88 = FUN_00e6ce7c("LOADING_SCREEN_TIP_55",0);
  local_a80 = 0x46;
  local_a78 = FUN_00e6ce7c("LOADING_SCREEN_TIP_56",0);
  local_a70 = 6;
  local_a68 = FUN_00e6ce7c("LOADING_SCREEN_TIP_57",0);
  local_a60 = 6;
  local_a58 = FUN_00e6ce7c("LOADING_SCREEN_TIP_58",0);
  local_a50 = 6;
  local_a48 = FUN_00e6ce7c("LOADING_SCREEN_TIP_59",0);
  local_a40 = 6;
  local_a38 = FUN_00e6ce7c("LOADING_SCREEN_TIP_60",0);
  local_a30 = 6;
  local_a28 = FUN_00e6ce7c("LOADING_SCREEN_TIP_61",0);
  local_a20 = 6;
  local_a18 = FUN_00e6ce7c("LOADING_SCREEN_TIP_62",0);
  local_a10 = 6;
  local_a08 = FUN_00e6ce7c("LOADING_SCREEN_TIP_63",0);
  local_a00 = 6;
  local_9f8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_64",0);
  local_9f0 = 0;
  local_9e8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_65",0);
  local_9e0 = 0;
  local_9d8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_66",0);
  local_9d0 = 6;
  local_9c8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_67",0);
  local_9c0 = 6;
  local_9b8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_68",0);
  local_9b0 = 6;
  local_9a8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_69",0);
  local_9a0 = 6;
  local_998 = FUN_00e6ce7c("LOADING_SCREEN_TIP_70",0);
  local_990 = 6;
  local_988 = FUN_00e6ce7c("LOADING_SCREEN_TIP_71",0);
  local_980 = 6;
  local_978 = FUN_00e6ce7c("LOADING_SCREEN_TIP_72",0);
  local_970 = 6;
  local_968 = FUN_00e6ce7c("LOADING_SCREEN_TIP_74",0);
  local_960 = 6;
  local_958 = FUN_00e6ce7c("LOADING_SCREEN_TIP_75",0);
  local_950 = 6;
  local_948 = FUN_00e6ce7c("LOADING_SCREEN_TIP_76",0);
  local_940 = 6;
  local_938 = FUN_00e6ce7c("LOADING_SCREEN_TIP_77",0);
  local_930 = 6;
  local_928 = FUN_00e6ce7c("LOADING_SCREEN_TIP_78",0);
  local_920 = 6;
  local_918 = FUN_00e6ce7c("LOADING_SCREEN_TIP_79",0);
  local_910 = 1;
  local_908 = FUN_00e6ce7c("LOADING_SCREEN_TIP_80",0);
  local_900 = 1;
  local_8f8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_81",0);
  local_8f0 = 1;
  local_8e8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_82",0);
  local_8e0 = 1;
  local_8d8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_83",0);
  local_8d0 = 1;
  local_8c8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_84",0);
  local_8c0 = 1;
  local_8b8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_85",0);
  local_8b0 = 1;
  local_8a8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_86",0);
  local_8a0 = 1;
  local_898 = FUN_00e6ce7c("LOADING_SCREEN_TIP_87",0);
  local_890 = 0x16;
  local_888 = FUN_00e6ce7c("LOADING_SCREEN_TIP_88",0);
  local_880 = 0x7f;
  local_878 = FUN_00e6ce7c("LOADING_SCREEN_TIP_89",0);
  local_870 = 0x7f;
  local_868 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_90",0);
  local_860 = 0x7f;
  local_858 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_91",0);
  local_850 = 0x7f;
  local_848 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_92",0);
  local_840 = 0x7f;
  local_838 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_93",0);
  local_830 = 0x7f;
  local_828 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_94",0);
  local_820 = 0x7f;
  local_818 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_95",0);
  local_810 = 0x7f;
  local_808 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_96",0);
  local_800 = 0x7f;
  local_7f8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_97",0);
  local_7f0 = 0x7f;
  local_7e8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_98",0);
  local_7e0 = 0x7f;
  local_7d8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_99",0);
  local_7d0 = 0x7f;
  local_7c8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_100",0);
  local_7c0 = 0x7f;
  local_7b8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_101",0);
  local_7b0 = 0x7f;
  local_7a8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_102",0);
  local_7a0 = 0x7f;
  local_798 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_103",0);
  local_790 = 0x7f;
  local_788 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_104",0);
  local_780 = 0x7f;
  local_778 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_105",0);
  local_770 = 0x7f;
  local_768 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_106",0);
  local_760 = 0x7f;
  local_758 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_107",0);
  local_750 = 0x7f;
  local_748 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_108",0);
  local_740 = 0x7f;
  local_738 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_109",0);
  local_730 = 0x7f;
  local_728 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_110",0);
  local_720 = 0x7f;
  local_718 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_111",0);
  local_710 = 0x7f;
  local_708 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_112",0);
  local_700 = 0x7f;
  local_6f8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_113",0);
  local_6f0 = 0x7f;
  local_6e8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_114",0);
  local_6e0 = 0x7f;
  local_6d8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_115",0);
  local_6d0 = 0x7f;
  local_6c8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_116",0);
  local_6c0 = 0x7f;
  local_6b8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_117",0);
  local_6b0 = 0x7f;
  local_6a8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_118",0);
  local_6a0 = 0x7f;
  local_698 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_119",0);
  local_690 = 0x7f;
  local_688 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_120",0);
  local_680 = 0x7f;
  local_678 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_121",0);
  local_670 = 0x7f;
  local_668 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_122",0);
  local_660 = 0x7f;
  local_658 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_123",0);
  local_650 = 0x7f;
  local_648 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_124",0);
  local_640 = 0x7f;
  local_638 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_125",0);
  local_630 = 0x7f;
  local_628 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_126",0);
  local_620 = 0x7f;
  local_618 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_127",0);
  local_610 = 0x7f;
  local_608 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_128",0);
  local_600 = 0x7f;
  local_5f8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_129",0);
  local_5f0 = 0x7f;
  local_5e8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_130",0);
  local_5e0 = 0x7f;
  local_5d8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_131",0);
  local_5d0 = 0x7f;
  local_5c8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_132",0);
  local_5c0 = 0x7f;
  local_5b8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_133",0);
  local_5b0 = 0x7f;
  local_5a8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_134",0);
  local_5a0 = 0x7f;
  local_598 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_135",0);
  local_590 = 0x7f;
  local_588 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_136",0);
  local_580 = 0x7f;
  local_578 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_137",0);
  local_570 = 0x7f;
  local_568 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_138",0);
  local_560 = 0x7f;
  local_558 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_139",0);
  local_550 = 0x7f;
  local_548 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_140",0);
  local_540 = 0x7f;
  local_538 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_141",0);
  local_530 = 0x7f;
  local_528 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_142",0);
  local_520 = 0x7f;
  local_518 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_143",0);
  local_510 = 0x7f;
  local_508 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_144",0);
  local_500 = 0x7f;
  local_4f8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_145",0);
  local_4f0 = 0x7f;
  local_4e8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_146",0);
  local_4e0 = 0x7f;
  local_4d8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_147",0);
  local_4d0 = 0x7f;
  local_4c8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_148",0);
  local_4c0 = 0x7f;
  local_4b8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_149",0);
  local_4b0 = 0x7f;
  local_4a8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_150",0);
  local_4a0 = 0x7f;
  local_498 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_151",0);
  local_490 = 0x7f;
  local_488 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_152",0);
  local_480 = 0x7f;
  local_478 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_153",0);
  local_470 = 0x7f;
  local_468 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_154",0);
  local_460 = 0x7f;
  local_458 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_155",0);
  local_450 = 0x7f;
  local_448 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_156",0);
  local_440 = 0x7f;
  local_438 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_157",0);
  local_430 = 0x7f;
  local_428 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_158",0);
  local_420 = 0x7f;
  local_418 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_159",0);
  local_410 = 0x7f;
  local_408 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_160",0);
  local_400 = 0x7f;
  local_3f8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_161",0);
  local_3f0 = 0x7f;
  local_3e8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_162",0);
  local_3e0 = 0x7f;
  local_3d8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_163",0);
  local_3d0 = 0x7f;
  local_3c8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_164",0);
  local_3c0 = 0x7f;
  local_3b8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_165",0);
  local_3b0 = 0x7f;
  local_3a8 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_166",0);
  local_3a0 = 0x7f;
  local_398 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_167",0);
  local_390 = 0x7f;
  local_388 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_168",0);
  local_380 = 0x7f;
  local_378 = FUN_00e6ce7c("LORE_LOADING_SCREEN_TIP_169",0);
  local_370 = 0x7f;
  local_368 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_170",0);
  local_360 = 0x7f;
  local_358 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_171",0);
  local_350 = 0x7f;
  local_348 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_172",0);
  local_340 = 0x7f;
  local_338 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_173",0);
  local_330 = 0x7f;
  local_328 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_174",0);
  local_320 = 0x7f;
  local_318 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_175",0);
  local_310 = 0x7f;
  local_308 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_176",0);
  local_300 = 0x7f;
  local_2f8 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_177",0);
  local_2f0 = 0x7f;
  local_2e8 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_178",0);
  local_2e0 = 0x7f;
  local_2d8 = FUN_00e6ce7c("COMMUNITY_LOADING_SCREEN_TIP_179",0);
  local_2d0 = 0x7f;
  local_2c8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_1",0);
  local_2c0 = 0x40;
  local_2b8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_2",0);
  local_2b0 = 0x40;
  local_2a8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_3",0);
  local_2a0 = 0x40;
  local_298 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_4",0);
  local_290 = 0x40;
  local_288 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_5",0);
  local_280 = 0x40;
  local_278 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_6",0);
  local_270 = 0x40;
  local_268 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_7",0);
  local_260 = 0x40;
  local_258 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_8",0);
  local_250 = 0x40;
  local_248 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_9",0);
  local_240 = 0x40;
  local_238 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_10",0);
  local_230 = 0x40;
  local_228 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_11",0);
  local_220 = 0x40;
  local_218 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_12",0);
  local_210 = 0x40;
  local_208 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_13",0);
  local_200 = 0x40;
  local_1f8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_14",0);
  local_1f0 = 0x40;
  local_1e8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_15",0);
  local_1e0 = 0x40;
  local_1d8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_16",0);
  local_1d0 = 0x40;
  local_1c8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_17",0);
  local_1c0 = 0x40;
  local_1b8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_18",0);
  local_1b0 = 0x40;
  local_1a8 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_19",0);
  local_1a0 = 0x40;
  local_198 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_20",0);
  local_190 = 0x40;
  local_188 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_21",0);
  local_180 = 0x40;
  local_178 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_22",0);
  local_170 = 0x40;
  local_168 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_23",0);
  local_160 = 0x40;
  local_158 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_24",0);
  local_150 = 0x40;
  local_148 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_24",0);
  local_140 = 0x40;
  local_138 = FUN_00e6ce7c("5V5_LOADING_SCREEN_TIP_25",0);
  local_130 = 0x40;
  local_128 = FUN_00e6ce7c("LOADING_SCREEN_TIP_88",0);
  local_120 = 0;
  local_118 = FUN_00e6ce7c("LOADING_SCREEN_TIP_89",0);
  local_110 = 0;
  local_108 = FUN_00e6ce7c("LOADING_SCREEN_TIP_90",0);
  local_100 = 0;
  local_f8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_91",0);
  local_f0 = 0;
  local_e8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_92",0);
  local_e0 = 0;
  local_d8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_93",0);
  local_d0 = 0;
  local_c8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_94",0);
  local_c0 = 0;
  local_b8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_95",0);
  local_b0 = 0;
  local_a8 = FUN_00e6ce7c("LOADING_SCREEN_TIP_96",0);
  local_a0 = 0;
  local_98 = FUN_00e6ce7c("LOADING_SCREEN_TIP_97",0);
  local_90 = 0;
  local_88 = FUN_00e6ce7c("LOADING_SCREEN_TIP_98",0);
  local_80 = 0;
  local_78 = FUN_00e6ce7c("LOADING_SCREEN_TIP_99",0);
  uVar4 = local_df0;
  local_70 = 0;
  uVar12 = 0;
  local_60 = 0;
  local_68 = &DAT_03210450;
  if (param_1 < 0x34) {
    uVar12 = *(uint *)(&DAT_01bc1870 + (long)(int)param_1 * 4);
  }
  uVar11 = (uint)local_df0;
  uVar9 = (uint)local_df0;
  if (uVar9 != 0) {
    iVar13 = 0;
    puVar8 = local_de0;
    do {
      uVar1 = uVar12 & uVar9;
      uVar9 = (uint)*puVar8;
      if (uVar1 != 0) {
        iVar13 = iVar13 + 1;
      }
      puVar8 = puVar8 + 8;
    } while (uVar9 != 0);
    if ((iVar13 != 0) && (iVar5 = rand(), uVar4 != 0)) {
      iVar13 = (iVar13 - 1U & ((int)(iVar13 - 1U) >> 0x1f ^ 0xffffffffU)) + 1;
      iVar2 = 0;
      if (iVar13 != 0) {
        iVar2 = iVar5 / iVar13;
      }
      iVar7 = 0;
      puVar10 = &local_df8;
      do {
        if ((uVar12 & uVar11) != 0) {
          if (iVar7 == iVar5 - iVar2 * iVar13) {
            FUN_00910394(param_2,*puVar10);
            uVar6 = 1;
            goto LAB_00cae0e4;
          }
          iVar7 = iVar7 + 1;
        }
        uVar11 = (uint)*(ushort *)(puVar10 + 3);
        puVar10 = puVar10 + 2;
      } while (uVar11 != 0);
    }
  }
  uVar6 = 0;
LAB_00cae0e4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

