// functions/0091b — 6 functions
#include "libGameKindred.h"




void * FUN_0091b028(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_0091092c(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x60);
    FUN_008fcdb8((long)pvVar4 + 0x20,param_3);
    FUN_00ec3d7c((long)pvVar4 + 0x38,param_3 + 0x18);
    puVar3 = (undefined8 *)FUN_00910a58(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




undefined8 * FUN_0091b0e0(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_0091b198(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_0091b198(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_0091b20c:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_0091b20c;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0091b248(void)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = &DAT_02c093d8;
  lVar3 = 0;
  do {
    (&DAT_02c093d8)[lVar3 * 0x1c] = 0xffffffff;
    (&DAT_02c093dc)[lVar3 * 0x70] = 0xff;
    (&DAT_02c093e0)[lVar3 * 0x1c] = 0xff;
    lVar2 = 0xc;
    do {
      *(undefined4 *)((long)puVar1 + lVar2) = 0xffff;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x34);
    lVar2 = lVar3 + 1;
    puVar1 = puVar1 + 0x1c;
    *(undefined4 *)(&DAT_02c09444 + lVar3 * 0x70) = 0;
    *(undefined8 *)(&DAT_02c0943c + lVar3 * 0x1c) = 0;
    *(undefined8 *)(&DAT_02c09434 + lVar3 * 0x1c) = 0;
    *(undefined8 *)(&DAT_02c0942c + lVar3 * 0x1c) = 0;
    *(undefined8 *)(&DAT_02c09424 + lVar3 * 0x1c) = 0;
    *(undefined8 *)(&DAT_02c0941c + lVar3 * 0x1c) = 0;
    *(undefined8 *)(&DAT_02c09414 + lVar3 * 0x1c) = 0;
    *(undefined8 *)(&DAT_02c0940c + lVar3 * 0x1c) = 0;
    lVar3 = lVar2;
  } while (lVar2 != 0x10);
  lVar3 = 0;
  do {
    (&DAT_02c09ad8)[lVar3] = 0xff;
    memset((void *)((long)&DAT_02c09adc + lVar3),0,0x44);
    lVar3 = lVar3 + 0x48;
  } while (lVar3 != 0x480);
  DAT_02c09f58 = 1;
  _DAT_02c09f5c = 0xffffffff00000000;
  DAT_02c09f64 = 0;
  memset(&DAT_02c09f68,0,0x5c);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void thunk_FUN_0091b34c(void)

{
  void *pvVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  size_t sVar17;
  char *****pppppcVar18;
  undefined4 *puVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  char *pcVar27;
  undefined1 *puVar28;
  byte bVar29;
  int *piVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  char *pcStack_238;
  char ***apppcStack_230 [2];
  void *pvStack_220;
  char ****appppcStack_218 [2];
  void *pvStack_208;
  char ****appppcStack_200 [2];
  void *pvStack_1f0;
  char *****pppppcStack_1e8;
  undefined8 uStack_1e0;
  void *pvStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  char **ppcStack_198;
  undefined1 auStack_190 [96];
  long alStack_130 [16];
  long lStack_b0;
  
  lVar2 = tpidr_el0;
  lStack_b0 = *(long *)(lVar2 + 0x28);
  piVar30 = &DAT_02c093d8;
  lVar11 = FUN_0091e360();
  uVar21 = 0;
  do {
    iVar37 = *piVar30;
    iVar9 = FUN_00cedce4();
    if (iVar37 == iVar9) goto LAB_0091b3c4;
    uVar21 = uVar21 + 1;
    piVar30 = piVar30 + 0x1c;
  } while (uVar21 < 0x10);
  piVar30 = (int *)0x0;
LAB_0091b3c4:
  lVar12 = FUN_0091e418();
  if (((lVar11 == 0) || (piVar30 == (int *)0x0)) || (lVar12 == 0)) goto LAB_0091df4c;
  puStack_1b8 = &uStack_1b0;
  puStack_1d0 = &uStack_1c8;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  puVar13 = (undefined8 *)FUN_00d5cdac(lVar11);
  if (puVar13 == (undefined8 *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_00cc7618(*puVar13);
  }
  FUN_00d4d9e8(auStack_190);
  FUN_00d4dabc(auStack_190,1);
  FUN_00d4d364(auStack_190,1);
  FUN_00d4dc24(auStack_190,0);
  uVar10 = FUN_00d9e840(auStack_190,alStack_130,0x10,0);
  fVar31 = (float)FUN_009bc24c();
  fVar31 = fVar31 / 60.0;
  FUN_00ceace8();
  uVar15 = FUN_00ceadc8();
  appppcStack_200[0] = (char ****)0x1e4b3b3;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  appppcStack_200[0] = (char ****)0x1b93dd0;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ef0(fVar31,lVar16 + 0x28);
  uVar3 = DAT_02c09f58;
  appppcStack_200[0] = (char ****)0x1ba45bb;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ee0(lVar16 + 0x28,uVar3);
  bVar6 = DAT_02c09f5c == 2;
  appppcStack_200[0] = (char ****)0x1b92ef9;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ee0(lVar16 + 0x28,bVar6);
  uVar21 = FUN_00e80f58();
  if ((uVar21 & 1) == 0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    lVar16 = FUN_00e829e0();
    if ((*(byte *)(lVar16 + 0xa8) & 1) == 0) {
      puVar28 = (undefined1 *)(lVar16 + 0xa9);
    }
    else {
      puVar28 = *(undefined1 **)(lVar16 + 0xb8);
    }
  }
  appppcStack_200[0] = (char ****)0x1b92a29;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  appppcStack_200[0] = (char ****)0x1b9456d;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  appppcStack_200[0] = (char ****)&DAT_01b9230f;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  if (lVar14 == 0) {
    uVar36 = 0xffffffff;
  }
  else {
    uVar36 = *(undefined4 *)(lVar14 + 0x20);
  }
  appppcStack_200[0] = (char ****)0x1b93dd8;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ee0(lVar16 + 0x28,uVar36);
  appppcStack_200[0] = (char ****)0x1b93de3;
  fVar35 = (float)DAT_02c09f60;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ef0(fVar35,lVar16 + 0x28);
  switch(piVar30[2]) {
  case 0:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "support";
    break;
  case 1:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "jungler";
    break;
  case 2:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "top";
    break;
  case 3:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "mid";
    break;
  case 4:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "bot";
    break;
  case 5:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "laner";
    break;
  default:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    FUN_00ec3e60(lVar16 + 0x28,"unset");
    goto LAB_0091b8b4;
  }
  FUN_00ec3e60(lVar16,pcVar27);
LAB_0091b8b4:
  FUN_00ceace8();
  uVar15 = FUN_00ceadc8();
  appppcStack_200[0] = (char ****)0x1e4b3b3;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  appppcStack_200[0] = (char ****)0x1b93dd0;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ef0(fVar31,lVar16 + 0x28);
  uVar3 = DAT_02c09f58;
  appppcStack_200[0] = (char ****)0x1ba45bb;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ee0(lVar16 + 0x28,uVar3);
  bVar6 = DAT_02c09f5c == 2;
  appppcStack_200[0] = (char ****)0x1b92ef9;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ee0(lVar16 + 0x28,bVar6);
  uVar21 = FUN_00e80f58();
  if ((uVar21 & 1) == 0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    lVar16 = FUN_00e829e0();
    if ((*(byte *)(lVar16 + 0xa8) & 1) == 0) {
      puVar28 = (undefined1 *)(lVar16 + 0xa9);
    }
    else {
      puVar28 = *(undefined1 **)(lVar16 + 0xb8);
    }
  }
  appppcStack_200[0] = (char ****)0x1b92a29;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  appppcStack_200[0] = (char ****)0x1b9456d;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  appppcStack_200[0] = (char ****)&DAT_01b9230f;
  pppppcStack_1e8 = appppcStack_200;
  lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  if (lVar14 == 0) {
    uVar36 = 0xffffffff;
  }
  else {
    uVar36 = *(undefined4 *)(lVar14 + 0x20);
  }
  appppcStack_200[0] = (char ****)0x1b93dd8;
  pppppcStack_1e8 = appppcStack_200;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  appppcStack_200[0] = (char ****)0x1b93de3;
  fVar35 = (float)DAT_02c09f60;
  pppppcStack_1e8 = appppcStack_200;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,appppcStack_218)
  ;
  FUN_00ec3ef0(fVar35,lVar14 + 0x28);
  switch(piVar30[2]) {
  case 0:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "support";
    break;
  case 1:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "jungler";
    break;
  case 2:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "top";
    break;
  case 3:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "mid";
    break;
  case 4:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "bot";
    break;
  case 5:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "laner";
    break;
  default:
    pppppcStack_1e8 = appppcStack_200;
    appppcStack_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_200,&DAT_01b944fb,&pppppcStack_1e8,
                          appppcStack_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "unset";
  }
  FUN_00ec3e60(lVar14,pcVar27);
  pppppcStack_1e8 = (char *****)0x0;
  uStack_1e0 = 0;
  pvStack_1d8 = (void *)0x0;
  lVar14 = 0xc;
  do {
    iVar37 = *(int *)((long)piVar30 + lVar14);
    if (iVar37 != 0xffff) {
      uVar15 = FUN_00d6eb50();
      puVar13 = (undefined8 *)FUN_00d6ebc0(uVar15,iVar37,PTR_DAT_02bea890);
      if (puVar13 != (undefined8 *)0x0) {
        uVar26 = (uint)((byte)pppppcStack_1e8 >> 1);
        if (((ulong)pppppcStack_1e8 & 1) != 0) {
          uVar26 = (uint)uStack_1e0;
        }
        if (uVar26 != 0) {
          FUN_0090de84(&pppppcStack_1e8,", ",2);
        }
        pcVar27 = (char *)*puVar13;
        sVar17 = strlen(pcVar27);
        FUN_0090de84(&pppppcStack_1e8,pcVar27,sVar17);
      }
    }
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x34);
  appppcStack_200[0] = (char ****)appppcStack_218;
  appppcStack_218[0] = (char ****)0x1b93df9;
  pvVar1 = (void *)((ulong)&pppppcStack_1e8 | 1);
  if (((ulong)pppppcStack_1e8 & 1) != 0) {
    pvVar1 = pvStack_1d8;
  }
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3e60(lVar14 + 0x28,pvVar1);
  if ((int)uVar10 < 1) {
    cVar8 = (char)piVar30[1];
    uVar25 = 0;
    uVar26 = 0;
    fVar39 = 0.0;
    fVar35 = 0.0;
    fVar33 = 0.0;
    fVar38 = 0.0;
  }
  else {
    uVar26 = 0;
    uVar25 = 0;
    uVar21 = (ulong)uVar10;
    fVar38 = 0.0;
    plVar23 = alStack_130;
    fVar33 = 0.0;
    fVar35 = 0.0;
    fVar39 = 0.0;
    do {
      cVar7 = FUN_00d55870(*plVar23);
      lVar14 = *(long *)(*plVar23 + 0x40);
      cVar8 = (char)piVar30[1];
      fVar32 = (*(float *)(lVar14 + 0x244) + 1.0) *
               (*(float *)(lVar14 + 0xdc) +
               *(float *)(lVar14 + 400) * (*(float *)(lVar14 + 0x2f8) + 1.0));
      if ((float)DAT_02c0a134 <= fVar32) {
        fVar32 = (float)DAT_02c0a134;
      }
      fVar40 = (float)DAT_02c0a074;
      if ((float)DAT_02c0a074 <= fVar32) {
        fVar40 = fVar32;
      }
      if (cVar7 == cVar8) {
        fVar38 = fVar38 + fVar40;
        uVar26 = uVar26 + 1;
        fVar35 = fVar35 + *(float *)(lVar14 + 0x324);
      }
      else {
        fVar33 = fVar33 + fVar40;
        uVar25 = uVar25 + 1;
        fVar39 = fVar39 + *(float *)(lVar14 + 0x324);
      }
      uVar21 = uVar21 - 1;
      plVar23 = plVar23 + 1;
    } while (uVar21 != 0);
  }
  lVar14 = 0;
  fVar40 = 0.0;
  fVar32 = 0.0;
  fVar42 = 0.0;
  do {
    if ((&DAT_02c093dc)[lVar14] == cVar8) {
      fVar40 = fVar40 + *(float *)((long)&DAT_02c09420 + lVar14);
      fVar32 = fVar32 + *(float *)((long)&DAT_02c0940c + lVar14);
      fVar42 = fVar42 + *(float *)((long)&DAT_02c0941c + lVar14);
    }
    lVar14 = lVar14 + 0x70;
  } while (lVar14 != 0x700);
  fVar43 = fVar33 + fVar38;
  appppcStack_218[0] = (char ****)0x1b93dff;
  fVar41 = fVar38 / fVar43;
  if (fVar43 <= 0.0) {
    fVar41 = 0.0;
  }
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar26);
  appppcStack_218[0] = (char ****)0x1b93e09;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar25);
  appppcStack_218[0] = (char ****)0x1b92f12;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar43,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e14;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar38,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e20;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar41,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e2e;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e3d;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar35,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e46;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar39,lVar14 + 0x28);
  fVar41 = 0.0;
  fVar40 = fVar40 / fVar35;
  if (fVar35 <= 0.0) {
    fVar40 = 0.0;
  }
  appppcStack_218[0] = (char ****)0x1b93e52;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar40,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x44);
  appppcStack_218[0] = (char ****)0x1b93e67;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x2c);
  appppcStack_218[0] = (char ****)0x1b93e7c;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x30);
  appppcStack_218[0] = (char ****)0x1b93e97;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 8);
  appppcStack_218[0] = (char ****)0x1b93eb2;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x18);
  appppcStack_218[0] = (char ****)0x1b93ec7;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 4);
  appppcStack_218[0] = (char ****)0x1b93edd;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x14);
  appppcStack_218[0] = (char ****)0x1b93ef5;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0xc);
  appppcStack_218[0] = (char ****)0x1b93f0e;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x1c);
  appppcStack_218[0] = (char ****)0x1b93f24;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x20);
  appppcStack_218[0] = (char ****)0x1b93f3b;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  appppcStack_218[0] = (char ****)0x1b92f12;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar43,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e14;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar38,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e2e;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e3d;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar35,lVar14 + 0x28);
  appppcStack_218[0] = (char ****)0x1b93e46;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar39,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x44);
  appppcStack_218[0] = (char ****)0x1b93e67;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar14 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  lVar14 = FUN_0091e49c();
  if (lVar14 == 0) {
    uVar36 = *(undefined4 *)(lVar12 + 0x24);
    appppcStack_218[0] = (char ****)0x1b9406c;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(uVar36,lVar16 + 0x28);
  }
  else {
    uVar36 = *(undefined4 *)(lVar14 + 0x44);
    appppcStack_218[0] = (char ****)0x1b93f57;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    uVar36 = *(undefined4 *)(lVar14 + 0x44);
    appppcStack_218[0] = (char ****)0x1b93f57;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    uVar36 = *(undefined4 *)(lVar14 + 0x2c);
    appppcStack_218[0] = (char ****)0x1b93f6f;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    uVar36 = *(undefined4 *)(lVar14 + 0x30);
    appppcStack_218[0] = (char ****)0x1b93f8d;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    fVar33 = *(float *)(lVar12 + 8);
    fVar38 = *(float *)(lVar14 + 8);
    appppcStack_218[0] = (char ****)0x1b93fab;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    fVar33 = *(float *)(lVar12 + 0x18);
    fVar38 = *(float *)(lVar14 + 0x18);
    appppcStack_218[0] = (char ****)0x1b93fc4;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    fVar33 = *(float *)(lVar12 + 4);
    fVar38 = *(float *)(lVar14 + 4);
    appppcStack_218[0] = (char ****)0x1b93fde;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    fVar33 = *(float *)(lVar12 + 0x14);
    fVar38 = *(float *)(lVar14 + 0x14);
    appppcStack_218[0] = (char ****)0x1b93ffa;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    iVar37 = *(int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar14 + 0xc);
    appppcStack_218[0] = (char ****)0x1b94017;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ee0(lVar16 + 0x28,iVar37 - iVar9);
    iVar37 = *(int *)(lVar12 + 0x1c);
    iVar9 = *(int *)(lVar14 + 0x1c);
    appppcStack_218[0] = (char ****)0x1b94031;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ee0(lVar16 + 0x28,iVar37 - iVar9);
    iVar37 = *(int *)(lVar12 + 0x20);
    iVar9 = *(int *)(lVar14 + 0x20);
    appppcStack_218[0] = (char ****)0x1b9404c;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ee0(lVar16 + 0x28,iVar37 - iVar9);
    fVar38 = *(float *)(lVar14 + 0x24);
    fVar40 = *(float *)(lVar12 + 0x24);
    fVar33 = fVar38;
    if (fVar40 <= fVar38) {
      fVar33 = fVar40;
    }
    fVar41 = fVar38;
    if (fVar38 <= 0.0) {
      fVar41 = fVar40;
    }
    bVar6 = false;
    bVar4 = true;
    bVar5 = false;
    if (0.0 < fVar40) {
      bVar6 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar38)) {
        bVar6 = fVar38 < 0.0;
        bVar4 = fVar38 == 0.0;
        bVar5 = false;
      }
    }
    appppcStack_218[0] = (char ****)0x1b9406c;
    if (bVar4 || bVar6 != bVar5) {
      fVar33 = fVar41;
    }
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar33,lVar16 + 0x28);
    fVar41 = *(float *)(lVar14 + 0x28);
  }
  fVar38 = *(float *)(lVar12 + 0x28);
  fVar40 = 0.0;
  fVar33 = fVar41;
  if (fVar38 <= fVar41) {
    fVar33 = fVar38;
  }
  fVar43 = fVar41;
  if (fVar41 <= 0.0) {
    fVar43 = fVar38;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar38) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar41)) {
      bVar6 = fVar41 < 0.0;
      bVar4 = fVar41 == 0.0;
      bVar5 = false;
    }
  }
  appppcStack_218[0] = (char ****)0x1b94086;
  if (bVar4 || bVar6 != bVar5) {
    fVar33 = fVar43;
  }
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar16 + 0x28);
  fVar33 = 0.0;
  if (lVar14 != 0) {
    fVar33 = *(float *)(lVar14 + 0x34);
  }
  fVar41 = *(float *)(lVar12 + 0x34);
  fVar38 = fVar33;
  if (fVar41 <= fVar33) {
    fVar38 = fVar41;
  }
  fVar43 = fVar33;
  if (fVar33 <= 0.0) {
    fVar43 = fVar41;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar41) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar33)) {
      bVar6 = fVar33 < 0.0;
      bVar4 = fVar33 == 0.0;
      bVar5 = false;
    }
  }
  appppcStack_218[0] = (char ****)0x1b940a0;
  if (bVar4 || bVar6 != bVar5) {
    fVar38 = fVar43;
  }
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar38,lVar16 + 0x28);
  if (lVar14 != 0) {
    fVar40 = *(float *)(lVar14 + 0x38);
  }
  fVar41 = *(float *)(lVar12 + 0x38);
  fVar43 = 0.0;
  fVar33 = fVar40;
  if (fVar41 <= fVar40) {
    fVar33 = fVar41;
  }
  fVar34 = fVar40;
  if (fVar40 <= 0.0) {
    fVar34 = fVar41;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar41) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar40)) {
      bVar6 = fVar40 < 0.0;
      bVar4 = fVar40 == 0.0;
      bVar5 = false;
    }
  }
  appppcStack_218[0] = (char ****)0x1b940b9;
  if (bVar4 || bVar6 != bVar5) {
    fVar33 = fVar34;
  }
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar16 + 0x28);
  fVar40 = 0.0;
  if (lVar14 != 0) {
    fVar40 = *(float *)(lVar14 + 0x3c);
  }
  fVar34 = *(float *)(lVar12 + 0x3c);
  fVar41 = fVar40;
  if (fVar34 <= fVar40) {
    fVar41 = fVar34;
  }
  fVar44 = fVar40;
  if (fVar40 <= 0.0) {
    fVar44 = fVar34;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar34) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar40)) {
      bVar6 = fVar40 < 0.0;
      bVar4 = fVar40 == 0.0;
      bVar5 = false;
    }
  }
  appppcStack_218[0] = (char ****)0x1b940d6;
  if (bVar4 || bVar6 != bVar5) {
    fVar41 = fVar44;
  }
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar16 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar41,lVar16 + 0x28);
  if (lVar14 != 0) {
    fVar43 = *(float *)(lVar14 + 0x40);
  }
  fVar34 = *(float *)(lVar12 + 0x40);
  fVar40 = fVar43;
  if (fVar34 <= fVar43) {
    fVar40 = fVar34;
  }
  fVar44 = fVar43;
  if (fVar43 <= 0.0) {
    fVar44 = fVar34;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar34) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar43)) {
      bVar6 = fVar43 < 0.0;
      bVar4 = fVar43 == 0.0;
      bVar5 = false;
    }
  }
  appppcStack_218[0] = (char ****)0x1b940ef;
  if (bVar4 || bVar6 != bVar5) {
    fVar40 = fVar44;
  }
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar12 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar40,lVar12 + 0x28);
  appppcStack_218[0] = (char ****)0x1b94103;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar12 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33 - fVar38,lVar12 + 0x28);
  appppcStack_218[0] = (char ****)0x1b94127;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar12 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar41 - fVar33,lVar12 + 0x28);
  appppcStack_218[0] = (char ****)0x1b9414b;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar12 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar40 - fVar41,lVar12 + 0x28);
  fVar33 = fVar31 - fVar40;
  if (fVar40 <= 0.0) {
    fVar33 = 0.0;
  }
  appppcStack_218[0] = (char ****)0x1b9416c;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar12 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar12 + 0x28);
  lVar11 = *(long *)(lVar11 + 0x40);
  uVar15 = NEON_fmov(0x3f800000,4);
  fVar38 = (float)((ulong)uVar15 >> 0x20);
  fVar40 = *(float *)(lVar11 + 0x324);
  fVar33 = ((float)*(undefined8 *)(lVar11 + 0x244) + (float)uVar15) *
           ((float)*(undefined8 *)(lVar11 + 0xdc) +
           (float)*(undefined8 *)(lVar11 + 400) *
           ((float)*(undefined8 *)(lVar11 + 0x2f8) + (float)uVar15));
  fVar38 = ((float)((ulong)*(undefined8 *)(lVar11 + 0x244) >> 0x20) + fVar38) *
           ((float)((ulong)*(undefined8 *)(lVar11 + 0xdc) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar11 + 400) >> 0x20) *
           ((float)((ulong)*(undefined8 *)(lVar11 + 0x2f8) >> 0x20) + fVar38));
  fVar44 = *(float *)(lVar11 + 0x334);
  uVar21 = CONCAT44(DAT_02c0a134._4_4_,(float)DAT_02c0a134) ^
           (CONCAT44(DAT_02c0a134._4_4_,(float)DAT_02c0a134) ^ CONCAT44(fVar38,fVar33)) &
           CONCAT44(-(uint)(fVar38 < DAT_02c0a134._4_4_),-(uint)(fVar33 < (float)DAT_02c0a134));
  uVar21 = uVar21 ^ (uVar21 ^ CONCAT44(DAT_02c0a074._4_4_,(float)DAT_02c0a074)) &
                    CONCAT44(-(uint)((float)(uVar21 >> 0x20) < DAT_02c0a074._4_4_),
                             -(uint)((float)uVar21 < (float)DAT_02c0a074));
  fVar33 = (float)uVar21;
  fVar38 = (float)(uVar21 >> 0x20);
  fVar43 = fVar33 + fVar38;
  fVar34 = fVar44 + fVar43;
  fVar41 = 0.0;
  if (0.0 < fVar34) {
    fVar41 = (fVar33 + fVar44) / fVar34;
  }
  appppcStack_218[0] = (char ****)0x1b91bfe;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(uVar21,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b9418d;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar38,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b91bfe;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(uVar21,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b9418d;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar38,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b94196;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1d0,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar44,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b94196;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar44,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b92f1d;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar41,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b92f26;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar34,lVar11 + 0x28);
  fVar33 = fVar33 / fVar43;
  if (fVar43 <= 0.0) {
    fVar33 = 0.0;
  }
  appppcStack_218[0] = (char ****)0x1b91bf6;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)0x1b941a0;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar43,lVar11 + 0x28);
  appppcStack_218[0] = (char ****)&DAT_01b941aa;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar40,lVar11 + 0x28);
  fVar38 = -1.0;
  fVar33 = fVar38;
  if ((uVar26 != 0) && (0.0 < fVar35)) {
    fVar33 = fVar40 / (fVar35 / (float)uVar26);
  }
  appppcStack_218[0] = (char ****)0x1b941af;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  if ((uVar25 != 0) && (0.0 < fVar39)) {
    fVar38 = fVar40 / (fVar39 / (float)uVar25);
  }
  appppcStack_218[0] = (char ****)0x1b941bf;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar38,lVar11 + 0x28);
  fVar35 = (float)piVar30[0x12];
  appppcStack_218[0] = (char ****)0x1b941d2;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar35 / fVar40,lVar11 + 0x28);
  iVar37 = piVar30[0xd];
  appppcStack_218[0] = (char ****)0x1b941e3;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  fVar33 = 0.0;
  fVar35 = 0.0;
  if (0.0 < fVar32) {
    fVar35 = (float)piVar30[0xd] / fVar32;
  }
  appppcStack_218[0] = (char ****)0x1b941f4;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar35,lVar11 + 0x28);
  iVar37 = piVar30[0xe];
  appppcStack_218[0] = (char ****)0x1b9420e;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  iVar37 = piVar30[0xf];
  appppcStack_218[0] = (char ****)0x1b94221;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  iVar37 = piVar30[0x10];
  appppcStack_218[0] = (char ****)0x1b94234;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  if (0.0 < (float)piVar30[0xd]) {
    fVar33 = (float)piVar30[0xe] / (float)piVar30[0xd];
  }
  appppcStack_218[0] = (char ****)0x1b94249;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  fVar35 = 0.0;
  fVar33 = 0.0;
  if (0.0 < (float)piVar30[0xd]) {
    fVar33 = (float)piVar30[0xf] / (float)piVar30[0xd];
  }
  appppcStack_218[0] = (char ****)0x1b9425f;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  if (0.0 < (float)piVar30[0xd]) {
    fVar35 = (float)piVar30[0x10] / (float)piVar30[0xd];
  }
  appppcStack_218[0] = (char ****)0x1b94275;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar35,lVar11 + 0x28);
  iVar37 = piVar30[0x11];
  appppcStack_218[0] = (char ****)0x1b9428d;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  fVar35 = 0.0;
  if (0.0 < fVar42) {
    fVar35 = (float)piVar30[0xd] / fVar42;
  }
  appppcStack_218[0] = (char ****)0x1b942a2;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(fVar35,lVar11 + 0x28);
  if (0.0 < fVar31) {
    appppcStack_218[0] = (char ****)0x1b942c0;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar40 / fVar31,lVar11 + 0x28);
    fVar35 = (float)piVar30[0xd];
    appppcStack_218[0] = (char ****)0x1b942cb;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar35 / fVar31,lVar11 + 0x28);
    fVar35 = (float)piVar30[0x11];
    appppcStack_218[0] = (char ****)0x1b942e2;
    appppcStack_200[0] = (char ****)appppcStack_218;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar35 / fVar31,lVar11 + 0x28);
  }
  iVar37 = piVar30[0x13];
  appppcStack_218[0] = (char ****)0x1b942fd;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x14];
  appppcStack_218[0] = (char ****)0x1b9430f;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x15];
  appppcStack_218[0] = (char ****)0x1b94323;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x16];
  appppcStack_218[0] = (char ****)0x1b94335;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x17];
  appppcStack_218[0] = (char ****)0x1b94349;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x18];
  appppcStack_218[0] = (char ****)0x1b9435a;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x19];
  appppcStack_218[0] = (char ****)0x1b94369;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  iVar37 = piVar30[0x1a];
  appppcStack_218[0] = (char ****)0x1b94376;
  appppcStack_200[0] = (char ****)appppcStack_218;
  lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  switch((char)piVar30[0x1b]) {
  case '\0':
    appppcStack_200[0] = (char ****)appppcStack_218;
    appppcStack_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    lVar11 = lVar11 + 0x28;
    pcVar27 = "unknown";
    break;
  case '\x01':
    appppcStack_200[0] = (char ****)appppcStack_218;
    appppcStack_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    lVar11 = lVar11 + 0x28;
    pcVar27 = "weapon";
    break;
  case '\x02':
    appppcStack_200[0] = (char ****)appppcStack_218;
    appppcStack_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    lVar11 = lVar11 + 0x28;
    pcVar27 = "crystal";
    break;
  case '\x03':
    appppcStack_200[0] = (char ****)appppcStack_218;
    appppcStack_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    lVar11 = lVar11 + 0x28;
    pcVar27 = "support";
    break;
  case '\x04':
    appppcStack_200[0] = (char ****)appppcStack_218;
    appppcStack_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    lVar11 = lVar11 + 0x28;
    pcVar27 = "hybrid";
    break;
  default:
    goto switchD_0091d450_default;
  }
  FUN_00ec3e60(lVar11,pcVar27);
