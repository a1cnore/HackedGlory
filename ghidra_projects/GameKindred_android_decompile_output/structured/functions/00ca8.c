// functions/00ca8 — 30 functions
#include "libGameKindred.h"




void * FUN_00ca806c(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined4 local_58 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x5d0);
  FUN_00ca7720();
  local_58[0] = param_2;
  local_50 = pvVar2;
  FUN_00ca8cb8(param_1 + 0xad,param_1[0xad],local_58,local_58);
  (**(code **)(*param_1 + 0x78))(param_1,pvVar2,1);
  plVar3 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,pvVar2,1,2);
  FUN_00ca77e0(pvVar2,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00ca8144(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,uint param_7)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined4 local_78 [2];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0xde0);
  FUN_00ca79cc();
  local_78[0] = param_2;
  local_70 = pvVar2;
  FUN_00ca8cb8(param_1 + 0xad,param_1[0xad],local_78,local_78);
  (**(code **)(*param_1 + 0x78))(param_1,pvVar2,1);
  plVar3 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,pvVar2,1,2);
  FUN_00ca7a18(pvVar2,param_3,param_4,param_5,param_6,param_7 & 1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00ca8244(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = operator_new(0x370);
  FUN_00ecf178();
  *puVar2 = &PTR_FUN_02808950;
  FUN_00f0d160(puVar2 + 0x48);
  *(uint *)((long)puVar2 + 0x84) = *(uint *)((long)puVar2 + 0x84) & 0xffffffef;
  local_58[0] = param_2;
  local_50 = puVar2;
  FUN_00ca8cb8(param_1 + 0xad,param_1[0xad],local_58,local_58);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  plVar3 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar3 + 0x68))(plVar3,puVar2,1,2);
  FUN_00ca74b4(puVar2,param_3,param_4);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00ca8350(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined4 local_58 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0xd8);
  FUN_00ca7be4();
  FUN_00f13f08(param_1,param_2,pvVar2);
  FUN_00f13f68(pvVar2,CONCAT44((int)(float)param_2,(int)(float)param_1));
  local_58[0] = param_4;
  local_50 = pvVar2;
  FUN_00ca8f44(param_3 + 0xb0,param_3[0xb0],local_58,local_58);
  (**(code **)(*param_3 + 0x78))(param_3,pvVar2,1);
  plVar3 = (long *)FUN_00f14058(param_3);
  (**(code **)(*plVar3 + 0x58))(plVar3,pvVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00ca8434(long param_1)

{
  return *(undefined4 *)(param_1 + 0x578);
}




undefined8 FUN_00ca843c(long param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x570);
  if (lVar4 != 0) {
    lVar3 = param_1 + 0x570;
    do {
      bVar1 = *(uint *)(lVar4 + 0x20) < param_2;
      if (!bVar1) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8);
    } while (lVar4 != 0);
    if (lVar3 != param_1 + 0x570) {
      uVar2 = 0;
      if (*(uint *)(lVar3 + 0x20) <= param_2) {
        uVar2 = *(undefined8 *)(lVar3 + 0x28);
      }
      return uVar2;
    }
  }
  return 0;
}




ulong FUN_00ca848c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = 0;
  if ((*(long **)(param_1 + 0x568) != (long *)(param_1 + 0x570)) && (param_3 != 0)) {
    uVar1 = 0;
    plVar2 = *(long **)(param_1 + 0x568);
    do {
      *(int *)(param_2 + uVar1 * 4) = (int)plVar2[4];
      uVar1 = uVar1 + 1;
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar3 = plVar2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != plVar2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    } while ((plVar4 != (long *)(param_1 + 0x570)) && (plVar2 = plVar4, uVar1 < param_3));
  }
  return uVar1;
}




void FUN_00ca8518(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 0x570);
  lVar2 = param_1 + 0x570;
  lVar6 = lVar2;
  if (lVar5 != 0) {
    do {
      bVar1 = *(uint *)(lVar5 + 0x20) < param_2;
      if (!bVar1) {
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar1 * 8);
    } while (lVar5 != 0);
    if ((lVar6 != lVar2) && (*(uint *)(lVar6 + 0x20) <= param_2)) goto LAB_00ca856c;
  }
  lVar6 = lVar2;
