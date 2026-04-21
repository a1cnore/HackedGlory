// functions/019dc — 14 functions
#include "libGameKindred.h"




undefined8 FUN_019dc02c(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}




undefined8 FUN_019dc04c(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_1[1]);
  (*(code *)PTR_free_02bf74b0)(param_1[1]);
  (*(code *)PTR_free_02bf74b0)(param_1);
  return 0;
}




bool FUN_019dc0a0(void)

{
  int iVar1;
  
  if (DAT_02bf74d0 == -1) {
    iVar1 = socket(10,2,0);
    if (iVar1 == -1) {
      DAT_02bf74d0 = 0;
    }
    else {
      DAT_02bf74d0 = 1;
      FUN_019bd51c(0,iVar1);
    }
  }
  return 0 < DAT_02bf74d0;
}




undefined8 FUN_019dc10c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x330) == 2) {
    uVar1 = FUN_019dc0a0();
    return uVar1;
  }
  return 1;
}




undefined8 FUN_019dc124(undefined8 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_114 [128];
  undefined1 auStack_94 [12];
  undefined8 local_88;
  long local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar4 = *param_1;
  *param_4 = 0;
  uVar3 = 2;
  if (param_1[0x66] != 1) {
    uVar3 = 10;
    if (param_1[0x66] != 2) {
      uVar3 = 0;
    }
    uVar2 = FUN_019dc0a0();
    if ((uVar2 & 1) == 0) {
      uVar3 = 2;
    }
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_80 = (ulong)uVar3 << 0x20;
  uStack_78 = (ulong)*(uint *)((long)param_1 + 0xac);
  iVar1 = inet_pton(2,param_2,auStack_114);
  if ((iVar1 == 1) || (iVar1 = inet_pton(10,param_2,auStack_114), iVar1 == 1)) {
    local_80 = CONCAT44(local_80._4_4_,4);
  }
  if (param_3 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = auStack_94;
    FUN_019d5bc0(auStack_94,0xc,&DAT_01bb6d43,param_3);
  }
  iVar1 = FUN_019e2590(param_2,puVar5,&local_80,&local_88);
  if (iVar1 != 0) {
    FUN_019c9f64(uVar4,"getaddrinfo(3) failed for %s:%d\n",param_2,param_3);
    local_88 = 0;
  }
  return local_88;
}




undefined8 FUN_019dc250(void)

{
  return 4;
}




undefined8 FUN_019dc258(void)

{
  return 4;
}




undefined8 FUN_019dc260(void)

{
  return 4;
}




undefined8 FUN_019dc268(void)

{
  return 4;
}




long FUN_019dc270(byte *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  size_t sVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  byte *__s;
  byte *pbVar16;
  int iVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  uint local_94;
  byte *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_6c;
  undefined8 local_68;
  
  iVar9 = -1;
  local_68 = 0xffffffffffffffff;
  local_6c = -1;
  uVar13 = (uint)*param_1;
  if (*param_1 != 0) {
    uVar15 = 0;
    lVar14 = 0xffffffff;
    uVar20 = 0xffffffff;
    uVar19 = 0xffffffff;
    iVar17 = -1;
    bVar8 = false;
    local_94 = 0xffffffff;
    __s = param_1;
LAB_019dc2d4:
    do {
      pbVar16 = __s + 1;
      iVar9 = isalnum(uVar13);
      if (iVar9 == 0) {
        uVar13 = (uint)*pbVar16;
        __s = pbVar16;
        if (uVar13 != 0) goto LAB_019dc2d4;
      }
      bVar4 = *__s;
      iVar9 = isalpha((uint)bVar4);
      if (iVar9 == 0) {
        if (bVar4 - 0x30 < 10) {
          if (local_6c == -1) {
            iVar9 = sscanf((char *)__s,"%02d:%02d:%02d",(long)&local_68 + 4,&local_68,&local_6c);
            if (iVar9 == 3) {
              __s = __s + 8;
            }
            else {
              if ((local_6c != -1) ||
                 (iVar9 = sscanf((char *)__s,"%02d:%02d",(long)&local_68 + 4,&local_68), iVar9 != 2)
                 ) goto LAB_019dc348;
              __s = __s + 5;
              local_6c = 0;
            }
          }
          else {
LAB_019dc348:
            piVar11 = (int *)__errno();
            iVar9 = *piVar11;
            *piVar11 = 0;
            lVar12 = strtol((char *)__s,(char **)&local_90,10);
            iVar3 = *piVar11;
            if (iVar3 != iVar9) {
              *piVar11 = iVar9;
            }
            if (iVar3 != 0) {
              return -1;
            }
            if (lVar12 + 0x80000000U >> 0x20 != 0) {
              return -1;
            }
            uVar13 = FUN_019c1e90();
            if ((((iVar17 == -1) && (iVar17 = -1, param_1 < __s)) && ((int)uVar13 < 0x579)) &&
               ((long)local_90 - (long)__s == 4)) {
              bVar4 = __s[-1];
              if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
                iVar9 = uVar13 + ((int)uVar13 / 100) * -0x28;
                iVar17 = iVar9 * -0x3c;
                if (bVar4 != 0x2b) {
                  iVar17 = iVar9 * 0x3c;
                }
                bVar7 = true;
              }
              else {
                bVar7 = false;
                iVar17 = -1;
              }
            }
            else {
              if (((local_94 == 0xffffffff) && ((uVar19 & (uint)uVar20) == 0xffffffff)) &&
                 ((long)local_90 - (long)__s == 8)) {
                uVar19 = (int)uVar13 / 10000;
                uVar20 = (ulong)(((int)uVar13 % 10000) / 100 - 1);
                local_94 = (int)uVar13 % 100;
                __s = local_90;
                goto LAB_019dc650;
              }
              bVar7 = false;
            }
            if (((local_94 == 0xffffffff) && (!bVar8)) && (!bVar7)) {
              bVar7 = uVar13 - 1 < 0x1f;
              local_94 = uVar13;
              if (!bVar7) {
                local_94 = 0xffffffff;
              }
              bVar8 = true;
            }
            if (((uVar19 != 0xffffffff) || (!bVar8)) || (bVar7)) {
              __s = local_90;
              if (!bVar7) {
                return -1;
              }
            }
            else {
              uVar19 = uVar13;
              if ((int)uVar13 < 0x76c) {
                if ((int)uVar13 < 0x47) {
                  uVar19 = uVar13 + 2000;
                }
                else {
                  uVar19 = uVar13 + 0x76c;
                }
              }
              bVar8 = local_94 != 0xffffffff;
              __s = local_90;
            }
          }
        }
      }
      else {
        uStack_88 = 0;
        local_90 = (byte *)0x0;
        uStack_78 = 0;
        uStack_80 = 0;
        iVar9 = sscanf((char *)__s,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",
                       &local_90);
        if (iVar9 == 0) {
          sVar10 = 0;
        }
        else {
          sVar10 = strlen((char *)&local_90);
        }
        if ((int)lVar14 == -1) {
          lVar14 = 0;
          ppuVar1 = &PTR_s_Monday_02bb0420;
          if (sVar10 < 4) {
            ppuVar1 = &PTR_DAT_02bb0388;
          }
          do {
            iVar9 = FUN_019e23a8(&local_90,ppuVar1[lVar14]);
            if (iVar9 != 0) goto LAB_019dc4d8;
            lVar14 = lVar14 + 1;
          } while ((uint)lVar14 < 7);
          lVar14 = 0xffffffff;
        }
        if ((uint)uVar20 == 0xffffffff) {
          uVar20 = 0;
          do {
            iVar9 = FUN_019e23a8(&local_90,(&PTR_DAT_02bb03c0)[uVar20]);
            if (iVar9 != 0) goto LAB_019dc4d8;
            uVar20 = uVar20 + 1;
          } while ((uint)uVar20 < 0xc);
          uVar20 = 0xffffffff;
        }
        if (iVar17 != -1) {
          return -1;
        }
        uVar13 = 0;
        puVar18 = &DAT_01e24730;
        while (iVar9 = FUN_019e23a8(&local_90,puVar18), iVar9 == 0) {
          uVar13 = uVar13 + 1;
          puVar18 = puVar18 + 0xc;
          if (0x43 < uVar13) {
            return -1;
          }
        }
        iVar17 = *(int *)(puVar18 + 8) * 0x3c;
LAB_019dc4d8:
        __s = __s + sVar10;
      }
LAB_019dc650:
      iVar9 = (int)uVar20;
      uVar15 = uVar15 + 1;
      if ((5 < uVar15) || (uVar13 = (uint)*__s, uVar13 == 0)) goto LAB_019dc664;
    } while( true );
  }
  local_94 = 0xffffffff;
  uVar19 = 0xffffffff;
  iVar17 = -1;
LAB_019dc6a8:
  local_6c = 0;
  local_68 = 0;
LAB_019dc6b4:
  lVar14 = -1;
  if (((((uVar19 != 0xffffffff) && (iVar9 != -1)) && (local_94 != 0xffffffff)) &&
      (((lVar14 = 0, 0x7b1 < (int)uVar19 && (lVar14 = -1, local_6c < 0x3d)) &&
       ((iVar9 < 0xc && (((int)local_94 < 0x20 && (local_68._4_4_ < 0x18)))))))) &&
     ((int)local_68 < 0x3c)) {
    iVar3 = iVar9;
    if (iVar9 < 0) {
      uVar19 = (0xb - iVar9) / 0xc + uVar19;
      iVar3 = 0xb - (0xb - iVar9) % 0xc;
    }
    iVar5 = uVar19 - (iVar9 < 2);
    iVar9 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar9 = iVar5;
    }
    iVar6 = (int)((ulong)((long)iVar5 * -0x51eb851f) >> 0x20);
    lVar12 = ((long)(int)local_68 +
             ((long)local_68._4_4_ +
             ((long)*(int *)(&DAT_01e24a60 + (long)iVar3 * 4) + (long)(int)local_94 +
              (long)(int)(uVar19 - 0x7b2) * 0x16d +
             (long)(((iVar6 >> 5) - (iVar6 >> 0x1f)) + (iVar9 >> 2) + iVar5 / 400 + -0x1dd)) * 0x18)
             * 0x3c) * 0x3c + (long)local_6c + -0x15180;
    lVar14 = lVar12;
    if ((int)lVar12 != -1) {
      lVar2 = 0;
      if (iVar17 != -1) {
        lVar2 = (long)iVar17;
      }
      lVar14 = 0x7fffffff;
      if (lVar12 <= 0x7fffffffffffffff - lVar2 || lVar2 < 1) {
        lVar14 = lVar12 + lVar2;
      }
    }
  }
  return lVar14;
