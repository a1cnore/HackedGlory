// functions/00a84 — 81 functions
#include "libGameKindred.h"




void FUN_00a84018(void)

{
  return;
}




void FUN_00a84020(void)

{
  return;
}




void FUN_00a84024(void)

{
  return;
}




void FUN_00a84028(void)

{
  return;
}




void FUN_00a8402c(void)

{
  return;
}




void FUN_00a84030(void)

{
  return;
}




void FUN_00a84034(void)

{
  return;
}




void FUN_00a84038(void)

{
  return;
}




void FUN_00a8403c(void)

{
  return;
}




void FUN_00a84040(void)

{
  return;
}




void FUN_00a84044(void)

{
  return;
}




void FUN_00a84048(void)

{
  return;
}




void FUN_00a8404c(void)

{
  return;
}




void FUN_00a84050(void)

{
  return;
}




void FUN_00a84054(void)

{
  return;
}




void FUN_00a84058(void)

{
  return;
}




void FUN_00a8405c(void)

{
  return;
}




void FUN_00a84060(void)

{
  return;
}




void FUN_00a84064(void)

{
  return;
}




void FUN_00a84068(void)

{
  return;
}




void FUN_00a8406c(void)

{
  return;
}




void FUN_00a84070(void)

{
  return;
}




void FUN_00a84074(void)

{
  return;
}




void FUN_00a84078(void)

{
  return;
}




void FUN_00a8407c(void)

{
  return;
}




void FUN_00a84080(void)

{
  return;
}




void FUN_00a84084(void)

{
  return;
}




void FUN_00a84088(void)

{
  return;
}




void FUN_00a8408c(void)

{
  return;
}




void FUN_00a84090(void)

{
  return;
}




void FUN_00a84094(void)

{
  return;
}




undefined8 FUN_00a84098(void)

{
  return 0;
}




void FUN_00a840a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cf290;
  param_1[1] = 0;
  param_1[2] = 0x200000000;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}




void FUN_00a840c8(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}




void FUN_00a8410c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}




void FUN_00a84114(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00a8411c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cedce4();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00da2720(param_1 + 0x10);
  local_48 = *(undefined8 *)(lVar3 + 0x10);
  local_40 = *(undefined4 *)(lVar3 + 0x18);
  FUN_00d5e124(uVar2,0xffffffff,0xffffffff,&local_48,*(undefined4 *)(param_1 + 0x14),
               *(undefined1 *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a841b4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d9d98c(param_2 + 0x10,lVar1);
    return;
  }
  return;
}




void FUN_00a841f0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d9d98c(param_2 + 0x10,lVar1);
    return;
  }
  return;
}




void FUN_00a84230(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xe0 | 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027cf328;
  param_1[1] = 0;
  return;
}




void FUN_00a8426c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | 1;
  return;
}




void FUN_00a84284(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + ((ulong)*(byte *)(param_1 + 0x39) & 7) * 8 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | *(byte *)(param_1 + 0x39) + 1 & 7;
  return;
}




void FUN_00a842a8(float param_1,long param_2)

{
  *(char *)(param_2 + 0x38) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_00a842c0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}




void FUN_00a842c8(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 8;
  return;
}




void FUN_00a842d8(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xef;
  return;
}




undefined8 FUN_00a842e8(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  lVar6 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar6 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_0312e4a8) break;
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  iVar2 = rand();
  if ((int)(uint)*(byte *)(param_1 + 0x38) < iVar2 % 0x100) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x39);
  if ((bVar1 >> 3 & 1) != 0) {
    uVar4 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260));
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
  }
  iVar3 = rand();
  iVar2 = 0;
  if ((bVar1 & 7) != 0) {
    iVar2 = iVar3 / (int)(bVar1 & 7);
  }
  lVar7 = *(long *)(param_1 + (long)(int)(iVar3 - iVar2 * (bVar1 & 7)) * 8 + 8);
  if (lVar7 == 0) {
    return 0;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = FUN_00d5babc(param_4);
  uVar5 = FUN_009ac620(uVar8,lVar6,lVar7,param_3 & 1,uVar5);
  return uVar5;
}




void FUN_00a843e8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5
                 )

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar1 = FUN_00d5babc(param_5);
  FUN_009ac620(uVar2,param_3,param_2,param_4 & 1,uVar1);
  return;
}




void FUN_00a8443c(undefined8 param_1,undefined8 param_2)

{
  FUN_009dbf64(0,param_2);
  return;
}




