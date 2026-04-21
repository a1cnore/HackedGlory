// functions/00d20 — 52 functions
#include "libGameKindred.h"




void FUN_00d20008(void)

{
  return;
}




void FUN_00d2000c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028196c0;
  *(undefined8 *)((long)param_1 + 0x24) = 5;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00d2004c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d20054(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d2005c(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}




undefined8 FUN_00d20068(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
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
  case 1:
    if (*(int *)(param_2 + 0x1330) != 0) {
      uVar4 = 0;
      plVar3 = (long *)(param_2 + 0x1230);
      do {
        if (((*(byte *)((long)plVar3 + 0x3c) >> 3 & 1) != 0) &&
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
        if (((*(byte *)((long)plVar3 + 0x3c) >> 3 & 1) != 0) &&
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
    goto joined_r0x00d202c0;
  case 4:
    plVar3 = *(long **)(param_2 + 0x1420);
joined_r0x00d202c0:
    if (((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x3c) >> 3 & 1) != 0)) &&
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




void FUN_00d20358(void)

{
  return;
}




void FUN_00d2035c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_02819748;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d20394(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d2039c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d203a4(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}




undefined8 FUN_00d203b0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    plVar4 = (long *)FUN_00d25570(param_2);
    plVar6 = plVar4;
    if (plVar4 == (long *)0x0) {
      return 2;
    }
    goto LAB_00d205a0;
  case 1:
    if (*(int *)(param_2 + 0x1330) != 0) {
      uVar5 = 0;
      plVar7 = (long *)(param_2 + 0x1230);
      do {
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          if ((int)plVar7[1] == (int)plVar4[1]) {
            lVar2 = (**(code **)(*plVar4 + 0x10))();
            if (((lVar2 != 0) &&
                ((*(uint *)(param_1 + 0x28) & (*(uint *)(lVar2 + 0x2f4) ^ 0xffffffff)) == 0)) &&
               (uVar3 = FUN_00d205e8(lVar2,lVar2), (uVar3 & 1) != 0)) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                return 1;
              }
              *(long **)(param_2 + 0x1428) = plVar7;
              return 1;
            }
          }
          else {
            *plVar7 = 0;
            *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
          }
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 8;
      } while (uVar5 < *(uint *)(param_2 + 0x1330));
    }
    break;
  case 2:
    if (*(int *)(param_2 + 0x1228) != 0) {
      uVar5 = 0;
      plVar7 = (long *)(param_2 + 0x1028);
      do {
        plVar4 = (long *)*plVar7;
        if (plVar4 != (long *)0x0) {
          if ((int)plVar7[1] == (int)plVar4[1]) {
            lVar2 = (**(code **)(*plVar4 + 0x10))();
            if (((lVar2 != 0) &&
                ((*(uint *)(param_1 + 0x28) & (*(uint *)(lVar2 + 0x2f4) ^ 0xffffffff)) == 0)) &&
               (uVar3 = FUN_00d205e8(lVar2,lVar2), (uVar3 & 1) != 0)) {
              if (*(char *)(param_1 + 0x2c) == '\0') {
                return 1;
              }
              *(long **)(param_2 + 0x1420) = plVar7;
              return 1;
            }
          }
          else {
            *plVar7 = 0;
            *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
          }
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 8;
      } while (uVar5 < *(uint *)(param_2 + 0x1228));
    }
    break;
  case 3:
    if (*(undefined8 **)(param_2 + 0x1428) == (undefined8 *)0x0) {
      return 2;
    }
    plVar4 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1428) + 0x10))();
    uVar1 = *(uint *)(param_1 + 0x28) & (*(uint *)((long)plVar4 + 0x2f4) ^ 0xffffffff);
    plVar6 = plVar4;
    goto joined_r0x00d2059c;
  case 4:
    plVar7 = *(long **)(param_2 + 0x1420);
    if (plVar7 == (long *)0x0) {
      return 2;
    }
    plVar4 = (long *)*plVar7;
    if (plVar4 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else if ((int)plVar7[1] == (int)plVar4[1]) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x10))();
      plVar6 = plVar4;
    }
    else {
      *plVar7 = 0;
      plVar6 = (long *)0x0;
      *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
    }
    uVar1 = *(uint *)(param_1 + 0x28) & (*(uint *)((long)plVar6 + 0x2f4) ^ 0xffffffff);
