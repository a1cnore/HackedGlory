// functions/00d08 — 28 functions
#include "libGameKindred.h"




void FUN_00d08034(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_1,auStack_38,0);
  FUN_00d08090(param_1,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d08090(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d55870();
  if (PTR_s_threat_neutral_02beafe0 == (undefined *)0x0) {
    fVar5 = 0.0;
  }
  else {
    uVar3 = 0;
    fVar5 = 0.0;
    puVar2 = PTR_s_threat_neutral_02beafe0;
    do {
      if (((uVar1 & 0xff) != uVar3) &&
         (fVar4 = (float)FUN_00eeea28(*param_2,param_2[2],puVar2), fVar5 <= fVar4)) {
        fVar5 = fVar4;
      }
      uVar3 = uVar3 + 1;
      puVar2 = (&PTR_s_threat_neutral_02beafe0)[uVar3];
    } while (puVar2 != (undefined *)0x0);
  }
  return fVar5;
}




float FUN_00d08118(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_1,local_38,0);
  uVar2 = FUN_00d55870(param_1);
  fVar3 = (float)FUN_00eeea28(local_38[0],local_30,(&PTR_s_threat_neutral_02beafe0)[uVar2 & 0xff]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d08194(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = FUN_00d55870();
  fVar2 = (float)FUN_00eeea28(*param_2,param_2[2],(&PTR_s_threat_neutral_02beafe0)[uVar1 & 0xff]);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}




void FUN_00d081d8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cVar2 = FUN_00d55870();
  lVar3 = 0x10;
  if (cVar2 != '\x01') {
    lVar3 = 8;
  }
  lVar3 = FUN_00eeeaa4(*(undefined8 *)((long)&PTR_s_threat_neutral_02beafe0 + lVar3));
  if (lVar3 != 0) {
    FUN_00d55794(param_1,local_58,0);
    FUN_00eeef24(local_58[0],local_50,lVar3,FUN_00d07f5c,param_2,param_3,3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d08298(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(float *)(param_2 + 0x10) < *(float *)(param_1 + 0x10)) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d082b0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cVar2 = FUN_00d55870();
  lVar3 = 0x10;
  if (cVar2 != '\x01') {
    lVar3 = 8;
  }
  lVar3 = FUN_00eeeaa4(*(undefined8 *)((long)&PTR_s_threat_neutral_02beafe0 + lVar3));
  if (lVar3 != 0) {
    FUN_00eef26c(&local_50,*param_3,param_3[2],param_1,lVar3,FUN_00d08298);
    *(undefined4 *)(param_4 + 2) = local_40;
    param_4[1] = uStack_48;
    *param_4 = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 != 0);
}




float FUN_00d08368(float param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x10);
  if (1 < param_3) {
    fVar1 = fVar1 + *(float *)(param_2 + 0x14) * (float)(param_3 - 1);
  }
  fVar2 = *(float *)(param_2 + 0x1c) + fVar1;
  if ((param_4 & 1) == 0) {
    fVar2 = fVar1;
  }
  if (1 < param_5) {
    fVar2 = *(float *)(param_2 + 0x18) * (float)(param_5 - 1) + fVar2;
  }
  return fVar2 + *(float *)(param_2 + 0x2c) * param_1;
}




float FUN_00d083c0(float param_1,float param_2,float param_3,float param_4,uint param_5,uint param_6
                  ,uint param_7)

{
  float fVar1;
  
  if (1 < param_5) {
    param_1 = (float)(param_5 - 1) * param_2 + param_1;
  }
  fVar1 = param_1 + param_3;
  if ((param_6 & 1) == 0) {
    fVar1 = param_1;
  }
  if (1 < param_7) {
    fVar1 = (float)(param_7 - 1) * param_4 + fVar1;
  }
  return fVar1;
}




float FUN_00d08400(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < param_1) {
    fVar1 = *(float *)(param_4 + 0x28) * param_1 * param_3 + 0.0;
  }
  if (0.0 < param_2) {
    fVar1 = fVar1 + *(float *)(param_4 + 0x24) * param_2;
  }
  return fVar1;
}




float FUN_00d0843c(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < param_1) {
    fVar1 = *(float *)(param_2 + 0x20) * param_1 + 0.0;
  }
  return fVar1;
}




float FUN_00d08460(long param_1,uint param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 8);
  if (1 < param_2) {
    fVar1 = fVar1 + *(float *)(param_1 + 0xc) * (float)(param_2 - 1);
  }
  fVar2 = *(float *)(param_1 + 0x10) + fVar1;
  if ((param_3 & 1) == 0) {
    fVar2 = fVar1;
  }
  if (1 < param_4) {
    fVar2 = *(float *)(param_1 + 0x20) * (float)(param_4 - 1) + fVar2;
  }
  return fVar2;
}




