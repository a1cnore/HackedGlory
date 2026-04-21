// functions/10014 — 402 functions
#include "GameKindred.h"




void thunk_FUN_10014b3c4(void)

{
  FUN_10014b3c4();
  return;
}




void thunk_FUN_100147938(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100147950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x68))(DAT_101e3a730,param_1,param_2);
  return;
}




void thunk_FUN_100142cfc(void)

{
  if (DAT_101d234f8 != 0) {
    FUN_100142b54();
    return;
  }
  return;
}




void thunk_FUN_100141934(void)

{
  FUN_100141934();
  return;
}




void thunk_FUN_100141b78(void)

{
  FUN_100141b78();
  return;
}




void thunk_FUN_100141f74(void)

{
  FUN_100141f74();
  return;
}




void FUN_100140564(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100142628(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xa0;
  *(undefined ***)(lVar4 + -0xa0) = &PTR_FUN_10145ac30;
  FUN_100142768(lVar4 + -0x98,param_2 + 8);
  FUN_10003330c(lVar4 + -0x88,param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar4 + -0x58) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar4 + -0x60) = uVar7;
  *(undefined8 *)(lVar4 + -0x48) = uVar9;
  *(undefined8 *)(lVar4 + -0x50) = uVar8;
  *(undefined8 *)(lVar4 + -0x68) = uVar6;
  *(undefined8 *)(lVar4 + -0x70) = uVar5;
  FUN_10003330c(lVar4 + -0x40,param_2 + 0x60);
  thunk_FUN_1004e439c(lVar4 + -0x28,param_2 + 0x78);
  thunk_FUN_1004e439c(lVar4 + -0x18,param_2 + 0x88);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x98);
  return;
}




void FUN_100140640(undefined8 param_1,undefined8 param_2)

{
  undefined **local_c0;
  undefined1 auStack_b8 [16];
  void *local_a8;
  char local_91;
  void *local_60;
  char local_49;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  
  FUN_10014237c(&local_c0);
  FUN_10013edfc(param_1,&local_c0,param_2);
  local_c0 = &PTR_FUN_10145ac30;
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8);
  }
  FUN_1001423e4(auStack_b8,1);
  return;
}




void FUN_1001406e0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  string *psVar8;
  undefined8 ****ppppuVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 ***local_d0;
  ulong uStack_c8;
  ulong local_c0;
  string *psStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  int local_a0;
  undefined8 ***local_90 [2];
  char local_79;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  FUN_100142458(param_1);
  uVar3 = FUN_10012ea00();
  FUN_10001549c(local_90,uVar3);
  lVar4 = FUN_1000e86c0(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = (undefined8 ***)0x1013d6fc2;
    uStack_c8 = 5;
    lVar4 = FUN_1000e87dc(param_3,&local_d0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100005);
      local_d0 = (undefined8 ***)0x1013d6fc2;
      uStack_c8 = 5;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_d0);
      ppppuVar9 = (undefined8 ****)local_90[0];
      if (-1 < local_79) {
        ppppuVar9 = local_90;
      }
      lVar4 = FUN_1000e86c0(plVar5,ppppuVar9);
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100140800:
        pcVar11 = "";
      }
      else {
        lVar4 = 0;
        do {
          pcVar11 = (char *)((long)ppppuVar9 + lVar4);
          lVar4 = lVar4 + 1;
        } while (*pcVar11 != '\0');
        local_c0 = CONCAT44(local_c0._4_4_,0x100005);
        uStack_c8 = (ulong)((int)lVar4 - 1);
        local_d0 = ppppuVar9;
        lVar4 = FUN_1000e87dc(plVar5,&local_d0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100140800;
        lVar4 = 0;
        do {
          pcVar11 = (char *)((long)ppppuVar9 + lVar4);
          lVar4 = lVar4 + 1;
        } while (*pcVar11 != '\0');
        local_c0 = CONCAT44(local_c0._4_4_,0x100005);
        uStack_c8 = (ulong)((int)lVar4 - 1);
        local_d0 = ppppuVar9;
        pcVar11 = (char *)FUN_1000e87dc(plVar5,&local_d0);
        if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
          pcVar11 = *(char **)pcVar11;
        }
      }
      FUN_10001549c(&local_d0,pcVar11);
      FUN_1001376a0(&local_d0,param_1 + 8);
      if ((long)local_c0 < 0) {
        operator_delete(local_d0);
      }
    }
  }
  lVar4 = FUN_1000e86c0(param_3,"detailTitle");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = (undefined8 ***)0x1013dd514;
    uStack_c8 = 0xb;
    lVar4 = FUN_1000e87dc(param_3,&local_d0);
    if (*(int *)(lVar4 + 0x10) == 3) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100005);
      local_d0 = (undefined8 ***)0x1013dd514;
      uStack_c8 = 0xb;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_d0);
      ppppuVar9 = (undefined8 ****)local_90[0];
      if (-1 < local_79) {
        ppppuVar9 = local_90;
      }
      lVar4 = FUN_1000e86c0(plVar5,ppppuVar9);
      if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100140900:
        pcVar11 = "";
      }
      else {
        lVar4 = 0;
        do {
          pcVar11 = (char *)((long)ppppuVar9 + lVar4);
          lVar4 = lVar4 + 1;
        } while (*pcVar11 != '\0');
        local_c0 = CONCAT44(local_c0._4_4_,0x100005);
        uStack_c8 = (ulong)((int)lVar4 - 1);
        local_d0 = ppppuVar9;
        lVar4 = FUN_1000e87dc(plVar5,&local_d0);
        if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100140900;
        lVar4 = 0;
        do {
          pcVar11 = (char *)((long)ppppuVar9 + lVar4);
          lVar4 = lVar4 + 1;
        } while (*pcVar11 != '\0');
        local_c0 = CONCAT44(local_c0._4_4_,0x100005);
        uStack_c8 = (ulong)((int)lVar4 - 1);
        local_d0 = ppppuVar9;
        pcVar11 = (char *)FUN_1000e87dc(plVar5,&local_d0);
        if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
          pcVar11 = *(char **)pcVar11;
        }
      }
      FUN_10001549c(&local_d0,pcVar11);
      FUN_1001376a0(&local_d0,param_1 + 0x18);
      if ((long)local_c0 < 0) {
        operator_delete(local_d0);
      }
    }
  }
  lVar4 = FUN_1000e86c0(param_3,"detailDescription");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar4) goto LAB_100140a2c;
  local_c0 = CONCAT44(local_c0._4_4_,0x100005);
  local_d0 = (undefined8 ***)0x1013dd520;
  uStack_c8 = 0x11;
  lVar4 = FUN_1000e87dc(param_3,&local_d0);
  if (*(int *)(lVar4 + 0x10) != 3) goto LAB_100140a2c;
  local_c0 = CONCAT44(local_c0._4_4_,0x100005);
  local_d0 = (undefined8 ***)0x1013dd520;
  uStack_c8 = 0x11;
  plVar5 = (long *)FUN_1000e87dc(param_3,&local_d0);
  ppppuVar9 = (undefined8 ****)local_90[0];
  if (-1 < local_79) {
    ppppuVar9 = local_90;
  }
  lVar4 = FUN_1000e86c0(plVar5,ppppuVar9);
  if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
LAB_100140a00:
    pcVar11 = "";
  }
  else {
    lVar4 = 0;
    do {
      pcVar11 = (char *)((long)ppppuVar9 + lVar4);
      lVar4 = lVar4 + 1;
    } while (*pcVar11 != '\0');
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    uStack_c8 = (ulong)((int)lVar4 - 1);
    local_d0 = ppppuVar9;
    lVar4 = FUN_1000e87dc(plVar5,&local_d0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) == 0) goto LAB_100140a00;
    lVar4 = 0;
    do {
      pcVar11 = (char *)((long)ppppuVar9 + lVar4);
      lVar4 = lVar4 + 1;
    } while (*pcVar11 != '\0');
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    uStack_c8 = (ulong)((int)lVar4 - 1);
    local_d0 = ppppuVar9;
    pcVar11 = (char *)FUN_1000e87dc(plVar5,&local_d0);
    if (((byte)pcVar11[0x12] >> 6 & 1) == 0) {
      pcVar11 = *(char **)pcVar11;
    }
  }
  FUN_10001549c(&local_d0,pcVar11);
  FUN_1001376a0(&local_d0,param_1 + 0x28);
  if ((long)local_c0 < 0) {
    operator_delete(local_d0);
  }
LAB_100140a2c:
  plVar5 = (long *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x4f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar4 = FUN_1000e86c0(param_3,"image");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = (undefined8 ***)0x1013dd4e6;
    uStack_c8 = 5;
    lVar4 = FUN_1000e87dc(param_3,&local_d0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100005);
      local_d0 = (undefined8 ***)0x1013dd4e6;
      uStack_c8 = 5;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_d0);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_d0,plVar5);
  std::string::operator=((string *)(param_1 + 0x38),(string *)&local_d0);
  if ((long)local_c0 < 0) {
    operator_delete(local_d0);
  }
  plVar5 = (long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar4 = FUN_1000e86c0(param_3,"detailImage");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = (undefined8 ***)0x1013dd532;
    uStack_c8 = 0xb;
    lVar4 = FUN_1000e87dc(param_3,&local_d0);
    if ((*(byte *)(lVar4 + 0x12) >> 4 & 1) != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100005);
      local_d0 = (undefined8 ***)0x1013dd532;
      uStack_c8 = 0xb;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_d0);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_d0,plVar5);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&local_d0);
  if ((long)local_c0 < 0) {
    operator_delete(local_d0);
  }
  uVar13 = *(undefined4 *)(param_2 + 0x78);
  lVar4 = FUN_1000e86c0(param_3,"level");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = (undefined8 ***)0x1013d2620;
    uStack_c8 = 5;
    lVar4 = FUN_1000e87dc(param_3,&local_d0);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100005);
      local_d0 = (undefined8 ***)0x1013d2620;
      uStack_c8 = 5;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_d0);
      uVar13 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar13;
  bVar2 = *(char *)(param_2 + 0x7c) != '\0';
  lVar4 = FUN_1000e86c0(param_3,"freeTrack");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = (undefined8 ***)0x1013dd53e;
    uStack_c8 = 9;
    lVar4 = FUN_1000e87dc(param_3,&local_d0);
    if ((*(byte *)(lVar4 + 0x11) & 1) != 0) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100005);
      local_d0 = (undefined8 ***)0x1013dd53e;
      uStack_c8 = 9;
      lVar4 = FUN_1000e87dc(param_3,&local_d0);
      bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x7c) = bVar2;
  lVar4 = FUN_1000e86c0(param_3,"iconRepresentations");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar4) {
    local_c0 = CONCAT44(local_c0._4_4_,0x100005);
    local_d0 = (undefined8 ***)0x1013dd548;
    uStack_c8 = 0x13;
    lVar4 = FUN_1000e87dc(param_3,&local_d0);
    if (*(int *)(lVar4 + 0x10) == 4) {
      local_c0 = CONCAT44(local_c0._4_4_,0x100005);
      local_d0 = (undefined8 ***)0x1013dd548;
      uStack_c8 = 0x13;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_d0);
      uVar12 = (ulong)*(uint *)(plVar5 + 1);
      if (*(uint *)(plVar5 + 1) != 0) {
        lVar4 = 0;
        uVar14 = 0;
        do {
          plVar1 = (long *)(*plVar5 + lVar4);
          if ((int)plVar1[2] == 3) {
            psStack_b8 = (string *)0x0;
            local_c0 = 0;
            uStack_a8 = 0;
            local_b0 = 0;
            uStack_c8 = 0;
            local_d0 = (undefined8 ****)0x0;
            lVar7 = FUN_1000e86c0(plVar1,"resourceName");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_100140d7c:
              ppppuVar9 = &local_d0;
            }
            else {
              local_68 = 0x100005;
              local_78 = "resourceName";
              uStack_70 = 0xc;
              lVar7 = FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_100140d7c;
              local_68 = 0x100005;
              local_78 = "resourceName";
              uStack_70 = 0xc;
              ppppuVar9 = (undefined8 ****)FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)((long)ppppuVar9 + 0x12) >> 6 & 1) == 0) {
                ppppuVar9 = (undefined8 ****)*ppppuVar9;
              }
            }
            FUN_10001549c(&local_78,ppppuVar9);
            std::string::operator=((string *)&local_d0,(string *)&local_78);
            if (local_61 < '\0') {
              operator_delete(local_78);
            }
            psVar8 = psStack_b8;
            if (-1 < (long)uStack_a8) {
              psVar8 = (string *)&psStack_b8;
            }
            lVar7 = FUN_1000e86c0(plVar1,"imageName");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar7) {
              local_68 = 0x100005;
              local_78 = "imageName";
              uStack_70 = 9;
              lVar7 = FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = "imageName";
                uStack_70 = 9;
                psVar8 = (string *)FUN_1000e87dc(plVar1,&local_78);
                if (((byte)psVar8[0x12] >> 6 & 1) == 0) {
                  psVar8 = *(string **)psVar8;
                }
              }
            }
            FUN_10001549c(&local_78,psVar8);
            std::string::operator=((string *)&psStack_b8,(string *)&local_78);
            if (local_61 < '\0') {
              operator_delete(local_78);
            }
            lVar7 = FUN_1000e86c0(plVar1,"quantity");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
              local_a0 = 1;
            }
            else {
              local_68 = 0x100005;
              local_78 = "quantity";
              uStack_70 = 8;
              lVar7 = FUN_1000e87dc(plVar1,&local_78);
              if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) {
                local_a0 = 1;
              }
              else {
                local_68 = 0x100005;
                local_78 = "quantity";
                uStack_70 = 8;
                piVar10 = (int *)FUN_1000e87dc(plVar1,&local_78);
                local_a0 = *piVar10;
              }
            }
            uVar12 = uStack_c8;
            if (-1 < (long)local_c0) {
              uVar12 = local_c0 >> 0x38;
            }
            if (uVar12 != 0) {
              uVar12 = local_b0;
              if (-1 < (long)uStack_a8) {
                uVar12 = uStack_a8 >> 0x38;
              }
              if ((uVar12 != 0) && (0 < local_a0)) {
                FUN_10014106c(param_1 + 0x68,&local_d0);
              }
            }
            if ((long)uStack_a8 < 0) {
              operator_delete(psStack_b8);
            }
            if ((long)local_c0 < 0) {
              operator_delete(local_d0);
            }
            uVar12 = (ulong)*(uint *)(plVar5 + 1);
          }
          uVar14 = uVar14 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar14 < uVar12);
      }
    }
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  return;
}




void FUN_10014106c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1001428d0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_10003330c(lVar4 + -0x38,param_2);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




undefined8 * FUN_100141108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac80;
  FUN_1001424cc(param_1 + 0xd,1);
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void FUN_10014118c(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char local_51;
  
  *param_1 = &PTR_FUN_10145aca8;
  FUN_10003330c((string *)(param_1 + 1),&DAT_101d91198);
  FUN_10003330c((string *)(param_1 + 4),&DAT_101d91198);
  plVar2 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"key");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "key";
    uStack_60 = 3;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "key";
      uStack_60 = 3;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_68,plVar2);
  std::string::operator=((string *)(param_1 + 1),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  plVar2 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"href");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "href";
    uStack_60 = 4;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "href";
      uStack_60 = 4;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_68,plVar2);
  std::string::operator=((string *)(param_1 + 4),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  return;
}




undefined8 * FUN_100141360(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aca8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_1001413ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aa28;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001413f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100141934();
  operator_delete(pvVar1);
  return;
}




void FUN_10014140c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aa78;
  FUN_100141a54(param_1 + 1,1);
  operator_delete(param_1);
  return;
}




void FUN_100141440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aaa0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001414ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aac8;
  param_1[1] = &PTR_FUN_10145aaa0;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}




void FUN_100141520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aaf0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}




void FUN_10014158c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100141b78();
  operator_delete(pvVar1);
  return;
}




void FUN_1001415a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ab40;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}




void FUN_10014160c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ab68;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}




void FUN_10014164c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100141f74();
  operator_delete(pvVar1);
  return;
}




void FUN_100141660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145abe0;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_1000fa8bc(param_1 + 1,1);
  operator_delete(param_1);
  return;
}




void FUN_1001416d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac08;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}




void FUN_100141744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac30;
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_1001423e4(param_1 + 1,1);
  operator_delete(param_1);
  return;
}




void FUN_1001417bc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000eb120();
  operator_delete(pvVar1);
  return;
}




void FUN_1001417d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac80;
  FUN_1001424cc(param_1 + 0xd,1);
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}




void FUN_100141850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aca8;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_10014189c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_thunk_FUN_100141934_10145aa50;
  FUN_10003330c(param_1 + 3,&DAT_101d91198);
  FUN_10003330c(param_1 + 6,&DAT_101d91198);
  FUN_10003330c(param_1 + 9,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xc,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xf,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x12,&DAT_101d91198);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 1;
  *(undefined1 *)((long)param_1 + 0xce) = 0;
  return param_1;
}




undefined8 * FUN_100141934(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100141934_10145aa50;
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_1001419dc(param_1 + 1,1);
  return param_1;
}




void FUN_1001419dc(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100141a54(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0xd0;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xd0;
        puVar2 = puVar2 + 0x1a;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




undefined8 * FUN_100141acc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100141b78_10145ab18;
  FUN_10003330c(param_1 + 1,&DAT_101d91198);
  FUN_10003330c(param_1 + 4,&DAT_101d91198);
  FUN_10003330c(param_1 + 7,&DAT_101d91198);
  FUN_10003330c(param_1 + 10,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xd,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x10,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x13,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x16,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x19,&DAT_101d91198);
  return param_1;
}




undefined8 * FUN_100141b78(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100141b78_10145ab18;
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    operator_delete((void *)param_1[0x19]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    operator_delete((void *)param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




undefined8 * FUN_100141c34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ab40;
  FUN_10003330c(param_1 + 1,&DAT_101d91198);
  FUN_10001549c(param_1 + 4,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_10001549c(param_1 + 7,"white_background");
  FUN_10001549c(param_1 + 10,"white_background");
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x11] = 0x3f8000003f800000;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  return param_1;
}




undefined8 * FUN_100141cc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aaa0;
  FUN_10003330c(param_1 + 1,&DAT_101d91198);
  FUN_10003330c(param_1 + 4,&DAT_101d91198);
  FUN_10003330c(param_1 + 7,&DAT_101d91198);
  FUN_10001549c(param_1 + 10,"timestamp");
  *(undefined4 *)(param_1 + 0xd) = 0xff000000;
  param_1[0xe] = 0xffffffffffffffff;
  return param_1;
}




undefined8 * FUN_100141d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aaf0;
  FUN_10003330c(param_1 + 1,&DAT_101d91198);
  FUN_10003330c(param_1 + 4,&DAT_101d91198);
  FUN_10003330c(param_1 + 7,&DAT_101d91198);
  FUN_10003330c(param_1 + 10,&DAT_101d91198);
  *(undefined4 *)(param_1 + 0xd) = 0xff000000;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xff000000;
  *(undefined4 *)(param_1 + 0xe) = 0xff000000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  return param_1;
}




undefined8 * FUN_100141dbc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_100141f74_10145abb8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_100141d3c(param_1 + 5);
  FUN_100141cc8(param_1 + 0x18);
  FUN_100141cc8(param_1 + 0x27);
  FUN_100141acc(param_1 + 0x36);
  FUN_100141c34(param_1 + 0x52);
  param_1[0x65] = &PTR_FUN_10145ab68;
  FUN_10003330c(param_1 + 0x66,&DAT_101d91198);
  param_1[0x6a] = 0xffffffffffffffff;
  param_1[0x69] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6b) = 1;
  param_1[0x6c] = &PTR_FUN_10145ab90;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  FUN_10003330c(param_1 + 0x72,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x75,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x78,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x7b,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x7e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x81,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x84,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x87,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x8a,&DAT_101d91198);
  FUN_10001549c(param_1 + 0x8d,"one_by_one");
  FUN_10001549c(param_1 + 0x90,"marketFeedTestGroup");
  FUN_10003330c(param_1 + 0x93,&DAT_101d91198);
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  thunk_FUN_1004e439c(param_1 + 0x99,&DAT_101d91650);
  *(undefined8 *)((long)param_1 + 0x50c) = 0;
  *(undefined8 *)((long)param_1 + 0x504) = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((long)param_1 + 0x51c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x514) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x52c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x524) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x53c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x534) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x54c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x544) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x55c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x554) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x56c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x564) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x57c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x574) = 0xffffffffffffffff;
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)((long)param_1 + 0x584) = uVar1;
  *(undefined8 *)((long)param_1 + 0x58c) = 0x1000000;
  *(undefined2 *)((long)param_1 + 0x594) = 1;
  return param_1;
}




undefined8 * FUN_100141f74(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100141f74_10145abb8;
  FUN_1001419dc(param_1 + 0x9d,1);
  FUN_10001629c(param_1 + 0x9b,1);
  if ((void *)param_1[0x9a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9a]);
    param_1[0x9a] = 0;
    param_1[0x99] = 0;
  }
  if (*(char *)((long)param_1 + 0x4c7) < '\0') {
    operator_delete((void *)param_1[0x96]);
  }
  if (*(char *)((long)param_1 + 0x4af) < '\0') {
    operator_delete((void *)param_1[0x93]);
  }
  if (*(char *)((long)param_1 + 0x497) < '\0') {
    operator_delete((void *)param_1[0x90]);
  }
  if (*(char *)((long)param_1 + 0x47f) < '\0') {
    operator_delete((void *)param_1[0x8d]);
  }
  if (*(char *)((long)param_1 + 0x467) < '\0') {
    operator_delete((void *)param_1[0x8a]);
  }
  if (*(char *)((long)param_1 + 0x44f) < '\0') {
    operator_delete((void *)param_1[0x87]);
  }
  if (*(char *)((long)param_1 + 0x437) < '\0') {
    operator_delete((void *)param_1[0x84]);
  }
  if (*(char *)((long)param_1 + 0x41f) < '\0') {
    operator_delete((void *)param_1[0x81]);
  }
  if (*(char *)((long)param_1 + 0x407) < '\0') {
    operator_delete((void *)param_1[0x7e]);
  }
  if (*(char *)((long)param_1 + 0x3ef) < '\0') {
    operator_delete((void *)param_1[0x7b]);
  }
  if (*(char *)((long)param_1 + 0x3d7) < '\0') {
    operator_delete((void *)param_1[0x78]);
  }
  if (*(char *)((long)param_1 + 0x3bf) < '\0') {
    operator_delete((void *)param_1[0x75]);
  }
  if (*(char *)((long)param_1 + 0x3a7) < '\0') {
    operator_delete((void *)param_1[0x72]);
  }
  if (*(char *)((long)param_1 + 0x38f) < '\0') {
    operator_delete((void *)param_1[0x6f]);
  }
  param_1[0x65] = &PTR_FUN_10145ab68;
  if (*(char *)((long)param_1 + 0x347) < '\0') {
    operator_delete((void *)param_1[0x66]);
  }
  param_1[0x52] = &PTR_FUN_10145ab40;
  if (*(char *)((long)param_1 + 0x2f7) < '\0') {
    operator_delete((void *)param_1[0x5c]);
  }
  if (*(char *)((long)param_1 + 0x2df) < '\0') {
    operator_delete((void *)param_1[0x59]);
  }
  if (*(char *)((long)param_1 + 0x2c7) < '\0') {
    operator_delete((void *)param_1[0x56]);
  }
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    operator_delete((void *)param_1[0x53]);
  }
  FUN_100141b78(param_1 + 0x36);
  param_1[0x27] = &PTR_FUN_10145aaa0;
  if (*(char *)((long)param_1 + 0x19f) < '\0') {
    operator_delete((void *)param_1[0x31]);
  }
  if (*(char *)((long)param_1 + 0x187) < '\0') {
    operator_delete((void *)param_1[0x2e]);
  }
  if (*(char *)((long)param_1 + 0x16f) < '\0') {
    operator_delete((void *)param_1[0x2b]);
  }
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  param_1[0x18] = &PTR_FUN_10145aaa0;
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    operator_delete((void *)param_1[0x19]);
  }
  param_1[5] = &PTR_FUN_10145aaf0;
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_100142224(param_1 + 3,1);
  FUN_10014229c(param_1 + 1,1);
  return param_1;
}




void FUN_100142224(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x90;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x90;
        puVar2 = puVar2 + 0x12;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void FUN_10014229c(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x30;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x30;
        puVar2 = puVar2 + 6;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




undefined8 * FUN_100142314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac08;
  FUN_10003330c(param_1 + 1,&DAT_101d91198);
  FUN_10003330c(param_1 + 4,&DAT_101d91198);
  FUN_10003330c(param_1 + 7,&DAT_101d91198);
  FUN_10003330c(param_1 + 10,&DAT_101d91198);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((long)param_1 + 0x6c) = 0;
  return param_1;
}




undefined8 * FUN_10014237c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10145ac30;
  FUN_1000fd6fc(param_1 + 3);
  FUN_10003330c(param_1 + 0xc,&DAT_101d91198);
  FUN_1004e3170(param_1 + 0xf,&DAT_101d91198);
  FUN_1004e3170(param_1 + 0x11,&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x13) = 2;
  return param_1;
}




void FUN_1001423e4(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
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




undefined8 * FUN_100142458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac80;
  FUN_1004e3170(param_1 + 1,&DAT_101d91198);
  FUN_1004e3170(param_1 + 3,&DAT_101d91198);
  FUN_1004e3170(param_1 + 5,&DAT_101d91198);
  FUN_10003330c(param_1 + 7,&DAT_101d91198);
  FUN_10003330c(param_1 + 10,&DAT_101d91198);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  return param_1;
}