joined_r0x00d2059c:
    if (uVar1 == 0) {
LAB_00d205a0:
      uVar5 = FUN_00d205e8(plVar4,plVar6);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
  }
  return 2;
}




undefined8 FUN_00d205e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ec00) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d7d300();
  return uVar2;
}




void FUN_00d2061c(void)

{
  return;
}




void FUN_00d20620(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028197d0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f800000;
  return;
}




void FUN_00d20658(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d20660(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d20668(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 4) {
    plVar5 = *(long **)(param_2 + 0x1420);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 0) {
        return 2;
      }
      uVar2 = FUN_00d25570(param_2);
      goto LAB_00d20700;
    }
    plVar5 = *(long **)(param_2 + 0x1428);
  }
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  plVar3 = (long *)*plVar5;
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)plVar5[1] == (int)plVar3[1]) {
    uVar2 = (**(code **)(*plVar3 + 0x10))();
  }
  else {
    *plVar5 = 0;
    uVar2 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
  }
LAB_00d20700:
  uVar4 = FUN_00d20728(param_1,uVar2,param_2);
  if ((uVar4 & 1) == 0) {
    return 2;
  }
  return 1;
}




void FUN_00d20728(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  local_48[0] = *(float *)(param_3 + 0x1430) - local_48[0];
  fVar2 = (float)*(undefined8 *)(param_3 + 0x1434) - (float)local_48._4_8_;
  fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x1434) >> 0x20) - SUB84(local_48._4_8_,4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48[0] * local_48[0] + fVar2 * fVar2 + fVar3 * fVar3 <
                   *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24));
}




void FUN_00d207cc(void)

{
  return;
}




void FUN_00d207d0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02819858;
  thunk_FUN_00d9ff34(param_1 + 5,&DAT_01bca6e8);
  *(undefined8 *)((long)param_1 + 0x2c) = 6;
  return;
}




