// functions/0095b — 17 functions
#include "libGameKindred.h"




void FUN_0095b258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc028;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00964bdc(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b2a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbff8;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00964c98(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbfc8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf98;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf68;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b3b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf38;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b3f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbf08;
  FUN_00948ab4(param_1 + 5,param_1[6]);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b428(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbed8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbea8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b4a8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bbe48;
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    operator_delete((void *)param_1[0x8a]);
  }
  lVar1 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x410) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x420));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x3f8) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x408));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_00952050(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbe78;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbde8;
  FUN_00964d9c(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095b5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbdb0;
  param_1[3] = &PTR_FUN_027bb538;
  FUN_00952050(param_1 + 0x11,1);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1 + 3);
  return;
}




void FUN_0095b638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbd78;
  param_1[3] = &PTR_FUN_027bb448;
  FUN_009515b0(param_1 + 0x13);
  FUN_00951478(param_1 + 0xe,1);
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_0095132c(param_1 + 10,1);
  FUN_009512b0(param_1 + 8,1);
  FUN_00e84dd8(param_1 + 3);
  return;
}




void FUN_0095b6b4(void *param_1)

{
  FUN_009597cc();
  operator_delete(param_1);
  return;
}




void FUN_0095b6d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0095b8d0(param_1);
  FUN_0095dc6c(param_1);
  if ((*(uint *)(param_1 + 0x55dc) & 0xfffffffc) == 4) {
    FUN_009658d4(0xbf800000,param_1 + 0x278);
    goto LAB_0095b8c0;
  }
  uVar1 = FUN_009483a4();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x568b) == '\0') {
      if (*(char *)(param_1 + 0x568a) == '\0') goto LAB_0095b73c;
      uVar4 = 0x40000000;
    }
    else {
      if (*(char *)(param_1 + 0x568a) == '\0') goto LAB_0095b73c;
      uVar4 = 0x3f800000;
    }
  }
  else {
LAB_0095b73c:
    uVar4 = 0xbf800000;
  }
  FUN_009658d4(uVar4,param_1 + 0x278);
  lVar2 = FUN_00cc7c38();
  if ((*(char *)(lVar2 + 0x38) == '\0') ||
     (lVar3 = *(long *)(lVar2 + 0x30), lVar2 = FUN_00e6b5e4(), lVar3 <= lVar2 + -0xe10)) {
    lVar2 = param_1 + 0x3848;
    uVar1 = FUN_00e84e4c(lVar2);
    if (((uVar1 & 1) == 0) && (uVar1 = FUN_00e84e4c(lVar2), (uVar1 & 1) == 0)) {
      FUN_00e82e8c(lVar2);
    }
  }
  lVar2 = param_1 + 0x3b78;
  uVar1 = FUN_00e84e5c(lVar2);
  if (((((uVar1 & 1) == 0) && (uVar1 = FUN_00e84e4c(lVar2), (uVar1 & 1) == 0)) &&
      (uVar1 = FUN_0093dbe8(), (uVar1 & 1) == 0)) && (uVar1 = FUN_00e84e4c(lVar2), (uVar1 & 1) == 0)
     ) {
    FUN_00e830b4(lVar2);
  }
  lVar2 = FUN_00ccc2c8();
  if (*(char *)(lVar2 + 0x10) == '\0') {
    lVar2 = param_1 + 0x37b8;
    uVar1 = FUN_00e84e4c(lVar2);
    if ((((uVar1 & 1) == 0) && (uVar1 = FUN_0093dbe8(), (uVar1 & 1) == 0)) &&
       (uVar1 = FUN_00e84e4c(lVar2), (uVar1 & 1) == 0)) {
      FUN_00e82e58(lVar2);
    }
  }
  lVar2 = FUN_00cce574();
  if (*(char *)(lVar2 + 0x20) == '\0') {
    lVar2 = param_1 + 0x4010;
    uVar1 = FUN_00e84e4c(lVar2);
    if ((((uVar1 & 1) == 0) && (uVar1 = FUN_0093dbe8(), (uVar1 & 1) == 0)) &&
       (uVar1 = FUN_00e84e4c(lVar2), (uVar1 & 1) == 0)) {
      FUN_00e82c58(lVar2);
    }
  }
  lVar2 = FUN_00cccd40();
  if (*(char *)(lVar2 + 0x14) == '\0') {
    lVar2 = param_1 + 0x3770;
    uVar1 = FUN_00e84e4c(lVar2);
    if ((((uVar1 & 1) == 0) && (uVar1 = FUN_0093dbe8(), (uVar1 & 1) == 0)) &&
       (uVar1 = FUN_00e84e4c(lVar2), (uVar1 & 1) == 0)) {
      FUN_00e82e24(lVar2);
    }
  }
  if (*(char *)(param_1 + 0x568d) != '\0') {
    *(char *)(param_1 + 0x568d) = '\0';
  }
LAB_0095b8c0:
  FUN_0096579c(param_1 + 0x18);
  return;
}




