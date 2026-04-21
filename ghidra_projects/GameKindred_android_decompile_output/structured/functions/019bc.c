// functions/019bc — 20 functions
#include "libGameKindred.h"




void FUN_019bc010(void *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar10 = 0;
  do {
    memcpy((void *)((long)param_1 + lVar10 + 0x400),&DAT_01e1f610 + lVar10,0x400);
    lVar10 = lVar10 + 0x400;
  } while (lVar10 != 0x1000);
  memcpy(param_1,&DAT_01e20610,0x48);
  if (param_3 % 0x39 != 0) {
    lVar10 = 0;
    iVar4 = 0;
    do {
      uVar7 = 0;
      iVar6 = 4;
      iVar5 = iVar4;
      do {
        iVar4 = 0;
        if (iVar5 + 1U != param_3 % 0x39) {
          iVar4 = iVar5 + 1;
        }
        uVar7 = (uint)*(byte *)(param_2 + iVar5) | uVar7 << 8;
        iVar6 = iVar6 + -1;
        iVar5 = iVar4;
      } while (iVar6 != 0);
      *(uint *)((long)param_1 + lVar10 * 4) = *(uint *)((long)param_1 + lVar10 * 4) ^ uVar7;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x12);
  }
  uVar8 = 0;
  local_50 = 0;
  do {
    FUN_019bbed0(param_1,(long)&local_50 + 4,&local_50);
    puVar2 = (undefined4 *)((long)param_1 + uVar8 * 4);
    uVar8 = uVar8 + 2;
    *puVar2 = local_50._4_4_;
    puVar2[1] = (undefined4)local_50;
  } while (uVar8 < 0x12);
  lVar10 = 0;
  pvVar9 = param_1;
  do {
    uVar8 = 0;
    do {
      FUN_019bbed0(param_1,(long)&local_50 + 4,&local_50);
      uVar1 = uVar8 + 2;
      *(undefined4 *)((long)pvVar9 + uVar8 * 4 + 0x400) = local_50._4_4_;
      *(undefined4 *)((long)pvVar9 + uVar8 * 4 + 0x404) = (undefined4)local_50;
      uVar8 = uVar1;
    } while (uVar1 < 0x100);
    lVar10 = lVar10 + 1;
    pvVar9 = (void *)((long)pvVar9 + 0x400);
  } while (lVar10 != 4);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019bc1a0(void *param_1)

{
  memset(param_1,0,0x1400);
  return;
}




void FUN_019bc1ac(undefined8 param_1)

{
  FUN_019bc404(param_1,0x2771,"/system/etc/security/cacerts");
  FUN_019bc404(param_1,0x51,2);
  FUN_019bc404(param_1,0x40,1);
  return;
}




undefined8 FUN_019bc1f4(ulong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_03215800 + 1;
  bVar1 = DAT_03215800 == 0;
  DAT_03215800 = iVar2;
  if (bVar1) {
    PTR_malloc_02bf74a8 = malloc;
    PTR_free_02bf74b0 = free;
    PTR_realloc_02bf74b8 = realloc;
    PTR_strdup_02bf74c0 = strdup;
    PTR_calloc_02bf74c8 = calloc;
    if ((((param_1 & 1) == 0) || (iVar2 = FUN_019c2b04(0), iVar2 != 0)) &&
       (iVar2 = libssh2_init(0), iVar2 == 0)) {
      if (((uint)param_1 >> 2 & 1) != 0) {
        DAT_03215810 = 1;
      }
      uVar3 = 0;
      DAT_03215808 = param_1;
    }
    else {
      uVar3 = 2;
    }
  }
  return uVar3;
}




void FUN_019bc360(void)

{
  if ((DAT_03215800 != 0) && (DAT_03215800 = DAT_03215800 + -1, DAT_03215800 == 0)) {
    FUN_019c350c();
    if ((DAT_03215808 & 1) != 0) {
      FUN_019c2b24();
    }
    libssh2_exit();
    DAT_03215808 = 0;
    return;
  }
  return;
}




undefined8 FUN_019bc3b0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  if ((DAT_03215800 == 0) && (iVar1 = FUN_019bc1f4(3), iVar1 != 0)) {
    return 0;
  }
  iVar1 = FUN_019cb044(&local_18);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = local_18;
  }
  return uVar2;
}




