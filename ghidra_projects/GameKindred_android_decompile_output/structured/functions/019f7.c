// functions/019f7 — 8 functions
#include "libGameKindred.h"




void FUN_019f72e8(long param_1)

{
  if (param_1 != 0) {
    FUN_019f7414();
    (*(code *)PTR_free_02bf74b0)(param_1);
    return;
  }
  return;
}




bool FUN_019f7320(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = strchr(param_1,0xd);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strchr(param_1,10);
    bVar1 = pcVar2 != (char *)0x0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




void * FUN_019f7364(void)

{
  void *__s;
  
  __s = (void *)(*(code *)PTR_malloc_02bf74a8)(0x80);
  if (__s != (void *)0x0) {
    memset(__s,0,0x80);
  }
  return __s;
}




void FUN_019f73ac(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x68) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_2 + 0x68) = 0;
    }
    (*(code *)PTR_free_02bf74b0)(param_2);
    return;
  }
  return;
}




void FUN_019f73fc(void)

{
  (*(code *)PTR_calloc_02bf74c8)(1,0x58);
  return;
}




void FUN_019f7414(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  *param_1 = 0;
  return;
}




undefined4 FUN_019f744c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




ulong FUN_019f7454(byte *param_1,long param_2,long param_3,long *param_4)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  void *pvVar8;
  size_t __n;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar22;
  char *pcVar23;
  int *piVar24;
  char *local_a8;
  uint uVar21;
  
  uVar14 = param_3 * param_2;
  piVar24 = (int *)**(undefined8 **)(*param_4 + 0x8b50);
  if (piVar24[3] == 0) {
    if ((uVar14 == 0) || (*piVar24 != 0)) {
      if (uVar14 == 0) {
        return 0;
      }
    }
    else {
      iVar5 = 1;
      if (*param_1 < 0x3a) {
        iVar5 = 2;
      }
      if (*param_1 < 0x30) {
        iVar5 = 1;
      }
      *piVar24 = iVar5;
    }
    uVar16 = 0;
    puVar1 = (uint *)(piVar24 + 6);
    piVar2 = piVar24 + 2;
    do {
      lVar15 = *(long *)(piVar24 + 4);
      bVar3 = param_1[uVar16];
      if (lVar15 == 0) {
        lVar15 = FUN_019f7364();
        *(long *)(piVar24 + 4) = lVar15;
        if (lVar15 == 0) {
          piVar24[3] = 0x1b;
          return uVar14;
        }
        lVar6 = (*(code *)PTR_malloc_02bf74a8)(0xa0);
        lVar15 = *(long *)(piVar24 + 4);
        plVar18 = (long *)(lVar15 + 0x68);
        *plVar18 = lVar6;
        if (lVar6 == 0) {
          lVar15 = **(long **)(*param_4 + 0x8b50);
          if (*(long *)(lVar15 + 0x10) != 0) {
            FUN_019f73ac(0);
          }
          uVar9 = 0x1b;
          goto LAB_019f8220;
        }
        plVar17 = (long *)(lVar15 + 0x70);
        *plVar17 = 0xa0;
        piVar24[8] = 0;
        piVar24[9] = 0;
        piVar24[6] = 0;
      }
      else {
        plVar18 = (long *)(lVar15 + 0x68);
        lVar6 = *plVar18;
        plVar17 = (long *)(lVar15 + 0x70);
      }
      lVar10 = *(long *)(lVar15 + 0x78);
      *(long *)(lVar15 + 0x78) = lVar10 + 1;
      *(byte *)(lVar6 + lVar10) = bVar3;
      if (*(long *)(lVar15 + 0x70) - 1U <= *(ulong *)(lVar15 + 0x78)) {
        lVar6 = (*(code *)PTR_realloc_02bf74b8)(*plVar18,*(long *)(lVar15 + 0x70) + 0xa0);
        if (lVar6 == 0) {
          FUN_019f73ac(0,*(undefined8 *)(piVar24 + 4));
          piVar24[4] = 0;
          piVar24[5] = 0;
          piVar24[3] = 0x1b;
          lVar15 = **(long **)(*param_4 + 0x8b50);
          if (*(long *)(lVar15 + 0x10) != 0) {
            FUN_019f73ac(0);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          *(undefined4 *)(lVar15 + 0xc) = 0x1b;
          return uVar14;
        }
        *plVar17 = *plVar17 + 0xa0;
        *plVar18 = lVar6;
      }
      uVar13 = (uint)bVar3;
      uVar20 = (uint)bVar3;
      uVar21 = (uint)bVar3;
      if (*piVar24 == 2) {
        switch(piVar24[1]) {
        case 0:
          uVar13 = *puVar1 + 1;
          *puVar1 = uVar13;
          if (uVar13 < 9) {
            if (uVar21 < 0x40) {
              pvVar8 = (void *)(1L << ((ulong)bVar3 & 0x3f) & 0x3ff200000000001);
              goto joined_r0x019f76c8;
            }
          }
          else if ((uVar13 == 9) && (uVar21 == 0x20)) {
            piVar24[1] = 1;
            piVar24[2] = 0;
            break;
          }
          goto LAB_019f81cc;
        case 1:
          uVar13 = *puVar1;
          *puVar1 = uVar13 + 1;
          if (*piVar2 == 1) {
            if (uVar21 != 0x20) {
              __n = 0xf;
              pcVar23 = "APM0123456789:";
              goto LAB_019f7b14;
            }
            *(long *)(piVar24 + 0x10) = *(long *)(piVar24 + 8);
            *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar13 + 1) + -1) = 0;
            piVar24[1] = 2;
            piVar24[2] = 0;
            piVar24[6] = 0;
            break;
          }
          if ((*piVar2 != 0) || (iVar5 = isspace(uVar21), iVar5 != 0)) break;
          goto LAB_019f7e24;
        case 2:
          iVar5 = *piVar2;
          if (iVar5 != 1) goto LAB_019f79e8;
          uVar13 = *puVar1;
          *puVar1 = uVar13 + 1;
          if (uVar21 == 0x20) {
            *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar13 + 1) + -1) = 0;
            lVar6 = *plVar18;
            lVar10 = *(long *)(piVar24 + 8);
            iVar5 = strcmp("<DIR>",(char *)(lVar6 + lVar10));
            if (iVar5 == 0) {
              *(undefined4 *)(lVar15 + 8) = 1;
              *(undefined8 *)(lVar15 + 0x28) = 0;
              lVar15 = *(long *)(piVar24 + 4);
            }
            else {
              lVar6 = strtol((char *)(lVar6 + lVar10),&local_a8,10);
              *(long *)(lVar15 + 0x28) = lVar6;
              if ((*local_a8 != '\0') ||
                 ((lVar6 + 0x8000000000000001U < 2 && (piVar7 = (int *)__errno(), *piVar7 == 0x22)))
                 ) goto LAB_019f81cc;
              lVar15 = *(long *)(piVar24 + 4);
              *(undefined4 *)(lVar15 + 8) = 0;
            }
            *(uint *)(lVar15 + 0x60) = *(uint *)(lVar15 + 0x60) | 0x40;
LAB_019f8128:
            piVar24[6] = 0;
            piVar24[1] = 3;
            piVar24[2] = 0;
          }
          break;
        case 3:
          iVar5 = *piVar2;
          if (iVar5 == 2) {
            if (bVar3 != 10) goto LAB_019f81cc;
LAB_019f7c68:
            *(undefined8 *)(piVar24 + 10) = *(undefined8 *)(piVar24 + 8);
            iVar5 = FUN_019f8260(param_4,lVar15);
            if (iVar5 != 0) goto LAB_019f822c;
            piVar24[1] = 0;
            piVar24[2] = 0;
          }
          else {
            if (iVar5 != 1) goto LAB_019f79e8;
            *puVar1 = *puVar1 + 1;
            if (uVar21 == 10) {
              *(undefined1 *)(*plVar18 + *(long *)(lVar15 + 0x78) + -1) = 0;
              goto LAB_019f7c68;
            }
            if (uVar21 == 0xd) {
              *piVar2 = 2;
              *(undefined1 *)(*plVar18 + *(long *)(lVar15 + 0x78) + -1) = 0;
            }
          }
        }
        goto switchD_019f7640_default;
      }
      if (*piVar24 != 1) {
        return uVar14 + 1;
      }
      if (9 < (uint)piVar24[1]) goto switchD_019f7640_default;
      uVar22 = (uint)bVar3;
      switch(piVar24[1]) {
      case 0:
        if (*piVar2 == 1) {
          uVar13 = *puVar1;
          *puVar1 = uVar13 + 1;
          if (uVar20 == 10) {
            *(undefined1 *)(*plVar18 + (ulong)uVar13) = 0;
            pcVar23 = (char *)*plVar18;
            iVar5 = strncmp("total ",pcVar23,6);
            if (iVar5 == 0) {
              pbVar19 = (byte *)(pcVar23 + 5);
              pbVar4 = (byte *)(pcVar23 + 7);
              do {
                pbVar12 = pbVar4;
                pbVar19 = pbVar19 + 1;
                bVar3 = *pbVar19;
                iVar5 = isspace((uint)bVar3);
                pbVar4 = pbVar12 + 1;
              } while (iVar5 != 0);
              while (bVar3 - 0x30 < 10) {
                bVar3 = *pbVar12;
                pbVar12 = pbVar12 + 1;
              }
              if (bVar3 == 0) goto LAB_019f7f08;
            }
            goto LAB_019f81cc;
          }
          if (uVar20 == 0xd) {
            *puVar1 = uVar13;
            *(long *)(lVar15 + 0x78) = *(long *)(lVar15 + 0x78) + -1;
          }
        }
        else if (*piVar2 == 0) {
          if (uVar13 == 0x74) {
            *piVar2 = 1;
            *puVar1 = *puVar1 + 1;
          }
          else {
            uVar16 = uVar16 - 1;
LAB_019f7f08:
            piVar24[1] = 1;
            *(undefined8 *)(lVar15 + 0x78) = 0;
          }
        }
        break;
      case 1:
        if (uVar21 == 99 || bVar3 < 99) {
          if (uVar21 == 0x61 || bVar3 < 0x61) {
            uVar9 = 0;
            if (uVar20 != 0x2d) {
              if (uVar20 != 0x44) goto LAB_019f81cc;
              uVar9 = 7;
            }
          }
          else if (uVar20 == 0x62) {
            uVar9 = 3;
          }
          else {
            if (uVar20 != 99) goto LAB_019f81cc;
            uVar9 = 4;
          }
        }
        else if (uVar21 == 0x6f || bVar3 < 0x6f) {
          if (uVar21 == 100) {
            uVar9 = 1;
          }
          else {
            if (uVar21 != 0x6c) goto LAB_019f81cc;
            uVar9 = 2;
          }
        }
        else if (uVar21 == 0x70) {
          uVar9 = 5;
        }
        else {
          if (uVar21 != 0x73) goto LAB_019f81cc;
          uVar9 = 6;
        }
        *(undefined4 *)(lVar15 + 8) = uVar9;
        piVar24[1] = 2;
        lVar15 = 1;
        piVar24[6] = 0;
LAB_019f7db4:
        *(long *)(piVar24 + 8) = lVar15;
        break;
      case 2:
        uVar21 = *puVar1 + 1;
        *puVar1 = uVar21;
        if (uVar21 < 10) {
          __n = 9;
          pcVar23 = "rwx-tTsS";
LAB_019f7b14:
          pvVar8 = memchr(pcVar23,uVar20,__n);
joined_r0x019f76c8:
          if (pvVar8 == (void *)0x0) goto LAB_019f81cc;
        }
        else if (uVar21 == 10) {
          if (uVar13 == 0x20) {
            *(undefined1 *)(*plVar18 + 10) = 0;
            lVar15 = *(long *)(piVar24 + 8);
            pcVar23 = (char *)(*plVar18 + lVar15);
            uVar13 = 0;
            if (*pcVar23 != '-') {
              uVar13 = 0x1000000;
            }
            uVar20 = 0x100;
            if (*pcVar23 != 'r') {
              uVar20 = uVar13;
            }
            if (pcVar23[1] != '-') {
              if (pcVar23[1] == 'w') {
                uVar20 = uVar20 | 0x80;
              }
              else {
                uVar20 = uVar20 | 0x1000000;
              }
            }
            bVar3 = pcVar23[2];
            if (bVar3 < 0x73) {
              if (bVar3 != 0x2d) {
                if (bVar3 == 0x53) {
                  uVar20 = uVar20 | 0x800;
                }
                else {
LAB_019f7fe4:
                  uVar20 = uVar20 | 0x1000000;
                }
              }
            }
            else if (bVar3 == 0x73) {
              uVar20 = uVar20 | 0x840;
            }
            else {
              if (bVar3 != 0x78) goto LAB_019f7fe4;
              uVar20 = uVar20 | 0x40;
            }
            if (pcVar23[3] != '-') {
              if (pcVar23[3] == 'r') {
                uVar20 = uVar20 | 0x20;
              }
              else {
                uVar20 = uVar20 | 0x1000000;
              }
            }
            if (pcVar23[4] != '-') {
              if (pcVar23[4] == 'w') {
                uVar20 = uVar20 | 0x10;
              }
              else {
                uVar20 = uVar20 | 0x1000000;
              }
            }
            bVar3 = pcVar23[5];
            if (bVar3 < 0x73) {
              if (bVar3 != 0x2d) {
                if (bVar3 == 0x53) {
                  uVar20 = uVar20 | 0x400;
                }
                else {
LAB_019f8070:
                  uVar20 = uVar20 | 0x1000000;
                }
              }
            }
            else if (bVar3 == 0x73) {
              uVar20 = uVar20 | 0x408;
            }
            else {
              if (bVar3 != 0x78) goto LAB_019f8070;
              uVar20 = uVar20 | 8;
            }
            if (pcVar23[6] != '-') {
              if (pcVar23[6] == 'r') {
                uVar20 = uVar20 | 4;
              }
              else {
                uVar20 = uVar20 | 0x1000000;
              }
            }
            if (pcVar23[7] != '-') {
              if (pcVar23[7] == 'w') {
                uVar20 = uVar20 | 2;
              }
              else {
                uVar20 = uVar20 | 0x1000000;
              }
            }
            bVar3 = pcVar23[8];
            if (bVar3 < 0x74) {
              uVar13 = uVar20;
              if (bVar3 != 0x2d) {
                if (bVar3 == 0x54) {
                  uVar13 = uVar20 | 0x200;
                }
                else {
LAB_019f8108:
                  uVar13 = uVar20 | 0x1000000;
                  uVar20 = uVar13;
                }
              }
            }
            else if (bVar3 == 0x74) {
              uVar13 = uVar20 | 0x201;
            }
            else {
              if (bVar3 != 0x78) goto LAB_019f8108;
              uVar13 = uVar20 | 1;
            }
            if (uVar20 >> 0x18 == 0) {
              lVar6 = *(long *)(piVar24 + 4);
              *(uint *)(lVar6 + 0x18) = uVar13;
              *(uint *)(lVar6 + 0x60) = *(uint *)(lVar6 + 0x60) | 8;
              *(long *)(piVar24 + 0x12) = lVar15;
              goto LAB_019f8128;
            }
          }
          goto LAB_019f81cc;
        }
        break;
      case 3:
        iVar5 = *piVar2;
        if (iVar5 == 1) {
          uVar20 = *puVar1;
          *puVar1 = uVar20 + 1;
          if (uVar22 == 0x20) {
            *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar20 + 1) + -1) = 0;
            lVar15 = strtol((char *)(*plVar18 + *(long *)(piVar24 + 8)),&local_a8,10);
            if ((1 < lVar15 + 0x8000000000000001U) && (*local_a8 == '\0')) {
              lVar6 = *(long *)(piVar24 + 4);
              *(long *)(lVar6 + 0x30) = lVar15;
              *(uint *)(lVar6 + 0x60) = *(uint *)(lVar6 + 0x60) | 0x80;
            }
            piVar24[6] = 0;
            piVar24[8] = 0;
            piVar24[9] = 0;
            piVar24[1] = 4;
            piVar24[2] = 0;
          }
          else {
LAB_019f7bd4:
            if (9 < uVar13 - 0x30) goto LAB_019f81cc;
          }
        }
        else {
LAB_019f7980:
          if ((iVar5 == 0) && (uVar21 != 0x20)) {
            if (uVar21 - 0x30 < 10) goto LAB_019f79f4;
            goto LAB_019f81cc;
          }
        }
        break;
      case 4:
        iVar5 = *piVar2;
        if (iVar5 == 1) {
          uVar13 = *puVar1;
          *puVar1 = uVar13 + 1;
          if (uVar22 == 0x20) {
            *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar13 + 1) + -1) = 0;
            uVar11 = *(undefined8 *)(piVar24 + 8);
            piVar24[1] = 5;
            piVar24[2] = 0;
            piVar24[8] = 0;
            piVar24[9] = 0;
            piVar24[6] = 0;
            *(undefined8 *)(piVar24 + 0xc) = uVar11;
          }
        }
        else {
LAB_019f79e8:
          if (iVar5 == 0) goto switchD_019f7a28_caseD_0;
        }
        break;
      case 5:
        iVar5 = *piVar2;
        if (iVar5 != 1) goto LAB_019f79e8;
        uVar13 = *puVar1;
        *puVar1 = uVar13 + 1;
        if (uVar22 == 0x20) {
          *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar13 + 1) + -1) = 0;
          uVar11 = *(undefined8 *)(piVar24 + 8);
          piVar24[1] = 6;
          piVar24[2] = 0;
          piVar24[8] = 0;
          piVar24[9] = 0;
          piVar24[6] = 0;
          *(undefined8 *)(piVar24 + 0xe) = uVar11;
        }
        break;
      case 6:
        iVar5 = *piVar2;
        if (iVar5 != 1) goto LAB_019f7980;
        uVar20 = *puVar1;
        *puVar1 = uVar20 + 1;
        if (uVar22 != 0x20) goto LAB_019f7bd4;
        *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar20 + 1) + -1) = 0;
        lVar15 = strtol((char *)(*plVar18 + *(long *)(piVar24 + 8)),&local_a8,10);
        if ((1 < lVar15 + 0x8000000000000001U) && (*local_a8 == '\0')) {
          lVar6 = *(long *)(piVar24 + 4);
          *(long *)(lVar6 + 0x28) = lVar15;
          *(uint *)(lVar6 + 0x60) = *(uint *)(lVar6 + 0x60) | 0x40;
        }
        piVar24[6] = 0;
        piVar24[8] = 0;
        piVar24[9] = 0;
        piVar24[1] = 7;
        piVar24[2] = 0;
        break;
      case 7:
        switch(*piVar2) {
        case 0:
          if (uVar21 != 0x20) {
            iVar5 = isalnum(uVar21);
            if (iVar5 == 0) goto LAB_019f81cc;
            goto LAB_019f79f4;
          }
          break;
        case 1:
          *puVar1 = *puVar1 + 1;
          if (uVar22 != 0x20) goto LAB_019f7ce4;
LAB_019f7ca4:
          iVar5 = 2;
LAB_019f7e7c:
          *piVar2 = iVar5;
          break;
        case 2:
          *puVar1 = *puVar1 + 1;
          if (uVar22 != 0x20) {
            iVar5 = isalnum(uVar22);
            if (iVar5 != 0) goto LAB_019f7ddc;
            goto LAB_019f81cc;
          }
          break;
        case 3:
          *puVar1 = *puVar1 + 1;
          if (uVar22 == 0x20) {
LAB_019f7df8:
            iVar5 = 4;
            goto LAB_019f7e7c;
          }
LAB_019f7ce4:
          iVar5 = isalnum(uVar21);
          if ((uVar21 != 0x2e) && (iVar5 == 0)) goto LAB_019f81cc;
          break;
        case 4:
          *puVar1 = *puVar1 + 1;
          if (uVar22 != 0x20) {
            iVar5 = isalnum(uVar22);
            if (iVar5 != 0) {
              iVar5 = 5;
              goto LAB_019f7e7c;
            }
            goto LAB_019f81cc;
          }
          break;
        case 5:
          uVar13 = *puVar1;
          *puVar1 = uVar13 + 1;
          if (uVar22 == 0x20) {
            *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar13 + 1) + -1) = 0;
            *(undefined8 *)(piVar24 + 0x10) = *(undefined8 *)(piVar24 + 8);
            if (*(int *)(lVar15 + 8) == 2) {
              piVar24[1] = 9;
              piVar24[2] = 0;
            }
            else {
              piVar24[1] = 8;
              piVar24[2] = 0;
            }
          }
          else {
            iVar5 = isalnum(uVar22);
            if (((iVar5 == 0) && (uVar22 != 0x2e)) && (uVar22 != 0x3a)) goto LAB_019f81cc;
          }
        }
        break;
      case 8:
        iVar5 = *piVar2;
        if (iVar5 == 2) {
          if (uVar22 != 10) goto LAB_019f81cc;
          *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uint)piVar24[6]) = 0;
        }
        else {
          if (iVar5 != 1) goto LAB_019f79e8;
          uVar20 = *puVar1;
          uVar13 = uVar20 + 1;
          *puVar1 = uVar13;
          if (uVar22 != 10) {
            if (uVar22 == 0xd) {
              *puVar1 = uVar20;
              goto LAB_019f7ca4;
            }
            break;
          }
          *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)uVar13 + -1) = 0;
        }
        *(undefined8 *)(piVar24 + 10) = *(undefined8 *)(piVar24 + 8);
        piVar24[1] = 1;
        iVar5 = FUN_019f8260(param_4,lVar15);
        if (iVar5 != 0) goto LAB_019f822c;
        break;
      case 9:
        switch(*piVar2) {
        case 0:
switchD_019f7a28_caseD_0:
          if (uVar13 != 0x20) {
LAB_019f79f4:
            lVar15 = *(long *)(lVar15 + 0x78);
            piVar24[6] = 1;
            piVar24[2] = 1;
LAB_019f7a04:
            lVar15 = lVar15 + -1;
            goto LAB_019f7db4;
          }
          break;
        case 1:
          *puVar1 = *puVar1 + 1;
          if (uVar21 == 0x20) goto LAB_019f7ca4;
          if ((uVar21 == 10) || (uVar22 == 0xd)) goto LAB_019f81cc;
          break;
        case 2:
          *puVar1 = *puVar1 + 1;
          if (uVar22 == 0x2d) {
LAB_019f7ddc:
            iVar5 = 3;
            goto LAB_019f7e7c;
          }
          goto LAB_019f7e14;
        case 3:
          *puVar1 = *puVar1 + 1;
          if (uVar22 == 0x3e) goto LAB_019f7df8;
LAB_019f7e14:
          if ((uVar21 == 10) || (uVar21 == 0xd)) goto LAB_019f81cc;
LAB_019f7e24:
          *piVar2 = 1;
          break;
        case 4:
          uVar13 = *puVar1;
          *puVar1 = uVar13 + 1;
          if (uVar22 != 0x20) goto LAB_019f7e14;
          piVar24[2] = 5;
          *(undefined1 *)(*plVar18 + *(long *)(piVar24 + 8) + (ulong)(uVar13 + 1) + -4) = 0;
          uVar11 = *(undefined8 *)(piVar24 + 8);
          piVar24[6] = 0;
          piVar24[8] = 0;
          piVar24[9] = 0;
          *(undefined8 *)(piVar24 + 10) = uVar11;
          break;
        case 5:
          if ((uVar22 != 10) && (uVar22 != 0xd)) {
            piVar24[2] = 6;
            lVar15 = *(long *)(lVar15 + 0x78);
            piVar24[6] = 1;
            goto LAB_019f7a04;
          }
          goto LAB_019f81cc;
        case 6:
          uVar20 = *puVar1;
          uVar13 = uVar20 + 1;
          *puVar1 = uVar13;
          if (uVar22 == 10) {
            lVar10 = *plVar18;
            lVar6 = *(long *)(piVar24 + 8) + (ulong)uVar13;
LAB_019f8140:
            *(undefined1 *)(lVar10 + lVar6 + -1) = 0;
            *(undefined8 *)(piVar24 + 0x14) = *(undefined8 *)(piVar24 + 8);
            iVar5 = FUN_019f8260(param_4,lVar15);
            if (iVar5 != 0) {
LAB_019f822c:
              lVar15 = **(long **)(*param_4 + 0x8b50);
              if (*(long *)(lVar15 + 0x10) != 0) {
                FUN_019f73ac(0);
              }
              *(undefined8 *)(lVar15 + 0x10) = 0;
              *(int *)(lVar15 + 0xc) = iVar5;
              return uVar14;
            }
            piVar24[1] = 1;
          }
          else if (uVar22 == 0xd) {
            *puVar1 = uVar20;
            iVar5 = 7;
            goto LAB_019f7e7c;
          }
          break;
        case 7:
          if (uVar22 == 10) {
            lVar10 = *plVar18;
            lVar6 = *(long *)(piVar24 + 8) + (ulong)(uint)piVar24[6];
            goto LAB_019f8140;
          }
LAB_019f81cc:
          lVar15 = **(long **)(*param_4 + 0x8b50);
          if (*(long *)(lVar15 + 0x10) != 0) {
            FUN_019f73ac(0);
          }
          uVar9 = 0x57;
LAB_019f8220:
          *(undefined8 *)(lVar15 + 0x10) = 0;
          *(undefined4 *)(lVar15 + 0xc) = uVar9;
          return uVar14;
        }
      }
switchD_019f7640_default:
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar14);
  }
  return uVar14;
}