LAB_00ca856c:
  lVar2 = FUN_00f14058(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_00f14058(param_1);
    FUN_00f163a4(uVar3,*(undefined8 *)(lVar6 + 0x28));
  }
  plVar7 = (long *)(lVar6 + 0x28);
  uVar4 = FUN_00f02540(*plVar7);
  if ((uVar4 & 1) != 0) {
    FUN_00f01a4c(*plVar7,1);
  }
  if ((long *)*plVar7 != (long *)0x0) {
    (**(code **)(*(long *)*plVar7 + 8))();
  }
  *plVar7 = 0;
  FUN_00ca91d0(param_1 + 0x568,lVar6);
  return;
}




void FUN_00ca85dc(long param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x588);
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x588;
    do {
      bVar1 = *(uint *)(lVar4 + 0x20) < param_2;
      if (!bVar1) {
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8);
    } while (lVar4 != 0);
    if ((lVar5 != param_1 + 0x588) && (*(uint *)(lVar5 + 0x20) <= param_2)) {
      lVar4 = FUN_00f14058(param_1);
      if (lVar4 != 0) {
        uVar2 = FUN_00f14058(param_1);
        FUN_00f163a4(uVar2,*(undefined8 *)(lVar5 + 0x28));
      }
      plVar6 = (long *)(lVar5 + 0x28);
      uVar3 = FUN_00f02540(*plVar6);
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(*plVar6,1);
      }
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 8))();
      }
      *plVar6 = 0;
      FUN_00ca9264(param_1 + 0x580,lVar5);
      return;
    }
  }
  return;
}




void FUN_00ca86ac(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x568);
  while (plVar7 != (long *)(param_1 + 0x570)) {
    lVar6 = plVar7[5];
    if (lVar6 != 0) {
      lVar2 = FUN_00f14058(param_1);
      if (lVar2 != 0) {
        uVar3 = FUN_00f14058(param_1);
        FUN_00f163a4(uVar3,lVar6);
      }
      uVar4 = FUN_00f02540(lVar6);
      if ((uVar4 & 1) != 0) {
        FUN_00f01a4c(lVar6,1);
      }
      if ((long *)plVar7[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar7[5] + 8))();
      }
      plVar7[5] = 0;
    }
    plVar5 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      plVar5 = plVar7 + 2;
      bVar1 = *(long **)*plVar5 != plVar7;
      plVar7 = (long *)*plVar5;
      if (bVar1) {
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
  FUN_00ca8c6c(param_1 + 0x568,*(undefined8 *)(param_1 + 0x570));
  *(long **)(param_1 + 0x568) = (long *)(param_1 + 0x570);
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  return;
}




