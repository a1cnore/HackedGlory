// functions/009e3 — 28 functions
#include "libGameKindred.h"




void FUN_009e3240(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00948cd8();
  FUN_0092157c(param_1 + 3);
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_027c3b10;
  param_1[3] = &PTR_FUN_027c3eb0;
  param_1[4] = 0;
  uVar2 = FUN_00a012b4();
  puStack_40 = (undefined8 *)0x0;
  pcStack_30 = thunk_FUN_009e3354;
  local_48 = param_1;
  local_38 = param_1;
  FUN_009e4694(uVar2,&local_48);
  uVar2 = FUN_00a016d4();
  local_48 = (undefined8 *)0x0;
  pcStack_30 = thunk_FUN_009e45b4;
  puStack_40 = param_1;
  local_38 = param_1;
  FUN_009e47b4(uVar2,&local_48);
  FUN_00e6ea58(&DAT_0320ff70,param_1,0x1346de83,FUN_009e3324,0);
  FUN_009e3354(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e3324(long param_1)

{
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}




void FUN_009e3354(long param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cVar1 = *(char *)(param_1 + 0x68);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(long *)(param_1 + 0x60) != 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  FUN_009e3f20(param_1 + 0x30,0);
  if ((*(char *)(param_1 + 0x6a) == '\0') && (*(char *)(param_1 + 0x6b) == '\0')) {
    uVar4 = FUN_00a022b0();
    if ((uVar4 & 1) != 0) {
      FUN_00a01a90(&local_48,7);
      if ((int)local_48 == 0) {
        *(undefined1 *)(param_1 + 0x68) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = *local_40;
        FUN_009580b8();
        FUN_00962ab4();
        *(undefined1 *)(param_1 + 0x6a) = 1;
      }
      if (local_40 != (undefined8 *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (undefined8 *)0x0;
      }
    }
    if (*(char *)(param_1 + 0x68) == '\0') {
      if ((cVar1 == '\0') && ((bool)(bVar3 ^ 1))) goto LAB_009e33c0;
    }
    else if ((cVar1 == *(char *)(param_1 + 0x68)) &&
            (!(bool)(bVar3 ^ *(long *)(param_1 + 0x60) != 0))) goto LAB_009e33c0;
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      do {
        if (*(code **)(lVar5 + 8) == (code *)0x0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
        }
        else {
          (**(code **)(lVar5 + 8))();
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != *(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x6a) = 0x100;
  }
LAB_009e33c0:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009e34b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_027c3b10;
  param_1[3] = &PTR_FUN_027c3eb0;
  puVar2 = (uint *)FUN_00a012b4();
  lVar5 = (ulong)*puVar2 << 5;
  puVar1 = *(undefined8 **)(puVar2 + 2);
  do {
    puVar3 = puVar1;
    if (lVar5 == 0) goto LAB_009e3508;
    lVar5 = lVar5 + -0x20;
    puVar1 = puVar3 + 4;
  } while ((undefined8 *)*puVar3 != param_1);
  FUN_00910480(puVar2,puVar3);
LAB_009e3508:
  puVar2 = (uint *)FUN_00a016d4();
  lVar6 = (ulong)*puVar2 << 5;
  lVar5 = *(long *)(puVar2 + 2);
  do {
    lVar4 = lVar5;
    if (lVar6 == 0) goto LAB_009e3538;
    lVar6 = lVar6 + -0x20;
    lVar5 = lVar4 + 0x20;
  } while (*(undefined8 **)(lVar4 + 8) != param_1);
  FUN_009e48d4(puVar2,lVar4);
LAB_009e3538:
  FUN_00e6ec98(&DAT_0320ff70,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_009e3f20(param_1 + 6,1);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_00921668(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_009e358c(long param_1)

{
  FUN_009e34b0(param_1 + -0x18);
  return;
}




void FUN_009e3594(void *param_1)

{
  FUN_009e34b0();
  operator_delete(param_1);
  return;
}




void FUN_009e35b8(long param_1)

{
  FUN_009e34b0((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




bool FUN_009e35e0(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}




undefined4 FUN_009e35f0(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_009f6560(*(long *)(param_1 + 0x60),"chainCount");
    uVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *puVar2;
    }
  }
  return uVar1;
}




undefined1 FUN_009e3630(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}




undefined4 FUN_009e3638(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar2 = (undefined4 *)FUN_009f6560(*(long *)(param_1 + 0x60),"chainIndex");
    uVar1 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *puVar2;
    }
  }
  return uVar1;
}




int FUN_009e3664(void)

{
  long lVar1;
  
  lVar1 = FUN_00e85318(0);
  return 0x15180 - ((int)lVar1 +
                   ((int)(SUB168(SEXT816(lVar1) * SEXT816(0x1845c8a0ce512957),8) >> 0xd) -
                   (SUB164(SEXT816(lVar1) * SEXT816(0x1845c8a0ce512957),0xc) >> 0x1f)) * -0x15180);
}




undefined8 FUN_009e36ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0xd8) != '\0')) && (*(char *)(lVar1 + 0xd9) == '\0')) {
    return 1;
  }
  return 0;
}




void FUN_009e36d4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (uVar1 = FUN_009f6658(), (uVar1 & 1) != 0)) {
    uVar2 = FUN_009b8d90();
    FUN_009bb728(uVar2,*(long *)(param_1 + 0x60) + 0x48,
                 *(long *)(*(long *)(param_1 + 0x60) + 8) + 0x30);
    return;
  }
  return;
}




