// functions/0096b — 53 functions
#include "libGameKindred.h"




void FUN_0096b064(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b080(DAT_02c7ef18,param_2,param_3,*(undefined4 *)(param_1 + 0x9c));
    return;
  }
  return;
}




void FUN_0096b080(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  
  if (param_4 == 0) {
    uVar1 = FUN_009695e4(param_1 + 0x328);
    pbVar2 = (byte *)(param_1 + 0xd8);
  }
  else if (param_4 == 2) {
    uVar1 = FUN_009695e4(param_1 + 0x430);
    pbVar2 = (byte *)(param_1 + 0x268);
  }
  else {
    if (param_4 != 1) {
      return;
    }
    uVar1 = FUN_009695e4(param_1 + 0x270);
    pbVar2 = (byte *)(param_1 + 0x1a0);
  }
  *pbVar2 = (byte)((uVar1 & 1) << 2) | (byte)((uVar1 & 1) << 1) | *pbVar2 & 0xf9 | *pbVar2 & 2;
  return;
}




void FUN_0096b100(undefined8 *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  FUN_00e83560();
  puVar3 = param_1 + 3;
  *param_1 = &PTR_FUN_027bc800;
  do {
    FUN_00a9a518(puVar3);
    *puVar3 = &PTR_FUN_027bc830;
    *(undefined4 *)((long)puVar3 + 0x9c) = 0xffffffff;
    FUN_008fcdb8(puVar3 + 0x14,&DAT_0320ffa8);
    puVar3[0x17] = 0;
    *(byte *)(puVar3 + 0x18) = *(byte *)(puVar3 + 0x18) & 0xf8;
    puVar3 = puVar3 + 0x19;
  } while (puVar3 != param_1 + 0x4e);
  FUN_00978dac(param_1 + 0x4e);
  FUN_0097bea4(param_1 + 0x65);
  FUN_009784b8(param_1 + 0x86);
  lVar1 = 0;
  puVar2 = (undefined4 *)((long)param_1 + 0xb4);
  do {
    *puVar2 = (int)lVar1;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 0x32;
  } while (lVar1 != 3);
  return;
}




void FUN_0096b1c8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027bc800;
  lVar2 = 0;
  do {
    FUN_00a9b054((long)param_1 + lVar2 + 0x18);
    FUN_008fce60((long)param_1 + lVar2 + 0xb8,&DAT_0320ffa8);
    lVar1 = lVar2 + 200;
    *(undefined8 *)((long)param_1 + lVar2 + 0xd0) = 0;
    *(byte *)((long)param_1 + lVar2 + 0xd8) = *(byte *)((long)param_1 + lVar2 + 0xd8) & 0xf8;
    lVar2 = lVar1;
  } while (lVar1 != 600);
  FUN_00978540(param_1 + 0x86);
  FUN_0097bf50(param_1 + 0x65);
  FUN_00978e68(param_1 + 0x4e);
  lVar2 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar2 + 0x248) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar2 + 600));
    }
    FUN_00a9a5b8((long)param_1 + lVar2 + 0x1a8);
    lVar2 = lVar2 + -200;
  } while (lVar2 != -600);
  FUN_00e835e0(param_1);
  return;
}




void FUN_0096b284(void *param_1)

{
  FUN_0096b1c8();
  operator_delete(param_1);
  return;
}




