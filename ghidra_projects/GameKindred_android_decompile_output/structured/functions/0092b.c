// functions/0092b — 28 functions
#include "libGameKindred.h"




undefined8 FUN_0092b024(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced200(*param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00cec4f0(*param_1,1);
  }
  return 1;
}




undefined8 FUN_0092b05c(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ced200(*param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00cec410(*param_1,0);
    FUN_00cec4f0(*param_1,0);
  }
  return 1;
}




undefined8 FUN_0092b0a0(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 2);
  local_68 = param_1[4];
  FUN_00d061a8(auStack_60,*param_1,param_1[1],&local_70,*(undefined1 *)(param_1 + 5),
               *(undefined1 *)((long)param_1 + 0x15));
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b11c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009841dc(*(undefined4 *)((long)param_1 + 9),auStack_58,*param_1,*(undefined1 *)(param_1 + 1),
               *(undefined4 *)((long)param_1 + 5),*(undefined4 *)((long)param_1 + 0xd));
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b18c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d00bd4(auStack_50,*param_1,param_1[1],*(short *)(param_1 + 2) != 0);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b1f8(undefined4 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  cVar1 = *(char *)(param_1 + 5);
  if (cVar1 == '\0') {
    FUN_00d01aa4(auStack_60,*param_1,param_1[1],param_1[2]);
  }
  else if (cVar1 == '\x01') {
    local_68 = *(undefined8 *)(param_1 + 3);
    FUN_00d01ad0(auStack_60,*param_1,param_1[1],&local_68);
  }
  else {
    if (cVar1 != '\x02') goto LAB_0092b278;
    FUN_00d01a68(auStack_60,*param_1,param_1[1]);
  }
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
LAB_0092b278:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b2a0(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d06994(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b300(undefined4 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009bbf9c();
  if ((uVar1 & 1) != 0) {
    FUN_009bbfb0();
    FUN_009bd5c0(*param_1);
  }
  return 1;
}




undefined8 FUN_0092b334(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_00d7e3d0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x7b2a736) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x7b2a736];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x7b2a737)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return 1;
}




undefined8 FUN_0092b3d0(void)

{
  FUN_009e07a0();
  return 1;
}




undefined8 FUN_0092b3e8(void)

{
  FUN_009e077c();
  return 1;
}




undefined8 FUN_0092b400(void)

{
  FUN_009e07c4();
  return 1;
}




undefined8 FUN_0092b418(void)

{
  FUN_009e07e8();
  return 1;
}




undefined8 FUN_0092b430(void)

{
  FUN_009e0830();
  return 1;
}




undefined8 FUN_0092b448(void)

{
  FUN_009e080c();
  return 1;
}




undefined8 FUN_0092b460(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + lVar2);
    if (*(char *)(puVar1 + 1) != '\0') {
      FUN_00cec560(*puVar1,*(char *)((long)puVar1 + 5) != '\0');
    }
    lVar2 = lVar2 + 6;
  } while (lVar2 != 0x60);
  return 1;
}




undefined8 FUN_0092b4b0(void)

{
  FUN_009e0854();
  return 1;
}




undefined8 FUN_0092b4c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009bbfb0();
  FUN_008fa54c(local_50,param_1);
  FUN_009bd430(*(undefined4 *)(param_1 + 0x40),uVar2,local_50,*(char *)(param_1 + 0x44) != '\0');
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b558(char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009188a4();
  FUN_0091a468(uVar1,*param_1 != '\0');
  FUN_009bbfb0();
  FUN_009bd54c();
  return 1;
}




undefined8 FUN_0092b594(undefined4 *param_1)

{
  FUN_00cec5d0(*param_1,*(char *)(param_1 + 1) != '\0');
  return 1;
}




