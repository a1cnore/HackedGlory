// functions/01b1d — 6 functions
#include "libGameKindred.h"




void FUN_01b1d458(undefined8 param_1,undefined4 param_2,undefined8 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = *param_4;
  while (iVar2 != -1) {
    uVar4 = 0;
    do {
      lVar3 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while (iVar2 + (int)uVar4 == param_4[lVar3]);
    piVar1 = param_4 + ((int)uVar4 - 1);
    param_4 = param_4 + (uVar4 & 0xffffffff);
    FUN_01b1d598(param_1,param_2,param_3,iVar2,*piVar1);
    iVar2 = *param_4;
  }
  return;
}




void FUN_01b1d4e0(undefined8 param_1,uint param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*param_4 != 0) {
    FUN_01b1d598(param_1,param_2,param_3,0,*param_4 + -1);
    iVar3 = *param_4;
    if (iVar3 == -1) {
      return;
    }
  }
  iVar4 = 0x10ffff;
  if ((param_2 & 0x800) == 0) {
    iVar4 = -1;
  }
  do {
    do {
      param_4 = param_4 + 1;
      iVar2 = *param_4;
      iVar1 = iVar3 + 1;
      iVar3 = iVar2;
    } while (iVar2 == iVar1);
    iVar3 = iVar4;
    if (iVar2 != -1) {
      iVar3 = iVar2 + -1;
    }
    FUN_01b1d598(param_1,param_2,param_3,iVar1,iVar3);
    iVar3 = *param_4;
  } while (iVar3 != -1);
  return;
}




int FUN_01b1d598(long param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar6 = 0;
  uVar2 = param_5;
  if (0xfe < param_5) {
    uVar2 = 0xff;
  }
  if (((param_2 & 1) != 0) && (param_4 <= uVar2)) {
    uVar7 = (ulong)param_4;
    do {
      bVar5 = uVar7 < uVar2;
      bVar3 = *(byte *)(*(long *)(param_3 + 8) + uVar7);
      uVar7 = uVar7 + 1;
      uVar10 = (ulong)(bVar3 >> 3);
      *(byte *)(param_1 + uVar10) = *(byte *)(param_1 + uVar10) | (byte)(1 << (ulong)(bVar3 & 7));
    } while (bVar5);
    iVar6 = (uVar2 + 1) - param_4;
  }
  if (param_4 <= uVar2) {
    uVar8 = 0xffffff00;
    if (0xffffff00 < ~param_5) {
      uVar8 = ~param_5;
    }
    uVar9 = param_4;
    do {
      uVar4 = uVar9 >> 3;
      uVar1 = uVar9 & 7;
      bVar5 = uVar9 < uVar2;
      uVar9 = uVar9 + 1;
      *(byte *)(param_1 + (ulong)uVar4) =
           *(byte *)(param_1 + (ulong)uVar4) | (byte)(1 << (ulong)uVar1);
    } while (bVar5);
    iVar6 = (iVar6 - uVar8) - param_4;
  }
  return iVar6;
}




undefined8 FUN_01b1d648(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *__dest;
  
  iVar2 = *(int *)(param_1 + 0x6c);
  iVar1 = iVar2 * 2;
  if (0x63fff < iVar2 * 2) {
    iVar1 = 0x64000;
  }
  uVar3 = 0x48;
  if ((iVar2 < 0x64000) && (99 < iVar1 - iVar2)) {
    __dest = (void *)(*(code *)pcre_malloc)((long)iVar1);
    if (__dest == (void *)0x0) {
      uVar3 = 0x15;
    }
    else {
      memcpy(__dest,*(void **)(param_1 + 0x20),(long)*(int *)(param_1 + 0x6c));
      *(long *)(param_1 + 0x40) =
           (long)__dest + (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x20));
      if (0x1000 < *(int *)(param_1 + 0x6c)) {
        (*(code *)pcre_free)();
      }
      uVar3 = 0;
      *(void **)(param_1 + 0x20) = __dest;
      *(int *)(param_1 + 0x6c) = iVar1;
    }
  }
  return uVar3;
}




