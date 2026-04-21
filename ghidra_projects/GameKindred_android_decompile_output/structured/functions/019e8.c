// functions/019e8 — 18 functions
#include "libGameKindred.h"




undefined8 FUN_019e836c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019c2ba0(param_1,0,(char *)(param_1 + 0x5bc));
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x5b8) != 5) {
      *(undefined4 *)(param_1 + 0x5b8) = 5;
    }
    if (*(char *)(param_1 + 0x5bc) != '\0') {
      *(undefined ***)(param_1 + 800) = &PTR_s_SMTPS_02bb0b00;
      uVar1 = FUN_019e83dc(param_1);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_019e83dc(long param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  *(undefined1 *)(param_1 + 0x5d4) = 0;
  *(undefined1 *)(param_1 + 0x5d6) = 0;
  iVar1 = FUN_019e8c44(param_1 + 0x548,"EHLO %s",*(undefined8 *)(param_1 + 0x5c0));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5b8) = 2;
  }
  return;
}




int FUN_019e8428(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  if ((*(char *)((long)param_1 + 0x2e4) == '\0') || (*(char *)((long)param_1 + 0x5d6) == '\0')) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xb7) = 0;
  }
  else {
    iVar1 = FUN_019e84ec(param_1,&local_28,&local_30,&local_38,(long)&local_40 + 4,&local_40);
    if (iVar1 == 0) {
      if (local_28 == 0) {
        FUN_019c9f64(*param_1,"No known authentication mechanisms supported!\n");
        iVar1 = 0x43;
      }
      else {
        iVar1 = FUN_019e8688(param_1,local_28,local_30,local_38,local_40._4_4_,local_40 & 0xffffffff
                            );
        if (local_30 != 0) {
          (*(code *)PTR_free_02bf74b0)(local_30);
        }
      }
    }
  }
  return iVar1;
}




undefined8
FUN_019e84ec(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xb9);
  lVar3 = *param_1;
  if (((uVar1 >> 3 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5cc) >> 3 & 1) == 0)) {
    if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5cc) >> 2 & 1) == 0)) {
      if (((uVar1 >> 6 & 1) != 0) && ((*(byte *)((long)param_1 + 0x5cc) >> 6 & 1) != 0)) {
        *param_2 = &DAT_01e21e68;
        *param_5 = 0xc;
        *param_6 = 0xd;
        *(undefined4 *)(param_1 + 0xba) = 0x40;
        if (*(char *)(lVar3 + 0x6f8) == '\0') {
          return 0;
        }
        uVar2 = thunk_FUN_019eba38(param_1[0x2e],param_1[0x2f],param_1 + 0x7c,param_3,param_4);
        return uVar2;
      }
      if ((((uVar1 >> 7 & 1) != 0) &&
          ((*(uint *)((long)param_1 + 0x5cc) != 0xffffffff &&
           ((*(uint *)((long)param_1 + 0x5cc) >> 7 & 1) != 0)))) || (param_1[0x31] != 0)) {
        *param_2 = "XOAUTH2";
        *param_5 = 0x11;
        *param_6 = 0x13;
        *(undefined4 *)(param_1 + 0xba) = 0x80;
        if (*(char *)(lVar3 + 0x6f8) == '\0') {
          return 0;
        }
        uVar2 = FUN_019eca4c(lVar3,param_1[0x2e],param_1[0x31],param_3,param_4);
        return uVar2;
      }
      if (((uVar1 & 1) != 0) && ((*(byte *)((long)param_1 + 0x5cc) & 1) != 0)) {
        *param_2 = "LOGIN";
        *param_5 = 7;
        *param_6 = 8;
        *(undefined4 *)(param_1 + 0xba) = 1;
        if (*(char *)(lVar3 + 0x6f8) == '\0') {
          return 0;
        }
        uVar2 = FUN_019ec158(lVar3,param_1[0x2e],param_3,param_4);
        return uVar2;
      }
      if ((uVar1 >> 1 & 1) == 0) {
        return 0;
      }
      if ((*(byte *)((long)param_1 + 0x5cc) >> 1 & 1) == 0) {
        return 0;
      }
      *param_2 = "PLAIN";
      *param_5 = 6;
      *param_6 = 0x13;
      *(undefined4 *)(param_1 + 0xba) = 2;
      if (*(char *)(lVar3 + 0x6f8) == '\0') {
        return 0;
      }
      uVar2 = FUN_019ec04c(lVar3,param_1[0x2e],param_1[0x2f],param_3,param_4);
      return uVar2;
    }
    pcVar4 = "CRAM-MD5";
    uVar5 = 9;
    uVar6 = 4;
  }
  else {
    pcVar4 = "DIGEST-MD5";
    uVar5 = 10;
    uVar6 = 8;
  }
  *param_2 = pcVar4;
  *param_5 = uVar5;
  *(undefined4 *)(param_1 + 0xba) = uVar6;
  return 0;
}




