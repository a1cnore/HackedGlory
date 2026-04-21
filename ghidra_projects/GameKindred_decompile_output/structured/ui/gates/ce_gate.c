// ui/gates/ce_gate.c — 62 UI functions (gates)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_10012c5b0
 * key-value store write — FUN_10012c5b0(key, value)
 * VA: 0x10012c5b0 | Source: functions/10012.c:12881
 * Dylib: Layer 9
 * Notes: Writes int to persistent KV store. Used for ranked data (ELO buckets).
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10012c414, FUN_10012c538, FUN_1004d2cc8, FUN_1004d2da8
 * Callers: FUN_100212ff8, FUN_10031627c
 */
void FUN_10012c5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2da8(auStack_138,pppuVar1,param_1,param_2);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/*
 * FUN_10012c8f0
 * key-value store read — FUN_10012c8f0(key, default)
 * VA: 0x10012c8f0 | Source: functions/10012.c:13042
 * Dylib: Layer 9
 * Notes: Reads int from KV store. Profile card reads skill tier from 'new5v5RankedDataEloBucket'.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10012c414, FUN_10012c538, FUN_10012c9c4, FUN_1004d2cc8, FUN_1004d2d1c, FUN_1004d2d48
 * Callers: FUN_1001654bc, FUN_100315fc0, FUN_100328074, FUN_1003281ac
 */
undefined8 FUN_10012c8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  uVar2 = FUN_1004d2d1c(auStack_138,pppuVar1,param_1,param_2);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1  [16] FUN_10012c9c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 **local_178 [2];
  char local_161;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_160);
  pppuVar1 = (undefined8 ***)local_160[0];
  if (-1 < local_149) {
    pppuVar1 = local_160;
  }
  FUN_1004d2cc8(auStack_148,pppuVar1);
  FUN_10012c538(local_178);
  pppuVar1 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar1 = local_178;
  }
  auVar2 = FUN_1004d2d48(param_1,auStack_148,pppuVar1,param_2);
  uVar3 = auVar2._8_8_;
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    auVar2._8_8_ = uVar3;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/*
 * FUN_100131560
 * CE master gate — hardcoded 'return 1'
 * VA: 0x100131560 | Source: functions/10013.c:1194
 * Dylib: Layer 8
 * Notes: 116 callers identified. Cannot be patched (read-only __TEXT). All callers treat return 1 as CE mode. 197 references across 25 function files.
 * CE-gate: YES (1x) | Guest-gate: NO
 * Callers: FUN_10002f340, FUN_10002f5f4, FUN_10002fea4, FUN_10002ff2c, FUN_1000494b4, FUN_100049514, FUN_100078800, FUN_100078f00 (+126 more)
 */
undefined8 FUN_100131560(void)

{
  return 1;
}



/*
 * FUN_10014e20c
 * isGuest check — returns 1 if guest, 0 if account
 * VA: 0x10014e20c | Source: functions/10014.c:11063
 * Dylib: Layer 7
 * Notes: Derived from FUN_1004ef1b4() which calls vtable[12](). Result ^ 1 = isGuest.
 * CE-gate: NO | Guest-gate: YES (1x)
 * Callees: FUN_1004ef20c, FUN_10052b840
 * Callers: FUN_100167f98, FUN_100168220, FUN_1001f3b40, FUN_1001f4efc, FUN_1001f505c, FUN_1001fc0e8, FUN_100206f70, FUN_100221158 (+2 more)
 */
ulong FUN_10014e20c(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004ef20c();
  if ((int)uVar2 != 0) {
    uVar1 = FUN_10052b840();
    uVar2 = (ulong)(uVar1 ^ 1);
  }
  return uVar2;
}



/*
 * FUN_100160c50
 * VA: 0x100160c50 | Source: functions/10016.c:247
 * CE-gate: YES (4x) | Guest-gate: NO
 * Callees: FUN_100131560, FUN_10014e424, FUN_100160e54, FUN_1001630a0, FUN_100169bc4, FUN_100169cf8, FUN_10032c190, FUN_10032f924 (+11 more)
 * Callers: FUN_100115fe0
 */
void FUN_100160c50(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_100160e54(param_1);
    FUN_1001630a0(param_1);
    if ((*(uint *)(param_1 + 0x55cc) & 0xfffffffc) == 4) {
      FUN_100169cf8(0xbf800000,param_1 + 0x278);
    }
    else {
      uVar2 = FUN_10014e424();
      uVar6 = 0xbf800000;
      if ((uVar2 & 1) == 0) {
        uVar5 = 0x40000000;
        if (*(char *)(param_1 + 0x567b) != '\0') {
          uVar5 = 0x3f800000;
        }
        uVar6 = 0xbf800000;
        if (*(char *)(param_1 + 0x567a) != '\0') {
          uVar6 = uVar5;
        }
      }
      FUN_100169cf8(uVar6,param_1 + 0x278);
      lVar3 = FUN_10032c190();
      if ((*(char *)(lVar3 + 0x38) == '\0') ||
         (lVar4 = *(long *)(lVar3 + 0x30), lVar3 = FUN_1004d29d0(), lVar4 <= lVar3 + -0xe10)) {
        lVar3 = param_1 + 0x3848;
        uVar2 = FUN_1004f1670(lVar3);
        if (((uVar2 & 1) == 0) && (uVar2 = FUN_1004f1670(lVar3), (uVar2 & 1) == 0)) {
          FUN_1004f0650(lVar3);
        }
      }
      lVar3 = param_1 + 0x3b78;
      uVar2 = FUN_1004f1680(lVar3);
      if (((((uVar2 & 1) == 0) && (uVar2 = FUN_1004f1670(lVar3), (uVar2 & 1) == 0)) &&
          (uVar2 = FUN_100131560(), (uVar2 & 1) == 0)) &&
         (uVar2 = FUN_1004f1670(lVar3), (uVar2 & 1) == 0)) {
        FUN_1004f074c(lVar3);
      }
      lVar3 = FUN_10032f924();
      if (*(char *)(lVar3 + 0x10) == '\0') {
        lVar3 = param_1 + 0x37b8;
        uVar2 = FUN_1004f1670(lVar3);
        if ((((uVar2 & 1) == 0) && (uVar2 = FUN_100131560(), (uVar2 & 1) == 0)) &&
           (uVar2 = FUN_1004f1670(lVar3), (uVar2 & 1) == 0)) {
          FUN_1004f0620(lVar3);
        }
      }
      lVar3 = FUN_100331578();
      if (*(char *)(lVar3 + 0x20) == '\0') {
        lVar3 = param_1 + 0x4010;
        uVar2 = FUN_1004f1670(lVar3);
        if ((((uVar2 & 1) == 0) && (uVar2 = FUN_100131560(), (uVar2 & 1) == 0)) &&
           (uVar2 = FUN_1004f1670(lVar3), (uVar2 & 1) == 0)) {
          FUN_1004f0478(lVar3);
        }
      }
      lVar3 = FUN_1003302c0();
      if (*(char *)(lVar3 + 0x14) == '\0') {
        lVar3 = param_1 + 0x3770;
        uVar2 = FUN_1004f1670(lVar3);
        if ((((uVar2 & 1) == 0) && (uVar2 = FUN_100131560(), (uVar2 & 1) == 0)) &&
           (uVar2 = FUN_1004f1670(lVar3), (uVar2 & 1) == 0)) {
          FUN_1004f05f0(lVar3);
        }
      }
      if (*(char *)(param_1 + 0x567d) != '\0') {
        *(undefined1 *)(param_1 + 0x567d) = 0;
      }
    }
    FUN_100169bc4(param_1 + 0x18);
    return;
  }
  return;
}



/*
 * FUN_100160e54
 * VA: 0x100160e54 | Source: functions/10016.c:334
 * CE-gate: YES (14x) | Guest-gate: NO
 * Callees: FUN_1000153b4, FUN_10001629c, FUN_1000165f0, FUN_10003330c, FUN_100102198, FUN_1001021f0, FUN_100102240, FUN_100102af4 (+139 more)
 * Callers: FUN_100160c50
 */
void FUN_100160e54(long param_1)

{
  string *psVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte ****ppppbVar4;
  size_t sVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  string sVar10;
  byte bVar11;
  byte bVar12;
  byte ***pppbVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  string *psVar26;
  byte ****ppppbVar27;
  undefined8 *puVar28;
  string *psVar29;
  string *psVar30;
  byte *pbVar31;
  byte *pbVar32;
  string *psVar33;
  undefined4 uVar34;
  long lVar35;
  int *piVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  void *local_d0 [2];
  char local_b9;
  void *local_b8 [2];
  char local_a1;
  byte ***local_a0;
  size_t sStack_98;
  undefined8 local_90;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  psVar29 = (string *)(param_1 + 0x5490);
  lVar21 = param_1 + 0x18;
  lVar20 = param_1 + 0x30;
  iVar16 = FUN_1004f1698(lVar20);
  if ((iVar16 != 0) && (uVar17 = FUN_100169d08(lVar21), (uVar17 & 1) == 0)) {
    uVar17 = FUN_1004f1680(lVar20);
    if ((uVar17 & 1) == 0) {
      uVar17 = FUN_100131560();
      if ((uVar17 & 1) == 0) {
        FUN_1001633f4(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x5670) = *(undefined1 *)(param_1 + 0x1b2);
      *(undefined1 *)(param_1 + 0x5671) = *(undefined1 *)(param_1 + 0x1b1);
      FUN_1000153b4(param_1 + 0x5468,param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x5664) = *(undefined4 *)(param_1 + 0x1a8);
      FUN_100163470(param_1,param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x55d0) = *(undefined4 *)(param_1 + 0x178);
      uVar7 = *(uint *)(param_1 + 0x184);
      *(uint *)(param_1 + 0x55d4) = uVar7;
      uVar8 = *(uint *)(param_1 + 0x17c);
      *(uint *)(param_1 + 0x55d8) = uVar8;
      uVar9 = *(uint *)(param_1 + 0x180);
      if (uVar9 <= uVar8) {
        uVar9 = uVar8 + 1;
      }
      *(uint *)(param_1 + 0x55dc) = uVar9;
      if ((uVar7 < uVar8) || (uVar8 = uVar7, uVar9 < uVar7)) {
        if (uVar8 <= uVar9) {
          uVar9 = uVar8;
        }
        *(uint *)(param_1 + 0x55d4) = uVar9;
      }
      *(undefined8 *)(param_1 + 0x55e8) = *(undefined8 *)(param_1 + 0x154);
      *(undefined8 *)(param_1 + 0x55e0) = *(undefined8 *)(param_1 + 0x14c);
      *(undefined4 *)(param_1 + 0x5608) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined8 *)(param_1 + 0x55f8) = *(undefined8 *)(param_1 + 0x164);
      *(undefined8 *)(param_1 + 22000) = *(undefined8 *)(param_1 + 0x15c);
      *(undefined8 *)(param_1 + 0x5600) = *(undefined8 *)(param_1 + 0x16c);
      *(undefined4 *)(param_1 + 0x5668) = *(undefined4 *)(param_1 + 0x174);
      *(undefined8 *)(param_1 + 0x5658) = *(undefined8 *)(param_1 + 0x198);
      *(undefined8 *)(param_1 + 0x5650) = *(undefined8 *)(param_1 + 400);
      *(undefined4 *)(param_1 + 0x5660) = *(undefined4 *)(param_1 + 0x1a0);
      auVar37 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x130),
                         *(undefined1 (*) [16])(param_1 + 0x130),8,1);
      psVar1 = (string *)(param_1 + 0xc0);
      psVar26 = (string *)(param_1 + 0x5478);
      bVar11 = *(byte *)(param_1 + 0xd7);
      uVar17 = (ulong)bVar11;
      sVar6 = *(size_t *)(param_1 + 200);
      if (-1 < (char)bVar11) {
        sVar6 = uVar17;
      }
      bVar12 = *(byte *)(param_1 + 0x548f);
      sVar5 = *(size_t *)(param_1 + 0x5480);
      if (-1 < (char)bVar12) {
        sVar5 = (ulong)bVar12;
      }
      *(long *)(param_1 + 0x55b8) = auVar37._8_8_;
      *(long *)(param_1 + 0x55b0) = auVar37._0_8_;
      if (sVar6 == sVar5) {
        psVar33 = *(string **)psVar1;
        if (-1 < (char)bVar11) {
          psVar33 = psVar1;
        }
        psVar30 = *(string **)psVar26;
        if (-1 < (char)bVar12) {
          psVar30 = psVar26;
        }
        if ((char)bVar11 < '\0') {
          if ((sVar6 != 0) && (iVar16 = _memcmp(psVar33,psVar30,sVar6), iVar16 != 0))
          goto LAB_10016103c;
        }
        else if (sVar6 != 0) {
          if ((uint)(byte)*psVar30 == ((uint)*(string **)psVar1 & 0xff)) {
            psVar33 = (string *)(param_1 + 0xc1);
            do {
              uVar17 = uVar17 - 1;
              psVar30 = psVar30 + 1;
              if (uVar17 == 0) goto LAB_10016111c;
              sVar10 = *psVar33;
              psVar33 = psVar33 + 1;
            } while (sVar10 == *psVar30);
          }
          goto LAB_10016103c;
        }
      }
      else {
LAB_10016103c:
        std::string::operator=(psVar26,psVar1);
        bVar11 = *(byte *)(param_1 + 0xd7);
        uVar17 = (ulong)bVar11;
        sVar6 = *(size_t *)(param_1 + 200);
        if (-1 < (char)bVar11) {
          sVar6 = uVar17;
        }
        sVar5 = DAT_101d911a0;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          sVar5 = (ulong)DAT_101d911a8._7_1_;
        }
        if (sVar6 == sVar5) {
          psVar33 = *(string **)psVar1;
          if (-1 < (char)bVar11) {
            psVar33 = psVar1;
          }
          pbVar31 = DAT_101d91198;
          if (-1 < (char)DAT_101d911a8._7_1_) {
            pbVar31 = (byte *)&DAT_101d91198;
          }
          if ((char)bVar11 < '\0') {
            if ((sVar6 == 0) || (iVar16 = _memcmp(psVar33,pbVar31,sVar6), iVar16 == 0))
            goto LAB_1001610f8;
          }
          else {
            if (sVar6 == 0) {
LAB_1001610f8:
              std::string::operator=(psVar26,(string *)&DAT_101d91198);
              *(undefined4 *)(param_1 + 0x5624) = 0xffffffff;
              FUN_1004f15d8(param_1 + 0x5088);
              goto LAB_10016111c;
            }
            if ((uint)*pbVar31 == ((uint)*(string **)psVar1 & 0xff)) {
              pbVar32 = (byte *)(param_1 + 0xc1);
              do {
                uVar17 = uVar17 - 1;
                pbVar31 = pbVar31 + 1;
                if (uVar17 == 0) goto LAB_1001610f8;
                bVar11 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar11 == *pbVar31);
            }
          }
        }
        FUN_1001634c4(param_1,psVar1,0);
      }
LAB_10016111c:
      psVar1 = (string *)(param_1 + 0xf8);
      bVar11 = *(byte *)(param_1 + 0x10f);
      uVar17 = (ulong)bVar11;
      sVar6 = *(size_t *)(param_1 + 0x100);
      if (-1 < (char)bVar11) {
        sVar6 = uVar17;
      }
      bVar12 = *(byte *)(param_1 + 0x54a7);
      sVar5 = *(size_t *)(param_1 + 0x5498);
      if (-1 < (char)bVar12) {
        sVar5 = (ulong)bVar12;
      }
      if (sVar6 == sVar5) {
        psVar33 = *(string **)psVar1;
        if (-1 < (char)bVar11) {
          psVar33 = psVar1;
        }
        psVar30 = *(string **)psVar29;
        if (-1 < (char)bVar12) {
          psVar30 = psVar29;
        }
        if ((char)bVar11 < '\0') {
          if ((sVar6 != 0) && (iVar16 = _memcmp(psVar33,psVar30,sVar6), iVar16 != 0))
          goto LAB_1001611b4;
        }
        else if (sVar6 != 0) {
          if ((uint)(byte)*psVar30 == ((uint)*(string **)psVar1 & 0xff)) {
            psVar33 = (string *)(param_1 + 0xf9);
            do {
              uVar17 = uVar17 - 1;
              psVar30 = psVar30 + 1;
              if (uVar17 == 0) goto LAB_100161294;
              sVar10 = *psVar33;
              psVar33 = psVar33 + 1;
            } while (sVar10 == *psVar30);
          }
          goto LAB_1001611b4;
        }
      }
      else {
LAB_1001611b4:
        std::string::operator=(psVar29,psVar1);
        bVar11 = *(byte *)(param_1 + 0x10f);
        uVar17 = (ulong)bVar11;
        sVar6 = *(size_t *)(param_1 + 0x100);
        if (-1 < (char)bVar11) {
          sVar6 = uVar17;
        }
        sVar5 = DAT_101d911a0;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          sVar5 = (ulong)DAT_101d911a8._7_1_;
        }
        if (sVar6 == sVar5) {
          psVar33 = *(string **)psVar1;
          if (-1 < (char)bVar11) {
            psVar33 = psVar1;
          }
          pbVar31 = DAT_101d91198;
          if (-1 < (char)DAT_101d911a8._7_1_) {
            pbVar31 = (byte *)&DAT_101d91198;
          }
          if ((char)bVar11 < '\0') {
            if ((sVar6 == 0) || (iVar16 = _memcmp(psVar33,pbVar31,sVar6), iVar16 == 0))
            goto LAB_100161270;
          }
          else {
            if (sVar6 == 0) {
LAB_100161270:
              std::string::operator=(psVar29,(string *)&DAT_101d91198);
              *(undefined4 *)(param_1 + 0x5628) = 0xffffffff;
              FUN_1004f15d8(param_1 + 0x52c8);
              goto LAB_100161294;
            }
            if ((uint)*pbVar31 == ((uint)*(string **)psVar1 & 0xff)) {
              pbVar32 = (byte *)(param_1 + 0xf9);
              do {
                uVar17 = uVar17 - 1;
                pbVar31 = pbVar31 + 1;
                if (uVar17 == 0) goto LAB_100161270;
                bVar11 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar11 == *pbVar31);
            }
          }
        }
        FUN_1001635bc(param_1,psVar1,0);
      }
LAB_100161294:
      *(undefined1 *)(param_1 + 0x5673) = *(undefined1 *)(param_1 + 0x1b0);
      *(undefined2 *)(param_1 + 0x5674) = *(undefined2 *)(param_1 + 0x1ac);
      puVar2 = (uint *)(param_1 + 0x53a8);
      FUN_10001629c(puVar2,0);
      FUN_100169740(puVar2,param_1 + 0x1b8);
      FUN_10001629c(param_1 + 0x53b8,0);
      FUN_100169740(param_1 + 0x53b8,param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x55c0) = *(undefined8 *)(param_1 + 0x140);
      FUN_1004e3004(param_1 + 0x5550);
      *(undefined4 *)(param_1 + 0x55c8) = *(undefined4 *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x560c) = 0;
      if (*(int *)(param_1 + 0x53a8) != 0) {
        lVar35 = 0;
        uVar17 = 0;
        do {
          lVar18 = *(long *)(param_1 + 0x53b0) + lVar35;
          if (*(char *)(lVar18 + 0x17) < '\0') {
            lVar18 = *(long *)(*(long *)(param_1 + 0x53b0) + lVar35);
          }
          iVar16 = FUN_10034be94(lVar18);
          if (iVar16 != 0) {
            *(int *)(param_1 + 0x560c) = *(int *)(param_1 + 0x560c) + 1;
          }
          uVar17 = uVar17 + 1;
          lVar35 = lVar35 + 0x18;
        } while (uVar17 < *puVar2);
      }
      FUN_10014f630(lVar20);
      if ((*(char *)(param_1 + 0x567e) == '\0') && (*(int *)(param_1 + 0x55cc) == 1)) {
        bVar14 = true;
        *(undefined1 *)(param_1 + 0x567e) = 1;
        FUN_1004e3004(param_1 + 0x5558);
        auVar37 = SEXT816(*(long *)(param_1 + 0x55b8)) * SEXT816(0x1845c8a0ce512957);
        FUN_100102240("lastLoginDay",(int)(auVar37._8_8_ >> 0xd) - (auVar37._12_4_ >> 0x1f),1);
        FUN_100102240("karmaRating",*(undefined4 *)(param_1 + 0x5608),1);
        FUN_100102240("accountLevel",*(undefined4 *)(param_1 + 0x55d0),1);
        FUN_100102240("wins",*(undefined4 *)(param_1 + 0x55e8),1);
        uVar19 = FUN_1001636b0(param_1);
        FUN_100102240("numHeroesUnlocked",uVar19,1);
        FUN_100102240("gloryBalance",*(undefined4 *)(param_1 + 0x5454),1);
        FUN_100102240("iceBalance",*(undefined4 *)(param_1 + 0x5450),1);
        FUN_100102240("opalBalance",*(undefined4 *)(param_1 + 0x545c),1);
        FUN_100102240("essenceBalance",*(undefined4 *)(param_1 + 0x5458),1);
        FUN_100102240("lifetimeSpend",*(undefined4 *)(param_1 + 0x5650),1);
        FUN_100102240("lifetimeSpendCount",*(undefined4 *)(param_1 + 0x5654),1);
        FUN_100102240("lifetimePoints",*(undefined4 *)(param_1 + 0x5658),1);
        FUN_100102240("cohort",*(undefined4 *)(param_1 + 0x565c),1);
        FUN_100102240("spenderLevel",*(undefined4 *)(param_1 + 0x5660),1);
        auVar37 = SEXT816(*(long *)(param_1 + 0x55b0)) * SEXT816(0x1845c8a0ce512957);
        FUN_100102240("lastSpendEpochDay",(int)(auVar37._8_8_ >> 0xd) - (auVar37._12_4_ >> 0x1f),1);
        bVar11 = *(byte *)(param_1 + 0x548f);
        uVar17 = (ulong)bVar11;
        sVar6 = *(size_t *)(param_1 + 0x5480);
        if (-1 < (char)bVar11) {
          sVar6 = uVar17;
        }
        sVar5 = DAT_101d911a0;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          sVar5 = (ulong)DAT_101d911a8._7_1_;
        }
        if (sVar6 == sVar5) {
          psVar1 = *(string **)psVar26;
          if (-1 < (char)bVar11) {
            psVar1 = psVar26;
          }
          pbVar31 = DAT_101d91198;
          if (-1 < (char)DAT_101d911a8._7_1_) {
            pbVar31 = (byte *)&DAT_101d91198;
          }
          if ((char)bVar11 < '\0') {
            if (sVar6 == 0) goto LAB_100161594;
            iVar16 = _memcmp(psVar1,pbVar31,sVar6);
            bVar14 = iVar16 == 0;
LAB_10016158c:
            bVar14 = !bVar14;
          }
          else if (sVar6 == 0) {
LAB_100161594:
            bVar14 = false;
          }
          else {
            if ((uint)*pbVar31 == ((uint)*(string **)psVar26 & 0xff)) {
              pbVar32 = (byte *)(param_1 + 0x5479);
              do {
                uVar17 = uVar17 - 1;
                pbVar31 = pbVar31 + 1;
                if (uVar17 == 0) break;
                bVar11 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar11 == *pbVar31);
              bVar14 = uVar17 == 0;
              goto LAB_10016158c;
            }
            bVar14 = true;
          }
        }
        bVar15 = true;
        FUN_1001021f0("member_guild",bVar14,1);
        bVar11 = *(byte *)(param_1 + 0x54a7);
        uVar17 = (ulong)bVar11;
        sVar6 = *(size_t *)(param_1 + 0x5498);
        if (-1 < (char)bVar11) {
          sVar6 = uVar17;
        }
        sVar5 = DAT_101d911a0;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          sVar5 = (ulong)DAT_101d911a8._7_1_;
        }
        if (sVar6 == sVar5) {
          psVar1 = *(string **)psVar29;
          if (-1 < (char)bVar11) {
            psVar1 = psVar29;
          }
          pbVar31 = DAT_101d91198;
          if (-1 < (char)DAT_101d911a8._7_1_) {
            pbVar31 = (byte *)&DAT_101d91198;
          }
          if ((char)bVar11 < '\0') {
            if (sVar6 == 0) goto LAB_100161660;
            iVar16 = _memcmp(psVar1,pbVar31,sVar6);
            bVar15 = iVar16 == 0;
LAB_100161658:
            bVar15 = !bVar15;
          }
          else if (sVar6 == 0) {
LAB_100161660:
            bVar15 = false;
          }
          else {
            if ((uint)*pbVar31 == ((uint)*(string **)psVar29 & 0xff)) {
              pbVar32 = (byte *)(param_1 + 0x5491);
              do {
                uVar17 = uVar17 - 1;
                pbVar31 = pbVar31 + 1;
                if (uVar17 == 0) break;
                bVar11 = *pbVar32;
                pbVar32 = pbVar32 + 1;
              } while (bVar11 == *pbVar31);
              bVar15 = uVar17 == 0;
              goto LAB_100161658;
            }
            bVar15 = true;
          }
        }
        FUN_1001021f0("member_team",bVar15,1);
        uVar19 = FUN_100126df4();
        FUN_100102198("clientLanguage",uVar19,1);
        auVar37._0_8_ = (double)*(int *)(param_1 + 0x565c);
        auVar37._8_8_ = 0;
        FUN_1004d32ec(auVar37,&local_a0,0x20,"%Y-%m-%d");
        FUN_100102198("cohortDay",&local_a0,1);
        auVar38._0_8_ = (double)*(int *)(param_1 + 0x565c);
        auVar38._8_8_ = 0;
        FUN_1004d32ec(auVar38,&local_a0,0x20,"%Y-%m");
        FUN_100102198("cohortMonth",&local_a0,1);
        lVar20 = FUN_1004f1a74(0);
        lVar20 = lVar20 - *(int *)(param_1 + 0x565c);
        if (0 < lVar20) {
          fVar39 = (float)lVar20;
          FUN_100102240("accountAgeDays",(int)(fVar39 * 1.1574074e-05),1);
          FUN_100102240("accountAgeMonths",(int)(fVar39 * 3.8580248e-07),1);
        }
        FUN_10003330c(&local_a0,&DAT_101d91198);
        if (*puVar2 != 0) {
          lVar20 = 0;
          uVar17 = 0;
          do {
            std::string::append((char *)&local_a0);
            puVar28 = (undefined8 *)(*(long *)(param_1 + 0x53b0) + lVar20);
            puVar3 = (undefined8 *)*puVar28;
            if (-1 < *(char *)((long)puVar28 + 0x17)) {
              puVar3 = puVar28;
            }
            std::string::append((char *)&local_a0,(ulong)puVar3);
            std::string::append((char *)&local_a0);
            uVar17 = uVar17 + 1;
            lVar20 = lVar20 + 0x18;
          } while (uVar17 < *puVar2);
        }
        ppppbVar4 = (byte ****)local_a0;
        if (-1 < (long)local_90) {
          ppppbVar4 = &local_a0;
        }
        FUN_100102198("allUnlocks",ppppbVar4,1);
        if (local_90._7_1_ < '\0') {
          operator_delete(local_a0);
        }
        local_a0 = (byte ***)0x0;
        sStack_98 = 0;
        local_90 = 0;
        lVar20 = FUN_1004f0338();
        FUN_1004e357c(lVar20 + 0xd0,&local_a0);
        ppppbVar4 = (byte ****)local_a0;
        if (-1 < (long)local_90) {
          ppppbVar4 = &local_a0;
        }
        FUN_100102198("playerName",ppppbVar4,1);
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        FUN_100102af4();
      }
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x318);
  if (iVar16 != 0) {
    FUN_10014f8d0(param_1 + 0x318);
    FUN_100169cec(lVar21);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x378);
  if (iVar16 != 0) {
    FUN_10014f9c0(param_1 + 0x378);
    FUN_100169cec(lVar21);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3d8);
  if (iVar16 != 0) {
    FUN_100163700(param_1);
    FUN_100150068(param_1 + 0x3d8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x478);
  if (iVar16 != 0) {
    FUN_10014fab0(param_1 + 0x478);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4b8);
  if (iVar16 != 0) {
    FUN_10014ff04(param_1 + 0x4b8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4f8);
  if (iVar16 != 0) {
    FUN_10014fbb0(param_1 + 0x4f8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x538);
  if ((iVar16 != 0) && (uVar17 = FUN_100131560(), (uVar17 & 1) == 0)) {
    FUN_10014fcb0(param_1 + 0x538);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x578);
  if (iVar16 != 0) {
    FUN_10014fd7c(param_1 + 0x578);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x5b8);
  if (iVar16 != 0) {
    FUN_10014fe40(param_1 + 0x5b8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x5f8);
  if (iVar16 != 0) {
    FUN_10014ffc8(param_1 + 0x5f8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x628);
  if (iVar16 != 0) {
    FUN_100163764(param_1);
  }
  iVar16 = FUN_1004f1698();
  if (iVar16 != 0) {
    FUN_100163844(param_1);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4bf0);
  if (iVar16 != 0) {
    FUN_1001639cc(param_1);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3540);
  if ((iVar16 != 0) && (*(int *)(param_1 + 0x3578) == 0)) {
    FUN_100150ed4(param_1 + 0x3540);
    *(undefined1 *)(param_1 + 0x5679) = 1;
  }
  iVar16 = FUN_1004f1698(param_1 + 0x668);
  if (iVar16 != 0) {
    FUN_1004f030c();
    FUN_1001501bc(param_1 + 0x668);
  }
  iVar16 = FUN_1004f1698(param_1 + 0xb68);
  if (iVar16 != 0) {
    FUN_1004f030c();
  }
  iVar16 = FUN_1004f1698(param_1 + 0xb98);
  if (iVar16 != 0) {
    FUN_1001502a4(param_1 + 0xb98);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0xfe0);
  if (iVar16 != 0) {
    FUN_100150480(param_1 + 0xfe0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2778);
  if (iVar16 != 0) {
    FUN_100150570(param_1 + 0x2778);
    if (*(int *)(param_1 + 0x27a0) != 0) {
      if (*(char *)(param_1 + 0x567a) != '\0') {
        FUN_100165784(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x567a) = 0;
    }
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x1040);
  if ((iVar16 != 0) && (FUN_10015074c(param_1 + 0x1040), *(int *)(param_1 + 0x1080) != 0)) {
    if (*(char *)(param_1 + 0x567a) != '\0') {
      FUN_100165784(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x567a) = 0;
  }
  iVar16 = FUN_1004f1698(param_1 + 0x14d0);
  if ((iVar16 != 0) && (FUN_100150884(param_1 + 0x14d0), *(int *)(param_1 + 0x1588) != 0)) {
    if (*(char *)(param_1 + 0x567a) != '\0') {
      FUN_100165784(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x567a) = 0;
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2bc0);
  if ((iVar16 != 0) && (*(int *)(param_1 + 0x2c00) == 0)) {
    if (*(char *)(param_1 + 0x567a) != '\0') {
      FUN_100165784(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x567a) = 0;
    std::string::operator=((string *)(param_1 + 0x54c0),(string *)&DAT_101d91198);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x1e00);
  if ((iVar16 != 0) && (*(int *)(param_1 + 0x2c00) == 0)) {
    if (*(char *)(param_1 + 0x567a) != '\0') {
      FUN_100165784(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x567a) = 0;
    std::string::operator=((string *)(param_1 + 0x54c0),(string *)&DAT_101d91198);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2c20);
  if (iVar16 != 0) {
    FUN_100150910(param_1 + 0x2c20);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2c80);
  if (iVar16 != 0) {
    FUN_100150a00(param_1 + 0x2c80);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2ce0);
  if (iVar16 != 0) {
    FUN_100150af0(param_1 + 0x2ce0);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2d40);
  if (iVar16 != 0) {
    FUN_100150be0(param_1 + 0x2d40);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2da0);
  if (iVar16 != 0) {
    FUN_100150cd0(param_1 + 0x2da0);
    uVar17 = FUN_100131560();
    if ((uVar17 & 1) == 0) {
      FUN_100169cec(param_1 + 0x278);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x2e00);
  if (iVar16 != 0) {
    FUN_100150dc0(param_1 + 0x2e00);
    FUN_1004f030c();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x1e60);
  if (iVar16 != 0) {
    FUN_100150e48(param_1 + 0x1e60);
    FUN_1004f030c();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3848);
  if (iVar16 != 0) {
    FUN_100163c0c(param_1);
    FUN_100152cdc();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x39c0);
  if (iVar16 != 0) {
    FUN_100163c8c(param_1);
    FUN_100152d18();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3a08);
  if (iVar16 != 0) {
    FUN_100163c8c(param_1);
    FUN_100152d54();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3580);
  if (iVar16 != 0) {
    FUN_100151054(param_1 + 0x3580);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x35f8);
  if (iVar16 != 0) {
    FUN_100152938(param_1 + 0x35f8);
    FUN_100169cec(lVar21);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3650);
  if (iVar16 != 0) {
    FUN_100152a0c(param_1 + 0x3650);
  }
  iVar16 = FUN_1004f1698(param_1 + 14000);
  if (iVar16 != 0) {
    FUN_100152afc(param_1 + 14000);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3710);
  if (iVar16 != 0) {
    FUN_100152bec(param_1 + 0x3710);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3890);
  if (iVar16 != 0) {
    FUN_1001515b8(param_1 + 0x3890);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x38f0);
  if (iVar16 != 0) {
    FUN_1001516c8(param_1 + 0x38f0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3c38);
  if (iVar16 != 0) {
    FUN_100154da0(param_1 + 0x3c38);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3d60);
  if (iVar16 != 0) {
    FUN_100155178(param_1 + 0x3d60);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3de0);
  if (iVar16 != 0) {
    FUN_100155378(param_1 + 0x3de0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3e28);
  if (iVar16 != 0) {
    FUN_100155480(param_1 + 0x3e28);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3928);
  if (iVar16 != 0) {
    FUN_1001524e8(param_1 + 0x3928);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3980);
  if (iVar16 != 0) {
    FUN_100152618(param_1 + 0x3980);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3a50);
  if (iVar16 != 0) {
    FUN_10015148c(param_1 + 0x3a50);
    FUN_100163d74(param_1);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3aa8);
  if (iVar16 != 0) {
    FUN_100163470(param_1,param_1 + 0x3ad0);
    FUN_100152718(param_1 + 0x3aa8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3b10);
  if (iVar16 != 0) {
    FUN_100163470(param_1,param_1 + 0x3b38);
    FUN_100152828(param_1 + 0x3b10);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3b78);
  if (iVar16 != 0) {
    FUN_100152d90();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x37b8);
  if (iVar16 != 0) {
    FUN_100163edc(param_1);
    FUN_100152e08();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3770);
  if (iVar16 != 0) {
    FUN_100163f5c(param_1);
    FUN_100152dcc();
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3bb8);
  if (iVar16 != 0) {
    FUN_100151770(param_1 + 0x3bb8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3ea8);
  if (iVar16 != 0) {
    FUN_100151870(param_1 + 0x3ea8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3ee8);
  if (iVar16 != 0) {
    FUN_100151970(param_1 + 0x3ee8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3f28);
  if (iVar16 != 0) {
    FUN_100151a70(param_1 + 0x3f28);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3f68);
  if (iVar16 != 0) {
    FUN_100151b70(param_1 + 0x3f68);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3fa8);
  if (iVar16 != 0) {
    FUN_100151c70(param_1 + 0x3fa8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3fe8);
  if (iVar16 != 0) {
    FUN_100151d70(param_1 + 0x3fe8);
  }
  lVar20 = param_1 + 0x4010;
  iVar16 = FUN_1004f1698(lVar20);
  if ((iVar16 != 0) && (iVar16 = FUN_1004f1680(lVar20), iVar16 != 0)) {
    uVar19 = FUN_100331578();
    FUN_10003330c(local_b8,(undefined1 *)(param_1 + 0x4038));
    FUN_10003330c(local_d0,(undefined1 *)(param_1 + 0x4050));
    FUN_100330724(uVar19,local_b8,local_d0);
    if (local_b9 < '\0') {
      operator_delete(local_d0[0]);
    }
    if (local_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
    if (*(char *)(param_1 + 0x404f) < '\0') {
      **(undefined1 **)(param_1 + 0x4038) = 0;
      *(undefined8 *)(param_1 + 0x4040) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x4038) = 0;
      *(undefined1 *)(param_1 + 0x404f) = 0;
    }
    if (*(char *)(param_1 + 0x4067) < '\0') {
      **(undefined1 **)(param_1 + 0x4050) = 0;
      *(undefined8 *)(param_1 + 0x4058) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x4050) = 0;
      *(undefined1 *)(param_1 + 0x4067) = 0;
    }
    FUN_100151e10(lVar20);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4070);
  if (iVar16 != 0) {
    FUN_100151f44(param_1 + 0x4070);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x40b0);
  if (iVar16 != 0) {
    FUN_10015204c(param_1 + 0x40b0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x40f0);
  if (iVar16 != 0) {
    FUN_100152120(param_1 + 0x40f0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4130);
  if (iVar16 != 0) {
    if (*(int *)(param_1 + 0x4158) != 0) {
      lVar20 = 0;
      uVar17 = 0;
      do {
        uVar19 = FUN_100341d4c();
        FUN_10034313c(uVar19,*(long *)(param_1 + 0x4160) + lVar20);
        uVar17 = uVar17 + 1;
        lVar20 = lVar20 + 0x78;
      } while (uVar17 < *(uint *)(param_1 + 0x4158));
    }
    FUN_1001521f4(param_1 + 0x4130);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x41a0);
  if (iVar16 != 0) {
    FUN_100152350(param_1 + 0x41a0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4200);
  if (iVar16 != 0) {
    FUN_100152440(param_1 + 0x4200);
  }
  lVar20 = param_1 + 0x4230;
  iVar16 = FUN_1004f1698(lVar20);
  if (iVar16 != 0) {
    iVar16 = FUN_1004f1680(lVar20);
    if ((iVar16 == 0) || (*(char *)(param_1 + 0x4448) == '\0')) goto LAB_1001624b0;
    puVar28 = (undefined8 *)(param_1 + 0x43b0);
    bVar11 = *(byte *)(param_1 + 0x43c7);
    uVar17 = (ulong)bVar11;
    sVar6 = *(size_t *)(param_1 + 0x43b8);
    if (-1 < (char)bVar11) {
      sVar6 = uVar17;
    }
    sVar5 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar5 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar6 == sVar5) {
      puVar3 = (void *)*puVar28;
      if (-1 < (char)bVar11) {
        puVar3 = puVar28;
      }
      pbVar31 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar31 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar11 < '\0') {
        if ((sVar6 != 0) && (iVar16 = _memcmp(puVar3,pbVar31,sVar6), iVar16 != 0))
        goto LAB_1001622b0;
      }
      else if (sVar6 != 0) {
        if ((uint)*pbVar31 == ((uint)(void *)*puVar28 & 0xff)) {
          pbVar32 = (byte *)(param_1 + 0x43b1);
          uVar23 = uVar17;
          do {
            uVar23 = uVar23 - 1;
            pbVar31 = pbVar31 + 1;
            if (uVar23 == 0) goto LAB_1001624b0;
            bVar12 = *pbVar32;
            pbVar32 = pbVar32 + 1;
          } while (bVar12 == *pbVar31);
        }
        goto LAB_1001622b0;
      }
    }
    else {
LAB_1001622b0:
      bVar12 = *(byte *)(param_1 + 0x548f);
      sVar5 = *(size_t *)(param_1 + 0x5480);
      if (-1 < (char)bVar12) {
        sVar5 = (ulong)bVar12;
      }
      if (sVar6 == sVar5) {
        pbVar31 = (byte *)(param_1 + 0x5478);
        puVar3 = (undefined8 *)*puVar28;
        if (-1 < (char)bVar11) {
          puVar3 = puVar28;
        }
        pbVar32 = *(byte **)pbVar31;
        if (-1 < (char)bVar12) {
          pbVar32 = pbVar31;
        }
        if ((char)bVar11 < '\0') {
          if ((sVar6 == 0) || (iVar16 = _memcmp(puVar3,pbVar32,sVar6), iVar16 == 0))
          goto LAB_10016233c;
        }
        else if (sVar6 == 0) {
LAB_10016233c:
          FUN_100163fdc(param_1 + 0x5088,lVar20);
          local_a0 = (byte ***)0x0;
          sStack_98 = 0;
          local_90 = 0;
          FUN_1004ef16c(&local_a0);
          plVar22 = (long *)(param_1 + 0x4270);
          if (*(char *)(param_1 + 0x4287) < '\0') {
            plVar22 = (long *)*plVar22;
          }
          FUN_100102198("guildName",plVar22,1);
          if (*(char *)(param_1 + 0x548f) < '\0') {
            pbVar31 = *(byte **)pbVar31;
          }
          FUN_100102198("guildUUID",pbVar31,1);
          uVar17 = local_90;
          pppbVar13 = local_a0;
          uVar9 = *(uint *)(param_1 + 0x5260);
          ppppbVar4 = (byte ****)local_a0;
          sVar6 = sStack_98;
          if (-1 < (long)local_90) {
            ppppbVar4 = &local_a0;
            sVar6 = local_90 >> 0x38;
          }
          if (uVar9 == 0) {
            uVar34 = 0xffffffff;
          }
          else {
            uVar23 = 0;
            lVar35 = *(long *)(param_1 + 0x5268);
            pbVar31 = (byte *)(lVar35 + 1);
            do {
              puVar28 = (undefined8 *)(lVar35 + uVar23 * 0x108);
              bVar11 = *(byte *)((long)puVar28 + 0x17);
              uVar24 = (ulong)bVar11;
              sVar5 = puVar28[1];
              if (-1 < (char)bVar11) {
                sVar5 = uVar24;
              }
              if (sVar5 == sVar6) {
                if ((char)bVar11 < '\0') {
                  if ((sVar6 == 0) ||
                     (iVar16 = _memcmp((void *)*puVar28,ppppbVar4,sVar6), iVar16 == 0))
                  goto LAB_100162490;
                }
                else {
                  if (sVar6 == 0) goto LAB_100162490;
                  pbVar32 = pbVar31;
                  ppppbVar27 = ppppbVar4;
                  if ((uint)*(byte *)ppppbVar4 == ((uint)(void *)*puVar28 & 0xff)) {
                    do {
                      ppppbVar27 = (byte ****)((long)ppppbVar27 + 1);
                      uVar24 = uVar24 - 1;
                      if (uVar24 == 0) goto LAB_100162490;
                      bVar11 = *pbVar32;
                      pbVar32 = pbVar32 + 1;
                    } while (bVar11 == *(byte *)ppppbVar27);
                  }
                }
              }
              uVar23 = uVar23 + 1;
              pbVar31 = pbVar31 + 0x108;
            } while (uVar23 != uVar9);
            uVar23 = 0xffffffff;
LAB_100162490:
            uVar34 = (undefined4)uVar23;
          }
          *(undefined4 *)(param_1 + 0x5624) = uVar34;
          if ((long)uVar17 < 0) {
            operator_delete(pppbVar13);
          }
        }
        else if ((uint)*pbVar32 == ((uint)(undefined8 *)*puVar28 & 0xff)) {
          pbVar25 = (byte *)(param_1 + 0x43b1);
          do {
            uVar17 = uVar17 - 1;
            pbVar32 = pbVar32 + 1;
            if (uVar17 == 0) goto LAB_10016233c;
            bVar11 = *pbVar25;
            pbVar25 = pbVar25 + 1;
          } while (bVar11 == *pbVar32);
        }
      }
    }
LAB_1001624b0:
    FUN_100152e44(lVar20);
  }
  lVar20 = param_1 + 0x44d0;
  iVar16 = FUN_1004f1698(lVar20);
  if (iVar16 != 0) {
    iVar16 = FUN_1004f1680(lVar20);
    if ((iVar16 != 0) && (*(char *)(param_1 + 0x44f5) != '\0')) {
      FUN_1004efbe8(param_1 + 0x4470);
      psVar1 = (string *)(param_1 + 0x4518);
      bVar11 = *(byte *)(param_1 + 0x452f);
      uVar17 = (ulong)bVar11;
      sVar6 = *(size_t *)(param_1 + 0x4520);
      if (-1 < (char)bVar11) {
        sVar6 = uVar17;
      }
      sVar5 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar5 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar6 == sVar5) {
        psVar26 = *(string **)psVar1;
        if (-1 < (char)bVar11) {
          psVar26 = psVar1;
        }
        pbVar31 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar31 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar11 < '\0') {
          if ((sVar6 != 0) && (iVar16 = _memcmp(psVar26,pbVar31,sVar6), iVar16 != 0))
          goto LAB_10016259c;
        }
        else if (sVar6 != 0) {
          if ((uint)*pbVar31 == ((uint)*(string **)psVar1 & 0xff)) {
            pbVar32 = (byte *)(param_1 + 0x4519);
            uVar23 = uVar17;
            do {
              uVar23 = uVar23 - 1;
              pbVar31 = pbVar31 + 1;
              if (uVar23 == 0) goto LAB_100162640;
              bVar12 = *pbVar32;
              pbVar32 = pbVar32 + 1;
            } while (bVar12 == *pbVar31);
          }
          goto LAB_10016259c;
        }
        goto LAB_100162640;
      }
LAB_10016259c:
      bVar12 = *(byte *)(param_1 + 0x548f);
      sVar5 = *(size_t *)(param_1 + 0x5480);
      if (-1 < (char)bVar12) {
        sVar5 = (ulong)bVar12;
      }
      if (sVar6 == sVar5) {
        psVar26 = *(string **)psVar1;
        if (-1 < (char)bVar11) {
          psVar26 = psVar1;
        }
        pbVar31 = *(byte **)(param_1 + 0x5478);
        if (-1 < (char)bVar12) {
          pbVar31 = (byte *)(param_1 + 0x5478);
        }
        if ((char)bVar11 < '\0') {
          if ((sVar6 != 0) && (iVar16 = _memcmp(psVar26,pbVar31,sVar6), iVar16 != 0))
          goto LAB_100162628;
        }
        else if (sVar6 != 0) {
          if ((uint)*pbVar31 == ((uint)*(string **)psVar1 & 0xff)) {
            pbVar32 = (byte *)(param_1 + 0x4519);
            do {
              uVar17 = uVar17 - 1;
              pbVar31 = pbVar31 + 1;
              if (uVar17 == 0) goto LAB_100162640;
              bVar11 = *pbVar32;
              pbVar32 = pbVar32 + 1;
            } while (bVar11 == *pbVar31);
          }
          goto LAB_100162628;
        }
      }
      else {
LAB_100162628:
        uVar17 = FUN_100131560();
        if ((uVar17 & 1) == 0) {
          FUN_1001634c4(param_1,psVar1,1);
        }
      }
LAB_100162640:
      std::string::operator=((string *)(param_1 + 0x5478),psVar1);
    }
    FUN_100152f68(lVar20);
  }
  lVar20 = param_1 + 0x4590;
  iVar16 = FUN_1004f1698(lVar20);
  if (iVar16 != 0) {
    FUN_100153194(lVar20);
    iVar16 = FUN_1004f1680(lVar20);
    if ((iVar16 != 0) && (*(char *)(param_1 + 0x45d4) != '\0')) {
      lVar20 = *(long *)(param_1 + 0x53e0);
      if (lVar20 != 0) {
        if (*(uint *)(param_1 + 0x53d8) != 0) {
          lVar35 = (ulong)*(uint *)(param_1 + 0x53d8) * 0x1a8;
          do {
            lVar20 = FUN_1001690b8(lVar20);
            lVar20 = lVar20 + 0x1a8;
            lVar35 = lVar35 + -0x1a8;
          } while (lVar35 != 0);
        }
        *(undefined4 *)(param_1 + 0x53d8) = 0;
      }
      FUN_1000165f0(param_1 + 0x5560,0);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x45f0);
  if (iVar16 != 0) {
    FUN_100153284(param_1 + 0x45f0);
  }
  iVar16 = FUN_1004f1698(param_1 + 18000);
  if (iVar16 != 0) {
    FUN_100153554(param_1 + 18000);
  }
  lVar20 = param_1 + 0x46b0;
  iVar16 = FUN_1004f1698(lVar20);
  if (iVar16 != 0) {
    iVar16 = FUN_1004f1680(lVar20);
    if (iVar16 != 0) {
      uVar17 = FUN_100131560();
      if ((uVar17 & 1) == 0) {
        FUN_100169cec(lVar21);
      }
      if (*(char *)(param_1 + 0x46f4) != '\0') {
        lVar21 = *(long *)(param_1 + 0x53e0);
        if (lVar21 != 0) {
          if (*(uint *)(param_1 + 0x53d8) != 0) {
            lVar35 = (ulong)*(uint *)(param_1 + 0x53d8) * 0x1a8;
            do {
              lVar21 = FUN_1001690b8(lVar21);
              lVar21 = lVar21 + 0x1a8;
              lVar35 = lVar35 + -0x1a8;
            } while (lVar35 != 0);
          }
          *(undefined4 *)(param_1 + 0x53d8) = 0;
        }
        FUN_1000165f0(param_1 + 0x5560,0);
      }
    }
    FUN_100153374(lVar20);
  }
  lVar21 = param_1 + 0x4710;
  iVar16 = FUN_1004f1698(lVar21);
  if (iVar16 != 0) {
    iVar16 = FUN_1004f1680(lVar21);
    if ((iVar16 != 0) && (*(char *)(param_1 + 0x4754) != '\0')) {
      std::string::operator=((string *)(param_1 + 0x5478),(string *)&DAT_101d91198);
      *(undefined4 *)(param_1 + 0x5624) = 0xffffffff;
      FUN_1004f15d8(param_1 + 0x5088);
    }
    FUN_1001530a4(lVar21);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4770);
  if (iVar16 != 0) {
    FUN_100153644(param_1 + 0x4770);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x47d0);
  if (iVar16 != 0) {
    FUN_100153734(param_1 + 0x47d0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4830);
  if (iVar16 != 0) {
    FUN_100153824(param_1 + 0x4830);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4890);
  if (iVar16 != 0) {
    FUN_100153914(param_1 + 0x4890);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x48f0);
  if (iVar16 != 0) {
    FUN_100153a04(param_1 + 0x48f0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4950);
  if (iVar16 != 0) {
    FUN_100153af4(param_1 + 0x4950);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x49b0);
  if (iVar16 != 0) {
    FUN_100153be4(param_1 + 0x49b0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4a10);
  if (iVar16 != 0) {
    FUN_100153cd4(param_1 + 0x4a10);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4a50);
  if (iVar16 != 0) {
    FUN_100153d98(param_1 + 0x4a50);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4a90);
  if (iVar16 != 0) {
    FUN_100153e5c(param_1 + 0x4a90);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4ad0);
  if (iVar16 != 0) {
    FUN_100153f20(param_1 + 0x4ad0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4530);
  if (iVar16 != 0) {
    FUN_100153464(param_1 + 0x4530);
  }
  lVar21 = param_1 + 0x4b10;
  iVar16 = FUN_1004f1698(lVar21);
  if (iVar16 != 0) {
    iVar16 = FUN_1004f1680(lVar21);
    if ((iVar16 == 0) || (*(char *)(param_1 + 0x4bc8) == '\0')) goto LAB_100162c5c;
    bVar11 = *(byte *)(param_1 + 0x54a7);
    uVar17 = (ulong)bVar11;
    sVar6 = *(size_t *)(param_1 + 0x5498);
    if (-1 < (char)bVar11) {
      sVar6 = uVar17;
    }
    sVar5 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar5 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar6 == sVar5) {
      psVar1 = *(string **)psVar29;
      if (-1 < (char)bVar11) {
        psVar1 = psVar29;
      }
      pbVar31 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar31 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar11 < '\0') {
        if ((sVar6 != 0) && (iVar16 = _memcmp(psVar1,pbVar31,sVar6), iVar16 != 0))
        goto LAB_1001629ec;
      }
      else if (sVar6 != 0) {
        if ((uint)*pbVar31 == ((uint)*(string **)psVar29 & 0xff)) {
          pbVar32 = (byte *)(param_1 + 0x5491);
          do {
            uVar17 = uVar17 - 1;
            pbVar31 = pbVar31 + 1;
            if (uVar17 == 0) goto LAB_100162c5c;
            bVar12 = *pbVar32;
            pbVar32 = pbVar32 + 1;
          } while (bVar12 == *pbVar31);
        }
        goto LAB_1001629ec;
      }
    }
    else {
LAB_1001629ec:
      bVar12 = *(byte *)(param_1 + 0x4b4f);
      uVar17 = (ulong)bVar12;
      sVar5 = *(size_t *)(param_1 + 0x4b40);
      if (-1 < (char)bVar12) {
        sVar5 = uVar17;
      }
      if (sVar5 == sVar6) {
        psVar1 = (string *)(param_1 + 0x4b38);
        psVar26 = *(string **)psVar1;
        if (-1 < (char)bVar12) {
          psVar26 = psVar1;
        }
        psVar33 = *(string **)psVar29;
        if (-1 < (char)bVar11) {
          psVar33 = psVar29;
        }
        if ((char)bVar12 < '\0') {
          if ((sVar6 == 0) || (iVar16 = _memcmp(psVar26,psVar33,sVar6), iVar16 == 0))
          goto LAB_100162a84;
        }
        else if (sVar6 == 0) {
LAB_100162a84:
          *(undefined8 *)(param_1 + 0x52e5) = *(undefined8 *)(param_1 + 0x4b2d);
          *(undefined8 *)(param_1 + 0x52dd) = *(undefined8 *)(param_1 + 0x4b25);
          *(undefined8 *)(param_1 + 0x52d8) = *(undefined8 *)(param_1 + 0x4b20);
          *(undefined8 *)(param_1 + 0x52d0) = *(undefined8 *)(param_1 + 0x4b18);
          std::string::operator=((string *)(param_1 + 0x52f0),psVar1);
          std::string::operator=((string *)(param_1 + 0x5308),(string *)(param_1 + 0x4b50));
          std::string::operator=((string *)(param_1 + 0x5320),(string *)(param_1 + 0x4b68));
          *(undefined8 *)(param_1 + 0x5340) = *(undefined8 *)(param_1 + 0x4b88);
          *(undefined8 *)(param_1 + 0x5338) = *(undefined8 *)(param_1 + 0x4b80);
          *(long *)(param_1 + 0x5350) = SUB168(*(undefined1 (*) [16])(param_1 + 0x4b90),8);
          *(long *)(param_1 + 0x5348) = SUB168(*(undefined1 (*) [16])(param_1 + 0x4b90),0);
          *(undefined1 *)(param_1 + 0x5358) = *(undefined1 *)(param_1 + 0x4ba0);
          FUN_1001694e0(param_1 + 0x5360,param_1 + 0x4ba8);
          FUN_10016958c(param_1 + 0x5370,param_1 + 0x4bb8);
          *(undefined1 *)(param_1 + 0x5380) = *(undefined1 *)(param_1 + 0x4bc8);
          std::string::operator=((string *)(param_1 + 0x5388),(string *)(param_1 + 0x4bd0));
          *(undefined4 *)(param_1 + 0x53a0) = *(undefined4 *)(param_1 + 0x4be8);
          local_a0 = (byte ***)0x0;
          sStack_98 = 0;
          local_90 = 0;
          FUN_1004ef16c(&local_a0);
          uVar17 = local_90;
          pppbVar13 = local_a0;
          uVar9 = *(uint *)(param_1 + 0x4ba8);
          ppppbVar4 = (byte ****)local_a0;
          sVar6 = sStack_98;
          if (-1 < (long)local_90) {
            ppppbVar4 = &local_a0;
            sVar6 = local_90 >> 0x38;
          }
          if (uVar9 == 0) {
            uVar34 = 0xffffffff;
          }
          else {
            uVar23 = 0;
            lVar20 = *(long *)(param_1 + 0x4bb0);
            pbVar31 = (byte *)(lVar20 + 1);
            do {
              puVar28 = (undefined8 *)(lVar20 + uVar23 * 0x38);
              bVar11 = *(byte *)((long)puVar28 + 0x17);
              uVar24 = (ulong)bVar11;
              sVar5 = puVar28[1];
              if (-1 < (char)bVar11) {
                sVar5 = uVar24;
              }
              if (sVar5 == sVar6) {
                if ((char)bVar11 < '\0') {
                  if ((sVar6 == 0) ||
                     (iVar16 = _memcmp((void *)*puVar28,ppppbVar4,sVar6), iVar16 == 0))
                  goto LAB_100162c3c;
                }
                else {
                  if (sVar6 == 0) goto LAB_100162c3c;
                  pbVar32 = pbVar31;
                  ppppbVar27 = ppppbVar4;
                  if ((uint)*(byte *)ppppbVar4 == ((uint)(void *)*puVar28 & 0xff)) {
                    do {
                      ppppbVar27 = (byte ****)((long)ppppbVar27 + 1);
                      uVar24 = uVar24 - 1;
                      if (uVar24 == 0) goto LAB_100162c3c;
                      bVar11 = *pbVar32;
                      pbVar32 = pbVar32 + 1;
                    } while (bVar11 == *(byte *)ppppbVar27);
                  }
                }
              }
              uVar23 = uVar23 + 1;
              pbVar31 = pbVar31 + 0x38;
            } while (uVar23 != uVar9);
            uVar23 = 0xffffffff;
LAB_100162c3c:
            uVar34 = (undefined4)uVar23;
          }
          *(undefined4 *)(param_1 + 0x5628) = uVar34;
          if ((long)uVar17 < 0) {
            operator_delete(pppbVar13);
          }
        }
        else if ((uint)(byte)*psVar33 == ((uint)*(string **)psVar1 & 0xff)) {
          psVar26 = (string *)(param_1 + 0x4b39);
          do {
            uVar17 = uVar17 - 1;
            psVar33 = psVar33 + 1;
            if (uVar17 == 0) goto LAB_100162a84;
            sVar10 = *psVar26;
            psVar26 = psVar26 + 1;
          } while (sVar10 == *psVar33);
        }
      }
    }
LAB_100162c5c:
    FUN_100153fe4(lVar21);
  }
  lVar21 = param_1 + 0x4c50;
  iVar16 = FUN_1004f1698(lVar21);
  if (iVar16 == 0) goto LAB_100162dec;
  iVar16 = FUN_1004f1680(lVar21);
  if ((iVar16 != 0) && (*(char *)(param_1 + 0x4c75) != '\0')) {
    psVar1 = (string *)(param_1 + 0x4c98);
    bVar11 = *(byte *)(param_1 + 0x4caf);
    uVar17 = (ulong)bVar11;
    sVar6 = *(size_t *)(param_1 + 0x4ca0);
    if (-1 < (char)bVar11) {
      sVar6 = uVar17;
    }
    sVar5 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar5 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar6 == sVar5) {
      psVar26 = *(string **)psVar1;
      if (-1 < (char)bVar11) {
        psVar26 = psVar1;
      }
      pbVar31 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar31 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar11 < '\0') {
        if ((sVar6 != 0) && (iVar16 = _memcmp(psVar26,pbVar31,sVar6), iVar16 != 0))
        goto LAB_100162d3c;
      }
      else if (sVar6 != 0) {
        if ((uint)*pbVar31 == ((uint)*(string **)psVar1 & 0xff)) {
          pbVar32 = (byte *)(param_1 + 0x4c99);
          uVar23 = uVar17;
          do {
            uVar23 = uVar23 - 1;
            pbVar31 = pbVar31 + 1;
            if (uVar23 == 0) goto LAB_100162dd4;
            bVar12 = *pbVar32;
            pbVar32 = pbVar32 + 1;
          } while (bVar12 == *pbVar31);
        }
        goto LAB_100162d3c;
      }
      goto LAB_100162dd4;
    }
LAB_100162d3c:
    bVar12 = *(byte *)(param_1 + 0x54a7);
    sVar5 = *(size_t *)(param_1 + 0x5498);
    if (-1 < (char)bVar12) {
      sVar5 = (ulong)bVar12;
    }
    if (sVar6 == sVar5) {
      psVar26 = *(string **)psVar1;
      if (-1 < (char)bVar11) {
        psVar26 = psVar1;
      }
      psVar33 = *(string **)psVar29;
      if (-1 < (char)bVar12) {
        psVar33 = psVar29;
      }
      if ((char)bVar11 < '\0') {
        if ((sVar6 != 0) && (iVar16 = _memcmp(psVar26,psVar33,sVar6), iVar16 != 0))
        goto LAB_100162dc4;
      }
      else if (sVar6 != 0) {
        if ((uint)(byte)*psVar33 == ((uint)*(string **)psVar1 & 0xff)) {
          psVar29 = (string *)(param_1 + 0x4c99);
          do {
            uVar17 = uVar17 - 1;
            psVar33 = psVar33 + 1;
            if (uVar17 == 0) goto LAB_100162dd4;
            sVar10 = *psVar29;
            psVar29 = psVar29 + 1;
          } while (sVar10 == *psVar33);
        }
        goto LAB_100162dc4;
      }
    }
    else {
LAB_100162dc4:
      FUN_1001635bc(param_1,psVar1,1);
    }
LAB_100162dd4:
    std::string::operator=((string *)(param_1 + 0x5490),psVar1);
  }
  FUN_100154278(lVar21);
LAB_100162dec:
  lVar21 = param_1 + 0x4d10;
  iVar16 = FUN_1004f1698(lVar21);
  if (iVar16 != 0) {
    FUN_1001544a4(lVar21);
    iVar16 = FUN_1004f1680(lVar21);
    if ((iVar16 != 0) && (*(char *)(param_1 + 0x4d54) != '\0')) {
      FUN_1001641a4(param_1 + 0x53e8,0);
      *(undefined4 *)(param_1 + 0x561c) = 0;
      FUN_1000165f0(param_1 + 0x5580,0);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4d70);
  if (iVar16 != 0) {
    FUN_100154594(param_1 + 0x4d70);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4dd0);
  if (iVar16 != 0) {
    FUN_100154774(param_1 + 0x4dd0);
  }
  lVar21 = param_1 + 0x4e30;
  iVar16 = FUN_1004f1698(lVar21);
  if (iVar16 != 0) {
    iVar16 = FUN_1004f1680(lVar21);
    if ((iVar16 != 0) && (*(char *)(param_1 + 0x4e74) != '\0')) {
      std::string::operator=((string *)(param_1 + 0x5490),(string *)&DAT_101d91198);
      *(undefined4 *)(param_1 + 0x5628) = 0xffffffff;
      FUN_1004f15d8(param_1 + 0x52c8);
    }
    FUN_1001543b4(lVar21);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4cb0);
  if (iVar16 != 0) {
    FUN_100154684(param_1 + 0x4cb0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4ef0);
  if (iVar16 != 0) {
    *(int *)(param_1 + 0x5610) = (int)*(float *)(param_1 + 0x4f1c);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4f20);
  if (iVar16 != 0) {
    *(int *)(param_1 + 0x5614) = (int)*(float *)(param_1 + 0x4f4c);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4f90);
  if (iVar16 != 0) {
    FUN_100154864(param_1 + 0x4f90);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4fd0);
  if (iVar16 != 0) {
    FUN_100154928(param_1 + 0x4fd0);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x4f50);
  if (iVar16 != 0) {
    FUN_1001549ec(param_1 + 0x4f50);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x5010);
  if (iVar16 != 0) {
    FUN_100154ab0(param_1 + 0x5010);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x5048);
  if (iVar16 != 0) {
    FUN_100154ba8(param_1 + 0x5048);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x438);
  if (iVar16 != 0) {
    FUN_10014f78c(param_1 + 0x438);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3c00);
  if ((iVar16 != 0) && (uVar17 = FUN_100131560(), (uVar17 & 1) == 0)) {
    FUN_100154ca8(param_1 + 0x3c00);
    piVar36 = (int *)(param_1 + 0x5440);
    if (*piVar36 != 0) {
      FUN_10016426c(param_1,piVar36);
      FUN_10001629c(piVar36,0);
    }
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3cb8);
  if (iVar16 != 0) {
    FUN_100154f44(param_1 + 0x3cb8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3da8);
  if (iVar16 != 0) {
    FUN_100155280(param_1 + 0x3da8);
  }
  iVar16 = FUN_1004f1698(param_1 + 0x3e70);
  if (iVar16 != 0) {
    FUN_100155588(param_1 + 0x3e70);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/*
 * FUN_1001630a0
 * VA: 0x1001630a0 | Source: functions/10016.c:1890
 * CE-gate: YES (2x) | Guest-gate: NO
 * Callees: FUN_10002f32c, FUN_10003330c, FUN_1001026f4, FUN_100131560, FUN_10014f5f4, FUN_1001641a4, FUN_10016474c, FUN_100164960 (+12 more)
 * Callers: FUN_100160c50
 */
void FUN_1001630a0(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *****pppppbVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  byte ****local_58;
  size_t local_50;
  byte local_41;
  
  puVar1 = (undefined8 *)(param_1 + 0x5508);
  FUN_10003330c(&local_58,puVar1);
  FUN_1004ef16c(puVar1);
  bVar5 = *(byte *)(param_1 + 0x551f);
  uVar10 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x5510);
  if (-1 < (char)bVar5) {
    sVar2 = uVar10;
  }
  if (-1 < (char)local_41) {
    local_50 = (ulong)local_41;
  }
  if (sVar2 == local_50) {
    puVar3 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar3 = puVar1;
    }
    pppppbVar12 = (byte *****)local_58;
    if (-1 < (char)local_41) {
      pppppbVar12 = &local_58;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar8 = _memcmp(puVar3,pppppbVar12,sVar2), iVar8 != 0))
      goto LAB_100163180;
    }
    else if (sVar2 != 0) {
      if ((uint)*(byte *)pppppbVar12 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x5509);
        do {
          uVar10 = uVar10 - 1;
          pppppbVar12 = (byte *****)((long)pppppbVar12 + 1);
          if (uVar10 == 0) goto LAB_100163190;
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *(byte *)pppppbVar12);
      }
      goto LAB_100163180;
    }
  }
  else {
LAB_100163180:
    uVar10 = FUN_100131560();
    if ((uVar10 & 1) == 0) {
      FUN_10016474c(param_1);
    }
  }
LAB_100163190:
  FUN_1004f0338();
  iVar8 = FUN_1004f1a5c();
  if (iVar8 == 0) {
    lVar9 = FUN_1004f0338();
    iVar8 = *(int *)(lVar9 + 0x98);
    *(int *)(param_1 + 0x55cc) = iVar8;
  }
  else {
    *(undefined4 *)(param_1 + 0x5676) = 0;
    lVar9 = FUN_1004f0338();
    iVar8 = *(int *)(lVar9 + 0x98);
    if ((((iVar8 != 2) && (*(undefined4 *)(param_1 + 0x566c) = 0, *(int *)(param_1 + 0x55cc) != 1))
        && (iVar8 == 1)) && (uVar10 = FUN_100131560(), (uVar10 & 1) == 0)) {
      FUN_100169cec(param_1 + 0x278);
    }
    *(int *)(param_1 + 0x55cc) = iVar8;
    FUN_10014f5f4();
    iVar8 = *(int *)(param_1 + 0x55cc);
  }
  if (iVar8 == 2) {
    fVar15 = *(float *)(param_1 + 0x566c);
    fVar14 = (float)FUN_1010a1cd4();
    fVar14 = *(float *)(param_1 + 0x566c) + fVar14;
    *(float *)(param_1 + 0x566c) = fVar14;
    bVar6 = true;
    bVar7 = false;
    if (fVar15 < 300.0) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar14)) {
        bVar6 = fVar14 < 300.0;
        bVar7 = false;
      }
    }
    if (bVar6 != bVar7) {
      bVar6 = true;
      bVar7 = false;
      if (fVar15 < 600.0) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14)) {
          bVar6 = fVar14 < 600.0;
          bVar7 = false;
        }
      }
      if (((bVar6 != bVar7) && ((900.0 <= fVar15 || (fVar14 < 900.0)))) &&
         ((1200.0 <= fVar15 || (fVar14 < 1200.0)))) goto LAB_100163270;
    }
    FUN_1001026f4(param_1 + 0x54a8);
  }
LAB_100163270:
  lVar9 = FUN_1004f0338();
  if ((*(char *)(lVar9 + 0xec) != '\0') && (*(char *)(param_1 + 0x5676) == '\0')) {
    uVar10 = FUN_1004f1670(param_1 + 0x628);
    if ((uVar10 & 1) == 0) {
      FUN_1004ef818(param_1 + 0x628);
    }
  }
  lVar9 = FUN_1004f0338();
  if ((*(char *)(lVar9 + 0xee) != '\0') && (*(char *)(param_1 + 0x5677) == '\0')) {
    uVar10 = FUN_1004f1670(param_1 + 0x4470);
    if ((uVar10 & 1) == 0) {
      FUN_1004efbe8(param_1 + 0x4470);
    }
  }
  lVar9 = FUN_1004f0338();
  if ((*(char *)(lVar9 + 0xef) != '\0') && (*(char *)(param_1 + 0x5678) == '\0')) {
    uVar10 = FUN_1004f1670(param_1 + 0x4bf0);
    if ((uVar10 & 1) == 0) {
      FUN_1004efe54(param_1 + 0x4bf0);
    }
  }
  lVar9 = FUN_1004f0338();
  if ((*(char *)(lVar9 + 0xed) != '\0') && (*(char *)(param_1 + 0x5679) == '\0')) {
    uVar10 = FUN_1004f1670(param_1 + 0x3540);
    if (((uVar10 & 1) == 0) && (iVar8 = FUN_10002f32c(), iVar8 != 0)) {
      FUN_1004f027c(param_1 + 0x3540);
    }
  }
  if ((*(int *)(param_1 + 0x5618) == 0) || (uVar10 = FUN_1001e5828(), (uVar10 & 1) == 0)) {
    FUN_100164960(param_1 + 0x53c8,0);
  }
  if ((*(int *)(param_1 + 0x5578) == 0) && (lVar9 = *(long *)(param_1 + 0x53e0), lVar9 != 0)) {
    uVar4 = *(uint *)(param_1 + 0x53d8);
    if (uVar4 != 0) {
      lVar13 = (ulong)uVar4 * 0x1a8;
      do {
        lVar9 = FUN_1001690b8(lVar9);
        lVar9 = lVar9 + 0x1a8;
        lVar13 = lVar13 + -0x1a8;
      } while (lVar13 != 0);
    }
    *(uint *)(param_1 + 0x53d8) = 0;
  }
  if (*(int *)(param_1 + 0x561c) == 0) {
    FUN_1001641a4(param_1 + 0x53e8,0);
  }
  if ((char)local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}



/*
 * FUN_1001665d4
 * VA: 0x1001665d4 | Source: functions/10016.c:4298
 * CE-gate: YES (2x) | Guest-gate: NO
 * Callees: FUN_100131560, FUN_10016652c
 * Callers: FUN_1001b7f9c, FUN_1001f206c, FUN_1001f2104, FUN_10022be8c, FUN_100244d88, FUN_1002a40d0, FUN_1002a4e14, FUN_100328764
 */
undefined8 FUN_1001665d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100131560();
  if (((uVar1 & 1) == 0) &&
     (((param_3 & 1) != 0 ||
      ((uVar1 = FUN_100131560(), (uVar1 & 1) == 0 && (*(char *)(param_1 + 0x5670) == '\0')))))) {
    uVar2 = FUN_10016652c(param_1,param_2);
    return uVar2;
  }
  return 1;
}



/*
 * FUN_100168220
 * data fetch/sync with CE gate
 * VA: 0x100168220 | Source: functions/named.c:13515
 * Fptr: __DATA+0x145c170
 * Dylib: Layer 8
 * Layout: +0x278=fetch target object, +0x18=primary fetch target
 * Notes: Gate blocks additional data fetch at +0x278. Inner fetch: FUN_100169cec.
 * CE-gate: YES (2x) | Guest-gate: YES (1x)
 * Callees: FUN_10003330c, FUN_100102198, FUN_100102ab8, FUN_10012d8cc, FUN_100131560, FUN_10014e160, FUN_10014e16c, FUN_10014e1b8 (+24 more)
 */
/* WARNING: Removing unreachable block (ram,0x0001001684d8) */

void FUN_100168220(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_ac [4];
  void *local_a8;
  undefined8 uStack_a0;
  long local_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 **local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 **local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    if (*(int *)(param_2 + 0x28) == 0) {
      lVar6 = *(long *)(param_1 + 0x53e0);
      if (lVar6 != 0) {
        uVar2 = *(uint *)(param_1 + 0x53d8);
        if (uVar2 != 0) {
          lVar8 = (ulong)uVar2 * 0x1a8;
          do {
            lVar6 = FUN_1001690b8(lVar6);
            lVar6 = lVar6 + 0x1a8;
            lVar8 = lVar8 + -0x1a8;
          } while (lVar8 != 0);
        }
        *(uint *)(param_1 + 0x53d8) = 0;
      }
      FUN_100169cec(param_1 + 0x18);
      uVar7 = FUN_100131560();
      if ((uVar7 & 1) == 0) {
        FUN_100169cec(param_1 + 0x278);
      }
      *(undefined2 *)(param_1 + 0x567e) = 0;
      std::string::operator=((string *)(param_1 + 0x5538),(string *)(param_2 + 0x310));
      uVar7 = FUN_100131560();
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_1004f1670(param_1 + 0x39c0);
        if ((uVar7 & 1) == 0) {
          FUN_1004f0680(param_1 + 0x39c0);
        }
      }
      FUN_1004f0338();
      FUN_1004f1a5c();
      FUN_1004f030c();
      FUN_100102ab8(2);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004ef16c(&local_48);
      std::string::operator=((string *)(param_1 + 0x5520),(string *)(param_2 + 0x1c0));
      *(undefined1 *)(param_1 + 0x5680) = *(undefined1 *)(param_2 + 0x1d8);
      FUN_100102198("playerID",&local_48,1);
      uVar5 = FUN_10016a9d4();
      FUN_100102198("region",uVar5,1);
      local_60 = (undefined8 ***)0x0;
      uStack_58 = 0;
      local_50 = 0;
      local_78 = (undefined8 ***)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      FUN_10012d8cc(&local_60,auStack_ac,&local_78,&local_90,&local_a8);
      pppuVar1 = (undefined8 ***)local_78;
      if (-1 < local_68) {
        pppuVar1 = &local_78;
      }
      FUN_100102198("playerEmail",pppuVar1,1);
      FUN_100167f98();
      if (local_98 < 0) {
        operator_delete(local_a8);
      }
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      if (local_68 < 0) {
        operator_delete(local_78);
      }
      if (local_50 < 0) {
        operator_delete(local_60);
      }
      iVar4 = FUN_10052b284();
      if ((iVar4 != 0) && (iVar4 = FUN_1004ef1b4(), iVar4 != 0)) {
        local_60 = (undefined8 ***)0x0;
        uStack_58 = 0;
        local_50 = 0;
        FUN_1004ef19c(&local_60);
        FUN_10052b290("player_uuid",&local_48);
        if (local_50 < 0) {
          operator_delete(local_60);
        }
      }
      iVar4 = thunk_FUN_100529af0();
      if ((iVar4 != 0) && (iVar4 = FUN_1004ef1b4(), iVar4 != 0)) {
        local_60 = (undefined8 ***)0x0;
        uStack_58 = 0;
        local_50 = 0;
        FUN_1004ef19c(&local_60);
        pppuVar1 = (undefined8 ***)local_60;
        if (-1 < local_50) {
          pppuVar1 = &local_60;
        }
        thunk_FUN_100529b04(pppuVar1,&local_48);
        if (local_50 < 0) {
          operator_delete(local_60);
        }
      }
    }
    else {
      uVar5 = FUN_10014e398();
      FUN_10003330c(&local_48,uVar5);
      FUN_10014e160();
      FUN_10014e1dc();
      FUN_10014e1b8();
      FUN_10014e3a8(&local_48);
      FUN_10014e2b8(1);
      FUN_10014e16c();
      FUN_100102ab8(1);
    }
    uVar3 = FUN_10014e20c();
    *(undefined1 *)(param_1 + 0x567c) = uVar3;
    FUN_100169cec(param_1 + 0x18);
    FUN_10016641c(param_1);
    FUN_100165784(param_1,0);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000100168ff8) */



/*
 * FUN_100182684
 * VA: 0x100182684 | Source: functions/10018.c:1850
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4, Vis masks: 1
 * Callees: FUN_10001554c, FUN_100126c88, FUN_100181304, FUN_10018297c, FUN_1004e0150, FUN_1004e3004, FUN_1006421a8, FUN_100642bd8 (+10 more)
 * Callers: FUN_100183160, FUN_1001b6878, FUN_1001b6da8, FUN_1001b6ee4, thunk_FUN_100183160, thunk_FUN_1001b6878, thunk_FUN_1001b6da8, thunk_FUN_1001b6ee4
 */
long * FUN_100182684(long *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_100181304();
  *puVar11 = &PTR_FUN_10145efd0;
  puVar1 = puVar11 + 0x2b7;
  FUN_1006421a8(puVar1);
  param_1[0x2b7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x2c8;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x2e6;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x304;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x32a;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x350;
  FUN_1006421a8(plVar6);
  param_1[0x350] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x361);
  plVar7 = param_1 + 0x395;
  FUN_1006421a8(plVar7);
  param_1[0x395] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x3a6;
  thunk_FUN_1006543ec(plVar8);
  FUN_1004e3004(param_1 + 0x3da);
  *(undefined4 *)(param_1 + 0x3db) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1edc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar6,1);
  FUN_100642bd8(plVar6,plVar2,1);
  FUN_100642bd8(plVar6,plVar4,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar7,plVar3,1);
  FUN_100642bd8(plVar7,plVar5,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xffffffbf;
  ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar13 = *ppuVar9;
  FUN_100652cac(plVar2,puVar13,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a16c,2);
  iVar10 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar10 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  puVar14 = *ppuVar9;
  FUN_100651594(plVar4,puVar14,&DAT_10115a168);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar4,uVar12);
  FUN_100652cac(plVar3,puVar13,"white_background");
  FUN_100651594(plVar5,puVar14,&DAT_10115a164);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar5,uVar12);
  FUN_100654488(plVar8,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xfffffffb;
  local_68 = DAT_101dbd458;
  local_90 = FUN_10018297c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_10018297c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  return param_1;
}



/*
 * thunk_FUN_100182684
 * VA: 0xthunk_100182684 | Source: functions/10018.c:1963
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 4, Vis masks: 1
 * Callees: FUN_10001554c, FUN_100126c88, FUN_100181304, FUN_10018297c, FUN_1004e0150, FUN_1004e3004, FUN_1006421a8, FUN_100642bd8 (+10 more)
 * Callers: FUN_100076cd0, FUN_1002da328, FUN_1002f4164, thunk_FUN_100076cd0, thunk_FUN_1002da328, thunk_FUN_1002f4164
 */
long * thunk_FUN_100182684(long *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_100181304();
  *puVar11 = &PTR_FUN_10145efd0;
  puVar1 = puVar11 + 0x2b7;
  FUN_1006421a8(puVar1);
  param_1[0x2b7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x2c8;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x2e6;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x304;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x32a;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x350;
  FUN_1006421a8(plVar6);
  param_1[0x350] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x361);
  plVar7 = param_1 + 0x395;
  FUN_1006421a8(plVar7);
  param_1[0x395] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x3a6;
  thunk_FUN_1006543ec(plVar8);
  FUN_1004e3004(param_1 + 0x3da);
  *(undefined4 *)(param_1 + 0x3db) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1edc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar6,1);
  FUN_100642bd8(plVar6,plVar2,1);
  FUN_100642bd8(plVar6,plVar4,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar7,plVar3,1);
  FUN_100642bd8(plVar7,plVar5,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xffffffbf;
  ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar13 = *ppuVar9;
  FUN_100652cac(plVar2,puVar13,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a16c,2);
  iVar10 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar10 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  puVar14 = *ppuVar9;
  FUN_100651594(plVar4,puVar14,&DAT_10115a168);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar4,uVar12);
  FUN_100652cac(plVar3,puVar13,"white_background");
  FUN_100651594(plVar5,puVar14,&DAT_10115a164);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar5,uVar12);
  FUN_100654488(plVar8,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xfffffffb;
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_10018297c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_10018297c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  return param_1;
}



/*
 * FUN_10019a2d4
 * VA: 0x10019a2d4 | Source: functions/10019.c:7697
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_10019a8ac, FUN_10019a900, FUN_1001b495c, FUN_1005302b0 (+9 more)
 */
undefined8 * FUN_10019a2d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  code *local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  lVar9 = FUN_1005302b0();
  lVar9 = lVar9 + 0x30;
  FUN_1006421a8(lVar9);
  *param_1 = &PTR_FUN_101461d58;
  param_1[6] = &PTR_FUN_101461dd0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  FUN_10064e264(param_1 + 0x19);
  puVar1 = param_1 + 0x30;
  FUN_1006421a8(puVar1);
  param_1[0x30] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001c10a4(param_1 + 0x41);
  puVar2 = param_1 + 0x1b5;
  FUN_1006421a8(puVar2);
  param_1[0x1b5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar3 = param_1 + 0x1c6;
  thunk_FUN_100181304(puVar3,param_2);
  puVar4 = param_1 + 0x47d;
  thunk_FUN_100181304(puVar4,param_2);
  uVar10 = thunk_FUN_100181304(param_1 + 0x734,param_2);
  param_1[0x9ed] = 0;
  param_1[0x9ec] = 0;
  param_1[0x9eb] = 0;
  param_1[0x9ee] = 0x300000001;
  param_1[0x9f0] = 0;
  param_1[0x9ef] = 0;
  *(undefined4 *)(param_1 + 0x9f1) = DAT_101dc0b88;
  uVar6 = 0x403e8;
  if ((int)param_2 == 0) {
    uVar6 = 1000;
  }
  *(short *)(param_1 + 0x9f2) = (short)uVar6;
  *(byte *)((long)param_1 + 0x4f92) =
       (byte)((uint)uVar6 >> 0x10) |
       (byte)(((uint)(*(byte *)((long)param_1 + 0x4f92) >> 5) << 0x15) >> 0x10);
  (**(code **)(param_1[6] + 0x78))(lVar9,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(lVar9,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x41,1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_100642bd8(puVar2,puVar4,1);
  FUN_100642bd8(puVar2,uVar10,1);
  if ((*(float *)(param_1 + 0x1d0) != 0.5) || (*(float *)((long)param_1 + 0xe84) != 0.5)) {
    param_1[0x1d0] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar3);
  }
  FUN_100651700(param_1 + 0x2a9,0);
  uVar5 = *(uint *)((long)param_1 + 0xeb4);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar3);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar3,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar11 = 1.2;
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x1cf) != fVar7) || (*(float *)((long)param_1 + 0xe7c) != fVar7)) {
    *(float *)(param_1 + 0x1cf) = fVar7;
    *(float *)((long)param_1 + 0xe7c) = fVar7;
    FUN_1000200a0(puVar3);
  }
  FUN_1001b495c(0,puVar3);
  param_1[0x1d1] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0xeb4) = *(uint *)((long)param_1 + 0xeb4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x487) != 0.5) || (*(float *)((long)param_1 + 0x243c) != 0.5)) {
    param_1[0x487] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_100651700(param_1 + 0x560,0);
  uVar5 = *(uint *)((long)param_1 + 0x246c);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x246c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar4);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar4,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x486) != fVar7) || (*(float *)((long)param_1 + 0x2434) != fVar7)) {
    *(float *)(param_1 + 0x486) = fVar7;
    *(float *)((long)param_1 + 0x2434) = fVar7;
    FUN_1000200a0(puVar4);
  }
  FUN_1001b495c(0,puVar4);
  param_1[0x488] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x246c) = *(uint *)((long)param_1 + 0x246c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x73e) != 0.5) || (*(float *)((long)param_1 + 0x39f4) != 0.5)) {
    param_1[0x73e] = &DAT_3f0000003f000000;
    FUN_1000200a0(uVar10);
  }
  FUN_100651700(param_1 + 0x817,0);
  uVar5 = *(uint *)((long)param_1 + 0x3a24);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a24) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(uVar10);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,uVar10,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x73d) != fVar7) || (*(float *)((long)param_1 + 0x39ec) != fVar7)) {
    *(float *)(param_1 + 0x73d) = fVar7;
    *(float *)((long)param_1 + 0x39ec) = fVar7;
    FUN_1000200a0(uVar10);
  }
  FUN_1001b495c(0,uVar10);
  param_1[0x73f] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x3a24) = *(uint *)((long)param_1 + 0x3a24) & 0xfffffffb;
  uVar6 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_10019a8ac;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1c7,&local_a0);
  local_78 = uVar6;
  local_a0 = FUN_10019a8ac;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x47e,&local_a0);
  local_78 = uVar6;
  local_a0 = FUN_10019a8ac;
  local_90 = 0;
  local_88 = 0;
  local_80 = 2;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x735,&local_a0);
  local_78 = DAT_101dbd48c;
  local_a0 = FUN_10019a900;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&local_a0);
  local_78 = DAT_101dbd460;
  local_a0 = FUN_10019a900;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&local_a0);
  uVar5 = *(uint *)((long)param_1 + 0xb4);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_1000200a0(lVar9);
  }
  return param_1;
}



/*
 * thunk_FUN_10019a2d4
 * VA: 0xthunk_10019a2d4 | Source: functions/10019.c:7915
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100126c88, FUN_1001816d4, FUN_10019a8ac, FUN_10019a900, FUN_1001b495c, FUN_1005302b0 (+9 more)
 * Callers: FUN_10002f340, FUN_1000367fc, FUN_100255b9c, thunk_FUN_10002f340, thunk_FUN_1000367fc, thunk_FUN_100255b9c
 */
undefined8 * thunk_FUN_10019a2d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar9 = FUN_1005302b0();
  lVar9 = lVar9 + 0x30;
  FUN_1006421a8(lVar9);
  *param_1 = &PTR_FUN_101461d58;
  param_1[6] = &PTR_FUN_101461dd0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  FUN_10064e264(param_1 + 0x19);
  puVar1 = param_1 + 0x30;
  FUN_1006421a8(puVar1);
  param_1[0x30] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001c10a4(param_1 + 0x41);
  puVar2 = param_1 + 0x1b5;
  FUN_1006421a8(puVar2);
  param_1[0x1b5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar3 = param_1 + 0x1c6;
  thunk_FUN_100181304(puVar3,param_2);
  puVar4 = param_1 + 0x47d;
  thunk_FUN_100181304(puVar4,param_2);
  uVar10 = thunk_FUN_100181304(param_1 + 0x734,param_2);
  param_1[0x9ed] = 0;
  param_1[0x9ec] = 0;
  param_1[0x9eb] = 0;
  param_1[0x9ee] = 0x300000001;
  param_1[0x9f0] = 0;
  param_1[0x9ef] = 0;
  *(undefined4 *)(param_1 + 0x9f1) = DAT_101dc0b88;
  uVar6 = 0x403e8;
  if ((int)param_2 == 0) {
    uVar6 = 1000;
  }
  *(short *)(param_1 + 0x9f2) = (short)uVar6;
  *(byte *)((long)param_1 + 0x4f92) =
       (byte)((uint)uVar6 >> 0x10) |
       (byte)(((uint)(*(byte *)((long)param_1 + 0x4f92) >> 5) << 0x15) >> 0x10);
  (**(code **)(param_1[6] + 0x78))(lVar9,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(lVar9,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x41,1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_100642bd8(puVar2,puVar4,1);
  FUN_100642bd8(puVar2,uVar10,1);
  if ((*(float *)(param_1 + 0x1d0) != 0.5) || (*(float *)((long)param_1 + 0xe84) != 0.5)) {
    param_1[0x1d0] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar3);
  }
  FUN_100651700(param_1 + 0x2a9,0);
  uVar5 = *(uint *)((long)param_1 + 0xeb4);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar3);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar3,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar11 = 1.2;
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x1cf) != fVar7) || (*(float *)((long)param_1 + 0xe7c) != fVar7)) {
    *(float *)(param_1 + 0x1cf) = fVar7;
    *(float *)((long)param_1 + 0xe7c) = fVar7;
    FUN_1000200a0(puVar3);
  }
  FUN_1001b495c(0,puVar3);
  param_1[0x1d1] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0xeb4) = *(uint *)((long)param_1 + 0xeb4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x487) != 0.5) || (*(float *)((long)param_1 + 0x243c) != 0.5)) {
    param_1[0x487] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_100651700(param_1 + 0x560,0);
  uVar5 = *(uint *)((long)param_1 + 0x246c);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x246c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar4);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,puVar4,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x486) != fVar7) || (*(float *)((long)param_1 + 0x2434) != fVar7)) {
    *(float *)(param_1 + 0x486) = fVar7;
    *(float *)((long)param_1 + 0x2434) = fVar7;
    FUN_1000200a0(puVar4);
  }
  FUN_1001b495c(0,puVar4);
  param_1[0x488] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x246c) = *(uint *)((long)param_1 + 0x246c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x73e) != 0.5) || (*(float *)((long)param_1 + 0x39f4) != 0.5)) {
    param_1[0x73e] = &DAT_3f0000003f000000;
    FUN_1000200a0(uVar10);
  }
  FUN_100651700(param_1 + 0x817,0);
  uVar5 = *(uint *)((long)param_1 + 0x3a24);
  if ((uVar5 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a24) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6c00;
    FUN_1000200a0(uVar10);
  }
  FUN_1001816d4(0x42400000,0,0x43c80000,uVar10,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  iVar8 = FUN_100126c88();
  fVar7 = 1.5;
  if (iVar8 == 0) {
    fVar7 = fVar11;
  }
  if ((*(float *)(param_1 + 0x73d) != fVar7) || (*(float *)((long)param_1 + 0x39ec) != fVar7)) {
    *(float *)(param_1 + 0x73d) = fVar7;
    *(float *)((long)param_1 + 0x39ec) = fVar7;
    FUN_1000200a0(uVar10);
  }
  FUN_1001b495c(0,uVar10);
  param_1[0x73f] = 0x4220000042a00000;
  *(uint *)((long)param_1 + 0x3a24) = *(uint *)((long)param_1 + 0x3a24) & 0xfffffffb;
  uVar6 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_10019a8ac;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1c7,&pcStack_a0);
  uStack_78 = uVar6;
  pcStack_a0 = FUN_10019a8ac;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 1;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x47e,&pcStack_a0);
  uStack_78 = uVar6;
  pcStack_a0 = FUN_10019a8ac;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 2;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x735,&pcStack_a0);
  uStack_78 = DAT_101dbd48c;
  pcStack_a0 = FUN_10019a900;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&pcStack_a0);
  uStack_78 = DAT_101dbd460;
  pcStack_a0 = FUN_10019a900;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x42,&pcStack_a0);
  uVar5 = *(uint *)((long)param_1 + 0xb4);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_1000200a0(lVar9);
  }
  return param_1;
}



/*
 * FUN_10019ff68
 * VA: 0x10019ff68 | Source: functions/10019.c:11899
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 4
 * Callees: FUN_1000200a0, FUN_1001a0efc, FUN_1001b495c, FUN_1001b4964, FUN_1006421a8, FUN_100642bd8, FUN_10064e264, FUN_10064e47c (+8 more)
 */
long * FUN_10019ff68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 *local_88;
  
  puVar11 = (undefined8 *)FUN_1006421a8();
  *puVar11 = &PTR_thunk_FUN_1001a040c_1014624f8;
  puVar11 = puVar11 + 0x11;
  thunk_FUN_100650e64(puVar11);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0xf5;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x10c;
  thunk_FUN_100652c08(plVar3);
  param_1[0x12a] = -1;
  *(undefined4 *)(param_1 + 299) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x95c) = 0;
  *(undefined1 *)((long)param_1 + 0x95e) = 0;
  plVar4 = param_1 + 300;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x14a;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x168;
  FUN_10064e264(plVar6);
  lVar12 = 0xbf8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar12);
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0xec8);
  plVar7 = param_1 + 0x1d9;
  FUN_1001a0efc(plVar7);
  *(undefined2 *)(param_1 + 0x263) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  local_88 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_88);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x8e4);
  if ((uVar9 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8e4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x116) != 0.0) || (*(float *)((long)param_1 + 0x8b4) != 0.5)) {
    param_1[0x116] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar5,&local_88,2);
  uVar9 = *(uint *)((long)param_1 + 0xad4);
  if ((uVar9 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xad4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1300;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652dd4(plVar4,&DAT_10115a168,2);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f00000000000000;
    FUN_1000200a0(puVar11);
  }
  if ((*(float *)(param_1 + 0xff) != 0.0) || (*(float *)((long)param_1 + 0x7fc) != 0.5)) {
    param_1[0xff] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x82c) = *(uint *)((long)param_1 + 0x82c) | 0x10;
  FUN_100652cdc(param_1 + 0xd1,"generic_x");
  *(uint *)((long)param_1 + 0x52c) = *(uint *)((long)param_1 + 0x52c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar1);
  lVar12 = NEON_fmov(0xc1200000,4);
  param_1[0x42] = lVar12;
  FUN_1001b4964(plVar1,1);
  lVar12 = 0;
  *(uint *)((long)param_1 + 0xbc4) = *(uint *)((long)param_1 + 0xbc4) & 0xfffffffb;
  iVar13 = -1;
  do {
    lVar8 = (long)param_1 + lVar12 + 0xbf8;
    FUN_100642bd8(plVar6,lVar8,1);
    FUN_100652cac(lVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
    FUN_10064e47c(0x41f00000,0x40400000,lVar8);
    uVar9 = *(uint *)((long)param_1 + lVar12 + 0xc7c);
    if ((uVar9 & 0x7f80) != 0x2600) {
      *(uint *)((long)param_1 + lVar12 + 0xc7c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
      FUN_1000200a0(lVar8);
    }
    fVar14 = (float)iVar13 * 6.0;
    fVar15 = *(float *)((long)param_1 + lVar12 + 0xc3c);
    bVar10 = false;
    if ((*(float *)((long)param_1 + lVar12 + 0xc38) == 0.0) &&
       (bVar10 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar10 = fVar15 == fVar14;
    }
    if (!bVar10) {
      *(undefined4 *)((long)param_1 + lVar12 + 0xc38) = 0;
      *(float *)((long)param_1 + lVar12 + 0xc3c) = fVar14;
      FUN_1000200a0(lVar8);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0xbf8) + 0x28))(lVar8,&local_88);
    iVar13 = iVar13 + 1;
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0x2d0);
  if ((*(float *)(param_1 + 0x1e3) != 0.0) || (*(float *)((long)param_1 + 0xf1c) != 0.5)) {
    param_1[0x1e3] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) & 0xfffffffb;
  return param_1;
}



/*
 * thunk_FUN_10019ff68
 * VA: 0xthunk_10019ff68 | Source: functions/10019.c:12035
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 4
 * Callees: FUN_1000200a0, FUN_1001a0efc, FUN_1001b495c, FUN_1001b4964, FUN_1006421a8, FUN_100642bd8, FUN_10064e264, FUN_10064e47c (+8 more)
 * Callers: FUN_100248d18, FUN_1002531fc, thunk_FUN_100248d18
 */
long * thunk_FUN_10019ff68(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 *puStack_88;
  
  puVar11 = (undefined8 *)FUN_1006421a8();
  *puVar11 = &PTR_thunk_FUN_1001a040c_1014624f8;
  puVar11 = puVar11 + 0x11;
  thunk_FUN_100650e64(puVar11);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100183990(plVar1,0);
  plVar2 = param_1 + 0xf5;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x10c;
  thunk_FUN_100652c08(plVar3);
  param_1[0x12a] = -1;
  *(undefined4 *)(param_1 + 299) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x95c) = 0;
  *(undefined1 *)((long)param_1 + 0x95e) = 0;
  plVar4 = param_1 + 300;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x14a;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x168;
  FUN_10064e264(plVar6);
  lVar12 = 0xbf8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar12);
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0xec8);
  plVar7 = param_1 + 0x1d9;
  FUN_1001a0efc(plVar7);
  *(undefined2 *)(param_1 + 0x263) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  puStack_88 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&puStack_88);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x8e4);
  if ((uVar9 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8e4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1980;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x116) != 0.0) || (*(float *)((long)param_1 + 0x8b4) != 0.5)) {
    param_1[0x116] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  puStack_88 = (undefined1 *)CONCAT44(puStack_88._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar5,&puStack_88,2);
  uVar9 = *(uint *)((long)param_1 + 0xad4);
  if ((uVar9 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xad4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1300;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652dd4(plVar4,&DAT_10115a168,2);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f00000000000000;
    FUN_1000200a0(puVar11);
  }
  if ((*(float *)(param_1 + 0xff) != 0.0) || (*(float *)((long)param_1 + 0x7fc) != 0.5)) {
    param_1[0xff] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x82c) = *(uint *)((long)param_1 + 0x82c) | 0x10;
  FUN_100652cdc(param_1 + 0xd1,"generic_x");
  *(uint *)((long)param_1 + 0x52c) = *(uint *)((long)param_1 + 0x52c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x61c) = *(uint *)((long)param_1 + 0x61c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar1);
  lVar12 = NEON_fmov(0xc1200000,4);
  param_1[0x42] = lVar12;
  FUN_1001b4964(plVar1,1);
  lVar12 = 0;
  *(uint *)((long)param_1 + 0xbc4) = *(uint *)((long)param_1 + 0xbc4) & 0xfffffffb;
  iVar13 = -1;
  do {
    lVar8 = (long)param_1 + lVar12 + 0xbf8;
    FUN_100642bd8(plVar6,lVar8,1);
    FUN_100652cac(lVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
    FUN_10064e47c(0x41f00000,0x40400000,lVar8);
    uVar9 = *(uint *)((long)param_1 + lVar12 + 0xc7c);
    if ((uVar9 & 0x7f80) != 0x2600) {
      *(uint *)((long)param_1 + lVar12 + 0xc7c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
      FUN_1000200a0(lVar8);
    }
    fVar14 = (float)iVar13 * 6.0;
    fVar15 = *(float *)((long)param_1 + lVar12 + 0xc3c);
    bVar10 = false;
    if ((*(float *)((long)param_1 + lVar12 + 0xc38) == 0.0) &&
       (bVar10 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar10 = fVar15 == fVar14;
    }
    if (!bVar10) {
      *(undefined4 *)((long)param_1 + lVar12 + 0xc38) = 0;
      *(float *)((long)param_1 + lVar12 + 0xc3c) = fVar14;
      FUN_1000200a0(lVar8);
    }
    puStack_88 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar12 + 0xbf8) + 0x28))(lVar8,&puStack_88);
    iVar13 = iVar13 + 1;
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0x2d0);
  if ((*(float *)(param_1 + 0x1e3) != 0.0) || (*(float *)((long)param_1 + 0xf1c) != 0.5)) {
    param_1[0x1e3] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) & 0xfffffffb;
  return param_1;
}



/*
 * FUN_1001a0d78
 * VA: 0x1001a0d78 | Source: functions/1001a.c:498
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 1, Vis masks: 3
 * Callees: FUN_1004e0150, FUN_1006513c0, FUN_100651460
 * Callers: FUN_100248d18, FUN_10024f744, FUN_100250e58, thunk_FUN_100248d18
 */
void FUN_1001a0d78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150("MENU_PARTY_SLOT_EMPTY",0);
  FUN_1006513c0(param_1 + 0x88,uVar1);
  FUN_100651460(param_1 + 0x88,&DAT_101d236b4);
  *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffffb;
  *(uint *)(param_1 + 0xbc4) = *(uint *)(param_1 + 0xbc4) & 0xfffffffb;
  *(uint *)(param_1 + 0x9e4) = *(uint *)(param_1 + 0x9e4) & 0xfffffffb;
  *(undefined8 *)(param_1 + 0x950) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x958) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x95c) = 0;
  return;
}



/*
 * FUN_1001c81d8
 * VA: 0x1001c81d8 | Source: functions/1001c.c:5594
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_1000200a0, FUN_1006421a8, FUN_100642bd8, FUN_100652cac, FUN_100652dd4, thunk_FUN_1001c859c, thunk_FUN_10064221c, thunk_FUN_100652c08
 */
long * FUN_1001c81d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_1006421a8();
  *puVar9 = &PTR_thunk_FUN_1001c859c_101465ce0;
  puVar9[0x12] = 0;
  puVar9[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  FUN_1006421a8(plVar3);
  param_1[0x71] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xdc;
  FUN_1006421a8(plVar4);
  param_1[0xdc] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0xed;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x10b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x129;
  thunk_FUN_100652c08(plVar7);
  FUN_1006421a8(param_1 + 0x147);
  param_1[0x147] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x158] = 0;
  *(undefined4 *)(param_1 + 0x159) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xacc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0xbe,1);
  FUN_100642bd8(plVar3,param_1 + 0x82,1);
  FUN_100642bd8(plVar3,param_1 + 0xa0,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x147,1);
  FUN_100652cac(param_1 + 0x82,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left"
               );
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xa0,PTR_s_build___MenuPartsCommon_tga_101854970,
                "square_button_fill_right");
  *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x7ec);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x7ec) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_right");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x8dc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8dc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x9cc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x9cc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  FUN_100652cac(puVar9 + 0x17,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_left");
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_right");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_middle");
  return param_1;
}



/*
 * thunk_FUN_1001c81d8
 * VA: 0xthunk_1001c81d8 | Source: functions/1001c.c:5690
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_1000200a0, FUN_1006421a8, FUN_100642bd8, FUN_100652cac, FUN_100652dd4, thunk_FUN_1001c859c, thunk_FUN_10064221c, thunk_FUN_100652c08
 * Callers: FUN_10023b4b8, FUN_100248d18, FUN_10025c044, FUN_100264e14, FUN_10029c8b8, thunk_FUN_10023b4b8, thunk_FUN_100248d18, thunk_FUN_10025c044 (+2 more)
 */
long * thunk_FUN_1001c81d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_1006421a8();
  *puVar9 = &PTR_thunk_FUN_1001c859c_101465ce0;
  puVar9[0x12] = 0;
  puVar9[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  FUN_1006421a8(plVar3);
  param_1[0x71] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xdc;
  FUN_1006421a8(plVar4);
  param_1[0xdc] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0xed;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x10b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x129;
  thunk_FUN_100652c08(plVar7);
  FUN_1006421a8(param_1 + 0x147);
  param_1[0x147] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x158] = 0;
  *(undefined4 *)(param_1 + 0x159) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xacc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0xbe,1);
  FUN_100642bd8(plVar3,param_1 + 0x82,1);
  FUN_100642bd8(plVar3,param_1 + 0xa0,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x147,1);
  FUN_100652cac(param_1 + 0x82,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left"
               );
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xa0,PTR_s_build___MenuPartsCommon_tga_101854970,
                "square_button_fill_right");
  *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x7ec);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x7ec) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_right");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x8dc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8dc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x9cc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x9cc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  FUN_100652cac(puVar9 + 0x17,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_left");
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_right");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_middle");
  return param_1;
}



/*
 * FUN_1001df760
 * VA: 0x1001df760 | Source: functions/1001d.c:11279
 * CE-gate: YES (2x) | Guest-gate: NO
 * Callees: FUN_10001549c, FUN_10001617c, FUN_10001629c, FUN_100131560, FUN_10014f4a0, FUN_10015d3ec, FUN_10016426c, FUN_1001df854 (+2 more)
 * Callers: FUN_1001e13d0
 */
long FUN_1001df760(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *local_48 [2];
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_10014f4a0();
  *puVar2 = &PTR_thunk_FUN_1001dfc14_101469428;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_10001549c(puVar2 + 7,"EquipedHat");
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) == 0) {
    local_30 = 0;
    uStack_28 = 0;
    FUN_10001549c(local_48,"hat");
    FUN_10001617c(&local_30,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_10001549c(local_48,"craftingmaterial");
    FUN_10001617c(&local_30,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    uVar4 = FUN_10015d3ec();
    FUN_10016426c(uVar4,&local_30);
    FUN_10001629c(&local_30,1);
  }
  FUN_1001df854(param_1);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_1001df9c8(param_1);
  }
  return param_1;
}



/*
 * FUN_1001f3b40
 * VA: 0x1001f3b40 | Source: functions/1001f.c:3469
 * CE-gate: NO | Guest-gate: YES (1x)
 * Callees: FUN_1001311d4, FUN_10014e20c, FUN_100220d08, FUN_100221f98, FUN_1004eef10
 * Callers: FUN_1001ff1bc
 */
void FUN_1001f3b40(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) && (uVar2 = FUN_1001311d4(), (uVar2 & 1) == 0)) {
    uVar2 = FUN_10014e20c();
    if ((uVar2 & 1) != 0) {
      FUN_100220d08();
      return;
    }
    FUN_100221f98("homepanel_profile_avatar");
    return;
  }
  return;
}



/*
 * FUN_1001f4efc
 * VA: 0x1001f4efc | Source: functions/1001f.c:5290
 * CE-gate: YES (1x) | Guest-gate: YES (1x)
 * Indicators: UI strings: 1
 * Callees: FUN_100131560, FUN_10014e20c, FUN_10015d3ec, FUN_10015d3f8, FUN_100164f34, FUN_1002a9da4, FUN_1002a9dd8, FUN_100327e00 (+3 more)
 * Callers: FUN_1001f4ff4
 */
void FUN_1001f4efc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_10015d3f8();
  if (iVar3 != 0) {
    uVar4 = FUN_100131560();
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_10014e20c(), (uVar4 & 1) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar5 = FUN_1004e0150("HOME_PANEL_TAP_TO_LOGIN_REGISTER",0);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 8);
      FUN_10015d3ec();
      uVar5 = FUN_100164f34();
    }
    FUN_1002a9da4(uVar7,uVar5);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = FUN_100327e00();
    lVar6 = FUN_100327f2c(uVar5,1);
    uVar1 = *(undefined4 *)(lVar6 + 4);
    uVar5 = FUN_100327e00();
    lVar6 = FUN_100327f2c(uVar5,0);
    uVar2 = *(undefined4 *)(lVar6 + 4);
    uVar5 = FUN_100327e00();
    lVar6 = FUN_100327f2c(uVar5,2);
    FUN_1002a9dd8(uVar7,uVar1,uVar2,(int)*(float *)(lVar6 + 0x1c));
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  FUN_1004e3120(auStack_40,"NO PLAT USER");
  FUN_1002a9da4(uVar5,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}



/*
 * FUN_1001f9230
 * VA: 0x1001f9230 | Source: functions/1001f.c:9794
 * CE-gate: YES (2x) | Guest-gate: NO
 * Callees: FUN_10001554c, FUN_1000be5e4, FUN_100106b14, FUN_100131560, FUN_1001d5ff0, FUN_1001e8db8, FUN_1001e8f2c, FUN_1001f9510 (+22 more)
 */
code * FUN_1001f9230(code *param_1,code param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146e7d0;
  operator_new(0xc1c0);
  lVar2 = thunk_FUN_1002bba14();
  *(code **)(lVar2 + 0xd8) = param_1;
  *(undefined ***)param_1 = &PTR_FUN_10146e730;
  *(long *)(param_1 + 8) = lVar2;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146e7b0;
  FUN_1001fba98(param_1 + 0x18);
  lVar2 = 0x48;
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x110);
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x1d8);
  param_1[0x1640] = (code)0x0;
  _bzero(param_1 + 0x1d8,0x1458);
  *(undefined4 *)(param_1 + 0x1644) = 0xffffffff;
  param_1[0x1648] = (code)0x0;
  param_1[0x1649] = param_2;
  param_1[0x164a] = (code)0x0;
  *(undefined4 *)(param_1 + 0x164c) = 0;
  *(undefined4 *)(param_1 + 0x1650) = 0;
  operator_new(0x98);
  uVar3 = FUN_100308444();
  *(undefined8 *)(param_1 + 0x1608) = uVar3;
  FUN_1001f9510(param_1);
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001f97d8;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001fad74(*(long *)(param_1 + 0x1608) + 8,&local_60);
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001f9f00;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001fae74(*(long *)(param_1 + 0x1608) + 0x28,&local_60);
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001fa130;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001faf74(*(long *)(param_1 + 0x1608) + 0x38,&local_60);
  pcStack_58 = (code *)0x0;
  local_48 = FUN_1001fb074;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(*(long *)(param_1 + 0x1608) + 0x48,&local_60);
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1630) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1630);
    *(undefined4 *)(lVar2 + 0x50) = 100;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),0);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1630) + 8) + 0x41c0) = 0;
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1630) + 8),1,0)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1630));
  }
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1638) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1638);
    *(undefined4 *)(lVar2 + 0x50) = 10;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),1);
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1638) + 8),0,1)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1638));
  }
  FUN_1002bc9dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 0x20),0);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = FUN_1003467f8();
    FUN_1003467f8();
    uVar5 = FUN_10034cdd0();
    FUN_1001d5ff0(lVar2 + 0x8a80,uVar3,uVar5);
  }
  local_38 = DAT_101d237e0;
  local_60 = FUN_1001f95ec;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d237e4;
  local_60 = FUN_1001f9600;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cdd8();
    if (iVar1 != 0) {
      FUN_1003467f8();
      FUN_100106b14();
    }
  }
  return param_1;
}



/*
 * thunk_FUN_1001f9230
 * VA: 0xthunk_1001f9230 | Source: functions/1001f.c:10003
 * CE-gate: YES (2x) | Guest-gate: NO
 * Callees: FUN_10001554c, FUN_1000be5e4, FUN_100106b14, FUN_100131560, FUN_1001d5ff0, FUN_1001e8db8, FUN_1001e8f2c, FUN_1001f9510 (+22 more)
 * Callers: FUN_1002686ec
 */
code * thunk_FUN_1001f9230(code *param_1,code param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146e7d0;
  operator_new(0xc1c0);
  lVar2 = thunk_FUN_1002bba14();
  *(code **)(lVar2 + 0xd8) = param_1;
  *(undefined ***)param_1 = &PTR_FUN_10146e730;
  *(long *)(param_1 + 8) = lVar2;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146e7b0;
  FUN_1001fba98(param_1 + 0x18);
  lVar2 = 0x48;
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x110);
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x1d8);
  param_1[0x1640] = (code)0x0;
  _bzero(param_1 + 0x1d8,0x1458);
  *(undefined4 *)(param_1 + 0x1644) = 0xffffffff;
  param_1[0x1648] = (code)0x0;
  param_1[0x1649] = param_2;
  param_1[0x164a] = (code)0x0;
  *(undefined4 *)(param_1 + 0x164c) = 0;
  *(undefined4 *)(param_1 + 0x1650) = 0;
  operator_new(0x98);
  uVar3 = FUN_100308444();
  *(undefined8 *)(param_1 + 0x1608) = uVar3;
  FUN_1001f9510(param_1);
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001f97d8;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001fad74(*(long *)(param_1 + 0x1608) + 8,&pcStack_60);
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001f9f00;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001fae74(*(long *)(param_1 + 0x1608) + 0x28,&pcStack_60);
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001fa130;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001faf74(*(long *)(param_1 + 0x1608) + 0x38,&pcStack_60);
  pcStack_58 = (code *)0x0;
  pcStack_48 = FUN_1001fb074;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(*(long *)(param_1 + 0x1608) + 0x48,&pcStack_60);
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1630) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1630);
    *(undefined4 *)(lVar2 + 0x50) = 100;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),0);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1630) + 8) + 0x41c0) = 0;
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1630) + 8),1,0)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1630));
  }
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1638) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1638);
    *(undefined4 *)(lVar2 + 0x50) = 10;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),1);
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1638) + 8),0,1)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1638));
  }
  FUN_1002bc9dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 0x20),0);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = FUN_1003467f8();
    FUN_1003467f8();
    uVar5 = FUN_10034cdd0();
    FUN_1001d5ff0(lVar2 + 0x8a80,uVar3,uVar5);
  }
  uStack_38 = DAT_101d237e0;
  pcStack_60 = FUN_1001f95ec;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d237e4;
  pcStack_60 = FUN_1001f9600;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cdd8();
    if (iVar1 != 0) {
      FUN_1003467f8();
      FUN_100106b14();
    }
  }
  return param_1;
}



/*
 * FUN_1001fc0e8
 * VA: 0x1001fc0e8 | Source: functions/1001f.c:12790
 * CE-gate: NO | Guest-gate: YES (1x)
 * Indicators: UI strings: 1
 * Callees: FUN_10014e20c, FUN_1002bd728, FUN_100644a94, FUN_100644aec, FUN_100644c34
 * Callers: FUN_1001fc154
 */
void FUN_1001fc0e8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar1 = FUN_10014e20c(), (uVar1 & 1) == 0)) {
    uVar2 = FUN_100644a94("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  }
  FUN_1002bd728(*(undefined8 *)(param_1 + 8),0);
  return;
}



/*
 * FUN_100206f70
 * VA: 0x100206f70 | Source: functions/10020.c:6820
 * CE-gate: NO | Guest-gate: YES (1x)
 * Indicators: UI strings: 1
 * Callees: FUN_10014e20c, FUN_1002d3494, FUN_100644a94, FUN_100644aec, FUN_100644c34
 * Callers: FUN_100206fdc
 */
void FUN_100206f70(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar1 = FUN_10014e20c(), (uVar1 & 1) == 0)) {
    uVar2 = FUN_100644a94("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  }
  FUN_1002d3494(*(undefined8 *)(param_1 + 8),0);
  return;
}



/*
 * FUN_100212ff8
 * VA: 0x100212ff8 | Source: functions/named.c:17890
 * CE-gate: YES (2x) | Guest-gate: NO
 * Indicators: UI strings: 2
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_100102450, FUN_10012c5b0, FUN_100131560, FUN_10014ebf8, FUN_100210b7c, FUN_100211158 (+30 more)
 * Callers: FUN_100223e98
 */
/* WARNING: Removing unreachable block (ram,0x00010021328c) */
/* WARNING: Removing unreachable block (ram,0x000100213514) */

void FUN_100212ff8(long param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void **ppvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  string *psVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  string *psVar16;
  ulong uVar17;
  void *pvVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  void *pvVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  void *local_1a0 [2];
  char local_189;
  undefined1 auStack_188 [16];
  void *local_178;
  undefined8 uStack_170;
  long local_168;
  void **local_160;
  void *local_158;
  long lStack_150;
  long local_148;
  void *local_140 [2];
  char local_129;
  void *local_128 [2];
  char local_111;
  void *local_110;
  char local_f9;
  int local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined4 local_e0;
  void *local_d8;
  char local_c1;
  long local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  string local_b0 [64];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10021478c();
  lVar8 = param_1 + 0x20;
  FUN_100214908(lVar8,param_2 + 0x10);
  FUN_100214f3c(param_1 + 0x30,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar20 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar20;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar21 = *(undefined8 *)(param_2 + 0x68);
  uVar20 = *(undefined8 *)(param_2 + 0x60);
  uVar24 = *(undefined8 *)(param_2 + 0x78);
  uVar23 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar21;
  *(undefined8 *)(param_1 + 0x70) = uVar20;
  *(undefined8 *)(param_1 + 0x88) = uVar24;
  *(undefined8 *)(param_1 + 0x80) = uVar23;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  psVar16 = (string *)(param_1 + 0x98);
  std::string::operator=(psVar16,(string *)(param_2 + 0x88));
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  uVar20 = *(undefined8 *)(param_2 + 0xe8);
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  uVar25 = *(undefined8 *)(param_2 + 0xb8);
  uVar24 = *(undefined8 *)(param_2 + 0xb0);
  uVar23 = *(undefined8 *)(param_2 + 200);
  uVar21 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar20;
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  *(undefined8 *)(param_1 + 200) = uVar25;
  *(undefined8 *)(param_1 + 0xc0) = uVar24;
  *(undefined8 *)(param_1 + 0xd8) = uVar23;
  *(undefined8 *)(param_1 + 0xd0) = uVar21;
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar20 = *(undefined8 *)(param_2 + 0x128);
  uVar7 = *(undefined8 *)(param_2 + 0x120);
  uVar25 = *(undefined8 *)(param_2 + 0xf8);
  uVar24 = *(undefined8 *)(param_2 + 0xf0);
  uVar23 = *(undefined8 *)(param_2 + 0x108);
  uVar21 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar20;
  *(undefined8 *)(param_1 + 0x130) = uVar7;
  *(undefined8 *)(param_1 + 0x108) = uVar25;
  *(undefined8 *)(param_1 + 0x100) = uVar24;
  *(undefined8 *)(param_1 + 0x118) = uVar23;
  *(undefined8 *)(param_1 + 0x110) = uVar21;
  uVar21 = *(undefined8 *)(param_2 + 0x148);
  uVar20 = *(undefined8 *)(param_2 + 0x140);
  uVar7 = *(undefined8 *)(param_2 + 0x158);
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  uVar24 = *(undefined8 *)(param_2 + 0x138);
  uVar23 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar21;
  *(undefined8 *)(param_1 + 0x150) = uVar20;
  *(undefined8 *)(param_1 + 0x168) = uVar7;
  *(undefined8 *)(param_1 + 0x160) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar24;
  *(undefined8 *)(param_1 + 0x140) = uVar23;
  uVar3 = FUN_100345b94();
  uVar3 = FUN_10034c450(uVar3,"*SpoilsOfWarRewardConfig*");
  if ((*(float *)(param_1 + 0x134) != *(float *)(param_1 + 0x164)) &&
     (lVar4 = FUN_100212fa8(uVar3,"ranked_3v3"), lVar4 != 0)) {
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      FUN_10012c5b0("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x11c));
      FUN_10012c5b0("new3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x14c));
      FUN_10012c5b0("prev3v3RankedDataEloBucket",*(undefined4 *)(param_1 + 0x118));
      FUN_10012c5b0("new3v3RankedDatamEloBucket",*(undefined4 *)(param_1 + 0x148));
      FUN_10012c5b0("prev3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x134));
      FUN_10012c5b0("new3v3RankedDatamEloEarned",(int)*(float *)(param_1 + 0x164));
    }
    ppvVar5 = operator_new(0x138);
    ppvVar5[2] = (void *)0x0;
    ppvVar5[3] = (void *)0x0;
    *(undefined8 *)(ppvVar5 + 1) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x54) = 0x3f80000000000000;
    ppvVar5[0xd] = (void *)0x0;
    ppvVar5[0xc] = (void *)0x0;
    ppvVar5[0xf] = (void *)0x0;
    ppvVar5[0xe] = (void *)0x0;
    ppvVar5[0x11] = (void *)0x0;
    ppvVar5[0x10] = (void *)0x0;
    ppvVar5[0x13] = (void *)0x0;
    ppvVar5[0x12] = (void *)0x0;
    ppvVar5[0x15] = (void *)0x0;
    ppvVar5[0x14] = (void *)0x0;
    ppvVar5[0x17] = (void *)0x0;
    ppvVar5[0x16] = (void *)0x0;
    ppvVar5[0x19] = (void *)0x0;
    ppvVar5[0x18] = (void *)0x0;
    *ppvVar5 = &PTR_thunk_FUN_100214410_1014720e0;
    ppvVar5[0x1a] = (void *)0x0;
    FUN_100327e78(ppvVar5 + 0x1b);
    puVar6 = (undefined8 *)FUN_100327e78(ppvVar5 + 0x21);
    *(undefined4 *)(ppvVar5 + 4) = 2;
    pvVar18 = *(void **)(param_1 + 0x118);
    pvVar22 = *(void **)(param_1 + 0x130);
    pvVar19 = *(void **)(param_1 + 0x128);
    ppvVar5[0x1c] = *(void **)(param_1 + 0x120);
    ppvVar5[0x1b] = pvVar18;
    ppvVar5[0x1e] = pvVar22;
    ppvVar5[0x1d] = pvVar19;
    pvVar18 = *(void **)(param_1 + 0x138);
    ppvVar5[0x20] = *(void **)(param_1 + 0x140);
    ppvVar5[0x1f] = pvVar18;
    uVar7 = *(undefined8 *)(param_1 + 0x148);
    uVar21 = *(undefined8 *)(param_1 + 0x160);
    uVar20 = *(undefined8 *)(param_1 + 0x158);
    puVar6[1] = *(undefined8 *)(param_1 + 0x150);
    *puVar6 = uVar7;
    puVar6[3] = uVar21;
    puVar6[2] = uVar20;
    uVar7 = *(undefined8 *)(param_1 + 0x168);
    puVar6[5] = *(undefined8 *)(param_1 + 0x170);
    puVar6[4] = uVar7;
    FUN_10001549c(&local_160,"ranked_3v3");
    std::string::operator=((string *)(ppvVar5 + 1),(string *)&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar4);
    local_160 = ppvVar5;
    FUN_1002141a0(param_1 + 0x6d0,&local_160);
    FUN_1002151a8(&local_160);
    FUN_10001549c(local_b0,"ranked_3v3");
    std::string::operator=((string *)&local_158,local_b0);
    local_f8 = (int)(*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x134));
    plVar13 = (long *)(param_3 + 8);
    plVar15 = (long *)*plVar13;
    if (plVar15 != (long *)0x0) {
      iVar2 = *(int *)(lVar4 + 0x58);
      plVar14 = plVar13;
      do {
        if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {
          plVar14 = plVar15;
        }
        plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
      } while (plVar15 != (long *)0x0);
      if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
        local_c0 = plVar14[4];
      }
    }
    FUN_1003029d4(&local_160,lVar4);
    FUN_100214220(param_1 + 0x6c0,&local_160);
    if (local_c1 < '\0') {
      operator_delete(local_d8);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    if (local_f9 < '\0') {
      operator_delete(local_110);
    }
    if (local_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if (local_129 < '\0') {
      operator_delete(local_140[0]);
    }
    if (local_148 < 0) {
      operator_delete(local_158);
    }
  }
  if ((*(float *)(param_1 + 0xd4) != *(float *)(param_1 + 0x104)) &&
     (lVar4 = FUN_100212fa8(uVar3,"ranked_5v5"), lVar4 != 0)) {
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      FUN_10012c5b0("prev5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xbc));
      FUN_10012c5b0("new5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xec));
      FUN_10012c5b0("prev5v5RankedDataEloBucket",*(undefined4 *)(param_1 + 0xb8));
      FUN_10012c5b0("new5v5RankedDatamEloBucket",*(undefined4 *)(param_1 + 0xe8));
      FUN_10012c5b0("prev5v5RankedDatamEloEarned",(int)*(float *)(param_1 + 0xd4));
      FUN_10012c5b0("new5v5RankedDatamEloEarned",(int)*(float *)(param_1 + 0x104));
    }
    ppvVar5 = operator_new(0x138);
    ppvVar5[2] = (void *)0x0;
    ppvVar5[3] = (void *)0x0;
    *(undefined8 *)(ppvVar5 + 1) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
    *(undefined8 *)((long)ppvVar5 + 0x54) = 0x3f80000000000000;
    ppvVar5[0xd] = (void *)0x0;
    ppvVar5[0xc] = (void *)0x0;
    ppvVar5[0xf] = (void *)0x0;
    ppvVar5[0xe] = (void *)0x0;
    ppvVar5[0x11] = (void *)0x0;
    ppvVar5[0x10] = (void *)0x0;
    ppvVar5[0x13] = (void *)0x0;
    ppvVar5[0x12] = (void *)0x0;
    ppvVar5[0x15] = (void *)0x0;
    ppvVar5[0x14] = (void *)0x0;
    ppvVar5[0x17] = (void *)0x0;
    ppvVar5[0x16] = (void *)0x0;
    ppvVar5[0x19] = (void *)0x0;
    ppvVar5[0x18] = (void *)0x0;
    *ppvVar5 = &PTR_thunk_FUN_100214410_1014720e0;
    ppvVar5[0x1a] = (void *)0x0;
    FUN_100327e78(ppvVar5 + 0x1b);
    puVar6 = (undefined8 *)FUN_100327e78(ppvVar5 + 0x21);
    *(undefined4 *)(ppvVar5 + 4) = 2;
    pvVar18 = *(void **)(param_1 + 0xb8);
    pvVar22 = *(void **)(param_1 + 0xd0);
    pvVar19 = *(void **)(param_1 + 200);
    ppvVar5[0x1c] = *(void **)(param_1 + 0xc0);
    ppvVar5[0x1b] = pvVar18;
    ppvVar5[0x1e] = pvVar22;
    ppvVar5[0x1d] = pvVar19;
    pvVar18 = *(void **)(param_1 + 0xd8);
    ppvVar5[0x20] = *(void **)(param_1 + 0xe0);
    ppvVar5[0x1f] = pvVar18;
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    uVar21 = *(undefined8 *)(param_1 + 0x100);
    uVar20 = *(undefined8 *)(param_1 + 0xf8);
    puVar6[1] = *(undefined8 *)(param_1 + 0xf0);
    *puVar6 = uVar7;
    puVar6[3] = uVar21;
    puVar6[2] = uVar20;
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    puVar6[5] = *(undefined8 *)(param_1 + 0x110);
    puVar6[4] = uVar7;
    FUN_10001549c(&local_160,"ranked_5v5");
    std::string::operator=((string *)(ppvVar5 + 1),(string *)&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar4);
    local_160 = ppvVar5;
    FUN_1002141a0(param_1 + 0x6d0,&local_160);
    FUN_1002151a8(&local_160);
    FUN_10001549c(local_b0,"ranked_5v5");
    std::string::operator=((string *)&local_158,local_b0);
    local_f8 = (int)(*(float *)(param_1 + 0x104) - *(float *)(param_1 + 0xd4));
    plVar13 = (long *)(param_3 + 8);
    plVar15 = (long *)*plVar13;
    if (plVar15 != (long *)0x0) {
      iVar2 = *(int *)(lVar4 + 0x58);
      plVar14 = plVar13;
      do {
        if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {
          plVar14 = plVar15;
        }
        plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
      } while (plVar15 != (long *)0x0);
      if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
        local_c0 = plVar14[4];
      }
    }
    FUN_1003029d4(&local_160,lVar4);
    FUN_100214220(param_1 + 0x6c0,&local_160);
    if (local_c1 < '\0') {
      operator_delete(local_d8);
    }
    if (local_e8 != (void *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (void *)0x0;
    }
    if (local_f9 < '\0') {
      operator_delete(local_110);
    }
    if (local_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if (local_129 < '\0') {
      operator_delete(local_140[0]);
    }
    if (local_148 < 0) {
      operator_delete(local_158);
    }
  }
  if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 100)) {
    FUN_10001549c(&local_160,"xp");
    iVar2 = FUN_100211354(lVar8,&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    lVar4 = FUN_100212fa8(uVar3,"xp");
    if (lVar4 != 0) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - iVar2;
      uVar7 = FUN_1004e0150("MENU_SPOILS_TITLE_SPOILS_LEVEL_UP",0);
      local_160 = (void **)FUN_100211218(param_1 + 0x60,lVar4,"xp",uVar7);
      FUN_1002141a0(param_1 + 0x6d0,&local_160);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + iVar2;
      FUN_1002151a8(&local_160);
      FUN_100211158(param_1 + 0x60,&local_160,lVar4,"xp",param_3);
      FUN_100214220(param_1 + 0x6c0,&local_160);
      if (local_c1 < '\0') {
        operator_delete(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if (local_f9 < '\0') {
        operator_delete(local_110);
      }
      if (local_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (local_129 < '\0') {
        operator_delete(local_140[0]);
      }
      if (local_148 < 0) {
        operator_delete(local_158);
      }
    }
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x44)) {
    FUN_10001549c(&local_160,"guild");
    iVar2 = FUN_100211354(lVar8,&local_160);
    if (lStack_150 < 0) {
      operator_delete(local_160);
    }
    lVar8 = FUN_100212fa8(uVar3,"guild");
    if (lVar8 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar2;
      uVar7 = FUN_1004e0150("MENU_SPOILS_GUILD_LEVELED_UP",0);
      local_160 = (void **)FUN_100211218(param_1 + 0x40,lVar8,"guild",uVar7);
      FUN_1002141a0(param_1 + 0x6d0,&local_160);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
      FUN_1002151a8(&local_160);
      FUN_100211158(param_1 + 0x40,&local_160,lVar8,"guild",param_3);
      FUN_100214220(param_1 + 0x6c0,&local_160);
      if (local_c1 < '\0') {
        operator_delete(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if (local_f9 < '\0') {
        operator_delete(local_110);
      }
      if (local_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (local_129 < '\0') {
        operator_delete(local_140[0]);
      }
      if (local_148 < 0) {
        operator_delete(local_158);
      }
    }
  }
  if (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88)) {
    lVar8 = FUN_100212fa8(uVar3,"heromastery");
    if (*(char *)(param_1 + 0xaf) < '\0') {
      psVar16 = *(string **)psVar16;
    }
    lVar4 = FUN_10034be08(psVar16);
    if ((lVar8 != 0) && (lVar4 != 0)) {
      FUN_100102450(local_b0,"portrait_%s");
      local_178 = (void *)0x0;
      uStack_170 = 0;
      local_168 = 0;
      FUN_100657568(auStack_188);
      FUN_1006575f4(auStack_188,PTR_s_build___MenuCharPortraitsHD_png_1018549d0);
      lVar9 = FUN_1006575c4(auStack_188,local_b0);
      puVar11 = PTR_s_build___MenuCharPortraitsHD2_atl_1018549d8;
      if (lVar9 != 0) {
        puVar11 = PTR_s_build___MenuCharPortraitsHD_png_1018549d0;
      }
      FUN_10001549c(&local_160,puVar11);
      std::string::operator=((string *)&local_178,(string *)&local_160);
      if (lStack_150 < 0) {
        operator_delete(local_160);
      }
      ppvVar5 = operator_new(0x130);
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0x0;
      *(undefined8 *)(ppvVar5 + 1) = 0;
      *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
      *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
      *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
      *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
      *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
      *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
      *(undefined8 *)((long)ppvVar5 + 0x54) = 0x3f80000000000000;
      ppvVar5[0xd] = (void *)0x0;
      ppvVar5[0xc] = (void *)0x0;
      ppvVar5[0xf] = (void *)0x0;
      ppvVar5[0xe] = (void *)0x0;
      ppvVar5[0x11] = (void *)0x0;
      ppvVar5[0x10] = (void *)0x0;
      ppvVar5[0x13] = (void *)0x0;
      ppvVar5[0x12] = (void *)0x0;
      ppvVar5[0x15] = (void *)0x0;
      ppvVar5[0x14] = (void *)0x0;
      ppvVar5[0x17] = (void *)0x0;
      ppvVar5[0x16] = (void *)0x0;
      ppvVar5[0x19] = (void *)0x0;
      ppvVar5[0x18] = (void *)0x0;
      *ppvVar5 = &PTR_FUN_101472108;
      ppvVar5[0x1a] = (void *)0x0;
      FUN_1004e313c(ppvVar5 + 0x1e);
      ppvVar5[0x23] = (void *)0x0;
      ppvVar5[0x22] = (void *)0x0;
      ppvVar5[0x25] = (void *)0x0;
      ppvVar5[0x24] = (void *)0x0;
      ppvVar5[0x21] = (void *)0x0;
      ppvVar5[0x20] = (void *)0x0;
      *(undefined4 *)(ppvVar5 + 4) = 4;
      FUN_10001549c(&local_160,"heromastery");
      std::string::operator=((string *)(ppvVar5 + 1),(string *)&local_160);
      if (lStack_150 < 0) {
        operator_delete(local_160);
      }
      FUN_10001549c(&local_160,local_b0);
      std::string::operator=((string *)(ppvVar5 + 0x20),(string *)&local_160);
      if (lStack_150 < 0) {
        operator_delete(local_160);
      }
      std::string::operator=((string *)(ppvVar5 + 0x23),(string *)&local_178);
      ppvVar5[0x1d] = *(void **)(param_1 + 0x80);
      pvVar18 = *(void **)(param_1 + 0x88);
      ppvVar5[0x1c] = *(void **)(param_1 + 0x90);
      ppvVar5[0x1b] = pvVar18;
      uVar7 = FUN_1004e0150(*(undefined8 *)(lVar4 + 0x18),0);
      FUN_1000153b4(ppvVar5 + 0x1e,uVar7);
      (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar8);
      local_160 = ppvVar5;
      FUN_1002141a0(param_1 + 0x6d0,&local_160);
      FUN_1002151a8(&local_160);
      FUN_10001549c(local_1a0,"heromastery");
      std::string::operator=((string *)&local_158,(string *)local_1a0);
      if (local_189 < '\0') {
        operator_delete(local_1a0[0]);
      }
      plVar13 = (long *)(param_3 + 8);
      plVar15 = (long *)*plVar13;
      if (plVar15 != (long *)0x0) {
        iVar2 = *(int *)(lVar8 + 0x58);
        plVar14 = plVar13;
        do {
          if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {
            plVar14 = plVar15;
          }
          plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
        } while (plVar15 != (long *)0x0);
        if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
          local_c0 = plVar14[4];
        }
      }
      FUN_1003029d4(&local_160,lVar8);
      local_160 = (void **)CONCAT44(local_160._4_4_,1);
      FUN_10001549c(local_1a0,local_b0);
      std::string::operator=((string *)local_128,(string *)local_1a0);
      if (local_189 < '\0') {
        operator_delete(local_1a0[0]);
      }
      std::string::operator=((string *)local_140,(string *)&local_178);
      local_f8 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88);
      FUN_100214220(param_1 + 0x6c0,&local_160);
      if (local_c1 < '\0') {
        operator_delete(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
        local_f0 = 0;
        local_e8 = (void *)0x0;
      }
      if (local_f9 < '\0') {
        operator_delete(local_110);
      }
      if (local_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (local_129 < '\0') {
        operator_delete(local_140[0]);
      }
      if (local_148 < 0) {
        operator_delete(local_158);
      }
      thunk_FUN_100657580(auStack_188);
      if (local_168 < 0) {
        operator_delete(local_178);
      }
    }
  }
  plVar13 = (long *)(param_3 + 8);
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar17 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x38);
      lVar8 = lVar4 + uVar17 * 0x80;
      psVar16 = (string *)(lVar8 + 0x50);
      psVar12 = psVar16;
      if (*(char *)(lVar8 + 0x67) < '\0') {
        psVar12 = *(string **)psVar16;
      }
      lVar8 = FUN_100212fa8(uVar3,psVar12);
      if ((lVar8 != 0) && (piVar1 = (int *)(lVar4 + uVar17 * 0x80), *piVar1 != 0)) {
        ppvVar5 = operator_new(0x110);
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x0;
        *(undefined8 *)(ppvVar5 + 1) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x54) = 0x3f80000000000000;
        ppvVar5[0xd] = (void *)0x0;
        ppvVar5[0xc] = (void *)0x0;
        ppvVar5[0xf] = (void *)0x0;
        ppvVar5[0xe] = (void *)0x0;
        ppvVar5[0x11] = (void *)0x0;
        ppvVar5[0x10] = (void *)0x0;
        ppvVar5[0x13] = (void *)0x0;
        ppvVar5[0x12] = (void *)0x0;
        ppvVar5[0x15] = (void *)0x0;
        ppvVar5[0x14] = (void *)0x0;
        ppvVar5[0x17] = (void *)0x0;
        ppvVar5[0x16] = (void *)0x0;
        ppvVar5[0x19] = (void *)0x0;
        ppvVar5[0x18] = (void *)0x0;
        ppvVar5[0x1a] = (void *)0x0;
        *ppvVar5 = &PTR_FUN_101472130;
        ppvVar5[0x1f] = (void *)0x0;
        ppvVar5[0x1e] = (void *)0x0;
        ppvVar5[0x21] = (void *)0x0;
        ppvVar5[0x20] = (void *)0x0;
        ppvVar5[0x1d] = (void *)0x0;
        *(undefined8 *)(ppvVar5 + 0x1c) = 0;
        *(undefined4 *)(ppvVar5 + 4) = 1;
        *(int *)(ppvVar5 + 0x1b) = *piVar1;
        std::string::operator=((string *)(ppvVar5 + 1),psVar16);
        std::string::operator=((string *)(ppvVar5 + 0x1c),(string *)(piVar1 + 2));
        std::string::operator=((string *)(ppvVar5 + 0x1f),(string *)(piVar1 + 8));
        (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar8);
        local_160 = ppvVar5;
        FUN_1002141a0(param_1 + 0x6d0,&local_160);
        FUN_1002151a8(&local_160);
        std::string::operator=((string *)&local_158,psVar16);
        local_f8 = *piVar1;
        plVar14 = (long *)*plVar13;
        plVar15 = plVar13;
        if (plVar14 != (long *)0x0) {
          do {
            if (2 < *(int *)((long)plVar14 + 0x1c)) {
              plVar15 = plVar14;
            }
            plVar14 = (long *)plVar14[*(int *)((long)plVar14 + 0x1c) < 3];
          } while (plVar14 != (long *)0x0);
          if ((plVar15 != plVar13) && (*(int *)((long)plVar15 + 0x1c) < 4)) {
            local_c0 = plVar15[4];
          }
        }
        lVar4 = lVar4 + uVar17 * 0x80;
        plVar15 = (long *)(lVar4 + 0x38);
        if (*(char *)(lVar4 + 0x4f) < '\0') {
          plVar15 = (long *)*plVar15;
        }
        uVar7 = FUN_1004e0150(plVar15,0);
        FUN_1000153b4(&local_f0,uVar7);
        std::string::operator=((string *)local_128,(string *)(piVar1 + 2));
        std::string::operator=((string *)local_140,(string *)(piVar1 + 8));
        local_e0 = *(undefined4 *)(lVar8 + 0x60);
        local_b8 = *(undefined4 *)(lVar8 + 0x5c);
        local_b4 = 1;
        FUN_100214220(param_1 + 0x6c0,&local_160);
        if (local_c1 < '\0') {
          operator_delete(local_d8);
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
          local_f0 = 0;
          local_e8 = (void *)0x0;
        }
        if (local_f9 < '\0') {
          operator_delete(local_110);
        }
        if (local_111 < '\0') {
          operator_delete(local_128[0]);
        }
        if (local_129 < '\0') {
          operator_delete(local_140[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar17 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x18) + uVar17 * 0x28;
      plVar15 = (long *)(lVar8 + 0x10);
      if (*(char *)(lVar8 + 0x27) < '\0') {
        plVar15 = (long *)*plVar15;
      }
      lVar8 = FUN_100212fa8(uVar3,plVar15);
      if ((lVar8 != 0) && (*(int *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28 + 8) != 0)) {
        ppvVar5 = operator_new(0x110);
        *(undefined8 *)(ppvVar5 + 1) = 0;
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x0;
        *(undefined8 *)((long)ppvVar5 + 0x2c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x24) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x3c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x34) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x4c) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x44) = 0;
        *(undefined8 *)((long)ppvVar5 + 0x54) = 0x3f80000000000000;
        ppvVar5[0xd] = (void *)0x0;
        ppvVar5[0xc] = (void *)0x0;
        ppvVar5[0xf] = (void *)0x0;
        ppvVar5[0xe] = (void *)0x0;
        ppvVar5[0x11] = (void *)0x0;
        ppvVar5[0x10] = (void *)0x0;
        ppvVar5[0x13] = (void *)0x0;
        ppvVar5[0x12] = (void *)0x0;
        ppvVar5[0x15] = (void *)0x0;
        ppvVar5[0x14] = (void *)0x0;
        ppvVar5[0x17] = (void *)0x0;
        ppvVar5[0x16] = (void *)0x0;
        ppvVar5[0x19] = (void *)0x0;
        ppvVar5[0x18] = (void *)0x0;
        ppvVar5[0x1a] = (void *)0x0;
        ppvVar5[0x1b] = (void *)0x0;
        *ppvVar5 = &PTR_FUN_10148df60;
        FUN_10001549c(ppvVar5 + 0x1c,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50);
        ppvVar5[0x1f] = (void *)0x0;
        ppvVar5[0x20] = (void *)0x0;
        ppvVar5[0x21] = (void *)0x0;
        *(undefined4 *)(ppvVar5 + 4) = 0;
        plVar15 = (long *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28);
        ppvVar5[0x1b] = (void *)*plVar15;
        std::string::operator=((string *)(ppvVar5 + 1),(string *)(plVar15 + 2));
        (**(code **)((long)*ppvVar5 + 0x10))(ppvVar5,lVar8);
        local_160 = ppvVar5;
        FUN_1002141a0(param_1 + 0x6d0,&local_160);
        FUN_1002151a8(&local_160);
        std::string::operator=
                  ((string *)&local_158,(string *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28 + 0x10)
                  );
        local_f8 = *(int *)(*(long *)(param_1 + 0x18) + uVar17 * 0x28 + 8);
        plVar15 = (long *)*plVar13;
        if (plVar15 != (long *)0x0) {
          iVar2 = *(int *)(lVar8 + 0x58);
          plVar14 = plVar13;
          do {
            if (iVar2 <= *(int *)((long)plVar15 + 0x1c)) {
              plVar14 = plVar15;
            }
            plVar15 = (long *)plVar15[*(int *)((long)plVar15 + 0x1c) < iVar2];
          } while (plVar15 != (long *)0x0);
          if ((plVar14 != plVar13) && (*(int *)((long)plVar14 + 0x1c) <= iVar2)) {
            local_c0 = plVar14[4];
          }
        }
        FUN_1003029d4(&local_160,lVar8);
        FUN_100214220(param_1 + 0x6c0,&local_160);
        if (local_c1 < '\0') {
          operator_delete(local_d8);
        }
        if (local_e8 != (void *)0x0) {
          operator_delete__(local_e8);
          local_f0 = 0;
          local_e8 = (void *)0x0;
        }
        if (local_f9 < '\0') {
          operator_delete(local_110);
        }
        if (local_111 < '\0') {
          operator_delete(local_128[0]);
        }
        if (local_129 < '\0') {
          operator_delete(local_140[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar17 = 0;
    do {
      local_158 = (void *)0x0;
      lStack_150 = 0;
      local_160 = &local_158;
      FUN_1004e313c(&local_148);
      lVar8 = *(long *)(param_1 + 0x28);
      puVar6 = (undefined8 *)(lVar8 + uVar17 * 0x28);
      plVar13 = (long *)*puVar6;
      while (plVar13 != puVar6 + 1) {
        lVar8 = plVar13[7];
        puVar10 = (undefined4 *)FUN_1002115d0(&local_160,plVar13 + 4);
        *puVar10 = (int)lVar8;
        plVar15 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar15 = plVar13 + 2;
          plVar14 = (long *)*plVar15;
          if ((long *)*plVar14 != plVar13) {
            do {
              lVar8 = *plVar15;
              plVar15 = (long *)(lVar8 + 0x10);
              plVar14 = (long *)*plVar15;
            } while (*plVar14 != lVar8);
          }
        }
        else {
          do {
            plVar14 = plVar15;
            plVar15 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        lVar8 = *(long *)(param_1 + 0x28);
        plVar13 = plVar14;
        puVar6 = (undefined8 *)(lVar8 + uVar17 * 0x28);
      }
      FUN_1000153b4(&local_148,lVar8 + uVar17 * 0x28 + 0x18);
      FUN_100210b7c(param_1 + 0x6a0,&local_160);
      if (local_140[0] != (void *)0x0) {
        operator_delete__(local_140[0]);
        local_148 = 0;
        local_140[0] = (void *)0x0;
      }
      FUN_10014ebf8(&local_160,local_158);
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 0x20));
  }
  local_160 = (void **)FUN_10021183c;
  FUN_10021575c(*(long *)(param_1 + 0x6c8),
                *(long *)(param_1 + 0x6c8) + (ulong)*(uint *)(param_1 + 0x6c0) * 0xb0,&local_160);
  local_160 = (void **)FUN_100211850;
  FUN_10021675c(*(long *)(param_1 + 0x6d8),
                *(long *)(param_1 + 0x6d8) + (ulong)*(uint *)(param_1 + 0x6d0) * 8,&local_160);
  FUN_100212bb0(param_1 + 0x178,0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00010021ccc4) */



/*
 * FUN_1002268e4
 * VA: 0x1002268e4 | Source: functions/10022.c:5267
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 10, Vis masks: 1
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100126c88, FUN_100131560, FUN_10014f4a0, FUN_1001816d4, FUN_100181c68 (+36 more)
 */
long * FUN_1002268e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  puVar24 = (undefined8 *)FUN_1006421a8();
  *puVar24 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004f0a20(puVar24 + 0x11);
  FUN_10014f4a0(param_1 + 0x14);
  *param_1 = (long)&PTR_thunk_FUN_10022ae54_101476ba8;
  param_1[0x11] = (long)&PTR_FUN_101476ca8;
  param_1[0x14] = (long)&PTR_FUN_101476cd8;
  plVar1 = param_1 + 0x17;
  thunk_FUN_100181304(plVar1,0);
  plVar2 = param_1 + 0x2ce;
  FUN_1006421a8(plVar2);
  param_1[0x2ce] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x2df;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x2fd;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x31b;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x339;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x35f;
  thunk_FUN_100183990(plVar7,0);
  plVar8 = param_1 + 0x41d;
  FUN_1006421a8(plVar8);
  param_1[0x41d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar9 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x454;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0x47a;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x818;
  thunk_FUN_100184f78();
  plVar13 = param_1 + 0xbb6;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0xe6d;
  FUN_10064e264(plVar14);
  plVar15 = param_1 + 0xe84;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0xeaa;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xec8;
  FUN_10064e264(plVar17);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xf23;
  FUN_10064e264(plVar18);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_1004e439c(param_1 + 0xf7e,&DAT_101d91650);
  thunk_FUN_1004e439c(param_1 + 0xf80,&DAT_101d91650);
  FUN_10003330c(param_1 + 0xf82,&DAT_101d91198);
  param_1[0xf85] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar1,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_100642bd8(plVar14,plVar15,1);
  FUN_100642bd8(plVar14,plVar16,1);
  FUN_100642bd8(plVar8,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xedf,1);
  FUN_100642bd8(plVar17,param_1 + 0xefd,1);
  FUN_100642bd8(plVar8,plVar18,1);
  FUN_100642bd8(plVar18,param_1 + 0xf3a,1);
  FUN_100642bd8(plVar18,param_1 + 0xf58,1);
  iVar22 = FUN_100126c88();
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x177c);
  if ((uVar26 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x177c) = uVar26 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
    uVar26 = *(uint *)((long)param_1 + 0x177c);
  }
  *(uint *)((long)param_1 + 0x177c) = uVar26 | 0x10;
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x186c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x186c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
    uVar26 = *(uint *)((long)param_1 + 0x186c);
  }
  *(uint *)((long)param_1 + 0x186c) = uVar26 | 0x10;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar26 = *(uint *)((long)param_1 + 0x195c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x195c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar26 = *(uint *)((long)param_1 + 0x195c);
  }
  *(uint *)((long)param_1 + 0x195c) = uVar26 | 0x10;
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar26 = *(uint *)((long)param_1 + 0x1a4c);
  if ((uVar26 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a4c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x5900;
    FUN_1000200a0(plVar6);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar9,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x21f4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar9);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar10,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x2324) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cdc(param_1 + 0x3f9,"circle_button_question");
  FUN_1001b495c(0xbf800000,plVar7);
  fVar28 = *(float *)(param_1 + 0x368);
  if ((fVar28 != 0.6) || (fVar28 = *(float *)((long)param_1 + 0x1b44), fVar28 != 0.6)) {
    param_1[0x368] = 0x3f19999a3f19999a;
    FUN_1000200a0(plVar7);
  }
  fVar27 = (float)FUN_1006531b0(param_1 + 0x3bd);
  param_1[0x36a] =
       CONCAT44((float)((ulong)param_1[0x368] >> 0x20) * fVar28,(float)param_1[0x368] * fVar27);
  uVar20 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_10022a690;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x360,&local_b8);
  uVar21 = DAT_101dbd4ac;
  local_90 = DAT_101dbd4ac;
  local_b8 = thunk_FUN_10022a54c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x47b,&local_b8);
  local_90 = uVar21;
  local_b8 = thunk_FUN_10022a54c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x819,&local_b8);
  iVar23 = FUN_100131560();
  if (iVar23 == 0) {
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    local_b8 = (code *)0x41f0000000000000;
    FUN_1001816d4(0x41a00000,0x43480000,0x449c4000,plVar13,0,uVar25,&DAT_10115a168,&local_b8,
                  *ppuVar19);
    local_90 = uVar20;
    local_b8 = thunk_FUN_10022a47c;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&local_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_100181c68(0x43133333,plVar13);
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
    if ((*(float *)(param_1 + 0xeb2) != 0.0) || (*(float *)((long)param_1 + 0x7594) != 3.0)) {
      param_1[0xeb2] = 0x4040000000000000;
      FUN_1000200a0(plVar16);
    }
    local_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xeaa] + 0x28))(plVar16,&local_b8);
    if ((*(float *)(param_1 + 0xeb3) != 0.9) || (*(float *)((long)param_1 + 0x759c) != 0.9)) {
      param_1[0xeb3] = 0x3f6666663f666666;
      FUN_1000200a0(plVar16);
    }
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
    }
    FUN_100651038(plVar15,*ppuVar19);
    fVar28 = (float)FUN_100652e60(plVar16);
    fVar27 = *(float *)((long)param_1 + 0x7594) + -3.0;
    if ((*(float *)(param_1 + 0xe8c) != fVar28) || (*(float *)((long)param_1 + 0x7464) != fVar27)) {
      *(float *)(param_1 + 0xe8c) = fVar28;
      *(float *)((long)param_1 + 0x7464) = fVar27;
      FUN_1000200a0(plVar15);
    }
    local_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xe84] + 0x28))(plVar15,&local_b8);
    fVar28 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar27 = fVar27 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar28 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar27)) {
      *(float *)(param_1 + 0xe75) = fVar28 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar27;
      FUN_1000200a0(plVar14);
    }
    local_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_b8);
    FUN_100652cac(param_1 + 0xedf,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(param_1 + 0xefd,*ppuVar19,&DAT_10115a168);
    FUN_100652cac(param_1 + 0xf3a,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    FUN_100651594(param_1 + 0xf58,*ppuVar19,&DAT_10115a168);
  }
  else {
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_HEADER",0);
    FUN_1006513c0(plVar6,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_DESC",0);
    FUN_1006513c0(plVar10,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_FIELD",0);
    FUN_100185730(plVar11,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar11,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar11,1);
    FUN_100185e38(plVar11,1,3);
    FUN_100185e48(plVar11,1,0x10);
    FUN_100185e70(plVar11,0);
    *(uint *)((long)param_1 + 0x2454) = *(uint *)((long)param_1 + 0x2454) | 4;
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
    FUN_100185730(plVar12,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar12,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar12,0);
    FUN_100185e38(plVar12,0,3);
    FUN_100185e48(plVar12,0,0x10);
    FUN_100185e70(plVar12,0);
    *(uint *)((long)param_1 + 0x4144) = *(uint *)((long)param_1 + 0x4144) & 0xfffffffb;
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    fVar28 = 100.0;
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar13,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    local_90 = uVar20;
    local_b8 = thunk_FUN_10022a47c;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&local_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    fVar27 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar28 = fVar28 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar27 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar28)) {
      *(float *)(param_1 + 0xe75) = fVar27 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar28;
      FUN_1000200a0(plVar14);
    }
    local_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_b8);
  }
  return param_1;
}



/*
 * thunk_FUN_1002268e4
 * VA: 0xthunk_1002268e4 | Source: functions/10022.c:5765
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 10, Vis masks: 1
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_100126c88, FUN_100131560, FUN_10014f4a0, FUN_1001816d4, FUN_100181c68 (+36 more)
 * Callers: FUN_10023b4b8, FUN_10025c044, FUN_100260edc, thunk_FUN_10023b4b8, thunk_FUN_10025c044, thunk_FUN_100260edc
 */
long * thunk_FUN_1002268e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  puVar24 = (undefined8 *)FUN_1006421a8();
  *puVar24 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004f0a20(puVar24 + 0x11);
  FUN_10014f4a0(param_1 + 0x14);
  *param_1 = (long)&PTR_thunk_FUN_10022ae54_101476ba8;
  param_1[0x11] = (long)&PTR_FUN_101476ca8;
  param_1[0x14] = (long)&PTR_FUN_101476cd8;
  plVar1 = param_1 + 0x17;
  thunk_FUN_100181304(plVar1,0);
  plVar2 = param_1 + 0x2ce;
  FUN_1006421a8(plVar2);
  param_1[0x2ce] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x2df;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x2fd;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x31b;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x339;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x35f;
  thunk_FUN_100183990(plVar7,0);
  plVar8 = param_1 + 0x41d;
  FUN_1006421a8(plVar8);
  param_1[0x41d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar9 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x454;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0x47a;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x818;
  thunk_FUN_100184f78();
  plVar13 = param_1 + 0xbb6;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0xe6d;
  FUN_10064e264(plVar14);
  plVar15 = param_1 + 0xe84;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0xeaa;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xec8;
  FUN_10064e264(plVar17);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xf23;
  FUN_10064e264(plVar18);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_1004e439c(param_1 + 0xf7e,&DAT_101d91650);
  thunk_FUN_1004e439c(param_1 + 0xf80,&DAT_101d91650);
  FUN_10003330c(param_1 + 0xf82,&DAT_101d91198);
  param_1[0xf85] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar1,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_100642bd8(plVar14,plVar15,1);
  FUN_100642bd8(plVar14,plVar16,1);
  FUN_100642bd8(plVar8,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xedf,1);
  FUN_100642bd8(plVar17,param_1 + 0xefd,1);
  FUN_100642bd8(plVar8,plVar18,1);
  FUN_100642bd8(plVar18,param_1 + 0xf3a,1);
  FUN_100642bd8(plVar18,param_1 + 0xf58,1);
  iVar22 = FUN_100126c88();
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x177c);
  if ((uVar26 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x177c) = uVar26 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
    uVar26 = *(uint *)((long)param_1 + 0x177c);
  }
  *(uint *)((long)param_1 + 0x177c) = uVar26 | 0x10;
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x186c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x186c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
    uVar26 = *(uint *)((long)param_1 + 0x186c);
  }
  *(uint *)((long)param_1 + 0x186c) = uVar26 | 0x10;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar26 = *(uint *)((long)param_1 + 0x195c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x195c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar26 = *(uint *)((long)param_1 + 0x195c);
  }
  *(uint *)((long)param_1 + 0x195c) = uVar26 | 0x10;
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar26 = *(uint *)((long)param_1 + 0x1a4c);
  if ((uVar26 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a4c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x5900;
    FUN_1000200a0(plVar6);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar9,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x21f4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar9);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar10,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x2324) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cdc(param_1 + 0x3f9,"circle_button_question");
  FUN_1001b495c(0xbf800000,plVar7);
  fVar28 = *(float *)(param_1 + 0x368);
  if ((fVar28 != 0.6) || (fVar28 = *(float *)((long)param_1 + 0x1b44), fVar28 != 0.6)) {
    param_1[0x368] = 0x3f19999a3f19999a;
    FUN_1000200a0(plVar7);
  }
  fVar27 = (float)FUN_1006531b0(param_1 + 0x3bd);
  param_1[0x36a] =
       CONCAT44((float)((ulong)param_1[0x368] >> 0x20) * fVar28,(float)param_1[0x368] * fVar27);
  uVar20 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = thunk_FUN_10022a690;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x360,&pcStack_b8);
  uVar21 = DAT_101dbd4ac;
  uStack_90 = DAT_101dbd4ac;
  pcStack_b8 = thunk_FUN_10022a54c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x47b,&pcStack_b8);
  uStack_90 = uVar21;
  pcStack_b8 = thunk_FUN_10022a54c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x819,&pcStack_b8);
  iVar23 = FUN_100131560();
  if (iVar23 == 0) {
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    pcStack_b8 = (code *)0x41f0000000000000;
    FUN_1001816d4(0x41a00000,0x43480000,0x449c4000,plVar13,0,uVar25,&DAT_10115a168,&pcStack_b8,
                  *ppuVar19);
    uStack_90 = uVar20;
    pcStack_b8 = thunk_FUN_10022a47c;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&pcStack_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_100181c68(0x43133333,plVar13);
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
    if ((*(float *)(param_1 + 0xeb2) != 0.0) || (*(float *)((long)param_1 + 0x7594) != 3.0)) {
      param_1[0xeb2] = 0x4040000000000000;
      FUN_1000200a0(plVar16);
    }
    pcStack_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xeaa] + 0x28))(plVar16,&pcStack_b8);
    if ((*(float *)(param_1 + 0xeb3) != 0.9) || (*(float *)((long)param_1 + 0x759c) != 0.9)) {
      param_1[0xeb3] = 0x3f6666663f666666;
      FUN_1000200a0(plVar16);
    }
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
    }
    FUN_100651038(plVar15,*ppuVar19);
    fVar28 = (float)FUN_100652e60(plVar16);
    fVar27 = *(float *)((long)param_1 + 0x7594) + -3.0;
    if ((*(float *)(param_1 + 0xe8c) != fVar28) || (*(float *)((long)param_1 + 0x7464) != fVar27)) {
      *(float *)(param_1 + 0xe8c) = fVar28;
      *(float *)((long)param_1 + 0x7464) = fVar27;
      FUN_1000200a0(plVar15);
    }
    pcStack_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xe84] + 0x28))(plVar15,&pcStack_b8);
    fVar28 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar27 = fVar27 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar28 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar27)) {
      *(float *)(param_1 + 0xe75) = fVar28 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar27;
      FUN_1000200a0(plVar14);
    }
    pcStack_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&pcStack_b8);
    FUN_100652cac(param_1 + 0xedf,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(param_1 + 0xefd,*ppuVar19,&DAT_10115a168);
    FUN_100652cac(param_1 + 0xf3a,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    FUN_100651594(param_1 + 0xf58,*ppuVar19,&DAT_10115a168);
  }
  else {
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_HEADER",0);
    FUN_1006513c0(plVar6,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_DESC",0);
    FUN_1006513c0(plVar10,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_FIELD",0);
    FUN_100185730(plVar11,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar11,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar11,1);
    FUN_100185e38(plVar11,1,3);
    FUN_100185e48(plVar11,1,0x10);
    FUN_100185e70(plVar11,0);
    *(uint *)((long)param_1 + 0x2454) = *(uint *)((long)param_1 + 0x2454) | 4;
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
    FUN_100185730(plVar12,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar12,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar12,0);
    FUN_100185e38(plVar12,0,3);
    FUN_100185e48(plVar12,0,0x10);
    FUN_100185e70(plVar12,0);
    *(uint *)((long)param_1 + 0x4144) = *(uint *)((long)param_1 + 0x4144) & 0xfffffffb;
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    fVar28 = 100.0;
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar13,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uStack_90 = uVar20;
    pcStack_b8 = thunk_FUN_10022a47c;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&pcStack_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    fVar27 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar28 = fVar28 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar27 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar28)) {
      *(float *)(param_1 + 0xe75) = fVar27 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar28;
      FUN_1000200a0(plVar14);
    }
    pcStack_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&pcStack_b8);
  }
  return param_1;
}



/*
 * FUN_100227d90
 * VA: 0x100227d90 | Source: functions/10022.c:6319
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_1000200a0, FUN_100131560, FUN_100181b5c, FUN_100181c68, FUN_1004e313c, FUN_1004e38ac, FUN_1006425d0, FUN_1006513c0 (+1 more)
 * Callers: FUN_100228938, FUN_100228ad8, FUN_100228c78, FUN_10023ccdc, FUN_10023cd58, FUN_10023cdd4, FUN_10023ce64, FUN_10025d244 (+4 more)
 */
void FUN_100227d90(long param_1,string *param_2,int *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined8 local_48;
  
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) == 0) {
    std::string::operator=((string *)(param_1 + 0x7c10),param_2);
    *(int *)(param_1 + 0x7c2c) = *param_3;
    lVar1 = param_1 + 0x5db0;
    if (*param_3 == 0) {
      FUN_100181b5c(0,0,lVar1);
      *(uint *)(param_1 + 0x73ec) = *(uint *)(param_1 + 0x73ec) & 0xfffffffb;
    }
    else {
      FUN_100181b5c(0,0x41f00000,lVar1);
      FUN_100181c68(0x43133333,lVar1);
      FUN_1004e313c(auStack_58);
      FUN_1004e38ac(auStack_58,"%d");
      lVar1 = param_1 + 0x7420;
      FUN_1006513c0(lVar1,auStack_58);
      fVar4 = (float)FUN_100652e60(param_1 + 0x7550);
      fVar5 = *(float *)(param_1 + 0x7594) + -3.0;
      bVar2 = false;
      if ((*(float *)(param_1 + 0x7460) == fVar4) &&
         (bVar2 = false, !NAN(*(float *)(param_1 + 0x7464)) && !NAN(fVar5))) {
        bVar2 = *(float *)(param_1 + 0x7464) == fVar5;
      }
      if (!bVar2) {
        *(float *)(param_1 + 0x7460) = fVar4;
        *(float *)(param_1 + 0x7464) = fVar5;
        FUN_1000200a0(lVar1);
      }
      local_48 = 0x3f00000000000000;
      (**(code **)(*(long *)(param_1 + 0x7420) + 0x28))(lVar1,&local_48);
      lVar1 = param_1 + 0x7368;
      fVar4 = (float)FUN_1006425d0(lVar1,0,0,1,1);
      FUN_1006425d0(lVar1,0,0,1,1);
      fVar5 = fVar5 * -0.5 + 10.0;
      if ((*(float *)(param_1 + 0x73a8) != fVar4 * -0.5) || (*(float *)(param_1 + 0x73ac) != fVar5))
      {
        *(float *)(param_1 + 0x73a8) = fVar4 * -0.5;
        *(float *)(param_1 + 0x73ac) = fVar5;
        FUN_1000200a0(lVar1);
      }
      local_48 = 0;
      (**(code **)(*(long *)(param_1 + 0x7368) + 0x28))(lVar1,&local_48);
      *(uint *)(param_1 + 0x73ec) = *(uint *)(param_1 + 0x73ec) | 4;
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
      }
    }
  }
  return;
}



/*
 * FUN_100229634
 * VA: 0x100229634 | Source: functions/10022.c:7011
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 14
 * Callees: FUN_100131560, FUN_10015d3ec, FUN_1001e3120, FUN_1004e0150, FUN_1004e3120, FUN_1004e313c, FUN_1004e38ac, FUN_1004e3bc4 (+4 more)
 * Callers: FUN_10022a47c, thunk_FUN_10022a47c
 */
void FUN_100229634(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x7c2c);
    lVar6 = FUN_10015d3ec();
    if (*(uint *)(lVar6 + 0x5450) < uVar1) {
      uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar7 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar7,param_1,0,thunk_FUN_1001e3fd8);
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_ICE_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar3);
    FUN_1004e3120(auStack_60,"[PLAYER_HANDLE]");
    uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar3);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TITLE",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,thunk_FUN_10022a7e4,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  else {
    uVar3 = FUN_1004e0150("MAIN_PROFILE_CONFIRM_NICKNAME_DESCRIPTION",0);
    thunk_FUN_1004e439c(auStack_40,uVar3);
    FUN_1004e3120(auStack_50,"[PLAYER_NAME]");
    uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
    FUN_1004e3bc4(auStack_40,0,auStack_50,uVar3);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TITLE",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(uVar3,auStack_40,uVar4,uVar5,param_1,thunk_FUN_10022a7e4,0);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}



/*
 * FUN_100248d18
 * VA: 0x100248d18 | Source: functions/named.c:21440
 * CE-gate: YES (7x) | Guest-gate: NO
 * Indicators: UI strings: 48, Vis masks: 24
 * Callees: FUN_10001549c, FUN_10001554c, FUN_10001617c, FUN_10001629c, FUN_1000200a0, FUN_1000be5e4, FUN_10010b098, FUN_10010b1a8 (+92 more)
 */
/* WARNING: Removing unreachable block (ram,0x000100249f9c) */
/* WARNING: Removing unreachable block (ram,0x000100249f40) */
/* WARNING: Removing unreachable block (ram,0x000100249ee8) */
/* WARNING: Removing unreachable block (ram,0x000100249f14) */
/* WARNING: Removing unreachable block (ram,0x000100249f6c) */
/* WARNING: Removing unreachable block (ram,0x00010024af50) */

long * FUN_100248d18(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  char *pcVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  bool bVar52;
  undefined1 uVar53;
  int iVar54;
  uint uVar55;
  long lVar56;
  long lVar57;
  undefined8 *puVar59;
  long *plVar60;
  ulong uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined4 uVar64;
  long *plVar65;
  long *plVar66;
  float fVar67;
  float fVar68;
  long *local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [4];
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  code *local_d0;
  long *plStack_c8;
  code *local_c0;
  code *local_b8;
  long *local_b0;
  undefined4 local_a8;
  long local_90;
  long *plVar58;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  plVar66 = param_1 + 0x518c;
  plVar3 = param_1 + 0x4fdb;
  plVar4 = param_1 + 0x4e7c;
  plVar5 = param_1 + 0x4c31;
  plVar6 = param_1 + 0x20a5;
  lVar56 = FUN_1001e6910();
  FUN_10014f4a0(lVar56 + 0x2c30);
  param_1[0x58c] = 0;
  *param_1 = (long)&PTR_thunk_FUN_10024b44c_101479fd8;
  param_1[0x586] = (long)&PTR_FUN_10147a228;
  param_1[0x589] = (long)&PTR_FUN_10147a5c0;
  param_1[0x58a] = (long)&PTR_FUN_10147a620;
  param_1[0x58b] = (long)&PTR_FUN_10147a678;
  pcVar7 = (code *)(param_1 + 0x58d);
  thunk_FUN_100218f18();
  plVar8 = param_1 + 0x594;
  FUN_1006505b8();
  plVar9 = param_1 + 0x5af;
  thunk_FUN_100181304(plVar9,0);
  plVar10 = param_1 + 0x866;
  thunk_FUN_100181304(plVar10,0);
  local_168 = param_1 + 0xb1d;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0xb43;
  thunk_FUN_100184f78();
  FUN_10064e264();
  plVar12 = param_1 + 0xef8;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xf44;
  FUN_1006421a8();
  param_1[0xf44] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xf55;
  thunk_FUN_100652c08();
  local_170 = param_1 + 0xf73;
  thunk_FUN_100652c08();
  FUN_10064e264();
  plVar15 = param_1 + 0xfa8;
  FUN_1006421a8(plVar15);
  param_1[0xfa8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  local_158 = param_1 + 0xfb9;
  thunk_FUN_1006543ec();
  plVar16 = param_1 + 0xfed;
  FUN_10053077c(plVar16,0);
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar17 = param_1 + 0x10e0;
  thunk_FUN_100181304(plVar17,0);
  plVar65 = param_1 + 0x1397;
  thunk_FUN_100650e64(plVar65);
  plVar58 = param_1 + 0x13bd;
  lVar56 = 0x1300;
  do {
    lVar57 = thunk_FUN_100650e64(plVar58);
    plVar58 = (long *)(lVar57 + 0x130);
    lVar56 = lVar56 + -0x130;
  } while (lVar56 != 0);
  local_148 = param_1 + 0x161d;
  thunk_FUN_10018ceb0();
  local_160 = param_1 + 0x1b43;
  thunk_FUN_10018ceb0();
  plVar58 = param_1 + 0x2069;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x2087;
  thunk_FUN_100652c08();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar6);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0x20b6;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x20d4;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x20fa;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x23b1;
  thunk_FUN_100181304(plVar22,0);
  thunk_FUN_100650e64();
  plVar23 = param_1 + 0x268e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x26ac;
  FUN_10064e264();
  plVar60 = param_1 + 0x26c3;
  lVar56 = 0x10bc0;
  do {
    lVar57 = thunk_FUN_10019ff68(plVar60);
    plVar60 = (long *)(lVar57 + 0x1320);
    lVar56 = lVar56 + -0x1320;
  } while (lVar56 != 0);
  plVar25 = param_1 + 0x483b;
  thunk_FUN_10019ff68();
  param_1[0x4a9f] = 0;
  plVar60 = param_1 + 0x4aa0;
  FUN_1006421a8(plVar60);
  param_1[0x4aa0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar26 = param_1 + 0x4ab1;
  thunk_FUN_1001c81d8();
  plVar27 = param_1 + 0x4c0b;
  thunk_FUN_100650e64();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar5);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x4c42;
  thunk_FUN_1006543ec(plVar28);
  plVar29 = param_1 + 0x4c76;
  FUN_10053077c(plVar29,0);
  puVar59 = (undefined8 *)FUN_1006421a8(param_1 + 0x4d1d);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar30 = param_1 + 0x4d2e;
  thunk_FUN_100650e64();
  plVar31 = param_1 + 0x4d54;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0x4d7a;
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4da0;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar34 = param_1 + 0x4e8d;
  thunk_FUN_100650e64();
  plVar35 = param_1 + 0x4eb3;
  thunk_FUN_100650e64();
  plVar36 = param_1 + 0x4ed9;
  thunk_FUN_100650e64();
  plVar37 = param_1 + 0x4eff;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar3);
  *plVar3 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar38 = param_1 + 0x4fec;
  thunk_FUN_100650e64();
  plVar39 = param_1 + 0x5012;
  thunk_FUN_100650e64();
  plVar40 = param_1 + 0x5038;
  thunk_FUN_100650e64();
  plVar41 = param_1 + 0x505e;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  param_1[0x513d] = 0;
  param_1[0x513c] = 0;
  param_1[0x513f] = 0;
  param_1[0x513e] = 0;
  plVar42 = param_1 + 0x5140;
  param_1[0x513b] = 0;
  param_1[0x513a] = 0;
  thunk_FUN_100650e64();
  plVar43 = param_1 + 0x5166;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar66);
  *plVar66 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar44 = param_1 + 0x519d;
  thunk_FUN_1001862ec(plVar44,param_1 + 0x589);
  param_1[0x59bb] = 0;
  param_1[0x59ba] = 0;
  param_1[0x59bd] = 0;
  param_1[0x59bc] = 0;
  thunk_FUN_100016500(param_1 + 0x59be,"PARTY.PENDING_CHATS",1);
  param_1[0x59cb] = 0;
  param_1[0x59ca] = 0;
  param_1[0x59c9] = 0;
  param_1[0x59d3] = -0x100000000;
  *(undefined4 *)((long)param_1 + 0x2cea4) = 0;
  *(undefined4 *)((long)param_1 + 0x2cea7) = 0;
  *(undefined1 *)((long)param_1 + 0x2ceab) = 1;
  *(undefined4 *)((long)param_1 + 0x2ceac) = 0;
  param_1[0x59d6] = 0x10100010101;
  *(undefined1 *)(param_1 + 22999) = 0;
  FUN_10001549c(param_1 + 23000,"*GameMode_HF_Private*");
  param_1[0x59e5] = 0;
  param_1[0x59e4] = 0;
  param_1[0x59db] = 0;
  param_1[0x59e7] = 0;
  param_1[0x59e6] = 0;
  param_1[0x59e9] = 0;
  param_1[0x59e8] = 0;
  param_1[0x59eb] = 0;
  param_1[0x59ea] = 0;
  param_1[0x59ec] = 0;
  param_1[0x59cd] = -1;
  param_1[0x59cc] = -1;
  param_1[0x59cf] = -1;
  param_1[0x59ce] = -1;
  param_1[0x59d1] = -1;
  param_1[0x59d0] = -1;
  param_1[0x59d2] = -1;
  param_1[0x59dd] = -1;
  param_1[0x59dc] = -1;
  param_1[0x59df] = -1;
  param_1[0x59de] = -1;
  param_1[0x59e1] = -1;
  param_1[0x59e0] = -1;
  param_1[0x59e3] = -1;
  param_1[0x59e2] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_100642bd8(plVar13,param_1 + 0xf91,1);
  FUN_100642bd8(plVar13,plVar60,1);
  FUN_100642bd8(plVar60,local_170,1);
  FUN_100642bd8(plVar60,plVar5,1);
  FUN_100642bd8(plVar5,plVar28,1);
  FUN_100642bd8(plVar28,plVar29,1);
  FUN_1005308f8(plVar29,plVar4,1);
  FUN_1005308f8(plVar29,plVar3,1);
  FUN_1005308f8(plVar29,param_1 + 0x4d1d,1);
  FUN_1005308f8(plVar29,plVar34,1);
  FUN_1005308f8(plVar29,plVar35,1);
  FUN_1005308f8(plVar29,plVar36,1);
  FUN_1005308f8(plVar29,param_1 + 0x4f1d,1);
  FUN_1005308f8(plVar29,plVar37,1);
  FUN_1005308f8(plVar29,plVar38,1);
  FUN_1005308f8(plVar29,plVar39,1);
  FUN_1005308f8(plVar29,plVar40,1);
  FUN_1005308f8(plVar29,param_1 + 0x507c,1);
  FUN_1005308f8(plVar29,plVar41,1);
  FUN_1005308f8(plVar29,plVar30,1);
  FUN_1005308f8(plVar29,plVar31,1);
  FUN_1005308f8(plVar29,plVar32,1);
  FUN_1005308f8(plVar29,param_1 + 0x4dbe,1);
  FUN_1005308f8(plVar29,plVar33,1);
  FUN_100642bd8(plVar28,plVar42,1);
  FUN_100642bd8(plVar28,plVar43,1);
  FUN_100642bd8(plVar60,plVar66,1);
  FUN_100642bd8(plVar66,plVar44,1);
  FUN_100642bd8(plVar60,plVar26,1);
  FUN_100642bd8(plVar60,plVar27,1);
  FUN_100642bd8(plVar60,plVar18,1);
  FUN_100642bd8(plVar13,plVar15,1);
  FUN_100642bd8(plVar15,param_1 + 0x1094,1);
  FUN_100642bd8(plVar15,param_1 + 0x10ba,1);
  FUN_100642bd8(plVar15,plVar17,1);
  FUN_100642bd8(plVar15,plVar21,1);
  FUN_100642bd8(plVar15,plVar22,1);
  FUN_100642bd8(plVar15,local_158,1);
  FUN_100642bd8(local_158,plVar16,1);
  FUN_1005308f8(plVar16,plVar24,1);
  plVar66 = param_1 + 0x13bd;
  lVar56 = 0x10;
  do {
    FUN_100642bd8(plVar24,plVar66,1);
    plVar66 = plVar66 + 0x26;
    lVar56 = lVar56 + -1;
  } while (lVar56 != 0);
  FUN_100642bd8(plVar24,plVar65,1);
  FUN_100642bd8(plVar15,param_1 + 0x2668,1);
  FUN_100642bd8(plVar15,plVar6,1);
  FUN_100642bd8(plVar6,plVar19,1);
  FUN_100642bd8(plVar6,plVar20,1);
  FUN_100642bd8(plVar15,plVar58,1);
  FUN_100642bd8(plVar15,local_160,1);
  FUN_100642bd8(plVar15,local_148,1);
  FUN_100642bd8(plVar15,plVar25,1);
  FUN_100642bd8(plVar15,plVar12,1);
  FUN_100642bd8(plVar15,param_1 + 0xf1e,1);
  FUN_100642bd8(plVar13,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,local_168,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,param_1 + 0xee1,1);
  FUN_100642bd8(param_1 + 0xee1,plVar11,1);
  uVar61 = FUN_100126b8c();
  if ((uVar61 & 1) != 0) {
    FUN_100642bd8(plVar15,param_1[0x58e],1);
  }
  iVar54 = FUN_100126b8c();
  if (iVar54 != 0) {
    FUN_100219060(pcVar7,0);
  }
  uVar53 = FUN_100126c88();
  *(undefined1 *)((long)param_1 + 0x2ceb5) = uVar53;
  FUN_100641464(&local_114,auStack_118);
  local_114 = local_114 + -258.0;
  *(uint *)((long)param_1 + 0x2d24) = *(uint *)((long)param_1 + 0x2d24) | 4;
  *(uint *)((long)param_1 + 0x7dc4) = *(uint *)((long)param_1 + 0x7dc4) & 0xfffffffb;
  FUN_100131560();
  *(uint *)((long)param_1 + 0x25584) = *(uint *)((long)param_1 + 0x25584) & 0xfffffffb;
  bVar52 = *(char *)((long)param_1 + 0x2ceb5) == '\0';
  fVar67 = *(float *)(&DAT_101158538 + (ulong)bVar52 * 4);
  *(float *)(param_1 + 0x59e8) = fVar67 * local_114;
  fVar68 = 150.0;
  if (!bVar52) {
    fVar68 = 130.0;
  }
  fVar68 = fVar67 * local_114 - fVar68;
  *(float *)(param_1 + 0x59e7) = fVar68;
  *(float *)((long)param_1 + 0x2cf3c) = fVar68;
  *(float *)(param_1 + 0x59e9) = fVar68 * 0.5 + -15.0;
  *(uint *)((long)param_1 + 0x394) = *(uint *)((long)param_1 + 0x394) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7b2c) = *(uint *)((long)param_1 + 0x7b2c) | 0x10;
  FUN_100652cac(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xff362626);
  FUN_100652dd4(plVar14,&local_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x7b2c);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x7b2c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(plVar14);
  }
  uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_CTA_BUTTON_TITLE",0);
  FUN_1001816d4(0,*(undefined4 *)((long)param_1 + 0x2cf3c),*(undefined4 *)((long)param_1 + 0x2cf3c),
                plVar9,0,uVar62,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x692,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0x3ecccccd,plVar9,&DAT_10115a164);
  uVar46 = DAT_101d91884;
  local_a8 = DAT_101d91884;
  local_d0 = thunk_FUN_100252a20;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x5b0,&local_d0);
  FUN_1001b495c(0x40000000,plVar9);
  FUN_100181c68(0x42f00000,plVar9);
  iVar54 = FUN_100131560();
  if (iVar54 != 0) {
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_BUTTON_TITLE",0);
    FUN_1001816d4(0,*(undefined4 *)((long)param_1 + 0x2cf3c),
                  *(undefined4 *)((long)param_1 + 0x2cf3c),plVar10,0,uVar62,&DAT_10115a168,
                  &DAT_101dc1cb8,0);
    FUN_100651594(param_1 + 0x949,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
    FUN_100181be0(0x3ecccccd,plVar10,&DAT_10115a164);
    local_a8 = uVar46;
    local_d0 = thunk_FUN_100252b24;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    local_b0 = (long *)0x0;
    plStack_c8 = param_1;
    FUN_10001554c(param_1 + 0x867,&local_d0);
    FUN_1001b495c(0x40000000,plVar10);
    FUN_100181c68(0x42f00000,plVar10);
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_EXPLANATION",0);
  FUN_1006513c0(local_168,uVar62);
  FUN_100651038(local_168,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_100651700(local_168,3);
  FUN_100652cac(local_170,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(local_170,&DAT_10115a164,2);
  uVar55 = *(uint *)((long)param_1 + 0x7c1c);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x7c1c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(local_170);
  }
  uVar61 = FUN_100131560();
  if ((uVar61 & 1) == 0) {
    uVar62 = FUN_1004e0150("MENU_PARTY_CASUAL_MATCH_LABEL",0);
    FUN_1006513c0(param_1 + 0x1094,uVar62);
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION",0);
  FUN_1006513c0(param_1 + 0x10ba,uVar62);
  *(uint *)((long)param_1 + 0x8654) = *(uint *)((long)param_1 + 0x8654) & 0xfffffffb;
  FUN_100652cac(plVar58,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar55 = *(uint *)((long)param_1 + 0x103cc);
  if ((uVar55 & 0x7f80) == 0) {
    uVar55 = uVar55 & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x103cc) = uVar55 & 0xffff807b;
    FUN_1000200a0(plVar58);
    uVar55 = *(uint *)((long)param_1 + 0x103cc);
  }
  *(uint *)((long)param_1 + 0x103cc) = uVar55 | 0x10;
  uVar47 = DAT_101dbd458;
  local_a8 = DAT_101dbd458;
  local_d0 = FUN_10024b388;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x206a,&local_d0);
  uVar49 = DAT_101dbd484;
  local_a8 = DAT_101dbd484;
  local_d0 = FUN_10024b388;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x206a,&local_d0);
  uVar62 = FUN_100345b94();
  lVar56 = FUN_10034c450(uVar62,"*GameModePartyDropDown*");
  param_1[0x59e4] = lVar56;
  uVar61 = FUN_100131560();
  if ((uVar61 & 1) == 0) {
    uVar62 = FUN_1004e0150("MENU_PARTY_DROPDOWN_HEADER_PUBLIC",0);
    FUN_10018f14c(local_148,0,uVar62);
  }
  uVar55 = FUN_100131560();
  uVar62 = FUN_1004e0150("MENU_PARTY_DROPDOWN_HEADER_PRIVATE",0);
  FUN_10018f14c(local_148,uVar55 ^ 1,uVar62);
  iVar54 = FUN_100131560();
  uVar64 = 1;
  if (iVar54 == 0) {
    uVar64 = 2;
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_DROPDOWN_HEADER_PRACTICE",0);
  FUN_10018f14c(local_148,uVar64,uVar62);
  local_a8 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_d0 = thunk_FUN_10024e69c;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x161e,&local_d0);
  local_a8 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_d0 = FUN_10024b3c4;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  plStack_c8 = param_1;
  local_b0 = local_148;
  FUN_10001554c(param_1 + 0x161e,&local_d0);
  *(uint *)((long)param_1 + 0xb16c) = *(uint *)((long)param_1 + 0xb16c) & 0xfffffffb;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,local_148);
  FUN_10018efac(local_148,0);
  FUN_10018efa4(local_148,0);
  *(uint *)((long)param_1 + 0xcc6c) = *(uint *)((long)param_1 + 0xcc6c) & 0xfffffffb;
  if ((*(char *)((long)param_1 + 0x2ceb5) == '\0') && (*(char *)((long)param_1 + 0x2ceb4) != '\0'))
  {
    FUN_10018f004(local_148,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  }
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION",0);
  FUN_10010b098(&local_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_EASY_OPTION",0);
  FUN_10010b098(&local_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_MEDIUM_OPTION",0);
  FUN_10010b098(&local_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_HARD_OPTION",0);
  FUN_10010b098(&local_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_VERY_HARD_OPTION",0);
  FUN_10010b098(&local_128,uVar62);
  FUN_10001549c(&local_d0,"very_easy");
  FUN_10001617c(&local_138,&local_d0);
  FUN_10001549c(&local_d0,"easy");
  FUN_10001617c(&local_138,&local_d0);
  FUN_10001549c(&local_d0,"medium");
  FUN_10001617c(&local_138,&local_d0);
  FUN_10001549c(&local_d0,"hard");
  FUN_10001617c(&local_138,&local_d0);
  FUN_10001549c(&local_d0,"very_hard");
  FUN_10001617c(&local_138,&local_d0);
  FUN_10018d7d4((int)param_1[0x59e7],(int)param_1[0x59e7],0,0x3f800000,0x3f8ccccd,local_160,
                &local_128,&local_138,1,1,0);
  local_a8 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_d0 = thunk_FUN_10024e69c;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x1b44,&local_d0);
  local_a8 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_d0 = FUN_10024b3c4;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  plStack_c8 = param_1;
  local_b0 = local_160;
  FUN_10001554c(param_1 + 0x1b44,&local_d0);
  *(uint *)((long)param_1 + 0xda9c) = *(uint *)((long)param_1 + 0xda9c) & 0xfffffffb;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,local_160);
  FUN_10018efac(local_160,0);
  FUN_10018efa4(local_160,0);
  *(uint *)((long)param_1 + 0xf59c) = *(uint *)((long)param_1 + 0xf59c) & 0xfffffffb;
  FUN_100654488(local_158,1);
  lVar56 = 0;
  plVar58 = param_1 + 0x13bd;
  do {
    FUN_1004d2698(&local_d0,"MENU_PARTY_HEADER_TEAM_%s");
    FUN_1004d2698(&local_110,"Team %s");
    FUN_100651038(plVar58,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8);
    uVar62 = FUN_1004e0150(&local_d0,0);
    (**(code **)(*plVar58 + 0x138))(plVar58,uVar62);
    uVar55 = *(uint *)((long)plVar58 + 0x84);
    if ((uVar55 & 0x7f80) != 0x2600) {
      *(uint *)((long)plVar58 + 0x84) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
      FUN_1000200a0(plVar58);
      uVar55 = *(uint *)((long)plVar58 + 0x84);
    }
    *(uint *)((long)plVar58 + 0x84) = uVar55 & 0xfffffffb;
    lVar56 = lVar56 + 1;
    plVar58 = plVar58 + 0x26;
  } while (lVar56 != 0x10);
  FUN_100651038(plVar65,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8);
  uVar62 = FUN_1004e0150("MENU_PARTY_HEADER_TEAM_SPECTATOR",0);
  FUN_1006513c0(plVar65,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x9d3c);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x9d3c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(plVar65);
    uVar55 = *(uint *)((long)param_1 + 0x9d3c);
  }
  uVar61 = 0;
  *(uint *)((long)param_1 + 0x9d3c) = uVar55 & 0xfffffffb;
  uVar51 = DAT_101dbd48c;
  uVar50 = DAT_101dbd488;
  uVar48 = DAT_101dbd460;
  uVar64 = DAT_101dbd45c;
  plVar58 = param_1 + 0x26c3;
  local_150 = plVar65;
  do {
    FUN_1001a0d78(plVar58);
    FUN_100642bd8(plVar24,plVar58,1);
    local_a8 = uVar46;
    local_148 = (long *)((ulong)local_148 & 0xffffffff00000000 | uVar61);
    local_d0 = FUN_10024b3d4;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    plVar66 = plVar58 + 0x38;
    plStack_c8 = param_1;
    local_b0 = local_148;
    FUN_10001554c(plVar66,&local_d0);
    local_a8 = uVar50;
    local_150 = (long *)((ulong)local_150 & 0xffffffff00000000 | uVar61);
    local_d0 = FUN_10024b3d4;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    plStack_c8 = param_1;
    local_b0 = local_150;
    FUN_10001554c(plVar66,&local_d0);
    local_a8 = uVar64;
    local_158 = (long *)((ulong)local_158 & 0xffffffff00000000 | uVar61);
    local_d0 = FUN_10024b3d4;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    plStack_c8 = param_1;
    local_b0 = local_158;
    FUN_10001554c(plVar66,&local_d0);
    local_a8 = uVar50;
    local_160 = (long *)((ulong)local_160 & 0xffffffff00000000 | uVar61);
    local_d0 = FUN_10024b3dc;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    plVar66 = plVar58 + 1;
    plStack_c8 = param_1;
    local_b0 = local_160;
    FUN_10001554c(plVar66,&local_d0);
    local_a8 = uVar64;
    local_168 = (long *)((ulong)local_168 & 0xffffffff00000000 | uVar61);
    local_d0 = FUN_10024b3dc;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    plStack_c8 = param_1;
    local_b0 = local_168;
    FUN_10001554c(plVar66,&local_d0);
    local_a8 = uVar51;
    plVar65 = (long *)((ulong)plVar65 & 0xffffffff00000000 | uVar61);
    local_d0 = FUN_10024b3e4;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    plStack_c8 = param_1;
    local_b0 = plVar65;
    FUN_10001554c(plVar66,&local_d0);
    local_a8 = uVar48;
    local_170 = (long *)((ulong)local_170 & 0xffffffff00000000 | uVar61);
    local_d0 = FUN_10024b3e4;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    plStack_c8 = param_1;
    local_b0 = local_170;
    FUN_10001554c(plVar66,&local_d0);
    uVar61 = uVar61 + 1;
    plVar58 = plVar58 + 0x264;
  } while (uVar61 != 0xe);
  lVar56 = 0xa0;
  if (*(char *)((long)param_1 + 0x2ceb4) != '\0') {
    lVar56 = 0xb0;
  }
  FUN_1001a0704(*(undefined4 *)((long)(param_1 + 0x59d3) + lVar56),0x42a00000,0,0,plVar25,0);
  FUN_1001a0d78(plVar25);
  FUN_1001a0dfc(plVar25,0);
  FUN_1001a0e1c(plVar25,1);
  FUN_1001a0e3c(plVar25,0xffffffff);
  FUN_1001a0e64(0x3f000000,plVar25,0xff000000);
  *(uint *)((long)param_1 + 0x2425c) = *(uint *)((long)param_1 + 0x2425c) & 0xfffffffb;
  FUN_1001a0edc(plVar25,1);
  *(uint *)((long)param_1 + 0x24a04) = *(uint *)((long)param_1 + 0x24a04) & 0xffffffef;
  local_a8 = uVar50;
  local_d0 = FUN_10024b3dc;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0xffffffff;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 1,&local_d0);
  local_a8 = uVar64;
  local_d0 = FUN_10024b3dc;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0xffffffff;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 1,&local_d0);
  uVar62 = FUN_1004e0150("MENU_PARTY_LEAVE_BUTTON",0);
  FUN_1001816d4(0x42800000,0x43080000,0x443e0000,plVar17,0,uVar62,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181be0(0x3ecccccd,plVar17,&DAT_10115a164);
  FUN_100651594(param_1 + 0x11c3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  local_a8 = uVar46;
  local_d0 = thunk_FUN_100251990;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x10e1,&local_d0);
  *(uint *)((long)param_1 + 0x8784) = *(uint *)((long)param_1 + 0x8784) | 0x10;
  if ((*(char *)((long)param_1 + 0x2ceb5) != '\0') &&
     ((*(float *)(param_1 + 0x10e9) != 1.2 || (*(float *)((long)param_1 + 0x874c) != 1.2)))) {
    param_1[0x10e9] = 0x3f99999a3f99999a;
    FUN_1000200a0(plVar17);
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_1001816d4(0,*(undefined4 *)((long)param_1 + 0x2cf3c),*(undefined4 *)((long)param_1 + 0x2cf3c),
                plVar21,0,uVar62,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x21dd,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0x3ecccccd,plVar21,&DAT_10115a164);
  local_a8 = uVar46;
  local_d0 = thunk_FUN_100252bb8;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x20fb,&local_d0);
  FUN_1001b495c(0x40000000,plVar21);
  FUN_100181c68(0x42f00000,plVar21);
  uVar62 = FUN_1004e0150("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_100181af8(plVar21,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_CANCEL_QUEUE",0);
  FUN_1001816d4(0x41c00000,*(undefined4 *)((long)param_1 + 0x2cf3c),
                *(undefined4 *)((long)param_1 + 0x2cf3c),plVar22,0,uVar62,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x2494,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0x3ecccccd,plVar22,&DAT_10115a164);
  local_a8 = uVar46;
  local_d0 = FUN_10024b400;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x23b2,&local_d0);
  *(uint *)((long)param_1 + 0x11e0c) = *(uint *)((long)param_1 + 0x11e0c) & 0xfffffffb;
  FUN_1001b495c(0x40000000,plVar22);
  FUN_100651038(param_1 + 0x2668,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_100652cac(plVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar23,&DAT_10115a164,2);
  uVar55 = *(uint *)((long)param_1 + 0x134f4);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x134f4) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(plVar23);
  }
  *(uint *)((long)param_1 + 0x105ac) = *(uint *)((long)param_1 + 0x105ac) & 0xfffffffb;
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar55 = *(uint *)((long)param_1 + 0x10634);
  if ((uVar55 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x10634) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar19);
  }
  FUN_100651594(plVar20,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_PARTY_DRAG_AND_DROP_INSTRUCTIONS",0);
  FUN_1006513c0(plVar20,uVar62);
  FUN_100651700(plVar20,0);
  FUN_100654488(plVar28,1);
  FUN_100530be0(plVar29,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar29,0,1);
  if ((*(float *)(param_1 + 0x4c7e) != 48.0) || (*(float *)((long)param_1 + 0x263f4) != 0.0)) {
    param_1[0x4c7e] = 0x42400000;
    FUN_1000200a0(plVar29);
  }
  FUN_100651594(plVar34,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1006513c0(plVar34,uVar62);
  FUN_100651594(plVar35,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar35,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x2761c);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2761c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar35);
  }
  FUN_100651594(plVar36,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar36,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x2774c);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2774c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar36);
  }
  FUN_100652cac(plVar37,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar37,&local_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x2787c);
  if ((uVar55 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x2787c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x1300;
    FUN_1000200a0(plVar37);
    uVar55 = *(uint *)((long)param_1 + 0x2787c);
  }
  *(uint *)((long)param_1 + 0x2787c) = uVar55 & 0xfffffffb;
  local_a8 = uVar46;
  local_d0 = FUN_10024b438;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x4f1e,&local_d0);
  pcVar1 = "arrow_down";
  pcVar2 = "arrow_right";
  pcVar45 = pcVar2;
  if ((char)param_1[0x59d6] != '\0') {
    pcVar45 = pcVar1;
  }
  FUN_100652cdc(param_1 + 0x4fb7,pcVar45);
  FUN_100651594(plVar38,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1006513c0(plVar38,uVar62);
  FUN_100651594(plVar39,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar39,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x28114);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x28114) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar39);
  }
  FUN_100651594(plVar40,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar40,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x28244);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x28244) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar40);
  }
  FUN_100652cac(plVar41,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar41,&local_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x28374);
  if ((uVar55 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x28374) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x1300;
    FUN_1000200a0(plVar41);
    uVar55 = *(uint *)((long)param_1 + 0x28374);
  }
  *(uint *)((long)param_1 + 0x28374) = uVar55 & 0xfffffffb;
  local_a8 = uVar46;
  local_d0 = FUN_10024b438;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x1;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x507d,&local_d0);
  pcVar45 = pcVar2;
  if (*(char *)((long)param_1 + 0x2ceb1) != '\0') {
    pcVar45 = pcVar1;
  }
  FUN_100652cdc(param_1 + 0x5116,pcVar45);
  FUN_100651594(plVar30,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1006513c0(plVar30,uVar62);
  FUN_100651594(plVar31,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar31,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x26b24);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x26b24) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar31);
  }
  FUN_100651594(plVar32,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar32,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x26c54);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x26c54) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar32);
  }
  FUN_100652cac(plVar33,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar33,&local_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x26d84);
  if ((uVar55 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x26d84) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x1300;
    FUN_1000200a0(plVar33);
    uVar55 = *(uint *)((long)param_1 + 0x26d84);
  }
  *(uint *)((long)param_1 + 0x26d84) = uVar55 & 0xfffffffb;
  local_a8 = uVar46;
  local_d0 = FUN_10024b438;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x2;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x4dbf,&local_d0);
  if (*(char *)((long)param_1 + 0x2ceb2) != '\0') {
    pcVar2 = pcVar1;
  }
  FUN_100652cdc(param_1 + 0x4e58,pcVar2);
  *(uint *)((long)param_1 + 0x28a84) = *(uint *)((long)param_1 + 0x28a84) & 0xfffffffb;
  FUN_100651594(plVar42,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_PARTY_INVITES_FULL",0);
  FUN_1006513c0(plVar42,uVar62);
  if ((*(float *)(param_1 + 0x5148) != 48.0) || (*(float *)((long)param_1 + 0x28a44) != 0.0)) {
    param_1[0x5148] = 0x42400000;
    FUN_1000200a0(plVar42);
  }
  *(uint *)((long)param_1 + 0x28bb4) = *(uint *)((long)param_1 + 0x28bb4) & 0xfffffffb;
  uVar62 = FUN_1004e0150("MENU_PARTY_SAD_AND_EMPTY",0);
  FUN_1006513c0(plVar43,uVar62);
  if ((*(float *)(param_1 + 0x516e) != 48.0) || (*(float *)((long)param_1 + 0x28b74) != 0.0)) {
    param_1[0x516e] = 0x42400000;
    FUN_1000200a0(plVar43);
  }
  *(uint *)((long)param_1 + 0x28ce4) = *(uint *)((long)param_1 + 0x28ce4) & 0xfffffffb;
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_100187a90(plVar44,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_100187a9c(plVar44,uVar62);
  uVar62 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_100187120(plVar44,uVar62,0);
  FUN_10001549c(&local_d0,"PC_");
  std::string::operator=((string *)(param_1 + 0x59af),(string *)&local_d0);
  FUN_1001870b0(plVar44,1);
  _memset_pattern16(param_1 + 0x59c2,&DAT_101158590,0x38);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar55 = *(uint *)((long)param_1 + 0x104bc);
  if ((uVar55 & 0x7f80) == 0) {
    uVar55 = uVar55 & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x104bc) = uVar55 & 0xffff807b;
    FUN_1000200a0(plVar18);
    uVar55 = *(uint *)((long)param_1 + 0x104bc);
  }
  *(uint *)((long)param_1 + 0x104bc) = uVar55 | 0x10;
  local_a8 = uVar47;
  local_d0 = FUN_10024b388;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x2088,&local_d0);
  local_a8 = uVar49;
  local_d0 = FUN_10024b388;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x2088,&local_d0);
  local_110 = 0;
  uStack_108 = 0;
  uVar62 = FUN_1004e0150("MENU_PARTY_INVITE_HEADER",0);
  FUN_10010b098(&local_110,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_HEADER",0);
  FUN_10010b098(&local_110,uVar62);
  fVar68 = (float)NEON_ucvtf((undefined4)local_110);
  if (fVar68 <= 1.0) {
    fVar68 = 1.0;
  }
  fVar68 = *(float *)((long)param_1 + 0x2cf44) / fVar68;
  FUN_1001c88a4(fVar68,fVar68,0,0x3f800000,
                *(undefined4 *)
                 (&DAT_101158540 + (ulong)(*(char *)((long)param_1 + 0x2ceb5) == '\0') * 4),plVar26,
                &local_110);
  FUN_1001c9460(0x3f4ccccd,plVar26);
  local_a8 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_d0 = FUN_10024b440;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x4ab2,&local_d0);
  *(uint *)((long)param_1 + 0x260dc) = *(uint *)((long)param_1 + 0x260dc) & 0xffffffef;
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_HEADER",0);
  FUN_1006513c0(plVar27,uVar62);
  FUN_100651460(plVar27,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x260dc) = *(uint *)((long)param_1 + 0x260dc) & 0xfffffffb;
  FUN_100650608(plVar8,&DAT_10115a164);
  uVar55 = *(uint *)((long)param_1 + 0x2d24);
  if ((uVar55 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2d24) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x6600;
    FUN_1000200a0(plVar8);
  }
  iVar54 = FUN_100131560();
  if (iVar54 != 0) {
    FUN_1001b05dc(plVar11,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_DEFAULT",0);
    FUN_100185730(plVar11,uVar62);
    FUN_100185e1c(0xc1200000,plVar11);
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN__MESSAGE",0);
    uVar63 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_FIELD",0);
    FUN_1001afd98(plVar11,uVar62,uVar63,&DAT_101d91650,0,2,0,0,0,1);
    FUN_100651038(plVar12,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_FIELD",0);
    FUN_1006513c0(plVar12,uVar62);
    *(uint *)((long)param_1 + 0x7844) = *(uint *)((long)param_1 + 0x7844) & 0xfffffffb;
    FUN_100651038(param_1 + 0xf1e,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
    *(uint *)((long)param_1 + 0x7974) = *(uint *)((long)param_1 + 0x7974) & 0xfffffffb;
  }
  iVar54 = FUN_100126b8c();
  if (iVar54 != 0) {
    lVar56 = FUN_10031ffe0();
    plStack_c8 = (long *)0x0;
    local_b8 = thunk_FUN_1002194d0;
    local_d0 = pcVar7;
    local_c0 = pcVar7;
    FUN_1000be5e4(lVar56 + 0x40,&local_d0);
  }
  FUN_1001116f8(param_1 + 0x58b);
  FUN_10010b1a8(&local_110,1);
  FUN_10001629c(&local_138,1);
  FUN_10010b1a8(&local_128,1);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x000100249f9c) */
/* WARNING: Removing unreachable block (ram,0x000100249f40) */
/* WARNING: Removing unreachable block (ram,0x000100249ee8) */
/* WARNING: Removing unreachable block (ram,0x000100249f14) */
/* WARNING: Removing unreachable block (ram,0x000100249f6c) */
/* WARNING: Removing unreachable block (ram,0x00010024af50) */



/*
 * thunk_FUN_100248d18
 * VA: 0xthunk_100248d18 | Source: functions/named.c:22452
 * CE-gate: YES (7x) | Guest-gate: NO
 * Indicators: UI strings: 49, Vis masks: 24
 * Callees: FUN_10001549c, FUN_10001554c, FUN_10001617c, FUN_10001629c, FUN_100016598, FUN_1000200a0, FUN_1000be5e4, FUN_10010b098 (+106 more)
 * Callers: FUN_1001fd570, thunk_FUN_1001fd570
 */
/* WARNING: Removing unreachable block (ram,0x000100249f9c) */
/* WARNING: Removing unreachable block (ram,0x000100249f40) */
/* WARNING: Removing unreachable block (ram,0x000100249ee8) */
/* WARNING: Removing unreachable block (ram,0x000100249f14) */
/* WARNING: Removing unreachable block (ram,0x000100249f6c) */
/* WARNING: Removing unreachable block (ram,0x00010024af50) */

long * thunk_FUN_100248d18(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  char *pcVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  bool bVar52;
  undefined1 uVar53;
  int iVar54;
  uint uVar55;
  long lVar56;
  long lVar57;
  undefined8 *puVar59;
  long *plVar60;
  ulong uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined4 uVar64;
  long *plVar65;
  long *plVar66;
  float fVar67;
  float fVar68;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [4];
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_d0;
  long *plStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  undefined4 uStack_a8;
  long lStack_90;
  long *plVar58;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_101444218;
  plVar66 = param_1 + 0x518c;
  plVar3 = param_1 + 0x4fdb;
  plVar4 = param_1 + 0x4e7c;
  plVar5 = param_1 + 0x4c31;
  plVar6 = param_1 + 0x20a5;
  lVar56 = FUN_1001e6910();
  FUN_10014f4a0(lVar56 + 0x2c30);
  param_1[0x58c] = 0;
  *param_1 = (long)&PTR_thunk_FUN_10024b44c_101479fd8;
  param_1[0x586] = (long)&PTR_FUN_10147a228;
  param_1[0x589] = (long)&PTR_FUN_10147a5c0;
  param_1[0x58a] = (long)&PTR_FUN_10147a620;
  param_1[0x58b] = (long)&PTR_FUN_10147a678;
  pcVar7 = (code *)(param_1 + 0x58d);
  thunk_FUN_100218f18();
  plVar8 = param_1 + 0x594;
  FUN_1006505b8();
  plVar9 = param_1 + 0x5af;
  thunk_FUN_100181304(plVar9,0);
  plVar10 = param_1 + 0x866;
  thunk_FUN_100181304(plVar10,0);
  plStack_168 = param_1 + 0xb1d;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0xb43;
  thunk_FUN_100184f78();
  FUN_10064e264();
  plVar12 = param_1 + 0xef8;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xf44;
  FUN_1006421a8();
  param_1[0xf44] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xf55;
  thunk_FUN_100652c08();
  plStack_170 = param_1 + 0xf73;
  thunk_FUN_100652c08();
  FUN_10064e264();
  plVar15 = param_1 + 0xfa8;
  FUN_1006421a8(plVar15);
  param_1[0xfa8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plStack_158 = param_1 + 0xfb9;
  thunk_FUN_1006543ec();
  plVar16 = param_1 + 0xfed;
  FUN_10053077c(plVar16,0);
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar17 = param_1 + 0x10e0;
  thunk_FUN_100181304(plVar17,0);
  plVar65 = param_1 + 0x1397;
  thunk_FUN_100650e64(plVar65);
  plVar58 = param_1 + 0x13bd;
  lVar56 = 0x1300;
  do {
    lVar57 = thunk_FUN_100650e64(plVar58);
    plVar58 = (long *)(lVar57 + 0x130);
    lVar56 = lVar56 + -0x130;
  } while (lVar56 != 0);
  plStack_148 = param_1 + 0x161d;
  thunk_FUN_10018ceb0();
  plStack_160 = param_1 + 0x1b43;
  thunk_FUN_10018ceb0();
  plVar58 = param_1 + 0x2069;
  thunk_FUN_100652c08();
  plVar18 = param_1 + 0x2087;
  thunk_FUN_100652c08();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar6);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0x20b6;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x20d4;
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0x20fa;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x23b1;
  thunk_FUN_100181304(plVar22,0);
  thunk_FUN_100650e64();
  plVar23 = param_1 + 0x268e;
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0x26ac;
  FUN_10064e264();
  plVar60 = param_1 + 0x26c3;
  lVar56 = 0x10bc0;
  do {
    lVar57 = thunk_FUN_10019ff68(plVar60);
    plVar60 = (long *)(lVar57 + 0x1320);
    lVar56 = lVar56 + -0x1320;
  } while (lVar56 != 0);
  plVar25 = param_1 + 0x483b;
  thunk_FUN_10019ff68();
  param_1[0x4a9f] = 0;
  plVar60 = param_1 + 0x4aa0;
  FUN_1006421a8(plVar60);
  param_1[0x4aa0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar26 = param_1 + 0x4ab1;
  thunk_FUN_1001c81d8();
  plVar27 = param_1 + 0x4c0b;
  thunk_FUN_100650e64();
  puVar59 = (undefined8 *)FUN_1006421a8(plVar5);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar28 = param_1 + 0x4c42;
  thunk_FUN_1006543ec(plVar28);
  plVar29 = param_1 + 0x4c76;
  FUN_10053077c(plVar29,0);
  puVar59 = (undefined8 *)FUN_1006421a8(param_1 + 0x4d1d);
  *puVar59 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar30 = param_1 + 0x4d2e;
  thunk_FUN_100650e64();
  plVar31 = param_1 + 0x4d54;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0x4d7a;
  thunk_FUN_100650e64();
  plVar33 = param_1 + 0x4da0;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar34 = param_1 + 0x4e8d;
  thunk_FUN_100650e64();
  plVar35 = param_1 + 0x4eb3;
  thunk_FUN_100650e64();
  plVar36 = param_1 + 0x4ed9;
  thunk_FUN_100650e64();
  plVar37 = param_1 + 0x4eff;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  FUN_1006421a8(plVar3);
  *plVar3 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar38 = param_1 + 0x4fec;
  thunk_FUN_100650e64();
  plVar39 = param_1 + 0x5012;
  thunk_FUN_100650e64();
  plVar40 = param_1 + 0x5038;
  thunk_FUN_100650e64();
  plVar41 = param_1 + 0x505e;
  thunk_FUN_100652c08();
  FUN_10024f9f4();
  param_1[0x513d] = 0;
  param_1[0x513c] = 0;
  param_1[0x513f] = 0;
  param_1[0x513e] = 0;
  plVar42 = param_1 + 0x5140;
  param_1[0x513b] = 0;
  param_1[0x513a] = 0;
  thunk_FUN_100650e64();
  plVar43 = param_1 + 0x5166;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar66);
  *plVar66 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar44 = param_1 + 0x519d;
  thunk_FUN_1001862ec(plVar44,param_1 + 0x589);
  param_1[0x59bb] = 0;
  param_1[0x59ba] = 0;
  param_1[0x59bd] = 0;
  param_1[0x59bc] = 0;
  thunk_FUN_100016500(param_1 + 0x59be,"PARTY.PENDING_CHATS",1);
  param_1[0x59cb] = 0;
  param_1[0x59ca] = 0;
  param_1[0x59c9] = 0;
  param_1[0x59d3] = -0x100000000;
  *(undefined4 *)((long)param_1 + 0x2cea4) = 0;
  *(undefined4 *)((long)param_1 + 0x2cea7) = 0;
  *(undefined1 *)((long)param_1 + 0x2ceab) = 1;
  *(undefined4 *)((long)param_1 + 0x2ceac) = 0;
  param_1[0x59d6] = 0x10100010101;
  *(undefined1 *)(param_1 + 22999) = 0;
  FUN_10001549c(param_1 + 23000,"*GameMode_HF_Private*");
  param_1[0x59e5] = 0;
  param_1[0x59e4] = 0;
  param_1[0x59db] = 0;
  param_1[0x59e7] = 0;
  param_1[0x59e6] = 0;
  param_1[0x59e9] = 0;
  param_1[0x59e8] = 0;
  param_1[0x59eb] = 0;
  param_1[0x59ea] = 0;
  param_1[0x59ec] = 0;
  param_1[0x59cd] = -1;
  param_1[0x59cc] = -1;
  param_1[0x59cf] = -1;
  param_1[0x59ce] = -1;
  param_1[0x59d1] = -1;
  param_1[0x59d0] = -1;
  param_1[0x59d2] = -1;
  param_1[0x59dd] = -1;
  param_1[0x59dc] = -1;
  param_1[0x59df] = -1;
  param_1[0x59de] = -1;
  param_1[0x59e1] = -1;
  param_1[0x59e0] = -1;
  param_1[0x59e3] = -1;
  param_1[0x59e2] = -1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_100642bd8(plVar13,param_1 + 0xf91,1);
  FUN_100642bd8(plVar13,plVar60,1);
  FUN_100642bd8(plVar60,plStack_170,1);
  FUN_100642bd8(plVar60,plVar5,1);
  FUN_100642bd8(plVar5,plVar28,1);
  FUN_100642bd8(plVar28,plVar29,1);
  FUN_1005308f8(plVar29,plVar4,1);
  FUN_1005308f8(plVar29,plVar3,1);
  FUN_1005308f8(plVar29,param_1 + 0x4d1d,1);
  FUN_1005308f8(plVar29,plVar34,1);
  FUN_1005308f8(plVar29,plVar35,1);
  FUN_1005308f8(plVar29,plVar36,1);
  FUN_1005308f8(plVar29,param_1 + 0x4f1d,1);
  FUN_1005308f8(plVar29,plVar37,1);
  FUN_1005308f8(plVar29,plVar38,1);
  FUN_1005308f8(plVar29,plVar39,1);
  FUN_1005308f8(plVar29,plVar40,1);
  FUN_1005308f8(plVar29,param_1 + 0x507c,1);
  FUN_1005308f8(plVar29,plVar41,1);
  FUN_1005308f8(plVar29,plVar30,1);
  FUN_1005308f8(plVar29,plVar31,1);
  FUN_1005308f8(plVar29,plVar32,1);
  FUN_1005308f8(plVar29,param_1 + 0x4dbe,1);
  FUN_1005308f8(plVar29,plVar33,1);
  FUN_100642bd8(plVar28,plVar42,1);
  FUN_100642bd8(plVar28,plVar43,1);
  FUN_100642bd8(plVar60,plVar66,1);
  FUN_100642bd8(plVar66,plVar44,1);
  FUN_100642bd8(plVar60,plVar26,1);
  FUN_100642bd8(plVar60,plVar27,1);
  FUN_100642bd8(plVar60,plVar18,1);
  FUN_100642bd8(plVar13,plVar15,1);
  FUN_100642bd8(plVar15,param_1 + 0x1094,1);
  FUN_100642bd8(plVar15,param_1 + 0x10ba,1);
  FUN_100642bd8(plVar15,plVar17,1);
  FUN_100642bd8(plVar15,plVar21,1);
  FUN_100642bd8(plVar15,plVar22,1);
  FUN_100642bd8(plVar15,plStack_158,1);
  FUN_100642bd8(plStack_158,plVar16,1);
  FUN_1005308f8(plVar16,plVar24,1);
  plVar66 = param_1 + 0x13bd;
  lVar56 = 0x10;
  do {
    FUN_100642bd8(plVar24,plVar66,1);
    plVar66 = plVar66 + 0x26;
    lVar56 = lVar56 + -1;
  } while (lVar56 != 0);
  FUN_100642bd8(plVar24,plVar65,1);
  FUN_100642bd8(plVar15,param_1 + 0x2668,1);
  FUN_100642bd8(plVar15,plVar6,1);
  FUN_100642bd8(plVar6,plVar19,1);
  FUN_100642bd8(plVar6,plVar20,1);
  FUN_100642bd8(plVar15,plVar58,1);
  FUN_100642bd8(plVar15,plStack_160,1);
  FUN_100642bd8(plVar15,plStack_148,1);
  FUN_100642bd8(plVar15,plVar25,1);
  FUN_100642bd8(plVar15,plVar12,1);
  FUN_100642bd8(plVar15,param_1 + 0xf1e,1);
  FUN_100642bd8(plVar13,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plStack_168,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,param_1 + 0xee1,1);
  FUN_100642bd8(param_1 + 0xee1,plVar11,1);
  uVar61 = FUN_100126b8c();
  if ((uVar61 & 1) != 0) {
    FUN_100642bd8(plVar15,param_1[0x58e],1);
  }
  iVar54 = FUN_100126b8c();
  if (iVar54 != 0) {
    FUN_100219060(pcVar7,0);
  }
  uVar53 = FUN_100126c88();
  *(undefined1 *)((long)param_1 + 0x2ceb5) = uVar53;
  FUN_100641464(&fStack_114,auStack_118);
  fStack_114 = fStack_114 + -258.0;
  *(uint *)((long)param_1 + 0x2d24) = *(uint *)((long)param_1 + 0x2d24) | 4;
  *(uint *)((long)param_1 + 0x7dc4) = *(uint *)((long)param_1 + 0x7dc4) & 0xfffffffb;
  FUN_100131560();
  *(uint *)((long)param_1 + 0x25584) = *(uint *)((long)param_1 + 0x25584) & 0xfffffffb;
  bVar52 = *(char *)((long)param_1 + 0x2ceb5) == '\0';
  fVar67 = *(float *)(&DAT_101158538 + (ulong)bVar52 * 4);
  *(float *)(param_1 + 0x59e8) = fVar67 * fStack_114;
  fVar68 = 150.0;
  if (!bVar52) {
    fVar68 = 130.0;
  }
  fVar68 = fVar67 * fStack_114 - fVar68;
  *(float *)(param_1 + 0x59e7) = fVar68;
  *(float *)((long)param_1 + 0x2cf3c) = fVar68;
  *(float *)(param_1 + 0x59e9) = fVar68 * 0.5 + -15.0;
  *(uint *)((long)param_1 + 0x394) = *(uint *)((long)param_1 + 0x394) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7b2c) = *(uint *)((long)param_1 + 0x7b2c) | 0x10;
  FUN_100652cac(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,0xff362626);
  FUN_100652dd4(plVar14,&pcStack_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x7b2c);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x7b2c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(plVar14);
  }
  uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_CTA_BUTTON_TITLE",0);
  FUN_1001816d4(0,*(undefined4 *)((long)param_1 + 0x2cf3c),*(undefined4 *)((long)param_1 + 0x2cf3c),
                plVar9,0,uVar62,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x692,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0x3ecccccd,plVar9,&DAT_10115a164);
  uVar46 = DAT_101d91884;
  uStack_a8 = DAT_101d91884;
  pcStack_d0 = thunk_FUN_100252a20;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x5b0,&pcStack_d0);
  FUN_1001b495c(0x40000000,plVar9);
  FUN_100181c68(0x42f00000,plVar9);
  iVar54 = FUN_100131560();
  if (iVar54 != 0) {
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_BUTTON_TITLE",0);
    FUN_1001816d4(0,*(undefined4 *)((long)param_1 + 0x2cf3c),
                  *(undefined4 *)((long)param_1 + 0x2cf3c),plVar10,0,uVar62,&DAT_10115a168,
                  &DAT_101dc1cb8,0);
    FUN_100651594(param_1 + 0x949,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
    FUN_100181be0(0x3ecccccd,plVar10,&DAT_10115a164);
    uStack_a8 = uVar46;
    pcStack_d0 = thunk_FUN_100252b24;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plStack_b0 = (long *)0x0;
    plStack_c8 = param_1;
    FUN_10001554c(param_1 + 0x867,&pcStack_d0);
    FUN_1001b495c(0x40000000,plVar10);
    FUN_100181c68(0x42f00000,plVar10);
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_EXPLANATION",0);
  FUN_1006513c0(plStack_168,uVar62);
  FUN_100651038(plStack_168,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  FUN_100651700(plStack_168,3);
  FUN_100652cac(plStack_170,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plStack_170,&DAT_10115a164,2);
  uVar55 = *(uint *)((long)param_1 + 0x7c1c);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x7c1c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(plStack_170);
  }
  uVar61 = FUN_100131560();
  if ((uVar61 & 1) == 0) {
    uVar62 = FUN_1004e0150("MENU_PARTY_CASUAL_MATCH_LABEL",0);
    FUN_1006513c0(param_1 + 0x1094,uVar62);
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION",0);
  FUN_1006513c0(param_1 + 0x10ba,uVar62);
  *(uint *)((long)param_1 + 0x8654) = *(uint *)((long)param_1 + 0x8654) & 0xfffffffb;
  FUN_100652cac(plVar58,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar55 = *(uint *)((long)param_1 + 0x103cc);
  if ((uVar55 & 0x7f80) == 0) {
    uVar55 = uVar55 & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x103cc) = uVar55 & 0xffff807b;
    FUN_1000200a0(plVar58);
    uVar55 = *(uint *)((long)param_1 + 0x103cc);
  }
  *(uint *)((long)param_1 + 0x103cc) = uVar55 | 0x10;
  uVar47 = DAT_101dbd458;
  uStack_a8 = DAT_101dbd458;
  pcStack_d0 = FUN_10024b388;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x206a,&pcStack_d0);
  uVar49 = DAT_101dbd484;
  uStack_a8 = DAT_101dbd484;
  pcStack_d0 = FUN_10024b388;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x206a,&pcStack_d0);
  uVar62 = FUN_100345b94();
  lVar56 = FUN_10034c450(uVar62,"*GameModePartyDropDown*");
  param_1[0x59e4] = lVar56;
  uVar61 = FUN_100131560();
  if ((uVar61 & 1) == 0) {
    uVar62 = FUN_1004e0150("MENU_PARTY_DROPDOWN_HEADER_PUBLIC",0);
    FUN_10018f14c(plStack_148,0,uVar62);
  }
  uVar55 = FUN_100131560();
  uVar62 = FUN_1004e0150("MENU_PARTY_DROPDOWN_HEADER_PRIVATE",0);
  FUN_10018f14c(plStack_148,uVar55 ^ 1,uVar62);
  iVar54 = FUN_100131560();
  uVar64 = 1;
  if (iVar54 == 0) {
    uVar64 = 2;
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_DROPDOWN_HEADER_PRACTICE",0);
  FUN_10018f14c(plStack_148,uVar64,uVar62);
  uStack_a8 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_d0 = thunk_FUN_10024e69c;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x161e,&pcStack_d0);
  uStack_a8 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  pcStack_d0 = FUN_10024b3c4;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_c8 = param_1;
  plStack_b0 = plStack_148;
  FUN_10001554c(param_1 + 0x161e,&pcStack_d0);
  *(uint *)((long)param_1 + 0xb16c) = *(uint *)((long)param_1 + 0xb16c) & 0xfffffffb;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,plStack_148);
  FUN_10018efac(plStack_148,0);
  FUN_10018efa4(plStack_148,0);
  *(uint *)((long)param_1 + 0xcc6c) = *(uint *)((long)param_1 + 0xcc6c) & 0xfffffffb;
  if ((*(char *)((long)param_1 + 0x2ceb5) == '\0') && (*(char *)((long)param_1 + 0x2ceb4) != '\0'))
  {
    FUN_10018f004(plStack_148,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  }
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION",0);
  FUN_10010b098(&uStack_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_EASY_OPTION",0);
  FUN_10010b098(&uStack_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_MEDIUM_OPTION",0);
  FUN_10010b098(&uStack_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_HARD_OPTION",0);
  FUN_10010b098(&uStack_128,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_BOT_DIFFICULTY_VERY_HARD_OPTION",0);
  FUN_10010b098(&uStack_128,uVar62);
  FUN_10001549c(&pcStack_d0,"very_easy");
  FUN_10001617c(&uStack_138,&pcStack_d0);
  FUN_10001549c(&pcStack_d0,"easy");
  FUN_10001617c(&uStack_138,&pcStack_d0);
  FUN_10001549c(&pcStack_d0,"medium");
  FUN_10001617c(&uStack_138,&pcStack_d0);
  FUN_10001549c(&pcStack_d0,"hard");
  FUN_10001617c(&uStack_138,&pcStack_d0);
  FUN_10001549c(&pcStack_d0,"very_hard");
  FUN_10001617c(&uStack_138,&pcStack_d0);
  FUN_10018d7d4((int)param_1[0x59e7],(int)param_1[0x59e7],0,0x3f800000,0x3f8ccccd,plStack_160,
                &uStack_128,&uStack_138,1,1,0);
  uStack_a8 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_d0 = thunk_FUN_10024e69c;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x1b44,&pcStack_d0);
  uStack_a8 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  pcStack_d0 = FUN_10024b3c4;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_c8 = param_1;
  plStack_b0 = plStack_160;
  FUN_10001554c(param_1 + 0x1b44,&pcStack_d0);
  *(uint *)((long)param_1 + 0xda9c) = *(uint *)((long)param_1 + 0xda9c) & 0xfffffffb;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,plStack_160);
  FUN_10018efac(plStack_160,0);
  FUN_10018efa4(plStack_160,0);
  *(uint *)((long)param_1 + 0xf59c) = *(uint *)((long)param_1 + 0xf59c) & 0xfffffffb;
  FUN_100654488(plStack_158,1);
  lVar56 = 0;
  plVar58 = param_1 + 0x13bd;
  do {
    FUN_1004d2698(&pcStack_d0,"MENU_PARTY_HEADER_TEAM_%s");
    FUN_1004d2698(&uStack_110,"Team %s");
    FUN_100651038(plVar58,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8);
    uVar62 = FUN_1004e0150(&pcStack_d0,0);
    (**(code **)(*plVar58 + 0x138))(plVar58,uVar62);
    uVar55 = *(uint *)((long)plVar58 + 0x84);
    if ((uVar55 & 0x7f80) != 0x2600) {
      *(uint *)((long)plVar58 + 0x84) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
      FUN_1000200a0(plVar58);
      uVar55 = *(uint *)((long)plVar58 + 0x84);
    }
    *(uint *)((long)plVar58 + 0x84) = uVar55 & 0xfffffffb;
    lVar56 = lVar56 + 1;
    plVar58 = plVar58 + 0x26;
  } while (lVar56 != 0x10);
  FUN_100651038(plVar65,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8);
  uVar62 = FUN_1004e0150("MENU_PARTY_HEADER_TEAM_SPECTATOR",0);
  FUN_1006513c0(plVar65,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x9d3c);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x9d3c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(plVar65);
    uVar55 = *(uint *)((long)param_1 + 0x9d3c);
  }
  uVar61 = 0;
  *(uint *)((long)param_1 + 0x9d3c) = uVar55 & 0xfffffffb;
  uVar51 = DAT_101dbd48c;
  uVar50 = DAT_101dbd488;
  uVar48 = DAT_101dbd460;
  uVar64 = DAT_101dbd45c;
  plVar58 = param_1 + 0x26c3;
  plStack_150 = plVar65;
  do {
    FUN_1001a0d78(plVar58);
    FUN_100642bd8(plVar24,plVar58,1);
    uStack_a8 = uVar46;
    plStack_148 = (long *)((ulong)plStack_148 & 0xffffffff00000000 | uVar61);
    pcStack_d0 = FUN_10024b3d4;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plVar66 = plVar58 + 0x38;
    plStack_c8 = param_1;
    plStack_b0 = plStack_148;
    FUN_10001554c(plVar66,&pcStack_d0);
    uStack_a8 = uVar50;
    plStack_150 = (long *)((ulong)plStack_150 & 0xffffffff00000000 | uVar61);
    pcStack_d0 = FUN_10024b3d4;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plStack_c8 = param_1;
    plStack_b0 = plStack_150;
    FUN_10001554c(plVar66,&pcStack_d0);
    uStack_a8 = uVar64;
    plStack_158 = (long *)((ulong)plStack_158 & 0xffffffff00000000 | uVar61);
    pcStack_d0 = FUN_10024b3d4;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plStack_c8 = param_1;
    plStack_b0 = plStack_158;
    FUN_10001554c(plVar66,&pcStack_d0);
    uStack_a8 = uVar50;
    plStack_160 = (long *)((ulong)plStack_160 & 0xffffffff00000000 | uVar61);
    pcStack_d0 = FUN_10024b3dc;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plVar66 = plVar58 + 1;
    plStack_c8 = param_1;
    plStack_b0 = plStack_160;
    FUN_10001554c(plVar66,&pcStack_d0);
    uStack_a8 = uVar64;
    plStack_168 = (long *)((ulong)plStack_168 & 0xffffffff00000000 | uVar61);
    pcStack_d0 = FUN_10024b3dc;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plStack_c8 = param_1;
    plStack_b0 = plStack_168;
    FUN_10001554c(plVar66,&pcStack_d0);
    uStack_a8 = uVar51;
    plVar65 = (long *)((ulong)plVar65 & 0xffffffff00000000 | uVar61);
    pcStack_d0 = FUN_10024b3e4;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plStack_c8 = param_1;
    plStack_b0 = plVar65;
    FUN_10001554c(plVar66,&pcStack_d0);
    uStack_a8 = uVar48;
    plStack_170 = (long *)((ulong)plStack_170 & 0xffffffff00000000 | uVar61);
    pcStack_d0 = FUN_10024b3e4;
    pcStack_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    plStack_c8 = param_1;
    plStack_b0 = plStack_170;
    FUN_10001554c(plVar66,&pcStack_d0);
    uVar61 = uVar61 + 1;
    plVar58 = plVar58 + 0x264;
  } while (uVar61 != 0xe);
  lVar56 = 0xa0;
  if (*(char *)((long)param_1 + 0x2ceb4) != '\0') {
    lVar56 = 0xb0;
  }
  FUN_1001a0704(*(undefined4 *)((long)(param_1 + 0x59d3) + lVar56),0x42a00000,0,0,plVar25,0);
  FUN_1001a0d78(plVar25);
  FUN_1001a0dfc(plVar25,0);
  FUN_1001a0e1c(plVar25,1);
  FUN_1001a0e3c(plVar25,0xffffffff);
  FUN_1001a0e64(0x3f000000,plVar25,0xff000000);
  *(uint *)((long)param_1 + 0x2425c) = *(uint *)((long)param_1 + 0x2425c) & 0xfffffffb;
  FUN_1001a0edc(plVar25,1);
  *(uint *)((long)param_1 + 0x24a04) = *(uint *)((long)param_1 + 0x24a04) & 0xffffffef;
  uStack_a8 = uVar50;
  pcStack_d0 = FUN_10024b3dc;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0xffffffff;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_d0);
  uStack_a8 = uVar64;
  pcStack_d0 = FUN_10024b3dc;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0xffffffff;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_d0);
  uVar62 = FUN_1004e0150("MENU_PARTY_LEAVE_BUTTON",0);
  FUN_1001816d4(0x42800000,0x43080000,0x443e0000,plVar17,0,uVar62,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181be0(0x3ecccccd,plVar17,&DAT_10115a164);
  FUN_100651594(param_1 + 0x11c3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  uStack_a8 = uVar46;
  pcStack_d0 = thunk_FUN_100251990;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x10e1,&pcStack_d0);
  *(uint *)((long)param_1 + 0x8784) = *(uint *)((long)param_1 + 0x8784) | 0x10;
  if ((*(char *)((long)param_1 + 0x2ceb5) != '\0') &&
     ((*(float *)(param_1 + 0x10e9) != 1.2 || (*(float *)((long)param_1 + 0x874c) != 1.2)))) {
    param_1[0x10e9] = 0x3f99999a3f99999a;
    FUN_1000200a0(plVar17);
  }
  uVar62 = FUN_1004e0150("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_1001816d4(0,*(undefined4 *)((long)param_1 + 0x2cf3c),*(undefined4 *)((long)param_1 + 0x2cf3c),
                plVar21,0,uVar62,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x21dd,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0x3ecccccd,plVar21,&DAT_10115a164);
  uStack_a8 = uVar46;
  pcStack_d0 = thunk_FUN_100252bb8;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x20fb,&pcStack_d0);
  FUN_1001b495c(0x40000000,plVar21);
  FUN_100181c68(0x42f00000,plVar21);
  uVar62 = FUN_1004e0150("MENU_PARTY_CASUAL_MATCH_BUTTON",0);
  FUN_100181af8(plVar21,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_CANCEL_QUEUE",0);
  FUN_1001816d4(0x41c00000,*(undefined4 *)((long)param_1 + 0x2cf3c),
                *(undefined4 *)((long)param_1 + 0x2cf3c),plVar22,0,uVar62,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x2494,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100181be0(0x3ecccccd,plVar22,&DAT_10115a164);
  uStack_a8 = uVar46;
  pcStack_d0 = FUN_10024b400;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x23b2,&pcStack_d0);
  *(uint *)((long)param_1 + 0x11e0c) = *(uint *)((long)param_1 + 0x11e0c) & 0xfffffffb;
  FUN_1001b495c(0x40000000,plVar22);
  FUN_100651038(param_1 + 0x2668,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_100652cac(plVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar23,&DAT_10115a164,2);
  uVar55 = *(uint *)((long)param_1 + 0x134f4);
  if ((uVar55 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x134f4) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x2600;
    FUN_1000200a0(plVar23);
  }
  *(uint *)((long)param_1 + 0x105ac) = *(uint *)((long)param_1 + 0x105ac) & 0xfffffffb;
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar55 = *(uint *)((long)param_1 + 0x10634);
  if ((uVar55 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x10634) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar19);
  }
  FUN_100651594(plVar20,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_PARTY_DRAG_AND_DROP_INSTRUCTIONS",0);
  FUN_1006513c0(plVar20,uVar62);
  FUN_100651700(plVar20,0);
  FUN_100654488(plVar28,1);
  FUN_100530be0(plVar29,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar29,0,1);
  if ((*(float *)(param_1 + 0x4c7e) != 48.0) || (*(float *)((long)param_1 + 0x263f4) != 0.0)) {
    param_1[0x4c7e] = 0x42400000;
    FUN_1000200a0(plVar29);
  }
  FUN_100651594(plVar34,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1006513c0(plVar34,uVar62);
  FUN_100651594(plVar35,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar35,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x2761c);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2761c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar35);
  }
  FUN_100651594(plVar36,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar36,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x2774c);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2774c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar36);
  }
  FUN_100652cac(plVar37,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar37,&pcStack_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x2787c);
  if ((uVar55 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x2787c) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x1300;
    FUN_1000200a0(plVar37);
    uVar55 = *(uint *)((long)param_1 + 0x2787c);
  }
  *(uint *)((long)param_1 + 0x2787c) = uVar55 & 0xfffffffb;
  uStack_a8 = uVar46;
  pcStack_d0 = FUN_10024b438;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x4f1e,&pcStack_d0);
  pcVar1 = "arrow_down";
  pcVar2 = "arrow_right";
  pcVar45 = pcVar2;
  if ((char)param_1[0x59d6] != '\0') {
    pcVar45 = pcVar1;
  }
  FUN_100652cdc(param_1 + 0x4fb7,pcVar45);
  FUN_100651594(plVar38,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1006513c0(plVar38,uVar62);
  FUN_100651594(plVar39,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar39,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x28114);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x28114) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar39);
  }
  FUN_100651594(plVar40,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar40,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x28244);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x28244) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar40);
  }
  FUN_100652cac(plVar41,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar41,&pcStack_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x28374);
  if ((uVar55 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x28374) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x1300;
    FUN_1000200a0(plVar41);
    uVar55 = *(uint *)((long)param_1 + 0x28374);
  }
  *(uint *)((long)param_1 + 0x28374) = uVar55 & 0xfffffffb;
  uStack_a8 = uVar46;
  pcStack_d0 = FUN_10024b438;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x1;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x507d,&pcStack_d0);
  pcVar45 = pcVar2;
  if (*(char *)((long)param_1 + 0x2ceb1) != '\0') {
    pcVar45 = pcVar1;
  }
  FUN_100652cdc(param_1 + 0x5116,pcVar45);
  FUN_100651594(plVar30,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1006513c0(plVar30,uVar62);
  FUN_100651594(plVar31,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar31,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x26b24);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x26b24) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar31);
  }
  FUN_100651594(plVar32,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  uVar62 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar32,uVar62);
  uVar55 = *(uint *)((long)param_1 + 0x26c54);
  if ((uVar55 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x26c54) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar32);
  }
  FUN_100652cac(plVar33,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,0xffe0e0e0);
  FUN_100652dd4(plVar33,&pcStack_d0,2);
  uVar55 = *(uint *)((long)param_1 + 0x26d84);
  if ((uVar55 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x26d84) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x1300;
    FUN_1000200a0(plVar33);
    uVar55 = *(uint *)((long)param_1 + 0x26d84);
  }
  *(uint *)((long)param_1 + 0x26d84) = uVar55 & 0xfffffffb;
  uStack_a8 = uVar46;
  pcStack_d0 = FUN_10024b438;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x2;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x4dbf,&pcStack_d0);
  if (*(char *)((long)param_1 + 0x2ceb2) != '\0') {
    pcVar2 = pcVar1;
  }
  FUN_100652cdc(param_1 + 0x4e58,pcVar2);
  *(uint *)((long)param_1 + 0x28a84) = *(uint *)((long)param_1 + 0x28a84) & 0xfffffffb;
  FUN_100651594(plVar42,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar62 = FUN_1004e0150("MENU_PARTY_INVITES_FULL",0);
  FUN_1006513c0(plVar42,uVar62);
  if ((*(float *)(param_1 + 0x5148) != 48.0) || (*(float *)((long)param_1 + 0x28a44) != 0.0)) {
    param_1[0x5148] = 0x42400000;
    FUN_1000200a0(plVar42);
  }
  *(uint *)((long)param_1 + 0x28bb4) = *(uint *)((long)param_1 + 0x28bb4) & 0xfffffffb;
  uVar62 = FUN_1004e0150("MENU_PARTY_SAD_AND_EMPTY",0);
  FUN_1006513c0(plVar43,uVar62);
  if ((*(float *)(param_1 + 0x516e) != 48.0) || (*(float *)((long)param_1 + 0x28b74) != 0.0)) {
    param_1[0x516e] = 0x42400000;
    FUN_1000200a0(plVar43);
  }
  *(uint *)((long)param_1 + 0x28ce4) = *(uint *)((long)param_1 + 0x28ce4) & 0xfffffffb;
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_100187a90(plVar44,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_100187a9c(plVar44,uVar62);
  uVar62 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_100187120(plVar44,uVar62,0);
  FUN_10001549c(&pcStack_d0,"PC_");
  std::string::operator=((string *)(param_1 + 0x59af),(string *)&pcStack_d0);
  FUN_1001870b0(plVar44,1);
  _memset_pattern16(param_1 + 0x59c2,&DAT_101158590,0x38);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar55 = *(uint *)((long)param_1 + 0x104bc);
  if ((uVar55 & 0x7f80) == 0) {
    uVar55 = uVar55 & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x104bc) = uVar55 & 0xffff807b;
    FUN_1000200a0(plVar18);
    uVar55 = *(uint *)((long)param_1 + 0x104bc);
  }
  *(uint *)((long)param_1 + 0x104bc) = uVar55 | 0x10;
  uStack_a8 = uVar47;
  pcStack_d0 = FUN_10024b388;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x2088,&pcStack_d0);
  uStack_a8 = uVar49;
  pcStack_d0 = FUN_10024b388;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x2088,&pcStack_d0);
  uStack_110 = 0;
  uStack_108 = 0;
  uVar62 = FUN_1004e0150("MENU_PARTY_INVITE_HEADER",0);
  FUN_10010b098(&uStack_110,uVar62);
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_HEADER",0);
  FUN_10010b098(&uStack_110,uVar62);
  fVar68 = (float)NEON_ucvtf((undefined4)uStack_110);
  if (fVar68 <= 1.0) {
    fVar68 = 1.0;
  }
  fVar68 = *(float *)((long)param_1 + 0x2cf44) / fVar68;
  FUN_1001c88a4(fVar68,fVar68,0,0x3f800000,
                *(undefined4 *)
                 (&DAT_101158540 + (ulong)(*(char *)((long)param_1 + 0x2ceb5) == '\0') * 4),plVar26,
                &uStack_110);
  FUN_1001c9460(0x3f4ccccd,plVar26);
  uStack_a8 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_d0 = FUN_10024b440;
  pcStack_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  plStack_b0 = (long *)0x0;
  plStack_c8 = param_1;
  FUN_10001554c(param_1 + 0x4ab2,&pcStack_d0);
  *(uint *)((long)param_1 + 0x260dc) = *(uint *)((long)param_1 + 0x260dc) & 0xffffffef;
  uVar62 = FUN_1004e0150("MENU_PARTY_CHAT_HEADER",0);
  FUN_1006513c0(plVar27,uVar62);
  FUN_100651460(plVar27,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x260dc) = *(uint *)((long)param_1 + 0x260dc) & 0xfffffffb;
  FUN_100650608(plVar8,&DAT_10115a164);
  uVar55 = *(uint *)((long)param_1 + 0x2d24);
  if ((uVar55 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2d24) = uVar55 & 0xffff8000 | uVar55 & 0x7f | 0x6600;
    FUN_1000200a0(plVar8);
  }
  iVar54 = FUN_100131560();
  if (iVar54 != 0) {
    FUN_1001b05dc(plVar11,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_DEFAULT",0);
    FUN_100185730(plVar11,uVar62);
    FUN_100185e1c(0xc1200000,plVar11);
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN__MESSAGE",0);
    uVar63 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_FIELD",0);
    FUN_1001afd98(plVar11,uVar62,uVar63,&DAT_101d91650,0,2,0,0,0,1);
    FUN_100651038(plVar12,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
    uVar62 = FUN_1004e0150("MENU_PLAY_MENU_MODE_PARTY_JOIN_FIELD",0);
    FUN_1006513c0(plVar12,uVar62);
    *(uint *)((long)param_1 + 0x7844) = *(uint *)((long)param_1 + 0x7844) & 0xfffffffb;
    FUN_100651038(param_1 + 0xf1e,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
    *(uint *)((long)param_1 + 0x7974) = *(uint *)((long)param_1 + 0x7974) & 0xfffffffb;
  }
  iVar54 = FUN_100126b8c();
  if (iVar54 != 0) {
    lVar56 = FUN_10031ffe0();
    plStack_c8 = (long *)0x0;
    pcStack_b8 = thunk_FUN_1002194d0;
    pcStack_d0 = pcVar7;
    pcStack_c0 = pcVar7;
    FUN_1000be5e4(lVar56 + 0x40,&pcStack_d0);
  }
  FUN_1001116f8(param_1 + 0x58b);
  FUN_10010b1a8(&uStack_110,1);
  FUN_10001629c(&uStack_138,1);
  FUN_10010b1a8(&uStack_128,1);
  if (*(long *)PTR____stack_chk_guard_101444218 != lStack_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00010024f0fc) */
/* WARNING: Removing unreachable block (ram,0x00010024f34c) */

undefined8
FUN_10024f08c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_c0;
  void *local_b8;
  char local_a9;
  void *local_a8;
  void *local_a0;
  char local_91;
  void *local_90;
  void *local_88;
  long local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  string local_68 [8];
  uint local_60;
  undefined4 uStack_5c;
  byte local_51;
  undefined1 auStack_50 [8];
  void *local_48;
  
  lVar1 = FUN_10015d3ec();
  if (*(char *)(lVar1 + 0x567a) != '\0') {
    FUN_1004e313c(auStack_50);
    FUN_10001549c(local_68,param_2);
    (**(code **)(*param_1 + 0x1c0))(param_1,local_68,auStack_50);
    uVar2 = FUN_1004e3654(auStack_50,&DAT_101d91650);
    if ((uVar2 & 1) == 0) {
      FUN_10015d3ec();
      uVar3 = FUN_100164f34();
      uVar3 = FUN_1004e3654(auStack_50,uVar3);
      FUN_1004e3120(local_68,param_4);
      FUN_100187144(param_1 + 0x519d,auStack_50,local_68,param_5,uVar3,0);
      if ((void *)CONCAT44(uStack_5c,local_60) != (void *)0x0) {
        operator_delete__((void *)CONCAT44(uStack_5c,local_60));
      }
      if ((((param_6 | (uint)uVar3) & 1) == 0) &&
         (((*(byte *)((long)param_1 + 0x2c2c) >> 1 & 1) == 0 ||
          ((((char)param_1[0x59d5] != '\0' && (*(char *)((long)param_1 + 0x2ceaa) == '\0')) ||
           ((*(byte *)((long)param_1 + 0x2c2c) & 1) != 0)))))) {
        FUN_10001549c(local_68,param_4);
        uVar3 = FUN_1004e0150("MENU_PARTY_MESSAGE_NOTIFICATION",0);
        thunk_FUN_1004e439c(auStack_78,uVar3);
        FUN_1004e3120(&local_90,"[PLAYER_NAME]");
        FUN_1004e3bc4(auStack_78,0,&local_90,auStack_50);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        local_90 = (void *)0x0;
        local_88 = (void *)0x0;
        local_80 = 0;
        if (-1 < (char)local_51) {
          local_60 = (uint)local_51;
        }
        if (local_60 < 0x21) {
          std::string::operator=((string *)&local_90,local_68);
        }
        else {
          std::string::string((string *)&local_c0,local_68,0,0x1d,(allocator *)local_68);
          std::string::string((string *)&local_a8,(string *)&local_c0);
          std::string::operator=((string *)&local_90,(string *)&local_a8);
          if (local_91 < '\0') {
            operator_delete(local_a8);
          }
          if (local_a9 < '\0') {
            operator_delete(local_c0);
          }
          std::string::append((char *)&local_90);
        }
        FUN_1004e3120(&local_a8,"[PARTY_MESSAGE_PREVIEW]");
        FUN_1004e3170(&local_c0,&local_90);
        FUN_1004e3bc4(auStack_78,0,&local_a8,&local_c0);
        if (local_b8 != (void *)0x0) {
          operator_delete__(local_b8);
        }
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
        }
        FUN_1001e564c(0x40800000,auStack_78,FUN_10024f37c,0,FUN_10024f384,0,param_1,1,0,1);
        FUN_100016598(param_1 + 0x59be,1);
        if (local_80 < 0) {
          operator_delete(local_90);
        }
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
        }
      }
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000100257c40) */



/*
 * FUN_10024b30c
 * VA: 0x10024b30c | Source: functions/10024.c:6599
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_100131560
 * Callers: FUN_10024dcf8
 */
void FUN_10024b30c(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 4;
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x2d24) = *(uint *)(param_1 + 0x2d24) & 0xfffffffb | uVar1;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x7dc4) = *(uint *)(param_1 + 0x7dc4) & 0xfffffffb | uVar3;
  iVar2 = FUN_100131560();
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x25584) = *(uint *)(param_1 + 0x25584) & 0xfffffffb | uVar1;
  return;
}



/*
 * FUN_10024bf9c
 * VA: 0x10024bf9c | Source: functions/10024.c:7474
 * CE-gate: YES (2x) | Guest-gate: NO
 * Indicators: Vis masks: 5
 * Callees: FUN_1000200a0, FUN_100126b8c, FUN_100131560, FUN_10016aeec, FUN_100181c18, FUN_100187094, FUN_10018e440, FUN_10018e8a8 (+23 more)
 * Callers: FUN_10024e480, FUN_10024e69c, FUN_10024eb7c, FUN_1002513b4, FUN_1002531fc, thunk_FUN_10024bf9c, thunk_FUN_10024e69c
 */
void FUN_10024bf9c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined **ppuVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  int iVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  code *pcVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  int local_f4;
  undefined1 *local_c8;
  void *local_c0;
  int local_b4;
  float local_b0;
  float local_ac [3];
  
  pcVar2 = (char *)((long)param_3 + 0x2ceab);
  plVar3 = param_3 + 0x161d;
  FUN_100641464(local_ac,&local_b0);
  local_ac[0] = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  *(uint *)((long)param_3 + 0x2d24) = *(uint *)((long)param_3 + 0x2d24) | 4;
  *(uint *)((long)param_3 + 0x7dc4) = *(uint *)((long)param_3 + 0x7dc4) & 0xfffffffb;
  local_b0 = param_2;
  FUN_100131560();
  *(float *)(param_3 + 0x59e8) = local_ac[0] * 0.58;
  fVar38 = local_ac[0] * 0.58 + -130.0;
  *(float *)(param_3 + 0x59e7) = fVar38;
  *(float *)((long)param_3 + 0x2cf3c) = fVar38;
  *(ulong *)((long)param_3 + 0x2cf44) =
       CONCAT44(local_ac[0] * 0.29 + -80.0,local_ac[0] * 0.42000002 + -128.0);
  *(uint *)((long)param_3 + 0x25584) = *(uint *)((long)param_3 + 0x25584) & 0xfffffffb;
  fVar38 = 70.0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    fVar38 = 60.0;
  }
  bVar22 = false;
  if ((*(float *)((long)param_3 + 0x7a64) == 0.0) &&
     (bVar22 = false, !NAN(*(float *)(param_3 + 0xf4c)))) {
    bVar22 = *(float *)(param_3 + 0xf4c) == 0.0;
  }
  if (!bVar22) {
    param_3[0xf4c] = 0;
    FUN_1000200a0(param_3 + 0xf44);
  }
  plVar4 = param_3 + 0xf55;
  FUN_10064e47c(local_ac[0],local_b0,plVar4);
  plVar5 = param_3 + 0xf91;
  fVar33 = (float)FUN_100652e60(plVar4);
  FUN_100652e60(plVar4);
  FUN_10064e47c(fVar33 * 0.5,plVar5);
  if ((*(float *)(param_3 + 0xfb0) != 65.0) || (*(float *)((long)param_3 + 0x7d84) != 0.0)) {
    param_3[0xfb0] = 0x42820000;
    FUN_1000200a0(param_3 + 0xfa8);
  }
  plVar4 = param_3 + 0x4c0b;
  fVar39 = *(float *)(param_3 + 0x59e7);
  FUN_10018e8d8(0,fVar39,fVar39,plVar3);
  FUN_10018e440(plVar3,1);
  fVar34 = (float)FUN_10018ee40(plVar3);
  fVar33 = DAT_101854a7c;
  if ((*(float *)(param_3 + 0x1625) != *(float *)(param_3 + 0x59e7) * 0.5) ||
     (*(float *)((long)param_3 + 0xb12c) != DAT_101854a7c)) {
    *(float *)(param_3 + 0x1625) = *(float *)(param_3 + 0x59e7) * 0.5;
    *(float *)((long)param_3 + 0xb12c) = fVar33;
    FUN_1000200a0(plVar3);
  }
  plVar6 = param_3 + 0x1b43;
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_c8);
  plVar1 = param_3 + 0x4ab1;
  fVar33 = (float)NEON_ucvtf((int)param_3[0x4ac2]);
  if (fVar33 <= 1.0) {
    fVar33 = 1.0;
  }
  fVar33 = *(float *)((long)param_3 + 0x2cf44) / fVar33;
  FUN_1001c93f0(0,fVar33,fVar33,plVar1);
  fVar33 = DAT_101854a7c + -50.0;
  if ((*(float *)(param_3 + 0x4ab9) != 48.0) || (*(float *)((long)param_3 + 0x255cc) != fVar33)) {
    *(undefined4 *)(param_3 + 0x4ab9) = 0x42400000;
    *(float *)((long)param_3 + 0x255cc) = fVar33;
    FUN_1000200a0(plVar1);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c8);
  fVar33 = DAT_101854a7c + -50.0;
  if ((*(float *)(param_3 + 0x4c13) != 68.0) || (*(float *)((long)param_3 + 0x2609c) != fVar33)) {
    *(undefined4 *)(param_3 + 0x4c13) = 0x42880000;
    *(float *)((long)param_3 + 0x2609c) = fVar33;
    FUN_1000200a0(plVar4);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_c8);
  if ((*(byte *)((long)param_3 + 0xda9c) >> 2 & 1) != 0) {
    FUN_10018e8d8(0,(int)param_3[0x59e7],(int)param_3[0x59e7],plVar6);
    FUN_10018e440(plVar6,1);
    fVar33 = fVar39 + 10.0 + DAT_101854a7c;
    if ((*(float *)(param_3 + 0x1b4b) != *(float *)(param_3 + 0x59e7) * 0.5) ||
       (*(float *)((long)param_3 + 0xda5c) != fVar33)) {
      *(float *)(param_3 + 0x1b4b) = *(float *)(param_3 + 0x59e7) * 0.5;
      *(float *)((long)param_3 + 0xda5c) = fVar33;
      FUN_1000200a0(plVar6);
    }
    local_c8 = &DAT_3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_c8);
    fVar35 = (float)FUN_10018ee40(plVar6);
    fVar34 = fVar35 + fVar34;
    fVar39 = fVar39 + 10.0 + fVar33;
    if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
      fVar39 = fVar39 + 100.0;
    }
  }
  plVar1 = param_3 + 0x1094;
  fVar33 = (*(float *)(param_3 + 0x59e7) - fVar34) * 0.5;
  fVar35 = fVar39 * 0.5 + 10.0 + DAT_101854a7c;
  if ((*(float *)(param_3 + 0x20ad) != fVar33) || (*(float *)((long)param_3 + 0x1056c) != fVar35)) {
    *(float *)(param_3 + 0x20ad) = fVar33;
    *(float *)((long)param_3 + 0x1056c) = fVar35;
    FUN_1000200a0(param_3 + 0x20a5);
  }
  plVar25 = param_3 + 0x10ba;
  plVar7 = param_3 + 0x20d4;
  FUN_100651708(fVar34 + -60.0,plVar7,1);
  fVar33 = *(float *)(param_3 + 0x20dc);
  if ((fVar33 != 30.0) || (fVar33 = *(float *)((long)param_3 + 0x106e4), fVar33 != 30.0)) {
    lVar36 = NEON_fmov(0x41f00000,4);
    param_3[0x20dc] = lVar36;
    FUN_1000200a0(plVar7);
  }
  fVar34 = (float)FUN_100651184(plVar7);
  FUN_100651184(plVar7);
  FUN_10064e47c(fVar34 + 60.0,fVar33 + 60.0,param_3 + 0x20b6);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  FUN_100651594(plVar1,*ppuVar17,&DAT_10115a168);
  FUN_10065179c((int)param_3[0x59e9],0,0x3f800000,plVar1);
  fVar33 = DAT_101854a7c;
  fVar34 = *(float *)(param_3 + 0x109c);
  if ((fVar34 != 0.0) || (fVar34 = *(float *)((long)param_3 + 0x84e4), fVar34 != DAT_101854a7c)) {
    *(undefined4 *)(param_3 + 0x109c) = 0;
    *(float *)((long)param_3 + 0x84e4) = fVar33;
    FUN_1000200a0(plVar1);
  }
  plVar7 = param_3 + 0x5166;
  plVar8 = param_3 + 0x5140;
  plVar9 = param_3 + 0x2668;
  plVar10 = param_3 + 0x23b1;
  plVar11 = param_3 + 0x20fa;
  plVar32 = param_3 + 0x13bd;
  plVar12 = param_3 + 0x1397;
  local_c8 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c8);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  FUN_100651594(plVar25,*ppuVar17,&DAT_10115a168);
  fVar33 = DAT_101854a7c;
  FUN_100651184(plVar1);
  fVar35 = fVar34;
  FUN_100651184(plVar25);
  fVar33 = fVar33 + 4.0 + (fVar35 + fVar34) * 0.5;
  uVar40 = (ulong)(uint)*(float *)(param_3 + 0x10c2);
  if ((*(float *)(param_3 + 0x10c2) != 0.0) ||
     (uVar40 = (ulong)(uint)*(float *)((long)param_3 + 0x8614),
     *(float *)((long)param_3 + 0x8614) != fVar33)) {
    *(undefined4 *)(param_3 + 0x10c2) = 0;
    *(float *)((long)param_3 + 0x8614) = fVar33;
    FUN_1000200a0(plVar25);
  }
  local_c8 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*plVar25 + 0x28))(plVar25,&local_c8);
  fVar33 = (float)uVar40;
  lVar36 = -0x1300;
  do {
    *(uint *)((long)param_3 + lVar36 + 0xb16c) =
         *(uint *)((long)param_3 + lVar36 + 0xb16c) & 0xfffffffb;
    lVar36 = lVar36 + 0x130;
  } while (lVar36 != 0);
  lVar36 = 0x1369c;
  lVar28 = 0xe;
  do {
    *(uint *)((long)param_3 + lVar36) = *(uint *)((long)param_3 + lVar36) & 0xfffffffb;
    lVar36 = lVar36 + 0x1320;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) & 0xfffffffb;
  if (*(char *)((long)param_3 + 0x2ceb4) == '\0') {
    if ((int)param_3[0x59db] == 0) goto LAB_10024cc28;
    uVar26 = 0;
    local_f4 = 0;
    iVar23 = 0;
    fVar34 = 80.0;
    do {
      fVar33 = (float)uVar40;
      iVar30 = *(int *)((long)param_3 + uVar26 * 4 + 0x2cee0);
      iVar21 = iVar23;
      for (iVar19 = iVar30; iVar20 = iVar21, iVar19 != 0; iVar19 = iVar19 + -1) {
        FUN_1001a0704((int)param_3[0x59e7],0x42a00000,0,0x40800000,
                      param_3 + (long)iVar20 * 0x264 + 0x26c3,*pcVar2);
        pfVar15 = (float *)((long)param_3 + (long)iVar20 * 0x1320 + 0x1365c);
        fVar33 = *pfVar15;
        bVar22 = false;
        if ((*(float *)(param_3 + (long)iVar20 * 0x264 + 0x26cb) == 0.0) &&
           (bVar22 = false, !NAN(fVar33) && !NAN(fVar34))) {
          bVar22 = fVar33 == fVar34;
        }
        if (!bVar22) {
          *(float *)(param_3 + (long)iVar20 * 0x264 + 0x26cb) = 0.0;
          *pfVar15 = fVar34;
          FUN_1000200a0(param_3 + (long)iVar20 * 0x264 + 0x26c3);
        }
        *(uint *)((long)param_3 + (long)iVar20 * 0x1320 + 0x1369c) =
             *(uint *)((long)param_3 + (long)iVar20 * 0x1320 + 0x1369c) | 4;
        fVar34 = fVar34 + 84.0;
        iVar21 = iVar20 + 1;
        local_f4 = iVar20;
      }
      plVar32 = param_3 + uVar26 * 0x26 + 0x13bd;
      fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
      FUN_100652e60(param_3 + 0x27cf);
      fVar33 = fVar35 + fVar33 * -0.5 + -6.0;
      fVar35 = *(float *)(param_3 + uVar26 * 0x26 + 0x13c5);
      uVar40 = (ulong)(uint)fVar35;
      pfVar15 = (float *)((long)param_3 + uVar26 * 0x130 + 0x9e2c);
      fVar42 = *pfVar15;
      bVar22 = false;
      if ((fVar35 == 0.0) && (bVar22 = false, !NAN(fVar42) && !NAN(fVar33))) {
        bVar22 = fVar42 == fVar33;
      }
      if (!bVar22) {
        *(float *)(param_3 + uVar26 * 0x26 + 0x13c5) = 0.0;
        *pfVar15 = fVar33;
        FUN_1000200a0(plVar32);
      }
      local_c8 = (undefined1 *)0x3f80000000000000;
      (**(code **)(*plVar32 + 0x28))(plVar32,&local_c8);
      fVar33 = (float)uVar40;
      *(uint *)((long)param_3 + uVar26 * 0x130 + 0x9e6c) =
           *(uint *)((long)param_3 + uVar26 * 0x130 + 0x9e6c) | 4;
      iVar23 = iVar30 + iVar23;
      fVar34 = fVar34 + 65.0;
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(uint *)(param_3 + 0x59db));
  }
  else {
    uVar26 = (ulong)*(uint *)(param_3 + 0x59db);
    if (*(uint *)(param_3 + 0x59db) == 0) {
LAB_10024cc28:
      local_f4 = 0;
      fVar34 = 80.0;
    }
    else {
      uVar31 = 0;
      local_f4 = 0;
      iVar23 = 0;
      plVar13 = param_3 + 0xfb9;
      plVar14 = param_3 + 0x27cf;
      fVar34 = 80.0;
      do {
        fVar33 = (float)uVar40;
        iVar30 = *(int *)((long)param_3 + uVar31 * 4 + 0x2cee0);
        iVar19 = iVar30;
        iVar21 = iVar23;
        if (((int)uVar26 < 2) || (*(char *)((long)param_3 + 0x2ceb4) == '\0')) {
          for (; iVar19 != 0; iVar19 = iVar19 + -1) {
            FUN_1002539a4(0x40800000,
                          *(float *)(param_3 + 0x26b4) +
                          (*(float *)(param_3 + 0x59e7) - *(float *)(param_3 + 0x59e9)) * 0.5,fVar34
                          ,param_3,iVar21);
            fVar34 = fVar34 + 84.0;
            local_f4 = iVar21;
            iVar21 = iVar21 + 1;
          }
          fVar33 = *(float *)(param_3 + 0x59e7) - *(float *)(param_3 + 0x59e9);
          fVar42 = *(float *)(param_3 + 0x26b4) + fVar33 * 0.5;
          fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
          FUN_100652e60(plVar14);
          fVar35 = fVar35 - fVar33 * 0.5;
LAB_10024c9b8:
          plVar24 = param_3 + uVar31 * 0x26 + 0x13bd;
          fVar35 = fVar35 + -6.0;
          fVar33 = *(float *)(param_3 + uVar31 * 0x26 + 0x13c5);
          uVar40 = (ulong)(uint)fVar33;
          pfVar15 = (float *)((long)param_3 + uVar31 * 0x130 + 0x9e2c);
          fVar41 = *pfVar15;
          bVar22 = false;
          if ((fVar33 == fVar42) && (bVar22 = false, !NAN(fVar41) && !NAN(fVar35))) {
            bVar22 = fVar41 == fVar35;
          }
          if (!bVar22) {
            *(float *)(param_3 + uVar31 * 0x26 + 0x13c5) = fVar42;
            *pfVar15 = fVar35;
            FUN_1000200a0(plVar24);
          }
          pcVar27 = *(code **)(*plVar24 + 0x28);
        }
        else {
          fVar35 = (float)FUN_10064e3cc(plVar13);
          FUN_10064e3cc(plVar13);
          FUN_10064e47c(fVar35 + fVar35,plVar13);
          if (uVar31 != 0) {
            fVar34 = 80.0;
            for (; iVar19 != 0; iVar19 = iVar19 + -1) {
              fVar33 = *(float *)(param_3 + 0x59e9) + 30.0;
              FUN_1002539a4(0x40800000,fVar33,fVar34,param_3,iVar21);
              fVar34 = fVar34 + 84.0;
              local_f4 = iVar21;
              iVar21 = iVar21 + 1;
            }
            fVar42 = *(float *)(param_3 + 0x59e9) + 30.0;
            fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
            FUN_100652e60(plVar14);
            fVar35 = fVar35 + fVar33 * -0.5;
            goto LAB_10024c9b8;
          }
          for (; iVar19 != 0; iVar19 = iVar19 + -1) {
            fVar33 = 0.0;
            FUN_1002539a4(0x40800000,0,fVar34,param_3,iVar21);
            fVar34 = fVar34 + 84.0;
            local_f4 = iVar21;
            iVar21 = iVar21 + 1;
          }
          fVar35 = *(float *)((long)param_3 + (long)iVar23 * 0x1320 + 0x1365c);
          FUN_100652e60(plVar14);
          fVar33 = fVar35 + fVar33 * -0.5 + -6.0;
          uVar40 = (ulong)(uint)*(float *)(param_3 + 0x13c5);
          if ((*(float *)(param_3 + 0x13c5) != 0.0) ||
             (uVar40 = (ulong)(uint)*(float *)((long)param_3 + 0x9e2c),
             *(float *)((long)param_3 + 0x9e2c) != fVar33)) {
            *(undefined4 *)(param_3 + 0x13c5) = 0;
            *(float *)((long)param_3 + 0x9e2c) = fVar33;
            FUN_1000200a0(plVar32);
          }
          pcVar27 = *(code **)(*plVar32 + 0x28);
          plVar24 = plVar32;
        }
        local_c8 = (undefined1 *)0x3f80000000000000;
        (*pcVar27)(plVar24,&local_c8);
        fVar33 = (float)uVar40;
        *(uint *)((long)param_3 + uVar31 * 0x130 + 0x9e6c) =
             *(uint *)((long)param_3 + uVar31 * 0x130 + 0x9e6c) | 4;
        iVar23 = iVar30 + iVar23;
        fVar34 = fVar34 + 65.0;
        uVar31 = uVar31 + 1;
        uVar26 = (ulong)*(uint *)(param_3 + 0x59db);
      } while (uVar31 < uVar26);
    }
  }
  if (*pcVar2 == '\0') {
    FUN_10018e8a8(plVar3);
    lVar36 = FUN_10034ccb8();
    if (*(char *)(lVar36 + 0x53) != '\0') {
      iVar23 = *(int *)((long)param_3 + 0x2cedc);
      uVar18 = 0xe - iVar23;
      if (*(char *)((long)param_3 + 0x2ceb4) == '\0') {
        if ((iVar23 < 0xe) && (uVar18 != 0)) {
          iVar30 = 0;
          plVar32 = param_3 + (long)local_f4 * 0x264 + 0x2927;
          do {
            FUN_1001a0704((int)param_3[0x59e7],0x42a00000,0,0x40800000,plVar32,*pcVar2);
            fVar33 = *(float *)((long)plVar32 + 0x44);
            bVar22 = false;
            if ((*(float *)(plVar32 + 8) == 0.0) && (bVar22 = false, !NAN(fVar33) && !NAN(fVar34)))
            {
              bVar22 = fVar33 == fVar34;
            }
            if (!bVar22) {
              *(undefined4 *)(plVar32 + 8) = 0;
              *(float *)((long)plVar32 + 0x44) = fVar34;
              FUN_1000200a0(plVar32);
            }
            *(uint *)((long)plVar32 + 0x84) = *(uint *)((long)plVar32 + 0x84) | 4;
            if (iVar30 == 0) {
              fVar35 = *(float *)((long)plVar32 + 0x44);
              FUN_100652e60(param_3 + 0x27cf);
              fVar35 = fVar35 + fVar33 * -0.5 + -6.0;
              fVar33 = *(float *)(param_3 + 0x139f);
              bVar22 = false;
              if ((fVar33 == 0.0) &&
                 (bVar22 = false, !NAN(*(float *)((long)param_3 + 0x9cfc)) && !NAN(fVar35))) {
                bVar22 = *(float *)((long)param_3 + 0x9cfc) == fVar35;
              }
              if (!bVar22) {
                *(undefined4 *)(param_3 + 0x139f) = 0;
                *(float *)((long)param_3 + 0x9cfc) = fVar35;
                FUN_1000200a0(plVar12);
              }
              local_c8 = (undefined1 *)0x3f80000000000000;
              (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
              *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) | 4;
            }
            fVar34 = fVar34 + 84.0;
            plVar32 = plVar32 + 0x264;
            iVar30 = iVar30 + -1;
          } while (iVar23 + -0xe != iVar30);
        }
      }
      else if (iVar23 < 0xe) {
        if ((int)param_3[0x59db] < 2) {
          if (uVar18 != 0) {
            uVar29 = 0;
            lVar36 = (long)local_f4 * 0x1320 + 0x1497c;
            do {
              fVar33 = *(float *)(param_3 + 0x26b4) +
                       (*(float *)(param_3 + 0x59e7) - *(float *)(param_3 + 0x59e9)) * 0.5;
              FUN_1002539a4(0x40800000,fVar33,fVar34,param_3,local_f4 + 1 + uVar29);
              if (uVar29 == 0) {
                fVar35 = *(float *)((long)param_3 + lVar36);
                FUN_100652e60(param_3 + 0x27cf);
                fVar35 = fVar35 + fVar33 * -0.5 + -6.0;
                fVar33 = *(float *)(param_3 + 0x139f);
                if ((fVar33 != 0.0) ||
                   (fVar33 = *(float *)((long)param_3 + 0x9cfc), fVar33 != fVar35)) {
                  *(undefined4 *)(param_3 + 0x139f) = 0;
                  *(float *)((long)param_3 + 0x9cfc) = fVar35;
                  FUN_1000200a0(plVar12);
                }
                local_c8 = (undefined1 *)0x3f80000000000000;
                (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
                *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) | 4;
              }
              fVar34 = fVar34 + 84.0;
              uVar29 = uVar29 + 1;
              lVar36 = lVar36 + 0x1320;
            } while (uVar18 != uVar29);
          }
        }
        else {
          fVar33 = 0.5;
          uVar29 = 0;
          if (0.0 < (float)(int)uVar18 * 0.5) {
            lVar36 = (long)local_f4 * 0x1320 + 0x1497c;
            fVar35 = fVar34;
            do {
              fVar33 = 0.0;
              FUN_1002539a4(0x40800000,0,fVar35,param_3,local_f4 + uVar29 + 1);
              if (uVar29 == 0) {
                fVar42 = *(float *)((long)param_3 + lVar36);
                FUN_100652e60(param_3 + 0x27cf);
                fVar42 = fVar42 + fVar33 * -0.5 + -6.0;
                fVar33 = *(float *)(param_3 + 0x139f);
                if ((fVar33 != 0.0) ||
                   (fVar33 = *(float *)((long)param_3 + 0x9cfc), fVar33 != fVar42)) {
                  *(undefined4 *)(param_3 + 0x139f) = 0;
                  *(float *)((long)param_3 + 0x9cfc) = fVar42;
                  FUN_1000200a0(plVar12);
                }
                local_c8 = (undefined1 *)0x3f80000000000000;
                (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
                *(uint *)((long)param_3 + 0x9d3c) = *(uint *)((long)param_3 + 0x9d3c) | 4;
              }
              fVar35 = fVar35 + 84.0;
              uVar29 = uVar29 + 1;
              lVar36 = lVar36 + 0x1320;
            } while ((float)uVar29 < (float)(int)uVar18 * 0.5);
            local_f4 = local_f4 + uVar29;
          }
          if (uVar29 < uVar18) {
            iVar23 = uVar29 + iVar23 + -0xe;
            do {
              local_f4 = local_f4 + 1;
              fVar33 = *(float *)(param_3 + 0x59e9) + 30.0;
              FUN_1002539a4(0x40800000,fVar33,fVar34,param_3,local_f4);
              fVar34 = fVar34 + 84.0;
              bVar22 = iVar23 != -1;
              iVar23 = iVar23 + 1;
            } while (bVar22);
          }
        }
      }
    }
  }
  plVar32 = param_3 + 0xfb9;
  fVar34 = *(float *)((long)param_3 + 0x7e0c);
  FUN_10064e3cc(plVar32);
  fVar33 = fVar34 + -12.0 + fVar33;
  bVar22 = false;
  if ((*(float *)(param_3 + 0x2670) == 0.0) &&
     (bVar22 = false, !NAN(*(float *)((long)param_3 + 0x13384)) && !NAN(fVar33))) {
    bVar22 = *(float *)((long)param_3 + 0x13384) == fVar33;
  }
  if (!bVar22) {
    *(undefined4 *)(param_3 + 0x2670) = 0;
    *(float *)((long)param_3 + 0x13384) = fVar33;
    FUN_1000200a0(plVar9);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_c8);
  fVar35 = *(float *)(param_3 + 0x59e7);
  fVar42 = *(float *)(param_3 + 0x26b4) + fVar35 * 0.5;
  local_b4 = 0;
  FUN_10016aeec(0,0,0,&local_b4);
  fVar34 = local_b0;
  plVar12 = param_3 + 0x10e0;
  FUN_10064e3cc(plVar12);
  fVar34 = ((fVar34 + -30.0) - (float)local_b4) + fVar35 * -0.5;
  fVar35 = *(float *)((long)param_3 + 0x8744);
  bVar22 = false;
  if ((*(float *)(param_3 + 0x10e8) == fVar42) && (bVar22 = false, !NAN(fVar35) && !NAN(fVar34))) {
    bVar22 = fVar35 == fVar34;
  }
  if (!bVar22) {
    *(float *)(param_3 + 0x10e8) = fVar42;
    *(float *)((long)param_3 + 0x8744) = fVar34;
    FUN_1000200a0(plVar12);
  }
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar12 + 0x28))(plVar12,&local_c8);
  iVar23 = FUN_100126b8c();
  if (iVar23 != 0) {
    lVar36 = param_3[0x58e];
    FUN_10064259c(plVar12);
    iVar23 = (int)fVar35;
    FUN_10064259c(plVar12);
    FUN_10064e4a0(lVar36,CONCAT44((int)fVar35,iVar23));
    lVar36 = param_3[0x58e];
    fVar41 = (float)FUN_10064259c(plVar12);
    (**(code **)(*(long *)param_3[0x58e] + 0x48))();
    fVar41 = (fVar42 - fVar41 * 0.5) + fVar35 * -1.8;
    (**(code **)(*(long *)param_3[0x58e] + 0x48))();
    fVar34 = fVar34 - fVar35 * 0.5;
    fVar35 = *(float *)(lVar36 + 0x40);
    bVar22 = false;
    if ((fVar35 == fVar41) && (bVar22 = false, !NAN(*(float *)(lVar36 + 0x44)) && !NAN(fVar34))) {
      bVar22 = *(float *)(lVar36 + 0x44) == fVar34;
    }
    if (!bVar22) {
      *(float *)(lVar36 + 0x40) = fVar41;
      *(float *)(lVar36 + 0x44) = fVar34;
      FUN_1000200a0(lVar36);
    }
  }
  FUN_1006425d0(param_3 + 0x26ac,1,0,0,1);
  FUN_10053093c(*(float *)(param_3 + 0x59e8) + -65.0,param_3 + 0xfed);
  fVar41 = *(float *)((long)param_3 + 0x8744);
  FUN_10064e3cc(plVar12);
  fVar34 = fVar35;
  FUN_10064e3cc(plVar11);
  fVar34 = fVar41 + (fVar34 + fVar35) * -0.5 + -20.0;
  FUN_100181c18(0,*(undefined4 *)((long)param_3 + 0x2cf3c),*(undefined4 *)((long)param_3 + 0x2cf3c),
                plVar11);
  if ((*(float *)(param_3 + 0x2102) != fVar42) || (*(float *)((long)param_3 + 0x10814) != fVar34)) {
    *(float *)(param_3 + 0x2102) = fVar42;
    *(float *)((long)param_3 + 0x10814) = fVar34;
    FUN_1000200a0(plVar11);
  }
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar11 + 0x28))(plVar11,&local_c8);
  FUN_100651708((int)param_3[0x59e7],plVar9,1);
  iVar23 = FUN_100131560();
  if ((iVar23 != 0) && ((char)param_3[0x59d5] != '\0')) {
    plVar9 = param_3 + 0xef8;
    *(uint *)((long)param_3 + 0x7844) = *(uint *)((long)param_3 + 0x7844) | 4;
    plVar13 = param_3 + 0xf1e;
    *(uint *)((long)param_3 + 0x7974) = *(uint *)((long)param_3 + 0x7974) | 4;
    FUN_100651708((int)param_3[0x59e7],plVar9,1);
    FUN_100651708((int)param_3[0x59e7],plVar13,1);
    fVar33 = fVar33 * 0.9;
    if ((*(float *)(param_3 + 0xf00) != 0.0) || (*(float *)((long)param_3 + 0x7804) != fVar33)) {
      *(undefined4 *)(param_3 + 0xf00) = 0;
      *(float *)((long)param_3 + 0x7804) = fVar33;
      FUN_1000200a0(plVar9);
    }
    local_c8 = (undefined1 *)0x0;
    (**(code **)(param_3[0xef8] + 0x28))(plVar9,&local_c8);
    fVar35 = (float)FUN_1006511d0(plVar9);
    if ((*(float *)(param_3 + 0xf26) != fVar35 * 1.1) ||
       (*(float *)((long)param_3 + 0x7934) != fVar33)) {
      *(float *)(param_3 + 0xf26) = fVar35 * 1.1;
      *(float *)((long)param_3 + 0x7934) = fVar33;
      FUN_1000200a0(plVar13);
    }
    local_c8 = (undefined1 *)0x0;
    (**(code **)(param_3[0xf1e] + 0x28))(plVar13,&local_c8);
    FUN_1004e3170(&local_c8,param_3 + 0x59ea);
    FUN_1006513c0(plVar13,&local_c8);
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
    }
  }
  fVar33 = *(float *)((long)param_3 + 0x2cf3c);
  FUN_100181c18(0,fVar33,fVar33,plVar10);
  FUN_10064e3cc(plVar10);
  fVar34 = fVar34 + fVar33 * -0.5;
  fVar33 = *(float *)(param_3 + 0x23b9);
  if ((fVar33 != fVar42) || (fVar33 = *(float *)((long)param_3 + 0x11dcc), fVar33 != fVar34)) {
    *(float *)(param_3 + 0x23b9) = fVar42;
    *(float *)((long)param_3 + 0x11dcc) = fVar34;
    FUN_1000200a0(plVar10);
  }
  local_c8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_c8);
  fVar34 = *(float *)((long)param_3 + 0xb12c);
  FUN_10018ee40(plVar3);
  if ((*(byte *)((long)param_3 + 0xda9c) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_3 + 0x8654) >> 2 & 1) != 0) {
      fVar34 = *(float *)((long)param_3 + 0x8614);
      FUN_100651184();
      goto LAB_10024d244;
    }
    fVar34 = fVar33 + fVar34;
  }
  else {
    fVar34 = *(float *)((long)param_3 + 0xda5c);
    FUN_10018ee40(plVar6);
LAB_10024d244:
    fVar34 = fVar33 + fVar34;
  }
  fVar35 = *(float *)((long)param_3 + 0x8744);
  FUN_10064e3cc(plVar12);
  fVar35 = fVar35 - fVar33;
  fVar42 = *(float *)((long)param_3 + 0x10814);
  FUN_10064e3cc(plVar11);
  fVar33 = (float)NEON_fminnm(fVar35,fVar42 - fVar33);
  if (*(float *)((long)param_3 + 0x7e0c) != fVar34) {
    *(float *)((long)param_3 + 0x7e0c) = fVar34;
    FUN_1000200a0(plVar32);
  }
  FUN_10064e47c(*(float *)(param_3 + 0x59e8) + -65.0,fVar33 - fVar34,plVar32);
  fVar33 = *(float *)(param_3 + 0x59e8);
  if ((*(float *)(param_3 + 0x4aa8) != fVar33) || (*(float *)((long)param_3 + 0x25544) != 0.0)) {
    *(float *)(param_3 + 0x4aa8) = fVar33;
    *(undefined4 *)((long)param_3 + 0x25544) = 0;
    FUN_1000200a0(param_3 + 0x4aa0);
    fVar33 = *(float *)(param_3 + 0x59e8);
  }
  FUN_10064e47c(fVar33,local_b0,param_3 + 0x2069);
  if (*(float *)(param_3 + 0x2071) != -65.0) {
    *(undefined4 *)(param_3 + 0x2071) = 0xc2820000;
    FUN_1000200a0(param_3 + 0x2069);
  }
  FUN_10064e47c(local_ac[0] - *(float *)(param_3 + 0x59e8),local_b0,param_3 + 0x2087);
  plVar3 = param_3 + 0xf73;
  bVar22 = false;
  if ((*(float *)((long)param_3 + 0x7bdc) == 0.0) &&
     (bVar22 = false, !NAN(*(float *)(param_3 + 0xf7b)))) {
    bVar22 = *(float *)(param_3 + 0xf7b) == 0.0;
  }
  if (!bVar22) {
    param_3[0xf7b] = 0;
    FUN_1000200a0(plVar3);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(param_3[0xf73] + 0x28))(plVar3,&local_c8);
  FUN_10064e47c(local_ac[0] - *(float *)(param_3 + 0x59e8),local_b0,plVar3);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  }
  puVar16 = (undefined4 *)&DAT_101158584;
  if (*(char *)((long)param_3 + 0x2ceaa) != '\0') {
    puVar16 = &DAT_10115a168;
  }
  FUN_100651594(plVar4,*ppuVar17,puVar16);
  fVar34 = *(float *)(param_3 + 0x59e8);
  plVar3 = param_3 + 0x5af;
  fVar33 = (float)FUN_10064e3cc(plVar3);
  fVar33 = (fVar34 - fVar33) * 0.5;
  FUN_10064e47c(local_ac[0] - *(float *)(param_3 + 0x59e8),local_b0,param_3 + 0x594);
  if ((*(float *)(param_3 + 0x59c) != *(float *)(param_3 + 0x59e8)) ||
     (*(float *)((long)param_3 + 0x2ce4) != 0.0)) {
    *(float *)(param_3 + 0x59c) = *(float *)(param_3 + 0x59e8);
    *(undefined4 *)((long)param_3 + 0x2ce4) = 0;
    FUN_1000200a0(param_3 + 0x594);
  }
  FUN_100181c18(0,*(undefined4 *)((long)param_3 + 0x2cf3c),*(undefined4 *)((long)param_3 + 0x2cf3c),
                plVar3);
  fVar34 = (float)FUN_10064e3cc(plVar3);
  fVar35 = -0.5;
  fVar34 = fVar34 * -0.5 - fVar33;
  FUN_10064e3cc(plVar5);
  if ((*(float *)(param_3 + 0x5b7) != fVar34) ||
     (*(float *)((long)param_3 + 0x2dbc) != fVar35 * 0.5)) {
    *(float *)(param_3 + 0x5b7) = fVar34;
    *(float *)((long)param_3 + 0x2dbc) = fVar35 * 0.5;
    FUN_1000200a0(plVar3);
  }
  plVar4 = param_3 + 0x866;
  FUN_100181c18(0,*(undefined4 *)((long)param_3 + 0x2cf3c),*(undefined4 *)((long)param_3 + 0x2cf3c),
                plVar4);
  fVar34 = (float)FUN_10064e3cc(plVar4);
  fVar35 = -0.5;
  fVar33 = fVar34 * -0.5 - fVar33;
  FUN_10064e3cc(plVar5);
  if ((*(float *)(param_3 + 0x86e) != fVar33) ||
     (*(float *)((long)param_3 + 0x4374) != fVar35 * 0.6)) {
    *(float *)(param_3 + 0x86e) = fVar33;
    *(float *)((long)param_3 + 0x4374) = fVar35 * 0.6;
    FUN_1000200a0(plVar4);
  }
  fVar33 = 0.0;
  FUN_10064e5ec(0,param_3 + 0xee1,7,plVar4,7);
  plVar4 = param_3 + 0xb1d;
  FUN_10064e3cc(plVar3);
  FUN_100651708(plVar4,1);
  FUN_10064e72c(0xc2700000,plVar4,2,plVar3,0);
  FUN_10064e72c(0,plVar4,3,plVar3,3);
  if ((char)param_3[0x59d5] == '\0') {
    if ((*(byte *)((long)param_3 + 0x8654) >> 2 & 1) == 0) goto LAB_10024d5e8;
  }
  else {
    if ((*(byte *)((long)param_3 + 0xda9c) >> 2 & 1) != 0) {
      fVar39 = fVar39 + 40.0;
      goto LAB_10024d600;
    }
LAB_10024d5e8:
    plVar25 = plVar1;
  }
  fVar39 = *(float *)((long)plVar25 + 0x44);
  FUN_100651184();
  fVar39 = fVar33 + fVar39;
LAB_10024d600:
  fVar33 = 1.0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    fVar33 = 0.8;
  }
  plVar3 = param_3 + 0x4c42;
  fVar38 = fVar39 + fVar38 * fVar33 + -60.0;
  if ((*(float *)(param_3 + 0x4c4a) != 0.0) ||
     (fVar33 = *(float *)((long)param_3 + 0x26254), fVar33 != fVar38)) {
    *(undefined4 *)(param_3 + 0x4c4a) = 0;
    *(float *)((long)param_3 + 0x26254) = fVar38;
    FUN_1000200a0(plVar3);
    fVar33 = *(float *)((long)param_3 + 0x26254);
  }
  FUN_10064e47c(*(float *)((long)param_3 + 0x2cf44) + 128.0,
                local_b0 - (fVar33 + *(float *)((long)param_3 + 0x25544)),plVar3);
  *(uint *)((long)param_3 + 0x26294) = *(uint *)((long)param_3 + 0x26294) | 0x10;
  uVar37 = FUN_10064e3cc(plVar3);
  FUN_1006425d0(param_3 + 0x4c76,0,0,1,1);
  FUN_10053093c(uVar37,param_3 + 0x4c76);
  fVar38 = *(float *)((long)param_3 + 0x26254);
  fVar33 = 60.0;
  FUN_100651184(plVar8);
  fVar38 = fVar38 + 60.0 + fVar33 * -0.5;
  if ((*(float *)(param_3 + 0x5148) != 48.0) || (*(float *)((long)param_3 + 0x28a44) != fVar38)) {
    *(undefined4 *)(param_3 + 0x5148) = 0x42400000;
    *(float *)((long)param_3 + 0x28a44) = fVar38;
    FUN_1000200a0(plVar8);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_c8);
  FUN_100651708(*(float *)((long)param_3 + 0x2cf44) + -20.0,plVar8,1);
  ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    ppuVar17 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  }
  FUN_100651594(plVar7,*ppuVar17,&DAT_10115a168);
  if ((*(float *)(param_3 + 0x516e) != 48.0) ||
     (*(float *)((long)param_3 + 0x28b74) != *(float *)((long)param_3 + 0x28a44))) {
    *(undefined4 *)(param_3 + 0x516e) = 0x42400000;
    *(float *)((long)param_3 + 0x28b74) = *(float *)((long)param_3 + 0x28a44);
    FUN_1000200a0(plVar7);
  }
  local_c8 = (undefined1 *)0x0;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_c8);
  FUN_100651708(*(float *)((long)param_3 + 0x2cf44) + -30.0,plVar7,1);
  if ((*(float *)(param_3 + 0x51a5) != *(float *)(param_3 + 0x4c4a) + 24.0) ||
     (*(float *)((long)param_3 + 0x28d2c) != *(float *)((long)param_3 + 0x26254))) {
    *(float *)(param_3 + 0x51a5) = *(float *)(param_3 + 0x4c4a) + 24.0;
    *(float *)((long)param_3 + 0x28d2c) = *(float *)((long)param_3 + 0x26254);
    FUN_1000200a0(param_3 + 0x519d);
  }
  fVar38 = (float)FUN_10064e3cc(plVar3);
  fVar39 = -48.0;
  FUN_10064e3cc(plVar3);
  fVar33 = 13.0;
  if (*(char *)((long)param_3 + 0x2ceb5) != '\0') {
    fVar33 = -11.0;
  }
  FUN_100187094(fVar38 + -48.0,fVar39 - fVar33,param_3 + 0x519d);
  *(undefined1 *)(param_3 + 22999) = 0;
  return;
}



/*
 * thunk_FUN_10024bf9c
 * VA: 0xthunk_10024bf9c | Source: functions/10024.c:7464
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_10024bf9c
 */
void thunk_FUN_10024bf9c(void)

{
  FUN_10024bf9c();
  return;
}



/*
 * FUN_10024e69c
 * VA: 0x10024e69c | Source: functions/10024.c:8800
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 3
 * Callees: FUN_10001549c, FUN_1000200a0, FUN_100131560, FUN_10015d3ec, FUN_100165784, FUN_100165fc0, FUN_100181af8, FUN_10018e754 (+20 more)
 * Callers: FUN_10024e4a4
 */
void FUN_10024e69c(long param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  string *psVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  long lVar16;
  void *local_68;
  void *local_60;
  char local_51;
  
  lVar1 = param_1 + 0xb0e8;
  FUN_10018e8a8(lVar1);
  piVar6 = (int *)FUN_10034ccb8();
  uVar7 = FUN_10034cdd0();
  if ((uVar7 & 1) == 0) {
    bVar4 = FUN_10034ce60(piVar6);
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x2ceab) = bVar4;
  *(bool *)(param_1 + 0x2ceac) = *piVar6 == 0;
  *(undefined8 *)(param_1 + 0x2ced8) = 0;
  puVar15 = *(undefined8 **)(piVar6 + 10);
  piVar14 = (int *)*puVar15;
  if (piVar14 != (int *)0x0) {
    iVar5 = 0;
    lVar11 = 0;
    do {
      lVar16 = lVar11;
      iVar3 = *piVar14;
      *(int *)(param_1 + 0x2cee0 + lVar16 * 4) = iVar3;
      iVar5 = iVar5 + iVar3;
      if ((bVar4 & 1) != 0) break;
      piVar14 = (int *)puVar15[lVar16 + 1];
      lVar11 = lVar16 + 1;
    } while (piVar14 != (int *)0x0);
    *(int *)(param_1 + 0x2ced8) = (int)lVar16 + 1;
    *(int *)(param_1 + 0x2cedc) = iVar5;
  }
  FUN_100250e58(param_1);
  uVar7 = FUN_10034cdd0(piVar6);
  if ((((uVar7 & 1) != 0) || (iVar5 = FUN_10034ce60(piVar6), iVar5 != 0)) &&
     (*(uint *)(param_1 + 0x2cedc) < *(uint *)(param_1 + 0x2ce98))) {
    uVar8 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar9 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
    FUN_10018e754(lVar1,param_1 + 0x2cec0,0,0);
    return;
  }
  puVar2 = (uint *)(param_1 + 0xda9c);
  if (*(char *)(param_1 + 0x2cea8) == '\0') {
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) == 0) {
      FUN_10034cd68(&local_68,piVar6);
      FUN_1006513c0(param_1 + 0x84a0,&local_68);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
    }
    FUN_10065179c(*(undefined4 *)(param_1 + 0x2cf38),0,0x3f800000,param_1 + 0x84a0);
    FUN_100251a50(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x2ceab) == '\0') {
      FUN_1002538d8(param_1);
      lVar11 = FUN_10015d3ec();
      if (*(int *)(lVar11 + 0x55cc) == 2) {
        uVar8 = FUN_10015d3ec();
        FUN_100165784(uVar8,1);
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x105ac);
      if ((uVar13 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x105ac) = uVar13 & 0xffff807f;
        FUN_1000200a0(param_1 + 0x10528);
        uVar13 = *(uint *)(param_1 + 0x105ac);
      }
      *(uint *)(param_1 + 0x105ac) = uVar13 | 4;
      FUN_100642324(param_1 + 0x10528);
    }
    FUN_10034cd38(&local_68,piVar6);
    FUN_100181af8(param_1 + 0x107d0,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  lVar11 = FUN_10015d3ec();
  if (*(char *)(lVar11 + 0x567a) != '\0') {
    uVar8 = FUN_10034cd28(piVar6);
    FUN_10001549c(&local_68,uVar8);
    lVar11 = FUN_10031ffe0();
    if (*(int *)(lVar11 + 0x60) != 0) {
      puVar15 = *(undefined8 **)(lVar11 + 0x68);
      do {
        if ((code *)*puVar15 == (code *)0x0) {
          (*(code *)puVar15[3])(puVar15[2],&local_68);
        }
        else {
          (*(code *)*puVar15)(&local_68);
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 !=
               (undefined8 *)(*(long *)(lVar11 + 0x68) + (ulong)*(uint *)(lVar11 + 0x60) * 0x20));
    }
    if (local_51 < '\0') {
      operator_delete(local_68);
    }
  }
  iVar5 = FUN_10034ce60(piVar6);
  uVar8 = FUN_10024e660(param_1);
  FUN_100530adc(param_1 + 0x7f68,0,uVar8);
  if (*(float *)(param_1 + 0x7fac) != 0.0) {
    *(float *)(param_1 + 0x7fac) = 0.0;
    FUN_1000200a0(param_1 + 0x7f68);
  }
  if (iVar5 == 0) {
    uVar13 = 0;
    *puVar2 = *puVar2 & 0xfffffffb;
  }
  else {
    *puVar2 = *puVar2 & 0xfffffffb | (uint)*(byte *)(param_1 + 0x2cea8) << 2;
    uVar13 = (uint)(*(byte *)(param_1 + 0x2cea8) == 0) << 2;
  }
  *(uint *)(param_1 + 0x8654) = *(uint *)(param_1 + 0x8654) & 0xfffffffb | uVar13;
  FUN_10024bf9c(param_1);
  if (*(char *)(param_1 + 0x2cea8) != '\0') {
    uVar8 = FUN_10015d3ec();
    iVar5 = *piVar6;
    if ((*(byte *)puVar2 >> 2 & 1) == 0) {
      puVar15 = &DAT_101d91198;
    }
    else {
      puVar15 = (undefined8 *)FUN_10018e8a8(param_1 + 0xda18);
    }
    lVar11 = FUN_10031ffe0();
    FUN_100165fc0(uVar8,iVar5,puVar15,lVar11 + 0x88);
  }
  psVar12 = (string *)FUN_10018e8a8(lVar1);
  std::string::operator=((string *)(param_1 + 0x2cec0),psVar12);
  uVar8 = FUN_10031ffe0();
  FUN_1003211c4(uVar8,*(undefined4 *)(param_1 + 0x2cee0));
  return;
}



/*
 * thunk_FUN_10024e69c
 * VA: 0xthunk_10024e69c | Source: functions/10024.c:6813
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 3, Vis masks: 3
 * Callees: FUN_10001549c, FUN_1000200a0, FUN_100131560, FUN_10015d3ec, FUN_100165784, FUN_100165fc0, FUN_100181af8, FUN_10018e754 (+20 more)
 * Callers: FUN_100187d2c, FUN_100248d18, thunk_FUN_100248d18
 */
void thunk_FUN_10024e69c(long param_1)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  string *psVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  long lVar16;
  void *pvStack_68;
  void *pvStack_60;
  char cStack_51;
  
  lVar1 = param_1 + 0xb0e8;
  FUN_10018e8a8(lVar1);
  piVar6 = (int *)FUN_10034ccb8();
  uVar7 = FUN_10034cdd0();
  if ((uVar7 & 1) == 0) {
    bVar4 = FUN_10034ce60(piVar6);
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x2ceab) = bVar4;
  *(bool *)(param_1 + 0x2ceac) = *piVar6 == 0;
  *(undefined8 *)(param_1 + 0x2ced8) = 0;
  puVar15 = *(undefined8 **)(piVar6 + 10);
  piVar14 = (int *)*puVar15;
  if (piVar14 != (int *)0x0) {
    iVar5 = 0;
    lVar11 = 0;
    do {
      lVar16 = lVar11;
      iVar3 = *piVar14;
      *(int *)(param_1 + 0x2cee0 + lVar16 * 4) = iVar3;
      iVar5 = iVar5 + iVar3;
      if ((bVar4 & 1) != 0) break;
      piVar14 = (int *)puVar15[lVar16 + 1];
      lVar11 = lVar16 + 1;
    } while (piVar14 != (int *)0x0);
    *(int *)(param_1 + 0x2ced8) = (int)lVar16 + 1;
    *(int *)(param_1 + 0x2cedc) = iVar5;
  }
  FUN_100250e58(param_1);
  uVar7 = FUN_10034cdd0(piVar6);
  if ((((uVar7 & 1) != 0) || (iVar5 = FUN_10034ce60(piVar6), iVar5 != 0)) &&
     (*(uint *)(param_1 + 0x2cedc) < *(uint *)(param_1 + 0x2ce98))) {
    uVar8 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar9 = FUN_1004e0150("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
    FUN_10018e754(lVar1,param_1 + 0x2cec0,0,0);
    return;
  }
  puVar2 = (uint *)(param_1 + 0xda9c);
  if (*(char *)(param_1 + 0x2cea8) == '\0') {
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) == 0) {
      FUN_10034cd68(&pvStack_68,piVar6);
      FUN_1006513c0(param_1 + 0x84a0,&pvStack_68);
      if (pvStack_60 != (void *)0x0) {
        operator_delete__(pvStack_60);
      }
    }
    FUN_10065179c(*(undefined4 *)(param_1 + 0x2cf38),0,0x3f800000,param_1 + 0x84a0);
    FUN_100251a50(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x2ceab) == '\0') {
      FUN_1002538d8(param_1);
      lVar11 = FUN_10015d3ec();
      if (*(int *)(lVar11 + 0x55cc) == 2) {
        uVar8 = FUN_10015d3ec();
        FUN_100165784(uVar8,1);
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x105ac);
      if ((uVar13 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x105ac) = uVar13 & 0xffff807f;
        FUN_1000200a0(param_1 + 0x10528);
        uVar13 = *(uint *)(param_1 + 0x105ac);
      }
      *(uint *)(param_1 + 0x105ac) = uVar13 | 4;
      FUN_100642324(param_1 + 0x10528);
    }
    FUN_10034cd38(&pvStack_68,piVar6);
    FUN_100181af8(param_1 + 0x107d0,&pvStack_68);
    if (pvStack_60 != (void *)0x0) {
      operator_delete__(pvStack_60);
    }
  }
  lVar11 = FUN_10015d3ec();
  if (*(char *)(lVar11 + 0x567a) != '\0') {
    uVar8 = FUN_10034cd28(piVar6);
    FUN_10001549c(&pvStack_68,uVar8);
    lVar11 = FUN_10031ffe0();
    if (*(int *)(lVar11 + 0x60) != 0) {
      puVar15 = *(undefined8 **)(lVar11 + 0x68);
      do {
        if ((code *)*puVar15 == (code *)0x0) {
          (*(code *)puVar15[3])(puVar15[2],&pvStack_68);
        }
        else {
          (*(code *)*puVar15)(&pvStack_68);
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 !=
               (undefined8 *)(*(long *)(lVar11 + 0x68) + (ulong)*(uint *)(lVar11 + 0x60) * 0x20));
    }
    if (cStack_51 < '\0') {
      operator_delete(pvStack_68);
    }
  }
  iVar5 = FUN_10034ce60(piVar6);
  uVar8 = FUN_10024e660(param_1);
  FUN_100530adc(param_1 + 0x7f68,0,uVar8);
  if (*(float *)(param_1 + 0x7fac) != 0.0) {
    *(float *)(param_1 + 0x7fac) = 0.0;
    FUN_1000200a0(param_1 + 0x7f68);
  }
  if (iVar5 == 0) {
    uVar13 = 0;
    *puVar2 = *puVar2 & 0xfffffffb;
  }
  else {
    *puVar2 = *puVar2 & 0xfffffffb | (uint)*(byte *)(param_1 + 0x2cea8) << 2;
    uVar13 = (uint)(*(byte *)(param_1 + 0x2cea8) == 0) << 2;
  }
  *(uint *)(param_1 + 0x8654) = *(uint *)(param_1 + 0x8654) & 0xfffffffb | uVar13;
  FUN_10024bf9c(param_1);
  if (*(char *)(param_1 + 0x2cea8) != '\0') {
    uVar8 = FUN_10015d3ec();
    iVar5 = *piVar6;
    if ((*(byte *)puVar2 >> 2 & 1) == 0) {
      puVar15 = &DAT_101d91198;
    }
    else {
      puVar15 = (undefined8 *)FUN_10018e8a8(param_1 + 0xda18);
    }
    lVar11 = FUN_10031ffe0();
    FUN_100165fc0(uVar8,iVar5,puVar15,lVar11 + 0x88);
  }
  psVar12 = (string *)FUN_10018e8a8(lVar1);
  std::string::operator=((string *)(param_1 + 0x2cec0),psVar12);
  uVar8 = FUN_10031ffe0();
  FUN_1003211c4(uVar8,*(undefined4 *)(param_1 + 0x2cee0));
  return;
}



/*
 * FUN_100251990
 * VA: 0x100251990 | Source: functions/10025.c:1230
 * CE-gate: YES (2x) | Guest-gate: NO
 * Indicators: UI strings: 2
 * Callees: FUN_100126b4c, FUN_100131560, FUN_10015d3ec, FUN_100165e04, FUN_100186730, FUN_10024f8fc, FUN_10031ffe0, FUN_1003210e4 (+3 more)
 * Callers: FUN_1002513b4, thunk_FUN_100251990
 */
void FUN_100251990(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_40 [32];
  
  *(undefined1 *)(param_1 + 0x2ceb8) = 1;
  iVar1 = FUN_100131560();
  if (iVar1 == 0) {
    FUN_10015d3ec();
    FUN_100165e04();
  }
  else {
    FUN_10031ffe0();
    FUN_1003210e4();
  }
  uVar2 = FUN_100644a94("UI::EVENT_MENU_LEAVE_PARTY");
  FUN_100644aec(auStack_40,uVar2,0);
  FUN_100644c34(param_1,auStack_40,1);
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) == 0) {
    FUN_100186730(param_1 + 0x28ce8,1);
    std::string::operator=((string *)(param_1 + 0x2ce48),(string *)&DAT_101d91198);
    iVar1 = FUN_100126b4c();
    if (iVar1 != 0) {
      FUN_10024f8fc(param_1);
    }
  }
  return;
}



/*
 * thunk_FUN_100251990
 * VA: 0xthunk_100251990 | Source: functions/10025.c:94
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_100251990
 * Callers: FUN_100187d2c, FUN_100248d18, thunk_FUN_100248d18
 */
void thunk_FUN_100251990(void)

{
  FUN_100251990();
  return;
}



/*
 * FUN_100251a50
 * VA: 0x100251a50 | Source: functions/10025.c:1266
 * CE-gate: NO | Guest-gate: NO
 * Indicators: UI strings: 5
 * Callees: FUN_10018e8a8, FUN_1004e0150, FUN_1006513c0, FUN_10065179c
 * Callers: FUN_10024e69c, FUN_1002513b4, thunk_FUN_10024e69c
 */
void FUN_100251a50(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0xda18;
  uVar4 = FUN_10018e8a8(lVar1);
  uVar2 = *(ulong *)(uVar4 + 8);
  if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
    uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
  }
  if ((uVar2 == 9) &&
     (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e4b8f), iVar3 == 0)) {
    pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_VERY_EASY_OPTION";
  }
  else {
    uVar4 = FUN_10018e8a8(lVar1);
    uVar2 = *(ulong *)(uVar4 + 8);
    if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
      uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
    }
    if ((uVar2 == 4) &&
       (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e442c), iVar3 == 0)) {
      pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_EASY_OPTION";
    }
    else {
      uVar4 = FUN_10018e8a8(lVar1);
      uVar2 = *(ulong *)(uVar4 + 8);
      if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
        uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
      }
      if ((uVar2 == 6) &&
         (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013dc162), iVar3 == 0))
      {
        pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_MEDIUM_OPTION";
      }
      else {
        uVar4 = FUN_10018e8a8(lVar1);
        uVar2 = *(ulong *)(uVar4 + 8);
        if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
          uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
        }
        if ((uVar2 == 4) &&
           (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e4b99), iVar3 == 0
           )) {
          pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_HARD_OPTION";
        }
        else {
          uVar4 = FUN_10018e8a8(lVar1);
          uVar2 = *(ulong *)(uVar4 + 8);
          if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
            uVar2 = (ulong)*(byte *)(uVar4 + 0x17);
          }
          if ((uVar2 != 9) ||
             (iVar3 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e4b9e),
             iVar3 != 0)) goto LAB_100251bfc;
          pcVar5 = "MENU_PARTY_BOT_DIFFICULTY_VERY_HARD_OPTION";
        }
      }
    }
  }
  uVar6 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0(param_1 + 0x85d0,uVar6);
LAB_100251bfc:
  FUN_10065179c(*(undefined4 *)(param_1 + 0x2cf38),0,0x3f800000,param_1 + 0x85d0);
  return;
}



/*
 * FUN_100255b9c
 * VA: 0x100255b9c | Source: functions/10025.c:4254
 * CE-gate: YES (3x) | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 13
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_10003c274, FUN_10003c2dc, FUN_10003c480, FUN_1000be5e4 (+57 more)
 */
undefined ** FUN_100255b9c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  uint uVar31;
  undefined *puVar32;
  undefined **local_348;
  undefined **local_340;
  undefined8 local_338;
  code *local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  void *pvStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined1 auStack_2c8 [164];
  undefined4 local_224;
  undefined8 local_1a0;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined4 local_c0;
  uint local_84;
  
  lVar29 = FUN_100269da8();
  FUN_1001e1b34(lVar29 + 200);
  *param_1 = (undefined *)&PTR_thunk_FUN_100256f78_10147a9e8;
  param_1[0x19] = (undefined *)&PTR_FUN_10147ab58;
  ppuVar1 = param_1 + 0x1c;
  FUN_1006421a8();
  param_1[0x1c] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar2 = param_1 + 0x2d;
  thunk_FUN_100652c08();
  ppuVar3 = param_1 + 0x4b;
  thunk_FUN_10064f204();
  ppuVar4 = param_1 + 0x74;
  thunk_FUN_100650e64();
  ppuVar5 = param_1 + 0x9a;
  thunk_FUN_100650e64();
  ppuVar6 = param_1 + 0xc0;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar7 = param_1 + 0x181;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  FUN_1006421a8(param_1 + 0x242);
  param_1[0x242] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x253);
  thunk_FUN_100650e64(param_1 + 0x271);
  ppuVar8 = param_1 + 0x297;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar9 = param_1 + 0x358;
  thunk_FUN_100655644();
  ppuVar10 = param_1 + 899;
  thunk_FUN_100652c08();
  ppuVar11 = param_1 + 0x3a1;
  thunk_FUN_100652c08();
  ppuVar12 = param_1 + 0x3bf;
  thunk_FUN_100650e64();
  ppuVar13 = param_1 + 0x3e5;
  thunk_FUN_100652c08();
  ppuVar14 = param_1 + 0x403;
  thunk_FUN_1001cd1dc();
  ppuVar15 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  ppuVar16 = param_1 + 0x454;
  thunk_FUN_1006543ec(ppuVar16);
  ppuVar17 = param_1 + 0x488;
  FUN_10053319c(ppuVar17,0);
  ppuVar18 = param_1 + 0x533;
  FUN_1006421a8();
  param_1[0x533] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar19 = param_1 + 0x548;
  param_1[0x545] = (undefined *)0x0;
  param_1[0x544] = (undefined *)0x0;
  param_1[0x547] = (undefined *)0x0;
  param_1[0x546] = (undefined *)0x0;
  thunk_FUN_100652c08(ppuVar19);
  ppuVar20 = param_1 + 0x566;
  thunk_FUN_100652c08(ppuVar20);
  ppuVar21 = param_1 + 0x584;
  thunk_FUN_1001ae894();
  ppuVar22 = param_1 + 0x6c3;
  FUN_1006421a8(ppuVar22);
  param_1[0x6c3] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4d10();
  ppuVar23 = param_1 + 0x937;
  thunk_FUN_100652c08(ppuVar23);
  ppuVar24 = param_1 + 0x955;
  thunk_FUN_100652c08(ppuVar24);
  ppuVar25 = param_1 + 0x973;
  thunk_FUN_1001c0c34(ppuVar25,0);
  ppuVar26 = param_1 + 0xa22;
  FUN_1006421a8(ppuVar26);
  param_1[0xa22] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar27 = param_1 + 0xa33;
  thunk_FUN_1001ae894(ppuVar27);
  thunk_FUN_10019a2d4(param_1 + 0xb72,0);
  thunk_FUN_1001b17d8();
  param_1[0x1cb5] = (undefined *)0x0;
  param_1[0x1cb4] = (undefined *)0x0;
  param_1[0x1cb3] = (undefined *)0x0;
  param_1[0x1cb7] = (undefined *)0xffffffff00000001;
  *(undefined4 *)(param_1 + 0x1cb8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xe5c4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar16,1);
  FUN_100642bd8(ppuVar16,ppuVar19,1);
  FUN_100642bd8(ppuVar16,ppuVar20,1);
  FUN_100642bd8(ppuVar16,ppuVar25,1);
  FUN_100642bd8(ppuVar16,ppuVar18,1);
  FUN_100642bd8(ppuVar18,ppuVar17,1);
  FUN_1005308f8(ppuVar17,ppuVar22,1);
  FUN_100642bd8(ppuVar22,ppuVar24,1);
  FUN_100642bd8(ppuVar22,param_1 + 0x6d4,1);
  FUN_100642bd8(ppuVar22,ppuVar23,1);
  FUN_100642bd8(ppuVar18,ppuVar21,1);
  FUN_100642bd8(ppuVar16,ppuVar26,1);
  FUN_100642bd8(ppuVar26,ppuVar27,1);
  FUN_100642bd8(ppuVar26,param_1 + 0xb78,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1565,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar1,1);
  FUN_100642bd8(ppuVar1,ppuVar3,1);
  FUN_10064f31c(ppuVar3,ppuVar4,1);
  FUN_10064f31c(ppuVar3,ppuVar5,1);
  FUN_10064f31c(ppuVar3,ppuVar6,1);
  FUN_10064f31c(ppuVar3,param_1 + 0xe6,1);
  FUN_10064f31c(ppuVar3,ppuVar7,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x1a7,1);
  FUN_10064f31c(ppuVar3,ppuVar8,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x2bd,1);
  FUN_100642bd8(ppuVar1,ppuVar9,1);
  FUN_100655930(ppuVar9,ppuVar10,1);
  FUN_100655930(ppuVar9,ppuVar11,1);
  FUN_100655930(ppuVar9,ppuVar13,1);
  FUN_100655930(ppuVar9,ppuVar12,1);
  FUN_100655930(ppuVar9,ppuVar14,1);
  FUN_100655930(ppuVar9,ppuVar15,1);
  FUN_100652cac(ppuVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x1ec);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1ec) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar2);
  }
  FUN_1001b66dc(0x3fef684c,param_1 + 0x6d4,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x936) = 0;
  *(uint *)((long)param_1 + 0x3724) = *(uint *)((long)param_1 + 0x3724) | 4;
  FUN_100651594(ppuVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_WINS_LABEL",0);
  FUN_1006513c0(ppuVar4,uVar30);
  FUN_100651594(ppuVar5,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_101158614);
  FUN_1004e3120(&local_348,"0");
  FUN_1006513c0(ppuVar5,&local_348);
  if (local_340 != (void *)0x0) {
    operator_delete__(local_340);
  }
  FUN_100651594(ppuVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_GOLD_LABEL",0);
  FUN_1006513c0(ppuVar6,uVar30);
  FUN_10001549c(&local_348,"ice_icon_small");
  FUN_1001c435c(param_1 + 0xe6,&local_348);
  if ((long)local_338 < 0) {
    operator_delete(local_348);
  }
  FUN_100651594(ppuVar7,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_SILVER_LABEL",0);
  FUN_1006513c0(ppuVar7,uVar30);
  FUN_10001549c(&local_348,"glory_icon_small");
  FUN_1001c435c(param_1 + 0x1a7,&local_348);
  if ((long)local_338 < 0) {
    operator_delete(local_348);
  }
  FUN_100651594(ppuVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_OPAL_LABEL",0);
  FUN_1006513c0(ppuVar8,uVar30);
  FUN_10001549c(&local_348,"opal_icon_small");
  FUN_1001c435c(param_1 + 0x2bd,&local_348);
  if ((long)local_338 < 0) {
    operator_delete(local_348);
  }
  FUN_100652cac(ppuVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"icon_karma_L1");
  if ((*(float *)(param_1 + 0x38c) != 0.8) || (*(float *)((long)param_1 + 0x1c64) != 0.8)) {
    param_1[0x38c] = (undefined *)0x3f4ccccd3f4ccccd;
    FUN_1000200a0(ppuVar10);
  }
  FUN_100651594(ppuVar12,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_GOOD",0);
  FUN_1006513c0(ppuVar12,uVar30);
  if ((*(uint *)((long)param_1 + 0x1e7c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(ppuVar12);
  }
  FUN_100652cac(ppuVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x43fa0000,0x42c80000,ppuVar11);
  FUN_100651594(ppuVar14,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_BAN_TIMER",0);
  FUN_1001cd23c(ppuVar14,uVar30,0,0);
  uVar31 = *(uint *)((long)param_1 + 0x209c);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar14);
    uVar31 = *(uint *)((long)param_1 + 0x209c);
  }
  *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xfffffffb;
  FUN_100652cac(ppuVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x44960000,0x42c80000,ppuVar13);
  FUN_100651594(ppuVar15,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_BONUS_LABEL",0);
  FUN_1006513c0(ppuVar15,uVar30);
  uVar31 = *(uint *)((long)param_1 + 0x21f4);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar15);
    uVar31 = *(uint *)((long)param_1 + 0x21f4);
  }
  *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) | 0x10;
  FUN_100530adc(ppuVar17,1,0);
  FUN_100652cac(ppuVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x552) != 0.48) || (*(float *)((long)param_1 + 0x2a94) != 0.38)) {
    param_1[0x552] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar19);
  }
  if ((*(float *)(param_1 + 0x551) != 6.5) || (*(float *)((long)param_1 + 0x2a8c) != 6.5)) {
    puVar32 = (undefined *)NEON_fmov(0x40d00000,4);
    param_1[0x551] = puVar32;
    FUN_1000200a0(ppuVar19);
  }
  uVar31 = *(uint *)((long)param_1 + 0x2ac4);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x2ac4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar19);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2ac4) = *(uint *)((long)param_1 + 0x2ac4) & 0xfffffffb | uVar31;
  FUN_100652cac(ppuVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x570) != 0.48) || (*(float *)((long)param_1 + 0x2b84) != 0.38)) {
    param_1[0x570] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(float *)(param_1 + 0x56f) != 8.5) || (*(float *)((long)param_1 + 0x2b7c) != 8.5)) {
    puVar32 = (undefined *)NEON_fmov(0x41080000,4);
    param_1[0x56f] = puVar32;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(uint *)((long)param_1 + 0x2bb4) & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xffff807f | 0x600;
    FUN_1000200a0(ppuVar20);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xfffffffb | uVar31;
  if ((*(float *)(param_1 + 0x97c) != 2.0) || (*(float *)((long)param_1 + 0x4be4) != 2.0)) {
    param_1[0x97c] = (undefined *)0x4000000040000000;
    FUN_1000200a0(ppuVar25);
  }
  FUN_1002340fc(0x3f08f5c3,ppuVar21);
  *(uint *)((long)param_1 + 0x2ca4) = *(uint *)((long)param_1 + 0x2ca4) & 0xfffffffb;
  FUN_1002340fc(0x3f08f5c3,ppuVar27);
  FUN_10003c274(auStack_100);
  local_84 = local_84 & 0xffff | 0x3200000;
  local_c0 = 0;
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_TITLE",0);
  thunk_FUN_1004e439c(&local_348,uVar30);
  FUN_10003330c(&local_338,&DAT_101d91198);
  local_320 = 0;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&local_348);
  if (uStack_328 < 0) {
    operator_delete(local_338);
  }
  if (local_340 != (void *)0x0) {
    operator_delete__(local_340);
  }
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_DESCRIPTION",0);
  thunk_FUN_1004e439c(&local_348,uVar30);
  FUN_10003330c(&local_338,&DAT_101d91198);
  local_320 = 1;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&local_348);
  if (uStack_328._7_1_ < '\0') {
    operator_delete(local_338);
  }
  if (local_340 != (void *)0x0) {
    operator_delete__(local_340);
  }
  FUN_10001549c(&local_348,"tutorial_not_complete");
  FUN_10019aa88(param_1 + 0xb72,&local_348,auStack_100);
  if (local_338._7_1_ < '\0') {
    operator_delete(local_348);
  }
  FUN_100652cac(ppuVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar31 = *(uint *)((long)param_1 + 0x4b2c);
  if ((uVar31 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x4b2c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5900;
    FUN_1000200a0(ppuVar24);
  }
  FUN_100652cac(ppuVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x4a3c);
  if ((uVar31 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x4a3c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2c80;
    FUN_1000200a0(ppuVar23);
  }
  local_320 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  local_348 = (undefined **)FUN_100256b68;
  ppuVar1 = param_1 + 1;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  local_320 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  local_348 = (undefined **)FUN_100256b6c;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  local_320 = FUN_100644a94("UI::EVENT_MENU_OPEN_CHEST");
  local_348 = (undefined **)thunk_FUN_1002599f8;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(param_1 + 0x585,&local_348);
  thunk_FUN_100644cf4(ppuVar21,ppuVar17);
  local_320 = FUN_100644a94("UI::EVENT_OPEN_GOVERNMENTID");
  local_348 = (undefined **)thunk_FUN_100259c48;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  uVar30 = FUN_10032697c();
  local_340 = (undefined **)0x0;
  local_330 = thunk_FUN_1002587e8;
  local_348 = param_1;
  local_338 = param_1;
  FUN_1000be5e4(uVar30,&local_348);
  uVar30 = FUN_100326d90();
  local_348 = (undefined **)0x0;
  local_330 = (code *)0x100259e70;
  local_340 = param_1;
  local_338 = param_1;
  FUN_1002059f4(uVar30,&local_348);
  local_320 = DAT_101d23670;
  local_348 = (undefined **)FUN_100256ba0;
  local_330 = (code *)0x0;
  uStack_328 = 0;
  local_338 = (undefined **)0x0;
  local_340 = param_1;
  FUN_10001554c(ppuVar1,&local_348);
  iVar28 = FUN_100131560();
  if (iVar28 != 0) {
    *(uint *)((long)param_1 + 0x684) = *(uint *)((long)param_1 + 0x684) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x7b4) = *(uint *)((long)param_1 + 0x7b4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xdbc) = *(uint *)((long)param_1 + 0xdbc) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x153c) = *(uint *)((long)param_1 + 0x153c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xfffffffb;
    FUN_1004f1580(&local_348);
    local_348 = &PTR_FUN_10145b860;
    uStack_318 = 0;
    uStack_314 = 0;
    local_320 = 0;
    uStack_31c = 0;
    uStack_308 = 0;
    local_310 = 0;
    pvStack_2f8 = (void *)0x0;
    local_300 = 0;
    uStack_2e8 = 0;
    local_2f0 = 0;
    uStack_2d8 = 0;
    local_2e0 = 0;
    local_2d0 = 0;
    FUN_100168aa8(auStack_2c8);
    local_1a0 = 0xffffffffffffffff;
    local_224 = 10;
    FUN_100256bac(param_1,&local_348,0);
    local_348 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_2c8);
    FUN_100156080(&local_2f0,1);
    if (pvStack_2f8 != (void *)0x0) {
      operator_delete__(pvStack_2f8);
      local_300 = 0;
      pvStack_2f8 = (void *)0x0;
    }
    FUN_100155f24(&local_310,1);
    FUN_100155eac(&local_320,1);
    FUN_1004f15a8(&local_348);
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  FUN_10003c480(auStack_100,1);
  return param_1;
}



/*
 * thunk_FUN_100255b9c
 * VA: 0xthunk_100255b9c | Source: functions/10025.c:5029
 * CE-gate: YES (3x) | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 13
 * Callees: FUN_10001549c, FUN_10001554c, FUN_1000200a0, FUN_10003330c, FUN_10003c274, FUN_10003c2dc, FUN_10003c480, FUN_1000be5e4 (+57 more)
 * Callers: FUN_10025c044, thunk_FUN_10025c044
 */
undefined ** thunk_FUN_100255b9c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  int iVar28;
  long lVar29;
  undefined8 uVar30;
  uint uVar31;
  undefined *puVar32;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  void *pvStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [164];
  undefined4 uStack_224;
  undefined8 uStack_1a0;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  void *pvStack_e8;
  undefined8 uStack_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  void *pvStack_c8;
  undefined4 uStack_c0;
  uint uStack_84;
  
  lVar29 = FUN_100269da8();
  FUN_1001e1b34(lVar29 + 200);
  *param_1 = (undefined *)&PTR_thunk_FUN_100256f78_10147a9e8;
  param_1[0x19] = (undefined *)&PTR_FUN_10147ab58;
  ppuVar1 = param_1 + 0x1c;
  FUN_1006421a8();
  param_1[0x1c] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar2 = param_1 + 0x2d;
  thunk_FUN_100652c08();
  ppuVar3 = param_1 + 0x4b;
  thunk_FUN_10064f204();
  ppuVar4 = param_1 + 0x74;
  thunk_FUN_100650e64();
  ppuVar5 = param_1 + 0x9a;
  thunk_FUN_100650e64();
  ppuVar6 = param_1 + 0xc0;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar7 = param_1 + 0x181;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  FUN_1006421a8(param_1 + 0x242);
  param_1[0x242] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x253);
  thunk_FUN_100650e64(param_1 + 0x271);
  ppuVar8 = param_1 + 0x297;
  thunk_FUN_100650e64();
  thunk_FUN_1001c4088();
  ppuVar9 = param_1 + 0x358;
  thunk_FUN_100655644();
  ppuVar10 = param_1 + 899;
  thunk_FUN_100652c08();
  ppuVar11 = param_1 + 0x3a1;
  thunk_FUN_100652c08();
  ppuVar12 = param_1 + 0x3bf;
  thunk_FUN_100650e64();
  ppuVar13 = param_1 + 0x3e5;
  thunk_FUN_100652c08();
  ppuVar14 = param_1 + 0x403;
  thunk_FUN_1001cd1dc();
  ppuVar15 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  ppuVar16 = param_1 + 0x454;
  thunk_FUN_1006543ec(ppuVar16);
  ppuVar17 = param_1 + 0x488;
  FUN_10053319c(ppuVar17,0);
  ppuVar18 = param_1 + 0x533;
  FUN_1006421a8();
  param_1[0x533] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar19 = param_1 + 0x548;
  param_1[0x545] = (undefined *)0x0;
  param_1[0x544] = (undefined *)0x0;
  param_1[0x547] = (undefined *)0x0;
  param_1[0x546] = (undefined *)0x0;
  thunk_FUN_100652c08(ppuVar19);
  ppuVar20 = param_1 + 0x566;
  thunk_FUN_100652c08(ppuVar20);
  ppuVar21 = param_1 + 0x584;
  thunk_FUN_1001ae894();
  ppuVar22 = param_1 + 0x6c3;
  FUN_1006421a8(ppuVar22);
  param_1[0x6c3] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4d10();
  ppuVar23 = param_1 + 0x937;
  thunk_FUN_100652c08(ppuVar23);
  ppuVar24 = param_1 + 0x955;
  thunk_FUN_100652c08(ppuVar24);
  ppuVar25 = param_1 + 0x973;
  thunk_FUN_1001c0c34(ppuVar25,0);
  ppuVar26 = param_1 + 0xa22;
  FUN_1006421a8(ppuVar26);
  param_1[0xa22] = (undefined *)&PTR_thunk_FUN_10064221c_10144b7e8;
  ppuVar27 = param_1 + 0xa33;
  thunk_FUN_1001ae894(ppuVar27);
  thunk_FUN_10019a2d4(param_1 + 0xb72,0);
  thunk_FUN_1001b17d8();
  param_1[0x1cb5] = (undefined *)0x0;
  param_1[0x1cb4] = (undefined *)0x0;
  param_1[0x1cb3] = (undefined *)0x0;
  param_1[0x1cb7] = (undefined *)0xffffffff00000001;
  *(undefined4 *)(param_1 + 0x1cb8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xe5c4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar16,1);
  FUN_100642bd8(ppuVar16,ppuVar19,1);
  FUN_100642bd8(ppuVar16,ppuVar20,1);
  FUN_100642bd8(ppuVar16,ppuVar25,1);
  FUN_100642bd8(ppuVar16,ppuVar18,1);
  FUN_100642bd8(ppuVar18,ppuVar17,1);
  FUN_1005308f8(ppuVar17,ppuVar22,1);
  FUN_100642bd8(ppuVar22,ppuVar24,1);
  FUN_100642bd8(ppuVar22,param_1 + 0x6d4,1);
  FUN_100642bd8(ppuVar22,ppuVar23,1);
  FUN_100642bd8(ppuVar18,ppuVar21,1);
  FUN_100642bd8(ppuVar16,ppuVar26,1);
  FUN_100642bd8(ppuVar26,ppuVar27,1);
  FUN_100642bd8(ppuVar26,param_1 + 0xb78,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1565,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar1,1);
  FUN_100642bd8(ppuVar1,ppuVar3,1);
  FUN_10064f31c(ppuVar3,ppuVar4,1);
  FUN_10064f31c(ppuVar3,ppuVar5,1);
  FUN_10064f31c(ppuVar3,ppuVar6,1);
  FUN_10064f31c(ppuVar3,param_1 + 0xe6,1);
  FUN_10064f31c(ppuVar3,ppuVar7,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x1a7,1);
  FUN_10064f31c(ppuVar3,ppuVar8,1);
  FUN_10064f31c(ppuVar3,param_1 + 0x2bd,1);
  FUN_100642bd8(ppuVar1,ppuVar9,1);
  FUN_100655930(ppuVar9,ppuVar10,1);
  FUN_100655930(ppuVar9,ppuVar11,1);
  FUN_100655930(ppuVar9,ppuVar13,1);
  FUN_100655930(ppuVar9,ppuVar12,1);
  FUN_100655930(ppuVar9,ppuVar14,1);
  FUN_100655930(ppuVar9,ppuVar15,1);
  FUN_100652cac(ppuVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x1ec);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1ec) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar2);
  }
  FUN_1001b66dc(0x3fef684c,param_1 + 0x6d4,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x936) = 0;
  *(uint *)((long)param_1 + 0x3724) = *(uint *)((long)param_1 + 0x3724) | 4;
  FUN_100651594(ppuVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_WINS_LABEL",0);
  FUN_1006513c0(ppuVar4,uVar30);
  FUN_100651594(ppuVar5,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_101158614);
  FUN_1004e3120(&ppuStack_348,"0");
  FUN_1006513c0(ppuVar5,&ppuStack_348);
  if (ppuStack_340 != (void *)0x0) {
    operator_delete__(ppuStack_340);
  }
  FUN_100651594(ppuVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_GOLD_LABEL",0);
  FUN_1006513c0(ppuVar6,uVar30);
  FUN_10001549c(&ppuStack_348,"ice_icon_small");
  FUN_1001c435c(param_1 + 0xe6,&ppuStack_348);
  if ((long)uStack_338 < 0) {
    operator_delete(ppuStack_348);
  }
  FUN_100651594(ppuVar7,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_SILVER_LABEL",0);
  FUN_1006513c0(ppuVar7,uVar30);
  FUN_10001549c(&ppuStack_348,"glory_icon_small");
  FUN_1001c435c(param_1 + 0x1a7,&ppuStack_348);
  if ((long)uStack_338 < 0) {
    operator_delete(ppuStack_348);
  }
  FUN_100651594(ppuVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_101158614);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_OPAL_LABEL",0);
  FUN_1006513c0(ppuVar8,uVar30);
  FUN_10001549c(&ppuStack_348,"opal_icon_small");
  FUN_1001c435c(param_1 + 0x2bd,&ppuStack_348);
  if ((long)uStack_338 < 0) {
    operator_delete(ppuStack_348);
  }
  FUN_100652cac(ppuVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"icon_karma_L1");
  if ((*(float *)(param_1 + 0x38c) != 0.8) || (*(float *)((long)param_1 + 0x1c64) != 0.8)) {
    param_1[0x38c] = (undefined *)0x3f4ccccd3f4ccccd;
    FUN_1000200a0(ppuVar10);
  }
  FUN_100651594(ppuVar12,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_GOOD",0);
  FUN_1006513c0(ppuVar12,uVar30);
  if ((*(uint *)((long)param_1 + 0x1e7c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(ppuVar12);
  }
  FUN_100652cac(ppuVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x43fa0000,0x42c80000,ppuVar11);
  FUN_100651594(ppuVar14,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_BAN_TIMER",0);
  FUN_1001cd23c(ppuVar14,uVar30,0,0);
  uVar31 = *(uint *)((long)param_1 + 0x209c);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar14);
    uVar31 = *(uint *)((long)param_1 + 0x209c);
  }
  *(uint *)((long)param_1 + 0x209c) = uVar31 & 0xfffffffb;
  FUN_100652cac(ppuVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x44960000,0x42c80000,ppuVar13);
  FUN_100651594(ppuVar15,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar30 = FUN_1004e0150("MAIN_PROFILE_KARMA_BONUS_LABEL",0);
  FUN_1006513c0(ppuVar15,uVar30);
  uVar31 = *(uint *)((long)param_1 + 0x21f4);
  if ((uVar31 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2600;
    FUN_1000200a0(ppuVar15);
    uVar31 = *(uint *)((long)param_1 + 0x21f4);
  }
  *(uint *)((long)param_1 + 0x21f4) = uVar31 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) | 0x10;
  FUN_100530adc(ppuVar17,1,0);
  FUN_100652cac(ppuVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x552) != 0.48) || (*(float *)((long)param_1 + 0x2a94) != 0.38)) {
    param_1[0x552] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar19);
  }
  if ((*(float *)(param_1 + 0x551) != 6.5) || (*(float *)((long)param_1 + 0x2a8c) != 6.5)) {
    puVar32 = (undefined *)NEON_fmov(0x40d00000,4);
    param_1[0x551] = puVar32;
    FUN_1000200a0(ppuVar19);
  }
  uVar31 = *(uint *)((long)param_1 + 0x2ac4);
  if ((uVar31 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x2ac4) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x1980;
    FUN_1000200a0(ppuVar19);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2ac4) = *(uint *)((long)param_1 + 0x2ac4) & 0xfffffffb | uVar31;
  FUN_100652cac(ppuVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x570) != 0.48) || (*(float *)((long)param_1 + 0x2b84) != 0.38)) {
    param_1[0x570] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(float *)(param_1 + 0x56f) != 8.5) || (*(float *)((long)param_1 + 0x2b7c) != 8.5)) {
    puVar32 = (undefined *)NEON_fmov(0x41080000,4);
    param_1[0x56f] = puVar32;
    FUN_1000200a0(ppuVar20);
  }
  if ((*(uint *)((long)param_1 + 0x2bb4) & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xffff807f | 0x600;
    FUN_1000200a0(ppuVar20);
  }
  iVar28 = FUN_100131560();
  uVar31 = 0;
  if (iVar28 == 0) {
    uVar31 = 4;
  }
  *(uint *)((long)param_1 + 0x2bb4) = *(uint *)((long)param_1 + 0x2bb4) & 0xfffffffb | uVar31;
  if ((*(float *)(param_1 + 0x97c) != 2.0) || (*(float *)((long)param_1 + 0x4be4) != 2.0)) {
    param_1[0x97c] = (undefined *)0x4000000040000000;
    FUN_1000200a0(ppuVar25);
  }
  FUN_1002340fc(0x3f08f5c3,ppuVar21);
  *(uint *)((long)param_1 + 0x2ca4) = *(uint *)((long)param_1 + 0x2ca4) & 0xfffffffb;
  FUN_1002340fc(0x3f08f5c3,ppuVar27);
  FUN_10003c274(auStack_100);
  uStack_84 = uStack_84 & 0xffff | 0x3200000;
  uStack_c0 = 0;
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_TITLE",0);
  thunk_FUN_1004e439c(&ppuStack_348,uVar30);
  FUN_10003330c(&uStack_338,&DAT_101d91198);
  uStack_320 = 0;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&ppuStack_348);
  if (uStack_328 < 0) {
    operator_delete(uStack_338);
  }
  if (ppuStack_340 != (void *)0x0) {
    operator_delete__(ppuStack_340);
  }
  uVar30 = FUN_1004e0150("MENU_PROFILE_TUTORIAL_CHEST_DESCRIPTION",0);
  thunk_FUN_1004e439c(&ppuStack_348,uVar30);
  FUN_10003330c(&uStack_338,&DAT_101d91198);
  uStack_320 = 1;
  uStack_31c = 0x41200000;
  uStack_318 = 0;
  FUN_10003c2dc(auStack_100,&ppuStack_348);
  if (uStack_328._7_1_ < '\0') {
    operator_delete(uStack_338);
  }
  if (ppuStack_340 != (void *)0x0) {
    operator_delete__(ppuStack_340);
  }
  FUN_10001549c(&ppuStack_348,"tutorial_not_complete");
  FUN_10019aa88(param_1 + 0xb72,&ppuStack_348,auStack_100);
  if (uStack_338._7_1_ < '\0') {
    operator_delete(ppuStack_348);
  }
  FUN_100652cac(ppuVar24,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar31 = *(uint *)((long)param_1 + 0x4b2c);
  if ((uVar31 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x4b2c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x5900;
    FUN_1000200a0(ppuVar24);
  }
  FUN_100652cac(ppuVar23,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar31 = *(uint *)((long)param_1 + 0x4a3c);
  if ((uVar31 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x4a3c) = uVar31 & 0xffff8000 | uVar31 & 0x7f | 0x2c80;
    FUN_1000200a0(ppuVar23);
  }
  uStack_320 = FUN_100644a94("EVENT_SCROLLING_TO_PAGE");
  ppuStack_348 = (undefined **)FUN_100256b68;
  ppuVar1 = param_1 + 1;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  uStack_320 = FUN_100644a94("EVENT_SCROLLING_FINISHED");
  ppuStack_348 = (undefined **)FUN_100256b6c;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  uStack_320 = FUN_100644a94("UI::EVENT_MENU_OPEN_CHEST");
  ppuStack_348 = (undefined **)thunk_FUN_1002599f8;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(param_1 + 0x585,&ppuStack_348);
  thunk_FUN_100644cf4(ppuVar21,ppuVar17);
  uStack_320 = FUN_100644a94("UI::EVENT_OPEN_GOVERNMENTID");
  ppuStack_348 = (undefined **)thunk_FUN_100259c48;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  uVar30 = FUN_10032697c();
  ppuStack_340 = (undefined **)0x0;
  pcStack_330 = thunk_FUN_1002587e8;
  ppuStack_348 = param_1;
  uStack_338 = param_1;
  FUN_1000be5e4(uVar30,&ppuStack_348);
  uVar30 = FUN_100326d90();
  ppuStack_348 = (undefined **)0x0;
  pcStack_330 = (code *)0x100259e70;
  ppuStack_340 = param_1;
  uStack_338 = param_1;
  FUN_1002059f4(uVar30,&ppuStack_348);
  uStack_320 = DAT_101d23670;
  ppuStack_348 = (undefined **)FUN_100256ba0;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_338 = (undefined **)0x0;
  ppuStack_340 = param_1;
  FUN_10001554c(ppuVar1,&ppuStack_348);
  iVar28 = FUN_100131560();
  if (iVar28 != 0) {
    *(uint *)((long)param_1 + 0x684) = *(uint *)((long)param_1 + 0x684) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x7b4) = *(uint *)((long)param_1 + 0x7b4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xdbc) = *(uint *)((long)param_1 + 0xdbc) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x153c) = *(uint *)((long)param_1 + 0x153c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xfffffffb;
    FUN_1004f1580(&ppuStack_348);
    ppuStack_348 = &PTR_FUN_10145b860;
    uStack_318 = 0;
    uStack_314 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    pvStack_2f8 = (void *)0x0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2d0 = 0;
    FUN_100168aa8(auStack_2c8);
    uStack_1a0 = 0xffffffffffffffff;
    uStack_224 = 10;
    FUN_100256bac(param_1,&ppuStack_348,0);
    ppuStack_348 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_2c8);
    FUN_100156080(&uStack_2f0,1);
    if (pvStack_2f8 != (void *)0x0) {
      operator_delete__(pvStack_2f8);
      uStack_300 = 0;
      pvStack_2f8 = (void *)0x0;
    }
    FUN_100155f24(&uStack_310,1);
    FUN_100155eac(&uStack_320,1);
    FUN_1004f15a8(&ppuStack_348);
  }
  if (pvStack_c8 != (void *)0x0) {
    operator_delete__(pvStack_c8);
    uStack_d0 = 0;
    pvStack_c8 = (void *)0x0;
  }
  if (pvStack_d8 != (void *)0x0) {
    operator_delete__(pvStack_d8);
    uStack_e0 = 0;
    pvStack_d8 = (void *)0x0;
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
    uStack_f0 = 0;
    pvStack_e8 = (void *)0x0;
  }
  FUN_10003c480(auStack_100,1);
  return param_1;
}



/*
 * FUN_100257708
 * VA: 0x100257708 | Source: functions/10025.c:5977
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_100131560, FUN_10015d3ec, FUN_1001c102c, FUN_100258824, FUN_100258b18, FUN_100259514, FUN_100259be0, FUN_100259f00 (+3 more)
 * Callers: FUN_1002576c0, FUN_1002587a4, FUN_1002587e8, FUN_100259dd0, thunk_FUN_1002587e8
 */
void FUN_100257708(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  code *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_48;
  uint local_40 [2];
  void *local_38;
  
  lVar1 = FUN_10015d3ec();
  if (*(char *)(lVar1 + 0x567c) == '\0') {
    uVar2 = FUN_100327554();
    if ((uVar2 & 1) == 0) {
      FUN_100258824(param_1,1);
    }
    else {
      *(uint *)((long)param_1 + 0x4c1c) = *(uint *)((long)param_1 + 0x4c1c) & 0xfffffffb;
      FUN_1001c102c(param_1 + 0x973);
      *(uint *)((long)param_1 + 0x4b2c) = *(uint *)((long)param_1 + 0x4b2c) | 4;
      FUN_1003270b0(local_40,2);
      local_60 = FUN_100259be0;
      FUN_100259f00(local_38,(void *)((long)local_38 + (ulong)local_40[0] * 8),&local_60);
      uVar2 = (ulong)local_40[0];
      if (local_40[0] != 0) {
        uVar4 = 0;
        do {
          lVar1 = *(long *)((long)local_38 + uVar4 * 8);
          if (lVar1 != 0) {
            local_60 = (code *)0x0;
            uStack_58 = 0;
            local_48 = 0;
            local_50 = 0;
            puVar3 = (undefined4 *)FUN_100319d48(lVar1,"level");
            if (puVar3 != (undefined4 *)0x0) {
              local_48 = *puVar3;
              std::string::operator=((string *)&local_60,(string *)(lVar1 + 0x48));
              uVar2 = FUN_100131560();
              if ((uVar2 & 1) == 0) {
                FUN_100259514(param_1,&local_60);
              }
            }
            if (local_50 < 0) {
              operator_delete(local_60);
            }
            uVar2 = (ulong)local_40[0];
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      FUN_100258b18(param_1,1);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
    }
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  return;
}



/*
 * FUN_100257ca8
 * VA: 0x100257ca8 | Source: functions/10025.c:6099
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 5
 * Callees: FUN_1000200a0, FUN_10003d5bc, FUN_100126cb8, FUN_100131560, FUN_10015d3ec, FUN_10016c2f0, FUN_1001af2f0, FUN_10025940c (+6 more)
 * Callers: FUN_100257860, FUN_1002579a0, FUN_1002583c0
 */
void FUN_100257ca8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_a0 [2];
  undefined8 local_98;
  
  uVar18 = (**(code **)(*param_3 + 0x48))();
  FUN_100641518(local_a0,(ulong)local_a0 | 4);
  fVar14 = param_2;
  iVar5 = FUN_100126cb8(uVar18);
  FUN_100652e60(param_3 + 0x2d);
  param_2 = param_2 - fVar14;
  fVar14 = 4.0;
  if (iVar5 == 0) {
    fVar14 = 3.0;
  }
  fVar14 = (float)uVar18 / fVar14;
  plVar12 = param_3 + 0x454;
  bVar3 = false;
  if ((*(float *)((long)param_3 + 0x22e4) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0x45c)))) {
    bVar3 = *(float *)(param_3 + 0x45c) == 0.0;
  }
  if (!bVar3) {
    param_3[0x45c] = 0;
    FUN_1000200a0(plVar12);
  }
  local_98 = 0;
  (**(code **)(param_3[0x454] + 0x28))(plVar12,&local_98);
  FUN_10064e47c(uVar18,param_2,plVar12);
  lVar6 = FUN_10015d3ec();
  fVar23 = 2.0;
  if (iVar5 == 0) {
    fVar23 = 1.5;
  }
  fVar23 = fVar14 * fVar23;
  uVar21 = *(undefined4 *)(lVar6 + 0x55d0);
  fVar8 = 23.25;
  if (iVar5 == 0) {
    fVar8 = -15.5;
  }
  fVar15 = param_2 + -10.0;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x6cb) == fVar23) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x365c)) && !NAN(fVar15))) {
    bVar3 = *(float *)((long)param_3 + 0x365c) == fVar15;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x6cb) = fVar23;
    *(float *)((long)param_3 + 0x365c) = fVar15;
    FUN_1000200a0(param_3 + 0x6c3);
  }
  fVar15 = (float)NEON_ucvtf(uVar21);
  if ((*(float *)(param_3 + 0x6dc) != 0.0) || (*(float *)((long)param_3 + 0x36e4) != fVar8 + -15.5))
  {
    *(undefined4 *)(param_3 + 0x6dc) = 0;
    *(float *)((long)param_3 + 0x36e4) = fVar8 + -15.5;
    FUN_1000200a0(param_3 + 0x6d4);
  }
  local_98 = 0;
  (**(code **)(param_3[0x6d4] + 0x28))(param_3 + 0x6d4,&local_98);
  plVar1 = param_3 + 0x937;
  lVar6 = FUN_10015d3ec();
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x55d0));
  FUN_10064e47c(fVar14 * (fVar16 + -1.0) + -2.0,0x41f80000,plVar1);
  if ((*(float *)(param_3 + 0x93f) != 0.0) || (*(float *)((long)param_3 + 0x49fc) != fVar8 + -31.0))
  {
    *(float *)(param_3 + 0x93f) = 0.0;
    *(float *)((long)param_3 + 0x49fc) = fVar8 + -31.0;
    FUN_1000200a0(plVar1);
  }
  local_98 = 0;
  (**(code **)(param_3[0x937] + 0x28))(plVar1,&local_98);
  lVar6 = FUN_10015d3ec();
  *(uint *)((long)param_3 + 0x4a3c) =
       *(uint *)((long)param_3 + 0x4a3c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x4a3c) & 3 | (uint)(1 < *(uint *)(lVar6 + 0x55d0)) << 2;
  lVar6 = param_3[0x544];
  lVar7 = FUN_10015d3ec();
  fVar16 = (float)((int)lVar6 + ~*(uint *)(lVar7 + 0x55d0)) * fVar14 + -2.0;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  plVar1 = param_3 + 0x955;
  FUN_10064e47c(fVar16,0x40800000,plVar1);
  fVar15 = fVar14 * fVar15 + 4.0;
  fVar16 = fVar8 + 4.0;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x95d) == fVar15) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x4aec)) && !NAN(fVar16))) {
    bVar3 = *(float *)((long)param_3 + 0x4aec) == fVar16;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x95d) = fVar15;
    *(float *)((long)param_3 + 0x4aec) = fVar16;
    FUN_1000200a0(plVar1);
  }
  local_98 = 0x3f80000000000000;
  (**(code **)(param_3[0x955] + 0x28))(plVar1,&local_98);
  *(float *)((long)param_3 + 0x2974) = fVar14;
  *(float *)(param_3 + 0x52f) = param_2;
  FUN_10064e3cc(plVar12);
  fVar20 = fVar16;
  FUN_10064e3cc(plVar12);
  fVar15 = 0.525;
  if (iVar5 == 0) {
    fVar15 = 0.545;
  }
  iVar5 = FUN_100131560();
  if (iVar5 != 0) {
    *(uint *)((long)param_3 + 0x3724) = *(uint *)((long)param_3 + 0x3724) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x369c) = *(uint *)((long)param_3 + 0x369c) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x4a3c) = *(uint *)((long)param_3 + 0x4a3c) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x4b2c) = *(uint *)((long)param_3 + 0x4b2c) & 0xfffffffb;
  }
  fVar20 = fVar20 * fVar15;
  fVar15 = (float)uVar18 * 0.5;
  uVar10 = (ulong)*(uint *)(param_3 + 0x544);
  if (*(uint *)(param_3 + 0x544) != 0) {
    uVar13 = 0;
    fVar24 = fVar15 + -500.0;
    do {
      lVar6 = *(long *)(param_3[0x545] + uVar13 * 8);
      if (lVar6 != 0) {
        fVar22 = fVar15 + (float)(int)uVar13 * fVar14;
        lVar7 = FUN_10003d5bc(lVar6);
        fVar17 = *(float *)(lVar7 + 8) / local_a0[0];
        bVar3 = true;
        bVar4 = false;
        if (fVar17 <= fVar15 + 500.0) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar17) && !NAN(fVar24)) {
            bVar3 = fVar17 < fVar24;
            bVar4 = false;
          }
        }
        fVar2 = 0.0;
        if (bVar3 == bVar4) {
          fVar2 = ABS(fVar17 - fVar15) * -0.002 + 1.0;
        }
        fVar17 = fVar16 * 0.7575 + (fVar20 - fVar16 * 0.7575) * fVar2;
        if ((*(float *)(lVar6 + 0x40) != fVar22) || (*(float *)(lVar6 + 0x44) != fVar17)) {
          *(float *)(lVar6 + 0x40) = fVar22;
          *(float *)(lVar6 + 0x44) = fVar17;
          FUN_1000200a0(lVar6);
        }
        FUN_10025940c(fVar2,lVar6);
        uVar10 = (ulong)*(uint *)(param_3 + 0x544);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar10);
    if ((int)uVar10 == 0) {
      uVar18 = uVar18 & 0xffffffff;
    }
    else {
      uVar18 = uVar18 & 0xffffffff;
      if ((int)param_3[0x546] != 0) {
        uVar10 = 0;
        do {
          plVar12 = *(long **)(param_3[0x547] + uVar10 * 8);
          if (plVar12 != (long *)0x0) {
            lVar6 = FUN_10003d5bc(plVar12);
            fVar16 = *(float *)(lVar6 + 8) / local_a0[0];
            uVar19 = (**(code **)(*plVar12 + 0x48))(plVar12);
            bVar3 = true;
            bVar4 = false;
            if (fVar16 <= fVar15 + 500.0) {
              bVar3 = false;
              bVar4 = true;
              if (!NAN(fVar16) && !NAN(fVar24)) {
                bVar3 = fVar16 < fVar24;
                bVar4 = false;
              }
            }
            fVar17 = 31.0;
            if (bVar3 == bVar4) {
              fVar17 = ABS(fVar16 - fVar15) * -0.062000003 + 62.0;
            }
            FUN_10064e47c(uVar19,fVar17,plVar12);
            if (uVar10 == 0) {
              uVar9 = *(uint *)((long)plVar12 + 0x84);
LAB_10025817c:
              uVar11 = 0;
            }
            else {
              lVar6 = FUN_10015d3ec();
              uVar9 = *(uint *)((long)plVar12 + 0x84);
              if (uVar10 == *(uint *)(lVar6 + 0x55d0)) goto LAB_10025817c;
              uVar11 = 4;
            }
            *(uint *)((long)plVar12 + 0x84) = uVar9 & 0xfffffffb | uVar11;
            fVar16 = (fVar15 - fVar23) + (float)(int)uVar10 * fVar14;
            bVar3 = false;
            if ((*(float *)(plVar12 + 8) == fVar16) &&
               (bVar3 = false, !NAN(*(float *)((long)plVar12 + 0x44)) && !NAN(fVar8))) {
              bVar3 = *(float *)((long)plVar12 + 0x44) == fVar8;
            }
            if (!bVar3) {
              *(float *)(plVar12 + 8) = fVar16;
              *(float *)((long)plVar12 + 0x44) = fVar8;
              FUN_1000200a0(plVar12);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_3 + 0x546));
        uVar10 = (ulong)*(uint *)(param_3 + 0x544);
      }
    }
  }
  FUN_10053093c((float)uVar18 * (float)uVar10,param_2,param_3 + 0x488);
  if ((*(byte *)((long)param_3 + 0x2ca4) >> 2 & 1) != 0) {
    FUN_1001af2f0(param_3 + 0x584);
    bVar3 = false;
    if ((*(float *)(param_3 + 0x58c) == fVar15) &&
       (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x2c64)) && !NAN(fVar20))) {
      bVar3 = *(float *)((long)param_3 + 0x2c64) == fVar20;
    }
    if (!bVar3) {
      *(float *)(param_3 + 0x58c) = fVar15;
      *(float *)((long)param_3 + 0x2c64) = fVar20;
      FUN_1000200a0(param_3 + 0x584);
    }
  }
  bVar3 = false;
  if ((*(float *)(param_3 + 0x550) == fVar15) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x2a84)) && !NAN(fVar20))) {
    bVar3 = *(float *)((long)param_3 + 0x2a84) == fVar20;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x550) = fVar15;
    *(float *)((long)param_3 + 0x2a84) = fVar20;
    FUN_1000200a0(param_3 + 0x548);
  }
  fVar14 = *(float *)((long)param_3 + 0x2b74);
  bVar3 = false;
  if ((*(float *)(param_3 + 0x56e) == fVar15) && (bVar3 = false, !NAN(fVar14) && !NAN(fVar20))) {
    bVar3 = fVar14 == fVar20;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x56e) = fVar15;
    *(float *)((long)param_3 + 0x2b74) = fVar20;
    FUN_1000200a0(param_3 + 0x566);
  }
  plVar12 = param_3 + 0x973;
  fVar23 = (float)FUN_100642888(plVar12,0,0,1,1);
  fVar23 = fVar15 - fVar23 * 0.5;
  FUN_100642888(plVar12,0,0,1,1);
  fVar14 = fVar20 - fVar14 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x97b) == fVar23) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x4bdc)) && !NAN(fVar14))) {
    bVar3 = *(float *)((long)param_3 + 0x4bdc) == fVar14;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x97b) = fVar23;
    *(float *)((long)param_3 + 0x4bdc) = fVar14;
    FUN_1000200a0(plVar12);
  }
  FUN_1001af2f0(param_3 + 0xa33);
  if ((*(float *)(param_3 + 0xa3b) != fVar15) || (*(float *)((long)param_3 + 0x51dc) != fVar20)) {
    *(float *)(param_3 + 0xa3b) = fVar15;
    *(float *)((long)param_3 + 0x51dc) = fVar20;
    FUN_1000200a0(param_3 + 0xa33);
  }
  fVar14 = -0.5;
  fVar23 = DAT_101d236ac * -0.5;
  FUN_100642888(param_3 + 0xb78,0,0,1,1);
  param_2 = param_2 - fVar14;
  bVar3 = false;
  if ((*(float *)(param_3 + 0xb80) == fVar23) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x5c04)) && !NAN(param_2))) {
    bVar3 = *(float *)((long)param_3 + 0x5c04) == param_2;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0xb80) = fVar23;
    *(float *)((long)param_3 + 0x5c04) = param_2;
    FUN_1000200a0(param_3 + 0xb78);
  }
  lVar6 = FUN_10016c2f0();
  *(uint *)((long)param_3 + 0x2a1c) =
       *(uint *)((long)param_3 + 0x2a1c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x2a1c) & 3 | (uint)(*(int *)(lVar6 + 0x38) < 1) << 2;
  return;
}



/*
 * FUN_100258824
 * VA: 0x100258824 | Source: functions/10025.c:6545
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_10001549c, FUN_10002f320, FUN_100030cf0, FUN_10015d3ec, FUN_10015d3f8, FUN_1001c0e10, FUN_1001c102c, FUN_100257490
 * Callers: FUN_100257708, FUN_1002587e8, thunk_FUN_1002587e8
 */
void FUN_100258824(long param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_48 [2];
  char local_31;
  
  puVar1 = (uint *)(param_1 + 0x4b2c);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x4c1c) = *(uint *)(param_1 + 0x4c1c) & 0xfffffffb;
    FUN_1001c102c(param_1 + 0x4b98);
    *puVar1 = *puVar1 | 4;
  }
  else {
    iVar2 = FUN_10015d3f8();
    if ((iVar2 == 0) || (lVar3 = FUN_10015d3ec(), *(char *)(lVar3 + 0x567c) == '\0')) {
      FUN_1001c0e10(param_1 + 0x4b98);
      *(uint *)(param_1 + 0x4c1c) = *(uint *)(param_1 + 0x4c1c) | 4;
    }
    *puVar1 = *puVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x2ca4) = *(uint *)(param_1 + 0x2ca4) & 0xfffffffb;
    uVar4 = FUN_10002f320();
    FUN_10001549c(local_48,"layer_player_profile_prog");
    FUN_100030cf0(uVar4,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_100257490(param_1);
    std::string::operator=((string *)(param_1 + 0xe598),(string *)&DAT_101d91198);
    *(undefined4 *)(param_1 + 0xe5bc) = 0xffffffff;
  }
  return;
}



/*
 * FUN_10025c044
 * VA: 0x10025c044 | Source: functions/10025.c:9520
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 18, Vis masks: 5
 * Callees: FUN_10001549c, FUN_10001554c, FUN_10001617c, FUN_10001629c, FUN_1000200a0, FUN_10010b098, FUN_10010b1a8, FUN_100131228 (+60 more)
 */
long * FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_2f0;
  long *plStack_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  void *pvStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 auStack_270 [296];
  undefined8 local_148;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  local_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&local_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&local_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  local_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  local_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8._0_4_ = DAT_101dbd458;
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101dbd484);
  local_2f0 = (undefined **)FUN_10025cd4c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&local_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x21804) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21804) = *(uint *)((long)param_3 + 0x21804) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_3 + 0x42f9) != 0.8) || (*(float *)((long)param_3 + 0x217cc) != 0.8)) {
    param_3[0x42f9] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar10);
  }
  uVar21 = FUN_10016aa7c();
  FUN_1006513c0(plVar10,uVar21);
  FUN_1002eb970(plVar8,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_exit_app");
  FUN_1002ece5c(plVar8,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  uVar22 = *(uint *)((long)param_3 + 0x20b04);
  if ((uVar22 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20b04) = uVar22 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  FUN_1005300a8(0,plVar8);
  uVar23 = FUN_100652e60(param_3 + 0x4288);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar23);
  FUN_10064e48c(plVar8,&local_2f0);
  uVar23 = DAT_101d91884;
  local_2c8 = CONCAT44(local_2c8._4_4_,DAT_101d91884);
  local_2f0 = (undefined **)thunk_FUN_10025e0c4;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x4151,&local_2f0);
  iVar19 = FUN_100131228();
  uVar22 = 4;
  if (iVar19 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_3 + 0x21a1c) = *(uint *)((long)param_3 + 0x21a1c) & 0xfffffffb | uVar22;
  FUN_1002eb970(plVar12,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_2f0,"icon_video_capture");
  FUN_1002ece5c(plVar12,puVar18,&local_2f0,&DAT_101d91198);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  if ((*(uint *)((long)param_3 + 0x21b74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21b74) = *(uint *)((long)param_3 + 0x21b74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar12);
  }
  FUN_1005300a8(0,plVar12);
  uVar24 = FUN_100652e60(param_3 + 0x4496);
  local_2f0 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_10064e48c(plVar12,&local_2f0);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar23);
  local_2f0 = (undefined **)thunk_FUN_10025e16c;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x435f,&local_2f0);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x22744) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x22744) = *(uint *)((long)param_3 + 0x22744) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar13);
  }
  iVar19 = FUN_10013128c();
  pcVar17 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if (iVar19 == 0) {
    pcVar17 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar21 = FUN_1004e0150(pcVar17,0);
  FUN_1006513c0(plVar13,uVar21);
  if ((*(float *)(param_3 + 0x44e1) != 0.8) || (*(float *)((long)param_3 + 0x2270c) != 0.8)) {
    param_3[0x44e1] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar13);
  }
  *(uint *)((long)param_3 + 0x22874) = *(uint *)((long)param_3 + 0x22874) & 0xfffffffb;
  uVar21 = FUN_1004e0150("MENU_PROFILE_RECORD_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,0,uVar21,&DAT_101d91198,1,1);
  uVar21 = FUN_1004e0150("MENU_PROFILE_STREAM_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,1,uVar21,&DAT_101d91198,1,1);
  FUN_10018b614(plVar14,2);
  uVar24 = FUN_100644a94("EVENT_SELECT_CONTEXT_MENU_ITEM");
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar24);
  local_2f0 = (undefined **)FUN_10025cd68;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x44ff,&local_2f0);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_NA",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SA",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EA",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EU",0);
  FUN_10010b098(&local_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SEA",0);
  FUN_10010b098(&local_98,uVar21);
  FUN_10001549c(&local_2f0,"NA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"SA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"EA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"EU");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10001549c(&local_2f0,"SEA");
  FUN_10001617c(&local_a8,&local_2f0);
  if (local_2e0 < 0) {
    operator_delete(local_2f0);
  }
  FUN_10018d7d4(0x43160000,0x43c80000,0,0x3f800000,0x3f8ccccd,plVar15,&local_98,&local_a8,1,1,0);
  *(uint *)((long)param_3 + 0x23544) = *(uint *)((long)param_3 + 0x23544) | 4;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,plVar15);
  FUN_10018efac(plVar15,0);
  FUN_10018efa4(plVar15,0);
  *(uint *)((long)param_3 + 0x25044) = *(uint *)((long)param_3 + 0x25044) & 0xfffffffb;
  FUN_100651594(plVar16,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x25e74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x25e74) = *(uint *)((long)param_3 + 0x25e74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar16);
  }
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_REGION",0);
  FUN_1006513c0(plVar16,uVar21);
  FUN_10025cd70(param_3,plVar1,0,1);
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar23);
  local_2f0 = (undefined **)FUN_10025cfa0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x52,&local_2f0);
  *(uint *)((long)param_3 + 0x254) = *(uint *)((long)param_3 + 0x254) & 0xfffffffb;
  FUN_1004e18bc(&DAT_101d234d8,param_3,0x9d2c9b16,thunk_FUN_10025d244,0);
  iVar19 = FUN_100131560();
  if (iVar19 != 0) {
    FUN_1004f1580(&local_2f0);
    local_2f0 = &PTR_FUN_10145b860;
    uStack_2c0 = 0;
    local_2c8 = 0;
    uStack_2b0 = 0;
    local_2b8 = 0;
    pvStack_2a0 = (void *)0x0;
    local_2a8 = 0;
    uStack_290 = 0;
    local_298 = 0;
    uStack_280 = 0;
    local_288 = 0;
    local_278 = 0;
    FUN_100168aa8(auStack_270);
    local_148 = 0xffffffffffffffff;
    (**(code **)(*param_3 + 0x178))(param_3,&local_2f0);
    local_2f0 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_270);
    FUN_100156080(&local_298,1);
    if (pvStack_2a0 != (void *)0x0) {
      operator_delete__(pvStack_2a0);
      local_2a8 = 0;
      pvStack_2a0 = (void *)0x0;
    }
    FUN_100155f24(&local_2b8,1);
    FUN_100155eac(&local_2c8,1);
    FUN_1004f15a8(&local_2f0);
  }
  FUN_10001629c(&local_a8,1);
  FUN_10010b1a8(&local_98,1);
  FUN_10010b1a8(&local_88,1);
  return param_3;
}



/*
 * thunk_FUN_10025c044
 * VA: 0xthunk_10025c044 | Source: functions/10025.c:10071
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 18, Vis masks: 5
 * Callees: FUN_10001549c, FUN_10001554c, FUN_10001617c, FUN_10001629c, FUN_1000200a0, FUN_10010b098, FUN_10010b1a8, FUN_100131228 (+60 more)
 * Callers: FUN_100221ff0
 */
long * thunk_FUN_10025c044(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  void *pvStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [296];
  undefined8 uStack_148;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar20 = FUN_1006543ec();
  FUN_10014f4a0(lVar20 + 0x1a0);
  FUN_1004f0a20(param_3 + 0x37);
  *param_3 = (long)&PTR_thunk_FUN_10025cfb8_10147ade8;
  param_3[0x34] = (long)&PTR_FUN_10147af98;
  param_3[0x37] = (long)&PTR_FUN_10147b330;
  plVar1 = param_3 + 0x3a;
  thunk_FUN_1002268e4(plVar1);
  plVar2 = param_3 + 0xfc1;
  FUN_1006421a8(plVar2);
  param_3[0xfc1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_3 + 0xfd2;
  thunk_FUN_10064f204(plVar3);
  thunk_FUN_1001c81d8();
  plVar4 = param_3 + 0x1158;
  thunk_FUN_100255b9c();
  plVar5 = param_3 + 0x2e11;
  thunk_FUN_10025a800(plVar5,0);
  plVar6 = param_3 + 0x379b;
  thunk_FUN_10025a800(plVar6,0);
  plVar7 = param_3 + 0x4125;
  thunk_FUN_100655644(plVar7);
  plVar8 = param_3 + 0x4150;
  thunk_FUN_1002ecd94(plVar8,0);
  plVar9 = param_3 + 0x42ca;
  thunk_FUN_100650e64();
  plVar10 = param_3 + 0x42f0;
  thunk_FUN_100650e64();
  thunk_FUN_1001ceb64(param_3 + 0x4316,0);
  plVar11 = param_3 + 0x4333;
  thunk_FUN_100655644(plVar11);
  plVar12 = param_3 + 0x435e;
  thunk_FUN_1002ecd94(plVar12,0);
  plVar13 = param_3 + 0x44d8;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_3 + 0x44fe;
  thunk_FUN_10018afc8(0x3dcccccd,plVar14,0,3);
  plVar15 = param_3 + 0x4698;
  thunk_FUN_10018ceb0(plVar15);
  plVar16 = param_3 + 0x4bbe;
  thunk_FUN_100650e64();
  FUN_1004e313c(param_3 + 0x4be6);
  FUN_1004e313c(param_3 + 0x4be8);
  *(undefined1 *)(param_3 + 0x4bea) = 1;
  *(undefined4 *)((long)param_3 + 0x25f54) = 0;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_10064f31c(plVar3,plVar4,1);
  FUN_10064f31c(plVar3,plVar5,1);
  FUN_10064f31c(plVar3,plVar6,1);
  FUN_10064f31c(plVar3,param_3 + 0xffe,1);
  FUN_10064f31c(plVar3,plVar7,1);
  FUN_100655930(plVar7,plVar9,1);
  FUN_100655930(plVar7,plVar10,1);
  FUN_100655930(plVar7,plVar8,1);
  FUN_10064f31c(plVar3,plVar11,1);
  FUN_100655930(plVar11,plVar12,1);
  FUN_100655930(plVar11,plVar13,1);
  FUN_100655930(plVar11,plVar14,1);
  FUN_10064f31c(plVar3,plVar16,1);
  FUN_10064f31c(plVar3,plVar15,1);
  (**(code **)(*param_3 + 0x78))(param_3,param_3 + 0x4316,1);
  FUN_100654488(param_3,1);
  *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xfffffffb;
  param_3[0xffb] = (long)plVar4;
  param_3[0xffc] = (long)plVar5;
  param_3[0xffd] = (long)plVar6;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_10010b098(&uStack_88,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_10010b098(&uStack_88,uVar21);
  FUN_100269e20(0x3e99999a,plVar4,1,4,1);
  uStack_2c8._0_4_ = FUN_100644a94("UI::EVENT_RENAME_PLAYER_HANDLE");
  uStack_2f0 = (undefined **)FUN_10025cd14;
  plVar2 = param_3 + 0x1159;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8._0_4_ = DAT_101dbd458;
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,DAT_101dbd484);
  uStack_2f0 = (undefined **)FUN_10025cd4c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(plVar2,&uStack_2f0);
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x216d4) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x216d4) = *(uint *)((long)param_3 + 0x216d4) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar9);
  }
  uVar21 = FUN_1004e0150("MAIN_PROFILE_LOGOUT",0);
  FUN_1006513c0(plVar9,uVar21);
  if ((*(float *)(param_3 + 0x42d3) != 0.8) || (*(float *)((long)param_3 + 0x2169c) != 0.8)) {
    param_3[0x42d3] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar9);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x21804) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x21804) = *(uint *)((long)param_3 + 0x21804) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_3 + 0x42f9) != 0.8) || (*(float *)((long)param_3 + 0x217cc) != 0.8)) {
    param_3[0x42f9] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar10);
  }
  uVar21 = FUN_10016aa7c();
  FUN_1006513c0(plVar10,uVar21);
  FUN_1002eb970(plVar8,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&uStack_2f0,"icon_exit_app");
  FUN_1002ece5c(plVar8,puVar18,&uStack_2f0,&DAT_101d91198);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  uVar22 = *(uint *)((long)param_3 + 0x20b04);
  if ((uVar22 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x20b04) = uVar22 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  FUN_1005300a8(0,plVar8);
  uVar23 = FUN_100652e60(param_3 + 0x4288);
  uStack_2f0 = (undefined **)CONCAT44(param_2,uVar23);
  FUN_10064e48c(plVar8,&uStack_2f0);
  uVar23 = DAT_101d91884;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,DAT_101d91884);
  uStack_2f0 = (undefined **)thunk_FUN_10025e0c4;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x4151,&uStack_2f0);
  iVar19 = FUN_100131228();
  uVar22 = 4;
  if (iVar19 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_3 + 0x21a1c) = *(uint *)((long)param_3 + 0x21a1c) & 0xfffffffb | uVar22;
  FUN_1002eb970(plVar12,0);
  puVar18 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&uStack_2f0,"icon_video_capture");
  FUN_1002ece5c(plVar12,puVar18,&uStack_2f0,&DAT_101d91198);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  if ((*(uint *)((long)param_3 + 0x21b74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x21b74) = *(uint *)((long)param_3 + 0x21b74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar12);
  }
  FUN_1005300a8(0,plVar12);
  uVar24 = FUN_100652e60(param_3 + 0x4496);
  uStack_2f0 = (undefined **)CONCAT44(param_2,uVar24);
  FUN_10064e48c(plVar12,&uStack_2f0);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar23);
  uStack_2f0 = (undefined **)thunk_FUN_10025e16c;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x435f,&uStack_2f0);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x22744) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_3 + 0x22744) = *(uint *)((long)param_3 + 0x22744) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar13);
  }
  iVar19 = FUN_10013128c();
  pcVar17 = "MENU_PROFILE_RECORD_OR_STREAM_LABEL";
  if (iVar19 == 0) {
    pcVar17 = "MENU_PROFILE_RECORD_VIDEO_LABEL";
  }
  uVar21 = FUN_1004e0150(pcVar17,0);
  FUN_1006513c0(plVar13,uVar21);
  if ((*(float *)(param_3 + 0x44e1) != 0.8) || (*(float *)((long)param_3 + 0x2270c) != 0.8)) {
    param_3[0x44e1] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(plVar13);
  }
  *(uint *)((long)param_3 + 0x22874) = *(uint *)((long)param_3 + 0x22874) & 0xfffffffb;
  uVar21 = FUN_1004e0150("MENU_PROFILE_RECORD_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,0,uVar21,&DAT_101d91198,1,1);
  uVar21 = FUN_1004e0150("MENU_PROFILE_STREAM_OPTION_LABEL",0);
  FUN_10018b1ec(0x3dcccccd,plVar14,1,uVar21,&DAT_101d91198,1,1);
  FUN_10018b614(plVar14,2);
  uVar24 = FUN_100644a94("EVENT_SELECT_CONTEXT_MENU_ITEM");
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar24);
  uStack_2f0 = (undefined **)FUN_10025cd68;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x44ff,&uStack_2f0);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_NA",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SA",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EA",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_EU",0);
  FUN_10010b098(&uStack_98,uVar21);
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_SEA",0);
  FUN_10010b098(&uStack_98,uVar21);
  FUN_10001549c(&uStack_2f0,"NA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"SA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"EA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"EU");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10001549c(&uStack_2f0,"SEA");
  FUN_10001617c(&uStack_a8,&uStack_2f0);
  if (lStack_2e0 < 0) {
    operator_delete(uStack_2f0);
  }
  FUN_10018d7d4(0x43160000,0x43c80000,0,0x3f800000,0x3f8ccccd,plVar15,&uStack_98,&uStack_a8,1,1,0);
  *(uint *)((long)param_3 + 0x23544) = *(uint *)((long)param_3 + 0x23544) | 4;
  FUN_10018ef5c(0x3f19999a,0x3f4ccccd,plVar15);
  FUN_10018efac(plVar15,0);
  FUN_10018efa4(plVar15,0);
  *(uint *)((long)param_3 + 0x25044) = *(uint *)((long)param_3 + 0x25044) & 0xfffffffb;
  FUN_100651594(plVar16,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  if ((*(uint *)((long)param_3 + 0x25e74) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_3 + 0x25e74) = *(uint *)((long)param_3 + 0x25e74) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar16);
  }
  uVar21 = FUN_1004e0150("MENU_PROFILE_REGION_DROPDOWN_REGION",0);
  FUN_1006513c0(plVar16,uVar21);
  FUN_10025cd70(param_3,plVar1,0,1);
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar23);
  uStack_2f0 = (undefined **)FUN_10025cfa0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  lStack_2e0 = 0;
  plStack_2e8 = param_3;
  FUN_10001554c(param_3 + 0x52,&uStack_2f0);
  *(uint *)((long)param_3 + 0x254) = *(uint *)((long)param_3 + 0x254) & 0xfffffffb;
  FUN_1004e18bc(&DAT_101d234d8,param_3,0x9d2c9b16,thunk_FUN_10025d244,0);
  iVar19 = FUN_100131560();
  if (iVar19 != 0) {
    FUN_1004f1580(&uStack_2f0);
    uStack_2f0 = &PTR_FUN_10145b860;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    pvStack_2a0 = (void *)0x0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_278 = 0;
    FUN_100168aa8(auStack_270);
    uStack_148 = 0xffffffffffffffff;
    (**(code **)(*param_3 + 0x178))(param_3,&uStack_2f0);
    uStack_2f0 = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_270);
    FUN_100156080(&uStack_298,1);
    if (pvStack_2a0 != (void *)0x0) {
      operator_delete__(pvStack_2a0);
      uStack_2a8 = 0;
      pvStack_2a0 = (void *)0x0;
    }
    FUN_100155f24(&uStack_2b8,1);
    FUN_100155eac(&uStack_2c8,1);
    FUN_1004f15a8(&uStack_2f0);
  }
  FUN_10001629c(&uStack_a8,1);
  FUN_10010b1a8(&uStack_98,1);
  FUN_10010b1a8(&uStack_88,1);
  return param_3;
}



/*
 * FUN_1002903a8
 * VA: 0x1002903a8 | Source: functions/10029.c:231
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 4
 * Callees: FUN_1006423ec, FUN_100642bd8, FUN_100642d08
 * Callers: FUN_1001ebce0, FUN_1001f9230, thunk_FUN_1001ebce0, thunk_FUN_1001f9230
 */
void FUN_1002903a8(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = param_1 + 0xec0;
  uVar2 = FUN_100642d08(lVar1);
  if (param_2 == 0) {
    if ((uVar2 & 1) == 0) {
      FUN_100642bd8(param_1 + 0x270,lVar1,1);
    }
    iVar3 = FUN_100642d08(*(undefined8 *)(param_1 + 0x41b0));
    if (iVar3 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_1 + 0x41b0),1);
    }
    uVar2 = 4;
  }
  else {
    if (uVar2 != 0) {
      FUN_1006423ec(lVar1,1);
    }
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0xf44) = *(uint *)(param_1 + 0xf44) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x21c) = *(uint *)(param_1 + 0x21c) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x28fc) = *(uint *)(param_1 + 0x28fc) & 0xfffffffb | uVar2;
  return;
}



/*
 * FUN_1002a1e94
 * VA: 0x1002a1e94 | Source: functions/1002a.c:1496
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_1000200a0, FUN_100131560, FUN_10064e3cc, FUN_10064e47c, FUN_10064e48c, FUN_10064e5ec, FUN_10064e72c
 * Callers: FUN_1002a1e48, FUN_1002a2084, FUN_1002a20c0, FUN_1002a2154
 */
void FUN_1002a1e94(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_48;
  float fStack_44;
  
  lVar1 = param_3 + 200;
  local_48 = FUN_10064e3cc(lVar1);
  fStack_44 = (float)param_2;
  FUN_10064e48c(param_3 + 0x268,&local_48);
  lVar3 = param_3 + 0x1068;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_48 = FUN_10064e3cc(lVar3);
  fStack_44 = fVar9;
  FUN_10064e48c(param_3 + 0x1208,&local_48);
  iVar4 = FUN_100131560();
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = 4;
  }
  *(uint *)(param_3 + 0x10ec) = *(uint *)(param_3 + 0x10ec) & 0xfffffffb | uVar5;
  local_48 = FUN_10064e3cc(lVar1);
  fStack_44 = fVar9;
  FUN_10064e48c(param_3 + 0x358,&local_48);
  local_48 = FUN_10064e3cc(param_3 + 0x358);
  fStack_44 = fVar9;
  FUN_10064e48c(param_3 + 0x4f8,&local_48);
  lVar2 = param_3 + 0xf20;
  local_48 = FUN_10064e3cc(lVar3);
  fStack_44 = fVar9;
  FUN_10064e48c(lVar2,&local_48);
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  local_48 = FUN_10064e3cc(lVar1);
  fStack_44 = fVar9;
  FUN_10064e48c(uVar6,&local_48);
  lVar7 = *(long *)(param_3 + 0xc0);
  uVar8 = FUN_10064e3cc(lVar1);
  *(undefined4 *)(lVar7 + 0x1d8) = uVar8;
  (**(code **)(**(long **)(param_3 + 0xc0) + 0x150))();
  lVar1 = param_3 + 0x13e8;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  FUN_10064e5ec(0x41f00000,fVar9 * -0.5,param_3 + 0x12f8,5,lVar1,7);
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  FUN_10064e72c(0,uVar6,0,lVar2,2);
  FUN_10064e72c(0,uVar6,3,lVar2,3);
  if (*(float *)(param_3 + 0x53c) != 0.0) {
    *(undefined4 *)(param_3 + 0x53c) = 0;
    FUN_1000200a0(param_3 + 0x4f8);
  }
  return;
}



/*
 * FUN_1002af930
 * VA: 0x1002af930 | Source: functions/1002a.c:11849
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_100131560, FUN_10064e3cc, FUN_10064e47c, FUN_10064e5ec, FUN_10064e72c
 * Callers: FUN_1002af448, FUN_1002afc58, thunk_FUN_1002af930
 */
void FUN_1002af930(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  
  uVar6 = (**(code **)(*param_3 + 0x48))();
  FUN_10064e47c(param_3 + 0x1b);
  plVar2 = param_3 + 0x246;
  FUN_10064e47c(uVar6,0x43160000,plVar2);
  param_2 = param_2 + -150.0;
  FUN_10064e47c(uVar6,param_2,param_3 + 0x228);
  plVar1 = param_3 + 0x55;
  FUN_10064e47c(uVar6,param_2,plVar1);
  uVar6 = FUN_10064e3cc(plVar1);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar6,param_2 * 0.2,param_3 + 0x20a);
  FUN_10064e5ec(0,0,plVar2,0,param_3,0);
  FUN_10064e5ec(0,0,param_3 + 0x228,0,plVar2,3);
  FUN_10064e5ec(0,0,plVar1,0,plVar2,3);
  plVar3 = param_3 + 0x25d;
  fVar5 = (float)FUN_10064e3cc(plVar2);
  FUN_10064e5ec(fVar5 * 0.25,0,plVar3,7,plVar2,7);
  plVar2 = param_3 + 0x32a;
  FUN_10064e72c(0,plVar2,3,plVar3,1);
  FUN_10064e72c(0,plVar2,5,plVar3,5);
  plVar3 = param_3 + 0x3f7;
  FUN_10064e72c(0,plVar3,3,plVar2,1);
  FUN_10064e72c(0,plVar3,5,plVar2,5);
  FUN_10064e72c(0,param_3 + 0x4c4,3,plVar3,1);
  FUN_10064e72c(0,param_3 + 0x4c4,5,plVar3,5);
  FUN_10064e5ec(0,0,param_3 + 0x20a,6,plVar1,6);
  iVar4 = FUN_100131560();
  if (iVar4 != 0) {
    *(uint *)((long)param_3 + 0x12b4) = *(uint *)((long)param_3 + 0x12b4) & 0xfffffffb;
  }
  return;
}



/*
 * thunk_FUN_1002af930
 * VA: 0xthunk_1002af930 | Source: functions/1002a.c:11839
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1002af930
 */
void thunk_FUN_1002af930(void)

{
  FUN_1002af930();
  return;
}



/*
 * FUN_1002da05c
 * VA: 0x1002da05c | Source: functions/1002d.c:7015
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_1000200a0, FUN_100131560, FUN_1002d94f4, FUN_100532138, FUN_10064e3cc, FUN_10064e47c, FUN_10064e48c, FUN_10064e5ec (+1 more)
 */
void FUN_1002da05c(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68;
  float fStack_64;
  
  lVar1 = param_3 + 0x158;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = (float)param_2;
  FUN_10064e48c(param_3 + 0x2f8,&local_68);
  lVar3 = param_3 + 0x16d0;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x1870,&local_68);
  iVar5 = FUN_100131560();
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = 4;
  }
  *(uint *)(param_3 + 0x1754) = *(uint *)(param_3 + 0x1754) & 0xfffffffb | uVar6;
  lVar2 = param_3 + 1000;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar2,&local_68);
  lVar4 = param_3 + 0x1588;
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar4,&local_68);
  local_68 = FUN_10064e3cc(lVar2);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x588,&local_68);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_10064e3cc(lVar1);
  FUN_1002d94f4(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x150))();
  lVar1 = param_3 + 0x1a50;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_10064e5ec(0x41a00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_10064e72c(0,uVar7,0,lVar4,2);
  FUN_10064e72c(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_10064e3cc(lVar2);
  fVar8 = fVar9;
  FUN_10064e3cc(lVar4);
  fVar8 = (fVar9 + -80.0) - fVar8;
  FUN_10064e47c(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_100532138(lVar1);
  FUN_10064e3cc(lVar4);
  FUN_10064e5ec(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_1000200a0(param_3 + 0x588);
  }
  return;
}



/*
 * FUN_1002da328
 * VA: 0x1002da328 | Source: functions/1002d.c:7110
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 4
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100131560, FUN_1001816d4, FUN_10018187c, FUN_100181c18, FUN_100181c68, FUN_100181c78 (+45 more)
 */
long * FUN_1002da328(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined4 uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  puVar27 = (undefined8 *)FUN_10064f204();
  puVar27[0x29] = 0;
  *puVar27 = &PTR_thunk_FUN_1002dc608_101489108;
  puVar27 = puVar27 + 0x2a;
  thunk_FUN_100651ebc();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0xae;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0xd9;
  FUN_1006421a8();
  param_1[0xd9] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xea;
  thunk_FUN_100183160(plVar4,0);
  plVar6 = param_1 + 0x576;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x5a1;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x60b;
  thunk_FUN_1006543ec(plVar8);
  plVar9 = param_1 + 0x63f;
  FUN_1006421a8(plVar9);
  param_1[0x63f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x650;
  thunk_FUN_100181304(plVar10,0);
  plVar11 = param_1 + 0x907;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x92d;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x94b;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x969;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x98f;
  thunk_FUN_100182684(plVar15,0);
  plVar16 = param_1 + 0xd6b;
  thunk_FUN_100655644(plVar16);
  plVar17 = param_1 + 0xd96;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xdbc;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xdda;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xe00;
  thunk_FUN_100655644();
  plVar20 = param_1 + 0xe2b;
  thunk_FUN_100652c08();
  plVar21 = param_1 + 0xe49;
  thunk_FUN_100655644(plVar21);
  plVar22 = param_1 + 0xe74;
  FUN_1001aa1d4();
  plVar23 = param_1 + 0xeb0;
  thunk_FUN_10064f204(plVar23);
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0xef7;
  thunk_FUN_100650e64();
  FUN_1002bdcb4();
  thunk_FUN_100652c08();
  *(undefined8 *)((long)param_1 + 0x8047) = 0;
  param_1[0x1008] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar10,1);
  FUN_100655930(plVar2,plVar11,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,param_1 + 0x5c7,1);
  FUN_100655930(plVar6,param_1 + 0x5e5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar9,plVar13,1);
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_100642bd8(plVar9,plVar14,1);
  FUN_100642bd8(plVar9,plVar15,1);
  FUN_100642bd8(plVar9,plVar16,1);
  FUN_100655930(plVar16,plVar17,1);
  FUN_100655930(plVar16,plVar18,1);
  FUN_100655930(plVar16,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar20,1);
  FUN_100655930(plVar5,plVar21,1);
  FUN_100655930(plVar21,plVar23,1);
  FUN_10064f31c(plVar23,plVar22,1);
  FUN_100655930(plVar21,plVar24,1);
  FUN_100655930(plVar5,param_1 + 0xfea,1);
  FUN_100642bd8(param_1 + 0xfea,param_1 + 0xf1d,1);
  FUN_100652cac(param_1 + 0x54,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100651f8c(puVar27,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652444(puVar27,"tile_corner_gradient",0,0,0,"tile_edge_gradient_hor",0,0,0,
                "tile_edge_gradient_vert",0,0);
  if ((*(uint *)((long)param_1 + 0x1d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar27);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x504);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x504) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BUTTON",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x447a0000,plVar10,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1002db62c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x651,&local_a8);
  FUN_1001b4c0c(plVar10,1);
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  FUN_1006513c0(plVar11,uVar28);
  *(uint *)((long)param_1 + 0x48bc) = *(uint *)((long)param_1 + 0x48bc) & 0xfffffffb;
  FUN_100181c18(0x42200000,0x42c80000,0x44228000,plVar4);
  uVar25 = DAT_101d918e8;
  local_80 = DAT_101d918e8;
  local_a8 = FUN_1002daee4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0xeb,&local_a8);
  FUN_1001b495c(0xbf800000,plVar4);
  FUN_100183500(plVar4,"ice_icon_small");
  FUN_100651038(param_1 + 0x1cd,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(param_1 + 0x1cd,1);
  FUN_100181c78(0x4019999a,plVar4);
  FUN_10018187c(plVar4,1);
  *(uint *)((long)param_1 + 0x2c34) = *(uint *)((long)param_1 + 0x2c34) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar7,uVar28);
  FUN_100652ca4(param_1 + 0x5c7,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651038(param_1 + 0x5e5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar8,1);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x49ec);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x49ec) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar12);
    uVar29 = *(uint *)((long)param_1 + 0x49ec);
  }
  *(uint *)((long)param_1 + 0x49ec) = uVar29 | 0x10;
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x966) = *(byte *)(param_1 + 0x966) | 2;
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4adc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4adc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651700(plVar14,3);
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_plus");
  FUN_10064e47c(0x42c80000,0x42c80000,plVar20);
  FUN_100652cac(param_1 + 0xed9,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x43480000,0x43480000,param_1 + 0xed9);
  uVar28 = FUN_100345b94();
  uVar28 = FUN_10034c450(uVar28,"*PlayerEssenceEffects*");
  FUN_1001aa350(plVar22,uVar28);
  FUN_10064e47c(0x43480000,0x43480000,plVar22);
  local_a8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe74] + 0x28))(plVar22,&local_a8);
  if ((*(float *)(param_1 + 0xe7d) != 1.5) || (*(float *)((long)param_1 + 0x73ec) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0xe7d] = lVar30;
    FUN_1000200a0(plVar22);
  }
  FUN_1001aaebc(plVar22);
  FUN_1001aae30(plVar22,"ESSENCE_ICON");
  FUN_10064e47c(0x43480000,0x43480000,plVar23);
  FUN_100651594(plVar24,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1004e3120(&local_a8,"1300");
  FUN_1006513c0(plVar24,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  FUN_100655990(plVar5,0);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42c80000,0x42c80000,0x447a0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_80 = uVar25;
  local_a8 = FUN_1002daef4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x990,&local_a8);
  FUN_100651038(param_1 + 0xa72,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100181c68(0x430c0000,plVar15);
  FUN_1001b495c(0xbf800000,plVar15);
  FUN_100651038(plVar17,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar17,uVar28);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x42480000,0x42480000,plVar18);
  FUN_100651038(plVar19,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1004e3120(&local_a8,"0");
  FUN_1006513c0(plVar19,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) | 0x10;
  local_80 = DAT_101dbd48c;
  local_a8 = thunk_FUN_1002db898;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&local_a8);
  local_80 = DAT_101dbd460;
  local_a8 = thunk_FUN_1002db898;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&local_a8);
  *(uint *)((long)param_1 + 0x327c) = *(uint *)((long)param_1 + 0x327c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7084) = *(uint *)((long)param_1 + 0x7084) & 0xfffffffb;
  iVar26 = FUN_100131560();
  if (iVar26 != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb;
  }
  return param_1;
}



/*
 * thunk_FUN_1002da328
 * VA: 0xthunk_1002da328 | Source: functions/1002d.c:7484
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: UI strings: 5, Vis masks: 4
 * Callees: FUN_10001554c, FUN_1000200a0, FUN_100131560, FUN_1001816d4, FUN_10018187c, FUN_100181c18, FUN_100181c68, FUN_100181c78 (+45 more)
 * Callers: FUN_100209c74, thunk_FUN_100209c74
 */
long * thunk_FUN_1002da328(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined4 uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  puVar27 = (undefined8 *)FUN_10064f204();
  puVar27[0x29] = 0;
  *puVar27 = &PTR_thunk_FUN_1002dc608_101489108;
  puVar27 = puVar27 + 0x2a;
  thunk_FUN_100651ebc();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x90;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0xae;
  thunk_FUN_100655644(plVar2);
  plVar3 = param_1 + 0xd9;
  FUN_1006421a8();
  param_1[0xd9] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xea;
  thunk_FUN_100183160(plVar4,0);
  plVar6 = param_1 + 0x576;
  thunk_FUN_100655644(plVar6);
  plVar7 = param_1 + 0x5a1;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x60b;
  thunk_FUN_1006543ec(plVar8);
  plVar9 = param_1 + 0x63f;
  FUN_1006421a8(plVar9);
  param_1[0x63f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar10 = param_1 + 0x650;
  thunk_FUN_100181304(plVar10,0);
  plVar11 = param_1 + 0x907;
  thunk_FUN_100650e64(plVar11);
  plVar12 = param_1 + 0x92d;
  thunk_FUN_100652c08();
  plVar13 = param_1 + 0x94b;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x969;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x98f;
  thunk_FUN_100182684(plVar15,0);
  plVar16 = param_1 + 0xd6b;
  thunk_FUN_100655644(plVar16);
  plVar17 = param_1 + 0xd96;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xdbc;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xdda;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0xe00;
  thunk_FUN_100655644();
  plVar20 = param_1 + 0xe2b;
  thunk_FUN_100652c08();
  plVar21 = param_1 + 0xe49;
  thunk_FUN_100655644(plVar21);
  plVar22 = param_1 + 0xe74;
  FUN_1001aa1d4();
  plVar23 = param_1 + 0xeb0;
  thunk_FUN_10064f204(plVar23);
  thunk_FUN_100652c08();
  plVar24 = param_1 + 0xef7;
  thunk_FUN_100650e64();
  FUN_1002bdcb4();
  thunk_FUN_100652c08();
  *(undefined8 *)((long)param_1 + 0x8047) = 0;
  param_1[0x1008] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100655930(plVar2,plVar10,1);
  FUN_100655930(plVar2,plVar11,1);
  FUN_100655930(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100655930(plVar6,plVar7,1);
  FUN_100655930(plVar6,param_1 + 0x5c7,1);
  FUN_100655930(plVar6,param_1 + 0x5e5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar9,plVar13,1);
  FUN_100642bd8(plVar9,plVar12,1);
  FUN_100642bd8(plVar9,plVar14,1);
  FUN_100642bd8(plVar9,plVar15,1);
  FUN_100642bd8(plVar9,plVar16,1);
  FUN_100655930(plVar16,plVar17,1);
  FUN_100655930(plVar16,plVar18,1);
  FUN_100655930(plVar16,plVar19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100655930(plVar5,plVar20,1);
  FUN_100655930(plVar5,plVar21,1);
  FUN_100655930(plVar21,plVar23,1);
  FUN_10064f31c(plVar23,plVar22,1);
  FUN_100655930(plVar21,plVar24,1);
  FUN_100655930(plVar5,param_1 + 0xfea,1);
  FUN_100642bd8(param_1 + 0xfea,param_1 + 0xf1d,1);
  FUN_100652cac(param_1 + 0x54,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100651f8c(puVar27,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100652444(puVar27,"tile_corner_gradient",0,0,0,"tile_edge_gradient_hor",0,0,0,
                "tile_edge_gradient_vert",0,0);
  if ((*(uint *)((long)param_1 + 0x1d4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar27);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x504);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x504) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BUTTON",0);
  FUN_1001816d4(0x42200000,0x42c80000,0x447a0000,plVar10,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1002db62c;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x651,&pcStack_a8);
  FUN_1001b4c0c(plVar10,1);
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_BLUEPRINT_MISSING",0);
  FUN_1006513c0(plVar11,uVar28);
  *(uint *)((long)param_1 + 0x48bc) = *(uint *)((long)param_1 + 0x48bc) & 0xfffffffb;
  FUN_100181c18(0x42200000,0x42c80000,0x44228000,plVar4);
  uVar25 = DAT_101d918e8;
  uStack_80 = DAT_101d918e8;
  pcStack_a8 = FUN_1002daee4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xeb,&pcStack_a8);
  FUN_1001b495c(0xbf800000,plVar4);
  FUN_100183500(plVar4,"ice_icon_small");
  FUN_100651038(param_1 + 0x1cd,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(param_1 + 0x1cd,1);
  FUN_100181c78(0x4019999a,plVar4);
  FUN_10018187c(plVar4,1);
  *(uint *)((long)param_1 + 0x2c34) = *(uint *)((long)param_1 + 0x2c34) & 0xffffffbf;
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar7,uVar28);
  FUN_100652ca4(param_1 + 0x5c7,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651038(param_1 + 0x5e5,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar8,1);
  FUN_100652cac(plVar12,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar12,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x49ec);
  if ((uVar29 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x49ec) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar12);
    uVar29 = *(uint *)((long)param_1 + 0x49ec);
  }
  *(uint *)((long)param_1 + 0x49ec) = uVar29 | 0x10;
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x966) = *(byte *)(param_1 + 0x966) | 2;
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4adc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4adc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_100651700(plVar14,3);
  FUN_100652cac(plVar20,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_plus");
  FUN_10064e47c(0x42c80000,0x42c80000,plVar20);
  FUN_100652cac(param_1 + 0xed9,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x43480000,0x43480000,param_1 + 0xed9);
  uVar28 = FUN_100345b94();
  uVar28 = FUN_10034c450(uVar28,"*PlayerEssenceEffects*");
  FUN_1001aa350(plVar22,uVar28);
  FUN_10064e47c(0x43480000,0x43480000,plVar22);
  pcStack_a8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xe74] + 0x28))(plVar22,&pcStack_a8);
  if ((*(float *)(param_1 + 0xe7d) != 1.5) || (*(float *)((long)param_1 + 0x73ec) != 1.5)) {
    lVar30 = NEON_fmov(0x3fc00000,4);
    param_1[0xe7d] = lVar30;
    FUN_1000200a0(plVar22);
  }
  FUN_1001aaebc(plVar22);
  FUN_1001aae30(plVar22,"ESSENCE_ICON");
  FUN_10064e47c(0x43480000,0x43480000,plVar23);
  FUN_100651594(plVar24,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1004e3120(&pcStack_a8,"1300");
  FUN_1006513c0(plVar24,&pcStack_a8);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  FUN_100655990(plVar5,0);
  uVar28 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42c80000,0x42c80000,0x447a0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_80 = uVar25;
  pcStack_a8 = FUN_1002daef4;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x990,&pcStack_a8);
  FUN_100651038(param_1 + 0xa72,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100181c68(0x430c0000,plVar15);
  FUN_1001b495c(0xbf800000,plVar15);
  FUN_100651038(plVar17,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar28 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar17,uVar28);
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  FUN_10064e47c(0x42480000,0x42480000,plVar18);
  FUN_100651038(plVar19,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1004e3120(&pcStack_a8,"0");
  FUN_1006513c0(plVar19,&pcStack_a8);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) | 0x10;
  uStack_80 = DAT_101dbd48c;
  pcStack_a8 = thunk_FUN_1002db898;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&pcStack_a8);
  uStack_80 = DAT_101dbd460;
  pcStack_a8 = thunk_FUN_1002db898;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x73,&pcStack_a8);
  *(uint *)((long)param_1 + 0x327c) = *(uint *)((long)param_1 + 0x327c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x7084) = *(uint *)((long)param_1 + 0x7084) & 0xfffffffb;
  iVar26 = FUN_100131560();
  if (iVar26 != 0) {
    *(uint *)((long)param_1 + 0x5f4) = *(uint *)((long)param_1 + 0x5f4) & 0xfffffffb;
  }
  return param_1;
}



/*
 * FUN_1002db4bc
 * VA: 0x1002db4bc | Source: functions/1002d.c:7931
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_100131560, FUN_1001b4c0c
 * Callers: FUN_10020a080
 */
void FUN_1002db4bc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = 4;
  if ((int)param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)((long)param_1 + 0x7d4) = *(uint *)((long)param_1 + 0x7d4) & 0xfffffffb | uVar2;
  FUN_1001b4c0c(param_1 + 0xea,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001002db520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}



/*
 * FUN_1002e647c
 * VA: 0x1002e647c | Source: functions/1002e.c:4727
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 3
 * Callees: FUN_100131560
 * Callers: FUN_1002e6470, FUN_1002e64f8
 */
void FUN_1002e647c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100131560();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x4998) != '\0')) {
    uVar1 = (uint)(*(char *)(param_1 + 0x4999) == '\0') << 2;
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xed4) = *(uint *)(param_1 + 0xed4) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x1004) = *(uint *)(param_1 + 0x1004) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x3464) = *(uint *)(param_1 + 0x3464) & 0xfffffffb | uVar1;
  return;
}



/*
 * FUN_1002e76d8
 * VA: 0x1002e76d8 | Source: functions/1002e.c:5711
 * CE-gate: YES (1x) | Guest-gate: NO
 * Indicators: Vis masks: 1
 * Callees: FUN_1000200a0, FUN_100131560, FUN_1002e69b4, FUN_100532138, FUN_10064e3cc, FUN_10064e47c, FUN_10064e48c, FUN_10064e5ec (+1 more)
 */
void FUN_1002e76d8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68;
  float fStack_64;
  
  lVar1 = param_3 + 0x158;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = (float)param_2;
  FUN_10064e48c(param_3 + 0x2f8,&local_68);
  lVar3 = param_3 + 0x16d0;
  FUN_10064e3cc(lVar1);
  fVar9 = 190.0;
  FUN_10064e47c(lVar3);
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x1870,&local_68);
  iVar5 = FUN_100131560();
  uVar6 = 0;
  if (iVar5 == 0) {
    uVar6 = 4;
  }
  *(uint *)(param_3 + 0x1754) = *(uint *)(param_3 + 0x1754) & 0xfffffffb | uVar6;
  lVar2 = param_3 + 1000;
  local_68 = FUN_10064e3cc(lVar1);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar2,&local_68);
  local_68 = FUN_10064e3cc(lVar2);
  fStack_64 = fVar9;
  FUN_10064e48c(param_3 + 0x588,&local_68);
  lVar4 = param_3 + 0x1588;
  local_68 = FUN_10064e3cc(lVar3);
  fStack_64 = fVar9;
  FUN_10064e48c(lVar4,&local_68);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_10064e3cc(lVar1);
  FUN_1002e69b4(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x148))();
  lVar1 = param_3 + 0x1a50;
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_10064e5ec(0,fVar9,lVar1,8,lVar3,8);
  FUN_10064e3cc(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_10064e5ec(0x41f00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_10064e72c(0,uVar7,0,lVar4,2);
  FUN_10064e72c(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_10064e3cc(lVar2);
  fVar8 = fVar9;
  FUN_10064e3cc(lVar4);
  fVar8 = (fVar9 + -80.0) - fVar8;
  FUN_10064e47c(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_100532138(lVar1);
  FUN_10064e3cc(lVar4);
  FUN_10064e5ec(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_1000200a0(param_3 + 0x588);
  }
  return;
}



/*
 * FUN_1002eb970
 * VA: 0x1002eb970 | Source: functions/1002e.c:8744
 * CE-gate: NO | Guest-gate: NO
 * Indicators: Vis masks: 5
 * Callees: FUN_10064e48c, FUN_10064e4dc, FUN_100651f94, FUN_100652444, FUN_1006524f8, FUN_1006525c4, FUN_100652cdc, FUN_100653144
 * Callers: FUN_1001ab780, FUN_1001b2b88, FUN_1001d3bdc, FUN_1001d3c58, FUN_1001d3d2c, FUN_1001d3e60, FUN_1001d4b60, FUN_1001d57d8 (+20 more)
 */
void FUN_1002eb970(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_3 + 0x117) = param_4;
  switch(param_4) {
  case 0:
    *(uint *)((long)param_3 + 0x6b4) = *(uint *)((long)param_3 + 0x6b4) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x7a4) = *(uint *)((long)param_3 + 0x7a4) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x414) = *(uint *)((long)param_3 + 0x414) & 0xfffffffb;
    if ((long *)param_3[0x102] != (long *)0x0) {
      local_28 = (**(code **)(*(long *)param_3[0x102] + 0x48))();
      uStack_24 = param_2;
      FUN_10064e48c(param_3,&local_28);
    }
    goto switchD_1002eb9a8_default;
  case 1:
    FUN_100652444(param_3 + 0x72,"white_background",0,0,0,"white_background",0,0,0,
                  "white_background",0,0);
    FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_3 + 0x72);
    goto LAB_1002ebb08;
  case 2:
    FUN_100651f94(param_3 + 0x72,"button_lively_generic_top_left",0,0,0,
                  "button_lively_generic_top_middle",0,0,0,"button_lively_generic_top_left",1,
                  "button_lively_generic_middle_left",0,0,0,"button_lively_generic_middle_left",1,
                  "button_lively_generic_bottom_left",0,"button_lively_generic_bottom_middle",0,
                  "button_lively_generic_bottom_left",1);
LAB_1002ebb08:
    *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x414) = *(uint *)((long)param_3 + 0x414) | 4;
    goto switchD_1002eb9a8_default;
  case 3:
    pcVar2 = "button_decorative_fill_purchase";
    break;
  case 4:
    pcVar2 = "button_decorative_fill_upgrade";
    break;
  case 5:
    pcVar2 = "button_lively_generic_tint_bg";
    break;
  default:
    goto switchD_1002eb9a8_default;
  }
  FUN_100652cdc(param_3 + 0xc6,pcVar2);
  FUN_100651f94(param_3 + 0x72,"button_lively_top_left",0,0,0,"button_lively_top_middle",0,0,0,
                "button_lively_top_left",1,"button_lively_middle_left",0,0,0,
                "button_lively_middle_left",1,"button_lively_bottom_left",0,
                "button_lively_bottom_middle",0,"button_lively_bottom_left",1);
  *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) | 4;
switchD_1002eb9a8_default:
  uVar1 = FUN_100653144(param_3 + 0xc6);
  FUN_10064e4dc(param_3,uVar1);
  FUN_1006524f8(param_3 + 0x48,param_3 + 0x72);
  (**(code **)(*param_3 + 0x168))(param_3);
  (**(code **)(*param_3 + 0x160))(param_3);
  return;
}



/*
 * FUN_10030f984
 * VA: 0x10030f984 | Source: functions/named.c:27521
 * CE-gate: YES (2x) | Guest-gate: NO
 * Indicators: UI strings: 12
 * Callees: FUN_1000153b4, FUN_10001549c, FUN_10003330c, FUN_1000f750c, FUN_1000f78dc, FUN_1000f7ab0, FUN_100103d54, FUN_100103ddc (+21 more)
 * Callers: FUN_10030e680
 */
/* WARNING: Removing unreachable block (ram,0x000100310074) */
/* WARNING: Removing unreachable block (ram,0x000100310084) */

void FUN_10030f984(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
  undefined1 extraout_b0_10;
  undefined1 extraout_b0_11;
  undefined1 extraout_b0_12;
  undefined1 extraout_b0_13;
  undefined1 extraout_b0_14;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150 [2];
  char local_139;
  char *local_138 [2];
  char local_121;
  void **local_120;
  void *local_118;
  long lStack_110;
  long local_108;
  void *pvStack_100;
  undefined8 local_f8;
  long lStack_f0;
  void *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  long lStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  char *local_a0 [3];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar5 = FUN_100131560();
  if ((uVar5 & 1) == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_10001549c(&local_120,"blitz");
    std::string::operator=((string *)&local_78,(string *)&local_120);
    if (lStack_110 < 0) {
      operator_delete(local_120);
    }
    uVar6 = FUN_10030e28c();
    local_88._4_4_ = (int)uVar6;
    local_88._0_4_ =
         FUN_10030e28c(uVar6,param_2,"/skillProgressionInfoBlitz_pvp_rankedEloEarnedCurrAmt");
    local_88._0_4_ = (int)local_88 - local_88._4_4_;
    local_80 = CONCAT44(local_80._4_4_,(int)local_88);
    uVar6 = FUN_10021153c(param_3,&local_88);
    uVar2 = FUN_10030e28c(uVar6,param_2,"/silverBaseAmt");
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,uVar2);
    FUN_10001549c(&local_120,"glory");
    std::string::operator=((string *)&local_78,(string *)&local_120);
    if (lStack_110 < 0) {
      operator_delete(local_120);
    }
    uVar6 = FUN_10030e28c();
    local_88._4_4_ = (int)uVar6;
    uVar2 = FUN_10030e28c(uVar6,param_2,"/silverTotalAmt");
    local_80 = CONCAT44(local_80._4_4_,uVar2);
    uVar6 = FUN_10021153c(param_3,&local_88);
    uVar2 = FUN_10030e28c(uVar6,param_2,"/ascensionBaseTokens");
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,uVar2);
    FUN_10001549c(&local_120,"sunlight");
    std::string::operator=((string *)&local_78,(string *)&local_120);
    if (lStack_110 < 0) {
      operator_delete(local_120);
    }
    uVar6 = FUN_10030e28c();
    iVar4 = (int)local_88;
    local_88._4_4_ = (int)uVar6;
    iVar3 = FUN_10030e28c(uVar6,param_2,"/ascensionBonusTokens");
    local_80 = CONCAT44(local_80._4_4_,iVar3 + iVar4);
    uVar6 = FUN_10021153c(param_3,&local_88);
    uVar2 = FUN_10030e28c(uVar6,param_2,"/essenceBaseAmt");
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,uVar2);
    FUN_10001549c(&local_120,"essence");
    std::string::operator=((string *)&local_78,(string *)&local_120);
    if (lStack_110 < 0) {
      operator_delete(local_120);
    }
    uVar6 = FUN_10030e28c();
    local_88 = (undefined8 *)CONCAT44((int)uVar6,(int)local_88);
    uVar2 = FUN_10030e28c(uVar6,param_2,"/essenceTotalAmt");
    local_80 = CONCAT44(local_80._4_4_,uVar2);
    uVar6 = FUN_10021153c(param_3,&local_88);
    uVar6 = FUN_10030e1d8(uVar6,param_2,"chestAward");
    FUN_10001549c(local_a0,uVar6);
    uVar6 = FUN_1000f7ab0();
    lVar7 = FUN_1000f750c(uVar6,local_a0);
    if (lVar7 != 0) {
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = (void *)0x0;
      lStack_c0 = 0;
      local_c8 = 0;
      pvStack_d0 = (void *)0x0;
      local_d8 = 0;
      uStack_e0 = 0;
      local_e8 = (void *)0x0;
      lStack_f0 = 0;
      local_f8 = 0;
      pvStack_100 = (void *)0x0;
      local_108 = 0;
      lStack_110 = 0;
      local_118 = (void *)0x0;
      FUN_10001549c(local_138,"chest");
      std::string::operator=((string *)&pvStack_d0,(string *)local_138);
      if (local_121 < '\0') {
        operator_delete(local_138[0]);
      }
      local_120 = (void **)CONCAT44(local_120._4_4_,1);
      std::string::operator=((string *)&local_e8,(string *)(lVar7 + 0x38));
      FUN_10003330c(local_138,lVar7 + 0x68);
      std::string::operator=((string *)&local_118,(string *)local_138);
      if (local_121 < '\0') {
        operator_delete(local_138[0]);
      }
      FUN_10001549c(local_138,"build://Chests.atlas");
      std::string::operator=((string *)&pvStack_100,(string *)local_138);
      if (local_121 < '\0') {
        operator_delete(local_138[0]);
      }
      std::string::operator=((string *)&local_b8,(string *)local_a0);
      FUN_100211778(param_3 + 0x20,&local_120);
      if (local_a8 < 0) {
        operator_delete(local_b8);
      }
      if (lStack_c0 < 0) {
        operator_delete(pvStack_d0);
      }
      if (local_d8 < 0) {
        operator_delete(local_e8);
      }
      if (lStack_f0 < 0) {
        operator_delete(pvStack_100);
      }
      if (local_108 < 0) {
        operator_delete(local_118);
      }
    }
    uVar6 = FUN_10030e1d8();
    FUN_10001549c(local_138,uVar6);
    uVar6 = FUN_1000f7ab0();
    lVar7 = FUN_1000f78dc(uVar6,local_138);
    if (lVar7 != 0) {
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = (void *)0x0;
      lStack_c0 = 0;
      local_c8 = 0;
      pvStack_d0 = (void *)0x0;
      local_d8 = 0;
      uStack_e0 = 0;
      local_e8 = (void *)0x0;
      lStack_f0 = 0;
      local_f8 = 0;
      pvStack_100 = (void *)0x0;
      local_108 = 0;
      lStack_110 = 0;
      local_118 = (void *)0x0;
      FUN_10001549c(local_150,"key");
      std::string::operator=((string *)&pvStack_d0,(string *)local_150);
      if (local_139 < '\0') {
        operator_delete(local_150[0]);
      }
      local_120 = (void **)CONCAT44(local_120._4_4_,1);
      std::string::operator=((string *)&local_e8,(string *)(lVar7 + 0x18));
      FUN_10003330c(local_150,lVar7 + 0x30);
      std::string::operator=((string *)&local_118,(string *)local_150);
      if (local_139 < '\0') {
        operator_delete(local_150[0]);
      }
      FUN_10001549c(local_150,"build://Keys.atlas");
      std::string::operator=((string *)&pvStack_100,(string *)local_150);
      if (local_139 < '\0') {
        operator_delete(local_150[0]);
      }
      std::string::operator=((string *)&local_b8,(string *)local_138);
      FUN_100211778(param_3 + 0x20,&local_120);
      if (local_a8 < 0) {
        operator_delete(local_b8);
      }
      if (lStack_c0 < 0) {
        operator_delete(pvStack_d0);
      }
      if (local_d8 < 0) {
        operator_delete(local_e8);
      }
      if (lStack_f0 < 0) {
        operator_delete(pvStack_100);
      }
      if (local_108 < 0) {
        operator_delete(local_118);
      }
    }
    uVar6 = FUN_10030e28c();
    *(int *)(param_3 + 0x40) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/prevGuildLevel");
    *(int *)(param_3 + 0x30) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/guildXP");
    *(int *)(param_3 + 0x44) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/guildMinXP");
    *(int *)(param_3 + 0x48) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/guildMaxXP");
    *(int *)(param_3 + 0x4c) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/prevGuildXP");
    *(int *)(param_3 + 0x34) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/prevGuildMinXP");
    *(int *)(param_3 + 0x38) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/prevGuildMaxXP");
    *(int *)(param_3 + 0x3c) = (int)uVar6;
    *(undefined4 *)(param_3 + 0xa0) = 0;
    FUN_10030e1d8(uVar6,param_2,"firstPlayer");
    uVar5 = FUN_1004d2538();
    if ((uVar5 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_10030e1d8(uVar5,param_2,"secondPlayer");
    uVar5 = FUN_1004d2538();
    if ((uVar5 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_10030e1d8(uVar5,param_2,"thirdPlayer");
    uVar5 = FUN_1004d2538();
    if ((uVar5 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_10030e1d8(uVar5,param_2,"fourthPlayer");
    uVar5 = FUN_1004d2538();
    if ((uVar5 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    FUN_10030e1d8(uVar5,param_2,"fifthPlayer");
    uVar5 = FUN_1004d2538();
    if ((uVar5 & 1) == 0) {
      *(int *)(param_3 + 0xa0) = *(int *)(param_3 + 0xa0) + 1;
    }
    uVar6 = FUN_10030e32c(uVar5,param_2,"/showUserTeamSpoils");
    *(char *)(param_3 + 0xa4) = (char)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/prevLevel");
    *(int *)(param_3 + 0x50) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/currLevel");
    *(int *)(param_3 + 0x60) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/currXP");
    *(int *)(param_3 + 100) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/currXPmin");
    *(int *)(param_3 + 0x68) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/currXPmax");
    *(int *)(param_3 + 0x6c) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/prevXP");
    *(int *)(param_3 + 0x54) = (int)uVar6;
    uVar6 = FUN_10030e28c(uVar6,param_2,"/prevXPmin");
    *(int *)(param_3 + 0x58) = (int)uVar6;
    uVar2 = FUN_10030e28c(uVar6,param_2,"/prevXPmax");
    *(undefined4 *)(param_3 + 0x5c) = uVar2;
    if (local_121 < '\0') {
      operator_delete(local_138[0]);
    }
  }
  uVar6 = FUN_10030e28c();
  *(int *)(param_3 + 0x10c) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfoRankedEloBucketPrevAmt");
  *(int *)(param_3 + 0x108) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfoRankedEloEarnedPrevAmt");
  *(float *)(param_3 + 0x124) = (float)(int)uVar6;
  *(undefined4 *)(param_3 + 0x128) = 0;
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierProgressPrevAmt");
  *(uint *)(param_3 + 0x114) =
       CONCAT13(extraout_var_31,CONCAT12(extraout_var_15,CONCAT11(extraout_var,extraout_b0)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierBronzeLinePrevAmt");
  *(uint *)(param_3 + 0x118) =
       CONCAT13(extraout_var_32,CONCAT12(extraout_var_16,CONCAT11(extraout_var_00,extraout_b0_00)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierSilverLinePrevAmt");
  *(uint *)(param_3 + 0x11c) =
       CONCAT13(extraout_var_33,CONCAT12(extraout_var_17,CONCAT11(extraout_var_01,extraout_b0_01)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierGoldLinePrevAmt");
  *(uint *)(param_3 + 0x120) =
       CONCAT13(extraout_var_34,CONCAT12(extraout_var_18,CONCAT11(extraout_var_02,extraout_b0_02)));
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfoRankedSkillTierCurrAmt");
  *(int *)(param_3 + 0x13c) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfoRankedEloBucketCurrAmt");
  *(int *)(param_3 + 0x138) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfoRankedEloEarnedCurrAmt");
  *(float *)(param_3 + 0x154) = (float)(int)uVar6;
  *(float *)(param_3 + 0x158) = (float)(int)uVar6 - *(float *)(param_3 + 0x124);
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierProgressCurrAmt");
  *(uint *)(param_3 + 0x144) =
       CONCAT13(extraout_var_35,CONCAT12(extraout_var_19,CONCAT11(extraout_var_03,extraout_b0_03)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierBronzeLineCurrAmt");
  *(uint *)(param_3 + 0x148) =
       CONCAT13(extraout_var_36,CONCAT12(extraout_var_20,CONCAT11(extraout_var_04,extraout_b0_04)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierSilverLineCurrAmt");
  *(uint *)(param_3 + 0x14c) =
       CONCAT13(extraout_var_37,CONCAT12(extraout_var_21,CONCAT11(extraout_var_05,extraout_b0_05)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfoRankedSkillTierGoldLineCurrAmt");
  *(uint *)(param_3 + 0x150) =
       CONCAT13(extraout_var_38,CONCAT12(extraout_var_22,CONCAT11(extraout_var_06,extraout_b0_06)));
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierPrevAmt");
  *(int *)(param_3 + 0xac) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedEloBucketPrevAmt");
  *(int *)(param_3 + 0xa8) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedEloEarnedPrevAmt");
  *(float *)(param_3 + 0xc4) = (float)(int)uVar6;
  *(undefined4 *)(param_3 + 200) = 0;
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierProgressPrevAmt")
  ;
  *(uint *)(param_3 + 0xb4) =
       CONCAT13(extraout_var_39,CONCAT12(extraout_var_23,CONCAT11(extraout_var_07,extraout_b0_07)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,
                        "/skillProgressionInfo5v5_pvp_rankedSkillTierBronzeLinePrevAmt");
  *(uint *)(param_3 + 0xb8) =
       CONCAT13(extraout_var_40,CONCAT12(extraout_var_24,CONCAT11(extraout_var_08,extraout_b0_08)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,
                        "/skillProgressionInfo5v5_pvp_rankedSkillTierSilverLinePrevAmt");
  *(uint *)(param_3 + 0xbc) =
       CONCAT13(extraout_var_41,CONCAT12(extraout_var_25,CONCAT11(extraout_var_09,extraout_b0_09)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierGoldLinePrevAmt")
  ;
  *(uint *)(param_3 + 0xc0) =
       CONCAT13(extraout_var_42,CONCAT12(extraout_var_26,CONCAT11(extraout_var_10,extraout_b0_10)));
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierCurrAmt");
  *(int *)(param_3 + 0xdc) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedEloBucketCurrAmt");
  *(int *)(param_3 + 0xd8) = (int)uVar6;
  uVar6 = FUN_10030e28c(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedEloEarnedCurrAmt");
  *(float *)(param_3 + 0xf4) = (float)(int)uVar6;
  *(float *)(param_3 + 0xf8) = (float)(int)uVar6 - *(float *)(param_3 + 0xc4);
  uVar6 = FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierProgressCurrAmt")
  ;
  *(uint *)(param_3 + 0xe4) =
       CONCAT13(extraout_var_43,CONCAT12(extraout_var_27,CONCAT11(extraout_var_11,extraout_b0_11)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,
                        "/skillProgressionInfo5v5_pvp_rankedSkillTierBronzeLineCurrAmt");
  *(uint *)(param_3 + 0xe8) =
       CONCAT13(extraout_var_44,CONCAT12(extraout_var_28,CONCAT11(extraout_var_12,extraout_b0_12)));
  uVar6 = FUN_10030e3d4(uVar6,param_2,
                        "/skillProgressionInfo5v5_pvp_rankedSkillTierSilverLineCurrAmt");
  *(uint *)(param_3 + 0xec) =
       CONCAT13(extraout_var_45,CONCAT12(extraout_var_29,CONCAT11(extraout_var_13,extraout_b0_13)));
  FUN_10030e3d4(uVar6,param_2,"/skillProgressionInfo5v5_pvp_rankedSkillTierGoldLineCurrAmt");
  *(uint *)(param_3 + 0xf0) =
       CONCAT13(extraout_var_46,CONCAT12(extraout_var_30,CONCAT11(extraout_var_14,extraout_b0_14)));
  uVar5 = FUN_100131560();
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_10030e47c(uVar5,param_2,"/heroMasteryHero");
    FUN_10001549c(&local_120,uVar6);
    std::string::operator=((string *)(param_3 + 0x88),(string *)&local_120);
    if (lStack_110 < 0) {
      operator_delete(local_120);
    }
    uVar2 = FUN_10030e28c();
    *(undefined4 *)(param_3 + 0x78) = uVar2;
    iVar4 = FUN_100331d3c();
    *(int *)(param_3 + 0x70) = iVar4;
    iVar4 = FUN_100331e08(iVar4 + 1);
    if (iVar4 == 0) {
      uVar5 = (ulong)*(uint *)(param_3 + 0x80);
    }
    else {
      uVar5 = FUN_100331da8(*(int *)(param_3 + 0x70) + 1);
    }
    *(int *)(param_3 + 0x80) = (int)uVar5;
    iVar4 = *(int *)(param_3 + 0x78);
    iVar3 = FUN_10030e28c(uVar5,param_2,"/heroMasteryTotalAmt");
    *(int *)(param_3 + 0x7c) = iVar3 + iVar4;
    iVar4 = FUN_100331d3c();
    *(int *)(param_3 + 0x74) = iVar4;
    iVar4 = FUN_100331e08(iVar4 + 1);
    if (iVar4 == 0) {
      uVar2 = *(undefined4 *)(param_3 + 0x84);
    }
    else {
      uVar2 = FUN_100331da8(*(int *)(param_3 + 0x74) + 1);
    }
    *(undefined4 *)(param_3 + 0x84) = uVar2;
    local_a0[0] = "karmaBonus";
    local_138[0] = "hardFoughtBonus";
    local_158 = "liveevent_generic_25pct_xp";
    local_150[0] = "achievementBonus";
    local_168 = "boostFire_buffGuild_xpBonusApplied";
    local_160 = "boostHeat_buffGuild_xpBonusApplied";
    local_178 = "boostPlayer_silver_buff_25pct_permanentSilverBonusApplied";
    local_170 = "boostPrime_time_buffGuild_xpBonusApplied";
    local_188 = "boostPlayer_silver_buff_100pct_timedSilverBonusApplied";
    local_180 = "boostPlayer_xp_buff_50pct_permanentPlayer_xpBonusApplied";
    local_198 = "boostPlayer_fame_buff_100pct_timedGuild_xpBonusApplied";
    local_190 = "boostPlayer_xp_buff_100pct_timedPlayer_xpBonusApplied";
    local_1a8 = "boostPlayer_silver_buff_50pct_timedSilverBonusApplied";
    local_1a0 = "boostPlayer_ascension_token_buff_100pct_timedAscension_tokenBonusApplied";
    local_1b8 = "boostPlayer_fame_buff_50pct_timedGuild_xpBonusApplied";
    local_1b0 = "boostPlayer_xp_buff_50pct_timedPlayer_xpBonusApplied";
    local_1c8 = "boostPlayer_gold_annuity_80_timedGold_annuityBonusApplied";
    local_1c0 = "boostPlayer_ascension_token_buff_50pct_timedAscension_tokenBonusApplied";
    local_1d8 = "boostGameevent_double_glorySilverBonusApplied";
    local_1d0 = "boostPlayer_gold_annuity_5_timedGold_annuityBonusApplied";
    local_88 = &local_80;
    local_80 = 0;
    local_78 = 0;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,local_a0);
    *puVar8 = "glory";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,local_138);
    *puVar8 = "glory";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,local_150);
    *puVar8 = "glory";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_158);
    *puVar8 = "xp";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_160);
    *puVar8 = "guild";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_168);
    *puVar8 = "guild";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_170);
    *puVar8 = "guild";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_178);
    *puVar8 = "glory";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_180);
    *puVar8 = "xp";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_188);
    *puVar8 = "glory";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_190);
    *puVar8 = "xp";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_198);
    *puVar8 = "guild";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1a0);
    *puVar8 = "sunlight";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1a8);
    *puVar8 = "glory";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1b0);
    *puVar8 = "xp";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1b8);
    *puVar8 = "guild";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1c0);
    *puVar8 = "sunlight";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1c8);
    *puVar8 = "gold";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1d0);
    *puVar8 = "gold";
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1d8);
    *puVar8 = "glory";
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_ALL_ACCESS_PASS",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_1a8;
    local_1e0 = local_1a8;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    pcVar1 = local_1b0;
    local_1e0 = local_1b0;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    uVar5 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    pcVar1 = local_1b8;
    local_1e0 = local_1b8;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    uVar9 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    pcVar1 = local_1c0;
    local_1e0 = local_1c0;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    uVar10 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    pcVar1 = local_1c8;
    local_1e0 = local_1c8;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    uVar11 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    pcVar1 = local_1d0;
    local_1e0 = local_1d0;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    uVar12 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (((((uVar12 & 1) != 0) || ((uVar11 & 1) != 0)) || ((uVar10 & 1) != 0)) ||
       ((((uVar9 & 1) != 0 || ((uVar5 & 1) != 0)) || (iVar4 != 0)))) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_HEAT",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_160;
    local_1e0 = local_160;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_FIRE",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_168;
    local_1e0 = local_168;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_PRIME_TIME",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_170;
    local_1e0 = local_170;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_PERMANENT_GLORY",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_178;
    local_1e0 = local_178;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_PERMANENT_XP",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_180;
    local_1e0 = local_180;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_EVENT_GENERIC_XP_25PCT",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_158;
    local_1e0 = local_158;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_GLORY_100",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_188;
    local_1e0 = local_188;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_XP_100",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_190;
    local_1e0 = local_190;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_GUILD_XP_100",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_198;
    local_1e0 = local_198;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_SUNLIGHT_100",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_1a0;
    local_1e0 = local_1a0;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MENU_SPOILS_BOOST_DOUBLE_GLORY_EVENT",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_1d8;
    local_1e0 = local_1d8;
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MAIN_SPOILS_OF_WAR_KARMA_AWARDED",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_a0[0];
    local_1e0 = local_a0[0];
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    FUN_1004e313c(&local_108);
    uVar6 = FUN_1004e0150("MAIN_SPOILS_OF_WAR_HARD_FOUGHT",0);
    FUN_1000153b4(&local_108,uVar6);
    pcVar1 = local_138[0];
    local_1e0 = local_138[0];
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    local_120 = &local_118;
    local_118 = (void *)0x0;
    lStack_110 = 0;
    uVar6 = FUN_1004e313c(&local_108);
    uVar6 = FUN_10030df6c(uVar6,param_2,"unlocked1stWin");
    uVar13 = FUN_10030df6c(uVar6,param_2,"unlocked3rdWin");
    iVar4 = FUN_10030df6c(uVar13,param_2,"unlocked7thDayWin");
    if (iVar4 == 0) {
      if ((int)uVar13 == 0) {
        if ((int)uVar6 != 0) {
          uVar6 = FUN_1004e0150("MAIN_SPOILS_OF_WAR_1ST_WIN_OF_DAY",0);
          FUN_1000153b4(&local_108,uVar6);
          FUN_100103d54();
        }
      }
      else {
        uVar6 = FUN_1004e0150("MAIN_SPOILS_OF_WAR_3RD_WIN_OF_DAY",0);
        FUN_1000153b4(&local_108,uVar6);
        FUN_100103ddc();
      }
    }
    else {
      uVar6 = FUN_1004e0150("MAIN_SPOILS_OF_WAR_7TH_DAY_WIN",0);
      FUN_1000153b4(&local_108,uVar6);
      FUN_100103e64();
    }
    pcVar1 = local_150[0];
    local_1e0 = local_150[0];
    puVar8 = (undefined8 *)FUN_100311650(&local_88,&local_1e0);
    iVar4 = FUN_100311708(puVar8,param_2,&local_120,pcVar1,*puVar8);
    if (iVar4 != 0) {
      FUN_10021164c(param_3 + 0x10,&local_120);
    }
    if (pvStack_100 != (void *)0x0) {
      operator_delete__(pvStack_100);
      local_108 = 0;
      pvStack_100 = (void *)0x0;
    }
    FUN_10014ebf8(&local_120,local_118);
    FUN_100311958(&local_88,local_80);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000100311068) */
/* WARNING: Removing unreachable block (ram,0x0001003115e0) */



/*
 * FUN_100312f24
 * VA: 0x100312f24 | Source: functions/10031.c:1539
 * CE-gate: YES (2x) | Guest-gate: NO
 * Indicators: UI strings: 1
 * Callees: FUN_1000153b4, FUN_100126c88, FUN_100126cec, FUN_100126f48, FUN_10012709c, FUN_10012ced4, FUN_100131560, FUN_100315bf4 (+5 more)
 * Callers: FUN_100312f18
 */
void FUN_100312f24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_d8;
  undefined4 uStack_d4;
  char *pcStack_d0;
  mach_header *local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  iVar8 = FUN_100126f48();
  uVar14 = iVar8 - 1;
  if (1 < uVar14) {
    uVar14 = 2;
  }
  iVar8 = FUN_10012709c();
  if (iVar8 == 2) {
    uVar9 = 1;
  }
  else if (iVar8 == 0) {
    uVar9 = FUN_100126cec();
  }
  else {
    uVar9 = 0;
  }
  iVar8 = FUN_100126c88();
  if (iVar8 == 0) {
    uVar15 = 0;
  }
  else {
    iVar8 = FUN_10012709c();
    uVar15 = (uint)(iVar8 != 1);
  }
  iVar8 = FUN_10012709c();
  iVar10 = FUN_10012709c();
  local_d8 = 0;
  pcStack_d0 = "preferFullscreen";
  local_c8 = (mach_header *)0x100000002;
  uStack_c0 = (mach_header *)((ulong)(iVar10 == 1) << 0x20);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[1] = pcStack_d0;
  *param_1 = CONCAT44(uStack_d4,local_d8);
  param_1[3] = uStack_c0;
  param_1[2] = local_c8;
  param_1[5] = CONCAT44(uStack_ac,uStack_b0);
  param_1[4] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 6,auStack_a8);
  FUN_100315d18(param_1 + 8,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 1;
  pcStack_d0 = "preferredGraphicsLevel";
  local_c8 = (mach_header *)0x200000002;
  uStack_c0 = (mach_header *)CONCAT44(uVar14,1);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xb] = pcStack_d0;
  param_1[10] = CONCAT44(uStack_d4,local_d8);
  param_1[0xd] = uStack_c0;
  param_1[0xc] = local_c8;
  param_1[0xf] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xe] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x10,auStack_a8);
  puVar1 = param_1 + 0x12;
  FUN_100315d18(puVar1,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 2;
  pcStack_d0 = "preferredControlScheme";
  local_c8 = (mach_header *)0x200000000;
  uStack_c0 = (mach_header *)CONCAT44(uVar9,1);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x15] = pcStack_d0;
  param_1[0x14] = CONCAT44(uStack_d4,local_d8);
  param_1[0x17] = uStack_c0;
  param_1[0x16] = local_c8;
  param_1[0x19] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x18] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x1a,auStack_a8);
  puVar2 = param_1 + 0x1c;
  FUN_100315d18(puVar2,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 3;
  pcStack_d0 = "preferredMouseScheme";
  uStack_c0 = (mach_header *)0x100000001;
  local_c8 = (mach_header *)0x200000000;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x1f] = pcStack_d0;
  param_1[0x1e] = CONCAT44(uStack_d4,local_d8);
  param_1[0x21] = uStack_c0;
  param_1[0x20] = local_c8;
  param_1[0x23] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x22] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x24,auStack_a8);
  puVar3 = param_1 + 0x26;
  FUN_100315d18(puVar3,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 9;
  pcStack_d0 = "preferKeyboardSmartCast";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x5b] = pcStack_d0;
  param_1[0x5a] = CONCAT44(uStack_d4,local_d8);
  param_1[0x5d] = uStack_c0;
  param_1[0x5c] = local_c8;
  param_1[0x5f] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x5e] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x60,auStack_a8);
  FUN_100315d18(param_1 + 0x62,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 10;
  pcStack_d0 = "preferKeyboardInstantCast";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 5;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x65] = pcStack_d0;
  param_1[100] = CONCAT44(uStack_d4,local_d8);
  param_1[0x67] = uStack_c0;
  param_1[0x66] = local_c8;
  param_1[0x69] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x68] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x6a,auStack_a8);
  FUN_100315d18(param_1 + 0x6c,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1f;
  pcStack_d0 = "preferAttackIgnoreCursor";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x137] = pcStack_d0;
  param_1[0x136] = CONCAT44(uStack_d4,local_d8);
  param_1[0x139] = uStack_c0;
  param_1[0x138] = local_c8;
  param_1[0x13b] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x13a] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x13c,auStack_a8);
  FUN_100315d18(param_1 + 0x13e,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xb;
  pcStack_d0 = "preferTapInstantCast2";
  uStack_c0 = &__mh_execute_header;
  local_c8 = &__mh_execute_header;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 6;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x6f] = pcStack_d0;
  param_1[0x6e] = CONCAT44(uStack_d4,local_d8);
  param_1[0x71] = uStack_c0;
  param_1[0x70] = local_c8;
  param_1[0x73] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x72] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x74,auStack_a8);
  FUN_100315d18(param_1 + 0x76,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x21;
  pcStack_d0 = "preferSimplifiedJoystick";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 1;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x14b] = pcStack_d0;
  param_1[0x14a] = CONCAT44(uStack_d4,local_d8);
  param_1[0x14d] = uStack_c0;
  param_1[0x14c] = local_c8;
  param_1[0x14f] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x14e] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x150,auStack_a8);
  FUN_100315d18(param_1 + 0x152,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xc;
  pcStack_d0 = "preferredMoveStickPlacement";
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000000;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 1;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x79] = pcStack_d0;
  param_1[0x78] = CONCAT44(uStack_d4,local_d8);
  param_1[0x7b] = uStack_c0;
  param_1[0x7a] = local_c8;
  param_1[0x7d] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x7c] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x7e,auStack_a8);
  puVar4 = param_1 + 0x80;
  FUN_100315d18(puVar4,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1e;
  pcStack_d0 = "preferTargetPriority";
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000000;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 1;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x12d] = pcStack_d0;
  param_1[300] = CONCAT44(uStack_d4,local_d8);
  param_1[0x12f] = uStack_c0;
  param_1[0x12e] = local_c8;
  param_1[0x131] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x130] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x132,auStack_a8);
  puVar5 = param_1 + 0x134;
  FUN_100315d18(puVar5,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 4;
  pcStack_d0 = "preferredMouseCameraScheme";
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x29] = pcStack_d0;
  param_1[0x28] = CONCAT44(uStack_d4,local_d8);
  param_1[0x2b] = uStack_c0;
  param_1[0x2a] = local_c8;
  param_1[0x2d] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x2c] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x2e,auStack_a8);
  puVar6 = param_1 + 0x30;
  FUN_100315d18(puVar6,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 5;
  pcStack_d0 = "preferZoomedCamera";
  local_c8 = (mach_header *)0x100000003;
  uStack_c0 = (mach_header *)((ulong)uVar15 << 0x20);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x33] = pcStack_d0;
  param_1[0x32] = CONCAT44(uStack_d4,local_d8);
  param_1[0x35] = uStack_c0;
  param_1[0x34] = local_c8;
  param_1[0x37] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x36] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x38,auStack_a8);
  FUN_100315d18(param_1 + 0x3a,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 6;
  pcStack_d0 = "preferLockedCamera";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x3d] = pcStack_d0;
  param_1[0x3c] = CONCAT44(uStack_d4,local_d8);
  param_1[0x3f] = uStack_c0;
  param_1[0x3e] = local_c8;
  param_1[0x41] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x40] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x42,auStack_a8);
  FUN_100315d18(param_1 + 0x44,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 7;
  pcStack_d0 = "preferShowCamZoomButton";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x47] = pcStack_d0;
  param_1[0x46] = CONCAT44(uStack_d4,local_d8);
  param_1[0x49] = uStack_c0;
  param_1[0x48] = local_c8;
  param_1[0x4b] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x4a] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x4c,auStack_a8);
  FUN_100315d18(param_1 + 0x4e,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 8;
  pcStack_d0 = "preferShowCamLockButton";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x51] = pcStack_d0;
  param_1[0x50] = CONCAT44(uStack_d4,local_d8);
  param_1[0x53] = uStack_c0;
  param_1[0x52] = local_c8;
  param_1[0x55] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x54] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x56,auStack_a8);
  FUN_100315d18(param_1 + 0x58,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xd;
  pcStack_d0 = "cameraEdgePanningSpeed";
  uStack_c0 = (mach_header *)0x3f00000000000002;
  local_c8 = (mach_header *)0x300000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x83] = pcStack_d0;
  param_1[0x82] = CONCAT44(uStack_d4,local_d8);
  param_1[0x85] = uStack_c0;
  param_1[0x84] = local_c8;
  param_1[0x87] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x86] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x88,auStack_a8);
  FUN_100315d18(param_1 + 0x8a,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xe;
  pcStack_d0 = "preferSmoothEdgePanning";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x8d] = pcStack_d0;
  param_1[0x8c] = CONCAT44(uStack_d4,local_d8);
  param_1[0x8f] = uStack_c0;
  param_1[0x8e] = local_c8;
  param_1[0x91] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x90] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x92,auStack_a8);
  FUN_100315d18(param_1 + 0x94,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  iVar10 = FUN_100131560();
  if (iVar10 == 0) {
    local_d8 = 0xf;
    pcStack_d0 = "preferEnableInGameChat";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = (uint)local_b8._1_3_ << 8;
    uStack_b4 = 0x23;
    uStack_b0 = 0;
    uStack_ac = 7;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0x97] = pcStack_d0;
    param_1[0x96] = CONCAT44(uStack_d4,local_d8);
    param_1[0x99] = uStack_c0;
    param_1[0x98] = local_c8;
    param_1[0x9b] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0x9a] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0x9c,auStack_a8);
    FUN_100315d18(param_1 + 0x9e,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    local_d8 = 0x10;
    pcStack_d0 = "preferChatFromGreatKarmaOnly";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = local_b8 & 0xffffff00;
    uStack_b4 = 0xf;
    uStack_b0 = 1;
    uStack_ac = 7;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0xa1] = pcStack_d0;
    param_1[0xa0] = CONCAT44(uStack_d4,local_d8);
    param_1[0xa3] = uStack_c0;
    param_1[0xa2] = local_c8;
    param_1[0xa5] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0xa4] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0xa6,auStack_a8);
    FUN_100315d18(param_1 + 0xa8,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    uStack_ac = 2;
  }
  else {
    local_d8 = 0xf;
    pcStack_d0 = "preferEnableInGameChat";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = (uint)local_b8._1_3_ << 8;
    uStack_b4 = 0x23;
    uStack_b0 = 0;
    uStack_ac = 4;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0x97] = pcStack_d0;
    param_1[0x96] = CONCAT44(uStack_d4,local_d8);
    param_1[0x99] = uStack_c0;
    param_1[0x98] = local_c8;
    param_1[0x9b] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0x9a] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0x9c,auStack_a8);
    FUN_100315d18(param_1 + 0x9e,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    local_d8 = 0x10;
    pcStack_d0 = "preferChatFromGreatKarmaOnly";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = local_b8 & 0xffffff00;
    uStack_b4 = 0xf;
    uStack_b0 = 1;
    uStack_ac = 4;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0xa1] = pcStack_d0;
    param_1[0xa0] = CONCAT44(uStack_d4,local_d8);
    param_1[0xa3] = uStack_c0;
    param_1[0xa2] = local_c8;
    param_1[0xa5] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0xa4] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0xa6,auStack_a8);
    FUN_100315d18(param_1 + 0xa8,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    uStack_ac = 4;
  }
  uStack_b0 = 1;
  uStack_b4 = 0xf;
  local_b8 = local_b8 & 0xffffff00;
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000008;
  pcStack_d0 = "preferMobileChatTransparency";
  local_d8 = 0x20;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x141] = pcStack_d0;
  param_1[0x140] = CONCAT44(uStack_d4,local_d8);
  param_1[0x143] = uStack_c0;
  param_1[0x142] = local_c8;
  param_1[0x145] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x144] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x146,auStack_a8);
  FUN_100315d18(param_1 + 0x148,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x11;
  pcStack_d0 = "preferredMinimapSize";
  uStack_c0 = (mach_header *)0x3f00000000000002;
  local_c8 = (mach_header *)0x300000004;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 3;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xab] = pcStack_d0;
  param_1[0xaa] = CONCAT44(uStack_d4,local_d8);
  param_1[0xad] = uStack_c0;
  param_1[0xac] = local_c8;
  param_1[0xaf] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xae] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xb0,auStack_a8);
  FUN_100315d18(param_1 + 0xb2,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x12;
  pcStack_d0 = "preferTapAndHoldScoreboard";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)((ulong)(iVar8 == 1) << 0x20);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xb5] = pcStack_d0;
  param_1[0xb4] = CONCAT44(uStack_d4,local_d8);
  param_1[0xb7] = uStack_c0;
  param_1[0xb6] = local_c8;
  param_1[0xb9] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xb8] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xba,auStack_a8);
  FUN_100315d18(param_1 + 0xbc,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x13;
  pcStack_d0 = "preferHideNamesAbovePlaques";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xbf] = pcStack_d0;
  param_1[0xbe] = CONCAT44(uStack_d4,local_d8);
  param_1[0xc1] = uStack_c0;
  param_1[0xc0] = local_c8;
  param_1[0xc3] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xc2] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xc4,auStack_a8);
  FUN_100315d18(param_1 + 0xc6,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x14;
  pcStack_d0 = "preferPulseOnDamage";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xc9] = pcStack_d0;
  param_1[200] = CONCAT44(uStack_d4,local_d8);
  param_1[0xcb] = uStack_c0;
  param_1[0xca] = local_c8;
  param_1[0xcd] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xcc] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xce,auStack_a8);
  FUN_100315d18(param_1 + 0xd0,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x15;
  pcStack_d0 = "preferMinimapInstantPan";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xd3] = pcStack_d0;
  param_1[0xd2] = CONCAT44(uStack_d4,local_d8);
  param_1[0xd5] = uStack_c0;
  param_1[0xd4] = local_c8;
  param_1[0xd7] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xd6] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xd8,auStack_a8);
  FUN_100315d18(param_1 + 0xda,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x16;
  pcStack_d0 = "prefer3V3MinimapOnRight";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xdd] = pcStack_d0;
  param_1[0xdc] = CONCAT44(uStack_d4,local_d8);
  param_1[0xdf] = uStack_c0;
  param_1[0xde] = local_c8;
  param_1[0xe1] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xe0] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xe2,auStack_a8);
  FUN_100315d18(param_1 + 0xe4,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1d;
  pcStack_d0 = "preferBountyInScoreboard";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000004;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x123] = pcStack_d0;
  param_1[0x122] = CONCAT44(uStack_d4,local_d8);
  param_1[0x125] = uStack_c0;
  param_1[0x124] = local_c8;
  param_1[0x127] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x126] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x128,auStack_a8);
  FUN_100315d18(param_1 + 0x12a,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x17;
  pcStack_d0 = "audioLevelGame";
  uStack_c0 = (mach_header *)0x3f80000000000002;
  local_c8 = (mach_header *)0x300000005;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xe7] = pcStack_d0;
  param_1[0xe6] = CONCAT44(uStack_d4,local_d8);
  param_1[0xe9] = uStack_c0;
  param_1[0xe8] = local_c8;
  param_1[0xeb] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xea] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xec,auStack_a8);
  FUN_100315d18(param_1 + 0xee,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x18;
  pcStack_d0 = "audioLevelMusic";
  uStack_c0 = (mach_header *)0x3f80000000000002;
  local_c8 = (mach_header *)0x300000005;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xf1] = pcStack_d0;
  param_1[0xf0] = CONCAT44(uStack_d4,local_d8);
  param_1[0xf3] = uStack_c0;
  param_1[0xf2] = local_c8;
  param_1[0xf5] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xf4] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xf6,auStack_a8);
  FUN_100315d18(param_1 + 0xf8,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x19;
  pcStack_d0 = "preferInGameHints";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000004;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xfb] = pcStack_d0;
  param_1[0xfa] = CONCAT44(uStack_d4,local_d8);
  param_1[0xfd] = uStack_c0;
  param_1[0xfc] = local_c8;
  param_1[0xff] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xfe] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x100,auStack_a8);
  FUN_100315d18(param_1 + 0x102,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1a;
  pcStack_d0 = "preferredAutoShopBehavior";
  uStack_c0 = (mach_header *)0x100000001;
  local_c8 = (mach_header *)0x200000006;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x105] = pcStack_d0;
  param_1[0x104] = CONCAT44(uStack_d4,local_d8);
  param_1[0x107] = uStack_c0;
  param_1[0x106] = local_c8;
  param_1[0x109] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x108] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x10a,auStack_a8);
  puVar7 = param_1 + 0x10c;
  FUN_100315d18(puVar7,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1b;
  pcStack_d0 = "preferAutoUpgradeAbilities";
  local_c8 = (mach_header *)0x100000006;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x10f] = pcStack_d0;
  param_1[0x10e] = CONCAT44(uStack_d4,local_d8);
  param_1[0x111] = uStack_c0;
  param_1[0x110] = local_c8;
  param_1[0x113] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x112] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x114,auStack_a8);
  FUN_100315d18(param_1 + 0x116,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1c;
  pcStack_d0 = "preferShowRankedRecallPfx";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)&__mh_execute_header.cputype;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x119] = pcStack_d0;
  param_1[0x118] = CONCAT44(uStack_d4,local_d8);
  param_1[0x11b] = uStack_c0;
  param_1[0x11a] = local_c8;
  param_1[0x11d] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x11c] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x11e,auStack_a8);
  FUN_100315d18(param_1 + 0x120,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_TITLE",0);
  FUN_1000153b4(param_1 + 0x10,uVar11);
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_HIGH",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_HIGH_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_MEDIUM",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_MEDIUM_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_LOW",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_LOW_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_TAP",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_TAP_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar2,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_JOYSTICK",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_JOYSTICK_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar2,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_VAINGLORIOUS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_VAINGLORIOUS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar3,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_TRADITIONAL",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_TRADITIONAL_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar3,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_ONLY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_ONLY_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_NUDGE_ONLY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_NUDGE_ONLY_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_AND_NUDGE",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_AND_NUDGE_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_ZOOMED_CAMERA",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x3a,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_LOCKED_CAMERA",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x44,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_CAM_ZOOM_BUTTON",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x4e,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_CAM_LOCK_BUTTON",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x58,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_INSTANT_CAST_MODALS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_HUD_SETTINGS_INSTANT_CAST_MODALS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x76,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_INSTANT_CAST_MODALS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_HUD_SETTINGS_INSTANT_CAST_MODALS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x6c,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SMART_CAST",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SMART_CAST_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x62,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_LAZY_ATTACK_IGNORE_CURSOR",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_LAZY_ATTACK_IGNORE_CURSOR_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x13e,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_FIXED",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_FIXED_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_DRIFT",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_DRIFT_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_LOCK",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_LOCK_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CAMERA_EDGE_PANNING_SPEED",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x8a,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CAMERA_EDGE_PANNING_SMOOTH",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x94,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SETTING_IN_GAME_CHAT_ENABLED",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x9e,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CHAT_FROM_GREAT_KARMA_ONLY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_CHAT_FROM_GREAT_KARMA_ONLY_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xa8,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_FULLSCREEN",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_FULLSCREEN_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 8,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SCOREBOARD_TAP_AND_HOLD",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SCOREBOARD_TAP_AND_HOLD_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xbc,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_NAMES",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xc6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_PULSE_SCREEN",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xd0,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MINIMAP_INSTANT_PAN",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MINIMAP_INSTANT_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xda,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_IN_GAME_HINTS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_IN_GAME_HINTS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x102,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_RANKED_RECALL_PFX",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOW_RANKED_RECALL_PFX_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x120,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MINIMAP_SIZE",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xb2,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_3V3_MINIMAP_ON_RIGHT",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_3V3_MINIMAP_ON_RIGHT_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xe4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_BOUNTY_IN_SCOREBOARD",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOW_BOUNTY_IN_SCOREBOARD_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x12a,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_PRIORITY",0);
  FUN_1000153b4(param_1 + 0x132,uVar11);
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHPPERCENT",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHPPERCENT_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar5,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHP",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHP_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar5,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_CLOSEST",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_TARGET_CLOSEST_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar5,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SIMPLIFIED_JOYSTICK",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SIMPLIFIED_JOYSTICK_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x152,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_AUTO_UPGRADE_ABILITIES",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_AUTO_UPGRADE_ABILITIES_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x116,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_VOLUME_LEVEL_GAME_AUDIO",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xee,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_VOLUME_LEVEL_MUSIC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xf8,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_AUTO_BUY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_AUTO_BUY_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar7,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_QUICK_BUY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_QUICK_BUY_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar7,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_MANUAL_BUY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_MANUAL_BUY_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar7,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTING_MOBILECHAT_TRANSPARENCY",0);
  FUN_1000153b4(param_1 + 0x146,uVar11);
  puVar1 = param_1 + 0x148;
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_OPAQUE",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_OPAQUE_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_PARTIAL_TRANSPARENCY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_PARTIAL_TRANSPARENCY_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_FULL_TRANSPARENCY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_FULL_TRANSPARENCY_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x15a) = local_d8;
  FUN_1000153b4(param_1 + 0x15b,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_KEY_BINDINGS",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x157) = local_d8;
  FUN_1000153b4(param_1 + 0x158,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x154) = local_d8;
  FUN_1000153b4(param_1 + 0x155,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CAMERA",0);
  local_d8 = 3;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x15d) = local_d8;
  FUN_1000153b4(param_1 + 0x15e,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_PREFERENCES",0);
  local_d8 = 4;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x160) = local_d8;
  FUN_1000153b4(param_1 + 0x161,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SOUND_OPTIONS",0);
  local_d8 = 5;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x163) = local_d8;
  FUN_1000153b4(param_1 + 0x164,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GAMEPLAY_OPTIONS",0);
  local_d8 = 6;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x166) = local_d8;
  FUN_1000153b4(param_1 + 0x167,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar13 = FUN_10012ced4();
  if ((uVar13 & 1) == 0) {
    uVar11 = FUN_1004e0150("HUD_SETTINGS_CREDITS",0);
    local_d8 = 7;
    thunk_FUN_1004e439c(&pcStack_d0,uVar11);
    *(undefined4 *)(param_1 + 0x169) = local_d8;
    FUN_1000153b4(param_1 + 0x16a,&pcStack_d0);
    if (local_c8 != (mach_header *)0x0) {
      operator_delete__(local_c8);
    }
  }
  uVar13 = FUN_100131560();
  if ((uVar13 & 1) == 0) {
    uVar11 = FUN_1004e0150("HUD_SETTINGS_CHAT",0);
    local_d8 = 8;
    thunk_FUN_1004e439c(&pcStack_d0,uVar11);
    *(undefined4 *)(param_1 + 0x16c) = local_d8;
    FUN_1000153b4(param_1 + 0x16d,&pcStack_d0);
    if (local_c8 != (mach_header *)0x0) {
      operator_delete__(local_c8);
    }
  }
  *(undefined1 *)(param_1 + 0x16f) = 1;
  return;
}



/*
 * FUN_1003219a8
 * VA: 0x1003219a8 | Source: functions/10032.c:1791
 * CE-gate: YES (4x) | Guest-gate: NO
 * Callees: FUN_1001306bc, FUN_100131560, FUN_10015d3ec, FUN_10016c2f0, FUN_10031d43c, FUN_10031e194, FUN_100327e00, FUN_100327efc (+1 more)
 * Callers: FUN_100202158, FUN_100202310, FUN_1002036e8, FUN_1002038ec, FUN_100203ac8, FUN_100203bf4, FUN_100203d28, FUN_100203e5c (+1 more)
 */
uint FUN_1003219a8(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  
  uVar2 = *(int *)(param_1 + 0x34) - 2;
  if (uVar2 < 3) {
    iVar4 = *(int *)(&DAT_101158fd0 + (long)(int)uVar2 * 4);
  }
  else {
    iVar4 = 1;
  }
  lVar5 = FUN_10031d43c();
  if (lVar5 == 0) {
    iVar3 = -1;
  }
  else {
    uVar6 = FUN_10031d43c();
    plVar1 = (long *)*(long *)(param_1 + 0x70);
    if (-1 < *(char *)(param_1 + 0x87)) {
      plVar1 = (long *)(param_1 + 0x70);
    }
    iVar3 = FUN_10031e194(uVar6,plVar1);
    if (iVar3 == 0) {
      return 4;
    }
  }
  if ((*(char *)(param_1 + 0x9c) == '\0') && (iVar3 != 1)) {
    return 4;
  }
  switch(*(uint *)(param_1 + 0x34)) {
  case 0:
    return *(uint *)(param_1 + 0x34);
  case 1:
  case 2:
  case 3:
  case 4:
    lVar5 = FUN_10016c2f0();
    if (*(int *)(lVar5 + 0x38) < 1) {
      return 0;
    }
    lVar5 = FUN_10016c2f0();
    if (*(int *)(lVar5 + 0x38) == iVar4) {
      return 0;
    }
    lVar5 = FUN_10016c2f0();
    if (iVar4 < *(int *)(lVar5 + 0x38)) {
      return 2;
    }
    lVar5 = FUN_10016c2f0();
    if (*(int *)(lVar5 + 0x38) < iVar4) {
      return 1;
    }
  case 5:
  case 6:
    uVar7 = FUN_100131560();
    if (((uVar7 & 1) == 0) && (lVar5 = FUN_10015d3ec(), *(uint *)(lVar5 + 0x55d0) < 5)) {
      fVar8 = (float)FUN_1001306bc();
      return (uint)((*(int *)(param_1 + 0x34) != 5 || fVar8 < 1.0) &&
                   (*(int *)(param_1 + 0x34) != 6 || fVar8 < 5.0));
    }
    return 0;
  case 7:
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    FUN_100327e00();
    iVar4 = FUN_100327efc();
    break;
  case 8:
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    FUN_100327e00();
    iVar4 = FUN_100327f04();
    break;
  case 9:
    uVar7 = FUN_100131560();
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    lVar5 = FUN_10015d3ec();
    return (uint)(*(uint *)(lVar5 + 0x55d0) < 5);
  default:
    goto switchD_100321a44_caseD_0;
  }
  if (iVar4 != 0) {
    lVar5 = FUN_10015d3ec();
    if (*(int *)(lVar5 + 0x55c8) < 1) {
      return 0;
    }
    return 3;
  }
switchD_100321a44_caseD_0:
  return 1;
}



/*
 * FUN_1004fe5ec
 * session manager has_account — vtable[12]
 * VA: 0x1004fe5ec | Source: functions/1004f.c:10883
 * Fptr: __DATA+0x149e4a0
 * Dylib: Layer 7
 * Layout: +0x2bd0=registered account string
 * Notes: Checks if account string at self+0x2bd0 is empty. Returns 0 (guest) or 1 (has account). Vtable at __DATA.__const+0x149e440, slot 12 at offset 0x60.
 * CE-gate: NO | Guest-gate: NO
 */
undefined4 FUN_1004fe5ec(long param_1,string *param_2)

{
  string *psVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  string sVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  string *psVar9;
  byte *pbVar10;
  string *psVar11;
  ulong uVar12;
  
  psVar1 = (string *)(param_1 + 0x2bd0);
  bVar6 = *(byte *)(param_1 + 0x2be7);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x2bd8);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    psVar9 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar9 = psVar1;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return 0;
      }
      iVar7 = _memcmp(psVar9,pbVar10,sVar2);
      if (iVar7 == 0) {
        return 0;
      }
    }
    else {
      if (sVar2 == 0) {
        return 0;
      }
      if ((uint)*pbVar10 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x2bd1);
        do {
          uVar12 = uVar12 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar12 == 0) {
            return 0;
          }
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  sVar5 = param_2[0x17];
  uVar12 = (ulong)(byte)sVar5;
  sVar3 = *(size_t *)(param_2 + 8);
  if (-1 < (char)sVar5) {
    sVar3 = uVar12;
  }
  if (sVar3 == sVar2) {
    psVar9 = *(string **)param_2;
    if (-1 < (char)sVar5) {
      psVar9 = param_2;
    }
    psVar11 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar11 = psVar1;
    }
    if ((char)sVar5 < '\0') {
      if (sVar2 == 0) {
        return 1;
      }
      iVar7 = _memcmp(psVar9,psVar11,sVar2);
      if (iVar7 == 0) {
        return 1;
      }
    }
    else {
      if (sVar2 == 0) {
        return 1;
      }
      psVar9 = param_2;
      if ((uint)(byte)*psVar11 == ((uint)*(string **)param_2 & 0xff)) {
        do {
          uVar12 = uVar12 - 1;
          psVar11 = psVar11 + 1;
          psVar9 = psVar9 + 1;
          if (uVar12 == 0) {
            return 1;
          }
        } while (*psVar9 == *psVar11);
      }
    }
  }
  std::string::operator=(param_2,psVar1);
  return 1;
}