void FUN_0095b8d0(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  size_t sVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  long lVar14;
  bool bVar15;
  bool bVar16;
  undefined4 uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  char *pcVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  char *pcVar27;
  void *pvVar28;
  byte *pbVar29;
  char *pcVar30;
  long lVar31;
  size_t sVar32;
  size_t sVar33;
  void *pvVar34;
  byte bVar35;
  float fVar36;
  byte local_c8 [16];
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  ulong local_98;
  size_t local_90;
  byte *local_88;
  long local_78;
  
  lVar14 = tpidr_el0;
  local_78 = *(long *)(lVar14 + 0x28);
  lVar26 = param_1 + 0x30;
  lVar31 = param_1 + 0x18;
  uVar19 = FUN_00e84e74(lVar26);
  if (((uVar19 & 1) != 0) && (uVar19 = FUN_009658ec(lVar31), (uVar19 & 1) == 0)) {
    uVar19 = FUN_00e84e5c(lVar26);
    if ((uVar19 & 1) == 0) {
      uVar19 = FUN_0093dbe8();
      if ((uVar19 & 1) == 0) {
        FUN_0095e12c(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x5680) = *(undefined1 *)(param_1 + 0x1b2);
      *(undefined1 *)(param_1 + 0x5681) = *(undefined1 *)(param_1 + 0x1b1);
      FUN_00910394(param_1 + 0x5468,param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x5674) = *(undefined4 *)(param_1 + 0x1a8);
      FUN_0095e1c8(param_1,param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x55e0) = *(undefined4 *)(param_1 + 0x178);
      uVar8 = *(uint *)(param_1 + 0x184);
      *(uint *)(param_1 + 0x55e4) = uVar8;
      uVar9 = *(uint *)(param_1 + 0x17c);
      *(uint *)(param_1 + 0x55e8) = uVar9;
      uVar10 = *(uint *)(param_1 + 0x180);
      if (uVar10 <= uVar9) {
        uVar10 = uVar9 + 1;
      }
      uVar4 = uVar9;
      if (uVar8 >= uVar9) {
        uVar4 = uVar8;
      }
      *(uint *)(param_1 + 0x55ec) = uVar10;
      if ((uVar8 < uVar9) || (uVar10 < uVar4)) {
        if (uVar4 <= uVar10) {
          uVar10 = uVar4;
        }
        *(uint *)(param_1 + 0x55e4) = uVar10;
      }
      *(undefined8 *)(param_1 + 0x55f8) = *(undefined8 *)(param_1 + 0x154);
      *(undefined8 *)(param_1 + 22000) = *(undefined8 *)(param_1 + 0x14c);
      *(undefined4 *)(param_1 + 0x5618) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined8 *)(param_1 + 0x5608) = *(undefined8 *)(param_1 + 0x164);
      *(undefined8 *)(param_1 + 0x5600) = *(undefined8 *)(param_1 + 0x15c);
      *(undefined8 *)(param_1 + 0x5610) = *(undefined8 *)(param_1 + 0x16c);
      *(undefined4 *)(param_1 + 0x5678) = *(undefined4 *)(param_1 + 0x174);
      *(undefined8 *)(param_1 + 0x5668) = *(undefined8 *)(param_1 + 0x198);
      *(undefined8 *)(param_1 + 0x5660) = *(undefined8 *)(param_1 + 400);
      *(undefined4 *)(param_1 + 0x5670) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x55c0) = *(undefined8 *)(param_1 + 0x138);
      bVar11 = *(byte *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0x55c8) = *(undefined8 *)(param_1 + 0x130);
      pbVar1 = (byte *)(param_1 + 0x5478);
      bVar35 = *pbVar1;
      sVar7 = *(size_t *)(param_1 + 200);
      pvVar28 = *(void **)(param_1 + 0xd0);
      uVar19 = (ulong)(bVar35 >> 1);
      if ((bVar35 & 1) != 0) {
        uVar19 = *(ulong *)(param_1 + 0x5480);
      }
      pvVar34 = pvVar28;
      if ((bVar11 & 1) == 0) {
        pvVar34 = (void *)(param_1 + 0xc1);
        sVar7 = (ulong)(bVar11 >> 1);
      }
      pcVar30 = (char *)(param_1 + 0xc1);
      if (sVar7 == uVar19) {
        pcVar27 = *(char **)(param_1 + 0x5488);
        if ((bVar35 & 1) == 0) {
          pcVar27 = (char *)(param_1 + 0x5479);
        }
        if ((bVar11 & 1) == 0) {
          if (sVar7 != 0) {
            lVar25 = -(ulong)(bVar11 >> 1);
            pcVar22 = pcVar30;
            do {
              if (*pcVar22 != *pcVar27) goto LAB_0095baf4;
              pcVar22 = pcVar22 + 1;
              lVar25 = lVar25 + 1;
              pcVar27 = pcVar27 + 1;
            } while (lVar25 != 0);
          }
        }
        else if ((sVar7 != 0) &&
                (iVar18 = memcmp(pvVar34,pcVar27,sVar7), pvVar34 = pvVar28, iVar18 != 0))
        goto LAB_0095baf4;
      }
      else {
LAB_0095baf4:
        FUN_008fcea8(pbVar1,pvVar34,sVar7);
        bVar11 = *(byte *)(param_1 + 0xc0);
        sVar7 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          sVar7 = *(size_t *)(param_1 + 200);
        }
        sVar33 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar33 = DAT_0320ffb0;
        }
        if (sVar7 == sVar33) {
          pcVar27 = pcVar30;
          if ((bVar11 & 1) != 0) {
            pcVar27 = *(char **)(param_1 + 0xd0);
          }
          pcVar22 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            pcVar22 = &DAT_0320ffa9;
          }
          if ((bVar11 & 1) == 0) {
            if (sVar7 != 0) {
              lVar25 = -(ulong)(bVar11 >> 1);
              do {
                if (*pcVar30 != *pcVar22) goto LAB_0095bb8c;
                pcVar30 = pcVar30 + 1;
                lVar25 = lVar25 + 1;
                pcVar22 = pcVar22 + 1;
              } while (lVar25 != 0);
            }
          }
          else if ((sVar7 != 0) && (iVar18 = memcmp(pcVar27,pcVar22,sVar7), iVar18 != 0))
          goto LAB_0095bb8c;
          FUN_008fce60(pbVar1,&DAT_0320ffa8);
          *(undefined4 *)(param_1 + 0x5634) = 0xffffffff;
          FUN_00e84dec(param_1 + 0x5088);
        }
        else {
LAB_0095bb8c:
          FUN_0095e21c(param_1,(byte *)(param_1 + 0xc0),0);
        }
      }
      bVar11 = *(byte *)(param_1 + 0xf8);
      pbVar24 = (byte *)(param_1 + 0x5490);
      bVar35 = *pbVar24;
      sVar7 = *(size_t *)(param_1 + 0x100);
      pvVar28 = *(void **)(param_1 + 0x108);
      uVar19 = (ulong)(bVar35 >> 1);
      if ((bVar35 & 1) != 0) {
        uVar19 = *(ulong *)(param_1 + 0x5498);
      }
      pvVar34 = pvVar28;
      if ((bVar11 & 1) == 0) {
        pvVar34 = (void *)(param_1 + 0xf9);
        sVar7 = (ulong)(bVar11 >> 1);
      }
      pcVar30 = (char *)(param_1 + 0xf9);
      if (sVar7 == uVar19) {
        pcVar27 = *(char **)(param_1 + 0x54a0);
        if ((bVar35 & 1) == 0) {
          pcVar27 = (char *)(param_1 + 0x5491);
        }
        if ((bVar11 & 1) == 0) {
          if (sVar7 != 0) {
            lVar25 = -(ulong)(bVar11 >> 1);
            pcVar22 = pcVar30;
            do {
              if (*pcVar22 != *pcVar27) goto LAB_0095bc6c;
              pcVar22 = pcVar22 + 1;
              lVar25 = lVar25 + 1;
              pcVar27 = pcVar27 + 1;
            } while (lVar25 != 0);
          }
        }
        else if ((sVar7 != 0) &&
                (iVar18 = memcmp(pvVar34,pcVar27,sVar7), pvVar34 = pvVar28, iVar18 != 0))
        goto LAB_0095bc6c;
      }
      else {
LAB_0095bc6c:
        FUN_008fcea8(pbVar24,pvVar34,sVar7);
        bVar11 = *(byte *)(param_1 + 0xf8);
        sVar7 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          sVar7 = *(size_t *)(param_1 + 0x100);
        }
        sVar33 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar33 = DAT_0320ffb0;
        }
        if (sVar7 == sVar33) {
          pcVar27 = pcVar30;
          if ((bVar11 & 1) != 0) {
            pcVar27 = *(char **)(param_1 + 0x108);
          }
          pcVar22 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            pcVar22 = &DAT_0320ffa9;
          }
          if ((bVar11 & 1) == 0) {
            if (sVar7 != 0) {
              lVar25 = -(ulong)(bVar11 >> 1);
              do {
                if (*pcVar30 != *pcVar22) goto LAB_0095bd04;
                pcVar30 = pcVar30 + 1;
                lVar25 = lVar25 + 1;
                pcVar22 = pcVar22 + 1;
              } while (lVar25 != 0);
            }
          }
          else if ((sVar7 != 0) && (iVar18 = memcmp(pcVar27,pcVar22,sVar7), iVar18 != 0))
          goto LAB_0095bd04;
          FUN_008fce60(pbVar24,&DAT_0320ffa8);
          *(undefined4 *)(param_1 + 0x5638) = 0xffffffff;
          FUN_00e84dec(param_1 + 0x52c8);
        }
        else {
LAB_0095bd04:
          FUN_0095e34c(param_1,(byte *)(param_1 + 0xf8),0);
        }
      }
      puVar2 = (uint *)(param_1 + 0x53a8);
      *(undefined1 *)(param_1 + 0x5683) = *(undefined1 *)(param_1 + 0x1b0);
      *(undefined2 *)(param_1 + 0x5684) = *(undefined2 *)(param_1 + 0x1ac);
      FUN_00951534(puVar2,0);
      FUN_00965324(puVar2,param_1 + 0x1b8);
      FUN_00951534(param_1 + 0x53b8,0);
      FUN_00965324(param_1 + 0x53b8,param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x55d0) = *(undefined8 *)(param_1 + 0x140);
      FUN_00e70314(param_1 + 0x5550);
      piVar3 = (int *)(param_1 + 0x561c);
      *(undefined4 *)(param_1 + 0x55d8) = *(undefined4 *)(param_1 + 0x148);
      *piVar3 = 0;
      if (*puVar2 != 0) {
        lVar25 = 0;
        uVar19 = 0;
        do {
          lVar23 = *(long *)(param_1 + 0x53b0);
          if ((*(byte *)(lVar23 + lVar25) & 1) == 0) {
            lVar23 = lVar23 + lVar25 + 1;
          }
          else {
            lVar23 = *(long *)(lVar23 + lVar25 + 0x10);
          }
          uVar20 = FUN_00ce9bf0(lVar23);
          if ((uVar20 & 1) != 0) {
            *piVar3 = *piVar3 + 1;
          }
          uVar19 = uVar19 + 1;
          lVar25 = lVar25 + 0x18;
        } while (uVar19 < *puVar2);
      }
      FUN_00948e74(lVar26);
      if ((*(char *)(param_1 + 0x568e) == '\0') && (*(int *)(param_1 + 0x55dc) == 1)) {
        bVar15 = true;
        piVar3 = (int *)(param_1 + 0x566c);
        *(char *)(param_1 + 0x568e) = '\x01';
        FUN_00e70314(param_1 + 0x5560);
        auVar13 = SEXT816(*(long *)(param_1 + 0x55c8)) * SEXT816(0x1845c8a0ce512957);
        FUN_008ffcf8("lastLoginDay",(int)(auVar13._8_8_ >> 0xd) - (auVar13._12_4_ >> 0x1f),1);
        FUN_008ffcf8("karmaRating",*(undefined4 *)(param_1 + 0x5618),1);
        FUN_008ffcf8("accountLevel",*(undefined4 *)(param_1 + 0x55e0),1);
        FUN_008ffcf8(&DAT_01b964d3,*(undefined4 *)(param_1 + 0x55f8),1);
        uVar17 = FUN_0095e478(param_1);
        FUN_008ffcf8("numHeroesUnlocked",uVar17,1);
        FUN_008ffcf8("gloryBalance",*(undefined4 *)(param_1 + 0x5454),1);
        FUN_008ffcf8("iceBalance",*(undefined4 *)(param_1 + 0x5450),1);
        FUN_008ffcf8("opalBalance",*(undefined4 *)(param_1 + 0x545c),1);
        FUN_008ffcf8("essenceBalance",*(undefined4 *)(param_1 + 0x5458),1);
        FUN_008ffcf8("lifetimeSpend",*(undefined4 *)(param_1 + 0x5660),1);
        FUN_008ffcf8("lifetimeSpendCount",*(undefined4 *)(param_1 + 0x5664),1);
        FUN_008ffcf8("lifetimePoints",*(undefined4 *)(param_1 + 0x5668),1);
        FUN_008ffcf8("cohort",*piVar3,1);
        FUN_008ffcf8("spenderLevel",*(undefined4 *)(param_1 + 0x5670),1);
        auVar13 = SEXT816(*(long *)(param_1 + 0x55c0)) * SEXT816(0x1845c8a0ce512957);
        FUN_008ffcf8("lastSpendEpochDay",(int)(auVar13._8_8_ >> 0xd) - (auVar13._12_4_ >> 0x1f),1);
        bVar11 = *pbVar1;
        sVar7 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          sVar7 = *(size_t *)(param_1 + 0x5480);
        }
        sVar33 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar33 = DAT_0320ffb0;
        }
        if (sVar7 == sVar33) {
          pvVar28 = *(void **)(param_1 + 0x5488);
          if ((bVar11 & 1) == 0) {
            pvVar28 = (void *)(param_1 + 0x5479);
          }
          pcVar30 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            pcVar30 = &DAT_0320ffa9;
          }
          if ((bVar11 & 1) == 0) {
            if (sVar7 != 0) {
              pcVar27 = (char *)(param_1 + 0x5479);
              lVar26 = -(ulong)(bVar11 >> 1);
              do {
                if (*pcVar27 != *pcVar30) {
                  bVar15 = true;
                  goto LAB_0095c0c0;
                }
                pcVar27 = pcVar27 + 1;
                lVar26 = lVar26 + 1;
                pcVar30 = pcVar30 + 1;
              } while (lVar26 != 0);
            }
          }
          else if (sVar7 != 0) {
            iVar18 = memcmp(pvVar28,pcVar30,sVar7);
            bVar15 = iVar18 != 0;
            goto LAB_0095c0c0;
          }
          bVar15 = false;
        }
