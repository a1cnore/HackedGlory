// functions/00b80 — 8 functions
#include "libGameKindred.h"




void FUN_00b8032c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027e7b60;
  FUN_00b80b2c();
  FUN_00b80b80(param_1);
  FUN_00b89298(param_1 + 0x1bab,1);
  if ((*(byte *)(param_1 + 0x1ba6) & 1) != 0) {
    operator_delete((void *)param_1[0x1ba8]);
  }
  if ((*(byte *)(param_1 + 0x1ba3) & 1) != 0) {
    operator_delete((void *)param_1[0x1ba5]);
  }
  if ((void *)param_1[0x1ba1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1ba1]);
    param_1[0x1ba1] = 0;
    param_1[0x1ba0] = 0;
  }
  puVar1 = param_1 + 0x1b9f;
  lVar2 = -0x78;
  do {
    if ((*(byte *)(puVar1 + -2) & 1) != 0) {
      operator_delete((void *)*puVar1);
    }
    lVar2 = lVar2 + 0x18;
    puVar1 = puVar1 + -3;
  } while (lVar2 != 0);
  if ((*(byte *)(param_1 + 0x1b75) & 1) != 0) {
    operator_delete((void *)param_1[0x1b77]);
  }
  param_1[0x1b69] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x1b72) & 1) != 0) {
    operator_delete((void *)param_1[0x1b74]);
  }
  if ((*(byte *)(param_1 + 0x1b6e) & 1) != 0) {
    operator_delete((void *)param_1[0x1b70]);
  }
  FUN_00e84dd8(param_1 + 0x1b69);
  param_1[0x1b5c] = &PTR_FUN_027e7ec8;
  FUN_00b89368(param_1 + 0x1b65,1);
  if ((*(byte *)(param_1 + 0x1b61) & 1) != 0) {
    operator_delete((void *)param_1[0x1b63]);
  }
  FUN_00e84dd8(param_1 + 0x1b5c);
  if ((void *)param_1[0x1b5b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b5b]);
    param_1[0x1b5b] = 0;
    param_1[0x1b5a] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1b33);
  FUN_00f0d3a4(param_1 + 0x1b0d);
  FUN_00f0d3a4(param_1 + 0x1ae7);
  FUN_00f0d3a4(param_1 + 0x1ac1);
  FUN_00ab0d88(param_1 + 0x185e);
  FUN_00f0d3a4(param_1 + 0x1838);
  FUN_00f0d3a4(param_1 + 0x1812);
  param_1[0x17f4] = &PTR_FUN_028266f0;
  param_1[0x180b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x180e);
  FUN_00f13d08(param_1 + 0x17f4);
  FUN_00af8c0c(param_1 + 0x177e);
  param_1[0x15fd] = &PTR_FUN_027d6650;
  param_1[0x175d] = &PTR_FUN_028266f0;
  param_1[0x1774] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1777);
  FUN_00f13d08(param_1 + 0x175d);
  param_1[0x173f] = &PTR_FUN_028266f0;
  param_1[0x1756] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1759);
  FUN_00f13d08(param_1 + 0x173f);
  FUN_00ac6220(param_1 + 0x16d4);
  FUN_00ac6220(param_1 + 0x1669);
  FUN_00f0d3a4(param_1 + 0x1643);
  param_1[0x1625] = &PTR_FUN_028266f0;
  param_1[0x163c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x163f);
  FUN_00f13d08(param_1 + 0x1625);
  FUN_00f01868(param_1 + 0x1614);
  FUN_00f13d08(param_1 + 0x15fd);
  FUN_00f01868(param_1 + 0x15ec);
  FUN_00f0d3a4(param_1 + 0x15c6);
  FUN_00f0d3a4(param_1 + 0x15a0);
  FUN_00f0d3a4(param_1 + 0x157a);
  FUN_00f0d3a4(param_1 + 0x1554);
  FUN_00b1eb14(param_1 + 0x1164);
  FUN_00b1df14(param_1 + 0xff6);
  param_1[0xfd6] = &PTR_FUN_028266f0;
  param_1[0xfed] = &PTR_FUN_02826850;
  param_1[0xe76] = &PTR_FUN_027d8d40;
  FUN_00f0a79c(param_1 + 0xff0);
  FUN_00f13d08(param_1 + 0xfd6);
  param_1[0xfb8] = &PTR_FUN_028266f0;
  param_1[0xfcf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfd2);
  FUN_00f13d08(param_1 + 0xfb8);
  FUN_00ac6220(param_1 + 0xf4d);
  FUN_00ac6220(param_1 + 0xee2);
  FUN_00f0d3a4(param_1 + 0xebc);
  param_1[0xe9e] = &PTR_FUN_028266f0;
  param_1[0xeb5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xeb8);
  FUN_00f13d08(param_1 + 0xe9e);
  FUN_00f01868(param_1 + 0xe8d);
  FUN_00f13d08(param_1 + 0xe76);
  FUN_00f01868(param_1 + 0xe65);
  FUN_009c7fa8(param_1 + 0xbad);
  FUN_00f0d3a4(param_1 + 0xb87);
  FUN_00f0d3a4(param_1 + 0xb61);
  FUN_00afc0a4(param_1 + 0xb25);
  FUN_00ab0d88(param_1 + 0x8c2);
  FUN_00f0d3a4(param_1 + 0x89c);
  param_1[0x87e] = &PTR_FUN_028266f0;
  param_1[0x895] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x898);
  FUN_00f13d08(param_1 + 0x87e);
  FUN_00f01868(param_1 + 0x86d);
  if ((void *)param_1[0x86c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x86c]);
    param_1[0x86c] = 0;
    param_1[0x86b] = 0;
  }
  if ((void *)param_1[0x86a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x86a]);
    param_1[0x86a] = 0;
    param_1[0x869] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x843);
  FUN_00f0d3a4(param_1 + 0x81d);
  param_1[0x7f9] = &PTR_FUN_028266f0;
  param_1[0x810] = &PTR_FUN_02826850;
  param_1[0x75e] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x813);
  FUN_00f13d08(param_1 + 0x7f9);
  param_1[0x7db] = &PTR_FUN_028266f0;
  param_1[0x7f2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7f5);
  FUN_00f13d08(param_1 + 0x7db);
  param_1[0x7bd] = &PTR_FUN_028266f0;
  param_1[0x7d4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7d7);
  FUN_00f13d08(param_1 + 0x7bd);
  FUN_00f01868(param_1 + 0x7ac);
  FUN_009c825c(param_1 + 0x75e);
  param_1[0x733] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x74a);
  FUN_00f13d08(param_1 + 0x733);
  FUN_00f0d3a4(param_1 + 0x70d);
  FUN_00f0d3a4(param_1 + 0x6e7);
  FUN_00f0d3a4(param_1 + 0x6c1);
  FUN_00f0d3a4(param_1 + 0x69b);
  FUN_00f0d3a4(param_1 + 0x675);
  FUN_00f0d3a4(param_1 + 0x64f);
  FUN_00f0d3a4(param_1 + 0x629);
  FUN_00f0d3a4(param_1 + 0x603);
  FUN_00ab0d88(param_1 + 0x3a0);
  FUN_00f0d3a4(param_1 + 0x37a);
  param_1[0x35c] = &PTR_FUN_028266f0;
  param_1[0x373] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x376);
  FUN_00f13d08(param_1 + 0x35c);
  FUN_00f01868(param_1 + 0x34b);
  param_1[0x32d] = &PTR_FUN_028266f0;
  param_1[0x344] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x347);
  FUN_00f13d08(param_1 + 0x32d);
  FUN_00f0d3a4(param_1 + 0x307);
  param_1[0x2e9] = &PTR_FUN_028266f0;
  param_1[0x300] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x303);
  FUN_00f13d08(param_1 + 0x2e9);
  param_1[0x2cb] = &PTR_FUN_028266f0;
  param_1[0x2e2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e5);
  FUN_00f13d08(param_1 + 0x2cb);
  param_1[0x2ad] = &PTR_FUN_028266f0;
  param_1[0x2c4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2c7);
  FUN_00f13d08(param_1 + 0x2ad);
  param_1[0x28f] = &PTR_FUN_028266f0;
  param_1[0x2a6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2a9);
  FUN_00f13d08(param_1 + 0x28f);
  param_1[0x271] = &PTR_FUN_028266f0;
  param_1[0x288] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x28b);
  FUN_00f13d08(param_1 + 0x271);
  FUN_00f0d3a4(param_1 + 0x24b);
  FUN_00f0d3a4(param_1 + 0x225);
  FUN_00f0d3a4(param_1 + 0x1ff);
  FUN_00f0d3a4(param_1 + 0x1d9);
  FUN_00f0d3a4(param_1 + 0x1b3);
  FUN_00f0d3a4(param_1 + 0x18d);
  FUN_00f0d3a4(param_1 + 0x167);
  FUN_00f0d3a4(param_1 + 0x141);
  FUN_00f0d3a4(param_1 + 0x11b);
  FUN_00f0d3a4(param_1 + 0xf5);
  FUN_00f01868(param_1 + 0xe4);
  FUN_00f0d3a4(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b80b2c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)(param_1 + 0xdac8);
  if (*plVar1 != 0) {
    uVar2 = FUN_00f02540();
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(*plVar1,1);
    }
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    *plVar1 = 0;
  }
  return;
}




