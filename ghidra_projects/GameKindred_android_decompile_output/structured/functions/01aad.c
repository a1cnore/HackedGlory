// functions/01aad — 4 functions
#include "libGameKindred.h"




undefined8 * FUN_01aad01c(char *param_1,_STACK *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((param_2 != (_STACK *)0x0) && (iVar1 = sk_num(param_2), 0 < iVar1)) {
    if (param_1 == (char *)0x0) {
      iVar1 = 0;
      do {
        puVar3 = sk_value(param_2,iVar1);
        if (puVar3 != (undefined8 *)0x0) {
          return puVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(param_2);
      } while (iVar1 < iVar2);
    }
    else {
      iVar1 = 0;
      do {
        puVar3 = sk_value(param_2,iVar1);
        if ((puVar3 != (undefined8 *)0x0) && (iVar2 = strcmp((char *)*puVar3,param_1), iVar2 == 0))
        {
          return puVar3;
        }
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(param_2);
      } while (iVar1 < iVar2);
    }
  }
  puVar3 = (undefined8 *)SRP_get_default_gN(param_1);
  return puVar3;
}




ulong FUN_01aad858(undefined8 *param_1,byte *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  size_t sVar5;
  char *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  bVar4 = *param_2;
  while ((bVar4 < 0x21 && ((1L << ((ulong)bVar4 & 0x3f) & 0x100000600U) != 0))) {
    param_2 = param_2 + 1;
    bVar4 = *param_2;
  }
  sVar5 = strlen((char *)param_2);
  if ((0 < (int)sVar5) &&
     (pcVar6 = strchr(s_0123456789ABCDEFGHIJKLMNOPQRSTUV_02c03290,(uint)bVar4),
     pcVar6 != (char *)0x0)) {
    uVar9 = 0;
    do {
      uVar7 = uVar9 + 1;
      *(char *)((long)param_1 + uVar9) = (char)pcVar6 + 'p';
      if ((long)(int)sVar5 <= (long)uVar7) {
        uVar7 = (ulong)((int)uVar9 + 1);
        goto LAB_01aad928;
      }
      pcVar6 = strchr(s_0123456789ABCDEFGHIJKLMNOPQRSTUV_02c03290,(uint)param_2[uVar9 + 1]);
      uVar9 = uVar7;
    } while (pcVar6 != (char *)0x0);
    if ((int)uVar7 != 0) {
LAB_01aad928:
      lVar11 = 0;
      iVar10 = 0;
      uVar9 = uVar7 & 0xffffffff;
      lVar16 = (long)param_1 - 2;
      iVar12 = 1;
      iVar15 = 2;
      puVar13 = param_1;
      do {
        puVar13 = (undefined8 *)((long)puVar13 - 3);
        bVar4 = *(byte *)(lVar16 + uVar9 + 1);
        lVar17 = uVar9 + lVar11 + -1;
        *(byte *)((long)puVar13 + uVar9 + 3) = bVar4;
        iVar8 = (int)uVar7;
        if (lVar17 < 1) break;
        *(byte *)((long)puVar13 + uVar9 + 3) = bVar4 | *(char *)(lVar16 + uVar9) << 6;
        bVar4 = *(byte *)(lVar16 + uVar9) >> 2 & 0xf;
        *(byte *)((long)puVar13 + uVar9 + 2) = bVar4;
        if (iVar8 + (int)lVar11 == 2) {
          iVar10 = iVar8 - iVar12;
          goto LAB_01aad9f4;
        }
        lVar2 = lVar16 + uVar9;
        *(byte *)((long)puVar13 + uVar9 + 2) = bVar4 | *(char *)(lVar2 + -1) << 4;
        bVar4 = *(byte *)(lVar2 + -1) >> 4 & 3;
        *(byte *)((long)puVar13 + uVar9 + 1) = bVar4;
        if (lVar17 < 3) {
          iVar10 = iVar8 - iVar15;
          goto LAB_01aad9f4;
        }
        lVar11 = lVar11 + -4;
        iVar10 = iVar10 + 3;
        iVar12 = iVar12 + 3;
        iVar15 = iVar15 + 3;
        *(byte *)((long)puVar13 + uVar9 + 1) = bVar4 | *(char *)(lVar2 + -2) << 2;
        *(undefined1 *)((long)puVar13 + uVar9) = 0;
        lVar16 = lVar16 + -4;
      } while (iVar8 + (int)lVar11 != 0);
      iVar10 = iVar8 - iVar10;
LAB_01aad9f4:
      lVar11 = (long)iVar10;
      lVar17 = (long)iVar8;
      iVar10 = iVar10 + -1;
      lVar16 = (lVar11 << 0x20) + -0x100000000;
      do {
        iVar10 = iVar10 + 1;
        lVar16 = lVar16 + 0x100000000;
        if (lVar17 < lVar11) break;
        pcVar6 = (char *)((long)param_1 + lVar11);
        lVar11 = lVar11 + 1;
      } while (*pcVar6 == '\0');
      if (iVar8 < iVar10) {
        return 0;
      }
      lVar16 = lVar16 >> 0x20;
      uVar9 = (lVar17 + 1) - lVar16;
      if (uVar9 < 0x20) {
        uVar7 = 0;
      }
      else if (((undefined8 *)((long)param_1 + lVar17 + 1) <= param_1) ||
              (uVar7 = 0, (long)param_1 + uVar9 <= (ulong)((long)param_1 + lVar16))) {
        uVar7 = uVar9 & 0xffffffffffffffe0;
        lVar16 = lVar16 + uVar7;
        uVar14 = (lVar17 + 1) - (long)iVar10 & 0xffffffffffffffe0;
        puVar13 = param_1;
        do {
          puVar3 = (undefined8 *)((long)puVar13 + (long)iVar10);
          uVar18 = *puVar3;
          uVar20 = puVar3[3];
          uVar19 = puVar3[2];
          uVar14 = uVar14 - 0x20;
          puVar13[1] = puVar3[1];
          *puVar13 = uVar18;
          puVar13[3] = uVar20;
          puVar13[2] = uVar19;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        if (uVar9 == uVar7) {
          return uVar7;
        }
      }
      do {
        uVar9 = uVar7 + 1;
        *(undefined1 *)((long)param_1 + uVar7) = *(undefined1 *)((long)param_1 + lVar16);
        bVar1 = lVar16 < lVar17;
        lVar16 = lVar16 + 1;
        uVar7 = uVar9;
      } while (bVar1);
      return uVar9;
    }
  }
  return 0;
}




bool FUN_01aadca0(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  CMAC_CTX *out;
  
  out = CMAC_CTX_new();
  *(CMAC_CTX **)(param_1 + 0x28) = out;
  bVar1 = false;
  if (out != (CMAC_CTX *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar2 = CMAC_CTX_copy(out,*(CMAC_CTX **)(param_2 + 0x28));
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




bool FUN_01aadfb0(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = CMAC_Update(*(CMAC_CTX **)(*(long *)(param_1 + 0x20) + 0x28),param_2,param_3);
  return iVar1 != 0;
}

