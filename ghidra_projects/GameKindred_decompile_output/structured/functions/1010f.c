// functions/1010f — 193 functions
#include "GameKindred.h"




void FUN_1010f0058(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  int local_88;
  int local_84;
  int local_80 [6];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  local_80[4] = 0xffffffff;
  local_80[0] = -1;
  local_80[1] = -1;
  local_80[2] = -1;
  local_80[3] = -1;
  uVar3 = FUN_1010f03b8(param_2,local_80);
  lVar11 = 0;
  do {
    uVar5 = 1 << (ulong)((uint)lVar11 & 0x1f);
    uVar1 = 1 << (ulong)((uint)lVar11 + 0x10 & 0x1f);
    if (((uVar1 | uVar5) & uVar3) == 0) break;
    local_88 = local_80[lVar11];
    plVar4 = (long *)FUN_1010ef618(*(undefined8 *)(param_1 + 0x50),&local_88,4);
    uVar5 = (uint)((uVar5 & uVar3) != 0);
    if ((uVar1 & uVar3) != 0) {
      uVar5 = uVar5 | 2;
    }
    if (plVar4 == (long *)0x0) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      local_84 = local_88;
      plVar4 = (long *)FUN_1010ef618(uVar9,&local_84,4);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(*(code *)PTR__calloc_101873640)(1,0x20);
        if (plVar4 == (long *)0x0) goto LAB_1010f0340;
        *plVar4 = param_2;
        *(int *)((long)plVar4 + 0x14) = local_84;
        lVar6 = FUN_1010ef428(uVar9,&local_84,4,plVar4);
        if (lVar6 == 0) {
          (*(code *)PTR__free_101873628)(plVar4);
          goto LAB_1010f0340;
        }
      }
LAB_1010f0184:
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))
                  (param_2,local_88,uVar5,*(undefined8 *)(param_1 + 0x38),plVar4[3]);
      }
      *(uint *)(plVar4 + 2) = uVar5;
    }
    else if (*(uint *)(plVar4 + 2) != uVar5) goto LAB_1010f0184;
    lVar11 = lVar11 + 1;
  } while (lVar11 < 5);
  iVar10 = (int)lVar11;
  if (0 < *(int *)(param_2 + 0x4c)) {
    lVar11 = 0;
    do {
      local_88 = *(int *)(param_2 + lVar11 * 4 + 0x38);
      if (0 < iVar10) {
        lVar6 = 0;
        do {
          if (local_88 == local_80[lVar6]) {
            local_88 = -1;
            goto LAB_1010f0314;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar10);
      }
      if ((local_88 == -1) ||
         (plVar4 = (long *)FUN_1010ef618(*(undefined8 *)(param_1 + 0x50),&local_88,4),
         plVar4 == (long *)0x0)) goto LAB_1010f0314;
      lVar6 = *(long *)(param_2 + 0x10);
      if (lVar6 == 0) {
LAB_1010f02e8:
        if (*(code **)(param_1 + 0x30) != (code *)0x0) {
          (**(code **)(param_1 + 0x30))
                    (param_2,local_88,4,*(undefined8 *)(param_1 + 0x38),plVar4[3]);
        }
        FUN_1010f1bb8(*(undefined8 *)(param_1 + 0x50),local_88);
      }
      else {
        plVar7 = *(long **)(lVar6 + 0x388);
        if ((plVar7 == (long *)0x0) || ((ulong)plVar7[3] < 2)) {
          bVar2 = true;
        }
        else if (*plVar4 == param_2) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar7;
            if (lVar8 == param_2) {
              bVar2 = false;
              *plVar4 = *(long *)plVar7[2];
              goto LAB_1010f02a0;
            }
          }
          bVar2 = false;
          *plVar4 = lVar8;
        }
        else {
          bVar2 = false;
        }
LAB_1010f02a0:
        plVar7 = *(long **)(lVar6 + 0x380);
        if ((plVar7 == (long *)0x0) || ((ulong)plVar7[3] < 2)) {
          if (bVar2) goto LAB_1010f02e8;
        }
        else if (*plVar4 == param_2) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar7;
            if (lVar6 == param_2) {
              *plVar4 = *(long *)plVar7[2];
              goto LAB_1010f0314;
            }
          }
          *plVar4 = lVar6;
        }
      }
LAB_1010f0314:
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 0x4c));
  }
  _memcpy((void *)(param_2 + 0x38),local_80,(long)iVar10 << 2);
  *(int *)(param_2 + 0x4c) = iVar10;
LAB_1010f0340:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




bool FUN_1010f0394(long param_1)

{
  if (param_1 != 0) {
    return *(char *)(param_1 + 0x58) != '\0';
  }
  return false;
}




void FUN_1010f03b0(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}




ulong FUN_1010f03b8(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x8a99) == '\0') &&
     (plVar3 = *(long **)(param_1 + 0x10), plVar3 != (long *)0x0)) {
    iVar6 = *(int *)(param_1 + 0x18);
    if (iVar6 - 3U < 0xd) {
      *plVar3 = param_1;
    }
    uVar4 = 0;
    switch(iVar6) {
    case 4:
    case 5:
      lVar5 = 0;
      uVar4 = 0;
      iVar6 = 0;
      do {
        iVar2 = *(int *)((long)plVar3 + lVar5 + 0x1d8);
        if (iVar2 != -1) {
          param_2[iVar6] = iVar2;
          uVar1 = iVar6 + 0x10;
          iVar6 = iVar6 + 1;
          uVar4 = (ulong)(1 << (ulong)(uVar1 & 0x1f) | (uint)uVar4);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 8);
      if ((int)plVar3[0xcb] == 1) {
        *param_2 = (int)plVar3[0x3a];
        uVar4 = 1;
      }
      break;
    case 6:
      uVar4 = FUN_1010e2364(plVar3,param_2,5);
      return uVar4;
    case 8:
    case 9:
      uVar4 = FUN_1010e237c(plVar3,param_2,5);
      return uVar4;
    case 10:
      if (*(code **)(plVar3[0x61] + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010f048c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(plVar3[0x61] + 0x50))(plVar3,param_2,5);
        return uVar4;
      }
      goto LAB_1010f0490;
    case 0xb:
    case 0xc:
    case 0xd:
      uVar4 = FUN_1010ea96c(plVar3,param_2,5);
      return uVar4;
    }
  }
  else {
LAB_1010f0490:
    uVar4 = 0;
  }
  return uVar4;
}




void FUN_1010f04c4(long *param_1,long param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  int iVar12;
  ushort *puVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long local_88;
  int local_7c [5];
  long local_68;
  
  lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar15;
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar8 = 1;
    goto LAB_1010f07ac;
  }
  FUN_1010f07dc(param_1,&local_88);
  iVar6 = (int)local_88;
  if (param_4 <= local_88) {
    iVar6 = param_4;
  }
  if (local_88 < 0) {
    iVar6 = param_4;
  }
  plVar14 = (long *)param_1[1];
  if (plVar14 == (long *)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    do {
      uVar5 = FUN_1010f03b8(plVar14,local_7c);
      uVar9 = 0;
      do {
        if ((1 << (ulong)((uint)uVar9 & 0x1f) & uVar5) == 0) {
          iVar12 = -1;
        }
        else {
          uVar16 = uVar16 + 1;
          iVar12 = local_7c[uVar9];
        }
        if ((1 << (ulong)((uint)uVar9 + 0x10 & 0x1f) & uVar5) != 0) {
          uVar16 = uVar16 + 1;
          iVar12 = local_7c[uVar9];
        }
      } while ((iVar12 != -1) && (uVar9 = uVar9 + 1, uVar9 < 5));
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  if (uVar16 + param_3 == 0 && param_3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (*(code *)PTR__malloc_101873620)((ulong)(uVar16 + param_3) << 3);
    if (lVar7 == 0) {
      uVar8 = 3;
      goto LAB_1010f07ac;
    }
  }
  if ((uVar16 == 0) || (plVar14 = (long *)param_1[1], plVar14 == (long *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar5 = FUN_1010f03b8(plVar14,local_7c);
      uVar10 = 0;
      do {
        if ((1 << (ulong)((uint)uVar10 & 0x1f) & uVar5) == 0) {
          iVar12 = -1;
        }
        else {
          piVar1 = (int *)(lVar7 + uVar9 * 8);
          *piVar1 = local_7c[uVar10];
          *(undefined2 *)(piVar1 + 1) = 1;
          uVar9 = (ulong)((int)uVar9 + 1);
          iVar12 = local_7c[uVar10];
        }
        if ((1 << (ulong)((uint)uVar10 + 0x10 & 0x1f) & uVar5) != 0) {
          piVar1 = (int *)(lVar7 + uVar9 * 8);
          *piVar1 = local_7c[uVar10];
          *(undefined2 *)(piVar1 + 1) = 4;
          uVar9 = (ulong)((int)uVar9 + 1);
          iVar12 = local_7c[uVar10];
        }
      } while ((iVar12 != -1) && (uVar10 = uVar10 + 1, uVar10 < 5));
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  if (param_3 != 0) {
    puVar11 = (ushort *)(param_2 + 4);
    uVar10 = uVar9;
    iVar12 = param_3;
    do {
      puVar2 = (undefined4 *)(lVar7 + uVar10 * 8);
      *puVar2 = *(undefined4 *)(puVar11 + -2);
      puVar13 = (ushort *)(puVar2 + 1);
      *puVar13 = 0;
      uVar4 = *puVar11;
      uVar3 = uVar4 & 1;
      if ((uVar4 & 2) != 0) {
        uVar3 = uVar4 & 1 | 2;
      }
      if ((uVar4 & 4) != 0) {
        uVar3 = uVar3 | 4;
      }
      *puVar13 = uVar3;
      uVar10 = (ulong)((int)uVar10 + 1);
      iVar12 = iVar12 + -1;
      puVar11 = puVar11 + 4;
    } while (iVar12 != 0);
    uVar9 = (ulong)(uint)((int)uVar9 + param_3);
  }
  if ((int)uVar9 == 0) {
    iVar6 = 0;
LAB_1010f0780:
    if (lVar7 != 0) goto LAB_1010f0784;
  }
  else {
    FUN_1010d909c(0,"Curl_poll(%d ds, %d ms)\n");
    iVar6 = FUN_1010f3a50(lVar7,uVar9,iVar6);
    if ((iVar6 == 0) || (param_3 == 0)) goto LAB_1010f0780;
    puVar11 = (ushort *)(param_2 + 6);
    do {
      *puVar11 = *(ushort *)(lVar7 + (ulong)uVar16 * 8 + 6) & 7;
      param_3 = param_3 + -1;
      uVar16 = uVar16 + 1;
      puVar11 = puVar11 + 4;
    } while (param_3 != 0);
LAB_1010f0784:
    (*(code *)PTR__free_101873628)(lVar7);
  }
  if (param_5 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    *param_5 = iVar6;
  }
LAB_1010f07ac:
  if (lVar15 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar8);
  }
  return;
}




void FUN_1010f07dc(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar3 = -1;
  }
  else {
    auVar4 = FUN_1010d0e58();
    lVar2 = auVar4._0_8_;
    lVar1 = FUN_1010f5360(0,0,*(undefined8 *)(param_1 + 0x48));
    *(long *)(param_1 + 0x48) = lVar1;
    lVar3 = 0;
    if (lVar2 <= *(long *)(lVar1 + 0x18)) {
      if ((lVar2 < *(long *)(lVar1 + 0x18)) || (auVar4._8_4_ < *(int *)(lVar1 + 0x20))) {
        lVar2 = FUN_1010d0e80(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),lVar2,
                              auVar4._8_8_);
        lVar3 = 1;
        if (lVar2 != 0) {
          lVar3 = lVar2;
        }
      }
      else {
        lVar3 = 0;
      }
    }
  }
  *param_2 = lVar3;
  return;
}




int FUN_1010f0880(long *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long local_68;
  
  auVar8 = FUN_1010d0e58();
  uVar5 = auVar8._8_8_;
  uVar3 = auVar8._0_8_;
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
    for (plVar7 = (long *)param_1[1]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      piVar1 = (int *)(plVar7 + 0x115e);
      if (((*(char *)(plVar7 + 0xdb) != '\0') && (plVar7[0x1161] == 0)) &&
         (iVar2 = FUN_1010ed5e8(piVar1), iVar2 != 0)) {
        return 3;
      }
      iVar2 = FUN_1010f09d0(param_1,uVar3,uVar5,plVar7);
      if ((*(char *)(plVar7 + 0xdb) != '\0') && ((iVar2 != 0 || (*piVar1 == 6)))) {
        FUN_1010ed620(piVar1);
      }
      if (iVar2 != 0) {
        iVar6 = iVar2;
      }
    }
    do {
      lVar4 = FUN_1010f5550(uVar3,uVar5,param_1[9],&local_68);
      param_1[9] = lVar4;
      if (local_68 == 0) break;
      FUN_1010f18bc(uVar3,uVar5,param_1,*(undefined8 *)(local_68 + 0x28));
    } while (local_68 != 0);
    *param_2 = *(undefined4 *)((long)param_1 + 0x1c);
    if (iVar6 < 1) {
      FUN_1010efdc4(param_1);
    }
  }
  return iVar6;
}




int FUN_1010f09d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long local_90;
  long local_88;
  int local_7c;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_73 = '\0';
  local_74 = '\0';
  local_75 = '\0';
  if (param_4 == 0) {
    iVar9 = 2;
  }
  else {
    iVar9 = 2;
    if (*(int *)(param_4 + 0x8c10) == -0x3f212453) {
      uVar19 = 0;
      plVar1 = (long *)(param_4 + 0x10);
      puVar2 = (undefined8 *)(param_4 + 0x808);
      pcVar3 = (char *)(param_4 + 0x8a99);
      local_70 = param_2;
      uStack_68 = param_3;
LAB_1010f1674:
      do {
        if (*pcVar3 != '\0') {
          FUN_1010d909c(param_4,"Pipe broke: handle %p, url = %s\n");
          if (*(uint *)(param_4 + 0x18) < 0x10) {
            if (*(uint *)(param_4 + 0x18) != 2) {
              *(undefined4 *)(param_4 + 0x18) = 2;
            }
            uVar19 = 0;
            iVar9 = -1;
          }
          else {
            iVar9 = 0;
          }
          *pcVar3 = '\0';
          *plVar1 = 0;
          goto LAB_1010f1564;
        }
        uVar10 = *(uint *)(param_4 + 0x18);
        if (*(long **)(param_4 + 0x10) != (long *)0x0) {
          if (uVar10 - 3 < 0xd) {
            **(long **)(param_4 + 0x10) = param_4;
          }
          if (0xd < uVar10 - 2) goto LAB_1010f1748;
          lVar14 = FUN_1010edb38(param_4,&local_70,uVar10 < 8);
          uVar10 = *(uint *)(param_4 + 0x18);
          if (-1 < lVar14) goto LAB_1010f1748;
          if (uVar10 == 4) {
            FUN_1010d0e80(local_70,uStack_68,*puVar2,*(undefined8 *)(param_4 + 0x810));
            pcVar16 = "Connection timed out after %ld milliseconds";
          }
          else if (uVar10 == 3) {
            FUN_1010d0e80(local_70,uStack_68,*puVar2,*(undefined8 *)(param_4 + 0x810));
            pcVar16 = "Resolving timed out after %ld milliseconds";
          }
          else if (*(long *)(param_4 + 0x78) == -1) {
            FUN_1010d0e80(local_70,uStack_68,*puVar2,*(undefined8 *)(param_4 + 0x810));
            pcVar16 = "Operation timed out after %ld milliseconds with %ld bytes received";
          }
          else {
            FUN_1010d0e80(*(undefined8 *)(param_4 + 200),*(undefined8 *)(param_4 + 0xd0),*puVar2,
                          *(undefined8 *)(param_4 + 0x810));
            pcVar16 = 
            "Operation timed out after %ld milliseconds with %ld out of %ld bytes received";
          }
          FUN_1010d9258(param_4,pcVar16);
          uVar10 = *(uint *)(param_4 + 0x18);
          if (8 < uVar10) {
            iVar9 = 0;
            bVar7 = true;
            *(undefined1 *)(*plVar1 + 0x2c8) = 1;
            uVar19 = 0x1c;
            goto switchD_1010f0a7c_caseD_1;
          }
          bVar7 = false;
          uVar19 = 0x1c;
          goto LAB_1010f1788;
        }
        if (uVar10 - 3 < 0xc) {
          FUN_1010d9258(param_4,"In state %d with no easy_conn, bail out!\n");
          return 4;
        }
LAB_1010f1748:
        bVar7 = false;
        iVar9 = 0;
        switch(uVar10) {
        case 0:
          uVar19 = FUN_1010eaa6c(param_4);
          if ((int)uVar19 != 0) goto LAB_1010f10e4;
          if (*(int *)(param_4 + 0x18) != 2) {
            *(undefined4 *)(param_4 + 0x18) = 2;
          }
          FUN_1010d231c(param_4,1);
LAB_1010f0ab0:
          bVar7 = false;
          uVar19 = 0;
          iVar9 = -1;
          break;
        case 1:
          break;
        case 2:
          FUN_1010d231c(param_4,2);
          uVar19 = FUN_1010e25cc(param_4,plVar1,&local_72,&local_73);
          if ((int)uVar19 != 0) {
            if ((int)uVar19 != 0x59) goto LAB_1010f10e4;
            if (*(int *)(param_4 + 0x18) != 1) {
              *(undefined4 *)(param_4 + 0x18) = 1;
            }
            iVar11 = FUN_1010eef88(*(long *)(param_1 + 0x28),
                                   *(undefined8 *)(*(long *)(param_1 + 0x28) + 8),param_4);
            bVar7 = false;
            iVar9 = 0;
            uVar10 = 0x1b;
            if (iVar11 != 0) {
              uVar10 = 0;
            }
            uVar19 = (ulong)uVar10;
            break;
          }
          uVar19 = FUN_1011036b4(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((int)uVar19 != 0) goto LAB_1010f0d8c;
          if (local_72 == '\0') {
            if (local_73 != '\0') goto LAB_1010f1324;
            iVar9 = *(int *)(param_4 + 0x18);
            if (*(int *)(*(long *)(param_4 + 0x10) + 0x658) == 1) {
LAB_1010f15c4:
              if (iVar9 != 5) {
                uVar10 = 5;
                goto LAB_1010f0d24;
              }
            }
            else if (iVar9 != 4) {
              uVar10 = 4;
              goto LAB_1010f0d24;
            }
            goto LAB_1010f0ab0;
          }
          uVar10 = 3;
          if (*(int *)(param_4 + 0x18) != 3) goto LAB_1010f1600;
LAB_1010f15f4:
          iVar9 = 0;
          goto LAB_1010f14dc;
        case 3:
          lVar14 = *(long *)(param_4 + 0x10);
          if (*(long *)(param_4 + 0x70) != 0) {
            FUN_1010f2820(param_4,3,2);
          }
          lVar14 = FUN_1010d14ec(lVar14,*(undefined8 *)(lVar14 + 0xc0),
                                 *(undefined4 *)(lVar14 + 0xf0));
          if (lVar14 != 0) {
            *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
            FUN_1010d909c(param_4,"Hostname was found in DNS cache\n");
            uVar19 = 0;
          }
          if (*(long *)(param_4 + 0x70) != 0) {
            FUN_1010f2868(param_4,3);
          }
          uVar10 = (uint)uVar19;
          if (lVar14 == 0) {
            uVar10 = 6;
          }
          uVar19 = (ulong)uVar10;
          FUN_1010f0058(param_1,param_4);
          if (lVar14 == 0) {
            iVar9 = 0;
          }
          else {
            if (local_73 == '\0') {
              if (*(int *)(*(long *)(param_4 + 0x10) + 0x658) == 1) {
                if (*(int *)(param_4 + 0x18) != 5) {
                  iVar9 = 5;
LAB_1010f1368:
                  *(int *)(param_4 + 0x18) = iVar9;
                }
              }
              else if (*(int *)(param_4 + 0x18) != 4) {
                iVar9 = 4;
                goto LAB_1010f1368;
              }
            }
            else {
              iVar9 = 7;
              if (*(char *)(param_1 + 0x58) == '\0') {
                iVar9 = 8;
              }
              if (*(int *)(param_4 + 0x18) != iVar9) goto LAB_1010f1368;
            }
            uVar19 = 0;
            iVar9 = -1;
          }
          bVar7 = (int)uVar19 != 0;
          break;
        case 4:
          uVar19 = FUN_1010edf04(*plVar1,0,&local_71);
          if (((int)uVar19 == 0) && (local_71 != '\0')) {
            uVar19 = FUN_1010e23e8(*plVar1,&local_73);
          }
          if (*(char *)(*plVar1 + 0x2de) == '\0') {
            if ((int)uVar19 != 0) goto LAB_1010f0d8c;
            if (local_71 == '\0') goto LAB_1010f11ec;
            if (local_73 != '\0') goto LAB_1010f1324;
            iVar9 = *(int *)(param_4 + 0x18);
            if (*(int *)(*plVar1 + 0x658) == 1) goto LAB_1010f15c4;
            if (iVar9 != 6) {
              uVar10 = 6;
              goto LAB_1010f0d24;
            }
            goto LAB_1010f0ab0;
          }
LAB_1010f0c80:
          uVar10 = 2;
          if (*(int *)(param_4 + 0x18) != 2) {
LAB_1010f0d24:
            *(uint *)(param_4 + 0x18) = uVar10;
          }
LAB_1010f0d28:
          iVar9 = -1;
          goto LAB_1010f14dc;
        case 5:
          uVar19 = FUN_1010d666c(*plVar1,&local_73);
          if (*(char *)(*plVar1 + 0x2de) != '\0') goto LAB_1010f0c80;
          if ((int)uVar19 != 0) goto LAB_1010f10e4;
          if (*(int *)(*plVar1 + 0x658) == 2) {
            uVar10 = 4;
            if (*(int *)(param_4 + 0x18) != 4) goto LAB_1010f1600;
            goto LAB_1010f15f4;
          }
LAB_1010f11ec:
          bVar7 = false;
          uVar19 = 0;
          iVar9 = 0;
          break;
        case 6:
          uVar19 = FUN_1010e2398(*plVar1,&local_73);
          if (((int)uVar19 == 0) && (local_73 != '\0')) {
LAB_1010f1324:
            cVar6 = *(char *)(param_1 + 0x58);
            uVar10 = 7;
            goto LAB_1010f1330;
          }
          if ((int)uVar19 == 0) goto LAB_1010f11ec;
          FUN_1010eabd4(param_4);
          bVar7 = true;
          FUN_1010e4bb0(plVar1,uVar19,1);
          iVar9 = 0;
          break;
        case 7:
          lVar14 = *plVar1;
          if (((*(char *)(lVar14 + 0x379) == '\0') &&
              ((long *)**(long **)(lVar14 + 0x380) != (long *)0x0)) &&
             (*(long *)**(long **)(lVar14 + 0x380) == param_4)) {
            *(undefined1 *)(lVar14 + 0x379) = 1;
            uVar10 = 8;
            goto LAB_1010f1230;
          }
          goto LAB_1010f10e4;
        case 8:
          if (*(char *)(param_4 + 0x521) != '\0') {
            *(undefined1 *)(*(long *)(param_4 + 0x10) + 0x2c8) = 0;
            uVar10 = 0xf;
            goto LAB_1010f0d24;
          }
          uVar19 = FUN_1010e4e40(plVar1,&local_74);
          if ((int)uVar19 == 0x37) {
            if (*(char *)(*plVar1 + 0x2c9) != '\0') {
              local_88 = 0;
              uVar13 = FUN_1010eb2dc(*plVar1,&local_88);
              bVar4 = (int)uVar13 == 0;
              if (bVar4) {
                uVar13 = 0x37;
              }
              bVar8 = local_88 == 0;
              bVar7 = !bVar4;
              FUN_1010eabd4(param_4);
              uVar19 = FUN_1010e4bb0(plVar1,uVar13,0);
              if (!bVar4 || bVar8) {
                (*(code *)PTR__free_101873628)(local_88);
                uVar19 = uVar13;
                goto LAB_1010f0d8c;
              }
              if ((((int)uVar19 == 0) || ((int)uVar19 == 0x37)) &&
                 (uVar19 = FUN_1010eac00(param_4,local_88,2), (int)uVar19 == 0)) {
                if (*(int *)(param_4 + 0x18) != 2) {
                  *(undefined4 *)(param_4 + 0x18) = 2;
                }
                uVar19 = 0;
                iVar9 = -1;
              }
              else {
                (*(code *)PTR__free_101873628)(local_88);
                iVar9 = 0;
              }
              break;
            }
          }
          else if ((int)uVar19 == 0) {
            if (local_74 == '\0') {
              if ((*(char *)(param_4 + 0x6d8) != '\0') && ((*(uint *)(param_4 + 0x8af0) | 2) == 6))
              {
                FUN_1010e4bb0(plVar1,0,0);
                uVar10 = 0xf;
                if (*(int *)(param_4 + 0x18) != 0xf) goto LAB_1010f0d24;
                goto LAB_1010f0d28;
              }
              uVar10 = 9;
              if (*(int *)(param_4 + 0x18) == 9) goto LAB_1010f15f4;
            }
            else {
              if (*(char *)(*(long *)(param_4 + 0x10) + 0x2d0) == '\0') {
                if (*(int *)(param_4 + 0x18) == 0xb) goto LAB_1010f0ab0;
                uVar10 = 0xb;
                goto LAB_1010f0d24;
              }
              if (*(int *)(param_4 + 0x18) == 10) goto LAB_1010f11ec;
              uVar10 = 10;
            }
LAB_1010f1600:
            iVar9 = 0;
            *(uint *)(param_4 + 0x18) = uVar10;
            goto LAB_1010f14dc;
          }
          FUN_1010eabd4(param_4);
          if (*(long *)(param_4 + 0x10) != 0) {
LAB_1010f0d7c:
            FUN_1010e4bb0(plVar1,uVar19,0);
          }
LAB_1010f0d8c:
          iVar9 = 0;
          bVar7 = true;
          break;
        case 9:
          uVar19 = FUN_1010e23c0(*plVar1,&local_74);
          if ((int)uVar19 != 0) {
LAB_1010f0d74:
            FUN_1010eabd4(param_4);
            goto LAB_1010f0d7c;
          }
          if (local_74 == '\0') goto LAB_1010f11ec;
          cVar6 = *(char *)(*(long *)(param_4 + 0x10) + 0x2d0);
          uVar10 = 10;
LAB_1010f1330:
          if (cVar6 == '\0') {
            uVar10 = uVar10 + 1;
          }
          goto LAB_1010f1334;
        case 10:
          uVar19 = FUN_1010e4f04(*plVar1,&local_7c);
          if ((int)uVar19 != 0) goto LAB_1010f0d74;
          if (local_7c == 0) goto LAB_1010f11ec;
          uVar10 = 0xb;
          if (local_7c != 1) {
            uVar10 = 9;
          }
LAB_1010f1334:
          uVar5 = *(uint *)(param_4 + 0x18);
          if (uVar5 != uVar10) {
            *(uint *)(param_4 + 0x18) = uVar10;
            iVar9 = -1;
            goto LAB_1010f14dc;
          }
          bVar7 = false;
          uVar19 = 0;
          iVar9 = -1;
          goto LAB_1010f14d0;
        case 0xb:
          FUN_10110371c(param_4,*(undefined8 *)(param_4 + 0x10));
          FUN_1010f20ac(param_1);
          if ((*(int *)(*(long *)(param_4 + 0x10) + 800) == -1) &&
             (*(int *)(*(long *)(param_4 + 0x10) + 0x324) == -1)) {
            uVar10 = 0xf;
            if (*(int *)(param_4 + 0x18) == 0xf) {
LAB_1010f1220:
              bVar7 = false;
              iVar9 = -1;
              goto LAB_1010f14d8;
            }
          }
          else {
            uVar10 = 0xc;
            if (*(int *)(param_4 + 0x18) == 0xc) goto LAB_1010f1220;
          }
LAB_1010f1230:
          bVar7 = false;
          *(uint *)(param_4 + 0x18) = uVar10;
          iVar9 = -1;
          goto LAB_1010f14d8;
        case 0xc:
          lVar14 = *plVar1;
          if (((*(char *)(lVar14 + 0x378) == '\0') &&
              ((long *)**(long **)(lVar14 + 0x388) != (long *)0x0)) &&
             (*(long *)**(long **)(lVar14 + 0x388) == param_4)) {
            *(undefined1 *)(lVar14 + 0x378) = 1;
            uVar10 = 0xd;
            goto LAB_1010f1230;
          }
          goto LAB_1010f10e4;
        case 0xd:
          local_90 = 0;
          lVar14 = *(long *)(param_4 + 0x398);
          if (((0 < lVar14) && (lVar15 = *(long *)(param_4 + 0x7c0), lVar14 < lVar15)) ||
             ((lVar14 = *(long *)(param_4 + 0x3a0), 0 < lVar14 &&
              (lVar15 = *(long *)(param_4 + 0x7b8), lVar14 < lVar15)))) {
            *(undefined4 *)(param_4 + 0x18) = 0xe;
            uVar17 = 0x4000;
            if (*(long *)(param_4 + 0x4b0) != 0) {
              uVar17 = (undefined4)*(long *)(param_4 + 0x4b0);
            }
            uVar12 = FUN_1010eaa08(lVar14,lVar15,uVar17);
            FUN_1010f1f70(param_4,uVar12);
            goto LAB_1010f10e4;
          }
          uVar19 = FUN_1010e9c00(*(undefined8 *)(param_4 + 0x10),&local_75);
          uVar10 = *(uint *)(param_4 + 0x1e4);
          if ((uVar10 & 1) == 0) {
            *(undefined1 *)(*plVar1 + 0x378) = 0;
          }
          if ((uVar10 >> 1 & 1) == 0) {
            *(undefined1 *)(*plVar1 + 0x379) = 0;
          }
          if (((((int)uVar19 == 0x38) || (local_75 != '\0')) &&
              (iVar9 = FUN_1010eb2dc(*plVar1,&local_90), iVar9 == 0)) && (local_90 != 0)) {
            bVar7 = true;
            local_75 = '\x01';
LAB_1010f1248:
            FUN_1010eabd4(param_4);
            FUN_1010e2158(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x388));
            puVar18 = (undefined8 *)**(undefined8 **)(*(long *)(param_4 + 0x10) + 0x388);
            if (puVar18 != (undefined8 *)0x0) {
              FUN_1010f1f70(*puVar18,1);
            }
            FUN_1010f20ac(param_1);
            lVar14 = *(long *)(param_4 + 0x1f8);
            if ((bool)(bVar7 | lVar14 != 0)) {
              if (bVar7) {
                uVar12 = 2;
              }
              else {
                if (local_90 != 0) {
                  (*(code *)PTR__free_101873628)();
                  lVar14 = *(long *)(param_4 + 0x1f8);
                }
                *(undefined8 *)(param_4 + 0x1f8) = 0;
                uVar12 = 3;
                local_90 = lVar14;
              }
              uVar19 = FUN_1010e4bb0(plVar1,0,0);
              if (((int)uVar19 == 0) &&
                 (uVar19 = FUN_1010eac00(param_4,local_90,uVar12), (int)uVar19 == 0)) {
                if (*(int *)(param_4 + 0x18) != 2) {
                  *(undefined4 *)(param_4 + 0x18) = 2;
                }
                bVar7 = false;
                uVar19 = 0;
                local_90 = 0;
                iVar9 = -1;
                break;
              }
LAB_1010f13d4:
              bVar7 = false;
              iVar9 = 0;
            }
            else {
              lVar14 = *(long *)(param_4 + 0x1f0);
              if (lVar14 == 0) {
                bVar7 = false;
                uVar19 = 0;
              }
              else {
                if (local_90 != 0) {
                  (*(code *)PTR__free_101873628)();
                  lVar14 = *(long *)(param_4 + 0x1f0);
                }
                *(undefined8 *)(param_4 + 0x1f0) = 0;
                bVar7 = true;
                local_90 = lVar14;
                uVar19 = FUN_1010eac00(param_4,lVar14,1);
                if ((int)uVar19 == 0) {
                  bVar7 = false;
                  uVar19 = 0;
                  local_90 = 0;
                }
              }
              if (*(int *)(param_4 + 0x18) != 0xf) {
                *(undefined4 *)(param_4 + 0x18) = 0xf;
              }
              iVar9 = -1;
            }
          }
          else {
            if ((int)uVar19 != 0) {
              if ((*(byte *)(*(long *)(*plVar1 + 0x308) + 0x7c) >> 1 & 1) == 0) {
                *(undefined1 *)(*plVar1 + 0x2c8) = 1;
              }
              FUN_1010eabd4(param_4);
              FUN_1010e4bb0(plVar1,uVar19,0);
              goto LAB_1010f13d4;
            }
            bVar7 = false;
            if (local_75 != '\0') goto LAB_1010f1248;
            bVar7 = false;
            uVar19 = 0;
            iVar9 = 0;
          }
          if (local_90 != 0) {
            (*(code *)PTR__free_101873628)();
          }
          break;
        case 0xe:
          iVar9 = FUN_1010d1dac(*plVar1);
          if (iVar9 == 0) {
            uVar19 = FUN_1010e5e20(param_4,local_70,uStack_68);
          }
          else {
            uVar19 = 0x2a;
          }
          if (((*(long *)(param_4 + 0x398) != 0) &&
              (*(long *)(param_4 + 0x398) <= *(long *)(param_4 + 0x7c0))) ||
             ((*(long *)(param_4 + 0x3a0) != 0 &&
              (*(long *)(param_4 + 0x3a0) <= *(long *)(param_4 + 0x7b8))))) goto LAB_1010f10e4;
          uVar10 = 0xd;
          if (*(int *)(param_4 + 0x18) == 0xd) {
            iVar9 = 0;
            bVar7 = false;
          }
          else {
            iVar9 = 0;
            bVar7 = false;
            *(undefined4 *)(param_4 + 0x18) = 0xd;
          }
          goto LAB_1010f14d8;
        case 0xf:
          if (*plVar1 != 0) {
            FUN_1010e2158(param_4,*(undefined8 *)(*plVar1 + 0x388));
            FUN_1010f20ac(param_1);
            uVar10 = FUN_1010e4bb0(plVar1,uVar19,0);
            if ((uint)uVar19 != 0) {
              uVar10 = (uint)uVar19;
            }
            uVar19 = (ulong)uVar10;
            if (*(long *)(param_4 + 0x10) != 0) {
              *plVar1 = 0;
            }
          }
          if ((*(char *)(param_4 + 0x6d8) != '\0') && (*(uint *)(param_4 + 0x8af0) != 6)) {
            if (*(int *)(param_4 + 0x18) == 0) {
              bVar7 = false;
              uVar10 = 0;
              iVar9 = -1;
            }
            else {
              bVar7 = false;
              uVar10 = 0;
              *(undefined4 *)(param_4 + 0x18) = 0;
              iVar9 = -1;
            }
            goto LAB_1010f14d8;
          }
          if (*(int *)(param_4 + 0x18) != 0x10) {
            bVar7 = false;
            *(undefined4 *)(param_4 + 0x18) = 0x10;
            *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            iVar9 = -1;
            break;
          }
          goto LAB_1010f180c;
        case 0x10:
          *(undefined8 *)(param_4 + 0x10) = 0;
          FUN_1010efbdc(param_4,0);
LAB_1010f10e4:
          bVar7 = false;
          iVar9 = 0;
          break;
        case 0x11:
          iVar9 = 0;
          goto LAB_1010f184c;
        default:
          return 4;
        }
switchD_1010f0a7c_caseD_1:
        uVar5 = *(uint *)(param_4 + 0x18);
LAB_1010f14d0:
        uVar10 = uVar5;
        if (uVar5 < 0x10) {
LAB_1010f14d8:
          if ((int)uVar19 != 0) {
LAB_1010f1788:
            *pcVar3 = '\0';
            lVar14 = *plVar1;
            if (lVar14 == 0) {
              if (uVar10 == 2) {
                FUN_1010eabd4(param_4);
                goto LAB_1010f17e8;
              }
LAB_1010f17f4:
              *(undefined4 *)(param_4 + 0x18) = 0x10;
              *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
            }
            else {
              *(undefined2 *)(lVar14 + 0x378) = 0;
              FUN_1010e2158(param_4,*(undefined8 *)(lVar14 + 0x380));
              FUN_1010e2158(param_4,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x388));
              FUN_1010f20ac(param_1);
              if (bVar7) {
                FUN_1010e1ccc(*plVar1,(int)uVar19 == 0x1c);
                *plVar1 = 0;
              }
LAB_1010f17e8:
              if (*(int *)(param_4 + 0x18) != 0x10) goto LAB_1010f17f4;
            }
LAB_1010f180c:
            *(undefined4 *)(param_4 + 0x20) = 1;
            *(long *)(param_4 + 0x28) = param_4;
            *(int *)(param_4 + 0x30) = (int)uVar19;
            iVar11 = FUN_1010eef88(*(long *)(param_1 + 0x20),
                                   *(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
            iVar9 = 3;
            if (iVar11 != 0) {
              iVar9 = 0;
            }
            if (*(int *)(param_4 + 0x18) != 0x11) {
              *(undefined4 *)(param_4 + 0x18) = 0x11;
            }
            break;
          }
LAB_1010f14dc:
          if (*plVar1 == 0) {
            uVar19 = 0;
          }
          else {
            iVar11 = FUN_1010d1dac();
            if (iVar11 == 0) {
              uVar19 = 0;
              uVar10 = *(uint *)(param_4 + 0x18);
            }
            else {
              *(undefined1 *)(*(long *)(param_4 + 0x10) + 0x2c8) = 1;
              uVar5 = *(uint *)(param_4 + 0x18);
              uVar10 = 0xf;
              if (0xe < uVar5) {
                uVar10 = 0x10;
              }
              if (uVar5 != uVar10) {
                *(uint *)(param_4 + 0x18) = uVar10;
                uVar19 = 0x2a;
                if (0xe < uVar5) {
                  *(int *)(*(long *)(param_4 + 0x60) + 0x1c) =
                       *(int *)(*(long *)(param_4 + 0x60) + 0x1c) + -1;
                  iVar9 = -1;
                  uVar19 = 0x2a;
                  goto LAB_1010f155c;
                }
                goto LAB_1010f1674;
              }
              iVar9 = -1;
              uVar19 = 0x2a;
              uVar10 = uVar5;
            }
          }
        }
LAB_1010f155c:
        if (uVar10 == 0x10) goto LAB_1010f180c;
LAB_1010f1564:
      } while (iVar9 == -1);
LAB_1010f184c:
      *(int *)(param_4 + 0x1c) = (int)uVar19;
    }
  }
  return iVar9;
}