void FUN_00d20820(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




long FUN_00d20828(long param_1)

{
  FUN_00d9ff34(param_1 + 0x28);
  return param_1;
}




void FUN_00d20850(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




undefined8 FUN_00d20858(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    lVar4 = FUN_00d25570(param_2);
    if (lVar4 == 0) {
      return 2;
    }
    goto LAB_00d208a4;
  case 1:
    if (*(int *)(param_2 + 0x1330) != 0) {
      uVar1 = 0;
      plVar5 = (long *)(param_2 + 0x1230);
      do {
        plVar3 = (long *)*plVar5;
        if (plVar3 != (long *)0x0) {
          if ((int)plVar5[1] == (int)plVar3[1]) {
            lVar4 = (**(code **)(*plVar3 + 0x10))();
            if (((lVar4 != 0) &&
                ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) &&
               (uVar2 = FUN_00d20a60(param_1), (uVar2 & 1) != 0)) {
              *(long **)(param_2 + 0x1428) = plVar5;
              return 1;
            }
          }
          else {
            *plVar5 = 0;
            *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
          }
        }
        uVar1 = uVar1 + 1;
        plVar5 = plVar5 + 8;
      } while (uVar1 < *(uint *)(param_2 + 0x1330));
    }
    break;
  case 2:
    if (*(int *)(param_2 + 0x1228) != 0) {
      uVar1 = 0;
      plVar5 = (long *)(param_2 + 0x1028);
      do {
        plVar3 = (long *)*plVar5;
        if (plVar3 != (long *)0x0) {
          if ((int)plVar5[1] == (int)plVar3[1]) {
            lVar4 = (**(code **)(*plVar3 + 0x10))();
            if (((lVar4 != 0) &&
                ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) &&
               (uVar2 = FUN_00d20a60(param_1), (uVar2 & 1) != 0)) {
              *(long **)(param_2 + 0x1420) = plVar5;
              return 1;
            }
          }
          else {
            *plVar5 = 0;
            *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
          }
        }
        uVar1 = uVar1 + 1;
        plVar5 = plVar5 + 8;
      } while (uVar1 < *(uint *)(param_2 + 0x1228));
    }
    break;
  case 3:
    plVar5 = *(long **)(param_2 + 0x1428);
    goto joined_r0x00d209e0;
  case 4:
    plVar5 = *(long **)(param_2 + 0x1420);
joined_r0x00d209e0:
    if ((plVar5 != (long *)0x0) && (plVar3 = (long *)*plVar5, plVar3 != (long *)0x0)) {
      if ((int)plVar5[1] == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
        if ((lVar4 != 0) &&
           ((*(uint *)(param_1 + 0x30) & (*(uint *)(lVar4 + 0x2f4) ^ 0xffffffff)) == 0)) {
LAB_00d208a4:
          uVar1 = FUN_00d20a60(param_1,lVar4);
          if ((uVar1 & 1) != 0) {
            return 1;
          }
        }
      }
      else {
        *plVar5 = 0;
        *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
      }
    }
  }
  return 2;
}




bool FUN_00d20a60(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00d9eb64(param_2);
  uVar1 = FUN_00d5412c(uVar3,*(undefined4 *)(param_1 + 0x28));
  iVar2 = FUN_00d53990(uVar3,uVar1);
  return iVar2 == *(int *)(param_1 + 0x2c);
}




void FUN_00d20aa8(void)

{
  return;
}




undefined8 FUN_00d20aac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e0bafc(param_2);
  if (-1 < iVar2) {
    uVar3 = FUN_00e0bac0(param_2);
    local_80 = 0;
    local_3c = 0;
    local_44 = 0;
    local_78 = 0xffffffff;
    uStack_4c = 0;
    local_54 = 0;
    uStack_5c = 0;
    local_64 = 0;
    uStack_6c = 0;
    local_74 = 0;
    uVar4 = FUN_00d25628(param_2);
    uVar6 = 1;
    uVar5 = FUN_00d74500(uVar4,iVar2,uVar3,(long)&local_80 + 4,&local_78,&local_80,1);
    if ((uVar5 & 1) != 0) goto LAB_00d20b48;
  }
  uVar6 = 2;
LAB_00d20b48:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d20b74(void)

{
  return;
}




void FUN_00d20b78(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028198e0;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d20bb0(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | (byte)(1 << (ulong)(param_2 & 0x1f));
  return;
}




void FUN_00d20bc8(long param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 1;
  return;
}




void FUN_00d20bd4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_00d20bdc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = 0.0;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    fVar7 = *(float *)(param_2 + 0x40) + 0.0;
  }
  if ((*(byte *)(param_1 + 0x28) >> 1 & 1) != 0) {
    fVar7 = fVar7 + *(float *)(param_2 + 0x44);
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (*(int *)(param_2 + 0x1228) == 0) {
      fVar8 = 0.0;
    }
    else {
      uVar5 = 0;
      plVar4 = (long *)(param_2 + 0x1028);
      fVar8 = 0.0;
      do {
        plVar1 = (long *)*plVar4;
        fVar6 = 0.0;
        if (plVar1 != (long *)0x0) {
          if ((int)plVar4[1] == (int)plVar1[1]) {
            lVar2 = (**(code **)(*plVar1 + 0x10))();
            fVar6 = 0.0;
            if (((lVar2 != 0) &&
                (fVar6 = 0.0,
                (*(uint *)(param_1 + 0x24) & (*(uint *)(lVar2 + 0x2f4) ^ 0xffffffff)) == 0)) &&
               (fVar6 = 0.0, (*(byte *)(param_1 + 0x28) & 1) != 0)) {
              fVar6 = *(float *)(plVar4 + 6) + 0.0;
            }
          }
          else {
            *plVar4 = 0;
            fVar6 = 0.0;
            *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
          }
        }
        uVar5 = uVar5 + 1;
        fVar8 = fVar8 + fVar6;
        plVar4 = plVar4 + 8;
      } while (uVar5 < *(uint *)(param_2 + 0x1228));
    }
  }
  else {
    plVar4 = *(long **)(param_2 + 0x1420);
    fVar6 = 0.0;
    fVar8 = 0.0;
    if ((plVar4 != (long *)0x0) && (plVar1 = (long *)*plVar4, fVar8 = fVar6, plVar1 != (long *)0x0))
    {
      if ((int)plVar4[1] == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
        if (((lVar2 != 0) &&
            ((*(uint *)(param_1 + 0x24) & (*(uint *)(lVar2 + 0x2f4) ^ 0xffffffff)) == 0)) &&
           ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
          fVar8 = *(float *)(plVar4 + 6) + 0.0;
        }
      }
      else {
        *plVar4 = 0;
        *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
      }
    }
  }
  uVar3 = 2;
  if (fVar7 < fVar8) {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00d20d78(void)

{
  return;
}




void FUN_00d20d7c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819968;
  *(undefined4 *)((long)param_1 + 0x24) = 8;
  return;
}




void FUN_00d20db4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_00d20dbc(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_2 + 0x1dd8) != *(int *)(param_1 + 0x24)) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d20dd4(void)