undefined8
FUN_019bc404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    puStack_50 = &local_90;
    ppuStack_58 = &local_60;
    uStack_48 = 0xffffff80ffffffd0;
    local_90 = param_3;
    uStack_88 = param_4;
    local_80 = param_5;
    uStack_78 = param_6;
    local_70 = param_7;
    uStack_68 = param_8;
    local_60 = (undefined1 *)register0x00000008;
    uVar1 = FUN_019cb120(param_1,param_2,&local_60);
  }
  return uVar1;
}




undefined4 FUN_019bc484(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_98 [32];
  char local_78;
  undefined1 auStack_6c [4];
  int local_68;
  int local_64;
  
  if (param_1 == 0) {
    uVar5 = 0x2b;
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) {
      lVar6 = FUN_019bdfa0(1,3);
      if (lVar6 == 0) {
        return 0x1b;
      }
      *(long *)(param_1 + 0x68) = lVar6;
    }
    FUN_019c0314(lVar6,6,*(undefined8 *)(param_1 + 0x750));
    iVar3 = FUN_019be100(lVar6,param_1);
    if (iVar3 == 0) {
      FUN_019bc6d8(param_1,auStack_98);
      bVar1 = false;
      uVar7 = 0;
      *(long *)(param_1 + 0x60) = lVar6;
      uVar5 = 0;
      do {
        local_64 = 0;
        auVar8 = FUN_019c338c();
        iVar3 = FUN_019bec08(lVar6,0,0,1000,&local_68);
        if (iVar3 == 0) {
          if (local_68 == 0) {
            auVar9 = FUN_019c338c();
            lVar4 = FUN_019c33ec(auVar9._0_8_,auVar9._8_8_,auVar8._0_8_,auVar8._8_8_);
            uVar2 = 0;
            if ((lVar4 < 0xb) && (uVar2 = uVar7 + 1, 1 < (int)uVar7)) {
              iVar3 = 1 << (ulong)(uVar7 & 0x1f);
              if (8 < (int)uVar7) {
                iVar3 = 1000;
              }
              FUN_019c1418(iVar3);
            }
          }
          else {
            uVar2 = 0;
            if (local_68 == -1) {
              uVar5 = 0x38;
              goto LAB_019bc640;
            }
          }
          uVar7 = uVar2;
          iVar3 = FUN_019befa4(lVar6,&local_64);
        }
        if ((local_64 == 0 && iVar3 == 0) && (lVar4 = FUN_019c01d8(lVar6,auStack_6c), lVar4 != 0)) {
          uVar5 = *(undefined4 *)(lVar4 + 0x10);
          bVar1 = true;
        }
      } while ((iVar3 == 0) && (!bVar1));
      if (iVar3 == 3) {
        uVar5 = 0x1b;
      }
      else if (iVar3 != 0) {
        uVar5 = 0x2b;
      }
LAB_019bc640:
      FUN_019be4c8(lVar6,param_1);
      if (local_78 == '\0') {
        sigaction(0xd,(sigaction *)auStack_98,(sigaction *)0x0);
      }
    }
    else {
      FUN_019c003c(lVar6);
      uVar5 = 0x1b;
      if (iVar3 != 3) {
        uVar5 = 2;
      }
    }
  }
  else {
    FUN_019ca0fc(param_1,"easy handle already used in multi handle");
    uVar5 = 2;
  }
  return uVar5;
}




