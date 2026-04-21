// functions/0095d — 2 functions
#include "libGameKindred.h"




void FUN_0095dc6c(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  void *__s1;
  long lVar10;
  float fVar11;
  float fVar12;
  byte local_60 [8];
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x5508);
  FUN_008fcdb8(local_60,pbVar1);
  FUN_00e81200(pbVar1);
  bVar4 = *pbVar1;
  __n = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x5510);
  }
  sVar2 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    sVar2 = local_58;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x5518);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x5509);
    }
    __s2 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      __s2 = local_50;
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0x5509);
        lVar9 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_0095dd44;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_0095dd54;
    }
    if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_0095dd54;
  }
LAB_0095dd44:
  uVar7 = FUN_0093dbe8();
  if ((uVar7 & 1) == 0) {
    FUN_0095f598(param_1);
  }
LAB_0095dd54:
  FUN_00e829e0();
  uVar7 = FUN_00e852fc();
  if ((uVar7 & 1) == 0) {
    lVar9 = FUN_00e829e0();
    iVar6 = *(int *)(lVar9 + 0xa0);
    *(int *)(param_1 + 0x55dc) = iVar6;
  }
  else {
    *(undefined4 *)(param_1 + 0x5686) = 0;
    lVar9 = FUN_00e829e0();
    iVar6 = *(int *)(lVar9 + 0xa0);
    if (iVar6 != 2) {
      *(undefined4 *)(param_1 + 0x567c) = 0;
      if (((iVar6 == 1) && (*(int *)(param_1 + 0x55dc) != 1)) &&
         (uVar7 = FUN_0093dbe8(), (uVar7 & 1) == 0)) {
        FUN_009658c8(param_1 + 0x278);
      }
    }
    *(int *)(param_1 + 0x55dc) = iVar6;
    FUN_00948e38();
    iVar6 = *(int *)(param_1 + 0x55dc);
  }
  if (iVar6 == 2) {
    fVar12 = *(float *)(param_1 + 0x567c);
    fVar11 = (float)FUN_01988c78();
    fVar11 = fVar11 + *(float *)(param_1 + 0x567c);
    *(float *)(param_1 + 0x567c) = fVar11;
    if (((((fVar12 < 300.0) && (300.0 <= fVar11)) || ((fVar12 < 600.0 && (600.0 <= fVar11)))) ||
        ((fVar12 < 900.0 && (900.0 <= fVar11)))) || ((fVar12 < 1200.0 && (1200.0 <= fVar11)))) {
      FUN_00900598(param_1 + 0x54a8);
    }
  }
  lVar9 = FUN_00e829e0();
  if ((*(char *)(lVar9 + 0xf4) != '\0') && (*(char *)(param_1 + 0x5686) == '\0')) {
    uVar7 = FUN_00e84e4c(param_1 + 0x628);
    if ((uVar7 & 1) == 0) {
      FUN_00e81aec(param_1 + 0x628);
    }
  }
  lVar9 = FUN_00e829e0();
  if ((*(char *)(lVar9 + 0xf6) != '\0') && (*(char *)(param_1 + 0x5687) == '\0')) {
    uVar7 = FUN_00e84e4c(param_1 + 0x4470);
    if ((uVar7 & 1) == 0) {
      FUN_00e81f3c(param_1 + 0x4470);
    }
  }
  lVar9 = FUN_00e829e0();
  if ((*(char *)(lVar9 + 0xf7) != '\0') && (*(char *)(param_1 + 0x5688) == '\0')) {
    uVar7 = FUN_00e84e4c(param_1 + 0x4bf0);
    if ((uVar7 & 1) == 0) {
      FUN_00e821dc(param_1 + 0x4bf0);
    }
  }
  lVar9 = FUN_00e829e0();
  if ((*(char *)(lVar9 + 0xf5) != '\0') && (*(char *)(param_1 + 0x5689) == '\0')) {
    uVar7 = FUN_00e84e4c(param_1 + 0x3540);
    if (((uVar7 & 1) == 0) && (uVar7 = FUN_009b8d9c(), (uVar7 & 1) != 0)) {
      FUN_00e82918(param_1 + 0x3540);
    }
  }
  if ((*(int *)(param_1 + 0x5628) == 0) || (uVar7 = FUN_00a9de6c(), (uVar7 & 1) == 0)) {
    FUN_0095f79c(param_1 + 0x53c8,0);
  }
  if ((*(int *)(param_1 + 0x5588) == 0) && (lVar9 = *(long *)(param_1 + 0x53e0), lVar9 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x53d8);
    if (uVar3 != 0) {
      lVar10 = (ulong)uVar3 * 0x1a8;
      do {
        FUN_00964d08(lVar9);
        lVar10 = lVar10 + -0x1a8;
        lVar9 = lVar9 + 0x1a8;
      } while (lVar10 != 0);
    }
    *(uint *)(param_1 + 0x53d8) = 0;
  }
  if (*(int *)(param_1 + 0x562c) == 0) {
    FUN_0095f02c(param_1 + 0x53e8,0);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0095dffc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e4c(param_1 + 0x3848);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00e82e8c(param_1 + 0x3848);
  return;
}

