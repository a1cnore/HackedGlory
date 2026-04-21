// functions/019f8 — 15 functions
#include "libGameKindred.h"




undefined8 FUN_019f8260(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  lVar6 = *param_1;
  lVar8 = param_2[0xd];
  plVar10 = *(long **)(lVar6 + 0x8b50);
  lVar9 = *(long *)(lVar6 + 0x8b48);
  lVar7 = *plVar10;
  *param_2 = lVar8 + *(long *)(lVar7 + 0x28);
  lVar1 = 0;
  if (*(long *)(lVar7 + 0x38) != 0) {
    lVar1 = lVar8 + *(long *)(lVar7 + 0x38);
  }
  param_2[10] = lVar1;
  lVar1 = 0;
  if (*(long *)(lVar7 + 0x48) != 0) {
    lVar1 = lVar8 + *(long *)(lVar7 + 0x48);
  }
  param_2[8] = lVar1;
  lVar1 = 0;
  if (*(long *)(lVar7 + 0x50) != 0) {
    lVar1 = lVar8 + *(long *)(lVar7 + 0x50);
  }
  param_2[0xb] = lVar1;
  param_2[7] = lVar8 + *(long *)(lVar7 + 0x40);
  lVar1 = 0;
  if (*(long *)(lVar7 + 0x30) != 0) {
    lVar1 = lVar8 + *(long *)(lVar7 + 0x30);
  }
  param_2[9] = lVar1;
  pcVar2 = FUN_019f8dd8;
  if (*(code **)(lVar6 + 0x720) != (code *)0x0) {
    pcVar2 = *(code **)(lVar6 + 0x720);
  }
  iVar3 = (*pcVar2)(*(undefined8 *)(lVar6 + 0x728),*(undefined8 *)(lVar6 + 0x8b40));
  if ((iVar3 == 0) &&
     ((((int)param_2[1] != 2 || ((char *)param_2[0xb] == (char *)0x0)) ||
      (pcVar5 = strstr((char *)param_2[0xb]," -> "), pcVar5 == (char *)0x0)))) {
    iVar3 = FUN_019da3c4(lVar9,*(undefined8 *)(lVar9 + 8),param_2);
    uVar4 = 0;
    if (iVar3 == 0) {
      FUN_019f73ac(0,param_2);
      uVar4 = 0x1b;
    }
  }
  else {
    FUN_019f73ac(0,param_2);
    uVar4 = 0;
  }
  *(undefined8 *)(*plVar10 + 0x10) = 0;
  return uVar4;
}




long * FUN_019f839c(undefined8 *param_1,byte *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_44 [4];
  
  plVar1 = (long *)(*(code *)PTR_malloc_02bf74a8)
                             ((ulong)(uint)(*(int *)(param_1 + 3) << 1) +
                              (ulong)*(uint *)(param_1 + 4) + 0x18);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 3;
    *plVar1 = (long)param_1;
    plVar1[1] = (long)plVar2;
    plVar1[2] = (long)plVar2 + (ulong)*(uint *)(param_1 + 3);
    if (*(uint *)((long)param_1 + 0x1c) < param_3) {
      (*(code *)*param_1)();
      (*(code *)param_1[1])(plVar1[1],param_2,param_3);
      param_2 = (byte *)(plVar1[2] + (ulong)*(uint *)(param_1 + 3));
      (*(code *)param_1[2])(param_2,plVar1[1]);
      param_3 = *(uint *)(param_1 + 4);
      plVar2 = (long *)plVar1[1];
    }
    (*(code *)*param_1)(plVar2);
    (*(code *)*param_1)(plVar1[2]);
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)param_3;
      uVar4 = uVar3;
      do {
        local_44[0] = *param_2 ^ 0x36;
        (*(code *)param_1[1])(plVar1[1],local_44,1);
        local_44[0] = *param_2 ^ 0x5c;
        (*(code *)param_1[1])(plVar1[2],local_44,1);
        uVar4 = uVar4 - 1;
        param_2 = param_2 + 1;
      } while (uVar4 != 0);
    }
    if (uVar3 < *(uint *)((long)param_1 + 0x1c)) {
      do {
        (*(code *)param_1[1])(plVar1[1],&DAT_01e29af2,1);
        (*(code *)param_1[1])(plVar1[2],&DAT_01e29af3,1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((long)param_1 + 0x1c));
    }
  }
  return plVar1;
}