ulong FUN_019bc688(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char local_28;
  
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_019bc6d8(param_1,&stack0xffffffffffffffb8);
    uVar2 = FUN_019cac70(param_1);
    if (local_28 == '\0') {
      uVar1 = sigaction(0xd,(sigaction *)&stack0xffffffffffffffb8,(sigaction *)0x0);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}




ulong FUN_019bc6d8(ulong param_1,sigaction *param_2)

{
  char cVar1;
  uint uVar2;
  _union_1457 local_40;
  undefined8 uStack_38;
  ulong local_30;
  ulong uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x534);
  *(char *)((param_2->sa_mask).__val + 3) = cVar1;
  if (cVar1 != '\0') {
    return param_1;
  }
  (param_2->sa_mask).__val[0] = 0;
  (param_2->__sigaction_handler).sa_handler = (__sighandler_t)0x0;
  (param_2->sa_mask).__val[2] = 0;
  (param_2->sa_mask).__val[1] = 0;
  sigaction(0xd,(sigaction *)0x0,param_2);
  local_40.sa_handler = *(__sighandler_t *)&param_2->__sigaction_handler;
  uStack_28 = (param_2->sa_mask).__val[2];
  local_30 = (param_2->sa_mask).__val[1];
  uStack_38 = 1;
  uVar2 = sigaction(0xd,(sigaction *)&local_40,(sigaction *)0x0);
  return (ulong)uVar2;
}




long FUN_019bc7e0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (*(code *)PTR_calloc_02bf74c8)(1,0x8c58);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = (*(code *)PTR_malloc_02bf74a8)(0x100);
  *(long *)(lVar2 + 0x928) = lVar3;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar2 + 0x930) = 0x100;
    iVar1 = FUN_019cabbc(lVar2,param_1);
    if (iVar1 == 0) {
      *(undefined8 *)(lVar2 + 0x900) = 0;
      *(undefined8 *)(lVar2 + 0x920) = 0;
      *(undefined4 *)(lVar2 + 0x7d8) = *(undefined4 *)(param_1 + 0x7d8);
      *(undefined1 *)(lVar2 + 2000) = *(undefined1 *)(param_1 + 2000);
      if (*(long *)(param_1 + 0x798) != 0) {
        lVar3 = FUN_019c4878(param_1,*(undefined8 *)(*(long *)(param_1 + 0x798) + 8),
                             *(undefined8 *)(lVar2 + 0x798),*(undefined1 *)(param_1 + 0x3c9));
        *(long *)(lVar2 + 0x798) = lVar3;
        if (lVar3 == 0) goto LAB_019bc83c;
      }
      if (*(long *)(param_1 + 0x788) != 0) {
        lVar3 = FUN_019c1d48();
        *(long *)(lVar2 + 0x788) = lVar3;
        if (lVar3 == 0) goto LAB_019bc83c;
      }
      if (*(long *)(param_1 + 0x768) != 0) {
        lVar3 = (*(code *)PTR_strdup_02bf74c0)();
        *(long *)(lVar2 + 0x768) = lVar3;
        if (lVar3 == 0) goto LAB_019bc83c;
        *(undefined1 *)(lVar2 + 0x770) = 1;
      }
      if (*(long *)(param_1 + 0x778) != 0) {
        lVar3 = (*(code *)PTR_strdup_02bf74c0)();
        *(long *)(lVar2 + 0x778) = lVar3;
        if (lVar3 == 0) goto LAB_019bc83c;
        *(undefined1 *)(lVar2 + 0x780) = 1;
      }
      *(undefined4 *)(lVar2 + 0x8c50) = 0xc0dedbad;
      return lVar2;
    }
  }
LAB_019bc83c:
  FUN_019c1dcc(*(undefined8 *)(lVar2 + 0x788));
  *(undefined8 *)(lVar2 + 0x788) = 0;
  if (*(long *)(lVar2 + 0x928) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(lVar2 + 0x928) = 0;
  }
  if (*(long *)(lVar2 + 0x768) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(lVar2 + 0x768) = 0;
  }
  if (*(long *)(lVar2 + 0x778) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(lVar2 + 0x778) = 0;
  }
  FUN_019cab20(lVar2);
  (*(code *)PTR_free_02bf74b0)(lVar2);
  return 0;
}




void FUN_019bc968(long param_1)

