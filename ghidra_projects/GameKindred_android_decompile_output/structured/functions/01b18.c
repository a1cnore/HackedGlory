// functions/01b18 — 6 functions
#include "libGameKindred.h"




void FUN_01b1822c(long param_1,int param_2,long param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  long *local_78;
  byte *pbStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar11 = (byte *)(param_1 + 3);
  uVar3 = 0;
  uVar12 = 0xffffffff;
LAB_01b18478:
  uVar7 = uVar3;
  bVar2 = *pbVar11;
  uVar10 = (ulong)bVar2;
  uVar6 = 0xfffffffe;
  switch(uVar10) {
  case 0:
  case 0x77:
  case 0x78:
  case 0x9e:
  case 0x9f:
    if ((-1 < (int)uVar12) && (uVar12 != uVar7)) break;
    uVar6 = (ulong)uVar7;
    pbVar11 = pbVar11 + 3;
    uVar3 = 0;
    uVar12 = uVar7;
    if (bVar2 != 0x77) {
switchD_01b18494_caseD_e:
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar6);
      }
      return;
    }
    goto LAB_01b18478;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x76:
  case 0x7c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x96:
  case 0x98:
  case 0x9a:
  case 0x9c:
  case 0x9d:
  case 0xa0:
    uVar6 = (ulong)(byte)(&DAT_01e65378)[uVar10];
    goto LAB_01b1828c;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    goto switchD_01b18494_caseD_6;
  case 0xe:
    goto switchD_01b18494_caseD_e;
  case 0xf:
  case 0x10:
    pbVar11 = pbVar11 + 2;
switchD_01b18494_caseD_6:
    pbVar11 = pbVar11 + 1;
    uVar3 = uVar7 + 1;
    goto LAB_01b18478;
  case 0x11:
  case 0x16:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x84:
  case 0x86:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0xa1:
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    pbVar11 = pbVar11 + 2;
    uVar3 = uVar7 + 1;
    goto LAB_01b18478;
  case 0x29:
  case 0x36:
  case 0x43:
  case 0x50:
    pbVar1 = pbVar11 + 1;
    pbVar9 = pbVar11 + 2;
    pbVar11 = pbVar11 + 4;
    uVar3 = CONCAT11(*pbVar1,*pbVar9) + uVar7;
    goto LAB_01b18478;
  case 0x5d:
    pbVar1 = pbVar11 + 1;
    pbVar8 = pbVar11 + 2;
    pbVar9 = pbVar8;
    if (1 < pbVar11[3] - 0xf) {
      pbVar9 = pbVar11;
    }
    pbVar11 = pbVar9 + 4;
    uVar3 = CONCAT11(*pbVar1,*pbVar8) + uVar7;
    goto LAB_01b18478;
  default:
    uVar6 = 0xfffffffc;
    goto switchD_01b18494_caseD_e;
  case 0x6e:
  case 0x6f:
    uVar3 = pbVar11[0x21] - 0x62;
    if (0xb < uVar3) {
      pbVar11 = pbVar11 + 0x21;
      uVar3 = uVar7 + 1;
      goto LAB_01b18478;
    }
    if (((1 << (ulong)(uVar3 & 0x1f) & 0x8c0U) != 0) &&
       (pbVar1 = pbVar11 + 0x22, pbVar9 = pbVar11 + 0x23,
       (uint)CONCAT11(*pbVar1,*pbVar9) == (uint)CONCAT11(pbVar11[0x24],pbVar11[0x25]))) {
      pbVar11 = pbVar11 + 0x26;
      uVar3 = CONCAT11(*pbVar1,*pbVar9) + uVar7;
      goto LAB_01b18478;
    }
    break;
  case 0x75:
    if (param_2 == 0) {
      uVar6 = 0xfffffffd;
      goto switchD_01b18494_caseD_e;
    }
    pbVar1 = (byte *)(*(long *)(param_3 + 0x28) + (ulong)CONCAT11(pbVar11[1],pbVar11[2]));
    pbVar9 = pbVar1;
    do {
      pbVar9 = pbVar9 + CONCAT11(pbVar9[1],pbVar9[2]);
    } while (*pbVar9 == 0x77);
    plVar5 = param_4;
    if ((pbVar11 <= pbVar1) || (pbVar9 <= pbVar11)) {
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if ((byte *)plVar5[1] == pbVar1) goto switchD_01b18494_caseD_11;
      }
      local_78 = param_4;
      pbStack_70 = pbVar1;
      uVar6 = FUN_01b1822c(pbVar1 + 2,param_2,param_3,&local_78);
      if (-1 < (int)uVar6) goto LAB_01b182f8;
      goto switchD_01b18494_caseD_e;
    }
    break;
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
    do {
      pbVar11 = pbVar11 + CONCAT11(pbVar11[1],pbVar11[2]);
    } while ((ulong)*pbVar11 == 0x77);
    uVar6 = (ulong)(byte)(&DAT_01e65378)[*pbVar11];
    goto LAB_01b1828c;
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x85:
  case 0x87:
    uVar6 = FUN_01b1822c(pbVar11 + (ulong)(bVar2 == 0x85) * 2,param_2,param_3,param_4);
    if ((int)uVar6 < 0) goto switchD_01b18494_caseD_e;
    do {
      pbVar11 = pbVar11 + CONCAT11(pbVar11[1],pbVar11[2]);
    } while (*pbVar11 == 0x77);
LAB_01b182f8:
    pbVar11 = pbVar11 + 3;
    uVar3 = (int)uVar6 + uVar7;
    goto LAB_01b18478;
  case 0x95:
  case 0x97:
  case 0x99:
  case 0x9b:
    uVar6 = (ulong)(byte)(&DAT_01e65378)[uVar10] + (ulong)pbVar11[1];
LAB_01b1828c:
    pbVar11 = pbVar11 + uVar6;
    uVar3 = uVar7;
    goto LAB_01b18478;
  }
switchD_01b18494_caseD_11:
  uVar6 = 0xffffffff;
  goto switchD_01b18494_caseD_e;
}




undefined4 FUN_01b184e0(byte *param_1,uint param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*param_1;
  do {
    pbVar4 = (byte *)FUN_01b1e004(param_1 + (byte)(&DAT_01e65378)[uVar6],0);
    uVar5 = (uint)*pbVar4;
    uVar2 = param_2;
    if (uVar5 - 0x7d < 0xf) {
      uVar1 = 1 << (ulong)(uVar5 - 0x7d & 0x1f);
      iVar3 = param_4;
      if ((uVar1 & 0x18c0) == 0) {
        if ((uVar1 & 0x6300) == 0) {
          if ((uVar1 & 0x401) == 0) goto LAB_01b18530;
        }
        else {
          uVar2 = 1 << (ulong)(pbVar4[4] & 0x1f);
          if (0x1f < CONCAT11(pbVar4[3],pbVar4[4])) {
            uVar2 = 1;
          }
          uVar2 = uVar2 | param_2;
        }
      }
LAB_01b18628:
      iVar3 = FUN_01b184e0(pbVar4,uVar2,param_3,iVar3);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
LAB_01b18530:
      iVar3 = param_4 + 1;
      if ((uVar5 + 0x7f & 0xff) < 2) goto LAB_01b18628;
      if ((0x1b < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0x8000006U) == 0)) {
        if (9 < uVar5 - 0x55) {
          return 0;
        }
        if ((1 << (ulong)(uVar5 - 0x55 & 0x1f) & 0x203U) == 0) {
          return 0;
        }
        if (pbVar4[1] != 0xd) {
          return 0;
        }
        if (0 < param_4) {
          return 0;
        }
        if ((*(uint *)(param_3 + 0x80) & param_2) != 0) {
          return 0;
        }
        if (*(int *)(param_3 + 0xa0) != 0) {
          return 0;
        }
      }
    }
    param_1 = param_1 + CONCAT11(param_1[1],param_1[2]);
    uVar6 = 0x77;
    if (*param_1 != 0x77) {
      return 1;
    }
  } while( true );
}




uint FUN_01b1867c(char *param_1,int *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_2 = -1;
  uVar6 = 0;
  bVar4 = *param_1 + 0x7b;
  iVar7 = -1;
  do {
    lVar5 = 0;
    if (bVar4 < 7) {
      lVar5 = *(long *)(&DAT_01e64ed0 + (long)(char)bVar4 * 8);
    }
    pbVar3 = (byte *)FUN_01b1e004(param_1 + lVar5 + 3,1);
    bVar4 = *pbVar3;
    uVar2 = (uint)bVar4;
    if (bVar4 < 0x36) {
      if (uVar2 == 0x28 || bVar4 < 0x28) {
        if ((uVar2 - 0x23 < 2) || (uVar2 == 0x1d)) goto LAB_01b187c0;
        if (uVar2 != 0x1e) goto LAB_01b18820;
LAB_01b187d8:
        if (param_3 == 0) goto LAB_01b18820;
        bVar4 = pbVar3[1];
        if (iVar7 < 0) {
          iVar8 = 1;
          goto LAB_01b187f4;
        }
LAB_01b187e4:
        uVar2 = uVar6;
        iVar8 = iVar7;
        if (uVar6 == bVar4) goto LAB_01b187f8;
      }
      else {
        if (uVar2 - 0x30 < 2) goto LAB_01b187d8;
        if (uVar2 == 0x29) {
          pbVar3 = pbVar3 + 2;
        }
        else if (uVar2 != 0x2b) goto LAB_01b18820;
LAB_01b187c0:
        if (param_3 != 0) {
          bVar4 = pbVar3[1];
          if (iVar7 < 0) {
            iVar8 = 0;
LAB_01b187f4:
            uVar2 = (uint)bVar4;
            goto LAB_01b187f8;
          }
          goto LAB_01b187e4;
        }
      }
LAB_01b18820:
      uVar6 = 0;
      goto LAB_01b18824;
    }
    if ((0xe < uVar2 - 0x7d) || ((1 << (ulong)(uVar2 - 0x7d & 0x1f) & 0x63f1U) == 0)) {
      if (uVar2 == 0x36) {
        pbVar3 = pbVar3 + 2;
      }
      else if (uVar2 != 0x38) goto LAB_01b18820;
      goto LAB_01b187d8;
    }
    uVar2 = FUN_01b1867c(pbVar3,&local_6c,uVar2 == 0x7d);
    if ((local_6c < 0) ||
       ((iVar8 = local_6c, -1 < iVar7 &&
        ((uVar6 != uVar2 || (uVar2 = uVar6, iVar8 = iVar7, iVar7 != local_6c))))))
    goto LAB_01b18820;
LAB_01b187f8:
    uVar6 = uVar2;
    param_1 = param_1 + CONCAT11(param_1[1],param_1[2]);
    bVar4 = 0xf2;
    iVar7 = iVar8;
  } while (*param_1 == 'w');
  *param_2 = iVar8;
LAB_01b18824:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}




undefined8 FUN_01b1885c(byte *param_1,uint param_2,long param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  uVar9 = (ulong)*param_1;
  do {
    pbVar5 = (byte *)FUN_01b1e004(param_1 + (byte)(&DAT_01e65378)[uVar9],0);
    bVar1 = *pbVar5;
    if (bVar1 == 0x87) {
      pbVar10 = pbVar5 + 3;
      bVar1 = *pbVar10;
      if (bVar1 == 0x76) {
        pbVar10 = pbVar5 + 9;
        bVar1 = *pbVar10;
      }
      if ((bVar1 - 0x8d < 0x11) && ((1 << (ulong)(bVar1 - 0x8d & 0x1f) & 0x1001fU) != 0)) {
        return 0;
      }
      uVar6 = FUN_01b1885c(pbVar10,param_2,param_3,param_4);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      do {
        pbVar10 = pbVar10 + CONCAT11(pbVar10[1],pbVar10[2]);
      } while (*pbVar10 == 0x77);
      pbVar5 = (byte *)FUN_01b1e004(pbVar10 + 3,0);
      bVar1 = *pbVar5;
    }
    uVar8 = (uint)bVar1;
    uVar3 = uVar8 - 0x7d;
    uVar4 = param_2;
    if (uVar3 < 0xf) {
      uVar2 = 1 << (ulong)(uVar3 & 0x1f);
      iVar7 = param_4;
      if ((uVar2 & 0x18c0) == 0) {
        if ((uVar2 & 0x6300) == 0) {
          if (uVar3 != 0) goto LAB_01b189d0;
        }
        else {
          uVar3 = 1 << (ulong)(pbVar5[4] & 0x1f);
          if (0x1f < CONCAT11(pbVar5[3],pbVar5[4])) {
            uVar3 = 1;
          }
          uVar4 = uVar3 | param_2;
        }
      }
LAB_01b189a4:
      uVar6 = FUN_01b1885c(pbVar5,uVar4,param_3,iVar7);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
    }
    else {
LAB_01b189d0:
      iVar7 = param_4 + 1;
      if ((uVar8 + 0x7f & 0xff) < 2) goto LAB_01b189a4;
      if ((uVar8 - 0x55 < 10) && ((1 << (ulong)(uVar8 - 0x55 & 0x1f) & 0x203U) != 0)) {
        if ((pbVar5[1] != 0xc) || (0 < param_4)) {
          return 0;
        }
        if ((*(uint *)(param_3 + 0x80) & param_2) != 0) {
          return 0;
        }
        if (*(int *)(param_3 + 0xa0) != 0) {
          return 0;
        }
      }
      else if (1 < uVar8 - 0x1b) {
        return 0;
      }
    }
    param_1 = param_1 + CONCAT11(param_1[1],param_1[2]);
    uVar9 = 0x77;
    if (*param_1 != 0x77) {
      return 1;
    }
  } while( true );
}




