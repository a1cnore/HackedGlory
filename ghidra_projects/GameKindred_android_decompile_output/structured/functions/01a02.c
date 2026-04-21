// functions/01a02 — 1 functions
#include "libGameKindred.h"




ulong FUN_01a02748(long param_1,void *param_2,ulong param_3,void *param_4,ulong param_5,
                  undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 auStack_a8 [7];
  char *local_70;
  undefined1 *local_68;
  
  plVar10 = *(long **)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x120);
  lVar11 = *plVar10;
  lVar8 = *(long *)(lVar11 + 0x60);
  uVar7 = (ulong)(iVar4 + 0xd);
  if ((int)plVar10[0x14] == 0) {
    if (*(int *)(param_1 + 0x130) != 0) {
      lVar11 = *(long *)(param_1 + 0x140);
      uVar7 = _libssh2_ntohu32(lVar11);
      uVar7 = uVar7 & 0xffffffff;
      puVar1 = (undefined1 *)(lVar11 + 4);
      local_68 = puVar1;
      if (uVar7 < param_3) {
        memcpy(param_2,puVar1,uVar7);
        *(undefined1 *)((long)param_2 + uVar7) = 0;
        uVar5 = _libssh2_ntohu32(puVar1 + uVar7);
        uVar5 = uVar5 & 0xffffffff;
        puVar1 = puVar1 + uVar7 + 4;
        if ((param_4 != (void *)0x0) && (1 < param_5)) {
          local_68 = puVar1;
          if (param_5 <= uVar5) goto LAB_01a02938;
          memcpy(param_4,puVar1,uVar5);
          *(undefined1 *)((long)param_4 + uVar5) = 0;
        }
        local_68 = puVar1 + uVar5;
        puVar2 = auStack_a8;
        if (param_6 != (undefined8 *)0x0) {
          param_6[6] = 0;
          param_6[3] = 0;
          param_6[2] = 0;
          param_6[5] = 0;
          param_6[4] = 0;
          param_6[1] = 0;
          *param_6 = 0;
          puVar2 = param_6;
        }
        iVar4 = FUN_01a0587c(puVar2);
        local_68 = local_68 + iVar4;
        *(undefined1 **)(param_1 + 0x140) = local_68;
      }
      else {
LAB_01a02938:
        uVar7 = 0xffffffffffffffda;
      }
      iVar4 = *(int *)(param_1 + 0x130) + -1;
      *(int *)(param_1 + 0x130) = iVar4;
      if (iVar4 != 0) {
        return uVar7;
      }
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(param_1 + 0x138),lVar8);
      return uVar7;
    }
    local_68 = (undefined1 *)(**(code **)(lVar8 + 8))(uVar7,lVar8);
    plVar10[0x15] = (long)local_68;
    if (local_68 == (undefined1 *)0x0) {
      pcVar6 = "Unable to allocate memory for FXP_READDIR packet";
      iVar4 = -6;
      local_68 = (undefined1 *)0x0;
      goto LAB_01a02a54;
    }
    _libssh2_store_u32(&local_68,iVar4 + 9);
    *local_68 = 0xc;
    lVar3 = plVar10[1];
    *(int *)(plVar10 + 1) = (int)lVar3 + 1;
    *(int *)(plVar10 + 0x16) = (int)lVar3;
    local_68 = local_68 + 1;
    _libssh2_store_u32(&local_68);
    _libssh2_store_str(&local_68,param_1 + 0x20,*(undefined8 *)(param_1 + 0x120));
    *(undefined4 *)(plVar10 + 0x14) = 2;
LAB_01a027b0:
    plVar9 = plVar10 + 0x15;
    uVar5 = _libssh2_channel_write(lVar11,0,*plVar9,uVar7);
    if (uVar5 == 0xffffffffffffffdb) {
      return 0xffffffffffffffdb;
    }
    (**(code **)(lVar8 + 0x18))(*plVar9,lVar8);
    *plVar9 = 0;
    if (uVar5 != uVar7) {
      *(undefined4 *)(plVar10 + 0x14) = 0;
      pcVar6 = "_libssh2_channel_write() failed";
      iVar4 = -7;
      goto LAB_01a02a54;
    }
    *(undefined4 *)(plVar10 + 0x14) = 3;
  }
  else if ((int)plVar10[0x14] == 2) goto LAB_01a027b0;
  iVar4 = FUN_01a056c0(plVar10,"heieiehesession not authenticated yet",(int)plVar10[0x16],&local_70,
                       auStack_a8);
  if (iVar4 == -0x25) {
    return 0xffffffffffffffdb;
  }
  if (iVar4 == 0) {
    if (*local_70 != 'e') {
      *(undefined4 *)(plVar10 + 0x14) = 0;
      iVar4 = _libssh2_ntohu32(local_70 + 5,0);
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x130) = iVar4;
        *(char **)(param_1 + 0x138) = local_70;
        *(char **)(param_1 + 0x140) = local_70 + 9;
        uVar7 = FUN_01a02748(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar7;
      }
      (**(code **)(lVar8 + 0x18))(local_70,lVar8);
      return 0;
    }
    iVar4 = _libssh2_ntohu32(local_70 + 5,0);
    (**(code **)(lVar8 + 0x18))(local_70,lVar8);
    if (iVar4 == 1) {
      *(undefined4 *)(plVar10 + 0x14) = 0;
      return 0;
    }
    *(int *)(plVar10 + 8) = iVar4;
    *(undefined4 *)(plVar10 + 0x14) = 0;
    pcVar6 = "SFTP Protocol Error";
    iVar4 = -0x1f;
  }
  else {
    *(undefined4 *)(plVar10 + 0x14) = 0;
    pcVar6 = "Timeout waiting for status message";
  }
LAB_01a02a54:
  iVar4 = _libssh2_error(lVar8,iVar4,pcVar6);
  return (long)iVar4;
}