undefined8 FUN_019f8530(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}




undefined8 FUN_019f8550(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    param_2 = param_1[2] + (ulong)*(uint *)(lVar1 + 0x18);
  }
  (**(code **)(lVar1 + 0x10))(param_2,param_1[1]);
  (**(code **)(lVar1 + 8))(param_1[2],param_2,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_2,param_1[2]);
  (*(code *)PTR_free_02bf74b0)(param_1);
  return 0;
}




void FUN_019f85d8(long param_1,const_DES_cblock *param_2,DES_cblock *param_3)

{
  DES_key_schedule DStack_b0;
  
  FUN_019f8668(param_1,&DStack_b0);
  DES_ecb_encrypt(param_2,param_3,&DStack_b0,1);
  FUN_019f8668(param_1 + 7,&DStack_b0);
  DES_ecb_encrypt(param_2,param_3 + 1,&DStack_b0,1);
  FUN_019f8668(param_1 + 0xe,&DStack_b0);
  DES_ecb_encrypt(param_2,param_3 + 2,&DStack_b0,1);
  return;
}




int FUN_019f8668(uchar *param_1,DES_key_schedule *param_2)

{
  int iVar1;
  uchar local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  uchar local_11;
  
  local_18 = *param_1;
  local_17 = param_1[1] >> 1 | local_18 << 7;
  local_16 = param_1[2] >> 2 | param_1[1] << 6;
  local_15 = param_1[3] >> 3 | param_1[2] << 5;
  local_14 = param_1[4] >> 4 | param_1[3] << 4;
  local_13 = param_1[5] >> 5 | param_1[4] << 3;
  local_11 = param_1[6] << 1;
  local_12 = param_1[6] >> 6 | param_1[5] << 2;
  DES_set_odd_parity((DES_cblock *)&local_18);
  iVar1 = DES_set_key((const_DES_cblock *)&local_18,param_2);
  return iVar1;
}




void FUN_019f8708(undefined8 param_1,char *param_2,DES_cblock *param_3)

{
  size_t sVar1;
  DES_key_schedule DStack_d0;
  undefined1 auStack_50 [7];
  undefined1 auStack_49 [9];
  
  sVar1 = strlen(param_2);
  if (0xd < sVar1) {
    sVar1 = 0xe;
  }
  FUN_019e24d4(auStack_50,param_2,sVar1);
  memset(auStack_50 + sVar1,0,0xe - sVar1);
  FUN_019f8668(auStack_50,&DStack_d0);
  DES_ecb_encrypt((const_DES_cblock *)&DAT_01e29af4,param_3,&DStack_d0,1);
  FUN_019f8668(auStack_49,&DStack_d0);
  DES_ecb_encrypt((const_DES_cblock *)&DAT_01e29af4,param_3 + 1,&DStack_d0,1);
  param_3[2][4] = '\0';
  *(uchar *)((long)(param_3 + 2) + 0) = '\0';
  *(uchar *)((long)(param_3 + 2) + 1) = '\0';
  *(uchar *)((long)(param_3 + 2) + 2) = '\0';
  *(uchar *)((long)(param_3 + 2) + 3) = '\0';
  return;
}




undefined8 FUN_019f87c8(undefined8 param_1,char *param_2,uchar *param_3)

