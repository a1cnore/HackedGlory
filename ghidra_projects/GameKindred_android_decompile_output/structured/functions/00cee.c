// functions/00cee — 22 functions
#include "libGameKindred.h"




undefined1 FUN_00cee064(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return 0xff;
        }
        return *(undefined1 *)(lVar1 + 0xbf);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0xff;
}




undefined1 FUN_00cee0c8(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(undefined1 *)(lVar1 + 0xc0);
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




undefined1 FUN_00cee134(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return 2;
        }
        return *(undefined1 *)(lVar1 + 0xc1);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 2;
}




void FUN_00cee198(int param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0xbc;
    do {
      if (*(int *)(lVar1 + -0xb4) == param_1) {
        if (lVar1 == 0xbc) {
          return;
        }
        *(undefined1 *)(lVar1 + 3) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cee1fc(int param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0xbc;
    do {
      if (*(int *)(lVar1 + -0xb4) == param_1) {
        if (lVar1 == 0xbc) {
          return;
        }
        *(undefined1 *)(lVar1 + 4) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cee260(int param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0xbc;
    do {
      if (*(int *)(lVar1 + -0xb4) == param_1) {
        if (lVar1 == 0xbc) {
          return;
        }
        *(undefined1 *)(lVar1 + 5) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




bool FUN_00cee2c4(int param_1)

{
  ulong uVar1;
  int *piVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar1 = 0;
    piVar2 = (int *)(DAT_0314f350 + 8);
    do {
      if (*piVar2 == param_1) {
        return piVar2 != (int *)0x8;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x32;
    } while (uVar1 < 0x10);
  }
  return false;
}




void FUN_00cee334(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_00cee340(uint *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  char *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fd190(param_2,"ice");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
    uVar10 = 0;
  }
  else {
    local_b8 = "ice";
    local_a8 = 0x100005;
    local_b0 = 3;
    lVar4 = FUN_008feca4(param_2,&local_b8);
    uVar10 = 0;
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
      local_b8 = "ice";
      local_a8 = 0x100005;
      local_b0 = 3;
      puVar5 = (uint *)FUN_008feca4(param_2,&local_b8);
      uVar10 = *puVar5 & ((int)*puVar5 >> 0x1f ^ 0xffffffffU);
    }
  }
  *param_1 = uVar10;
  lVar4 = FUN_008fd190(param_2,"items");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar4) {
    local_b8 = "items";
    local_a8 = 0x100005;
    local_b0 = 5;
    lVar4 = FUN_008feca4(param_2,&local_b8);
    if (*(int *)(lVar4 + 0x10) == 4) {
      local_b8 = "items";
      local_a8 = 0x100005;
      local_b0 = 5;
      plVar6 = (long *)FUN_008feca4(param_2,&local_b8);
      if ((int)plVar6[1] != 0) {
        lVar4 = 0;
        uVar12 = 0;
        do {
          plVar1 = (long *)(*plVar6 + lVar4);
          memset(&local_b8,0,0x4d);
          lVar7 = FUN_008fd190(plVar1,"tag");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            puVar8 = (undefined8 *)&DAT_01e277f2;
          }
          else {
            local_d0 = "tag";
            local_c0 = 0x100005;
            local_c8 = 3;
            lVar7 = FUN_008feca4(plVar1,&local_d0);
            puVar8 = (undefined8 *)&DAT_01e277f2;
            if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
              local_d0 = "tag";
              local_c0 = 0x100005;
              local_c8 = 3;
              puVar8 = (undefined8 *)FUN_008feca4(plVar1,&local_d0,&DAT_01e277f2);
              if ((*(byte *)((long)puVar8 + 0x12) >> 6 & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
            }
          }
          FUN_00e6a50c((long)&local_b0 + 4,0x40,puVar8);
          lVar7 = FUN_008fd190(plVar1,"iceCost");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            uVar10 = 0;
          }
          else {
            local_d0 = "iceCost";
            local_c0 = 0x100005;
            local_c8 = 7;
            lVar7 = FUN_008feca4(plVar1,&local_d0);
            uVar10 = 0;
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
              local_d0 = "iceCost";
              local_c0 = 0x100005;
              local_c8 = 7;
              puVar5 = (uint *)FUN_008feca4(plVar1,&local_d0);
              uVar10 = *puVar5 & ((int)*puVar5 >> 0x1f ^ 0xffffffffU);
            }
          }
          local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar10);
          lVar7 = FUN_008fd190(plVar1,"infiniteRepurchases");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
            bVar3 = false;
          }
          else {
            local_d0 = "infiniteRepurchases";
            local_c0 = 0x100005;
            local_c8 = 0x13;
            lVar7 = FUN_008feca4(plVar1,&local_d0);
            bVar3 = false;
            if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
              local_d0 = "infiniteRepurchases";
              local_c0 = 0x100005;
              local_c8 = 0x13;
              lVar7 = FUN_008feca4(plVar1,&local_d0);
              bVar3 = *(int *)(lVar7 + 0x10) == 0x102;
            }
          }
          local_6c = bVar3;
          lVar7 = FUN_008fd190(plVar1,"maxPurchases");
          if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
LAB_00cee6f8:
            iVar11 = 1;
          }
          else {
            local_d0 = "maxPurchases";
            local_c0 = 0x100005;
            local_c8 = 0xc;
            lVar7 = FUN_008feca4(plVar1,&local_d0);
            if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) goto LAB_00cee6f8;
            local_d0 = "maxPurchases";
            local_c0 = 0x100005;
            local_c8 = 0xc;
            piVar9 = (int *)FUN_008feca4(plVar1,&local_d0);
            iVar11 = *piVar9;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
          }
          local_b8 = (char *)CONCAT44(iVar11,(undefined4)local_b8);
          uVar10 = param_1[2];
          memcpy((void *)((long)param_1 + (ulong)uVar10 * 0x4d + 0x10),&local_b8,0x4d);
          param_1[2] = uVar10 + 1;
          uVar12 = uVar12 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar12 < *(uint *)(plVar6 + 1));
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cee79c(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  size_t __n;
  void *__dest;
  char *__s1;
  ulong uVar4;
  ulong local_98;
  size_t local_90;
  void *local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((ulong)*(uint *)(param_1 + 8) * 0x4d != 0) {
    __s1 = (char *)(param_1 + 0x1c);
    do {
      iVar3 = strcmp(__s1,param_2);
      if (iVar3 == 0) {
        FUN_00cee94c(param_3,"count",5,*(undefined4 *)(__s1 + -4),param_4);
        local_90 = 0;
        local_88 = (void *)0x0;
        local_98 = 0;
        __n = strlen(__s1);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (__n < 0x17) {
          local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&local_98 | 1);
          if (__n != 0) goto LAB_00cee8a4;
        }
        else {
          uVar4 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar4);
          local_98 = uVar4 | 1;
          local_90 = __n;
          local_88 = __dest;
LAB_00cee8a4:
          memcpy(__dest,__s1,__n);
        }
        local_80 = "tag";
        *(undefined1 *)((long)__dest + __n) = 0;
        local_70 = 0x100005;
        local_78 = 3;
        FUN_00ceef7c(param_3,&local_80,&local_98,param_4);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
      }
      pcVar1 = __s1 + 0x41;
      __s1 = __s1 + 0x4d;
    } while (pcVar1 != (char *)(param_1 + 0x10 + (ulong)*(uint *)(param_1 + 8) * 0x4d));
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cee94c(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = (ulong)param_4;
  local_48 = 0x100005;
  local_50 = (ulong)param_3;
  local_40[1] = 0;
  local_30 = 0x3a06;
  if (-1 < (int)param_4) {
    local_30 = 0x3e06;
  }
  local_58 = param_2;
  FUN_00cb9d40(param_1,&local_58,local_40,param_5);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cee9cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  char *__s;
  ulong local_c8;
  size_t local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 4;
  uVar3 = (ulong)*(uint *)(param_1 + 8);
  if (uVar3 * 0x4d != 0) {
    __s = (char *)(param_1 + 0x1c);
    do {
      if (*(int *)(__s + -4) != 0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 3;
        FUN_00cee94c(&local_b0,"count",5,*(undefined4 *)(__s + -4),param_3);
        local_c0 = 0;
        local_b8 = (void *)0x0;
        local_c8 = 0;
        __n = strlen(__s);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (__n < 0x17) {
          local_c8 = CONCAT71(local_c8._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&local_c8 | 1);
          if (__n != 0) goto LAB_00ceeac8;
        }
        else {
          uVar3 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar3);
          local_c8 = uVar3 | 1;
          local_c0 = __n;
          local_b8 = __dest;
LAB_00ceeac8:
          memcpy(__dest,__s,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
        local_70 = 0x100005;
        local_80 = "tag";
        local_78 = 3;
        FUN_00ceef7c(&local_b0,&local_80,&local_c8,param_3);
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        FUN_00ceeba8(&local_98,&local_b0,param_3);
        uVar3 = (ulong)*(uint *)(param_1 + 8);
      }
      pcVar1 = __s + 0x41;
      __s = __s + 0x4d;
    } while (pcVar1 != (char *)(param_1 + 0x10 + uVar3 * 0x4d));
  }
  local_70 = 0x100005;
  local_80 = "purchases";
  local_78 = 9;
  FUN_00cb9d40(param_2,&local_80,&local_98,param_3);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_00ceeba8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (uVar1 <= uVar3) {
    if (uVar1 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = uVar1 + (uVar1 + 1 >> 1);
    }
    if (uVar1 < uVar5) {
      lVar2 = FUN_00cb9e20(param_3,*param_1,(ulong)uVar1 * 0x18,(ulong)uVar5 * 0x18);
      uVar3 = *(uint *)(param_1 + 1);
      *param_1 = lVar2;
      *(uint *)((long)param_1 + 0xc) = uVar5;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  uVar6 = *param_2;
  puVar4 = (undefined8 *)(*param_1 + (ulong)uVar3 * 0x18);
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  return param_1;
}




void FUN_00ceec50(undefined4 *param_1)

{
  *param_1 = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
  }
  return;
}




long FUN_00ceec64(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  if ((ulong)*(uint *)(param_1 + 8) * 0x4d != 0) {
    lVar2 = param_1 + 0x10;
    do {
      iVar1 = strcmp((char *)(lVar2 + 0xc),param_2);
      if (iVar1 == 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x4d;
    } while (lVar2 != param_1 + 0x10 + (ulong)*(uint *)(param_1 + 8) * 0x4d);
  }
  return 0;
}




long FUN_00ceecdc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}




undefined8 FUN_00ceecf0(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  if ((ulong)*(uint *)(param_1 + 8) * 0x4d != 0) {
    lVar2 = param_1 + 0x10;
    do {
      iVar1 = strcmp((char *)(lVar2 + 0xc),param_2);
      if (iVar1 == 0) {
        return 1;
      }
      lVar2 = lVar2 + 0x4d;
    } while (lVar2 != param_1 + 0x10 + (ulong)*(uint *)(param_1 + 8) * 0x4d);
  }
  return 0;
}




undefined4 FUN_00ceed6c(uint *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  
  if ((ulong)param_1[2] * 0x4d != 0) {
    puVar3 = param_1 + 0x17;
    do {
      iVar2 = strcmp((char *)(puVar3 + -0x10),param_2);
      if (iVar2 == 0) {
        if (*param_1 < puVar3[-0x13]) {
          return 0;
        }
        if (((char)*puVar3 == '\0') && (puVar3[-0x12] <= puVar3[-0x11])) {
          return 0;
        }
        return 1;
      }
      lVar1 = (long)puVar3 + 1;
      puVar3 = (uint *)((long)puVar3 + 0x4d);
    } while (lVar1 != (long)param_1 + (ulong)param_1[2] * 0x4d + 0x10);
  }
  return 0;
}




undefined8 FUN_00ceee14(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*param_2 <= *param_1) &&
     (((char)param_2[0x13] != '\0' || (uVar1 = 0, param_2[2] < param_2[1])))) {
    uVar1 = 1;
  }
  return uVar1;
}




undefined4 FUN_00ceee48(uint *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  if ((ulong)param_1[2] * 0x4d != 0) {
    do {
      iVar3 = strcmp((char *)(puVar4 + 7),param_2);
      if (iVar3 == 0) {
        if (*param_1 < puVar4[4]) {
          return 0;
        }
        uVar2 = puVar4[6];
        if (((char)puVar4[0x17] == '\0') && (puVar4[5] <= uVar2)) {
          return 0;
        }
        *param_1 = *param_1 - puVar4[4];
        puVar4[6] = uVar2 + 1;
        return 1;
      }
      lVar1 = (long)puVar4 + 0x5d;
      puVar4 = (uint *)((long)puVar4 + 0x4d);
    } while (lVar1 != (long)param_1 + (ulong)param_1[2] * 0x4d + 0x10);
  }
  return 0;
}




void FUN_00ceef00(long param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *__s1;
  
  if ((ulong)*(uint *)(param_1 + 8) * 0x4d != 0) {
    __s1 = (char *)(param_1 + 0x1c);
    do {
      iVar2 = strcmp(__s1,param_2);
      if (iVar2 == 0) {
        __s1[-4] = '\0';
        __s1[-3] = '\0';
        __s1[-2] = '\0';
        __s1[-1] = '\0';
        return;
      }
      pcVar1 = __s1 + 0x41;
      __s1 = __s1 + 0x4d;
    } while (pcVar1 != (char *)(param_1 + 0x10 + (ulong)*(uint *)(param_1 + 8) * 0x4d));
  }
  return;
}




void FUN_00ceef7c(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  ulong uVar1;
  byte *__src;
  long lVar2;
  undefined1 **__dest;
  undefined1 *local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  __dest = &local_70;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = (undefined1 *)0x0;
  uVar1 = *(ulong *)(param_3 + 8);
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  if ((uint)uVar1 < 0x10) {
    local_60 = 0x700005;
    local_68 = (ulong)(byte)(0xf - (char)uVar1) << 0x38;
  }
  else {
    local_60 = 0x300005;
    local_68 = uVar1 & 0xffffffff;
    __dest = (undefined1 **)FUN_008fe8b8(param_4,(uint)uVar1 + 1);
    local_70 = (undefined1 *)__dest;
  }
  memcpy(__dest,__src,uVar1 & 0xffffffff);
  *(undefined1 *)((long)__dest + (uVar1 & 0xffffffff)) = 0;
  FUN_00cb9d40(param_1,param_2,&local_70,param_4);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