void FUN_1001424cc(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x38;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100142558(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100142628(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0xa0);
    puVar4 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar5);
        *puVar1 = &PTR_FUN_10145ac30;
        FUN_100142768(puVar1 + 1,(long)puVar4 + lVar5 + 8);
        FUN_10003330c(puVar1 + 3,(long)puVar4 + lVar5 + 0x18);
        uVar7 = *(undefined8 *)((long)puVar4 + lVar5 + 0x38);
        uVar6 = *(undefined8 *)((long)puVar4 + lVar5 + 0x30);
        uVar8 = *(undefined8 *)((long)puVar4 + lVar5 + 0x40);
        uVar10 = *(undefined8 *)((long)puVar4 + lVar5 + 0x58);
        uVar9 = *(undefined8 *)((long)puVar4 + lVar5 + 0x50);
        puVar1[9] = *(undefined8 *)((long)puVar4 + lVar5 + 0x48);
        puVar1[8] = uVar8;
        puVar1[0xb] = uVar10;
        puVar1[10] = uVar9;
        puVar1[7] = uVar7;
        puVar1[6] = uVar6;
        FUN_10003330c(puVar1 + 0xc,(long)puVar4 + lVar5 + 0x60);
        thunk_FUN_1004e439c(puVar1 + 0xf,(long)puVar4 + lVar5 + 0x78);
        thunk_FUN_1004e439c(puVar1 + 0x11,(long)puVar4 + lVar5 + 0x88);
        *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)((long)puVar4 + lVar5 + 0x98);
        lVar5 = lVar5 + 0xa0;
      } while ((ulong)uVar2 * 0xa0 - lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0xa0;
        do {
          (**(code **)*puVar4)(puVar4);
          lVar5 = lVar5 + -0xa0;
          puVar4 = puVar4 + 0x14;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




uint * FUN_100142768(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100142558(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_1001427dc(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 != param_2) {
    FUN_1000eb1ec(param_1,1);
    FUN_100142628(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        *puVar1 = &PTR_FUN_10145ac30;
        lVar2 = lVar6 + lVar5;
        FUN_100142768(puVar1 + 1,lVar2 + 8);
        FUN_10003330c(puVar1 + 3,lVar2 + 0x18);
        uVar9 = *(undefined8 *)(lVar2 + 0x38);
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
        uVar10 = *(undefined8 *)(lVar2 + 0x40);
        uVar12 = *(undefined8 *)(lVar2 + 0x58);
        uVar11 = *(undefined8 *)(lVar2 + 0x50);
        puVar1[9] = *(undefined8 *)(lVar2 + 0x48);
        puVar1[8] = uVar10;
        puVar1[0xb] = uVar12;
        puVar1[10] = uVar11;
        puVar1[7] = uVar9;
        puVar1[6] = uVar8;
        FUN_10003330c(puVar1 + 0xc,lVar2 + 0x60);
        thunk_FUN_1004e439c(puVar1 + 0xf,lVar2 + 0x78);
        thunk_FUN_1004e439c(puVar1 + 0x11,lVar2 + 0x88);
        *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)(lVar2 + 0x98);
        lVar5 = lVar5 + 0xa0;
      } while ((ulong)uVar3 * 0xa0 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_1001428d0(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (long)pvVar1 + 0x18;
      lVar6 = (ulong)*param_1 * 0x38;
      lVar5 = (long)pvVar2 + 0x18;
      do {
        FUN_10003330c(lVar4 + -0x18,lVar5 + -0x18);
        FUN_10003330c(lVar4,lVar5);
        *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar5 + 0x38;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar4 = (ulong)*param_1 * 0x38;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x38;
          lVar4 = lVar4 + -0x38;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




undefined8 * FUN_1001429cc(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0xffffffffffffffff;
  uVar2 = FUN_100142a2c(param_2);
  *(int *)param_1 = (int)uVar2;
  uVar1 = FUN_100142ae4(uVar2,param_2 + 4,param_2 + 0xc,0x200,0x200);
  *(undefined4 *)((long)param_1 + 4) = uVar1;
  param_1[1] = *(undefined8 *)(param_2 + 4);
  param_1[2] = *(undefined8 *)(param_2 + 0xc);
  return param_1;
}




undefined8 FUN_100142a2c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_238 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_10065f84c();
  plVar5 = *(long **)(param_1 + 0x18);
  puVar3 = (undefined8 *)*plVar5;
  while (puVar3 != (undefined8 *)0x0) {
    plVar4 = (long *)*puVar3;
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        local_238[uVar2 & 0xffffffff] = *puVar3;
        puVar3 = (undefined8 *)plVar4[uVar2 + 1];
        uVar2 = uVar2 + 1;
      } while (puVar3 != (undefined8 *)0x0);
    }
    FUN_10065f900(uVar1,local_238,uVar2);
    plVar5 = plVar5 + 1;
    puVar3 = (undefined8 *)*plVar5;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}




undefined8
FUN_100142ae4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar1 = FUN_10065fae8(param_1,param_4,param_5);
  local_38 = *param_2;
  local_40 = CONCAT44((float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_38 >> 0x20),
                      (float)*param_3 - (float)local_38);
  FUN_10065fc8c(param_1,uVar1,&local_38,&local_40);
  return uVar1;
}




void FUN_100142b54(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = FUN_1010aed34();
  uVar2 = FUN_10065fd70(*param_1,param_1[1]);
  FUN_1010b1f6c(uVar1,"FogOfWar.Texture",0,uVar2);
  fVar4 = (float)param_1[2];
  fVar5 = (float)param_1[5];
  uVar2 = NEON_rev64(*(undefined8 *)(param_1 + 3),4);
  uVar6 = NEON_fmov(0x3f800000,4);
  fVar7 = (float)uVar6 / ((float)uVar2 - fVar4);
  fVar8 = (float)((ulong)uVar6 >> 0x20) / ((float)((ulong)uVar2 >> 0x20) - fVar5);
  puVar3 = (undefined8 *)FUN_1010b1de8(uVar1,"FogOfWar.TranslateAndScale",0);
  *puVar3 = CONCAT44(fVar8 * -fVar5,fVar7 * -fVar4);
  puVar3[1] = CONCAT44(fVar8,fVar7);
  return;
}




void FUN_100142be4(undefined8 param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_10065f424();
  if (iVar1 != 0) {
    pvVar2 = operator_new(0x18);
    DAT_101d234f8 = FUN_1001429cc(pvVar2,param_1);
  }
  return;
}




void FUN_100142c20(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_101d234f8;
  if (DAT_101d234f8 != (undefined4 *)0x0) {
    FUN_10065f894(*DAT_101d234f8);
    operator_delete(puVar1);
    DAT_101d234f8 = (undefined4 *)0x0;
  }
  return;
}




void FUN_100142c58(void)

{
  int iVar1;
  
  iVar1 = FUN_10065f424();
  if (iVar1 != 0) {
    FUN_100126c4c();
    return;
  }
  return;
}




bool FUN_100142c78(void)

{
  return DAT_101d234f8 != 0;
}




void FUN_100142c8c(uint param_1)

{
  if (DAT_101d234f8 != (undefined4 *)0x0) {
    FUN_10065f8e4(*DAT_101d234f8,4 << (ulong)(param_1 & 0x1f));
    return;
  }
  return;
}




void FUN_100142cb0(void)

{
  if (DAT_101d234f8 != (undefined4 *)0x0) {
    FUN_10065f8e4(*DAT_101d234f8,0x3fff8);
    return;
  }
  return;
}




void FUN_100142ccc(void)

{
  if (DAT_101d234f8 != 0) {
    FUN_10065f42c();
    return;
  }
  return;
}




void FUN_100142ce0(undefined8 param_1)

{
  if (DAT_101d234f8 != (undefined4 *)0x0) {
    FUN_10065fd38(*DAT_101d234f8,DAT_101d234f8[1],param_1);
    return;
  }
  return;
}




void FUN_100142cfc(void)

{
  if (DAT_101d234f8 != 0) {
    FUN_100142b54();
    return;
  }
  return;
}




uint FUN_100142d10(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = FUN_100345bbc();
  uVar1 = *(uint *)(param_1 + 0x2f4);
  iVar2 = *(int *)(param_1 + 0x260);
  iVar4 = FUN_10034ee90();
  return (uint)(iVar2 == iVar4) | (uVar1 & 1) << 1 | 4 << (ulong)(uVar3 & 0x1f);
}




undefined8 FUN_100142d60(void)

{
  undefined8 uVar1;
  
  if (DAT_101d234f8 != (undefined4 *)0x0) {
    uVar1 = FUN_10065fd90(*DAT_101d234f8,DAT_101d234f8[1]);
    return uVar1;
  }
  return 0;
}




void FUN_100142d7c(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  
  if (DAT_101d234f8 != 0) {
    fVar1 = *(float *)(DAT_101d234f8 + 8);
    uVar4 = NEON_rev64(*(undefined8 *)(DAT_101d234f8 + 0xc),4);
    fVar2 = *(float *)(DAT_101d234f8 + 0x14);
    uVar6 = NEON_fmov(0x3f800000,4);
    fVar3 = (float)uVar6 / ((float)uVar4 - fVar1);
    fVar5 = (float)((ulong)uVar6 >> 0x20) / ((float)((ulong)uVar4 >> 0x20) - fVar2);
    *param_2 = fVar3;
    param_2[1] = fVar5;
    *param_1 = CONCAT44(fVar5 * -fVar2,fVar3 * -fVar1);
  }
  return;
}




void FUN_100142dc4(long param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_10015d3f8();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x20) == 0)) {
      *(undefined8 *)(param_1 + 0x18) = param_3;
      *(code **)(param_1 + 0x20) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar2 = FUN_10015d3ec();
      lVar3 = FUN_10015d3ec();
      FUN_1001676fc(uVar2,lVar3 + 0x5478,param_2);
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100142e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_100142e60(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10015d3f8();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) {
      *(undefined8 *)(param_1 + 0x30) = param_2;
      *(code **)(param_1 + 0x38) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x40) = 0;
      FUN_10015d3ec();
      FUN_100167754();
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100142eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_100142ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_10015d3f8();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x50) == 0)) {
      *(undefined8 *)(param_1 + 0x48) = param_4;
      *(code **)(param_1 + 0x50) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar2 = FUN_10015d3ec();
      lVar3 = FUN_10015d3ec();
      FUN_1001674f4(uVar2,param_2,lVar3 + 0x5478,param_3);
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100142f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_100142f78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_10015d3f8();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x68) == 0)) {
      *(undefined8 *)(param_1 + 0x60) = param_4;
      *(code **)(param_1 + 0x68) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar2 = FUN_10015d3ec();
      lVar3 = FUN_10015d3ec();
      FUN_100167574(uVar2,param_2,lVar3 + 0x5478,param_3);
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100142fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_10014301c(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10015d3f8();
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    if ((*(long *)(param_1 + 0x90) == 0) || (*(long *)(param_1 + 0x98) == 0)) {
      *(undefined8 *)(param_1 + 0x90) = param_2;
      *(code **)(param_1 + 0x98) = UNRECOVERED_JUMPTABLE;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      FUN_10015d3ec();
      FUN_100167790();
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100143070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}




void FUN_100143090(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  
  uVar1 = FUN_10015d3f8();
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001430ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(2);
    return;
  }
  if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(code **)(param_1 + 0x80) = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_10015d3ec();
  FUN_1001677cc();
  return;
}




void FUN_10014310c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x44) == '\0') {
    (**(code **)(param_1 + 0x20))(0);
  }
  else {
    (**(code **)(param_1 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_100143798(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100143f70(param_1 + 0xd0);
  uVar1 = FUN_100143150(param_2,param_1 + 0xd0);
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_1 + 0x38))(0);
  }
  else {
    (**(code **)(param_1 + 0x30))();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}




void FUN_100143800(long param_1,long param_2)

{
  void *pvVar1;
  code *pcVar2;
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *puStack_28;
  
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_30 = *(undefined8 **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_30 = (undefined8 *)(param_2 + 0x28);
  }
  local_78 = local_80;
  puStack_28 = local_30;
  FUN_1000f7bd0(&local_98,&local_30);
  if ((local_40 == 0) && (local_88 == 4)) {
    local_30 = (undefined8 *)0x0;
    puStack_28 = (undefined8 *)0x0;
    FUN_1000ebc54(&local_98,&local_30);
    pcVar2 = *(code **)(param_1 + 0x90);
    FUN_100143d54(auStack_a8,&local_30);
    (*pcVar2)(auStack_a8);
    FUN_1000ec1cc(auStack_a8,1);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_1000ec1cc(&local_30,1);
  }
  else {
    (**(code **)(param_1 + 0x98))(0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar1 = (void *)FUN_1000f7b54();
    operator_delete(pvVar1);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




void FUN_10014391c(long param_1,long param_2)

{
  void *pvVar1;
  code *pcVar2;
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *puStack_28;
  
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_30 = *(undefined8 **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_30 = (undefined8 *)(param_2 + 0x28);
  }
  local_78 = local_80;
  puStack_28 = local_30;
  FUN_1000f7bd0(&local_98,&local_30);
  if ((local_40 == 0) && (local_88 == 4)) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    local_30 = (undefined8 *)0x0;
    puStack_28 = (undefined8 *)0x0;
    FUN_1000ebc54(&local_98,&local_30);
    pcVar2 = *(code **)(param_1 + 0x78);
    FUN_100143d54(auStack_a8,&local_30);
    (*pcVar2)(auStack_a8);
    FUN_1000ec1cc(auStack_a8,1);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_1000ec1cc(&local_30,1);
  }
  else {
    (**(code **)(param_1 + 0x80))(0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar1 = (void *)FUN_1000f7b54();
    operator_delete(pvVar1);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




void FUN_100143a40(void)

{
  return;
}




void FUN_100143a44(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    (**(code **)(param_1 + 0x50))(0);
  }
  else {
    uVar1 = FUN_10015d3ec();
    lVar2 = FUN_10015d3ec();
    FUN_1001634c4(uVar1,lVar2 + 0x5478,1);
    (**(code **)(param_1 + 0x48))();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}




void FUN_100143aa8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x44) == '\0') {
    (**(code **)(param_1 + 0x68))(0);
  }
  else {
    uVar1 = FUN_10015d3ec();
    lVar2 = FUN_10015d3ec();
    FUN_1001634c4(uVar1,lVar2 + 0x5478,1);
    (**(code **)(param_1 + 0x60))();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}




void FUN_100143b0c(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x138);
  puVar2 = (undefined8 *)FUN_10014f4a0();
  *puVar2 = &PTR_FUN_10145acd0;
  *(undefined8 *)((long)pvVar1 + 0xf8) = 0;
  *(undefined8 *)((long)pvVar1 + 0xf0) = 0;
  *(undefined8 *)((long)pvVar1 + 0x108) = 0;
  *(undefined8 *)((long)pvVar1 + 0x100) = 0;
  *(undefined8 *)((long)pvVar1 + 0x118) = 0;
  *(undefined8 *)((long)pvVar1 + 0x110) = 0;
  *(undefined8 *)((long)pvVar1 + 0x128) = 0;
  *(undefined8 *)((long)pvVar1 + 0x120) = 0;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  *(undefined8 *)((long)pvVar1 + 0x40) = 0;
  *(undefined8 *)((long)pvVar1 + 0x38) = 0;
  *(undefined8 *)((long)pvVar1 + 0x50) = 0;
  *(undefined8 *)((long)pvVar1 + 0x48) = 0;
  *(undefined8 *)((long)pvVar1 + 0x60) = 0;
  *(undefined8 *)((long)pvVar1 + 0x58) = 0;
  *(undefined8 *)((long)pvVar1 + 0x70) = 0;
  *(undefined8 *)((long)pvVar1 + 0x68) = 0;
  *(undefined8 *)((long)pvVar1 + 0x80) = 0;
  *(undefined8 *)((long)pvVar1 + 0x78) = 0;
  *(undefined8 *)((long)pvVar1 + 0x90) = 0;
  *(undefined8 *)((long)pvVar1 + 0x88) = 0;
  *(undefined8 *)((long)pvVar1 + 0xa0) = 0;
  *(undefined8 *)((long)pvVar1 + 0x98) = 0;
  *(undefined8 *)((long)pvVar1 + 0xb0) = 0;
  *(undefined8 *)((long)pvVar1 + 0xa8) = 0;
  *(undefined8 *)((long)pvVar1 + 0xc0) = 0;
  *(undefined8 *)((long)pvVar1 + 0xb8) = 0;
  *(undefined8 *)((long)pvVar1 + 200) = 0;
  FUN_100143f70(puVar2 + 0x1a);
  *(undefined4 *)((long)pvVar1 + 0x130) = 1;
  DAT_101d23500 = pvVar1;
  return;
}




void FUN_100143b90(void)

{
  if (DAT_101d23500 != (long *)0x0) {
    (**(code **)(*DAT_101d23500 + 8))();
  }
  DAT_101d23500 = (long *)0x0;
  return;
}




long FUN_100143bc4(void)

{
  return DAT_101d23500 + 0xd0;
}




void FUN_100143bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100142dc4(DAT_101d23500,param_1,param_2,param_3);
  return;
}




void FUN_100143bec(undefined8 param_1,undefined8 param_2)

{
  FUN_100142e60(DAT_101d23500,param_1,param_2);
  return;
}




void FUN_100143c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100142ed4(DAT_101d23500,param_1,param_2,param_3,param_4);
  return;
}




void FUN_100143c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100142f78(DAT_101d23500,param_1,param_2,param_3,param_4);
  return;
}




void FUN_100143c38(undefined8 param_1,undefined8 param_2)

{
  FUN_10014301c(DAT_101d23500,param_1,param_2);
  return;
}




bool FUN_100143c4c(void)

{
  if (*(long *)(DAT_101d23500 + 0x90) != 0) {
    return *(long *)(DAT_101d23500 + 0x98) != 0;
  }
  return false;
}




void FUN_100143c74(undefined8 param_1,undefined8 param_2)

{
  FUN_100143090(DAT_101d23500,param_1,param_2);
  return;
}




void FUN_100143c88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145acd0;
  FUN_1000ec1cc(param_1 + 0x24,1);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    operator_delete((void *)param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    operator_delete((void *)param_1[0x1e]);
  }
  FUN_100143ebc(param_1 + 0x18,1);
  FUN_10014f51c(param_1);
  return;
}




void FUN_100143cec(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145acd0;
  FUN_1000ec1cc(param_1 + 0x24,1);
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    operator_delete((void *)param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    operator_delete((void *)param_1[0x1e]);
  }
  FUN_100143ebc(param_1 + 0x18,1);
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




uint * FUN_100143d54(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000e71b8(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
      *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar2 + 0x60);
      lVar5 = lVar5 + 0x68;
    } while ((ulong)uVar3 * 0x68 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




long FUN_100143e0c(long param_1)

{
  if (*(char *)(param_1 + 0xdf) < '\0') {
    operator_delete(*(void **)(param_1 + 200));
  }
  if (*(char *)(param_1 + 199) < '\0') {
    operator_delete(*(void **)(param_1 + 0xb0));
  }
  if (*(char *)(param_1 + 0xaf) < '\0') {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)(param_1 + 8));
  }
  return param_1;
}




void FUN_100143f70(undefined8 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 4),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 7),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_1000ec1cc(param_1 + 10,0);
  return;
}




void FUN_100144008(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_100144010(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_100144018(undefined8 *param_1,undefined8 param_2)

{
  param_1[0x2e] = param_1;
  *(ushort *)(param_1 + 0x2f) = *(ushort *)(param_1 + 0x2f) & 0x8000 | 0x3ff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[0x30] = param_2;
  param_1[0x31] = 0;
  FUN_100144164(param_1,0,0,0,FUN_1001441b4,0,0,0);
  FUN_1001441e8(param_1,1,FUN_100144278,0,FUN_1001442c4,0,0,0);
  FUN_100144164(param_1,2,0,0,0,0,0,0);
  FUN_100144338(param_1,3,FUN_1001443c8,0,FUN_100144414,0,0,0);
  FUN_10014446c(param_1,0,1);
  FUN_10014446c(param_1,1,2);
  FUN_10014446c(param_1,1,3);
  FUN_10014446c(param_1,2,3);
  FUN_10014446c(param_1,3,0);
  FUN_10014446c(param_1,3,1);
  FUN_1001444f0(param_1,0);
  return param_1;
}




void FUN_100144164(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + ((ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x48) = FUN_100144760;
  *(code **)(lVar1 + 0x50) = FUN_100144760;
  *(code **)(lVar1 + 0x58) = FUN_100144760;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x178) =
       *(ushort *)(param_1 + 0x178) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x178) & 0x83ff;
  return;
}




void FUN_1001441b4(long param_1)

{
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 8))();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  return;
}




void FUN_1001441e8(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(ushort)((ushort)param_1[0x5e] >> 10) & 0x1f;
  param_1[uVar2 * 0x16 + 4] = param_2;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 6) = param_3;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 8) = param_4;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 10) = param_5;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xc) = param_6;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xe) = param_7;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0x10) = param_8;
  *(code **)(param_1 + uVar2 * 0x16 + 0x12) = FUN_100144784;
  *(code **)(param_1 + uVar2 * 0x16 + 0x14) = FUN_1001447b0;
  *(code **)(param_1 + uVar2 * 0x16 + 0x16) = FUN_1001447e0;
  param_1[uVar2 * 0x16 + 0x18] = 0;
  uVar1 = *param_1;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_100116af8(param_1,uVar1,0);
  *(ushort *)(param_1 + 0x5e) =
       (ushort)param_1[0x5e] + 0x400 & 0x7c00 | (ushort)param_1[0x5e] & 0x83ff;
  return;
}




void FUN_100144278(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1010a1ce0();
  fVar2 = *param_2;
  *param_2 = fVar2 - fVar1;
  if (0.0 < fVar2 - fVar1) {
    return;
  }
  FUN_1001444f0(param_1,2);
  return;
}




void FUN_1001442c4(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 == 0) {
    operator_new(0x30);
    lVar1 = thunk_FUN_1001f8b20();
    *(long *)(param_1 + 0x188) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x180) + 0x78))
              (*(long **)(param_1 + 0x180),*(undefined8 *)(lVar1 + 8),1);
    lVar1 = *(long *)(param_1 + 0x188);
  }
  FUN_1001f8c08(lVar1);
  fVar2 = (float)FUN_1002b84b8(*(undefined8 *)(*(long *)(param_1 + 0x188) + 8));
  *param_2 = fVar2 + 0.25;
  return;
}




void FUN_100144338(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(ushort)((ushort)param_1[0x5e] >> 10) & 0x1f;
  param_1[uVar2 * 0x16 + 4] = param_2;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 6) = param_3;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 8) = param_4;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 10) = param_5;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xc) = param_6;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xe) = param_7;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0x10) = param_8;
  *(code **)(param_1 + uVar2 * 0x16 + 0x12) = FUN_10014480c;
  *(code **)(param_1 + uVar2 * 0x16 + 0x14) = FUN_100144838;
  *(code **)(param_1 + uVar2 * 0x16 + 0x16) = FUN_100144868;
  param_1[uVar2 * 0x16 + 0x18] = 0;
  uVar1 = *param_1;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_100116af8(param_1,uVar1,0);
  *(ushort *)(param_1 + 0x5e) =
       (ushort)param_1[0x5e] + 0x400 & 0x7c00 | (ushort)param_1[0x5e] & 0x83ff;
  return;
}




void FUN_1001443c8(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1010a1ce0();
  fVar2 = *param_2;
  *param_2 = fVar2 - fVar1;
  if (0.0 < fVar2 - fVar1) {
    return;
  }
  FUN_1001444f0(param_1,0);
  return;
}




void FUN_100144414(long param_1,float *param_2)

{
  float fVar1;
  
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_1001f90c0();
    fVar1 = (float)FUN_1002b84b8(*(undefined8 *)(*(long *)(param_1 + 0x188) + 8));
    *param_2 = fVar1 + 0.5;
    return;
  }
  FUN_1001444f0(param_1,0);
  return;
}




void FUN_10014446c(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f;
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    uVar1 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_2) goto LAB_1001444a0;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar3 != uVar1);
    uVar1 = 0xffffffff;
LAB_1001444a0:
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_3) {
        if ((int)uVar1 == -1) {
          return;
        }
        param_1 = param_1 + (long)(int)uVar1 * 0x58;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar4 & 0x1f);
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar2 != uVar4);
  }
  return;
}




void FUN_1001444f0(int *param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  if ((uVar2 >> 10 & 0x1f) != 0) {
    uVar3 = 0;
    piVar5 = param_1 + 4;
    do {
      if (*piVar5 == param_2) goto LAB_100144534;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 0x16;
    } while ((uVar2 >> 10 & 0x1f) != uVar3);
  }
  uVar3 = 0x1f;
LAB_100144534:
  uVar4 = (ulong)uVar2 & 0x1f;
  if ((uint)uVar4 == 0x1f) {
    uVar2 = uVar2 & 0xfc1f;
  }
  else {
    if (uVar3 == (uint)uVar4) {
      return;
    }
    if (((uint)param_1[uVar4 * 0x16 + 0x18] >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x5e) = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar4 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar4 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar4 * 0x16 + 0x10),uVar1);
    uVar2 = *(ushort *)(param_1 + 0x5e);
  }
  uVar3 = uVar3 & 0x1f;
  *(ushort *)(param_1 + 0x5e) = (ushort)uVar3 | uVar2 & 0xfc00 | 0x3e0;
  if (uVar3 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100144600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar3 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 0xc),uVar1);
  return;
}




undefined8 * thunk_FUN_100144018(undefined8 *param_1,undefined8 param_2)

{
  param_1[0x2e] = param_1;
  *(ushort *)(param_1 + 0x2f) = *(ushort *)(param_1 + 0x2f) & 0x8000 | 0x3ff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[0x30] = param_2;
  param_1[0x31] = 0;
  FUN_100144164(param_1,0,0,0,FUN_1001441b4,0,0,0);
  FUN_1001441e8(param_1,1,FUN_100144278,0,FUN_1001442c4,0,0,0);
  FUN_100144164(param_1,2,0,0,0,0,0,0);
  FUN_100144338(param_1,3,FUN_1001443c8,0,FUN_100144414,0,0,0);
  FUN_10014446c(param_1,0,1);
  FUN_10014446c(param_1,1,2);
  FUN_10014446c(param_1,1,3);
  FUN_10014446c(param_1,2,3);
  FUN_10014446c(param_1,3,0);
  FUN_10014446c(param_1,3,1);
  FUN_1001444f0(param_1,0);
  return param_1;
}




void thunk_FUN_10014460c(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x5e) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010014464c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + uVar2 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar2 * 0x16 + 6),
             *(undefined8 *)(param_1 + uVar2 * 0x16 + 8),uVar1);
  return;
}




void FUN_10014460c(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x5e) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010014464c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + uVar2 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar2 * 0x16 + 6),
             *(undefined8 *)(param_1 + uVar2 * 0x16 + 8),uVar1);
  return;
}




void FUN_100144650(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10014468c(param_1,1);
  if (iVar1 != 0) {
    FUN_1001444f0(param_1,1);
    return;
  }
  return;
}




