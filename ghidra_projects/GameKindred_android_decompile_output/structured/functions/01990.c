// functions/01990 — 31 functions
#include "libGameKindred.h"




void FUN_01990000(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




long FUN_01990008(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_019900ec(param_1,param_2);
    if (lVar3 == 0) {
      lVar3 = FUN_01990170(param_1,param_2);
      (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2,lVar3);
      uVar2 = FUN_00e6a474(param_2);
      local_48[0] = FUN_0091ed5c(param_2,uVar2,0x12345678);
      local_40 = lVar3;
      FUN_01990ac8(param_1,local_48,local_48);
    }
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_019900ec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  plVar5 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar5;
  plVar3 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= uVar2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar2];
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar5) {
      if (uVar2 < *(uint *)(plVar3 + 4)) {
        return 0;
      }
      return plVar3[5];
    }
  }
  return 0;
}




undefined8 FUN_01990170(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01990890(param_1 + 0x6030);
  *(int *)(param_1 + 0xf0d054) = *(int *)(param_1 + 0xf0d054) + 1;
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  FUN_0199157c(uVar2,uVar1);
  return uVar2;
}




void FUN_019901e8(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc) + -1;
  *(int *)(param_2 + 0xc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  FUN_01990200();
  return;
}




void FUN_01990200(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = FUN_01991584(param_2);
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar2 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= uVar1) {
        plVar2 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < uVar1];
    } while (plVar5 != (long *)0x0);
    if ((plVar2 != plVar3) && (*(uint *)(plVar2 + 4) <= uVar1)) goto LAB_0199025c;
  }
  plVar2 = plVar3;
LAB_0199025c:
  FUN_01990c54(param_1,plVar2);
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + -0x10) = 0;
    *(undefined1 *)(lVar4 + -8) = 0;
  }
  FUN_01990530(param_1 + 0xd040,0);
  FUN_0199090c(param_1 + 0x6030,param_2);
  *(int *)(param_1 + 0xf0d054) = *(int *)(param_1 + 0xf0d054) + -1;
  return;
}




undefined8 FUN_019902b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01990308(param_1 + 0x20);
  FUN_01991428(uVar1,param_2);
  *(int *)(param_1 + 0xf0d050) = *(int *)(param_1 + 0xf0d050) + 1;
  return uVar1;
}




ushort * FUN_01990308(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x30);
    if (uVar1 == *(ushort *)(param_1 + 0x6002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x6000) = uVar1;
    FUN_019913d8(puVar2);
    *(int *)(param_1 + 0x6004) = *(int *)(param_1 + 0x6004) + 1;
  }
  return puVar2;
}




void FUN_01990384(long param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = (int)(param_1 + 0x20);
  if (*(short *)(param_1 + 0x6020) == -1) {
    sVar2 = (short)((uint)(param_2 - iVar3) >> 4) * -0x5555;
    *(short *)(param_1 + 0x6022) = sVar2;
    *(short *)(param_1 + 0x6020) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x6022);
    sVar2 = (short)((uint)(param_2 - iVar3) >> 4) * -0x5555;
    *(short *)(param_1 + 0x6022) = sVar2;
    *(short *)(param_1 + 0x20 + (ulong)uVar1 * 0x30) = sVar2;
  }
  *(int *)(param_1 + 0x6024) = *(int *)(param_1 + 0x6024) + -1;
  *(int *)(param_1 + 0xf0d050) = *(int *)(param_1 + 0xf0d050) + -1;
  return;
}




