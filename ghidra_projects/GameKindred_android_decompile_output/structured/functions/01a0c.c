// functions/01a0c — 1 functions
#include "libGameKindred.h"




undefined4 FUN_01a0cf68(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  size_t sVar5;
  undefined8 *puVar6;
  char *pcVar7;
  size_t sVar8;
  
  plVar2 = (long *)libssh2_crypt_methods();
  pcVar7 = *(char **)(param_1 + 0x50);
  if (pcVar7 == (char *)0x0) {
    puVar6 = (undefined8 *)*plVar2;
    while (puVar6 != (undefined8 *)0x0) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        return 0xffffffff;
      }
      sVar8 = strlen(pcVar7);
      lVar4 = FUN_01a0d310(param_2,param_3,pcVar7,sVar8);
      if (lVar4 != 0) {
        *(long *)(param_1 + 0x18) = *plVar2;
        return 0;
      }
      puVar6 = (undefined8 *)plVar2[1];
      plVar2 = plVar2 + 1;
    }
  }
  else {
    do {
      if (*pcVar7 == '\0') {
        return 0xffffffff;
      }
      pcVar3 = strchr(pcVar7,0x2c);
      if (pcVar3 == (char *)0x0) {
        sVar8 = strlen(pcVar7);
      }
      else {
        sVar8 = (long)pcVar3 - (long)pcVar7;
      }
      lVar4 = FUN_01a0d310(param_2,param_3,pcVar7,sVar8);
      if (lVar4 != 0) {
        puVar6 = (undefined8 *)*plVar2;
        while( true ) {
          if (puVar6 == (undefined8 *)0x0) {
            return 0xffffffff;
          }
          plVar2 = plVar2 + 1;
          pcVar3 = (char *)*puVar6;
          sVar5 = strlen(pcVar3);
          if ((sVar5 == sVar8) && (iVar1 = strncmp(pcVar3,pcVar7,sVar8), iVar1 == 0)) break;
          puVar6 = (undefined8 *)*plVar2;
        }
        *(undefined8 **)(param_1 + 0x18) = puVar6;
        return 0;
      }
      pcVar7 = pcVar3 + 1;
    } while (pcVar3 != (char *)0x0);
  }
  return 0xffffffff;
}