LAB_019dc664:
  if (local_6c != -1) goto LAB_019dc6b4;
  goto LAB_019dc6a8;
}




undefined4 FUN_019dc820(time_t param_1,tm *param_2)

{
  tm *ptVar1;
  undefined4 uVar2;
  time_t local_18;
  
  local_18 = param_1;
  ptVar1 = gmtime_r(&local_18,param_2);
  uVar2 = 0x2b;
  if (ptVar1 != (tm *)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_019dc850(long *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *(undefined4 *)((long)param_1 + 0xac) = 2;
  pcVar2 = strstr(*(char **)(lVar4 + 0x8ae8),";mode=");
  if ((pcVar2 != (char *)0x0) ||
     (pcVar2 = strstr((char *)param_1[0x16],";mode="), pcVar2 != (char *)0x0)) {
    *pcVar2 = '\0';
    cVar1 = FUN_019e22b8(pcVar2[6]);
    uVar3 = 1;
    if ((cVar1 != 'A') && (cVar1 != 'N')) {
      uVar3 = 0;
    }
    *(undefined1 *)(lVar4 + 0x50b) = uVar3;
  }
  return 0;
}




undefined8 FUN_019dc9b8(long *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_02bf74c8)(1,0x170);
  param_1[0xa9] = (long)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
LAB_019dcac4:
    uVar3 = 0x1b;
  }
  else {
    lVar4 = *(long *)(*param_1 + 0x378);
    if (lVar4 == 0) {
      lVar4 = 0x200;
    }
    else if (0xffb0 < (int)lVar4 - 8U) {
      return 0x47;
    }
    iVar1 = (int)lVar4;
    if (*(long *)(puVar2 + 0x58) == 0) {
      lVar4 = (*(code *)PTR_calloc_02bf74c8)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x58) = lVar4;
      if (lVar4 == 0) goto LAB_019dcac4;
    }
    if (*(long *)(puVar2 + 0x5a) == 0) {
      lVar4 = (*(code *)PTR_calloc_02bf74c8)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x5a) = lVar4;
      if (lVar4 == 0) goto LAB_019dcac4;
    }
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(long **)(puVar2 + 4) = param_1;
    lVar4 = param_1[0x3a];
    *puVar2 = 0;
    puVar2[2] = 0xffffff9c;
    puVar2[0x55] = 0x200;
    puVar2[6] = (int)lVar4;
    puVar2[0x56] = iVar1;
    *(short *)(puVar2 + 0x12) = (short)*(undefined4 *)(param_1[0xc] + 4);
    FUN_019dd164(puVar2);
    if (*(char *)((long)param_1 + 0x2f7) == '\0') {
      iVar1 = bind(puVar2[6],(sockaddr *)(puVar2 + 0x12),*(socklen_t *)(param_1[0xc] + 0x10));
      if (iVar1 != 0) {
        lVar4 = *param_1;
        puVar2 = (undefined4 *)__errno();
        uVar3 = FUN_019c1348(param_1,*puVar2);
        FUN_019ca0fc(lVar4,"bind() failed; %s",uVar3);
        return 7;
      }
      *(undefined1 *)((long)param_1 + 0x2f7) = 1;
    }
    FUN_019c4568(*param_1);
    uVar3 = 0;
    *param_2 = 1;
  }
  return uVar3;
}