void FUN_0096b2a8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  
  lVar3 = 0;
  do {
    lVar5 = param_1 + lVar3 * 200;
    (**(code **)(*(long *)(lVar5 + 0x18) + 0x18))();
    pbVar6 = (byte *)(lVar5 + 0xd8);
    if ((*pbVar6 >> 2 & 1) != 0) {
      iVar1 = *(int *)(param_1 + lVar3 * 200 + 0xb4);
      if (iVar1 == 0) {
        if (DAT_02c7ef08 != (undefined8 *)0x0) {
          puVar7 = &DAT_02c7ef08;
          puVar2 = DAT_02c7ef08;
          do {
            if (*(uint *)(puVar2 + 4) >= 0x72bd94bf) {
              puVar7 = puVar2;
            }
            puVar2 = (undefined8 *)puVar2[*(uint *)(puVar2 + 4) < 0x72bd94bf];
          } while (puVar2 != (undefined8 *)0x0);
          if ((((undefined8 **)puVar7 != &DAT_02c7ef08) && (*(uint *)(puVar7 + 4) < 0x72bd94c0)) &&
             (*(int *)(puVar7 + 5) != 0)) {
            lVar5 = 0;
            uVar4 = 0;
            do {
              (*(code *)((undefined8 *)(puVar7[6] + lVar5))[1])(*(undefined8 *)(puVar7[6] + lVar5));
              uVar4 = uVar4 + 1;
              lVar5 = lVar5 + 0x10;
            } while (uVar4 < *(uint *)(puVar7 + 5));
          }
        }
      }
      else if (iVar1 == 1) {
        if (DAT_02c7ef08 != (undefined8 *)0x0) {
          puVar7 = &DAT_02c7ef08;
          puVar2 = DAT_02c7ef08;
          do {
            if (*(uint *)(puVar2 + 4) >= 0x9d2c9b16) {
              puVar7 = puVar2;
            }
            puVar2 = (undefined8 *)puVar2[*(uint *)(puVar2 + 4) < 0x9d2c9b16];
          } while (puVar2 != (undefined8 *)0x0);
          if ((((undefined8 **)puVar7 != &DAT_02c7ef08) && (*(uint *)(puVar7 + 4) < 0x9d2c9b17)) &&
             (*(int *)(puVar7 + 5) != 0)) {
            lVar5 = 0;
            uVar4 = 0;
            do {
              (*(code *)((undefined8 *)(puVar7[6] + lVar5))[1])(*(undefined8 *)(puVar7[6] + lVar5));
              uVar4 = uVar4 + 1;
              lVar5 = lVar5 + 0x10;
            } while (uVar4 < *(uint *)(puVar7 + 5));
          }
        }
      }
      else if ((iVar1 == 2) && (DAT_02c7ef08 != (undefined8 *)0x0)) {
        puVar7 = &DAT_02c7ef08;
        puVar2 = DAT_02c7ef08;
        do {
          if (*(uint *)(puVar2 + 4) >= 0xe51db192) {
            puVar7 = puVar2;
          }
          puVar2 = (undefined8 *)puVar2[*(uint *)(puVar2 + 4) < 0xe51db192];
        } while (puVar2 != (undefined8 *)0x0);
        if ((((undefined8 **)puVar7 != &DAT_02c7ef08) && (*(uint *)(puVar7 + 4) < 0xe51db193)) &&
           (*(int *)(puVar7 + 5) != 0)) {
          lVar5 = 0;
          uVar4 = 0;
          do {
            (*(code *)((undefined8 *)(puVar7[6] + lVar5))[1])(*(undefined8 *)(puVar7[6] + lVar5));
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar4 < *(uint *)(puVar7 + 5));
        }
      }
      *pbVar6 = *pbVar6 & 0xfb;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return;
}




byte FUN_0096b4f4(long param_1,int param_2)

{
  return *(byte *)(param_1 + (long)param_2 * 200 + 0xd8) >> 1 & 1;
}




void FUN_0096b508(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    FUN_00a9b054(lVar1 + 0x18);
    FUN_008fce60(lVar1 + 0xb8,&DAT_0320ffa8);
    lVar2 = lVar2 + 200;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xf8;
  } while (lVar2 != 600);
  FUN_00978f08(param_1 + 0x270);
  return;
}




void FUN_0096b570(long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  
  lVar2 = param_1 + (long)param_2 * 200;
  bVar1 = *(byte *)(lVar2 + 0xb8);
  lVar3 = (long)param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + lVar3 * 200 + 0xc0) == 0) {
    return;
  }
  lVar4 = param_1 + lVar3 * 200;
  pbVar5 = (byte *)(lVar4 + 0xd8);
  *(undefined8 *)(lVar4 + 0xd0) = 0;
  if ((bVar1 & 1) == 0) {
    lVar2 = lVar2 + 0xb9;
  }
  else {
    lVar2 = *(long *)(param_1 + lVar3 * 200 + 200);
  }
  if ((*pbVar5 & 1) == 0) {
    FUN_00a9a708(lVar4 + 0x18,lVar2);
    *pbVar5 = *pbVar5 | 1;
    return;
  }
  FUN_00a9a8b8(lVar4 + 0x18);
  return;
}