switchD_0091d450_default:
  if (0.0 < DAT_02c09f68 + DAT_02c09f6c) {
    appppcStack_200[0] = (char ****)appppcStack_218;
    fVar31 = DAT_02c09f68 / (DAT_02c09f68 + DAT_02c09f6c);
    appppcStack_218[0] = (char ****)0x1b943a5;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar31,lVar11 + 0x28);
  }
  if (0.0 < DAT_02c09f70 + DAT_02c09f74) {
    appppcStack_200[0] = (char ****)appppcStack_218;
    fVar31 = DAT_02c09f70 / (DAT_02c09f70 + DAT_02c09f74);
    appppcStack_218[0] = (char ****)0x1b943c0;
    lVar11 = FUN_0090d33c(&puStack_1b8,appppcStack_218,&DAT_01b944fb,appppcStack_200,apppcStack_230)
    ;
    FUN_00ec3ef0(fVar31,lVar11 + 0x28);
  }
  FUN_008fcdb8(appppcStack_200,&DAT_0320ffa8);
  FUN_008fcdb8(appppcStack_218,&DAT_0320ffa8);
  if (0 < (int)uVar10) {
    uVar21 = (ulong)uVar10;
    plVar23 = alStack_130;
    do {
      cVar8 = FUN_00d55870(*plVar23);
      iVar37 = piVar30[1];
      pcVar27 = *(char **)(*(long *)(*plVar23 + 0x38) + 0x20);
      sVar17 = strlen(pcVar27);
      if (cVar8 == (char)iVar37) {
        FUN_0090de84(appppcStack_200,pcVar27,sVar17);
        pppppcVar18 = appppcStack_200;
      }
      else {
        FUN_0090de84(appppcStack_218,pcVar27,sVar17);
        pppppcVar18 = appppcStack_218;
      }
      FUN_0090de84(pppppcVar18,&DAT_01e4a398,1);
      uVar21 = uVar21 - 1;
      plVar23 = plVar23 + 1;
    } while (uVar21 != 0);
  }
  ppcStack_198 = (char **)0x1b943dd;
  pvVar1 = (void *)((ulong)appppcStack_200 | 1);
  if (((ulong)appppcStack_200[0] & 1) != 0) {
    pvVar1 = pvStack_1f0;
  }
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  ppcStack_198 = (char **)0x1b943ea;
  pvVar1 = (void *)((ulong)appppcStack_218 | 1);
  if (((ulong)appppcStack_218[0] & 1) != 0) {
    pvVar1 = pvStack_208;
  }
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  ppcStack_198 = (char **)0x1b943dd;
  pvVar1 = (void *)((ulong)appppcStack_200 | 1);
  if (((ulong)appppcStack_200[0] & 1) != 0) {
    pvVar1 = pvStack_1f0;
  }
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1d0,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  ppcStack_198 = (char **)0x1b943ea;
  pvVar1 = (void *)((ulong)appppcStack_218 | 1);
  if (((ulong)appppcStack_218[0] & 1) != 0) {
    pvVar1 = pvStack_208;
  }
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1d0,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  lVar11 = 0;
  iVar37 = 0;
  iVar9 = 0;
  bVar29 = 0;
  iVar20 = 0;
  iVar22 = 0;
  iVar24 = 0;
  do {
    uVar21 = FUN_00cec480(*(undefined4 *)((long)&DAT_02c093d8 + lVar11));
    if ((uVar21 & 1) != 0) {
      iVar37 = iVar37 + 1;
      if ((&DAT_02c093dc)[lVar11] == (char)piVar30[1]) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar24 = iVar24 + 1;
      }
    }
    lVar12 = FUN_00d9e390(*(undefined4 *)((long)&DAT_02c093d8 + lVar11));
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x40);
      fVar31 = (*(float *)(lVar12 + 0x244) + 1.0) *
               (*(float *)(lVar12 + 0xdc) +
               *(float *)(lVar12 + 400) * (*(float *)(lVar12 + 0x2f8) + 1.0));
      fVar35 = (*(float *)(lVar12 + 0x248) + 1.0) *
               (*(float *)(lVar12 + 0xe0) +
               *(float *)(lVar12 + 0x194) * (*(float *)(lVar12 + 0x2fc) + 1.0));
      if ((float)DAT_02c0a134 <= fVar31) {
        fVar31 = (float)DAT_02c0a134;
      }
      fVar33 = (float)DAT_02c0a074;
      if ((float)DAT_02c0a074 <= fVar31) {
        fVar33 = fVar31;
      }
      if (DAT_02c0a134._4_4_ <= fVar35) {
        fVar35 = DAT_02c0a134._4_4_;
      }
      fVar31 = DAT_02c0a074._4_4_;
      if (DAT_02c0a074._4_4_ <= fVar35) {
        fVar31 = fVar35;
      }
      if ((&DAT_02c093dc)[lVar11] == (char)piVar30[1]) {
        if (fVar33 != 0.0) {
          if (fVar31 < 4.0) goto LAB_0091d970;
          fVar31 = fVar31 / fVar33;
        }
        if (4.0 <= fVar31) {
          bVar6 = *(int *)((long)&DAT_02c093d8 + lVar11) == *piVar30;
          if (!bVar6) {
            iVar20 = iVar20 + 1;
          }
          bVar29 = bVar29 | bVar6;
        }
      }
      else if (fVar31 == 0.0) {
        if (8.0 <= fVar33) {
LAB_0091d96c:
          iVar22 = iVar22 + 1;
        }
      }
      else if ((8.0 <= fVar33) && (5.0 <= fVar33 / fVar31)) goto LAB_0091d96c;
    }
