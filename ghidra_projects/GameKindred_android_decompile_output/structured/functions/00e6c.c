// functions/00e6c — 34 functions
#include "libGameKindred.h"




char * FUN_00e6c0c8(char *param_1,byte *param_2)

{
  char *pcVar1;
  uint __c;
  
  __c = (uint)*param_2;
  if (*param_2 != 0) {
    do {
      param_2 = param_2 + 1;
      pcVar1 = strchr(param_1,__c);
      if (pcVar1 != (char *)0x0) {
        *pcVar1 = '\0';
        return pcVar1 + 1;
      }
      __c = (uint)*param_2;
    } while (__c != 0);
  }
  return (char *)0x0;
}




int FUN_00e6c114(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00e6c0c8(param_1,":");
  iVar2 = FUN_00e6ab4c(param_1,auStack_3c);
  if (lVar4 == 0) {
    iVar5 = iVar2 / 100;
    iVar3 = iVar2 % 100;
  }
  else {
    iVar3 = FUN_00e6ab4c(lVar4,auStack_3c);
    iVar5 = iVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar3 + iVar5 * 0x3c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6c1c0(double param_1,char *param_2,uint param_3,char *param_4)

{
  long lVar1;
  tm *__tp;
  tm tStack_78;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long)param_1;
  __tp = localtime_r(&local_40,&tStack_78);
  param_2[param_3 - 1] = '\0';
  strftime(param_2,(ulong)param_3,param_4,__tp);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6c244(double param_1,char *param_2,uint param_3)

{
  long lVar1;
  undefined *__format;
  tm *__tp;
  tm tStack_78;
  long local_40;
  long local_38;
  
  __format = PTR_DAT_02bf24a8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long)param_1;
  __tp = localtime_r(&local_40,&tStack_78);
  param_2[param_3 - 1] = '\0';
  strftime(param_2,(ulong)param_3,__format,__tp);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6c2cc(double param_1,char *param_2,uint param_3)

{
  long lVar1;
  tm *__tp;
  tm tStack_78;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long)param_1;
  __tp = gmtime_r(&local_40,&tStack_78);
  param_2[param_3 - 1] = '\0';
  strftime(param_2,(ulong)param_3,PTR_s__Y__m__dT_H__M__SZ_02bf24a0,__tp);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6c350(void)

{
  return;
}




uint FUN_00e6c354(uint param_1)

{
  return ((param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8) & 0xffff;
}




void FUN_00e6c360(void)

{
  return;
}




uint FUN_00e6c364(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}




void FUN_00e6c36c(void)

{
  return;
}




ulong FUN_00e6c370(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}




void FUN_00e6c378(void)

{
  return;
}




uint FUN_00e6c37c(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}




void FUN_00e6c38c(void)

{
  return;
}




undefined1  [16] FUN_00e6c390(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1 >> 0x20 | uVar1 << 0x20;
  return auVar2;
}




void FUN_00e6c3a0(int param_1)

{
  if (DAT_0320ff08 != param_1) {
    DAT_0320ff08 = param_1;
    if (param_1 == 1) {
      PTR_FUN_02bf24b0 = FUN_00e6c354;
      PTR_FUN_02bf24b8 = FUN_00e6c364;
      PTR_FUN_02bf24c0 = FUN_00e6c370;
      PTR_FUN_02bf24c8 = FUN_00e6c37c;
      PTR_FUN_02bf24d0 = FUN_00e6c390;
    }
    else if (param_1 == 0) {
      PTR_FUN_02bf24b0 = FUN_00e6c350;
      PTR_FUN_02bf24b8 = FUN_00e6c360;
      PTR_FUN_02bf24c0 = FUN_00e6c36c;
      PTR_FUN_02bf24c8 = FUN_00e6c378;
      PTR_FUN_02bf24d0 = FUN_00e6c38c;
    }
  }
  return;
}




undefined4 FUN_00e6c454(void)

{
  return DAT_0320ff08;
}




void FUN_00e6c460(long param_1,int param_2,ulong param_3,uint param_4)

{
  long lVar1;
  ulong __n;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __n = (ulong)((param_4 >> 3) * param_2);
  if ((param_3 >> 1 & 0x7fffffff) != 0) {
    param_2 = param_2 * (param_4 >> 3);
    uVar2 = 0;
    uVar3 = (ulong)((uint)(param_3 >> 1) & 0x7fffffff);
    uVar4 = param_2 * ((int)param_3 + -1);
    do {
      memcpy(auStack_70 + -(__n + 0xf & 0x1fffffff0),(void *)(param_1 + (ulong)uVar2),__n);
      memmove((void *)(param_1 + (ulong)uVar2),(void *)(param_1 + (ulong)uVar4),__n);
      memcpy((void *)(param_1 + (ulong)uVar4),auStack_70 + -(__n + 0xf & 0x1fffffff0),__n);
      uVar4 = uVar4 - param_2;
      uVar3 = uVar3 - 1;
      uVar2 = uVar2 + param_2;
    } while (uVar3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00e6c544(char *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  FILE *__stream;
  undefined8 *puVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __stream = fopen(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    uVar5 = FUN_00e6a7ec("ERROR: Failed to open Image \'%s\'\n",param_1);
  }
  else {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    iVar2 = FUN_00e6aef0(&local_60,0x12,1,__stream);
    if (iVar2 == 1) {
      if (((byte)local_50 != 0x18) && ((byte)local_50 != 0x20)) {
        pcVar6 = "ERROR: Image \'%s\' needs to be 24 or 32 bits\n";
        goto LAB_00e6c678;
      }
      iVar2 = (uint)uStack_58._4_2_ * (uint)((byte)local_50 >> 3) * (uint)uStack_58._6_2_;
      puVar4 = operator_new__((ulong)(iVar2 + 0x12));
      puVar4[1] = uStack_58;
      *puVar4 = local_60;
      *(undefined2 *)(puVar4 + 2) = local_50;
      iVar2 = FUN_00e6aef0((long)puVar4 + 0x12,iVar2,1,__stream);
      if ((local_50._1_1_ >> 5 & 1) == 0) {
        FUN_00e6c460((long)puVar4 + 0x12,uStack_58._4_2_,uStack_58._6_2_,(byte)local_50);
      }
      if (iVar2 == 1) {
        uVar3 = fclose(__stream);
        uVar5 = (ulong)uVar3;
        goto LAB_00e6c68c;
      }
      FUN_00e6a7ec("ERROR: Failed to read the image portion of \'%s\'\n",param_1);
      operator_delete__(puVar4);
    }
    else {
      pcVar6 = "ERROR: Failed to process Image \'%s\'\n";
LAB_00e6c678:
      FUN_00e6a7ec(pcVar6,param_1);
    }
    uVar3 = fclose(__stream);
    uVar5 = (ulong)uVar3;
  }
  puVar4 = (undefined8 *)0x0;
LAB_00e6c68c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00e6c6bc(char *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                 undefined1 *param_6)

{
  long lVar1;
  int iVar2;
  FILE *__stream;
  undefined1 uVar3;
  undefined8 local_70;
  long local_68;
  undefined1 local_60;
  undefined1 uStack_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __stream = fopen(param_1,"wb");
  iVar2 = 0;
  if (__stream != (FILE *)0x0) {
    local_70 = 0x20000;
    local_68 = (ulong)CONCAT22((short)param_4,(short)param_3) << 0x20;
    if (param_6 == (undefined1 *)0x0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = *param_6;
    }
    _local_60 = CONCAT11(uVar3,(char)param_5);
    FUN_00e6af10(&local_70,0x12,1,__stream);
    FUN_00e6af10(param_2,param_4 * param_3 * (param_5 >> 3),1,__stream);
    iVar2 = fclose(__stream);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00e6c7a8(undefined1 *param_1,undefined1 *param_2,int param_3,int param_4,undefined1 param_5
                 )

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  
  if (param_4 != 0) {
    iVar4 = 0;
    lVar1 = (ulong)(param_3 - 1) + 1;
    do {
      puVar3 = param_2;
      if (param_3 != 0) {
        puVar3 = param_2 + lVar1 * 3;
        puVar6 = param_1;
        iVar5 = param_3;
        do {
          iVar5 = iVar5 + -1;
          *puVar6 = *param_2;
          puVar6[1] = param_2[1];
          uVar2 = param_2[2];
          puVar6[3] = param_5;
          param_2 = param_2 + 3;
          puVar6[2] = uVar2;
          puVar6 = puVar6 + 4;
        } while (iVar5 != 0);
        param_1 = param_1 + lVar1 * 4;
      }
      iVar4 = iVar4 + 1;
      param_2 = puVar3;
    } while (iVar4 != param_4);
  }
  return;
}




void FUN_00e6c810(ushort *param_1,byte *param_2,int param_3,int param_4)

{
  for (param_4 = param_4 * param_3; param_4 != 0; param_4 = param_4 + -1) {
    *param_1 = (*param_2 & 0xf8) << 8 | (ushort)(param_2[1] >> 2) << 5 | (ushort)(param_2[2] >> 3);
    param_2 = param_2 + 3;
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_00e6c84c(long param_1,long param_2,int param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  uVar2 = 2;
  if (param_5 != 2) {
    uVar2 = (ulong)(param_5 == 1);
  }
  lVar3 = 0;
  if (param_6 - 1U < 3) {
    lVar3 = (ulong)(param_6 - 1U) + 1;
  }
  if (param_4 != 0) {
    iVar5 = 0;
    lVar1 = (ulong)(param_3 - 1) + 1;
    do {
      lVar4 = param_2;
      if (param_3 != 0) {
        lVar4 = param_2 + lVar1 * 3;
        puVar6 = (undefined1 *)(param_1 + lVar3);
        puVar7 = (undefined1 *)(param_2 + uVar2);
        iVar8 = param_3;
        do {
          iVar8 = iVar8 + -1;
          *puVar6 = *puVar7;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 3;
        } while (iVar8 != 0);
        param_1 = param_1 + lVar1 * 4;
      }
      iVar5 = iVar5 + 1;
      param_2 = lVar4;
    } while (iVar5 != param_4);
  }
  return;
}




void FUN_00e6c8bc(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 != 0) {
    uVar3 = param_2 * param_2;
    fVar7 = (float)param_2;
    fVar8 = (float)uVar3 + -1.0;
    uVar4 = 0;
    uVar5 = 0;
    fVar9 = fVar7 / (float)(param_2 - 1);
    do {
      if (uVar3 != 0) {
        uVar6 = 0;
        uVar2 = uVar4;
        do {
          fVar10 = (fVar8 / (float)uVar3) * ((float)(uVar6 & 0xffffffff) / fVar8);
          fVar11 = fVar10 * fVar7;
          fVar11 = fVar11 - (float)(int)fVar11;
          uVar6 = uVar6 + 1;
          *(char *)(param_1 + (ulong)uVar2) = (char)(int)(fVar9 * fVar11 * 255.0);
          uVar1 = uVar2 + 2;
          *(char *)(param_1 + (ulong)(uVar2 + 1)) =
               (char)(int)(fVar9 * ((fVar7 + -1.0) / fVar7) * ((float)uVar5 / (fVar7 + -1.0)) *
                          255.0);
          uVar2 = uVar2 + param_3;
          *(char *)(param_1 + (ulong)uVar1) = (char)(int)(fVar9 * (fVar10 - fVar11 / fVar7) * 255.0)
          ;
        } while (uVar3 != uVar6);
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + param_3 * uVar3;
    } while (uVar5 != param_2);
  }
  return;
}




void FUN_00e6c998(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  DAT_0320ff28 = operator_new(0x18);
  DAT_0320ff28[2] = 0;
  DAT_0320ff28[1] = 0;
  bVar3 = DAT_0320ffa8;
  *DAT_0320ff28 = DAT_0320ff28 + 1;
  uVar1 = DAT_0320ffb0;
  puVar2 = DAT_0320ffb8;
  if ((bVar3 & 1) == 0) {
    uVar1 = (ulong)(bVar3 >> 1);
    puVar2 = &DAT_0320ffa9;
  }
  DAT_0320ff30 = 0;
  FUN_008fcea8(&DAT_0320ff10,puVar2,uVar1);
  return;
}




void FUN_00e6c9f8(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  
  uVar1 = DAT_0320ffb0;
  puVar2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    uVar1 = (ulong)(DAT_0320ffa8 >> 1);
    puVar2 = &DAT_0320ffa9;
  }
  FUN_008fcea8(&DAT_0320ff10,puVar2,uVar1);
  pvVar3 = DAT_0320ff28;
  DAT_0320ff30 = 0;
  if (DAT_0320ff28 != (void *)0x0) {
    FUN_00e6cf6c(DAT_0320ff28,*(undefined8 *)((long)DAT_0320ff28 + 8));
    operator_delete(pvVar3);
  }
  DAT_0320ff28 = (void *)0x0;
  return;
}




void FUN_00e6ca68(undefined1 *param_1,void *param_2,uint param_3,long param_4,ulong param_5)

{
  undefined1 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *__dest;
  ulong local_80 [2];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = 0;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    puVar1 = &DAT_0320ff30;
    if (param_1 != (undefined1 *)0x0) {
      puVar1 = param_1;
    }
    __dest = operator_new__((ulong)(param_3 + 1));
    *(undefined1 *)((long)__dest + (ulong)param_3) = 0;
    memcpy(__dest,param_2,(ulong)param_3);
    FUN_00e70510(&local_68);
    if ((param_5 & 1) == 0) {
      FUN_00e705a0(&local_68,__dest);
    }
    else {
      local_80[0] = 0;
      local_80[1] = 0;
      local_70 = (void *)0x0;
      FUN_00e77a3c(__dest,param_3,local_80,1,1);
      pvVar2 = (void *)((ulong)local_80 | 1);
      if ((local_80[0] & 1) != 0) {
        pvVar2 = local_70;
      }
      FUN_00e705a0(&local_68,pvVar2);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    operator_delete__(__dest);
    FUN_00e6cbd0(puVar1,&local_68);
    if (param_4 != 0) {
      FUN_008fa54c(local_80,param_4);
      FUN_008fce60(&DAT_0320ff10,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00e6cbd0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  byte local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  int local_5c;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_5c = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  FUN_00e70510(&local_88);
  FUN_00e70510(&local_98);
  uVar2 = DAT_0320ff28;
  FUN_008fa54c(local_c0,param_1);
  local_50 = local_c0;
  lVar3 = FUN_00e6d3c0(uVar2,local_c0,&DAT_01bee96d,&local_50,auStack_58);
  iVar5 = 0;
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
    iVar5 = local_5c;
  }
  uVar4 = FUN_00e710d0(param_2,iVar5,0x22,0x22,1,&local_88,0,&local_5c);
  if ((uVar4 & 1) != 0) {
    do {
      local_5c = local_5c + 1;
      uVar4 = FUN_00e710d0(param_2,local_5c,0x22,0x22,1,&local_98,0,&local_5c);
      if ((uVar4 & 1) == 0) break;
      FUN_00e715d8(&local_98);
      local_5c = local_5c + 1;
      FUN_00e70a24(&local_88,local_78);
      FUN_008fcdb8(local_c0,local_78);
      thunk_FUN_00e7051c(&local_a8,&local_98);
      FUN_00e6d5fc(lVar3 + 0x38,local_c0,local_c0);
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      uVar4 = FUN_00e710d0(param_2,local_5c,0x22,0x22,1,&local_88,0,&local_5c);
    } while ((uVar4 & 1) != 0);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6cdb8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = DAT_0320ff28;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  lVar2 = FUN_00e6d040(lVar2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (DAT_0320ff28 + 8 != lVar2) {
    FUN_00e6d1a8(DAT_0320ff28,lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00e6ce4c(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_0320ff20;
  if ((DAT_0320ff10 & 1) == 0) {
    puVar1 = &DAT_0320ff11;
  }
  return puVar1;
}




void FUN_00e6ce68(char *param_1)

{
  strcpy(&DAT_0320ff30,param_1);
  return;
}




undefined8 * FUN_00e6ce7c(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = DAT_0320ff28;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = &DAT_0320ff30;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  FUN_008fa54c(local_60,puVar1);
  lVar3 = FUN_00e6d040(lVar3,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  puVar5 = &DAT_03210450;
  if ((param_1 != 0) && (DAT_0320ff28 + 8 != lVar3)) {
    FUN_008fa54c(local_60,param_1);
    lVar4 = FUN_00e6d258(lVar3 + 0x38,local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if (lVar3 + 0x40 != lVar4) {
      puVar5 = (undefined8 *)(lVar4 + 0x38);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}




void FUN_00e6cf6c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00e6cf6c(param_1,*param_2);
    FUN_00e6cf6c(param_1,param_2[1]);
    FUN_00e6cfd4(param_2 + 7,param_2[8]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00e6cfd4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00e6cfd4(param_1,*param_2);
    FUN_00e6cfd4(param_1,param_2[1]);
    if ((void *)param_2[8] != (void *)0x0) {
      operator_delete__((void *)param_2[8]);
      param_2[7] = 0;
      param_2[8] = 0;
    }
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

