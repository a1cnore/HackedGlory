// functions/009ec — 18 functions
#include "libGameKindred.h"




void FUN_009ec078(uint *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_009ed21c(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar7 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x28;
  puVar8 = (undefined8 *)(lVar7 + -0x20);
  *puVar8 = 0;
  *(undefined8 *)(lVar7 + -0x18) = 0;
  *(undefined8 **)(lVar7 + -0x28) = puVar8;
  plVar9 = (long *)*param_2;
  while (plVar9 != param_2 + 1) {
    FUN_009ed38c(lVar7 + -0x28,puVar8,plVar9 + 4,plVar9 + 4);
    plVar5 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      plVar5 = plVar9 + 2;
      bVar2 = (long *)*(long *)*plVar5 != plVar9;
      plVar9 = (long *)*plVar5;
      if (bVar2) {
        do {
          lVar6 = *plVar5;
          plVar5 = (long *)(lVar6 + 0x10);
          plVar9 = (long *)*plVar5;
        } while (*plVar9 != lVar6);
      }
    }
    else {
      do {
        plVar9 = plVar5;
        plVar5 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  thunk_FUN_00e7051c(lVar7 + -0x10,param_2 + 3);
  return;
}




void FUN_009ec1a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c50d8;
  FUN_009ec470(param_1 + 7);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_009ec1f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c50d8;
  FUN_009ec470(param_1 + 7);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009ec250(uint *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        if ((*(byte *)(lVar1 + 0x68) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        if ((*(byte *)(lVar1 + 0x50) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x60));
        }
        lVar1 = lVar3 + lVar4;
        if ((*(byte *)(lVar1 + 0x38) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x48));
        }
        if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x30));
        }
        if ((*(byte *)(lVar3 + lVar4 + 8) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x18));
        }
        lVar4 = lVar4 + 0x80;
      } while ((ulong)uVar2 * 0x80 - lVar4 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_009ec324(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 0x20));
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x20) = 0;
        }
        FUN_00948ab4(lVar1,*(undefined8 *)(lVar1 + 8));
        lVar2 = lVar2 + -0x28;
        lVar1 = lVar1 + 0x28;
      } while (lVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_009ec3a8(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x28;
        puVar2 = puVar2 + 5;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_009ec424(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_009ec424(param_1,*param_2);
    FUN_009ec424(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_009ec470(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar4 = (long *)plVar2[1];
      FUN_009e9c8c(plVar2 + 2);
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}




undefined8 * FUN_009ec4e0(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_009ec598(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_009ec598(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_009ec60c:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_009ec60c;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void FUN_009ec648(long *param_1,char *param_2,byte *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  void *pvVar9;
  long *plVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  byte *pbStack_80;
  char *local_78;
  char local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if (*param_1 == 0) {
    pvVar9 = operator_new(1);
    *param_1 = (long)pvVar9;
    param_1[1] = (long)pvVar9;
  }
  lVar15 = 0;
  param_1[4] = 0;
  pcVar1 = param_2;
  for (pbVar16 = param_3; pbVar16 != (byte *)0x0; pbVar16 = pbVar16 + -1) {
    if (*pcVar1 == '/') {
      lVar15 = lVar15 + 1;
      param_1[4] = lVar15;
    }
    pcVar1 = pcVar1 + 1;
  }
  if (param_3 + lVar15 * 0x10 == (byte *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = malloc((size_t)(param_3 + lVar15 * 0x10));
  }
  param_1[2] = (long)(plVar10 + lVar15 * 2);
  param_1[3] = (long)plVar10;
  cVar4 = *param_2;
  pbVar16 = (byte *)(ulong)(cVar4 == '#');
  if ((pbVar16 == param_3) || (param_2[(long)pbVar16] == '/')) {
    if (pbVar16 < param_3) {
      pbVar19 = (byte *)(plVar10 + lVar15 * 2);
      do {
        pbVar16 = pbVar16 + 1;
        bVar8 = true;
        *plVar10 = (long)pbVar19;
        pbVar17 = pbVar16;
        pbVar18 = pbVar19;
        if (pbVar16 < param_3) {
          do {
            pbVar2 = (byte *)(param_2 + (long)pbVar17);
            bVar5 = *pbVar2;
            uVar14 = (uint)bVar5;
            pbVar16 = pbVar17;
            pbVar19 = pbVar18;
            if (bVar5 == 0x2f) break;
            if (cVar4 == '#') {
              if (bVar5 != 0x25) {
                uVar13 = FUN_009ec954(param_1,bVar5);
                if ((uVar13 & 1) == 0) goto LAB_009ec7e0;
                uVar12 = 4;
                goto LAB_009ec8e4;
              }
              local_70 = '\x01';
              local_a0 = pbVar18;
              local_98 = pbVar18;
              local_90 = pbVar18;
              local_88 = pbVar2;
              pbStack_80 = pbVar2;
              local_78 = param_2 + (long)param_3;
              uVar13 = FUN_009ec9b0(&local_88,&local_a0);
              if (((uVar13 & 1) == 0) || (local_70 == '\0')) {
                uVar12 = 3;
                goto LAB_009ec8e4;
              }
              if ((long)local_98 - (long)pbVar18 == 1) {
                uVar14 = (uint)*pbVar18;
                pbVar17 = local_88 + (long)(pbVar17 + (-1 - (long)pbStack_80));
                goto LAB_009ec7e0;
              }
              bVar8 = false;
              pbVar19 = pbVar18 + ((long)local_98 - (long)pbVar18);
              pbVar16 = local_88 + ((long)pbVar17 - (long)pbStack_80);
            }
            else {
LAB_009ec7e0:
              pbVar16 = pbVar17 + 1;
              if (uVar14 == 0x7e) {
                if (param_3 <= pbVar16) {
LAB_009ec8ec:
                  *(undefined4 *)(param_1 + 6) = 2;
                  goto LAB_009ec8f8;
                }
                if (param_2[(long)pbVar16] == '0') {
                  uVar14 = 0x7e;
                }
                else {
                  if (param_2[(long)pbVar16] != '1') goto LAB_009ec8ec;
                  uVar14 = 0x2f;
                }
                pbVar16 = pbVar17 + 2;
              }
              bVar8 = (bool)(bVar8 & uVar14 - 0x30 < 10);
              pbVar19 = pbVar18 + 1;
              *pbVar18 = (byte)uVar14;
            }
            pbVar17 = pbVar16;
            pbVar18 = pbVar19;
          } while (pbVar16 < param_3);
          iVar11 = (int)*plVar10;
        }
        else {
          iVar11 = (int)pbVar19;
        }
        iVar11 = (int)pbVar19 - iVar11;
        *(int *)(plVar10 + 1) = iVar11;
        *pbVar19 = 0;
        uVar14 = 0xffffffff;
        if ((bVar8) && (iVar11 != 0)) {
          uVar3 = *(uint *)(plVar10 + 1);
          if (uVar3 < 2) {
            if (uVar3 != 0) goto LAB_009ec87c;
            uVar14 = 0;
          }
          else {
            if (*(char *)*plVar10 != '0') {
LAB_009ec87c:
              uVar13 = 0;
              bVar8 = true;
              uVar14 = 0;
              do {
                uVar6 = ((uint)*(byte *)(*plVar10 + uVar13) + uVar14 * 10) - 0x30;
                bVar8 = (bool)(bVar8 & uVar14 <= uVar6);
                if (uVar14 > uVar6) break;
                uVar13 = uVar13 + 1;
                uVar14 = uVar6;
              } while (uVar13 < uVar3);
              if (bVar8) goto LAB_009ec8c8;
            }
            uVar14 = 0xffffffff;
          }
        }
LAB_009ec8c8:
        *(uint *)((long)plVar10 + 0xc) = uVar14;
        plVar10 = plVar10 + 2;
        pbVar19 = pbVar19 + 1;
      } while (pbVar16 < param_3);
    }
    *(undefined4 *)(param_1 + 6) = 0;
  }
  else {
    uVar12 = 1;
LAB_009ec8e4:
    *(undefined4 *)(param_1 + 6) = uVar12;
LAB_009ec8f8:
    free((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    param_1[5] = (long)pbVar16;
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009ec954(undefined8 param_1,byte param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((0x19 < (byte)((param_2 & 0xdf) + 0xbf)) && (9 < (byte)(param_2 - 0x30))) {
    uVar1 = (uint)param_2;
    if ((uVar1 - 0x2d < 2) || (uVar1 == 0x5f)) {
      return 0;
    }
    uVar2 = 0;
    if (uVar1 != 0x7e) {
      uVar2 = 1;
    }
  }
  return uVar2;
}




bool FUN_009ec9b0(undefined8 param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  char *pcVar7;
  long *plVar8;
  
  cVar2 = FUN_009ecbec();
  plVar8 = (long *)(param_2 + 8);
  pcVar7 = (char *)*plVar8;
  *plVar8 = (long)(pcVar7 + 1);
  *pcVar7 = cVar2;
  if (-1 < cVar2) {
    return true;
  }
  bVar1 = false;
  switch((&DAT_01b9ae6e)[(ulong)(uint)(int)cVar2 & 0xff]) {
  case 2:
    bVar5 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar5;
    return (bVar5 & 0xc0) == 0x80;
  case 3:
    bVar4 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar5 = bVar4 & 0xc0;
    break;
  case 4:
    bVar4 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar5 = bVar4 & 0xe0;
    break;
  case 5:
    bVar4 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar5 = (&DAT_01b9ae6e)[bVar4];
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    bVar3 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar3;
    bVar4 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar5 = (bVar3 & 0xc0) == 0x80 & bVar5 >> 4 & (bVar4 & 0xc0) == 0x80;
    goto LAB_009ecb50;
  case 6:
    bVar5 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar1 = (bVar5 & 0xc0) == 0x80;
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar5;
    goto LAB_009ecb8c;
  default:
    goto switchD_009eca1c_caseD_7;
  case 10:
    bVar4 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar5 = (&DAT_01b9ae6e)[bVar4];
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    bVar4 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar5 = (bVar4 & 0xc0) == 0x80 & bVar5 >> 5;
LAB_009ecb50:
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    return bVar5 != 0;
  case 0xb:
    bVar5 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar1 = (ulong)bVar5 - 0x90 < 0x30;
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar5;
LAB_009ecb8c:
    bVar5 = FUN_009ecbec(param_1);
    pbVar6 = (byte *)*plVar8;
    bVar1 = (bool)(bVar1 & (bVar5 & 0xc0) == 0x80);
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar5;
    goto LAB_009ecbb4;
  }
  bVar1 = bVar5 == 0x80;
  *plVar8 = (long)(pbVar6 + 1);
  *pbVar6 = bVar4;
LAB_009ecbb4:
  bVar5 = FUN_009ecbec(param_1);
  pbVar6 = (byte *)*plVar8;
  *plVar8 = (long)(pbVar6 + 1);
  *pbVar6 = bVar5;
  bVar1 = (bool)(bVar1 & (bVar5 & 0xc0) == 0x80);
switchD_009eca1c_caseD_7:
  return bVar1;
}




int FUN_009ecbec(long *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  
  pcVar4 = (char *)*param_1;
  if ((*pcVar4 == '%') && (pcVar4 + 3 <= (char *)param_1[2])) {
    iVar3 = 0;
    *param_1 = (long)(pcVar4 + 1);
    lVar5 = 0;
    do {
      bVar2 = pcVar4[lVar5 + 1];
      uVar6 = bVar2 - 0x30;
      if (9 < uVar6) {
        uVar6 = (uint)bVar2;
        if (bVar2 - 0x41 < 6) {
          uVar6 = uVar6 - 0x37;
        }
        else {
          if (5 < uVar6 - 0x61) goto LAB_009ecc0c;
          uVar6 = uVar6 - 0x57;
        }
      }
      lVar1 = lVar5 + 1;
      iVar3 = uVar6 + iVar3 * 0x10;
      *param_1 = (long)(pcVar4 + lVar5 + 2);
      lVar5 = lVar1;
    } while ((uint)lVar1 < 2);
  }
  else {
LAB_009ecc0c:
    iVar3 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return iVar3;
}




long * FUN_009ecc84(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x18);
    plVar8 = plVar5;
    do {
      if ((char)param_2[2] != '\x04') {
        if ((char)param_2[2] == '\x03') {
          local_70 = *plVar8;
          pcVar6 = (char *)(local_70 + -1);
          do {
            pcVar6 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          local_60 = 0x100005;
          local_68 = (ulong)(uint)((int)pcVar6 - (int)local_70);
          lVar7 = *param_2;
          if ((int)param_2[1] != 0) {
            do {
              uVar3 = FUN_008fd23c(&local_70,lVar7);
              if ((uVar3 & 1) != 0) break;
              lVar7 = lVar7 + 0x30;
            } while (lVar7 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30);
          }
          if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar7) {
            plVar5 = *(long **)(param_1 + 0x18);
            lVar4 = *(long *)(param_1 + 0x20);
            param_2 = (long *)(lVar7 + 0x18);
            goto LAB_009ecd84;
          }
        }
LAB_009ecd98:
        param_2 = (long *)0x0;
        break;
      }
      uVar1 = *(uint *)((long)plVar8 + 0xc);
      if ((uVar1 == 0xffffffff) || (*(uint *)(param_2 + 1) <= uVar1)) goto LAB_009ecd98;
      param_2 = (long *)(*param_2 + (ulong)uVar1 * 0x18);
LAB_009ecd84:
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar5 + lVar4 * 2);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}




void FUN_009ecdd0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  thunk_FUN_00e7051c();
  thunk_FUN_00e7051c(param_1 + 0x10,param_2 + 0x10);
  thunk_FUN_00e7051c(param_1 + 0x20,param_2 + 0x20);
  FUN_008fcdb8(param_1 + 0x30,param_2 + 0x30);
  FUN_008fcdb8(param_1 + 0x48,param_2 + 0x48);
  thunk_FUN_00e7051c(param_1 + 0x60,param_2 + 0x60);
  FUN_008fcdb8(param_1 + 0x70,param_2 + 0x70);
  FUN_008fcdb8(param_1 + 0x88,param_2 + 0x88);
  thunk_FUN_00e7051c(param_1 + 0xa0,param_2 + 0xa0);
  FUN_008fcdb8(param_1 + 0xb0,param_2 + 0xb0);
  FUN_008fcdb8(param_1 + 200,param_2 + 200);
  FUN_008fcdb8(param_1 + 0xe0,param_2 + 0xe0);
  FUN_008fcdb8(param_1 + 0xf8,param_2 + 0xf8);
  FUN_008fcdb8(param_1 + 0x110,param_2 + 0x110);
  FUN_008fcdb8(param_1 + 0x128,param_2 + 0x128);
  FUN_008fcdb8(param_1 + 0x140,param_2 + 0x140);
  FUN_008fcdb8(param_1 + 0x158,param_2 + 0x158);
  FUN_008fcdb8(param_1 + 0x170,param_2 + 0x170);
  uVar1 = *(undefined8 *)(param_2 + 0x1a6);
  *(undefined8 *)(param_1 + 0x1ae) = *(undefined8 *)(param_2 + 0x1ae);
  *(undefined8 *)(param_1 + 0x1a6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  return;
}




void FUN_009ecef0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009ed138(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    puVar4 = puVar2 + (ulong)*param_2 * 5;
    do {
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
      *puVar3 = *puVar2;
      FUN_008fcdb8(puVar3 + 2,puVar2 + 2);
      puVar2 = puVar2 + 5;
      puVar3 = puVar3 + 5;
    } while (puVar2 != puVar4);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_009ecf78(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009ed21c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    puVar7 = *(undefined8 **)(param_2 + 2);
    puVar5 = *(undefined8 **)(param_1 + 2);
    puVar8 = puVar7 + (ulong)*param_2 * 5;
    do {
      puVar6 = puVar5 + 1;
      *puVar6 = 0;
      puVar5[2] = 0;
      *puVar5 = puVar6;
      plVar9 = (long *)*puVar7;
      while (plVar9 != puVar7 + 1) {
        FUN_009ed38c(puVar5,puVar6,plVar9 + 4,plVar9 + 4);
        plVar3 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar3 = plVar9 + 2;
          bVar1 = *(long **)*plVar3 != plVar9;
          plVar9 = (long *)*plVar3;
          if (bVar1) {
            do {
              lVar4 = *plVar3;
              plVar3 = (long *)(lVar4 + 0x10);
              plVar9 = (long *)*plVar3;
            } while (*plVar9 != lVar4);
          }
        }
        else {
          do {
            plVar9 = plVar3;
            plVar3 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
      thunk_FUN_00e7051c(puVar5 + 3,puVar7 + 3);
      puVar7 = puVar7 + 5;
      puVar5 = puVar5 + 5;
    } while (puVar7 != puVar8);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}

