// functions/00f06 — 9 functions
#include "libGameKindred.h"




int FUN_00f06168(undefined4 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x10c));
  *(undefined4 *)(param_3 + 0x100) = param_1;
  *(undefined4 *)(param_3 + 0x104) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x10c));
  return iVar1;
}




void FUN_00f061ac(ulong param_1,undefined1 param_2,uint *param_3,int param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_78;
  uint local_77;
  float local_73;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00f05848(DAT_03210cf0,param_2);
  if (param_4 != 0) {
    lVar1 = param_1 + 0x30;
    do {
      uVar2 = *param_3;
      if (((uVar2 & 0xffff) != 0xffff) || (uVar2 >> 0x10 != 0xffff)) {
        param_1 = param_1 & 0xffffffff00000000 | (ulong)uVar2;
        lVar5 = FUN_00f1a1e4(uVar4,param_1);
        if ((*(float *)(lVar5 + 0x10) != 0.0) && (*(float *)(lVar5 + 0x14) != 0.0)) {
          local_78 = param_2;
          local_77 = uVar2;
          local_73 = *(float *)(lVar5 + 0x14);
          FUN_00f062c0(lVar1,&local_78,&local_78);
        }
      }
      param_4 = param_4 + -1;
      param_3 = (uint *)((long)param_3 + (ulong)param_5);
    } while (param_4 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f062c0(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0091ed5c(param_2,9,0xfacefeed);
  uVar8 = *param_1;
  if (uVar8 != 0) {
    lVar10 = *(long *)(param_1 + 2);
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar4 / uVar8;
    }
    uVar11 = uVar4 - uVar11 * uVar8;
    while ((*(uint *)(lVar10 + (ulong)uVar11 * 8) != uVar4 &&
           (*(int *)(lVar10 + (ulong)uVar11 * 8 + 4) != -1))) {
      uVar12 = uVar8;
      if (0 < (int)uVar11) {
        uVar12 = uVar11;
      }
      uVar11 = uVar12 - 1;
    }
    if ((uVar11 != 0xffffffff) &&
       (uVar11 = *(uint *)(lVar10 + (ulong)uVar11 * 8 + 4), uVar11 != 0xffffffff)) {
      uVar6 = 0;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar11 * 0xc);
      *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_3 + 1);
      *puVar9 = *param_3;
      goto LAB_00f064e4;
    }
  }
  uVar11 = param_1[4];
  param_1[4] = uVar11 + 1;
  if (uVar8 >> 1 < uVar11 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar11 = *param_1;
    uVar12 = uVar11 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar12 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar7 + (ulong)uVar12 * 8 + 4);
        if (iVar5 != -1) {
          uVar11 = *(uint *)((long)pvVar7 + (ulong)uVar12 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar11 / (uint)local_58;
          }
          uVar13 = (ulong)(uVar11 - uVar2 * (uint)local_58);
          piVar14 = (int *)((long)local_50 + uVar13 * 8 + 4);
          iVar1 = *piVar14;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar13) {
              uVar2 = (uint)uVar13;
            }
            uVar13 = (ulong)(uVar2 - 1);
            piVar14 = (int *)((long)local_50 + uVar13 * 8 + 4);
            iVar1 = *piVar14;
          }
          *(uint *)((long)local_50 + uVar13 * 8) = uVar11;
          *piVar14 = iVar5;
        }
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
      uVar11 = *param_1;
    }
    uVar12 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar12,uVar11);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar10 = *(long *)(param_1 + 2);
  uVar11 = 0;
  if (uVar8 != 0) {
    uVar11 = uVar4 / uVar8;
  }
  uVar13 = (ulong)(uVar4 - uVar11 * uVar8);
  piVar14 = (int *)(lVar10 + uVar13 * 8 + 4);
  iVar5 = *piVar14;
  while (iVar5 != -1) {
    uVar11 = uVar8;
    if (0 < (int)(uint)uVar13) {
      uVar11 = (uint)uVar13;
    }
    uVar13 = (ulong)(uVar11 - 1);
    piVar14 = (int *)(lVar10 + uVar13 * 8 + 4);
    iVar5 = *piVar14;
  }
  *(uint *)(lVar10 + uVar13 * 8) = uVar4;
  iVar5 = FUN_00f07600(param_1,param_3);
  *piVar14 = iVar5;
  uVar6 = 1;
LAB_00f064e4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




