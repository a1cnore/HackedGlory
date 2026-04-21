// functions/019fc — 3 functions
#include "libGameKindred.h"




undefined8 FUN_019fc7e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  if ((RSA *)*param_4 != (RSA *)0x0) {
    RSA_free((RSA *)*param_4);
    *param_4 = 0;
  }
  iVar2 = _libssh2_ntohu32(param_2);
  if ((iVar2 == 7) && (iVar2 = strncmp((char *)(param_2 + 4),"ssh-rsa",7), iVar2 == 0)) {
    uVar4 = _libssh2_ntohu32(param_2 + 0xb);
    lVar1 = param_2 + 0xf + (uVar4 & 0xffffffff);
    uVar3 = _libssh2_ntohu32(lVar1);
    uVar5 = _libssh2_rsa_new(&local_38,param_2 + 0xf,uVar4 & 0xffffffff,lVar1 + 4,uVar3,0,0,0,0,0,0,
                             0,0,0,0,0,0);
    if ((int)uVar5 == 0) {
      *param_4 = local_38;
      return uVar5;
    }
  }
  return 0xffffffff;
}




undefined8 FUN_019fca20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_58;
  
  if ((DSA *)*param_4 != (DSA *)0x0) {
    DSA_free((DSA *)*param_4);
    *param_4 = 0;
  }
  iVar4 = _libssh2_ntohu32(param_2);
  if ((iVar4 == 7) && (iVar4 = strncmp((char *)(param_2 + 4),"ssh-dss",7), iVar4 == 0)) {
    uVar7 = _libssh2_ntohu32(param_2 + 0xb);
    lVar1 = param_2 + 0xf + (uVar7 & 0xffffffff);
    uVar8 = _libssh2_ntohu32(lVar1);
    lVar1 = lVar1 + 4;
    lVar2 = lVar1 + (uVar8 & 0xffffffff);
    uVar9 = _libssh2_ntohu32(lVar2);
    lVar2 = lVar2 + 4;
    lVar3 = lVar2 + (uVar9 & 0xffffffff);
    uVar5 = _libssh2_ntohu32(lVar3);
    _libssh2_dsa_new(&local_58,param_2 + 0xf,uVar7 & 0xffffffff,lVar1,uVar8 & 0xffffffff,lVar2,
                     uVar9 & 0xffffffff,lVar3 + 4,uVar5,0,0);
    uVar6 = 0;
    *param_4 = local_58;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}




undefined8
FUN_019fcb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if ((DSA *)*param_4 != (DSA *)0x0) {
    DSA_free((DSA *)*param_4);
    *param_4 = 0;
  }
  uVar1 = _libssh2_dsa_new_private(&local_38,param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    *param_4 = local_38;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

