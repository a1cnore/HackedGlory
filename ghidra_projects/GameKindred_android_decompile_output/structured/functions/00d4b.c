// functions/00d4b — 52 functions
#include "libGameKindred.h"




void FUN_00d4b030(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_1 + 0x28) == *param_3) && (*(char *)(param_1 + 0x2c) != '\0')) {
    local_490 = param_2;
    if (*(char *)(param_1 + 0x2d) == '\0') {
      FUN_00d9d958(auStack_488);
      uStack_40 = 0;
      local_48 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      FUN_00e46094(param_1 + 0x10,&local_490);
    }
    else {
      FUN_00d9d958(auStack_488);
      uStack_40 = 0;
      local_48 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      FUN_00e46040(param_1 + 0x10,&local_490);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4b124(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00d4b168(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x28) == *param_3) {
    local_490 = param_2;
    FUN_00d9d958(auStack_488);
    uStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    FUN_00e45fec(param_1 + 0x10,&local_490);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4b204(undefined8 *param_1)

{
  FUN_00e5d640();
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_0281d268;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00d4b23c(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00d4b280(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}




void FUN_00d4b28c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(param_2);
  lVar4 = FUN_00d9eb64();
  if (lVar4 != 0) {
    uVar2 = FUN_00d5412c(lVar4,*(undefined4 *)(param_1 + 0x28));
    iVar3 = FUN_00d535a4(lVar4,uVar2);
    if (iVar3 != 0) {
      local_4a0 = param_2;
      FUN_00d9d958(auStack_498);
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      FUN_00e46040(param_1 + 0x10,&local_4a0);
      *(undefined1 *)(param_1 + 0x2d) = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4b35c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(param_2);
  lVar4 = FUN_00d9eb64();
  if (lVar4 != 0) {
    uVar2 = FUN_00d5412c(lVar4,*(undefined4 *)(param_1 + 0x28));
    iVar3 = FUN_00d535a4(lVar4,uVar2);
    if (iVar3 != 0) {
      local_4a0 = param_2;
      FUN_00d9d958(auStack_498);
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      FUN_00e46094(param_1 + 0x10,&local_4a0);
      *(undefined1 *)(param_1 + 0x2d) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4b428(long param_1,undefined8 param_2,byte *param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_490;
  undefined1 auStack_488 [1040];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (uint)*param_3;
  uVar2 = 0x811c9dc5;
  if (*param_3 != 0) {
    do {
      param_3 = param_3 + 1;
      uVar2 = (uVar2 ^ uVar3) * 0x1000193;
      uVar3 = (uint)*param_3;
    } while (*param_3 != 0);
  }
  if (uVar2 == *(uint *)(param_1 + 0x28)) {
    if ((param_4 == 0) && (param_5 != 0)) {
      local_490 = param_2;
      FUN_00d9d958(auStack_488);
      uStack_40 = 0;
      local_48 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      FUN_00e46040(param_1 + 0x10,&local_490);
      *(undefined1 *)(param_1 + 0x2d) = 1;
    }
    else if ((param_4 == 0) || (param_5 != 0)) {
      if (((param_5 != param_4) && (*(char *)(param_1 + 0x2c) != '\0')) &&
         (*(char *)(param_1 + 0x2d) != '\0')) {
        local_490 = param_2;
        FUN_00d9d958(auStack_488);
        uStack_40 = 0;
        local_48 = 0;
        uStack_50 = 0;
        local_58 = 0;
        uStack_60 = 0;
        local_68 = 0;
        uStack_70 = 0;
        local_78 = 0;
        FUN_00e460e8(param_1 + 0x10,&local_490);
      }
    }
    else {
      local_490 = param_2;
      FUN_00d9d958(auStack_488);
      uStack_40 = 0;
      local_48 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = 0;
      uStack_70 = 0;
      local_78 = 0;
      FUN_00e46094(param_1 + 0x10,&local_490);
      *(undefined1 *)(param_1 + 0x2d) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d4b5ac(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00d4b5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_4a0;
  undefined1 auStack_498 [1040];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4a0 = param_2;
  FUN_00d9d958(auStack_498);
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  if ((*(int *)(param_1 + 0x28) != -0x7ee3623b) && (*(int *)(param_1 + 0x28) != 0)) {
    pbVar2 = (byte *)FUN_00d50460(param_3);
    if (pbVar2 == (byte *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar4 = (uint)*pbVar2;
      uVar3 = 0x811c9dc5;
      if (*pbVar2 != 0) {
        do {
          pbVar2 = pbVar2 + 1;
          uVar3 = (uVar3 ^ uVar4) * 0x1000193;
          uVar4 = (uint)*pbVar2;
        } while (*pbVar2 != 0);
      }
    }
    if (uVar3 != *(uint *)(param_1 + 0x28)) goto LAB_00d4b6d8;
  }
  FUN_00e45fec(param_1 + 0x10,&local_4a0);
LAB_00d4b6d8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d4b71c(undefined8 *param_1)

{
  FUN_00e5d640();
  *param_1 = &PTR_FUN_0281d4d8;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = 0xffffffff00000000;
  param_1[7] = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x80;
  return;
}




void FUN_00d4b770(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  return;
}




void FUN_00d4b780(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
  return;
}




void FUN_00d4b790(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 4;
  return;
}




void FUN_00d4b7a0(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 8;
  return;
}




void FUN_00d4b7b0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d4b7b8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d4b7c0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d4b7c8(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x10;
  return;
}




void FUN_00d4b7d8(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x20;
  return;
}




void FUN_00d4b7e8(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x40;
  return;
}




void FUN_00d4b7f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00d4b800(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d4b808(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_00d4b810(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00d4b818(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_00d4b820(long param_1)

{
  *(char **)(param_1 + 0x58) = "__VAR1_INT__";
  return;
}




void FUN_00d4b830(long param_1,long param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  float fVar17;
  long local_4c8;
  undefined1 auStack_4c0 [1040];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x60);
  if ((bVar2 & 1) != 0) {
    lVar12 = FUN_00d66d28(param_2);
    if (*(int *)(lVar12 + 0x260) != *(int *)(param_3 + 0x260)) goto LAB_00d4b8d8;
    bVar2 = *(byte *)(param_1 + 0x60);
  }
  if ((((((bVar2 >> 1 & 1) == 0) ||
        (lVar12 = FUN_00d66d28(param_2), *(int *)(lVar12 + 0x260) != *(int *)(param_3 + 0x260))) &&
       (uVar1 = *(uint *)(param_3 + 0x2f4), (*(uint *)(param_1 + 0x28) & (uVar1 ^ 0xffffffff)) == 0)
       ) && ((*(uint *)(param_1 + 0x2c) == 0xffffffff || ((*(uint *)(param_1 + 0x2c) & uVar1) != 0))
            )) && ((*(uint *)(param_1 + 0x30) & uVar1) == 0)) {
    lVar12 = FUN_00d44c78(param_2);
    if (lVar12 != 0) {
      bVar2 = *(byte *)(param_1 + 0x60);
      if ((bVar2 >> 2 & 1) != 0) {
        cVar5 = FUN_00d55870(lVar12);
        cVar6 = FUN_00d55870(param_3);
        if (cVar5 == cVar6) goto LAB_00d4b8d8;
        bVar2 = *(byte *)(param_1 + 0x60);
      }
      if ((bVar2 >> 3 & 1) != 0) {
        cVar5 = FUN_00d55870(lVar12);
        cVar6 = FUN_00d55870(param_3);
        if (cVar5 != cVar6) goto LAB_00d4b8d8;
      }
    }
    if ((*(long *)(param_1 + 0x38) == 0) || (uVar13 = FUN_00d44be0(param_3), (uVar13 & 1) != 0)) {
      bVar2 = *(byte *)(param_1 + 0x60);
      if ((bVar2 >> 4 & 1) != 0) {
        iVar7 = FUN_00d5bc5c(param_3);
        lVar14 = FUN_00d66d28(param_2);
        if (iVar7 != *(int *)(lVar14 + 0x260)) goto LAB_00d4b8d8;
        bVar2 = *(byte *)(param_1 + 0x60);
      }
      if ((bVar2 >> 5 & 1) != 0) {
        lVar14 = *(long *)(param_3 + 0x18);
        while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_0314fa24))) {
          lVar14 = *(long *)(lVar14 + 0x20);
        }
        lVar15 = FUN_00d66d28(param_2);
        iVar7 = *(int *)(lVar15 + 0x260);
        iVar8 = FUN_00d5bc5c(param_3);
        iVar9 = FUN_00d6cca4(lVar14);
        if (iVar8 != iVar7) {
          if (iVar9 < 1) goto LAB_00d4b8d8;
          iVar8 = 0;
          bVar4 = false;
          do {
            iVar10 = FUN_00d6cd1c(lVar14,iVar8);
            iVar8 = iVar8 + 1;
            bVar4 = (bool)(bVar4 | iVar10 == iVar7);
            if (iVar9 <= iVar8) break;
          } while (iVar10 != iVar7);
          if (!bVar4) goto LAB_00d4b8d8;
        }
      }
      if ((*(byte *)(param_1 + 0x60) >> 6 & 1) != 0) {
        cVar5 = FUN_00d5bc64(param_3);
        FUN_00d66d28(param_2);
        cVar6 = FUN_00d55870();
        if (cVar5 != cVar6) goto LAB_00d4b8d8;
      }
      lVar14 = *(long *)(param_1 + 0x58);
      if (lVar14 != 0) {
        iVar7 = *(int *)(param_3 + 0x260);
        uVar11 = FUN_00e6a474(lVar14);
        uVar11 = FUN_0091ed5c(lVar14,uVar11,0x12345678);
        piVar16 = (int *)(**(code **)(*(long *)(param_2 + 0x168) + 0x18))(param_2 + 0x168,uVar11);
        if (iVar7 != *piVar16) goto LAB_00d4b8d8;
      }
      if ((lVar12 != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
        local_4c8 = CONCAT44(local_4c8._4_4_,0x7f7fffff);
        (**(code **)(param_1 + 0x40))(param_2,param_3,&local_4c8);
        fVar17 = (float)FUN_00d9dc10(lVar12,param_3);
        if ((float)local_4c8 < fVar17) goto LAB_00d4b8d8;
      }
      if ((*(long **)(param_1 + 0x50) == (long *)0x0) ||
         (iVar7 = *(int *)(param_3 + 0x260),
         iVar8 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(), iVar7 == iVar8)) {
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_00d4d9e8(&local_4c8);
          (**(code **)(param_1 + 0x48))(param_2,&local_4c8);
          uVar13 = FUN_00d4d280(&local_4c8,param_3);
          if ((uVar13 & 1) == 0) goto LAB_00d4b8d8;
        }
        local_4c8 = param_2;
        FUN_00d9d958(auStack_4c0);
        local_90 = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        lStack_88 = param_3;
        FUN_00e45fec(param_1 + 0x10,&local_4c8);
      }
    }
  }
LAB_00d4b8d8:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4bb90(undefined8 *param_1)

{
  FUN_00e5d640();
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined4 *)((long)param_1 + 0x5a) = 0xffff0000;
  *param_1 = &PTR_FUN_0281d5a8;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x5e) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x80;
  return;
}




void FUN_00d4bbf8(long param_1,uint param_2)

{
  *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) | (ushort)(1 << (ulong)(param_2 & 0x1f))
  ;
  return;
}




void FUN_00d4bc10(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfc | 1;
  return;
}




void FUN_00d4bc24(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfc | 2;
  return;
}




void FUN_00d4bc38(long param_1)

{
  *(ushort *)(param_1 + 0x5a) = *(ushort *)(param_1 + 0x5a) | 4;
  return;
}




void FUN_00d4bc48(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x5a) = param_2;
  return;
}




void FUN_00d4bc50(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x5c) = param_2;
  return;
}




void FUN_00d4bc58(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x5e) = param_2;
  return;
}




void FUN_00d4bc60(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  return;
}




void FUN_00d4bca4(long param_1,uint param_2)

{
  *(char *)(param_1 + 0x58) = (char)(1 << (ulong)(param_2 & 0x1f));
  return;
}




void FUN_00d4bcb4(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0xfb;
  return;
}




void FUN_00d4bcc0(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xf7 | 4;
  return;
}




void FUN_00d4bcd4(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xf3 | 8;
  return;
}




void FUN_00d4bce8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}




void FUN_00d4bcf0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00d4bcf8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}




void FUN_00d4bd00(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x40;
  return;
}




void FUN_00d4bd10(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x10;
  return;
}




void FUN_00d4bd20(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x28) = param_3;
  *(undefined4 *)(param_2 + 0x44) = param_1;
  return;
}




void FUN_00d4bd2c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d4bd34(long param_1)

{
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x20;
  return;
}




void FUN_00d4bd44(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00d4bd4c(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (((uint)*(ushort *)(param_1 + 0x48) & 1 << (ulong)(param_4 & 0x1f)) != 0) {
    bVar9 = *(byte *)(param_1 + 0x60);
    if ((bVar9 & 3) == 1) {
      uVar6 = FUN_00d67b78(param_2);
      uVar7 = FUN_00daa578(param_3,uVar6);
      uVar6 = 0;
      if ((uVar7 & 1) == 0) goto LAB_00d4c0c0;
      bVar9 = *(byte *)(param_1 + 0x60);
    }
    if ((bVar9 & 3) == 2) {
      uVar6 = FUN_00d67b78(param_2);
      uVar7 = FUN_00daa58c(param_3,uVar6);
      uVar6 = 0;
      if ((uVar7 & 1) == 0) goto LAB_00d4c0c0;
    }
    if (((uint)*(byte *)(param_1 + 0x58) & 1 << (ulong)(*(uint *)(param_3 + 1) & 0x1f)) != 0) {
      uVar3 = *(ushort *)((long)param_3 + 0xc);
      uVar6 = 0;
      if (((*(ushort *)(param_1 + 0x5a) & (uVar3 ^ 0xffff)) != 0) ||
         ((((*(ushort *)(param_1 + 0x5c) != 0xffff &&
            (uVar6 = 0, (*(ushort *)(param_1 + 0x5c) & uVar3) == 0)) ||
           (uVar6 = 0, (*(ushort *)(param_1 + 0x5e) & uVar3) != 0)) ||
          ((bVar9 = *(byte *)(param_1 + 0x60), *(uint *)(param_3 + 1) == 3 &&
           (uVar6 = 0, (bVar9 >> 5 & 1) != 0)))))) goto LAB_00d4c0c0;
      if ((bVar9 & 0xc) == 8) {
        uVar6 = 0;
        if (*(char *)((long)param_3 + 0xe) != '\0') goto LAB_00d4c0c0;
      }
      else if (((bVar9 & 0xc) == 4) && (*(char *)((long)param_3 + 0xe) == '\0')) goto LAB_00d4c0bc;
      if (*(uint *)(param_1 + 0x40) != 0) {
        pbVar11 = (byte *)*param_3;
        if (pbVar11 == (byte *)0x0) goto LAB_00d4c0bc;
        uVar12 = (uint)*pbVar11;
        uVar10 = 0x811c9dc5;
        if (*pbVar11 != 0) {
          do {
            pbVar11 = pbVar11 + 1;
            uVar10 = (uVar10 ^ uVar12) * 0x1000193;
            uVar12 = (uint)*pbVar11;
          } while (*pbVar11 != 0);
        }
        uVar6 = 0;
        if (*(uint *)(param_1 + 0x40) != uVar10) goto LAB_00d4c0c0;
      }
      if (((*(int *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 0x50) != 0)) ||
         (*(int *)(param_1 + 0x54) != 0)) {
        uVar6 = FUN_00d67b78(param_2);
        uVar7 = FUN_00daa578(param_3,uVar6);
        lVar1 = 0x20;
        if ((uVar7 & 1) == 0) {
          lVar1 = 0x28;
        }
        if (*(long *)((long)param_3 + lVar1) == 0) goto LAB_00d4c0bc;
        uVar10 = *(uint *)(*(long *)((long)param_3 + lVar1) + 0x2f4);
        uVar6 = 0;
        if ((((*(uint *)(param_1 + 0x4c) & (uVar10 ^ 0xffffffff)) != 0) ||
            ((*(uint *)(param_1 + 0x50) != 0xffffffff &&
             (uVar6 = 0, (*(uint *)(param_1 + 0x50) & uVar10) == 0)))) ||
           (uVar6 = 0, (*(uint *)(param_1 + 0x54) & uVar10) != 0)) goto LAB_00d4c0c0;
        bVar9 = *(byte *)(param_1 + 0x60);
      }
      if ((((bVar9 >> 6 & 1) != 0) && (param_3[5] != 0)) &&
         (uVar6 = 0, (*(byte *)(param_3[5] + 0x2f5) >> 4 & 1) != 0)) goto LAB_00d4c0c0;
      if ((bVar9 >> 4 & 1) != 0) {
        uVar6 = FUN_00d67b78(param_2);
        uVar7 = FUN_00daa578(param_3,uVar6);
        lVar1 = 0x20;
        if ((uVar7 & 1) == 0) {
          lVar1 = 0x28;
        }
        if (*(long *)((long)param_3 + lVar1) == 0) goto LAB_00d4c0bc;
        iVar2 = *(int *)(*(long *)((long)param_3 + lVar1) + 0x260);
        iVar5 = FUN_00d67b84(param_2);
        uVar6 = 0;
        if (iVar2 != iVar5) goto LAB_00d4c0c0;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar7 = FUN_00daa524(param_3);
        uVar6 = 0;
        if ((uVar7 & 1) == 0) goto LAB_00d4c0c0;
        local_50 = 0;
        (**(code **)(param_1 + 0x28))(param_2,&local_50);
        local_50 = CONCAT44(-(float)((ulong)local_50 >> 0x20),-(float)local_50);
        puVar8 = (undefined8 *)FUN_00daa52c(param_3,0);
        fVar13 = (float)NEON_fminnm((float)local_50 * (float)*puVar8 +
                                    (float)((ulong)local_50 >> 0x20) *
                                    (float)((ulong)*puVar8 >> 0x20),0x3f800000);
        if (fVar13 <= -1.0) {
          fVar13 = -1.0;
        }
        fVar13 = acosf(fVar13);
        fVar14 = sinf(*(float *)(param_1 + 0x44) * 0.017453292 * 0.5);
        fVar14 = asinf(fVar14);
        uVar6 = 0;
        if (fVar14 < fVar13) goto LAB_00d4c0c0;
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        uVar7 = (**(code **)(param_1 + 0x30))(param_2,param_3);
        uVar6 = 0;
        if ((uVar7 & 1) == 0) goto LAB_00d4c0c0;
      }
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_2,&local_50);
        uVar6 = 0;
        if (*(float *)((long)param_3 + 0x54) <= (float)local_50) goto LAB_00d4c0c0;
      }
      uVar6 = 1;
      goto LAB_00d4c0c0;
    }
  }
LAB_00d4c0bc:
  uVar6 = 0;
LAB_00d4c0c0:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

