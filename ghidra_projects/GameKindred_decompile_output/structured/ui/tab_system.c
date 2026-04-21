// ui/tab_system.c — 3 UI functions (tab_system)
// Extracted by extract_ui.py from structured/functions/
#include "GameKindred.h"



/*
 * FUN_1001e115c
 * tab system init
 * VA: 0x1001e115c | Source: functions/1001e.c:294
 * Fptr: __DATA+0x1469478
 * Dylib: Layer 8
 * Notes: Original sets empty string when gate=1.
 * CE-gate: YES (1x) | Guest-gate: NO
 * Callees: FUN_10001549c, FUN_100131560, FUN_1001dfd18, FUN_1001dfe10, FUN_1001e03b4
 */
void FUN_1001e115c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *local_78 [2];
  char local_61;
  
  *(undefined8 *)(param_1 + 0x470) = 0;
  iVar2 = FUN_100131560();
  if (iVar2 != 0) {
    FUN_1001dfe10(param_1,&DAT_101d91198);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x40);
      lVar1 = lVar7 + lVar5;
      lVar3 = FUN_1001dfd18(param_1,lVar1 + 0x10);
      if (lVar3 != 0) {
        if (*(char *)(lVar1 + 0x28) == '\0') {
          if (*(char *)(lVar7 + lVar5 + 0x29) == '\0') {
            iVar2 = FUN_1001e03b4(param_1,lVar3 + 0x20);
            if (iVar2 == 0) {
              *(undefined4 *)(lVar3 + 0x98) = 4;
            }
            else {
              *(undefined4 *)(lVar3 + 0x98) = 3;
            }
          }
          else {
            *(undefined4 *)(lVar3 + 0x98) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar3 + 0x98) = 0;
          *(long *)(param_1 + 0x470) = lVar3;
          plVar4 = (long *)(lVar3 + 0x20);
          if (*(char *)(lVar3 + 0x37) < '\0') {
            plVar4 = (long *)*plVar4;
          }
          FUN_10001549c(local_78,plVar4);
          FUN_1001dfe10(param_1,local_78);
          if (local_61 < '\0') {
            operator_delete(local_78[0]);
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x30;
    } while (uVar6 < *(uint *)(param_2 + 0x38));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    do {
      if (*(code **)(lVar5 + 8) == (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
      }
      else {
        (**(code **)(lVar5 + 8))();
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20);
  }
  return;
}



/*
 * FUN_1001e6c4c
 * setTabVisible — sets bit 2 of [tab_panel+0x2c2c]
 * VA: 0x1001e6c4c | Source: functions/1001e.c:4572
 * Fptr: __DATA+0x1469fb8
 * Dylib: Layer 3
 * Notes: Signature: void setTabVisible(void *tab_panel, int visible). Controls sidebar button visibility.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_1001e6c94
 * Callers: FUN_10023bd9c, FUN_10024e4a4, FUN_100266988, FUN_100266f74
 */
void FUN_1001e6c4c(long param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = 0;
  }
  else {
    FUN_1001e6c94(param_1);
    bVar1 = 4;
  }
  *(byte *)(param_1 + 0x2c2c) = *(byte *)(param_1 + 0x2c2c) & 0xfb | bVar1;
  return;
}



/*
 * FUN_1002afb68
 * tab registration — FUN_1002afb68(container, title, 0, icon, section)
 * VA: 0x1002afb68 | Source: functions/1002a.c:11895
 * Dylib: Layer 6
 * Notes: Registers a tab with its container. Called for BAG trophies tab.
 * CE-gate: NO | Guest-gate: NO
 * Callees: FUN_100198d1c, FUN_1002afbbc
 * Callers: FUN_1001f59e8, thunk_FUN_1001f59e8
 */
void FUN_1002afb68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_28;
  
  FUN_100198d1c(param_1 + 0x2a8,param_4,param_2,param_5,param_3);
  local_28 = param_4;
  FUN_1002afbbc(param_1 + 0x1c8,&local_28);
  return;
}
