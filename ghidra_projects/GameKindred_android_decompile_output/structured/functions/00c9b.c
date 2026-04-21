// functions/00c9b — 5 functions
#include "libGameKindred.h"




void FUN_00c9bc38(long param_1)

{
  *(uint *)(param_1 + 0x65e4) = *(uint *)(param_1 + 0x65e4) & 0xfffffffb;
  return;
}




void FUN_00c9bc58(long param_1)

{
  *(uint *)(param_1 + 0x65e4) = *(uint *)(param_1 + 0x65e4) & 0xfffffffb;
  return;
}




void FUN_00c9bc6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c9bc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6748) + 8))();
  return;
}




void FUN_00c9bc7c(long param_1,byte *param_2,int param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *__s2;
  long lVar5;
  byte *__s1;
  
  FUN_00c995f0(param_1 + 0x56c0);
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          param_2 = param_2 + 1;
          if (*param_2 != *__s2) goto LAB_00c9bd28;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (__n != 0) {
      iVar4 = memcmp(__s1,__s2,__n);
      bVar3 = iVar4 != 0;
      goto LAB_00c9bd48;
    }
    bVar3 = false;
  }
  else {
LAB_00c9bd28:
    bVar3 = true;
  }
LAB_00c9bd48:
  *(char *)(param_1 + 0x6765) = 0 < param_3 | bVar3;
  return;
}




void FUN_00c9bd6c(long param_1,long param_2,byte *param_3,byte *param_4)

{
  size_t sVar1;
  undefined1 *__s1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  long lVar8;
  byte *__s2;
  undefined8 uVar9;
  char *__s;
  byte *pbVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  undefined1 auStack_98 [64];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __s = *(char **)(param_2 + 0x10);
  sVar7 = strlen(__s);
  pbVar10 = &DAT_0320ffa8;
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar7 == sVar1) {
    iVar5 = FUN_0090d610(&DAT_0320ffa8,0,0xffffffffffffffff,__s,sVar7);
    if (iVar5 != 0) {
      __s = *(char **)(param_2 + 0x10);
      goto LAB_00c9bdf8;
    }
  }
  else {
LAB_00c9bdf8:
    FUN_008fff20(auStack_98,"skins_card_hero_%s",__s);
    uVar9 = *(undefined8 *)(param_1 + 0x308);
    uVar6 = FUN_00e6a474("heroArt_file");
    uVar6 = FUN_0091ed5c("heroArt_file",uVar6,0x12345678);
    FUN_019972a0(uVar9,uVar6,*(undefined8 *)(param_1 + 0x55a0));
    lVar8 = FUN_00f0a7e0(param_1 + 0x55a0,auStack_98);
    if (lVar8 != 0) {
      uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x55a0) + 8) + 0x3c);
      fVar11 = (float)(uVar2 & 0x3fff);
      local_a0 = (float)*(ushort *)(lVar8 + 4) / fVar11;
      fVar12 = (float)(uVar2 >> 0xe & 0x3fff);
      local_9c = 1.0 - (float)((uint)*(ushort *)(lVar8 + 10) + (uint)*(ushort *)(lVar8 + 6)) /
                       fVar12;
      local_a8 = (float)((uint)*(ushort *)(lVar8 + 8) + (uint)*(ushort *)(lVar8 + 4)) / fVar11 -
                 local_a0;
      fStack_a4 = (1.0 - (float)*(ushort *)(lVar8 + 6) / fVar12) - local_9c;
      uVar9 = *(undefined8 *)(param_1 + 0x308);
      uVar6 = FUN_00e6a474("heroArt_repeat");
      uVar6 = FUN_0091ed5c("heroArt_repeat",uVar6,0x12345678);
      FUN_019971b0(uVar9,uVar6,&local_a8);
      uVar9 = *(undefined8 *)(param_1 + 0x308);
      uVar6 = FUN_00e6a474("heroArt_offset");
      uVar6 = FUN_0091ed5c("heroArt_offset",uVar6,0x12345678);
      FUN_019971b0(uVar9,uVar6,&local_a0);
    }
  }
  bVar3 = *param_3;
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  sVar7 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar7 = *(size_t *)(param_3 + 8);
  }
  if (sVar1 == sVar7) {
    __s2 = *(byte **)(param_3 + 0x10);
    __s1 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s1 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = param_3 + 1;
    }
    if ((DAT_0320ffa8 & 1) == 0) {
      if (sVar1 != 0) {
        lVar8 = -(ulong)(DAT_0320ffa8 >> 1);
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *__s2) goto LAB_00c9bfcc;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00c9c138;
    }
    if ((sVar1 == 0) || (iVar5 = memcmp(__s1,__s2,sVar1), iVar5 == 0)) goto LAB_00c9c138;
  }
LAB_00c9bfcc:
  lVar8 = param_1 + 0x55b0;
  if (*(long *)(param_1 + 0x55b0) != 0) {
    FUN_00f0a948(lVar8);
    bVar3 = *param_3;
  }
  pbVar10 = *(byte **)(param_3 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar10 = param_3 + 1;
  }
  FUN_00f0a814(lVar8,pbVar10);
  uVar9 = *(undefined8 *)(param_1 + 0x308);
  uVar6 = FUN_00e6a474("cardArt_file");
  uVar6 = FUN_0091ed5c("cardArt_file",uVar6,0x12345678);
  FUN_019972a0(uVar9,uVar6,*(undefined8 *)(param_1 + 0x55b0));
  pbVar10 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar10 = param_4 + 1;
  }
  lVar8 = FUN_00f0a7e0(lVar8,pbVar10);
  if (lVar8 != 0) {
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x55b0) + 8) + 0x3c);
    fVar11 = (float)(uVar2 & 0x3fff);
    local_a0 = (float)*(ushort *)(lVar8 + 4) / fVar11;
    fVar12 = (float)(uVar2 >> 0xe & 0x3fff);
    local_9c = 1.0 - (float)((uint)*(ushort *)(lVar8 + 10) + (uint)*(ushort *)(lVar8 + 6)) / fVar12;
    local_a8 = (float)((uint)*(ushort *)(lVar8 + 8) + (uint)*(ushort *)(lVar8 + 4)) / fVar11 -
               local_a0;
    fStack_a4 = (1.0 - (float)*(ushort *)(lVar8 + 6) / fVar12) - local_9c;
    uVar9 = *(undefined8 *)(param_1 + 0x308);
    uVar6 = FUN_00e6a474("cardArt_repeat");
    uVar6 = FUN_0091ed5c("cardArt_repeat",uVar6,0x12345678);
    FUN_019971b0(uVar9,uVar6,&local_a8);
    uVar9 = *(undefined8 *)(param_1 + 0x308);
    uVar6 = FUN_00e6a474("cardArt_offset");
    uVar6 = FUN_0091ed5c("cardArt_offset",uVar6,0x12345678);
    FUN_019971b0(uVar9,uVar6,&local_a0);
  }
LAB_00c9c138:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