void FUN_009e3720(long param_1)

{
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}




undefined8 FUN_009e3728(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + 0x68) == '\0') || (*(long *)(param_1 + 0x60) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(char *)(param_1 + 0x6c) == '\0') {
      *(undefined1 *)(param_1 + 0x6c) = 1;
      lVar3 = FUN_00e85318(0);
      lVar5 = *(long *)(param_1 + 0x60);
      bVar1 = false;
      if (lVar5 != 0) {
        if (*(char *)(lVar5 + 0xd8) == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = false;
          if (*(char *)(lVar5 + 0xd9) == '\0') {
            bVar1 = *(char *)(param_1 + 0x69) == '\0';
          }
        }
      }
      if ((0x3840 < lVar3 - *(long *)(param_1 + 0x58)) || (uVar2 = 0, bVar1)) {
        uVar2 = FUN_00e85318(0);
        lVar5 = *(long *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x58) = uVar2;
        if ((lVar5 == 0) || ((*(char *)(lVar5 + 0xd8) == '\0' || (*(char *)(lVar5 + 0xd9) != '\0')))
           ) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        uVar2 = 1;
        *(undefined1 *)(param_1 + 0x69) = uVar4;
      }
    }
  }
  return uVar2;
}




bool FUN_009e37f8(long param_1)

{
  if (*(char *)(param_1 + 0x68) != '\0') {
    return *(long *)(param_1 + 0x60) != 0;
  }
  return false;
}




bool FUN_009e3818(long param_1,uint param_2)

{
  bool bVar1;
  
  if ((int)param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (param_2 < *(uint *)(param_1 + 0x30)) {
      bVar1 = *(char *)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78 + 0x71) != '\0';
    }
  }
  return bVar1;
}




bool FUN_009e3854(long param_1,uint param_2)

{
  bool bVar1;
  
  if ((int)param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (param_2 < *(uint *)(param_1 + 0x30)) {
      bVar1 = *(char *)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78 + 0x70) != '\0';
    }
  }
  return bVar1;
}




undefined1 * FUN_009e3890(long param_1,uint param_2)

{
  long lVar1;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x30))) {
    lVar1 = *(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78;
    if ((*(byte *)(lVar1 + 0x30) & 1) == 0) {
      return (undefined1 *)(lVar1 + 0x31);
    }
    return *(undefined1 **)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78 + 0x40);
  }
  return &DAT_01e277f2;
}




undefined1 * FUN_009e38dc(long param_1,uint param_2)

