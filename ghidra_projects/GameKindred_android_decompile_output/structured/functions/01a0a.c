// functions/01a0a — 1 functions
#include "libGameKindred.h"




void FUN_01a0a300(long param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4,long param_5,
                 long *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  void *__dest;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char *local_58;
  
  lVar7 = *param_6;
  puVar1 = (undefined8 *)(lVar7 + 0x18);
  if (*(int *)(lVar7 + 0x38) == 0) {
    lVar6 = *(long *)(lVar7 + 0x40);
    puVar3 = (undefined1 *)
             (**(code **)(param_1 + 8))(param_5 + *(long *)(lVar6 + 0x30) + 0xd,param_1);
    *puVar1 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      pcVar5 = "out of memory";
      iVar2 = -6;
      local_58 = (char *)0x0;
      goto LAB_01a0a528;
    }
    local_58 = puVar3 + 1;
    *puVar3 = 0xd;
    _libssh2_store_str(&local_58,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30));
    _libssh2_store_str(&local_58,param_4,param_5);
    _libssh2_store_u32(&local_58,0);
    pcVar5 = *(char **)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x38) = 1;
    *(long *)(lVar7 + 0x20) = (long)local_58 - (long)pcVar5;
  }
  else {
    pcVar5 = (char *)*puVar1;
  }
  if (*pcVar5 == '\r') {
    if (*(long *)(lVar7 + 0x10) != 0) {
      iVar2 = (**(code **)(*(long *)(lVar7 + 0x10) + 8))(lVar7,puVar1);
      if (iVar2 == 0) {
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(lVar7 + 0x18),param_1);
        *(undefined8 *)(lVar7 + 0x18) = 0;
        pcVar5 = *(char **)(lVar7 + 0x28);
        lVar6 = *(long *)(lVar7 + 0x30);
        local_58 = pcVar5;
        if (((0 < lVar6) && (*pcVar5 == '\x0e')) && (local_58 = pcVar5 + 1, 4 < lVar6)) {
          local_58 = pcVar5 + 5;
          if (8 < lVar6) {
            uVar4 = _libssh2_ntohu32();
            lVar6 = (lVar6 + -9) - (uVar4 & 0xffffffff);
            local_58 = local_58 + 4;
            if (-1 < lVar6) {
              local_58 = local_58 + (uVar4 & 0xffffffff);
              if (3 < lVar6) {
                uVar4 = _libssh2_ntohu32();
                uVar4 = uVar4 & 0xffffffff;
                *param_3 = uVar4;
                local_58 = local_58 + 4;
                if (-1 < (long)((lVar6 + -4) - uVar4)) {
                  __dest = (void *)(**(code **)(param_1 + 8))(uVar4,param_1);
                  *param_2 = __dest;
                  if (__dest == (void *)0x0) {
                    iVar2 = -6;
                  }
                  else {
                    memcpy(__dest,local_58,*param_3);
                    iVar2 = 0;
                  }
                  goto LAB_01a0a4f0;
                }
              }
            }
          }
        }
        iVar2 = -0x2a;
      }
LAB_01a0a4f0:
      (**(code **)(param_1 + 0x18))(*puVar1,param_1);
      *puVar1 = 0;
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(lVar7 + 0x28),param_1);
      pcVar5 = "agent sign failure";
      *(undefined8 *)(lVar7 + 0x28) = 0;
      goto LAB_01a0a528;
    }
    pcVar5 = "agent not connected";
  }
  else {
    pcVar5 = "illegal request";
  }
  iVar2 = -0x27;
LAB_01a0a528:
  _libssh2_error(param_1,iVar2,pcVar5);
  return;
}

