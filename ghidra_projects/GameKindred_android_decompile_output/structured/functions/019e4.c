// functions/019e4 — 11 functions
#include "libGameKindred.h"




undefined8 FUN_019e4748(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019c2ba0(param_1,0,(char *)(param_1 + 0x5bc));
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x5b8) != 4) {
      *(undefined4 *)(param_1 + 0x5b8) = 4;
    }
    if (*(char *)(param_1 + 0x5bc) == '\0') {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c0) = 0;
      *(undefined4 *)(param_1 + 0x5cc) = 0;
      *(undefined ***)(param_1 + 800) = &PTR_s_IMAPS_02bb0700;
      *(undefined1 *)(param_1 + 0x5d9) = 0;
      uVar1 = FUN_019e47d4(param_1,"CAPABILITY");
      if ((int)uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x5b8) = 2;
      }
    }
  }
  return uVar1;
}




undefined4
FUN_019e47d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
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
  
  *(int *)(param_1 + 0x5d0) = (*(int *)(param_1 + 0x5d0) + 1) % 1000;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  iVar1 = FUN_019c1e90(*(long *)(param_1 + 0x50) % 0x1a);
  FUN_019d5bc0(param_1 + 0x5d4,5,"%c%03d",iVar1 + 0x41,*(undefined4 *)(param_1 + 0x5d0));
  lVar3 = FUN_019d5c34("%s %s",param_1 + 0x5d4,param_2);
  if (lVar3 == 0) {
    uVar2 = 0x1b;
  }
  else {
    puStack_60 = &local_a0;
    ppuStack_68 = &local_70;
    uStack_58 = 0xffffff80ffffffd0;
    local_70 = (undefined1 *)register0x00000008;
    uVar2 = FUN_019e8af4(param_1 + 0x548,lVar3,&local_70);
    (*(code *)PTR_free_02bf74b0)(lVar3);
  }
  return uVar2;
}




int FUN_019e491c(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (*(char *)((long)param_1 + 0x2e4) == '\0') {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xb7) = 0;
  }
  else {
    iVar1 = FUN_019e4a00(param_1,&local_28,&local_30,&uStack_38,(long)&local_40 + 4,&local_40);
    if (iVar1 == 0) {
      if ((local_28 == 0) || ((*(byte *)((long)param_1 + 0x5c4) >> 1 & 1) == 0)) {
        if ((*(char *)((long)param_1 + 0x5da) == '\0') &&
           ((*(byte *)((long)param_1 + 0x5c4) & 1) != 0)) {
          iVar1 = FUN_019e4c28(param_1);
        }
        else {
          FUN_019c9f64(*param_1,"No known authentication mechanisms supported!\n");
          iVar1 = 0x43;
        }
      }
      else {
        iVar1 = FUN_019e4bbc(param_1,local_28,local_30,local_40._4_4_,local_40 & 0xffffffff);
        if (local_30 != 0) {
          (*(code *)PTR_free_02bf74b0)(local_30);
        }
      }
    }
  }
  return iVar1;
}