{
  if (*(long *)(param_1 + 0x8ae0) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(long *)(param_1 + 0x8ae0) = 0;
  }
  *(undefined8 *)(param_1 + 0x8ae8) = 0;
  FUN_019caef8(param_1);
  FUN_019cab20(param_1);
  memset((void *)(param_1 + 0x220),0,0x548);
  FUN_019caf4c((void *)(param_1 + 0x220));
  memset((void *)(param_1 + 0x7a0),0,0x160);
  *(undefined4 *)(param_1 + 0x7d8) = 0x10;
  *(undefined8 *)(param_1 + 0x8940) = 0xffffffffffffffff;
  return;
}




int FUN_019bc9fc(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  void *__dest;
  void *pvVar6;
  ulong __n;
  void *__src;
  
  uVar2 = (param_2 & 4) << 3 | (param_2 & 1) << 4;
  iVar5 = 0;
  *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xffffffcf | uVar2;
  if ((param_2 & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x8968);
    pvVar6 = (void *)*plVar1;
    if (pvVar6 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      __n = *(ulong *)(param_1 + 0x8970);
      uVar4 = *(undefined4 *)(param_1 + 0x8978);
      *plVar1 = 0;
      __src = pvVar6;
      do {
        uVar3 = __n;
        if (0x3fff < __n) {
          uVar3 = 0x4000;
        }
        iVar5 = FUN_019ca574(*(undefined8 *)(param_1 + 0x10),uVar4,__src,uVar3);
        if (iVar5 != 0) goto LAB_019bcb1c;
        if ((0x4000 < __n) && (*plVar1 != 0)) {
          __dest = (void *)(*(code *)PTR_realloc_02bf74b8)(*plVar1,__n);
          if (__dest == (void *)0x0) {
            (*(code *)PTR_free_02bf74b0)(*plVar1);
            *plVar1 = 0;
            iVar5 = 0x1b;
          }
          else {
            *plVar1 = (long)__dest;
            memcpy(__dest,__src,__n);
            iVar5 = 0;
            *(ulong *)(param_1 + 0x8970) = __n;
          }
          goto LAB_019bcb1c;
        }
        __n = __n - uVar3;
        __src = (void *)((long)__src + uVar3);
      } while (__n != 0);
      iVar5 = 0;
LAB_019bcb1c:
      (*(code *)PTR_free_02bf74b0)(pvVar6);
    }
  }
  if ((uVar2 != 0x30) && (iVar5 == 0)) {
    FUN_019be274(param_1,1);
  }
  return iVar5;
}




void FUN_019bcb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_24;
  
  iVar1 = FUN_019bcbd4(param_1,&local_24,&local_40);
  if (iVar1 == 0) {
    *param_4 = 0;
    iVar1 = FUN_019ca940(local_40,local_24,param_2,param_3,&local_38);
    if (iVar1 == 0) {
      *param_4 = local_38;
    }
  }
  return;
}




undefined8 FUN_019bcbd4(long param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x2b;
  }
  else {
    if (*(char *)(param_1 + 0x539) == '\0') {
      pcVar3 = "CONNECT_ONLY is required!";
    }
    else {
      iVar1 = FUN_019bddd0(param_1,param_3);
      *param_2 = iVar1;
      if (iVar1 != -1) {
        return 0;
      }
      pcVar3 = "Failed to get recent socket";
    }
    FUN_019ca0fc(param_1,pcVar3);
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_019bcc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 local_40;
  long local_38;
  undefined4 local_24;
  
  local_40 = 0;
  uVar1 = FUN_019bcbd4(param_1,&local_24,&local_40);
  if ((int)uVar1 == 0) {
    *param_4 = 0;
    uVar1 = FUN_019ca368(local_40,local_24,param_2,param_3,&local_38);
    if (local_38 == -1) {
      uVar1 = 0x37;
    }
    else if (((int)uVar1 == 0) && (local_38 == 0)) {
      uVar1 = 0x51;
    }
    else {
      *param_4 = local_38;
    }
  }
  return uVar1;
}




