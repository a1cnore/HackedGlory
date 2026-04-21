// functions/00918 — 21 functions
#include "libGameKindred.h"




void FUN_00918050(long *param_1,long *param_2,undefined1 (*param_3) [12])

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 auVar6 [12];
  ulong local_48;
  int local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = *param_1 << 1 | 1;
  local_40 = (int)param_1[1] + -1;
  auVar6 = FUN_009184f0(&local_48);
  lVar4 = *param_1;
  lVar3 = param_1[1];
  iVar5 = -2;
  if (lVar4 != 0x10000000000000) {
    iVar5 = -1;
  }
  lVar1 = 0x3fffffffffffff;
  if (lVar4 != 0x10000000000000) {
    lVar1 = lVar4 * 2 + -1;
  }
  *param_3 = auVar6;
  *(int *)(param_2 + 1) = auVar6._8_4_;
  *param_2 = lVar1 << ((ulong)(uint)(((int)lVar3 + iVar5) - auVar6._8_4_) & 0x3f);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_0091810c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar3 = *param_1 >> 0x20;
  uVar1 = *param_1 & 0xffffffff;
  uVar5 = *param_2 >> 0x20;
  uVar2 = *param_2 & 0xffffffff;
  uVar6 = uVar5 * uVar1;
  uVar4 = uVar2 * uVar3;
  auVar7._8_4_ = (int)param_1[1] + (int)param_2[1] + 0x40;
  auVar7._0_8_ = uVar5 * uVar3 + (uVar4 >> 0x20) + (uVar6 >> 0x20) +
                 ((uVar2 * uVar1 >> 0x20) + (uVar4 & 0xffffffff) + (uVar6 & 0xffffffff) + 0x80000000
                 >> 0x20);
  auVar7._12_4_ = 0;
  return auVar7;
}




void FUN_00918168(long *param_1,ulong *param_2,ulong param_3,long param_4,int *param_5,int *param_6)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  
  uVar13 = *param_2;
  uVar9 = 1;
  lVar14 = *param_1;
  uVar11 = (ulong)(uint)-(int)param_2[1];
  uVar7 = 1L << (uVar11 & 0x3f);
  uVar6 = uVar13 >> (uVar11 & 0x3f);
  uVar4 = (uint)uVar6;
  uVar8 = uVar7 - 1 & uVar13;
  if (9 < uVar4) {
    if (uVar4 < 100) {
      uVar9 = 2;
    }
    else if (uVar4 < 1000) {
      uVar9 = 3;
    }
    else if (uVar4 >> 4 < 0x271) {
      uVar9 = 4;
    }
    else if (uVar4 < 100000) {
      uVar9 = 5;
    }
    else if (uVar4 < 1000000) {
      uVar9 = 6;
    }
    else if (uVar4 < 10000000) {
      uVar9 = 7;
    }
    else {
      uVar9 = 8;
      if (99999999 < uVar4) {
        uVar9 = 9;
      }
    }
  }
  uVar10 = uVar13 - lVar14;
  *param_5 = 0;
  do {
    uVar15 = (uint)uVar6;
    uVar4 = 0;
    uVar5 = uVar15;
    switch(uVar9) {
    case 0:
      iVar16 = -uVar9;
      do {
        uVar6 = param_3;
        iVar2 = *param_5;
        uVar13 = uVar8 * 10 >> (uVar11 & 0x3f);
        param_3 = uVar6 * 10;
        if (((uVar13 & 0xff) != 0) || (iVar2 != 0)) {
          *param_5 = iVar2 + 1;
          *(char *)(param_4 + iVar2) = (char)uVar13 + '0';
        }
        uVar8 = uVar8 * 10 & uVar7 - 1;
        iVar16 = iVar16 + 1;
      } while (param_3 < uVar8 || param_3 - uVar8 == 0);
      *param_6 = *param_6 - iVar16;
      if (param_3 - uVar8 < uVar7) {
        return;
      }
      uVar9 = (&DAT_01b93ba8)[iVar16];
      uVar11 = uVar10 * uVar9;
      if (uVar11 <= uVar8) {
        return;
      }
      iVar16 = *param_5;
      lVar17 = 0;
      lVar12 = (uVar6 * 10 - uVar7) - uVar8;
      lVar14 = uVar11 - uVar8;
      do {
        uVar8 = uVar7 + uVar8;
        if ((uVar11 <= uVar8) && ((ulong)(lVar14 + lVar17) <= uVar8 - uVar10 * uVar9)) {
          return;
        }
        *(char *)(param_4 + (long)iVar16 + -1) = *(char *)(param_4 + (long)iVar16 + -1) + -1;
        if (uVar11 <= uVar8) {
          return;
        }
        uVar6 = lVar12 + lVar17;
        lVar17 = lVar17 - uVar7;
      } while (uVar7 <= uVar6);
      return;
    case 1:
      break;
    case 2:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 10);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 10) * -10;
      break;
    case 3:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 100);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 100) * -100;
      break;
    case 4:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 1000);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 1000) * -1000;
      break;
    case 5:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 10000);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 10000) * -10000;
      break;
    case 6:
      uVar5 = uVar15 / 100000;
      uVar15 = uVar15 % 100000;
      goto joined_r0x00918318;
    case 7:
      uVar5 = uVar15 / 1000000;
      uVar15 = uVar15 % 1000000;
      goto joined_r0x00918318;
    case 8:
      uVar5 = uVar15 / 10000000;
      uVar15 = uVar15 % 10000000;
      goto joined_r0x00918318;
    case 9:
      uVar5 = uVar15 / 100000000;
      uVar15 = uVar15 % 100000000;
      goto joined_r0x00918318;
    default:
      goto switchD_00918290_default;
    }
    uVar15 = uVar4;
