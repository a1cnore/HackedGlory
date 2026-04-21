// functions/019be — 12 functions
#include "libGameKindred.h"




void FUN_019be0f4(void)

{
  FUN_019bdfa0(0x38f,0x61);
  return;
}




undefined8 FUN_019be100(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else if ((param_2 == (undefined8 *)0x0) || (*(int *)(param_2 + 0x118a) != -0x3f212453)) {
    uVar1 = 2;
  }
  else if (param_2[0xc] == 0) {
    lVar2 = FUN_019da388(&LAB_019be260);
    if (lVar2 == 0) {
      uVar1 = 3;
    }
    else {
      param_2[0x1157] = lVar2;
      if (*(int *)(param_2 + 3) != 0) {
        *(undefined4 *)(param_2 + 3) = 0;
      }
      if ((*(char *)((long)param_2 + 0x535) == '\0') || (*(int *)(param_2 + 0xb) == 1)) {
        if ((param_2[10] == 0) || (*(int *)(param_2 + 0xb) == 0)) {
          lVar2 = param_1[8];
          *(undefined4 *)(param_2 + 0xb) = 2;
          param_2[10] = lVar2;
        }
      }
      else {
        lVar2 = FUN_019c3460();
        if (lVar2 != 0) {
          param_2[10] = lVar2;
          *(undefined4 *)(param_2 + 0xb) = 1;
        }
      }
      param_2[0x120] = param_1[0xc];
      param_2[0x1165] = param_2[0x70];
      *param_2 = 0;
      if (param_1[1] == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        param_1[1] = (long)param_2;
      }
      else {
        puVar3 = (undefined8 *)param_1[2];
        *puVar3 = param_2;
        param_2[1] = puVar3;
      }
      param_1[2] = (long)param_2;
      param_2[0xc] = param_1;
      FUN_019be274(param_2,1);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[3] = CONCAT44((int)((ulong)param_1[3] >> 0x20) + 1,(int)param_1[3] + 1);
      FUN_019be434(param_1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}




void FUN_019be274(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_50;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x8a78);
    if (param_2 == 0) {
      if ((*plVar1 != 0) || (*(long *)(param_1 + 0x8a80) != 0)) {
        lVar3 = *(long *)(param_1 + 0x8ab8);
        iVar2 = FUN_019c1b78(*(undefined8 *)(lVar5 + 0x48),param_1 + 0x8a88,
                             (undefined8 *)(lVar5 + 0x48));
        if (iVar2 != 0) {
          FUN_019c9f64(param_1,"Internal error clearing splay node = %d\n",iVar2);
        }
        while (*(long *)(lVar3 + 0x18) != 0) {
          FUN_019da474(lVar3,*(undefined8 *)(lVar3 + 8),0);
        }
        *plVar1 = 0;
        *(undefined8 *)(param_1 + 0x8a80) = 0;
      }
    }
    else {
      auVar6 = FUN_019c338c();
      local_50 = auVar6._0_8_ + param_2 / 1000;
      lStack_48 = auVar6._8_8_ + (param_2 % 1000) * 1000;
      if (999999 < lStack_48) {
        local_50 = local_50 + 1;
        lStack_48 = lStack_48 + -1000000;
      }
      if (*plVar1 != 0 || *(long *)(param_1 + 0x8a80) != 0) {
        lVar3 = FUN_019c33ec();
        if (0 < lVar3) {
          FUN_019c0b0c(*(undefined8 *)(param_1 + 0x8ab8),&local_50);
          return;
        }
        FUN_019c0b0c(*(undefined8 *)(param_1 + 0x8ab8),plVar1);
        iVar2 = FUN_019c1b78(*(undefined8 *)(lVar5 + 0x48),param_1 + 0x8a88,
                             (undefined8 *)(lVar5 + 0x48));
        if (iVar2 != 0) {
          FUN_019c9f64(param_1,"Internal error removing splay node = %d\n",iVar2);
        }
      }
      *(long *)(param_1 + 0x8a80) = lStack_48;
      *plVar1 = local_50;
      *(long *)(param_1 + 0x8ab0) = param_1;
      uVar4 = FUN_019c19a8(*plVar1,*(long *)(param_1 + 0x8a80),*(undefined8 *)(lVar5 + 0x48),
                           param_1 + 0x8a88);
      *(undefined8 *)(lVar5 + 0x48) = uVar4;
    }
  }
  return;
}




void FUN_019be434(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long local_18;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_019bef04(param_1,&local_18);
    if (local_18 < 0) {
      if ((*(long *)(param_1 + 0xc0) == 0) && (*(long *)(param_1 + 200) == 0)) {
        return;
      }
      *(long *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      pcVar2 = *(code **)(param_1 + 0xb0);
      uVar1 = *(undefined8 *)(param_1 + 0xb8);
      local_18 = -1;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x48);
      if ((*(long *)(lVar3 + 0x18) == *(long *)(param_1 + 0xc0)) &&
         (*(long *)(lVar3 + 0x20) == *(long *)(param_1 + 200))) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 0x18);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar3 + 0x20);
      *(long *)(param_1 + 0xc0) = lVar4;
      pcVar2 = *(code **)(param_1 + 0xb0);
      uVar1 = *(undefined8 *)(param_1 + 0xb8);
    }
    (*pcVar2)(param_1,local_18,uVar1);
  }
  return;
}