undefined4 FUN_01b18a78(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 uVar14;
  long *local_78;
  byte *pbStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar8 = (byte *)FUN_01b1e004(param_1 + (byte)(&DAT_01e65378)[*param_1],1);
  while (uVar14 = 1, pbVar8 < param_2) {
    bVar1 = *pbVar8;
    uVar11 = (ulong)bVar1;
    uVar14 = 0;
    pbVar12 = pbVar8;
    switch(bVar1) {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x29:
    case 0x2b:
    case 0x30:
    case 0x31:
    case 0x36:
    case 0x38:
    case 0x3d:
    case 0x3e:
    case 0x43:
    case 0x45:
    case 0x4a:
    case 0x4b:
    case 0x50:
    case 0x52:
    case 0x57:
    case 0x58:
    case 0x5d:
    case 0x5f:
      goto switchD_01b18c4c_caseD_6;
    case 0x55:
    case 0x56:
    case 0x59:
    case 0x5a:
    case 0x5e:
    case 0x60:
      bVar1 = pbVar8[1];
      goto LAB_01b18d40;
    case 0x5b:
    case 0x5c:
    case 0x61:
      bVar1 = pbVar8[3];
LAB_01b18d40:
      pbVar12 = pbVar8 + 2;
      if (1 < bVar1 - 0xf) {
        pbVar12 = pbVar8;
      }
      break;
    case 0x6e:
    case 0x6f:
      if (0xb < pbVar8[0x21] - 0x62) {
LAB_01b18d7c:
        uVar14 = 0;
        goto switchD_01b18c4c_caseD_6;
      }
      uVar2 = 1 << (ulong)(pbVar8[0x21] - 0x62 & 0x1f);
      if ((uVar2 & 0x533) == 0) {
        uVar14 = 0;
        if ((uVar2 & 0x8c0) == 0) goto switchD_01b18c4c_caseD_6;
        if (CONCAT11(pbVar8[0x22],pbVar8[0x23]) != 0) goto LAB_01b18d7c;
      }
      break;
    case 0x75:
      puVar9 = *(undefined1 **)(param_3 + 0x20);
      pbVar13 = (byte *)(*(long *)(param_3 + 0x28) + (ulong)CONCAT11(pbVar8[1],pbVar8[2]));
      pbVar10 = pbVar13;
      if (puVar9 != (undefined1 *)0x0) {
        if (puVar9 < *(undefined1 **)(param_3 + 0x40)) {
          do {
            if ((uint)CONCAT11(*puVar9,puVar9[1]) ==
                (int)(pbVar8 + 1) - (int)*(long *)(param_3 + 0x28)) goto switchD_01b18c4c_caseD_77;
            puVar9 = puVar9 + 2;
          } while (puVar9 < *(undefined1 **)(param_3 + 0x40));
        }
        if (CONCAT11(pbVar13[1],pbVar13[2]) == 0) goto switchD_01b18c4c_caseD_77;
      }
      do {
        pbVar10 = pbVar10 + CONCAT11(pbVar10[1],pbVar10[2]);
      } while (*pbVar10 == 0x77);
      plVar4 = param_4;
      if ((pbVar8 < pbVar13) || (pbVar10 < pbVar8)) {
        for (; plVar5 = param_4, pbVar8 = pbVar13, plVar4 != (long *)0x0; plVar4 = (long *)*plVar4)
        {
          if ((byte *)plVar4[1] == pbVar13) goto LAB_01b18c28;
        }
        while (pbStack_70 = pbVar8, local_78 = plVar5,
              iVar7 = FUN_01b18a78(pbVar13,param_2,param_3,&local_78), iVar7 == 0) {
          uVar14 = 0;
          pbVar13 = pbVar13 + CONCAT11(pbVar13[1],pbVar13[2]);
          plVar5 = local_78;
          pbVar8 = pbStack_70;
          if (*pbVar13 != 0x77) goto switchD_01b18c4c_caseD_6;
        }
      }
LAB_01b18c28:
      uVar11 = 0x75;
      break;
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
switchD_01b18c4c_caseD_77:
      uVar14 = 1;
      goto switchD_01b18c4c_caseD_6;
    case 0x7d:
      do {
        pbVar8 = pbVar8 + CONCAT11(pbVar8[1],pbVar8[2]);
        uVar11 = (ulong)*pbVar8;
        pbVar12 = pbVar8;
      } while (*pbVar8 == 0x77);
      break;
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      if (CONCAT11(pbVar8[1],pbVar8[2]) == 0) goto switchD_01b18c4c_caseD_77;
      if (bVar1 == 0x87) {
        bVar1 = pbVar8[(uint)CONCAT11(pbVar8[1],pbVar8[2])];
        uVar11 = (ulong)bVar1;
        pbVar12 = pbVar8 + (uint)CONCAT11(pbVar8[1],pbVar8[2]);
        if (bVar1 != 0x77) break;
      }
      bVar6 = false;
      do {
        if (!bVar6) {
          iVar7 = FUN_01b18a78(pbVar8,param_2,param_3,param_4);
          bVar6 = iVar7 != 0;
        }
        pbVar8 = pbVar8 + CONCAT11(pbVar8[1],pbVar8[2]);
        uVar11 = (ulong)*pbVar8;
      } while (*pbVar8 == 0x77);
      pbVar12 = pbVar8;
      if (!bVar6) goto LAB_01b18d7c;
      break;
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      do {
        pbVar8 = pbVar8 + CONCAT11(pbVar8[1],pbVar8[2]);
        uVar11 = (ulong)*pbVar8;
        pbVar12 = pbVar8;
      } while (*pbVar8 == 0x77);
      break;
    case 0x92:
    case 0x93:
    case 0x94:
    case 0xa1:
      pbVar12 = pbVar8 + (byte)(&DAT_01e65378)[uVar11];
      do {
        pbVar12 = pbVar12 + CONCAT11(pbVar12[1],pbVar12[2]);
        uVar11 = (ulong)*pbVar12;
      } while (*pbVar12 == 0x77);
      break;
    case 0x95:
    case 0x97:
    case 0x99:
    case 0x9b:
      pbVar12 = pbVar8 + pbVar8[1];
    }
    pbVar8 = (byte *)FUN_01b1e004(pbVar12 + (byte)(&DAT_01e65378)[uVar11],1);
  }
switchD_01b18c4c_caseD_6:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_01b18db8(uint *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,uint *param_5,
                 uint *param_6,uint *param_7,uint *param_8,long param_9,int param_10,long param_11,
                 int *param_12)

{
  bool bVar1;
  byte *pbVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  short sVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  byte bVar21;
  uint uVar22;
  undefined1 *puVar23;
  char cVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  byte *pbVar29;
  long *plVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  uint *puVar38;
  byte bVar39;
  long lVar40;
  long lVar41;
  char cVar42;
  uint uVar43;
  byte *__dest;
  byte *pbVar44;
  size_t __n;
  uint uVar45;
  int iVar46;
  long lVar47;
  byte *pbVar48;
  ulong uVar49;
  int *piVar50;
  void *__dest_00;
  char *pcVar51;
  uint uVar52;
  byte *pbVar53;
  byte *pbVar54;
  byte *pbVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  byte *local_240;
  byte *local_230;
  uint local_1fc;
  byte *local_1f8;
  byte *local_1b0;
  uint local_1a4;
  long local_1a0;
  uint local_194;
  int local_178;
  uint local_174;
  uint local_164;
  uint local_15c;
  undefined8 local_158;
  uint local_13c;
  uint local_130;
  int local_12c;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  undefined8 local_fc;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte abStack_b5 [5];
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte local_a0;
  undefined8 local_98 [7];
  
  local_178 = 0;
  local_174 = 0;
  local_1a0 = 0;
  local_120 = (byte *)0x0;
  local_1fc = 0;
  bVar11 = false;
  local_158 = 0;
  uVar33 = 0;
  lVar10 = tpidr_el0;
  lVar36 = *(long *)(lVar10 + 0x28);
  local_1b0 = &DAT_01e63c8f;
  piVar8 = (int *)0x0;
  if (param_12 != (int *)0x0) {
    piVar8 = &local_c4;
  }
  local_1f8 = &DAT_01e63c98;
  uVar45 = *param_1;
  local_c4 = 0;
  local_15c = 0xfffffffe;
  __dest = (byte *)*param_2;
  local_13c = 0xfffffffe;
  local_d8 = (byte *)*param_3;
  puVar3 = (uint *)(param_11 + 0x94);
  local_194 = uVar45 >> 9 & 1;
  local_1a4 = local_194 ^ 1;
  pbVar53 = (byte *)0x0;
  local_118 = (byte *)0x0;
  uVar52 = 0xfffffffe;
  piVar4 = (int *)(param_11 + 0xb4);
  local_164 = uVar45 & 1;
  local_130 = 0xfffffffe;
  pbVar44 = __dest;
  local_128 = __dest;
LAB_01b18edc:
  pbVar54 = local_120;
  uVar49 = (ulong)*local_d8;
  pbVar48 = local_118;
  if ((local_118 != (byte *)0x0) && (*local_d8 == 0)) {
    uVar49 = (ulong)*local_118;
    pbVar48 = (byte *)0x0;
    local_d8 = local_118;
  }
  local_118 = pbVar48;
  uVar32 = (uint)uVar49;
  if (param_12 != (int *)0x0) {
    if ((byte *)(*(long *)(param_11 + 0x20) + (long)*(int *)(param_11 + 0x6c) + -100) < pbVar44)
    goto LAB_01b1c748;
    pbVar48 = local_128;
    if (local_128 <= pbVar44) {
      pbVar48 = pbVar44;
    }
    if ((long)pbVar48 - (long)local_128 <= (long)(0x7fffffeb - *param_12)) {
      *param_12 = *param_12 + (int)((long)pbVar48 - (long)local_128);
      pbVar44 = __dest;
      local_128 = __dest;
      if ((pbVar53 != (byte *)0x0) && (pbVar44 = pbVar48, local_128 = pbVar48, __dest < pbVar53)) {
        memmove(__dest,pbVar53,(long)pbVar48 - (long)pbVar53);
        pbVar44 = pbVar48 + ((long)__dest - (long)pbVar53);
        pbVar53 = __dest;
        local_128 = pbVar44;
      }
      goto LAB_01b18f98;
    }
    goto LAB_01b1c7bc;
  }
  if ((*(long *)(param_11 + 0x20) + (long)*(int *)(param_11 + 0x6c)) - 100U <
      *(ulong *)(param_11 + 0x40)) {
LAB_01b1c748:
    iVar13 = 0x34;
    goto LAB_01b1c948;
  }
LAB_01b18f98:
  uVar14 = local_158._4_4_;
  bVar21 = (byte)uVar45;
  pbVar48 = pbVar44;
  if ((bVar11) && (uVar32 != 0)) {
    if ((uVar32 != 0x5c) || (local_d8[1] != 0x45)) {
      if ((param_12 == (int *)0x0) && (local_120 != (byte *)0x0)) {
        lVar28 = *(long *)(param_11 + 0x30);
        local_120[4] = (byte)((ulong)(local_d8 +
                                     (-(ulong)CONCAT11(local_120[2],local_120[3]) - lVar28)) >> 8);
        local_120[5] = (byte)(local_d8 + (-(ulong)CONCAT11(local_120[2],local_120[3]) - lVar28));
      }
      if ((uVar45 >> 0xe & 1) == 0) {
        local_120 = (byte *)0x0;
      }
      else {
        pbVar44[0] = 0x76;
        pbVar44[1] = 0xff;
        pbVar44[2] = (byte)((uint)((int)local_d8 - *(int *)(param_11 + 0x30)) >> 8);
        uVar9 = *(undefined4 *)(param_11 + 0x30);
        pbVar44[4] = 0;
        pbVar44[5] = 0;
        pbVar44[3] = (char)local_d8 - (char)uVar9;
        pbVar48 = pbVar44 + 6;
        local_120 = pbVar44;
      }
      goto switchD_01b19454_caseD_25;
    }
    bVar11 = false;
    pbVar54 = local_d8 + 1;
    goto LAB_01b1b43c;
  }
  if ((uVar45 >> 3 & 1) != 0) {
LAB_01b1907c:
    bVar25 = *(byte *)(*(long *)(param_11 + 0x18) + uVar49);
    while ((bVar25 & 1) != 0) {
      local_d8 = local_d8 + 1;
      uVar49 = (ulong)*local_d8;
      bVar25 = *(byte *)(*(long *)(param_11 + 0x18) + uVar49);
    }
    uVar32 = (uint)uVar49;
    if (uVar32 == 0x23) {
      do {
        do {
          while( true ) {
            pbVar55 = local_d8;
            local_d8 = pbVar55 + 1;
            if (pbVar55[1] == 0) {
              uVar49 = 0;
              goto LAB_01b1907c;
            }
            if (*(int *)(param_11 + 0xb0) == 0) break;
            if ((local_d8 < *(byte **)(param_11 + 0x38)) && (iVar13 = FUN_01b23264(), iVar13 != 0))
            {
              iVar13 = *piVar4;
              goto LAB_01b19070;
            }
          }
          iVar13 = *piVar4;
        } while ((*(byte **)(param_11 + 0x38) + -(long)iVar13 < local_d8) ||
                (pbVar55[1] != *(byte *)(param_11 + 0xb8)));
        if (iVar13 == 1) {
          iVar13 = 1;
          break;
        }
      } while (pbVar55[2] != *(byte *)(param_11 + 0xb9));
LAB_01b19070:
      uVar49 = (ulong)local_d8[iVar13];
      local_d8 = local_d8 + iVar13;
      goto LAB_01b1907c;
    }
  }
  bVar12 = true;
  if ((1 < uVar32 - 0x2a) && (uVar32 != 0x3f)) {
    bVar12 = false;
    if (uVar32 == 0x7b) {
      iVar13 = FUN_01b1cadc(local_d8 + 1);
      bVar12 = iVar13 != 0;
    }
    iVar13 = local_178;
    if ((((local_118 == (byte *)0x0) && (local_120 != (byte *)0x0)) && (!bVar12)) &&
       ((iVar13 = local_178 + -1, local_178 < 1 && (local_120 = (byte *)0x0, param_12 == (int *)0x0)
        ))) {
      lVar28 = *(long *)(param_11 + 0x30);
      local_120 = (byte *)0x0;
      pbVar54[4] = (byte)((ulong)(local_d8 + (-(ulong)CONCAT11(pbVar54[2],pbVar54[3]) - lVar28)) >>
                         8);
      pbVar54[5] = (byte)(local_d8 + (-(ulong)CONCAT11(pbVar54[2],pbVar54[3]) - lVar28));
    }
    local_178 = iVar13;
    if ((local_118 == (byte *)0x0) && ((uVar45 & 0x4000) != 0 && !bVar12)) {
      pbVar44[0] = 0x76;
      pbVar44[1] = 0xff;
      pbVar44[2] = (byte)((uint)((int)local_d8 - *(int *)(param_11 + 0x30)) >> 8);
      uVar9 = *(undefined4 *)(param_11 + 0x30);
      pbVar44[4] = 0;
      pbVar44[5] = 0;
      pbVar44[3] = (char)local_d8 - (char)uVar9;
      pbVar48 = pbVar44 + 6;
      local_120 = pbVar44;
    }
  }
  pbVar54 = local_d8;
  pbVar44 = pbVar48;
  if (0x5a < uVar32) {
    switch(uVar32) {
    case 0x5b:
      pbVar55 = local_d8 + 1;
      iVar13 = strncmp((char *)pbVar55,"[:<:]]",6);
      if (iVar13 == 0) {
        local_118 = pbVar54 + 7;
        pbVar54 = local_1b0;
      }
      else {
        iVar13 = strncmp((char *)pbVar55,"[:>:]]",6);
        if (iVar13 != 0) {
          if (((*pbVar55 < 0x3e) && ((1L << ((ulong)*pbVar55 & 0x3f) & 0x2400400000000000U) != 0))
             && (iVar13 = FUN_01b1cb68(pbVar54,&local_e0), pbVar54 = local_d8, iVar13 != 0)) {
            iVar13 = 0xd;
            if (local_d8[1] != 0x3a) {
              iVar13 = 0x1f;
            }
          }
          else {
            iVar13 = 0;
            do {
              while( true ) {
                iVar46 = iVar13;
                pbVar53 = pbVar54;
                local_d8 = pbVar53 + 1;
                bVar25 = pbVar53[1];
                uVar32 = (uint)bVar25;
                if (bVar25 != 0x5c) break;
                pbVar54 = pbVar53 + 2;
                iVar13 = iVar46;
                if (*pbVar54 != 0x45) {
                  iVar16 = strncmp((char *)pbVar54,"Q\\E",3);
                  if (iVar16 != 0) {
                    uVar32 = 0x5c;
                    goto LAB_01b19678;
                  }
                  pbVar54 = pbVar53 + 4;
                }
              }
            } while ((iVar46 == 0) && (pbVar54 = local_d8, iVar13 = 1, bVar25 == 0x5e));
            if (bVar25 == 0x5d) {
              if ((*(byte *)(param_11 + 0x93) >> 1 & 1) == 0) {
                uVar32 = 0x5d;
LAB_01b19678:
                local_98[3] = 0;
                local_98[2] = 0;
                local_98[1] = 0;
                local_98[0] = 0;
                goto LAB_01b1968c;
              }
              bVar21 = 0x9d;
              if (iVar46 != 0) {
                bVar21 = 0xd;
              }
              pbVar44 = pbVar48 + 1;
              *pbVar48 = bVar21;
              if (local_130 == 0xfffffffe) {
                local_130 = 0xffffffff;
              }
LAB_01b1b718:
              local_174 = uVar14;
              pbVar53 = pbVar48;
              uVar52 = local_130;
              pbVar54 = local_d8;
              break;
            }
            local_98[3] = 0;
            local_98[2] = 0;
            local_98[1] = 0;
            local_98[0] = 0;
            if (bVar25 != 0) {
LAB_01b1968c:
              local_98[3] = 0;
              local_98[2] = 0;
              local_98[1] = 0;
              local_98[0] = 0;
              pbVar53 = pbVar53 + 1;
              local_12c = 0;
              iVar13 = 0;
LAB_01b19e58:
              if (bVar11) {
                if (uVar32 == 0x5c) {
                  if (pbVar53[1] == 0x45) {
                    bVar11 = false;
                    local_d8 = pbVar53 + 1;
                    goto LAB_01b19fb0;
                  }
                  uVar32 = 0x5c;
                }
                goto LAB_01b19f14;
              }
              if (uVar32 == 0x5c) {
                iVar16 = FUN_01b1cc3c(&local_d8,&local_f4,param_4,*(undefined4 *)(param_11 + 0x70),
                                      uVar45,1);
                if (*param_4 != 0) goto LAB_01b1c950;
                if (iVar16 < 0xc) {
                  uVar32 = local_f4;
                  if (iVar16 != 0) {
                    if (iVar16 != 5) goto LAB_01b198cc;
                    uVar32 = 8;
                  }
                  goto LAB_01b19f14;
                }
                if (iVar16 == 0x19) {
                  bVar11 = false;
                  goto LAB_01b19fb0;
                }
                if (iVar16 == 0x1a) {
                  if ((local_d8[1] == 0x5c) && (local_d8[2] == 0x45)) {
                    bVar11 = false;
                    local_d8 = local_d8 + 2;
                  }
                  else {
                    bVar11 = true;
                  }
                  goto LAB_01b19fb0;
                }
                if (iVar16 == 0xc) {
                  iVar13 = 0x47;
                }
                else {
LAB_01b198cc:
                  if (iVar16 - 6U < 0x10) {
                    lVar28 = *(long *)(param_11 + 0x10);
                    switch(iVar16) {
                    case 6:
                      lVar40 = 0;
                      do {
                        puVar5 = (undefined8 *)(lVar28 + 0x40 + lVar40);
                        uVar20 = puVar5[1];
                        uVar18 = *puVar5;
                        uVar57 = *(undefined8 *)((long)local_98 + lVar40 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar40);
                        *(ulong *)((long)local_98 + lVar40 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | ~(byte)((ulong)uVar20 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                                ~(byte)((ulong)uVar20 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                         ~(byte)((ulong)uVar20 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                  ~(byte)((ulong)uVar20 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar57 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar20 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | ~(byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           ~(byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | ~(byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar40) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | ~(byte)((ulong)uVar18 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                                ~(byte)((ulong)uVar18 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                         ~(byte)((ulong)uVar18 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                  ~(byte)((ulong)uVar18 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar56 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar18 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | ~(byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           ~(byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | ~(byte)uVar18)))))));
                        lVar40 = lVar40 + 0x10;
                      } while (lVar40 != 0x20);
                      goto LAB_01b19c7c;
                    case 7:
                      lVar40 = 0;
                      do {
                        puVar5 = (undefined8 *)(lVar28 + 0x40 + lVar40);
                        uVar20 = puVar5[1];
                        uVar18 = *puVar5;
                        uVar57 = *(undefined8 *)((long)local_98 + lVar40 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar40);
                        *(ulong *)((long)local_98 + lVar40 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | (byte)((ulong)uVar20 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                               (byte)((ulong)uVar20 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                        (byte)((ulong)uVar20 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                 (byte)((ulong)uVar20 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar57 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | (byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar40) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | (byte)((ulong)uVar18 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                               (byte)((ulong)uVar18 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                        (byte)((ulong)uVar18 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                 (byte)((ulong)uVar18 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar56 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar18 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | (byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           (byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | (byte)uVar18)))))));
                        lVar40 = lVar40 + 0x10;
                      } while (lVar40 != 0x20);
                      break;
                    case 8:
                      lVar40 = 0;
                      do {
                        uVar20 = ((undefined8 *)(lVar28 + lVar40))[1];
                        uVar18 = *(undefined8 *)(lVar28 + lVar40);
                        uVar57 = *(undefined8 *)((long)local_98 + lVar40 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar40);
                        *(ulong *)((long)local_98 + lVar40 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | ~(byte)((ulong)uVar20 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                                ~(byte)((ulong)uVar20 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                         ~(byte)((ulong)uVar20 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                  ~(byte)((ulong)uVar20 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar57 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar20 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | ~(byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           ~(byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | ~(byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar40) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | ~(byte)((ulong)uVar18 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                                ~(byte)((ulong)uVar18 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                         ~(byte)((ulong)uVar18 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                  ~(byte)((ulong)uVar18 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar56 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar18 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | ~(byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           ~(byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | ~(byte)uVar18)))))));
                        lVar40 = lVar40 + 0x10;
                      } while (lVar40 != 0x20);
                      goto LAB_01b19c7c;
                    case 9:
                      lVar40 = 0;
                      do {
                        uVar20 = ((undefined8 *)(lVar28 + lVar40))[1];
                        uVar18 = *(undefined8 *)(lVar28 + lVar40);
                        uVar57 = *(undefined8 *)((long)local_98 + lVar40 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar40);
                        *(ulong *)((long)local_98 + lVar40 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | (byte)((ulong)uVar20 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                               (byte)((ulong)uVar20 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                        (byte)((ulong)uVar20 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                 (byte)((ulong)uVar20 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar57 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | (byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar40) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | (byte)((ulong)uVar18 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                               (byte)((ulong)uVar18 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                        (byte)((ulong)uVar18 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                 (byte)((ulong)uVar18 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar56 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar18 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | (byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           (byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | (byte)uVar18)))))));
                        lVar40 = lVar40 + 0x10;
                      } while (lVar40 != 0x20);
                      break;
                    case 10:
                      lVar40 = 0;
                      do {
                        puVar5 = (undefined8 *)(lVar28 + 0xa0 + lVar40);
                        uVar20 = puVar5[1];
                        uVar18 = *puVar5;
                        uVar57 = *(undefined8 *)((long)local_98 + lVar40 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar40);
                        *(ulong *)((long)local_98 + lVar40 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | ~(byte)((ulong)uVar20 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                                ~(byte)((ulong)uVar20 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                         ~(byte)((ulong)uVar20 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                  ~(byte)((ulong)uVar20 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar57 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar20 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | ~(byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           ~(byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | ~(byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar40) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | ~(byte)((ulong)uVar18 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                                ~(byte)((ulong)uVar18 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                         ~(byte)((ulong)uVar18 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                  ~(byte)((ulong)uVar18 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar56 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar18 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | ~(byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           ~(byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | ~(byte)uVar18)))))));
                        lVar40 = lVar40 + 0x10;
                      } while (lVar40 != 0x20);
LAB_01b19c7c:
                      iVar13 = 1;
                      break;
                    case 0xb:
                      lVar40 = 0;
                      do {
                        puVar5 = (undefined8 *)(lVar28 + 0xa0 + lVar40);
                        uVar20 = puVar5[1];
                        uVar18 = *puVar5;
                        uVar57 = *(undefined8 *)((long)local_98 + lVar40 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar40);
                        *(ulong *)((long)local_98 + lVar40 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | (byte)((ulong)uVar20 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                               (byte)((ulong)uVar20 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                        (byte)((ulong)uVar20 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                 (byte)((ulong)uVar20 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar57 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | (byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar40) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | (byte)((ulong)uVar18 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                               (byte)((ulong)uVar18 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                        (byte)((ulong)uVar18 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                 (byte)((ulong)uVar18 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar56 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar18 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | (byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           (byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | (byte)uVar18)))))));
                        lVar40 = lVar40 + 0x10;
                      } while (lVar40 != 0x20);
                      break;
                    default:
                      goto switchD_01b198f8_caseD_c;
                    case 0x12:
                      puVar19 = &DAT_01e6541c;
                      goto LAB_01b19cbc;
                    case 0x13:
                      puVar19 = &DAT_01e6541c;
                      goto LAB_01b19cd8;
                    case 0x14:
                      puVar19 = &DAT_01e6546c;
LAB_01b19cbc:
                      FUN_01b1d4e0(local_98,uVar45,param_11,puVar19);
                      break;
                    case 0x15:
                      puVar19 = &DAT_01e6546c;
LAB_01b19cd8:
                      FUN_01b1d458(local_98,uVar45,param_11,puVar19);
                    }
                    bVar11 = false;
                    local_12c = local_12c + 2;
                    goto LAB_01b19fb0;
                  }
switchD_01b198f8_caseD_c:
                  if ((uVar45 >> 6 & 1) == 0) {
                    uVar32 = (uint)*local_d8;
                    goto LAB_01b19f14;
                  }
                  iVar13 = 7;
                }
                goto LAB_01b1c948;
              }
              if (uVar32 == 0x5b) {
                uVar32 = 0x5b;
                if ((0x3d < pbVar53[1]) ||
                   ((1L << ((ulong)pbVar53[1] & 0x3f) & 0x2400400000000000U) == 0))
                goto LAB_01b19f14;
                iVar16 = FUN_01b1cb68(pbVar53,&local_e0);
                pbVar53 = local_e0;
                if (iVar16 == 0) {
                  uVar32 = 0x5b;
                  goto LAB_01b19f14;
                }
                if (local_d8[1] == 0x3a) {
                  pbVar54 = local_d8 + 2;
                  lVar28 = *(long *)(param_11 + 0x10);
                  bVar25 = local_d8[2];
                  if (bVar25 == 0x5e) {
                    pbVar54 = local_d8 + 3;
                    iVar13 = 1;
                  }
                  iVar16 = 0;
                  lVar40 = 0;
                  uVar49 = (long)local_e0 - (long)pbVar54;
                  pcVar51 = "alpha";
                  local_d8 = pbVar54;
LAB_01b19950:
                  bVar39 = (&DAT_01e63c4d)[lVar40];
                  if (((uint)bVar39 != (uint)uVar49) ||
                     (iVar15 = strncmp((char *)pbVar54,pcVar51,uVar49 & 0xffffffff), iVar15 != 0))
                  goto LAB_01b19978;
                  if (-1 < (int)lVar40) {
                    iVar15 = 0;
                    if ((uVar45 & (int)lVar40 < 3) == 0) {
                      iVar15 = iVar16;
                    }
                    puVar5 = (undefined8 *)(lVar28 + (int)(&DAT_01e63ca4)[iVar15]);
                    uStack_a8 = puVar5[3];
                    local_b0 = puVar5[2];
                    uVar49 = (long)iVar15 + 2;
                    iVar16 = (&DAT_01e63ca4)[uVar49];
                    uVar37 = (long)iVar15 + 1;
                    uStack_b8 = puVar5[1];
                    local_c0 = *puVar5;
                    if ((0x2db6db6fb6bU >> (uVar37 & 0x3f) & 1) != 0) {
                      iVar15 = (&DAT_01e63ca4)[uVar37];
                      uVar37 = 0x12492490494 >> (uVar37 & 0x3f);
                      if ((0x2db6db6fb6bU >> (uVar49 & 0x3f) & 1) == 0) {
                        if ((uVar37 & 1) == 0) {
                          lVar40 = 0;
                          do {
                            uVar20 = *(undefined8 *)((long)&stack0xffffffffffffff48 + lVar40);
                            uVar18 = *(undefined8 *)((long)&local_c0 + lVar40);
                            puVar5 = (undefined8 *)(lVar28 + (ulong)(uint)(iVar15 + (int)lVar40));
                            uVar57 = puVar5[1];
                            uVar56 = *puVar5;
                            *(ulong *)((long)&stack0xffffffffffffff48 + lVar40) =
                                 CONCAT17((byte)((ulong)uVar20 >> 0x38) &
                                          ~(byte)((ulong)uVar57 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar20 >> 0x30) &
                                                   ~(byte)((ulong)uVar57 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar20 >> 0x28) &
                                                            ~(byte)((ulong)uVar57 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar20 >> 0x20) &
                                                                     ~(byte)((ulong)uVar57 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar20
                                                                                    >> 0x18) &
                                                                              ~(byte)((ulong)uVar57
                                                                                     >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar20 >> 0x10) & ~(byte)((ulong)uVar57 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) &
                                                           ~(byte)((ulong)uVar57 >> 8),
                                                           (byte)uVar20 & ~(byte)uVar57)))))));
                            *(ulong *)((long)&local_c0 + lVar40) =
                                 CONCAT17((byte)((ulong)uVar18 >> 0x38) &
                                          ~(byte)((ulong)uVar56 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar18 >> 0x30) &
                                                   ~(byte)((ulong)uVar56 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar18 >> 0x28) &
                                                            ~(byte)((ulong)uVar56 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar18 >> 0x20) &
                                                                     ~(byte)((ulong)uVar56 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar18
                                                                                    >> 0x18) &
                                                                              ~(byte)((ulong)uVar56
                                                                                     >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar18 >> 0x10) & ~(byte)((ulong)uVar56 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) &
                                                           ~(byte)((ulong)uVar56 >> 8),
                                                           (byte)uVar18 & ~(byte)uVar56)))))));
                            lVar40 = lVar40 + 0x10;
                          } while (lVar40 != 0x20);
                        }
                        else {
                          lVar40 = 0;
                          do {
                            *(byte *)((long)&local_c0 + lVar40) =
                                 *(byte *)((long)&local_c0 + lVar40) &
                                 (*(byte *)(lVar28 + (ulong)(uint)(iVar15 + (int)lVar40)) ^ 0xff);
                            lVar40 = lVar40 + 1;
                          } while (lVar40 != 0x20);
                        }
                      }
                      else if ((uVar37 & 1) == 0) {
                        lVar40 = 0;
                        do {
                          uVar20 = *(undefined8 *)((long)&stack0xffffffffffffff48 + lVar40);
                          uVar18 = *(undefined8 *)((long)&local_c0 + lVar40);
                          puVar5 = (undefined8 *)(lVar28 + (ulong)(uint)(iVar15 + (int)lVar40));
                          uVar57 = puVar5[1];
                          uVar56 = *puVar5;
                          *(ulong *)((long)&stack0xffffffffffffff48 + lVar40) =
                               CONCAT17((byte)((ulong)uVar20 >> 0x38) |
                                        (byte)((ulong)uVar57 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar20 >> 0x30) |
                                                 (byte)((ulong)uVar57 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) |
                                                          (byte)((ulong)uVar57 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) |
                                                                   (byte)((ulong)uVar57 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar20 >>
                                                                                  0x18) |
                                                                            (byte)((ulong)uVar57 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) | (byte)((ulong)uVar57 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) |
                                                           (byte)((ulong)uVar57 >> 8),
                                                           (byte)uVar20 | (byte)uVar57)))))));
                          *(ulong *)((long)&local_c0 + lVar40) =
                               CONCAT17((byte)((ulong)uVar18 >> 0x38) |
                                        (byte)((ulong)uVar56 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar18 >> 0x30) |
                                                 (byte)((ulong)uVar56 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar18 >> 0x28) |
                                                          (byte)((ulong)uVar56 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar18 >> 0x20) |
                                                                   (byte)((ulong)uVar56 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar18 >>
                                                                                  0x18) |
                                                                            (byte)((ulong)uVar56 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar18 >> 0x10) | (byte)((ulong)uVar56 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) |
                                                           (byte)((ulong)uVar56 >> 8),
                                                           (byte)uVar18 | (byte)uVar56)))))));
                          lVar40 = lVar40 + 0x10;
                        } while (lVar40 != 0x20);
                      }
                      else {
                        lVar40 = 0;
                        do {
                          *(byte *)((long)&local_c0 + lVar40) =
                               *(byte *)((long)&local_c0 + lVar40) |
                               *(byte *)(lVar28 + (ulong)(uint)(iVar15 + (int)lVar40));
                          lVar40 = lVar40 + 1;
                        } while (lVar40 != 0x20);
                      }
                    }
                    iVar15 = -iVar16;
                    if ((0x12492490494U >> (uVar49 & 0x3f) & 1) == 0) {
                      iVar15 = iVar16;
                    }
                    if (iVar15 == 1) {
                      bVar39 = 0xc3;
                      pbVar54 = (byte *)((ulong)&local_c0 | 1);
LAB_01b19de0:
                      *pbVar54 = *pbVar54 & bVar39;
                    }
                    else if (iVar15 == 2) {
                      bVar39 = 0x7f;
                      pbVar54 = abStack_b5;
                      goto LAB_01b19de0;
                    }
                    if (bVar25 != 0x5e) {
                      lVar28 = 0;
                      do {
                        uVar20 = *(undefined8 *)((long)&stack0xffffffffffffff48 + lVar28);
                        uVar18 = *(undefined8 *)((long)&local_c0 + lVar28);
                        uVar57 = *(undefined8 *)((long)local_98 + lVar28 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar28);
                        *(ulong *)((long)local_98 + lVar28 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | (byte)((ulong)uVar20 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                               (byte)((ulong)uVar20 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                        (byte)((ulong)uVar20 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                 (byte)((ulong)uVar20 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar57 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar20 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | (byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar28) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | (byte)((ulong)uVar18 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                               (byte)((ulong)uVar18 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                        (byte)((ulong)uVar18 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                 (byte)((ulong)uVar18 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar56 >>
                                                                                0x18) |
                                                                          (byte)((ulong)uVar18 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | (byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           (byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | (byte)uVar18)))))));
                        lVar28 = lVar28 + 0x10;
                      } while (lVar28 != 0x20);
                    }
                    else {
                      lVar28 = 0;
                      do {
                        uVar20 = *(undefined8 *)((long)&stack0xffffffffffffff48 + lVar28);
                        uVar18 = *(undefined8 *)((long)&local_c0 + lVar28);
                        uVar57 = *(undefined8 *)((long)local_98 + lVar28 + 8);
                        uVar56 = *(undefined8 *)((long)local_98 + lVar28);
                        *(ulong *)((long)local_98 + lVar28 + 8) =
                             CONCAT17((byte)((ulong)uVar57 >> 0x38) | ~(byte)((ulong)uVar20 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar57 >> 0x30) |
                                                ~(byte)((ulong)uVar20 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar57 >> 0x28) |
                                                         ~(byte)((ulong)uVar20 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar57 >> 0x20) |
                                                                  ~(byte)((ulong)uVar20 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar57 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar20 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar57 >> 0x10) | ~(byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar57 >> 8) |
                                                           ~(byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar57 | ~(byte)uVar20)))))));
                        *(ulong *)((long)local_98 + lVar28) =
                             CONCAT17((byte)((ulong)uVar56 >> 0x38) | ~(byte)((ulong)uVar18 >> 0x38)
                                      ,CONCAT16((byte)((ulong)uVar56 >> 0x30) |
                                                ~(byte)((ulong)uVar18 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar56 >> 0x28) |
                                                         ~(byte)((ulong)uVar18 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar56 >> 0x20) |
                                                                  ~(byte)((ulong)uVar18 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar56 >>
                                                                                 0x18) |
                                                                           ~(byte)((ulong)uVar18 >>
                                                                                  0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar56 >> 0x10) | ~(byte)((ulong)uVar18 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar56 >> 8) |
                                                           ~(byte)((ulong)uVar18 >> 8),
                                                           (byte)uVar56 | ~(byte)uVar18)))))));
                        lVar28 = lVar28 + 0x10;
                      } while (lVar28 != 0x20);
                    }
                    local_d8 = pbVar53 + 1;
                    iVar16 = 0x11;
                    local_12c = 2;
                    goto LAB_01b199b0;
                  }
                  goto LAB_01b19990;
                }
                *param_4 = 0x1f;
                goto LAB_01b199ac;
              }
LAB_01b19f14:
              pbVar54 = local_d8 + 1;
              pbVar53 = local_d8;
              if (*pbVar54 == 0x5c) {
                do {
                  pbVar53 = pbVar54 + 1;
                  if (*pbVar53 != 0x45) {
                    pbVar53 = pbVar54 + -1;
                    goto LAB_01b19f64;
                  }
                  pbVar54 = pbVar54 + 2;
                  bVar11 = false;
                  local_d8 = pbVar53;
                } while (*pbVar54 == 0x5c);
                bVar11 = false;
              }
LAB_01b19f64:
              pbVar55 = local_d8;
              if ((uVar32 == 0xd) || (uVar32 == 10)) {
                *puVar3 = *puVar3 | 0x800;
              }
              if (bVar11) {
                if (local_12c < 2) {
                  local_12c = local_12c + 1;
                }
              }
              else {
                if (*pbVar54 == 0x2d) {
                  pbVar54 = pbVar53 + 4;
                  do {
                    pbVar29 = pbVar54;
                    local_d8 = pbVar53 + 2;
                    bVar25 = *local_d8;
                    if (bVar25 != 0x5c) {
                      bVar12 = false;
                      goto joined_r0x01b197a4;
                    }
                    pbVar2 = pbVar53 + 3;
                    pbVar54 = pbVar29 + 2;
                    pbVar53 = local_d8;
                  } while (*pbVar2 == 0x45);
                  do {
                    if (pbVar29[-1] != 0x51) {
                      local_c0 = CONCAT44(local_c0._4_4_,0x5c);
                      iVar16 = FUN_01b1cc3c(&local_d8,&local_c0,param_4,
                                            *(undefined4 *)(param_11 + 0x70),uVar45,1);
                      if (*param_4 != 0) goto LAB_01b19a14;
                      if (iVar16 == 5) {
                        bVar11 = false;
                        local_c0 = CONCAT44(local_c0._4_4_,8);
                        uVar27 = 8;
                        goto LAB_01b19ae8;
                      }
                      if (iVar16 != 0) {
                        bVar11 = false;
                        iVar16 = 0x53;
                        goto LAB_01b19afc;
                      }
                      uVar27 = (uint)local_c0;
                      goto LAB_01b19b70;
                    }
                    bVar25 = *pbVar29;
                    local_d8 = pbVar29;
                    if (bVar25 != 0x5c) {
                      bVar12 = true;
                      goto joined_r0x01b197a4;
                    }
                    if (pbVar29[1] != 0x45) {
                      local_c0 = CONCAT44(local_c0._4_4_,0x5c);
                      bVar11 = true;
                      uVar27 = 0x5c;
                      goto LAB_01b19ae8;
                    }
                    local_d8 = pbVar29 + 2;
                    bVar25 = pbVar29[2];
                    pbVar29 = pbVar29 + 4;
                  } while (bVar25 == 0x5c);
                  bVar12 = false;
joined_r0x01b197a4:
                  bVar11 = bVar12;
                  if ((bVar25 == 0) ||
                     ((uVar43 = (uint)bVar25, uVar43 == 0x5d && (bVar11 = false, !bVar12))))
                  goto LAB_01b197b8;
                  local_c0 = CONCAT44(local_c0._4_4_,uVar43);
                  if (bVar12) {
                    bVar11 = true;
                    uVar27 = uVar43;
LAB_01b19ae8:
                    if (uVar27 < uVar32) {
                      iVar16 = 8;
LAB_01b19afc:
                      *param_4 = iVar16;
                      goto LAB_01b19b00;
                    }
                    pbVar55 = local_d8;
                    if (uVar27 == uVar32) goto LAB_01b197b8;
                    if ((uVar27 == 0xd) || (uVar27 == 10)) {
                      *puVar3 = *puVar3 | 0x800;
                    }
                    FUN_01b1d598(local_98,uVar45,param_11,uVar32);
                    iVar16 = 0x11;
                    local_12c = 2;
                  }
                  else {
                    if (uVar43 != 0x5b) {
LAB_01b19ae0:
                      bVar11 = false;
                      uVar27 = uVar43;
                      goto LAB_01b19ae8;
                    }
                    uVar27 = 0x5b;
                    if (0x3d < local_d8[1]) {
LAB_01b19b70:
                      bVar11 = false;
                      goto LAB_01b19ae8;
                    }
                    bVar11 = false;
                    if ((1L << ((ulong)local_d8[1] & 0x3f) & 0x2400400000000000U) == 0)
                    goto LAB_01b19ae8;
                    iVar16 = FUN_01b1cb68(local_d8,&local_e0);
                    if (iVar16 == 0) goto LAB_01b19ae0;
                    *param_4 = 0x53;
LAB_01b19a14:
                    bVar11 = false;
LAB_01b19b00:
                    iVar16 = 5;
                  }
                  goto LAB_01b19b4c;
                }
LAB_01b197b8:
                local_d8 = pbVar55;
                if (local_12c < 2) {
                  local_12c = local_12c + 1;
                }
                if ((local_12c == 1) && (!bVar11)) {
                  if (local_d8[1] != 0x5d) {
                    bVar11 = false;
                    local_12c = 1;
                    goto LAB_01b19f98;
                  }
                  local_d8 = local_d8 + 1;
                  if (iVar46 == 0) {
                    bVar11 = false;
                    goto switchD_01b19454_caseD_25;
                  }
                  *pbVar48 = (bVar21 & 1) + 0x1f;
                  pbVar44 = pbVar48 + 2;
                  pbVar48[1] = (byte)uVar32;
                  bVar11 = false;
                  local_15c = local_13c;
                  if (local_130 == 0xfffffffe) {
                    local_130 = 0xffffffff;
                  }
                  local_158 = CONCAT44(local_158._4_4_,uVar33);
                  goto LAB_01b1b718;
                }
              }
LAB_01b19f98:
              FUN_01b1d598(local_98,uVar45,param_11,uVar32,uVar32);
              goto LAB_01b19fb0;
            }
LAB_01b1c7dc:
            iVar13 = 6;
          }
          goto LAB_01b1c948;
        }
        local_118 = pbVar54 + 7;
        pbVar54 = local_1f8;
      }
      break;
    case 0x5c:
      local_e0 = local_d8;
      uVar14 = FUN_01b1cc3c(&local_d8,&local_f4,param_4,*(undefined4 *)(param_11 + 0x70),uVar45,0);
      if (*param_4 == 0) {
        pbVar54 = local_d8;
        if (uVar14 == 0x1a) {
          if (local_d8[1] == 0x5c) {
            pbVar54 = local_d8 + 2;
            if (local_d8[2] != 0x45) {
              bVar11 = true;
              pbVar54 = local_d8;
            }
          }
          else {
            bVar11 = true;
          }
          break;
        }
        if (uVar14 == 0x19) break;
        uVar32 = local_f4;
        if (uVar14 == 0) goto switchD_01b19454_caseD_25;
        if (uVar14 - 6 < 0x11 && local_130 == 0xfffffffe) {
          local_130 = 0xffffffff;
        }
        uVar52 = local_130;
        if (uVar14 == 0x1c) {
          bVar25 = local_d8[1];
          if (((bVar25 == 0x27) || (bVar25 == 0x3c)) || (bVar25 == 0x7b)) {
            bVar25 = local_d8[1];
            bVar12 = false;
            uVar32 = (uint)bVar25;
            if (uVar32 != 0x27) {
              uVar32 = 0x7d;
            }
            uVar27 = 0x3e;
            if (bVar25 != 0x3c) {
              uVar27 = uVar32;
            }
LAB_01b1a5c0:
            pbVar54 = local_d8 + 1;
            local_15c = local_13c;
            local_174 = local_158._4_4_;
            local_158 = CONCAT44(local_158._4_4_,uVar33);
            goto switchD_01b1a3e8_caseD_26;
          }
          iVar13 = 0x45;
LAB_01b1b004:
          *param_4 = iVar13;
          pbVar48 = pbVar53;
          goto LAB_01b1b428;
        }
        if (uVar14 == 0x1b) {
          uVar27 = 0x3e;
          bVar25 = local_d8[2];
          if (local_d8[1] != 0x3c) {
            uVar27 = 0x27;
          }
          local_1a0 = *(long *)(param_11 + 0x40) - *(long *)(param_11 + 0x20);
          if (((bVar25 != 0x2b) && (bVar25 != 0x2d)) && (9 < bVar25 - 0x30)) {
            bVar12 = true;
            goto LAB_01b1a5c0;
          }
          pbVar54 = local_d8 + 3;
          do {
            bVar21 = *pbVar54;
            pbVar54 = pbVar54 + 1;
          } while (bVar21 - 0x30 < 10);
          if (uVar27 == bVar21) {
            local_15c = local_13c;
            local_174 = local_158._4_4_;
            local_158 = CONCAT44(local_158._4_4_,uVar33);
            pbVar54 = local_d8 + 2;
            goto switchD_01b1a3e8_caseD_2b;
          }
          iVar13 = 0x39;
          local_d8 = local_d8 + 1;
          goto LAB_01b1b004;
        }
        if (-1 < (int)uVar14) {
          if (uVar14 < 0x17) {
            uVar52 = 1 << (ulong)(uVar14 & 0x1f);
            if ((uVar52 & 0x32) == 0) {
              if ((uVar52 & 0x418000) != 0) {
                iVar13 = 0x2d;
                goto LAB_01b1c948;
              }
            }
            else if (*(int *)(param_11 + 0x78) == 0) {
              *(undefined4 *)(param_11 + 0x78) = 1;
            }
          }
          pbVar53 = pbVar48;
          if (0x10 < uVar14 - 6) {
            pbVar53 = (byte *)0x0;
          }
          uVar52 = 0xd;
          if (uVar14 != 0xe) {
            uVar52 = uVar14;
          }
          pbVar44 = pbVar48 + 1;
          *pbVar48 = (byte)uVar52;
          pbVar48 = pbVar53;
          goto LAB_01b1b428;
        }
        uVar14 = -uVar14;
        local_15c = local_13c;
        local_174 = local_158._4_4_;
        local_158 = CONCAT44(local_158._4_4_,uVar33);
        goto LAB_01b1b368;
      }
      goto LAB_01b1c950;
    case 0x5d:
      if ((*(byte *)(param_11 + 0x93) >> 1 & 1) != 0) {
        iVar13 = 0x40;
        goto LAB_01b1c948;
      }
      uVar32 = 0x5d;
      goto switchD_01b19454_caseD_25;
    case 0x5e:
      if ((uVar45 >> 1 & 1) == 0) {
        bVar21 = 0x1b;
      }
      else {
        if (local_130 == 0xfffffffe) {
          local_130 = 0xffffffff;
          uVar52 = 0xffffffff;
        }
        bVar21 = 0x1c;
      }
LAB_01b1964c:
      *pbVar48 = bVar21;
      pbVar44 = pbVar48 + 1;
      pbVar53 = (byte *)0x0;
      pbVar54 = local_d8;
      break;
    default:
      if (uVar32 != 0x7b) {
        if (uVar32 == 0x7c) goto switchD_01b19454_caseD_29;
        goto switchD_01b19454_caseD_25;
      }
      if (!bVar12) {
        uVar32 = 0x7b;
        goto switchD_01b19454_caseD_25;
      }
      uVar14 = 0;
      pbVar44 = local_d8 + 3;
      pbVar54 = local_d8 + 2;
      while( true ) {
        local_d8 = pbVar54;
        bVar21 = local_d8[-1];
        if (9 < bVar21 - 0x30) break;
        uVar14 = ((uint)bVar21 + uVar14 * 10) - 0x30;
        pbVar44 = pbVar44 + 1;
        pbVar54 = local_d8 + 1;
        if (0xffff < (int)uVar14) goto LAB_01b1c7c8;
      }
      if (bVar21 != 0x7d) {
        bVar21 = *local_d8;
        uVar32 = (uint)bVar21;
        if (bVar21 == 0x7d) {
          uVar27 = 0xffffffff;
          goto LAB_01b1a71c;
        }
        uVar27 = 0;
        if (bVar21 - 0x30 < 10) {
          uVar27 = 0;
          do {
            local_d8 = pbVar44;
            uVar27 = (uVar27 * 10 + uVar32) - 0x30;
            if (0xffff < (int)uVar27) goto LAB_01b1c7c8;
            uVar32 = (uint)*local_d8;
            pbVar44 = local_d8 + 1;
          } while (uVar32 - 0x30 < 10);
        }
        if ((int)uVar14 <= (int)uVar27) goto LAB_01b1a71c;
        iVar13 = 4;
        goto LAB_01b1c7cc;
      }
      local_d8 = local_d8 + -1;
      uVar27 = uVar14;
LAB_01b1a71c:
      if (*param_4 == 0) goto switchD_01b19454_caseD_2a;
      goto LAB_01b1c950;
    }
    goto LAB_01b1b43c;
  }
  uVar14 = 0;
  uVar27 = 0xffffffff;
  switch(uVar32) {
  case 0x24:
    pbVar44 = pbVar48 + 1;
    *pbVar48 = ((byte)(uVar45 >> 1) & 1) + 0x19;
    pbVar53 = (byte *)0x0;
    goto LAB_01b1b43c;
  case 0x28:
    pbVar54 = local_d8 + 1;
    uVar32 = uVar45;
    if (local_d8[1] == 0x2a) {
      pbVar44 = local_d8 + 2;
      if (((ulong)*pbVar44 != 0x3a) &&
         ((*(byte *)(*(long *)(param_11 + 0x18) + (ulong)*pbVar44) >> 1 & 1) == 0))
      goto LAB_01b1a0a0;
      pbVar53 = local_d8 + 2;
      do {
        pbVar54 = pbVar53;
        pbVar53 = pbVar54 + 1;
        uVar49 = (ulong)*pbVar54;
      } while ((*(byte *)(*(long *)(param_11 + 0x18) + uVar49) >> 1 & 1) != 0);
      iVar13 = (int)pbVar53;
      local_d8 = pbVar53;
      if (*pbVar54 == 0x3a) {
        while( true ) {
          bVar21 = *local_d8;
          uVar49 = (ulong)bVar21;
          if ((bVar21 == 0) || (bVar21 == 0x29)) break;
          local_d8 = local_d8 + 1;
        }
        uVar32 = (int)local_d8 - iVar13;
        if (0xff < uVar32) {
          iVar13 = 0x4b;
          goto LAB_01b1c948;
        }
      }
      else {
        uVar32 = 0;
        pbVar53 = (byte *)0x0;
        local_d8 = pbVar54;
      }
      if ((int)uVar49 != 0x29) {
LAB_01b1c7e4:
        iVar13 = 0x3c;
        goto LAB_01b1c948;
      }
      iVar13 = (iVar13 + -1) - (int)pbVar44;
      uVar49 = 0;
      pbVar54 = &DAT_01e63df4;
      pcVar51 = "";
      while ((iVar46 = *(int *)(pbVar54 + -4), iVar46 != iVar13 ||
             (iVar16 = strncmp((char *)pbVar44,pcVar51,(long)iVar13), iVar16 != 0))) {
        uVar49 = uVar49 + 1;
        pcVar51 = pcVar51 + (long)iVar46 + 1;
        pbVar54 = pbVar54 + 0xc;
        if (8 < uVar49) goto LAB_01b1c7e4;
      }
      if ((uint)uVar49 == 2) {
        if (uVar32 != 0) {
LAB_01b1c8bc:
          iVar13 = 0x3b;
          goto LAB_01b1c948;
        }
        plVar30 = *(long **)(param_11 + 0x48);
        *(undefined4 *)(param_11 + 0x9c) = 1;
        for (; plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
          *pbVar48 = 0xa0;
          pbVar48[1] = *(byte *)((long)plVar30 + 9);
          pbVar48[2] = *(byte *)(plVar30 + 1);
          pbVar48 = pbVar48 + 3;
        }
        uVar14 = 0xffffff9e;
        if (0 < *(int *)(param_11 + 0x8c)) {
          uVar14 = 0xffffff9f;
        }
        if (local_130 == 0xfffffffe) {
          local_130 = 0xffffffff;
        }
        pbVar44 = pbVar48 + 1;
        *pbVar48 = (byte)uVar14;
        uVar14 = uVar14 & 0x9f;
      }
      else if (uVar32 == 0) {
        if ((uint)uVar49 < 2) {
          iVar13 = 0x42;
          goto LAB_01b1c948;
        }
        uVar14 = (uint)*pbVar54;
        pbVar44 = pbVar48 + 1;
        *pbVar48 = *pbVar54;
      }
      else {
        if (uVar49 - 2 < 4) goto LAB_01b1c8bc;
        uVar27 = *(uint *)(pbVar54 + 4);
        pbVar54 = pbVar48 + 2;
        pbVar48[1] = (byte)uVar32;
        uVar14 = uVar27 & 0xff;
        *pbVar48 = (byte)uVar27;
        memcpy(pbVar54,pbVar53,(long)(int)uVar32);
        pbVar44 = pbVar54 + (int)uVar32 + 1;
        pbVar54[(int)uVar32] = 0;
      }
      pbVar54 = local_d8;
      if (uVar14 - 0x96 < 4) {
        *(undefined4 *)(param_11 + 0xa0) = 1;
        pbVar53 = (byte *)0x0;
      }
      else if (uVar14 - 0x9a < 2) {
        *puVar3 = *puVar3 | 0x1000;
        pbVar53 = (byte *)0x0;
      }
      else {
        pbVar53 = (byte *)0x0;
      }
      goto LAB_01b1b43c;
    }
    if (local_d8[1] != 0x3f) {
LAB_01b1a0a0:
      local_1a0 = *(long *)(param_11 + 0x40) - *(long *)(param_11 + 0x20);
      local_d8 = pbVar54;
      if ((uVar45 >> 0xc & 1) == 0) {
LAB_01b1a0bc:
        uVar18 = 0;
        uVar14 = 0x85;
        uVar20 = 2;
        iVar13 = *(int *)(param_11 + 0x70) + 1;
        *(int *)(param_11 + 0x70) = iVar13;
        pbVar48[3] = (byte)((uint)iVar13 >> 8);
        pbVar48[4] = (byte)*(undefined4 *)(param_11 + 0x70);
        goto LAB_01b1a258;
      }
      uVar18 = 0;
LAB_01b1a250:
      uVar20 = 0;
      uVar14 = 0x83;
      goto LAB_01b1a258;
    }
    pbVar54 = local_d8 + 2;
    if (*pbVar54 == 0x23) {
      pbVar48 = local_d8 + 3;
      do {
        pbVar54 = pbVar48;
        bVar21 = *pbVar54;
        pbVar48 = pbVar54 + 1;
      } while ((bVar21 == 0) != (bVar21 != 0x29));
      if (bVar21 != 0) goto LAB_01b1b43c;
      iVar13 = 0x12;
      local_d8 = pbVar54;
      goto LAB_01b1c948;
    }
    break;
  case 0x29:
switchD_01b19454_caseD_29:
    *param_5 = local_158._4_4_;
    *param_6 = local_130;
    *param_7 = uVar33;
    *param_8 = local_13c;
    *param_2 = pbVar48;
    *param_3 = local_d8;
    if (param_12 != (int *)0x0) {
      if ((long)(0x7fffffeb - *param_12) < (long)pbVar48 - (long)local_128) goto LAB_01b1c7bc;
      *param_12 = *param_12 + (int)((long)pbVar48 - (long)local_128);
    }
    goto LAB_01b1c7f4;
  case 0x2a:
switchD_01b19454_caseD_2a:
    goto joined_r0x01b19550;
  case 0x2b:
    uVar27 = 0xffffffff;
    uVar14 = 1;
joined_r0x01b19550:
    if (pbVar53 == (byte *)0x0) {
      iVar13 = 9;
      goto LAB_01b1c948;
    }
    bVar12 = uVar14 != 0;
    uVar32 = local_15c;
    if (bVar12) {
      uVar32 = local_13c;
    }
    local_d0 = pbVar53;
    uVar43 = uVar52;
    if (bVar12) {
      uVar43 = local_130;
    }
    uVar7 = local_174;
    uVar22 = (uint)local_158;
    if (bVar12) {
      uVar7 = local_158._4_4_;
      uVar22 = uVar33;
    }
    local_158 = CONCAT44(uVar7,(uint)local_158);
    uVar26 = 0;
    if (uVar27 != uVar14) {
      uVar26 = 2;
    }
    if ((uVar45 >> 3 & 1) != 0) {
      pbVar44 = local_d8 + 1;
LAB_01b1a828:
      do {
        pbVar54 = pbVar44;
        pbVar44 = pbVar54 + 1;
      } while ((*(byte *)(*(long *)(param_11 + 0x18) + (ulong)*pbVar54) & 1) != 0);
      if (*pbVar54 == 0x23) {
        bVar21 = *pbVar44;
        while (bVar21 != 0) {
          pbVar54 = *(byte **)(param_11 + 0x38);
          if (*(int *)(param_11 + 0xb0) == 0) {
            iVar13 = *piVar4;
            if ((pbVar44 <= pbVar54 + -(long)iVar13) && (bVar21 == *(byte *)(param_11 + 0xb8))) {
              if (iVar13 == 1) {
                iVar13 = 1;
              }
              else if (pbVar44[1] != *(byte *)(param_11 + 0xb9)) goto LAB_01b1a80c;
LAB_01b1a824:
              pbVar44 = pbVar44 + iVar13;
              break;
            }
          }
          else if ((pbVar44 < pbVar54) &&
                  (iVar13 = FUN_01b23264(pbVar44,*(int *)(param_11 + 0xb0),pbVar54,piVar4,0),
                  iVar13 != 0)) {
            iVar13 = *piVar4;
            goto LAB_01b1a824;
          }
LAB_01b1a80c:
          pbVar44 = pbVar44 + 1;
          bVar21 = *pbVar44;
        }
        goto LAB_01b1a828;
      }
      local_d8 = pbVar54 + -1;
    }
    pbVar44 = local_d8 + 1;
    if (*pbVar44 == 0x3f) {
      bVar12 = false;
      local_d8 = pbVar44;
      cVar42 = (char)local_1a4;
    }
    else {
      bVar12 = false;
      cVar42 = (char)local_194;
      if (*pbVar44 == 0x2b) {
        cVar42 = '\0';
        bVar12 = true;
        local_d8 = pbVar44;
      }
    }
    bVar21 = *pbVar53;
    if (bVar21 == 0x75) {
      pbVar53[0] = 0x81;
      pbVar53[1] = 0;
      pbVar48 = pbVar48 + 6;
      pbVar53[5] = pbVar53[2];
      pbVar53[2] = 6;
      pbVar53[6] = 0x78;
      pbVar53[7] = 0;
      pbVar53[8] = 6;
      *(undefined2 *)(pbVar53 + 3) = *(undefined2 *)pbVar53;
      local_c4 = 9;
      if (((param_12 == (int *)0x0) &&
          (uVar49 = *(ulong *)(param_11 + 0x40), *(long *)(param_11 + 0x20) + 2U <= uVar49)) &&
         (uVar35 = (uint)CONCAT11(*(undefined1 *)(uVar49 - 2),*(undefined1 *)(uVar49 - 1)),
         pbVar53 + (1 - *(long *)(param_11 + 0x28)) == (byte *)(ulong)uVar35)) {
        iVar13 = uVar35 + 3;
        *(char *)(uVar49 - 2) = (char)((uint)iVar13 >> 8);
        *(char *)(*(long *)(param_11 + 0x40) + -1) = (char)iVar13;
      }
      bVar21 = *pbVar53;
    }
    uVar35 = (uint)bVar21;
    bVar25 = (byte)(uVar14 >> 8);
    pbVar44 = pbVar48;
    if (3 < uVar35 - 0x1d) {
      if (uVar35 < 0x17) {
        if (1 < uVar35 - 0xf) {
          cVar24 = '4';
          goto LAB_01b1aa04;
        }
        uVar33 = (uint)pbVar53[1];
        bVar39 = pbVar53[2];
        cVar24 = '4';
        pbVar44 = pbVar53;
        if (uVar27 == 0) goto LAB_01b1ad90;
        goto LAB_01b1aa0c;
      }
      if ((uVar35 - 0x6e < 7) && (uVar35 - 0x6e != 2)) {
        pbVar44 = pbVar53;
        if (uVar27 == 0) goto LAB_01b1ad90;
        if ((uVar14 == 0) && (uVar27 == 0xffffffff)) {
          bVar21 = cVar42 + 0x62;
LAB_01b1ab6c:
          pbVar44 = pbVar48 + 1;
          *pbVar48 = bVar21;
        }
        else {
          if ((uVar14 == 1) && (uVar27 == 0xffffffff)) {
            bVar21 = cVar42 + 100;
            goto LAB_01b1ab6c;
          }
          if ((uVar14 == 0) && (uVar27 == 1)) {
            bVar21 = cVar42 + 0x66;
            goto LAB_01b1ab6c;
          }
          *pbVar48 = cVar42 + 0x68;
          uVar33 = 0;
          if (uVar27 != 0xffffffff) {
            uVar33 = uVar27;
          }
          pbVar48[1] = bVar25;
          pbVar48[2] = (byte)uVar14;
          pbVar48[4] = (byte)uVar33;
          pbVar48[3] = (byte)(uVar33 >> 8);
          pbVar44 = pbVar48 + 5;
        }
        goto joined_r0x01b1ac90;
      }
      if (10 < uVar35 - 0x7d) {
        if (uVar35 != 0x9d) {
          iVar13 = 0xb;
          goto LAB_01b1c948;
        }
        goto LAB_01b1ad90;
      }
      if (uVar35 == 0x87) {
        if (pbVar53[3] == 0x91) goto LAB_01b1ad90;
      }
      else if (uVar35 < 0x81) {
        if (0 < (int)uVar14) goto LAB_01b1ad90;
        uVar27 = (uint)(uVar27 != 0);
      }
      lVar40 = (long)pbVar48 - (long)pbVar53;
      iVar13 = (int)lVar40;
      lVar28 = local_1a0;
      if (uVar14 != 0) {
        if ((int)uVar14 < 2) {
LAB_01b1b50c:
          uVar32 = uVar14;
          if ((int)uVar27 < 1) {
            uVar32 = 0;
          }
          local_240 = (byte *)0x0;
          iVar46 = uVar27 - uVar32;
          pbVar55 = (byte *)0x0;
          pbVar44 = pbVar48;
          pbVar54 = pbVar53;
          uVar32 = local_13c;
          uVar22 = uVar33;
          goto LAB_01b1b944;
        }
        if (param_12 == (int *)0x0) {
          lVar47 = *(long *)(param_11 + 0x20);
          puVar23 = *(undefined1 **)(param_11 + 0x40);
          uVar33 = uVar7;
          local_13c = uVar43;
          if (local_1fc == 0 || -1 < (int)uVar32) {
            uVar33 = uVar22;
            local_13c = uVar32;
          }
          iVar46 = 1;
          lVar41 = local_1a0;
          do {
            lVar28 = (long)puVar23 - lVar47;
            memcpy(pbVar48,pbVar53,(long)iVar13);
            while( true ) {
              lVar47 = *(long *)(param_11 + 0x20);
              puVar23 = *(undefined1 **)(param_11 + 0x40);
              if (puVar23 <=
                  (undefined1 *)
                  (lVar47 + (lVar41 - lVar28) + (long)*(int *)(param_11 + 0x6c) + -100)) break;
              iVar16 = FUN_01b1d648(param_11);
              *param_4 = iVar16;
              if (iVar16 != 0) goto LAB_01b1c950;
            }
            if (lVar41 < lVar28) {
              puVar34 = (undefined1 *)(lVar47 + lVar41);
              do {
                *puVar23 = (char)((uint)CONCAT11(*puVar34,puVar34[1]) + iVar13 >> 8);
                pcVar51 = puVar34 + 1;
                puVar34 = puVar34 + 2;
                *(char *)(*(long *)(param_11 + 0x40) + 1) = *pcVar51 + (char)lVar40;
                lVar47 = *(long *)(param_11 + 0x20);
                puVar23 = (undefined1 *)(*(long *)(param_11 + 0x40) + 2);
                *(undefined1 **)(param_11 + 0x40) = puVar23;
              } while (puVar34 < (undefined1 *)(lVar47 + lVar28));
            }
            iVar46 = iVar46 + 1;
            pbVar48 = pbVar48 + iVar13;
            lVar41 = lVar28;
          } while (iVar46 < (int)uVar14);
          goto LAB_01b1b50c;
        }
        if ((long)local_c4 * (long)(int)(uVar14 - 1) < 0x80000000) {
          iVar46 = local_c4 * (uVar14 - 1);
          if (iVar46 <= 0x7fffffeb - *param_12) {
            *param_12 = *param_12 + iVar46;
            goto LAB_01b1b50c;
          }
        }
        goto LAB_01b1c7bc;
      }
      iVar46 = uVar27 - 1;
      *pbVar48 = 0;
      if (iVar46 == 0 || (int)uVar27 < 1) {
        FUN_01b1c9a4(pbVar53,1,param_11);
        pbVar54 = pbVar53 + 1;
        memmove(pbVar54,pbVar53,(long)iVar13);
        pbVar44 = pbVar48 + 1;
        if (uVar27 == 0) {
          *pbVar53 = 0xa1;
          uVar32 = local_15c;
          uVar22 = (uint)local_158;
          goto LAB_01b1ad90;
        }
        local_240 = (byte *)0x0;
        *pbVar53 = cVar42 + 0x92;
        pbVar55 = pbVar53;
        uVar32 = local_15c;
        uVar22 = (uint)local_158;
      }
      else {
        FUN_01b1c9a4(pbVar53,4,param_11);
        pbVar54 = pbVar53 + 4;
        memmove(pbVar54,pbVar53,(long)iVar13);
        local_240 = pbVar53 + 2;
        pbVar53[1] = 0x83;
        pbVar53[2] = 0;
        pbVar44 = pbVar48 + 4;
        *pbVar53 = cVar42 + 0x92;
        pbVar53[3] = 0;
        pbVar55 = (byte *)0x0;
        uVar32 = local_15c;
        uVar22 = (uint)local_158;
      }
LAB_01b1b944:
      if (iVar46 < 0) {
        pbVar54 = pbVar44 + -3;
        pbVar53 = pbVar54 + -(ulong)CONCAT11(pbVar44[-2],pbVar44[-1]);
        bVar21 = *pbVar53;
        if (bVar21 == 0x81) {
          if (!bVar12) {
LAB_01b1beb4:
            *pbVar54 = cVar42 + 0x79;
            goto joined_r0x01b1ac90;
          }
LAB_01b1bbd8:
          bVar21 = 0x83;
          *pbVar53 = 0x83;
        }
        else {
          if ((bVar12) && (bVar21 == 0x82)) goto LAB_01b1bbd8;
          if ((byte)(bVar21 + 0x7f) < 2) goto LAB_01b1beb4;
        }
        pbVar48 = pbVar53;
        if (param_12 == (int *)0x0) {
          do {
            iVar13 = FUN_01b18a78(pbVar48,pbVar54,param_11,0);
            if (iVar13 != 0) {
              bVar21 = bVar21 + 5;
              *pbVar53 = bVar21;
              break;
            }
            pbVar48 = pbVar48 + CONCAT11(pbVar48[1],pbVar48[2]);
          } while (*pbVar48 == 0x77);
        }
        if (!bVar12) {
          *pbVar54 = cVar42 + 0x79;
          goto LAB_01b1ad90;
        }
        if ((bVar21 == 0x8c) || (bVar21 == 0x87)) {
          iVar13 = (int)pbVar44 - (int)pbVar53;
          *pbVar44 = 0;
          FUN_01b1c9a4(pbVar53,3,param_11,local_1a0);
          memmove(pbVar53 + 3,pbVar53,(long)iVar13);
          iVar13 = iVar13 + 3;
          *pbVar53 = 0x84;
          pbVar44[3] = 0x7b;
          bVar21 = (byte)iVar13;
          pbVar44[5] = bVar21;
          bVar25 = (byte)((uint)iVar13 >> 8);
          pbVar44[4] = bVar25;
          pbVar44 = pbVar44 + 6;
          pbVar53[1] = bVar25;
          pbVar53[2] = bVar21;
        }
        else {
          *pbVar53 = bVar21 + 1;
          *pbVar54 = 0x7b;
        }
        if (pbVar55 != (byte *)0x0) {
          *pbVar55 = 0x94;
        }
        if ((int)uVar14 < 2) goto LAB_01b1ad90;
        goto LAB_01b1ac94;
      }
      if ((param_12 == (int *)0x0) || (iVar46 == 0)) {
        if (0 < iVar46) {
          puVar23 = *(undefined1 **)(param_11 + 0x40);
          lVar40 = *(long *)(param_11 + 0x20);
          do {
            iVar16 = iVar46 + -1;
            lVar47 = (long)puVar23 - lVar40;
            pbVar53 = pbVar44 + 1;
            *pbVar44 = cVar42 + 0x92;
            if (iVar16 != 0) {
              pbVar44[1] = 0x83;
              sVar6 = 0;
              if (local_240 != (byte *)0x0) {
                sVar6 = (short)(pbVar44 + 2) - (short)local_240;
              }
              pbVar53 = pbVar44 + 4;
              pbVar44[3] = (byte)sVar6;
              pbVar44[2] = (byte)((ushort)sVar6 >> 8);
              local_240 = pbVar44 + 2;
            }
            memcpy(pbVar53,pbVar54,(long)iVar13);
            while( true ) {
              lVar40 = *(long *)(param_11 + 0x20);
              puVar23 = *(undefined1 **)(param_11 + 0x40);
              if (puVar23 <=
                  (undefined1 *)
                  (lVar40 + (lVar28 - lVar47) + (long)*(int *)(param_11 + 0x6c) + -100)) break;
              iVar15 = FUN_01b1d648(param_11);
              *param_4 = iVar15;
              if (iVar15 != 0) goto LAB_01b1c950;
            }
            if (lVar28 < lVar47) {
              puVar34 = (undefined1 *)(lVar40 + lVar28);
              iVar15 = 4;
              if (iVar16 == 0) {
                iVar15 = 1;
              }
              do {
                *puVar23 = (char)(iVar15 + iVar13 + (uint)CONCAT11(*puVar34,puVar34[1]) >> 8);
                pcVar51 = puVar34 + 1;
                puVar34 = puVar34 + 2;
                *(char *)(*(long *)(param_11 + 0x40) + 1) = *pcVar51 + (char)(iVar15 + iVar13);
                lVar40 = *(long *)(param_11 + 0x20);
                puVar23 = (undefined1 *)(*(long *)(param_11 + 0x40) + 2);
                *(undefined1 **)(param_11 + 0x40) = puVar23;
              } while (puVar34 < (undefined1 *)(lVar40 + lVar47));
            }
            pbVar44 = pbVar53 + iVar13;
            bVar1 = 1 < iVar46;
            lVar28 = lVar47;
            iVar46 = iVar16;
          } while (bVar1);
        }
joined_r0x01b1bb70:
        while (local_240 != (byte *)0x0) {
          iVar13 = ((int)pbVar44 - (int)local_240) + 1;
          bVar21 = *(byte *)((long)pbVar44 + (1 - (long)iVar13));
          bVar25 = *(byte *)((long)pbVar44 + (2 - (long)iVar13));
          *pbVar44 = 0x78;
          bVar39 = (byte)((uint)iVar13 >> 8);
          *(byte *)((long)pbVar44 + 1) = bVar39;
          uVar33 = (uint)CONCAT11(bVar21,bVar25);
          *(byte *)((long)pbVar44 + 2) = (byte)iVar13;
          *(byte *)((long)pbVar44 + (1 - (long)iVar13)) = bVar39;
          pbVar53 = (byte *)((long)local_240 - (ulong)uVar33);
          local_240 = (byte *)0x0;
          if (uVar33 != 0) {
            local_240 = pbVar53;
          }
          *(byte *)((long)pbVar44 + (2 - (long)iVar13)) = (byte)iVar13;
          pbVar44 = (byte *)((long)pbVar44 + 3);
        }
        goto joined_r0x01b1ac90;
      }
      if (((long)local_c4 + 7) * (long)iVar46 < 0x80000000) {
        iVar13 = (int)((long)local_c4 + 7) * iVar46 + -6;
        if (iVar13 <= 0x7fffffeb - *param_12) {
          *param_12 = *param_12 + iVar13;
          goto joined_r0x01b1bb70;
        }
      }
      goto LAB_01b1c7bc;
    }
    if (uVar35 == 0x20) {
      cVar24 = '\'';
LAB_01b1a9ec:
      bVar21 = pbVar48[-1];
    }
    else {
      if (uVar35 == 0x1f) {
        cVar24 = '\x1a';
        goto LAB_01b1a9ec;
      }
      cVar24 = '\0';
      if (uVar35 == 0x1e) {
        cVar24 = '\r';
      }
      bVar21 = pbVar48[-1];
      if ((1 < (int)uVar14) && (uVar35 < 0x1f)) {
        uVar22 = (uint)bVar21;
        uVar32 = *(uint *)(param_11 + 0x98) | local_164;
      }
    }
LAB_01b1aa04:
    uVar33 = 0xffffffff;
    bVar39 = 0xff;
    pbVar44 = pbVar53;
    if (uVar27 != 0) {
LAB_01b1aa0c:
      cVar42 = cVar24 + cVar42;
      if (uVar14 == 1) {
        iVar13 = uVar27 - 1;
        pbVar44 = pbVar48;
        if (iVar13 == 0) goto LAB_01b1ad90;
        if (uVar27 == 0xffffffff) {
          bVar25 = cVar42 + 0x23;
LAB_01b1aa6c:
          pbVar54 = pbVar53 + 1;
          *pbVar53 = bVar25;
        }
        else {
LAB_01b1ac74:
          pbVar48[2] = (byte)iVar13;
          *pbVar48 = cVar42 + 0x27;
          pbVar48[1] = (byte)((uint)iVar13 >> 8);
          pbVar54 = pbVar48 + 3;
        }
      }
      else if (uVar14 == 0) {
        if (uVar27 == 1) {
          pbVar54 = pbVar53 + 1;
          *pbVar53 = cVar42 + 0x25;
        }
        else {
          if (uVar27 == 0xffffffff) {
            bVar25 = cVar42 + 0x21;
            goto LAB_01b1aa6c;
          }
          pbVar53[2] = (byte)uVar27;
          *pbVar53 = cVar42 + 0x27;
          pbVar53[1] = (byte)(uVar27 >> 8);
          pbVar54 = pbVar53 + 3;
        }
      }
      else {
        *pbVar53 = cVar24 + 0x29;
        pbVar53[1] = bVar25;
        pbVar53[2] = (byte)uVar14;
        if ((int)uVar27 < 0) {
          pbVar53[3] = bVar21;
          if ((int)uVar33 < 0) {
            pbVar48 = pbVar53 + 4;
          }
          else {
            pbVar48 = pbVar53 + 6;
            pbVar53[4] = (byte)uVar33;
            pbVar53[5] = bVar39;
          }
          bVar25 = cVar42 + 0x21;
        }
        else {
          iVar13 = uVar27 - uVar14;
          if (iVar13 == 0) {
            pbVar54 = pbVar53 + 3;
            goto LAB_01b1ac8c;
          }
          pbVar53[3] = bVar21;
          if ((int)uVar33 < 0) {
            pbVar48 = pbVar53 + 4;
          }
          else {
            pbVar48 = pbVar53 + 6;
            pbVar53[4] = (byte)uVar33;
            pbVar53[5] = bVar39;
          }
          if (iVar13 != 1) goto LAB_01b1ac74;
          bVar25 = cVar42 + 0x25;
        }
        pbVar54 = pbVar48 + 1;
        *pbVar48 = bVar25;
      }
LAB_01b1ac8c:
      pbVar44 = pbVar54 + 1;
      *pbVar54 = bVar21;
joined_r0x01b1ac90:
      if (bVar12) {
LAB_01b1ac94:
        bVar21 = *local_d0;
        uVar33 = bVar21 - 0x1d;
        if ((uVar33 < 0x34) && ((1L << ((ulong)uVar33 & 0x3f) & 0x800400200100fU) != 0)) {
          uVar49 = (ulong)(byte)(&DAT_01e65378)[bVar21];
LAB_01b1acdc:
          local_d0 = local_d0 + uVar49;
LAB_01b1ace0:
        }
        else {
          if (bVar21 - 0x6e < 2) {
            local_d0 = local_d0 + 0x21;
            goto LAB_01b1ace0;
          }
          if (bVar21 == 0x5d) {
            uVar49 = (ulong)(local_d0[3] - 0xf < 2) * 2 + 4;
            goto LAB_01b1acdc;
          }
        }
        pbVar53 = local_d0;
        iVar13 = (int)pbVar44 - (int)local_d0;
        if (0 < iVar13) {
          if (((ulong)*local_d0 < 0x76) && ((&DAT_01e63d4c)[*local_d0] != 0)) {
            *local_d0 = (&DAT_01e63d4c)[*local_d0];
          }
          else {
            *pbVar44 = 0;
            FUN_01b1c9a4(local_d0,3,param_11,local_1a0);
            memmove(pbVar53 + 3,pbVar53,(long)iVar13);
            *pbVar53 = 0x81;
            pbVar44[3] = 0x78;
            bVar21 = (byte)(iVar13 + 3);
            pbVar44[5] = bVar21;
            bVar25 = (byte)((uint)(iVar13 + 3) >> 8);
            pbVar44[4] = bVar25;
            pbVar44 = pbVar44 + 6;
            local_d0[1] = bVar25;
            local_d0[2] = bVar21;
          }
        }
      }
    }
LAB_01b1ad90:
    *(uint *)(param_11 + 0x98) = *(uint *)(param_11 + 0x98) | uVar26;
    pbVar53 = (byte *)0x0;
    local_13c = uVar32;
    local_130 = uVar43;
    pbVar54 = local_d8;
    uVar33 = uVar22;
    goto LAB_01b1b43c;
  case 0x2e:
    if (local_130 == 0xfffffffe) {
      local_130 = 0xffffffff;
    }
    *pbVar48 = (byte)(uVar45 >> 2) & 1 | 0xc;
    pbVar44 = pbVar48 + 1;
    goto LAB_01b1b428;
  default:
    if (uVar32 == 0x3f) {
      uVar14 = 0;
      uVar27 = 1;
      goto joined_r0x01b19550;
    }
    if (uVar32 == 0) goto switchD_01b19454_caseD_29;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2c:
  case 0x2d:
switchD_01b19454_caseD_25:
    local_a0 = (byte)uVar32;
    *pbVar48 = (bVar21 & 1) + 0x1d;
    pbVar44 = pbVar48 + 2;
    pbVar48[1] = local_a0;
    if ((local_a0 == 0xd) || ((uVar32 & 0xff) == 10)) {
      *puVar3 = *puVar3 | 0x800;
    }
    pbVar53 = pbVar48;
    pbVar54 = local_d8;
    if (local_130 == 0xfffffffe) {
      uVar52 = 0xffffffff;
      local_15c = local_13c;
      local_158 = CONCAT44(uVar32,uVar33) & 0xffffffffff;
      local_130 = local_164;
    }
    else {
      local_15c = local_13c;
      local_174 = local_158._4_4_;
      local_158 = CONCAT44(local_158._4_4_,uVar33);
      uVar52 = local_130;
      local_13c = *(uint *)(param_11 + 0x98) | local_164;
      uVar33 = (uint)pbVar48[1];
    }
    goto LAB_01b1b43c;
  }
  local_1a0 = *(long *)(param_11 + 0x40) - *(long *)(param_11 + 0x20);
  uVar18 = 0;
  uVar27 = 0x29;
  bVar12 = true;
  iVar13 = 0x27;
  switch(*pbVar54) {
  case 0x21:
    pbVar44 = local_d8 + 3;
    if (local_d8[3] == 0x29) {
      bVar21 = local_d8[4];
      if (((1 < bVar21 - 0x2a) && (bVar21 != 0x3f)) &&
         ((bVar21 != 0x7b ||
          (pbVar53 = local_d8 + 5, local_d8 = pbVar44, iVar13 = FUN_01b1cadc(pbVar53),
          pbVar44 = local_d8, iVar13 == 0)))) {
        local_d8 = pbVar44;
        bVar21 = 0x9d;
        goto LAB_01b1964c;
      }
    }
    local_d8 = pbVar44;
    uVar18 = 0;
    uVar20 = 0;
    uVar14 = 0x7e;
    *(int *)(param_11 + 0x8c) = *(int *)(param_11 + 0x8c) + 1;
    break;
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x3b:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
    goto switchD_01b1a3e8_caseD_22;
  case 0x26:
    goto switchD_01b1a3e8_caseD_26;
  case 0x27:
switchD_01b1a3e8_caseD_27:
    pbVar44 = pbVar54 + 1;
    uVar49 = (ulong)pbVar54[1];
    local_d8 = pbVar44;
    if ((byte)(pbVar54[1] - 0x30) < 10) goto LAB_01b1c86c;
    pbVar53 = pbVar44;
    if ((*(byte *)(*(long *)(param_11 + 0x18) + uVar49) >> 4 & 1) != 0) {
      pbVar54 = pbVar54 + 2;
      do {
        pbVar53 = pbVar54;
        uVar49 = (ulong)*pbVar53;
        pbVar54 = pbVar53 + 1;
      } while ((*(byte *)(*(long *)(param_11 + 0x18) + uVar49) >> 4 & 1) != 0);
    }
    if (param_12 == (int *)0x0) {
LAB_01b1c0d4:
      local_d8 = pbVar53 + 1;
      goto LAB_01b1a0bc;
    }
    local_d8 = pbVar53;
    if (iVar13 != (int)uVar49) goto LAB_01b1c894;
    iVar13 = *(int *)(param_11 + 0x60);
    if (9999 < iVar13) {
      iVar13 = 0x31;
      goto LAB_01b1c948;
    }
    iVar46 = (int)pbVar53 - (int)pbVar44;
    if ((iVar46 + 3 <= *(int *)(param_11 + 100)) ||
       (*(int *)(param_11 + 100) = iVar46 + 3, iVar46 < 0x21)) {
      iVar16 = *(int *)(param_11 + 0x70) + 1;
      if (0 < iVar13) {
        iVar15 = 0;
        piVar50 = (int *)(*(long *)(param_11 + 0x50) + 0xc);
        do {
          if ((piVar50[-1] == iVar46) &&
             (iVar17 = strncmp((char *)pbVar44,*(char **)(piVar50 + -3),(long)iVar46), iVar17 == 0))
          {
            if (*piVar50 == iVar16) goto LAB_01b1c0d4;
            if ((uVar45 >> 0x13 & 1) == 0) {
              iVar13 = 0x2b;
              goto LAB_01b1c948;
            }
            *(undefined4 *)(param_11 + 0xa8) = 1;
          }
          else if (*piVar50 == iVar16) {
            iVar13 = 0x41;
            goto LAB_01b1c948;
          }
          iVar15 = iVar15 + 1;
          piVar50 = piVar50 + 4;
        } while (iVar15 < iVar13);
      }
      iVar15 = *(int *)(param_11 + 0x68);
      if (iVar13 < iVar15) {
        __dest_00 = *(void **)(param_11 + 0x50);
      }
      else {
        __dest_00 = (void *)(*(code *)pcre_malloc)((long)iVar15 << 5);
        if (__dest_00 == (void *)0x0) {
          iVar13 = 0x15;
          goto LAB_01b1c948;
        }
        memcpy(__dest_00,*(void **)(param_11 + 0x50),(long)*(int *)(param_11 + 0x68) << 4);
        if (0x14 < *(int *)(param_11 + 0x68)) {
          (*(code *)pcre_free)(*(undefined8 *)(param_11 + 0x50));
        }
        iVar13 = *(int *)(param_11 + 0x60);
        *(void **)(param_11 + 0x50) = __dest_00;
        *(int *)(param_11 + 0x68) = iVar15 << 1;
      }
      puVar5 = (undefined8 *)((long)__dest_00 + (long)iVar13 * 0x10);
      *puVar5 = pbVar44;
      *(int *)(puVar5 + 1) = iVar46;
      *(int *)((long)puVar5 + 0xc) = iVar16;
      *(int *)(param_11 + 0x60) = iVar13 + 1;
      pbVar53 = local_d8;
      goto LAB_01b1c0d4;
    }
    goto LAB_01b1c8ac;
  case 0x28:
    local_e0 = pbVar54;
    if ((local_d8[3] == 0x3f) && (local_d8[4] == 0x43)) {
      lVar28 = 5;
      do {
        pbVar44 = local_d8 + lVar28;
        lVar28 = lVar28 + 1;
      } while (*pbVar44 - 0x30 < 10);
      if (*pbVar44 == 0x29) {
        local_e0 = pbVar54 + ((int)lVar28 - 2);
      }
    }
    if ((local_e0[1] == 0x3f) &&
       (((bVar21 = local_e0[2], bVar21 == 0x21 || (bVar21 == 0x3d)) ||
        ((bVar21 == 0x3c && ((local_e0[3] == 0x3d || (local_e0[3] == 0x21)))))))) {
      uVar18 = 0;
      uVar20 = 0;
      *(undefined4 *)(param_11 + 0xac) = 1;
      uVar14 = 0x87;
      local_d8 = pbVar54;
      break;
    }
    pbVar48[3] = 0x8d;
    pbVar44 = local_d8 + 3;
    bVar21 = local_d8[3];
    if (0x2c < bVar21) {
      if (bVar21 != 0x2d) {
        if (bVar21 == 0x3c) {
          uVar14 = 0x3e;
          pbVar44 = local_d8 + 4;
        }
        else {
          if (bVar21 != 0x52) goto LAB_01b1c3c4;
          uVar14 = 0;
          if (local_d8[4] == 0x26) {
            pbVar48[3] = 0x8f;
            uVar14 = 0xffffffff;
            pbVar44 = local_d8 + 5;
          }
        }
        goto LAB_01b1c410;
      }
LAB_01b1c0f0:
      pbVar44 = local_d8 + 4;
      bVar21 = local_d8[4];
      uVar27 = (uint)local_d8[3];
      if (bVar21 - 0x30 < 10) {
LAB_01b1c3d8:
        uVar14 = (uint)bVar21;
        iVar13 = 0;
        do {
          pbVar44 = pbVar44 + 1;
          iVar13 = iVar13 * 10 + uVar14;
          uVar14 = (uint)*pbVar44;
          iVar13 = iVar13 + -0x30;
        } while (uVar14 - 0x30 < 10);
      }
      else {
        iVar13 = 0;
      }
      uVar14 = 0;
      pbVar53 = (byte *)0x0;
      bVar12 = true;
      iVar46 = -1;
      goto LAB_01b1c4ac;
    }
    if (bVar21 == 0x27) {
      uVar14 = 0x27;
      pbVar44 = local_d8 + 4;
    }
    else {
      if (bVar21 == 0x2b) goto LAB_01b1c0f0;
LAB_01b1c3c4:
      uVar27 = 0;
      uVar14 = 0;
      if (bVar21 - 0x30 < 10) goto LAB_01b1c3d8;
    }
LAB_01b1c410:
    local_d8 = pbVar44;
    if ((byte)(*local_d8 - 0x30) < 10) goto LAB_01b1c86c;
    if ((*(byte *)(*(long *)(param_11 + 0x18) + (ulong)*local_d8) >> 4 & 1) == 0) {
      iVar13 = 0x1c;
      goto LAB_01b1c948;
    }
    pbVar53 = local_d8 + 1;
    do {
      pbVar44 = pbVar53;
      pbVar53 = pbVar44 + 1;
    } while ((*(byte *)(*(long *)(param_11 + 0x18) + (ulong)*pbVar44) >> 4 & 1) != 0);
    iVar46 = (int)pbVar44 - (int)local_d8;
    if (param_12 != (int *)0x0) {
      *param_12 = *param_12 + 2;
    }
    pbVar53 = local_d8;
    if (0 < (int)uVar14) {
      if ((uint)*pbVar44 == (uVar14 & 0xff)) {
        iVar13 = 0;
        bVar12 = false;
        uVar27 = 0xffffffff;
        pbVar44 = pbVar44 + 1;
        goto LAB_01b1c4ac;
      }
LAB_01b1c940:
      iVar13 = 0x1a;
      local_d8 = pbVar44;
      goto LAB_01b1c948;
    }
    iVar13 = 0;
    bVar12 = false;
    uVar27 = 0xffffffff;
LAB_01b1c4ac:
    local_d8 = pbVar44 + 1;
    if (*pbVar44 != 0x29) goto LAB_01b1c940;
    if (param_12 != (int *)0x0) {
LAB_01b1c4c8:
      uVar18 = 0;
      uVar14 = 0x87;
      uVar20 = 3;
      break;
    }
    if (!bVar12) {
      iVar13 = *(int *)(param_11 + 0x60);
      local_230 = *(byte **)(param_11 + 0x58);
      if (0 < iVar13) {
        iVar16 = 0;
        __n = (size_t)iVar46;
        do {
          iVar15 = strncmp((char *)pbVar53,(char *)(local_230 + 2),__n);
          if (iVar15 == 0) {
            bVar21 = local_230[1];
            bVar25 = *local_230;
            uVar14 = (uint)CONCAT11(bVar25,bVar21);
            if (*(int *)(param_11 + 0x7c) < (int)uVar14) {
              *(uint *)(param_11 + 0x7c) = uVar14;
            }
            if (iVar13 <= iVar16 + 1) goto LAB_01b1c71c;
            iVar46 = *(int *)(param_11 + 100);
            uVar14 = 1;
            pbVar44 = local_230 + (long)iVar46 + 2;
            goto LAB_01b1c698;
          }
          iVar16 = iVar16 + 1;
          local_230 = local_230 + *(int *)(param_11 + 100);
        } while (iVar16 < iVar13);
      }
      if (uVar14 != 0) goto LAB_01b1c80c;
      if (*pbVar53 == 0x52) {
        if (iVar46 < 2) {
LAB_01b1c5b0:
          iVar13 = 0xffff;
        }
        else {
          iVar13 = 0;
          lVar28 = 1;
          do {
            pbVar44 = pbVar53 + lVar28;
            if (9 < *pbVar44 - 0x30) goto LAB_01b1c80c;
            lVar28 = lVar28 + 1;
            iVar13 = (uint)*pbVar44 + iVar13 * 10 + -0x30;
          } while (lVar28 < iVar46);
          if (iVar13 == 0) goto LAB_01b1c5b0;
        }
        pbVar48[3] = 0x8f;
        pbVar48[5] = (byte)iVar13;
        pbVar48[4] = (byte)((uint)iVar13 >> 8);
LAB_01b1c734:
        uVar20 = 3;
      }
      else {
        if ((iVar46 != 6) || (iVar13 = strncmp((char *)pbVar53,"DEFINE",6), iVar13 != 0))
        goto LAB_01b1c80c;
        pbVar48[3] = 0x91;
        uVar20 = 1;
      }
      goto LAB_01b1c738;
    }
    if (iVar13 < 1) {
      iVar13 = 0x23;
      goto LAB_01b1c948;
    }
    if (uVar27 != 0) {
      if (uVar27 == 0x2d) {
        iVar13 = (1 - iVar13) + *(int *)(param_11 + 0x70);
      }
      else {
        iVar13 = *(int *)(param_11 + 0x70) + iVar13;
      }
      if (iVar13 < 1) goto LAB_01b1c80c;
    }
    if (iVar13 <= *(int *)(param_11 + 0x74)) {
      pbVar48[4] = (byte)((uint)iVar13 >> 8);
      pbVar48[5] = (byte)iVar13;
      if (*(int *)(param_11 + 0x7c) < iVar13) {
        *(int *)(param_11 + 0x7c) = iVar13;
      }
      goto LAB_01b1c4c8;
    }
    goto LAB_01b1c80c;
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_01b1a3e8_caseD_2b;
  case 0x3a:
switchD_01b1a3e8_caseD_3a:
    local_d8 = local_d8 + 3;
    goto LAB_01b1a250;
  case 0x3c:
    bVar21 = local_d8[3];
    if (bVar21 == 0x21) {
      uVar18 = 0;
      uVar20 = 0;
      *(int *)(param_11 + 0x8c) = *(int *)(param_11 + 0x8c) + 1;
      uVar14 = 0x80;
      local_d8 = local_d8 + 4;
    }
    else {
      if (bVar21 != 0x3d) {
        if ((*(byte *)(*(long *)(param_11 + 0x18) + (ulong)bVar21) >> 4 & 1) != 0) {
LAB_01b1bf30:
          iVar13 = 0x3e;
          goto switchD_01b1a3e8_caseD_27;
        }
        *param_4 = 0x18;
        local_d8 = local_d8 + 3;
        goto LAB_01b1c950;
      }
      uVar18 = 0;
      uVar20 = 0;
      *(int *)(param_11 + 0x8c) = *(int *)(param_11 + 0x8c) + 1;
      uVar14 = 0x7f;
      local_d8 = local_d8 + 4;
    }
    break;
  case 0x3d:
    uVar18 = 0;
    uVar20 = 0;
    *(int *)(param_11 + 0x8c) = *(int *)(param_11 + 0x8c) + 1;
    uVar14 = 0x7d;
    local_d8 = local_d8 + 3;
    break;
  case 0x3e:
    uVar18 = 0;
    uVar20 = 0;
    uVar14 = 0x81;
    local_d8 = local_d8 + 3;
    break;
  case 0x43:
    pbVar44 = pbVar48 + 1;
    *pbVar48 = 0x76;
    bVar21 = local_d8[3];
    if (bVar21 - 0x30 < 10) {
      iVar13 = 0;
      pbVar54 = local_d8 + 4;
      do {
        local_d8 = pbVar54;
        bVar21 = *local_d8;
        iVar13 = (uint)local_d8[-1] + iVar13 * 10 + -0x30;
        pbVar54 = local_d8 + 1;
      } while (bVar21 - 0x30 < 10);
    }
    else {
      iVar13 = 0;
      local_d8 = local_d8 + 3;
    }
    if (bVar21 == 0x29) {
      if (0xff < iVar13) {
        iVar13 = 0x26;
        goto LAB_01b1be68;
      }
      pbVar48[1] = (byte)iVar13;
      iVar13 = 0;
      pbVar48[2] = (byte)((uint)(((int)local_d8 - *(int *)(param_11 + 0x30)) + 1) >> 8);
      uVar9 = *(undefined4 *)(param_11 + 0x30);
      pbVar48[4] = 0;
      pbVar48[5] = 0;
      pbVar48[3] = ((char)local_d8 - (char)uVar9) + 1;
      pbVar44 = pbVar48 + 6;
    }
    else {
      iVar13 = 0x27;
LAB_01b1be68:
      *param_4 = iVar13;
      iVar13 = 5;
    }
    pbVar54 = (byte *)0x0;
    if (iVar13 != 0) {
      pbVar54 = pbVar53;
    }
    iVar16 = 4;
    if (iVar13 != 0) {
      iVar16 = iVar13;
    }
    local_178 = 1;
    local_120 = pbVar48;
LAB_01b1c170:
    pbVar53 = pbVar54;
    pbVar54 = local_d8;
    if ((iVar16 == 0) || (iVar16 == 4)) goto LAB_01b1b43c;
    if (iVar16 == 5) {
LAB_01b1c950:
      uVar18 = 0;
      *param_3 = local_d8;
    }
    else {
LAB_01b1c7f4:
      uVar18 = 1;
    }
    if (*(long *)(lVar10 + 0x28) != lVar36) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar18);
    }
    return;
  case 0x50:
    pbVar54 = local_d8 + 3;
    bVar25 = local_d8[3];
    if (1 < bVar25 - 0x3d) {
      if (bVar25 == 0x3c) goto LAB_01b1bf30;
      iVar13 = 0x29;
      local_d8 = pbVar54;
      goto LAB_01b1c948;
    }
    bVar12 = bVar25 == 0x3e;
    uVar27 = 0x29;
switchD_01b1a3e8_caseD_26:
    pbVar44 = pbVar54 + 1;
    uVar49 = (ulong)pbVar54[1];
    local_d8 = pbVar44;
    if ((byte)(pbVar54[1] - 0x30) < 10) {
LAB_01b1c86c:
      iVar13 = 0x54;
      goto LAB_01b1c948;
    }
    if ((*(byte *)(*(long *)(param_11 + 0x18) + uVar49) >> 4 & 1) != 0) {
      pbVar53 = pbVar54 + 2;
      do {
        local_d8 = pbVar53;
        uVar49 = (ulong)*local_d8;
        pbVar53 = local_d8 + 1;
      } while ((*(byte *)(*(long *)(param_11 + 0x18) + uVar49) >> 4 & 1) != 0);
    }
    lVar28 = (long)local_d8 - (long)pbVar44;
    uVar32 = (uint)lVar28;
    if (param_12 != (int *)0x0) {
      if (uVar32 == 0) {
        iVar13 = 0x3e;
      }
      else if ((uint)uVar49 == uVar27) {
        if ((int)uVar32 < 0x21) {
          iVar13 = *(int *)(param_11 + 0x60);
          if (iVar13 < 1) {
            iVar46 = 0;
            uVar14 = 0;
          }
          else {
            iVar46 = 0;
            puVar31 = (uint *)(*(long *)(param_11 + 0x50) + 0xc);
            do {
              if ((puVar31[-1] == uVar32) &&
                 (iVar16 = strncmp((char *)pbVar44,*(char **)(puVar31 + -3),(long)(int)uVar32),
                 iVar16 == 0)) {
                uVar14 = *puVar31;
                goto LAB_01b1b1ac;
              }
              iVar46 = iVar46 + 1;
              puVar31 = puVar31 + 4;
            } while (iVar46 < iVar13);
            uVar14 = 0;
          }
LAB_01b1b1ac:
          if (!bVar12) {
            *(int *)(param_11 + 0x84) = *(int *)(param_11 + 0x84) + 1;
          }
          *param_12 = *param_12 + 2;
          goto joined_r0x01b1b358;
        }
LAB_01b1c8ac:
        iVar13 = 0x30;
      }
      else {
LAB_01b1c894:
        iVar13 = 0x2a;
      }
      goto LAB_01b1c948;
    }
    iVar13 = *(int *)(param_11 + 0x60);
    if (iVar13 < 1) {
LAB_01b1c80c:
      iVar13 = 0xf;
      goto LAB_01b1c948;
    }
    local_230 = *(byte **)(param_11 + 0x58);
    iVar46 = 0;
    while ((iVar16 = strncmp((char *)pbVar44,(char *)(local_230 + 2),(long)(int)uVar32), iVar16 != 0
           || (local_230[(lVar28 << 0x20) + 0x200000000 >> 0x20] != 0))) {
      iVar46 = iVar46 + 1;
      local_230 = local_230 + *(int *)(param_11 + 100);
      if (iVar13 <= iVar46) goto LAB_01b1c80c;
    }
    uVar14 = (uint)CONCAT11(*local_230,local_230[1]);
joined_r0x01b1b358:
    if (bVar12) {
LAB_01b1b1d8:
      uVar49 = *(ulong *)(param_11 + 0x28);
      if (param_12 == (int *)0x0) {
        *pbVar48 = 0;
        if (uVar14 != 0) {
          uVar49 = FUN_01b16c68(*(undefined8 *)(param_11 + 0x28));
        }
        if (uVar49 == 0) {
          if (*(int *)(param_11 + 0x74) < (int)uVar14) goto LAB_01b1c80c;
          lVar28 = *(long *)(param_11 + 0x28);
          iVar13 = (int)lVar28;
          puVar23 = *(undefined1 **)(param_11 + 0x40);
          if ((undefined1 *)(*(long *)(param_11 + 0x20) + (long)*(int *)(param_11 + 0x6c) + -100) <=
              puVar23) {
            iVar13 = FUN_01b1d648(param_11);
            *param_4 = iVar13;
            if (iVar13 != 0) goto LAB_01b1c950;
            iVar13 = (int)*(undefined8 *)(param_11 + 0x28);
            puVar23 = *(undefined1 **)(param_11 + 0x40);
          }
          iVar46 = (int)pbVar48 + 1;
          *puVar23 = (char)((uint)(iVar46 - iVar13) >> 8);
          uVar49 = lVar28 + (int)uVar14;
          *(char *)(*(long *)(param_11 + 0x40) + 1) =
               (char)iVar46 - (char)*(undefined4 *)(param_11 + 0x28);
          *(long *)(param_11 + 0x40) = *(long *)(param_11 + 0x40) + 2;
        }
        else if ((param_10 < 1) &&
                (plVar30 = (long *)param_9,
                CONCAT11(*(undefined1 *)(uVar49 + 1),*(undefined1 *)(uVar49 + 2)) == 0)) {
          while( true ) {
            if ((plVar30 == (long *)0x0) || ((ulong)plVar30[1] < uVar49)) {
              iVar13 = 0x28;
              goto LAB_01b1c948;
            }
            iVar13 = FUN_01b18a78(plVar30[1],pbVar48,param_11,0);
            if (iVar13 == 0) break;
            plVar30 = (long *)*plVar30;
          }
        }
      }
      *pbVar48 = 0x75;
      local_1fc = 0;
      pbVar48[1] = (byte)((uint)((int)uVar49 - *(int *)(param_11 + 0x28)) >> 8);
      pbVar48[2] = (char)uVar49 - (char)*(undefined4 *)(param_11 + 0x28);
      pbVar44 = pbVar48 + 3;
      pbVar53 = pbVar48;
      pbVar54 = local_d8;
      if (local_130 == 0xfffffffe) {
        local_130 = 0xffffffff;
      }
      goto LAB_01b1b43c;
    }
    if (((param_12 == (int *)0x0) && (*(int *)(param_11 + 0xa8) != 0)) &&
       (iVar13 = *(int *)(param_11 + 0x60), iVar46 + 1 < iVar13)) {
      iVar16 = *(int *)(param_11 + 100);
      pbVar55 = local_230 + iVar16;
      uVar32 = 1;
      do {
        iVar15 = strcmp((char *)(local_230 + 2),(char *)(pbVar55 + 2));
        if (iVar15 != 0) {
          if (uVar32 < 2) goto LAB_01b1b368;
          break;
        }
        uVar32 = uVar32 + 1;
        pbVar55 = pbVar55 + iVar16;
      } while ((int)(iVar46 + uVar32) < iVar13);
      if (local_130 == 0xfffffffe) {
        local_130 = 0xffffffff;
      }
      *pbVar48 = (bVar21 & 1) + 0x73;
      pbVar44 = pbVar48 + 5;
      pbVar48[2] = (byte)iVar46;
      pbVar48[4] = (byte)uVar32;
      pbVar48[1] = (byte)((uint)iVar46 >> 8);
      pbVar48[3] = (byte)(uVar32 >> 8);
      pbVar53 = pbVar48;
      pbVar54 = local_d8;
      if (local_230 < pbVar55) {
        uVar32 = *(uint *)(param_11 + 0x7c);
        uVar14 = *(uint *)(param_11 + 0x80);
        do {
          uVar27 = (uint)CONCAT11(*local_230,local_230[1]);
          uVar43 = 1 << (ulong)(local_230[1] & 0x1f);
          if (0x1f < uVar27) {
            uVar43 = 1;
          }
          uVar14 = uVar43 | uVar14;
          *(uint *)(param_11 + 0x80) = uVar14;
          if ((int)uVar32 < (int)uVar27) {
            *(uint *)(param_11 + 0x7c) = uVar27;
            uVar32 = uVar27;
          }
          for (plVar30 = *(long **)(param_11 + 0x48); plVar30 != (long *)0x0;
              plVar30 = (long *)*plVar30) {
            if (uVar27 == *(ushort *)(plVar30 + 1)) {
              *(undefined2 *)((long)plVar30 + 10) = 1;
              break;
            }
          }
          local_230 = local_230 + *(int *)(param_11 + 100);
        } while (local_230 < pbVar55);
      }
    }
    else {
LAB_01b1b368:
      pbVar48[2] = (byte)uVar14;
      pbVar48[1] = (byte)(uVar14 >> 8);
      *pbVar48 = (bVar21 & 1) + 0x71;
      uVar32 = 1 << (ulong)(uVar14 & 0x1f);
      if (local_130 == 0xfffffffe) {
        local_130 = 0xffffffff;
      }
      if (0x1f < (int)uVar14) {
        uVar32 = 1;
      }
      *(uint *)(param_11 + 0x80) = *(uint *)(param_11 + 0x80) | uVar32;
      if (*(int *)(param_11 + 0x7c) < (int)uVar14) {
        *(uint *)(param_11 + 0x7c) = uVar14;
      }
      for (plVar30 = *(long **)(param_11 + 0x48); pbVar44 = pbVar48 + 3, pbVar53 = pbVar48,
          pbVar54 = local_d8, plVar30 != (long *)0x0; plVar30 = (long *)*plVar30) {
        if (uVar14 == *(ushort *)(plVar30 + 1)) {
          *(undefined2 *)((long)plVar30 + 10) = 1;
          break;
        }
      }
    }
    goto LAB_01b1b43c;
  case 0x52:
    uVar27 = 0x29;
    pbVar54 = local_d8 + 3;
switchD_01b1a3e8_caseD_2b:
    local_d8 = pbVar54;
    bVar21 = *local_d8;
    uVar32 = (uint)bVar21;
    if (bVar21 != 0x2b) {
      uVar43 = uVar32;
      if (bVar21 == 0x2d) {
        pbVar53 = local_d8 + 1;
        pbVar54 = local_d8;
        if (9 < *pbVar53 - 0x30) goto switchD_01b1a3e8_caseD_22;
        uVar43 = (uint)*pbVar53;
        local_d8 = pbVar53;
      }
LAB_01b1af80:
      uVar14 = 0;
      if (uVar43 - 0x30 < 10) {
        uVar14 = 0;
        pbVar44 = local_d8;
        do {
          local_d8 = pbVar44 + 1;
          uVar43 = (uint)*local_d8;
          uVar14 = ((uint)*pbVar44 + uVar14 * 10) - 0x30;
          pbVar44 = local_d8;
        } while (*local_d8 - 0x30 < 10);
      }
      if (uVar27 != uVar43) {
        iVar13 = 0x1d;
        goto LAB_01b1c948;
      }
      if (uVar32 != 0x2d) {
        if (uVar32 == 0x2b) {
          if (uVar14 == 0) goto LAB_01b1c88c;
          uVar14 = *(int *)(param_11 + 0x70) + uVar14;
        }
        goto LAB_01b1b1d8;
      }
      if (uVar14 == 0) {
LAB_01b1c88c:
        iVar13 = 0x3a;
        goto LAB_01b1c948;
      }
      uVar14 = (*(int *)(param_11 + 0x70) - uVar14) + 1;
      if (0 < (int)uVar14) goto LAB_01b1b1d8;
      goto LAB_01b1c80c;
    }
    pbVar53 = local_d8 + 1;
    pbVar44 = local_d8 + 1;
    uVar43 = (uint)*pbVar44;
    local_d8 = pbVar53;
    if (*pbVar44 - 0x30 < 10) goto LAB_01b1af80;
    iVar13 = 0x3f;
    goto LAB_01b1c948;
  default:
    if (*pbVar54 == 0x7c) {
      uVar18 = 1;
      goto switchD_01b1a3e8_caseD_3a;
    }
switchD_01b1a3e8_caseD_22:
    local_d8 = pbVar54;
    local_fc = 0;
    puVar31 = (uint *)((long)&local_fc + 4);
    pbVar53 = local_d8;
    while ((bVar21 = *pbVar53, bVar21 != 0x29 && (bVar21 != 0x3a))) {
      local_d8 = pbVar53 + 1;
      bVar21 = *pbVar53;
      puVar38 = puVar31;
      if (bVar21 < 0x69) {
        if (0x54 < bVar21) {
          if (bVar21 == 0x55) {
            uVar32 = 0x200;
          }
          else {
            if (bVar21 != 0x58) goto LAB_01b1c84c;
            uVar32 = 0x40;
          }
          goto LAB_01b1b5f8;
        }
        if (bVar21 == 0x4a) {
          *puVar31 = *puVar31 | 0x80000;
          uVar32 = 0x400;
          puVar38 = puVar3;
          goto LAB_01b1b5f8;
        }
        if (bVar21 != 0x2d) goto LAB_01b1c84c;
        pbVar53 = pbVar53 + 1;
        puVar31 = (uint *)&local_fc;
      }
      else {
        if (bVar21 < 0x73) {
          if (bVar21 == 0x69) {
            uVar32 = 1;
          }
          else {
            if (bVar21 != 0x6d) {
LAB_01b1c84c:
              *param_4 = 0xc;
              local_d8 = pbVar53;
              goto LAB_01b1c950;
            }
            uVar32 = 2;
          }
        }
        else if (bVar21 == 0x73) {
          uVar32 = 4;
        }
        else {
          if (bVar21 != 0x78) goto LAB_01b1c84c;
          uVar32 = 8;
        }
LAB_01b1b5f8:
        *puVar38 = *puVar38 | uVar32;
        pbVar53 = pbVar53 + 1;
      }
    }
    uVar32 = (local_fc._4_4_ | uVar45) & ((uint)local_fc ^ 0xffffffff);
    if (bVar21 != 0x29) {
      uVar18 = 0;
      uVar20 = 0;
      uVar14 = 0x83;
      local_d8 = pbVar53 + 1;
      break;
    }
    if ((pbVar48 == (byte *)(*(long *)(param_11 + 0x28) + 3)) &&
       ((param_12 == (int *)0x0 || (*param_12 == 6)))) {
      *(uint *)(param_11 + 0x90) = uVar32;
    }
    else {
      local_194 = uVar32 >> 9 & 1;
      local_1a4 = local_194 ^ 1;
      local_164 = uVar32 & 1;
    }
    *param_1 = uVar32;
    pbVar53 = (byte *)0x0;
    uVar45 = uVar32;
    pbVar54 = local_d8;
    goto LAB_01b1b43c;
  }