void FUN_0096b60c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  byte local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_008fa54c(local_70,&DAT_01e277f2);
  FUN_0096b704(param_1 + (long)param_2 * 200 + 0xb8,param_3,local_70);
  uVar1 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    uVar1 = local_68;
  }
  if (uVar1 != 0) {
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
    FUN_00a9b618(param_1 + (long)param_2 * 200 + 0x18,pvVar2,2,param_4,param_5);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096b704(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong *puVar7;
  int iVar8;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_0093db7c(param_2);
  if ((uVar5 & 1) == 0) {
    FUN_008fce60(param_3,param_1);
    uVar5 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar5 = (ulong)(*param_2 >> 1);
    }
    if (3 < (long)uVar5) {
      pbVar1 = pbVar2 + uVar5;
      pbVar6 = pbVar2;
      do {
        if ((uVar5 - 3 == 0) || (pbVar6 = memchr(pbVar6,0x68,uVar5 - 3), pbVar6 == (byte *)0x0))
        break;
        if (*(int *)pbVar6 == 0x70747468) {
          if ((pbVar6 != pbVar1) && ((long)pbVar6 - (long)pbVar2 != -1)) {
            FUN_008fce60(param_3,param_2);
            goto LAB_0096b8cc;
          }
          break;
        }
        pbVar6 = pbVar6 + 1;
        uVar5 = (long)pbVar1 - (long)pbVar6;
      } while (3 < (long)uVar5);
    }
    uVar5 = *(ulong *)(param_3 + 8);
    pbVar2 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar5 = (ulong)(*param_3 >> 1);
    }
    do {
      if (uVar5 == 0) {
        iVar8 = 0;
        goto LAB_0096b838;
      }
      lVar4 = uVar5 - 1;
      uVar5 = uVar5 - 1;
    } while (pbVar2[lVar4] != 0x2f);
    iVar8 = (int)uVar5 + 1;
LAB_0096b838:
    FUN_0093ddb0(local_98,param_3,0,iVar8,param_3);
    uVar5 = (ulong)(*param_2 >> 1);
    pbVar2 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      uVar5 = *(ulong *)(param_2 + 8);
      pbVar2 = *(byte **)(param_2 + 0x10);
    }
    puVar7 = (ulong *)FUN_0090de84(local_98,pbVar2,uVar5);
    local_70 = (void *)puVar7[2];
    uStack_78 = puVar7[1];
    local_80 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_008fcdb8(local_60,&local_80);
    FUN_008fce60(param_3,local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
  else {
    FUN_008fce60(param_3,param_2);
    FUN_009396ec(param_3);
  }
LAB_0096b8cc:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096b8f8(long param_1,int param_2,undefined8 param_3)

{
  FUN_00a9af6c(param_1 + (long)param_2 * 200 + 0x18,param_3);
  return;
}




void FUN_0096b90c(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  void *__s1;
  byte *__s2;
  ulong uVar8;
  long lVar9;
  byte local_b0 [8];
  size_t local_a8 [2];
  undefined1 auStack_98 [24];
  byte local_80 [16];
  long local_70 [2];
  
  lVar4 = tpidr_el0;
  local_70[1] = *(long *)(lVar4 + 0x28);
  memset(local_b0,0,0x48);
  FUN_0093915c(0,local_b0,local_80,auStack_98,0,0);
  uVar8 = 0;
  do {
    lVar9 = param_1 + uVar8 * 200;
    bVar2 = *(byte *)(lVar9 + 0xb8);
    bVar3 = local_b0[uVar8 * 0x18];
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar9 + 0xc0);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = local_a8[uVar8 * 3];
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + uVar8 * 200 + 200);
      __s2 = *(byte **)(auStack_98 + uVar8 * 0x18 + -8);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar9 + 0xb9);
      }
      if ((bVar3 & 1) == 0) {
        __s2 = local_b0 + uVar8 * 0x18 + 1;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pbVar6 = (byte *)(lVar9 + 0xb9);
          lVar7 = -(ulong)(bVar2 >> 1);
          do {
            if (*pbVar6 != *__s2) goto LAB_0096ba30;
            pbVar6 = pbVar6 + 1;
            lVar7 = lVar7 + 1;
            __s2 = __s2 + 1;
          } while (lVar7 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_0096ba30;
      if ((*(byte *)(DAT_02c7ef18 + uVar8 * 200 + 0xd8) >> 1 & 1) == 0) goto LAB_0096ba30;
    }
    else {
LAB_0096ba30:
      FUN_008fce60((byte *)(lVar9 + 0xb8),local_b0 + uVar8 * 0x18);
      FUN_0096b570(param_1,uVar8 & 0xffffffff);
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == 3) {
      lVar9 = 0;
      do {
        if ((local_80[lVar9] & 1) != 0) {
          operator_delete(*(void **)((long)local_70 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x48);
      if (*(long *)(lVar4 + 0x28) != local_70[1]) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_0096bab0(undefined8 param_1,long param_2,int param_3)

{
  FUN_008fcdb8(param_1,param_2 + (long)param_3 * 200 + 0xb8);
  return;
}




void FUN_0096bac4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_0096b90c(param_1);
    return;
  }
  return;
}




void FUN_0096bb04(void)

{
  void *pvVar1;
  
  if (DAT_02c7ef18 == (void *)0x0) {
    pvVar1 = operator_new(0x488);
    FUN_0096b100();
    DAT_02c7ef18 = pvVar1;
  }
  return;
}




void FUN_0096bb3c(void)

{
  if (DAT_02c7ef18 != (long *)0x0) {
    (**(code **)(*DAT_02c7ef18 + 8))();
  }
  DAT_02c7ef18 = (long *)0x0;
  return;
}




void FUN_0096bb70(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b2a8();
    return;
  }
  return;
}




void FUN_0096bb84(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_008fcdb8(param_1,DAT_02c7ef18 + 0x180);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




void FUN_0096bba8(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_008fcdb8(param_1,DAT_02c7ef18 + 0xb8);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




void FUN_0096bbcc(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_008fcdb8(param_1,DAT_02c7ef18 + 0x248);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




undefined8 FUN_0096bbf0(void)

{
  uint uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = 0;
    while ((*(byte *)(DAT_02c7ef18 + (long)(int)uVar1 * 200 + 0xd8) >> 1 & 1) != 0) {
      uVar1 = uVar1 + 1;
      if (2 < uVar1) {
        return 1;
      }
    }
  }
  return 0;
}




byte FUN_0096bc2c(void)

{
  if (DAT_02c7ef18 != 0) {
    return *(byte *)(DAT_02c7ef18 + 0x1a0) >> 1 & 1;
  }
  return 0;
}




byte FUN_0096bc4c(void)

{
  if (DAT_02c7ef18 != 0) {
    return *(byte *)(DAT_02c7ef18 + 0xd8) >> 1 & 1;
  }
  return 0;
}




byte FUN_0096bc6c(void)

{
  if (DAT_02c7ef18 != 0) {
    return *(byte *)(DAT_02c7ef18 + 0x268) >> 1 & 1;
  }
  return 0;
}




void FUN_0096bc8c(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b90c();
    return;
  }
  return;
}




void FUN_0096bca0(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b570(DAT_02c7ef18,1);
    return;
  }
  return;
}




void FUN_0096bcb8(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b570(DAT_02c7ef18,0);
    return;
  }
  return;
}




void FUN_0096bcd0(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b570(DAT_02c7ef18,2);
    return;
  }
  return;
}