{
  long lVar1;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x30))) {
    lVar1 = *(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78;
    if ((*(byte *)(lVar1 + 0x48) & 1) == 0) {
      return (undefined1 *)(lVar1 + 0x49);
    }
    return *(undefined1 **)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78 + 0x58);
  }
  return &DAT_01e277f2;
}




undefined8 * FUN_009e3928(long param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x30))) {
    return (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0x78 + 0x60);
  }
  return &DAT_03210450;
}




void FUN_009e3958(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_1 + 0x6a) == '\0') {
    if (*(char *)(param_1 + 0x6b) != '\0') {
      *(undefined1 *)(param_1 + 0x6b) = 0;
      FUN_009e3354(param_1);
    }
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar13 = 0;
      lVar14 = 0x98;
      do {
        lVar11 = *(long *)(param_2 + 0x30);
        puVar1 = (undefined1 *)(lVar11 + lVar14);
        lVar6 = FUN_009e3c68(param_1,puVar1 + -0x98);
        if (lVar6 != 0) {
          FUN_008fce60(lVar6 + 0x30,puVar1 + -0x18);
          FUN_008fce60(lVar6 + 0x48,puVar1 + -0x30);
          *(undefined1 *)(lVar6 + 0x70) = *puVar1;
          bVar3 = puVar1[-0x48];
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0) {
LAB_009e3a14:
              if (0 < *(int *)(lVar11 + lVar14 + -0x50)) {
                uStack_70 = 0;
                local_78 = 0;
                pvStack_80 = (void *)0x0;
                local_88 = 0;
                FUN_00968914(&local_88,&DAT_01bb6d43);
                FUN_00e705c8(&local_98,&local_88);
                FUN_00910394(lVar6 + 0x60,&local_98);
                if (local_90 != (void *)0x0) {
                  operator_delete__(local_90);
                  local_98 = 0;
                  local_90 = (void *)0x0;
                }
              }
              goto LAB_009e3bc0;
            }
          }
          else if (*(long *)(lVar11 + lVar14 + -0x40) == 0) goto LAB_009e3a14;
          if ((bVar3 & 1) == 0) {
            lVar7 = lVar11 + lVar14 + -0x47;
          }
          else {
            lVar7 = *(long *)(lVar11 + lVar14 + -0x38);
          }
          uVar8 = FUN_00e6ce7c(lVar7,0);
          lVar6 = lVar6 + 0x60;
          FUN_00910394(lVar6,uVar8);
          lVar7 = lVar11 + lVar14;
          pbVar12 = (byte *)(lVar7 + -0x80);
          bVar3 = *pbVar12;
          uVar9 = *(ulong *)(lVar7 + -0x78);
          uVar10 = (ulong)(bVar3 >> 1);
          uVar2 = uVar10;
          if ((bVar3 & 1) != 0) {
            uVar2 = uVar9;
          }
          if (uVar2 == 4) {
            iVar5 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,"hero",4);
            if (iVar5 != 0) {
              bVar3 = *(byte *)(lVar7 + -0x80);
              uVar9 = *(ulong *)(lVar7 + -0x78);
              uVar10 = (ulong)(bVar3 >> 1);
              goto LAB_009e3ae4;
            }
            lVar11 = lVar11 + lVar14;
            if ((*(byte *)(lVar11 + -0x68) & 1) == 0) {
              lVar11 = lVar11 + -0x67;
            }
            else {
              lVar11 = *(long *)(lVar11 + -0x58);
            }
            lVar11 = FUN_00ce9cb8(lVar11);
            if (lVar11 == 0) goto LAB_009e3bc0;
            FUN_00e705c8(&local_88,"[HERO]");
            uVar8 = FUN_00e6ce7c(*(undefined8 *)(lVar11 + 0x28),0);
            FUN_00e713f0(lVar6,0,&local_88,uVar8);
          }
          else {
LAB_009e3ae4:
            if ((bVar3 & 1) != 0) {
              uVar10 = uVar9;
            }
            if ((uVar10 != 4) ||
               (iVar5 = FUN_0090d610(pbVar12,0,0xffffffffffffffff,&DAT_01b9230f,4), iVar5 != 0))
            goto LAB_009e3bc0;
            FUN_00e705c8(&local_88,"[SKIN]");
            FUN_00e705c8(&local_98,&DAT_01e277f2);
            FUN_00e713f0(lVar6,0,&local_88,&local_98);
            if (local_90 != (void *)0x0) {
              operator_delete__(local_90);
              local_98 = 0;
              local_90 = (void *)0x0;
            }
          }
          if (pvStack_80 != (void *)0x0) {
            operator_delete__(pvStack_80);
            local_88 = 0;
            pvStack_80 = (void *)0x0;
          }
        }
