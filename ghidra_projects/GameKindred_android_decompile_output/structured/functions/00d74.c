// functions/00d74 — 26 functions
#include "libGameKindred.h"




void FUN_00d74024(long param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (1 < *(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    lVar6 = *(long *)(param_1 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    local_3c = 0xffffffff;
    uVar4 = FUN_00d6bbac(lVar6,DAT_0315cf48,&local_3c);
    if ((uVar4 & 1) == 0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar3 = FUN_00d74134();
        uVar5 = 0;
        *param_2 = uVar3;
      }
      goto LAB_00d74104;
    }
    if (param_2 != (undefined4 *)0x0) {
      uVar3 = FUN_00d6bf28(lVar6,local_3c);
      goto LAB_00d740fc;
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    uVar3 = FUN_00d74134();
LAB_00d740fc:
    *param_2 = uVar3;
  }
  uVar5 = 1;
LAB_00d74104:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00d74134(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d70a78();
  FUN_00d6e9d4(uVar1,*(undefined8 *)(lVar2 + 0x128));
  return;
}




void FUN_00d74160(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6eb50();
  FUN_00d6eb88(uVar1,param_1);
  return;
}




void FUN_00d74184(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 1);
  uVar3 = FUN_00d6eb50();
  uVar4 = FUN_00d6eb50();
  uVar1 = FUN_00d6e9d4(uVar4,PTR_s__KindredItems__02bed720);
  puVar5 = (undefined8 *)FUN_00d6eb88(uVar3,uVar1);
  plVar11 = (long *)*puVar5;
  if (*plVar11 == 0) {
    uVar12 = *(uint *)(param_1 + 0x38);
  }
  else {
    do {
      uVar3 = FUN_00d6eb50();
      uVar3 = FUN_00d6eb5c(uVar3,*(undefined8 *)*plVar11);
      uVar4 = FUN_00d6eb50();
      uVar1 = FUN_00d6e9d4(uVar4,*(undefined8 *)*plVar11);
      lVar8 = param_1 + (ulong)*(uint *)(param_1 + 0x38) * 0x90;
      uVar12 = *(uint *)(param_1 + 0x38) + 1;
      *(undefined4 *)(lVar8 + 0x40) = uVar1;
      *(undefined8 *)(lVar8 + 0x48) = uVar3;
      *(uint *)(param_1 + 0x38) = uVar12;
      plVar11 = plVar11 + 1;
    } while (*plVar11 != 0);
  }
  if (uVar12 != 0) {
    uVar6 = (ulong)uVar12;
    uVar10 = 0;
    do {
      plVar11 = *(long **)(*(long *)(param_1 + uVar10 * 0x90 + 0x48) + 0x58);
      if (*plVar11 != 0) {
        uVar12 = 0;
        do {
          uVar3 = FUN_00d6eb50();
          iVar2 = FUN_00d6e9d4(uVar3,*(undefined8 *)*plVar11);
          uVar6 = (ulong)*(uint *)(param_1 + 0x38);
          if (*(uint *)(param_1 + 0x38) != 0) {
            uVar7 = 0;
            do {
              if (*(int *)(param_1 + (ulong)uVar7 * 0x90 + 0x40) == iVar2) {
                uVar9 = 0;
                lVar8 = param_1 + 0x90 + (long)(int)uVar7 * 0x90;
                *(uint *)(param_1 + uVar10 * 0x90 + (ulong)uVar12 * 4 + 0x50) = uVar7;
                do {
                  if (*(int *)(lVar8 + uVar9 * 4) == -1) {
                    *(int *)(lVar8 + uVar9 * 4) = (int)uVar10;
                    uVar6 = (ulong)*(uint *)(param_1 + 0x38);
                    break;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < 0x10);
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < (uint)uVar6);
          }
          plVar11 = plVar11 + 1;
          uVar12 = uVar12 + 1;
        } while (*plVar11 != 0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  uVar1 = FUN_00d74134();
  FUN_00d74350(param_1,uVar1);
  return;
}




void FUN_00d74308(void)

{
  return;
}




void FUN_00d7430c(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(param_1 + (long)param_2 * 0x90 + 0x90 + lVar1 * 4) == -1) {
      *(undefined4 *)(param_1 + (long)param_2 * 0x90 + lVar1 * 4 + 0x90) = param_3;
      return;
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < 0x10);
  return;
}




int * FUN_00d74350(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  int *piVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  pbVar10 = (byte *)(param_1 + 0x61b8);
  uVar5 = 0;
  piVar9 = (int *)(param_1 + 0x4f00);
  lVar11 = param_1 + 0x4f04;
  lVar12 = param_1 + 0x5138;
  lVar13 = param_1 + 0x513c;
  while (*piVar9 != 0xffff) {
    uVar5 = uVar5 + 1;
    pbVar10 = pbVar10 + 0x1344;
    lVar11 = lVar11 + 0x1344;
    lVar12 = lVar12 + 0x1344;
    lVar13 = lVar13 + 0x1344;
    piVar9 = piVar9 + 0x4d1;
    if (1 < uVar5) {
      return (int *)0x0;
    }
  }
  *piVar9 = param_2;
  uVar3 = FUN_00d6eb50();
  plVar4 = (long *)FUN_00d6eb88(uVar3,param_2);
  plVar4 = (long *)*plVar4;
  lVar6 = *plVar4;
  do {
    if (lVar6 == 0) {
      return piVar9;
    }
    uVar3 = FUN_00d6eb50();
    iVar2 = FUN_00d6e9d4(uVar3,*(undefined8 *)*plVar4);
    if (*(uint *)(param_1 + 0x38) != 0) {
      uVar5 = 0;
      pbVar7 = pbVar10;
      do {
        if (iVar2 == *(int *)(param_1 + (ulong)uVar5 * 0x90 + 0x40)) {
          lVar6 = *plVar4;
          *pbVar7 = *(byte *)(lVar6 + 0xc) ^ 1;
          lVar8 = (long)*(int *)(lVar6 + 8) * 0x2c0;
          iVar1 = *(int *)(lVar12 + lVar8);
          *(int *)(lVar12 + lVar8) = iVar1 + 1;
          *(uint *)(lVar13 + lVar8 + (long)iVar1 * 4) = uVar5;
          pbVar10[(long)iVar1 + (long)*(int *)(lVar6 + 8) * 0x2c0 + -0xe4c] = *(byte *)(lVar6 + 0xc)
          ;
          break;
        }
        uVar5 = uVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x38));
    }
    uVar3 = FUN_00d6eb50();
    lVar6 = FUN_00d6eb88(uVar3,iVar2);
    if ((((*(int *)(lVar6 + 0x30) == 3) && (*(char *)(lVar6 + 0x199) == '\0')) &&
        (*(char *)(lVar6 + 0x19a) == '\0')) && (*(char *)(lVar6 + 0x34) == '\0')) {
      uVar5 = piVar9[0x8d];
      piVar9[0x8d] = uVar5 + 1;
      *(int *)(lVar11 + (ulong)uVar5 * 4) = iVar2;
    }
    plVar4 = plVar4 + 1;
    lVar6 = *plVar4;
  } while( true );
}




byte FUN_00d74500(long param_1,int param_2,uint param_3,uint *param_4,undefined8 param_5,
                 undefined4 *param_6,uint param_7)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  lVar14 = *(long *)(lVar7 + 0x18);
  while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar14 = *(long *)(lVar14 + 0x20);
  }
  *param_6 = 0;
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar6 = 0;
    lVar11 = 0x48;
    do {
      piVar15 = (int *)(param_1 + (ulong)uVar6 * 0x90 + 0x40);
      if (*piVar15 == param_2) {
        if ((*(long *)(param_1 + lVar11) == 0) ||
           (local_6c = 0xffff, *(char *)(*(long *)(param_1 + lVar11) + 0x19e) == '\0')) {
          local_6c = 0xffff;
          uVar16 = FUN_00d74024(lVar7,&local_6c);
          iVar9 = local_6c;
          uVar16 = uVar16 & 0xffffffff;
          uVar8 = FUN_00d6eb50();
          lVar7 = FUN_00d6eb88(uVar8,iVar9);
          bVar3 = false;
          if (lVar7 == 0) {
            iVar9 = 100;
          }
          else {
            iVar9 = (int)(float)*(int *)(lVar7 + 0xc);
          }
        }
        else {
          uVar16 = 1;
          bVar3 = true;
          iVar9 = 1;
        }
        uVar6 = FUN_00d74788(param_1,lVar14,piVar15,param_5,param_6,iVar9);
        *param_4 = uVar6;
        if (((uVar16 & 1) == 0) && (bVar5 = 0, (param_7 & 1) != 0)) goto LAB_00d745bc;
        if (bVar3) {
          bVar5 = uVar6 <= param_3;
          goto LAB_00d745bc;
        }
        if (*(uint *)(param_1 + 0x38) != 0) {
          uVar12 = 0;
          piVar13 = (int *)(param_1 + 0x40);
          goto LAB_00d746cc;
        }
        uVar16 = 0xffffffff;
        goto LAB_00d74704;
      }
      uVar6 = uVar6 + 1;
      lVar11 = lVar11 + 0x90;
    } while (uVar6 < *(uint *)(param_1 + 0x38));
  }
  goto LAB_00d745b8;
  while (piVar13 = piVar13 + 0x24, uVar12 < *(uint *)(param_1 + 0x38)) {
LAB_00d746cc:
    uVar16 = uVar12;
    if ((*piVar13 == param_2) || (uVar12 = uVar12 + 1, uVar16 = 0xffffffff, 0x8b < uVar12)) break;
  }
LAB_00d74704:
  piVar13 = (int *)(param_1 + 0x4f00);
  lVar7 = 2;
  piVar10 = (int *)0x0;
  do {
    piVar1 = piVar13;
    if (*piVar13 != local_6c) {
      piVar1 = piVar10;
    }
    lVar7 = lVar7 + -1;
    piVar13 = piVar13 + 0x4d1;
    piVar10 = piVar1;
  } while (lVar7 != 0);
  if (*(char *)((long)piVar1 + (uVar16 & 0xffffffff) + 0x12b8) != '\0') {
    FUN_00ceace8();
    bVar4 = FUN_00ceaf8c();
    bVar5 = *param_4 <= param_3 & (bVar4 ^ 1);
    if ((((bVar4 ^ 1) & 1) == 0) && (*param_4 <= param_3)) {
      bVar5 = FUN_00d74974(param_1,lVar14,piVar15);
    }
    goto LAB_00d745bc;
  }
LAB_00d745b8:
  bVar5 = 0;
LAB_00d745bc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return bVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00d74788(ulong param_1,undefined8 param_2,long param_3,long param_4,uint *param_5,
                int param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(param_3 + 0x10);
  iVar5 = (*(int *)(*(long *)(param_3 + 8) + 0x3c) * param_6) / 100;
  if (iVar1 != -1) {
    uVar7 = 1;
    uVar4 = param_1;
    do {
      local_6c = 0xffffffff;
      puVar6 = (undefined4 *)(param_1 + (long)iVar1 * 0x90 + 0x40);
      uVar4 = FUN_00d753f4(uVar4,param_2,*puVar6,param_4,&local_6c);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_00d74788(param_1,param_2,puVar6,param_4,param_5,param_6);
        iVar5 = (int)uVar4 + iVar5;
      }
      else {
        uVar2 = *param_5;
        *param_5 = uVar2 + 1;
        *(undefined4 *)(param_4 + (ulong)uVar2 * 4) = local_6c;
      }
      iVar1 = *(int *)(param_3 + uVar7 * 4 + 0x10);
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (iVar1 != -1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d748b4(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00d6eb50();
  lVar3 = FUN_00d6eb88(uVar2,param_2);
  if (lVar3 == 0) {
    uVar1 = 100;
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
  }
  return uVar1;
}




undefined1 FUN_00d748ec(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = 2;
  piVar4 = (int *)(param_1 + 0x4f00);
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar4;
    if (*piVar4 != param_3) {
      piVar1 = piVar2;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 0x4d1;
    piVar2 = piVar1;
  } while (lVar3 != 0);
  return *(undefined1 *)((long)piVar1 + (ulong)param_2 + 0x12b8);
}




uint FUN_00d74928(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 0x38) == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x40);
  do {
    if (*piVar2 == param_2) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((uVar1 < 0x8c) && (piVar2 = piVar2 + 0x24, uVar1 < *(uint *)(param_1 + 0x38)));
  return 0xffffffff;
}




void FUN_00d74974(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = 0;
  uStack_88 = 0xffffffff;
  local_4c = 0;
  local_54 = 0;
  uStack_5c = 0;
  local_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  local_8c = 0;
  do {
    uVar3 = 1;
    if ((0xf < (uint)lVar5) || (iVar1 = *(int *)(param_3 + 0x10 + lVar5 * 4), iVar1 == -1))
    goto LAB_00d74a14;
    uVar4 = FUN_00d753f4(1,param_2,*(undefined4 *)(param_1 + (long)iVar1 * 0x90 + 0x40),&uStack_88,
                         &local_8c);
    lVar5 = lVar5 + 1;
  } while ((uVar4 & 1) != 0);
  uVar3 = 0;
LAB_00d74a14:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




bool FUN_00d74a40(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = 2;
  piVar4 = (int *)(param_1 + 0x4f00);
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar4;
    if (*piVar4 != param_2) {
      piVar1 = piVar2;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 0x4d1;
    piVar2 = piVar1;
  } while (lVar3 != 0);
  return piVar1 != (int *)0x0;
}




int * FUN_00d74a78(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = 2;
  piVar3 = (int *)(param_1 + 0x4f00);
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar3;
    if (*piVar3 != param_2) {
      piVar1 = piVar2;
    }
    lVar4 = lVar4 + -1;
    piVar3 = piVar3 + 0x4d1;
    piVar2 = piVar1;
  } while (lVar4 != 0);
  return piVar1;
}




int * thunk_FUN_00d74350(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  int *piVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  pbVar10 = (byte *)(param_1 + 0x61b8);
  uVar5 = 0;
  piVar9 = (int *)(param_1 + 0x4f00);
  lVar11 = param_1 + 0x4f04;
  lVar12 = param_1 + 0x5138;
  lVar13 = param_1 + 0x513c;
  while (*piVar9 != 0xffff) {
    uVar5 = uVar5 + 1;
    pbVar10 = pbVar10 + 0x1344;
    lVar11 = lVar11 + 0x1344;
    lVar12 = lVar12 + 0x1344;
    lVar13 = lVar13 + 0x1344;
    piVar9 = piVar9 + 0x4d1;
    if (1 < uVar5) {
      return (int *)0x0;
    }
  }
  *piVar9 = param_2;
  uVar3 = FUN_00d6eb50();
  plVar4 = (long *)FUN_00d6eb88(uVar3,param_2);
  plVar4 = (long *)*plVar4;
  lVar6 = *plVar4;
  do {
    if (lVar6 == 0) {
      return piVar9;
    }
    uVar3 = FUN_00d6eb50();
    iVar2 = FUN_00d6e9d4(uVar3,*(undefined8 *)*plVar4);
    if (*(uint *)(param_1 + 0x38) != 0) {
      uVar5 = 0;
      pbVar7 = pbVar10;
      do {
        if (iVar2 == *(int *)(param_1 + (ulong)uVar5 * 0x90 + 0x40)) {
          lVar6 = *plVar4;
          *pbVar7 = *(byte *)(lVar6 + 0xc) ^ 1;
          lVar8 = (long)*(int *)(lVar6 + 8) * 0x2c0;
          iVar1 = *(int *)(lVar12 + lVar8);
          *(int *)(lVar12 + lVar8) = iVar1 + 1;
          *(uint *)(lVar13 + lVar8 + (long)iVar1 * 4) = uVar5;
          pbVar10[(long)iVar1 + (long)*(int *)(lVar6 + 8) * 0x2c0 + -0xe4c] = *(byte *)(lVar6 + 0xc)
          ;
          break;
        }
        uVar5 = uVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x38));
    }
    uVar3 = FUN_00d6eb50();
    lVar6 = FUN_00d6eb88(uVar3,iVar2);
    if ((((*(int *)(lVar6 + 0x30) == 3) && (*(char *)(lVar6 + 0x199) == '\0')) &&
        (*(char *)(lVar6 + 0x19a) == '\0')) && (*(char *)(lVar6 + 0x34) == '\0')) {
      uVar5 = piVar9[0x8d];
      piVar9[0x8d] = uVar5 + 1;
      *(int *)(lVar11 + (ulong)uVar5 * 4) = iVar2;
    }
    plVar4 = plVar4 + 1;
    lVar6 = *plVar4;
  } while( true );
}




undefined8 FUN_00d74ab0(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 0x90 + 0x48);
}




undefined4 FUN_00d74ac0(long param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (ulong)param_2 * 0x90 + 0x40);
}




uint FUN_00d74ad0(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(param_1 + 0x40);
    do {
      if (*piVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x24;
    } while (uVar1 < *(uint *)(param_1 + 0x38));
  }
  return 0xffffffff;
}




undefined8 FUN_00d74b08(long param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if (-1 < param_3) {
    lVar3 = 2;
    piVar5 = (int *)(param_1 + 0x4f00);
    piVar2 = (int *)0x0;
    do {
      piVar1 = piVar5;
      if (*piVar5 != param_4) {
        piVar1 = piVar2;
      }
      lVar3 = lVar3 + -1;
      piVar5 = piVar5 + 0x4d1;
      piVar2 = piVar1;
    } while (lVar3 != 0);
    if (piVar1[(long)param_3 * 0xb0 + 0x8e] != 0) {
      uVar4 = 0;
      do {
        if (piVar1[(long)param_3 * 0xb0 + (uVar4 & 0xffffffff) + 0x8f] == param_2) {
          *param_5 = *(byte *)((long)piVar1 + uVar4 + (long)param_3 * 0x2c0 + 0x46c) ^ 1;
          return 1;
        }
        uVar4 = uVar4 + 1;
      } while ((uint)uVar4 < (uint)piVar1[(long)param_3 * 0xb0 + 0x8e]);
    }
  }
  return 0;
}




ulong FUN_00d74b9c(long param_1,int param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = 2;
  piVar5 = (int *)(param_1 + 0x4f00);
  piVar3 = (int *)0x0;
  do {
    piVar1 = piVar5;
    if (*piVar5 != param_3) {
      piVar1 = piVar3;
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 0x4d1;
    piVar3 = piVar1;
  } while (lVar4 != 0);
  uVar2 = 0;
  piVar5 = piVar1 + 0x8f;
  do {
    if (piVar1[uVar2 * 0xb0 + 0x8e] != 0) {
      lVar4 = 0;
      do {
        if (piVar5[lVar4] == param_2) {
          return uVar2;
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < (uint)piVar1[uVar2 * 0xb0 + 0x8e]);
    }
    uVar2 = uVar2 + 1;
    piVar5 = piVar5 + 0xb0;
  } while (uVar2 < 6);
  return 0xffffffff;
}




undefined8 FUN_00d74c14(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  
  if (param_2 != param_3) {
    if (*(uint *)(param_1 + 0x38) == 0) {
      uVar5 = 0xffffffff;
      uVar3 = 0xffffffff;
    }
    else {
      uVar6 = 0;
      piVar7 = (int *)(param_1 + 0x40);
      uVar4 = 0xffffffff;
      uVar2 = 0xffffffff;
      do {
        uVar5 = (int)uVar6;
        if (*piVar7 != param_2) {
          uVar5 = uVar4;
        }
        uVar3 = (int)uVar6;
        if (*piVar7 != param_3) {
          uVar3 = uVar2;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 0x24;
        uVar4 = uVar5;
        uVar2 = uVar3;
      } while (uVar6 < *(uint *)(param_1 + 0x38));
    }
    uVar1 = FUN_00d74c78(param_1,uVar5,uVar3,0);
    return uVar1;
  }
  return 0;
}




ulong FUN_00d74c78(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (-1 < param_4) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + (long)param_3 * 0x90 + 0x50 + lVar3 * 4);
      if (iVar1 == -1) break;
      if (iVar1 == param_2) {
        return (ulong)(param_4 + 1);
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < 0x10);
    if (0 < param_4) goto LAB_00d74d18;
  }
  lVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + (long)param_2 * 0x90 + 0x50 + lVar3 * 4);
    if (iVar1 == -1) break;
    if (iVar1 == param_3) {
      return (ulong)(param_4 - 1);
    }
    lVar3 = lVar3 + 1;
  } while ((uint)lVar3 < 0x10);
LAB_00d74d18:
  lVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + (long)param_2 * 0x90 + 0x90 + lVar3 * 4);
    if (iVar1 == -1) break;
    uVar2 = FUN_00d74c78(param_1,iVar1,param_3,param_4 + 1);
    if (param_4 + 1 < (int)uVar2) {
      return uVar2;
    }
    lVar3 = lVar3 + 1;
  } while ((uint)lVar3 < 0x10);
  lVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + (long)param_3 * 0x90 + 0x90 + lVar3 * 4);
    if (iVar1 == -1) {
      return 0;
    }
    uVar2 = FUN_00d74c78(param_1,param_2,iVar1,param_4 + -1);
    if ((int)uVar2 < param_4 + -1) break;
    lVar3 = lVar3 + 1;
    if (0xf < (uint)lVar3) {
      return 0;
    }
  }
  return uVar2;
}




