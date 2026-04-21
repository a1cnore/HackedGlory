// functions/01a34 — 3 functions
#include "libGameKindred.h"




void FUN_01a34118(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,uint param_6
                 ,int param_7,int param_8,long *param_9,long *param_10)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar4 = (long *)*param_9;
  plVar5 = (long *)*param_10;
  plVar2 = plVar4;
  plVar6 = plVar5;
  if (param_7 != 3) {
    plVar2 = plVar5;
    plVar6 = plVar4;
  }
  if ((plVar6 != (long *)0x0) && (plVar2 != (long *)0x0)) {
    do {
      lVar8 = 0x18;
      if (param_7 != 3) {
        lVar8 = 0x10;
      }
      plVar7 = *(long **)((long)plVar6 + lVar8);
      lVar8 = *plVar6;
      if (param_8 < 0) {
        if (((((((param_1 == 0) || ((*(ulong *)(lVar8 + 0x18) & param_1) != 0)) &&
               ((param_2 == 0 || ((*(ulong *)(lVar8 + 0x20) & param_2) != 0)))) &&
              ((param_3 == 0 || ((*(ulong *)(lVar8 + 0x28) & param_3) != 0)))) &&
             ((param_4 == 0 || ((*(ulong *)(lVar8 + 0x30) & param_4) != 0)))) &&
            ((((param_5 == 0 || ((*(ulong *)(lVar8 + 0x38) & param_5) != 0)) &&
              (((param_6 & 3) == 0 || ((*(ulong *)(lVar8 + 0x40) & (ulong)param_6 & 3) != 0)))) &&
             (((param_6 & 0x1fc) == 0 || ((*(ulong *)(lVar8 + 0x40) & (ulong)param_6 & 0x1fc) != 0))
             )))) && (((param_6 >> 9 & 1) == 0 || ((*(byte *)(lVar8 + 0x41) >> 1 & 1) != 0))))
        goto LAB_01a34188;
      }
      else if (*(int *)(lVar8 + 0x50) == param_8) {
LAB_01a34188:
        plVar1 = plVar6 + 2;
        if (param_7 == 4) {
          if (((int)plVar6[1] != 0) && (plVar6 != plVar5)) {
            if (plVar6 == plVar4) {
              plVar4 = (long *)*plVar1;
            }
            lVar8 = plVar6[3];
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x10) = *plVar1;
            }
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 0x18) = lVar8;
            }
            plVar5[2] = (long)plVar6;
            plVar6[2] = 0;
            plVar6[3] = (long)plVar5;
            plVar5 = plVar6;
          }
        }
        else if (param_7 == 1) {
          if ((int)plVar6[1] == 0) {
            if (plVar6 != plVar5) {
              if (plVar6 == plVar4) {
                plVar4 = (long *)*plVar1;
              }
              lVar8 = plVar6[3];
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x10) = *plVar1;
              }
              if (*plVar1 != 0) {
                *(long *)(*plVar1 + 0x18) = lVar8;
              }
              plVar5[2] = (long)plVar6;
              plVar6[2] = 0;
              plVar6[3] = (long)plVar5;
              plVar5 = plVar6;
            }
            *(undefined4 *)(plVar6 + 1) = 1;
          }
        }
        else if (param_7 == 3) {
          if ((int)plVar6[1] != 0) {
            if (plVar6 != plVar4) {
              if (plVar6 == plVar5) {
                plVar5 = (long *)plVar6[3];
              }
              lVar8 = *plVar1;
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x18) = plVar6[3];
              }
              if (plVar6[3] != 0) {
                *(long *)(plVar6[3] + 0x10) = lVar8;
              }
              plVar4[3] = (long)plVar6;
              plVar6[2] = (long)plVar4;
              plVar6[3] = 0;
              plVar4 = plVar6;
            }
            *(undefined4 *)(plVar6 + 1) = 0;
          }
        }
        else if (param_7 == 2) {
          plVar9 = (long *)plVar6[2];
          if (plVar6 != plVar4) {
            *(long **)(plVar6[3] + 0x10) = plVar9;
            plVar9 = plVar4;
          }
          if (plVar6 == plVar5) {
            plVar5 = (long *)plVar6[3];
          }
          lVar8 = plVar6[2];
          *(undefined4 *)(plVar6 + 1) = 0;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x18) = plVar6[3];
          }
          if (plVar6[3] != 0) {
            *(long *)(plVar6[3] + 0x10) = lVar8;
          }
          *plVar1 = 0;
          plVar6[3] = 0;
          plVar4 = plVar9;
        }
      }
    } while ((plVar7 != (long *)0x0) && (bVar3 = plVar6 != plVar2, plVar6 = plVar7, bVar3));
  }
  *param_9 = (long)plVar4;
  *param_10 = (long)plVar5;
  return;
}