void FUN_1010f18bc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar4 = *(long **)(param_4 + 0x8a80);
  puVar5 = (undefined8 *)*plVar4;
  if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
    do {
      puVar6 = (undefined8 *)puVar5[2];
      lVar1 = FUN_1010d0e80(*(undefined8 *)*puVar5,((undefined8 *)*puVar5)[1],param_1,param_2);
      if (0 < lVar1) break;
      FUN_1010ef040(plVar4,puVar5,0);
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
    plVar3 = (long *)*plVar4;
    if (plVar3 != (long *)0x0) {
      uVar2 = *(undefined8 *)*plVar3;
      *(undefined8 *)(param_4 + 0x8a48) = ((undefined8 *)*plVar3)[1];
      *(undefined8 *)(param_4 + 0x8a40) = uVar2;
      FUN_1010ef040(plVar4,plVar3,0);
      uVar2 = FUN_1010f5470(*(undefined8 *)(param_4 + 0x8a40),*(undefined8 *)(param_4 + 0x8a48),
                            *(undefined8 *)(param_3 + 0x48),param_4 + 0x8a50);
      *(undefined8 *)(param_3 + 0x48) = uVar2;
      return;
    }
  }
  *(undefined8 *)(param_4 + 0x8a40) = 0;
  *(undefined4 *)(param_4 + 0x8a48) = 0;
  return;
}




undefined8 FUN_1010f19a0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar2 = 1;
  }
  else {
    *param_1 = 0;
    while (plVar1 = (long *)FUN_10110358c(param_1[0xc]), plVar1 != (long *)0x0) {
      *plVar1 = param_1[0xd];
      FUN_1010e1ccc(plVar1,0);
    }
    if (param_1[0xd] != 0) {
      *(long *)(param_1[0xd] + 0x50) = param_1[8];
      FUN_1010d13e0();
      FUN_1010de718(param_1[0xd]);
    }
    FUN_1010ef7c8(param_1[10]);
    FUN_1011032dc(param_1[0xc]);
    FUN_1010ef0ec(param_1[4],0);
    FUN_1010ef0ec(param_1[5],0);
    plVar1 = (long *)param_1[1];
    while (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      if (*(int *)(plVar1 + 0xb) == 2) {
        FUN_1010d13e0(plVar1,plVar1[10]);
        plVar1[10] = 0;
        *(undefined4 *)(plVar1 + 0xb) = 0;
      }
      plVar1[0x11a] = 0;
      plVar1[0xc] = 0;
      plVar1 = (long *)lVar3;
    }
    FUN_1010ef7c8(param_1[8]);
    FUN_10110382c(0,param_1 + 0x14);
    FUN_101103a74(0,param_1 + 0x15);
    (*(code *)PTR__free_101873628)(param_1);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1010f1ac0(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) ||
     (lVar2 = FUN_1010ef144(param_1[4]), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)param_1[4];
    uVar4 = *puVar3;
    FUN_1010ef040((undefined8 *)param_1[4],puVar3,0);
    FUN_1010ef144(param_1[4]);
    uVar1 = FUN_1010feed4();
    *param_2 = uVar1;
  }
  return uVar4;
}




void FUN_1010f1b40(long *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_24;
  
  lVar2 = *(long *)(*param_1 + 0x60);
  if ((lVar2 != 0) &&
     (local_24 = param_2, lVar1 = FUN_1010ef618(*(undefined8 *)(lVar2 + 0x50),&local_24,4),
     lVar1 != 0)) {
    if (*(code **)(lVar2 + 0x30) != (code *)0x0) {
      (**(code **)(lVar2 + 0x30))
                (*param_1,local_24,4,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar1 + 0x18));
    }
    FUN_1010f1bb8(*(undefined8 *)(lVar2 + 0x50),local_24);
  }
  return;
}




void FUN_1010f1bb8(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_24;
  
  local_24 = param_2;
  lVar1 = FUN_1010ef618(param_1,&local_24,4);
  if (lVar1 != 0) {
    FUN_1010ef574(param_1,&local_24,4);
  }
  return;
}




undefined8 FUN_1010f1c00(long *param_1,int param_2)

{
  undefined8 uVar1;
  long in_stack_00000000;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 6;
    if (param_2 < 0x2712) {
      switch(param_2) {
      case 3:
        uVar1 = 0;
        *(bool *)(param_1 + 0xb) = in_stack_00000000 != 0;
        break;
      case 6:
        uVar1 = 0;
        param_1[0xe] = in_stack_00000000;
        break;
      case 7:
        uVar1 = 0;
        param_1[0xf] = in_stack_00000000;
        break;
      case 8:
        uVar1 = 0;
        param_1[0x11] = in_stack_00000000;
        break;
      case 0xd:
        uVar1 = 0;
        param_1[0x10] = in_stack_00000000;
      }
    }
    else if (param_2 < 0x4e21) {
      if (param_2 < 0x271b) {
        if (param_2 == 0x2712) {
          uVar1 = 0;
          param_1[7] = in_stack_00000000;
        }
        else if (param_2 == 0x2715) {
          uVar1 = 0;
          param_1[0x17] = in_stack_00000000;
        }
      }
      else if (param_2 == 0x271b) {
        uVar1 = FUN_10110382c(in_stack_00000000,param_1 + 0x14);
      }
      else if (param_2 == 0x271c) {
        uVar1 = FUN_101103a74(in_stack_00000000,param_1 + 0x15);
      }
    }
    else if (param_2 < 0x7539) {
      if (param_2 == 0x4e21) {
        uVar1 = 0;
        param_1[6] = in_stack_00000000;
      }
      else if (param_2 == 0x4e24) {
        uVar1 = 0;
        param_1[0x16] = in_stack_00000000;
      }
    }
    else if (param_2 == 0x7539) {
      uVar1 = 0;
      param_1[0x12] = in_stack_00000000;
    }
    else if (param_2 == 0x753a) {
      uVar1 = 0;
      param_1[0x13] = in_stack_00000000;
    }
  }
  return uVar1;
}




void FUN_1010f1ea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar7;
    lVar4 = FUN_1010ef144(param_1);
    if ((lVar4 == 0) || ((undefined8 *)*param_1 == (undefined8 *)0x0)) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      puVar6 = (undefined8 *)0x0;
      do {
        puVar5 = puVar1;
        lVar4 = FUN_1010d0e80(*(undefined8 *)*puVar5,((undefined8 *)*puVar5)[1],*puVar3,puVar3[1]);
        if (0 < lVar4) break;
        puVar1 = (undefined8 *)puVar5[2];
        puVar6 = puVar5;
      } while ((undefined8 *)puVar5[2] != (undefined8 *)0x0);
    }
    iVar2 = FUN_1010eef88(param_1,puVar6,puVar3);
    if (iVar2 == 0) {
      (*(code *)PTR__free_101873628)(puVar3);
      return;
    }
  }
  return;
}




void FUN_1010f1f70(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_1010d0e58();
  lVar1 = auVar3._0_8_ + param_2 / 1000;
  uVar2 = auVar3._8_8_ + (param_2 % 1000) * 1000;
  if (999999 < (int)uVar2) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 + 0xfff0bdc0;
  }
  if (((*(long *)(param_1 + 0x8a40) != 0) || (*(int *)(param_1 + 0x8a48) != 0)) &&
     (lVar1 = FUN_1010d0e80(lVar1,uVar2 & 0xffffffff | auVar3._8_8_ & 0xffffffff00000000,
                            *(long *)(param_1 + 0x8a40),*(undefined8 *)(param_1 + 0x8a48)),
     0 < lVar1)) {
    return;
  }
  FUN_1010efbdc(param_1,param_2);
  return;
}




undefined8 FUN_1010f2038(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x78);
  }
  return 0;
}




undefined8 FUN_1010f204c(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x80);
  }
  return 0;
}




undefined8 FUN_1010f2060(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x88);
  }
  return 0;
}




undefined8 FUN_1010f2074(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x90);
  }
  return 0;
}




undefined8 FUN_1010f2088(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x98);
  }
  return 0;
}




undefined8 FUN_1010f209c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}




undefined8 FUN_1010f20a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_1010f20ac(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)**(long **)(param_1 + 0x28);
  while (plVar1 = plVar3, plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar3 = (long *)plVar1[2];
    if (*(int *)(lVar2 + 0x18) == 1) {
      *(undefined4 *)(lVar2 + 0x18) = 2;
      FUN_1010ef040(*(undefined8 *)(param_1 + 0x28),plVar1,0);
      FUN_1010f1f70(lVar2,1);
    }
  }
  return;
}




long FUN_1010f2118(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *param_1 / param_3;
  }
  return (long)(*param_1 - iVar1 * param_3);
}




bool FUN_1010f212c(int *param_1,undefined8 param_2,int *param_3)

{
  return *param_1 == *param_3;
}




void FUN_1010f2140(long param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR__free_101873628)();
    return;
  }
  return;
}




undefined8 FUN_1010f2158(undefined8 param_1,long param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_2 + 0xd4) == 0) {
    pvVar1 = (void *)(param_2 + 0xd8);
    _memset(pvVar1,0,0x70);
    *(code **)(param_2 + 0x118) = FUN_1010f220c;
    *(code **)(param_2 + 0x120) = FUN_1010f2224;
    iVar2 = FUN_10065d4d4(pvVar1,"1.2.5",0x70);
    if (iVar2 != 0) {
      FUN_1010f2238(param_1,pvVar1);
      return 0x3d;
    }
    *(undefined4 *)(param_2 + 0xd4) = 1;
  }
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_2 + 0xe0) = param_3;
  uVar3 = FUN_1010f2278(param_1,param_2);
  return uVar3;
}




void FUN_1010f220c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR__calloc_101873640)(param_2,param_3);
  return;
}




void FUN_1010f2224(undefined8 param_1,undefined8 param_2)

{
  (*(code *)PTR__free_101873628)(param_2);
  return;
}




void FUN_1010f2238(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  
  if (*(long *)(param_2 + 0x30) == 0) {
    pcVar1 = 
    "Error while processing content unencoding: Unknown failure within decompression software.";
  }
  else {
    pcVar1 = "Error while processing content unencoding: %s";
  }
  FUN_1010d9258(*param_1,pcVar1);
  return;
}




undefined8 FUN_1010f2278(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar7 = (undefined8 *)(param_2 + 0xd8);
  uVar8 = *puVar7;
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  lVar5 = (*(code *)PTR__malloc_101873620)(0x4000);
  if (lVar5 == 0) {
    FUN_10065ed9c(puVar7);
    *(undefined4 *)(param_2 + 0xd4) = 0;
    uVar8 = 0x1b;
  }
  else {
    bVar2 = true;
LAB_1010f22e4:
    do {
      *(long *)(param_2 + 0xf0) = lVar5;
      *(undefined4 *)(param_2 + 0xf8) = 0x4000;
      uVar3 = FUN_10065d4e4(puVar7,2);
      if (1 < uVar3) {
        if ((bVar2) && (uVar3 == 0xfffffffd)) {
          FUN_10065ed9c(puVar7);
          iVar4 = FUN_10065d3fc(puVar7,0xfffffff1,"1.2.5",0x70);
          if (iVar4 == 0) {
            bVar2 = false;
            *(undefined8 *)(param_2 + 0xd8) = uVar8;
            *(undefined4 *)(param_2 + 0xe0) = uVar1;
            goto LAB_1010f22e4;
          }
        }
        (*(code *)PTR__free_101873628)(lVar5);
LAB_1010f23c4:
        FUN_1010f2238(param_1,puVar7);
        FUN_10065ed9c(puVar7);
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return 0x3d;
      }
      iVar4 = 0x4000 - *(int *)(param_2 + 0xf8);
      if (((iVar4 != 0) && (*(char *)(param_2 + 0x171) == '\0')) &&
         (uVar6 = FUN_1010d98ec(param_1,1,lVar5,iVar4), (int)uVar6 != 0)) {
        (*(code *)PTR__free_101873628)(lVar5);
        FUN_10065ed9c(puVar7);
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return uVar6;
      }
      if (uVar3 == 1) {
        (*(code *)PTR__free_101873628)(lVar5);
        iVar4 = FUN_10065ed9c(puVar7);
        if (iVar4 == 0) {
          FUN_10065ed9c(puVar7);
          *(undefined4 *)(param_2 + 0xd4) = 0;
          return 0;
        }
        goto LAB_1010f23c4;
      }
      bVar2 = false;
    } while (*(int *)(param_2 + 0xe0) != 0);
    (*(code *)PTR__free_101873628)(lVar5);
    uVar8 = 0;
  }
  return uVar8;
}




undefined8 FUN_1010f2454(undefined8 param_1,long param_2,ulong param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  long local_50;
  long local_48;
  
  iVar3 = (int)param_3;
  if (4 < *(uint *)(param_2 + 0xd4)) {
switchD_1010f2498_caseD_3:
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
    *(int *)(param_2 + 0xe0) = iVar3;
    goto LAB_1010f2518;
  }
  pvVar1 = (void *)(param_2 + 0xd8);
  switch(*(uint *)(param_2 + 0xd4)) {
  case 0:
    _memset(pvVar1,0,0x70);
    *(code **)(param_2 + 0x118) = FUN_1010f220c;
    *(code **)(param_2 + 0x120) = FUN_1010f2224;
    pcVar5 = (char *)FUN_10065f300();
    iVar4 = _strcmp(pcVar5,"1.2.0.4");
    if (iVar4 < 0) {
      iVar4 = FUN_10065d3fc(pvVar1,0xfffffff1,"1.2.5",0x70);
      if (iVar4 != 0) goto LAB_1010f25b4;
      *(undefined4 *)(param_2 + 0xd4) = 1;
      goto switchD_1010f2498_caseD_1;
    }
    iVar4 = FUN_10065d3fc(pvVar1,0x2f,"1.2.5",0x70);
    if (iVar4 != 0) {
LAB_1010f25b4:
      FUN_1010f2238(param_1,pvVar1);
      return 0x3d;
    }
    *(undefined4 *)(param_2 + 0xd4) = 4;
  case 4:
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
    *(int *)(param_2 + 0xe0) = iVar3;
    break;
  case 1:
switchD_1010f2498_caseD_1:
    iVar4 = FUN_1010f2710(*(undefined8 *)(param_2 + 0x80),param_3,&local_48);
    if (iVar4 == 2) {
      *(int *)(param_2 + 0xe0) = iVar3;
      pvVar8 = (void *)(*(code *)PTR__malloc_101873620)(param_3 & 0xffffffff);
      *(void **)(param_2 + 0xd8) = pvVar8;
      if (pvVar8 != (void *)0x0) {
        _memcpy(pvVar8,*(void **)(param_2 + 0x80),(ulong)*(uint *)(param_2 + 0xe0));
        *(undefined4 *)(param_2 + 0xd4) = 2;
        return 0;
      }
LAB_1010f2678:
      FUN_10065ed9c(pvVar1);
      *(undefined4 *)(param_2 + 0xd4) = 0;
      return 0x1b;
    }
    if (iVar4 != 0) {
LAB_1010f26c8:
      FUN_1010f2238(param_1,pvVar1);
      FUN_10065ed9c(pvVar1);
      *(undefined4 *)(param_2 + 0xd4) = 0;
      return 0x3d;
    }
    *(long *)(param_2 + 0xd8) = *(long *)(param_2 + 0x80) + local_48;
    uVar2 = iVar3 - (int)local_48;
    goto LAB_1010f26a4;
  case 2:
    uVar6 = *(undefined8 *)(param_2 + 0xd8);
    *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xe0) + iVar3;
    lVar7 = (*(code *)PTR__realloc_101873630)(uVar6);
    *(long *)(param_2 + 0xd8) = lVar7;
    if (lVar7 == 0) {
      (*(code *)PTR__free_101873628)(uVar6);
      goto LAB_1010f2678;
    }
    _memcpy((void *)(lVar7 + (*(uint *)(param_2 + 0xe0) - param_3)),*(void **)(param_2 + 0x80),
            param_3);
    iVar3 = FUN_1010f2710(*(undefined8 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xe0),&local_50)
    ;
    if (iVar3 == 2) {
      return 0;
    }
    if (iVar3 != 0) {
      (*(code *)PTR__free_101873628)(*(undefined8 *)(param_2 + 0xd8));
      goto LAB_1010f26c8;
    }
    (*(code *)PTR__free_101873628)(*(undefined8 *)(param_2 + 0xd8));
    *(ulong *)(param_2 + 0xd8) =
         *(long *)(param_2 + 0x80) + ((local_50 + param_3) - (ulong)*(uint *)(param_2 + 0xe0));
    uVar2 = *(uint *)(param_2 + 0xe0) - (int)local_50;
LAB_1010f26a4:
    param_3 = (ulong)uVar2;
    *(uint *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xd4) = 3;
LAB_1010f2518:
    if ((int)param_3 == 0) {
      return 0;
    }
    break;
  case 3:
    goto switchD_1010f2498_caseD_3;
  }
  uVar6 = FUN_1010f2278(param_1,param_2);
  return uVar6;
}




undefined8 FUN_1010f2710(char *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  
  lVar6 = param_2 + -10;
  if (param_2 < 10) {
    return 2;
  }
  if (((*param_1 != '\x1f') || (param_1[1] != -0x75)) ||
     (bVar3 = param_1[3], param_1[2] != '\b' || (bVar3 & 0xe0) != 0)) {
    return 1;
  }
  if ((bVar3 >> 2 & 1) == 0) {
    pbVar7 = (byte *)(param_1 + 10);
    lVar5 = lVar6;
  }
  else {
    if (lVar6 < 2) {
      return 2;
    }
    lVar1 = (ulong)*(ushort *)(param_1 + 10) + 2;
    lVar5 = lVar6 - lVar1;
    if (lVar6 < lVar1) {
      return 2;
    }
    pbVar7 = (byte *)(param_1 + (ulong)*(ushort *)(param_1 + 10) + 0xc);
  }
  bVar2 = bVar3 >> 3 & 1;
  while (bVar2 != 0) {
    if (lVar5 == 0) {
      return 2;
    }
    lVar5 = lVar5 + -1;
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  }
  if ((bVar3 >> 4 & 1) == 0) {
LAB_1010f27cc:
    lVar6 = lVar5;
    if (((bVar3 >> 1 & 1) != 0) && (lVar6 = lVar5 + -2, lVar5 < 2)) {
      return 2;
    }
    uVar4 = 0;
    *param_3 = param_2 - lVar6;
  }
  else {
    if (lVar5 == 0) {
      return 2;
    }
    lVar5 = 1 - lVar5;
    uVar4 = 2;
    do {
      if (*pbVar7 == 0) {
        lVar5 = -lVar5;
        goto LAB_1010f27cc;
      }
      pbVar7 = pbVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
  }
  return uVar4;
}




void FUN_1010f27f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x14c) != 0) {
    FUN_10065ed9c(lVar1 + 0x150);
    *(undefined4 *)(lVar1 + 0x14c) = 0;
  }
  return;
}




undefined8 FUN_1010f2820(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x70);
  if (puVar2 == (uint *)0x0) {
    uVar1 = 3;
  }
  else {
    if (((*puVar2 & 1 << (ulong)(param_2 & 0x1f)) != 0) && (*(code **)(puVar2 + 2) != (code *)0x0))
    {
      (**(code **)(puVar2 + 2))();
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1010f2868(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x70);
  if (puVar2 == (uint *)0x0) {
    uVar1 = 3;
  }
  else {
    if (((*puVar2 & 1 << (ulong)(param_2 & 0x1f)) != 0) && (*(code **)(puVar2 + 4) != (code *)0x0))
    {
      (**(code **)(puVar2 + 4))(param_1,param_2,*(undefined8 *)(puVar2 + 6));
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1010f28b0(long *param_1,int param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  
  lVar1 = *param_1 + 0x89b0;
  if (param_2 == 0) {
    lVar1 = *param_1 + 0x8970;
  }
  iVar3 = FUN_1010f6624("Digest",param_3,6);
  puVar2 = PTR___DefaultRuneLocale_101444130;
  if (iVar3 == 0) {
    return 0x3d;
  }
  pbVar6 = (byte *)(param_3 + 6);
  uVar5 = (uint)*pbVar6;
  if (*pbVar6 != 0) {
    do {
      if ((char)(byte)uVar5 < '\0') {
        uVar5 = ___maskrune(uVar5,0x4000);
      }
      else {
        uVar5 = *(uint *)(puVar2 + (ulong)(byte)uVar5 * 4 + 0x3c) & 0x4000;
      }
      if (uVar5 == 0) break;
      pbVar6 = pbVar6 + 1;
      uVar5 = (uint)*pbVar6;
    } while (uVar5 != 0);
  }
  uVar4 = FUN_1011024b8(pbVar6,lVar1);
  return uVar4;
}




undefined8 FUN_1010f2964(long *param_1,int param_2,undefined8 param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar9 = *param_1;
  lVar1 = lVar9 + 0x89f0;
  plVar3 = (long *)(lVar9 + 0x8970);
  plVar4 = param_1 + 0x2f;
  plVar5 = param_1 + 0x2e;
  plVar6 = param_1 + 0x68;
  if (param_2 != 0) {
    lVar1 = lVar9 + 0x8a10;
    plVar3 = (long *)(lVar9 + 0x89b0);
    plVar4 = param_1 + 0x33;
    plVar5 = param_1 + 0x32;
    plVar6 = param_1 + 0x65;
  }
  pcVar11 = (char *)*plVar4;
  pcVar10 = (char *)*plVar5;
  if (*plVar6 != 0) {
    (*(code *)PTR__free_101873628)();
    *plVar6 = 0;
  }
  pcVar2 = "";
  if (pcVar10 != (char *)0x0) {
    pcVar2 = pcVar10;
  }
  pcVar10 = "";
  if (pcVar11 != (char *)0x0) {
    pcVar10 = pcVar11;
  }
  if (*plVar3 == 0) {
    *(undefined1 *)(lVar1 + 0x18) = 0;
    return 0;
  }
  if ((*(char *)(lVar1 + 0x1a) == '\0') || (pcVar11 = _strchr(param_4,0x3f), pcVar11 == (char *)0x0)
     ) {
    lVar7 = (*(code *)PTR__strdup_101873638)(param_4);
  }
  else {
    lVar7 = FUN_1010e7298("%.*s");
  }
  if (lVar7 != 0) {
    uVar8 = FUN_101102a3c(lVar9,pcVar2,pcVar10,param_3,lVar7,plVar3,&local_68,auStack_70);
    (*(code *)PTR__free_101873628)(lVar7);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    lVar9 = FUN_1010e7298("%sAuthorization: Digest %s\r\n");
    *plVar6 = lVar9;
    (*(code *)PTR__free_101873628)(local_68);
    if (*plVar6 != 0) {
      *(undefined1 *)(lVar1 + 0x18) = 1;
      return 0;
    }
  }
  return 0x1b;
}




void FUN_1010f2b34(long param_1)

{
  FUN_10110296c(param_1 + 0x8970);
  FUN_10110296c(param_1 + 0x89b0);
  return;
}




int FUN_1010f2b70(uchar *param_1,char *param_2)

{
  CC_LONG len;
  int iVar1;
  
  _CC_MD5_Init((CC_MD5_CTX *)&stack0xffffffffffffff80);
  _strlen(param_2);
  len = FUN_1010feedc();
  _CC_MD5_Update((CC_MD5_CTX *)&stack0xffffffffffffff80,param_2,len);
  iVar1 = _CC_MD5_Final(param_1,(CC_MD5_CTX *)&stack0xffffffffffffff80);
  return iVar1;
}




long * FUN_1010f2bc8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(code *)PTR__malloc_101873620)(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR__malloc_101873620)(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      (*(code *)PTR__free_101873628)(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
  return plVar1;
}




undefined8 FUN_1010f2c48(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}




undefined8 FUN_1010f2c68(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_1[1]);
  (*(code *)PTR__free_101873628)(param_1[1]);
  (*(code *)PTR__free_101873628)(param_1);
  return 0;
}




char * FUN_1010f2cbc(uint param_1)

{
  if (param_1 < 0x5b) {
    return (&PTR_s_No_error_10182f3e0)[(int)param_1];
  }
  return "Unknown error";
}




char * FUN_1010f2ce0(long param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  piVar4 = ___error();
  iVar2 = *piVar4;
  pcVar1 = (char *)(param_1 + 0x420);
  *(undefined1 *)(param_1 + 0x420) = 0;
  iVar3 = _strerror_r(param_2,pcVar1,0xff);
  if ((iVar3 != 0) && (*pcVar1 == '\0')) {
    FUN_1010e7270(pcVar1,0xff,"Unknown error %d");
  }
  *(undefined1 *)(param_1 + 0x51f) = 0;
  pcVar5 = _strrchr(pcVar1,10);
  if ((pcVar5 != (char *)0x0) && (1 < (long)pcVar5 - (long)pcVar1)) {
    *pcVar5 = '\0';
  }
  pcVar5 = _strrchr(pcVar1,0xd);
  if ((pcVar5 != (char *)0x0) && (0 < (long)pcVar5 - (long)pcVar1)) {
    *pcVar5 = '\0';
  }
  piVar4 = ___error();
  if (iVar2 != *piVar4) {
    piVar4 = ___error();
    *piVar4 = iVar2;
  }
  return pcVar1;
}




bool FUN_1010f2db4(void)

{
  int iVar1;
  
  if (DAT_101873648 == -1) {
    iVar1 = _socket(0x1e,2,0);
    if (iVar1 == -1) {
      DAT_101873648 = 0;
    }
    else {
      DAT_101873648 = 1;
      FUN_1010ee3ec(0,iVar1);
    }
  }
  return 0 < DAT_101873648;
}




undefined8 FUN_1010f2e24(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x318) == 2) {
    uVar1 = FUN_1010f2db4();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_1010f2e4c(undefined8 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_120;
  long local_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e4 [128];
  undefined1 auStack_64 [12];
  long local_58;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = *param_1;
  *param_4 = 0;
  uVar2 = 0x1e;
  if (param_1[99] != 2) {
    uVar2 = 0;
  }
  uVar6 = 2;
  local_58 = lVar5;
  if ((param_1[99] != 1) && (iVar1 = FUN_1010f2db4(), uVar6 = uVar2, iVar1 == 0)) {
    uVar6 = 2;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (ulong)uVar6 << 0x20;
  local_110 = (ulong)*(uint *)((long)param_1 + 0xac);
  iVar1 = _inet_pton(2,param_2,auStack_e4);
  if ((iVar1 == 1) || (iVar1 = _inet_pton(0x1e,param_2,auStack_e4), iVar1 == 1)) {
    local_118 = CONCAT44(local_118._4_4_,4);
  }
  if (param_3 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = auStack_64;
    FUN_1010e7270(auStack_64,0xc,"%d");
  }
  iVar1 = FUN_1010f6830(param_2,puVar4,&local_118,&local_120);
  if (iVar1 != 0) {
    FUN_1010d909c(uVar3,"getaddrinfo(3) failed for %s:%d\n");
    local_120 = 0;
  }
  if (lVar5 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_120);
}




undefined8 FUN_1010f2f94(void)

{
  return 4;
}




undefined8 FUN_1010f2f9c(void)

{
  return 4;
}




undefined8 FUN_1010f2fa4(void)

{
  return 4;
}




undefined8 FUN_1010f2fac(void)

{
  return 4;
}




undefined4 FUN_1010f36dc(time_t param_1,tm *param_2)

{
  tm *ptVar1;
  undefined4 uVar2;
  time_t local_18;
  
  local_18 = param_1;
  ptVar1 = _gmtime_r(&local_18,param_2);
  uVar2 = 0x2b;
  if (ptVar1 != (tm *)0x0) {
    uVar2 = 0;
  }
  return uVar2;
}




int FUN_1010f370c(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar4 = (int)param_1;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else if (iVar4 < 0) {
    piVar3 = ___error();
    *piVar3 = 0x16;
    iVar4 = -1;
  }
  else {
    auVar5 = FUN_1010d0e58();
    do {
      iVar2 = _poll(0,0,param_1);
      if (iVar2 != -1) break;
      piVar3 = ___error();
      if ((*piVar3 != 0) && (*piVar3 != 4 || DAT_101dc1cb4 != 0)) {
        iVar2 = -1;
        break;
      }
      auVar6 = FUN_1010d0e58();
      iVar2 = FUN_1010d0e80(auVar6._0_8_,auVar6._8_8_,auVar5._0_8_,auVar5._8_8_);
      uVar1 = iVar4 - iVar2;
      param_1 = (ulong)uVar1;
      iVar2 = -(uint)(0 < (int)uVar1);
    } while (0 < (int)uVar1);
    iVar4 = -(uint)(iVar2 != 0);
  }
  return iVar4;
}




void FUN_1010f37c8(uint param_1,uint param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint local_80;
  ushort local_7c [10];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_2 & param_1) == 0xffffffff && param_3 == 0xffffffff) {
    FUN_1010f370c(param_4);
    return;
  }
  if ((long)param_4 < 1) {
    uVar8 = 0;
    auVar10 = ZEXT816(0);
  }
  else {
    auVar10 = FUN_1010d0e58();
    uVar8 = param_4;
  }
  bVar2 = param_1 != 0xffffffff;
  if (bVar2) {
    local_7c[0] = 0xc3;
    local_7c[1] = 0;
    local_80 = param_1;
  }
  uVar9 = (ulong)bVar2;
  if (param_2 != 0xffffffff) {
    (&local_80)[uVar9 * 2] = param_2;
    local_7c[uVar9 * 4] = 0xc3;
    local_7c[uVar9 * 4 + 1] = 0;
    uVar9 = (ulong)(bVar2 + 1);
  }
  if (param_3 != 0xffffffff) {
    lVar7 = (long)(int)uVar9;
    (&local_80)[lVar7 * 2] = param_3;
    local_7c[lVar7 * 4] = 4;
    local_7c[lVar7 * 4 + 1] = 0;
    uVar9 = (ulong)((int)uVar9 + 1);
  }
  while( true ) {
    uVar6 = 0;
    if (param_4 != 0) {
      uVar6 = (uint)uVar8;
    }
    uVar1 = 0xffffffff;
    if ((param_4 & 0x8000000000000000) == 0) {
      uVar1 = uVar6;
    }
    uVar8 = (ulong)uVar1;
    iVar3 = _poll(&local_80,uVar9,uVar8);
    if (iVar3 != -1) break;
    piVar4 = ___error();
    if ((*piVar4 != 0) && (*piVar4 != 4 || DAT_101dc1cb4 != 0)) goto LAB_1010f3998;
    if (0 < (long)param_4) {
      auVar11 = FUN_1010d0e58();
      iVar3 = FUN_1010d0e80(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
      uVar6 = (int)param_4 - iVar3;
      uVar8 = (ulong)uVar6;
      if ((int)uVar6 < 1) {
        uVar6 = 0;
LAB_1010f399c:
        lVar7 = *(long *)PTR____stack_chk_guard_101444218;
LAB_1010f3a20:
        if (lVar7 != local_68) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail(uVar6);
        }
        return;
      }
    }
  }
  if (iVar3 < 0) {
LAB_1010f3998:
    uVar6 = 0xffffffff;
    goto LAB_1010f399c;
  }
  lVar7 = *(long *)PTR____stack_chk_guard_101444218;
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    if (param_1 == 0xffffffff) {
      uVar6 = 0;
      lVar5 = 0;
    }
    else {
      uVar6 = (uint)((local_7c[1] & 0x59) != 0);
      if ((local_7c[1] & 0xa2) != 0) {
        uVar6 = uVar6 | 4;
      }
      lVar5 = 1;
    }
    iVar3 = (int)lVar5;
    if (param_2 != 0xffffffff) {
      if ((local_7c[lVar5 * 4 + 1] & 0x59) != 0) {
        uVar6 = uVar6 | 8;
      }
      if ((local_7c[lVar5 * 4 + 1] & 0xa2) != 0) {
        uVar6 = uVar6 | 4;
      }
      iVar3 = iVar3 + 1;
    }
    if (param_3 != 0xffffffff) {
      uVar6 = local_7c[(long)iVar3 * 4 + 1] >> 1 & 2 | uVar6;
      if ((local_7c[(long)iVar3 * 4 + 1] & 0x38) != 0) {
        uVar6 = uVar6 | 4;
      }
    }
  }
  goto LAB_1010f3a20;
}




undefined8 FUN_1010f3a50(int *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if ((param_1 != (int *)0x0) && ((uint)param_2 != 0)) {
    uVar7 = 0;
    piVar4 = param_1;
    do {
      if (*piVar4 != -1) {
        iVar6 = (int)param_3;
        if (iVar6 < 1) {
          uVar8 = 0;
          auVar9 = ZEXT816(0);
        }
        else {
          auVar9 = FUN_1010d0e58();
          uVar8 = param_3;
        }
        while( true ) {
          uVar7 = 0;
          if (iVar6 != 0) {
            uVar7 = (uint)uVar8;
          }
          uVar1 = 0xffffffff;
          if ((param_3 & 0x80000000) == 0) {
            uVar1 = uVar7;
          }
          uVar3 = _poll(param_1,param_2,(ulong)uVar1);
          iVar2 = (int)uVar3;
          if (iVar2 != -1) break;
          piVar4 = ___error();
          if ((*piVar4 != 0) && (*piVar4 != 4 || DAT_101dc1cb4 != 0)) {
            return 0xffffffff;
          }
          uVar8 = (ulong)uVar1;
          if (0 < iVar6) {
            auVar10 = FUN_1010d0e58();
            iVar2 = FUN_1010d0e80(auVar10._0_8_,auVar10._8_8_,auVar9._0_8_,auVar9._8_8_);
            uVar8 = (ulong)(uint)(iVar6 - iVar2);
            if (iVar6 - iVar2 < 1) {
              return 0;
            }
          }
        }
        if (iVar2 < 0) {
          return 0xffffffff;
        }
        if (iVar2 == 0) {
          return 0;
        }
        do {
          if (*param_1 != -1) {
            uVar5 = *(ushort *)((long)param_1 + 6);
            if (((uint)(int)(short)uVar5 >> 4 & 1) != 0) {
              uVar5 = uVar5 | 1;
              *(ushort *)((long)param_1 + 6) = uVar5;
            }
            if (((uint)(int)(short)uVar5 >> 3 & 1) != 0) {
              *(ushort *)((long)param_1 + 6) = uVar5 | 5;
            }
          }
          uVar7 = (int)param_2 - 1;
          param_2 = (ulong)uVar7;
          param_1 = param_1 + 2;
        } while (uVar7 != 0);
        return uVar3;
      }
      uVar7 = uVar7 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar7 < (uint)param_2);
  }
  uVar3 = FUN_1010f370c(param_3);
  return uVar3;
}




undefined8 FUN_1010f3bcc(long *param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(undefined4 *)((long)param_1 + 0xac) = 2;
  pcVar2 = _strstr(*(char **)(lVar3 + 0x8ab0),";mode=");
  if ((pcVar2 != (char *)0x0) ||
     (pcVar2 = _strstr((char *)param_1[0x16],";mode="), pcVar2 != (char *)0x0)) {
    *pcVar2 = '\0';
    iVar1 = FUN_1010f6448((long)pcVar2[6]);
    if ((iVar1 == 0x41) || (iVar1 == 0x4e)) {
      *(undefined1 *)(lVar3 + 0x4f3) = 1;
    }
    else {
      *(undefined1 *)(lVar3 + 0x4f3) = 0;
    }
  }
  return 0;
}




undefined8 FUN_1010f3c50(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  *param_2 = 0;
  piVar3 = *(int **)(param_1 + 0x530);
  if (piVar3 == (int *)0x0) {
    uVar2 = FUN_1010f3e68(param_1,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    piVar3 = *(int **)(param_1 + 0x530);
    if (piVar3 == (int *)0x0) {
      return 0x2c;
    }
  }
  *param_2 = 0;
  uVar2 = FUN_1010f4800(piVar3,0);
  if ((int)uVar2 == 0 && *piVar3 != 3) {
    FUN_1010f3fe4(param_1,param_2);
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  iVar1 = piVar3[2];
  if (iVar1 < 0) {
    if (iVar1 == -100) {
      return 0;
    }
    if (iVar1 == -99) {
      return 0x1c;
    }
    if (iVar1 == -0x62) {
      return 7;
    }
switchD_1010f3d04_default:
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 0x44;
    switch(iVar1) {
    case 0:
    case 4:
      uVar2 = 0x47;
      break;
    case 1:
      break;
    case 2:
      uVar2 = 0x45;
      break;
    case 3:
      uVar2 = 0x46;
      break;
    case 5:
      uVar2 = 0x48;
      break;
    case 6:
      uVar2 = 0x49;
      break;
    case 7:
      uVar2 = 0x4a;
      break;
    default:
      goto switchD_1010f3d04_default;
    }
  }
  return uVar2;
}




undefined8 FUN_1010f3d90(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x530);
  iVar1 = FUN_1010d1d5c();
  if (iVar1 == 0) {
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(lVar2 + 8);
    if (iVar1 < 0) {
      if (iVar1 == -100) {
        return 0;
      }
      if (iVar1 == -99) {
        return 0x1c;
      }
      if (iVar1 == -0x62) {
        return 7;
      }
    }
    else {
      switch(iVar1) {
      case 0:
      case 4:
        return 0x47;
      case 1:
        return 0x44;
      case 2:
        return 0x45;
      case 3:
        return 0x46;
      case 5:
        return 0x48;
      case 6:
        return 0x49;
      case 7:
        return 0x4a;
      }
    }
  }
  return 0x2a;
}




undefined8 FUN_1010f3e68(long *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = (undefined4 *)(*(code *)PTR__calloc_101873640)(1,0x170);
  param_1[0xa6] = (long)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
LAB_1010f3fac:
    uVar4 = 0x1b;
  }
  else {
    lVar5 = *(long *)(*param_1 + 0x378);
    if (lVar5 == 0) {
      lVar5 = 0x200;
    }
    else if (0xffb0 < (int)lVar5 - 8U) {
      return 0x47;
    }
    iVar1 = (int)lVar5;
    if (*(long *)(puVar2 + 0x58) == 0) {
      lVar5 = (*(code *)PTR__calloc_101873640)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x58) = lVar5;
      if (lVar5 == 0) goto LAB_1010f3fac;
    }
    if (*(long *)(puVar2 + 0x5a) == 0) {
      lVar5 = (*(code *)PTR__calloc_101873640)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x5a) = lVar5;
      if (lVar5 == 0) goto LAB_1010f3fac;
    }
    *(undefined1 *)(param_1 + 0x59) = 1;
    *(long **)(puVar2 + 4) = param_1;
    puVar2[6] = (int)param_1[0x3a];
    *puVar2 = 0;
    puVar2[2] = 0xffffff9c;
    puVar2[0x55] = 0x200;
    puVar2[0x56] = iVar1;
    *(char *)((long)puVar2 + 0x49) = (char)*(undefined4 *)(param_1[0xc] + 4);
    FUN_1010f4654(puVar2);
    if (*(char *)((long)param_1 + 0x2df) == '\0') {
      iVar1 = _bind(puVar2[6],(sockaddr *)(puVar2 + 0x12),*(socklen_t *)(param_1[0xc] + 0x10));
      if (iVar1 != 0) {
        lVar5 = *param_1;
        piVar3 = ___error();
        FUN_1010f2ce0(param_1,*piVar3);
        FUN_1010d9258(lVar5,"bind() failed; %s");
        return 7;
      }
      *(undefined1 *)((long)param_1 + 0x2df) = 1;
    }
    FUN_1010d2424(*param_1);
    uVar4 = 0;
    *param_2 = 1;
  }
  return uVar4;
}