long FUN_01990414(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  undefined1 auStack_848 [2048];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_01990530(param_1 + 0xd040,0);
  lVar3 = FUN_019905f8(param_1 + 0xd040,param_2,param_3);
  if (lVar3 == 0) {
    if (*(long **)(FUN_00f0d040 + param_1) == (long *)0x0) {
      iVar4 = 0;
      uVar6 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      uVar6 = 0;
      iVar4 = 0;
      plVar7 = *(long **)(FUN_00f0d040 + param_1);
      do {
        plVar9 = (long *)*plVar7;
        if ((char)plVar7[2] == '\0') {
          iVar8 = (int)param_1 + 0xf0d03f;
          if (plVar9 != (long *)0x0) {
            iVar8 = (int)plVar9;
          }
          uVar1 = iVar8 - (int)plVar7;
          iVar4 = iVar4 + uVar1;
          if (uVar1 <= uVar6) {
            uVar1 = uVar6;
          }
        }
        else {
          iVar5 = iVar5 + 1;
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
        plVar7 = plVar9;
      } while (plVar9 != (long *)0x0);
    }
    FUN_01990718(auStack_848,
                 "AnimationManager alloc of %d bytes failed. Free: %d, num allocs: %d, largest free: %d, clips: %d, cliprscs: %d"
                 ,param_2,iVar4,iVar5,uVar6,*(undefined4 *)(param_1 + 0x6024),
                 *(undefined4 *)(param_1 + 0xd034));
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}




void FUN_01990530(long param_1,ulong param_2)

{
  long *__src;
  long *__dest;
  long *plVar1;
  ulong __n;
  int iVar2;
  long lVar3;
  
  __src = (long *)**(long **)(param_1 + 0xf00000);
  if (__src != (long *)0x0) {
    __dest = *(long **)(param_1 + 0xf00000);
    do {
      plVar1 = __src;
      if ((char)__dest[2] == '\0') {
        if ((char)__src[2] == '\0') {
          *__dest = *__src;
          plVar1 = __dest;
        }
        else {
          lVar3 = *__src;
          iVar2 = (int)param_1 + 0xf00000;
          if (lVar3 != 0) {
            iVar2 = (int)lVar3;
          }
          __n = (ulong)(uint)(iVar2 - (int)__src);
          memmove(__dest,__src,__n);
          plVar1 = (long *)((long)__dest + __n);
          *plVar1 = lVar3;
          plVar1[1] = 0;
          *(undefined1 *)(plVar1 + 2) = 0;
          *__dest = (long)plVar1;
          if (*(code **)(param_1 + 0xf00008) != (code *)0x0) {
            (**(code **)(param_1 + 0xf00008))(__dest[1],__dest + 3);
          }
        }
        if ((param_2 & 1) == 0) {
          return;
        }
      }
      __src = (long *)*plVar1;
      __dest = plVar1;
    } while (__src != (long *)0x0);
  }
  return;
}




void FUN_019905f8(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_01990be8();
  if (lVar1 != 0) {
    return;
  }
  FUN_01990530(param_1,1);
  FUN_01990be8(param_1,param_2,param_3);
  return;
}




void FUN_01990654(long param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5,
                 uint *param_6)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0xf00000;
  }
  if (((param_3 == (int *)0x0) && (param_4 == (int *)0x0)) && (param_5 == (int *)0x0)) {
    iVar5 = 0;
    iVar4 = 0;
    iVar3 = 0;
    uVar2 = 0;
    if (param_6 == (uint *)0x0) goto LAB_019906f4;
  }
  if (*(long **)(param_1 + 0xf00000) == (long *)0x0) {
    iVar5 = 0;
    iVar4 = 0;
    iVar3 = 0;
    uVar2 = 0;
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 0;
    plVar6 = *(long **)(param_1 + 0xf00000);
    uVar2 = 0;
    do {
      while( true ) {
        plVar7 = (long *)*plVar6;
        plVar1 = (long *)(param_1 + 0xefffff);
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7;
        }
        uVar8 = (int)plVar1 - (int)plVar6;
        if ((char)plVar6[2] == '\0') break;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_019906f4;
      }
      iVar4 = iVar4 + uVar8;
      if (uVar8 <= uVar2) {
        uVar8 = uVar2;
      }
      plVar6 = plVar7;
      uVar2 = uVar8;
    } while (plVar7 != (long *)0x0);
  }
LAB_019906f4:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar5;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar3;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = uVar2;
  }
  return;
}




void FUN_01990718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,0x800,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019907b8(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + -0x10) = 0;
    *(undefined1 *)(param_2 + -8) = 0;
  }
  FUN_01990530(param_1 + 0xd040,0);
  return;
}