undefined8 FUN_019be4c8(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar5 = 1;
  }
  else if ((param_2 == (long *)0x0) || ((int)param_2[0x118a] != -0x3f212453)) {
    uVar5 = 2;
  }
  else {
    if (param_2[0xc] != 0) {
      plVar6 = param_2 + 2;
      puVar7 = (undefined8 *)*plVar6;
      uVar2 = *(uint *)(param_2 + 3);
      if (puVar7 == (undefined8 *)0x0) {
        bVar3 = false;
      }
      else {
        bVar3 = (long *)*puVar7 == param_2;
      }
      if (uVar2 < 0x10) {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
      }
      if (((puVar7 != (undefined8 *)0x0) && ((uVar2 & 0xfffffff8) == 8)) &&
         (1 < (ulong)(*(long *)(puVar7[0x74] + 0x18) + *(long *)(puVar7[0x73] + 0x18)))) {
        *(undefined1 *)(puVar7 + 0x5c) = 1;
        *puVar7 = param_2;
      }
      FUN_019be274(param_2,0);
      lVar4 = param_2[0x1157];
      if (lVar4 != 0) {
        FUN_019da520(lVar4,0);
        param_2[0x1157] = 0;
      }
      if ((int)param_2[0xb] == 2) {
        param_2[10] = 0;
        *(undefined4 *)(param_2 + 0xb) = 0;
      }
      if (*plVar6 != 0) {
        if (bVar3) {
          FUN_019d2460(plVar6,*(undefined4 *)((long)param_2 + 0x1c),uVar2 < 0x10);
        }
        else {
          FUN_019cfdac(param_2);
        }
      }
      FUN_019d9e64(param_2 + 0x1166);
      param_2[0x120] = 0;
      *(undefined4 *)(param_2 + 3) = 0x10;
      FUN_019be6c8(param_1,param_2);
      if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[2] = 0;
        *plVar6 = 0;
      }
      param_2[0xc] = 0;
      for (plVar6 = *(long **)param_1[4]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[2]) {
        if (*(long **)(*plVar6 + 8) == param_2) {
          FUN_019da474((long *)param_1[4],plVar6,0);
          break;
        }
      }
      lVar4 = *param_2;
      plVar6 = (long *)param_2[1];
      if (plVar6 == (long *)0x0) {
        param_1[1] = lVar4;
      }
      else {
        *plVar6 = lVar4;
        lVar4 = *param_2;
      }
      plVar1 = param_1 + 2;
      if (lVar4 != 0) {
        plVar1 = (long *)(lVar4 + 8);
      }
      *plVar1 = (long)plVar6;
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      FUN_019be434(param_1);
    }
    uVar5 = 0;
  }
  return uVar5;
}




