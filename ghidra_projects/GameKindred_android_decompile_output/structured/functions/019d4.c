// functions/019d4 — 9 functions
#include "libGameKindred.h"




bool FUN_019d444c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_120 [256];
  
  iVar1 = FUN_019d4488(2,param_2,param_1,auStack_120,0x100);
  return iVar1 != 0;
}




undefined8
FUN_019d4488(int param_1,undefined8 param_2,char *param_3,char *param_4,socklen_t param_5)

{
  size_t __n;
  int __fd;
  int iVar1;
  size_t sVar2;
  undefined1 uStack_78;
  undefined1 auStack_77 [15];
  ushort local_68;
  undefined4 local_64;
  undefined4 local_48 [2];
  
  if ((((param_1 == 2) && (param_3 != (char *)0x0)) && (sVar2 = strlen(param_3), sVar2 < 0x10)) &&
     (__fd = socket(2,1,0), __fd != -1)) {
    __n = 0;
    if (sVar2 + 1 < 0x28) {
      __n = 0x27 - sVar2;
    }
    memset(auStack_77 + sVar2,0,__n);
    memcpy(&uStack_78,param_3,sVar2 + 1);
    local_68 = 2;
    iVar1 = ioctl(__fd,0x8915,&uStack_78);
    if (-1 < iVar1) {
      local_48[0] = local_64;
      inet_ntop((uint)local_68,local_48,param_4,param_5);
      close(__fd);
      return 2;
    }
    close(__fd);
  }
  return 0;
}




void FUN_019d4598(long param_1)

{
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined8 *)(param_1 + 0x910) = 0;
  return;
}




undefined8 FUN_019d45a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((((*(long *)(param_1 + 0x7c8) < 0) || (*(long *)(param_1 + 0x390) == 0)) ||
      (lVar1 = FUN_019c345c(*(undefined8 *)(param_1 + 0x910),*(undefined8 *)(param_1 + 0x918)),
      lVar1 == 0)) || (*(long *)(param_1 + 0x388) <= *(long *)(param_1 + 0x7c8))) {
    *(undefined8 *)(param_1 + 0x910) = param_2;
    *(undefined8 *)(param_1 + 0x918) = param_3;
    if (*(long *)(param_1 + 0x388) == 0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x390) * 1000;
  }
  else {
    lVar1 = FUN_019c33ec(param_2,param_3,*(undefined8 *)(param_1 + 0x910),
                         *(undefined8 *)(param_1 + 0x918));
    lVar1 = *(long *)(param_1 + 0x390) * 1000 - lVar1;
    if (lVar1 < 1) {
      FUN_019ca0fc(param_1,
                   "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds",
                   *(undefined8 *)(param_1 + 0x388));
      return 0x1c;
    }
  }
  FUN_019c0bd8(param_1,lVar1);
  return 0;
}




undefined8 FUN_019d4670(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = (*(code *)PTR_strdup_02bf74c0)();
    return uVar2;
  }
  return 0;
}




undefined8 FUN_019d4834(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  iVar1 = FUN_019d4890(param_1,param_2,(long)param_3,&local_18,&local_28,0);
  uVar3 = 0;
  if ((iVar1 == 0) && (uVar3 = local_18, param_4 != (undefined4 *)0x0)) {
    uVar2 = FUN_019c1e80(local_28);
    *param_4 = uVar2;
    uVar3 = local_18;
  }
  return uVar3;
}




undefined8
FUN_019d4890(undefined8 param_1,byte *param_2,size_t param_3,long *param_4,long *param_5,
            uint param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcStack_70;
  byte local_64;
  byte local_63;
  undefined1 local_62;
  
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  lVar4 = (*(code *)PTR_malloc_02bf74a8)(param_3 + 1);
  if (lVar4 == 0) {
    uVar5 = 0x1b;
  }
  else {
    if (param_3 == 0) {
      lVar6 = 0;
    }
    else {
      uVar9 = param_3 + 1;
      lVar10 = 0;
      do {
        uVar8 = param_3;
        bVar2 = *param_2;
        if ((uVar8 < 3) || (bVar2 != 0x25)) {
LAB_019d495c:
          if ((bVar2 < 0x20) && ((param_6 & 1) != 0)) {
            (*(code *)PTR_free_02bf74b0)(lVar4);
            return 3;
          }
          param_2 = param_2 + 1;
        }
        else {
          pbVar7 = param_2 + 1;
          bVar2 = *pbVar7;
          iVar3 = isxdigit((uint)bVar2);
          if (iVar3 != 0) {
            param_2 = param_2 + 2;
            bVar1 = *param_2;
            iVar3 = isxdigit((uint)bVar1);
            if (iVar3 != 0) {
              local_62 = 0;
              local_64 = bVar2;
              local_63 = bVar1;
              strtoul((char *)&local_64,&pcStack_70,0x10);
              bVar2 = FUN_019c1e6c();
              uVar8 = uVar9 - 3;
              goto LAB_019d495c;
            }
          }
          bVar2 = 0x25;
          param_2 = pbVar7;
        }
        lVar6 = lVar10 + 1;
        *(byte *)(lVar4 + lVar10) = bVar2;
        param_3 = uVar8 - 1;
        uVar9 = uVar8;
        lVar10 = lVar6;
      } while (uVar8 - 1 != 0);
    }
    *(undefined1 *)(lVar4 + lVar6) = 0;
    if (param_5 != (long *)0x0) {
      *param_5 = lVar6;
    }
    uVar5 = 0;
    *param_4 = lVar4;
  }
  return uVar5;
}