byte * FUN_01b1d714(byte *param_1,long param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  pbVar3 = param_1 + 1;
  bVar1 = *param_1;
  uVar5 = (uint)bVar1;
  *param_3 = (uint)bVar1;
  param_3[1] = 0;
  if (bVar1 - 0x21 < 0x41) {
    if (bVar1 < 0x55) {
      if (bVar1 < 0x48) {
        if (uVar5 < 0x3b) {
          uVar6 = 0x2e;
          if (uVar5 < 0x2e) {
            uVar6 = 0x21;
          }
        }
        else {
          uVar6 = 0x3b;
        }
      }
      else {
        uVar6 = 0x48;
      }
    }
    else {
      uVar6 = 0x55;
    }
    uVar2 = (uVar5 + 0x21) - uVar6;
    if (((uVar2 & 0xff) < 0x2e) && ((1L << ((ulong)uVar2 & 0x3f) & 0x238000000000U) != 0)) {
      pbVar3 = param_1 + 3;
    }
    if ((0x29 < (uVar2 & 0xff)) || (uVar7 = 0, (1L << ((ulong)uVar2 & 0x3f) & 0x21800000000U) == 0))
    {
      uVar7 = (uint)((uVar2 & 0xff) != 0x2b);
    }
    param_3[1] = uVar7;
    if (0x3a < uVar6) {
      if (uVar6 == 0x3b) {
        uVar5 = 0x1f;
        goto LAB_01b1d894;
      }
      if (uVar6 == 0x48) {
        *param_3 = 0x20;
        uVar6 = 0x1f;
        goto switchD_01b1d83c_caseD_20;
      }
      if (uVar6 == 0x55) {
        uVar5 = (uint)*pbVar3;
        *param_3 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
      }
      goto LAB_01b1d81c;
    }
    if (uVar6 == 0x21) {
      uVar5 = 0x1d;
LAB_01b1d894:
      *param_3 = uVar5;
      goto switchD_01b1d83c_caseD_1d;
    }
    if (uVar6 != 0x2e) goto LAB_01b1d81c;
    *param_3 = 0x1e;
switchD_01b1d83c_caseD_1e:
    uVar6 = 0x1d;
    goto switchD_01b1d83c_caseD_20;
  }
LAB_01b1d81c:
  uVar6 = 0x1f;
  switch(uVar5) {
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    return pbVar3;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1b:
  case 0x1c:
    return (byte *)0x0;
  case 0x1d:
  case 0x1f:
switchD_01b1d83c_caseD_1d:
    param_3[2] = (uint)*pbVar3;
    param_3[3] = 0xffffffff;
    return pbVar3 + 1;
  case 0x1e:
    goto switchD_01b1d83c_caseD_1e;
  case 0x20:
switchD_01b1d83c_caseD_20:
    *param_3 = uVar6;
    bVar1 = *pbVar3;
    param_3[2] = (uint)bVar1;
    uVar5 = (uint)*(byte *)(param_2 + (ulong)(uint)bVar1);
    param_3[3] = uVar5;
    if (bVar1 == uVar5) {
      param_3[3] = 0xffffffff;
      return pbVar3 + 1;
    }
    param_3[4] = 0xffffffff;
    return pbVar3 + 1;
  default:
    if (1 < uVar5 - 0x6e) {
      return (byte *)0x0;
    }
    pbVar4 = pbVar3 + 0x20;
    if (*pbVar4 - 0x62 < 0xc) {
      uVar5 = 1 << (ulong)(*pbVar4 - 0x62 & 0x1f);
      if ((uVar5 & 0x533) == 0) {
        if ((uVar5 & 0x20c) == 0) {
          param_3[1] = (uint)(CONCAT11(pbVar3[0x21],pbVar3[0x22]) == 0);
          pbVar4 = pbVar3 + 0x25;
          goto LAB_01b1d91c;
        }
      }
      else {
        param_3[1] = 1;
      }
      pbVar4 = pbVar3 + 0x21;
    }
LAB_01b1d91c:
    param_3[2] = (int)pbVar4 - (int)pbVar3;
    return pbVar4;
  }
}




