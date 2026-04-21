// functions/00f27 — 10 functions
#include "libGameKindred.h"




void thunk_FUN_00f271dc(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong auStack_228 [32];
  ulong auStack_128 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (0 < (long)param_3) {
    lVar2 = 1;
    lVar3 = 8;
    auStack_228[0] = 0xedb88320;
    do {
      *(long *)((long)auStack_228 + lVar3) = lVar2;
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 << 1;
    } while (lVar3 != 0x100);
    lVar3 = 0;
    do {
      uVar6 = auStack_228[lVar3];
      if (uVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = auStack_228;
        do {
          if ((uVar6 & 1) != 0) {
            uVar4 = *puVar5 ^ uVar4;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      auStack_128[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    lVar3 = 0;
    do {
      uVar6 = auStack_128[lVar3];
      if (uVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = auStack_128;
        do {
          if ((uVar6 & 1) != 0) {
            uVar4 = *puVar5 ^ uVar4;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      auStack_228[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    do {
      lVar3 = 0;
      do {
        uVar6 = auStack_228[lVar3];
        if (uVar6 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          puVar5 = auStack_228;
          do {
            if ((uVar6 & 1) != 0) {
              uVar4 = *puVar5 ^ uVar4;
            }
            uVar6 = uVar6 >> 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 != 0);
        }
        auStack_128[lVar3] = uVar4;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x20);
      uVar6 = param_1;
      if (((param_3 & 1) != 0) && (uVar6 = 0, param_1 != 0)) {
        uVar6 = 0;
        puVar5 = auStack_128;
        do {
          if ((param_1 & 1) != 0) {
            uVar6 = *puVar5 ^ uVar6;
          }
          param_1 = param_1 >> 1;
          puVar5 = puVar5 + 1;
        } while (param_1 != 0);
      }
      param_1 = uVar6;
      if (param_3 < 2) break;
      lVar3 = 0;
      do {
        uVar4 = auStack_128[lVar3];
        if (uVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          puVar5 = auStack_128;
          do {
            if ((uVar4 & 1) != 0) {
              uVar7 = *puVar5 ^ uVar7;
            }
            uVar4 = uVar4 >> 1;
            puVar5 = puVar5 + 1;
          } while (uVar4 != 0);
        }
        auStack_228[lVar3] = uVar7;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x20);
      if ((((uint)param_3 >> 1 & 1) != 0) && (param_1 = 0, uVar6 != 0)) {
        param_1 = 0;
        puVar5 = auStack_228;
        do {
          if ((uVar6 & 1) != 0) {
            param_1 = *puVar5 ^ param_1;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      param_3 = (long)param_3 >> 2;
    } while (param_3 != 0);
    param_1 = param_1 ^ param_2;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void FUN_00f271dc(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_228 [32];
  ulong local_128 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < (long)param_3) {
    lVar2 = 1;
    lVar3 = 8;
    local_228[0] = 0xedb88320;
    do {
      *(long *)((long)local_228 + lVar3) = lVar2;
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 << 1;
    } while (lVar3 != 0x100);
    lVar3 = 0;
    do {
      uVar6 = local_228[lVar3];
      if (uVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = local_228;
        do {
          if ((uVar6 & 1) != 0) {
            uVar4 = *puVar5 ^ uVar4;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      local_128[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    lVar3 = 0;
    do {
      uVar6 = local_128[lVar3];
      if (uVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = local_128;
        do {
          if ((uVar6 & 1) != 0) {
            uVar4 = *puVar5 ^ uVar4;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      local_228[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    do {
      lVar3 = 0;
      do {
        uVar6 = local_228[lVar3];
        if (uVar6 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          puVar5 = local_228;
          do {
            if ((uVar6 & 1) != 0) {
              uVar4 = *puVar5 ^ uVar4;
            }
            uVar6 = uVar6 >> 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 != 0);
        }
        local_128[lVar3] = uVar4;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x20);
      uVar6 = param_1;
      if (((param_3 & 1) != 0) && (uVar6 = 0, param_1 != 0)) {
        uVar6 = 0;
        puVar5 = local_128;
        do {
          if ((param_1 & 1) != 0) {
            uVar6 = *puVar5 ^ uVar6;
          }
          param_1 = param_1 >> 1;
          puVar5 = puVar5 + 1;
        } while (param_1 != 0);
      }
      param_1 = uVar6;
      if (param_3 < 2) break;
      lVar3 = 0;
      do {
        uVar4 = local_128[lVar3];
        if (uVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          puVar5 = local_128;
          do {
            if ((uVar4 & 1) != 0) {
              uVar7 = *puVar5 ^ uVar7;
            }
            uVar4 = uVar4 >> 1;
            puVar5 = puVar5 + 1;
          } while (uVar4 != 0);
        }
        local_228[lVar3] = uVar7;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x20);
      if ((((uint)param_3 >> 1 & 1) != 0) && (param_1 = 0, uVar6 != 0)) {
        param_1 = 0;
        puVar5 = local_228;
        do {
          if ((uVar6 & 1) != 0) {
            param_1 = *puVar5 ^ param_1;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      param_3 = (long)param_3 >> 2;
    } while (param_3 != 0);
    param_1 = param_1 ^ param_2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void thunk_FUN_00f271dc(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong auStack_228 [32];
  ulong auStack_128 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (0 < (long)param_3) {
    lVar2 = 1;
    lVar3 = 8;
    auStack_228[0] = 0xedb88320;
    do {
      *(long *)((long)auStack_228 + lVar3) = lVar2;
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 << 1;
    } while (lVar3 != 0x100);
    lVar3 = 0;
    do {
      uVar6 = auStack_228[lVar3];
      if (uVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = auStack_228;
        do {
          if ((uVar6 & 1) != 0) {
            uVar4 = *puVar5 ^ uVar4;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      auStack_128[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    lVar3 = 0;
    do {
      uVar6 = auStack_128[lVar3];
      if (uVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar5 = auStack_128;
        do {
          if ((uVar6 & 1) != 0) {
            uVar4 = *puVar5 ^ uVar4;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      auStack_228[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    do {
      lVar3 = 0;
      do {
        uVar6 = auStack_228[lVar3];
        if (uVar6 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          puVar5 = auStack_228;
          do {
            if ((uVar6 & 1) != 0) {
              uVar4 = *puVar5 ^ uVar4;
            }
            uVar6 = uVar6 >> 1;
            puVar5 = puVar5 + 1;
          } while (uVar6 != 0);
        }
        auStack_128[lVar3] = uVar4;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x20);
      uVar6 = param_1;
      if (((param_3 & 1) != 0) && (uVar6 = 0, param_1 != 0)) {
        uVar6 = 0;
        puVar5 = auStack_128;
        do {
          if ((param_1 & 1) != 0) {
            uVar6 = *puVar5 ^ uVar6;
          }
          param_1 = param_1 >> 1;
          puVar5 = puVar5 + 1;
        } while (param_1 != 0);
      }
      param_1 = uVar6;
      if (param_3 < 2) break;
      lVar3 = 0;
      do {
        uVar4 = auStack_128[lVar3];
        if (uVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          puVar5 = auStack_128;
          do {
            if ((uVar4 & 1) != 0) {
              uVar7 = *puVar5 ^ uVar7;
            }
            uVar4 = uVar4 >> 1;
            puVar5 = puVar5 + 1;
          } while (uVar4 != 0);
        }
        auStack_228[lVar3] = uVar7;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x20);
      if ((((uint)param_3 >> 1 & 1) != 0) && (param_1 = 0, uVar6 != 0)) {
        param_1 = 0;
        puVar5 = auStack_228;
        do {
          if ((uVar6 & 1) != 0) {
            param_1 = *puVar5 ^ param_1;
          }
          uVar6 = uVar6 >> 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
      }
      param_3 = (long)param_3 >> 2;
    } while (param_3 != 0);
    param_1 = param_1 ^ param_2;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




undefined8 FUN_00f27400(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x38), puVar2 != (undefined8 *)0x0)) {
    puVar2[4] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(uint *)(puVar2 + 1) != 0) {
      *(ulong *)(param_1 + 0x60) = (ulong)(*(uint *)(puVar2 + 1) & 1);
    }
    *(undefined4 *)((long)puVar2 + 0x14) = 0x8000;
    puVar1 = puVar2 + 0xaa;
    puVar2[0x11] = puVar1;
    puVar2[0xc] = puVar1;
    puVar2[0xd] = puVar1;
    *puVar2 = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[0x37c] = 0xffffffff00000001;
    return 0;
  }
  return 0xfffffffe;
}




undefined8 FUN_00f2746c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 0x34) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    uVar1 = FUN_00f27400();
    return uVar1;
  }
  return 0xfffffffe;
}




undefined8 FUN_00f2748c(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((param_1 != 0) && (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
    if ((int)param_2 < 0) {
      iVar5 = 0;
      uVar1 = -param_2;
    }
    else {
      iVar5 = (param_2 >> 4) + 1;
      uVar1 = param_2 & 0xf;
      if (0x2f < (int)param_2) {
        uVar1 = param_2;
      }
    }
    if ((uVar1 == 0) || ((uVar1 & 0xfffffff8) == 8)) {
      if ((*(long *)(lVar4 + 0x40) == 0) || (*(uint *)(lVar4 + 0x30) == uVar1)) {
        *(int *)(lVar4 + 8) = iVar5;
        *(uint *)(lVar4 + 0x30) = uVar1;
        lVar3 = lVar4;
      }
      else {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(lVar4 + 0x40) = 0;
        lVar3 = *(long *)(param_1 + 0x38);
        *(int *)(lVar4 + 8) = iVar5;
        *(uint *)(lVar4 + 0x30) = uVar1;
        if (lVar3 == 0) {
          return 0xfffffffe;
        }
      }
      *(undefined4 *)(lVar3 + 0x34) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      uVar2 = FUN_00f27400(param_1);
      return uVar2;
    }
  }
  return 0xfffffffe;
}




int FUN_00f27554(long param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  if (param_3 == (char *)0x0) {
    iVar1 = -6;
  }
  else {
    iVar1 = -6;
    if ((param_4 == 0x70) && (*param_3 == '1')) {
      if (param_1 == 0) {
        iVar1 = -2;
      }
      else {
        pcVar3 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar3 == (code *)0x0) {
          pcVar3 = FUN_00f26ac8;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(code **)(param_1 + 0x40) = FUN_00f26ac8;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          *(code **)(param_1 + 0x48) = FUN_00f26ad0;
        }
        lVar2 = (*pcVar3)(*(undefined8 *)(param_1 + 0x50),1,0x1bf0);
        if (lVar2 == 0) {
          iVar1 = -4;
        }
        else {
          *(long *)(param_1 + 0x38) = lVar2;
          *(undefined8 *)(lVar2 + 0x40) = 0;
          iVar1 = FUN_00f2748c(param_1,param_2);
          if (iVar1 != 0) {
            (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar2);
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
        }
      }
    }
  }
  return iVar1;
}




void FUN_00f2762c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00f27554(param_1,0xf,param_2,param_3);
  return;
}




undefined8 FUN_00f2763c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    if ((int)param_2 < 0) {
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined4 *)(lVar2 + 0x50) = 0;
      return 0;
    }
    if ((int)param_2 < 0x11) {
      uVar1 = *(uint *)(lVar2 + 0x50) + param_2;
      if (uVar1 < 0x21) {
        *(long *)(lVar2 + 0x48) =
             *(long *)(lVar2 + 0x48) +
             (long)(int)(((int)(1L << ((ulong)param_2 & 0x3f)) - 1U & param_3) <<
                        (ulong)(*(uint *)(lVar2 + 0x50) & 0x1f));
        *(uint *)(lVar2 + 0x50) = uVar1;
        return 0;
      }
    }
  }
  return 0xfffffffe;
}




void FUN_00f276ac(long *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  ushort uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined1 *puVar15;
  char *pcVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined2 uVar21;
  ulong uVar22;
  uint uVar23;
  undefined1 *__dest;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  uint *puVar34;
  int local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((((param_1 == (long *)0x0) || (puVar34 = (uint *)param_1[7], puVar34 == (uint *)0x0)) ||
      (__dest = (undefined1 *)param_1[3], __dest == (undefined1 *)0x0)) ||
     ((pbVar28 = (byte *)*param_1, pbVar28 == (byte *)0x0 && ((int)param_1[1] != 0)))) {
switchD_00f27784_default:
    iVar9 = -2;
    goto LAB_00f28c2c;
  }
  uVar32 = *puVar34;
  if (uVar32 == 0xb) {
    uVar32 = 0xc;
    *puVar34 = 0xc;
  }
  local_70 = 0;
  uVar23 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 1);
  uVar33 = *(ulong *)(puVar34 + 0x12);
  uVar27 = (ulong)puVar34[0x14];
  puVar1 = puVar34 + 0x154;
  puVar2 = puVar34 + 0x22;
  puVar3 = puVar34 + 0xc4;
  uVar31 = (ulong)uVar4;
  uVar30 = uVar23;
LAB_00f2776c:
  uVar26 = (uint)uVar31;
  uVar13 = (uint)uVar27;
  pbVar29 = pbVar28;
  iVar19 = 1;
  switch(uVar32) {
  case 0:
    uVar32 = puVar34[2];
    if (uVar32 == 0) {
      uVar32 = 0xc;
      goto LAB_00f28b28;
    }
    if (uVar13 < 0x10) {
      uVar27 = uVar27 & 0xffffffff;
      do {
        uVar26 = 0;
        if ((int)uVar31 == 0) goto LAB_00f28cdc;
        pbVar29 = pbVar28 + 1;
        uVar31 = (ulong)((int)uVar31 - 1);
        uVar12 = uVar27 & 0x3f;
        uVar27 = uVar27 + 8;
        uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
        pbVar28 = pbVar29;
      } while (uVar27 < 0x10);
    }
    if (((uVar32 >> 1 & 1) == 0) || (uVar33 != 0x8b1f)) {
      puVar34[4] = 0;
      if (*(long *)(puVar34 + 10) != 0) {
        *(undefined4 *)(*(long *)(puVar34 + 10) + 0x48) = 0xffffffff;
      }
      if (((uVar32 & 1) == 0) ||
         (uVar12 = (uVar33 & 0xff) * 0x100 + (uVar33 >> 8),
         uVar18 = uVar12 / 0x1f + (uVar12 - uVar12 / 0x1f >> 1),
         uVar12 != (uVar18 >> 4) * 0x20 - (uVar18 >> 4))) {
        pcVar16 = "incorrect header check";
        break;
      }
      if ((uVar33 & 0xf) != 8) goto LAB_00f28b88;
      uVar26 = (uint)(uVar33 >> 4) & 0xf;
      uVar32 = uVar26 + 8;
      if (puVar34[0xc] == 0) {
        puVar34[0xc] = uVar32;
      }
      else if (puVar34[0xc] < uVar32) {
        uVar33 = uVar33 >> 4;
        uVar27 = (ulong)((int)uVar27 - 4);
        pcVar16 = "invalid window size";
        break;
      }
      puVar34[5] = 0x100 << (ulong)uVar26;
      lVar11 = FUN_00f26ad8(0,0,0);
      uVar27 = 0;
      *(long *)(puVar34 + 6) = lVar11;
      param_1[0xc] = lVar11;
      *puVar34 = (uint)(uVar33 >> 0xc) & 2 ^ 0xb;
      uVar33 = 0;
    }
    else {
      uVar10 = FUN_00f26efc(0,0,0);
      *(undefined8 *)(puVar34 + 6) = uVar10;
      local_6c = 0x8b1f;
      uVar10 = FUN_00f26efc(uVar10,&local_6c,2);
      uVar33 = 0;
      uVar27 = 0;
      *(undefined8 *)(puVar34 + 6) = uVar10;
      *puVar34 = 1;
    }
    goto LAB_00f28b9c;
  case 1:
    if (uVar13 < 0x10) {
      uVar27 = uVar27 & 0xffffffff;
      do {
        uVar26 = 0;
        if ((int)uVar31 == 0) goto LAB_00f28cdc;
        pbVar29 = pbVar28 + 1;
        uVar31 = (ulong)((int)uVar31 - 1);
        uVar12 = uVar27 & 0x3f;
        uVar27 = uVar27 + 8;
        uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
        pbVar28 = pbVar29;
      } while (uVar27 < 0x10);
    }
    uVar32 = (uint)uVar33;
    puVar34[4] = uVar32;
    if ((uVar32 & 0xff) == 8) {
      if ((uVar33 & 0xe000) == 0) {
        if (*(uint **)(puVar34 + 10) != (uint *)0x0) {
          **(uint **)(puVar34 + 10) = uVar32 >> 8 & 1;
        }
        if ((uVar32 >> 9 & 1) != 0) {
          local_6c = (undefined2)uVar33;
          uVar10 = FUN_00f26efc(*(undefined8 *)(puVar34 + 6),&local_6c,2);
          *(undefined8 *)(puVar34 + 6) = uVar10;
        }
        uVar27 = 0;
        uVar33 = 0;
        *puVar34 = 2;
        goto LAB_00f28124;
      }
      pcVar16 = "unknown header flags set";
    }
    else {
LAB_00f28b88:
      pcVar16 = "unknown compression method";
    }
    break;
  case 2:
    if (uVar13 < 0x20) {
LAB_00f28124:
      uVar27 = uVar27 & 0xffffffff;
      do {
        uVar26 = 0;
        if ((int)uVar31 == 0) goto LAB_00f28cdc;
        pbVar29 = pbVar28 + 1;
        uVar31 = (ulong)((int)uVar31 - 1);
        uVar12 = uVar27 & 0x3f;
        uVar27 = uVar27 + 8;
        uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
        pbVar28 = pbVar29;
      } while (uVar27 < 0x20);
    }
    if (*(long *)(puVar34 + 10) != 0) {
      *(ulong *)(*(long *)(puVar34 + 10) + 8) = uVar33;
    }
    if ((*(byte *)((long)puVar34 + 0x11) >> 1 & 1) != 0) {
      local_6c = (undefined2)uVar33;
      local_6a = (undefined1)(uVar33 >> 0x10);
      local_69 = (undefined1)(uVar33 >> 0x18);
      uVar10 = FUN_00f26efc(*(undefined8 *)(puVar34 + 6),&local_6c,4);
      *(undefined8 *)(puVar34 + 6) = uVar10;
    }
    uVar27 = 0;
    uVar33 = 0;
    *puVar34 = 3;
LAB_00f281b4:
    uVar27 = uVar27 & 0xffffffff;
    do {
      uVar26 = 0;
      if ((int)uVar31 == 0) goto LAB_00f28cdc;
      pbVar29 = pbVar28 + 1;
      uVar31 = (ulong)((int)uVar31 - 1);
      uVar12 = uVar27 & 0x3f;
      uVar27 = uVar27 + 8;
      uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
      pbVar28 = pbVar29;
    } while (uVar27 < 0x10);
    goto LAB_00f281d8;
  case 3:
    if (uVar13 < 0x10) goto LAB_00f281b4;
LAB_00f281d8:
    lVar11 = *(long *)(puVar34 + 10);
    if (lVar11 != 0) {
      *(uint *)(lVar11 + 0x10) = (uint)uVar33 & 0xff;
      *(int *)(lVar11 + 0x14) = (int)(uVar33 >> 8);
    }
    if ((*(byte *)((long)puVar34 + 0x11) >> 1 & 1) != 0) {
      local_6c = (undefined2)uVar33;
      uVar10 = FUN_00f26efc(*(undefined8 *)(puVar34 + 6),&local_6c,2);
      *(undefined8 *)(puVar34 + 6) = uVar10;
    }
    uVar33 = 0;
    uVar27 = 0;
    *puVar34 = 4;
    pbVar29 = pbVar28;
switchD_00f27784_caseD_4:
    uVar32 = puVar34[4];
    if ((uVar32 >> 10 & 1) == 0) {
      if (*(long *)(puVar34 + 10) != 0) {
        *(undefined8 *)(*(long *)(puVar34 + 10) + 0x18) = 0;
      }
    }
    else {
      if ((uint)uVar27 < 0x10) {
        uVar27 = uVar27 & 0xffffffff;
        pbVar28 = pbVar29;
        do {
          uVar26 = 0;
          if ((int)uVar31 == 0) goto LAB_00f28cdc;
          pbVar29 = pbVar28 + 1;
          uVar31 = (ulong)((int)uVar31 - 1);
          uVar12 = uVar27 & 0x3f;
          uVar27 = uVar27 + 8;
          uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
          pbVar28 = pbVar29;
        } while (uVar27 < 0x10);
      }
      puVar34[0x15] = (uint)uVar33;
      if (*(long *)(puVar34 + 10) != 0) {
        *(uint *)(*(long *)(puVar34 + 10) + 0x20) = (uint)uVar33;
      }
      if ((uVar32 >> 9 & 1) == 0) {
        uVar33 = 0;
        uVar27 = 0;
      }
      else {
        local_6c = (undefined2)uVar33;
        uVar10 = FUN_00f26efc(*(undefined8 *)(puVar34 + 6),&local_6c,2);
        uVar33 = 0;
        uVar27 = 0;
        *(undefined8 *)(puVar34 + 6) = uVar10;
      }
    }
    *puVar34 = 5;
    pbVar28 = pbVar29;
switchD_00f27784_caseD_5:
    uVar32 = puVar34[4];
    if ((uVar32 >> 10 & 1) == 0) {
LAB_00f283c0:
      puVar34[0x15] = 0;
      *puVar34 = 6;
switchD_00f27784_caseD_6:
      uVar13 = (uint)uVar27;
      uVar32 = (uint)uVar31;
      if ((*(byte *)((long)puVar34 + 0x11) >> 3 & 1) == 0) {
        if (*(long *)(puVar34 + 10) != 0) {
          *(undefined8 *)(*(long *)(puVar34 + 10) + 0x28) = 0;
        }
LAB_00f28480:
        puVar34[0x15] = 0;
        *puVar34 = 7;
switchD_00f27784_caseD_7:
        uVar13 = (uint)uVar27;
        uVar32 = (uint)uVar31;
        if ((*(byte *)((long)puVar34 + 0x11) >> 4 & 1) == 0) {
          if (*(long *)(puVar34 + 10) != 0) {
            *(undefined8 *)(*(long *)(puVar34 + 10) + 0x38) = 0;
          }
        }
        else {
          uVar26 = 0;
          if (uVar32 == 0) goto LAB_00f28cdc;
          uVar12 = 0;
          do {
            lVar11 = *(long *)(puVar34 + 10);
            bVar5 = pbVar28[uVar12];
            uVar12 = uVar12 + 1;
            if ((lVar11 != 0) && (lVar14 = *(long *)(lVar11 + 0x38), lVar14 != 0)) {
              uVar26 = puVar34[0x15];
              if (uVar26 < *(uint *)(lVar11 + 0x40)) {
                puVar34[0x15] = uVar26 + 1;
                *(byte *)(lVar14 + (ulong)uVar26) = bVar5;
              }
            }
          } while ((bVar5 != 0) && ((uint)uVar12 < uVar32));
          if ((*(byte *)((long)puVar34 + 0x11) >> 1 & 1) != 0) {
            uVar10 = FUN_00f26efc(*(undefined8 *)(puVar34 + 6),pbVar28,uVar12 & 0xffffffff);
            *(undefined8 *)(puVar34 + 6) = uVar10;
          }
          pbVar28 = pbVar28 + uVar12;
          if (bVar5 != 0) goto LAB_00f28c70;
          uVar31 = (uVar31 & 0xffffffff) - uVar12;
        }
        *puVar34 = 8;
        pbVar29 = pbVar28;
switchD_00f27784_caseD_8:
        pbVar28 = pbVar29;
        if ((puVar34[4] >> 9 & 1) != 0) {
          if ((uint)uVar27 < 0x10) {
            uVar27 = uVar27 & 0xffffffff;
            do {
              uVar26 = 0;
              if ((int)uVar31 == 0) goto LAB_00f28cdc;
              pbVar29 = pbVar28 + 1;
              uVar31 = (ulong)((int)uVar31 - 1);
              uVar12 = uVar27 & 0x3f;
              uVar27 = uVar27 + 8;
              uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
              pbVar28 = pbVar29;
            } while (uVar27 < 0x10);
          }
          pbVar28 = pbVar29;
          if (uVar33 != (ushort)puVar34[6]) {
            pcVar16 = "header crc mismatch";
            break;
          }
          uVar33 = 0;
          uVar27 = 0;
        }
        lVar11 = *(long *)(puVar34 + 10);
        if (lVar11 != 0) {
          *(uint *)(lVar11 + 0x44) = puVar34[4] >> 9 & 1;
          *(undefined4 *)(lVar11 + 0x48) = 1;
        }
        lVar11 = FUN_00f26efc(0,0,0);
        *(long *)(puVar34 + 6) = lVar11;
        param_1[0xc] = lVar11;
        *puVar34 = 0xb;
        goto LAB_00f28b9c;
      }
      uVar26 = 0;
      if (uVar32 == 0) goto LAB_00f28cdc;
      uVar12 = 0;
      do {
        lVar11 = *(long *)(puVar34 + 10);
        bVar5 = pbVar28[uVar12];
        uVar12 = uVar12 + 1;
        if ((lVar11 != 0) && (lVar14 = *(long *)(lVar11 + 0x28), lVar14 != 0)) {
          uVar26 = puVar34[0x15];
          if (uVar26 < *(uint *)(lVar11 + 0x30)) {
            puVar34[0x15] = uVar26 + 1;
            *(byte *)(lVar14 + (ulong)uVar26) = bVar5;
          }
        }
      } while ((bVar5 != 0) && ((uint)uVar12 < uVar32));
      if ((*(byte *)((long)puVar34 + 0x11) >> 1 & 1) != 0) {
        uVar10 = FUN_00f26efc(*(undefined8 *)(puVar34 + 6),pbVar28,uVar12 & 0xffffffff);
        *(undefined8 *)(puVar34 + 6) = uVar10;
      }
      pbVar28 = pbVar28 + uVar12;
      if (bVar5 == 0) {
        uVar31 = (uVar31 & 0xffffffff) - uVar12;
        goto LAB_00f28480;
      }
LAB_00f28c70:
      uVar26 = uVar32 - (int)uVar12;
      iVar19 = local_70;
    }
    else {
      uVar13 = puVar34[0x15];
      uVar24 = (uint)uVar31;
      uVar26 = uVar24;
      if (uVar13 <= uVar24) {
        uVar26 = uVar13;
      }
      if (uVar26 != 0) {
        lVar11 = *(long *)(puVar34 + 10);
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0x18) != 0)) {
          uVar13 = *(int *)(lVar11 + 0x20) - uVar13;
          uVar32 = *(uint *)(lVar11 + 0x24) - uVar13;
          if (uVar13 + uVar26 <= *(uint *)(lVar11 + 0x24)) {
            uVar32 = uVar26;
          }
          memcpy((void *)(*(long *)(lVar11 + 0x18) + (ulong)uVar13),pbVar28,(ulong)uVar32);
          uVar32 = puVar34[4];
        }
        if ((uVar32 >> 9 & 1) != 0) {
          uVar10 = FUN_00f26efc(*(undefined8 *)(puVar34 + 6),pbVar28,uVar26);
          *(undefined8 *)(puVar34 + 6) = uVar10;
        }
        uVar31 = (ulong)(uVar24 - uVar26);
        pbVar28 = pbVar28 + uVar26;
        uVar13 = puVar34[0x15] - uVar26;
        puVar34[0x15] = uVar13;
      }
      uVar26 = (uint)uVar31;
      if (uVar13 == 0) goto LAB_00f283c0;
LAB_00f28cdc:
      uVar13 = (uint)uVar27;
      iVar19 = local_70;
    }
    goto switchD_00f27784_caseD_1c;
  case 4:
    goto switchD_00f27784_caseD_4;
  case 5:
    goto switchD_00f27784_caseD_5;
  case 6:
    goto switchD_00f27784_caseD_6;
  case 7:
    goto switchD_00f27784_caseD_7;
  case 8:
    goto switchD_00f27784_caseD_8;
  case 9:
    if (uVar13 < 0x20) {
      uVar27 = uVar27 & 0xffffffff;
      do {
        uVar26 = 0;
        if ((int)uVar31 == 0) goto LAB_00f28cdc;
        pbVar29 = pbVar28 + 1;
        uVar31 = (ulong)((int)uVar31 - 1);
        uVar12 = uVar27 & 0x3f;
        uVar27 = uVar27 + 8;
        uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
        pbVar28 = pbVar29;
      } while (uVar27 < 0x20);
    }
    uVar27 = 0;
    uVar12 = uVar33 >> 8 & 0xff00 | uVar33 >> 0x18 & 0xff | (uVar33 >> 8 & 0xff) << 0x10 |
             (uVar33 & 0xff) << 0x18;
    uVar33 = 0;
    *(ulong *)(puVar34 + 6) = uVar12;
    param_1[0xc] = uVar12;
    *puVar34 = 10;
  case 10:
    if (puVar34[3] != 0) {
      lVar11 = FUN_00f26ad8(0,0,0);
      *(long *)(puVar34 + 6) = lVar11;
      param_1[0xc] = lVar11;
      *puVar34 = 0xb;
      pbVar28 = pbVar29;
switchD_00f27784_caseD_b:
      uVar26 = (uint)uVar31;
      if (param_2 - 5U < 2) goto LAB_00f28cdc;
switchD_00f27784_caseD_c:
      uVar13 = (uint)uVar27;
      if (puVar34[1] != 0) {
        uVar32 = 0x1a;
        uVar33 = uVar33 >> (uVar13 & 7);
        uVar27 = (ulong)(uVar13 - (uVar13 & 7));
        goto LAB_00f28b98;
      }
      if (uVar13 < 3) {
        uVar26 = 0;
        if ((int)uVar31 == 0) goto LAB_00f28cdc;
        uVar13 = uVar13 + 8;
        uVar31 = (ulong)((int)uVar31 - 1);
        uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
        pbVar28 = pbVar28 + 1;
      }
      uVar26 = (uint)uVar31;
      uVar32 = (uint)uVar33 >> 1 & 3;
      puVar34[1] = (uint)uVar33 & 1;
      if (uVar32 == 3) {
        param_1[6] = (long)"invalid block type";
        uVar32 = 0x1d;
LAB_00f27fe8:
        *puVar34 = uVar32;
      }
      else {
        if (uVar32 == 2) {
          uVar32 = 0x10;
          goto LAB_00f27fe8;
        }
        if (uVar32 != 1) {
          uVar32 = 0xd;
          goto LAB_00f27fe8;
        }
        *(undefined **)(puVar34 + 0x1a) = &DAT_01bf7bea;
        *(undefined **)(puVar34 + 0x18) = &UNK_01bf73ea;
        puVar34[0x1c] = 9;
        puVar34[0x1d] = 5;
        *puVar34 = 0x13;
        if (param_2 == 6) {
          uVar33 = uVar33 >> 3;
          uVar27 = (ulong)(uVar13 - 3);
          goto LAB_00f28cdc;
        }
      }
      uVar33 = uVar33 >> 3;
      uVar27 = (ulong)(uVar13 - 3);
      goto LAB_00f28b9c;
    }
    param_1[3] = (long)__dest;
    *(uint *)(param_1 + 4) = uVar23;
    *param_1 = (long)pbVar29;
    *(int *)(param_1 + 1) = (int)uVar31;
    *(ulong *)(puVar34 + 0x12) = uVar33;
    puVar34[0x14] = (uint)uVar27;
    iVar9 = 2;
    goto LAB_00f28c2c;
  case 0xb:
    goto switchD_00f27784_caseD_b;
  case 0xc:
    goto switchD_00f27784_caseD_c;
  case 0xd:
    uVar32 = uVar13 - (uVar13 & 7);
    uVar27 = (ulong)uVar32;
    uVar33 = uVar33 >> (uVar13 & 7);
    if (uVar32 < 0x20) {
      do {
        uVar26 = 0;
        if ((int)uVar31 == 0) goto LAB_00f28cdc;
        pbVar29 = pbVar28 + 1;
        uVar31 = (ulong)((int)uVar31 - 1);
        uVar12 = uVar27 & 0x3f;
        uVar27 = uVar27 + 8;
        uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
        pbVar28 = pbVar29;
      } while (uVar27 < 0x20);
    }
    uVar26 = (uint)uVar31;
    if ((uVar33 & 0xffff) == (uVar33 >> 0x10 ^ 0xffff)) {
      uVar27 = 0;
      uVar32 = (uint)uVar33;
      uVar33 = 0;
      puVar34[0x15] = uVar32 & 0xffff;
      *puVar34 = 0xe;
      if (param_2 == 6) {
        uVar33 = 0;
        uVar27 = 0;
        goto LAB_00f28cdc;
      }
      goto switchD_00f27784_caseD_e;
    }
    pcVar16 = "invalid stored block lengths";
    break;
  case 0xe:
switchD_00f27784_caseD_e:
    *puVar34 = 0xf;
  case 0xf:
    uVar26 = (uint)uVar31;
    uVar13 = (uint)uVar27;
    uVar32 = puVar34[0x15];
    if (uVar32 != 0) {
      uVar24 = uVar26;
      if (uVar32 <= uVar26) {
        uVar24 = uVar32;
      }
      uVar32 = uVar23;
      if (uVar24 <= uVar23) {
        uVar32 = uVar24;
      }
      iVar19 = local_70;
      if (uVar32 != 0) {
        memcpy(__dest,pbVar28,(ulong)uVar32);
        __dest = __dest + uVar32;
        uVar31 = (ulong)(uVar26 - uVar32);
        pbVar28 = pbVar28 + uVar32;
        uVar23 = uVar23 - uVar32;
        puVar34[0x15] = puVar34[0x15] - uVar32;
        goto LAB_00f28b9c;
      }
      goto switchD_00f27784_caseD_1c;
    }
    uVar32 = 0xb;
LAB_00f28b28:
    *puVar34 = uVar32;
    goto LAB_00f28b9c;
  case 0x10:
    pbVar29 = pbVar28;
    if (uVar13 < 0xe) {
      uVar27 = uVar27 & 0xffffffff;
      do {
        uVar26 = 0;
        if ((int)uVar31 == 0) goto LAB_00f28cdc;
        pbVar29 = pbVar28 + 1;
        uVar31 = (ulong)((int)uVar31 - 1);
        uVar12 = uVar27 & 0x3f;
        uVar27 = uVar27 + 8;
        uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
        pbVar28 = pbVar29;
      } while (uVar27 < 0xe);
    }
    uVar32 = (uint)uVar33;
    uVar13 = uVar32 >> 5 & 0x1f;
    uVar26 = (uVar32 & 0x1f) + 0x101;
    uVar33 = uVar33 >> 0xe;
    uVar32 = (uVar32 >> 10 & 0xf) + 4;
    uVar27 = (ulong)((int)uVar27 - 0xe);
    puVar34[0x1e] = uVar32;
    puVar34[0x1f] = uVar26;
    puVar34[0x20] = uVar13 + 1;
    pbVar28 = pbVar29;
    if ((uVar26 < 0x11f) && (uVar13 < 0x1e)) {
      uVar13 = 0;
      puVar34[0x21] = 0;
      *puVar34 = 0x11;
LAB_00f27be8:
      do {
        uVar24 = (uint)uVar27;
        pbVar29 = pbVar28;
        if (uVar24 < 3) {
          uVar26 = 0;
          if ((int)uVar31 == 0) goto LAB_00f28cdc;
          pbVar29 = pbVar28 + 1;
          uVar24 = uVar24 + 8;
          uVar31 = (ulong)((int)uVar31 - 1);
          uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
        }
        uVar26 = uVar13 + 1;
        uVar6 = *(ushort *)(&DAT_01bf73c4 + (ulong)uVar13 * 2);
        uVar8 = (ushort)uVar33;
        uVar33 = uVar33 >> 3;
        puVar34[0x21] = uVar26;
        *(ushort *)((long)puVar34 + (ulong)uVar6 * 2 + 0x90) = uVar8 & 7;
        uVar27 = (ulong)(uVar24 - 3);
        pbVar28 = pbVar29;
        uVar13 = uVar26;
      } while (uVar26 < uVar32);
      goto LAB_00f27c44;
    }
    pcVar16 = "too many length or distance symbols";
    break;
  case 0x11:
    uVar26 = puVar34[0x21];
    uVar32 = puVar34[0x1e];
    uVar13 = uVar26;
    if (uVar26 < uVar32) goto LAB_00f27be8;
LAB_00f27c44:
    if (uVar26 < 0x13) {
      uVar12 = (ulong)uVar26;
      do {
        lVar11 = uVar12 * 2;
        uVar12 = uVar12 + 1;
        *(undefined2 *)((long)puVar34 + (ulong)*(ushort *)(&DAT_01bf73c4 + lVar11) * 2 + 0x90) = 0;
      } while (uVar12 != 0x13);
      puVar34[0x21] = 0x13;
    }
    *(uint **)(puVar34 + 0x22) = puVar1;
    *(uint **)(puVar34 + 0x18) = puVar1;
    puVar34[0x1c] = 7;
    local_70 = FUN_00f2951c(0,puVar34 + 0x24,0x13,puVar2,puVar34 + 0x1c,puVar3);
    if (local_70 != 0) {
      param_1[6] = (long)"invalid code lengths set";
      *puVar34 = 0x1d;
      goto LAB_00f28b9c;
    }
    uVar32 = 0;
    local_70 = 0;
    puVar34[0x21] = 0;
    *puVar34 = 0x12;
    goto LAB_00f27d78;
  case 0x12:
    uVar32 = puVar34[0x21];
LAB_00f27d78:
    uVar24 = puVar34[0x1f];
    uVar26 = puVar34[0x20] + uVar24;
    if (uVar32 < uVar26) {
      lVar11 = *(long *)(puVar34 + 0x18);
      uVar13 = (1 << (ulong)(puVar34[0x1c] & 0x1f)) - 1;
      do {
        uVar18 = (ulong)(uVar13 & (uint)uVar33);
        bVar5 = *(byte *)(lVar11 + uVar18 * 4 + 1);
        uVar12 = (ulong)bVar5;
        if ((uint)uVar27 < (uint)bVar5) {
          uVar27 = uVar27 & 0xffffffff;
          pbVar29 = pbVar28;
          do {
            if ((int)uVar31 == 0) goto LAB_00f28c5c;
            pbVar28 = pbVar29 + 1;
            uVar31 = (ulong)((int)uVar31 - 1);
            uVar33 = ((ulong)*pbVar29 << (uVar27 & 0x3f)) + uVar33;
            uVar25 = uVar13 & (uint)uVar33;
            uVar12 = (ulong)*(byte *)(lVar11 + (ulong)uVar25 * 4 + 1);
            uVar27 = uVar27 + 8;
            pbVar29 = pbVar28;
          } while (uVar27 < uVar12);
          uVar18 = (ulong)uVar25;
        }
        uVar6 = *(ushort *)(lVar11 + uVar18 * 4 + 2);
        iVar19 = (int)uVar12;
        uVar25 = (uint)uVar27;
        if (0xf < uVar6) {
          pbVar29 = pbVar28;
          if (uVar6 == 0x10) {
            if (uVar25 < iVar19 + 2U) {
              uVar27 = uVar27 & 0xffffffff;
              do {
                if ((int)uVar31 == 0) goto LAB_00f28c5c;
                pbVar28 = pbVar29 + 1;
                uVar31 = (ulong)((int)uVar31 - 1);
                uVar18 = uVar27 & 0x3f;
                uVar27 = uVar27 + 8;
                uVar33 = ((ulong)*pbVar29 << uVar18) + uVar33;
                pbVar29 = pbVar28;
              } while (uVar27 < iVar19 + 2U);
            }
            uVar33 = uVar33 >> (uVar12 & 0x3f);
            uVar25 = (int)uVar27 - iVar19;
            uVar27 = (ulong)uVar25;
            if (uVar32 != 0) {
              uVar21 = *(undefined2 *)((long)puVar34 + (ulong)(uVar32 - 1) * 2 + 0x90);
              iVar9 = ((uint)uVar33 & 3) + 3;
              uVar33 = uVar33 >> 2;
              uVar25 = uVar25 - 2;
              goto LAB_00f27f34;
            }
          }
          else {
            if (uVar6 == 0x11) {
              if (uVar25 < iVar19 + 3U) {
                uVar27 = uVar27 & 0xffffffff;
                do {
                  if ((int)uVar31 == 0) goto LAB_00f28c5c;
                  pbVar28 = pbVar29 + 1;
                  uVar31 = (ulong)((int)uVar31 - 1);
                  uVar18 = uVar27 & 0x3f;
                  uVar27 = uVar27 + 8;
                  uVar33 = ((ulong)*pbVar29 << uVar18) + uVar33;
                  pbVar29 = pbVar28;
                } while (uVar27 < iVar19 + 3U);
              }
              iVar17 = (int)uVar27;
              uVar27 = uVar33 >> (uVar12 & 0x3f);
              uVar33 = uVar27 >> 3;
              iVar19 = -3 - iVar19;
              iVar9 = ((uint)uVar27 & 7) + 3;
            }
            else {
              if (uVar25 < iVar19 + 7U) {
                uVar27 = uVar27 & 0xffffffff;
                do {
                  if ((int)uVar31 == 0) goto LAB_00f28c5c;
                  pbVar28 = pbVar29 + 1;
                  uVar31 = (ulong)((int)uVar31 - 1);
                  uVar18 = uVar27 & 0x3f;
                  uVar27 = uVar27 + 8;
                  uVar33 = ((ulong)*pbVar29 << uVar18) + uVar33;
                  pbVar29 = pbVar28;
                } while (uVar27 < iVar19 + 7U);
              }
              iVar17 = (int)uVar27;
              uVar27 = uVar33 >> (uVar12 & 0x3f);
              uVar33 = uVar27 >> 7;
              iVar19 = -7 - iVar19;
              iVar9 = ((uint)uVar27 & 0x7f) + 0xb;
            }
            uVar21 = 0;
            uVar25 = iVar19 + iVar17;
LAB_00f27f34:
            uVar27 = (ulong)uVar25;
            uVar25 = iVar9 + uVar32;
            if (uVar25 <= uVar26) {
              do {
                iVar9 = iVar9 + -1;
                uVar12 = (ulong)uVar32;
                uVar32 = uVar32 + 1;
                *(undefined2 *)((long)puVar34 + uVar12 * 2 + 0x90) = uVar21;
              } while (iVar9 != 0);
              puVar34[0x21] = uVar25;
              uVar32 = uVar25;
              goto LAB_00f27f58;
            }
          }
          param_1[6] = (long)"invalid bit length repeat";
          *puVar34 = 0x1d;
          goto LAB_00f28b9c;
        }
        uVar33 = uVar33 >> (uVar12 & 0x3f);
        uVar27 = (ulong)(uVar25 - iVar19);
        puVar34[0x21] = uVar32 + 1;
        *(ushort *)((long)puVar34 + (ulong)uVar32 * 2 + 0x90) = uVar6;
        uVar32 = uVar32 + 1;
LAB_00f27f58:
      } while (uVar32 < uVar26);
    }
    uVar26 = (uint)uVar31;
    uVar13 = (uint)uVar27;
    if ((short)puVar34[0xa4] == 0) {
      pcVar16 = "invalid code -- missing end-of-block";
      break;
    }
    *(uint **)(puVar34 + 0x22) = puVar1;
    *(uint **)(puVar34 + 0x18) = puVar1;
    puVar34[0x1c] = 9;
    local_70 = FUN_00f2951c(1,puVar34 + 0x24,uVar24,puVar2,puVar34 + 0x1c,puVar3);
    if (local_70 != 0) {
      pcVar16 = "invalid literal/lengths set";
LAB_00f280b0:
      param_1[6] = (long)pcVar16;
      *puVar34 = 0x1d;
      goto LAB_00f28b9c;
    }
    *(undefined8 *)(puVar34 + 0x1a) = *(undefined8 *)(puVar34 + 0x22);
    puVar34[0x1d] = 6;
    local_70 = FUN_00f2951c(2,(long)puVar34 + (ulong)puVar34[0x1f] * 2 + 0x90,puVar34[0x20],puVar2,
                            puVar34 + 0x1d,puVar3);
    if (local_70 != 0) {
      pcVar16 = "invalid distances set";
      goto LAB_00f280b0;
    }
    local_70 = 0;
    *puVar34 = 0x13;
    if (param_2 != 6) {
switchD_00f27784_caseD_13:
      *puVar34 = 0x14;
      pbVar29 = pbVar28;
switchD_00f27784_caseD_14:
      if ((0x101 < uVar23) && (5 < (uint)uVar31)) {
        param_1[3] = (long)__dest;
        *(uint *)(param_1 + 4) = uVar23;
        *param_1 = (long)pbVar29;
        *(uint *)(param_1 + 1) = (uint)uVar31;
        *(ulong *)(puVar34 + 0x12) = uVar33;
        puVar34[0x14] = (uint)uVar27;
        FUN_00f29934(param_1,uVar30);
        __dest = (undefined1 *)param_1[3];
        uVar23 = *(uint *)(param_1 + 4);
        pbVar28 = (byte *)*param_1;
        uVar31 = (ulong)*(uint *)(param_1 + 1);
        uVar33 = *(ulong *)(puVar34 + 0x12);
        uVar27 = (ulong)puVar34[0x14];
        if (*puVar34 == 0xb) {
          puVar34[0x6f9] = 0xffffffff;
        }
        goto LAB_00f28b9c;
      }
      lVar11 = *(long *)(puVar34 + 0x18);
      puVar34[0x6f9] = 0;
      uVar32 = (1 << (ulong)(puVar34[0x1c] & 0x1f)) - 1;
      uVar18 = (ulong)(uVar32 & (uint)uVar33);
      bVar5 = *(byte *)(lVar11 + uVar18 * 4 + 1);
      uVar12 = (ulong)bVar5;
      if ((uint)uVar27 < (uint)bVar5) {
        uVar27 = uVar27 & 0xffffffff;
        pbVar28 = pbVar29;
        do {
          uVar26 = 0;
          if ((int)uVar31 == 0) goto LAB_00f28cdc;
          pbVar29 = pbVar28 + 1;
          uVar31 = (ulong)((int)uVar31 - 1);
          uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
          uVar26 = uVar32 & (uint)uVar33;
          uVar12 = (ulong)*(byte *)(lVar11 + (ulong)uVar26 * 4 + 1);
          uVar27 = uVar27 + 8;
          pbVar28 = pbVar29;
        } while (uVar27 < uVar12);
        uVar18 = (ulong)uVar26;
      }
      uVar13 = (uint)uVar12;
      uVar32 = (uint)uVar27;
      pbVar28 = (byte *)(lVar11 + uVar18 * 4);
      bVar5 = *pbVar28;
      uVar6 = *(ushort *)(pbVar28 + 2);
      if ((bVar5 == 0) || ((bVar5 & 0xf0) != 0)) {
        uVar13 = 0;
      }
      else {
        uVar24 = (1 << (ulong)(uVar13 + bVar5 & 0x1f)) - 1;
        uVar22 = (ulong)(((uVar24 & (uint)uVar33) >> (ulong)(uVar13 & 0x1f)) + (uint)uVar6);
        bVar5 = *(byte *)(lVar11 + uVar22 * 4 + 1);
        uVar18 = (ulong)bVar5;
        if (uVar32 < uVar13 + bVar5) {
          uVar27 = uVar27 & 0xffffffff;
          pbVar28 = pbVar29;
          do {
            uVar26 = 0;
            if ((int)uVar31 == 0) goto LAB_00f28cdc;
            pbVar29 = pbVar28 + 1;
            uVar31 = (ulong)((int)uVar31 - 1);
            uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
            uVar32 = ((uVar24 & (uint)uVar33) >> (ulong)(uVar13 & 0x1f)) + (uint)uVar6;
            uVar18 = (ulong)*(byte *)(lVar11 + (ulong)uVar32 * 4 + 1);
            uVar27 = uVar27 + 8;
            pbVar28 = pbVar29;
          } while (uVar27 < uVar12 + uVar18);
          uVar22 = (ulong)uVar32;
        }
        pbVar28 = (byte *)(lVar11 + uVar22 * 4);
        uVar6 = *(ushort *)(pbVar28 + 2);
        bVar5 = *pbVar28;
        uVar33 = uVar33 >> (uVar12 & 0x3f);
        uVar32 = (int)uVar27 - uVar13;
        puVar34[0x6f9] = uVar13;
        uVar12 = uVar18;
      }
      uVar33 = uVar33 >> (uVar12 & 0x3f);
      uVar27 = (ulong)(uVar32 - (int)uVar12);
      puVar34[0x6f9] = uVar13 + (int)uVar12;
      puVar34[0x15] = (uint)uVar6;
      pbVar28 = pbVar29;
      if (bVar5 == 0) {
        uVar32 = 0x19;
        goto LAB_00f28b28;
      }
      if ((bVar5 >> 5 & 1) == 0) {
        if ((bVar5 >> 6 & 1) != 0) {
          pcVar16 = "invalid literal/length code";
          break;
        }
        uVar32 = bVar5 & 0xf;
        puVar34[0x17] = uVar32;
        *puVar34 = 0x15;
        if ((bVar5 & 0xf) == 0) {
LAB_00f28890:
          uVar26 = puVar34[0x15];
        }
        else {
LAB_00f27cd4:
          uVar26 = (uint)uVar27;
          pbVar28 = pbVar29;
          while (uVar26 < uVar32) {
            uVar26 = 0;
            if ((int)uVar31 == 0) goto LAB_00f28cdc;
            uVar26 = (int)uVar27 + 8;
            uVar31 = (ulong)((int)uVar31 - 1);
            uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
            uVar27 = (ulong)uVar26;
            pbVar28 = pbVar28 + 1;
          }
          uVar13 = (uint)uVar33;
          uVar27 = (ulong)(uVar26 - uVar32);
          uVar33 = uVar33 >> ((ulong)uVar32 & 0x3f);
          uVar26 = puVar34[0x15] + ((1 << (ulong)(uVar32 & 0x1f)) - 1U & uVar13);
          puVar34[0x15] = uVar26;
          puVar34[0x6f9] = puVar34[0x6f9] + uVar32;
          pbVar29 = pbVar28;
        }
        puVar34[0x6fa] = uVar26;
        *puVar34 = 0x16;
switchD_00f27784_caseD_16:
        lVar11 = *(long *)(puVar34 + 0x1a);
        uVar32 = (1 << (ulong)(puVar34[0x1d] & 0x1f)) - 1;
        uVar18 = (ulong)(uVar32 & (uint)uVar33);
        bVar5 = *(byte *)(lVar11 + uVar18 * 4 + 1);
        uVar12 = (ulong)bVar5;
        if ((uint)uVar27 < (uint)bVar5) {
          uVar27 = uVar27 & 0xffffffff;
          pbVar28 = pbVar29;
          do {
            uVar26 = 0;
            if ((int)uVar31 == 0) goto LAB_00f28cdc;
            pbVar29 = pbVar28 + 1;
            uVar31 = (ulong)((int)uVar31 - 1);
            uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
            uVar26 = uVar32 & (uint)uVar33;
            uVar12 = (ulong)*(byte *)(lVar11 + (ulong)uVar26 * 4 + 1);
            uVar27 = uVar27 + 8;
            pbVar28 = pbVar29;
          } while (uVar27 < uVar12);
          uVar18 = (ulong)uVar26;
        }
        uVar32 = (uint)uVar27;
        pbVar28 = (byte *)(lVar11 + uVar18 * 4);
        bVar5 = *pbVar28;
        uVar6 = *(ushort *)(pbVar28 + 2);
        if ((bVar5 & 0xf0) == 0) {
          uVar13 = (uint)uVar12;
          uVar24 = (1 << (ulong)(uVar13 + bVar5 & 0x1f)) - 1;
          uVar22 = (ulong)(((uVar24 & (uint)uVar33) >> (ulong)(uVar13 & 0x1f)) + (uint)uVar6);
          bVar5 = *(byte *)(lVar11 + uVar22 * 4 + 1);
          uVar18 = (ulong)bVar5;
          if (uVar32 < uVar13 + bVar5) {
            uVar27 = uVar27 & 0xffffffff;
            pbVar28 = pbVar29;
            do {
              uVar26 = 0;
              if ((int)uVar31 == 0) goto LAB_00f28cdc;
              pbVar29 = pbVar28 + 1;
              uVar31 = (ulong)((int)uVar31 - 1);
              uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
              uVar32 = ((uVar24 & (uint)uVar33) >> (ulong)(uVar13 & 0x1f)) + (uint)uVar6;
              uVar18 = (ulong)*(byte *)(lVar11 + (ulong)uVar32 * 4 + 1);
              uVar27 = uVar27 + 8;
              pbVar28 = pbVar29;
            } while (uVar27 < uVar12 + uVar18);
            uVar22 = (ulong)uVar32;
          }
          pbVar28 = (byte *)(lVar11 + uVar22 * 4);
          uVar6 = *(ushort *)(pbVar28 + 2);
          bVar5 = *pbVar28;
          uVar33 = uVar33 >> (uVar12 & 0x3f);
          uVar32 = (int)uVar27 - uVar13;
          uVar13 = puVar34[0x6f9] + uVar13;
          puVar34[0x6f9] = uVar13;
        }
        else {
          uVar13 = puVar34[0x6f9];
          uVar18 = uVar12;
        }
        uVar33 = uVar33 >> (uVar18 & 0x3f);
        uVar27 = (ulong)(uVar32 - (int)uVar18);
        puVar34[0x6f9] = uVar13 + (int)uVar18;
        pbVar28 = pbVar29;
        if ((bVar5 >> 6 & 1) != 0) {
          pcVar16 = "invalid distance code";
          break;
        }
        uVar32 = bVar5 & 0xf;
        puVar34[0x16] = (uint)uVar6;
        puVar34[0x17] = uVar32;
        *puVar34 = 0x17;
        if ((bVar5 & 0xf) != 0) {
LAB_00f289d4:
          uVar26 = (uint)uVar27;
          pbVar28 = pbVar29;
          while (uVar26 < uVar32) {
            uVar26 = 0;
            if ((int)uVar31 == 0) goto LAB_00f28cdc;
            uVar26 = (int)uVar27 + 8;
            uVar31 = (ulong)((int)uVar31 - 1);
            uVar33 = ((ulong)*pbVar28 << (uVar27 & 0x3f)) + uVar33;
            uVar27 = (ulong)uVar26;
            pbVar28 = pbVar28 + 1;
          }
          uVar13 = (uint)uVar33;
          uVar27 = (ulong)(uVar26 - uVar32);
          uVar33 = uVar33 >> ((ulong)uVar32 & 0x3f);
          puVar34[0x16] = puVar34[0x16] + ((1 << (ulong)(uVar32 & 0x1f)) - 1U & uVar13);
          puVar34[0x6f9] = puVar34[0x6f9] + uVar32;
        }
LAB_00f28a34:
        *puVar34 = 0x18;
switchD_00f27784_caseD_18:
        uVar26 = (uint)uVar31;
        if (uVar23 != 0) {
          uVar32 = puVar34[0x16];
          if (uVar30 - uVar23 < uVar32) {
            uVar32 = uVar32 - (uVar30 - uVar23);
            if ((puVar34[0xe] < uVar32) && (puVar34[0x6f8] != 0)) {
              pcVar16 = "invalid distance too far back";
              break;
            }
            uVar13 = puVar34[0xf];
            uVar26 = uVar32 - uVar13;
            if (uVar32 < uVar13 || uVar26 == 0) {
              uVar13 = uVar13 - uVar32;
            }
            else {
              uVar13 = puVar34[0xd] - uVar26;
              uVar32 = uVar26;
            }
            uVar26 = puVar34[0x15];
            puVar15 = (undefined1 *)(*(long *)(puVar34 + 0x10) + (ulong)uVar13);
            uVar13 = uVar26;
            if (uVar32 <= uVar26) {
              uVar13 = uVar32;
            }
          }
          else {
            uVar26 = puVar34[0x15];
            puVar15 = __dest + -(ulong)uVar32;
            uVar13 = uVar26;
          }
          uVar24 = ~uVar13;
          uVar32 = uVar23;
          if (uVar13 <= uVar23) {
            uVar32 = uVar13;
          }
          uVar25 = uVar23;
          if (uVar13 <= uVar23) {
            uVar25 = uVar13;
          }
          puVar34[0x15] = uVar26 - uVar32;
          if (uVar24 < ~uVar23) {
            uVar24 = ~uVar23;
          }
          iVar19 = uVar24 + 1;
          puVar20 = __dest;
          do {
            iVar19 = iVar19 + 1;
            *puVar20 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar20 = puVar20 + 1;
          } while (iVar19 != 0);
          uVar23 = uVar23 - uVar32;
          __dest = __dest + (ulong)(uVar25 - 1) + 1;
          if (puVar34[0x15] != 0) goto LAB_00f28b9c;
          uVar32 = 0x14;
          goto LAB_00f28b28;
        }
        goto LAB_00f28cdc;
      }
      uVar32 = 0xb;
      puVar34[0x6f9] = 0xffffffff;
      goto LAB_00f28b98;
    }
    iVar19 = 0;
    goto switchD_00f27784_caseD_1c;
  case 0x13:
    goto switchD_00f27784_caseD_13;
  case 0x14:
    goto switchD_00f27784_caseD_14;
  case 0x15:
    uVar32 = puVar34[0x17];
    if (uVar32 != 0) goto LAB_00f27cd4;
    goto LAB_00f28890;
  case 0x16:
    goto switchD_00f27784_caseD_16;
  case 0x17:
    uVar32 = puVar34[0x17];
    if (uVar32 != 0) goto LAB_00f289d4;
    goto LAB_00f28a34;
  case 0x18:
    goto switchD_00f27784_caseD_18;
  case 0x19:
    if (uVar23 == 0) goto LAB_00f28cdc;
    uVar32 = 0x14;
    uVar23 = uVar23 - 1;
    *__dest = (char)puVar34[0x15];
    __dest = __dest + 1;
    goto LAB_00f28b98;
  case 0x1a:
    if (puVar34[2] != 0) {
      if (uVar13 < 0x20) {
        uVar27 = uVar27 & 0xffffffff;
        do {
          uVar26 = 0;
          if ((int)uVar31 == 0) goto LAB_00f28cdc;
          pbVar29 = pbVar28 + 1;
          uVar31 = (ulong)((int)uVar31 - 1);
          uVar12 = uVar27 & 0x3f;
          uVar27 = uVar27 + 8;
          uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
          pbVar28 = pbVar29;
        } while (uVar27 < 0x20);
      }
      uVar12 = (ulong)(uVar30 - uVar23);
      param_1[5] = param_1[5] + uVar12;
      *(ulong *)(puVar34 + 8) = *(long *)(puVar34 + 8) + uVar12;
      if (uVar30 - uVar23 != 0) {
        if (puVar34[4] == 0) {
          lVar11 = FUN_00f26ad8(*(undefined8 *)(puVar34 + 6),(long)__dest - uVar12);
        }
        else {
          lVar11 = FUN_00f26efc();
        }
        *(long *)(puVar34 + 6) = lVar11;
        param_1[0xc] = lVar11;
      }
      uVar12 = uVar33;
      if (puVar34[4] == 0) {
        uVar12 = uVar33 >> 8 & 0xff00 | uVar33 >> 0x18 & 0xff | (uVar33 >> 8 & 0xff) << 0x10 |
                 (uVar33 & 0xff) << 0x18;
      }
      uVar30 = uVar23;
      if (uVar12 != *(ulong *)(puVar34 + 6)) {
        param_1[6] = (long)"incorrect data check";
        *puVar34 = 0x1d;
        goto LAB_00f28b9c;
      }
      uVar33 = 0;
      uVar27 = 0;
    }
    *puVar34 = 0x1b;
    pbVar29 = pbVar28;
  case 0x1b:
    uVar26 = (uint)uVar31;
    uVar13 = (uint)uVar27;
    if ((puVar34[2] != 0) && (puVar34[4] != 0)) {
      if (uVar13 < 0x20) {
        uVar27 = uVar27 & 0xffffffff;
        pbVar28 = pbVar29;
        do {
          uVar26 = 0;
          if ((int)uVar31 == 0) goto LAB_00f28cdc;
          pbVar29 = pbVar28 + 1;
          uVar31 = (ulong)((int)uVar31 - 1);
          uVar12 = uVar27 & 0x3f;
          uVar27 = uVar27 + 8;
          uVar33 = ((ulong)*pbVar28 << uVar12) + uVar33;
          pbVar28 = pbVar29;
        } while (uVar27 < 0x20);
      }
      uVar26 = (uint)uVar31;
      if (uVar33 != puVar34[8]) {
        pcVar16 = "incorrect length check";
        pbVar28 = pbVar29;
        break;
      }
      uVar33 = 0;
      uVar13 = 0;
    }
    *puVar34 = 0x1c;
    pbVar28 = pbVar29;
    iVar19 = 1;
  case 0x1c:
    goto switchD_00f27784_caseD_1c;
  case 0x1d:
    iVar19 = -3;
    goto switchD_00f27784_caseD_1c;
  case 0x1e:
    goto switchD_00f27784_caseD_1e;
  default:
    goto switchD_00f27784_default;
  }
  uVar32 = 0x1d;
  param_1[6] = (long)pcVar16;
LAB_00f28b98:
  *puVar34 = uVar32;
LAB_00f28b9c:
  uVar32 = *puVar34;
  goto LAB_00f2776c;
LAB_00f28c5c:
  uVar26 = 0;
  uVar13 = (uint)uVar27;
  pbVar28 = pbVar29;
  iVar19 = local_70;
switchD_00f27784_caseD_1c:
  param_1[3] = (long)__dest;
  *(uint *)(param_1 + 4) = uVar23;
  *param_1 = (long)pbVar28;
  *(uint *)(param_1 + 1) = uVar26;
  *(ulong *)(puVar34 + 0x12) = uVar33;
  puVar34[0x14] = uVar13;
  if ((puVar34[0xd] != 0) ||
     (((uVar30 != uVar23 && (*puVar34 < 0x1d)) && ((param_2 != 4 || (*puVar34 < 0x1a)))))) {
    iVar9 = FUN_00f28e28(param_1,__dest,uVar30 - uVar23);
    if (iVar9 != 0) {
      *puVar34 = 0x1e;
switchD_00f27784_caseD_1e:
      iVar9 = -4;
      goto LAB_00f28c2c;
    }
    uVar26 = *(uint *)(param_1 + 1);
    uVar23 = *(uint *)(param_1 + 4);
  }
  uVar30 = uVar30 - uVar23;
  uVar27 = (ulong)uVar30;
  uVar4 = uVar4 - uVar26;
  param_1[2] = param_1[2] + (ulong)uVar4;
  param_1[5] = param_1[5] + uVar27;
  *(ulong *)(puVar34 + 8) = *(long *)(puVar34 + 8) + uVar27;
  if ((uVar30 != 0) && (puVar34[2] != 0)) {
    if (puVar34[4] == 0) {
      lVar11 = FUN_00f26ad8(*(undefined8 *)(puVar34 + 6),param_1[3] - uVar27,uVar27);
    }
    else {
      lVar11 = FUN_00f26efc();
    }
    *(long *)(puVar34 + 6) = lVar11;
    param_1[0xc] = lVar11;
  }
  uVar32 = *puVar34;
  iVar9 = 0;
  if (puVar34[1] != 0) {
    iVar9 = 0x40;
  }
  iVar17 = 0x100;
  if (uVar32 != 0xe && uVar32 != 0x13) {
    iVar17 = 0;
  }
  *(uint *)(param_1 + 0xb) = iVar9 + puVar34[0x14] + (uint)(uVar32 == 0xb) * 0x80 + iVar17;
  iVar9 = -5;
  if ((uVar30 != 0 || uVar4 != 0) && param_2 != 4 || iVar19 != 0) {
    iVar9 = iVar19;
  }
LAB_00f28c2c:
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar9);
  }
  return;
}