undefined4 FUN_00d084b0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d4ee0c(*(undefined8 *)(param_1 + 0x228));
  return *(undefined4 *)(lVar1 + 8);
}




undefined4 FUN_00d084cc(long param_1,int param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  lVar4 = *plVar2;
  if (lVar4 != 0) {
    iVar3 = 0;
    do {
      if (iVar3 == param_2) {
        plVar5 = *(long **)(lVar4 + 0xb0);
        lVar4 = *plVar5;
        iVar1 = param_3;
        while (lVar4 != 0) {
          plVar5 = plVar5 + 1;
          if (iVar1 == 0) {
            return *(undefined4 *)(lVar4 + 8);
          }
          iVar1 = iVar1 + -1;
          lVar4 = *plVar5;
        }
      }
      plVar2 = plVar2 + 1;
      lVar4 = *plVar2;
      iVar3 = iVar3 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}




undefined4 FUN_00d08524(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00d4ee0c(*(undefined8 *)(param_1 + 0x1a8));
  uVar2 = 0;
  if (lVar1 != 0) {
    if (param_3 < 0x10) {
      if (param_3 == 1) {
        uVar2 = *(undefined4 *)(lVar1 + 8);
      }
      else if (param_3 == 2) {
        uVar2 = *(undefined4 *)(lVar1 + 0xc);
      }
      else if (param_3 == 4) {
        uVar2 = *(undefined4 *)(lVar1 + 0x14);
      }
    }
    else if (param_3 < 0x40) {
      if (param_3 == 0x10) {
        uVar2 = *(undefined4 *)(lVar1 + 0x10);
      }
      else if (param_3 == 0x20) {
        uVar2 = *(undefined4 *)(lVar1 + 0x18);
      }
    }
    else if ((param_3 == 0x40) || (param_3 == 0x80)) {
      uVar2 = *(undefined4 *)(lVar1 + 0x1c);
    }
  }
  return uVar2;
}




void FUN_00d085c4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,param_1);
  FUN_00d08524(uVar1,param_2,param_3);
  return;
}




undefined4 FUN_00d08604(undefined8 param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00cea0b0();
  lVar1 = FUN_00d4c67c(*(undefined8 *)(lVar1 + 0xb0),param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    if (param_3 < 0x10) {
      if (param_3 == 1) {
        uVar2 = *(undefined4 *)(lVar1 + 8);
      }
      else if (param_3 == 2) {
        uVar2 = *(undefined4 *)(lVar1 + 0x18);
      }
      else if (param_3 == 8) {
        uVar2 = *(undefined4 *)(lVar1 + 0x14);
      }
    }
    else if (param_3 < 0x40) {
      if (param_3 == 0x10) {
        uVar2 = *(undefined4 *)(lVar1 + 0x1c);
      }
      else if (param_3 == 0x20) {
        uVar2 = *(undefined4 *)(lVar1 + 0x20);
      }
    }
    else if ((param_3 == 0x40) || (param_3 == 0x80)) {
      uVar2 = *(undefined4 *)(lVar1 + 0x24);
    }
  }
  return uVar2;
}




void FUN_00d086b0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,param_1);
  FUN_00d08604(uVar1,param_2,param_3);
  return;
}




void FUN_00d086f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d4ee0c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x228));
  FUN_00d08728(param_1,uVar1,param_3);
  return;
}




float FUN_00d08728(long param_1,long param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 0.0;
  if ((param_3 & 1) != 0) {
    fVar2 = *(float *)(param_2 + 8) + 0.0;
  }
  if ((param_3 >> 1 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x240) + 1.0) *
            (*(float *)(lVar1 + 0xd8) +
            *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0));
    if (DAT_0314ff80 <= fVar3) {
      fVar3 = DAT_0314ff80;
    }
    fVar4 = DAT_0314fec0;
    if (DAT_0314fec0 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0xc) * (float)(int)(fVar4 + -1.0);
  }
  if ((param_3 >> 2 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
            (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0)
            );
    if (DAT_0314fef0 <= fVar3) {
      fVar3 = DAT_0314fef0;
    }
    fVar4 = DAT_0314fe30;
    if (DAT_0314fe30 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x14) * fVar4;
  }
  if ((param_3 >> 3 & 1) != 0) {
    fVar2 = fVar2 + *(float *)(param_2 + 0x14) * *(float *)(*(long *)(param_1 + 0x40) + 0xfc);
  }
  if ((param_3 >> 4 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b4) + 1.0) *
            (*(float *)(lVar1 + 0x4c) +
            *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0));
    if (DAT_0314fef4 <= fVar3) {
      fVar3 = DAT_0314fef4;
    }
    fVar4 = DAT_0314fe34;
    if (DAT_0314fe34 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x10) * fVar4;
  }
  if ((param_3 >> 5 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b8) + 1.0) *
            (*(float *)(lVar1 + 0x50) +
            *(float *)(lVar1 + 0x104) * (*(float *)(lVar1 + 0x26c) + 1.0));
    if (DAT_0314fef8 <= fVar3) {
      fVar3 = DAT_0314fef8;
    }
    fVar4 = DAT_0314fe38;
    if (DAT_0314fe38 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * fVar4;
  }
  if (((param_3 >> 6 & 1) != 0) && (fVar2 <= *(float *)(param_2 + 0x1c))) {
    fVar2 = *(float *)(param_2 + 0x1c);
  }
  if ((param_3 >> 7 & 1) == 0) {
    return fVar2;
  }
  if (*(float *)(param_2 + 0x1c) <= fVar2) {
    fVar2 = *(float *)(param_2 + 0x1c);
  }
  return fVar2;
}




