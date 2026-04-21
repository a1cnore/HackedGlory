// functions/019d6 — 7 functions
#include "libGameKindred.h"




void FUN_019d607c(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 *local_18;
  
  uStack_28 = param_3[3];
  local_30 = param_3[2];
  uStack_38 = param_3[1];
  local_40 = *param_3;
  local_18 = param_1;
  FUN_019d4a70(&local_18,&LAB_019d5f48,param_2,&local_40);
  *local_18 = 0;
  return;
}




void FUN_019d60cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[3];
  local_20 = param_2[2];
  uStack_28 = param_2[1];
  local_30 = *param_2;
  FUN_019d4a70(isgraph,fputc,param_1,&local_30);
  return;
}




void FUN_019d6114(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[3];
  local_20 = param_3[2];
  uStack_28 = param_3[1];
  local_30 = *param_3;
  FUN_019d4a70(param_1,fputc,param_2,&local_30);
  return;
}




int FUN_019d6154(long *param_1,undefined1 *param_2)

{
  void *__buf;
  undefined4 *puVar1;
  byte *pbVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  int *piVar14;
  long lVar15;
  undefined4 *puVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined4 local_1e8;
  undefined2 local_1e4;
  ushort local_1e2;
  int local_1e0;
  undefined2 local_1dc;
  ushort local_1da;
  long local_e8 [17];
  
  lVar19 = *param_1;
  uVar4 = (undefined4)param_1[0x3a];
  *param_2 = 1;
  lVar9 = (*(code *)PTR_calloc_02bf74c8)(1,0x1ed0);
  if (lVar9 == 0) {
    iVar7 = 0x1b;
  }
  else {
    lVar23 = *param_1;
    *(long *)(lVar23 + 0x218) = lVar9;
    *(undefined4 *)(lVar9 + 0x1ec8) = 0;
    *(long *)(lVar9 + 0x1eb8) = lVar9 + 0x1cb8;
    *(undefined4 *)(lVar9 + 0x814) = 1;
    *(undefined4 *)(lVar9 + 0x1414) = 1;
    *(undefined4 *)(lVar9 + 0x808) = 1;
    *(undefined8 *)(lVar9 + 0x1408) = 0x100000001;
    *(undefined4 *)(lVar9 + 0x1884) = 1;
    piVar17 = *(int **)(lVar19 + 0x218);
    memset(local_e8,0,0x80);
    memset(&local_1e8,0,0x100);
    if (*(char *)((long)param_1 + 0x2e4) != '\0') {
      FUN_019d5bc0(&local_1e8,0x100,"USER,%s",param_1[0x2e]);
      lVar10 = FUN_019c1cb0(*(undefined8 *)(lVar9 + 0x1cb0),&local_1e8);
      if (lVar10 == 0) {
        FUN_019c1dcc(*(undefined8 *)(lVar9 + 0x1cb0));
        iVar7 = 0x1b;
LAB_019d6438:
        *(undefined8 *)(lVar9 + 0x1cb0) = 0;
        return iVar7;
      }
      *(long *)(lVar9 + 0x1cb0) = lVar10;
      *(undefined4 *)(lVar9 + 0x8a4) = 1;
    }
    puVar25 = *(undefined8 **)(lVar23 + 0x400);
    if (puVar25 != (undefined8 *)0x0) {
      do {
        iVar7 = sscanf((char *)*puVar25,"%127[^= ]%*[ =]%255s",local_e8,&local_1e8);
        if (iVar7 != 2) {
LAB_019d63fc:
          FUN_019ca0fc(lVar23,"Syntax error in telnet option: %s",*puVar25);
          iVar7 = 0x31;
          goto LAB_019d6414;
        }
        iVar7 = FUN_019e23a8(local_e8,"TTYPE");
        if (iVar7 == 0) {
          iVar7 = FUN_019e23a8(local_e8,"XDISPLOC");
          if (iVar7 == 0) {
            iVar7 = FUN_019e23a8(local_e8,&DAT_01e23904);
            if (iVar7 == 0) {
              iVar7 = FUN_019e23a8(local_e8,&DAT_01e23ae5);
              if (iVar7 == 0) {
                iVar7 = FUN_019e23a8(local_e8,"BINARY");
                if (iVar7 == 0) {
                  FUN_019ca0fc(lVar23,"Unknown telnet option %s",*puVar25);
                  iVar7 = 0x30;
                  goto LAB_019d6414;
                }
                iVar7 = atoi((char *)&local_1e8);
                if (iVar7 != 1) {
                  *(undefined4 *)(lVar9 + 0x808) = 0;
                  *(undefined4 *)(lVar9 + 0x1408) = 0;
                }
              }
              else {
                iVar7 = sscanf((char *)&local_1e8,"%hu%*[xX]%hu",lVar9 + 0x1ca8,lVar9 + 0x1caa);
                if (iVar7 != 2) goto LAB_019d63fc;
                *(undefined4 *)(lVar9 + 0x884) = 1;
              }
            }
            else {
              lVar10 = FUN_019c1cb0(*(undefined8 *)(lVar9 + 0x1cb0),&local_1e8);
              if (lVar10 == 0) {
                iVar7 = 0x1b;
LAB_019d6414:
                FUN_019c1dcc(*(undefined8 *)(lVar9 + 0x1cb0));
                goto LAB_019d6438;
              }
              *(long *)(lVar9 + 0x1cb0) = lVar10;
              *(undefined4 *)(lVar9 + 0x8a4) = 1;
            }
          }
          else {
            strncpy((char *)(lVar9 + 0x1c28),(char *)&local_1e8,0x7f);
            *(undefined1 *)(lVar9 + 0x1ca7) = 0;
            *(undefined4 *)(lVar9 + 0x894) = 1;
          }
        }
        else {
          strncpy((char *)(lVar9 + 0x1c08),(char *)&local_1e8,0x1f);
          *(undefined1 *)(lVar9 + 0x1c27) = 0;
          *(undefined4 *)(lVar9 + 0x868) = 1;
        }
        puVar25 = (undefined8 *)puVar25[1];
      } while (puVar25 != (undefined8 *)0x0);
    }
    local_1e4 = 1;
    __buf = (void *)(lVar19 + 0x938);
    local_1e8 = uVar4;
    if ((code *)param_1[0x7a] == fread) {
      local_1e0 = fileno((FILE *)param_1[0x7b]);
      uVar21 = 1000;
      iVar22 = 2;
      local_1dc = 1;
    }
    else {
      uVar21 = 100;
      iVar22 = 1;
    }
    lVar23 = 0;
    lVar9 = 0;
    iVar7 = 0;
    bVar6 = true;
    do {
      if (!bVar6) goto LAB_019d6d78;
      iVar8 = FUN_019c1700(&local_1e8,iVar22,uVar21);
      if (iVar8 == 0) {
        local_1e2 = 0;
        local_1da = 0;
LAB_019d64cc:
        local_e8[0] = 0;
        if (iVar22 == 2) {
          if ((local_1da & 1) != 0) {
            local_e8[0] = read(local_1e0,__buf,0x3fff);
LAB_019d6540:
            if (0 < local_e8[0]) {
              iVar7 = FUN_019d6e3c(param_1,__buf);
              if (iVar7 == 0) {
                lVar23 = local_e8[0] + lVar23;
                FUN_019c45ac(lVar19,lVar23);
                goto LAB_019d6ba8;
              }
              goto LAB_019d655c;
            }
          }
          bVar6 = local_e8[0] == 0;
        }
        else {
          iVar8 = (*(code *)param_1[0x7a])(__buf,1,0x3fff,param_1[0x7b]);
          local_e8[0] = (long)iVar8;
          if (iVar8 != 0x10000000) {
            if (iVar8 == 0x10000001) goto LAB_019d6ba8;
            goto LAB_019d6540;
          }
LAB_019d655c:
          bVar6 = false;
        }
      }
      else {
        if (iVar8 == -1) goto LAB_019d6d78;
        if ((local_1e2 & 1) == 0) goto LAB_019d64cc;
        iVar7 = FUN_019ca940(param_1,uVar4,__buf,0x3fff,local_e8);
        if (iVar7 == 0) {
          if (0 < local_e8[0]) {
            lVar9 = local_e8[0] + lVar9;
            FUN_019c45a4(lVar19,lVar9);
            lVar10 = local_e8[0];
            if (local_e8[0] != 0) {
              lVar18 = *param_1;
              lVar20 = 0;
              puVar24 = *(undefined4 **)(lVar18 + 0x218);
              puVar1 = puVar24 + 0x72e;
              pbVar2 = (byte *)(puVar24 + 0x7ae);
              iVar7 = -1;
              do {
                iVar8 = iVar7;
                if (8 < (uint)puVar24[0x7b2]) goto LAB_019d6b4c;
                bVar5 = *(byte *)(lVar19 + 0x938 + lVar20);
                uVar26 = (ulong)bVar5;
                switch(puVar24[0x7b2]) {
                case 0:
                  if (bVar5 == 0xd) {
                    puVar24[0x7b2] = 6;
                  }
                  else if (bVar5 == 0xff) {
                    puVar24[0x7b2] = 1;
                    goto joined_r0x019d67a0;
                  }
LAB_019d6a9c:
                  iVar8 = (int)lVar20;
                  if (-1 < iVar7) {
                    iVar8 = iVar7;
                  }
                  goto LAB_019d6b4c;
                case 1:
switchD_019d65e8_caseD_1:
                  switch(bVar5) {
                  case 0xfa:
                    *(undefined4 **)(puVar24 + 0x7ae) = puVar1;
LAB_019d6a4c:
                    uVar12 = 7;
                    break;
                  case 0xfb:
                    uVar12 = 2;
                    break;
                  case 0xfc:
                    uVar12 = 3;
                    break;
                  case 0xfd:
                    uVar12 = 4;
                    break;
                  case 0xfe:
                    uVar12 = 5;
                    break;
                  case 0xff:
                    puVar24[0x7b2] = 0;
                    goto LAB_019d6a9c;
                  default:
                    puVar24[0x7b2] = 0;
                    FUN_019d6f24(lVar18,"RCVD",0xff,uVar26);
                    goto LAB_019d6b4c;
                  }
LAB_019d6a90:
                  puVar24[0x7b2] = uVar12;
                  goto LAB_019d6b4c;
                case 2:
                  FUN_019d6f24(lVar18,"RCVD",0xfb,uVar26);
                  *puVar24 = 1;
                  lVar15 = *(long *)(*param_1 + 0x218);
                  lVar3 = lVar15 + uVar26 * 4;
                  iVar7 = *(int *)(lVar3 + 0xc08);
                  piVar14 = (int *)(lVar3 + 0xc08);
                  if (iVar7 == 3) {
                    iVar7 = *(int *)(lVar3 + 0x1008);
                    if (iVar7 != 1) goto LAB_019d6a24;
                    puVar16 = (undefined4 *)(lVar3 + 0x1008);
LAB_019d69a8:
                    *piVar14 = 1;
LAB_019d6b2c:
                    *puVar16 = 0;
                  }
                  else if (iVar7 == 2) {
                    lVar15 = lVar15 + uVar26 * 4;
                    iVar7 = *(int *)(lVar15 + 0x1008);
                    if (iVar7 == 1) {
                      *piVar14 = 3;
                      *(undefined4 *)(lVar15 + 0x1008) = 0;
                      goto LAB_019d6af0;
                    }
                    if (iVar7 == 0) {
                      *piVar14 = 1;
                    }
                  }
                  else if (iVar7 == 0) {
                    if (*(int *)(lVar15 + uVar26 * 4 + 0x1408) == 1) {
                      *piVar14 = 1;
                      goto LAB_019d6978;
                    }
LAB_019d6af0:
                    uVar11 = 0xfe;
                    goto LAB_019d6b14;
                  }
                  break;
                case 3:
                  FUN_019d6f24(lVar18,"RCVD",0xfc,uVar26);
                  *puVar24 = 1;
                  lVar3 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                  iVar7 = *(int *)(lVar3 + 0xc08);
                  piVar14 = (int *)(lVar3 + 0xc08);
                  if (iVar7 == 3) {
                    iVar7 = *(int *)(lVar3 + 0x1008);
                    if (iVar7 != 1) {
LAB_019d6990:
                      if (iVar7 != 0) break;
                      goto LAB_019d6a28;
                    }
                    *piVar14 = 2;
                    *(undefined4 *)(lVar3 + 0x1008) = 0;
LAB_019d6978:
                    uVar11 = 0xfd;
LAB_019d6b14:
                    FUN_019d72a0(param_1,uVar11,uVar26);
                  }
                  else {
                    if (iVar7 == 2) {
                      lVar3 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                      iVar7 = *(int *)(lVar3 + 0x1008);
                      if (iVar7 != 1) goto LAB_019d6990;
                      puVar16 = (undefined4 *)(lVar3 + 0x1008);
LAB_019d6b28:
                      *piVar14 = 0;
                      goto LAB_019d6b2c;
                    }
                    if (iVar7 == 1) {
                      *piVar14 = 0;
                      goto LAB_019d6af0;
                    }
                  }
                  break;
                case 4:
                  FUN_019d6f24(lVar18,"RCVD",0xfd,uVar26);
                  *puVar24 = 1;
                  lVar15 = *(long *)(*param_1 + 0x218);
                  lVar3 = lVar15 + uVar26 * 4;
                  piVar14 = (int *)(lVar3 + 8);
                  iVar7 = *piVar14;
                  if (iVar7 == 3) {
                    iVar7 = *(int *)(lVar3 + 0x408);
                    if (iVar7 != 1) goto LAB_019d6a24;
                    puVar16 = (undefined4 *)(lVar3 + 0x408);
                    goto LAB_019d69a8;
                  }
                  if (iVar7 == 2) {
                    lVar3 = lVar15 + uVar26 * 4;
                    iVar7 = *(int *)(lVar3 + 0x408);
                    if (iVar7 == 1) {
                      *piVar14 = 3;
                      *(undefined4 *)(lVar3 + 0x1008) = 0;
LAB_019d6b10:
                      uVar11 = 0xfc;
                      goto LAB_019d6b14;
                    }
                    if (iVar7 == 0) {
                      *piVar14 = 1;
                      iVar7 = *(int *)(lVar15 + uVar26 * 4 + 0x1808);
                      goto LAB_019d69d8;
                    }
                  }
                  else if (iVar7 == 0) {
                    lVar15 = lVar15 + uVar26 * 4;
                    if (*(int *)(lVar15 + 0x808) == 1) {
                      *piVar14 = 1;
                      FUN_019d72a0(param_1,0xfb,uVar26);
                      iVar7 = *(int *)(lVar15 + 0x1808);
LAB_019d69d8:
                      if (iVar7 == 1) {
                        FUN_019d7330(param_1,uVar26);
                      }
                    }
                    else if (*(int *)(lVar15 + 0x1808) == 1) {
                      *piVar14 = 1;
                      FUN_019d72a0(param_1,0xfb,uVar26);
                      FUN_019d7330(param_1,uVar26);
                    }
                    else {
                      FUN_019d72a0(param_1,0xfc,uVar26);
                    }
                  }
                  break;
                case 5:
                  FUN_019d6f24(lVar18,"RCVD",0xfe,uVar26);
                  *puVar24 = 1;
                  lVar3 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                  piVar14 = (int *)(lVar3 + 8);
                  iVar7 = *piVar14;
                  if (iVar7 == 3) {
                    iVar7 = *(int *)(lVar3 + 0x408);
                    if (iVar7 == 1) {
                      *piVar14 = 2;
                      *(undefined4 *)(lVar3 + 0x408) = 0;
                      uVar11 = 0xfb;
                      goto LAB_019d6b14;
                    }
                  }
                  else {
                    if (iVar7 != 2) {
                      if (iVar7 == 1) {
                        *piVar14 = 0;
                        goto LAB_019d6b10;
                      }
                      break;
                    }
                    lVar3 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                    iVar7 = *(int *)(lVar3 + 0x408);
                    if (iVar7 == 1) {
                      puVar16 = (undefined4 *)(lVar3 + 0x408);
                      goto LAB_019d6b28;
                    }
                  }
LAB_019d6a24:
                  if (iVar7 == 0) {
LAB_019d6a28:
                    *piVar14 = 0;
                  }
                  break;
                case 6:
                  puVar24[0x7b2] = 0;
                  if (bVar5 != 0) goto LAB_019d6a9c;
joined_r0x019d67a0:
                  if ((iVar7 < 0) ||
                     (iVar7 = FUN_019ca574(param_1,1,lVar19 + iVar7 + 0x938,
                                           (long)((int)lVar20 - iVar7)), iVar7 == 0)) {
                    iVar8 = -1;
                    goto LAB_019d6b4c;
                  }
                  goto LAB_019d6b80;
                case 7:
                  if (bVar5 == 0xff) {
                    uVar12 = 8;
                    goto LAB_019d6a90;
                  }
                  pbVar13 = *(byte **)(puVar24 + 0x7ae);
                  if (pbVar13 < pbVar2) {
                    *(byte **)(puVar24 + 0x7ae) = pbVar13 + 1;
                    *pbVar13 = bVar5;
                  }
                  goto LAB_019d6b4c;
                case 8:
                  if (bVar5 != 0xf0) {
                    pbVar13 = *(byte **)(puVar24 + 0x7ae);
                    if (bVar5 != 0xff) {
                      if (pbVar13 < pbVar2) {
                        *(byte **)(puVar24 + 0x7ae) = pbVar13 + 1;
                        *pbVar13 = 0xff;
                        pbVar13 = *(byte **)(puVar24 + 0x7ae);
                      }
                      if (pbVar13 < pbVar2) {
                        *(byte **)(puVar24 + 0x7ae) = pbVar13 + 1;
                        *pbVar13 = bVar5;
                        pbVar13 = *(byte **)(puVar24 + 0x7ae);
                      }
                      *(byte **)(puVar24 + 0x7b0) = pbVar13 + -2;
                      *(undefined4 **)(puVar24 + 0x7ae) = puVar1;
                      FUN_019d6f24(lVar18,"In SUBOPTION processing, RCVD",0xff,uVar26);
                      FUN_019d7004(param_1);
                      puVar24[0x7b2] = 1;
                      goto switchD_019d65e8_caseD_1;
                    }
                    if (pbVar13 < pbVar2) {
                      *(byte **)(puVar24 + 0x7ae) = pbVar13 + 1;
                      *pbVar13 = 0xff;
                    }
                    goto LAB_019d6a4c;
                  }
                  pbVar13 = *(byte **)(puVar24 + 0x7ae);
                  if (pbVar13 < pbVar2) {
                    *(byte **)(puVar24 + 0x7ae) = pbVar13 + 1;
                    *pbVar13 = 0xff;
                    pbVar13 = *(byte **)(puVar24 + 0x7ae);
                  }
                  if (pbVar13 < pbVar2) {
                    *(byte **)(puVar24 + 0x7ae) = pbVar13 + 1;
                    *pbVar13 = 0xf0;
                    pbVar13 = *(byte **)(puVar24 + 0x7ae);
                  }
                  *(byte **)(puVar24 + 0x7b0) = pbVar13 + -2;
                  *(undefined4 **)(puVar24 + 0x7ae) = puVar1;
                  FUN_019d7004(param_1);
                }
                puVar24[0x7b2] = 0;
LAB_019d6b4c:
                lVar20 = lVar20 + 1;
                iVar7 = iVar8;
              } while (lVar10 != lVar20);
              if ((-1 < iVar8) &&
                 (iVar7 = FUN_019ca574(param_1,1,lVar19 + iVar8 + 0x938,(long)((int)lVar20 - iVar8))
                 , iVar7 != 0)) {
LAB_019d6b80:
                bVar6 = false;
                goto LAB_019d6bac;
              }
            }
            if ((*piVar17 == 0) || (piVar17[1] != 0)) {
              iVar7 = 0;
            }
            else {
              iVar7 = 0;
              lVar10 = 0xc08;
              lVar20 = *(long *)(*param_1 + 0x218);
              do {
                if (lVar10 != 0xc0c) {
                  lVar18 = lVar20 + lVar10;
                  if (*(int *)(lVar18 + -0x400) == 1) {
                    lVar3 = *(long *)(*param_1 + 0x218) + lVar10;
                    piVar14 = (int *)(lVar3 + -0xc00);
                    iVar8 = *piVar14;
                    if (iVar8 == 3) {
                      piVar14 = (int *)(lVar3 + -0x800);
                      if (*piVar14 == 0) {
                        *piVar14 = 1;
                      }
                    }
                    else if (iVar8 == 2) {
                      piVar14 = (int *)(*(long *)(*param_1 + 0x218) + lVar10 + -0x800);
                      if (*piVar14 == 1) {
                        *piVar14 = 0;
                      }
                    }
                    else if (iVar8 == 0) {
                      *piVar14 = 2;
                      FUN_019d72a0(param_1,0xfb,iVar7);
                    }
                  }
                  if (*(int *)(lVar18 + 0x800) == 1) {
                    lVar18 = *(long *)(*param_1 + 0x218);
                    iVar8 = *(int *)(lVar18 + lVar10);
                    if (iVar8 == 3) {
                      if (*(int *)(lVar18 + lVar10 + 0x400) == 0) {
                        *(undefined4 *)(lVar18 + lVar10 + 0x400) = 1;
                      }
                    }
                    else if (iVar8 == 2) {
                      if (*(int *)(lVar18 + lVar10 + 0x400) == 1) {
                        *(undefined4 *)(lVar18 + lVar10 + 0x400) = 0;
                      }
                    }
                    else if (iVar8 == 0) {
                      *(undefined4 *)(lVar18 + lVar10) = 2;
                      FUN_019d72a0(param_1,0xfd,iVar7);
                    }
                  }
                }
                lVar10 = lVar10 + 4;
                iVar7 = iVar7 + 1;
              } while (lVar10 != 0xca8);
              iVar7 = 0;
              piVar17[1] = 1;
            }
            goto LAB_019d64cc;
          }
          bVar6 = false;
          iVar7 = 0;
        }
        else {
          if (iVar7 != 0x51) goto LAB_019d655c;
LAB_019d6ba8:
          bVar6 = true;
        }
      }
LAB_019d6bac:
      if (*(long *)(lVar19 + 0x358) != 0) {
        auVar27 = FUN_019c338c();
        lVar10 = FUN_019c33ec(auVar27._0_8_,auVar27._8_8_,param_1[0x38],param_1[0x39]);
        if (*(long *)(lVar19 + 0x358) <= lVar10) {
          FUN_019ca0fc(lVar19,"Time-out");
          bVar6 = false;
          iVar7 = 0x1c;
        }
      }
      iVar8 = FUN_019c3f38(param_1);
    } while (iVar8 == 0);
    iVar7 = 0x2a;
LAB_019d6d78:
    FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return iVar7;
}




undefined8 FUN_019d6de0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  if (lVar1 != 0) {
    FUN_019c1dcc(*(undefined8 *)(lVar1 + 0x1cb0));
    *(undefined8 *)(lVar1 + 0x1cb0) = 0;
    if (*(long *)(*param_1 + 0x218) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(*param_1 + 0x218) = 0;
    }
  }
  return 0;
}