void FUN_01b1d92c(byte *param_1,int param_2,long param_3,int *param_4,byte *param_5,int *param_6)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint **ppuVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  byte *pbVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint *local_a0;
  uint *local_98;
  long local_90;
  int local_88;
  int local_84;
  uint local_80 [6];
  long local_68;
  
  lVar18 = tpidr_el0;
  local_68 = *(long *)(lVar18 + 0x28);
  if (*param_6 == 0) {
LAB_01b1dfa4:
    uVar9 = 0;
  }
  else {
    local_98 = (uint *)(param_4 + 2);
    *param_6 = *param_6 + -1;
    local_a0 = local_80;
    uVar19 = 1;
    local_90 = lVar18;
LAB_01b1d9a4:
    do {
      while( true ) {
        for (; bVar3 = *param_1, bVar3 == 0x76; param_1 = param_1 + 6) {
        }
        while (uVar20 = (uint)bVar3, uVar20 == 0x77) {
          param_1 = param_1 + CONCAT11(param_1[1],param_1[2]);
          bVar3 = *param_1;
        }
        if (1 < uVar20 - 0x92) break;
        pbVar11 = param_1 + 1;
        if ((2 < *pbVar11 - 0x81) && (*pbVar11 != 0x85)) goto LAB_01b1dfa4;
        do {
          pbVar11 = pbVar11 + CONCAT11(pbVar11[1],pbVar11[2]);
        } while (*pbVar11 == 0x77);
        uVar9 = FUN_01b1d92c(pbVar11 + 3,param_2,param_3,param_4,param_5,param_6);
        if ((int)uVar9 == 0) goto switchD_01b1db2c_caseD_c;
        param_1 = param_1 + (byte)(&DAT_01e65378)[uVar20];
      }
      switch(uVar20) {
      case 0x78:
        if (param_4[1] == 0) goto LAB_01b1dfa4;
        if (param_1[-(ulong)CONCAT11(param_1[1],param_1[2])] - 0x7d < 6) {
          uVar9 = (ulong)uVar19;
          goto switchD_01b1db2c_caseD_c;
        }
        param_1 = param_1 + 3;
        goto LAB_01b1d9a4;
      case 0x79:
      case 0x7a:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x84:
        goto switchD_01b1da08_caseD_79;
      case 0x7b:
switchD_01b1da08_caseD_7b:
        uVar9 = (ulong)(param_4[1] != 0);
        goto switchD_01b1db2c_caseD_c;
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x85:
        pbVar11 = param_1 + CONCAT11(param_1[1],param_1[2]);
        param_1 = param_1 + (byte)(&DAT_01e65378)[uVar20];
        bVar3 = *pbVar11;
        while (uVar19 = 0, lVar18 = local_90, bVar3 == 0x77) {
          uVar9 = FUN_01b1d92c(param_1,param_2,param_3,param_4,param_5,param_6);
          lVar18 = local_90;
          if ((int)uVar9 == 0) goto switchD_01b1db2c_caseD_c;
          param_1 = pbVar11 + 3;
          pbVar11 = pbVar11 + CONCAT11(pbVar11[1],pbVar11[2]);
          bVar3 = *pbVar11;
        }
        goto LAB_01b1d9a4;
      }
      if (uVar20 == 0) goto switchD_01b1da08_caseD_7b;
switchD_01b1da08_caseD_79:
      param_1 = (byte *)FUN_01b1d714(param_1,*(undefined8 *)(param_3 + 8),&local_88);
      uVar9 = 0;
      if (param_1 == (byte *)0x0) goto switchD_01b1db2c_caseD_c;
      iVar10 = *param_4;
      if (iVar10 == 0x1d) {
        puVar12 = local_a0;
        puVar14 = local_98;
        piVar15 = &local_88;
        iVar10 = local_88;
LAB_01b1db00:
        uVar20 = *puVar14;
        pbVar11 = param_1;
        if (piVar15 != &local_88) {
          pbVar11 = param_5;
        }
        do {
          uVar9 = 0;
          switch(iVar10) {
          case 6:
            if (uVar20 < 0x100) {
              bVar3 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar20) >> 2;
              goto joined_r0x01b1dc28;
            }
            goto LAB_01b1dfa4;
          case 7:
            if (uVar20 < 0x100) {
              bVar3 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar20) >> 2;
joined_r0x01b1db88:
              if ((bVar3 & 1) != 0) goto LAB_01b1dfa4;
            }
            break;
          case 8:
            if (uVar20 < 0x100) {
              bVar3 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar20);
              goto joined_r0x01b1dc28;
            }
            goto LAB_01b1dfa4;
          case 9:
            if (uVar20 < 0x100) {
              bVar3 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar20);
              goto joined_r0x01b1db88;
            }
            break;
          case 10:
            if (0xff < uVar20) goto LAB_01b1dfa4;
            bVar3 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar20) >> 4;