undefined8 FUN_1010f4560(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = FUN_1010f3fe4();
  if (((int)uVar2 == 0) && (*param_2 == '\0')) {
    iVar1 = FUN_1010d1dac(param_1);
    if (iVar1 == 0) {
      uVar2 = *param_1;
      auVar3 = FUN_1010d0e58();
      uVar2 = FUN_1010e5e20(uVar2,auVar3._0_8_,auVar3._8_8_);
      return uVar2;
    }
    uVar2 = 0x2a;
  }
  return uVar2;
}




undefined8 FUN_1010f45c8(long param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1d0);
    return 1;
  }
  return 0;
}




undefined8 FUN_1010f45e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x530);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x160) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(lVar1 + 0x160) = 0;
    }
    if (*(long *)(lVar1 + 0x168) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(lVar1 + 0x168) = 0;
    }
    (*(code *)PTR__free_101873628)(lVar1);
  }
  return 0;
}




undefined8 FUN_1010f4654(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *param_1;
  _time((time_t *)(param_1 + 10));
  lVar2 = FUN_1010edb38(**(undefined8 **)(param_1 + 4),0,iVar5 == 0);
  if (lVar2 < 0) {
    FUN_1010d9258(**(undefined8 **)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  if (iVar5 == 0) {
    lVar4 = (lVar2 + 500) / 1000;
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 10) + lVar4;
    iVar3 = (int)lVar4;
    iVar5 = 1;
    if (4 < iVar3) {
      iVar5 = iVar3 / 5;
    }
    param_1[9] = iVar5;
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = iVar3 / iVar5;
    }
    iVar3 = 1;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
    param_1[8] = iVar3;
  }
  else {
    lVar4 = 0xe10;
    if (0 < lVar2) {
      lVar4 = (lVar2 + 500) / 1000;
    }
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 10) + lVar4;
    iVar5 = (int)lVar4 / 5;
    param_1[9] = iVar5;
  }
  if (iVar5 < 3) {
    iVar5 = 3;
  }
  else {
    if (iVar5 < 0x33) goto LAB_1010f47a4;
    iVar5 = 0x32;
  }
  param_1[9] = iVar5;
LAB_1010f47a4:
  iVar3 = 0;
  if ((long)iVar5 != 0) {
    iVar3 = (int)(lVar4 / (long)iVar5);
  }
  iVar5 = 1;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  param_1[8] = iVar5;
  FUN_1010d909c(**(undefined8 **)(param_1 + 4),
                "set timeouts for state %d; Total %ld, retry %d maxtry %d\n");
  _time((time_t *)(param_1 + 0xe));
  return 0;
}




void FUN_1010f4800(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined2 local_88 [32];
  long local_48;
  
  lVar11 = *(long *)PTR____stack_chk_guard_101444218;
  lVar10 = **(long **)(param_1 + 4);
  local_48 = lVar11;
  switch(*param_1) {
  case 0:
    break;
  case 1:
    FUN_1010f4c58(param_1);
    return;
  case 2:
    FUN_1010f4f24(param_1);
    return;
  case 3:
    FUN_1010d909c(lVar10,"%s\n");
LAB_1010f4998:
    uVar4 = 0;
    goto LAB_1010f499c;
  default:
    FUN_1010d9258(lVar10,"%s");
    uVar4 = 0x47;
    goto LAB_1010f499c;
  }
  cVar2 = *(char *)(lVar10 + 0x4f3);
  switch(param_2) {
  case 0:
  case 7:
    iVar1 = param_1[7];
    param_1[7] = iVar1 + 1;
    if (iVar1 < (int)param_1[9]) {
      cVar3 = *(char *)(lVar10 + 0x501);
      **(undefined1 **)(param_1 + 0x5a) = 0;
      if (cVar3 == '\0') {
        *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 1;
      }
      else {
        *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 2;
        *(long *)(**(long **)(param_1 + 4) + 0x208) = *(long *)(param_1 + 0x5a) + 4;
        if (*(long *)(lVar10 + 0x8ae8) != -1) {
          FUN_1010d22f4(lVar10);
        }
      }
      pcVar5 = (char *)FUN_1010e5f30(lVar10,*(long *)(**(long **)(param_1 + 4) + 0x8ab0) + 1,0,0);
      if (pcVar5 == (char *)0x0) {
        uVar4 = 0x1b;
        goto LAB_1010f499c;
      }
      FUN_1010e7270(*(long *)(param_1 + 0x5a) + 2,(long)(int)param_1[0x55],"%s%c%s%c");
      sVar6 = _strlen(pcVar5);
      lVar8 = 9;
      if (cVar2 != '\0') {
        lVar8 = 0xc;
      }
      lVar8 = sVar6 + lVar8;
      if ((*(char *)(lVar10 + 0x501) == '\0') || (*(long *)(lVar10 + 0x8ae8) == -1)) {
        local_88[0] = 0x30;
      }
      else {
        FUN_1010e7270(local_88,0x40,"%ld");
      }
      lVar7 = FUN_1010f520c(param_1,lVar8,*(long *)(param_1 + 0x5a) + lVar8,"tsize");
      lVar7 = lVar7 + lVar8;
      lVar8 = FUN_1010f520c(param_1,lVar7,*(long *)(param_1 + 0x5a) + lVar7,local_88);
      lVar8 = lVar8 + lVar7;
      FUN_1010e7270(local_88,0x40,"%d");
      lVar7 = FUN_1010f520c(param_1,lVar8,*(long *)(param_1 + 0x5a) + lVar8,"blksize");
      lVar7 = lVar7 + lVar8;
      lVar8 = FUN_1010f520c(param_1,lVar7,*(long *)(param_1 + 0x5a) + lVar7,local_88);
      lVar8 = lVar8 + lVar7;
      FUN_1010e7270(local_88,0x40,"%d");
      lVar7 = FUN_1010f520c(param_1,lVar8,*(long *)(param_1 + 0x5a) + lVar8,"timeout");
      lVar7 = lVar7 + lVar8;
      lVar8 = FUN_1010f520c(param_1,lVar7,*(long *)(param_1 + 0x5a) + lVar7,local_88);
      sVar6 = _sendto(param_1[6],*(void **)(param_1 + 0x5a),lVar8 + lVar7,0,
                      *(sockaddr **)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x20),
                      *(socklen_t *)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x10));
      if (sVar6 != lVar8 + lVar7) {
        uVar4 = *(undefined8 *)(param_1 + 4);
        piVar9 = ___error();
        FUN_1010f2ce0(uVar4,*piVar9);
        FUN_1010d9258(lVar10,"%s");
      }
      (*(code *)PTR__free_101873628)(pcVar5);
      goto LAB_1010f4998;
    }
    param_1[2] = 0xffffff9e;
    break;
  default:
    FUN_1010d9258(lVar10,"tftp_send_first: internal error");
    goto LAB_1010f4998;
  case 3:
    uVar4 = 3;
    goto LAB_1010f4c10;
  case 4:
    uVar4 = 4;
LAB_1010f49e4:
    uVar4 = FUN_1010f5278(param_1,uVar4);
    goto LAB_1010f499c;
  case 5:
    break;
  case 6:
    if (*(char *)(lVar10 + 0x501) != '\0') {
      uVar4 = 6;
      goto LAB_1010f49e4;
    }
    uVar4 = 6;
LAB_1010f4c10:
    uVar4 = FUN_1010f52ec(param_1,uVar4);
    goto LAB_1010f499c;
  }
  uVar4 = 0;
  *param_1 = 3;
LAB_1010f499c:
  if (lVar11 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
}




undefined8 FUN_1010f4c58(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = **(undefined8 **)(param_1 + 4);
  switch(param_2) {
  case 3:
    sVar2 = CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x58) + 2),
                     *(undefined1 *)(*(long *)(param_1 + 0x58) + 3));
    if ((short)(*(short *)(param_1 + 0x10) + 1) == sVar2) {
      param_1[7] = 0;
    }
    else {
      if (*(short *)(param_1 + 0x10) != sVar2) {
        FUN_1010d909c(uVar6,"Received unexpected DATA packet block %d, expecting block %d\n");
        return 0;
      }
      FUN_1010d909c(uVar6,"Received last DATA packet block %d again.\n");
    }
    *(short *)(param_1 + 0x10) = sVar2;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sVar3 = _sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0,(sockaddr *)(param_1 + 0x32),
                    param_1[0x52]);
    if (sVar3 < 0) {
LAB_1010f4eb4:
      uVar7 = *(undefined8 *)(param_1 + 4);
      piVar4 = ___error();
      FUN_1010f2ce0(uVar7,*piVar4);
      FUN_1010d9258(uVar6,"%s");
      return 0x37;
    }
    uVar5 = 3;
    if ((long)(int)param_1[0x55] + 4 <= (long)(int)param_1[0x53]) {
      uVar5 = 1;
    }
    *param_1 = uVar5;
    break;
  default:
    FUN_1010d9258(uVar6,"%s");
    return 0x47;
  case 5:
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    _sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0,(sockaddr *)(param_1 + 0x32),param_1[0x52]);
    goto LAB_1010f4de4;
  case 6:
    *(undefined2 *)(param_1 + 0x10) = 0;
    param_1[7] = 0;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sVar3 = _sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0,(sockaddr *)(param_1 + 0x32),
                    param_1[0x52]);
    if (sVar3 < 0) goto LAB_1010f4eb4;
    *param_1 = 1;
    break;
  case 7:
    param_1[7] = param_1[7] + 1;
    FUN_1010d909c(uVar6,"Timeout waiting for block %d ACK.  Retries = %d\n");
    if ((int)param_1[7] <= (int)param_1[9]) {
      sVar3 = _sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0,(sockaddr *)(param_1 + 0x32),
                      param_1[0x52]);
      if (-1 < sVar3) {
        return 0;
      }
      goto LAB_1010f4eb4;
    }
    param_1[2] = 0xffffff9d;
LAB_1010f4de4:
    *param_1 = 3;
    return 0;
  }
  _time((time_t *)(param_1 + 0xe));
  return 0;
}




undefined8 FUN_1010f4f24(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  ssize_t sVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  short sVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = **(long **)(param_1 + 4);
  switch(param_2) {
  case 4:
    sVar7 = CONCAT11(*(undefined1 *)(*(long *)(param_1 + 0x58) + 2),
                     *(undefined1 *)(*(long *)(param_1 + 0x58) + 3));
    if ((sVar7 == *(short *)(param_1 + 0x10)) ||
       ((*(short *)(param_1 + 0x10) == 0 && (sVar7 == -1)))) {
      _time((time_t *)(param_1 + 0xe));
      sVar7 = *(short *)(param_1 + 0x10) + 1;
      goto LAB_1010f5020;
    }
    FUN_1010d909c(lVar8,"Received ACK for block %d, expecting %d\n");
    iVar1 = param_1[7];
    param_1[7] = iVar1 + 1;
    if ((int)param_1[9] <= iVar1) {
      pcVar6 = "tftp_tx: giving up waiting for block %d ack";
      goto LAB_1010f51dc;
    }
    sVar3 = _sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0,
                    (sockaddr *)(param_1 + 0x32),param_1[0x52]);
    if (-1 < sVar3) {
      return 0;
    }
    break;
  case 5:
    *param_1 = 3;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
    uVar2 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar2 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar2;
    _sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0,(sockaddr *)(param_1 + 0x32),param_1[0x52]);
    *param_1 = 3;
    return 0;
  case 6:
    sVar7 = 1;
LAB_1010f5020:
    *(short *)(param_1 + 0x10) = sVar7;
    param_1[7] = 0;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 3;
    uVar2 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar2 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar2;
    if (*(ushort *)(param_1 + 0x10) < 2) {
      iVar1 = param_1[0x55];
    }
    else {
      iVar1 = param_1[0x55];
      if ((int)param_1[0x54] < iVar1) {
LAB_1010f50c0:
        *param_1 = 3;
        return 0;
      }
    }
    uVar9 = FUN_1010e9874(*(undefined8 *)(param_1 + 4),iVar1,param_1 + 0x54);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    sVar3 = _sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0,
                    (sockaddr *)(param_1 + 0x32),param_1[0x52]);
    if (-1 < sVar3) {
      lVar5 = *(long *)(lVar8 + 0xa0) + (long)(int)param_1[0x54];
      *(long *)(lVar8 + 0xa0) = lVar5;
LAB_1010f5144:
      FUN_1010d2468(lVar8,lVar5);
      return 0;
    }
    break;
  case 7:
    param_1[7] = param_1[7] + 1;
    FUN_1010d909c(lVar8,"Timeout waiting for block %d ACK.  Retries = %d\n");
    if ((int)param_1[9] < (int)param_1[7]) {
      param_1[2] = 0xffffff9d;
      goto LAB_1010f50c0;
    }
    sVar3 = _sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0,
                    (sockaddr *)(param_1 + 0x32),param_1[0x52]);
    if (-1 < sVar3) {
      lVar5 = *(long *)(lVar8 + 0xa0);
      goto LAB_1010f5144;
    }
    break;
  default:
    FUN_1010d9258(lVar8,"tftp_tx: internal error, event: %i");
    return 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 4);
  piVar4 = ___error();
  FUN_1010f2ce0(uVar9,*piVar4);
  pcVar6 = "%s";
LAB_1010f51dc:
  FUN_1010d9258(lVar8,pcVar6);
  return 0x37;
}




long FUN_1010f520c(long param_1,long param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = _strlen(param_4);
  if ((ulong)(long)*(int *)(param_1 + 0x154) < param_2 + sVar1 + 1) {
    lVar2 = 0;
  }
  else {
    _strcpy(param_3,param_4);
    sVar1 = _strlen(param_4);
    lVar2 = sVar1 + 1;
  }
  return lVar2;
}




void FUN_1010f5278(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1010d909c(**(undefined8 **)(param_1 + 4),"%s\n");
  *param_1 = 2;
  iVar1 = FUN_1010f4654(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_1010f4f24(param_1,param_2);
  return;
}




void FUN_1010f52ec(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1010d909c(**(undefined8 **)(param_1 + 4),"%s\n");
  *param_1 = 1;
  iVar1 = FUN_1010f4654(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_1010f4c58(param_1,param_2);
  return;
}




long * FUN_1010f5360(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long local_30;
  long local_28;
  
  if (param_3 == (long *)0x0) {
    return (long *)0x0;
  }
  local_30 = 0;
  local_28 = 0;
  plVar3 = &local_30;
  plVar4 = &local_30;
  do {
    while (param_1 < param_3[3]) {
LAB_1010f53a0:
      plVar1 = (long *)*param_3;
      if (plVar1 == (long *)0x0) goto LAB_1010f543c;
      if ((param_1 < plVar1[3]) ||
         ((plVar2 = param_3, param_1 <= plVar1[3] && (param_2 < (int)plVar1[4])))) {
        *param_3 = plVar1[1];
        plVar1[1] = (long)param_3;
        plVar2 = plVar1;
        param_3 = plVar1;
        if (*plVar1 == 0) goto LAB_1010f543c;
      }
      *plVar4 = (long)plVar2;
      plVar4 = plVar2;
      param_3 = (long *)*plVar2;
    }
    if (param_1 <= param_3[3]) {
      if (param_2 < (int)param_3[4]) goto LAB_1010f53a0;
      if (param_2 <= (int)param_3[4]) {
LAB_1010f543c:
        plVar3[1] = *param_3;
        *plVar4 = param_3[1];
        *param_3 = local_28;
        param_3[1] = local_30;
        return param_3;
      }
    }
    plVar1 = (long *)param_3[1];
    if (plVar1 == (long *)0x0) goto LAB_1010f543c;
    plVar2 = param_3;
    if ((plVar1[3] <= param_1) && ((plVar1[3] < param_1 || ((int)plVar1[4] < param_2)))) {
      param_3[1] = *plVar1;
      *plVar1 = (long)param_3;
      plVar2 = plVar1;
      param_3 = plVar1;
      if (plVar1[1] == 0) goto LAB_1010f543c;
    }
    plVar3[1] = (long)plVar2;
    param_3 = (long *)plVar2[1];
    plVar3 = plVar2;
  } while( true );
}




undefined8 * FUN_1010f5470(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined8 *)0x0) {
LAB_1010f5520:
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1010f5360(param_1,param_2);
    lVar3 = puVar1[3];
    if (param_1 == lVar3) {
      if ((int)param_2 == *(int *)(puVar1 + 4)) {
        param_4[2] = puVar1;
        param_4[3] = param_1;
        param_4[4] = param_2;
        *param_4 = *puVar1;
        param_4[1] = puVar1[1];
        *puVar1 = param_4;
        puVar1[4] = 0xffffffff;
        puVar1[3] = -1;
        return param_4;
      }
    }
    else if (puVar1 == (undefined8 *)0x0) goto LAB_1010f5520;
    if ((param_1 < lVar3) || ((param_1 <= lVar3 && ((int)param_2 < *(int *)(puVar1 + 4))))) {
      *param_4 = *puVar1;
      param_4[1] = puVar1;
      *puVar1 = 0;
    }
    else {
      uVar2 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar2;
      puVar1[1] = 0;
    }
  }
  param_4[3] = param_1;
  param_4[4] = param_2;
  param_4[2] = 0;
  return param_4;
}




long * FUN_1010f5550(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_3 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)FUN_1010f5360(param_1,param_2);
    if ((param_1 < plVar1[3]) || ((param_1 <= plVar1[3] && ((int)param_2 < (int)plVar1[4])))) {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_1010f5604;
      plVar1 = (long *)FUN_1010f5360(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
                                     plVar1);
    }
    lVar2 = plVar1[3];
    if ((lVar2 <= param_1) && ((lVar2 < param_1 || ((int)plVar1[4] <= (int)param_2)))) {
      plVar3 = (long *)plVar1[2];
      if (plVar3 != (long *)0x0) {
        lVar2 = plVar1[3];
        plVar3[4] = plVar1[4];
        plVar3[3] = lVar2;
        plVar3[1] = plVar1[1];
        *plVar3 = *plVar1;
        *param_4 = plVar1;
        return plVar3;
      }
      if (*plVar1 == 0) {
        plVar3 = (long *)plVar1[1];
      }
      else {
        plVar3 = (long *)FUN_1010f5360(param_1,param_2);
        plVar3[1] = plVar1[1];
      }
      *param_4 = plVar1;
      return plVar3;
    }
  }
LAB_1010f5604:
  *param_4 = 0;
  return plVar1;
}




undefined8 FUN_1010f564c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 1;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if ((param_2[3] == -1) && ((int)param_2[4] == -1)) {
      lVar3 = *param_2;
      if (lVar3 == 0) {
        uVar2 = 3;
      }
      else {
        *(long *)(lVar3 + 0x10) = param_2[2];
        if ((long *)param_2[2] != (long *)0x0) {
          *(long *)param_2[2] = lVar3;
        }
        uVar2 = 0;
        *param_2 = 0;
        *param_3 = param_1;
      }
    }
    else {
      plVar1 = (long *)FUN_1010f5360(param_2[3],param_2[4],param_1);
      if (plVar1 == param_2) {
        plVar1 = (long *)param_2[2];
        if (plVar1 == (long *)0x0) {
          if (*param_2 == 0) {
            plVar1 = (long *)param_2[1];
          }
          else {
            plVar1 = (long *)FUN_1010f5360(param_2[3],param_2[4]);
            plVar1[1] = param_2[1];
          }
        }
        else {
          lVar3 = param_2[3];
          plVar1[4] = param_2[4];
          plVar1[3] = lVar3;
          plVar1[1] = param_2[1];
          *plVar1 = *param_2;
        }
        uVar2 = 0;
        *param_3 = (long)plVar1;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}




undefined8
FUN_1010f5740(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_58;
  
  lVar4 = 0;
  *param_5 = 0;
  while( true ) {
    do {
      lVar2 = FUN_1010edb38(*param_1,0,1);
      if (lVar2 < 0) {
        return 0x1c;
      }
      iVar1 = FUN_1010f37c8(param_2,0xffffffff,0xffffffff,lVar2);
      if (iVar1 < 1) {
        return 0xffffffff;
      }
      uVar3 = FUN_1010d9a7c(param_2,param_3,param_4,&local_58);
    } while ((int)uVar3 == 0x51);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (param_4 - local_58 == 0) break;
    if (local_58 == 0) {
      return 0xffffffff;
    }
    param_3 = param_3 + local_58;
    lVar4 = local_58 + lVar4;
    param_4 = param_4 - local_58;
  }
  *param_5 = param_4 + lVar4;
  return 0;
}




void FUN_1010f5830(char *param_1,char *param_2,undefined8 param_3,int param_4,undefined8 *param_5,
                  uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long local_1d0;
  long local_1c8;
  long *local_1c0;
  undefined1 local_1b6;
  undefined1 local_1b4;
  undefined1 local_1b2;
  undefined1 local_1b0;
  char acStack_1ae [64];
  char local_16e [4];
  undefined4 local_16a;
  char local_166 [254];
  long local_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 0x1d0);
  uVar7 = *param_5;
  local_68 = lVar8;
  lVar4 = FUN_1010edb38(uVar7,0,1);
  if (lVar4 < 0) {
    FUN_1010d9258(uVar7,"Connection time-out");
    uVar7 = 0x1c;
    goto LAB_1010f5b38;
  }
  FUN_1010f6f0c(uVar1,0);
  FUN_1010d909c(uVar7,"SOCKS4 communication to %s:%d\n");
  local_16e[0] = '\x04';
  local_16e[1] = 1;
  local_16e[2] = (char)((ulong)param_3 >> 8);
  local_16e[3] = (char)param_3;
  if ((param_6 & 1) == 0) {
    iVar2 = FUN_1010d1744(param_5,param_2,param_3,&local_1c0);
    if (iVar2 == -1) {
      uVar7 = 5;
      goto LAB_1010f5b38;
    }
    if ((local_1c0 != (long *)0x0) && (*local_1c0 != 0)) {
      FUN_1010d1414(*local_1c0,acStack_1ae,0x40);
      iVar2 = _sscanf(acStack_1ae,"%hu.%hu.%hu.%hu");
      if (iVar2 == 4) {
        local_16a = CONCAT13(local_1b0,CONCAT12(local_1b2,CONCAT11(local_1b4,local_1b6)));
        FUN_1010d909c(uVar7,"SOCKS4 connect to %s (locally resolved)\n");
        FUN_1010d1aa4(uVar7,local_1c0);
        goto LAB_1010f5980;
      }
      FUN_1010d909c(uVar7,"SOCKS4 connect to %s (locally resolved)\n");
      FUN_1010d1aa4(uVar7,local_1c0);
    }
    FUN_1010d9258(uVar7,"Failed to resolve \"%s\" for SOCKS4 connect.");
    uVar7 = 6;
    goto LAB_1010f5b38;
  }
LAB_1010f5980:
  local_166[0] = '\0';
  if (param_1 == (char *)0x0) {
LAB_1010f59e0:
    sVar5 = _strlen(local_166);
    iVar2 = (int)sVar5 + 9;
    if ((param_6 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      local_16a = 0x1000000;
      sVar5 = _strlen(param_2);
      lVar4 = sVar5 + 1;
      if (lVar4 + iVar2 < 0x107) {
        _strcpy(local_16e + iVar2,param_2);
      }
      else {
        lVar4 = 0;
      }
    }
    iVar3 = FUN_1010d955c(param_5,uVar1,local_16e,lVar4 + iVar2,&local_1d0);
    if (iVar3 == 0 && local_1d0 == lVar4 + iVar2) {
      if ((lVar4 == 0) && (param_6 != 0)) {
        sVar5 = _strlen(param_2);
        iVar2 = FUN_1010d955c(param_5,uVar1,param_2,sVar5 + 1,&local_1d0);
        if ((iVar2 != 0) || (local_1d0 != sVar5 + 1)) goto LAB_1010f5adc;
      }
      iVar2 = FUN_1010f5740(param_5,uVar1,local_16e,8,&local_1c8);
      if ((iVar2 == 0) && (local_1c8 == 8)) {
        if (local_16e[0] == '\0') {
          switch(local_16e[1]) {
          case 'Z':
            FUN_1010d909c(uVar7,"SOCKS4%s request granted.\n");
            FUN_1010f6f0c(uVar1,1);
            uVar7 = 0;
            goto LAB_1010f5b38;
          case '[':
            pcVar6 = 
            "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed."
            ;
            break;
          case '\\':
            pcVar6 = 
            "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
            ;
            break;
          case ']':
            pcVar6 = 
            "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
            ;
            break;
          default:
            pcVar6 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
          }
        }
        else {
          pcVar6 = "SOCKS4 reply has wrong version, version should be 4.";
        }
      }
      else {
        pcVar6 = "Failed to receive SOCKS4 connect request ack.";
      }
    }
    else {
LAB_1010f5adc:
      pcVar6 = "Failed to send SOCKS4 connect request.";
    }
  }
  else {
    sVar5 = _strlen(param_1);
    if (sVar5 < 0xfe) {
      ___memcpy_chk(local_166,param_1,sVar5 + 1,0xfe);
      goto LAB_1010f59e0;
    }
    pcVar6 = "Too long SOCKS proxy name, can\'t use!\n";
  }
  FUN_1010d9258(uVar7,pcVar6);
  uVar7 = 7;
LAB_1010f5b38:
  if (lVar8 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar7);
}




void FUN_1010f5cc4(char *param_1,char *param_2,char *param_3,undefined4 param_4,int param_5,
                  undefined8 *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  size_t sVar9;
  size_t sVar10;
  char *pcVar11;
  char cVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *local_2d8;
  long local_2d0;
  long local_2c8;
  char local_2c0 [600];
  long local_68;
  
  lVar16 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = *(undefined4 *)((long)param_6 + (long)param_5 * 4 + 0x1d0);
  uVar15 = *param_6;
  iVar5 = *(int *)(param_6 + 0x34);
  local_68 = lVar16;
  sVar6 = _strlen(param_3);
  bVar2 = iVar5 == 5;
  if (sVar6 >= 0x100 && !bVar2) {
    FUN_1010d909c(uVar15,
                  "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                 );
  }
  lVar7 = FUN_1010edb38(uVar15,0,1);
  if (lVar7 < 0) {
    pcVar11 = "Connection time-out";
LAB_1010f5dac:
    FUN_1010d9258(uVar15,pcVar11);
    uVar8 = 0x1c;
    goto LAB_1010f5eac;
  }
  FUN_1010f6f0c(uVar1,1);
  uVar3 = FUN_1010f37c8(0xffffffff,0xffffffff,uVar1,lVar7);
  if (uVar3 == 0) {
    uVar15 = *param_6;
    pcVar11 = "SOCKS5: connection timeout";
    goto LAB_1010f5dac;
  }
  if (uVar3 == 0xffffffff) {
    uVar15 = *param_6;
    pcVar11 = "SOCKS5: no connection here";
    goto LAB_1010f5e80;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uVar15 = *param_6;
    pcVar11 = "SOCKS5: error occurred during connection";
    goto LAB_1010f5e80;
  }
  cVar12 = '\x01';
  if (param_1 != (char *)0x0) {
    cVar12 = '\x02';
  }
  local_2c0[1] = cVar12;
  local_2c0[0] = 5;
  local_2c0[2] = 0;
  local_2c0[3] = '\x02';
  FUN_1010f6f0c(uVar1,0);
  iVar4 = FUN_1010d955c(param_6,uVar1,local_2c0,cVar12 + '\x02',&local_2d0);
  if ((iVar4 != 0) || (local_2d0 != (ulong)(byte)local_2c0[1] + 2)) {
    pcVar11 = "Unable to send initial SOCKS5 request.";
    goto LAB_1010f5e94;
  }
  FUN_1010f6f0c(uVar1,1);
  uVar3 = FUN_1010f37c8(uVar1,0xffffffff,0xffffffff,lVar7);
  lVar16 = *(long *)PTR____stack_chk_guard_101444218;
  if (uVar3 == 0) {
    uVar15 = *param_6;
    pcVar11 = "SOCKS5 read timeout";
    goto LAB_1010f5dac;
  }
  if (uVar3 == 0xffffffff) {
    uVar15 = *param_6;
    pcVar11 = "SOCKS5 nothing to read";
    goto LAB_1010f5e80;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    FUN_1010d9258(*param_6,"SOCKS5 read error occurred");
    uVar8 = 0x38;
    goto LAB_1010f5eac;
  }
  FUN_1010f6f0c(uVar1,0);
  iVar4 = FUN_1010f5740(param_6,uVar1,local_2c0,2,&local_2c8);
  if (iVar4 != 0 || local_2c8 != 2) {
    pcVar11 = "Unable to receive initial SOCKS5 response.";
    goto LAB_1010f5e80;
  }
  if (local_2c0[0] != '\x05') {
    pcVar11 = "Received invalid version in initial SOCKS5 response.";
    goto LAB_1010f5e80;
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_2c0[1]) {
  case '\0':
    pcVar11 = "SOCKS5 GSSAPI per-message authentication is not supported.";
    break;
  case '\x01':
    if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
      sVar10 = 0;
      sVar9 = 0;
      local_2c0[0] = '\x01';
      local_2c0[1] = '\0';
    }
    else {
      sVar9 = _strlen(param_1);
      sVar10 = _strlen(param_2);
      local_2c0[1] = (char)sVar9;
      local_2c0[0] = 1;
      if (sVar9 == 0) {
        sVar9 = 0;
      }
      else {
        ___memcpy_chk(local_2c0 + 2,param_1,sVar9,0x256);
      }
    }
    local_2c0[sVar9 + 2] = (char)sVar10;
    if ((param_2 != (char *)0x0) && (sVar10 != 0)) {
      _memcpy(local_2c0 + sVar9 + 3,param_2,sVar10);
    }
    lVar16 = sVar9 + 3 + sVar10;
    iVar4 = FUN_1010d955c(param_6,uVar1,local_2c0,lVar16,&local_2d0);
    if ((iVar4 == 0) && (lVar16 == local_2d0)) {
      iVar4 = FUN_1010f5740(param_6,uVar1,local_2c0,2,&local_2c8);
      if ((iVar4 == 0) && (local_2c8 == 2)) {
        lVar16 = *(long *)PTR____stack_chk_guard_101444218;
        if (local_2c0[1] == '\0') goto switchD_1010f5f9c_caseD_ff;
        pcVar11 = "User was rejected by the SOCKS5 server (%d %d).";
        break;
      }
      pcVar11 = "Unable to receive SOCKS5 sub-negotiation response.";
    }
    else {
      pcVar11 = "Failed to send SOCKS5 sub-negotiation request.";
    }
LAB_1010f5e94:
    FUN_1010d9258(uVar15,pcVar11);
    uVar8 = 7;
    lVar16 = *(long *)PTR____stack_chk_guard_101444218;
    goto LAB_1010f5eac;
  case -1:
switchD_1010f5f9c_caseD_ff:
    local_2c0[0] = '\x05';
    local_2c0[1] = '\x01';
    local_2c0[2] = 0;
    if ((sVar6 < 0x100 || bVar2) && iVar5 != 5) {
      local_2c0[3] = '\x03';
      local_2c0[4] = (char)sVar6;
      ___memcpy_chk(local_2c0 + 5,param_3,sVar6,0x253);
      lVar7 = sVar6 + 5;
    }
    else {
      iVar5 = FUN_1010d1744(param_6,param_3,param_4,&local_2d8);
      uVar8 = 6;
      if ((iVar5 == -1) || (iVar5 == 1)) goto LAB_1010f5eac;
      if ((local_2d8 == (long *)0x0) || (lVar7 = *local_2d8, lVar7 == 0)) {
LAB_1010f6418:
        FUN_1010d9258(uVar15,"Failed to resolve \"%s\" for SOCKS5 connect.");
        uVar8 = 6;
        goto LAB_1010f5eac;
      }
      if (*(int *)(lVar7 + 4) == 2) {
        lVar17 = 0;
        local_2c0[3] = '\x01';
        lVar7 = *(long *)(lVar7 + 0x20);
        do {
          local_2c0[lVar17 + 4] = *(char *)(lVar7 + 4 + lVar17);
          FUN_1010d909c(uVar15,"%d\n");
          lVar17 = lVar17 + 1;
        } while (lVar17 != 4);
        lVar7 = 8;
      }
      else {
        if (*(int *)(lVar7 + 4) != 0x1e) {
          FUN_1010d1aa4(uVar15);
          goto LAB_1010f6418;
        }
        lVar17 = 0;
        local_2c0[3] = '\x04';
        lVar14 = *(long *)(lVar7 + 0x20);
        lVar7 = 0x14;
        do {
          local_2c0[lVar17 + 4] = *(char *)(lVar14 + 8 + lVar17);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x10);
      }
      FUN_1010d1aa4(uVar15,local_2d8);
    }
    local_2c0[lVar7] = (char)((uint)param_4 >> 8);
    local_2c0[lVar7 + 1] = (char)param_4;
    iVar5 = FUN_1010d955c(param_6,uVar1,local_2c0,lVar7 + 2,&local_2d0);
    if (iVar5 != 0 || lVar7 + 2 != local_2d0) {
      pcVar11 = "Failed to send SOCKS5 connect request.";
      break;
    }
    iVar5 = FUN_1010f5740(param_6,uVar1,local_2c0,10,&local_2c8);
    if ((iVar5 != 0) || (local_2c8 != 10)) {
LAB_1010f6304:
      pcVar11 = "Failed to receive SOCKS5 connect request ack.";
      break;
    }
    if (local_2c0[0] != '\x05') {
      pcVar11 = "SOCKS5 reply has wrong version, version should be 5.";
      break;
    }
    if (local_2c0[1] == '\0') {
      uVar13 = 0x16;
      if ((local_2c0[3] == '\x04') ||
         ((local_2c0[3] == '\x03' && (uVar13 = (ulong)(byte)local_2c0[4] + 7, 10 < uVar13)))) {
        iVar5 = FUN_1010f5740(param_6,uVar1,local_2c0 + 10,uVar13 - 10,&local_2c8);
        if ((iVar5 != 0) || (uVar13 - 10 != local_2c8)) goto LAB_1010f6304;
      }
      FUN_1010f6f0c(uVar1,1);
      uVar8 = 0;
      goto LAB_1010f5eac;
    }
    if (local_2c0[3] == '\x04') {
      pcVar11 = 
      "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
      ;
      break;
    }
    if (local_2c0[3] == '\x03') {
      pcVar11 = "Can\'t complete SOCKS5 connection to %s:%d. (%d)";
      break;
    }
    if (local_2c0[3] == '\x01') {
      pcVar11 = "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)";
      break;
    }
    goto LAB_1010f5e84;
  default:
    pcVar11 = "Undocumented SOCKS5 mode attempted to be used by server.";
  }
LAB_1010f5e80:
  FUN_1010d9258(uVar15,pcVar11);
LAB_1010f5e84:
  uVar8 = 7;
LAB_1010f5eac:
  if (lVar16 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar8);
}




undefined8 FUN_1010f6448(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x41;
  switch(param_1) {
  case 0x62:
    return 0x42;
  case 99:
    return 0x43;
  case 100:
    return 0x44;
  case 0x65:
    return 0x45;
  case 0x66:
    return 0x46;
  case 0x67:
    return 0x47;
  case 0x68:
    return 0x48;
  case 0x69:
    return 0x49;
  case 0x6a:
    return 0x4a;
  case 0x6b:
    return 0x4b;
  case 0x6c:
    return 0x4c;
  case 0x6d:
    return 0x4d;
  case 0x6e:
    return 0x4e;
  case 0x6f:
    return 0x4f;
  case 0x70:
    return 0x50;
  case 0x71:
    return 0x51;
  case 0x72:
    return 0x52;
  case 0x73:
    return 0x53;
  case 0x74:
    return 0x54;
  case 0x75:
    return 0x55;
  case 0x76:
    return 0x56;
  case 0x77:
    return 0x57;
  case 0x78:
    return 0x58;
  case 0x79:
    return 0x59;
  case 0x7a:
    uVar1 = 0x5a;
  }
  return uVar1;
}




bool FUN_1010f659c(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = *param_1;
  while (cVar4 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_2;
    if (cVar1 == '\0') goto LAB_1010f65f4;
    iVar2 = FUN_1010f6448((int)cVar4);
    iVar3 = FUN_1010f6448((int)cVar1);
    if (iVar2 != iVar3) goto LAB_1010f65f4;
    param_2 = param_2 + 1;
    cVar4 = *param_1;
  }
  cVar4 = '\0';
LAB_1010f65f4:
  iVar2 = FUN_1010f6448((int)cVar4);
  iVar3 = FUN_1010f6448((long)*param_2);
  return iVar2 == iVar3;
}




bool FUN_1010f6624(char *param_1,char *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  cVar5 = *param_1;
  while (cVar5 != '\0') {
    param_1 = param_1 + 1;
    if ((param_3 == 0) || (cVar1 = *param_2, cVar1 == '\0')) goto LAB_1010f6688;
    iVar3 = FUN_1010f6448((int)cVar5);
    iVar4 = FUN_1010f6448((int)cVar1);
    if (iVar3 != iVar4) goto LAB_1010f6688;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    cVar5 = *param_1;
  }
  cVar5 = '\0';
LAB_1010f6688:
  if (param_3 == 0) {
    bVar2 = true;
  }
  else {
    iVar3 = FUN_1010f6448((int)cVar5);
    iVar4 = FUN_1010f6448((long)*param_2);
    bVar2 = iVar3 == iVar4;
  }
  return bVar2;
}




void FUN_1010f66c4(undefined1 *param_1,char *param_2,long param_3)

{
  undefined1 uVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = FUN_1010f6448((long)*param_2);
    *param_1 = uVar1;
    if (*param_2 == '\0') break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return;
}




void FUN_1010f6718(char *param_1,char *param_2,addrinfo *param_3,addrinfo **param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  addrinfo *paVar4;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _atoi(param_2);
  }
  iVar3 = _getaddrinfo(param_1,param_2,param_3,param_4);
  if (((uVar2 != 0) && (iVar3 == 0)) && (paVar4 = *param_4, paVar4 != (addrinfo *)0x0)) {
    do {
      if (((paVar4->ai_family == 0x1e) || (paVar4->ai_family == 2)) &&
         (pcVar1 = paVar4->ai_addr->sa_data, *(short *)pcVar1 == 0)) {
        *(ushort *)pcVar1 = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xffff) << 8);
      }
      paVar4 = paVar4->ai_next;
    } while (paVar4 != (addrinfo *)0x0);
  }
  return;
}




