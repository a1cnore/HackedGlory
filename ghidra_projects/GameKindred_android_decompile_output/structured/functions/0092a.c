// functions/0092a — 35 functions
#include "libGameKindred.h"




undefined8 FUN_0092a024(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d043c0(param_1[1],auStack_58,*param_1,*(undefined1 *)(param_1 + 2),
               *(char *)((long)param_1 + 9) != '\0');
  if (*(char *)((long)param_1 + 10) == '\0') {
    FUN_00d043f4(auStack_58);
  }
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    FUN_00d043fc(auStack_58);
  }
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a0bc(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d014b4(param_1[2],auStack_58,*param_1,*(undefined1 *)((long)param_1 + 0xe),
               *(undefined2 *)(param_1 + 3),*(undefined1 *)((long)param_1 + 0xf),param_1[1],1);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a130(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d04fa4(auStack_50,*param_1,param_1[1],0);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a194(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d00d20(param_1[2],0,param_1[3],param_1[4],param_1[5],param_1[6],auStack_80,*param_1,
               param_1[1],*(undefined1 *)(param_1 + 7));
  local_68 = 1;
  FUN_00ce20fc(auStack_80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a208(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d00d68(param_1[3],param_1[4],param_1[5],auStack_80,*param_1,param_1[1],param_1[2],
               *(undefined1 *)(param_1 + 6));
  local_68 = 1;
  FUN_00ce20fc(auStack_80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a278(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 2);
  local_90 = *(undefined8 *)(param_1 + 4);
  FUN_00d00dc4(auStack_80,*param_1,param_1[1],&local_88,&local_90);
  local_68 = 1;
  FUN_00ce20fc(auStack_80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a2f0(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d01174(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a350(void)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d073e8(auStack_48);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a3ac(void)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d07334(auStack_48);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a408(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d01e48(auStack_48,*param_1,*(undefined1 *)(param_1 + 1));
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a46c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d065d8(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a4cc(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d005bc(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a52c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d02f78(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a58c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d01344(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a5ec(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d00774(auStack_50,*param_1,param_1[1],*(char *)(param_1 + 2) != '\0',
               *(char *)((long)param_1 + 9) != '\0');
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a664(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d03154(auStack_50,*param_1,param_1[1],param_1[2]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a6c8(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar5 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar5 = -1.0;
    }
    fVar5 = fVar5 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar5 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  FUN_00cfe8d0(fVar5,0,0,auStack_80,param_1[1],*param_1,*(undefined2 *)((long)param_1 + 0xe),
               *(undefined4 *)((long)param_1 + 10),1,0,0);
  local_68 = 1;
  FUN_00ce20fc(auStack_80);
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a7c0(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar3 = uVar1 >> 10 & 0x1f;
  if ((uVar1 >> 10 & 0x1f) == 0) {
    fVar5 = 1.0;
    if (uVar1 >> 0xf != 0) {
      fVar5 = -1.0;
    }
    fVar5 = fVar5 * (float)(uVar1 & 0x3ff) * 5.9604645e-08;
  }
  else {
    uVar2 = (uint)(uVar1 >> 0xf) << 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar2 | (uVar1 & 0x3ff) != 0 | 0x7f800000);
    }
    else {
      fVar5 = (float)(uVar2 | (uVar1 & 0x3ff) << 0xd | uVar3 * 0x800000 + 0x38000000);
    }
  }
  FUN_00cfe8d0(fVar5,*(undefined4 *)((long)param_1 + 0x12),*(undefined4 *)((long)param_1 + 0x16),
               auStack_80,param_1[1],*param_1,*(undefined2 *)((long)param_1 + 0xe),
               *(undefined4 *)((long)param_1 + 10),*(undefined2 *)(param_1 + 4),
               *(undefined4 *)((long)param_1 + 0x1a),*(undefined4 *)((long)param_1 + 0x1e));
  local_68 = 1;
  FUN_00ce20fc(auStack_80);
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a8b8(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d06f7c(auStack_50,*param_1,*(undefined2 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 6));
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a920(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d04628(param_1[2],auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a984(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d0473c(auStack_50,*param_1,param_1[1],param_1[2]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092a9e8(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d048bc(auStack_58,*param_1,param_1[1],param_1[2],1);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092aa50(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d0531c(auStack_50,*param_1,param_1[1],param_1[2]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092aab4(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_80 [2];
  undefined1 auStack_78 [24];
  undefined1 local_60;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_1;
  FUN_00d9ff84(local_80,param_1[2]);
  FUN_00d04b5c(auStack_78,uVar1,local_80[0],param_1[1]);
  if (param_1[3] != -1) {
    FUN_00d04b90(auStack_78);
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 1:
    FUN_00d04d2c(*(undefined4 *)((long)param_1 + 0x11),auStack_78);
    break;
  case 2:
    FUN_00d04d3c(auStack_78,*(undefined4 *)((long)param_1 + 0x11));
    break;
  case 3:
    FUN_00d04d48(auStack_78,*(undefined4 *)((long)param_1 + 0x11));
    break;
  case 5:
    FUN_00d04d68(auStack_78,(long)param_1 + 0x11);
  }
  local_60 = 1;
  FUN_00ce20fc(auStack_78);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092abb8(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d009d0(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092ac18(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d07d9c(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092ac78(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d0108c(auStack_50,*param_1,param_1[1],param_1[2]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092acdc(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009843ac(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092ad3c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d06024(auStack_50,*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092ada0(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d04e08(param_1[2],auStack_58,*param_1,param_1[1],*(undefined1 *)(param_1 + 3));
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092ae08(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d040ec(auStack_58,*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092ae70(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d0542c(auStack_50,*param_1,*(undefined1 *)(param_1 + 1),*(undefined1 *)((long)param_1 + 5),
               *(undefined1 *)((long)param_1 + 6),*(undefined1 *)((long)param_1 + 7));
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092aee0(undefined4 *param_1)

{
  byte bVar1;
  long lVar2;
  byte local_60 [24];
  undefined1 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)((long)param_1 + 5);
  FUN_00ceabf4(local_60);
  FUN_009844b0(local_60,*param_1,*(undefined1 *)(param_1 + 1),local_60[0] & 0xfc | bVar1 & 3);
  local_48 = 1;
  FUN_00ce20fc(local_60);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092af68(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ceac04(&local_58);
  local_58 = param_1[1];
  uStack_54 = CONCAT31(uStack_54._1_3_,(byte)uStack_54 & 0xfc | *(byte *)(param_1 + 2) & 3);
  FUN_00985840(auStack_50,*param_1,CONCAT44(uStack_54,local_58));
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092afec(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced200(*param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00cec410(*param_1,1);
  }
  return 1;
}