LAB_0091d970:
    lVar11 = lVar11 + 0x70;
  } while (lVar11 != 0x700);
  ppcStack_198 = (char **)&DAT_01b943fa;
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  ppcStack_198 = (char **)0x1b94402;
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar9);
  ppcStack_198 = (char **)0x1b94411;
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar24);
  ppcStack_198 = (char **)0x1b94421;
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar22);
  ppcStack_198 = (char **)0x1b94435;
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar20);
  ppcStack_198 = (char **)0x1b94445;
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3ee0(lVar11 + 0x28,bVar29);
  iVar37 = 0;
  do {
    puVar19 = (undefined4 *)FUN_009f1a68(iVar37);
    iVar9 = puVar19[6];
    if (iVar9 == 2) {
      uVar15 = FUN_009f1f64();
      uVar36 = FUN_009f1f88(uVar15,*puVar19);
      apppcStack_230[0] = (char ***)(puVar19 + 2);
      lVar11 = FUN_0091e558(&puStack_1b8,puVar19 + 2,&DAT_01b944fb,apppcStack_230,&ppcStack_198);
      FUN_00ec3ef0(uVar36,lVar11 + 0x28);
    }
    else {
      if (iVar9 == 1) {
        uVar15 = FUN_009f1f64();
        uVar10 = FUN_009f1f88(uVar15,*puVar19);
        apppcStack_230[0] = (char ***)(puVar19 + 2);
        lVar11 = FUN_0091e558(&puStack_1b8,puVar19 + 2,&DAT_01b944fb,apppcStack_230,&ppcStack_198);
      }
      else {
        if (iVar9 != 0) goto LAB_0091db98;
        uVar15 = FUN_009f1f64();
        uVar10 = FUN_009f1f88(uVar15,*puVar19);
        uVar10 = uVar10 & 1;
        apppcStack_230[0] = (char ***)(puVar19 + 2);
        lVar11 = FUN_0091e558(&puStack_1b8,puVar19 + 2,&DAT_01b944fb,apppcStack_230,&ppcStack_198);
      }
      FUN_00ec3ee0(lVar11 + 0x28,uVar10);
    }
LAB_0091db98:
    uVar3 = DAT_02c09f64;
    iVar37 = iVar37 + 1;
  } while (iVar37 != 0x22);
  ppcStack_198 = (char **)0x1b9444e;
  apppcStack_230[0] = &ppcStack_198;
  lVar11 = FUN_0090d33c(&puStack_1b8,&ppcStack_198,&DAT_01b944fb,apppcStack_230,&pcStack_238);
  FUN_00ec3ee0(lVar11 + 0x28,uVar3);
  FUN_00cedce4();
  FUN_00ced928();
  puVar13 = (undefined8 *)FUN_00cce8a4();
  FUN_008fa54c(apppcStack_230,*puVar13);
  pcStack_238 = "SocialPingPackEquipped";
  pvVar1 = (void *)((ulong)apppcStack_230 | 1);
  if (((ulong)apppcStack_230[0] & 1) != 0) {
    pvVar1 = pvStack_220;
  }
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,1);
  puVar13 = (undefined8 *)FUN_00ccecc4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  pcStack_238 = "HatEquipped";
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,2);
  puVar13 = (undefined8 *)FUN_00cceed4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  pcStack_238 = "PlayerTitleEquipped";
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,3);
  puVar13 = (undefined8 *)FUN_00ccf0e4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  pcStack_238 = "PlayerAvatarEquipped";
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,4);
  puVar13 = (undefined8 *)FUN_00ccf488();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  pcStack_238 = "AnnouncerVOPackEquipped";
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,6);
  puVar13 = (undefined8 *)FUN_00cceab4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  pcStack_238 = "CharmEmojiEquipped";
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,7);
  puVar13 = (undefined8 *)FUN_00ccf630();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  pcStack_238 = "CharmVOLineEquipped";
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,5);
  puVar13 = (undefined8 *)FUN_00ccf7d8();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  pcStack_238 = "CharmAnimationEquipped";
  ppcStack_198 = &pcStack_238;
  lVar11 = FUN_0090d33c(&puStack_1b8,&pcStack_238,&DAT_01b944fb,&ppcStack_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  FUN_009019b4(&puStack_1d0);
  if (((ulong)apppcStack_230[0] & 1) != 0) {
    operator_delete(pvStack_220);
  }
  if (((ulong)appppcStack_218[0] & 1) != 0) {
    operator_delete(pvStack_208);
  }
  if (((ulong)appppcStack_200[0] & 1) != 0) {
    operator_delete(pvStack_1f0);
  }
  if (((ulong)pppppcStack_1e8 & 1) != 0) {
    operator_delete(pvStack_1d8);
  }
  FUN_0090d2e0(&puStack_1d0,uStack_1c8);
  FUN_0090d2e0(&puStack_1b8,uStack_1b0);
LAB_0091df4c:
  if (*(long *)(lVar2 + 0x28) != lStack_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_0091b34c(void)

{
  void *pvVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  size_t sVar17;
  char *****pppppcVar18;
  undefined4 *puVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  char *pcVar27;
  undefined1 *puVar28;
  byte bVar29;
  int *piVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  char *local_238;
  char ***local_230 [2];
  void *local_220;
  char ****local_218 [2];
  void *local_208;
  char ****local_200 [2];
  void *local_1f0;
  char *****local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  char **local_198;
  undefined1 auStack_190 [96];
  long local_130 [16];
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  piVar30 = &DAT_02c093d8;
  lVar11 = FUN_0091e360();
  uVar21 = 0;
  do {
    iVar37 = *piVar30;
    iVar9 = FUN_00cedce4();
    if (iVar37 == iVar9) goto LAB_0091b3c4;
    uVar21 = uVar21 + 1;
    piVar30 = piVar30 + 0x1c;
  } while (uVar21 < 0x10);
  piVar30 = (int *)0x0;
LAB_0091b3c4:
  lVar12 = FUN_0091e418();
  if (((lVar11 == 0) || (piVar30 == (int *)0x0)) || (lVar12 == 0)) goto LAB_0091df4c;
  local_1b8 = &local_1b0;
  local_1d0 = &local_1c8;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  puVar13 = (undefined8 *)FUN_00d5cdac(lVar11);
  if (puVar13 == (undefined8 *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_00cc7618(*puVar13);
  }
  FUN_00d4d9e8(auStack_190);
  FUN_00d4dabc(auStack_190,1);
  FUN_00d4d364(auStack_190,1);
  FUN_00d4dc24(auStack_190,0);
  uVar10 = FUN_00d9e840(auStack_190,local_130,0x10,0);
  fVar31 = (float)FUN_009bc24c();
  fVar31 = fVar31 / 60.0;
  FUN_00ceace8();
  uVar15 = FUN_00ceadc8();
  local_200[0] = (char ****)0x1e4b3b3;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  local_200[0] = (char ****)0x1b93dd0;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ef0(fVar31,lVar16 + 0x28);
  uVar3 = DAT_02c09f58;
  local_200[0] = (char ****)0x1ba45bb;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ee0(lVar16 + 0x28,uVar3);
  bVar6 = DAT_02c09f5c == 2;
  local_200[0] = (char ****)0x1b92ef9;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ee0(lVar16 + 0x28,bVar6);
  uVar21 = FUN_00e80f58();
  if ((uVar21 & 1) == 0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    lVar16 = FUN_00e829e0();
    if ((*(byte *)(lVar16 + 0xa8) & 1) == 0) {
      puVar28 = (undefined1 *)(lVar16 + 0xa9);
    }
    else {
      puVar28 = *(undefined1 **)(lVar16 + 0xb8);
    }
  }
  local_200[0] = (char ****)0x1b92a29;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_200[0] = (char ****)0x1b9456d;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_200[0] = (char ****)&DAT_01b9230f;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  if (lVar14 == 0) {
    uVar36 = 0xffffffff;
  }
  else {
    uVar36 = *(undefined4 *)(lVar14 + 0x20);
  }
  local_200[0] = (char ****)0x1b93dd8;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ee0(lVar16 + 0x28,uVar36);
  local_200[0] = (char ****)0x1b93de3;
  fVar35 = (float)DAT_02c09f60;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ef0(fVar35,lVar16 + 0x28);
  switch(piVar30[2]) {
  case 0:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "support";
    break;
  case 1:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "jungler";
    break;
  case 2:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "top";
    break;
  case 3:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "mid";
    break;
  case 4:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "bot";
    break;
  case 5:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar16 = lVar16 + 0x28;
    pcVar27 = "laner";
    break;
  default:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar16 = FUN_0090d33c(&local_1b8,local_200,&DAT_01b944fb,&local_1e8,local_218);
    FUN_00ec3e60(lVar16 + 0x28,"unset");
    goto LAB_0091b8b4;
  }
  FUN_00ec3e60(lVar16,pcVar27);
LAB_0091b8b4:
  FUN_00ceace8();
  uVar15 = FUN_00ceadc8();
  local_200[0] = (char ****)0x1e4b3b3;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  local_200[0] = (char ****)0x1b93dd0;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ef0(fVar31,lVar16 + 0x28);
  uVar3 = DAT_02c09f58;
  local_200[0] = (char ****)0x1ba45bb;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ee0(lVar16 + 0x28,uVar3);
  bVar6 = DAT_02c09f5c == 2;
  local_200[0] = (char ****)0x1b92ef9;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ee0(lVar16 + 0x28,bVar6);
  uVar21 = FUN_00e80f58();
  if ((uVar21 & 1) == 0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    lVar16 = FUN_00e829e0();
    if ((*(byte *)(lVar16 + 0xa8) & 1) == 0) {
      puVar28 = (undefined1 *)(lVar16 + 0xa9);
    }
    else {
      puVar28 = *(undefined1 **)(lVar16 + 0xb8);
    }
  }
  local_200[0] = (char ****)0x1b92a29;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_200[0] = (char ****)0x1b9456d;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,uVar15);
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_200[0] = (char ****)&DAT_01b9230f;
  local_1e8 = local_200;
  lVar16 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3e60(lVar16 + 0x28,puVar28);
  if (lVar14 == 0) {
    uVar36 = 0xffffffff;
  }
  else {
    uVar36 = *(undefined4 *)(lVar14 + 0x20);
  }
  local_200[0] = (char ****)0x1b93dd8;
  local_1e8 = local_200;
  lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  local_200[0] = (char ****)0x1b93de3;
  fVar35 = (float)DAT_02c09f60;
  local_1e8 = local_200;
  lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
  FUN_00ec3ef0(fVar35,lVar14 + 0x28);
  switch(piVar30[2]) {
  case 0:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "support";
    break;
  case 1:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "jungler";
    break;
  case 2:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "top";
    break;
  case 3:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "mid";
    break;
  case 4:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "bot";
    break;
  case 5:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "laner";
    break;
  default:
    local_1e8 = local_200;
    local_200[0] = (char ****)0x1e3a917;
    lVar14 = FUN_0090d33c(&local_1d0,local_200,&DAT_01b944fb,&local_1e8,local_218);
    lVar14 = lVar14 + 0x28;
    pcVar27 = "unset";
  }
  FUN_00ec3e60(lVar14,pcVar27);
  local_1e8 = (char *****)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  lVar14 = 0xc;
  do {
    iVar37 = *(int *)((long)piVar30 + lVar14);
    if (iVar37 != 0xffff) {
      uVar15 = FUN_00d6eb50();
      puVar13 = (undefined8 *)FUN_00d6ebc0(uVar15,iVar37,PTR_DAT_02bea890);
      if (puVar13 != (undefined8 *)0x0) {
        uVar26 = (uint)((byte)local_1e8 >> 1);
        if (((ulong)local_1e8 & 1) != 0) {
          uVar26 = (uint)local_1e0;
        }
        if (uVar26 != 0) {
          FUN_0090de84(&local_1e8,", ",2);
        }
        pcVar27 = (char *)*puVar13;
        sVar17 = strlen(pcVar27);
        FUN_0090de84(&local_1e8,pcVar27,sVar17);
      }
    }
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x34);
  local_200[0] = (char ****)local_218;
  local_218[0] = (char ****)0x1b93df9;
  pvVar1 = (void *)((ulong)&local_1e8 | 1);
  if (((ulong)local_1e8 & 1) != 0) {
    pvVar1 = local_1d8;
  }
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3e60(lVar14 + 0x28,pvVar1);
  if ((int)uVar10 < 1) {
    cVar8 = (char)piVar30[1];
    uVar25 = 0;
    uVar26 = 0;
    fVar39 = 0.0;
    fVar35 = 0.0;
    fVar33 = 0.0;
    fVar38 = 0.0;
  }
  else {
    uVar26 = 0;
    uVar25 = 0;
    uVar21 = (ulong)uVar10;
    fVar38 = 0.0;
    plVar23 = local_130;
    fVar33 = 0.0;
    fVar35 = 0.0;
    fVar39 = 0.0;
    do {
      cVar7 = FUN_00d55870(*plVar23);
      lVar14 = *(long *)(*plVar23 + 0x40);
      cVar8 = (char)piVar30[1];
      fVar32 = (*(float *)(lVar14 + 0x244) + 1.0) *
               (*(float *)(lVar14 + 0xdc) +
               *(float *)(lVar14 + 400) * (*(float *)(lVar14 + 0x2f8) + 1.0));
      if ((float)DAT_02c0a134 <= fVar32) {
        fVar32 = (float)DAT_02c0a134;
      }
      fVar40 = (float)DAT_02c0a074;
      if ((float)DAT_02c0a074 <= fVar32) {
        fVar40 = fVar32;
      }
      if (cVar7 == cVar8) {
        fVar38 = fVar38 + fVar40;
        uVar26 = uVar26 + 1;
        fVar35 = fVar35 + *(float *)(lVar14 + 0x324);
      }
      else {
        fVar33 = fVar33 + fVar40;
        uVar25 = uVar25 + 1;
        fVar39 = fVar39 + *(float *)(lVar14 + 0x324);
      }
      uVar21 = uVar21 - 1;
      plVar23 = plVar23 + 1;
    } while (uVar21 != 0);
  }
  lVar14 = 0;
  fVar40 = 0.0;
  fVar32 = 0.0;
  fVar42 = 0.0;
  do {
    if ((&DAT_02c093dc)[lVar14] == cVar8) {
      fVar40 = fVar40 + *(float *)((long)&DAT_02c09420 + lVar14);
      fVar32 = fVar32 + *(float *)((long)&DAT_02c0940c + lVar14);
      fVar42 = fVar42 + *(float *)((long)&DAT_02c0941c + lVar14);
    }
    lVar14 = lVar14 + 0x70;
  } while (lVar14 != 0x700);
  fVar43 = fVar33 + fVar38;
  local_218[0] = (char ****)0x1b93dff;
  fVar41 = fVar38 / fVar43;
  if (fVar43 <= 0.0) {
    fVar41 = 0.0;
  }
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar26);
  local_218[0] = (char ****)0x1b93e09;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar25);
  local_218[0] = (char ****)0x1b92f12;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar43,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e14;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar38,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e20;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar41,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e2e;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e3d;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar35,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e46;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar39,lVar14 + 0x28);
  fVar41 = 0.0;
  fVar40 = fVar40 / fVar35;
  if (fVar35 <= 0.0) {
    fVar40 = 0.0;
  }
  local_218[0] = (char ****)0x1b93e52;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar40,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x44);
  local_218[0] = (char ****)0x1b93e67;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x2c);
  local_218[0] = (char ****)0x1b93e7c;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x30);
  local_218[0] = (char ****)0x1b93e97;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 8);
  local_218[0] = (char ****)0x1b93eb2;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x18);
  local_218[0] = (char ****)0x1b93ec7;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 4);
  local_218[0] = (char ****)0x1b93edd;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x14);
  local_218[0] = (char ****)0x1b93ef5;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(uVar36,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0xc);
  local_218[0] = (char ****)0x1b93f0e;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x1c);
  local_218[0] = (char ****)0x1b93f24;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  uVar36 = *(undefined4 *)(lVar12 + 0x20);
  local_218[0] = (char ****)0x1b93f3b;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  local_218[0] = (char ****)0x1b92f12;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar43,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e14;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar38,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e2e;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e3d;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar35,lVar14 + 0x28);
  local_218[0] = (char ****)0x1b93e46;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar39,lVar14 + 0x28);
  uVar36 = *(undefined4 *)(lVar12 + 0x44);
  local_218[0] = (char ****)0x1b93e67;
  local_200[0] = (char ****)local_218;
  lVar14 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar14 + 0x28,uVar36);
  lVar14 = FUN_0091e49c();
  if (lVar14 == 0) {
    uVar36 = *(undefined4 *)(lVar12 + 0x24);
    local_218[0] = (char ****)0x1b9406c;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(uVar36,lVar16 + 0x28);
  }
  else {
    uVar36 = *(undefined4 *)(lVar14 + 0x44);
    local_218[0] = (char ****)0x1b93f57;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    uVar36 = *(undefined4 *)(lVar14 + 0x44);
    local_218[0] = (char ****)0x1b93f57;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    uVar36 = *(undefined4 *)(lVar14 + 0x2c);
    local_218[0] = (char ****)0x1b93f6f;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    uVar36 = *(undefined4 *)(lVar14 + 0x30);
    local_218[0] = (char ****)0x1b93f8d;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ee0(lVar16 + 0x28,uVar36);
    fVar33 = *(float *)(lVar12 + 8);
    fVar38 = *(float *)(lVar14 + 8);
    local_218[0] = (char ****)0x1b93fab;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    fVar33 = *(float *)(lVar12 + 0x18);
    fVar38 = *(float *)(lVar14 + 0x18);
    local_218[0] = (char ****)0x1b93fc4;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    fVar33 = *(float *)(lVar12 + 4);
    fVar38 = *(float *)(lVar14 + 4);
    local_218[0] = (char ****)0x1b93fde;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    fVar33 = *(float *)(lVar12 + 0x14);
    fVar38 = *(float *)(lVar14 + 0x14);
    local_218[0] = (char ****)0x1b93ffa;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar33 - fVar38,lVar16 + 0x28);
    iVar37 = *(int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar14 + 0xc);
    local_218[0] = (char ****)0x1b94017;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ee0(lVar16 + 0x28,iVar37 - iVar9);
    iVar37 = *(int *)(lVar12 + 0x1c);
    iVar9 = *(int *)(lVar14 + 0x1c);
    local_218[0] = (char ****)0x1b94031;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ee0(lVar16 + 0x28,iVar37 - iVar9);
    iVar37 = *(int *)(lVar12 + 0x20);
    iVar9 = *(int *)(lVar14 + 0x20);
    local_218[0] = (char ****)0x1b9404c;
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ee0(lVar16 + 0x28,iVar37 - iVar9);
    fVar38 = *(float *)(lVar14 + 0x24);
    fVar40 = *(float *)(lVar12 + 0x24);
    fVar33 = fVar38;
    if (fVar40 <= fVar38) {
      fVar33 = fVar40;
    }
    fVar41 = fVar38;
    if (fVar38 <= 0.0) {
      fVar41 = fVar40;
    }
    bVar6 = false;
    bVar4 = true;
    bVar5 = false;
    if (0.0 < fVar40) {
      bVar6 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar38)) {
        bVar6 = fVar38 < 0.0;
        bVar4 = fVar38 == 0.0;
        bVar5 = false;
      }
    }
    local_218[0] = (char ****)0x1b9406c;
    if (bVar4 || bVar6 != bVar5) {
      fVar33 = fVar41;
    }
    local_200[0] = (char ****)local_218;
    lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar33,lVar16 + 0x28);
    fVar41 = *(float *)(lVar14 + 0x28);
  }
  fVar38 = *(float *)(lVar12 + 0x28);
  fVar40 = 0.0;
  fVar33 = fVar41;
  if (fVar38 <= fVar41) {
    fVar33 = fVar38;
  }
  fVar43 = fVar41;
  if (fVar41 <= 0.0) {
    fVar43 = fVar38;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar38) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar41)) {
      bVar6 = fVar41 < 0.0;
      bVar4 = fVar41 == 0.0;
      bVar5 = false;
    }
  }
  local_218[0] = (char ****)0x1b94086;
  if (bVar4 || bVar6 != bVar5) {
    fVar33 = fVar43;
  }
  local_200[0] = (char ****)local_218;
  lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar16 + 0x28);
  fVar33 = 0.0;
  if (lVar14 != 0) {
    fVar33 = *(float *)(lVar14 + 0x34);
  }
  fVar41 = *(float *)(lVar12 + 0x34);
  fVar38 = fVar33;
  if (fVar41 <= fVar33) {
    fVar38 = fVar41;
  }
  fVar43 = fVar33;
  if (fVar33 <= 0.0) {
    fVar43 = fVar41;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar41) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar33)) {
      bVar6 = fVar33 < 0.0;
      bVar4 = fVar33 == 0.0;
      bVar5 = false;
    }
  }
  local_218[0] = (char ****)0x1b940a0;
  if (bVar4 || bVar6 != bVar5) {
    fVar38 = fVar43;
  }
  local_200[0] = (char ****)local_218;
  lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar38,lVar16 + 0x28);
  if (lVar14 != 0) {
    fVar40 = *(float *)(lVar14 + 0x38);
  }
  fVar41 = *(float *)(lVar12 + 0x38);
  fVar43 = 0.0;
  fVar33 = fVar40;
  if (fVar41 <= fVar40) {
    fVar33 = fVar41;
  }
  fVar34 = fVar40;
  if (fVar40 <= 0.0) {
    fVar34 = fVar41;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar41) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar40)) {
      bVar6 = fVar40 < 0.0;
      bVar4 = fVar40 == 0.0;
      bVar5 = false;
    }
  }
  local_218[0] = (char ****)0x1b940b9;
  if (bVar4 || bVar6 != bVar5) {
    fVar33 = fVar34;
  }
  local_200[0] = (char ****)local_218;
  lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar16 + 0x28);
  fVar40 = 0.0;
  if (lVar14 != 0) {
    fVar40 = *(float *)(lVar14 + 0x3c);
  }
  fVar34 = *(float *)(lVar12 + 0x3c);
  fVar41 = fVar40;
  if (fVar34 <= fVar40) {
    fVar41 = fVar34;
  }
  fVar44 = fVar40;
  if (fVar40 <= 0.0) {
    fVar44 = fVar34;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar34) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar40)) {
      bVar6 = fVar40 < 0.0;
      bVar4 = fVar40 == 0.0;
      bVar5 = false;
    }
  }
  local_218[0] = (char ****)0x1b940d6;
  if (bVar4 || bVar6 != bVar5) {
    fVar41 = fVar44;
  }
  local_200[0] = (char ****)local_218;
  lVar16 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar41,lVar16 + 0x28);
  if (lVar14 != 0) {
    fVar43 = *(float *)(lVar14 + 0x40);
  }
  fVar34 = *(float *)(lVar12 + 0x40);
  fVar40 = fVar43;
  if (fVar34 <= fVar43) {
    fVar40 = fVar34;
  }
  fVar44 = fVar43;
  if (fVar43 <= 0.0) {
    fVar44 = fVar34;
  }
  bVar6 = false;
  bVar4 = true;
  bVar5 = false;
  if (0.0 < fVar34) {
    bVar6 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar43)) {
      bVar6 = fVar43 < 0.0;
      bVar4 = fVar43 == 0.0;
      bVar5 = false;
    }
  }
  local_218[0] = (char ****)0x1b940ef;
  if (bVar4 || bVar6 != bVar5) {
    fVar40 = fVar44;
  }
  local_200[0] = (char ****)local_218;
  lVar12 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar40,lVar12 + 0x28);
  local_218[0] = (char ****)0x1b94103;
  local_200[0] = (char ****)local_218;
  lVar12 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33 - fVar38,lVar12 + 0x28);
  local_218[0] = (char ****)0x1b94127;
  local_200[0] = (char ****)local_218;
  lVar12 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar41 - fVar33,lVar12 + 0x28);
  local_218[0] = (char ****)0x1b9414b;
  local_200[0] = (char ****)local_218;
  lVar12 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar40 - fVar41,lVar12 + 0x28);
  fVar33 = fVar31 - fVar40;
  if (fVar40 <= 0.0) {
    fVar33 = 0.0;
  }
  local_218[0] = (char ****)0x1b9416c;
  local_200[0] = (char ****)local_218;
  lVar12 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar12 + 0x28);
  lVar11 = *(long *)(lVar11 + 0x40);
  uVar15 = NEON_fmov(0x3f800000,4);
  fVar38 = (float)((ulong)uVar15 >> 0x20);
  fVar40 = *(float *)(lVar11 + 0x324);
  fVar33 = ((float)*(undefined8 *)(lVar11 + 0x244) + (float)uVar15) *
           ((float)*(undefined8 *)(lVar11 + 0xdc) +
           (float)*(undefined8 *)(lVar11 + 400) *
           ((float)*(undefined8 *)(lVar11 + 0x2f8) + (float)uVar15));
  fVar38 = ((float)((ulong)*(undefined8 *)(lVar11 + 0x244) >> 0x20) + fVar38) *
           ((float)((ulong)*(undefined8 *)(lVar11 + 0xdc) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar11 + 400) >> 0x20) *
           ((float)((ulong)*(undefined8 *)(lVar11 + 0x2f8) >> 0x20) + fVar38));
  fVar44 = *(float *)(lVar11 + 0x334);
  uVar21 = CONCAT44(DAT_02c0a134._4_4_,(float)DAT_02c0a134) ^
           (CONCAT44(DAT_02c0a134._4_4_,(float)DAT_02c0a134) ^ CONCAT44(fVar38,fVar33)) &
           CONCAT44(-(uint)(fVar38 < DAT_02c0a134._4_4_),-(uint)(fVar33 < (float)DAT_02c0a134));
  uVar21 = uVar21 ^ (uVar21 ^ CONCAT44(DAT_02c0a074._4_4_,(float)DAT_02c0a074)) &
                    CONCAT44(-(uint)((float)(uVar21 >> 0x20) < DAT_02c0a074._4_4_),
                             -(uint)((float)uVar21 < (float)DAT_02c0a074));
  fVar33 = (float)uVar21;
  fVar38 = (float)(uVar21 >> 0x20);
  fVar43 = fVar33 + fVar38;
  fVar34 = fVar44 + fVar43;
  fVar41 = 0.0;
  if (0.0 < fVar34) {
    fVar41 = (fVar33 + fVar44) / fVar34;
  }
  local_218[0] = (char ****)0x1b91bfe;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(uVar21,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b9418d;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar38,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b91bfe;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(uVar21,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b9418d;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar38,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b94196;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1d0,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar44,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b94196;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar44,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b92f1d;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar41,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b92f26;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar34,lVar11 + 0x28);
  fVar33 = fVar33 / fVar43;
  if (fVar43 <= 0.0) {
    fVar33 = 0.0;
  }
  local_218[0] = (char ****)0x1b91bf6;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  local_218[0] = (char ****)0x1b941a0;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar43,lVar11 + 0x28);
  local_218[0] = (char ****)&DAT_01b941aa;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar40,lVar11 + 0x28);
  fVar38 = -1.0;
  fVar33 = fVar38;
  if ((uVar26 != 0) && (0.0 < fVar35)) {
    fVar33 = fVar40 / (fVar35 / (float)uVar26);
  }
  local_218[0] = (char ****)0x1b941af;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  if ((uVar25 != 0) && (0.0 < fVar39)) {
    fVar38 = fVar40 / (fVar39 / (float)uVar25);
  }
  local_218[0] = (char ****)0x1b941bf;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar38,lVar11 + 0x28);
  fVar35 = (float)piVar30[0x12];
  local_218[0] = (char ****)0x1b941d2;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar35 / fVar40,lVar11 + 0x28);
  iVar37 = piVar30[0xd];
  local_218[0] = (char ****)0x1b941e3;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  fVar33 = 0.0;
  fVar35 = 0.0;
  if (0.0 < fVar32) {
    fVar35 = (float)piVar30[0xd] / fVar32;
  }
  local_218[0] = (char ****)0x1b941f4;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar35,lVar11 + 0x28);
  iVar37 = piVar30[0xe];
  local_218[0] = (char ****)0x1b9420e;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  iVar37 = piVar30[0xf];
  local_218[0] = (char ****)0x1b94221;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  iVar37 = piVar30[0x10];
  local_218[0] = (char ****)0x1b94234;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  if (0.0 < (float)piVar30[0xd]) {
    fVar33 = (float)piVar30[0xe] / (float)piVar30[0xd];
  }
  local_218[0] = (char ****)0x1b94249;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  fVar35 = 0.0;
  fVar33 = 0.0;
  if (0.0 < (float)piVar30[0xd]) {
    fVar33 = (float)piVar30[0xf] / (float)piVar30[0xd];
  }
  local_218[0] = (char ****)0x1b9425f;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar33,lVar11 + 0x28);
  if (0.0 < (float)piVar30[0xd]) {
    fVar35 = (float)piVar30[0x10] / (float)piVar30[0xd];
  }
  local_218[0] = (char ****)0x1b94275;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar35,lVar11 + 0x28);
  iVar37 = piVar30[0x11];
  local_218[0] = (char ****)0x1b9428d;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  fVar35 = 0.0;
  if (0.0 < fVar42) {
    fVar35 = (float)piVar30[0xd] / fVar42;
  }
  local_218[0] = (char ****)0x1b942a2;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(fVar35,lVar11 + 0x28);
  if (0.0 < fVar31) {
    local_218[0] = (char ****)0x1b942c0;
    local_200[0] = (char ****)local_218;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar40 / fVar31,lVar11 + 0x28);
    fVar35 = (float)piVar30[0xd];
    local_218[0] = (char ****)0x1b942cb;
    local_200[0] = (char ****)local_218;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar35 / fVar31,lVar11 + 0x28);
    fVar35 = (float)piVar30[0x11];
    local_218[0] = (char ****)0x1b942e2;
    local_200[0] = (char ****)local_218;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar35 / fVar31,lVar11 + 0x28);
  }
  iVar37 = piVar30[0x13];
  local_218[0] = (char ****)0x1b942fd;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x14];
  local_218[0] = (char ****)0x1b9430f;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x15];
  local_218[0] = (char ****)0x1b94323;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x16];
  local_218[0] = (char ****)0x1b94335;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x17];
  local_218[0] = (char ****)0x1b94349;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x18];
  local_218[0] = (char ****)0x1b9435a;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  iVar37 = piVar30[0x19];
  local_218[0] = (char ****)0x1b94369;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  iVar37 = piVar30[0x1a];
  local_218[0] = (char ****)0x1b94376;
  local_200[0] = (char ****)local_218;
  lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
  FUN_00ec3ef0(iVar37,lVar11 + 0x28);
  switch((char)piVar30[0x1b]) {
  case '\0':
    local_200[0] = (char ****)local_218;
    local_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    lVar11 = lVar11 + 0x28;
    pcVar27 = "unknown";
    break;
  case '\x01':
    local_200[0] = (char ****)local_218;
    local_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    lVar11 = lVar11 + 0x28;
    pcVar27 = "weapon";
    break;
  case '\x02':
    local_200[0] = (char ****)local_218;
    local_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    lVar11 = lVar11 + 0x28;
    pcVar27 = "crystal";
    break;
  case '\x03':
    local_200[0] = (char ****)local_218;
    local_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    lVar11 = lVar11 + 0x28;
    pcVar27 = "support";
    break;
  case '\x04':
    local_200[0] = (char ****)local_218;
    local_218[0] = (char ****)0x1b94392;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    lVar11 = lVar11 + 0x28;
    pcVar27 = "hybrid";
    break;
  default:
    goto switchD_0091d450_default;
  }
  FUN_00ec3e60(lVar11,pcVar27);