void FUN_00d08938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00d504c4();
  if ((iVar1 == 0 & param_7) != 0) {
    iVar1 = 1;
  }
  if (iVar1 != 0) {
    uVar2 = FUN_00d50ef8(param_2);
    FUN_00d089f0(param_1,uVar2,iVar1,param_3,param_4,param_5,param_6,param_7 & 1);
    return;
  }
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  return;
}




void FUN_00d089f0(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,byte param_7)

{
  undefined4 uVar1;
  
  if ((param_2 == 0 & param_7) != 0) {
    param_2 = 1;
  }
  if (param_2 == 0) {
    *param_6 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  else {
    uVar1 = FUN_00d08a8c(param_1,param_3,param_2);
    *param_4 = uVar1;
    uVar1 = FUN_00d08c08(param_1,param_3,param_2);
    *param_5 = uVar1;
    uVar1 = FUN_00d08d64(param_1,param_3,param_2);
    *param_6 = uVar1;
  }
  return;
}




float FUN_00d08a8c(float param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar5 = 0.0;
  fVar2 = 0.0;
  if (*(int *)(param_3 + 0x38) == 0) {
    fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
            (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0)
            );
    fVar4 = (*(float *)(lVar1 + 0x240) + 1.0) *
            (*(float *)(lVar1 + 0xd8) +
            *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0));
    if (DAT_0314fee0 <= fVar2) {
      fVar2 = DAT_0314fee0;
    }
    fVar3 = DAT_0314fe20;
    if (DAT_0314fe20 <= fVar2) {
      fVar3 = fVar2;
    }
    if (DAT_0314ff80 <= fVar4) {
      fVar4 = DAT_0314ff80;
    }
    fVar2 = DAT_0314fec0;
    if (DAT_0314fec0 <= fVar4) {
      fVar2 = fVar4;
    }
    fVar2 = (float)FUN_00d08368(fVar3 - *(float *)(lVar1 + 0x38),param_3,param_4,param_4 == 5,
                                (int)fVar2);
    fVar2 = fVar2 + 0.0;
  }
  fVar4 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_0314fef0 <= fVar4) {
    fVar4 = DAT_0314fef0;
  }
  fVar3 = DAT_0314fe30;
  if (DAT_0314fe30 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = fVar3 - *(float *)(lVar1 + 0x48);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (0.0 < fVar3) {
    fVar5 = fVar3 * *(float *)(param_3 + 0x28) * param_1 + 0.0;
  }
  if (0.0 < fVar4) {
    fVar5 = fVar5 + fVar4 * *(float *)(param_3 + 0x24);
  }
  return fVar2 + fVar5;
}




float FUN_00d08c08(long param_1,long param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar5 = 0.0;
  fVar2 = 0.0;
  if (*(int *)(param_2 + 0x38) == 1) {
    fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
            (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0)
            );
    fVar4 = (*(float *)(lVar1 + 0x240) + 1.0) *
            (*(float *)(lVar1 + 0xd8) +
            *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0));
    if (DAT_0314fee0 <= fVar2) {
      fVar2 = DAT_0314fee0;
    }
    fVar3 = DAT_0314fe20;
    if (DAT_0314fe20 <= fVar2) {
      fVar3 = fVar2;
    }
    if (DAT_0314ff80 <= fVar4) {
      fVar4 = DAT_0314ff80;
    }
    fVar2 = DAT_0314fec0;
    if (DAT_0314fec0 <= fVar4) {
      fVar2 = fVar4;
    }
    fVar2 = (float)FUN_00d08368(fVar3 - *(float *)(lVar1 + 0x38),param_2,param_3,param_3 == 5,
                                (int)fVar2);
    fVar2 = fVar2 + 0.0;
  }
  fVar4 = (*(float *)(lVar1 + 0x1b4) + 1.0) *
          (*(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0))
  ;
  if (DAT_0314fef4 <= fVar4) {
    fVar4 = DAT_0314fef4;
  }
  fVar3 = DAT_0314fe34;
  if (DAT_0314fe34 <= fVar4) {
    fVar3 = fVar4;
  }
  if (0.0 < fVar3) {
    fVar5 = fVar3 * *(float *)(param_2 + 0x20) + 0.0;
  }
  return fVar2 + fVar5;
}