{
  char cVar1;
  size_t sVar2;
  void *data;
  undefined8 uVar3;
  undefined1 *puVar4;
  size_t len;
  MD4_CTX MStack_a0;
  
  sVar2 = strlen(param_2);
  len = sVar2 << 1;
  data = (void *)(*(code *)PTR_malloc_02bf74a8)(len);
  if (data == (void *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    if (sVar2 != 0) {
      puVar4 = (undefined1 *)((long)data + 1);
      do {
        cVar1 = *param_2;
        *puVar4 = 0;
        sVar2 = sVar2 - 1;
        puVar4[-1] = cVar1;
        puVar4 = puVar4 + 2;
        param_2 = param_2 + 1;
      } while (sVar2 != 0);
    }
    MD4_Init(&MStack_a0);
    MD4_Update(&MStack_a0,data,len);
    MD4_Final(param_3,&MStack_a0);
    param_3[0x14] = '\0';
    param_3[0x10] = '\0';
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    (*(code *)PTR_free_02bf74b0)(data);
    uVar3 = 0;
  }
  return uVar3;
}




undefined8
FUN_019f8898(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_019f839c(&PTR_MD5_Init_02bb0340,param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_019f8530(lVar1,param_3,param_4);
    FUN_019f8550(lVar1,param_5);
    uVar2 = 0;
  }
  return uVar2;
}




undefined4
FUN_019f8904(byte *param_1,long param_2,undefined1 *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (param_4 + param_2) * 2;
  lVar4 = (*(code *)PTR_malloc_02bf74a8)(lVar6);
  if (lVar4 == 0) {
    uVar3 = 0x1b;
  }
  else {
    if (param_2 != 0) {
      puVar5 = (undefined1 *)(lVar4 + 1);
      lVar7 = param_2;
      do {
        iVar2 = toupper((uint)*param_1);
        puVar5[-1] = (char)iVar2;
        *puVar5 = 0;
        lVar7 = lVar7 + -1;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar7 != 0);
    }
    if (param_4 != 0) {
      puVar5 = (undefined1 *)(lVar4 + param_2 * 2 + 1);
      do {
        uVar1 = *param_3;
        *puVar5 = 0;
        param_4 = param_4 + -1;
        puVar5[-1] = uVar1;
        puVar5 = puVar5 + 2;
        param_3 = param_3 + 1;
      } while (param_4 != 0);
    }
    uVar3 = FUN_019c1e8c(lVar6);
    uVar3 = FUN_019f8898(param_5,0x10,lVar4,uVar3,param_6);
    (*(code *)PTR_free_02bf74b0)(lVar4);
  }
  return uVar3;
}




int FUN_019f8a08(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                uint *param_5)

{
  uint uVar1;
  int iVar2;
  time_t tVar3;
  undefined8 *__s;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  
  tVar3 = time((time_t *)0x0);
  uVar1 = *(int *)(param_3 + 0x18) + 0x30;
  __s = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)((ulong)uVar1);
  if (__s == (undefined8 *)0x0) {
    iVar2 = 0x1b;
  }
  else {
    lVar4 = tVar3 * 10000000 + 0x19db1ded53e8000;
    memset(__s,0,(ulong)uVar1);
    FUN_019d5bc0(__s + 2,*(int *)(param_3 + 0x18) + 0x20,&DAT_01e29afc,0,0,0,0);
    *(char *)((long)__s + 0x19) = (char)((ulong)lVar4 >> 8);
    *(char *)((long)__s + 0x1a) = (char)((ulong)lVar4 >> 0x10);
    *(char *)((long)__s + 0x1b) = (char)((ulong)lVar4 >> 0x18);
    *(char *)((long)__s + 0x1c) = (char)((ulong)lVar4 >> 0x20);
    *(char *)((long)__s + 0x1d) = (char)((ulong)lVar4 >> 0x28);
    *(char *)(__s + 3) = (char)lVar4;
    *(char *)((long)__s + 0x1e) = (char)((ulong)lVar4 >> 0x30);
    *(char *)((long)__s + 0x1f) = (char)((ulong)lVar4 >> 0x38);
    __s[4] = *param_2;
    memcpy((void *)((long)__s + 0x2c),*(void **)(param_3 + 0x10),(ulong)*(uint *)(param_3 + 0x18));
    __s[1] = *(undefined8 *)(param_3 + 8);
    iVar2 = FUN_019f8898(param_1,0x10,__s + 1,*(int *)(param_3 + 0x18) + 0x28,&local_60);
    if (iVar2 == 0) {
      __s[1] = uStack_58;
      *__s = local_60;
      *param_4 = __s;
      *param_5 = uVar1;
    }
    else {
      (*(code *)PTR_free_02bf74b0)(__s);
    }
  }
  return iVar2;
}




