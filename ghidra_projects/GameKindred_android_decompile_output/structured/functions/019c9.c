// functions/019c9 — 4 functions
#include "libGameKindred.h"




undefined8 FUN_019c9dac(long param_1,long param_2,size_t param_3)

{
  void *__dest;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x930);
  uVar4 = *(long *)(param_2 + 0x78) + param_3;
  if (uVar4 < uVar3) {
    __dest = *(void **)(param_2 + 0x70);
LAB_019c9e58:
    memcpy(__dest,*(void **)(param_2 + 0x88),param_3);
    lVar5 = *(long *)(param_2 + 0x70);
    uVar2 = 0;
    *(size_t *)(param_2 + 0x70) = lVar5 + param_3;
    *(size_t *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + param_3;
    *(undefined1 *)(lVar5 + param_3) = 0;
  }
  else {
    if (uVar4 < 0x19001) {
      lVar6 = *(long *)(param_2 + 0x70);
      lVar5 = *(long *)(param_1 + 0x928);
      uVar4 = uVar4 * 3 >> 1;
      if (uVar4 <= uVar3 * 2) {
        uVar4 = uVar3 << 1;
      }
      lVar1 = (*(code *)PTR_realloc_02bf74b8)(lVar5,uVar4);
      if (lVar1 != 0) {
        *(long *)(param_1 + 0x928) = lVar1;
        __dest = (void *)(lVar1 + (lVar6 - lVar5));
        *(ulong *)(param_1 + 0x930) = uVar4;
        *(void **)(param_2 + 0x70) = __dest;
        goto LAB_019c9e58;
      }
      FUN_019ca0fc(param_1,"Failed to alloc memory for big header!");
    }
    else {
      FUN_019ca0fc(param_1,"Avoided giant realloc for header (max is %d)!",0x19000);
    }
    uVar2 = 0x1b;
  }
  return uVar2;
}




ulong FUN_019c9ea8(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(byte *)(*(long *)(param_2 + 800) + 0x7a) >> 2 & 1) == 0) {
    uVar2 = FUN_019c9eec(param_1,param_3);
    return uVar2;
  }
  iVar1 = FUN_019e2430("RTSP/",param_3,5);
  return (ulong)(iVar1 != 0);
}




bool FUN_019c9eec(long param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x4d8);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      iVar1 = FUN_019e2430("HTTP/",param_2,5);
      return iVar1 != 0;
    }
    __s = (char *)*puVar3;
    sVar2 = strlen(__s);
    iVar1 = FUN_019e2430(__s,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar3 = (undefined8 *)puVar3[1];
  }
  return true;
}




void FUN_019c9f64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  size_t sVar1;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined1 *local_870;
  undefined1 **ppuStack_868;
  undefined8 *puStack_860;
  undefined8 uStack_858;
  char acStack_844 [2052];
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x520) != '\0')) {
    puStack_860 = &local_8a0;
    ppuStack_868 = &local_870;
    uStack_858 = 0xffffff80ffffffd0;
    local_8a0 = param_3;
    uStack_898 = param_4;
    local_890 = param_5;
    uStack_888 = param_6;
    local_880 = param_7;
    uStack_878 = param_8;
    local_870 = (undefined1 *)register0x00000008;
    FUN_019d4a10(acStack_844,0x801,param_2,&local_870);
    sVar1 = strlen(acStack_844);
    FUN_019caa84(param_1,0,acStack_844,sVar1);
  }
  return;
}

