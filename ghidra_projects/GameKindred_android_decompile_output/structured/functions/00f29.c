// functions/00f29 — 29 functions
#include "libGameKindred.h"




void thunk_FUN_00f29f68(void)

{
  FUN_00f2a754(DAT_032112e8);
  return;
}




void thunk_FUN_00f29f48(void)

{
  thunk_FUN_00f2a160(DAT_032112e8);
  return;
}




undefined8 FUN_00f29038(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  
  if ((param_1 == 0) || (piVar3 = *(int **)(param_1 + 0x38), piVar3 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar3[2] == 0) {
    if (*piVar3 != 10) goto LAB_00f290b4;
  }
  else if (*piVar3 != 10) {
    return 0xfffffffe;
  }
  uVar1 = FUN_00f26ad8(0,0,0);
  lVar2 = FUN_00f26ad8(uVar1,param_2,param_3);
  if (lVar2 != *(long *)(piVar3 + 6)) {
    return 0xfffffffd;
  }
LAB_00f290b4:
  uVar1 = FUN_00f28e28(param_1,param_2 + (ulong)param_3,param_3);
  if ((int)uVar1 == 0) {
    piVar3[3] = 1;
  }
  else {
    *piVar3 = 0x1e;
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}




undefined8 FUN_00f290ec(long param_1,long param_2)

{
  long lVar1;
  
  if (((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 8) >> 1 & 1) != 0)) {
    *(long *)(lVar1 + 0x28) = param_2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    return 0;
  }
  return 0xfffffffe;
}




void FUN_00f29118(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_1 == (long *)0x0) || (piVar13 = (int *)param_1[7], piVar13 == (int *)0x0)) {
    uVar5 = 0xfffffffe;
  }
  else {
    iVar2 = (int)param_1[1];
    if ((iVar2 == 0) && ((uint)piVar13[0x14] < 8)) {
      uVar5 = 0xfffffffb;
    }
    else {
      if (*piVar13 != 0x1f) {
        uVar1 = piVar13[0x14];
        *piVar13 = 0x1f;
        uVar4 = uVar1 & 0xfffffff8;
        uVar7 = *(long *)(piVar13 + 0x12) << (uVar1 & 7);
        *(ulong *)(piVar13 + 0x12) = uVar7;
        piVar13[0x14] = uVar4;
        if ((uVar1 & 0xfffffff8) == 0) {
          uVar6 = 0;
        }
        else {
          uVar1 = 7 - uVar4;
          if (uVar1 < 0xfffffff9) {
            uVar1 = 0xfffffff8;
          }
          uVar6 = (ulong)((uVar1 + uVar4 >> 3) + 1);
          puVar10 = auStack_4c;
          uVar11 = uVar6;
          do {
            *puVar10 = (char)uVar7;
            uVar11 = uVar11 - 1;
            uVar7 = uVar7 >> 8;
            puVar10 = puVar10 + 1;
          } while (uVar11 != 0);
          *(ulong *)(piVar13 + 0x12) = uVar7;
          piVar13[0x14] = (uVar4 - 8) - (uVar1 + uVar4 & 0xfffffff8);
        }
        piVar13[0x21] = 0;
        FUN_00f292b8(piVar13 + 0x21,auStack_4c,uVar6);
        iVar2 = (int)param_1[1];
      }
      uVar4 = FUN_00f292b8(piVar13 + 0x21,*param_1,iVar2);
      lVar9 = param_1[2];
      *(uint *)(param_1 + 1) = (int)param_1[1] - uVar4;
      *param_1 = *param_1 + (ulong)uVar4;
      param_1[2] = lVar9 + (ulong)uVar4;
      if (piVar13[0x21] == 4) {
        lVar8 = param_1[7];
        lVar12 = param_1[5];
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x34) = 0;
          *(undefined8 *)(lVar8 + 0x38) = 0;
          FUN_00f27400(param_1);
        }
        uVar5 = 0;
        param_1[2] = lVar9 + (ulong)uVar4;
        param_1[5] = lVar12;
        *piVar13 = 0xb;
      }
      else {
        uVar5 = 0xfffffffd;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




ulong FUN_00f292b8(uint *param_1,long param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if ((uVar3 < 4) && (param_3 != 0)) {
    uVar2 = 0;
    do {
      cVar1 = '\0';
      if (1 < uVar3) {
        cVar1 = -1;
      }
      if (cVar1 == *(char *)(param_2 + uVar2)) {
        uVar3 = uVar3 + 1;
      }
      else {
        uVar3 = 4 - uVar3;
        if (*(char *)(param_2 + uVar2) != '\0') {
          uVar3 = 0;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((uVar3 < 4) && (uVar2 < param_3));
  }
  else {
    uVar2 = 0;
  }
  *param_1 = uVar3;
  return uVar2 & 0xffffffff;
}




ulong FUN_00f29328(long param_1)

{
  ulong uVar1;
  int *piVar2;
  
  if ((param_1 != 0) && (piVar2 = *(int **)(param_1 + 0x38), piVar2 != (int *)0x0)) {
    uVar1 = 0;
    if (*piVar2 == 0xd) {
      uVar1 = (ulong)(piVar2[0x14] == 0);
    }
    return uVar1;
  }
  return 0xfffffffe;
}




undefined8 FUN_00f2935c(void *param_1,void *param_2)

{
  ulong uVar1;
  void *__dest;
  void *__dest_00;
  undefined8 uVar2;
  ulong uVar3;
  void *__src;
  
  if (param_1 == (void *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == (void *)0x0) {
    return 0xfffffffe;
  }
  __src = *(void **)((long)param_2 + 0x38);
  if (((__src == (void *)0x0) || (*(code **)((long)param_2 + 0x40) == (code *)0x0)) ||
     (*(long *)((long)param_2 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  __dest = (void *)(**(code **)((long)param_2 + 0x40))
                             (*(undefined8 *)((long)param_2 + 0x50),1,0x1bf0);
  if (__dest == (void *)0x0) {
LAB_00f293ec:
    uVar2 = 0xfffffffc;
  }
  else {
    if (*(long *)((long)__src + 0x40) == 0) {
      __dest_00 = (void *)0x0;
    }
    else {
      __dest_00 = (void *)(**(code **)((long)param_2 + 0x40))
                                    (*(undefined8 *)((long)param_2 + 0x50),
                                     1 << (ulong)(*(uint *)((long)__src + 0x30) & 0x1f),1);
      if (__dest_00 == (void *)0x0) {
        (**(code **)((long)param_2 + 0x48))(*(undefined8 *)((long)param_2 + 0x50),__dest);
        goto LAB_00f293ec;
      }
    }
    memcpy(param_1,param_2,0x70);
    memcpy(__dest,__src,0x1bf0);
    uVar3 = *(ulong *)((long)__src + 0x60);
    uVar1 = (long)__src + 0x550;
    if ((uVar1 <= uVar3) && (uVar3 <= (long)__src + 0x1bdcU)) {
      *(ulong *)((long)__dest + 0x60) = (long)__dest + (uVar3 - uVar1) + 0x550;
      *(ulong *)((long)__dest + 0x68) =
           (long)__dest + (*(long *)((long)__src + 0x68) - uVar1) + 0x550;
    }
    *(ulong *)((long)__dest + 0x88) = (long)__dest + (*(long *)((long)__src + 0x88) - uVar1) + 0x550
    ;
    if (__dest_00 != (void *)0x0) {
      memcpy(__dest_00,*(void **)((long)__src + 0x40),
             (ulong)(uint)(1 << (ulong)(*(uint *)((long)__src + 0x30) & 0x1f)));
    }
    uVar2 = 0;
    *(void **)((long)__dest + 0x40) = __dest_00;
    *(void **)((long)param_1 + 0x38) = __dest;
  }
  return uVar2;
}




undefined8 FUN_00f294a8(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1be0) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}




long FUN_00f294cc(long param_1)

{
  int *piVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x38), piVar1 != (int *)0x0)) {
    if (*piVar1 == 0x18) {
      uVar2 = piVar1[0x6fa] - piVar1[0x15];
    }
    else {
      uVar2 = 0;
      if (*piVar1 == 0xf) {
        uVar2 = piVar1[0x15];
      }
    }
    return (long)piVar1[0x6f9] * 0x10000 + (ulong)uVar2;
  }
  return -0x10000;
}




undefined8
FUN_00f2951c(int param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,char *param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  ushort *puVar20;
  uint uVar21;
  short sVar22;
  long lVar23;
  ulong uVar24;
  char *pcVar25;
  char *pcVar26;
  uint uVar27;
  ulong uVar28;
  ushort uVar29;
  char cVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ushort auStack_a8 [16];
  ushort local_88 [16];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  if (param_3 != 0) {
    uVar13 = (ulong)param_3;
    puVar20 = param_2;
    do {
      uVar13 = uVar13 - 1;
      local_88[*puVar20] = local_88[*puVar20] + 1;
      puVar20 = puVar20 + 1;
    } while (uVar13 != 0);
  }
  uVar17 = 0xf;
  do {
    if (local_88[uVar17] != 0) {
      uVar27 = uVar17;
      if (*param_5 <= uVar17) {
        uVar27 = *param_5;
      }
      uVar13 = 1;
      if (1 < uVar17) goto LAB_00f295e4;
      goto LAB_00f295f8;
    }
    uVar17 = uVar17 - 1;
  } while (uVar17 != 0);
  puVar18 = (undefined4 *)*param_4;
  *param_4 = (long)(puVar18 + 1);
  *puVar18 = 0x140;
  puVar18 = (undefined4 *)*param_4;
  uVar21 = 1;
  *param_4 = (long)(puVar18 + 1);
  *puVar18 = 0x140;
LAB_00f295c4:
  uVar14 = 0;
  *param_5 = uVar21;
  goto LAB_00f296ec;
  while (uVar13 = uVar13 + 1, (uint)uVar13 < uVar17) {
LAB_00f295e4:
    if (local_88[uVar13] != 0) break;
  }
LAB_00f295f8:
  lVar23 = 1;
  uVar21 = (uint)uVar13;
  if ((uint)uVar13 <= uVar27) {
    uVar21 = uVar27;
  }
  iVar12 = 1;
  do {
    iVar12 = iVar12 * 2 - (uint)local_88[lVar23];
    if (iVar12 < 0) {
      uVar14 = 0xffffffff;
      goto LAB_00f296ec;
    }
    lVar23 = lVar23 + 1;
  } while ((uint)lVar23 < 0x10);
  if ((iVar12 < 1) || ((uVar14 = 0xffffffff, param_1 != 0 && (uVar17 == 1)))) {
    lVar23 = 0;
    sVar22 = 0;
    auStack_a8[1] = 0;
    do {
      sVar22 = *(short *)(((ulong)local_88 | 2) + lVar23) + sVar22;
      *(short *)((long)auStack_a8 + lVar23 + 4) = sVar22;
      lVar23 = lVar23 + 2;
    } while (lVar23 != 0x1c);
    if (param_3 != 0) {
      uVar15 = 0;
      do {
        uVar24 = (ulong)param_2[uVar15];
        if (uVar24 != 0) {
          uVar29 = auStack_a8[uVar24];
          auStack_a8[uVar24] = uVar29 + 1;
          *(short *)(param_6 + (ulong)uVar29 * 2) = (short)uVar15;
        }
        uVar15 = uVar15 + 1;
      } while (param_3 != uVar15);
    }
    if (param_1 == 0) {
      bVar8 = false;
      bVar7 = 0;
      iVar12 = 0x13;
      pcVar25 = param_6;
      pcVar26 = param_6;
    }
    else if (param_1 == 1) {
      uVar14 = 1;
      if (9 < uVar21) goto LAB_00f296ec;
      bVar8 = false;
      iVar12 = 0x100;
      bVar7 = 1;
      pcVar25 = "window size";
      pcVar26 = "@\x05";
    }
    else {
      bVar8 = param_1 == 2;
      iVar12 = -1;
      pcVar25 = "\x10";
      pcVar26 = "\x01";
      if (bVar8) {
        bVar7 = 0;
        if (9 < uVar21) {
          uVar14 = 1;
          goto LAB_00f296ec;
        }
      }
      else {
        bVar7 = 0;
      }
    }
    lVar23 = *param_4;
    uVar27 = 1 << (ulong)(uVar21 & 0x1f);
    uVar10 = 0;
    uVar24 = 0;
    uVar4 = uVar27 - 1;
    uVar15 = 0xffffffff;
    uVar19 = uVar21;
    uVar11 = 0;
    do {
      uVar28 = (ulong)(uint)(1 << (ulong)(uVar19 & 0x1f));
      do {
        uVar29 = *(ushort *)(param_6 + uVar10 * 2);
        uVar19 = (uint)uVar13;
        if ((int)(uint)uVar29 < iVar12) {
          cVar30 = '\0';
        }
        else if (iVar12 < (int)(uint)uVar29) {
          cVar30 = pcVar25[(ulong)uVar29 * 2];
          uVar29 = *(ushort *)(pcVar26 + (ulong)uVar29 * 2);
        }
        else {
          uVar29 = 0;
          cVar30 = '`';
        }
        iVar32 = 1 << (ulong)(uVar19 - uVar11 & 0x1f);
        uVar9 = (uint)uVar24;
        uVar24 = uVar28;
        do {
          iVar33 = (int)uVar24;
          uVar5 = iVar33 - iVar32;
          uVar24 = (ulong)uVar5;
          pcVar2 = (char *)(lVar23 + (ulong)(((uVar9 >> (ulong)(uVar11 & 0x1f)) - iVar32) + iVar33)
                                     * 4);
          *pcVar2 = cVar30;
          cVar3 = (char)(uVar19 - uVar11);
          pcVar2[1] = cVar3;
          *(ushort *)(pcVar2 + 2) = uVar29;
        } while (uVar5 != 0);
        uVar5 = 1 << (ulong)(uVar19 - 1 & 0x1f);
        do {
          uVar31 = uVar5;
          uVar5 = uVar31 >> 1;
        } while ((uVar31 & uVar9) != 0);
        if (uVar31 == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = (ulong)((uVar31 - 1 & uVar9) + uVar31);
        }
        uVar29 = local_88[uVar13 & 0xffffffff];
        uVar10 = (ulong)((int)uVar10 + 1);
        local_88[uVar13 & 0xffffffff] = uVar29 - 1;
        if ((ushort)(uVar29 - 1) == 0) {
          if (uVar19 == uVar17) {
            if ((uint)uVar24 != 0) {
              puVar1 = (undefined1 *)(lVar23 + uVar24 * 4);
              *puVar1 = 0x40;
              puVar1[1] = cVar3;
              *(undefined2 *)(puVar1 + 2) = 0;
            }
            *param_4 = *param_4 + (ulong)uVar27 * 4;
            goto LAB_00f295c4;
          }
          uVar13 = (ulong)param_2[*(ushort *)(param_6 + uVar10 * 2)];
        }
        uVar9 = (uint)uVar13;
      } while ((uVar9 <= uVar21) || (uVar5 = (uint)uVar24 & uVar4, uVar5 == (uint)uVar15));
      uVar31 = uVar21;
      if (uVar11 != 0) {
        uVar31 = uVar11;
      }
      uVar19 = uVar9 - uVar31;
      iVar32 = 1 << (ulong)(uVar19 & 0x1f);
      if (uVar9 < uVar17) {
        uVar15 = uVar13 & 0xffffffff;
        do {
          puVar20 = local_88 + uVar15;
          if ((int)(iVar32 - (uint)*puVar20) < 1) break;
          uVar15 = uVar15 + 1;
          iVar32 = (iVar32 - (uint)*puVar20) * 2;
        } while ((uint)uVar15 < uVar17);
        uVar19 = (int)uVar15 - uVar31;
        iVar32 = 1 << (ulong)(uVar19 & 0x1f);
      }
      uVar27 = iVar32 + uVar27;
      uVar14 = 1;
      if (((bool)(bVar7 & 0x354 < uVar27)) || ((bool)(bVar8 & 0x250 < uVar27))) break;
      lVar16 = *param_4;
      lVar23 = lVar23 + uVar28 * 4;
      puVar1 = (undefined1 *)(lVar16 + (ulong)uVar5 * 4);
      *puVar1 = (char)uVar19;
      puVar1[1] = (char)uVar21;
      *(short *)(puVar1 + 2) = (short)((uint)((int)lVar23 - (int)lVar16) >> 2);
      uVar15 = (ulong)uVar5;
      uVar11 = uVar31;
    } while( true );
  }
LAB_00f296ec:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f29934(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  long lVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  uint uVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined4 uVar27;
  char *pcVar28;
  ushort uVar29;
  uint uVar30;
  undefined1 *puVar31;
  uint uVar32;
  ulong uVar33;
  undefined1 *puVar34;
  ulong uVar35;
  long lVar36;
  int iVar37;
  
  puVar18 = (undefined4 *)param_1[7];
  lVar17 = param_1[4];
  uVar12 = puVar18[0xf];
  uVar6 = puVar18[0x1c];
  uVar8 = puVar18[0x1d];
  pbVar21 = (byte *)(*param_1 + -1);
  puVar25 = (undefined1 *)(param_1[3] + -1);
  iVar7 = puVar18[0xd];
  uVar9 = puVar18[0xe];
  puVar10 = *(undefined1 **)(puVar18 + 0x10);
  uVar20 = *(ulong *)(puVar18 + 0x12);
  uVar24 = puVar18[0x14];
  lVar23 = *(long *)(puVar18 + 0x18);
  lVar11 = *(long *)(puVar18 + 0x1a);
  pbVar3 = pbVar21 + ((int)param_1[1] - 5);
  puVar26 = puVar25;
LAB_00f299dc:
  if (uVar24 < 0xf) {
    uVar33 = (ulong)uVar24;
    uVar32 = uVar24 + 8;
    uVar24 = uVar24 + 0x10;
    uVar20 = ((ulong)pbVar21[1] << (uVar33 & 0x3f)) + uVar20 +
             ((ulong)pbVar21[2] << ((ulong)uVar32 & 0x3f));
    pbVar21 = pbVar21 + 2;
  }
  pbVar22 = (byte *)(lVar23 + (uVar20 & (1 << (ulong)(uVar6 & 0x1f)) - 1) * 4);
  uVar32 = (uint)*pbVar22;
  uVar29 = *(ushort *)(pbVar22 + 2);
  uVar20 = uVar20 >> ((ulong)pbVar22[1] & 0x3f);
  uVar24 = uVar24 - pbVar22[1];
  if (*pbVar22 != 0) {
    do {
      if ((uVar32 >> 4 & 1) != 0) {
        uVar32 = uVar32 & 0xf;
        uVar30 = (uint)uVar29;
        if (uVar32 != 0) {
          if (uVar24 < uVar32) {
            pbVar21 = pbVar21 + 1;
            uVar33 = (ulong)uVar24;
            uVar24 = uVar24 + 8;
            uVar20 = ((ulong)*pbVar21 << (uVar33 & 0x3f)) + uVar20;
          }
          uVar19 = (uint)uVar20;
          uVar20 = uVar20 >> uVar32;
          uVar30 = ((1 << (ulong)uVar32) - 1U & uVar19) + uVar30;
          uVar24 = uVar24 - uVar32;
        }
        pbVar22 = pbVar21;
        if (uVar24 < 0xf) {
          pbVar22 = pbVar21 + 2;
          uVar33 = (ulong)uVar24;
          uVar32 = uVar24 + 8;
          uVar24 = uVar24 + 0x10;
          uVar20 = ((ulong)pbVar21[1] << (uVar33 & 0x3f)) + uVar20 +
                   ((ulong)*pbVar22 << ((ulong)uVar32 & 0x3f));
        }
        pbVar21 = (byte *)(lVar11 + (uVar20 & (1 << (ulong)(uVar8 & 0x1f)) - 1) * 4);
        bVar13 = *pbVar21;
        uVar29 = *(ushort *)(pbVar21 + 2);
        uVar20 = uVar20 >> ((ulong)pbVar21[1] & 0x3f);
        uVar24 = uVar24 - pbVar21[1];
        goto joined_r0x00f29b00;
      }
      if ((uVar32 >> 6 & 1) != 0) {
        if ((uVar32 >> 5 & 1) != 0) {
          uVar27 = 0xb;
          goto LAB_00f29df0;
        }
        pbVar22 = pbVar21;
        pcVar28 = "invalid literal/length code";
        goto LAB_00f29de8;
      }
      pbVar22 = (byte *)(lVar23 + ((uVar20 & (1 << (ulong)(uVar32 & 0x1f)) - 1) + (ulong)uVar29) * 4
                        );
      uVar32 = (uint)*pbVar22;
      uVar29 = *(ushort *)(pbVar22 + 2);
      uVar20 = uVar20 >> ((ulong)pbVar22[1] & 0x3f);
      uVar24 = uVar24 - pbVar22[1];
    } while (uVar32 != 0);
  }
  puVar26[1] = (char)uVar29;
  puVar31 = puVar26 + 1;
  goto LAB_00f29a64;
joined_r0x00f29b00:
  uVar32 = (uint)uVar29;
  if ((bVar13 >> 4 & 1) != 0) goto LAB_00f29b34;
  pcVar28 = "invalid distance code";
  if ((bVar13 >> 6 & 1) != 0) goto LAB_00f29de8;
  pbVar21 = (byte *)(lVar11 + ((uVar20 & (1 << (ulong)(bVar13 & 0x1f)) - 1) + (ulong)uVar29) * 4);
  bVar13 = *pbVar21;
  uVar29 = *(ushort *)(pbVar21 + 2);
  uVar20 = uVar20 >> ((ulong)pbVar21[1] & 0x3f);
  uVar24 = uVar24 - pbVar21[1];
  goto joined_r0x00f29b00;
LAB_00f29b34:
  uVar4 = bVar13 & 0xf;
  pbVar21 = pbVar22;
  uVar19 = uVar24;
  if (uVar24 < uVar4) {
    pbVar21 = pbVar22 + 1;
    uVar19 = uVar24 + 8;
    uVar20 = ((ulong)*pbVar21 << ((ulong)uVar24 & 0x3f)) + uVar20;
    if (uVar19 < uVar4) {
      pbVar21 = pbVar22 + 2;
      uVar33 = (ulong)uVar19;
      uVar19 = uVar24 + 0x10;
      uVar20 = ((ulong)*pbVar21 << (uVar33 & 0x3f)) + uVar20;
    }
  }
  uVar5 = (1 << uVar4) - 1U & (uint)uVar20;
  uVar2 = uVar5 + uVar32;
  uVar14 = (int)puVar26 - ((int)puVar25 - (param_2 - (int)lVar17));
  uVar20 = uVar20 >> uVar4;
  uVar15 = uVar2 - uVar14;
  uVar24 = uVar19 - uVar4;
  if (uVar2 < uVar14 || uVar15 == 0) {
    iVar37 = 0;
    lVar1 = 0;
    do {
      lVar36 = lVar1;
      lVar16 = lVar36 - (ulong)uVar2;
      iVar37 = iVar37 + -3;
      lVar1 = lVar36 + 3;
      puVar26[lVar36 + 1] = puVar26[lVar16 + 1];
      puVar26[lVar36 + 2] = puVar26[lVar16 + 2];
      puVar26[lVar36 + 3] = puVar26[lVar16 + 3];
    } while (2 < uVar30 + iVar37);
    puVar31 = puVar26 + lVar1;
    if (uVar30 != (uint)lVar1) {
      puVar31[1] = puVar26[(lVar1 - (ulong)uVar2) + 1];
      puVar31 = puVar31 + 1;
      if (uVar30 - 1 != (uint)lVar1) {
        puVar26[lVar36 + 5] = puVar26[(lVar1 - (ulong)uVar2) + 2];
        puVar31 = puVar26 + lVar36 + 5;
      }
    }
    goto LAB_00f29a64;
  }
  if ((uVar9 < uVar15) &&
     (pbVar22 = pbVar21, pcVar28 = "invalid distance too far back", puVar18[0x6f8] != 0)) {
LAB_00f29de8:
    uVar27 = 0x1d;
    param_1[6] = (long)pcVar28;
    pbVar21 = pbVar22;
LAB_00f29df0:
    *puVar18 = uVar27;
    puVar31 = puVar26;
LAB_00f29df4:
    lVar23 = (long)pbVar21 - (ulong)(uVar24 >> 3);
    param_1[3] = (long)(puVar31 + 1);
    *(int *)(param_1 + 4) = ((int)(puVar25 + ((int)lVar17 - 0x101)) - (int)puVar31) + 0x101;
    *param_1 = lVar23 + 1;
    *(int *)(param_1 + 1) = ((int)pbVar3 - (int)lVar23) + 5;
    *(ulong *)(puVar18 + 0x12) = uVar20 & (1 << (ulong)(uVar24 & 7)) - 1;
    puVar18[0x14] = uVar24 & 7;
    return;
  }
  if (uVar12 == 0) {
    uVar19 = uVar30 - uVar15;
    uVar33 = (ulong)(iVar7 - uVar15);
    if (uVar30 < uVar15 || uVar19 == 0) goto LAB_00f29d38;
    iVar37 = (uVar14 - uVar32) - uVar5;
    uVar14 = (uVar5 + uVar32 + -1) - uVar14;
    puVar34 = puVar10 + uVar33;
    puVar31 = puVar26;
    do {
      puVar31 = puVar31 + 1;
      iVar37 = iVar37 + 1;
      *puVar31 = *puVar34;
      puVar34 = puVar34 + 1;
    } while (iVar37 != 0);
LAB_00f29d24:
    puVar26 = puVar26 + (ulong)uVar14 + 1;
    puVar34 = puVar26 + -(ulong)uVar2;
  }
  else {
    uVar33 = (ulong)(uVar12 - uVar15);
    if (uVar12 < uVar15) {
      uVar19 = uVar30 - (uVar15 - uVar12);
      uVar33 = (ulong)((uVar12 + iVar7) - uVar15);
      if (uVar15 - uVar12 <= uVar30 && uVar19 != 0) {
        uVar35 = (ulong)((uVar5 + ~uVar12 + uVar32) - uVar14);
        iVar37 = ((uVar12 + uVar14) - uVar32) - uVar5;
        puVar34 = puVar10 + uVar33;
        puVar31 = puVar26;
        do {
          puVar31 = puVar31 + 1;
          iVar37 = iVar37 + 1;
          *puVar31 = *puVar34;
          puVar34 = puVar34 + 1;
        } while (iVar37 != 0);
        if (uVar19 < uVar12 || uVar19 - uVar12 == 0) {
          puVar26 = puVar26 + uVar35 + 1;
          puVar34 = puVar10 + -1;
        }
        else {
          puVar31 = puVar26 + uVar35 + 2;
          puVar34 = puVar10;
          uVar32 = uVar12;
          do {
            uVar32 = uVar32 - 1;
            *puVar31 = *puVar34;
            puVar31 = puVar31 + 1;
            puVar34 = puVar34 + 1;
          } while (uVar32 != 0);
          puVar26 = puVar26 + uVar35 + (ulong)(uVar12 - 1) + 2;
          puVar34 = puVar26 + -(ulong)uVar2;
          uVar19 = uVar19 - uVar12;
        }
        goto joined_r0x00f29d44;
      }
    }
    else {
      uVar19 = uVar30 - uVar15;
      if (uVar15 <= uVar30 && uVar19 != 0) {
        iVar37 = (uVar14 - uVar5) - uVar32;
        uVar14 = (uVar5 + uVar32 + -1) - uVar14;
        puVar34 = puVar10 + uVar33;
        puVar31 = puVar26;
        do {
          puVar31 = puVar31 + 1;
          iVar37 = iVar37 + 1;
          *puVar31 = *puVar34;
          puVar34 = puVar34 + 1;
        } while (iVar37 != 0);
        goto LAB_00f29d24;
      }
    }
LAB_00f29d38:
    puVar34 = puVar10 + -1 + uVar33;
    uVar19 = uVar30;
  }
joined_r0x00f29d44:
  for (; 2 < uVar19; uVar19 = uVar19 - 3) {
    puVar26[1] = puVar34[1];
    puVar26[2] = puVar34[2];
    puVar26[3] = puVar34[3];
    puVar26 = puVar26 + 3;
    puVar34 = puVar34 + 3;
  }
  puVar31 = puVar26;
  if (uVar19 != 0) {
    puVar26[1] = puVar34[1];
    puVar31 = puVar26 + 1;
    if (uVar19 != 1) {
      puVar26[2] = puVar34[2];
      puVar31 = puVar26 + 2;
    }
  }
LAB_00f29a64:
  if ((puVar25 + ((int)lVar17 - 0x101) <= puVar31) || (puVar26 = puVar31, pbVar3 <= pbVar21))
  goto LAB_00f29df4;
  goto LAB_00f299dc;
}




void FUN_00f29e60(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00f29ed4();
  return;
}




void FUN_00f29e6c(void)

{
  uint uVar1;
  
  uVar1 = FUN_00f29f54();
  if ((uVar1 & 1) != 0) {
    FUN_00f29f04();
    return;
  }
  return;
}




void FUN_00f29e8c(void)

{
  return;
}




void FUN_00f29e90(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0199c3ec(param_1,0);
  uVar2 = FUN_00f29f54();
  if ((uVar2 & 1) != 0) {
    FUN_00f29f74(uVar1);
    return;
  }
  return;
}




undefined8 FUN_00f29ecc(void)

{
  return 1;
}




void FUN_00f29ed4(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x9e90);
  FUN_00f2a548();
  DAT_032112e8 = pvVar1;
  FUN_00f2a0ec();
  return;
}




void FUN_00f29f04(void)

{
  void *pvVar1;
  
  thunk_FUN_00f2a160(DAT_032112e8);
  FUN_00f2a124();
  pvVar1 = DAT_032112e8;
  if (DAT_032112e8 != (void *)0x0) {
    FUN_00f2a660(DAT_032112e8);
    operator_delete(pvVar1);
  }
  DAT_032112e8 = (void *)0x0;
  return;
}




void FUN_00f29f48(void)

{
  thunk_FUN_00f2a160(DAT_032112e8);
  return;
}




bool FUN_00f29f54(void)

{
  return DAT_032112e8 != 0;
}




void FUN_00f29f68(void)

{
  FUN_00f2a754(DAT_032112e8);
  return;
}




void FUN_00f29f74(undefined8 param_1)

{
  FUN_00f2a9a0(DAT_032112e8,param_1);
  return;
}




void FUN_00f29f88(void)

{
  FUN_00f2abe4(DAT_032112e8);
  return;
}




void FUN_00f29f94(undefined4 param_1)

{
  FUN_00f2ac98(DAT_032112e8,param_1);
  return;
}




void FUN_00f29fa8(undefined4 param_1,uint param_2)

{
  FUN_00f2ad54(DAT_032112e8,param_1,param_2 & 1);
  return;
}




void FUN_00f29fc0(undefined4 param_1,undefined4 param_2)

{
  FUN_00f2ad68(DAT_032112e8,param_1,param_2);
  return;
}




void FUN_00f29fd8(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00f2af6c(DAT_032112e8,param_1,param_2,param_3);
  return;
}




void FUN_00f29ff4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f2b1f0(DAT_032112e8,param_1,param_2,param_3);
  return;
}