joined_r0x00918318:
    if (uVar5 == 0) {
switchD_00918290_default:
      iVar16 = *param_5;
      if (iVar16 != 0) {
        cVar3 = '\0';
        goto LAB_00918328;
      }
    }
    else {
      cVar3 = (char)uVar5;
      iVar16 = *param_5;
LAB_00918328:
      *param_5 = iVar16 + 1;
      *(char *)(param_4 + iVar16) = cVar3 + '0';
    }
    lVar17 = (ulong)uVar15 << (uVar11 & 0x3f);
    uVar1 = lVar17 + uVar8;
    uVar9 = uVar9 - 1;
    uVar6 = (ulong)uVar15;
    if (uVar1 <= param_3) {
      *param_6 = *param_6 + uVar9;
      if ((uVar1 < uVar10) &&
         (uVar6 = (ulong)(uint)(&DAT_01b93ba8)[uVar9] << (uVar11 & 0x3f), uVar6 <= param_3 - uVar1))
      {
        iVar16 = *param_5;
        lVar12 = 0;
        uVar7 = uVar8 + uVar6 + lVar17;
        do {
          if ((uVar10 <= uVar7) &&
             (((uVar10 - uVar8) - lVar17) + lVar12 <= (lVar14 - uVar13) + uVar7)) {
            return;
          }
          *(char *)(param_4 + (long)iVar16 + -1) = *(char *)(param_4 + (long)iVar16 + -1) + -1;
          if (uVar10 <= uVar7) {
            return;
          }
          uVar11 = (((param_3 - uVar8) - uVar6) - lVar17) + lVar12;
          lVar12 = lVar12 - uVar6;
          uVar7 = uVar7 + uVar6;
        } while (uVar6 <= uVar11);
      }
      return;
    }
  } while( true );
}




undefined1  [16] FUN_009184f0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = param_1[1];
  uVar1 = *param_1 >> 0x35;
  uVar2 = *param_1;
  while ((uVar1 & 1) == 0) {
    uVar3 = (ulong)((int)uVar3 - 1) | uVar3 & 0xffffffff00000000;
    uVar1 = uVar2 >> 0x34;
    uVar2 = uVar2 << 1;
  }
  auVar4._0_8_ = uVar2 << 10;
  auVar4._8_8_ = (ulong)((int)uVar3 - 10) | uVar3 & 0xffffffff00000000;
  return auVar4;
}