LAB_0095c0c0:
        bVar16 = true;
        FUN_008ffca4("member_guild",bVar15,1);
        bVar11 = *pbVar24;
        sVar7 = (ulong)(bVar11 >> 1);
        if ((bVar11 & 1) != 0) {
          sVar7 = *(size_t *)(param_1 + 0x5498);
        }
        sVar33 = (ulong)(DAT_0320ffa8 >> 1);
        if ((DAT_0320ffa8 & 1) != 0) {
          sVar33 = DAT_0320ffb0;
        }
        if (sVar7 == sVar33) {
          pvVar28 = *(void **)(param_1 + 0x54a0);
          if ((bVar11 & 1) == 0) {
            pvVar28 = (void *)(param_1 + 0x5491);
          }
          pcVar30 = DAT_0320ffb8;
          if ((DAT_0320ffa8 & 1) == 0) {
            pcVar30 = &DAT_0320ffa9;
          }
          if ((bVar11 & 1) == 0) {
            if (sVar7 != 0) {
              pcVar27 = (char *)(param_1 + 0x5491);
              lVar26 = -(ulong)(bVar11 >> 1);
              do {
                if (*pcVar27 != *pcVar30) {
                  bVar16 = true;
                  goto LAB_0095c178;
                }
                pcVar27 = pcVar27 + 1;
                lVar26 = lVar26 + 1;
                pcVar30 = pcVar30 + 1;
              } while (lVar26 != 0);
            }
          }
          else if (sVar7 != 0) {
            iVar18 = memcmp(pvVar28,pcVar30,sVar7);
            bVar16 = iVar18 != 0;
            goto LAB_0095c178;
          }
          bVar16 = false;
        }
