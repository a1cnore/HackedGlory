// functions/01a0f — 4 functions
#include "libGameKindred.h"




void FUN_01a0f084(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  ulong uVar1;
  int iVar2;
  
  param_6 = (undefined8 *)*param_6;
  uVar1 = *param_3;
  param_6[3] = param_2;
  *param_6 = param_4;
  *(undefined4 *)(param_6 + 1) = param_5;
  *(int *)(param_6 + 4) = (int)uVar1;
  iVar2 = FUN_00f23168(param_6,1);
  if (iVar2 != 0) {
    _libssh2_error(param_1,0xffffffe3,"compression failure");
    return;
  }
  *param_3 = (ulong)(uint)((int)uVar1 - *(int *)(param_6 + 4));
  return;
}




undefined8
FUN_01a0f100(long param_1,long *param_2,ulong *param_3,int param_4,undefined8 param_5,int param_6,
            undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  
  param_7 = (undefined8 *)*param_7;
  if (param_7 == (undefined8 *)0x0) {
    pcVar8 = "decompression unitilized";
    uVar7 = 0xffffffd8;
    goto LAB_01a0f2b8;
  }
  iVar4 = param_6 * 8;
  *param_7 = param_5;
  *(int *)(param_7 + 1) = param_6;
  if (iVar4 < 0x1a) {
    iVar4 = 0x19;
  }
  iVar9 = param_4;
  if (iVar4 <= param_4) {
    iVar9 = iVar4;
  }
  lVar5 = (**(code **)(param_1 + 8))((long)iVar9,param_1);
  param_7[3] = lVar5;
  *(int *)(param_7 + 4) = iVar9;
  if (lVar5 != 0) {
    bVar3 = false;
    do {
      iVar4 = FUN_00f276ac(param_7,1);
      if (iVar4 != 0) {
        if (iVar4 == -5) {
          iVar4 = *(int *)(param_7 + 1);
          goto LAB_01a0f1d0;
        }
        (**(code **)(param_1 + 0x18))(lVar5,param_1);
        pcVar8 = "decompression failure";
LAB_01a0f2b4:
        uVar7 = 0xffffffe3;
        goto LAB_01a0f2b8;
      }
      iVar4 = *(int *)(param_7 + 1);
      if (iVar4 == 0) {
        *param_2 = lVar5;
        *param_3 = (ulong)(uint)(iVar9 - *(int *)(param_7 + 4));
        return 0;
      }
LAB_01a0f1d0:
      iVar2 = *(int *)(param_7 + 4);
      iVar1 = 0x20;
      if (iVar4 != 0) {
        iVar1 = iVar4 << 3;
      }
      iVar4 = iVar1 + iVar9;
      if (param_4 < iVar4) {
        if (bVar3) {
          (**(code **)(param_1 + 0x18))(lVar5,param_1);
          pcVar8 = "Excessive growth in decompression phase";
          goto LAB_01a0f2b4;
        }
        bVar3 = true;
      }
      lVar6 = (**(code **)(param_1 + 0x10))(lVar5,(long)iVar4,param_1);
      if (lVar6 == 0) goto code_r0x01a0f20c;
      param_7[3] = lVar6 + (ulong)(uint)(iVar9 - iVar2);
      *(int *)(param_7 + 4) = *(int *)(param_7 + 4) + iVar1;
      lVar5 = lVar6;
      iVar9 = iVar4;
    } while( true );
  }
  pcVar8 = "Unable to allocate decompression buffer";
  goto LAB_01a0f240;
code_r0x01a0f20c:
  (**(code **)(param_1 + 0x18))(lVar5,param_1);
  pcVar8 = "Unable to expand decompression buffer";
LAB_01a0f240:
  uVar7 = 0xfffffffa;
LAB_01a0f2b8:
  uVar7 = _libssh2_error(param_1,uVar7,pcVar8);
  return uVar7;
}




undefined8 FUN_01a0f46c(long param_1,long *param_2)

{
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    EVP_CIPHER_CTX_cleanup((EVP_CIPHER_CTX *)(*param_2 + 0x10));
    (**(code **)(param_1 + 0x18))(*param_2,param_1);
    *param_2 = 0;
  }
  return 0;
}




undefined8
FUN_01a0f4b8(long param_1,long param_2,undefined8 param_3,undefined4 *param_4,undefined8 param_5,
            undefined4 *param_6,undefined4 param_7,undefined8 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  
  puVar2 = (undefined4 *)(**(code **)(param_1 + 8))(0xb8,param_1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xfffffffa;
  }
  else {
    *puVar2 = param_7;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(puVar2 + 2) = uVar3;
    iVar1 = _libssh2_cipher_init(puVar2 + 4,uVar3,param_3,param_5,param_7);
    if (iVar1 == 0) {
      *param_8 = puVar2;
      *param_4 = 1;
      *param_6 = 1;
      lVar4 = -0x600;
      do {
        _libssh2_cipher_crypt
                  (puVar2 + 4,*(undefined8 *)(puVar2 + 2),*puVar2,auStack_68,
                   (long)*(int *)(param_2 + 8));
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
      uVar3 = 0;
    }
    else {
      (**(code **)(param_1 + 0x18))(puVar2,param_1);
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