undefined8
FUN_019e4a00(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  lVar3 = *param_1;
  if (((uVar1 >> 3 & 1) == 0) || ((*(byte *)(param_1 + 0xb9) >> 3 & 1) == 0)) {
    if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)(param_1 + 0xb9) >> 2 & 1) == 0)) {
      if (((uVar1 >> 6 & 1) != 0) && ((*(byte *)(param_1 + 0xb9) >> 6 & 1) != 0)) {
        *param_2 = &DAT_01e21e68;
        *param_5 = 0xb;
        *param_6 = 0xc;
        *(undefined4 *)((long)param_1 + 0x5cc) = 0x40;
        if ((*(char *)((long)param_1 + 0x5db) == '\0') && (*(char *)(lVar3 + 0x6f8) == '\0')) {
          return 0;
        }
        uVar2 = thunk_FUN_019eba38(param_1[0x2e],param_1[0x2f],param_1 + 0x7c,param_3,param_4);
        return uVar2;
      }
      if ((((uVar1 >> 7 & 1) == 0) ||
          ((*(uint *)(param_1 + 0xb9) == 0xffffffff || ((*(uint *)(param_1 + 0xb9) >> 7 & 1) == 0)))
          ) && (param_1[0x31] == 0)) {
        if (((uVar1 & 1) != 0) && ((*(byte *)(param_1 + 0xb9) & 1) != 0)) {
          *param_2 = "LOGIN";
          *param_5 = 6;
          *param_6 = 7;
          *(undefined4 *)((long)param_1 + 0x5cc) = 1;
          if ((*(char *)((long)param_1 + 0x5db) == '\0') && (*(char *)(lVar3 + 0x6f8) == '\0')) {
            return 0;
          }
          uVar2 = FUN_019ec158(lVar3,param_1[0x2e],param_3,param_4);
          return uVar2;
        }
        if ((uVar1 >> 1 & 1) == 0) {
          return 0;
        }
        if ((*(byte *)(param_1 + 0xb9) >> 1 & 1) == 0) {
          return 0;
        }
        *param_2 = "PLAIN";
        *param_5 = 5;
        *param_6 = 0x12;
        *(undefined4 *)((long)param_1 + 0x5cc) = 2;
        if ((*(char *)((long)param_1 + 0x5db) == '\0') && (*(char *)(lVar3 + 0x6f8) == '\0')) {
          return 0;
        }
        uVar2 = FUN_019ec04c(lVar3,param_1[0x2e],param_1[0x2f],param_3,param_4);
        return uVar2;
      }
      *param_2 = "XOAUTH2";
      *param_5 = 0x10;
      *param_6 = 0x12;
      *(undefined4 *)((long)param_1 + 0x5cc) = 0x80;
      if ((*(char *)((long)param_1 + 0x5db) == '\0') && (*(char *)(lVar3 + 0x6f8) == '\0')) {
        return 0;
      }
      uVar2 = FUN_019eca4c(lVar3,param_1[0x2e],param_1[0x31],param_3,param_4);
      return uVar2;
    }
    pcVar4 = "CRAM-MD5";
    uVar5 = 8;
    uVar6 = 4;
  }
  else {
    pcVar4 = "DIGEST-MD5";
    uVar5 = 9;
    uVar6 = 8;
  }
  *param_2 = pcVar4;
  *param_5 = uVar5;
  *(undefined4 *)((long)param_1 + 0x5cc) = uVar6;
  return 0;
}




void FUN_019e4bbc(long param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = FUN_019e47d4(param_1,"AUTHENTICATE %s",param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5b8) = param_4;
    }
  }
  else {
    iVar1 = FUN_019e47d4(param_1,"AUTHENTICATE %s %s",param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5b8) = param_5;
    }
  }
  return;
}




int FUN_019e4c28(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x2e4);
  if (*(byte *)(param_1 + 0x2e4) != 0) {
    puVar4 = (undefined1 *)FUN_019e4ce0(*(undefined8 *)(param_1 + 0x170));
    puVar5 = (undefined1 *)FUN_019e4ce0(*(undefined8 *)(param_1 + 0x178));
    puVar1 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      puVar1 = &DAT_01e277f2;
    }
    puVar2 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      puVar2 = &DAT_01e277f2;
    }
    iVar3 = FUN_019e47d4(param_1,"LOGIN %s %s",puVar1,puVar2);
    if (puVar4 != (undefined1 *)0x0) {
      (*(code *)PTR_free_02bf74b0)(puVar4);
    }
    if (puVar5 != (undefined1 *)0x0) {
      (*(code *)PTR_free_02bf74b0)(puVar5);
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar6 = 0x13;
  }
  *(uint *)(param_1 + 0x5b8) = uVar6;
  return 0;
}




void FUN_019e4ce0(byte *param_1)