void FUN_019907d4(long param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xf0d050);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xf0d054);
  }
  FUN_01990654(param_1 + 0xd040,param_4,param_5,param_6,param_7,0);
  return;
}




void FUN_0199081c(long param_1)

{
  FUN_01990828(param_1 + 0xd040);
  return;
}




void FUN_01990828(long param_1,uint param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (((param_3 != 0 || param_4 != 0) && (param_2 != 0)) &&
     (*(undefined8 **)(param_1 + 0xf00000) != (undefined8 *)0x0)) {
    uVar2 = 0;
    puVar1 = *(undefined8 **)(param_1 + 0xf00000);
    do {
      if (*(char *)(puVar1 + 2) == '\0') {
        puVar4 = (undefined8 *)*puVar1;
      }
      else {
        puVar4 = (undefined8 *)*puVar1;
        *(int *)(param_3 + (ulong)uVar2 * 4) = (int)puVar1 - (int)param_1;
        iVar3 = (int)param_1 + 0xefffff;
        if (puVar4 != (undefined8 *)0x0) {
          iVar3 = (int)puVar4;
        }
        *(int *)(param_4 + (ulong)uVar2 * 4) = iVar3 - (int)puVar1;
        uVar2 = uVar2 + 1;
      }
    } while ((uVar2 < param_2) && (puVar1 = puVar4, puVar4 != (undefined8 *)0x0));
  }
  return;
}




ushort * FUN_01990890(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x7000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x38);
    if (uVar1 == *(ushort *)(param_1 + 0x7002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x7000) = uVar1;
    FUN_0199145c(puVar2);
    *(int *)(param_1 + 0x7004) = *(int *)(param_1 + 0x7004) + 1;
  }
  return puVar2;
}




void FUN_0199090c(long param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_01991478(param_2);
  if (*(short *)(param_1 + 0x7000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x7002) = sVar2;
    *(short *)(param_1 + 0x7000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x7002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x6db7;
    *(short *)(param_1 + 0x7002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x38) = sVar2;
  }
  *(int *)(param_1 + 0x7004) = *(int *)(param_1 + 0x7004) + -1;
  return;
}




bool FUN_019909a4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  plVar5 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar5;
  plVar3 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= uVar2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar2];
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar5) {
      if (uVar2 < *(uint *)(plVar3 + 4)) {
        return false;
      }
      return plVar3[5] != 0;
    }
  }
  return false;
}




long FUN_01990a30(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= param_2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < param_2];
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar1) {
      lVar2 = 0;
      if (*(uint *)(plVar3 + 4) <= param_2) {
        lVar2 = plVar3[5];
      }
      return lVar2;
    }
  }
  return 0;
}