LAB_0095c178:
        FUN_008ffca4("member_team",bVar16,1);
        uVar21 = FUN_0092ed4c();
        FUN_008ffc4c("clientLanguage",uVar21,1);
        FUN_00e6c1c0((double)*piVar3,&local_98,0x20,&DAT_01baf1d3);
        FUN_008ffc4c("cohortDay",&local_98,1);
        FUN_00e6c1c0((double)*piVar3,&local_98,0x20,&DAT_01b965a5);
        FUN_008ffc4c("cohortMonth",&local_98,1);
        lVar26 = FUN_00e85318(0);
        if (0 < lVar26 - *piVar3) {
          fVar36 = (float)(lVar26 - *piVar3);
          FUN_008ffcf8("accountAgeDays",(int)(fVar36 / 86400.0),1);
          FUN_008ffcf8("accountAgeMonths",(int)(fVar36 / 2.592e+06),1);
        }
        FUN_008fcdb8(&local_98,&DAT_0320ffa8);
        if (*puVar2 != 0) {
          lVar26 = 0;
          uVar19 = 0;
          do {
            FUN_0090de84(&local_98,"[",1);
            pbVar1 = (byte *)(*(long *)(param_1 + 0x53b0) + lVar26);
            uVar20 = *(ulong *)(pbVar1 + 8);
            pbVar24 = *(byte **)(pbVar1 + 0x10);
            if ((*pbVar1 & 1) == 0) {
              pbVar24 = pbVar1 + 1;
              uVar20 = (ulong)(*pbVar1 >> 1);
            }
            FUN_0090de84(&local_98,pbVar24,uVar20);
            FUN_0090de84(&local_98,&DAT_01e21cb0,1);
            uVar19 = uVar19 + 1;
            lVar26 = lVar26 + 0x18;
          } while (uVar19 < *puVar2);
        }
        pbVar1 = (byte *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pbVar1 = local_88;
        }
        FUN_008ffc4c("allUnlocks",pbVar1,1);
        if (((byte)local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        local_98 = 0;
        local_90 = 0;
        local_88 = (byte *)0x0;
        lVar26 = FUN_00e829e0();
        FUN_00e70a24(lVar26 + 0xd8,&local_98);
        pbVar1 = (byte *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pbVar1 = local_88;
        }
        FUN_008ffc4c("playerName",pbVar1,1);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        FUN_00900ba4();
      }
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x318);
  if ((uVar19 & 1) != 0) {
    FUN_00949284(param_1 + 0x318);
    FUN_009658c8(lVar31);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x378);
  if ((uVar19 & 1) != 0) {
    FUN_0094939c(param_1 + 0x378);
    FUN_009658c8(lVar31);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3d8);
  if ((uVar19 & 1) != 0) {
    FUN_0095e4c8(param_1);
    FUN_00949ba8(param_1 + 0x3d8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x478);
  if ((uVar19 & 1) != 0) {
    FUN_009494b4(param_1 + 0x478);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4b8);
  if ((uVar19 & 1) != 0) {
    FUN_009499f0(param_1 + 0x4b8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4f8);
  if ((uVar19 & 1) != 0) {
    FUN_009495e8(param_1 + 0x4f8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x538);
  if (((uVar19 & 1) != 0) && (uVar19 = FUN_0093dbe8(), (uVar19 & 1) == 0)) {
    FUN_00949714(param_1 + 0x538);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x578);
  if ((uVar19 & 1) != 0) {
    FUN_00949808(param_1 + 0x578);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x5b8);
  if ((uVar19 & 1) != 0) {
    FUN_009498fc(param_1 + 0x5b8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x5f8);
  if ((uVar19 & 1) != 0) {
    FUN_00949ae4(param_1 + 0x5f8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x628);
  if ((uVar19 & 1) != 0) {
    FUN_0095e52c(param_1);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4470);
  if ((uVar19 & 1) != 0) {
    FUN_0095e640(param_1);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4bf0);
  if ((uVar19 & 1) != 0) {
    FUN_0095e7f4(param_1);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3540);
  if (((uVar19 & 1) != 0) && (*(int *)(param_1 + 0x3578) == 0)) {
    FUN_0094b3d8(param_1 + 0x3540);
    *(undefined1 *)(param_1 + 0x5689) = 1;
  }
  uVar19 = FUN_00e84e74(param_1 + 0x668);
  if ((uVar19 & 1) != 0) {
    FUN_00e829b4();
    FUN_00949e70(param_1 + 0x668);
  }
  uVar19 = FUN_00e84e74(param_1 + 0xb68);
  if ((uVar19 & 1) != 0) {
    FUN_00e829b4();
  }
  uVar19 = FUN_00e84e74(param_1 + 0xb98);
  if ((uVar19 & 1) != 0) {
    FUN_0094a178(param_1 + 0xb98);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0xfe0);
  if ((uVar19 & 1) != 0) {
    FUN_0094a384(param_1 + 0xfe0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2778);
  if ((uVar19 & 1) != 0) {
    FUN_0094a49c(param_1 + 0x2778);
    if (*(int *)(param_1 + 0x27a0) != 0) {
      if (*(char *)(param_1 + 0x568a) != '\0') {
        FUN_009606dc(param_1,0);
      }
      *(char *)(param_1 + 0x568a) = '\0';
    }
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x1040);
  if (((uVar19 & 1) != 0) && (FUN_0094a6a8(param_1 + 0x1040), *(int *)(param_1 + 0x1080) != 0)) {
    if (*(char *)(param_1 + 0x568a) != '\0') {
      FUN_009606dc(param_1,0);
    }
    *(char *)(param_1 + 0x568a) = '\0';
  }
  uVar19 = FUN_00e84e74(param_1 + 0x14d0);
  if (((uVar19 & 1) != 0) && (FUN_0094a8b0(param_1 + 0x14d0), *(int *)(param_1 + 0x1588) != 0)) {
    if (*(char *)(param_1 + 0x568a) != '\0') {
      FUN_009606dc(param_1,0);
    }
    *(char *)(param_1 + 0x568a) = '\0';
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2bc0);
  if (((uVar19 & 1) != 0) && (*(int *)(param_1 + 0x2c00) == 0)) {
    if (*(char *)(param_1 + 0x568a) != '\0') {
      FUN_009606dc(param_1,0);
    }
    *(char *)(param_1 + 0x568a) = '\0';
    FUN_008fce60(param_1 + 0x54c0,&DAT_0320ffa8);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x1e00);
  if (((uVar19 & 1) != 0) && (*(int *)(param_1 + 0x2c00) == 0)) {
    if (*(char *)(param_1 + 0x568a) != '\0') {
      FUN_009606dc(param_1,0);
    }
    *(char *)(param_1 + 0x568a) = '\0';
    FUN_008fce60(param_1 + 0x54c0,&DAT_0320ffa8);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2c20);
  if ((uVar19 & 1) != 0) {
    FUN_0094ab38(param_1 + 0x2c20);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2c80);
  if ((uVar19 & 1) != 0) {
    FUN_0094ac50(param_1 + 0x2c80);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2ce0);
  if ((uVar19 & 1) != 0) {
    FUN_0094ad68(param_1 + 0x2ce0);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2d40);
  if ((uVar19 & 1) != 0) {
    FUN_0094ae80(param_1 + 0x2d40);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2da0);
  if ((uVar19 & 1) != 0) {
    FUN_0094af98(param_1 + 0x2da0);
    uVar19 = FUN_0093dbe8();
    if ((uVar19 & 1) == 0) {
      FUN_009658c8(param_1 + 0x278);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x2e00);
  if ((uVar19 & 1) != 0) {
    FUN_0094b0b0(param_1 + 0x2e00);
    FUN_00e829b4();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x1e60);
  if ((uVar19 & 1) != 0) {
    FUN_0094b164(param_1 + 0x1e60);
    FUN_00e829b4();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3848);
  if ((uVar19 & 1) != 0) {
    FUN_0095eac0(param_1);
    FUN_0094d744();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x39c0);
  if ((uVar19 & 1) != 0) {
    FUN_0095eb38(param_1);
    FUN_0094d780();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3a08);
  if ((uVar19 & 1) != 0) {
    FUN_0095eb38(param_1);
    FUN_0094d7bc();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3580);
  if ((uVar19 & 1) != 0) {
    FUN_0094b584(param_1 + 0x3580);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x35f8);
  if ((uVar19 & 1) != 0) {
    FUN_0094d2bc(param_1 + 0x35f8);
    FUN_009658c8(lVar31);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3650);
  if ((uVar19 & 1) != 0) {
    FUN_0094d3c0(param_1 + 0x3650);
  }
  uVar19 = FUN_00e84e74(param_1 + 14000);
  if ((uVar19 & 1) != 0) {
    FUN_0094d4d8(param_1 + 14000);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3710);
  if ((uVar19 & 1) != 0) {
    FUN_0094d5f0(param_1 + 0x3710);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3890);
  if ((uVar19 & 1) != 0) {
    FUN_0094bb98(param_1 + 0x3890);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x38f0);
  if ((uVar19 & 1) != 0) {
    FUN_0094bcdc(param_1 + 0x38f0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3c38);
  if ((uVar19 & 1) != 0) {
    FUN_00950074(param_1 + 0x3c38);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3d60);
  if ((uVar19 & 1) != 0) {
    FUN_009504ac(param_1 + 0x3d60);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3de0);
  if ((uVar19 & 1) != 0) {
    FUN_0095070c(param_1 + 0x3de0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3e28);
  if ((uVar19 & 1) != 0) {
    FUN_00950848(param_1 + 0x3e28);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3928);
  if ((uVar19 & 1) != 0) {
    FUN_0094cda4(param_1 + 0x3928);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3980);
  if ((uVar19 & 1) != 0) {
    FUN_0094cf08(param_1 + 0x3980);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3a50);
  if ((uVar19 & 1) != 0) {
    FUN_0094ba40(param_1 + 0x3a50);
    FUN_0095ec20(param_1);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3aa8);
  if ((uVar19 & 1) != 0) {
    FUN_0095e1c8(param_1,param_1 + 0x3ad0);
    FUN_0094d034(param_1 + 0x3aa8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3b10);
  if ((uVar19 & 1) != 0) {
    FUN_0095e1c8(param_1,param_1 + 0x3b38);
    FUN_0094d178(param_1 + 0x3b10);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3b78);
  if ((uVar19 & 1) != 0) {
    FUN_0094d7f8();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x37b8);
  if ((uVar19 & 1) != 0) {
    FUN_0095ed68(param_1);
    FUN_0094d870();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3770);
  if ((uVar19 & 1) != 0) {
    FUN_0095ede0(param_1);
    FUN_0094d834();
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3bb8);
  if ((uVar19 & 1) != 0) {
    FUN_0094bda8(param_1 + 0x3bb8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3ea8);
  if ((uVar19 & 1) != 0) {
    FUN_0094bedc(param_1 + 0x3ea8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3ee8);
  if ((uVar19 & 1) != 0) {
    FUN_0094c010(param_1 + 0x3ee8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3f28);
  if ((uVar19 & 1) != 0) {
    FUN_0094c144(param_1 + 0x3f28);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3f68);
  if ((uVar19 & 1) != 0) {
    FUN_0094c278(param_1 + 0x3f68);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3fa8);
  if ((uVar19 & 1) != 0) {
    FUN_0094c3ac(param_1 + 0x3fa8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3fe8);
  if ((uVar19 & 1) != 0) {
    FUN_0094c4e0(param_1 + 0x3fe8);
  }
  lVar26 = param_1 + 0x4010;
  uVar19 = FUN_00e84e74(lVar26);
  if (((uVar19 & 1) != 0) && (uVar19 = FUN_00e84e5c(lVar26), (uVar19 & 1) != 0)) {
    uVar21 = FUN_00cce574();
    pbVar1 = (byte *)(param_1 + 0x4038);
    FUN_008fcdb8(local_b0,pbVar1);
    pbVar24 = (byte *)(param_1 + 0x4050);
    FUN_008fcdb8(local_c8,pbVar24);
    FUN_00ccd6c0(uVar21,local_b0,local_c8);
    if ((local_c8[0] & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x4048) = 0;
      *(undefined8 *)(param_1 + 0x4040) = 0;
    }
    if ((*pbVar24 & 1) == 0) {
      pbVar24[0] = 0;
      pbVar24[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x4060) = 0;
      *(undefined8 *)(param_1 + 0x4058) = 0;
    }
    FUN_0094c5a4(lVar26);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4070);
  if ((uVar19 & 1) != 0) {
    FUN_0094c704(param_1 + 0x4070);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x40b0);
  if ((uVar19 & 1) != 0) {
    FUN_0094c838(param_1 + 0x40b0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x40f0);
  if ((uVar19 & 1) != 0) {
    FUN_0094c934(param_1 + 0x40f0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4130);
  if ((uVar19 & 1) != 0) {
    if (*(uint *)(param_1 + 0x4158) != 0) {
      lVar26 = 0;
      uVar19 = 0;
      do {
        uVar21 = FUN_00cdbb18();
        FUN_00cdd418(uVar21,*(long *)(param_1 + 0x4160) + lVar26);
        uVar19 = uVar19 + 1;
        lVar26 = lVar26 + 0x78;
      } while (uVar19 < *(uint *)(param_1 + 0x4158));
    }
    FUN_0094ca30(param_1 + 0x4130);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x41a0);
  if ((uVar19 & 1) != 0) {
    FUN_0094cbc0(param_1 + 0x41a0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4200);
  if ((uVar19 & 1) != 0) {
    FUN_0094ccd8(param_1 + 0x4200);
  }
  lVar26 = param_1 + 0x4230;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    uVar19 = FUN_00e84e5c(lVar26);
    if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x4448) != '\0')) {
      bVar11 = *(byte *)(param_1 + 0x43b0);
      uVar19 = (ulong)(bVar11 >> 1);
      sVar7 = uVar19;
      if ((bVar11 & 1) != 0) {
        sVar7 = *(size_t *)(param_1 + 0x43b8);
      }
      sVar33 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar33 = DAT_0320ffb0;
      }
      if (sVar7 == sVar33) {
        pvVar28 = *(void **)(param_1 + 0x43c0);
        if ((bVar11 & 1) == 0) {
          pvVar28 = (void *)(param_1 + 0x43b1);
        }
        pcVar30 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar30 = &DAT_0320ffa9;
        }
        if ((bVar11 & 1) == 0) {
          if (sVar7 != 0) {
            pcVar27 = (char *)(param_1 + 0x43b1);
            lVar25 = -uVar19;
            do {
              if (*pcVar27 != *pcVar30) goto LAB_0095cddc;
              pcVar27 = pcVar27 + 1;
              lVar25 = lVar25 + 1;
              pcVar30 = pcVar30 + 1;
            } while (lVar25 != 0);
          }
        }
        else if ((sVar7 != 0) && (iVar18 = memcmp(pvVar28,pcVar30,sVar7), iVar18 != 0))
        goto LAB_0095cddc;
      }
      else {
LAB_0095cddc:
        bVar35 = *(byte *)(param_1 + 0x5478);
        sVar33 = (ulong)(bVar35 >> 1);
        if ((bVar35 & 1) != 0) {
          sVar33 = *(size_t *)(param_1 + 0x5480);
        }
        if (sVar7 == sVar33) {
          pvVar28 = *(void **)(param_1 + 0x43c0);
          pcVar30 = *(char **)(param_1 + 0x5488);
          if ((bVar11 & 1) == 0) {
            pvVar28 = (void *)(param_1 + 0x43b1);
          }
          if ((bVar35 & 1) == 0) {
            pcVar30 = (char *)(param_1 + 0x5479);
          }
          if ((bVar11 & 1) == 0) {
            if (sVar7 != 0) {
              pcVar27 = (char *)(param_1 + 0x43b1);
              lVar25 = -uVar19;
              do {
                if (*pcVar27 != *pcVar30) goto LAB_0095cfc8;
                pcVar27 = pcVar27 + 1;
                lVar25 = lVar25 + 1;
                pcVar30 = pcVar30 + 1;
              } while (lVar25 != 0);
            }
          }
          else if ((sVar7 != 0) && (iVar18 = memcmp(pvVar28,pcVar30,sVar7), iVar18 != 0))
          goto LAB_0095cfc8;
          lVar25 = param_1 + 0x5479;
          FUN_0095ee58(param_1 + 0x5088,lVar26);
          local_98 = 0;
          local_90 = 0;
          local_88 = (byte *)0x0;
          FUN_00e81200(&local_98);
          if ((*(byte *)(param_1 + 0x4270) & 1) == 0) {
            lVar23 = param_1 + 0x4271;
          }
          else {
            lVar23 = *(long *)(param_1 + 0x4280);
          }
          FUN_008ffc4c("guildName",lVar23,1);
          if ((*(byte *)(param_1 + 0x5478) & 1) != 0) {
            lVar25 = *(long *)(param_1 + 0x5488);
          }
          FUN_008ffc4c("guildUUID",lVar25,1);
          uVar19 = local_98;
          uVar10 = *(uint *)(param_1 + 0x5260);
          if (uVar10 == 0) {
            uVar17 = 0xffffffff;
          }
          else {
            lVar25 = *(long *)(param_1 + 0x5268);
            uVar20 = 0;
            sVar7 = local_98 >> 1 & 0x7f;
            pbVar1 = (byte *)((ulong)&local_98 | 1);
            if ((local_98 & 1) != 0) {
              sVar7 = local_90;
              pbVar1 = local_88;
            }
            do {
              pbVar24 = (byte *)(lVar25 + uVar20 * 0x108);
              bVar11 = *pbVar24;
              uVar5 = (ulong)(bVar11 >> 1);
              if ((bVar11 & 1) != 0) {
                uVar5 = *(ulong *)(pbVar24 + 8);
              }
              if (uVar5 == sVar7) {
                pbVar29 = *(byte **)(lVar25 + uVar20 * 0x108 + 0x10);
                if ((bVar11 & 1) == 0) {
                  pbVar29 = pbVar24 + 1;
                }
                if ((bVar11 & 1) == 0) {
                  if (sVar7 == 0) goto LAB_0095cf9c;
                  lVar23 = -(ulong)(bVar11 >> 1);
                  pbVar29 = pbVar1;
                  while (pbVar24 = pbVar24 + 1, *pbVar24 == *pbVar29) {
                    lVar23 = lVar23 + 1;
                    pbVar29 = pbVar29 + 1;
                    if (lVar23 == 0) goto LAB_0095cf9c;
                  }
                }
                else if ((sVar7 == 0) || (iVar18 = memcmp(pbVar29,pbVar1,sVar7), iVar18 == 0))
                goto LAB_0095cf9c;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar10);
            uVar20 = 0xffffffff;
LAB_0095cf9c:
            uVar17 = (undefined4)uVar20;
          }
          *(undefined4 *)(param_1 + 0x5634) = uVar17;
          if ((uVar19 & 1) != 0) {
            operator_delete(local_88);
          }
        }
      }
    }
LAB_0095cfc8:
    FUN_0094d8ac(lVar26);
  }
  lVar26 = param_1 + 0x44d0;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    uVar19 = FUN_00e84e5c(lVar26);
    if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x44f5) != '\0')) {
      FUN_00e81f3c(param_1 + 0x4470);
      pbVar1 = (byte *)(param_1 + 0x4518);
      bVar11 = *pbVar1;
      uVar19 = (ulong)(bVar11 >> 1);
      sVar7 = uVar19;
      if ((bVar11 & 1) != 0) {
        sVar7 = *(size_t *)(param_1 + 0x4520);
      }
      sVar33 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar33 = DAT_0320ffb0;
      }
      if (sVar7 == sVar33) {
        pvVar28 = *(void **)(param_1 + 0x4528);
        if ((bVar11 & 1) == 0) {
          pvVar28 = (void *)(param_1 + 0x4519);
        }
        pcVar30 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar30 = &DAT_0320ffa9;
        }
        if ((bVar11 & 1) == 0) {
          if (sVar7 != 0) {
            pcVar27 = (char *)(param_1 + 0x4519);
            lVar25 = -uVar19;
            do {
              if (*pcVar27 != *pcVar30) goto LAB_0095d0a0;
              pcVar27 = pcVar27 + 1;
              lVar25 = lVar25 + 1;
              pcVar30 = pcVar30 + 1;
            } while (lVar25 != 0);
          }
        }
        else if ((sVar7 != 0) && (iVar18 = memcmp(pvVar28,pcVar30,sVar7), iVar18 != 0))
        goto LAB_0095d0a0;
      }
      else {
LAB_0095d0a0:
        bVar35 = *(byte *)(param_1 + 0x5478);
        sVar33 = (ulong)(bVar35 >> 1);
        if ((bVar35 & 1) != 0) {
          sVar33 = *(size_t *)(param_1 + 0x5480);
        }
        if (sVar7 == sVar33) {
          pvVar28 = *(void **)(param_1 + 0x4528);
          pcVar30 = *(char **)(param_1 + 0x5488);
          if ((bVar11 & 1) == 0) {
            pvVar28 = (void *)(param_1 + 0x4519);
          }
          if ((bVar35 & 1) == 0) {
            pcVar30 = (char *)(param_1 + 0x5479);
          }
          if ((bVar11 & 1) == 0) {
            if (sVar7 != 0) {
              pcVar27 = (char *)(param_1 + 0x4519);
              lVar25 = -uVar19;
              do {
                if (*pcVar27 != *pcVar30) goto LAB_0095d120;
                pcVar27 = pcVar27 + 1;
                lVar25 = lVar25 + 1;
                pcVar30 = pcVar30 + 1;
              } while (lVar25 != 0);
            }
          }
          else if ((sVar7 != 0) && (iVar18 = memcmp(pvVar28,pcVar30,sVar7), iVar18 != 0))
          goto LAB_0095d120;
        }
        else {
LAB_0095d120:
          uVar19 = FUN_0093dbe8();
          if ((uVar19 & 1) == 0) {
            FUN_0095e21c(param_1,pbVar1,1);
          }
        }
      }
      uVar19 = (ulong)(*pbVar1 >> 1);
      lVar25 = param_1 + 0x4519;
      if ((*pbVar1 & 1) != 0) {
        uVar19 = *(ulong *)(param_1 + 0x4520);
        lVar25 = *(long *)(param_1 + 0x4528);
      }
      FUN_008fcea8(param_1 + 0x5478,lVar25,uVar19);
    }
    FUN_0094dc50(lVar26);
  }
  lVar26 = param_1 + 0x4590;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    FUN_0094ded8(lVar26);
    uVar19 = FUN_00e84e5c(lVar26);
    if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x45d4) != '\0')) {
      lVar26 = *(long *)(param_1 + 0x53e0);
      if (lVar26 != 0) {
        uVar10 = *(uint *)(param_1 + 0x53d8);
        if (uVar10 != 0) {
          lVar25 = (ulong)uVar10 * 0x1a8;
          do {
            FUN_00964d08(lVar26);
            lVar25 = lVar25 + -0x1a8;
            lVar26 = lVar26 + 0x1a8;
          } while (lVar25 != 0);
        }
        *(uint *)(param_1 + 0x53d8) = 0;
      }
      FUN_0099cf94(param_1 + 0x5570,0);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x45f0);
  if ((uVar19 & 1) != 0) {
    FUN_0094dff0(param_1 + 0x45f0);
  }
  uVar19 = FUN_00e84e74(param_1 + 18000);
  if ((uVar19 & 1) != 0) {
    FUN_0094e338(param_1 + 18000);
  }
  lVar26 = param_1 + 0x46b0;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    uVar19 = FUN_00e84e5c(lVar26);
    if ((uVar19 & 1) != 0) {
      uVar19 = FUN_0093dbe8();
      if ((uVar19 & 1) == 0) {
        FUN_009658c8(lVar31);
      }
      if (*(char *)(param_1 + 0x46f4) != '\0') {
        lVar31 = *(long *)(param_1 + 0x53e0);
        if (lVar31 != 0) {
          uVar10 = *(uint *)(param_1 + 0x53d8);
          if (uVar10 != 0) {
            lVar25 = (ulong)uVar10 * 0x1a8;
            do {
              FUN_00964d08(lVar31);
              lVar25 = lVar25 + -0x1a8;
              lVar31 = lVar31 + 0x1a8;
            } while (lVar25 != 0);
          }
          *(uint *)(param_1 + 0x53d8) = 0;
        }
        FUN_0099cf94(param_1 + 0x5570,0);
      }
    }
    FUN_0094e108(lVar26);
  }
  lVar26 = param_1 + 0x4710;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    uVar19 = FUN_00e84e5c(lVar26);
    if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x4754) != '\0')) {
      FUN_008fce60(param_1 + 0x5478,&DAT_0320ffa8);
      *(undefined4 *)(param_1 + 0x5634) = 0xffffffff;
      FUN_00e84dec(param_1 + 0x5088);
    }
    FUN_0094ddc0(lVar26);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4770);
  if ((uVar19 & 1) != 0) {
    FUN_0094e450(param_1 + 0x4770);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x47d0);
  if ((uVar19 & 1) != 0) {
    FUN_0094e568(param_1 + 0x47d0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4830);
  if ((uVar19 & 1) != 0) {
    FUN_0094e680(param_1 + 0x4830);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4890);
  if ((uVar19 & 1) != 0) {
    FUN_0094e798(param_1 + 0x4890);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x48f0);
  if ((uVar19 & 1) != 0) {
    FUN_0094e8b0(param_1 + 0x48f0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4950);
  if ((uVar19 & 1) != 0) {
    FUN_0094e9c8(param_1 + 0x4950);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x49b0);
  if ((uVar19 & 1) != 0) {
    FUN_0094eae0(param_1 + 0x49b0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4a10);
  if ((uVar19 & 1) != 0) {
    FUN_0094ebf8(param_1 + 0x4a10);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4a50);
  if ((uVar19 & 1) != 0) {
    FUN_0094ecec(param_1 + 0x4a50);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4a90);
  if ((uVar19 & 1) != 0) {
    FUN_0094ede0(param_1 + 0x4a90);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4ad0);
  if ((uVar19 & 1) != 0) {
    FUN_0094eed4(param_1 + 0x4ad0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4530);
  if ((uVar19 & 1) != 0) {
    FUN_0094e220(param_1 + 0x4530);
  }
  lVar26 = param_1 + 0x4b10;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    uVar19 = FUN_00e84e5c(lVar26);
    if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x4bc8) != '\0')) {
      bVar11 = *(byte *)(param_1 + 0x5490);
      sVar7 = (ulong)(bVar11 >> 1);
      if ((bVar11 & 1) != 0) {
        sVar7 = *(size_t *)(param_1 + 0x5498);
      }
      sVar33 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar33 = DAT_0320ffb0;
      }
      if (sVar7 == sVar33) {
        pvVar28 = *(void **)(param_1 + 0x54a0);
        if ((bVar11 & 1) == 0) {
          pvVar28 = (void *)(param_1 + 0x5491);
        }
        pcVar30 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar30 = &DAT_0320ffa9;
        }
        if ((bVar11 & 1) == 0) {
          if (sVar7 != 0) {
            pcVar27 = (char *)(param_1 + 0x5491);
            lVar31 = -(ulong)(bVar11 >> 1);
            do {
              if (*pcVar27 != *pcVar30) goto LAB_0095d524;
              pcVar27 = pcVar27 + 1;
              lVar31 = lVar31 + 1;
              pcVar30 = pcVar30 + 1;
            } while (lVar31 != 0);
          }
        }
        else if ((sVar7 != 0) && (iVar18 = memcmp(pvVar28,pcVar30,sVar7), iVar18 != 0))
        goto LAB_0095d524;
      }
      else {
LAB_0095d524:
        bVar35 = *(byte *)(param_1 + 0x4b38);
        sVar33 = (ulong)(bVar35 >> 1);
        if ((bVar35 & 1) != 0) {
          sVar33 = *(size_t *)(param_1 + 0x4b40);
        }
        if (sVar33 == sVar7) {
          pvVar28 = *(void **)(param_1 + 0x4b48);
          pcVar30 = *(char **)(param_1 + 0x54a0);
          if ((bVar35 & 1) == 0) {
            pvVar28 = (void *)(param_1 + 0x4b39);
          }
          if ((bVar11 & 1) == 0) {
            pcVar30 = (char *)(param_1 + 0x5491);
          }
          if ((bVar35 & 1) == 0) {
            if (sVar7 != 0) {
              pcVar27 = (char *)(param_1 + 0x4b39);
              lVar31 = -(ulong)(bVar35 >> 1);
              do {
                if (*pcVar27 != *pcVar30) goto LAB_0095d7e4;
                pcVar27 = pcVar27 + 1;
                lVar31 = lVar31 + 1;
                pcVar30 = pcVar30 + 1;
              } while (lVar31 != 0);
            }
          }
          else if ((sVar7 != 0) && (iVar18 = memcmp(pvVar28,pcVar30,sVar7), iVar18 != 0))
          goto LAB_0095d7e4;
          *(undefined8 *)(param_1 + 0x52e5) = *(undefined8 *)(param_1 + 0x4b2d);
          *(undefined8 *)(param_1 + 0x52dd) = *(undefined8 *)(param_1 + 0x4b25);
          *(undefined8 *)(param_1 + 0x52d8) = *(undefined8 *)(param_1 + 0x4b20);
          *(undefined8 *)(param_1 + 0x52d0) = *(undefined8 *)(param_1 + 0x4b18);
          FUN_008fcea8(param_1 + 0x52f0,pvVar28,sVar7);
          uVar19 = (ulong)(*(byte *)(param_1 + 0x4b50) >> 1);
          lVar31 = param_1 + 0x4b51;
          if ((*(byte *)(param_1 + 0x4b50) & 1) != 0) {
            uVar19 = *(ulong *)(param_1 + 0x4b58);
            lVar31 = *(long *)(param_1 + 0x4b60);
          }
          FUN_008fcea8(param_1 + 0x5308,lVar31,uVar19);
          uVar19 = (ulong)(*(byte *)(param_1 + 0x4b68) >> 1);
          lVar31 = param_1 + 0x4b69;
          if ((*(byte *)(param_1 + 0x4b68) & 1) != 0) {
            uVar19 = *(ulong *)(param_1 + 0x4b70);
            lVar31 = *(long *)(param_1 + 0x4b78);
          }
          FUN_008fcea8(param_1 + 0x5320,lVar31,uVar19);
          *(undefined8 *)(param_1 + 0x5340) = *(undefined8 *)(param_1 + 0x4b88);
          *(undefined8 *)(param_1 + 0x5338) = *(undefined8 *)(param_1 + 0x4b80);
          *(undefined8 *)(param_1 + 0x5350) = *(undefined8 *)(param_1 + 0x4b98);
          *(undefined8 *)(param_1 + 0x5348) = *(undefined8 *)(param_1 + 0x4b90);
          *(undefined1 *)(param_1 + 0x5358) = *(undefined1 *)(param_1 + 0x4ba0);
          FUN_009650d8(param_1 + 0x5360,(uint *)(param_1 + 0x4ba8));
          FUN_00965180(param_1 + 0x5370,param_1 + 0x4bb8);
          *(char *)(param_1 + 0x5380) = *(char *)(param_1 + 0x4bc8);
          uVar19 = (ulong)(*(byte *)(param_1 + 0x4bd0) >> 1);
          lVar31 = param_1 + 0x4bd1;
          if ((*(byte *)(param_1 + 0x4bd0) & 1) != 0) {
            uVar19 = *(ulong *)(param_1 + 0x4bd8);
            lVar31 = *(long *)(param_1 + 0x4be0);
          }
          FUN_008fcea8(param_1 + 0x5388,lVar31,uVar19);
          *(undefined4 *)(param_1 + 0x53a0) = *(undefined4 *)(param_1 + 0x4be8);
          local_98 = 0;
          local_90 = 0;
          local_88 = (byte *)0x0;
          FUN_00e81200(&local_98);
          uVar19 = local_98;
          uVar10 = *(uint *)(param_1 + 0x4ba8);
          if (uVar10 == 0) {
            uVar17 = 0xffffffff;
          }
          else {
            lVar31 = *(long *)(param_1 + 0x4bb0);
            uVar20 = 0;
            sVar7 = local_98 >> 1 & 0x7f;
            pbVar1 = (byte *)((ulong)&local_98 | 1);
            if ((local_98 & 1) != 0) {
              sVar7 = local_90;
              pbVar1 = local_88;
            }
            do {
              pbVar24 = (byte *)(lVar31 + uVar20 * 0x38);
              bVar11 = *pbVar24;
              uVar5 = (ulong)(bVar11 >> 1);
              if ((bVar11 & 1) != 0) {
                uVar5 = *(ulong *)(pbVar24 + 8);
              }
              if (uVar5 == sVar7) {
                pbVar29 = *(byte **)(lVar31 + uVar20 * 0x38 + 0x10);
                if ((bVar11 & 1) == 0) {
                  pbVar29 = pbVar24 + 1;
                }
                if ((bVar11 & 1) == 0) {
                  if (sVar7 == 0) goto LAB_0095d7bc;
                  lVar25 = -(ulong)(bVar11 >> 1);
                  pbVar29 = pbVar1;
                  while (pbVar24 = pbVar24 + 1, *pbVar24 == *pbVar29) {
                    lVar25 = lVar25 + 1;
                    pbVar29 = pbVar29 + 1;
                    if (lVar25 == 0) goto LAB_0095d7bc;
                  }
                }
                else if ((sVar7 == 0) || (iVar18 = memcmp(pbVar29,pbVar1,sVar7), iVar18 == 0))
                goto LAB_0095d7bc;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < uVar10);
            uVar20 = 0xffffffff;
LAB_0095d7bc:
            uVar17 = (undefined4)uVar20;
          }
          *(undefined4 *)(param_1 + 0x5638) = uVar17;
          if ((uVar19 & 1) != 0) {
            operator_delete(local_88);
          }
        }
      }
    }