LAB_009e3bc0:
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0xa0;
      } while (uVar13 < *(uint *)(param_2 + 0x28));
    }
    *(undefined1 *)(param_1 + 0x6a) = 0;
    *(undefined1 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar14 = *(long *)(param_1 + 0x28);
      do {
        if (*(code **)(lVar14 + 8) == (code *)0x0) {
          (**(code **)(lVar14 + 0x18))(*(undefined8 *)(lVar14 + 0x10));
        }
        else {
          (**(code **)(lVar14 + 8))();
        }
        lVar14 = lVar14 + 0x20;
      } while (lVar14 != *(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_009e3c68(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar8 + uVar9 * 0x78;
      bVar3 = *(byte *)(lVar5 + 0x18);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x20);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar8 + uVar9 * 0x78 + 0x28);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x19);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_009e3d38:
            return lVar8 + (uVar9 & 0xffffffff) * 0x78;
          }
          pbVar6 = (byte *)(lVar5 + 0x19);
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar6 == *pbVar7) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) goto LAB_009e3d38;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_009e3d38;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return 0;
}




void FUN_009e3d58(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  byte local_78;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(char *)(param_1 + 0x6a) == '\0') {
    if (*(char *)(param_1 + 0x6b) != '\0') {
      *(undefined1 *)(param_1 + 0x6b) = 0;
      FUN_009e3354(param_1);
    }
  }
  else {
    local_d0 = 0;
    uStack_c8 = 0;
    FUN_009511d8(&local_d0,*(undefined4 *)(param_2 + 0x28));
    puVar1 = (uint *)(param_1 + 0x30);
    FUN_009e3f20(puVar1,0);
    uVar3 = *(undefined4 *)(param_2 + 0x28);
    memset(local_c0,0,0x60);
    FUN_00e70510(&local_60);
    local_50 = 0;
    local_4e = 0;
    FUN_009e3fdc(puVar1,uVar3,local_c0);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      lVar7 = 0;
      uVar9 = 0;
      do {
        FUN_009e4184(param_1,*(long *)(param_2 + 0x30) + lVar7);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x110;
      } while (uVar9 < *(uint *)(param_2 + 0x28));
    }
    uVar9 = (ulong)*puVar1;
    if (*puVar1 != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x38) + lVar7;
        bVar4 = *(byte *)(lVar2 + 0x18);
        if ((bVar4 & 1) == 0) {
          if (bVar4 >> 1 != 0) {
LAB_009e3ea0:
            FUN_0096204c(&local_d0,*(long *)(param_1 + 0x38) + lVar7 + 0x18);
            uVar9 = (ulong)*puVar1;
          }
        }
        else if (*(long *)(lVar2 + 0x20) != 0) goto LAB_009e3ea0;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x78;
      } while (uVar8 < uVar9);
    }
    uVar6 = FUN_009580b8();
    FUN_00962458(uVar6,&local_d0);
    FUN_00951534(&local_d0,1);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009e3f20(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x78;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x40);
      do {
        if ((void *)puVar2[5] != (void *)0x0) {
          operator_delete__((void *)puVar2[5]);
          puVar2[4] = 0;
          puVar2[5] = 0;
        }
        if ((*(byte *)(puVar2 + 1) & 1) != 0) {
          operator_delete((void *)puVar2[3]);
        }
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        if ((*(byte *)(puVar2 + -5) & 1) != 0) {
          operator_delete((void *)puVar2[-3]);
        }
        if ((*(byte *)(puVar2 + -8) & 1) != 0) {
          operator_delete((void *)puVar2[-6]);
        }
        lVar1 = lVar1 + -0x78;
        puVar2 = puVar2 + 0xf;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_009e3fdc(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_009e494c(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar5 = (ulong)uVar2 * 0x78;
      lVar3 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar1 = *(long *)(param_1 + 2) + lVar5;
        FUN_008fcdb8(lVar1,param_3);
        FUN_008fcdb8(lVar1 + 0x18,param_3 + 0x18);
        FUN_008fcdb8(lVar1 + 0x30,param_3 + 0x30);
        FUN_008fcdb8(lVar1 + 0x48,param_3 + 0x48);
        thunk_FUN_00e7051c(lVar1 + 0x60,param_3 + 0x60);
        lVar3 = lVar3 + -1;
        lVar5 = lVar5 + 0x78;
        *(undefined1 *)(lVar1 + 0x72) = *(undefined1 *)(param_3 + 0x72);
        *(undefined2 *)(lVar1 + 0x70) = *(undefined2 *)(param_3 + 0x70);
      } while (lVar3 != 0);
      uVar2 = *param_1;
    }
    if (param_2 < uVar2) {
      lVar5 = (ulong)uVar2 * 0x78 + (ulong)param_2 * -0x78;
      puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x78 + 0x40);
      do {
        if ((void *)puVar4[5] != (void *)0x0) {
          operator_delete__((void *)puVar4[5]);
          puVar4[4] = 0;
          puVar4[5] = 0;
        }
        if ((*(byte *)(puVar4 + 1) & 1) != 0) {
          operator_delete((void *)puVar4[3]);
        }
        if ((*(byte *)(puVar4 + -2) & 1) != 0) {
          operator_delete((void *)*puVar4);
        }
        if ((*(byte *)(puVar4 + -5) & 1) != 0) {
          operator_delete((void *)puVar4[-3]);
        }
        if ((*(byte *)(puVar4 + -8) & 1) != 0) {
          operator_delete((void *)puVar4[-6]);
        }
        lVar5 = lVar5 + -0x78;
        puVar4 = puVar4 + 0xf;
      } while (lVar5 != 0);
    }
    *param_1 = param_2;
    return;
  }
  FUN_009e3f20(param_1);
  return;
}