void FUN_019be6c8(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long extraout_x11;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  int local_7c;
  int local_78 [6];
  
  local_78[4] = 0xffffffff;
  local_78[0] = -1;
  local_78[1] = -1;
  local_78[2] = -1;
  local_78[3] = -1;
  uVar2 = FUN_019beb1c(param_2,local_78);
  uVar12 = 0;
  do {
    uVar4 = (uint)uVar12;
    if ((0x10001 << (ulong)(uVar4 & 0x1f) & uVar2) == 0) break;
    local_7c = local_78[uVar12];
    plVar3 = (long *)FUN_019daa50(*(undefined8 *)(param_1 + 0x50),&local_7c,4);
    uVar5 = (uint)((1 << (ulong)(uVar4 & 0x1f) & uVar2) != 0);
    if ((0x10000 << (ulong)(uVar4 & 0x1f) & uVar2) != 0) {
      uVar5 = uVar5 | 2;
    }
    if (plVar3 == (long *)0x0) {
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      local_78[5] = local_7c;
      plVar3 = (long *)FUN_019daa50(uVar11,local_78 + 5,4);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(*(code *)PTR_calloc_02bf74c8)(1,0x20);
        if (plVar3 == (long *)0x0) {
          return;
        }
        *plVar3 = param_2;
        *(int *)((long)plVar3 + 0x14) = local_78[5];
        lVar10 = FUN_019da86c(uVar11,local_78 + 5,4,plVar3);
        if (lVar10 == 0) {
          (*(code *)PTR_free_02bf74b0)(plVar3);
          return;
        }
      }
LAB_019be7e8:
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))
                  (param_2,local_7c,uVar5,*(undefined8 *)(param_1 + 0x38),plVar3[3]);
      }
      *(uint *)(plVar3 + 2) = uVar5;
    }
    else if (*(uint *)(plVar3 + 2) != uVar5) goto LAB_019be7e8;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 5);
  if (0 < *(int *)(param_2 + 0x4c)) {
    lVar10 = 0;
    do {
      local_7c = *(int *)(param_2 + lVar10 * 4 + 0x38);
      if ((int)uVar12 != 0) {
        uVar7 = 0;
        do {
          if (local_7c == local_78[uVar7]) {
            local_7c = -1;
            goto LAB_019be970;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uVar12 & 0xffffffff));
      }
      if ((local_7c != -1) &&
         (plVar3 = (long *)FUN_019daa50(*(undefined8 *)(param_1 + 0x50),&local_7c,4),
         plVar3 != (long *)0x0)) {
        lVar6 = *(long *)(param_2 + 0x10);
        if (lVar6 == 0) {
LAB_019be944:
          if (*(code **)(param_1 + 0x30) != (code *)0x0) {
            (**(code **)(param_1 + 0x30))
                      (param_2,local_7c,4,*(undefined8 *)(param_1 + 0x38),plVar3[3]);
          }
          FUN_019c02d4(*(undefined8 *)(param_1 + 0x50),local_7c);
        }
        else {
          plVar8 = *(long **)(lVar6 + 0x3a0);
          if ((plVar8 == (long *)0x0) || ((ulong)plVar8[3] < 2)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
            if (*plVar3 == param_2) {
              plVar8 = (long *)*plVar8;
              lVar9 = extraout_x11;
              if ((plVar8 == (long *)0x0) || (lVar9 = *plVar8, lVar9 != param_2)) {
                bVar1 = false;
                *plVar3 = lVar9;
              }
              else {
                bVar1 = false;
                *plVar3 = *(long *)plVar8[2];
              }
            }
          }
          plVar8 = *(long **)(lVar6 + 0x398);
          if ((plVar8 == (long *)0x0) || ((ulong)plVar8[3] < 2)) {
            if (bVar1) goto LAB_019be944;
          }
          else {
            lVar6 = *plVar3;
            if (lVar6 == param_2) {
              plVar8 = (long *)*plVar8;
              if ((plVar8 == (long *)0x0) || (lVar6 = *plVar8, lVar6 != param_2)) {
                *plVar3 = lVar6;
              }
              else {
                *plVar3 = *(long *)plVar8[2];
              }
            }
          }
        }
      }
LAB_019be970:
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0x4c));
  }
  memcpy((void *)(param_2 + 0x38),local_78,(uVar12 & 0xffffffff) << 2);
  *(int *)(param_2 + 0x4c) = (int)uVar12;
  return;
}




bool FUN_019be9cc(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x58) != '\0';
  }
  return bVar1;
}




void FUN_019be9e0(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}