undefined8 FUN_01a34380(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  void *__s;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  
  iVar1 = 0;
  for (plVar4 = (long *)*param_1; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
    iVar12 = iVar1;
    if (((int)plVar4[1] != 0) &&
       (iVar12 = *(int *)(*plVar4 + 0x50), *(int *)(*plVar4 + 0x50) <= iVar1)) {
      iVar12 = iVar1;
    }
    iVar1 = iVar12;
  }
  uVar5 = (ulong)(iVar1 + 1U) << 2;
  __s = CRYPTO_malloc((int)uVar5,"ssl_ciph.c",0x463);
  if (__s == (void *)0x0) {
    ERR_put_error(0x14,0xe7,0x41,"ssl_ciph.c",0x465);
    uVar3 = 0;
  }
  else {
    memset(__s,0,-(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 | uVar5);
    for (plVar4 = (long *)*param_1; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
      if ((int)plVar4[1] != 0) {
        lVar6 = (long)*(int *)(*plVar4 + 0x50) * 4;
        *(int *)((long)__s + lVar6) = *(int *)((long)__s + lVar6) + 1;
      }
    }
    if (-1 < iVar1) {
      uVar5 = (long)iVar1;
      do {
        if (0 < *(int *)((long)__s + uVar5 * 4)) {
          plVar7 = (long *)*param_1;
          plVar9 = (long *)*param_2;
          plVar10 = plVar9;
          plVar4 = plVar7;
          plVar11 = plVar9;
          if (plVar7 != (long *)0x0) {
            do {
              if (plVar11 == (long *)0x0) break;
              plVar11 = (long *)plVar4[2];
              plVar8 = plVar7;
              if (((uVar5 == *(uint *)(*plVar4 + 0x50)) && ((int)plVar4[1] != 0)) &&
                 (plVar4 != plVar10)) {
                lVar6 = plVar4[3];
                plVar8 = plVar11;
                if (plVar4 != plVar7) {
                  plVar8 = plVar7;
                }
                plVar7 = plVar11;
                if (lVar6 != 0) {
                  *(long **)(lVar6 + 0x10) = plVar11;
                  plVar7 = (long *)plVar4[2];
                }
                if (plVar7 != (long *)0x0) {
                  plVar7[3] = lVar6;
                }
                plVar10[2] = (long)plVar4;
                plVar4[2] = 0;
                plVar4[3] = (long)plVar10;
                plVar10 = plVar4;
              }
              bVar2 = plVar4 != plVar9;
              plVar7 = plVar8;
              plVar4 = plVar11;
            } while (bVar2);
          }
          *param_1 = (long)plVar7;
          *param_2 = (long)plVar10;
        }
        bVar2 = 0 < (long)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar2);
    }
    CRYPTO_free(__s);
    uVar3 = 1;
  }
  return uVar3;
}




undefined4 FUN_01a34518(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  size_t __n;
  char *__s2;
  uint uVar9;
  int *piVar10;
  byte *__s1;
  undefined8 *puVar11;
  undefined4 local_9c;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  local_9c = 1;
LAB_01a34564:
  uVar5 = (ulong)*param_1;
LAB_01a34568:
  iVar4 = 1;
  switch(uVar5) {
  case 0:
    goto switchD_01a3458c_caseD_0;
  case 0x20:
  case 0x2c:
  case 0x3a:
  case 0x3b:
    goto switchD_01a3458c_caseD_20;
  case 0x21:
    param_1 = param_1 + 1;
    iVar4 = 2;
    break;
  case 0x2b:
    param_1 = param_1 + 1;
    iVar4 = 4;
    break;
  case 0x2d:
    param_1 = param_1 + 1;
    iVar4 = 3;
    break;
  case 0x40:
    param_1 = param_1 + 1;
    iVar4 = 5;
  }
  uVar5 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
LAB_01a345cc:
  __s1 = param_1;
  __n = 0;
  do {
    bVar1 = __s1[__n];
    if ((0x19 < bVar1 - 0x41) && (9 < (bVar1 - 0x30 & 0xff))) {
      uVar9 = (uint)bVar1;
      if ((0x19 < uVar9 - 0x61) && (1 < (uVar9 - 0x2d & 0xff))) goto code_r0x01a34618;
    }
    __n = __n + 1;
  } while( true );
switchD_01a3458c_caseD_20:
  param_1 = param_1 + 1;
  goto LAB_01a34564;
code_r0x01a34618:
  iVar8 = (int)__n;
  if (iVar8 == 0) {
    ERR_put_error(0x14,0xe6,0x118,"ssl_ciph.c",0x4c6);
    bVar2 = false;
    local_9c = 0;
    __n = __n + 1;
    goto joined_r0x01a348b0;
  }
  if (iVar4 == 5) {
    param_1 = __s1 + __n;
    goto joined_r0x01a348fc;
  }
  piVar10 = (int *)*param_4;
  param_1 = __s1 + __n;
  if (piVar10 == (int *)0x0) {
    if (bVar1 == 0x2b) {
      param_1 = param_1 + 1;
    }
    goto LAB_01a3490c;
  }
  puVar11 = param_4;
  while( true ) {
    puVar11 = puVar11 + 1;
    __s2 = *(char **)(piVar10 + 2);
    iVar3 = strncmp((char *)__s1,__s2,__n);
    if ((iVar3 == 0) && (__s2[__n] == '\0')) break;
    piVar10 = (int *)*puVar11;
    if (piVar10 == (int *)0x0) goto LAB_01a34964;
  }
  uVar6 = *(ulong *)(piVar10 + 6);
  if (uVar6 == 0) {
LAB_01a34684:
    uVar7 = *(ulong *)(piVar10 + 8);
    if (uVar7 != 0) goto LAB_01a3468c;
LAB_01a346b8:
    uVar6 = *(ulong *)(piVar10 + 10);
joined_r0x01a346bc:
    if (uVar6 != 0) goto LAB_01a346c0;
LAB_01a346ec:
    uVar7 = *(ulong *)(piVar10 + 0xc);
joined_r0x01a346f0:
    if (uVar7 != 0) goto LAB_01a346f4;
LAB_01a34724:
    uVar6 = *(ulong *)(piVar10 + 0x10);
joined_r0x01a34758:
    uVar7 = uVar6 & 3;
    if (uVar7 == 0) goto LAB_01a3475c;
LAB_01a34730:
    if ((uVar5 & 3) != 0) {
      uVar5 = (uVar6 | 0xfffffffffffffffc) & uVar5;
      if ((uVar5 & 3) == 0) goto LAB_01a34964;
      goto LAB_01a3475c;
    }
    uVar5 = uVar7 | uVar5;
    uVar7 = uVar6 & 0x1fc;
    if (uVar7 != 0) goto LAB_01a34764;
LAB_01a3478c:
    iVar3 = *piVar10;
    uVar5 = uVar5 | uVar6 & 0x200;
  }
  else {
    if (local_68 != 0) {
      local_68 = uVar6 & local_68;
      if (local_68 == 0) {
        local_68 = 0;
        goto LAB_01a34964;
      }
      goto LAB_01a34684;
    }
    uVar7 = *(ulong *)(piVar10 + 8);
    local_68 = uVar6;
    if (uVar7 == 0) goto LAB_01a346b8;
LAB_01a3468c:
    if (local_70 != 0) {
      local_70 = uVar7 & local_70;
      if (local_70 == 0) {
        local_70 = 0;
        goto LAB_01a34964;
      }
      uVar6 = *(ulong *)(piVar10 + 10);
      goto joined_r0x01a346bc;
    }
    uVar6 = *(ulong *)(piVar10 + 10);
    local_70 = uVar7;
    if (uVar6 == 0) goto LAB_01a346ec;
LAB_01a346c0:
    if (local_78 == 0) {
      uVar7 = *(ulong *)(piVar10 + 0xc);
      local_78 = uVar6;
      goto joined_r0x01a346f0;
    }
    local_78 = uVar6 & local_78;
    if (local_78 == 0) {
      local_78 = 0;
      goto LAB_01a34964;
    }
    uVar7 = *(ulong *)(piVar10 + 0xc);
    if (uVar7 == 0) goto LAB_01a34724;
LAB_01a346f4:
    if (local_80 == 0) {
      uVar6 = *(ulong *)(piVar10 + 0x10);
      local_80 = uVar7;
      goto joined_r0x01a34758;
    }
    local_80 = uVar7 & local_80;
    if (local_80 == 0) {
      local_80 = 0;
      goto LAB_01a34964;
    }
    uVar6 = *(ulong *)(piVar10 + 0x10);
    uVar7 = uVar6 & 3;
    if (uVar7 != 0) goto LAB_01a34730;
LAB_01a3475c:
    uVar7 = uVar6 & 0x1fc;
    if (uVar7 == 0) goto LAB_01a3478c;
LAB_01a34764:
    if ((uVar5 & 0x1fc) != 0) {
      uVar5 = uVar5 & (uVar6 | 0xfffffffffffffe03);
      if ((uVar5 & 0x1fc) == 0) goto LAB_01a34964;
      goto LAB_01a3478c;
    }
    iVar3 = *piVar10;
    uVar5 = uVar5 | uVar7 | uVar6 & 0x200;
  }
  uVar6 = local_88;
  if ((((iVar3 != 0) || (uVar7 = *(ulong *)(piVar10 + 0xe), uVar7 == 0)) ||
      (uVar6 = uVar7, local_88 == 0)) || (uVar6 = uVar7 & local_88, (uVar7 & local_88) != 0)) {
    local_88 = uVar6;
    param_1 = param_1 + 1;
    if (bVar1 != 0x2b) goto LAB_01a347f0;
    goto LAB_01a345cc;
  }
  local_88 = 0;
LAB_01a34964:
  param_1 = __s1 + __n;
  bVar2 = false;
  if (uVar9 == 0x2b) {
    param_1 = param_1 + 1;
  }
  goto joined_r0x01a348b0;
LAB_01a347f0:
  bVar2 = true;
joined_r0x01a348b0:
  param_1 = __s1 + __n;
joined_r0x01a348b0:
  if (iVar4 == 5) {
joined_r0x01a348fc:
    if ((iVar8 == 8) && (iVar4 = strncmp((char *)__s1,"STRENGTH",8), iVar4 == 0)) {
      iVar4 = FUN_01a34380(param_2,param_3);
      if (iVar4 != 0) goto LAB_01a34854;
    }
    else {
      ERR_put_error(0x14,0xe6,0x118,"ssl_ciph.c",0x562);
    }
    local_9c = 0;
    bVar1 = *param_1;
    if (bVar1 < 0x3c) goto LAB_01a34860;
    do {
      do {
        param_1 = param_1 + 1;
LAB_01a34854:
        bVar1 = *param_1;
      } while (0x3b < bVar1);
LAB_01a34860:
      uVar5 = (ulong)bVar1;
    } while ((1L << (uVar5 & 0x3f) & 0xc00100100000001U) == 0);
  }
  else {
    if (bVar2) {
      FUN_01a34118(local_68,local_70,local_78,local_80,local_88,uVar5,iVar4,0xffffffff,param_2,
                   param_3);
      uVar5 = (ulong)*param_1;
      if (*param_1 == 0) {
        return local_9c;
      }
      goto LAB_01a34568;
    }
LAB_01a3490c:
    bVar1 = *param_1;
    if (bVar1 < 0x3c) goto LAB_01a3492c;
    do {
      do {
        param_1 = param_1 + 1;
        bVar1 = *param_1;
      } while (0x3b < bVar1);
LAB_01a3492c:
      uVar5 = (ulong)bVar1;
    } while ((1L << (uVar5 & 0x3f) & 0xc00100100000001U) == 0);
  }
  if ((int)uVar5 == 0) {
switchD_01a3458c_caseD_0:
    return local_9c;
  }
  goto LAB_01a34568;
}