LAB_01b1a258:
  iVar13 = *(int *)(param_11 + 0x88);
  *(int *)(param_11 + 0x88) = iVar13 + 1;
  if (0xf9 < iVar13) {
    iVar13 = 0x52;
    goto LAB_01b1c948;
  }
  pbVar53 = pbVar48;
  if ((uVar14 < 0x81) && (*(int *)(param_11 + 0xac) != 0)) {
    pbVar53 = (byte *)0x0;
    *(undefined4 *)(param_11 + 0xac) = 0;
  }
  *pbVar48 = (byte)uVar14;
  iVar13 = param_10;
  if (uVar14 == 0x87) {
    iVar13 = param_10 + 1;
  }
  uVar27 = *(uint *)(param_11 + 0x98);
  uVar43 = *(uint *)(param_11 + 0x70);
  local_c4 = 0;
  local_d0 = pbVar48;
  iVar13 = FUN_01b17c6c(uVar32,&local_d0,&local_d8,param_4,uVar14 - 0x7f < 2,uVar18,uVar20,iVar13,
                        &local_e8,&local_f0,&local_e4,&local_ec,param_9,param_11,piVar8);
  if (iVar13 == 0) goto LAB_01b1c950;
  *(int *)(param_11 + 0x88) = *(int *)(param_11 + 0x88) + -1;
  if ((uVar14 == 0x81) && (*(uint *)(param_11 + 0x70) <= uVar43)) {
    *pbVar48 = 0x82;
  }
  if (uVar14 < 0x81) {
    *(int *)(param_11 + 0x8c) = *(int *)(param_11 + 0x8c) + -1;
  }
  if ((param_12 == (int *)0x0) && (uVar14 == 0x87)) {
    iVar13 = 1;
    pbVar44 = pbVar48;
    do {
      iVar13 = iVar13 + -1;
      pbVar44 = pbVar44 + CONCAT11(pbVar44[1],pbVar44[2]);
    } while (*pbVar44 != 0x78);
    if (pbVar48[3] == 0x91) {
      if (iVar13 != 0) {
        iVar13 = 0x36;
        goto LAB_01b1c948;
      }
      uVar14 = 0x91;
    }
    else {
      if (1 < (uint)-iVar13) {
        iVar13 = 0x1b;
        goto LAB_01b1c948;
      }
      if (iVar13 == 0) {
        local_f0 = 0xffffffff;
        local_ec = 0xffffffff;
      }
      uVar14 = 0x87;
    }
  }
  if (*local_d8 != 0x29) {
    iVar13 = 0xe;
LAB_01b1c948:
    *param_4 = iVar13;
    goto LAB_01b1c950;
  }
  pbVar54 = local_d8;
  if (param_12 == (int *)0x0) {
    pbVar44 = local_d0;
    if (uVar14 != 0x91) {
      if (uVar14 < 0x81) {
        local_1fc = 0;
        uVar32 = local_e4;
        if (uVar14 != 0x7d || (int)local_ec < 0) {
          uVar32 = uVar33;
        }
        local_158 = CONCAT44(local_158._4_4_,uVar33);
        uVar33 = local_ec;
        if (uVar14 != 0x7d || (int)local_ec < 0) {
          uVar33 = local_13c;
        }
        local_15c = local_13c;
        local_174 = local_158._4_4_;
        uVar52 = local_130;
        local_13c = uVar33;
        uVar33 = uVar32;
      }
      else {
        if (local_130 == 0xfffffffe) {
          local_1fc = local_f0 >> 0x1f ^ 1;
          uVar52 = local_e8;
          uVar32 = local_f0;
          if ((int)local_f0 < 0) {
            uVar32 = 0xffffffff;
            uVar52 = local_158._4_4_;
          }
          local_130 = 0xffffffff;
        }
        else {
          if ((-1 < (int)local_f0) && ((int)local_ec < 0)) {
            local_ec = local_f0 | uVar27;
            local_e4 = local_e8;
          }
          local_1fc = 0;
          uVar32 = local_130;
          uVar52 = local_158._4_4_;
        }
        local_15c = local_13c;
        uVar14 = local_e4;
        uVar27 = local_ec;
        if ((int)local_ec < 0) {
          uVar14 = uVar33;
          uVar27 = local_13c;
        }
        local_174 = local_158._4_4_;
        local_158 = CONCAT44(uVar52,uVar33);
        uVar52 = local_130;
        local_13c = uVar27;
        local_130 = uVar32;
        uVar33 = uVar14;
      }
    }
  }
  else {
    if (0x7fffffeb - *param_12 < local_c4 + -6) {
LAB_01b1c7bc:
      iVar13 = 0x14;
      goto LAB_01b1c948;
    }
    *param_12 = local_c4 + -6 + *param_12;
    pbVar48[1] = 0;
    pbVar48[2] = 3;
    pbVar48[3] = 0x78;
    pbVar48[4] = 0;
    pbVar48[5] = 3;
    pbVar44 = pbVar48 + 6;
  }
