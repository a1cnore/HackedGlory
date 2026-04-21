// functions/0091f — 23 functions
#include "libGameKindred.h"




undefined1  [16] FUN_0091f024(float *param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  FUN_009bbfb0();
  FUN_009bd5c8();
  lVar1 = FUN_009b80cc();
  fVar2 = *param_1 - *(float *)(lVar1 + 0x30);
  fVar4 = (float)*(undefined8 *)(param_1 + 1) - (float)*(undefined8 *)(lVar1 + 0x34);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(lVar1 + 0x34) >> 0x20);
  fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar4 = SQRT(fVar2);
  if (NAN(fVar4)) {
    auVar3._0_4_ = sqrtf(fVar2);
    auVar3._4_4_ = extraout_var;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  return ZEXT416((uint)fVar4);
}




void FUN_0091f094(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = param_1 + 2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  *puVar3 = 0;
  FUN_0091f484(param_1,0x2a);
  FUN_0091f504(puVar3,0x2a);
  lVar4 = 0;
  uVar5 = 0;
  uVar2 = 0;
  do {
    local_4c = *(uint *)(param_2 + lVar4);
    if (local_4c < uVar2) goto LAB_0091f134;
    FUN_0091f584(param_1,&local_4c);
    FUN_0091f60c(puVar3,param_2 + lVar4 + 4);
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 8;
    uVar2 = local_4c;
  } while (uVar5 < 0x2a);
LAB_0091f150:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0091f134:
  do {
    FUN_0091f694(param_1,param_2 + lVar4,param_2 + lVar4 + 4);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x150);
  goto LAB_0091f150;
}




void FUN_0091f17c(undefined8 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_0091f1b8(undefined8 param_1)

{
  ulong uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_0091fbd0(&DAT_02c0a2b0,param_1);
  uVar1 = (ulong)(*puVar2 >> 3);
  *(byte *)((long)&DAT_02c0a150 + uVar1) =
       *(byte *)((long)&DAT_02c0a150 + uVar1) | (byte)(1 << ((ulong)*puVar2 & 7));
  return;
}




void FUN_0091f200(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_01980b5c(0x491e0a9c);
  *(undefined1 *)(lVar1 + 0x38) = 1;
  FUN_01981a68(lVar1,0,FUN_0091fc34);
  lVar2 = 0;
  do {
    FUN_019818cc(lVar1,&DAT_02c0a2d0 + lVar2);
    lVar2 = lVar2 + 0x14;
  } while (lVar2 != 0x28);
  lVar2 = FUN_01980b5c(0xad730ef5);
  *(undefined1 *)(lVar2 + 0x38) = 1;
  FUN_01981a68(lVar2,0,FUN_0091fc34);
  lVar1 = FUN_01980b5c(0x99901bde);
  *(undefined1 *)(lVar1 + 0x38) = 1;
  FUN_01981a68(lVar1,0,FUN_0091fc34);
  lVar2 = 0;
  do {
    FUN_019818cc(lVar1,&DAT_02c0a2f8 + lVar2);
    lVar2 = lVar2 + 0x14;
  } while (lVar2 != 100);
  return;
}




void FUN_0091f2d8(void)

{
  DAT_02c0a154 = 0;
  DAT_02c0a150 = 0;
  return;
}




bool FUN_0091f2ec(ulong param_1)

{
  return (1 << (ulong)((uint)param_1 & 7) &
         (uint)*(byte *)((long)&DAT_02c0a150 + (param_1 >> 3 & 0x1fffffff))) != 0;
}




void FUN_0091f314(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_00e705c8(param_1,"ESC");
    return;
  case 1:
    FUN_00e705c8(param_1,&DAT_01b947b6);
    return;
  case 2:
    FUN_00e705c8(param_1,&DAT_01b947be);
    return;
  case 3:
    FUN_00e705c8(param_1,&DAT_01b947c6);
    return;
  default:
    FUN_00e705c8(param_1,&DAT_01e277f2);
    return;
  case 7:
    FUN_00e705c8(param_1,&DAT_01b947b0);
    return;
  case 8:
    FUN_00e705c8(param_1,&DAT_01b947b8);
    return;
  case 9:
    FUN_00e705c8(param_1,&DAT_01b947c0);
    return;
  case 0xc:
    FUN_00e705c8(param_1,&DAT_01e66526);
    return;
  case 0xd:
  case 0x27:
    FUN_00e705c8(param_1,&DAT_01b947d2);
    return;
  case 0xe:
  case 0x28:
    FUN_00e705c8(param_1,&DAT_01b947c8);
    return;
  case 0xf:
    FUN_00e705c8(param_1,&DAT_01b947cc);
    return;
  case 0x10:
    FUN_00e705c8(param_1,"1");
    return;
  case 0x11:
    FUN_00e705c8(param_1,"2");
    return;
  case 0x12:
    FUN_00e705c8(param_1,"3");
    return;
  case 0x13:
    FUN_00e705c8(param_1,"4");
    return;
  case 0x14:
    FUN_00e705c8(param_1,"5");
    return;
  case 0x15:
    FUN_00e705c8(param_1,"6");
    return;
  case 0x1c:
    FUN_00e705c8(param_1,"D");
    return;
  case 0x1d:
    FUN_00e705c8(param_1,&DAT_01bef1b0);
    return;
  case 0x24:
    FUN_00e705c8(param_1,"Space");
    return;
  }
}