undefined8 FUN_019d6e3c(long param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_68;
  undefined2 local_64;
  long local_60;
  char local_54 [4];
  
  do {
    if (param_3 == 0) {
      return 0;
    }
    local_54[0] = *param_2;
    param_3 = param_3 + -1;
    if (local_54[0] == -1) {
      lVar3 = 2;
      local_54[1] = 0xff;
    }
    else {
      lVar3 = 1;
    }
    lVar4 = 0;
    do {
      local_68 = *(undefined4 *)(param_1 + 0x1d0);
      local_64 = 4;
      iVar1 = FUN_019c1700(&local_68,1,0xffffffff);
      if (iVar1 + 1U < 2) {
        return 0x37;
      }
      local_60 = 0;
      uVar2 = FUN_019ca368(param_1,*(undefined4 *)(param_1 + 0x1d0),local_54 + lVar4,lVar3 - lVar4,
                           &local_60);
      lVar4 = local_60 + lVar4;
    } while ((lVar4 < lVar3) && ((int)uVar2 == 0));
    param_2 = param_2 + 1;
  } while ((int)uVar2 == 0);
  return uVar2;
}




void FUN_019d6f24(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x520) == '\0') {
    return;
  }
  puVar1 = &DAT_01e2398f;
  switch(param_3) {
  case 0xfb:
    break;
  case 0xfc:
    puVar1 = &DAT_01e23994;
    break;
  case 0xfd:
    puVar1 = &DAT_01e23999;
    break;
  case 0xfe:
    puVar1 = &DAT_01e2399c;
    break;
  case 0xff:
    if (0x13 < param_4 - 0xecU) {
      FUN_019c9f64(param_1,"%s IAC %d\n",param_2,param_4);
      return;
    }
    FUN_019c9f64(param_1,"%s IAC %s\n",param_2,
                 *(undefined8 *)(&DAT_02bb0128 + (long)(int)(param_4 - 0xecU) * 8));
    return;
  default:
    FUN_019c9f64(param_1,"%s %d %d\n",param_2);
    return;
  }
  if (param_4 < 0x28) {
    pcVar2 = (&PTR_s_BINARY_02bb01c8)[param_4];
  }
  else {
    if (param_4 != 0xff) {
      FUN_019c9f64(param_1,"%s %s %d\n",param_2,puVar1);
      return;
    }
    pcVar2 = "EXOPL";
  }
  FUN_019c9f64(param_1,"%s %s %s\n",param_2,puVar1,pcVar2);
  return;
}