void FUN_00918524(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0x188);
    puVar3 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar5 = puVar3 + (ulong)*param_1 * 0x62;
      puVar6 = puVar2;
      do {
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar3 + 1);
        *puVar6 = *puVar3;
        FUN_008fcdb8(puVar6 + 2,puVar3 + 2);
        thunk_FUN_00e7051c(puVar6 + 8,puVar3 + 8);
        thunk_FUN_00e7051c(puVar6 + 0xc,puVar3 + 0xc);
        thunk_FUN_00e7051c(puVar6 + 0x10,puVar3 + 0x10);
        FUN_008fcdb8(puVar6 + 0x14,puVar3 + 0x14);
        thunk_FUN_00e7051c(puVar6 + 0x1a,puVar3 + 0x1a);
        thunk_FUN_00e7051c(puVar6 + 0x1e,puVar3 + 0x1e);
        FUN_008fcdb8(puVar6 + 0x22,puVar3 + 0x22);
        memcpy(puVar6 + 0x28,puVar3 + 0x28,0xac);
        FUN_00918688(puVar6 + 0x54,puVar3 + 0x54);
        puVar6[0x58] = puVar3[0x58];
        FUN_008fcdb8(puVar6 + 0x5a,puVar3 + 0x5a);
        puVar1 = puVar3 + 0x60;
        puVar3 = puVar3 + 0x62;
        *(undefined2 *)(puVar6 + 0x60) = *(undefined2 *)puVar1;
        puVar6 = puVar6 + 0x62;
      } while (puVar3 != puVar5);
      puVar3 = *(undefined4 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x188;
        do {
          FUN_0091587c(puVar3);
          lVar4 = lVar4 + -0x188;
          puVar3 = puVar3 + 0x62;
        } while (lVar4 != 0);
        puVar3 = *(undefined4 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      operator_delete__(puVar3);
    }
    *(undefined4 **)(param_1 + 2) = puVar2;
  }
  return;
}




void FUN_00918688(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_009106c4(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 4;
    do {
      thunk_FUN_00e7051c(lVar3,lVar2);
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_009186fc(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar3 = *param_1;
  iVar4 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar3 != iVar4 * 0x1a1f58d1) {
    puVar5 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x188);
    lVar2 = (long)puVar5 - (long)param_3;
    puVar6 = param_2;
    if (lVar2 != 0) {
      do {
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_3 + 1);
        *puVar6 = *param_3;
        FUN_008fce60(puVar6 + 2,param_3 + 2);
        FUN_00910394(puVar6 + 8,param_3 + 8);
        FUN_00910394(puVar6 + 0xc,param_3 + 0xc);
        FUN_00910394(puVar6 + 0x10,param_3 + 0x10);
        FUN_008fce60(puVar6 + 0x14,param_3 + 0x14);
        FUN_00910394(puVar6 + 0x1a,param_3 + 0x1a);
        FUN_00910394(puVar6 + 0x1e,param_3 + 0x1e);
        FUN_008fce60(puVar6 + 0x22,param_3 + 0x22);
        memcpy(puVar6 + 0x28,param_3 + 0x28,0xac);
        FUN_0091630c(puVar6 + 0x54,param_3 + 0x54);
        puVar6[0x58] = param_3[0x58];
        FUN_008fce60(puVar6 + 0x5a,param_3 + 0x5a);
        puVar1 = param_3 + 0x60;
        param_3 = param_3 + 0x62;
        *(undefined2 *)(puVar6 + 0x60) = *(undefined2 *)puVar1;
        puVar6 = puVar6 + 0x62;
      } while (param_3 != puVar5);
      uVar3 = *param_1;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x188);
    }
    param_2 = param_2 + ((lVar2 >> 3) * 0x1a1f58d1 & 0xffffffffU) * 0x62;
    if (param_2 != puVar5) {
      do {
        FUN_0091587c(param_2);
        param_2 = param_2 + 0x62;
      } while (puVar5 != param_2);
      uVar3 = *param_1;
    }
    *param_1 = uVar3 + iVar4 * -0x1a1f58d1;
    return;
  }
  FUN_00914e2c(param_1,1);
  return;
}