ulong FUN_019beb1c(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x8ad1) != '\0') {
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
LAB_019bec00:
    uVar4 = 0;
  }
  else {
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
      if ((int)plVar3[0xd7] == 1) {
        *param_2 = (int)plVar3[0x3a];
        uVar4 = 1;
      }
      break;
    case 6:
      uVar4 = FUN_019cff34(plVar3,param_2,5);
      return uVar4;
    case 8:
    case 9:
      uVar4 = FUN_019cff4c(plVar3,param_2,5);
      return uVar4;
    case 10:
      if (*(code **)(plVar3[100] + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019bebfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(plVar3[100] + 0x50))(plVar3,param_2,5);
        return uVar4;
      }
      goto LAB_019bec00;
    case 0xb:
    case 0xc:
    case 0xd:
      uVar4 = FUN_019d927c(plVar3,param_2,5);
      return uVar4;
    }
  }
  return uVar4;
}




undefined8 FUN_019bec08(long *param_1,long param_2,uint param_3,int param_4,int *param_5)

{
  ulong uVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  long *plVar13;
  uint uVar14;
  ulong local_80;
  int local_74 [5];
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  FUN_019bef04(param_1,&local_80);
  plVar13 = (long *)param_1[1];
  uVar14 = 0;
  iVar7 = (int)local_80;
  if ((long)param_4 <= (long)local_80 || 0x7fffffffffffffff < local_80) {
    iVar7 = param_4;
  }
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    uVar5 = FUN_019beb1c(plVar13,local_74);
    uVar9 = 0;
    do {
      if ((1 << (ulong)((uint)uVar9 & 0x1f) & uVar5) == 0) {
        iVar10 = -1;
      }
      else {
        iVar10 = local_74[uVar9];
        uVar14 = uVar14 + 1;
      }
      if ((1 << (ulong)((uint)uVar9 + 0x10 & 0x1f) & uVar5) != 0) {
        iVar10 = local_74[uVar9];
        uVar14 = uVar14 + 1;
      }
    } while ((iVar10 != -1) && (uVar9 = uVar9 + 1, uVar9 < 5));
  }
  if (uVar14 + param_3 == 0 && param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (*(code *)PTR_malloc_02bf74a8)((ulong)(uVar14 + param_3) << 3);
    if (lVar8 == 0) {
      return 3;
    }
  }
  if ((uVar14 == 0) || (plVar13 = (long *)param_1[1], plVar13 == (long *)0x0)) {
    uVar5 = 0;
    uVar6 = 0;
    if (param_3 == 0) goto LAB_019bedf4;
LAB_019bee60:
    uVar9 = (ulong)param_3;
    puVar11 = (ushort *)(param_2 + 4);
    uVar5 = uVar6;
    do {
      *(undefined4 *)(lVar8 + (ulong)uVar5 * 8) = *(undefined4 *)(puVar11 + -2);
      puVar12 = (ushort *)(lVar8 + (ulong)uVar5 * 8 + 4);
      *puVar12 = 0;
      uVar3 = *puVar11;
      *puVar12 = uVar3 & 1;
      uVar4 = *puVar11;
      if ((uVar4 & 6) != 0) {
        *puVar12 = uVar4 & 4 | uVar4 & 2 | uVar3 & 1;
      }
      uVar5 = uVar5 + 1;
      uVar9 = uVar9 - 1;
      puVar11 = puVar11 + 4;
    } while (uVar9 != 0);
    uVar5 = uVar6 + param_3;
    if (uVar5 != 0) goto LAB_019bedf8;
LAB_019beec8:
    iVar7 = 0;
LAB_019beecc:
    if (lVar8 == 0) goto LAB_019beee4;
  }
  else {
    uVar5 = 0;
    do {
      uVar6 = FUN_019beb1c(plVar13,local_74);
      uVar9 = 0;
      do {
        if ((1 << (ulong)((uint)uVar9 & 0x1f) & uVar6) == 0) {
          iVar10 = -1;
        }
        else {
          iVar10 = local_74[uVar9];
          piVar2 = (int *)(lVar8 + (ulong)uVar5 * 8);
          *(undefined2 *)(piVar2 + 1) = 1;
          uVar5 = uVar5 + 1;
          *piVar2 = iVar10;
          iVar10 = local_74[uVar9];
        }
        if ((1 << (ulong)((uint)uVar9 + 0x10 & 0x1f) & uVar6) != 0) {
          iVar10 = local_74[uVar9];
          piVar2 = (int *)(lVar8 + (ulong)uVar5 * 8);
          *(undefined2 *)(piVar2 + 1) = 4;
          uVar5 = uVar5 + 1;
          *piVar2 = iVar10;
          iVar10 = local_74[uVar9];
        }
      } while ((iVar10 != -1) && (uVar9 = uVar9 + 1, uVar9 < 5));
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
    uVar6 = uVar5;
    if (param_3 != 0) goto LAB_019bee60;
LAB_019bedf4:
    if (uVar5 == 0) goto LAB_019beec8;
LAB_019bedf8:
    FUN_019c9f64(0,"Curl_poll(%d ds, %d ms)\n",uVar5,iVar7);
    iVar7 = FUN_019c1700(lVar8,uVar5,iVar7);
    if ((iVar7 == 0) || (param_3 == 0)) goto LAB_019beecc;
    uVar9 = (ulong)param_3;
    puVar11 = (ushort *)(param_2 + 6);
    do {
      uVar1 = (ulong)uVar14;
      uVar9 = uVar9 - 1;
      uVar14 = uVar14 + 1;
      *puVar11 = *(ushort *)(lVar8 + uVar1 * 8 + 6) & 7;
      puVar11 = puVar11 + 4;
    } while (uVar9 != 0);
  }
  (*(code *)PTR_free_02bf74b0)(lVar8);
LAB_019beee4:
  if (param_5 != (int *)0x0) {
    *param_5 = iVar7;
  }
  return 0;
}