void FUN_019f8b88(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = *param_3;
  local_28 = *param_2;
  iVar1 = FUN_019f8898(param_1,0x10,&local_30,0x10,&local_40);
  if (iVar1 == 0) {
    param_4[1] = uStack_38;
    *param_4 = local_40;
    param_4[2] = *param_2;
  }
  return;
}




undefined4 FUN_019f8be8(char *param_1,char *param_2)

{
  int iVar1;
  char *__s;
  char *__s_00;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [24];
  undefined1 auStack_38 [8];
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    return 0;
  }
  if (*param_1 == '\0') {
    return 0;
  }
  if (*param_2 == '\0') {
    return 0;
  }
  __s = (char *)(*(code *)PTR_strdup_02bf74c0)();
  if (__s == (char *)0x0) {
    return 0;
  }
  __s_00 = (char *)(*(code *)PTR_strdup_02bf74c0)(param_2);
  if (__s_00 == (char *)0x0) {
    uVar6 = 0;
    goto LAB_019f8dc0;
  }
  sVar2 = strlen(__s_00);
  if (__s_00[sVar2 - 1] == '.') {
    __s_00[sVar2 - 1] = '\0';
  }
  sVar2 = strlen(__s);
  if (__s[sVar2 - 1] == '.') {
    __s[sVar2 - 1] = '\0';
  }
  pcVar3 = strchr(__s,0x2a);
  if (pcVar3 == (char *)0x0) {
LAB_019f8d0c:
    iVar1 = FUN_019e23a8(__s,__s_00);
    if (iVar1 != 0) goto LAB_019f8d1c;
LAB_019f8da8:
    uVar6 = 0;
  }
  else {
    iVar1 = inet_pton(2,__s_00,auStack_38);
    if ((0 < iVar1) || (iVar1 = inet_pton(10,__s_00,auStack_58), 0 < iVar1)) goto LAB_019f8da8;
    pcVar4 = strchr(__s,0x2e);
    if ((pcVar4 == (char *)0x0) ||
       (((pcVar5 = strchr(pcVar4 + 1,0x2e), pcVar4 < pcVar3 || (pcVar5 == (char *)0x0)) ||
        (iVar1 = FUN_019e2430(__s,&DAT_01e29b09,4), iVar1 != 0)))) goto LAB_019f8d0c;
    pcVar5 = strchr(__s_00,0x2e);
    if (((pcVar5 == (char *)0x0) || (iVar1 = FUN_019e23a8(pcVar4,pcVar5), iVar1 == 0)) ||
       (((long)pcVar5 - (long)__s_00 < (long)pcVar4 - (long)__s ||
        ((iVar1 = FUN_019e2430(__s,__s_00,(long)pcVar3 - (long)__s), iVar1 == 0 ||
         (iVar1 = FUN_019e2430(pcVar3 + 1,(long)pcVar5 - ((long)pcVar4 - (long)(pcVar3 + 1))),
         iVar1 == 0)))))) goto LAB_019f8da8;
LAB_019f8d1c:
    uVar6 = 1;
  }
  (*(code *)PTR_free_02bf74b0)(__s_00);
LAB_019f8dc0:
  (*(code *)PTR_free_02bf74b0)(__s);
  return uVar6;
}




undefined8 FUN_019f8dd8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_019f8df4(param_2,param_3);
    return uVar1;
  }
  return 2;
}