undefined8 FUN_009188a4(void)

{
  return DAT_02c09218;
}




void FUN_009188b0(undefined8 param_1)

{
  FUN_0095fcac(DAT_02c09218 + 0x19d8,param_1);
  return;
}




void FUN_009188cc(long param_1)

{
  FUN_0095fcac(param_1 + 0x19d8);
  return;
}




undefined8 FUN_009188d8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_0094276c();
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_00ceace8();
    uVar2 = 0;
    if (lVar3 != 0) {
      FUN_00ceace8();
      uVar2 = FUN_00ceb03c();
      return uVar2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_0091890c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x3b;
  *(ushort *)(param_1 + 0x3a) = *(ushort *)(param_1 + 0x3a) & 0x8000 | 0x3ff;
  param_1[0x39] = param_1;
  param_1[0x69] = param_1;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0x8000 | 0x3ff;
  param_1[0x3c] = 0;
  *puVar1 = 0;
  param_1[0x6b] = param_2;
  FUN_00931458(param_1 + 0x6c);
  FUN_00941748(param_1 + 0x309,param_1 + 0x6c);
  FUN_009580dc(param_1 + 0x33b);
  *(undefined4 *)(param_1 + 0xe27) = 0;
  param_1[0xe10] = 0;
  param_1[0xe0f] = 0;
  *(undefined4 *)(param_1 + 0xe28) = 0;
  *(undefined2 *)((long)param_1 + 0x7144) = 1;
  FUN_00918c68(param_1,0,FUN_00918cbc,0,FUN_00918d18,0,0,0);
  FUN_00918c68(param_1,1,FUN_00918db0,0,FUN_00918e7c,0,FUN_00918ee0,0);
  FUN_00918c68(param_1,2,FUN_00918ef4,0,FUN_00918f34,0,0,0);
  FUN_00918f80(param_1,3,FUN_00919018,0,FUN_009191b8,0,FUN_009192b0,0);
  FUN_00918c68(param_1,4,0,0,0,0,0,0);
  FUN_009192e4(param_1,0,2);
  FUN_009192e4(param_1,0,1);
  FUN_009192e4(param_1,1,2);
  FUN_009192e4(param_1,1,0);
  FUN_009192e4(param_1,3,0);
  FUN_009192e4(param_1,2,3);
  FUN_009192e4(param_1,2,0);
  FUN_009192e4(param_1,0,4);
  FUN_009192e4(param_1,2,4);
  FUN_009192e4(param_1,1,4);
  FUN_009192e4(param_1,3,4);
  FUN_0091936c(puVar1,0,FUN_009193c0,0,0,0,0,0);
  FUN_0091946c(puVar1,1,FUN_00919504,0,FUN_009195f8,0,0,0);
  FUN_0091936c(puVar1,2,0,0,0,0,FUN_00919620,0);
  FUN_0091936c(puVar1,3,0,0,0,0,0,0);
  FUN_00919634(puVar1,0,1);
  FUN_00919634(puVar1,1,2);
  FUN_00919634(puVar1,1,0);
  FUN_00919634(puVar1,2,0);
  FUN_00919634(puVar1,0,3);
  FUN_00919634(puVar1,1,3);
  FUN_00919634(puVar1,2,3);
  DAT_02c09218 = param_1;
  return;
}




void FUN_00918c68(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)(*(ushort *)(param_1 + 0x1d0) >> 10 & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x50) = FUN_0091adec;
  *(code **)(lVar1 + 0x48) = FUN_0091adec;
  *(code **)(lVar1 + 0x58) = FUN_0091adec;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x1d0) =
       *(ushort *)(param_1 + 0x1d0) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x1d0) & 0x83ff;
  return;
}




void FUN_00918cbc(long param_1)

{
  long lVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x7141) == '\0') {
    if ((*(char *)(param_1 + 0x7145) == '\0') && (uVar2 = FUN_00e80f58(), (uVar2 & 1) != 0)) {
      lVar1 = FUN_00e829e0();
      if (*(int *)(lVar1 + 0xa0) == 8) {
        FUN_009580b8();
        FUN_0096132c();
        *(char *)(param_1 + 0x7145) = '\x01';
      }
    }
  }
  return;
}