void FUN_01990a7c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_01990a7c(param_1,*param_2);
    FUN_01990a7c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_01990ac8(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_01990b40;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_01990b40:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_01990b94(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_01990b94(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_01990be8(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  
  param_2 = param_2 + 0x18;
  plVar3 = *(long **)(param_1 + 0xf00000);
  do {
    plVar4 = (long *)*plVar3;
    if ((char)plVar3[2] == '\0') {
      plVar2 = (long *)(param_1 + 0xf00000);
      if (plVar4 != (long *)0x0) {
        plVar2 = plVar4;
      }
      iVar5 = (int)plVar2 - (int)plVar3;
      if (param_2 <= iVar5) {
        plVar3[1] = param_3;
        *(undefined1 *)(plVar3 + 2) = 1;
        if (0x18 < (uint)(iVar5 - param_2)) {
          puVar1 = (undefined8 *)((long)plVar3 + (long)param_2);
          *puVar1 = plVar4;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0;
          *plVar3 = (long)puVar1;
        }
        return plVar3 + 3;
      }
    }
    plVar3 = plVar4;
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
  } while( true );
}




long * FUN_01990c54(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_01990ce8(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    if (param_1 != param_2) {
      uVar2 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      uVar2 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar2;
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
    }
    if (1 < param_3) {
      lVar1 = (ulong)param_3 - 1;
      do {
        param_2 = param_2 + 6;
        FUN_01990d68(param_1 + 6,param_1,param_2);
        lVar1 = lVar1 + -1;
        param_1 = param_1 + 6;
      } while (lVar1 != 0);
    }
  }
  return;
}




void FUN_01990d68(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_3[4] * param_2[8];
  fVar3 = param_3[5] * param_2[9];
  fVar5 = param_3[6] * param_2[10];
  fVar4 = (fVar1 * fVar8 - fVar3 * fVar7) + fVar5 * fVar10;
  fVar2 = (-(fVar1 * fVar9) - fVar3 * fVar10) - fVar5 * fVar7;
  fVar6 = (fVar3 * fVar8 + fVar1 * fVar7) - fVar5 * fVar9;
  fVar1 = fVar8 * fVar5 + (fVar3 * fVar9 - fVar1 * fVar10);
  param_1[4] = param_2[4] + fVar10 * fVar1 + ((fVar8 * fVar4 - fVar9 * fVar2) - fVar7 * fVar6);
  param_1[5] = param_2[5] +
               ((fVar6 * param_2[3] - param_2[1] * fVar2) - fVar1 * *param_2) + fVar4 * param_2[2];
  param_1[6] = param_2[6] +
               ((fVar1 * param_2[3] - param_2[2] * fVar2) - fVar4 * param_2[1]) + fVar6 * *param_2;
  *(ulong *)(param_1 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) *
                (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20),
                (float)*(undefined8 *)(param_2 + 8) * (float)*(undefined8 *)(param_3 + 8));
  param_1[10] = param_2[10] * param_3[10];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_3;
  fVar8 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar6 = *param_2;
  fVar7 = param_2[1];
  *param_1 = (fVar2 * fVar3 + fVar6 * fVar5 + fVar7 * fVar4) - fVar1 * fVar8;
  param_1[1] = (fVar3 * fVar1 + fVar5 * fVar7 + fVar2 * fVar8) - fVar6 * fVar4;
  param_1[2] = (fVar2 * fVar4 + fVar5 * fVar1 + fVar6 * fVar8) - fVar3 * fVar7;
  param_1[3] = ((fVar2 * fVar5 - fVar3 * fVar6) - fVar7 * fVar8) - fVar4 * fVar1;
  return;
}




void FUN_01990f10(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(ushort *)(param_3 + 2);
  if ((ulong)uVar1 != 0) {
    uVar5 = param_2[4];
    puVar2 = *(ushort **)(param_3 + 0x10);
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    uVar5 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar5;
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 - 1;
      puVar3 = param_1;
      do {
        param_2 = param_2 + 6;
        puVar3 = puVar3 + 6;
        puVar2 = puVar2 + 1;
        FUN_01990d68(puVar3,param_1 + (ulong)*puVar2 * 6,param_2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}




void FUN_01990fa0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar1 = (ulong)*(ushort *)(param_3 + 2);
  if (uVar1 != 0) {
    pfVar3 = (float *)(param_2 + 0x14);
    pfVar4 = (float *)(*(long *)(param_3 + 0x18) + 0x14);
    pfVar2 = (float *)(param_1 + 0x20);
    do {
      fVar9 = pfVar3[-3];
      fVar8 = pfVar3[-2];
      fVar10 = pfVar3[-5];
      fVar11 = pfVar3[-4];
      fVar21 = pfVar4[-3];
      fVar24 = pfVar4[-2];
      fVar26 = pfVar4[-5];
      fVar28 = pfVar4[-4];
      fVar32 = pfVar4[-1] * pfVar3[3];
      fVar35 = *pfVar4 * pfVar3[4];
      fVar13 = pfVar4[1] * pfVar3[5];
      fVar7 = pfVar3[3] * pfVar4[3];
      fVar6 = pfVar3[4] * pfVar4[4];
      fVar5 = pfVar3[5] * pfVar4[5];
      fVar12 = (fVar32 * fVar8 - fVar35 * fVar9) + fVar13 * fVar11;
      fVar29 = (fVar35 * fVar8 + fVar32 * fVar9) - fVar13 * fVar10;
      fVar14 = (-(fVar32 * fVar10) - fVar35 * fVar11) - fVar13 * fVar9;
      fVar18 = fVar8 * fVar13 + (fVar35 * fVar10 - fVar32 * fVar11);
      fVar13 = (fVar8 * fVar26 + fVar10 * fVar24 + fVar11 * fVar21) - fVar9 * fVar28;
      fVar35 = (fVar9 * fVar26 + fVar11 * fVar24 + fVar8 * fVar28) - fVar10 * fVar21;
      fVar32 = (fVar9 * fVar24 + fVar8 * fVar21 + fVar10 * fVar28) - fVar11 * fVar26;
      fVar21 = ((fVar8 * fVar24 - fVar10 * fVar26) - fVar11 * fVar28) - fVar9 * fVar21;
      fVar19 = fVar32 * fVar21 + fVar13 * fVar35;
      fVar27 = fVar13 * fVar35 - fVar32 * fVar21;
      fVar30 = fVar13 * fVar32 - fVar21 * fVar35;
      fVar16 = fVar13 * fVar32 + fVar21 * fVar35;
      fVar36 = fVar13 * fVar21 + fVar32 * fVar35;
      fVar17 = fVar32 * fVar35 - fVar13 * fVar21;
      fVar21 = fVar32 * fVar32 + fVar35 * fVar35;
      fVar32 = fVar13 * fVar13 + fVar32 * fVar32;
      fVar13 = fVar13 * fVar13 + fVar35 * fVar35;
      fVar28 = pfVar3[-1];
      fVar25 = *pfVar3;
      fVar33 = pfVar3[1];
      fVar30 = fVar30 + fVar30;
      fVar36 = fVar36 + fVar36;
      fVar19 = fVar19 + fVar19;
      fVar27 = fVar27 + fVar27;
      fVar35 = 1.0 - (fVar21 + fVar21);
      fVar24 = 1.0 - (fVar32 + fVar32);
      fVar34 = fVar36 * 0.0;
      fVar31 = fVar30 * 0.0;
      fVar16 = fVar16 + fVar16;
      fVar17 = fVar17 + fVar17;
      fVar13 = 1.0 - (fVar13 + fVar13);
      fVar22 = fVar27 * 0.0;
      fVar21 = fVar35 * 0.0;
      fVar20 = fVar19 * 0.0;
      fVar26 = fVar24 * 0.0;
      fVar15 = fVar16 * 0.0;
      fVar23 = fVar17 * 0.0;
      fVar32 = fVar13 * 0.0;
      pfVar2[-5] = 0.0;
      pfVar2[-1] = 0.0;
      pfVar2[3] = 0.0;
      pfVar2[7] = 1.0;
      uVar1 = uVar1 - 1;
      pfVar3 = pfVar3 + 0xc;
      pfVar2[-7] = fVar23 + fVar26 + fVar19 * fVar7;
      pfVar2[-6] = fVar32 + fVar34 + fVar30 * fVar7;
      pfVar2[-3] = fVar23 + fVar20 + fVar24 * fVar6;
      pfVar2[-2] = fVar32 + fVar31 + fVar36 * fVar6;
      pfVar2[1] = fVar20 + fVar26 + fVar17 * fVar5;
      pfVar2[2] = fVar31 + fVar34 + fVar13 * fVar5;
      pfVar2[4] = fVar28 + fVar11 * fVar18 + ((fVar8 * fVar12 - fVar10 * fVar14) - fVar9 * fVar29) +
                  0.0;
      pfVar2[5] = fVar25 + fVar9 * fVar12 + ((fVar8 * fVar29 - fVar11 * fVar14) - fVar10 * fVar18) +
                  0.0;
      pfVar2[6] = fVar33 + fVar10 * fVar29 + ((fVar8 * fVar18 - fVar9 * fVar14) - fVar11 * fVar12) +
                  0.0;
      pfVar2[-8] = fVar15 + fVar22 + fVar35 * fVar7;
      pfVar2[-4] = fVar15 + fVar21 + fVar27 * fVar6;
      *pfVar2 = fVar22 + fVar21 + fVar16 * fVar5;
      pfVar4 = pfVar4 + 0xc;
      pfVar2 = pfVar2 + 0x10;
    } while (uVar1 != 0);
  }
  return;
}