void FUN_019d4a10(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  long lStack_20;
  long local_18;
  
  lStack_20 = 0;
  uStack_38 = param_4[3];
  local_40 = param_4[2];
  uStack_48 = param_4[1];
  local_50 = *param_4;
  local_28 = param_1;
  local_18 = param_2;
  FUN_019d4a70(&local_28,&LAB_019d5b8c,param_3,&local_50);
  if (local_18 != 0) {
    *(undefined1 *)(local_28 - (ulong)(local_18 == lStack_20)) = 0;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

uint FUN_019d4a70(undefined8 param_1,code *param_2,byte *param_3,undefined8 *param_4)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  size_t *psVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  size_t *psVar23;
  long *plVar24;
  size_t *psVar25;
  long lVar26;
  size_t sVar27;
  size_t sVar28;
  char *pcVar29;
  uint uVar30;
  ulong unaff_x22;
  size_t sVar31;
  size_t sVar32;
  char *pcVar33;
  ulong uVar34;
  long lVar35;
  char *local_15b0;
  long local_1598;
  undefined8 local_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  byte *local_1568 [31];
  char local_146a [2];
  long alStack_1468 [128];
  int local_1068;
  undefined1 local_1064 [8];
  undefined1 auStack_105c [8];
  undefined4 uStack_1054;
  size_t sStack_1050;
  size_t asStack_1048 [509];
  
  psVar13 = (size_t *)*param_4;
  lVar35 = param_4[1];
  lVar26 = param_4[2];
  iVar4 = *(int *)(param_4 + 3);
  iVar5 = *(int *)((long)param_4 + 0x1c);
  bVar7 = *param_3;
  local_1568[0] = param_3;
  if (bVar7 != 0) {
    uVar34 = 0;
    iVar22 = 0;
    plVar24 = (long *)(local_146a + 2);
    pbVar15 = param_3;
LAB_019d4ae4:
    pbVar16 = pbVar15 + 1;
LAB_019d4af0:
    local_1568[0] = pbVar16;
    pbVar15 = pbVar15 + 2;
    if (bVar7 != 0x25) goto LAB_019d4ff0;
    if (*local_1568[0] == 0x25) goto code_r0x019d4b08;
    uVar30 = *local_1568[0] - 0x30;
    iVar22 = iVar22 + 1;
    iVar19 = iVar22;
    if (uVar30 < 10) {
      iVar9 = 0;
      do {
        pbVar16 = pbVar15 + 1;
        bVar7 = *pbVar15;
        iVar9 = uVar30 + iVar9 * 10;
        uVar30 = bVar7 - 0x30;
        pbVar15 = pbVar16;
      } while (uVar30 < 10);
      if ((iVar9 != 0) && (bVar7 == 0x24)) {
        iVar19 = iVar9;
        local_1568[0] = pbVar16;
      }
    }
    unaff_x22 = 0;
    uVar30 = 0;
    uVar11 = (long)iVar19;
    if ((long)iVar19 <= (long)uVar34) {
      uVar11 = uVar34;
    }
    local_15b0 = (char *)0x0;
    uVar34 = uVar11;
    while( true ) {
      pbVar15 = local_1568[0];
      bVar7 = *local_1568[0];
      uVar14 = (uint)bVar7;
      uVar20 = uVar14 - 0x20;
      if (((0x2f < uVar20) || ((1L << ((ulong)uVar20 & 0x3f) & 0x900003ff6c09U) == 0)) &&
         ((0x12 < uVar14 - 0x68 || ((1 << (ulong)(uVar14 - 0x68 & 0x1f) & 0x40211U) == 0)))) break;
      pbVar16 = local_1568[0] + 1;
      uVar11 = uVar34;
      if (bVar7 < 0x4c) {
        switch((ulong)uVar20) {
        case 0:
          uVar30 = uVar30 | 1;
          break;
        case 3:
          uVar30 = uVar30 | 8;
          break;
        case 10:
          uVar30 = uVar30 | 0x4000;
          uVar20 = *pbVar16 - 0x30;
          iVar22 = iVar22 + 1;
          iVar9 = iVar22;
          if (uVar20 < 10) {
            iVar10 = 0;
            pbVar15 = local_1568[0] + 2;
            do {
              pbVar17 = pbVar15 + 1;
              bVar7 = *pbVar15;
              iVar10 = uVar20 + iVar10 * 10;
              uVar20 = bVar7 - 0x30;
              pbVar15 = pbVar17;
            } while (uVar20 < 10);
            if ((iVar10 != 0) && (bVar7 == 0x24)) {
              iVar9 = iVar10;
              pbVar16 = pbVar17;
            }
          }
          local_1568[0] = pbVar16;
          unaff_x22 = (ulong)iVar9;
          uVar11 = unaff_x22;
          pbVar16 = local_1568[0];
          if ((long)iVar9 <= (long)uVar34) {
            uVar11 = uVar34;
          }
          break;
        case 0xb:
          uVar30 = uVar30 | 2;
          break;
        case 0xd:
          uVar30 = uVar30 & 0xfffffeff | 4;
          break;
        case 0xe:
          if (*pbVar16 == 0x2a) {
            pbVar15 = local_1568[0] + 2;
            uVar30 = uVar30 | 0x18000;
            uVar20 = local_1568[0][2] - 0x30;
            iVar22 = iVar22 + 1;
            iVar9 = iVar22;
            if (uVar20 < 10) {
              iVar10 = 0;
              pbVar16 = local_1568[0] + 3;
              do {
                pbVar17 = pbVar16 + 1;
                bVar7 = *pbVar16;
                iVar10 = uVar20 + iVar10 * 10;
                uVar20 = bVar7 - 0x30;
                pbVar16 = pbVar17;
              } while (uVar20 < 10);
              if ((iVar10 != 0) && (bVar7 == 0x24)) {
                iVar9 = iVar10;
                pbVar15 = pbVar17;
              }
            }
            local_1568[0] = pbVar15;
            local_15b0 = (char *)(long)iVar9;
            uVar11 = (ulong)local_15b0;
            pbVar16 = local_1568[0];
            if ((long)iVar9 <= (long)uVar34) {
              uVar11 = uVar34;
            }
          }
          else {
            uVar30 = uVar30 | 0x8000;
            local_1568[0] = pbVar16;
            local_15b0 = (char *)strtol((char *)pbVar16,(char **)local_1568,10);
            pbVar16 = local_1568[0];
          }
          break;
        case 0x10:
          uVar30 = (uVar30 << 6 ^ 0xffffffff) & 0x100 | uVar30;
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
          uVar30 = uVar30 | 0x2000;
          local_1568[0] = pbVar16;
          unaff_x22 = strtol((char *)pbVar15,(char **)local_1568,10);
          pbVar16 = local_1568[0];
        }
      }
      else if (uVar14 == 0x6b || bVar7 < 0x6b) {
        if (bVar7 == 0x4c) {
          uVar30 = uVar30 | 0x80;
        }
        else {
          if (bVar7 == 0x4f) goto LAB_019d4cf0;
          if (bVar7 == 0x68) {
            uVar30 = uVar30 | 0x10;
          }
        }
      }
      else {
        if (uVar14 == 0x6c) {
          if ((uVar30 >> 5 & 1) != 0) goto LAB_019d4cf8;
        }
        else {
          if (uVar14 == 0x71) {
LAB_019d4cf8:
            uVar30 = uVar30 | 0x40;
            goto switchD_019d4d58_caseD_1;
          }
          if (uVar14 != 0x7a) goto switchD_019d4d58_caseD_1;
        }
LAB_019d4cf0:
        uVar30 = uVar30 | 0x20;
      }
switchD_019d4d58_caseD_1:
      local_1568[0] = pbVar16;
      uVar34 = uVar11;
    }
    uVar11 = (long)iVar19 - 1;
    if (uVar14 < 0x58) {
      if (bVar7 == 0x45) {
        (&local_1068)[uVar11 * 8] = 7;
        uVar20 = 0x41000;
        goto LAB_019d4f60;
      }
      if (bVar7 != 0x47) {
        if (bVar7 == 0x53) {
          uVar30 = uVar30 | 8;
          goto switchD_019d4df0_caseD_73;
        }
        goto switchD_019d4df0_caseD_68;
      }
      (&local_1068)[uVar11 * 8] = 7;
      uVar30 = uVar30 | 0x81000;
      goto LAB_019d4f64;
    }
    switch(bVar7) {
    case 99:
      (&local_1068)[uVar11 * 8] = 3;
      uVar30 = uVar30 | 0x20000;
      break;
    case 100:
    case 0x69:
      iVar19 = 3;
      goto LAB_019d4f2c;
    case 0x65:
      (&local_1068)[uVar11 * 8] = 7;
      uVar30 = uVar30 | 0x40000;
      break;
    case 0x66:
      iVar19 = 7;
      goto LAB_019d4f2c;
    case 0x67:
      (&local_1068)[uVar11 * 8] = 7;
      uVar30 = uVar30 | 0x80000;
      break;
    case 0x68:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      goto switchD_019d4df0_caseD_68;
    case 0x6e:
      iVar19 = 4;
      goto LAB_019d4f2c;
    case 0x6f:
      (&local_1068)[uVar11 * 8] = 3;
      uVar30 = uVar30 | 0x400;
      break;
    case 0x70:
      iVar19 = 2;
LAB_019d4f2c:
      (&local_1068)[uVar11 * 8] = iVar19;
      break;
    case 0x73:
switchD_019d4df0_caseD_73:
      (&local_1068)[uVar11 * 8] = 1;
      break;
    case 0x75:
      (&local_1068)[uVar11 * 8] = 3;
      uVar30 = uVar30 | 0x200;
      break;
    case 0x78:
      (&local_1068)[uVar11 * 8] = 3;
      uVar20 = 0xa00;
LAB_019d4f60:
      uVar30 = uVar30 | uVar20;
      break;
    default:
      if (bVar7 == 0x58) {
        (&local_1068)[uVar11 * 8] = 3;
        uVar20 = 0x1a00;
        goto LAB_019d4f60;
      }
      goto switchD_019d4df0_caseD_68;
    }
    goto LAB_019d4f64;
  }
LAB_019d51b8:
  local_1598 = 0;
  pcVar2 = local_146a + 1;
  local_15b0 = "0123456789abcdefghijklmnopqrstuvwxyz";
  pcVar33 = local_146a + 2;
  uVar30 = 0;
  do {
    while( true ) {
      while (bVar7 = *param_3, bVar7 != 0x25) {
        if (bVar7 == 0) {
          return uVar30;
        }
        do {
          iVar4 = (*param_2)(bVar7,param_1);
          if (iVar4 == -1) {
            return uVar30;
          }
          param_3 = param_3 + 1;
          bVar7 = *param_3;
          uVar30 = uVar30 + 1;
        } while ((bVar7 != 0) && (bVar7 != 0x25));
      }
      if (param_3[1] != 0x25) break;
      iVar4 = (*param_2)(0x25,param_1);
      uVar20 = uVar30;
      if (iVar4 != -1) {
        uVar20 = uVar30 + 1;
        uVar30 = (uint)unaff_x22;
      }
      unaff_x22 = (ulong)uVar30;
      if (iVar4 == -1) {
        return uVar30;
      }
      param_3 = param_3 + 2;
      uVar30 = uVar20;
    }
    uVar20 = param_3[1] - 0x30;
    lVar35 = local_1598;
    if (uVar20 < 10) {
      iVar4 = 0;
      pbVar15 = param_3 + 2;
      do {
        bVar7 = *pbVar15;
        iVar4 = uVar20 + iVar4 * 10;
        uVar20 = bVar7 - 0x30;
        pbVar15 = pbVar15 + 1;
      } while (uVar20 < 10);
      if ((iVar4 != 0) && (bVar7 == 0x24)) {
        lVar35 = (long)iVar4 + -1;
      }
    }
    sVar32 = *(size_t *)(local_1064 + lVar35 * 0x20 + 4);
    uVar20 = *(uint *)(local_1064 + lVar35 * 0x20);
    sVar27 = sVar32;
    if ((uVar20 >> 0xe & 1) != 0) {
      sVar27 = asStack_1048[sVar32 * 4 + -1];
    }
    if ((uVar20 >> 0x10 & 1) == 0) {
      local_1598 = local_1598 + 1;
      if ((uVar20 >> 0xf & 1) == 0) {
        sVar31 = 0xffffffffffffffff;
      }
      else {
        sVar31 = *(size_t *)(auStack_105c + lVar35 * 0x20 + 4);
      }
    }
    else {
      sVar31 = asStack_1048[*(long *)(auStack_105c + lVar35 * 0x20 + 4) * 4 + -1];
      local_1598 = local_1598 + 2;
    }
    if ((&local_1068)[lVar35 * 8] - 1U < 7) {
      puVar12 = (uint *)((ulong)(&local_1068 + lVar35 * 8) | 4);
      switch((&local_1068)[lVar35 * 8]) {
      case 1:
        pcVar29 = (char *)asStack_1048[lVar35 * 4 + -1];
        if (pcVar29 == (char *)0x0) {
          if ((sVar31 == 0xffffffffffffffff) || (4 < (long)sVar31)) {
            uVar20 = uVar20 & 0xfffffff7;
            pcVar29 = "(nil)";
            *puVar12 = uVar20;
            sVar31 = 5;
          }
          else {
            sVar31 = 0;
            pcVar29 = "";
          }
        }
        else if (sVar31 == 0xffffffffffffffff) {
          sVar31 = strlen(pcVar29);
        }
        if ((uVar20 >> 3 & 1) != 0) {
          iVar4 = (*param_2)(0x22,param_1);
          if (iVar4 == -1) {
            return uVar30;
          }
          uVar30 = uVar30 + 1;
          uVar20 = *puVar12;
        }
        lVar35 = sVar27 - sVar31;
        if ((uVar20 >> 2 & 1) == 0) {
          while (bVar1 = 0 < lVar35, lVar35 = lVar35 + -1, bVar1) {
            iVar4 = (*param_2)(0x20,param_1);
            if (iVar4 == -1) {
              return uVar30;
            }
            uVar30 = uVar30 + 1;
          }
        }
        for (; (sVar31 != 0 && (*pcVar29 != '\0')); pcVar29 = pcVar29 + 1) {
          iVar4 = (*param_2)(*pcVar29,param_1);
          if (iVar4 == -1) {
            return uVar30;
          }
          sVar31 = sVar31 - 1;
          uVar30 = uVar30 + 1;
        }
        uVar20 = *puVar12;
        if (((uVar20 >> 2 & 1) != 0) && (0 < lVar35)) {
          lVar35 = lVar35 + 1;
          do {
            iVar4 = (*param_2)(0x20,param_1);
            if (iVar4 == -1) {
              return uVar30;
            }
            lVar35 = lVar35 + -1;
            uVar30 = uVar30 + 1;
          } while (1 < lVar35);
          uVar20 = *puVar12;
        }
        if ((uVar20 >> 3 & 1) != 0) {
          iVar4 = (*param_2)(0x22,param_1);
          if (iVar4 == -1) {
            return uVar30;
          }
          uVar30 = uVar30 + 1;
        }
        break;
      case 2:
        sVar32 = asStack_1048[lVar35 * 4 + -1];
        if (sVar32 == 0) {
          if ((uVar20 >> 2 & 1) == 0) {
            lVar35 = sVar27 - 5;
          }
          else {
            lVar35 = sVar27 - 6;
            lVar26 = lVar35;
            if (5 < (long)sVar27) {
              do {
                iVar4 = (*param_2)(0x20,param_1);
                if (iVar4 == -1) {
                  return uVar30;
                }
                lVar35 = lVar26 + -1;
                uVar30 = uVar30 + 1;
                bVar1 = 0 < lVar26;
                lVar26 = lVar35;
              } while (bVar1);
            }
          }
          pcVar29 = "(nil)";
          cVar8 = '(';
          do {
            pcVar29 = pcVar29 + 1;
            iVar4 = (*param_2)(cVar8,param_1);
            if (iVar4 == -1) {
              return uVar30;
            }
            cVar8 = *pcVar29;
            uVar30 = uVar30 + 1;
          } while (cVar8 != '\0');
          if (((*puVar12 >> 2 & 1) == 0) && (0 < lVar35)) {
            iVar4 = 0;
            lVar35 = lVar35 + 1;
            do {
              iVar5 = (*param_2)(0x20,param_1);
              if (iVar5 == -1) {
                return uVar30 - iVar4;
              }
              lVar35 = lVar35 + -1;
              iVar4 = iVar4 + -1;
            } while (1 < lVar35);
            uVar30 = uVar30 - iVar4;
          }
        }
        else {
          uVar14 = 1;
LAB_019d5388:
          uVar21 = 0;
          local_15b0 = "0123456789abcdefghijklmnopqrstuvwxyz";
          if ((uVar20 & 0x1000) != 0) {
            local_15b0 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          }
          uVar34 = 0x10;
LAB_019d585c:
          if (sVar31 == 0xffffffffffffffff) {
            sVar31 = 1;
          }
          lVar35 = 0;
          pcVar29 = pcVar2;
          if (sVar32 != 0) {
            do {
              uVar11 = 0;
              if (uVar34 != 0) {
                uVar11 = sVar32 / uVar34;
              }
              pcVar2[lVar35] = local_15b0[sVar32 - uVar11 * uVar34];
              lVar35 = lVar35 + -1;
              bVar1 = uVar34 <= sVar32;
              sVar32 = uVar11;
            } while (bVar1);
            pcVar29 = pcVar2 + lVar35;
          }
          lVar26 = lVar35 + sVar27;
          uVar11 = lVar35 + sVar31;
          if (((uVar14 == 0) || (uVar34 != 8)) || (0 < (long)uVar11)) {
            if (0 < (long)uVar11) {
              uVar3 = 0xfffffffffffffffe;
              if (-2 < (long)~uVar11) {
                uVar3 = ~uVar11;
              }
              memset(local_146a + -(sVar31 + uVar3),0x30,sVar31 + lVar35 + uVar3 + 2);
              do {
                lVar35 = lVar35 + -1;
              } while (1 < (long)(sVar31 + lVar35 + 1));
              lVar26 = lVar26 - uVar11;
            }
          }
          else {
            lVar35 = lVar35 + -1;
            *pcVar29 = '0';
            lVar26 = lVar26 + -1;
          }
          lVar18 = lVar26 + -2;
          if (uVar14 == 0 || uVar34 != 0x10) {
            lVar18 = lVar26;
          }
          lVar18 = lVar18 - (ulong)(uVar21 != 0 || (uVar20 & 3) != 0);
          if ((uVar20 & 0x104) == 0) {
            lVar26 = lVar18 + -1;
            if (0 < lVar18) {
              do {
                iVar4 = (*param_2)(0x20,param_1);
                if (iVar4 == -1) {
                  return uVar30;
                }
                lVar18 = lVar26 + -1;
                uVar30 = uVar30 + 1;
                bVar1 = 0 < lVar26;
                lVar26 = lVar18;
              } while (bVar1);
              goto LAB_019d5974;
            }
            if (uVar21 != 0) goto LAB_019d5978;
LAB_019d59dc:
            if ((*puVar12 >> 1 & 1) != 0) {
              iVar4 = (*param_2)(0x2b,param_1);
LAB_019d5a14:
              if (iVar4 == -1) {
                return uVar30;
              }
              goto LAB_019d5a1c;
            }
            if ((*puVar12 & 1) != 0) {
              iVar4 = (*param_2)(0x20,param_1);
              goto LAB_019d5a14;
            }
          }
          else {
LAB_019d5974:
            lVar26 = lVar18;
            if (uVar21 == 0) goto LAB_019d59dc;
LAB_019d5978:
            iVar4 = (*param_2)(0x2d,param_1);
            if (iVar4 == -1) {
              return uVar30;
            }
LAB_019d5a1c:
            uVar30 = uVar30 + 1;
          }
          if (uVar14 != 0 && uVar34 == 0x10) {
            iVar4 = (*param_2)(0x30,param_1);
            if (iVar4 == -1) {
              return uVar30;
            }
            if ((*(byte *)((long)puVar12 + 1) >> 4 & 1) == 0) {
              uVar6 = 0x78;
            }
            else {
              uVar6 = 0x58;
            }
            iVar4 = (*param_2)(uVar6,param_1);
            if (iVar4 == -1) {
              return uVar30 + 1;
            }
            uVar30 = uVar30 + 2;
          }
          lVar18 = lVar26;
          if (((*puVar12 & 0x104) == 0x100) && (lVar18 = lVar26 + -1, 0 < lVar26)) {
            do {
              lVar18 = lVar26;
              iVar4 = (*param_2)(0x30,param_1);
              if (iVar4 == -1) {
                return uVar30;
              }
              lVar26 = lVar18 + -1;
              uVar30 = uVar30 + 1;
            } while (0 < lVar26);
            lVar18 = lVar18 + -2;
          }
          if (lVar35 < 0) {
            lVar35 = lVar35 + 0x100;
            do {
              iVar4 = (*param_2)(*(undefined1 *)((long)local_1568 + lVar35),param_1);
              if (iVar4 == -1) {
                return uVar30;
              }
              lVar26 = lVar35 + -0x100;
              lVar35 = lVar35 + 1;
              uVar30 = uVar30 + 1;
            } while (lVar26 < -1);
          }
          if (((*puVar12 >> 2 & 1) != 0) && (0 < lVar18)) {
            lVar18 = lVar18 + 1;
            do {
              iVar4 = (*param_2)(0x20,param_1);
              if (iVar4 == -1) {
                return uVar30;
              }
              lVar18 = lVar18 + -1;
              uVar30 = uVar30 + 1;
            } while (1 < lVar18);
          }
        }
        break;
      case 3:
        sVar32 = asStack_1048[lVar35 * 4 + -1];
        if ((uVar20 >> 0x11 & 1) == 0) {
          uVar14 = uVar20 >> 3 & 1;
          if ((uVar20 >> 10 & 1) == 0) {
            if ((uVar20 >> 0xb & 1) != 0) goto LAB_019d5388;
            if ((uVar20 >> 9 & 1) == 0) {
              uVar21 = (uint)(sVar32 >> 0x3f);
              sVar28 = -sVar32;
              if (-1 < (long)sVar32) {
                sVar28 = sVar32;
              }
            }
            else {
              uVar21 = 0;
              sVar28 = sVar32;
            }
            uVar34 = 10;
            sVar32 = sVar28;
          }
          else {
            uVar21 = 0;
            uVar34 = 8;
          }
          goto LAB_019d585c;
        }
        if ((uVar20 >> 2 & 1) == 0) {
          sVar31 = sVar27;
          if ((long)sVar27 < 2) {
            sVar27 = sVar27 - 1;
          }
          else {
            do {
              iVar4 = (*param_2)(0x20,param_1);
              if (iVar4 == -1) {
                return uVar30;
              }
              sVar28 = sVar31 - 1;
              sVar27 = sVar31 - 2;
              uVar30 = uVar30 + 1;
              sVar31 = sVar28;
            } while (sVar27 != 0 && 0 < (long)sVar28);
          }
        }
        iVar4 = (*param_2)((uint)sVar32 & 0xff,param_1);
        if (iVar4 == -1) {
          return uVar30;
        }
        uVar30 = uVar30 + 1;
        if (((*puVar12 >> 2 & 1) != 0) && (1 < (long)sVar27)) {
          lVar35 = sVar27 + 1;
          do {
            iVar4 = (*param_2)(0x20,param_1);
            if (iVar4 == -1) {
              return uVar30;
            }
            lVar35 = lVar35 + -1;
            uVar30 = uVar30 + 1;
          } while (2 < lVar35);
        }
        break;
      case 4:
        if (((uVar20 >> 6 & 1) == 0) && ((uVar20 >> 5 & 1) == 0)) {
          if ((uVar20 >> 4 & 1) == 0) {
            *(uint *)asStack_1048[lVar35 * 4 + -1] = uVar30;
          }
          else {
            *(short *)asStack_1048[lVar35 * 4 + -1] = (short)uVar30;
          }
        }
        else {
          *(long *)asStack_1048[lVar35 * 4 + -1] = (long)(int)uVar30;
        }
        break;
      case 7:
        uStack_1588 = 0;
        local_1590 = 0x25;
        uStack_1578 = 0;
        uStack_1580 = 0;
        sVar31 = strlen((char *)&local_1590);
        sVar27 = sVar32;
        if ((uVar20 & 0x2000) == 0) {
          sVar27 = 0xffffffffffffffff;
        }
        if ((uVar20 & 0x6000) == 0x4000) {
          sVar27 = asStack_1048[sVar32 * 4 + -1];
        }
        if ((uVar20 >> 0xf & 1) == 0) {
          if ((uVar20 >> 0x10 & 1) != 0) {
            psVar13 = asStack_1048 + *(long *)(auStack_105c + lVar35 * 0x20 + 4) * 4 + -1;
            goto LAB_019d54e4;
          }
          sVar32 = 0xffffffffffffffff;
        }
        else {
          psVar13 = (size_t *)(auStack_105c + lVar35 * 0x20 + 4);
LAB_019d54e4:
          sVar32 = *psVar13;
        }
        pbVar15 = (byte *)((ulong)&local_1590 | 1);
        if ((uVar20 >> 2 & 1) != 0) {
          local_1590._0_2_ = CONCAT11(0x2d,(char)local_1590);
          pbVar15 = (byte *)((ulong)&local_1590 | 2);
        }
        if ((uVar20 >> 1 & 1) != 0) {
          *pbVar15 = 0x2b;
          pbVar15 = pbVar15 + 1;
        }
        pbVar16 = pbVar15;
        if ((uVar20 & 1) != 0) {
          pbVar16 = pbVar15 + 1;
          *pbVar15 = 0x20;
          uVar20 = *puVar12;
        }
        lVar26 = 0x20 - sVar31;
        pbVar15 = pbVar16;
        if ((uVar20 >> 3 & 1) != 0) {
          pbVar15 = pbVar16 + 1;
          *pbVar16 = 0x23;
        }
        *pbVar15 = 0;
        if (-1 < (long)sVar27) {
          iVar4 = FUN_019d5bc0(pbVar15,lVar26,"%ld");
          pbVar15 = pbVar15 + iVar4;
          lVar26 = lVar26 - iVar4;
        }
        if (-1 < (long)sVar32) {
          iVar4 = FUN_019d5bc0(pbVar15,lVar26,&DAT_01e23840,sVar32);
          pbVar15 = pbVar15 + iVar4;
        }
        uVar20 = *puVar12;
        pbVar16 = pbVar15;
        if ((uVar20 >> 5 & 1) != 0) {
          uVar20 = *puVar12;
          pbVar16 = pbVar15 + 1;
          *pbVar15 = 0x6c;
        }
        if ((uVar20 >> 0x12 & 1) == 0) {
          if ((uVar20 >> 0x13 & 1) != 0) {
            bVar7 = 0x67;
            goto LAB_019d55c8;
          }
          bVar7 = 0x66;
        }
        else {
          bVar7 = 0x65;
LAB_019d55c8:
          bVar7 = (byte)(uVar20 >> 7) & 0x20 ^ bVar7;
        }
        sVar27 = asStack_1048[lVar35 * 4 + -1];
        *pbVar16 = bVar7;
        pbVar16[1] = 0;
        sprintf((char *)local_1568,(char *)&local_1590,sVar27);
        pcVar29 = (char *)((ulong)local_1568 | 1);
        cVar8 = (char)local_1568[0];
        while (cVar8 != '\0') {
          iVar4 = (*param_2)(cVar8,param_1);
          if (iVar4 == -1) {
            return uVar30;
          }
          uVar30 = uVar30 + 1;
          cVar8 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        }
      }
    }
    param_3 = *(byte **)pcVar33;
    pcVar33 = pcVar33 + 8;
  } while( true );
code_r0x019d4b08:
  bVar7 = local_1568[0][1];
  pbVar16 = local_1568[0] + 2;
  if (bVar7 == 0) {
    local_1568[0] = local_1568[0] + 1;
    goto LAB_019d5004;
  }
  goto LAB_019d4af0;
switchD_019d4df0_caseD_68:
  (&local_1068)[uVar11 * 8] = 0;
LAB_019d4f64:
  lVar18 = uVar11 * 0x20;
  *(uint *)(local_1064 + lVar18) = uVar30;
  *(ulong *)(local_1064 + lVar18 + 4) = unaff_x22;
  *(char **)(auStack_105c + lVar18 + 4) = local_15b0;
  if ((uVar30 >> 0xe & 1) != 0) {
    uVar11 = unaff_x22 - 1;
    *(ulong *)(local_1064 + lVar18 + 4) = uVar11;
    (&local_1068)[uVar11 * 8] = 9;
    *(undefined8 *)(auStack_105c + uVar11 * 0x20) = 0;
    *(undefined8 *)(local_1064 + uVar11 * 0x20) = 0;
    (&uStack_1054)[uVar11 * 8] = 0;
  }
  if ((uVar30 >> 0x10 & 1) != 0) {
    lVar18 = (long)local_15b0 - 1;
    *(long *)(auStack_105c + uVar11 * 0x20 + 4) = lVar18;
    (&local_1068)[lVar18 * 8] = 9;
    *(undefined8 *)(auStack_105c + lVar18 * 0x20) = 0;
    *(undefined8 *)(local_1064 + lVar18 * 0x20) = 0;
    (&uStack_1054)[lVar18 * 8] = 0;
  }
  *plVar24 = (long)(local_1568[0] + 1);
  plVar24 = plVar24 + 1;
LAB_019d4ff0:
  bVar7 = *local_1568[0];
  pbVar15 = local_1568[0];
  if (bVar7 == 0) {
LAB_019d5004:
    if ((long)uVar34 < 1) goto LAB_019d51b8;
    uVar11 = 0;
    psVar23 = asStack_1048;
    do {
      uVar11 = uVar11 + 1;
      psVar25 = psVar13;
      if (((long)uVar11 < (long)uVar34) && ((int)*psVar23 == 9)) {
        iVar22 = iVar4;
        if ((iVar4 < 0) && (iVar22 = iVar4 + 8, iVar22 < 1)) {
          psVar13 = (size_t *)(lVar35 + iVar4);
          iVar4 = iVar22;
        }
        else {
          psVar25 = psVar13 + 1;
          iVar4 = iVar22;
        }
        psVar23[3] = (long)(int)(uint)*psVar13;
      }
      psVar13 = psVar25;
      switch((int)psVar23[-4]) {
      case 0:
      case 1:
      case 2:
      case 4:
switchD_019d517c_caseD_0:
        iVar22 = iVar4;
        if ((iVar4 < 0) && (iVar22 = iVar4 + 8, iVar22 < 1)) {
          psVar25 = (size_t *)(lVar35 + iVar4);
        }
        else {
          psVar13 = psVar25 + 1;
        }
        sVar27 = *psVar25;
        iVar4 = iVar22;
        goto LAB_019d51a0;
      case 3:
        uVar30 = *(uint *)((long)psVar23 + -0x1c);
        if ((((((uVar30 ^ 0xffffffff) & 0x240) == 0) || ((uVar30 >> 6 & 1) != 0)) ||
            (((uVar30 ^ 0xffffffff) & 0x220) == 0)) || ((uVar30 >> 5 & 1) != 0))
        goto switchD_019d517c_caseD_0;
        if ((uVar30 >> 9 & 1) == 0) {
          iVar22 = iVar4;
          if ((iVar4 < 0) && (iVar22 = iVar4 + 8, iVar22 < 1)) {
            psVar25 = (size_t *)(lVar35 + iVar4);
          }
          else {
            psVar13 = psVar25 + 1;
          }
          sVar27 = (size_t)(int)(uint)*psVar25;
          iVar4 = iVar22;
        }
        else {
          iVar22 = iVar4;
          if ((iVar4 < 0) && (iVar22 = iVar4 + 8, iVar22 < 1)) {
            psVar25 = (size_t *)(lVar35 + iVar4);
            iVar4 = iVar22;
          }
          else {
            psVar13 = psVar25 + 1;
            iVar4 = iVar22;
          }
          sVar27 = (size_t)(uint)*psVar25;
        }
LAB_019d51a0:
        psVar23[-1] = sVar27;
        break;
      case 7:
        iVar22 = iVar5;
        if ((iVar5 < 0) && (iVar22 = iVar5 + 0x10, iVar22 < 1)) {
          psVar25 = (size_t *)(lVar26 + iVar5);
          iVar5 = iVar22;
        }
        else {
          psVar13 = psVar25 + 1;
          iVar5 = iVar22;
        }
        psVar23[-1] = *psVar25;
        break;
      case 9:
        *(int *)(psVar23 + -4) = 3;
      }
      psVar23 = psVar23 + 4;
    } while (uVar34 != uVar11);
    goto LAB_019d51b8;
  }
  goto LAB_019d4ae4;
}