joined_r0x01b1dc28:
            if ((bVar3 & 1) == 0) goto LAB_01b1dfa4;
            break;
          case 0xb:
            if (uVar20 < 0xff) {
              bVar3 = *(byte *)(*(long *)(param_3 + 0x18) + (ulong)uVar20) >> 4;
              goto joined_r0x01b1db88;
            }
            break;
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x16:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1e:
            goto switchD_01b1db2c_caseD_c;
          case 0x11:
          case 0x15:
          case 0x17:
          case 0x19:
            if ((3 < uVar20 - 10) && (1 < uVar20 - 0x2028)) {
              bVar6 = uVar20 == 0x85;
              goto LAB_01b1db50;
            }
            goto LAB_01b1dfa4;
          case 0x12:
            if ((int)uVar20 < 0x2000) {
              if ((int)uVar20 < 0xa0) {
                if (uVar20 != 9) {
                  bVar6 = uVar20 == 0x20;
                  goto LAB_01b1dda0;
                }
              }
              else if ((uVar20 != 0xa0) && (uVar20 != 0x1680)) {
                bVar6 = uVar20 == 0x180e;
LAB_01b1dda0:
                uVar9 = 0;
                if (!bVar6) goto switchD_01b1db2c_caseD_c;
              }
            }
            else if ((int)uVar20 < 0x202f) {
              uVar9 = 0;
              if (10 < uVar20 - 0x2000) goto switchD_01b1db2c_caseD_c;
            }
            else if ((uVar20 != 0x202f) && (uVar20 != 0x205f)) {
              bVar6 = uVar20 == 0x3000;
              goto LAB_01b1dda0;
            }
            break;
          case 0x13:
            if ((int)uVar20 < 0x2000) {
              if ((int)uVar20 < 0xa0) {
                if (uVar20 == 9) goto LAB_01b1dfa4;
                bVar6 = uVar20 == 0x20;
              }
              else {
                if ((uVar20 == 0xa0) || (uVar20 == 0x1680)) goto LAB_01b1dfa4;
                bVar6 = uVar20 == 0x180e;
              }
            }
            else {
              if ((int)uVar20 < 0x202f) {
                uVar9 = 0;
                if (10 < uVar20 - 0x2000) break;
                goto switchD_01b1db2c_caseD_c;
              }
              if ((uVar20 == 0x202f) || (uVar20 == 0x205f)) goto LAB_01b1dfa4;
              bVar6 = uVar20 == 0x3000;
            }