long FUN_019bccd8(long param_1,undefined1 (*param_2) [16],ulong param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *(long *)(param_1 + 0x358);
  bVar1 = 0 < lVar6;
  bVar4 = bVar1;
  if (((param_3 & 1) != 0) && (bVar4 = bVar1 | 2, *(long *)(param_1 + 0x360) < 1)) {
    bVar4 = bVar1;
  }
  lVar2 = param_1;
  if (bVar4 != 1) {
    if (bVar4 == 3) {
      if (*(long *)(param_1 + 0x360) <= lVar6) {
        lVar6 = *(long *)(param_1 + 0x360);
      }
    }
    else if (bVar4 == 2) {
      lVar6 = *(long *)(param_1 + 0x360);
    }
    else {
      if ((param_3 & 1) == 0) {
        return 0;
      }
      lVar6 = 300000;
      lVar2 = 0;
    }
  }
  if (param_2 == (undefined1 (*) [16])0x0) {
    auVar7 = FUN_019c338c(lVar2);
  }
  else {
    auVar7 = *param_2;
  }
  if ((param_3 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x848);
    puVar5 = (undefined8 *)(param_1 + 0x850);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x838);
    puVar5 = (undefined8 *)(param_1 + 0x840);
  }
  lVar2 = FUN_019c33ec(auVar7._0_8_,auVar7._8_8_,uVar3,*puVar5);
  lVar6 = lVar6 - lVar2;
  if (lVar6 == 0) {
    lVar6 = -1;
  }
  return lVar6;
}




void FUN_019bcd9c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)((long)param_1 + 0x11a);
  *(undefined8 *)(lVar1 + 0x8be6) = *(undefined8 *)((long)param_1 + 0x122);
  *(undefined8 *)(lVar1 + 0x8bde) = uVar2;
  uVar2 = *(undefined8 *)((long)param_1 + 0xfc);
  *(undefined8 *)(lVar1 + 0x8bc8) = *(undefined8 *)((long)param_1 + 0x104);
  *(undefined8 *)(lVar1 + 0x8bc0) = uVar2;
  uVar2 = *(undefined8 *)((long)param_1 + 0x10c);
  *(undefined8 *)(lVar1 + 0x8bd8) = *(undefined8 *)((long)param_1 + 0x114);
  *(undefined8 *)(lVar1 + 0x8bd0) = uVar2;
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)((long)param_1 + 0x156);
  *(undefined8 *)(lVar1 + 0x8c1e) = *(undefined8 *)((long)param_1 + 0x15e);
  *(undefined8 *)(lVar1 + 0x8c16) = uVar2;
  lVar3 = param_1[0x29];
  *(long *)(lVar1 + 0x8c10) = param_1[0x2a];
  *(long *)(lVar1 + 0x8c08) = lVar3;
  lVar3 = param_1[0x27];
  *(long *)(lVar1 + 0x8c00) = param_1[0x28];
  *(long *)(lVar1 + 0x8bf8) = lVar3;
  lVar1 = *param_1;
  *(long *)(lVar1 + 0x8bf0) = param_1[0x26];
  *(long *)(lVar1 + 0x8c28) = param_1[0x2d];
  return;
}