void FUN_0096bce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b60c(DAT_02c7ef18,1,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_0096bd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b60c(DAT_02c7ef18,0,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_0096bd38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b60c(DAT_02c7ef18,2,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_0096bd60(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_00a9af6c(DAT_02c7ef18 + 0xe0,param_1);
    FUN_00a9af6c(DAT_02c7ef18 + 0x18,param_1);
    FUN_00a9af6c(DAT_02c7ef18 + 0x1a8,param_1);
    return;
  }
  return;
}




void FUN_0096bdbc(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_009698b0(DAT_02c7ef18 + 0x430,param_1);
    FUN_009698b0(DAT_02c7ef18 + 0x270,param_1);
    FUN_009698b0(DAT_02c7ef18 + 0x328,param_1);
    return;
  }
  return;
}




undefined8 FUN_0096be18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_009790d4(DAT_02c7ef18 + 0x270,param_1,param_2);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_0096be3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_009791f4(DAT_02c7ef18 + 0x270,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_0096be5c(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_00979228(DAT_02c7ef18 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_0096be78(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_009792e0(DAT_02c7ef18 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_0096be94(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0097933c(DAT_02c7ef18 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_0096beb0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_02c7ef18 != 0) {
    FUN_00979370(DAT_02c7ef18 + 0x270,param_1,param_2);
    return;
  }
  return;
}




void FUN_0096bed0(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_009793a8(DAT_02c7ef18 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_0096beec(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_00979404(DAT_02c7ef18 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_0096bf08(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_00979460(DAT_02c7ef18 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_0096bf24(undefined8 param_1)

{
  if (DAT_02c7ef18 != 0) {
    FUN_009794bc(DAT_02c7ef18 + 0x270,param_1);
    return;
  }
  return;
}




undefined8 FUN_0096bf40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_009794cc(DAT_02c7ef18 + 0x270,param_1,param_2);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_0096bf64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_0097963c(DAT_02c7ef18 + 0x270,param_1,param_2);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_0096bf88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_009797a4(DAT_02c7ef18 + 0x270,param_1,param_2);
    return uVar1;
  }
  return 0;
}




void FUN_0096bfac(undefined8 param_1,undefined4 param_2)

{
  if (DAT_02c7ef18 != 0) {
    FUN_00979280(DAT_02c7ef18 + 0x270,param_1,param_2);
    return;
  }
  return;
}




undefined8 FUN_0096bfcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_00969be0(DAT_02c7ef18 + 0x270,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_0096bfec(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7ef18 != 0) {
    uVar1 = FUN_00969be0(DAT_02c7ef18 + 0x328,param_1);
    return uVar1;
  }
  return 0;
}




void thunk_FUN_0096bca0(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b570(DAT_02c7ef18,1);
    return;
  }
  return;
}




void thunk_FUN_0096bcb8(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b570(DAT_02c7ef18,0);
    return;
  }
  return;
}




void thunk_FUN_0096bcd0(void)

{
  if (DAT_02c7ef18 != 0) {
    FUN_0096b570(DAT_02c7ef18,2);
    return;
  }
  return;
}

