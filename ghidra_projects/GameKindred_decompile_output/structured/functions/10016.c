// functions/10016 — 407 functions
#include "GameKindred.h"




void FUN_100160800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c440;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_100168f84(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c410;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_10016904c(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c3e0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001608cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c3b0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c380;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c350;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c320;
  FUN_10014ebf8(param_1 + 5,param_1[6]);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001609b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c2f0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001609f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c2c0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160a2c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10145c260;
  if (*(char *)((long)param_1 + 0x457) < '\0') {
    operator_delete((void *)param_1[0x88]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x427) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x410));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x40f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x3f8));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_100156c78(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160ab4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c290;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100160b04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c200;
  FUN_100169150(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




undefined8 * FUN_100160b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c1c8;
  param_1[3] = &PTR_FUN_10145b950;
  FUN_100156c78(param_1 + 0x11,1);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_1004f15a8(param_1 + 3);
  return param_1;
}




undefined8 * FUN_100160bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c190;
  param_1[3] = &PTR_FUN_10145b860;
  FUN_10015613c(param_1 + 0x13);
  FUN_100156080(param_1 + 0xe,1);
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_100155f24(param_1 + 10,1);
  FUN_100155eac(param_1 + 8,1);
  FUN_1004f15a8(param_1 + 3);
  return param_1;
}




void FUN_100160c3c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10015ead0();
  operator_delete(pvVar1);
  return;
}




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




void FUN_1001633f4(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_100169cc0(param_1 + 0x18,1);
  FUN_100165260(param_1);
  thunk_FUN_10012dd60();
  uVar1 = FUN_10014e398();
  FUN_10003330c(local_38,uVar1);
  FUN_10014e160();
  FUN_10014e1dc();
  FUN_10014e1b8();
  FUN_10014e3a8(local_38);
  FUN_10014e2b8(1);
  FUN_10014e16c();
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100163470(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x5450);
  iVar2 = FUN_1004d2898(puVar1,param_2,0x18);
  if (iVar2 != 0) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    *(undefined8 *)(param_1 + 0x5460) = param_2[2];
    *(undefined8 *)(param_1 + 0x5458) = uVar4;
    *puVar1 = uVar3;
    FUN_10014f88c(puVar1);
    return;
  }
  return;
}




void FUN_1001634c4(long param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  bVar3 = param_2[0x17];
  uVar5 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar5;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar7 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar4 = _memcmp(pbVar6,pbVar7,sVar1);
      if (iVar4 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      pbVar6 = param_2;
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar5 = uVar5 - 1;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar5 == 0) {
            return;
          }
        } while (*pbVar6 == *pbVar7);
      }
    }
  }
  uVar5 = FUN_1004f1670(param_1 + 0x4230);
  if ((uVar5 & 1) != 0) {
    return;
  }
  FUN_1004efbb0(param_2,param_3,param_1 + 0x4230);
  return;
}




void FUN_1001635bc(long param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar5 = FUN_1004f1670(param_1 + 0x4b10);
  if ((uVar5 & 1) != 0) {
    return;
  }
  bVar3 = param_2[0x17];
  uVar5 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar5;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar7 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar4 = _memcmp(pbVar6,pbVar7,sVar1);
      if (iVar4 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      pbVar6 = param_2;
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar5 = uVar5 - 1;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar5 == 0) {
            return;
          }
        } while (*pbVar6 == *pbVar7);
      }
    }
  }
  FUN_1004efe1c(param_2,param_3,param_1 + 0x4b10);
  return;
}




ulong FUN_1001636b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = DAT_101e3cf00;
  uVar2 = FUN_100131560();
  if (((uVar2 & 1) == 0) && (*(char *)(lVar1 + 0x5670) == '\0')) {
    return (ulong)*(uint *)(param_1 + 0x560c);
  }
  uVar2 = FUN_10034bf10(1);
  return uVar2;
}




void FUN_100163700(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x418) == 0) {
    FUN_10014e25c(param_1 + 0x54d8,param_1 + 0x54f0);
    FUN_100165174(param_1,param_1 + 0x54d8,param_1 + 0x54f0);
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  FUN_1001027ac(uVar1);
  return;
}




void FUN_100163764(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  void *local_60 [2];
  char local_49;
  undefined1 local_48;
  
  if (*(int *)(param_1 + 0x660) == 0) {
    piVar1 = (int *)(param_1 + 0x53c8);
    uVar6 = *(uint *)(param_1 + 0x650);
    if (uVar6 != 0) {
      uVar4 = 0;
      lVar5 = 0x28;
      lVar3 = param_1;
      do {
        lVar2 = *(long *)(param_1 + 0x658) + lVar5;
        lVar3 = FUN_100168518(lVar3,lVar2,piVar1);
        if ((int)lVar3 == -1) {
          FUN_10003330c(local_60,lVar2);
          local_48 = 0;
          FUN_10016861c(piVar1,local_60);
          if (local_49 < '\0') {
            operator_delete(local_60[0]);
          }
          lVar3 = *(long *)(param_1 + 0x658) + lVar5;
          lVar3 = FUN_100150248(*piVar1 + -1,lVar3 + -0x28,lVar3 + 0x18);
          *(int *)(param_1 + 0x5618) = *(int *)(param_1 + 0x5618) + 1;
          uVar6 = *(uint *)(param_1 + 0x650);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x58;
      } while (uVar4 < uVar6);
    }
    *(undefined1 *)(param_1 + 0x5676) = 1;
  }
  return;
}




void FUN_100163844(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_218 [8];
  void *local_210;
  undefined1 auStack_208 [8];
  void *local_200;
  void *local_1f8 [2];
  char local_1e1;
  undefined1 local_58;
  
  if (*(int *)(param_1 + 0x44c8) == 0) {
    puVar1 = (uint *)(param_1 + 0x53d8);
    lVar3 = *(long *)(param_1 + 0x53e0);
    if (lVar3 != 0) {
      if (*puVar1 != 0) {
        lVar4 = (ulong)*puVar1 * 0x1a8;
        do {
          lVar3 = FUN_1001690b8(lVar3);
          lVar3 = lVar3 + 0x1a8;
          lVar4 = lVar4 + -0x1a8;
        } while (lVar4 != 0);
      }
      *puVar1 = 0;
    }
    if (*(uint *)(param_1 + 0x4498) != 0) {
      lVar3 = 0;
      uVar5 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x44a0);
        iVar2 = FUN_1001686a8();
        if (iVar2 == -1) {
          FUN_100169644(local_1f8,lVar4 + lVar3);
          local_58 = 0;
          FUN_1001687b4(puVar1,local_1f8);
          FUN_1001690b8(local_1f8);
          lVar4 = *(long *)(param_1 + 0x44a0) + lVar3;
          if (*(char *)(lVar4 + 0x40) != '\0') {
            FUN_1004e3170(auStack_208,lVar4 + 0x60);
            thunk_FUN_1004e439c(auStack_218,*(long *)(param_1 + 0x44a0) + lVar3);
            FUN_10003330c(local_1f8,*(long *)(param_1 + 0x44a0) + lVar3 + 0x28);
            FUN_100152f0c(auStack_208,auStack_218,local_1f8);
            if (local_1e1 < '\0') {
              operator_delete(local_1f8[0]);
            }
            if (local_210 != (void *)0x0) {
              operator_delete__(local_210);
            }
            if (local_200 != (void *)0x0) {
              operator_delete__(local_200);
            }
          }
        }
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0x1a0;
      } while (uVar5 < *(uint *)(param_1 + 0x4498));
    }
    FUN_1000165f0(param_1 + 0x5560,*puVar1);
    *(undefined1 *)(param_1 + 0x5677) = 1;
  }
  FUN_100152ed0();
  return;
}




void FUN_1001639cc(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_f8 [8];
  void *local_f0;
  undefined1 auStack_e8 [8];
  void *local_e0;
  void *local_d8;
  void *local_d0;
  undefined7 local_c8;
  char cStack_c1;
  char local_b1;
  void *local_b0 [2];
  char local_99;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined1 local_78;
  undefined1 local_70;
  
  if (*(int *)(param_1 + 0x4c48) == 0) {
    if (*(uint *)(param_1 + 0x4c18) != 0) {
      uVar4 = 0;
      lVar3 = 0x40;
      do {
        lVar1 = *(long *)(param_1 + 0x4c20) + lVar3;
        iVar2 = FUN_100168844();
        if (iVar2 == -1) {
          thunk_FUN_1004e439c(&local_d8,lVar1 + -0x40);
          FUN_10003330c(&local_c8,lVar1 + -0x30);
          FUN_10003330c(local_b0,lVar1 + -0x18);
          thunk_FUN_1004e439c(&local_98,lVar1);
          thunk_FUN_1004e439c(&local_88,lVar1 + 0x10);
          local_78 = *(undefined1 *)(lVar1 + 0x20);
          local_70 = 0;
          FUN_100168950(param_1 + 0x53e8,&local_d8);
          if (local_80 != (void *)0x0) {
            operator_delete__(local_80);
            local_88 = 0;
            local_80 = (void *)0x0;
          }
          if (local_90 != (void *)0x0) {
            operator_delete__(local_90);
            local_98 = 0;
            local_90 = (void *)0x0;
          }
          if (local_99 < '\0') {
            operator_delete(local_b0[0]);
          }
          if (local_b1 < '\0') {
            operator_delete((void *)CONCAT17(cStack_c1,local_c8));
          }
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
          }
          *(int *)(param_1 + 0x561c) = *(int *)(param_1 + 0x561c) + 1;
          if (*(char *)(*(long *)(param_1 + 0x4c20) + lVar3 + 0x20) != '\0') {
            thunk_FUN_1004e439c(auStack_e8);
            thunk_FUN_1004e439c(auStack_f8,*(long *)(param_1 + 0x4c20) + lVar3 + -0x40);
            FUN_10003330c(&local_d8,*(long *)(param_1 + 0x4c20) + lVar3 + -0x18);
            FUN_10015421c(auStack_e8,auStack_f8,&local_d8);
            if (cStack_c1 < '\0') {
              operator_delete(local_d8);
            }
            if (local_f0 != (void *)0x0) {
              operator_delete__(local_f0);
            }
            if (local_e0 != (void *)0x0) {
              operator_delete__(local_e0);
            }
          }
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x68;
      } while (uVar4 < *(uint *)(param_1 + 0x4c18));
    }
    FUN_1000165f0(param_1 + 0x5580,*(undefined4 *)(param_1 + 0x561c));
    *(undefined1 *)(param_1 + 0x5678) = 1;
  }
  FUN_1001541e0();
  return;
}




void FUN_100163bd0(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x567a) != 0) && ((param_2 & 1) == 0)) {
    FUN_100165784(param_1,0);
  }
  *(byte *)(param_1 + 0x567a) = param_2;
  return;
}




void FUN_100163c0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x3887) < '\0') {
    if ((int)*(undefined8 *)(param_1 + 0x3878) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x3887) == '\0') {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x3870);
  uVar2 = FUN_10032c190();
  puVar3 = puVar1;
  if (*(char *)(param_1 + 0x3887) < '\0') {
    puVar3 = (undefined8 *)*puVar1;
  }
  FUN_10032c9e0(uVar2,puVar3);
  if (*(char *)(param_1 + 0x3887) < '\0') {
    **(undefined1 **)(param_1 + 0x3870) = 0;
    *(undefined8 *)(param_1 + 0x3878) = 0;
  }
  else {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)(param_1 + 0x3887) = 0;
  }
  return;
}




void FUN_100163c8c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x3a00) != 0) {
    uVar1 = FUN_10032c1a8();
    FUN_10032dc24(uVar1,*(undefined4 *)(param_1 + 0x3888));
    return;
  }
  puVar3 = (undefined8 *)(param_1 + 0x39e8);
  if (*(char *)(param_1 + 0x39ff) < '\0') {
    if ((int)*(undefined8 *)(param_1 + 0x39f0) == 0) goto LAB_100163cec;
  }
  else if (*(char *)(param_1 + 0x39ff) == '\0') {
LAB_100163cec:
    if (*(char *)(param_1 + 0x3a47) < '\0') {
      if ((int)*(undefined8 *)(param_1 + 0x3a38) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0x3a47) == '\0') {
      return;
    }
    puVar3 = (undefined8 *)(param_1 + 0x3a30);
    uVar1 = FUN_10032c1a8();
    puVar2 = puVar3;
    if (*(char *)(param_1 + 0x3a47) < '\0') {
      puVar2 = (undefined8 *)*puVar3;
    }
    FUN_10032dc5c(uVar1,puVar2);
    if (*(char *)(param_1 + 0x3a47) < '\0') {
      **(undefined1 **)(param_1 + 0x3a30) = 0;
      *(undefined8 *)(param_1 + 0x3a38) = 0;
      return;
    }
    goto LAB_100163d50;
  }
  uVar1 = FUN_10032c1a8();
  puVar2 = puVar3;
  if (*(char *)(param_1 + 0x39ff) < '\0') {
    puVar2 = (undefined8 *)*puVar3;
  }
  FUN_10032dc5c(uVar1,puVar2);
  if (*(char *)(param_1 + 0x39ff) < '\0') {
    **(undefined1 **)(param_1 + 0x39e8) = 0;
    *(undefined8 *)(param_1 + 0x39f0) = 0;
    return;
  }
LAB_100163d50:
  *(undefined1 *)puVar3 = 0;
  *(undefined1 *)((long)puVar3 + 0x17) = 0;
  return;
}




void FUN_100163d74(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x3a80);
  lVar5 = FUN_10032c1b4(plVar6);
  if (lVar5 != 0) {
    uVar1 = *(ulong *)(lVar5 + 0x68);
    if (-1 < (char)*(byte *)(lVar5 + 0x77)) {
      uVar1 = (ulong)*(byte *)(lVar5 + 0x77);
    }
    if (uVar1 == 4) {
      iVar3 = std::string::compare(lVar5 + 0x60,0,(char *)0xffffffffffffffff,0x1013d24d0);
      bVar2 = iVar3 == 0;
      if (*(int *)(param_1 + 0x3a78) != 0) {
        if (iVar3 == 0) {
          if (*(char *)(param_1 + 14999) < '\0') {
            plVar6 = (long *)*plVar6;
          }
          FUN_1001049b8(plVar6);
          return;
        }
LAB_100163e1c:
        if (*(char *)(param_1 + 14999) < '\0') {
          plVar6 = (long *)*plVar6;
        }
        FUN_1001049cc(plVar6);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x3a78) != 0) goto LAB_100163e1c;
      bVar2 = false;
    }
    iVar3 = FUN_10032f6b8(lVar5);
    if (0 < iVar3) {
      iVar3 = FUN_10032f6ec(lVar5);
      iVar4 = FUN_10032f6b8(lVar5);
      if (bVar2) {
        if (*(char *)(param_1 + 14999) < '\0') {
          plVar6 = (long *)*plVar6;
        }
        FUN_1001049bc(plVar6,lVar5);
        return;
      }
      if (*(char *)(param_1 + 14999) < '\0') {
        plVar6 = (long *)*plVar6;
      }
      FUN_1001049d0(1.0 - (float)iVar3 / (float)iVar4,plVar6,lVar5);
      return;
    }
  }
  return;
}




void FUN_100163edc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x37f7) < '\0') {
    if ((int)*(undefined8 *)(param_1 + 0x37e8) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x37f7) == '\0') {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x37e0);
  uVar2 = FUN_10032f924();
  puVar3 = puVar1;
  if (*(char *)(param_1 + 0x37f7) < '\0') {
    puVar3 = (undefined8 *)*puVar1;
  }
  FUN_10032f930(uVar2,puVar3);
  if (*(char *)(param_1 + 0x37f7) < '\0') {
    **(undefined1 **)(param_1 + 0x37e0) = 0;
    *(undefined8 *)(param_1 + 0x37e8) = 0;
  }
  else {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)(param_1 + 0x37f7) = 0;
  }
  return;
}




void FUN_100163f5c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x37af) < '\0') {
    if ((int)*(undefined8 *)(param_1 + 0x37a0) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x37af) == '\0') {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x3798);
  uVar2 = FUN_1003302c0();
  puVar3 = puVar1;
  if (*(char *)(param_1 + 0x37af) < '\0') {
    puVar3 = (undefined8 *)*puVar1;
  }
  FUN_1003302cc(uVar2,puVar3);
  if (*(char *)(param_1 + 0x37af) < '\0') {
    **(undefined1 **)(param_1 + 0x3798) = 0;
    *(undefined8 *)(param_1 + 0x37a0) = 0;
  }
  else {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)(param_1 + 0x37af) = 0;
  }
  return;
}




long FUN_100163fdc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x15) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  std::string::operator=((string *)(param_1 + 0x28),(string *)(param_2 + 0x28));
  std::string::operator=((string *)(param_1 + 0x40),(string *)(param_2 + 0x40));
  std::string::operator=((string *)(param_1 + 0x58),(string *)(param_2 + 0x58));
  std::string::operator=((string *)(param_1 + 0x70),(string *)(param_2 + 0x70));
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  std::string::operator=((string *)(param_1 + 0xa0),(string *)(param_2 + 0xa0));
  std::string::operator=((string *)(param_1 + 0xb8),(string *)(param_2 + 0xb8));
  std::string::operator=((string *)(param_1 + 0xd0),(string *)(param_2 + 0xd0));
  std::string::operator=((string *)(param_1 + 0xe8),(string *)(param_2 + 0xe8));
  std::string::operator=((string *)(param_1 + 0x100),(string *)(param_2 + 0x100));
  std::string::operator=((string *)(param_1 + 0x118),(string *)(param_2 + 0x118));
  std::string::operator=((string *)(param_1 + 0x130),(string *)(param_2 + 0x130));
  std::string::operator=((string *)(param_1 + 0x148),(string *)(param_2 + 0x148));
  std::string::operator=((string *)(param_1 + 0x160),(string *)(param_2 + 0x160));
  *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
  std::string::operator=((string *)(param_1 + 0x180),(string *)(param_2 + 0x180));
  std::string::operator=((string *)(param_1 + 0x198),(string *)(param_2 + 0x198));
  uVar1 = *(undefined8 *)(param_2 + 0x1d0);
  uVar4 = *(undefined8 *)(param_2 + 0x1b0);
  uVar3 = *(undefined8 *)(param_2 + 0x1c8);
  uVar2 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  *(undefined8 *)(param_1 + 0x1c0) = uVar2;
  *(undefined8 *)(param_1 + 0x1d0) = uVar1;
  FUN_100169214(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_100169304(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_100169384(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_100169428(param_1 + 0x208,param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x218);
  std::string::operator=((string *)(param_1 + 0x220),(string *)(param_2 + 0x220));
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  return param_1;
}




void FUN_100164138(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x1a8;
      do {
        lVar1 = FUN_1001690b8(lVar1);
        lVar1 = lVar1 + 0x1a8;
        lVar2 = lVar2 + -0x1a8;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10016426c(long param_1,uint *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  ulong uVar18;
  
  uVar8 = FUN_100131560();
  if ((uVar8 & 1) == 0) {
    iVar7 = FUN_1004f1670(param_1 + 0x3c00);
    if (iVar7 == 0) {
      FUN_1004f085c(param_1 + 0x3c00,param_2);
      return;
    }
    uVar12 = *param_2;
    if (uVar12 != 0) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(param_1 + 0x5440);
        lVar17 = *(long *)(param_2 + 2);
        if (uVar4 != 0) {
          uVar18 = 0;
          pbVar14 = (byte *)(lVar17 + uVar8 * 0x18);
          lVar15 = *(long *)(param_1 + 0x5448);
          bVar5 = pbVar14[0x17];
          sVar1 = *(size_t *)(lVar17 + uVar8 * 0x18 + 8);
          if (-1 < (char)bVar5) {
            sVar1 = (ulong)bVar5;
          }
          pbVar16 = (byte *)(lVar15 + 1);
          do {
            puVar10 = (undefined8 *)(lVar15 + uVar18 * 0x18);
            bVar6 = *(byte *)((long)puVar10 + 0x17);
            uVar9 = (ulong)bVar6;
            sVar2 = puVar10[1];
            if (-1 < (char)bVar6) {
              sVar2 = uVar9;
            }
            if (sVar2 == sVar1) {
              puVar3 = (void *)*puVar10;
              if (-1 < (char)bVar6) {
                puVar3 = puVar10;
              }
              pbVar11 = *(byte **)pbVar14;
              if (-1 < (char)bVar5) {
                pbVar11 = pbVar14;
              }
              if ((char)bVar6 < '\0') {
                if ((sVar1 == 0) || (iVar7 = _memcmp(puVar3,pbVar11,sVar1), iVar7 == 0))
                goto LAB_1001643d0;
              }
              else {
                if (sVar1 == 0) goto LAB_1001643d0;
                pbVar13 = pbVar16;
                if ((uint)*pbVar11 == ((uint)(void *)*puVar10 & 0xff)) {
                  do {
                    uVar9 = uVar9 - 1;
                    pbVar11 = pbVar11 + 1;
                    if (uVar9 == 0) goto LAB_1001643d0;
                    bVar6 = *pbVar13;
                    pbVar13 = pbVar13 + 1;
                  } while (bVar6 == *pbVar11);
                }
              }
            }
            uVar18 = uVar18 + 1;
            pbVar16 = pbVar16 + 0x18;
          } while (uVar18 != uVar4);
        }
        FUN_10001617c((uint *)(param_1 + 0x5440),lVar17 + uVar8 * 0x18);
        uVar12 = *param_2;
LAB_1001643d0:
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar12);
    }
  }
  return;
}




bool FUN_100164424(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  
  pbVar1 = (byte *)(param_1 + 0x5478);
  bVar5 = *(byte *)(param_1 + 0x548f);
  uVar9 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pbVar7 = *(byte **)pbVar1;
    if (-1 < (char)bVar5) {
      pbVar7 = pbVar1;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return false;
      }
      iVar6 = _memcmp(pbVar7,pbVar8,sVar2);
      if (iVar6 == 0) {
        return false;
      }
    }
    else {
      if (sVar2 == 0) {
        return false;
      }
      if ((uint)*pbVar8 == ((uint)*(byte **)pbVar1 & 0xff)) {
        pbVar7 = (byte *)(param_1 + 0x5479);
        do {
          uVar9 = uVar9 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar9 == 0) {
            return false;
          }
          bVar4 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar4 == *pbVar8);
      }
    }
  }
  bVar4 = param_2[0x17];
  uVar9 = (ulong)bVar4;
  sVar3 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar3 = uVar9;
  }
  if (sVar3 == sVar2) {
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    pbVar8 = *(byte **)pbVar1;
    if (-1 < (char)bVar5) {
      pbVar8 = pbVar1;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar2 != 0) && (iVar6 = _memcmp(pbVar7,pbVar8,sVar2), iVar6 != 0)) {
        return false;
      }
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar8 != ((uint)*(byte **)param_2 & 0xff)) {
        return false;
      }
      while( true ) {
        uVar9 = uVar9 - 1;
        pbVar8 = pbVar8 + 1;
        param_2 = param_2 + 1;
        if (uVar9 == 0) break;
        if (*param_2 != *pbVar8) {
          return false;
        }
      }
    }
    if (*(uint *)(param_1 + 0x5624) != 0xffffffff) {
      return *(char *)(*(long *)(param_1 + 0x5268) + (ulong)*(uint *)(param_1 + 0x5624) * 0x108 +
                      0x100) != '\0';
    }
  }
  return false;
}