void FUN_019bef04(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar4 = -1;
  }
  else {
    auVar5 = FUN_019c338c();
    lVar1 = auVar5._0_8_;
    lVar2 = FUN_019c1898(0,0,*(undefined8 *)(param_1 + 0x48));
    *(long *)(param_1 + 0x48) = lVar2;
    lVar3 = *(long *)(lVar2 + 0x18);
    lVar4 = 0;
    if ((lVar1 <= lVar3) && ((lVar1 < lVar3 || (lVar4 = 0, auVar5._8_8_ < *(long *)(lVar2 + 0x20))))
       ) {
      lVar4 = FUN_019c33ec(lVar3,*(long *)(lVar2 + 0x20),lVar1,auVar5._8_8_);
      if (lVar4 == 0) {
        lVar4 = 1;
      }
      *param_2 = lVar4;
      return;
    }
  }
  *param_2 = lVar4;
  return;
}




int FUN_019befa4(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  _union_1457 local_88 [4];
  char local_68;
  
  auVar8 = FUN_019c338c();
  uVar5 = auVar8._8_8_;
  uVar3 = auVar8._0_8_;
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    iVar6 = 1;
  }
  else {
    plVar7 = (long *)param_1[1];
    if (plVar7 == (long *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      do {
        plVar1 = plVar7 + 0x1166;
        if ((((char)plVar7[0xe1] != '\0') && (plVar7[0x1169] == 0)) &&
           (iVar2 = FUN_019d9e28(plVar1), iVar2 != 0)) {
          return 3;
        }
        FUN_019bf128(plVar7,local_88);
        do {
          iVar2 = FUN_019bf19c(param_1,uVar3,uVar5,plVar7);
        } while (iVar2 == -1);
        if (local_68 == '\0') {
          sigaction(0xd,(sigaction *)local_88,(sigaction *)0x0);
        }
        if (((char)plVar7[0xe1] != '\0') && ((iVar2 != 0 || ((int)*plVar1 == 6)))) {
          FUN_019d9e64(plVar1);
        }
        plVar7 = (long *)*plVar7;
        if (iVar2 != 0) {
          iVar6 = iVar2;
        }
      } while (plVar7 != (long *)0x0);
    }
    do {
      lVar4 = FUN_019c1a80(uVar3,uVar5,param_1[9],local_88);
      param_1[9] = lVar4;
      if (local_88[0].sa_handler == (__sighandler_t)0x0) break;
      FUN_019bff64(uVar3,uVar5,param_1,*(undefined8 *)(local_88[0].sa_handler + 0x28));
    } while (local_88[0].sa_handler != (__sighandler_t)0x0);
    *param_2 = *(undefined4 *)((long)param_1 + 0x1c);
    if (iVar6 < 1) {
      FUN_019be434(param_1);
    }
  }
  return iVar6;
}