void FUN_019e8688(long param_1,char *param_2,long param_3,long param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  size_t sVar2;
  
  if ((param_3 != 0) && (sVar2 = strlen(param_2), param_4 + sVar2 + 8 < 0x201)) {
    iVar1 = FUN_019e8c44(param_1 + 0x548,"AUTH %s %s",param_2,param_3);
    if (iVar1 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x5b8) = param_6;
    return;
  }
  iVar1 = FUN_019e8c44(param_1 + 0x548,"AUTH %s",param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5b8) = param_5;
  }
  return;
}




void FUN_019e8730(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *__s;
  
  for (__s = (char *)(param_1 + 4); (*__s == ' ' || (*__s == '\t')); __s = __s + 1) {
  }
  sVar1 = strlen(__s);
  if (sVar1 != 0) {
    pcVar2 = __s + sVar1;
    do {
      if ((0x20 < (byte)pcVar2[-1]) ||
         ((1L << ((ulong)(byte)pcVar2[-1] & 0x3f) & 0x100002600U) == 0)) {
        *pcVar2 = '\0';
        break;
      }
      sVar1 = sVar1 - 1;
      pcVar2 = pcVar2 + -1;
    } while (sVar1 != 0);
  }
  *param_2 = __s;
  return;
}




void FUN_019e87b8(long *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = *(char **)(*(long *)(*param_1 + 0x218) + 8);
  puVar2 = *(undefined8 **)(*(long *)(*param_1 + 0x218) + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    pcVar4 = "HELP";
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      pcVar4 = pcVar1;
    }
    iVar3 = FUN_019e8c44(param_1 + 0xa9,"%s",pcVar4);
  }
  else {
    pcVar4 = "VRFY";
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      pcVar4 = pcVar1;
    }
    iVar3 = FUN_019e8c44(param_1 + 0xa9,"%s %s",pcVar4,*puVar2);
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xb7) = 0x14;
  }
  return;
}




void FUN_019e8848(long *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = "RCPT TO:%s";
  if (*(char *)**(undefined8 **)(*(long *)(*param_1 + 0x218) + 0x10) != '<') {
    pcVar1 = "RCPT TO:<%s>";
  }
  iVar2 = FUN_019e8c44(param_1 + 0xa9,pcVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xb7) = 0x16;
  }
  return;
}




void FUN_019e88a4(long *param_1)

{
  if (**(int **)(*param_1 + 0x218) != 0) {
    FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    return;
  }
  return;
}




long FUN_019e88d4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  plVar2 = *(long **)(param_1 + 0x58);
  lVar3 = *plVar2;
  lVar4 = *(long *)(lVar3 + 0x370);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
  }
  auVar5 = FUN_019c338c();
  lVar1 = FUN_019c33ec(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(param_1 + 0x40),
                       *(undefined8 *)(param_1 + 0x48));
  lVar3 = *(long *)(lVar3 + 0x358);
  lVar4 = lVar4 - lVar1;
  if (lVar3 != 0) {
    auVar5 = FUN_019c338c();
    lVar1 = FUN_019c33ec(auVar5._0_8_,auVar5._8_8_,plVar2[0x36],plVar2[0x37]);
    lVar3 = lVar3 - lVar1;
    if (lVar3 <= lVar4) {
      lVar4 = lVar3;
    }
  }
  return lVar4;
}




