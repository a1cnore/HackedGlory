// functions/0099a — 53 functions
#include "libGameKindred.h"




void FUN_0099a050(undefined8 param_1)

{
  FUN_00d256d0(param_1,0xd);
  return;
}




void FUN_0099a058(void)

{
  return;
}




void FUN_0099a05c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf318;
  param_1[5] = 0;
  return;
}




void FUN_0099a090(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_0099a098(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar3 = 2;
  }
  else {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c7428(*puVar2,*(undefined8 *)(param_1 + 0x28),FUN_0099a12c,param_2);
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_0099a12c(undefined8 param_1)

{
  FUN_00d256d0(param_1,0xd);
  return;
}




void FUN_0099a134(void)

{
  return;
}




void FUN_0099a138(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf3a0;
  return;
}




undefined8 FUN_0099a168(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c7438(*puVar4);
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_0099a1e8(void)

{
  return;
}




void FUN_0099a1ec(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf428;
  return;
}




undefined8 FUN_0099a21c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c5ffc(0x3e4ccccd,*puVar4);
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_0099a2a4(void)

{
  return;
}




void FUN_0099a2a8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf4b0;
  return;
}




undefined8 FUN_0099a2d8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    FUN_009c52e4(0x3e4ccccd,*puVar4);
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_0099a360(void)

{
  return;
}




void FUN_0099a364(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  *param_1 = &PTR_FUN_027bf538;
  *(undefined4 *)(param_1 + 5) = 3;
  return;
}




void FUN_0099a3a4(long param_1,byte param_2,undefined4 param_3)

{
  *(byte *)(param_1 + 0x24) = param_2 & 1;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}




undefined8 FUN_0099a3b4(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_00e6a474("__HUD__");
    uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1)
    ;
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_009c7470(*puVar4,*(undefined4 *)(param_1 + 0x28));
    }
    else {
      FUN_009c7468();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_0099a44c(void)

{
  return;
}




void FUN_0099a450(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 1;
  *param_1 = &PTR_FUN_027bf5c0;
  *(undefined4 *)(param_1 + 6) = DAT_03218f38;
  uVar1 = DAT_03218f30;
  param_1[7] = "Effect_GoHere_WBeam";
  param_1[5] = uVar1;
  return;
}




void FUN_0099a4ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_0099a4b4(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0099a4d0(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long local_780 [4];
  uint local_760;
  undefined8 local_75c;
  undefined8 local_754;
  undefined8 local_74c;
  undefined8 local_744;
  undefined8 local_73c;
  undefined4 local_734;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined1 local_718;
  undefined1 auStack_710 [96];
  long local_6b0 [4];
  uint local_690;
  undefined8 local_68c;
  undefined8 local_684;
  undefined8 local_67c;
  undefined8 local_674;
  undefined8 local_66c;
  undefined4 local_664;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined4 local_650;
  undefined4 local_64c;
  undefined1 local_648;
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d25570(param_2);
  iVar3 = FUN_00d5cf60();
  uVar5 = uVar4;
  if (iVar3 != -1) {
    FUN_00d5cf60(uVar4);
    uVar5 = FUN_00d9e390();
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    FUN_00d4d9e8(auStack_710);
    FUN_00d4dabc(auStack_710,0x10);
    FUN_00d4d364(auStack_710,0);
    uVar11 = FUN_00d9e840(auStack_710,local_6b0,200,0);
    if (uVar11 != 0) {
      uVar13 = 0;
      lVar7 = 0;
      do {
        lVar12 = local_6b0[uVar13];
        cVar2 = FUN_00d55870(lVar12);
        uVar13 = uVar13 + 1;
        if (cVar2 != '\x02') {
          lVar12 = lVar7;
        }
      } while ((uVar13 < uVar11) && (lVar7 = lVar12, cVar2 != '\x02'));
      if (lVar12 != 0) {
        pbVar10 = *(byte **)(param_1 + 0x38);
        local_780[1] = 0;
        local_780[0] = 0;
        local_780[3] = 0;
        local_780[2] = 0;
        if (pbVar10 == (byte *)0x0) {
          local_760 = 0;
        }
        else {
          uVar11 = (uint)*pbVar10;
          local_760 = 0x811c9dc5;
          if (*pbVar10 != 0) {
            do {
              pbVar10 = pbVar10 + 1;
              local_760 = (local_760 ^ uVar11) * 0x1000193;
              uVar11 = (uint)*pbVar10;
            } while (*pbVar10 != 0);
          }
        }
        local_74c = 0xff000000;
        local_744 = _DAT_03218ef8;
        local_73c = DAT_03218f40;
        local_734 = DAT_03218f48;
        local_754 = 0;
        local_730 = 0;
        uStack_728 = 0;
        local_720 = 0;
        uStack_71c = 0x101;
        local_718 = 0;
        local_75c = 0xfffffffdbf800000;
        local_780[3] = FUN_00d5babc(uVar5);
        local_780[0] = lVar12;
        goto LAB_0099a8c8;
      }
    }
    break;
  case 1:
    plVar9 = *(long **)(param_2 + 0x1420);
    plVar6 = (long *)*plVar9;
    if (plVar6 != (long *)0x0) {
      if ((int)plVar9[1] == (int)plVar6[1]) {
        lVar7 = (**(code **)(*plVar6 + 0x10))();
        if (lVar7 != 0) {
          pbVar10 = *(byte **)(param_1 + 0x38);
          local_6b0[1] = 0;
          local_6b0[0] = 0;
          local_6b0[3] = 0;
          local_6b0[2] = 0;
          if (pbVar10 == (byte *)0x0) {
            local_690 = 0;
          }
          else {
            uVar11 = (uint)*pbVar10;
            local_690 = 0x811c9dc5;
            if (*pbVar10 != 0) {
              do {
                pbVar10 = pbVar10 + 1;
                local_690 = (local_690 ^ uVar11) * 0x1000193;
                uVar11 = (uint)*pbVar10;
              } while (*pbVar10 != 0);
            }
          }
          local_674 = _DAT_03218ef8;
          local_67c = 0xff000000;
          local_684 = 0;
          local_664 = DAT_03218f48;
          local_66c = DAT_03218f40;
          local_660 = 0;
          uStack_658 = 0;
          local_64c = 0x101;
          local_68c = 0xfffffffdbf800000;
          local_650 = 0;
          local_6b0[3] = FUN_00d5babc(uVar5);
          local_6b0[0] = lVar7;
          goto LAB_0099a7b8;
        }
      }
      else {
        *plVar9 = 0;
        *(undefined4 *)(plVar9 + 1) = DAT_03214ce8;
      }
    }
    break;
  case 2:
    pbVar10 = *(byte **)(param_1 + 0x38);
    local_6b0[1] = 0;
    local_6b0[0] = 0;
    local_6b0[3] = 0;
    local_6b0[2] = 0;
    if (pbVar10 == (byte *)0x0) {
      local_690 = 0;
    }
    else {
      uVar11 = (uint)*pbVar10;
      local_690 = 0x811c9dc5;
      if (*pbVar10 != 0) {
        do {
          pbVar10 = pbVar10 + 1;
          local_690 = (local_690 ^ uVar11) * 0x1000193;
          uVar11 = (uint)*pbVar10;
        } while (*pbVar10 != 0);
      }
    }
    local_674 = _DAT_03218ef8;
    local_67c = 0xff000000;
    local_684 = 0;
    local_664 = DAT_03218f48;
    local_66c = DAT_03218f40;
    local_660 = 0;
    uStack_658 = 0;
    local_64c = 0x101;
    local_68c = 0xfffffffdbf800000;
    local_650 = 0;
    local_6b0[3] = FUN_00d5babc(uVar5);
    local_6b0[2] = param_1 + 0x28;
LAB_0099a7b8:
    local_648 = 1;
    plVar6 = local_6b0;
    goto LAB_0099a8cc;
  case 3:
    FUN_00d4d9e8(auStack_710);
    FUN_00d4dabc(auStack_710,0x8000000);
    FUN_00d9e840(auStack_710,local_6b0,200,0);
    lVar7 = local_6b0[0];
    pbVar10 = *(byte **)(param_1 + 0x38);
    local_780[1] = 0;
    local_780[0] = 0;
    local_780[3] = 0;
    local_780[2] = 0;
    if (pbVar10 == (byte *)0x0) {
      local_760 = 0;
    }
    else {
      uVar11 = (uint)*pbVar10;
      local_760 = 0x811c9dc5;
      if (*pbVar10 != 0) {
        do {
          pbVar10 = pbVar10 + 1;
          local_760 = (local_760 ^ uVar11) * 0x1000193;
          uVar11 = (uint)*pbVar10;
        } while (*pbVar10 != 0);
      }
    }
    local_74c = 0xff000000;
    local_744 = _DAT_03218ef8;
    local_73c = DAT_03218f40;
    local_734 = DAT_03218f48;
    local_754 = 0;
    local_730 = 0;
    uStack_728 = 0;
    local_720 = 0;
    uStack_71c = 0x101;
    local_718 = 0;
    local_75c = 0xfffffffdbf800000;
    local_780[3] = FUN_00d5babc(uVar5);
    local_780[0] = lVar7;
LAB_0099a8c8:
    local_718 = 1;
    plVar6 = local_780;
LAB_0099a8cc:
    uVar5 = 1;
    FUN_00d5a548(uVar4,plVar6);
    goto LAB_0099a8d4;
  }
  uVar5 = 2;
LAB_0099a8d4:
  if (*(long *)(lVar1 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}




void FUN_0099a984(void)

{
  FUN_00e6a7ec("Show waypath node\n");
  return;
}




void FUN_0099a990(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf648;
  return;
}




undefined8 FUN_0099a9c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d25570(param_2);
  FUN_00d5a6f4(uVar1,0xfffffffd);
  return 1;
}




void FUN_0099a9e4(void)

{
  return;
}




void FUN_0099a9e8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf6d0;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}




void FUN_0099aa20(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x24) = param_2 & 1;
  return;
}




undefined8 FUN_0099aa2c(long param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) {
    uVar3 = 0;
  }
  else if ((int)param_2[1] == (int)plVar5[1]) {
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    *param_2 = 0;
    uVar3 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar2 = FUN_00e6a474("__PLAYER_LOCK__");
    uVar2 = FUN_0091ed5c("__PLAYER_LOCK__",uVar2,0x12345678);
    plVar5 = (long *)(**(code **)(param_2[0x2d1] + 0x10))(param_2 + 0x2d1,uVar2);
    if (*plVar5 != 0) {
      FUN_00d5c9a8(uVar3);
    }
    FUN_00d5b038(uVar3);
  }
  else {
    FUN_00d55794(uVar3,auStack_88,0);
    FUN_00d58a04(uVar3);
    FUN_00985148(auStack_78,auStack_88,0,0);
    FUN_00ce20fc(auStack_78);
    FUN_00d5af28(uVar3);
    lVar4 = FUN_00d5c72c(uVar3,0x51f);
    if (lVar4 != 0) {
      uVar2 = FUN_00e6a474("__PLAYER_LOCK__");
      uVar2 = FUN_0091ed5c("__PLAYER_LOCK__",uVar2,0x12345678);
      plVar5 = (long *)(**(code **)(param_2[0x2d1] + 0x10))(param_2 + 0x2d1,uVar2);
      *plVar5 = lVar4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0099abd0(void)

{
  return;
}




void FUN_0099abd4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf758;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_0099ac08(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_0099ac10(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = FUN_0092eb40();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      return 2;
    }
    uVar1 = FUN_0092eb08();
  }
  if ((uVar1 & 1) == 0) {
    return 2;
  }
  return 1;
}




void FUN_0099ac4c(void)

{
  return;
}




void FUN_0099ac50(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf7e0;
  return;
}




undefined8 FUN_0099ac80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d25570(param_2);
  plVar2 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef68);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 2;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e8b430) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return 1;
}




