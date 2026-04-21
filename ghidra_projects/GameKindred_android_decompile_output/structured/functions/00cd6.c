// functions/00cd6 — 31 functions
#include "libGameKindred.h"




void FUN_00cd63e0(byte *param_1,undefined8 param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar4 = (ulong)(bVar2 >> 1);
  __n = uVar4;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(DAT_0313dfb0 >> 1);
  if ((DAT_0313dfb0 & 1) != 0) {
    sVar1 = DAT_0313dfb8;
  }
  if (__n == sVar1) {
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar7 = DAT_0313dfc0;
    if ((DAT_0313dfb0 & 1) == 0) {
      pbVar7 = &DAT_0313dfb1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar9 = -uVar4;
        pbVar10 = param_1;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar7) goto LAB_00cd64a0;
          lVar9 = lVar9 + 1;
          pbVar7 = pbVar7 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pbVar10,pbVar7,__n), iVar5 != 0)) goto LAB_00cd64a0;
    pcVar8 = "mysteryChest";
  }
  else {
LAB_00cd64a0:
    sVar1 = (ulong)(DAT_0313dfc8 >> 1);
    if ((DAT_0313dfc8 & 1) != 0) {
      sVar1 = DAT_0313dfd0;
    }
    if (__n == sVar1) {
      pbVar10 = *(byte **)(param_1 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar10 = param_1 + 1;
      }
      pbVar7 = DAT_0313dfd8;
      if ((DAT_0313dfc8 & 1) == 0) {
        pbVar7 = &DAT_0313dfc9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          lVar9 = -uVar4;
          pbVar10 = param_1;
          do {
            pbVar10 = pbVar10 + 1;
            if (*pbVar10 != *pbVar7) goto LAB_00cd652c;
            lVar9 = lVar9 + 1;
            pbVar7 = pbVar7 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(pbVar10,pbVar7,__n), iVar5 != 0)) goto LAB_00cd652c;
      pcVar8 = "epicMysteryChest";
    }
    else {
LAB_00cd652c:
      uVar6 = 0;
      sVar1 = (ulong)(DAT_0313df98 >> 1);
      if ((DAT_0313df98 & 1) != 0) {
        sVar1 = DAT_0313dfa0;
      }
      if (__n != sVar1) goto LAB_00cd65f4;
      pbVar10 = *(byte **)(param_1 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar10 = param_1 + 1;
      }
      pbVar7 = DAT_0313dfa8;
      if ((DAT_0313df98 & 1) == 0) {
        pbVar7 = &DAT_0313df99;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          lVar9 = -uVar4;
          do {
            param_1 = param_1 + 1;
            if (*param_1 != *pbVar7) {
              uVar6 = 0;
              goto LAB_00cd65f4;
            }
            lVar9 = lVar9 + 1;
            pbVar7 = pbVar7 + 1;
          } while (lVar9 != 0);
        }
      }
      else if (__n != 0) {
        iVar5 = memcmp(pbVar10,pbVar7,__n);
        uVar6 = 0;
        if (iVar5 != 0) goto LAB_00cd65f4;
      }
      pcVar8 = "recurringChest";
    }
  }
  FUN_008fa54c(local_60,pcVar8);
  FUN_008fce60(param_2,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  uVar6 = 1;
LAB_00cd65f4:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




void FUN_00cd6628(long param_1)

{
  FUN_00cd6dc4(param_1 + 0x38);
  FUN_00cd6dc4(param_1 + 0x158);
  FUN_00cd6dc4(param_1 + 0x278);
  return;
}




void FUN_00cd6658(void)

{
  FUN_009580b8();
  FUN_00961ee4();
  return;
}




void FUN_00cd666c(void)

{
  FUN_009580b8();
  FUN_00961ee4();
  return;
}




void FUN_00cd6680(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  long local_78 [3];
  
  lVar4 = tpidr_el0;
  local_78[2] = *(long *)(lVar4 + 0x28);
  lVar7 = FUN_00940b8c();
  if ((*(char *)(lVar7 + 0x3c) != '\0') && (uVar8 = FUN_0092e830(), (uVar8 & 1) != 0)) {
    lVar9 = FUN_00969248();
    if (*(int *)(lVar9 + 0x38) < 1) {
      uVar8 = FUN_00cd6ff4(param_1 + 0x38);
      iVar5 = 0;
      if ((uVar8 & 1) == 0) {
        iVar5 = FUN_00cd7228(param_1 + 0x38);
      }
      uVar10 = FUN_00e6ce7c("ASCENSION_NOTIFICATION_TIMED_1",0);
      thunk_FUN_00e7051c(auStack_b8,uVar10);
      uVar10 = FUN_00e6ce7c("ASCENSION_NOTIFICATION_TIMED_2",0);
      thunk_FUN_00e7051c(auStack_a8,uVar10);
      uVar10 = FUN_00e6ce7c("ASCENSION_NOTIFICATION_TIMED_3",0);
      thunk_FUN_00e7051c(auStack_98,uVar10);
      uVar10 = FUN_00e6ce7c("ASCENSION_NOTIFICATION_TIMED_4",0);
      thunk_FUN_00e7051c(auStack_88,uVar10);
      uVar10 = FUN_00e6ce7c("ASCENSION_NOTIFICATION_TIMED_5",0);
      thunk_FUN_00e7051c(local_78,uVar10);
      if (*(int *)(lVar7 + 8) != 0) {
        piVar13 = *(int **)(lVar7 + 0x10);
        uVar12 = 0;
        do {
          FUN_00ec5370(&local_d8);
          iVar2 = *piVar13;
          uVar14 = *(uint *)(lVar7 + 0x38);
          iVar6 = rand();
          iVar1 = (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) + 1;
          iVar3 = 0;
          if (iVar1 != 0) {
            iVar3 = iVar6 / iVar1;
          }
          uVar14 = uVar12;
          if (3 < uVar12) {
            uVar14 = 4;
          }
          local_c8 = iVar2 + iVar5 + (iVar6 - iVar3 * iVar1);
          FUN_00910394(&local_d8,auStack_b8 + (ulong)uVar14 * 0x10);
          FUN_009216cc(param_1 + 0x30,&local_d8);
          uVar12 = uVar12 + 1;
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
            local_d8 = 0;
            local_d0 = (void *)0x0;
          }
          piVar13 = piVar13 + 1;
        } while (piVar13 != (int *)(*(long *)(lVar7 + 0x10) + (ulong)*(uint *)(lVar7 + 8) * 4));
      }
      lVar7 = 0;
      do {
        pvVar11 = *(void **)((long)local_78 + lVar7 + 8);
        if (pvVar11 != (void *)0x0) {
          operator_delete__(pvVar11);
          *(undefined8 *)((long)local_78 + lVar7) = 0;
          *(undefined8 *)((long)local_78 + lVar7 + 8) = 0;
        }
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -0x50);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_78[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cd6884(long param_1)

{
  FUN_00cd6680(param_1 + -0x30);
  return;
}




undefined8 FUN_00cd688c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cd6ff4(param_1 + 0x38);
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_00969248(), 0 < *(int *)(lVar2 + 0x38))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00cd68c4(long param_1)

{
  FUN_00cd688c(param_1 + -0x30);
  return;
}




void FUN_00cd68cc(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x398);
  FUN_00cd538c();
  DAT_0313dfe0 = pvVar1;
  return;
}




void FUN_00cd68fc(void)

{
  if (DAT_0313dfe0 != (long *)0x0) {
    (**(code **)(*DAT_0313dfe0 + 8))();
  }
  DAT_0313dfe0 = (long *)0x0;
  return;
}




long FUN_00cd6930(void)

{
  return DAT_0313dfe0 + 0x158;
}




long FUN_00cd6940(void)

{
  return DAT_0313dfe0 + 0x278;
}




long FUN_00cd6950(void)

{
  return DAT_0313dfe0 + 0x38;
}




void FUN_00cd6960(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00961f24(uVar1,&DAT_0313df98,param_1 & 1);
  return;
}




void FUN_00cd698c(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00961f24(uVar1,&DAT_0313dfb0,param_1 & 1);
  return;
}




void FUN_00cd69b8(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00961f24(uVar1,&DAT_0313dfc8,param_1 & 1);
  return;
}




void FUN_00cd69e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280db50;
  param_1[3] = &PTR_FUN_0280df00;
  param_1[6] = &PTR_FUN_0280df30;
  FUN_00cd2f04(param_1 + 0x4f);
  FUN_00cd2f04(param_1 + 0x2b);
  FUN_00cd2f04(param_1 + 7);
  FUN_00921668(param_1 + 6);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00cd6a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280db50;
  param_1[3] = &PTR_FUN_0280df00;
  param_1[6] = &PTR_FUN_0280df30;
  FUN_00cd2f04(param_1 + 0x4f);
  FUN_00cd2f04(param_1 + 0x2b);
  FUN_00cd2f04(param_1 + 7);
  FUN_00921668(param_1 + 6);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cd6ae4(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_0280db50;
  *param_1 = &PTR_FUN_0280df00;
  param_1[3] = &PTR_FUN_0280df30;
  FUN_00cd2f04(param_1 + 0x4c);
  FUN_00cd2f04(param_1 + 0x28);
  FUN_00cd2f04(param_1 + 4);
  FUN_00921668(param_1 + 3);
  FUN_00e835e0(param_1);
  FUN_00948d58(param_1 + -3);
  return;
}




void FUN_00cd6b60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -3;
  *puVar1 = &PTR_FUN_0280db50;
  *param_1 = &PTR_FUN_0280df00;
  param_1[3] = &PTR_FUN_0280df30;
  FUN_00cd2f04(param_1 + 0x4c);
  FUN_00cd2f04(param_1 + 0x28);
  FUN_00cd2f04(param_1 + 4);
  FUN_00921668(param_1 + 3);
  FUN_00e835e0(param_1);
  FUN_00948d58(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00cd6be4(undefined8 *param_1)

{
  param_1[-6] = &PTR_FUN_0280db50;
  param_1[-3] = &PTR_FUN_0280df00;
  *param_1 = &PTR_FUN_0280df30;
  FUN_00cd2f04(param_1 + 0x49);
  FUN_00cd2f04(param_1 + 0x25);
  FUN_00cd2f04(param_1 + 1);
  FUN_00921668(param_1);
  FUN_00e835e0(param_1 + -3);
  FUN_00948d58(param_1 + -6);
  return;
}




void FUN_00cd6c60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -6;
  *puVar1 = &PTR_FUN_0280db50;
  param_1[-3] = &PTR_FUN_0280df00;
  *param_1 = &PTR_FUN_0280df30;
  FUN_00cd2f04(param_1 + 0x49);
  FUN_00cd2f04(param_1 + 0x25);
  FUN_00cd2f04(param_1 + 1);
  FUN_00921668(param_1);
  FUN_00e835e0(param_1 + -3);
  FUN_00948d58(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00cd6ce4(uint *param_1,undefined8 *param_2)

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
    FUN_00cd2ff4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00cd6d6c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0x100000000;
  FUN_008fce60(param_1 + 0x10,&DAT_0320ffa8);
  FUN_00caba38(param_1 + 0x50);
  FUN_00caba38(param_1 + 0x98);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}




void FUN_00cd6dc4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cd6e08();
  FUN_0099cf94(param_1 + 0xe0,uVar1);
  uVar1 = FUN_00cd6f40(param_1);
  FUN_0099cf94(param_1 + 0x100,uVar1);
  return;
}




uint FUN_00cd6e08(byte *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long alStack_40 [2];
  
  lVar4 = tpidr_el0;
  alStack_40[1] = *(long *)(lVar4 + 0x28);
  uVar5 = (uint)*param_1;
  if (*param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    plVar14 = (long *)((long)alStack_40 - ((long)(int)uVar2 * 8 + 0xfU & 0xfffffffffffffff0));
    if (0 < (int)uVar2) {
      plVar6 = *(long **)(param_1 + 0x48);
      iVar3 = *(int *)(param_1 + 4);
      lVar7 = (long)iVar3;
      uVar8 = (ulong)uVar2;
      plVar10 = plVar14;
      do {
        if (iVar3 < 1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (lVar7 != 0) {
            lVar11 = *plVar6 / lVar7;
          }
          lVar11 = lVar11 * lVar7;
        }
        *plVar10 = lVar11;
        uVar8 = uVar8 - 1;
        plVar6 = plVar6 + 1;
        plVar10 = plVar10 + 1;
      } while (uVar8 != 0);
    }
    lVar7 = FUN_00e85318(0);
    uVar5 = *(uint *)(param_1 + 8);
    iVar3 = 1 - uVar5;
    if (iVar3 < 1) {
      lVar9 = (long)*(int *)(param_1 + 4);
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = lVar7 / lVar9;
      }
      lVar7 = 0;
      do {
        if (*(int *)(param_1 + 4) < 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = lVar7 * lVar9 + lVar11 * lVar9;
        }
        if (0 < (int)uVar2) {
          lVar13 = 0;
          do {
            if (lVar12 == plVar14[lVar13]) {
              uVar5 = uVar5 - 1;
              break;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)uVar2);
        }
        bVar1 = iVar3 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar1);
    }
  }
  if (*(long *)(lVar4 + 0x28) != alStack_40[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}




undefined8 FUN_00cd6f40(char *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\0') {
    bVar1 = param_1[0x98];
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0) {
        return 0;
      }
    }
    else if (*(long *)(param_1 + 0xa0) == 0) {
      return 0;
    }
    uVar2 = FUN_00cab8b4(param_1 + 0xb0);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00cabc6c(param_1 + 0x98);
      return uVar3;
    }
  }
  return 0;
}




long FUN_00cd6fa0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 4)) {
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_2 / lVar2;
    }
    return lVar1 * lVar2;
  }
  return 0;
}




void FUN_00cd6fc0(void)

{
  FUN_00e85318(0);
  return;
}




long FUN_00cd6fc8(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = (long)iVar1;
  if (0 < iVar1) {
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = param_2 / lVar3;
    }
    return (long)(iVar1 * param_3) + lVar2 * lVar3;
  }
  return 0;
}




undefined8 FUN_00cd6ff4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00cd702c();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_00cd70a4(param_1);
  return uVar2;
}

