// functions/01aff — 7 functions
#include "libGameKindred.h"




undefined8 FUN_01aff1d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x1028) = 0;
  *(undefined8 *)(lVar1 + 0x1020) = 0;
  *(undefined4 *)(lVar1 + 0x1030) = 0;
  *(undefined8 *)(lVar1 + 0x1034) = 1;
  gost_init(lVar1,Gost28147_CryptoProParamSetA);
  return 1;
}




undefined8 FUN_01aff20c(long param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar3 + 0x103c) == 0) {
    ERR_GOST_error(0x73,0x74,"gost_crypt.c",0x21b);
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x1038);
  uVar2 = (ulong)(int)uVar1;
  if (uVar1 != 0) {
    if ((param_3 != 0) && (uVar1 < 8)) {
      puVar4 = param_2;
      do {
        param_2 = puVar4 + 1;
        param_3 = param_3 - 1;
        *(undefined1 *)(lVar3 + 0x1028 + uVar2) = *puVar4;
        uVar2 = uVar2 + 1;
        if (param_3 == 0) break;
        puVar4 = param_2;
      } while (uVar2 < 8);
    }
    if (uVar2 != 8) {
      *(int *)(lVar3 + 0x1038) = (int)uVar2;
      return 1;
    }
    if ((*(int *)(lVar3 + 0x1034) != 0) && (*(int *)(lVar3 + 0x1030) == 0x400)) {
      cryptopro_key_meshing(lVar3,auStack_58);
    }
    mac_block(lVar3,lVar3 + 0x1020,lVar3 + 0x1028);
    *(uint *)(lVar3 + 0x1030) = (*(uint *)(lVar3 + 0x1030) & 0x3ff) + 8;
  }
  if (8 < param_3) {
    uVar2 = param_3 - 9 & 0xfffffffffffffff8;
    lVar5 = param_3 - 8;
    puVar4 = param_2;
    do {
      if ((*(int *)(lVar3 + 0x1034) != 0) && (*(int *)(lVar3 + 0x1030) == 0x400)) {
        cryptopro_key_meshing(lVar3,auStack_58);
      }
      mac_block(lVar3,lVar3 + 0x1020,puVar4);
      param_3 = param_3 - 8;
      puVar4 = puVar4 + 8;
      *(uint *)(lVar3 + 0x1030) = (*(uint *)(lVar3 + 0x1030) & 0x3ff) + 8;
    } while (8 < param_3);
    param_2 = param_2 + uVar2 + 8;
    param_3 = lVar5 - uVar2;
  }
  if (param_3 != 0) {
    memcpy((void *)(lVar3 + 0x1028),param_2,param_3);
  }
  *(int *)(lVar3 + 0x1038) = (int)param_3;
  return 1;
}




undefined8 FUN_01aff3a4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar2 + 0x103c) == 0) {
    ERR_GOST_error(0x8c,0x74,"gost_crypt.c",0x239);
    return 0;
  }
  if (*(int *)(lVar2 + 0x1030) == 0) {
    if (*(int *)(lVar2 + 0x1038) == 0) goto LAB_01aff49c;
    local_38 = 0;
    FUN_01aff20c(param_1,&local_38,8);
    iVar1 = *(int *)(lVar2 + 0x1038);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x1038);
  }
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      memset((void *)(lVar2 + iVar1 + 0x1028),0,(ulong)(7 - iVar1) + 1);
    }
    if ((*(int *)(lVar2 + 0x1034) != 0) && (*(int *)(lVar2 + 0x1030) == 0x400)) {
      cryptopro_key_meshing(lVar2,&local_38);
    }
    mac_block(lVar2,lVar2 + 0x1020,lVar2 + 0x1028);
    *(uint *)(lVar2 + 0x1030) = (*(uint *)(lVar2 + 0x1030) & 0x3ff) + 8;
  }
LAB_01aff49c:
  get_mac(lVar2 + 0x1020,0x20,param_2);
  return 1;
}




undefined8 FUN_01aff4c4(long param_1,long param_2)

{
  memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),0x1040);
  return 1;
}




undefined8 FUN_01aff4e8(long param_1)

{
  memset(*(void **)(param_1 + 0x18),0,0x1040);
  return 1;
}




void FUN_01aff658(long param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0x400) goto LAB_01aff69c;
    cryptopro_key_meshing(param_1 + 0xc,param_2);
  }
  iVar2 = *(int *)(param_1 + 4);
LAB_01aff69c:
  if (iVar2 == 0) {
    gostcrypt(param_1 + 0xc,param_2,&local_38);
    uVar3 = local_38 & 0xff;
    uVar7 = (uint)local_38._1_1_;
    uVar9 = (uint)local_38._2_1_;
    uVar5 = (uint)local_38._3_1_;
    uVar4 = (uint)local_38._4_1_;
    uVar6 = (uint)local_38._5_1_;
    uVar8 = (uint)local_38._6_1_;
  }
  else {
    uVar3 = *param_2;
    uVar7 = (uint)(uVar3 >> 8);
    uVar9 = (uint)(uVar3 >> 0x10);
    uVar5 = (uint)(uVar3 >> 0x18);
    uVar4 = (uint)(uVar3 >> 0x20);
    uVar6 = uVar4 >> 8;
    uVar8 = (uint)(ushort)(uVar3 >> 0x30);
    local_38._7_1_ = (byte)(uVar3 >> 0x38);
  }
  uVar4 = uVar4 & 0xff | (uVar6 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | (uint)local_38._7_1_ << 0x18
  ;
  iVar2 = ((uint)uVar3 & 0xff | (uVar7 & 0xff) << 8 | (uVar9 & 0xff) << 0x10 | uVar5 << 0x18) +
          0x1010101;
  iVar1 = 0x1010105;
  if (uVar4 < 0xfefefefc) {
    iVar1 = 0x1010104;
  }
  iVar1 = iVar1 + uVar4;
  local_38._0_3_ = (undefined3)iVar2;
  local_38 = CONCAT17((char)((uint)iVar1 >> 0x18),
                      CONCAT16((char)((uint)iVar1 >> 0x10),
                               CONCAT15((char)((uint)iVar1 >> 8),
                                        (int5)CONCAT53(CONCAT14((char)iVar1,iVar2) >> 0x18,
                                                       (undefined3)local_38))));
  *param_2 = local_38;
  gostcrypt(param_1 + 0xc,&local_38,param_3);
  *(uint *)(param_1 + 4) = (*(uint *)(param_1 + 4) & 0x3ff) + 8;
  return;
}