void FUN_0099acf0(void)

{
  return;
}




void FUN_0099acf4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf868;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_0099ad28(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_0099ad30(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *__s1;
  char *__s2;
  long *plVar3;
  
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)param_2[1] == (int)plVar3[1]) {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    *param_2 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  __s1 = (char *)FUN_00d5baf8(uVar2);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 2) {
    __s2 = "Locked";
  }
  else if (iVar1 == 1) {
    __s2 = "Move";
  }
  else {
    if (iVar1 != 0) {
      return 2;
    }
    __s2 = "Idle";
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return 2;
  }
  return 1;
}




void FUN_0099ade8(void)

{
  return;
}




void FUN_0099adec(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf8f0;
  return;
}




undefined8 FUN_0099ae1c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = (**(code **)(*(long *)*param_2 + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef68))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  plVar5 = (long *)param_2[0x284];
  if (plVar5 != (long *)0x0) {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else if ((int)plVar5[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *plVar5 = 0;
      uVar3 = 0;
      *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
    }
    uVar4 = FUN_00a14b48(lVar1,uVar3);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  return 2;
}




void FUN_0099aedc(void)

{
  return;
}




void FUN_0099aee0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bf978;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_0099af14(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_0099af1c(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00e6a474("__HUD__");
  uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
  puVar3 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  iVar2 = FUN_009c6274(*puVar3);
  uVar1 = 1;
  if (iVar2 != *(int *)(param_1 + 0x24)) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_0099af9c(void)

{
  return;
}




void FUN_0099afa0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_027bfa08;
  param_1[5] = 0;
  return;
}




void FUN_0099afd4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_0099afdc(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar1 = FUN_00e6a474("__HUD__");
  uVar1 = FUN_0091ed5c("__HUD__",uVar1,0x12345678);
  puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  uVar3 = FUN_009c73c0(*puVar2,*(undefined8 *)(param_1 + 0x28));
  uVar1 = 1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}