int FUN_019dcb30(long *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  ushort *puVar4;
  uint uVar5;
  socklen_t sVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ssize_t sVar10;
  void *pvVar11;
  size_t sVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  ushort *puVar16;
  int *piVar17;
  long lVar18;
  ulong __n;
  socklen_t local_e4;
  sockaddr local_e0 [8];
  
  lVar18 = *param_1;
  piVar17 = (int *)param_1[0xa9];
  time((time_t *)local_e0);
  lVar15 = *(long *)(piVar17 + 0xc);
  if (lVar15 < (long)local_e0[0]._0_8_) {
    piVar17[2] = -99;
    *piVar17 = 3;
    *param_2 = 0;
  }
  else {
    if (*(long *)(piVar17 + 0xe) + (long)piVar17[8] < (long)local_e0[0]._0_8_) {
      time((time_t *)(piVar17 + 0xe));
      lVar15 = *(long *)(piVar17 + 0xc);
      iVar7 = 7;
    }
    else {
      iVar7 = -1;
    }
    *param_2 = 0;
    if ((long)local_e0[0]._0_8_ < lVar15) {
      if (iVar7 == -1) {
        iVar7 = FUN_019c14c8(piVar17[6],0xffffffff,0xffffffff,0);
        if (iVar7 == 0) {
          return 0;
        }
        if (iVar7 == -1) {
          puVar8 = (undefined4 *)__errno();
          uVar9 = FUN_019c1348(param_1,*puVar8);
          FUN_019ca0fc(lVar18,"%s",uVar9);
          piVar17[3] = 5;
          return 0;
        }
        lVar15 = param_1[0xa9];
        lVar18 = *param_1;
        local_e4 = 0x80;
        sVar10 = recvfrom(*(int *)(lVar15 + 0x18),*(void **)(lVar15 + 0x160),
                          (long)*(int *)(lVar15 + 0x154) + 4,0,local_e0,&local_e4);
        sVar6 = local_e4;
        iVar7 = (int)sVar10;
        *(int *)(lVar15 + 0x14c) = iVar7;
        if (*(int *)(lVar15 + 0x148) == 0) {
          memcpy((void *)(lVar15 + 200),local_e0,(ulong)local_e4);
          iVar7 = *(int *)(lVar15 + 0x14c);
          *(socklen_t *)(lVar15 + 0x148) = sVar6;
        }
        if (iVar7 < 4) {
          FUN_019ca0fc(lVar18,"Received too short packet");
          *(undefined4 *)(lVar15 + 0xc) = 7;
        }
        else {
          puVar16 = *(ushort **)(lVar15 + 0x160);
          uVar5 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
          *(uint *)(lVar15 + 0xc) = uVar5;
          switch(uVar5) {
          case 3:
            if ((4 < iVar7) &&
               ((ushort)(*(short *)(lVar15 + 0x40) + 1U) ==
                (ushort)(puVar16[1] >> 8 | puVar16[1] << 8))) {
              iVar7 = FUN_019ca574(param_1,1,puVar16 + 2,(long)(iVar7 + -4));
              if (iVar7 != 0) {
                FUN_019dd380(lVar15,5);
                return iVar7;
              }
              *(long *)(lVar18 + 0x98) =
                   *(long *)(lVar18 + 0x98) + (long)*(int *)(lVar15 + 0x14c) + -4;
              FUN_019c45a4(lVar18);
            }
            break;
          case 4:
            break;
          case 5:
            *(uint *)(lVar15 + 8) =
                 (uint)CONCAT11((char)puVar16[1],*(undefined1 *)((long)puVar16 + 3));
            FUN_019c9f64(lVar18,&DAT_01e28837,puVar16 + 2);
            break;
          case 6:
            lVar18 = **(long **)(lVar15 + 0x10);
            puVar1 = (ushort *)((long)(puVar16 + 1) + (long)(iVar7 + -2));
            *(undefined4 *)(lVar15 + 0x154) = 0x200;
            puVar16 = puVar16 + 1;
            do {
              __n = (long)puVar1 - (long)puVar16;
              pvVar11 = memchr(puVar16,0,__n);
              uVar3 = __n;
              if (pvVar11 != (void *)0x0) {
                uVar3 = (long)pvVar11 - (long)puVar16;
              }
              uVar2 = uVar3 + 1;
              sVar12 = __n - uVar2;
              if (__n < uVar2 || sVar12 == 0) {
LAB_019dcfc0:
                pcVar14 = "Malformed ACK packet, rejecting";
LAB_019dcfc8:
                FUN_019ca0fc(lVar18,pcVar14);
                return 0x47;
              }
              pvVar11 = memchr((void *)((long)puVar16 + uVar2),0,sVar12);
              if (pvVar11 != (void *)0x0) {
                sVar12 = (long)pvVar11 - (long)((long)puVar16 + uVar2);
              }
              uVar3 = uVar3 + sVar12 + 2;
              if (__n < uVar3) goto LAB_019dcfc0;
              sVar12 = strlen((char *)puVar16);
              puVar4 = (ushort *)((long)puVar16 + uVar3);
              if (puVar4 == (ushort *)0x0) goto LAB_019dcfc0;
              pcVar14 = (char *)((long)puVar16 + sVar12 + 1);
              FUN_019c9f64(lVar18,"got option=(%s) value=(%s)\n",puVar16,pcVar14);
              sVar12 = strlen((char *)puVar16);
              iVar7 = FUN_019e2430(puVar16,"blksize",sVar12);
              if (iVar7 == 0) {
                sVar12 = strlen((char *)puVar16);
                iVar7 = FUN_019e2430(puVar16,"tsize",sVar12);
                if (iVar7 != 0) {
                  lVar13 = strtol(pcVar14,(char **)0x0,10);
                  FUN_019c9f64(lVar18,"%s (%ld)\n","tsize parsed from OACK",lVar13);
                  if (*(char *)(lVar18 + 0x519) == '\0') {
                    if (lVar13 == 0) {
                      FUN_019ca0fc(lVar18,"invalid tsize -:%s:- value in OACK packet",pcVar14);
                      return 0x47;
                    }
                    FUN_019c4438(lVar18,lVar13);
                  }
                }
              }
              else {
                lVar13 = strtol(pcVar14,(char **)0x0,10);
                if (lVar13 == 0) {
                  pcVar14 = "invalid blocksize value in OACK packet";
                  goto LAB_019dcfc8;
                }
                if (0xffb8 < lVar13) {
                  pcVar14 = "blksize is larger than max supported";
                  uVar9 = 0xffb8;
LAB_019dd02c:
                  FUN_019ca0fc(lVar18,"%s (%d)",pcVar14,uVar9);
                  return 0x47;
                }
                if (lVar13 < 8) {
                  pcVar14 = "blksize is smaller than min supported";
                  uVar9 = 8;
                  goto LAB_019dd02c;
                }
                if (*(int *)(lVar15 + 0x158) < lVar13) {
                  FUN_019ca0fc(lVar18,"%s (%ld)","server requested blksize larger than allocated");
                  return 0x47;
                }
                *(int *)(lVar15 + 0x154) = (int)lVar13;
                FUN_019c9f64(lVar18,"%s (%d) %s (%d)\n","blksize parsed from OACK",lVar13,
                             "requested");
              }
              puVar16 = puVar4;
            } while (puVar4 < puVar1);
            break;
          default:
            FUN_019ca0fc(lVar18,"%s","Internal error: Unexpected packet");
          }
          iVar7 = FUN_019c3f38(param_1);
          if (iVar7 != 0) {
            FUN_019dd380(lVar15,5);
            return 0x2a;
          }
        }
        iVar7 = piVar17[3];
      }
      iVar7 = FUN_019dd380(piVar17,iVar7);
      if (iVar7 != 0) {
        return iVar7;
      }
      iVar7 = *piVar17;
      *param_2 = iVar7 == 3;
      if (iVar7 == 3) {
        FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
        return 0;
      }
      return 0;
    }
  }
  FUN_019ca0fc(lVar18,"TFTP response timeout");
  return 0x1c;
}