/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_019f8df4(byte *param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined8 local_190;
  char local_188 [91];
  undefined1 local_12d;
  undefined1 local_12b;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  char local_84;
  char local_83;
  char local_82;
  char local_81;
  char local_80;
  char local_7f;
  char local_7e [6];
  undefined8 local_78;
  undefined2 local_70;
  
  memset(local_188,0,0x10f);
  local_190 = &local_84;
LAB_019f8e88:
  bVar5 = true;
  while( true ) {
    bVar4 = *param_1;
    if (!bVar5) goto LAB_019f8ef0;
    if (bVar4 != 0x5c) break;
    bVar5 = false;
    param_1 = param_1 + 1;
  }
  if (0x3e < bVar4) {
    if (bVar4 == 0x3f) {
      bVar4 = *param_2;
      iVar6 = isprint((uint)bVar4);
      if (iVar6 == 0) {
        if (bVar4 != 0) {
          return 2;
        }
        return true;
      }
      goto LAB_019f8f08;
    }
    if (bVar4 != 0x5b) goto LAB_019f8efc;
    uVar8 = 0;
    lVar11 = 0;
    bVar5 = false;
    param_1 = param_1 + 1;
    uVar10 = 0;
    goto switchD_019f8f58_default;
  }
  if (bVar4 == 0) {
    bVar5 = *param_2 == 0;
    goto LAB_019f94b4;
  }
  pbVar13 = param_1;
  if (bVar4 != 0x2a) goto LAB_019f8efc;
  do {
    param_1 = pbVar13;
    pbVar13 = param_1 + 1;
  } while (*pbVar13 == 0x2a);
  bVar4 = *param_2;
  if (bVar4 == 0 && *pbVar13 == 0) {
    return false;
  }
  iVar6 = FUN_019f8df4(pbVar13,param_2);
  if ((bVar4 == 0) || (iVar6 == 0)) {
    bVar5 = iVar6 == 0;
LAB_019f94b4:
    return !bVar5;
  }
  goto LAB_019f8f0c;
switchD_019f8f58_default:
  bVar4 = *param_1;
  uVar14 = (ulong)bVar4;
  switch(uVar8) {
  case 0:
    iVar6 = isalnum((uint)bVar4);
    if (iVar6 == 0) {
      if (bVar4 < 0x3f) {
        if (bVar4 != 0x21) {
          if ((bVar4 != 0x2a) && (bVar4 == 0)) {
            return 2;
          }
switchD_019f90f8_default:
          bVar5 = true;
          uVar8 = 0;
          local_188[uVar14] = '\x01';
          param_1 = param_1 + 1;
          goto switchD_019f8f58_default;
        }
switchD_019f90f8_caseD_5e:
        if ((bVar5) || (local_88 != '\0')) {
          bVar5 = true;
          pcVar9 = local_188 + uVar14;
        }
        else {
          bVar5 = false;
          pcVar9 = &local_88;
        }
        uVar8 = 0;
        *pcVar9 = '\x01';
        param_1 = param_1 + 1;
        goto switchD_019f8f58_default;
      }
      switch(bVar4) {
      case 0x5b:
        if (param_1[1] == 0x3a) {
          bVar5 = false;
          local_70 = 0;
          local_78 = 0;
          uVar14 = 0;
          do {
            bVar4 = param_1[uVar14 + 2];
            if (bVar5) {
              if (bVar5) goto LAB_019f9270;
            }
            else {
              iVar6 = isalpha((uint)bVar4);
              if ((iVar6 == 0) || (iVar6 = islower((uint)bVar4), iVar6 == 0)) {
                if (bVar4 != 0x3a) {
                  return 2;
                }
                bVar5 = true;
              }
              else {
                bVar5 = false;
                *(byte *)((long)&local_78 + uVar14) = bVar4;
              }
            }
            bVar1 = 8 < uVar14;
            uVar14 = uVar14 + 1;
            if (bVar1) {
              return 2;
            }
          } while( true );
        }
        bVar5 = true;
        uVar8 = 0;
        local_12d = 1;
        param_1 = param_1 + 1;
        goto switchD_019f8f58_default;
      case 0x5c:
        uVar10 = (ulong)param_1[1];
        iVar6 = isprint((uint)param_1[1]);
        if (iVar6 == 0) {
          return 2;
        }
        uVar8 = 1;
        local_188[uVar10] = '\x01';
        bVar5 = true;
        param_1 = param_1 + 2;
        goto switchD_019f8f58_default;
      case 0x5d:
        if (bVar5) goto LAB_019f939c;
        bVar5 = true;
        local_12b = 1;
        uVar8 = 3;
        param_1 = param_1 + 1;
        goto switchD_019f8f58_default;
      case 0x5e:
        goto switchD_019f90f8_caseD_5e;
      default:
        goto switchD_019f90f8_default;
      }
    }
    uVar8 = 1;
    local_188[uVar14] = '\x01';
    bVar5 = true;
    param_1 = param_1 + 1;
    uVar10 = uVar14;
    goto switchD_019f8f58_default;
  case 1:
    uVar8 = 0;
    if (bVar4 == 0x5b) goto switchD_019f8f58_default;
    if (bVar4 == 0x2d) {
      local_188[0x2d] = 1;
      param_1 = param_1 + 1;
      lVar11 = 0x2d;
      uVar8 = 2;
      goto switchD_019f8f58_default;
    }
    iVar6 = isalnum((uint)bVar4);
    if (iVar6 != 0) {
      uVar8 = 1;
      local_188[uVar14] = '\x01';
      param_1 = param_1 + 1;
      goto switchD_019f8f58_default;
    }
    if (bVar4 == 0x5c) {
      bVar4 = param_1[1];
      iVar6 = isprint((uint)bVar4);
      if (iVar6 == 0) {
        return 2;
      }
      uVar8 = 1;
      local_188[bVar4] = '\x01';
      param_1 = param_1 + 2;
      goto switchD_019f8f58_default;
    }
    if (bVar4 != 0x5d) {
      return 2;
    }
LAB_019f939c:
    bVar4 = *param_2;
    if (local_188[bVar4] == '\0') {
      if (local_87 == '\0') {
        uVar7 = (uint)bVar4;
        if (local_84 == '\0') {
          if (local_86 == '\0') {
            if (local_85 == '\0') {
              if (local_83 == '\0') {
                if (local_7f == '\0') {
                  if (local_7e[0] == '\0') {
                    if (local_81 == '\0') {
                      if (local_82 == '\0') {
                        if (local_80 == '\0') {
                          uVar7 = 0;
                        }
                        else {
                          uVar7 = isgraph(uVar7);
                        }
                      }
                      else {
                        uVar7 = (uint)(uVar7 == 0x20 || uVar7 == 9);
                      }
                    }
                    else {
                      uVar7 = islower(uVar7);
                    }
                  }
                  else {
                    uVar7 = isupper(uVar7);
                  }
                }
                else {
                  uVar7 = isspace(uVar7);
                }
              }
              else {
                uVar7 = isprint(uVar7);
              }
            }
            else {
              uVar7 = isxdigit(uVar7);
            }
          }
          else {
            uVar7 = (uint)(uVar7 - 0x30 < 10);
          }
        }
        else {
          uVar7 = isalpha(uVar7);
        }
      }
      else {
        uVar7 = isalnum((uint)bVar4);
      }
    }
    else {
      uVar7 = 1;
    }
    if (local_88 != '\0') {
      uVar7 = (uint)(uVar7 == 0);
    }
    if (uVar7 == 0) {
      return true;
    }
    param_1 = param_1 + 1;
    memset(local_188,0,0x10f);
    goto LAB_019f8f0c;
  case 2:
    if (bVar4 == 0x5c) {
      param_1 = param_1 + 1;
      uVar14 = (ulong)*param_1;
      iVar6 = isprint((uint)*param_1);
      if (iVar6 == 0) {
        return 2;
      }
    }
    if ((int)uVar14 == 0x5c) {
      uVar14 = (ulong)param_1[1];
      iVar6 = isprint((uint)param_1[1]);
      if (iVar6 == 0) {
        return 2;
      }
      uVar8 = 0;
      param_1 = param_1 + 2;
      local_188[uVar14] = '\x01';
    }
    else {
      if ((int)uVar14 == 0x5d) goto LAB_019f939c;
      uVar8 = 2;
    }
    uVar7 = (uint)uVar10;
    uVar12 = (uint)uVar14;
    if ((uVar7 & 0xff) <= uVar12) {
      uVar3 = uVar7 & 0xff;
      iVar6 = islower(uVar12);
      if (((iVar6 == 0) || (iVar6 = islower(uVar3), iVar6 == 0)) &&
         ((9 < uVar3 - 0x30 || (9 < uVar12 - 0x30)))) {
        iVar6 = isupper(uVar12);
        if (iVar6 == 0) {
          return 2;
        }
        iVar6 = isupper(uVar3);
        if (iVar6 == 0) {
          return 2;
        }
      }
      local_188[lVar11] = '\0';
      uVar3 = uVar7 + 2;
      uVar7 = uVar7 + 1;
      while (uVar2 = uVar3, uVar10 = (ulong)uVar2, (uVar7 & 0xff) <= uVar12) {
        local_188[(uVar10 & 0xff) - 1] = '\x01';
        uVar3 = uVar2 + 1;
        uVar7 = uVar2;
      }
      uVar8 = 0;
      param_1 = param_1 + 1;
    }
    goto switchD_019f8f58_default;
  case 3:
    if (bVar4 == 0x5b) {
      local_12d = 1;
      param_1 = param_1 + 1;
      uVar8 = 4;
      goto switchD_019f8f58_default;
    }
    if (bVar4 == 0) {
      return 2;
    }
    if (bVar4 == 0x5d) goto LAB_019f939c;
    iVar6 = isprint((uint)bVar4);
    if (iVar6 == 0) {
      return 2;
    }
    break;
  case 4:
    if (bVar4 == 0x5d) goto LAB_019f939c;
    break;
  default:
    goto switchD_019f8f58_default;
  }
  uVar8 = 0;
  local_188[uVar14] = '\x01';
  param_1 = param_1 + 1;
  goto switchD_019f8f58_default;
LAB_019f9270:
  if (bVar4 != 0x5d) {
    return 2;
  }
  iVar6 = strcmp((char *)&local_78,"digit");
  pcVar9 = &local_86;
  if (((((((iVar6 != 0) &&
          (iVar6 = strcmp((char *)&local_78,"alnum"), pcVar9 = &local_87, iVar6 != 0)) &&
         (iVar6 = strcmp((char *)&local_78,"alpha"), pcVar9 = local_190, iVar6 != 0)) &&
        ((iVar6 = strcmp((char *)&local_78,"xdigit"), pcVar9 = &local_85, iVar6 != 0 &&
         (iVar6 = strcmp((char *)&local_78,"print"), pcVar9 = &local_83, iVar6 != 0)))) &&
       ((iVar6 = strcmp((char *)&local_78,"graph"), pcVar9 = &local_80, iVar6 != 0 &&
        ((iVar6 = strcmp((char *)&local_78,"space"), pcVar9 = &local_7f, iVar6 != 0 &&
         (iVar6 = strcmp((char *)&local_78,"blank"), pcVar9 = &local_82, iVar6 != 0)))))) &&
      (iVar6 = strcmp((char *)&local_78,"upper"), pcVar9 = local_7e, iVar6 != 0)) &&
     (iVar6 = strcmp((char *)&local_78,"lower"), pcVar9 = &local_81, iVar6 != 0)) {
    return 2;
  }
  bVar5 = true;
  uVar8 = 0;
  *pcVar9 = '\x01';
  param_1 = param_1 + uVar14 + 3;
  goto switchD_019f8f58_default;
LAB_019f8ef0:
  iVar6 = isprint((uint)bVar4);
  if (iVar6 == 0) {
    return 2;
  }
LAB_019f8efc:
  if (bVar4 != *param_2) {
    return true;
  }
LAB_019f8f08:
  param_1 = param_1 + 1;
LAB_019f8f0c:
  param_2 = param_2 + 1;
  goto LAB_019f8e88;
}