void FUN_00a84448(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xe0 | 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027cf378;
  param_1[1] = 0;
  return;
}




void FUN_00a84484(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | 1;
  return;
}




void FUN_00a8449c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + ((ulong)*(byte *)(param_1 + 0x39) & 7) * 8 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | *(byte *)(param_1 + 0x39) + 1 & 7;
  return;
}




void FUN_00a844c0(float param_1,long param_2)

{
  *(char *)(param_2 + 0x38) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_00a844d8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}




void FUN_00a844e0(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 8;
  return;
}




void FUN_00a844f0(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xef;
  return;
}




undefined8 FUN_00a84500(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  lVar6 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar6 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_0312e4a8) break;
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  iVar2 = rand();
  if ((int)(uint)*(byte *)(param_1 + 0x38) < iVar2 % 0x100) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x39);
  if ((bVar1 >> 3 & 1) != 0) {
    uVar4 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260));
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
  }
  iVar3 = rand();
  iVar2 = 0;
  if ((bVar1 & 7) != 0) {
    iVar2 = iVar3 / (int)(bVar1 & 7);
  }
  lVar7 = *(long *)(param_1 + (long)(int)(iVar3 - iVar2 * (bVar1 & 7)) * 8 + 8);
  if (lVar7 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x39);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = FUN_00d5babc(param_4);
  uVar5 = FUN_009ac6b8(uVar8,lVar6,lVar7,param_3 & 1,1,0xffffffff,bVar1 >> 4 & 1,uVar5);
  return uVar5;
}




void FUN_00a84614(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5
                 )

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x39);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = FUN_00d5babc(param_5);
  FUN_009ac6b8(uVar3,param_3,param_2,param_4 & 1,1,0xffffffff,bVar1 >> 4 & 1,uVar2);
  return;
}




void FUN_00a8467c(undefined8 param_1,undefined8 param_2)

{
  FUN_009db42c(param_2);
  return;
}




void FUN_00a84684(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *param_1 = &PTR_thunk_FUN_00cfc44c_027bdf50;
  *(byte *)((long)param_1 + 0x51) = *(byte *)((long)param_1 + 0x51) & 0xe0 | 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = &PTR_FUN_027cf328;
  param_1[2] = &PTR_FUN_027bdfc0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  return;
}




void FUN_00a8470c(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = FUN_00d5048c(param_2);
  iVar1 = FUN_00d5cf60();
  if (iVar1 != -1) {
    FUN_00d5cf60(uVar3);
    uVar3 = FUN_00d9e390();
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    uVar4 = FUN_00d5048c(param_2);
    FUN_00a842e8(param_1 + 0x18,uVar4,0,uVar3);
    return;
  }
  iVar1 = FUN_00d51964(param_2);
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      lVar5 = FUN_00d51954(param_2,uVar6);
      if (lVar5 != 0) {
        FUN_00a842e8(param_1 + 0x18,lVar5,0,uVar3);
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00d51964(param_2);
    } while (uVar6 < uVar2);
  }
  return;
}




void FUN_00a847e8(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *param_1 = &PTR_thunk_FUN_00cfc44c_027be010;
  *(byte *)((long)param_1 + 0x51) = *(byte *)((long)param_1 + 0x51) & 0xe0 | 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = &PTR_FUN_027cf378;
  param_1[2] = &PTR_FUN_027bdfc0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  return;
}




void FUN_00a84870(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = FUN_00d5048c(param_2);
  iVar1 = FUN_00d5cf60();
  if (iVar1 != -1) {
    FUN_00d5cf60(uVar3);
    uVar3 = FUN_00d9e390();
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    uVar4 = FUN_00d5048c(param_2);
    FUN_00a84500(param_1 + 0x18,uVar4,0,uVar3);
    return;
  }
  iVar1 = FUN_00d51964(param_2);
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      lVar5 = FUN_00d51954(param_2,uVar6);
      if (lVar5 != 0) {
        FUN_00a84500(param_1 + 0x18,lVar5,0,uVar3);
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00d51964(param_2);
    } while (uVar6 < uVar2);
  }
  return;
}




void FUN_00a8494c(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  *(byte *)((long)param_1 + 0x51) = *(byte *)((long)param_1 + 0x51) & 0xe0 | 0x10;
  *(undefined1 *)(param_1 + 10) = 0xff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c1000;
  param_1[1] = 0;
  param_1[3] = &PTR_FUN_027cf328;
  param_1[2] = &PTR_FUN_027bdfc0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  return;
}