void FUN_00b80b80(long param_1)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = (uint *)(param_1 + 0x4348);
  uVar3 = (ulong)*puVar1;
  if (*puVar1 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x4350) + lVar5) != 0) {
        uVar3 = FUN_00f02540();
        if ((uVar3 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x4350) + lVar5),1);
        }
        plVar2 = *(long **)(*(long *)(param_1 + 0x4350) + lVar5);
        if (plVar2 == (long *)0x0) {
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x4350) + uVar6 * 8);
        }
        else {
          (**(code **)(*plVar2 + 8))();
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x4350) + lVar5);
        }
        *puVar4 = 0;
        uVar3 = (ulong)*puVar1;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar6 < uVar3);
  }
  if (*(long *)(param_1 + 0x4350) != 0) {
    *puVar1 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x4358);
  uVar3 = (ulong)*puVar1;
  if (*puVar1 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x4360) + lVar5) != 0) {
        uVar3 = FUN_00f02540();
        if ((uVar3 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x4360) + lVar5),1);
        }
        plVar2 = *(long **)(*(long *)(param_1 + 0x4360) + lVar5);
        if (plVar2 == (long *)0x0) {
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x4360) + uVar6 * 8);
        }
        else {
          (**(code **)(*plVar2 + 8))();
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x4360) + lVar5);
        }
        *puVar4 = 0;
        uVar3 = (ulong)*puVar1;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar6 < uVar3);
  }
  if (*(long *)(param_1 + 0x4360) != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_00b80cb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e7ec8;
  FUN_00b89368(param_1 + 9,1);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00b80cfc(void *param_1)

{
  FUN_00b8032c();
  operator_delete(param_1);
  return;
}




void FUN_00b80d20(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x5f0;
  fVar7 = *(float *)(param_3 + 0x630);
  lVar4 = param_3 + 0xafe8;
  fVar5 = (float)FUN_00f01c20(lVar1);
  fVar6 = (float)FUN_00f01c54(lVar4,0,0,1,1);
  fVar8 = *(float *)(param_3 + 0x634);
  fVar5 = ((fVar7 - fVar5 * 0.5) - fVar6) + -30.0;
  FUN_00f01c54(lVar4,0,0,1,1);
  fVar8 = fVar8 - param_2 * 0.5;
  if ((*(float *)(param_3 + 0xb028) != fVar5) ||
     (param_2 = *(float *)(param_3 + 0xb02c), param_2 != fVar8)) {
    *(float *)(param_3 + 0xb028) = fVar5;
    *(float *)(param_3 + 0xb02c) = fVar8;
    FUN_0091ada4(lVar4);
  }
  fVar7 = *(float *)(param_3 + 0x630);
  lVar4 = param_3 + 0x73b0;
  fVar5 = (float)FUN_00f01c20(lVar1);
  fVar6 = (float)FUN_00f01c54(lVar4,0,0,1,1);
  fVar8 = *(float *)(param_3 + 0x634);
  fVar5 = ((fVar7 - fVar5 * 0.5) - fVar6) + -30.0;
  FUN_00f01c54(lVar4,0,0,1,1);
  fVar8 = fVar8 - param_2 * 0.5;
  if ((*(float *)(param_3 + 0x73f0) != fVar5) || (*(float *)(param_3 + 0x73f4) != fVar8)) {
    *(float *)(param_3 + 0x73f0) = fVar5;
    *(float *)(param_3 + 0x73f4) = fVar8;
    FUN_0091ada4(lVar4);
  }
  lVar4 = *(long *)(param_3 + 0xdac8);
  if (lVar4 != 0) {
    fVar7 = *(float *)(param_3 + 0x630);
    plVar2 = (long *)(lVar4 + 0x950);
    fVar5 = (float)FUN_00f01c20(lVar1);
    fVar6 = (float)FUN_00f01c54(*(long *)(param_3 + 0xdac8) + 0x950,0,0,1,1);
    fVar8 = *(float *)(param_3 + 0x634);
    fVar5 = ((fVar7 - fVar5 * 0.5) - fVar6 * 0.5) + -30.0;
    if ((*(float *)(lVar4 + 0x990) != fVar5) || (*(float *)(lVar4 + 0x994) != fVar8)) {
      *(float *)(lVar4 + 0x990) = fVar5;
      *(float *)(lVar4 + 0x994) = fVar8;
      FUN_0091ada4(plVar2);
    }
    local_70 = 0x3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b80f58(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_00afc73c(param_1 + 0x5928);
    FUN_00b0b980(param_1 + 0x4610);
    FUN_00a9dbbc(1);
    FUN_00b80fc0(param_1);
  }
  else {
    FUN_00b80fc0(param_1);
    FUN_00a9dbbc(0);
  }
  FUN_00b81014(param_1,param_2 & 1);
  return;
}




void FUN_00b80fc0(long *param_1)

{
  if (param_1[0x1b59] == 0) {
    FUN_00b09454(param_1 + 0xbad,1);
  }
  *(uint *)((long)param_1 + 0x5dec) = *(uint *)((long)param_1 + 0x5dec) | 4;
                    /* WARNING: Could not recover jumptable at 0x00b81010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}