void FUN_01affab4(undefined8 param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  byte *pbVar14;
  byte bVar15;
  byte bVar16;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte local_f0;
  byte local_ef;
  byte local_ee;
  byte local_ed;
  byte local_ec;
  byte local_eb;
  byte local_ea;
  byte local_e9;
  byte local_e8;
  byte local_e7;
  byte local_e6;
  byte local_e5;
  byte local_e4;
  byte local_e3;
  byte local_e2;
  byte local_e1;
  byte local_e0;
  byte local_df;
  byte local_de;
  byte local_dd;
  byte local_dc;
  byte local_db;
  byte local_da;
  byte local_d9;
  byte local_d8;
  byte local_d7;
  byte local_d6;
  byte local_d5;
  byte local_d4;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  byte local_d0;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  undefined1 auStack_c0 [8];
  byte bStack_b8;
  byte bStack_b7;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  byte bStack_b2;
  byte bStack_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [2];
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  
  local_f0 = *param_3 ^ *param_2;
  pbVar9 = param_2 + 8;
  local_ec = param_3[1] ^ param_2[1];
  local_e8 = param_3[2] ^ param_2[2];
  local_e4 = param_3[3] ^ param_2[3];
  local_e0 = param_3[4] ^ param_2[4];
  local_dc = param_3[5] ^ param_2[5];
  local_d8 = param_3[6] ^ param_2[6];
  local_d4 = param_3[7] ^ param_2[7];
  local_ef = param_3[8] ^ *pbVar9;
  local_eb = param_3[9] ^ param_2[9];
  local_e7 = param_3[10] ^ param_2[10];
  local_e3 = param_3[0xb] ^ param_2[0xb];
  local_df = param_3[0xc] ^ param_2[0xc];
  local_d3 = param_3[0xf] ^ param_2[0xf];
  local_ee = param_3[0x10] ^ param_2[0x10];
  local_ea = param_3[0x11] ^ param_2[0x11];
  local_e6 = param_3[0x12] ^ param_2[0x12];
  local_db = param_3[0xd] ^ param_2[0xd];
  local_d7 = param_3[0xe] ^ param_2[0xe];
  local_de = param_3[0x14] ^ param_2[0x14];
  local_da = param_3[0x15] ^ param_2[0x15];
  local_e2 = param_3[0x13] ^ param_2[0x13];
  local_d2 = param_3[0x17] ^ param_2[0x17];
  pbVar14 = param_2 + 0x18;
  local_d6 = param_3[0x16] ^ param_2[0x16];
  local_e1 = param_3[0x1b] ^ param_2[0x1b];
  local_d1 = param_3[0x1f] ^ param_2[0x1f];
  local_ed = param_3[0x18] ^ *pbVar14;
  local_e9 = param_3[0x19] ^ param_2[0x19];
  local_e5 = param_3[0x1a] ^ param_2[0x1a];
  local_dd = param_3[0x1c] ^ param_2[0x1c];
  local_d9 = param_3[0x1d] ^ param_2[0x1d];
  local_d5 = param_3[0x1e] ^ param_2[0x1e];
  gost_enc_with_key(param_1,&local_f0,param_2,&local_d0);
  uVar8 = *(undefined8 *)param_2;
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)pbVar9;
  uVar11 = *(undefined8 *)pbVar14;
  local_90._0_1_ = (byte)uVar17;
  local_90._2_1_ = (byte)((ulong)uVar17 >> 0x10);
  local_90._3_1_ = (byte)((ulong)uVar17 >> 0x18);
  local_90._1_1_ = (byte)((ulong)uVar17 >> 8);
  local_90._4_1_ = (byte)((ulong)uVar17 >> 0x20);
  local_90._5_1_ = (byte)((ulong)uVar17 >> 0x28);
  local_90._6_1_ = (byte)((ulong)uVar17 >> 0x30);
  local_90._7_1_ = (byte)((ulong)uVar17 >> 0x38);
  local_78 = (byte)local_90 ^ (byte)uVar8;
  bStack_77 = local_90._1_1_ ^ (byte)((ulong)uVar8 >> 8);
  bStack_76 = local_90._2_1_ ^ (byte)((ulong)uVar8 >> 0x10);
  bStack_75 = local_90._3_1_ ^ (byte)((ulong)uVar8 >> 0x18);
  bStack_74 = local_90._4_1_ ^ (byte)((ulong)uVar8 >> 0x20);
  bStack_73 = local_90._5_1_ ^ (byte)((ulong)uVar8 >> 0x28);
  bStack_72 = local_90._6_1_ ^ (byte)((ulong)uVar8 >> 0x30);
  bStack_71 = local_90._7_1_ ^ (byte)((ulong)uVar8 >> 0x38);
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  uVar10 = *(undefined8 *)param_3;
  uVar25 = *(undefined8 *)(param_3 + 0x10);
  uVar18 = *(undefined8 *)(param_3 + 8);
  uStack_88._0_1_ = (byte)uVar24;
  uStack_88._1_1_ = (byte)((ulong)uVar24 >> 8);
  local_ee = (byte)uVar18 ^ (byte)uVar10;
  local_e9 = (byte)((ulong)uVar18 >> 8);
  local_ea = local_e9 ^ (byte)((ulong)uVar10 >> 8);
  local_e5 = (byte)((ulong)uVar18 >> 0x10);
  local_e6 = local_e5 ^ (byte)((ulong)uVar10 >> 0x10);
  local_e1 = (byte)((ulong)uVar18 >> 0x18);
  local_e2 = local_e1 ^ (byte)((ulong)uVar10 >> 0x18);
  local_dd = (byte)((ulong)uVar18 >> 0x20);
  local_de = local_dd ^ (byte)((ulong)uVar10 >> 0x20);
  local_d9 = (byte)((ulong)uVar18 >> 0x28);
  local_da = local_d9 ^ (byte)((ulong)uVar10 >> 0x28);
  bVar15 = (byte)((ulong)uVar18 >> 0x30);
  local_d6 = bVar15 ^ (byte)((ulong)uVar10 >> 0x30);
  bVar23 = (byte)((ulong)uVar18 >> 0x38);
  local_d2 = bVar23 ^ (byte)((ulong)uVar10 >> 0x38);
  local_a0 = CONCAT17(local_d2,CONCAT16(local_d6,CONCAT15(local_da,CONCAT14(local_de,CONCAT13(
                                                  local_e2,CONCAT12(local_e6,CONCAT11(local_ea,
                                                  local_ee)))))));
  uStack_88._2_1_ = (byte)((ulong)uVar24 >> 0x10);
  uStack_88._3_1_ = (byte)((ulong)uVar24 >> 0x18);
  local_b0._0_1_ = (byte)uVar25;
  uStack_a8._2_1_ = (byte)((ulong)uVar8 >> 0x10);
  bVar16 = (byte)local_b0 ^ (byte)uVar18;
  local_ed = bVar16 ^ local_78;
  local_b0._1_1_ = (byte)((ulong)uVar25 >> 8);
  local_f0 = (byte)local_b0 ^ (byte)local_90;
  local_e9 = local_b0._1_1_ ^ local_e9;
  local_98._0_2_ = CONCAT11(local_e9,bVar16);
  local_e9 = local_e9 ^ bStack_77;
  local_b0._2_1_ = (byte)((ulong)uVar25 >> 0x10);
  local_ec = local_b0._1_1_ ^ local_90._1_1_;
  local_e5 = local_b0._2_1_ ^ local_e5;
  local_98._0_3_ = CONCAT12(local_e5,(undefined2)local_98);
  local_e5 = local_e5 ^ bStack_76;
  local_b0._3_1_ = (byte)((ulong)uVar25 >> 0x18);
  local_e8 = local_b0._2_1_ ^ local_90._2_1_;
  local_e1 = local_b0._3_1_ ^ local_e1;
  local_e4 = local_b0._3_1_ ^ local_90._3_1_;
  local_b0._4_1_ = (byte)((ulong)uVar25 >> 0x20);
  uStack_88._4_1_ = (byte)((ulong)uVar24 >> 0x20);
  local_dd = local_b0._4_1_ ^ local_dd;
  local_e0 = local_b0._4_1_ ^ local_90._4_1_;
  local_b0._5_1_ = (byte)((ulong)uVar25 >> 0x28);
  uStack_88._5_1_ = (byte)((ulong)uVar24 >> 0x28);
  local_d9 = local_b0._5_1_ ^ local_d9;
  local_dc = local_b0._5_1_ ^ local_90._5_1_;
  local_b0._6_1_ = (byte)((ulong)uVar25 >> 0x30);
  uStack_88._6_1_ = (byte)((ulong)uVar24 >> 0x30);
  bVar15 = local_b0._6_1_ ^ bVar15;
  local_d8 = local_b0._6_1_ ^ local_90._6_1_;
  local_b0._7_1_ = (byte)((ulong)uVar25 >> 0x38);
  local_d5 = bVar15 ^ bStack_72;
  bVar23 = local_b0._7_1_ ^ bVar23;
  local_d4 = local_b0._7_1_ ^ local_90._7_1_;
  local_d1 = bVar23 ^ bStack_71;
  uStack_a8._0_1_ = (byte)uVar8;
  uStack_a8._1_1_ = (byte)((ulong)uVar8 >> 8);
  uStack_a8._3_1_ = (byte)((ulong)uVar8 >> 0x18);
  uStack_88._7_1_ = (byte)((ulong)uVar24 >> 0x38);
  local_ef = (byte)uStack_a8 ^ (byte)uStack_88;
  uStack_a8._4_1_ = (byte)((ulong)uVar8 >> 0x20);
  local_eb = uStack_a8._1_1_ ^ uStack_88._1_1_;
  uStack_a8._5_1_ = (byte)((ulong)uVar8 >> 0x28);
  local_e7 = uStack_a8._2_1_ ^ uStack_88._2_1_;
  uStack_a8._6_1_ = (byte)((ulong)uVar8 >> 0x30);
  local_e3 = uStack_a8._3_1_ ^ uStack_88._3_1_;
  uStack_a8._7_1_ = (byte)((ulong)uVar8 >> 0x38);
  local_80[0] = (byte)uVar11;
  local_80[1] = (byte)((ulong)uVar11 >> 8);
  bStack_7e = (byte)((ulong)uVar11 >> 0x10);
  bStack_7d = (byte)((ulong)uVar11 >> 0x18);
  local_df = uStack_a8._4_1_ ^ uStack_88._4_1_;
  local_db = uStack_a8._5_1_ ^ uStack_88._5_1_;
  local_d7 = uStack_a8._6_1_ ^ uStack_88._6_1_;
  local_d3 = uStack_a8._7_1_ ^ uStack_88._7_1_;
  bStack_7c = (byte)((ulong)uVar11 >> 0x20);
  local_98._0_4_ = CONCAT13(local_e1,(undefined3)local_98);
  local_e1 = local_e1 ^ bStack_75;
  bStack_7b = (byte)((ulong)uVar11 >> 0x28);
  local_98._0_5_ = CONCAT14(local_dd,(undefined4)local_98);
  local_dd = local_dd ^ bStack_74;
  bStack_7a = (byte)((ulong)uVar11 >> 0x30);
  local_98 = CONCAT26(CONCAT11(bVar23,bVar15),CONCAT15(local_d9,(undefined5)local_98));
  local_d9 = local_d9 ^ bStack_73;
  bStack_79 = (byte)((ulong)uVar11 >> 0x38);
  local_ee = local_ee ^ local_80[0];
  local_ea = local_ea ^ local_80[1];
  local_e6 = local_e6 ^ bStack_7e;
  local_e2 = local_e2 ^ bStack_7d;
  local_de = local_de ^ bStack_7c;
  local_da = local_da ^ bStack_7b;
  local_d6 = local_d6 ^ bStack_7a;
  local_d2 = local_d2 ^ bStack_79;
  local_b0 = uVar25;
  uStack_a8 = uVar8;
  local_90 = uVar17;
  uStack_88 = uVar24;
  _local_80 = uVar11;
  gost_enc_with_key(param_1,&local_f0,pbVar9,(ulong)&local_d0 | 8);
  uVar18 = _local_80;
  uVar8 = uStack_88;
  uVar11 = local_90;
  uVar10 = local_98;
  local_90._5_1_ = (byte)((ulong)uStack_88 >> 0x28);
  bVar37 = local_90._5_1_;
  local_90._4_1_ = (byte)((ulong)uStack_88 >> 0x20);
  bVar35 = local_90._4_1_;
  bVar31 = (byte)((ulong)uVar11 >> 0x28);
  bVar23 = local_90._5_1_ ^ bVar31 ^ 0xff;
  local_90._3_1_ = (byte)((ulong)uStack_88 >> 0x18);
  local_e4 = local_90._3_1_;
  bVar33 = (byte)((ulong)uVar11 >> 0x20);
  bVar2 = local_90._4_1_ ^ bVar33 ^ 0xff;
  local_90._1_1_ = (byte)((ulong)uStack_88 >> 8);
  local_ec = local_90._1_1_;
  local_90._7_1_ = (byte)((ulong)uStack_88 >> 0x38);
  local_d4 = local_90._7_1_;
  local_90._2_1_ = (byte)((ulong)uStack_88 >> 0x10);
  local_e8 = local_90._2_1_;
  bVar3 = local_90._3_1_ ^ (byte)((ulong)uVar11 >> 0x18);
  local_90._0_1_ = (byte)uStack_88;
  local_f0 = (byte)local_90;
  bVar4 = local_90._1_1_ ^ (byte)((ulong)uVar11 >> 8);
  local_90._6_1_ = (byte)((ulong)uStack_88 >> 0x30);
  local_d8 = local_90._6_1_;
  bVar16 = local_90._7_1_ ^ (byte)((ulong)uVar11 >> 0x38) ^ 0xff;
  bVar5 = local_90._2_1_ ^ (byte)((ulong)uVar11 >> 0x10);
  bVar6 = local_90._6_1_ ^ (byte)((ulong)uVar11 >> 0x30);
  bVar7 = (byte)local_90 ^ (byte)uVar11 ^ 0xff;
  uStack_88._4_1_ = (byte)((ulong)uVar18 >> 0x20);
  local_df = uStack_88._4_1_;
  _local_80 = CONCAT17(~bStack_71,
                       (uint7)CONCAT51(CONCAT32(CONCAT12(bStack_71,CONCAT11(bStack_72,bStack_73)),
                                                CONCAT11(~bStack_74,bStack_75)),~bStack_76) << 0x10)
  ;
  uStack_88._6_1_ = (byte)((ulong)uVar18 >> 0x30);
  local_d7 = uStack_88._6_1_;
  uStack_88._2_1_ = (byte)((ulong)uVar18 >> 0x10);
  local_e7 = uStack_88._2_1_;
  uStack_88._0_1_ = (byte)uVar18;
  local_ef = (byte)uStack_88;
  local_80 = (undefined1  [2])CONCAT11(~bStack_77,local_78);
  uStack_88._4_1_ = ~uStack_88._4_1_;
  bVar15 = ~uStack_88._6_1_;
  uStack_88._5_3_ = (undefined3)((ulong)uVar18 >> 0x28);
  uStack_88._0_4_ = (undefined4)uVar18;
  uVar17 = uStack_88;
  uStack_88._7_1_ = (byte)((ulong)uVar18 >> 0x38);
  local_d3 = uStack_88._7_1_;
  uStack_88._0_7_ = CONCAT16(bVar15,(int6)uVar17);
  uStack_88._0_3_ = CONCAT12(~local_e7,(short)uVar18);
  bVar15 = ~local_90._1_1_;
  bVar19 = ~local_90._3_1_;
  bVar21 = ~local_90._5_1_;
  uStack_88 = CONCAT71(uStack_88._1_7_,~local_ef);
  uVar17 = uStack_88;
  local_90 = CONCAT17(~local_90._7_1_,(int7)uVar8);
  local_90._0_6_ = CONCAT15(bVar21,(int5)uVar8);
  local_90._0_4_ = CONCAT13(bVar19,(int3)uVar8);
  local_90._0_2_ = CONCAT11(bVar15,local_f0);
  bVar15 = (byte)uStack_a8;
  bVar26 = bVar15 ^ (byte)local_b0;
  bVar19 = (byte)((ulong)uStack_a8 >> 8);
  bVar28 = bVar19 ^ (byte)((ulong)local_b0 >> 8);
  bVar21 = (byte)((ulong)uStack_a8 >> 0x10);
  bVar30 = bVar21 ^ (byte)((ulong)local_b0 >> 0x10);
  local_e1 = (byte)((ulong)uStack_a8 >> 0x18);
  bVar32 = local_e1 ^ (byte)((ulong)local_b0 >> 0x18);
  bVar22 = (byte)((ulong)uStack_a8 >> 0x20);
  bVar34 = bVar22 ^ (byte)((ulong)local_b0 >> 0x20);
  bVar20 = (byte)((ulong)uStack_a8 >> 0x28);
  bVar36 = bVar20 ^ (byte)((ulong)local_b0 >> 0x28);
  bVar27 = (byte)((ulong)uStack_a8 >> 0x30);
  bVar38 = bVar27 ^ (byte)((ulong)local_b0 >> 0x30);
  bVar29 = (byte)((ulong)uStack_a8 >> 0x38);
  bVar39 = bVar29 ^ (byte)((ulong)local_b0 >> 0x38);
  uStack_88._1_1_ = (byte)((ulong)uVar18 >> 8);
  uStack_a8 = local_98;
  local_b0 = local_a0;
  uVar8 = local_b0;
  local_b0._0_1_ = (byte)local_a0;
  uStack_88._3_1_ = (byte)((ulong)uVar18 >> 0x18);
  bVar15 = (byte)local_b0 ^ bVar15;
  local_ed = local_f0 ^ (byte)uVar11 ^ bVar15 ^ 0xff;
  local_b0._1_1_ = (byte)((ulong)local_a0 >> 8);
  local_f0 = (byte)local_b0 ^ local_f0;
  bVar19 = local_b0._1_1_ ^ bVar19;
  local_ec = local_ec ^ local_b0._1_1_ ^ 0xff;
  local_e9 = bVar19 ^ bVar4;
  local_b0._2_1_ = (byte)((ulong)local_a0 >> 0x10);
  uStack_88._5_1_ = (byte)((ulong)uVar18 >> 0x28);
  bVar21 = local_b0._2_1_ ^ bVar21;
  local_e5 = bVar21 ^ bVar5;
  local_b0._3_1_ = (byte)((ulong)local_a0 >> 0x18);
  local_e8 = local_b0._2_1_ ^ local_e8;
  local_e1 = local_b0._3_1_ ^ local_e1;
  local_e4 = local_e4 ^ local_b0._3_1_ ^ 0xff;
  local_b0._4_1_ = (byte)((ulong)local_a0 >> 0x20);
  local_98._0_2_ = CONCAT11(bVar19,bVar15);
  bVar22 = local_b0._4_1_ ^ bVar22;
  local_e0 = local_b0._4_1_ ^ bVar35;
  local_b0._5_1_ = (byte)((ulong)local_a0 >> 0x28);
  bVar20 = local_b0._5_1_ ^ bVar20;
  local_dc = bVar37 ^ local_b0._5_1_ ^ 0xff;
  local_b0._6_1_ = (byte)((ulong)local_a0 >> 0x30);
  bVar27 = local_b0._6_1_ ^ bVar27;
  local_d8 = local_b0._6_1_ ^ local_d8;
  local_b0._7_1_ = (byte)((ulong)local_a0 >> 0x38);
  local_d5 = bVar27 ^ bVar6;
  bVar29 = local_b0._7_1_ ^ bVar29;
  local_d4 = local_d4 ^ local_b0._7_1_ ^ 0xff;
  local_d1 = bVar29 ^ bVar16;
  uStack_a8._0_1_ = (byte)uVar10;
  uStack_a8._1_1_ = (byte)((ulong)uVar10 >> 8);
  uStack_a8._2_1_ = (byte)((ulong)uVar10 >> 0x10);
  uStack_a8._3_1_ = (byte)((ulong)uVar10 >> 0x18);
  local_ef = local_ef ^ (byte)uStack_a8 ^ 0xff;
  uStack_a8._4_1_ = (byte)((ulong)uVar10 >> 0x20);
  local_eb = uStack_a8._1_1_ ^ uStack_88._1_1_;
  uStack_a8._5_1_ = (byte)((ulong)uVar10 >> 0x28);
  local_e7 = local_e7 ^ uStack_a8._2_1_ ^ 0xff;
  uStack_a8._6_1_ = (byte)((ulong)uVar10 >> 0x30);
  local_e3 = uStack_a8._3_1_ ^ uStack_88._3_1_;
  uStack_a8._7_1_ = (byte)((ulong)uVar10 >> 0x38);
  local_df = local_df ^ uStack_a8._4_1_ ^ 0xff;
  local_db = uStack_a8._5_1_ ^ uStack_88._5_1_;
  local_d7 = local_d7 ^ uStack_a8._6_1_ ^ 0xff;
  local_98._0_4_ = CONCAT13(local_e1,CONCAT12(bVar21,(undefined2)local_98));
  local_e1 = local_e1 ^ bVar3;
  local_d9 = bVar37 ^ bVar31 ^ bVar20 ^ 0xff;
  local_d3 = uStack_a8._7_1_ ^ local_d3;
  local_ee = bVar26 ^ local_78;
  local_ea = bStack_77 ^ bVar28 ^ 0xff;
  local_e6 = bStack_76 ^ bVar30 ^ 0xff;
  local_e2 = bVar32 ^ bStack_75;
  local_de = bStack_74 ^ bVar34 ^ 0xff;
  local_da = bVar36 ^ bStack_73;
  local_d6 = bVar38 ^ bStack_72;
  local_98._0_5_ = CONCAT14(bVar22,(undefined4)local_98);
  local_98 = CONCAT35(CONCAT21(CONCAT11(bVar29,bVar27),bVar20),(undefined5)local_98);
  local_dd = bVar35 ^ bVar33 ^ bVar22 ^ 0xff;
  local_d2 = bStack_71 ^ bVar39 ^ 0xff;
  local_b0 = uVar8;
  uStack_a8 = uVar10;
  local_a0 = CONCAT17(bVar39,CONCAT16(bVar38,CONCAT15(bVar36,CONCAT14(bVar34,CONCAT13(bVar32,
                                                  CONCAT12(bVar30,CONCAT11(bVar28,bVar26)))))));
  uStack_88 = uVar17;
  local_78 = bVar7;
  bStack_77 = bVar4;
  bStack_76 = bVar5;
  bStack_75 = bVar3;
  bStack_74 = bVar2;
  bStack_73 = bVar23;
  bStack_72 = bVar6;
  bStack_71 = bVar16;
  gost_enc_with_key(param_1,&local_f0,param_2 + 0x10,auStack_c0);
  uVar11 = uStack_88;
  uVar8 = local_90;
  uVar10 = local_98;
  uStack_88 = _local_80;
  uVar17 = uStack_88;
  local_90 = uVar11;
  local_90._1_1_ = (byte)((ulong)uVar11 >> 8);
  local_90._2_1_ = (byte)((ulong)uVar11 >> 0x10);
  local_90._0_1_ = (byte)uVar11;
  bVar15 = local_90._1_1_ ^ (byte)((ulong)uVar8 >> 8);
  local_90._4_1_ = (byte)((ulong)uVar11 >> 0x20);
  bVar23 = local_90._2_1_ ^ (byte)((ulong)uVar8 >> 0x10);
  bVar2 = local_90._4_1_ ^ (byte)((ulong)uVar8 >> 0x20);
  bVar3 = (byte)local_90 ^ (byte)uVar8;
  local_90._3_1_ = (byte)((ulong)uVar11 >> 0x18);
  local_90._5_1_ = (byte)((ulong)uVar11 >> 0x28);
  local_90._6_1_ = (byte)((ulong)uVar11 >> 0x30);
  local_90._7_1_ = (byte)((ulong)uVar11 >> 0x38);
  bVar4 = local_90._3_1_ ^ (byte)((ulong)uVar8 >> 0x18);
  bVar5 = local_90._5_1_ ^ (byte)((ulong)uVar8 >> 0x28);
  bVar6 = local_90._6_1_ ^ (byte)((ulong)uVar8 >> 0x30);
  bVar7 = local_90._7_1_ ^ (byte)((ulong)uVar8 >> 0x38);
  uStack_88._3_1_ = (byte)((ulong)_local_80 >> 0x18);
  uStack_88._0_1_ = (byte)_local_80;
  bVar16 = (byte)uStack_a8;
  bVar27 = bVar16 ^ (byte)local_b0;
  local_e9 = (byte)((ulong)uStack_a8 >> 8);
  bVar29 = local_e9 ^ (byte)((ulong)local_b0 >> 8);
  local_e5 = (byte)((ulong)uStack_a8 >> 0x10);
  bVar31 = local_e5 ^ (byte)((ulong)local_b0 >> 0x10);
  local_e1 = (byte)((ulong)uStack_a8 >> 0x18);
  bVar33 = local_e1 ^ (byte)((ulong)local_b0 >> 0x18);
  bVar19 = (byte)((ulong)uStack_a8 >> 0x20);
  bVar35 = bVar19 ^ (byte)((ulong)local_b0 >> 0x20);
  bVar21 = (byte)((ulong)uStack_a8 >> 0x28);
  bVar37 = bVar21 ^ (byte)((ulong)local_b0 >> 0x28);
  bVar22 = (byte)((ulong)uStack_a8 >> 0x30);
  bVar26 = bVar22 ^ (byte)((ulong)local_b0 >> 0x30);
  bVar20 = (byte)((ulong)uStack_a8 >> 0x38);
  bVar28 = bVar20 ^ (byte)((ulong)local_b0 >> 0x38);
  uStack_88._1_1_ = (byte)((ulong)_local_80 >> 8);
  uStack_88._2_1_ = (byte)((ulong)_local_80 >> 0x10);
  uStack_a8 = local_98;
  local_b0 = local_a0;
  uVar8 = local_b0;
  local_b0._0_1_ = (byte)local_a0;
  uStack_88._7_1_ = (byte)((ulong)_local_80 >> 0x38);
  bVar16 = (byte)local_b0 ^ bVar16;
  local_ed = bVar16 ^ bVar3;
  local_b0._1_1_ = (byte)((ulong)local_a0 >> 8);
  local_f0 = (byte)local_b0 ^ (byte)local_90;
  local_e9 = local_b0._1_1_ ^ local_e9;
  local_98._0_2_ = CONCAT11(local_e9,bVar16);
  local_e9 = local_e9 ^ bVar15;
  local_b0._2_1_ = (byte)((ulong)local_a0 >> 0x10);
  local_ec = local_b0._1_1_ ^ local_90._1_1_;
  local_e5 = local_b0._2_1_ ^ local_e5;
  local_98._0_3_ = CONCAT12(local_e5,(undefined2)local_98);
  local_e5 = local_e5 ^ bVar23;
  local_b0._3_1_ = (byte)((ulong)local_a0 >> 0x18);
  local_e8 = local_b0._2_1_ ^ local_90._2_1_;
  local_e1 = local_b0._3_1_ ^ local_e1;
  local_e4 = local_b0._3_1_ ^ local_90._3_1_;
  local_b0._4_1_ = (byte)((ulong)local_a0 >> 0x20);
  uStack_88._4_1_ = (byte)((ulong)_local_80 >> 0x20);
  bVar19 = local_b0._4_1_ ^ bVar19;
  local_dd = bVar19 ^ bVar2;
  local_b0._5_1_ = (byte)((ulong)local_a0 >> 0x28);
  local_e0 = local_b0._4_1_ ^ local_90._4_1_;
  bVar21 = local_b0._5_1_ ^ bVar21;
  local_dc = local_b0._5_1_ ^ local_90._5_1_;
  local_b0._6_1_ = (byte)((ulong)local_a0 >> 0x30);
  uStack_88._5_1_ = (byte)((ulong)_local_80 >> 0x28);
  bVar22 = local_b0._6_1_ ^ bVar22;
  local_d8 = local_b0._6_1_ ^ local_90._6_1_;
  local_b0._7_1_ = (byte)((ulong)local_a0 >> 0x38);
  local_d5 = bVar22 ^ bVar6;
  bVar20 = local_b0._7_1_ ^ bVar20;
  local_d4 = local_b0._7_1_ ^ local_90._7_1_;
  local_d1 = bVar20 ^ bVar7;
  uStack_a8._3_1_ = (byte)((ulong)uVar10 >> 0x18);
  uStack_a8._0_1_ = (byte)uVar10;
  uStack_a8._1_1_ = (byte)((ulong)uVar10 >> 8);
  uStack_a8._2_1_ = (byte)((ulong)uVar10 >> 0x10);
  local_e3 = uStack_a8._3_1_ ^ uStack_88._3_1_;
  uStack_a8._7_1_ = (byte)((ulong)uVar10 >> 0x38);
  uStack_88._6_1_ = (byte)((ulong)_local_80 >> 0x30);
  local_ef = (byte)uStack_a8 ^ (byte)uStack_88;
  uStack_a8._4_1_ = (byte)((ulong)uVar10 >> 0x20);
  local_eb = uStack_a8._1_1_ ^ uStack_88._1_1_;
  uStack_a8._5_1_ = (byte)((ulong)uVar10 >> 0x28);
  local_e7 = uStack_a8._2_1_ ^ uStack_88._2_1_;
  uStack_a8._6_1_ = (byte)((ulong)uVar10 >> 0x30);
  local_d3 = uStack_a8._7_1_ ^ uStack_88._7_1_;
  local_df = uStack_a8._4_1_ ^ uStack_88._4_1_;
  local_db = uStack_a8._5_1_ ^ uStack_88._5_1_;
  local_d7 = uStack_a8._6_1_ ^ uStack_88._6_1_;
  local_d9 = bVar21 ^ bVar5;
  local_e2 = bVar33 ^ bStack_75;
  local_98._0_4_ = CONCAT13(local_e1,(undefined3)local_98);
  local_98 = CONCAT44(CONCAT22(CONCAT11(bVar20,bVar22),CONCAT11(bVar21,bVar19)),(undefined4)local_98
                     );
  local_e1 = local_e1 ^ bVar4;
  local_ee = bVar27 ^ local_78;
  local_ea = bVar29 ^ bStack_77;
  local_e6 = bVar31 ^ bStack_76;
  local_d2 = bVar28 ^ bStack_71;
  local_de = bVar35 ^ bStack_74;
  local_da = bVar37 ^ bStack_73;
  local_d6 = bVar26 ^ bStack_72;
  local_b0 = uVar8;
  uStack_a8 = uVar10;
  local_a0 = CONCAT17(bVar28,CONCAT16(bVar26,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(bVar33,
                                                  CONCAT12(bVar31,CONCAT11(bVar29,bVar27)))))));
  local_90 = uVar11;
  uStack_88 = uVar17;
  _local_80 = CONCAT17(bStack_71,
                       CONCAT16(bStack_72,
                                CONCAT15(bStack_73,
                                         CONCAT14(bStack_74,
                                                  CONCAT13(bStack_75,
                                                           CONCAT12(bStack_76,
                                                                    CONCAT11(bStack_77,local_78)))))
                               ));
  local_78 = bVar3;
  bStack_77 = bVar15;
  bStack_76 = bVar23;
  bStack_75 = bVar4;
  bStack_74 = bVar2;
  bStack_73 = bVar5;
  bStack_72 = bVar6;
  bStack_71 = bVar7;
  gost_enc_with_key(param_1,&local_f0,pbVar14,&bStack_b8);
  bVar28 = bStack_b7;
  bVar37 = bStack_b8;
  bVar29 = bStack_c1;
  bVar19 = bStack_c2;
  bStack_c2 = (byte)auStack_c0._0_2_;
  bVar22 = bStack_c2;
  bStack_c1 = SUB21(auStack_c0._0_2_,1);
  bVar31 = bStack_c1;
  bVar21 = bStack_ce ^ local_d0 ^ bStack_cc ^ bStack_ca ^ bStack_b8;
  bVar16 = bStack_cd ^ bStack_cf ^ bStack_cb ^ bStack_c9 ^ bStack_b7;
  bStack_b8 = (byte)uStack_b6;
  bVar26 = bStack_b8;
  bStack_b7 = (byte)((ushort)uStack_b6 >> 8);
  bVar30 = bStack_b7;
  bVar21 = bVar21 ^ bStack_b2;
  bVar16 = bVar16 ^ bStack_b1;
  bStack_c2 = (byte)auStack_c0._2_4_;
  bVar20 = bStack_c2;
  bStack_c1 = SUB41(auStack_c0._2_4_,1);
  bVar33 = bStack_c1;
  bVar4 = bStack_cc ^ bStack_ce ^ bStack_ca ^ bStack_c8 ^ bStack_b8 ^ bVar21;
  bVar15 = bStack_cb ^ bStack_cd ^ bStack_c9 ^ bStack_c7 ^ bStack_b7 ^ bVar16;
  bStack_b8 = (byte)uStack_b4;
  bStack_b7 = (byte)((ushort)uStack_b4 >> 8);
  bStack_c2 = SUB41(auStack_c0._2_4_,2);
  bVar27 = bStack_c2;
  bStack_c1 = SUB41(auStack_c0._2_4_,3);
  bVar35 = bStack_c1;
  bVar5 = bStack_ca ^ bStack_cc ^ bStack_c8 ^ bStack_c6 ^ bStack_b8 ^ bVar4;
  bVar23 = bStack_c9 ^ bStack_cb ^ bStack_c7 ^ bStack_c5 ^ bStack_b7 ^ bVar15;
  bStack_c2 = (byte)auStack_c0._6_2_;
  bStack_c1 = SUB21(auStack_c0._6_2_,1);
  bVar6 = bStack_c8 ^ bStack_ca ^ bStack_c6 ^ bStack_c4 ^ bStack_b2 ^ bVar5;
  bVar2 = bStack_c7 ^ bStack_c9 ^ bStack_c5 ^ bStack_c3 ^ bStack_b1 ^ bVar23;
  bVar7 = bStack_c6 ^ bStack_c8 ^ bStack_c4 ^ bVar19 ^ bVar21 ^ bVar6;
  bVar3 = bStack_c5 ^ bStack_c7 ^ bStack_c3 ^ bVar29 ^ bVar16 ^ bVar2;
  bVar4 = bStack_c4 ^ bStack_c6 ^ bVar19 ^ bVar22 ^ bVar4 ^ bVar7;
  bVar15 = bStack_c3 ^ bStack_c5 ^ bVar29 ^ bVar31 ^ bVar15 ^ bVar3;
  bVar5 = bVar19 ^ bStack_c4 ^ bVar22 ^ bVar20 ^ bVar5 ^ bVar4;
  bVar23 = bVar29 ^ bStack_c3 ^ bVar31 ^ bVar33 ^ bVar23 ^ bVar15;
  bVar6 = bVar22 ^ bVar19 ^ bVar20 ^ bVar27 ^ bVar6 ^ bVar5;
  bVar2 = bVar31 ^ bVar29 ^ bVar33 ^ bVar35 ^ bVar2 ^ bVar23;
  bVar7 = bVar20 ^ bVar22 ^ bVar27 ^ bStack_c2 ^ bVar7 ^ bVar6;
  bVar3 = bVar33 ^ bVar31 ^ bVar35 ^ bStack_c1 ^ bVar3 ^ bVar2;
  bVar19 = bVar27 ^ bVar20 ^ bStack_c2 ^ bVar37 ^ bVar4 ^ bVar7;
  bVar15 = bVar35 ^ bVar33 ^ bStack_c1 ^ bVar28 ^ bVar15 ^ bVar3;
  bVar4 = bVar28 ^ bStack_c1 ^ bVar30 ^ bStack_b7;
  bVar22 = bVar37 ^ bStack_c2 ^ bVar26 ^ bStack_b8;
  uVar8 = *(undefined8 *)(param_3 + 1);
  bVar20 = (byte)((ulong)uVar8 >> 8) ^ bVar26;
  bVar29 = (byte)((ulong)uVar8 >> 0x10) ^ bVar30;
  bVar31 = (byte)((ulong)uVar8 >> 0x18) ^ bStack_b8;
  bVar33 = (byte)((ulong)uVar8 >> 0x20) ^ bStack_b7;
  bStack_b2 = (byte)((ulong)uVar8 >> 0x28) ^ bStack_b2;
  bStack_b1 = (byte)((ulong)uVar8 >> 0x30) ^ bStack_b1;
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  uVar10 = *(undefined8 *)param_2;
  local_d0 = (byte)uVar10 ^ bVar20;
  bStack_cf = (byte)((ulong)uVar10 >> 8) ^ bVar29;
  bStack_ce = (byte)((ulong)uVar10 >> 0x10) ^ bVar31;
  bStack_cd = (byte)((ulong)uVar10 >> 0x18) ^ bVar33;
  bStack_cc = (byte)((ulong)uVar10 >> 0x20) ^ bStack_b2;
  bStack_cb = (byte)((ulong)uVar10 >> 0x28) ^ bStack_b1;
  bStack_ca = (byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)uVar8 >> 0x38) ^ bVar21;
  bStack_c9 = (byte)((ulong)uVar10 >> 0x38) ^ param_3[9] ^ bVar16;
  puVar12 = (undefined8 *)((ulong)&local_d0 | 2);
  bStack_b8 = (byte)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x10) ^
              (byte)((ulong)uVar11 >> 0x10) ^ bVar19;
  bStack_b7 = (byte)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x18) ^
              (byte)((ulong)uVar11 >> 0x18) ^ bVar15;
  bVar16 = param_2[0x1e] ^
           bVar20 ^ *param_3 ^ bVar37 ^ bVar31 ^ bStack_b2 ^ (byte)uVar11 ^ bVar7 ^
           (byte)((ulong)uVar11 >> 0x30) ^
           bVar22 ^ bVar6 ^ bStack_c2 ^ bVar27 ^ bVar37 ^ bVar26 ^ bVar5 ^ bVar19;
  iVar13 = 0x3c;
  bVar15 = param_2[0x1f] ^
           bVar29 ^ (byte)uVar8 ^ bVar28 ^ bVar33 ^ bStack_b1 ^ (byte)((ulong)uVar11 >> 8) ^ bVar3 ^
           (byte)((ulong)uVar11 >> 0x38) ^
           bVar4 ^ bVar2 ^ bStack_c1 ^ bVar35 ^ bVar28 ^ bVar30 ^ bVar23 ^ bVar15;
  while( true ) {
    uVar1 = *(undefined4 *)(puVar12 + 3);
    uVar8 = puVar12[2];
    uVar11 = puVar12[1];
    uVar10 = *puVar12;
    bVar16 = bStack_ce ^ local_d0 ^ bStack_cc ^ bStack_ca ^ bStack_b8 ^ bVar16;
    bVar15 = bStack_cd ^ bStack_cf ^ bStack_cb ^ bStack_c9 ^ bStack_b7 ^ bVar15;
    bStack_b8 = (byte)uVar1;
    bStack_b7 = (byte)((uint)uVar1 >> 8);
    local_d0 = (byte)uVar10;
    bStack_cf = (byte)((ulong)uVar10 >> 8);
    bStack_ce = (byte)((ulong)uVar10 >> 0x10);
    bStack_cd = (byte)((ulong)uVar10 >> 0x18);
    bStack_cc = (byte)((ulong)uVar10 >> 0x20);
    bStack_cb = (byte)((ulong)uVar10 >> 0x28);
    bStack_ca = (byte)((ulong)uVar10 >> 0x30);
    bStack_c9 = (byte)((ulong)uVar10 >> 0x38);
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
  }
  *(ulong *)(param_2 + 0x18) = CONCAT17(bVar15,CONCAT16(bVar16,*(undefined6 *)(puVar12 + 3)));
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  *(undefined8 *)(param_2 + 8) = uVar11;
  *(undefined8 *)param_2 = uVar10;
  return;
}