uint FUN_10014468c(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x178) & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      piVar5 = (int *)(param_1 + 0x10);
      do {
        if (*piVar5 == param_2) goto LAB_1001446cc;
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 0x16;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_1001446cc:
    if ((uint)uVar3 != uVar1) {
      return *(uint *)(param_1 + uVar2 * 0x58 + 0x60) >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_1001446f4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10014468c(param_1,3);
  if (iVar1 != 0) {
    FUN_1001444f0(param_1,3);
    return;
  }
  return;
}




bool FUN_100144730(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x178) & 0x1f;
  if ((int)uVar1 == 0x1f) {
    return false;
  }
  return *(int *)(param_1 + uVar1 * 0x58 + 0x10) == 2;
}




void FUN_100144760(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(param_1 + ((long)param_3 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x00010014477c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




void FUN_100144784(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x0001001447a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_1001447b0(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  
  *param_4 = 0;
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x0001001447d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_1001447e0(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100144804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_10014480c(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100144830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_100144838(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  
  *param_4 = 0;
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100144860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_100144868(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x00010014488c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




long FUN_100144894(long param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char local_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_thunk_FUN_100144930_10145b068;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_10003330c(puVar1 + 0xf,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x90,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_10001549c(local_38,"MARKET");
  std::string::operator=((string *)(param_1 + 0x30),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




long thunk_FUN_100144894(long param_1)

{
  undefined8 *puVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_thunk_FUN_100144930_10145b068;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_10003330c(puVar1 + 0xf,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x90,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_10001549c(apvStack_38,"MARKET");
  std::string::operator=((string *)(param_1 + 0x30),(string *)apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return param_1;
}




void FUN_100144930(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100144930_10145b068;
  FUN_100127a80(param_1 + 0x15,1);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_100146cfc(param_1 + 0xd,1);
  FUN_100144aa4(param_1 + 0xb,1);
  FUN_100144b1c(param_1 + 9,1);
  FUN_100135628(param_1);
  return;
}




void thunk_FUN_100144930(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100144930_10145b068;
  FUN_100127a80(param_1 + 0x15,1);
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_100146cfc(param_1 + 0xd,1);
  FUN_100144aa4(param_1 + 0xb,1);
  FUN_100144b1c(param_1 + 9,1);
  FUN_100135628(param_1);
  return;
}




void FUN_1001449ac(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100144930();
  operator_delete(pvVar1);
  return;
}




void FUN_1001449c0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_100135c08();
  if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x58) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0x58) * 0x70;
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x70;
        puVar2 = puVar2 + 0xe;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x48) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
      puVar2 = *(undefined8 **)(param_1 + 0x50);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xe8;
        puVar2 = puVar2 + 0x1d;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_100127a80(param_1 + 0xa8,0);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    **(undefined1 **)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x8f) = 0;
  }
  if (*(char *)(param_1 + 0xa7) < '\0') {
    **(undefined1 **)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0xa7) = 0;
  }
  return;
}




void FUN_100144aa4(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x70;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x70;
        puVar2 = puVar2 + 0xe;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100144b1c(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0xe8;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xe8;
        puVar2 = puVar2 + 0x1d;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100144b94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        FUN_1001451a4(param_2,lVar1);
      }
      lVar1 = lVar1 + 0xe8;
      lVar2 = lVar2 + -0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100144bec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 1) {
        FUN_1001451a4(param_2,lVar1);
      }
      lVar1 = lVar1 + 0xe8;
      lVar2 = lVar2 + -0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100144c48(long param_1,string *param_2,string *param_3)

{
  std::string::operator=(param_2,(string *)(param_1 + 0x78));
  std::string::operator=(param_3,(string *)(param_1 + 0x90));
  return;
}




void FUN_100144c80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(int *)(lVar1 + 0xe0) == 4) {
        FUN_1001451a4(param_2,lVar1);
      }
      lVar1 = lVar1 + 0xe8;
      lVar2 = lVar2 + -0xe8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100144cdc(long param_1,undefined8 param_2)

{
  FUN_10012884c(param_2,param_1 + 0xa8);
  return;
}




undefined8 FUN_100144cec(long param_1,byte *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  byte bVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  pbVar2 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar11 = *(long *)(param_1 + 0x50);
    lVar12 = lVar11 + (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      if (*(uint *)(lVar11 + 8) != 0) {
        lVar10 = *(long *)(lVar11 + 0x10);
        lVar13 = lVar10 + (ulong)*(uint *)(lVar11 + 8) * 0xa0;
        do {
          bVar4 = *(byte *)(lVar10 + 0x77);
          sVar3 = *(size_t *)(lVar10 + 0x68);
          if (-1 < (char)bVar4) {
            sVar3 = (ulong)bVar4;
          }
          if (sVar3 == sVar5) {
            pvVar8 = *(void **)(lVar10 + 0x60);
            if ((char)bVar4 < '\0') {
              if ((sVar5 == 0) || (iVar7 = _memcmp(pvVar8,pbVar2,sVar5), iVar7 == 0)) {
LAB_100144df4:
                FUN_100146c30(param_3 + 8,lVar10 + 8);
                std::string::operator=((string *)(param_3 + 0x18),(string *)(lVar10 + 0x18));
                uVar17 = *(undefined8 *)(lVar10 + 0x48);
                uVar16 = *(undefined8 *)(lVar10 + 0x40);
                uVar15 = *(undefined8 *)(lVar10 + 0x58);
                uVar14 = *(undefined8 *)(lVar10 + 0x50);
                uVar18 = *(undefined8 *)(lVar10 + 0x30);
                *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar10 + 0x38);
                *(undefined8 *)(param_3 + 0x30) = uVar18;
                *(undefined8 *)(param_3 + 0x48) = uVar17;
                *(undefined8 *)(param_3 + 0x40) = uVar16;
                *(undefined8 *)(param_3 + 0x58) = uVar15;
                *(undefined8 *)(param_3 + 0x50) = uVar14;
                std::string::operator=((string *)(param_3 + 0x60),(string *)(lVar10 + 0x60));
                FUN_1000153b4(param_3 + 0x78,lVar10 + 0x78);
                FUN_1000153b4(param_3 + 0x88,lVar10 + 0x88);
                *(undefined4 *)(param_3 + 0x98) = *(undefined4 *)(lVar10 + 0x98);
                return 1;
              }
            }
            else {
              if (sVar5 == 0) goto LAB_100144df4;
              if ((uint)*pbVar2 == ((uint)pvVar8 & 0xff)) {
                lVar9 = 0;
                do {
                  if ((ulong)bVar4 - 1 == lVar9) goto LAB_100144df4;
                  lVar1 = lVar10 + lVar9;
                  lVar6 = lVar9 + 1;
                  lVar9 = lVar9 + 1;
                } while (*(byte *)(lVar1 + 0x61) == pbVar2[lVar6]);
              }
            }
          }
          lVar10 = lVar10 + 0xa0;
        } while (lVar10 != lVar13);
      }
      lVar11 = lVar11 + 0xe8;
    } while (lVar11 != lVar12);
  }
  return 0;
}




undefined8 FUN_100144e68(long param_1,byte *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  byte bVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  pbVar2 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar11 = *(long *)(param_1 + 0x50);
    lVar12 = lVar11 + (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      bVar4 = *(byte *)(lVar11 + 0xbf);
      sVar3 = *(size_t *)(lVar11 + 0xb0);
      if (-1 < (char)bVar4) {
        sVar3 = (ulong)bVar4;
      }
      if (sVar3 == sVar5) {
        pvVar9 = *(void **)(lVar11 + 0xa8);
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar7 = _memcmp(pvVar9,pbVar2,sVar5), iVar7 == 0)) {
LAB_100144f4c:
            FUN_1001427dc(param_3 + 8,lVar11 + 8);
            FUN_1000153b4(param_3 + 0x18,lVar11 + 0x18);
            FUN_1000153b4(param_3 + 0x28,lVar11 + 0x28);
            FUN_1000153b4(param_3 + 0x38,lVar11 + 0x38);
            std::string::operator=((string *)(param_3 + 0x48),(string *)(lVar11 + 0x48));
            std::string::operator=((string *)(param_3 + 0x60),(string *)(lVar11 + 0x60));
            std::string::operator=((string *)(param_3 + 0x78),(string *)(lVar11 + 0x78));
            std::string::operator=((string *)(param_3 + 0x90),(string *)(lVar11 + 0x90));
            std::string::operator=((string *)(param_3 + 0xa8),(string *)(lVar11 + 0xa8));
            std::string::operator=((string *)(param_3 + 0xc0),(string *)(lVar11 + 0xc0));
            uVar8 = *(undefined8 *)(lVar11 + 0xde);
            *(undefined8 *)(param_3 + 0xd8) = *(undefined8 *)(lVar11 + 0xd8);
            *(undefined8 *)(param_3 + 0xde) = uVar8;
            return 1;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_100144f4c;
          if ((uint)*pbVar2 == ((uint)pvVar9 & 0xff)) {
            lVar10 = 0;
            do {
              if ((ulong)bVar4 - 1 == lVar10) goto LAB_100144f4c;
              lVar1 = lVar11 + lVar10;
              lVar6 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (*(byte *)(lVar1 + 0xa9) == pbVar2[lVar6]);
          }
        }
      }
      lVar11 = lVar11 + 0xe8;
    } while (lVar11 != lVar12);
  }
  return 0;
}




undefined8 FUN_100144ff0(long param_1,byte *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  size_t sVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  pbVar2 = *(byte **)param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar6 = (ulong)param_2[0x17];
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar11 = *(long *)(param_1 + 0x50);
    lVar12 = lVar11 + (ulong)*(uint *)(param_1 + 0x48) * 0xe8;
    do {
      uVar4 = *(uint *)(lVar11 + 8);
      if (uVar4 != 0) {
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar14 = lVar13 + (ulong)uVar4 * 0xa0;
        do {
          bVar5 = *(byte *)(lVar13 + 0x77);
          sVar3 = *(size_t *)(lVar13 + 0x68);
          if (-1 < (char)bVar5) {
            sVar3 = (ulong)bVar5;
          }
          if (sVar3 == sVar6) {
            if ((char)bVar5 < '\0') {
              if ((sVar6 == 0) ||
                 (iVar8 = _memcmp(*(void **)(lVar13 + 0x60),pbVar2,sVar6), iVar8 == 0)) {
LAB_1001450fc:
                FUN_1001427dc(param_3 + 8,(uint *)(lVar11 + 8));
                FUN_1000153b4(param_3 + 0x18,lVar11 + 0x18);
                FUN_1000153b4(param_3 + 0x28,lVar11 + 0x28);
                FUN_1000153b4(param_3 + 0x38,lVar11 + 0x38);
                std::string::operator=((string *)(param_3 + 0x48),(string *)(lVar11 + 0x48));
                std::string::operator=((string *)(param_3 + 0x60),(string *)(lVar11 + 0x60));
                std::string::operator=((string *)(param_3 + 0x78),(string *)(lVar11 + 0x78));
                std::string::operator=((string *)(param_3 + 0x90),(string *)(lVar11 + 0x90));
                std::string::operator=((string *)(param_3 + 0xa8),(string *)(lVar11 + 0xa8));
                std::string::operator=((string *)(param_3 + 0xc0),(string *)(lVar11 + 0xc0));
                uVar9 = *(undefined8 *)(lVar11 + 0xde);
                *(undefined8 *)(param_3 + 0xd8) = *(undefined8 *)(lVar11 + 0xd8);
                *(undefined8 *)(param_3 + 0xde) = uVar9;
                return 1;
              }
            }
            else {
              if (sVar6 == 0) goto LAB_1001450fc;
              if ((uint)*pbVar2 == ((uint)*(void **)(lVar13 + 0x60) & 0xff)) {
                lVar10 = 0;
                do {
                  if ((ulong)bVar5 - 1 == lVar10) goto LAB_1001450fc;
                  lVar1 = lVar13 + lVar10;
                  lVar7 = lVar10 + 1;
                  lVar10 = lVar10 + 1;
                } while (*(byte *)(lVar1 + 0x61) == pbVar2[lVar7]);
              }
            }
          }
          lVar13 = lVar13 + 0xa0;
        } while (lVar13 != lVar14);
      }
      lVar11 = lVar11 + 0xe8;
    } while (lVar11 != lVar12);
  }
  return 0;
}




void FUN_1001451a4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100147078(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xe8;
  *(undefined ***)(lVar5 + -0xe8) = &PTR_thunk_FUN_1000eb120_10145ac58;
  FUN_1001471f0(lVar5 + -0xe0,param_2 + 8);
  thunk_FUN_1004e439c(lVar5 + -0xd0,param_2 + 0x18);
  thunk_FUN_1004e439c(lVar5 + -0xc0,param_2 + 0x28);
  thunk_FUN_1004e439c(lVar5 + -0xb0,param_2 + 0x38);
  FUN_10003330c(lVar5 + -0xa0,param_2 + 0x48);
  FUN_10003330c(lVar5 + -0x88,param_2 + 0x60);
  FUN_10003330c(lVar5 + -0x70,param_2 + 0x78);
  FUN_10003330c(lVar5 + -0x58,param_2 + 0x90);
  FUN_10003330c(lVar5 + -0x40,param_2 + 0xa8);
  FUN_10003330c(lVar5 + -0x28,param_2 + 0xc0);
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(lVar5 + -10) = *(undefined8 *)(param_2 + 0xde);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_100146834(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_118 [232];
  
  FUN_1000eb06c(auStack_118);
  FUN_10013f79c(param_1,auStack_118,param_2);
  FUN_1000eb120(auStack_118);
  return;
}




void FUN_100146884(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100146d70(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x70;
  *(undefined ***)(lVar5 + -0x70) = &PTR_FUN_10145ac08;
  FUN_10003330c(lVar5 + -0x68,param_2 + 8);
  FUN_10003330c(lVar5 + -0x50,param_2 + 0x20);
  FUN_10003330c(lVar5 + -0x38,param_2 + 0x38);
  FUN_10003330c(lVar5 + -0x20,param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)(lVar5 + -4) = *(undefined2 *)(param_2 + 0x6c);
  *(undefined4 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_100146950(undefined8 param_1,undefined8 param_2)

{
  undefined **local_90;
  void *local_88;
  char local_71;
  void *local_70;
  char local_59;
  void *local_58;
  char local_41;
  void *local_40;
  char local_29;
  
  FUN_100142314(&local_90);
  FUN_10013e924(param_1,&local_90,param_2);
  local_90 = &PTR_FUN_10145ac08;
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  if (local_59 < '\0') {
    operator_delete(local_70);
  }
  if (local_71 < '\0') {
    operator_delete(local_88);
  }
  return;
}




void FUN_1001469e0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100128918(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x58;
  FUN_10003330c(lVar5 + -0x58,param_2);
  thunk_FUN_1004e439c(lVar5 + -0x40,param_2 + 0x18);
  thunk_FUN_1004e439c(lVar5 + -0x30,param_2 + 0x28);
  thunk_FUN_1004e439c(lVar5 + -0x20,param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_100146a9c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  if (uVar5 == param_1[1]) {
    uVar2 = 0;
    if (uVar5 != 0xffffffff) {
      uVar2 = uVar5 + (~uVar5 | 0xfffffff0) + 0x11;
    }
    if (uVar5 < 0x20) {
      uVar2 = uVar5 << 1;
    }
    uVar3 = uVar5 + 1;
    if (uVar5 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100146ea0(param_1,uVar3);
    uVar5 = *param_1;
  }
  *param_1 = uVar5 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar5 + 1) * 0x80;
  *(undefined ***)(lVar1 + -0x80) = &PTR_FUN_10145ac80;
  thunk_FUN_1004e439c(lVar1 + -0x78,param_2 + 8);
  thunk_FUN_1004e439c(lVar1 + -0x68,param_2 + 0x18);
  thunk_FUN_1004e439c(lVar1 + -0x58,param_2 + 0x28);
  FUN_10003330c(lVar1 + -0x48,param_2 + 0x38);
  FUN_10003330c(lVar1 + -0x30,param_2 + 0x50);
  FUN_100146fe0(lVar1 + -0x18,param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(lVar1 + -4) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(lVar1 + -8) = uVar4;
  return;
}




void FUN_100146b7c(undefined8 param_1,undefined8 param_2)

{
  undefined **local_b0 [2];
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  char local_61;
  void *local_60;
  char local_49;
  undefined1 auStack_48 [24];
  
  FUN_100142458(local_b0);
  FUN_1001406e0(param_1,local_b0,param_2);
  local_b0[0] = &PTR_FUN_10145ac80;
  FUN_1001424cc(auStack_48,1);
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  return;
}




void FUN_100146c30(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1001423e4(param_1,1);
    FUN_100142558(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar1 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 5;
      do {
        lVar1 = FUN_10003330c(lVar1,lVar3);
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
        lVar3 = lVar3 + 0x20;
        lVar1 = lVar1 + 0x20;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




undefined8 * FUN_100146cb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1004e313c(param_1 + 3);
  FUN_1004e313c(param_1 + 5);
  FUN_1004e313c(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  return param_1;
}




void FUN_100146cfc(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 7;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x80;
        puVar2 = puVar2 + 0x10;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100146d70(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x70);
    puVar5 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar1 = &PTR_FUN_10145ac08;
        FUN_10003330c(puVar1 + 1,(long)puVar5 + lVar6 + 8);
        FUN_10003330c(puVar1 + 4,(long)puVar5 + lVar6 + 0x20);
        FUN_10003330c(puVar1 + 7,(long)puVar5 + lVar6 + 0x38);
        FUN_10003330c(puVar1 + 10,(long)puVar5 + lVar6 + 0x50);
        uVar3 = *(undefined4 *)((long)puVar5 + lVar6 + 0x68);
        *(undefined2 *)((long)puVar1 + 0x6c) = *(undefined2 *)((long)puVar5 + lVar6 + 0x6c);
        *(undefined4 *)(puVar1 + 0xd) = uVar3;
        lVar6 = lVar6 + 0x70;
      } while ((ulong)uVar2 * 0x70 - lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x70;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0x70;
          puVar5 = puVar5 + 0xe;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_100146ea0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 << 7);
    puVar5 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar1 = &PTR_FUN_10145ac80;
        thunk_FUN_1004e439c(puVar1 + 1,(long)puVar5 + lVar6 + 8);
        thunk_FUN_1004e439c(puVar1 + 3,(long)puVar5 + lVar6 + 0x18);
        thunk_FUN_1004e439c(puVar1 + 5,(long)puVar5 + lVar6 + 0x28);
        FUN_10003330c(puVar1 + 7,(long)puVar5 + lVar6 + 0x38);
        FUN_10003330c(puVar1 + 10,(long)puVar5 + lVar6 + 0x50);
        FUN_100146fe0(puVar1 + 0xd,(long)puVar5 + lVar6 + 0x68);
        uVar3 = *(undefined4 *)((long)puVar5 + lVar6 + 0x78);
        *(undefined1 *)((long)puVar1 + 0x7c) = *(undefined1 *)((long)puVar5 + lVar6 + 0x7c);
        *(undefined4 *)(puVar1 + 0xf) = uVar3;
        lVar6 = lVar6 + 0x80;
      } while ((ulong)uVar2 * 0x80 - lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 7;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0x80;
          puVar5 = puVar5 + 0x10;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




uint * FUN_100146fe0(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001428d0(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_1 + 2) + 0x18;
    lVar4 = (ulong)*param_2 * 0x38;
    lVar3 = *(long *)(param_2 + 2) + 0x18;
    do {
      FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
      FUN_10003330c(lVar2,lVar3);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_100147078(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0xe8);
    puVar5 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar6);
        *puVar1 = &PTR_thunk_FUN_1000eb120_10145ac58;
        FUN_1001471f0(puVar1 + 1,(long)puVar5 + lVar6 + 8);
        thunk_FUN_1004e439c(puVar1 + 3,(long)puVar5 + lVar6 + 0x18);
        thunk_FUN_1004e439c(puVar1 + 5,(long)puVar5 + lVar6 + 0x28);
        thunk_FUN_1004e439c(puVar1 + 7,(long)puVar5 + lVar6 + 0x38);
        FUN_10003330c(puVar1 + 9,(long)puVar5 + lVar6 + 0x48);
        FUN_10003330c(puVar1 + 0xc,(long)puVar5 + lVar6 + 0x60);
        FUN_10003330c(puVar1 + 0xf,(long)puVar5 + lVar6 + 0x78);
        FUN_10003330c(puVar1 + 0x12,(long)puVar5 + lVar6 + 0x90);
        FUN_10003330c(puVar1 + 0x15,(long)puVar5 + lVar6 + 0xa8);
        FUN_10003330c(puVar1 + 0x18,(long)puVar5 + lVar6 + 0xc0);
        uVar4 = *(undefined8 *)((long)puVar5 + lVar6 + 0xd8);
        *(undefined8 *)((long)puVar1 + 0xde) = *(undefined8 *)((long)puVar5 + lVar6 + 0xde);
        puVar1[0x1b] = uVar4;
        lVar6 = lVar6 + 0xe8;
      } while ((ulong)uVar2 * 0xe8 - lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0xe8;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0xe8;
          puVar5 = puVar5 + 0x1d;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




uint * FUN_1001471f0(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100142628(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      *puVar1 = &PTR_FUN_10145ac30;
      lVar2 = lVar6 + lVar5;
      FUN_100142768(puVar1 + 1,lVar2 + 8);
      FUN_10003330c(puVar1 + 3,lVar2 + 0x18);
      uVar9 = *(undefined8 *)(lVar2 + 0x38);
      uVar8 = *(undefined8 *)(lVar2 + 0x30);
      uVar10 = *(undefined8 *)(lVar2 + 0x40);
      uVar12 = *(undefined8 *)(lVar2 + 0x58);
      uVar11 = *(undefined8 *)(lVar2 + 0x50);
      puVar1[9] = *(undefined8 *)(lVar2 + 0x48);
      puVar1[8] = uVar10;
      puVar1[0xb] = uVar12;
      puVar1[10] = uVar11;
      puVar1[7] = uVar9;
      puVar1[6] = uVar8;
      FUN_10003330c(puVar1 + 0xc,lVar2 + 0x60);
      thunk_FUN_1004e439c(puVar1 + 0xf,lVar2 + 0x78);
      thunk_FUN_1004e439c(puVar1 + 0x11,lVar2 + 0x88);
      *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)(lVar2 + 0x98);
      lVar5 = lVar5 + 0xa0;
    } while ((ulong)uVar3 * 0xa0 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




undefined8 * FUN_1001472dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b098;
  FUN_10011eee0();
  FUN_1004ec088(param_1 + 1);
  return param_1;
}




void FUN_100147318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b098;
  FUN_10011eee0();
  FUN_1004ec088(param_1 + 1);
  operator_delete(param_1);
  return;
}




ulong FUN_100147354(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  pvVar1 = operator_new(0x2810);
  uVar2 = FUN_10010cbf8();
  *(undefined8 *)(param_1 + 0x6c8) = uVar2;
  uVar3 = FUN_1004ec0e8(param_1 + 8,pvVar1);
  if ((uVar3 & 1) == 0) {
    if (*(long **)(param_1 + 0x6c8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x6c8) + 8))();
    }
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  else {
    FUN_10011fb28();
  }
  return uVar3;
}




void FUN_1001473bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_1004ec32c(lVar1);
  if ((uVar2 & 1) == 0) {
    FUN_1004ec23c(lVar1);
  }
  FUN_1004ec0f8(lVar1);
  if (*(long **)(param_1 + 0x6c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6c8) + 8))();
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  FUN_10011eee0();
  return;
}




undefined8 FUN_100147410(long param_1)

{
  undefined8 uVar1;
  undefined8 *******pppppppuVar2;
  undefined1 local_3d;
  int local_3c;
  undefined8 ******local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *******)0x0;
  local_30 = 0;
  local_28 = 0;
  local_3c = 0;
  local_3d = 1;
  FUN_10014e2cc(&local_38,&local_3c,&local_3d);
  if (local_28 < 0) {
    pppppppuVar2 = (undefined8 *******)local_38;
    if (local_30 == 0 || local_3c == 0) {
      uVar1 = 0;
      goto LAB_1001474ac;
    }
  }
  else {
    if (local_28._7_1_ == '\0' || local_3c == 0) {
      return 0;
    }
    pppppppuVar2 = &local_38;
  }
  uVar1 = FUN_1004ec13c(param_1 + 8,pppppppuVar2,local_3c,0,0);
  if (-1 < local_28) {
    return uVar1;
  }
LAB_1001474ac:
  operator_delete(local_38);
  return uVar1;
}




void FUN_1001474c8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004ec32c(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004ec23c(param_1 + 8);
  return;
}




void FUN_100147500(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  param_1 = param_1 + 8;
  uVar2 = FUN_1004ec2f8(param_1);
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_1004ec2c4(param_1), iVar1 == 0)) {
    return;
  }
  FUN_1004ec368(0,0xbf800000,param_1);
  FUN_1004ec6b8(param_1);
  return;
}




undefined8 FUN_100147554(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_1004ec2f8(param_1 + 1);
  if ((int)uVar1 != 0) {
    uVar2 = FUN_1004ec8f4(param_1 + 1,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
      FUN_1001051fc();
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}




undefined8 * FUN_1001475c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b130;
  FUN_10011fac8();
  return param_1;
}




void FUN_1001475f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b130;
  FUN_10011fac8();
  operator_delete(param_1);
  return;
}




undefined8 FUN_100147628(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  return 1;
}




void FUN_100147640(void)

{
  return;
}




void FUN_100147644(long param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_10011e878();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}




void FUN_100147674(long param_1)

{
  int iVar1;
  float fVar2;
  float local_24;
  
  if (*(int *)(param_1 + 8) != 2) {
    if (*(int *)(param_1 + 8) == 1) {
      fVar2 = (float)FUN_1010a1cd4();
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar2;
    }
    if (*(char *)(param_1 + 0x18) != '\0') goto LAB_1001476c0;
    fVar2 = *(float *)(param_1 + 0x14);
    while (fVar2 <= *(float *)(param_1 + 0x10)) {
      FUN_100123fa0(param_1 + 0x19,*(undefined4 *)(param_1 + 0x81c));
      *(undefined1 *)(param_1 + 0x18) = 1;
      if (*(int *)(param_1 + 8) == 2) {
        return;
      }
LAB_1001476c0:
      iVar1 = FUN_10011e798(param_1 + 0x19,param_1 + 0x81c,&local_24,1);
      if (iVar1 == 0) {
        return;
      }
      *(float *)(param_1 + 0x14) = local_24;
      *(undefined1 *)(param_1 + 0x18) = 0;
      fVar2 = local_24;
    }
  }
  return;
}




undefined8 FUN_100147720(void)

{
  return 1;
}




undefined8 FUN_100147728(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}




undefined8 FUN_10014773c(long param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  return 1;
}




undefined8 FUN_10014774c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10011fb38();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return 1;
}




undefined8 FUN_100147774(int param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  thunk_FUN_1004e24b0();
  FUN_1004e3004(&DAT_101e3a728);
  if (param_1 == 1) {
    plVar1 = operator_new(0x820);
    *plVar1 = (long)&PTR_FUN_10145b130;
    *(undefined4 *)(plVar1 + 1) = 0;
    plVar1[2] = 0;
    *(undefined1 *)(plVar1 + 3) = 1;
    FUN_10011f210();
    DAT_101e3a730 = plVar1;
  }
  else if (param_1 == 0) {
    plVar1 = operator_new(0x6d0);
    *plVar1 = (long)&PTR_FUN_10145b098;
    FUN_1004ebfcc(plVar1 + 1);
    plVar1[0xd9] = 0;
    FUN_10011fb00();
    DAT_101e3a730 = plVar1;
  }
  else if (DAT_101e3a730 == (long *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*DAT_101e3a730 + 0x10))(DAT_101e3a730);
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100147834(void)

{
  FUN_100148f60();
  (**(code **)(*DAT_101e3a730 + 0x18))();
  DAT_101e3a6e8 = 0;
  _DAT_101e3a6f0 = 0;
  DAT_101e3a700 = 0;
  _DAT_101e3a6f8 = 0;
  _DAT_101e3a70c = 0;
  _DAT_101e3a71c = 0;
  _DAT_101e3a714 = 0;
  if (DAT_101e3a730 != (long *)0x0) {
    (**(code **)(*DAT_101e3a730 + 8))();
  }
  DAT_101e3a730 = (long *)0x0;
  thunk_FUN_1004e24bc();
  return;
}




void FUN_10014789c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001001478ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x20))();
  return;
}




void FUN_1001478b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001001478c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x28))();
  return;
}




