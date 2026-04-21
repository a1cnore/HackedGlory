// functions/0199a — 27 functions
#include "libGameKindred.h"




void FUN_0199a084(void)

{
  return;
}




int FUN_0199a088(long param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x87020));
  return iVar1;
}




undefined8 FUN_0199a098(long param_1,int *param_2)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x87020));
  *param_2 = *param_2 + 1;
  uVar1 = FUN_0199a114(param_1);
  FUN_019963ec(uVar1,param_2);
  *(int *)(param_1 + 0x87048) = *(int *)(param_1 + 0x87048) + 1;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x87020));
  return uVar1;
}




ushort * FUN_0199a114(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x10000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x10);
    if (uVar1 == *(ushort *)(param_1 + 0x10002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x10000) = uVar1;
    FUN_019963a8(puVar2);
    *(int *)(param_1 + 0x10004) = *(int *)(param_1 + 0x10004) + 1;
  }
  return puVar2;
}




ushort * FUN_0199a194(long param_1)

{
  ushort uVar1;
  ushort *__s;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x87020));
  uVar1 = *(ushort *)(param_1 + 0x87010);
  if ((ulong)uVar1 == 0xffff) {
    __s = (ushort *)0x0;
  }
  else {
    __s = (ushort *)(param_1 + (ulong)uVar1 * 0x88 + 0x10010);
    if (uVar1 == *(ushort *)(param_1 + 0x87012)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *__s;
    }
    *(ushort *)(param_1 + 0x87010) = uVar1;
    memset(__s,0,0x88);
    *(int *)(param_1 + 0x87014) = *(int *)(param_1 + 0x87014) + 1;
  }
  *(int *)(param_1 + 0x8704c) = *(int *)(param_1 + 0x8704c) + 1;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x87020));
  return __s;
}




int FUN_0199a26c(long param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x87020));
  piVar2 = (int *)*param_2;
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -1;
  FUN_0199a310(param_1,param_2);
  *(int *)(param_1 + 0x87048) = *(int *)(param_1 + 0x87048) + -1;
  if (iVar1 + -1 == 0) {
    FUN_0199a398(param_1 + 0x10010,piVar2);
    *(int *)(param_1 + 0x8704c) = *(int *)(param_1 + 0x8704c) + -1;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x87020));
  return iVar1;
}




void FUN_0199a310(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  
  FUN_019963b0(param_2);
  if (*(short *)(param_1 + 0x10000) == -1) {
    sVar3 = (short)((uint)((int)param_2 - (int)param_1) >> 4);
    *(short *)(param_1 + 0x10002) = sVar3;
    *(short *)(param_1 + 0x10000) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x10002);
    uVar2 = (undefined2)((uint)((int)param_2 - (int)param_1) >> 4);
    *(undefined2 *)(param_1 + 0x10002) = uVar2;
    *(undefined2 *)(param_1 + (ulong)uVar1 * 0x10) = uVar2;
  }
  *(int *)(param_1 + 0x10004) = *(int *)(param_1 + 0x10004) + -1;
  return;
}




void FUN_0199a398(long param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_01999f5c(param_2);
  if (*(short *)(param_1 + 0x77000) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0xf0f;
    *(short *)(param_1 + 0x77002) = sVar2;
    *(short *)(param_1 + 0x77000) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x77002);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0xf0f;
    *(short *)(param_1 + 0x77002) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x88) = sVar2;
  }
  *(int *)(param_1 + 0x77004) = *(int *)(param_1 + 0x77004) + -1;
  return;
}