switchD_0091d450_default:
  if (0.0 < DAT_02c09f68 + DAT_02c09f6c) {
    local_200[0] = (char ****)local_218;
    fVar31 = DAT_02c09f68 / (DAT_02c09f68 + DAT_02c09f6c);
    local_218[0] = (char ****)0x1b943a5;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar31,lVar11 + 0x28);
  }
  if (0.0 < DAT_02c09f70 + DAT_02c09f74) {
    local_200[0] = (char ****)local_218;
    fVar31 = DAT_02c09f70 / (DAT_02c09f70 + DAT_02c09f74);
    local_218[0] = (char ****)0x1b943c0;
    lVar11 = FUN_0090d33c(&local_1b8,local_218,&DAT_01b944fb,local_200,local_230);
    FUN_00ec3ef0(fVar31,lVar11 + 0x28);
  }
  FUN_008fcdb8(local_200,&DAT_0320ffa8);
  FUN_008fcdb8(local_218,&DAT_0320ffa8);
  if (0 < (int)uVar10) {
    uVar21 = (ulong)uVar10;
    plVar23 = local_130;
    do {
      cVar8 = FUN_00d55870(*plVar23);
      iVar37 = piVar30[1];
      pcVar27 = *(char **)(*(long *)(*plVar23 + 0x38) + 0x20);
      sVar17 = strlen(pcVar27);
      if (cVar8 == (char)iVar37) {
        FUN_0090de84(local_200,pcVar27,sVar17);
        pppppcVar18 = local_200;
      }
      else {
        FUN_0090de84(local_218,pcVar27,sVar17);
        pppppcVar18 = local_218;
      }
      FUN_0090de84(pppppcVar18,&DAT_01e4a398,1);
      uVar21 = uVar21 - 1;
      plVar23 = plVar23 + 1;
    } while (uVar21 != 0);
  }
  local_198 = (char **)0x1b943dd;
  pvVar1 = (void *)((ulong)local_200 | 1);
  if (((ulong)local_200[0] & 1) != 0) {
    pvVar1 = local_1f0;
  }
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  local_198 = (char **)0x1b943ea;
  pvVar1 = (void *)((ulong)local_218 | 1);
  if (((ulong)local_218[0] & 1) != 0) {
    pvVar1 = local_208;
  }
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  local_198 = (char **)0x1b943dd;
  pvVar1 = (void *)((ulong)local_200 | 1);
  if (((ulong)local_200[0] & 1) != 0) {
    pvVar1 = local_1f0;
  }
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1d0,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  local_198 = (char **)0x1b943ea;
  pvVar1 = (void *)((ulong)local_218 | 1);
  if (((ulong)local_218[0] & 1) != 0) {
    pvVar1 = local_208;
  }
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1d0,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  lVar11 = 0;
  iVar37 = 0;
  iVar9 = 0;
  bVar29 = 0;
  iVar20 = 0;
  iVar22 = 0;
  iVar24 = 0;
  do {
    uVar21 = FUN_00cec480(*(undefined4 *)((long)&DAT_02c093d8 + lVar11));
    if ((uVar21 & 1) != 0) {
      iVar37 = iVar37 + 1;
      if ((&DAT_02c093dc)[lVar11] == (char)piVar30[1]) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar24 = iVar24 + 1;
      }
    }
    lVar12 = FUN_00d9e390(*(undefined4 *)((long)&DAT_02c093d8 + lVar11));
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x40);
      fVar31 = (*(float *)(lVar12 + 0x244) + 1.0) *
               (*(float *)(lVar12 + 0xdc) +
               *(float *)(lVar12 + 400) * (*(float *)(lVar12 + 0x2f8) + 1.0));
      fVar35 = (*(float *)(lVar12 + 0x248) + 1.0) *
               (*(float *)(lVar12 + 0xe0) +
               *(float *)(lVar12 + 0x194) * (*(float *)(lVar12 + 0x2fc) + 1.0));
      if ((float)DAT_02c0a134 <= fVar31) {
        fVar31 = (float)DAT_02c0a134;
      }
      fVar33 = (float)DAT_02c0a074;
      if ((float)DAT_02c0a074 <= fVar31) {
        fVar33 = fVar31;
      }
      if (DAT_02c0a134._4_4_ <= fVar35) {
        fVar35 = DAT_02c0a134._4_4_;
      }
      fVar31 = DAT_02c0a074._4_4_;
      if (DAT_02c0a074._4_4_ <= fVar35) {
        fVar31 = fVar35;
      }
      if ((&DAT_02c093dc)[lVar11] == (char)piVar30[1]) {
        if (fVar33 != 0.0) {
          if (fVar31 < 4.0) goto LAB_0091d970;
          fVar31 = fVar31 / fVar33;
        }
        if (4.0 <= fVar31) {
          bVar6 = *(int *)((long)&DAT_02c093d8 + lVar11) == *piVar30;
          if (!bVar6) {
            iVar20 = iVar20 + 1;
          }
          bVar29 = bVar29 | bVar6;
        }
      }
      else if (fVar31 == 0.0) {
        if (8.0 <= fVar33) {
LAB_0091d96c:
          iVar22 = iVar22 + 1;
        }
      }
      else if ((8.0 <= fVar33) && (5.0 <= fVar33 / fVar31)) goto LAB_0091d96c;
    }
