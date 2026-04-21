// functions/00d1f — 26 functions
#include "libGameKindred.h"




void FUN_00d1f0e0(float param_1,float param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float local_68;
  float local_60;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d1f420();
  plVar6 = *(long **)(param_5 + 0x1420);
  if ((plVar6 != (long *)0x0) && (plVar3 = (long *)*plVar6, plVar3 != (long *)0x0)) {
    if ((int)plVar6[1] == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((((lVar4 != 0) &&
           (uVar1 = *(uint *)(lVar4 + 0x2f4),
           (*(uint *)(param_3 + 0x34) & (uVar1 ^ 0xffffffff)) == 0)) &&
          ((*(uint *)(param_3 + 0x38) == 0xffffffff || ((*(uint *)(param_3 + 0x38) & uVar1) != 0))))
         && ((*(uint *)(param_3 + 0x3c) & uVar1) == 0)) {
        FUN_00d55794(lVar4,local_58,0);
        fVar7 = (local_68 - local_58[0]) * (local_68 - local_58[0]) +
                (local_60 - local_50) * (local_60 - local_50);
        if ((param_1 * param_1 <= fVar7) && (fVar7 <= param_2 * param_2)) {
          uVar5 = 1;
          goto LAB_00d1f1e4;
        }
      }
    }
    else {
      *plVar6 = 0;
      *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
    }
  }
  uVar5 = 2;
LAB_00d1f1e4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00d1f210(void)

{
  return;
}




undefined4
FUN_00d1f214(float param_1,float param_2,long param_3,undefined8 param_4,long *param_5,uint param_6,
            long param_7,uint param_8)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float local_a8 [2];
  float local_a0;
  float local_98 [2];
  float local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  FUN_00d1f420(param_3,param_4,param_7,local_a8);
  if (param_6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    fVar9 = 3.4028235e+38;
    do {
      plVar4 = (long *)*param_5;
      if (plVar4 != (long *)0x0) {
        if ((int)param_5[1] == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if ((((lVar5 != 0) &&
               (uVar1 = *(uint *)(lVar5 + 0x2f4),
               (*(uint *)(param_3 + 0x34) & (uVar1 ^ 0xffffffff)) == 0)) &&
              ((*(uint *)(param_3 + 0x38) == 0xffffffff ||
               ((*(uint *)(param_3 + 0x38) & uVar1) != 0)))) &&
             ((*(uint *)(param_3 + 0x3c) & uVar1) == 0)) {
            FUN_00d55794(lVar5,local_98,0);
            fVar10 = (local_a8[0] - local_98[0]) * (local_a8[0] - local_98[0]) +
                     (local_a0 - local_90) * (local_a0 - local_90);
            if ((param_1 * param_1 <= fVar10) && (fVar10 <= param_2 * param_2)) {
              if (*(char *)(param_3 + 0x65) == '\0') {
                uVar3 = FUN_00d55870(param_4);
                uVar6 = FUN_00d7d0a0(*(undefined8 *)(lVar5 + 0x80),uVar3);
                if ((uVar6 & 1) == 0) goto LAB_00d1f3c8;
              }
              if ((*(char *)(param_3 + 0x66) != '\0') || ((*(byte *)(lVar5 + 0x2f9) & 1) == 0)) {
                if (*(char *)(param_3 + 0x67) == '\0') {
                  uVar8 = 1;
                  break;
                }
                if (fVar9 <= fVar10) {
                  uVar8 = 1;
                }
                else {
                  if ((param_8 & 1) == 0) {
                    *(long **)(param_7 + 0x1428) = param_5;
                  }
                  else {
                    *(long **)(param_7 + 0x1420) = param_5;
                  }
                  uVar8 = 1;
                  fVar9 = fVar10;
                }
              }
            }
          }
        }
        else {
          *param_5 = 0;
          *(undefined4 *)(param_5 + 1) = DAT_03214ce8;
        }
      }
LAB_00d1f3c8:
      uVar7 = uVar7 + 1;
      param_5 = param_5 + 8;
    } while (uVar7 < param_6);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d1f420(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_4 + 1) = DAT_03218f38;
  *param_4 = DAT_03218f30;
  if (*(int *)(param_1 + 0x2c) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = FUN_00e6a474(uVar3);
    uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
    puVar2 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x1688) + 0x18))(param_3 + 0x1688,uVar1)
    ;
    uVar1 = puVar2[1];
    *(undefined4 *)param_4 = *puVar2;
    *(undefined4 *)(param_4 + 1) = uVar1;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_00d55794(param_2,param_4,0);
    return;
  }
  return;
}