LAB_01b1b43c:
  local_d8 = pbVar54;
  local_d8 = local_d8 + 1;
  goto LAB_01b18edc;
LAB_01b1c7c8:
  iVar13 = 5;
LAB_01b1c7cc:
  *param_4 = iVar13;
  goto LAB_01b1c950;
LAB_01b19978:
  lVar40 = lVar40 + 1;
  pcVar51 = pcVar51 + (ulong)bVar39 + 1;
  iVar16 = iVar16 + 3;
  if (lVar40 == 0xe) goto LAB_01b19990;
  goto LAB_01b19950;
LAB_01b19990:
  *param_4 = 0x1e;
LAB_01b199ac:
  iVar16 = 5;
LAB_01b199b0:
  bVar11 = false;
LAB_01b19b4c:
  if ((iVar16 != 0x11) && (pbVar54 = pbVar48, iVar16 != 0)) goto LAB_01b1c170;
LAB_01b19fb0:
  pbVar54 = local_d8;
  pbVar53 = local_d8 + 1;
  local_d8 = pbVar53;
  bVar25 = pbVar54[1];
  if (bVar25 == 0) {
    if (local_118 == (byte *)0x0) goto LAB_01b1c7dc;
    pbVar53 = local_118 + 1;
    local_d8 = pbVar53;
    bVar25 = local_118[1];
    if (bVar25 == 0) goto LAB_01b1c7dc;
    local_118 = (byte *)0x0;
  }
  uVar32 = (uint)bVar25;
  local_d8 = pbVar53;
  if ((bVar11) || (uVar32 != 0x5d)) goto LAB_01b19e58;
  if (local_130 == 0xfffffffe) {
    local_130 = 0xffffffff;
  }
  bVar21 = 0x6e;
  if (iVar46 != iVar13) {
    bVar21 = 0x6f;
  }
  *pbVar48 = bVar21;
  if (param_12 == (int *)0x0) {
    if (iVar46 != 0) {
      lVar28 = 0;
      do {
        uVar20 = *(undefined8 *)((long)local_98 + lVar28 + 8);
        uVar18 = *(undefined8 *)((long)local_98 + lVar28);
        *(ulong *)((long)local_98 + lVar28 + 8) =
             CONCAT17(~(byte)((ulong)uVar20 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar20 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar20 >>
                                                                                   8),~(byte)uVar20)
                                                                  ))))));
        *(ulong *)((long)local_98 + lVar28) =
             CONCAT17(~(byte)((ulong)uVar18 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar18 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar18 >>
                                                                                   8),~(byte)uVar18)
                                                                  ))))));
        lVar28 = lVar28 + 0x10;
      } while (lVar28 != 0x20);
    }
    *(undefined8 *)(pbVar48 + 0x19) = local_98[3];
    *(undefined8 *)(pbVar48 + 0x11) = local_98[2];
    *(undefined8 *)(pbVar48 + 9) = local_98[1];
    *(undefined8 *)(pbVar48 + 1) = local_98[0];
  }
  pbVar44 = pbVar48 + 0x21;
  bVar11 = false;