uint FUN_00d74dcc(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    piVar3 = (int *)(param_1 + 0x40);
    do {
      if (*piVar3 == param_2) goto LAB_00d74e20;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x24;
    } while (uVar2 < *(uint *)(param_1 + 0x38));
  }
  uVar2 = 0;
LAB_00d74e20:
  local_2c = param_4;
  uVar2 = FUN_00d74e50(param_1,uVar2,param_3,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d74e50(long param_1,ulong param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = 0;
  do {
    uVar2 = *(uint *)(param_1 + (param_2 & 0xffffffff) * 0x90 + (ulong)uVar9 * 4 + 0x90);
    if (uVar2 == 0xffffffff) break;
    uVar4 = FUN_00d74b08(param_1,uVar2,param_3,*param_4,auStack_6c);
    if ((uVar4 & 1) != 0) {
      lVar8 = 2;
      piVar6 = (int *)0x0;
      piVar7 = (int *)(param_1 + 0x4f00);
      do {
        piVar1 = piVar7;
        if (*piVar7 != *param_4) {
          piVar1 = piVar6;
        }
        lVar8 = lVar8 + -1;
        piVar7 = piVar7 + 0x4d1;
        piVar6 = piVar1;
      } while (lVar8 != 0);
      if (*(char *)((long)piVar1 + (ulong)uVar2 + 0x12b8) == '\0') goto LAB_00d74f08;
LAB_00d74f34:
      uVar5 = 1;
      goto LAB_00d74f38;
    }
LAB_00d74f08:
    uVar4 = FUN_00d74e50(param_1,(ulong)uVar2,param_3,param_4);
    if ((uVar4 & 1) != 0) goto LAB_00d74f34;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  uVar5 = 0;
LAB_00d74f38:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00d74f6c(long param_1,int param_2,int param_3,undefined4 *param_4,int *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(uint *)(param_1 + 0x38) == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar3 = 0;
    piVar4 = (int *)(param_1 + 0x40);
    while (uVar6 = uVar3, *piVar4 != param_2) {
      uVar3 = uVar3 + 1;
      uVar6 = 0xffffffffffffffff;
      if ((0x8b < uVar3) || (piVar4 = piVar4 + 0x24, *(uint *)(param_1 + 0x38) <= uVar3)) break;
    }
  }
  lVar5 = -0x40;
  do {
    lVar1 = param_1 + uVar6 * 0x90 + lVar5;
    piVar4 = (int *)(lVar1 + 0xd0);
    if (param_3 != 0) {
      piVar4 = (int *)(lVar1 + 0x90);
    }
    puVar2 = param_4;
    if (-1 < *piVar4) {
      puVar2 = param_4 + 1;
      *param_4 = *(undefined4 *)(param_1 + (long)*piVar4 * 0x90 + 0x40);
      *param_5 = *param_5 + 1;
    }
    lVar5 = lVar5 + 4;
    param_4 = puVar2;
  } while (lVar5 != 0);
  return;
}