void FUN_1010f67c8(long param_1)

{
  long lVar1;
  
  while (param_1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)PTR__free_101873628)();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)PTR__free_101873628)();
    }
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__free_101873628)(param_1);
    param_1 = lVar1;
  }
  return;
}




long FUN_1010f6830(void)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *in_x3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  addrinfo *paVar8;
  undefined1 auVar9 [16];
  addrinfo *local_68;
  
  *in_x3 = 0;
  lVar1 = FUN_1010f6718();
  if ((int)lVar1 != 0) {
    return lVar1;
  }
  puVar7 = (undefined8 *)0x0;
  if (local_68 != (addrinfo *)0x0) {
    puVar7 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)0x0;
    paVar8 = local_68;
    do {
      sVar5 = 0x10;
      puVar4 = puVar7;
      puVar2 = puVar6;
      if (paVar8->ai_family == 2) {
LAB_1010f68a4:
        if ((paVar8->ai_addr != (sockaddr *)0x0) &&
           (paVar8->ai_addrlen != 0 && sVar5 <= paVar8->ai_addrlen)) {
          puVar2 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x30);
          if (puVar2 != (undefined8 *)0x0) {
            auVar9._0_4_ = paVar8->ai_flags;
            auVar9._4_4_ = paVar8->ai_family;
            auVar9._8_4_ = paVar8->ai_socktype;
            auVar9._12_4_ = paVar8->ai_protocol;
            *puVar2 = auVar9._0_8_;
            auVar9 = NEON_ext(auVar9,auVar9,8,1);
            puVar2[1] = auVar9._0_8_;
            *(int *)(puVar2 + 2) = (int)sVar5;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            pvVar3 = (void *)(*(code *)PTR__malloc_101873620)(sVar5);
            puVar2[4] = pvVar3;
            if (pvVar3 != (void *)0x0) {
              _memcpy(pvVar3,paVar8->ai_addr,sVar5);
              if (paVar8->ai_canonname != (char *)0x0) {
                lVar1 = (*(code *)PTR__strdup_101873638)();
                puVar2[3] = lVar1;
                if (lVar1 == 0) {
                  (*(code *)PTR__free_101873628)(puVar2[4]);
                  goto LAB_1010f6974;
                }
              }
              puVar4 = puVar2;
              if (puVar7 != (undefined8 *)0x0) {
                puVar4 = puVar7;
              }
              if (puVar6 != (undefined8 *)0x0) {
                puVar6[5] = puVar2;
              }
              goto LAB_1010f693c;
            }
LAB_1010f6974:
            (*(code *)PTR__free_101873628)(puVar2);
          }
          lVar1 = 6;
          goto LAB_1010f6980;
        }
      }
      else if (paVar8->ai_family == 0x1e) {
        sVar5 = 0x1c;
        goto LAB_1010f68a4;
      }
LAB_1010f693c:
      paVar8 = paVar8->ai_next;
      puVar7 = puVar4;
      puVar6 = puVar2;
    } while (paVar8 != (addrinfo *)0x0);
    lVar1 = 0;
LAB_1010f6980:
    if (local_68 != (addrinfo *)0x0) {
      _freeaddrinfo(local_68);
    }
    if ((int)lVar1 != 0) {
      FUN_1010f67c8(puVar7);
      puVar7 = (undefined8 *)0x0;
      goto LAB_1010f69b0;
    }
  }
  lVar1 = (ulong)(puVar7 == (undefined8 *)0x0) << 3;
LAB_1010f69b0:
  *in_x3 = (long)puVar7;
  return lVar1;
}




long FUN_1010f69d8(undefined8 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar9 = *(undefined8 **)param_1[3], puVar9 == (undefined8 *)0x0)) {
LAB_1010f6b28:
    lVar6 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 2);
    lVar7 = 8;
    lVar5 = 0;
    lVar8 = 0;
    do {
      uVar4 = 0x1c;
      if (iVar3 != 0x1e) {
        uVar4 = 0x10;
      }
      lVar1 = (*(code *)PTR__calloc_101873640)(1,0x30);
      if (lVar1 == 0) {
LAB_1010f6b20:
        FUN_1010f67c8(lVar5);
        goto LAB_1010f6b28;
      }
      lVar2 = (*(code *)PTR__strdup_101873638)(*param_1);
      *(long *)(lVar1 + 0x18) = lVar2;
      if (lVar2 == 0) {
LAB_1010f6b18:
        (*(code *)PTR__free_101873628)(lVar1);
        goto LAB_1010f6b20;
      }
      lVar2 = (*(code *)PTR__calloc_101873640)(1,uVar4);
      *(long *)(lVar1 + 0x20) = lVar2;
      if (lVar2 == 0) {
        (*(code *)PTR__free_101873628)(*(undefined8 *)(lVar1 + 0x18));
        goto LAB_1010f6b18;
      }
      lVar6 = lVar1;
      if (lVar5 != 0) {
        lVar6 = lVar5;
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x28) = lVar1;
      }
      iVar3 = *(int *)(param_1 + 2);
      *(int *)(lVar1 + 4) = iVar3;
      *(undefined4 *)(lVar1 + 8) = 1;
      *(undefined4 *)(lVar1 + 0x10) = uVar4;
      if (iVar3 == 0x1e) {
        uVar10 = *puVar9;
        *(undefined8 *)(lVar2 + 0x10) = puVar9[1];
        *(undefined8 *)(lVar2 + 8) = uVar10;
LAB_1010f6acc:
        iVar3 = *(int *)(param_1 + 2);
        *(char *)(lVar2 + 1) = (char)iVar3;
        *(ushort *)(lVar2 + 2) = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xffff) << 8);
      }
      else if (iVar3 == 2) {
        *(undefined4 *)(lVar2 + 4) = *(undefined4 *)puVar9;
        goto LAB_1010f6acc;
      }
      puVar9 = *(undefined8 **)(param_1[3] + lVar7);
      lVar7 = lVar7 + 8;
      lVar5 = lVar6;
      lVar8 = lVar1;
    } while (puVar9 != (undefined8 *)0x0);
  }
  return lVar6;
}




undefined8 FUN_1010f6b4c(int param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  plVar1 = (long *)(*(code *)PTR__malloc_101873620)(0x40);
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR__strdup_101873638)(param_3);
    if (lVar2 != 0) {
      if (param_1 == 0x1e) {
        lVar5 = *param_2;
        plVar1[5] = param_2[1];
        plVar1[4] = lVar5;
        uVar4 = 0x10;
LAB_1010f6bec:
        *plVar1 = lVar2;
        plVar1[1] = 0;
        *(int *)(plVar1 + 2) = (int)(short)param_1;
        *(undefined4 *)((long)plVar1 + 0x14) = uVar4;
        plVar1[3] = (long)(plVar1 + 6);
        plVar1[6] = (long)(plVar1 + 4);
        plVar1[7] = 0;
        uVar3 = FUN_1010f69d8(plVar1,param_4);
        (*(code *)PTR__free_101873628)(lVar2);
        (*(code *)PTR__free_101873628)(plVar1);
        return uVar3;
      }
      if (param_1 == 2) {
        *(int *)(plVar1 + 4) = (int)*param_2;
        uVar4 = 4;
        goto LAB_1010f6bec;
      }
      (*(code *)PTR__free_101873628)(lVar2);
    }
    (*(code *)PTR__free_101873628)(plVar1);
  }
  return 0;
}




undefined8 FUN_1010f6c74(char *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  iVar1 = _inet_pton(2,param_1,auStack_28);
  if (iVar1 < 1) {
    iVar1 = _inet_pton(0x1e,param_1,auStack_38);
    if (iVar1 < 1) {
      return 0;
    }
    uVar2 = 0x1e;
    puVar3 = auStack_38;
  }
  else {
    uVar2 = 2;
    puVar3 = auStack_28;
  }
  uVar2 = FUN_1010f6b4c(uVar2,puVar3,param_1,param_2);
  return uVar2;
}




long FUN_1010f6cf4(char *param_1)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  
  lVar1 = (*(code *)PTR__calloc_101873640)(1,0x30);
  if (lVar1 != 0) {
    lVar2 = (*(code *)PTR__calloc_101873640)(1,0x6a);
    *(long *)(lVar1 + 0x20) = lVar2;
    if (lVar2 != 0) {
      sVar3 = _strlen(param_1);
      if (sVar3 < 0x68) {
        *(undefined4 *)(lVar1 + 4) = 1;
        *(undefined4 *)(lVar1 + 8) = 1;
        *(undefined4 *)(lVar1 + 0x10) = 0x6a;
        *(undefined1 *)(lVar2 + 1) = 1;
        _memcpy((void *)(lVar2 + 2),param_1,sVar3 + 1);
        return lVar1;
      }
      (*(code *)PTR__free_101873628)(lVar2);
    }
    (*(code *)PTR__free_101873628)(lVar1);
  }
  return 0;
}




undefined8 * FUN_1010f6dc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = 0;
    puVar3 = param_1;
    if (param_1 != (undefined8 *)0x0) {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined8 *)puVar2[1];
      } while (puVar3 != (undefined8 *)0x0);
      puVar2[1] = puVar1;
      puVar1 = param_1;
    }
  }
  return puVar1;
}




long * FUN_1010f6e28(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = (*(code *)PTR__strdup_101873638)(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)(*(code *)PTR__malloc_101873620)(0x10);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = 0;
      plVar4 = param_1;
      if (param_1 != (long *)0x0) {
        do {
          plVar3 = plVar4;
          plVar4 = (long *)plVar3[1];
        } while (plVar4 != (long *)0x0);
        plVar3[1] = (long)plVar2;
        plVar2 = param_1;
      }
      if (plVar2 != (long *)0x0) {
        return plVar2;
      }
    }
    (*(code *)PTR__free_101873628)(lVar1);
  }
  return (long *)0x0;
}




void FUN_1010f6eb4(long *param_1)

{
  long *plVar1;
  
  while (param_1 != (long *)0x0) {
    plVar1 = (long *)param_1[1];
    if (*param_1 != 0) {
      (*(code *)PTR__free_101873628)();
      *param_1 = 0;
    }
    (*(code *)PTR__free_101873628)(param_1);
    param_1 = plVar1;
  }
  return;
}




int FUN_1010f6f0c(int param_1)

{
  int iVar1;
  
  _fcntl(param_1,3);
  iVar1 = _fcntl(param_1,4);
  return iVar1;
}




char * FUN_1010f6f60(char *param_1,char param_2,long param_3)

{
  char *pcVar1;
  
  if (-1 < param_3 + -1) {
    pcVar1 = param_1 + param_3 + -1;
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + -1;
    } while (param_1 <= pcVar1);
  }
  return (char *)0x0;
}




undefined8 FUN_1010f6f90(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = (*(code *)PTR__calloc_101873640)(0x48,1);
  *(long *)(lVar4 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    if ((*(char *)((long)param_1 + 0x2cb) != '\0') && (*(char *)(lVar4 + 0x4f2) == '\0')) {
      ppuVar1 = &PTR_s_IMAP_10182f910;
      if ((undefined **)param_1[0x61] != &PTR_s_IMAP_10182f810) {
        ppuVar1 = &PTR_s_IMAPS_10182f990;
      }
      param_1[0x61] = (long)ppuVar1;
      uVar3 = (*(code *)ppuVar1[1])(param_1);
      return uVar3;
    }
    uVar3 = 0;
    *(long *)(lVar4 + 0x8ab0) = *(long *)(lVar4 + 0x8ab0) + 1;
  }
  return uVar3;
}




ulong FUN_1010f7038(long *param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  char *pcVar15;
  long local_78;
  long local_70;
  long local_68;
  
  lVar9 = 0;
  *param_2 = '\0';
  lVar12 = *param_1;
  lVar14 = *(long *)(lVar12 + 0x218);
  pcVar6 = *(char **)(lVar12 + 0x8ab0);
  do {
    switch(pcVar6[lVar9]) {
    case '!':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case '=':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '_':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
    case '~':
      lVar9 = lVar9 + 1;
      break;
    default:
      goto switchD_1010f70a0_caseD_22;
    }
  } while( true );
switchD_1010f70a0_caseD_22:
  pcVar15 = pcVar6 + lVar9;
  if (lVar9 == 0) {
    *(undefined8 *)(lVar14 + 8) = 0;
  }
  else {
    pcVar10 = pcVar15;
    if ((pcVar6 < pcVar15) && (pcVar10 = pcVar6 + lVar9 + -1, pcVar6[lVar9 + -1] != '/')) {
      pcVar10 = pcVar15;
    }
    uVar4 = FUN_1010e5f8c(lVar12,pcVar6,(long)pcVar10 - (long)pcVar6,lVar14 + 8,0,1);
    if ((int)uVar4 != 0) goto LAB_1010f73d4;
  }
  cVar7 = *pcVar15;
joined_r0x0001010f70f8:
  if (cVar7 == ';') {
    pcVar6 = pcVar15 + 1;
    pcVar10 = pcVar6;
    do {
      pcVar11 = pcVar10;
      cVar7 = *pcVar11;
      if (cVar7 == '=') break;
      pcVar10 = pcVar15 + 2;
      pcVar15 = pcVar11;
    } while (cVar7 != '\0');
    if (cVar7 == '\0') goto LAB_1010f73d0;
    uVar4 = FUN_1010e5f8c(lVar12,pcVar6,(long)pcVar11 - (long)pcVar6,&local_68,0,1);
    if ((int)uVar4 == 0) {
      pcVar6 = pcVar11 + 1;
      pcVar15 = pcVar6;
      do {
        switch(*pcVar15) {
        case '!':
        case '$':
        case '%':
        case '&':
        case '\'':
        case '(':
        case ')':
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case ':':
        case '=':
        case '@':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '_':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case '~':
          pcVar10 = pcVar11 + 2;
          pcVar11 = pcVar15;
          pcVar15 = pcVar10;
          break;
        default:
          goto switchD_1010f719c_caseD_22;
        }
      } while( true );
    }
    goto LAB_1010f73d4;
  }
  if ((*(long *)(lVar14 + 8) != 0) && (cVar7 == '?' && *(long *)(lVar14 + 0x18) == 0)) {
    pcVar6 = pcVar15 + 1;
    pcVar10 = pcVar6;
    do {
      pcVar11 = pcVar10;
      switch(*pcVar11) {
      case '!':
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '/':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
      case '=':
      case '@':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '_':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case 'z':
      case '~':
        pcVar10 = pcVar15 + 2;
        pcVar15 = pcVar11;
        break;
      default:
        goto switchD_1010f735c_caseD_22;
      }
    } while( true );
  }
LAB_1010f7384:
  uVar1 = 0;
  if (cVar7 != '\0') {
    uVar1 = 3;
  }
  uVar4 = (ulong)uVar1;
  goto LAB_1010f73d4;
switchD_1010f719c_caseD_22:
  uVar4 = FUN_1010e5f8c(lVar12,pcVar6,(long)pcVar15 - (long)pcVar6,&local_70,&local_78,1);
  if ((int)uVar4 != 0) {
    if (local_68 != 0) {
      (*(code *)PTR__free_101873628)();
      local_68 = 0;
    }
    goto LAB_1010f73d4;
  }
  iVar3 = FUN_1010f659c(local_68,"UIDVALIDITY");
  if ((iVar3 == 0) || (*(long *)(lVar14 + 0x10) != 0)) {
    iVar3 = FUN_1010f659c(local_68,"UID");
    if ((iVar3 == 0) || (*(long *)(lVar14 + 0x18) != 0)) {
      iVar3 = FUN_1010f659c(local_68,"SECTION");
      if ((iVar3 == 0) || (*(long *)(lVar14 + 0x20) != 0)) {
        iVar3 = FUN_1010f659c(local_68,"PARTIAL");
        if ((iVar3 == 0) || (*(long *)(lVar14 + 0x28) != 0)) {
          if (local_68 != 0) {
            (*(code *)PTR__free_101873628)();
            local_68 = 0;
          }
          if (local_70 != 0) {
            (*(code *)PTR__free_101873628)();
            local_70 = 0;
          }
LAB_1010f73d0:
          uVar4 = 3;
          goto LAB_1010f73d4;
        }
        if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
          *(undefined1 *)(local_70 + local_78 + -1) = 0;
        }
        *(long *)(lVar14 + 0x28) = local_70;
      }
      else {
        if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
          *(undefined1 *)(local_70 + local_78 + -1) = 0;
        }
        *(long *)(lVar14 + 0x20) = local_70;
      }
    }
    else {
      if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
        *(undefined1 *)(local_70 + local_78 + -1) = 0;
      }
      *(long *)(lVar14 + 0x18) = local_70;
    }
  }
  else {
    if ((local_78 != 0) && (*(char *)(local_70 + local_78 + -1) == '/')) {
      *(undefined1 *)(local_70 + local_78 + -1) = 0;
    }
    *(long *)(lVar14 + 0x10) = local_70;
  }
  local_70 = 0;
  if (local_68 != 0) {
    (*(code *)PTR__free_101873628)();
    local_68 = 0;
    if (local_70 != 0) {
      (*(code *)PTR__free_101873628)();
      local_70 = 0;
    }
  }
  cVar7 = *pcVar15;
  goto joined_r0x0001010f70f8;
switchD_1010f735c_caseD_22:
  uVar4 = FUN_1010e5f8c(lVar12,pcVar6,(long)pcVar11 - (long)pcVar6,lVar14 + 0x30,0,1);
  if ((int)uVar4 == 0) {
    cVar7 = *pcVar11;
    goto LAB_1010f7384;
  }
LAB_1010f73d4:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar9 = *param_1;
  if (*(long *)(lVar9 + 0x570) != 0) {
    lVar12 = *(long *)(lVar9 + 0x218);
    uVar4 = FUN_1010e5f8c(lVar9,*(long *)(lVar9 + 0x570),0,(long *)(lVar12 + 0x38),0,1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    pcVar6 = (char *)(*(long *)(lVar12 + 0x38) + -1);
    do {
      pcVar6 = pcVar6 + 1;
      cVar7 = *pcVar6;
      if (cVar7 == ' ') break;
    } while (cVar7 != '\0');
    if (cVar7 != '\0') {
      uVar5 = (*(code *)PTR__strdup_101873638)(pcVar6);
      *(undefined8 *)(lVar12 + 0x40) = uVar5;
      *pcVar6 = '\0';
      if (*(long *)(lVar12 + 0x40) == 0) {
        return 0x1b;
      }
    }
  }
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + 0x78) = 0xffffffffffffffff;
  FUN_1010d2468(lVar9,0);
  FUN_1010d2460(lVar9,0);
  FUN_1010d22f4(lVar9,0xffffffffffffffff);
  FUN_1010d22cc(lVar9,0xffffffffffffffff);
  lVar9 = *param_1;
  puVar13 = *(undefined4 **)(lVar9 + 0x218);
  if (*(char *)(lVar9 + 0x4ff) != '\0') {
    *puVar13 = 1;
  }
  bVar2 = false;
  *param_2 = '\0';
  pcVar6 = *(char **)(puVar13 + 2);
  if (pcVar6 != (char *)0x0) {
    if ((((char *)param_1[0xb9] == (char *)0x0) ||
        (iVar3 = _strcmp(pcVar6,(char *)param_1[0xb9]), iVar3 != 0)) ||
       ((*(char **)(puVar13 + 4) != (char *)0x0 &&
        (((char *)param_1[0xba] != (char *)0x0 &&
         (iVar3 = _strcmp(*(char **)(puVar13 + 4),(char *)param_1[0xba]), iVar3 != 0)))))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (*(char *)(lVar9 + 0x501) == '\0') {
    if (*(long *)(puVar13 + 0xe) == 0) {
      if (!bVar2) {
        if ((pcVar6 != (char *)0x0) &&
           ((*(long *)(puVar13 + 6) != 0 || (*(long *)(puVar13 + 0xc) != 0)))) goto LAB_1010f75d0;
        goto LAB_1010f768c;
      }
      if (*(long *)(puVar13 + 6) == 0) {
        if (*(long *)(puVar13 + 0xc) == 0) goto LAB_1010f768c;
        uVar4 = FUN_1010f9adc(param_1);
      }
      else {
        uVar4 = FUN_1010f9b48(param_1);
      }
    }
    else {
      if (!(bool)(pcVar6 == (char *)0x0 | bVar2)) {
LAB_1010f75d0:
        if (param_1[0xb9] != 0) {
          (*(code *)PTR__free_101873628)();
          param_1[0xb9] = 0;
        }
        if (param_1[0xba] != 0) {
          (*(code *)PTR__free_101873628)();
          param_1[0xba] = 0;
        }
        if (*(long *)(puVar13 + 2) == 0) {
          lVar9 = *param_1;
          pcVar6 = "Cannot SELECT without a mailbox.";
LAB_1010f766c:
          FUN_1010d9258(lVar9,pcVar6);
          return 3;
        }
        lVar9 = FUN_1010f9800();
        if (lVar9 == 0) {
          return 0x1b;
        }
        uVar4 = FUN_1010f92f4(param_1,"SELECT %s");
        (*(code *)PTR__free_101873628)(lVar9);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar8 = 0x15;
        goto LAB_1010f7650;
      }
LAB_1010f768c:
      uVar4 = FUN_1010f9a08(param_1);
    }
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else {
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "Cannot APPEND without a mailbox.";
      goto LAB_1010f766c;
    }
    if (*(long *)(lVar9 + 0x8ae8) < 0) {
      FUN_1010d9258(lVar9,"Cannot APPEND with unknown input file size\n");
      return 0x19;
    }
    lVar9 = FUN_1010f9800(pcVar6);
    if (lVar9 == 0) {
      return 0x1b;
    }
    uVar4 = FUN_1010f92f4(param_1,"APPEND %s (\\Seen) {%ld}");
    (*(code *)PTR__free_101873628)(lVar9);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar8 = 0x18;
LAB_1010f7650:
    *(undefined4 *)(param_1 + 0xb4) = uVar8;
  }
  uVar4 = FUN_1010f7fec(param_1,param_2);
  if ((int)uVar4 == 0) {
    if (*param_2 != '\0') {
      FUN_1010f9d10(param_1,*(char *)((long)param_1 + 0x2d1) != '\0');
    }
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_1010f7b60(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = *(undefined4 **)(lVar2 + 0x218);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if ((int)param_2 != 0) {
    *(undefined1 *)(param_1 + 0x59) = 1;
    goto LAB_1010f7c0c;
  }
  if ((*(char *)(lVar2 + 0x521) != '\0') || (*(long *)(puVar3 + 0xe) != 0)) {
LAB_1010f7c08:
    param_2 = 0;
    goto LAB_1010f7c0c;
  }
  if (*(long *)(puVar3 + 6) == 0) {
    if (*(char *)(lVar2 + 0x501) == '\0') goto LAB_1010f7c08;
LAB_1010f7bcc:
    param_2 = FUN_1010fdc74(param_1 + 0xa6,"%s");
    if ((int)param_2 != 0) goto LAB_1010f7c0c;
    uVar1 = 0x19;
  }
  else {
    if (*(char *)(lVar2 + 0x501) != '\0') goto LAB_1010f7bcc;
    uVar1 = 0x17;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  param_2 = FUN_1010f9cc8(param_1);
LAB_1010f7c0c:
  if (*(long *)(puVar3 + 2) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 2) = 0;
  }
  if (*(long *)(puVar3 + 4) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 4) = 0;
  }
  if (*(long *)(puVar3 + 6) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 6) = 0;
  }
  if (*(long *)(puVar3 + 8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  if (*(long *)(puVar3 + 10) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 10) = 0;
  }
  if (*(long *)(puVar3 + 0xc) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 0xc) = 0;
  }
  if (*(long *)(puVar3 + 0xe) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 0xe) = 0;
  }
  if (*(long *)(puVar3 + 0x10) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar3 + 0x10) = 0;
  }
  *puVar3 = 0;
  return param_2;
}




undefined8 FUN_1010f7d08(long param_1,undefined1 *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  bool bVar9;
  long lVar10;
  char *pcVar11;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x580) = 1800000;
  *(code **)(param_1 + 0x590) = FUN_1010f815c;
  *(code **)(param_1 + 0x598) = FUN_1010f8f4c;
  *(long *)(param_1 + 0x588) = param_1;
  *(undefined8 *)(param_1 + 0x5ac) = 0xffffffffffffffff;
  FUN_1010fdaec(param_1 + 0x530);
  bVar9 = true;
  pcVar4 = *(char **)(param_1 + 0x180);
  uVar5 = 0;
  do {
    do {
      uVar7 = uVar5;
      if ((pcVar4 == (char *)0x0) || (cVar2 = *pcVar4, pcVar8 = pcVar4, cVar2 == '\0')) {
        if ((int)uVar7 == 0) {
          *(undefined4 *)(param_1 + 0x5a0) = 1;
          *(undefined2 *)(param_1 + 0x5bc) = 0x2a;
          uVar5 = FUN_1010f7fec(param_1,param_2);
          return uVar5;
        }
        return uVar7;
      }
      while ((cVar2 != '\0' && (cVar2 != '='))) {
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar8;
      }
      iVar3 = FUN_1010eb504(pcVar4,"AUTH",4);
      pcVar4 = pcVar8;
      uVar5 = 3;
    } while (iVar3 == 0);
    pcVar4 = pcVar8 + 1;
    if (bVar9) {
      *(undefined8 *)(param_1 + 0x5ac) = 0;
    }
    lVar10 = 0;
    pcVar11 = pcVar4;
    while ((*pcVar11 != '\0' && (*pcVar11 != ';'))) {
      lVar10 = lVar10 + 1;
      pcVar1 = pcVar8 + 2;
      pcVar8 = pcVar11;
      pcVar11 = pcVar1;
    }
    iVar3 = FUN_1010eb504(pcVar4,"*",lVar10);
    if (iVar3 == 0) {
      iVar3 = FUN_1010eb504(pcVar4,"LOGIN",lVar10);
      if (iVar3 == 0) {
        iVar3 = FUN_1010eb504(pcVar4,"PLAIN",lVar10);
        if (iVar3 == 0) {
          iVar3 = FUN_1010eb504(pcVar4,"CRAM-MD5",lVar10);
          if (iVar3 == 0) {
            iVar3 = FUN_1010eb504(pcVar4,"DIGEST-MD5",lVar10);
            if (iVar3 == 0) {
              iVar3 = FUN_1010eb504(pcVar4,"GSSAPI",lVar10);
              if (iVar3 == 0) {
                iVar3 = FUN_1010eb504(pcVar4,"NTLM",lVar10);
                if (iVar3 == 0) {
                  iVar3 = FUN_1010eb504(pcVar4,"XOAUTH2",lVar10);
                  if (iVar3 == 0) goto LAB_1010f7d94;
                  *(undefined4 *)(param_1 + 0x5ac) = 2;
                  uVar6 = *(uint *)(param_1 + 0x5b0) | 0x80;
                }
                else {
                  *(undefined4 *)(param_1 + 0x5ac) = 2;
                  uVar6 = *(uint *)(param_1 + 0x5b0) | 0x40;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x5ac) = 2;
                uVar6 = *(uint *)(param_1 + 0x5b0) | 0x10;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x5ac) = 2;
              uVar6 = *(uint *)(param_1 + 0x5b0) | 8;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x5ac) = 2;
            uVar6 = *(uint *)(param_1 + 0x5b0) | 4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x5ac) = 2;
          uVar6 = *(uint *)(param_1 + 0x5b0) | 2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x5ac) = 2;
        uVar6 = *(uint *)(param_1 + 0x5b0) | 1;
      }
      *(uint *)(param_1 + 0x5b0) = uVar6;
    }
    else {
      *(undefined8 *)(param_1 + 0x5ac) = 0xffffffffffffffff;
    }
LAB_1010f7d94:
    bVar9 = false;
    pcVar4 = pcVar11 + 1;
    uVar5 = uVar7;
    if (*pcVar11 != ';') {
      pcVar4 = pcVar11;
    }
  } while( true );
}