{
  return;
}




void FUN_00d20dd8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028199f0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x41;
  return;
}




void FUN_00d20e10(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_00d20e18(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ceacf4();
  uVar2 = 1;
  if (iVar1 != *(int *)(param_1 + 0x24)) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d20e48(void)

{
  return;
}




void FUN_00d20e4c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02819a78;
  *(undefined4 *)(param_1 + 5) = DAT_031abbe4;
  return;
}




void FUN_00d20e90(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




long FUN_00d20e98(long param_1)

{
  FUN_00d9ff34(param_1 + 0x28);
  return param_1;
}




void FUN_00d20ec0(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  return;
}




undefined8 FUN_00d20ecc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 4) {
    plVar4 = *(long **)(param_2 + 0x1420);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 0) {
        return 2;
      }
      lVar2 = FUN_00d25570(param_2);
      goto joined_r0x00d20f3c;
    }
    plVar4 = *(long **)(param_2 + 0x1428);
  }
  if (plVar4 == (long *)0x0) {
    return 2;
  }
  plVar3 = (long *)*plVar4;
  if (plVar3 == (long *)0x0) {
    return 2;
  }
  if ((int)plVar4[1] != (int)plVar3[1]) {
    *plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
    return 2;
  }
  lVar2 = (**(code **)(*plVar3 + 0x10))();
joined_r0x00d20f3c:
  if ((lVar2 != 0) && (iVar1 = FUN_00d5bc54(), *(int *)(param_1 + 0x28) == iVar1)) {
    return 1;
  }
  return 2;
}




void FUN_00d20f7c(void)

{
  return;
}




void FUN_00d20f80(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819b00;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d20fb4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d20fbc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(int *)(param_1 + 0x24) == 0) && (lVar4 = FUN_00d25570(param_2), lVar4 != 0)) {
    FUN_00d55794(lVar4,auStack_48,0);
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    uVar5 = FUN_00e0bc78(lVar4,uVar1,auStack_48);
    if ((uVar5 & 1) != 0) {
      FUN_00d4cdd4(&DAT_02bebbe8,auStack_48,auStack_48,uVar1);
      uVar3 = 1;
      goto LAB_00d20fe8;
    }
  }
  uVar3 = 2;
LAB_00d20fe8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