LAB_01b1db50:
            uVar9 = 0;
            if (bVar6) goto switchD_01b1db2c_caseD_c;
            break;
          case 0x14:
            if (((3 < uVar20 - 10) && (1 < uVar20 - 0x2028)) && (uVar20 != 0x85)) goto LAB_01b1dfa4;
            break;
          case 0x18:
            break;
          case 0x1d:
            uVar17 = *puVar12;
            puVar16 = puVar12 + 1;
            do {
              if (uVar20 == uVar17) goto LAB_01b1dfa4;
              uVar17 = *puVar16;
              puVar16 = puVar16 + 1;
            } while (uVar17 != 0xffffffff);
            break;
          case 0x1f:
            uVar17 = *puVar12;
            puVar16 = puVar12 + 1;
            while (uVar20 != uVar17) {
              uVar17 = *puVar16;
              puVar16 = puVar16 + 1;
              if (uVar17 == 0xffffffff) goto LAB_01b1dfa4;
            }
            if (uVar20 == 0xffffffff) goto LAB_01b1dfa4;
            break;
          default:
            if (iVar10 == 0x6e) {
              if (0xff < uVar20) break;
            }
            else {
              if (iVar10 != 0x6f) goto switchD_01b1db2c_caseD_c;
              if (0xff < uVar20) goto LAB_01b1dfa4;
            }
            if ((1 << (ulong)(uVar20 & 7) & (uint)pbVar11[(ulong)(uVar20 >> 3) - (ulong)*puVar12])
                != 0) goto LAB_01b1dfa4;
          }
          puVar14 = puVar14 + 1;
          uVar20 = *puVar14;
        } while (uVar20 != 0xffffffff);
        goto LAB_01b1df20;
      }
      puVar12 = local_98;
      puVar14 = local_a0;
      piVar15 = param_4;
      if (local_88 == 0x1d) goto LAB_01b1db00;
      if (((iVar10 != 0x6e) && (local_88 != 0x6e)) &&
         ((param_2 != 0 || ((iVar10 != 0x6f && (local_88 != 0x6f)))))) {
        if (iVar10 - 6U < 0x11) {
          uVar9 = 0;
          if (local_88 - 6U < 0x15) {
            if ((&UNK_01e64046)[(ulong)(local_88 - 6U) + (ulong)(iVar10 - 6U) * 0x15] != '\0')
            goto LAB_01b1df20;
            goto LAB_01b1dfa4;
          }
          goto switchD_01b1db2c_caseD_c;
        }
        goto LAB_01b1dfa4;
      }
      bVar6 = iVar10 != 0x6e;
      bVar7 = param_2 != 0;
      bVar8 = iVar10 != 0x6f;
      pbVar11 = param_5;
      if (bVar6 && (bVar7 || bVar8)) {
        pbVar11 = param_1;
      }
      uVar9 = 0;
      bVar5 = false;
      ppuVar4 = &local_98;
      if (bVar6 && (bVar7 || bVar8)) {
        ppuVar4 = &local_a0;
      }
      iVar1 = local_88;
      if (bVar6 && (bVar7 || bVar8)) {
        iVar1 = iVar10;
      }
      piVar15 = &local_88;
      if (bVar6 && (bVar7 || bVar8)) {
        piVar15 = param_4;
      }
      switch(iVar1) {
      case 6:
        bVar5 = true;
        break;
      case 7:
        break;
      case 8:
        bVar5 = true;
      case 9:
        lVar13 = *(long *)(param_3 + 0x10);
        if (bVar5) goto LAB_01b1ded8;
        goto LAB_01b1df00;
      case 10:
        bVar5 = true;
      case 0xb:
        lVar13 = *(long *)(param_3 + 0x10) + 0xa0;
        if (bVar5) goto LAB_01b1ded8;
        goto LAB_01b1df00;
      default:
        if (iVar1 - 0x6eU < 2) {
          pbVar2 = param_1;
          if (piVar15 != &local_88) {
            pbVar2 = param_5;
          }
          lVar13 = (long)pbVar2 - (ulong)(uint)piVar15[2];
          goto LAB_01b1df00;
        }
        goto switchD_01b1db2c_caseD_c;
      }
      lVar13 = *(long *)(param_3 + 0x10) + 0x40;
      if (bVar5) {
LAB_01b1ded8:
        uVar9 = 0;
        do {
          if ((pbVar11[uVar9 - **ppuVar4] & (*(byte *)(lVar13 + uVar9) ^ 0xff)) != 0)
          goto LAB_01b1dfa4;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x20);
      }
      else {
LAB_01b1df00:
        uVar9 = 0;
        do {
          if ((*(byte *)(lVar13 + uVar9) & pbVar11[uVar9 - **ppuVar4]) != 0) goto LAB_01b1dfa4;
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x20);
      }
LAB_01b1df20:
    } while (local_84 != 0);
    uVar9 = 1;
  }
switchD_01b1db2c_caseD_c:
  if (*(long *)(lVar18 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