void FUN_00d1f4d4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028194a0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3f800000;
  return;
}




void FUN_00d1f50c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined4 FUN_00d1f514(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(float *)(param_1 + 0x24) <= *(float *)(param_2 + 0x58)) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d1f52c(void)

{
  return;
}




void FUN_00d1f530(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819528;
  thunk_FUN_00d9ff34((long)param_1 + 0x24,&DAT_01bca6e8);
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  param_1[5] = 0;
  return;
}




void FUN_00d1f578(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  return;
}




void FUN_00d1f584(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d1f58c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d1f594(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d1f59c(long param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 1;
  return;
}




void FUN_00d1f5a8(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d25570(param_2);
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    if (lVar4 != 0) {
LAB_00d1f608:
      uVar8 = FUN_00d9ea34();
LAB_00d1f60c:
      local_6c = 0xffffffff;
      uVar5 = FUN_00d6bbac(uVar8,*(undefined4 *)(param_1 + 0x24),&local_6c);
      if (((uVar5 & 1) != 0) &&
         (uVar2 = FUN_00d6bb04(uVar8,local_6c), *(uint *)(param_1 + 0x28) <= uVar2)) {
LAB_00d1f648:
        uVar8 = 1;
        goto LAB_00d1f864;
      }
    }
    break;
  case 1:
    uVar2 = *(uint *)(param_2 + 0x1330);
    if (uVar2 != 0) {
      uVar5 = 0;
      plVar9 = (long *)(param_2 + 0x1230);
      do {
        plVar6 = (long *)*plVar9;
        if (plVar6 != (long *)0x0) {
          if ((int)plVar9[1] == (int)plVar6[1]) {
            lVar4 = (**(code **)(*plVar6 + 0x10))();
            if ((lVar4 != 0) &&
               ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) {
              uVar8 = FUN_00d9ea34();
              local_6c = 0xffffffff;
              uVar7 = FUN_00d6bbac(uVar8,*(undefined4 *)(param_1 + 0x24),&local_6c);
              if (((uVar7 & 1) != 0) &&
                 (uVar3 = FUN_00d6bb04(uVar8,local_6c), *(uint *)(param_1 + 0x28) <= uVar3)) {
                *(long **)(param_2 + 0x1428) = plVar9;
                goto LAB_00d1f648;
              }
            }
          }
          else {
            *plVar9 = 0;
            *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
          }
        }
        uVar5 = uVar5 + 1;
        plVar9 = plVar9 + 8;
      } while (uVar5 < uVar2);
    }
    break;
  case 2:
    uVar2 = *(uint *)(param_2 + 0x1228);
    if (uVar2 != 0) {
      uVar5 = 0;
      plVar9 = (long *)(param_2 + 0x1028);
      do {
        plVar6 = (long *)*plVar9;
        if (plVar6 != (long *)0x0) {
          if ((int)plVar9[1] == (int)plVar6[1]) {
            lVar4 = (**(code **)(*plVar6 + 0x10))();
            if ((lVar4 != 0) &&
               ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) {
              uVar8 = FUN_00d9ea34();
              local_6c = 0xffffffff;
              uVar7 = FUN_00d6bbac(uVar8,*(undefined4 *)(param_1 + 0x24),&local_6c);
              if (((uVar7 & 1) != 0) &&
                 (uVar3 = FUN_00d6bb04(uVar8,local_6c), *(uint *)(param_1 + 0x28) <= uVar3)) {
                *(long **)(param_2 + 0x1420) = plVar9;
                goto LAB_00d1f648;
              }
            }
          }
          else {
            *plVar9 = 0;
            *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
          }
        }
        uVar5 = uVar5 + 1;
        plVar9 = plVar9 + 8;
      } while (uVar5 < uVar2);
    }
    break;
  case 3:
    plVar9 = *(long **)(param_2 + 0x1428);
    if ((plVar9 != (long *)0x0) && (plVar6 = (long *)*plVar9, plVar6 != (long *)0x0)) {
      if ((int)plVar9[1] == (int)plVar6[1]) {
        lVar4 = (**(code **)(*plVar6 + 0x10))();
        if ((lVar4 != 0) &&
           ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0))
        goto LAB_00d1f608;
      }
      else {
LAB_00d1f84c:
        *plVar9 = 0;
        *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
      }
    }
    break;
  case 4:
    plVar9 = *(long **)(param_2 + 0x1420);
    if ((plVar9 != (long *)0x0) && (plVar6 = (long *)*plVar9, plVar6 != (long *)0x0)) {
      if ((int)plVar9[1] != (int)plVar6[1]) goto LAB_00d1f84c;
      lVar4 = (**(code **)(*plVar6 + 0x10))();
      if ((lVar4 != 0) &&
         ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) {
        uVar8 = FUN_00d9ea08();
        goto LAB_00d1f60c;
      }
    }
  }
  uVar8 = 2;
LAB_00d1f864:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}