undefined8 FUN_1010f7fec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(byte *)(*(long *)(param_1 + 0x308) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x5a4), *pcVar2 == '\0')) {
    uVar1 = FUN_1011051a8(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_1010fd978(param_1 + 0x530,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x5a0) == 0;
  return uVar1;
}




undefined8 FUN_1010f8070(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010f7fec();
  if ((int)uVar1 == 0) {
    if (*param_2 != '\0') {
      FUN_1010f9d10(param_1,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1010f80b0(long param_1)

{
  FUN_1010fdf54(param_1 + 0x530);
  return;
}




undefined8 FUN_1010f80b8(long param_1,ulong param_2)

{
  int iVar1;
  
  if (((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x588) != 0)) &&
      (*(char *)(*(long *)(param_1 + 0x588) + 0x2d3) != '\0')) &&
     (iVar1 = FUN_1010f92f4(param_1,"LOGOUT"), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x5a0) = 0x1b;
    FUN_1010f9cc8(param_1);
  }
  FUN_1010fe018(param_1 + 0x530);
  FUN_101102fd8(param_1,*(undefined4 *)(param_1 + 0x5b4));
  if (*(long *)(param_1 + 0x5c8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x5c8) = 0;
  }
  if (*(long *)(param_1 + 0x5d0) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
  return 0;
}




undefined8 FUN_1010f815c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  char *pcVar10;
  undefined8 in_x7;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong *local_c0;
  undefined8 local_b0;
  int local_a4;
  ulong local_a0;
  undefined4 local_94;
  long local_90;
  long local_88;
  char *local_80 [3];
  long local_68;
  
  lVar15 = *(long *)PTR____stack_chk_guard_101444218;
  lVar9 = param_1[0x3a];
  local_b0 = 0;
  local_68 = lVar15;
  if ((int)param_1[0xb4] == 4) {
    uVar5 = FUN_1010f9268(param_1);
    return uVar5;
  }
  plVar1 = param_1 + 0xa6;
  if (param_1[0xac] != 0) {
    uVar5 = FUN_1010fdf84(plVar1);
    return uVar5;
  }
  plVar2 = param_1 + 0x79;
  do {
    uVar5 = FUN_1010fdc9c((int)lVar9,plVar1,&local_a4,&local_b0);
    iVar4 = local_a4;
    if ((int)uVar5 != 0) goto LAB_1010f8e68;
    if (local_a4 == -1) {
LAB_1010f8e64:
      uVar5 = 8;
      goto LAB_1010f8e68;
    }
    if (local_a4 == 0) break;
    switch((int)param_1[0xb4]) {
    case 1:
      if (local_a4 != 0x4f) {
        FUN_1010d9258(*param_1,"Got unexpected imap-server response");
        goto LAB_1010f8e64;
      }
      *(undefined4 *)(param_1 + 0xb5) = 0;
      *(undefined4 *)((long)param_1 + 0x5b4) = 0;
      *(undefined1 *)((long)param_1 + 0x5c1) = 0;
      uVar5 = FUN_1010f92f4(param_1,"CAPABILITY");
      if ((int)uVar5 == 0) {
        *(undefined4 *)(param_1 + 0xb4) = 2;
        goto LAB_1010f8c44;
      }
      goto LAB_1010f8e68;
    case 2:
      lVar13 = *param_1;
      if (local_a4 == 0x4f) {
        if ((*(int *)(lVar13 + 0x510) != 0) && ((char)param_1[0x41] == '\0')) {
          if (*(char *)((long)param_1 + 0x5c1) != '\0') {
            uVar5 = FUN_1010f92f4(param_1,"STARTTLS");
            if ((int)uVar5 == 0) {
              *(undefined4 *)(param_1 + 0xb4) = 3;
              goto LAB_1010f8c44;
            }
            goto LAB_1010f8e68;
          }
          if (*(int *)(lVar13 + 0x510) != 1) {
            pcVar10 = "STARTTLS not supported.";
            goto LAB_1010f8eac;
          }
        }
      }
      else if (local_a4 == 0x2a) {
        pbVar16 = (byte *)(lVar13 + 0x90a);
        do {
          while( true ) {
            uVar7 = (ulong)*pbVar16;
            sVar6 = 0xfffffffffffffffb;
            if (uVar7 < 0x21) break;
LAB_1010f8738:
            while ((0x20 < (uint)uVar7 || ((1L << (uVar7 & 0x3f) & 0x100002601U) == 0))) {
              lVar13 = sVar6 + 6;
              sVar6 = sVar6 + 1;
              uVar7 = (ulong)pbVar16[lVar13];
            }
            uVar7 = sVar6 + 5;
            if (uVar7 == 7) {
              iVar4 = _memcmp(pbVar16,"SASL-IR",7);
              if (iVar4 != 0) goto LAB_1010f87e8;
              *(undefined1 *)((long)param_1 + 0x5c3) = 1;
LAB_1010f87a8:
              uVar7 = 7;
            }
            else if (uVar7 == 0xd) {
              iVar4 = _memcmp(pbVar16,"LOGINDISABLED",0xd);
              if (iVar4 != 0) goto LAB_1010f87e8;
              *(undefined1 *)((long)param_1 + 0x5c2) = 1;
              uVar7 = 0xd;
            }
            else if (uVar7 == 8) {
              if (*(long *)pbVar16 != 0x534c545452415453) goto LAB_1010f87e8;
              *(undefined1 *)((long)param_1 + 0x5c1) = 1;
LAB_1010f87d8:
              uVar7 = 8;
            }
            else {
              if (uVar7 < 6) goto switchD_1010f8828_caseD_9;
LAB_1010f87e8:
              iVar4 = _memcmp(pbVar16,"AUTH=",5);
              if (iVar4 == 0) {
                pbVar16 = pbVar16 + 5;
                uVar7 = sVar6;
                switch(sVar6) {
                case 4:
                  iVar4 = _memcmp(pbVar16,"NTLM",sVar6);
                  if (iVar4 == 0) {
                    *(uint *)(param_1 + 0xb5) = *(uint *)(param_1 + 0xb5) | 0x40;
                  }
                  uVar7 = 4;
                  break;
                case 5:
                  iVar4 = _memcmp(pbVar16,"LOGIN",sVar6);
                  if (iVar4 == 0) {
                    uVar12 = *(uint *)(param_1 + 0xb5) | 1;
LAB_1010f8958:
                    *(uint *)(param_1 + 0xb5) = uVar12;
                  }
                  else {
                    iVar4 = _memcmp(pbVar16,"PLAIN",sVar6);
                    if (iVar4 == 0) {
                      uVar12 = *(uint *)(param_1 + 0xb5) | 2;
                      goto LAB_1010f8958;
                    }
                  }
                  uVar7 = 5;
                  break;
                case 6:
                  iVar4 = _memcmp(pbVar16,"GSSAPI",sVar6);
                  if (iVar4 == 0) {
                    *(uint *)(param_1 + 0xb5) = *(uint *)(param_1 + 0xb5) | 0x10;
                  }
                  uVar7 = 6;
                  break;
                case 7:
                  iVar4 = _memcmp(pbVar16,"XOAUTH2",sVar6);
                  if (iVar4 == 0) {
                    *(uint *)(param_1 + 0xb5) = *(uint *)(param_1 + 0xb5) | 0x80;
                  }
                  goto LAB_1010f87a8;
                case 8:
                  iVar4 = _memcmp(pbVar16,"CRAM-MD5",sVar6);
                  if (iVar4 == 0) {
                    uVar12 = *(uint *)(param_1 + 0xb5) | 4;
                  }
                  else {
                    iVar4 = _memcmp(pbVar16,"EXTERNAL",sVar6);
                    if (iVar4 != 0) goto LAB_1010f87d8;
                    uVar12 = *(uint *)(param_1 + 0xb5) | 0x20;
                  }
                  *(uint *)(param_1 + 0xb5) = uVar12;
                  goto LAB_1010f87d8;
                case 10:
                  iVar4 = _memcmp(pbVar16,"DIGEST-MD5",sVar6);
                  if (iVar4 == 0) {
                    *(uint *)(param_1 + 0xb5) = *(uint *)(param_1 + 0xb5) | 8;
                  }
                  uVar7 = 10;
                }
              }
            }
switchD_1010f8828_caseD_9:
            pbVar16 = pbVar16 + uVar7;
          }
          if ((1L << (uVar7 & 0x3f) & 0x100002600U) == 0) {
            if (uVar7 != 0) goto LAB_1010f8738;
            goto LAB_1010f8c44;
          }
          pbVar16 = pbVar16 + 1;
        } while( true );
      }
LAB_1010f8984:
      uVar5 = FUN_1010f93f8(param_1);
      break;
    case 3:
      if (local_a4 != 0x4f) {
        lVar13 = *param_1;
        if (*(int *)(lVar13 + 0x510) == 1) goto LAB_1010f8984;
        pcVar10 = "STARTTLS denied. %c";
LAB_1010f8eac:
        FUN_1010d9258(lVar13,pcVar10);
        uVar5 = 0x40;
        goto LAB_1010f8e68;
      }
      uVar5 = FUN_1010f9268(param_1);
      break;
    default:
      goto switchD_1010f824c_caseD_4;
    case 5:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      if (local_a4 == 0x2b) {
        uVar5 = FUN_101101a5c(lVar13,param_1[0x2e],param_1[0x2f],&local_88,local_80);
        goto LAB_1010f85d0;
      }
      pcVar10 = "Access denied. %c";
LAB_1010f89b0:
      local_80[0] = (char *)0x0;
      local_88 = 0;
      FUN_1010d9258(lVar13,pcVar10);
      uVar5 = 0x43;
      goto LAB_1010f89bc;
    case 6:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      if (local_a4 != 0x2b) {
LAB_1010f89a8:
        pcVar10 = "Access denied: %d";
        goto LAB_1010f89b0;
      }
      uVar5 = FUN_101101b7c(lVar13,param_1[0x2e],&local_88,local_80);
      if ((((int)uVar5 == 0) && (local_88 != 0)) &&
         (uVar5 = FUN_1010fdc74(plVar1,"%s"), (int)uVar5 == 0)) {
        uVar11 = 7;
LAB_1010f84a8:
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0xb4) = uVar11;
      }
      goto LAB_1010f89bc;
    case 7:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      if (local_a4 != 0x2b) goto LAB_1010f89a8;
      uVar5 = FUN_101101b7c(lVar13,param_1[0x2f],&local_88,local_80);
      goto LAB_1010f85d0;
    case 8:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      local_90 = 0;
      local_a0 = 0;
      if (local_a4 == 0x2b) {
        FUN_1010f9960(lVar13 + 0x908,&local_88);
        iVar4 = FUN_101101c18(local_88,local_80,&local_a0);
        if (iVar4 == 0) {
          uVar5 = FUN_101101c40(lVar13,local_80[0],param_1[0x2e],param_1[0x2f],&local_90,&local_a0);
          if (((int)uVar5 == 0 && local_90 != 0) &&
             (uVar5 = FUN_1010fdc74(plVar1,"%s"), (int)uVar5 == 0)) {
            uVar11 = 0x12;
            goto LAB_1010f8b90;
          }
        }
        else {
          uVar5 = FUN_1010fdc74(plVar1,"%s");
          if ((int)uVar5 == 0) {
            uVar11 = 0x11;
LAB_1010f8b90:
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0xb4) = uVar11;
          }
        }
        if (local_80[0] != (char *)0x0) {
          (*(code *)PTR__free_101873628)();
          local_80[0] = (char *)0x0;
        }
        if (local_90 != 0) {
          (*(code *)PTR__free_101873628)();
          local_90 = 0;
        }
      }
      else {
LAB_1010f86d0:
        local_80[0] = (char *)0x0;
        local_88 = 0;
        local_90 = 0;
        pcVar10 = "Access denied: %d";
LAB_1010f8c00:
        FUN_1010d9258(lVar13,pcVar10);
        uVar5 = 0x43;
      }
      break;
    case 9:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      local_90 = 0;
      if (local_a4 != 0x2b) goto LAB_1010f86d0;
      FUN_1010f9960(lVar13 + 0x908,local_80);
      uVar5 = FUN_101101dcc(lVar13,local_80[0],param_1[0x2e],param_1[0x2f],"imap",&local_88,
                            &local_90);
      if ((int)uVar5 == 0) {
        uVar5 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar5 == 0) {
          uVar11 = 10;
          goto LAB_1010f84a8;
        }
      }
      else if ((int)uVar5 == 0x3d) goto LAB_1010f8afc;
      goto LAB_1010f89bc;
    case 10:
      if (local_a4 == 0x2b) {
        uVar5 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar5 == 0) {
          *(undefined4 *)(param_1 + 0xb4) = 0x12;
          goto LAB_1010f8c44;
        }
      }
      else {
LAB_1010f8db8:
        lVar9 = *param_1;
        pcVar10 = "Authentication failed: %d";
LAB_1010f8de4:
        FUN_1010d9258(lVar9,pcVar10);
        uVar5 = 0x43;
      }
      goto LAB_1010f8e68;
    case 0xb:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      if (local_a4 != 0x2b) goto LAB_1010f89a8;
      uVar5 = FUN_101101424(param_1[0x2e],param_1[0x2f],plVar2,&local_88,local_80);
      if ((((int)uVar5 != 0) || (local_88 == 0)) ||
         (uVar5 = FUN_1010fdc74(plVar1,"%s"), (int)uVar5 != 0)) goto LAB_1010f89bc;
      uVar11 = 0xc;
      goto LAB_1010f8b28;
    case 0xc:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      local_90 = 0;
      if (local_a4 != 0x2b) goto LAB_1010f89a8;
      FUN_1010f9960(lVar13 + 0x908,local_80);
      iVar4 = FUN_101101254(lVar13,local_80[0],plVar2);
      if (iVar4 != 0) {
LAB_1010f8afc:
        uVar5 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar5 == 0) {
          uVar11 = 0x11;
          goto LAB_1010f8b28;
        }
        goto LAB_1010f89bc;
      }
      uVar5 = FUN_1011014f8(lVar13,param_1[0x2e],param_1[0x2f],plVar2,&local_88,&local_90);
      if ((int)uVar5 != 0 || local_88 == 0) goto LAB_1010f89bc;
      goto LAB_1010f85e0;
    case 0x10:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      if (local_a4 != 0x2b) goto LAB_1010f89a8;
      uVar5 = FUN_101102f48(lVar13,param_1[0x2e],param_1[0x31],&local_88,local_80);
LAB_1010f85d0:
      if (((int)uVar5 == 0) && (local_88 != 0)) {
LAB_1010f85e0:
        uVar5 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar5 == 0) {
          uVar11 = 0x12;
LAB_1010f8b28:
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0xb4) = uVar11;
        }
      }
LAB_1010f89bc:
      if (local_88 != 0) {
        (*(code *)PTR__free_101873628)();
        local_88 = 0;
      }
      break;
    case 0x11:
      lVar13 = *param_1;
      local_88 = 0;
      local_80[0] = (char *)0x0;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffffff00000000;
      local_94 = 0;
      *(uint *)(param_1 + 0xb5) = *(uint *)(param_1 + 0xb5) ^ *(uint *)((long)param_1 + 0x5b4);
      uVar5 = FUN_1010f94dc(param_1,local_80,&local_88,&local_90,&local_a0,&local_94);
      if ((int)uVar5 == 0) {
        if (local_80[0] != (char *)0x0) {
          uVar5 = FUN_1010f96b8(param_1,local_80[0],local_88,local_a0 & 0xffffffff,local_94);
          goto LAB_1010f89bc;
        }
        if ((*(char *)((long)param_1 + 0x5c2) != '\0') ||
           ((*(byte *)((long)param_1 + 0x5ac) & 1) == 0)) {
          pcVar10 = "Authentication cancelled";
          goto LAB_1010f8c00;
        }
        uVar5 = FUN_1010f9734(param_1);
      }
      break;
    case 0x12:
      if (local_a4 != 0x4f) goto LAB_1010f8db8;
      goto switchD_1010f824c_caseD_4;
    case 0x13:
      if (local_a4 != 0x4f) {
        lVar9 = *param_1;
        pcVar10 = "Access denied. %c";
        goto LAB_1010f8de4;
      }
      goto switchD_1010f824c_caseD_4;
    case 0x14:
    case 0x1a:
      lVar13 = *param_1;
      pcVar10 = (char *)(lVar13 + 0x908);
      sVar6 = _strlen(pcVar10);
      if (iVar4 == 0x4f) goto switchD_1010f824c_caseD_4;
      if (iVar4 != 0x2a) {
        uVar5 = 0x15;
        goto LAB_1010f8e68;
      }
      lVar13 = lVar13 + sVar6;
      *(undefined1 *)(lVar13 + 0x908) = 10;
      uVar5 = FUN_1010d98ec(param_1,1,pcVar10,sVar6 + 1);
      *(undefined1 *)(lVar13 + 0x908) = 0;
      break;
    case 0x15:
      lVar13 = *param_1;
      if (local_a4 == 0x4f) {
        lVar14 = *(long *)(lVar13 + 0x218);
        if (((*(char **)(lVar14 + 0x10) == (char *)0x0) || ((char *)param_1[0xba] == (char *)0x0))
           || (iVar4 = _strcmp(*(char **)(lVar14 + 0x10),(char *)param_1[0xba]), iVar4 == 0)) {
          lVar13 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(lVar14 + 8));
          param_1[0xb9] = lVar13;
          if (*(long *)(lVar14 + 0x38) == 0) {
            if (*(long *)(lVar14 + 0x30) == 0) {
              uVar5 = FUN_1010f9b48(param_1);
            }
            else {
              uVar5 = FUN_1010f9adc(param_1);
            }
          }
          else {
            uVar5 = FUN_1010f9a08(param_1);
          }
        }
        else {
          FUN_1010d9258(lVar13,"Mailbox UIDVALIDITY has changed");
          uVar5 = 0x4e;
        }
      }
      else {
        if (local_a4 != 0x2a) {
          pcVar10 = "Select failed";
          goto LAB_1010f8c00;
        }
        iVar4 = _sscanf((char *)(lVar13 + 0x90a),"OK [UIDVALIDITY %19[0123456789]]");
        if (iVar4 == 1) {
          if (param_1[0xba] != 0) {
            (*(code *)PTR__free_101873628)();
            param_1[0xba] = 0;
          }
          lVar13 = (*(code *)PTR__strdup_101873638)(local_80);
          uVar5 = 0;
          param_1[0xba] = lVar13;
        }
        else {
          uVar5 = 0;
        }
      }
      break;
    case 0x16:
      lVar13 = *param_1;
      if (local_a4 == 0x2a) {
        for (pcVar10 = (char *)(lVar13 + 0x908); *pcVar10 != '\0'; pcVar10 = pcVar10 + 1) {
          if (*pcVar10 == '{') {
            uVar7 = _strtol(pcVar10 + 1,local_80,10);
            if ((((1 < (long)local_80[0] - (long)pcVar10) && (*local_80[0] == '}')) &&
                (local_80[0][1] == '\r')) && (local_80[0][2] == '\0')) {
              uVar17 = uVar7;
              FUN_1010d909c(lVar13,"Found %lu bytes to download\n");
              FUN_1010d22cc(lVar13,uVar7);
              if (param_1[0xa6] != 0) {
                uVar3 = uVar7;
                if ((ulong)param_1[0xa7] <= uVar7) {
                  uVar3 = param_1[0xa7];
                }
                uVar5 = FUN_1010d98ec(param_1,1);
                if ((int)uVar5 != 0) goto LAB_1010f8c38;
                *(long *)(lVar13 + 0x98) = *(long *)(lVar13 + 0x98) + uVar3;
                uVar17 = uVar3;
                FUN_1010d909c(lVar13,"Written %lu bytes, %lu bytes are left for transfer\n");
                pvVar8 = (void *)param_1[0xa6];
                sVar6 = param_1[0xa7] - uVar3;
                if ((ulong)param_1[0xa7] < uVar3 || sVar6 == 0) {
                  if (pvVar8 != (void *)0x0) {
                    (*(code *)PTR__free_101873628)();
                    param_1[0xa6] = 0;
                  }
                  param_1[0xa7] = 0;
                }
                else {
                  _memmove(pvVar8,(void *)((long)pvVar8 + uVar3),sVar6);
                  param_1[0xa7] = param_1[0xa7] - uVar3;
                }
              }
              local_c0 = (ulong *)(lVar13 + 0x98);
              if (*local_c0 == uVar7) {
                uVar5 = 0xffffffff;
                uVar7 = 0xffffffffffffffff;
              }
              else {
                *(ulong *)(lVar13 + 0x88) = uVar7;
                uVar5 = 0;
              }
              FUN_1010eb3d0(param_1,uVar5,uVar7,0,0,0xffffffff,0,in_x7,uVar17);
              uVar5 = 0;
              goto LAB_1010f8ac0;
            }
            break;
          }
        }
        FUN_1010d9258(*(undefined8 *)param_1[0xb1],"Failed to parse FETCH response.");
        uVar5 = 8;
LAB_1010f8ac0:
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
      else {
        FUN_1010d22cc(lVar13,0xffffffffffffffff);
        *(undefined4 *)(param_1 + 0xb4) = 0;
        uVar5 = 0x4e;
      }
      break;
    case 0x17:
      if (local_a4 != 0x4f) goto LAB_1010f8e64;
      goto switchD_1010f824c_caseD_4;
    case 0x18:
      if (local_a4 == 0x2b) {
        FUN_1010d22f4(*param_1,*(undefined8 *)(*param_1 + 0x8ae8));
        FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
        goto switchD_1010f824c_caseD_4;
      }
LAB_1010f8e4c:
      uVar5 = 0x19;
      goto LAB_1010f8e68;
    case 0x19:
      if (local_a4 != 0x4f) goto LAB_1010f8e4c;
switchD_1010f824c_caseD_4:
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      goto LAB_1010f8e68;
    }
LAB_1010f8c38:
    if ((int)uVar5 != 0) goto LAB_1010f8e68;
    if ((int)param_1[0xb4] == 0) break;
LAB_1010f8c44:
    uVar7 = FUN_1010fdac4(plVar1);
  } while ((uVar7 & 1) != 0);
  uVar5 = 0;
LAB_1010f8e68:
  if (lVar15 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}




undefined8 FUN_1010f8f4c(long *param_1,short *param_2,ulong param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  
  lVar7 = *param_1;
  lVar9 = *(long *)(lVar7 + 0x218);
  sVar3 = _strlen((char *)((long)param_1 + 0x5bc));
  uVar4 = sVar3 + 1;
  if (((param_3 < uVar4) ||
      (iVar2 = _memcmp((char *)((long)param_1 + 0x5bc),param_2,sVar3), iVar2 != 0)) ||
     (*(char *)((long)param_2 + sVar3) != ' ')) {
    if (1 < param_3) {
      if (*param_2 == 0x202a) {
        uVar5 = 0;
        iVar2 = (int)param_1[0xb4];
        if (iVar2 < 0x14) {
          if (iVar2 != 2) {
            return 0;
          }
          pcVar8 = "CAPABILITY";
LAB_1010f91e8:
          uVar4 = FUN_1010f9be0(param_2,param_3,pcVar8);
          if ((uVar4 & 1) == 0) goto LAB_1010f9224;
        }
        else {
          switch(iVar2) {
          case 0x14:
            if (*(long *)(lVar9 + 0x38) == 0) {
              iVar2 = FUN_1010f9be0(param_2,param_3,"LIST");
              if (iVar2 == 0) goto LAB_1010f9224;
              if (*(long *)(lVar9 + 0x38) == 0) break;
            }
            uVar4 = FUN_1010f9be0(param_2,param_3);
            if ((uVar4 & 1) == 0) {
              pcVar8 = *(char **)(lVar9 + 0x38);
              iVar2 = _strcmp(pcVar8,"STORE");
              if (iVar2 == 0) {
                uVar4 = FUN_1010f9be0(param_2,param_3,"FETCH");
                if ((uVar4 & 1) != 0) break;
                pcVar8 = *(char **)(lVar9 + 0x38);
              }
              iVar2 = _strcmp(pcVar8,"SELECT");
              if (((((iVar2 != 0) && (iVar2 = _strcmp(pcVar8,"EXAMINE"), iVar2 != 0)) &&
                   ((iVar2 = _strcmp(pcVar8,"SEARCH"), iVar2 != 0 &&
                    ((iVar2 = _strcmp(pcVar8,"EXPUNGE"), iVar2 != 0 &&
                     (iVar2 = _strcmp(pcVar8,"LSUB"), iVar2 != 0)))))) &&
                  (iVar2 = _strcmp(pcVar8,"UID"), iVar2 != 0)) &&
                 (iVar2 = _strcmp(pcVar8,"NOOP"), iVar2 != 0)) goto LAB_1010f9224;
            }
            break;
          case 0x15:
            break;
          case 0x16:
            pcVar8 = "FETCH";
            goto LAB_1010f91e8;
          default:
            goto switchD_1010f90c8_caseD_17;
          case 0x1a:
            iVar2 = FUN_1010f9be0(param_2,param_3,"SEARCH");
            if (iVar2 == 0) goto LAB_1010f9224;
          }
        }
        uVar6 = 0x2a;
        goto LAB_1010f9218;
      }
      if (((param_3 == 3) && ((char)*param_2 == '+')) || (*param_2 == 0x202b)) {
        uVar1 = (int)param_1[0xb4] - 5;
        if ((uVar1 < 0x14) && ((0x828ffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
          uVar6 = 0x2b;
          goto LAB_1010f9218;
        }
        pcVar8 = "Unexpected continuation response";
        goto LAB_1010f9078;
      }
    }
LAB_1010f9224:
    uVar5 = 0;
  }
  else {
    if (param_3 - uVar4 < 2) {
LAB_1010f9008:
      pcVar8 = "Bad tagged response";
LAB_1010f9078:
      FUN_1010d9258(lVar7,pcVar8);
      uVar6 = 0xffffffff;
    }
    else {
      param_2 = (short *)((long)param_2 + uVar4);
      if (*param_2 == 0x4b4f) {
        uVar6 = 0x4f;
      }
      else if (*param_2 == 0x4f4e) {
        uVar6 = 0x4e;
      }
      else {
        if ((param_3 - uVar4 < 3) || (iVar2 = _memcmp(param_2,"BAD",3), iVar2 != 0))
        goto LAB_1010f9008;
        uVar6 = 0x42;
      }
    }
LAB_1010f9218:
    *param_4 = uVar6;
    uVar5 = 1;
  }
switchD_1010f90c8_caseD_17:
  return uVar5;
}




undefined8 FUN_1010f9268(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1011051a8(param_1,0,(char *)(param_1 + 0x5a4));
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x5a0) != 4) {
      *(undefined4 *)(param_1 + 0x5a0) = 4;
    }
    if (*(char *)(param_1 + 0x5a4) == '\0') {
      uVar1 = 0;
    }
    else {
      *(undefined ***)(param_1 + 0x308) = &PTR_s_IMAPS_10182f890;
      *(undefined4 *)(param_1 + 0x5a8) = 0;
      *(undefined4 *)(param_1 + 0x5b4) = 0;
      *(undefined1 *)(param_1 + 0x5c1) = 0;
      uVar1 = FUN_1010f92f4(param_1,"CAPABILITY");
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        *(undefined4 *)(param_1 + 0x5a0) = 2;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1010f92f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 0x5b8) = (*(int *)(param_1 + 0x5b8) + 1) % 1000;
  FUN_1010feee0(*(long *)(param_1 + 0x50) % 0x1a);
  FUN_1010e7270(param_1 + 0x5bc,5,"%c%03d");
  lVar1 = FUN_1010e7298("%s %s");
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = FUN_1010fdb2c(param_1 + 0x530,lVar1,&stack0x00000000);
    (*(code *)PTR__free_101873628)(lVar1);
  }
  return uVar2;
}




undefined8 FUN_1010f93f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  if (*(char *)((long)param_1 + 0x2cc) == '\0') {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    uVar1 = FUN_1010f94dc(param_1,&local_28,&local_30,&local_38,&uStack_3c,&local_40);
    if ((int)uVar1 == 0) {
      if ((local_28 == 0) || ((*(byte *)((long)param_1 + 0x5ac) >> 1 & 1) == 0)) {
        if ((*(char *)((long)param_1 + 0x5c2) == '\0') &&
           ((*(byte *)((long)param_1 + 0x5ac) & 1) != 0)) {
          uVar1 = FUN_1010f9734(param_1);
        }
        else {
          FUN_1010d909c(*param_1,"No known authentication mechanisms supported!\n");
          uVar1 = 0x43;
        }
      }
      else {
        uVar1 = FUN_1010f96b8(param_1,local_28,local_30,uStack_3c,local_40);
      }
    }
    if (local_30 != 0) {
      (*(code *)PTR__free_101873628)();
    }
  }
  return uVar1;
}




undefined8
FUN_1010f94dc(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)(param_1 + 0xb5);
  if (((uVar1 >> 3 & 1) == 0) || ((*(byte *)(param_1 + 0xb6) >> 3 & 1) == 0)) {
    if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)(param_1 + 0xb6) >> 2 & 1) == 0)) {
      if (((uVar1 >> 6 & 1) == 0) || ((*(byte *)(param_1 + 0xb6) >> 6 & 1) == 0)) {
        if (((((uVar1 >> 7 & 1) == 0) || (*(uint *)(param_1 + 0xb6) == 0xffffffff)) ||
            ((*(uint *)(param_1 + 0xb6) & 0x80) == 0)) && (param_1[0x31] == 0)) {
          if (((uVar1 & 1) == 0) || ((*(byte *)(param_1 + 0xb6) & 1) == 0)) {
            if (((uVar1 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0xb6) >> 1 & 1) != 0)) {
              *param_2 = "PLAIN";
              *param_5 = 5;
              *param_6 = 0x12;
              *(undefined4 *)((long)param_1 + 0x5b4) = 2;
              if ((*(char *)((long)param_1 + 0x5c3) != '\0') || (*(char *)(lVar3 + 0x6c8) != '\0'))
              {
                uVar2 = FUN_101101a5c(lVar3,param_1[0x2e],param_1[0x2f],param_3,param_4);
                return uVar2;
              }
            }
          }
          else {
            *param_2 = "LOGIN";
            *param_5 = 6;
            *param_6 = 7;
            *(undefined4 *)((long)param_1 + 0x5b4) = 1;
            if ((*(char *)((long)param_1 + 0x5c3) != '\0') || (*(char *)(lVar3 + 0x6c8) != '\0')) {
              uVar2 = FUN_101101b7c(lVar3,param_1[0x2e],param_3,param_4);
              return uVar2;
            }
          }
        }
        else {
          *param_2 = "XOAUTH2";
          *param_5 = 0x10;
          *param_6 = 0x12;
          *(undefined4 *)((long)param_1 + 0x5b4) = 0x80;
          if ((*(char *)((long)param_1 + 0x5c3) != '\0') || (*(char *)(lVar3 + 0x6c8) != '\0')) {
            uVar2 = FUN_101102f48(lVar3,param_1[0x2e],param_1[0x31],param_3,param_4);
            return uVar2;
          }
        }
      }
      else {
        *param_2 = "NTLM";
        *param_5 = 0xb;
        *param_6 = 0xc;
        *(undefined4 *)((long)param_1 + 0x5b4) = 0x40;
        if ((*(char *)((long)param_1 + 0x5c3) != '\0') || (*(char *)(lVar3 + 0x6c8) != '\0')) {
          uVar2 = FUN_101101424(param_1[0x2e],param_1[0x2f],param_1 + 0x79,param_3,param_4);
          return uVar2;
        }
      }
    }
    else {
      *param_2 = "CRAM-MD5";
      *param_5 = 8;
      *(undefined4 *)((long)param_1 + 0x5b4) = 4;
    }
  }
  else {
    *param_2 = "DIGEST-MD5";
    *param_5 = 9;
    *(undefined4 *)((long)param_1 + 0x5b4) = 8;
  }
  return 0;
}




undefined8
FUN_1010f96b8(long param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_1010f92f4(param_1,"AUTHENTICATE %s");
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x5a0) = param_4;
    }
  }
  else {
    uVar1 = FUN_1010f92f4(param_1,"AUTHENTICATE %s %s");
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x5a0) = param_5;
    }
  }
  return uVar1;
}




undefined8 FUN_1010f9734(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x2cc) == '\0') {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x5a0) = 0;
  }
  else {
    lVar1 = FUN_1010f9800(*(undefined8 *)(param_1 + 0x170));
    lVar2 = FUN_1010f9800(*(undefined8 *)(param_1 + 0x178));
    uVar3 = FUN_1010f92f4(param_1,"LOGIN %s %s");
    if (lVar1 != 0) {
      (*(code *)PTR__free_101873628)(lVar1);
    }
    if (lVar2 != 0) {
      (*(code *)PTR__free_101873628)(lVar2);
    }
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x5a0) = 0x13;
    }
  }
  return uVar3;
}




char * FUN_1010f9800(char *param_1)

{
  bool bVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  lVar9 = 0;
  bVar1 = false;
  pcVar3 = param_1;
  lVar8 = 0;
  do {
    cVar6 = *pcVar3;
    lVar7 = lVar8;
    if (cVar6 < '\"') {
      if (cVar6 == ' ') {
        bVar1 = true;
      }
      else if (cVar6 == '\0') break;
    }
    else {
      if (cVar6 == '\\') {
        lVar7 = lVar8 + 1;
      }
      if (cVar6 == '\"') {
        lVar9 = lVar9 + 1;
        lVar7 = lVar8;
      }
    }
    pcVar3 = pcVar3 + 1;
    lVar8 = lVar7;
  } while( true );
  if (!(bool)(bVar1 | (lVar9 != 0 || lVar8 != 0))) {
    pcVar3 = (char *)(*(code *)PTR__strdup_101873638)(param_1);
    return pcVar3;
  }
  sVar2 = _strlen(param_1);
  lVar7 = 2;
  if (!bVar1) {
    lVar7 = 0;
  }
  lVar9 = lVar9 + lVar8 + lVar7 + sVar2;
  pcVar3 = (char *)(*(code *)PTR__malloc_101873620)(lVar9 + 1);
  if (pcVar3 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar4 = pcVar3;
  if (bVar1) {
    *pcVar3 = '\"';
    pcVar3[lVar9 + -1] = '\"';
    pcVar4 = pcVar3 + 1;
  }
  do {
    cVar6 = *param_1;
    if (cVar6 == '\"') {
LAB_1010f9934:
      pcVar5 = pcVar4 + 1;
      *pcVar4 = '\\';
      cVar6 = *param_1;
    }
    else {
      if (cVar6 == '\0') {
        pcVar3[lVar9] = '\0';
        return pcVar3;
      }
      pcVar5 = pcVar4;
      if (cVar6 == '\\') goto LAB_1010f9934;
    }
    *pcVar5 = cVar6;
    param_1 = param_1 + 1;
    pcVar4 = pcVar5 + 1;
  } while( true );
}




void FUN_1010f9960(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  undefined1 *puVar4;
  long lVar5;
  
  for (lVar5 = 0; (cVar2 = *(char *)(param_1 + 2 + lVar5), cVar2 == '\t' || (cVar2 == ' '));
      lVar5 = lVar5 + 1) {
  }
  pcVar1 = (char *)(param_1 + lVar5 + 2);
  sVar3 = _strlen(pcVar1);
  if (sVar3 != 0) {
    puVar4 = (undefined1 *)(sVar3 + param_1 + lVar5 + 2);
    do {
      if (0x20 < (ulong)(byte)puVar4[-1] ||
          (1L << ((ulong)(byte)puVar4[-1] & 0x3f) & 0x100002600U) == 0) {
        *puVar4 = 0;
        break;
      }
      sVar3 = sVar3 - 1;
      puVar4 = puVar4 + -1;
    } while (sVar3 != 0);
  }
  *param_2 = pcVar1;
  return;
}




undefined8 FUN_1010f9a08(long *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  
  if (*(long *)(*(long *)(*param_1 + 0x218) + 0x38) == 0) {
    pcVar4 = *(char **)(*(long *)(*param_1 + 0x218) + 8);
    pcVar1 = "";
    if (pcVar4 != (char *)0x0) {
      pcVar1 = pcVar4;
    }
    lVar3 = FUN_1010f9800(pcVar1);
    if (lVar3 == 0) {
      return 0x1b;
    }
    uVar2 = FUN_1010f92f4(param_1,"LIST \"%s\" *");
    (*(code *)PTR__free_101873628)(lVar3);
  }
  else {
    uVar2 = FUN_1010f92f4(param_1,"%s%s");
  }
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0x14;
  }
  return uVar2;
}




undefined8 FUN_1010f9adc(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(*param_1 + 0x218) + 0x30) == 0) {
    FUN_1010d9258(*param_1,"Cannot SEARCH without a query string.");
    uVar1 = 3;
  }
  else {
    uVar1 = FUN_1010f92f4(param_1,"SEARCH %s");
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0x1a;
    }
  }
  return uVar1;
}




undefined8 FUN_1010f9b48(long *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(*param_1 + 0x218);
  if (*(long *)(lVar3 + 0x18) == 0) {
    FUN_1010d9258(*param_1,"Cannot FETCH without a UID.");
    uVar1 = 3;
  }
  else {
    if (*(long *)(lVar3 + 0x28) == 0) {
      pcVar2 = "FETCH %s BODY[%s]";
    }
    else {
      pcVar2 = "FETCH %s BODY[%s]<%s>";
    }
    uVar1 = FUN_1010f92f4(param_1,pcVar2);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0x16;
    }
  }
  return uVar1;
}




undefined8 FUN_1010f9be0(long param_1,long param_2,char *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  byte *pbVar7;
  
  pbVar1 = (byte *)(param_1 + param_2);
  sVar5 = _strlen(param_3);
  pbVar7 = (byte *)(param_1 + 2);
  if ((2 < param_2) && (*pbVar7 - 0x30 < 10)) {
    lVar2 = param_2 + -3;
    pbVar3 = (byte *)(param_1 + 3);
    do {
      pbVar7 = pbVar3;
      lVar6 = lVar2;
      if (pbVar1 <= pbVar7) break;
      lVar2 = lVar6 + -1;
      pbVar3 = pbVar7 + 1;
    } while (*pbVar7 - 0x30 < 10);
    if (lVar6 == 0) {
      return 0;
    }
    if (*pbVar7 != 0x20) {
      return 0;
    }
    pbVar7 = pbVar7 + 1;
  }
  if (((pbVar7 + sVar5 <= pbVar1) && (iVar4 = FUN_1010f6624(pbVar7,param_3,sVar5), iVar4 != 0)) &&
     ((pbVar7[sVar5] == 0x20 || (pbVar7 + sVar5 + 2 == pbVar1)))) {
    return 1;
  }
  return 0;
}




undefined8 FUN_1010f9cc8(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5a0) == 0) {
    uVar1 = 0;
  }
  else {
    do {
      uVar1 = FUN_1010fd978(param_1 + 0x530,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    } while (*(int *)(param_1 + 0x5a0) != 0);
  }
  return uVar1;
}




void FUN_1010f9d10(long *param_1)

{
  if (**(int **)(*param_1 + 0x218) != 0) {
    FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    return;
  }
  return;
}




undefined8 FUN_1010f9d40(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = (*(code *)PTR__calloc_101873640)(0x18,1);
  *(long *)(lVar4 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    if ((*(char *)((long)param_1 + 0x2cb) != '\0') && (*(char *)(lVar4 + 0x4f2) == '\0')) {
      ppuVar1 = &PTR_s_POP3_10182fb10;
      if ((undefined **)param_1[0x61] != &PTR_s_POP3_10182fa10) {
        ppuVar1 = &PTR_s_POP3S_10182fb90;
      }
      param_1[0x61] = (long)ppuVar1;
      uVar3 = (*(code *)ppuVar1[1])(param_1);
      return uVar3;
    }
    uVar3 = 0;
    *(long *)(lVar4 + 0x8ab0) = *(long *)(lVar4 + 0x8ab0) + 1;
  }
  return uVar3;
}




void FUN_1010f9de8(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  *param_2 = 0;
  lVar2 = *param_1;
  iVar1 = FUN_1010e5f8c(lVar2,*(undefined8 *)(lVar2 + 0x8ab0),0,*(long *)(lVar2 + 0x218) + 8,0,1);
  if (iVar1 == 0) {
    lVar2 = *param_1;
    if (*(long *)(lVar2 + 0x570) != 0) {
      iVar1 = FUN_1010e5f8c(lVar2,*(long *)(lVar2 + 0x570),0,*(long *)(lVar2 + 0x218) + 0x10,0,1);
      if (iVar1 != 0) {
        return;
      }
      lVar2 = *param_1;
    }
    *(undefined8 *)(lVar2 + 0x78) = 0xffffffffffffffff;
    FUN_1010d2468(lVar2,0);
    FUN_1010d2460(lVar2,0);
    FUN_1010d22f4(lVar2,0xffffffffffffffff);
    FUN_1010d22cc(lVar2,0xffffffffffffffff);
    lVar2 = *param_1;
    puVar4 = *(undefined4 **)(lVar2 + 0x218);
    if (*(char *)(lVar2 + 0x4ff) != '\0') {
      *puVar4 = 1;
    }
    *param_2 = 0;
    if ((**(char **)(puVar4 + 2) == '\0') ||
       ((*(char *)(lVar2 + 0x4f5) != '\0' && (*puVar4 = 1, **(char **)(puVar4 + 2) == '\0')))) {
      pcVar3 = "%s";
    }
    else {
      pcVar3 = "%s %s";
    }
    iVar1 = FUN_1010fdc74(param_1 + 0xa6,pcVar3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xb4) = 0x16;
      FUN_1010fa300(param_1,param_2);
      return;
    }
  }
  return;
}




undefined8 FUN_1010f9f88(long *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x218);
  if (puVar1 == (undefined4 *)0x0) {
    param_2 = 0;
  }
  else {
    if ((int)param_2 == 0) {
      param_2 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x59) = 1;
    }
    if (*(long *)(puVar1 + 2) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(puVar1 + 2) = 0;
    }
    if (*(long *)(puVar1 + 4) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(puVar1 + 4) = 0;
    }
    *puVar1 = 0;
  }
  return param_2;
}




undefined8 FUN_1010fa00c(long param_1,undefined1 *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  long lVar11;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x580) = 1800000;
  *(code **)(param_1 + 0x590) = FUN_1010fa64c;
  *(code **)(param_1 + 0x598) = FUN_1010fb228;
  *(long *)(param_1 + 0x588) = param_1;
  *(undefined8 *)(param_1 + 0x5c0) = 0xffffffffffffffff;
  FUN_1010fdaec(param_1 + 0x530);
  bVar10 = true;
  pcVar4 = *(char **)(param_1 + 0x180);
  uVar5 = 0;
  do {
    do {
      uVar7 = uVar5;
      if ((pcVar4 == (char *)0x0) || (cVar2 = *pcVar4, pcVar8 = pcVar4, cVar2 == '\0')) {
        if ((int)uVar7 == 0) {
          *(undefined4 *)(param_1 + 0x5a0) = 1;
          uVar5 = FUN_1010fa300(param_1,param_2);
          return uVar5;
        }
        return uVar7;
      }
      while ((cVar2 != '\0' && (cVar2 != '='))) {
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar8;
      }
      iVar3 = FUN_1010eb504(pcVar4,"AUTH",4);
      pcVar4 = pcVar8;
      uVar5 = 3;
    } while (iVar3 == 0);
    pcVar4 = pcVar8 + 1;
    if (bVar10) {
      *(undefined8 *)(param_1 + 0x5c0) = 0;
    }
    lVar11 = 0;
    pcVar9 = pcVar4;
    while ((*pcVar9 != '\0' && (*pcVar9 != ';'))) {
      lVar11 = lVar11 + 1;
      pcVar1 = pcVar8 + 2;
      pcVar8 = pcVar9;
      pcVar9 = pcVar1;
    }
    iVar3 = FUN_1010eb504(pcVar4,"*",lVar11);
    if (iVar3 == 0) {
      iVar3 = FUN_1010eb504(pcVar4,"+APOP",lVar11);
      if (iVar3 == 0) {
        iVar3 = FUN_1010eb504(pcVar4,"LOGIN",lVar11);
        if (iVar3 == 0) {
          iVar3 = FUN_1010eb504(pcVar4,"PLAIN",lVar11);
          if (iVar3 == 0) {
            iVar3 = FUN_1010eb504(pcVar4,"CRAM-MD5",lVar11);
            if (iVar3 == 0) {
              iVar3 = FUN_1010eb504(pcVar4,"DIGEST-MD5",lVar11);
              if (iVar3 == 0) {
                iVar3 = FUN_1010eb504(pcVar4,"GSSAPI",lVar11);
                if (iVar3 == 0) {
                  iVar3 = FUN_1010eb504(pcVar4,"NTLM",lVar11);
                  if (iVar3 == 0) {
                    iVar3 = FUN_1010eb504(pcVar4,"XOAUTH2",lVar11);
                    if (iVar3 == 0) goto LAB_1010fa098;
                    *(undefined4 *)(param_1 + 0x5c0) = 4;
                    uVar6 = *(uint *)(param_1 + 0x5c4) | 0x80;
                  }
                  else {
                    *(undefined4 *)(param_1 + 0x5c0) = 4;
                    uVar6 = *(uint *)(param_1 + 0x5c4) | 0x40;
                  }
                }
                else {
                  *(undefined4 *)(param_1 + 0x5c0) = 4;
                  uVar6 = *(uint *)(param_1 + 0x5c4) | 0x10;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x5c0) = 4;
                uVar6 = *(uint *)(param_1 + 0x5c4) | 8;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x5c0) = 4;
              uVar6 = *(uint *)(param_1 + 0x5c4) | 4;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x5c0) = 4;
            uVar6 = *(uint *)(param_1 + 0x5c4) | 2;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x5c0) = 4;
          uVar6 = *(uint *)(param_1 + 0x5c4) | 1;
        }
        *(uint *)(param_1 + 0x5c4) = uVar6;
      }
      else {
        *(undefined8 *)(param_1 + 0x5c0) = 2;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x5c0) = 0xffffffffffffffff;
    }
LAB_1010fa098:
    bVar10 = false;
    pcVar4 = pcVar9 + 1;
    uVar5 = uVar7;
    if (*pcVar9 != ';') {
      pcVar4 = pcVar9;
    }
  } while( true );
}




