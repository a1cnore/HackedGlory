// functions/01b1c — 4 functions
#include "libGameKindred.h"




void FUN_01b1c9a4(byte *param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  pbVar5 = param_1;
LAB_01b1ca6c:
  bVar2 = *pbVar5;
  pbVar6 = pbVar5;
  switch((uint)bVar2) {
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x5f:
  case 0x60:
    bVar3 = pbVar5[1];
    goto LAB_01b1cab8;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x61:
    bVar3 = pbVar5[3];
LAB_01b1cab8:
    pbVar6 = pbVar5 + 2;
    if (1 < bVar3 - 0xf) {
      pbVar6 = pbVar5;
    }
    break;
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
    break;
  case 0x70:
    pbVar5 = pbVar5 + CONCAT11(pbVar5[1],pbVar5[2]);
    goto LAB_01b1ca6c;
  case 0x75:
    goto switchD_01b1ca84_caseD_75;
  default:
    uVar4 = bVar2 - 0x95;
    if ((uVar4 < 7) && ((1 << (ulong)(uVar4 & 0x1f) & 0x55U) != 0)) {
      pbVar6 = pbVar5 + pbVar5[1];
    }
    else if (bVar2 == 0) {
      return;
    }
  }
  pbVar5 = pbVar6 + (byte)(&DAT_01e65378)[bVar2];
  goto LAB_01b1ca6c;
switchD_01b1ca84_caseD_75:
  if (pbVar5 == (byte *)0x0) {
    return;
  }
  puVar8 = *(undefined1 **)(param_3 + 0x40);
  puVar7 = (undefined1 *)(*(long *)(param_3 + 0x20) + param_4);
  if (puVar7 < puVar8) {
    do {
      if ((byte *)(*(long *)(param_3 + 0x28) + (ulong)(uint)CONCAT11(*puVar7,puVar7[1])) ==
          pbVar5 + 1) {
        iVar1 = (uint)CONCAT11(*puVar7,puVar7[1]) + param_2;
        *puVar7 = (char)((uint)iVar1 >> 8);
        puVar7[1] = (char)iVar1;
        puVar8 = *(undefined1 **)(param_3 + 0x40);
        break;
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 < puVar8);
  }
  if ((puVar8 <= puVar7) &&
     (param_1 <= (byte *)(*(long *)(param_3 + 0x28) + (ulong)(uint)CONCAT11(pbVar5[1],pbVar5[2]))))
  {
    iVar1 = (uint)CONCAT11(pbVar5[1],pbVar5[2]) + param_2;
    pbVar5[1] = (byte)((uint)iVar1 >> 8);
    pbVar5[2] = (byte)iVar1;
  }
  pbVar5 = pbVar5 + 3;
  goto LAB_01b1ca6c;
}




bool FUN_01b1cadc(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  bVar3 = false;
  if (*param_1 - 0x30 < 10) {
    do {
      pbVar2 = param_1;
      param_1 = pbVar2 + 1;
      bVar1 = *param_1;
    } while (bVar1 - 0x30 < 10);
    if (bVar1 == 0x2c) {
      uVar4 = (uint)pbVar2[2];
      if (uVar4 != 0x7d) {
        if (9 < uVar4 - 0x30) {
          return false;
        }
        lVar5 = 2;
        do {
          pbVar2 = param_1 + lVar5;
          lVar5 = lVar5 + 1;
        } while (*pbVar2 - 0x30 < 10);
        return *pbVar2 == 0x7d;
      }
    }
    else if (bVar1 != 0x7d) {
      return false;
    }
    bVar3 = true;
  }
  return bVar3;
}




undefined8 FUN_01b1cb68(long param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *(char *)(param_1 + 1);
  pcVar5 = (char *)(param_1 + 2);
  do {
    cVar2 = *pcVar5;
    if (cVar2 == '\\') {
      pcVar4 = pcVar5 + 1;
      if (*pcVar4 != ']') goto LAB_01b1cbb0;
    }
    else {
      if (cVar2 == '\0') {
        return 0;
      }
      if (cVar2 == ']') {
        return 0;
      }
LAB_01b1cbb0:
      if ((cVar2 == cVar1) && (pcVar5[1] == ']')) {
        *param_2 = pcVar5;
        return 1;
      }
      pcVar4 = pcVar5;
      if ((((cVar2 == '[') && ((byte)pcVar5[1] < 0x3e)) &&
          ((1L << ((ulong)(byte)pcVar5[1] & 0x3f) & 0x2400400000000000U) != 0)) &&
         (iVar3 = FUN_01b1cb68(pcVar5,param_2), iVar3 != 0)) {
        return 0;
      }
    }
    pcVar5 = pcVar4 + 1;
  } while( true );
}




int FUN_01b1cc3c(long *param_1,uint *param_2,undefined4 *param_3,int param_4,uint param_5,
                int param_6)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  
  pbVar13 = (byte *)*param_1;
  pbVar6 = pbVar13 + 1;
  bVar2 = *pbVar6;
  if (bVar2 == 0) {
    uVar11 = 1;
    uVar12 = 0;
LAB_01b1cc90:
    iVar5 = 0;
    *param_3 = uVar11;
    goto LAB_01b1ccc4;
  }
  uVar12 = bVar2 - 0x30;
  if (0x4a < uVar12) {
LAB_01b1cc7c:
    iVar5 = 0;
    goto LAB_01b1cc80;
  }
  pbVar15 = pbVar6;
  if (*(short *)(&DAT_01e63eb0 + (ulong)uVar12 * 2) != 0) {
    iVar5 = 0;
    uVar12 = (uint)*(short *)(&DAT_01e63eb0 + (ulong)uVar12 * 2);
    uVar14 = uVar12;
    if (0 < (int)uVar12) goto LAB_01b1ccc4;
    goto LAB_01b1cdf0;
  }
  uVar9 = (uint)bVar2;
  if (bVar2 < 0x4c) {
    if (uVar9 - 0x31 < 9) {
      if (param_6 == 0) {
        uVar10 = (uint)pbVar13[2];
        uVar14 = uVar12;
        if (pbVar13[2] - 0x30 < 10) {
          do {
            pbVar15 = pbVar13;
            if (0xccccccb < (int)uVar14) goto LAB_01b1ce28;
            iVar5 = uVar14 * 10 + uVar10;
            uVar10 = (uint)pbVar15[3];
            uVar14 = iVar5 - 0x30;
            pbVar13 = pbVar15 + 1;
          } while (uVar10 - 0x30 < 10);
          pbVar15 = pbVar15 + 2;
        }
        if (((int)uVar14 < 8) || ((int)uVar14 <= param_4)) goto LAB_01b1cdf0;
      }
      if (0x37 < uVar9) goto LAB_01b1cc7c;
    }
    else if (uVar9 != 0x30) goto LAB_01b1cf60;
    iVar5 = -1;
    do {
      pbVar13 = pbVar6 + 1;
      if ((*pbVar13 & 0xf8) != 0x30) break;
      iVar5 = iVar5 + 1;
      uVar12 = ((uint)*pbVar13 + uVar12 * 8) - 0x30;
      pbVar6 = pbVar13;
    } while (iVar5 < 1);
    if (((param_5 >> 0xb & 1) == 0) && (0xff < uVar12)) {
      uVar11 = 0x33;
LAB_01b1cf14:
      *param_3 = uVar11;
    }
LAB_01b1d348:
    iVar5 = 0;
    goto LAB_01b1ccc4;
  }
  if (bVar2 < 0x6c) {
    if (uVar9 != 0x62 && 0x61 < bVar2) {
      if (uVar9 == 99) {
        pbVar6 = pbVar13 + 2;
        uVar12 = (uint)*pbVar6;
        if (uVar12 == 0) {
          uVar11 = 2;
        }
        else {
          if (-1 < (char)*pbVar6) {
            uVar9 = uVar12 - 0x20;
            if (0x19 < uVar12 - 0x61) {
              uVar9 = uVar12;
            }
            iVar5 = 0;
            uVar12 = uVar9 ^ 0x40;
            goto LAB_01b1ccc4;
          }
          uVar11 = 0x44;
        }
        goto LAB_01b1cc90;
      }
      if (uVar9 == 0x67) {
        if (param_6 != 0) {
          iVar5 = 0;
          uVar12 = 0x67;
          goto LAB_01b1ccc4;
        }
        pbVar15 = pbVar13 + 2;
        bVar3 = *pbVar15;
        iVar5 = 0x1b;
        uVar12 = 0x67;
        if ((bVar3 == 0x27) || (bVar3 == 0x3c)) goto LAB_01b1ccc4;
        if (bVar3 == 0x7b) {
          pbVar13 = pbVar13 + 3;
          do {
            bVar3 = *pbVar13;
            if (bVar3 != 0x2d) {
              if ((bVar3 == 0) || (bVar3 == 0x7d)) {
                bVar4 = true;
                goto LAB_01b1d274;
              }
              if (9 < bVar3 - 0x30) goto LAB_01b1d410;
            }
            pbVar13 = pbVar13 + 1;
          } while( true );
        }
        bVar4 = false;
        pbVar15 = pbVar6;
        goto LAB_01b1d274;
      }
      goto LAB_01b1cf60;
    }
    if (uVar9 != 0x4c) {
      if (uVar9 == 0x55) {
        if ((param_5 >> 0x19 & 1) == 0) {
          *param_3 = 0x25;
        }
        iVar5 = 0;
        uVar12 = 0x55;
        goto LAB_01b1ccc4;
      }
      goto LAB_01b1cf60;
    }
LAB_01b1ceb0:
    uVar11 = 0x25;
  }
  else {
    if (bVar2 < 0x75) {
      if (uVar9 == 0x6c) goto LAB_01b1ceb0;
      if (uVar9 == 0x6f) {
        if (pbVar13[2] == 0x7b) {
          pbVar13 = pbVar13 + 3;
          if (*pbVar13 != 0x7d) {
            uVar9 = 0x10ffff;
            uVar14 = 0;
            if ((param_5 & 0x800) == 0) {
              uVar9 = 0xff;
            }
            do {
              uVar12 = uVar14;
              pbVar6 = pbVar13;
              bVar2 = *pbVar6;
              if ((bVar2 & 0xf8) != 0x30) {
                if (*pbVar6 != 0x7d) {
                  uVar11 = 0x50;
                  goto LAB_01b1cc90;
                }
                if (((param_5 >> 0xb & 1) != 0) && ((uVar12 & 0xfffff800) == 0xd800)) {
                  uVar11 = 0x49;
                  goto LAB_01b1cc90;
                }
                iVar5 = 0;
                goto LAB_01b1ccc4;
              }
              pbVar13 = pbVar6 + 1;
            } while (((uVar12 == 0) && (uVar14 = 0, bVar2 == 0x30)) ||
                    (uVar12 = ((uint)bVar2 + uVar12 * 8) - 0x30, uVar14 = uVar12, uVar12 <= uVar9));
            do {
              pbVar6 = pbVar6 + 1;
            } while ((*pbVar6 & 0xf8) == 0x30);
LAB_01b1d218:
            uVar11 = 0x22;
            goto LAB_01b1cc90;
          }
          uVar11 = 0x56;
        }
        else {
          uVar11 = 0x51;
        }
        iVar5 = 0;
        *param_3 = uVar11;
        uVar12 = 0x6f;
        goto LAB_01b1ccc4;
      }
    }
    else {
      if (bVar2 == 0x75) {
        if ((param_5 >> 0x19 & 1) == 0) {
          *param_3 = 0x25;
        }
        else if ((((((byte)(&DAT_01e63f46)[pbVar13[2]] >> 3 & 1) != 0) &&
                  (((byte)(&DAT_01e63f46)[pbVar13[3]] >> 3 & 1) != 0)) &&
                 (((byte)(&DAT_01e63f46)[pbVar13[4]] >> 3 & 1) != 0)) &&
                (pbVar15 = pbVar13 + 5, ((byte)(&DAT_01e63f46)[*pbVar15] >> 3 & 1) != 0)) {
          lVar8 = 0;
          uVar12 = 0;
          do {
            bVar2 = pbVar13[lVar8 + 2];
            lVar8 = lVar8 + 1;
            uVar9 = bVar2 - 0x20;
            if (bVar2 < 0x61) {
              uVar9 = (uint)bVar2;
            }
            iVar5 = -0x30;
            if (0x40 < uVar9) {
              iVar5 = -0x37;
            }
            uVar12 = uVar9 + uVar12 * 0x10 + iVar5;
          } while ((int)lVar8 != 4);
          uVar9 = 0x10ffff;
          if ((param_5 & 0x800) == 0) {
            uVar9 = 0xff;
          }
          pbVar6 = pbVar15;
          if (uVar9 < uVar12) {
            uVar11 = 0x4c;
          }
          else {
            if (((param_5 >> 0xb & 1) == 0) || ((uVar12 & 0xfffff800) != 0xd800)) goto LAB_01b1d264;
            uVar11 = 0x49;
          }
          *param_3 = uVar11;
LAB_01b1d264:
          iVar5 = 0;
          goto LAB_01b1ccc4;
        }
        iVar5 = 0;
        uVar12 = 0x75;
        goto LAB_01b1ccc4;
      }
      if (bVar2 == 0x78) {
        if ((param_5 >> 0x19 & 1) == 0) {
          if (pbVar13[2] != 0x7b) {
            uVar12 = 0;
            lVar8 = 0;
            do {
              lVar7 = lVar8;
              bVar2 = pbVar13[lVar7 + 2];
              if (((byte)(&DAT_01e63f46)[bVar2] >> 3 & 1) == 0) {
                iVar5 = 0;
                pbVar6 = pbVar13 + lVar7 + 1;
                goto LAB_01b1ccc4;
              }
              uVar9 = bVar2 - 0x20;
              if (bVar2 < 0x61) {
                uVar9 = (uint)bVar2;
              }
              iVar5 = -0x30;
              if (0x40 < uVar9) {
                iVar5 = -0x37;
              }
              uVar12 = uVar9 + uVar12 * 0x10 + iVar5;
              lVar8 = lVar7 + 1;
            } while ((uint)(lVar7 + 1) < 2);
            iVar5 = 0;
            pbVar6 = pbVar13 + lVar7 + 2;
            goto LAB_01b1ccc4;
          }
          pbVar6 = pbVar13 + 3;
          if (*pbVar6 != 0x7d) {
            uVar9 = 0x10ffff;
            pbVar13 = pbVar6;
            uVar14 = 0;
            if ((param_5 & 0x800) == 0) {
              uVar9 = 0xff;
            }
            do {
              do {
                uVar12 = uVar14;
                pbVar6 = pbVar13;
                bVar2 = *pbVar6;
                if (((byte)(&DAT_01e63f46)[bVar2] >> 3 & 1) == 0) {
                  if (*pbVar6 == 0x7d) {
                    if (((param_5 >> 0xb & 1) == 0) || ((uVar12 & 0xfffff800) != 0xd800))
                    goto LAB_01b1d348;
                    uVar11 = 0x49;
                  }
                  else {
                    uVar11 = 0x4f;
                  }
                  goto LAB_01b1cf14;
                }
                pbVar13 = pbVar6 + 1;
              } while ((uVar12 == 0) && (uVar14 = 0, bVar2 == 0x30));
              uVar14 = bVar2 - 0x20;
              if (bVar2 < 0x61) {
                uVar14 = (uint)bVar2;
              }
              iVar5 = -0x30;
              if (0x40 < uVar14) {
                iVar5 = -0x37;
              }
              uVar12 = uVar14 + uVar12 * 0x10 + iVar5;
              uVar14 = uVar12;
            } while (uVar12 <= uVar9);
            do {
              pbVar6 = pbVar6 + 1;
            } while (((byte)(&DAT_01e63f46)[*pbVar6] >> 3 & 1) != 0);
            goto LAB_01b1d218;
          }
          *param_3 = 0x56;
        }
        else if ((((byte)(&DAT_01e63f46)[pbVar13[2]] >> 3 & 1) != 0) &&
                (((byte)(&DAT_01e63f46)[pbVar13[3]] >> 3 & 1) != 0)) {
          lVar8 = 0;
          uVar12 = 0;
          do {
            bVar2 = pbVar13[lVar8 + 2];
            lVar8 = lVar8 + 1;
            uVar9 = bVar2 - 0x20;
            if (bVar2 < 0x61) {
              uVar9 = (uint)bVar2;
            }
            iVar5 = -0x30;
            if (0x40 < uVar9) {
              iVar5 = -0x37;
            }
            uVar12 = uVar9 + uVar12 * 0x10 + iVar5;
            pbVar6 = pbVar13 + 3;
          } while ((int)lVar8 != 2);
          goto LAB_01b1d264;
        }
        iVar5 = 0;
        uVar12 = 0x78;
        goto LAB_01b1ccc4;
      }
    }
LAB_01b1cf60:
    if ((param_5 >> 6 & 1) == 0) goto LAB_01b1cc7c;
    uVar11 = 3;
  }
LAB_01b1ceb8:
  iVar5 = 0;
  *param_3 = uVar11;
  goto LAB_01b1cc80;
LAB_01b1d410:
  bVar4 = true;
  if ((bVar3 == 0) || (bVar3 == 0x7d)) {
LAB_01b1d274:
    bVar3 = pbVar15[1];
    pbVar13 = pbVar15 + 1;
    if (bVar3 != 0x2d) {
      pbVar13 = pbVar15;
    }
    pbVar6 = pbVar13 + 1;
    uVar12 = (uint)*pbVar6;
    if (*pbVar6 - 0x30 < 10) {
      uVar14 = 0;
LAB_01b1d2a8:
      pbVar6 = pbVar13;
      if ((int)uVar14 < 0xccccccc) goto code_r0x01b1d2b0;
      pbVar6 = pbVar6 + -1;
      do {
        pbVar13 = pbVar6 + 2;
        pbVar6 = pbVar6 + 1;
      } while (*pbVar13 - 0x30 < 10);
      uVar11 = 0x3d;
      goto LAB_01b1ceb8;
    }
    uVar14 = 0;
    goto joined_r0x01b1d2d4;
  }
  iVar5 = 0x1c;
  goto LAB_01b1cc80;
code_r0x01b1d2b0:
  iVar5 = uVar14 * 10 + uVar12;
  uVar12 = (uint)pbVar6[2];
  uVar14 = iVar5 - 0x30;
  pbVar13 = pbVar6 + 1;
  if (9 < uVar12 - 0x30) goto code_r0x01b1d2d0;
  goto LAB_01b1d2a8;
code_r0x01b1d2d0:
  pbVar6 = pbVar6 + 2;
joined_r0x01b1d2d4:
  if ((bVar4) && (pbVar13 = pbVar6, uVar12 != 0x7d)) {
    uVar11 = 0x39;
    goto LAB_01b1ceb8;
  }
  pbVar6 = pbVar13;
  if (uVar14 == 0) {
    uVar11 = 0x3a;
LAB_01b1d390:
    iVar5 = 0;
    *param_3 = uVar11;
  }
  else {
    pbVar15 = pbVar6;
    if (bVar3 == 0x2d) {
      if (param_4 < (int)uVar14) {
        uVar11 = 0xf;
        goto LAB_01b1d390;
      }
      uVar14 = (param_4 + 1) - uVar14;
    }
LAB_01b1cdf0:
    pbVar6 = pbVar15;
    iVar5 = -uVar14;
    if (iVar5 == 0xc) {
      if ((pbVar6[1] == 0x7b) && (iVar5 = FUN_01b1cadc(pbVar6 + 2), iVar5 == 0)) {
        *param_3 = 0x25;
      }
      iVar5 = 0xc;
    }
  }
  goto LAB_01b1cc80;
LAB_01b1ce28:
  do {
    pbVar13 = pbVar15 + 2;
    pbVar6 = pbVar15 + 1;
    pbVar15 = pbVar6;
  } while (*pbVar13 - 0x30 < 10);
  iVar5 = 0;
  *param_3 = 0x3d;
LAB_01b1cc80:
  uVar12 = (uint)bVar2;
LAB_01b1ccc4:
  *param_1 = (long)pbVar6;
  *param_2 = uVar12;
  iVar1 = iVar5 + 0x17;
  if (((uint)(iVar5 - 6U < 6) & param_5 >> 0x1d) == 0) {
    iVar1 = iVar5;
  }
  return iVar1;
}