bool FUN_1001645b8(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  
  pbVar1 = (byte *)(param_1 + 0x5490);
  bVar5 = *(byte *)(param_1 + 0x54a7);
  uVar9 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x5498);
  if (-1 < (char)bVar5) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pbVar7 = *(byte **)pbVar1;
    if (-1 < (char)bVar5) {
      pbVar7 = pbVar1;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return false;
      }
      iVar6 = _memcmp(pbVar7,pbVar8,sVar2);
      if (iVar6 == 0) {
        return false;
      }
    }
    else {
      if (sVar2 == 0) {
        return false;
      }
      if ((uint)*pbVar8 == ((uint)*(byte **)pbVar1 & 0xff)) {
        pbVar7 = (byte *)(param_1 + 0x5491);
        do {
          uVar9 = uVar9 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar9 == 0) {
            return false;
          }
          bVar4 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar4 == *pbVar8);
      }
    }
  }
  bVar4 = param_2[0x17];
  uVar9 = (ulong)bVar4;
  sVar3 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar3 = uVar9;
  }
  if (sVar3 == sVar2) {
    pbVar7 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar7 = param_2;
    }
    pbVar8 = *(byte **)pbVar1;
    if (-1 < (char)bVar5) {
      pbVar8 = pbVar1;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar2 != 0) && (iVar6 = _memcmp(pbVar7,pbVar8,sVar2), iVar6 != 0)) {
        return false;
      }
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar8 != ((uint)*(byte **)param_2 & 0xff)) {
        return false;
      }
      while( true ) {
        uVar9 = uVar9 - 1;
        pbVar8 = pbVar8 + 1;
        param_2 = param_2 + 1;
        if (uVar9 == 0) break;
        if (*param_2 != *pbVar8) {
          return false;
        }
      }
    }
    if (*(uint *)(param_1 + 0x5628) != 0xffffffff) {
      return *(char *)(*(long *)(param_1 + 0x5368) + (ulong)*(uint *)(param_1 + 0x5628) * 0x38 +
                      0x34) != '\0';
    }
  }
  return false;
}




void FUN_100164960(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1001649d4(undefined8 param_1,undefined8 param_2,string *param_3)

{
  ulong uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_1004eef24();
  if ((uVar1 & 1) != 0) {
    FUN_10014e3b8(local_38,param_2);
    std::string::operator=(param_3,(string *)local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    return;
  }
  std::string::operator=(param_3,(string *)&DAT_101d91198);
  return;
}




long FUN_100164a48(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  
  bVar5 = *(byte *)(param_2 + 0x17);
  uVar3 = (ulong)bVar5;
  uVar4 = *(ulong *)(param_2 + 8);
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 5) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013db1cd);
    if (iVar2 == 0) {
      return 5;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0xf) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd6f);
    if (iVar2 == 0) {
      return 6;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 7) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd7f);
    if (iVar2 == 0) {
      return 7;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar4;
  if (-1 < (char)bVar5) {
    uVar1 = uVar3;
  }
  if (uVar1 == 0xd) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd87);
    if (iVar2 == 0) {
      return 8;
    }
    bVar5 = *(byte *)(param_2 + 0x17);
    uVar3 = (ulong)bVar5;
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)bVar5) {
    uVar4 = uVar3;
  }
  if (uVar4 == 10) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ddd95);
    lVar6 = (ulong)(iVar2 == 0) << 2;
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}




void FUN_100164bd0(ulong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 ***local_98 [2];
  char local_81;
  undefined8 ***local_80 [2];
  char local_69;
  undefined1 uStack_61;
  
  *(undefined1 *)(param_1 + 0x5689) = 0;
  *(undefined8 *)(param_1 + 0x5681) = 0;
  plVar12 = (long *)param_2[3];
  uVar7 = param_1;
  while (plVar12 != param_2 + 4) {
    uVar6 = FUN_100164a48(uVar7,plVar12 + 4);
    uVar7 = uVar6;
    if ((int)uVar6 != 0) {
      puVar1 = (uint *)(param_1 + (uVar6 & 0xffffffff) * 4 + 0x562c);
      uVar5 = *puVar1;
      uVar7 = (ulong)uVar5;
      iVar3 = (int)plVar12[7];
      if (iVar3 - uVar5 != 0 && (int)uVar5 <= iVar3) {
        *(undefined1 *)(param_1 + (uVar6 & 0xffffffff) + 0x5681) = 1;
        uVar7 = FUN_10014e434(uVar7,iVar3,iVar3 - uVar5);
        *puVar1 = *(uint *)(plVar12 + 7);
      }
    }
    plVar9 = (long *)plVar12[1];
    if ((long *)plVar12[1] == (long *)0x0) {
      plVar9 = plVar12 + 2;
      bVar4 = *(long **)*plVar9 != plVar12;
      plVar12 = (long *)*plVar9;
      if (bVar4) {
        do {
          lVar11 = *plVar9;
          plVar9 = (long *)(lVar11 + 0x10);
          plVar12 = (long *)*plVar9;
        } while (*plVar12 != lVar11);
      }
    }
    else {
      do {
        plVar12 = plVar9;
        plVar9 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
  }
  if ((long *)*param_2 != param_2 + 1) {
    plVar12 = (long *)*param_2;
    do {
      uVar5 = FUN_100164a48();
      if (uVar5 != 0) {
        plVar9 = (long *)(param_1 + (ulong)uVar5 * 8 + 0x53f8);
        lVar11 = *plVar9;
        FUN_10003330c(local_80,plVar12 + 7);
        ppppuVar2 = (undefined8 ****)local_80[0];
        if (-1 < local_69) {
          ppppuVar2 = local_80;
        }
        lVar8 = FUN_1004d27c8(ppppuVar2,&uStack_61);
        if (local_69 < '\0') {
          operator_delete(local_80[0]);
        }
        if (lVar11 < lVar8) {
          *(undefined1 *)(param_1 + uVar5 + 0x5681) = 1;
          FUN_10003330c(local_98,plVar12 + 7);
          ppppuVar2 = (undefined8 ****)local_98[0];
          if (-1 < local_81) {
            ppppuVar2 = local_98;
          }
          lVar11 = FUN_1004d27c8(ppppuVar2,&uStack_61);
          *plVar9 = lVar11;
          if (local_81 < '\0') {
            operator_delete(local_98[0]);
          }
        }
      }
      lVar11 = param_1 + (ulong)uVar5 * 4;
      *(int *)(lVar11 + 0x562c) = *(int *)(lVar11 + 0x562c) + 1;
      plVar9 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) {
        plVar9 = plVar12 + 2;
        plVar10 = (long *)*plVar9;
        if ((long *)*plVar10 != plVar12) {
          do {
            lVar11 = *plVar9;
            plVar9 = (long *)(lVar11 + 0x10);
            plVar10 = (long *)*plVar9;
          } while (*plVar10 != lVar11);
        }
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar12 = plVar10;
    } while (plVar10 != param_2 + 1);
  }
  return;
}




undefined1 FUN_100164e00(long param_1,uint *param_2)

{
  return *(undefined1 *)(param_1 + (ulong)*param_2 + 0x5681);
}




void FUN_100164e14(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_100164bd0();
  iVar1 = FUN_100131560();
  if ((iVar1 != 0) && (*(int *)(param_2 + 0x108) != 4)) {
    FUN_100151010(param_2);
    return;
  }
  if (*(char *)(param_1 + 0x5685) != '\0') {
    FUN_1004f030c();
  }
  lVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x5681 + lVar2) != '\0') {
      FUN_100150fd4();
      return;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 9);
  return;
}




void FUN_100164e98(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  iVar2 = FUN_1004eef24();
  if (iVar2 != 0) {
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1004e357c(param_2,&local_48);
      pppuVar1 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar1 = &local_48;
      }
      FUN_10012c750("accountHandle",pppuVar1);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
    FUN_1004ef274(param_2,param_1 + 0x318);
    FUN_100169cc0(param_1 + 0x18,1);
  }
  return;
}




long FUN_100164f34(long param_1)

{
  undefined1 auStack_d0 [8];
  void *local_c8;
  void *local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012caa0("accountHandle",auStack_a8,0x80,0);
  FUN_10001549c(&local_c0,auStack_a8);
  if (-1 < (char)local_a9) {
    local_b8 = (ulong)local_a9;
  }
  if (local_b8 == 0) {
    FUN_1004e3120(auStack_d0,"Guest");
    FUN_1000153b4(param_1 + 0x5468,auStack_d0);
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
    }
    FUN_10012c750("accountHandle","Guest");
  }
  FUN_1004e3170(auStack_d0,&local_c0);
  FUN_1000153b4(param_1 + 0x5468,auStack_d0);
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
  }
  if ((char)local_a9 < '\0') {
    operator_delete(local_c0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return param_1 + 0x5468;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100165040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 **local_48;
  void *local_40;
  long local_38;
  
  iVar2 = FUN_1004eef24();
  if (iVar2 != 0) {
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      local_48 = (undefined8 ***)0x0;
      local_40 = (void *)0x0;
      local_38 = 0;
      FUN_1004e357c(param_3,&local_48);
      pppuVar1 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar1 = &local_48;
      }
      FUN_10012c750("accountHandle",pppuVar1);
      if (local_38 < 0) {
        operator_delete(local_48);
      }
    }
    FUN_1004e3170(&local_48,param_2);
    FUN_1004ef2a8(&local_48,param_3,param_1 + 0x378);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
    FUN_100169cc0(param_1 + 0x18,1);
  }
  return;
}




void FUN_1001650fc(long param_1,string *param_2,string *param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    std::string::operator=((string *)(param_1 + 0x54d8),param_2);
    std::string::operator=((string *)(param_1 + 0x54f0),param_3);
    FUN_1004eef94(param_2,param_3,param_4,param_1 + 0x3d8);
    return;
  }
  return;
}




void FUN_100165174(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  iVar2 = FUN_1004eef24();
  if (iVar2 != 0) {
    FUN_10012dc80();
    FUN_100169cc0(param_1 + 0x18,1);
    uVar3 = FUN_10014e398();
    FUN_10003330c(local_48,uVar3);
    FUN_10014e160();
    FUN_10014e1dc();
    FUN_10014e1b8();
    FUN_10014e3a8(local_48);
    FUN_10014e2b8(1);
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    FUN_10001549c(local_60,plVar1);
    plVar1 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar1 = param_3;
    }
    FUN_10001549c(local_78,plVar1);
    FUN_10014e22c(local_60,local_78);
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
    FUN_100102ab8(0);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




void FUN_100165260(long param_1)

{
  std::string::operator=((string *)(param_1 + 0x5478),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x5624) = 0xffffffff;
  FUN_1004f15d8(param_1 + 0x5088);
  std::string::operator=((string *)(param_1 + 0x5490),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x5628) = 0xffffffff;
  FUN_1004f15d8(param_1 + 0x52c8);
  return;
}




void FUN_1001652d4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x478);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef2e0(param_1 + 0x478);
      return;
    }
  }
  return;
}




void FUN_100165318(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x4b8);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef344(param_2,param_3,param_1 + 0x4b8);
      return;
    }
  }
  return;
}




void FUN_1001654bc(long param_1,string *param_2,string *param_3)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  void *local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  void *local_128;
  ulong local_120;
  ulong local_118;
  void *local_110;
  undefined8 uStack_108;
  long local_100;
  void *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  void *local_c8 [2];
  char local_b1;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  iVar3 = FUN_1004eef24();
  if (iVar3 != 0) {
    FUN_100165378(param_1 + 0x6c8,0x10);
    local_e0 = (void *)0x0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_f8 = (void *)0x0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_110 = (void *)0x0;
    uStack_108 = 0;
    local_100 = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_118 = 0;
    iVar3 = FUN_100131560();
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      std::operator+("elo_",param_2);
      std::string::string((string *)local_140,(string *)local_c8);
      if (local_b1 < '\0') {
        operator_delete(local_c8[0]);
      }
      pppuVar1 = (undefined8 ***)local_140[0];
      if (-1 < local_129) {
        pppuVar1 = local_140;
      }
      uVar4 = FUN_10012c8f0(pppuVar1,0);
      uVar5 = FUN_100164f34(param_1);
      FUN_1004e357c(uVar5,&local_e0);
      FUN_10012caa0("EquipedHat",local_c8,0x80,0);
      FUN_10001549c(local_158,local_c8);
      std::string::operator=((string *)&local_f8,(string *)local_158);
      if (local_141 < '\0') {
        operator_delete(local_158[0]);
      }
      FUN_10012caa0("CharmEquipedEmoji",local_c8,0x80,0);
      FUN_10001549c(local_158,local_c8);
      std::string::operator=((string *)&local_110,(string *)local_158);
      if (local_141 < '\0') {
        operator_delete(local_158[0]);
      }
      FUN_10012caa0("SocialPingEquipedPack",local_c8,0x80,0);
      FUN_10001549c(local_158,local_c8);
      std::string::operator=((string *)&local_128,(string *)local_158);
      if (local_141 < '\0') {
        operator_delete(local_158[0]);
      }
      uVar2 = local_120;
      if (-1 < (long)local_118) {
        uVar2 = local_118 >> 0x38;
      }
      if (uVar2 == 0) {
        FUN_10001549c(local_158,"SOCIAL_PINGS_DEFAULT_PACK");
        std::string::operator=((string *)&local_128,(string *)local_158);
        if (local_141 < '\0') {
          operator_delete(local_158[0]);
        }
      }
      if (local_129 < '\0') {
        operator_delete(local_140[0]);
      }
    }
    std::string::operator=((string *)(param_1 + 0x698),param_2);
    std::string::operator=((string *)(param_1 + 0x6b0),param_3);
    *(undefined4 *)(param_1 + 0xb00) = uVar4;
    std::string::operator=((string *)(param_1 + 0xb08),(string *)&local_e0);
    std::string::operator=((string *)(param_1 + 0xb20),(string *)&local_f8);
    std::string::operator=((string *)(param_1 + 0xb38),(string *)&local_110);
    std::string::operator=((string *)(param_1 + 0xb50),(string *)&local_128);
    std::string::operator=((string *)(param_1 + 0x54a8),param_2);
    FUN_1004f0040(param_1 + 0x668);
    if ((long)local_118 < 0) {
      operator_delete(local_128);
    }
    if (local_100 < 0) {
      operator_delete(local_110);
    }
    if (local_e8 < 0) {
      operator_delete(local_f8);
    }
    if (local_d0 < 0) {
      operator_delete(local_e0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100165784(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0xb68);
    if ((uVar2 & 1) == 0) {
      FUN_1004f0070(param_1 + 0xb68);
    }
    FUN_10010260c(*(undefined4 *)(param_1 + 0x566c),param_1 + 0x54a8,param_2);
    return;
  }
  return;
}




void FUN_1001657f0(long param_1,string *param_2,string *param_3)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    std::string::operator=((string *)(param_1 + 0x1068),param_2);
    std::string::operator=((string *)(param_1 + 0x14b8),param_3);
    FUN_1004ef548(param_1 + 0x1040);
    return;
  }
  return;
}




void FUN_100165860(long param_1,string *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_130 [2];
  char local_119;
  void *local_118;
  ulong local_110;
  ulong local_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  void *local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  iVar2 = FUN_1004eef24();
  if (iVar2 != 0) {
    local_d0 = (void *)0x0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_100 = (void *)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_118 = (void *)0x0;
    local_110 = 0;
    local_108 = 0;
    iVar2 = FUN_100131560();
    if (iVar2 != 0) {
      uVar3 = FUN_100164f34(param_1);
      FUN_1004e357c(uVar3,&local_d0);
      FUN_10012caa0("EquipedHat",auStack_b8,0x80,0);
      FUN_10001549c(local_130,auStack_b8);
      std::string::operator=((string *)&local_e8,(string *)local_130);
      if (local_119 < '\0') {
        operator_delete(local_130[0]);
      }
      FUN_10012caa0("CharmEquipedEmoji",auStack_b8,0x80,0);
      FUN_10001549c(local_130,auStack_b8);
      std::string::operator=((string *)&local_100,(string *)local_130);
      if (local_119 < '\0') {
        operator_delete(local_130[0]);
      }
      FUN_10012caa0("SocialPingEquipedPack",auStack_b8,0x80,0);
      FUN_10001549c(local_130,auStack_b8);
      std::string::operator=((string *)&local_118,(string *)local_130);
      if (local_119 < '\0') {
        operator_delete(local_130[0]);
      }
      uVar1 = local_110;
      if (-1 < (long)local_108) {
        uVar1 = local_108 >> 0x38;
      }
      if (uVar1 == 0) {
        FUN_10001549c(local_130,"SOCIAL_PINGS_DEFAULT_PACK");
        std::string::operator=((string *)&local_118,(string *)local_130);
        if (local_119 < '\0') {
          operator_delete(local_130[0]);
        }
      }
    }
    std::string::operator=((string *)(param_1 + 0x14f8),param_2);
    std::string::operator=((string *)(param_1 + 0x1510),(string *)&local_d0);
    std::string::operator=((string *)(param_1 + 0x1540),(string *)&local_e8);
    std::string::operator=((string *)(param_1 + 0x1558),(string *)&local_100);
    std::string::operator=((string *)(param_1 + 0x1570),(string *)&local_118);
    FUN_1004ef578(param_1 + 0x14d0);
    if ((long)local_108 < 0) {
      operator_delete(local_118);
    }
    if (local_f0 < 0) {
      operator_delete(local_100);
    }
    if (local_d8 < 0) {
      operator_delete(local_e8);
    }
    if (local_c0 < 0) {
      operator_delete(local_d0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100165aa0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1001697bc(param_1 + 0x19d0,param_2);
    FUN_1004ef5a8(param_1 + 0x19a8);
    return;
  }
  return;
}




void FUN_100165afc(long param_1,string *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    std::string::operator=((string *)(param_1 + 0x1e28),param_2);
    FUN_1004ef66c(param_1 + 0x1e00);
    FUN_100169cc0(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_100165b64(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004ef818(param_1 + 0x628);
    return;
  }
  return;
}




void FUN_100165b98(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_100165378(param_1 + 0xbc8,0x10);
    if (param_2 < *(uint *)(param_1 + 0x53c8)) {
      FUN_1004ef69c(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20,param_1 + 0xb98);
      *(undefined1 *)(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20 + 0x18) = 1;
      if (*(int *)(param_1 + 0x5618) != 0) {
        *(int *)(param_1 + 0x5618) = *(int *)(param_1 + 0x5618) + -1;
      }
    }
    FUN_100169cc0(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_100165c34(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if ((iVar1 != 0) && (param_2 < *(uint *)(param_1 + 0x53c8))) {
    FUN_1004ef6d0(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20,param_1 + 0xfe0);
    *(undefined1 *)(*(long *)(param_1 + 0x53d0) + (ulong)param_2 * 0x20 + 0x18) = 1;
    if (*(int *)(param_1 + 0x5618) != 0) {
      *(int *)(param_1 + 0x5618) = *(int *)(param_1 + 0x5618) + -1;
    }
  }
  return;
}




void FUN_100165e04(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004ef63c(param_1 + 0x2bc0);
    FUN_100169cc0(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_100165e48(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x2c20);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef704(param_2,param_1 + 0x2c20);
    }
    FUN_100169cc0(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_100165eb0(long param_1,undefined8 param_2,string *param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    iVar1 = FUN_100131560();
    if (iVar1 != 0) {
      std::string::operator=((string *)(param_1 + 0x2ca8),param_3);
    }
    uVar2 = FUN_1004f1670(param_1 + 0x2c80);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef738(param_2,param_1 + 0x2c80);
    }
    FUN_100169cc0(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_100165f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x2ce0);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef76c(param_2,param_3,param_4,param_5,param_1 + 0x2ce0);
    }
    FUN_100169cc0(param_1 + 0x278,1);
    return;
  }
  return;
}




void FUN_100165fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x2d40);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef7ac(param_2,param_3,param_1 + 0x2d40,param_4);
    }
    FUN_100169cc0(param_1 + 0x278,1);
    return;
  }
  return;
}




undefined8 FUN_10016636c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_1004eef24();
  if ((int)uVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x3650);
    if ((uVar2 & 1) == 0) {
      FUN_1004f0138(param_1 + 0x3650);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}




void FUN_1001663b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x3580);
    if ((uVar2 & 1) == 0) {
      FUN_1004efe84(param_2,param_3,param_1 + 0x3580);
      return;
    }
  }
  return;
}




void FUN_10016641c(long param_1)