void FUN_1001478c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001001478d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x30))();
  return;
}




void FUN_1001478d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001001478e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x38))();
  return;
}




void FUN_1001478ec(void)

{
  (**(code **)(*DAT_101e3a730 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000100147920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x10))();
  return;
}




void FUN_100147924(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100147934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x40))();
  return;
}




void FUN_100147938(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100147950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x68))(DAT_101e3a730,param_1,param_2);
  return;
}




void FUN_100147954(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100147968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x78))(DAT_101e3a730,param_1);
  return;
}




void FUN_10014796c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010014797c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x80))();
  return;
}




void FUN_100147980(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100147990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x58))();
  return;
}




void FUN_100147994(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001001479a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x48))();
  return;
}




void FUN_1001479a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001001479b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x50))();
  return;
}




void FUN_1001479bc(void)

{
  uint64_t uVar1;
  
  uVar1 = _mach_absolute_time();
  FUN_10034b570((double)((uVar1 - DAT_101e3a728) * DAT_101d91638) * 1e-09);
  return;
}




void FUN_1001479fc(float param_1)

{
  uint64_t uVar1;
  double dVar2;
  
  uVar1 = _mach_absolute_time();
  dVar2 = -((double)((uVar1 - DAT_101e3a728) * DAT_101d91638) * -1e-09) - (double)param_1;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  FUN_100147a60((float)dVar2,&DAT_101e3a6e8);
  return;
}




void FUN_100147a60(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = *(int *)(param_2 + 0xc);
  uVar3 = *(uint *)(param_2 + 0x10);
  *(float *)(param_2 + (ulong)uVar3 * 4) = param_1;
  iVar1 = 0;
  if (uVar3 + 1 < 3) {
    iVar1 = uVar3 + 1;
  }
  *(int *)(param_2 + 0x10) = iVar1;
  if (iVar2 != 3) {
    *(int *)(param_2 + 0xc) = iVar2 + 1;
  }
  uVar7 = NEON_fminnm(param_1,*(undefined4 *)(param_2 + 0x14));
  *(undefined4 *)(param_2 + 0x14) = uVar7;
  fVar8 = param_1;
  if (param_1 <= *(float *)(param_2 + 0x18)) {
    fVar8 = *(float *)(param_2 + 0x18);
  }
  *(float *)(param_2 + 0x18) = fVar8;
  fVar8 = *(float *)(param_2 + 0x1c);
  fVar9 = *(float *)(param_2 + 0x20);
  bVar4 = false;
  bVar5 = true;
  bVar6 = false;
  if (fVar8 <= fVar9) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar8) && !NAN(param_1)) {
      bVar4 = fVar8 < param_1;
      bVar5 = fVar8 == param_1;
      bVar6 = false;
    }
  }
  if (!bVar5 && bVar4 == bVar6) {
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  }
  bVar4 = false;
  bVar5 = false;
  if (fVar8 <= fVar9) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar9) && !NAN(param_1)) {
      bVar4 = fVar9 < param_1;
      bVar5 = false;
    }
  }
  if (bVar4 != bVar5) {
    *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
  }
  uVar3 = *(int *)(param_2 + 0x2c) + 1;
  *(uint *)(param_2 + 0x2c) = uVar3;
  fVar8 = *(float *)(param_2 + 0x30);
  *(float *)(param_2 + 0x38) = fVar8;
  fVar9 = (param_1 - fVar8) / (float)uVar3 + fVar8;
  *(float *)(param_2 + 0x30) = fVar9;
  *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + (param_1 - fVar8) * (param_1 - fVar9);
  return;
}




void FUN_100147b08(void)

{
  FUN_100147b18(&DAT_101e3a6e8,3);
  return;
}




float FUN_100147b18(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  if (0 < (int)(uVar2 - uVar1)) {
    fVar6 = 0.0;
    iVar4 = uVar2 - uVar1;
    if (iVar4 != 0 && (int)uVar1 <= (int)uVar2) {
      uVar5 = *(int *)(param_1 + 0x10) + uVar1;
      fVar6 = 0.0;
      do {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        fVar6 = *(float *)(param_1 + (ulong)(uVar5 - uVar3 * uVar2) * 4) + fVar6;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    return fVar6 / (float)(int)(uVar2 - uVar1);
  }
  return -1.0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100147b78(void)

{
  DAT_101e3a6e8 = 0;
  _DAT_101e3a6f0 = 0;
  DAT_101e3a700 = 0;
  _DAT_101e3a6f8 = 0;
  _DAT_101e3a70c = 0;
  _DAT_101e3a71c = 0;
  _DAT_101e3a714 = 0;
  return;
}




void FUN_100147b9c(float param_1,float param_2)

{
  DAT_101e3a704._0_4_ = 0.0;
  if (param_1 <= param_2) {
    DAT_101e3a704._0_4_ = param_1;
  }
  DAT_101e3a704._4_4_ = -1.0;
  if (param_1 <= param_2) {
    DAT_101e3a704._4_4_ = param_2;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100147bc0(undefined4 *param_1,int *param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  
  *param_1 = DAT_101e3a700;
  *param_2 = DAT_101e3a710 + DAT_101e3a70c;
  *param_3 = _DAT_101e3a718;
  fVar1 = 0.0;
  if (1 < DAT_101e3a714) {
    fVar1 = SQRT(DAT_101e3a71c / (float)DAT_101e3a714);
  }
  *param_4 = fVar1;
  return;
}




void FUN_100147c10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100147c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x60))(DAT_101e3a730,param_1);
  return;
}




void FUN_100147c28(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100147c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e3a730 + 0x70))();
  return;
}




void FUN_100147c4c(long param_1)

{
  FUN_1004ec2c4(param_1 + 8);
  return;
}




void FUN_100147c54(long param_1)

{
  FUN_1004ec2f8(param_1 + 8);
  return;
}




undefined8 FUN_100147c5c(void)

{
  return 0;
}




undefined8 FUN_100147c64(void)

{
  return 0;
}




undefined8 FUN_100147c6c(void)

{
  return 0;
}




bool FUN_100147c74(undefined8 param_1,int param_2)

{
  return param_2 == 0;
}




undefined8 FUN_100147c80(void)

{
  return 0;
}




void FUN_100147c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100147c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6c8) + 0x48))();
  return;
}




void FUN_100147c98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100147ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6c8) + 0x50))();
  return;
}




undefined8 FUN_100147ca8(void)

{
  return 0;
}




bool FUN_100147cb0(long param_1)

{
  return *(int *)(param_1 + 8) == 1;
}




undefined8 FUN_100147cc0(void)

{
  return 1;
}




bool FUN_100147cc8(undefined8 param_1,int param_2)

{
  return param_2 == 1;
}




void FUN_100147cd4(void)

{
  return;
}




undefined8 FUN_100147cd8(void)

{
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100147ce0(void)

{
  DAT_101e3a558 = 0xff;
  DAT_101e3a55a = 0xffff;
  DAT_101e3a55c = 0xffff;
  DAT_101e3a55e = 0xffbc9c44;
  DAT_101e3a562 = 0xff1166f2;
  DAT_101e3a566 = 0xffe0e0e0;
  DAT_101e3a56a = 0xffa0a0a0;
  DAT_101e3a56e = 0xff8c8c8c;
  DAT_101e3a572 = 0xff322213;
  DAT_101e3a576 = 0xff091911;
  DAT_101e3a57a = 0xff170c19;
  DAT_101e3a57e = 0xff241a14;
  DAT_101e3a582 = 0xff14171c;
  DAT_101e3a586 = 0xff221911;
  DAT_101e3a58a = 0xff1a1416;
  DAT_101e3a58e = 0xff121414;
  DAT_101e3a592 = 0xff1a1809;
  DAT_101e3a596 = 0xff141414;
  DAT_101e3a59a = 0xff141414;
  DAT_101e3a59e = 0xff2929c0;
  DAT_101e3a5a2 = 0xff283082;
  DAT_101e3a5a6 = 0xff5262cc;
  DAT_101e3a5aa = 0xff283082;
  DAT_101e3a5ae = 0xff5262cc;
  DAT_101e3a5b2 = 0xff745c42;
  DAT_101e3a5b6 = 0xff184155;
  DAT_101e3a5ba = 0xff92665e;
  DAT_101e3a5be = 0xffbc9c44;
  DAT_101e3a5c2 = 0xffbbae56;
  DAT_101e3a5c6 = 0xff8b7b01;
  DAT_101e3a5ca = 0xff90b3ef;
  DAT_101e3a5ce = 0xff728ebe;
  DAT_101e3a5d2 = 0xff19459d;
  DAT_101e3a5d6 = 0xff9d877b;
  DAT_101e3a5da = 0xffcbb1a3;
  DAT_101e3a5de = 0xff3f6fb5;
  DAT_101e3a5e2 = 0xffc5c5c5;
  DAT_101e3a5e6 = 0xff4fc1f1;
  DAT_101e3a5ea = 0xff606060;
  DAT_101e3a5ee = 0xffc5ff7b;
  DAT_101e3a5f2 = 0xff5271eb;
  DAT_101e3a5f6 = 0xfffae076;
  DAT_101e3a5fa = 0xff3ac8f6;
  DAT_101e3a5fe = 0xffaaaaaa;
  DAT_101e3a602 = 0xffe19400;
  DAT_101e3a606 = 0xffe19400;
  DAT_101e3a60a = 0xffe550b2;
  DAT_101e3a60e = 0xfff22ae8;
  DAT_101e3a612 = 0xff005ae1;
  DAT_101e3a616 = 0xff1addfa;
  DAT_101e3a61a = 0xff2424b3;
  DAT_101e3a61e = 0xff2424b3;
  DAT_101e3a622 = 0xff646464;
  DAT_101e3a626 = 0xff92665e;
  DAT_101e3a62a = 0xff646037;
  DAT_101e3a634 = 0xff1111a1;
  DAT_101e3a638 = 0xff321ee1;
  DAT_101e3a63c = 0xffc8c8c8;
  DAT_101e3a640 = 0xff321ee1;
  DAT_101e3a64c = 0xff6259b3;
  DAT_101e3a650 = 0xff506e73;
  DAT_101e3a654 = 0xff9dbf86;
  DAT_101e3a630 = 0xffffffff;
  DAT_101e3a658 = 0xffa35244;
  DAT_101e3a644 = 0xff7fe801;
  DAT_101e3a65c = 0xffca828e;
  DAT_101e3a648 = 0xffffffff;
  DAT_101e3a660 = 0xffa6a6a6;
  DAT_101e3a664 = 0xffa6a6a6;
  DAT_101e3a668 = 0xffffffff;
  DAT_101e3a66c = 0xff88ea2f;
  DAT_101e3a670 = 0xff8c8c8c;
  DAT_101e3a674 = 0xffffb400;
  DAT_101e3a678 = 0xffff00ff;
  DAT_101e3a67c = 0xff00aded;
  DAT_101e3a680 = 0xff33d3ff;
  DAT_101e3a684 = 0xff7fe801;
  DAT_101e3a688 = 0xff282828;
  DAT_101e3a68c = 0xfff0f0f0;
  DAT_101e3a690 = 0xffa4781e;
  DAT_101e3a694 = 0xffa6654b;
  DAT_101e3a698 = 0xff93435b;
  DAT_101e3a69c = 0xff387f9c;
  DAT_101e3a6a0 = 0xffa3781e;
  DAT_101e3a6a4 = 0xffffd18a;
  DAT_101e3a6a8 = 0xffff61f7;
  DAT_101e3a6ac = 0xff5de1f2;
  DAT_101e3a6b0 = 0xff80eaff;
  DAT_101e3a6b4 = 0xff32e00e;
  DAT_101e3a6b8 = 0xff5a3c10;
  DAT_101e3a6bc = 0xff330b03;
  DAT_101e3a6c0 = 0xff33031d;
  DAT_101e3a6c4 = 0xff032433;
  DAT_101e3a6c8 = 0xff9e8e8d;
  FUN_10001549c(&DAT_101e3a6d0,"kindred");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e3a6d0,0x100000000);
  _DAT_101e3a6fc = 0;
  _DAT_101e3a6f4 = 0;
  DAT_101e3a704 = 0xbf80000000000000;
  DAT_101e3a6e8 = 0;
  DAT_101e3a6f0 = 0;
  _DAT_101e3a70c = 0;
  _DAT_101e3a71c = 0;
  _DAT_101e3a714 = 0;
  FUN_1004e3004(&DAT_101e3a728);
  return;
}




long FUN_100148410(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0x2000;
  do {
    lVar1 = param_1 + lVar2;
    if (*(char *)(lVar1 + -0x141) < '\0') {
      operator_delete(*(void **)(lVar1 + -0x158));
    }
    if (*(char *)(lVar1 + -0x159) < '\0') {
      operator_delete(*(void **)(param_1 + lVar2 + -0x170));
    }
    lVar2 = lVar2 + -0x200;
  } while (lVar2 != 0);
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 8));
  return param_1;
}




void FUN_10014848c(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  
  FUN_100148808();
  uVar1 = *(int *)(param_1 + 0x1c0) + 1;
  *(uint *)(param_1 + 0x1c0) = uVar1;
  if (99 < uVar1) {
    if (param_3 != 0) {
      uVar20 = FUN_1001488c0(param_1,100);
      uVar21 = FUN_100148920(param_1,100);
      uVar1 = *(uint *)(param_1 + 400);
      if (uVar1 == 0) {
        iVar6 = 0;
        iVar7 = 0;
        iVar8 = 0;
        iVar9 = 0;
        iVar10 = 0;
        iVar11 = 0;
        iVar12 = 0;
        iVar13 = 0;
        iVar14 = 0;
        iVar15 = 0;
        iVar16 = 0;
        iVar17 = 0;
        iVar18 = 0;
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        iVar18 = 0;
        iVar17 = 0;
        iVar16 = 0;
        iVar15 = 0;
        iVar14 = 0;
        iVar13 = 0;
        iVar12 = 0;
        iVar11 = 0;
        iVar10 = 0;
        iVar9 = 0;
        iVar8 = 0;
        iVar7 = 0;
        iVar6 = 0;
        uVar19 = *(uint *)(param_1 + 0x194);
        uVar4 = uVar1;
        do {
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = uVar19 / uVar1;
          }
          fVar22 = *(float *)(param_1 + (ulong)(uVar19 - uVar3 * uVar1) * 4);
          if (fVar22 <= 25.0) {
            iVar5 = iVar5 + 1;
          }
          else if (fVar22 <= 50.0) {
            iVar6 = iVar6 + 1;
          }
          else if (fVar22 <= 75.0) {
            iVar7 = iVar7 + 1;
          }
          else if (fVar22 <= 100.0) {
            iVar8 = iVar8 + 1;
          }
          else if (fVar22 <= 125.0) {
            iVar9 = iVar9 + 1;
          }
          else if (fVar22 <= 150.0) {
            iVar10 = iVar10 + 1;
          }
          else if (fVar22 <= 175.0) {
            iVar11 = iVar11 + 1;
          }
          else if (fVar22 <= 200.0) {
            iVar12 = iVar12 + 1;
          }
          else if (225.0 < fVar22) {
            if (fVar22 <= 250.0) {
              iVar13 = iVar13 + 1;
            }
            else if (275.0 < fVar22) {
              if (fVar22 <= 300.0) {
                iVar14 = iVar14 + 1;
              }
              else if (325.0 < fVar22) {
                if (fVar22 <= 350.0) {
                  iVar15 = iVar15 + 1;
                }
                else if (375.0 < fVar22) {
                  if (fVar22 <= 400.0) {
                    iVar16 = iVar16 + 1;
                  }
                  else if (500.0 < fVar22) {
                    if (fVar22 <= 750.0) {
                      iVar17 = iVar17 + 1;
                    }
                    else if ((1000.0 < fVar22) && (fVar22 <= 2000.0)) {
                      iVar18 = iVar18 + 1;
                    }
                  }
                }
              }
            }
          }
          uVar19 = uVar19 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      plVar2 = (long *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        plVar2 = param_2;
      }
      FUN_100105398(uVar20,uVar21,plVar2,iVar5,iVar6,iVar7,iVar8,iVar9,iVar10,iVar11,iVar12,iVar13,
                    iVar14,iVar15,iVar16,iVar17,iVar18);
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return;
}




void FUN_100148808(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = *(uint *)(param_2 + 0x194);
  *(float *)(param_2 + (ulong)uVar2 * 4) = param_1;
  iVar1 = 0;
  if (uVar2 + 1 < 100) {
    iVar1 = uVar2 + 1;
  }
  *(int *)(param_2 + 0x194) = iVar1;
  if (*(int *)(param_2 + 400) != 100) {
    *(int *)(param_2 + 400) = *(int *)(param_2 + 400) + 1;
  }
  uVar6 = NEON_fminnm(param_1,*(undefined4 *)(param_2 + 0x198));
  *(undefined4 *)(param_2 + 0x198) = uVar6;
  *(float *)(param_2 + 0x19c) = param_1;
  fVar7 = *(float *)(param_2 + 0x1a0);
  fVar8 = *(float *)(param_2 + 0x1a4);
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (fVar7 <= fVar8) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar7) && !NAN(param_1)) {
      bVar3 = fVar7 < param_1;
      bVar4 = fVar7 == param_1;
      bVar5 = false;
    }
  }
  if (!bVar4 && bVar3 == bVar5) {
    *(int *)(param_2 + 0x1a8) = *(int *)(param_2 + 0x1a8) + 1;
  }
  bVar3 = false;
  bVar4 = false;
  if (fVar7 <= fVar8) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8) && !NAN(param_1)) {
      bVar3 = fVar8 < param_1;
      bVar4 = false;
    }
  }
  if (bVar3 != bVar4) {
    *(int *)(param_2 + 0x1ac) = *(int *)(param_2 + 0x1ac) + 1;
  }
  uVar2 = *(int *)(param_2 + 0x1b0) + 1;
  *(uint *)(param_2 + 0x1b0) = uVar2;
  fVar7 = *(float *)(param_2 + 0x1b4);
  *(float *)(param_2 + 0x1bc) = fVar7;
  fVar8 = (param_1 - fVar7) / (float)uVar2 + fVar7;
  *(float *)(param_2 + 0x1b4) = fVar8;
  *(float *)(param_2 + 0x1b8) = *(float *)(param_2 + 0x1b8) + (param_1 - fVar7) * (param_1 - fVar8);
  return;
}




float FUN_1001488c0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 400);
  uVar1 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  if (0 < (int)(uVar2 - uVar1)) {
    fVar6 = 0.0;
    iVar4 = uVar2 - uVar1;
    if (iVar4 != 0 && (int)uVar1 <= (int)uVar2) {
      uVar5 = *(int *)(param_1 + 0x194) + uVar1;
      fVar6 = 0.0;
      do {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        fVar6 = *(float *)(param_1 + (ulong)(uVar5 - uVar3 * uVar2) * 4) + fVar6;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    return fVar6 / (float)(int)(uVar2 - uVar1);
  }
  return -1.0;
}




float FUN_100148920(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = (float)FUN_1001488c0();
  uVar2 = *(uint *)(param_1 + 400);
  uVar1 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  if ((int)(uVar2 - uVar1) < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar7 = 0.0;
    iVar4 = uVar2 - uVar1;
    if (iVar4 != 0 && (int)uVar1 <= (int)uVar2) {
      uVar5 = *(int *)(param_1 + 0x194) + uVar1;
      fVar7 = 0.0;
      do {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        fVar8 = *(float *)(param_1 + (ulong)(uVar5 - uVar3 * uVar2) * 4) - fVar6;
        fVar7 = fVar7 + fVar8 * fVar8;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    fVar6 = SQRT(fVar7 / (float)(int)(uVar2 - uVar1));
  }
  return fVar6;
}




long FUN_1001489a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_1004e4464(param_1 + 8,0);
  FUN_1004e4464(param_1 + 0x48,0);
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 3000;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 200) = 0;
    *(undefined8 *)(lVar1 + 0x260) = 0;
    *(undefined8 *)(lVar1 + 600) = 0;
    *(undefined8 *)(lVar1 + 0x268) = 0xbf80000000000000;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    *(undefined8 *)(lVar1 + 0xd8) = 0;
    *(undefined8 *)(lVar1 + 0xf0) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    *(undefined8 *)(lVar1 + 0x100) = 0;
    *(undefined8 *)(lVar1 + 0xf8) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x108) = 0;
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined8 *)(lVar1 + 0x170) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    *(undefined8 *)(lVar1 + 0x180) = 0;
    *(undefined8 *)(lVar1 + 0x178) = 0;
    *(undefined8 *)(lVar1 + 400) = 0;
    *(undefined8 *)(lVar1 + 0x188) = 0;
    *(undefined8 *)(lVar1 + 0x1a0) = 0;
    *(undefined8 *)(lVar1 + 0x198) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined8 *)(lVar1 + 0x1a8) = 0;
    *(undefined8 *)(lVar1 + 0x1c0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
    *(undefined8 *)(lVar1 + 0x1d0) = 0;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined8 *)(lVar1 + 0x1e0) = 0;
    *(undefined8 *)(lVar1 + 0x1d8) = 0;
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
    *(undefined8 *)(lVar1 + 0x200) = 0;
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
    *(undefined8 *)(lVar1 + 0x210) = 0;
    *(undefined8 *)(lVar1 + 0x208) = 0;
    *(undefined8 *)(lVar1 + 0x220) = 0;
    *(undefined8 *)(lVar1 + 0x218) = 0;
    *(undefined8 *)(lVar1 + 0x230) = 0;
    *(undefined8 *)(lVar1 + 0x228) = 0;
    *(undefined8 *)(lVar1 + 0x240) = 0;
    *(undefined8 *)(lVar1 + 0x238) = 0;
    *(undefined8 *)(lVar1 + 0x250) = 0;
    *(undefined8 *)(lVar1 + 0x248) = 0;
    *(undefined4 *)(lVar1 + 0x288) = 0;
    *(undefined8 *)(lVar1 + 0x280) = 0;
    lVar2 = lVar2 + 0x200;
    *(undefined8 *)(lVar1 + 0x278) = 0;
    *(undefined8 *)(lVar1 + 0x270) = 0;
  } while (lVar2 != 0x2000);
  *(undefined1 *)(param_1 + 0x2092) = 0;
  return param_1;
}




void FUN_100148a6c(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_1004ec5bc(param_2);
  return;
}




void FUN_100148a7c(uint param_1)

{
  if (param_1 < 0x3e9) {
    param_1 = 1000;
  }
  DAT_101e3a938 = 1;
  DAT_101e3a93c = param_1;
  FUN_1004e44e8(&DAT_101e3a8b0,FUN_100148ab0,0,0);
  return;
}