undefined8 FUN_1010fa300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(byte *)(*(long *)(param_1 + 0x308) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x5a4), *pcVar2 == '\0')) {
    uVar1 = FUN_1011051a8(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_1010fd978(param_1 + 0x530,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x5a0) == 0;
  return uVar1;
}




void thunk_FUN_1010fa300(void)

{
  FUN_1010fa300();
  return;
}




void FUN_1010fa388(long param_1)

{
  FUN_1010fdf54(param_1 + 0x530);
  return;
}




undefined8 FUN_1010fa390(long param_1,ulong param_2)

{
  int iVar1;
  
  if ((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x588) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x588) + 0x2d3) != '\0')) {
    iVar1 = FUN_1010fdc74(param_1 + 0x530,"%s");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5a0) = 0x17;
      do {
        iVar1 = FUN_1010fd978(param_1 + 0x530,1);
        if (iVar1 != 0) break;
      } while (*(int *)(param_1 + 0x5a0) != 0);
    }
  }
  FUN_1010fe018(param_1 + 0x530);
  FUN_101102fd8(param_1,*(undefined4 *)(param_1 + 0x5c8));
  if (*(long *)(param_1 + 0x5d0) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
  return 0;
}




undefined8 FUN_1010fa440(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *param_1;
  uVar4 = param_1[0xb5];
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    lVar10 = 0;
    do {
      cVar1 = *(char *)(param_2 + uVar9);
      if (cVar1 == '\n') {
        if ((uVar4 == 1) || (uVar4 == 4)) {
          uVar6 = uVar4 + 1;
          param_1[0xb5] = uVar6;
          goto LAB_1010fa554;
        }
LAB_1010fa548:
        uVar6 = 0;
        param_1[0xb5] = 0;
LAB_1010fa550:
        if (uVar4 != 0) goto LAB_1010fa554;
      }
      else {
        if (cVar1 == '.') {
          if (uVar4 == 3) {
            uVar6 = 0;
            param_1[0xb5] = 0;
            lVar10 = 1;
          }
          else {
            if (uVar4 != 2) goto LAB_1010fa548;
            param_1[0xb5] = 3;
            uVar6 = 3;
          }
        }
        else {
          if (cVar1 != '\r') goto LAB_1010fa548;
          if (uVar4 != 3) {
            if (uVar4 != 0) {
              param_1[0xb5] = 1;
              uVar6 = 1;
              goto LAB_1010fa550;
            }
            param_1[0xb5] = 1;
            if ((uVar9 != 0) &&
               (uVar2 = FUN_1010d98ec(param_1,1,param_2 + uVar3,uVar9 - uVar3), uVar3 = uVar9,
               (int)uVar2 != 0)) {
              return uVar2;
            }
            goto LAB_1010fa5a8;
          }
          param_1[0xb5] = 4;
          uVar6 = 4;
        }
LAB_1010fa554:
        if (uVar6 <= uVar4) {
          lVar7 = param_1[0xb6];
          lVar5 = -uVar4;
          do {
            lVar7 = lVar7 + -1;
            if (lVar7 == -1) {
              uVar2 = FUN_1010d98ec(param_1,1,"\r\n.\r\n",-lVar5 - lVar10);
              if ((int)uVar2 != 0) {
                return uVar2;
              }
              lVar10 = 0;
              uVar3 = uVar9;
              break;
            }
            param_1[0xb6] = lVar7;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0);
        }
      }
LAB_1010fa5a8:
      uVar9 = uVar9 + 1;
      uVar4 = param_1[0xb5];
    } while (uVar9 < param_3);
  }
  if (uVar4 == 0) {
    if (uVar3 != param_3) {
      uVar2 = FUN_1010d98ec(param_1,1,param_2 + uVar3,param_3 - uVar3);
      return uVar2;
    }
  }
  else if (uVar4 == 5) {
    uVar2 = FUN_1010d98ec(param_1,1,"\r\n.\r\n",2);
    *(uint *)(lVar8 + 0x1e4) = *(uint *)(lVar8 + 0x1e4) & 0xfffffffe;
    param_1[0xb5] = 0;
    return uVar2;
  }
  return 0;
}




undefined8 FUN_1010fa64c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulong uVar7;
  void *pvVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined8 local_98;
  int local_8c;
  ulong local_88;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long local_68;
  
  lVar15 = param_1[0x3a];
  local_98 = 0;
  if ((int)param_1[0xb4] == 4) {
    uVar5 = FUN_1010fb2d8(param_1);
    return uVar5;
  }
  plVar1 = param_1 + 0xa6;
  if (param_1[0xac] != 0) {
    uVar5 = FUN_1010fdf84(plVar1);
    return uVar5;
  }
  plVar2 = param_1 + 0x79;
  do {
    uVar5 = FUN_1010fdc9c((int)lVar15,plVar1,&local_8c,&local_98);
    iVar4 = local_8c;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_8c == 0) {
      return 0;
    }
    switch((int)param_1[0xb4]) {
    case 1:
      lVar14 = *param_1;
      sVar6 = _strlen((char *)(lVar14 + 0x908));
      if (iVar4 != 0x2b) {
        FUN_1010d9258(lVar14,"Got unexpected pop3-server response");
        return 8;
      }
      if (((3 < sVar6) && (uVar7 = sVar6 - 2, 3 < uVar7)) &&
         (*(char *)(lVar14 + uVar7 + 0x908) == '>')) {
        lVar17 = 0;
        lVar16 = 0;
        do {
          if (*(char *)(lVar14 + 0x90b + lVar16) == '<') {
            sVar3 = (sVar6 - 4) - lVar16;
            if (sVar3 != 0) {
              pvVar8 = (void *)(*(code *)PTR__calloc_101873640)(1,(sVar6 - 3) - lVar16);
              param_1[0xba] = (long)pvVar8;
              if (pvVar8 != (void *)0x0) {
                _memcpy(pvVar8,(void *)(lVar14 + lVar16 + 0x90b),sVar3);
                *(undefined1 *)(sVar6 + param_1[0xba] + lVar17 + -4) = 0;
                *(uint *)(param_1 + 0xb7) = *(uint *)(param_1 + 0xb7) | 2;
              }
            }
            break;
          }
          lVar17 = lVar17 + -1;
          uVar12 = lVar16 + 4;
          lVar16 = lVar16 + 1;
        } while (uVar12 < uVar7);
      }
      *(undefined4 *)((long)param_1 + 0x5bc) = 0;
      *(undefined4 *)(param_1 + 0xb9) = 0;
      *(undefined1 *)(param_1 + 0xbb) = 0;
      uVar5 = FUN_1010fdc74(param_1 + 0xa6,"%s");
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(undefined4 *)(param_1 + 0xb4) = 2;
      goto LAB_1010fae8c;
    case 2:
      lVar14 = *param_1;
      piVar13 = (int *)(lVar14 + 0x908);
      sVar6 = _strlen((char *)piVar13);
      if (iVar4 == 0x2b) {
        if ((*(int *)(lVar14 + 0x510) != 0) && ((char)param_1[0x41] == '\0')) {
          if ((char)param_1[0xbb] != '\0') {
            uVar5 = FUN_1010fdc74(plVar1,"%s");
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            *(undefined4 *)(param_1 + 0xb4) = 3;
            goto LAB_1010fae8c;
          }
          if (*(int *)(lVar14 + 0x510) != 1) {
            pcVar9 = "STLS not supported.";
            goto LAB_1010fb198;
          }
        }
      }
      else {
        if (iVar4 == 0x2a) {
          if (3 < sVar6) {
            if (*piVar13 == 0x534c5453) {
              *(undefined1 *)(param_1 + 0xbb) = 1;
            }
            else if (*piVar13 == 0x52455355) {
              *(uint *)(param_1 + 0xb7) = *(uint *)(param_1 + 0xb7) | 1;
            }
            else {
              uVar7 = sVar6 - 5;
              if (((4 < sVar6) && (iVar4 = _memcmp(piVar13,"SASL ",5), iVar4 == 0)) &&
                 (*(uint *)(param_1 + 0xb7) = *(uint *)(param_1 + 0xb7) | 4, uVar7 != 0)) {
                pbVar20 = (byte *)(lVar14 + 0x90d);
                do {
                  uVar12 = (ulong)*pbVar20;
                  if (uVar12 < 0x21 && (1L << (uVar12 & 0x3f) & 0x100002600U) != 0) {
                    pbVar20 = pbVar20 + 1;
                    lVar14 = -1;
                    goto LAB_1010fadd0;
                  }
                  uVar18 = 0;
                  while (((0x20 < (uint)uVar12 ||
                          (uVar19 = uVar18, (1L << (uVar12 & 0x3f) & 0x100002600U) == 0)) &&
                         (uVar19 = uVar18 + 1, uVar19 < uVar7))) {
                    uVar12 = (ulong)pbVar20[uVar18 + 1];
                    uVar18 = uVar19;
                  }
                  switch(uVar19) {
                  case 4:
                    if (*(int *)pbVar20 == 0x4d4c544e) {
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 0x40;
                      goto LAB_1010fadc4;
                    }
                    break;
                  case 5:
                    iVar4 = _memcmp(pbVar20,"LOGIN",5);
                    if (iVar4 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 1;
                    }
                    else {
                      iVar4 = _memcmp(pbVar20,"PLAIN",5);
                      if (iVar4 != 0) break;
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 2;
                    }
                    goto LAB_1010fadc4;
                  case 6:
                    iVar4 = _memcmp(pbVar20,"GSSAPI",6);
                    if (iVar4 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 0x10;
                      goto LAB_1010fadc4;
                    }
                    break;
                  case 7:
                    iVar4 = _memcmp(pbVar20,"XOAUTH2",7);
                    if (iVar4 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 0x80;
                      goto LAB_1010fadc4;
                    }
                    break;
                  case 8:
                    if (*(long *)pbVar20 == 0x35444d2d4d415243) {
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 4;
                    }
                    else {
                      if (*(long *)pbVar20 != 0x4c414e5245545845) break;
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 0x20;
                    }
LAB_1010fadc4:
                    *(uint *)((long)param_1 + 0x5bc) = uVar11;
                    break;
                  case 10:
                    iVar4 = _memcmp(pbVar20,"DIGEST-MD5",10);
                    if (iVar4 == 0) {
                      uVar11 = *(uint *)((long)param_1 + 0x5bc) | 8;
                      goto LAB_1010fadc4;
                    }
                  }
                  pbVar20 = pbVar20 + uVar19;
                  lVar14 = -uVar19;
LAB_1010fadd0:
                  uVar7 = uVar7 + lVar14;
                } while (uVar7 != 0);
              }
            }
          }
          goto LAB_1010fae8c;
        }
        *(uint *)(param_1 + 0xb7) = *(uint *)(param_1 + 0xb7) | 1;
      }
LAB_1010fae74:
      uVar5 = FUN_1010fb378(param_1);
      break;
    case 3:
      if (local_8c != 0x2b) {
        lVar14 = *param_1;
        if (*(int *)(lVar14 + 0x510) != 1) {
          pcVar9 = "STARTTLS denied. %c";
LAB_1010fb198:
          FUN_1010d9258(lVar14,pcVar9);
          return 0x40;
        }
        goto LAB_1010fae74;
      }
      uVar5 = FUN_1010fb2d8(param_1);
      break;
    default:
      goto switchD_1010fa6fc_caseD_4;
    case 5:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c == 0x2b) {
        uVar5 = FUN_101101a5c(lVar14,param_1[0x2e],param_1[0x2f],&local_70,&local_68);
        goto LAB_1010faa88;
      }
      pcVar9 = "Access denied. %c";
LAB_1010fae0c:
      local_68 = 0;
      local_70 = 0;
      FUN_1010d9258(lVar14,pcVar9);
      uVar5 = 0x43;
      goto LAB_1010fae18;
    case 6:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x2b) {
LAB_1010fae04:
        pcVar9 = "Access denied: %d";
        goto LAB_1010fae0c;
      }
      uVar5 = FUN_101101b7c(lVar14,param_1[0x2e],&local_70,&local_68);
      if ((((int)uVar5 == 0) && (local_70 != 0)) &&
         (uVar5 = FUN_1010fdc74(plVar1,"%s"), (int)uVar5 == 0)) {
        uVar10 = 7;
LAB_1010fa964:
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0xb4) = uVar10;
      }
      goto LAB_1010fae18;
    case 7:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x2b) goto LAB_1010fae04;
      uVar5 = FUN_101101b7c(lVar14,param_1[0x2f],&local_70,&local_68);
      goto LAB_1010faa88;
    case 8:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_88 = 0;
      if (local_8c == 0x2b) {
        FUN_1010fb898(lVar14 + 0x908,&local_70);
        iVar4 = FUN_101101c18(local_70,&local_68,&local_88);
        if (iVar4 == 0) {
          uVar5 = FUN_101101c40(lVar14,local_68,param_1[0x2e],param_1[0x2f],&local_78,&local_88);
          if (((int)uVar5 == 0 && local_78 != 0) &&
             (uVar5 = FUN_1010fdc74(plVar1,"%s"), (int)uVar5 == 0)) {
            uVar10 = 0x12;
            goto LAB_1010faeec;
          }
        }
        else {
          uVar5 = FUN_1010fdc74(plVar1,"%s");
          if ((int)uVar5 == 0) {
            uVar10 = 0x11;
LAB_1010faeec:
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0xb4) = uVar10;
          }
        }
        if (local_68 != 0) {
          (*(code *)PTR__free_101873628)();
          local_68 = 0;
        }
        if (local_78 != 0) {
          (*(code *)PTR__free_101873628)();
          local_78 = 0;
        }
      }
      else {
LAB_1010fab78:
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        pcVar9 = "Access denied: %d";
LAB_1010fab88:
        FUN_1010d9258(lVar14,pcVar9);
        uVar5 = 0x43;
      }
      break;
    case 9:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      if (local_8c != 0x2b) goto LAB_1010fab78;
      FUN_1010fb898(lVar14 + 0x908,&local_68);
      uVar5 = FUN_101101dcc(lVar14,local_68,param_1[0x2e],param_1[0x2f],"pop",&local_70,&local_78);
      if ((int)uVar5 == 0) {
        uVar5 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar5 == 0) {
          uVar10 = 10;
          goto LAB_1010fa964;
        }
      }
      else if ((int)uVar5 == 0x3d) goto LAB_1010fae34;
      goto LAB_1010fae18;
    case 10:
      if (local_8c != 0x2b) goto LAB_1010fb07c;
      uVar5 = FUN_1010fdc74(plVar1,"%s");
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0x12;
      goto LAB_1010fae8c;
    case 0xb:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x2b) goto LAB_1010fae04;
      uVar5 = FUN_101101424(param_1[0x2e],param_1[0x2f],plVar2,&local_70,&local_68);
      if ((((int)uVar5 != 0) || (local_70 == 0)) ||
         (uVar5 = FUN_1010fdc74(plVar1,"%s"), (int)uVar5 != 0)) goto LAB_1010fae18;
      uVar10 = 0xc;
      goto LAB_1010fae60;
    case 0xc:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      if (local_8c != 0x2b) goto LAB_1010fae04;
      FUN_1010fb898(lVar14 + 0x908,&local_68);
      iVar4 = FUN_101101254(lVar14,local_68,plVar2);
      if (iVar4 != 0) {
LAB_1010fae34:
        uVar5 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar5 == 0) {
          uVar10 = 0x11;
          goto LAB_1010fae60;
        }
        goto LAB_1010fae18;
      }
      uVar5 = FUN_1011014f8(lVar14,param_1[0x2e],param_1[0x2f],plVar2,&local_70,&local_78);
      if ((int)uVar5 != 0 || local_70 == 0) goto LAB_1010fae18;
      goto LAB_1010faa98;
    case 0x10:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x2b) goto LAB_1010fae04;
      uVar5 = FUN_101102f48(lVar14,param_1[0x2e],param_1[0x31],&local_70,&local_68);
LAB_1010faa88:
      if (((int)uVar5 == 0) && (local_70 != 0)) {
LAB_1010faa98:
        uVar5 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar5 == 0) {
          uVar10 = 0x12;
LAB_1010fae60:
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0xb4) = uVar10;
        }
      }
LAB_1010fae18:
      if (local_70 != 0) {
        (*(code *)PTR__free_101873628)();
        local_70 = 0;
      }
      break;
    case 0x11:
      lVar14 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_88 = local_88 & 0xffffffff00000000;
      local_7c = 0;
      *(uint *)((long)param_1 + 0x5bc) =
           *(uint *)((long)param_1 + 0x5bc) ^ *(uint *)(param_1 + 0xb9);
      uVar5 = FUN_1010fb480(param_1,&local_68,&local_70,&local_78,&local_88,&local_7c);
      if ((int)uVar5 == 0) {
        if (local_68 != 0) {
          uVar5 = FUN_1010fb63c(param_1,local_68,local_70,local_78,local_88 & 0xffffffff,local_7c);
          goto LAB_1010fae18;
        }
        if (((*(uint *)(param_1 + 0xb7) >> 1 & 1) == 0) ||
           ((*(byte *)(param_1 + 0xb8) >> 1 & 1) == 0)) {
          if (((*(uint *)(param_1 + 0xb7) & 1) == 0) || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) {
            pcVar9 = "Authentication cancelled";
            goto LAB_1010fab88;
          }
          uVar5 = FUN_1010fb828(param_1);
        }
        else {
          uVar5 = FUN_1010fb6f0(param_1);
        }
      }
      break;
    case 0x12:
    case 0x13:
      if (local_8c == 0x2b) goto switchD_1010fa6fc_caseD_4;
LAB_1010fb07c:
      lVar15 = *param_1;
      pcVar9 = "Authentication failed: %d";
LAB_1010fb0a8:
      FUN_1010d9258(lVar15,pcVar9);
      return 0x43;
    case 0x14:
      if (local_8c != 0x2b) goto LAB_1010fb098;
      uVar5 = FUN_1010fdc74(plVar1,"PASS %s");
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0x15;
      goto LAB_1010fae8c;
    case 0x15:
      if (local_8c == 0x2b) goto switchD_1010fa6fc_caseD_4;
LAB_1010fb098:
      lVar15 = *param_1;
      pcVar9 = "Access denied. %c";
      goto LAB_1010fb0a8;
    case 0x16:
      if (local_8c != 0x2b) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
        return 0x38;
      }
      lVar15 = *param_1;
      piVar13 = *(int **)(lVar15 + 0x218);
      param_1[0xb5] = 2;
      param_1[0xb6] = 2;
      if (*piVar13 != 0) goto switchD_1010fa6fc_caseD_4;
      FUN_1010eb3d0(param_1,0,0xffffffffffffffff,0,0,0xffffffff,0);
      lVar14 = param_1[0xa6];
      if (lVar14 == 0) goto switchD_1010fa6fc_caseD_4;
      if (*(char *)(lVar15 + 0x4ff) == '\0') {
        uVar5 = FUN_1010fa440(param_1,lVar14,param_1[0xa7]);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        lVar14 = param_1[0xa6];
        if (lVar14 != 0) goto LAB_1010fb128;
      }
      else {
LAB_1010fb128:
        (*(code *)PTR__free_101873628)(lVar14);
        param_1[0xa6] = 0;
      }
      param_1[0xa7] = 0;
switchD_1010fa6fc_caseD_4:
      *(undefined4 *)(param_1 + 0xb4) = 0;
      return 0;
    }
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((int)param_1[0xb4] == 0) {
      return 0;
    }
LAB_1010fae8c:
    uVar7 = FUN_1010fdac4(plVar1);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_1010fb228(long param_1,int *param_2,ulong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((3 < param_3) && (*param_2 == 0x5252452d)) {
    uVar2 = 0x2d;
    goto LAB_1010fb2bc;
  }
  if (*(int *)(param_1 + 0x5a0) == 2) {
    if ((param_3 == 0) || ((char)*param_2 != '.')) {
      uVar2 = 0x2a;
      goto LAB_1010fb2bc;
    }
  }
  else {
    if (param_3 < 3) {
      if (param_3 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = _memcmp("+OK",param_2,3);
      if (iVar1 == 0) goto LAB_1010fb2b8;
    }
    if ((char)*param_2 != '+') {
      return 0;
    }
  }
LAB_1010fb2b8:
  uVar2 = 0x2b;
LAB_1010fb2bc:
  *param_4 = uVar2;
  return 1;
}




undefined8 FUN_1010fb2d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1011051a8(param_1,0,(char *)(param_1 + 0x5a4));
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x5a0) != 4) {
      *(undefined4 *)(param_1 + 0x5a0) = 4;
    }
    if (*(char *)(param_1 + 0x5a4) == '\0') {
      uVar1 = 0;
    }
    else {
      *(undefined ***)(param_1 + 0x308) = &PTR_s_POP3S_10182fa90;
      *(undefined4 *)(param_1 + 0x5bc) = 0;
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      *(undefined1 *)(param_1 + 0x5d8) = 0;
      uVar1 = FUN_1010fdc74(param_1 + 0x530,"%s");
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        *(undefined4 *)(param_1 + 0x5a0) = 2;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1010fb378(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  if (*(char *)((long)param_1 + 0x2cc) == '\0') {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return 0;
  }
  if ((*(byte *)(param_1 + 0xb7) >> 2 & 1) != 0) {
    uVar1 = FUN_1010fb480(param_1,&local_28,&local_30,&local_38,&uStack_3c,&local_40);
    if ((int)uVar1 != 0) goto LAB_1010fb450;
    if ((local_28 != 0) && ((*(byte *)(param_1 + 0xb8) >> 2 & 1) != 0)) {
      uVar1 = FUN_1010fb63c(param_1,local_28,local_30,local_38,uStack_3c,local_40);
      goto LAB_1010fb450;
    }
  }
  if (((*(uint *)(param_1 + 0xb7) >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0xb8) >> 1 & 1) == 0)) {
    if (((*(uint *)(param_1 + 0xb7) & 1) == 0) || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) {
      FUN_1010d909c(*param_1,"No known authentication mechanisms supported!\n");
      uVar1 = 0x43;
    }
    else {
      uVar1 = FUN_1010fb828(param_1);
    }
  }
  else {
    uVar1 = FUN_1010fb6f0(param_1);
  }
LAB_1010fb450:
  if (local_30 != 0) {
    (*(code *)PTR__free_101873628)();
  }
  return uVar1;
}




undefined8
FUN_1010fb480(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)((long)param_1 + 0x5bc);
  if (((uVar1 >> 3 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5c4) >> 3 & 1) == 0)) {
    if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5c4) >> 2 & 1) == 0)) {
      if (((uVar1 >> 6 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5c4) >> 6 & 1) == 0)) {
        if (((((uVar1 >> 7 & 1) == 0) || (*(uint *)((long)param_1 + 0x5c4) == 0xffffffff)) ||
            ((*(uint *)((long)param_1 + 0x5c4) & 0x80) == 0)) && (param_1[0x31] == 0)) {
          if (((uVar1 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5c4) & 1) == 0)) {
            if (((uVar1 >> 1 & 1) != 0) && ((*(byte *)((long)param_1 + 0x5c4) >> 1 & 1) != 0)) {
              *param_2 = "PLAIN";
              *param_5 = 5;
              *param_6 = 0x12;
              *(undefined4 *)(param_1 + 0xb9) = 2;
              if (*(char *)(lVar3 + 0x6c8) != '\0') {
                uVar2 = FUN_101101a5c(lVar3,param_1[0x2e],param_1[0x2f],param_3,param_4);
                return uVar2;
              }
            }
          }
          else {
            *param_2 = "LOGIN";
            *param_5 = 6;
            *param_6 = 7;
            *(undefined4 *)(param_1 + 0xb9) = 1;
            if (*(char *)(lVar3 + 0x6c8) != '\0') {
              uVar2 = FUN_101101b7c(lVar3,param_1[0x2e],param_3,param_4);
              return uVar2;
            }
          }
        }
        else {
          *param_2 = "XOAUTH2";
          *param_5 = 0x10;
          *param_6 = 0x12;
          *(undefined4 *)(param_1 + 0xb9) = 0x80;
          if (*(char *)(lVar3 + 0x6c8) != '\0') {
            uVar2 = FUN_101102f48(lVar3,param_1[0x2e],param_1[0x31],param_3,param_4);
            return uVar2;
          }
        }
      }
      else {
        *param_2 = "NTLM";
        *param_5 = 0xb;
        *param_6 = 0xc;
        *(undefined4 *)(param_1 + 0xb9) = 0x40;
        if (*(char *)(lVar3 + 0x6c8) != '\0') {
          uVar2 = FUN_101101424(param_1[0x2e],param_1[0x2f],param_1 + 0x79,param_3,param_4);
          return uVar2;
        }
      }
    }
    else {
      *param_2 = "CRAM-MD5";
      *param_5 = 8;
      *(undefined4 *)(param_1 + 0xb9) = 4;
    }
  }
  else {
    *param_2 = "DIGEST-MD5";
    *param_5 = 9;
    *(undefined4 *)(param_1 + 0xb9) = 8;
  }
  return 0;
}




undefined8
FUN_1010fb63c(long param_1,char *param_2,long param_3,long param_4,undefined4 param_5,
             undefined4 param_6)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && (sVar1 = _strlen(param_2), param_4 + sVar1 + 8 < 0x100)) {
    uVar2 = FUN_1010fdc74(param_1 + 0x530,"AUTH %s %s");
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x5a0) = param_6;
    return 0;
  }
  uVar2 = FUN_1010fdc74(param_1 + 0x530,"AUTH %s");
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x5a0) = param_5;
  }
  return uVar2;
}




void FUN_1010fb6f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined1 auStack_79 [33];
  undefined1 local_58 [16];
  long local_48;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar5;
  if (*(char *)(param_1 + 0x2cc) == '\0') {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x5a0) = 0;
  }
  else {
    lVar1 = FUN_1010f2bc8(&PTR__CC_MD5_Init_10182f3b8);
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    else {
      pcVar4 = *(char **)(param_1 + 0x5d0);
      _strlen(pcVar4);
      uVar2 = FUN_1010feedc();
      FUN_1010f2c48(lVar1,pcVar4,uVar2);
      pcVar4 = *(char **)(param_1 + 0x178);
      _strlen(pcVar4);
      uVar2 = FUN_1010feedc();
      FUN_1010f2c48(lVar1,pcVar4,uVar2);
      FUN_1010f2c68(lVar1,local_58);
      lVar1 = 0;
      puVar3 = auStack_79;
      do {
        FUN_1010e7270(puVar3,3,"%02x");
        lVar1 = lVar1 + 1;
        puVar3 = puVar3 + 2;
      } while (lVar1 != 0x10);
      uVar2 = FUN_1010fdc74(param_1 + 0x530,"APOP %s %s");
      if ((int)uVar2 == 0) {
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x5a0) = 0x13;
      }
    }
  }
  if (lVar5 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




undefined8 FUN_1010fb828(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x2cc) == '\0') {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x5a0) = 0;
  }
  else {
    uVar1 = FUN_1010fdc74(param_1 + 0x530,"USER %s");
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x5a0) = 0x14;
    }
  }
  return uVar1;
}




void FUN_1010fb898(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  undefined1 *puVar4;
  long lVar5;
  
  for (lVar5 = 0; (cVar2 = *(char *)(param_1 + 2 + lVar5), cVar2 == '\t' || (cVar2 == ' '));
      lVar5 = lVar5 + 1) {
  }
  pcVar1 = (char *)(param_1 + lVar5 + 2);
  sVar3 = _strlen(pcVar1);
  if (sVar3 != 0) {
    puVar4 = (undefined1 *)(sVar3 + param_1 + lVar5 + 2);
    do {
      if (0x20 < (ulong)(byte)puVar4[-1] ||
          (1L << ((ulong)(byte)puVar4[-1] & 0x3f) & 0x100002600U) == 0) {
        *puVar4 = 0;
        break;
      }
      sVar3 = sVar3 - 1;
      puVar4 = puVar4 + -1;
    } while (sVar3 != 0);
  }
  *param_2 = pcVar1;
  return;
}




undefined8 FUN_1010fb940(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if ((*(char *)((long)param_1 + 0x2cb) != '\0') && (*(char *)(lVar4 + 0x4f2) == '\0')) {
    ppuVar1 = &PTR_s_SMTP_10182fd10;
    if ((undefined **)param_1[0x61] != &PTR_s_SMTP_10182fc10) {
      ppuVar1 = &PTR_s_SMTPS_10182fd90;
    }
    param_1[0x61] = (long)ppuVar1;
    uVar3 = (*(code *)ppuVar1[1])();
    return uVar3;
  }
  lVar2 = (*(code *)PTR__calloc_101873640)(0x28,1);
  *(long *)(lVar4 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0;
    *(long *)(lVar4 + 0x8ab0) = *(long *)(lVar4 + 0x8ab0) + 1;
  }
  return uVar3;
}