undefined8 FUN_019e8940(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar9 = (undefined8 *)param_1[0xb];
  uVar2 = *(undefined4 *)(puVar9 + 0x3a);
  lVar5 = FUN_019e88d4();
  uVar10 = *puVar9;
  if (lVar5 < 1) {
    FUN_019ca0fc(uVar10,"server response timeout");
    return 0x1c;
  }
  lVar8 = param_1[6];
  if (999 < lVar5) {
    lVar5 = 1000;
  }
  if ((param_2 & 1) == 0) {
    lVar5 = 0;
  }
  if (lVar8 == 0) {
    if (((*param_1 != 0) && ((ulong)param_1[2] < (ulong)param_1[1])) ||
       (uVar6 = thunk_FUN_019ee4c4(puVar9,0), (uVar6 & 1) != 0)) {
      iVar3 = 1;
      goto joined_r0x019e89f4;
    }
    lVar8 = param_1[6];
  }
  if (lVar8 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = uVar2;
    uVar2 = 0xffffffff;
  }
  iVar3 = FUN_019c14c8(uVar2,0xffffffff,uVar1,lVar5);
joined_r0x019e89f4:
  if ((param_2 & 1) != 0) {
    iVar4 = FUN_019c3f38(puVar9);
    if (iVar4 != 0) {
      return 0x2a;
    }
    auVar11 = FUN_019c338c();
    uVar7 = FUN_019d45a4(uVar10,auVar11._0_8_,auVar11._8_8_);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  if (iVar3 == 0) {
    uVar10 = 0;
  }
  else {
    if (iVar3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x019e8a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*(code *)param_1[0xc])(puVar9);
      return uVar10;
    }
    FUN_019ca0fc(uVar10,"select/poll error");
    uVar10 = 0x1b;
  }
  return uVar10;
}




bool FUN_019e8a8c(long *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1[6] == 0) && (bVar1 = false, *param_1 != 0)) {
    bVar1 = (ulong)param_1[2] < (ulong)param_1[1];
  }
  return bVar1;
}




void FUN_019e8ab4(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = **(long **)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(long *)(param_1 + 0x18) = lVar1 + 0x938;
  auVar2 = FUN_019c338c();
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
  return;
}




int FUN_019e8af4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  plVar4 = *(long **)(param_1 + 0x58);
  lVar2 = FUN_019d5c34("%s\r\n");
  if (lVar2 != 0) {
    uStack_58 = param_3[3];
    local_60 = param_3[2];
    uStack_68 = param_3[1];
    local_70 = *param_3;
    __s = (char *)FUN_019d5e00(lVar2,&local_70);
    (*(code *)PTR_free_02bf74b0)(lVar2);
    if (__s != (char *)0x0) {
      local_48 = 0;
      sVar3 = strlen(__s);
      *(undefined8 *)(param_1 + 0x10) = 0;
      lVar2 = **(long **)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 0x18) = lVar2 + 0x938;
      auVar5 = FUN_019c338c();
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar5;
      iVar1 = FUN_019ca368(plVar4,(int)plVar4[0x3a],__s,sVar3,&local_48);
      if (iVar1 != 0) {
        (*(code *)PTR_free_02bf74b0)(__s);
        return iVar1;
      }
      if (*(char *)(*plVar4 + 0x520) != '\0') {
        FUN_019ca014(*plVar4,2,__s,local_48,plVar4);
      }
      if (sVar3 - local_48 == 0) {
        (*(code *)PTR_free_02bf74b0)(__s);
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        auVar5 = FUN_019c338c();
        *(undefined1 (*) [16])(param_1 + 0x40) = auVar5;
        return 0;
      }
      *(size_t *)(param_1 + 0x30) = sVar3 - local_48;
      *(size_t *)(param_1 + 0x38) = sVar3;
      *(char **)(param_1 + 0x28) = __s;
      return 0;
    }
  }
  return 0x1b;
}




void FUN_019e8c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
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
  FUN_019e8af4(param_1,param_2,&local_60);
  return;
}




