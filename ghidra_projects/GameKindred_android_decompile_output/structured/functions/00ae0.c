// functions/00ae0 — 7 functions
#include "libGameKindred.h"




void FUN_00ae0dfc(long param_1)

{
  FUN_00adedb0(param_1 + -0x1a0);
  return;
}




void FUN_00ae0e04(long param_1)

{
  long in_x4;
  
  if (param_1 != in_x4) {
    FUN_00af6c14(in_x4 + 0x348);
    *(undefined1 *)(in_x4 + 0x3544) = 1;
  }
  return;
}




void FUN_00ae0e40(long param_1)

{
  long in_x4;
  
  if (param_1 + -0x1a0 != in_x4) {
    FUN_00af6c14(in_x4 + 0x348);
    *(undefined1 *)(in_x4 + 0x3544) = 1;
  }
  return;
}




void FUN_00ae0e80(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = FUN_0092e8e0();
  if ((uVar2 & 1) == 0) {
    FUN_00aa0104();
    uVar2 = FUN_00aa04b4();
    if ((((uVar2 & 1) == 0) && (*(int *)(param_1 + 0x688) < 2)) &&
       (lVar1 = FUN_009580b8(), 1 < *(uint *)(lVar1 + 0x55e0))) {
      *(undefined1 *)(param_1 + 0x68d) = 1;
      lVar1 = FUN_009580b8();
      *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(lVar1 + 0x55e0);
    }
  }
  return;
}




void FUN_00ae0ee8(long param_1)

{
  FUN_00ae0e80(param_1 + -0x240);
  return;
}




void FUN_00ae0ef0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x688) < 2) {
    lVar1 = FUN_009580b8();
    if (1 < *(uint *)(lVar1 + 0x55e0)) {
      *(undefined1 *)(param_1 + 0x68d) = 1;
    }
  }
  lVar1 = FUN_009580b8();
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(lVar1 + 0x55e0);
  if (*(char *)(param_1 + 0x68d) != '\0') {
    FUN_00a9a950(param_1 + 0x1a0);
    *(undefined1 *)(param_1 + 0x68d) = 0;
  }
  return;
}




void FUN_00ae0f58(long param_1,uint *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  void *__s1;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  
  FUN_00ae118c();
  param_1 = param_1 + 0x408;
  if (*param_2 == 0) {
LAB_00ae115c:
    uVar7 = FUN_00afbbe8(param_1);
    FUN_00afbb00(param_1,uVar7);
    return;
  }
  uVar13 = 0;
LAB_00ae0f98:
  lVar8 = FUN_00afbdd0(param_1);
  if (lVar8 != 0) {
    lVar14 = *(long *)(param_2 + 2);
    pbVar10 = (byte *)(lVar14 + uVar13 * 0x58);
    bVar4 = *pbVar10;
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar10 + 8);
    }
    do {
      pbVar1 = (byte *)(lVar8 + 0x3518);
      bVar5 = *pbVar1;
      sVar3 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar3 = *(size_t *)(lVar8 + 0x3520);
      }
      if (sVar3 == sVar2) {
        __s1 = *(void **)(lVar8 + 0x3528);
        pbVar15 = (byte *)(lVar8 + 0x3519);
        if ((bVar5 & 1) == 0) {
          __s1 = (void *)(lVar8 + 0x3519);
        }
        pbVar9 = pbVar10 + 1;
        if ((bVar4 & 1) != 0) {
          pbVar9 = *(byte **)(pbVar10 + 0x10);
        }
        if ((bVar5 & 1) == 0) {
          if (sVar2 == 0) {
LAB_00ae1064:
            FUN_00ae11d0(lVar8,lVar14 + uVar13 * 0x58 + 0x38);
            FUN_00afbc24(param_1,lVar8,1);
            lVar14 = FUN_00afbdd0(param_1);
            if (lVar8 == lVar14) {
              bVar4 = *pbVar1;
              sVar2 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                sVar2 = *(size_t *)(lVar8 + 0x3520);
              }
              sVar3 = (ulong)(DAT_0320ffa8 >> 1);
              if ((DAT_0320ffa8 & 1) != 0) {
                sVar3 = DAT_0320ffb0;
              }
              if (sVar2 != sVar3) goto LAB_00ae1130;
              pbVar10 = pbVar15;
              if ((bVar4 & 1) != 0) {
                pbVar10 = *(byte **)(lVar8 + 0x3528);
              }
              pbVar9 = DAT_0320ffb8;
              if ((DAT_0320ffa8 & 1) == 0) {
                pbVar9 = &DAT_0320ffa9;
              }
              if ((bVar4 & 1) == 0) {
                if (sVar2 != 0) {
                  lVar14 = -(ulong)(bVar4 >> 1);
                  goto LAB_00ae1100;
                }
              }
              else if ((sVar2 != 0) && (iVar6 = memcmp(pbVar10,pbVar9,sVar2), iVar6 != 0))
              goto LAB_00ae1130;
            }
            break;
          }
          lVar11 = -(ulong)(bVar5 >> 1);
          pbVar12 = pbVar15;
          while (*pbVar12 == *pbVar9) {
            pbVar12 = pbVar12 + 1;
            lVar11 = lVar11 + 1;
            pbVar9 = pbVar9 + 1;
            if (lVar11 == 0) goto LAB_00ae1064;
          }
        }
        else if ((sVar2 == 0) || (iVar6 = memcmp(__s1,pbVar9,sVar2), iVar6 == 0)) goto LAB_00ae1064;
      }
      lVar8 = *(long *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  goto LAB_00ae1148;
  while( true ) {
    pbVar15 = pbVar15 + 1;
    lVar14 = lVar14 + 1;
    pbVar9 = pbVar9 + 1;
    if (lVar14 == 0) break;
LAB_00ae1100:
    if (*pbVar15 != *pbVar9) goto LAB_00ae1130;
  }
LAB_00ae1148:
  uVar13 = uVar13 + 1;
  if (*param_2 <= uVar13) goto LAB_00ae115c;
  goto LAB_00ae0f98;
LAB_00ae1130:
  FUN_0090b3c8(lVar8 + 0x34c0,lVar8 + 0x34d8,pbVar1);
  goto LAB_00ae1148;
}