{
  int iVar1;
  ulong uVar2;
  void *local_38 [2];
  char local_21;
  
  uVar2 = FUN_100131560();
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_1004eef24(), iVar1 != 0)) {
    FUN_10001549c(local_38,PTR_s_Achievement_Tutorial_Initiation__10184e3e0);
    FUN_1004eff5c(local_38,param_1 + 0x4ef0);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    FUN_10001549c(local_38,PTR_s_Achievement_Tutorial_GoldRush_St_10184e3e8);
    FUN_1004eff5c(local_38,param_1 + 0x4f20);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




undefined1  [16] FUN_1001664b0(long param_1)

{
  uint64_t uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  dVar4 = *(double *)(param_1 + 0x55c0);
  dVar2 = 0.0;
  if (0.0 < dVar4) {
    uVar1 = _mach_absolute_time();
    dVar2 = dVar4 + (double)((uVar1 - *(long *)(param_1 + 0x5550)) * DAT_101d91638) * -1e-09;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}




void FUN_100166510(undefined8 param_1,undefined8 param_2)

{
  FUN_10032c624(param_2);
  return;
}




void FUN_100166518(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_10016652c(param_1,plVar1);
  return;
}




bool FUN_10016652c(long param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 != (char *)0x0) {
    iVar1 = _strcmp(param_2,"");
    if (iVar1 == 0) {
      return false;
    }
    if (*(uint *)(param_1 + 0x53a8) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      while( true ) {
        pcVar2 = (char *)(*(long *)(param_1 + 0x53b0) + lVar3);
        if (pcVar2[0x17] < '\0') {
          pcVar2 = *(char **)(*(long *)(param_1 + 0x53b0) + lVar3);
        }
        iVar1 = _strcmp(pcVar2,param_2);
        if (iVar1 == 0) break;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x18;
        if (*(uint *)(param_1 + 0x53a8) <= uVar4) {
          return iVar1 == 0;
        }
      }
      return true;
    }
  }
  return false;
}




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




bool FUN_10016663c(long param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(uint *)(param_1 + 0x53b8) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    do {
      pcVar3 = (char *)(*(long *)(param_1 + 0x53c0) + lVar4);
      if (pcVar3[0x17] < '\0') {
        pcVar3 = *(char **)(*(long *)(param_1 + 0x53c0) + lVar4);
      }
      iVar2 = _strcmp(pcVar3,param_2);
      bVar1 = iVar2 == 0;
      if (iVar2 == 0) {
        return true;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < *(uint *)(param_1 + 0x53b8));
  }
  return bVar1;
}




int FUN_1001666cc(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(uint *)(param_1 + 0x53a8) == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    do {
      lVar2 = FUN_10032c624(*(long *)(param_1 + 0x53b0) + lVar4);
      if (lVar2 != 0) {
        iVar1 = FUN_10032dac0(lVar2,1);
        iVar3 = iVar3 + iVar1;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < *(uint *)(param_1 + 0x53a8));
  }
  return iVar3;
}




void FUN_100166750(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_90 [5];
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_48;
  undefined8 local_40;
  long lStack_38;
  
  iVar2 = FUN_10016680c();
  if (iVar2 != 0) {
    FUN_1004f1580(local_90);
    local_90[0] = &PTR_FUN_101454740;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_40 = 0;
    lStack_38 = 0;
    uVar1 = (uint)param_2 ^ 1;
    local_48 = (void *)0x0;
    FUN_1004effc4(uVar1,local_90);
    uVar3 = FUN_1004d29d0();
    if ((uVar1 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x55a0) = uVar3;
      FUN_10012faa0();
    }
    else {
      *(undefined8 *)(param_1 + 0x55a8) = uVar3;
      FUN_10012ffc0();
    }
    FUN_100104a68(param_2);
    local_90[0] = &PTR_FUN_101454740;
    if (lStack_38 < 0) {
      operator_delete(local_48);
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
    FUN_1004f15a8(local_90);
  }
  return;
}




bool FUN_10016680c(long param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x55a0) == 0) {
    lVar3 = FUN_10012fbd4();
    *(long *)(param_1 + 0x55a0) = lVar3;
  }
  if (*(long *)(param_1 + 0x55a8) == 0) {
    lVar3 = FUN_1001300f4();
    *(long *)(param_1 + 0x55a8) = lVar3;
  }
  plVar2 = (long *)(param_1 + 0x55a0);
  if (param_2 == 0) {
    plVar2 = (long *)(param_1 + 0x55a8);
  }
  lVar4 = *plVar2;
  lVar3 = FUN_1004d29d0();
  bVar1 = 0xe10 < lVar3 - lVar4;
  if (param_2 == 0) {
    bVar1 = 0x4b0 < lVar3 - lVar4;
  }
  return bVar1;
}




int FUN_100166890(void)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = FUN_1001340a4();
  lVar2 = *(long *)(lVar1 + 8);
  lVar1 = FUN_1004f1a74(0);
  fVar3 = (float)(lVar2 - lVar1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return (int)((float)(int)fVar3 * 1.1574074e-05);
}




long FUN_1001668dc(void)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = FUN_1001340a4();
  lVar2 = *(long *)(lVar1 + 8);
  lVar1 = FUN_1004f1a74(0);
  fVar3 = (float)(lVar2 - lVar1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return (long)fVar3;
}




void FUN_100166918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **local_90 [5];
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_48;
  undefined8 local_40;
  long lStack_38;
  
  FUN_1004f1580(local_90);
  local_90[0] = &PTR_FUN_101454740;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_40 = 0;
  lStack_38 = 0;
  local_48 = (void *)0x0;
  FUN_1004f03dc(param_2,param_3,param_4,local_90);
  local_90[0] = &PTR_FUN_101454740;
  if (lStack_38 < 0) {
    operator_delete(local_48);
  }
  if (local_58 < 0) {
    operator_delete(local_68);
  }
  FUN_1004f15a8(local_90);
  return;
}




void FUN_1001669b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1004f02ac(param_2);
  return;
}




void FUN_1001669b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1001697bc(param_1 + 0x2348,param_3);
    FUN_1004ef5d8(param_2,param_1 + 0x2320);
    return;
  }
  return;
}




undefined8 FUN_100166a1c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4f90);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004f0168(param_1 + 0x4f90);
  return uVar2;
}




undefined8 FUN_100166a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4fd0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004f0198(param_2,param_3,param_1 + 0x4fd0);
  return uVar2;
}




void FUN_100166ab8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_100131560();
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_1004eef24(), iVar1 != 0)) {
    uVar2 = FUN_1004f1670(param_1 + 0x3cb8);
    if ((uVar2 & 1) == 0) {
      FUN_1004f08c8(param_1 + 0x3cb8);
      return;
    }
  }
  return;
}




void FUN_100166b08(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **local_58 [5];
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_1004eef24();
    if ((uVar1 & 1) == 0) {
      FUN_1004f1580(local_58);
      local_30 = 0;
      uStack_28 = 0;
      local_58[0] = &PTR_FUN_10145c130;
      FUN_100155588(local_58);
      local_58[0] = &PTR_FUN_10145c130;
      FUN_10015d368(&local_30,1);
      FUN_1004f15a8(local_58);
    }
    else {
      uVar1 = FUN_1004f1670(param_1 + 0x3e70);
      if ((uVar1 & 1) == 0) {
        FUN_1004f0994(param_1 + 0x3e70,param_2);
        return;
      }
    }
  }
  return;
}




void FUN_100166bac(long param_1,undefined8 param_2)

{
  FUN_1004f06e4(param_2,param_1 + 0x38f0);
  return;
}




void FUN_100166bc0(long param_1,undefined8 param_2)

{
  FUN_1004f0718(param_2,param_1 + 0x3980);
  return;
}




void FUN_100166bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1004f0890(param_2,param_3,param_1 + 0x3c38);
  return;
}




void FUN_100166bec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004f08f8(param_2,param_1 + 0x3d60);
  return;
}




void FUN_100166c2c(long param_1,undefined8 param_2)

{
  FUN_1004f092c(param_2,param_1 + 0x3de0);
  return;
}




void FUN_100166c40(long param_1,undefined8 param_2)

{
  FUN_1004f0960(param_2,param_1 + 0x3e28);
  return;
}




undefined8 FUN_100166c54(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x3ea8);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004f0448(param_1 + 0x3ea8);
  return uVar2;
}




undefined8 FUN_100166c94(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x3f68);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004f0418(param_1 + 0x3f68);
  return uVar2;
}




undefined8 FUN_100166cd4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4f50);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004eff90(param_2,param_1 + 0x4f50);
  return uVar2;
}




void FUN_100166d1c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4f8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004ef310(param_1 + 0x4f8);
  return;
}




void FUN_100166d54(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x578);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef37c(param_1 + 0x578);
      return;
    }
  }
  return;
}




void FUN_100166d98(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    uVar2 = FUN_1004f1670(param_1 + 0x5b8);
    if ((uVar2 & 1) == 0) {
      FUN_1004ef3ac(param_1 + 0x5b8);
      return;
    }
  }
  return;
}




void FUN_100166ddc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x538);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004ef328(param_2,param_1 + 0x538);
  return;
}




undefined8 FUN_100166e1c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_1004f1670(param_1 + 0x4070);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_1004f04a8(param_2,param_1 + 0x4070);
      return uVar2;
    }
  }
  return 0;
}




undefined8 FUN_100166e70(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x40b0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004f04dc(param_2,param_1 + 0x40b0);
  return uVar2;
}




undefined8 FUN_100166eb8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_1004f1670(param_1 + 0x40f0);
  if ((uVar1 & 1) == 0) {
    FUN_10001549c(local_38,"login_first7");
    uVar2 = FUN_1004f04dc(local_38,param_1 + 0x40f0);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_100166f28(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4130);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004f0510(param_2,param_1 + 0x4130);
  return uVar2;
}




undefined8 FUN_100166f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4200);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_1004f0544(param_2,param_3,param_1 + 0x4200);
  return uVar2;
}




void FUN_100166fcc(long param_1)

{
  FUN_10001617c(param_1 + 0x53a8);
  return;
}




void FUN_100166fd8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4470);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efbe8(param_1 + 0x4470);
  return;
}




void FUN_100167014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1004e357c(param_3,&local_58);
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_1004e357c(param_4,&local_70);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_1004e357c(param_5,&local_88);
  uVar1 = FUN_1004f1670(param_1 + 0x44d0);
  if ((uVar1 & 1) == 0) {
    FUN_1004ef8a8(param_2,&local_58,&local_70,&local_88,param_6,param_1 + 0x44d0);
  }
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_1001670f4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4530);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004ef984(param_2,param_1 + 0x4530);
  return;
}




void FUN_100167138(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  
  uVar7 = FUN_1004f1670(param_1 + 0x4590);
  if ((uVar7 & 1) == 0) {
    FUN_1004ef91c(param_2,param_1 + 0x4590);
    if (*(uint *)(param_1 + 0x53d8) != 0) {
      uVar7 = 0;
      do {
        lVar13 = *(long *)(param_1 + 0x53e0);
        lVar9 = lVar13 + uVar7 * 0x1a8;
        bVar4 = *(byte *)(lVar9 + 0x3f);
        uVar8 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x30);
        if (-1 < (char)bVar4) {
          sVar1 = uVar8;
        }
        bVar5 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar5) {
          sVar2 = (ulong)bVar5;
        }
        if (sVar1 == sVar2) {
          pvVar10 = *(void **)(lVar9 + 0x28);
          puVar3 = pvVar10;
          if (-1 < (char)bVar4) {
            puVar3 = (undefined8 *)(lVar9 + 0x28);
          }
          pbVar12 = *(byte **)param_2;
          if (-1 < (char)bVar5) {
            pbVar12 = param_2;
          }
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 == 0))
            goto LAB_100167240;
          }
          else if (sVar1 == 0) {
LAB_100167240:
            *(undefined1 *)(lVar13 + uVar7 * 0x1a8 + 0x1a0) = 1;
          }
          else if ((uint)*pbVar12 == ((uint)pvVar10 & 0xff)) {
            pbVar11 = (byte *)(lVar13 + uVar7 * 0x1a8 + 0x29);
            do {
              uVar8 = uVar8 - 1;
              pbVar12 = pbVar12 + 1;
              if (uVar8 == 0) goto LAB_100167240;
              bVar4 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar4 == *pbVar12);
          }
        }
        FUN_100016598(param_1 + 0x5560,0xffffffff);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x53d8));
    }
  }
  return;
}




void FUN_10016727c(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  
  uVar7 = FUN_1004f1670(param_1 + 0x45f0);
  if ((uVar7 & 1) == 0) {
    FUN_1004ef950(param_2,param_1 + 0x45f0);
    if (*(uint *)(param_1 + 0x53d8) != 0) {
      uVar7 = 0;
      do {
        lVar13 = *(long *)(param_1 + 0x53e0);
        lVar9 = lVar13 + uVar7 * 0x1a8;
        bVar4 = *(byte *)(lVar9 + 0x3f);
        uVar8 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x30);
        if (-1 < (char)bVar4) {
          sVar1 = uVar8;
        }
        bVar5 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar5) {
          sVar2 = (ulong)bVar5;
        }
        if (sVar1 == sVar2) {
          pvVar10 = *(void **)(lVar9 + 0x28);
          puVar3 = pvVar10;
          if (-1 < (char)bVar4) {
            puVar3 = (undefined8 *)(lVar9 + 0x28);
          }
          pbVar12 = *(byte **)param_2;
          if (-1 < (char)bVar5) {
            pbVar12 = param_2;
          }
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 == 0))
            goto LAB_100167384;
          }
          else if (sVar1 == 0) {
LAB_100167384:
            *(undefined1 *)(lVar13 + uVar7 * 0x1a8 + 0x1a0) = 1;
          }
          else if ((uint)*pbVar12 == ((uint)pvVar10 & 0xff)) {
            pbVar11 = (byte *)(lVar13 + uVar7 * 0x1a8 + 0x29);
            do {
              uVar8 = uVar8 - 1;
              pbVar12 = pbVar12 + 1;
              if (uVar8 == 0) goto LAB_100167384;
              bVar4 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar4 == *pbVar12);
          }
        }
        FUN_100016598(param_1 + 0x5560,0xffffffff);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x53d8));
    }
  }
  return;
}




void FUN_1001673c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 18000);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004ef9b8(param_2,param_1 + 18000);
  return;
}




void FUN_100167404(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x46b0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efb0c(param_2,param_1 + 0x46b0);
  return;
}




void FUN_100167448(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4710);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004ef8ec(param_1 + 0x4710);
  return;
}




void FUN_100167484(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1004e357c(param_3,&local_38);
  uVar1 = FUN_1004f1670(param_1 + 0x4770);
  if ((uVar1 & 1) == 0) {
    FUN_1004ef9ec(param_2,&local_38,param_1 + 0x4770);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_1001674f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1004e357c(param_4,&local_48);
  uVar1 = FUN_1004f1670(param_1 + 0x47d0);
  if ((uVar1 & 1) == 0) {
    FUN_1004efa24(param_2,param_3,&local_48,param_1 + 0x47d0);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_100167574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1004e357c(param_4,&local_48);
  uVar1 = FUN_1004f1670(param_1 + 0x4830);
  if ((uVar1 & 1) == 0) {
    FUN_1004efa60(param_2,param_3,&local_48,param_1 + 0x4830);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_1001675f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4890);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efa9c(param_2,param_3,param_1 + 0x4890);
  return;
}




void FUN_10016764c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x48f0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efad4(param_2,param_3,param_1 + 0x48f0);
  return;
}




void FUN_1001676a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4950);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efb40(param_2,param_3,param_1 + 0x4950);
  return;
}




void FUN_1001676fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x49b0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efb78(param_2,param_3,param_1 + 0x49b0);
  return;
}




void FUN_100167754(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4a10);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efc18(param_1 + 0x4a10);
  return;
}




void FUN_100167790(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4a50);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efc48(param_1 + 0x4a50);
  return;
}




void FUN_1001677cc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4a90);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efc78(param_1 + 0x4a90);
  return;
}




void FUN_100167808(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4ad0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efca8(param_2,param_3,param_1 + 0x4ad0);
  return;
}




void FUN_100167860(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4bf0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efe54(param_1 + 0x4bf0);
  return;
}




void FUN_10016789c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4c50);
  if ((uVar1 & 1) == 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_1004e357c(param_3,&local_48);
    local_60 = (void *)0x0;
    uStack_58 = 0;
    local_50 = 0;
    FUN_1004e357c(param_4,&local_60);
    FUN_1004efce0(param_2,&local_48,&local_60,param_1 + 0x4c50);
    if (local_50 < 0) {
      operator_delete(local_60);
    }
    if (local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return;
}




void FUN_100167940(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4cb0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efdb4(param_2,param_1 + 0x4cb0);
  return;
}




void FUN_100167984(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  
  uVar7 = FUN_1004f1670(param_1 + 0x4d10);
  if ((uVar7 & 1) == 0) {
    FUN_1004efd4c(param_2,param_1 + 0x4d10);
    uVar13 = *(uint *)(param_1 + 0x53e8);
    if (uVar13 != 0) {
      uVar7 = 0;
      do {
        lVar14 = *(long *)(param_1 + 0x53f0);
        lVar9 = lVar14 + uVar7 * 0x70;
        bVar4 = *(byte *)(lVar9 + 0x3f);
        uVar8 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x30);
        if (-1 < (char)bVar4) {
          sVar1 = uVar8;
        }
        bVar5 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar5) {
          sVar2 = (ulong)bVar5;
        }
        if (sVar1 == sVar2) {
          pvVar10 = *(void **)(lVar9 + 0x28);
          puVar3 = pvVar10;
          if (-1 < (char)bVar4) {
            puVar3 = (undefined8 *)(lVar9 + 0x28);
          }
          pbVar12 = *(byte **)param_2;
          if (-1 < (char)bVar5) {
            pbVar12 = param_2;
          }
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 == 0))
            goto LAB_100167a90;
          }
          else if (sVar1 == 0) {
LAB_100167a90:
            *(undefined1 *)(lVar14 + uVar7 * 0x70 + 0x68) = 1;
          }
          else if ((uint)*pbVar12 == ((uint)pvVar10 & 0xff)) {
            pbVar11 = (byte *)(lVar14 + uVar7 * 0x70 + 0x29);
            do {
              uVar8 = uVar8 - 1;
              pbVar12 = pbVar12 + 1;
              if (uVar8 == 0) goto LAB_100167a90;
              bVar4 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar4 == *pbVar12);
          }
        }
        if (*(int *)(param_1 + 0x561c) != 0) {
          *(int *)(param_1 + 0x561c) = *(int *)(param_1 + 0x561c) + -1;
        }
        if (0 < *(int *)(param_1 + 0x5598)) {
          FUN_100016598(param_1 + 0x5580,0xffffffff);
          uVar13 = *(uint *)(param_1 + 0x53e8);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar13);
    }
  }
  return;
}




void FUN_100167aec(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  
  uVar7 = FUN_1004f1670(param_1 + 0x4d70);
  if ((uVar7 & 1) == 0) {
    FUN_1004efd80(param_2,param_1 + 0x4d70);
    uVar13 = *(uint *)(param_1 + 0x53e8);
    if (uVar13 != 0) {
      uVar7 = 0;
      do {
        lVar14 = *(long *)(param_1 + 0x53f0);
        lVar9 = lVar14 + uVar7 * 0x70;
        bVar4 = *(byte *)(lVar9 + 0x3f);
        uVar8 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x30);
        if (-1 < (char)bVar4) {
          sVar1 = uVar8;
        }
        bVar5 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar5) {
          sVar2 = (ulong)bVar5;
        }
        if (sVar1 == sVar2) {
          pvVar10 = *(void **)(lVar9 + 0x28);
          puVar3 = pvVar10;
          if (-1 < (char)bVar4) {
            puVar3 = (undefined8 *)(lVar9 + 0x28);
          }
          pbVar12 = *(byte **)param_2;
          if (-1 < (char)bVar5) {
            pbVar12 = param_2;
          }
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 == 0))
            goto LAB_100167bf8;
          }
          else if (sVar1 == 0) {
LAB_100167bf8:
            *(undefined1 *)(lVar14 + uVar7 * 0x70 + 0x68) = 1;
          }
          else if ((uint)*pbVar12 == ((uint)pvVar10 & 0xff)) {
            pbVar11 = (byte *)(lVar14 + uVar7 * 0x70 + 0x29);
            do {
              uVar8 = uVar8 - 1;
              pbVar12 = pbVar12 + 1;
              if (uVar8 == 0) goto LAB_100167bf8;
              bVar4 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar4 == *pbVar12);
          }
        }
        if (*(int *)(param_1 + 0x561c) != 0) {
          *(int *)(param_1 + 0x561c) = *(int *)(param_1 + 0x561c) + -1;
        }
        if (0 < *(int *)(param_1 + 0x5598)) {
          FUN_100016598(param_1 + 0x5580,0xffffffff);
          uVar13 = *(uint *)(param_1 + 0x53e8);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar13);
    }
  }
  return;
}




void FUN_100167c54(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4dd0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efde8(param_2,param_1 + 0x4dd0);
  return;
}




void FUN_100167c98(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004f1670(param_1 + 0x4e30);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004efd1c(param_1 + 0x4e30);
  return;
}




void FUN_100167cd4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x567b) = param_2;
  return;
}




void FUN_100167ce0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    FUN_1004f0338();
    FUN_1004f1a5c();
    FUN_1004f030c();
    FUN_10016641c(param_1);
    return;
  }
  return;
}




void FUN_100167d20(undefined8 param_1,long *param_2)