{
  long lVar1;
  bool bVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  lVar8 = 0;
  lVar9 = 0;
  bVar2 = false;
  pbVar4 = param_1;
  do {
    bVar7 = *pbVar4;
    if (bVar7 < 0x22) {
      if (bVar7 == 0x20) {
        bVar2 = true;
      }
      else if (bVar7 == 0) {
        if (!bVar2 && (lVar9 == 0 && lVar8 == 0)) {
          (*(code *)PTR_strdup_02bf74c0)(param_1);
          return;
        }
        sVar3 = strlen((char *)param_1);
        lVar1 = 2;
        if (!bVar2) {
          lVar1 = 0;
        }
        lVar8 = lVar9 + lVar8 + lVar1 + sVar3;
        pbVar4 = (byte *)(*(code *)PTR_malloc_02bf74a8)(lVar8 + 1);
        if (pbVar4 == (byte *)0x0) {
          return;
        }
        pbVar5 = pbVar4;
        if (bVar2) {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = 0x22;
          pbVar4[lVar8 + -1] = 0x22;
        }
        do {
          bVar7 = *param_1;
          if ((bVar7 == 0x22) || (bVar7 == 0x5c)) {
            pbVar6 = pbVar5 + 1;
            *pbVar5 = 0x5c;
            bVar7 = *param_1;
          }
          else {
            pbVar6 = pbVar5;
            if (bVar7 == 0) {
              pbVar4[lVar8] = 0;
              return;
            }
          }
          *pbVar6 = bVar7;
          param_1 = param_1 + 1;
          pbVar5 = pbVar6 + 1;
        } while( true );
      }
    }
    else if (bVar7 == 0x22) {
      lVar9 = lVar9 + 1;
    }
    else if (bVar7 == 0x5c) {
      lVar8 = lVar8 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}




void FUN_019e4e1c(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *__s;
  
  for (__s = (char *)(param_1 + 2); (*__s == ' ' || (*__s == '\t')); __s = __s + 1) {
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




int FUN_019e4ea4(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + 0x218);
  if (*(long *)(lVar3 + 0x38) == 0) {
    puVar1 = &DAT_01e277f2;
    if (*(undefined1 **)(lVar3 + 8) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(lVar3 + 8);
    }
    lVar3 = FUN_019e4ce0(puVar1);
    if (lVar3 == 0) {
      return 0x1b;
    }
    iVar2 = FUN_019e47d4(param_1,&DAT_01e26819,lVar3);
    (*(code *)PTR_free_02bf74b0)(lVar3);
  }
  else {
    puVar1 = &DAT_01e277f2;
    if (*(undefined1 **)(lVar3 + 0x40) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(lVar3 + 0x40);
    }
    iVar2 = FUN_019e47d4(param_1,"%s%s",*(long *)(lVar3 + 0x38),puVar1);
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xb7) = 0x14;
  }
  return iVar2;
}




undefined8 FUN_019e4f6c(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(*param_1 + 0x218) + 0x30) == 0) {
    FUN_019ca0fc(*param_1,"Cannot SEARCH without a query string.");
    uVar1 = 3;
  }
  else {
    uVar1 = FUN_019e47d4(param_1,"SEARCH %s");
    if ((int)uVar1 == 0) {
      *(undefined4 *)(param_1 + 0xb7) = 0x1a;
    }
  }
  return uVar1;
}




undefined8 FUN_019e4fc8(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(*param_1 + 0x218);
  lVar4 = *(long *)(lVar5 + 0x18);
  if (lVar4 == 0) {
    FUN_019ca0fc(*param_1,"Cannot FETCH without a UID.");
    uVar3 = 3;
  }
  else {
    puVar1 = &DAT_01e277f2;
    if (*(undefined1 **)(lVar5 + 0x20) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(lVar5 + 0x20);
    }
    if (*(long *)(lVar5 + 0x28) == 0) {
      uVar3 = FUN_019e47d4(param_1,"FETCH %s BODY[%s]",lVar4,puVar1);
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = FUN_019e47d4(param_1,"FETCH %s BODY[%s]<%s>",lVar4,puVar1);
      iVar2 = (int)uVar3;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xb7) = 0x16;
    }
  }
  return uVar3;
}