float FUN_00d08d64(long param_1,long param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 0.0;
  if (*(int *)(param_2 + 0x38) == 2) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar4 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
            (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0)
            );
    fVar2 = (*(float *)(lVar1 + 0x240) + 1.0) *
            (*(float *)(lVar1 + 0xd8) +
            *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0));
    if (DAT_0314fee0 <= fVar4) {
      fVar4 = DAT_0314fee0;
    }
    fVar3 = DAT_0314fe20;
    if (DAT_0314fe20 <= fVar4) {
      fVar3 = fVar4;
    }
    if (DAT_0314ff80 <= fVar2) {
      fVar2 = DAT_0314ff80;
    }
    fVar4 = DAT_0314fec0;
    if (DAT_0314fec0 <= fVar2) {
      fVar4 = fVar2;
    }
    fVar2 = (float)FUN_00d08368(fVar3 - *(float *)(lVar1 + 0x38),param_2,param_3,param_3 == 5,
                                (int)fVar4);
    fVar2 = fVar2 + 0.0;
  }
  return fVar2;
}




void FUN_00d08e3c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d50ef8();
  uVar1 = FUN_00d504c4(param_1);
  FUN_00d08e88(uVar2,param_2,uVar1,param_3);
  return;
}




float FUN_00d08e88(long param_1,long param_2,int param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 0.0;
  if ((param_4 & 1) != 0) {
    fVar2 = *(float *)(param_2 + 0x10);
    fVar3 = (float)(param_3 + -1);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (param_3 != 5) {
      fVar2 = 0.0;
    }
    fVar2 = *(float *)(param_2 + 8) + fVar3 * *(float *)(param_2 + 0xc) + fVar2 + 0.0;
  }
  if ((param_4 >> 5 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x240) + 1.0) *
            (*(float *)(lVar1 + 0xd8) +
            *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0));
    if (DAT_0314ff80 <= fVar3) {
      fVar3 = DAT_0314ff80;
    }
    fVar4 = DAT_0314fec0;
    if (DAT_0314fec0 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar3 = (float)(int)(fVar4 + -1.0);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x20) * fVar3;
  }
  if ((param_4 >> 1 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
            (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0)
            );
    if (DAT_0314fef0 <= fVar3) {
      fVar3 = DAT_0314fef0;
    }
    fVar4 = DAT_0314fe30;
    if (DAT_0314fe30 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * fVar4;
  }
  if ((param_4 >> 2 & 1) != 0) {
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * *(float *)(*(long *)(param_1 + 0x40) + 0xfc);
  }
  if ((param_4 >> 3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b4) + 1.0) *
            (*(float *)(lVar1 + 0x4c) +
            *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0));
    if (DAT_0314fef4 <= fVar3) {
      fVar3 = DAT_0314fef4;
    }
    fVar4 = DAT_0314fe34;
    if (DAT_0314fe34 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x14) * fVar4;
  }
  if ((param_4 >> 4 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b8) + 1.0) *
            (*(float *)(lVar1 + 0x50) +
            *(float *)(lVar1 + 0x104) * (*(float *)(lVar1 + 0x26c) + 1.0));
    if (DAT_0314fef8 <= fVar3) {
      fVar3 = DAT_0314fef8;
    }
    fVar4 = DAT_0314fe38;
    if (DAT_0314fe38 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x1c) * fVar4;
  }
  if (((param_4 >> 6 & 1) != 0) && (fVar2 <= *(float *)(param_2 + 0x24))) {
    fVar2 = *(float *)(param_2 + 0x24);
  }
  if ((param_4 >> 7 & 1) != 0) {
    if (*(float *)(param_2 + 0x24) <= fVar2) {
      fVar2 = *(float *)(param_2 + 0x24);
    }
    return fVar2;
  }
  return fVar2;
}




void thunk_FUN_00d086f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d4ee0c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x228));
  FUN_00d08728(param_1,uVar1,param_3);
  return;
}