undefined8 FUN_1010fb9e0(long *param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  
  *param_2 = '\0';
  lVar7 = *param_1;
  if (*(long *)(lVar7 + 0x570) != 0) {
    uVar2 = FUN_1010e5f8c(lVar7,*(long *)(lVar7 + 0x570),0,*(long *)(lVar7 + 0x218) + 8,0,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar7 = *param_1;
  }
  *(undefined8 *)(lVar7 + 0x78) = 0xffffffffffffffff;
  FUN_1010d2468(lVar7,0);
  FUN_1010d2460(lVar7,0);
  FUN_1010d22f4(lVar7,0xffffffffffffffff);
  FUN_1010d22cc(lVar7,0xffffffffffffffff);
  lVar7 = *param_1;
  puVar5 = *(undefined4 **)(lVar7 + 0x218);
  if (*(char *)(lVar7 + 0x4ff) != '\0') {
    *puVar5 = 1;
  }
  *param_2 = '\0';
  lVar6 = *(long *)(lVar7 + 0x6c0);
  *(long *)(puVar5 + 4) = lVar6;
  if (lVar6 == 0 || *(char *)(lVar7 + 0x501) == '\0') {
    uVar2 = FUN_1010fd78c(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
LAB_1010fbcdc:
    uVar2 = FUN_1010fc1d8(param_1,param_2);
    if ((int)uVar2 == 0) {
      if (*param_2 != '\0') {
        FUN_1010fd8dc(param_1,*(char *)((long)param_1 + 0x2d1) != '\0');
      }
      uVar2 = 0;
    }
  }
  else {
    if (*(char **)(lVar7 + 0x678) == (char *)0x0) {
      lVar6 = (*(code *)PTR__strdup_101873638)("<>");
    }
    else {
      if (**(char **)(lVar7 + 0x678) == '<') {
        pcVar3 = "%s";
      }
      else {
        pcVar3 = "<%s>";
      }
      lVar6 = FUN_1010e7298(pcVar3);
    }
    if (lVar6 != 0) {
      if ((*(char **)(lVar7 + 0x680) == (char *)0x0) || ((int)param_1[0xb7] == 0)) {
        lVar7 = 0;
LAB_1010fbb68:
        plVar1 = param_1 + 0xa6;
        if ((*(char *)((long)param_1 + 0x5bd) == '\0') || (*(long *)(*param_1 + 0x8ae8) < 1)) {
          if (lVar7 == 0) {
            uVar2 = FUN_1010fdc74(plVar1,"MAIL FROM:%s");
          }
          else {
            uVar2 = FUN_1010fdc74(plVar1,"MAIL FROM:%s AUTH=%s");
            (*(code *)PTR__free_101873628)(lVar6);
            lVar6 = lVar7;
          }
        }
        else {
          lVar4 = FUN_1010e7298("%ld");
          if (lVar4 == 0) {
            (*(code *)PTR__free_101873628)(lVar6);
            lVar6 = lVar7;
            if (lVar7 == 0) goto LAB_1010fbc88;
            goto LAB_1010fbc84;
          }
          if (lVar7 == 0) {
            uVar2 = FUN_1010fdc74(plVar1,"MAIL FROM:%s SIZE=%s");
          }
          else {
            uVar2 = FUN_1010fdc74(plVar1,"MAIL FROM:%s AUTH=%s SIZE=%s");
            (*(code *)PTR__free_101873628)(lVar6);
            lVar6 = lVar7;
          }
          (*(code *)PTR__free_101873628)(lVar6);
          lVar6 = lVar4;
        }
        (*(code *)PTR__free_101873628)(lVar6);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(undefined4 *)(param_1 + 0xb4) = 0x15;
        goto LAB_1010fbcdc;
      }
      if (**(char **)(lVar7 + 0x680) == '\0') {
        lVar7 = (*(code *)PTR__strdup_101873638)("<>");
      }
      else {
        lVar7 = FUN_1010e7298("%s");
      }
      if (lVar7 != 0) goto LAB_1010fbb68;
LAB_1010fbc84:
      (*(code *)PTR__free_101873628)(lVar6);
    }
LAB_1010fbc88:
    uVar2 = 0x1b;
  }
  return uVar2;
}




undefined8 FUN_1010fbd30(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  long local_48;
  
  lVar2 = *param_1;
  puVar4 = *(undefined4 **)(lVar2 + 0x218);
  if ((puVar4 == (undefined4 *)0x0) || (param_1[0xb1] == 0)) {
    return 0;
  }
  if ((int)param_2 == 0) {
    if (((*(char *)(lVar2 + 0x521) == '\0') && (*(char *)(lVar2 + 0x501) != '\0')) &&
       (*(long *)(lVar2 + 0x6c0) != 0)) {
      if ((*(char *)(puVar4 + 8) == '\0') && (*(long *)(lVar2 + 0x8ae8) != 0)) {
        lVar2 = (*(code *)PTR__strdup_101873638)("\r\n.\r\n");
        lVar3 = 5;
      }
      else {
        lVar2 = (*(code *)PTR__strdup_101873638)(".\r\n");
        lVar3 = 3;
      }
      if (lVar2 == 0) {
        return 0x1b;
      }
      uVar1 = FUN_1010d942c(param_1,*(undefined4 *)((long)param_1 + 0x324),lVar2,lVar3,&local_48);
      if ((int)uVar1 != 0) {
        (*(code *)PTR__free_101873628)(lVar2);
        return uVar1;
      }
      if (lVar3 - local_48 == 0) {
        auVar5 = FUN_1010d0e58();
        *(undefined1 (*) [16])(param_1 + 0xae) = auVar5;
        (*(code *)PTR__free_101873628)(lVar2);
      }
      else {
        param_1[0xab] = lVar2;
        param_1[0xad] = lVar3;
        param_1[0xac] = lVar3 - local_48;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0x18;
      param_2 = FUN_1010fd894(param_1);
    }
    else {
      param_2 = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  if (*(long *)(puVar4 + 2) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(puVar4 + 2) = 0;
  }
  *puVar4 = 0;
  return param_2;
}




undefined8 FUN_1010fc1d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(byte *)(*(long *)(param_1 + 0x308) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x5a4), *pcVar2 == '\0')) {
    uVar1 = FUN_1011051a8(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_1010fd978(param_1 + 0x530,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x5a0) == 0;
  return uVar1;
}




undefined8 FUN_1010fc25c(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010fc1d8();
  if ((int)uVar1 == 0) {
    if (*param_2 != '\0') {
      FUN_1010fd8dc(param_1,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1010fc29c(long param_1)

{
  FUN_1010fdf54(param_1 + 0x530);
  return;
}




undefined8 FUN_1010fc2a4(long param_1,ulong param_2)

{
  int iVar1;
  
  if ((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x588) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x588) + 0x2d3) != '\0')) {
    iVar1 = FUN_1010fdc74(param_1 + 0x530,"%s");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5a0) = 0x19;
      FUN_1010fd894(param_1);
    }
  }
  FUN_1010fe018(param_1 + 0x530);
  FUN_101102fd8(param_1,*(undefined4 *)(param_1 + 0x5b8));
  if (*(long *)(param_1 + 0x5a8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x5a8) = 0;
  }
  return 0;
}




undefined8 FUN_1010fc340(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar4 = *param_1;
  lVar10 = *(long *)(lVar4 + 0x218);
  lVar5 = *(long *)(lVar4 + 0x8950);
  if ((lVar5 == 0) || (*(char *)(lVar4 + 0x3ca) != '\0')) {
    lVar2 = (*(code *)PTR__malloc_101873620)(0x8000);
    lVar6 = lVar5;
    lVar5 = lVar2;
    if (lVar2 == 0) {
      FUN_1010d9258(lVar4,"Failed to alloc scratch buffer!");
      return 0x1b;
    }
  }
  else {
    lVar2 = 0;
    lVar6 = 0;
  }
  if (param_2 < 1) {
    lVar11 = 0;
  }
  else {
    lVar12 = 0;
    lVar11 = 0;
    uVar7 = *(ulong *)(lVar10 + 0x18);
    uVar8 = uVar7;
    do {
      lVar3 = *(long *)(lVar4 + 0x208);
      if ("\r\n.\r\n"[uVar7] == *(char *)(lVar3 + lVar12)) {
        uVar1 = uVar7 + 1;
        *(ulong *)(lVar10 + 0x18) = uVar1;
        if ((uVar7 == 1) || (uVar7 == 4)) {
          *(undefined1 *)(lVar10 + 0x20) = 1;
          uVar7 = uVar1;
        }
        else {
          *(undefined1 *)(lVar10 + 0x20) = 0;
          uVar7 = uVar1;
        }
LAB_1010fc468:
        if (uVar7 == 0) goto LAB_1010fc46c;
        if (uVar7 == 3) {
          sVar9 = 4 - uVar8;
          _memcpy((void *)(lVar5 + lVar11),"\r\n.." + uVar8,sVar9);
          uVar7 = 0;
          uVar8 = 0;
          lVar11 = sVar9 + lVar11;
          *(undefined8 *)(lVar10 + 0x18) = 0;
        }
      }
      else {
        if (uVar7 != 0) {
          _memcpy((void *)(lVar5 + lVar11),"\r\n.\r\n" + uVar8,uVar7 - uVar8);
          lVar3 = *(long *)(lVar4 + 0x208);
          lVar11 = (lVar11 - uVar8) + *(long *)(lVar10 + 0x18);
          uVar7 = (ulong)(*(char *)(lVar3 + lVar12) == '\r');
          *(ulong *)(lVar10 + 0x18) = uVar7;
          *(undefined1 *)(lVar10 + 0x20) = 0;
          uVar8 = 0;
          goto LAB_1010fc468;
        }
LAB_1010fc46c:
        *(undefined1 *)(lVar5 + lVar11) = *(undefined1 *)(lVar3 + lVar12);
        lVar11 = lVar11 + 1;
        uVar7 = *(ulong *)(lVar10 + 0x18);
      }
      lVar12 = lVar12 + 1;
    } while (param_2 != lVar12);
    if (uVar7 - uVar8 != 0) {
      _memcpy((void *)(lVar5 + lVar11),"\r\n.\r\n" + uVar8,uVar7 - uVar8);
      lVar11 = (lVar11 - uVar8) + *(long *)(lVar10 + 0x18);
    }
  }
  if (lVar11 == param_2) {
    if (lVar2 != 0) {
      (*(code *)PTR__free_101873628)();
    }
  }
  else {
    *(long *)(lVar4 + 0x208) = lVar5;
    *(long *)(lVar4 + 0x8950) = lVar5;
    if (lVar6 != 0) {
      (*(code *)PTR__free_101873628)(lVar6);
    }
    *(long *)(lVar4 + 0x200) = lVar11;
  }
  return 0;
}




undefined8 FUN_1010fc568(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 local_98;
  int local_8c;
  ulong local_88;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long local_68;
  
  lVar4 = param_1[0x3a];
  lVar14 = *param_1;
  local_98 = 0;
  if ((int)param_1[0xb4] == 5) {
    uVar7 = FUN_1010fd2ec(param_1);
    return uVar7;
  }
  plVar1 = param_1 + 0xa6;
  if (param_1[0xac] != 0) {
    uVar7 = FUN_1010fdf84(plVar1);
    return uVar7;
  }
  plVar2 = param_1 + 0x79;
  do {
    uVar7 = FUN_1010fdc9c((int)lVar4,plVar1,&local_8c,&local_98);
    iVar5 = local_8c;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    lVar10 = param_1[0xb4];
    if ((int)lVar10 != 0x19 && local_8c != 1) {
      *(int *)(lVar14 + 0x8b28) = local_8c;
    }
    if (local_8c == 0) {
      return 0;
    }
    switch((int)lVar10) {
    case 1:
      if (99 < local_8c - 200U) {
        FUN_1010d9258(*param_1,"Got unexpected smtp-server response: %d");
        return 8;
      }
      uVar7 = FUN_1010fd358(param_1);
      break;
    case 2:
      lVar10 = *param_1;
      sVar8 = _strlen((char *)(lVar10 + 0x908));
      if ((iVar5 == 1) || (iVar5 - 200U < 100)) {
        plVar3 = (long *)(lVar10 + 0x90c);
        uVar9 = sVar8 - 4;
        if (uVar9 < 8) {
          if (3 < uVar9) goto LAB_1010fccd8;
        }
        else if (*plVar3 == 0x534c545452415453) {
          *(undefined1 *)((long)param_1 + 0x5bc) = 1;
        }
        else {
LAB_1010fccd8:
          if (*(int *)plVar3 == 0x455a4953) {
            *(undefined1 *)((long)param_1 + 0x5bd) = 1;
          }
          else if ((4 < uVar9) && (iVar6 = _memcmp(plVar3,"AUTH ",5), iVar6 == 0)) {
            *(undefined1 *)((long)param_1 + 0x5be) = 1;
            uVar9 = sVar8 - 9;
            if (uVar9 != 0) {
              pbVar19 = (byte *)(lVar10 + 0x911);
              do {
                uVar15 = (ulong)*pbVar19;
                if (uVar15 < 0x21 && (1L << (uVar15 & 0x3f) & 0x100002600U) != 0) {
                  pbVar19 = pbVar19 + 1;
                  lVar16 = -1;
                }
                else {
                  uVar17 = 0;
                  while (((0x20 < (uint)uVar15 ||
                          (uVar18 = uVar17, (1L << (uVar15 & 0x3f) & 0x100002600U) == 0)) &&
                         (uVar18 = uVar17 + 1, uVar18 < uVar9))) {
                    uVar15 = (ulong)pbVar19[uVar17 + 1];
                    uVar17 = uVar18;
                  }
                  switch(uVar18) {
                  case 4:
                    if (*(int *)pbVar19 == 0x4d4c544e) {
                      uVar13 = *(uint *)(param_1 + 0xb6) | 0x40;
                      goto LAB_1010fcef0;
                    }
                    break;
                  case 5:
                    iVar6 = _memcmp(pbVar19,"LOGIN",5);
                    if (iVar6 == 0) {
                      *(uint *)(param_1 + 0xb6) = *(uint *)(param_1 + 0xb6) | 1;
                    }
                    else {
                      iVar6 = _memcmp(pbVar19,"PLAIN",5);
                      if (iVar6 == 0) {
                        uVar13 = *(uint *)(param_1 + 0xb6) | 2;
                        goto LAB_1010fcef0;
                      }
                    }
                    break;
                  case 6:
                    iVar6 = _memcmp(pbVar19,"GSSAPI",6);
                    if (iVar6 == 0) {
                      uVar13 = *(uint *)(param_1 + 0xb6) | 0x10;
                      goto LAB_1010fcef0;
                    }
                    break;
                  case 7:
                    iVar6 = _memcmp(pbVar19,"XOAUTH2",7);
                    if (iVar6 == 0) {
                      uVar13 = *(uint *)(param_1 + 0xb6) | 0x80;
                      goto LAB_1010fcef0;
                    }
                    break;
                  case 8:
                    if (*(long *)pbVar19 == 0x35444d2d4d415243) {
                      uVar13 = *(uint *)(param_1 + 0xb6) | 4;
                    }
                    else {
                      if (*(long *)pbVar19 != 0x4c414e5245545845) break;
                      uVar13 = *(uint *)(param_1 + 0xb6) | 0x20;
                    }
LAB_1010fcef0:
                    *(uint *)(param_1 + 0xb6) = uVar13;
                    break;
                  case 10:
                    iVar6 = _memcmp(pbVar19,"DIGEST-MD5",10);
                    if (iVar6 == 0) {
                      uVar13 = *(uint *)(param_1 + 0xb6) | 8;
                      goto LAB_1010fcef0;
                    }
                  }
                  pbVar19 = pbVar19 + uVar18;
                  lVar16 = -uVar18;
                }
                uVar9 = uVar9 + lVar16;
              } while (uVar9 != 0);
            }
          }
        }
        if (iVar5 != 1) {
          if ((*(int *)(lVar10 + 0x510) != 0) && ((char)param_1[0x41] == '\0')) {
            if (*(char *)((long)param_1 + 0x5bc) != '\0') {
              uVar7 = FUN_1010fdc74(plVar1,"%s");
              if ((int)uVar7 != 0) {
                return uVar7;
              }
              *(undefined4 *)(param_1 + 0xb4) = 4;
              goto LAB_1010fd034;
            }
            if (*(int *)(lVar10 + 0x510) != 1) {
              pcVar11 = "STARTTLS not supported.";
LAB_1010fd17c:
              FUN_1010d9258(lVar10,pcVar11);
              return 0x40;
            }
          }
LAB_1010fd01c:
          uVar7 = FUN_1010fd3b0(param_1);
          break;
        }
      }
      else {
        if ((1 < *(uint *)(lVar10 + 0x510)) && ((char)param_1[0x41] == '\0')) goto LAB_1010fd198;
        *(undefined4 *)(param_1 + 0xb7) = 0;
        uVar7 = FUN_1010fdc74(plVar1,"HELO %s");
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        *(undefined4 *)(param_1 + 0xb4) = 3;
      }
      goto LAB_1010fd034;
    case 3:
      if (99 < local_8c - 200U) {
        lVar10 = *param_1;
LAB_1010fd198:
        FUN_1010d9258(lVar10,"Remote access denied: %d");
        return 9;
      }
      goto switchD_1010fc66c_caseD_5;
    case 4:
      if (local_8c != 0xdc) {
        lVar10 = *param_1;
        if (*(int *)(lVar10 + 0x510) != 1) {
          pcVar11 = "STARTTLS denied. %c";
          goto LAB_1010fd17c;
        }
        goto LAB_1010fd01c;
      }
      uVar7 = FUN_1010fd2ec(param_1);
      break;
    default:
      goto switchD_1010fc66c_caseD_5;
    case 6:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x14e) {
LAB_1010fcba8:
        local_68 = 0;
        local_70 = 0;
        FUN_1010d9258(lVar10,"Access denied: %d");
        uVar7 = 0x43;
        goto LAB_1010fccb0;
      }
      uVar7 = FUN_101101a5c(lVar10,param_1[0x2e],param_1[0x2f],&local_70,&local_68);
      goto LAB_1010fc998;
    case 7:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x14e) goto LAB_1010fcba8;
      uVar7 = FUN_101101b7c(lVar10,param_1[0x2e],&local_70,&local_68);
      if ((((int)uVar7 != 0) || (local_70 == 0)) ||
         (uVar7 = FUN_1010fdc74(plVar1,"%s"), (int)uVar7 != 0)) goto LAB_1010fccb0;
      uVar12 = 8;
      goto LAB_1010fcca8;
    case 8:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x14e) goto LAB_1010fcba8;
      uVar7 = FUN_101101b7c(lVar10,param_1[0x2f],&local_70,&local_68);
      goto LAB_1010fc998;
    case 9:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_88 = 0;
      if (local_8c != 0x14e) goto LAB_1010fcb04;
      FUN_1010fd6e4(lVar10 + 0x908,&local_70);
      iVar5 = FUN_101101c18(local_70,&local_68,&local_88);
      if (iVar5 == 0) {
        uVar7 = FUN_101101c40(lVar10,local_68,param_1[0x2e],param_1[0x2f],&local_78,&local_88);
        if (((int)uVar7 == 0 && local_78 != 0) &&
           (uVar7 = FUN_1010fdc74(plVar1,"%s"), (int)uVar7 == 0)) {
          uVar12 = 0x13;
          goto LAB_1010fcf54;
        }
      }
      else {
        uVar7 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar7 == 0) {
          uVar12 = 0x12;
LAB_1010fcf54:
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0xb4) = uVar12;
        }
      }
      if (local_68 != 0) {
        (*(code *)PTR__free_101873628)();
        local_68 = 0;
      }
      if (local_78 != 0) {
        (*(code *)PTR__free_101873628)();
        local_78 = 0;
      }
      break;
    case 10:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      if (local_8c == 0x14e) {
        FUN_1010fd6e4(lVar10 + 0x908,&local_68);
        uVar7 = FUN_101101dcc(lVar10,local_68,param_1[0x2e],param_1[0x2f],"smtp",&local_70,&local_78
                             );
        if ((int)uVar7 == 0) {
          uVar7 = FUN_1010fdc74(plVar1,"%s");
          if ((int)uVar7 == 0) {
            uVar12 = 0xb;
            goto LAB_1010fcca8;
          }
        }
        else if ((int)uVar7 == 0x3d) goto LAB_1010fcc80;
        goto LAB_1010fccb0;
      }
LAB_1010fcb04:
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      FUN_1010d9258(lVar10,"Access denied: %d");
      uVar7 = 0x43;
      break;
    case 0xb:
      if (local_8c != 0x14e) {
LAB_1010fd084:
        FUN_1010d9258(*param_1,"Authentication failed: %d");
        return 0x43;
      }
      uVar7 = FUN_1010fdc74(plVar1,"%s");
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0x13;
      goto LAB_1010fd034;
    case 0xc:
      local_70 = 0;
      local_68 = 0;
      if (local_8c == 0x14e) {
        uVar7 = FUN_101101424(param_1[0x2e],param_1[0x2f],plVar2,&local_68,&local_70);
        if ((((int)uVar7 == 0) && (local_68 != 0)) &&
           (uVar7 = FUN_1010fdc74(plVar1,"%s"), (int)uVar7 == 0)) {
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0xb4) = 0xd;
        }
      }
      else {
        FUN_1010d9258(*param_1,"Access denied: %d");
        uVar7 = 0x43;
      }
      if (local_68 != 0) {
        (*(code *)PTR__free_101873628)();
        local_68 = 0;
      }
      break;
    case 0xd:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      if (local_8c != 0x14e) goto LAB_1010fcba8;
      FUN_1010fd6e4(lVar10 + 0x908,&local_68);
      iVar5 = FUN_101101254(lVar10,local_68,plVar2);
      if (iVar5 == 0) {
        uVar7 = FUN_1011014f8(lVar10,param_1[0x2e],param_1[0x2f],plVar2,&local_70,&local_78);
        if ((int)uVar7 != 0 || local_70 == 0) goto LAB_1010fccb0;
        goto LAB_1010fc9a8;
      }
LAB_1010fcc80:
      uVar7 = FUN_1010fdc74(plVar1,"%s");
      if ((int)uVar7 == 0) {
        uVar12 = 0x12;
        goto LAB_1010fcca8;
      }
      goto LAB_1010fccb0;
    case 0x11:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      if (local_8c != 0x14e) goto LAB_1010fcba8;
      uVar7 = FUN_101102f48(lVar10,param_1[0x2e],param_1[0x31],&local_70,&local_68);
LAB_1010fc998:
      if (((int)uVar7 == 0) && (local_70 != 0)) {
LAB_1010fc9a8:
        uVar7 = FUN_1010fdc74(plVar1,"%s");
        if ((int)uVar7 == 0) {
          uVar12 = 0x13;
LAB_1010fcca8:
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0xb4) = uVar12;
        }
      }
LAB_1010fccb0:
      if (local_70 != 0) {
        (*(code *)PTR__free_101873628)();
        local_70 = 0;
      }
      break;
    case 0x12:
      lVar10 = *param_1;
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_88 = local_88 & 0xffffffff00000000;
      local_7c = 0;
      *(uint *)(param_1 + 0xb6) = *(uint *)(param_1 + 0xb6) ^ *(uint *)(param_1 + 0xb7);
      uVar7 = FUN_1010fd474(param_1,&local_68,&local_70,&local_78,&local_88,&local_7c);
      if ((int)uVar7 == 0) {
        if (local_68 == 0) {
          FUN_1010d9258(lVar10,"Authentication cancelled");
          uVar7 = 0x43;
        }
        else {
          uVar7 = FUN_1010fd630(param_1,local_68,local_70,local_78,local_88 & 0xffffffff,local_7c);
          if (local_70 != 0) {
            (*(code *)PTR__free_101873628)();
            local_70 = 0;
          }
        }
      }
      break;
    case 0x13:
      if (local_8c != 0xeb) goto LAB_1010fd084;
      goto switchD_1010fc66c_caseD_5;
    case 0x14:
      lVar16 = *param_1;
      lVar10 = *(long *)(lVar16 + 0x218);
      sVar8 = _strlen((char *)(lVar16 + 0x908));
      if ((((99 < iVar5 - 200U) && (*(long *)(lVar10 + 0x10) != 0 && iVar5 != 1)) &&
          (iVar5 != 0x229)) ||
         (((iVar5 != 1 && (99 < iVar5 - 200U)) && (*(long *)(lVar10 + 0x10) == 0)))) {
        FUN_1010d9258(lVar16,"Command failed: %d");
        return 0x38;
      }
      if (*(char *)(lVar16 + 0x4ff) == '\0') {
        *(undefined1 *)(lVar16 + sVar8 + 0x908) = 10;
        uVar7 = FUN_1010d98ec(param_1,1,(char *)(lVar16 + 0x908),sVar8 + 1);
        *(undefined1 *)(lVar16 + sVar8 + 0x908) = 0;
      }
      else {
        uVar7 = 0;
      }
      if (iVar5 != 1) {
        if ((*(long *)(lVar10 + 0x10) == 0) ||
           (lVar16 = *(long *)(*(long *)(lVar10 + 0x10) + 8), *(long *)(lVar10 + 0x10) = lVar16,
           lVar16 == 0)) {
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
        else {
          uVar7 = FUN_1010fd78c(param_1);
        }
      }
      break;
    case 0x15:
      if (99 < local_8c - 200U) {
        lVar10 = *param_1;
        pcVar11 = "MAIL failed: %d";
LAB_1010fd164:
        FUN_1010d9258(lVar10,pcVar11);
        return 0x37;
      }
LAB_1010fcaf8:
      uVar7 = FUN_1010fd824(param_1);
      break;
    case 0x16:
      lVar10 = *param_1;
      if (99 < local_8c - 200U) {
        pcVar11 = "RCPT failed: %d";
        goto LAB_1010fd164;
      }
      lVar16 = *(long *)(*(long *)(*(long *)(lVar10 + 0x218) + 0x10) + 8);
      *(long *)(*(long *)(lVar10 + 0x218) + 0x10) = lVar16;
      if (lVar16 != 0) goto LAB_1010fcaf8;
      uVar7 = FUN_1010fdc74(plVar1,"%s");
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0x17;
      goto LAB_1010fd034;
    case 0x17:
      lVar10 = *param_1;
      if (local_8c != 0x162) {
        pcVar11 = "DATA failed: %d";
        goto LAB_1010fd164;
      }
      FUN_1010d22f4(lVar10,*(undefined8 *)(lVar10 + 0x8ae8));
      FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
switchD_1010fc66c_caseD_5:
      *(undefined4 *)(param_1 + 0xb4) = 0;
      return 0;
    case 0x18:
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (local_8c == 0xfa) {
        return 0;
      }
      return 0x38;
    }
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if ((int)param_1[0xb4] == 0) {
      return 0;
    }
LAB_1010fd034:
    uVar9 = FUN_1010fdac4(plVar1);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  } while( true );
}




undefined8 FUN_1010fd230(long param_1,byte *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((((3 < param_3) && (*param_2 - 0x30 < 10)) && (param_2[1] - 0x30 < 10)) &&
     (param_2[2] - 0x30 < 10)) {
    if ((param_3 == 5) || (param_2[3] == 0x20)) {
      _strtol((char *)param_2,(char **)0x0,10);
      iVar2 = FUN_1010feee0();
      iVar1 = 0;
      if (iVar2 != 1) {
        iVar1 = iVar2;
      }
      *param_4 = iVar1;
      return 1;
    }
    if ((param_2[3] == 0x2d) &&
       ((*(int *)(param_1 + 0x5a0) == 2 || (*(int *)(param_1 + 0x5a0) == 0x14)))) {
      *param_4 = 1;
      return 1;
    }
  }
  return 0;
}




undefined8 FUN_1010fd2ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1011051a8(param_1,0,(char *)(param_1 + 0x5a4));
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x5a0) != 5) {
      *(undefined4 *)(param_1 + 0x5a0) = 5;
    }
    if (*(char *)(param_1 + 0x5a4) != '\0') {
      *(undefined ***)(param_1 + 0x308) = &PTR_s_SMTPS_10182fc90;
      uVar1 = FUN_1010fd358(param_1);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1010fd358(long param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  *(undefined1 *)(param_1 + 0x5bc) = 0;
  *(undefined1 *)(param_1 + 0x5be) = 0;
  iVar1 = FUN_1010fdc74(param_1 + 0x530,"EHLO %s");
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5a0) = 2;
  }
  return;
}




undefined8 FUN_1010fd3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  if ((*(char *)((long)param_1 + 0x2cc) == '\0') || (*(char *)((long)param_1 + 0x5be) == '\0')) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    uVar1 = FUN_1010fd474(param_1,&local_28,&local_30,&local_38,&uStack_3c,&local_40);
    if ((int)uVar1 == 0) {
      if (local_28 == 0) {
        FUN_1010d909c(*param_1,"No known authentication mechanisms supported!\n");
        uVar1 = 0x43;
      }
      else {
        uVar1 = FUN_1010fd630(param_1,local_28,local_30,local_38,uStack_3c,local_40);
        if (local_30 != 0) {
          (*(code *)PTR__free_101873628)();
        }
      }
    }
  }
  return uVar1;
}




undefined8
FUN_1010fd474(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)(param_1 + 0xb6);
  if (((uVar1 >> 3 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5b4) >> 3 & 1) == 0)) {
    if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5b4) >> 2 & 1) == 0)) {
      if (((uVar1 >> 6 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5b4) >> 6 & 1) == 0)) {
        if (((((uVar1 >> 7 & 1) == 0) || (*(uint *)((long)param_1 + 0x5b4) == 0xffffffff)) ||
            ((*(uint *)((long)param_1 + 0x5b4) & 0x80) == 0)) && (param_1[0x31] == 0)) {
          if (((uVar1 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5b4) & 1) == 0)) {
            if (((uVar1 >> 1 & 1) != 0) && ((*(byte *)((long)param_1 + 0x5b4) >> 1 & 1) != 0)) {
              *param_2 = "PLAIN";
              *param_5 = 6;
              *param_6 = 0x13;
              *(undefined4 *)(param_1 + 0xb7) = 2;
              if (*(char *)(lVar3 + 0x6c8) != '\0') {
                uVar2 = FUN_101101a5c(lVar3,param_1[0x2e],param_1[0x2f],param_3,param_4);
                return uVar2;
              }
            }
          }
          else {
            *param_2 = "LOGIN";
            *param_5 = 7;
            *param_6 = 8;
            *(undefined4 *)(param_1 + 0xb7) = 1;
            if (*(char *)(lVar3 + 0x6c8) != '\0') {
              uVar2 = FUN_101101b7c(lVar3,param_1[0x2e],param_3,param_4);
              return uVar2;
            }
          }
        }
        else {
          *param_2 = "XOAUTH2";
          *param_5 = 0x11;
          *param_6 = 0x13;
          *(undefined4 *)(param_1 + 0xb7) = 0x80;
          if (*(char *)(lVar3 + 0x6c8) != '\0') {
            uVar2 = FUN_101102f48(lVar3,param_1[0x2e],param_1[0x31],param_3,param_4);
            return uVar2;
          }
        }
      }
      else {
        *param_2 = "NTLM";
        *param_5 = 0xc;
        *param_6 = 0xd;
        *(undefined4 *)(param_1 + 0xb7) = 0x40;
        if (*(char *)(lVar3 + 0x6c8) != '\0') {
          uVar2 = FUN_101101424(param_1[0x2e],param_1[0x2f],param_1 + 0x79,param_3,param_4);
          return uVar2;
        }
      }
    }
    else {
      *param_2 = "CRAM-MD5";
      *param_5 = 9;
      *(undefined4 *)(param_1 + 0xb7) = 4;
    }
  }
  else {
    *param_2 = "DIGEST-MD5";
    *param_5 = 10;
    *(undefined4 *)(param_1 + 0xb7) = 8;
  }
  return 0;
}




undefined8
FUN_1010fd630(long param_1,char *param_2,long param_3,long param_4,undefined4 param_5,
             undefined4 param_6)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((param_3 != 0) && (sVar1 = _strlen(param_2), param_4 + sVar1 + 8 < 0x201)) {
    uVar2 = FUN_1010fdc74(param_1 + 0x530,"AUTH %s %s");
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x5a0) = param_6;
    return 0;
  }
  uVar2 = FUN_1010fdc74(param_1 + 0x530,"AUTH %s");
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x5a0) = param_5;
  }
  return uVar2;
}




void FUN_1010fd6e4(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  undefined1 *puVar4;
  long lVar5;
  
  for (lVar5 = 0; (cVar2 = *(char *)(param_1 + 4 + lVar5), cVar2 == '\t' || (cVar2 == ' '));
      lVar5 = lVar5 + 1) {
  }
  pcVar1 = (char *)(param_1 + lVar5 + 4);
  sVar3 = _strlen(pcVar1);
  if (sVar3 != 0) {
    puVar4 = (undefined1 *)(sVar3 + param_1 + lVar5 + 4);
    do {
      if (0x20 < (ulong)(byte)puVar4[-1] ||
          (1L << ((ulong)(byte)puVar4[-1] & 0x3f) & 0x100002600U) == 0) {
        *puVar4 = 0;
        break;
      }
      sVar3 = sVar3 - 1;
      puVar4 = puVar4 + -1;
    } while (sVar3 != 0);
  }
  *param_2 = pcVar1;
  return;
}




void FUN_1010fd78c(long *param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(long *)(*(long *)(*param_1 + 0x218) + 0x10) == 0) {
    pcVar2 = "%s";
  }
  else {
    pcVar2 = "%s %s";
  }
  iVar1 = FUN_1010fdc74(param_1 + 0xa6,pcVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0x14;
  }
  return;
}




void FUN_1010fd824(long *param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)**(undefined8 **)(*(long *)(*param_1 + 0x218) + 0x10) == '<') {
    pcVar2 = "RCPT TO:%s";
  }
  else {
    pcVar2 = "RCPT TO:<%s>";
  }
  iVar1 = FUN_1010fdc74(param_1 + 0xa6,pcVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0x16;
  }
  return;
}




undefined8 FUN_1010fd894(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5a0) == 0) {
    uVar1 = 0;
  }
  else {
    do {
      uVar1 = FUN_1010fd978(param_1 + 0x530,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    } while (*(int *)(param_1 + 0x5a0) != 0);
  }
  return uVar1;
}




void FUN_1010fd8dc(long *param_1)

{
  if (**(int **)(*param_1 + 0x218) != 0) {
    FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    return;
  }
  return;
}




long FUN_1010fd90c(long param_1)

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
  auVar5 = FUN_1010d0e58();
  lVar1 = FUN_1010d0e80(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48));
  lVar4 = lVar4 - lVar1;
  lVar3 = *(long *)(lVar3 + 0x358);
  if (lVar3 != 0) {
    auVar5 = FUN_1010d0e58();
    lVar1 = FUN_1010d0e80(auVar5._0_8_,auVar5._8_8_,plVar2[0x36],plVar2[0x37]);
    lVar3 = lVar3 - lVar1;
    if (lVar3 <= lVar4) {
      lVar4 = lVar3;
    }
  }
  return lVar4;
}




undefined8 FUN_1010fd978(long *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar10 = (undefined8 *)param_1[0xb];
  uVar3 = *(undefined4 *)(puVar10 + 0x3a);
  lVar7 = FUN_1010fd90c();
  uVar11 = *puVar10;
  if (lVar7 < 1) {
    FUN_1010d9258(uVar11,"server response timeout");
    return 0x1c;
  }
  if (999 < lVar7) {
    lVar7 = 1000;
  }
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = lVar7;
  }
  lVar7 = param_1[6];
  if (lVar7 == 0) {
    if (((*param_1 != 0) && ((ulong)param_1[2] < (ulong)param_1[1])) ||
       (uVar8 = thunk_FUN_101106684(puVar10,0), (uVar8 & 1) != 0)) {
      iVar5 = 1;
      goto LAB_1010fda34;
    }
    lVar7 = param_1[6];
  }
  uVar1 = uVar3;
  uVar4 = 0xffffffff;
  if (lVar7 == 0) {
    uVar1 = 0xffffffff;
    uVar4 = uVar3;
  }
  iVar5 = FUN_1010f37c8(uVar4,0xffffffff,uVar1,lVar2);
LAB_1010fda34:
  if (param_2 != 0) {
    iVar6 = FUN_1010d1dac(puVar10);
    if (iVar6 != 0) {
      return 0x2a;
    }
    auVar12 = FUN_1010d0e58();
    uVar9 = FUN_1010e5e20(uVar11,auVar12._0_8_,auVar12._8_8_);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
  }
  if (iVar5 == 0) {
    uVar11 = 0;
  }
  else {
    if (iVar5 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001010fdac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)param_1[0xc])(puVar10);
      return uVar11;
    }
    FUN_1010d9258(uVar11,"select/poll error");
    uVar11 = 0x1b;
  }
  return uVar11;
}




bool FUN_1010fdac4(long *param_1)

{
  if ((param_1[6] == 0) && (*param_1 != 0)) {
    return (ulong)param_1[2] < (ulong)param_1[1];
  }
  return false;
}




void FUN_1010fdaec(long param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x58) + 0x908;
  *(undefined1 *)(param_1 + 0x20) = 1;
  auVar1 = FUN_1010d0e58();
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar1;
  return;
}




undefined8 FUN_1010fdb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  long local_48;
  
  plVar5 = *(long **)(param_1 + 0x58);
  lVar1 = FUN_1010e7298("%s\r\n");
  if (lVar1 != 0) {
    pcVar2 = (char *)FUN_1010e7408(lVar1,param_3);
    (*(code *)PTR__free_101873628)(lVar1);
    if (pcVar2 != (char *)0x0) {
      local_48 = 0;
      sVar3 = _strlen(pcVar2);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x58) + 0x908;
      *(undefined1 *)(param_1 + 0x20) = 1;
      auVar6 = FUN_1010d0e58();
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar6;
      uVar4 = FUN_1010d942c(plVar5,(int)plVar5[0x3a],pcVar2,sVar3,&local_48);
      if ((int)uVar4 != 0) {
        (*(code *)PTR__free_101873628)(pcVar2);
        return uVar4;
      }
      if (*(char *)(*plVar5 + 0x508) != '\0') {
        FUN_1010d9130(*plVar5,2,pcVar2,local_48,plVar5);
      }
      if (sVar3 - local_48 == 0) {
        (*(code *)PTR__free_101873628)(pcVar2);
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        auVar6 = FUN_1010d0e58();
        *(undefined1 (*) [16])(param_1 + 0x40) = auVar6;
        return 0;
      }
      *(char **)(param_1 + 0x28) = pcVar2;
      *(size_t *)(param_1 + 0x30) = sVar3 - local_48;
      *(size_t *)(param_1 + 0x38) = sVar3;
      return 0;
    }
  }
  return 0x1b;
}




void FUN_1010fdc74(undefined8 param_1,undefined8 param_2)

{
  FUN_1010fdb2c(param_1,param_2,&stack0x00000000);
  return;
}




ulong FUN_1010fdc9c(undefined4 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  size_t sVar15;
  long local_68;
  
  uVar5 = 0;
  plVar11 = (long *)param_2[0xb];
  lVar10 = *plVar11;
  *param_3 = 0;
  *param_4 = 0;
  uVar7 = param_2[2];
  if (uVar7 >> 0xe == 0) {
    pcVar1 = (char *)(lVar10 + 0x908);
    pcVar13 = pcVar1 + uVar7;
    lVar14 = (long)pcVar13 - param_2[3];
    while( true ) {
      if ((void *)*param_2 == (void *)0x0) {
        uVar3 = FUN_1010d9ad8(plVar11,param_1,pcVar13,0x4000 - uVar7,&local_68);
        if (uVar3 == 0x51) {
          return 0;
        }
        uVar2 = 0;
        if (local_68 < 1) {
          uVar2 = uVar3;
        }
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
        uVar5 = (ulong)uVar2;
        if (uVar2 != 0) goto LAB_1010fdf20;
      }
      else {
        _memcpy(pcVar13,(void *)*param_2,param_2[1]);
        local_68 = param_2[1];
        (*(code *)PTR__free_101873628)(*param_2);
        *param_2 = 0;
        param_2[1] = 0;
      }
      if (local_68 < 1) break;
      *(long *)(lVar10 + 0xa8) = *(long *)(lVar10 + 0xa8) + local_68;
      uVar5 = param_2[2] + local_68;
      param_2[2] = uVar5;
      if (local_68 < 1) {
LAB_1010fdeac:
        bVar9 = true;
        if (0x2000 < uVar5) {
LAB_1010fdeb8:
          if (lVar14 != 0) goto LAB_1010fdebc;
          goto LAB_1010fdee8;
        }
      }
      else {
        lVar12 = 0;
        lVar8 = local_68;
        do {
          lVar14 = lVar14 + 1;
          if (*pcVar13 == '\n') {
            if (*(char *)(lVar10 + 0x508) != '\0') {
              FUN_1010d9130(lVar10,1,param_2[3],lVar14,plVar11);
            }
            uVar5 = FUN_1010d98ec(plVar11,2,param_2[3],lVar14);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            iVar4 = (*(code *)param_2[0xd])(plVar11,param_2[3],lVar14,param_3);
            if (iVar4 != 0) {
              sVar15 = (long)pcVar13 - (long)param_2[3];
              _memmove(pcVar1,(void *)param_2[3],sVar15);
              bVar9 = false;
              *(undefined1 *)(lVar10 + sVar15 + 0x908) = 0;
              param_2[3] = pcVar13 + 1;
              *param_4 = param_2[2];
              param_2[2] = 0;
              lVar14 = (local_68 + -1) - lVar12;
              if (lVar14 == 0) goto LAB_1010fdee8;
              bVar9 = false;
              goto LAB_1010fdeb8;
            }
            lVar14 = 0;
            param_2[3] = pcVar13 + 1;
            lVar8 = local_68;
          }
          pcVar13 = pcVar13 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar8);
        if ((lVar14 != lVar8) || (lVar8 < 0x2001)) {
          uVar5 = param_2[2];
          goto LAB_1010fdeac;
        }
        FUN_1010d909c(lVar10,
                      "Excessive server response line length received, %zd bytes. Stripping\n");
        bVar9 = true;
        lVar14 = 0x28;
LAB_1010fdebc:
        param_2[1] = lVar14;
        pvVar6 = (void *)(*(code *)PTR__malloc_101873620)(lVar14);
        *param_2 = pvVar6;
        if (pvVar6 == (void *)0x0) {
          return 0x1b;
        }
        _memcpy(pvVar6,(void *)param_2[3],param_2[1]);
LAB_1010fdee8:
        lVar14 = 0;
        param_2[2] = 0;
        param_2[3] = pcVar1;
        pcVar13 = pcVar1;
      }
      uVar5 = 0;
      uVar7 = param_2[2];
      if ((uVar7 >> 0xe != 0) || (!bVar9)) goto LAB_1010fdf20;
    }
    FUN_1010d9258(lVar10,"response reading failed");
    uVar5 = 0x38;
  }
LAB_1010fdf20:
  *(undefined1 *)(param_2 + 4) = 0;
  return uVar5;
}




undefined4 FUN_1010fdf54(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x1d0);
    uVar1 = 1;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = 0x10000;
    }
    return uVar1;
  }
  return 0;
}