void FUN_00a849b8(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_00d44c78(*param_2);
  if (lVar3 != 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      uVar4 = FUN_00d66d28(*param_2);
      FUN_00a842e8(param_1 + 0x18,uVar4,0,lVar3);
      return;
    }
    param_2 = param_2 + 1;
    iVar1 = FUN_00d9d984(param_2);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        uVar4 = FUN_00d9d9a0(param_2,uVar5);
        FUN_00a842e8(param_1 + 0x18,uVar4,0,lVar3);
        uVar5 = uVar5 + 1;
        uVar2 = FUN_00d9d984(param_2);
      } while (uVar5 < uVar2);
    }
  }
  return;
}




void FUN_00a84a74(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0xffffffff;
  *(byte *)((long)param_1 + 0x51) = *(byte *)((long)param_1 + 0x51) & 0xe0 | 0x10;
  *(undefined1 *)(param_1 + 10) = 0xff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027c1050;
  param_1[1] = 0;
  param_1[3] = &PTR_FUN_027cf378;
  param_1[2] = &PTR_FUN_027bdfc0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
  return;
}




void FUN_00a84ae0(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_00d44c78(*param_2);
  if (lVar3 != 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      uVar4 = FUN_00d66d28(*param_2);
      FUN_00a84500(param_1 + 0x18,uVar4,0,lVar3);
      return;
    }
    param_2 = param_2 + 1;
    iVar1 = FUN_00d9d984(param_2);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        uVar4 = FUN_00d9d9a0(param_2,uVar5);
        FUN_00a84500(param_1 + 0x18,uVar4,0,lVar3);
        uVar5 = uVar5 + 1;
        uVar2 = FUN_00d9d984(param_2);
      } while (uVar5 < uVar2);
    }
  }
  return;
}




void FUN_00a84b9c(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_00d44c78(*param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_00d66d28(*param_2);
    lVar5 = FUN_00a842e8(param_1 + 0x18,uVar4,1,lVar3);
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar5 + 0x28;
    }
    puVar1 = &DAT_03214ce8;
    if (lVar5 != 0) {
      puVar1 = (undefined4 *)(lVar3 + 8);
    }
    uVar2 = *puVar1;
    *(long *)(param_1 + 0x58) = lVar3;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  return;
}




void FUN_00a84c20(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x58);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x58) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a84cc8(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_00d44c78(*param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_00d66d28(*param_2);
    lVar5 = FUN_00a84500(param_1 + 0x18,uVar4,1,lVar3);
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar5 + 0x28;
    }
    puVar1 = &DAT_03214ce8;
    if (lVar5 != 0) {
      puVar1 = (undefined4 *)(lVar3 + 8);
    }
    uVar2 = *puVar1;
    *(long *)(param_1 + 0x58) = lVar3;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  return;
}




void FUN_00a84d4c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x58);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x58) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
          }
        }
        FUN_009db42c(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a84df0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *param_1 = &PTR_FUN_027cf3c8;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}




void FUN_00a84e10(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00a84e18(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_00a84e20(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}




void FUN_00a84e2c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_60 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar4 = rand();
  if ((float)iVar4 * 4.656613e-10 + 0.0 < *(float *)(param_1 + 0x10)) {
    thunk_FUN_00d9ff34(local_60,*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined1 *)(param_1 + 0x14);
    uVar7 = 0xffff0000;
    lVar5 = param_2;
LAB_00a84ee4:
    do {
      do {
        lVar6 = lVar5;
        if ((lVar6 != param_2) &&
           (lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x2a7d0549), lVar5 != 0)) {
          (**(code **)(lVar5 + 8))(lVar6,local_60[0],uVar2);
        }
        if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
          uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
          goto LAB_00a84ee4;
        }
        if ((uVar7 & 0xffff) == 0) goto LAB_00a84f44;
        lVar5 = *(long *)(lVar6 + 0x20);
      } while (*(long *)(lVar6 + 0x20) != 0);
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
      uVar7 = uVar1 | uVar7 & 0xffff0000;
      while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
        if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00a84f44;
        lVar6 = *(long *)(lVar6 + 0x10);
        uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
        if (lVar6 == 0) goto LAB_00a84f44;
      }
    } while( true );
  }
LAB_00a84f44:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00a84f74(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_00a84f84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00a84e2c(param_1 + 0x18,uVar1);
  return;
}




long FUN_00a84fb0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_00a84fc0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00a84e2c(param_1 + 0x18,uVar1);
  return;
}




void FUN_00a84ff0(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}

