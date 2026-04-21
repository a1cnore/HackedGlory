// functions/019ae — 17 functions
#include "libGameKindred.h"




void FUN_019ae0ec(long param_1,int param_2,int param_3,byte *param_4,undefined1 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = 8 >> (ulong)(uVar2 & 0x1f);
  if ((int)uVar4 < 8) {
    if (param_2 < param_3) {
      do {
        if (0 < iVar3) {
          lVar9 = 0;
          uVar10 = 0;
          pbVar6 = param_4;
          do {
            param_4 = pbVar6;
            if (((uint)lVar9 & (1 << (ulong)(uVar2 & 0x1f)) - 1U) == 0) {
              param_4 = pbVar6 + 1;
              uVar10 = (uint)*pbVar6;
            }
            uVar1 = uVar10 & (1 << (ulong)(uVar4 & 0x1f)) - 1U;
            uVar10 = uVar10 >> (ulong)(uVar4 & 0x1f);
            param_5[lVar9] = (char)((uint)*(undefined4 *)(lVar7 + (ulong)uVar1 * 4) >> 8);
            lVar9 = lVar9 + 1;
            pbVar6 = param_4;
          } while (iVar3 != (int)lVar9);
          param_5 = param_5 + (ulong)(iVar3 - 1) + 1;
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
  }
  else if (param_2 < param_3) {
    lVar9 = (ulong)(iVar3 - 1) + 1;
    do {
      pbVar6 = param_4;
      if (0 < iVar3) {
        pbVar6 = param_4 + lVar9;
        puVar8 = param_5;
        iVar5 = iVar3;
        do {
          iVar5 = iVar5 + -1;
          *puVar8 = (char)((uint)*(undefined4 *)(lVar7 + (ulong)*param_4 * 4) >> 8);
          param_4 = param_4 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar5 != 0);
        param_5 = param_5 + lVar9;
      }
      param_2 = param_2 + 1;
      param_4 = pbVar6;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_019ae1cc(uint *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  code *pcVar17;
  uint *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined2 local_78;
  undefined1 local_76;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (*param_1 < 4) {
    uVar1 = param_1[2];
    lVar11 = (long)(int)uVar1;
    switch(*param_1) {
    case 0:
      puVar8 = param_5;
      uVar9 = param_2;
      if (param_2 == 0) {
        uVar9 = *param_5 - 0x1000000 & 0xff00ff00 | *param_5 & 0xff00ff;
        *param_5 = uVar9;
        if (1 < (int)uVar1) {
          lVar12 = (ulong)uVar1 - 1;
          do {
            puVar8 = puVar8 + 1;
            lVar12 = lVar12 + -1;
            uVar9 = (*puVar8 & 0xff00ff00) + (uVar9 & 0xff00ff00) & 0xff00ff00 |
                    (*puVar8 & 0xff00ff) + (uVar9 & 0xff00ff) & 0xff00ff;
            *puVar8 = uVar9;
          } while (lVar12 != 0);
        }
        uVar9 = 1;
        puVar8 = param_5 + lVar11;
      }
      if ((int)uVar9 < (int)param_3) {
        uVar7 = param_1[1];
        iVar2 = 1 << (ulong)(uVar7 & 0x1f);
        uVar3 = (iVar2 - 1U) + uVar1 >> (ulong)(uVar7 & 0x1f);
        puVar18 = puVar8 + -lVar11;
        puVar20 = puVar8 + -1;
        puVar13 = (uint *)(*(long *)(param_1 + 4) +
                          (long)(int)(uVar3 * ((int)uVar9 >> (uVar7 & 0x1f))) * 4);
        do {
          *puVar8 = (*puVar8 & 0xff00ff00) + (puVar8[-lVar11] & 0xff00ff00) & 0xff00ff00 |
                    (*puVar8 & 0xff00ff) + (puVar8[-lVar11] & 0xff00ff) & 0xff00ff;
          if ((int)(uVar1 & -iVar2) < 2) {
            uVar21 = 1;
            puVar15 = puVar13;
          }
          else {
            iVar10 = 1;
            uVar21 = 1;
            puVar14 = puVar13;
            do {
              puVar15 = puVar14 + 1;
              iVar5 = iVar2 - iVar10;
              if (iVar5 != 0 && iVar10 <= iVar2) {
                pcVar17 = (code *)(&DAT_0321a7f0)[*puVar14 >> 8 & 0xf];
                uVar16 = -(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2;
                iVar10 = iVar5;
                do {
                  puVar14 = (uint *)((long)puVar8 + uVar16);
                  uVar7 = (*pcVar17)(puVar14[-1],(long)puVar18 + uVar16);
                  iVar10 = iVar10 + -1;
                  uVar16 = uVar16 + 4;
                  *puVar14 = (*puVar14 & 0xff00ff00) + (uVar7 & 0xff00ff00) & 0xff00ff00 |
                             (*puVar14 & 0xff00ff) + (uVar7 & 0xff00ff) & 0xff00ff;
                } while (iVar10 != 0);
                uVar21 = (ulong)(uint)(iVar5 + (int)uVar21);
              }
              iVar10 = 0;
              puVar14 = puVar15;
            } while ((int)uVar21 < (int)(uVar1 & -iVar2));
          }
          if ((int)uVar21 < (int)uVar1) {
            uVar16 = -(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2;
            pcVar17 = (code *)(&DAT_0321a7f0)[*puVar15 >> 8 & 0xf];
            iVar10 = uVar1 - (int)uVar21;
            do {
              puVar19 = (undefined4 *)((long)puVar20 + uVar16);
              uVar7 = (*pcVar17)(*puVar19,(long)puVar18 + uVar16);
              iVar10 = iVar10 + -1;
              uVar16 = uVar16 + 4;
              puVar19[1] = (puVar19[1] & 0xff00ff00) + (uVar7 & 0xff00ff00) & 0xff00ff00 |
                           (puVar19[1] & 0xff00ff) + (uVar7 & 0xff00ff) & 0xff00ff;
            } while (iVar10 != 0);
          }
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + lVar11;
          puVar18 = puVar18 + lVar11;
          puVar15 = puVar13 + (int)uVar3;
          if ((uVar9 & iVar2 - 1U) != 0) {
            puVar15 = puVar13;
          }
          puVar20 = puVar20 + lVar11;
          puVar13 = puVar15;
        } while (uVar9 != param_3);
      }
      if (param_1[3] != param_3) {
        memcpy(param_5 + -lVar11,param_5 + (int)(uVar1 * (~param_2 + param_3)),lVar11 << 2);
      }
      break;
    case 1:
      if ((int)param_2 < (int)param_3) {
        uVar7 = param_1[1];
        uVar3 = 1 << (ulong)(uVar7 & 0x1f);
        uVar9 = uVar1 & -uVar3;
        uVar4 = (uVar3 - 1) + uVar1 >> (ulong)(uVar7 & 0x1f);
        puVar19 = (undefined4 *)
                  (*(long *)(param_1 + 4) +
                  (long)(int)(uVar4 * ((int)param_2 >> (uVar7 & 0x1f))) * 4);
        do {
          local_76 = 0;
          local_78 = 0;
          puVar8 = param_5 + lVar11;
          puVar23 = puVar19;
          if (0 < (int)uVar9) {
            puVar18 = param_5 + (int)uVar9;
            puVar22 = puVar19;
            do {
              puVar23 = puVar22 + 1;
              local_78 = (undefined2)*puVar22;
              local_76 = (undefined1)((uint)*puVar22 >> 0x10);
              (*DAT_0321a8d0)(&local_78,param_5,(ulong)uVar3);
              param_5 = (uint *)((long)param_5 +
                                (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
              puVar22 = puVar23;
            } while (param_5 < puVar18);
          }
          if (param_5 < puVar8) {
            local_78 = (undefined2)*puVar23;
            local_76 = (undefined1)((uint)*puVar23 >> 0x10);
            (*DAT_0321a8d0)(&local_78,param_5,uVar1 - uVar9);
            param_5 = param_5 + (int)(uVar1 - uVar9);
          }
          param_2 = param_2 + 1;
          puVar23 = puVar19 + (int)uVar4;
          if ((param_2 & uVar3 - 1) != 0) {
            puVar23 = puVar19;
          }
          puVar19 = puVar23;
        } while (param_2 != param_3);
      }
      break;
    case 2:
      (*DAT_0321a8c8)(param_5,uVar1 * (param_3 - param_2));
      break;
    case 3:
      puVar8 = param_4;
      if ((param_4 == param_5) && (uVar9 = param_1[1], 0 < (int)uVar9)) {
        uVar9 = ((uVar1 + (1 << (ulong)(uVar9 & 0x1f))) - 1 >> (ulong)(uVar9 & 0x1f)) *
                (param_3 - param_2);
        memmove(param_4 + ((long)(int)(uVar1 * (param_3 - param_2)) - (long)(int)uVar9),param_4,
                -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2);
        puVar8 = param_4 + ((long)(int)(uVar1 * (param_3 - param_2)) - (long)(int)uVar9);
        param_5 = param_4;
      }
      FUN_019ae728(param_1,param_2,param_3,puVar8,param_5);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019ae728(long param_1,int param_2,int param_3,uint *param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar4 = 8 >> (ulong)(uVar2 & 0x1f);
  if ((int)uVar4 < 8) {
    if (param_2 < param_3) {
      do {
        if (0 < iVar3) {
          lVar9 = 0;
          uVar10 = 0;
          puVar6 = param_4;
          do {
            param_4 = puVar6;
            if (((uint)lVar9 & (1 << (ulong)(uVar2 & 0x1f)) - 1U) == 0) {
              param_4 = puVar6 + 1;
              uVar10 = *puVar6 >> 8 & 0xff;
            }
            uVar1 = uVar10 & (1 << (ulong)(uVar4 & 0x1f)) - 1U;
            uVar10 = uVar10 >> (ulong)(uVar4 & 0x1f);
            param_5[lVar9] = *(undefined4 *)(lVar7 + (ulong)uVar1 * 4);
            lVar9 = lVar9 + 1;
            puVar6 = param_4;
          } while (iVar3 != (int)lVar9);
          param_5 = param_5 + (ulong)(iVar3 - 1) + 1;
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
  }
  else if (param_2 < param_3) {
    lVar9 = (ulong)(iVar3 - 1) + 1;
    do {
      puVar6 = param_4;
      if (0 < iVar3) {
        puVar6 = param_4 + lVar9;
        puVar8 = param_5;
        iVar5 = iVar3;
        do {
          iVar5 = iVar5 + -1;
          *puVar8 = *(undefined4 *)(lVar7 + (ulong)(*param_4 >> 8 & 0xff) * 4);
          param_4 = param_4 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar5 != 0);
        param_5 = param_5 + lVar9;
      }
      param_2 = param_2 + 1;
      param_4 = puVar6;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_019ae808(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      param_3[2] = (char)uVar1;
      *param_3 = (char)((uint)uVar1 >> 0x10);
      param_3[1] = (char)((uint)uVar1 >> 8);
      param_3 = param_3 + 3;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_019ae83c(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      param_3[2] = (char)uVar1;
      *param_3 = (char)((uint)uVar1 >> 0x10);
      param_3[1] = (char)((uint)uVar1 >> 8);
      param_3[3] = (char)((uint)uVar1 >> 0x18);
      param_3 = param_3 + 4;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_019ae878(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (byte)uVar1 & 0xf0 | (byte)(uVar1 >> 0x1c);
      param_3[1] = (byte)(uVar1 >> 0x10) & 0xf0 | (byte)(uVar1 >> 0xc) & 0xf;
      param_3 = param_3 + 2;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_019ae8ac(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (byte)(uVar1 >> 5) & 0xe0 | (byte)(uVar1 >> 3) & 0x1f;
      param_3[1] = (byte)(uVar1 >> 0x10) & 0xf8 | (byte)(uVar1 >> 0xd) & 7;
      param_3 = param_3 + 2;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_019ae8e4(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *param_3 = (char)uVar1;
      param_3[1] = (char)((uint)uVar1 >> 8);
      param_3[2] = (char)((uint)uVar1 >> 0x10);
      param_3 = param_3 + 3;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}




void FUN_019ae918(uint *param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar5;
  ulong uVar6;
  uint *puVar3;
  
  uVar6 = (ulong)param_2;
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = DAT_0321a8d8;
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = DAT_0321a888;
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = DAT_0321a870;
    break;
  case 3:
    memcpy(param_4,param_1,-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
    return;
  case 4:
    if ((int)param_2 < 1) {
      return;
    }
    puVar2 = param_1;
    do {
      puVar5 = puVar2 + 1;
      uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
      *param_4 = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar2 = puVar5;
      param_4 = param_4 + 1;
    } while (puVar5 < param_1 + (int)param_2);
    return;
  case 5:
    UNRECOVERED_JUMPTABLE = DAT_0321a8b0;
    break;
  case 6:
    UNRECOVERED_JUMPTABLE = DAT_0321a7e8;
    break;
  case 7:
    (*DAT_0321a888)(param_1,uVar6,param_4);
    goto LAB_019aea08;
  case 8:
    memcpy(param_4,param_1,-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
LAB_019aea08:
    uVar4 = 0;
LAB_019aea58:
                    /* WARNING: Could not recover jumptable at 0x019aea6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0321a748)(param_4,uVar4,uVar6,1,0);
    return;
  case 9:
    if (0 < (int)param_2) {
      puVar2 = param_1;
      puVar5 = param_4;
      do {
        puVar3 = puVar2 + 1;
        uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
        *puVar5 = uVar1 >> 0x10 | uVar1 << 0x10;
        puVar2 = puVar3;
        puVar5 = puVar5 + 1;
      } while (puVar3 < param_1 + (int)param_2);
    }
    uVar4 = 1;
    goto LAB_019aea58;
  case 10:
    (*DAT_0321a8b0)(param_1,uVar6,param_4);
                    /* WARNING: Could not recover jumptable at 0x019aeaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0321a740)(param_4,uVar6,1,0);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x019ae9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar6,param_4);
  return;
}




void FUN_019aeab0(byte *param_1,uint param_2,uint param_3,uint *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((int)param_3 < 1) {
    if (0 < (int)param_2) {
      uVar5 = (ulong)param_2;
      do {
        uVar5 = uVar5 - 1;
        *param_4 = (uint)*param_1 << 8 | 0xff000000;
        param_1 = param_1 + 1;
        param_4 = param_4 + 1;
      } while (uVar5 != 0);
    }
  }
  else if (0 < (int)param_2) {
    uVar5 = 0;
    uVar3 = (1 << (ulong)(param_3 & 0x1f)) - 1;
    uVar6 = 0xff000000;
    do {
      pbVar1 = param_1 + uVar5;
      uVar4 = (uint)uVar5;
      uVar5 = uVar5 + 1;
      uVar2 = 0xff000000;
      if ((uVar3 & uVar4) != 0) {
        uVar2 = uVar6;
      }
      uVar6 = (uint)*pbVar1 << (ulong)(((uVar3 & uVar4) << (ulong)(3 - param_3 & 0x1f)) + 8 & 0x1f)
              | uVar2;
      param_4[(int)(uVar4 >> (ulong)(param_3 & 0x1f))] = uVar6;
    } while (param_2 != uVar5);
  }
  return;
}




void FUN_019aeb44(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_FUN_02bf7450;
  if (PTR_LOOP_02bf7460 != PTR_FUN_02bf7450) {
    memcpy(&DAT_0321a7f0,&PTR_FUN_02baf920,0x80);
    DAT_0321a898 = FUN_019ad894;
    DAT_0321a8c8 = FUN_019ad8d0;
    DAT_0321a8b8 = FUN_019ad910;
    DAT_0321a8d0 = FUN_019ad96c;
    DAT_0321a8d8 = FUN_019ae808;
    DAT_0321a888 = FUN_019ae83c;
    DAT_0321a8b0 = FUN_019ae878;
    DAT_0321a7e8 = FUN_019ae8ac;
    DAT_0321a870 = FUN_019ae8e4;
    DAT_0321a890 = FUN_019aecb4;
    DAT_0321a880 = FUN_019aed50;
    DAT_0321a8a0 = FUN_019aede8;
    DAT_0321a8c0 = FUN_019aee30;
    DAT_0321a878 = FUN_019aee84;
    DAT_0321a8e0 = FUN_019aef50;
    DAT_0321a8a8 = FUN_019af01c;
    if ((puVar1 != (undefined *)0x0) && (iVar2 = (*(code *)puVar1)(4), iVar2 != 0)) {
      FUN_019af7c0();
    }
    PTR_LOOP_02bf7460 = PTR_FUN_02bf7450;
  }
  return;
}




float FUN_019aecb4(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  
  if (param_1 >> 0x10 == 0) {
    iVar4 = 0;
    iVar3 = 1;
    uVar5 = param_1;
    do {
      uVar2 = uVar5 >> 1;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 * 2;
      bVar1 = 0x1ff < uVar5;
      uVar5 = uVar2;
    } while (bVar1);
    dVar6 = (double)(*(float *)(&DAT_01e1d6c4 + (ulong)uVar2 * 4) + (float)iVar4);
    if (0xfff < param_1) {
      dVar6 = (double)((iVar3 - 1U & param_1) * 0x17 >> 4) / (double)param_1 + dVar6;
    }
  }
  else {
    dVar6 = log((double)param_1);
    dVar6 = dVar6 * 1.4426950408889634;
  }
  return (float)dVar6;
}




float FUN_019aed50(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  
  if (param_1 >> 0x10 == 0) {
    iVar4 = 1;
    iVar3 = 0;
    uVar5 = param_1;
    do {
      uVar2 = uVar5 >> 1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 * 2;
      bVar1 = 0x1ff < uVar5;
      uVar5 = uVar2;
    } while (bVar1);
    return (*(float *)(&DAT_01e1d6c4 + (ulong)uVar2 * 4) + (float)iVar3) * (float)param_1 +
           (float)((iVar4 - 1U & param_1) * 0x17 >> 4);
  }
  dVar6 = log((double)param_1);
  return (float)((double)param_1 * 1.4426950408889634 * dVar6);
}




undefined1  [16] FUN_019aede8(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = 0.0;
  if (4 < param_2) {
    lVar3 = 0;
    dVar4 = 0.0;
    do {
      lVar1 = lVar3 * 4;
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 1;
      dVar4 = dVar4 + (double)(*(int *)(param_1 + 0x10 + lVar1) * (iVar2 + 2U >> 1));
    } while ((ulong)(param_2 - 2) - 2 != lVar3);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar4;
  return auVar5;
}




undefined1  [16] FUN_019aee30(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar5 = 0.0;
  if (4 < param_3) {
    lVar4 = 0;
    dVar5 = 0.0;
    do {
      lVar1 = lVar4 * 4;
      lVar2 = lVar4 * 4;
      iVar3 = (int)lVar4;
      lVar4 = lVar4 + 1;
      dVar5 = dVar5 + (double)(int)((*(int *)(param_2 + 0x10 + lVar2) +
                                    *(int *)(param_1 + 0x10 + lVar1)) * (iVar3 + 2U >> 1));
    } while ((ulong)(param_3 - 2) - 2 != lVar4);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar5;
  return auVar6;
}




void FUN_019aee84(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 < 2) {
    uVar3 = 0;
    iVar5 = 0;
    iVar4 = 1;
  }
  else {
    uVar3 = (ulong)(param_3 - 1);
    iVar5 = 0;
    iVar4 = 1;
    uVar7 = uVar3;
    iVar8 = *param_2;
    piVar6 = param_2;
    do {
      piVar6 = piVar6 + 1;
      iVar1 = *piVar6;
      if (iVar8 != iVar1) {
        uVar9 = (ulong)(iVar8 != 0);
        iVar8 = *(int *)((long)param_1 + uVar9 * 4);
        if (2 < iVar5) {
          iVar8 = iVar8 + 1;
        }
        *(int *)((long)param_1 + uVar9 * 4) = iVar8;
        lVar2 = (ulong)(2 < iVar5) * 4 + uVar9 * 8;
        *(int *)((long)param_1 + lVar2 + 8) = *(int *)((long)param_1 + lVar2 + 8) + iVar4;
        iVar4 = 0;
      }
      iVar5 = iVar4;
      iVar4 = iVar5 + 1;
      uVar7 = uVar7 - 1;
      iVar8 = iVar1;
    } while (uVar7 != 0);
  }
  uVar3 = (ulong)(param_2[uVar3] != 0);
  iVar8 = *(int *)((long)param_1 + uVar3 * 4);
  if (2 < iVar5) {
    iVar8 = iVar8 + 1;
  }
  *(int *)((long)param_1 + uVar3 * 4) = iVar8;
  lVar2 = (ulong)(2 < iVar5) * 4 + uVar3 * 8;
  *(int *)((long)param_1 + lVar2 + 8) = *(int *)((long)param_1 + lVar2 + 8) + iVar4;
  return;
}




void FUN_019aef50(undefined8 *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  iVar4 = *param_2;
  iVar5 = *param_3;
  if (param_4 < 2) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    uVar6 = (ulong)(param_4 - 1);
    do {
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      iVar1 = iVar5 + iVar4;
      iVar4 = *param_2;
      iVar5 = *param_3;
      iVar3 = iVar7 + 1;
      if (iVar1 != iVar5 + iVar4) {
        uVar8 = (ulong)(iVar1 != 0);
        iVar1 = *(int *)((long)param_1 + uVar8 * 4);
        if (2 < iVar7) {
          iVar1 = iVar1 + 1;
        }
        *(int *)((long)param_1 + uVar8 * 4) = iVar1;
        lVar2 = (ulong)(2 < iVar7) * 4 + uVar8 * 8;
        *(int *)((long)param_1 + lVar2 + 8) = *(int *)((long)param_1 + lVar2 + 8) + iVar7 + 1;
        iVar3 = 0;
      }
      iVar7 = iVar3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = (ulong)(iVar4 + iVar5 != 0);
  iVar4 = *(int *)((long)param_1 + uVar6 * 4);
  if (2 < iVar7) {
    iVar4 = iVar4 + 1;
  }
  *(int *)((long)param_1 + uVar6 * 4) = iVar4;
  lVar2 = (ulong)(2 < iVar7) * 4 + uVar6 * 8;
  *(int *)((long)param_1 + lVar2 + 8) = iVar7 + *(int *)((long)param_1 + lVar2 + 8) + 1;
  return;
}