void FUN_00918d18(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_00ceb9e4();
  FUN_00e7d1cc(*(undefined8 *)(param_1 + 0x358));
  FUN_0091a5b0(param_1);
  FUN_00919db0(param_1 + 0x1d8,0);
  FUN_00941e64(param_1 + 0x1848);
  if (*(char *)(param_1 + 0x7141) == '\0') {
    uVar2 = FUN_0094276c();
    if ((uVar2 & 1) == 0) goto LAB_00918d98;
    FUN_009426bc();
    FUN_00942618();
    uVar1 = 0;
  }
  else {
    FUN_01988908(DAT_02c09220);
    FUN_00ceb9e4();
    FUN_009426bc();
    FUN_00942618();
    uVar1 = 1;
  }
  FUN_00942550(uVar1);
LAB_00918d98:
  *(undefined1 *)(param_1 + 0x7145) = 0;
  FUN_00931790(param_1 + 0x360);
  return;
}




void FUN_00918db0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00e829e0();
    if (*(int *)(lVar3 + 0xa0) == 7) {
      uVar1 = 1;
      goto LAB_00918df8;
    }
  }
  uVar1 = FUN_009188d8();
  uVar1 = uVar1 & 1;
LAB_00918df8:
  FUN_00ceab70(uVar1,&DAT_03210450);
  uVar2 = FUN_009ba248(*(undefined8 *)(param_1 + 0x7078));
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00e80f58();
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00e829e0(), *(int *)(lVar3 + 0xa0) != 0)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 0;
    }
    FUN_00919c84(param_1,uVar4);
  }
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00e829e0();
    if (*(int *)(lVar3 + 0xa0) != 6) {
      lVar3 = FUN_00e829e0();
      if (*(int *)(lVar3 + 0xa0) != 7) {
        FUN_00919c84(param_1,0);
        return;
      }
    }
  }
  return;
}




void FUN_00918e7c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_00ec5d04();
  FUN_009ba254(*(undefined8 *)(param_1 + 0x7078));
  FUN_00925894();
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00e829e0();
    if (*(int *)(lVar3 + 0xa0) == 7) {
      uVar1 = 1;
      goto LAB_00918ed4;
    }
  }
  uVar1 = FUN_009188d8();
  uVar1 = uVar1 & 1;
LAB_00918ed4:
  FUN_00ceab70(uVar1,&DAT_03210450);
  return;
}




void FUN_00918ee0(void)

{
  FUN_009580b8();
  FUN_00963a6c();
  return;
}




void FUN_00918ef4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00941ea0(param_1 + 0x1848);
  if ((uVar1 & 1) != 0) {
    FUN_00919c84(param_1,3);
    return;
  }
  return;
}




void FUN_00918f34(long param_1)

{
  ulong uVar1;
  
  FUN_00941db0(param_1 + 0x1848);
  FUN_00904e10();
  *(undefined1 *)(param_1 + 0x7143) = 0;
  uVar1 = FUN_00942ae8(1);
  if ((uVar1 & 1) != 0) {
    FUN_00942780();
    return;
  }
  return;
}




void FUN_00918f80(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  
  uVar1 = (ushort)((ushort)param_1[0x74] >> 10) & 0x1f;
  param_1[(ulong)uVar1 * 0x16 + 4] = param_2;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 6) = param_3;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 8) = param_4;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 10) = param_5;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xc) = param_6;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe) = param_7;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10) = param_8;
  *(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x14) = FUN_0091ae3c;
  *(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x12) = FUN_0091ae10;
  *(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16) = FUN_0091ae7c;
  param_1[(ulong)uVar1 * 0x16 + 0x18] = 0;
  uVar1 = *param_1;
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  FUN_0091aea8(param_1,uVar1,0);
  *(ushort *)(param_1 + 0x74) =
       (ushort)param_1[0x74] + 0x400 & 0x7c00 | (ushort)param_1[0x74] & 0x83ff;
  return;
}