LAB_0095d7e4:
    FUN_0094efc8(lVar26);
  }
  lVar26 = param_1 + 0x4c50;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) == 0) goto LAB_0095d998;
  uVar19 = FUN_00e84e5c(lVar26);
  if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x4c75) != '\0')) {
    pbVar1 = (byte *)(param_1 + 0x4c98);
    bVar11 = *pbVar1;
    sVar32 = *(size_t *)(param_1 + 0x4ca0);
    sVar33 = (size_t)(bVar11 >> 1);
    sVar7 = sVar33;
    if ((bVar11 & 1) != 0) {
      sVar7 = sVar32;
    }
    sVar6 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar6 = DAT_0320ffb0;
    }
    bVar35 = bVar11 & 1;
    if (sVar7 == sVar6) {
      pvVar34 = *(void **)(param_1 + 0x4ca8);
      pcVar30 = (char *)(param_1 + 0x4c99);
      pvVar28 = pvVar34;
      if ((bVar11 & 1) == 0) {
        pvVar28 = (void *)(param_1 + 0x4c99);
      }
      pcVar27 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar27 = &DAT_0320ffa9;
      }
      if ((bVar11 & 1) == 0) {
        if (sVar7 != 0) {
          lVar31 = -sVar33;
          do {
            if (*pcVar30 != *pcVar27) goto LAB_0095d8bc;
            pcVar30 = pcVar30 + 1;
            lVar31 = lVar31 + 1;
            pcVar27 = pcVar27 + 1;
          } while (lVar31 != 0);
        }
LAB_0095d92c:
        bVar35 = 0;
      }
      else {
        if ((sVar7 != 0) && (iVar18 = memcmp(pvVar28,pcVar27,sVar7), iVar18 != 0))
        goto LAB_0095d8bc;
        bVar35 = 1;
      }
    }
    else {
LAB_0095d8bc:
      bVar12 = *(byte *)(param_1 + 0x5490);
      sVar6 = (ulong)(bVar12 >> 1);
      if ((bVar12 & 1) != 0) {
        sVar6 = *(size_t *)(param_1 + 0x5498);
      }
      if (sVar7 == sVar6) {
        pvVar34 = *(void **)(param_1 + 0x4ca8);
        pcVar27 = *(char **)(param_1 + 0x54a0);
        pcVar30 = (char *)(param_1 + 0x4c99);
        pvVar28 = pvVar34;
        if ((bVar11 & 1) == 0) {
          pvVar28 = (void *)(param_1 + 0x4c99);
        }
        if ((bVar12 & 1) == 0) {
          pcVar27 = (char *)(param_1 + 0x5491);
        }
        if ((bVar11 & 1) == 0) {
          if (sVar7 != 0) {
            lVar31 = -sVar33;
            do {
              if (*pcVar30 != *pcVar27) goto LAB_0095d938;
              pcVar30 = pcVar30 + 1;
              lVar31 = lVar31 + 1;
              pcVar27 = pcVar27 + 1;
            } while (lVar31 != 0);
          }
          goto LAB_0095d92c;
        }
        if ((sVar7 == 0) || (iVar18 = memcmp(pvVar28,pcVar27,sVar7), iVar18 == 0))
        goto LAB_0095d978;
      }
LAB_0095d938:
      FUN_0095e34c(param_1,pbVar1,1);
      pvVar34 = *(void **)(param_1 + 0x4ca8);
      sVar32 = *(size_t *)(param_1 + 0x4ca0);
      bVar35 = *pbVar1 & 1;
      sVar33 = (size_t)(*pbVar1 >> 1);
    }
