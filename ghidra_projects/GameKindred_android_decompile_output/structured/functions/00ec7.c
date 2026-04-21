// functions/00ec7 — 18 functions
#include "libGameKindred.h"




void FUN_00ec7034(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00ec7084(param_1 + 0x48,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec7084(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00ec80a4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ec710c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = (ulong)*(uint *)(param_1 + 0x48) << 3;
  plVar1 = *(long **)(param_1 + 0x50);
  do {
    plVar2 = plVar1;
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + -8;
    plVar1 = plVar2 + 1;
  } while (*plVar2 != param_2);
  FUN_00ec8124((uint *)(param_1 + 0x48),plVar2);
  return;
}




void FUN_00ec7138(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    plVar4 = plVar3;
    do {
      puVar1 = (undefined8 *)*plVar4;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,param_2);
        uVar2 = *(uint *)(param_1 + 8);
        plVar3 = *(long **)(param_1 + 0x10);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + uVar2);
  }
  return;
}




void FUN_00ec71a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    plVar4 = plVar3;
    do {
      plVar1 = (long *)*plVar4;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,param_2);
        uVar2 = *(uint *)(param_1 + 8);
        plVar3 = *(long **)(param_1 + 0x10);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + uVar2);
  }
  return;
}




void FUN_00ec7208(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x10);
    plVar4 = plVar3;
    do {
      plVar1 = (long *)*plVar4;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
        uVar2 = *(uint *)(param_1 + 8);
        plVar3 = *(long **)(param_1 + 0x10);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + uVar2);
  }
  return;
}




void FUN_00ec7278(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = *(uint *)(param_1 + 1);
  local_60 = param_4;
  if (uVar6 != 0) {
    plVar7 = (long *)param_1[2];
    plVar8 = plVar7;
    do {
      plVar2 = (long *)*plVar8;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,param_4,param_5);
        uVar6 = *(uint *)(param_1 + 1);
        plVar7 = (long *)param_1[2];
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar7 + uVar6);
  }
  uVar3 = (**(code **)(*param_1 + 0x90))(param_1,param_4);
  if ((param_4 != 0) &&
     (puVar4 = (uint *)FUN_00ec6978(param_1 + 3,&local_60), puVar4 != (uint *)0x0)) {
    uVar6 = *puVar4;
    if (uVar6 != 0) {
      plVar7 = *(long **)(puVar4 + 2);
      plVar8 = plVar7;
      do {
        puVar5 = (undefined8 *)*plVar8;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,uVar3,param_3,local_60,param_5);
          uVar6 = *puVar4;
          plVar7 = *(long **)(puVar4 + 2);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar7 + uVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec73b0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = *(uint *)(param_1 + 1);
  local_60 = param_4;
  if (uVar5 != 0) {
    plVar6 = (long *)param_1[2];
    plVar7 = plVar6;
    do {
      plVar2 = (long *)*plVar7;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,param_4,param_5,param_6);
        uVar5 = *(uint *)(param_1 + 1);
        plVar6 = (long *)param_1[2];
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6 + uVar5);
  }
  uVar3 = (**(code **)(*param_1 + 0x90))(param_1,param_4);
  if ((param_4 != 0) &&
     (puVar4 = (uint *)FUN_00ec6978(param_1 + 3,&local_60), puVar4 != (uint *)0x0)) {
    uVar5 = *puVar4;
    if (uVar5 != 0) {
      plVar6 = *(long **)(puVar4 + 2);
      plVar7 = plVar6;
      do {
        plVar2 = (long *)*plVar7;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,uVar3,param_3,local_60,param_5,param_6);
          uVar5 = *puVar4;
          plVar6 = *(long **)(puVar4 + 2);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar6 + uVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec74f4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = *(uint *)(param_1 + 1);
  local_70 = param_4;
  if (uVar5 != 0) {
    plVar6 = (long *)param_1[2];
    plVar7 = plVar6;
    do {
      plVar2 = (long *)*plVar7;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x28))
                  (plVar2,param_2,param_3,param_4,param_5,param_6,param_7 & 1,param_8);
        uVar5 = *(uint *)(param_1 + 1);
        plVar6 = (long *)param_1[2];
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6 + uVar5);
  }
  uVar3 = (**(code **)(*param_1 + 0x90))(param_1,param_4);
  if ((param_4 != 0) &&
     (puVar4 = (uint *)FUN_00ec6978(param_1 + 3,&local_70), puVar4 != (uint *)0x0)) {
    uVar5 = *puVar4;
    if (uVar5 != 0) {
      plVar6 = *(long **)(puVar4 + 2);
      plVar7 = plVar6;
      do {
        plVar2 = (long *)*plVar7;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))
                    (plVar2,uVar3,param_3,local_70,param_5,param_6,param_7 & 1,param_8);
          uVar5 = *puVar4;
          plVar6 = *(long **)(puVar4 + 2);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar6 + uVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec7658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 != 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    plVar5 = plVar4;
    do {
      plVar1 = (long *)*plVar5;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x30))
                  (plVar1,param_2,param_3,param_4,param_5,param_6,param_7 & 1,param_8);
        uVar3 = *(uint *)(param_1 + 8);
        plVar4 = *(long **)(param_1 + 0x10);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4 + uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 != 0) {
    plVar4 = *(long **)(param_1 + 0x50);
    plVar5 = plVar4;
    do {
      puVar2 = (undefined8 *)*plVar5;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,param_2,param_3,param_4,param_5,param_6,param_7 & 1,param_8);
        uVar3 = *(uint *)(param_1 + 0x48);
        plVar4 = *(long **)(param_1 + 0x50);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4 + uVar3);
  }
  return;
}




