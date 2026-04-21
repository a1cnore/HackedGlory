// functions/01a03 — 1 functions
#include "libGameKindred.h"




void FUN_01a03240(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x18);
  lVar6 = *(long *)(*plVar9 + 0x60);
  lVar3 = _libssh2_list_first(param_1 + 0x178);
  if (lVar3 == 0) {
    return;
  }
LAB_01a03280:
  lVar4 = _libssh2_list_next(lVar3);
  iVar1 = *(int *)(lVar3 + 0x30);
  lVar8 = *(long *)(*plVar9 + 0x60);
  for (lVar5 = _libssh2_list_first(plVar9 + 2); lVar5 != 0; lVar5 = _libssh2_list_next(lVar5)) {
    pcVar7 = *(char **)(lVar5 + 0x20);
    if ((*pcVar7 == 'e') && (*(int *)(lVar5 + 0x18) == iVar1)) goto LAB_01a03364;
  }
  iVar1 = *(int *)(lVar3 + 0x30);
  lVar8 = *(long *)(*plVar9 + 0x60);
  for (lVar5 = _libssh2_list_first(plVar9 + 2); lVar5 != 0; lVar5 = _libssh2_list_next(lVar5)) {
    pcVar7 = *(char **)(lVar5 + 0x20);
    if ((*pcVar7 == 'g') && (*(int *)(lVar5 + 0x18) == iVar1)) goto LAB_01a03364;
  }
  if (*(long *)(lVar3 + 0x20) != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 0x30);
    lVar8 = *(long *)(*plVar9 + 0x60);
    lVar5 = (**(code **)(lVar8 + 8))(0x20,lVar8);
    if (lVar5 == 0) {
      _libssh2_error(lVar8,0xfffffffa,"malloc fail for zombie request  ID");
    }
    else {
      *(undefined4 *)(lVar5 + 0x18) = uVar2;
      _libssh2_list_add(plVar9 + 4);
    }
  }
  goto LAB_01a033a4;
LAB_01a03364:
  _libssh2_list_remove(lVar5);
  (**(code **)(lVar8 + 0x18))(lVar5,lVar8);
  (**(code **)(lVar6 + 0x18))(pcVar7,lVar6);
LAB_01a033a4:
  _libssh2_list_remove(lVar3);
  (**(code **)(lVar6 + 0x18))(lVar3,lVar6);
  lVar3 = lVar4;
  if (lVar4 == 0) {
    return;
  }
  goto LAB_01a03280;
}