LAB_0091d970:
    lVar11 = lVar11 + 0x70;
  } while (lVar11 != 0x700);
  local_198 = (char **)&DAT_01b943fa;
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar37);
  local_198 = (char **)0x1b94402;
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar9);
  local_198 = (char **)0x1b94411;
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar24);
  local_198 = (char **)0x1b94421;
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar22);
  local_198 = (char **)0x1b94435;
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3ee0(lVar11 + 0x28,iVar20);
  local_198 = (char **)0x1b94445;
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3ee0(lVar11 + 0x28,bVar29);
  iVar37 = 0;
  do {
    puVar19 = (undefined4 *)FUN_009f1a68(iVar37);
    iVar9 = puVar19[6];
    if (iVar9 == 2) {
      uVar15 = FUN_009f1f64();
      uVar36 = FUN_009f1f88(uVar15,*puVar19);
      local_230[0] = (char ***)(puVar19 + 2);
      lVar11 = FUN_0091e558(&local_1b8,puVar19 + 2,&DAT_01b944fb,local_230,&local_198);
      FUN_00ec3ef0(uVar36,lVar11 + 0x28);
    }
    else {
      if (iVar9 == 1) {
        uVar15 = FUN_009f1f64();
        uVar10 = FUN_009f1f88(uVar15,*puVar19);
        local_230[0] = (char ***)(puVar19 + 2);
        lVar11 = FUN_0091e558(&local_1b8,puVar19 + 2,&DAT_01b944fb,local_230,&local_198);
      }
      else {
        if (iVar9 != 0) goto LAB_0091db98;
        uVar15 = FUN_009f1f64();
        uVar10 = FUN_009f1f88(uVar15,*puVar19);
        uVar10 = uVar10 & 1;
        local_230[0] = (char ***)(puVar19 + 2);
        lVar11 = FUN_0091e558(&local_1b8,puVar19 + 2,&DAT_01b944fb,local_230,&local_198);
      }
      FUN_00ec3ee0(lVar11 + 0x28,uVar10);
    }
LAB_0091db98:
    uVar3 = DAT_02c09f64;
    iVar37 = iVar37 + 1;
  } while (iVar37 != 0x22);
  local_198 = (char **)0x1b9444e;
  local_230[0] = &local_198;
  lVar11 = FUN_0090d33c(&local_1b8,&local_198,&DAT_01b944fb,local_230,&local_238);
  FUN_00ec3ee0(lVar11 + 0x28,uVar3);
  FUN_00cedce4();
  FUN_00ced928();
  puVar13 = (undefined8 *)FUN_00cce8a4();
  FUN_008fa54c(local_230,*puVar13);
  local_238 = "SocialPingPackEquipped";
  pvVar1 = (void *)((ulong)local_230 | 1);
  if (((ulong)local_230[0] & 1) != 0) {
    pvVar1 = local_220;
  }
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,pvVar1);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,1);
  puVar13 = (undefined8 *)FUN_00ccecc4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_238 = "HatEquipped";
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,2);
  puVar13 = (undefined8 *)FUN_00cceed4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_238 = "PlayerTitleEquipped";
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,3);
  puVar13 = (undefined8 *)FUN_00ccf0e4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_238 = "PlayerAvatarEquipped";
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,4);
  puVar13 = (undefined8 *)FUN_00ccf488();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_238 = "AnnouncerVOPackEquipped";
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,6);
  puVar13 = (undefined8 *)FUN_00cceab4();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_238 = "CharmEmojiEquipped";
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,7);
  puVar13 = (undefined8 *)FUN_00ccf630();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_238 = "CharmVOLineEquipped";
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  uVar15 = FUN_00cedce4();
  FUN_00ced8b0(uVar15,5);
  puVar13 = (undefined8 *)FUN_00ccf7d8();
  if (puVar13 == (undefined8 *)0x0) {
    puVar28 = &DAT_01e277f2;
  }
  else {
    puVar28 = (undefined1 *)*puVar13;
  }
  local_238 = "CharmAnimationEquipped";
  local_198 = &local_238;
  lVar11 = FUN_0090d33c(&local_1b8,&local_238,&DAT_01b944fb,&local_198,auStack_1a0);
  FUN_00ec3e60(lVar11 + 0x28,puVar28);
  FUN_009019b4(&local_1d0);
  if (((ulong)local_230[0] & 1) != 0) {
    operator_delete(local_220);
  }
  if (((ulong)local_218[0] & 1) != 0) {
    operator_delete(local_208);
  }
  if (((ulong)local_200[0] & 1) != 0) {
    operator_delete(local_1f0);
  }
  if (((ulong)local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  FUN_0090d2e0(&local_1d0,local_1c8);
  FUN_0090d2e0(&local_1b8,local_1b0);
LAB_0091df4c:
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