undefined8 FUN_100148ab0(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  ulong uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long local_788;
  undefined **local_780;
  char local_778;
  undefined1 auStack_770 [1728];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar20 = (ulong)DAT_101e3a93c;
  FUN_1004ebfcc(auStack_770);
  local_780 = &PTR_FUN_10145b1c8;
  local_778 = '\0';
  iVar11 = FUN_1004ec0e8(auStack_770,&local_780);
  if (iVar11 != 0) {
    FUN_1004e3004(&local_788);
    FUN_1004e3004(&local_788);
    if (DAT_101e3a938 != '\0') {
      dVar21 = (double)NEON_ucvtf(uVar20);
      do {
        uVar13 = _mach_absolute_time();
        lVar9 = local_788;
        lVar7 = DAT_101d91638;
        if (DAT_101e3c942 == 0) {
          uVar15 = uVar13;
          if (DAT_101e3c940 != 0) {
            uVar20 = 0;
            pbVar18 = (byte *)((long)&DAT_101e3a940 + 1);
            do {
              _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
              if (DAT_101e3c940 <= uVar20) {
LAB_100148e58:
                uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
                uVar15 = (uint64_t)uVar12;
                break;
              }
              local_778 = '\0';
              uVar14 = FUN_1004ec2f8(auStack_770);
              if (((uVar14 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
                FUN_1004ec23c(auStack_770);
              }
              puVar1 = &DAT_101e3a940 + uVar20 * 0x40;
              uVar15 = _mach_absolute_time();
              lVar10 = local_788;
              lVar8 = DAT_101d91638;
              bVar6 = (&DAT_101e3a957)[uVar20 * 0x200];
              uVar14 = (ulong)bVar6;
              sVar2 = (&DAT_101e3a948)[uVar20 * 0x40];
              if (-1 < (char)bVar6) {
                sVar2 = uVar14;
              }
              sVar3 = DAT_101d911a0;
              if (-1 < (char)DAT_101d911a8._7_1_) {
                sVar3 = (ulong)DAT_101d911a8._7_1_;
              }
              if (sVar2 == sVar3) {
                puVar19 = (undefined8 *)*puVar1;
                puVar4 = puVar19;
                if (-1 < (char)bVar6) {
                  puVar4 = puVar1;
                }
                pbVar16 = DAT_101d91198;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  pbVar16 = (byte *)&DAT_101d91198;
                }
                if ((char)bVar6 < '\0') {
                  if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar16,sVar2), iVar11 != 0)) {
                    iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                    goto joined_r0x000100148cf0;
                  }
                }
                else if (sVar2 != 0) {
                  pbVar17 = pbVar18;
                  if ((uint)*pbVar16 == ((uint)puVar19 & 0xff)) {
                    do {
                      uVar14 = uVar14 - 1;
                      pbVar16 = pbVar16 + 1;
                      if (uVar14 == 0) goto LAB_100148e34;
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar5 == *pbVar16);
                    goto LAB_100148cb8;
                  }
                  iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                  puVar19 = puVar1;
joined_r0x000100148cf0:
                  if (0 < iVar11) goto LAB_100148d14;
                }
              }
              else {
LAB_100148cb8:
                iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                if (iVar11 < 1) goto LAB_100148e34;
                puVar19 = puVar1;
                if ((char)bVar6 < '\0') {
                  puVar19 = (undefined8 *)*puVar1;
                }
LAB_100148d14:
                iVar11 = FUN_1004ec13c(auStack_770,puVar19,iVar11,0,0);
                if (iVar11 != 0) {
                  dVar23 = (double)((uVar15 - lVar10) * lVar8) * 1e-09;
                  do {
                    if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                    FUN_1004ec368(0x40000000,0xbf800000,auStack_770);
                  } while ((local_778 == '\0') &&
                          (uVar15 = _mach_absolute_time(),
                          -2.0 <= dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09))
                  ;
                  uVar15 = _mach_absolute_time();
                  if ((dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09 < -2.0) &&
                     (iVar11 = FUN_1004ec994(auStack_770), iVar11 != 0)) {
                    FUN_1004ec23c(auStack_770);
                  }
                  uVar15 = _mach_absolute_time();
                  dVar23 = -((double)((uVar15 - local_788) * DAT_101d91638) * -1e-09) - dVar23;
                  if (dVar23 <= 0.0) {
                    dVar23 = 0.0;
                  }
                  FUN_10014848c((float)(dVar23 * 1000.0),&DAT_101e3a978 + uVar20 * 0x200,puVar1,
                                (&DAT_101e3a974)[uVar20 * 0x200] != '\0' && (DAT_101e3c942 & 1) == 0
                               );
                  (&DAT_101e3ab3c)[uVar20 * 0x80] = (float)(dVar23 * 1000.0);
                  if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                }
              }
LAB_100148e34:
              uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
              uVar15 = (uint64_t)uVar12;
              uVar20 = uVar20 + 1;
              pbVar18 = pbVar18 + 0x200;
            } while (uVar20 < DAT_101e3c940);
          }
          FUN_100149214(uVar15);
        }
        uVar15 = _mach_absolute_time();
        if (DAT_101e3a938 != '\0') {
          dVar23 = (double)NEON_fminnm(dVar21 * 0.001 +
                                       ((double)((uVar13 - lVar9) * lVar7) -
                                       (double)((uVar15 - local_788) * DAT_101d91638)) * 1e-09,
                                       dVar21 * 0.001);
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
          }
          for (; 0.0 < dVar23; dVar23 = dVar23 + -0.1) {
            dVar22 = (double)NEON_fminnm(dVar23,0x3fb999999999999a);
            FUN_1004d29c0((int)(dVar22 * 1000.0));
            if (DAT_101e3a938 == '\0') break;
          }
        }
      } while (DAT_101e3a938 != '\0');
    }
    uVar20 = FUN_1004ec2f8(auStack_770);
    if (((uVar20 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
      FUN_1004ec23c(auStack_770);
    }
    FUN_1004ec0f8(auStack_770);
  }
  FUN_1004ec088(auStack_770);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100148f60(void)

{
  if (DAT_101e3a938 != '\0') {
    DAT_101e3a938 = 0;
    FUN_1004e46a0();
    FUN_100148f94();
    return;
  }
  return;
}




int FUN_100148f94(void)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
  uVar2 = (ulong)DAT_101e3c940;
  if (uVar2 != 0) {
    puVar3 = &DAT_101e3a8b0;
    do {
      *(undefined8 *)(puVar3 + 0xd0) = 0;
      *(undefined8 *)(puVar3 + 200) = 0;
      *(undefined8 *)(puVar3 + 0x250) = 0;
      *(undefined8 *)(puVar3 + 0x248) = 0;
      *(undefined8 *)(puVar3 + 0x260) = 0;
      *(undefined8 *)(puVar3 + 600) = 0;
      *(undefined8 *)(puVar3 + 0x230) = 0;
      *(undefined8 *)(puVar3 + 0x228) = 0;
      *(undefined8 *)(puVar3 + 0x240) = 0;
      *(undefined8 *)(puVar3 + 0x238) = 0;
      *(undefined8 *)(puVar3 + 0x210) = 0;
      *(undefined8 *)(puVar3 + 0x208) = 0;
      *(undefined8 *)(puVar3 + 0x220) = 0;
      *(undefined8 *)(puVar3 + 0x218) = 0;
      *(undefined8 *)(puVar3 + 0x1f0) = 0;
      *(undefined8 *)(puVar3 + 0x1e8) = 0;
      *(undefined8 *)(puVar3 + 0x200) = 0;
      *(undefined8 *)(puVar3 + 0x1f8) = 0;
      *(undefined8 *)(puVar3 + 0x1d0) = 0;
      *(undefined8 *)(puVar3 + 0x1c8) = 0;
      *(undefined8 *)(puVar3 + 0x1e0) = 0;
      *(undefined8 *)(puVar3 + 0x1d8) = 0;
      *(undefined8 *)(puVar3 + 0x1b0) = 0;
      *(undefined8 *)(puVar3 + 0x1a8) = 0;
      *(undefined8 *)(puVar3 + 0x1c0) = 0;
      *(undefined8 *)(puVar3 + 0x1b8) = 0;
      *(undefined8 *)(puVar3 + 400) = 0;
      *(undefined8 *)(puVar3 + 0x188) = 0;
      *(undefined8 *)(puVar3 + 0x1a0) = 0;
      *(undefined8 *)(puVar3 + 0x198) = 0;
      *(undefined8 *)(puVar3 + 0x170) = 0;
      *(undefined8 *)(puVar3 + 0x168) = 0;
      *(undefined8 *)(puVar3 + 0x180) = 0;
      *(undefined8 *)(puVar3 + 0x178) = 0;
      *(undefined8 *)(puVar3 + 0x150) = 0;
      *(undefined8 *)(puVar3 + 0x148) = 0;
      *(undefined8 *)(puVar3 + 0x160) = 0;
      *(undefined8 *)(puVar3 + 0x158) = 0;
      *(undefined8 *)(puVar3 + 0x130) = 0;
      *(undefined8 *)(puVar3 + 0x128) = 0;
      *(undefined8 *)(puVar3 + 0x140) = 0;
      *(undefined8 *)(puVar3 + 0x138) = 0;
      *(undefined8 *)(puVar3 + 0x110) = 0;
      *(undefined8 *)(puVar3 + 0x108) = 0;
      *(undefined8 *)(puVar3 + 0x120) = 0;
      *(undefined8 *)(puVar3 + 0x118) = 0;
      *(undefined8 *)(puVar3 + 0xf0) = 0;
      *(undefined8 *)(puVar3 + 0xe8) = 0;
      *(undefined8 *)(puVar3 + 0x100) = 0;
      *(undefined8 *)(puVar3 + 0xf8) = 0;
      *(undefined8 *)(puVar3 + 0xe0) = 0;
      *(undefined8 *)(puVar3 + 0xd8) = 0;
      *(undefined8 *)(puVar3 + 0x280) = 0;
      *(undefined8 *)(puVar3 + 0x278) = 0;
      *(undefined8 *)(puVar3 + 0x270) = 0;
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 0x200;
    } while (uVar2 != 0);
  }
  DAT_101e3c940 = 0;
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
  return iVar1;
}




int FUN_100149030(long param_1,int param_2,long param_3,undefined1 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 ***local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
  if (((0xf < DAT_101e3c940 || param_1 == 0) || (uVar2 = FUN_1004d2538(param_1), (uVar2 & 1) != 0))
     || (param_2 < 0)) goto LAB_1001491ac;
  FUN_10001549c(&local_58,param_1);
  std::string::operator=
            ((string *)(&DAT_101e3a940 + (ulong)DAT_101e3c940 * 0x40),(string *)&local_58);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
  (&DAT_101e3a970)[(ulong)DAT_101e3c940 * 0x80] = param_2;
  if (param_3 == 0) {
    if ((char)DAT_101d911a8._7_1_ < '\0') {
      uVar2 = DAT_101d911a0;
      puVar4 = DAT_101d91198;
      if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
        FUN_100149474();
      }
    }
    else {
      uVar2 = (ulong)DAT_101d911a8._7_1_;
      puVar4 = &DAT_101d91198;
    }
    if (uVar2 < 0x17) {
      ppppuVar3 = &local_58;
      uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
      if (uVar2 != 0) goto LAB_100149154;
    }
    else {
      uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
      ppppuVar3 = operator_new(uVar5);
      uStack_48 = uVar5 | 0x8000000000000000;
      local_58 = ppppuVar3;
      local_50 = uVar2;
LAB_100149154:
      _memcpy(ppppuVar3,puVar4,uVar2);
    }
    *(undefined1 *)((long)ppppuVar3 + uVar2) = 0;
  }
  else {
    FUN_10001549c(&local_58,param_3);
  }
  std::string::operator=
            ((string *)(&DAT_101e3a958 + (ulong)DAT_101e3c940 * 0x200),(string *)&local_58);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
  (&DAT_101e3a974)[(ulong)DAT_101e3c940 * 0x200] = param_4;
  (&DAT_101e3ab3c)[(ulong)DAT_101e3c940 * 0x80] = 0;
  DAT_101e3c940 = DAT_101e3c940 + 1;
LAB_1001491ac:
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
  return iVar1;
}




void FUN_1001491d4(undefined1 param_1)

{
  DAT_101e3c942 = param_1;
  return;
}




bool FUN_1001491e0(void)

{
  return DAT_101e3c940 != 0;
}




undefined4 FUN_1001491f4(undefined4 param_1)

{
  if (DAT_101e3c940 != 0) {
    param_1 = DAT_101e3ab3c;
  }
  return param_1;
}




int FUN_100149214(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8f8);
  lVar6 = 0;
  uVar7 = 0;
  puVar5 = &DAT_101e3a978;
  piVar8 = &DAT_101e3ab0c;
  do {
    if (uVar7 < DAT_101e3c940) {
      std::string::operator=((string *)(&DAT_101e3c948 + lVar6),(string *)(piVar8 + -0x73));
      std::string::operator=((string *)(&DAT_101e3c960 + lVar6),(string *)(piVar8 + -0x6d));
      uVar9 = FUN_1001488c0(puVar5,100);
      *(undefined4 *)((long)&DAT_101e3c978 + lVar6) = uVar9;
      uVar9 = FUN_100148920(puVar5,100);
      *(undefined4 *)((long)&DAT_101e3c97c + lVar6) = uVar9;
      uVar9 = FUN_100149480(puVar5,100);
      *(undefined4 *)((long)&DAT_101e3c980 + lVar6) = uVar9;
      uVar1 = piVar8[-1];
      if (uVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar2 = (uVar1 + *piVar8) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar9 = *(undefined4 *)(&DAT_101e3a978 + uVar7 * 0x200 + (ulong)(uVar2 - uVar3 * uVar1) * 4)
        ;
      }
      *(undefined4 *)((long)&DAT_101e3c984 + lVar6) = uVar9;
    }
    else {
      std::string::operator=((string *)(&DAT_101e3c948 + lVar6),(string *)&DAT_101d91198);
      std::string::operator=((string *)(&DAT_101e3c960 + lVar6),(string *)&DAT_101d91198);
      *(undefined8 *)((long)&DAT_101e3c978 + lVar6) = 0;
      *(undefined8 *)((long)&DAT_101e3c980 + lVar6) = 0;
    }
    uVar7 = uVar7 + 1;
    lVar6 = lVar6 + 0x40;
    puVar5 = puVar5 + 0x200;
    piVar8 = piVar8 + 0x80;
  } while (lVar6 != 0x400);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8f8);
  return iVar4;
}




void FUN_100149358(void)

{
  return;
}




int FUN_10014935c(long param_1)

{
  string *this;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8f8);
  lVar2 = 0;
  do {
    this = (string *)(param_1 + lVar2);
    std::string::operator=(this,(string *)(&DAT_101e3c948 + lVar2));
    std::string::operator=(this + 0x18,(string *)(&DAT_101e3c960 + lVar2));
    uVar3 = *(undefined8 *)((long)&DAT_101e3c978 + lVar2);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)((long)&DAT_101e3c980 + lVar2);
    *(undefined8 *)(this + 0x30) = uVar3;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x400);
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8f8);
  return iVar1;
}




void FUN_1001493e0(void)

{
  return;
}




undefined8 FUN_1001493e4(void)

{
  return 0;
}




void FUN_1001493ec(void)

{
  return;
}




void FUN_1001493f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}




void FUN_100149418(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}




void FUN_100149440(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}




void FUN_100149468(void)

{
  return;
}




undefined8 FUN_10014946c(void)

{
  return 0;
}




void FUN_100149474(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined4 FUN_100149480(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 400);
  uVar4 = uVar1 - param_2 & ((int)(uVar1 - param_2) >> 0x1f ^ 0xffffffffU);
  uVar5 = 0;
  iVar3 = uVar1 - uVar4;
  if (iVar3 != 0 && (int)uVar4 <= (int)uVar1) {
    uVar4 = *(int *)(param_1 + 0x194) + uVar4;
    do {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar5 = *(undefined4 *)(param_1 + (ulong)(uVar4 - uVar2 * uVar1) * 4);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar5;
}




void FUN_100149528(void)

{
  long lVar1;
  
  DAT_101e3a738 = 0xff;
  DAT_101e3a73a = 0xffff;
  DAT_101e3a73c = 0xffff;
  DAT_101e3a73e = 0xffbc9c44;
  DAT_101e3a742 = 0xff1166f2;
  DAT_101e3a746 = 0xffe0e0e0;
  DAT_101e3a74a = 0xffa0a0a0;
  DAT_101e3a74e = 0xff8c8c8c;
  DAT_101e3a752 = 0xff322213;
  DAT_101e3a756 = 0xff091911;
  DAT_101e3a75a = 0xff170c19;
  DAT_101e3a75e = 0xff241a14;
  DAT_101e3a762 = 0xff14171c;
  DAT_101e3a766 = 0xff221911;
  DAT_101e3a76a = 0xff1a1416;
  DAT_101e3a76e = 0xff121414;
  DAT_101e3a772 = 0xff1a1809;
  DAT_101e3a776 = 0xff141414;
  DAT_101e3a77a = 0xff141414;
  DAT_101e3a77e = 0xff2929c0;
  DAT_101e3a782 = 0xff283082;
  DAT_101e3a786 = 0xff5262cc;
  DAT_101e3a78a = 0xff283082;
  DAT_101e3a78e = 0xff5262cc;
  DAT_101e3a792 = 0xff745c42;
  DAT_101e3a796 = 0xff184155;
  DAT_101e3a79a = 0xff92665e;
  DAT_101e3a79e = 0xffbc9c44;
  DAT_101e3a7a2 = 0xffbbae56;
  DAT_101e3a7a6 = 0xff8b7b01;
  DAT_101e3a7aa = 0xff90b3ef;
  DAT_101e3a7ae = 0xff728ebe;
  DAT_101e3a7b2 = 0xff19459d;
  DAT_101e3a7b6 = 0xff9d877b;
  DAT_101e3a7ba = 0xffcbb1a3;
  DAT_101e3a7be = 0xff3f6fb5;
  DAT_101e3a7c2 = 0xffc5c5c5;
  DAT_101e3a7c6 = 0xff4fc1f1;
  DAT_101e3a7ca = 0xff606060;
  DAT_101e3a7ce = 0xffc5ff7b;
  DAT_101e3a7d2 = 0xff5271eb;
  DAT_101e3a7d6 = 0xfffae076;
  DAT_101e3a7da = 0xff3ac8f6;
  DAT_101e3a7de = 0xffaaaaaa;
  DAT_101e3a7e2 = 0xffe19400;
  DAT_101e3a7e6 = 0xffe19400;
  DAT_101e3a7ea = 0xffe550b2;
  DAT_101e3a7ee = 0xfff22ae8;
  DAT_101e3a7f2 = 0xff005ae1;
  DAT_101e3a7f6 = 0xff1addfa;
  DAT_101e3a7fa = 0xff2424b3;
  DAT_101e3a7fe = 0xff2424b3;
  DAT_101e3a802 = 0xff646464;
  DAT_101e3a806 = 0xff92665e;
  DAT_101e3a80a = 0xff646037;
  DAT_101e3a814 = 0xff1111a1;
  DAT_101e3a818 = 0xff321ee1;
  DAT_101e3a81c = 0xffc8c8c8;
  DAT_101e3a820 = 0xff321ee1;
  DAT_101e3a82c = 0xff6259b3;
  DAT_101e3a830 = 0xff506e73;
  DAT_101e3a834 = 0xff9dbf86;
  DAT_101e3a810 = 0xffffffff;
  DAT_101e3a838 = 0xffa35244;
  DAT_101e3a824 = 0xff7fe801;
  DAT_101e3a83c = 0xffca828e;
  DAT_101e3a828 = 0xffffffff;
  DAT_101e3a840 = 0xffa6a6a6;
  DAT_101e3a844 = 0xffa6a6a6;
  DAT_101e3a848 = 0xffffffff;
  DAT_101e3a84c = 0xff88ea2f;
  DAT_101e3a850 = 0xff8c8c8c;
  DAT_101e3a854 = 0xffffb400;
  DAT_101e3a858 = 0xffff00ff;
  DAT_101e3a85c = 0xff00aded;
  DAT_101e3a860 = 0xff33d3ff;
  DAT_101e3a864 = 0xff7fe801;
  DAT_101e3a868 = 0xff282828;
  DAT_101e3a86c = 0xfff0f0f0;
  DAT_101e3a870 = 0xffa4781e;
  DAT_101e3a874 = 0xffa6654b;
  DAT_101e3a878 = 0xff93435b;
  DAT_101e3a87c = 0xff387f9c;
  DAT_101e3a880 = 0xffa3781e;
  DAT_101e3a884 = 0xffffd18a;
  DAT_101e3a888 = 0xffff61f7;
  DAT_101e3a88c = 0xff5de1f2;
  DAT_101e3a890 = 0xff80eaff;
  DAT_101e3a894 = 0xff32e00e;
  DAT_101e3a898 = 0xff5a3c10;
  DAT_101e3a89c = 0xff330b03;
  DAT_101e3a8a0 = 0xff33031d;
  DAT_101e3a8a4 = 0xff032433;
  DAT_101e3a8a8 = 0xff9e8e8d;
  FUN_1001489a8(&DAT_101e3a8b0);
  ___cxa_atexit(FUN_100148410,&DAT_101e3a8b0,0x100000000);
  lVar1 = 0;
  do {
    *(undefined8 *)(&DAT_101e3c960 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e3c958 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x101e3c970) = 0;
    *(undefined8 *)(&DAT_101e3c968 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x101e3c950) = 0;
    *(undefined8 *)(&DAT_101e3c948 + lVar1) = 0;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x400);
  ___cxa_atexit(FUN_1001494cc,0,0x100000000);
  return;
}




long FUN_100149c58(long param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char local_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_thunk_FUN_100149ce0_10145b230;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1000fb6d0(puVar1 + 0x12);
  FUN_10001549c(local_38,"NEWS");
  std::string::operator=((string *)(param_1 + 0x30),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




long thunk_FUN_100149c58(long param_1)

{
  undefined8 *puVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_thunk_FUN_100149ce0_10145b230;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1000fb6d0(puVar1 + 0x12);
  FUN_10001549c(apvStack_38,"NEWS");
  std::string::operator=((string *)(param_1 + 0x30),(string *)apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return param_1;
}




void FUN_100149ce0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100149ce0_10145b230;
  param_1[0x12] = &PTR_FUN_10145abe0;
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    operator_delete((void *)param_1[0x1e]);
  }
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    operator_delete((void *)param_1[0x1b]);
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  FUN_1000fa8bc(param_1 + 0x13,1);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  FUN_100135628(param_1);
  return;
}




void thunk_FUN_100149ce0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100149ce0_10145b230;
  param_1[0x12] = &PTR_FUN_10145abe0;
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    operator_delete((void *)param_1[0x1e]);
  }
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    operator_delete((void *)param_1[0x1b]);
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  FUN_1000fa8bc(param_1 + 0x13,1);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  FUN_100135628(param_1);
  return;
}




void FUN_100149da0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100149ce0();
  operator_delete(pvVar1);
  return;
}




bool FUN_100149db4(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  char local_c1;
  void *local_c0 [2];
  char local_a9;
  void *local_a8 [2];
  char local_91;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  
  lVar1 = param_2[0xb];
  if ((int)lVar1 != 0) goto LAB_100149ddc;
  (**(code **)(*param_1 + 0x10))();
  lVar3 = FUN_1000e86c0(param_2,"instant_tab_key");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_100149e6c:
    pcVar9 = "";
  }
  else {
    local_c8 = 0x100005;
    local_d8 = (undefined **)0x1013dd72c;
    uStack_d0 = 0xf;
    lVar3 = FUN_1000e87dc(param_2,&local_d8);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_100149e6c;
    local_c8 = 0x100005;
    local_d8 = (undefined **)0x1013dd72c;
    uStack_d0 = 0xf;
    pcVar9 = (char *)FUN_1000e87dc(param_2,&local_d8);
    if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
      pcVar9 = *(char **)pcVar9;
    }
  }
  FUN_10001549c(&local_d8,pcVar9);
  std::string::operator=((string *)(param_1 + 9),(string *)&local_d8);
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  lVar3 = FUN_1000e86c0(param_2,"instant_tab_id");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar3) {
LAB_100149ee4:
    pcVar9 = "";
  }
  else {
    local_c8 = 0x100005;
    local_d8 = (undefined **)0x1013dd73c;
    uStack_d0 = 0xe;
    lVar3 = FUN_1000e87dc(param_2,&local_d8);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_100149ee4;
    local_c8 = 0x100005;
    local_d8 = (undefined **)0x1013dd73c;
    uStack_d0 = 0xe;
    pcVar9 = (char *)FUN_1000e87dc(param_2,&local_d8);
    if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
      pcVar9 = *(char **)pcVar9;
    }
  }
  FUN_10001549c(&local_d8,pcVar9);
  std::string::operator=((string *)(param_1 + 0xc),(string *)&local_d8);
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  lVar3 = FUN_1000e86c0(param_2,"gamefeed");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3) {
    local_c8 = 0x100005;
    local_d8 = (undefined **)0x1013d7044;
    uStack_d0 = 8;
    plVar4 = (long *)FUN_1000e87dc(param_2,&local_d8);
    lVar3 = FUN_1000e86c0(plVar4,"sections");
    if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
      local_c8 = 0x100005;
      local_d8 = (undefined **)0x1013d704d;
      uStack_d0 = 8;
      plVar5 = (long *)FUN_1000e87dc(plVar4,&local_d8);
      if (((int)plVar5[2] == 4) && ((int)plVar5[1] != 0)) {
        lVar3 = 0;
        uVar10 = 0;
        do {
          FUN_1000fa5cc(&local_d8,*plVar5 + lVar3);
          FUN_1000fa508(param_1 + 1,&local_d8);
          local_d8 = &PTR_FUN_10145abe0;
          if (local_61 < '\0') {
            operator_delete(local_78[0]);
          }
          if (local_79 < '\0') {
            operator_delete(local_90[0]);
          }
          if (local_91 < '\0') {
            operator_delete(local_a8[0]);
          }
          if (local_a9 < '\0') {
            operator_delete(local_c0[0]);
          }
          FUN_1000fa8bc(&uStack_d0,1);
          uVar10 = uVar10 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar10 < *(uint *)(plVar5 + 1));
      }
    }
    lVar3 = FUN_1000e86c0(plVar4,"landing_page");
    if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
      local_c8 = 0x100005;
      local_d8 = (undefined **)0x1013dd74b;
      uStack_d0 = 0xc;
      FUN_1000e87dc(plVar4,&local_d8);
      FUN_1000fa5cc(&local_d8);
      FUN_10014a3b0(param_1 + 0x13,&uStack_d0);
      std::string::operator=((string *)(param_1 + 0x15),(string *)local_c0);
      std::string::operator=((string *)(param_1 + 0x18),(string *)local_a8);
      std::string::operator=((string *)(param_1 + 0x1b),(string *)local_90);
      std::string::operator=((string *)(param_1 + 0x1e),(string *)local_78);
      local_d8 = &PTR_FUN_10145abe0;
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
      if (local_79 < '\0') {
        operator_delete(local_90[0]);
      }
      if (local_91 < '\0') {
        operator_delete(local_a8[0]);
      }
      if (local_a9 < '\0') {
        operator_delete(local_c0[0]);
      }
      FUN_1000fa8bc(&uStack_d0,1);
    }
    lVar3 = FUN_1000e86c0(plVar4,"profileExtras");
    if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
      local_c8 = 0x100005;
      local_d8 = (undefined **)0x1013dd758;
      uStack_d0 = 0xd;
      plVar4 = (long *)FUN_1000e87dc(plVar4,&local_d8);
      if (((int)plVar4[2] == 4) && ((int)plVar4[1] != 0)) {
        lVar3 = 0;
        uVar10 = 0;
        do {
          plVar5 = (long *)(*plVar4 + lVar3);
          lVar6 = FUN_1000e86c0(plVar5,"label");
          if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar6) {
            local_c8 = 0x100005;
            local_d8 = (undefined **)0x1013dd404;
            uStack_d0 = 5;
            lVar6 = FUN_1000e87dc(plVar5,&local_d8);
            if (((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) &&
               (lVar6 = FUN_1000e86c0(plVar5,"url"),
               *plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 != lVar6)) {
              local_c8 = 0x100005;
              local_d8 = (undefined **)0x1013d6fe6;
              uStack_d0 = 3;
              lVar6 = FUN_1000e87dc(plVar5,&local_d8);
              if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
                local_c8 = 0x100005;
                local_d8 = (undefined **)0x1013dd404;
                uStack_d0 = 5;
                pcVar7 = (char *)FUN_1000e87dc(plVar5,&local_d8);
                pcVar9 = *(char **)pcVar7;
                if ((*(uint *)(pcVar7 + 0x10) & 0x400000) != 0) {
                  pcVar9 = pcVar7;
                }
                iVar2 = _strcmp(pcVar9,"STATS");
                if (iVar2 == 0) {
                  local_c8 = 0x100005;
                  local_d8 = (undefined **)0x1013d6fe6;
                  uStack_d0 = 3;
                  plVar8 = (long *)FUN_1000e87dc(plVar5,&local_d8);
                  plVar5 = (long *)*plVar8;
                  if ((*(uint *)(plVar8 + 2) & 0x400000) != 0) {
                    plVar5 = plVar8;
                  }
                  FUN_10001549c(&local_d8,plVar5);
                  std::string::operator=((string *)(param_1 + 0xf),(string *)&local_d8);
                  if (local_c1 < '\0') {
                    operator_delete(local_d8);
                  }
                }
              }
            }
          }
          uVar10 = uVar10 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar10 < *(uint *)(plVar4 + 1));
      }
    }
  }