void FUN_019bce18(long *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  sockaddr asStack_140 [8];
  sockaddr asStack_c0 [8];
  socklen_t local_34;
  
  if (*(int *)((long)param_1 + 0xac) == 2) {
    return;
  }
  lVar6 = *param_1;
  if (*(char *)((long)param_1 + 0x2e1) == '\0') {
    local_34 = 0x80;
    iVar1 = getpeername(param_2,asStack_c0,&local_34);
    if (iVar1 == 0) {
      local_34 = 0x80;
      iVar1 = getsockname(param_2,asStack_140,&local_34);
      if (iVar1 == 0) {
        uVar4 = FUN_019bcff0(asStack_c0,(long *)((long)param_1 + 0xfc),param_1 + 0x26);
        if ((uVar4 & 1) == 0) {
          puVar2 = (undefined4 *)__errno();
          uVar7 = *puVar2;
          uVar3 = FUN_019c1348(param_1,uVar7);
          pcVar5 = "ssrem inet_ntop() failed with errno %d: %s";
        }
        else {
          *(undefined8 *)((long)param_1 + 0x9e) = *(undefined8 *)((long)param_1 + 0x122);
          *(undefined8 *)((long)param_1 + 0x96) = *(undefined8 *)((long)param_1 + 0x11a);
          param_1[0x12] = *(long *)((long)param_1 + 0x114);
          param_1[0x11] = *(long *)((long)param_1 + 0x10c);
          param_1[0x10] = *(long *)((long)param_1 + 0x104);
          param_1[0xf] = *(long *)((long)param_1 + 0xfc);
          uVar4 = FUN_019bcff0(asStack_140,param_1 + 0x27,param_1 + 0x2d);
          if ((uVar4 & 1) != 0) {
            lVar6 = *param_1;
            goto LAB_019bce54;
          }
          puVar2 = (undefined4 *)__errno();
          uVar7 = *puVar2;
          uVar3 = FUN_019c1348(param_1,uVar7);
          pcVar5 = "ssloc inet_ntop() failed with errno %d: %s";
        }
      }
      else {
        puVar2 = (undefined4 *)__errno();
        uVar7 = *puVar2;
        uVar3 = FUN_019c1348(param_1,uVar7);
        pcVar5 = "getsockname() failed with errno %d: %s";
      }
    }
    else {
      puVar2 = (undefined4 *)__errno();
      uVar7 = *puVar2;
      uVar3 = FUN_019c1348(param_1,uVar7);
      pcVar5 = "getpeername() failed with errno %d: %s";
    }
    FUN_019ca0fc(lVar6,pcVar5,uVar7,uVar3);
  }
  else {
LAB_019bce54:
    uVar3 = *(undefined8 *)((long)param_1 + 0x11a);
    *(undefined8 *)(lVar6 + 0x8be6) = *(undefined8 *)((long)param_1 + 0x122);
    *(undefined8 *)(lVar6 + 0x8bde) = uVar3;
    uVar3 = *(undefined8 *)((long)param_1 + 0x10c);
    *(undefined8 *)(lVar6 + 0x8bd8) = *(undefined8 *)((long)param_1 + 0x114);
    *(undefined8 *)(lVar6 + 0x8bd0) = uVar3;
    uVar3 = *(undefined8 *)((long)param_1 + 0xfc);
    *(undefined8 *)(lVar6 + 0x8bc8) = *(undefined8 *)((long)param_1 + 0x104);
    *(undefined8 *)(lVar6 + 0x8bc0) = uVar3;
    lVar6 = *param_1;
    uVar3 = *(undefined8 *)((long)param_1 + 0x156);
    *(undefined8 *)(lVar6 + 0x8c1e) = *(undefined8 *)((long)param_1 + 0x15e);
    *(undefined8 *)(lVar6 + 0x8c16) = uVar3;
    lVar8 = param_1[0x29];
    *(long *)(lVar6 + 0x8c10) = param_1[0x2a];
    *(long *)(lVar6 + 0x8c08) = lVar8;
    lVar8 = param_1[0x27];
    *(long *)(lVar6 + 0x8c00) = param_1[0x28];
    *(long *)(lVar6 + 0x8bf8) = lVar8;
    lVar6 = *param_1;
    *(long *)(lVar6 + 0x8bf0) = param_1[0x26];
    *(long *)(lVar6 + 0x8c28) = param_1[0x2d];
  }
  return;
}




undefined8 FUN_019bcff0(ushort *param_1,char *param_2,ulong *param_3)

{
  ushort uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ushort *__cp;
  ulong uVar4;
  
  uVar1 = *param_1;
  if (uVar1 == 1) {
    FUN_019d5bc0(param_2,0x2e,"%s",param_1 + 1);
    uVar4 = 0;
    uVar3 = 1;
    goto LAB_019bd088;
  }
  if (uVar1 == 10) {
    __cp = param_1 + 4;
LAB_019bd058:
    pcVar2 = inet_ntop((uint)uVar1,__cp,param_2,0x2e);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 1;
      uVar4 = (ulong)((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8);
      goto LAB_019bd088;
    }
  }
  else if (uVar1 == 2) {
    __cp = param_1 + 2;
    goto LAB_019bd058;
  }
  uVar4 = 0;
  uVar3 = 0;
  *param_2 = '\0';
LAB_019bd088:
  *param_3 = uVar4;
  return uVar3;
}

