// functions/00e71 — 19 functions
#include "libGameKindred.h"




undefined8 FUN_00e7107c(uint *param_1,uint param_2,short param_3,uint *param_4)

{
  if (param_2 < *param_1) {
    do {
      if (*(short *)(*(long *)(param_1 + 2) + (ulong)param_2 * 2) == param_3) {
        if (param_4 != (uint *)0x0) {
          *param_4 = param_2;
        }
        return 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 < *param_1);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0xffffffff;
    return 0;
  }
  return 0;
}




undefined8
FUN_00e710d0(uint *param_1,uint param_2,ushort param_3,ushort param_4,uint param_5,long param_6,
            int *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined2 *puVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  uVar2 = *param_1;
  if (param_2 < uVar2) {
    lVar4 = *(long *)(param_1 + 2);
    uVar7 = (ulong)param_2;
    do {
      if ((*(ushort *)(lVar4 + uVar7 * 2) == (param_3 & 0xff)) &&
         ((uVar7 == 0 || ((param_5 ^ 1) & 1) != 0 ||
          (*(short *)(lVar4 + (ulong)((int)uVar7 - 1) * 2) != 0x5c)))) goto LAB_00e71154;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
    uVar7 = 0xffffffff;
LAB_00e71154:
    iVar6 = (int)uVar7;
    uVar1 = iVar6 + 1;
    if (uVar1 < uVar2) {
      uVar9 = 0;
      do {
        if ((*(ushort *)(lVar4 + (ulong)uVar1 * 2 + uVar9 * 2) == (param_4 & 0xff)) &&
           ((iVar8 = (int)uVar9, uVar1 + uVar9 == 0 || ((param_5 ^ 1) & 1) != 0 ||
            (*(short *)(lVar4 + (ulong)(uint)(iVar6 + iVar8) * 2) != 0x5c)))) {
          if (iVar6 == -1) {
            return 0;
          }
          if (iVar6 + iVar8 == -2) {
            return 0;
          }
          if ((param_6 != 0) && (FUN_00e705e4(param_6,uVar9 & 0xffffffff,0), uVar1 < uVar1 + iVar8))
          {
            puVar5 = (undefined2 *)(*(long *)(param_1 + 2) + (uVar7 & 0xffffffff) * 2);
            puVar3 = *(undefined2 **)(param_6 + 8);
            do {
              puVar5 = puVar5 + 1;
              uVar2 = (int)uVar9 - 1;
              uVar9 = (ulong)uVar2;
              *puVar3 = *puVar5;
              puVar3 = puVar3 + 1;
            } while (uVar2 != 0);
          }
          if (param_7 != (int *)0x0) {
            *param_7 = iVar6;
          }
          if (param_8 != (uint *)0x0) {
            *param_8 = uVar1 + iVar8;
          }
          return 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar1 + (int)uVar9 < uVar2);
    }
  }
  return 0;
}




void FUN_00e71248(uint *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar4 = *param_1;
  if ((uVar4 != 0) && (uVar5 = *param_3, uVar5 != 0)) {
    uVar8 = 0;
    if (uVar4 <= param_2) goto LAB_00e713c4;
    uVar11 = (ulong)param_2;
    do {
      if (*(short *)(*(long *)(param_1 + 2) + uVar11 * 2) == **(short **)(param_3 + 2)) {
        if (uVar4 <= uVar11) {
LAB_00e71304:
          iVar2 = (uVar4 - uVar5) + *param_4;
          if (iVar2 < 1) {
            *param_1 = 0;
          }
          else {
            uVar12 = uVar11 & 0xffffffff;
            local_58 = 0;
            local_50 = (void *)0x0;
            FUN_00e705e4(&local_58,iVar2,0);
            memmove(local_50,*(void **)(param_1 + 2),(uVar11 & 0x7fffffff) << 1);
            if (*param_4 == 0) {
              uVar9 = 0;
            }
            else {
              memmove((void *)((long)local_50 + uVar12 * 2),*(void **)(param_4 + 2),
                      (ulong)(*param_4 << 1));
              uVar9 = (ulong)*param_4;
            }
            memmove((void *)((long)local_50 + uVar9 * 2 + uVar12 * 2),
                    (void *)(*(long *)(param_1 + 2) + uVar12 * 2 + (ulong)*param_3 * 2),
                    (ulong)((*param_1 - (*param_3 + (int)uVar11)) * 2));
            uVar8 = *(undefined8 *)param_1;
            pvVar3 = *(void **)(param_1 + 2);
            *(undefined8 *)param_1 = local_58;
            *(void **)(param_1 + 2) = local_50;
            local_58 = uVar8;
            local_50 = pvVar3;
            if (pvVar3 != (void *)0x0) {
              operator_delete__(pvVar3);
              local_58 = 0;
              local_50 = (void *)0x0;
            }
          }
          uVar8 = 1;
          goto LAB_00e713c4;
        }
        uVar10 = 1;
        while (uVar1 = (int)uVar11 + uVar10,
              *(short *)(*(long *)(param_1 + 2) + (ulong)(uVar1 - 1) * 2) ==
              (*(short **)(param_3 + 2))[uVar10 - 1]) {
          if ((uVar4 <= uVar1) || (bVar7 = uVar5 <= uVar10, uVar10 = uVar10 + 1, bVar7))
          goto LAB_00e71304;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  uVar8 = 0;
LAB_00e713c4:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}




undefined4 FUN_00e713f0(uint *param_1,ulong param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar7 = *param_1;
  uVar11 = param_2 & 0xffffffff;
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if ((*param_3 != 0) && (uVar8 = 0, (uint)param_2 < uVar7)) {
      uVar8 = 0;
      do {
        if ((uint)uVar11 < uVar7) {
          uVar4 = *param_3;
          uVar11 = uVar11 & 0xffffffff;
          do {
            if (*(short *)(*(long *)(param_1 + 2) + uVar11 * 2) == **(short **)(param_3 + 2)) {
              iVar10 = (int)uVar11;
              if ((uVar7 <= uVar11) || (uVar4 == 0)) {
LAB_00e714c4:
                iVar1 = (uVar7 - uVar4) + *param_4;
                if (iVar1 < 1) {
                  *param_1 = 0;
                  uVar8 = 1;
                  goto LAB_00e715a8;
                }
                uVar12 = uVar11 & 0xffffffff;
                local_58 = 0;
                local_50 = (void *)0x0;
                FUN_00e705e4(&local_58,iVar1,0);
                memmove(local_50,*(void **)(param_1 + 2),(uVar11 & 0x7fffffff) << 1);
                uVar7 = 0;
                if (*param_4 != 0) {
                  memmove((void *)((long)local_50 + uVar12 * 2),*(void **)(param_4 + 2),
                          (ulong)(*param_4 << 1));
                  uVar7 = *param_4;
                }
                memmove((void *)((long)local_50 + (ulong)uVar7 * 2 + uVar12 * 2),
                        (void *)(*(long *)(param_1 + 2) + uVar12 * 2 + (ulong)*param_3 * 2),
                        (ulong)((*param_1 - (*param_3 + iVar10)) * 2));
                uVar2 = *(undefined8 *)param_1;
                pvVar3 = *(void **)(param_1 + 2);
                *(undefined8 *)param_1 = local_58;
                *(void **)(param_1 + 2) = local_50;
                uVar11 = (ulong)(*param_4 + iVar10);
                if (pvVar3 == (void *)0x0) {
                  uVar7 = (uint)local_58;
                  local_58 = uVar2;
                }
                else {
                  local_58 = uVar2;
                  local_50 = pvVar3;
                  operator_delete__(pvVar3);
                  local_58 = 0;
                  uVar7 = *param_1;
                }
                local_50 = (void *)0x0;
                uVar8 = 1;
                break;
              }
              uVar9 = 1;
              while (*(short *)(*(long *)(param_1 + 2) + (ulong)((iVar10 + uVar9) - 1) * 2) ==
                     (*(short **)(param_3 + 2))[uVar9 - 1]) {
                if ((uVar7 <= iVar10 + uVar9) || (bVar6 = uVar4 <= uVar9, uVar9 = uVar9 + 1, bVar6))
                goto LAB_00e714c4;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
      } while ((uint)uVar11 < uVar7);
    }
  }
LAB_00e715a8:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}




void FUN_00e715d8(undefined8 param_1)

{
  FUN_00e715e0(param_1,param_1);
  return;
}




void FUN_00e715e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ushort uVar8;
  
  if (param_2 != param_1) {
    FUN_00e705e4(param_2,*param_1,0);
  }
  uVar2 = *param_1;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    iVar4 = 0;
    uVar6 = 0;
    do {
      uVar8 = *(ushort *)(lVar7 + (long)(int)uVar6 * 2);
      if (uVar8 == 0x5c) {
        uVar6 = (long)(int)uVar6 + 1;
        uVar3 = *(ushort *)(lVar7 + uVar6 * 2);
        if (uVar3 < 0x62) {
          uVar8 = uVar3;
          if ((uVar3 != 0x22) && (uVar3 != 0x5c)) {
            if (uVar3 != 0x61) goto switchD_00e71688_caseD_6f;
            uVar8 = 7;
          }
        }
        else {
          uVar8 = 10;
          switch(uVar3) {
          case 0x6e:
            break;
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x73:
          case 0x75:
switchD_00e71688_caseD_6f:
            *(undefined2 *)(lVar5 + (long)iVar4 * 2) = 0x5c;
            uVar8 = *(ushort *)(lVar7 + uVar6 * 2);
            iVar4 = iVar4 + 1;
            break;
          case 0x72:
            uVar8 = 0xd;
            break;
          case 0x74:
            uVar8 = 9;
            break;
          case 0x76:
            uVar8 = 0xb;
            break;
          default:
            if (uVar3 == 0x62) {
              uVar8 = 8;
            }
            else {
              if (uVar3 != 0x66) goto switchD_00e71688_caseD_6f;
              uVar8 = 0xc;
            }
          }
        }
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      *(ushort *)(lVar5 + (long)iVar4 * 2) = uVar8;
      iVar4 = iVar4 + 1;
    } while (uVar1 < uVar2);
  }
  FUN_00e705e4(param_2,iVar4,0);
  return;
}




void FUN_00e71700(uint *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = *(long *)(param_1 + 2);
    lVar2 = 0;
    do {
      if (*(short *)(lVar1 + lVar2) != 0x20) break;
      lVar2 = lVar2 + 2;
    } while ((ulong)*param_1 * 2 - lVar2 != 0);
    if (lVar1 + lVar2 != lVar1) {
      FUN_00e71740();
      return;
    }
  }
  return;
}




void FUN_00e71740(uint *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 1);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined2 *)(lVar3 + (ulong)uVar1 * 2) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00e717ac(uint *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  lVar1 = lVar3 + (ulong)*param_1 * 2;
  lVar4 = (ulong)*param_1 << 1;
  do {
    if (lVar4 == 0) goto LAB_00e717dc;
    lVar2 = lVar3 + lVar4;
    lVar4 = lVar4 + -2;
  } while (*(short *)(lVar2 + -2) == 0x20);
  lVar3 = lVar3 + lVar4 + 2;
LAB_00e717dc:
  if (lVar3 != lVar1) {
    FUN_00e71740();
    return;
  }
  return;
}




void FUN_00e717ec(undefined8 param_1)

{
  FUN_00e71700();
  FUN_00e717ac(param_1);
  return;
}




void FUN_00e71810(undefined8 *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (param_3 <= uVar2) {
    uVar1 = param_3;
  }
  if (param_4 + param_3 <= uVar2) {
    uVar2 = param_4 + param_3;
  }
  FUN_00e71844(param_1,0,*(long *)(param_2 + 2) + (ulong)uVar1 * 2,
               *(long *)(param_2 + 2) + (ulong)uVar2 * 2);
  return;
}




undefined2 * FUN_00e71844(uint *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    uVar4 = param_1[1];
    puVar10 = *(undefined2 **)(param_1 + 2);
    uVar13 = (ulong)((long)param_4 - (long)param_3) >> 1;
    uVar12 = (uint)uVar13;
    if (uVar4 - uVar1 < uVar12) {
      uVar1 = uVar1 + uVar12;
      if (uVar4 < 0x20) {
        uVar4 = uVar4 << 1;
      }
      else if (uVar4 == 0xffffffff) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uVar4 + 0x10) - (uVar4 & 0xf);
      }
      uVar12 = uVar1;
      if (uVar1 <= uVar4) {
        uVar12 = uVar4;
      }
      puVar3 = operator_new__((ulong)uVar12 << 1);
      puVar5 = puVar3;
      for (puVar9 = puVar10; puVar9 != param_2; puVar9 = puVar9 + 1) {
        *puVar5 = *puVar9;
        puVar5 = puVar5 + 1;
      }
      puVar9 = puVar3 + ((ulong)((long)param_2 - (long)puVar10) >> 1 & 0xffffffff);
      puVar5 = puVar9;
      do {
        puVar11 = param_3 + 1;
        *puVar5 = *param_3;
        puVar5 = puVar5 + 1;
        param_3 = puVar11;
      } while (param_4 != puVar11);
      if (puVar10 + uVar6 != param_2) {
        puVar5 = puVar9 + (uVar13 & 0xffffffff);
        do {
          puVar11 = param_2 + 1;
          *puVar5 = *param_2;
          puVar5 = puVar5 + 1;
          param_2 = puVar11;
        } while (puVar10 + uVar6 != puVar11);
      }
      if (puVar10 != (undefined2 *)0x0) {
        operator_delete__(puVar10);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined2 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar12;
      param_2 = puVar9;
    }
    else {
      puVar9 = puVar10 + uVar6;
      uVar7 = (ulong)((long)puVar9 - (long)param_2) >> 1;
      uVar13 = (ulong)((long)param_4 - (long)param_3) >> 1 & 0xffffffff;
      puVar5 = param_2;
      if (uVar12 < (uint)uVar7) {
        if (uVar13 != 0) {
          lVar8 = 0;
          do {
            *(undefined2 *)((long)puVar9 + lVar8) =
                 *(undefined2 *)((long)puVar9 + lVar8 + uVar13 * -2);
            lVar8 = lVar8 + 2;
          } while (lVar8 != uVar13 * 2);
        }
        lVar8 = (long)puVar9 + (uVar13 * -2 - (long)param_2);
        puVar9 = param_2;
        if (lVar8 != 0) {
          puVar5 = puVar10 + ((uVar6 - 1) - uVar13);
          do {
            lVar2 = lVar8 + uVar13 * 2;
            lVar8 = lVar8 + -2;
            *(undefined2 *)((long)param_2 + lVar2 + -2) = *puVar5;
            puVar5 = puVar5 + -1;
          } while (lVar8 != 0);
        }
        do {
          puVar5 = param_3 + 1;
          *puVar9 = *param_3;
          puVar9 = puVar9 + 1;
          param_3 = puVar5;
        } while (param_4 != puVar5);
      }
      else {
        for (; puVar9 != puVar5; puVar5 = puVar5 + 1) {
          puVar5[uVar13] = *puVar5;
        }
        uVar6 = (ulong)((long)puVar9 - (long)param_2) >> 1 & 0xffffffff;
        for (puVar5 = param_3 + (uVar7 & 0xffffffff); puVar5 != param_4; puVar5 = puVar5 + 1) {
          *puVar9 = *puVar5;
          puVar9 = puVar9 + 1;
        }
        if (uVar6 != 0) {
          lVar8 = uVar6 << 1;
          puVar9 = param_2;
          do {
            lVar8 = lVar8 + -2;
            *puVar9 = *param_3;
            puVar9 = puVar9 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      param_2 = puVar10 + ((ulong)((long)param_2 - (long)puVar10) >> 1 & 0xffffffff);
      *param_1 = uVar1 + uVar12;
    }
  }
  return param_2;
}




void FUN_00e71a70(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  
  *param_1 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"[param_2 >> 0x1c]
  ;
  cVar1 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"
          [param_2 >> 0x16 & 0xf];
  cVar2 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"
          [(ulong)(param_2 >> 0x14 & 3) + 0x10];
  cVar3 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"
          [param_2 >> 0x10 & 0xf];
  param_1[1] = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"
               [(ulong)(param_2 >> 0x1a & 3) + 0x10];
  param_1[2] = cVar1;
  param_1[3] = cVar2;
  param_1[4] = cVar3;
  if (param_3 == 0) {
    pcVar5 = param_1 + 5;
  }
  else {
    pcVar5 = param_1 + 6;
    param_1[5] = (char)param_3;
  }
  cVar1 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"
          [(ulong)(param_2 >> 10 & 3) + 0x10];
  cVar2 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"[param_2 >> 6 & 0xf]
  ;
  cVar3 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"
          [(ulong)(param_2 >> 4 & 3) + 0x10];
  cVar4 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"[param_2 & 0xf];
  *pcVar5 = "bdfghjklmnprstvzaiouIllegal character in uint-word \'%s\': \'%c\'.\n"
            [param_2 >> 0xc & 0xf];
  pcVar5[1] = cVar1;
  pcVar5[2] = cVar2;
  pcVar5[3] = cVar3;
  pcVar5[4] = cVar4;
  return;
}




uint FUN_00e71b10(char *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    switch(*param_1) {
    case 'a':
      uVar1 = uVar1 << 2;
      goto switchD_00e71bdc_caseD_63;
    case 'b':
      uVar1 = uVar1 << 4;
    case 'c':
    case 'e':
    case 'q':
    case 'w':
    case 'x':
    case 'y':
      goto switchD_00e71bdc_caseD_63;
    case 'd':
      uVar2 = 1;
      break;
    case 'f':
      uVar2 = 2;
      break;
    case 'g':
      uVar2 = 3;
      break;
    case 'h':
      uVar2 = 4;
      break;
    case 'i':
      uVar2 = 1;
      goto LAB_00e71ba4;
    case 'j':
      uVar2 = 5;
      break;
    case 'k':
      uVar2 = 6;
      break;
    case 'l':
      uVar2 = 7;
      break;
    case 'm':
      uVar2 = 8;
      break;
    case 'n':
      uVar2 = 9;
      break;
    case 'o':
      uVar2 = 2;
      goto LAB_00e71ba4;
    case 'p':
      uVar2 = 10;
      break;
    case 'r':
      uVar2 = 0xb;
      break;
    case 's':
      uVar2 = 0xc;
      break;
    case 't':
      uVar2 = 0xd;
      break;
    case 'u':
      uVar2 = 3;
LAB_00e71ba4:
      uVar1 = uVar2 | uVar1 << 2;
      goto switchD_00e71bdc_caseD_63;
    case 'v':
      uVar2 = 0xe;
      break;
    case 'z':
      uVar2 = 0xf;
      break;
    default:
      if (*param_1 == '\0') {
        return uVar1;
      }
      goto switchD_00e71bdc_caseD_63;
    }
    uVar1 = uVar2 | uVar1 << 4;
switchD_00e71bdc_caseD_63:
    param_1 = param_1 + 1;
  } while( true );
}




int FUN_00e71bf4(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = 0;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    iVar4 = 0;
    switch(cVar1) {
    case '0':
      break;
    case '1':
      iVar4 = 1;
      break;
    case '2':
      iVar4 = 2;
      break;
    case '3':
      iVar4 = 3;
      break;
    case '4':
      iVar4 = 4;
      break;
    case '5':
      iVar4 = 5;
      break;
    case '6':
      iVar4 = 6;
      break;
    case '7':
      iVar4 = 7;
      break;
    case '8':
      iVar4 = 8;
      break;
    case '9':
      iVar4 = 9;
      break;
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
switchD_00e71cc0_caseD_3a:
      fprintf((FILE *)glClearDepthf,"Illegal character in uint-word \'%s\': \'%c\'.\n",param_2);
                    /* WARNING: Subroutine does not return */
      exit(1);
    case 'A':
    case 'a':
      iVar4 = 10;
      break;
    case 'B':
    case 'b':
      iVar4 = 0xb;
      break;
    case 'C':
    case 'c':
      iVar4 = 0xc;
      break;
    case 'D':
    case 'd':
      iVar4 = 0xd;
      break;
    case 'E':
    case 'e':
      iVar4 = 0xe;
      break;
    case 'F':
    case 'f':
      iVar4 = 0xf;
      break;
    default:
      if (cVar1 == '\0') {
        return iVar2;
      }
      if (cVar1 != '-') goto switchD_00e71cc0_caseD_3a;
      iVar4 = 0x10;
    }
    if (param_1 <= iVar4) {
      fprintf((FILE *)glClearDepthf,"Numbers of base %d may not contain the digit \'%c\': \'%s\'.\n"
             );
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar2 = iVar4 + iVar2 * param_1;
    pcVar3 = pcVar3 + 1;
  } while( true );
}




void FUN_00e71d1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte local_58 [16];
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e71bf4(0x11,param_1);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  FUN_00e71a70(&local_40,uVar2,0x2d);
  FUN_008fa54c(local_58,&local_40);
  FUN_008fce60(param_2,local_58);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e71dac(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e71b10();
  iVar1 = printf("x%x ",uVar2 & 0xffffffff);
  return iVar1;
}




void FUN_00e71dd0(undefined8 param_1,long param_2,undefined1 *param_3,char *param_4,int param_5,
                 char *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  FILE *__stream;
  FILE *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  sVar4 = 0;
  if (((param_2 == 0) || (param_4 == (char *)0x0)) || (param_5 < 1)) goto LAB_00e71e98;
  __stream = fopen(param_6,"rb");
  local_60 = __stream;
  if (__stream == (FILE *)0x0) {
LAB_00e71e70:
    puVar1 = &DAT_01e277f2;
    if (param_3 != (undefined1 *)0x0) {
      puVar1 = param_3;
    }
    FUN_00e721dc(param_4,puVar1,(long)param_5,0);
  }
  else {
    iVar3 = FUN_00e71ec8(&local_60,param_1,param_2,0xffffffff,0xffffffff,param_4,param_5,0);
    fclose(__stream);
    if (iVar3 == 0) goto LAB_00e71e70;
  }
  sVar4 = strlen(param_4);
LAB_00e71e98:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar4);
}




void FUN_00e71ec8(undefined8 *param_1,char *param_2,char *param_3,int param_4,int param_5,
                 undefined8 param_6,int param_7,long *param_8)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  undefined4 local_474;
  byte local_470 [1040];
  size_t sVar5;
  
  lVar2 = tpidr_el0;
  lVar10 = *(long *)(lVar2 + 0x28);
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
    iVar13 = 0;
    if (param_4 < 0) goto LAB_00e71f34;
LAB_00e71f50:
    iVar13 = -1;
    do {
      pcVar6 = fgets((char *)local_470,0x400,(FILE *)*param_1);
      if (pcVar6 == (char *)0x0) goto LAB_00e7211c;
      pbVar15 = local_470;
      do {
        pbVar9 = pbVar15;
        pbVar15 = pbVar9 + 1;
        bVar1 = *pbVar9;
      } while (bVar1 - 1 < 0x20);
      pcVar6 = strchr((char *)pbVar9,0x5d);
    } while (((bVar1 != 0x5b) || (pcVar6 == (char *)0x0)) ||
            (((((int)pcVar6 - ((int)pbVar15 + -1)) + -1 != iVar3 ||
              (iVar4 = strncasecmp((char *)pbVar15,param_2,(long)iVar3), iVar14 = iVar13, iVar4 != 0
              )) && (iVar13 = iVar13 + 1, iVar14 = param_4, iVar13 != param_4))));
    if (param_4 < 0) goto LAB_00e71f3c;
    uVar7 = 0;
    if (iVar14 != param_4) goto LAB_00e72120;
    *pcVar6 = '\0';
LAB_00e71ffc:
    local_474 = 0;
  }
  else {
    sVar5 = strlen(param_2);
    iVar3 = (int)sVar5;
    iVar13 = iVar3;
    if (-1 < param_4) goto LAB_00e71f50;
LAB_00e71f34:
    iVar3 = iVar13;
    if (0 < iVar3) goto LAB_00e71f50;
LAB_00e71f3c:
    if (param_3 == (char *)0x0) {
      iVar13 = 0;
    }
    else {
      sVar5 = strlen(param_3);
      iVar13 = (int)sVar5;
    }
    iVar3 = -1;
    do {
      do {
        if (param_8 != (long *)0x0) {
          lVar8 = ftell((FILE *)*param_1);
          *param_8 = lVar8;
        }
        pcVar6 = fgets((char *)local_470,0x400,(FILE *)*param_1);
        if (pcVar6 == (char *)0x0) goto LAB_00e7211c;
        pbVar15 = local_470;
        do {
          bVar1 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar1 - 1 < 0x20);
        pbVar15 = (byte *)((long)&local_474 + 3);
        if (bVar1 == 0x5b) goto LAB_00e7211c;
        do {
          pbVar15 = pbVar15 + 1;
          bVar1 = *pbVar15;
        } while (bVar1 - 1 < 0x20);
        pbVar9 = (byte *)strchr((char *)pbVar15,0x3d);
        if (pbVar9 == (byte *)0x0) {
          pbVar9 = (byte *)strchr((char *)pbVar15,0x3a);
        }
      } while (((bVar1 == 0x3b) || (bVar1 == 0x23)) || (pbVar9 == (byte *)0x0));
      pbVar12 = pbVar9;
      if (iVar13 != 0) {
        do {
          pbVar11 = pbVar12;
          if (pbVar11 <= pbVar15) break;
          pbVar12 = pbVar11 + -1;
        } while (pbVar11[-1] - 1 < 0x20);
        if ((iVar13 == (int)pbVar11 - (int)pbVar15) &&
           (iVar4 = strncasecmp((char *)pbVar15,param_3,(long)iVar13), iVar14 = iVar3, iVar4 == 0))
        break;
      }
      iVar3 = iVar3 + 1;
      iVar14 = param_5;
    } while (iVar3 != param_5);
    if (-1 < param_5) {
      uVar7 = 0;
      if (iVar14 != param_5) goto LAB_00e72120;
      *pbVar9 = 0;
      sVar5 = strlen((char *)pbVar15);
      pbVar9 = pbVar15 + sVar5;
      do {
        pbVar12 = pbVar9;
        if (pbVar12 <= pbVar15) break;
        pbVar9 = pbVar12 + -1;
      } while (pbVar12[-1] - 1 < 0x20);
      *pbVar12 = 0;
      goto LAB_00e71ffc;
    }
    do {
      pbVar9 = pbVar9 + 1;
    } while (*pbVar9 - 1 < 0x20);
    pbVar15 = (byte *)FUN_00e728d0(pbVar9,&local_474);
  }
  FUN_00e721dc(param_6,pbVar15,(long)param_7,local_474);
  uVar7 = 1;
LAB_00e72120:
  if (*(long *)(lVar2 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
LAB_00e7211c:
  uVar7 = 0;
  goto LAB_00e72120;
}