undefined8 FUN_1010fdf84(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long local_28;
  
  uVar1 = FUN_1010d942c(*(long *)(param_1 + 0x58),*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x1d0)
                        ,*(long *)(param_1 + 0x28) +
                         (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)),
                        *(long *)(param_1 + 0x30),&local_28);
  if ((int)uVar1 == 0) {
    local_28 = *(long *)(param_1 + 0x30) - local_28;
    if (local_28 == 0) {
      (*(code *)PTR__free_101873628)(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(long *)(param_1 + 0x28) = 0;
      auVar2 = FUN_1010d0e58();
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




undefined8 FUN_1010fe018(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR__free_101873628)();
    *param_1 = 0;
  }
  return 0;
}




undefined4 FUN_1010fe054(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(code *)PTR__calloc_101873640)(1,0x98);
  *(long *)(*param_1 + 0x218) = lVar1;
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




ulong FUN_1010fe09c(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = *param_1;
  uVar9 = *(uint *)(lVar10 + 0x6cc);
  lVar13 = *(long *)(lVar10 + 0x218);
  *param_2 = 1;
  plVar1 = (long *)(lVar10 + 0x8ad0);
  *(long *)(lVar13 + 0x88) = *plVar1;
  *(undefined8 *)(lVar13 + 0x90) = 0;
  *(undefined1 *)(lVar10 + 0x4ff) = 1;
  switch(uVar9) {
  case 0:
    pcVar7 = "Got invalid RTSP request: RTSPREQ_NONE";
    goto LAB_1010fe5c0;
  case 1:
    break;
  case 2:
    *(undefined1 *)(lVar10 + 0x4ff) = 0;
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    *(undefined1 *)(lVar10 + 0x4ff) = 0;
  default:
switchD_1010fe10c_default:
    if (*(long *)(lVar10 + 0x660) == 0) {
      pcVar7 = "Refusing to issue an RTSP request [%s] without a session ID.";
      goto LAB_1010fe5c0;
    }
    bVar2 = true;
    goto LAB_1010fe1a4;
  case 9:
    goto switchD_1010fe10c_default;
  case 10:
    goto switchD_1010fe10c_default;
  case 0xb:
    *(undefined1 *)(lVar10 + 0x4ff) = 0;
    FUN_1010eb3d0(param_1,0,0xffffffffffffffff,1,lVar13 + 0x28,0xffffffff,0);
    return 0;
  case 0xc:
    pcVar7 = "Got invalid RTSP request: RTSPREQ_LAST";
    goto LAB_1010fe5c0;
  }
  bVar2 = *(long *)(lVar10 + 0x660) != 0;
LAB_1010fe1a4:
  lVar4 = FUN_1010d6790(param_1,"Transport:");
  if (uVar9 == 4 && lVar4 == 0) {
    if (*(long *)(lVar10 + 0x670) == 0) {
      pcVar7 = "Refusing to issue an RTSP SETUP without a Transport: header.";
      goto LAB_1010fe5c0;
    }
    if (param_1[0x6d] != 0) {
      (*(code *)PTR__free_101873628)();
      param_1[0x6d] = 0;
    }
    lVar4 = FUN_1010e7298("Transport: %s\r\n");
    param_1[0x6d] = lVar4;
    if (lVar4 == 0) {
      return 0x1b;
    }
  }
  if (uVar9 == 2) {
    FUN_1010d6790(param_1,"Accept:");
    lVar4 = FUN_1010d6790(param_1,"Accept-Encoding:");
    if ((lVar4 == 0) && (*(long *)(lVar10 + 0x580) != 0)) {
      if (param_1[0x67] != 0) {
        (*(code *)PTR__free_101873628)();
        param_1[0x67] = 0;
      }
      lVar4 = FUN_1010e7298("Accept-Encoding: %s\r\n");
      param_1[0x67] = lVar4;
      if (lVar4 == 0) {
        return 0x1b;
      }
    }
  }
  lVar4 = FUN_1010d6790(param_1,"User-Agent:");
  if ((lVar4 == 0) || (param_1[0x66] == 0)) {
    FUN_1010d6790(param_1,"User-Agent:");
  }
  else {
    (*(code *)PTR__free_101873628)();
    param_1[0x66] = 0;
  }
  if (param_1[0x6a] != 0) {
    (*(code *)PTR__free_101873628)();
    param_1[0x6a] = 0;
  }
  if ((*(long *)(lVar10 + 0x748) == 0) || (lVar4 = FUN_1010d6790(param_1,"Referer:"), lVar4 != 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1010e7298("Referer: %s\r\n");
  }
  param_1[0x6a] = lVar4;
  if (((((uVar9 & 0xf) != 0) && (*(char *)(lVar10 + 0x8ab9) != '\0')) &&
      (lVar4 = FUN_1010d6790(param_1,"Range:"), lVar4 == 0)) && (*(long *)(lVar10 + 0x8ac0) != 0)) {
    if (param_1[0x69] != 0) {
      (*(code *)PTR__free_101873628)();
      param_1[0x69] = 0;
    }
    lVar4 = FUN_1010e7298("Range: %s\r\n");
    param_1[0x69] = lVar4;
  }
  lVar4 = FUN_1010d6790(param_1,"CSeq:");
  if (lVar4 != 0) {
    FUN_1010d9258(lVar10,"CSeq cannot be set as a custom header.");
    return 0x55;
  }
  lVar4 = FUN_1010d6790(param_1,"Session:");
  if (lVar4 == 0) {
    lVar4 = FUN_1010d74d4();
    if (lVar4 == 0) {
      return 0x1b;
    }
    uVar5 = FUN_1010d77b0(lVar4,"%s %s RTSP/1.0\r\nCSeq: %ld\r\n");
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((bVar2) && (uVar5 = FUN_1010d77b0(lVar4,"Session: %s\r\n"), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = FUN_1010d77b0(lVar4,"%s%s%s%s%s%s");
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (((uVar9 == 2) || (uVar9 == 4)) && (uVar5 = FUN_1010d7cdc(lVar10,lVar4), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = FUN_1010d7a70(param_1,0,lVar4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    sVar11 = 0;
    if (uVar9 < 10) {
      lVar12 = 0;
      if ((1 << (ulong)(uVar9 & 0x1f) & 0x308U) != 0) {
        if (*(char *)(lVar10 + 0x501) == '\0') {
          sVar11 = *(size_t *)(lVar10 + 0x2a0);
          if (sVar11 == 0xffffffffffffffff) {
            if (*(char **)(lVar10 + 0x290) == (char *)0x0) {
              sVar11 = 0;
            }
            else {
              sVar11 = _strlen(*(char **)(lVar10 + 0x290));
            }
          }
          lVar12 = 0;
          uVar8 = 2;
        }
        else {
          sVar11 = 0;
          lVar12 = *(long *)(lVar10 + 0x8ae8);
          uVar8 = 4;
        }
        *(undefined4 *)(lVar10 + 0x420) = uVar8;
        if (((long)sVar11 < 1) && (lVar12 < 1)) {
          if (uVar9 == 8) {
            *(undefined4 *)(lVar10 + 0x420) = 5;
            *(undefined1 *)(lVar10 + 0x4ff) = 1;
          }
        }
        else {
          lVar6 = FUN_1010d6790(param_1,"Content-Length:");
          if ((lVar6 == 0) &&
             (uVar5 = FUN_1010d77b0(lVar4,"Content-Length: %ld\r\n"), (int)uVar5 != 0)) {
            return uVar5;
          }
          if ((((uVar9 & 0xfffffffe) == 8) &&
              (lVar6 = FUN_1010d6790(param_1,"Content-Type:"), lVar6 == 0)) &&
             (uVar5 = FUN_1010d77b0(lVar4,"Content-Type: text/parameters\r\n"), (int)uVar5 != 0)) {
            return uVar5;
          }
          if (((uVar9 == 3) && (lVar6 = FUN_1010d6790(param_1,"Content-Type:"), lVar6 == 0)) &&
             (uVar5 = FUN_1010d77b0(lVar4,"Content-Type: application/sdp\r\n"), (int)uVar5 != 0)) {
            return uVar5;
          }
          *(undefined1 *)(lVar10 + 0x8a98) = 0;
        }
      }
    }
    else {
      lVar12 = 0;
    }
    *(undefined1 *)(lVar10 + 0x213) = 1;
    uVar5 = FUN_1010d785c(lVar4,"\r\n",2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((0 < (long)sVar11) &&
       (uVar5 = FUN_1010d785c(lVar4,*(undefined8 *)(lVar10 + 0x290),sVar11), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = FUN_1010d74ec(lVar4,param_1,lVar10 + 0x8b50,0,0);
    if ((int)uVar5 != 0) {
      FUN_1010d9258(lVar10,"Failed sending RTSP request");
      return uVar5;
    }
    lVar4 = lVar13 + 0x30;
    if (lVar12 == 0) {
      lVar4 = 0;
    }
    FUN_1010eb3d0(param_1,0,0xffffffffffffffff,1,lVar13 + 0x28,-(uint)(lVar12 == 0),lVar4);
    *plVar1 = *plVar1 + 1;
    if (*(long *)(lVar13 + 0x30) != 0) {
      FUN_1010d2468(lVar10);
      iVar3 = FUN_1010d1dac(param_1);
      uVar9 = 0;
      if (iVar3 != 0) {
        uVar9 = 0x2a;
      }
      return (ulong)uVar9;
    }
    return 0;
  }
  pcVar7 = "Session ID cannot be set as a custom header.";
LAB_1010fe5c0:
  FUN_1010d9258(lVar10,pcVar7);
  return 0x2b;
}




undefined8 FUN_1010fe830(long *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x218);
  uVar1 = FUN_1010d6540(param_1,param_2,*(int *)(lVar2 + 0x6cc) == 0xb | param_3);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x88) == *(long *)(lVar3 + 0x90) || *(int *)(lVar2 + 0x6cc) == 0xb) {
      if ((*(int *)(lVar2 + 0x6cc) == 0xb) && ((int)param_1[0xa8] == -1)) {
        FUN_1010d909c(lVar2,"Got an RTP Receive with a CSeq of %ld\n");
      }
    }
    else {
      FUN_1010d9258(lVar2,"The CSeq of this request %ld did not match the response %ld");
      uVar1 = 0x55;
    }
  }
  return uVar1;
}




void FUN_1010fe8dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  FUN_1010d666c();
  plVar1 = (long *)(lVar2 + 0x8ad0);
  if (*plVar1 == 0) {
    *plVar1 = 1;
  }
  plVar1 = (long *)(lVar2 + 0x8ad8);
  if (*plVar1 == 0) {
    *plVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  return;
}




undefined8 FUN_1010fe938(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1d0);
  return 0x10000;
}




undefined8 FUN_1010fe948(long param_1)

{
  if (*(long *)(param_1 + 0x530) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(param_1 + 0x530) = 0;
  }
  return 0;
}




undefined8 FUN_1010fe984(long param_1,long *param_2,size_t *param_3,undefined1 *param_4)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  size_t sVar10;
  char *pcVar11;
  
  plVar1 = param_2 + 0xa6;
  if (param_2[0xa6] == 0) {
    plVar7 = (long *)(param_1 + 0xf8);
    sVar10 = *param_3;
LAB_1010fea14:
    pcVar11 = (char *)*plVar7;
    while (0 < (long)sVar10) {
      if (*pcVar11 != '$') goto LAB_1010feb40;
      if ((long)sVar10 < 5) {
LAB_1010fead0:
        *param_4 = 1;
        goto LAB_1010fead8;
      }
      *(uint *)(param_2 + 0xa8) = (uint)(byte)pcVar11[1];
      lVar3 = (ulong)CONCAT11(pcVar11[2],pcVar11[3]) + 4;
      sVar2 = sVar10 - lVar3;
      if ((long)sVar10 < lVar3) goto LAB_1010fead0;
      lVar9 = *param_2;
      pcVar8 = *(code **)(lVar9 + 0x2c0);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = *(code **)(lVar9 + 0x2b0);
      }
      lVar4 = (*pcVar8)(pcVar11,1,lVar3,*(undefined8 *)(lVar9 + 600));
      if (lVar4 == 0x10000001) {
        pcVar11 = "Cannot pause RTP";
LAB_1010febc0:
        FUN_1010d9258(lVar9,pcVar11);
        FUN_1010d9258(param_1,"Got an error writing an RTP packet");
        *param_4 = 0;
        if (*plVar1 != 0) {
          (*(code *)PTR__free_101873628)();
          *plVar1 = 0;
        }
        *plVar1 = 0;
        param_2[0xa7] = 0;
        return 0x17;
      }
      if (lVar4 != lVar3) {
        pcVar11 = "Failed writing RTP data";
        goto LAB_1010febc0;
      }
      pcVar11 = pcVar11 + lVar3;
      sVar10 = sVar2;
      if (*(int *)(param_1 + 0x6cc) == 0xb) {
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
      }
    }
    if (sVar10 == 0) {
      sVar10 = 0;
    }
    else {
LAB_1010fead8:
      if (*pcVar11 == '$') {
        pvVar5 = (void *)(*(code *)PTR__malloc_101873620)(sVar10);
        if (pvVar5 != (void *)0x0) {
          _memcpy(pvVar5,pcVar11,sVar10);
          if (*plVar1 != 0) {
            (*(code *)PTR__free_101873628)();
            *plVar1 = 0;
          }
          param_2[0xa6] = (long)pvVar5;
          param_2[0xa7] = sVar10;
          *param_3 = 0;
          return 0;
        }
        goto LAB_1010feb80;
      }
    }
LAB_1010feb40:
    *(size_t *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + (*param_3 - sVar10);
    *param_3 = sVar10;
    if (*plVar1 != 0) {
      (*(code *)PTR__free_101873628)();
      *plVar1 = 0;
    }
    uVar6 = 0;
    *plVar1 = 0;
    param_2[0xa7] = 0;
  }
  else {
    lVar3 = (*(code *)PTR__realloc_101873630)(param_2[0xa6],*param_3 + param_2[0xa7]);
    if (lVar3 != 0) {
      param_2[0xa6] = lVar3;
      _memcpy((void *)(lVar3 + param_2[0xa7]),*(void **)(param_1 + 0xf8),*param_3);
      sVar10 = param_2[0xa7] + *param_3;
      param_2[0xa7] = sVar10;
      plVar7 = plVar1;
      goto LAB_1010fea14;
    }
LAB_1010feb80:
    if (*plVar1 != 0) {
      (*(code *)PTR__free_101873628)();
      *plVar1 = 0;
    }
    param_2[0xa7] = 0;
    *plVar1 = 0;
    uVar6 = 0x1b;
  }
  return uVar6;
}




bool FUN_1010fec1c(long *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long *local_28;
  
  local_28 = param_1;
  uVar2 = FUN_1010f37c8((int)param_1[0x3a],0xffffffff,0xffffffff,0);
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else if (((uVar2 & 5) == 1) && (*param_1 != 0)) {
    iVar3 = FUN_1010eecec(*param_1,&local_28);
    bVar1 = iVar3 == -1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




undefined8 FUN_1010fec94(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  void *pvVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  
  lVar9 = *param_1;
  iVar3 = FUN_1010f6624("CSeq:",param_2,5);
  if (iVar3 != 0) {
    iVar3 = _sscanf((char *)(param_2 + 4),": %ld");
    if (iVar3 != 1) {
      FUN_1010d9258(lVar9,"Unable to read the CSeq header: [%s]");
      return 0x55;
    }
    *(undefined8 *)(*(long *)(lVar9 + 0x218) + 0x90) = 0;
    *(undefined8 *)(lVar9 + 0x8ae0) = 0;
    return 0;
  }
  iVar3 = FUN_1010f6624("Session:",param_2,8);
  puVar2 = PTR___DefaultRuneLocale_101444130;
  if (iVar3 != 0) {
    pbVar10 = (byte *)(param_2 + 8);
    bVar1 = *pbVar10;
    while (bVar1 != 0) {
      if ((char)bVar1 < '\0') {
        uVar4 = ___maskrune((uint)bVar1,0x4000);
      }
      else {
        uVar4 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x4000;
      }
      if (uVar4 == 0) {
        bVar1 = *pbVar10;
        if (bVar1 != 0) {
          pcVar11 = *(char **)(lVar9 + 0x660);
          pbVar12 = pbVar10;
          if (pcVar11 != (char *)0x0) {
            sVar5 = _strlen(pcVar11);
            iVar3 = _strncmp((char *)pbVar10,pcVar11,sVar5);
            if (iVar3 == 0) {
              return 0;
            }
            FUN_1010d9258(lVar9,"Got RTSP Session ID Line [%s], but wanted ID [%s]");
            return 0x56;
          }
          goto LAB_1010fee14;
        }
        break;
      }
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
    }
    FUN_1010d9258(lVar9,"Got a blank Session ID");
  }
  return 0;
  while( true ) {
    pbVar12 = pbVar8 + 1;
    bVar1 = *pbVar12;
    if (bVar1 == 0) break;
LAB_1010fee14:
    if ((char)bVar1 < '\0') {
      uVar4 = ___maskrune((uint)bVar1,0x500);
    }
    else {
      uVar4 = *(uint *)(puVar2 + (ulong)bVar1 * 4 + 0x3c) & 0x500;
    }
    pbVar8 = pbVar12;
    if ((uVar4 == 0) &&
       ((uVar4 = *pbVar12 - 0x2b, 0x34 < uVar4 ||
        (((1L << ((ulong)uVar4 & 0x3f) & 0x1000000000000dU) == 0 &&
         ((((ulong)uVar4 & 0xff) != 0x31 || (pbVar8 = pbVar12 + 1, *pbVar8 != 0x24)))))))) break;
  }
  sVar5 = (long)pbVar12 - (long)pbVar10;
  pvVar6 = (void *)(*(code *)PTR__malloc_101873620)(sVar5 + 1);
  *(void **)(lVar9 + 0x660) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0x1b;
  }
  else {
    _memcpy(pvVar6,pbVar10,sVar5);
    uVar7 = 0;
    *(undefined1 *)(*(long *)(lVar9 + 0x660) + sVar5) = 0;
  }
  return uVar7;
}




undefined2 FUN_1010feec4(undefined2 param_1)

{
  return param_1;
}




undefined1 FUN_1010feecc(undefined1 param_1)

{
  return param_1;
}




uint FUN_1010feed4(uint param_1)

{
  return param_1 & 0x7fffffff;
}




void FUN_1010feedc(void)

{
  return;
}




uint FUN_1010feee0(uint param_1)

{
  return param_1 & 0x7fffffff;
}




void FUN_1010feee8(void)

{
  return;
}




undefined2 FUN_1010feeec(undefined2 param_1)

{
  return param_1;
}




ulong FUN_1010feef4(ulong param_1)

{
  return param_1 & 0x7fffffffffffffff;
}




void FUN_1010feefc(void)

{
  return;
}




uint FUN_1010fef00(uint param_1)

{
  return param_1 & 0x7fffffff;
}




long * FUN_1010fef08(undefined8 *param_1,byte *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  byte local_51;
  
  plVar1 = (long *)(*(code *)PTR__malloc_101873620)
                             ((ulong)*(uint *)(param_1 + 4) +
                              (ulong)(uint)(*(int *)(param_1 + 3) << 1) + 0x18);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 3;
    *plVar1 = (long)param_1;
    plVar1[1] = (long)plVar2;
    plVar1[2] = (long)plVar1 + (ulong)*(uint *)(param_1 + 3) + 0x18;
    if (*(uint *)((long)param_1 + 0x1c) < (uint)param_3) {
      (*(code *)*param_1)();
      (*(code *)param_1[1])(plVar1[1],param_2,param_3);
      param_2 = (byte *)(plVar1[2] + (ulong)*(uint *)(param_1 + 3));
      (*(code *)param_1[2])(param_2,plVar1[1]);
      param_3 = (ulong)*(uint *)(param_1 + 4);
      plVar2 = (long *)plVar1[1];
    }
    (*(code *)*param_1)(plVar2);
    (*(code *)*param_1)(plVar1[2]);
    if ((int)param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = param_3 & 0xffffffff;
      uVar3 = param_3;
      do {
        local_51 = *param_2 ^ 0x36;
        (*(code *)param_1[1])(plVar1[1],&local_51,1);
        local_51 = *param_2 ^ 0x5c;
        (*(code *)param_1[1])(plVar1[2],&local_51,1);
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
    if (param_3 < *(uint *)((long)param_1 + 0x1c)) {
      do {
        (*(code *)param_1[1])(plVar1[1],&DAT_1013cd660,1);
        (*(code *)param_1[1])(plVar1[2],&DAT_1013cd661,1);
        param_3 = param_3 + 1;
      } while (param_3 < *(uint *)((long)param_1 + 0x1c));
    }
  }
  return plVar1;
}




undefined8 FUN_1010ff0a8(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}




undefined8 FUN_1010ff0c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    param_2 = param_1[2] + (ulong)*(uint *)(lVar1 + 0x18);
  }
  (**(code **)(lVar1 + 0x10))(param_2,param_1[1]);
  (**(code **)(lVar1 + 8))(param_1[2],param_2,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_2,param_1[2]);
  (*(code *)PTR__free_101873628)(param_1);
  return 0;
}




int FUN_1010ff150(char *param_1,size_t param_2)

{
  int iVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  iVar1 = _gethostname(param_1,param_2);
  param_1[param_2 - 1] = '\0';
  if (iVar1 == 0) {
    pcVar2 = _strchr(param_1,0x2e);
    if (pcVar2 == (char *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      *pcVar2 = '\0';
    }
  }
  return iVar1;
}




undefined8 FUN_1010ff1a4(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar5 = *param_1;
  uVar1 = (undefined4)param_1[0x3a];
  pcVar6 = *(char **)(lVar5 + 0x8ab0);
  *param_2 = 1;
  sVar2 = _strlen(pcVar6);
  if (sVar2 < 3) {
    pcVar7 = (char *)0x0;
    pcVar6 = "";
  }
  else {
    pcVar6 = pcVar6 + 2;
    sVar2 = _strlen(pcVar6);
    pcVar7 = pcVar6;
    for (; sVar2 != 0; sVar2 = sVar2 - 1) {
      if (*pcVar7 == '?') {
        *pcVar7 = '\t';
      }
      pcVar7 = pcVar7 + 1;
    }
    pcVar7 = (char *)FUN_1010e5f30(lVar5,pcVar6,0,auStack_5c);
    pcVar6 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      return 0x1b;
    }
  }
  _strlen(pcVar6);
  lVar3 = FUN_1010feef4();
  uVar4 = FUN_1010d942c(param_1,uVar1,pcVar6,lVar3,&local_58);
  if ((int)uVar4 == 0) {
    do {
      uVar4 = FUN_1010d98ec(param_1,2,pcVar6,local_58);
      if ((int)uVar4 != 0) goto LAB_1010ff2f8;
      lVar3 = lVar3 - local_58;
      if (lVar3 < 1) {
        if (pcVar7 != (char *)0x0) {
          (*(code *)PTR__free_101873628)(pcVar7);
        }
        uVar4 = FUN_1010d9320(uVar1,param_1,"\r\n");
        if ((int)uVar4 != 0) {
          FUN_1010d9258(lVar5,"Failed sending Gopher request");
          return uVar4;
        }
        uVar4 = FUN_1010d98ec(param_1,2,"\r\n",2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        FUN_1010eb3d0(param_1,0,0xffffffffffffffff,0,lVar5 + 0x98,0xffffffff,0);
        return 0;
      }
      pcVar6 = pcVar6 + local_58;
      FUN_1010f37c8(0xffffffff,0xffffffff,uVar1,100);
      uVar4 = FUN_1010d942c(param_1,uVar1,pcVar6,lVar3,&local_58);
    } while ((int)uVar4 == 0);
  }
  FUN_1010d9258(lVar5,"Failed sending Gopher request");
LAB_1010ff2f8:
  if (pcVar7 != (char *)0x0) {
    (*(code *)PTR__free_101873628)(pcVar7);
  }
  return uVar4;
}




undefined8 FUN_1010ff3c8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [136];
  
  if ((*(char *)((long)param_1 + 0x2d5) != '\0') && (*(char *)((long)param_1 + 0x2cb) != '\0')) {
    lVar2 = *param_1;
    uVar3 = *(undefined8 *)(lVar2 + 0x218);
    _memset(auStack_b8,0,0x88);
    *(undefined1 **)(lVar2 + 0x218) = auStack_b8;
    *(undefined1 *)(param_1 + 0x59) = 0;
    uVar1 = FUN_1010ff44c(param_1,0,param_1[0x18],(int)param_1[0x1f]);
    *(undefined8 *)(*param_1 + 0x218) = uVar3;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1010ff44c(long *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long local_d0;
  char *local_c0;
  undefined8 local_78;
  long local_70;
  undefined4 local_64;
  
  local_64 = 0;
  if (*(int *)((long)param_1 + (long)param_2 * 4 + 0x658) == 2) {
    return 0;
  }
  bVar7 = false;
  local_d0 = 0;
  lVar21 = *param_1;
  puVar1 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  piVar2 = (int *)((long)param_1 + (long)param_2 * 4 + 0x658);
  uVar5 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  *(undefined1 *)((long)param_1 + 0x2de) = 0;
  pcVar18 = (char *)(lVar21 + 0x908);
  piVar3 = (int *)(lVar21 + 0x128);
  piVar4 = (int *)(lVar21 + 0x8b2c);
LAB_1010ff514:
  iVar10 = *piVar2;
LAB_1010ff518:
  pcVar15 = "";
  if (iVar10 != 0) {
LAB_1010ff73c:
    lVar11 = FUN_1010edb38(lVar21,0,1);
    if (lVar11 < 1) {
LAB_1010ffe68:
      pcVar18 = "Proxy CONNECT aborted due to timeout";
LAB_1010ffe70:
      FUN_1010d9258(lVar21,pcVar18);
      return 0x38;
    }
    iVar10 = FUN_1010f37c8(uVar5,0xffffffff,0xffffffff,0);
    bVar9 = false;
    if (iVar10 == 0) {
      return 0;
    }
    uVar22 = 0;
    lVar11 = 0;
    bVar8 = false;
    pcVar15 = pcVar18;
    uVar23 = 1;
    local_c0 = pcVar18;
    do {
      do {
        if (bVar9 || (0x3fff < uVar22 || uVar23 == 0)) {
          if (bVar9) {
            return 0x38;
          }
          if (*piVar4 == 200) {
            if (!bVar8) goto LAB_1010ffe2c;
LAB_1010ffeac:
            if (*(long *)(lVar21 + 0x1f8) != 0) {
              FUN_1010ee3ec(param_1,*puVar1);
              *puVar1 = 0xffffffff;
            }
            bVar9 = true;
          }
          else {
            uVar13 = FUN_1010d69c0(param_1);
            if ((int)uVar13 != 0) {
              return uVar13;
            }
            if (bVar8 || (char)param_1[0x59] != '\0') goto LAB_1010ffeac;
LAB_1010ffe2c:
            if (*(long *)(lVar21 + 0x1f8) == 0) {
              bVar9 = false;
            }
            else {
              iVar10 = *piVar2;
              if (iVar10 != 2) goto LAB_1010ff518;
              *piVar2 = 0;
              FUN_1010d909c(lVar21,"TUNNEL_STATE switched to: %d\n");
              bVar9 = false;
              if (*(long *)(lVar21 + 0x1f8) != 0) goto LAB_1010ff514;
            }
          }
          if (*piVar3 == 200) {
            *piVar2 = 2;
            if (param_1[0x65] != 0) {
              (*(code *)PTR__free_101873628)();
              param_1[0x65] = 0;
            }
            param_1[0x65] = 0;
            *(undefined1 *)(lVar21 + 0x8a28) = 1;
            FUN_1010d909c(lVar21,"Proxy replied OK to CONNECT request\n");
            *(undefined1 *)(lVar21 + 0x1e9) = 0;
            *(undefined1 *)((long)param_1 + 0x2d7) = 0;
            return 0;
          }
          if (bVar9) {
            if (*(long *)(lVar21 + 0x1f8) == 0) goto LAB_1010fff6c;
            *(undefined1 *)((long)param_1 + 0x2de) = 1;
            FUN_1010d909c(lVar21,"Connect me again please\n");
          }
          else {
            if (*(long *)(lVar21 + 0x1f8) != 0) {
              (*(code *)PTR__free_101873628)();
              *(undefined8 *)(lVar21 + 0x1f8) = 0;
            }
LAB_1010fff6c:
            *(undefined1 *)(param_1 + 0x59) = 1;
            FUN_1010ee3ec(param_1,*puVar1);
            *puVar1 = 0xffffffff;
          }
          *piVar2 = 0;
          if (*(char *)((long)param_1 + 0x2de) != '\0') {
            return 0;
          }
          pcVar18 = "Received HTTP code %d from proxy after CONNECT";
          goto LAB_1010ffe70;
        }
        lVar12 = FUN_1010edb38(lVar21,0,1);
        if (lVar12 < 1) goto LAB_1010ffe68;
        if (999 < lVar12) {
          lVar12 = 1000;
        }
        iVar10 = FUN_1010f37c8(uVar5,0xffffffff,0xffffffff,lVar12);
        uVar19 = uVar23;
        if (iVar10 == 0) goto LAB_1010ffda4;
        if (iVar10 == -1) {
          FUN_1010d9258(lVar21,"Proxy CONNECT aborted due to select/poll error");
          bVar9 = true;
          goto LAB_1010ffda8;
        }
        iVar10 = FUN_1010d9ad8(param_1,uVar5,pcVar15,0x4000 - uVar22,&local_70);
      } while (iVar10 == 0x51);
      if (iVar10 == 0) {
        if (local_70 < 1) {
          if ((*(long *)(lVar21 + 0x270) != 0) && (*(long *)(lVar21 + 0x8a20) != 0)) {
            *(undefined1 *)((long)param_1 + 0x2de) = 1;
            FUN_1010d909c(lVar21,"Proxy CONNECT connection closed");
            goto LAB_1010ffa6c;
          }
          FUN_1010d9258(lVar21,"Proxy CONNECT aborted");
          bVar9 = true;
          uVar19 = 0;
        }
        else if (uVar23 < 2) {
          lVar14 = 0;
          lVar12 = 0;
          uVar22 = local_70 + uVar22;
          lVar16 = local_70;
          do {
            lVar11 = (long)(int)lVar11 + 1;
            if (*pcVar15 == '\n') {
              if (*(char *)(lVar21 + 0x508) != '\0') {
                FUN_1010d9130(lVar21,1,local_c0,lVar11,param_1);
              }
              uVar20 = 2;
              if (*(char *)(lVar21 + 0x4fc) != '\0') {
                uVar20 = 3;
              }
              uVar13 = FUN_1010d98ec(param_1,uVar20,local_c0,lVar11);
              *(long *)(lVar21 + 0x8b48) = *(long *)(lVar21 + 0x8b48) + lVar11;
              *(long *)(lVar21 + 0xa8) = *(long *)(lVar21 + 0xa8) + lVar11;
              if ((int)uVar13 != 0) {
                return uVar13;
              }
              if ((*local_c0 == '\n') || (*local_c0 == '\r')) {
                if ((*piVar3 == 0x197) && (*(char *)(lVar21 + 0x8a30) == '\0')) {
                  if (local_d0 == 0) {
                    if (bVar7) {
                      *(undefined1 *)(lVar21 + 0x1e9) = 1;
                      FUN_1010d909c(lVar21,"%zd bytes of chunk left\n");
                      bVar9 = local_c0[1] == '\n';
                      pcVar15 = local_c0 + 1;
                      if (!bVar9) {
                        pcVar15 = local_c0;
                      }
                      iVar10 = FUN_1010ed6b8(param_1,pcVar15 + 1,
                                             local_70 -
                                             ((long)(((ulong)bVar9 << 0x20) - lVar14) >> 0x20),
                                             &local_70);
                      local_c0 = pcVar15;
                      if (iVar10 == -1) {
                        FUN_1010d909c(lVar21,"chunk reading DONE\n");
                        uVar19 = 0;
                        local_d0 = 0;
                        *piVar2 = 2;
                      }
                      else {
                        FUN_1010d909c(lVar21,"Read %zd bytes of chunk, continue\n");
                        local_d0 = 0;
                        uVar19 = 2;
                      }
                    }
                    else {
                      uVar19 = 0;
                      local_d0 = 0;
                    }
                  }
                  else {
                    FUN_1010d909c(lVar21,"Ignore %ld bytes of response-body\n");
                    local_d0 = (local_d0 - local_70) + lVar12;
                    uVar19 = 0;
                    if (0 < local_d0) {
                      uVar19 = 2;
                    }
                  }
                }
                else {
                  if ((*piVar4 == 200) && (local_70 != 0x100000000 - lVar14 >> 0x20)) {
                    FUN_1010d9258(lVar21,
                                  "Proxy CONNECT followed by %zd bytes of opaque data. Data ignored (known bug #39)"
                                 );
                  }
                  uVar19 = 0;
                }
                bVar9 = false;
                uVar22 = 0;
                *piVar2 = 2;
                pcVar15 = pcVar18;
                goto LAB_1010ffda8;
              }
              cVar6 = local_c0[lVar11];
              local_c0[lVar11] = '\0';
              iVar10 = FUN_1010f6624("WWW-Authenticate:",local_c0,0x11);
              if ((iVar10 == 0) || (*piVar3 != 0x191)) {
                iVar10 = FUN_1010f6624("Proxy-authenticate:",local_c0,0x13);
                if ((iVar10 != 0) && (*piVar3 == 0x197)) {
                  iVar10 = 0x197;
                  goto LAB_1010ffc6c;
                }
                iVar10 = FUN_1010f6624("Content-Length:",local_c0,0xf);
                if (iVar10 == 0) {
                  uVar17 = FUN_1010d7970(local_c0,"Connection:","close");
                  if ((uVar17 & 1) == 0) {
                    iVar10 = FUN_1010d7970(local_c0,"Transfer-Encoding:","chunked");
                    if (iVar10 == 0) {
                      uVar17 = FUN_1010d7970(local_c0,"Proxy-Connection:","close");
                      if ((uVar17 & 1) != 0) goto LAB_1010ffd64;
                      iVar10 = _sscanf(local_c0,"HTTP/1.%d %d");
                      if (iVar10 == 2) {
                        *piVar4 = *piVar3;
                      }
                    }
                    else {
                      FUN_1010d909c(lVar21,"CONNECT responded chunked\n");
                      FUN_1010ed6a8(param_1);
                      bVar7 = true;
                    }
                  }
                  else {
LAB_1010ffd64:
                    bVar8 = true;
                  }
                }
                else {
                  local_d0 = _strtol(local_c0 + 0xf,(char **)0x0,10);
                }
              }
              else {
                iVar10 = 0x191;
LAB_1010ffc6c:
                lVar16 = FUN_1010d687c(local_c0);
                if (lVar16 == 0) {
                  return 0x1b;
                }
                uVar13 = FUN_1010d71d4(param_1,iVar10 == 0x197,lVar16);
                (*(code *)PTR__free_101873628)(lVar16);
                if ((int)uVar13 != 0) {
                  return uVar13;
                }
              }
              local_c0[lVar11] = cVar6;
              local_c0 = pcVar15 + 1;
              lVar11 = 0;
              lVar16 = local_70;
            }
            pcVar15 = pcVar15 + 1;
            lVar12 = lVar12 + 1;
            lVar14 = lVar14 + -0x100000000;
          } while (lVar12 < lVar16);
LAB_1010ffda4:
          bVar9 = false;
        }
        else if (local_d0 == 0) {
          local_78 = 0;
          iVar10 = FUN_1010ed6b8(param_1,pcVar18,local_70,&local_78);
          if (iVar10 == -1) {
            FUN_1010d909c(lVar21,"chunk reading DONE\n");
            bVar9 = false;
            uVar22 = 0;
            local_d0 = 0;
            *piVar2 = 2;
            pcVar15 = pcVar18;
            uVar19 = 0;
          }
          else {
            FUN_1010d909c(lVar21,"Read %zd bytes of chunk, continue\n");
            bVar9 = false;
            uVar22 = 0;
            local_d0 = 0;
            pcVar15 = pcVar18;
          }
        }
        else {
          bVar9 = false;
          uVar22 = 0;
          local_d0 = local_d0 - local_70;
          pcVar15 = pcVar18;
          uVar19 = 0;
          if (0 < local_d0) {
            uVar19 = uVar23;
          }
        }
      }
      else {
LAB_1010ffa6c:
        bVar9 = false;
        uVar19 = 0;
      }
LAB_1010ffda8:
      iVar10 = FUN_1010d1dac(param_1);
      uVar23 = uVar19;
      if (iVar10 != 0) {
        return 0x2a;
      }
    } while( true );
  }
  FUN_1010d909c(lVar21,"Establish HTTP proxy tunnel to %s:%hu\n");
  if (*(long *)(lVar21 + 0x1f8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(lVar21 + 0x1f8) = 0;
  }
  lVar11 = FUN_1010d74d4();
  if (lVar11 != 0) {
    lVar12 = FUN_1010e7298("%s:%hu");
    if (lVar12 != 0) {
      uVar13 = FUN_1010d6dfc(param_1,"CONNECT",lVar12,1);
      (*(code *)PTR__free_101873628)(lVar12);
      if ((int)uVar13 != 0) {
        (*(code *)PTR__free_101873628)(lVar11);
        return uVar13;
      }
      lVar12 = FUN_1010e7298("%s%s%s:%hu");
      if (lVar12 != 0) {
        lVar14 = FUN_1010d67f8(param_1,"Host:");
        if ((lVar14 != 0) ||
           (pcVar15 = (char *)FUN_1010e7298("Host: %s\r\n"), pcVar15 != (char *)0x0)) {
          FUN_1010d67f8(param_1,"Proxy-Connection:");
          FUN_1010d67f8(param_1,"User-Agent:");
          uVar13 = FUN_1010d77b0(lVar11,"CONNECT %s HTTP/%s\r\n%s%s%s%s");
          if (*pcVar15 != '\0') {
            (*(code *)PTR__free_101873628)(pcVar15);
          }
          (*(code *)PTR__free_101873628)(lVar12);
          if (((((int)uVar13 != 0) || (uVar13 = FUN_1010d7a70(param_1,1,lVar11), (int)uVar13 != 0))
              || (uVar13 = FUN_1010d77b0(lVar11,"\r\n"), (int)uVar13 != 0)) ||
             (uVar13 = FUN_1010d74ec(lVar11,param_1,lVar21 + 0x8b50,0,param_2), (int)uVar13 != 0)) {
            FUN_1010d9258(lVar21,"Failed sending CONNECT to proxy");
            return uVar13;
          }
          *piVar2 = 1;
          goto LAB_1010ff73c;
        }
        (*(code *)PTR__free_101873628)(lVar12);
      }
    }
    (*(code *)PTR__free_101873628)(lVar11);
  }
  return 0x1b;
}




undefined8 FUN_1010ffff0(undefined8 *param_1,int param_2,long param_3)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  
  piVar1 = (int *)(param_1 + 0x7d);
  if (param_2 == 0) {
    piVar1 = (int *)(param_1 + 0x79);
  }
  iVar3 = FUN_1010f6624("NTLM",param_3,4);
  puVar2 = PTR___DefaultRuneLocale_101444130;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    pbVar6 = (byte *)(param_3 + 4);
    uVar5 = (uint)*pbVar6;
    if (*pbVar6 != 0) {
      do {
        if ((char)(byte)uVar5 < '\0') {
          uVar5 = ___maskrune(uVar5,0x4000);
        }
        else {
          uVar5 = *(uint *)(puVar2 + (ulong)(byte)uVar5 * 4 + 0x3c) & 0x4000;
        }
        if (uVar5 == 0) {
          if (*pbVar6 != 0) {
            uVar4 = FUN_101101254(*param_1,pbVar6,piVar1);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            iVar3 = 2;
            goto LAB_1011000b8;
          }
          break;
        }
        pbVar6 = pbVar6 + 1;
        uVar5 = (uint)*pbVar6;
      } while (uVar5 != 0);
    }
    if (*piVar1 == 0) {
      iVar3 = 1;
LAB_1011000b8:
      uVar4 = 0;
      *piVar1 = iVar3;
    }
    else if (*piVar1 == 3) {
      FUN_1010d909c(*param_1,"NTLM handshake rejected\n");
      FUN_101102f0c(param_1 + 0x79);
      FUN_101102f0c(param_1 + 0x7d);
      FUN_101100350(param_1);
      *piVar1 = 0;
      uVar4 = 9;
    }
    else {
      FUN_1010d909c(*param_1,"NTLM handshake failure (internal error)\n");
      uVar4 = 9;
    }
  }
  return uVar4;
}

