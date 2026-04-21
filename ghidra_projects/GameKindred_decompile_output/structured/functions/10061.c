// functions/10061 — 191 functions
#include "GameKindred.h"




undefined8 FUN_10061010c(long param_1)

{
  if (*(int *)(param_1 + 0x80) < 2) {
    return 0xffffffffffffff7d;
  }
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_100610128(long param_1)

{
  if (*(int *)(param_1 + 0x80) < 2) {
    return 0xffffffffffffff7d;
  }
  return *(undefined8 *)(param_1 + 0x78);
}




float FUN_100610144(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    fVar5 = -131.0;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      lVar2 = 0;
      lVar1 = 0;
      fVar5 = 0.0;
    }
    else {
      lVar1 = FUN_10060ea30(param_1,0xffffffff);
      fVar5 = (float)FUN_10060e804(param_1,0xffffffff);
      iVar3 = *(int *)(param_1 + 0x40) << 1;
      lVar2 = (long)*(int *)(param_1 + 0x40);
      do {
        iVar4 = (int)lVar2;
        if (lVar2 < 1) break;
        lVar1 = lVar1 - *(long *)(*(long *)(param_1 + 0x60) + (long)(iVar3 + -1) * 8);
        fVar6 = (float)FUN_10060e804(param_1,lVar2 + -1);
        fVar5 = fVar5 - fVar6;
        iVar3 = iVar3 + -2;
        lVar2 = lVar2 + -1;
      } while (*(long *)(param_1 + 0x78) < lVar1);
      lVar2 = (long)(iVar4 + -1);
    }
    fVar5 = fVar5 + (float)(*(long *)(param_1 + 0x78) - lVar1) /
                    (float)*(int *)(*(long *)(param_1 + 0x68) + lVar2 * 0x28 + 8);
  }
  return fVar5;
}




long FUN_100610250(long param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x68);
  }
  else {
    if (-1 < param_2) {
      if (param_2 < *(int *)(param_1 + 0x40)) {
        return *(long *)(param_1 + 0x68) + (long)param_2 * 0x28;
      }
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x68);
    if (2 < *(int *)(param_1 + 0x80)) {
      return lVar1 + (long)*(int *)(param_1 + 0x88) * 0x28;
    }
  }
  return lVar1;
}




long FUN_1006102b8(long param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x70);
  }
  else {
    if (-1 < param_2) {
      if (param_2 < *(int *)(param_1 + 0x40)) {
        return *(long *)(param_1 + 0x70) + (long)param_2 * 0x20;
      }
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x70);
    if (2 < *(int *)(param_1 + 0x80)) {
      return lVar1 + (long)*(int *)(param_1 + 0x88) * 0x20;
    }
  }
  return lVar1;
}




ulong FUN_100610314(undefined8 param_1,long param_2,short *param_3,int param_4,int param_5,
                   int param_6,int param_7,undefined4 *param_8,code *param_9,undefined8 param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  short *psVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  uint uVar16;
  long local_68;
  
  iVar2 = *(int *)(param_2 + 0x80);
  if (iVar2 < 2) {
    return 0xffffff7d;
  }
  while( true ) {
    if (iVar2 == 4) {
      uVar5 = FUN_10055c21c(param_2 + 0x210,&local_68);
      uVar16 = (uint)uVar5;
      if (uVar16 != 0) {
        if ((int)uVar16 < 1) {
          return uVar5;
        }
        if (*(int *)(param_2 + 8) == 0) {
          lVar7 = *(long *)(param_2 + 0x68);
        }
        else {
          lVar7 = *(long *)(param_2 + 0x68);
          if (2 < *(int *)(param_2 + 0x80)) {
            lVar7 = lVar7 + (long)*(int *)(param_2 + 0x88) * 0x28;
          }
        }
        iVar2 = *(int *)(lVar7 + 4);
        iVar3 = iVar2 * param_6;
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = param_4 / iVar3;
        }
        uVar1 = uVar4;
        if ((int)uVar16 <= (int)uVar4) {
          uVar1 = uVar16;
        }
        if (0 < (int)uVar1) {
          lVar7 = (long)iVar2;
          if (param_9 != (code *)0x0) {
            (*param_9)(local_68,lVar7,uVar1,param_10);
          }
          if (param_6 == 1) {
            cVar6 = '\0';
            if (param_7 == 0) {
              cVar6 = -0x80;
            }
            if (0 < (int)uVar1) {
              lVar7 = 0;
              uVar4 = ~uVar4;
              if ((int)uVar4 < (int)~uVar16) {
                uVar4 = ~uVar16;
              }
              do {
                if (0 < iVar2) {
                  lVar8 = 0;
                  do {
                    iVar10 = (int)(double)(long)(*(float *)(*(long *)(local_68 + lVar8 * 8) +
                                                           lVar7 * 4) * 128.0 + 0.5);
                    if (iVar10 < 0x80) {
                      iVar13 = -0x80;
                      if (-0x81 < iVar10) {
                        iVar13 = iVar10;
                      }
                      cVar9 = (char)iVar13;
                    }
                    else {
                      cVar9 = '\x7f';
                    }
                    *(char *)((long)param_3 + lVar8) = cVar9 + cVar6;
                    lVar8 = lVar8 + 1;
                  } while (iVar2 != (int)lVar8);
                  param_3 = (short *)((long)param_3 + (ulong)(iVar2 - 1) + 1);
                }
                iVar10 = (int)lVar7;
                lVar7 = lVar7 + 1;
              } while (iVar10 != -2 - uVar4);
            }
          }
          else {
            iVar10 = 0;
            if (param_7 == 0) {
              iVar10 = 0x8000;
            }
            if (param_5 == 0) {
              if (param_7 == 0) {
                if (0 < iVar2) {
                  lVar8 = 0;
                  uVar4 = ~uVar4;
                  if ((int)uVar4 < (int)~uVar16) {
                    uVar4 = ~uVar16;
                  }
                  do {
                    if (0 < (int)uVar1) {
                      pfVar12 = *(float **)(local_68 + lVar8 * 8);
                      psVar11 = param_3;
                      uVar16 = ~uVar4;
                      do {
                        iVar13 = (int)(double)(long)(*pfVar12 * 32768.0 + 0.5);
                        if (iVar13 < 0x8000) {
                          iVar14 = -0x8000;
                          if (-0x8001 < iVar13) {
                            iVar14 = iVar13;
                          }
                          sVar15 = (short)iVar14;
                        }
                        else {
                          sVar15 = 0x7fff;
                        }
                        *psVar11 = sVar15 + (short)iVar10;
                        uVar16 = uVar16 - 1;
                        pfVar12 = pfVar12 + 1;
                        psVar11 = psVar11 + lVar7;
                      } while (uVar16 != 0);
                    }
                    param_3 = param_3 + 1;
                    iVar13 = (int)lVar8;
                    lVar8 = lVar8 + 1;
                  } while (iVar13 != iVar2 + -1);
                }
              }
              else if (0 < iVar2) {
                lVar8 = 0;
                uVar4 = ~uVar4;
                if ((int)uVar4 < (int)~uVar16) {
                  uVar4 = ~uVar16;
                }
                do {
                  if (0 < (int)uVar1) {
                    pfVar12 = *(float **)(local_68 + lVar8 * 8);
                    psVar11 = param_3;
                    uVar16 = ~uVar4;
                    do {
                      iVar10 = (int)(double)(long)(*pfVar12 * 32768.0 + 0.5);
                      if (iVar10 < 0x8000) {
                        iVar13 = -0x8000;
                        if (-0x8001 < iVar10) {
                          iVar13 = iVar10;
                        }
                        sVar15 = (short)iVar13;
                      }
                      else {
                        sVar15 = 0x7fff;
                      }
                      *psVar11 = sVar15;
                      uVar16 = uVar16 - 1;
                      pfVar12 = pfVar12 + 1;
                      psVar11 = psVar11 + lVar7;
                    } while (uVar16 != 0);
                  }
                  param_3 = param_3 + 1;
                  iVar10 = (int)lVar8;
                  lVar8 = lVar8 + 1;
                } while (iVar10 != iVar2 + -1);
              }
            }
            else if (0 < (int)uVar1) {
              lVar7 = 0;
              uVar4 = ~uVar4;
              if ((int)uVar4 < (int)~uVar16) {
                uVar4 = ~uVar16;
              }
              do {
                if (0 < iVar2) {
                  lVar8 = 0;
                  psVar11 = param_3;
                  do {
                    iVar13 = (int)(double)(long)(*(float *)(*(long *)(local_68 + lVar8 * 8) +
                                                           lVar7 * 4) * 32768.0 + 0.5);
                    if (iVar13 < 0x8000) {
                      iVar14 = -0x8000;
                      if (-0x8001 < iVar13) {
                        iVar14 = iVar13;
                      }
                    }
                    else {
                      iVar14 = 0x7fff;
                    }
                    *(char *)psVar11 = (char)((uint)(iVar14 + iVar10) >> 8);
                    *(char *)((long)psVar11 + 1) = (char)(iVar14 + iVar10);
                    lVar8 = lVar8 + 1;
                    psVar11 = psVar11 + 1;
                  } while (iVar2 != (int)lVar8);
                  param_3 = param_3 + (ulong)(iVar2 - 1) + 1;
                }
                iVar13 = (int)lVar7;
                lVar7 = lVar7 + 1;
              } while (iVar13 != -2 - uVar4);
            }
          }
          FUN_10055c294(param_2 + 0x210,uVar1);
          *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + (long)(int)uVar1;
          if (param_8 != (undefined4 *)0x0) {
            *param_8 = *(undefined4 *)(param_2 + 0x88);
          }
          return (ulong)(uVar1 * iVar3);
        }
        return 0xffffff7d;
      }
    }
    uVar5 = FUN_10060fb00(param_1,param_2,1);
    if ((int)uVar5 == -2) {
      return 0;
    }
    if ((int)uVar5 < 1) break;
    iVar2 = *(int *)(param_2 + 0x80);
  }
  return uVar5;
}




void FUN_1006107a4(void)

{
  FUN_100610314();
  return;
}




ulong FUN_1006107c4(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,
                   undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_58;
  
  iVar1 = *(int *)(param_2 + 0x80);
  if (iVar1 < 2) {
    uVar3 = 0xffffff7d;
  }
  else {
    while ((iVar1 != 4 || (uVar2 = FUN_10055c21c(param_2 + 0x210,&local_58), uVar2 == 0))) {
      uVar3 = FUN_10060fb00(param_1,param_2,1);
      if ((int)uVar3 == -2) {
        return 0;
      }
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      iVar1 = *(int *)(param_2 + 0x80);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = local_58;
    }
    if ((int)uVar2 <= (int)param_4) {
      param_4 = uVar2;
    }
    uVar3 = (ulong)param_4;
    FUN_10055c294(param_2 + 0x210,uVar3);
    *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + (long)(int)param_4;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(param_2 + 0x88);
    }
  }
  return uVar3;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1006108b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uStack_80;
  long local_78 [3];
  
  lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  local_78[2] = lVar15;
  if (param_2 != param_3) {
    iVar3 = *(int *)(param_2 + 0x80);
    if (iVar3 < 2) {
      uVar4 = 0xffffff7d;
      goto LAB_100610b6c;
    }
    if (*(int *)(param_3 + 0x80) < 2) {
      uVar4 = 0xffffff7d;
      goto LAB_100610b6c;
    }
    while (iVar3 != 4) {
      uVar4 = FUN_10060fb00(param_1,param_2,0);
      iVar3 = (int)uVar4;
      if ((iVar3 < 0) && (iVar3 != -3)) {
        if (iVar3 != 0) goto LAB_100610b6c;
        break;
      }
      iVar3 = *(int *)(param_2 + 0x80);
    }
    lVar1 = param_3 + 0x210;
    do {
      if ((*(int *)(param_3 + 0x80) == 4) && (iVar3 = FUN_10055c21c(lVar1,0), iVar3 != 0))
      goto LAB_10061098c;
      uVar4 = FUN_10060fb00(param_1,param_3,0);
      iVar3 = (int)uVar4;
    } while ((-1 < iVar3) || (iVar3 == -3));
    if (iVar3 != 0) goto LAB_100610b6c;
LAB_10061098c:
    if (*(int *)(param_2 + 8) == 0) {
      lVar5 = *(long *)(param_2 + 0x68);
      lVar14 = lVar5;
    }
    else {
      lVar5 = *(long *)(param_2 + 0x68);
      lVar14 = lVar5;
      if (2 < *(int *)(param_2 + 0x80)) {
        lVar14 = lVar5 + (long)*(int *)(param_2 + 0x88) * 0x28;
      }
    }
    if (*(int *)(param_3 + 8) == 0) {
      lVar7 = *(long *)(param_3 + 0x68);
      lVar19 = lVar7;
    }
    else {
      lVar7 = *(long *)(param_3 + 0x68);
      lVar19 = lVar7;
      if (2 < *(int *)(param_3 + 0x80)) {
        lVar19 = lVar7 + (long)*(int *)(param_3 + 0x88) * 0x28;
      }
    }
    if (lVar5 == 0) {
      uVar17 = 0xffffff7e;
    }
    else {
      iVar3 = FUN_10060de04();
      uVar17 = iVar3 + 1;
      lVar7 = *(long *)(param_3 + 0x68);
    }
    if (lVar7 == 0) {
      uVar18 = 0xffffff7e;
    }
    else {
      iVar3 = FUN_10060de04(lVar7);
      uVar18 = iVar3 + 1;
    }
    lVar5 = -((long)*(int *)(lVar14 + 4) * 8 + 0xfU & 0xfffffffffffffff0);
    puVar16 = (undefined1 *)((long)&uStack_80 + lVar5);
    iVar3 = FUN_1005fd7f4(lVar14,0);
    iVar3 = iVar3 >> (uVar17 & 0x1f);
    local_78[0] = lVar19;
    uStack_80._4_4_ = FUN_1005fd7f4(lVar19,0);
    uStack_80._4_4_ = uStack_80._4_4_ >> (uVar18 & 0x1f);
    uVar4 = FUN_10055c504(param_2 + 0x210,0);
    uVar6 = FUN_10055c504(lVar1,0);
    iVar2 = *(int *)(lVar14 + 4);
    uVar8 = (ulong)iVar2;
    if (0 < iVar2) {
      if (iVar2 == 0) {
        uVar9 = 0;
        puVar13 = puVar16;
      }
      else {
        uVar9 = uVar8 & 0xfffffffffffffffe;
        if (uVar9 == 0) {
          uVar9 = 0;
          puVar13 = puVar16;
        }
        else {
          uVar11 = (long)iVar3 * 4 + 0xfU & 0xfffffffffffffff0;
          puVar13 = puVar16;
          puVar10 = (undefined8 *)((long)local_78 + lVar5);
          uVar12 = uVar9;
          do {
            lVar5 = (long)puVar13 - uVar11;
            puVar13 = (undefined1 *)(lVar5 - uVar11);
            puVar10[-1] = lVar5;
            *puVar10 = puVar13;
            uVar12 = uVar12 - 2;
            puVar10 = puVar10 + 2;
          } while (uVar12 != 0);
        }
        if (uVar8 == uVar9) goto LAB_100610b1c;
      }
      do {
        *(undefined1 **)(puVar16 + uVar9 * 8) =
             puVar13 + -((long)iVar3 * 4 + 0xfU & 0xfffffffffffffff0);
        uVar9 = uVar9 + 1;
        puVar13 = puVar13 + -((long)iVar3 * 4 + 0xfU & 0xfffffffffffffff0);
      } while ((long)uVar9 < (long)uVar8);
    }
LAB_100610b1c:
    FUN_100610b9c(param_1,param_2,lVar14,param_2 + 0x210,puVar16,iVar3);
    FUN_10055c2cc(lVar1,local_78 + 1);
    FUN_100610d40(local_78[1],puVar16,iVar3,uStack_80._4_4_,*(undefined4 *)(lVar14 + 4),
                  *(undefined4 *)(local_78[0] + 4),uVar4,uVar6);
  }
  uVar4 = 0;
LAB_100610b6c:
  if (lVar15 != local_78[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
}




void FUN_100610b9c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long local_68;
  
  iVar4 = (int)param_6;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      while (uVar2 = FUN_10055c21c(param_4,&local_68), uVar2 == 0) {
        iVar3 = FUN_10060fb00(param_1,param_2,0);
        if (iVar3 == -2) {
          uVar2 = FUN_10055c2cc(param_2 + 0x210,&local_68);
          if (uVar2 == 0) {
            if (*(int *)(param_3 + 4) < 1) {
              return;
            }
            lVar5 = 0;
            do {
              _bzero((void *)(*(long *)(param_5 + lVar5 * 8) + (long)iVar6 * 4),
                     (-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2) -
                     (long)iVar6);
              lVar5 = lVar5 + 1;
            } while (lVar5 < *(int *)(param_3 + 4));
            return;
          }
          if (*(int *)(param_3 + 4) < 1) {
            return;
          }
          lVar5 = 0;
          uVar1 = iVar4 - iVar6;
          if ((int)uVar2 <= iVar4 - iVar6) {
            uVar1 = uVar2;
          }
          do {
            _memcpy((void *)(*(long *)(param_5 + lVar5 * 8) + (long)iVar6 * 4),
                    *(void **)(local_68 + lVar5 * 8),
                    -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
            lVar5 = lVar5 + 1;
          } while (lVar5 < *(int *)(param_3 + 4));
          return;
        }
      }
      uVar1 = iVar4 - iVar6;
      if ((int)uVar2 <= iVar4 - iVar6) {
        uVar1 = uVar2;
      }
      if (0 < *(int *)(param_3 + 4)) {
        lVar5 = 0;
        do {
          _memcpy((void *)(*(long *)(param_5 + lVar5 * 8) + (long)iVar6 * 4),
                  *(void **)(local_68 + lVar5 * 8),
                  -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_3 + 4));
      }
      iVar6 = uVar1 + iVar6;
      FUN_10055c294(param_4,(ulong)uVar1);
    } while (iVar6 < iVar4);
  }
  return;
}




void FUN_100610d40(long param_1,long param_2,uint param_3,uint param_4,int param_5,int param_6,
                  float *param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  
  iVar8 = 0;
  uVar3 = param_4;
  if ((int)param_3 <= (int)param_4) {
    param_8 = param_7;
    uVar3 = param_3;
  }
  if ((0 < param_5) && (0 < param_6)) {
    lVar9 = 0;
    uVar2 = -param_5;
    if (uVar2 < (uint)-param_6) {
      uVar2 = -param_6;
    }
    uVar1 = ~param_3;
    if ((int)uVar1 < (int)~param_4) {
      uVar1 = ~param_4;
    }
    uVar10 = (ulong)(-uVar1 - 2);
    auVar17 = NEON_fmov(0x3f800000,4);
    do {
      if (0 < (int)uVar3) {
        pfVar6 = *(float **)(param_2 + lVar9 * 8);
        pfVar4 = *(float **)(param_1 + lVar9 * 8);
        uVar12 = 0;
        uVar11 = uVar10 + 1 & 0x1fffffffc;
        if (uVar11 != 0) {
          if ((param_8 + uVar10 < pfVar4 || pfVar4 + uVar10 < param_8) &&
             (pfVar5 = param_8, pfVar13 = pfVar4, pfVar14 = pfVar6,
             uVar15 = uVar10 + 1 & 0xfffffffffffffffc,
             pfVar6 + uVar10 < pfVar4 || pfVar4 + uVar10 < pfVar6)) {
            do {
              fVar19 = *pfVar5 * *pfVar5;
              fVar21 = pfVar5[1] * pfVar5[1];
              fVar22 = pfVar5[2] * pfVar5[2];
              fVar23 = pfVar5[3] * pfVar5[3];
              auVar20._0_8_ =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar13 >> 0x20) * fVar21 +
                            (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) *
                            (auVar17._4_4_ - fVar21),
                            (float)*(undefined8 *)pfVar13 * fVar19 +
                            (float)*(undefined8 *)pfVar14 * (auVar17._0_4_ - fVar19));
              auVar20._8_4_ =
                   (float)*(undefined8 *)(pfVar13 + 2) * fVar22 +
                   (float)*(undefined8 *)(pfVar14 + 2) * (auVar17._8_4_ - fVar22);
              auVar20._12_4_ =
                   (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20) * fVar23 +
                   (float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) * (auVar17._12_4_ - fVar23);
              *(undefined8 *)pfVar13 = auVar20._0_8_;
              auVar20 = NEON_ext(auVar20,auVar20,8,1);
              *(long *)(pfVar13 + 2) = auVar20._0_8_;
              uVar15 = uVar15 - 4;
              uVar12 = uVar11;
              pfVar5 = pfVar5 + 4;
              pfVar13 = pfVar13 + 4;
              pfVar14 = pfVar14 + 4;
            } while (uVar15 != 0);
          }
        }
        if (uVar10 + 1 != uVar12) {
          iVar8 = ~uVar1 - (int)uVar12;
          pfVar4 = pfVar4 + uVar12;
          pfVar6 = pfVar6 + uVar12;
          pfVar5 = param_8 + uVar12;
          do {
            fVar19 = *pfVar5 * *pfVar5;
            *pfVar4 = *pfVar4 * fVar19 + *pfVar6 * (1.0 - fVar19);
            iVar8 = iVar8 + -1;
            pfVar4 = pfVar4 + 1;
            pfVar6 = pfVar6 + 1;
            pfVar5 = pfVar5 + 1;
          } while (iVar8 != 0);
        }
      }
      uVar7 = (uint)lVar9;
      lVar9 = lVar9 + 1;
    } while (uVar7 != ~uVar2);
    iVar8 = -uVar2;
  }
  if (iVar8 < param_6) {
    lVar9 = (long)iVar8;
    param_3 = ~param_3;
    if ((int)param_3 < (int)~param_4) {
      param_3 = ~param_4;
    }
    uVar10 = (ulong)(-param_3 - 2);
    do {
      if (0 < (int)uVar3) {
        pfVar4 = *(float **)(param_1 + lVar9 * 8);
        uVar12 = uVar10 + 1 & 0x1fffffff8;
        if (uVar12 == 0) {
          uVar12 = 0;
        }
        else if (param_8 + uVar10 < pfVar4 || pfVar4 + uVar10 < param_8) {
          pfVar6 = pfVar4 + 4;
          pfVar5 = param_8 + 4;
          uVar11 = uVar10 + 1 & 0xfffffffffffffff8;
          do {
            auVar17 = *(undefined1 (*) [16])(pfVar6 + -4);
            auVar16._0_8_ =
                 CONCAT44(auVar17._4_4_ * pfVar5[-3] * pfVar5[-3],
                          auVar17._0_4_ * pfVar5[-4] * pfVar5[-4]);
            auVar16._8_4_ = auVar17._8_4_ * pfVar5[-2] * pfVar5[-2];
            auVar16._12_4_ = auVar17._12_4_ * pfVar5[-1] * pfVar5[-1];
            auVar18._0_8_ =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * pfVar5[1] * pfVar5[1],
                          (float)*(undefined8 *)pfVar6 * *pfVar5 * *pfVar5);
            auVar18._8_4_ = (float)*(undefined8 *)(pfVar6 + 2) * pfVar5[2] * pfVar5[2];
            auVar18._12_4_ =
                 (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) * pfVar5[3] * pfVar5[3];
            *(undefined8 *)(pfVar6 + -4) = auVar16._0_8_;
            auVar17 = NEON_ext(auVar16,auVar16,8,1);
            *(long *)(pfVar6 + -2) = auVar17._0_8_;
            *(undefined8 *)pfVar6 = auVar18._0_8_;
            auVar17 = NEON_ext(auVar18,auVar18,8,1);
            *(long *)(pfVar6 + 2) = auVar17._0_8_;
            uVar11 = uVar11 - 8;
            pfVar6 = pfVar6 + 8;
            pfVar5 = pfVar5 + 8;
          } while (uVar11 != 0);
        }
        else {
          uVar12 = 0;
        }
        if (uVar10 + 1 != uVar12) {
          iVar8 = ~param_3 - (int)uVar12;
          pfVar4 = pfVar4 + uVar12;
          pfVar6 = param_8 + uVar12;
          do {
            *pfVar4 = *pfVar4 * *pfVar6 * *pfVar6;
            iVar8 = iVar8 + -1;
            pfVar4 = pfVar4 + 1;
            pfVar6 = pfVar6 + 1;
          } while (iVar8 != 0);
        }
      }
      iVar8 = (int)lVar9;
      lVar9 = lVar9 + 1;
    } while (iVar8 != param_6 + -1);
  }
  return;
}




void FUN_100610fc8(void)

{
  FUN_100610fd4();
  return;
}




void FUN_100610fd4(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 auStack_90 [3];
  uint local_74;
  undefined8 local_70;
  long local_68;
  
  lVar17 = *(long *)PTR____stack_chk_guard_101444218;
  iVar4 = *(int *)(param_2 + 0x80);
  local_68 = lVar17;
  if (iVar4 < 2) {
    uVar6 = 0xffffff7d;
  }
  else {
    while (iVar4 != 4) {
      uVar6 = FUN_10060fb00(param_1,param_2,0);
      iVar4 = (int)uVar6;
      if ((iVar4 < 0) && (iVar4 != -3)) {
        if (iVar4 != 0) goto LAB_10061127c;
        break;
      }
      iVar4 = *(int *)(param_2 + 0x80);
    }
    if (*(int *)(param_2 + 8) == 0) {
      lVar7 = *(long *)(param_2 + 0x68);
      lVar17 = lVar7;
    }
    else {
      lVar7 = *(long *)(param_2 + 0x68);
      lVar17 = lVar7;
      if (2 < *(int *)(param_2 + 0x80)) {
        lVar17 = lVar7 + (long)*(int *)(param_2 + 0x88) * 0x28;
      }
    }
    if (lVar7 == 0) {
      uVar15 = 0xffffff7e;
    }
    else {
      iVar4 = FUN_10060de04();
      uVar15 = iVar4 + 1;
    }
    iVar3 = *(int *)(lVar17 + 4);
    local_74 = uVar15;
    iVar4 = FUN_1005fd7f4(lVar17,0);
    iVar4 = iVar4 >> (uVar15 & 0x1f);
    lVar7 = param_2 + 0x210;
    auStack_90[2] = FUN_10055c504(lVar7,0);
    lVar13 = -((long)iVar3 * 8 + 0xfU & 0xfffffffffffffff0);
    puVar16 = (undefined1 *)((long)auStack_90 + lVar13);
    if (0 < iVar3) {
      uVar1 = (ulong)(iVar3 - 1) + 1;
      uVar9 = uVar1 & 0x1fffffffe;
      if (uVar9 == 0) {
        uVar9 = 0;
        puVar14 = puVar16;
      }
      else {
        uVar11 = (ulong)(iVar3 - 1) + 1 & 0xfffffffffffffffe;
        uVar12 = (long)iVar4 * 4 + 0xfU & 0xfffffffffffffff0;
        puVar14 = puVar16;
        puVar10 = (undefined8 *)((long)auStack_90 + lVar13 + 8);
        do {
          lVar13 = (long)puVar14 - uVar12;
          puVar14 = (undefined1 *)(lVar13 - uVar12);
          puVar10[-1] = lVar13;
          *puVar10 = puVar14;
          uVar11 = uVar11 - 2;
          puVar10 = puVar10 + 2;
        } while (uVar11 != 0);
      }
      if (uVar1 != uVar9) {
        iVar5 = iVar3 - (int)uVar9;
        puVar10 = (undefined8 *)(puVar16 + uVar9 * 8);
        do {
          puVar14 = puVar14 + -((long)iVar4 * 4 + 0xfU & 0xfffffffffffffff0);
          *puVar10 = puVar14;
          iVar5 = iVar5 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar5 != 0);
      }
    }
    FUN_100610b9c(param_1,param_2,lVar17,lVar7,puVar16,iVar4);
    uVar6 = (*param_4)(param_1,param_2,param_3);
    lVar17 = *(long *)PTR____stack_chk_guard_101444218;
    if ((int)uVar6 == 0) {
      do {
        if ((*(int *)(param_2 + 0x80) == 4) && (iVar5 = FUN_10055c21c(lVar7,0), iVar5 != 0))
        goto LAB_1006111f0;
        uVar6 = FUN_10060fb00(param_1,param_2,0);
        iVar5 = (int)uVar6;
      } while ((-1 < iVar5) || (iVar5 == -3));
      if (iVar5 == 0) {
LAB_1006111f0:
        uVar6 = auStack_90[2];
        if (*(int *)(param_2 + 8) == 0) {
          lVar13 = *(long *)(param_2 + 0x68);
        }
        else {
          lVar13 = *(long *)(param_2 + 0x68);
          if (2 < *(int *)(param_2 + 0x80)) {
            lVar13 = lVar13 + (long)*(int *)(param_2 + 0x88) * 0x28;
          }
        }
        uVar2 = *(undefined4 *)(lVar13 + 4);
        iVar5 = FUN_1005fd7f4(lVar13,0);
        uVar15 = local_74 & 0x1f;
        uVar8 = FUN_10055c504(lVar7,0);
        FUN_10055c2cc(lVar7,&local_70);
        FUN_100610d40(local_70,puVar16,iVar4,iVar5 >> uVar15,(long)iVar3,uVar2,uVar6,uVar8);
        uVar6 = 0;
      }
    }
  }
LAB_10061127c:
  if (lVar17 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}




void FUN_1006112ac(void)

{
  FUN_100610fd4();
  return;
}




void FUN_1006112b8(void)

{
  FUN_100610fd4();
  return;
}




void FUN_1006112c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1006112d0(param_1,param_2,FUN_10060fe94);
  return;
}




void FUN_1006112d0(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  long local_78;
  
  lVar18 = *(long *)PTR____stack_chk_guard_101444218;
  iVar4 = *(int *)(param_3 + 0x80);
  local_78 = lVar18;
  if (iVar4 < 2) {
    uVar6 = 0xffffff7d;
  }
  else {
    while (iVar4 != 4) {
      uVar6 = FUN_10060fb00(param_2,param_3,0);
      iVar4 = (int)uVar6;
      if ((iVar4 < 0) && (iVar4 != -3)) {
        if (iVar4 != 0) goto LAB_100611570;
        break;
      }
      iVar4 = *(int *)(param_3 + 0x80);
    }
    if (*(int *)(param_3 + 8) == 0) {
      lVar7 = *(long *)(param_3 + 0x68);
      lVar8 = lVar7;
    }
    else {
      lVar7 = *(long *)(param_3 + 0x68);
      lVar8 = lVar7;
      if (2 < *(int *)(param_3 + 0x80)) {
        lVar8 = lVar7 + (long)*(int *)(param_3 + 0x88) * 0x28;
      }
    }
    if (lVar7 == 0) {
      uVar16 = 0xffffff7e;
    }
    else {
      iVar4 = FUN_10060de04();
      uVar16 = iVar4 + 1;
    }
    iVar3 = *(int *)(lVar8 + 4);
    local_84 = uVar16;
    iVar4 = FUN_1005fd7f4(lVar8,0);
    iVar4 = iVar4 >> (uVar16 & 0x1f);
    lVar7 = param_3 + 0x210;
    local_90 = FUN_10055c504(lVar7,0);
    lVar14 = -((long)iVar3 * 8 + 0xfU & 0xfffffffffffffff0);
    puVar17 = (undefined1 *)((long)&local_90 + lVar14);
    if (0 < iVar3) {
      uVar1 = (ulong)(iVar3 - 1) + 1;
      uVar10 = uVar1 & 0x1fffffffe;
      if (uVar10 == 0) {
        uVar10 = 0;
        puVar15 = puVar17;
      }
      else {
        uVar12 = (ulong)(iVar3 - 1) + 1 & 0xfffffffffffffffe;
        uVar13 = (long)iVar4 * 4 + 0xfU & 0xfffffffffffffff0;
        puVar15 = puVar17;
        puVar11 = (undefined8 *)(&stack0xffffffffffffff78 + lVar14);
        do {
          lVar14 = (long)puVar15 - uVar13;
          puVar15 = (undefined1 *)(lVar14 - uVar13);
          puVar11[-1] = lVar14;
          *puVar11 = puVar15;
          uVar12 = uVar12 - 2;
          puVar11 = puVar11 + 2;
        } while (uVar12 != 0);
      }
      if (uVar1 != uVar10) {
        iVar5 = iVar3 - (int)uVar10;
        puVar11 = (undefined8 *)(puVar17 + uVar10 * 8);
        do {
          puVar15 = puVar15 + -((long)iVar4 * 4 + 0xfU & 0xfffffffffffffff0);
          *puVar11 = puVar15;
          iVar5 = iVar5 + -1;
          puVar11 = puVar11 + 1;
        } while (iVar5 != 0);
      }
    }
    FUN_100610b9c(param_2,param_3,lVar8,lVar7,puVar17,iVar4);
    uVar6 = (*param_4)(param_1,param_2,param_3);
    if ((int)uVar6 == 0) {
      do {
        if ((*(int *)(param_3 + 0x80) == 4) && (iVar5 = FUN_10055c21c(lVar7,0), iVar5 != 0))
        goto LAB_1006114e4;
        uVar6 = FUN_10060fb00(param_2,param_3,0);
        iVar5 = (int)uVar6;
      } while ((-1 < iVar5) || (iVar5 == -3));
      if (iVar5 == 0) {
LAB_1006114e4:
        uVar6 = local_90;
        if (*(int *)(param_3 + 8) == 0) {
          lVar8 = *(long *)(param_3 + 0x68);
        }
        else {
          lVar8 = *(long *)(param_3 + 0x68);
          if (2 < *(int *)(param_3 + 0x80)) {
            lVar8 = lVar8 + (long)*(int *)(param_3 + 0x88) * 0x28;
          }
        }
        uVar2 = *(undefined4 *)(lVar8 + 4);
        iVar5 = FUN_1005fd7f4(lVar8,0);
        uVar16 = local_84 & 0x1f;
        uVar9 = FUN_10055c504(lVar7,0);
        FUN_10055c2cc(lVar7,&local_80);
        FUN_100610d40(local_80,puVar17,iVar4,iVar5 >> uVar16,(long)iVar3,uVar2,uVar6,uVar9);
        uVar6 = 0;
      }
    }
  }
LAB_100611570:
  if (lVar18 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}




void FUN_1006115a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1006112d0(param_1,param_2,FUN_10060ffd0);
  return;
}




undefined8
FUN_1006115b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
             int *param_6,undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  if (param_7 == (undefined1 *)0x0) {
    lVar7 = FUN_10060ef0c(param_1,param_2,auStack_80,0x2134);
    if (lVar7 == -0x80) {
      return 0xffffff80;
    }
    if (lVar7 == -0x8b) {
      return 0xffffff75;
    }
    if (lVar7 < 0) {
      return 0xffffff7c;
    }
    param_7 = auStack_80;
  }
  iVar3 = FUN_1005fd80c(param_1,param_3);
  if (iVar3 == 0) {
    FUN_1005fd748(param_4);
    *(undefined4 *)(param_2 + 0x80) = 2;
    iVar3 = FUN_1005fc7fc(param_7);
    if (iVar3 != 0) {
      lVar7 = param_2 + 0x98;
      do {
        if (param_5 != (long *)0x0) {
          piVar10 = (int *)*param_5;
          iVar3 = *param_6;
          iVar4 = FUN_1005fc860(param_7);
          if (piVar10 != (int *)0x0 && iVar3 != 0) {
            do {
              if (*piVar10 == iVar4) {
                if (*param_5 != 0) {
                  FUN_1005a04e8(param_1);
                }
                *param_5 = 0;
                *param_6 = 0;
                uVar9 = 0xffffff7b;
                goto LAB_10061191c;
              }
              iVar3 = iVar3 + -1;
              piVar10 = piVar10 + 1;
            } while (iVar3 != 0);
          }
          uVar5 = FUN_1005fc860(param_7);
          iVar3 = *param_6;
          *param_6 = iVar3 + 1;
          if (*param_5 == 0) {
            lVar8 = FUN_1005a03d8(param_1,4);
          }
          else {
            lVar8 = FUN_1005a0490(param_1,*param_5,(iVar3 + 1) * 4);
          }
          *param_5 = lVar8;
          if (lVar8 == 0) {
            return 0xffffff75;
          }
          *(undefined4 *)(lVar8 + (long)*param_6 * 4 + -4) = uVar5;
        }
        if (*(int *)(param_2 + 0x80) < 3) {
          uVar9 = FUN_1005fc860(param_7);
          FUN_1005fd590(lVar7,uVar9);
          FUN_1005fd01c(param_1,lVar7,param_7);
          iVar3 = FUN_1005fd5dc(lVar7,auStack_a8);
          if ((0 < iVar3) && (iVar3 = FUN_1005fda18(auStack_a8), iVar3 != 0)) {
            *(undefined4 *)(param_2 + 0x80) = 3;
            iVar3 = FUN_1005fdb08(param_1,param_3,param_4,auStack_a8);
            if (iVar3 != 0) {
              uVar9 = 0xffffff7b;
              goto LAB_10061191c;
            }
          }
        }
        lVar8 = FUN_10060ef0c(param_1,param_2,param_7,0x2134);
        if (lVar8 == -0x8b) {
          uVar9 = 0xffffff75;
          goto LAB_10061191c;
        }
        if (lVar8 == -0x80) {
          uVar9 = 0xffffff80;
          goto LAB_10061191c;
        }
        if (lVar8 < 0) {
          uVar9 = 0xffffff7c;
          goto LAB_10061191c;
        }
        if ((*(int *)(param_2 + 0x80) == 3) &&
           (iVar3 = *(int *)(param_2 + 0x1f8), iVar4 = FUN_1005fc860(param_7), iVar3 == iVar4)) {
          FUN_1005fd01c(param_1,lVar7,param_7);
          break;
        }
        iVar3 = FUN_1005fc7fc(param_7);
      } while (iVar3 != 0);
    }
    if (*(int *)(param_2 + 0x80) == 3) {
      iVar3 = 0;
      bVar2 = false;
      do {
        if (iVar3 < 2) {
          do {
            iVar4 = FUN_1005fd5dc(param_2 + 0x98,auStack_a8);
            if (iVar4 == -1) {
              uVar9 = 0xffffff7b;
              goto LAB_10061191c;
            }
            if (iVar4 == 0) {
              bVar1 = true;
              goto LAB_100611898;
            }
            uVar9 = FUN_1005fdb08(param_1,param_3,param_4,auStack_a8);
            if ((int)uVar9 != 0) goto LAB_10061191c;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 2);
          bVar1 = false;
        }
        else {
          bVar1 = false;
        }
LAB_100611898:
        if (bVar1) {
          lVar7 = FUN_10060ef0c(param_1,param_2,param_7,0x2134);
          if (lVar7 < 0) {
            uVar9 = 0xffffff7b;
            goto LAB_10061191c;
          }
          iVar4 = *(int *)(param_2 + 0x1f8);
          iVar6 = FUN_1005fc860(param_7);
          if (iVar4 == iVar6) {
            FUN_1005fd01c(param_1,param_2 + 0x98,param_7);
            goto LAB_1006118f4;
          }
          iVar4 = FUN_1005fc7fc(param_7);
          if (iVar4 != 0) {
            uVar9 = 0xffffff7b;
            if (bVar2) goto LAB_10061191c;
            bVar2 = true;
          }
          goto LAB_100611898;
        }
LAB_1006118f4:
        uVar9 = 0;
      } while (iVar3 < 2);
    }
    else {
      uVar9 = 0xffffff7c;
LAB_10061191c:
      FUN_1005fd850(param_1,param_3);
      FUN_1005fd754(param_1,param_4);
      *(undefined4 *)(param_2 + 0x80) = 2;
    }
  }
  else {
    uVar9 = 0xffffff75;
  }
  return uVar9;
}




long FUN_100611968(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [32];
  
  iVar1 = *(int *)(param_2 + 0x1f8);
  lVar4 = FUN_10060ef0c(param_1,param_2,auStack_70,0xffffffffffffffff);
  lVar6 = 0;
  if (-1 < lVar4) {
    iVar5 = -1;
    do {
      iVar2 = FUN_1005fc7fc(auStack_70);
      if (iVar2 != 0) break;
      iVar2 = FUN_1005fc860(auStack_70);
      if (iVar2 == iVar1) {
        FUN_1005fd01c(param_1,param_2 + 0x98,auStack_70);
        iVar2 = iVar5;
        while (iVar5 = iVar2, iVar3 = FUN_1005fd5dc(param_2 + 0x98,auStack_98), iVar3 != 0) {
          iVar2 = iVar5;
          if (0 < iVar3) {
            iVar2 = FUN_10060dd3c(param_3,auStack_98);
            if (iVar5 != -1) {
              lVar6 = lVar6 + (iVar2 + iVar5 >> 2);
            }
          }
        }
        lVar4 = FUN_1005fc81c(auStack_70);
        if (lVar4 != -1) {
          lVar4 = FUN_1005fc81c(auStack_70);
          lVar6 = lVar4 - lVar6;
          break;
        }
      }
      lVar4 = FUN_10060ef0c(param_1,param_2,auStack_70,0xffffffffffffffff);
    } while (-1 < lVar4);
  }
  lVar4 = 0;
  if (-1 < lVar6) {
    lVar4 = lVar6;
  }
  return lVar4;
}




long FUN_100611a84(undefined8 param_1,long *param_2,int *param_3,int param_4,int *param_5,
                  undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_98;
  undefined1 auStack_80 [32];
  
  lVar8 = param_2[2];
  local_98 = 0xffffffffffffffff;
  iVar2 = -1;
  lVar7 = -1;
  lVar9 = lVar8;
  do {
    do {
      lVar4 = lVar9 + -0x2134;
      lVar9 = 0;
      if (-1 < lVar4) {
        lVar9 = lVar4;
      }
      if (*param_2 == 0) {
        return -0x81;
      }
      if ((code *)param_2[99] == (code *)0x0) {
        return -0x80;
      }
      iVar1 = (*(code *)param_2[99])(*param_2,lVar9,0);
      if (iVar1 == -1) {
        return -0x80;
      }
      param_2[2] = lVar9;
      FUN_1005fd524(param_2 + 4);
      lVar4 = param_2[2];
    } while (lVar8 <= lVar4);
    lVar6 = -1;
    do {
      lVar3 = FUN_10060ef0c(param_1,param_2,auStack_80,lVar8 - lVar4);
      if (lVar3 == -0x8b) {
        return -0x8b;
      }
      if (lVar3 == -0x80) {
        return -0x80;
      }
      if (lVar3 < 0) break;
      iVar2 = FUN_1005fc860(auStack_80);
      local_98 = FUN_1005fc81c(auStack_80);
      if (iVar2 == *param_5) {
        *param_6 = local_98;
        lVar7 = lVar3;
      }
      piVar5 = param_3;
      iVar1 = param_4;
      if (param_3 != (int *)0x0 && param_4 != 0) {
        do {
          if (*piVar5 == iVar2) goto LAB_100611bdc;
          iVar1 = iVar1 + -1;
          piVar5 = piVar5 + 1;
        } while (iVar1 != 0);
      }
      lVar7 = -1;
LAB_100611bdc:
      lVar4 = param_2[2];
      lVar6 = lVar3;
    } while (lVar4 < lVar8);
    if (lVar6 != -1) {
      if (lVar7 < 0) {
        *param_5 = iVar2;
        *param_6 = local_98;
        lVar7 = lVar6;
      }
      return lVar7;
    }
  } while( true );
}




undefined8
FUN_100611c50(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6,int param_7,int *param_8,undefined8 param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  long local_a0;
  undefined1 auStack_98 [8];
  int local_90;
  int local_80;
  undefined8 local_78;
  int local_6c;
  undefined8 local_68;
  
  local_78 = 0xffffffffffffffff;
  iVar4 = (int)param_2[0x3f];
  local_6c = param_7;
  local_68 = param_6;
  if (param_8 != (int *)0x0 && (int)param_9 != 0) {
    lVar8 = 0;
    do {
      if (param_8[lVar8] == param_7) {
        while (iVar4 != local_6c) {
          local_6c = iVar4;
          lVar8 = FUN_100611a84(param_1,param_2,param_8,(int)param_9,&local_6c,&local_68);
          param_2[2] = lVar8;
        }
        *(int *)(param_2 + 8) = param_9._4_4_ + 1;
        if (param_2[9] != 0) {
          FUN_1005a04e8(param_1);
          param_2[9] = 0;
        }
        if (param_2[0xb] != 0) {
          FUN_1005a04e8(param_1);
          param_2[0xb] = 0;
        }
        if (param_2[10] != 0) {
          FUN_1005a04e8(param_1);
          param_2[10] = 0;
        }
        lVar8 = FUN_1005a03d8(param_1,(int)param_2[8] * 8 + 8);
        param_2[9] = lVar8;
        if (lVar8 == 0) {
          return 0xffffff75;
        }
        lVar8 = FUN_1005a0490(param_1,param_2[0xd],(int)param_2[8] * 0x28);
        param_2[0xd] = lVar8;
        if (lVar8 == 0) {
          return 0xffffff75;
        }
        lVar8 = FUN_1005a0490(param_1,param_2[0xe],(int)param_2[8] << 5);
        param_2[0xe] = lVar8;
        if (lVar8 != 0) {
          lVar8 = FUN_1005a03d8(param_1,(int)param_2[8] << 2);
          param_2[0xb] = lVar8;
          if (lVar8 == 0) {
            return 0xffffff75;
          }
          lVar8 = FUN_1005a03d8(param_1,(int)param_2[8] << 3);
          param_2[10] = lVar8;
          if (lVar8 != 0) {
            lVar8 = FUN_1005a03d8(param_1,(int)param_2[8] << 4);
            param_2[0xc] = lVar8;
            if (lVar8 != 0) {
              lVar6 = param_2[9];
              *(long *)(lVar6 + (long)(param_9._4_4_ + 1) * 8) = param_5;
              *(undefined8 *)(lVar6 + (long)param_9._4_4_ * 8) = param_3;
              *(undefined8 *)(lVar8 + (long)(int)(param_9._4_4_ << 1 | 1) * 8) = local_68;
              return 0;
            }
            return 0xffffff75;
          }
          return 0xffffff75;
        }
        return 0xffffff75;
      }
      lVar8 = lVar8 + 1;
    } while ((int)param_9 != (int)lVar8);
  }
  local_a0 = 0;
  local_a4 = 0;
  lVar8 = param_5;
  if (param_4 < param_5) {
    lVar6 = param_5;
LAB_100611d1c:
    do {
      lVar5 = lVar6 + param_4;
      if (lVar5 < 0) {
        lVar5 = lVar5 + 1;
      }
      lVar12 = param_4;
      if (0x2133 < lVar6 - param_4) {
        lVar12 = lVar5 >> 1;
      }
      if (*param_2 == 0) {
        return 0xffffff7f;
      }
      if ((code *)param_2[99] == (code *)0x0) {
        return 0xffffff80;
      }
      iVar2 = (*(code *)param_2[99])(*param_2,lVar12,0);
      if (iVar2 == -1) {
        return 0xffffff80;
      }
      param_2[2] = lVar12;
      FUN_1005fd524(param_2 + 4);
      lVar5 = FUN_10060ef0c(param_1,param_2,auStack_98,0xffffffffffffffff);
      if (lVar5 == -0x80) {
        return 0xffffff80;
      }
      if ((-1 < lVar5) &&
         (iVar3 = FUN_1005fc860(auStack_98), piVar9 = param_8, iVar2 = (int)param_9,
         param_8 != (int *)0x0 && (int)param_9 != 0)) {
        do {
          if (*piVar9 == iVar3) {
            param_4 = local_90 + lVar5 + (long)local_80;
            if (param_4 < lVar6) goto LAB_100611d1c;
            goto LAB_100611e10;
          }
          iVar2 = iVar2 + -1;
          piVar9 = piVar9 + 1;
        } while (iVar2 != 0);
      }
      if (lVar5 < 0) {
        lVar5 = lVar8;
      }
      lVar8 = lVar5;
      lVar6 = lVar12;
    } while (param_4 < lVar12);
  }
LAB_100611e10:
  plVar13 = param_2 + 2;
  *plVar13 = lVar8;
  do {
    local_f4 = iVar4;
    lVar6 = FUN_100611a84(param_1,param_2,param_8,(int)param_9,&local_f4,&local_78);
    *plVar13 = lVar6;
  } while (local_f4 != iVar4);
  if (lVar6 != lVar8) {
    if (*param_2 == 0) {
      return 0xffffff7f;
    }
    if ((code *)param_2[99] == (code *)0x0) {
      return 0xffffff80;
    }
    iVar4 = (*(code *)param_2[99])(*param_2,lVar8,0);
    if (iVar4 == -1) {
      return 0xffffff80;
    }
    *plVar13 = lVar8;
    FUN_1005fd524(param_2 + 4);
  }
  uVar7 = FUN_1006115b0(param_1,param_2,&local_d0,&local_f0,&local_a0,&local_a4,0);
  if ((int)uVar7 == 0) {
    lVar6 = param_2[0x3f];
    lVar12 = *plVar13;
    lVar5 = FUN_100611968(param_1,param_2,&local_d0);
    uVar1 = param_9._4_4_ + 1;
    uVar7 = FUN_100611c50(param_1,param_2,lVar8,*plVar13,param_5,param_6,param_7,local_a0,local_a4);
    if ((int)uVar7 == 0) {
      if (local_a0 != 0) {
        FUN_1005a04e8(param_1);
      }
      uVar7 = 0;
      uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      *(long *)(param_2[9] + uVar10) = lVar8;
      *(int *)(param_2[0xb] + (long)(int)uVar1 * 4) = (int)lVar6;
      *(long *)(param_2[10] + uVar10) = lVar12;
      puVar11 = (undefined8 *)(param_2[0xd] + (long)(int)uVar1 * 0x28);
      puVar11[4] = local_b0;
      puVar11[3] = uStack_b8;
      puVar11[2] = local_c0;
      puVar11[1] = uStack_c8;
      *puVar11 = local_d0;
      puVar11 = (undefined8 *)(param_2[0xe] + (long)(int)uVar1 * 0x20);
      puVar11[3] = uStack_d8;
      puVar11[2] = local_e0;
      puVar11[1] = uStack_e8;
      *puVar11 = local_f0;
      lVar8 = param_2[0xc] + (long)(param_9._4_4_ << 1) * 8;
      *(undefined8 *)(param_2[0xc] + (long)(int)(param_9._4_4_ << 1 | 1) * 8) = local_78;
      *(long *)(lVar8 + 0x10) = lVar5;
      *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) - lVar5;
    }
  }
  return uVar7;
}




void FUN_100612168(void)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  
  iVar5 = 0x20;
  auVar8 = NEON_fmov(0x3fe0000000000000,8);
  do {
    if (iVar5 < 0x200) {
      if (0x7f < iVar5) {
        if (iVar5 == 0x80) {
          puVar7 = (undefined8 *)&DAT_101e9ba40;
        }
        else {
          if (iVar5 != 0x100) goto LAB_10061234c;
          puVar7 = (undefined8 *)&DAT_101e9bc40;
        }
        goto LAB_10061229c;
      }
      puVar7 = &DAT_101e9b8c0;
      if (iVar5 == 0x20) goto LAB_10061229c;
      if (iVar5 == 0x40) {
        puVar7 = (undefined8 *)&DAT_101e9b940;
        goto LAB_10061229c;
      }
    }
    else {
      if (iVar5 < 0x800) {
        if (iVar5 == 0x200) {
          puVar7 = (undefined8 *)&DAT_101e9c040;
        }
        else {
          if (iVar5 != 0x400) goto LAB_10061234c;
          puVar7 = (undefined8 *)&DAT_101e9c840;
        }
      }
      else if (iVar5 == 0x800) {
        puVar7 = (undefined8 *)&DAT_101e9d840;
      }
      else {
        if (iVar5 != 0x1000) goto LAB_10061234c;
        puVar7 = (undefined8 *)&DAT_101e9f840;
      }
LAB_10061229c:
      uVar6 = 0;
      do {
        uVar3 = NEON_scvtf(CONCAT44((int)uVar6 + 1,(int)uVar6),4);
        dVar1 = (double)_sin(SUB84((double)(float)((double)(((float)((ulong)uVar3 >> 0x20) + 0.5) /
                                                           (float)iVar5) * 3.141592653589793 *
                                                  auVar8._8_8_),0));
        dVar2 = (double)_sin(SUB84((double)(float)((double)(((float)uVar3 + 0.5) / (float)iVar5) *
                                                   3.141592653589793 * auVar8._0_8_),0));
        dVar1 = (double)_sin(SUB84((double)((float)dVar1 * (float)dVar1 * 1.5707964),0));
        dVar2 = (double)_sin(SUB84((double)((float)dVar2 * (float)dVar2 * 1.5707964),0));
        *puVar7 = CONCAT44((float)dVar1,(float)dVar2);
        uVar4 = uVar6 | 1;
        uVar6 = uVar6 + 2;
        puVar7 = puVar7 + 1;
      } while (uVar4 != iVar5 - 1);
    }
LAB_10061234c:
    iVar5 = iVar5 * 2;
    if (0x1000 < iVar5) {
      return;
    }
  } while( true );
}




undefined * FUN_100612380(int param_1)

{
  return (&PTR_DAT_1014a3680)[param_1];
}




void FUN_100612390(void *param_1,long param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined *puVar18;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar15 = (long)param_4;
  lVar16 = (long)param_6;
  iVar7 = *(int *)(param_3 + (long)param_5 * 4);
  if (param_5 == 0) {
    lVar15 = 0;
  }
  iVar14 = *(int *)(param_3 + lVar15 * 4);
  if (param_5 == 0) {
    lVar16 = 0;
  }
  iVar9 = *(int *)(param_2 + lVar16 * 4);
  iVar8 = *(int *)(param_3 + lVar16 * 4);
  iVar17 = 0;
  iVar10 = *(int *)(param_2 + lVar15 * 4);
  iVar3 = iVar7;
  iVar2 = iVar7;
  if (iVar7 < 0) {
    iVar3 = iVar7 + 1;
    iVar2 = iVar7 + 3;
  }
  iVar4 = iVar14 + 3;
  if (-1 < iVar14) {
    iVar4 = iVar14;
  }
  iVar2 = iVar2 >> 2;
  iVar3 = iVar3 >> 1;
  if (-1 >= iVar14) {
    iVar14 = iVar14 + 1;
  }
  iVar4 = iVar4 >> 2;
  iVar14 = iVar14 >> 1;
  iVar6 = iVar8 + 3;
  if (-1 < iVar8) {
    iVar6 = iVar8;
  }
  iVar5 = iVar8;
  if (-1 >= iVar8) {
    iVar5 = iVar8 + 1;
  }
  if (0 < iVar2 - iVar4) {
    uVar11 = (iVar2 + -1) - iVar4;
    _bzero(param_1,(ulong)uVar11 * 4 + 4);
    iVar17 = uVar11 + 1;
  }
  iVar12 = (iVar3 + iVar2) - (iVar6 >> 2);
  if (iVar17 < (iVar2 - iVar4) + iVar14) {
    puVar18 = (&PTR_DAT_1014a3680)[iVar10];
    lVar15 = (long)iVar17;
    uVar24 = (ulong)(uint)(((iVar2 + iVar14 + -1) - iVar17) - iVar4);
    uVar21 = uVar24 + 1 & 0x1fffffff8;
    if (uVar21 == 0) {
      uVar21 = 0;
    }
    else if (puVar18 + uVar24 * 4 < (undefined *)((long)param_1 + lVar15 * 4) ||
             (undefined *)((long)param_1 + (lVar15 + uVar24) * 4) < puVar18) {
      lVar15 = lVar15 + uVar21;
      uVar25 = (ulong)(uint)(((iVar2 + iVar14 + -1) - iVar17) - iVar4) + 1 & 0xfffffffffffffff8;
      puVar26 = (undefined8 *)((long)param_1 + (long)iVar17 * 4 + 0x10);
      pfVar19 = (float *)(puVar18 + 0x10);
      do {
        auVar27._0_8_ =
             CONCAT44(pfVar19[-3] * (float)((ulong)puVar26[-2] >> 0x20),
                      pfVar19[-4] * (float)puVar26[-2]);
        auVar27._8_4_ = pfVar19[-2] * (float)puVar26[-1];
        auVar27._12_4_ = pfVar19[-1] * (float)((ulong)puVar26[-1] >> 0x20);
        auVar29._0_8_ =
             CONCAT44(pfVar19[1] * (float)((ulong)*puVar26 >> 0x20),*pfVar19 * (float)*puVar26);
        auVar29._8_4_ = pfVar19[2] * (float)puVar26[1];
        auVar29._12_4_ = pfVar19[3] * (float)((ulong)puVar26[1] >> 0x20);
        puVar26[-2] = auVar27._0_8_;
        auVar27 = NEON_ext(auVar27,auVar27,8,1);
        puVar26[-1] = auVar27._0_8_;
        *puVar26 = auVar29._0_8_;
        auVar27 = NEON_ext(auVar29,auVar29,8,1);
        puVar26[1] = auVar27._0_8_;
        uVar25 = uVar25 - 8;
        puVar26 = puVar26 + 4;
        pfVar19 = pfVar19 + 8;
      } while (uVar25 != 0);
    }
    else {
      uVar21 = 0;
    }
    if (uVar24 + 1 != uVar21) {
      iVar14 = (((iVar2 + iVar14) - iVar17) - iVar4) - (int)uVar21;
      pfVar19 = (float *)(puVar18 + uVar21 * 4);
      pfVar20 = (float *)((long)param_1 + lVar15 * 4);
      do {
        *pfVar20 = *pfVar19 * *pfVar20;
        iVar14 = iVar14 + -1;
        pfVar19 = pfVar19 + 1;
        pfVar20 = pfVar20 + 1;
      } while (iVar14 != 0);
    }
  }
  iVar14 = iVar12;
  if (1 < iVar8) {
    iVar5 = iVar5 >> 1;
    puVar18 = (&PTR_DAT_1014a3680)[iVar9];
    iVar8 = -(iVar6 >> 2);
    iVar17 = iVar12 + iVar5;
    lVar16 = (long)iVar5;
    lVar15 = (long)iVar12;
    iVar14 = iVar17;
    if (iVar17 <= iVar12 + 1) {
      iVar14 = iVar12 + 1;
    }
    iVar9 = iVar3 + iVar2 + iVar8;
    lVar22 = (long)iVar9;
    lVar13 = (long)(iVar9 + iVar5);
    if (lVar13 < lVar22 + 1) {
      lVar13 = lVar22 + 1;
    }
    if ((lVar13 + -1) - lVar22 != -1) {
      lVar1 = (lVar13 - lVar22) + lVar15;
      uVar21 = lVar13 - lVar22 & 0xfffffffffffffff8;
      lVar22 = (long)iVar9;
      lVar13 = (long)(iVar9 + iVar5);
      if (lVar13 < lVar22 + 1) {
        lVar13 = lVar22 + 1;
      }
      if ((uVar21 != 0) &&
         ((puVar18 + ((iVar5 + lVar22) - lVar13) * 4 < (undefined *)((long)param_1 + lVar22 * 4) ||
          ((undefined *)((long)param_1 + lVar13 * 4 + -4) < puVar18 + (long)iVar5 * 4 + -4)))) {
        lVar15 = uVar21 + lVar15;
        lVar16 = lVar16 - uVar21;
        iVar8 = iVar3 + iVar2 + iVar8;
        lVar22 = (long)iVar8;
        lVar13 = (long)(iVar8 + iVar5);
        if (lVar13 < lVar22 + 1) {
          lVar13 = lVar22 + 1;
        }
        uVar21 = lVar13 - lVar22 & 0xfffffffffffffff8;
        puVar26 = (undefined8 *)((long)param_1 + (long)iVar8 * 4 + 0x10);
        pauVar23 = (undefined1 (*) [16])(puVar18 + (long)iVar5 * 4 + -0x10);
        do {
          auVar27 = NEON_rev64(*pauVar23,4);
          auVar29 = NEON_rev64(pauVar23[-1],4);
          auVar27 = NEON_ext(auVar27,auVar27,8,1);
          auVar29 = NEON_ext(auVar29,auVar29,8,1);
          auVar28._0_8_ =
               CONCAT44(auVar27._4_4_ * (float)((ulong)puVar26[-2] >> 0x20),
                        auVar27._0_4_ * (float)puVar26[-2]);
          auVar28._8_4_ = auVar27._8_4_ * (float)puVar26[-1];
          auVar28._12_4_ = auVar27._12_4_ * (float)((ulong)puVar26[-1] >> 0x20);
          auVar30._0_8_ =
               CONCAT44(auVar29._4_4_ * (float)((ulong)*puVar26 >> 0x20),
                        auVar29._0_4_ * (float)*puVar26);
          auVar30._8_4_ = auVar29._8_4_ * (float)puVar26[1];
          auVar30._12_4_ = auVar29._12_4_ * (float)((ulong)puVar26[1] >> 0x20);
          puVar26[-2] = auVar28._0_8_;
          auVar27 = NEON_ext(auVar28,auVar28,8,1);
          puVar26[-1] = auVar27._0_8_;
          *puVar26 = auVar30._0_8_;
          auVar27 = NEON_ext(auVar30,auVar30,8,1);
          puVar26[1] = auVar27._0_8_;
          uVar21 = uVar21 - 8;
          puVar26 = puVar26 + 4;
          pauVar23 = pauVar23 + -2;
        } while (uVar21 != 0);
      }
      if (lVar1 == lVar15) goto LAB_1006126f0;
    }
    pfVar19 = (float *)(puVar18 + lVar16 * 4);
    do {
      pfVar19 = pfVar19 + -1;
      *(float *)((long)param_1 + lVar15 * 4) = *pfVar19 * *(float *)((long)param_1 + lVar15 * 4);
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar17);
  }
LAB_1006126f0:
  if (iVar14 < iVar7) {
    _bzero((void *)((long)param_1 + (long)iVar14 * 4),(ulong)(uint)((iVar7 + -1) - iVar14) * 4 + 4);
  }
  return;
}




undefined8 FUN_100612734(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else if (param_1 == (long *)0x0) {
    uVar1 = 0x1e;
  }
  else {
    *param_2 = (long)param_1;
    if (param_3 == (long *)0x0) {
      uVar1 = 0;
    }
    else {
      lVar2 = *param_1;
      uVar1 = 0x1c;
      if (((lVar2 != 0) && (*param_3 == 0)) && (uVar1 = FUN_100570b94(lVar2), (int)uVar1 == 0)) {
        uVar1 = 0;
        *param_3 = lVar2;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1006127a0(undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_2 + 4;
  param_2[5] = puVar1;
  plVar2 = (long *)param_2[5];
  *param_2 = param_3;
  param_2[3] = param_2;
  param_2[4] = puVar1;
  param_2[1] = param_2 + 1;
  param_2[2] = param_2 + 1;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  *plVar2 = (long)puVar1;
  *(long **)(param_2[4] + 8) = plVar2;
  param_2[4] = puVar1;
  param_2[5] = puVar1;
  param_2[6] = param_2;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  *(undefined4 *)((long)param_2 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)((long)param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0xf) = 0;
  param_2[0x12] = 0;
  *(undefined4 *)((long)param_2 + 0x9c) = 0;
  *(undefined4 *)(param_2 + 0x13) = param_1;
  *(undefined4 *)(param_2 + 0x11) = param_1;
  *(undefined4 *)((long)param_2 + 0x7c) = param_1;
  return 0;
}




undefined8 FUN_10061280c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  *plVar2 = *plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *(long **)(param_1 + 0x10) = plVar1;
  *plVar1 = (long)plVar1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = *(long **)(param_1 + 0x28);
  *plVar2 = *plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *(long **)(param_1 + 0x28) = plVar1;
  *plVar1 = (long)plVar1;
  *(long *)(param_1 + 0x30) = param_1;
  return 0;
}




undefined8 FUN_100612864(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_10062efd0(param_1 + 0x14,*param_1);
  FUN_10062efd0(param_1 + 7,*param_1);
  FUN_10062efd0(param_1 + 9,*param_1);
  plVar1 = param_1 + 1;
  plVar2 = (long *)param_1[2];
  *plVar2 = *plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  param_1[2] = plVar1;
  *plVar1 = (long)plVar1;
  param_1[3] = param_1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  plVar1 = param_1 + 4;
  plVar2 = (long *)param_1[5];
  *plVar2 = *plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  param_1[5] = plVar1;
  *plVar1 = (long)plVar1;
  param_1[6] = param_1;
  return 0;
}




undefined8 FUN_100612900(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *param_2 = *(long *)(param_1 + 0x58);
    return 0;
  }
  *param_2 = 0;
  return 0x2e;
}




undefined8 FUN_10061292c(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *param_2 = *(long *)(param_1 + 0x60);
    return 0;
  }
  *param_2 = 0;
  return 0x2e;
}




undefined8 FUN_100612958(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  float fVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_10062efd0(param_1 + 0x14,*param_1);
    FUN_10062efd0(param_1 + 7,*param_1);
    FUN_10062efd0(param_1 + 9,*param_1);
  }
  pfVar6 = (float *)(param_1 + 0x11);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  fVar2 = *pfVar6;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(float *)((long)param_1 + 0x7c) = fVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x74) = 0x3f800000;
  pfVar4 = (float *)param_1[8];
  if ((pfVar4 != (float *)0x0) &&
     (iVar1 = (int)*(short *)((long)param_1 + 0x3a) * (int)*(short *)(param_1 + 7), 0 < iVar1)) {
    pfVar5 = (float *)param_1[10];
    *pfVar5 = *pfVar4 * fVar2;
    if (iVar1 != 1) {
      lVar3 = (long)iVar1 + -1;
      do {
        pfVar5 = pfVar5 + 1;
        pfVar4 = pfVar4 + 1;
        *pfVar5 = *pfVar4 * *pfVar6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    fVar2 = *pfVar6;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(float *)((long)param_1 + 0x7c) = fVar2;
  return 0;
}




undefined8 FUN_100612a50(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if ((lVar1 != 0) &&
     (lVar2 = (long)*(short *)(param_1 + 0x3a) * (long)*(short *)(param_1 + 0x38), 0 < (int)lVar2))
  {
    lVar3 = 0;
    lVar4 = *(long *)(param_1 + 0x50);
    do {
      *(float *)(lVar4 + lVar3 * 4) = *(float *)(lVar1 + lVar3 * 4) * *(float *)(param_1 + 0x88);
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar2);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x88);
  return 0;
}




undefined8 FUN_100612aa8(float param_1,long *param_2,int param_3)

{
  undefined4 local_58 [2];
  long *local_50;
  float local_48;
  
  if (param_3 == 0) {
    if (param_2[8] != 0) {
      FUN_1005d7f1c(*param_2 + 0x14f68,param_2[8],"",0);
    }
    param_2[8] = 0;
    if (param_2[10] != 0) {
      FUN_1005d7f1c(*param_2 + 0x14f68,param_2[10],"",0);
    }
    param_2[10] = 0;
    *(float *)(param_2 + 0x11) = param_1;
    *(float *)((long)param_2 + 0x7c) = param_1;
    *(undefined4 *)(param_2 + 0xd) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  else {
    if (param_2[0x15] == 0) {
      if ((*(float *)(param_2 + 0x13) == param_1) && (*(int *)((long)param_2 + 0x9c) == 0)) {
        return 0;
      }
    }
    else {
      FUN_1005d7f1c(*param_2 + 0x14f68,param_2[0x15],"",0);
    }
    param_2[0x15] = 0;
    local_58[0] = 0xd;
    local_50 = param_2;
    local_48 = param_1;
    FUN_10056be4c(*param_2,local_58,1);
    *(float *)(param_2 + 0x13) = param_1;
    *(undefined4 *)((long)param_2 + 0x9c) = 0;
  }
  return 0;
}




undefined8
FUN_100612bb8(float param_1,float *param_2,int param_3,int param_4,int param_5,uint param_6)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  float afStack_178 [64];
  long local_78;
  
  lVar17 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_4 < 9) {
    uVar19 = *(uint *)((long)&PTR___mh_execute_header_10115ff40 + (long)param_4 * 4);
  }
  else {
    uVar19 = 0xffffffff;
  }
  uVar18 = param_6;
  if (param_6 == 0) {
    if (param_5 < 9) {
      uVar18 = *(uint *)((long)&PTR___mh_execute_header_10115ff40 + (long)param_5 * 4);
    }
    else {
      uVar18 = 0xffffffff;
    }
  }
  local_78 = lVar17;
  if ((param_5 == param_4) || (param_3 != 0)) {
    if (0 < param_4) {
      uVar1 = (ulong)(param_4 - 1) + 1;
      uVar4 = uVar1 & 0x1fffffffe;
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar8 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffffe;
        pfVar5 = param_2;
        do {
          *pfVar5 = param_1;
          pfVar5[0x21] = param_1;
          uVar8 = uVar8 - 2;
          pfVar5 = pfVar5 + 0x42;
        } while (uVar8 != 0);
      }
      if (uVar1 != uVar4) {
        param_4 = param_4 - (int)uVar4;
        pfVar5 = param_2 + uVar4 * 0x21;
        do {
          *pfVar5 = param_1;
          param_4 = param_4 + -1;
          pfVar5 = pfVar5 + 0x21;
        } while (param_4 != 0);
      }
    }
  }
  else {
    iVar6 = param_4 + -1;
    if (iVar6 == 0) {
      if (0 < param_5) {
        iVar6 = 0;
        uVar19 = 0;
        do {
          if ((uVar18 & 0xfffffff7 & 1 << (ulong)(uVar19 & 0x1f)) != 0) {
            iVar6 = iVar6 + 1;
          }
          uVar19 = uVar19 + 1;
        } while (((int)uVar19 < 8) && (iVar6 < param_5));
        uVar19 = param_5 - 1;
        if (0 < param_5) {
          lVar3 = 0;
          if (uVar19 < 8) {
            uVar19 = 7;
          }
          do {
            if ((1 << (ulong)((uint)lVar3 & 0x1f) & uVar18) != 8) {
              param_2[lVar3] = *(float *)(&DAT_10115ff20 + (long)(iVar6 + -1) * 4) * param_1;
            }
            lVar3 = lVar3 + 1;
          } while ((param_5 + 7) - uVar19 != (int)lVar3);
        }
      }
    }
    else {
      uVar7 = 1;
      if (param_5 < 9) {
        uVar7 = 7;
      }
      iVar9 = 8;
      if (param_4 < 9) {
        iVar9 = param_4;
      }
      _memset(afStack_178,0,0x100);
      if (param_6 == 0) {
        iVar2 = 2;
        if (param_5 < 9) {
          iVar2 = param_5;
        }
        FUN_100566a58(afStack_178,iVar9,iVar2);
        if (0 < iVar9) {
          lVar3 = 0;
          iVar9 = 0;
          if (7 < param_4) {
            iVar6 = 7;
          }
          do {
            iVar2 = (int)lVar3;
            uVar12 = iVar9 + iVar2;
            iVar9 = iVar9 + -1;
            do {
              uVar11 = uVar12;
              iVar9 = iVar9 + 1;
              uVar12 = uVar11 + 1;
            } while ((1 << (ulong)(uVar11 & 0x1f) & uVar19) == 0);
            if (0 < param_5) {
              lVar13 = 0;
              iVar15 = 0;
              do {
                iVar10 = (int)lVar13;
                uVar12 = iVar15 + iVar10;
                iVar15 = iVar15 + -1;
                do {
                  uVar16 = uVar12;
                  iVar15 = iVar15 + 1;
                  uVar12 = uVar16 + 1;
                } while ((1 << (ulong)(uVar16 & 0x1f) & uVar18) == 0);
                param_2[lVar3 * 0x20 + lVar13] =
                     afStack_178[(long)(int)uVar11 * 8 + (ulong)(uVar16 & uVar7)] * param_1;
                lVar13 = lVar13 + 1;
              } while (iVar10 != param_5 + -1);
            }
            lVar3 = lVar3 + 1;
          } while (iVar2 != iVar6);
        }
      }
      else {
        FUN_100566a58(afStack_178,iVar9,iVar9);
        if (0 < iVar9) {
          lVar3 = 0;
          iVar9 = 0;
          if (7 < param_4) {
            iVar6 = 7;
          }
          do {
            iVar2 = (int)lVar3;
            uVar12 = iVar9 + iVar2;
            iVar9 = iVar9 + -1;
            do {
              uVar11 = uVar12;
              iVar9 = iVar9 + 1;
              uVar12 = uVar11 + 1;
            } while ((1 << (ulong)(uVar11 & 0x1f) & uVar19) == 0);
            iVar15 = -1;
            uVar12 = uVar18;
            do {
              uVar12 = (int)uVar12 >> 1;
              iVar15 = iVar15 + 1;
            } while (uVar12 != 0);
            if (0 < param_5) {
              lVar13 = 0;
              lVar14 = (long)iVar15;
              iVar15 = param_5;
              do {
                iVar15 = iVar15 + -1;
                if (lVar14 < 0) break;
                if ((1 << (ulong)((uint)lVar14 & 0x1f) & uVar18) != 0) {
                  param_2[lVar3 * 0x20 + (long)iVar15] =
                       afStack_178[(long)(int)uVar11 * 8 + (ulong)((uint)lVar14 & uVar7)] * param_1;
                }
                lVar13 = lVar13 + 1;
                lVar14 = lVar14 + -1;
              } while (lVar13 < param_5);
            }
            lVar3 = lVar3 + 1;
          } while (iVar2 != iVar6);
        }
      }
    }
  }
  if (lVar17 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}




undefined8
FUN_100612f50(float param_1,float param_2,long param_3,float *param_4,long param_5,
             undefined8 param_6,ulong param_7,ulong param_8,undefined4 param_9,int param_10,
             int param_11)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  int iVar20;
  float *pfVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float local_2078;
  float afStack_2074 [3];
  undefined8 auStack_2068 [510];
  float local_1078 [4];
  undefined8 local_1068 [510];
  long local_78;
  
  lVar30 = *(long *)PTR____stack_chk_guard_101444218;
  local_78 = lVar30;
  _bzero(&local_2078,0x1000);
  uVar33 = *(uint *)(param_3 + 0x68);
  uVar34 = *(uint *)(param_3 + 0x6c);
  bVar1 = uVar34 == 0;
  if (bVar1) {
    fVar42 = 0.0;
  }
  else {
    fVar42 = (*(float *)(param_3 + 0x74) - *(float *)(param_3 + 0x70)) / (float)uVar34;
  }
  lVar18 = *(long *)(param_3 + 0x50);
  uVar31 = (uint)param_7;
  uVar29 = (uint)param_8;
  if (lVar18 == 0) {
    if ((param_1 != param_2) && (uVar33 != 0)) {
      pfVar19 = &local_2078;
      FUN_100612bb8(0x3f800000,&local_2078,param_6,param_7,param_8,param_9);
      if (0 < (int)uVar31) {
        iVar20 = 0;
        fVar35 = 1.0 / (float)uVar33;
        uVar16 = (ulong)(uVar29 - 1) + 1;
        pfVar21 = local_1078;
        puVar26 = local_1068;
        puVar27 = auStack_2068;
        do {
          if (0 < (int)uVar29) {
            uVar17 = uVar16 & 0x1fffffff8;
            puVar9 = puVar27;
            puVar14 = puVar26;
            uVar15 = uVar16 & 0xfffffffffffffff8;
            if (uVar17 == 0) {
              uVar17 = 0;
            }
            else {
              do {
                fVar40 = (float)puVar9[1];
                fVar41 = (float)((ulong)puVar9[1] >> 0x20);
                fVar36 = (float)*puVar9;
                fVar37 = (float)((ulong)*puVar9 >> 0x20);
                auVar38._0_8_ =
                     CONCAT44(fVar35 * (*(float *)((long)puVar9 + -0xc) * param_2 -
                                       *(float *)((long)puVar9 + -0xc) * param_1),
                              fVar35 * (*(float *)(puVar9 + -2) * param_2 -
                                       *(float *)(puVar9 + -2) * param_1));
                auVar38._8_4_ =
                     fVar35 * (*(float *)(puVar9 + -1) * param_2 - *(float *)(puVar9 + -1) * param_1
                              );
                auVar38._12_4_ =
                     fVar35 * (*(float *)((long)puVar9 + -4) * param_2 -
                              *(float *)((long)puVar9 + -4) * param_1);
                fVar36 = fVar35 * (fVar36 * param_2 - fVar36 * param_1);
                fVar37 = fVar35 * (fVar37 * param_2 - fVar37 * param_1);
                fVar40 = fVar35 * (fVar40 * param_2 - fVar40 * param_1);
                fVar41 = fVar35 * (fVar41 * param_2 - fVar41 * param_1);
                puVar14[-2] = auVar38._0_8_;
                auVar39 = NEON_ext(auVar38,auVar38,8,1);
                puVar14[-1] = auVar39._0_8_;
                *puVar14 = CONCAT44(fVar37,fVar36);
                auVar39._4_4_ = fVar37;
                auVar39._0_4_ = fVar36;
                auVar39._8_4_ = fVar40;
                auVar39._12_4_ = fVar41;
                auVar6._4_4_ = fVar37;
                auVar6._0_4_ = fVar36;
                auVar6._8_4_ = fVar40;
                auVar6._12_4_ = fVar41;
                auVar39 = NEON_ext(auVar39,auVar6,8,1);
                puVar14[1] = auVar39._0_8_;
                uVar15 = uVar15 - 8;
                puVar9 = puVar9 + 4;
                puVar14 = puVar14 + 4;
              } while (uVar15 != 0);
            }
            if ((ulong)(uVar29 - 1) + 1 != uVar17) {
              iVar23 = uVar29 - (int)uVar17;
              pfVar10 = pfVar19 + uVar17;
              pfVar11 = pfVar21 + uVar17;
              do {
                *pfVar11 = fVar35 * (*pfVar10 * param_2 - *pfVar10 * param_1);
                iVar23 = iVar23 + -1;
                pfVar10 = pfVar10 + 1;
                pfVar11 = pfVar11 + 1;
              } while (iVar23 != 0);
            }
          }
          puVar26 = puVar26 + 0x10;
          bVar7 = iVar20 != uVar31 - 1;
          iVar20 = iVar20 + 1;
          puVar27 = puVar27 + 0x10;
          pfVar21 = pfVar21 + 0x20;
          pfVar19 = pfVar19 + 0x20;
        } while (bVar7);
      }
      FUN_100612bb8(&local_2078,param_6,param_7,param_8,param_9);
      goto LAB_100613494;
    }
    FUN_100612bb8(&local_2078,param_6,param_7,param_8,param_9);
    if ((int)uVar31 < 1) goto LAB_100613494;
    pfVar19 = local_1078;
    do {
      if (0 < (int)uVar29) {
        _bzero(pfVar19,(ulong)(uVar29 - 1) * 4 + 4);
      }
      uVar22 = (int)param_7 - 1;
      param_7 = (ulong)uVar22;
      pfVar19 = pfVar19 + 0x20;
    } while (uVar22 != 0);
  }
  else {
    sVar2 = *(short *)(param_3 + 0x4a);
    uVar22 = uVar31;
    if ((int)sVar2 <= (int)uVar31) {
      uVar22 = (uint)sVar2;
    }
    sVar3 = *(short *)(param_3 + 0x48);
    uVar25 = uVar29;
    if ((int)sVar3 <= (int)uVar29) {
      uVar25 = (int)sVar3;
    }
    uVar32 = (uint)sVar3;
    if (0 < (int)uVar22) {
      iVar20 = 0;
      lVar30 = 0;
      uVar8 = (uint)sVar2;
      uVar4 = ~uVar8;
      uVar5 = ~(int)sVar3;
      if ((int)uVar4 < (int)~uVar31) {
        uVar4 = ~uVar31;
      }
      lVar24 = (long)(int)uVar32;
      if ((int)uVar5 < (int)~uVar29) {
        uVar5 = ~uVar29;
      }
      pfVar19 = &local_2078;
      pfVar21 = afStack_2074;
      do {
        if (0 < (int)uVar25) {
          uVar16 = 0;
          uVar17 = (ulong)(-uVar5 - 2) + 1 & 0x1fffffffe;
          uVar15 = 0;
          pfVar10 = pfVar21;
          iVar23 = iVar20;
          if (uVar17 != 0) {
            do {
              pfVar11 = (float *)(lVar18 + (long)iVar23 * 4);
              if (lVar24 <= (long)uVar16) {
                pfVar11 = (float *)&DAT_101ea3840;
              }
              pfVar13 = (float *)(lVar18 + (long)(iVar23 + 1) * 4);
              if (lVar24 <= (long)(uVar16 + 1)) {
                pfVar13 = (float *)&DAT_101ea3840;
              }
              if ((int)uVar8 <= lVar30) {
                pfVar13 = (float *)&DAT_101ea3840;
                pfVar11 = (float *)&DAT_101ea3840;
              }
              fVar35 = *pfVar13;
              pfVar10[-1] = *pfVar11;
              *pfVar10 = fVar35;
              iVar23 = iVar23 + 2;
              uVar16 = uVar16 + 2;
              uVar15 = uVar17;
              pfVar10 = pfVar10 + 2;
            } while (uVar16 != uVar17);
          }
          if ((ulong)(-uVar5 - 2) + 1 != uVar15) {
            iVar23 = iVar20 + (int)uVar15;
            pfVar10 = pfVar19 + uVar15;
            do {
              pfVar11 = (float *)&DAT_101ea3840;
              if ((long)uVar15 < lVar24) {
                pfVar11 = (float *)(lVar18 + (long)iVar23 * 4);
              }
              pfVar13 = (float *)&DAT_101ea3840;
              if (lVar30 < (int)uVar8) {
                pfVar13 = pfVar11;
              }
              *pfVar10 = *pfVar13;
              uVar15 = uVar15 + 1;
              iVar23 = iVar23 + 1;
              pfVar10 = pfVar10 + 1;
            } while (~uVar5 != (uint)uVar15);
          }
        }
        pfVar21 = pfVar21 + 0x20;
        iVar23 = (int)lVar30;
        lVar30 = lVar30 + 1;
        iVar20 = iVar20 + uVar32;
        pfVar19 = pfVar19 + 0x20;
      } while (iVar23 != -2 - uVar4);
    }
    if (uVar33 == 0) {
      uVar33 = 0;
      lVar30 = *(long *)PTR____stack_chk_guard_101444218;
      goto LAB_100613494;
    }
    if (((int)uVar22 < (int)uVar31) || ((int)uVar25 < (int)uVar29)) {
      _bzero(local_1078,
             -(ulong)((uVar31 << 5) >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar31 << 5) << 2);
    }
    if (0 < (int)uVar22) {
      lVar30 = 0;
      uVar22 = ~(int)sVar2;
      if ((int)uVar22 < (int)~uVar31) {
        uVar22 = ~uVar31;
      }
      uVar32 = ~uVar32;
      if ((int)uVar32 < (int)~uVar29) {
        uVar32 = ~uVar29;
      }
      pfVar19 = local_1078;
      pfVar21 = &local_2078;
      do {
        iVar20 = (int)lVar30;
        if (0 < (int)uVar25) {
          lVar18 = 0;
          sVar2 = *(short *)(param_3 + 0x3a);
          pfVar10 = pfVar21;
          pfVar11 = pfVar19;
          do {
            pfVar13 = (float *)&DAT_101ea3840;
            if ((lVar30 < sVar2) && (lVar18 < *(short *)(param_3 + 0x38))) {
              pfVar13 = (float *)(*(long *)(param_3 + 0x40) +
                                 (long)((int)lVar18 + iVar20 * *(short *)(param_3 + 0x38)) * 4);
            }
            *pfVar11 = (1.0 / (float)uVar33) * (*pfVar13 * param_2 - *pfVar10);
            lVar18 = lVar18 + 1;
            pfVar10 = pfVar10 + 1;
            pfVar11 = pfVar11 + 1;
          } while (~uVar32 != (uint)lVar18);
        }
        pfVar19 = pfVar19 + 0x20;
        lVar30 = lVar30 + 1;
        pfVar21 = pfVar21 + 0x20;
      } while (iVar20 != -2 - uVar22);
      lVar30 = *(long *)PTR____stack_chk_guard_101444218;
      goto LAB_100613494;
    }
  }
  lVar30 = *(long *)PTR____stack_chk_guard_101444218;
LAB_100613494:
  if (param_10 != 0) {
    uVar22 = uVar31 - 1;
    lVar18 = (ulong)uVar22 + 1;
    do {
      if ((uVar34 == 0) || (uVar33 == 0)) {
        if (uVar34 == 0) {
          fVar35 = *(float *)(param_3 + 0x70);
          if (uVar33 == 0) {
            if (param_11 == 0) {
              if ((int)uVar31 < 1) goto LAB_1006134b0;
              uVar33 = 0;
              pfVar19 = &local_2078;
              pfVar21 = param_4;
              do {
                fVar36 = 0.0;
                if (0 < (int)uVar29) {
                  lVar24 = 0;
                  pfVar10 = pfVar19;
                  do {
                    fVar36 = fVar36 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar10;
                    lVar24 = lVar24 + 1;
                    pfVar10 = pfVar10 + 1;
                  } while (uVar29 != (uint)lVar24);
                }
                *pfVar21 = *pfVar21 + fVar36;
                bVar7 = uVar33 != uVar22;
                uVar33 = uVar33 + 1;
                pfVar19 = pfVar19 + 0x20;
                pfVar21 = pfVar21 + 1;
              } while (bVar7);
            }
            else {
              if ((int)uVar31 < 1) {
LAB_1006134b0:
                uVar34 = 0;
                uVar33 = 0;
                goto LAB_1006138a4;
              }
              uVar33 = 0;
              pfVar19 = &local_2078;
              pfVar21 = param_4;
              do {
                fVar36 = 0.0;
                if (0 < (int)uVar29) {
                  lVar24 = 0;
                  pfVar10 = pfVar19;
                  do {
                    fVar36 = fVar36 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar10;
                    lVar24 = lVar24 + 1;
                    pfVar10 = pfVar10 + 1;
                  } while (uVar29 != (uint)lVar24);
                }
                *pfVar21 = fVar36;
                bVar7 = uVar33 != uVar22;
                uVar33 = uVar33 + 1;
                pfVar19 = pfVar19 + 0x20;
                pfVar21 = pfVar21 + 1;
              } while (bVar7);
            }
            uVar34 = 0;
            uVar33 = 0;
            goto LAB_1006138a0;
          }
          if (param_11 == 0) {
            if (0 < (int)uVar31) {
              uVar34 = 0;
              pfVar19 = local_1078;
              pfVar21 = &local_2078;
              pfVar10 = param_4;
              do {
                fVar36 = *pfVar10;
                fVar37 = 0.0;
                if (0 < (int)uVar29) {
                  lVar24 = 0;
                  pfVar11 = pfVar21;
                  pfVar13 = pfVar19;
                  do {
                    fVar37 = fVar37 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar11;
                    *pfVar11 = *pfVar11 + *pfVar13;
                    lVar24 = lVar24 + 1;
                    pfVar11 = pfVar11 + 1;
                    pfVar13 = pfVar13 + 1;
                  } while (uVar29 != (uint)lVar24);
                }
                *pfVar10 = fVar36 + fVar37;
                bVar7 = uVar34 != uVar22;
                uVar34 = uVar34 + 1;
                pfVar19 = pfVar19 + 0x20;
                pfVar21 = pfVar21 + 0x20;
                pfVar10 = pfVar10 + 1;
              } while (bVar7);
              goto LAB_100613824;
            }
          }
          else if (0 < (int)uVar31) {
            uVar34 = 0;
            pfVar19 = local_1078;
            pfVar21 = &local_2078;
            pfVar10 = param_4;
            do {
              fVar36 = 0.0;
              if (0 < (int)uVar29) {
                lVar24 = 0;
                pfVar11 = pfVar21;
                pfVar13 = pfVar19;
                do {
                  fVar36 = fVar36 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar11;
                  *pfVar11 = *pfVar11 + *pfVar13;
                  lVar24 = lVar24 + 1;
                  pfVar11 = pfVar11 + 1;
                  pfVar13 = pfVar13 + 1;
                } while (uVar29 != (uint)lVar24);
              }
              *pfVar10 = fVar36;
              bVar7 = uVar34 != uVar22;
              uVar34 = uVar34 + 1;
              pfVar19 = pfVar19 + 0x20;
              pfVar21 = pfVar21 + 0x20;
              pfVar10 = pfVar10 + 1;
            } while (bVar7);
LAB_100613824:
            param_4 = param_4 + lVar18;
          }
          uVar34 = 0;
          uVar33 = uVar33 - 1;
        }
        else {
          uVar34 = uVar34 - 1;
          fVar35 = *(float *)(param_3 + 0x70);
          *(float *)(param_3 + 0x70) = fVar42 + fVar35;
          if (param_11 == 0) {
            if (0 < (int)uVar31) {
              uVar25 = 0;
              pfVar19 = &local_2078;
              pfVar21 = param_4;
              do {
                fVar36 = 0.0;
                if (0 < (int)uVar29) {
                  lVar24 = 0;
                  pfVar10 = pfVar19;
                  do {
                    fVar36 = fVar36 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar10;
                    lVar24 = lVar24 + 1;
                    pfVar10 = pfVar10 + 1;
                  } while (uVar29 != (uint)lVar24);
                }
                *pfVar21 = *pfVar21 + fVar36;
                bVar7 = uVar25 != uVar22;
                uVar25 = uVar25 + 1;
                pfVar19 = pfVar19 + 0x20;
                pfVar21 = pfVar21 + 1;
              } while (bVar7);
              goto LAB_1006138a0;
            }
          }
          else if (0 < (int)uVar31) {
            uVar25 = 0;
            pfVar19 = &local_2078;
            pfVar21 = param_4;
            do {
              fVar36 = 0.0;
              if (0 < (int)uVar29) {
                lVar24 = 0;
                pfVar10 = pfVar19;
                do {
                  fVar36 = fVar36 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar10;
                  lVar24 = lVar24 + 1;
                  pfVar10 = pfVar10 + 1;
                } while (uVar29 != (uint)lVar24);
              }
              *pfVar21 = fVar36;
              bVar7 = uVar25 != uVar22;
              uVar25 = uVar25 + 1;
              pfVar19 = pfVar19 + 0x20;
              pfVar21 = pfVar21 + 1;
            } while (bVar7);
LAB_1006138a0:
            param_4 = param_4 + lVar18;
          }
        }
      }
      else {
        uVar34 = uVar34 - 1;
        fVar35 = *(float *)(param_3 + 0x70);
        *(float *)(param_3 + 0x70) = fVar42 + fVar35;
        if (param_11 == 0) {
          if (0 < (int)uVar31) {
            uVar25 = 0;
            pfVar19 = local_1078;
            pfVar21 = &local_2078;
            pfVar10 = param_4;
            do {
              fVar36 = *pfVar10;
              fVar37 = 0.0;
              if (0 < (int)uVar29) {
                lVar24 = 0;
                pfVar11 = pfVar21;
                pfVar13 = pfVar19;
                do {
                  fVar37 = fVar37 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar11;
                  *pfVar11 = *pfVar11 + *pfVar13;
                  lVar24 = lVar24 + 1;
                  pfVar11 = pfVar11 + 1;
                  pfVar13 = pfVar13 + 1;
                } while (uVar29 != (uint)lVar24);
              }
              *pfVar10 = fVar36 + fVar37;
              bVar7 = uVar25 != uVar22;
              uVar25 = uVar25 + 1;
              pfVar19 = pfVar19 + 0x20;
              pfVar21 = pfVar21 + 0x20;
              pfVar10 = pfVar10 + 1;
            } while (bVar7);
            goto LAB_100613648;
          }
        }
        else if (0 < (int)uVar31) {
          uVar25 = 0;
          pfVar19 = local_1078;
          pfVar21 = &local_2078;
          pfVar10 = param_4;
          do {
            fVar36 = 0.0;
            if (0 < (int)uVar29) {
              lVar24 = 0;
              pfVar11 = pfVar21;
              pfVar13 = pfVar19;
              do {
                fVar36 = fVar36 + fVar35 * *(float *)(param_5 + lVar24 * 4) * *pfVar11;
                *pfVar11 = *pfVar11 + *pfVar13;
                lVar24 = lVar24 + 1;
                pfVar11 = pfVar11 + 1;
                pfVar13 = pfVar13 + 1;
              } while (uVar29 != (uint)lVar24);
            }
            *pfVar10 = fVar36;
            bVar7 = uVar25 != uVar22;
            uVar25 = uVar25 + 1;
            pfVar19 = pfVar19 + 0x20;
            pfVar21 = pfVar21 + 0x20;
            pfVar10 = pfVar10 + 1;
          } while (bVar7);
LAB_100613648:
          param_4 = param_4 + lVar18;
        }
        uVar33 = uVar33 - 1;
      }
LAB_1006138a4:
      param_10 = param_10 + -1;
      param_5 = param_5 + (-(param_8 >> 0x1f & 1) & 0xfffffffc00000000 | (param_8 & 0xffffffff) << 2
                          );
    } while (param_10 != 0);
  }
  *(uint *)(param_3 + 0x68) = uVar33;
  *(uint *)(param_3 + 0x6c) = uVar34;
  pfVar19 = *(float **)(param_3 + 0x50);
  if (pfVar19 != (float *)0x0) {
    if (0 < (int)uVar31) {
      lVar24 = 0;
      lVar18 = 0;
      sVar2 = *(short *)(param_3 + 0x4a);
      pfVar21 = &local_2078;
      do {
        if (sVar2 <= lVar18) break;
        if (0 < (int)uVar29) {
          lVar28 = 0;
          sVar3 = *(short *)(param_3 + 0x48);
          lVar12 = lVar24 * sVar3;
          pfVar10 = pfVar21;
          do {
            if (sVar3 <= lVar28) break;
            pfVar19[lVar12 >> 0x20] = *pfVar10;
            lVar28 = lVar28 + 1;
            lVar12 = lVar12 + 0x100000000;
            pfVar10 = pfVar10 + 1;
          } while (lVar28 < (int)uVar29);
        }
        lVar18 = lVar18 + 1;
        lVar24 = lVar24 + 0x100000000;
        pfVar21 = pfVar21 + 0x20;
      } while (lVar18 < (int)uVar31);
    }
    if (uVar33 == 0) {
      if ((*(float **)(param_3 + 0x40) != (float *)0x0) &&
         (iVar20 = (int)*(short *)(param_3 + 0x3a) * (int)*(short *)(param_3 + 0x38), 0 < iVar20)) {
        lVar18 = (long)iVar20;
        pfVar21 = *(float **)(param_3 + 0x40);
        do {
          *pfVar19 = *pfVar21 * *(float *)(param_3 + 0x88);
          lVar18 = lVar18 + -1;
          pfVar19 = pfVar19 + 1;
          pfVar21 = pfVar21 + 1;
        } while (lVar18 != 0);
      }
      *(undefined4 *)(param_3 + 0x68) = 0;
      *(undefined4 *)(param_3 + 0x7c) = *(undefined4 *)(param_3 + 0x88);
    }
  }
  if (!bVar1 && uVar34 == 0) {
    *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_3 + 0x74);
  }
  if (lVar30 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}




undefined8 FUN_1006139d0(void)

{
  FUN_100613a18();
  return 0;
}




undefined8
FUN_100613a18(long param_1,void *param_2,ulong param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,uint param_7,ulong param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  int *local_1088;
  float local_1078 [1024];
  long local_78;
  
  lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  fVar20 = *(float *)(param_1 + 0x7c);
  fVar19 = *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x7c) = fVar19;
  local_78 = lVar15;
  if ((param_3 == 0) || (uVar14 = (uint)param_8, uVar14 == 0)) goto LAB_100613f2c;
  uVar16 = (uint)param_6;
  if ((int)uVar16 < 9) {
    uVar7 = *(uint *)((long)&PTR___mh_execute_header_10115ff40 + (long)(int)uVar16 * 4);
  }
  else {
    uVar7 = 0xffffffff;
  }
  uVar1 = 0;
  if (uVar7 != param_7) {
    uVar1 = param_7;
  }
  iVar6 = *(int *)(param_1 + 0x80);
  iVar17 = (int)param_5;
  if (fVar20 == fVar19 && iVar6 == 0) {
    if (*(int *)(param_1 + 0x68) != 0) {
      if (*(long *)(param_1 + 0x50) != 0) goto LAB_100613b1c;
      *(int *)(param_1 + 0x68) = 0;
    }
LAB_100613b2c:
    uVar7 = *(uint *)(param_1 + 0x6c);
    if (uVar7 != 0) {
      if (*(float *)(param_1 + 0x70) != *(float *)(param_1 + 0x74)) goto LAB_100613b48;
      lVar15 = *(long *)PTR____stack_chk_guard_101444218;
      goto LAB_100613c48;
    }
    lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) {
      *(int *)(param_1 + 0x68) = iVar6;
    }
    else {
      FUN_100614090(param_1);
      iVar6 = *(int *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 8;
    if (iVar6 == 0) goto LAB_100613b2c;
LAB_100613b1c:
    uVar7 = *(uint *)(param_1 + 0x6c);
LAB_100613b48:
    uVar4 = *(uint *)(param_1 + 0x68);
    uVar2 = uVar4;
    if (uVar4 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar14 <= uVar2) {
      uVar2 = uVar14;
    }
    FUN_100612f50(fVar20,fVar19,param_1,param_2,param_3,param_4,param_5,param_6,uVar1,uVar2,param_9)
    ;
    param_2 = (void *)((long)param_2 + (ulong)(uVar2 * iVar17) * 4);
    param_3 = param_3 + (ulong)(uVar2 * uVar16) * 4;
    param_8 = (ulong)(uVar14 - uVar2);
    if ((uVar4 != 0) && (uVar14 = *(uint *)(param_1 + 0x68), uVar14 != 0)) {
      *(uint *)(param_1 + 0x80) = uVar14;
      *(float *)(param_1 + 0x7c) =
           (fVar20 * (float)uVar14 + fVar19 * (float)(uVar4 - uVar14)) / (float)uVar4;
    }
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 8;
    uVar7 = *(uint *)(param_1 + 0x6c);
    lVar15 = *(long *)PTR____stack_chk_guard_101444218;
    if (uVar7 != 0) {
LAB_100613c48:
      local_1088 = (int *)(param_1 + 0x6c);
      if (*(float *)(param_1 + 0x70) == *(float *)(param_1 + 0x74)) {
        iVar6 = 0;
        if ((uint)param_8 <= uVar7) {
          iVar6 = uVar7 - (uint)param_8;
        }
        *local_1088 = iVar6;
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 8;
      }
    }
  }
  iVar6 = (int)param_8;
  if ((iVar6 == 0) || (ABS(fVar19) < 2e-05)) {
    if ((param_9 != 0) && (iVar6 != 0)) {
      _bzero(param_2,(ulong)(uint)(iVar6 * iVar17) << 2);
    }
    goto LAB_100613f2c;
  }
  lVar18 = *(long *)(param_1 + 0x50);
  if (lVar18 == 0) {
    _bzero(local_1078,
           -(ulong)((uint)(iVar17 << 5) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)(iVar17 << 5) << 2);
    FUN_100612bb8(*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x88),local_1078,
                  param_4 & 0xffffffff,param_5,param_6,uVar1);
  }
  else {
    fVar19 = *(float *)(param_1 + 0x70);
    sVar5 = *(short *)(param_1 + 0x4a);
    iVar8 = (int)sVar5;
    iVar6 = iVar17;
    if (sVar5 == iVar17 || iVar8 < iVar17) {
      iVar6 = (int)sVar5;
    }
    _bzero(local_1078,
           -(ulong)((uint)(iVar6 << 5) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)(iVar6 << 5) << 2);
    if (uVar1 == 0) {
      if (0 < iVar17) {
        lVar9 = 0;
        pfVar11 = local_1078;
        do {
          if (iVar8 <= lVar9) break;
          if (0 < (int)uVar16) {
            lVar12 = 0;
            sVar5 = *(short *)(param_1 + 0x48);
            pfVar13 = pfVar11;
            do {
              if ((int)sVar5 <= lVar12) break;
              *pfVar13 = fVar19 * *(float *)(lVar18 + (long)((int)lVar9 * (int)sVar5) * 4 +
                                            lVar12 * 4);
              lVar12 = lVar12 + 1;
              pfVar13 = pfVar13 + 1;
            } while (lVar12 < (int)uVar16);
          }
          lVar9 = lVar9 + 1;
          pfVar11 = pfVar11 + 0x20;
        } while (lVar9 < iVar17);
      }
    }
    else if (0 < iVar17) {
      lVar9 = 0;
      do {
        if (iVar8 <= lVar9) break;
        if (0 < (int)uVar16) {
          lVar12 = 0;
          iVar6 = 0;
          sVar5 = *(short *)(param_1 + 0x48);
          do {
            if ((int)sVar5 <= lVar12) break;
            if ((1 << (ulong)((uint)lVar12 & 0x1f) & uVar1) != 0) {
              local_1078[lVar9 * 0x20 + (long)iVar6] =
                   fVar19 * *(float *)(lVar18 + (long)((int)lVar9 * (int)sVar5) * 4 + lVar12 * 4);
              iVar6 = iVar6 + 1;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uVar16);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar17);
    }
  }
  puVar3 = (undefined4 *)&DAT_1014a1890;
  if (((ulong)(DAT_101d91910 - 1) & ((ulong)param_2 | param_3)) == 0) {
    puVar3 = &DAT_101d91910;
  }
  if ((iVar17 == 1) && (uVar16 == 1)) {
    pcVar10 = *(code **)(puVar3 + 4);
    param_6 = 1;
    param_5 = 1;
  }
  else if (iVar17 == 8) {
    if ((8 < uVar16) || ((1 << (ulong)(uVar16 & 0x1f) & 0x106U) == 0)) goto LAB_100613f0c;
    if (uVar16 == 1) {
      pcVar10 = *(code **)(puVar3 + 0x18);
      param_6 = 1;
      param_5 = 8;
    }
    else if (uVar16 == 8) {
      iVar6 = FUN_100614224();
      if (iVar6 == 0) {
        pcVar10 = *(code **)(puVar3 + 0x1c);
      }
      else {
        pcVar10 = *(code **)(puVar3 + 0x1e);
      }
      param_6 = 8;
      param_5 = 8;
    }
    else {
      if (uVar16 != 2) goto LAB_100613f2c;
      pcVar10 = *(code **)(puVar3 + 0x1a);
      param_6 = 2;
      param_5 = 8;
    }
  }
  else if (iVar17 == 6) {
    if ((uVar16 < 7) && ((1 << (ulong)(uVar16 & 0x1f) & 0x46U) != 0)) {
      if (uVar16 == 1) {
        pcVar10 = *(code **)(puVar3 + 0xc);
        param_6 = 1;
      }
      else if (uVar16 == 6) {
        iVar6 = FUN_100614224();
        if (iVar6 == 0) {
          pcVar10 = *(code **)(puVar3 + 0x10);
          param_6 = 6;
          param_5 = 6;
          goto LAB_100613f24;
        }
        if (*(short *)(param_1 + 0x4a) == 2) {
          pcVar10 = *(code **)(puVar3 + 0x14);
        }
        else if (*(short *)(param_1 + 0x4a) == 1) {
          pcVar10 = *(code **)(puVar3 + 0x12);
        }
        else {
          pcVar10 = *(code **)(puVar3 + 0x16);
        }
        param_6 = 6;
      }
      else {
        if (uVar16 != 2) goto LAB_100613f2c;
        pcVar10 = *(code **)(puVar3 + 0xe);
        param_6 = 2;
      }
      param_5 = 6;
    }
    else {
LAB_100613f0c:
      pcVar10 = *(code **)(puVar3 + 0x20);
    }
  }
  else {
    if ((iVar17 != 2) || (1 < uVar16 - 1)) goto LAB_100613f0c;
    if (uVar16 == 1) {
      pcVar10 = *(code **)(puVar3 + 6);
      param_6 = 1;
      param_5 = 2;
    }
    else {
      iVar6 = FUN_100614224();
      if (iVar6 == 0) {
        pcVar10 = *(code **)(puVar3 + 8);
      }
      else {
        pcVar10 = *(code **)(puVar3 + 10);
      }
      param_5 = 2;
    }
  }
LAB_100613f24:
  (*pcVar10)(param_3,param_2,param_8,local_1078,param_6,param_5,param_9);
LAB_100613f2c:
  if (lVar15 == local_78) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100614090(long param_1,uint param_2)

{
  float *pfVar1;
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  pfVar4 = *(float **)(param_1 + 0x50);
  if (pfVar4 == (float *)0x0) {
    return 9;
  }
  pfVar5 = *(float **)(param_1 + 0x40);
  if (pfVar5 != (float *)0x0) {
    if (param_2 == 0) {
      iVar6 = (int)*(short *)(param_1 + 0x3a) * (int)*(short *)(param_1 + 0x38);
      if (0 < iVar6) {
        lVar7 = (long)iVar6;
        do {
          *pfVar4 = *pfVar5 * *(float *)(param_1 + 0x88);
          lVar7 = lVar7 + -1;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        } while (lVar7 != 0);
      }
    }
    else {
      iVar6 = (int)*(short *)(param_1 + 0x3a);
      if (0 < *(short *)(param_1 + 0x3a)) {
        iVar8 = 0;
        iVar9 = 0;
        sVar2 = *(short *)(param_1 + 0x38);
        fVar12 = 0.0;
        do {
          if (0 < sVar2) {
            iVar10 = 0;
            iVar11 = iVar8;
            do {
              pfVar3 = (float *)&DAT_101ea3840;
              if (iVar10 < sVar2) {
                pfVar3 = pfVar5 + iVar11;
              }
              pfVar1 = (float *)&DAT_101ea3840;
              if (iVar9 < iVar6) {
                pfVar1 = pfVar3;
              }
              pfVar3 = (float *)&DAT_101ea3840;
              if ((iVar9 < *(short *)(param_1 + 0x4a)) && (iVar10 < *(short *)(param_1 + 0x48))) {
                pfVar3 = pfVar4 + (iVar10 + iVar9 * *(short *)(param_1 + 0x48));
              }
              fVar12 = fVar12 + ABS((1.0 / (float)param_2) *
                                    (*pfVar1 * *(float *)(param_1 + 0x88) - *pfVar3));
              iVar10 = iVar10 + 1;
              iVar11 = iVar11 + 1;
            } while (iVar10 < sVar2);
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + sVar2;
        } while (iVar9 < iVar6);
        if (((param_2 == 0x40) && (1e-06 <= fVar12)) || ((param_2 != 0x40 && (0.0 < fVar12)))) {
          *(uint *)(param_1 + 0x68) = param_2;
          return 0;
        }
      }
      iVar6 = iVar6 * *(short *)(param_1 + 0x38);
      if (0 < iVar6) {
        lVar7 = (long)iVar6;
        do {
          *pfVar4 = *pfVar5 * *(float *)(param_1 + 0x88);
          lVar7 = lVar7 + -1;
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
        } while (lVar7 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x88);
    return 0;
  }
  return 9;
}




undefined8 FUN_100614224(undefined8 param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_2 == 2) {
    if (2e-05 < ABS(param_4[1])) {
      return 9;
    }
    if (2e-05 < ABS(param_4[0x20])) {
      return 9;
    }
  }
  else if (param_2 == 8) {
    lVar2 = 0;
    pfVar3 = param_4 + 4;
    do {
      fVar5 = pfVar3[-4];
      if (fVar5 < 0.0) {
        fVar5 = -fVar5;
      }
      fVar6 = pfVar3[-3];
      if (fVar6 < 0.0) {
        fVar6 = -fVar6;
      }
      fVar7 = pfVar3[-2];
      if (fVar7 < 0.0) {
        fVar7 = -fVar7;
      }
      fVar8 = pfVar3[-1];
      if (fVar8 < 0.0) {
        fVar8 = -fVar8;
      }
      fVar9 = *pfVar3;
      fVar12 = pfVar3[1];
      if (fVar9 < 0.0) {
        fVar9 = -fVar9;
      }
      if (fVar12 < 0.0) {
        fVar12 = -fVar12;
      }
      fVar10 = pfVar3[2];
      fVar13 = pfVar3[3];
      if (fVar10 < 0.0) {
        fVar10 = -fVar10;
      }
      if (fVar13 < 0.0) {
        fVar13 = -fVar13;
      }
      fVar11 = *param_4;
      if (fVar11 < 0.0) {
        fVar11 = -fVar11;
      }
      if (2e-05 < (fVar5 + fVar6 + fVar7 + fVar8 + fVar9 + fVar12 + fVar10 + fVar13) - fVar11) {
        return 9;
      }
      lVar2 = lVar2 + 1;
      param_4 = param_4 + 0x21;
      pfVar3 = pfVar3 + 0x20;
    } while (lVar2 < 8);
  }
  else if (0 < param_2) {
    iVar1 = 0;
    lVar2 = 0;
    do {
      if (0 < param_3) {
        lVar4 = 0;
        do {
          if ((int)lVar2 != (int)lVar4) {
            fVar5 = param_4[iVar1 + lVar4];
            if (fVar5 < 0.0) {
              fVar5 = -fVar5;
            }
            if (2e-05 < fVar5) {
              return 9;
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < param_3);
      }
      lVar2 = lVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (lVar2 < param_2);
  }
  return 0;
}




undefined8 FUN_1006143c8(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  if ((param_3 != 1) && (0 < param_2)) {
    iVar1 = 0;
    do {
      if (1 < param_3) {
        iVar2 = 1;
        do {
          pfVar3 = (float *)&DAT_101ea3840;
          if ((iVar1 < *(short *)(param_1 + 0x3a)) && (iVar2 < *(short *)(param_1 + 0x38))) {
            pfVar3 = (float *)(*(long *)(param_1 + 0x40) +
                              (long)(iVar2 + iVar1 * *(short *)(param_1 + 0x38)) * 4);
          }
          if (*pfVar3 != 0.0) {
            return 0x40;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_3);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}




undefined8 FUN_10061445c(long *param_1,long param_2,float *param_3,short param_4,short param_5)

{
  short sVar1;
  int iVar2;
  short sVar3;
  float *pfVar4;
  
  if (param_1[8] != 0) {
    FUN_1005d7f1c(*param_1 + 0x14f68,param_1[8],"",0);
  }
  *(short *)(param_1 + 7) = param_4;
  *(short *)((long)param_1 + 0x3a) = param_5;
  param_1[8] = param_2;
  sVar3 = param_4;
  sVar1 = param_5;
  if (param_1[10] != 0) {
    FUN_1005d7f1c(*param_1 + 0x14f68,param_1[10],"",0);
    sVar3 = (short)param_1[7];
    sVar1 = *(short *)((long)param_1 + 0x3a);
  }
  *(short *)(param_1 + 9) = param_4;
  *(short *)((long)param_1 + 0x4a) = param_5;
  param_1[10] = (long)param_3;
  iVar2 = (int)sVar1 * (int)sVar3;
  if (0 < iVar2) {
    pfVar4 = (float *)param_1[8];
    do {
      *param_3 = *pfVar4 * *(float *)((long)param_1 + 0x7c);
      iVar2 = iVar2 + -1;
      pfVar4 = pfVar4 + 1;
      param_3 = param_3 + 1;
    } while (iVar2 != 0);
  }
  return 0;
}




undefined8
FUN_100614548(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined2 uVar2;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  undefined4 local_98 [2];
  void *local_90;
  long lStack_88;
  long *local_80;
  undefined2 local_78;
  undefined2 local_76;
  int local_74;
  uint local_70 [2];
  void *local_68;
  undefined2 uVar3;
  
  iVar9 = (int)param_3;
  iVar10 = (int)param_4;
  iVar5 = iVar10;
  if (iVar10 <= iVar9) {
    iVar5 = iVar9;
  }
  if (param_2 == 0) {
    plVar1 = param_1 + 0x13;
    if ((int)param_7 == 0) {
      plVar1 = param_1 + 0x11;
    }
    FUN_100612aa8((int)*plVar1,param_1,param_7);
    return 0;
  }
  uVar2 = (undefined2)param_3;
  uVar3 = (undefined2)iVar5;
  if ((int)param_7 != 0) {
    puVar11 = (uint *)(param_1 + 0x14);
    if (((short)(ushort)*puVar11 < iVar10) || (*(short *)((long)param_1 + 0xa2) < iVar9)) {
      bVar4 = true;
    }
    else {
      bVar4 = param_1[0x15] == 0;
    }
    local_68 = (void *)0x0;
    local_70[0] = 0;
    iVar5 = iVar9 * iVar5 * 4;
    pvVar6 = (void *)FUN_1005d7708(*param_1 + 0x14f68,iVar5,"",0,0,0);
    if (pvVar6 == (void *)0x0) {
      return 0x26;
    }
    local_70[0] = CONCAT22(uVar2,uVar3);
    local_68 = pvVar6;
    uVar7 = FUN_10062f024(local_70,param_2,param_3,param_4,param_5);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (bVar4) {
      if (param_1[0x15] != 0) {
        FUN_1005d7f1c(*param_1 + 0x14f68,param_1[0x15],"",0);
      }
      lVar8 = FUN_1005d7708(*param_1 + 0x14f68,iVar5,"",0,0,0);
      if (lVar8 == 0) {
        return 0x26;
      }
      *(undefined2 *)(param_1 + 0x14) = uVar3;
      *(undefined2 *)((long)param_1 + 0xa2) = uVar2;
      param_1[0x15] = lVar8;
      lStack_88 = FUN_1005d7708(*param_1 + 0x14f68,iVar5,"",0,0,0);
      if (lStack_88 == 0) {
        return 0x26;
      }
    }
    else {
      if ((local_70 == puVar11) ||
         ((((local_70[0] & 0xffff) == (uint)(ushort)*puVar11 &&
           (local_70[0] >> 0x10 == (uint)*(ushort *)((long)param_1 + 0xa2))) &&
          (iVar5 = _memcmp(local_68,(void *)param_1[0x15],
                           (long)(((int)(local_70[0] << 0x10) >> 0xe) * ((int)local_70[0] >> 0x10)))
          , iVar5 == 0)))) {
        FUN_1005d7f1c(*param_1 + 0x14f68,pvVar6,"",0);
        return 0;
      }
      lStack_88 = 0;
    }
    uVar7 = FUN_10062f024(puVar11,param_2,param_3,param_4,param_5);
    if ((int)uVar7 == 0) {
      local_98[0] = 0xc;
      local_90 = pvVar6;
      local_80 = param_1;
      local_78 = uVar3;
      local_76 = uVar2;
      local_74 = (int)param_6;
      FUN_10056be4c(*param_1,local_98,1);
      return 0;
    }
    return uVar7;
  }
  if (param_1[8] != 0) {
    if ((iVar10 <= (short)param_1[7]) && (iVar9 <= *(short *)((long)param_1 + 0x3a)))
    goto LAB_1006146fc;
    FUN_1005d7f1c(*param_1 + 0x14f68,param_1[8],"",0);
    *(undefined2 *)(param_1 + 7) = 0;
    *(undefined2 *)((long)param_1 + 0x3a) = 0;
    param_1[8] = 0;
    if (param_1[10] != 0) {
      FUN_1005d7f1c(*param_1 + 0x14f68,param_1[10],"",0);
      *(undefined2 *)(param_1 + 9) = 0;
      *(undefined2 *)((long)param_1 + 0x4a) = 0;
      param_1[10] = 0;
      if (param_1[8] != 0) goto LAB_1006146fc;
    }
  }
  uVar12 = -(ulong)((uint)(iVar5 * iVar9) >> 0x1f) & 0xfffffffc00000000 |
           (ulong)(uint)(iVar5 * iVar9) << 2;
  lVar8 = FUN_1005d7708(*param_1 + 0x14f68,uVar12,"",0,0,0);
  if (lVar8 == 0) {
    return 0x26;
  }
  pvVar6 = (void *)FUN_1005d7708(*param_1 + 0x14f68,uVar12,"",0,0,0);
  if (pvVar6 == (void *)0x0) {
    return 0x26;
  }
  *(undefined2 *)(param_1 + 7) = uVar3;
  *(undefined2 *)((long)param_1 + 0x3a) = uVar2;
  param_1[8] = lVar8;
  *(undefined2 *)(param_1 + 9) = uVar3;
  *(undefined2 *)((long)param_1 + 0x4a) = uVar2;
  param_1[10] = (long)pvVar6;
  if ((int)param_6 != 0) {
    _bzero(pvVar6,uVar12);
  }
LAB_1006146fc:
  uVar7 = FUN_10062f024(param_1 + 7,param_2,param_3,param_4,param_5);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_100614090(param_1,param_6);
  if ((int)uVar7 == 0) {
    return 0;
  }
  return uVar7;
}




void FUN_10061495c(long param_1)

{
  FUN_10062f120(param_1 + 0xa0);
  return;
}




undefined8 FUN_100614964(long param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x1f;
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  if ((uVar1 & 5) == 5) {
    *param_2 = 3;
    return 0;
  }
  if ((uVar1 & 1) != 0) {
    *param_2 = 1;
    return 0;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = 2;
  return 0;
}




undefined8 FUN_1006149c8(float param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  long lVar7;
  float *pfVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 local_58 [2];
  undefined8 *local_50;
  float local_48;
  int local_44;
  undefined1 local_40;
  
  if ((*(float *)(param_2 + 0x13) == param_1) && (*(int *)((long)param_2 + 0x9c) == param_3)) {
    return 0;
  }
  if (param_4 == 0) {
    if (param_5 == 0) {
      if (*(float *)(param_2 + 0x11) == param_1) goto LAB_100614af8;
      uVar3 = *(undefined4 *)((long)param_2 + 0x7c);
      uVar9 = (undefined1)uVar3;
      uVar10 = (undefined1)((uint)uVar3 >> 8);
      uVar11 = (undefined1)((uint)uVar3 >> 0x10);
      uVar12 = (undefined1)((uint)uVar3 >> 0x18);
    }
    else {
      *(undefined4 *)((long)param_2 + 0x7c) = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
    }
    pfVar1 = (float *)(param_2 + 0x11);
    *pfVar1 = param_1;
    if ((float)CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))) == param_1) {
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    else {
      *(int *)(param_2 + 0x10) = param_3;
      if (param_3 == 0) {
        pfVar5 = (float *)param_2[8];
        fVar6 = param_1;
        if ((pfVar5 != (float *)0x0) &&
           (iVar2 = (int)*(short *)((long)param_2 + 0x3a) * (int)*(short *)(param_2 + 7), 0 < iVar2)
           ) {
          pfVar8 = (float *)param_2[10];
          *pfVar8 = *pfVar5 * param_1;
          if (iVar2 != 1) {
            lVar7 = (long)iVar2 + -1;
            do {
              pfVar8 = pfVar8 + 1;
              pfVar5 = pfVar5 + 1;
              *pfVar8 = *pfVar1 * *pfVar5;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          fVar6 = *pfVar1;
        }
        *(undefined4 *)(param_2 + 0xd) = 0;
        *(float *)((long)param_2 + 0x7c) = fVar6;
      }
    }
  }
  else {
    local_58[0] = 0xf;
    local_40 = (undefined1)param_5;
    local_50 = param_2;
    local_48 = param_1;
    local_44 = param_3;
    uVar4 = FUN_10056be4c(*param_2,local_58,1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
LAB_100614af8:
  *(float *)(param_2 + 0x13) = param_1;
  *(int *)((long)param_2 + 0x9c) = param_3;
  return 0;
}




undefined8 FUN_100614b18(float param_1,long param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  
  if (param_4 == 0) {
    if (*(float *)(param_2 + 0x88) == param_1) {
      return 0;
    }
    fVar6 = *(float *)(param_2 + 0x7c);
  }
  else {
    *(undefined4 *)(param_2 + 0x7c) = 0;
    fVar6 = 0.0;
  }
  pfVar1 = (float *)(param_2 + 0x88);
  *pfVar1 = param_1;
  if (fVar6 != param_1) {
    *(int *)(param_2 + 0x80) = param_3;
    if (param_3 == 0) {
      pfVar3 = *(float **)(param_2 + 0x40);
      if ((pfVar3 != (float *)0x0) &&
         (iVar2 = (int)*(short *)(param_2 + 0x3a) * (int)*(short *)(param_2 + 0x38), 0 < iVar2)) {
        pfVar5 = *(float **)(param_2 + 0x50);
        *pfVar5 = *pfVar3 * param_1;
        if (iVar2 != 1) {
          lVar4 = (long)iVar2 + -1;
          do {
            pfVar5 = pfVar5 + 1;
            pfVar3 = pfVar3 + 1;
            *pfVar5 = *pfVar3 * *pfVar1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        param_1 = *pfVar1;
      }
      *(undefined4 *)(param_2 + 0x68) = 0;
      *(float *)(param_2 + 0x7c) = param_1;
    }
    return 0;
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  return 0;
}




undefined8 FUN_100614be0(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x98);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100614c04(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x90) = param_2;
  return 0;
}




undefined8 FUN_100614c10(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x90);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100614c34(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  if ((param_3 == 0) ||
     ((uVar1 = FUN_10062eeb4(param_1 + 7,*param_1,param_2 + 0x38), (int)uVar1 == 0 &&
      (uVar1 = FUN_10062eeb4(param_1 + 9,*param_1,param_2 + 0x48), (int)uVar1 == 0)))) {
    uVar1 = 0;
    auVar2 = *(undefined1 (*) [16])(param_2 + 0x68);
    param_1[0xd] = auVar2._0_8_;
    auVar2 = NEON_ext(auVar2,auVar2,8,1);
    param_1[0xe] = auVar2._0_8_;
  }
  return uVar1;
}




void * FUN_100614ca4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  
  pvVar7 = (void *)0x0;
  DAT_101ea3ba8 = 0;
  if ((0x420 < param_2) && (param_2 < -param_2 - 0x420)) {
    uVar3 = 0;
    if ((param_1 + 0x10U & 0xf) != 0) {
      uVar3 = (ulong)(uint)-(int)(param_1 + 0x10U) & 0xf;
    }
    uVar8 = uVar3 | 0x10;
    pvVar7 = (void *)(param_1 + uVar8);
    _bzero(pvVar7,0x3d0);
    lVar4 = 0;
    *(undefined8 *)((long)pvVar7 + 0x388) = 0x58585858;
    *(ulong *)((long)pvVar7 + 0x390) = param_2;
    *(undefined8 *)((long)pvVar7 + 0x398) = 0x1000;
    *(undefined8 *)(param_1 + (uVar3 | 0x3b0)) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + uVar8 + 0x3a8) = 0xffffffffffffffff;
    *(undefined4 *)((long)pvVar7 + 0x3b0) = 0;
    *(undefined4 *)((long)pvVar7 + 0x3b4) = 0;
    *(undefined8 *)(uVar3 + param_1 + 8) = 0x3d3;
    *(long *)((long)pvVar7 + 0x18) = param_1;
    *(long *)((long)pvVar7 + 0x368) = param_1;
    *(ulong *)((long)pvVar7 + 0x358) = param_2;
    *(ulong *)((long)pvVar7 + 0x350) = param_2;
    *(undefined8 *)((long)pvVar7 + 0x38) = 0x58585858;
    *(ulong *)((long)pvVar7 + 0x370) = param_2;
    *(undefined4 *)(param_1 + (uVar3 | 0x370)) = 4;
    do {
      lVar1 = (long)pvVar7 + lVar4 + 0x40;
      *(long *)((long)pvVar7 + lVar4 + 0x50) = lVar1;
      *(long *)((long)pvVar7 + lVar4 + 0x58) = lVar1;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x200);
    lVar4 = uVar8 + param_1;
    lVar1 = (*(ulong *)(lVar4 + -8) & 0xfffffffffffffffc) + uVar8;
    lVar6 = lVar1 + -0x10;
    uVar2 = param_1 + lVar1;
    uVar5 = 0;
    if ((uVar2 & 0xf) != 0) {
      uVar5 = (ulong)(uint)-(int)uVar2 & 0xf;
    }
    lVar1 = param_1 + uVar5 + lVar6;
    uVar5 = ((param_2 - 0x50) - lVar6) - uVar5;
    *(long *)(lVar4 + 0x28) = lVar1;
    *(ulong *)(lVar4 + 0x10) = uVar5;
    *(ulong *)(lVar1 + 8) = uVar5 | 1;
    *(undefined8 *)(param_2 + param_1 + -0x48) = 0x50;
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_1 + uVar8 + 0x3a8);
    *(undefined4 *)(param_1 + (uVar3 | 0x390)) = 8;
  }
  *(undefined8 *)((long)pvVar7 + 0x3b8) = param_4;
  *(undefined8 *)((long)pvVar7 + 0x3c0) = param_5;
  return pvVar7;
}




undefined8 * FUN_100614e50(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  uint *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  ulong *puVar26;
  uint *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  ulong *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  ulong *puVar34;
  
  uVar21 = *(ulong *)(param_1 + 0xe4);
  if (uVar21 == 0) {
    param_1[0xea] = 0xffffffff;
    param_1[0xeb] = 0xffffffff;
    param_1[0xe8] = 0xffffffff;
    param_1[0xe9] = 0xffffffff;
    param_1[0xec] = 0;
    if (*(long *)(param_1 + 0xe2) == 0) {
      param_1[0xe2] = 0x58585858;
      param_1[0xe3] = 0;
      DAT_101ea3ba8 = 0;
    }
    uVar21 = 0x1000;
    param_1[0xe4] = 0x1000;
    param_1[0xe5] = 0;
    param_1[0xe6] = 0x1000;
    param_1[0xe7] = 0;
  }
  if (param_2 < 0xe9) {
    uVar9 = 0x20;
    if (0x16 < param_2) {
      uVar9 = param_2 + 0x17 & 0xfffffffffffffff0;
    }
    uVar12 = *param_1;
    uVar25 = uVar12 >> (ulong)((uint)(uVar9 >> 3) & 0x1f);
    uVar19 = (uint)(uVar9 >> 3);
    if ((uVar25 & 3) != 0) {
      uVar25 = (uVar25 & 1 | uVar19) ^ 1;
      lVar23 = (ulong)(uVar25 << 1) + 2;
      lVar20 = *(long *)(param_1 + lVar23 * 2 + 0x10);
      puVar27 = *(uint **)(lVar20 + 0x10);
      if (param_1 + (ulong)(uVar25 << 1) * 2 + 0x10 == puVar27) {
        *param_1 = uVar12 & (1 << (ulong)(uVar25 & 0x1f) ^ 0xffffffffU);
      }
      else if (*(uint **)(param_1 + 6) <= puVar27) {
        *(uint **)(param_1 + lVar23 * 2 + 0x10) = puVar27;
        *(uint **)(puVar27 + 6) = param_1 + (ulong)(uVar25 << 1) * 2 + 0x10;
      }
      lVar23 = (ulong)(uVar25 << 3) + lVar20;
      *(ulong *)(lVar20 + 8) = (ulong)(uVar25 << 3) | 3;
      *(ulong *)(lVar23 + 8) = *(ulong *)(lVar23 + 8) | 1;
      return (undefined8 *)(lVar20 + 0x10);
    }
    uVar16 = *(ulong *)(param_1 + 2);
    if (uVar16 < uVar9) {
      if (uVar25 != 0) {
        uVar1 = 2 << (ulong)(uVar19 & 0x1f);
        uVar25 = uVar25 << (ulong)(uVar19 & 0x1f) & (uVar1 | -uVar1);
        uVar19 = (uVar25 & -uVar25) - 1;
        uVar25 = uVar19 >> 0xc & 0x10;
        uVar19 = uVar19 >> (ulong)uVar25;
        uVar1 = uVar19 >> (ulong)(uVar19 >> 5 & 8);
        uVar2 = uVar1 >> (ulong)(uVar1 >> 2 & 4);
        uVar3 = uVar2 >> (ulong)(uVar2 >> 1 & 2);
        uVar25 = (uVar25 | uVar19 >> 5 & 8 | uVar1 >> 2 & 4 | uVar2 >> 1 & 2 | uVar3 >> 1 & 1) +
                 (uVar3 >> (ulong)(uVar3 >> 1 & 1));
        lVar23 = (ulong)(uVar25 * 2) + 2;
        lVar20 = *(long *)(param_1 + lVar23 * 2 + 0x10);
        puVar5 = (undefined8 *)(lVar20 + 0x10);
        puVar27 = (uint *)*puVar5;
        if (param_1 + (ulong)(uVar25 * 2) * 2 + 0x10 == puVar27) {
          uVar12 = uVar12 & (1 << (ulong)(uVar25 & 0x1f) ^ 0xffffffffU);
          *param_1 = uVar12;
        }
        else if (*(uint **)(param_1 + 6) <= puVar27) {
          *(uint **)(param_1 + lVar23 * 2 + 0x10) = puVar27;
          *(uint **)(puVar27 + 6) = param_1 + (ulong)(uVar25 * 2) * 2 + 0x10;
        }
        uVar28 = (ulong)(uVar25 * 8);
        uVar21 = uVar28 - uVar9;
        if (uVar21 < 0x20) {
          *(ulong *)(lVar20 + 8) = uVar28 | 3;
          *(ulong *)(uVar28 + lVar20 + 8) = *(ulong *)(uVar28 + lVar20 + 8) | 1;
          return puVar5;
        }
        *(ulong *)(lVar20 + 8) = uVar9 | 3;
        *(ulong *)(lVar20 + (uVar9 | 8)) = uVar21 | 1;
        *(ulong *)(lVar20 + uVar28) = uVar21;
        if (uVar16 != 0) {
          lVar23 = *(long *)(param_1 + 8);
          puVar27 = param_1 + (uVar16 >> 2 & 0xfffffffe) * 2 + 0x10;
          uVar25 = 1 << (ulong)((uint)(uVar16 >> 3) & 0x1f);
          puVar15 = puVar27;
          if ((uVar12 & uVar25) == 0) {
            *param_1 = uVar12 | uVar25;
          }
          else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar27 + 4)) {
            puVar15 = *(uint **)(puVar27 + 4);
          }
          *(long *)(puVar27 + 4) = lVar23;
          *(long *)(puVar15 + 6) = lVar23;
          *(uint **)(lVar23 + 0x10) = puVar15;
          *(uint **)(lVar23 + 0x18) = puVar27;
        }
        *(ulong *)(param_1 + 2) = uVar21;
        *(ulong *)(param_1 + 8) = lVar20 + uVar9;
        return puVar5;
      }
      uVar25 = param_1[1];
      if (uVar25 != 0) {
        uVar1 = (uVar25 & -uVar25) - 1;
        uVar19 = uVar1 >> 0xc & 0x10;
        uVar1 = uVar1 >> (ulong)uVar19;
        uVar2 = uVar1 >> (ulong)(uVar1 >> 5 & 8);
        uVar3 = uVar2 >> (ulong)(uVar2 >> 2 & 4);
        uVar4 = uVar3 >> (ulong)(uVar3 >> 1 & 2);
        puVar5 = *(undefined8 **)
                  (param_1 +
                  (ulong)((uVar19 | uVar1 >> 5 & 8 | uVar2 >> 2 & 4 | uVar3 >> 1 & 2 |
                          uVar4 >> 1 & 1) + (uVar4 >> (ulong)(uVar4 >> 1 & 1))) * 2 + 0x94);
        uVar28 = (puVar5[1] & 0xfffffffffffffffc) - uVar9;
        puVar22 = puVar5;
        while ((uVar29 = uVar28, puVar13 = puVar5, puVar5 = (undefined8 *)puVar22[4],
               puVar5 != (undefined8 *)0x0 ||
               (puVar5 = (undefined8 *)puVar22[5], puVar5 != (undefined8 *)0x0))) {
          uVar28 = (puVar5[1] & 0xfffffffffffffffc) - uVar9;
          puVar22 = puVar5;
          if (uVar29 <= uVar28) {
            puVar5 = puVar13;
            uVar28 = uVar29;
          }
        }
        puVar5 = *(undefined8 **)(param_1 + 6);
        if (puVar5 <= puVar13 && puVar13 < (undefined8 *)((long)puVar13 + uVar9)) {
          uVar21 = puVar13[6];
          puVar22 = (undefined8 *)puVar13[3];
          if (puVar22 == puVar13) {
            puVar33 = (undefined8 *)puVar13[5];
            puVar6 = puVar13 + 5;
            if (puVar33 == (undefined8 *)0x0) {
              puVar33 = (undefined8 *)puVar13[4];
              puVar6 = puVar13 + 4;
              if (puVar33 == (undefined8 *)0x0) {
                puVar22 = (undefined8 *)0x0;
                goto LAB_100615704;
              }
            }
            do {
              do {
                puVar32 = puVar6;
                puVar22 = puVar33;
                puVar33 = (undefined8 *)puVar22[5];
                puVar6 = puVar22 + 5;
              } while (puVar33 != (undefined8 *)0x0);
              puVar33 = (undefined8 *)puVar22[4];
              puVar6 = puVar22 + 4;
            } while (puVar33 != (undefined8 *)0x0);
            if (puVar5 <= puVar32) {
              *puVar32 = 0;
            }
          }
          else {
            puVar33 = (undefined8 *)puVar13[2];
            if (puVar5 <= puVar33) {
              puVar33[3] = puVar22;
              puVar22[2] = puVar33;
            }
          }
LAB_100615704:
          if (uVar21 != 0) {
            uVar19 = *(uint *)(puVar13 + 7);
            if (puVar13 == *(undefined8 **)(param_1 + (ulong)uVar19 * 2 + 0x94)) {
              *(undefined8 **)(param_1 + (ulong)uVar19 * 2 + 0x94) = puVar22;
              if (puVar22 == (undefined8 *)0x0) {
                param_1[1] = uVar25 & (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
                goto LAB_100615a28;
              }
            }
            else {
              if (*(ulong *)(param_1 + 6) <= uVar21) {
                if (*(undefined8 **)(uVar21 + 0x20) == puVar13) {
                  *(undefined8 **)(uVar21 + 0x20) = puVar22;
                }
                else {
                  *(undefined8 **)(uVar21 + 0x28) = puVar22;
                }
              }
              if (puVar22 == (undefined8 *)0x0) goto LAB_100615a28;
            }
            puVar5 = *(undefined8 **)(param_1 + 6);
            if (puVar5 <= puVar22) {
              puVar22[6] = uVar21;
              puVar33 = (undefined8 *)puVar13[4];
              if ((puVar33 != (undefined8 *)0x0) && (puVar5 <= puVar33)) {
                puVar22[4] = puVar33;
                puVar33[6] = puVar22;
              }
              uVar21 = puVar13[5];
              if ((uVar21 != 0) && (*(ulong *)(param_1 + 6) <= uVar21)) {
                puVar22[5] = uVar21;
                *(undefined8 **)(uVar21 + 0x30) = puVar22;
              }
            }
          }
LAB_100615a28:
          if (uVar29 < 0x20) {
            uVar29 = uVar29 + uVar9;
            puVar13[1] = uVar29 | 3;
            *(ulong *)((long)puVar13 + uVar29 + 8) = *(ulong *)((long)puVar13 + uVar29 + 8) | 1;
            return puVar13 + 2;
          }
          puVar13[1] = uVar9 | 3;
          *(ulong *)((long)puVar13 + (uVar9 | 8)) = uVar29 | 1;
          *(ulong *)((long)puVar13 + uVar29 + uVar9) = uVar29;
          if (uVar16 != 0) {
            lVar23 = *(long *)(param_1 + 8);
            uVar21 = uVar16 >> 2 & 0xfffffffe;
            puVar27 = param_1 + uVar21 * 2 + 0x10;
            uVar25 = 1 << (ulong)((uint)(uVar16 >> 3) & 0x1f);
            puVar15 = puVar27;
            if ((uVar12 & uVar25) == 0) {
              *param_1 = uVar12 | uVar25;
            }
            else if (*(uint **)(param_1 + 6) <= *(uint **)(param_1 + uVar21 * 2 + 0x14)) {
              puVar15 = *(uint **)(param_1 + uVar21 * 2 + 0x14);
            }
            *(long *)(param_1 + uVar21 * 2 + 0x14) = lVar23;
            *(long *)(puVar15 + 6) = lVar23;
            *(uint **)(lVar23 + 0x10) = puVar15;
            *(uint **)(lVar23 + 0x18) = puVar27;
          }
          *(ulong *)(param_1 + 2) = uVar29;
          *(undefined8 **)(param_1 + 8) = (undefined8 *)((long)puVar13 + uVar9);
          return puVar13 + 2;
        }
      }
    }
  }
  else if (param_2 < 0xffffffffffffff80) {
    param_2 = param_2 + 0x17;
    uVar9 = param_2 & 0xfffffffffffffff0;
    uVar12 = param_1[1];
    if (uVar12 != 0) {
      uVar16 = -uVar9;
      if (param_2 >> 8 == 0) {
        uVar25 = 0;
      }
      else if (param_2 >> 0x18 == 0) {
        iVar11 = (int)(param_2 >> 8);
        uVar25 = iVar11 + 0xfff00U >> 0x10 & 8;
        iVar11 = iVar11 << (ulong)uVar25;
        uVar19 = iVar11 + 0x7f000U >> 0x10 & 4;
        iVar11 = iVar11 << (ulong)uVar19;
        uVar1 = iVar11 + 0x3c000U >> 0x10 & 2;
        iVar11 = (0xe - (uVar19 | uVar25 | uVar1)) + ((uint)(iVar11 << (ulong)uVar1) >> 0xf);
        uVar25 = iVar11 * 2 | (uint)(uVar9 >> ((ulong)(iVar11 + 7) & 0x3f)) & 1;
      }
      else {
        uVar25 = 0x1f;
      }
      puVar5 = *(undefined8 **)(param_1 + (ulong)uVar25 * 2 + 0x94);
      if (puVar5 == (undefined8 *)0x0) {
        puVar22 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar22 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)0x0;
        uVar28 = 0;
        if (uVar25 != 0x1f) {
          uVar28 = 0x3f - (ulong)((uVar25 >> 1) + 6);
        }
        uVar28 = uVar9 << (uVar28 & 0x3f);
        do {
          uVar29 = (puVar5[1] & 0xfffffffffffffffc) - uVar9;
          if ((uVar29 < uVar16) &&
             (puVar13 = puVar5, uVar16 = uVar29, puVar33 = puVar5,
             (puVar5[1] & 0xfffffffffffffffc) == uVar9)) goto LAB_1006152b8;
          puVar6 = (undefined8 *)puVar5[5];
          puVar5 = *(undefined8 **)((long)puVar5 + (uVar28 >> 0x3c & 8) + 0x20);
          puVar33 = puVar22;
          if (puVar6 != puVar5) {
            puVar33 = puVar6;
          }
          if (puVar6 != (undefined8 *)0x0) {
            puVar22 = puVar33;
          }
          uVar28 = uVar28 << 1;
        } while (puVar5 != (undefined8 *)0x0);
      }
      uVar29 = uVar16;
      if (puVar22 == (undefined8 *)0x0 && puVar13 == (undefined8 *)0x0) {
        uVar25 = 2 << (ulong)(uVar25 & 0x1f);
        uVar25 = uVar12 & (uVar25 | -uVar25);
        if (uVar25 == 0) goto LAB_100615334;
        uVar19 = (uVar25 & -uVar25) - 1;
        uVar25 = uVar19 >> 0xc & 0x10;
        uVar19 = uVar19 >> (ulong)uVar25;
        uVar1 = uVar19 >> (ulong)(uVar19 >> 5 & 8);
        uVar2 = uVar1 >> (ulong)(uVar1 >> 2 & 4);
        uVar3 = uVar2 >> (ulong)(uVar2 >> 1 & 2);
        puVar22 = *(undefined8 **)
                   (param_1 +
                   (ulong)((uVar25 | uVar19 >> 5 & 8 | uVar1 >> 2 & 4 | uVar2 >> 1 & 2 |
                           uVar3 >> 1 & 1) + (uVar3 >> (ulong)(uVar3 >> 1 & 1))) * 2 + 0x94);
      }
      for (; puVar5 = puVar13, puVar33 = puVar22, puVar22 != (undefined8 *)0x0;
          puVar22 = (undefined8 *)puVar22[5]) {
LAB_1006152b8:
        do {
          puVar22 = puVar33;
          uVar16 = (puVar22[1] & 0xfffffffffffffffc) - uVar9;
          puVar13 = puVar22;
          if (uVar29 <= uVar16) {
            puVar13 = puVar5;
            uVar16 = uVar29;
          }
          uVar29 = uVar16;
          puVar5 = puVar13;
          puVar33 = (undefined8 *)puVar22[4];
        } while ((undefined8 *)puVar22[4] != (undefined8 *)0x0);
      }
      if ((puVar13 != (undefined8 *)0x0) && (uVar29 < *(long *)(param_1 + 2) - uVar9)) {
        puVar22 = *(undefined8 **)(param_1 + 6);
        puVar5 = (undefined8 *)((long)puVar13 + uVar9);
        if (puVar22 <= puVar13 && puVar13 < puVar5) {
          uVar21 = puVar13[6];
          puVar33 = (undefined8 *)puVar13[3];
          if (puVar33 == puVar13) {
            puVar32 = (undefined8 *)puVar13[5];
            puVar6 = puVar13 + 5;
            if (puVar32 == (undefined8 *)0x0) {
              puVar32 = (undefined8 *)puVar13[4];
              puVar6 = puVar13 + 4;
              if (puVar32 == (undefined8 *)0x0) {
                puVar33 = (undefined8 *)0x0;
                goto LAB_1006155b4;
              }
            }
            do {
              do {
                puVar33 = puVar32;
                puVar30 = puVar6;
                puVar32 = (undefined8 *)puVar33[5];
                puVar6 = puVar33 + 5;
              } while (puVar32 != (undefined8 *)0x0);
              puVar32 = (undefined8 *)puVar33[4];
              puVar6 = puVar33 + 4;
            } while (puVar32 != (undefined8 *)0x0);
            if (puVar22 <= puVar30) {
              *puVar30 = 0;
            }
          }
          else {
            puVar6 = (undefined8 *)puVar13[2];
            if (puVar22 <= puVar6) {
              puVar6[3] = puVar33;
              puVar33[2] = puVar6;
            }
          }
LAB_1006155b4:
          if (uVar21 != 0) {
            uVar25 = *(uint *)(puVar13 + 7);
            if (puVar13 == *(undefined8 **)(param_1 + (ulong)uVar25 * 2 + 0x94)) {
              *(undefined8 **)(param_1 + (ulong)uVar25 * 2 + 0x94) = puVar33;
              if (puVar33 == (undefined8 *)0x0) {
                uVar12 = uVar12 & (1 << (ulong)(uVar25 & 0x1f) ^ 0xffffffffU);
                param_1[1] = uVar12;
                goto LAB_1006157b0;
              }
            }
            else {
              if (*(ulong *)(param_1 + 6) <= uVar21) {
                if (*(undefined8 **)(uVar21 + 0x20) == puVar13) {
                  *(undefined8 **)(uVar21 + 0x20) = puVar33;
                }
                else {
                  *(undefined8 **)(uVar21 + 0x28) = puVar33;
                }
              }
              if (puVar33 == (undefined8 *)0x0) goto LAB_1006157b0;
            }
            puVar22 = *(undefined8 **)(param_1 + 6);
            if (puVar22 <= puVar33) {
              puVar33[6] = uVar21;
              puVar6 = (undefined8 *)puVar13[4];
              if ((puVar6 != (undefined8 *)0x0) && (puVar22 <= puVar6)) {
                puVar33[4] = puVar6;
                puVar6[6] = puVar33;
              }
              uVar21 = puVar13[5];
              if ((uVar21 != 0) && (*(ulong *)(param_1 + 6) <= uVar21)) {
                puVar33[5] = uVar21;
                *(undefined8 **)(uVar21 + 0x30) = puVar33;
              }
            }
          }
LAB_1006157b0:
          if (uVar29 < 0x20) {
            uVar29 = uVar29 + uVar9;
            puVar13[1] = uVar29 | 3;
            *(ulong *)((long)puVar13 + uVar29 + 8) = *(ulong *)((long)puVar13 + uVar29 + 8) | 1;
            return puVar13 + 2;
          }
          puVar13[1] = uVar9 | 3;
          *(ulong *)((long)puVar13 + (uVar9 | 8)) = uVar29 | 1;
          *(ulong *)((long)puVar13 + uVar29 + uVar9) = uVar29;
          if (uVar29 < 0x100) {
            uVar21 = uVar29 >> 2 & 0xfffffffe;
            puVar27 = param_1 + uVar21 * 2 + 0x10;
            uVar12 = 1 << (ulong)((uint)(uVar29 >> 3) & 0x1f);
            puVar15 = puVar27;
            if ((*param_1 & uVar12) == 0) {
              *param_1 = *param_1 | uVar12;
            }
            else if (*(uint **)(param_1 + 6) <= *(uint **)(param_1 + uVar21 * 2 + 0x14)) {
              puVar15 = *(uint **)(param_1 + uVar21 * 2 + 0x14);
            }
            *(undefined8 **)(param_1 + uVar21 * 2 + 0x14) = puVar5;
            *(undefined8 **)(puVar15 + 6) = puVar5;
            *(uint **)((long)puVar13 + uVar9 + 0x10) = puVar15;
            *(uint **)((long)puVar13 + uVar9 + 0x18) = puVar27;
            return puVar13 + 2;
          }
          if (uVar29 >> 8 == 0) {
            uVar25 = 0;
          }
          else if (uVar29 >> 0x18 == 0) {
            iVar11 = (int)(uVar29 >> 8);
            uVar25 = iVar11 + 0xfff00U >> 0x10 & 8;
            iVar11 = iVar11 << (ulong)uVar25;
            uVar19 = iVar11 + 0x7f000U >> 0x10 & 4;
            iVar11 = iVar11 << (ulong)uVar19;
            uVar1 = iVar11 + 0x3c000U >> 0x10 & 2;
            iVar11 = (0xe - (uVar19 | uVar25 | uVar1)) + ((uint)(iVar11 << (ulong)uVar1) >> 0xf);
            uVar25 = iVar11 * 2 | (uint)(uVar29 >> ((ulong)(iVar11 + 7) & 0x3f)) & 1;
          }
          else {
            uVar25 = 0x1f;
          }
          puVar31 = (ulong *)(param_1 + (ulong)uVar25 * 2 + 0x94);
          *(uint *)((long)puVar13 + uVar9 + 0x38) = uVar25;
          *(undefined8 *)((long)puVar13 + uVar9 + 0x28) = 0;
          *(undefined8 *)((long)puVar13 + uVar9 + 0x20) = 0;
          uVar19 = 1 << (ulong)(uVar25 & 0x1f);
          if ((uVar12 & uVar19) == 0) {
            param_1[1] = uVar12 | uVar19;
            *puVar31 = (ulong)puVar5;
            *(ulong **)((long)puVar13 + uVar9 + 0x30) = puVar31;
            *(undefined8 **)((long)puVar13 + uVar9 + 0x10) = puVar5;
            *(undefined8 **)((long)puVar13 + uVar9 + 0x18) = puVar5;
            return puVar13 + 2;
          }
          uVar21 = *puVar31;
          if (uVar25 == 0x1f) {
            uVar16 = 0;
          }
          else {
            uVar16 = 0x3f - (ulong)((uVar25 >> 1) + 6);
          }
          if ((*(ulong *)(uVar21 + 8) & 0xfffffffffffffffc) != uVar29) {
            uVar28 = uVar29 << (uVar16 & 0x3f);
            uVar16 = uVar21;
            do {
              puVar31 = (ulong *)(uVar16 + (uVar28 >> 0x3c & 8) + 0x20);
              uVar21 = *puVar31;
              if (uVar21 == 0) {
                if (*(ulong **)(param_1 + 6) <= puVar31) {
                  *puVar31 = (ulong)puVar5;
                  *(ulong *)((long)puVar13 + uVar9 + 0x30) = uVar16;
                  *(undefined8 **)((long)puVar13 + uVar9 + 0x10) = puVar5;
                  *(undefined8 **)((long)puVar13 + uVar9 + 0x18) = puVar5;
                }
                goto LAB_100615b10;
              }
              uVar28 = uVar28 << 1;
              uVar16 = uVar21;
            } while ((*(ulong *)(uVar21 + 8) & 0xfffffffffffffffc) != uVar29);
          }
          uVar16 = *(ulong *)(uVar21 + 0x10);
          if (*(ulong *)(param_1 + 6) <= uVar21 && *(ulong *)(param_1 + 6) <= uVar16) {
            *(undefined8 **)(uVar16 + 0x18) = puVar5;
            *(undefined8 **)(uVar21 + 0x10) = puVar5;
            *(ulong *)((long)puVar13 + uVar9 + 0x10) = uVar16;
            *(ulong *)((long)puVar13 + uVar9 + 0x18) = uVar21;
            *(undefined8 *)((long)puVar13 + uVar9 + 0x30) = 0;
            return puVar13 + 2;
          }
LAB_100615b10:
          return puVar13 + 2;
        }
      }
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
  }
LAB_100615334:
  uVar28 = *(ulong *)(param_1 + 2);
  uVar16 = uVar28 - uVar9;
  if (uVar9 <= uVar28) {
    lVar23 = *(long *)(param_1 + 8);
    if (0x1f < uVar16) {
      *(ulong *)(param_1 + 2) = uVar16;
      *(ulong *)(param_1 + 8) = lVar23 + uVar9;
      *(ulong *)(lVar23 + uVar9 + 8) = uVar16 | 1;
      *(ulong *)(lVar23 + uVar28) = uVar16;
      *(ulong *)(lVar23 + 8) = uVar9 | 3;
      return (undefined8 *)(lVar23 + 0x10);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(ulong *)(lVar23 + 8) = uVar28 | 3;
    *(ulong *)(uVar28 + lVar23 + 8) = *(ulong *)(uVar28 + lVar23 + 8) | 1;
    return (undefined8 *)(lVar23 + 0x10);
  }
  puVar31 = (ulong *)(param_1 + 4);
  uVar28 = *puVar31;
  uVar16 = uVar28 - uVar9;
  if (uVar9 <= uVar28 && uVar16 != 0) {
    *(ulong *)(param_1 + 4) = uVar16;
    goto LAB_100615354;
  }
  pcVar14 = *(code **)(param_1 + 0xee);
  if (pcVar14 == (code *)0x0) {
    return (undefined8 *)0x0;
  }
  if (uVar21 == 0) {
    param_1[0xea] = 0xffffffff;
    param_1[0xeb] = 0xffffffff;
    param_1[0xe8] = 0xffffffff;
    param_1[0xe9] = 0xffffffff;
    param_1[0xec] = 0;
    if (*(long *)(param_1 + 0xe2) == 0) {
      param_1[0xe2] = 0x58585858;
      param_1[0xe3] = 0;
      DAT_101ea3ba8 = 0;
    }
    uVar21 = 0x1000;
    param_1[0xe4] = 0x1000;
    param_1[0xe5] = 0;
    param_1[0xe6] = 0x1000;
    param_1[0xe7] = 0;
  }
  if (((byte)param_1[0xd8] >> 2 & 1) == 0) {
    uVar21 = *(ulong *)(param_1 + 10);
    if (uVar21 != 0) {
      puVar34 = (ulong *)(param_1 + 0xda);
      do {
        if ((*puVar34 <= uVar21) && (uVar21 < *puVar34 + puVar34[1])) {
          uVar21 = ((uVar9 + 0x51) - uVar28) + *(long *)(param_1 + 0xe6) &
                   -*(long *)(param_1 + 0xe6);
          if (0x7ffffffffffffffe < uVar21) goto LAB_100615b34;
          puVar8 = (ulong *)(*pcVar14)(uVar21,*(undefined8 *)(param_1 + 0xf0));
          puVar7 = puVar8;
          if (puVar8 != (ulong *)(*puVar34 + puVar34[1])) goto LAB_100615638;
          goto joined_r0x000100615aec;
        }
        puVar34 = (ulong *)puVar34[2];
      } while (puVar34 != (ulong *)0x0);
    }
    puVar7 = (ulong *)(*pcVar14)(0,*(undefined8 *)(param_1 + 0xf0));
    if (puVar7 == (ulong *)0xffffffffffffffff) {
LAB_100615b34:
      param_1[0xd8] = param_1[0xd8] | 4;
      uVar21 = *(ulong *)(param_1 + 0xe4);
      goto LAB_100615b44;
    }
    uVar21 = uVar9 + *(long *)(param_1 + 0xe6) + 0x51 & -*(long *)(param_1 + 0xe6);
    lVar23 = *(long *)(param_1 + 0xe4);
    if ((lVar23 - 1U & (ulong)puVar7) != 0) {
      uVar21 = (uVar21 - (long)puVar7) + (lVar23 + (long)puVar7 & -lVar23);
    }
    if (0x7ffffffffffffffe < uVar21) goto LAB_100615b34;
    puVar8 = (ulong *)(**(code **)(param_1 + 0xee))(uVar21,*(undefined8 *)(param_1 + 0xf0));
    if (puVar8 != puVar7) {
LAB_100615638:
      puVar7 = puVar8;
      if ((((uVar21 < 0x7fffffffffffffff) && (puVar8 != (ulong *)0xffffffffffffffff)) &&
          (lVar23 = (uVar9 + 0x51) - uVar21, uVar21 <= uVar9 + 0x51 && lVar23 != 0)) &&
         (uVar16 = lVar23 + *(long *)(param_1 + 0xe6) & -*(long *)(param_1 + 0xe6),
         uVar16 < 0x7fffffffffffffff)) {
        lVar23 = (**(code **)(param_1 + 0xee))(uVar16,*(undefined8 *)(param_1 + 0xf0));
        if (lVar23 == -1) {
          (**(code **)(param_1 + 0xee))(-uVar21,*(undefined8 *)(param_1 + 0xf0));
          goto LAB_100615b34;
        }
        uVar21 = uVar16 + uVar21;
      }
joined_r0x000100615aec:
      if (puVar7 == (ulong *)0xffffffffffffffff) goto LAB_100615b34;
    }
  }
  else {
LAB_100615b44:
    uVar16 = 0;
    if (uVar21 != 0) {
      uVar16 = uVar9 / uVar21;
    }
    lVar23 = (uVar16 + 1) * uVar21;
    uVar21 = *(long *)(param_1 + 0xe6) + lVar23 + 0x51U & -*(long *)(param_1 + 0xe6);
    if (0x7ffffffffffffffe < uVar21) {
      return (undefined8 *)0x0;
    }
    puVar7 = (ulong *)(**(code **)(param_1 + 0xee))(uVar21,*(undefined8 *)(param_1 + 0xf0));
    puVar34 = (ulong *)(**(code **)(param_1 + 0xee))(0,*(undefined8 *)(param_1 + 0xf0));
    if ((puVar34 <= puVar7 || puVar7 == (ulong *)0xffffffffffffffff) ||
        puVar34 == (ulong *)0xffffffffffffffff) {
      return (undefined8 *)0x0;
    }
    uVar21 = (long)puVar34 - (long)puVar7;
    if (uVar21 <= lVar23 + 0x50U) {
      return (undefined8 *)0x0;
    }
  }
  uVar16 = *(long *)(param_1 + 0xd4) + uVar21;
  *(ulong *)(param_1 + 0xd4) = uVar16;
  if (*(ulong *)(param_1 + 0xd6) < uVar16) {
    *(ulong *)(param_1 + 0xd6) = uVar16;
  }
  puVar34 = *(ulong **)(param_1 + 10);
  if (puVar34 != (ulong *)0x0) {
    puVar8 = (ulong *)(param_1 + 0xda);
    puVar17 = puVar8;
    do {
      if (puVar7 == (ulong *)((long)*puVar17 + puVar17[1])) {
        if (((((byte)puVar17[3] >> 3 & 1) == 0) && (puVar34 < puVar7)) &&
           ((ulong *)*puVar17 <= puVar34)) {
          puVar17[1] = puVar17[1] + uVar21;
          uVar28 = *puVar31;
          uVar16 = 0;
          if (((ulong)(puVar34 + 2) & 0xf) != 0) {
            uVar16 = (ulong)(uint)-(int)(puVar34 + 2) & 0xf;
          }
          uVar29 = (uVar28 + uVar21) - uVar16;
          *(ulong *)(param_1 + 10) = (long)puVar34 + uVar16;
          *(ulong *)(param_1 + 4) = uVar29;
          *(ulong *)((long)puVar34 + uVar16 + 8) = uVar29 | 1;
          *(undefined8 *)((long)puVar34 + uVar28 + uVar21 + 8) = 0x50;
          goto LAB_100615d28;
        }
        break;
      }
      puVar17 = (ulong *)puVar17[2];
    } while (puVar17 != (ulong *)0x0);
    puVar17 = *(ulong **)(param_1 + 6);
    if (puVar7 < *(ulong **)(param_1 + 6)) {
      *(ulong **)(param_1 + 6) = puVar7;
      puVar17 = puVar7;
    }
    puVar18 = puVar8;
    while (puVar26 = puVar8, *puVar18 != (long)puVar7 + uVar21) {
      puVar18 = (ulong *)puVar18[2];
      if (puVar18 == (ulong *)0x0) goto LAB_100615e88;
    }
    if (((byte)puVar18[3] >> 3 & 1) != 0) goto LAB_100615e88;
    *puVar18 = (ulong)puVar7;
    puVar18[1] = puVar18[1] + uVar21;
    uVar16 = 0;
    if (((ulong)(puVar7 + 2) & 0xf) != 0) {
      uVar16 = (ulong)(uint)-(int)(puVar7 + 2) & 0xf;
    }
    uVar28 = (long)puVar7 + uVar21 + 0x10;
    uVar29 = 0;
    if ((uVar28 & 0xf) != 0) {
      uVar29 = (ulong)(uint)-(int)uVar28 & 0xf;
    }
    puVar31 = (ulong *)((long)puVar7 + uVar29 + uVar21);
    lVar23 = uVar16 + uVar9;
    uVar28 = (long)puVar7 + lVar23;
    uVar24 = (long)puVar31 + (-uVar9 - ((long)puVar7 + uVar16));
    *(ulong *)((long)puVar7 + uVar16 + 8) = uVar9 | 3;
    if (puVar31 == puVar34) {
      lVar20 = *(long *)(param_1 + 4);
      *(ulong *)(param_1 + 4) = lVar20 + uVar24;
      *(ulong *)(param_1 + 10) = uVar28;
      *(ulong *)((long)puVar7 + lVar23 + 8) = lVar20 + uVar24 | 1;
      goto LAB_100616578;
    }
    if (puVar31 == *(ulong **)(param_1 + 8)) {
      uVar24 = *(long *)(param_1 + 2) + uVar24;
      *(ulong *)(param_1 + 2) = uVar24;
      *(ulong *)(param_1 + 8) = uVar28;
      *(ulong *)((long)puVar7 + lVar23 + 8) = uVar24 | 1;
      *(ulong *)((long)puVar7 + uVar24 + lVar23) = uVar24;
      goto LAB_100616578;
    }
    lVar20 = uVar21 + 8;
    uVar9 = *(ulong *)((long)puVar7 + lVar20 + uVar29);
    if (((uint)uVar9 >> 1 & 1) != 0) goto LAB_100616380;
    if (uVar9 < 0x100) {
      puVar31 = *(ulong **)((long)puVar7 + (uVar29 | 0x10) + uVar21);
      puVar34 = *(ulong **)((long)puVar7 + uVar21 + uVar29 + 0x18);
      if (puVar31 == puVar34) {
        *param_1 = *param_1 & (1 << (ulong)((uint)(uVar9 >> 3) & 0x1f) ^ 0xffffffffU);
      }
      else if (((puVar31 == (ulong *)(param_1 + (uVar9 >> 3 & 0x7fffffff) * 4 + 0x10)) ||
               (puVar17 <= puVar31)) &&
              ((puVar34 == (ulong *)(param_1 + (uVar9 >> 3 & 0x7fffffff) * 4 + 0x10) ||
               (puVar17 <= puVar34)))) {
        puVar31[3] = (ulong)puVar34;
        puVar34[2] = (ulong)puVar31;
      }
      goto LAB_100616374;
    }
    uVar10 = *(ulong *)((long)puVar7 + (uVar29 | 0x30) + uVar21);
    puVar34 = *(ulong **)((long)puVar7 + uVar21 + uVar29 + 0x18);
    if (puVar34 == puVar31) {
      puVar8 = (ulong *)((long)puVar7 + lVar20 + (uVar29 | 0x20));
      puVar18 = (ulong *)*puVar8;
      if (puVar18 != (ulong *)0x0) goto LAB_10061628c;
      puVar8 = (ulong *)((long)puVar7 + (uVar29 | 0x20) + uVar21);
      puVar18 = (ulong *)*puVar8;
      if (puVar18 == (ulong *)0x0) {
        puVar34 = (ulong *)0x0;
      }
      else {
LAB_10061628c:
        do {
          do {
            puVar34 = puVar18;
            puVar26 = puVar8;
            puVar18 = (ulong *)puVar34[5];
            puVar8 = puVar34 + 5;
          } while (puVar18 != (ulong *)0x0);
          puVar18 = (ulong *)puVar34[4];
          puVar8 = puVar34 + 4;
        } while (puVar18 != (ulong *)0x0);
        if (puVar17 <= puVar26) {
          *puVar26 = 0;
        }
      }
    }
    else {
      puVar8 = *(ulong **)((long)puVar7 + (uVar29 | 0x10) + uVar21);
      if (puVar17 <= puVar8) {
        puVar8[3] = (ulong)puVar34;
        puVar34[2] = (ulong)puVar8;
      }
    }
    if (uVar10 == 0) goto LAB_100616374;
    uVar12 = *(uint *)((long)puVar7 + uVar21 + uVar29 + 0x38);
    if (puVar31 == *(ulong **)(param_1 + (ulong)uVar12 * 2 + 0x94)) {
      *(ulong **)(param_1 + (ulong)uVar12 * 2 + 0x94) = puVar34;
      if (puVar34 == (ulong *)0x0) {
        param_1[1] = param_1[1] & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
        goto LAB_100616374;
      }
    }
    else {
      if (*(ulong *)(param_1 + 6) <= uVar10) {
        if (*(ulong **)(uVar10 + 0x20) == puVar31) {
          *(ulong **)(uVar10 + 0x20) = puVar34;
        }
        else {
          *(ulong **)(uVar10 + 0x28) = puVar34;
        }
      }
      if (puVar34 == (ulong *)0x0) goto LAB_100616374;
    }
    puVar31 = *(ulong **)(param_1 + 6);
    if (puVar31 <= puVar34) {
      puVar34[6] = uVar10;
      puVar8 = *(ulong **)((long)puVar7 + (uVar29 | 0x20) + uVar21);
      if ((puVar8 != (ulong *)0x0) && (puVar31 <= puVar8)) {
        puVar34[4] = (ulong)puVar8;
        puVar8[6] = (ulong)puVar34;
      }
      uVar10 = *(ulong *)((long)puVar7 + lVar20 + (uVar29 | 0x20));
      if ((uVar10 != 0) && (*(ulong *)(param_1 + 6) <= uVar10)) {
        puVar34[5] = uVar10;
        *(ulong **)(uVar10 + 0x30) = puVar34;
      }
    }
LAB_100616374:
    puVar31 = (ulong *)((long)puVar7 + uVar29 + uVar21 + (uVar9 & 0xfffffffffffffffc));
    uVar24 = (uVar9 & 0xfffffffffffffffc) + uVar24;
LAB_100616380:
    puVar31[1] = puVar31[1] & 0xfffffffffffffffe;
    *(ulong *)((long)puVar7 + lVar23 + 8) = uVar24 | 1;
    *(ulong *)((long)puVar7 + uVar24 + lVar23) = uVar24;
    if (uVar24 < 0x100) {
      uVar21 = uVar24 >> 2 & 0xfffffffe;
      puVar27 = param_1 + uVar21 * 2 + 0x10;
      uVar12 = 1 << (ulong)((uint)(uVar24 >> 3) & 0x1f);
      puVar15 = puVar27;
      if ((*param_1 & uVar12) == 0) {
        *param_1 = *param_1 | uVar12;
      }
      else if (*(uint **)(param_1 + 6) <= *(uint **)(param_1 + uVar21 * 2 + 0x14)) {
        puVar15 = *(uint **)(param_1 + uVar21 * 2 + 0x14);
      }
      *(ulong *)(param_1 + uVar21 * 2 + 0x14) = uVar28;
      *(ulong *)(puVar15 + 6) = uVar28;
      *(uint **)((long)puVar7 + lVar23 + 0x10) = puVar15;
      *(uint **)((long)puVar7 + lVar23 + 0x18) = puVar27;
    }
    else {
      if (uVar24 >> 8 == 0) {
        uVar12 = 0;
      }
      else if (uVar24 >> 0x18 == 0) {
        iVar11 = (int)(uVar24 >> 8);
        uVar12 = iVar11 + 0xfff00U >> 0x10 & 8;
        iVar11 = iVar11 << (ulong)uVar12;
        uVar25 = iVar11 + 0x7f000U >> 0x10 & 4;
        iVar11 = iVar11 << (ulong)uVar25;
        uVar19 = iVar11 + 0x3c000U >> 0x10 & 2;
        iVar11 = (0xe - (uVar25 | uVar12 | uVar19)) + ((uint)(iVar11 << (ulong)uVar19) >> 0xf);
        uVar12 = iVar11 * 2 | (uint)(uVar24 >> ((ulong)(iVar11 + 7) & 0x3f)) & 1;
      }
      else {
        uVar12 = 0x1f;
      }
      puVar31 = (ulong *)(param_1 + (ulong)uVar12 * 2 + 0x94);
      *(uint *)((long)puVar7 + lVar23 + 0x38) = uVar12;
      *(undefined8 *)((long)puVar7 + lVar23 + 0x28) = 0;
      *(undefined8 *)((long)puVar7 + lVar23 + 0x20) = 0;
      uVar25 = 1 << (ulong)(uVar12 & 0x1f);
      if ((param_1[1] & uVar25) == 0) {
        param_1[1] = param_1[1] | uVar25;
        *puVar31 = uVar28;
        *(ulong **)((long)puVar7 + lVar23 + 0x30) = puVar31;
        *(ulong *)((long)puVar7 + lVar23 + 0x10) = uVar28;
        *(ulong *)((long)puVar7 + lVar23 + 0x18) = uVar28;
      }
      else {
        uVar21 = *puVar31;
        if (uVar12 == 0x1f) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0x3f - (ulong)((uVar12 >> 1) + 6);
        }
        if ((*(ulong *)(uVar21 + 8) & 0xfffffffffffffffc) != uVar24) {
          uVar29 = uVar24 << (uVar9 & 0x3f);
          uVar9 = uVar21;
          do {
            puVar31 = (ulong *)(uVar9 + (uVar29 >> 0x3c & 8) + 0x20);
            uVar21 = *puVar31;
            if (uVar21 == 0) {
              if (*(ulong **)(param_1 + 6) <= puVar31) {
                *puVar31 = uVar28;
                *(ulong *)((long)puVar7 + lVar23 + 0x30) = uVar9;
                *(ulong *)((long)puVar7 + lVar23 + 0x10) = uVar28;
                *(ulong *)((long)puVar7 + lVar23 + 0x18) = uVar28;
              }
              goto LAB_100616578;
            }
            uVar29 = uVar29 << 1;
            uVar9 = uVar21;
          } while ((*(ulong *)(uVar21 + 8) & 0xfffffffffffffffc) != uVar24);
        }
        uVar9 = *(ulong *)(uVar21 + 0x10);
        if (*(ulong *)(param_1 + 6) <= uVar21 && *(ulong *)(param_1 + 6) <= uVar9) {
          *(ulong *)(uVar9 + 0x18) = uVar28;
          *(ulong *)(uVar21 + 0x10) = uVar28;
          *(ulong *)((long)puVar7 + lVar23 + 0x10) = uVar9;
          *(ulong *)((long)puVar7 + lVar23 + 0x18) = uVar21;
          *(undefined8 *)((long)puVar7 + lVar23 + 0x30) = 0;
        }
      }
    }
LAB_100616578:
    return (undefined8 *)((long)puVar7 + (uVar16 | 0x10));
  }
  lVar23 = 0;
  *(ulong **)(param_1 + 6) = puVar7;
  *(ulong **)(param_1 + 0xda) = puVar7;
  *(ulong *)(param_1 + 0xdc) = uVar21;
  param_1[0xe0] = 0;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0xe2);
  do {
    lVar20 = (long)param_1 + lVar23 + 0x40;
    *(long *)((long)param_1 + lVar23 + 0x50) = lVar20;
    *(long *)((long)param_1 + lVar23 + 0x58) = lVar20;
    lVar23 = lVar23 + 0x10;
  } while (lVar23 != 0x200);
  if (param_1 == (uint *)0x101ea3848) {
    uVar16 = 0;
    if (((ulong)(puVar7 + 2) & 0xf) != 0) {
      uVar16 = (ulong)(uint)-(int)(puVar7 + 2) & 0xf;
    }
    lRam0000000101ea3870 = (long)puVar7 + uVar16;
    DAT_101ea3858 = (uVar21 - 0x50) - uVar16;
    puVar31 = &DAT_101ea3858;
    *(ulong *)(lRam0000000101ea3870 + 8) = DAT_101ea3858 | 1;
    *(undefined8 *)((long)puVar7 + (uVar21 - 0x48)) = 0x50;
    DAT_101ea3878 = DAT_101ea3bf0;
  }
  else {
    uVar16 = *(ulong *)(param_1 + -2) & 0xfffffffffffffffc;
    lVar23 = uVar21 - ((long)param_1 + (uVar16 - 0x10));
    uVar21 = 0;
    if (((long)param_1 + uVar16 & 0xf) != 0) {
      uVar21 = (ulong)(uint)-(int)((long)param_1 + uVar16) & 0xf;
    }
    uVar28 = (long)puVar7 + ((lVar23 + -0x50) - uVar21);
    *(ulong *)(param_1 + 10) = (long)param_1 + (uVar16 - 0x10) + uVar21;
    *(ulong *)(param_1 + 4) = uVar28;
    *(ulong *)((long)param_1 + uVar16 + uVar21 + -8) = uVar28 | 1;
    *(undefined8 *)((long)param_1 + (long)puVar7 + uVar16 + lVar23 + -0x58) = 0x50;
LAB_100615d28:
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xea);
  }
  goto LAB_1006161f0;
LAB_100615e88:
  puVar17 = (ulong *)*puVar26;
  if (puVar17 <= puVar34) {
    uVar16 = puVar26[1];
    if (puVar34 < (ulong *)((long)puVar17 + uVar16)) goto code_r0x000100615ea4;
  }
  puVar26 = (ulong *)puVar26[2];
  goto LAB_100615e88;
code_r0x000100615ea4:
  uVar29 = (long)puVar17 + (uVar16 - 0x4f);
  uVar28 = 0;
  if ((uVar29 & 0xf) != 0) {
    uVar28 = (ulong)(uint)-(int)uVar29 & 0xf;
  }
  puVar18 = (ulong *)((long)puVar17 + (uVar16 - 0x5f) + uVar28);
  puVar26 = puVar34;
  if (puVar34 + 4 <= puVar18) {
    puVar26 = puVar18;
  }
  uVar28 = 0;
  if (((ulong)(puVar7 + 2) & 0xf) != 0) {
    uVar28 = (ulong)(uint)-(int)(puVar7 + 2) & 0xf;
  }
  uVar29 = (uVar21 - 0x50) - uVar28;
  *(ulong *)(param_1 + 10) = (long)puVar7 + uVar28;
  *(ulong *)(param_1 + 4) = uVar29;
  *(ulong *)((long)puVar7 + uVar28 + 8) = uVar29 | 1;
  *(undefined8 *)((long)puVar7 + (uVar21 - 0x48)) = 0x50;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xea);
  puVar26[1] = 0x33;
  uVar28 = *(ulong *)(param_1 + 0xde);
  puVar26[5] = *(ulong *)(param_1 + 0xe0);
  puVar26[4] = uVar28;
  uVar28 = *puVar8;
  puVar26[3] = *(ulong *)(param_1 + 0xdc);
  puVar26[2] = uVar28;
  *(ulong **)(param_1 + 0xda) = puVar7;
  *(ulong *)(param_1 + 0xdc) = uVar21;
  param_1[0xe0] = 0;
  *(ulong **)(param_1 + 0xde) = puVar26 + 2;
  puVar26[7] = 0xb;
  for (puVar7 = puVar26 + 8; puVar7 < (ulong *)((long)puVar17 + uVar16); puVar7 = puVar7 + 1) {
    *puVar7 = 0xb;
  }
  uVar21 = (long)puVar26 - (long)puVar34;
  if (uVar21 != 0) {
    puVar26[1] = puVar26[1] & 0xfffffffffffffffe;
    puVar34[1] = uVar21 | 1;
    *puVar26 = uVar21;
    if (uVar21 < 0x100) {
      uVar16 = uVar21 >> 2 & 0xfffffffe;
      puVar27 = param_1 + uVar16 * 2 + 0x10;
      uVar12 = 1 << (ulong)((uint)(uVar21 >> 3) & 0x1f);
      puVar15 = puVar27;
      if ((*param_1 & uVar12) == 0) {
        *param_1 = *param_1 | uVar12;
      }
      else if (*(uint **)(param_1 + 6) <= *(uint **)(param_1 + uVar16 * 2 + 0x14)) {
        puVar15 = *(uint **)(param_1 + uVar16 * 2 + 0x14);
      }
      *(ulong **)(param_1 + uVar16 * 2 + 0x14) = puVar34;
      *(ulong **)(puVar15 + 6) = puVar34;
      puVar34[2] = (ulong)puVar15;
      puVar34[3] = (ulong)puVar27;
    }
    else {
      if (uVar21 >> 8 == 0) {
        uVar12 = 0;
      }
      else if (uVar21 >> 0x18 == 0) {
        iVar11 = (int)(uVar21 >> 8);
        uVar12 = iVar11 + 0xfff00U >> 0x10 & 8;
        iVar11 = iVar11 << (ulong)uVar12;
        uVar25 = iVar11 + 0x7f000U >> 0x10 & 4;
        iVar11 = iVar11 << (ulong)uVar25;
        uVar19 = iVar11 + 0x3c000U >> 0x10 & 2;
        iVar11 = (0xe - (uVar25 | uVar12 | uVar19)) + ((uint)(iVar11 << (ulong)uVar19) >> 0xf);
        uVar12 = iVar11 * 2 | (uint)(uVar21 >> ((ulong)(iVar11 + 7) & 0x3f)) & 1;
      }
      else {
        uVar12 = 0x1f;
      }
      puVar7 = (ulong *)(param_1 + (ulong)uVar12 * 2 + 0x94);
      *(uint *)(puVar34 + 7) = uVar12;
      puVar34[4] = 0;
      puVar34[5] = 0;
      uVar25 = 1 << (ulong)(uVar12 & 0x1f);
      if ((param_1[1] & uVar25) == 0) {
        param_1[1] = param_1[1] | uVar25;
        *puVar7 = (ulong)puVar34;
        puVar34[6] = (ulong)puVar7;
LAB_1006161e8:
        puVar34[3] = (ulong)puVar34;
        puVar34[2] = (ulong)puVar34;
      }
      else {
        uVar28 = *puVar7;
        uVar16 = 0;
        if (uVar12 != 0x1f) {
          uVar16 = 0x3f - (ulong)((uVar12 >> 1) + 6);
        }
        if ((*(ulong *)(uVar28 + 8) & 0xfffffffffffffffc) != uVar21) {
          uVar29 = uVar21 << (uVar16 & 0x3f);
          uVar16 = uVar28;
          do {
            puVar7 = (ulong *)(uVar16 + (uVar29 >> 0x3c & 8) + 0x20);
            uVar28 = *puVar7;
            if (uVar28 == 0) {
              if (puVar7 < *(ulong **)(param_1 + 6)) goto LAB_1006161f0;
              *puVar7 = (ulong)puVar34;
              puVar34[6] = uVar16;
              goto LAB_1006161e8;
            }
            uVar29 = uVar29 << 1;
            uVar16 = uVar28;
          } while ((*(ulong *)(uVar28 + 8) & 0xfffffffffffffffc) != uVar21);
        }
        uVar21 = *(ulong *)(uVar28 + 0x10);
        if (*(ulong *)(param_1 + 6) <= uVar28 && *(ulong *)(param_1 + 6) <= uVar21) {
          *(ulong **)(uVar21 + 0x18) = puVar34;
          *(ulong **)(uVar28 + 0x10) = puVar34;
          puVar34[2] = uVar21;
          puVar34[3] = uVar28;
          puVar34[6] = 0;
        }
      }
    }
  }
LAB_1006161f0:
  uVar16 = *puVar31 - uVar9;
  if (*puVar31 < uVar9 || uVar16 == 0) {
    return (undefined8 *)0x0;
  }
  *puVar31 = uVar16;
LAB_100615354:
  lVar23 = *(long *)(param_1 + 10);
  *(ulong *)(param_1 + 10) = lVar23 + uVar9;
  *(ulong *)(lVar23 + uVar9 + 8) = uVar16 | 1;
  *(ulong *)(lVar23 + 8) = uVar9 | 3;
  return (undefined8 *)(lVar23 + 0x10);
}




void FUN_1006165a0(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  
  if (param_2 == 0) {
    return;
  }
  puVar4 = (ulong *)(param_2 + -0x10);
  if (*(long *)(param_1 + 0xe4) == 0) {
    param_1[0xea] = 0xffffffff;
    param_1[0xeb] = 0xffffffff;
    param_1[0xe8] = 0xffffffff;
    param_1[0xe9] = 0xffffffff;
    param_1[0xec] = 0;
    if (*(long *)(param_1 + 0xe2) == 0) {
      param_1[0xe2] = 0x58585858;
      param_1[0xe3] = 0;
      DAT_101ea3ba8 = 0;
    }
    param_1[0xe4] = 0x1000;
    param_1[0xe5] = 0;
    param_1[0xe6] = 0x1000;
    param_1[0xe7] = 0;
  }
  puVar17 = *(ulong **)(param_1 + 6);
  if (puVar4 < puVar17) {
    return;
  }
  uVar5 = *(ulong *)(param_2 + -8);
  if (((uint)uVar5 >> 1 & 1) == 0) {
    return;
  }
  uVar9 = uVar5 & 0xfffffffffffffffc;
  puVar12 = (ulong *)(uVar9 + param_2 + -0x10);
  uVar6 = uVar9;
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_2 + -0x10);
    lVar13 = -0x10 - uVar5;
    puVar4 = (ulong *)(param_2 + lVar13);
    if (puVar4 < puVar17) {
      return;
    }
    uVar6 = uVar5 + uVar9;
    if (puVar4 == *(ulong **)(param_1 + 8)) {
      uVar5 = *(ulong *)(param_2 + (uVar9 - 8));
      if ((uVar5 & 3) == 3) {
        *(ulong *)(param_1 + 2) = uVar6;
        *(ulong *)(param_2 + (uVar9 - 8)) = uVar5 & 0xfffffffffffffffe;
        *(ulong *)(lVar13 + param_2 + 8) = uVar6 | 1;
        *puVar12 = uVar6;
        return;
      }
    }
    else if (uVar5 < 0x100) {
      puVar14 = *(ulong **)(lVar13 + param_2 + 0x10);
      puVar18 = *(ulong **)(lVar13 + param_2 + 0x18);
      if (puVar14 == puVar18) {
        *param_1 = *param_1 & (1 << (ulong)((uint)(uVar5 >> 3) & 0x1f) ^ 0xffffffffU);
      }
      else if ((puVar14 == (ulong *)(param_1 + (uVar5 >> 3 & 0x7fffffff) * 4 + 0x10) ||
                puVar17 <= puVar14) &&
              ((puVar18 == (ulong *)(param_1 + (uVar5 >> 3 & 0x7fffffff) * 4 + 0x10) ||
               (puVar17 <= puVar18)))) {
        puVar14[3] = (ulong)puVar18;
        puVar18[2] = (ulong)puVar14;
      }
    }
    else {
      lVar1 = lVar13 + param_2;
      uVar5 = *(ulong *)(lVar1 + 0x30);
      puVar14 = *(ulong **)(lVar1 + 0x18);
      if (puVar14 == puVar4) {
        puVar20 = *(ulong **)(lVar1 + 0x28);
        puVar18 = (ulong *)(lVar1 + 0x28);
        if (puVar20 == (ulong *)0x0) {
          puVar18 = (ulong *)(lVar13 + param_2 + 0x20);
          puVar20 = (ulong *)*puVar18;
          if (puVar20 == (ulong *)0x0) {
            puVar14 = (ulong *)0x0;
            goto LAB_10061682c;
          }
        }
        do {
          do {
            puVar14 = puVar20;
            puVar19 = puVar18;
            puVar20 = (ulong *)puVar14[5];
            puVar18 = puVar14 + 5;
          } while (puVar20 != (ulong *)0x0);
          puVar20 = (ulong *)puVar14[4];
          puVar18 = puVar14 + 4;
        } while (puVar20 != (ulong *)0x0);
        if (puVar17 <= puVar19) {
          *puVar19 = 0;
        }
      }
      else {
        puVar18 = *(ulong **)(lVar1 + 0x10);
        if (puVar17 <= puVar18) {
          puVar18[3] = (ulong)puVar14;
          puVar14[2] = (ulong)puVar18;
        }
      }
LAB_10061682c:
      if (uVar5 != 0) {
        uVar11 = *(uint *)(lVar13 + param_2 + 0x38);
        if (puVar4 == *(ulong **)(param_1 + (ulong)uVar11 * 2 + 0x94)) {
          *(ulong **)(param_1 + (ulong)uVar11 * 2 + 0x94) = puVar14;
          if (puVar14 != (ulong *)0x0) goto LAB_1006168e0;
          param_1[1] = param_1[1] & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
        }
        else {
          if (*(ulong *)(param_1 + 6) <= uVar5) {
            if (*(ulong **)(uVar5 + 0x20) == puVar4) {
              *(ulong **)(uVar5 + 0x20) = puVar14;
            }
            else {
              *(ulong **)(uVar5 + 0x28) = puVar14;
            }
          }
          if (puVar14 != (ulong *)0x0) {
LAB_1006168e0:
            puVar17 = *(ulong **)(param_1 + 6);
            if (puVar17 <= puVar14) {
              puVar14[6] = uVar5;
              puVar18 = *(ulong **)(lVar13 + param_2 + 0x20);
              if ((puVar18 != (ulong *)0x0) && (puVar17 <= puVar18)) {
                puVar14[4] = (ulong)puVar18;
                puVar18[6] = (ulong)puVar14;
              }
              uVar5 = *(ulong *)(lVar13 + param_2 + 0x28);
              if ((uVar5 != 0) && (*(ulong *)(param_1 + 6) <= uVar5)) {
                puVar14[5] = uVar5;
                *(ulong **)(uVar5 + 0x30) = puVar14;
              }
            }
          }
        }
      }
    }
  }
  if (puVar12 <= puVar4) {
    return;
  }
  uVar5 = *(ulong *)(param_2 + (uVar9 - 8));
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((uint)uVar5 >> 1 & 1) != 0) {
    *(ulong *)(param_2 + (uVar9 - 8)) = uVar5 & 0xfffffffffffffffe;
    puVar4[1] = uVar6 | 1;
    *(ulong *)((long)puVar4 + uVar6) = uVar6;
    goto LAB_100616a58;
  }
  if (puVar12 == *(ulong **)(param_1 + 10)) {
    lVar13 = *(long *)(param_1 + 4);
    *(ulong *)(param_1 + 4) = lVar13 + uVar6;
    *(ulong **)(param_1 + 10) = puVar4;
    puVar4[1] = lVar13 + uVar6 | 1;
    if (puVar4 != *(ulong **)(param_1 + 8)) {
      return;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (puVar12 == *(ulong **)(param_1 + 8)) {
    uVar6 = *(long *)(param_1 + 2) + uVar6;
    *(ulong *)(param_1 + 2) = uVar6;
    *(ulong **)(param_1 + 8) = puVar4;
    puVar4[1] = uVar6 | 1;
    *(ulong *)((long)puVar4 + uVar6) = uVar6;
    return;
  }
  uVar6 = (uVar5 & 0xfffffffffffffffc) + uVar6;
  if (uVar5 < 0x100) {
    puVar7 = *(uint **)(param_2 + uVar9);
    puVar10 = (uint *)((undefined8 *)(param_2 + uVar9))[1];
    if (puVar7 == puVar10) {
      *param_1 = *param_1 & (1 << (ulong)((uint)(uVar5 >> 3) & 0x1f) ^ 0xffffffffU);
    }
    else if (((puVar7 == param_1 + (uVar5 >> 3 & 0x7fffffff) * 4 + 0x10) ||
             (*(uint **)(param_1 + 6) <= puVar7)) &&
            ((puVar10 == param_1 + (uVar5 >> 3 & 0x7fffffff) * 4 + 0x10 ||
             (*(uint **)(param_1 + 6) <= puVar10)))) {
      *(uint **)(puVar7 + 6) = puVar10;
      *(uint **)(puVar10 + 4) = puVar7;
    }
  }
  else {
    lVar13 = uVar9 + param_2;
    uVar5 = *(ulong *)(lVar13 + 0x20);
    puVar17 = *(ulong **)(lVar13 + 8);
    if (puVar17 == puVar12) {
      puVar18 = *(ulong **)(lVar13 + 0x18);
      puVar14 = (ulong *)(lVar13 + 0x18);
      if (puVar18 == (ulong *)0x0) {
        puVar14 = (ulong *)(uVar9 + param_2 + 0x10);
        puVar18 = (ulong *)*puVar14;
        if (puVar18 == (ulong *)0x0) {
          puVar17 = (ulong *)0x0;
          goto LAB_10061698c;
        }
      }
      do {
        do {
          puVar17 = puVar18;
          puVar20 = puVar14;
          puVar18 = (ulong *)puVar17[5];
          puVar14 = puVar17 + 5;
        } while (puVar18 != (ulong *)0x0);
        puVar18 = (ulong *)puVar17[4];
        puVar14 = puVar17 + 4;
      } while (puVar18 != (ulong *)0x0);
      if (*(ulong **)(param_1 + 6) <= puVar20) {
        *puVar20 = 0;
      }
    }
    else {
      uVar16 = *(ulong *)(param_2 + uVar9);
      if (*(ulong *)(param_1 + 6) <= uVar16) {
        *(ulong **)(uVar16 + 0x18) = puVar17;
        puVar17[2] = uVar16;
      }
    }
LAB_10061698c:
    if (uVar5 != 0) {
      uVar11 = *(uint *)(uVar9 + param_2 + 0x28);
      if (puVar12 == *(ulong **)(param_1 + (ulong)uVar11 * 2 + 0x94)) {
        *(ulong **)(param_1 + (ulong)uVar11 * 2 + 0x94) = puVar17;
        if (puVar17 != (ulong *)0x0) goto LAB_1006169f8;
        param_1[1] = param_1[1] & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      }
      else {
        if (*(ulong *)(param_1 + 6) <= uVar5) {
          if (*(ulong **)(uVar5 + 0x20) == puVar12) {
            *(ulong **)(uVar5 + 0x20) = puVar17;
          }
          else {
            *(ulong **)(uVar5 + 0x28) = puVar17;
          }
        }
        if (puVar17 != (ulong *)0x0) {
LAB_1006169f8:
          puVar12 = *(ulong **)(param_1 + 6);
          if (puVar12 <= puVar17) {
            puVar17[6] = uVar5;
            puVar14 = *(ulong **)(uVar9 + param_2 + 0x10);
            if ((puVar14 != (ulong *)0x0) && (puVar12 <= puVar14)) {
              puVar17[4] = (ulong)puVar14;
              puVar14[6] = (ulong)puVar17;
            }
            uVar5 = *(ulong *)(uVar9 + param_2 + 0x18);
            if ((uVar5 != 0) && (*(ulong *)(param_1 + 6) <= uVar5)) {
              puVar17[5] = uVar5;
              *(ulong **)(uVar5 + 0x30) = puVar17;
            }
          }
        }
      }
    }
  }
  puVar4[1] = uVar6 | 1;
  *(ulong *)((long)puVar4 + uVar6) = uVar6;
  if (puVar4 == *(ulong **)(param_1 + 8)) {
    *(ulong *)(param_1 + 2) = uVar6;
    return;
  }
LAB_100616a58:
  if (uVar6 < 0x100) {
    puVar7 = param_1 + (uVar6 >> 2 & 0xfffffffe) * 2 + 0x10;
    uVar11 = 1 << (ulong)((uint)(uVar6 >> 3) & 0x1f);
    puVar10 = puVar7;
    if ((*param_1 & uVar11) == 0) {
      *param_1 = *param_1 | uVar11;
    }
    else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar7 + 4)) {
      puVar10 = *(uint **)(puVar7 + 4);
    }
    *(ulong **)(puVar7 + 4) = puVar4;
    *(ulong **)(puVar10 + 6) = puVar4;
    puVar4[2] = (ulong)puVar10;
    puVar4[3] = (ulong)puVar7;
    return;
  }
  if (uVar6 >> 8 == 0) {
    uVar11 = 0;
  }
  else if (uVar6 >> 0x18 == 0) {
    iVar8 = (int)(uVar6 >> 8);
    uVar11 = iVar8 + 0xfff00U >> 0x10 & 8;
    iVar8 = iVar8 << (ulong)uVar11;
    uVar3 = iVar8 + 0x7f000U >> 0x10 & 4;
    iVar8 = iVar8 << (ulong)uVar3;
    uVar2 = iVar8 + 0x3c000U >> 0x10 & 2;
    iVar8 = (0xe - (uVar3 | uVar11 | uVar2)) + ((uint)(iVar8 << (ulong)uVar2) >> 0xf);
    uVar11 = iVar8 * 2 | (uint)(uVar6 >> ((ulong)(iVar8 + 7) & 0x3f)) & 1;
  }
  else {
    uVar11 = 0x1f;
  }
  puVar7 = param_1 + (ulong)uVar11 * 2 + 0x94;
  *(uint *)(puVar4 + 7) = uVar11;
  puVar4[4] = 0;
  puVar4[5] = 0;
  uVar3 = 1 << (ulong)(uVar11 & 0x1f);
  if ((param_1[1] & uVar3) == 0) {
    param_1[1] = param_1[1] | uVar3;
    *(ulong **)puVar7 = puVar4;
LAB_100616c10:
    puVar4[6] = (ulong)puVar7;
    puVar4[3] = (ulong)puVar4;
    puVar4[2] = (ulong)puVar4;
  }
  else {
    puVar10 = *(uint **)puVar7;
    uVar5 = 0;
    if (uVar11 != 0x1f) {
      uVar5 = 0x3f - (ulong)((uVar11 >> 1) + 6);
    }
    if ((*(ulong *)(puVar10 + 2) & 0xfffffffffffffffc) != uVar6) {
      uVar5 = uVar6 << (uVar5 & 0x3f);
      puVar7 = puVar10;
      do {
        puVar15 = (undefined8 *)((long)puVar7 + (uVar5 >> 0x3c & 8) + 0x20);
        puVar10 = (uint *)*puVar15;
        if (puVar10 == (uint *)0x0) {
          if (puVar15 < *(undefined8 **)(param_1 + 6)) {
            return;
          }
          *puVar15 = puVar4;
          goto LAB_100616c10;
        }
        uVar5 = uVar5 << 1;
        puVar7 = puVar10;
      } while ((*(ulong *)(puVar10 + 2) & 0xfffffffffffffffc) != uVar6);
    }
    puVar7 = *(uint **)(puVar10 + 4);
    if (*(uint **)(param_1 + 6) <= puVar10 && *(uint **)(param_1 + 6) <= puVar7) {
      *(ulong **)(puVar7 + 6) = puVar4;
      *(ulong **)(puVar10 + 4) = puVar4;
      puVar4[2] = (ulong)puVar7;
      puVar4[3] = (ulong)puVar10;
      puVar4[6] = 0;
      return;
    }
  }
  return;
}




void * FUN_100616c28(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  
  if (param_2 == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = param_3 * param_2;
    if (0xffff < (param_3 | param_2)) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = sVar3 / param_2;
      }
      if (uVar1 != param_3) {
        sVar3 = 0xffffffffffffffff;
      }
    }
  }
  pvVar2 = (void *)FUN_100614e50(param_1,sVar3);
  if (pvVar2 != (void *)0x0) {
    _bzero(pvVar2,sVar3);
  }
  return pvVar2;
}




void * FUN_100616c8c(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  size_t sVar6;
  
  if (param_2 == (void *)0x0) {
    pvVar5 = (void *)FUN_100614e50(param_1,param_3);
    return pvVar5;
  }
  if (param_3 < 0xffffffffffffff80) {
    if (*(long *)(param_1 + 0x390) == 0) {
      *(undefined8 *)(param_1 + 0x3a8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x3b0) = 0;
      if (*(long *)(param_1 + 0x388) == 0) {
        *(undefined8 *)(param_1 + 0x388) = 0x58585858;
        DAT_101ea3ba8 = 0;
      }
      *(undefined8 *)(param_1 + 0x390) = 0x1000;
      *(undefined8 *)(param_1 + 0x398) = 0x1000;
    }
    pvVar5 = (void *)0x0;
    uVar4 = *(ulong *)((long)param_2 + -8);
    if ((((uint)uVar4 >> 1 & 1) != 0) && (*(ulong *)(param_1 + 0x18) <= (long)param_2 - 0x10U)) {
      uVar3 = uVar4 & 0xfffffffffffffffc;
      if (-0x10 < (long)(uVar3 - 0x10)) {
        sVar6 = uVar3 - 8;
        if ((*(byte *)((long)param_2 + sVar6) & 1) == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          uVar1 = 0x20;
          if (0x16 < param_3) {
            uVar1 = param_3 + 0x17 & 0xfffffffffffffff0;
          }
          pvVar5 = param_2;
          if (uVar3 < uVar1) {
            if (((long)param_2 + (uVar3 - 0x10) == *(long *)(param_1 + 0x28)) &&
               (uVar3 = *(long *)(param_1 + 0x10) + uVar3, uVar2 = uVar3 - uVar1,
               uVar1 <= uVar3 && uVar2 != 0)) {
              *(ulong *)((long)param_2 + -8) = uVar4 & 1 | uVar1 | 2;
              *(ulong *)((long)param_2 + (uVar1 - 8)) = uVar2 | 1;
              *(ulong *)(param_1 + 0x28) = (long)param_2 + (uVar1 - 0x10);
              *(ulong *)(param_1 + 0x10) = uVar2;
            }
            else {
              pvVar5 = (void *)FUN_100614e50(param_1,param_3);
              if (pvVar5 == (void *)0x0) {
                pvVar5 = (void *)0x0;
              }
              else {
                if (param_3 <= sVar6) {
                  sVar6 = param_3;
                }
                _memcpy(pvVar5,param_2,sVar6);
                FUN_1006165a0(param_1,param_2);
              }
            }
          }
          else if (0x1f < uVar3 - uVar1) {
            *(ulong *)((long)param_2 + -8) = uVar4 & 1 | uVar1 | 2;
            *(ulong *)((long)param_2 + uVar1 + -8) = uVar3 - uVar1 | 3;
            *(ulong *)((long)param_2 + sVar6) = *(ulong *)((long)param_2 + sVar6) | 1;
            if ((long)param_2 + uVar1 != 0) {
              FUN_1006165a0(param_1);
            }
          }
        }
      }
    }
  }
  else {
    pvVar5 = (void *)0x0;
  }
  return pvVar5;
}




long FUN_100616e70(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (0x10 < param_2) {
    uVar2 = 0x20;
    if (0x1f < param_2) {
      uVar2 = param_2;
    }
    uVar5 = 0x20;
    uVar7 = uVar2;
    if ((uVar2 - 1 & uVar2) != 0) {
      do {
        uVar7 = uVar5;
        uVar5 = uVar7 << 1;
      } while (uVar7 < uVar2);
    }
    if (param_3 < -uVar7 - 0x80) {
      uVar2 = 0x20;
      if (0x16 < param_3) {
        uVar2 = param_3 + 0x17 & 0xfffffffffffffff0;
      }
      uVar5 = FUN_100614e50(param_1,uVar7 + uVar2 + 0x18);
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x390) == 0) {
          *(undefined8 *)(param_1 + 0x3a8) = 0xffffffffffffffff;
          *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x3b0) = 0;
          if (*(long *)(param_1 + 0x388) == 0) {
            *(undefined8 *)(param_1 + 0x388) = 0x58585858;
            DAT_101ea3ba8 = 0;
          }
          *(undefined8 *)(param_1 + 0x390) = 0x1000;
          *(undefined8 *)(param_1 + 0x398) = 0x1000;
        }
        lVar4 = uVar5 - 0x10;
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar5 / uVar7;
        }
        if (uVar5 == uVar6 * uVar7) {
          uVar5 = 0;
        }
        else {
          uVar6 = (uVar7 + uVar5) - 1 & -uVar7;
          lVar8 = uVar6 - 0x10;
          lVar3 = -8;
          if ((uVar6 - 0x10) - lVar4 < 0x20) {
            lVar8 = uVar7 + uVar6 + -0x10;
            lVar3 = uVar7 - 8;
          }
          uVar7 = (*(ulong *)(uVar5 - 8) & 0xfffffffffffffffc) - (lVar8 - lVar4);
          *(ulong *)(uVar6 + lVar3) = *(ulong *)(uVar6 + lVar3) & 1 | uVar7 | 2;
          lVar1 = uVar7 + lVar3;
          *(ulong *)(uVar6 + lVar1) = *(ulong *)(uVar6 + lVar1) | 1;
          *(ulong *)(uVar5 - 8) = lVar8 - lVar4 | *(ulong *)(uVar5 - 8) & 1 | 2;
          *(ulong *)(uVar6 + lVar3) = *(ulong *)(uVar6 + lVar3) | 1;
          lVar4 = lVar8;
        }
        uVar7 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffc;
        if (uVar2 + 0x20 < uVar7) {
          *(ulong *)(lVar4 + 8) = uVar2 | *(ulong *)(lVar4 + 8) & 1 | 2;
          *(ulong *)(lVar4 + (uVar2 | 8)) = uVar7 - uVar2 | 3;
          *(ulong *)(uVar7 + lVar4 + 8) = *(ulong *)(uVar7 + lVar4 + 8) | 1;
          lVar8 = uVar2 + lVar4 + 0x10;
        }
        else {
          lVar8 = 0;
        }
        if (uVar5 != 0) {
          FUN_1006165a0(param_1,uVar5);
        }
        if (lVar8 != 0) {
          FUN_1006165a0(param_1,lVar8);
        }
        lVar4 = lVar4 + 0x10;
      }
    }
    else {
      lVar4 = 0;
    }
    return lVar4;
  }
  lVar4 = FUN_100614e50(param_1,param_3);
  return lVar4;
}




void FUN_10061708c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_18;
  
  local_18 = param_3;
  FUN_1006170bc(param_1,param_2,&local_18,3,param_4);
  return;
}




long * FUN_1006170bc(long param_1,ulong param_2,ulong *param_3,uint param_4,long *param_5)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  if (param_5 == (long *)0x0) {
    if (param_2 == 0) {
      plVar2 = (long *)FUN_100614e50(param_1,0);
      return plVar2;
    }
    uVar8 = 0x20;
    if (0x16 < param_2 * 8) {
      uVar8 = param_2 * 8 + 0x17 & 0xfffffffffffffff0;
    }
    param_5 = (long *)0x0;
  }
  else {
    if (param_2 == 0) {
      return param_5;
    }
    uVar8 = 0;
  }
  if ((param_4 & 1) != 0) {
    uVar4 = 0x20;
    if (0x16 < *param_3) {
      uVar4 = *param_3 + 0x17 & 0xfffffffffffffff0;
    }
    uVar6 = uVar4 * param_2;
    goto LAB_100617234;
  }
  if (param_2 == 0) {
    uVar4 = 0;
    uVar6 = 0;
LAB_100617204:
    lVar9 = param_2 - uVar4;
    puVar5 = param_3 + uVar4;
    do {
      uVar4 = 0x20;
      if (0x16 < *puVar5) {
        uVar4 = *puVar5 + 0x17 & 0xfffffffffffffff0;
      }
      uVar6 = uVar4 + uVar6;
      lVar9 = lVar9 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar9 != 0);
  }
  else {
    uVar4 = param_2 & 0xfffffffffffffffc;
    if (uVar4 == 0) {
      uVar4 = 0;
      lVar9 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
    }
    else {
      lVar9 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
      puVar5 = param_3 + 2;
      uVar6 = uVar4;
      do {
        lVar19 = -(ulong)(puVar5[-2] < 0x17);
        lVar20 = -(ulong)(puVar5[-1] < 0x17);
        lVar21 = -(ulong)(*puVar5 < 0x17);
        lVar22 = -(ulong)(puVar5[1] < 0x17);
        lVar13 = puVar5[-2] + 0x17;
        lVar14 = puVar5[-1] + 0x17;
        lVar16 = *puVar5 + 0x17;
        lVar18 = puVar5[1] + 0x17;
        bVar15 = (byte)lVar16 & ~(byte)lVar21;
        bVar17 = (byte)lVar18 & ~(byte)lVar22;
        uVar7 = CONCAT17((byte)((ulong)lVar16 >> 0x38) & ~(byte)((ulong)lVar21 >> 0x38),
                         CONCAT16((byte)((ulong)lVar16 >> 0x30) & ~(byte)((ulong)lVar21 >> 0x30),
                                  CONCAT15((byte)((ulong)lVar16 >> 0x28) &
                                           ~(byte)((ulong)lVar21 >> 0x28),
                                           CONCAT14((byte)((ulong)lVar16 >> 0x20) &
                                                    ~(byte)((ulong)lVar21 >> 0x20),
                                                    CONCAT13((byte)((ulong)lVar16 >> 0x18) &
                                                             ~(byte)((ulong)lVar21 >> 0x18),
                                                             CONCAT12((byte)((ulong)lVar16 >> 0x10)
                                                                      & ~(byte)((ulong)lVar21 >>
                                                                               0x10),
                                                                      CONCAT11((byte)((ulong)lVar16
                                                                                     >> 8) &
                                                                               ~(byte)((ulong)lVar21
                                                                                      >> 8),bVar15))
                                                            ))))) & 0xfffffffffffffff0;
        uVar1 = CONCAT17((byte)((ulong)lVar18 >> 0x38) & ~(byte)((ulong)lVar22 >> 0x38),
                         CONCAT16((byte)((ulong)lVar18 >> 0x30) & ~(byte)((ulong)lVar22 >> 0x30),
                                  CONCAT15((byte)((ulong)lVar18 >> 0x28) &
                                           ~(byte)((ulong)lVar22 >> 0x28),
                                           CONCAT14((byte)((ulong)lVar18 >> 0x20) &
                                                    ~(byte)((ulong)lVar22 >> 0x20),
                                                    CONCAT13((byte)((ulong)lVar18 >> 0x18) &
                                                             ~(byte)((ulong)lVar22 >> 0x18),
                                                             CONCAT12((byte)((ulong)lVar18 >> 0x10)
                                                                      & ~(byte)((ulong)lVar22 >>
                                                                               0x10),
                                                                      CONCAT11((byte)((ulong)lVar18
                                                                                     >> 8) &
                                                                               ~(byte)((ulong)lVar22
                                                                                      >> 8),bVar17))
                                                            ))))) & 0xfffffffffffffff0;
        lVar9 = CONCAT17((byte)((ulong)lVar13 >> 0x38) & ~(byte)((ulong)lVar19 >> 0x38),
                         CONCAT16((byte)((ulong)lVar13 >> 0x30) & ~(byte)((ulong)lVar19 >> 0x30),
                                  CONCAT15((byte)((ulong)lVar13 >> 0x28) &
                                           ~(byte)((ulong)lVar19 >> 0x28),
                                           CONCAT14((byte)((ulong)lVar13 >> 0x20) &
                                                    ~(byte)((ulong)lVar19 >> 0x20),
                                                    CONCAT13((byte)((ulong)lVar13 >> 0x18) &
                                                             ~(byte)((ulong)lVar19 >> 0x18),
                                                             CONCAT12((byte)((ulong)lVar13 >> 0x10)
                                                                      & ~(byte)((ulong)lVar19 >>
                                                                               0x10),
                                                                      CONCAT11((byte)((ulong)lVar13
                                                                                     >> 8) &
                                                                               ~(byte)((ulong)lVar19
                                                                                      >> 8),
                                                                               (byte)lVar19 & 0x20 |
                                                                               (byte)lVar13 &
                                                                               ~(byte)lVar19 & 0xf0)
                                                                     )))))) + lVar9;
        lVar10 = CONCAT17((byte)((ulong)lVar14 >> 0x38) & ~(byte)((ulong)lVar20 >> 0x38),
                          CONCAT16((byte)((ulong)lVar14 >> 0x30) & ~(byte)((ulong)lVar20 >> 0x30),
                                   CONCAT15((byte)((ulong)lVar14 >> 0x28) &
                                            ~(byte)((ulong)lVar20 >> 0x28),
                                            CONCAT14((byte)((ulong)lVar14 >> 0x20) &
                                                     ~(byte)((ulong)lVar20 >> 0x20),
                                                     CONCAT13((byte)((ulong)lVar14 >> 0x18) &
                                                              ~(byte)((ulong)lVar20 >> 0x18),
                                                              CONCAT12((byte)((ulong)lVar14 >> 0x10)
                                                                       & ~(byte)((ulong)lVar20 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((ulong)lVar14
                                                                                      >> 8) &
                                                                                ~(byte)((ulong)
                                                  lVar20 >> 8),
                                                  (byte)lVar20 & 0x20 |
                                                  (byte)lVar14 & ~(byte)lVar20 & 0xf0))))))) +
                 lVar10;
        lVar11 = CONCAT17((char)(uVar7 >> 0x38),
                          CONCAT16((char)(uVar7 >> 0x30),
                                   CONCAT15((char)(uVar7 >> 0x28),
                                            CONCAT14((char)(uVar7 >> 0x20),
                                                     CONCAT13((char)(uVar7 >> 0x18),
                                                              CONCAT12((char)(uVar7 >> 0x10),
                                                                       CONCAT11((char)(uVar7 >> 8),
                                                                                (byte)lVar21 & 0x20
                                                                                | bVar15 & 0xf0)))))
                                  )) + lVar11;
        lVar12 = CONCAT17((char)(uVar1 >> 0x38),
                          CONCAT16((char)(uVar1 >> 0x30),
                                   CONCAT15((char)(uVar1 >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x20),
                                                     CONCAT13((char)(uVar1 >> 0x18),
                                                              CONCAT12((char)(uVar1 >> 0x10),
                                                                       CONCAT11((char)(uVar1 >> 8),
                                                                                (byte)lVar22 & 0x20
                                                                                | bVar17 & 0xf0)))))
                                  )) + lVar12;
        uVar6 = uVar6 - 4;
        puVar5 = puVar5 + 4;
      } while (uVar6 != 0);
    }
    uVar6 = lVar11 + lVar9 + lVar12 + lVar10;
    if (uVar4 != param_2) goto LAB_100617204;
  }
  uVar4 = 0;
LAB_100617234:
  pvVar3 = (void *)FUN_100614e50(param_1,uVar8 + uVar6 + -8);
  if (pvVar3 == (void *)0x0) {
    param_5 = (long *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x390) == 0) {
      *(undefined8 *)(param_1 + 0x3a8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x3b0) = 0;
      if (*(long *)(param_1 + 0x388) == 0) {
        *(undefined8 *)(param_1 + 0x388) = 0x58585858;
        DAT_101ea3ba8 = 0;
      }
      *(undefined8 *)(param_1 + 0x390) = 0x1000;
      *(undefined8 *)(param_1 + 0x398) = 0x1000;
    }
    uVar7 = *(ulong *)((long)pvVar3 + -8) & 0xfffffffffffffffc;
    if ((param_4 >> 1 & 1) != 0) {
      _bzero(pvVar3,(-8 - uVar8) + uVar7);
    }
    lVar9 = (long)pvVar3 + -0x10;
    if (param_5 == (long *)0x0) {
      param_5 = (long *)((long)pvVar3 + uVar6);
      param_5[-1] = uVar7 - uVar6 | 3;
      uVar7 = uVar6;
    }
    *param_5 = (long)pvVar3;
    plVar2 = param_5;
    while (param_2 = param_2 - 1, param_2 != 0) {
      plVar2 = plVar2 + 1;
      uVar8 = uVar4;
      if (uVar4 == 0) {
        uVar8 = 0x20;
        if (0x16 < *param_3) {
          uVar8 = *param_3 + 0x17 & 0xfffffffffffffff0;
        }
      }
      uVar7 = uVar7 - uVar8;
      *(ulong *)(lVar9 + 8) = uVar8 | 3;
      lVar9 = lVar9 + uVar8;
      *plVar2 = lVar9 + 0x10;
      param_3 = param_3 + 1;
    }
    *(ulong *)(lVar9 + 8) = uVar7 | 3;
  }
  return param_5;
}




void FUN_100617350(void)

{
  FUN_1006170bc();
  return;
}




undefined8 FUN_100617360(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0x390) == 0) {
    *(undefined8 *)(param_1 + 0x3a8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    if (*(long *)(param_1 + 0x388) == 0) {
      *(undefined8 *)(param_1 + 0x388) = 0x58585858;
      DAT_101ea3ba8 = 0;
    }
    *(undefined8 *)(param_1 + 0x390) = 0x1000;
    *(undefined8 *)(param_1 + 0x398) = 0x1000;
  }
  if ((param_2 < 0xffffffffffffff80) && (uVar2 = *(ulong *)(param_1 + 0x28), uVar2 != 0)) {
    if (param_2 + 0x50 < *(ulong *)(param_1 + 0x10)) {
      uVar4 = *(ulong *)(param_1 + 0x398);
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = ((-0x51 - param_2) + *(ulong *)(param_1 + 0x10) + uVar4) / uVar4;
      }
      uVar7 = (uVar7 - 1) * uVar4;
      puVar5 = (ulong *)(param_1 + 0x368);
      do {
        if ((*puVar5 <= uVar2) && (uVar2 < *puVar5 + puVar5[1])) goto LAB_100617428;
        puVar5 = (ulong *)puVar5[2];
      } while (puVar5 != (ulong *)0x0);
      puVar5 = (ulong *)0x0;
LAB_100617428:
      if ((((byte)puVar5[3] >> 3 & 1) == 0) &&
         (uVar2 = (**(code **)(param_1 + 0x3b8))(0,*(undefined8 *)(param_1 + 0x3c0)),
         uVar2 == *puVar5 + puVar5[1])) {
        iVar6 = (int)uVar7;
        if (0x7ffffffffffffffe < uVar7) {
          iVar6 = -(int)uVar4;
        }
        lVar1 = (**(code **)(param_1 + 0x3b8))(-iVar6,*(undefined8 *)(param_1 + 0x3c0));
        uVar7 = (**(code **)(param_1 + 0x3b8))(0,*(undefined8 *)(param_1 + 0x3c0));
        if ((lVar1 != -1 && uVar7 < uVar2) && (lVar1 = uVar2 - uVar7, lVar1 != 0)) {
          puVar5[1] = puVar5[1] - lVar1;
          *(long *)(param_1 + 0x350) = *(long *)(param_1 + 0x350) - lVar1;
          lVar3 = *(long *)(param_1 + 0x28);
          lVar1 = *(long *)(param_1 + 0x10) - lVar1;
          uVar2 = 0;
          if ((lVar3 + 0x10U & 0xf) != 0) {
            uVar2 = (ulong)(uint)-(int)(lVar3 + 0x10U) & 0xf;
          }
          uVar7 = lVar1 - uVar2;
          *(ulong *)(param_1 + 0x28) = lVar3 + uVar2;
          *(ulong *)(param_1 + 0x10) = uVar7;
          *(ulong *)(lVar3 + uVar2 + 8) = uVar7 | 1;
          *(undefined8 *)(lVar1 + lVar3 + 8) = 0x50;
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x3a8);
          return 1;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  }
  return 0;
}




undefined8 FUN_10061753c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x350);
}




undefined8 FUN_100617544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x358);
}




ulong FUN_10061754c(long param_1)

{
  return *(ulong *)(param_1 + -8) & 0xfffffffffffffffc;
}




void FUN_100617558(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  _memset(param_1,0,0x50);
  if (*(long *)(param_2 + 0x390) == 0) {
    *(undefined8 *)(param_2 + 0x3a8) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x3a0) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x3b0) = 0;
    if (*(long *)(param_2 + 0x388) == 0) {
      *(undefined8 *)(param_2 + 0x388) = 0x58585858;
      DAT_101ea3ba8 = 0;
    }
    *(undefined8 *)(param_2 + 0x390) = 0x1000;
    *(undefined8 *)(param_2 + 0x398) = 0x1000;
  }
  if (*(ulong *)(param_2 + 0x28) != 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = lVar3 + 0x50;
    puVar7 = (ulong *)(param_2 + 0x368);
    lVar6 = 1;
    lVar5 = lVar4;
    do {
      uVar1 = *puVar7;
      uVar8 = 0;
      if ((uVar1 + 0x10 & 0xf) != 0) {
        uVar8 = (ulong)(uint)-(int)(uVar1 + 0x10) & 0xf;
      }
      uVar8 = uVar1 + uVar8;
      do {
        if (((uVar1 + puVar7[1] <= uVar8) || (uVar8 == *(ulong *)(param_2 + 0x28))) ||
           (uVar9 = *(ulong *)(uVar8 + 8), uVar9 == 0xb)) break;
        uVar2 = uVar9 & 0xfffffffffffffffc;
        lVar4 = uVar2 + lVar4;
        if ((uVar9 & 2) == 0) {
          lVar6 = lVar6 + 1;
          lVar5 = uVar2 + lVar5;
        }
        uVar8 = uVar8 + uVar2;
      } while (uVar1 <= uVar8);
      puVar7 = (ulong *)puVar7[2];
    } while (puVar7 != (ulong *)0x0);
    *param_1 = lVar4;
    param_1[1] = lVar6;
    lVar6 = *(long *)(param_2 + 0x350);
    param_1[4] = lVar6 - lVar4;
    param_1[5] = *(long *)(param_2 + 0x358);
    param_1[7] = lVar6 - lVar5;
    param_1[8] = lVar5;
    param_1[9] = lVar3;
  }
  return;
}




undefined8 FUN_10061767c(void)

{
  return 0;
}




undefined8 FUN_100617684(void)

{
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_10061768c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int local_2c;
  int local_28 [2];
  
  local_28[1] = 1;
  iVar1 = _setsockopt(param_1,0xffff,8,local_28 + 1,4);
  if (iVar1 == -1) {
    uVar2 = 0x2b;
  }
  else {
    local_28[0] = 10;
    iVar1 = _setsockopt(param_1,6,0x102,local_28,4);
    if (iVar1 == -1) {
      uVar2 = 0x2b;
    }
    else {
      local_2c = 0;
      if (local_28[0] != 0) {
        local_2c = DAT_10186d988 / local_28[0];
      }
      if (local_2c < 2000) {
        local_2c = 1;
      }
      else {
        local_2c = local_2c / 1000;
      }
      iVar1 = _setsockopt(param_1,6,0x10,&local_2c,4);
      uVar2 = 0x2b;
      if (iVar1 != -1) {
        local_30 = local_2c;
        iVar1 = _setsockopt(param_1,6,0x101,&local_30,4);
        uVar2 = 0x2b;
        if (iVar1 != -1) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}




undefined4 FUN_1006177a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _fcntl(param_1,3);
  uVar2 = 0x2b;
  if (iVar1 != -1) {
    iVar1 = _fcntl(param_1,4);
    uVar2 = 0x2b;
    if (iVar1 != -1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_100617810(char *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  socklen_t local_120;
  int local_11c;
  timeval local_118;
  fd_set afStack_108 [32];
  char local_88 [8];
  addrinfo local_80;
  uint local_50;
  addrinfo *local_48;
  
  local_80.ai_addr = (sockaddr *)0x0;
  local_80.ai_next = (addrinfo *)0x0;
  local_80.ai_canonname = (char *)0x0;
  local_50 = 0xffffffff;
  local_48 = (addrinfo *)0x0;
  local_80.ai_addrlen = 0;
  local_80._20_4_ = 0;
  local_80.ai_socktype = 1;
  local_80.ai_protocol = 0;
  local_80.ai_flags = 0x1000;
  local_80.ai_family = 0;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  _sprintf(local_88,"%d");
  iVar1 = _getaddrinfo(param_1,local_88,&local_80,&local_48);
  if (iVar1 == 0) {
    uVar2 = _socket(local_48->ai_family,local_48->ai_socktype,local_48->ai_protocol);
    local_50 = uVar2;
    if (uVar2 == 0xffffffff) {
      uVar5 = 0x2b;
    }
    else {
      iVar1 = _fcntl(uVar2,3);
      if (iVar1 == -1) {
        uVar5 = 0x2b;
      }
      else {
        iVar1 = _fcntl(uVar2,4);
        if (iVar1 == -1) {
          uVar5 = 0x2b;
        }
        else {
          uVar5 = FUN_10061768c(local_50);
          if ((int)uVar5 == 0) {
            iVar1 = _connect(local_50,local_48->ai_addr,local_48->ai_addrlen);
            if (((iVar1 == -1) && (piVar3 = ___error(), *piVar3 != 0x23)) &&
               (piVar3 = ___error(), *piVar3 != 0x24)) {
              uVar5 = 0x2a;
            }
            else {
              _memset(afStack_108,0,0x80);
              uVar2 = local_50;
              uVar4 = (ulong)(long)(int)local_50 >> 3 & 0x1ffffffffffffffc;
              *(uint *)(&afStack_108[0].field_0x0 + uVar4) =
                   1 << (ulong)(local_50 & 0x1f) | *(uint *)(&afStack_108[0].field_0x0 + uVar4);
              local_118.tv_sec = (__darwin_time_t)(DAT_10186d988 / 1000);
              local_118.tv_usec = (DAT_10186d988 % 1000) * 1000;
              iVar1 = _select(uVar2 + 1,(fd_set *)0x0,afStack_108,(fd_set *)0x0,&local_118);
              if (iVar1 == 0) {
                uVar5 = 0x2a;
              }
              else if (iVar1 == -1) {
                uVar5 = 0x2b;
              }
              else {
                local_11c = 0;
                local_120 = 4;
                iVar1 = _getsockopt(local_50,0xffff,0x1007,&local_11c,&local_120);
                if (iVar1 == -1) {
                  uVar5 = 0x2b;
                }
                else if (local_11c == 0) {
                  uVar5 = 0;
                  *param_4 = (long)(int)local_50;
                  local_50 = 0xffffffff;
                }
                else {
                  uVar5 = 0x2a;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar5 = 0x2c;
  }
  if (local_50 != 0xffffffff) {
    _close();
  }
  if (local_48 != (addrinfo *)0x0) {
    _freeaddrinfo(local_48);
  }
  return uVar5;
}




void FUN_100617aa4(uint param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_5c;
  sockaddr local_58;
  long local_48;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar4;
  iVar1 = _socket(2,1,0);
  if (iVar1 == -1) {
    uVar3 = 0x2b;
  }
  else {
    iVar2 = _fcntl(iVar1,3);
    if (iVar2 == -1) {
      uVar3 = 0x2b;
    }
    else {
      iVar2 = _fcntl(iVar1,4);
      if (iVar2 == -1) {
        uVar3 = 0x2b;
      }
      else {
        local_5c = 1;
        iVar2 = _setsockopt(iVar1,0xffff,4,&local_5c,4);
        if (iVar2 == -1) {
          uVar3 = 0x2b;
        }
        else {
          local_58.sa_data[6] = '\0';
          local_58.sa_data[7] = '\0';
          local_58.sa_data[8] = '\0';
          local_58.sa_data[9] = '\0';
          local_58.sa_data[10] = '\0';
          local_58.sa_data[0xb] = '\0';
          local_58.sa_data[0xc] = '\0';
          local_58.sa_data[0xd] = '\0';
          local_58.sa_data._0_2_ = (ushort)(param_1 >> 8) & 0xff | (ushort)((param_1 & 0xffff) << 8)
          ;
          local_58._0_2_ = 0x200;
          local_58.sa_data._2_4_ = 0;
          iVar2 = _bind(iVar1,&local_58,0x10);
          if (iVar2 == -1) {
            uVar3 = 0x2b;
          }
          else {
            iVar2 = _listen(iVar1,3);
            if (iVar2 == -1) {
              uVar3 = 0x2b;
            }
            else {
              uVar3 = 0;
              *param_3 = (long)iVar1;
            }
          }
        }
      }
    }
  }
  if (lVar4 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




undefined4 FUN_100617c04(int param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = _accept(param_1,(sockaddr *)0x0,(socklen_t *)0x0);
  if (iVar1 == -1) {
    piVar3 = ___error();
    uVar4 = 0x2d;
    if (*piVar3 != 0x23) {
      uVar4 = 0x2b;
    }
  }
  else {
    iVar2 = _fcntl(iVar1,3);
    if (iVar2 == -1) {
      uVar4 = 0x2b;
    }
    else {
      iVar2 = _fcntl(iVar1,4);
      if (iVar2 == -1) {
        uVar4 = 0x2b;
      }
      else {
        uVar4 = 0;
        *param_3 = (long)iVar1;
      }
    }
  }
  return uVar4;
}




undefined8 FUN_100617cc0(undefined8 param_1)

{
  int iVar1;
  
  if ((int)param_1 != -1) {
    _shutdown((int)param_1,2);
    iVar1 = _close(param_1);
    if (iVar1 == -1) {
      return 0x2b;
    }
  }
  return 0;
}




undefined4 FUN_100617d0c(int param_1,void *param_2,uint param_3,int *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  
  *param_4 = 0;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    sVar1 = _send(param_1,param_2,(ulong)param_3,0);
    if (sVar1 == -1) break;
    *param_4 = *param_4 + (int)sVar1;
    param_3 = param_3 - (int)sVar1;
    param_2 = (void *)((long)param_2 + sVar1);
  }
  piVar2 = ___error();
  if (*piVar2 == 0x23) {
    return 0x2d;
  }
  return 0x2b;
}




undefined4 FUN_100617d9c(int param_1,void *param_2,int param_3,int *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  
  *param_4 = 0;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    sVar1 = _recv(param_1,param_2,(long)param_3,0);
    if (sVar1 == 0) break;
    if (sVar1 == -1) {
      piVar2 = ___error();
      if (*piVar2 == 0x23) {
        return 0x2d;
      }
      return 0x2b;
    }
    *param_4 = *param_4 + (int)sVar1;
    param_3 = param_3 - (int)sVar1;
    param_2 = (void *)((long)param_2 + sVar1);
  }
  return 0x10;
}




void FUN_100617e38(undefined8 *param_1)

{
  FUN_100618598(*param_1);
  return;
}




undefined8 FUN_100617e40(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x298) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x298),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_delay.cpp"
                  ,0xe2);
    *(undefined8 *)(lVar1 + 0x298) = 0;
    *(undefined8 *)(lVar1 + 0x290) = 0;
  }
  return 0;
}




undefined8 FUN_100617e90(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x2a8) = 0;
  do {
    iVar3 = *(int *)(lVar1 + lVar2 + 0x250);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar1 + 0x2a4) - iVar3;
    }
    *(int *)(lVar1 + lVar2 + 0x2ac) = iVar3;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x40);
  if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
    _bzero(*(void **)(lVar1 + 0x290),(ulong)*(uint *)(lVar1 + 0x2a0));
  }
  return 0;
}




void FUN_100617eec(undefined8 *param_1)

{
  FUN_1006187f8(*param_1);
  return;
}




undefined8 FUN_100617ef4(undefined4 param_1,long *param_2,uint param_3)

{
  if (param_3 == 0x10) {
    *(undefined4 *)(*param_2 + 0x1cc) = param_1;
    return 0;
  }
  if (param_3 < 0x10) {
    *(undefined4 *)(*param_2 + (long)(int)param_3 * 4 + 0x210) = param_1;
  }
  return 0;
}




undefined8 FUN_100617f24(long *param_1,uint param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 0x10) {
    *param_3 = *(undefined4 *)(*param_1 + 0x1cc);
  }
  else {
    if (0xf < param_2) {
      return 0;
    }
    *param_3 = *(undefined4 *)(*param_1 + (long)(int)param_2 * 4 + 0x210);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




undefined8 FUN_100617f98(void)

{
  return 0;
}




void FUN_100617fa0(void)

{
  _memset(&DAT_101ea3c10,0,0x60);
  FUN_1005ecc98(&DAT_101ea3c14,"Delay ch0",0x10);
  FUN_1005ecc98(&DAT_101ea3c24,"ms",0x10);
  DAT_101ea3c38 = "Channel #0 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3c40 = 0;
  DAT_101ea3c44 = 0x461c4000;
  DAT_101ea3c48 = 0;
  DAT_101ea3c50 = 1;
  _memset(&DAT_101ea3c70,0,0x60);
  FUN_1005ecc98(&DAT_101ea3c74,"Delay ch1",0x10);
  FUN_1005ecc98(&DAT_101ea3c84,"ms",0x10);
  DAT_101ea3c98 = "Channel #1 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3ca0 = 0;
  DAT_101ea3ca4 = 0x461c4000;
  DAT_101ea3ca8 = 0;
  DAT_101ea3cb0 = 1;
  _memset(&DAT_101ea3cd0,0,0x60);
  FUN_1005ecc98(&DAT_101ea3cd4,"Delay ch2",0x10);
  FUN_1005ecc98(&DAT_101ea3ce4,"ms",0x10);
  DAT_101ea3cf8 = "Channel #2 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3d00 = 0;
  DAT_101ea3d04 = 0x461c4000;
  DAT_101ea3d08 = 0;
  DAT_101ea3d10 = 1;
  _memset(&DAT_101ea3d30,0,0x60);
  FUN_1005ecc98(&DAT_101ea3d34,"Delay ch3",0x10);
  FUN_1005ecc98(&DAT_101ea3d44,"ms",0x10);
  DAT_101ea3d58 = "Channel #3 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3d60 = 0;
  DAT_101ea3d64 = 0x461c4000;
  DAT_101ea3d68 = 0;
  DAT_101ea3d70 = 1;
  _memset(&DAT_101ea3d90,0,0x60);
  FUN_1005ecc98(&DAT_101ea3d94,"Delay ch4",0x10);
  FUN_1005ecc98(&DAT_101ea3da4,"ms",0x10);
  DAT_101ea3db8 = "Channel #4 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3dc0 = 0;
  DAT_101ea3dc4 = 0x461c4000;
  DAT_101ea3dc8 = 0;
  DAT_101ea3dd0 = 1;
  _memset(&DAT_101ea3df0,0,0x60);
  FUN_1005ecc98(&DAT_101ea3df4,"Delay ch5",0x10);
  FUN_1005ecc98(&DAT_101ea3e04,"ms",0x10);
  DAT_101ea3e18 = "Channel #5 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3e20 = 0;
  DAT_101ea3e24 = 0x461c4000;
  DAT_101ea3e28 = 0;
  DAT_101ea3e30 = 1;
  _memset(&DAT_101ea3e50,0,0x60);
  FUN_1005ecc98(&DAT_101ea3e54,"Delay ch6",0x10);
  FUN_1005ecc98(&DAT_101ea3e64,"ms",0x10);
  DAT_101ea3e78 = "Channel #6 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3e80 = 0;
  DAT_101ea3e84 = 0x461c4000;
  DAT_101ea3e88 = 0;
  DAT_101ea3e90 = 1;
  _memset(&DAT_101ea3eb0,0,0x60);
  FUN_1005ecc98(&DAT_101ea3eb4,"Delay ch7",0x10);
  FUN_1005ecc98(&DAT_101ea3ec4,"ms",0x10);
  DAT_101ea3ed8 = "Channel #7 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3ee0 = 0;
  DAT_101ea3ee4 = 0x461c4000;
  DAT_101ea3ee8 = 0;
  DAT_101ea3ef0 = 1;
  _memset(&DAT_101ea3f10,0,0x60);
  FUN_1005ecc98(&DAT_101ea3f14,"Delay ch8",0x10);
  FUN_1005ecc98(&DAT_101ea3f24,"ms",0x10);
  DAT_101ea3f38 = "Channel #8 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3f40 = 0;
  DAT_101ea3f44 = 0x461c4000;
  DAT_101ea3f48 = 0;
  DAT_101ea3f50 = 1;
  _memset(&DAT_101ea3f70,0,0x60);
  FUN_1005ecc98(&DAT_101ea3f74,"Delay ch9",0x10);
  FUN_1005ecc98(&DAT_101ea3f84,"ms",0x10);
  DAT_101ea3f98 = "Channel #9 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea3fa0 = 0;
  DAT_101ea3fa4 = 0x461c4000;
  DAT_101ea3fa8 = 0;
  DAT_101ea3fb0 = 1;
  _memset(&DAT_101ea3fd0,0,0x60);
  FUN_1005ecc98(&DAT_101ea3fd4,"Delay ch10",0x10);
  FUN_1005ecc98(&DAT_101ea3fe4,"ms",0x10);
  DAT_101ea3ff8 = "Channel #10 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea4000 = 0;
  DAT_101ea4004 = 0x461c4000;
  DAT_101ea4008 = 0;
  DAT_101ea4010 = 1;
  _memset(&DAT_101ea4030,0,0x60);
  FUN_1005ecc98(&DAT_101ea4034,"Delay ch11",0x10);
  FUN_1005ecc98(&DAT_101ea4044,"ms",0x10);
  DAT_101ea4058 = "Channel #11 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea4060 = 0;
  DAT_101ea4064 = 0x461c4000;
  DAT_101ea4068 = 0;
  DAT_101ea4070 = 1;
  _memset(&DAT_101ea4090,0,0x60);
  FUN_1005ecc98(&DAT_101ea4094,"Delay ch12",0x10);
  FUN_1005ecc98(&DAT_101ea40a4,"ms",0x10);
  DAT_101ea40b8 = "Channel #12 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea40c0 = 0;
  DAT_101ea40c4 = 0x461c4000;
  DAT_101ea40c8 = 0;
  DAT_101ea40d0 = 1;
  _memset(&DAT_101ea40f0,0,0x60);
  FUN_1005ecc98(&DAT_101ea40f4,"Delay ch13",0x10);
  FUN_1005ecc98(&DAT_101ea4104,"ms",0x10);
  DAT_101ea4118 = "Channel #13 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea4120 = 0;
  DAT_101ea4124 = 0x461c4000;
  DAT_101ea4128 = 0;
  DAT_101ea4130 = 1;
  _memset(&DAT_101ea4150,0,0x60);
  FUN_1005ecc98(&DAT_101ea4154,"Delay ch14",0x10);
  FUN_1005ecc98(&DAT_101ea4164,"ms",0x10);
  DAT_101ea4178 = "Channel #14 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea4180 = 0;
  DAT_101ea4184 = 0x461c4000;
  DAT_101ea4188 = 0;
  DAT_101ea4190 = 1;
  _memset(&DAT_101ea41b0,0,0x60);
  FUN_1005ecc98(&DAT_101ea41b4,"Delay ch15",0x10);
  FUN_1005ecc98(&DAT_101ea41c4,"ms",0x10);
  DAT_101ea41d8 = "Channel #15 delay in ms.  0  to 10000.  Default = 0.";
  DAT_101ea41e0 = 0;
  DAT_101ea41e4 = 0x461c4000;
  DAT_101ea41e8 = 0;
  DAT_101ea41f0 = 1;
  _memset(&DAT_101ea4210,0,0x60);
  FUN_1005ecc98(&DAT_101ea4214,"Max delay",0x10);
  FUN_1005ecc98(&DAT_101ea4224,"ms",0x10);
  DAT_101ea4244 = 0x461c4000;
  DAT_101ea4250 = 1;
  DAT_101ea4240 = 0x3f800000;
  DAT_101ea4248 = 0x41200000;
  DAT_101ea4238 = "Maximum delay in ms.  1  to 10000.  Default = 10.";
  DAT_101dbd298 = &DAT_10186da28;
  DAT_101dbd2b0 = 0x15;
  DAT_101dbd2a8 = 0x2f0;
  return;
}




undefined8 FUN_100618598(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar3 = 0;
    do {
      uVar1 = FUN_1005cef0c(*(undefined4 *)(*(long *)(*(long *)(lVar2 + 0x68) + lVar3 * 8) + 0x38),
                            param_1,lVar3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 0xd0);
    } while (lVar3 < *(int *)(lVar2 + 0x60));
  }
  lVar2 = 0;
  fVar7 = *(float *)(param_1 + 0x1cc);
  *(float *)(param_1 + 0x1c8) = fVar7;
  iVar4 = *(int *)(*(long *)(param_1 + 0x90) + 0x708);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x70c);
  fVar5 = (float)iVar4;
  do {
    lVar3 = param_1 + lVar2;
    fVar6 = *(float *)(lVar3 + 0x210);
    if (fVar7 <= *(float *)(lVar3 + 0x210)) {
      fVar6 = fVar7;
    }
    *(float *)(lVar3 + 0x1d0) = fVar6;
    *(int *)(lVar3 + 0x250) = (int)((fVar5 * fVar6) / 1000.0 + 0.5);
    fVar7 = *(float *)(param_1 + 0x1c8);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x40);
  iVar4 = (int)((fVar5 * fVar7) / 1000.0 + 0.5) + 1;
  *(int *)(param_1 + 0x2a4) = iVar4;
  if (*(long *)(param_1 + 0x298) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x298),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_delay.cpp"
                  ,0xb2);
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    iVar4 = *(int *)(param_1 + 0x2a4);
  }
  iVar4 = *(int *)(param_1 + 0x2ec) * iVar4 * 4;
  *(int *)(param_1 + 0x2a0) = iVar4;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 + 0x10,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_delay.cpp"
                        ,0xbe,0);
  *(long *)(param_1 + 0x298) = lVar2;
  *(ulong *)(param_1 + 0x290) = lVar2 + 0xfU & 0xfffffffffffffff0;
  if (lVar2 == 0) {
    uVar1 = 0x26;
  }
  else {
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    do {
      iVar4 = *(int *)(param_1 + lVar2 + 0x250);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x2a4) - iVar4;
      }
      *(int *)(param_1 + lVar2 + 0x2ac) = iVar4;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x40);
    if (*(void **)(param_1 + 0x290) != (void *)0x0) {
      _bzero(*(void **)(param_1 + 0x290),(ulong)*(uint *)(param_1 + 0x2a0));
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_10061874c(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  do {
    iVar2 = *(int *)(param_1 + lVar1 + 0x250);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2a4) - iVar2;
    }
    *(int *)(param_1 + lVar1 + 0x2ac) = iVar2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x40);
  if (*(void **)(param_1 + 0x290) != (void *)0x0) {
    _bzero(*(void **)(param_1 + 0x290),(ulong)*(uint *)(param_1 + 0x2a0));
  }
  return 0;
}




undefined8 FUN_1006187a8(long param_1)

{
  if (*(long *)(param_1 + 0x298) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x298),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_delay.cpp"
                  ,0xe2);
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  return 0;
}




void FUN_1006187f8(long param_1,undefined1 (*param_2) [16],undefined4 *param_3,int param_4,
                  int param_5,int *param_6)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 **ppuVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  int *piVar25;
  undefined8 *puVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined4 *puVar34;
  uint uVar35;
  undefined4 *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  undefined4 *puVar40;
  undefined8 *puVar41;
  long lVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 *local_e8 [7];
  undefined4 *local_b0;
  long local_68;
  
  lVar42 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar42;
  if (param_2 != (undefined1 (*) [16])0x0) {
    iVar30 = *(int *)(*(long *)(param_1 + 0x90) + 0x708);
    bVar11 = *(int *)(param_1 + 0x2ec) != param_5;
    if (bVar11) {
      *(int *)(param_1 + 0x2ec) = param_5;
    }
    fVar43 = *(float *)(param_1 + 0x1c8);
    fVar45 = *(float *)(param_1 + 0x1cc);
    if (fVar43 == fVar45) {
      if (bVar11) {
        bVar11 = true;
        goto LAB_1006188a0;
      }
      bVar10 = false;
      bVar11 = false;
      if (*(long *)(param_1 + 0x290) == 0) goto LAB_1006188a0;
    }
    else {
      *(float *)(param_1 + 0x1c8) = fVar45;
      fVar43 = fVar45;
      bVar11 = true;
LAB_1006188a0:
      bVar10 = bVar11;
      iVar24 = (int)(((float)iVar30 * fVar43) / 1000.0 + 0.5) + 1;
      *(int *)(param_1 + 0x2a4) = iVar24;
      iVar29 = param_5;
      if (*(long *)(param_1 + 0x298) != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x298),
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_delay.cpp"
                      ,0x145);
        *(undefined8 *)(param_1 + 0x298) = 0;
        *(undefined8 *)(param_1 + 0x290) = 0;
        iVar24 = *(int *)(param_1 + 0x2a4);
        iVar29 = *(int *)(param_1 + 0x2ec);
      }
      iVar24 = iVar29 * iVar24 * 4;
      *(int *)(param_1 + 0x2a0) = iVar24;
      lVar12 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar24 + 0x10,
                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_delay.cpp"
                             ,0x151,0);
      *(long *)(param_1 + 0x298) = lVar12;
      *(ulong *)(param_1 + 0x290) = lVar12 + 0xfU & 0xfffffffffffffff0;
      if (lVar12 == 0) {
        uVar46 = 0x26;
        goto LAB_100619410;
      }
    }
    if (param_5 != 0) {
      piVar25 = (int *)(param_1 + 0x2ac);
      iVar24 = param_5;
      do {
        fVar43 = (float)piVar25[-0x27];
        if ((bool)(bVar10 | (float)piVar25[-0x37] != fVar43)) {
          fVar45 = *(float *)(param_1 + 0x1c8);
          if (fVar45 < fVar43) {
            piVar25[-0x27] = (int)fVar45;
            fVar43 = fVar45;
          }
          piVar25[-0x37] = (int)fVar43;
          iVar29 = (int)(((float)iVar30 * fVar43) / 1000.0 + 0.5);
          piVar25[-0x17] = iVar29;
          iVar29 = *(int *)(param_1 + 0x2a8) - iVar29;
          *piVar25 = iVar29;
          if (iVar29 < 0) {
            *piVar25 = *(int *)(param_1 + 0x2a4) + iVar29;
          }
        }
        iVar24 = iVar24 + -1;
        piVar25 = piVar25 + 1;
      } while (iVar24 != 0);
    }
    if ((bVar10) || (lVar12 = *(long *)(param_1 + 0x290), lVar12 == 0)) {
      lVar12 = 0;
      *(undefined4 *)(param_1 + 0x2a8) = 0;
      do {
        iVar30 = *(int *)(param_1 + lVar12 + 0x250);
        if (iVar30 == 0) {
          iVar30 = 0;
        }
        else {
          iVar30 = *(int *)(param_1 + 0x2a4) - iVar30;
        }
        *(int *)(param_1 + lVar12 + 0x2ac) = iVar30;
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x40);
      if (*(void **)(param_1 + 0x290) != (void *)0x0) {
        _bzero(*(void **)(param_1 + 0x290),(ulong)*(uint *)(param_1 + 0x2a0));
        lVar12 = *(long *)(param_1 + 0x290);
        if (lVar12 != 0) goto LAB_100618a30;
      }
      _memcpy(param_3,param_2,(ulong)(uint)(*param_6 * param_4) << 2);
    }
    else {
LAB_100618a30:
      plVar2 = (long *)(param_1 + 0x290);
      switch(param_5) {
      case 1:
        if (param_4 != 0) {
          uVar31 = (ulong)*(int *)(param_1 + 0x2ac);
          puVar36 = (undefined4 *)(lVar12 + uVar31 * 4);
          uVar32 = (ulong)*(int *)(param_1 + 0x2a8);
          puVar34 = (undefined4 *)(lVar12 + uVar32 * 4);
          uVar35 = *(uint *)(param_1 + 0x2a4);
          uVar15 = ~uVar35;
          do {
            uVar27 = (uint)uVar32;
            uVar6 = uVar27 + param_4;
            iVar30 = uVar35 - uVar27;
            if ((int)uVar6 <= (int)uVar35) {
              iVar30 = param_4;
            }
            if (iVar30 != 0) {
              uVar7 = uVar15;
              if ((int)uVar15 <= (int)~uVar6) {
                uVar7 = ~uVar6;
              }
              uVar32 = (ulong)((-2 - uVar27) - uVar7);
              uVar7 = uVar15;
              if ((int)uVar15 <= (int)~uVar6) {
                uVar7 = ~uVar6;
              }
              iVar24 = ~uVar27 - uVar7;
              puVar40 = param_3;
              pauVar17 = param_2;
              puVar21 = puVar34;
              do {
                *puVar21 = *(undefined4 *)*pauVar17;
                *puVar40 = *puVar36;
                uVar6 = (int)uVar31 + 1;
                uVar31 = (ulong)uVar6;
                if ((int)uVar6 < (int)uVar35) {
                  puVar36 = puVar36 + 1;
                }
                else {
                  uVar31 = 0;
                  puVar36 = (undefined4 *)*plVar2;
                }
                iVar24 = iVar24 + -1;
                puVar40 = puVar40 + 1;
                pauVar17 = (undefined1 (*) [16])(*pauVar17 + 4);
                puVar21 = puVar21 + 1;
              } while (iVar24 != 0);
              puVar34 = puVar34 + uVar32 + 1;
              param_3 = param_3 + uVar32 + 1;
              param_2 = (undefined1 (*) [16])(*param_2 + uVar32 * 4 + 4);
              *(int *)(param_1 + 0x2ac) = (int)uVar31;
            }
            uVar32 = (ulong)(uVar27 + iVar30);
            if ((int)uVar35 <= (int)(uVar27 + iVar30)) {
              uVar32 = 0;
              puVar34 = (undefined4 *)*plVar2;
            }
            param_4 = param_4 - iVar30;
          } while (param_4 != 0);
          uVar46 = 0;
          *(int *)(param_1 + 0x2a8) = (int)uVar32;
          goto LAB_100619410;
        }
        break;
      case 2:
        if (param_4 != 0) {
          uVar32 = (ulong)*(int *)(param_1 + 0x2b0);
          uVar33 = (ulong)*(int *)(param_1 + 0x2ac);
          puVar34 = (undefined4 *)(lVar12 + (uVar32 << 3 | 4));
          puVar36 = (undefined4 *)(lVar12 + uVar33 * 8);
          uVar31 = (ulong)*(int *)(param_1 + 0x2a8);
          puVar40 = (undefined4 *)(lVar12 + uVar31 * 8);
          uVar35 = *(uint *)(param_1 + 0x2a4);
          uVar15 = ~uVar35;
          do {
            uVar27 = (uint)uVar31;
            uVar6 = uVar27 + param_4;
            iVar30 = uVar35 - uVar27;
            if ((int)uVar6 <= (int)uVar35) {
              iVar30 = param_4;
            }
            if (iVar30 != 0) {
              uVar7 = uVar15;
              if ((int)uVar15 <= (int)~uVar6) {
                uVar7 = ~uVar6;
              }
              uVar31 = (ulong)((-2 - uVar27) - uVar7);
              uVar7 = uVar15;
              if ((int)uVar15 <= (int)~uVar6) {
                uVar7 = ~uVar6;
              }
              iVar24 = ~uVar27 - uVar7;
              puVar22 = param_3;
              pauVar17 = param_2;
              puVar21 = puVar40;
              do {
                uVar4 = *(undefined4 *)(*pauVar17 + 4);
                *puVar21 = *(undefined4 *)*pauVar17;
                puVar21[1] = uVar4;
                *puVar22 = *puVar36;
                puVar22[1] = *puVar34;
                uVar6 = (int)uVar33 + 1;
                uVar33 = (ulong)uVar6;
                if ((int)uVar6 < (int)uVar35) {
                  puVar36 = puVar36 + 2;
                }
                else {
                  uVar33 = 0;
                  puVar36 = (undefined4 *)*plVar2;
                }
                uVar6 = (int)uVar32 + 1;
                uVar32 = (ulong)uVar6;
                if ((int)uVar6 < (int)uVar35) {
                  puVar34 = puVar34 + 2;
                }
                else {
                  uVar32 = 0;
                  puVar34 = (undefined4 *)(*plVar2 + 4);
                }
                iVar24 = iVar24 + -1;
                pauVar17 = (undefined1 (*) [16])(*pauVar17 + 8);
                puVar21 = puVar21 + 2;
                puVar22 = puVar22 + 2;
              } while (iVar24 != 0);
              puVar40 = puVar40 + uVar31 * 2 + 2;
              param_3 = param_3 + uVar31 * 2 + 2;
              param_2 = (undefined1 (*) [16])(*param_2 + uVar31 * 8 + 8);
              *(int *)(param_1 + 0x2ac) = (int)uVar33;
              *(int *)(param_1 + 0x2b0) = (int)uVar32;
            }
            uVar31 = (ulong)(uVar27 + iVar30);
            if ((int)uVar35 <= (int)(uVar27 + iVar30)) {
              uVar31 = 0;
              puVar40 = (undefined4 *)*plVar2;
            }
            param_4 = param_4 - iVar30;
          } while (param_4 != 0);
          uVar46 = 0;
          *(int *)(param_1 + 0x2a8) = (int)uVar31;
          goto LAB_100619410;
        }
        break;
      default:
        lVar12 = *(long *)(param_1 + 0x290);
        uVar35 = *(uint *)(param_1 + 0x2a8);
        if (0 < param_5) {
          uVar32 = (ulong)(param_5 - 1) + 1;
          uVar31 = uVar32 & 0x1fffffffc;
          if (uVar31 == 0) {
            uVar31 = 0;
          }
          else {
            uVar33 = 0;
            ppuVar16 = local_e8 + 2;
            puVar14 = (undefined8 *)(param_1 + 0x2b4);
            do {
              uVar46 = puVar14[-1];
              uVar47 = *puVar14;
              ppuVar16[-1] = (undefined8 *)
                             (lVar12 + (uVar33 + (long)((int)((ulong)uVar46 >> 0x20) * param_5) + 1)
                                       * 4);
              ppuVar16[-2] = (undefined8 *)(lVar12 + (uVar33 + (long)((int)uVar46 * param_5)) * 4);
              ppuVar16[1] = (undefined8 *)
                            (lVar12 + (uVar33 + (long)((int)((ulong)uVar47 >> 0x20) * param_5) + 3)
                                      * 4);
              *ppuVar16 = (undefined8 *)(lVar12 + (uVar33 + (long)((int)uVar47 * param_5) + 2) * 4);
              uVar33 = uVar33 + 4;
              ppuVar16 = ppuVar16 + 4;
              puVar14 = puVar14 + 2;
            } while (((ulong)(param_5 - 1) + 1 & 0xfffffffffffffffc) != uVar33);
          }
          if (uVar32 != uVar31) {
            do {
              local_e8[uVar31] =
                   (undefined8 *)
                   (lVar12 + (uVar31 + (long)(param_5 * *(int *)(param_1 + uVar31 * 4 + 0x2ac))) * 4
                   );
              uVar31 = uVar31 + 1;
            } while (param_5 != (int)uVar31);
          }
        }
        if (param_4 != 0) {
          lVar28 = (long)param_5;
          uVar15 = *(uint *)(param_1 + 0x2a4);
          lVar3 = param_1 + 0x2ac;
          puVar36 = (undefined4 *)(lVar12 + (long)(int)(uVar35 * param_5) * 4);
          do {
            iVar30 = uVar15 - uVar35;
            if ((int)(uVar35 + param_4) <= (int)uVar15) {
              iVar30 = param_4;
            }
            puVar34 = puVar36;
            pauVar17 = param_2;
            puVar40 = param_3;
            if (iVar30 != 0) {
              iVar24 = 0;
              uVar6 = ~(uVar35 + param_4);
              if ((int)uVar6 < (int)~uVar15) {
                uVar6 = ~uVar15;
              }
              lVar12 = lVar28 * ((ulong)((-2 - uVar35) - uVar6) * 4 + 4);
              puVar34 = (undefined4 *)((long)puVar36 + lVar12);
              puVar40 = (undefined4 *)((long)param_3 + lVar12);
              pauVar17 = (undefined1 (*) [16])(*param_2 + lVar12);
              do {
                if (param_5 < 1) {
                  param_2 = (undefined1 (*) [16])(*param_2 + lVar28 * 4);
                }
                else {
                  ppuVar16 = local_e8;
                  pauVar18 = param_2;
                  puVar21 = puVar36;
                  puVar22 = param_3;
                  iVar29 = param_5;
                  do {
                    *puVar21 = *(undefined4 *)*pauVar18;
                    *puVar22 = *(undefined4 *)*ppuVar16;
                    iVar29 = iVar29 + -1;
                    ppuVar16 = ppuVar16 + 1;
                    pauVar18 = (undefined1 (*) [16])(*pauVar18 + 4);
                    puVar21 = puVar21 + 1;
                    puVar22 = puVar22 + 1;
                  } while (iVar29 != 0);
                  param_2 = (undefined1 (*) [16])(*param_2 + lVar28 * 4);
                  if (0 < param_5) {
                    lVar12 = 0;
                    ppuVar16 = local_e8;
                    iVar29 = param_5;
                    do {
                      iVar1 = *(int *)(lVar3 + lVar12) + 1;
                      *(int *)(lVar3 + lVar12) = iVar1;
                      if (iVar1 < *(int *)(param_1 + 0x2a4)) {
                        puVar14 = (undefined8 *)((long)*ppuVar16 + lVar28 * 4);
                      }
                      else {
                        *(undefined4 *)(lVar3 + lVar12) = 0;
                        puVar14 = (undefined8 *)(*plVar2 + lVar12);
                      }
                      *ppuVar16 = puVar14;
                      iVar29 = iVar29 + -1;
                      lVar12 = lVar12 + 4;
                      ppuVar16 = ppuVar16 + 1;
                    } while (iVar29 != 0);
                  }
                }
                param_3 = param_3 + lVar28;
                puVar36 = puVar36 + lVar28;
                iVar24 = iVar24 + 1;
              } while (iVar24 != ~uVar35 - uVar6);
              uVar35 = *(uint *)(param_1 + 0x2a8);
              uVar15 = *(uint *)(param_1 + 0x2a4);
            }
            uVar35 = uVar35 + iVar30;
            *(uint *)(param_1 + 0x2a8) = uVar35;
            if ((int)uVar15 <= (int)uVar35) {
              uVar35 = 0;
              *(undefined4 *)(param_1 + 0x2a8) = 0;
              puVar34 = *(undefined4 **)(param_1 + 0x290);
            }
            param_4 = param_4 - iVar30;
            puVar36 = puVar34;
            param_2 = pauVar17;
            param_3 = puVar40;
          } while (param_4 != 0);
        }
        break;
      case 6:
        if (param_4 != 0) {
          uVar32 = (ulong)*(int *)(param_1 + 0x2c0);
          uVar31 = (ulong)*(int *)(param_1 + 700);
          uVar33 = (ulong)*(int *)(param_1 + 0x2b8);
          uVar37 = (ulong)*(int *)(param_1 + 0x2b4);
          uVar35 = *(uint *)(param_1 + 0x2a8);
          uVar39 = (ulong)*(int *)(param_1 + 0x2b0);
          iVar30 = *(int *)(param_1 + 0x2ac);
          puVar26 = *(undefined8 **)(param_1 + 0x290);
          puVar14 = (undefined8 *)((long)puVar26 + (long)(iVar30 * 6) * 4);
          puVar36 = (undefined4 *)((long)puVar26 + (uVar39 * 6 | 1) * 4);
          puVar19 = puVar26 + uVar37 * 3 + 1;
          puVar34 = (undefined4 *)((long)puVar26 + uVar33 * 0x18 + 0xc);
          puVar23 = puVar26 + uVar31 * 3 + 2;
          puVar40 = (undefined4 *)((long)puVar26 + uVar32 * 0x18 + 0x14);
          puVar20 = (undefined8 *)((long)puVar26 + (long)(int)(uVar35 * 6) * 4);
          uVar15 = *(uint *)(param_1 + 0x2a4);
          do {
            uVar6 = uVar35 + param_4;
            iVar24 = uVar15 - uVar35;
            if ((int)uVar6 <= (int)uVar15) {
              iVar24 = param_4;
            }
            if (iVar24 != 0) {
              uVar7 = ~uVar6;
              uVar27 = uVar7;
              if ((int)uVar7 < (int)~uVar15) {
                uVar27 = ~uVar15;
              }
              uVar13 = (ulong)((-2 - uVar35) - uVar27);
              uVar27 = ~uVar15;
              if ((int)~uVar15 <= (int)uVar7) {
                uVar27 = ~uVar6;
              }
              iVar29 = ~uVar35 - uVar27;
              puVar21 = param_3;
              puVar38 = puVar20;
              pauVar17 = param_2;
              do {
                auVar44 = *pauVar17;
                uVar4 = *(undefined4 *)pauVar17[1];
                uVar5 = *(undefined4 *)(pauVar17[1] + 4);
                *puVar38 = auVar44._0_8_;
                auVar44 = NEON_ext(auVar44,auVar44,8,1);
                puVar38[1] = auVar44._0_8_;
                *(undefined4 *)(puVar38 + 2) = uVar4;
                *(undefined4 *)((long)puVar38 + 0x14) = uVar5;
                *puVar21 = *(undefined4 *)puVar14;
                puVar21[1] = *puVar36;
                puVar21[2] = *(undefined4 *)puVar19;
                puVar21[3] = *puVar34;
                puVar21[4] = *(undefined4 *)puVar23;
                puVar21[5] = *puVar40;
                iVar30 = iVar30 + 1;
                *(int *)(param_1 + 0x2ac) = iVar30;
                if (iVar30 < (int)uVar15) {
                  puVar14 = puVar14 + 3;
                }
                else {
                  iVar30 = 0;
                  *(undefined4 *)(param_1 + 0x2ac) = 0;
                  puVar14 = puVar26;
                }
                uVar6 = (int)uVar39 + 1;
                uVar39 = (ulong)uVar6;
                *(uint *)(param_1 + 0x2b0) = uVar6;
                if ((int)uVar6 < (int)uVar15) {
                  puVar36 = puVar36 + 6;
                }
                else {
                  uVar39 = 0;
                  *(undefined4 *)(param_1 + 0x2b0) = 0;
                  puVar36 = (undefined4 *)((long)puVar26 + 4);
                }
                uVar6 = (int)uVar37 + 1;
                uVar37 = (ulong)uVar6;
                *(uint *)(param_1 + 0x2b4) = uVar6;
                if ((int)uVar6 < (int)uVar15) {
                  puVar19 = puVar19 + 3;
                }
                else {
                  uVar37 = 0;
                  *(undefined4 *)(param_1 + 0x2b4) = 0;
                  puVar19 = puVar26 + 1;
                }
                uVar6 = (int)uVar33 + 1;
                uVar33 = (ulong)uVar6;
                *(uint *)(param_1 + 0x2b8) = uVar6;
                if ((int)uVar6 < (int)uVar15) {
                  puVar34 = puVar34 + 6;
                }
                else {
                  uVar33 = 0;
                  *(undefined4 *)(param_1 + 0x2b8) = 0;
                  puVar34 = (undefined4 *)((long)puVar26 + 0xc);
                }
                uVar6 = (int)uVar31 + 1;
                uVar31 = (ulong)uVar6;
                *(uint *)(param_1 + 700) = uVar6;
                if ((int)uVar6 < (int)uVar15) {
                  puVar23 = puVar23 + 3;
                }
                else {
                  uVar31 = 0;
                  *(undefined4 *)(param_1 + 700) = 0;
                  puVar23 = puVar26 + 2;
                }
                uVar6 = (int)uVar32 + 1;
                uVar32 = (ulong)uVar6;
                *(uint *)(param_1 + 0x2c0) = uVar6;
                if ((int)uVar6 < (int)uVar15) {
                  puVar40 = puVar40 + 6;
                }
                else {
                  uVar32 = 0;
                  *(undefined4 *)(param_1 + 0x2c0) = 0;
                  puVar40 = (undefined4 *)((long)puVar26 + 0x14);
                }
                iVar29 = iVar29 + -1;
                pauVar17 = (undefined1 (*) [16])(pauVar17[1] + 8);
                puVar38 = puVar38 + 3;
                puVar21 = puVar21 + 6;
              } while (iVar29 != 0);
              puVar20 = puVar20 + uVar13 * 3 + 3;
              param_3 = param_3 + uVar13 * 6 + 6;
              param_2 = (undefined1 (*) [16])((long)param_2 + uVar13 * 0x18 + 0x18);
            }
            uVar46 = 0;
            uVar35 = uVar35 + iVar24;
            if ((int)uVar15 <= (int)uVar35) {
              uVar35 = 0;
              puVar20 = puVar26;
            }
            *(uint *)(param_1 + 0x2a8) = uVar35;
            param_4 = param_4 - iVar24;
          } while (param_4 != 0);
          goto LAB_100619410;
        }
        break;
      case 8:
        puVar26 = *(undefined8 **)(param_1 + 0x290);
        uVar35 = *(uint *)(param_1 + 0x2a8);
        uVar32 = (ulong)*(int *)(param_1 + 0x2ac);
        puVar23 = puVar26 + uVar32 * 4;
        uVar31 = (ulong)*(int *)(param_1 + 0x2b0);
        puVar36 = (undefined4 *)((long)puVar26 + (uVar31 << 5 | 4));
        puVar14 = (undefined8 *)((long)puVar26 + ((long)*(int *)(param_1 + 0x2b4) << 5 | 8U));
        puVar34 = (undefined4 *)((long)puVar26 + ((long)*(int *)(param_1 + 0x2b8) << 5 | 0xcU));
        puVar20 = (undefined8 *)((long)puVar26 + ((long)*(int *)(param_1 + 700) << 5 | 0x10U));
        puVar40 = (undefined4 *)((long)puVar26 + ((long)*(int *)(param_1 + 0x2c0) << 5 | 0x14U));
        puVar19 = (undefined8 *)((long)puVar26 + ((long)*(int *)(param_1 + 0x2c4) << 5 | 0x18U));
        puVar21 = (undefined4 *)((long)puVar26 + ((long)*(int *)(param_1 + 0x2c8) << 5 | 0x1cU));
        local_e8[0] = puVar23;
        local_e8[1] = (undefined8 *)puVar36;
        local_e8[2] = puVar14;
        local_e8[3] = (undefined8 *)puVar34;
        local_e8[4] = puVar20;
        local_e8[5] = (undefined8 *)puVar40;
        local_e8[6] = puVar19;
        local_b0 = puVar21;
        if (param_4 != 0) {
          puVar38 = puVar26 + (long)(int)uVar35 * 4;
          uVar15 = *(uint *)(param_1 + 0x2a4);
          do {
            uVar6 = uVar35 + param_4;
            iVar30 = uVar15 - uVar35;
            if ((int)uVar6 <= (int)uVar15) {
              iVar30 = param_4;
            }
            if (iVar30 != 0) {
              uVar7 = ~uVar6;
              uVar27 = uVar7;
              if ((int)uVar7 < (int)~uVar15) {
                uVar27 = ~uVar15;
              }
              uVar33 = (ulong)((-2 - uVar35) - uVar27);
              uVar27 = ~uVar15;
              if ((int)~uVar15 <= (int)uVar7) {
                uVar27 = ~uVar6;
              }
              iVar24 = ~uVar35 - uVar27;
              puVar41 = puVar38;
              pauVar17 = param_2;
              puVar22 = param_3;
              do {
                auVar44 = *pauVar17;
                pauVar18 = pauVar17 + 1;
                uVar46 = *(undefined8 *)*pauVar18;
                auVar9 = *pauVar18;
                auVar8 = *pauVar18;
                *puVar41 = auVar44._0_8_;
                auVar44 = NEON_ext(auVar44,auVar44,8,1);
                puVar41[1] = auVar44._0_8_;
                puVar41[2] = uVar46;
                auVar44 = NEON_ext(auVar8,auVar9,8,1);
                puVar41[3] = auVar44._0_8_;
                *puVar22 = *(undefined4 *)puVar23;
                puVar22[1] = *puVar36;
                puVar22[2] = *(undefined4 *)puVar14;
                puVar22[3] = *puVar34;
                puVar22[4] = *(undefined4 *)puVar20;
                puVar22[5] = *puVar40;
                puVar22[6] = *(undefined4 *)puVar19;
                puVar22[7] = *puVar21;
                uVar6 = (int)uVar32 + 1;
                uVar32 = (ulong)uVar6;
                *(uint *)(param_1 + 0x2ac) = uVar6;
                if ((int)uVar6 < (int)uVar15) {
                  puVar23 = puVar23 + 4;
                }
                else {
                  uVar32 = 0;
                  *(undefined4 *)(param_1 + 0x2ac) = 0;
                  puVar23 = puVar26;
                }
                uVar6 = (int)uVar31 + 1;
                uVar31 = (ulong)uVar6;
                *(uint *)(param_1 + 0x2b0) = uVar6;
                if ((int)uVar6 < (int)uVar15) {
                  puVar36 = puVar36 + 8;
                }
                else {
                  uVar31 = 0;
                  *(undefined4 *)(param_1 + 0x2b0) = 0;
                  puVar36 = (undefined4 *)((long)puVar26 + 4);
                }
                iVar29 = *(int *)(param_1 + 0x2b4) + 1;
                *(int *)(param_1 + 0x2b4) = iVar29;
                if (iVar29 < (int)uVar15) {
                  puVar14 = local_e8[2] + 4;
                }
                else {
                  *(undefined4 *)(param_1 + 0x2b4) = 0;
                  puVar14 = puVar26 + 1;
                }
                iVar29 = *(int *)(param_1 + 0x2b8) + 1;
                *(int *)(param_1 + 0x2b8) = iVar29;
                if (iVar29 < (int)uVar15) {
                  puVar34 = (undefined4 *)((long)local_e8[3] + 0x20);
                }
                else {
                  *(undefined4 *)(param_1 + 0x2b8) = 0;
                  puVar34 = (undefined4 *)((long)puVar26 + 0xc);
                }
                iVar29 = *(int *)(param_1 + 700) + 1;
                *(int *)(param_1 + 700) = iVar29;
                if (iVar29 < (int)uVar15) {
                  puVar20 = local_e8[4] + 4;
                }
                else {
                  *(undefined4 *)(param_1 + 700) = 0;
                  puVar20 = puVar26 + 2;
                }
                iVar29 = *(int *)(param_1 + 0x2c0) + 1;
                *(int *)(param_1 + 0x2c0) = iVar29;
                if (iVar29 < (int)uVar15) {
                  puVar40 = (undefined4 *)((long)local_e8[5] + 0x20);
                }
                else {
                  *(undefined4 *)(param_1 + 0x2c0) = 0;
                  puVar40 = (undefined4 *)((long)puVar26 + 0x14);
                }
                iVar29 = *(int *)(param_1 + 0x2c4) + 1;
                *(int *)(param_1 + 0x2c4) = iVar29;
                if (iVar29 < (int)uVar15) {
                  puVar19 = local_e8[6] + 4;
                }
                else {
                  *(undefined4 *)(param_1 + 0x2c4) = 0;
                  puVar19 = puVar26 + 3;
                }
                iVar29 = *(int *)(param_1 + 0x2c8) + 1;
                *(int *)(param_1 + 0x2c8) = iVar29;
                if (iVar29 < (int)uVar15) {
                  puVar21 = local_b0 + 8;
                }
                else {
                  *(undefined4 *)(param_1 + 0x2c8) = 0;
                  puVar21 = (undefined4 *)((long)puVar26 + 0x1c);
                }
                iVar24 = iVar24 + -1;
                pauVar17 = pauVar17 + 2;
                puVar41 = puVar41 + 4;
                puVar22 = puVar22 + 8;
                local_e8[2] = puVar14;
                local_e8[3] = (undefined8 *)puVar34;
                local_e8[4] = puVar20;
                local_e8[5] = (undefined8 *)puVar40;
                local_e8[6] = puVar19;
                local_b0 = puVar21;
              } while (iVar24 != 0);
              puVar38 = puVar38 + uVar33 * 4 + 4;
              param_3 = param_3 + uVar33 * 8 + 8;
              param_2 = param_2 + uVar33 * 2 + 2;
              local_e8[0] = puVar23;
              local_e8[1] = (undefined8 *)puVar36;
            }
            uVar35 = uVar35 + iVar30;
            if ((int)uVar15 <= (int)uVar35) {
              uVar35 = 0;
              puVar38 = puVar26;
            }
            *(uint *)(param_1 + 0x2a8) = uVar35;
            param_4 = param_4 - iVar30;
          } while (param_4 != 0);
        }
      }
    }
  }
  uVar46 = 0;
LAB_100619410:
  if (lVar42 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar46);
}




undefined8 FUN_100619460(undefined4 param_1,long param_2,uint param_3)

{
  if (param_3 == 0x10) {
    *(undefined4 *)(param_2 + 0x1cc) = param_1;
    return 0;
  }
  if (param_3 < 0x10) {
    *(undefined4 *)(param_2 + (long)(int)param_3 * 4 + 0x210) = param_1;
  }
  return 0;
}




undefined8 FUN_10061948c(long param_1,uint param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 0x10) {
    *param_3 = *(undefined4 *)(param_1 + 0x1cc);
  }
  else {
    if (0xf < param_2) {
      return 0;
    }
    *param_3 = *(undefined4 *)(param_1 + (long)(int)param_2 * 4 + 0x210);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%.02f");
  }
  return 0;
}




void FUN_1006194fc(void)

{
  _memset(&DAT_101ea4270,0,0x60);
  FUN_1005ecc98(&DAT_101ea4274,"Frequency",0x10);
  FUN_1005ecc98(&DAT_101ea4284,"Hz",0x10);
  DAT_101ea42a0 = 0x3c23d70a;
  DAT_101ea4298 = "LFO frequency in Hz.  0.01 to 20.  Default = 5.";
  DAT_101ea42a4 = 0x41a00000;
  DAT_101ea42a8 = 0x40a00000;
  DAT_101ea42b0 = 1;
  _memset(&DAT_101ea42d0,0,0x60);
  FUN_1005ecc98(&DAT_101ea42d4,"Depth",0x10);
  FUN_1005ecc98(&DAT_101ea42e4,"",0x10);
  DAT_101ea42f8 = "Tremolo depth.  0 to 1.  Default = 1.";
  DAT_101ea4300 = 0;
  DAT_101ea4304 = 0x3f800000;
  DAT_101ea4308 = 0x3f800000;
  DAT_101ea4310 = 1;
  _memset(&DAT_101ea4330,0,0x60);
  FUN_1005ecc98(&DAT_101ea4334,"Shape",0x10);
  FUN_1005ecc98(&DAT_101ea4344,"",0x10);
  DAT_101ea4358 = "LFO shape morph between triangle and sine.  0 to 1.  Default = 0.";
  DAT_101ea4360 = 0;
  DAT_101ea4364 = 0x3f800000;
  DAT_101ea4368 = 0;
  DAT_101ea4370 = 1;
  _memset(&DAT_101ea4390,0,0x60);
  FUN_1005ecc98(&DAT_101ea4394,"Skew",0x10);
  FUN_1005ecc98(&DAT_101ea43a4,"",0x10);
  DAT_101ea43b8 = "Time-skewing of LFO cycle.  -1 to 1.  Default = 0.";
  DAT_101ea43c0 = 0xbf800000;
  DAT_101ea43c4 = 0x3f800000;
  DAT_101ea43c8 = 0;
  DAT_101ea43d0 = 1;
  _memset(&DAT_101ea43f0,0,0x60);
  FUN_1005ecc98(&DAT_101ea43f4,"Duty",0x10);
  FUN_1005ecc98(&DAT_101ea4404,"",0x10);
  DAT_101ea4418 = "LFO on-time.  0 to 1.  Default = 0.5.";
  DAT_101ea4420 = 0;
  DAT_101ea4424 = 0x3f800000;
  DAT_101ea4428 = 0x3f000000;
  DAT_101ea4430 = 1;
  _memset(&DAT_101ea4450,0,0x60);
  FUN_1005ecc98(&DAT_101ea4454,"Square",0x10);
  FUN_1005ecc98(&DAT_101ea4464,"",0x10);
  DAT_101ea4478 = "Flatness of the LFO shape.  0 to 1.  Default = 0.";
  DAT_101ea4480 = 0;
  DAT_101ea4484 = 0x3f800000;
  DAT_101ea4488 = 0;
  DAT_101ea4490 = 1;
  _memset(&DAT_101ea44b0,0,0x60);
  FUN_1005ecc98(&DAT_101ea44b4,"Phase",0x10);
  FUN_1005ecc98(&DAT_101ea44c4,"",0x10);
  DAT_101ea44d8 = "Instantaneous LFO phase.  0 to 1.  Default = 0.";
  DAT_101ea44e0 = 0;
  DAT_101ea44e4 = 0x3f800000;
  DAT_101ea44e8 = 0;
  DAT_101ea44f0 = 1;
  _memset(&DAT_101ea4510,0,0x60);
  FUN_1005ecc98(&DAT_101ea4514,"Spread",0x10);
  FUN_1005ecc98(&DAT_101ea4524,"",0x10);
  DAT_101ea4540 = 0xbf800000;
  DAT_101ea4544 = 0x3f800000;
  DAT_101ea4548 = 0;
  DAT_101ea4550 = 1;
  DAT_101ea4538 = "Rotation / auto-pan effect.  -1 to 1.  Default = 0.";
  DAT_101ea4570 = &DAT_10186db40;
  DAT_101ea4588 = 0x16;
  DAT_101ea4580 = 0x3b0;
  return;
}




undefined8 FUN_100619818(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (0 < *(int *)(*(long *)(param_1 + 0xd0) + 0x60)) {
    lVar6 = 0;
    do {
      uVar5 = FUN_1005cef0c(param_1,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(*(long *)(param_1 + 0xd0) + 0x60));
  }
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x708);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x70c);
  *(undefined4 *)(param_1 + 0x230) = 0x3c000000;
  *(undefined4 *)(param_1 + 0x23c) = 0x3d800000;
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x38c);
  uVar3 = *(undefined8 *)(param_1 + 0x394);
  uVar9 = (undefined4)((ulong)uVar3 >> 0x20);
  uVar5 = *(undefined8 *)*pauVar1;
  *(undefined8 *)(param_1 + 0x1c8) = uVar5;
  auVar7._12_4_ = uVar9;
  auVar7._0_12_ = *pauVar1;
  auVar2._12_4_ = uVar9;
  auVar2._0_12_ = *pauVar1;
  auVar7 = NEON_ext(auVar7,auVar2,8,1);
  *(long *)(param_1 + 0x1d0) = auVar7._0_8_;
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x39c);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x3a8);
  *(float *)(param_1 + 0x234) = 1.0 - (float)((ulong)uVar5 >> 0x20);
  _memset((void *)(param_1 + 0x240),0,0x100);
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  fVar12 = -1.5707964;
  fVar10 = 0.0;
  fVar8 = (float)uVar3 * 0.0;
  *(float *)(param_1 + 0x340) = fVar8;
  *(float *)(param_1 + 0x340) = fVar8 + (1.0 - *(float *)(param_1 + 0x1d0)) * 0.0;
  lVar6 = 0x344;
  do {
    fVar10 = fVar10 + 0.0625;
    fVar12 = fVar12 + 0.19634955;
    fVar13 = *(float *)(param_1 + 0x1d0);
    fVar8 = (float)_sinf(fVar12);
    fVar13 = fVar13 * (fVar8 * 0.5 + 0.5);
    *(float *)(param_1 + lVar6) = fVar13;
    *(float *)(param_1 + lVar6) = fVar13 + fVar10 * (1.0 - *(float *)(param_1 + 0x1d0));
    lVar6 = lVar6 + 4;
  } while (lVar6 != 900);
  fVar10 = (*(float *)(param_1 + 0x1d4) + 1.0) * 0.5;
  fVar11 = (1.0 - *(float *)(param_1 + 0x1d8)) * fVar10;
  fVar13 = fVar10 + *(float *)(param_1 + 0x1d8) * (1.0 - fVar10);
  fVar12 = 1.0 - *(float *)(param_1 + 0x1dc);
  fVar8 = fVar11;
  if (fVar10 - fVar11 <= fVar11) {
    fVar8 = fVar10 - fVar11;
  }
  fVar8 = fVar12 * fVar8;
  fVar4 = fVar13 - fVar10;
  if (1.0 - fVar13 <= fVar13 - fVar10) {
    fVar4 = 1.0 - fVar13;
  }
  fVar12 = fVar12 * fVar4;
  *(float *)(param_1 + 0x1ec) = fVar11 - fVar8;
  *(float *)(param_1 + 0x1f0) = fVar11 + fVar8;
  *(float *)(param_1 + 500) = fVar13 - fVar12;
  *(float *)(param_1 + 0x1f8) = fVar13 + fVar12;
  FUN_100619bb0(param_1);
  FUN_100619df8(param_1);
  return 0;
}




undefined8 FUN_100619a40(long param_1)

{
  _memset((void *)(param_1 + 0x240),0,0x100);
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  return 0;
}




void FUN_100619a78(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = 0;
  fVar5 = *(float *)(param_1 + 0x23c);
  fVar3 = 0.0;
  fVar4 = -1.5707964;
  do {
    fVar6 = *(float *)(param_1 + 0x1d0);
    fVar2 = (float)_sinf(fVar4);
    fVar6 = fVar6 * (fVar2 * 0.5 + 0.5);
    *(float *)(param_1 + 0x340 + lVar1) = fVar6;
    *(float *)(param_1 + 0x340 + lVar1) = fVar6 + fVar3 * (1.0 - *(float *)(param_1 + 0x1d0));
    fVar4 = fVar5 * 3.1415927 + fVar4;
    fVar3 = fVar5 + fVar3;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x44);
  return;
}




void FUN_100619b34(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (*(float *)(param_1 + 0x1d4) + 1.0) * 0.5;
  fVar4 = (1.0 - *(float *)(param_1 + 0x1d8)) * fVar1;
  fVar3 = fVar1 + *(float *)(param_1 + 0x1d8) * (1.0 - fVar1);
  fVar5 = 1.0 - *(float *)(param_1 + 0x1dc);
  fVar6 = fVar4;
  if (fVar1 - fVar4 <= fVar4) {
    fVar6 = fVar1 - fVar4;
  }
  fVar6 = fVar5 * fVar6;
  fVar2 = fVar3 - fVar1;
  if (1.0 - fVar3 <= fVar3 - fVar1) {
    fVar2 = 1.0 - fVar3;
  }
  fVar5 = fVar5 * fVar2;
  *(float *)(param_1 + 0x1ec) = fVar4 - fVar6;
  *(float *)(param_1 + 0x1f0) = fVar4 + fVar6;
  *(float *)(param_1 + 500) = fVar3 - fVar5;
  *(float *)(param_1 + 0x1f8) = fVar3 + fVar5;
  return;
}




void FUN_100619bb0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float local_98 [2];
  undefined8 local_90 [7];
  float local_58 [2];
  undefined8 local_50 [7];
  long local_18;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_18 = lVar2;
  iVar8 = *(int *)(param_1 + 0x388);
  uVar3 = (ulong)iVar8;
  if (0 < iVar8) {
    fVar11 = *(float *)(param_1 + 0x238);
    if (iVar8 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3 & 0xfffffffffffffffc;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        pfVar7 = local_98;
        pfVar9 = local_58;
        pauVar6 = (undefined1 (*) [16])(param_1 + 0x300);
        uVar10 = uVar5;
        do {
          auVar13 = NEON_scvtf(pauVar6[-0xc],4);
          auVar14._0_8_ = CONCAT44(auVar13._4_4_ * fVar11,auVar13._0_4_ * fVar11);
          auVar14._8_4_ = auVar13._8_4_ * fVar11;
          auVar14._12_4_ = auVar13._12_4_ * fVar11;
          *(undefined8 *)pfVar9 = auVar14._0_8_;
          auVar13 = NEON_ext(auVar14,auVar14,8,1);
          *(long *)(pfVar9 + 2) = auVar13._0_8_;
          auVar13 = NEON_scvtf(*pauVar6,4);
          auVar15._0_8_ = CONCAT44(auVar13._4_4_ * fVar11,auVar13._0_4_ * fVar11);
          auVar15._8_4_ = auVar13._8_4_ * fVar11;
          auVar15._12_4_ = auVar13._12_4_ * fVar11;
          *(undefined8 *)pfVar7 = auVar15._0_8_;
          auVar13 = NEON_ext(auVar15,auVar15,8,1);
          *(long *)(pfVar7 + 2) = auVar13._0_8_;
          uVar10 = uVar10 - 4;
          pfVar7 = pfVar7 + 4;
          pfVar9 = pfVar9 + 4;
          pauVar6 = pauVar6 + 1;
        } while (uVar10 != 0);
      }
      if (uVar3 == uVar5) goto LAB_100619c90;
    }
    do {
      lVar4 = param_1 + uVar5 * 4;
      local_58[uVar5] = (float)*(int *)(lVar4 + 0x240) * fVar11;
      local_98[uVar5] = (float)*(int *)(lVar4 + 0x300) * fVar11;
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)uVar3);
  }
LAB_100619c90:
  fVar11 = (float)*(int *)(param_1 + 900) / *(float *)(param_1 + 0x1c8);
  *(float *)(param_1 + 0x20c) = fVar11;
  *(float *)(param_1 + 0x238) = 1.0 / fVar11;
  *(int *)(param_1 + 0x210) = (int)(float)(int)fVar11;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(float *)(param_1 + 0x214) = fVar11 - (float)(int)fVar11;
  fVar16 = *(float *)(param_1 + 0x23c) *
           fVar11 * (*(float *)(param_1 + 0x1f0) - *(float *)(param_1 + 0x1ec));
  *(float *)(param_1 + 0x220) = fVar16;
  fVar12 = *(float *)(param_1 + 0x23c) *
           fVar11 * (*(float *)(param_1 + 0x1f8) - *(float *)(param_1 + 500));
  *(float *)(param_1 + 0x224) = fVar12;
  if (fVar16 <= 0.0) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x1cc) / fVar16;
  }
  *(float *)(param_1 + 0x228) = fVar16;
  if (fVar12 <= 0.0) {
    *(undefined4 *)(param_1 + 0x224) = 0;
    fVar12 = 0.0;
  }
  else {
    fVar12 = *(float *)(param_1 + 0x1cc) / fVar12;
  }
  *(float *)(param_1 + 0x22c) = fVar12;
  auVar13._0_8_ =
       CONCAT44((int)(*(float *)(param_1 + 0x1f0) * fVar11),
                (int)(*(float *)(param_1 + 0x1ec) * fVar11));
  auVar13._8_4_ = (int)(*(float *)(param_1 + 500) * fVar11);
  auVar13._12_4_ = (int)(*(float *)(param_1 + 0x1f8) * fVar11);
  *(undefined8 *)(param_1 + 0x1fc) = auVar13._0_8_;
  auVar13 = NEON_ext(auVar13,auVar13,8,1);
  *(long *)(param_1 + 0x204) = auVar13._0_8_;
  if (0 < iVar8) {
    lVar4 = 0;
    while( true ) {
      fVar16 = local_58[lVar4];
      lVar1 = param_1 + lVar4 * 4;
      *(int *)(lVar1 + 0x240) = (int)(fVar16 * fVar11);
      fVar12 = *(float *)(param_1 + 0x20c);
      if (fVar12 <= (float)(int)(fVar16 * fVar11)) {
        *(undefined4 *)(lVar1 + 0x240) = 0;
        fVar12 = *(float *)(param_1 + 0x20c);
      }
      iVar8 = (int)(local_98[lVar4] * fVar12);
      *(int *)(lVar1 + 0x300) = iVar8;
      if (*(int *)(param_1 + 0x210) <= iVar8) {
        iVar8 = 0;
      }
      *(int *)(lVar1 + 0x300) = iVar8;
      lVar4 = lVar4 + 1;
      if (*(int *)(param_1 + 0x388) <= lVar4) break;
      fVar11 = *(float *)(param_1 + 0x20c);
    }
  }
  if (lVar2 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100619df8(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  
  uVar3 = *(uint *)(param_1 + 0x388);
  uVar7 = (ulong)uVar3;
  iVar4 = 1;
  if (uVar3 != 4) {
    iVar4 = -(uint)(uVar3 != 2);
  }
  iVar2 = 2;
  if (uVar3 != 5) {
    iVar2 = iVar4;
  }
  iVar4 = 3;
  if (uVar3 != 6) {
    iVar4 = iVar2;
  }
  iVar2 = 4;
  if (uVar3 != 8) {
    iVar2 = iVar4;
  }
  if (0 < (int)uVar3) {
    lVar5 = 0;
    lVar1 = param_1 + 0x240;
    do {
      if (iVar2 < 0) {
        fVar8 = *(float *)(param_1 + 0x1e0) +
                (-5.0 / (float)(int)uVar7) * *(float *)(param_1 + 0x1e8);
      }
      else {
        fVar8 = *(float *)(param_1 + 0x1e0) -
                *(float *)(&DAT_10115ff68 + lVar5 * 4 + (long)iVar2 * 0x24) *
                *(float *)(param_1 + 0x1e8);
      }
      iVar6 = (int)(*(float *)(param_1 + 0x20c) * fVar8);
      *(int *)(lVar1 + lVar5 * 4) = iVar6;
      iVar4 = *(int *)(param_1 + 0x210);
      if (iVar6 < iVar4) {
        if (iVar6 < 0) {
          *(int *)(lVar1 + lVar5 * 4) = iVar4 + iVar6;
        }
      }
      else {
        *(int *)(lVar1 + lVar5 * 4) = iVar6 - iVar4;
      }
      lVar5 = lVar5 + 1;
      uVar7 = (ulong)*(int *)(param_1 + 0x388);
    } while (lVar5 < (long)uVar7);
  }
  return;
}




float FUN_100619ed4(long param_1,int param_2,int param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0) {
    if (param_2 == 0) {
      *param_4 = 0.0;
      goto LAB_100619f28;
    }
    lVar1 = param_1 + (long)param_2 * 4;
    fVar2 = *(float *)(lVar1 + 0x33c) - *(float *)(lVar1 + 0x340);
    fVar3 = *(float *)(param_1 + 0x22c);
  }
  else {
    if (param_2 == 0x10) {
      *param_4 = 0.0;
      goto LAB_100619f28;
    }
    lVar1 = param_1 + (long)param_2 * 4;
    fVar2 = *(float *)(lVar1 + 0x344) - *(float *)(lVar1 + 0x340);
    fVar3 = *(float *)(param_1 + 0x228);
  }
  *param_4 = fVar2 * fVar3;
LAB_100619f28:
  return *(float *)(param_1 + 0x234) +
         *(float *)(param_1 + 0x1cc) * *(float *)(param_1 + (long)param_2 * 4 + 0x340);
}




undefined8 FUN_100619f44(void)

{
  return 0;
}




void FUN_100619f4c(long param_1,int param_2,float *param_3,float *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = *(int *)(param_1 + 0x208);
  if (param_2 < iVar4) {
    iVar6 = *(int *)(param_1 + 0x204);
    if (iVar6 <= param_2) {
      iVar5 = 0;
      if (iVar4 - iVar6 != 0) {
        iVar5 = ((param_2 - iVar6) * 0x10) / (iVar4 - iVar6);
      }
      fVar9 = *(float *)(param_1 + 0x224);
      iVar2 = (int)((float)(iVar5 + 1) * fVar9 + 0.5) + iVar6;
      iVar6 = iVar4;
      if (iVar5 + 1 != 0x10) {
        iVar6 = iVar2;
      }
      *param_5 = iVar6;
      iVar4 = *(int *)(param_1 + 0x204);
      fVar8 = (float)iVar5;
      if ((int)(fVar8 * fVar9 + 0.5) + iVar4 != param_2) {
        if (0x10 - iVar5 == 0) {
          fVar9 = 0.0;
          lVar1 = param_1;
        }
        else {
          lVar1 = param_1 + (long)(0x10 - iVar5) * 4;
          fVar9 = (*(float *)(lVar1 + 0x33c) - *(float *)(lVar1 + 0x340)) *
                  *(float *)(param_1 + 0x22c);
        }
        *param_4 = fVar9;
        fVar9 = *(float *)(param_1 + 0x234) +
                *(float *)(param_1 + 0x1cc) * *(float *)(lVar1 + 0x340);
        *param_3 = fVar9;
        fVar10 = *param_4;
        fVar11 = *(float *)(param_1 + 0x224);
LAB_10061a1e0:
        *param_3 = fVar9 + fVar10 * ((float)param_2 - ((float)iVar4 + fVar8 * fVar11));
        goto LAB_10061a1f8;
      }
      if (iVar5 != 0) {
        if (0x10 - iVar5 == 0) {
          *param_4 = 0.0;
        }
        else {
          lVar1 = param_1 + (long)(0x10 - iVar5) * 4;
          *param_4 = (*(float *)(lVar1 + 0x33c) - *(float *)(lVar1 + 0x340)) *
                     *(float *)(param_1 + 0x22c);
        }
        goto LAB_10061a1f8;
      }
      *param_4 = 0.0;
      fVar9 = *(float *)(param_1 + 0x234);
      fVar8 = *(float *)(param_1 + 0x1cc);
      fVar10 = *(float *)(param_1 + 0x380);
LAB_10061a188:
      *param_3 = fVar9 + fVar8 * fVar10;
      goto LAB_10061a1f8;
    }
    iVar4 = *(int *)(param_1 + 0x200);
    if (param_2 < iVar4) {
      iVar6 = *(int *)(param_1 + 0x1fc);
      if (iVar6 <= param_2) {
        iVar5 = 0;
        if (iVar4 - iVar6 != 0) {
          iVar5 = ((param_2 - iVar6) * 0x10) / (iVar4 - iVar6);
        }
        iVar2 = iVar5 + 1;
        fVar9 = *(float *)(param_1 + 0x220);
        iVar3 = (int)((float)iVar2 * fVar9 + 0.5) + iVar6;
        iVar6 = iVar4;
        if (iVar2 != 0x10) {
          iVar6 = iVar3;
        }
        *param_5 = iVar6;
        iVar4 = *(int *)(param_1 + 0x1fc);
        fVar8 = (float)iVar5;
        if ((int)(fVar8 * fVar9 + 0.5) + iVar4 != param_2) {
          if (iVar5 == 0x10) {
            pfVar7 = (float *)(param_1 + 0x380);
            fVar9 = 0.0;
          }
          else {
            pfVar7 = (float *)(param_1 + 0x340 + (long)iVar5 * 4);
            fVar9 = (*(float *)(param_1 + 0x340 + (long)iVar2 * 4) - *pfVar7) *
                    *(float *)(param_1 + 0x228);
          }
          *param_4 = fVar9;
          fVar9 = *(float *)(param_1 + 0x234) + *(float *)(param_1 + 0x1cc) * *pfVar7;
          *param_3 = fVar9;
          fVar10 = *param_4;
          fVar11 = *(float *)(param_1 + 0x220);
          goto LAB_10061a1e0;
        }
        if (iVar5 == 0x10) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = (*(float *)(param_1 + 0x340 + (long)iVar2 * 4) -
                  *(float *)(param_1 + 0x340 + (long)iVar5 * 4)) * *(float *)(param_1 + 0x228);
        }
        *param_4 = fVar9;
        if (iVar5 != 0) goto LAB_10061a1f8;
        fVar9 = *(float *)(param_1 + 0x234);
        fVar8 = *(float *)(param_1 + 0x1cc);
        fVar10 = *(float *)(param_1 + 0x340);
        goto LAB_10061a188;
      }
      *param_3 = 1.0 - *(float *)(param_1 + 0x1cc);
    }
    else {
      *param_3 = 1.0;
    }
    *param_4 = 0.0;
  }
  else {
    *param_3 = 1.0 - *(float *)(param_1 + 0x1cc);
    *param_4 = 0.0;
    iVar6 = *(int *)(param_1 + 0x1fc);
  }
  *param_5 = iVar6;
LAB_10061a1f8:
  if (*(int *)(param_1 + 0x210) <= iVar6) {
    *param_5 = 0;
  }
  return;
}




float FUN_10061a20c(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 < *(int *)(param_1 + 0x208)) {
    iVar3 = *(int *)(param_1 + 0x204);
    if (param_2 < iVar3) {
      if (*(int *)(param_1 + 0x200) <= param_2) {
        return 1.0;
      }
      iVar3 = *(int *)(param_1 + 0x1fc);
      if (param_2 < iVar3) goto LAB_10061a23c;
      iVar2 = *(int *)(param_1 + 0x200) - iVar3;
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = ((param_2 - iVar3) * 0x10) / iVar2;
      }
      if (iVar4 == 0x10) {
        fVar6 = *(float *)(param_1 + 0x380);
        fVar5 = 0.0;
      }
      else {
        lVar1 = param_1 + (long)iVar4 * 4;
        fVar6 = *(float *)(lVar1 + 0x340);
        fVar5 = (*(float *)(lVar1 + 0x344) - fVar6) * *(float *)(param_1 + 0x228);
      }
      fVar6 = *(float *)(param_1 + 0x234) + *(float *)(param_1 + 0x1cc) * fVar6;
      fVar7 = *(float *)(param_1 + 0x220);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x208) - iVar3;
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = ((param_2 - iVar3) * 0x10) / iVar2;
      }
      if (0x10 - iVar4 == 0) {
        fVar6 = *(float *)(param_1 + 0x340);
        fVar5 = 0.0;
      }
      else {
        lVar1 = param_1 + (long)(0x10 - iVar4) * 4;
        fVar6 = *(float *)(lVar1 + 0x340);
        fVar5 = (*(float *)(lVar1 + 0x33c) - fVar6) * *(float *)(param_1 + 0x22c);
      }
      fVar6 = *(float *)(param_1 + 0x234) + *(float *)(param_1 + 0x1cc) * fVar6;
      fVar7 = *(float *)(param_1 + 0x224);
    }
    return fVar6 + fVar5 * ((float)param_2 - ((float)iVar3 + (float)iVar4 * fVar7));
  }
LAB_10061a23c:
  return 1.0 - *(float *)(param_1 + 0x1cc);
}




undefined8 FUN_10061a32c(long param_1,long param_2,long param_3,int param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar17 = *(int *)(*(long *)(param_1 + 0x90) + 0x708);
  iVar15 = (int)param_5;
  bVar11 = *(int *)(param_1 + 0x388) != iVar15;
  if (bVar11) {
    *(int *)(param_1 + 0x388) = iVar15;
  }
  bVar12 = *(int *)(param_1 + 900) != iVar17;
  if (bVar12) {
    *(int *)(param_1 + 900) = iVar17;
  }
  fVar22 = *(float *)(param_1 + 0x38c);
  bVar4 = *(float *)(param_1 + 0x1c8) != fVar22;
  if (bVar4) {
    *(float *)(param_1 + 0x1c8) = fVar22;
  }
  fVar22 = *(float *)(param_1 + 0x1cc);
  fVar23 = *(float *)(param_1 + 0x390);
  bVar5 = fVar22 != fVar23;
  if (bVar5) {
    *(float *)(param_1 + 0x1cc) = fVar23;
    fVar22 = fVar23;
  }
  fVar23 = *(float *)(param_1 + 0x1d0);
  fVar26 = *(float *)(param_1 + 0x394);
  bVar6 = fVar23 != fVar26;
  if (bVar6) {
    *(float *)(param_1 + 0x1d0) = fVar26;
    fVar23 = fVar26;
  }
  fVar26 = *(float *)(param_1 + 0x398);
  bVar7 = *(float *)(param_1 + 0x1d4) == fVar26;
  if (!bVar7) {
    *(float *)(param_1 + 0x1d4) = fVar26;
  }
  fVar26 = *(float *)(param_1 + 0x39c);
  bVar8 = *(float *)(param_1 + 0x1d8) == fVar26;
  if (!bVar8) {
    *(float *)(param_1 + 0x1d8) = fVar26;
  }
  fVar26 = *(float *)(param_1 + 0x3a0);
  bVar9 = *(float *)(param_1 + 0x1dc) == fVar26;
  if (!bVar9) {
    *(float *)(param_1 + 0x1dc) = fVar26;
  }
  bVar3 = *(char *)(param_1 + 0x1e4) != '\0';
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x3a4);
  }
  fVar26 = *(float *)(param_1 + 0x3a8);
  bVar10 = *(float *)(param_1 + 0x1e8) != fVar26;
  if (bVar10) {
    *(float *)(param_1 + 0x1e8) = fVar26;
  }
  if (bVar5) {
    *(float *)(param_1 + 0x234) = 1.0 - fVar22;
    *(float *)(param_1 + 0x228) = fVar22 / *(float *)(param_1 + 0x220);
    *(float *)(param_1 + 0x22c) = fVar22 / *(float *)(param_1 + 0x224);
  }
  if (bVar6) {
    lVar16 = 0;
    fVar26 = *(float *)(param_1 + 0x23c);
    fVar22 = 0.0;
    *(float *)(param_1 + 0x340) = fVar23 * 0.0;
    *(float *)(param_1 + 0x340) = fVar23 * 0.0 + (1.0 - *(float *)(param_1 + 0x1d0)) * 0.0;
    fVar23 = -1.5707964;
    do {
      fVar22 = fVar26 + fVar22;
      fVar23 = fVar26 * 3.1415927 + fVar23;
      fVar27 = *(float *)(param_1 + 0x1d0);
      fVar24 = (float)_sinf(fVar23);
      fVar27 = fVar27 * (fVar24 * 0.5 + 0.5);
      *(float *)(param_1 + 0x344 + lVar16) = fVar27;
      *(float *)(param_1 + 0x344 + lVar16) = fVar27 + fVar22 * (1.0 - *(float *)(param_1 + 0x1d0));
      lVar16 = lVar16 + 4;
    } while (lVar16 != 0x40);
    bVar5 = true;
  }
  if (bVar9 && (bVar8 && bVar7)) {
    if (!bVar4 && !bVar12) goto LAB_10061a5fc;
  }
  else {
    fVar23 = (*(float *)(param_1 + 0x1d4) + 1.0) * 0.5;
    fVar27 = (1.0 - *(float *)(param_1 + 0x1d8)) * fVar23;
    fVar24 = fVar23 + *(float *)(param_1 + 0x1d8) * (1.0 - fVar23);
    fVar26 = 1.0 - *(float *)(param_1 + 0x1dc);
    fVar22 = fVar27;
    if (fVar23 - fVar27 <= fVar27) {
      fVar22 = fVar23 - fVar27;
    }
    fVar22 = fVar26 * fVar22;
    fVar25 = fVar24 - fVar23;
    if (1.0 - fVar24 <= fVar24 - fVar23) {
      fVar25 = 1.0 - fVar24;
    }
    fVar26 = fVar26 * fVar25;
    *(float *)(param_1 + 0x1ec) = fVar27 - fVar22;
    *(float *)(param_1 + 0x1f0) = fVar27 + fVar22;
    *(float *)(param_1 + 500) = fVar24 - fVar26;
    *(float *)(param_1 + 0x1f8) = fVar24 + fVar26;
  }
  FUN_100619bb0(param_1);
  bVar5 = true;
LAB_10061a5fc:
  if (bVar10 || (bVar3 || bVar11)) {
    FUN_100619df8(param_1);
    bVar5 = true;
  }
  if (param_4 != 0) {
    if (0 < iVar15) {
      lVar21 = 0;
      lVar16 = 0;
      do {
        lVar1 = param_1 + lVar21;
        iVar17 = *(int *)(lVar1 + 0x240);
        if (bVar5) {
          iVar20 = iVar17 + 0x80;
          *(int *)(lVar1 + 0x300) = iVar20;
          if (*(int *)(param_1 + 0x210) <= iVar20) {
            iVar20 = 0;
          }
          *(int *)(lVar1 + 0x300) = iVar20;
          fVar23 = (float)FUN_10061a20c(param_1);
          lVar2 = param_1 + lVar16 * 4;
          pfVar18 = (float *)(lVar2 + 0x280);
          fVar22 = *(float *)(lVar1 + 0x280);
          pfVar19 = (float *)(lVar2 + 0x2c0);
          *(float *)(lVar1 + 0x2c0) = (fVar23 - fVar22) * *(float *)(param_1 + 0x230);
        }
        else {
          pfVar19 = (float *)(lVar1 + 0x2c0);
          pfVar18 = (float *)(lVar1 + 0x280);
          FUN_100619f4c(param_1,iVar17,pfVar18,pfVar19,lVar1 + 0x300);
          fVar22 = *(float *)(lVar1 + 0x280);
          iVar17 = *(int *)(lVar1 + 0x240);
        }
        *(float *)(param_3 + lVar21) = *(float *)(param_2 + lVar21) * fVar22;
        *pfVar18 = *pfVar19 + *pfVar18;
        *(int *)(lVar1 + 0x240) = iVar17 + 1;
        if (*(int *)(param_1 + 0x210) <= iVar17 + 1) {
          if ((int)lVar16 == 0) {
            fVar22 = *(float *)(param_1 + 0x214) + *(float *)(param_1 + 0x218);
            *(float *)(param_1 + 0x218) = fVar22;
            if (fVar22 < 1.0) goto LAB_10061a6f8;
            *(float *)(param_1 + 0x218) = fVar22 + -1.0;
            *(int *)(param_1 + 0x21c) = iVar15;
            iVar17 = iVar15;
          }
          else {
LAB_10061a6f8:
            iVar17 = *(int *)(param_1 + 0x21c);
          }
          if (iVar17 < 1) {
            *(undefined4 *)(lVar1 + 0x240) = 0;
          }
          else {
            *(undefined4 *)(lVar1 + 0x240) = 0xffffffff;
            *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + -1;
          }
        }
        lVar16 = lVar16 + 1;
        lVar21 = lVar21 + 4;
      } while (iVar15 != (int)lVar16);
    }
    if (param_4 == 1) {
      return 0;
    }
    uVar14 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
    param_2 = param_2 + uVar14;
    param_3 = param_3 + uVar14;
  }
  uVar14 = -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2;
  iVar17 = param_4 + -2;
  do {
    if (0 < iVar15) {
      lVar16 = 0;
      iVar20 = 0;
      do {
        lVar21 = param_1 + lVar16;
        iVar13 = *(int *)(lVar21 + 0x240);
        if (*(int *)(lVar21 + 0x300) <= iVar13) {
          FUN_100619f4c(param_1,iVar13,lVar21 + 0x280,lVar21 + 0x2c0,lVar21 + 0x300);
          iVar13 = *(int *)(lVar21 + 0x240);
        }
        *(float *)(param_3 + lVar16) = *(float *)(param_2 + lVar16) * *(float *)(lVar21 + 0x280);
        *(float *)(lVar21 + 0x280) = *(float *)(lVar21 + 0x2c0) + *(float *)(lVar21 + 0x280);
        *(int *)(lVar21 + 0x240) = iVar13 + 1;
        if (*(int *)(param_1 + 0x210) <= iVar13 + 1) {
          if (iVar20 == 0) {
            fVar22 = *(float *)(param_1 + 0x214) + *(float *)(param_1 + 0x218);
            *(float *)(param_1 + 0x218) = fVar22;
            if (fVar22 < 1.0) goto LAB_10061a800;
            *(float *)(param_1 + 0x218) = fVar22 + -1.0;
            *(int *)(param_1 + 0x21c) = iVar15;
            iVar13 = iVar15;
          }
          else {
LAB_10061a800:
            iVar13 = *(int *)(param_1 + 0x21c);
          }
          if (iVar13 < 1) {
            *(undefined4 *)(lVar21 + 0x240) = 0;
          }
          else {
            *(undefined4 *)(lVar21 + 0x240) = 0xffffffff;
            *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + -1;
          }
        }
        iVar20 = iVar20 + 1;
        lVar16 = lVar16 + 4;
      } while (iVar15 != iVar20);
    }
    param_3 = param_3 + uVar14;
    param_2 = param_2 + uVar14;
    bVar11 = iVar17 == 0;
    iVar17 = iVar17 + -1;
    if (bVar11) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_10061a888(float param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    *(float *)(param_2 + 0x38c) = param_1;
    return 0;
  case 1:
    *(float *)(param_2 + 0x390) = param_1;
    return 0;
  case 2:
    *(float *)(param_2 + 0x394) = param_1;
    return 0;
  case 3:
    *(float *)(param_2 + 0x398) = param_1;
    return 0;
  case 4:
    *(float *)(param_2 + 0x39c) = param_1;
    return 0;
  case 5:
    *(float *)(param_2 + 0x3a0) = param_1;
    return 0;
  case 6:
    *(float *)(param_2 + 0x3a4) = param_1;
    *(bool *)(param_2 + 0x1e4) = 0.0 < param_1;
    return 0;
  case 7:
    *(float *)(param_2 + 0x3a8) = param_1;
  }
  return 0;
}




undefined8 FUN_10061a934(long param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  switch(param_2) {
  case 0:
    *param_3 = *(undefined4 *)(param_1 + 0x38c);
    goto joined_r0x00010061a97c;
  case 1:
    *param_3 = *(undefined4 *)(param_1 + 0x390);
joined_r0x00010061a97c:
    if (param_4 == (char *)0x0) {
      return 0;
    }
    goto LAB_10061a9fc;
  case 2:
    *param_3 = *(undefined4 *)(param_1 + 0x394);
    break;
  case 3:
    *param_3 = *(undefined4 *)(param_1 + 0x398);
    break;
  case 4:
    *param_3 = *(undefined4 *)(param_1 + 0x39c);
    break;
  case 5:
    *param_3 = *(undefined4 *)(param_1 + 0x3a0);
    break;
  case 6:
    *param_3 = *(undefined4 *)(param_1 + 0x3a4);
    break;
  case 7:
    *param_3 = *(undefined4 *)(param_1 + 0x3a8);
    break;
  default:
    goto switchD_10061a95c_default;
  }
  if (param_4 != (char *)0x0) {
LAB_10061a9fc:
    _sprintf(param_4,"%.02f");
  }
switchD_10061a95c_default:
  return 0;
}




void FUN_10061aa44(undefined8 *param_1)

{
  FUN_100619818(*param_1);
  return;
}




undefined8 FUN_10061aa4c(void)

{
  return 0;
}




undefined8 FUN_10061aa54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  _memset((void *)(lVar1 + 0x240),0,0x100);
  *(undefined1 *)(lVar1 + 0x1e4) = 1;
  return 0;
}




undefined8 FUN_10061aa8c(undefined8 *param_1)

{
  FUN_10061a32c(*param_1);
  return 0;
}




undefined8 FUN_10061aaa8(float param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  if (param_3 < 8) {
    lVar1 = *param_2;
    switch(param_3) {
    case 0:
      *(float *)(lVar1 + 0x38c) = param_1;
      return 0;
    case 1:
      *(float *)(lVar1 + 0x390) = param_1;
      return 0;
    case 2:
      *(float *)(lVar1 + 0x394) = param_1;
      return 0;
    case 3:
      *(float *)(lVar1 + 0x398) = param_1;
      return 0;
    case 4:
      *(float *)(lVar1 + 0x39c) = param_1;
      return 0;
    case 5:
      *(float *)(lVar1 + 0x3a0) = param_1;
      return 0;
    case 6:
      *(float *)(lVar1 + 0x3a4) = param_1;
      *(bool *)(lVar1 + 0x1e4) = 0.0 < param_1;
      return 0;
    case 7:
      *(float *)(lVar1 + 0x3a8) = param_1;
    }
  }
  return 0;
}




undefined8 FUN_10061ab58(undefined8 *param_1)

{
  FUN_10061a934(*param_1);
  return 0;
}




void FUN_10061ab74(void)

{
  DAT_101ea45a8 = "FMOD Audio Queue Codec";
  DAT_101ea45b0 = 0x10100;
  DAT_101ea45b8 = 2;
  DAT_101ea4600 = 0x12;
  DAT_101ea4604 = 0x268;
  DAT_101ea45c0 = thunk_FUN_10061b15c;
  DAT_101ea45c8 = thunk_FUN_10061b528;
  DAT_101ea45d0 = thunk_FUN_10061b5dc;
  DAT_101ea45e0 = thunk_FUN_10061af9c;
  return;
}




undefined8 thunk_FUN_10061b15c(undefined4 *param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 0x12;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultMetaData_101444168;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = puVar1;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  if (param_3 != 0) {
    uVar4 = *(undefined4 *)(param_3 + 0xd4);
  }
  param_1[0x66] = uVar4;
  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
  if ((((int)uVar2 == 0) && (uVar2 = FUN_10061b2a0(param_1,param_2 >> 0xe & 1), (int)uVar2 == 0)) &&
     (uVar2 = FUN_10061aca4(param_1), (int)uVar2 == 0)) {
    lVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x130,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_codec_audioqueue.cpp"
                          ,0x7f,0);
    *(long *)(param_1 + 0x56) = lVar3;
    *(long *)(param_1 + 2) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0x26;
    }
    else {
      uVar2 = 0;
      *(undefined4 *)(lVar3 + 0x100) = 2;
      *(undefined4 *)(lVar3 + 0x104) = param_1[0x77];
      *(int *)(lVar3 + 0x108) = (int)*(double *)(param_1 + 0x70);
      *(undefined4 *)(lVar3 + 0x10c) = param_1[0x7b];
      *(undefined4 *)(lVar3 + 0x110) = param_1[0x7a];
      *(undefined4 *)(lVar3 + 0x114) = param_1[0x7d];
      *(undefined4 **)(param_1 + 0x6c) = param_1;
      *(undefined ***)(param_1 + 0x68) = &PTR_LOOP_10186dc18;
      *(undefined **)(param_1 + 0x6a) = PTR_LOOP_10186dc20;
      PTR_LOOP_10186dc20 = (undefined *)(param_1 + 0x68);
      **(undefined8 **)(param_1 + 0x6a) = PTR_LOOP_10186dc20;
    }
  }
  return uVar2;
}




undefined8 thunk_FUN_10061b528(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x1a8);
    *puVar1 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 **)(*(long *)(param_1 + 0x1a0) + 8) = puVar1;
    *(long *)(param_1 + 0x1a0) = param_1 + 0x1a0;
    *(long *)(param_1 + 0x1a8) = param_1 + 0x1a0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    iVar2 = _AudioQueueDispose(*(long *)(param_1 + 0x200),1);
    if (iVar2 != 0) {
      return 0x26;
    }
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    iVar2 = _AudioFileClose();
    if (iVar2 != 0) {
      return 0x26;
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x158),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_codec_audioqueue.cpp"
                  ,0xb5);
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  return 0;
}




undefined8 thunk_FUN_10061b5dc(long param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  if (*(char *)(param_1 + 0x219) == '\0') {
    if (*(uint *)(param_1 + 500) <= param_3) {
      param_3 = *(uint *)(param_1 + 500);
    }
    iVar3 = _AudioQueueOfflineRender
                      (*(undefined8 *)(param_1 + 0x200),param_1 + 0x220,
                       *(undefined8 *)(param_1 + 0x210),param_3);
    if (iVar3 == 0) {
      iVar3 = 0;
      do {
        iVar5 = -1;
        while( true ) {
          lVar7 = *(long *)(param_1 + 0x210);
          uVar1 = *(uint *)(lVar7 + 0x10);
          if ((uVar1 != 0) || (*(char *)(param_1 + 0x218) != '\0')) {
            lVar7 = *(long *)(lVar7 + 8);
            uVar2 = 0;
            if (*(uint *)(param_1 + 0x1f8) != 0) {
              uVar2 = uVar1 / *(uint *)(param_1 + 0x1f8);
            }
            dVar9 = *(double *)(param_1 + 0x220) + (double)uVar2;
            *(double *)(param_1 + 0x220) = dVar9;
            if ((uint)(*(int *)(param_1 + 0x264) + *(int *)(param_1 + 0x1e8)) <= (uint)(int)dVar9) {
              iVar3 = _AudioQueueStop(*(undefined8 *)(param_1 + 0x200),1);
              if (iVar3 != 0) {
                return 0x1c;
              }
              *(undefined1 *)(param_1 + 0x219) = 1;
            }
            uVar2 = *(uint *)(param_1 + 0x260);
            if (uVar1 < uVar2) {
              uVar8 = 0;
              *(uint *)(param_1 + 0x260) = uVar2 - uVar1;
            }
            else {
              uVar8 = uVar1 - uVar2;
              *(undefined4 *)(param_1 + 0x260) = 0;
              _memcpy(param_2,(void *)(lVar7 + (ulong)uVar2),(ulong)uVar8);
            }
            uVar1 = 0;
            if (*(uint *)(param_1 + 0x1f8) != 0) {
              uVar1 = uVar8 / *(uint *)(param_1 + 0x1f8);
            }
            *param_4 = uVar1;
            return 0;
          }
          iVar5 = iVar5 + 1;
          if (1 < iVar5) break;
          iVar4 = _AudioQueueOfflineRender
                            (*(undefined8 *)(param_1 + 0x200),param_1 + 0x220,lVar7,param_3);
          if (iVar4 != 0) {
            return 0x1c;
          }
        }
        if (0 < iVar3) {
          return 0xd;
        }
        iVar5 = _AudioQueueDispose(*(undefined8 *)(param_1 + 0x200),1);
        if (iVar5 != 0) {
          return 0x26;
        }
        dVar9 = *(double *)(param_1 + 0x220);
        uVar1 = *(uint *)(param_1 + 0x260);
        uVar2 = *(uint *)(param_1 + 0x1f8);
        auVar10 = FUN_10061aca4(param_1);
        if (auVar10._0_4_ != 0) {
          return auVar10._0_8_;
        }
        iVar3 = iVar3 + 1;
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar1 / uVar2;
        }
        uVar6 = FUN_10061af9c(param_1,auVar10._8_8_,(int)(dVar9 + (double)uVar8));
      } while ((int)uVar6 == 0);
    }
    else {
      uVar6 = 0x1c;
    }
  }
  else {
    uVar6 = 0x10;
  }
  return uVar6;
}




void thunk_FUN_10061af9c(void)

{
  FUN_10061af9c();
  return;
}




undefined8 FUN_10061abe8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  ppuVar6 = (undefined **)PTR_LOOP_10186dc18;
  do {
    if (ppuVar6 == &PTR_LOOP_10186dc18) {
      return 0;
    }
    puVar5 = ppuVar6[2];
    if (puVar5[0x219] == '\0') {
      if (param_1 != 0) {
        _AudioQueueDispose(*(undefined8 *)(puVar5 + 0x200),1);
        *(undefined8 *)(puVar5 + 0x200) = 0;
      }
      if (param_2 != 0) {
        dVar7 = *(double *)(puVar5 + 0x220);
        uVar1 = *(uint *)(puVar5 + 0x260);
        uVar2 = *(uint *)(puVar5 + 0x1f8);
        auVar8 = FUN_10061aca4(puVar5);
        if (auVar8._0_4_ != 0) {
          return auVar8._0_8_;
        }
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        uVar4 = FUN_10061af9c(puVar5,auVar8._8_8_,(int)(dVar7 + (double)uVar3));
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
    }
    ppuVar6 = (undefined **)*ppuVar6;
  } while( true );
}




undefined4 FUN_10061aca4(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  
  local_44 = 0;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x1d4) == 0;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x200);
  local_70 = 0;
  iVar3 = _AudioQueueNewOutput(param_1 + 0x1c0,thunk_FUN_10061b7a4,param_1,0,0,0,puVar1);
  if (iVar3 != 0) {
    if (iVar3 == 0x666d743f) {
      return 0x13;
    }
    return 0x1c;
  }
  iVar3 = _AudioFileGetPropertyInfo(*(undefined8 *)(param_1 + 0x1b8),0x6d676963,&local_44,0);
  lVar5 = 0;
  if (iVar3 == 0 && local_44 != 0) {
    lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_44,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_codec_audioqueue.cpp"
                          ,0x1e4,0,0);
    if (lVar5 == 0) {
      uVar6 = 0x1c;
      goto LAB_10061af50;
    }
    iVar3 = _AudioFileGetProperty(*(undefined8 *)(param_1 + 0x1b8),0x6d676963,&local_44,lVar5);
    if (iVar3 != 0) {
      uVar6 = 0x1c;
      goto LAB_10061af50;
    }
    iVar3 = _AudioQueueSetProperty(*puVar1,0x61716d63,lVar5,local_44);
    if (iVar3 != 0) {
      uVar6 = 0x1c;
      goto LAB_10061af50;
    }
  }
  iVar3 = _AudioFileGetPropertyInfo(*(undefined8 *)(param_1 + 0x1b8),0x636d6170,&local_44,0);
  if (iVar3 == 0 && local_44 != 0) {
    lVar4 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_44,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_codec_audioqueue.cpp"
                          ,0x1f2,0,0);
    if (lVar4 == 0) {
      uVar6 = 0x1c;
    }
    else {
      iVar3 = _AudioFileGetProperty(*(undefined8 *)(param_1 + 0x1b8),0x636d6170,&local_44,lVar4);
      if (iVar3 == 0) {
        iVar3 = _AudioQueueSetProperty(*puVar1,0x6171636c,lVar4,local_44);
        if (iVar3 == 0) goto LAB_10061ae68;
        uVar6 = 0x1c;
      }
      else {
        uVar6 = 0x1c;
      }
    }
  }
  else {
    lVar4 = 0;
LAB_10061ae68:
    iVar3 = _AudioQueueAllocateBufferWithPacketDescriptions
                      (*(undefined8 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x1f0),bVar2,
                       param_1 + 0x208);
    if (iVar3 == 0) {
      iVar3 = _AudioQueueAllocateBuffer
                        (*(undefined8 *)(param_1 + 0x200),
                         *(int *)(param_1 + 0x1f8) * *(int *)(param_1 + 500),param_1 + 0x210);
      uVar6 = 0x1c;
      if (iVar3 == 0) {
        local_70 = *(undefined8 *)(param_1 + 0x1c0);
        local_68 = 0xc6c70636d;
        uStack_50 = CONCAT44(uStack_50._4_4_,0x10);
        iVar3 = *(int *)(param_1 + 0x1dc) << 1;
        local_58 = CONCAT44(*(int *)(param_1 + 0x1dc),iVar3);
        local_60 = CONCAT44(1,iVar3);
        iVar3 = _AudioQueueSetOfflineRenderFormat(*(undefined8 *)(param_1 + 0x200),&local_70,lVar4);
        uVar6 = 0;
        if (iVar3 != 0) {
          uVar6 = 0x1c;
        }
      }
    }
    else {
      uVar6 = 0x1c;
    }
  }
  if (lVar4 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar4,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_autocleanup.h"
                  ,0xbe);
  }
LAB_10061af50:
  if (lVar5 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar5,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_autocleanup.h"
                  ,0xbe);
  }
  return uVar6;
}




ulong FUN_10061af9c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  uint uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = _AudioQueueStop(*(undefined8 *)(param_1 + 0x200),1);
  if (iVar2 != 0) {
    return 0x1c;
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    local_24 = 1;
    if (*(int *)(param_1 + 0x198) == 2) {
      local_24 = 2;
    }
    iVar2 = _AudioQueueSetProperty(*(undefined8 *)(param_1 + 0x200),0x61716370,&local_24,4);
    if (iVar2 != 0) {
      if (iVar2 == -0x10470) {
        uVar4 = 0x29;
        if (*(int *)(param_1 + 0x198) != 2) {
          uVar4 = 0x1c;
        }
        return (ulong)uVar4;
      }
      if (iVar2 != -0x1047c) {
        return 0x1c;
      }
      if (*(int *)(param_1 + 0x198) == 1) {
        return 0x44;
      }
    }
  }
  iVar2 = _AudioQueueStart(*(undefined8 *)(param_1 + 0x200),0);
  if (iVar2 == 0x68776975) {
    if (*(int *)(param_1 + 0x198) == 2) {
      return 0x29;
    }
    if (*(int *)(param_1 + 0x198) != 0) {
      return 0x13;
    }
    local_28 = 3;
    iVar2 = _AudioQueueSetProperty(*(undefined8 *)(param_1 + 0x200),0x61716370,&local_28,4);
    if (iVar2 != -0x1047c && iVar2 != 0) {
      return 0x1c;
    }
    iVar2 = _AudioQueueStart(*(undefined8 *)(param_1 + 0x200),0);
  }
  if (iVar2 == 0) {
    uVar4 = *(uint *)(param_1 + 0x1d4);
    *(undefined4 *)(param_1 + 600) = 1;
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = param_3 / uVar4;
    }
    *(uint *)(param_1 + 0x21c) = uVar1;
    *(double *)(param_1 + 0x220) = (double)(uVar4 * uVar1);
    *(uint *)(param_1 + 0x260) =
         (*(int *)(param_1 + 0x264) + (param_3 - uVar4 * uVar1)) * *(int *)(param_1 + 0x1f8);
    *(undefined2 *)(param_1 + 0x218) = 0;
    iVar2 = _AudioQueueOfflineRender
                      (*(undefined8 *)(param_1 + 0x200),param_1 + 0x220,
                       *(undefined8 *)(param_1 + 0x210),0);
    if (iVar2 == 0) {
      uVar3 = FUN_10061b7a4(param_1,extraout_x1,*(undefined8 *)(param_1 + 0x208));
    }
    else {
      uVar3 = 0x1c;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}




undefined8 FUN_10061b15c(undefined4 *param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 0x12;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultMetaData_101444168;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = puVar1;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  if (param_3 != 0) {
    uVar4 = *(undefined4 *)(param_3 + 0xd4);
  }
  param_1[0x66] = uVar4;
  uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
  if ((((int)uVar2 == 0) && (uVar2 = FUN_10061b2a0(param_1,param_2 >> 0xe & 1), (int)uVar2 == 0)) &&
     (uVar2 = FUN_10061aca4(param_1), (int)uVar2 == 0)) {
    lVar3 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x130,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_codec_audioqueue.cpp"
                          ,0x7f,0);
    *(long *)(param_1 + 0x56) = lVar3;
    *(long *)(param_1 + 2) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0x26;
    }
    else {
      uVar2 = 0;
      *(undefined4 *)(lVar3 + 0x100) = 2;
      *(undefined4 *)(lVar3 + 0x104) = param_1[0x77];
      *(int *)(lVar3 + 0x108) = (int)*(double *)(param_1 + 0x70);
      *(undefined4 *)(lVar3 + 0x10c) = param_1[0x7b];
      *(undefined4 *)(lVar3 + 0x110) = param_1[0x7a];
      *(undefined4 *)(lVar3 + 0x114) = param_1[0x7d];
      *(undefined4 **)(param_1 + 0x6c) = param_1;
      *(undefined ***)(param_1 + 0x68) = &PTR_LOOP_10186dc18;
      *(undefined **)(param_1 + 0x6a) = PTR_LOOP_10186dc20;
      PTR_LOOP_10186dc20 = (undefined *)(param_1 + 0x68);
      **(undefined8 **)(param_1 + 0x6a) = PTR_LOOP_10186dc20;
    }
  }
  return uVar2;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10061b2a0(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  double local_70 [2];
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  long local_48;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  puVar1 = (undefined8 *)(param_1 + 0x1b8);
  local_48 = lVar8;
  iVar3 = _AudioFileOpenWithCallbacks(param_1,FUN_10061b884,0,FUN_10061b900,0,0,puVar1);
  if (iVar3 == 0) {
    local_4c = 0;
    iVar3 = _AudioFileGetPropertyInfo(*puVar1,0x666c7374,&local_4c,0);
    if (iVar3 == 0) {
      if (local_4c < 0x30) {
        uVar4 = 0x1c;
      }
      else {
        puVar6 = (undefined8 *)((long)local_70 - ((ulong)local_4c + 0xf & 0xfffffffffffffff0));
        iVar3 = _AudioFileGetProperty(*puVar1,0x666c7374,&local_4c,puVar6);
        if (iVar3 == 0) {
          if (0x2f < local_4c) {
            uVar5 = 0;
            puVar7 = puVar6;
            do {
              if (*(int *)(puVar7 + 1) == 0x61616368) {
                puVar6 = puVar7;
              }
              uVar5 = uVar5 + 1;
              puVar7 = puVar7 + 6;
            } while (uVar5 < (ulong)local_4c / 0x30);
          }
          *(undefined8 *)(param_1 + 0x1e0) = puVar6[4];
          uVar4 = puVar6[2];
          *(undefined8 *)(param_1 + 0x1d8) = puVar6[3];
          *(undefined8 *)(param_1 + 0x1d0) = uVar4;
          uVar4 = *puVar6;
          *(undefined8 *)(param_1 + 0x1c8) = puVar6[1];
          *(undefined8 *)(param_1 + 0x1c0) = uVar4;
          uVar2 = 0x70737a65;
          if (param_2 == 0) {
            uVar2 = 0x706b7562;
          }
          local_50 = 0;
          local_4c = 4;
          iVar3 = _AudioFileGetProperty(*(undefined8 *)(param_1 + 0x1b8),uVar2,&local_4c,&local_50);
          if (iVar3 == 0) {
            local_60 = 0;
            local_58 = 0;
            local_4c = 0x10;
            _AudioFileGetProperty(*(undefined8 *)(param_1 + 0x1b8),0x706e666f,&local_4c,&local_60);
            *(undefined4 *)(param_1 + 0x264) = (undefined4)local_58;
            *(int *)(param_1 + 0x1e8) = (int)local_60;
            if ((local_60 == 0) || (*(int *)(param_1 + 0x1c8) == 0x61616368)) {
              local_70[1] = 0.0;
              local_4c = 8;
              iVar3 = _AudioFileGetProperty(*puVar1,0x65647572,&local_4c,local_70 + 1);
              if (iVar3 != 0) {
                uVar4 = 0x1c;
                goto LAB_10061b500;
              }
              *(int *)(param_1 + 0x1e8) = (int)(local_70[1] * *(double *)(param_1 + 0x1c0));
            }
            local_70[0] = 0.0;
            local_4c = 8;
            iVar3 = _AudioFileGetProperty(*puVar1,0x62636e74,&local_4c,local_70);
            if (iVar3 == 0) {
              uVar4 = 0;
              *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1dc) << 1;
              *(undefined4 *)(param_1 + 0x1f0) = local_50;
              *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1d4);
              *(int *)(param_1 + 0x1ec) = SUB84(local_70[0],0);
            }
            else {
              uVar4 = 0x1c;
            }
          }
          else {
            uVar4 = 0x1c;
          }
        }
        else {
          uVar4 = 0x1c;
        }
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  else {
    uVar4 = 0x13;
  }
LAB_10061b500:
  if (lVar8 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




undefined8 FUN_10061b528(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x1a8);
    *puVar1 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 **)(*(long *)(param_1 + 0x1a0) + 8) = puVar1;
    *(long *)(param_1 + 0x1a0) = param_1 + 0x1a0;
    *(long *)(param_1 + 0x1a8) = param_1 + 0x1a0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    iVar2 = _AudioQueueDispose(*(long *)(param_1 + 0x200),1);
    if (iVar2 != 0) {
      return 0x26;
    }
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    iVar2 = _AudioFileClose();
    if (iVar2 != 0) {
      return 0x26;
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x158),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_codec_audioqueue.cpp"
                  ,0xb5);
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  return 0;
}




undefined8 FUN_10061b5dc(long param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  if (*(char *)(param_1 + 0x219) == '\0') {
    if (*(uint *)(param_1 + 500) <= param_3) {
      param_3 = *(uint *)(param_1 + 500);
    }
    iVar3 = _AudioQueueOfflineRender
                      (*(undefined8 *)(param_1 + 0x200),param_1 + 0x220,
                       *(undefined8 *)(param_1 + 0x210),param_3);
    if (iVar3 == 0) {
      iVar3 = 0;
      do {
        iVar5 = -1;
        while( true ) {
          lVar7 = *(long *)(param_1 + 0x210);
          uVar1 = *(uint *)(lVar7 + 0x10);
          if ((uVar1 != 0) || (*(char *)(param_1 + 0x218) != '\0')) {
            lVar7 = *(long *)(lVar7 + 8);
            uVar2 = 0;
            if (*(uint *)(param_1 + 0x1f8) != 0) {
              uVar2 = uVar1 / *(uint *)(param_1 + 0x1f8);
            }
            dVar9 = *(double *)(param_1 + 0x220) + (double)uVar2;
            *(double *)(param_1 + 0x220) = dVar9;
            if ((uint)(*(int *)(param_1 + 0x264) + *(int *)(param_1 + 0x1e8)) <= (uint)(int)dVar9) {
              iVar3 = _AudioQueueStop(*(undefined8 *)(param_1 + 0x200),1);
              if (iVar3 != 0) {
                return 0x1c;
              }
              *(undefined1 *)(param_1 + 0x219) = 1;
            }
            uVar2 = *(uint *)(param_1 + 0x260);
            if (uVar1 < uVar2) {
              uVar8 = 0;
              *(uint *)(param_1 + 0x260) = uVar2 - uVar1;
            }
            else {
              uVar8 = uVar1 - uVar2;
              *(undefined4 *)(param_1 + 0x260) = 0;
              _memcpy(param_2,(void *)(lVar7 + (ulong)uVar2),(ulong)uVar8);
            }
            uVar1 = 0;
            if (*(uint *)(param_1 + 0x1f8) != 0) {
              uVar1 = uVar8 / *(uint *)(param_1 + 0x1f8);
            }
            *param_4 = uVar1;
            return 0;
          }
          iVar5 = iVar5 + 1;
          if (1 < iVar5) break;
          iVar4 = _AudioQueueOfflineRender
                            (*(undefined8 *)(param_1 + 0x200),param_1 + 0x220,lVar7,param_3);
          if (iVar4 != 0) {
            return 0x1c;
          }
        }
        if (0 < iVar3) {
          return 0xd;
        }
        iVar5 = _AudioQueueDispose(*(undefined8 *)(param_1 + 0x200),1);
        if (iVar5 != 0) {
          return 0x26;
        }
        dVar9 = *(double *)(param_1 + 0x220);
        uVar1 = *(uint *)(param_1 + 0x260);
        uVar2 = *(uint *)(param_1 + 0x1f8);
        auVar10 = FUN_10061aca4(param_1);
        if (auVar10._0_4_ != 0) {
          return auVar10._0_8_;
        }
        iVar3 = iVar3 + 1;
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar1 / uVar2;
        }
        uVar6 = FUN_10061af9c(param_1,auVar10._8_8_,(int)(dVar9 + (double)uVar8));
      } while ((int)uVar6 == 0);
    }
    else {
      uVar6 = 0x1c;
    }
  }
  else {
    uVar6 = 0x10;
  }
  return uVar6;
}




undefined8 FUN_10061b7a4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  undefined4 local_24;
  
  local_24 = *(undefined4 *)(param_1 + 0x1f0);
  local_28 = 1;
  if (*(char *)(param_1 + 0x218) == '\0') {
    iVar1 = _AudioFileReadPacketData
                      (*(undefined8 *)(param_1 + 0x1b8),0,&local_24,*(undefined8 *)(param_3 + 0x28),
                       *(undefined4 *)(param_1 + 0x21c),&local_28,*(undefined8 *)(param_3 + 8));
    if (iVar1 == 0) {
      if (local_28 == 0) {
        iVar1 = _AudioQueueFlush(*(undefined8 *)(param_1 + 0x200));
        if (iVar1 == 0) {
          uVar2 = 0;
          *(undefined1 *)(param_1 + 0x218) = 1;
        }
        else {
          uVar2 = 0x1c;
        }
      }
      else {
        *(undefined4 *)(param_3 + 0x10) = local_24;
        *(int *)(param_3 + 0x30) = local_28;
        iVar1 = _AudioQueueEnqueueBuffer(*(undefined8 *)(param_1 + 0x200),param_3,0,0);
        if (iVar1 == 0) {
          uVar2 = 0;
          *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + local_28;
        }
        else {
          uVar2 = 0x1c;
        }
      }
    }
    else {
      uVar2 = 0x1c;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




ulong FUN_10061b884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 local_34;
  
  local_34 = 0;
  uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),param_2,0);
  if ((int)uVar3 == 0) {
    uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_4,1,param_3,&local_34);
    uVar1 = 0;
    if (uVar2 != 0x10) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar3 = 0;
      *param_5 = local_34;
    }
  }
  return uVar3;
}




undefined4 FUN_10061b900(long param_1)

{
  int iVar1;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = (**(code **)(**(long **)(param_1 + 400) + 0x18))(*(long **)(param_1 + 400),&local_14);
  if (iVar1 != 0) {
    local_14 = 0;
  }
  return local_14;
}




void thunk_FUN_10061b7a4(void)

{
  FUN_10061b7a4();
  return;
}




ulong FUN_10061b944(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 local_34;
  
  local_34 = 0;
  uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),param_2,0);
  if ((int)uVar3 == 0) {
    uVar2 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_4,1,param_3,&local_34);
    uVar1 = 0;
    if (uVar2 != 0x10) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar3 = 0;
      *param_5 = local_34;
    }
  }
  return uVar3;
}




undefined8 FUN_10061b9c0(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  uint local_24;
  
  local_24 = 0;
  uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0x18))(*(long **)(param_1 + 400),&local_24);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *param_2 = (ulong)local_24;
  }
  return uVar1;
}




void FUN_10061ba0c(void)

{
  _memset(&DAT_101ea4680,0,0x60);
  FUN_1005ecc98(&DAT_101ea4684,"Cutoff freq",0x10);
  FUN_1005ecc98(&DAT_101ea4694,"hz",0x10);
  DAT_101ea46b0 = 0x41200000;
  DAT_101ea46b4 = 0x46abe000;
  DAT_101ea46b8 = 0x447a0000;
  DAT_101ea46c0 = 1;
  DAT_101ea46a8 = "Highpass cutoff frequency in hz.  10.0 to 22000.0.  Default = 1000.0";
  DAT_101ea46e0 = &DAT_10186dc38;
  DAT_101ea46f8 = 0x1a;
  DAT_101ea46f0 = 0x2d8;
  return;
}




undefined8 FUN_10061bab8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar3 = 0;
    do {
      uVar1 = FUN_1005cef0c((char)*(undefined4 *)
                                   (*(long *)(*(long *)(lVar2 + 0x68) + lVar3 * 8) + 0x38),param_1,
                            lVar3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 0xd0);
    } while (lVar3 < *(int *)(lVar2 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  auVar9 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
  uVar1 = auVar9._0_8_;
  *(undefined8 *)(param_1 + 0x1d4) = uVar1;
  *(undefined8 *)(param_1 + 0x24c) = 0;
  *(undefined8 *)(param_1 + 0x254) = uVar1;
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = uVar1;
  *(undefined8 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x264) = uVar1;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = uVar1;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x274) = uVar1;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x204) = uVar1;
  *(undefined8 *)(param_1 + 0x27c) = 0;
  *(undefined8 *)(param_1 + 0x284) = uVar1;
  *(undefined8 *)(param_1 + 0x20c) = 0;
  *(undefined8 *)(param_1 + 0x214) = uVar1;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  *(undefined8 *)(param_1 + 0x294) = uVar1;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x224) = uVar1;
  *(undefined8 *)(param_1 + 0x29c) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = uVar1;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x234) = uVar1;
  *(undefined8 *)(param_1 + 0x2ac) = 0;
  *(undefined8 *)(param_1 + 0x2b4) = uVar1;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x244) = uVar1;
  *(undefined8 *)(param_1 + 700) = 0;
  *(undefined8 *)(param_1 + 0x2c4) = uVar1;
  fVar8 = *(float *)(param_1 + 0x2d0);
  *(float *)(param_1 + 0x1c8) = fVar8;
  if (22000.0 <= fVar8) {
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  else {
    fVar10 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
    fVar11 = fVar10 / 3.1415927;
    if (fVar8 <= fVar11) {
      fVar8 = 1.0 / (fVar8 * 6.2831855);
      uVar4 = SUB41(fVar8,0);
      uVar5 = (undefined1)((uint)fVar8 >> 8);
      uVar6 = (undefined1)((uint)fVar8 >> 0x10);
      uVar7 = (undefined1)((uint)fVar8 >> 0x18);
      fVar8 = 1.0 / fVar10 + fVar8;
    }
    else {
      fVar8 = 22000.0 - fVar8;
      uVar4 = SUB41(fVar8,0);
      uVar5 = (undefined1)((uint)fVar8 >> 8);
      uVar6 = (undefined1)((uint)fVar8 >> 0x10);
      uVar7 = (undefined1)((uint)fVar8 >> 0x18);
      fVar8 = (22000.0 - fVar11) * 3.0;
    }
    *(float *)(param_1 + 0x2cc) =
         (float)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,uVar4))) / fVar8;
  }
  return 0;
}




undefined8 FUN_10061bca0(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  auVar2 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
  uVar1 = auVar2._0_8_;
  *(undefined8 *)(param_1 + 0x1d4) = uVar1;
  *(undefined8 *)(param_1 + 0x24c) = 0;
  *(undefined8 *)(param_1 + 0x254) = uVar1;
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = uVar1;
  *(undefined8 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x264) = uVar1;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = uVar1;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x274) = uVar1;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x204) = uVar1;
  *(undefined8 *)(param_1 + 0x27c) = 0;
  *(undefined8 *)(param_1 + 0x284) = uVar1;
  *(undefined8 *)(param_1 + 0x20c) = 0;
  *(undefined8 *)(param_1 + 0x214) = uVar1;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  *(undefined8 *)(param_1 + 0x294) = uVar1;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x224) = uVar1;
  *(undefined8 *)(param_1 + 0x29c) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = uVar1;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x234) = uVar1;
  *(undefined8 *)(param_1 + 0x2ac) = 0;
  *(undefined8 *)(param_1 + 0x2b4) = uVar1;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x244) = uVar1;
  *(undefined8 *)(param_1 + 700) = 0;
  *(undefined8 *)(param_1 + 0x2c4) = uVar1;
  return 0;
}




undefined8 FUN_10061bdb0(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1 < 22000.0) {
    fVar1 = (float)*(int *)(*(long *)(param_2 + 0x90) + 0x708);
    fVar2 = fVar1 / 3.1415927;
    if (param_1 <= fVar2) {
      param_1 = 1.0 / (param_1 * 6.2831855);
      fVar1 = 1.0 / fVar1 + param_1;
    }
    else {
      param_1 = 22000.0 - param_1;
      fVar1 = (22000.0 - fVar2) * 3.0;
    }
    *(float *)(param_2 + 0x2cc) = param_1 / fVar1;
    return 0;
  }
  *(undefined4 *)(param_2 + 0x2cc) = 0;
  return 0;
}




undefined8 FUN_10061be2c(long param_1,float *param_2,float *param_3,uint param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float *pfVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  fVar21 = *(float *)(param_1 + 0x2d0);
  iVar20 = (int)param_5;
  if (*(float *)(param_1 + 0x1c8) == fVar21) {
    fVar21 = *(float *)(param_1 + 0x2cc);
  }
  else {
    *(float *)(param_1 + 0x1c8) = fVar21;
    if (22000.0 <= fVar21) {
      *(undefined4 *)(param_1 + 0x2cc) = 0;
      goto LAB_10061bf0c;
    }
    fVar26 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
    fVar32 = fVar26 / 3.1415927;
    if (fVar21 <= fVar32) {
      fVar21 = 1.0 / (fVar21 * 6.2831855);
      fVar26 = 1.0 / fVar26 + fVar21;
    }
    else {
      fVar21 = 22000.0 - fVar21;
      fVar26 = (22000.0 - fVar32) * 3.0;
    }
    fVar21 = fVar21 / fVar26;
    *(float *)(param_1 + 0x2cc) = fVar21;
  }
  pfVar12 = (float *)(param_1 + 0x2cc);
  if (fVar21 == 1.0) {
    _memcpy(param_3,param_2,(ulong)param_4 * (long)iVar20 * 4);
    return 0;
  }
  if (fVar21 != 0.0) {
    switch(iVar20) {
    case 1:
      fVar32 = *(float *)(param_1 + 0x24c);
      fVar26 = *(float *)(param_1 + 0x1cc);
      if (param_4 != 0) {
        fVar26 = *param_2;
        fVar32 = fVar21 * ((fVar32 + fVar26 + DAT_10186dd10) - *(float *)(param_1 + 0x1cc));
        *param_3 = fVar32;
        DAT_10186dd10 = -DAT_10186dd10;
        if (param_4 != 1) {
          iVar20 = 1 - param_4;
          fVar21 = fVar26;
          do {
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
            fVar26 = *param_2;
            fVar32 = *pfVar12 * ((fVar32 + fVar26 + DAT_10186dd10) - fVar21);
            *param_3 = fVar32;
            DAT_10186dd10 = -DAT_10186dd10;
            iVar20 = iVar20 + 1;
            fVar21 = fVar26;
          } while (iVar20 != 0);
        }
      }
      *(float *)(param_1 + 0x1cc) = fVar26;
      *(float *)(param_1 + 0x24c) = fVar32;
      return 0;
    case 2:
      fVar28 = *(float *)(param_1 + 0x1cc);
      fVar29 = *(float *)(param_1 + 0x1d0);
      fVar27 = *(float *)(param_1 + 0x24c);
      fVar24 = *(float *)(param_1 + 0x250);
      fVar26 = fVar28;
      fVar32 = fVar29;
      if (param_4 != 0) {
        while( true ) {
          fVar28 = *param_2;
          fVar29 = param_2[1];
          fVar27 = fVar21 * ((fVar27 + fVar28 + DAT_10186dd10) - fVar26);
          fVar24 = fVar21 * ((DAT_10186dd10 + fVar24 + fVar29) - fVar32);
          *param_3 = fVar27;
          param_3[1] = fVar24;
          DAT_10186dd10 = -DAT_10186dd10;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          fVar21 = *pfVar12;
          param_2 = param_2 + 2;
          param_3 = param_3 + 2;
          fVar26 = fVar28;
          fVar32 = fVar29;
        }
      }
      *(float *)(param_1 + 0x1cc) = fVar28;
      *(float *)(param_1 + 0x1d0) = fVar29;
      *(float *)(param_1 + 0x24c) = fVar27;
      *(float *)(param_1 + 0x250) = fVar24;
      return 0;
    case 6:
      uVar38 = *(undefined8 *)(param_1 + 0x1d4);
      uVar36 = *(undefined8 *)(param_1 + 0x1cc);
      fVar35 = *(float *)(param_1 + 0x1dc);
      fVar40 = *(float *)(param_1 + 0x1e0);
      fVar30 = (float)*(undefined8 *)(param_1 + 0x254);
      fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x254) >> 0x20);
      uVar37 = *(undefined8 *)(param_1 + 0x24c);
      fVar28 = (float)uVar37;
      fVar29 = (float)((ulong)uVar37 >> 0x20);
      fVar27 = *(float *)(param_1 + 0x25c);
      fVar24 = *(float *)(param_1 + 0x260);
      uVar37 = uVar36;
      uVar39 = uVar38;
      fVar26 = fVar35;
      fVar32 = fVar40;
      if (param_4 != 0) {
        while( true ) {
          uVar38 = *(undefined8 *)(param_2 + 2);
          uVar36 = *(undefined8 *)param_2;
          fVar28 = ((fVar28 + (float)uVar36 + DAT_10186dd10) - (float)uVar37) * fVar21;
          fVar29 = ((fVar29 + (float)((ulong)uVar36 >> 0x20) + DAT_10186dd10) -
                   (float)((ulong)uVar37 >> 0x20)) * fVar21;
          fVar30 = ((fVar30 + (float)uVar38 + DAT_10186dd10) - (float)uVar39) * fVar21;
          fVar31 = ((fVar31 + (float)((ulong)uVar38 >> 0x20) + DAT_10186dd10) -
                   (float)((ulong)uVar39 >> 0x20)) * fVar21;
          fVar35 = param_2[4];
          fVar40 = param_2[5];
          fVar27 = fVar21 * ((DAT_10186dd10 + fVar27 + fVar35) - fVar26);
          fVar24 = fVar21 * ((DAT_10186dd10 + fVar24 + fVar40) - fVar32);
          *(ulong *)param_3 = CONCAT44(fVar29,fVar28);
          auVar8._4_4_ = fVar29;
          auVar8._0_4_ = fVar28;
          auVar8._8_4_ = fVar30;
          auVar8._12_4_ = fVar31;
          auVar9._4_4_ = fVar29;
          auVar9._0_4_ = fVar28;
          auVar9._8_4_ = fVar30;
          auVar9._12_4_ = fVar31;
          auVar25 = NEON_ext(auVar8,auVar9,8,1);
          *(long *)(param_3 + 2) = auVar25._0_8_;
          param_3[4] = fVar27;
          param_3[5] = fVar24;
          DAT_10186dd10 = -DAT_10186dd10;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          fVar21 = *pfVar12;
          param_2 = param_2 + 6;
          param_3 = param_3 + 6;
          uVar37 = uVar36;
          uVar39 = uVar38;
          fVar26 = fVar35;
          fVar32 = fVar40;
        }
      }
      *(int *)(param_1 + 0x1cc) = (int)uVar36;
      *(int *)(param_1 + 0x1d0) = (int)((ulong)uVar36 >> 0x20);
      *(int *)(param_1 + 0x1d4) = (int)uVar38;
      *(int *)(param_1 + 0x1d8) = (int)((ulong)uVar38 >> 0x20);
      *(float *)(param_1 + 0x1dc) = fVar35;
      *(float *)(param_1 + 0x1e0) = fVar40;
      *(undefined8 *)(param_1 + 0x24c) = CONCAT44(fVar29,fVar28);
      auVar10._4_4_ = fVar29;
      auVar10._0_4_ = fVar28;
      auVar10._8_4_ = fVar30;
      auVar10._12_4_ = fVar31;
      auVar11._4_4_ = fVar29;
      auVar11._0_4_ = fVar28;
      auVar11._8_4_ = fVar30;
      auVar11._12_4_ = fVar31;
      auVar25 = NEON_ext(auVar10,auVar11,8,1);
      *(long *)(param_1 + 0x254) = auVar25._0_8_;
      *(float *)(param_1 + 0x25c) = fVar27;
      *(float *)(param_1 + 0x260) = fVar24;
      return 0;
    case 8:
      fVar33 = (float)*(undefined8 *)(param_1 + 0x1d4);
      fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d4) >> 0x20);
      fVar35 = (float)*(undefined8 *)(param_1 + 0x1cc);
      fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x1cc) >> 0x20);
      uVar38 = *(undefined8 *)(param_1 + 0x1e4);
      uVar36 = *(undefined8 *)(param_1 + 0x1dc);
      fVar30 = (float)*(undefined8 *)(param_1 + 0x254);
      fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x254) >> 0x20);
      uVar37 = *(undefined8 *)(param_1 + 0x24c);
      fVar28 = (float)uVar37;
      fVar29 = (float)((ulong)uVar37 >> 0x20);
      auVar25 = *(undefined1 (*) [16])(param_1 + 0x25c);
      fVar26 = fVar35;
      fVar32 = fVar40;
      fVar24 = fVar33;
      fVar27 = fVar34;
      uVar37 = uVar36;
      uVar39 = uVar38;
      if (param_4 != 0) {
        while( true ) {
          fVar33 = (float)*(undefined8 *)(param_2 + 2);
          fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
          fVar35 = (float)*(undefined8 *)param_2;
          fVar40 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
          fVar28 = ((fVar28 + fVar35 + DAT_10186dd10) - fVar26) * fVar21;
          fVar29 = ((fVar29 + fVar40 + DAT_10186dd10) - fVar32) * fVar21;
          fVar30 = ((fVar30 + fVar33 + DAT_10186dd10) - fVar24) * fVar21;
          fVar31 = ((fVar31 + fVar34 + DAT_10186dd10) - fVar27) * fVar21;
          uVar38 = *(undefined8 *)(param_2 + 6);
          uVar36 = *(undefined8 *)(param_2 + 4);
          fVar26 = auVar25._8_4_;
          fVar32 = auVar25._12_4_;
          auVar25._0_8_ =
               CONCAT44(((auVar25._4_4_ + (float)((ulong)uVar36 >> 0x20) + DAT_10186dd10) -
                        (float)((ulong)uVar37 >> 0x20)) * fVar21,
                        ((auVar25._0_4_ + (float)uVar36 + DAT_10186dd10) - (float)uVar37) * fVar21);
          auVar25._8_4_ = ((fVar26 + (float)uVar38 + DAT_10186dd10) - (float)uVar39) * fVar21;
          auVar25._12_4_ =
               ((fVar32 + (float)((ulong)uVar38 >> 0x20) + DAT_10186dd10) -
               (float)((ulong)uVar39 >> 0x20)) * fVar21;
          *(ulong *)param_3 = CONCAT44(fVar29,fVar28);
          auVar23._4_4_ = fVar29;
          auVar23._0_4_ = fVar28;
          auVar23._8_4_ = fVar30;
          auVar23._12_4_ = fVar31;
          auVar5._4_4_ = fVar29;
          auVar5._0_4_ = fVar28;
          auVar5._8_4_ = fVar30;
          auVar5._12_4_ = fVar31;
          auVar23 = NEON_ext(auVar23,auVar5,8,1);
          *(long *)(param_3 + 2) = auVar23._0_8_;
          *(undefined8 *)(param_3 + 4) = auVar25._0_8_;
          auVar23 = NEON_ext(auVar25,auVar25,8,1);
          *(long *)(param_3 + 6) = auVar23._0_8_;
          DAT_10186dd10 = -DAT_10186dd10;
          param_4 = param_4 - 1;
          if (param_4 == 0) break;
          fVar21 = *pfVar12;
          param_2 = param_2 + 8;
          param_3 = param_3 + 8;
          fVar26 = fVar35;
          fVar32 = fVar40;
          fVar24 = fVar33;
          fVar27 = fVar34;
          uVar37 = uVar36;
          uVar39 = uVar38;
        }
      }
      *(float *)(param_1 + 0x1cc) = fVar35;
      *(float *)(param_1 + 0x1d0) = fVar40;
      *(float *)(param_1 + 0x1d4) = fVar33;
      *(float *)(param_1 + 0x1d8) = fVar34;
      *(int *)(param_1 + 0x1dc) = (int)uVar36;
      *(int *)(param_1 + 0x1e0) = (int)((ulong)uVar36 >> 0x20);
      *(int *)(param_1 + 0x1e4) = (int)uVar38;
      *(int *)(param_1 + 0x1e8) = (int)((ulong)uVar38 >> 0x20);
      *(undefined8 *)(param_1 + 0x24c) = CONCAT44(fVar29,fVar28);
      auVar6._4_4_ = fVar29;
      auVar6._0_4_ = fVar28;
      auVar6._8_4_ = fVar30;
      auVar6._12_4_ = fVar31;
      auVar7._4_4_ = fVar29;
      auVar7._0_4_ = fVar28;
      auVar7._8_4_ = fVar30;
      auVar7._12_4_ = fVar31;
      auVar23 = NEON_ext(auVar6,auVar7,8,1);
      *(long *)(param_1 + 0x254) = auVar23._0_8_;
      *(long *)*(undefined1 (*) [16])(param_1 + 0x25c) = auVar25._0_8_;
      auVar25 = NEON_ext(auVar25,auVar25,8,1);
      *(long *)(param_1 + 0x264) = auVar25._0_8_;
      return 0;
    }
    if (iVar20 < 1) {
      return 0;
    }
    lVar16 = 0;
    lVar19 = 0;
    do {
      lVar2 = param_1 + lVar19 * 4;
      fVar26 = *(float *)(lVar2 + 0x24c);
      fVar21 = *(float *)(lVar2 + 0x1cc);
      lVar3 = lVar16;
      for (uVar4 = param_4; uVar4 != 0; uVar4 = uVar4 - 1) {
        fVar32 = *(float *)((long)param_2 + lVar3);
        fVar26 = *pfVar12 * ((fVar26 + fVar32 + DAT_10186dd10) - fVar21);
        *(float *)((long)param_3 + lVar3) = fVar26;
        DAT_10186dd10 = -DAT_10186dd10;
        lVar3 = lVar3 + (-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
        fVar21 = fVar32;
      }
      *(float *)(lVar2 + 0x1cc) = fVar21;
      *(float *)(lVar2 + 0x24c) = fVar26;
      iVar18 = (int)lVar19;
      lVar19 = lVar19 + 1;
      lVar16 = lVar16 + 4;
    } while (iVar18 != iVar20 + -1);
    return 0;
  }
LAB_10061bf0c:
  _bzero(param_3,(ulong)param_4 * (long)iVar20 * 4);
  if (0 < iVar20) {
    uVar1 = (ulong)(iVar20 - 1) + 1;
    uVar13 = uVar1 & 0x1fffffffc;
    if (uVar13 == 0) {
      uVar13 = 0;
    }
    else {
      uVar15 = (ulong)(iVar20 - 1) + 1 & 0xfffffffffffffffc;
      puVar17 = (undefined8 *)(param_1 + 0x24c);
      auVar22._0_14_ = ZEXT214(0);
      auVar22._14_2_ = 0;
      auVar25 = NEON_ext(auVar22,auVar22,8,1);
      do {
        puVar17[-0x10] = 0;
        puVar17[-0xf] = auVar25._0_8_;
        *puVar17 = 0;
        uVar15 = uVar15 - 4;
        puVar17[1] = auVar25._0_8_;
        puVar17 = puVar17 + 2;
      } while (uVar15 != 0);
    }
    if (uVar1 != uVar13) {
      iVar20 = iVar20 - (int)uVar13;
      puVar14 = (undefined4 *)(param_1 + uVar13 * 4 + 0x24c);
      do {
        puVar14[-0x20] = 0;
        *puVar14 = 0;
        iVar20 = iVar20 + -1;
        puVar14 = puVar14 + 1;
      } while (iVar20 != 0);
    }
  }
  return 0;
}




undefined8 FUN_10061c368(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x2d0) = param_1;
  }
  return 0;
}




undefined8 FUN_10061c378(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x2d0);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
  }
  return 0;
}




void FUN_10061c3c0(undefined8 *param_1)

{
  FUN_10061bab8(*param_1);
  return;
}




undefined8 FUN_10061c3c8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x1cc) = 0;
  auVar3 = NEON_ext(ZEXT216(0),ZEXT216(0),8,1);
  uVar2 = auVar3._0_8_;
  *(undefined8 *)(lVar1 + 0x1d4) = uVar2;
  *(undefined8 *)(lVar1 + 0x24c) = 0;
  *(undefined8 *)(lVar1 + 0x254) = uVar2;
  *(undefined8 *)(lVar1 + 0x1dc) = 0;
  *(undefined8 *)(lVar1 + 0x1e4) = uVar2;
  *(undefined8 *)(lVar1 + 0x25c) = 0;
  *(undefined8 *)(lVar1 + 0x264) = uVar2;
  *(undefined8 *)(lVar1 + 0x1ec) = 0;
  *(undefined8 *)(lVar1 + 500) = uVar2;
  *(undefined8 *)(lVar1 + 0x26c) = 0;
  *(undefined8 *)(lVar1 + 0x274) = uVar2;
  *(undefined8 *)(lVar1 + 0x1fc) = 0;
  *(undefined8 *)(lVar1 + 0x204) = uVar2;
  *(undefined8 *)(lVar1 + 0x27c) = 0;
  *(undefined8 *)(lVar1 + 0x284) = uVar2;
  *(undefined8 *)(lVar1 + 0x20c) = 0;
  *(undefined8 *)(lVar1 + 0x214) = uVar2;
  *(undefined8 *)(lVar1 + 0x28c) = 0;
  *(undefined8 *)(lVar1 + 0x294) = uVar2;
  *(undefined8 *)(lVar1 + 0x21c) = 0;
  *(undefined8 *)(lVar1 + 0x224) = uVar2;
  *(undefined8 *)(lVar1 + 0x29c) = 0;
  *(undefined8 *)(lVar1 + 0x2a4) = uVar2;
  *(undefined8 *)(lVar1 + 0x22c) = 0;
  *(undefined8 *)(lVar1 + 0x234) = uVar2;
  *(undefined8 *)(lVar1 + 0x2ac) = 0;
  *(undefined8 *)(lVar1 + 0x2b4) = uVar2;
  *(undefined8 *)(lVar1 + 0x23c) = 0;
  *(undefined8 *)(lVar1 + 0x244) = uVar2;
  *(undefined8 *)(lVar1 + 700) = 0;
  *(undefined8 *)(lVar1 + 0x2c4) = uVar2;
  return 0;
}




undefined8 FUN_10061c4dc(undefined8 *param_1)

{
  FUN_10061be2c(*param_1);
  return 0;
}




undefined8 FUN_10061c4f8(undefined4 param_1,long *param_2,int param_3)

{
  if (param_3 == 0) {
    *(undefined4 *)(*param_2 + 0x2d0) = param_1;
  }
  return 0;
}




undefined8 FUN_10061c50c(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 0) {
    *param_3 = *(undefined4 *)(*param_1 + 0x2d0);
    if (param_4 != (char *)0x0) {
      _sprintf(param_4,"%.02f");
    }
  }
  return 0;
}




void FUN_10061c558(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 <= 10.0) {
    param_2 = 10.0;
  }
  if (22000.0 <= param_2) {
    param_2 = 22000.0;
  }
  if (param_1 * 0.49 <= param_2) {
    param_2 = param_1 * 0.49;
  }
  param_2 = param_2 * 6.2831855;
  fVar1 = (float)___sincosf_stret(param_2 / param_1);
  fVar1 = fVar1 / (param_3 + param_3);
  fVar2 = 1.0 / (fVar1 + 1.0);
  fVar3 = (1.0 - param_2) * fVar2;
  *param_6 = fVar3;
  fVar3 = fVar3 * 0.5;
  *param_7 = fVar3;
  *param_5 = fVar3;
  *param_8 = param_2 * -2.0 * fVar2;
  *param_9 = (1.0 - fVar1) * fVar2;
  return;
}




void FUN_10061c630(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 <= 10.0) {
    param_2 = 10.0;
  }
  if (22000.0 <= param_2) {
    param_2 = 22000.0;
  }
  if (param_1 * 0.49 <= param_2) {
    param_2 = param_1 * 0.49;
  }
  param_2 = param_2 * 6.2831855;
  fVar1 = (float)___sincosf_stret(param_2 / param_1);
  fVar1 = fVar1 / (param_3 + param_3);
  fVar2 = 1.0 / (fVar1 + 1.0);
  *param_6 = -((param_2 + 1.0) * fVar2);
  fVar3 = (param_2 + 1.0) * fVar2 * 0.5;
  *param_7 = fVar3;
  *param_5 = fVar3;
  *param_8 = param_2 * -2.0 * fVar2;
  *param_9 = (1.0 - fVar1) * fVar2;
  return;
}




void FUN_10061c70c(uint *param_1,uint param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  param_1[9] = param_2;
  if (param_2 != 0) {
    fVar1 = 1.0 / (float)(int)param_2;
    auVar2._0_8_ = CONCAT44(((float)param_1[0xb] -
                            (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20)) * fVar1,
                            ((float)param_1[10] - (float)*(undefined8 *)(param_1 + 4)) * fVar1);
    auVar2._8_4_ = ((float)param_1[0xc] - (float)*(undefined8 *)(param_1 + 6)) * fVar1;
    auVar2._12_4_ =
         ((float)param_1[0xd] - (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20)) * fVar1;
    *(undefined8 *)(param_1 + 0xf) = auVar2._0_8_;
    auVar2 = NEON_ext(auVar2,auVar2,8,1);
    *(long *)(param_1 + 0x11) = auVar2._0_8_;
    param_1[0x13] = (uint)(fVar1 * ((float)param_1[0xe] - (float)param_1[8]));
    return;
  }
  param_1[4] = param_1[10];
  param_1[5] = param_1[0xb];
  param_1[6] = param_1[0xc];
  param_1[7] = param_1[0xd];
  param_1[8] = param_1[0xe];
  *param_1 = param_1[0xd] ^ 0x80000000;
  param_1[1] = param_1[0xe] ^ 0x80000000;
  param_1[2] = param_1[0xb];
  param_1[3] = param_1[0xc];
  return;
}




void FUN_10061c784(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_4;
  fVar3 = param_4[0x20];
  if (param_7 == 0) {
    if ((param_3 & 7) != 0) {
      iVar1 = -(param_3 & 7);
      do {
        *param_2 = *param_2 + fVar2 * *param_1;
        param_2[1] = param_2[1] + fVar3 * *param_1;
        iVar1 = iVar1 + 1;
        param_2 = param_2 + 2;
        param_1 = param_1 + 1;
      } while (iVar1 != 0);
    }
  }
  else if ((param_3 & 7) != 0) {
    iVar1 = -(param_3 & 7);
    do {
      *param_2 = fVar2 * *param_1;
      param_2[1] = fVar3 * *param_1;
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 2;
      param_1 = param_1 + 1;
    } while (iVar1 != 0);
  }
  return;
}




void FUN_10061c80c(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_4;
  fVar3 = param_4[0x21];
  if (param_7 == 0) {
    if ((param_3 & 3) != 0) {
      iVar1 = -(param_3 & 3);
      do {
        *param_2 = *param_2 + fVar2 * *param_1;
        param_2[1] = param_2[1] + fVar3 * param_1[1];
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      } while (iVar1 != 0);
    }
  }
  else if ((param_3 & 3) != 0) {
    iVar1 = -(param_3 & 3);
    do {
      *param_2 = fVar2 * *param_1;
      param_2[1] = fVar3 * param_1[1];
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    } while (iVar1 != 0);
  }
  return;
}




void FUN_10061c89c(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  
  if ((param_2 & 7) != 0) {
    uVar3 = (ulong)*(uint *)((long)param_4 + 4);
    uVar1 = *param_4;
    iVar2 = -(param_2 & 7);
    uVar4 = (ulong)(uint)*param_4;
    do {
      fVar5 = (float)(uVar4 & 0xffffffff) * 2.3283064e-10;
      *param_1 = (1.0 - fVar5) * (float)(int)(short)*(char *)(param_3 + uVar3) * 0.0078125 +
                 fVar5 * (float)(int)(short)*(char *)(param_3 + (ulong)((int)uVar3 + 1)) * 0.0078125
      ;
      uVar1 = uVar1 + *param_5;
      *param_4 = uVar1;
      uVar3 = uVar1 >> 0x20;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      uVar4 = uVar1;
    } while (iVar2 != 0);
  }
  return;
}




void FUN_10061c92c(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  
  if ((param_2 & 3) != 0) {
    uVar4 = (ulong)*(uint *)((long)param_4 + 4);
    uVar2 = *param_4;
    iVar3 = -(param_2 & 3);
    uVar5 = (ulong)(uint)*param_4;
    do {
      fVar6 = (float)(uVar5 & 0xffffffff) * 2.3283064e-10;
      uVar1 = (int)uVar4 * 2;
      cVar7 = *(char *)(param_3 + (ulong)((int)uVar4 << 1 | 1));
      cVar8 = *(char *)(param_3 + (ulong)(uVar1 + 3));
      *param_1 = (1.0 - fVar6) * (float)(int)(short)*(char *)(param_3 + (ulong)uVar1) * 0.0078125 +
                 fVar6 * (float)(int)(short)*(char *)(param_3 + (ulong)(uVar1 + 2)) * 0.0078125;
      param_1[1] = (1.0 - fVar6) * (float)(int)(short)cVar7 * 0.0078125 +
                   fVar6 * (float)(int)(short)cVar8 * 0.0078125;
      uVar2 = uVar2 + *param_5;
      *param_4 = uVar2;
      uVar4 = uVar2 >> 0x20;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 2;
      uVar5 = uVar2;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_10061ca04(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  
  if ((param_2 & 7) != 0) {
    uVar3 = (ulong)*(uint *)((long)param_4 + 4);
    uVar1 = *param_4;
    iVar2 = -(param_2 & 7);
    uVar4 = (ulong)(uint)*param_4;
    do {
      fVar5 = (float)(uVar4 & 0xffffffff) * 2.3283064e-10;
      *param_1 = (1.0 - fVar5) * (float)(int)*(short *)(param_3 + uVar3 * 2) * 3.0517578e-05 +
                 fVar5 * (float)(int)*(short *)(param_3 + (ulong)((int)uVar3 + 1) * 2) *
                         3.0517578e-05;
      uVar1 = uVar1 + *param_5;
      *param_4 = uVar1;
      uVar3 = uVar1 >> 0x20;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      uVar4 = uVar1;
    } while (iVar2 != 0);
  }
  return;
}




void FUN_10061ca8c(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  
  if ((param_2 & 3) != 0) {
    uVar4 = (ulong)*(uint *)((long)param_4 + 4);
    uVar2 = *param_4;
    iVar3 = -(param_2 & 3);
    uVar5 = (ulong)(uint)*param_4;
    do {
      fVar6 = (float)(uVar5 & 0xffffffff) * 2.3283064e-10;
      uVar1 = (int)uVar4 * 2;
      sVar7 = *(short *)(param_3 + (ulong)((int)uVar4 << 1 | 1) * 2);
      sVar8 = *(short *)(param_3 + (ulong)(uVar1 + 3) * 2);
      *param_1 = (1.0 - fVar6) * (float)(int)*(short *)(param_3 + (ulong)uVar1 * 2) * 3.0517578e-05
                 + fVar6 * (float)(int)*(short *)(param_3 + (ulong)(uVar1 + 2) * 2) * 3.0517578e-05;
      param_1[1] = (1.0 - fVar6) * (float)(int)sVar7 * 3.0517578e-05 +
                   fVar6 * (float)(int)sVar8 * 3.0517578e-05;
      uVar2 = uVar2 + *param_5;
      *param_4 = uVar2;
      uVar4 = uVar2 >> 0x20;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 2;
      uVar5 = uVar2;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_10061cb54(void)

{
  DAT_101ea4718 = "FMOD FSB Codec";
  DAT_101ea4720 = 0x20000;
  DAT_101ea4728 = 10;
  DAT_101ea4770 = 5;
  DAT_101ea4774 = 0x1a8;
  DAT_101ea4730 = thunk_FUN_10061d208;
  DAT_101ea4738 = thunk_FUN_10061da94;
  DAT_101ea4740 = FUN_10061cbf0;
  DAT_101ea4750 = FUN_10061cbf8;
  DAT_101ea4760 = thunk_FUN_10061dd6c;
  DAT_101ea4768 = FUN_10061cc70;
  DAT_101ea4790 = FUN_10061cc8c;
  DAT_101ea4798 = FUN_10061ccd8;
  DAT_101ea47d0 = FUN_10061ccfc;
  return;
}




ulong thunk_FUN_10061d208(undefined4 *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  long *plVar15;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_a8 [8];
  int iStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  byte bStack_88;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = *(long *)(param_1 + 0x12);
  if (lVar11 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_10057097c(lVar11,0x11);
    lVar6 = *(long *)(param_1 + 0x12);
  }
  *(undefined8 *)(param_1 + 0x5a) = 0;
  plVar9 = (long *)(lVar6 + 0x167f0);
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x14] = 5;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  if ((param_3 != 0) && (pvVar13 = *(void **)(param_3 + 0xe0), pvVar13 != (void *)0x0)) {
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    iVar2 = _memcmp(pvVar13,&uStack_1d8,0x10);
    plVar15 = (long *)0x0;
    if (iVar2 != 0) {
      for (plVar15 = (long *)*plVar9; plVar15 != plVar9; plVar15 = (long *)*plVar15) {
        iVar2 = _memcmp(pvVar13,plVar15 + 2,0x10);
        if (iVar2 == 0) {
          *(int *)(plVar15 + 4) = (int)plVar15[4] + 1;
          goto LAB_10061d330;
        }
      }
      plVar15 = (long *)0x0;
    }
LAB_10061d330:
    *(long **)(param_1 + 0x66) = plVar15;
  }
  plVar15 = *(long **)(param_1 + 0x66);
  lVar6 = lVar14;
  if (plVar15 == (long *)0x0) {
    uVar4 = FUN_10061cec0(*(undefined8 *)(param_1 + 100),auStack_a8,&uStack_1dc);
    if ((int)uVar4 == 0) {
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      iVar2 = _memcmp(&uStack_7c,&uStack_1d8,0x10);
      if (iVar2 != 0) {
        for (plVar15 = (long *)*plVar9; plVar15 != plVar9; plVar15 = (long *)*plVar15) {
          iVar2 = _memcmp(&uStack_7c,plVar15 + 2,0x10);
          if (iVar2 == 0) {
            *(int *)(plVar15 + 4) = (int)plVar15[4] + 1;
            *(long **)(param_1 + 0x66) = plVar15;
            if (plVar15 != (long *)0x0) goto LAB_10061d594;
            goto LAB_10061d3bc;
          }
        }
      }
      *(undefined8 *)(param_1 + 0x66) = 0;
LAB_10061d3bc:
      lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x50,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                            ,0x218,0);
      *(long *)lVar6 = lVar6;
      *(long *)(lVar6 + 8) = lVar6;
      *(long *)(param_1 + 0x66) = lVar6;
      if (lVar6 == 0) {
LAB_10061d6ac:
        uVar4 = 0x26;
      }
      else {
        uVar4 = FUN_10061cfa8(*(undefined8 *)(param_1 + 100),auStack_a8,lVar6 + 0x40,lVar6 + 0x38);
        if ((int)uVar4 == 0) {
          if ((param_2 >> 0x1b & 1) == 0) {
            uVar4 = *(ulong *)(param_1 + 100);
            lVar6 = *(long *)(param_1 + 0x66);
            *(undefined8 *)(lVar6 + 0x48) = 0;
            if (iStack_98 != 0) {
              lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iStack_98,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                                    ,0x1df,0,0);
              if (lVar5 == 0) goto LAB_10061d6ac;
              uVar4 = FUN_1005d148c(uVar4,lVar5,1,iStack_98,0);
              if ((int)uVar4 != 0) goto LAB_10061d6b0;
              *(long *)(lVar6 + 0x48) = lVar5;
            }
          }
          lVar6 = *(long *)(param_1 + 0x66);
          *(undefined8 *)(lVar6 + 0x18) = uStack_74;
          *(undefined8 *)(lVar6 + 0x10) = uStack_7c;
          plVar15 = *(long **)(param_1 + 0x66);
          *(undefined4 *)(plVar15 + 4) = 1;
          *(int *)((long)plVar15 + 0x24) = iStack_a0;
          *(byte *)(plVar15 + 5) = bStack_88 & 1;
          *(int *)((long)plVar15 + 0x2c) = iStack_90;
          *(undefined4 *)(plVar15 + 6) = uStack_1dc;
          *(undefined4 *)((long)plVar15 + 0x34) = uStack_94;
          lVar6 = *plVar9;
          *plVar15 = lVar6;
          plVar15[1] = (long)plVar9;
          *(long **)(lVar6 + 8) = plVar15;
          *(long **)plVar15[1] = plVar15;
          if ((iStack_90 == 0xf) && (0 < iStack_a0)) {
            uVar12 = 0;
            do {
              FUN_10061d7a8(param_1,uVar12,&uStack_1d8,0);
              uVar7 = uVar12;
              if (*(long *)(param_1 + 0x68) != 0) {
                uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + uVar12 * 4);
              }
              lVar6 = *(long *)(*(long *)(param_1 + 0x66) + 0x40);
              lVar5 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x66) + 0x38) +
                                    (long)(int)uVar7 * 4);
              if ((*(byte *)(lVar6 + lVar5) & 1) == 0) {
                uVar4 = 0x13;
                lVar6 = *(long *)PTR____stack_chk_guard_101444218;
                goto LAB_10061d700;
              }
              puVar8 = (uint *)(lVar5 + lVar6 + 8);
              while (uVar1 = *puVar8,
                    0xb < uVar1 >> 0x19 || (1 << (ulong)(uVar1 >> 0x19 & 0x1f) & 0xa40U) == 0) {
                puVar8 = (uint *)((long)puVar8 + (ulong)(uVar1 >> 1 & 0xffffff) + 4);
                if ((uVar1 & 1) == 0) {
                  uVar4 = 0x13;
                  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
                  goto LAB_10061d700;
                }
              }
              uVar3 = FUN_100623dfc(uStack_d4,uStack_d0,puVar8[1],0,0);
              uVar1 = (uint)uVar4;
              if (uVar3 != 0) {
                uVar1 = uVar3;
              }
              uVar4 = (ulong)uVar1;
              if (uVar3 != 0) goto LAB_10061d6b0;
              uVar12 = uVar12 + 1;
              plVar15 = *(long **)(param_1 + 0x66);
            } while ((long)uVar12 < (long)*(int *)((long)plVar15 + 0x24));
          }
LAB_10061d594:
          lVar6 = *(long *)PTR____stack_chk_guard_101444218;
          goto LAB_10061d5a0;
        }
      }
    }
LAB_10061d6b0:
    lVar6 = *(long *)PTR____stack_chk_guard_101444218;
    goto LAB_10061d700;
  }
LAB_10061d5a0:
  if (param_3 == 0) {
LAB_10061d658:
    lVar5 = *(long *)(param_1 + 0x66);
    *param_1 = *(undefined4 *)(lVar5 + 0x24);
  }
  else {
    plVar9 = *(long **)(param_3 + 0xe0);
    if (plVar9 != (long *)0x0) {
      lVar5 = plVar15[2];
      plVar9[1] = plVar15[3];
      *plVar9 = lVar5;
    }
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_10061d658;
    iVar2 = *(int *)(param_3 + 0x30);
    if ((iVar2 == 0) || (*(int *)(param_3 + 0x20) != iVar2)) goto LAB_10061d658;
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x66) + 0x24) <=
            *(int *)(*(long *)(param_3 + 0x28) + lVar5 * 4)) {
          uVar4 = 0x1f;
          goto LAB_10061d700;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
    }
    pvVar13 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar2 << 2,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                                    ,0x259,0,0);
    *(void **)(param_1 + 0x68) = pvVar13;
    if (pvVar13 == (void *)0x0) {
      uVar4 = 0x26;
      goto LAB_10061d700;
    }
    _memcpy(pvVar13,*(void **)(param_3 + 0x28),(long)(iVar2 << 2));
    *param_1 = *(undefined4 *)(param_3 + 0x30);
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x30) = 0;
    lVar5 = *(long *)(param_1 + 0x66);
  }
  if (*(char *)(lVar5 + 0x28) != '\0') {
    *(uint *)(*(long *)(param_1 + 100) + 0x1a4) = *(uint *)(*(long *)(param_1 + 100) + 0x1a4) | 8;
    lVar5 = *(long *)(param_1 + 0x66);
  }
  switch(*(undefined4 *)(lVar5 + 0x2c)) {
  case 7:
    uVar10 = 2;
    break;
  default:
    goto switchD_10061d6a0_caseD_8;
  case 10:
    uVar10 = 4;
    break;
  case 0xb:
    uVar10 = 3;
    break;
  case 0xd:
    uVar10 = 6;
    break;
  case 0xf:
    uVar10 = 5;
    break;
  case 0x10:
    uVar10 = 7;
  }
  param_1[0x31] = uVar10;
switchD_10061d6a0_caseD_8:
  uVar4 = 0;
  param_1[0x15] = param_1[0x15] | 2;
  param_1[0x4c] = *(undefined4 *)(lVar5 + 0x30);
LAB_10061d700:
  if ((lVar11 != 0) && (lVar11 != 0)) {
    FUN_100570990(lVar11,0x11);
  }
  if (lVar6 == lVar14) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 thunk_FUN_10061da94(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) {
    FUN_10057097c(lVar8,0x11);
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1a0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                  ,0x290);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x198);
  if (plVar4 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    iVar3 = (int)plVar4[4] + -1;
    *(int *)(plVar4 + 4) = iVar3;
    if (iVar3 == 0) {
      plVar1 = (long *)plVar4[1];
      *plVar1 = *plVar4;
      *(long **)(*plVar4 + 8) = plVar1;
      *plVar4 = (long)plVar4;
      plVar4[1] = (long)plVar4;
      if ((*(int *)((long)plVar4 + 0x2c) == 0xf) && (0 < *(int *)((long)plVar4 + 0x24))) {
        lVar5 = 0;
        uVar10 = 0;
        while( true ) {
          uVar7 = uVar10;
          if (lVar5 != 0) {
            uVar7 = (ulong)*(uint *)(lVar5 + uVar10 * 4);
          }
          lVar5 = (long)*(int *)(plVar4[7] + (long)(int)uVar7 * 4);
          if ((*(byte *)(plVar4[8] + lVar5) & 1) == 0) {
            uVar9 = 0x13;
            goto LAB_10061dcb8;
          }
          puVar6 = (uint *)(lVar5 + plVar4[8] + 8);
          while (uVar2 = *puVar6,
                0xb < uVar2 >> 0x19 || (1 << (ulong)(uVar2 >> 0x19 & 0x1f) & 0xa40U) == 0) {
            puVar6 = (uint *)((long)puVar6 + (ulong)(uVar2 >> 1 & 0xffffff) + 4);
            if ((uVar2 & 1) == 0) {
              uVar9 = 0x13;
              goto LAB_10061dcb8;
            }
          }
          uVar9 = FUN_100624208(puVar6[1]);
          if ((int)uVar9 != 0) goto LAB_10061dcb8;
          uVar10 = uVar10 + 1;
          plVar4 = *(long **)(param_1 + 0x198);
          if ((long)*(int *)((long)plVar4 + 0x24) <= (long)uVar10) break;
          lVar5 = *(long *)(param_1 + 0x1a0);
        }
      }
      if (plVar4[7] != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4[7],
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2a8);
        plVar4 = *(long **)(param_1 + 0x198);
        plVar4[7] = 0;
      }
      if (plVar4[8] != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4[8],
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2a9);
        plVar4 = *(long **)(param_1 + 0x198);
        plVar4[8] = 0;
      }
      if (plVar4[9] != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4[9],
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2aa);
        plVar4 = *(long **)(param_1 + 0x198);
        plVar4[9] = 0;
      }
      if (plVar4 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2ab);
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
LAB_10061dcb8:
  if ((lVar8 != 0) && (lVar8 != 0)) {
    FUN_100570990(lVar8,0x11);
  }
  return uVar9;
}




void FUN_10061cbf0(long param_1)

{
  FUN_100585ec4(*(undefined8 *)(param_1 + 0x140));
  return;
}




undefined8 FUN_10061cbf8(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    param_2 = *(int *)(*(long *)(param_1 + 0x1a0) + (long)param_2 * 4);
  }
  lVar3 = *(long *)(param_1 + 0x198);
  iVar1 = ((uint)(*(ulong *)(*(long *)(lVar3 + 0x40) +
                            (long)*(int *)(*(long *)(lVar3 + 0x38) + (long)param_2 * 4)) >> 2) &
          0xffffffe0) + *(int *)(lVar3 + 0x30);
  lVar3 = *(long *)(param_1 + 0x140);
  if (lVar3 == 0) {
    uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),iVar1 + param_3,0);
    iVar1 = (int)uVar2;
  }
  else {
    *(int *)(lVar3 + 0x130) = iVar1;
    uVar2 = FUN_100586284(lVar3);
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 thunk_FUN_10061dd6c(int *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar4 = param_2;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + (long)(int)param_2 * 4);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x66) + 0x40);
  lVar5 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x66) + 0x38) + (long)(int)uVar4 * 4);
  if ((*(byte *)(lVar6 + lVar5) & 1) != 0) {
    puVar8 = (uint *)(lVar5 + lVar6 + 8);
    do {
      uVar1 = *puVar8;
      uVar2 = uVar1 >> 1 & 0xffffff;
      if (uVar1 >> 0x19 == 5) {
        uVar4 = (ulong)(uVar2 >> 2);
        if (uVar2 >> 2 != 0) {
          lVar6 = 0;
          do {
            uVar3 = (**(code **)(*param_3 + 0x100))(param_3,puVar8[lVar6 + 1],2,0,0,param_2,0);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < (long)uVar4);
LAB_10061de9c:
          if ((int)uVar4 != 0) {
            if (param_3[0x14] != 0) {
              lVar6 = param_3[0x1c];
              if (lVar6 == 0) {
                lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1 << 2,
                                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                                      ,0x321,0);
                param_3[0x1c] = lVar6;
                if (lVar6 == 0) {
                  return 0x26;
                }
              }
              *(int *)(lVar6 + (long)(int)param_2 * 4) = (int)uVar4;
            }
            uVar3 = FUN_1005ec374(param_3);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
          }
        }
      }
      else if (uVar1 >> 0x19 == 4) {
        uVar4 = (ulong)uVar2 / 0x104;
        if (0x103 < uVar2) {
          lVar6 = 0;
          puVar7 = puVar8 + 2;
          do {
            uVar3 = (**(code **)(*param_3 + 0x100))(param_3,puVar7[-1],2,puVar7,0,param_2,0);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            lVar6 = lVar6 + 1;
            puVar7 = puVar7 + 0x41;
          } while (lVar6 < (long)uVar4);
        }
        goto LAB_10061de9c;
      }
      puVar8 = (uint *)((long)puVar8 + (ulong)uVar2 + 4);
    } while ((uVar1 & 1) != 0);
  }
  return 0;
}




undefined8 FUN_10061cc70(void)

{
  FUN_10061d7a8();
  return 0;
}




undefined8 FUN_10061cc8c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x178) = 0;
    if (*(void **)(lVar2 + 0x160) != (void *)0x0) {
      _bzero(*(void **)(lVar2 + 0x160),(ulong)*(uint *)(lVar2 + 0x174));
    }
    if ((*(code **)(lVar2 + 0xd0) != (code *)0x0) &&
       (uVar1 = (**(code **)(lVar2 + 0xd0))(lVar2), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}




undefined4 FUN_10061ccd8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x27;
  if ((*(int *)(*(long *)(param_1 + 0x198) + 0x2c) == 2) &&
     (uVar1 = 0, *(char *)(*(long *)(param_1 + 0x198) + 0x28) != '\0')) {
    uVar1 = 0x27;
  }
  return uVar1;
}




undefined8 FUN_10061ccfc(long param_1,int param_2,long *param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    param_2 = *(int *)(*(long *)(param_1 + 0x1a0) + (long)param_2 * 4);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x198) + 0x40);
  lVar5 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x198) + 0x38) + (long)param_2 * 4);
  if ((*(byte *)(lVar1 + lVar5) & 1) != 0) {
    puVar4 = (uint *)(lVar5 + lVar1 + 8);
    do {
      uVar2 = *puVar4;
      uVar3 = uVar2 >> 1 & 0xffffff;
      if (uVar2 >> 0x19 < 0xc && (1 << (ulong)(uVar2 >> 0x19 & 0x1f) & 0xa40U) != 0) {
        if (param_3 != (long *)0x0) {
          *param_3 = (long)(puVar4 + 1);
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar3;
          return 0;
        }
        return 0;
      }
      puVar4 = (uint *)((long)puVar4 + (ulong)uVar3 + 4);
    } while ((uVar2 & 1) != 0);
  }
  return 0x13;
}




undefined8 * FUN_10061cd84(void *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = lVar3;
  iVar1 = _memcmp(param_1,&local_48,0x10);
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    for (puVar2 = (undefined8 *)*param_2; puVar2 != param_2; puVar2 = (undefined8 *)*puVar2) {
      iVar1 = _memcmp(param_1,puVar2 + 2,0x10);
      if (iVar1 == 0) {
        *(int *)(puVar2 + 4) = *(int *)(puVar2 + 4) + 1;
        goto LAB_10061ce04;
      }
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_10061ce04:
  if (lVar3 == local_38) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10061ce2c(ulong *param_1,uint *param_2,uint *param_3,undefined4 *param_4,
                  undefined4 *param_5,byte *param_6)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)(uVar1 >> 0x22);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)(uVar1 >> 2) & 0xffffffe0;
  }
  if (param_6 != (byte *)0x0) {
    *param_6 = (byte)uVar1 & 1;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(&DAT_101160020 + (uVar1 >> 5 & 3) * 4);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(&DAT_101160030 + (uVar1 >> 1 & 0xf) * 4);
  }
  return;
}




void FUN_10061ce8c(uint *param_1,uint *param_2,uint *param_3,byte *param_4)

{
  if (param_2 != (uint *)0x0) {
    *param_2 = *param_1 >> 0x19;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = *param_1 >> 1 & 0xffffff;
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = (byte)*param_1 & 1;
  }
  return;
}




ulong FUN_10061cec0(undefined8 param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_1005d148c(param_1,param_2,1,0x3c,0);
  if ((int)uVar3 == 0) {
    iVar2 = FUN_1005ed0f8(param_2,"FSB4",4);
    if (iVar2 == 0) {
      uVar3 = 0x45;
    }
    else {
      iVar2 = FUN_1005ed0f8(param_2,"FSB5",4);
      if (iVar2 == 0) {
        if (*(int *)(param_2 + 4) == 1) {
          *param_3 = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x10) + 0x3c;
          if ((*(int *)(param_2 + 0x18) == 0xf) && (*(int *)(param_2 + 0x1c) != 1)) {
            uVar3 = 0x45;
          }
          else if ((*(byte *)(param_2 + 0x20) >> 1 & 1) == 0) {
            uVar1 = *(int *)(param_2 + 0x18) - 1;
            if (uVar1 < 0xe) {
              uVar3 = (ulong)*(uint *)(&DAT_101160070 + (long)(int)uVar1 * 4);
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0x45;
          }
        }
        else {
          uVar3 = 0x45;
        }
      }
      else {
        uVar3 = 0x13;
      }
    }
  }
  return uVar3;
}




undefined8 FUN_10061cfa8(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  undefined1 auVar15 [16];
  
  puVar6 = (uint *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                 *(undefined4 *)(param_2 + 0xc),
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                                 ,300,0,0);
  if (puVar6 == (uint *)0x0) {
    uVar7 = 0x26;
  }
  else {
    uVar7 = FUN_1005d148c(param_1,puVar6,1,*(undefined4 *)(param_2 + 0xc),0);
    if ((int)uVar7 == 0) {
      lVar8 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_2 + 8) << 2,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                            ,0x135,0,0);
      if (lVar8 == 0) {
        uVar7 = 0x26;
      }
      else {
        if (0 < *(int *)(param_2 + 8)) {
          lVar9 = 0;
          puVar10 = puVar6;
          do {
            *(int *)(lVar8 + lVar9 * 4) = (int)puVar10 - (int)puVar6;
            puVar11 = puVar10 + 2;
            if ((*puVar10 & 1) != 0) {
              do {
                uVar1 = *puVar11;
                uVar3 = uVar1 >> 1 & 0xffffff;
                uVar2 = uVar3 >> 2;
                if ((2 < uVar1 >> 0x1a && (uVar1 & 0xfe000000) == 0xc000000) && uVar2 != 0) {
                  uVar4 = uVar1 >> 3 & 0x3fffff;
                  if (uVar4 == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar5 = uVar1 >> 3 & 3;
                    if (uVar4 == uVar5) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = (ulong)uVar4 - (ulong)uVar5;
                      lVar13 = ((ulong)(uVar1 >> 3) & 0x3fffff) - ((ulong)(uVar1 >> 3) & 3);
                      pauVar14 = (undefined1 (*) [16])(puVar11 + 1);
                      do {
                        auVar15 = NEON_rev32(*pauVar14,1);
                        *(long *)*pauVar14 = auVar15._0_8_;
                        auVar15 = NEON_ext(auVar15,auVar15,8,1);
                        *(long *)((long)*pauVar14 + 8) = auVar15._0_8_;
                        lVar13 = lVar13 + -4;
                        pauVar14 = pauVar14 + 1;
                      } while (lVar13 != 0);
                    }
                    if (uVar4 == uVar12) goto LAB_10061d11c;
                  }
                  do {
                    uVar4 = (puVar11[uVar12 + 1] & 0xff00ff00) >> 8 |
                            (puVar11[uVar12 + 1] & 0xff00ff) << 8;
                    puVar11[uVar12 + 1] = uVar4 >> 0x10 | uVar4 << 0x10;
                    uVar12 = uVar12 + 1;
                  } while ((long)uVar12 < (long)(ulong)uVar2);
                }
LAB_10061d11c:
                puVar11 = (uint *)((long)puVar11 + (ulong)uVar3 + 4);
              } while ((uVar1 & 1) != 0);
            }
            lVar9 = lVar9 + 1;
            puVar10 = puVar11;
          } while (lVar9 < *(int *)(param_2 + 8));
        }
        uVar7 = 0;
        *param_3 = puVar6;
        *param_4 = lVar8;
      }
    }
  }
  return uVar7;
}




undefined8 FUN_10061d16c(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_2 + 0x10),
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                          ,0x1df,0,0);
    if (lVar1 == 0) {
      uVar2 = 0x26;
    }
    else {
      uVar2 = FUN_1005d148c(param_1,lVar1,1,*(undefined4 *)(param_2 + 0x10),0);
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        *param_3 = lVar1;
      }
    }
  }
  return uVar2;
}




ulong FUN_10061d208(undefined4 *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  long *plVar15;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 auStack_a8 [8];
  int local_a0;
  int local_98;
  undefined4 local_94;
  int local_90;
  byte local_88;
  undefined8 local_7c;
  undefined8 uStack_74;
  
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = *(long *)(param_1 + 0x12);
  if (lVar11 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_10057097c(lVar11,0x11);
    lVar6 = *(long *)(param_1 + 0x12);
  }
  *(undefined8 *)(param_1 + 0x5a) = 0;
  plVar9 = (long *)(lVar6 + 0x167f0);
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x14] = 5;
  param_1[0x10] = 2;
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  if ((param_3 != 0) && (pvVar13 = *(void **)(param_3 + 0xe0), pvVar13 != (void *)0x0)) {
    local_1d8 = 0;
    uStack_1d0 = 0;
    iVar2 = _memcmp(pvVar13,&local_1d8,0x10);
    plVar15 = (long *)0x0;
    if (iVar2 != 0) {
      for (plVar15 = (long *)*plVar9; plVar15 != plVar9; plVar15 = (long *)*plVar15) {
        iVar2 = _memcmp(pvVar13,plVar15 + 2,0x10);
        if (iVar2 == 0) {
          *(int *)(plVar15 + 4) = (int)plVar15[4] + 1;
          goto LAB_10061d330;
        }
      }
      plVar15 = (long *)0x0;
    }
LAB_10061d330:
    *(long **)(param_1 + 0x66) = plVar15;
  }
  plVar15 = *(long **)(param_1 + 0x66);
  lVar6 = lVar14;
  if (plVar15 == (long *)0x0) {
    uVar4 = FUN_10061cec0(*(undefined8 *)(param_1 + 100),auStack_a8,&local_1dc);
    if ((int)uVar4 == 0) {
      local_1d8 = 0;
      uStack_1d0 = 0;
      iVar2 = _memcmp(&local_7c,&local_1d8,0x10);
      if (iVar2 != 0) {
        for (plVar15 = (long *)*plVar9; plVar15 != plVar9; plVar15 = (long *)*plVar15) {
          iVar2 = _memcmp(&local_7c,plVar15 + 2,0x10);
          if (iVar2 == 0) {
            *(int *)(plVar15 + 4) = (int)plVar15[4] + 1;
            *(long **)(param_1 + 0x66) = plVar15;
            if (plVar15 != (long *)0x0) goto LAB_10061d594;
            goto LAB_10061d3bc;
          }
        }
      }
      *(undefined8 *)(param_1 + 0x66) = 0;
LAB_10061d3bc:
      lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x50,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                            ,0x218,0);
      *(long *)lVar6 = lVar6;
      *(long *)(lVar6 + 8) = lVar6;
      *(long *)(param_1 + 0x66) = lVar6;
      if (lVar6 == 0) {
LAB_10061d6ac:
        uVar4 = 0x26;
      }
      else {
        uVar4 = FUN_10061cfa8(*(undefined8 *)(param_1 + 100),auStack_a8,lVar6 + 0x40,lVar6 + 0x38);
        if ((int)uVar4 == 0) {
          if ((param_2 >> 0x1b & 1) == 0) {
            uVar4 = *(ulong *)(param_1 + 100);
            lVar6 = *(long *)(param_1 + 0x66);
            *(undefined8 *)(lVar6 + 0x48) = 0;
            if (local_98 != 0) {
              lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_98,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                                    ,0x1df,0,0);
              if (lVar5 == 0) goto LAB_10061d6ac;
              uVar4 = FUN_1005d148c(uVar4,lVar5,1,local_98,0);
              if ((int)uVar4 != 0) goto LAB_10061d6b0;
              *(long *)(lVar6 + 0x48) = lVar5;
            }
          }
          lVar6 = *(long *)(param_1 + 0x66);
          *(undefined8 *)(lVar6 + 0x18) = uStack_74;
          *(undefined8 *)(lVar6 + 0x10) = local_7c;
          plVar15 = *(long **)(param_1 + 0x66);
          *(undefined4 *)(plVar15 + 4) = 1;
          *(int *)((long)plVar15 + 0x24) = local_a0;
          *(byte *)(plVar15 + 5) = local_88 & 1;
          *(int *)((long)plVar15 + 0x2c) = local_90;
          *(undefined4 *)(plVar15 + 6) = local_1dc;
          *(undefined4 *)((long)plVar15 + 0x34) = local_94;
          lVar6 = *plVar9;
          *plVar15 = lVar6;
          plVar15[1] = (long)plVar9;
          *(long **)(lVar6 + 8) = plVar15;
          *(long **)plVar15[1] = plVar15;
          if ((local_90 == 0xf) && (0 < local_a0)) {
            uVar12 = 0;
            do {
              FUN_10061d7a8(param_1,uVar12,&local_1d8,0);
              uVar7 = uVar12;
              if (*(long *)(param_1 + 0x68) != 0) {
                uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + uVar12 * 4);
              }
              lVar6 = *(long *)(*(long *)(param_1 + 0x66) + 0x40);
              lVar5 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x66) + 0x38) +
                                    (long)(int)uVar7 * 4);
              if ((*(byte *)(lVar6 + lVar5) & 1) == 0) {
                uVar4 = 0x13;
                lVar6 = *(long *)PTR____stack_chk_guard_101444218;
                goto LAB_10061d700;
              }
              puVar8 = (uint *)(lVar5 + lVar6 + 8);
              while (uVar1 = *puVar8,
                    0xb < uVar1 >> 0x19 || (1 << (ulong)(uVar1 >> 0x19 & 0x1f) & 0xa40U) == 0) {
                puVar8 = (uint *)((long)puVar8 + (ulong)(uVar1 >> 1 & 0xffffff) + 4);
                if ((uVar1 & 1) == 0) {
                  uVar4 = 0x13;
                  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
                  goto LAB_10061d700;
                }
              }
              uVar3 = FUN_100623dfc(local_d4,local_d0,puVar8[1],0,0);
              uVar1 = (uint)uVar4;
              if (uVar3 != 0) {
                uVar1 = uVar3;
              }
              uVar4 = (ulong)uVar1;
              if (uVar3 != 0) goto LAB_10061d6b0;
              uVar12 = uVar12 + 1;
              plVar15 = *(long **)(param_1 + 0x66);
            } while ((long)uVar12 < (long)*(int *)((long)plVar15 + 0x24));
          }
LAB_10061d594:
          lVar6 = *(long *)PTR____stack_chk_guard_101444218;
          goto LAB_10061d5a0;
        }
      }
    }
LAB_10061d6b0:
    lVar6 = *(long *)PTR____stack_chk_guard_101444218;
    goto LAB_10061d700;
  }
LAB_10061d5a0:
  if (param_3 == 0) {
LAB_10061d658:
    lVar5 = *(long *)(param_1 + 0x66);
    *param_1 = *(undefined4 *)(lVar5 + 0x24);
  }
  else {
    plVar9 = *(long **)(param_3 + 0xe0);
    if (plVar9 != (long *)0x0) {
      lVar5 = plVar15[2];
      plVar9[1] = plVar15[3];
      *plVar9 = lVar5;
    }
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_10061d658;
    iVar2 = *(int *)(param_3 + 0x30);
    if ((iVar2 == 0) || (*(int *)(param_3 + 0x20) != iVar2)) goto LAB_10061d658;
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x66) + 0x24) <=
            *(int *)(*(long *)(param_3 + 0x28) + lVar5 * 4)) {
          uVar4 = 0x1f;
          goto LAB_10061d700;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
    }
    pvVar13 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar2 << 2,
                                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                                    ,0x259,0,0);
    *(void **)(param_1 + 0x68) = pvVar13;
    if (pvVar13 == (void *)0x0) {
      uVar4 = 0x26;
      goto LAB_10061d700;
    }
    _memcpy(pvVar13,*(void **)(param_3 + 0x28),(long)(iVar2 << 2));
    *param_1 = *(undefined4 *)(param_3 + 0x30);
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x30) = 0;
    lVar5 = *(long *)(param_1 + 0x66);
  }
  if (*(char *)(lVar5 + 0x28) != '\0') {
    *(uint *)(*(long *)(param_1 + 100) + 0x1a4) = *(uint *)(*(long *)(param_1 + 100) + 0x1a4) | 8;
    lVar5 = *(long *)(param_1 + 0x66);
  }
  switch(*(undefined4 *)(lVar5 + 0x2c)) {
  case 7:
    uVar10 = 2;
    break;
  default:
    goto switchD_10061d6a0_caseD_8;
  case 10:
    uVar10 = 4;
    break;
  case 0xb:
    uVar10 = 3;
    break;
  case 0xd:
    uVar10 = 6;
    break;
  case 0xf:
    uVar10 = 5;
    break;
  case 0x10:
    uVar10 = 7;
  }
  param_1[0x31] = uVar10;
switchD_10061d6a0_caseD_8:
  uVar4 = 0;
  param_1[0x15] = param_1[0x15] | 2;
  param_1[0x4c] = *(undefined4 *)(lVar5 + 0x30);
LAB_10061d700:
  if ((lVar11 != 0) && (lVar11 != 0)) {
    FUN_100570990(lVar11,0x11);
  }
  if (lVar6 == lVar14) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10061d7a8(long param_1,int param_2,void *param_3,int *param_4)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong *puVar8;
  float fVar9;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    param_2 = *(int *)(*(long *)(param_1 + 0x1a0) + (long)param_2 * 4);
  }
  lVar7 = *(long *)(param_1 + 0x198);
  puVar1 = (ulong *)(*(long *)(lVar7 + 0x40) +
                    (long)*(int *)(*(long *)(lVar7 + 0x38) + (long)param_2 * 4));
  puVar8 = puVar1 + 1;
  uVar5 = *puVar1;
  uVar2 = (uint)(uVar5 >> 2) & 0xffffffe0;
  if (param_4 != (int *)0x0) {
    *param_4 = *(int *)(lVar7 + 0x30) + uVar2;
  }
  if (param_3 == (void *)0x0) {
    return 0;
  }
  uVar6 = *(undefined4 *)(&DAT_101160020 + (uVar5 >> 5 & 3) * 4);
  uVar3 = *(undefined4 *)(&DAT_101160030 + (uVar5 >> 1 & 0xf) * 4);
  _bzero(param_3,0x130);
  *(undefined4 *)((long)param_3 + 0x100) = 2;
  *(undefined4 *)((long)param_3 + 0x104) = uVar6;
  *(uint *)((long)param_3 + 0x110) = (uint)(uVar5 >> 0x22);
  *(undefined4 *)((long)param_3 + 0x108) = uVar3;
  if ((uVar5 & 1) != 0) {
    do {
      uVar4 = (uint)*puVar8;
      switch(uVar4 >> 0x19) {
      case 0:
        *(uint *)((long)param_3 + 0x110) = *(uint *)((long)puVar8 + 4);
        break;
      case 1:
        *(int *)((long)param_3 + 0x104) = (int)*(char *)((long)puVar8 + 4);
        break;
      case 2:
        *(uint *)((long)param_3 + 0x108) = *(uint *)((long)puVar8 + 4);
        break;
      case 3:
        *(uint *)((long)param_3 + 0x118) = *(uint *)((long)puVar8 + 4);
        *(uint *)((long)param_3 + 0x11c) = (uint)puVar8[1];
        break;
      case 8:
        *(undefined4 *)((long)param_3 + 0x128) =
             *(undefined4 *)(&DAT_10116005c + (ulong)*(byte *)((long)puVar8 + 4) * 4);
        break;
      case 0xd:
        fVar9 = *(float *)((long)puVar8 + 4);
        if (*(float *)((long)puVar8 + 4) <= 1.1920929e-07) {
          fVar9 = 1.1920929e-07;
        }
        *(float *)((long)param_3 + 300) = fVar9;
      }
      puVar8 = (ulong *)((long)puVar8 + (ulong)(uVar4 >> 1 & 0xffffff) + 4);
    } while ((uVar4 & 1) != 0);
  }
  if (param_2 == *(int *)(*(long *)(param_1 + 0x198) + 0x24) + -1) {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x198) + 0x34);
  }
  else {
    uVar4 = (uint)(*puVar8 >> 2) & 0xffffffe0;
  }
  *(uint *)((long)param_3 + 0x10c) = uVar4 - uVar2;
  lVar7 = *(long *)(param_1 + 0x198);
  switch(*(undefined4 *)(lVar7 + 0x2c)) {
  case 7:
    uVar6 = 0x40;
    break;
  default:
    goto switchD_10061d94c_caseD_8;
  case 10:
    uVar6 = 0x200;
    break;
  case 0xb:
    uVar6 = 0x480;
    break;
  case 0x10:
    uVar6 = 0x100;
  }
  *(undefined4 *)((long)param_3 + 0x114) = uVar6;
switchD_10061d94c_caseD_8:
  lVar7 = *(long *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    FUN_1005ecc98(param_3,lVar7 + (ulong)*(uint *)(lVar7 + (long)param_2 * 4),0x100);
  }
  return 0;
}




undefined8 FUN_10061da0c(long param_1,int param_2,long *param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    param_2 = *(int *)(*(long *)(param_1 + 0x1a0) + (long)param_2 * 4);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x198) + 0x40);
  lVar5 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x198) + 0x38) + (long)param_2 * 4);
  if ((*(byte *)(lVar1 + lVar5) & 1) != 0) {
    puVar4 = (uint *)(lVar5 + lVar1 + 8);
    do {
      uVar2 = *puVar4;
      uVar3 = uVar2 >> 1 & 0xffffff;
      if (uVar2 >> 0x19 < 0xc && (1 << (ulong)(uVar2 >> 0x19 & 0x1f) & 0xa40U) != 0) {
        if (param_3 != (long *)0x0) {
          *param_3 = (long)(puVar4 + 1);
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar3;
          return 0;
        }
        return 0;
      }
      puVar4 = (uint *)((long)puVar4 + (ulong)uVar3 + 4);
    } while ((uVar2 & 1) != 0);
  }
  return 0x13;
}




undefined8 FUN_10061da94(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 != 0) {
    FUN_10057097c(lVar8,0x11);
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1a0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                  ,0x290);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x198);
  if (plVar4 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    iVar3 = (int)plVar4[4] + -1;
    *(int *)(plVar4 + 4) = iVar3;
    if (iVar3 == 0) {
      plVar1 = (long *)plVar4[1];
      *plVar1 = *plVar4;
      *(long **)(*plVar4 + 8) = plVar1;
      *plVar4 = (long)plVar4;
      plVar4[1] = (long)plVar4;
      if ((*(int *)((long)plVar4 + 0x2c) == 0xf) && (0 < *(int *)((long)plVar4 + 0x24))) {
        lVar5 = 0;
        uVar10 = 0;
        while( true ) {
          uVar7 = uVar10;
          if (lVar5 != 0) {
            uVar7 = (ulong)*(uint *)(lVar5 + uVar10 * 4);
          }
          lVar5 = (long)*(int *)(plVar4[7] + (long)(int)uVar7 * 4);
          if ((*(byte *)(plVar4[8] + lVar5) & 1) == 0) {
            uVar9 = 0x13;
            goto LAB_10061dcb8;
          }
          puVar6 = (uint *)(lVar5 + plVar4[8] + 8);
          while (uVar2 = *puVar6,
                0xb < uVar2 >> 0x19 || (1 << (ulong)(uVar2 >> 0x19 & 0x1f) & 0xa40U) == 0) {
            puVar6 = (uint *)((long)puVar6 + (ulong)(uVar2 >> 1 & 0xffffff) + 4);
            if ((uVar2 & 1) == 0) {
              uVar9 = 0x13;
              goto LAB_10061dcb8;
            }
          }
          uVar9 = FUN_100624208(puVar6[1]);
          if ((int)uVar9 != 0) goto LAB_10061dcb8;
          uVar10 = uVar10 + 1;
          plVar4 = *(long **)(param_1 + 0x198);
          if ((long)*(int *)((long)plVar4 + 0x24) <= (long)uVar10) break;
          lVar5 = *(long *)(param_1 + 0x1a0);
        }
      }
      if (plVar4[7] != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4[7],
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2a8);
        plVar4 = *(long **)(param_1 + 0x198);
        plVar4[7] = 0;
      }
      if (plVar4[8] != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4[8],
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2a9);
        plVar4 = *(long **)(param_1 + 0x198);
        plVar4[8] = 0;
      }
      if (plVar4[9] != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4[9],
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2aa);
        plVar4 = *(long **)(param_1 + 0x198);
        plVar4[9] = 0;
      }
      if (plVar4 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar4,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                      ,0x2ab);
        uVar9 = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
LAB_10061dcb8:
  if ((lVar8 != 0) && (lVar8 != 0)) {
    FUN_100570990(lVar8,0x11);
  }
  return uVar9;
}




void FUN_10061dcf0(long param_1)

{
  FUN_100585ec4(*(undefined8 *)(param_1 + 0x140));
  return;
}




undefined8 FUN_10061dcf8(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    param_2 = *(int *)(*(long *)(param_1 + 0x1a0) + (long)param_2 * 4);
  }
  lVar3 = *(long *)(param_1 + 0x198);
  iVar1 = ((uint)(*(ulong *)(*(long *)(lVar3 + 0x40) +
                            (long)*(int *)(*(long *)(lVar3 + 0x38) + (long)param_2 * 4)) >> 2) &
          0xffffffe0) + *(int *)(lVar3 + 0x30);
  lVar3 = *(long *)(param_1 + 0x140);
  if (lVar3 == 0) {
    uVar2 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),iVar1 + param_3,0);
    iVar1 = (int)uVar2;
  }
  else {
    *(int *)(lVar3 + 0x130) = iVar1;
    uVar2 = FUN_100586284(lVar3);
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_10061dd6c(int *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar4 = param_2;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + (long)(int)param_2 * 4);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x66) + 0x40);
  lVar5 = (long)*(int *)(*(long *)(*(long *)(param_1 + 0x66) + 0x38) + (long)(int)uVar4 * 4);
  if ((*(byte *)(lVar6 + lVar5) & 1) != 0) {
    puVar8 = (uint *)(lVar5 + lVar6 + 8);
    do {
      uVar1 = *puVar8;
      uVar2 = uVar1 >> 1 & 0xffffff;
      if (uVar1 >> 0x19 == 5) {
        uVar4 = (ulong)(uVar2 >> 2);
        if (uVar2 >> 2 != 0) {
          lVar6 = 0;
          do {
            uVar3 = (**(code **)(*param_3 + 0x100))(param_3,puVar8[lVar6 + 1],2,0,0,param_2,0);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < (long)uVar4);
LAB_10061de9c:
          if ((int)uVar4 != 0) {
            if (param_3[0x14] != 0) {
              lVar6 = param_3[0x1c];
              if (lVar6 == 0) {
                lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1 << 2,
                                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_fsb5.cpp"
                                      ,0x321,0);
                param_3[0x1c] = lVar6;
                if (lVar6 == 0) {
                  return 0x26;
                }
              }
              *(int *)(lVar6 + (long)(int)param_2 * 4) = (int)uVar4;
            }
            uVar3 = FUN_1005ec374(param_3);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
          }
        }
      }
      else if (uVar1 >> 0x19 == 4) {
        uVar4 = (ulong)uVar2 / 0x104;
        if (0x103 < uVar2) {
          lVar6 = 0;
          puVar7 = puVar8 + 2;
          do {
            uVar3 = (**(code **)(*param_3 + 0x100))(param_3,puVar7[-1],2,puVar7,0,param_2,0);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            lVar6 = lVar6 + 1;
            puVar7 = puVar7 + 0x41;
          } while (lVar6 < (long)uVar4);
        }
        goto LAB_10061de9c;
      }
      puVar8 = (uint *)((long)puVar8 + (ulong)uVar2 + 4);
    } while ((uVar1 & 1) != 0);
  }
  return 0;
}




undefined8 FUN_10061df34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x178) = 0;
    if (*(void **)(lVar2 + 0x160) != (void *)0x0) {
      _bzero(*(void **)(lVar2 + 0x160),(ulong)*(uint *)(lVar2 + 0x174));
    }
    if ((*(code **)(lVar2 + 0xd0) != (code *)0x0) &&
       (uVar1 = (**(code **)(lVar2 + 0xd0))(lVar2), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}




undefined4 FUN_10061df80(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x27;
  if ((*(int *)(*(long *)(param_1 + 0x198) + 0x2c) == 2) &&
     (uVar1 = 0, *(char *)(*(long *)(param_1 + 0x198) + 0x28) != '\0')) {
    uVar1 = 0x27;
  }
  return uVar1;
}




ulong FUN_10061dfa4(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  
  uVar2 = *param_1;
  iVar1 = uVar2 + param_2;
  if ((long)iVar1 < *(long *)(param_1 + 4) * 8) {
    pbVar7 = *(byte **)(param_1 + 2);
    uVar4 = (uint)(*pbVar7 >> (ulong)(uVar2 & 0x1f));
    uVar5 = (ulong)(int)uVar4;
    if (iVar1 < 9) goto LAB_10061e094;
    uVar4 = (uint)pbVar7[1] << (ulong)(8 - uVar2 & 0x1f) | uVar4;
    uVar5 = (ulong)(int)uVar4;
    if (iVar1 < 0x11) goto LAB_10061e094;
    uVar4 = (uint)pbVar7[2] << (ulong)(0x10 - uVar2 & 0x1f) | uVar4;
    uVar5 = (ulong)(int)uVar4;
    if (iVar1 < 0x19) goto LAB_10061e094;
    uVar4 = (uint)pbVar7[3] << (ulong)(0x18 - uVar2 & 0x1f) | uVar4;
    uVar5 = (ulong)(int)uVar4;
    if ((uVar2 == 0) || (iVar1 < 0x21)) goto LAB_10061e094;
    bVar3 = pbVar7[4];
  }
  else {
    iVar6 = (int)*(long *)(param_1 + 4);
    if (iVar6 < 0) {
      return 0xffffffffffffffff;
    }
    if (iVar1 == 0) {
      uVar5 = 0;
      goto LAB_10061e094;
    }
    if (iVar6 == 0) {
      return 0xffffffffffffffff;
    }
    pbVar7 = *(byte **)(param_1 + 2);
    uVar4 = (uint)(*pbVar7 >> (ulong)(uVar2 & 0x1f));
    uVar5 = (ulong)(int)uVar4;
    if (iVar1 < 9) goto LAB_10061e094;
    if (iVar6 == 1) {
      return 0xffffffffffffffff;
    }
    uVar4 = (uint)pbVar7[1] << (ulong)(8 - uVar2 & 0x1f) | uVar4;
    uVar5 = (ulong)(int)uVar4;
    if (iVar1 < 0x11) goto LAB_10061e094;
    if (iVar6 == 2) {
      return 0xffffffffffffffff;
    }
    uVar4 = (uint)pbVar7[2] << (ulong)(0x10 - uVar2 & 0x1f) | uVar4;
    uVar5 = (ulong)(int)uVar4;
    if (iVar1 < 0x19) goto LAB_10061e094;
    if (iVar6 == 3) {
      return 0xffffffffffffffff;
    }
    uVar4 = (uint)pbVar7[3] << (ulong)(0x18 - uVar2 & 0x1f) | uVar4;
    uVar5 = (ulong)(int)uVar4;
    if ((uVar2 == 0) || (iVar1 < 0x21)) goto LAB_10061e094;
    if (iVar6 == 4) {
      return 0xffffffffffffffff;
    }
    bVar3 = pbVar7[4];
  }
  uVar5 = (ulong)(int)((uint)bVar3 << (ulong)(0x20 - uVar2 & 0x1f) | uVar4);
LAB_10061e094:
  return uVar5 & *(ulong *)(&DAT_1011600a8 + (long)param_2 * 8);
}




void FUN_10061e14c(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *param_1;
  uVar1 = uVar2 + param_2 & 7;
  *param_1 = uVar1;
  lVar4 = (long)((int)(uVar2 + param_2) >> 3);
  lVar3 = *(long *)(param_1 + 4) - lVar4;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + lVar4;
  *(long *)(param_1 + 4) = lVar3;
  if (lVar3 < 1) {
    *(long *)(param_1 + 4) = lVar3;
    *param_1 = uVar1;
    if (lVar3 * 8 < (long)(ulong)uVar1) {
      param_1[4] = 0xffffffff;
      param_1[5] = 0xffffffff;
    }
  }
  return;
}




long FUN_10061e19c(long param_1)

{
  return *(long *)(param_1 + 0x10) >> 0x3f;
}




void FUN_10061e1a8(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  FUN_10061dfa4();
  uVar2 = *param_1;
  uVar1 = uVar2 + param_2 & 7;
  *param_1 = uVar1;
  lVar4 = (long)((int)(uVar2 + param_2) >> 3);
  lVar3 = *(long *)(param_1 + 4) - lVar4;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + lVar4;
  *(long *)(param_1 + 4) = lVar3;
  if (lVar3 < 1) {
    *(long *)(param_1 + 4) = lVar3;
    *param_1 = uVar1;
    if (lVar3 * 8 < (long)(ulong)uVar1) {
      param_1[4] = 0xffffffff;
      param_1[5] = 0xffffffff;
    }
  }
  return;
}




void FUN_10061e218(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}




void FUN_10061e228(undefined8 param_1,float *param_2)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  char *pcVar24;
  long lVar25;
  char *pcVar26;
  double dVar27;
  long lVar28;
  long lVar29;
  char acStack_60 [8];
  long local_58;
  
  lVar25 = *(long *)PTR____stack_chk_guard_101444218;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  local_58 = lVar25;
  lVar9 = FUN_10061e1a8(param_1,0x18);
  if (lVar9 == 0x564342) {
    uVar1 = FUN_10061e1a8(param_1,0x10);
    *(undefined1 *)(param_2 + 0xd) = uVar1;
    sVar3 = FUN_10061e1a8(param_1,0x18);
    *(short *)(param_2 + 0xc) = sVar3;
    if (sVar3 != -1) {
      iVar5 = FUN_10061e1a8(param_1,1);
      if (iVar5 == 1) {
        cVar2 = FUN_10061e1a8(param_1,5);
        lVar9 = (long)*(short *)(param_2 + 0xc);
        *(short *)((long)param_2 + 0x32) = *(short *)(param_2 + 0xc);
        pcVar23 = acStack_60 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
        if (0 < lVar9) {
          lVar20 = 0;
          do {
            iVar5 = 0;
            uVar6 = (int)lVar9 - (int)lVar20;
            uVar14 = (ulong)uVar6;
            while (uVar6 != 0) {
              iVar5 = iVar5 + 1;
              uVar14 = uVar14 >> 1;
              uVar6 = (uint)uVar14;
            }
            lVar10 = FUN_10061e1a8(param_1,iVar5);
            if (lVar10 == -1) goto LAB_10061e78c;
            cVar2 = cVar2 + '\x01';
            lVar9 = (long)*(short *)(param_2 + 0xc);
            lVar17 = lVar20;
            if (0 < lVar10) {
              lVar15 = 0;
              do {
                lVar17 = lVar20 + lVar15;
                if (lVar9 <= lVar17) goto LAB_10061e368;
                pcVar23[lVar15 + lVar20] = cVar2;
                lVar15 = lVar15 + 1;
              } while (lVar15 < lVar10);
              lVar17 = lVar20 + lVar15;
            }
LAB_10061e368:
            *(char *)((long)param_2 + 0x35) = cVar2;
            lVar20 = lVar17;
          } while (lVar17 < lVar9);
        }
      }
      else {
        if (iVar5 != 0) goto LAB_10061e78c;
        pcVar23 = acStack_60 + -((long)*(short *)(param_2 + 0xc) + 0xfU & 0xfffffffffffffff0);
        lVar9 = FUN_10061e1a8(param_1,1);
        sVar3 = *(short *)(param_2 + 0xc);
        if (lVar9 == 0) {
          *(short *)((long)param_2 + 0x32) = sVar3;
          if (0 < sVar3) {
            lVar9 = 0;
            do {
              lVar20 = FUN_10061e1a8(param_1,5);
              if (lVar20 == -1) goto LAB_10061e78c;
              cVar2 = (char)lVar20 + '\x01';
              pcVar23[lVar9] = cVar2;
              if (*(char *)((long)param_2 + 0x35) <= lVar20) {
                *(char *)((long)param_2 + 0x35) = cVar2;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(short *)(param_2 + 0xc));
          }
        }
        else if (0 < sVar3) {
          lVar9 = 0;
          do {
            lVar20 = FUN_10061e1a8(param_1,1);
            if (lVar20 == 0) {
              pcVar23[lVar9] = '\0';
            }
            else {
              lVar20 = FUN_10061e1a8(param_1,5);
              if (lVar20 == -1) goto LAB_10061e78c;
              cVar2 = (char)lVar20 + '\x01';
              pcVar23[lVar9] = cVar2;
              *(short *)((long)param_2 + 0x32) = *(short *)((long)param_2 + 0x32) + 1;
              if (*(char *)((long)param_2 + 0x35) <= lVar20) {
                *(char *)((long)param_2 + 0x35) = cVar2;
              }
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(short *)(param_2 + 0xc));
        }
      }
      iVar5 = FUN_10061e1a8(param_1,4);
      if (0 < iVar5) {
        uVar6 = FUN_10061e1a8(param_1,0x20);
        uVar7 = FUN_10061e1a8(param_1,0x20);
        dVar27 = (double)(uVar6 & 0x1fffff);
        if ((uVar6 & 0x80000000) != 0) {
          dVar27 = -(double)(uVar6 & 0x1fffff);
        }
        dVar27 = (double)_ldexp(dVar27,(uVar6 >> 0x15 & 0x3ff) - 0x314);
        *param_2 = (float)dVar27;
        dVar27 = (double)(uVar7 & 0x1fffff);
        if ((uVar7 & 0x80000000) != 0) {
          dVar27 = -(double)(uVar7 & 0x1fffff);
        }
        dVar27 = (double)_ldexp(dVar27,(uVar7 >> 0x15 & 0x3ff) - 0x314);
        param_2[1] = (float)dVar27;
        cVar2 = FUN_10061e1a8(param_1,4);
        *(char *)((long)param_2 + 0x37) = cVar2 + '\x01';
        iVar8 = FUN_10061e1a8(param_1,1);
        if (iVar8 != 0) goto LAB_10061e78c;
      }
      *(char *)((long)param_2 + 0x36) = (char)iVar5;
      if (iVar5 != 2) {
        uVar14 = 0;
        if (iVar5 == 1) {
          sVar3 = *(short *)(param_2 + 0xc);
          uVar14 = (ulong)sVar3;
          cVar2 = *(char *)(param_2 + 0xd);
          iVar8 = -1;
          iVar16 = (int)sVar3;
          while (iVar16 != 0) {
            uVar14 = uVar14 >> 1 & 0x7fffffff;
            iVar8 = iVar8 + 1;
            iVar16 = (int)uVar14;
          }
          uVar6 = 0;
          uVar7 = (uint)cVar2;
          if (cVar2 != 0) {
            uVar6 = (iVar8 * (cVar2 + -1)) / (int)uVar7;
          }
          uVar6 = (int)sVar3 >> (uVar6 & 0x1f);
          lVar9 = (long)(int)sVar3;
          do {
            uVar14 = (ulong)uVar6;
            lVar10 = 1;
            lVar20 = 1;
            if (0 < cVar2) {
              lVar17 = (long)(int)uVar6;
              lVar15 = (long)(int)(uVar6 + 1);
              if (cVar2 == '\0') {
                uVar18 = 0;
                lVar10 = 1;
                lVar20 = 1;
              }
              else {
                uVar18 = (int)cVar2 & 0xfffffffc;
                if (uVar18 == 0) {
                  uVar18 = 0;
                  lVar28 = 1;
                  lVar29 = 1;
                  lVar22 = 1;
                  lVar11 = 1;
                  lVar20 = 1;
                  lVar13 = 1;
                  lVar21 = 1;
                  lVar10 = 1;
                }
                else {
                  lVar28 = 1;
                  lVar29 = 1;
                  lVar22 = 1;
                  lVar11 = 1;
                  lVar20 = 1;
                  lVar13 = 1;
                  lVar21 = 1;
                  lVar10 = 1;
                  uVar19 = uVar7 & 0xfffffffc;
                  do {
                    lVar20 = lVar20 * lVar17;
                    lVar21 = lVar21 * lVar17;
                    lVar13 = lVar13 * lVar17;
                    lVar10 = lVar10 * lVar17;
                    lVar29 = lVar29 * lVar15;
                    lVar28 = lVar28 * lVar15;
                    lVar22 = lVar22 * lVar15;
                    lVar11 = lVar11 * lVar15;
                    uVar19 = uVar19 - 4;
                  } while (uVar19 != 0);
                }
                lVar20 = lVar10 * lVar13 * lVar21 * lVar20;
                lVar10 = lVar11 * lVar28 * lVar22 * lVar29;
                if (uVar7 == uVar18) goto LAB_10061e6cc;
              }
              iVar8 = uVar7 - uVar18;
              do {
                lVar20 = lVar20 * lVar17;
                iVar8 = iVar8 + -1;
                lVar10 = lVar10 * lVar15;
              } while (iVar8 != 0);
            }
LAB_10061e6cc:
            if ((lVar9 < lVar10) && (lVar20 <= lVar9)) break;
            iVar8 = 1;
            if (lVar9 < lVar20) {
              iVar8 = -1;
            }
            uVar6 = uVar6 + iVar8;
          } while( true );
        }
        if (iVar5 == 0) {
          pcVar24 = (char *)0x0;
        }
        else {
          pcVar24 = pcVar23 + -((-(uVar14 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1) + 0xf &
                               0xfffffffffffffff0);
          if (0 < (int)uVar14) {
            lVar9 = (long)(int)uVar14;
            pcVar26 = pcVar24;
            do {
              uVar4 = FUN_10061e1a8(param_1,(long)*(char *)((long)param_2 + 0x37));
              *(undefined2 *)pcVar26 = uVar4;
              lVar9 = lVar9 + -1;
              pcVar26 = pcVar26 + 2;
            } while (lVar9 != 0);
          }
          iVar5 = (int)*(char *)((long)param_2 + 0x37) * (int)*(char *)(param_2 + 0xd);
          if (iVar5 < 9) {
            uVar1 = 1;
          }
          else {
            if (0x10 < iVar5) goto LAB_10061e78c;
            uVar1 = 2;
          }
          *(undefined1 *)((long)param_2 + 0x39) = uVar1;
        }
        uVar1 = 2;
        if ('\x10' < *(char *)((long)param_2 + 0x35)) {
          uVar1 = 4;
        }
        *(undefined1 *)(param_2 + 0xe) = uVar1;
        FUN_10061e7c4(pcVar23,uVar14,pcVar24,param_2);
        iVar5 = FUN_10061e19c(param_1);
        if (iVar5 == 0) {
          uVar12 = 0;
          goto LAB_10061e790;
        }
      }
    }
  }
LAB_10061e78c:
  uVar12 = 0xffffffff;
LAB_10061e790:
  if (lVar25 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar12);
  }
  return;
}




void FUN_10061e7c4(long param_1,int param_2,long param_3,long param_4)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  void *pvVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined2 uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong *puVar21;
  long *plVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  size_t sVar27;
  long lVar28;
  long *plVar29;
  ulong *puVar30;
  uint uVar31;
  undefined1 uVar33;
  ulong uVar32;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined8 uStack_100;
  long local_f8;
  uint auStack_ec [35];
  
  lVar28 = *(long *)PTR____stack_chk_guard_101444218;
  sVar10 = *(short *)(param_4 + 0x32);
  sVar27 = (size_t)sVar10;
  local_f8 = lVar28;
  if ((long)sVar27 < 1) goto LAB_10061f0cc;
  puVar30 = (ulong *)((long)&uStack_100 - (sVar27 * 4 + 0xf & 0xfffffffffffffff0));
  sVar4 = *(short *)(param_4 + 0x30);
  _memset(auStack_ec,0,0x84);
  if (0 < (long)sVar4) {
    lVar28 = 0;
    iVar12 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar28);
      if (cVar2 < '\x01') {
        iVar11 = 0;
      }
      else {
        uVar18 = (uint)cVar2;
        lVar20 = (long)(int)uVar18;
        puVar15 = auStack_ec + lVar20;
        uVar31 = *puVar15;
        if (cVar2 < ' ' && uVar31 >> (ulong)(uVar18 & 0x1f) != 0) goto LAB_10061ead4;
        *(uint *)((long)puVar30 + (long)iVar12 * 4) = uVar31;
        lVar25 = lVar20;
        if ((uVar31 & 1) == 0) {
          puVar15 = auStack_ec + (int)uVar18;
          uVar19 = uVar31;
          do {
            *puVar15 = uVar19 + 1;
            if (lVar25 < 2) goto joined_r0x00010061e8f4;
            lVar25 = lVar25 + -1;
            puVar15 = puVar15 + -1;
            uVar19 = *puVar15;
          } while ((uVar19 & 1) == 0);
        }
        if ((int)lVar25 == 1) {
          auStack_ec[1] = auStack_ec[1] + 1;
        }
        else {
          *puVar15 = auStack_ec[(lVar25 << 0x20) + -0x100000000 >> 0x20] << 1;
        }
joined_r0x00010061e8f4:
        while (((int)(uVar18 + 1) < 0x21 && (uVar19 = auStack_ec[lVar20 + 1], uVar19 >> 1 == uVar31)
               )) {
          auStack_ec[lVar20 + 1] = auStack_ec[lVar20] << 1;
          uVar18 = (uint)(lVar20 + 1);
          lVar20 = lVar20 + 1;
          uVar31 = uVar19;
        }
        iVar11 = 1;
      }
      iVar12 = iVar11 + iVar12;
      lVar28 = lVar28 + 1;
    } while (lVar28 < sVar4);
  }
  lVar28 = 1;
  uVar14 = 0x1f;
  if (sVar10 != 1) {
    do {
      if (((ulong)auStack_ec[lVar28] & 0xffffffffUL >> (uVar14 & 0x3f)) != 0) goto LAB_10061ead4;
      lVar28 = lVar28 + 1;
      uVar14 = uVar14 - 1;
    } while ((int)lVar28 < 0x21);
  }
  if (0 < sVar4) {
    lVar28 = 0;
    iVar12 = 0;
    do {
      cVar2 = *(char *)(param_1 + lVar28);
      if (cVar2 < '\x01') {
        uVar31 = 0;
      }
      else {
        uVar31 = 0;
        uVar18 = 0;
        do {
          uVar31 = uVar31 << 1 |
                   *(uint *)((long)puVar30 + (long)iVar12 * 4) >> (ulong)(uVar18 & 0x1f) & 1;
          uVar18 = uVar18 + 1;
        } while ((int)cVar2 != uVar18);
      }
      if ((sVar10 == 0) || (cVar2 != '\0')) {
        *(uint *)((long)puVar30 + (long)iVar12 * 4) = uVar31;
        iVar12 = iVar12 + 1;
      }
      iVar11 = (int)lVar28;
      lVar28 = lVar28 + 1;
    } while (iVar11 != sVar4 + -1);
  }
  plVar29 = (long *)((long)puVar30 - (sVar27 * 8 + 0xf & 0xfffffffffffffff0));
  uVar14 = sVar27;
  if ((long)sVar27 < 2) {
    uVar14 = 1;
  }
  if (uVar14 == 0) {
    uVar13 = 0;
LAB_10061eafc:
    puVar15 = (uint *)((long)puVar30 + uVar13 * 4);
    do {
      uVar31 = *puVar15 >> 0x10 | *puVar15 << 0x10;
      uVar31 = uVar31 >> 8 & 0xff00ff | (uVar31 & 0xff00ff) << 8;
      uVar31 = uVar31 >> 4 & 0xf0f0f0f | (uVar31 & 0xf0f0f0f) << 4;
      uVar31 = uVar31 >> 2 & 0x33333333 | (uVar31 & 0x33333333) << 2;
      plVar29[uVar13] = (long)puVar15;
      *puVar15 = uVar31 >> 1 & 0x55555555 | (uVar31 & 0x55555555) << 1;
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 1;
    } while ((long)uVar13 < (long)sVar27);
  }
  else {
    uVar13 = uVar14 & 0xfffffffffffffffe;
    if (uVar13 == 0) {
      uVar13 = 0;
    }
    else {
      uVar17 = sVar27;
      if ((long)sVar27 < 2) {
        uVar17 = 0;
      }
      uVar17 = uVar17 & 0xfffffffffffffffe;
      puVar21 = puVar30;
      plVar22 = plVar29;
      do {
        uVar32 = *puVar21;
        uVar35 = (undefined1)(uVar32 >> 0x38);
        uVar31 = CONCAT13((char)(uVar32 >> 8),CONCAT12((char)uVar32,(short)(uVar32 >> 0x10)));
        uVar33 = (undefined1)(uVar32 >> 0x20);
        uVar34 = (undefined1)(uVar32 >> 0x28);
        uVar32 = CONCAT44((int)(CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar35,CONCAT14((char)(
                                                  uVar32 >> 0x30),uVar31)))) >> 0x20) << 8,
                          uVar31 << 8);
        uVar32 = uVar32 ^ (uVar32 ^ CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar35,uVar31 >> 8))))
                          & 0xff00ff00ff00ff;
        uVar31 = (uint)(uVar32 >> 0x20);
        iVar12 = (int)uVar32 << 4;
        iVar11 = uVar31 << 4;
        uVar33 = (undefined1)((uint)iVar11 >> 8);
        uVar34 = (undefined1)((uint)iVar11 >> 0x10);
        uVar35 = (undefined1)((uint)iVar11 >> 0x18);
        uVar32 = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14((char)iVar11,iVar12)))) ^
                 (CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14((char)iVar11,iVar12)))) ^
                 CONCAT44(uVar31 >> 4,(int)(uVar32 >> 4)) & 0xffffffff0fffffff) & 0xf0f0f0f0f0f0f0f;
        uVar31 = (uint)(uVar32 >> 0x20);
        iVar12 = (int)uVar32 << 2;
        iVar11 = uVar31 << 2;
        uVar33 = (undefined1)((uint)iVar11 >> 8);
        uVar34 = (undefined1)((uint)iVar11 >> 0x10);
        uVar35 = (undefined1)((uint)iVar11 >> 0x18);
        uVar32 = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14((char)iVar11,iVar12)))) ^
                 (CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14((char)iVar11,iVar12)))) ^
                 CONCAT44(uVar31 >> 2,(int)(uVar32 >> 2)) & 0xffffffff3fffffff) & 0x3333333333333333
        ;
        uVar31 = (uint)(uVar32 >> 0x20);
        iVar12 = (int)uVar32 << 1;
        iVar11 = uVar31 << 1;
        uVar33 = (undefined1)((uint)iVar11 >> 8);
        uVar34 = (undefined1)((uint)iVar11 >> 0x10);
        uVar35 = (undefined1)((uint)iVar11 >> 0x18);
        *puVar21 = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14((char)iVar11,iVar12))))
                   ^ (CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14((char)iVar11,iVar12))
                                              )) ^
                     CONCAT44(uVar31 >> 1,(int)(uVar32 >> 1)) & 0xffffffff7fffffff) &
                     0x5555555555555555;
        plVar22[1] = (long)puVar21 + 4;
        *plVar22 = (long)puVar21;
        uVar17 = uVar17 - 2;
        puVar21 = puVar21 + 1;
        plVar22 = plVar22 + 2;
      } while (uVar17 != 0);
    }
    if (uVar14 != uVar13) goto LAB_10061eafc;
  }
  _qsort(plVar29,sVar27,8,(int *)FUN_10061fe18);
  sVar10 = *(short *)(param_4 + 0x32);
  uVar14 = (-((ulong)(long)sVar10 >> 0x1f & 1) & 0xfffffffc00000000 |
           ((long)sVar10 & 0xffffffffU) << 2) + 0xf & 0xfffffffffffffff0;
  iVar12 = (int)sVar10;
  if (0 < sVar10) {
    uVar13 = (ulong)iVar12;
    if (sVar10 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar13 & 0xfffffffffffffffe;
      if (uVar17 == 0) {
        uVar17 = 0;
      }
      else {
        uVar32 = 0;
        do {
          lVar28 = (plVar29 + uVar32)[1];
          *(int *)((long)plVar29 +
                  ((long)(int)((ulong)(plVar29[uVar32] - (long)puVar30) >> 2) * 4 - uVar14)) =
               (int)uVar32;
          *(int *)((long)plVar29 + ((long)(int)((ulong)(lVar28 - (long)puVar30) >> 2) * 4 - uVar14))
               = (int)uVar32 + 1;
          uVar32 = uVar32 + 2;
        } while (((long)iVar12 & 0xfffffffffffffffeU) != uVar32);
      }
      if (uVar13 == uVar17) goto LAB_10061ec0c;
    }
    do {
      *(int *)((long)plVar29 +
              ((long)(int)((ulong)(plVar29[uVar17] - (long)puVar30) >> 2) * 4 - uVar14)) =
           (int)uVar17;
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)uVar13);
  }
LAB_10061ec0c:
  if (*(char *)(param_4 + 0x38) == '\x02') {
    lVar20 = FUN_100623b18(0x10,(iVar12 + 1) * 2);
    *(long *)(param_4 + 8) = lVar20;
    sVar10 = *(short *)(param_4 + 0x32);
    lVar28 = *(long *)PTR____stack_chk_guard_101444218;
    if (sVar10 < 1) {
      lVar25 = 0;
    }
    else {
      lVar25 = 0;
      do {
        *(undefined2 *)(lVar20 + (long)*(int *)((long)plVar29 + (lVar25 * 4 - uVar14)) * 2) =
             *(undefined2 *)((long)puVar30 + lVar25 * 4 + 2);
        lVar25 = lVar25 + 1;
        sVar10 = *(short *)(param_4 + 0x32);
      } while (lVar25 < sVar10);
    }
    if ((int)lVar25 < (int)((int)sVar10 + 8U & 0xfffffff8)) {
      lVar25 = (long)(int)lVar25;
      do {
        *(undefined2 *)(lVar20 + lVar25 * 2) = 0xffff;
        lVar25 = lVar25 + 1;
        sVar10 = *(short *)(param_4 + 0x32);
      } while (lVar25 < (long)((long)sVar10 + 8U & 0xfffffffffffffff8));
    }
  }
  else {
    lVar20 = FUN_100623b18(0x10,(iVar12 + 1) * 4);
    *(long *)(param_4 + 8) = lVar20;
    sVar10 = *(short *)(param_4 + 0x32);
    lVar28 = *(long *)PTR____stack_chk_guard_101444218;
    if ((long)sVar10 < 1) {
      iVar12 = 0;
    }
    else {
      lVar25 = 0;
      do {
        *(undefined4 *)(lVar20 + (long)*(int *)((long)plVar29 + (lVar25 * 4 - uVar14)) * 4) =
             *(undefined4 *)((long)puVar30 + lVar25 * 4);
        lVar25 = lVar25 + 1;
      } while (lVar25 < sVar10);
      iVar12 = (int)sVar10;
      if (sVar10 < 2) {
        iVar12 = 1;
      }
    }
    uVar31 = (int)sVar10 + 4U & 0xfffffffc;
    if (iVar12 < (int)uVar31) {
      if ((int)uVar31 <= iVar12 + 1) {
        uVar31 = iVar12 + 1;
      }
      _memset((void *)(lVar20 + (long)iVar12 * 4),0xff,(ulong)((uVar31 - 1) - iVar12) * 4 + 4);
      sVar10 = *(short *)(param_4 + 0x32);
    }
  }
  if (*(char *)(param_4 + 0x36) == '\0') {
    lVar20 = FUN_100623b78((int)sVar10 << 1);
    *(long *)(param_4 + 0x28) = lVar20;
    sVar10 = *(short *)(param_4 + 0x30);
    if (0 < sVar10) {
      lVar25 = 0;
      iVar12 = 0;
      do {
        if ('\0' < *(char *)(param_1 + lVar25)) {
          lVar26 = (long)iVar12;
          iVar12 = iVar12 + 1;
          *(short *)(lVar20 + (long)*(int *)((long)plVar29 + (lVar26 * 4 - uVar14)) * 2) =
               (short)lVar25;
          sVar10 = *(short *)(param_4 + 0x30);
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < sVar10);
    }
  }
  else {
    uVar8 = FUN_100623b78((int)*(char *)(param_4 + 0x39) * (int)sVar10);
    *(undefined8 *)(param_4 + 0x20) = uVar8;
    sVar10 = *(short *)(param_4 + 0x30);
    if (0 < sVar10) {
      lVar20 = 0;
      iVar12 = 0;
      do {
        if (*(char *)(param_1 + lVar20) != '\0') {
          if (*(char *)(param_4 + 0x34) < '\x01') {
            uVar16 = 0;
          }
          else {
            uVar31 = 0;
            iVar11 = 0;
            uVar18 = 0;
            iVar24 = 1;
            do {
              iVar5 = 0;
              if (iVar24 != 0) {
                iVar5 = (int)lVar20 / iVar24;
              }
              iVar6 = 0;
              if (param_2 != 0) {
                iVar6 = iVar5 / param_2;
              }
              uVar18 = (uint)*(ushort *)(param_3 + (long)(iVar5 - iVar6 * param_2) * 2) <<
                       (ulong)(uVar31 & 0x1f) | uVar18 & 0xffff;
              uVar16 = (undefined2)uVar18;
              iVar24 = iVar24 * param_2;
              iVar11 = iVar11 + 1;
              uVar31 = uVar31 + (int)*(char *)(param_4 + 0x37);
            } while (iVar11 < *(char *)(param_4 + 0x34));
          }
          if (*(char *)(param_4 + 0x39) == '\x01') {
            *(char *)(*(long *)(param_4 + 0x20) +
                     (long)*(int *)((long)plVar29 + ((long)iVar12 * 4 - uVar14))) = (char)uVar16;
          }
          else {
            *(undefined2 *)
             (*(long *)(param_4 + 0x20) +
             (long)*(int *)((long)plVar29 + ((long)iVar12 * 4 - uVar14)) * 2) = uVar16;
          }
          iVar12 = iVar12 + 1;
          sVar10 = *(short *)(param_4 + 0x30);
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < sVar10);
    }
  }
  uVar8 = FUN_100623b78((long)*(short *)(param_4 + 0x32));
  *(undefined8 *)(param_4 + 0x10) = uVar8;
  sVar10 = *(short *)(param_4 + 0x30);
  if (0 < sVar10) {
    lVar20 = 0;
    iVar12 = 0;
    do {
      if ('\0' < *(char *)(param_1 + lVar20)) {
        lVar25 = (long)iVar12;
        iVar12 = iVar12 + 1;
        *(char *)(*(long *)(param_4 + 0x10) + (long)*(int *)((long)plVar29 + (lVar25 * 4 - uVar14)))
             = *(char *)(param_1 + lVar20);
        sVar10 = *(short *)(param_4 + 0x30);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < sVar10);
  }
  uVar14 = (ulong)*(short *)(param_4 + 0x32);
  if (*(short *)(param_4 + 0x32) == 0) {
    uVar31 = 0xfffffffe;
  }
  else {
    uVar18 = 0xffffffff;
    do {
      uVar31 = uVar18;
      uVar14 = uVar14 >> 1 & 0x7fffffff;
      uVar18 = uVar31 + 1;
    } while ((int)uVar14 != 0);
  }
  uVar18 = 5;
  if (4 < (int)uVar31) {
    uVar18 = uVar31;
  }
  *(char *)(param_4 + 0x3a) = (char)uVar18;
  uVar31 = 1 << (ulong)((int)(char)uVar18 & 0x1f);
  pvVar9 = (void *)FUN_100623bcc((ulong)uVar31,2);
  *(void **)(param_4 + 0x18) = pvVar9;
  _bzero(pvVar9,-(ulong)(uVar31 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar31 << 1);
  sVar10 = *(short *)(param_4 + 0x32);
  if (0 < sVar10) {
    lVar20 = 0;
    lVar25 = *(long *)(param_4 + 0x10);
    cVar2 = *(char *)(param_4 + 0x3a);
    do {
      cVar3 = *(char *)(lVar25 + lVar20);
      uVar19 = (uint)cVar3;
      if (cVar3 <= cVar2) {
        if (*(char *)(param_4 + 0x38) == '\x02') {
          uVar23 = (uint)*(ushort *)(*(long *)(param_4 + 8) + lVar20 * 2) << 0x10;
        }
        else {
          uVar23 = *(uint *)(*(long *)(param_4 + 8) + lVar20 * 4);
        }
        if ((int)cVar2 - (int)cVar3 != 0x1f) {
          iVar12 = 0;
          uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
          uVar23 = uVar23 >> 8 & 0xff00ff | (uVar23 & 0xff00ff) << 8;
          uVar23 = uVar23 >> 4 & 0xf0f0f0f | (uVar23 & 0xf0f0f0f) << 4;
          uVar23 = uVar23 >> 2 & 0x33333333 | (uVar23 & 0x33333333) << 2;
          lVar26 = *(long *)(param_4 + 0x18);
          do {
            *(short *)(lVar26 + (ulong)(uVar23 >> 1 & 0x55555555 | (uVar23 & 0x55555555) << 1 |
                                       iVar12 << (ulong)(uVar19 & 0x1f)) * 2) = (short)lVar20 + 1;
            iVar12 = iVar12 + 1;
            uVar19 = (uint)*(char *)(lVar25 + lVar20);
          } while (iVar12 < 1 << (ulong)((int)cVar2 - uVar19 & 0x1f));
          sVar10 = *(short *)(param_4 + 0x32);
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < sVar10);
  }
  if ((uVar18 & 0xff) != 0x1f) {
    iVar12 = 0;
    uVar18 = 0;
    cVar2 = *(char *)(param_4 + 0x3a);
    lVar20 = *(long *)(param_4 + 0x18);
    do {
      uVar19 = iVar12 << (ulong)(0x20U - (int)cVar2 & 0x1f);
      uVar23 = uVar19 >> 0x10 | uVar19 << 0x10;
      uVar23 = uVar23 >> 8 & 0xff00ff | (uVar23 & 0xff00ff) << 8;
      uVar23 = uVar23 >> 4 & 0xf0f0f0f | (uVar23 & 0xf0f0f0f) << 4;
      uVar23 = uVar23 >> 2 & 0x33333333 | (uVar23 & 0x33333333) << 2;
      uVar14 = (ulong)(uVar23 >> 1 & 0x55555555 | (uVar23 & 0x55555555) << 1);
      if (*(short *)(lVar20 + uVar14 * 2) == 0) {
        lVar25 = (long)(int)(uVar18 + 1);
        uVar23 = uVar18;
        do {
          uVar18 = uVar23;
          if ((int)*(short *)(param_4 + 0x32) <= (int)lVar25) break;
          if (*(char *)(param_4 + 0x38) == '\x02') {
            uVar7 = (uint)*(ushort *)(*(long *)(param_4 + 8) + lVar25 * 2) << 0x10;
          }
          else {
            uVar7 = *(uint *)(*(long *)(param_4 + 8) + lVar25 * 4);
          }
          lVar25 = lVar25 + 1;
          uVar23 = uVar18 + 1;
        } while (uVar7 <= uVar19);
        uVar1 = 0xffff;
        if (uVar18 >> 0xf == 0) {
          uVar1 = (ushort)uVar18 | 0x8000;
        }
        *(ushort *)(lVar20 + uVar14 * 2) = uVar1;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar31);
  }
LAB_10061f0cc:
  if (lVar28 == local_f8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_10061ead4:
  lVar28 = *(long *)PTR____stack_chk_guard_101444218;
  goto LAB_10061f0cc;
}




uint FUN_10061f0fc(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  
  lVar4 = FUN_10061e1a8(param_1,0x18);
  if (lVar4 != 0x564342) {
    return 0xffffffff;
  }
  uVar5 = FUN_10061e1a8(param_1,0x10);
  uVar6 = FUN_10061e1a8(param_1,0x18);
  iVar21 = (int)uVar6;
  if (iVar21 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_10061e1a8(param_1,1);
  uVar14 = uVar6;
  if (iVar1 == 1) {
    iVar1 = FUN_10061e1a8(param_1,5);
    if ((long)(uVar6 << 0x20) < 1) {
      iVar1 = 0;
    }
    else {
      lVar4 = 0;
      lVar22 = (long)iVar21;
      iVar1 = iVar1 + 1;
      do {
        iVar2 = 0;
        uVar10 = iVar21 - (int)lVar4;
        uVar11 = (ulong)uVar10;
        while (uVar10 != 0) {
          iVar2 = iVar2 + 1;
          uVar11 = uVar11 >> 1;
          uVar10 = (uint)uVar11;
        }
        lVar7 = FUN_10061e1a8(param_1,iVar2);
        if (lVar7 == -1) {
          return 0xffffffff;
        }
        uVar11 = lVar4 - lVar22;
        if (uVar11 < (ulong)-lVar7) {
          uVar11 = -lVar7;
        }
        lVar16 = lVar4;
        if (lVar4 < lVar22) {
          lVar16 = lVar4 - uVar11;
        }
        if (0 < lVar7) {
          lVar4 = lVar16;
        }
        iVar1 = iVar1 + 1;
      } while (lVar4 < lVar22);
    }
  }
  else {
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_10061e1a8(param_1,1);
    iVar1 = 0;
    if (lVar4 == 0) {
      if (0 < (long)(uVar6 << 0x20)) {
        lVar4 = 0;
        iVar1 = 0;
        do {
          lVar22 = FUN_10061e1a8(param_1,5);
          if (lVar22 == -1) {
            return 0xffffffff;
          }
          if (iVar1 <= lVar22) {
            iVar1 = (int)lVar22 + 1;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar21);
      }
    }
    else if ((long)(uVar6 << 0x20) < 1) {
      uVar14 = 0;
      iVar1 = 0;
    }
    else {
      lVar4 = 0;
      uVar14 = 0;
      iVar1 = 0;
      do {
        lVar22 = FUN_10061e1a8(param_1,1);
        if (lVar22 != 0) {
          lVar22 = FUN_10061e1a8(param_1,5);
          if (lVar22 == -1) {
            return 0xffffffff;
          }
          uVar14 = (ulong)((int)uVar14 + 1);
          if (iVar1 <= lVar22) {
            iVar1 = (int)lVar22 + 1;
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar21);
    }
  }
  iVar2 = FUN_10061e1a8(param_1,4);
  if (iVar2 < 1) {
    iVar3 = 0;
  }
  else {
    FUN_10061e14c(param_1,0x20);
    FUN_10061e14c(param_1,0x20);
    iVar3 = FUN_10061e1a8(param_1,4);
    iVar3 = iVar3 + 1;
    FUN_10061e14c(param_1,1);
  }
  uVar10 = (uint)uVar5;
  iVar23 = (int)uVar14;
  if (iVar2 != 2) {
    lVar4 = 0;
    if (iVar2 == 1) {
      iVar12 = -1;
      iVar15 = iVar21;
      while (iVar15 != 0) {
        uVar6 = uVar6 >> 1 & 0x7fffffff;
        iVar12 = iVar12 + 1;
        iVar15 = (int)uVar6;
      }
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = (int)(iVar12 * (uVar10 - 1)) / (int)uVar10;
      }
      iVar12 = iVar21 >> (uVar13 & 0x1f);
      lVar4 = (long)iVar21;
      do {
        lVar7 = 1;
        lVar22 = 1;
        if (0 < (int)uVar10) {
          lVar16 = (long)iVar12;
          lVar17 = (long)(iVar12 + 1);
          if (uVar10 == 0) {
            uVar13 = 0;
            lVar7 = 1;
            lVar22 = 1;
          }
          else {
            uVar13 = uVar10 & 0xfffffffc;
            if ((uVar5 & 0xfffffffc) == 0) {
              uVar13 = 0;
              lVar24 = 1;
              lVar25 = 1;
              lVar20 = 1;
              lVar8 = 1;
              lVar22 = 1;
              lVar9 = 1;
              lVar19 = 1;
              lVar7 = 1;
            }
            else {
              lVar24 = 1;
              lVar25 = 1;
              lVar20 = 1;
              lVar8 = 1;
              lVar22 = 1;
              lVar9 = 1;
              lVar19 = 1;
              lVar7 = 1;
              uVar18 = uVar10 & 0xfffffffc;
              do {
                lVar22 = lVar22 * lVar16;
                lVar19 = lVar19 * lVar16;
                lVar9 = lVar9 * lVar16;
                lVar7 = lVar7 * lVar16;
                lVar25 = lVar25 * lVar17;
                lVar24 = lVar24 * lVar17;
                lVar20 = lVar20 * lVar17;
                lVar8 = lVar8 * lVar17;
                uVar18 = uVar18 - 4;
              } while (uVar18 != 0);
            }
            lVar22 = lVar7 * lVar9 * lVar19 * lVar22;
            lVar7 = lVar8 * lVar24 * lVar20 * lVar25;
            if (uVar10 == uVar13) goto LAB_10061f488;
          }
          iVar21 = uVar10 - uVar13;
          do {
            lVar22 = lVar22 * lVar16;
            iVar21 = iVar21 + -1;
            lVar7 = lVar7 * lVar17;
          } while (iVar21 != 0);
        }
LAB_10061f488:
        if ((lVar4 < lVar7) && (lVar22 <= lVar4)) goto code_r0x00010061f498;
        iVar21 = 1;
        if (lVar4 < lVar22) {
          iVar21 = -1;
        }
        iVar12 = iVar12 + iVar21;
      } while( true );
    }
    goto LAB_10061f49c;
  }
  lVar4 = uVar6 * uVar5;
LAB_10061f4a0:
  if (0 < lVar4 << 0x20) {
    lVar22 = 0;
    do {
      FUN_10061e14c(param_1,iVar3);
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)lVar4);
  }
  uVar13 = 1;
  if (0x10 < iVar1) {
    uVar13 = 2;
  }
  iVar21 = iVar23 + 1 << (ulong)uVar13;
  iVar1 = iVar23 << (8 < (int)(iVar3 * uVar10));
LAB_10061f514:
  if (iVar23 == 0) {
    uVar10 = 0xfffffffe;
  }
  else {
    uVar13 = 0xffffffff;
    do {
      uVar10 = uVar13;
      uVar14 = uVar14 >> 1 & 0x7fffffff;
      uVar13 = uVar10 + 1;
    } while ((int)uVar14 != 0);
  }
  iVar3 = FUN_10061e19c(param_1);
  iVar2 = 0x40;
  if (4 < (int)uVar10) {
    iVar2 = 2 << (ulong)(uVar10 & 0x1f);
  }
  uVar10 = 0xffffffff;
  if (iVar3 == 0) {
    uVar10 = (iVar23 + ((iVar21 + 0xfU & 0xfffffff0 | 3) + iVar1 & 0xfffffffc) + 3 | 3) + iVar2 &
             0xfffffffc;
  }
  return uVar10;
code_r0x00010061f498:
  lVar4 = (long)iVar12;
LAB_10061f49c:
  if (iVar2 == 0) {
    uVar10 = 1;
    if (0x10 < iVar1) {
      uVar10 = 2;
    }
    iVar21 = iVar23 + 1 << (ulong)uVar10;
    iVar1 = iVar23 << 1;
    goto LAB_10061f514;
  }
  goto LAB_10061f4a0;
}




long FUN_10061f5ec(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(short *)(param_1 + 0x32) < 1) {
    lVar2 = -1;
  }
  else {
    iVar1 = FUN_10061f638(param_1);
    if (iVar1 < 0) {
      lVar2 = -1;
    }
    else {
      lVar2 = (long)*(short *)(*(long *)(param_1 + 0x28) + (long)iVar1 * 2);
    }
  }
  return lVar2;
}




long FUN_10061f638(long param_1,undefined8 param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar5;
  
  cVar2 = *(char *)(param_1 + 0x35);
  uVar8 = (ulong)cVar2;
  iVar3 = FUN_10061dfa4(param_2,(long)*(char *)(param_1 + 0x3a));
  if (iVar3 < 0) {
    lVar10 = -1;
LAB_10061f698:
    uVar5 = FUN_10061dfa4(param_2,uVar8);
    uVar4 = (uint)uVar5;
    uVar6 = (uint)(uVar5 >> 0x1f) & 1;
    if (('\x01' < cVar2) && ((int)uVar4 < 0)) {
      uVar7 = (uint)cVar2;
      do {
        uVar7 = uVar7 - 1;
        uVar8 = FUN_10061dfa4(param_2,uVar7);
        uVar4 = (uint)uVar8;
        if ((int)uVar7 < 2) break;
      } while ((int)uVar4 < 0);
      uVar6 = (uint)(uVar8 >> 0x1f) & 1;
      uVar8 = (ulong)uVar7;
    }
    if (uVar6 == 0) {
      uVar6 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar6 = uVar6 >> 8 & 0xff00ff | (uVar6 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 4 & 0xf0f0f0f | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = uVar6 >> 2 & 0x33333333 | (uVar6 & 0x33333333) << 2;
      uVar6 = uVar6 >> 1 & 0x55555555 | (uVar6 & 0x55555555) << 1;
      if (*(char *)(param_1 + 0x38) == '\x02') {
        do {
          lVar9 = lVar10;
          if ((long)*(short *)(param_1 + 0x32) <= lVar9 + 1) break;
          lVar10 = lVar9 + 1;
        } while ((uint)*(ushort *)(*(long *)(param_1 + 8) + lVar9 * 2 + 2) <= uVar6 >> 0x10);
      }
      else {
        do {
          lVar9 = lVar10;
          if ((long)*(short *)(param_1 + 0x32) <= lVar9 + 1) break;
          lVar10 = lVar9 + 1;
        } while (*(uint *)(*(long *)(param_1 + 8) + lVar9 * 4 + 4) <= uVar6);
      }
      cVar2 = *(char *)(*(long *)(param_1 + 0x10) + (long)(int)lVar9);
      if ((int)cVar2 <= (int)uVar8) goto LAB_10061f7c0;
      FUN_10061e14c(param_2,uVar8);
    }
    lVar9 = 0xffffffff;
  }
  else {
    uVar1 = *(ushort *)(*(long *)(param_1 + 0x18) + (long)iVar3 * 2);
    if ((short)uVar1 < 0) {
      lVar10 = (long)(int)((uVar1 & 0x7fff) - 1);
      goto LAB_10061f698;
    }
    lVar9 = (ulong)uVar1 - 1;
    cVar2 = *(char *)(*(long *)(param_1 + 0x10) + lVar9);
LAB_10061f7c0:
    FUN_10061e14c(param_2,(long)cVar2);
  }
  return lVar9;
}




void FUN_10061f7e0(long param_1,float *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float afStack_60 [2];
  long local_58;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar8;
  if (0 < *(short *)(param_1 + 0x32)) {
    cVar1 = *(char *)(param_1 + 0x34);
    uVar2 = 0;
    if (cVar1 != 0) {
      uVar2 = param_4 / (int)cVar1;
    }
    lVar7 = (long)afStack_60 - ((long)cVar1 * 4 + 0xfU & 0xfffffffffffffff0);
    if (0 < (int)uVar2) {
      iVar9 = 0;
      do {
        iVar3 = FUN_10061f8e4(param_1,param_3,lVar7);
        if (iVar3 != 0) {
          uVar4 = 0xffffffffffffffff;
          goto LAB_10061f8b8;
        }
        cVar1 = *(char *)(param_1 + 0x34);
        if (0 < (long)cVar1) {
          lVar5 = 0;
          pfVar6 = param_2;
          do {
            *pfVar6 = *(float *)(lVar7 + lVar5 * 4) + *pfVar6;
            lVar5 = lVar5 + 1;
            pfVar6 = (float *)((long)pfVar6 +
                              (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
          } while (lVar5 < cVar1);
        }
        iVar9 = iVar9 + 1;
        param_2 = param_2 + 1;
      } while (iVar9 < (int)uVar2);
    }
  }
  uVar4 = 0;
LAB_10061f8b8:
  if (lVar8 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_10061f8e4(float *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint auStack_50 [2];
  long local_48;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar9;
  uVar4 = FUN_10061f638();
  iVar5 = FUN_10061e19c(param_2);
  if (iVar5 == 0) {
    cVar2 = *(char *)(param_1 + 0xd);
    lVar7 = (long)cVar2;
    lVar3 = -0x50 - (lVar7 * 4 + 0xfU & 0xfffffffffffffff0);
    if (uVar4 == 0xffffffff) {
      uVar6 = 0xffffffff;
    }
    else {
      if (*(char *)((long)param_1 + 0x39) == '\x01') {
        uVar4 = (uint)*(byte *)(*(long *)(param_1 + 8) + (ulong)uVar4);
      }
      else {
        uVar4 = (uint)*(ushort *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 2);
      }
      if ('\0' < cVar2) {
        lVar8 = 0;
        cVar1 = *(char *)((long)param_1 + 0x37);
        do {
          *(uint *)((long)auStack_50 + lVar8 * 4 + lVar3 + 0x50) =
               uVar4 & (1 << (ulong)((int)cVar1 & 0x1f)) - 1U;
          uVar4 = uVar4 >> (ulong)((int)cVar1 & 0x1f);
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar7);
        if ('\0' < cVar2) {
          lVar8 = 0;
          do {
            *(float *)(param_3 + lVar8 * 4) =
                 ABS((float)*(int *)((long)auStack_50 + lVar8 * 4 + lVar3 + 0x50)) * param_1[1] +
                 *param_1;
            lVar8 = lVar8 + 1;
          } while (lVar8 < lVar7);
        }
      }
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (lVar9 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar6);
}




void FUN_10061fa20(long param_1,long param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float afStack_70 [2];
  long local_68;
  
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar14;
  if (0 < *(short *)(param_1 + 0x32)) {
    lVar3 = -((long)*(char *)(param_1 + 0x34) * 4 + 0xfU & 0xfffffffffffffff0);
    lVar13 = (long)afStack_70 + lVar3;
    if (0 < param_4) {
      iVar15 = 0;
      do {
        iVar4 = FUN_10061f8e4(param_1,param_3,lVar13);
        if (iVar4 != 0) {
          uVar5 = 0xffffffffffffffff;
          goto LAB_10061fb84;
        }
        cVar1 = *(char *)(param_1 + 0x34);
        iVar4 = cVar1 + -1;
        if (0 < cVar1) {
          uVar6 = (ulong)(int)cVar1;
          lVar8 = (long)iVar15;
          if (cVar1 < '\x02') {
            iVar4 = 0;
          }
          if (cVar1 == '\0') {
            uVar7 = 0;
LAB_10061fb48:
            pfVar9 = (float *)(param_2 + lVar8 * 4);
            do {
              *pfVar9 = *(float *)(lVar13 + uVar7 * 4) + *pfVar9;
              uVar7 = uVar7 + 1;
              pfVar9 = pfVar9 + 1;
            } while ((long)uVar7 < (long)uVar6);
          }
          else {
            uVar7 = uVar6 & 0xfffffffffffffff8;
            if (uVar7 == 0) {
              uVar7 = 0;
            }
            else {
              lVar8 = lVar8 + uVar7;
              uVar10 = (long)(int)cVar1 & 0xfffffffffffffff8;
              puVar11 = (undefined8 *)(param_2 + 0x10 + (long)iVar15 * 4);
              puVar12 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar3);
              do {
                auVar16._0_8_ =
                     CONCAT44(*(float *)((long)puVar12 + -0xc) + (float)((ulong)puVar11[-2] >> 0x20)
                              ,*(float *)(puVar12 + -2) + (float)puVar11[-2]);
                auVar16._8_4_ = *(float *)(puVar12 + -1) + (float)puVar11[-1];
                auVar16._12_4_ =
                     *(float *)((long)puVar12 + -4) + (float)((ulong)puVar11[-1] >> 0x20);
                fVar18 = (float)*puVar12 + (float)*puVar11;
                fVar19 = (float)((ulong)*puVar12 >> 0x20) + (float)((ulong)*puVar11 >> 0x20);
                fVar20 = (float)puVar12[1] + (float)puVar11[1];
                fVar21 = (float)((ulong)puVar12[1] >> 0x20) + (float)((ulong)puVar11[1] >> 0x20);
                puVar11[-2] = auVar16._0_8_;
                auVar17 = NEON_ext(auVar16,auVar16,8,1);
                puVar11[-1] = auVar17._0_8_;
                *puVar11 = CONCAT44(fVar19,fVar18);
                auVar17._4_4_ = fVar19;
                auVar17._0_4_ = fVar18;
                auVar17._8_4_ = fVar20;
                auVar17._12_4_ = fVar21;
                auVar2._4_4_ = fVar19;
                auVar2._0_4_ = fVar18;
                auVar2._8_4_ = fVar20;
                auVar2._12_4_ = fVar21;
                auVar17 = NEON_ext(auVar17,auVar2,8,1);
                puVar11[1] = auVar17._0_8_;
                uVar10 = uVar10 - 8;
                puVar11 = puVar11 + 4;
                puVar12 = puVar12 + 4;
              } while (uVar10 != 0);
            }
            if (uVar6 != uVar7) goto LAB_10061fb48;
          }
          iVar15 = iVar15 + iVar4 + 1;
        }
      } while (iVar15 < param_4);
    }
  }
  uVar5 = 0;
LAB_10061fb84:
  if (lVar14 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar5);
  }
  return;
}




void FUN_10061fbb4(long param_1,long param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar7;
  if (*(short *)(param_1 + 0x32) < 1) {
    if (0 < param_4) {
      iVar8 = 0;
      cVar1 = *(char *)(param_1 + 0x34);
      do {
        if ('\0' < cVar1) {
          iVar4 = (int)*(char *)(param_1 + 0x34);
          uVar3 = iVar4 - 1;
          uVar6 = (ulong)uVar3;
          if (uVar3 == 0 || iVar4 < 1) {
            uVar6 = 0;
          }
          if (uVar3 == 0 || iVar4 < 1) {
            uVar3 = 0;
          }
          _bzero((void *)(param_2 + (long)iVar8 * 4),uVar6 * 4 + 4);
          iVar8 = iVar8 + uVar3 + 1;
        }
      } while (iVar8 < param_4);
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x34);
    if (0 < param_4) {
      iVar8 = 0;
      do {
        iVar4 = FUN_10061f8e4(param_1,param_3,
                              auStack_60 + -((long)cVar1 * 4 + 0xfU & 0xfffffffffffffff0));
        if (iVar4 != 0) {
          uVar5 = 0xffffffffffffffff;
          goto LAB_10061fcd4;
        }
        cVar2 = *(char *)(param_1 + 0x34);
        if ('\0' < cVar2) {
          uVar3 = (int)cVar2 - 1;
          uVar6 = (ulong)uVar3;
          if (cVar2 < '\x02') {
            uVar6 = 0;
          }
          if (cVar2 < '\x02') {
            uVar3 = 0;
          }
          _memcpy((void *)(param_2 + (long)iVar8 * 4),
                  auStack_60 + -((long)cVar1 * 4 + 0xfU & 0xfffffffffffffff0),uVar6 * 4 + 4);
          iVar8 = iVar8 + uVar3 + 1;
        }
      } while (iVar8 < param_4);
    }
  }
  uVar5 = 0;
LAB_10061fcd4:
  if (lVar7 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar5);
  }
  return;
}




void FUN_10061fd00(long param_1,long param_2,long param_3,int param_4,undefined8 param_5,int param_6
                  )

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float afStack_70 [2];
  long local_68;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar9;
  if (0 < *(short *)(param_1 + 0x32)) {
    lVar8 = (long)afStack_70 - ((long)*(char *)(param_1 + 0x34) * 4 + 0xfU & 0xfffffffffffffff0);
    if (0 < param_6) {
      iVar10 = 0;
      lVar1 = param_3 + param_6;
      do {
        iVar4 = FUN_10061f8e4(param_1,param_5,lVar8);
        if (iVar4 != 0) {
          uVar5 = 0xffffffffffffffff;
          goto LAB_10061fde8;
        }
        cVar2 = *(char *)(param_1 + 0x34);
        if (0 < (long)cVar2) {
          lVar6 = 0;
          iVar4 = iVar10;
          do {
            lVar7 = *(long *)(param_2 + (long)iVar4 * 8);
            *(float *)(lVar7 + param_3 * 4) =
                 *(float *)(lVar8 + lVar6 * 4) + *(float *)(lVar7 + param_3 * 4);
            bVar3 = iVar4 + 1 == param_4;
            if (bVar3) {
              param_3 = param_3 + 1;
            }
            iVar10 = 0;
            if (!bVar3) {
              iVar10 = iVar4 + 1;
            }
            lVar6 = lVar6 + 1;
            iVar4 = iVar10;
          } while (lVar6 < cVar2);
        }
      } while (param_3 < lVar1);
    }
  }
  uVar5 = 0;
LAB_10061fde8:
  if (lVar9 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}




int FUN_10061fe18(undefined8 *param_1,undefined8 *param_2)

{
  return (uint)(*(uint *)*param_2 < *(uint *)*param_1) -
         (uint)(*(uint *)*param_1 < *(uint *)*param_2);
}




undefined8 FUN_10061fe3c(long *param_1)

{
  long lVar1;
  
  if (param_1 == (long *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != 0) {
    lVar1 = *(long *)(*param_1 + 0x30);
    if (lVar1 != 0) {
      param_1[3] = -1;
      param_1[8] = -1;
      param_1[9] = -1;
      param_1[6] = 0;
      param_1[7] = -1;
      param_1[5] = 0;
      *(int *)(param_1 + 4) = *(int *)(lVar1 + 8) >> 1;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}




void FUN_10061fe94(undefined2 *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  uint param_6,int param_7,int param_8,undefined8 param_9)

{
  uint uVar1;
  float *pfVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined2 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = param_7 - 1;
  puVar3 = param_1;
  if (0 < param_7) {
    puVar3 = (undefined2 *)((long)param_1 + ((ulong)uVar1 * 2 + 2) * (long)(int)param_6);
    pfVar6 = param_4;
    do {
      pfVar6 = pfVar6 + -1;
      fVar9 = *pfVar6;
      fVar11 = -1.0;
      if (-1.0 <= fVar9) {
        fVar11 = fVar9;
      }
      fVar10 = 1.0;
      fVar12 = fVar10;
      if (fVar11 < 1.0) {
        fVar10 = -1.0;
        fVar12 = fVar9;
      }
      if (-1.0 <= fVar9) {
        fVar10 = fVar12;
      }
      *param_1 = (short)(int)(fVar10 * 32767.0);
      param_7 = param_7 + -1;
      param_1 = (undefined2 *)
                ((long)param_1 +
                (-(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_6 << 1));
    } while (param_7 != 0);
    param_4 = param_4 + ~(ulong)uVar1;
  }
  uVar4 = (ulong)(param_8 - 1);
  if (0 < param_8) {
    puVar5 = (undefined2 *)((long)puVar3 + (uVar4 * 2 + 2) * (long)(int)param_6);
    pfVar6 = param_4 + ~uVar4;
    pfVar2 = param_5;
    pfVar8 = param_3;
    pfVar7 = param_2;
    do {
      param_4 = param_4 + -1;
      pfVar7 = pfVar7 + -1;
      fVar9 = *pfVar7 * *param_4 + *pfVar2 * *pfVar8;
      fVar11 = -1.0;
      if (-1.0 <= fVar9) {
        fVar11 = fVar9;
      }
      fVar10 = 1.0;
      fVar12 = fVar10;
      if (fVar11 < 1.0) {
        fVar10 = -1.0;
        fVar12 = fVar9;
      }
      if (-1.0 <= fVar9) {
        fVar10 = fVar12;
      }
      *puVar3 = (short)(int)(fVar10 * 32767.0);
      param_8 = param_8 + -1;
      puVar3 = (undefined2 *)
               ((long)puVar3 +
               (-(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_6 << 1));
      pfVar2 = pfVar2 + 1;
      pfVar8 = pfVar8 + 1;
    } while (param_8 != 0);
    param_3 = param_3 + uVar4 + 1;
    param_2 = param_2 + ~uVar4;
    puVar3 = puVar5;
    param_4 = pfVar6;
    param_5 = param_5 + uVar4 + 1;
  }
  uVar1 = (int)param_9 - 1;
  puVar5 = puVar3;
  if (0 < (int)param_9) {
    puVar5 = (undefined2 *)((long)puVar3 + ((ulong)uVar1 * 2 + 2) * (long)(int)param_6);
    pfVar6 = param_5;
    do {
      pfVar6 = pfVar6 + -1;
      param_2 = param_2 + -1;
      fVar9 = *param_2 * *param_4 - *pfVar6 * *param_3;
      fVar11 = -1.0;
      if (-1.0 <= fVar9) {
        fVar11 = fVar9;
      }
      fVar10 = 1.0;
      fVar12 = fVar10;
      if (fVar11 < 1.0) {
        fVar10 = -1.0;
        fVar12 = fVar9;
      }
      if (-1.0 <= fVar9) {
        fVar10 = fVar12;
      }
      *puVar3 = (short)(int)(fVar10 * 32767.0);
      param_9._0_4_ = (int)param_9 + -1;
      puVar3 = (undefined2 *)
               ((long)puVar3 +
               (-(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_6 << 1));
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while ((int)param_9 != 0);
    param_5 = param_5 + ~(ulong)uVar1;
  }
  if (0 < param_9._4_4_) {
    do {
      param_5 = param_5 + -1;
      fVar9 = *param_5;
      fVar11 = 1.0;
      if (-1.0 < fVar9) {
        fVar11 = -fVar9;
      }
      fVar10 = -1.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar11;
      }
      *puVar5 = (short)(int)(fVar10 * 32767.0);
      param_9._4_4_ = param_9._4_4_ + -1;
      puVar5 = (undefined2 *)
               ((long)puVar5 +
               (-(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_6 << 1));
    } while (param_9._4_4_ != 0);
  }
  return;
}