LAB_100149ddc:
  return (int)lVar1 == 0;
}




void FUN_10014a334(undefined8 param_1,long param_2)

{
  FUN_10003330c(param_1,param_2 + 0x48);
  return;
}




void FUN_10014a340(undefined8 param_1,long param_2)

{
  FUN_10003330c(param_1,param_2 + 0x60);
  return;
}




void FUN_10014a34c(undefined8 param_1,long param_2)

{
  FUN_10003330c(param_1,param_2 + 0x78);
  return;
}




void FUN_10014a358(long param_1,long param_2)

{
  FUN_10014a3b0(param_2 + 8,param_1 + 0x98);
  std::string::operator=((string *)(param_2 + 0x18),(string *)(param_1 + 0xa8));
  std::string::operator=((string *)(param_2 + 0x30),(string *)(param_1 + 0xc0));
  std::string::operator=((string *)(param_2 + 0x48),(string *)(param_1 + 0xd8));
  std::string::operator=((string *)(param_2 + 0x60),(string *)(param_1 + 0xf0));
  return;
}




void FUN_10014a3b0(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1000fa8bc(param_1,1);
    FUN_1000faad4(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar1 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x598;
      do {
        lVar1 = FUN_1000faba4(lVar1,lVar3);
        lVar3 = lVar3 + 0x598;
        lVar1 = lVar1 + 0x598;
        lVar4 = lVar4 + -0x598;
      } while (lVar4 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_10014a42c(undefined8 *param_1)

{
  FUN_1003c6514(*param_1);
  return;
}




long * FUN_10014a434(long *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  bool bVar12;
  char *pcVar13;
  uint uVar14;
  long local_78;
  
  pcVar13 = (char *)((long)param_1 + 0x3109);
  *param_1 = 0;
  uVar3 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = uVar3;
  plVar6 = param_1 + 4;
  do {
    lVar11 = 0;
    do {
      puVar1 = (undefined8 *)((long)plVar6 + lVar11);
      *puVar1 = &PTR_FUN_10145b260;
      puVar1[2] = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[5] = 0;
      puVar1[8] = 0;
      puVar1[7] = 0;
      puVar1[10] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xb] = 0;
      lVar11 = lVar11 + 0x78;
      puVar1[0xe] = 0;
      puVar1[0xd] = 0;
    } while (puVar1 + 0xf != plVar6 + 0x5a);
    *(undefined4 *)(plVar6 + 0x5a) = 0x45;
    *(undefined8 *)((long)plVar6 + 0x2d4) = 0;
    *(undefined1 *)((long)plVar6 + 0x2dc) = 0;
    plVar6 = plVar6 + 0x5c;
  } while (plVar6 != param_1 + 0x620);
  uVar14 = 0x811c9dc5;
  *(undefined8 *)((long)param_1 + 0x3106) = 0;
  param_1[0x620] = 0;
  *pcVar13 = '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2f4);
  *(uint *)((long)param_1 + 0x2f4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 4);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2f4);
  *(uint *)((long)param_1 + 0x2f4) = uVar8 + 1;
  lVar11 = FUN_10014b57c(param_1 + (ulong)uVar8 * 0xf + 4);
  *(undefined8 *)(lVar11 + 0x18) = 0x1d00000000;
  *(undefined4 *)(lVar11 + 8) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x5e) = 0x31;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined1 *)(lVar11 + 0x20) = 1;
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3e99999a;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b854(param_1 + (ulong)uVar8 * 0xf + 0x60);
  if (PTR_s_Ability__Item__HealingFlask_101858e00 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Item__HealingFlask_101858e00;
    uVar8 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar8 = 0x811c9dc5;
      pcVar10 = PTR_s_Ability__Item__HealingFlask_101858e00;
      do {
        pcVar10 = pcVar10 + 1;
        uVar8 = (uVar8 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar10;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar11 + 8) = uVar8;
  *(undefined1 *)(lVar11 + 0xc) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xba) = 0x32;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0xbc);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0xbc);
  lVar9 = 0;
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = *(uint *)((long)param_1 + 0x8b4) + 1;
  bVar4 = true;
  do {
    bVar12 = bVar4;
    if (param_1[uVar7 * 0xf + lVar9 * 7 + 0xbd] == 0) {
      param_1[uVar7 * 0xf + lVar9 * 7 + 0xbe] = (long)&PTR_FUN_10145b350;
      param_1[uVar7 * 0xf + lVar9 * 7 + 0xbd] = (long)(param_1 + uVar7 * 0xf + lVar9 * 7 + 0xbe);
      goto LAB_10014a718;
    }
    lVar9 = 1;
    bVar4 = false;
  } while (bVar12);
  FUN_1004d22dc(0);
LAB_10014a718:
  *(undefined4 *)(param_1 + 0x116) = 0x30;
  *(undefined4 *)(param_1 + 0x117) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b9c8(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined4 *)(lVar11 + 8) = 2;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined8 *)(lVar11 + 0x18) = 0x600000000;
  *(undefined4 *)(lVar11 + 8) = 0x451c4000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014ba54(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined1 *)(lVar11 + 8) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined1 *)(lVar11 + 0x14) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar11 = FUN_10014b57c(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined8 *)(lVar11 + 0x18) = 0x2800000002;
  *(undefined4 *)(lVar11 + 8) = 0x41200000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x172) = 0x34;
  *(undefined4 *)(param_1 + 0x173) = 0;
  pcVar13 = (char *)((long)param_1 + 0x310c);
  *(undefined1 *)((long)param_1 + 0x310b) = 4;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined1 *)(lVar11 + 0x20) = 1;
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3e99999a;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b854(param_1 + (ulong)uVar8 * 0xf + 0x174);
  if (PTR_s_Ability__Item__HealingFlask_101858e00 == (undefined *)0x0) {
    uVar14 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Item__HealingFlask_101858e00;
    pcVar10 = PTR_s_Ability__Item__HealingFlask_101858e00;
    while (cVar5 != '\0') {
      pcVar10 = pcVar10 + 1;
      uVar14 = (uVar14 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar10;
    }
  }
  *(uint *)(lVar11 + 8) = uVar14;
  *(undefined1 *)(lVar11 + 0xc) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x1ce) = 0x33;
  *(undefined4 *)(param_1 + 0x1cf) = 0;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1154);
  *(uint *)((long)param_1 + 0x1154) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x1d0);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1154);
  *(uint *)((long)param_1 + 0x1154) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x1d0);
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 0x28) = 4;
  *(code **)(lVar11 + 8) = FUN_10014a42c;
  *(undefined4 *)(lVar11 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0x22a) = 0x35;
  *(undefined4 *)(param_1 + 0x22b) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1434);
  *(uint *)((long)param_1 + 0x1434) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x22c);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1434);
  *(uint *)((long)param_1 + 0x1434) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x22c);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_GameObjectives_River5v5Bonu_10185c0c0;
  *(undefined4 *)(param_1 + 0x286) = 0x36;
  *(undefined4 *)(param_1 + 0x287) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(byte *)(lVar11 + 0x2c) = *(byte *)(lVar11 + 0x2c) & 0xfc;
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 8) = 0xf64cd42b;
  *(undefined4 *)(lVar11 + 0x10) = 3;
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined4 *)(param_1 + 0x2e2) = 0x37;
  *(undefined4 *)(param_1 + 0x2e3) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(byte *)(lVar11 + 0x2c) = *(byte *)(lVar11 + 0x2c) & 0xfc;
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 8) = 0x4bf7772d;
  *(undefined4 *)(lVar11 + 0x10) = 3;
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined4 *)(param_1 + 0x33e) = 0x38;
  *(undefined4 *)(param_1 + 0x33f) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1cd4);
  *(uint *)((long)param_1 + 0x1cd4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x340);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1cd4);
  *(uint *)((long)param_1 + 0x1cd4) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x340);
  *(undefined4 *)(lVar11 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 0x28) = 0x100;
  *(code **)(lVar11 + 8) = FUN_10014a42c;
  *(undefined4 *)(lVar11 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0x39a) = 0x39;
  *(undefined4 *)(param_1 + 0x39b) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar11 + 0x20) = 1;
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3dcccccd;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar11 = FUN_10014ba54(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar11 + 8) = 1;
  *(undefined4 *)(param_1 + 0x3f6) = 0x3a;
  *(undefined4 *)(param_1 + 0x3f7) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2294);
  *(uint *)((long)param_1 + 0x2294) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x3f8);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2294);
  *(uint *)((long)param_1 + 0x2294) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x3f8);
  *(undefined8 *)(lVar11 + 0x18) = 2;
  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x452) = 0x3b;
  *(undefined4 *)(param_1 + 0x453) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014b904(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
  *(undefined1 *)(lVar11 + 0x14) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014b720(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined8 *)(lVar11 + 0x18) = 0x600000000;
  *(undefined4 *)(lVar11 + 8) = 0x44fa0000;
  *(undefined4 *)(lVar11 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar11 = FUN_10014ba54(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined1 *)(lVar11 + 8) = 1;
  *(undefined4 *)(param_1 + 0x4ae) = 0x3c;
  *(undefined4 *)(param_1 + 0x4af) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2854);
  *(uint *)((long)param_1 + 0x2854) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x4b0);
  lVar9 = 0;
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x2854);
  *(uint *)((long)param_1 + 0x2854) = *(uint *)((long)param_1 + 0x2854) + 1;
  bVar4 = true;
  do {
    bVar12 = bVar4;
    if (param_1[uVar7 * 0xf + lVar9 * 7 + 0x4b1] == 0) {
      param_1[uVar7 * 0xf + lVar9 * 7 + 0x4b2] = (long)&PTR_FUN_10145b3f0;
      param_1[uVar7 * 0xf + lVar9 * 7 + 0x4b1] = (long)(param_1 + uVar7 * 0xf + lVar9 * 7 + 0x4b2);
      goto LAB_10014ad84;
    }
    lVar9 = 1;
    bVar4 = false;
  } while (bVar12);
  FUN_1004d22dc(0);
LAB_10014ad84:
  *(undefined4 *)(param_1 + 0x50a) = 0x3d;
  *(undefined4 *)(param_1 + 0x50b) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2b34);
  *(uint *)((long)param_1 + 0x2b34) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x50c);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2b34);
  *(uint *)((long)param_1 + 0x2b34) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x50c);
  *(byte *)(lVar11 + 0x2c) = *(byte *)(lVar11 + 0x2c) & 0xfc;
  *(undefined4 *)(lVar11 + 0x18) = 0x41a00000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 8) = 0xbe59a86e;
  *(undefined4 *)(lVar11 + 0x10) = 3;
  *(undefined4 *)(param_1 + 0x566) = 0x3e;
  *(undefined4 *)(param_1 + 0x567) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2e14);
  *(uint *)((long)param_1 + 0x2e14) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x568);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2e14);
  *(uint *)((long)param_1 + 0x2e14) = uVar8 + 1;
  lVar11 = FUN_10014bc80(param_1 + (ulong)uVar8 * 0xf + 0x568);
  *(undefined4 *)(lVar11 + 8) = 0x2000;
  *(undefined4 *)(param_1 + 0x5c2) = 0x3f;
  *(undefined4 *)(param_1 + 0x5c3) = 2;
  *pcVar13 = *pcVar13 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x30f4);
  *(uint *)((long)param_1 + 0x30f4) = uVar8 + 1;
  lVar11 = FUN_10014b4c4(param_1 + (ulong)uVar8 * 0xf + 0x5c4);
  *(undefined1 *)(lVar11 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x30f4);
  *(uint *)((long)param_1 + 0x30f4) = uVar8 + 1;
  lVar11 = FUN_10014baf8(param_1 + (ulong)uVar8 * 0xf + 0x5c4);
  *(undefined4 *)(lVar11 + 0x18) = 0x41200000;
  *(undefined4 *)(lVar11 + 0x20) = 1;
  *(undefined4 *)(lVar11 + 0x28) = 0x80000;
  *(code **)(lVar11 + 8) = FUN_10014a42c;
  *(undefined4 *)(lVar11 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0x61e) = 0x40;
  *(undefined4 *)(param_1 + 0x61f) = 2;
  local_78 = 0;
  FUN_1010a1958(&local_78,1,DAT_10184de40,0);
  if (local_78 != 0) {
    lVar9 = FUN_1010a0298(local_78,DAT_10184e3d0);
    lVar11 = 0;
    if (lVar9 != 0) {
      lVar11 = lVar9 + 0x28;
    }
    puVar2 = &DAT_101dc0b88;
    if (lVar9 != 0) {
      puVar2 = (undefined4 *)(lVar11 + 8);
    }
    uVar3 = *puVar2;
    *param_1 = lVar11;
    *(undefined4 *)(param_1 + 1) = uVar3;
  }
  return param_1;
}




long * FUN_10014af54(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(*(long *)*param_1 + 0x10))();
        FUN_1010a1830();
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  return param_1;
}