void FUN_00ec7760(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte local_c8 [8];
  ulong local_c0;
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  undefined1 auStack_98 [8];
  byte local_90;
  void *local_80;
  undefined1 auStack_70 [8];
  byte local_68;
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_008fcdb8(local_c8,&DAT_0320ffa8);
  if (param_3 != 0) {
    FUN_008fa54c(local_b0,param_3);
    FUN_008fce60(local_c8,local_b0);
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    FUN_00ec8190(local_c8,0,&DAT_01e4a398,1);
    uVar1 = (ulong)(local_c8[0] >> 1);
    if ((local_c8[0] & 1) != 0) {
      uVar1 = local_c0;
    }
    FUN_00ec8190(local_c8,uVar1 & 0xffffffff,&DAT_01e4a398,1);
  }
  pvVar2 = (void *)((ulong)local_c8 | 1);
  if ((local_c8[0] & 1) != 0) {
    pvVar2 = local_b8;
  }
  FUN_00ec3db8(auStack_70,pvVar2);
  FUN_008fa54c(local_b0,PTR_s_Nuo_Services_ChatClient_Messa_02bf2560);
  FUN_00ec3d7c(auStack_98,auStack_70);
  local_d8 = 0;
  uStack_d0 = 0;
  plVar7 = (long *)*param_4;
  local_e0 = &local_d8;
  while (plVar7 != param_4 + 1) {
    FUN_009e2ea4(&local_e0,&local_d8,plVar7 + 4,plVar7 + 4);
    plVar5 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      plVar5 = plVar7 + 2;
      bVar4 = *(long **)*plVar5 != plVar7;
      plVar7 = (long *)*plVar5;
      if (bVar4) {
        do {
          lVar6 = *plVar5;
          plVar5 = (long *)(lVar6 + 0x10);
          plVar7 = (long *)*plVar5;
        } while (*plVar7 != lVar6);
      }
    }
    else {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  FUN_0091b028(&local_e0,local_b0,local_b0);
  FUN_00ec4810(param_1,&local_e0);
  FUN_00910328(&local_e0,local_d8);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ec7964(undefined8 param_1,long param_2,byte *param_3,undefined8 *param_4)

{
  uint uVar1;
  void *__n;
  void *pvVar2;
  char *__s1;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  char *__s2;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  long *plVar15;
  void *local_f0;
  void *local_e8;
  char *local_e0;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  void *local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((param_2 == 0) || (iVar8 = FUN_00e6a474(param_2), iVar8 == 0)) {
    FUN_008fce60(param_3,&DAT_0320ffa8);
  }
  else {
    FUN_008fa54c(local_d8,param_2);
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = (void *)0x0;
    local_88 = (void *)0x0;
    local_98 = 0;
    local_70 = 0x400;
    local_68 = 0;
    local_60 = 0;
    local_a8 = operator_new(0x28);
    local_a8[1] = 0x10000;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    *local_a8 = 0;
    local_f0 = (void *)((ulong)local_d8 | 1);
    if ((local_d8[0] & 1) != 0) {
      local_f0 = local_c8;
    }
    local_e8 = local_f0;
    local_a0 = local_a8;
    FUN_008fd344(&local_c0,&local_f0);
    puVar5 = local_a0;
    bVar6 = local_68 == 0;
    bVar7 = local_b0 == 3;
    if (local_a0 != (undefined8 *)0x0) {
      FUN_008fd2c4(local_a0);
      operator_delete(puVar5);
    }
    free(local_88);
    if (local_90 != (void *)0x0) {
      operator_delete(local_90);
    }
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
    if (bVar6 && bVar7) {
      FUN_008fa54c(&local_c0,param_2);
      FUN_00ec45c0(&local_c0,param_4);
      if ((local_c0 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_ac,local_b0));
      }
      FUN_008fa54c(&local_c0,PTR_s_Nuo_Services_ChatClient_Messa_02bf2560);
      if ((long *)*param_4 != param_4 + 1) {
        plVar15 = (long *)*param_4;
        do {
          FUN_008fcdb8(&local_f0,plVar15 + 4);
          pcVar14 = local_e0;
          pvVar11 = (void *)((ulong)local_f0 >> 1 & 0x7f);
          __n = pvVar11;
          if (((ulong)local_f0 & 1) != 0) {
            __n = local_e8;
          }
          pvVar2 = (void *)(local_c0 >> 1 & 0x7f);
          if ((local_c0 & 1) != 0) {
            pvVar2 = local_b8;
          }
          bVar6 = false;
          if (__n == pvVar2) {
            __s1 = (char *)((ulong)&local_f0 | 1);
            if (((ulong)local_f0 & 1) != 0) {
              __s1 = local_e0;
            }
            __s2 = (char *)((ulong)&local_c0 | 1);
            if ((local_c0 & 1) != 0) {
              __s2 = (char *)CONCAT44(uStack_ac,local_b0);
            }
            if (((ulong)local_f0 & 1) == 0) {
              if (__n != (void *)0x0) {
                lVar12 = -(long)pvVar11;
                pcVar14 = (char *)((ulong)&local_f0 | 1);
                do {
                  if (*pcVar14 != *__s2) {
                    bVar6 = false;
                    if (((ulong)local_f0 & 1) == 0) goto LAB_00ec7b88;
                    goto LAB_00ec7b80;
                  }
                  pcVar14 = pcVar14 + 1;
                  lVar12 = lVar12 + 1;
                  __s2 = __s2 + 1;
                } while (lVar12 != 0);
                bVar6 = true;
                goto LAB_00ec7b7c;
              }
            }
            else if (__n == (void *)0x0) {
              operator_delete(local_e0);
            }
            else {
              iVar8 = memcmp(__s1,__s2,(size_t)__n);
              operator_delete(pcVar14);
              if (iVar8 != 0) goto LAB_00ec7ba8;
            }
LAB_00ec7c5c:
            uVar9 = FUN_00ec3f08(plVar15 + 7);
            FUN_008fa54c(&local_f0,uVar9);
            FUN_008fce60(param_3,&local_f0);
            if (((ulong)local_f0 & 1) != 0) {
              operator_delete(local_e0);
            }
            uVar1 = (uint)(*param_3 >> 1);
            if ((*param_3 & 1) != 0) {
              uVar1 = *(uint *)(param_3 + 8);
            }
            if ((1 < uVar1) && (iVar8 = FUN_0090d610(param_3,0,1,&DAT_01e4a398,1), iVar8 == 0)) {
              FUN_00924fa8(param_3,0,1);
            }
            uVar1 = (uint)(*param_3 >> 1);
            if ((*param_3 & 1) != 0) {
              uVar1 = (uint)*(undefined8 *)(param_3 + 8);
            }
            if ((1 < uVar1) &&
               (iVar8 = FUN_0090d610(param_3,uVar1 - 1,1,&DAT_01e4a398,1), iVar8 == 0)) {
              uVar3 = (ulong)(*param_3 >> 1);
              if ((*param_3 & 1) != 0) {
                uVar3 = *(ulong *)(param_3 + 8);
              }
              FUN_00924fa8(param_3,(int)uVar3 + -1,uVar3 & 0xffffffff);
            }
            break;
          }
LAB_00ec7b7c:
          if (((ulong)local_f0 & 1) != 0) {
LAB_00ec7b80:
            operator_delete(local_e0);
          }
LAB_00ec7b88:
          if (bVar6) goto LAB_00ec7c5c;
LAB_00ec7ba8:
          plVar10 = (long *)plVar15[1];
          if ((long *)plVar15[1] == (long *)0x0) {
            plVar10 = plVar15 + 2;
            plVar13 = (long *)*plVar10;
            if ((long *)*plVar13 != plVar15) {
              do {
                lVar12 = *plVar10;
                plVar10 = (long *)(lVar12 + 0x10);
                plVar13 = (long *)*plVar10;
              } while (*plVar13 != lVar12);
            }
          }
          else {
            do {
              plVar13 = plVar10;
              plVar10 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
          plVar15 = plVar13;
        } while (plVar13 != param_4 + 1);
      }
    }
    else {
      FUN_008fa54c(&local_c0,param_2);
      FUN_008fce60(param_3,&local_c0);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_ac,local_b0));
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ec7d40(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00ec7dc0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00ec7e2c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




ulong FUN_00ec7eac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00ec7f44(param_1 + 0x18,auStack_48);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0x10);
  }
  FUN_00ec7fcc(lVar2 + uVar3 * 0x10,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec7f44(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00ec8020(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00ec7fcc(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00ec7e2c(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      lVar4 = lVar4 + -8;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return;
}