void FUN_0091f484(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_0091f504(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_0091f584(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_0091f484(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_0091f60c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_0091f504(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_0091f694(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c = *param_2;
  uVar1 = *param_1;
  lVar4 = *(long *)(param_1 + 2);
  if (uVar1 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar1 * (ulong)local_3c >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)local_3c >> 0x20)) {
      do {
        if (*(uint *)(lVar4 + uVar6 * 4) <= local_3c) break;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
    }
    while ((iVar5 = (int)uVar6, iVar5 < (int)uVar1 && (*(uint *)(lVar4 + uVar6 * 4) < local_3c))) {
      uVar6 = (ulong)(iVar5 + 1);
    }
  }
  FUN_0091f770(param_1,lVar4 + (long)iVar5 * 4,&local_3c,&local_38);
  FUN_0091f9a4(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar5 * 4,param_3,param_3 + 4);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_0091f770(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    puVar10 = *(undefined4 **)(param_1 + 2);
    uVar13 = (ulong)((long)param_4 - (long)param_3) >> 2;
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
      puVar3 = operator_new__((ulong)uVar12 << 2);
      puVar6 = puVar3;
      for (puVar5 = puVar10; puVar5 != param_2; puVar5 = puVar5 + 1) {
        *puVar6 = *puVar5;
        puVar6 = puVar6 + 1;
      }
      puVar5 = puVar3 + ((ulong)((long)param_2 - (long)puVar10) >> 2 & 0xffffffff);
      puVar6 = puVar5;
      do {
        puVar11 = param_3 + 1;
        *puVar6 = *param_3;
        puVar6 = puVar6 + 1;
        param_3 = puVar11;
      } while (param_4 != puVar11);
      uVar4 = *param_1;
      if (puVar10 + uVar4 != param_2) {
        puVar6 = puVar5 + (uVar13 & 0xffffffff);
        do {
          puVar11 = param_2 + 1;
          *puVar6 = *param_2;
          puVar6 = puVar6 + 1;
          param_2 = puVar11;
        } while (puVar10 + uVar4 != puVar11);
      }
      if (puVar10 != (undefined4 *)0x0) {
        operator_delete__(puVar10);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined4 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar12;
      param_2 = puVar5;
    }
    else {
      puVar5 = puVar10 + uVar1;
      uVar7 = (long)puVar5 - (long)param_2;
      uVar8 = uVar7 >> 2;
      uVar13 = (ulong)((long)param_4 - (long)param_3) >> 2 & 0xffffffff;
      if (uVar12 < (uint)uVar8) {
        puVar6 = puVar5 + -uVar13;
        if (uVar13 != 0) {
          lVar9 = 0;
          do {
            *(undefined4 *)((long)puVar5 + lVar9) = *(undefined4 *)((long)puVar6 + lVar9);
            lVar9 = lVar9 + 4;
          } while (lVar9 != uVar13 * 4);
          puVar6 = puVar10 + (*param_1 - uVar13);
        }
        lVar9 = (long)puVar6 - (long)param_2;
        puVar5 = param_2;
        if (lVar9 != 0) {
          do {
            puVar6 = puVar6 + -1;
            lVar2 = lVar9 + uVar13 * 4;
            lVar9 = lVar9 + -4;
            *(undefined4 *)((long)param_2 + lVar2 + -4) = *puVar6;
          } while (lVar9 != 0);
        }
        do {
          puVar6 = param_3 + 1;
          *puVar5 = *param_3;
          puVar5 = puVar5 + 1;
          param_3 = puVar6;
        } while (param_4 != puVar6);
      }
      else {
        puVar6 = param_2;
        if (puVar5 != param_2) {
          do {
            puVar6[uVar13] = *puVar6;
            puVar6 = puVar6 + 1;
          } while (puVar5 != puVar6);
          puVar5 = puVar10 + *param_1;
        }
        uVar13 = uVar7 >> 2 & 0xffffffff;
        for (puVar6 = param_3 + (uVar8 & 0xffffffff); puVar6 != param_4; puVar6 = puVar6 + 1) {
          *puVar5 = *puVar6;
          puVar5 = puVar5 + 1;
        }
        if (uVar13 != 0) {
          lVar9 = uVar13 << 2;
          puVar5 = param_2;
          do {
            lVar9 = lVar9 + -4;
            *puVar5 = *param_3;
            puVar5 = puVar5 + 1;
            param_3 = param_3 + 1;
          } while (lVar9 != 0);
        }
      }
      param_2 = puVar10 + ((ulong)((long)param_2 - (long)puVar10) >> 2 & 0xffffffff);
      *param_1 = *param_1 + uVar12;
    }
  }
  return param_2;
}




undefined4 * FUN_0091f9a4(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    uVar4 = param_1[1];
    puVar10 = *(undefined4 **)(param_1 + 2);
    uVar13 = (ulong)((long)param_4 - (long)param_3) >> 2;
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
      puVar3 = operator_new__((ulong)uVar12 << 2);
      puVar5 = puVar3;
      for (puVar9 = puVar10; puVar9 != param_2; puVar9 = puVar9 + 1) {
        *puVar5 = *puVar9;
        puVar5 = puVar5 + 1;
      }
      puVar9 = puVar3 + ((ulong)((long)param_2 - (long)puVar10) >> 2 & 0xffffffff);
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
      if (puVar10 != (undefined4 *)0x0) {
        operator_delete__(puVar10);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined4 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar12;
      param_2 = puVar9;
    }
    else {
      puVar9 = puVar10 + uVar6;
      uVar7 = (ulong)((long)puVar9 - (long)param_2) >> 2;
      uVar13 = (ulong)((long)param_4 - (long)param_3) >> 2 & 0xffffffff;
      puVar5 = param_2;
      if (uVar12 < (uint)uVar7) {
        if (uVar13 != 0) {
          lVar8 = 0;
          do {
            *(undefined4 *)((long)puVar9 + lVar8) =
                 *(undefined4 *)((long)puVar9 + lVar8 + uVar13 * -4);
            lVar8 = lVar8 + 4;
          } while (lVar8 != uVar13 * 4);
        }
        lVar8 = (long)puVar9 + (uVar13 * -4 - (long)param_2);
        puVar9 = param_2;
        if (lVar8 != 0) {
          puVar5 = puVar10 + ((uVar6 - 1) - uVar13);
          do {
            lVar2 = lVar8 + uVar13 * 4;
            lVar8 = lVar8 + -4;
            *(undefined4 *)((long)param_2 + lVar2 + -4) = *puVar5;
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
        uVar6 = (ulong)((long)puVar9 - (long)param_2) >> 2 & 0xffffffff;
        for (puVar5 = param_3 + (uVar7 & 0xffffffff); puVar5 != param_4; puVar5 = puVar5 + 1) {
          *puVar9 = *puVar5;
          puVar9 = puVar9 + 1;
        }
        if (uVar6 != 0) {
          lVar8 = uVar6 << 2;
          puVar9 = param_2;
          do {
            lVar8 = lVar8 + -4;
            *puVar9 = *param_3;
            puVar9 = puVar9 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      param_2 = puVar10 + ((ulong)((long)param_2 - (long)puVar10) >> 2 & 0xffffffff);
      *param_1 = uVar1 + uVar12;
    }
  }
  return param_2;
}




long FUN_0091fbd0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar2) break;
        iVar4 = (int)uVar5;
        uVar3 = iVar4 - 1;
        uVar5 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
    }
    for (; ((int)uVar5 < (int)uVar1 && (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) < uVar2));
        uVar5 = (ulong)((int)uVar5 + 1)) {
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 4;
}




void FUN_0091fc34(void)

{
  ulong uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_0091fbd0(&DAT_02c0a2b0);
  uVar1 = (ulong)(*puVar2 >> 3);
  *(byte *)((long)&DAT_02c0a150 + uVar1) =
       *(byte *)((long)&DAT_02c0a150 + uVar1) | (byte)(1 << ((ulong)*puVar2 & 7));
  return;
}




undefined8 * FUN_0091fc78(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x98);
  FUN_00e7d14c();
  *(undefined2 *)(puVar1 + 3) = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_thunk_FUN_00e7d174_027b9cd0;
  FUN_019880b8(puVar1 + 6);
  *(undefined1 *)(puVar1 + 0x12) = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  return puVar1;
}




void FUN_0091fcd8(undefined8 *param_1)

{
  FUN_00e7d14c();
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_00e7d174_027b9cd0;
  FUN_019880b8(param_1 + 6);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}




void FUN_0091fd30(void *param_1)

{
  FUN_00e7d174();
  operator_delete(param_1);
  return;
}




void FUN_0091fd54(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f1c618(0);
  FUN_00e6c998();
  uVar3 = FUN_00e70200(&DAT_0320ffc0);
  if (7 < uVar3) {
    uVar3 = 8;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  FUN_00e7816c(uVar3,0x80,0);
  thunk_FUN_00e7a610(0x19000);
  FUN_00e7d5b4();
  FUN_00e7d1a4(param_1);
  FUN_00e7d1e0(param_1);
  FUN_00e7d2a0(param_1,0xc);
  FUN_0091ff0c();
  FUN_0092db3c();
  FUN_0092ec2c(local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00e7d678(pvVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_0091ffc0();
  FUN_00e7bbc8();
  uVar5 = FUN_00e7bda0(3);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  uVar5 = FUN_00e7bda0(4);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = FUN_00e7bda0(1);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  uVar5 = FUN_00e7bda0(2);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  FUN_00e7bcc4();
  FUN_01988bb4(0,thunk_FUN_00ce2110);
  FUN_01988bb4(1,thunk_FUN_00ce2110);
  FUN_01988bb4(2,thunk_FUN_00ce2110);
  FUN_01988bb4(3,thunk_FUN_00ce2110);
  FUN_01988bb4(4,thunk_FUN_00ce2110);
  FUN_00cea3d4();
  FUN_00920020();
  FUN_009f1d80();
  FUN_00efc8e0(*(undefined8 *)(param_1 + 0x70));
  FUN_00f209d4();
  FUN_009e71b8();
  FUN_00920158(param_1);
  uVar4 = FUN_0092f26c();
  FUN_00e7d19c(param_1,uVar4);
  FUN_00920234(param_1,param_2);
  FUN_00e77dac(4);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0091ff0c(void)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e7012c(&DAT_0320ffc0,0);
  FUN_008fa54c(local_40,uVar3);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_00f1c6e4("appdata",pvVar1,0);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_00f1c6e4("build",pvVar1,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0091ffc0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00efc79c(0);
  FUN_019800cc();
  FUN_00efb000(0x800000,1,FUN_00920820);
  iVar1 = FUN_00ce27b8();
  uVar2 = FUN_00ce27b8();
  FUN_00eee538(iVar1 + 0xa00000,FUN_0092088c,1,uVar2);
  FUN_00eee49c();
  return;
}