void FUN_10014afc8(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 local_68;
  
  uVar6 = FUN_10034cb58();
  if ((uVar6 & 1) != 0) {
    return;
  }
  FUN_10034ee90();
  local_68 = FUN_100345d90();
  lVar7 = param_1[0x620];
  if (lVar7 != 0) {
    plVar12 = (long *)param_1[2];
    if (plVar12 != (long *)0x0) {
      if ((int)param_1[3] == (int)plVar12[1]) {
        lVar8 = (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar7 = param_1[0x620];
        if (lVar8 != 0) {
          if (*(int *)(lVar7 + 0x2d8) == 2) {
            return;
          }
          uVar6 = FUN_10014b250(lVar7,&local_68);
          if ((uVar6 & 1) != 0) {
            return;
          }
          param_1[0x620] = 0;
          (**(code **)(*(long *)param_1[2] + 0x10))();
          FUN_1010a1830();
          goto LAB_10014b090;
        }
      }
      else {
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
      }
    }
    *(undefined1 *)(lVar7 + 0x2dc) = 1;
    param_1[0x620] = 0;
  }
LAB_10014b090:
  lVar7 = 0;
  do {
    if ((*(char *)((long)param_1 + lVar7 * 3 + 0x310a) != '\0') &&
       (pbVar1 = (byte *)((long)param_1 + lVar7 * 3 + 0x3109), *pbVar1 != 0)) {
      pbVar2 = (byte *)((long)param_1 + lVar7 * 3 + 0x3108);
      uVar6 = (ulong)*pbVar2;
      plVar12 = param_1 + uVar6 * 0x5c + 0x5e;
      do {
        iVar5 = FUN_10014b250(plVar12 + -0x5a,&local_68);
        if (iVar5 != 0) {
          param_1[0x620] = (long)(plVar12 + -0x5a);
          plVar9 = (long *)*param_1;
          uVar10 = 0;
          if (plVar9 != (long *)0x0) {
            if ((int)param_1[1] == (int)plVar9[1]) {
              uVar10 = (**(code **)(*plVar9 + 0x10))();
            }
            else {
              uVar10 = 0;
              *param_1 = 0;
              *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
            }
          }
          lVar8 = FUN_1010a0298(uVar10,DAT_10184df30);
          plVar9 = (long *)0x0;
          if (lVar8 != 0) {
            plVar9 = (long *)(lVar8 + 0x28);
          }
          plVar3 = (long *)&DAT_101dc0b88;
          if (lVar8 != 0) {
            plVar3 = plVar9 + 1;
          }
          lVar4 = *plVar3;
          param_1[2] = (long)plVar9;
          *(int *)(param_1 + 3) = (int)lVar4;
          if (lVar8 != 0) {
            if ((int)lVar4 == (int)plVar9[1]) {
              lVar8 = (**(code **)(*plVar9 + 0x10))();
              if (lVar8 != 0) {
                plVar9 = (long *)param_1[2];
                if (plVar9 == (long *)0x0) {
                  uVar10 = 0;
                }
                else if ((int)param_1[3] == (int)plVar9[1]) {
                  uVar10 = (**(code **)(*plVar9 + 0x10))();
                }
                else {
                  uVar10 = 0;
                  param_1[2] = 0;
                  *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
                }
                uVar11 = (**(code **)(*(long *)*param_1 + 0x10))();
                FUN_10003f608(uVar10,uVar11,(int)*plVar12);
              }
            }
            else {
              param_1[2] = 0;
              *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
            }
          }
          break;
        }
        uVar6 = uVar6 + 1;
        plVar12 = plVar12 + 0x5c;
      } while (uVar6 < (ulong)*pbVar1 + (ulong)*pbVar2);
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 2) {
      return;
    }
  } while( true );
}




ulong FUN_10014b250(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (((int)param_1[0x5b] == 0) || (*(char *)((long)param_1 + 0x2dc) == '\0')) {
    if (*(int *)((long)param_1 + 0x2d4) == 0) {
      uVar1 = 1;
    }
    else {
      uVar3 = 0;
      plVar2 = param_1;
      do {
        uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        if ((uVar1 & 1) == 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 0xf;
      } while (uVar3 < *(uint *)((long)param_1 + 0x2d4));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_10014b2d4(int *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  
  lVar1 = DAT_101e3cd48;
  if ((*param_1 == 0x22 || *param_1 == 0x19) && (DAT_101e3cd48 != 0)) {
    iVar3 = FUN_10031615c(0x19);
    if (iVar3 == 0) {
      bVar2 = 0;
    }
    else {
      FUN_1003467f8();
      bVar2 = FUN_10034cde0();
      bVar2 = bVar2 ^ 1;
    }
    *(byte *)(lVar1 + 0x310a) = bVar2;
  }
  return;
}




void FUN_10014b330(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  code *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar4 = FUN_100316150();
  local_30 = 0;
  uStack_28 = 0;
  local_40 = FUN_10014b2d4;
  uStack_38 = 0;
  FUN_10003c508(uVar4,&local_40);
  pvVar5 = operator_new(0x3110);
  DAT_101e3cd48 = FUN_10014a434();
  iVar3 = FUN_10031615c(0x19);
  if (iVar3 == 0) {
    bVar2 = 0;
  }
  else {
    FUN_1003467f8();
    bVar2 = FUN_10034cde0();
    bVar2 = bVar2 ^ 1;
  }
  *(byte *)((long)pvVar5 + 0x310a) = bVar2;
  lVar1 = DAT_101e3cd48;
  iVar3 = FUN_10034cc34();
  *(bool *)(lVar1 + 0x310d) = iVar3 == 0x35;
  return;
}




void FUN_10014b3c4(void)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar1 = FUN_10031613c();
  if (iVar1 != 0) {
    puVar2 = (uint *)FUN_100316150();
    if (*puVar2 != 0) {
      lVar4 = (ulong)*puVar2 << 5;
      puVar5 = *(undefined8 **)(puVar2 + 2);
      do {
        if ((code *)*puVar5 == FUN_10014b2d4) {
          FUN_10003c608(puVar2,puVar5,puVar5 + 4);
          break;
        }
        lVar4 = lVar4 + -0x20;
        puVar5 = puVar5 + 4;
      } while (lVar4 != 0);
    }
  }
  if (DAT_101e3cd48 != 0) {
    pvVar3 = (void *)FUN_10014af54();
    operator_delete(pvVar3);
    DAT_101e3cd48 = 0;
  }
  return;
}




void FUN_10014b440(void)

{
  if (DAT_101e3cd48 != 0) {
    FUN_10014afc8();
    return;
  }
  return;
}




void FUN_10014b454(void)

{
  return;
}




undefined8 FUN_10014b45c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  bVar5 = false;
  do {
    plVar2 = *(long **)(param_1 + lVar4 * 0x38 + 8);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    lVar4 = 1;
    bVar1 = !bVar5;
    bVar5 = true;
  } while (bVar1 && (((uint)uVar3 ^ 0xffffffff) & 1) == 0);
  return uVar3;
}




undefined8 * FUN_10014b4c4(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b288;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined2 *)(param_1 + 0x1c) = 1;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014b534(void)

{
  return;
}




bool FUN_10014b53c(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = FUN_1000b84a4(*(undefined4 *)(param_1 + 8));
  }
  else {
    uVar1 = FUN_1000b845c();
  }
  return *(byte *)(param_1 + 0xd) != uVar1;
}




undefined8 * FUN_10014b57c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b2b0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014b5f0(void)

{
  return;
}




void FUN_10014b5f8(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar1 = FUN_100490394(*param_2,*(undefined4 *)(param_1 + 0x1c));
    }
    else {
      uVar1 = FUN_1003e4a18();
    }
    uVar2 = FUN_10014b684(param_1 + 8,param_2,0);
    FUN_10048c318(uVar1,uVar2,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}




undefined1  [16] FUN_10014b684(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  switch(param_1[2]) {
  case 0:
  case 6:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    uVar3 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00010014b6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)param_1)();
    return auVar1;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    param_2 = (undefined8 *)*param_2;
    goto LAB_10014b714;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
LAB_10014b714:
                    /* WARNING: Could not recover jumptable at 0x00010014b71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
    return auVar1;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00010014b708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)param_1)(param_2,param_3);
    return auVar1;
  default:
    FUN_1004d22dc(0);
  }
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}




undefined8 * FUN_10014b720(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b2d8;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014b794(void)

{
  return;
}




undefined8 FUN_10014b79c(long param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    uVar3 = FUN_1004903e0(lVar1,*(undefined4 *)(param_1 + 0x1c));
    if (*(char *)(param_1 + 0x20) != '\0') {
      fVar2 = (float)FUN_1004903f0(lVar1,*(undefined4 *)(param_1 + 0x1c));
      fVar5 = (float)uVar3;
      uVar3 = 0;
      if (1.1920929e-07 <= ABS(fVar2)) {
        uVar3 = (ulong)(uint)(fVar5 / fVar2);
      }
    }
    uVar4 = FUN_10014b684(param_1 + 8,param_2,0);
    uVar4 = FUN_10048c318(uVar3,uVar4,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return uVar4;
  }
  return 0;
}




undefined8 * FUN_10014b854(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b300;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined2 *)(param_1 + 0x1c) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014b8c0(void)

{
  return;
}




bool FUN_10014b8c8(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if (*param_2 != 0) {
    uVar2 = FUN_10048c780(*param_2,param_1 + 8,*(undefined1 *)(param_1 + 0xc));
    bVar1 = *(byte *)(param_1 + 0xd) != uVar2;
  }
  return bVar1;
}




undefined8 * FUN_10014b904(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b328;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014b96c(void)

{
  return;
}




bool FUN_10014b974(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if (*param_2 != 0) {
    uVar2 = FUN_10048c910(*param_2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = *(byte *)(param_1 + 0x14) != uVar2;
  }
  return bVar1;
}




void FUN_10014b9b0(void)

{
  return;
}




void FUN_10014b9b8(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    FUN_10048caf4();
    return;
  }
  return;
}




undefined8 * FUN_10014b9c8(long param_1)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    plVar5 = (long *)(param_1 + lVar2 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar2 * 0x38;
      *(undefined8 *)(param_1 + 0x18) = 0;
      puVar4 = (undefined8 *)(param_1 + 0x10);
      *puVar4 = &PTR_FUN_10145b378;
      FUN_10048cd30();
      *plVar5 = (long)puVar4;
      return puVar4;
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar3);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014ba44(void)

{
  return;
}




void FUN_10014ba4c(long param_1)

{
  FUN_10048cd38(param_1 + 8);
  return;
}




undefined8 * FUN_10014ba54(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b3a0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014babc(void)

{
  return;
}




bool FUN_10014bac4(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if (*param_2 != 0) {
    uVar2 = FUN_10048ca28();
    bVar1 = *(byte *)(param_1 + 8) != uVar2;
  }
  return bVar1;
}




undefined8 * FUN_10014baf8(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    plVar4 = (long *)(param_1 + lVar5 * 0x38 + 8);
    if (*plVar4 == 0) {
      param_1 = param_1 + lVar5 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b3c8;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 7;
      *plVar4 = (long)puVar2;
      return puVar2;
    }
    lVar5 = 1;
    bVar1 = false;
  } while (bVar3);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014bb80(void)

{
  return;
}




void FUN_10014bb88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 auStack_38 [8];
  
  uVar1 = 0;
  if (((*(byte *)(param_1 + 0x2c) ^ 0xff) & 7) != 0) {
    uVar1 = *param_2;
  }
  FUN_10014bc0c(param_1 + 8,param_2,uVar1,auStack_38);
  FUN_10014b684(param_1 + 0x18,param_2,0);
  bVar2 = *(byte *)(param_1 + 0x2c);
  FUN_10048c374(auStack_38,*(undefined4 *)(param_1 + 0x28),uVar1,bVar2 & 1,bVar2 >> 1 & 1,
                bVar2 >> 2 & 1);
  return;
}




void FUN_10014bc0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 local_18 [2];
  
  if (*(int *)(param_1 + 1) != 4) {
    if (*(int *)(param_1 + 1) == 3) {
      local_18[0] = *(undefined4 *)param_1;
      FUN_1004914ac(local_18,param_4);
    }
    return;
  }
  *param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010014bc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_2,param_4);
  return;
}




void FUN_10014bc68(void)

{
  return;
}




void FUN_10014bc70(undefined8 param_1,long *param_2)

{
  if (*param_2 != 0) {
    FUN_10048ca38();
    return;
  }
  return;
}




undefined8 * FUN_10014bc80(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10145b418;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10014bce8(void)

{
  return;
}




void FUN_10014bcf0(long param_1,long *param_2)

{
  if (*param_2 != 0) {
    FUN_10048c4cc(*param_2,*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}




void FUN_10014bd08(void)

{
  if ((DAT_10184de48 & 1) == 0) {
    DAT_10184de40 = DAT_101872e38;
    DAT_10184de48 = 1;
  }
  return;
}




void FUN_10014bd34(void)

{
  if ((DAT_10184e3d8 & 1) == 0) {
    DAT_10184e3d0 = DAT_101872e38;
    DAT_10184e3d8 = 1;
  }
  return;
}




void FUN_10014bd60(void)

{
  if ((DAT_10184df38 & 1) == 0) {
    DAT_10184df30 = DAT_101872e38;
    DAT_10184df38 = 1;
  }
  return;
}




ushort * FUN_10014bd8c(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  *param_1 = *param_1 & 0x8000 | 0x3ff;
  *(undefined4 *)((long)param_1 + 0xb) = 0;
  puVar6 = param_1 + 4;
  puVar6[0] = 0;
  puVar6[1] = 0;
  *(ushort **)(param_1 + 200) = param_1;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  FUN_1000ee4ec(param_1 + 0x10c,"irc");
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  FUN_1004e3004(param_1 + 0x134);
  FUN_1004edd24(param_1 + 0x144);
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  FUN_1004f1580(param_1 + 0x178);
  *(undefined ***)(param_1 + 0x178) = &PTR_thunk_FUN_10014e7ec_10145b440;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0x400;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  puVar4 = operator_new(0x28);
  *puVar4 = 0;
  puVar4[1] = 0x10000;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = 0;
  *(undefined8 **)(param_1 + 0x19c) = puVar4;
  *(undefined8 **)(param_1 + 0x1a0) = puVar4;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  param_1[0x233] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x22f] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  *(ushort **)(param_1 + 0x240) = param_1 + 0x244;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  param_1[599] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x25c] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x27c] = 0;
  param_1[0x27d] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x292] = 0;
  param_1[0x293] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  param_1[0x2ab] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  param_1[0x2ba] = 0;
  param_1[699] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  param_1[0x2db] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x308] = 0;
  param_1[0x309] = 0;
  param_1[0x30a] = 0;
  param_1[0x30b] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2ef] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  FUN_1004f1580(param_1 + 0x310);
  *(undefined ***)(param_1 + 0x310) = &PTR_FUN_10145b470;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  uVar3 = *param_1;
  puVar5 = puVar6 + ((ulong)(uVar3 >> 10) & 0x1f) * 0x1c;
  puVar5[0] = 0;
  puVar5[1] = 0;
  uVar1 = uVar3 + 0x400;
  uVar2 = uVar3 & 0xffff83ff;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  puVar5[0] = 1;
  puVar5[1] = 0;
  *(code **)(puVar5 + 4) = FUN_10014c1ec;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  *(code **)(puVar5 + 0xc) = thunk_FUN_1004f0bd8;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 4;
  *(code **)(puVar5 + 4) = FUN_10014c2a0;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 2;
  *(code **)(puVar5 + 4) = FUN_10014c3e8;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 5;
  *(code **)(puVar5 + 4) = FUN_10014c70c;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar5 = 6;
  *(code **)(puVar5 + 4) = FUN_10014c7c4;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[1] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  *(code **)(puVar5 + 0xc) = FUN_10014c8a8;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar6 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 0x1c;
  *puVar6 = 3;
  *(code **)(puVar6 + 4) = FUN_10014c91c;
  puVar6[1] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  *param_1 = ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_10014caac(param_1,0,1);
  FUN_10014caac(param_1,1,2);
  FUN_10014caac(param_1,2,4);
  FUN_10014caac(param_1,2,1);
  FUN_10014caac(param_1,1,5);
  FUN_10014caac(param_1,4,1);
  FUN_10014caac(param_1,4,5);
  FUN_10014caac(param_1,5,1);
  FUN_10014caac(param_1,5,6);
  FUN_10014caac(param_1,6,1);
  FUN_10014caac(param_1,2,3);
  FUN_10014caac(param_1,3,4);
  FUN_10014caac(param_1,3,1);
  FUN_10014cb30(param_1);
  puVar4 = operator_new(0x10);
  *(undefined8 **)(param_1 + 0x32c) = puVar4;
  *puVar4 = &PTR_FUN_10145b4a0;
  puVar4[1] = param_1;
  FUN_10052b77c();
  return param_1;
}




void FUN_10014c1ec(long param_1)

{
  int iVar1;
  uint64_t uVar2;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  if ((*(char *)(param_1 + 0x271) != '\0') &&
     (uVar2 = _mach_absolute_time(),
     5.0 < (double)((uVar2 - *(long *)(param_1 + 0x268)) * DAT_101d91638) * 1e-09)) {
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    iVar1 = FUN_1004ef16c(&local_38);
    if (iVar1 != 0) {
      FUN_10014da94(param_1);
      FUN_10014cd08(param_1,5,0,0);
    }
    FUN_1004e3004(param_1 + 0x268);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return;
}




void FUN_10014c2a0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar3 = FUN_1004f0338();
  uVar1 = FUN_1004f0850();
  if (*(int *)(lVar3 + 0x98) != 0) {
LAB_10014c2c8:
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    iVar2 = FUN_1004ef16c(&local_38);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x270) == '\0')) {
      local_50 = (void *)0x0;
      uStack_48 = 0;
      local_40 = 0;
      FUN_1004ef19c(&local_50);
      FUN_10012d9ec(&local_50,param_1 + 0x1d0,&local_38,0);
      if (local_40 < 0) {
        operator_delete(local_50);
      }
      *(undefined1 *)(param_1 + 0x270) = 1;
      FUN_10014da94(param_1);
      FUN_10014cd08(param_1,5,0,0);
    }
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    return;
  }
  if ((int)uVar1 < 0) {
    if (uVar1 == 0xfffffff2) {
      uVar4 = 3;
    }
    else if (uVar1 == 0xfffffff3) {
      FUN_1004f15d8(param_1 + 0x2f0);
      FUN_1004f16b0(param_1 + 0x2f0);
      *(undefined4 *)(param_1 + 0x318) = 0xfffffff3;
      uVar4 = 6;
    }
    else {
      if (uVar1 != 0xfffffffd) goto LAB_10014c38c;
      uVar4 = 4;
    }
    uVar5 = 1;
  }
  else {
    if (uVar1 < 2) goto LAB_10014c2c8;
LAB_10014c38c:
    uVar4 = 1;
    uVar5 = 0;
  }
  FUN_10014daec(param_1,uVar4,1,uVar5);
  return;
}




void FUN_10014c70c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1004f0338();
  uVar1 = FUN_1004f0850();
  if (*(int *)(lVar2 + 0x98) != 0) {
    FUN_10014cd08(param_1,6,0,0);
    return;
  }
  if ((int)uVar1 < 0) {
    if (uVar1 == 0xfffffff2) {
      uVar3 = 3;
    }
    else if (uVar1 == 0xfffffff7) {
      uVar3 = 5;
    }
    else {
      if (uVar1 != 0xfffffffd) goto LAB_10014c7a8;
      uVar3 = 4;
    }
    uVar4 = 1;
  }
  else {
    if (uVar1 < 2) {
      return;
    }
LAB_10014c7a8:
    uVar3 = 1;
    uVar4 = 0;
  }
  FUN_10014daec(param_1,uVar3,1,uVar4);
  return;
}




void FUN_10014c7c4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004f0850();
  switch(iVar1) {
  case 1:
    return;
  case -5:
    uVar2 = 2;
    break;
  case -4:
  case -1:
switchD_10014c7f8_caseD_fffffffc:
    iVar1 = *(int *)(param_1 + 0x27c);
    if (*(char *)(param_1 + 0x272) != '\0') {
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 0x27c) = iVar1;
    }
    if (iVar1 < 6) goto LAB_10014c89c;
    FUN_10014daec(param_1,2,1,1);
  case 0:
    *(undefined4 *)(param_1 + 0x27c) = 0;
    goto LAB_10014c89c;
  case -3:
    uVar2 = 4;
    break;
  case -2:
    uVar2 = 7;
    uVar3 = 0;
    goto LAB_10014c898;
  default:
    if (iVar1 == -0xc9) {
      uVar2 = 8;
    }
    else {
      if (iVar1 != -0xe) goto switchD_10014c7f8_caseD_fffffffc;
      uVar2 = 3;
    }
  }
  uVar3 = 1;
LAB_10014c898:
  FUN_10014daec(param_1,uVar2,1,uVar3);
LAB_10014c89c:
  FUN_1004f0840();
  return;
}




void FUN_10014c8a8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_10014c8d0;
  }
  else if (*(char *)(param_1 + 0x1cf) == '\0') goto LAB_10014c8d0;
  FUN_1004f077c(param_1 + 0x1b8);
LAB_10014c8d0:
  uVar2 = FUN_1004f02dc(param_1 + 0x620);
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_1004f0850(), iVar1 == -0x1a)) {
    *(undefined2 *)(param_1 + 0x273) = 0;
    *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 0x273) = 1;
  }
  FUN_10010330c();
  return;
}




void FUN_10014caac(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10014cae0;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10014cae0:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10014cb30(long param_1)

{
  std::string::operator=((string *)(param_1 + 0x198),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  std::string::operator=((string *)(param_1 + 0x1b8),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x1d0),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x200),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x1e8),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  std::string::operator=((string *)(param_1 + 0x2c0),(string *)&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined1 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x280) = 0;
  FUN_1004e3004(param_1 + 0x268);
  FUN_10014cd08(param_1,1,0,0);
  FUN_1004f15d8(param_1 + 0x620);
  return;
}




long FUN_10014cbe0(long param_1)

{
  if (*(void **)(param_1 + 0x658) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x658));
  }
  *(undefined ***)(param_1 + 0x620) = &PTR_FUN_10145b470;
  FUN_10014d3e8(param_1 + 0x648,1);
  FUN_1004f15a8(param_1 + 0x620);
  FUN_10014e7ec(param_1 + 0x2f0);
  if (*(char *)(param_1 + 0x2d7) < '\0') {
    operator_delete(*(void **)(param_1 + 0x2c0));
  }
  thunk_FUN_1004edd58(param_1 + 0x288);
  if (*(char *)(param_1 + 0x267) < '\0') {
    operator_delete(*(void **)(param_1 + 0x250));
  }
  if (*(char *)(param_1 + 0x247) < '\0') {
    operator_delete(*(void **)(param_1 + 0x230));
  }
  if (*(char *)(param_1 + 0x22f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x218));
  }
  if (*(char *)(param_1 + 0x217) < '\0') {
    operator_delete(*(void **)(param_1 + 0x200));
  }
  if (*(char *)(param_1 + 0x1ff) < '\0') {
    operator_delete(*(void **)(param_1 + 0x1e8));
  }
  if (*(char *)(param_1 + 0x1e7) < '\0') {
    operator_delete(*(void **)(param_1 + 0x1d0));
  }
  if (*(char *)(param_1 + 0x1cf) < '\0') {
    operator_delete(*(void **)(param_1 + 0x1b8));
  }
  if (*(char *)(param_1 + 0x1af) < '\0') {
    operator_delete(*(void **)(param_1 + 0x198));
  }
  return param_1;
}




void FUN_10014ccd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b470;
  FUN_10014d3e8(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void thunk_FUN_10014e7ec(void)

{
  FUN_10014e7ec();
  return;
}




void FUN_10014cd08(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10014cd4c;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10014cd4c:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 200) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 200) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010014cdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10014ce24(long param_1)

{
  string *psVar1;
  undefined8 *****pppppuVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  string *psVar8;
  string *psVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  string *psVar15;
  short *psVar16;
  string *psVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_81;
  string local_80;
  undefined7 uStack_7f;
  char local_69;
  undefined8 ****local_68;
  undefined8 uStack_60;
  long local_58;
  
  FUN_10014d35c();
  FUN_1004eef78();
  FUN_10014d3a4(param_1);
  lVar18 = param_1 + 0x2f0;
  iVar5 = FUN_1004f1698(lVar18);
  if (iVar5 == 0) goto LAB_10014d1d4;
  local_68 = (undefined8 *****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1004ef16c(&local_68);
  pppppuVar2 = (undefined8 *****)local_68;
  if (-1 < local_58) {
    pppppuVar2 = &local_68;
  }
  FUN_10010221c(pppppuVar2);
  iVar5 = FUN_1004f1680(lVar18);
  if ((iVar5 != 0) && (*(int *)(param_1 + 0x318) == 0)) {
    FUN_1004f1ae0(*(undefined8 *)(param_1 + 0x4d0));
    plVar7 = (long *)(param_1 + 0x498);
    if (*(char *)(param_1 + 0x4af) < '\0') {
      plVar7 = (long *)*plVar7;
    }
    FUN_10016a944(plVar7);
  }
  psVar15 = (string *)(param_1 + 0x438);
  bVar4 = *(byte *)(param_1 + 0x44f);
  uVar19 = (ulong)bVar4;
  if ((char)bVar4 < '\0') {
    if (*(ulong *)(param_1 + 0x440) != 0) {
      uVar12 = *(ulong *)(param_1 + 0x440);
      psVar17 = *(string **)psVar15;
      goto LAB_10014cee8;
    }
LAB_10014cf64:
    FUN_1000ee4ec(&local_80,"irc");
    std::string::operator=((string *)(param_1 + 0x218),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    FUN_1000ee4ec(&local_80,"");
    std::string::operator=((string *)(param_1 + 0x230),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    uVar6 = 0xffffffff;
LAB_10014d128:
    *(undefined4 *)(param_1 + 0x248) = uVar6;
  }
  else {
    uVar12 = uVar19;
    psVar17 = psVar15;
    if (bVar4 == 0) goto LAB_10014cf64;
LAB_10014cee8:
    psVar1 = psVar17 + uVar12;
    psVar8 = psVar17;
    while (((psVar9 = psVar1, 2 < (long)uVar12 &&
            (psVar8 = _memchr(psVar8,0x3a,uVar12 - 2), psVar8 != (string *)0x0)) &&
           (psVar9 = psVar8, *(short *)psVar8 != 0x2f3a || psVar8[2] != (string)0x2f))) {
      psVar8 = psVar8 + 1;
      uVar12 = (long)psVar1 - (long)psVar8;
    }
    uVar12 = (long)psVar9 - (long)psVar17;
    if (psVar9 == psVar1) {
      uVar12 = 0xffffffffffffffff;
    }
    uVar3 = 0;
    if (uVar12 != 0xffffffffffffffff) {
      uVar3 = uVar12 + 3;
    }
    psVar17 = psVar15;
    if ((char)bVar4 < '\0') {
      uVar19 = *(ulong *)(param_1 + 0x440);
      psVar17 = *(string **)(param_1 + 0x438);
    }
    if (uVar19 < uVar3) {
      lVar20 = -1;
    }
    else {
      psVar8 = psVar17 + uVar3;
      psVar1 = psVar17 + uVar19;
      while (((psVar9 = psVar1, 0 < (long)psVar1 - (long)psVar8 &&
              (psVar8 = _memchr(psVar8,0x3a,(long)psVar1 - (long)psVar8), psVar8 != (string *)0x0))
             && (psVar9 = psVar8, *psVar8 != (string)0x3a))) {
        psVar8 = psVar8 + 1;
      }
      lVar20 = (long)psVar9 - (long)psVar17;
      if (psVar9 == psVar1) {
        lVar20 = -1;
      }
    }
    if (uVar12 == 0xffffffffffffffff) {
      local_81 = '\x03';
      local_98 = 0x637269;
    }
    else {
      std::string::string((string *)&local_98,psVar15,0,uVar12,(allocator *)psVar15);
    }
    std::string::string(&local_80,(string *)&local_98);
    std::string::operator=((string *)(param_1 + 0x218),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    if (local_81 < '\0') {
      operator_delete((void *)CONCAT44(uStack_94,local_98));
    }
    std::string::string((string *)&local_98,psVar15,uVar3,lVar20 - uVar3,(allocator *)psVar15);
    std::string::string(&local_80,(string *)&local_98);
    std::string::operator=((string *)(param_1 + 0x230),&local_80);
    if (local_69 < '\0') {
      operator_delete((void *)CONCAT71(uStack_7f,local_80));
    }
    if (local_81 < '\0') {
      operator_delete((void *)CONCAT44(uStack_94,local_98));
    }
    std::string::operator=((string *)(param_1 + 0x250),(string *)(param_1 + 0x450));
    if (lVar20 == -1) {
      uVar6 = 0x1a0b;
      goto LAB_10014d128;
    }
    if (*(char *)(param_1 + 0x44f) < '\0') {
      psVar15 = *(string **)psVar15;
    }
    local_80 = (string)0x0;
    uVar6 = FUN_1004d2744(psVar15 + lVar20 + 1,&local_80);
    *(undefined4 *)(param_1 + 0x248) = uVar6;
  }
  *(undefined1 *)(param_1 + 0x274) = *(undefined1 *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x46c);
  iVar5 = *(int *)(param_1 + 0x470);
  FUN_100148f60();
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x470) != 0) {
      lVar20 = 0;
      uVar19 = 0;
      do {
        lVar13 = *(long *)(param_1 + 0x478);
        lVar10 = lVar13 + lVar20;
        if (*(char *)(lVar10 + 0x17) < '\0') {
          lVar10 = *(long *)(lVar13 + lVar20);
        }
        lVar13 = lVar13 + lVar20;
        if (*(char *)(lVar13 + 0x37) < '\0') {
          lVar11 = *(long *)(lVar13 + 0x20);
        }
        else {
          lVar11 = lVar13 + 0x20;
        }
        FUN_100149030(lVar10,*(undefined4 *)(lVar13 + 0x18),lVar11,*(undefined1 *)(param_1 + 0x4d8))
        ;
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 0x38;
      } while (uVar19 < *(uint *)(param_1 + 0x470));
    }
    FUN_100148a7c(3000);
  }
  iVar5 = FUN_10052b78c();
  if (iVar5 != 0) {
    FUN_10052b83c(*(undefined1 *)(param_1 + 0x618));
  }
  FUN_1004f0b74(lVar18);
  if (local_58 < 0) {
    operator_delete(local_68);
  }
LAB_10014d1d4:
  if (((*(char *)(param_1 + 0x273) == '\0') && (iVar5 = FUN_1004eef10(), iVar5 != 0)) &&
     (iVar5 = FUN_1004f0390(), iVar5 != 0)) {
    FUN_100105200();
    *(undefined1 *)(param_1 + 0x273) = 1;
  }
  iVar5 = FUN_1004eef24();
  if ((iVar5 == 0) || (*(char *)(param_1 + 0x273) == '\0')) {
    bVar14 = false;
  }
  else {
    lVar18 = param_1 + 0x620;
    iVar5 = FUN_1004f1698(lVar18);
    if ((iVar5 == 0) || (*(uint *)(param_1 + 0x648) == 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = false;
      lVar10 = (ulong)*(uint *)(param_1 + 0x648) * 0x148;
      lVar20 = *(long *)(param_1 + 0x650) + 0x140;
      do {
        if (((*(byte *)(lVar20 + 2) & 8) == 0) || (DAT_101e3cee0 == (code *)0x0)) {
          if ((*(byte *)(lVar20 + 2) & 1) == 0) {
            bVar14 = true;
          }
        }
        else {
          (*DAT_101e3cee0)(lVar20 + -0x110);
        }
        lVar20 = lVar20 + 0x148;
        lVar10 = lVar10 + -0x148;
      } while (lVar10 != 0);
    }
    uVar19 = FUN_1004f1670(lVar18);
    if ((uVar19 & 1) == 0) {
      FUN_1004f15d8(lVar18);
      FUN_1004f02dc(lVar18);
    }
  }
  if (DAT_101d91788 != 0) {
    psVar16 = (short *)(DAT_101d91790 + 0x140);
    lVar18 = (ulong)DAT_101d91788 * 0x148;
    do {
      if (*psVar16 != -6) {
        if (((*(byte *)(psVar16 + 1) & 8) == 0) || (DAT_101e3cee0 == (code *)0x0)) {
          bVar14 = (bool)((*(byte *)(psVar16 + 1) & 1) == 0 | bVar14);
        }
        else {
          (*DAT_101e3cee0)(psVar16 + -0x88);
        }
      }
      psVar16 = psVar16 + 0xa4;
      lVar18 = lVar18 + -0x148;
    } while (lVar18 != 0);
  }
  if (DAT_101d91790 != 0) {
    if (DAT_101d91788 != 0) {
      lVar20 = (ulong)DAT_101d91788 * 0x148;
      lVar18 = DAT_101d91790;
      do {
        lVar18 = FUN_10014ea98(lVar18);
        lVar18 = lVar18 + 0x148;
        lVar20 = lVar20 + -0x148;
      } while (lVar20 != 0);
    }
    DAT_101d91788 = 0;
  }
  if (bVar14) {
    FUN_1004f030c();
  }
  return;
}




void FUN_10014d35c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((((*(char *)(param_1 + 0x272) != '\0') && (iVar1 = FUN_1001e3068(), iVar1 != 0)) &&
      (uVar2 = FUN_1001e307c(), (uVar2 & 1) == 0)) && (*(int *)(param_1 + 0x280) != 0)) {
    FUN_10014db90(param_1);
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  return;
}




void FUN_10014d3a4(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 200) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010014d3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10014d3e8(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x148;
      do {
        lVar1 = FUN_10014ea98(lVar1);
        lVar1 = lVar1 + 0x148;
        lVar2 = lVar2 + -0x148;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
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




void FUN_10014d454(long param_1,string *param_2,string *param_3)

{
  long lVar1;
  size_t sVar2;
  undefined8 ***pppuVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 **local_48;
  size_t local_40;
  byte local_31;
  
  std::string::operator=((string *)(param_1 + 0x1e8),param_2);
  std::string::operator=((string *)(param_1 + 0x200),param_3);
  FUN_1004eee2c(1);
  FUN_10012cbe0(&local_48);
  uVar6 = (ulong)local_31;
  if (-1 < (char)local_31) {
    local_40 = uVar6;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_40 == sVar2) {
    pppuVar3 = (undefined8 ***)local_48;
    if (-1 < (char)local_31) {
      pppuVar3 = &local_48;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)local_31 < '\0') {
      if ((local_40 == 0) || (iVar5 = _memcmp(pppuVar3,pbVar8,local_40), iVar5 == 0))
      goto LAB_10014d578;
    }
    else {
      if (local_40 == 0) {
LAB_10014d578:
        *(undefined1 *)(param_1 + 0x2dc) = 1;
        goto LAB_10014d580;
      }
      if ((uint)*pbVar8 == ((uint)local_48 & 0xff)) {
        pbVar7 = (byte *)((ulong)&local_48 | 1);
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar6 == 0) goto LAB_10014d578;
          bVar4 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar4 == *pbVar8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  lVar1 = param_1 + 0x288;
  FUN_1004edcd4(lVar1);
  pppuVar3 = (undefined8 ***)local_48;
  if (-1 < (char)local_31) {
    pppuVar3 = &local_48;
  }
  FUN_1004edd94(lVar1,pppuVar3);
  FUN_1004eddf4(lVar1,0,FUN_10014ec48);
LAB_10014d580:
  FUN_10014cd08(param_1,2,0,0);
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_10014d5b8(long param_1,long *param_2,string *param_3,long param_4,string *param_5,
                  undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  string *psVar3;
  string sVar4;
  byte bVar5;
  undefined8 uVar6;
  void *local_58 [2];
  char local_41;
  
  sVar4 = param_5[0x17];
  uVar1 = *(uint *)(param_5 + 8);
  if (-1 < (char)sVar4) {
    uVar1 = (uint)(byte)sVar4;
  }
  if (uVar1 != 0) {
    psVar3 = *(string **)param_5;
    if (-1 < (char)sVar4) {
      psVar3 = param_5;
    }
    FUN_1004eee68(psVar3,param_6,1);
    std::string::operator=((string *)(param_1 + 0x198),param_5);
    *(int *)(param_1 + 0x1b0) = (int)param_6;
    FUN_10052b2d4(local_58);
    uVar6 = FUN_10012ea00();
    bVar5 = *(byte *)((long)param_2 + 0x17);
    uVar1 = *(uint *)(param_2 + 1);
    if (-1 < (char)bVar5) {
      uVar1 = (uint)bVar5;
    }
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_4 + 8);
      if (-1 < (char)*(byte *)(param_4 + 0x17)) {
        uVar1 = (uint)*(byte *)(param_4 + 0x17);
      }
      if (uVar1 == 0) {
        FUN_1004eefd0(&DAT_101e3cec8,local_58,uVar6);
      }
      else {
        FUN_1004ef018(&DAT_101e3cec8,local_58,param_4,uVar6);
      }
    }
    else {
      plVar2 = (long *)*param_2;
      if (-1 < (char)bVar5) {
        plVar2 = param_2;
      }
      psVar3 = *(string **)param_3;
      if (-1 < (char)param_3[0x17]) {
        psVar3 = param_3;
      }
      FUN_1004ef054(&DAT_101e3cec8,local_58,plVar2,psVar3);
      std::string::operator=((string *)(param_1 + 0x1d0),param_3);
    }
    FUN_10014cd08(param_1,4,0,0);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  return;
}




void FUN_10014d6fc(long param_1,string *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  string *psVar2;
  string sVar3;
  undefined8 uVar4;
  void *local_48 [2];
  char local_31;
  
  sVar3 = param_2[0x17];
  uVar1 = *(uint *)(param_2 + 8);
  if (-1 < (char)sVar3) {
    uVar1 = (uint)(byte)sVar3;
  }
  if (uVar1 != 0) {
    psVar2 = *(string **)param_2;
    if (-1 < (char)sVar3) {
      psVar2 = param_2;
    }
    FUN_1004eee68(psVar2,param_3,1);
    std::string::operator=((string *)(param_1 + 0x198),param_2);
    *(int *)(param_1 + 0x1b0) = (int)param_3;
    FUN_10052b2d4(local_48);
    uVar4 = FUN_10012ea00();
    FUN_1004ef0e8(&DAT_101e3cec8,local_48,param_4,local_48,uVar4);
    FUN_10014cd08(param_1,4,0,0);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return;
}




void FUN_10014d7bc(long param_1)

{
  std::string::operator=((string *)(param_1 + 0x198),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  FUN_1004eee88();
  *(undefined2 *)(param_1 + 0x270) = 0;
  FUN_10014cd08(param_1,1,0,0);
  return;
}




void FUN_10014d808(undefined8 param_1,int param_2)

{
  FUN_10014cb30();
  FUN_1004eeee4();
  if (param_2 != 0) {
    FUN_10014d910();
    return;
  }
  FUN_10014d844(param_1);
  return;
}




void FUN_10014d844(ushort *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  
  FUN_10012dd60();
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    uVar5 = 0x1f;
  }
  else {
    uVar5 = param_1[(ulong)uVar1 * 0x1c + 4];
    uVar1 = *param_1 >> 5 & 0x1f;
    if (uVar1 != 0x1f) {
      uVar6 = param_1[(ulong)uVar1 * 0x1c + 4];
      goto LAB_10014d89c;
    }
  }
  uVar6 = 0x1f;
LAB_10014d89c:
  FUN_1001031dc("sessionBooted",uVar5,uVar6,param_1 + 0xcc,*(undefined4 *)(param_1 + 0x174));
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONBOOTED_TITLE",0);
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONBOOTED_MSG",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar2,uVar3,uVar4,param_1,thunk_FUN_10014e0fc);
  return;
}




void FUN_10014d910(ushort *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    uVar5 = 0x1f;
  }
  else {
    uVar5 = param_1[(ulong)uVar1 * 0x1c + 4];
    uVar1 = *param_1 >> 5 & 0x1f;
    if (uVar1 != 0x1f) {
      uVar6 = param_1[(ulong)uVar1 * 0x1c + 4];
      goto LAB_10014d964;
    }
  }
  uVar6 = 0x1f;
LAB_10014d964:
  FUN_1001031dc("sessionExpired",uVar5,uVar6,param_1 + 0xcc,*(undefined4 *)(param_1 + 0x174));
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONEXPIRED_TITLE",0);
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONEXPIRED_MSG",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar2,uVar3,uVar4,param_1,thunk_FUN_10014e0fc);
  return;
}




void FUN_10014d9d8(ushort *param_1,string *param_2)

{
  ulong uVar1;
  
  if (((int)((ulong)*param_1 & 0x1f) != 0x1f) && (param_1[((ulong)*param_1 & 0x1f) * 0x1c + 4] == 6)
     ) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      uVar1 = (ulong)(byte)param_2[0x17];
    }
    if (uVar1 != 0) {
      FUN_1004f077c(param_2);
    }
  }
  std::string::operator=((string *)(param_1 + 0xdc),param_2);
  return;
}




void FUN_10014da44(long param_1,undefined8 param_2,string *param_3)

{
  long lVar1;
  string *psVar2;
  
  if ((*(long *)(param_1 + 0x490) == 0) ||
     (lVar1 = FUN_10014ec50(param_1 + 0x480), param_1 + 0x488 == lVar1)) {
    psVar2 = (string *)&DAT_101d91198;
  }
  else {
    psVar2 = (string *)(lVar1 + 0x38);
  }
  std::string::operator=(param_3,psVar2);
  return;
}




void FUN_10014da94(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10052b2d4(local_38);
  uVar1 = FUN_10012ea00();
  FUN_1004efff8(local_38,param_1 + 0x2f0,uVar1);
  *(undefined1 *)(param_1 + 0x271) = 1;
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10014daec(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    FUN_1004eeee4();
    *(undefined1 *)(param_1 + 0x271) = 0;
    iVar1 = FUN_10052b78c();
    if (iVar1 != 0) {
      FUN_10052b788();
    }
    FUN_1004e3004(param_1 + 0x268);
    *(byte *)(param_1 + 0x271) = (byte)param_4 ^ 1;
    FUN_10014cd08(param_1,1,0,0);
  }
  if (((*(char *)(param_1 + 0x272) != '\0') && (iVar1 = FUN_1001e3068(), iVar1 != 0)) &&
     (uVar2 = FUN_1001e307c(), (uVar2 & 1) == 0)) {
    FUN_10014db90(param_1,param_2);
    return;
  }
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x271) = 0;
    *(int *)(param_1 + 0x280) = (int)param_2;
  }
  return;
}




void FUN_10014db90(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    FUN_10014dbd4();
    return;
  case 2:
    FUN_10014dc54();
    return;
  case 3:
    FUN_10014dd94();
    return;
  case 4:
    FUN_10014de08();
    return;
  case 5:
    FUN_10014df00();
    return;
  case 6:
    FUN_10014de7c();
    return;
  default:
    return;
  case 8:
    FUN_10014d844();
    return;
  }
}




void FUN_10014dbd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100104e80("connectFailed");
  uVar1 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_PLATFORMCONNECT_TITLE",0);
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_PLATFORMCONNECT_MSG",0);
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_PLATFORMCONNECT_ACCEPT",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,thunk_FUN_10014e0fc);
  return;
}




void FUN_10014dc54(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_1004d29d0();
  if (*(long *)(param_1 + 0x2e0) == 0 || lVar2 < *(long *)(param_1 + 0x2e0) + 0xf) {
    *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
  }
  *(long *)(param_1 + 0x2e0) = lVar2;
  FUN_100104e80("connectionDropped");
  if (*(int *)(param_1 + 0x2e8) == 3) {
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    iVar1 = FUN_10052b408();
    if (iVar1 != 0) {
      uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
      uVar4 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
      uVar5 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
      uVar6 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_REJECT",0);
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,thunk_FUN_10014e0fc,FUN_10014e190);
      return;
    }
  }
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
  uVar4 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
  uVar5 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
  FUN_1001e3090(uVar3,uVar4,uVar5,param_1,thunk_FUN_10014e0fc);
  return;
}




void FUN_10014dd94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_OFFLINE_TITLE",0);
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_OFFLINE_MSG",0);
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_OFFLINE_ACCEPT",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,thunk_FUN_10014e00c);
  return;
}




void FUN_10014de08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_UPDATE_TITLE",0);
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_UPDATE_MSG",0);
  uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_UPDATE_ACCEPT",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,thunk_FUN_10014e084);
  return;
}




void FUN_10014de7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10012dd60();
  FUN_100104e80("authenticationFailed");
  uVar1 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_TITLE",0);
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_MSG",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,thunk_FUN_10014e0fc);
  return;
}




void FUN_10014df00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10012dd60();
  FUN_10012de80();
  FUN_100104e80("unknownPlayer");
  uVar1 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_TITLE",0);
  uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_MSG",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,thunk_FUN_10014e0fc);
  return;
}




void FUN_10014df88(void)

{
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012cf28();
  FUN_1004d26c0(auStack_128,0x100,"mailto:%s?subject=%s");
  FUN_10052b410(auStack_128);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10014e00c(void)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  iVar2 = FUN_10052b408();
  if (iVar2 != 0) {
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_10012e118(0,0,0,0,&local_38,0);
    pppuVar1 = (undefined8 ***)local_38;
    if (-1 < local_28) {
      pppuVar1 = &local_38;
    }
    FUN_10052b410(pppuVar1);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}




void FUN_10014e084(void)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  iVar2 = FUN_10052b408();
  if (iVar2 != 0) {
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_10012e118(&local_38,0,0,0,0,0);
    pppuVar1 = (undefined8 ***)local_38;
    if (-1 < local_28) {
      pppuVar1 = &local_38;
    }
    FUN_10052b410(pppuVar1);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}




void FUN_10014e0fc(ushort *param_1)

{
  if (((int)((ulong)*param_1 & 0x1f) != 0x1f) && (param_1[((ulong)*param_1 & 0x1f) * 0x1c + 4] == 6)
     ) {
    return;
  }
  FUN_10014d7bc(DAT_101e3cee8);
  FUN_10014d454(DAT_101e3cee8,&DAT_101d91198,&DAT_101d91198);
  return;
}




void FUN_10014e160(void)

{
  FUN_10014d7bc(DAT_101e3cee8);
  return;
}




void FUN_10014e16c(void)

{
  FUN_10014d454(DAT_101e3cee8,&DAT_101d91198,&DAT_101d91198);
  return;
}




void thunk_FUN_10014e00c(void)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 **ppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar2 = FUN_10052b408();
  if (iVar2 != 0) {
    ppuStack_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    lStack_28 = 0;
    FUN_10012e118(0,0,0,0,&ppuStack_38,0);
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (-1 < lStack_28) {
      pppuVar1 = &ppuStack_38;
    }
    FUN_10052b410(pppuVar1);
    if (lStack_28 < 0) {
      operator_delete(ppuStack_38);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}




void thunk_FUN_10014e084(void)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 **ppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  iVar2 = FUN_10052b408();
  if (iVar2 != 0) {
    ppuStack_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    lStack_28 = 0;
    FUN_10012e118(&ppuStack_38,0,0,0,0,0);
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (-1 < lStack_28) {
      pppuVar1 = &ppuStack_38;
    }
    FUN_10052b410(pppuVar1);
    if (lStack_28 < 0) {
      operator_delete(ppuStack_38);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}




void thunk_FUN_10014e0fc(ushort *param_1)

{
  if (((int)((ulong)*param_1 & 0x1f) != 0x1f) && (param_1[((ulong)*param_1 & 0x1f) * 0x1c + 4] == 6)
     ) {
    return;
  }
  FUN_10014d7bc(DAT_101e3cee8);
  FUN_10014d454(DAT_101e3cee8,&DAT_101d91198,&DAT_101d91198);
  return;
}




void FUN_10014e190(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b408();
  if (iVar1 != 0) {
    FUN_10014df88("Connection%20Dropped");
    return;
  }
  return;
}




void FUN_10014e1b8(void)

{
  operator_new(0x660);
  DAT_101e3cee8 = FUN_10014bd8c();
  return;
}




void FUN_10014e1dc(void)

{
  void *pvVar1;
  
  if (DAT_101e3cee8 != 0) {
    pvVar1 = (void *)FUN_10014cbe0();
    operator_delete(pvVar1);
  }
  DAT_101e3cee8 = 0;
  return;
}




ulong FUN_10014e20c(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004ef20c();
  if ((int)uVar2 != 0) {
    uVar1 = FUN_10052b840();
    uVar2 = (ulong)(uVar1 ^ 1);
  }
  return uVar2;
}




void FUN_10014e22c(undefined8 param_1,undefined8 param_2)

{
  FUN_10014d454(DAT_101e3cee8,param_1,param_2);
  return;
}




void FUN_10014e240(undefined8 param_1)

{
  FUN_10014d808(DAT_101e3cee8,param_1);
  return;
}




void FUN_10014e250(void)

{
  FUN_10014ce24(DAT_101e3cee8);
  return;
}




void FUN_10014e25c(undefined8 param_1,undefined8 param_2)

{
  void *local_38 [2];
  char local_21;
  
  FUN_1000ee4ec(local_38,"");
  FUN_10012d9ec(param_1,param_2,local_38,1);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10014e2b8(undefined1 param_1)

{
  *(undefined1 *)(DAT_101e3cee8 + 0x272) = param_1;
  return;
}




void FUN_10014e2cc(long param_1,int *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  *param_3 = 1;
  FUN_1004f03c0();
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 == 0 || *param_2 == 0) {
    FUN_1004f03a4(param_1,param_2);
    *param_3 = 0;
  }
  return;
}




void FUN_10014e338(string *param_1,string *param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = DAT_101e3cee8;
  std::string::operator=(param_1,(string *)(DAT_101e3cee8 + 0x218));
  std::string::operator=(param_2,(string *)(lVar1 + 0x230));
  *param_3 = *(undefined4 *)(lVar1 + 0x248);
  return;
}




void FUN_10014e384(string *param_1)

{
  std::string::operator=(param_1,(string *)(DAT_101e3cee8 + 0x250));
  return;
}




long FUN_10014e398(void)

{
  return DAT_101e3cee8 + 0x1b8;
}




void FUN_10014e3a8(undefined8 param_1)

{
  FUN_10014d9d8(DAT_101e3cee8,param_1);
  return;
}




void FUN_10014e3b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = DAT_101e3cee8;
  FUN_10003330c(local_38,param_2);
  FUN_10014da44(uVar1,local_38,param_1);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10014e418(undefined8 param_1)

{
  DAT_101e3cee0 = param_1;
  return;
}




undefined1 FUN_10014e424(void)

{
  return *(undefined1 *)(DAT_101e3cee8 + 0x274);
}




void FUN_10014e434(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(DAT_101e3cee8 + 0x278) == -1 || param_3 < *(int *)(DAT_101e3cee8 + 0x278)) {
    return;
  }
  FUN_10010990c();
  return;
}




void FUN_10014e6d4(undefined8 param_1)

{
  FUN_10003330c(param_1,&DAT_101e3cec8);
  return;
}




void FUN_10014e6e4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10014e7ec();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10014e6f8(void)

{
  return 5;
}




void FUN_10014e700(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145b470;
  FUN_10014d3e8(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10014e738(void)

{
  return 0x1c;
}




void FUN_10014e740(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x28) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x28) * 0x148;
      do {
        lVar1 = FUN_10014ea98(lVar1);
        lVar1 = lVar1 + 0x148;
        lVar2 = lVar2 + -0x148;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_10014e788(void)

{
  return;
}




void FUN_10014e78c(long param_1)

{
  FUN_10014cb30(*(undefined8 *)(param_1 + 8));
  FUN_1004eee88();
  FUN_10014d454(DAT_101e3cee8,&DAT_101d91198,&DAT_101d91198);
  return;
}




void FUN_10014e7bc(long param_1)

{
  FUN_10014cb30(*(undefined8 *)(param_1 + 8));
  FUN_1004eee88();
  FUN_10014d454(DAT_101e3cee8,&DAT_101d91198,&DAT_101d91198);
  return;
}




void FUN_10014e7ec(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10014e7ec_10145b440;
  if (*(char *)((long)param_1 + 0x327) < '\0') {
    operator_delete((void *)param_1[0x62]);
  }
  if (*(char *)((long)param_1 + 0x30f) < '\0') {
    operator_delete((void *)param_1[0x5f]);
  }
  if (*(char *)((long)param_1 + 0x2f7) < '\0') {
    operator_delete((void *)param_1[0x5c]);
  }
  if (*(char *)((long)param_1 + 0x2d7) < '\0') {
    operator_delete((void *)param_1[0x58]);
  }
  if (*(char *)((long)param_1 + 0x2bf) < '\0') {
    operator_delete((void *)param_1[0x55]);
  }
  if (*(char *)((long)param_1 + 0x29f) < '\0') {
    operator_delete((void *)param_1[0x51]);
  }
  if (*(char *)((long)param_1 + 0x287) < '\0') {
    operator_delete((void *)param_1[0x4e]);
  }
  if (*(char *)((long)param_1 + 0x26f) < '\0') {
    operator_delete((void *)param_1[0x4b]);
  }
  if (*(char *)((long)param_1 + 599) < '\0') {
    operator_delete((void *)param_1[0x48]);
  }
  if (*(char *)((long)param_1 + 0x237) < '\0') {
    operator_delete((void *)param_1[0x44]);
  }
  if (*(char *)((long)param_1 + 0x21f) < '\0') {
    operator_delete((void *)param_1[0x41]);
  }
  if (*(char *)((long)param_1 + 0x207) < '\0') {
    operator_delete((void *)param_1[0x3e]);
  }
  if (*(char *)((long)param_1 + 0x1d7) < '\0') {
    operator_delete((void *)param_1[0x38]);
  }
  if (*(char *)((long)param_1 + 0x1bf) < '\0') {
    operator_delete((void *)param_1[0x35]);
  }
  FUN_1001347f4(param_1 + 0x32,param_1[0x33]);
  FUN_10014e9b0(param_1 + 0x30,1);
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    operator_delete((void *)param_1[0x2c]);
  }
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    operator_delete((void *)param_1[0x29]);
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    operator_delete((void *)param_1[0x26]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    operator_delete((void *)param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    operator_delete((void *)param_1[0x19]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    operator_delete((void *)param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  FUN_10014ea3c(param_1 + 6);
  FUN_10014ea60(param_1 + 0xb);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10014ea3c(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    pvVar1 = (void *)FUN_1000f7b54();
    operator_delete(pvVar1);
    return;
  }
  return;
}




void FUN_10014ea60(long param_1)

{
  _free(*(void **)(param_1 + 0x10));
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}




undefined8 * FUN_10014ea98(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    operator_delete((void *)param_1[0x24]);
  }
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    operator_delete((void *)param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    operator_delete((void *)param_1[0x1d]);
  }
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    operator_delete((void *)param_1[0x17]);
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    operator_delete((void *)param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_10014eb80(param_1 + 0xc,1);
  FUN_10014ebf8(param_1 + 9,param_1[10]);
  FUN_1001347f4(param_1 + 6,param_1[7]);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




void FUN_10014eb80(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 5;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
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




void FUN_10014ebf8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10014ebf8(param_1,*param_2);
    FUN_10014ebf8(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10014ec48(undefined8 param_1,undefined8 param_2)

{
  FUN_10014e454(param_2);
  return;
}




long * FUN_10014ec50(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_10014ecd0(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_10014ecd0(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_10014ecd0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10014ed40;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10014ed40:
  return uVar8 >> 0x1f;
}




void FUN_10014ed50(void)

{
  DAT_101e3cd50 = 0xff;
  DAT_101e3cd52 = 0xffff;
  DAT_101e3cd54 = 0xffff;
  DAT_101e3cd56 = 0xffbc9c44;
  DAT_101e3cd5a = 0xff1166f2;
  DAT_101e3cd5e = 0xffe0e0e0;
  DAT_101e3cd62 = 0xffa0a0a0;
  DAT_101e3cd66 = 0xff8c8c8c;
  DAT_101e3cd6a = 0xff322213;
  DAT_101e3cd6e = 0xff091911;
  DAT_101e3cd72 = 0xff170c19;
  DAT_101e3cd76 = 0xff241a14;
  DAT_101e3cd7a = 0xff14171c;
  DAT_101e3cd7e = 0xff221911;
  DAT_101e3cd82 = 0xff1a1416;
  DAT_101e3cd86 = 0xff121414;
  DAT_101e3cd8a = 0xff1a1809;
  DAT_101e3cd8e = 0xff141414;
  DAT_101e3cd92 = 0xff141414;
  DAT_101e3cd96 = 0xff2929c0;
  DAT_101e3cd9a = 0xff283082;
  DAT_101e3cd9e = 0xff5262cc;
  DAT_101e3cda2 = 0xff283082;
  DAT_101e3cda6 = 0xff5262cc;
  DAT_101e3cdaa = 0xff745c42;
  DAT_101e3cdae = 0xff184155;
  DAT_101e3cdb2 = 0xff92665e;
  DAT_101e3cdb6 = 0xffbc9c44;
  DAT_101e3cdba = 0xffbbae56;
  DAT_101e3cdbe = 0xff8b7b01;
  DAT_101e3cdc2 = 0xff90b3ef;
  DAT_101e3cdc6 = 0xff728ebe;
  DAT_101e3cdca = 0xff19459d;
  DAT_101e3cdce = 0xff9d877b;
  DAT_101e3cdd2 = 0xffcbb1a3;
  DAT_101e3cdd6 = 0xff3f6fb5;
  DAT_101e3cdda = 0xffc5c5c5;
  DAT_101e3cdde = 0xff4fc1f1;
  DAT_101e3cde2 = 0xff606060;
  DAT_101e3cde6 = 0xffc5ff7b;
  DAT_101e3cdea = 0xff5271eb;
  DAT_101e3cdee = 0xfffae076;
  DAT_101e3cdf2 = 0xff3ac8f6;
  DAT_101e3cdf6 = 0xffaaaaaa;
  DAT_101e3cdfa = 0xffe19400;
  DAT_101e3cdfe = 0xffe19400;
  DAT_101e3ce02 = 0xffe550b2;
  DAT_101e3ce06 = 0xfff22ae8;
  DAT_101e3ce0a = 0xff005ae1;
  DAT_101e3ce0e = 0xff1addfa;
  DAT_101e3ce12 = 0xff2424b3;
  DAT_101e3ce16 = 0xff2424b3;
  DAT_101e3ce1a = 0xff646464;
  DAT_101e3ce1e = 0xff92665e;
  DAT_101e3ce22 = 0xff646037;
  DAT_101e3ce2c = 0xff1111a1;
  DAT_101e3ce30 = 0xff321ee1;
  DAT_101e3ce34 = 0xffc8c8c8;
  DAT_101e3ce38 = 0xff321ee1;
  DAT_101e3ce44 = 0xff6259b3;
  DAT_101e3ce48 = 0xff506e73;
  DAT_101e3ce4c = 0xff9dbf86;
  DAT_101e3ce28 = 0xffffffff;
  DAT_101e3ce50 = 0xffa35244;
  DAT_101e3ce3c = 0xff7fe801;
  DAT_101e3ce54 = 0xffca828e;
  DAT_101e3ce40 = 0xffffffff;
  DAT_101e3ce58 = 0xffa6a6a6;
  DAT_101e3ce5c = 0xffa6a6a6;
  DAT_101e3ce60 = 0xffffffff;
  DAT_101e3ce64 = 0xff88ea2f;
  DAT_101e3ce68 = 0xff8c8c8c;
  DAT_101e3ce6c = 0xffffb400;
  DAT_101e3ce70 = 0xffff00ff;
  DAT_101e3ce74 = 0xff00aded;
  DAT_101e3ce78 = 0xff33d3ff;
  DAT_101e3ce7c = 0xff7fe801;
  DAT_101e3ce80 = 0xff282828;
  DAT_101e3ce84 = 0xfff0f0f0;
  DAT_101e3ce88 = 0xffa4781e;
  DAT_101e3ce8c = 0xffa6654b;
  DAT_101e3ce90 = 0xff93435b;
  DAT_101e3ce94 = 0xff387f9c;
  DAT_101e3ce98 = 0xffa3781e;
  DAT_101e3ce9c = 0xffffd18a;
  DAT_101e3cea0 = 0xffff61f7;
  DAT_101e3cea4 = 0xff5de1f2;
  DAT_101e3cea8 = 0xff80eaff;
  DAT_101e3ceac = 0xff32e00e;
  DAT_101e3ceb0 = 0xff5a3c10;
  DAT_101e3ceb4 = 0xff330b03;
  DAT_101e3ceb8 = 0xff33031d;
  DAT_101e3cebc = 0xff032433;
  DAT_101e3cec0 = 0xff9e8e8d;
  FUN_1000ee4ec(&DAT_101e3cec8,"kindred");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e3cec8,0x100000000);
  return;
}




undefined8 * FUN_10014f448(void)

{
  void *pvVar1;
  
  if (DAT_101e3cef0 == (undefined8 *)0x0) {
    DAT_101e3cef0 = operator_new(0x18);
    *DAT_101e3cef0 = 0;
    DAT_101e3cef0[1] = 0;
    *(undefined4 *)(DAT_101e3cef0 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e3cef8 = pvVar1;
  }
  return DAT_101e3cef0;
}




undefined8 * FUN_10014f4a0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_10014f51c_10145b4c8;
  plVar5 = (long *)FUN_10014f448();
  ppVar4 = DAT_101e3cef8;
  _pthread_mutex_lock(DAT_101e3cef8);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_10014f51c(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_10014f51c_10145b4c8;
  uVar2 = FUN_10014f448();
  ppVar1 = DAT_101e3cef8;
  _pthread_mutex_lock(DAT_101e3cef8);
  FUN_10014f57c(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_10014f57c(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_10014f51c(void)

{
  FUN_10014f51c();
  return;
}




void FUN_10014f5e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10014f51c();
  operator_delete(pvVar1);
  return;
}




void FUN_10014f5f4(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_10014f630(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined **local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined8 local_240;
  void *local_238;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [456];
  
  puVar1 = (undefined8 *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  FUN_100155680(&local_288,param_1);
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  plVar2 = (long *)*puVar1;
  if (plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_288);
      (**(code **)(*plVar2 + 0x38))(plVar2,auStack_220);
      plVar2 = (long *)plVar2[2];
    } while (plVar2 != (long *)0x0);
  }
  local_288 = &PTR_FUN_10145b860;
  FUN_10015613c(auStack_208);
  FUN_100156080(auStack_230,1);
  if (local_238 != (void *)0x0) {
    operator_delete__(local_238);
    local_240 = 0;
    local_238 = (void *)0x0;
  }
  FUN_100155f24(auStack_250,1);
  FUN_100155eac(auStack_260,1);
  FUN_1004f15a8(&local_288);
  return;
}




void FUN_10014f728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b860;
  FUN_10015613c(param_1 + 0x10);
  FUN_100156080(param_1 + 0xb,1);
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_100155f24(param_1 + 7,1);
  FUN_100155eac(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10014f78c(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 local_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined4 local_58;
  undefined1 auStack_50 [16];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145b890;
  local_58 = *(undefined4 *)(param_1 + 0x28);
  FUN_100156224(auStack_50,param_1 + 0x30);
  local_78 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_68 = 0;
  uStack_63 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145b890;
  FUN_100156550(auStack_50,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_10014f858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b890;
  FUN_100156550(param_1 + 6,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10014f88c(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  }
  return;
}




void FUN_10014f8d0(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_10014f9c0(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_10014fab0(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x80))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_10014fb74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10014fbb0(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145b8f0;
  FUN_100156704(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x90))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145b8f0;
  FUN_10015690c(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_10014fc7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b8f0;
  FUN_10015690c(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10014fcb0(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145b8f0;
  FUN_100156704(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x98))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145b8f0;
  FUN_10015690c(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_10014fd7c(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0xa0))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_10014fe40(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_10014ff04(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x88))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_10014ffc8(long param_1)

{
  long *plVar1;
  undefined **local_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined8 local_38;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_60 = &PTR_thunk_FUN_1004f15a8_10145b920;
  local_58 = 0;
  local_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0xb0))(plVar1,&local_60);
  }
  FUN_1004f15a8(&local_60);
  return;
}