ulong FUN_00f06510(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar5 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x43));
  puVar2 = param_1 + 0x18;
  if (*(long *)(param_1 + 0x1a) != 0) {
    *puVar2 = 0;
  }
  if (param_1[0x10] == 0) {
    return (ulong)uVar5;
  }
  uVar5 = 0;
  do {
    uVar6 = uVar5;
    uVar8 = (ulong)uVar6;
    if (param_1[0xc] <= uVar6) break;
    uVar5 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0xe) + uVar8 * 8 + 4) == -1);
  if (param_1[0xc] != uVar6) {
    do {
      uVar6 = FUN_0091ed5c(*(long *)(param_1 + 0x14) +
                           (ulong)*(uint *)(*(long *)(param_1 + 0xe) + uVar8 * 8 + 4) * 0xc,9,
                           0xfacefeed);
      uVar5 = *param_1;
      if (uVar5 == 0) {
LAB_00f0660c:
        FUN_00f06818(puVar2,*(long *)(param_1 + 0x14) +
                            (ulong)*(uint *)(*(long *)(param_1 + 0xe) + uVar8 * 8 + 4) * 0xc);
      }
      else {
        lVar9 = *(long *)(param_1 + 2);
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar6 / uVar5;
        }
        uVar4 = uVar6 - uVar4 * uVar5;
        while ((*(uint *)(lVar9 + (ulong)uVar4 * 8) != uVar6 &&
               (*(int *)(lVar9 + (ulong)uVar4 * 8 + 4) != -1))) {
          uVar3 = uVar5;
          if (0 < (int)uVar4) {
            uVar3 = uVar4;
          }
          uVar4 = uVar3 - 1;
        }
        if ((uVar4 == 0xffffffff) || (*(int *)(lVar9 + (ulong)uVar4 * 8 + 4) == -1))
        goto LAB_00f0660c;
      }
      uVar5 = param_1[0xc];
      uVar6 = (uint)uVar8;
      do {
        uVar6 = uVar6 + 1;
        uVar8 = (ulong)uVar6;
        if (uVar5 <= uVar6) break;
      } while (*(int *)(*(long *)(param_1 + 0xe) + uVar8 * 8 + 4) == -1);
    } while (uVar5 != uVar6);
  }
  if (*puVar2 != 0) {
    param_1[0x3f] = 0x3f800000;
    uVar8 = FUN_00f068ac(param_1);
    if ((uVar8 & 1) == 0) {
      FUN_00f05bf4(param_1 + 0x1c,(int)(float)param_1[0x3e],(int)(float)param_1[0x3e],
                   *(undefined8 *)(param_1 + 0x34),param_1[0x32]);
      *(undefined1 *)(param_1 + 0x42) = 1;
      FUN_00f05f24(param_1);
      if (*(long *)(param_1 + 0x1a) != 0) {
        *puVar2 = 0;
      }
      FUN_00f06eb8(puVar2,param_1[0x10]);
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        uVar8 = (ulong)uVar6;
        if (param_1[0xc] <= uVar6) break;
        uVar5 = uVar6 + 1;
      } while (*(int *)(*(long *)(param_1 + 0xe) + uVar8 * 8 + 4) == -1);
      if (param_1[0xc] != uVar6) {
        do {
          FUN_00f06818(puVar2,*(long *)(param_1 + 0x14) +
                              (ulong)*(uint *)(*(long *)(param_1 + 0xe) + uVar8 * 8 + 4) * 0xc);
          uVar5 = (uint)uVar8;
          do {
            uVar5 = uVar5 + 1;
            uVar8 = (ulong)uVar5;
            if (param_1[0xc] <= uVar5) break;
          } while (*(int *)(*(long *)(param_1 + 0xe) + uVar8 * 8 + 4) == -1);
        } while (param_1[0xc] != uVar5);
      }
      uVar8 = FUN_00f068ac(param_1);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
        do {
          FUN_00f05bf4(param_1 + 0x1c,(int)(float)param_1[0x3e],(int)(float)param_1[0x3e],
                       *(undefined8 *)(param_1 + 0x34),param_1[0x32]);
          *(undefined1 *)(param_1 + 0x42) = 1;
          FUN_00f05f24(param_1);
          param_1[0x3f] = (&DAT_01bf42c0)[uVar8];
          uVar7 = FUN_00f068ac(param_1);
          if ((uVar7 & 1) != 0) break;
          bVar1 = uVar8 < 2;
          uVar8 = uVar8 + 1;
        } while (bVar1);
        if (((uVar7 & 1) == 0) && (*(long *)(param_1 + 0x1a) != 0)) {
          *puVar2 = 0;
        }
      }
    }
  }
  uVar8 = FUN_00f05f24(param_1 + 0xc);
  return uVar8;
}