{
  long *plVar1;
  size_t sVar2;
  ulong uVar3;
  byte bVar4;
  byte ****ppppbVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  byte ****ppppbVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  byte ***local_90;
  size_t sStack_88;
  byte local_79;
  undefined8 ***local_78;
  ulong local_70;
  undefined8 local_68;
  
  local_78 = (undefined8 ****)0x0;
  local_70 = 0;
  local_68 = 0;
  uVar8 = FUN_100164f34();
  FUN_1004e357c(uVar8,&local_78);
  FUN_10001549c(&local_90,"[PLAYER_NAME]");
  uVar15 = sStack_88;
  ppppbVar14 = (byte ****)local_90;
  uVar16 = (uint)(char)local_79;
  sVar2 = sStack_88;
  ppppbVar5 = (byte ****)local_90;
  if (-1 < (int)uVar16) {
    sVar2 = (ulong)local_79;
    ppppbVar5 = &local_90;
  }
  bVar4 = *(byte *)((long)param_2 + 0x17);
  plVar1 = (long *)*param_2;
  if (-1 < (char)bVar4) {
    plVar1 = param_2;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
LAB_100167e14:
    uVar17 = (uint)local_68._7_1_;
    do {
      if (-1 < (char)uVar16) {
        uVar15 = (ulong)(uVar16 & 0xff);
      }
      ppppuVar6 = (undefined8 ****)local_78;
      if (-1 < (char)uVar17) {
        ppppuVar6 = &local_78;
      }
      std::string::replace((ulong)param_2,uVar12,(char *)(uVar15 & 0xffffffff),(ulong)ppppuVar6);
      uVar15 = sStack_88;
      ppppbVar14 = (byte ****)local_90;
      uVar17 = (uint)(char)local_68._7_1_;
      uVar3 = local_70;
      if (-1 < (int)uVar17) {
        uVar3 = (ulong)local_68._7_1_;
      }
      uVar12 = uVar12 + (uVar3 & 0xffffffff);
      uVar16 = (uint)(char)local_79;
      sVar2 = sStack_88;
      ppppbVar5 = (byte ****)local_90;
      if (-1 < (int)uVar16) {
        sVar2 = (ulong)local_79;
        ppppbVar5 = &local_90;
      }
      uVar3 = param_2[1];
      plVar1 = (long *)*param_2;
      if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
        uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
        plVar1 = param_2;
      }
      if (uVar3 < uVar12) break;
      if (sVar2 != 0) {
        pvVar11 = (void *)((long)plVar1 + uVar12);
        pvVar10 = (void *)((long)plVar1 + uVar3);
        lVar13 = (long)pvVar10 - (long)pvVar11;
        if (lVar13 < (long)sVar2) break;
        bVar4 = *(byte *)ppppbVar5;
        while( true ) {
          if ((0xfffffffffffffffe < lVar13 - sVar2) ||
             (pvVar11 = _memchr(pvVar11,(uint)bVar4,(lVar13 - sVar2) + 1), pvVar11 == (void *)0x0))
          goto LAB_100167f38;
          iVar7 = _memcmp(pvVar11,ppppbVar5,sVar2);
          if (iVar7 == 0) break;
          pvVar11 = (void *)((long)pvVar11 + 1);
          lVar13 = (long)pvVar10 - (long)pvVar11;
          if (lVar13 < (long)sVar2) goto LAB_100167f38;
        }
        if (pvVar11 == pvVar10) break;
        uVar12 = (long)pvVar11 - (long)plVar1;
      }
    } while (uVar12 != 0xffffffffffffffff);
  }
  else {
    uVar12 = param_2[1];
    if (-1 < (char)bVar4) {
      uVar12 = (ulong)bVar4;
    }
    if ((long)sVar2 <= (long)uVar12) {
      pvVar11 = (void *)((long)plVar1 + uVar12);
      bVar4 = *(byte *)ppppbVar5;
      plVar9 = plVar1;
      do {
        if ((0xfffffffffffffffe < uVar12 - sVar2) ||
           (pvVar10 = _memchr(plVar9,(uint)bVar4,(uVar12 - sVar2) + 1), pvVar10 == (void *)0x0))
        break;
        iVar7 = _memcmp(pvVar10,ppppbVar5,sVar2);
        if (iVar7 == 0) {
          if ((pvVar10 != pvVar11) &&
             (uVar12 = (long)pvVar10 - (long)plVar1, uVar12 != 0xffffffffffffffff))
          goto LAB_100167e14;
          break;
        }
        plVar9 = (long *)((long)pvVar10 + 1);
        uVar12 = (long)pvVar11 - (long)plVar9;
      } while ((long)sVar2 <= (long)uVar12);
    }
  }
LAB_100167f38:
  if ((int)uVar16 < 0) {
    operator_delete(ppppbVar14);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}




void FUN_100167f98(void)

{
  size_t sVar1;
  undefined8 ****ppppuVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  size_t sVar9;
  byte *pbVar10;
  byte ****ppppbVar11;
  undefined8 ***local_4e8 [2];
  char local_4d1;
  void *local_4d0;
  size_t local_4c8;
  byte local_4b9;
  undefined1 auStack_4b4 [4];
  void *local_4b0;
  undefined8 uStack_4a8;
  long local_4a0;
  void *local_498;
  undefined8 uStack_490;
  long local_488;
  void *local_480;
  undefined8 uStack_478;
  long local_470;
  void *local_468;
  undefined8 uStack_460;
  long local_458;
  byte ***local_450;
  size_t local_448;
  ulong local_440;
  undefined1 auStack_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_450 = (byte ***)0x0;
  local_448 = 0;
  local_440 = 0;
  FUN_1004ef16c(&local_450);
  iVar5 = FUN_10014e20c();
  local_468 = (void *)0x0;
  uStack_460 = 0;
  local_458 = 0;
  local_480 = (void *)0x0;
  uStack_478 = 0;
  local_470 = 0;
  local_498 = (void *)0x0;
  uStack_490 = 0;
  local_488 = 0;
  local_4b0 = (void *)0x0;
  uStack_4a8 = 0;
  local_4a0 = 0;
  FUN_10012d8cc(&local_468,auStack_4b4,&local_480,&local_498,&local_4b0);
  FUN_10012caa0("initialAccount",auStack_438,0x400,"");
  pvVar7 = (void *)FUN_10001549c(&local_4d0,auStack_438);
  sVar9 = (size_t)local_4b9;
  uVar6 = (uint)(char)local_4b9;
  sVar1 = local_4c8;
  if (-1 < (int)uVar6) {
    sVar1 = sVar9;
  }
  if (sVar1 == 0) {
    ppppbVar11 = (byte ****)local_450;
    if (-1 < (long)local_440) {
      ppppbVar11 = &local_450;
    }
    pvVar7 = (void *)FUN_10012c750("initialAccount",ppppbVar11);
    sVar9 = (size_t)local_4b9;
    uVar6 = (uint)local_4b9;
  }
  if (-1 < (char)uVar6) {
    local_4c8 = sVar9;
  }
  if (local_4c8 == 0) {
    bVar4 = false;
LAB_100168120:
    pcVar8 = "authenticatedPlayer";
    if ((iVar5 != 0) && (pcVar8 = "alternateGuestPlayer", !bVar4)) {
      iVar5 = FUN_10012dcec(pvVar7,"alternateGuestPlayer");
      if (iVar5 == 0) {
        pcVar8 = "pristineGuestPlayer";
      }
    }
  }
  else {
    sVar1 = local_448;
    if (-1 < (long)local_440) {
      sVar1 = local_440 >> 0x38;
    }
    if (local_4c8 == sVar1) {
      ppppbVar11 = (byte ****)local_450;
      if (-1 < (long)local_440) {
        ppppbVar11 = &local_450;
      }
      if ((uVar6 >> 7 & 1) != 0) {
        uVar6 = _memcmp(local_4d0,ppppbVar11,local_4c8);
        pvVar7 = (void *)(ulong)uVar6;
        bVar4 = uVar6 != 0;
        goto LAB_100168120;
      }
      if ((uint)*(byte *)ppppbVar11 == ((uint)local_4d0 & 0xff)) {
        pbVar10 = (byte *)((ulong)&local_4d0 | 1);
        do {
          sVar9 = sVar9 - 1;
          ppppbVar11 = (byte ****)((long)ppppbVar11 + 1);
          bVar4 = false;
          pvVar7 = local_4d0;
          if (sVar9 == 0) goto LAB_100168120;
          bVar3 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar3 == *(byte *)ppppbVar11);
      }
    }
    pcVar8 = "alternateGuestPlayer";
    if (iVar5 == 0) {
      pcVar8 = "authenticatedPlayer";
    }
  }
  FUN_10001549c(local_4e8,pcVar8);
  ppppuVar2 = (undefined8 ****)local_4e8[0];
  if (-1 < local_4d1) {
    ppppuVar2 = local_4e8;
  }
  FUN_100102198("playerCategory",ppppuVar2,1);
  if (local_4d1 < '\0') {
    operator_delete(local_4e8[0]);
  }
  if ((char)local_4b9 < '\0') {
    operator_delete(local_4d0);
  }
  if (local_4a0 < 0) {
    operator_delete(local_4b0);
  }
  if (local_488 < 0) {
    operator_delete(local_498);
  }
  if (local_470 < 0) {
    operator_delete(local_480);
  }
  if (local_458 < 0) {
    operator_delete(local_468);
  }
  if ((long)local_440 < 0) {
    operator_delete(local_450);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




ulong FUN_100168518(undefined8 param_1,byte *param_2,uint *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  uVar4 = *param_3;
  pbVar2 = *(byte **)param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar6 = (ulong)param_2[0x17];
  }
  if (uVar4 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_3 + 2);
    pbVar13 = (byte *)(lVar12 + 1);
    do {
      puVar1 = (undefined8 *)(lVar12 + uVar11 * 0x20);
      bVar5 = *(byte *)((long)puVar1 + 0x17);
      uVar8 = (ulong)bVar5;
      sVar3 = puVar1[1];
      if (-1 < (char)bVar5) {
        sVar3 = uVar8;
      }
      if (sVar3 == sVar6) {
        if ((char)bVar5 < '\0') {
          if ((sVar6 == 0) || (iVar7 = _memcmp((void *)*puVar1,pbVar2,sVar6), iVar7 == 0)) {
LAB_1001685e0:
            if (*(char *)(lVar12 + uVar11 * 0x20 + 0x18) == '\0') {
              return uVar11;
            }
          }
        }
        else {
          if (sVar6 == 0) goto LAB_1001685e0;
          pbVar10 = pbVar13;
          pbVar9 = pbVar2;
          if ((uint)*pbVar2 == ((uint)(void *)*puVar1 & 0xff)) {
            do {
              uVar8 = uVar8 - 1;
              pbVar9 = pbVar9 + 1;
              if (uVar8 == 0) goto LAB_1001685e0;
              bVar5 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar5 == *pbVar9);
          }
        }
      }
      uVar11 = uVar11 + 1;
      pbVar13 = pbVar13 + 0x20;
    } while (uVar11 != uVar4);
  }
  return 0xffffffff;
}




void FUN_10016861c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100169894(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(param_2 + 0x18);
  return;
}




ulong FUN_1001686a8(undefined8 param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  uVar3 = *param_3;
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_3 + 2);
    pbVar13 = (byte *)(lVar12 + 0x29);
    do {
      lVar9 = lVar12 + uVar11 * 0x1a8;
      bVar4 = *(byte *)(lVar9 + 0x3f);
      uVar7 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar9 + 0x30);
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(lVar9 + 0x28),pbVar1,sVar5), iVar6 == 0))
          {
LAB_100168778:
            if (*(char *)(lVar12 + uVar11 * 0x1a8 + 0x1a0) == '\0') {
              return uVar11;
            }
          }
        }
        else {
          if (sVar5 == 0) goto LAB_100168778;
          pbVar10 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 0x28) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) goto LAB_100168778;
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      pbVar13 = pbVar13 + 0x1a8;
    } while (uVar11 != uVar3);
  }
  return 0xffffffff;
}




void FUN_1001687b4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100169964(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x1a8;
  FUN_100169644(lVar4 + -0x1a8,param_2);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}




ulong FUN_100168844(undefined8 param_1,byte *param_2,uint *param_3)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  
  uVar3 = *param_3;
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_3 + 2);
    pbVar13 = (byte *)(lVar12 + 0x29);
    do {
      lVar9 = lVar12 + uVar11 * 0x70;
      bVar4 = *(byte *)(lVar9 + 0x3f);
      uVar7 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar9 + 0x30);
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(lVar9 + 0x28),pbVar1,sVar5), iVar6 == 0))
          {
LAB_100168914:
            if (*(char *)(lVar12 + uVar11 * 0x70 + 0x68) == '\0') {
              return uVar11;
            }
          }
        }
        else {
          if (sVar5 == 0) goto LAB_100168914;
          pbVar10 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 0x28) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) goto LAB_100168914;
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      pbVar13 = pbVar13 + 0x70;
    } while (uVar11 != uVar3);
  }
  return 0xffffffff;
}




void FUN_100168950(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100169a34(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x70;
  thunk_FUN_1004e439c(lVar4 + -0x70,param_2);
  FUN_10003330c(lVar4 + -0x60,param_2 + 0x10);
  FUN_10003330c(lVar4 + -0x48,param_2 + 0x28);
  thunk_FUN_1004e439c(lVar4 + -0x30,param_2 + 0x40);
  thunk_FUN_1004e439c(lVar4 + -0x20,param_2 + 0x50);
  *(undefined1 *)(lVar4 + -0x10) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x68);
  return;
}




void FUN_100168a18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c190;
  param_1[3] = &PTR_FUN_10145b860;
  FUN_10015613c(param_1 + 0x13);
  FUN_100156080(param_1 + 0xe,1);
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_100155f24(param_1 + 10,1);
  FUN_100155eac(param_1 + 8,1);
  FUN_1004f15a8(param_1 + 3);
  operator_delete(param_1);
  return;
}




void FUN_100168a98(long param_1)

{
  FUN_1004ef224(param_1 + 0x18);
  return;
}




long FUN_100168aa0(long param_1)

{
  return param_1 + 0x18;
}




long FUN_100168aa8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1004e313c();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1004e313c(lVar1 + 0x28);
  FUN_1004e313c(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_1004e313c(param_1 + 0x60);
  FUN_1004e313c(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  FUN_100155fb0(param_1);
  return param_1;
}




void FUN_100168b10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c1c8;
  param_1[3] = &PTR_FUN_10145b950;
  FUN_100156c78(param_1 + 0x11,1);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_1004f15a8(param_1 + 3);
  operator_delete(param_1);
  return;
}




void FUN_100168b90(long param_1)

{
  FUN_1004ef7e8(param_1 + 0x18);
  return;
}




long FUN_100168b98(long param_1)

{
  return param_1 + 0x18;
}