ulong FUN_019e8cb8(undefined4 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  bool bVar1;
  char *__dest;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  void *__dest_00;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  char *__dest_01;
  long local_68;
  
  plVar8 = (long *)param_2[0xb];
  uVar4 = 0;
  lVar7 = *plVar8;
  *param_3 = 0;
  *param_4 = 0;
  uVar6 = param_2[2];
  if (uVar6 >> 0xe == 0) {
    __dest = (char *)(lVar7 + 0x938);
    __dest_01 = __dest + uVar6;
    lVar10 = (long)__dest_01 - param_2[3];
    while( true ) {
      if ((void *)*param_2 == (void *)0x0) {
        uVar3 = FUN_019ca940(plVar8,param_1,__dest_01,0x4000 - uVar6,&local_68);
        if (uVar3 == 0x51) {
          return 0;
        }
        uVar2 = 0;
        if (local_68 < 1 || uVar3 != 0) {
          uVar2 = uVar3;
        }
        uVar4 = (ulong)uVar2;
        if (uVar2 != 0) goto LAB_019e8f24;
      }
      else {
        memcpy(__dest_01,(void *)*param_2,param_2[1]);
        local_68 = param_2[1];
        (*(code *)PTR_free_02bf74b0)(*param_2);
        *param_2 = 0;
        param_2[1] = 0;
      }
      if (local_68 < 1) break;
      *(long *)(lVar7 + 0xa8) = *(long *)(lVar7 + 0xa8) + local_68;
      param_2[2] = param_2[2] + local_68;
      lVar5 = local_68;
      lVar9 = 1;
      do {
        lVar10 = lVar10 + 1;
        if (*__dest_01 == '\n') {
          if (*(char *)(lVar7 + 0x520) != '\0') {
            FUN_019ca014(lVar7,1,param_2[3],lVar10,plVar8);
          }
          uVar4 = FUN_019ca574(plVar8,2,param_2[3],lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar4 = (*(code *)param_2[0xd])(plVar8,param_2[3],lVar10,param_3);
          if ((uVar4 & 1) != 0) {
            __n = (long)__dest_01 - (long)param_2[3];
            memmove(__dest,(void *)param_2[3],__n);
            *(undefined1 *)(lVar7 + __n + 0x938) = 0;
            param_2[3] = __dest_01 + 1;
            *param_4 = param_2[2];
            param_2[2] = 0;
            lVar10 = local_68 - lVar9;
            bVar1 = false;
            if ((lVar10 == 0) || (bVar1 = false, lVar10 == 0)) goto LAB_019e8eec;
            goto LAB_019e8ec0;
          }
          param_2[3] = __dest_01 + 1;
          lVar10 = 0;
          lVar5 = local_68;
        }
        __dest_01 = __dest_01 + 1;
        bVar1 = lVar9 < lVar5;
        lVar9 = lVar9 + 1;
      } while (bVar1);
      if ((lVar10 == lVar5) && (0x2000 < lVar5)) {
        FUN_019c9f64(lVar7,"Excessive server response line length received, %zd bytes. Stripping\n")
        ;
        bVar1 = true;
        lVar10 = 0x28;
LAB_019e8ec0:
        param_2[1] = lVar10;
        __dest_00 = (void *)(*(code *)PTR_malloc_02bf74a8)(lVar10);
        *param_2 = __dest_00;
        if (__dest_00 == (void *)0x0) {
          return 0x1b;
        }
        memcpy(__dest_00,(void *)param_2[3],param_2[1]);
LAB_019e8eec:
        lVar10 = 0;
        param_2[2] = 0;
        param_2[3] = __dest;
        __dest_01 = __dest;
      }
      else {
        bVar1 = true;
        if (0x2000 < (ulong)param_2[2]) {
          if (lVar10 != 0) goto LAB_019e8ec0;
          goto LAB_019e8eec;
        }
      }
      uVar6 = param_2[2];
      uVar4 = 0;
      if ((uVar6 >> 0xe != 0) || (!bVar1)) goto LAB_019e8f24;
    }
    FUN_019ca0fc(lVar7,"response reading failed");
    uVar4 = 0x38;
  }
LAB_019e8f24:
  *(undefined1 *)(param_2 + 4) = 0;
  return uVar4;
}




undefined4 FUN_019e8f58(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x1d0);
    uVar1 = 0x10000;
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}




undefined8 FUN_019e8f84(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long local_28;
  
  uVar1 = FUN_019ca368(*(long *)(param_1 + 0x58),*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x1d0),
                       (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x38)) -
                       *(long *)(param_1 + 0x30),*(long *)(param_1 + 0x30),&local_28);
  if ((int)uVar1 == 0) {
    local_28 = *(long *)(param_1 + 0x30) - local_28;
    if (local_28 == 0) {
      (*(code *)PTR_free_02bf74b0)(*(undefined8 *)(param_1 + 0x28));
      *(long *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      auVar2 = FUN_019c338c();
      uVar1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar2;
    }
    else {
      uVar1 = 0;
      *(long *)(param_1 + 0x30) = local_28;
    }
  }
  return uVar1;
}