void FUN_00ca87ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca87e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca881c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808bf8;
  param_1[0x7d] = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0x94);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00ca88a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808bf8;
  param_1[0x7d] = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0x94);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca8934(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808d58;
  param_1[0x102] = &PTR_FUN_02808bf8;
  param_1[0x17f] = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0x196);
  FUN_00f13d08(param_1 + 0x17f);
  param_1[0x161] = &PTR_FUN_028266f0;
  param_1[0x178] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17b);
  FUN_00f13d08(param_1 + 0x161);
  FUN_00f13d08(param_1 + 0x14a);
  FUN_00ecf74c(param_1 + 0x102);
  param_1[0x48] = &PTR_FUN_02808bf8;
  param_1[0xc5] = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0xdc);
  FUN_00f13d08(param_1 + 0xc5);
  param_1[0xa7] = &PTR_FUN_028266f0;
  param_1[0xbe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc1);
  FUN_00f13d08(param_1 + 0xa7);
  FUN_00f13d08(param_1 + 0x90);
  FUN_00ecf74c(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00ca8a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808d58;
  param_1[0x102] = &PTR_FUN_02808bf8;
  param_1[0x17f] = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0x196);
  FUN_00f13d08(param_1 + 0x17f);
  param_1[0x161] = &PTR_FUN_028266f0;
  param_1[0x178] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17b);
  FUN_00f13d08(param_1 + 0x161);
  FUN_00f13d08(param_1 + 0x14a);
  FUN_00ecf74c(param_1 + 0x102);
  param_1[0x48] = &PTR_FUN_02808bf8;
  param_1[0xc5] = &PTR_FUN_02808ab0;
  FUN_00f0d3a4(param_1 + 0xdc);
  FUN_00f13d08(param_1 + 0xc5);
  param_1[0xa7] = &PTR_FUN_028266f0;
  param_1[0xbe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc1);
  FUN_00f13d08(param_1 + 0xa7);
  FUN_00f13d08(param_1 + 0x90);
  FUN_00ecf74c(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca8b4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808950;
  FUN_00f0d3a4(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00ca8b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02808950;
  FUN_00f0d3a4(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca8bc4(void)

{
  return;
}




void FUN_00ca8bcc(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00ca8bf0(long param_1)

{
  FUN_00f13d08(param_1 + -0xb8);
  return;
}




void FUN_00ca8bf8(long param_1)

{
  FUN_00f13d08((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00ca8c20(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00ca8c20(param_1,*param_2);
    FUN_00ca8c20(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00ca8c6c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00ca8c6c(param_1,*param_2);
    FUN_00ca8c6c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void * FUN_00ca8cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00ca8d60(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x30);
    *(undefined4 *)((long)pvVar3 + 0x20) = *param_4;
    *(undefined8 *)((long)pvVar3 + 0x28) = *(undefined8 *)(param_4 + 2);
    FUN_00ca8e88(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00ca8d60(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1 + 1 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar4 = (long *)param_2[1];
      if (plVar4 == (long *)0x0) {
        plVar4 = param_2 + 2;
        plVar5 = (long *)*plVar4;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar7 = *plVar4;
            plVar4 = (long *)(lVar7 + 0x10);
            plVar5 = (long *)*plVar4;
          } while (*plVar5 != lVar7);
        }
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (uVar1 < *(uint *)(plVar5 + 4))) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_00ca8e70;
    }
  }
  plVar5 = (long *)*param_2;
  plVar4 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar2 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar3 = (long *)*plVar4 == plVar6;
        plVar6 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    if (*param_5 <= *(uint *)(plVar4 + 4)) {
LAB_00ca8e70:
      plVar4 = (long *)FUN_00ca8edc(param_1,param_3,param_5);
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar4;
    param_2 = plVar4 + 1;
  }
  return param_2;
}




void FUN_00ca8e88(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




long * FUN_00ca8edc(long param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    *param_2 = (long)plVar1;
    return plVar1;
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar1;
  do {
    while (plVar3 = plVar1, *param_3 < *(uint *)(plVar3 + 4)) {
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    if (*param_3 <= *(uint *)(plVar3 + 4)) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  *param_2 = (long)plVar3;
  return plVar2;
}




void * FUN_00ca8f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00ca8fec(param_1,param_2,&local_50,auStack_58,param_3);
  pvVar3 = (void *)*puVar2;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x30);
    *(undefined4 *)((long)pvVar3 + 0x20) = *param_4;
    *(undefined8 *)((long)pvVar3 + 0x28) = *(undefined8 *)(param_4 + 2);
    FUN_00ca9114(param_1,local_50,puVar2,pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00ca8fec(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1 + 1 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar4 = (long *)param_2[1];
      if (plVar4 == (long *)0x0) {
        plVar4 = param_2 + 2;
        plVar5 = (long *)*plVar4;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar7 = *plVar4;
            plVar4 = (long *)(lVar7 + 0x10);
            plVar5 = (long *)*plVar4;
          } while (*plVar5 != lVar7);
        }
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (uVar1 < *(uint *)(plVar5 + 4))) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_00ca90fc;
    }
  }
  plVar5 = (long *)*param_2;
  plVar4 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar6 = param_2;
    plVar2 = plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar3 = (long *)*plVar4 == plVar6;
        plVar6 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    if (*param_5 <= *(uint *)(plVar4 + 4)) {
LAB_00ca90fc:
      plVar4 = (long *)FUN_00ca9168(param_1,param_3,param_5);
      return plVar4;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar4;
    param_2 = plVar4 + 1;
  }
  return param_2;
}