void FUN_0199a43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                 long param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [4];
  int local_29c;
  undefined8 local_298;
  undefined1 local_28c;
  undefined1 local_28b;
  undefined1 local_28a;
  undefined1 local_289;
  undefined1 auStack_288 [10];
  ushort local_27e;
  uint local_278;
  long local_270 [32];
  uint local_170 [64];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar4 = FUN_0199cf54();
  lVar5 = FUN_019a10a0(auStack_2a8,param_5,param_5 + param_6,iVar4 == 1);
  FUN_019a17c8(lVar5,auStack_288,local_170,0x20);
  local_278 = 0;
  if (local_27e != 0) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      cVar3 = FUN_01997c80(local_170[uVar10 * 2]);
      if (cVar3 != -1) {
        if (uVar9 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            if (lVar5 + (ulong)local_170[uVar10 * 2 + 1] == local_270[uVar7]) break;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar9);
        }
        if ((uint)uVar7 == uVar9) {
          local_270[uVar9] = lVar5 + (ulong)local_170[uVar10 * 2 + 1];
          uVar9 = uVar9 + 1;
        }
        uVar1 = param_4[0x1dfa];
        puVar8 = param_4 + (ulong)uVar1 * 2 + 0x1dfc;
        puVar8[0] = 0;
        puVar8[1] = 0;
        param_4[0x1dfa] = uVar1 + 1;
        *(char *)puVar8 = cVar3;
        puVar8[1] = (uint)uVar7;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_27e);
    local_278 = uVar9;
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        uVar1 = *param_4;
        puVar8 = param_4 + (ulong)uVar1 * 0x77e + 2;
        memset(puVar8,0,0x1df8);
        *param_4 = uVar1 + 1;
        lVar5 = local_270[uVar10];
        uVar6 = FUN_019a1820(lVar5,auStack_2a0);
        iVar4 = (int)lVar5 + local_29c;
        uVar6 = FUN_0199a648(param_3,puVar8,uVar6,local_28c,local_28b,local_28a,local_289);
        uVar10 = uVar10 + 1;
        *(undefined8 *)(puVar8 + 0x77c) = uVar6;
        *(undefined8 *)(puVar8 + 0x776) = local_298;
        puVar8[0x77a] = iVar4 - (int)uVar6;
      } while (uVar10 < uVar9);
      if (uVar9 != 0) {
        local_278 = 0;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0199a648(uint *param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  void *__s;
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  uint local_39c;
  byte local_398 [4];
  byte local_394 [4];
  byte local_390 [4];
  byte local_38c [4];
  uint local_388;
  undefined4 uStack_384;
  undefined1 auStack_380 [12];
  undefined2 local_374;
  undefined1 local_372;
  undefined8 local_370 [98];
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  FUN_01995ebc(auStack_380);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    iVar3 = FUN_019a14c4(param_3,&local_39c,&local_374,local_370,&local_388);
    param_3 = param_3 + iVar3;
    switch((byte)local_374) {
    case 1:
      uVar5 = 1;
      break;
    case 2:
      uVar5 = 2;
      break;
    case 3:
      uVar5 = 3;
      break;
    case 4:
      uVar5 = 4;
      break;
    default:
      goto switchD_0199a6e0_default;
    }
    FUN_01996184(auStack_380,(undefined1)local_39c,local_370,uVar5,1,local_388);
switchD_0199a6e0_default:
  }
  if (param_5 != 0) {
    do {
      iVar3 = FUN_019a1518(param_3,&local_388,local_38c,local_390,local_394,local_398,&local_39c);
      param_3 = param_3 + iVar3;
      local_372 = 0;
      local_374 = 0;
      FUN_00e6a584(&local_374,CONCAT44(uStack_384,local_388),2);
      FUN_00e6a8a8(local_370,"build://%s/%s",&local_374,CONCAT44(uStack_384,local_388));
      uVar9 = *param_1;
      __s = (void *)((long)param_1 + (ulong)uVar9 * 0x41 + 8);
      memset(__s,0,0x41);
      *param_1 = uVar9 + 1;
      FUN_00e6a50c(__s,0x40,local_370);
      bVar2 = FUN_00e70308(&DAT_0320ffc0);
      *(byte *)((long)__s + 0x40) = DAT_0320ffd8 < 0x80000001 | (bVar2 ^ 0xff) & 1;
      uVar9 = *(uint *)(param_2 + 8);
      puVar10 = (uint *)(param_2 + 0x10 + (ulong)uVar9 * 0x54);
      memset(puVar10,0,0x54);
      *(uint *)(param_2 + 8) = uVar9 + 1;
      FUN_00e6a50c(puVar10 + 1,0x40,local_370);
      *puVar10 = (uint)local_38c[0];
      puVar10[0x12] = (uint)local_390[0];
      puVar10[0x13] = (uint)local_394[0];
      puVar10[0x14] = (uint)local_398[0];
      puVar10[0x11] = local_39c;
      FUN_01996014(auStack_380,local_38c[0],0);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if (param_6 != 0) {
    do {
      iVar3 = FUN_019a156c(param_3,local_370,&local_388,&local_39c,&local_374,local_38c);
      uVar9 = *(uint *)(param_2 + 0x550);
      param_3 = param_3 + iVar3;
      puVar10 = (uint *)(param_2 + 0x558 + (ulong)uVar9 * 0x310);
      memset(puVar10 + 1,0,0x30c);
      *(uint *)(param_2 + 0x550) = uVar9 + 1;
      uVar9 = local_388 & 0xff;
      *puVar10 = uVar9;
      puVar10[0xc1] = local_39c & 0xff;
      puVar10[0xc2] = (uint)(byte)local_374;
      puVar10[0xc3] = (uint)local_38c[0];
      memcpy(puVar10 + 1,local_370,0x300);
      FUN_01996068(auStack_380,uVar9,0,0);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  do {
    if (param_7 == 0) {
      uVar5 = FUN_019962e8(auStack_380);
      *(undefined8 *)(param_2 + 0x1de0) = uVar5;
      FUN_01995ef4(auStack_380);
      if (*(long *)(lVar1 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return param_3;
    }
    iVar3 = FUN_019a15f4(param_3,&local_388,&local_39c,local_370);
    param_3 = param_3 + iVar3;
    uVar5 = FUN_01997b28();
    uVar6 = FUN_0199ac90(uVar5,local_370[0]);
    uVar5 = FUN_01997b28();
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_0199ad04(uVar5,local_370[0]);
      uVar5 = FUN_01997b28();
      uVar5 = FUN_0199adb4(uVar5,uVar6 & 0xffffffff,(undefined1)local_39c);
      switch(*(undefined4 *)(&DAT_02bf2860 + (uVar6 & 0xffffffff) * 0x18)) {
      case 0:
        uVar7 = 1;
        break;
      case 1:
        uVar7 = 2;
        break;
      case 2:
        uVar7 = 3;
        break;
      case 3:
        uVar7 = 4;
        break;
      default:
        goto switchD_0199a9d4_default;
      }
      FUN_01996270(auStack_380,(undefined1)local_388,uVar5,uVar7,0,local_370[0]);
    }
    else {
      uVar4 = FUN_0199ad5c();
      uVar5 = FUN_01997b28();
      uVar5 = FUN_0199ade8(uVar5,uVar4,0);
      FUN_01996118(auStack_380,(undefined1)local_388,uVar5,local_370[0]);
    }
switchD_0199a9d4_default:
    param_7 = param_7 + -1;
  } while( true );
}




byte FUN_0199aa88(void)

{
  byte bVar1;
  
  bVar1 = FUN_00e70308(&DAT_0320ffc0);
  return DAT_0320ffd8 < 0x80000001 | (bVar1 ^ 0xff) & 1;
}




void FUN_0199aac8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x87048);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x8704c);
  }
  return;
}




void FUN_0199aaf4(void)

{
  return;
}




void FUN_0199aaf8(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3;
  pvVar2 = operator_new__((ulong)param_3 << 2);
  param_1[2] = (long)pvVar2;
  if (param_3 == 0) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    uVar4 = 0;
    uVar7 = 0;
    uVar8 = 0;
    piVar5 = (int *)(param_2 + 0xc);
    do {
      switch(piVar5[-1]) {
      case 0:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar8;
        iVar6 = *piVar5;
        goto LAB_0199ab90;
      case 1:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar8;
        uVar8 = uVar8 + *piVar5 * 2;
        break;
      case 2:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar8;
        iVar6 = *piVar5 * 3;
LAB_0199ab90:
        uVar8 = iVar6 + uVar8;
        break;
      case 3:
        *(uint *)((long)pvVar2 + uVar4 * 4) = uVar8;
        uVar8 = uVar8 + *piVar5 * 4;
        break;
      case 4:
        *(int *)((long)pvVar2 + uVar4 * 4) = (int)uVar7;
        uVar7 = (ulong)(uint)(*piVar5 + (int)uVar7);
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 6;
    } while (uVar4 < uVar1);
  }
  pvVar2 = operator_new__((ulong)uVar8 << 2);
  param_1[3] = (long)pvVar2;
  puVar3 = operator_new__(uVar7 << 3);
  param_1[4] = (long)puVar3;
  if (uVar8 != 0) {
    memset(pvVar2,0,(ulong)uVar8 << 2);
  }
  if (((int)uVar7 != 0) && (*puVar3 = 0, (int)uVar7 != 1)) {
    uVar4 = 1;
    do {
      *(undefined8 *)(param_1[4] + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
  }
  return;
}




void FUN_0199ac48(long param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}




bool FUN_0199ac90(long *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar1 = strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_0199acd8;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (uVar2 < 0x17);
  uVar2 = 0xffffffff;
LAB_0199acd8:
  return *(int *)(*param_1 + uVar2 * 0x18 + 8) == 4;
}




ulong FUN_0199ad04(undefined8 param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar1 = strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_0199ad48;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (uVar2 < 0x17);
  uVar2 = 0xffffffff;
LAB_0199ad48:
  return uVar2 & 0xffffffff;
}




ulong FUN_0199ad5c(undefined8 param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar1 = strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_0199ada0;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (uVar2 < 0x17);
  uVar2 = 0xffffffff;
LAB_0199ada0:
  return uVar2 & 0xffffffff;
}




long FUN_0199adb4(long *param_1,uint param_2,int param_3)

{
  return param_1[3] + (long)*(int *)(param_1[2] + (ulong)param_2 * 4) * 4 +
         (ulong)(uint)(*(int *)(&DAT_01e1be18 +
                               (ulong)*(uint *)(*param_1 + (ulong)param_2 * 0x18 + 8) * 4) * param_3
                      ) * 4;
}




long FUN_0199ade8(long param_1,uint param_2,uint param_3)

{
  return *(long *)(param_1 + 0x20) +
         (long)*(int *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4) * 8 + (ulong)param_3 * 8;
}




void FUN_0199ae00(undefined4 param_1,long *param_2,uint param_3,int param_4)

{
  *(undefined4 *)
   (param_2[3] + (long)*(int *)(param_2[2] + (ulong)param_3 * 4) * 4 +
   (ulong)(uint)(*(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_2 + (ulong)param_3 * 0x18 + 8) * 4
                         ) * param_4) * 4) = param_1;
  return;
}




void FUN_0199ae34(long *param_1,uint param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = param_1[3];
  lVar4 = 0;
  iVar2 = *(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_1 + (ulong)param_2 * 0x18 + 8) * 4);
  iVar3 = *(int *)(param_1[2] + (ulong)param_2 * 4);
  do {
    *(undefined4 *)(lVar1 + (long)iVar3 * 4 + (ulong)(uint)(iVar2 * param_3) * 4 + lVar4) =
         *(undefined4 *)(param_4 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 8);
  return;
}




void FUN_0199ae80(long *param_1,uint param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = param_1[3];
  lVar4 = 0;
  iVar2 = *(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_1 + (ulong)param_2 * 0x18 + 8) * 4);
  iVar3 = *(int *)(param_1[2] + (ulong)param_2 * 4);
  do {
    *(undefined4 *)(lVar1 + (long)iVar3 * 4 + (ulong)(uint)(iVar2 * param_3) * 4 + lVar4) =
         *(undefined4 *)(param_4 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  return;
}




void FUN_0199aecc(long *param_1,uint param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = param_1[3];
  lVar4 = 0;
  iVar2 = *(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_1 + (ulong)param_2 * 0x18 + 8) * 4);
  iVar3 = *(int *)(param_1[2] + (ulong)param_2 * 4);
  do {
    *(undefined4 *)(lVar1 + (long)iVar3 * 4 + (ulong)(uint)(iVar2 * param_3) * 4 + lVar4) =
         *(undefined4 *)(param_4 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  return;
}




void FUN_0199af18(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  *(undefined8 *)
   (*(long *)(param_1 + 0x20) + (long)*(int *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4) * 8 +
   (ulong)param_3 * 8) = param_4;
  return;
}




long FUN_0199af30(long *param_1,char *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar1 = strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_0199af80;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (uVar2 < 0x17);
  uVar2 = 0xffffffff;
LAB_0199af80:
  return param_1[3] + (long)*(int *)(param_1[2] + uVar2 * 4) * 4 +
         (ulong)(uint)(*(int *)(&DAT_01e1be18 + (ulong)*(uint *)(*param_1 + uVar2 * 0x18 + 8) * 4) *
                      param_3) * 4;
}




long FUN_0199afc4(long param_1,char *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar2 = 0;
  ppuVar3 = &PTR_s_OmniLight_Position_02bf2858;
  do {
    iVar1 = strcmp(param_2,*ppuVar3);
    if (iVar1 == 0) goto LAB_0199b014;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 3;
  } while (uVar2 < 0x17);
  uVar2 = 0xffffffff;
LAB_0199b014:
  return *(long *)(param_1 + 0x20) + (long)*(int *)(*(long *)(param_1 + 0x10) + uVar2 * 4) * 8 +
         (ulong)param_3 * 8;
}