LAB_0095d978:
    pvVar28 = (void *)(param_1 + 0x4c99);
    if (bVar35 != 0) {
      sVar33 = sVar32;
      pvVar28 = pvVar34;
    }
    FUN_008fcea8(param_1 + 0x5490,pvVar28,sVar33);
  }
  FUN_0094f224(lVar26);
LAB_0095d998:
  lVar26 = param_1 + 0x4d10;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    FUN_0094f4ac(lVar26);
    uVar19 = FUN_00e84e5c(lVar26);
    if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x4d54) != '\0')) {
      FUN_0095f02c(param_1 + 0x53e8,0);
      *(undefined4 *)(param_1 + 0x562c) = 0;
      FUN_0099cf94(param_1 + 0x5590,0);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4d70);
  if ((uVar19 & 1) != 0) {
    FUN_0094f5c4(param_1 + 0x4d70);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4dd0);
  if ((uVar19 & 1) != 0) {
    FUN_0094f90c(param_1 + 0x4dd0);
  }
  lVar26 = param_1 + 0x4e30;
  uVar19 = FUN_00e84e74(lVar26);
  if ((uVar19 & 1) != 0) {
    uVar19 = FUN_00e84e5c(lVar26);
    if (((uVar19 & 1) != 0) && (*(char *)(param_1 + 0x4e74) != '\0')) {
      FUN_008fce60(param_1 + 0x5490,&DAT_0320ffa8);
      *(undefined4 *)(param_1 + 0x5638) = 0xffffffff;
      FUN_00e84dec(param_1 + 0x52c8);
    }
    FUN_0094f394(lVar26);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4cb0);
  if ((uVar19 & 1) != 0) {
    FUN_0094f7f4(param_1 + 0x4cb0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4ef0);
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 0x5620) = (int)*(float *)(param_1 + 0x4f1c);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4f20);
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 0x5624) = (int)*(float *)(param_1 + 0x4f4c);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4f90);
  if ((uVar19 & 1) != 0) {
    FUN_0094fa24(param_1 + 0x4f90);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4fd0);
  if ((uVar19 & 1) != 0) {
    FUN_0094fb18(param_1 + 0x4fd0);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x4f50);
  if ((uVar19 & 1) != 0) {
    FUN_0094fc0c(param_1 + 0x4f50);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x5010);
  if ((uVar19 & 1) != 0) {
    FUN_0094fd00(param_1 + 0x5010);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x5048);
  if ((uVar19 & 1) != 0) {
    FUN_0094fe24(param_1 + 0x5048);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x438);
  if ((uVar19 & 1) != 0) {
    FUN_00949114(param_1 + 0x438);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3c00);
  if (((uVar19 & 1) != 0) && (uVar19 = FUN_0093dbe8(), (uVar19 & 1) == 0)) {
    FUN_0094ff50(param_1 + 0x3c00);
    piVar3 = (int *)(param_1 + 0x5440);
    if (*piVar3 != 0) {
      FUN_0095f0e8(param_1,piVar3);
      FUN_00951534(piVar3,0);
    }
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3cb8);
  if ((uVar19 & 1) != 0) {
    FUN_0095024c(param_1 + 0x3cb8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3da8);
  if ((uVar19 & 1) != 0) {
    FUN_009505e8(param_1 + 0x3da8);
  }
  uVar19 = FUN_00e84e74(param_1 + 0x3e70);
  if ((uVar19 & 1) != 0) {
    FUN_00950984(param_1 + 0x3e70);
  }
  if (*(long *)(lVar14 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