void FUN_100168ba0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c200;
  FUN_100169150(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168bd8(void)

{
  return 0xe;
}




void FUN_100168be0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f15a8();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168bf4(void)

{
  return 0xc;
}




void FUN_100168bfc(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145c260;
  if (*(char *)((long)param_1 + 0x457) < '\0') {
    operator_delete((void *)param_1[0x88]);
  }
  lVar2 = 0;
  do {
    if (*(char *)((long)param_1 + lVar2 + 0x427) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x410));
    }
    if (*(char *)((long)param_1 + lVar2 + 0x40f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x3f8));
    }
    lVar2 = lVar2 + -0x40;
  } while (lVar2 != -0x400);
  FUN_100156c78(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168c88(void)

{
  return 0x48;
}




void FUN_100168c90(void)

{
  return;
}




void FUN_100168c94(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c290;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168ce4(void)

{
  return 0x49;
}




void FUN_100168cec(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c2c0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168d2c(void)

{
  return 0x2a;
}




void FUN_100168d34(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c2f0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168d74(void)

{
  return 0x29;
}




void FUN_100168d7c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c320;
  FUN_10014ebf8(param_1 + 5,param_1[6]);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168db4(void)

{
  return 0x1d;
}




void FUN_100168dbc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c350;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168dfc(void)

{
  return 0x1e;
}




void FUN_100168e04(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c380;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168e44(void)

{
  return 0x1f;
}




void FUN_100168e4c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c3b0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168e8c(void)

{
  return 0x20;
}




void FUN_100168e94(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c3e0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168ed4(void)

{
  return 0x28;
}




void FUN_100168edc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c410;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_10016904c(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168f28(void)

{
  return 0x11;
}




void FUN_100168f30(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c440;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_100168f84(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100168f7c(void)

{
  return 0x14;
}




void FUN_10016904c(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x1a0;
      do {
        lVar1 = FUN_1001690b8(lVar1);
        lVar1 = lVar1 + 0x1a0;
        lVar2 = lVar2 + -0x1a0;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_1001690b8(undefined8 *param_1)

{
  FUN_100143e0c(param_1 + 0x17);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_100169150(uint *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x57) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x40));
        }
        if (*(char *)(lVar1 + 0x3f) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x28));
        }
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x27) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x10));
        }
        if (*(void **)(lVar1 + 8) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 8));
          *(undefined8 *)(lVar3 + lVar4) = 0;
          ((undefined8 *)(lVar3 + lVar4))[1] = 0;
        }
        lVar4 = lVar4 + 0x58;
      } while ((ulong)uVar2 * 0x58 - lVar4 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100169214(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 != param_2) {
    FUN_10015a0b0(param_1,1);
    FUN_1001599c4(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        lVar1 = lVar7 + lVar5;
        lVar2 = lVar6 + lVar5;
        FUN_10003330c(lVar1,lVar2);
        thunk_FUN_1004e439c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x28,lVar2 + 0x28);
        uVar8 = *(undefined8 *)(lVar2 + 0x40);
        *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
        *(undefined8 *)(lVar1 + 0x40) = uVar8;
        uVar9 = *(undefined8 *)(lVar2 + 0x58);
        uVar8 = *(undefined8 *)(lVar2 + 0x50);
        uVar11 = *(undefined8 *)(lVar2 + 0x68);
        uVar10 = *(undefined8 *)(lVar2 + 0x60);
        uVar12 = *(undefined8 *)(lVar2 + 0x70);
        uVar14 = *(undefined8 *)(lVar2 + 0x88);
        uVar13 = *(undefined8 *)(lVar2 + 0x80);
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + 0x78);
        *(undefined8 *)(lVar1 + 0x70) = uVar12;
        *(undefined8 *)(lVar1 + 0x88) = uVar14;
        *(undefined8 *)(lVar1 + 0x80) = uVar13;
        *(undefined8 *)(lVar1 + 0x58) = uVar9;
        *(undefined8 *)(lVar1 + 0x50) = uVar8;
        *(undefined8 *)(lVar1 + 0x68) = uVar11;
        *(undefined8 *)(lVar1 + 0x60) = uVar10;
        uVar9 = *(undefined8 *)(lVar2 + 0x98);
        uVar8 = *(undefined8 *)(lVar2 + 0x90);
        uVar11 = *(undefined8 *)(lVar2 + 0xa8);
        uVar10 = *(undefined8 *)(lVar2 + 0xa0);
        uVar12 = *(undefined8 *)(lVar2 + 0xb0);
        uVar14 = *(undefined8 *)(lVar2 + 200);
        uVar13 = *(undefined8 *)(lVar2 + 0xc0);
        *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
        *(undefined8 *)(lVar1 + 0xb0) = uVar12;
        *(undefined8 *)(lVar1 + 200) = uVar14;
        *(undefined8 *)(lVar1 + 0xc0) = uVar13;
        *(undefined8 *)(lVar1 + 0x98) = uVar9;
        *(undefined8 *)(lVar1 + 0x90) = uVar8;
        *(undefined8 *)(lVar1 + 0xa8) = uVar11;
        *(undefined8 *)(lVar1 + 0xa0) = uVar10;
        uVar9 = *(undefined8 *)(lVar2 + 0xd8);
        uVar8 = *(undefined8 *)(lVar2 + 0xd0);
        uVar11 = *(undefined8 *)(lVar2 + 0xe8);
        uVar10 = *(undefined8 *)(lVar2 + 0xe0);
        uVar13 = *(undefined8 *)(lVar2 + 0xf8);
        uVar12 = *(undefined8 *)(lVar2 + 0xf0);
        *(undefined4 *)(lVar1 + 0xff) = *(undefined4 *)(lVar2 + 0xff);
        *(undefined8 *)(lVar1 + 0xe8) = uVar11;
        *(undefined8 *)(lVar1 + 0xe0) = uVar10;
        *(undefined8 *)(lVar1 + 0xf8) = uVar13;
        *(undefined8 *)(lVar1 + 0xf0) = uVar12;
        *(undefined8 *)(lVar1 + 0xd8) = uVar9;
        *(undefined8 *)(lVar1 + 0xd0) = uVar8;
        lVar5 = lVar5 + 0x108;
      } while ((ulong)uVar3 * 0x108 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_100169304(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_10015a500(param_1,1);
    FUN_100159b94(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar1 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 5;
      do {
        lVar1 = FUN_10003330c(lVar1,lVar3);
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
        lVar3 = lVar3 + 0x20;
        lVar1 = lVar1 + 0x20;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_100169384(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_10015a474(param_1,1);
    FUN_100159cfc(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_1 + 2) + 0x18;
      lVar4 = (ulong)*param_2 * 0x38;
      lVar3 = *(long *)(param_2 + 2) + 0x18;
      do {
        FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
        FUN_10003330c(lVar2,lVar3);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
        lVar2 = lVar2 + 0x38;
        lVar3 = lVar3 + 0x38;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_100169428(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_10015a3d8(param_1,1);
    FUN_100159ea4(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        lVar1 = lVar7 + lVar5;
        lVar2 = lVar6 + lVar5;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
        lVar5 = lVar5 + 0x50;
      } while ((ulong)uVar3 * 0x50 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_1001694e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_10015aacc(param_1,1);
    FUN_10015a7f4(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_1 + 2) + 0x18;
      lVar5 = (ulong)*param_2 * 0x38;
      lVar4 = *(long *)(param_2 + 2) + 0x18;
      do {
        FUN_10003330c(lVar3 + -0x18,lVar4 + -0x18);
        thunk_FUN_1004e439c(lVar3,lVar4);
        uVar2 = *(undefined8 *)(lVar4 + 0x10);
        *(undefined8 *)(lVar3 + 0x17) = *(undefined8 *)(lVar4 + 0x17);
        *(undefined8 *)(lVar3 + 0x10) = uVar2;
        lVar3 = lVar3 + 0x38;
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_10016958c(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_10015ab5c(param_1,1);
    FUN_10015a9a8(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        lVar1 = lVar7 + lVar5;
        lVar2 = lVar6 + lVar5;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
        lVar5 = lVar5 + 0x50;
      } while ((ulong)uVar3 * 0x50 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




long FUN_100169644(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = thunk_FUN_1004e439c();
  FUN_10003330c(lVar1 + 0x10,param_2 + 0x10);
  FUN_10003330c(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_10003330c(param_1 + 0x48,param_2 + 0x48);
  FUN_10003330c(param_1 + 0x60,param_2 + 0x60);
  FUN_10003330c(param_1 + 0x78,param_2 + 0x78);
  FUN_10003330c(param_1 + 0x90,param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_10003330c(param_1 + 0xc0,param_2 + 0xc0);
  FUN_10003330c(param_1 + 0xd8,param_2 + 0xd8);
  FUN_10003330c(param_1 + 0xf0,param_2 + 0xf0);
  FUN_10003330c(param_1 + 0x108,param_2 + 0x108);
  FUN_10003330c(param_1 + 0x120,param_2 + 0x120);
  FUN_10003330c(param_1 + 0x138,param_2 + 0x138);
  FUN_10003330c(param_1 + 0x150,param_2 + 0x150);
  FUN_10003330c(param_1 + 0x168,param_2 + 0x168);
  FUN_10003330c(param_1 + 0x180,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  return param_1;
}




void FUN_100169740(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_10001629c(param_1,1);
    FUN_100016390(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar1 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x18;
      do {
        lVar1 = FUN_10003330c(lVar1,lVar3);
        lVar3 = lVar3 + 0x18;
        lVar1 = lVar1 + 0x18;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_1001697bc(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    FUN_100156c78(param_1,1);
    FUN_100156b10(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        lVar1 = lVar7 + lVar5;
        lVar2 = lVar6 + lVar5;
        FUN_10003330c(lVar1,lVar2);
        thunk_FUN_1004e439c(lVar1 + 0x18,lVar2 + 0x18);
        uVar9 = *(undefined8 *)(lVar2 + 0x30);
        uVar8 = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar1 + 0x30) = uVar9;
        *(undefined8 *)(lVar1 + 0x28) = uVar8;
        FUN_10003330c(lVar1 + 0x40,lVar2 + 0x40);
        FUN_10003330c(lVar1 + 0x58,lVar2 + 0x58);
        FUN_10003330c(lVar1 + 0x70,lVar2 + 0x70);
        lVar5 = lVar5 + 0x88;
      } while ((ulong)uVar3 * 0x88 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_100169894(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100169964(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x1a8);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x1a8;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_100169644(pvVar2,pvVar4);
        *(undefined1 *)(lVar3 + 0x1a0) = *(undefined1 *)((long)pvVar4 + 0x1a0);
        pvVar4 = (void *)((long)pvVar4 + 0x1a8);
        pvVar2 = (void *)(lVar3 + 0x1a8);
        lVar5 = lVar5 + -0x1a8;
      } while (lVar5 != 0);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x1a8;
        do {
          FUN_1001690b8(pvVar4);
          pvVar4 = (void *)((long)pvVar4 + 0x1a8);
          lVar5 = lVar5 + -0x1a8;
        } while (lVar5 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100169ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c470;
  param_1[1] = 0xbf80000000000000;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}




void FUN_100169bc4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    uVar2 = FUN_1004f1670();
    fVar3 = *(float *)(param_1 + 1);
    fVar4 = *(float *)((long)param_1 + 0xc);
    if (((uVar2 & 1) == 0) &&
       ((*(char *)((long)param_1 + 0x11) != '\0' ||
        (((fVar3 <= 0.0 && (0.0 < fVar4)) && ((char)param_1[2] == '\0')))))) {
      (**(code **)(*param_1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (0.0 < fVar4) {
      if (0.0 < fVar3) {
        fVar3 = (float)FUN_1010a1cd4();
        fVar3 = *(float *)(param_1 + 1) - fVar3;
      }
      else {
        fVar3 = *(float *)((long)param_1 + 0xc);
      }
      *(float *)(param_1 + 1) = fVar3;
    }
  }
  return;
}




void FUN_100169c6c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    if (*(float *)((long)param_1 + 0xc) != -1.0) {
      *(float *)(param_1 + 1) = *(float *)((long)param_1 + 0xc);
    }
                    /* WARNING: Could not recover jumptable at 0x000100169cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}




void FUN_100169cc0(long *param_1,int param_2)

{
  *(char *)(param_1 + 2) = (char)param_2;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x20))();
    FUN_1004f15d8();
    return;
  }
  return;
}




void FUN_100169cec(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}




void FUN_100169cf8(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fminnm(*(undefined4 *)(param_2 + 8),param_1);
  *(undefined4 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




undefined1 FUN_100169d08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}




void FUN_100169d10(long *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2 + 0x28;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x30);
  if (param_3 != 0) {
    uVar1 = FUN_100061d30();
    FUN_10005f828(uVar1,param_2);
    return;
  }
  return;
}




void FUN_100169d54(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        uVar3 = FUN_100061d30();
        FUN_10005faf8(uVar3,lVar2);
      }
      uVar4 = DAT_101dc0b88;
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 1) = uVar4;
  }
  return;
}




undefined8 FUN_100169dd0(undefined8 param_1)

{
  FUN_10001629c(param_1,1);
  return param_1;
}




bool FUN_100169df8(char *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  if (DAT_101d23508 == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    do {
      pcVar3 = (char *)(DAT_101d23510 + lVar4);
      if (pcVar3[0x17] < '\0') {
        pcVar3 = *(char **)(DAT_101d23510 + lVar4);
      }
      iVar2 = _strcmp(pcVar3,param_1);
      bVar1 = iVar2 == 0;
      if (iVar2 == 0) {
        return true;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < DAT_101d23508);
  }
  return bVar1;
}




void FUN_100169e84(undefined8 param_1)

{
  ulong uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_100169df8();
  if ((uVar1 & 1) == 0) {
    FUN_10001549c(local_38,param_1);
    FUN_10001617c(&DAT_101d23508,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100169edc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1006581d8(param_2,&local_38);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_100658d0c(pppuVar1,param_1);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_100169f44(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*KindredEffects*");
  FUN_100169f74(uVar1,param_1);
  return;
}




void FUN_100169f74(long *param_1,char *param_2)

{
  undefined1 **ppuVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 local_48;
  
  plVar7 = (long *)*param_1;
  puVar6 = (undefined8 *)*plVar7;
  while( true ) {
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    iVar2 = _strcmp((char *)*puVar6,param_2);
    if ((iVar2 == 0) && (uVar3 = FUN_100169df8(param_2), (uVar3 & 1) == 0)) break;
    plVar7 = plVar7 + 1;
    puVar6 = (undefined8 *)*plVar7;
  }
  puVar6 = (undefined8 *)*plVar7;
  plVar8 = (long *)puVar6[2];
  if (*plVar8 != 0) {
    do {
      local_48 = 0;
      uVar4 = FUN_100658cac(*(undefined8 *)(*plVar8 + 8),&local_48,0);
      FUN_100169edc(local_60,*(undefined8 *)(*plVar8 + 8));
      uVar5 = FUN_1006663f0();
      ppuVar1 = (undefined1 **)local_60[0];
      if (-1 < local_49) {
        ppuVar1 = local_60;
      }
      FUN_10066a4c8(uVar5,ppuVar1,local_48,uVar4);
      FUN_10001617c(&DAT_101d23518,local_60);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
      plVar8 = plVar8 + 1;
    } while (*plVar8 != 0);
    puVar6 = (undefined8 *)*plVar7;
  }
  FUN_100169e84(*puVar6);
  if ((*(long *)(*plVar7 + 8) != 0) && (uVar3 = FUN_1004d2538(), (uVar3 & 1) == 0)) {
    FUN_100169f74(param_1,*(undefined8 *)(*plVar7 + 8));
  }
  return;
}




long FUN_10016a09c(char *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((param_1 != (char *)0x0) && (uVar2 = FUN_1004d2538(), (uVar2 & 1) == 0)) {
    uVar3 = FUN_100345b94();
    plVar4 = (long *)FUN_10034c450(uVar3,"*KindredEffects*");
    puVar5 = *(undefined8 **)*plVar4;
    plVar4 = (long *)*plVar4;
    while (puVar5 != (undefined8 *)0x0) {
      iVar1 = _strcmp((char *)*puVar5,param_1);
      if ((iVar1 == 0) && (uVar2 = FUN_100169df8(param_1), (uVar2 & 1) == 0)) {
        return *plVar4;
      }
      puVar5 = (undefined8 *)plVar4[1];
      plVar4 = plVar4 + 1;
    }
  }
  return 0;
}




void FUN_10016a114(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  undefined8 local_48;
  long local_40;
  undefined4 local_38;
  
  if (*(long *)(param_2 + 2) != 0) {
    *param_2 = 0;
  }
  lVar3 = FUN_10016a09c();
  if (lVar3 != 0) {
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    do {
      plVar5 = *(long **)(lVar3 + 0x10);
      lVar4 = *plVar5;
      while (lVar4 != 0) {
        plVar5 = plVar5 + 1;
        FUN_10016a238(&local_60,lVar4,lVar4);
        lVar4 = *plVar5;
      }
      lVar3 = FUN_10016a09c(*(undefined8 *)(lVar3 + 8));
    } while (lVar3 != 0);
    uVar1 = 0;
    do {
      uVar6 = uVar1;
      if ((uint)local_60 == uVar6) goto LAB_10016a21c;
      uVar1 = uVar6 + 1;
    } while (*(int *)(local_58 + (ulong)uVar6 * 8 + 4) == -1);
    if ((uint)local_60 + 1 != uVar6 + 1) {
      do {
        FUN_1000228fc(param_2,local_40 + (ulong)*(uint *)(local_58 + (ulong)uVar6 * 8 + 4) * 4);
        uVar1 = (uint)local_60;
        if ((uint)local_60 <= uVar6 + 1) {
          uVar1 = uVar6 + 1;
        }
        do {
          uVar6 = uVar6 + 1;
          uVar2 = uVar1;
          if ((uint)local_60 <= uVar6) break;
          uVar2 = uVar6;
        } while (*(int *)(local_58 + (ulong)uVar6 * 8 + 4) == -1);
        uVar6 = uVar2;
      } while ((uint)local_60 != uVar6);
    }
LAB_10016a21c:
    FUN_10016a70c(&local_60);
  }
  return;
}




undefined8 FUN_10016a238(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 local_40;
  void *local_38;
  
  uVar5 = *param_2;
  uVar7 = *param_1;
  if (uVar7 != 0) {
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar9 = uVar5 / uVar7;
    }
    uVar10 = (ulong)(uVar5 - uVar9 * uVar7);
    lVar8 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar8 + uVar10 * 8) != uVar5) {
      do {
        if (*(int *)(lVar8 + uVar10 * 8 + 4) == -1) break;
        uVar9 = uVar7;
        if (0 < (int)(uint)uVar10) {
          uVar9 = (uint)uVar10;
        }
        uVar10 = (ulong)(uVar9 - 1);
      } while (*(uint *)(lVar8 + uVar10 * 8) != uVar5);
      if ((int)uVar10 == -1) goto LAB_10016a2d8;
    }
    uVar9 = *(uint *)(lVar8 + uVar10 * 8 + 4);
    if (uVar9 != 0xffffffff) {
      *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar9 * 4) = *param_3;
      return 0;
    }
  }
LAB_10016a2d8:
  uVar9 = param_1[4];
  param_1[4] = uVar9 + 1;
  if (uVar7 >> 1 < uVar9 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar7 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar7 = (uint)local_40;
    uVar11 = uVar9 - 1;
    if ((int)uVar11 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar11 * 8 + 4);
        if (uVar9 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar6 + (ulong)uVar11 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar10 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar10 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar10) {
              uVar4 = (uint)uVar10;
            }
            uVar10 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar10 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar10 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar9;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar9 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar11,uVar9);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      uVar7 = *param_1;
    }
  }
  uVar9 = 0;
  if (uVar7 != 0) {
    uVar9 = uVar5 / uVar7;
  }
  uVar10 = (ulong)(uVar5 - uVar9 * uVar7);
  lVar8 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar8 + uVar10 * 8 + 4);
  while (iVar2 != -1) {
    uVar9 = uVar7;
    if (0 < (int)(uint)uVar10) {
      uVar9 = (uint)uVar10;
    }
    uVar10 = (ulong)(uVar9 - 1);
    iVar2 = *(int *)(lVar8 + uVar10 * 8 + 4);
  }
  puVar1 = (uint *)(lVar8 + uVar10 * 8);
  *puVar1 = uVar5;
  uVar5 = FUN_10016a790(param_1,param_3);
  puVar1[1] = uVar5;
  return 1;
}




void FUN_10016a42c(undefined8 param_1,uint *param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined1 *local_70 [2];
  char local_59;
  undefined8 local_58;
  
  puVar2 = (undefined8 *)FUN_10016a09c();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_100169e84(*puVar2);
    do {
      plVar7 = (long *)puVar2[2];
      piVar6 = (int *)*plVar7;
      while (piVar6 != (int *)0x0) {
        if (*param_2 != 0) {
          lVar8 = 0;
          do {
            if (*piVar6 == *(int *)(*(long *)(param_2 + 2) + lVar8)) {
              local_58 = 0;
              uVar3 = FUN_100658cac(*(undefined8 *)(*plVar7 + 8),&local_58,0);
              FUN_100169edc(local_70,*(undefined8 *)(*plVar7 + 8));
              uVar4 = FUN_1006663f0();
              ppuVar1 = (undefined1 **)local_70[0];
              if (-1 < local_59) {
                ppuVar1 = local_70;
              }
              FUN_10066a4c8(uVar4,ppuVar1,local_58,uVar3);
              FUN_10001617c(&DAT_101d23518,local_70);
              uVar5 = *param_2;
              if ((ulong)uVar5 * 4 + -4 != lVar8) {
                *(undefined4 *)(*(long *)(param_2 + 2) + lVar8) =
                     *(undefined4 *)(*(long *)(param_2 + 2) + ((ulong)uVar5 - 1) * 4);
                uVar5 = *param_2;
              }
              *param_2 = uVar5 - 1;
              if (local_59 < '\0') {
                operator_delete(local_70[0]);
              }
              break;
            }
            lVar8 = lVar8 + 4;
          } while ((ulong)*param_2 * 4 - lVar8 != 0);
        }
        plVar7 = plVar7 + 1;
        piVar6 = (int *)*plVar7;
      }
      puVar2 = (undefined8 *)FUN_10016a09c(puVar2[1]);
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_10016a578(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,"*KindredEffects*");
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != (undefined8 *)0x0) {
    param_1 = param_1 + 1;
    FUN_100169f74(uVar1,*puVar2);
    puVar2 = (undefined8 *)*param_1;
  }
  return;
}




void FUN_10016a5c8(long *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_50 [2];
  char local_39;
  undefined8 local_38;
  
  param_1 = (long *)*param_1;
  lVar4 = *param_1;
  while (lVar4 != 0) {
    local_38 = 0;
    uVar2 = FUN_100658cac(*(undefined8 *)(*param_1 + 8),&local_38,0);
    FUN_100169edc(local_50,*(undefined8 *)(*param_1 + 8));
    uVar3 = FUN_1006663f0();
    ppuVar1 = (undefined1 **)local_50[0];
    if (-1 < local_39) {
      ppuVar1 = local_50;
    }
    FUN_10066a4c8(uVar3,ppuVar1,local_38,uVar2);
    FUN_10001617c(&DAT_101d23518,local_50);
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
    param_1 = param_1 + 1;
    lVar4 = *param_1;
  }
  return;
}




void FUN_10016a678(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (DAT_101d23518 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar1 = DAT_101d23520;
      uVar2 = FUN_1006663f0();
      lVar3 = lVar1 + lVar4;
      if (*(char *)(lVar3 + 0x17) < '\0') {
        lVar3 = *(long *)(lVar1 + lVar4);
      }
      FUN_10066a664(uVar2,lVar3);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < DAT_101d23518);
  }
  FUN_10001629c(&DAT_101d23508,0);
  FUN_10001629c(&DAT_101d23518,0);
  FUN_1006663f0();
  FUN_100669350();
  return;
}




uint * FUN_10016a70c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10016a790(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10016a7f4(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 4);
  }
  *(undefined4 *)(lVar2 + uVar1 * 4) = *param_2;
  return;
}




void FUN_10016a7f4(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10016a874(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_10016a874(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10016a8f0(void)

{
  _DAT_101d23508 = 0;
  DAT_101d23510 = 0;
  ___cxa_atexit(FUN_100169dd0,&DAT_101d23508,0x100000000);
  _DAT_101d23518 = 0;
  DAT_101d23520 = 0;
  ___cxa_atexit(FUN_100169dd0,&DAT_101d23518,0x100000000);
  return;
}




void FUN_10016a944(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_10184e3f0 = 0;
  if ((param_1 != (char *)0x0) && (DAT_10184e3f8 != -1)) {
    puVar2 = &DAT_10184e3f8;
    iVar1 = _strcmp(param_1,PTR_s_unknown_10184e400);
    if (iVar1 != 0) {
      puVar2 = &DAT_10184e3f8;
      do {
        if (puVar2[4] == -1) {
          return;
        }
        iVar1 = _strcmp(param_1,*(char **)(puVar2 + 6));
        puVar2 = puVar2 + 4;
      } while (iVar1 != 0);
    }
    DAT_10184e3f0 = *puVar2;
  }
  return;
}




undefined4 FUN_10016a9c8(void)

{
  return DAT_10184e3f0;
}




undefined * FUN_10016a9d4(void)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_10184e3f8 != -1) {
    uVar1 = 0;
    piVar3 = &DAT_10184e408;
    iVar2 = DAT_10184e3f8;
    do {
      if (iVar2 == DAT_10184e3f0) {
        return (&PTR_s_unknown_10184e400)[(uVar1 & 0xffffffff) * 2];
      }
      uVar1 = uVar1 + 1;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 4;
    } while (iVar2 != -1);
  }
  return (undefined *)0x0;
}




undefined * FUN_10016aa2c(int param_1)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_10184e3f8 != -1) {
    uVar1 = 0;
    piVar2 = &DAT_10184e408;
    iVar3 = DAT_10184e3f8;
    do {
      if (iVar3 == param_1) {
        return (&PTR_s_unknown_10184e400)[(uVar1 & 0xffffffff) * 2];
      }
      uVar1 = uVar1 + 1;
      iVar3 = *piVar2;
      piVar2 = piVar2 + 4;
    } while (iVar3 != -1);
  }
  return (undefined *)0x0;
}




undefined * FUN_10016aa7c(void)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  switch(DAT_10184e3f0) {
  case 2:
    pcVar2 = "PROFILE_REGION_NAME_ACC";
    break;
  case 3:
    pcVar2 = "PROFILE_REGION_NAME_NA";
    break;
  case 4:
    pcVar2 = "PROFILE_REGION_NAME_SA";
    break;
  case 5:
    pcVar2 = "PROFILE_REGION_NAME_EU";
    break;
  case 6:
    pcVar2 = "PROFILE_REGION_NAME_SEA";
    break;
  case 7:
    pcVar2 = "PROFILE_REGION_NAME_CN";
    break;
  case 8:
    pcVar2 = "PROFILE_REGION_NAME_EA";
    break;
  default:
    if (((DAT_101e3cf18 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e3cf18), iVar1 != 0)) {
      FUN_1004e313c(&DAT_101e3cf08);
      ___cxa_atexit(FUN_100046198,&DAT_101e3cf08,0x100000000);
      ___cxa_guard_release(&DAT_101e3cf18);
    }
    if (((DAT_101e3cf38 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e3cf38), iVar1 != 0)) {
      DAT_101e3cf20 = 0;
      DAT_101e3cf28 = 0;
      DAT_101e3cf30 = 0;
      ___cxa_atexit(FUN_1000e6204,&DAT_101e3cf20,0x100000000);
      ___cxa_guard_release(&DAT_101e3cf38);
    }
    FUN_1004ef254(0,&DAT_101e3cf20,0);
    FUN_1004e3170(auStack_30,&DAT_101e3cf20);
    FUN_1000153b4(&DAT_101e3cf08,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
    FUN_1004e3120(auStack_30,".superevilmegacorp.net");
    FUN_1004e3120(auStack_40," ");
    FUN_1004e3bc4(&DAT_101e3cf08,0,auStack_30,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
    return &DAT_101e3cf08;
  }
  puVar3 = (undefined *)FUN_1004e0150(pcVar2,0);
  return puVar3;
}




undefined8 FUN_10016ac70(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = (undefined8 *)&DAT_10145c498;
  iVar1 = FUN_1004e2f40(&DAT_101d911b0);
  if (iVar1 == 0x16) {
    puVar3 = (undefined8 *)&DAT_10145c4c8;
  }
  else if (iVar1 != 8) {
    if (iVar1 != 0) {
      uVar2 = 0;
      puVar3 = (undefined8 *)&DAT_10145c4f8;
      goto LAB_10016accc;
    }
    puVar3 = (undefined8 *)&DAT_10145c4f8;
  }
  uVar2 = 1;
LAB_10016accc:
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  uVar6 = puVar3[2];
  uVar8 = puVar3[5];
  uVar7 = puVar3[4];
  param_1[3] = puVar3[3];
  param_1[2] = uVar6;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  return uVar2;
}




void FUN_10016ace8(undefined8 param_1,long param_2,undefined8 param_3)

{
  float local_28;
  float local_24;
  
  FUN_10064142c(&local_24,&local_28);
  FUN_10064a8b0(param_3,(int)(local_24 * *(float *)(param_2 + 8)),
                (int)(local_28 * *(float *)(param_2 + 0xc)),
                (int)(*(float *)(param_2 + 0x10) * local_24),
                (int)(*(float *)(param_2 + 0x14) * local_28));
  FUN_10064a8f8(param_3,(int)*(float *)(param_2 + 0x18));
  return;
}




void FUN_10016ad64(undefined8 param_1,undefined8 param_2)

{
  FUN_10064a8b0(param_2,0,0,0,0);
  FUN_10064a8f8(param_2,0);
  return;
}




void FUN_10016ada0(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 8);
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  FUN_10016ace8(param_1,&local_30,param_2);
  return;
}




void FUN_10016add0(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 8);
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  FUN_10016ace8(param_1,&local_30,param_2);
  return;
}




void FUN_10016ae00(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  
  iVar1 = FUN_1004e2f40(&DAT_101d911b0);
  lVar3 = 0;
  puVar2 = &DAT_10145c4f8;
  do {
    if (*(int *)((long)&DAT_10145c498 + lVar3) == iVar1) {
      puVar2 = (undefined *)((long)&DAT_10145c498 + lVar3);
      break;
    }
    lVar3 = lVar3 + 0x30;
  } while (lVar3 != 0x90);
  fVar7 = *(float *)(puVar2 + 0x10);
  fVar6 = *(float *)(puVar2 + 0x14);
  fVar5 = *(float *)(puVar2 + 0x18);
  fVar4 = *(float *)(puVar2 + 0x1c);
  FUN_10064142c(&local_54,&local_58);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)(local_54 * fVar7);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(local_58 * fVar6);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(local_54 * fVar5);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(local_58 * fVar4);
  }
  return;
}




void FUN_10016aeec(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  
  iVar1 = FUN_1004e2f40(&DAT_101d911b0);
  lVar3 = 0;
  puVar2 = &DAT_10145c4f8;
  do {
    if (*(int *)((long)&DAT_10145c498 + lVar3) == iVar1) {
      puVar2 = (undefined *)((long)&DAT_10145c498 + lVar3);
      break;
    }
    lVar3 = lVar3 + 0x30;
  } while (lVar3 != 0x90);
  fVar7 = *(float *)(puVar2 + 0x10);
  fVar6 = *(float *)(puVar2 + 0x14);
  fVar5 = *(float *)(puVar2 + 0x18);
  fVar4 = *(float *)(puVar2 + 0x1c);
  FUN_10064142c(&local_54,&local_58);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)(local_54 * fVar7);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(local_58 * fVar6);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(local_54 * fVar5);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)(local_58 * fVar4);
  }
  return;
}




undefined8 * FUN_10016afd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c538;
  FUN_10109b9c8();
  return param_1;
}




void FUN_10016b008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c538;
  FUN_10109b9c8();
  operator_delete(param_1);
  return;
}




void FUN_10016b038(long param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 local_1120;
  undefined4 uStack_111c;
  undefined4 local_1118;
  undefined4 uStack_1114;
  undefined8 local_1110;
  float fStack_1108;
  float afStack_1104 [13];
  undefined8 local_10d0;
  float fStack_10c8;
  float fStack_10c4;
  undefined4 uStack_10c0;
  float fStack_10bc;
  undefined8 local_10b0;
  undefined4 local_10a8;
  undefined8 local_10a0;
  undefined4 local_1098;
  long local_1090 [512];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar3 = FUN_1010a1bc8(local_1090,0x200,4,param_3);
    if ((uint)uVar3 == 0) {
      uVar16 = FUN_1010b3760(param_2,0);
      puVar4 = &DAT_1013cd78c;
      uVar2 = 0xbf800000;
      uVar14 = 0x3f800000;
      uStack_1114 = 0xbf800000;
      local_1118 = 0x3f800000;
      uStack_111c = 0xbf800000;
      local_1120 = 0x3f800000;
      uVar21 = 0;
      uVar22 = 0;
      plVar6 = (long *)0x0;
      uVar3 = 0;
    }
    else {
      plVar6 = (long *)0x0;
      if (local_1090[0] != 0) {
        plVar6 = (long *)(local_1090[0] + -8);
      }
      (**(code **)(*plVar6 + 0x10))();
      puVar4 = (undefined8 *)FUN_1010a5288();
      local_10d0 = *puVar4;
      fStack_10c8 = (float)puVar4[1];
      fStack_10c4 = (float)((ulong)puVar4[1] >> 0x20);
      uStack_10c0 = (undefined4)puVar4[2];
      fStack_10bc = (float)((ulong)puVar4[2] >> 0x20);
      plVar6 = (long *)0x0;
      if (local_1090[0] != 0) {
        plVar6 = (long *)(local_1090[0] + -8);
      }
      lVar5 = (**(code **)(*plVar6 + 0x18))();
      lVar7 = 0;
      local_1110 = local_10d0;
      fStack_1108 = fStack_10c8;
      uVar8 = (ulong)&local_10d0 | 0xc;
      local_10a0 = CONCAT44(uStack_10c0,fStack_10c4);
      local_1098 = fStack_10bc;
      pfVar1 = (float *)(lVar5 + 0x30);
      fStack_10c4 = *pfVar1;
      uStack_10c0 = *(undefined4 *)(lVar5 + 0x34);
      uVar16 = *(undefined8 *)pfVar1;
      local_10d0 = *(undefined8 *)pfVar1;
      fVar18 = *(float *)(lVar5 + 0x38);
      fStack_10c8 = fVar18;
      fVar10 = fStack_10c4;
      fVar13 = fStack_10c4;
      while( true ) {
        lVar9 = 0;
        do {
          fVar17 = *(float *)(lVar5 + lVar9 * 4);
          fVar19 = *(float *)((long)&local_1110 + lVar9) * fVar17;
          fVar17 = (float)NEON_fminnm(fVar19,*(float *)((long)&local_10a0 + lVar9) * fVar17);
          fVar13 = fVar17 + fVar13;
          fVar10 = fVar10 + fVar19;
          lVar9 = lVar9 + 4;
        } while (lVar9 != 0xc);
        *(float *)((long)&local_10d0 + lVar7 * 4) = fVar13;
        *(float *)(uVar8 + lVar7 * 4) = fVar10;
        lVar7 = lVar7 + 1;
        if (lVar7 == 3) break;
        fVar13 = *(float *)((long)&local_10d0 + lVar7 * 4);
        fVar10 = *(float *)(uVar8 + lVar7 * 4);
        lVar5 = lVar5 + 4;
      }
      fVar10 = fStack_10c8;
      if (1 < (uint)uVar3) {
        uVar8 = 1;
        uVar12 = local_10d0;
        fStack_10bc = fVar18;
        do {
          uVar15 = uVar16;
          uVar11 = uVar12;
          plVar6 = (long *)0x0;
          if (local_1090[uVar8] != 0) {
            plVar6 = (long *)(local_1090[uVar8] + -8);
          }
          (**(code **)(*plVar6 + 0x10))();
          puVar4 = (undefined8 *)FUN_1010a5288();
          fStack_1108 = (float)puVar4[1];
          afStack_1104[0] = (float)((ulong)puVar4[1] >> 0x20);
          local_1110 = *puVar4;
          afStack_1104[1] = (float)puVar4[2];
          afStack_1104[2] = (float)((ulong)puVar4[2] >> 0x20);
          plVar6 = (long *)0x0;
          if (local_1090[uVar8] != 0) {
            plVar6 = (long *)(local_1090[uVar8] + -8);
          }
          lVar5 = (**(code **)(*plVar6 + 0x18))();
          lVar7 = 0;
          local_10a0 = local_1110;
          local_1098 = fStack_1108;
          local_10b0 = CONCAT44(afStack_1104[1],afStack_1104[0]);
          local_10a8 = afStack_1104[2];
          fVar17 = *(float *)(lVar5 + 0x30);
          local_1110 = *(undefined8 *)(lVar5 + 0x30);
          fStack_1108 = *(float *)(lVar5 + 0x38);
          afStack_1104[1] = (float)*(undefined4 *)(lVar5 + 0x34);
          afStack_1104[2] = *(float *)(lVar5 + 0x38);
          fVar13 = fVar17;
          afStack_1104[0] = fVar17;
          while( true ) {
            lVar9 = 0;
            do {
              fVar19 = *(float *)(lVar5 + lVar9 * 4);
              fVar20 = *(float *)((long)&local_10a0 + lVar9) * fVar19;
              fVar19 = (float)NEON_fminnm(fVar20,*(float *)((long)&local_10b0 + lVar9) * fVar19);
              fVar13 = fVar19 + fVar13;
              fVar17 = fVar17 + fVar20;
              lVar9 = lVar9 + 4;
            } while (lVar9 != 0xc);
            *(float *)((long)&local_1110 + lVar7 * 4) = fVar13;
            afStack_1104[lVar7] = fVar17;
            lVar7 = lVar7 + 1;
            if (lVar7 == 3) break;
            fVar13 = *(float *)((long)&local_1110 + lVar7 * 4);
            fVar17 = afStack_1104[lVar7];
            lVar5 = lVar5 + 4;
          }
          uVar12 = NEON_fminnm(uVar11,local_1110,4);
          fVar10 = (float)NEON_fminnm(fVar10,fStack_1108);
          uVar16 = NEON_fmaxnm(uVar15,CONCAT44(afStack_1104[1],afStack_1104[0]),4);
          if (fVar18 <= afStack_1104[2]) {
            fVar18 = afStack_1104[2];
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != (uVar3 & 0xffffffff));
        uVar16 = NEON_fmaxnm(uVar15,CONCAT44(afStack_1104[1],afStack_1104[0]),4);
        local_10d0 = NEON_fminnm(uVar11,local_1110,4);
      }
      fStack_10c4 = (float)uVar16;
      uStack_10c0 = (undefined4)((ulong)uVar16 >> 0x20);
      fStack_10c8 = fVar10;
      fStack_10bc = fVar18;
      FUN_10016b3e0(&local_10d0,param_1 + 8,&local_1110,&local_10a0,&local_10b0,&uStack_1114,
                    &local_1118,&uStack_111c,&local_1120);
      uVar16 = FUN_1010b3760(param_2,0);
      uVar22 = 0x3e4ccccd;
      plVar6 = local_1090;
      puVar4 = &local_1110;
      uVar21 = 0x40000000;
      uVar2 = (undefined4)local_10a0;
      uVar14 = (undefined4)local_10b0;
    }
    uVar2 = FUN_10109ba38(uVar2,uVar14,uStack_1114,local_1118,uStack_111c,local_1120,uVar21,uVar22,
                          uVar16,plVar6,uVar3,puVar4);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10016b3e0(undefined4 *param_1,float *param_2,undefined8 param_3,undefined4 *param_4,
                  float *param_5,float *param_6,undefined4 *param_7,undefined8 param_8,
                  float *param_9)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_138 [64];
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  fVar1 = *param_2 + 0.0;
  fVar3 = param_2[1] + 0.0;
  fVar4 = param_2[2] + 0.0;
  local_d0 = 1.0 / SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4);
  local_d8 = -fVar1 * local_d0;
  fStack_d4 = -fVar3 * local_d0;
  local_d0 = -fVar4 * local_d0;
  local_f8 = local_d0 * 1.0 - fStack_d4 * 0.0;
  fStack_f4 = local_d8 * 0.0 - local_d0 * 0.0;
  local_f0 = fStack_d4 * 0.0 - local_d8 * 1.0;
  fVar1 = 1.0 / SQRT(local_f8 * local_f8 + fStack_f4 * fStack_f4 + local_f0 * local_f0);
  local_f8 = local_f8 * fVar1;
  fStack_f4 = fStack_f4 * fVar1;
  local_f0 = local_f0 * fVar1;
  local_e8 = local_f0 * fStack_d4 - fStack_f4 * local_d0;
  fStack_e4 = local_f8 * local_d0 - local_f0 * local_d8;
  local_c8 = 0;
  uStack_c4 = 0;
  local_e0 = fStack_f4 * local_d8 - local_f8 * fStack_d4;
  local_c0 = 0;
  local_ec = 0;
  local_dc = 0;
  local_cc = 0;
  local_bc = 0x3f800000;
  uStack_ac = *param_1;
  uStack_b4 = param_1[1];
  local_80 = param_1[2];
  local_b8 = param_1[3];
  uStack_9c = param_1[4];
  local_b0 = param_1[5];
  local_a8 = uStack_b4;
  uStack_a4 = local_b0;
  local_a0 = local_b8;
  local_98 = local_b0;
  uStack_94 = uStack_ac;
  local_90 = uStack_9c;
  uStack_8c = local_b0;
  local_88 = local_b8;
  uStack_84 = uStack_b4;
  uStack_7c = uStack_ac;
  local_78 = uStack_b4;
  uStack_74 = local_80;
  local_70 = local_b8;
  uStack_6c = uStack_9c;
  local_68 = local_80;
  uStack_64 = uStack_ac;
  local_60 = uStack_9c;
  uStack_5c = local_80;
  FUN_10109bc2c(&local_f8,&local_b8,8,auStack_138,param_4,param_5,param_6,param_7,param_8,param_9);
  FUN_10002ee14(param_3,auStack_138);
  *param_9 = *param_9 + *param_9;
  uVar2 = NEON_fminnm(*param_4,*param_7);
  *param_7 = uVar2;
  *param_4 = uVar2;
  fVar1 = *param_5;
  if (*param_5 <= *param_6) {
    fVar1 = *param_6;
  }
  *param_6 = fVar1;
  *param_5 = fVar1;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10016b5e8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10109ba30();
  if ((iVar1 != 0) && (iVar1 = FUN_100126c18(), iVar1 == 1)) {
    puVar2 = operator_new(0x20);
    *puVar2 = &PTR_FUN_10145c538;
    *(undefined4 *)((long)puVar2 + 0x14) = 0xffffffff;
    *(undefined1 *)(puVar2 + 3) = 1;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    puVar2[1] = *(undefined8 *)(param_1 + 4);
    *(undefined4 *)(puVar2 + 2) = uVar3;
    FUN_10109b968(0x200);
    DAT_101d23528 = puVar2;
  }
  return;
}




ulong FUN_10016b660(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_10109ba30();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_100126c18();
    uVar2 = (ulong)(iVar1 == 1);
  }
  return uVar2;
}




void FUN_10016b684(void)

{
  if (DAT_101d23528 != (long *)0x0) {
    (**(code **)(*DAT_101d23528 + 8))();
    DAT_101d23528 = (long *)0x0;
  }
  return;
}




bool FUN_10016b6b8(void)

{
  return DAT_101d23528 != 0;
}




void FUN_10016b6cc(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d23528 != 0) {
    FUN_10016b038(DAT_101d23528,param_1,param_2);
    return;
  }
  return;
}




void FUN_10016b6e8(void)

{
  if (((DAT_101d23528 != 0) && (*(char *)(DAT_101d23528 + 0x18) != '\0')) &&
     (-1 < *(int *)(DAT_101d23528 + 0x14))) {
    FUN_10109ba68();
    return;
  }
  return;
}




undefined8 * FUN_10016b70c(void)

{
  void *pvVar1;
  
  if (DAT_101e3cf40 == (undefined8 *)0x0) {
    DAT_101e3cf40 = operator_new(0x18);
    *DAT_101e3cf40 = 0;
    DAT_101e3cf40[1] = 0;
    *(undefined4 *)(DAT_101e3cf40 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e3cf48 = pvVar1;
  }
  return DAT_101e3cf40;
}




undefined8 * FUN_10016b764(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_10016b7e0_10145c558;
  plVar5 = (long *)FUN_10016b70c();
  ppVar4 = DAT_101e3cf48;
  _pthread_mutex_lock(DAT_101e3cf48);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_10016b7e0(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_10016b7e0_10145c558;
  uVar2 = FUN_10016b70c();
  ppVar1 = DAT_101e3cf48;
  _pthread_mutex_lock(DAT_101e3cf48);
  FUN_10016b840(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_10016b840(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_10016b7e0(void)

{
  FUN_10016b7e0();
  return;
}




void FUN_10016b8a4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016b7e0();
  operator_delete(pvVar1);
  return;
}




void FUN_10016b8b8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10016b70c();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
  }
  return;
}




void FUN_10016b90c(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10016b70c();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}




void FUN_10016b948(void)

{
  return;
}




void FUN_10016b94c(void)

{
  return;
}




undefined8 * FUN_10016b950(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  FUN_10011cc24(param_1 + 6);
  *param_1 = &PTR_thunk_FUN_10016b9d0_10145c588;
  param_1[3] = &PTR_FUN_10145c930;
  param_1[6] = &PTR_FUN_10145c960;
  *(undefined4 *)(param_1 + 7) = 0xfffffffe;
  *(undefined2 *)((long)param_1 + 0x3c) = 1;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  DAT_101d23530 = param_1;
  lVar1 = FUN_10015d3ec();
  FUN_100169cec(lVar1 + 0x18);
  return param_1;
}




undefined8 * thunk_FUN_10016b950(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  FUN_10011cc24(param_1 + 6);
  *param_1 = &PTR_thunk_FUN_10016b9d0_10145c588;
  param_1[3] = &PTR_FUN_10145c930;
  param_1[6] = &PTR_FUN_10145c960;
  *(undefined4 *)(param_1 + 7) = 0xfffffffe;
  *(undefined2 *)((long)param_1 + 0x3c) = 1;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  DAT_101d23530 = param_1;
  lVar1 = FUN_10015d3ec();
  FUN_100169cec(lVar1 + 0x18);
  return param_1;
}




void FUN_10016b9d0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10016b9d0_10145c588;
  param_1[3] = &PTR_FUN_10145c930;
  param_1[6] = &PTR_FUN_10145c960;
  DAT_101d23530 = 0;
  if (*(char *)((long)param_1 + 0x3d) != '\0') {
    *(undefined1 *)((long)param_1 + 0x3d) = 0;
  }
  FUN_100155f24(param_1 + 8,1);
  FUN_10011ccec(param_1 + 6);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_10016ba4c(long param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x3d) != param_2) &&
     (*(char *)(param_1 + 0x3d) = (char)param_2, param_2 != 0)) {
    FUN_10016bbc8();
    return;
  }
  return;
}




void thunk_FUN_10016b9d0(void)

{
  FUN_10016b9d0();
  return;
}




void FUN_10016ba6c(long param_1)

{
  FUN_10016b9d0(param_1 + -0x18);
  return;
}




void FUN_10016ba74(long param_1)

{
  FUN_10016b9d0(param_1 + -0x30);
  return;
}




void FUN_10016ba7c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016b9d0();
  operator_delete(pvVar1);
  return;
}




void FUN_10016ba90(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016b9d0(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10016baa8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016b9d0(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_10016bac0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(int *)(param_2 + 0x240) == 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_2 + 0x1a8);
    if (iVar3 != iVar4) {
      *(int *)(param_1 + 0x38) = iVar3;
      if (0 < iVar4 && iVar3 < 1) {
        FUN_1003274ac();
        FUN_100106a38();
        if (*(char *)(param_1 + 0x3c) != '\0') {
          FUN_10016b90c();
        }
      }
      if (*(char *)(param_1 + 0x3d) != '\0') {
        FUN_10016bbc8(param_1);
      }
    }
    FUN_100155f24(param_1 + 0x40,0);
    if (*(int *)(param_2 + 0x38) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar1 = *(long *)(param_2 + 0x40) + lVar5;
        uVar2 = *(ulong *)(lVar1 + 0x20);
        if (-1 < (char)*(byte *)(lVar1 + 0x2f)) {
          uVar2 = (ulong)*(byte *)(lVar1 + 0x2f);
        }
        if ((uVar2 == 8) &&
           (iVar4 = std::string::compare(lVar1 + 0x18,0,(char *)0xffffffffffffffff,0x1013ddf7c),
           iVar4 == 0)) {
          FUN_10016bc84(param_1 + 0x40,*(long *)(param_2 + 0x40) + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x38;
      } while (uVar6 < *(uint *)(param_2 + 0x38));
    }
  }
  return;
}




void FUN_10016bbc8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (5 < iVar1 - 5U) {
    if (iVar1 != 4) {
      if (iVar1 == 2) {
        FUN_10016c200(param_1,"*Gwen*");
        uVar2 = FUN_10015d3ec();
        FUN_100166bac(uVar2,*(int *)(param_1 + 0x38) + 1);
        FUN_10012c348("AutoBuySettingPopupShown",1);
        FUN_10012c348("AutoLevelSettingPopupShown",1);
      }
      goto LAB_10016bbf4;
    }
    FUN_10016c200(param_1,"*Catherine*");
  }
  uVar2 = FUN_10015d3ec();
  FUN_100166bac(uVar2,0xb);
LAB_10016bbf4:
  FUN_10016bdf0(param_1);
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_10016b8b8(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    return;
  }
  return;
}




void FUN_10016bc84(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100155b1c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_10003330c(lVar4 + -0x38,param_2);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_10016bd20(void)

{
  long lVar1;
  
  lVar1 = FUN_10015d3ec();
  FUN_100169cec(lVar1 + 0x18);
  return;
}




void FUN_10016bd38(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0xfffffffe;
  FUN_100155f24(param_1 + 0x40,0);
  return;
}




void FUN_10016bd4c(long param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0xfffffffe;
  FUN_100155f24(param_1 + 0x28,0);
  return;
}




void FUN_10016bd60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100166bac(uVar1,*(int *)(param_1 + 0x38) + 1);
  return;
}




void FUN_10016bd88(long param_1,int param_2)

{
  *(char *)(param_1 + 0x3c) = (char)param_2;
  if (param_2 != 0) {
    FUN_10016b8b8(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    return;
  }
  return;
}




void FUN_10016bda4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100166bac(uVar1,0xb);
  return;
}




uint FUN_10016bdbc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x38) - 1;
  return 0x115U >> (ulong)(uVar1 & 0x1f) & (uint)(uVar1 < 9);
}




undefined8 FUN_10016bddc(int param_1)

{
  return *(undefined8 *)(&DAT_10145c978 + (long)param_1 * 8);
}




void FUN_10016bdf0(long param_1)

{
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_1000f0a04(auStack_48,"Phase%d");
    FUN_100106870(auStack_48,(&PTR_s__10145c9d0)[*(int *)(param_1 + 0x38)],"StartPhase");
    FUN_1001069bc(*(undefined4 *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x38) == 10) {
      FUN_100101940();
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10016be98(long param_1)

{
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_1000f0a04(auStack_48,"Phase%d");
    FUN_100106870(auStack_48,(&PTR_s__10145c9d0)[*(int *)(param_1 + 0x38)],"DismissCards");
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10016bf28(long param_1)

{
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_1000f0a04(auStack_48,"Phase%d");
    FUN_100106870(auStack_48,(&PTR_s__10145c9d0)[*(int *)(param_1 + 0x38)],"OpenHeroHub");
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10016bfb8(long param_1)

{
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_1000f0a04(auStack_48,"Phase%d");
    FUN_100106870(auStack_48,(&PTR_s__10145c9d0)[*(int *)(param_1 + 0x38)],"HeroUnlock");
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10016c048(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined4 local_a8;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  long local_58 [3];
  
  local_58[2] = *(long *)PTR____stack_chk_guard_101444218;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar1 = FUN_100134098();
    if (*(char *)(lVar1 + 0x3d) != '\0') {
      uVar2 = FUN_1004e0150("TUTORIAL_NOTIFICATION_1",0);
      thunk_FUN_1004e439c(auStack_98,uVar2);
      uVar2 = FUN_1004e0150("TUTORIAL_NOTIFICATION_2",0);
      thunk_FUN_1004e439c(auStack_88,uVar2);
      uVar2 = FUN_1004e0150("TUTORIAL_NOTIFICATION_3",0);
      thunk_FUN_1004e439c(auStack_78,uVar2);
      uVar2 = FUN_1004e0150("TUTORIAL_NOTIFICATION_4",0);
      thunk_FUN_1004e439c(auStack_68,uVar2);
      uVar2 = FUN_1004e0150("TUTORIAL_NOTIFICATION_5",0);
      thunk_FUN_1004e439c(local_58,uVar2);
      if (*(int *)(lVar1 + 0x18) != 0) {
        uVar4 = 0;
        puVar5 = *(undefined4 **)(lVar1 + 0x20);
        do {
          thunk_FUN_10052b358(auStack_b8);
          local_a8 = *puVar5;
          uVar6 = uVar4;
          if (3 < uVar4) {
            uVar6 = 4;
          }
          FUN_1000153b4(auStack_b8,auStack_98 + (ulong)uVar6 * 0x10);
          FUN_10011cd50(param_1 + 0x30,auStack_b8);
          if (local_b0 != (void *)0x0) {
            operator_delete__(local_b0);
          }
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (puVar5 != (undefined4 *)
                           (*(long *)(lVar1 + 0x20) + (ulong)*(uint *)(lVar1 + 0x18) * 4));
      }
      lVar1 = 0;
      do {
        pvVar3 = *(void **)((long)local_58 + lVar1 + 8);
        if (pvVar3 != (void *)0x0) {
          operator_delete__(pvVar3);
          *(undefined8 *)((long)local_58 + lVar1) = 0;
          *(undefined8 *)((long)local_58 + lVar1 + 8) = 0;
        }
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != -0x50);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10016c1f8(long param_1)

{
  FUN_10016c048(param_1 + -0x30);
  return;
}




void FUN_10016c200(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 auStack_218 [440];
  code *local_60;
  void *pvStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  thunk_FUN_100253c74(auStack_218);
  FUN_1000eaaf8(auStack_218,param_2);
  pvVar1 = operator_new(0x5558);
  lVar2 = thunk_FUN_100253d30();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  FUN_1002549f0(lVar2,auStack_218);
  *(uint *)((long)pvVar1 + 0x84) = *(uint *)((long)pvVar1 + 0x84) | 0xc;
  FUN_100255700(pvVar1,1);
  pvVar3 = operator_new(0x278);
  uVar4 = thunk_FUN_1001906ac();
  FUN_100190928(uVar4,pvVar1);
  local_38 = FUN_100644a94("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_60 = FUN_10016c2e4;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  pvStack_58 = pvVar3;
  FUN_10001554c((long)pvVar3 + 8,&local_60);
  FUN_1001e7f30(pvVar3,0,1,0,1);
  FUN_10016c310(auStack_218);
  return;
}




void FUN_10016c2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100190b94(param_1,param_4,param_5);
  return;
}




undefined8 FUN_10016c2f0(void)

{
  return DAT_101d23530;
}




bool FUN_10016c2fc(void)

{
  return DAT_101d23530 != 0;
}




undefined8 * FUN_10016c310(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    operator_delete((void *)param_1[0x2e]);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    operator_delete((void *)param_1[0x19]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    operator_delete((void *)param_1[0x16]);
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_10016c450(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = &PTR_thunk_FUN_10016cdb0_10145cbe0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_10145ca38;
  param_1[1] = 0;
  return;
}




void FUN_10016c488(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_448;
  undefined4 local_440;
  undefined1 auStack_438 [1032];
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x59) = 1;
    local_440 = 0;
    local_448 = param_2;
    FUN_10048fb50(auStack_438);
    FUN_10016c4ec(param_1,&local_448);
  }
  return;
}




void FUN_10016c4ec(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_10016d060(param_1 + 0x10,param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  FUN_10016d0e4(param_1 + 0x28,param_2);
  return;
}




void FUN_10016c530(long param_1,undefined8 param_2)

{
  undefined8 local_438;
  undefined4 local_430;
  undefined1 auStack_428 [1032];
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    local_430 = 0;
    local_438 = param_2;
    FUN_10048fb50(auStack_428);
    FUN_10016c580(param_1,&local_438);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  return;
}




void FUN_10016c580(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_10016d148(param_1 + 0x28);
  plVar2 = (long *)(*(long *)(param_1 + 0x30) + -8);
  if (*(long *)(param_1 + 0x30) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10016c5dc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_448;
  undefined4 local_440;
  undefined1 auStack_438 [1032];
  
  if ((*(char *)(param_1 + 0x59) == '\0') &&
     (iVar1 = *(int *)(param_3 + 0x260), iVar2 = FUN_10034ee90(), iVar1 == iVar2)) {
    *(undefined1 *)(param_1 + 0x59) = 1;
    local_440 = 0;
    local_448 = param_2;
    FUN_10048fb50(auStack_438);
    FUN_10016c4ec(param_1,&local_448);
  }
  return;
}




void FUN_10016c64c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_448;
  undefined4 local_440;
  undefined1 auStack_438 [1032];
  
  if ((*(char *)(param_1 + 0x59) != '\0') &&
     (iVar1 = *(int *)(param_3 + 0x260), iVar2 = FUN_10034ee90(), iVar1 == iVar2)) {
    local_440 = 0;
    local_448 = param_2;
    FUN_10048fb50(auStack_438);
    FUN_10016c580(param_1,&local_448);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  return;
}




void FUN_10016c6b8(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = &PTR_thunk_FUN_10016cdb0_10145cbe0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_10145ca98;
  param_1[1] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}




void FUN_10016c6f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_10016c700(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_448;
  undefined4 local_440;
  undefined1 auStack_438 [1032];
  
  iVar1 = FUN_10016c760();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_440 = 0;
    local_448 = param_2;
    FUN_10048fb50(auStack_438);
    FUN_10016c4ec(param_1,&local_448);
  }
  return;
}




bool FUN_10016c760(long param_1)

{
  int iVar1;
  undefined8 local_88;
  undefined1 auStack_80 [96];
  
  thunk_FUN_10045cc04(auStack_80);
  FUN_1003babdc(auStack_80,*(undefined8 *)(param_1 + 0x60),0);
  local_88 = 0;
  iVar1 = FUN_1003a6ce4(auStack_80,&local_88,1,0);
  return iVar1 != 0;
}




void FUN_10016c7bc(long param_1,undefined8 param_2)

{
  undefined8 local_438;
  undefined4 local_430;
  undefined1 auStack_428 [1032];
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    local_430 = 0;
    local_438 = param_2;
    FUN_10048fb50(auStack_428);
    FUN_10016c580(param_1,&local_438);
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}




void FUN_10016c80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  
  uVar1 = 0x811c9dc5;
  pcVar2 = (char *)FUN_100346238(param_3);
  cVar4 = *pcVar2;
  uVar3 = 0x811c9dc5;
  if (cVar4 != '\0') {
    uVar3 = 0x811c9dc5;
    do {
      pcVar2 = pcVar2 + 1;
      uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar2;
    } while (cVar4 != '\0');
  }
  pcVar2 = *(char **)(param_1 + 0x60);
  cVar4 = *pcVar2;
  while (cVar4 != '\0') {
    pcVar2 = pcVar2 + 1;
    uVar1 = (uVar1 ^ (int)cVar4) * 0x1000193;
    cVar4 = *pcVar2;
  }
  if (uVar3 == uVar1) {
    FUN_10016c8c0(param_1,param_2);
    return;
  }
  return;
}




void FUN_10016c8c0(long param_1,undefined8 param_2)

{
  undefined8 local_438;
  undefined4 local_430;
  undefined1 auStack_428 [1032];
  
  local_430 = 0;
  local_438 = param_2;
  FUN_10048fb50(auStack_428);
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined1 *)(param_1 + 0x68) = 1;
    FUN_10016c4ec(param_1,&local_438);
  }
  else {
    FUN_10016d1b4(param_1 + 0x28,&local_438);
  }
  return;
}




void FUN_10016c924(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  
  uVar1 = 0x811c9dc5;
  pcVar2 = (char *)FUN_100346238(param_3);
  cVar4 = *pcVar2;
  uVar3 = 0x811c9dc5;
  if (cVar4 != '\0') {
    uVar3 = 0x811c9dc5;
    do {
      pcVar2 = pcVar2 + 1;
      uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar2;
    } while (cVar4 != '\0');
  }
  pcVar2 = *(char **)(param_1 + 0x60);
  cVar4 = *pcVar2;
  while (cVar4 != '\0') {
    pcVar2 = pcVar2 + 1;
    uVar1 = (uVar1 ^ (int)cVar4) * 0x1000193;
    cVar4 = *pcVar2;
  }
  if (uVar3 == uVar1) {
    FUN_10016c9d8(param_1,param_2);
    return;
  }
  return;
}




void FUN_10016c9d8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_438;
  undefined4 local_430;
  undefined1 auStack_428 [1032];
  
  local_430 = 0;
  local_438 = param_2;
  FUN_10048fb50(auStack_428);
  if ((*(char *)(param_1 + 0x68) == '\0') || (uVar1 = FUN_10016c760(param_1), (uVar1 & 1) != 0)) {
    FUN_10016d1b4(param_1 + 0x28,&local_438);
  }
  else {
    FUN_10016c580(param_1,&local_438);
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}




void FUN_10016ca44(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  
  uVar4 = (ulong)*(ushort *)(param_3 + 0x88) & 0x1f;
  if (((int)uVar4 == 0x1f) || (1 < *(ushort *)(param_3 + uVar4 * 0x38 + 0x90) - 3)) {
    uVar1 = 0x811c9dc5;
    pcVar2 = (char *)FUN_100346238(param_3);
    cVar5 = *pcVar2;
    uVar3 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar3 = 0x811c9dc5;
      do {
        pcVar2 = pcVar2 + 1;
        uVar3 = (uVar3 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar2;
      } while (cVar5 != '\0');
    }
    pcVar2 = *(char **)(param_1 + 0x60);
    cVar5 = *pcVar2;
    while (cVar5 != '\0') {
      pcVar2 = pcVar2 + 1;
      uVar1 = (uVar1 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar2;
    }
    if (uVar3 == uVar1) {
      FUN_10016c9d8(param_1,param_2);
      return;
    }
  }
  return;
}




void FUN_10016cb20(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_448;
  undefined4 local_440;
  undefined1 auStack_438 [1032];
  
  local_440 = 0;
  local_448 = param_2;
  FUN_10048fb50(auStack_438);
  (**(code **)(*param_1 + 0x50))(param_1,&local_448);
  lVar2 = 0;
  if (param_1[5] != 0) {
    lVar2 = param_1[5] + -0x20;
  }
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x28) != 0)) {
    lVar2 = FUN_10016d548();
    FUN_10016d210(param_1 + 2,lVar2);
    puVar3 = (undefined8 *)(lVar2 + 0x20);
    *puVar3 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar3;
    }
    else {
      *(undefined8 **)param_1[6] = puVar3;
    }
    param_1[6] = (long)puVar3;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar2 + 8) != 0) {
    lVar1 = *(long *)(lVar2 + 8) + -8;
  }
  *(long *)(lVar2 + 0x28) = lVar1;
  FUN_10003fff4(lVar2,&local_448);
  if (*(long *)(lVar2 + 0x28) == 0) {
    FUN_10003ff14(param_1,lVar2);
  }
  return;
}




void FUN_10016cc08(void)

{
  return;
}




void FUN_10016cc0c(void)

{
  return;
}




void FUN_10016cc10(void)

{
  return;
}




void FUN_10016cc14(void)

{
  return;
}




undefined8 * FUN_10016cc18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  return param_1;
}




void FUN_10016cc58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  operator_delete(param_1);
  return;
}




undefined8 * FUN_10016cc98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  return param_1;
}




void FUN_10016ccd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  operator_delete(param_1);
  return;
}




void FUN_10016cd18(void)

{
  return;
}




void FUN_10016cd1c(void)

{
  return;
}




void FUN_10016cd20(void)

{
  return;
}




void FUN_10016cd24(void)

{
  return;
}




void FUN_10016cd28(void)

{
  return;
}




void thunk_FUN_10016cdb0(void)

{
  FUN_10016cdb0();
  return;
}




undefined8 * FUN_10016cd30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  return param_1;
}




void FUN_10016cd70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145caf8;
  FUN_10016cdb0(param_1 + 5);
  FUN_10016ce84(param_1 + 2);
  operator_delete(param_1);
  return;
}




undefined8 * FUN_10016cdb0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_thunk_FUN_10016cdb0_10145cb58;
  plVar2 = param_1 + 1;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_10016ce28(plVar2,lVar1 + -8);
    FUN_10016d7e4(lVar1 + -8);
    lVar1 = *plVar2;
  }
  return param_1;
}




void thunk_FUN_10016cdb0(void)

{
  FUN_10016cdb0();
  return;
}




void FUN_10016ce14(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016cdb0();
  operator_delete(pvVar1);
  return;
}




void FUN_10016ce28(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




long * FUN_10016ce84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_10016cecc(param_1,lVar1 + -8);
    FUN_10016d72c(lVar1 + -8);
    lVar1 = *param_1;
  }
  return param_1;
}




void FUN_10016cecc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




undefined8 * FUN_10016cf28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_10145cb78;
  plVar2 = param_1 + 5;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_10003ff98(plVar2,lVar1 + -0x20);
    FUN_10016d5e8(lVar1 + -0x20);
    lVar1 = *plVar2;
  }
  FUN_10016cfa8(param_1 + 2);
  return param_1;
}




void thunk_FUN_10016cf28(void)

{
  FUN_10016cf28();
  return;
}




void FUN_10016cf94(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016cf28();
  operator_delete(pvVar1);
  return;
}




long * FUN_10016cfa8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_10016cff0(param_1,lVar1 + -8);
    FUN_10016d330(lVar1 + -8);
    lVar1 = *param_1;
  }
  return param_1;
}




void FUN_10016cff0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10016d04c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10016cdb0();
  operator_delete(pvVar1);
  return;
}




void FUN_10016d060(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = (long *)(*param_1 + -8);
  if (*param_1 != 0 && plVar5 != (long *)0x0) {
    do {
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = (undefined8 *)(lVar3 + 8);
      *puVar4 = 0;
      puVar2 = (undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 8) != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
      }
      *puVar2 = puVar4;
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      plVar1 = plVar5 + 1;
      plVar5 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar5 = (long *)(*plVar1 + -8);
      }
    } while (plVar5 != (long *)0x0);
  }
  return;
}




void FUN_10016d0e4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  lVar2 = *(long *)(param_1 + 8) + -8;
  if (*(long *)(param_1 + 8) != 0 && lVar2 != 0) {
    do {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))(*(long **)(lVar2 + 0x10),param_2,lVar2);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    } while (lVar2 != 0);
  }
  return;
}




void FUN_10016d148(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + -8;
  if (*(long *)(param_1 + 8) != 0 && lVar2 != 0) {
    do {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x20))(*(long **)(lVar2 + 0x10),param_2,lVar2);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    } while (lVar2 != 0);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_10016d1b4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + -8;
  if (*(long *)(param_1 + 8) != 0 && lVar2 != 0) {
    do {
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x28))(*(long **)(lVar2 + 0x10),param_2,lVar2);
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    } while (lVar2 != 0);
  }
  return;
}




void FUN_10016d210(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = (long *)(*param_1 + -8);
  if (*param_1 != 0 && plVar5 != (long *)0x0) {
    do {
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = (undefined8 *)(lVar3 + 8);
      *puVar4 = 0;
      puVar2 = (undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 8) != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
      }
      *puVar2 = puVar4;
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      plVar1 = plVar5 + 1;
      plVar5 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar5 = (long *)(*plVar1 + -8);
      }
    } while (plVar5 != (long *)0x0);
  }
  return;
}




undefined8 * FUN_10016d294(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x38;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar5;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xe647U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145cee8;
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




void FUN_10016d330(undefined8 param_1)

{
  FUN_10016d340(DAT_101e3d0c8,param_1);
  return;
}




void FUN_10016d340(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0xe620) = *(int *)(param_1 + 0xe620) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0xe610) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x37a7;
    *(short *)(param_1 + 0xe612) = sVar2;
    *(short *)(param_1 + 0xe610) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xe612);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x37a7;
    *(short *)(param_1 + 0xe612) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0xb8) = sVar2;
  }
  *(int *)(param_1 + 0xe614) = *(int *)(param_1 + 0xe614) + -1;
  return;
}




void FUN_10016d3e8(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x46020) = *(int *)(param_1 + 0x46020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x46010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x46012) = sVar2;
    *(short *)(param_1 + 0x46010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x46012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x46012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x38) = sVar2;
  }
  *(int *)(param_1 + 0x46014) = *(int *)(param_1 + 0x46014) + -1;
  return;
}




void FUN_10016d494(undefined8 param_1)

{
  FUN_10016d4b0(DAT_101e3d0c8 + 0x57670,param_1);
  return;
}




void FUN_10016d4b0(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  *(int *)(param_1 + 0x1220) = *(int *)(param_1 + 0x1220) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x1210) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x71c7;
    *(short *)(param_1 + 0x1212) = sVar2;
    *(short *)(param_1 + 0x1210) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x1212);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x71c7;
    *(short *)(param_1 + 0x1212) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x48) = sVar2;
  }
  *(int *)(param_1 + 0x1214) = *(int *)(param_1 + 0x1214) + -1;
  return;
}




ushort * FUN_10016d548(void)

{
  long lVar1;
  ushort *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar1 = DAT_101e3d0c8;
  uVar6 = *(ushort *)(DAT_101e3d0c8 + 0x57660);
  uVar4 = (ulong)uVar6;
  if (uVar4 == 0xffff) {
    puVar2 = (ushort *)0x0;
    iVar3 = *(int *)(DAT_101e3d0c8 + 0x57664);
  }
  else {
    lVar5 = DAT_101e3d0c8 + 0x54660;
    puVar2 = (ushort *)(lVar5 + uVar4 * 0x30);
    if (uVar6 == *(ushort *)(DAT_101e3d0c8 + 0x57662)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar2;
    }
    *(ushort *)(DAT_101e3d0c8 + 0x57660) = uVar6;
    lVar5 = lVar5 + uVar4 * 0x30;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined ***)puVar2 = &PTR_thunk_FUN_100170b70_10145cf10;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    iVar3 = *(int *)(lVar1 + 0x57664) + 1;
    *(int *)(lVar1 + 0x57664) = iVar3;
  }
  if (*(int *)(lVar1 + 0x588a0) < iVar3) {
    *(int *)(lVar1 + 0x588a0) = iVar3;
  }
  return puVar2;
}




void FUN_10016d5e8(undefined8 *param_1)

{
  short *psVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = DAT_101e3d0c8;
  psVar1 = (short *)(DAT_101e3d0c8 + 0x57660);
  lVar2 = DAT_101e3d0c8 + 0x54660;
  (**(code **)*param_1)();
  iVar6 = (int)lVar2;
  if (*psVar1 == -1) {
    sVar4 = (short)((uint)((int)param_1 - iVar6) >> 4) * -0x5555;
    *(short *)(lVar5 + 0x57662) = sVar4;
    *psVar1 = sVar4;
  }
  else {
    uVar3 = *(ushort *)(lVar5 + 0x57662);
    sVar4 = (short)((uint)((int)param_1 - iVar6) >> 4) * -0x5555;
    *(short *)(lVar5 + 0x57662) = sVar4;
    *(short *)(lVar2 + (ulong)uVar3 * 0x30) = sVar4;
  }
  *(int *)(lVar5 + 0x57664) = *(int *)(lVar5 + 0x57664) + -1;
  return;
}




undefined8 * FUN_10016d690(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0x41040);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0x28;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0x41042)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xf040);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x41040) = uVar5;
    *(int *)(lVar2 + 0x41044) = *(int *)(lVar2 + 0x41044) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xf047U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145cf50;
    uVar1 = *(int *)(lVar2 + 0x41050) + 1;
    *(uint *)(lVar2 + 0x41050) = uVar1;
    if (*(uint *)(lVar2 + 0x41054) < uVar1) {
      *(uint *)(lVar2 + 0x41054) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




void FUN_10016d72c(undefined8 param_1)

{
  FUN_10016d73c(DAT_101e3d0d0,param_1);
  return;
}




void FUN_10016d73c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0xf020) = *(int *)(param_1 + 0xf020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0xf010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 6) * -0x5555;
    *(short *)(param_1 + 0xf012) = sVar2;
    *(short *)(param_1 + 0xf010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xf012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 6) * -0x5555;
    *(short *)(param_1 + 0xf012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0xc0) = sVar2;
  }
  *(int *)(param_1 + 0xf014) = *(int *)(param_1 + 0xf014) + -1;
  return;
}




void FUN_10016d7e4(undefined8 param_1)

{
  FUN_10016d7fc(DAT_101e3d0d0 + 0xf030,param_1);
  return;
}




void FUN_10016d7fc(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x32020) = *(int *)(param_1 + 0x32020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x32010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0x32012) = sVar2;
    *(short *)(param_1 + 0x32010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x32012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0x32012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x28) = sVar2;
  }
  *(int *)(param_1 + 0x32014) = *(int *)(param_1 + 0x32014) + -1;
  return;
}




void FUN_10016d8a8(undefined8 param_1)

{
  FUN_10016d8c4(DAT_101e3d0d0 + 0x44070,param_1);
  return;
}




void FUN_10016d8c4(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  *(int *)(param_1 + 0x3e20) = *(int *)(param_1 + 0x3e20) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x3e10) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x7bdf;
    *(short *)(param_1 + 0x3e12) = sVar2;
    *(short *)(param_1 + 0x3e10) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x3e12);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x7bdf;
    *(short *)(param_1 + 0x3e12) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0xf8) = sVar2;
  }
  *(int *)(param_1 + 0x3e14) = *(int *)(param_1 + 0x3e14) + -1;
  return;
}




ushort * FUN_10016d96c(void)

{
  long lVar1;
  ushort *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar1 = DAT_101e3d0d0;
  uVar6 = *(ushort *)(DAT_101e3d0d0 + 0x44060);
  uVar4 = (ulong)uVar6;
  if (uVar4 == 0xffff) {
    puVar2 = (ushort *)0x0;
    iVar3 = *(int *)(DAT_101e3d0d0 + 0x44064);
  }
  else {
    lVar5 = DAT_101e3d0d0 + 0x41060;
    puVar2 = (ushort *)(lVar5 + uVar4 * 0x30);
    if (uVar6 == *(ushort *)(DAT_101e3d0d0 + 0x44062)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar2;
    }
    *(ushort *)(DAT_101e3d0d0 + 0x44060) = uVar6;
    lVar5 = lVar5 + uVar4 * 0x30;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined ***)puVar2 = &PTR_thunk_FUN_10016cdb0_10145cbe0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined1 *)(lVar5 + 0x28) = 0;
    iVar3 = *(int *)(lVar1 + 0x44064) + 1;
    *(int *)(lVar1 + 0x44064) = iVar3;
  }
  if (*(int *)(lVar1 + 0x47ea0) < iVar3) {
    *(int *)(lVar1 + 0x47ea0) = iVar3;
  }
  return puVar2;
}




void FUN_10016da10(undefined8 *param_1)

{
  short *psVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = DAT_101e3d0d0;
  psVar1 = (short *)(DAT_101e3d0d0 + 0x44060);
  lVar2 = DAT_101e3d0d0 + 0x41060;
  (**(code **)*param_1)();
  iVar6 = (int)lVar2;
  if (*psVar1 == -1) {
    sVar4 = (short)((uint)((int)param_1 - iVar6) >> 4) * -0x5555;
    *(short *)(lVar5 + 0x44062) = sVar4;
    *psVar1 = sVar4;
  }
  else {
    uVar3 = *(ushort *)(lVar5 + 0x44062);
    sVar4 = (short)((uint)((int)param_1 - iVar6) >> 4) * -0x5555;
    *(short *)(lVar5 + 0x44062) = sVar4;
    *(short *)(lVar2 + (ulong)uVar3 * 0x30) = sVar4;
  }
  *(int *)(lVar5 + 0x44064) = *(int *)(lVar5 + 0x44064) + -1;
  return;
}




undefined8 * FUN_10016dab8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_101453288;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016db4c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_1014532c8;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016dbe0(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x38;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar5;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xe647U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145cf78;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016dc80(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_101453710;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016dd14(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145cfa0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016dda8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x38;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar5;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xe647U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145cfe8;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016de48(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_10145d010;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016ded8(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 *puVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar4 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    lVar3 = DAT_101e3d0c8 + (ulong)uVar4 * 0xb8;
    if (uVar4 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar4;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar5 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    *puVar5 = &PTR_FUN_1014538c0;
    puVar5[1] = 0;
    FUN_1000b9c0c();
    FUN_1000b9430(puVar5 + 6);
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
  }
  return puVar5;
}




undefined8 FUN_10016dfb4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0c8;
  uVar6 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0c8 + (ulong)uVar6 * 0x38;
    if (uVar6 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar6;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0xe647U & 0xfffffffffffffff8);
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000b9f08();
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10016e060(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = &PTR_FUN_1014536d0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016e104(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *puVar3 = &PTR_FUN_10145d048;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(byte *)(puVar3 + 5) = *(byte *)(puVar3 + 5) & 0xfe;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016e1b4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_FUN_10145d088;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016e25c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x38;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar5;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xe647U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *puVar3 = &PTR_thunk_FUN_10017145c_10145d0d0;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016e304(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ushort uVar6;
  
  lVar3 = DAT_101e3d0c8;
  uVar6 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar6 != 0xffff) {
    lVar5 = DAT_101e3d0c8 + (ulong)uVar6 * 0xb8;
    if (uVar6 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar6;
    *(int *)(lVar3 + 0xe614) = *(int *)(lVar3 + 0xe614) + 1;
    puVar4 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[10] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    *puVar4 = &PTR_FUN_10145d0f8;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    lVar5 = 0x28;
    *(undefined4 *)(puVar4 + 4) = 0;
    do {
      puVar2 = (undefined8 *)((long)puVar4 + lVar5);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0x58);
    uVar1 = *(int *)(lVar3 + 0xe620) + 1;
    *(uint *)(lVar3 + 0xe620) = uVar1;
    if (*(uint *)(lVar3 + 0xe624) < uVar1) {
      *(uint *)(lVar3 + 0xe624) = uVar1;
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016e3c8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x38;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar5;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xe647U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR_thunk_FUN_100171900_10145d140;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 6) = 0;
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016e474(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 *puVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar4 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    lVar3 = DAT_101e3d0c8 + (ulong)uVar4 * 0xb8;
    if (uVar4 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar4;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar5 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    *puVar5 = &PTR_FUN_101453598;
    puVar5[1] = 0;
    FUN_1000b8690();
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
  }
  return puVar5;
}




undefined8 * FUN_10016e530(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 *puVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar4 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    lVar3 = DAT_101e3d0c8 + (ulong)uVar4 * 0xb8;
    if (uVar4 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar4;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar5 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    *puVar5 = &PTR_FUN_1014535d8;
    puVar5[1] = 0;
    FUN_1000b8690();
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
  }
  return puVar5;
}




undefined8 FUN_10016e5ec(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0c8;
  uVar6 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0c8 + (ulong)uVar6 * 0x38;
    if (uVar6 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar6;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0xe647U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000b880c();
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10016e694(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_101453378;
    *(undefined4 *)(puVar3 + 2) = 0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10016e730(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0c8;
  uVar6 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0c8 + (ulong)uVar6 * 0xb8;
    if (uVar6 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar6;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000b88d4();
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10016e7d4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0c8;
  uVar6 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0c8 + (ulong)uVar6 * 0x38;
    if (uVar6 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar6;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0xe647U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000b88b4();
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10016e87c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    *puVar3 = &PTR_FUN_10145d168;
    puVar3[1] = 0;
    puVar3[2] = &PTR_FUN_10145d1b0;
    puVar3[0x14] = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x12] = 0;
    puVar3[0x11] = 0;
    *(undefined4 *)(puVar3 + 0x13) = 0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016e960(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x54640);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x38;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x54642)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xe640);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x54640) = uVar5;
    *(int *)(lVar2 + 0x54644) = *(int *)(lVar2 + 0x54644) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xe647U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145d1d8;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    uVar1 = *(int *)(lVar2 + 0x54650) + 1;
    *(uint *)(lVar2 + 0x54650) = uVar1;
    if (*(uint *)(lVar2 + 0x54654) < uVar1) {
      *(uint *)(lVar2 + 0x54654) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016ea04(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_10145d200;
    *(undefined4 *)(puVar3 + 2) = 0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10016ea9c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0c8;
  uVar6 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0c8 + (ulong)uVar6 * 0xb8;
    if (uVar6 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar6;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = FUN_1000bd624();
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10016eb40(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_10145d240;
    *(undefined4 *)(puVar3 + 2) = 0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016ebd8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0xe610);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0xb8;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0xe612)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0c8 + 0xe610) = uVar5;
    *(int *)(lVar2 + 0xe614) = *(int *)(lVar2 + 0xe614) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x10] = 0;
    *puVar3 = &PTR_FUN_10145d280;
    puVar3[1] = 0;
    puVar3[2] = &PTR_FUN_10145d1b0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    uVar1 = *(int *)(lVar2 + 0xe620) + 1;
    *(uint *)(lVar2 + 0xe620) = uVar1;
    if (*(uint *)(lVar2 + 0xe624) < uVar1) {
      *(uint *)(lVar2 + 0xe624) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016eca4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    *puVar3 = &PTR_FUN_10145d2b8;
    puVar3[1] = 0;
    puVar3[2] = &PTR_FUN_10145d1b0;
    puVar3[0x14] = 0;
    *(undefined4 *)(puVar3 + 0x16) = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x12] = 0;
    puVar3[0x11] = 0;
    *(undefined4 *)(puVar3 + 0x13) = 0;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016ed88(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0x41040);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0x28;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0x41042)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xf040);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x41040) = uVar5;
    *(int *)(lVar2 + 0x41044) = *(int *)(lVar2 + 0x41044) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xf047U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145d310;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    uVar1 = *(int *)(lVar2 + 0x41050) + 1;
    *(uint *)(lVar2 + 0x41050) = uVar1;
    if (*(uint *)(lVar2 + 0x41054) < uVar1) {
      *(uint *)(lVar2 + 0x41054) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016ee2c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_101453678;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10016eecc(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0d0;
  uVar6 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0d0 + (ulong)uVar6 * 0xc0;
    if (uVar6 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar6;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000bd458();
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10016ef80(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_10145d338;
    *(undefined4 *)(puVar3 + 2) = 0;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f018(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0x41040);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0x28;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0x41042)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xf040);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x41040) = uVar5;
    *(int *)(lVar2 + 0x41044) = *(int *)(lVar2 + 0x41044) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xf047U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145d390;
    puVar3[1] = 0;
    uVar1 = *(int *)(lVar2 + 0x41050) + 1;
    *(uint *)(lVar2 + 0x41050) = uVar1;
    if (*(uint *)(lVar2 + 0x41054) < uVar1) {
      *(uint *)(lVar2 + 0x41054) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f0b4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_10145d3b8;
    *(undefined4 *)(puVar3 + 2) = 0;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f14c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_10145d410;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f1dc(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_10145d468;
    puVar3[1] = 0;
    *(undefined8 *)((long)puVar3 + 0x46) = 0;
    *(undefined8 *)((long)puVar3 + 0x3e) = 0;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f27c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0x41040);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0x28;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0x41042)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xf040);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x41040) = uVar5;
    *(int *)(lVar2 + 0x41044) = *(int *)(lVar2 + 0x41044) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xf047U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145d508;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 4) = DAT_101dc0b88;
    uVar1 = *(int *)(lVar2 + 0x41050) + 1;
    *(uint *)(lVar2 + 0x41050) = uVar1;
    if (*(uint *)(lVar2 + 0x41054) < uVar1) {
      *(uint *)(lVar2 + 0x41054) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f32c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_101453950;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f3c0(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xc0;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar5;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_101453e78;
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10016f454(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0d0;
  uVar6 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0d0 + (ulong)uVar6 * 0xc0;
    if (uVar6 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar6;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000b8ae4();
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10016f4f4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0d0;
  uVar6 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0d0 + (ulong)uVar6 * 0xc0;
    if (uVar6 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar6;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000b8be8();
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10016f594(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0x41040);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0x28;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0x41042)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0xf040);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x41040) = uVar5;
    *(int *)(lVar2 + 0x41044) = *(int *)(lVar2 + 0x41044) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0xf047U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10145d530;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 4) = DAT_101dc0b88;
    uVar1 = *(int *)(lVar2 + 0x41050) + 1;
    *(uint *)(lVar2 + 0x41050) = uVar1;
    if (*(uint *)(lVar2 + 0x41054) < uVar1) {
      *(uint *)(lVar2 + 0x41054) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10016f644(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0d0;
  uVar6 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0d0 + (ulong)uVar6 * 0xc0;
    if (uVar6 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar6;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_1000b8d78();
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10016f6e8(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 *puVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar4 = *(ushort *)(DAT_101e3d0d0 + 0xf010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    lVar3 = DAT_101e3d0d0 + (ulong)uVar4 * 0xc0;
    if (uVar4 == *(ushort *)(DAT_101e3d0d0 + 0xf012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(DAT_101e3d0d0 + 0xf010) = uVar4;
    *(int *)(lVar2 + 0xf014) = *(int *)(lVar2 + 0xf014) + 1;
    puVar5 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    *puVar5 = &PTR_FUN_101453620;
    puVar5[1] = 0;
    FUN_1004e313c();
    uVar1 = *(int *)(lVar2 + 0xf020) + 1;
    *(uint *)(lVar2 + 0xf020) = uVar1;
    if (*(uint *)(lVar2 + 0xf024) < uVar1) {
      *(uint *)(lVar2 + 0xf024) = uVar1;
    }
  }
  return puVar5;
}




undefined8 * FUN_10016f7a4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x58880);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x48;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x58882)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x57680);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x58880) = uVar5;
    *(int *)(lVar2 + 0x58884) = *(int *)(lVar2 + 0x58884) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x57687U & 0xfffffffffffffff8);
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_thunk_FUN_10016cb20_10145d558;
    puVar3[1] = 0;
    uVar1 = *(int *)(lVar2 + 0x58890) + 1;
    *(uint *)(lVar2 + 0x58890) = uVar1;
    if (*(uint *)(lVar2 + 0x58894) < uVar1) {
      *(uint *)(lVar2 + 0x58894) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f858(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x58880);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x48;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x58882)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x57680);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x58880) = uVar5;
    *(int *)(lVar2 + 0x58884) = *(int *)(lVar2 + 0x58884) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x57687U & 0xfffffffffffffff8);
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_10145d5c0;
    puVar3[1] = 0;
    uVar1 = *(int *)(lVar2 + 0x58890) + 1;
    *(uint *)(lVar2 + 0x58890) = uVar1;
    if (*(uint *)(lVar2 + 0x58894) < uVar1) {
      *(uint *)(lVar2 + 0x58894) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f90c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0c8;
  uVar5 = *(ushort *)(DAT_101e3d0c8 + 0x58880);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0c8 + (ulong)uVar5 * 0x48;
    if (uVar5 == *(ushort *)(DAT_101e3d0c8 + 0x58882)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x57680);
    }
    *(ushort *)(DAT_101e3d0c8 + 0x58880) = uVar5;
    *(int *)(lVar2 + 0x58884) = *(int *)(lVar2 + 0x58884) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x57687U & 0xfffffffffffffff8);
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_10145d628;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    uVar1 = *(int *)(lVar2 + 0x58890) + 1;
    *(uint *)(lVar2 + 0x58890) = uVar1;
    if (*(uint *)(lVar2 + 0x58894) < uVar1) {
      *(uint *)(lVar2 + 0x58894) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10016f9c8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e3d0d0;
  uVar5 = *(ushort *)(DAT_101e3d0d0 + 0x47e80);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e3d0d0 + (ulong)uVar5 * 0xf8;
    if (uVar5 == *(ushort *)(DAT_101e3d0d0 + 0x47e82)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x44080);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x47e80) = uVar5;
    *(int *)(lVar2 + 0x47e84) = *(int *)(lVar2 + 0x47e84) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x44087U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[5] = &PTR_thunk_FUN_10016cdb0_10145cbe0;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 10) = 0;
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *puVar3 = &PTR_FUN_10145d690;
    puVar3[1] = 0;
    uVar1 = *(int *)(lVar2 + 0x47e90) + 1;
    *(uint *)(lVar2 + 0x47e90) = uVar1;
    if (*(uint *)(lVar2 + 0x47e94) < uVar1) {
      *(uint *)(lVar2 + 0x47e94) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10016fa98(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0d0;
  uVar6 = *(ushort *)(DAT_101e3d0d0 + 0x47e80);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0d0 + (ulong)uVar6 * 0xf8;
    if (uVar6 == *(ushort *)(DAT_101e3d0d0 + 0x47e82)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x44080);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x47e80) = uVar6;
    *(int *)(lVar2 + 0x47e84) = *(int *)(lVar2 + 0x47e84) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x44087U & 0xfffffffffffffff8);
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_10016c450();
    uVar1 = *(int *)(lVar2 + 0x47e90) + 1;
    *(uint *)(lVar2 + 0x47e90) = uVar1;
    if (*(uint *)(lVar2 + 0x47e94) < uVar1) {
      *(uint *)(lVar2 + 0x47e94) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10016fb4c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e3d0d0;
  uVar6 = *(ushort *)(DAT_101e3d0d0 + 0x47e80);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e3d0d0 + (ulong)uVar6 * 0xf8;
    if (uVar6 == *(ushort *)(DAT_101e3d0d0 + 0x47e82)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x44080);
    }
    *(ushort *)(DAT_101e3d0d0 + 0x47e80) = uVar6;
    *(int *)(lVar2 + 0x47e84) = *(int *)(lVar2 + 0x47e84) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x44087U & 0xfffffffffffffff8);
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = FUN_10016c6b8();
    uVar1 = *(int *)(lVar2 + 0x47e90) + 1;
    *(uint *)(lVar2 + 0x47e90) = uVar1;
    if (*(uint *)(lVar2 + 0x47e94) < uVar1) {
      *(uint *)(lVar2 + 0x47e94) = uVar1;
    }
  }
  return uVar4;
}




undefined4 FUN_10016fc08(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_1;
    }
  }
  if ((uint)DAT_101e3d0d8 != 0) {
    uVar2 = 0;
    if ((uint)DAT_101e3d0d8 != 0) {
      uVar2 = uVar3 / (uint)DAT_101e3d0d8;
    }
    uVar4 = (ulong)(uVar3 - uVar2 * (uint)DAT_101e3d0d8);
    if (*(uint *)(DAT_101e3d0e0 + uVar4 * 8) != uVar3) {
      do {
        if (*(int *)(DAT_101e3d0e0 + uVar4 * 8 + 4) == -1) break;
        uVar2 = (uint)DAT_101e3d0d8;
        if (0 < (int)(uint)uVar4) {
          uVar2 = (uint)uVar4;
        }
        uVar4 = (ulong)(uVar2 - 1);
      } while (*(uint *)(DAT_101e3d0e0 + uVar4 * 8) != uVar3);
      if ((int)uVar4 == -1) {
        return 0x45;
      }
    }
    uVar3 = *(uint *)(DAT_101e3d0e0 + uVar4 * 8 + 4);
    if (uVar3 != 0xffffffff && DAT_101e3d0f8 != 0) {
      return *(undefined4 *)(DAT_101e3d0f8 + (ulong)uVar3 * 4);
    }
  }
  return 0x45;
}




void FUN_10016fcd4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010016fcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_10145cbf0)[param_1 & 0xffffffff])(param_2,param_3,param_4);
  return;
}




void FUN_10016fcf0(void)

{
  undefined4 local_2c;
  undefined4 local_28 [2];
  
  operator_new(0x588b0);
  DAT_101e3d0c8 = FUN_100170a24();
  operator_new(0x47eb0);
  DAT_101e3d0d0 = FUN_100170c44();
  local_2c = 0;
  local_28[0] = 0x8c9fb2bb;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x30f66618;
  local_2c = 1;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc7836a40;
  local_2c = 2;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x7901e02e;
  local_2c = 3;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x48d50fa7;
  local_2c = 4;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x4bbdb0b7;
  local_2c = 5;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xae76a1c8;
  local_2c = 6;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xfa76a560;
  local_2c = 7;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xee533448;
  local_2c = 8;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc3fccc07;
  local_2c = 9;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x9eaf0de7;
  local_2c = 10;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xb103e709;
  local_2c = 0xb;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xa0c16896;
  local_2c = 0xc;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xd66a2b9;
  local_2c = 0xd;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x2594f1f9;
  local_2c = 0xe;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc6c82813;
  local_2c = 0xf;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xe29c2c34;
  local_2c = 0x10;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xec3e6307;
  local_2c = 0x11;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x434dad11;
  local_2c = 0x12;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xd931cdac;
  local_2c = 0x13;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xa5b81b93;
  local_2c = 0x14;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xa6b81d26;
  local_2c = 0x15;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xa7b81eb9;
  local_2c = 0x16;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x829b4398;
  local_2c = 0x17;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x7b169cd7;
  local_2c = 0x18;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x355426ff;
  local_2c = 0x19;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x6f1ef411;
  local_2c = 0x1a;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xd9a9b054;
  local_2c = 0x1b;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x167471d3;
  local_2c = 0x1c;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x5d80f5c3;
  local_2c = 0x1d;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xb3ba0522;
  local_2c = 0x1e;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x107914d6;
  local_2c = 0x1f;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x85145f2c;
  local_2c = 0x20;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x268f0062;
  local_2c = 0x21;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x61372321;
  local_2c = 0x22;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc9181570;
  local_2c = 0x23;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x485033e7;
  local_2c = 0x24;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x1c58209f;
  local_2c = 0x25;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x8b52ec7d;
  local_2c = 0x26;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xdca9b50d;
  local_2c = 0x27;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x6929a1fa;
  local_2c = 0x28;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x93d88856;
  local_2c = 0x29;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x80989fb1;
  local_2c = 0x2a;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc5273f73;
  local_2c = 0x2b;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x679475cd;
  local_2c = 0x2c;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x5699ca14;
  local_2c = 0x2d;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x2d43e96b;
  local_2c = 0x2e;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x3c41d161;
  local_2c = 0x2f;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x779cd8f2;
  local_2c = 0x30;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x1605b3ed;
  local_2c = 0x31;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x7edfbdb1;
  local_2c = 0x32;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x92fe66fc;
  local_2c = 0x33;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xf6f7a4a1;
  local_2c = 0x34;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x34e3f9b8;
  local_2c = 0x35;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x6527c140;
  local_2c = 0x36;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x287977a3;
  local_2c = 0x37;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xfdea3d2c;
  local_2c = 0x38;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc01911bb;
  local_2c = 0x39;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x9ceff677;
  local_2c = 0x3a;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xf3c5e760;
  local_2c = 0x3b;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xdac4737a;
  local_2c = 0x3c;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x3cd954eb;
  local_2c = 0x3d;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xfbf2d6a1;
  local_2c = 0x3e;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xf54b274a;
  local_2c = 0x3f;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0x46964b3d;
  local_2c = 0x40;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xd370aced;
  local_2c = 0x41;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc1e491de;
  local_2c = 0x42;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xc80d0c45;
  local_2c = 0x43;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  local_28[0] = 0xba9ab765;
  local_2c = 0x44;
  FUN_1001706f4(&DAT_101e3d0d8,local_28,&local_2c);
  return;
}




void thunk_FUN_10016cb20(void)

{
  FUN_10016cb20();
  return;
}




void thunk_FUN_10016cf28(void)

{
  FUN_10016cf28();
  return;
}




void thunk_FUN_10016cb20(void)

{
  FUN_10016cb20();
  return;
}




void thunk_FUN_10016cf28(void)

{
  FUN_10016cf28();
  return;
}




void thunk_FUN_10016cf28(void)

{
  FUN_10016cf28();
  return;
}