void thunk_FUN_009e3354(long param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  cVar1 = *(char *)(param_1 + 0x68);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(long *)(param_1 + 0x60) != 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  FUN_009e3f20(param_1 + 0x30,0);
  if ((*(char *)(param_1 + 0x6a) == '\0') && (*(char *)(param_1 + 0x6b) == '\0')) {
    uVar4 = FUN_00a022b0();
    if ((uVar4 & 1) != 0) {
      FUN_00a01a90(&uStack_48,7);
      if ((int)uStack_48 == 0) {
        *(undefined1 *)(param_1 + 0x68) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0x60) = *puStack_40;
        FUN_009580b8();
        FUN_00962ab4();
        *(undefined1 *)(param_1 + 0x6a) = 1;
      }
      if (puStack_40 != (undefined8 *)0x0) {
        operator_delete__(puStack_40);
        uStack_48 = 0;
        puStack_40 = (undefined8 *)0x0;
      }
    }
    if (*(char *)(param_1 + 0x68) == '\0') {
      if ((cVar1 == '\0') && ((bool)(bVar3 ^ 1))) goto LAB_009e33c0;
    }
    else if ((cVar1 == *(char *)(param_1 + 0x68)) &&
            (!(bool)(bVar3 ^ *(long *)(param_1 + 0x60) != 0))) goto LAB_009e33c0;
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      do {
        if (*(code **)(lVar5 + 8) == (code *)0x0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
        }
        else {
          (**(code **)(lVar5 + 8))();
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != *(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x6a) = 0x100;
  }
LAB_009e33c0:
  if (*(long *)(lVar2 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