void FUN_00f06818(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00f06eb8(param_1,uVar2);
    uVar4 = *param_1;
  }
  uVar4 = uVar4 + 1;
  *param_1 = uVar4;
  lVar1 = *(long *)(param_1 + 2) + (ulong)uVar4 + (ulong)uVar4 * 8;
  *(undefined1 *)(lVar1 + -1) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + -9) = *param_2;
  return;
}




void FUN_00f068ac(long param_1)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  size_t __nmemb;
  int iVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined2 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  ushort *puVar20;
  int *piVar21;
  int iVar22;
  long lVar23;
  ulong unaff_x22;
  long lVar24;
  ushort *puVar25;
  ushort *puVar26;
  ulong uVar27;
  int iVar28;
  void *__base;
  ushort *puVar29;
  ushort *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long *local_c8;
  uint local_90;
  int local_8c;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  FUN_00f06f48((uint *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x60),0,0);
  if (*(int *)(param_1 + 0x60) == 0) {
    __base = *(void **)(param_1 + 0xc0);
  }
  else {
    fVar31 = *(float *)(param_1 + 0xfc);
    fVar32 = *(float *)(param_1 + 0x100);
    fVar33 = *(float *)(param_1 + 0x104);
    lVar23 = 0;
    lVar24 = 0;
    uVar27 = 0;
    do {
      puVar2 = (undefined1 *)(*(long *)(param_1 + 0x68) + lVar24);
      uVar10 = FUN_00f05848(DAT_03210cf0,*puVar2);
      unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)*(uint *)(puVar2 + 1);
      lVar11 = FUN_00f1a1e4(uVar10,unaff_x22);
      __base = *(void **)(param_1 + 0xc0);
      lVar24 = lVar24 + 9;
      puVar19 = (undefined4 *)((long)__base + lVar23);
      *puVar19 = (int)uVar27;
      uVar27 = uVar27 + 1;
      lVar23 = lVar23 + 0x10;
      *(short *)(puVar19 + 1) =
           (short)(int)((float)(int)(fVar31 * fVar32 * *(float *)(lVar11 + 0x10)) + 1.0);
      *(short *)((long)puVar19 + 6) =
           (short)(int)((float)(int)(fVar31 * fVar33 * *(float *)(lVar11 + 0x14)) + 1.0);
    } while (uVar27 < *(uint *)(param_1 + 0x60));
  }
  local_c8 = (long *)(param_1 + 0xc0);
  uVar18 = *(uint *)(param_1 + 0xb8);
  uVar27 = (ulong)uVar18;
  __nmemb = (size_t)(int)uVar18;
  if ((int)uVar18 < 1) {
    qsort(__base,__nmemb,0x10,FUN_00f0748c);
    qsort(__base,__nmemb,0x10,FUN_00f074c8);
  }
  else {
    uVar14 = 0;
    puVar19 = (undefined4 *)((long)__base + 0xc);
    do {
      *puVar19 = (int)uVar14;
      uVar14 = uVar14 + 1;
      puVar19 = puVar19 + 4;
    } while (uVar27 != uVar14);
    qsort(__base,__nmemb,0x10,FUN_00f0748c);
    uVar14 = 0;
    puVar1 = (ushort *)(param_1 + 0x88);
    do {
      uVar3 = *(ushort *)((long)__base + uVar14 * 0x10 + 4);
      if (uVar3 == 0) {
LAB_00f06aa0:
        *(undefined4 *)((long)__base + uVar14 * 0x10 + 8) = 0;
      }
      else {
        uVar4 = *(ushort *)((long)__base + uVar14 * 0x10 + 6);
        if (uVar4 == 0) goto LAB_00f06aa0;
        iVar22 = *(int *)(param_1 + 0x78);
        puVar25 = *(ushort **)(param_1 + 0x88);
        uVar5 = *puVar25;
        iVar6 = 0;
        if (iVar22 != 0) {
          iVar6 = (int)((uint)uVar3 + iVar22 + -1) / iVar22;
        }
        iVar6 = iVar6 * iVar22;
        if (*(int *)(param_1 + 0x70) < (int)(iVar6 + (uint)uVar5)) {
          iVar13 = *(int *)(param_1 + 0x80);
          puVar29 = (ushort *)0x0;
          local_90 = 0;
          iVar22 = 0x40000000;
          iVar28 = 0x40000000;
        }
        else {
          iVar22 = 0x40000000;
          puVar26 = puVar1;
          puVar30 = (ushort *)0x0;
          iVar9 = 0x40000000;
          do {
            iVar8 = FUN_00f074e0(puVar25,uVar5,iVar6,&local_8c);
            iVar13 = *(int *)(param_1 + 0x80);
            puVar29 = puVar30;
            iVar28 = iVar9;
            if (iVar13 == 0) {
              puVar29 = puVar26;
              iVar28 = iVar8;
              if (iVar9 <= iVar8) {
                puVar29 = puVar30;
                iVar28 = iVar9;
              }
            }
            else if (((int)(iVar8 + (uint)uVar4) <= *(int *)(param_1 + 0x74)) &&
                    ((iVar8 < iVar9 || ((iVar8 == iVar9 && (local_8c < iVar22)))))) {
              puVar29 = puVar26;
              iVar22 = local_8c;
              iVar28 = iVar8;
            }
            puVar26 = puVar25 + 4;
            puVar25 = *(ushort **)puVar26;
            uVar5 = *puVar25;
            puVar30 = puVar29;
            iVar9 = iVar28;
          } while ((int)(iVar6 + (uint)uVar5) <= *(int *)(param_1 + 0x70));
          if (puVar29 == (ushort *)0x0) {
            local_90 = 0;
          }
          else {
            local_90 = (uint)**(ushort **)puVar29;
          }
        }
        if (iVar13 == 1) {
          puVar26 = *(ushort **)puVar1;
          uVar5 = *puVar26;
          puVar25 = puVar26;
          while (puVar30 = puVar1, (int)(uint)uVar5 < iVar6) {
            puVar25 = *(ushort **)(puVar25 + 4);
            uVar5 = *puVar25;
          }
          for (; puVar25 != (ushort *)0x0; puVar25 = *(ushort **)(puVar25 + 4)) {
            uVar18 = (uint)*puVar25 - iVar6;
            puVar20 = puVar26;
            do {
              puVar26 = puVar20;
              puVar15 = puVar30;
              puVar20 = *(ushort **)(puVar26 + 4);
              puVar30 = puVar26 + 4;
            } while ((int)(uint)*puVar20 <= (int)uVar18);
            iVar9 = FUN_00f074e0(puVar26,uVar18,iVar6,&local_8c);
            if (((iVar9 <= iVar28) && ((int)(iVar9 + (uint)uVar4) < *(int *)(param_1 + 0x74))) &&
               (((iVar13 = local_8c, iVar9 < iVar28 || (local_8c < iVar22)) ||
                (((int)uVar18 < (int)local_90 && (iVar13 = iVar22, local_8c == iVar22)))))) {
              iVar22 = iVar13;
              puVar29 = puVar15;
              local_90 = uVar18;
              iVar28 = iVar9;
            }
            puVar30 = puVar15;
          }
        }
        if (((puVar29 == (ushort *)0x0) ||
            (iVar22 = iVar28 + (uint)uVar4, *(int *)(param_1 + 0x74) < iVar22)) ||
           (puVar16 = *(undefined2 **)(param_1 + 0x90), puVar16 == (undefined2 *)0x0)) {
          *(undefined4 *)((long)__base + uVar14 * 0x10 + 8) = 0xffffffff;
        }
        else {
          puVar16[1] = (short)iVar22;
          *puVar16 = (short)local_90;
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(puVar16 + 4);
          puVar25 = *(ushort **)puVar29;
          if ((int)(uint)*puVar25 < (int)local_90) {
            puVar29 = puVar25 + 4;
            puVar25 = *(ushort **)puVar29;
          }
          *(undefined2 **)puVar29 = puVar16;
          puVar26 = puVar25 + 4;
          iVar22 = local_90 + uVar3;
          puVar30 = *(ushort **)puVar26;
          while ((puVar29 = puVar30, puVar29 != (ushort *)0x0 && ((int)(uint)*puVar29 <= iVar22))) {
            *(undefined8 *)puVar26 = *(undefined8 *)(param_1 + 0x90);
            *(ushort **)(param_1 + 0x90) = puVar25;
            puVar26 = puVar29 + 4;
            puVar25 = puVar29;
            puVar30 = *(ushort **)puVar26;
          }
          *(ushort **)(puVar16 + 4) = puVar25;
          if ((int)(uint)*puVar25 < iVar22) {
            *puVar25 = (ushort)iVar22;
          }
          *(short *)((long)__base + uVar14 * 0x10 + 10) = (short)iVar28;
          *(short *)((long)__base + uVar14 * 0x10 + 8) = (short)local_90;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar27);
    qsort(__base,__nmemb,0x10,FUN_00f074c8);
    puVar17 = (uint *)((long)__base + 0xc);
    do {
      uVar18 = 0;
      if ((short)puVar17[-1] == -1) {
        uVar18 = (uint)(*(short *)((long)puVar17 + -2) == -1);
      }
      uVar27 = uVar27 - 1;
      *puVar17 = uVar18 ^ 1;
      puVar17 = puVar17 + 4;
    } while (uVar27 != 0);
    __nmemb = 0;
  }
  if (*(uint *)(param_1 + 0xb8) != 0) {
    uVar27 = 0;
    piVar21 = (int *)(*local_c8 + 0xc);
    do {
      if (*piVar21 == 0) {
        uVar10 = 0;
        goto LAB_00f06e78;
      }
      uVar27 = uVar27 + 1;
      piVar21 = piVar21 + 4;
    } while (uVar27 < *(uint *)(param_1 + 0xb8));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar23 = 0;
    lVar24 = 0;
    uVar27 = 0;
    do {
      puVar2 = (undefined1 *)(*(long *)(param_1 + 0x68) + lVar24);
      uVar10 = FUN_00f05848(DAT_03210cf0,*puVar2);
      __nmemb = __nmemb & 0xffffffff00000000 | (ulong)*(uint *)(puVar2 + 1);
      lVar12 = FUN_00f1a1e4(uVar10,__nmemb);
      lVar11 = *(long *)(param_1 + 0xc0) + lVar23;
      uVar3 = *(ushort *)(lVar11 + 8);
      *(float *)(lVar12 + 0x18) = (float)uVar3 / *(float *)(param_1 + 0xf8);
      uVar4 = *(ushort *)(lVar11 + 10);
      *(float *)(lVar12 + 0x1c) = (float)uVar4 / *(float *)(param_1 + 0xf8);
      *(float *)(lVar12 + 0x20) =
           (float)(((uint)uVar3 + (uint)*(ushort *)(lVar11 + 4)) - 1) / *(float *)(param_1 + 0xf8);
      *(float *)(lVar12 + 0x24) =
           (float)(((uint)uVar4 + (uint)*(ushort *)(lVar11 + 6)) - 1) / *(float *)(param_1 + 0xf8);
      FUN_00f05f98(param_1,puVar2,puVar2);
      uVar27 = uVar27 + 1;
      lVar24 = lVar24 + 9;
      lVar23 = lVar23 + 0x10;
    } while (uVar27 < *(uint *)(param_1 + 0x60));
  }
  uVar10 = 1;
LAB_00f06e78:
  if (*(long *)(lVar7 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}




void FUN_00f06eb8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 8 + (ulong)param_2);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 9;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -9;
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
        *puVar4 = *puVar2;
        puVar4 = (undefined8 *)((long)puVar4 + 9);
        puVar2 = (undefined8 *)((long)puVar2 + 9);
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00f06f48(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00f077c8(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 << 4;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        lVar3 = lVar3 + 0x10;
        *puVar1 = param_3;
        puVar1[1] = param_4;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00f06fd8(long param_1,long param_2)

{
  void *__base;
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  ulong __nmemb;
  int *piVar10;
  undefined8 local_70 [5];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x60);
  __nmemb = (ulong)uVar1;
  if (uVar1 != 0) {
    piVar10 = *(int **)(param_2 + 0x30);
    do {
      while (*piVar10 != 0) {
        ClearExclusiveLocal();
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar3) {
        *piVar10 = 100;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = FUN_00f016d4(piVar10 + (ulong)(uint)piVar10[10] * 4 + 2,uVar1 << 2 | 1);
    __base = (void *)(lVar6 + 1U & 0xfffffffffffffffe);
    *piVar10 = 0;
    if (__base != (void *)0x0) {
      puVar7 = (undefined2 *)((long)__base + 2);
      puVar8 = (undefined2 *)(*(long *)(param_1 + 0x68) + 3);
      uVar9 = __nmemb;
      do {
        uVar9 = uVar9 - 1;
        puVar7[-1] = puVar8[-1];
        *puVar7 = *puVar8;
        puVar7 = puVar7 + 2;
        puVar8 = (undefined2 *)((long)puVar8 + 9);
      } while (uVar9 != 0);
      qsort(__base,__nmemb,4,FUN_00f07118);
      local_70[0] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20) *
                             *(float *)(param_1 + 0xfc),
                             (float)*(undefined8 *)(param_1 + 0x100) * *(float *)(param_1 + 0xfc));
      FUN_00f07144(*(undefined8 *)(param_1 + 0xf0),(int)*(float *)(param_1 + 0xf8),__base,__nmemb,
                   local_70,*(undefined1 *)(param_1 + 0x108));
      FUN_00f0784c(local_70,param_1 + 0xd8,*(undefined8 *)(param_1 + 0xf0));
      FUN_0199c960(param_2,local_70,1);
      *(undefined1 *)(param_1 + 0x108) = 0;
    }
  }
  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10c));
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