undefined8 FUN_0092b5bc(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_e8 [24];
  undefined1 local_d0;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d079b4(*param_1,auStack_e8,*(undefined1 *)(param_1 + 0x25),
               *(undefined1 *)((long)param_1 + 0x95),param_1 + 1,param_1 + 0x11,param_1 + 0x15,
               *(undefined1 *)((long)param_1 + 0x96));
  local_d0 = 1;
  FUN_00ce20fc(auStack_e8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b634(int *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d05f10(auStack_48,*param_1 != 0);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b69c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d06dd8(*param_1,auStack_48);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b6fc(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d06e80(auStack_50,*param_1,*(char *)(param_1 + 1) != '\0');
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b768(undefined4 *param_1)

{
  FUN_00942840(*param_1);
  return 1;
}




undefined8 FUN_0092b784(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d078b4(auStack_58,*param_1,param_1[1],*(undefined1 *)(param_1 + 2),
               *(char *)((long)param_1 + 9) != '\0');
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0092b7f4(void)

{
  long lVar1;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = &PTR_FUN_027be348;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 1;
  FUN_00ce20fc(&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0092b85c(ushort *param_1,undefined4 param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint3 uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint local_a68;
  uint uStack_a64;
  undefined4 local_a60;
  undefined8 uStack_a5c;
  undefined1 uStack_a54;
  undefined1 uStack_a53;
  undefined1 uStack_a52;
  undefined1 uStack_a51;
  undefined1 uStack_a50;
  undefined1 uStack_a4f;
  undefined1 auStack_a4e [2];
  undefined1 uStack_a4c;
  undefined1 uStack_a4b;
  ushort uStack_a4a;
  undefined1 uStack_a48;
  undefined1 uStack_a47;
  ushort uStack_a46;
  undefined1 uStack_a44;
  undefined1 uStack_a43;
  ushort uStack_a42;
  undefined2 uStack_a40;
  undefined2 uStack_a3e;
  undefined2 uStack_a3c;
  undefined2 uStack_a3a;
  ushort uStack_a38;
  undefined2 uStack_a36;
  undefined2 uStack_a34;
  undefined2 local_a32;
  undefined2 uStack_a30;
  undefined2 local_a2e;
  undefined2 uStack_a2c;
  undefined2 local_a2a;
  undefined2 uStack_a28;
  undefined2 local_a26;
  undefined2 uStack_a24;
  undefined2 uStack_a22;
  ushort local_a20;
  undefined2 uStack_a1e;
  undefined2 uStack_a1c;
  undefined2 local_a1a;
  undefined2 uStack_a18;
  ushort uStack_a16;
  undefined1 uStack_a14;
  undefined1 local_a13;
  ushort uStack_a12;
  undefined1 uStack_a10;
  undefined1 uStack_a0f;
  ushort local_a0e;
  undefined1 auStack_a0c [10];
  ushort local_a02;
  byte bStack_a00;
  undefined1 uStack_9ff;
  ushort local_9fe;
  undefined2 uStack_9fc;
  uint local_9fa;
  uint local_9f6;
  undefined2 local_9f2;
  undefined2 uStack_9f0;
  undefined2 local_9ee;
  undefined2 uStack_9ec;
  uint local_9ea;
  uint local_9e6;
  uint local_9e2;
  uint local_9de;
  uint local_9da;
  uint local_9d6;
  uint local_9d2;
  uint local_9ce;
  uint local_9ca;
  uint local_9c6;
  undefined2 local_9c2;
  undefined2 uStack_9c0;
  undefined2 local_9be;
  undefined2 uStack_9bc;
  undefined2 uStack_9ba;
  uint local_9b8;
  uint local_9b4;
  undefined2 uStack_9b0;
  undefined2 local_9ae;
  undefined2 uStack_9ac;
  undefined2 local_9aa;
  undefined2 uStack_9a8;
  undefined2 local_9a6;
  undefined2 uStack_9a4;
  undefined2 local_9a2;
  undefined2 uStack_9a0;
  undefined2 local_99e;
  undefined2 uStack_99c;
  undefined2 local_99a;
  undefined2 uStack_998;
  undefined2 local_996;
  undefined2 uStack_994;
  uint local_992;
  uint local_98e;
  uint local_98a;
  uint local_986;
  uint local_982;
  uint local_97e;
  uint local_97a;
  uint local_976;
  uint local_972;
  uint local_96e;
  uint local_96a;
  uint local_966;
  uint local_962;
  uint local_95e;
  uint local_95a;
  uint local_956;
  undefined1 local_952 [4];
  undefined4 uStack_94e;
  uint local_94a;
  uint local_946;
  uint local_942;
  uint local_93e;
  uint local_93a;
  uint local_936;
  uint local_932;
  uint local_92e;
  uint local_92a;
  uint local_926;
  uint local_922;
  uint local_91e;
  uint local_91a;
  uint local_916;
  uint local_912;
  uint local_90e;
  uint local_90a;
  uint local_906;
  uint local_902;
  uint local_8fe [10];
  uint local_8d6 [10];
  uint local_8ae [10];
  uint local_886 [10];
  uint local_85e [10];
  uint local_836 [9];
  uint local_80f;
  uint local_80b;
  uint local_807 [8];
  uint local_7e7 [8];
  uint local_7c7 [8];
  uint local_7a7;
  uint local_7a3;
  uint local_79f;
  uint local_79b;
  uint local_77f;
  uint local_77b;
  uint local_214;
  uint local_210;
  
  lVar10 = tpidr_el0;
  lVar15 = *(long *)(lVar10 + 0x28);
  puVar20 = (uint *)(param_1 + 1);
  uVar6 = *param_1 >> 8 | *param_1 << 8;
  uVar13 = FUN_00923fe8();
  if ((uVar13 & 1) != 0) {
    FUN_00923768(param_1,param_2);
  }
  uVar13 = FUN_00ce271c();
  if ((uVar13 & 1) != 0) {
    FUN_00942758();
  }
  switch(uVar6) {
  case 0x3e9:
    memcpy(&local_a60,puVar20,0x65);
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = CONCAT13(uStack_a5c._3_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = CONCAT22(uStack_a5c._6_2_,CONCAT11(uStack_a5c._5_1_,uStack_a5c._4_1_));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = CONCAT22(local_9fe,CONCAT11(uStack_9ff,bStack_a00));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_9fe = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    bStack_a00 = (byte)(uVar9 >> 0x18);
    uStack_9ff = (undefined1)(uVar14 >> 0x10);
    uVar13 = FUN_00923fdc();
    if ((uVar13 & 1) != 0) {
      uStack_a5c._0_1_ = 0;
      uStack_a5c._1_1_ = 0;
      uStack_a5c._2_1_ = 0;
      uStack_a5c._3_1_ = 0;
    }
    FUN_009292e4(&local_a60);
    break;
  case 0x3ea:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar13 = FUN_00ced200(uVar9);
    if ((uVar13 & 1) != 0) {
      FUN_00cec410(uVar9,1);
    }
    break;
  case 0x3eb:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar13 = FUN_00ced200(uVar9);
    if ((uVar13 & 1) != 0) {
      FUN_00cec4f0(uVar9,1);
    }
    break;
  case 0x3ec:
    uVar9 = *puVar20 & 0xff00ff00;
    uVar14 = *puVar20 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    FUN_0092b05c(&local_a60);
    break;
  case 0x3ed:
    memcpy(&local_a60,puVar20,0x48);
    uVar9 = (CONCAT22(uStack_a1e,local_a20) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a1e,local_a20) & 0xff00ff) << 8;
    local_a20 = (ushort)(uVar9 >> 0x10);
    uStack_a1e = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a1a,uStack_a1c) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a1a,uStack_a1c) & 0xff00ff) << 8;
    uStack_a1c = (undefined2)(uVar9 >> 0x10);
    local_a1a = (undefined2)uVar9;
    FUN_009293e4(&local_a60);
    break;
  case 0x3ee:
    memcpy(&local_a60,puVar20,0xd8);
    uVar9 = (CONCAT22(local_9be,uStack_9c0) & 0xff00ff00) >> 8 |
            (CONCAT22(local_9be,uStack_9c0) & 0xff00ff) << 8;
    uStack_9c0 = (undefined2)(uVar9 >> 0x10);
    local_9be = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9ba,uStack_9bc) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9ba,uStack_9bc) & 0xff00ff) << 8;
    uStack_9bc = (undefined2)(uVar9 >> 0x10);
    uStack_9ba = (undefined2)uVar9;
    uVar9 = (local_9b8 & 0xff00ff00) >> 8 | (local_9b8 & 0xff00ff) << 8;
    local_9b8 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_9b4 & 0xff00ff00) >> 8 | (local_9b4 & 0xff00ff) << 8;
    local_9b4 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (CONCAT22(local_9ae,uStack_9b0) & 0xff00ff00) >> 8 |
            (CONCAT22(local_9ae,uStack_9b0) & 0xff00ff) << 8;
    uStack_9b0 = (undefined2)(uVar9 >> 0x10);
    local_9ae = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_9aa,uStack_9ac) & 0xff00ff00) >> 8 |
            (CONCAT22(local_9aa,uStack_9ac) & 0xff00ff) << 8;
    uStack_9ac = (undefined2)(uVar9 >> 0x10);
    local_9aa = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_9a6,uStack_9a8) & 0xff00ff00) >> 8 |
            (CONCAT22(local_9a6,uStack_9a8) & 0xff00ff) << 8;
    uStack_9a8 = (undefined2)(uVar9 >> 0x10);
    local_9a6 = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_9a2,uStack_9a4) & 0xff00ff00) >> 8 |
            (CONCAT22(local_9a2,uStack_9a4) & 0xff00ff) << 8;
    uStack_9a4 = (undefined2)(uVar9 >> 0x10);
    local_9a2 = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_99e,uStack_9a0) & 0xff00ff00) >> 8 |
            (CONCAT22(local_99e,uStack_9a0) & 0xff00ff) << 8;
    uStack_9a0 = (undefined2)(uVar9 >> 0x10);
    local_99e = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_99a,uStack_99c) & 0xff00ff00) >> 8 |
            (CONCAT22(local_99a,uStack_99c) & 0xff00ff) << 8;
    uStack_99c = (undefined2)(uVar9 >> 0x10);
    local_99a = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_996,uStack_998) & 0xff00ff00) >> 8 |
            (CONCAT22(local_996,uStack_998) & 0xff00ff) << 8;
    uStack_998 = (undefined2)(uVar9 >> 0x10);
    local_996 = (undefined2)uVar9;
    FUN_009298c8(&local_a60);
    break;
  case 0x3ef:
    FUN_00d073e8(&local_a60);
    goto LAB_0092d938;
  case 0x3f0:
    FUN_00d07334(&local_a60);
    goto LAB_0092d938;
  case 0x3f1:
    FUN_00d01e48(&local_a60,*(undefined1 *)((long)param_1 + 5),(char)param_1[3]);
    goto LAB_0092d938;
  case 0x3f2:
    memcpy(&local_a60,puVar20,0x7a);
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = CONCAT13(uStack_a5c._3_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = CONCAT22(uStack_a5c._6_2_,CONCAT11(uStack_a5c._5_1_,uStack_a5c._4_1_));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = CONCAT22(auStack_a4e,CONCAT11(uStack_a4f,uStack_a50));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = CONCAT22(uStack_a4a,CONCAT11(uStack_a4b,uStack_a4c));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    uVar14 = CONCAT22(uStack_a46,CONCAT11(uStack_a47,uStack_a48));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar14 >> 0x10);
    uVar14 = CONCAT22(uStack_a42,CONCAT11(uStack_a43,uStack_a44));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a42 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a44 = (undefined1)(uVar9 >> 0x18);
    uStack_a43 = (undefined1)(uVar14 >> 0x10);
    uVar9 = (CONCAT22(uStack_a3e,uStack_a40) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a3e,uStack_a40) & 0xff00ff) << 8;
    uStack_a40 = (undefined2)(uVar9 >> 0x10);
    uStack_a3e = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a3a,uStack_a3c) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a3a,uStack_a3c) & 0xff00ff) << 8;
    uStack_a3c = (undefined2)(uVar9 >> 0x10);
    uStack_a3a = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a36,uStack_a38) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a36,uStack_a38) & 0xff00ff) << 8;
    uStack_a38 = (ushort)(uVar9 >> 0x10);
    uStack_a36 = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a32,uStack_a34) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a32,uStack_a34) & 0xff00ff) << 8;
    uStack_a34 = (undefined2)(uVar9 >> 0x10);
    local_a32 = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a2e,uStack_a30) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a2e,uStack_a30) & 0xff00ff) << 8;
    uStack_a30 = (undefined2)(uVar9 >> 0x10);
    local_a2e = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a2a,uStack_a2c) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a2a,uStack_a2c) & 0xff00ff) << 8;
    uStack_a2c = (undefined2)(uVar9 >> 0x10);
    local_a2a = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a26,uStack_a28) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a26,uStack_a28) & 0xff00ff) << 8;
    uStack_a28 = (undefined2)(uVar9 >> 0x10);
    local_a26 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a22,uStack_a24) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a22,uStack_a24) & 0xff00ff) << 8;
    uStack_a24 = (undefined2)(uVar9 >> 0x10);
    uStack_a22 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a1e,local_a20) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a1e,local_a20) & 0xff00ff) << 8;
    local_a20 = (ushort)(uVar9 >> 0x10);
    uStack_a1e = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a1a,uStack_a1c) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a1a,uStack_a1c) & 0xff00ff) << 8;
    uStack_a1c = (undefined2)(uVar9 >> 0x10);
    local_a1a = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a16,uStack_a18) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a16,uStack_a18) & 0xff00ff) << 8;
    uStack_a18 = (undefined2)(uVar9 >> 0x10);
    uStack_a16 = (ushort)uVar9;
    uVar14 = CONCAT22(uStack_a12,CONCAT11(local_a13,uStack_a14));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a12 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a14 = (undefined1)(uVar9 >> 0x18);
    local_a13 = (undefined1)(uVar14 >> 0x10);
    uVar14 = CONCAT22(local_a0e,CONCAT11(uStack_a0f,uStack_a10));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a0e = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a10 = (undefined1)(uVar9 >> 0x18);
    uStack_a0f = (undefined1)(uVar14 >> 0x10);
    uVar9 = (CONCAT22(auStack_a0c._2_2_,auStack_a0c._0_2_) & 0xff00ff00) >> 8 |
            (CONCAT22(auStack_a0c._2_2_,auStack_a0c._0_2_) & 0xff00ff) << 8;
    auStack_a0c._0_2_ = (undefined2)(uVar9 >> 0x10);
    auStack_a0c._2_2_ = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_9ee,uStack_9f0) & 0xff00ff00) >> 8 |
            (CONCAT22(local_9ee,uStack_9f0) & 0xff00ff) << 8;
    uStack_9f0 = (undefined2)(uVar9 >> 0x10);
    local_9ee = (undefined2)uVar9;
    FUN_00928854(&local_a60);
    break;
  case 0x3f3:
    memcpy(&local_a60,puVar20,0x2ea);
    uVar12 = local_902;
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = CONCAT13(uStack_a5c._3_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = CONCAT22(uStack_a5c._6_2_,CONCAT11(uStack_a5c._5_1_,uStack_a5c._4_1_));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar9 = CONCAT13(uStack_a4b,CONCAT12(uStack_a4c,auStack_a4e)) & 0xff00ff00;
    uVar14 = CONCAT12(uStack_a4c,auStack_a4e) & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8));
    uStack_a4c = (undefined1)(uVar9 >> 8);
    uStack_a4b = (undefined1)uVar14;
    uVar9 = CONCAT13(uStack_a47,CONCAT12(uStack_a48,uStack_a4a)) & 0xff00ff00;
    uVar14 = CONCAT12(uStack_a48,uStack_a4a) & 0xff00ff;
    uStack_a4a = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a48 = (undefined1)(uVar9 >> 8);
    uStack_a47 = (undefined1)uVar14;
    uVar9 = CONCAT13(uStack_a43,CONCAT12(uStack_a44,uStack_a46)) & 0xff00ff00;
    uVar14 = CONCAT12(uStack_a44,uStack_a46) & 0xff00ff;
    uStack_a46 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a44 = (undefined1)(uVar9 >> 8);
    uStack_a43 = (undefined1)uVar14;
    uVar9 = (CONCAT22(uStack_a40,uStack_a42) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a40,uStack_a42) & 0xff00ff) << 8;
    uStack_a42 = (ushort)(uVar9 >> 0x10);
    uStack_a40 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a3c,uStack_a3e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a3c,uStack_a3e) & 0xff00ff) << 8;
    uStack_a3e = (undefined2)(uVar9 >> 0x10);
    uStack_a3c = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a38,uStack_a3a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a38,uStack_a3a) & 0xff00ff) << 8;
    uStack_a3a = (undefined2)(uVar9 >> 0x10);
    uStack_a38 = (ushort)uVar9;
    uVar9 = (CONCAT22(uStack_a34,uStack_a36) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a34,uStack_a36) & 0xff00ff) << 8;
    uStack_a36 = (undefined2)(uVar9 >> 0x10);
    uStack_a34 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a30,local_a32) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a30,local_a32) & 0xff00ff) << 8;
    local_a32 = (undefined2)(uVar9 >> 0x10);
    uStack_a30 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a2c,local_a2e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a2c,local_a2e) & 0xff00ff) << 8;
    local_a2e = (undefined2)(uVar9 >> 0x10);
    uStack_a2c = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a28,local_a2a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a28,local_a2a) & 0xff00ff) << 8;
    local_a2a = (undefined2)(uVar9 >> 0x10);
    uStack_a28 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a24,local_a26) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a24,local_a26) & 0xff00ff) << 8;
    local_a26 = (undefined2)(uVar9 >> 0x10);
    uStack_a24 = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a20,uStack_a22) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a20,uStack_a22) & 0xff00ff) << 8;
    uStack_a22 = (undefined2)(uVar9 >> 0x10);
    local_a20 = (ushort)uVar9;
    uVar9 = (CONCAT22(uStack_a1c,uStack_a1e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a1c,uStack_a1e) & 0xff00ff) << 8;
    uStack_a1e = (undefined2)(uVar9 >> 0x10);
    uStack_a1c = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a18,local_a1a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a18,local_a1a) & 0xff00ff) << 8;
    local_a1a = (undefined2)(uVar9 >> 0x10);
    uStack_a18 = (undefined2)uVar9;
    uVar9 = (local_90e & 0xff00ff00) >> 8 | (local_90e & 0xff00ff) << 8;
    local_90e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_90a & 0xff00ff00) >> 8 | (local_90a & 0xff00ff) << 8;
    local_90a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_906 & 0xff00ff00) >> 8 | (local_906 & 0xff00ff) << 8;
    local_906 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = CONCAT13(local_a13,CONCAT12(uStack_a14,uStack_a16)) & 0xff00ff00;
    uVar14 = CONCAT12(uStack_a14,uStack_a16) & 0xff00ff;
    uStack_a16 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a14 = (undefined1)(uVar9 >> 8);
    local_a13 = (undefined1)uVar14;
    uVar9 = CONCAT13(uStack_a0f,CONCAT12(uStack_a10,uStack_a12)) & 0xff00ff00;
    uVar14 = CONCAT12(uStack_a10,uStack_a12) & 0xff00ff;
    uStack_a12 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a10 = (undefined1)(uVar9 >> 8);
    uStack_a0f = (undefined1)uVar14;
    uVar9 = (CONCAT22(auStack_a0c._0_2_,local_a0e) & 0xff00ff00) >> 8 |
            (CONCAT22(auStack_a0c._0_2_,local_a0e) & 0xff00ff) << 8;
    local_a0e = (ushort)(uVar9 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)uVar9;
    uVar9 = (CONCAT22(auStack_a0c._4_2_,auStack_a0c._2_2_) & 0xff00ff00) >> 8 |
            (CONCAT22(auStack_a0c._4_2_,auStack_a0c._2_2_) & 0xff00ff) << 8;
    auStack_a0c._2_2_ = (undefined2)(uVar9 >> 0x10);
    auStack_a0c._4_2_ = (undefined2)uVar9;
    uVar9 = (auStack_a0c._6_4_ & 0xff00ff00) >> 8 | (auStack_a0c._6_4_ & 0xff00ff) << 8;
    auStack_a0c._6_4_ = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = CONCAT13(uStack_9ff,CONCAT12(bStack_a00,local_a02)) & 0xff00ff00;
    uVar14 = CONCAT12(bStack_a00,local_a02) & 0xff00ff;
    local_a02 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    bStack_a00 = (byte)(uVar9 >> 8);
    uStack_9ff = (undefined1)uVar14;
    uVar9 = (CONCAT22(uStack_9fc,local_9fe) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9fc,local_9fe) & 0xff00ff) << 8;
    local_9fe = (ushort)(uVar9 >> 0x10);
    uStack_9fc = (undefined2)uVar9;
    uVar9 = (local_9fa & 0xff00ff00) >> 8 | (local_9fa & 0xff00ff) << 8;
    local_9fa = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_9f6 & 0xff00ff00) >> 8 | (local_9f6 & 0xff00ff) << 8;
    local_9f6 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (CONCAT22(uStack_9f0,local_9f2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9f0,local_9f2) & 0xff00ff) << 8;
    local_9f2 = (undefined2)(uVar9 >> 0x10);
    uStack_9f0 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9ec,local_9ee) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9ec,local_9ee) & 0xff00ff) << 8;
    local_9ee = (undefined2)(uVar9 >> 0x10);
    uStack_9ec = (undefined2)uVar9;
    uVar9 = (local_9ea & 0xff00ff00) >> 8 | (local_9ea & 0xff00ff) << 8;
    local_9ea = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_9e6 & 0xff00ff00) >> 8 | (local_9e6 & 0xff00ff) << 8;
    uVar14 = (local_9e2 & 0xff00ff00) >> 8 | (local_9e2 & 0xff00ff) << 8;
    uVar7 = (local_9de & 0xff00ff00) >> 8 | (local_9de & 0xff00ff) << 8;
    local_9e6 = uVar9 >> 0x10 | uVar9 << 0x10;
    local_9e2 = uVar14 >> 0x10 | uVar14 << 0x10;
    local_9de = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar9 = (local_9da & 0xff00ff00) >> 8 | (local_9da & 0xff00ff) << 8;
    uVar14 = (local_9d6 & 0xff00ff00) >> 8 | (local_9d6 & 0xff00ff) << 8;
    uVar7 = (local_9d2 & 0xff00ff00) >> 8 | (local_9d2 & 0xff00ff) << 8;
    uVar8 = (local_9ce & 0xff00ff00) >> 8 | (local_9ce & 0xff00ff) << 8;
    local_9da = uVar9 >> 0x10 | uVar9 << 0x10;
    local_9d6 = uVar14 >> 0x10 | uVar14 << 0x10;
    local_9d2 = uVar7 >> 0x10 | uVar7 << 0x10;
    local_9ce = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar9 = (local_9ca & 0xff00ff00) >> 8 | (local_9ca & 0xff00ff) << 8;
    uVar14 = (local_9c6 & 0xff00ff00) >> 8 | (local_9c6 & 0xff00ff) << 8;
    uVar7 = (CONCAT22(uStack_9c0,local_9c2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9c0,local_9c2) & 0xff00ff) << 8;
    uVar8 = (CONCAT22(uStack_9bc,local_9be) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9bc,local_9be) & 0xff00ff) << 8;
    local_9ca = uVar9 >> 0x10 | uVar9 << 0x10;
    local_9c6 = uVar14 >> 0x10 | uVar14 << 0x10;
    local_9c2 = (undefined2)(uVar7 >> 0x10);
    uStack_9c0 = (undefined2)uVar7;
    local_9be = (undefined2)(uVar8 >> 0x10);
    uStack_9bc = (undefined2)uVar8;
    uVar9 = (CONCAT22(uStack_9ac,local_9ae) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9ac,local_9ae) & 0xff00ff) << 8;
    uVar14 = (CONCAT22(uStack_9a8,local_9aa) & 0xff00ff00) >> 8 |
             (CONCAT22(uStack_9a8,local_9aa) & 0xff00ff) << 8;
    uVar7 = (CONCAT22(uStack_9a4,local_9a6) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9a4,local_9a6) & 0xff00ff) << 8;
    uVar8 = (CONCAT22(uStack_9a0,local_9a2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9a0,local_9a2) & 0xff00ff) << 8;
    local_9ae = (undefined2)(uVar9 >> 0x10);
    uStack_9ac = (undefined2)uVar9;
    local_9aa = (undefined2)(uVar14 >> 0x10);
    uStack_9a8 = (undefined2)uVar14;
    local_9a6 = (undefined2)(uVar7 >> 0x10);
    uStack_9a4 = (undefined2)uVar7;
    local_9a2 = (undefined2)(uVar8 >> 0x10);
    uStack_9a0 = (undefined2)uVar8;
    uVar9 = (CONCAT22(uStack_99c,local_99e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_99c,local_99e) & 0xff00ff) << 8;
    uVar14 = (CONCAT22(uStack_998,local_99a) & 0xff00ff00) >> 8 |
             (CONCAT22(uStack_998,local_99a) & 0xff00ff) << 8;
    uVar7 = (CONCAT22(uStack_994,local_996) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_994,local_996) & 0xff00ff) << 8;
    uVar8 = (local_992 & 0xff00ff00) >> 8 | (local_992 & 0xff00ff) << 8;
    local_99e = (undefined2)(uVar9 >> 0x10);
    uStack_99c = (undefined2)uVar9;
    local_99a = (undefined2)(uVar14 >> 0x10);
    uStack_998 = (undefined2)uVar14;
    local_996 = (undefined2)(uVar7 >> 0x10);
    uStack_994 = (undefined2)uVar7;
    local_992 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar9 = (local_98e & 0xff00ff00) >> 8 | (local_98e & 0xff00ff) << 8;
    uVar14 = (local_98a & 0xff00ff00) >> 8 | (local_98a & 0xff00ff) << 8;
    uVar7 = (local_986 & 0xff00ff00) >> 8 | (local_986 & 0xff00ff) << 8;
    uVar8 = (local_982 & 0xff00ff00) >> 8 | (local_982 & 0xff00ff) << 8;
    local_98e = uVar9 >> 0x10 | uVar9 << 0x10;
    local_98a = uVar14 >> 0x10 | uVar14 << 0x10;
    local_986 = uVar7 >> 0x10 | uVar7 << 0x10;
    local_982 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar9 = (local_97e & 0xff00ff00) >> 8 | (local_97e & 0xff00ff) << 8;
    uVar14 = (local_97a & 0xff00ff00) >> 8 | (local_97a & 0xff00ff) << 8;
    uVar7 = (local_976 & 0xff00ff00) >> 8 | (local_976 & 0xff00ff) << 8;
    uVar8 = (local_972 & 0xff00ff00) >> 8 | (local_972 & 0xff00ff) << 8;
    local_97e = uVar9 >> 0x10 | uVar9 << 0x10;
    local_97a = uVar14 >> 0x10 | uVar14 << 0x10;
    local_976 = uVar7 >> 0x10 | uVar7 << 0x10;
    local_972 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar9 = (local_96e & 0xff00ff00) >> 8 | (local_96e & 0xff00ff) << 8;
    uVar14 = (local_96a & 0xff00ff00) >> 8 | (local_96a & 0xff00ff) << 8;
    uVar7 = (local_966 & 0xff00ff00) >> 8 | (local_966 & 0xff00ff) << 8;
    uVar8 = (local_962 & 0xff00ff00) >> 8 | (local_962 & 0xff00ff) << 8;
    local_96e = uVar9 >> 0x10 | uVar9 << 0x10;
    local_96a = uVar14 >> 0x10 | uVar14 << 0x10;
    local_966 = uVar7 >> 0x10 | uVar7 << 0x10;
    local_962 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar9 = (local_95e & 0xff00ff00) >> 8 | (local_95e & 0xff00ff) << 8;
    local_95e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_95a & 0xff00ff00) >> 8 | (local_95a & 0xff00ff) << 8;
    local_95a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_956 & 0xff00ff00) >> 8 | (local_956 & 0xff00ff) << 8;
    local_956 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = ((uint)local_952 & 0xff00ff00) >> 8 | ((uint)local_952 & 0xff00ff) << 8;
    local_952 = (undefined1  [4])(uVar9 >> 0x10 | uVar9 << 0x10);
    uVar9 = (uStack_94e & 0xff00ff00) >> 8 | (uStack_94e & 0xff00ff) << 8;
    uStack_94e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_94a & 0xff00ff00) >> 8 | (local_94a & 0xff00ff) << 8;
    local_94a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_946 & 0xff00ff00) >> 8 | (local_946 & 0xff00ff) << 8;
    local_946 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_942 & 0xff00ff00) >> 8 | (local_942 & 0xff00ff) << 8;
    local_942 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_93e & 0xff00ff00) >> 8 | (local_93e & 0xff00ff) << 8;
    local_93e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_93a & 0xff00ff00) >> 8 | (local_93a & 0xff00ff) << 8;
    local_93a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_936 & 0xff00ff00) >> 8 | (local_936 & 0xff00ff) << 8;
    local_936 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_932 & 0xff00ff00) >> 8 | (local_932 & 0xff00ff) << 8;
    local_932 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_92e & 0xff00ff00) >> 8 | (local_92e & 0xff00ff) << 8;
    local_92e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_92a & 0xff00ff00) >> 8 | (local_92a & 0xff00ff) << 8;
    local_92a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_926 & 0xff00ff00) >> 8 | (local_926 & 0xff00ff) << 8;
    local_926 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_922 & 0xff00ff00) >> 8 | (local_922 & 0xff00ff) << 8;
    local_922 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_91e & 0xff00ff00) >> 8 | (local_91e & 0xff00ff) << 8;
    local_91e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_91a & 0xff00ff00) >> 8 | (local_91a & 0xff00ff) << 8;
    local_91a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_916 & 0xff00ff00) >> 8 | (local_916 & 0xff00ff) << 8;
    local_916 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_912 & 0xff00ff00) >> 8 | (local_912 & 0xff00ff) << 8;
    local_912 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_902 & 0xff00ff00) >> 8 | (local_902 & 0xff00ff) << 8;
    local_902 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_80f & 0xff00ff00) >> 8 | (local_80f & 0xff00ff) << 8;
    local_80f = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_79f & 0xff00ff00) >> 8 | (local_79f & 0xff00ff) << 8;
    local_79f = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_79b & 0xff00ff00) >> 8 | (local_79b & 0xff00ff) << 8;
    local_79b = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_77f & 0xff00ff00) >> 8 | (local_77f & 0xff00ff) << 8;
    local_77f = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_77b & 0xff00ff00) >> 8 | (local_77b & 0xff00ff) << 8;
    local_77b = uVar9 >> 0x10 | uVar9 << 0x10;
    if (uVar12 != 0) {
      uVar13 = 0;
      puVar20 = local_8ae;
      do {
        uVar13 = uVar13 + 1;
        uVar9 = (puVar20[-0x14] & 0xff00ff00) >> 8 | (puVar20[-0x14] & 0xff00ff) << 8;
        puVar20[-0x14] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (puVar20[-10] & 0xff00ff00) >> 8 | (puVar20[-10] & 0xff00ff) << 8;
        puVar20[-10] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
        *puVar20 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (puVar20[10] & 0xff00ff00) >> 8 | (puVar20[10] & 0xff00ff) << 8;
        puVar20[10] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (puVar20[0x14] & 0xff00ff00) >> 8 | (puVar20[0x14] & 0xff00ff) << 8;
        puVar20[0x14] = uVar9 >> 0x10 | uVar9 << 0x10;
        puVar20 = puVar20 + 1;
      } while (uVar13 < local_902);
    }
    if (local_80f != 0) {
      uVar13 = 0;
      do {
        uVar9 = local_836[uVar13];
        uVar1 = uVar13 + 1;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        local_836[uVar13] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = local_836[uVar13 + 3];
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        local_836[uVar13 + 3] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = local_836[uVar13 + 6];
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        local_836[uVar13 + 6] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar13 = uVar1;
      } while (uVar1 < local_80f);
    }
    if (local_80b != 0) {
      uVar13 = 0;
      do {
        puVar20 = local_807 + uVar13;
        uVar9 = *puVar20;
        puVar2 = local_7e7 + uVar13;
        puVar3 = local_7c7 + uVar13;
        uVar13 = uVar13 + 1;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        *puVar20 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = *puVar2;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        *puVar2 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = *puVar3;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        *puVar3 = uVar9 >> 0x10 | uVar9 << 0x10;
      } while (uVar13 < local_80b);
    }
    uVar9 = (local_7a7 & 0xff00ff00) >> 8 | (local_7a7 & 0xff00ff) << 8;
    local_7a7 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_7a3 & 0xff00ff00) >> 8 | (local_7a3 & 0xff00ff) << 8;
    local_7a3 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_00928a10(&local_a60);
    break;
  case 0x3f4:
  case 0x3f5:
  case 0x3f6:
  case 0x3f7:
  case 0x40c:
  case 0x411:
  case 0x412:
  case 0x413:
  case 0x414:
  case 0x424:
  case 0x426:
  case 0x42a:
  case 0x42d:
  case 0x436:
  case 0x438:
  case 0x448:
  case 0x449:
  case 0x44a:
  case 0x450:
  case 0x455:
  case 0x456:
  case 0x457:
  case 0x458:
  case 0x45d:
  case 0x45e:
  case 0x45f:
  case 0x460:
  case 0x461:
  case 0x462:
  case 0x463:
  case 0x464:
  case 0x465:
  case 0x466:
  case 0x467:
  case 0x468:
  case 0x469:
  case 0x46a:
  case 0x46b:
  case 0x46d:
  case 0x46e:
  case 0x472:
  case 0x474:
  case 0x47a:
  case 0x47b:
  case 0x484:
  case 0x485:
  case 0x486:
  case 0x48e:
    break;
  case 0x3f8:
    uVar17 = *(undefined8 *)puVar20;
    local_a60._0_1_ = (undefined1)uVar17;
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar17 >> 0x28);
    uVar9 = CONCAT13((char)param_1[5],uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    FUN_00927bcc(&local_a60);
    break;
  case 0x3f9:
    uVar17 = *(undefined8 *)puVar20;
    local_a60._0_1_ = (undefined1)uVar17;
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar17 >> 0x28);
    uVar22 = *(undefined8 *)(param_1 + 4);
    uStack_a5c._2_1_ = (undefined1)uVar22;
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar22 >> 8);
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar22 >> 0x10);
    uStack_a53 = (undefined1)((ulong)uVar22 >> 0x38);
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = CONCAT12(uStack_a5c._3_1_,CONCAT11(uStack_a5c._2_1_,uStack_a5c._1_1_));
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar22 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar14;
    FUN_00927c40(&local_a60);
    break;
  case 0x3fa:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar8 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = *(uint *)(param_1 + 9) & 0xff00ff00;
    uVar7 = *(uint *)(param_1 + 9) & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar7 << 8));
    uVar14 = uVar8 & 0xff00ff00;
    uVar8 = uVar8 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar14 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar8 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar8;
    uVar8 = (uint)*(undefined8 *)(param_1 + 5);
    uVar14 = uVar8 & 0xff00ff00;
    uVar8 = uVar8 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar14 >> 8) | (ushort)(uVar8 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar14 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar8 >> 0x10);
    uVar8 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar14 = uVar8 & 0xff00ff00;
    uVar8 = uVar8 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar14 >> 0x18);
    uStack_a53 = (undefined1)(uVar8 >> 0x10);
    uStack_a52 = (undefined1)(uVar14 >> 8);
    uStack_a51 = (undefined1)uVar8;
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar7 >> 0x10);
    FUN_00927db8(&local_a60);
    break;
  case 0x3fb:
    uStack_a50 = (undefined1)param_1[9];
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_00927cc0(&local_a60);
    break;
  case 0x3fc:
    uVar22 = *(undefined8 *)(param_1 + 5);
    uVar17 = *(undefined8 *)puVar20;
    uStack_a5c._4_1_ = (undefined1)uVar22;
    local_a60._0_1_ = (undefined1)uVar17;
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar17 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar22 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar22 >> 0x28);
    uVar9 = CONCAT13((char)param_1[9],uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar14 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar14;
    FUN_00927d40(&local_a60);
    break;
  case 0x3fd:
    uVar9 = (*(uint *)((long)param_1 + 3) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 3) & 0xff00ff) << 8;
    local_a68 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (*(uint *)((long)param_1 + 7) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 7) & 0xff00ff) << 8;
    uStack_a64 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_00984790(&local_a60,(char)param_1[1],&local_a68);
    goto LAB_0092d938;
  case 0x3fe:
    uVar22 = *(undefined8 *)(param_1 + 5);
    uVar17 = *(undefined8 *)puVar20;
    uStack_a5c._4_1_ = (undefined1)uVar22;
    local_a60._0_1_ = (undefined1)uVar17;
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar17 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar22 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar22 >> 0x28);
    uVar9 = CONCAT13((char)param_1[9],uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar14 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar14;
    FUN_00927e9c(&local_a60);
    break;
  case 0x3ff:
    uVar17 = *(undefined8 *)puVar20;
    local_a60._0_1_ = (undefined1)uVar17;
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uStack_a5c._5_1_ = (undefined1)(param_1[5] >> 8);
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar17 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    FUN_00927f14(&local_a60);
    break;
  case 0x400:
    uVar9 = (*(uint *)((long)param_1 + 3) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 3) & 0xff00ff) << 8;
    local_a68 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (*(uint *)((long)param_1 + 7) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 7) & 0xff00ff) << 8;
    uStack_a64 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_00985cc8(&local_a60,(char)param_1[1],&local_a68);
    goto LAB_0092d938;
  case 0x401:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_00927ff8(&local_a60);
    break;
  case 0x402:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00cfee84(uVar14 >> 0x10 | uVar14 << 0x10,uVar7 >> 0x10 | uVar7 << 0x10,&local_a60,
                 uVar9 >> 0x10 | uVar9 << 0x10,*(int *)(param_1 + 7) != 0);
    goto LAB_0092d938;
  case 0x403:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar17 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a53 = (undefined1)uVar17;
    uStack_a52 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar17 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    FUN_009280dc(&local_a60);
    break;
  case 0x404:
    uVar17 = *(undefined8 *)puVar20;
    local_a60._0_1_ = (undefined1)uVar17;
    uVar22 = *(undefined8 *)((long)param_1 + 9);
    uStack_a5c._3_1_ = (undefined1)uVar22;
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar22 >> 8);
    uStack_a53 = (undefined1)((ulong)uVar22 >> 0x30);
    uStack_a52 = (undefined1)((ulong)uVar22 >> 0x38);
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = CONCAT12(uStack_a5c._3_1_,(short)((ulong)uVar17 >> 0x28));
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar22 >> 0x10);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar14;
    FUN_00928160(&local_a60);
    break;
  case 0x405:
    uVar17 = *(undefined8 *)puVar20;
    uStack_a5c._4_1_ = (undefined1)*(undefined8 *)(param_1 + 5);
    local_a60._0_1_ = (undefined1)uVar17;
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar17 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)((long)param_1 + 0xf);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar14 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)*(undefined8 *)((long)param_1 + 0xf) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])
                  ((ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8));
    uStack_a4f = (undefined1)(uVar9 >> 0x18);
    uStack_a4c = (undefined1)uVar14;
    FUN_009281e0(&local_a60);
    break;
  case 0x406:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)*(undefined8 *)(param_1 + 0xd);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a42 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a44 = (undefined1)(uVar9 >> 0x18);
    uStack_a43 = (undefined1)(uVar14 >> 0x10);
    FUN_00928254(&local_a60);
    break;
  case 0x407:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_009282e0(&local_a60);
    break;
  case 0x408:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    local_a68 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_00983e5c(&local_a60,(char)param_1[3],*(undefined1 *)((long)param_1 + 7),&local_a68);
    goto LAB_0092d938;
  case 0x409:
    uStack_a50 = (undefined1)param_1[9];
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_009283c4(&local_a60);
    break;
  case 0x40a:
    uVar22 = *(undefined8 *)(param_1 + 5);
    uVar17 = *(undefined8 *)puVar20;
    uStack_a5c._4_1_ = (undefined1)uVar22;
    local_a60._0_1_ = (undefined1)uVar17;
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar17 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar22 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar14;
    uVar11 = (uint3)((ulong)uVar22 >> 0x28);
    uVar9 = CONCAT13((char)param_1[9],uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar14 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar14;
    FUN_00928444(&local_a60);
    break;
  case 0x40b:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00d01f00(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x40d:
    uVar17 = *(undefined8 *)(param_1 + 5);
    uStack_a52 = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x38);
    uStack_a50 = (undefined1)param_1[9];
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar9 = (uint)uVar17 & 0xff00ff00;
    uVar14 = (uint)uVar17 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar17 >> 0x28);
    uStack_a53 = (undefined1)((ulong)uVar17 >> 0x20);
    FUN_00929d78(&local_a60);
    break;
  case 0x40e:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar17 = *(undefined8 *)(param_1 + 0xb);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uStack_a46 = (ushort)((ulong)uVar17 >> 0x30);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar9 = (uint)*(undefined8 *)(param_1 + 5) & 0xff00ff00;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5) & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)*(undefined8 *)(param_1 + 7);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar9 = (uint)uVar17 & 0xff00ff00;
    uVar14 = (uint)uVar17 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    uStack_a48 = (undefined1)((ulong)uVar17 >> 0x28);
    uStack_a47 = (undefined1)((ulong)uVar17 >> 0x20);
    FUN_00929df4(&local_a60);
    break;
  case 0x40f:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uVar17 = *(undefined8 *)(param_1 + 0x13);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uStack_a38 = (ushort)((ulong)uVar17 >> 0x20);
    uStack_a36 = (undefined2)((ulong)uVar17 >> 0x30);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0xd) & 0xff00ff00;
    uVar14 = (uint)*(undefined8 *)(param_1 + 0xd) & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)*(undefined8 *)(param_1 + 0xf);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a42 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a44 = (undefined1)(uVar9 >> 0x18);
    uStack_a43 = (undefined1)(uVar14 >> 0x10);
    uVar9 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uStack_a40 = (undefined2)(uVar9 >> 0x10);
    uStack_a3e = (undefined2)uVar9;
    uVar9 = ((uint)uVar17 & 0xff00ff00) >> 8 | ((uint)uVar17 & 0xff00ff) << 8;
    uStack_a3c = (undefined2)(uVar9 >> 0x10);
    uStack_a3a = (undefined2)uVar9;
    uStack_a38 = uStack_a38 >> 8 | uStack_a38 << 8;
    FUN_00929e80(&local_a60);
    break;
  case 0x410:
    uStack_a50 = (undefined1)param_1[9];
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_00929f2c(&local_a60);
    break;
  case 0x415:
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    FUN_0092852c(&local_a60);
    break;
  case 0x416:
    uStack_a50 = (undefined1)param_1[9];
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_009285bc(&local_a60);
    break;
  case 0x417:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar17 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a53 = (undefined1)uVar17;
    uStack_a52 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar17 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    FUN_00928634(&local_a60);
    break;
  case 0x418:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d0644c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x419:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    FUN_0092870c(&local_a60);
    break;
  case 0x41a:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00d05dec(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10,(char)param_1[7] != '\0');
    goto LAB_0092d938;
  case 0x41b:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d00ad0(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x41c:
    uVar17 = *(undefined8 *)((long)param_1 + 9);
    uStack_a5c._3_1_ = (undefined1)uVar17;
    uStack_a54 = (undefined1)((ulong)uVar17 >> 0x28);
    uStack_a53 = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a52 = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = (uint3)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = CONCAT13(uStack_a5c._3_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar17 >> 8);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    FUN_00929fac(&local_a60);
    break;
  case 0x41d:
    uVar5 = *(undefined4 *)(param_1 + 5);
    uStack_a5c._4_1_ = (undefined1)uVar5;
    uStack_a5c._5_1_ = (undefined1)((uint)uVar5 >> 8);
    uStack_a5c._6_2_ = (ushort)((uint)uVar5 >> 0x10);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    FUN_0092a024(&local_a60);
    break;
  case 0x41e:
    uVar17 = *(undefined8 *)(param_1 + 5);
    uStack_a52 = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar9 = (uint)uVar17 & 0xff00ff00;
    uVar14 = (uint)uVar17 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar17 >> 0x28);
    uStack_a53 = (undefined1)((ulong)uVar17 >> 0x20);
    FUN_0092a0bc(&local_a60);
    break;
  case 0x41f:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d04fa4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,0);
    goto LAB_0092d938;
  case 0x420:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar22 = *(undefined8 *)((long)param_1 + 0x17);
    uVar17 = *(undefined8 *)((long)param_1 + 0xf);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uStack_a4b = (undefined1)uVar22;
    uStack_a4a = (ushort)((ulong)uVar22 >> 8);
    uStack_a44 = (undefined1)((ulong)uVar22 >> 0x38);
    uStack_a53 = (undefined1)uVar17;
    uStack_a52 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x38);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar17 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = CONCAT22(uStack_a4a,CONCAT11(uStack_a4b,uStack_a4c));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)uVar22 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar14 >> 0x10);
    FUN_0092a194(&local_a60);
    break;
  case 0x421:
    uStack_a5c._4_1_ = (undefined1)*(undefined8 *)(param_1 + 5);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar22 = *(undefined8 *)((long)param_1 + 0x13);
    uVar17 = *(undefined8 *)((long)param_1 + 0xb);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uStack_a4f = (undefined1)uVar22;
    auStack_a4e = SUB82((ulong)uVar22 >> 8,0);
    uStack_a48 = (undefined1)((ulong)uVar22 >> 0x38);
    uStack_a5c._5_1_ = (undefined1)uVar17;
    uStack_a5c._6_2_ = (ushort)((ulong)uVar17 >> 8);
    uStack_a50 = (undefined1)((ulong)uVar17 >> 0x38);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = CONCAT22(uStack_a5c._6_2_,CONCAT11(uStack_a5c._5_1_,uStack_a5c._4_1_));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)uVar17 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = CONCAT22(auStack_a4e,CONCAT11(uStack_a4f,uStack_a50));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)uVar22 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    FUN_0092a208(&local_a60);
    break;
  case 0x422:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    FUN_0092a278(&local_a60);
    break;
  case 0x423:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00d01174(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x425:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_009843ac(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x427:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d06024(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 (char)param_1[5] != '\0');
    goto LAB_0092d938;
  case 0x428:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d04e08(uVar14 >> 0x10 | uVar14 << 0x10,&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10,(char)param_1[7] != '\0');
    goto LAB_0092d938;
  case 0x429:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00d040ec(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10,(char)param_1[7] != '\0');
    goto LAB_0092d938;
  case 0x42b:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_00d0542c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3],
                 *(undefined1 *)((long)param_1 + 7),(char)param_1[4],
                 *(undefined1 *)((long)param_1 + 9));
    goto LAB_0092d938;
  case 0x42c:
    uVar9 = *puVar20 & 0xff00ff00;
    uVar14 = *puVar20 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)param_1[3];
    uStack_a5c._1_1_ = (undefined1)(param_1[3] >> 8);
    FUN_0092aee0(&local_a60);
    break;
  case 0x42e:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar8 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = *(uint *)(param_1 + 5) & 0xff00ff00;
    uVar7 = *(uint *)(param_1 + 5) & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar7 << 8);
    uVar14 = uVar8 & 0xff00ff00;
    uVar8 = uVar8 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar14 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar8 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar14 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar8;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar7 >> 0x10);
    FUN_009284bc(&local_a60);
    break;
  case 0x42f:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00cfe6f0(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x430:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00cfe470(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x431:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00cfe30c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x432:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_009291ac(&local_a60);
    break;
  case 0x433:
    uVar9 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_00d075fc(uVar9 >> 0x10 | uVar9 << 0x10,&local_a60,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x434:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d03ef8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x435:
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a4a = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a4c = (undefined1)(uVar9 >> 0x18);
    uStack_a4b = (undefined1)(uVar14 >> 0x10);
    FUN_00929d10(&local_a60);
    break;
  case 0x437:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00d065d8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x439:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d005bc(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x43a:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d02f78(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x43b:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d01344(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x43c:
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uStack_a5c._5_1_ = (undefined1)(param_1[5] >> 8);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    FUN_0092a5ec(&local_a60);
    break;
  case 0x43d:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00d03154(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10);
    goto LAB_0092d938;
  case 0x43e:
    uVar17 = *(undefined8 *)(param_1 + 5);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar17 >> 8);
    uStack_a5c._5_1_ = (undefined1)uVar17;
    uVar14 = (uint)((ulong)uVar17 >> 0x10);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a54 = (undefined1)(uVar9 >> 8);
    uStack_a53 = (undefined1)uVar14;
    uStack_a52 = (undefined1)((ulong)uVar17 >> 0x38);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x30);
    FUN_0092a6c8(&local_a60);
    break;
  case 0x43f:
    uVar22 = *(undefined8 *)(param_1 + 5);
    uVar21 = *(undefined8 *)(param_1 + 0xd);
    uVar17 = *(undefined8 *)(param_1 + 9);
    uStack_a48 = (undefined1)uVar21;
    uStack_a47 = (undefined1)((ulong)uVar21 >> 8);
    uStack_a42 = (ushort)((ulong)uVar21 >> 0x30);
    uStack_a4a = (ushort)((ulong)uVar17 >> 0x30);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar22 >> 8);
    uStack_a5c._5_1_ = (undefined1)uVar22;
    uVar14 = (uint)((ulong)uVar22 >> 0x10);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a54 = (undefined1)(uVar9 >> 8);
    uStack_a53 = (undefined1)uVar14;
    uStack_a52 = (undefined1)((ulong)uVar22 >> 0x38);
    uStack_a51 = (undefined1)((ulong)uVar22 >> 0x30);
    uStack_a50 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a4f = (undefined1)uVar17;
    uVar14 = (uint)((ulong)uVar17 >> 0x10);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8));
    uStack_a4c = (undefined1)(uVar9 >> 8);
    uStack_a4b = (undefined1)uVar14;
    uVar9 = CONCAT13(uStack_a47,CONCAT12(uStack_a48,uStack_a4a)) & 0xff00ff00;
    uVar14 = CONCAT12(uStack_a48,uStack_a4a) & 0xff00ff;
    uStack_a4a = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a48 = (undefined1)(uVar9 >> 8);
    uStack_a47 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar21 >> 0x10);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a46 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a44 = (undefined1)(uVar9 >> 8);
    uStack_a43 = (undefined1)uVar14;
    uVar9 = (CONCAT22(param_1[0x11],uStack_a42) & 0xff00ff00) >> 8 |
            (CONCAT22(param_1[0x11],uStack_a42) & 0xff00ff) << 8;
    uStack_a42 = (ushort)(uVar9 >> 0x10);
    uStack_a40 = (undefined2)uVar9;
    FUN_0092a7c0(&local_a60);
    break;
  case 0x440:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    FUN_00d06f7c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,param_1[3] >> 8 | param_1[3] << 8,
                 uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x441:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d04628(uVar14 >> 0x10 | uVar14 << 0x10,&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10);
    goto LAB_0092d938;
  case 0x442:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00d0473c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10);
    goto LAB_0092d938;
  case 0x443:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00d048bc(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10,1);
    goto LAB_0092d938;
  case 0x444:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00d0531c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10);
    goto LAB_0092d938;
  case 0x445:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d009d0(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x446:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d07d9c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x447:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar7 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_00d0108c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10);
    goto LAB_0092d938;
  case 1099:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d00bd4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 param_1[5] != 0);
    goto LAB_0092d938;
  case 0x44c:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar17 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a53 = (undefined1)uVar17;
    uStack_a52 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar17 >> 0x18);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    FUN_0092b1f8(&local_a60);
    break;
  case 0x44d:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d06994(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
    goto LAB_0092d938;
  case 0x44e:
    uVar17 = *(undefined8 *)(param_1 + 8);
    uStack_a52 = (undefined1)uVar17;
    uStack_a51 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a4b = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,(short)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)((ulong)uVar17 >> 0x10);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar14 >> 0x10);
    FUN_0092b0a0(&local_a60);
    break;
  case 0x44f:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)((long)param_1 + 0xb) & 0xff00ff00) >> 8 |
             (*(uint *)((long)param_1 + 0xb) & 0xff00ff) << 8;
    uVar7 = (*(uint *)((long)param_1 + 7) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 7) & 0xff00ff) << 8;
    uVar8 = (*(uint *)((long)param_1 + 0xf) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 0xf) & 0xff00ff) << 8;
    FUN_009841dc(uVar14 >> 0x10 | uVar14 << 0x10,&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,
                 (char)param_1[3],uVar7 >> 0x10 | uVar7 << 0x10,uVar8 >> 0x10 | uVar8 << 0x10);
    goto LAB_0092d938;
  case 0x451:
    uVar9 = *puVar20 & 0xff00ff00;
    uVar14 = *puVar20 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    FUN_0092b300(&local_a60);
    break;
  case 0x452:
    FUN_0092b334();
    break;
  case 0x453:
    uVar22 = *(undefined8 *)(param_1 + 0xd);
    uVar17 = *(undefined8 *)(param_1 + 9);
    uStack_a48 = (undefined1)uVar22;
    uStack_a47 = (undefined1)((ulong)uVar22 >> 8);
    uStack_a46 = (ushort)((ulong)uVar22 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar22 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar22 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar22 >> 0x30);
    uStack_a50 = (undefined1)uVar17;
    uStack_a4f = (undefined1)((ulong)uVar17 >> 8);
    auStack_a4e = SUB82((ulong)uVar17 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar17 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar17 >> 0x30);
    uVar22 = *(undefined8 *)(param_1 + 5);
    uVar17 = *(undefined8 *)puVar20;
    uStack_a5c._4_1_ = (undefined1)uVar22;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar22 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar22 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar22 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar22 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar22 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar22 >> 0x38);
    local_a60._0_1_ = (undefined1)uVar17;
    local_a60._1_1_ = (undefined1)((ulong)uVar17 >> 8);
    local_a60._2_2_ = (ushort)((ulong)uVar17 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar17 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar17 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar17 >> 0x38);
    FUN_009e077c(&local_a60);
    break;
  case 0x454:
    memcpy(&local_a60,puVar20,0x44);
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    FUN_009e07a0(&local_a60);
    break;
  case 0x459:
    memcpy(&local_a60,puVar20,0xa18);
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = CONCAT13(uStack_a5c._3_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    lVar16 = 0;
    do {
      uVar6 = *(ushort *)(auStack_a4e + lVar16 + 1);
      lVar19 = lVar16 + 0xa1;
      *(ushort *)(&uStack_a4f + lVar16) =
           *(ushort *)(&uStack_a4f + lVar16) >> 8 | *(ushort *)(&uStack_a4f + lVar16) << 8;
      *(ushort *)(auStack_a4e + lVar16 + 1) = uVar6 >> 8 | uVar6 << 8;
      lVar16 = lVar19;
    } while (lVar19 != 0xa10);
    FUN_009e07c4(&local_a60);
    break;
  case 0x45a:
    memcpy(&local_a60,puVar20,0xa18);
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = CONCAT13(uStack_a5c._3_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    lVar16 = 0;
    do {
      uVar6 = *(ushort *)(auStack_a4e + lVar16 + 1);
      lVar19 = lVar16 + 0xa1;
      *(ushort *)(&uStack_a4f + lVar16) =
           *(ushort *)(&uStack_a4f + lVar16) >> 8 | *(ushort *)(&uStack_a4f + lVar16) << 8;
      *(ushort *)(auStack_a4e + lVar16 + 1) = uVar6 >> 8 | uVar6 << 8;
      lVar16 = lVar19;
    } while (lVar19 != 0xa10);
    FUN_009e07e8(&local_a60);
    break;
  case 0x45b:
    memcpy(&local_a60,puVar20,0x856);
    uVar9 = (local_210 & 0xff00ff00) >> 8 | (local_210 & 0xff00ff) << 8;
    local_210 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_214 & 0xff00ff00) >> 8 | (local_214 & 0xff00ff) << 8;
    local_214 = uVar9 >> 0x10 | uVar9 << 0x10;
    lVar16 = 4;
    do {
      uVar17 = NEON_rev32(*(undefined8 *)((long)&local_a60 + lVar16),1);
      *(undefined8 *)((long)&local_a60 + lVar16) = uVar17;
      lVar16 = lVar16 + 8;
    } while (lVar16 != 0x14);
    lVar16 = 0;
    do {
      lVar19 = lVar16 + 3;
      uVar6 = *(ushort *)(local_952 + lVar19);
      puVar4 = (ushort *)((long)&uStack_94e + lVar16 + 1);
      lVar16 = lVar16 + 0xa6;
      *(ushort *)(local_952 + lVar19) = uVar6 >> 8 | uVar6 << 8;
      uVar6 = *puVar4;
      *puVar4 = uVar6 >> 8 | uVar6 << 8;
    } while (lVar16 != 0x67c);
    lVar16 = 0;
    puVar18 = &uStack_a48;
    do {
      lVar19 = 0;
      do {
        uVar9 = (*(uint *)(puVar18 + lVar19) & 0xff00ff00) >> 8 |
                (*(uint *)(puVar18 + lVar19) & 0xff00ff) << 8;
        *(uint *)(puVar18 + lVar19) = uVar9 >> 0x10 | uVar9 << 0x10;
        lVar19 = lVar19 + 4;
      } while (lVar19 != 0x18);
      lVar16 = lVar16 + 1;
      puVar18 = puVar18 + 0x18;
    } while (lVar16 != 10);
    FUN_009e080c(&local_a60);
    break;
  case 0x45c:
    memcpy(&local_a60,puVar20,0x60);
    lVar16 = 0;
    do {
      uVar9 = (*(uint *)((long)&local_a60 + lVar16) & 0xff00ff00) >> 8 |
              (*(uint *)((long)&local_a60 + lVar16) & 0xff00ff) << 8;
      *(uint *)((long)&local_a60 + lVar16) = uVar9 >> 0x10 | uVar9 << 0x10;
      lVar16 = lVar16 + 6;
    } while (lVar16 != 0x60);
    FUN_0092b460(&local_a60);
    break;
  case 0x46c:
    local_a60._0_1_ = (undefined1)*puVar20;
    FUN_009e0854(&local_a60);
    break;
  case 0x46f:
    memcpy(&local_a60,puVar20,0x45);
    uVar9 = (CONCAT22(uStack_a1e,local_a20) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a1e,local_a20) & 0xff00ff) << 8;
    local_a20 = (ushort)(uVar9 >> 0x10);
    uStack_a1e = (undefined2)uVar9;
    FUN_0092b4c8(&local_a60);
    break;
  case 0x470:
    local_a60._0_1_ = (undefined1)*puVar20;
    FUN_0092b558(&local_a60);
    break;
  case 0x471:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_00cec5d0(uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3] != '\0');
    break;
  case 0x473:
    memcpy(&local_a60,puVar20,0x97);
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    lVar16 = 0;
    do {
      lVar19 = lVar16 + 8;
      uVar17 = NEON_rev32(*(undefined8 *)((long)&uStack_a5c + lVar16),1);
      uVar22 = NEON_rev32(*(undefined8 *)(auStack_a0c + lVar16),1);
      *(undefined8 *)((long)&uStack_a5c + lVar16) = uVar17;
      *(undefined8 *)(auStack_a0c + lVar16) = uVar22;
      lVar16 = lVar19;
    } while (lVar19 != 0x40);
    FUN_0092b5bc(&local_a60);
    break;
  case 0x475:
    FUN_00d05f10(&local_a60,*puVar20 != 0);
    goto LAB_0092d938;
  case 0x476:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00d06dd8(uVar9 >> 0x10 | uVar9 << 0x10,&local_a60);
    goto LAB_0092d938;
  case 0x477:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_00d06e80(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3] != '\0');
    goto LAB_0092d938;
  case 0x478:
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    FUN_0092af68(&local_a60);
    break;
  case 0x479:
    memcpy(&local_a60,puVar20,0x42);
    local_a20 = local_a20 >> 8 | local_a20 << 8;
    FUN_0092968c(&local_a60);
    break;
  case 0x47c:
    uVar9 = *puVar20;
    uVar17 = FUN_009188a4();
    FUN_0091a468(uVar17,(char)uVar9 != '\0');
    break;
  case 0x47d:
    FUN_009860c0(&local_a60,*puVar20);
    goto LAB_0092d938;
  case 0x47e:
    uVar17 = *(undefined8 *)puVar20;
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar17 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar17 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar17 >> 0x38);
    uVar9 = (uint)uVar17 & 0xff00ff00;
    uVar14 = (uint)uVar17 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    FUN_009297f0(&local_a60);
    break;
  case 0x47f:
    uVar9 = *puVar20 & 0xff00ff00;
    uVar14 = *puVar20 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    FUN_00929864(&local_a60);
    break;
  case 0x480:
    memcpy(&local_a60,puVar20,0x52);
    uVar9 = CONCAT13(uStack_a10,CONCAT21(uStack_a12,local_a13)) & 0xff00ff00;
    uVar14 = CONCAT21(uStack_a12,local_a13) & 0xff00ff;
    uStack_a12 = (ushort)(byte)(uVar14 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a13 = (undefined1)(uVar9 >> 0x18);
    uStack_a10 = (undefined1)uVar14;
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = CONCAT22(uStack_a5c._6_2_,CONCAT11(uStack_a5c._5_1_,uStack_a5c._4_1_));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = CONCAT13(uStack_a5c._3_1_,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    FUN_009e0830(&local_a60);
    break;
  case 0x481:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_00d01d20(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3],
                 *(undefined1 *)((long)param_1 + 7));
    goto LAB_0092d938;
  case 0x482:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00d07e9c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x483:
    uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
    FUN_00d019a8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_0092d938;
  case 0x487:
    memcpy(&local_a60,puVar20,99);
    uVar14 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    if ((ulong)bStack_a00 != 0) {
      uVar13 = 0;
      do {
        uVar9 = *(uint *)(((ulong)&local_a60 | 4) + uVar13 * 4);
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        *(uint *)(((ulong)&local_a60 | 4) + uVar13 * 4) = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar13 = uVar13 + 1;
      } while (uVar13 < bStack_a00);
    }
    FUN_009294ac(&local_a60);
    break;
  case 0x488:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_00d06cc4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3]);
    goto LAB_0092d938;
  case 0x489:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d078b4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10,
                 (char)param_1[5],*(char *)((long)param_1 + 0xb) != '\0');
    goto LAB_0092d938;
  case 0x48a:
    uVar17 = *(undefined8 *)(param_1 + 8);
    uStack_a52 = (undefined1)uVar17;
    uStack_a51 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a50 = (undefined1)((ulong)uVar17 >> 0x10);
    uStack_a4f = (undefined1)((ulong)uVar17 >> 0x18);
    auStack_a4e = SUB82((ulong)uVar17 >> 0x20,0);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a4b = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,(short)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    FUN_009295f4(&local_a60);
    break;
  case 0x48b:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar22 = *(undefined8 *)((long)param_1 + 0x17);
    uVar17 = *(undefined8 *)((long)param_1 + 0xf);
    uVar14 = (uint)*(undefined8 *)puVar20;
    uStack_a4b = (undefined1)uVar22;
    uStack_a4a = (ushort)((ulong)uVar22 >> 8);
    uStack_a48 = (undefined1)((ulong)uVar22 >> 0x18);
    uStack_a47 = (undefined1)((ulong)uVar22 >> 0x20);
    uStack_a46 = (ushort)((ulong)uVar22 >> 0x28);
    uStack_a44 = (undefined1)((ulong)uVar22 >> 0x38);
    uStack_a53 = (undefined1)uVar17;
    uStack_a52 = (undefined1)((ulong)uVar17 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar17 >> 0x10);
    uStack_a50 = (undefined1)((ulong)uVar17 >> 0x18);
    uStack_a4f = (undefined1)((ulong)uVar17 >> 0x20);
    auStack_a4e = SUB82((ulong)uVar17 >> 0x28,0);
    uStack_a4c = (undefined1)((ulong)uVar17 >> 0x38);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar14 >> 0x10);
    uVar11 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar11) & 0xff00ff00;
    uVar14 = uVar11 & 0xff00ff;
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar14 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar14;
    uVar14 = (uint)*(undefined8 *)(param_1 + 5);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar14 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar14 >> 0x10);
    uVar14 = (uint)((ulong)*(undefined8 *)puVar20 >> 0x20);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar14 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar14;
    FUN_0092aab4(&local_a60);
    break;
  case 0x48c:
    uVar17 = *(undefined8 *)puVar20;
    local_a60._0_1_ = (undefined1)uVar17;
    local_a60._1_1_ = (undefined1)((ulong)uVar17 >> 8);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar17 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar17 >> 0x38);
    uVar14 = (uint)((ulong)uVar17 >> 0x10);
    uVar9 = uVar14 & 0xff00ff00;
    uVar14 = uVar14 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar14 >> 8);
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._1_1_ = (undefined1)uVar14;
    FUN_00929584(&local_a60);
    break;
  case 0x48d:
    FUN_0092d980(&local_a60);
    memcpy(&local_a60,puVar20,0x64c);
    FUN_0091dfc0(&local_a60);
    break;
  case 0x48f:
    uStack_a5c._4_1_ = 0;
    uStack_a5c._5_1_ = 0;
    uStack_a5c._6_2_ = 0;
    uStack_a54 = 0;
    uStack_a53 = 0;
    uStack_a52 = 0;
    uStack_a51 = 0;
    uStack_a50 = 0;
    uStack_a4f = 0;
    auStack_a4e = (undefined1  [2])0x0;
    uStack_a4c = 0;
    uStack_a4b = 0;
    uStack_a4a = 0;
    local_a60._0_1_ = 0x48;
    local_a60._1_1_ = 0xe3;
    local_a60._2_2_ = 0x27b;
    uStack_a5c._0_1_ = 0;
    uStack_a5c._1_1_ = 0;
    uStack_a5c._2_1_ = 0;
    uStack_a5c._3_1_ = 0;
    goto LAB_0092d938;
  case 0x490:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar14 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_00d002ac(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar14 >> 0x10 | uVar14 << 0x10);
LAB_0092d938:
    uStack_a48 = 1;
    FUN_00ce20fc(&local_a60);
    break;
  default:
    if (uVar6 == 0) {
      uVar9 = (*puVar20 & 0xff00ff00) >> 8 | (*puVar20 & 0xff00ff) << 8;
      FUN_00942840(uVar9 >> 0x10 | uVar9 << 0x10);
    }
    else if (uVar6 == 6) {
      FUN_0094273c(1);
      FUN_00928fd0();
    }
  }
  if (*(long *)(lVar10 + 0x28) != lVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