LAB_01b1b428:
  local_15c = local_13c;
  local_174 = local_158._4_4_;
  local_158 = CONCAT44(local_158._4_4_,uVar33);
  pbVar53 = pbVar48;
  uVar52 = local_130;
  pbVar54 = local_d8;
  goto LAB_01b1b43c;
LAB_01b1c698:
  pbVar54 = pbVar44;
  iVar15 = strncmp((char *)pbVar53,(char *)pbVar54,__n);
  if ((iVar15 == 0) && (pbVar54[__n] == 0)) goto code_r0x01b1c6b8;
  if (uVar14 < 2) {
    local_230 = pbVar54 + -2;
LAB_01b1c71c:
    pbVar48[4] = bVar25;
    pbVar48[5] = bVar21;
    goto LAB_01b1c734;
  }
  goto LAB_01b1c6d8;
code_r0x01b1c6b8:
  uVar14 = uVar14 + 1;
  pbVar44 = pbVar54 + iVar46;
  if (iVar13 <= (int)(iVar16 + uVar14)) goto LAB_01b1c6d8;
  goto LAB_01b1c698;
LAB_01b1c6d8:
  local_230 = pbVar54 + -2;
  pbVar48[4] = (byte)((uint)iVar16 >> 8);
  pbVar48[5] = (byte)iVar16;
  pbVar48[7] = (byte)uVar14;
  pbVar48[6] = (byte)(uVar14 >> 8);
  pbVar48[3] = pbVar48[3] + 1;
  uVar20 = 5;
LAB_01b1c738:
  uVar14 = 0x87;
  uVar18 = 0;
  goto LAB_01b1a258;
}