void FUN_00d1f8a8(void)

{
  return;
}




void FUN_00d1f8ac(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 5;
  *param_1 = &PTR_FUN_028195b0;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d1f8e8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d1f8f0(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}




undefined8 FUN_00d1f8fc(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long local_78 [3];
  
  lVar2 = tpidr_el0;
  local_78[2] = *(long *)(lVar2 + 0x28);
  uVar12 = 2;
  uVar4 = FUN_019889cc(local_78,2,DAT_031502d4,0);
  uVar10 = (ulong)uVar4;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    uVar12 = FUN_00d25570(param_2);
    if (uVar4 != 0) {
      uVar10 = 0;
      do {
        lVar6 = local_78[uVar10];
        if (*(char *)(param_1 + 0x28) == '\0') {
          cVar1 = *(char *)(lVar6 + 0x288);
          cVar3 = FUN_00d55870(uVar12);
          if (cVar1 == cVar3) goto LAB_00d1f9d4;
          if (*(char *)(param_1 + 0x28) != '\0') goto LAB_00d1f9a8;
        }
        else {
LAB_00d1f9a8:
          cVar1 = *(char *)(lVar6 + 0x288);
          cVar3 = FUN_00d55870(uVar12);
          if (cVar1 != cVar3) {
LAB_00d1f9d4:
            uVar13 = FUN_00d7a5f8(lVar6,uVar12);
            if ((uVar13 & 1) != 0) goto LAB_00d1fc90;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
    }
    break;
  case 1:
    if (*(int *)(param_2 + 0x1330) != 0) {
      uVar13 = 0;
      do {
        lVar6 = param_2 + uVar13 * 0x40;
        plVar9 = *(long **)(lVar6 + 0x1230);
        if (plVar9 != (long *)0x0) {
          puVar14 = (undefined8 *)(lVar6 + 0x1230);
          if (*(int *)(lVar6 + 0x1238) == (int)plVar9[1]) {
            lVar6 = (**(code **)(*plVar9 + 0x10))();
            if ((uVar4 != 0) && (lVar6 != 0)) {
              uVar8 = 0;
              do {
                lVar11 = local_78[uVar8];
                if (*(char *)(param_1 + 0x28) == '\0') {
                  cVar1 = *(char *)(lVar11 + 0x288);
                  cVar3 = FUN_00d55870(lVar6);
                  if (cVar1 == cVar3) goto LAB_00d1fc2c;
                  if (*(char *)(param_1 + 0x28) != '\0') goto LAB_00d1fc00;
                }
                else {
LAB_00d1fc00:
                  cVar1 = *(char *)(lVar11 + 0x288);
                  cVar3 = FUN_00d55870(lVar6);
                  if (cVar1 != cVar3) {
LAB_00d1fc2c:
                    uVar7 = FUN_00d7a5f8(lVar11,lVar6);
                    if ((uVar7 & 1) != 0) goto LAB_00d1fc80;
                  }
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar10);
            }
          }
          else {
            *puVar14 = 0;
            *(undefined4 *)(lVar6 + 0x1238) = DAT_03214ce8;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_2 + 0x1330));
    }
    break;
  case 2:
    if (*(int *)(param_2 + 0x1228) != 0) {
      uVar13 = 0;
      do {
        lVar6 = param_2 + uVar13 * 0x40;
        plVar9 = *(long **)(lVar6 + 0x1028);
        if (plVar9 != (long *)0x0) {
          puVar14 = (undefined8 *)(lVar6 + 0x1028);
          if (*(int *)(lVar6 + 0x1030) == (int)plVar9[1]) {
            lVar6 = (**(code **)(*plVar9 + 0x10))();
            if ((uVar4 != 0) && (lVar6 != 0)) {
              uVar8 = 0;
              do {
                lVar11 = local_78[uVar8];
                if (*(char *)(param_1 + 0x28) == '\0') {
                  cVar1 = *(char *)(lVar11 + 0x288);
                  cVar3 = FUN_00d55870(lVar6);
                  if (cVar1 == cVar3) goto LAB_00d1fae8;
                  if (*(char *)(param_1 + 0x28) != '\0') goto LAB_00d1fabc;
                }
                else {
LAB_00d1fabc:
                  cVar1 = *(char *)(lVar11 + 0x288);
                  cVar3 = FUN_00d55870(lVar6);
                  if (cVar1 != cVar3) {
LAB_00d1fae8:
                    uVar7 = FUN_00d7a5f8(lVar11,lVar6);
                    if ((uVar7 & 1) != 0) goto LAB_00d1fc80;
                  }
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar10);
            }
          }
          else {
            *puVar14 = 0;
            *(undefined4 *)(lVar6 + 0x1030) = DAT_03214ce8;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_2 + 0x1228));
    }
    break;
  case 3:
    plVar9 = *(long **)(param_2 + 0x1428);
    if ((plVar9 != (long *)0x0) && (plVar5 = (long *)*plVar9, plVar5 != (long *)0x0)) {
      if ((int)plVar9[1] == (int)plVar5[1]) {
        lVar6 = (**(code **)(*plVar5 + 0x10))();
        uVar12 = 2;
        if ((uVar4 != 0) && (lVar6 != 0)) {
          uVar13 = 0;
          do {
            lVar11 = local_78[uVar13];
            if (*(char *)(param_1 + 0x28) == '\0') {
              cVar1 = *(char *)(lVar11 + 0x288);
              cVar3 = FUN_00d55870(lVar6);
              if (cVar1 == cVar3) goto LAB_00d1fd90;
              if (*(char *)(param_1 + 0x28) != '\0') goto LAB_00d1fd64;
            }
            else {
LAB_00d1fd64:
              cVar1 = *(char *)(lVar11 + 0x288);
              cVar3 = FUN_00d55870(lVar6);
              if (cVar1 != cVar3) {
LAB_00d1fd90:
                uVar8 = FUN_00d7a5f8(lVar11,lVar6);
                if ((uVar8 & 1) != 0) goto LAB_00d1fc90;
              }
            }
            uVar13 = uVar13 + 1;
            uVar12 = 2;
          } while (uVar13 < uVar10);
        }
        goto switchD_00d1f96c_default;
      }
LAB_00d1fc98:
      *plVar9 = 0;
      *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
    }
    break;
  case 4:
    plVar9 = *(long **)(param_2 + 0x1420);
    if ((plVar9 != (long *)0x0) && (plVar5 = (long *)*plVar9, plVar5 != (long *)0x0)) {
      if ((int)plVar9[1] == (int)plVar5[1]) {
        lVar6 = (**(code **)(*plVar5 + 0x10))();
        uVar12 = 2;
        if ((uVar4 != 0) && (lVar6 != 0)) {
          uVar13 = 0;
          do {
            lVar11 = local_78[uVar13];
            if (*(char *)(param_1 + 0x28) == '\0') {
              cVar1 = *(char *)(lVar11 + 0x288);
              cVar3 = FUN_00d55870(lVar6);
              if (cVar1 == cVar3) goto LAB_00d1fd28;
              if (*(char *)(param_1 + 0x28) != '\0') goto LAB_00d1fcfc;
            }
            else {
LAB_00d1fcfc:
              cVar1 = *(char *)(lVar11 + 0x288);
              cVar3 = FUN_00d55870(lVar6);
              if (cVar1 != cVar3) {
LAB_00d1fd28:
                uVar8 = FUN_00d7a5f8(lVar11,lVar6);
                if ((uVar8 & 1) != 0) goto LAB_00d1fc90;
              }
            }
            uVar13 = uVar13 + 1;
            uVar12 = 2;
          } while (uVar13 < uVar10);
        }
        goto switchD_00d1f96c_default;
      }
      goto LAB_00d1fc98;
    }
    break;
  default:
    goto switchD_00d1f96c_default;
  }
  uVar12 = 2;
switchD_00d1f96c_default:
  if (*(long *)(lVar2 + 0x28) != local_78[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
LAB_00d1fc80:
  if (*(char *)(param_1 + 0x29) != '\0') {
    *(undefined8 **)(param_2 + 0x1428) = puVar14;
  }
LAB_00d1fc90:
  uVar12 = 1;
  goto switchD_00d1f96c_default;
}




void FUN_00d1fdb8(void)

{
  return;
}




void FUN_00d1fdbc(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819638;
  *(undefined8 *)((long)param_1 + 0x24) = 5;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00d1fdfc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d1fe04(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d1fe0c(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}




undefined8 FUN_00d1fe18(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    if (*(int *)(param_2 + 0x1330) != 0) {
      uVar4 = 0;
      plVar3 = (long *)(param_2 + 0x1230);
      do {
        if (((*(byte *)((long)plVar3 + 0x3c) >> 1 & 1) != 0) &&
           (plVar1 = (long *)*plVar3, plVar1 != (long *)0x0)) {
          if ((int)plVar3[1] == (int)plVar1[1]) {
            lVar2 = (**(code **)(*plVar1 + 0x10))();
            if ((lVar2 != 0) &&
               ((*(uint *)(param_1 + 0x28) & (*(uint *)(lVar2 + 0x2f4) ^ 0xffffffff)) == 0)) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                return 1;
              }
              *(long **)(param_2 + 0x1428) = plVar3;
              return 1;
            }
          }
          else {
            *plVar3 = 0;
            *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
          }
        }
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 8;
      } while (uVar4 < *(uint *)(param_2 + 0x1330));
    }
    break;
  case 2:
    if (*(int *)(param_2 + 0x1228) != 0) {
      uVar4 = 0;
      plVar3 = (long *)(param_2 + 0x1028);
      do {
        if (((*(byte *)((long)plVar3 + 0x3c) >> 1 & 1) != 0) &&
           (plVar1 = (long *)*plVar3, plVar1 != (long *)0x0)) {
          if ((int)plVar3[1] == (int)plVar1[1]) {
            lVar2 = (**(code **)(*plVar1 + 0x10))();
            if ((lVar2 != 0) &&
               ((*(uint *)(param_1 + 0x28) & (*(uint *)(lVar2 + 0x2f4) ^ 0xffffffff)) == 0)) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                return 1;
              }
              *(long **)(param_2 + 0x1420) = plVar3;
              return 1;
            }
          }
          else {
            *plVar3 = 0;
            *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
          }
        }
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 8;
      } while (uVar4 < *(uint *)(param_2 + 0x1228));
    }
    break;
  case 3:
    plVar3 = *(long **)(param_2 + 0x1428);
    goto joined_r0x00d1ff70;
  case 4:
    plVar3 = *(long **)(param_2 + 0x1420);
joined_r0x00d1ff70:
    if (((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x3c) >> 1 & 1) != 0)) &&
       (plVar1 = (long *)*plVar3, plVar1 != (long *)0x0)) {
      if ((int)plVar3[1] == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
        if ((lVar2 != 0) &&
           ((*(uint *)(param_1 + 0x28) & (*(uint *)(lVar2 + 0x2f4) ^ 0xffffffff)) == 0)) {
          return 1;
        }
      }
      else {
        *plVar3 = 0;
        *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
      }
    }
  }
  return 2;
}

